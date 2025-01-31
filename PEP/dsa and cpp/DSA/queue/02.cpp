#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> reverse(queue<int> q, int k){
    stack<int> st;
    
    
int i=0;
while(i<q.size()){
    int j=0;
while(j<k && !q.empty()){
    st.push(q.front());
    q.pop();
    j++;
}
while(!st.empty()){
    q.push(st.top());
    st.pop();
}
i+=k;
}
return q;
}

void print(queue<int> q) {
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    print(reverse(q, 2));
    
    return 0;

}

//using a stack do the interleaving
// of the first and second half of the queue.
