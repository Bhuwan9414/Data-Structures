// #include<iostream>
// using namespace std;
// void reachhome(int src, int dest){

//     cout << "source " << src << " destination " << dest << endl; 

//     // base case
//     if(src == dest){
//         cout << "pohoch gya" << endl;
//         return ;
//     }

//     // processing
//     src++;

//     // recurive call
//     reachhome(src, dest);
// }

// int main(){
//     int src = 1;
//     int dest = 10;

//     reachhome(src, dest);

//     return 0;
// }




// fibonacci no problem :


// #include<iostream>
// using namespace std;
// int fib(int n){

//     // base case :
//     if(n == 0)
//     return 0;

//     if(n == 1)
//     return 1;

//     // recursive relation :
//     int ans = fib(n-1) + fib(n-2);
//     return ans;
// }

// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//      int ans = fib(n);
     
//      cout << ans << endl;
    
// }



// staircase problem:

// #include<iostream>
// using namespace std;
// int stair(int n){
    
//     // base case :
//     if(n < 0)
//     return 0;

//     if(n == 0)
//     return 1;

//     // rcursive relation:

//     int ans = stair(n-1) + stair(n-2);
//     return ans;
// }

// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//     int ans = stair(n);
//     cout << ans << endl;
// }



// say digit problem :

#include<iostream>
using namespace std;
void saydigit(int n, string arr[]){
    if(n == 0)
    return;

    int digit = n % 10;
    
    n = n/10;
    
    saydigit(n, arr);

    cout << arr[digit] << " ";
}

int main(){
    string arr[10] = {"zero", "one", "two", "three", "four", "five",
                     "six", "seven", "eight", "nine"};

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    saydigit(n, arr);
}