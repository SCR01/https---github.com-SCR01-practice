#include<bits/stdc++.h>
using namespace std;


int fun(int i, int n){
    if(i>n) return 0;//base case: if i is greater than n then we will return 0 from the function and stop the recursion
    fun(i+1,n);//recursive call: we will call the function fun() again and increment the value of i by 1
    cout<<i<<" "<<endl;//output: 5 4 3 2 1 (we will print the value of i after the recursive call, so it will print in reverse order)
}

int main(){
    int n;
    cin>>n;//input: 5 (we will take the value of n from the user)
    fun(1,n);//function call: we will call the function fun() with the initial value of i as 1 and n as the value taken from the user
}