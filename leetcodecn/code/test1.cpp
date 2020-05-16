#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    m=n/2+1;
    for (int i = 1; i <= m ; ++i) {
        for (int j = 1; j <= m-i ; ++j) {
            cout<<" ";
        }
        for (int k = 1; k <=2*i-1 ; ++k) {
            cout<<"*";
        }
    }


    return 0;
}



// Created by Bad_Cat on 2020/5/9.
//

