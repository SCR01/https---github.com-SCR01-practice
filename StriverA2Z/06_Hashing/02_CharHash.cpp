#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //precompute
int hash[26] = {0};
for(size_t i = 0; i < s.size(); i++){
}


    int q;
    cin>>q;

    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;

}