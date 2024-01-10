#include<bits/stdc++.h>
#include "DoublyLinkedList.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main()
{
    cout<<"***Doubly Linked List***"<<endl;
    DoublyLinkedList<int>myDoublyLinkedList;
    myDoublyLinkedList.insertAtFirst(3);
    myDoublyLinkedList.insertAtFirst(2);
    myDoublyLinkedList.insertAtFirst(1);
    myDoublyLinkedList.insertAtLast(4);
    myDoublyLinkedList.insertAtLast(5);
    myDoublyLinkedList.insertAtAnyPosition(20, 2);
    cout<<"Output of linked list: ";
    myDoublyLinkedList.display();
    cout<<endl<<endl;

    cout<<"***Stack***"<<endl;
    Stack<int>s;
    s.push(100);
    s.push(150);
    s.push(200);
    s.push(250);
    s.push(300);
    s.display();
    s.pop();
    s.display();
    s.top();
    cout<<endl<<endl;

    cout<<"***Queue***"<<endl;
    Queue<int>q;
    q.enQueue(1000);
    q.enQueue(2000);
    q.enQueue(3000);
    q.font();
    q.rear();
    q.deQueue();
    q.display();

    return 0;
}
