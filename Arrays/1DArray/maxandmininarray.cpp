// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {6,5,7,4,8};
//     cout<<sizeof (arr)/4<<endl;
//     int mx = arr[0];

//     for(int i = 0 ; i<=4 ; i++) {
//         if( arr[i]>mx) mx= arr[i];
//     }
//     cout<<mx;
// }



//------MINIMUM IN AN ARRAY------
#include<iostream>
using namespace std;
int main() {
    int arr[] = {6,5,7,4,8};
    cout<<sizeof (arr)/4<<endl;
    int mn = arr[0];

    for(int i = 0 ; i<=4 ; i++) {
        if( arr[i]<mn) mn= arr[i];
    }
    cout<<mn;
}