#include<iostream>
using namespace std;
int main(){
    int arr[4][2]= {{31,98},{32,92},{33,84},{34,80}};

    for (int i = 0 ; i<4 ;i++ ){
        for(int j=0 ; j<2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}