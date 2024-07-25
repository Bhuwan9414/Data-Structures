// #include<iostream>
// using namespace std;
// int main(){

//     int i = 5;
//     int &j = i;

//     cout << i << endl;
//     i++;
//     cout << i << endl;
//     j++;
//     cout << j << endl;

// }

#include<iostream>
using namespace std;

void update(int &n){
    n++;
}

int main(){

    int n = 5;

    cout << "before " << n << endl;

    update(n);

    cout << "after " << n << endl;


}