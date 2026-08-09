#include<iostream>
using namespace std;
int sum( int a , int b ) {
    return a+b;
}

int product( int a ,int b) {
    return a*b;
}

int main() {
    cout<<sum(5,6);
    cout<<endl;
    cout<<product(6,3);
    return 0;
}