#include<bits/stdc++.h>// header file includes every Standard library
using namespace std;// using namespace std for avoiding std:: before every statement

int main(){//Euclidean Algorithm for finding GCD of two numbers
    //Tc: O(log(min(n1,n2))) where n1 and n2 are the two numbers for which we want to find the GCD
    int n1,n2;
    cin>>n1>>n2;
    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }
    if(n1==0) cout<<"HCF of n1 and n2 is "<<n2<<endl;//output: HCF of n1 and n2 is n2 (gcd of n1 and n2)

    else cout<<"HCF of n1 and n2 is "<<n1<<endl;//output: HCF of n1 and n2 is gcd (gcd of n1 and n2)
}