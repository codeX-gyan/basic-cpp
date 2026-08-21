#include<iostream>
using namespace std;
int main() {
    string s = "bro fucked up ho gya hu";
    int n =s.length();
    int count = 0;
    for( int i=0 ; i<n ; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout<<count;
}