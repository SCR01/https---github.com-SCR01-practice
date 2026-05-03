#include<bits/stdc++.h>
using namespace std;


void fun(int i, int n){
    if(i<1) return;//base case: if i is less than 1 then we will return from the function and stop the recursion
    cout<<i<<" "<<endl;//output: 5 4 3 2 1 (we will print the value of i before decrementing it)
    fun(i-1,n);//recursive call: we will call the function fun() again and
}

int main(){
    int n;
    cin>>n;//input: 5 (we will take the value of n from the user)
    fun(n,n);//function call: we will call the function fun() with the initial value of i as n and n as the value taken from the user
}