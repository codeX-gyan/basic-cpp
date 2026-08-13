// #include<iostream>
// using namespace std;
// void sum( int a , int b ) {
//     cout<<"sum is : "<<a+b;
// }

// void product( int a ,int b) {
//     cout<<"product is : " <<a*b;
// }

// int main() {
//     sum(5,6);
//     cout<<endl;
//     product(6,3);
//     return 0;
// }



// -------PERMUTATION----------
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for( int i =1 ; i<=x ; i++ ){
        f *= 1;
    }
    return f;
}
int main() {
    int n ;
    cout<<" enter n : ";
    cin>>n;
    int r ;
    cout<<" enter r : ";
    cin>>r;

    int a = fact(n);
    int b = fact(n-r);
    cout<<a/b;
}
