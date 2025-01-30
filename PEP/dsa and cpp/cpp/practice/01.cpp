//naive method to find the sum of the list
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;

//     return 0;
// }

//recurision method to find the sum of the list
// #include<iostream>
// using namespace std;

// int Sum(int arr[], int n, int i=0){
//     if(i==n){
//         return 0;
//     }

//     return arr[i]+Sum(arr, n, i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<Sum(arr,n)<<endl;

//     return 0;

// }


//a few ops on the array
// #include<iostream>
// using namespace std;

// void insert(int arr[], int p, int val, int &size){
//     size++;
//     int temp=arr[p];
//     for(int i=size; i>p; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[p]=val;
// }

// void Delete(int arr[], int p, int &size){
//     for(int i=p;i<size;i++){
//         arr[i]=arr[i+1];
//     }

//     size--;
// }


//
// void update(int arr[], int p, int val){
//     arr[p]=val;
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,0};
//     int size=10;

//         insert(arr,2,2,size);
//             for(int i=0;i<size;i++){
//                 cout<<arr[i]<<", ";
//             }
//             cout<<" "<<endl;

//         Delete(arr,2,size);
//         for(int i=0;i<size;i++){
//                 cout<<arr[i]<<", ";
//             }
//             cout<<" "<<endl;

//             update(arr,9,10);
//             for(int i=0;i<size;i++){
//                 cout<<arr[i]<<", ";
//             }

//     return 0;


// }

//computes the nth Fibonacci number using recursion
#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }

    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"enter the nth term u want to find out: "<<endl;

    cin>>n;
    cout<<fib(n);

    return 0;   

}