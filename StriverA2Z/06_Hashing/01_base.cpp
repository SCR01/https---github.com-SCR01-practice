#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    //precompute

int hash[13]={0};//hash array to store the frequency of each element in the input array
    for(int i = 0;i<n;i++){
        hash[arr[i]]++;//increment the frequency of the element at index arr[i] in the hash array
    }



    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
 cout<<hash[x]<<endl;
        //check if x is present in the array or not
    }
    return 0;
   
}