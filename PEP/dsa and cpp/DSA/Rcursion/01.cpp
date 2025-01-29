#include<iostream>
using namespace std;

// int sol(int n){
//     if(n==1){
//     return 2;
//     }
//     return 2 * sol(n-1);
// }
// int main(){
//     cout<<sol(4)<<endl;

//     return 0;
// }

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     cout<<fact(5);

//     return 0;
// }


// int fib(int n) {
//     if(n<=1) return n;
//     return fib(n-1) + fib(n-2);
// }
// int main() {
//     cout<<fib(10)<<endl;
//     return 0;
// }

// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }

// int main(){
//     cout<<fib(10);

//     return 0;
// }

int step(int n){
    if (n<2){
        return n;
    }
    return step(n-1) + step(n-2);

}
int main(){
    cout<<step(2);

    return 0;
}

