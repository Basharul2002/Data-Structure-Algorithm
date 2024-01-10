#pragma once

#include<iostream>
using namespace std;

template<typename DType>
class LinkedList
{
private:
    class Node
    {
    public:
        DType data;
        Node* next;

        Node()
        {
            next = NULL;
        }

        Node(DType data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

    Node* head = NULL;
    Node* tail = NULL;

    Node* createNode(DType data)
    {
        return new Node(data);
    }

public:
    LinkedList() {}

    void insertAtFirst(DType data)
    {
        Node* newNode = createNode(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtLast(DType data)
    {
        Node* newNode = createNode(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtFirst()
    {
        if (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head == NULL)
            {
                tail = NULL;
            }
        }
    }

    void deleteAtLast()
    {
        if (head != NULL)
        {
            if (head == tail)
            {
                deleteAtFirst();
            }
            else
            {
                Node* temp = head;
                while (temp->next != tail)
                {
                    temp = temp->next;
                }
                delete tail;
                tail = temp;
                tail->next = NULL;
            }
        }

        return ;
    }

    DType getFirstElement()
    {
        if (head != NULL)
        {
            return head->data;
        }
        return DType(); // return a default-constructed object if the list is empty
    }

    DType getLastElement()
    {
        if (tail != NULL)
        {
            return tail->data;
        }
        return DType(); // return a default-constructed object if the list is empty
    }

    void display()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
};
