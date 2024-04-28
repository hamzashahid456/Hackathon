#include<stdio.h>
#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int count = 0;
    int start = 0;

    vector<int> locked {};


    cout << "Enter Num: ";
    cin >> n;

    for(int i=1; i<n+1; i++){
        if(i%3 == 0){
            locked.push_back(i);
            
        }
    }

    for(int i=n+1; i==1; i--){
        if(i%4 == 0){
            locked.push_back(i);

            for (int j : locked) {
                if(i == j){
                    locked.erase(locked.begin() + i);
                }
            }
        }
    }
    cout << "Output: " << locked.size() << endl;


    return 0;
}