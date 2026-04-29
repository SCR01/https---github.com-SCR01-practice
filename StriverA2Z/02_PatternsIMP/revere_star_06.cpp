#include<iostream>
using namespace std;

void patter5(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}

int main(){
    int n;
    cin>>n;
    patter5(n);
}
