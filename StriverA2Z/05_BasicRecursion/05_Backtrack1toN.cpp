#include<bits/stdc++.h>
using namespace std;

int fun(int i, int n){
    if(i<1) return 0;//base case: if i is less than 1 then we will return from the function and stop the recursion
fun(i-1,n);
cout<<i<<" "<<endl;//output: 1 2 3 4 5 (we will print the value of i after decrementing it)

}

int main(){
    int n;
    cin>>n;//input: 5 (we will take the value of n from the user)
    fun(n,n);//function call: we will call the function fun() with the initial value of i as n and n as the value taken from the user
}