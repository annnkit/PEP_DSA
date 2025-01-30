#include<iostream>
using namespace std;

class MyStack{
    public:
    int *arr;
    int top;
    int size;

    MyStack(int s){
        size = s;
        arr = new int[size];  // Allocating memory
        top = -1;  // Stack is initially empty
    }
        void push(int val){
            if(top==size-1){
                cout<<"stack overflow "<<endl;
                return;
            }
            top++;

            arr[top]=val;
        }

        void pop(){
            
            top--;

        }

        void isEmpty(){
            if(top==-1){
                cout<<"Stack empty "<<endl;
            }
        }

        int peek(){
            return arr[top];
        }

        void display(){
            top=-1;
            while(top<size){
        cout<<arr[top]<<endl;
        top++;
    }
        }
};

int main(){
    MyStack stack;

    stack.MyStack(3);

    stack.push(5);
    stack.push(2);
    stack.push(3);

    stack.display();

    return 0;

}