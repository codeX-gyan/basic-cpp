#include<iostream>
using namespace std;
int main() {
    int arr[2][3];

    arr[0][0] = 2;
    arr[0][1] = 3;
    arr[0][2] = 4;
    arr[1][0] = 5;
    arr[1][1] = 6;
    arr[1][2] = 7;

    for(int j =0 ; j<3 ; j++){         //COL
        for(int i=0 ; i<2 ; i++){     //ROW
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}