#include<bits/stdc++.h>
using namespace std;


bool isPlaidrome(string &s, int i){
    if(i>=s.size()/2) return true;//base case: if i is greater than or equal to half of the size of the string then we will return true from the function and stop the recursion
    if(s[i]!=s[s.size()-i-1]) return false;//if the character at index i is not equal to the character at index size of the string - i - 1 then we will return false from the function and stop the recursion
return isPlaidrome(s, i + 1);//recursive call: we will call the function isPlaidrome() again and increment the value of i by 1

}

int main(){
    string s;
    cin >> s;//input: "madam" (we will take the string input from the user)
    if(isPlaidrome(s, 0)) cout << "Yes" << endl;//function call: we will call the function isPlaidrome() with the initial value of i as 0 and the string s as the input
    else cout << "No" << endl;
}