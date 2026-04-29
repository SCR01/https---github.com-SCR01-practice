#include<iostream>
using namespace std;



void patter19(int n){
int space = 0;
    for(int i = 0;i<n;i++){
    //star
    for(int j = 0;j<n-i;j++){
        cout<< "*";
    }

    //space
        for(int j = 1;j<=space;j++){
            cout<< " ";
        }

    //star
    for(int j = 0;j<n-i;j++){
        cout<< "*";
    }
    space+=2;
    cout<<endl;

}  

int space1 = 2*n-2;
for(int i = 0;i<n;i++){
    //star
    for(int j = 0;j<=i;j++){
        cout<< "*";
    }

    //space
        for(int j = 1;j<=space1;j++){
            cout<< " ";
        }

    //star
    for(int j = 0;j<=i;j++){
        cout<< "*";
    }
    space1-=2;
    cout<<endl;

}
}

int main(){
    int n;
    cin>>n;

    patter19(n);
    return 0;
}