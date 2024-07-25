// #include<iostream>
// using namespace std;
// bool issorted(int arr[], int n){
//     if(n==0 || n==1)
//     return true;

//     if(arr[0] > arr[1])
//     return false;

//     else{
//         bool remainingpart = issorted(arr + 1, n - 1);
//         return remainingpart;
//     }
// }

// int main(){
//     int n = 5;

//     int arr[5];

//     cout << "enter the values" << endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//    bool ans = issorted(arr, n);
//    cout << ans << endl;
// }


#include<iostream>
using namespace std;
int getsum(int arr[], int n){
        
        if(n == 0)
        return 0;

        if(n == 1)
        return arr[0];

        else{
            int remain = getsum(arr+1, n-1);
           int sum = arr[0] + remain;
           return sum;
        }

}

int main(){
    int n = 5;

    int arr[5] = {1,2,3,4,5};

    int sum = getsum(arr, n);
    cout << sum << endl;
}