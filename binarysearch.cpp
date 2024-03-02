// binary search program:


// #include<iostream>
// using namespace std;

// int binary(int arr[], int n, int key){

//        int start = 0;
//        int end = n-1;
//        int mid = (start + end)/2;
//     //    int i;

//        while(start<=end){

//         if(arr[mid] == key){
//             return mid;
//         }

//         if(key > arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }

//         mid = (start + end)/2;
//        }
//        return -1;

// }

// int main(){

//     int even[6] = {10,20,30,40,50,60};



//     int index = binary(even, 6, 40);

//     cout << "index is " << index << endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int binary(int arr[], int n, int key){

//         int start = 0;
//         int end = n - 1;

//         while(start<=end){

//                     int mid = (start + end)/2;

//             if(arr[mid] == key){
//                 return mid;
//             }

//             if(key>arr[mid]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//             // mid = (start + end)/2;
//         }
//         return -1;

// }

// int main(){

//     int arr[6] = {10,20,30,40,50,60};
//     int n = 6;
//     int key;

//     cout << "enter the key element" << endl;
//     cin >> key;

//     int index = binary(arr, n, key);
//     cout << "index is " << index << endl;
// }