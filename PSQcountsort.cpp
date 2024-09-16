#include<iostream>
#include<climits> 
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countsort(int arr[], int n) {
    int freq[100000] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i = 0; i < n; i++) { 
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

  
    for(int i = 0; i < n; i++) { 
        freq[arr[i]]++;
    }

    
    for(int i = maxVal, j = 0; i >= minVal; i--) {
    while(freq[i - minVal] > 0) {
        arr[j++] = i;
        freq[i - minVal]--;
    }
}


    print(arr, n);
}

int main() {
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    countsort(arr, 10);
    return 0;
}
