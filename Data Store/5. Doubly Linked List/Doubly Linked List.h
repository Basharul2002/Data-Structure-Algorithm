#include<bits/stdc++.h>
using namespace std;
template<typename DType>
class DoublyLinkedList
{
    private:
        class Node
        {
            public:
                DType data;
                Node* next;
                Node* prev;

                Node(DType data)
                {
                    this->data = data;
                    this->next = NULL;
                    this->prev = NULL;
                }
        };

        typedef Node* NodePointer;

        NodePointer head = NULL;
        NodePointer tail =NULL;
        int count = 0;

        NodePointer createNewNode(DType data)
        {
            count++;
            return new Node(data);
        }

    public:
        DoublyLinkList()
        {
            //Empty constructor
        }

        void insertValue(DType data)
        {
            NodePointer newNode= createNewNode(data);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
            }

            else
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }

        }

        void insertAtFirst(DType data)
        {
            NodePointer newNode= createNewNode(data);
            NodePointer temp = head;

            if(temp == NULL)
            {
                newNode->prev = NULL;
                newNode->next = NULL;
                head = newNode;
                tail = newNode;

            }

            else
            {
                newNode->prev = NULL;
                newNode->next = head;
                head = newNode;
                head->next->prev = newNode;
            }

        }


        void insertAtLast(DType data)
        {
            NodePointer newNode= createNewNode(data);
            NodePointer temp = head;

            if(tail==NULL)
            {
                insertAtFirst(data);
            }

            else
            {
                newNode->prev = tail;
                newNode->next = NULL;
                tail->next = newNode;
                tail = newNode;
            }

        }


        void insertAtAnyPosition(DType data, int position)
        {
            NodePointer newNode = createNewNode(data);
            NodePointer temp = head;
            cout<<data<<" is insert at position "<<position<<endl;

            if(position == 1)
            {
                insertAtFirst(data);
            }

            else
            {
                int i=1;
                while(i<position)
                {
                    temp = temp->next;
                    i++;
                }

                if(temp == tail)
                {
                    insertAtLast(data);
                }

                else if(temp != NULL)
                {
                    newNode->prev = temp->prev;
                    newNode->next = temp->next;
                    temp->prev->next = newNode;
                    temp->prev = newNode;
                }
            }

        }

       void deleteAtFirst()
       {
           NodePointer temp = head;
           if(temp== NULL)
           {
               cout<<"List is empty"<<endl;
           }

           else if(temp->next == NULL)
           {
               head = NULL;
               tail = NULL;

               delete temp;
               count--;
           }

           else
           {
               temp->next->prev = NULL;
               head = temp->next;
               delete temp;
               count--;
           }
       }

       void deleteAtLast()
       {

           if(head==NULL)
           {
               cout<<"List is empty"<<endl;
           }

           else if(head == tail)
           {
               head = NULL;
               tail = NULL;
               delete head;
               cout<<"Now, all data is delete"<<endl;
           }

           else
           {
               NodePointer temp = tail->prev;
               temp->next = NULL;
               delete tail;
               tail = temp;
               count--;

           }
       }

       void deleteAtAnyPosition(int position)
       {
           if(head==NULL)
           {
               cout<<"LIST IS EMPTY"<<endl;
           }

           else if(position==1)
           {
               deleteAtFirst();
           }


           else
           {
               NodePointer temp = head;

               int i=0;
               while(i<position && temp != NULL)
               {
                   temp= temp->next;
                   i++;
               }

               if(temp==tail)
               {
                    deleteAtLast();
               }

               else
               {
                   temp->prev->next = temp->next;
                   temp->next->prev = temp->prev;

                   delete temp;
               }
           }
       }

       DType getFirstElement()
       {
           if(tail == NULL)
           {
               // cout<<"List is empty"<<endl;
               return NULL;
           }

           else
           {
               // cout<<"FIRST ELEMENT: "<<head->data<<endl;
               return head->data;
           }
       }

       DType getLastElement()
       {
           if(tail == NULL)
           {
               // cout<<"List is empty"<<endl;
                return NULL;
           }

           else
           {
              // cout<<"LAST ELEMENT: "<<tail->data<<endl;
              return tail->data;
           }
       }


        void display()
        {
            NodePointer temp = head;
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;

            // cout<<count<<endl;
        }

};


