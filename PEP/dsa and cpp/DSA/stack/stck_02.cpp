// #include<iostream>
// #include<stack>

// using namespace std;

// void reverseSentence(string s){

//     stack<string> st;

//     for(int i=0;i<s.length(); i++){
//         string word="";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }

//         st.push(word);
        
//         }

//         while(!st.empty()){
//             cout<<st.top()<<" ";
//             st.pop();
//         }
// }

// int main(){
//     string str = "Hello how are you";

//     reverseSentence(str);

//     return 0;

// }


//to check for the balance string
#include<iostream>
#include<stack>

using namespace std;

bool checkBalance(string str, int size){
    
    stack<char> st;
    bool ans=true;

    for(int i=0;i<size-1; i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
        st.push(str[i]);
        }
        else if(str[i]==')'){
            if(st.top()=='(' && !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }else if(str[i]==']'){
            if(st.top()=='[' && !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }else if(str[i]=='}'){
            if(st.top()=='{' && !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    return ans;

}

int main(){
    string str = "{[(]}";

    cout<<checkBalance(str, 6);

    return 0;

}