#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl; 
        }
    }

    int peek(){
        if(top>=0 && top<size)
        return arr[top];
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        

    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else
        return false;
    }

};

int main(){

    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(45);
    st.push(22);
    st.push(43);
    st.push(45);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    
    if(st.isempty()){
        cout<<"Stack is empty"<<endl;
    }
    else
    cout<<"stack is not empty"<<endl;


    // //creation of stack  
    // //uses LIFO
    // stack<int>s;

    // //push op
    // s.push(2);
    // s.push(3);

    // //pop
    // s.pop();//will pop the top element

    // cout<<"Printing top element "<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }

    // cout<<"size is: "<<s.size();


#include <bits/stdc++.h> 
class TwoStack {

public:
    int* arr;
    int size;
    int top1;
    int top2;

    
    void push1(int num) {
        // Write your code here.
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
    
    }

   // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else return -1;
    }

        // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else return -1;
        // Write your code here.
    }
};


}
