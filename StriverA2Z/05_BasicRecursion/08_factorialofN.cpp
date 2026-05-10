#include<bits/stdc++.h>
using namespace std;


int fun(int n){
    if(n==0) return 1;//base case: if n is 0 then we will return 1 from the function and stop the recursion
    return n*fun(n-1);//recursive call: we will call the function fun() again and decrement the value of n by 1 and multiply it with n
}
int main(){
    int n;
    cin>>n;//input: 5 (we will take the value of n from the user)
    cout<<fun(n)<<endl;//function call: we will call the function fun() with the initial value of n as the value taken from the user
}