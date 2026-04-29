#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "HelloGeeks";
    cout<<s[2]<<endl;

    int len = s.size();
    s[len - 1] = 'k';
    cout<<s[len-1]<<endl;
    cout<<s<<endl;
    return 0;

}