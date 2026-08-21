#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string s = "gyan prakash";
    int n = s.length();

    reverse(s.begin() , s.end());
    cout<<s<<endl;
}