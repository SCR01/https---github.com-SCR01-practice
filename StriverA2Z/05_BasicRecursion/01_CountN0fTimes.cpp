#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void fk(){
if(cnt == 5) return;//base case: if cnt is equal to 5 then we will return from the function and stop the recursion
cout<<cnt<<" "<<endl;//output: 0 1 2 3 4 (we will print the value of cnt before incrementing it)
cnt++;
fk();//recursive call: we will call the function fk() again and again until we reach the base case
}
int main(){
    fk();
    cout<<"final Count"<<" "<<cnt<<endl;//output: 5 (we will print the value of cnt
}