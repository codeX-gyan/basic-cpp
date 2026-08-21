#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string s = "gyanprakash";
    int n = s.length();

    reverse(s.begin() , s.begin()+4);
    cout<<s<<endl;
}