#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
    };

    typedef Node* NodePointer;

    NodePointer head = NULL;
    NodePointer curr = NULL;

    Node* createNode(int data)
    {
        return new Node(data);
    }

    void insertAtFirst(int data)
    {
        if(head == NULL)
        {
            head = createNode(data);
            curr = head;
        }
        else
        {
            Node* newNode = createNode(data);
            newNode->next = head;
            head = newNode;
        }
    }


    void insertAtLast(int data)
    {
        if(head == NULL)
            insertAtFirst(data);
        
        else
        {
            NodePointer newNode = createNode(data);
            curr->next = newNode;
            curr = curr->next;
        }
    }

    void display()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp ->data<<endl;
            temp = temp->next;
        }

    }

    void deleteAtFirst()
    {
        if(head!=NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }

    }
    void deleteAtLast()
    {
        Node* temp = head;
        if(temp->next!=NULL)
        {

            while(temp->next ->next != NULL)
                temp=temp->next;
            
            curr = temp;
            delete temp->next ;
            temp->next = NULL;
        }
}


int main()
{
    insertAtFirst(10);
    insertAtFirst(20);
    insertAtFirst(5);
    insertAtLast(25);
    insertAtLast(30);

    deleteAtLast();
    deleteAtLast();
    deleteAtFirst();

    insertAtLast(50);

    display();

    return 0;
}
