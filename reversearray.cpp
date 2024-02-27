#include<iostream>
using namespace std;

int reverse(int arr[], int n){

        int start = 0;
        int end = n-1;

        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

}

int printarray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 
}

int main(){

    int arr[5], n = 5;

    cout << "enter the elements in the array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    reverse(arr, 5);
    printarray(arr, 5);

    // cout << "the reversed array is " << reverse(arr, n) << endl;
}