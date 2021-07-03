#include <iostream>
#include "carrayqueue.h"
int main()
{
    queue<int> *queue = new carrayqueue<int>(5); 
    queue->enqueue(14);
    queue->enqueue(303);
    queue->enqueue(7777);
    queue->enqueue(88); 
    int e;
    queue->front(e);
    std::cout << e << std::endl; 
    queue->back(e);
    std::cout << e << std::endl; 
    queue->dequeue(e);
    std::cout << e << std::endl; 
    queue->enqueue(98416);
    queue->enqueue(30430);
    queue->back(e);
    std::cout << e << std::endl;
    delete queue;
    return 0;
}