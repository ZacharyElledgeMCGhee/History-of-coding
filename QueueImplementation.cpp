#include "p2stack.h"

// Zachary Elledge-McGhee

template <typename T>
struct Queue
{
// using stacks for the queue
    Stack<T> s1;
    Stack<T> s2;
};

template <typename T>
void initialize(Queue<T>& q)
{
// initialize the stacks fpr the queue
    initialize(q.s1);
    initialize(q.s2);
}

template <typename T>
void destroy(Queue<T>& q)
{
// destroy the stacks to destrpy the queue
    destroy(q.s1);
    destroy(q.s2);
}

template <typename T>
int  getSize(Queue<T> q) 
{
// get the size of each stack and then return
    int x = 0;
    // get size from s1 and s2
    x += getSize(q.s1);
    x += getSize(q.s2);
    
    return x;
}

template <typename T>
bool isEmpty(Queue<T> q) 
{
// check if each of the stacks are empty
// both have to be empty

    return(isEmpty(q.s1) && isEmpty(q.s2));
}

template <typename T>
void push(Queue<T>& q, T value)
{
// put the value into s1

    push(q.s1, value);
}
template <typename T>
T    pop(Queue<T>& q)
{
// check if the stac kis empty then pop
    if(!isEmpty(q.s2))
        return pop(q.s2);
        
// push the value into s2 as long as s1 is not empty
    while(!isEmpty(q.s1))
        push(q.s2, pop(q.s1));


    return pop(q.s2);
}