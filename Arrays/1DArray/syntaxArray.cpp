// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     arr[0] = 5;
//     arr[1] = 4;
//     arr[2] = 3;
//     arr[3] = 2;
//     arr[4] = 1;

//     for( int i=0 ; i<5 ; i++){
//         cout<<arr[i]<<" ";
//     }
//}


//------TAKING INPUT OF AN ARRAY-------
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     for( int i = 0 ; i<=4 ; i++){
//         cout<<"elements of array is : "; 
//         cin>>arr[i];
//     }
//     cout<<" Array is : ";
//     for( int i = 0 ; i<=4 ; i++){
        
//         cout<<arr[i]<<" ";
//     }
// }



//-------MULTIPLYING ARRAY BY ANY NUM--------
#include<iostream>
using namespace std;
int main() {
    int arr[5];
    for( int i = 0 ; i<=4 ; i++){
        cout<<"elements of array is : "; 
        cin>>arr[i];
    }
    cout<<" Array is : ";
    for( int i = 0 ; i<=4 ; i++){
        
        cout<<arr[i]*2<<" ";
    }
}