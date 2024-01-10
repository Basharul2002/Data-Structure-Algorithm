using namespace std;

namespace queueList
{
    #include "DoublyLinkedList.h"
}

template<typename DType>
class Queue
{
    private:
        queueList::DoublyLinkedList<DType>myQueue;

    public:
        Queue()
        {
            // Empty Constructor
        }

        void enQueue(DType data)
        {
            cout<<data<<" is enqueue"<<endl;
            myQueue.insertAtLast(data);
        }

        void deQueue()
        {
            if(myQueue.getFirstElement() == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<myQueue.getFirstElement()<<" is dequeue"<<endl;
                myQueue.deleteAtFirst();
            }
        }

        DType font()
        {
            if(myQueue.getFirstElement() == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<"Font: "<<myQueue.getFirstElement()<<endl;
            }
        }


        DType rear()
        {
            if(myQueue.getLastElement() == NULL)
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<"Rear: "<<myQueue.getLastElement()<<endl;
            }
        }


        void display()
        {
            cout<<"Queue List: ";
            myQueue.display();
        }
};


