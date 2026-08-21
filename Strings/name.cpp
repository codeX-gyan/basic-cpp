#include<iostream>
using namespace std;
int main() {
    string s;
    cout<<"enter a string : ";
    //cin>>s;               //cin me input lenge toh space ke baad wali cheezien print nhi hogi 
    getline(cin,s);         //islye getline(cin,s) le rhe hai
    cout<<s;
}