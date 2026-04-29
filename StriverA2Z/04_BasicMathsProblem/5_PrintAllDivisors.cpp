#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> div;
    for(int i = 1;i<=sqrt(n); i++){
        if(n%i == 0){
            div.push_back(i);
            if(i != n/i){
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