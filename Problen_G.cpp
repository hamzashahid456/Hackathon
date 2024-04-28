#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;

    cout << "Enter Num: ";
    cin >> n;

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
            cout << n << endl;
            count++;
        } else{
            n = (3*n)+1;
            cout << n << endl;
            count++;
        }
    }

    cout << "Output: " << count << endl;

    return 0;
}