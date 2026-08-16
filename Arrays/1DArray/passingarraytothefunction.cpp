#include<iostream>
using namespace std;
void change(int arr[]) {
    arr[0] = 9;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    cout<<" Array is : ";
    for( int i = 0 ; i<=4 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"changed array is : ";
    change(arr);
    for( int i = 0 ; i<=4 ; i++){
        cout<<arr[i]*2<<" ";
    }
}