#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
    
    for(int i=0;i<n;i++){
        int min = i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min])
            min = j;
       }
       swap(arr[min], arr[i]);
    }

}

int main(){
    int arr[5], n = 5;
    cout << "enter the elements in array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

 insertionsort(arr, n);

    cout << "The sorted array is: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}