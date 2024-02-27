#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){

        for(int i=0;i<n;i++){
            if(arr[i] == key){
                return 1;
            }
            else{
                return 0;
            }
        }

}

int main(){

    int arr[5] = {5,8,2,9,1};

    int key;
    cout << "enter the element u want to search" << endl;
    cin >> key;

    bool found = search(arr, 5, key);

    if(found){
        cout << "element is present" << endl;
    }
    else{
        cout << "element is not present" << endl;
    }
}