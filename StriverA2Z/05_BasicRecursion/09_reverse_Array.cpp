#include<bits/stdc++.h>
using namespace std;

void method1(int i, int j, int arr1[]){

    if(i >= j) return ;

    swap(arr1[i], arr1[j]);

    method1(i + 1, j - 1, arr1);
}

void method2(int i, int arr2[]){
    if(i>=5/2) return;
    swap(arr2[i], arr2[5 - i - 1]);
    method2(i + 1, arr2);
}
int main(){

    int arr1[5] = {11,22,55,33,44};
    int arr2[5] = {22,55,66,77,88};

    method1(0, 4, arr1);
    method2(0, arr2);

    // print reversed array
    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}