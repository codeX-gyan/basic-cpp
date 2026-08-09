#include<iostream>
using namespace std;
void sum( int a , int b ) {
    cout<<"sum is : "<<a+b;
}

void product( int a ,int b) {
    cout<<"product is : " <<a*b;
}

int main() {
    sum(5,6);
    cout<<endl;
    product(6,3);
    return 0;
}