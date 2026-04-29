#include<bits/stdc++.h>
using namespace std;


int main(){
    //array
    int a[5] = {1,2,5,4,10};
    sort(a, a+5);//sorting the array a of size 5
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;//output: 1 2 4 5 10

    vector<int> v = {1,3,5,8,7};
    sort(v.begin(),v.end());//sorting the vector v
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;//output: 1 3 5 7 8

    max_element(a, a+5);//returns the maximum element in the array a of size 5
    cout<<*max_element(a, a+5)<<endl;//output: 10 (dereferencing the pointer returned by max_element to get the value of the maximum element)
    int c = *min_element(a, a+5);//returns the minimum element in the array a of size 5
    cout<<c<<endl;//output: 1
}