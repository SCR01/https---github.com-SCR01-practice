#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;

    int maxEle, minEle;

    for(auto it : mpp){

        if(it.second > maxFreq){
            maxFreq = it.second;
            maxEle = it.first;
        }

        if(it.second < minFreq){
            minFreq = it.second;
            minEle = it.first;
        }
    }

    cout << "Highest Frequency Element: "
         << maxEle << " -> " << maxFreq << endl;

    cout << "Lowest Frequency Element: "
         << minEle << " -> " << minFreq << endl;
}