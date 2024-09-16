#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int arr[],int n){
        for(int i =0; i<n-1; i++){
        int minIdx = i;
         for(int j = i+1; j<n; j++){
        if(arr[j] > arr[minIdx]){
          minIdx = j;
    }
    
}
swap(arr[i],arr[minIdx]);
}
print(arr,n);
}
 int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    selectionsort(arr,10);
    return 0;
 }