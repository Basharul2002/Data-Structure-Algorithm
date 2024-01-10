#include<bits/stdc++.h>
using namespace std;

class MyStack
{
    private:
        int *datas;
        int maxSize=0;
        int top = 0;

    public:
        MyStack(int maxSize)
        {
            this->maxSize = maxSize;
            datas = new int[maxSize];
        }

        bool isFull()
        {
            return (top == maxSize);
        }
            

        bool isEmpty()
        {
            return (top == 0);
        }
            

        void push(int num)
        {
            if(!isFull())
            {
                datas[top] = num;
                top++;
            }
            
            else
                cout<<"Stack Overflow"<<endl;
            
        }

        int topElement()
        {
            return datas[top-1];
        }

        void pop()
        {
            if(!isEmpty())
            {
                top--;
                cout<<datas[top]<<" is Popped"<<endl;
            }
            else
            {
                cout<<"Stack UnderFlow"<<endl;
            }
        }

};

int main()
{
    MyStack s(5);
    s.push(5);
    s.push(7);
    s.push(-3);

    s.pop();
    s.pop();
    s.pop();
    s.pop();
}




/*
int main() 
{
    stack<int>st;
    st.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
    st.push(22);
    st.push(24);
    st.push(25);
    int num=0;
      st.push(num);
    st.pop();
    st.pop();
      st.pop();

    while (!st.empty()) 
    {
        cout << st.top() <<" ";
        st.pop();
    }
}
*/
