//Complete the Full Queue
#pragma once

#include "LinkedList.h"

namespace queueList 
{
    template<typename DType>
    class Queue 
    {
    private:
        LinkedList<DType> myQueueList;
    public:
        Queue() {}

        // Adds the given data to the back of the queue
        void enqueue(DType data) 
        {
            myQueueList.insertAtBack(data);
        }

        // Removes and returns the element at the front of the queue
        DType dequeue() 
        {
            if (!myQueueList.isEmpty()) 
            {
                DType data = myQueueList.getFirst();
                myQueueList.removeFromFront();
                return data;
            }
          
            return DType(); // return a default-constructed object if the queue is empty
        }

        // Returns the element at the front of the queue without removing it
        DType front() {
            if (!myQueueList.isEmpty()) 
                return myQueueList.getFirst();
            
            return DType(); // return a default-constructed object if the queue is empty
        }

        // Returns the number of elements in the queue
        int size() 
        {
            return myQueueList.getSize();
        }

        // Returns true if the queue is empty, false otherwise
        bool isEmpty() 
        {
            return myQueueList.isEmpty();
        }

        // Displays all the elements in the queue
        void display() 
        {
            myQueueList.display();
        }
    };
} // namespace queueList
