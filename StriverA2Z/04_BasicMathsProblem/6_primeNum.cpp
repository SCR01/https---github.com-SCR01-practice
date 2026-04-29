#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt = 0;
    for(int i = 1;i*i<=n;i++){
        if(n%i == 0){
            cnt++;
            if(n/i != i) cnt++;//if n is divisible by i and n/i is not equal to i then it means that n has two different divisors (i and n/i) so we need to count both of them
        }
        
    }
    // if the count of divisors is 2 then it means that n is a prime number because a prime number has only two divisors (1 and itself) and if the count of divisors is greater than 2 then it means that n is not a prime number because it has more than two divisors
    if(cnt==2) {
            cout<<"Prime Number"<<endl;
            return 0;
        }else if(cnt>2){
            cout<<"Not a Prime Number"<<endl;
            return 0;
        }
   
}