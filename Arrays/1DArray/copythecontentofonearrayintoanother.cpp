#include<iostream>
using namespace std;
int main() {
    int a[5] = {5,4,3,2,1};
    int n = sizeof(a)/4;
    int b[5] = {         };

    for(int i = 0 ; i<=n ; i++){
        //int j= n-1-i;
        // b[i] = a[j];
        b[i] = a[n-1-i];

    }
    for ( int i = 0 ; i<n ; i++){
        cout<<b[i]<<" ";
    }
}