#include<iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;
using namespace stackList;

int main()
{
    LinkedList<int>myLinkedList;
    myLinkedList.insertAtFirst(20);
    myLinkedList.insertAtLast(10);
    myLinkedList.insertAtLast(30);
    cout<<"Output of LinkedList"<<endl;
    myLinkedList.display();

    Stack<int>myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout<<"Output of Stack"<<endl;
    myStack.display();
    myStack.pop();
    myStack.pop();
    myStack.pop();

    Stack<string>myStringStack;
    myStringStack.push("One");
    myStringStack.push("Two");
    myStringStack.push("Three");
    myStringStack.push("Four");
    cout<<"Output of Stack"<<endl;
    myStringStack.display();

    cout<<"Output of Queue"<<endl;

    return 0;

}
