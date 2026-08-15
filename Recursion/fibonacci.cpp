#include<iostream>
using namespace std;
int fibonacci(int a) {
    if(a==1 || a==2) return 1;
    return fibonacci(a-1)+fibonacci(a-2);
    
}

int main() {
    int a;
    cout<<"enter a : ";
    cin>>a;
    // cout<<"enter b : ";
    // cin>>b;

    cout<<fibonacci(a);
    //return 0;
}