#include<iostream>
using namespace std;
int main() {
    int arr[3][4] = {6,5,7,4,8,9,11,14,12,15,13};
    cout<<"size of array is : "<<sizeof (arr)/4<<endl;
    int mx = arr[0][0];

    for(int i = 0 ; i<3 ; i++) {
        for(int j= 0 ; j<4 ; j++) {
          if(arr[i][j]>mx) mx= arr[i][j];
        }
    }
    cout<<mx;
}

