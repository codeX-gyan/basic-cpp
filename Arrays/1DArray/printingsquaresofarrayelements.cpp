#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];

    for( int i = 0 ; i<=n ; i++){
        arr[i-1] = i*i;
    }
    for( int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}