// sort this array of characters using insertion sort in descending or ascending order
// char ch[]={'f','b','a','e','c','d'}

#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void print(char arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
 void sortchar(char arr[],int n){
    for(int i=0; i<n; i++){
         char curr=arr[i];
         int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev --;
        }
        arr[prev+1]=curr;

    }
    print(arr,n);
 }
    int main()
{
    char ch[6]={'f','b','a','e','c','d'};
    sortchar(ch,6);
    return 0;
}
 