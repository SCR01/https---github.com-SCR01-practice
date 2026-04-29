#include<iostream>
using namespace std;

void done(int a){
cout <<a<<endl;
a += 10;
cout<<a<<endl;
a += 10;
cout<<a<<endl;
}

int main(){
    int a = 10;
    done(a);
    cout<<a<<endl;
    
}