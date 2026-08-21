#include<iostream>
using namespace std;
int main() {
    int arr[3][4] = {6,5,2,4,1,1,1,4,2,1,1,6};
    cout<<sizeof (arr)/4<<endl;
    int prod = 1;

    for(int i = 0 ; i<3 ; i++) {
        for(int j= 0 ; j<4 ; j++) {
           prod *= arr[i][j];
        }
    }
    cout<<prod<<" ";
}