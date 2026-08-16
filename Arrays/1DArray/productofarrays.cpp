#include<iostream>
using namespace std;
int main() {
    int arr[] = {6,5,7,4,8};
    cout<<sizeof (arr)/4<<endl;
    int prod=1;

    for(int i = 0 ; i<=4 ; i++) {
        prod *= arr[i];
    }
    cout<<prod;
}