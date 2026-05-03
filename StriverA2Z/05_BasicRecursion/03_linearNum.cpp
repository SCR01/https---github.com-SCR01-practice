#include<bits/stdc++.h>
using namespace std;


void fun(int i, int n){
    if(i>n) return;
    cout<<i<<" "<<endl;//output: 1 2 3 4 5 (we will print the value of i before incrementing it)
    fun(i+1,n);
}

int main(){
    int n;
    cin>>n;//input: 5 (we will take the value of n from the user)
    fun(1,n);//function call: we will call the function fun() with the initial value of i as 1 and n as the value taken from the user
}