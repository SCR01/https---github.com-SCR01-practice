#include<bits/stdc++.h>
using namespace std;


void fun(int i, int n){
    if(i>n) return;//base case: if i is greater than n then we will return from the function and stop the recursion
    cout<<"Striver"<<" "<<endl;//output: Striver (we will print the

fun(i+1,n);
}

int main(){
    int n;
    cin>>n;//input: 5 (we will take the value of n from the user)
    fun(1,n);//function call: we will call the function fun() with the initial
}