#include<bits/stdc++.h>
using namespace std;


//Metho 1
int fun(int i, int n, int sum){
    if(i>n) return sum;//base case: if i is greater than n then we will return the sum from the function and stop the recursion
   return fun(i+1,n,sum+i);//recursive call: we will call the function fun() again and increment the value of i by 1 and add the value of i to the sum
}

//Method 2
int fun2(int i, int sum){
    if(i<1) return sum;//base case: if i is less than or equal to 0 then we will return the sum from the function and stop the recursion
    return fun2(i-1,sum+i);//recursive call: we will call the function fun() again and decrement the value of i by 1 and add the value of i to the sum
}

//functional way 
int fun3(int n){
    if(n==0) return 0;
    return n+fun3(n-1);
}

int main(){
    int n;
    cin>>n;//input: 5 (we will take the value of n from the user)
    cout<<fun(1,n,0)<<endl;//function call: we will call the function fun() with the initial value of i as 1, n as the value taken from the user and sum as 0
    cout<<fun2(n,0)<<endl;//function call: we will call the function fun2() with the initial value of i as n, and sum as 0
    cout<<fun3(n)<<endl;//function call: we will call the function fun3() with the initial value of n as the value taken from the user

}


