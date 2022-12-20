#include<bits/stdc++.h>
using namespace std;

class Stack{
    //properties
    public:
       int *arr;
       int top;
       int size;
    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
     if(size-top>1){
        top++;
        arr[top] = element;
     }
     else{
        cout<<"Stack Overflow"<<endl;
     }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
          return arr[top];
        }
        else{
            cout<<"Stack is Empty "<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else
            return false;

    }   

};

int main(){
    Stack st(5);

    st.push(22);
    st.push(2);
    st.push(43);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    // bool empty = isEmpty();
    if(st.isEmpty())
     cout<<"empty "<<endl;
    else 
      cout<<"nt empty"<<endl;


    return 0;
}