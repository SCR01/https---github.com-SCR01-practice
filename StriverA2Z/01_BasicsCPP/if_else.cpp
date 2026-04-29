#include<bits/stdc++.h>
using namespace std;

//Example 1
// int main(){
//     int age;
//     cin>>age;
//     if(age>=18){
//         cout<<"You are an adult."<<endl;
//     }
//     else{
//         cout<<"You are a minor"<<endl;
//     }
//     return 0;
//     }

//Example 2
// int main(){
//     int marks;
//     cin>>marks;
//     if(marks<25) cout<<"F"<<endl;
//     else if(marks<45) cout<<"E"<<endl;
//     else if(marks<50) cout<<"D"<<endl;
//     else if(marks<60) cout<<"C"<<endl;
//     else if(marks<80) cout<<"B"<<endl;
//     else if(marks >=95 && marks <=100)cout<<"A*"<<endl;
//     else cout<<"A"<<endl;
// }

//Example 3
// Nested If inside else if


int main() {
    int age;
    cin >> age;

    if (age < 18) {
        cout << "Not eligible for the job" << endl;
    }
    else if (age <= 49) {
        cout << "You are eligible" << endl;
    }
    else if (age <= 55) {
        cout << "You are eligible" << endl;
        cout << "Retirement soon" << endl;
    }
    else {
        cout << "Retirement time" << endl;
    }
}
