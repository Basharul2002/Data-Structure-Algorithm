#include <bits/stdc++.h>
using namespace std;

const int MAXSIZE = 10;

class Queue
{
private:
    int front;
    int rear;
    int items[MAXSIZE];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for(int i = 0; i<MAXSIZE; i++)
        {
            items[i] = 0;
        }
    }

    bool isFull()
    {
        if(rear == MAXSIZE-1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if(front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }

    void enqueue(int value)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return;
        }

        else if(isEmpty())
        {
            front = 0;
            rear = 0;
            items[rear] = value;
        }

        else
        {
            rear++;
            items[rear] = value;
        }
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(front == rear)
        {
            //items[front] = 0;
            front = -1;
            rear = -1;
        }
        else
        {
            // items[front] = 0;
            front++;
        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            for(int i = front; i <= rear; i++)
            {
                cout<<items[i]<<" ";
            }
            cout<< endl;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(40);
    q.display();

    return 0;
}
