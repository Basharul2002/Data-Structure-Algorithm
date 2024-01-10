#pragma once
#include<bits/stdc++.h>
using namespace std;
#include "LinkedList.h"

namespace stackList
{
  template<typename DType>
  class Stack
  {
  private:
      LinkedList<DType> myStackList;
  public:
      Stack() {}
  
      // Pushes the given data onto the top of the stack
      void push(DType data)
      {
          myStackList.insertAtFirst(data);
      }
  
      // Removes the element at the top of the stack
      void pop()
      {
          if (!myStackList.isEmpty())
          {
              myStackList.removeFromFirst();
          }
      }
  
      // Returns the element at the top of the stack without removing it
      DType top()
      {
          if (!myStackList.isEmpty())
          {
              return myStackList.getFirst();
          }
          return DType(); // return a default-constructed object if the stack is empty
      }
  
      // Displays all the elements in the stack
      void display()
      {
          myStackList.display();
      }
  };
} // namespace stackList
