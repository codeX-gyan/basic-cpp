#include<iostream>
using namespace std;
int main() {
    int arr[3][4] = {6,5,7,4,8,9,11,14,12,15,13,6};
    cout<<sizeof (arr)/4<<endl;
    int sum = 0;

    for(int i = 0 ; i<3 ; i++) {
        for(int j= 0 ; j<4 ; j++) {
           sum += arr[i][j];
        }
    }
    cout<<sum<<" ";
}