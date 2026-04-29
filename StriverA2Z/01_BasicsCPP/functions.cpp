#include<bits/stdc++.h>
using namespace std;

//fucntion are block of code which perform a specific task and can be reused multiple times in a program.
// void || return type | function name | parameters


//Example 1
// void printName(string name){
//     cout<<"Hey "<<name<<endl;
// }

// int main(){

//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);
// return 0;
// }

//Example 2
// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }

// int main(){
//     int num1,num2,num3;
//     cin>>num1>>num2;
//     num3 = sum(num1,num2);
//     cout<<num3;
// return 0;
// }

//Example 3

int ddoo(int num1){
    cout<<num1<<endl;
    num1 += 11;
    cout<<num1<<endl;
    num1+=11;
    cout<<num1<<endl;
return num1;
}

int main(){
    int num1 = 11;
    ddoo(num1);
    return 0;
}