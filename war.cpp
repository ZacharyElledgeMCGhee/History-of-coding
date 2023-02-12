// Zachary Elledge-McGhee
// WAR
// 12-2-2020

#include <iostream>
#include <fstream>
#include "p2queue.h"

using namespace std;

int main()
{
    // declare and initialize queues for plaers hands
    Queue<int> player1Cards; 
    initialize(player1Cards);
    Queue<int> Player2Cards;
    initialize(Player2Cards);
    // declare and initialize queues for ties
    Queue<int> tie1;
    initialize(tie1);
    Queue<int> tie2;
    initialize(tie2);
    // initialize variables
    int player1Card, player2Card;
    int x = 0; 
    string cards; 
    // gather files for players starting cards
    ifstream finPlayer1, finPlayer2;
    finPlayer1.open("player1");
    finPlayer2.open("player2");

    // read in player1 cards and put into player1 queue
    while(finPlayer1 >> cards) 
    {
        if(cards == "J")
            push(player1Cards, 11);
        else if(cards == "Q")
            push(player1Cards, 12);
        else if(cards == "K")
            push(player1Cards, 13);
        else if(cards == "A")
            push(player1Cards, 14);
        else
            push(player1Cards, stoi(cards));
    }
    
    // read in player2 cards and put into player2 queue
    while(finPlayer2 >> cards) 
    {
        if(cards == "J")
            push(Player2Cards, 11);
        else if(cards == "Q")
            push(Player2Cards, 12);
        else if(cards == "K")
            push(Player2Cards, 13);
        else if(cards == "A")
            push(Player2Cards, 14);
        else
            push(Player2Cards, stoi(cards));
    }
    
    // Get ready for some WAR!!!
    while(!isEmpty(player1Cards)&&!isEmpty(Player2Cards) && x<=5000) 
    {
        // play war until a player is out of cards or until 5000 hands have been played
        player1Card = pop(player1Cards); 
        player2Card = pop(Player2Cards);
        // take the first card in each players hand
        
        // if player one has a higher card
        if(player1Card>player2Card) 
        {
            // if there is a tie(WAR)
            if(!isEmpty(tie1)) 
            {
                while(!isEmpty(tie1)) 
                {
                    push(player1Cards, pop(tie1));
                }
                push(player1Cards, player1Card);

                while(!isEmpty(tie2)) 
                {
                    push(player1Cards, pop(tie2));
                }
                push(player1Cards, player2Card);
            }
            //player one takes both cards
            else 
            {
            push(player1Cards, player1Card);
            push(player1Cards, player2Card);
            }
        }
        
        // if player 2 has a higher card
        if(player2Card>player1Card) 
        {
            // if there is a tie
            if(!isEmpty(tie2)) 
            {
                while(!isEmpty(tie2)) 
                {
                    push(Player2Cards, pop(tie2));
                }
                push(Player2Cards, player2Card);

                while(!isEmpty(tie1)) 
                {
                    push(Player2Cards, pop(tie1));
                }
                push(Player2Cards, player1Card);
            }
            // player 2 takes both cards
            else 
            {
                push(Player2Cards, player2Card);
                push(Player2Cards, player1Card);
            }
        }
        
        // if there is WAR!!!
        if(player1Card == player2Card) 
        {
            push(tie1, player1Card);
            push(tie2, player2Card);
            // take three cards from each player
            for(int i=0; i<3; i++)
            {
                if(!isEmpty(player1Cards)) 
                {
                    player1Card = pop(player1Cards);
                    push(tie1, player1Card);
                }
                if(!isEmpty(Player2Cards)) 
                {
                    player2Card = pop(Player2Cards);
                    push(tie2, player2Card);
                }
            }
        }
        x++;
    }

    // output the results
    if(isEmpty(player1Cards))
        cout << "Player #2 wins after " << x << " battles.";
    else if(isEmpty(Player2Cards))
        cout << "Player #1 wins after " << x << " battles.";
    else
        cout << "Nobody wins.";
}
