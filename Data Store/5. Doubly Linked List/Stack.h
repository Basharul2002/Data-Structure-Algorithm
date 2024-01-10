using namespace std;
namespace stackList
{
    #include "DoublyLinkedList.h"
}

template<typename DType>
class Stack
{
    private:
        stackList::DoublyLinkedList<DType>myStackList;

    public:
        Stack()
        {

        }

        void push(DType data)
        {
            cout<<data<<" is push"<<endl;
            myStackList.insertAtLast(data);
        }

        void pop()
        {
             if(myStackList.getLastElement() == NULL)
            {
                cout<<"STACK IS UNDERFLOW"<<endl;
            }

            else
            {
                cout<<myStackList.getLastElement()<<" is poped"<<endl;
                myStackList.deleteAtLast();
            }
        }

        DType top()
        {
            if(myStackList.getLastElement() == NULL)
            {
                cout<<"STACK IS EMPTY"<<endl;
            }

            else
            {
                cout<<"Top: "<<myStackList.getLastElement()<<endl;
            }
        }

        void display()
        {
            cout<<"Stack List: ";
            myStackList.display();
        }
};


