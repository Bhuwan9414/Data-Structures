// //  Q1 : program to find the largest three elements in an array:

// #include<iostream>
// #include<climits>
// using namespace std;

// int threelargest(int arr[], int n){
//     int i, first, second, third;

// }

// int main(){

//     int arr[5], i, n = 5;
//     int maxi = INT_MIN;
//     // int max;

//     cout << "enter the elememts" << endl;

//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }


//     for(i=0;i<n;i++){
//     maxi = max(maxi, arr[i]);
//     }
//         cout << "the maximum valuue is " << arr[maxi] << endl; 

// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int threelargest(int arr[], int n){
        
//         int i, first, second, third;
//         first = second = third = INT_MIN;

//         for(i=0;i<n;i++){
//             if(arr[i]>first){
//                 third = second;
//                 second = first;
//                 first = arr[i];
//             }
//             else if(arr[i]>second){
//                 third = second;
//                 second = arr[i];
//             }
//             else if(arr[i]>third){
//                 third = arr[i];
//             }
//         }
//         cout << "the three largest elements are: " << first << second << third << endl;
// }

// int main(){
//     int arr[5], n=5;
//     cout << "enter the elements in array" << endl;

//     for(int i=0;i<n;i++){
//         cin << arr[i];
//     }
//                 threelargest(arr,n);

// }

// program to do sum of elements in an array:

#include<iostream>
using namespace std;

int sum(int arr[], int n){

        int sum = 0;

        for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        return sum;

}

int main(){

    int arr[5], n = 5;

    cout << "enter the elements in the array" << endl;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "the sum is " << sum(arr, n) << endl;


}