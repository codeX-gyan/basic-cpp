// GIVEN AN ARRAY OF INTEGERS, CHANGE THE VALUE OF ALL ODD INDEXED ELEMENTS TO ITS SECOND MULTIPLE 
//               AND INCREMENT ALL EVEN ELEMENTS INDEXED VALUE BY 10.


#include<iostream>
using namespace std;
int main() {
    int arr[6] = {3,4,5,6,7,8};
    for( int i = 0 ; i<=5 ; i++){
        if(i%2==0){
            arr[i] +=10;
        }
    }
    cout<<arr[6];
}