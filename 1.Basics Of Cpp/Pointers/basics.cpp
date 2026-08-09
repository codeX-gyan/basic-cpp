#include<iostream>
using namespace std;
int main() {
    int x= 45;
    int *ptr =&x;
//--THESE RWO HAVE SAME ADDRESS
    cout<<&x<<endl;
    cout<<ptr<<endl;

// -- THESE HAVE SAME ADDRESS
    cout<<x<<endl;
    cout<<*ptr<<endl;

    cout<<&ptr<<endl;
}