#include<iostream>
using namespace std;
int main() {
    int arr[5] = {4,5,3,6,2};
    arr[0] = 1;
    for( int i = 4 ; i>=0 ; i--){
        cout<<arr[i]*2<<" ";
    }
}