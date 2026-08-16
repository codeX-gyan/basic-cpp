#include<iostream>
using namespace std;
int main() {
    int arr[] = {6,5,7,4,8};
    int sum=0;

    for(int i = 0 ; i<=4 ; i++) {
        sum += arr[i];
    }
    cout<<sum;
}