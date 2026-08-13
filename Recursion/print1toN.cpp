//-----USING THIRD VARIABLE-----


// #include<iostream>
// using namespace std;
// void print(int n , int x) {
//     if(n>x) return;
//     cout<<n<<endl;
//     print(n+1 , x);
// }

// int main() {
//     int x;
//     cout<<"enter a number : ";
//     cin>>x;

//     print(1,x);
// }


//----WITHOUT USING THIRD VARIABLE-----

#include<iostream>
using namespace std;
void print(int n , int x) {
    if(n>x) return;
    cout<<n<<endl;
    print(n+1 , x);
}

int main() {
    int x;
    cout<<"enter a number : ";
    cin>>x;

    print(1,x);
}