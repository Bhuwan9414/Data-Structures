

#include<iostream>
using namespace std;
int bubblesort(int arr[], int n){

    for(int i=0; i < n-1; i++){
      for(int j=0;j<n-i-1;j++){
          if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
      }
    }

}

int main(){
    
    int arr[5], n = 5;
    cout << "enter the elements in the array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    bubblesort(arr, n);

    cout << "the sorted array is" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}