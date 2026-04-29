#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dup = n;
    int rev  = 0;
    while(n>0){
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n/10;
        
    }
    if(rev == dup){
            cout<<"Palindrome"<<endl;
        }else{
            cout<<"not Palindrome"<<endl;
        }
        return 0;
}