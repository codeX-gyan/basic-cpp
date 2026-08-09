// -----SWAP USING THIRD VARIABLE--------

// #include<iostream>
// using namespace std;
// int main() {
//     int temp;
//     int a=5;
//     int b=7;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<endl;
//     cout<<b;
// }



//----SWAP EITHOUT THIRD VARIABLE----

#include<iostream>
using namespace std;
int main() {
    // int temp;
    int a=675;
    int b=827;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<endl;
    cout<<b;
} 