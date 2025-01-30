// #include<iostream>
// #include<queue>
// using namespace std;

// class Queue{
//     public:
//     int a *arr;

//     int front;
//     int rear;
//     int size;

//     Queue(int val){
//         front = rear =-1;
//         size=val;
//     }

//     void push(int val){
//         if(rear==size-1){
//             cout<<"Queue overflow "<<endl;
//             return;
//         }

//         rear++;
//         arr[rear] = val;
//         if(front==-1) front++;
//     }

//     void pop(){
//         if(front=-1){
//             cout<<"empty"<<endl;
//             return;
//         }
//         front++;
//     }
// };
// int main(){
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);

//     q.pop();
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//     }

//     return 0;
// }

//reverse a queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> q){
    stack<int> st;
    int i=0;
    while(!q.empty()){
        st.push(q.front());
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverse(q);

    return 0;   

}