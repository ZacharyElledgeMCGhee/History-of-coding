//Zachary Elledge-MGhee
// p2priorityqueue2h
// 11/6/2020

#include <cstddef>

template <typename V, typename R>
struct Node 
{
    V value;
    R priority;
	
    Node<V, R>* next;
    Node<V, R>* prev;
};
template <typename V, typename R>
struct PriorityQueue 
{
    Node<V,R>* head;
};
//set values to null and prepare for being used
template <typename V, typename R>
void initialize(PriorityQueue<V,R>& pq) 
{
    pq.head = NULL;
}
//set all values to null, 0, or erase the memory
template <typename V, typename R>
void destroy(PriorityQueue<V,R>& pq) 
{
    if (pq.head == NULL) 
	{
        return;
    }

    Node<V, R>* next = pq.head;
    pq.head-> prev-> next = NULL;
	
    while (next != NULL) 
	{
        next = pq.head->next;
        delete pq.head;
        pq.head = next;
    }    
}
// same as others, will return true or false depending on if the quque is empty
template <typename V, typename R>
bool isEmpty(PriorityQueue<V,R>& pq) 
{
    return(pq.head == NULL);
}
template <typename V, typename R>
void push(PriorityQueue<V,R>& pq,V val,R pri) 
{
    Node<V, R>* newNode = new Node<V, R>;
	//create new nodes and sort them by their priority
    newNode->value = val;
    newNode->priority = pri;
	
    if (pq.head == NULL) 
	{
        pq.head = newNode;
        newNode->prev = pq.head;
        newNode->next = pq.head; 
    }
    else if (pri <= pq.head->prev->priority) 
	{
        newNode->next = pq.head;
        newNode->prev = pq.head->prev;
		
        pq.head->prev->next = newNode;
        pq.head->prev = newNode;
    }
    else
	{
        if (pri > pq.head->priority) 
		{
            newNode->next = pq.head;
            newNode->prev = pq.head->prev;
			
            pq.head->prev->next = newNode;
            pq.head->prev = newNode;
            pq.head = newNode;
            return;
        }
        newNode->next = pq.head->next;
        while (pri <= newNode->next->priority) 
		{
            newNode->next = newNode->next->next;
        }
        newNode->prev = newNode->next->prev;
        newNode->prev->next = newNode;
        newNode->next->prev = newNode;
    }
}
template <typename V, typename R>
V    pop(PriorityQueue<V,R>& pq) {

    V ret = pq.head->value;
    Node<V, R>* temp = pq.head;
	
    if (pq.head == pq.head->next) 
	{
        pq.head = NULL;
    }
    else 
	{
        pq.head->prev->next = pq.head->next;
        pq.head->next->prev = pq.head->prev;
        pq.head = pq.head->next;
    }
    delete temp;
    return(ret);
}