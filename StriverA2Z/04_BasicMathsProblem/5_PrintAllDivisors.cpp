#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> div;
    for(int i = 1;i<=sqrt(n); i++){
        if(n%i == 0){
            div.push_back(i);
            if(i != n/i){//to avoid duplicate when n is a perfect square
                //if n is not a perfect square then we will have two divisors i and n/i
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(),div.end());
    for(int i = 0;i<div.size();i++){
        cout<<div[i]<<" ";
        //for(auto it: div) cout<<it<<" "; one more way
    }
}