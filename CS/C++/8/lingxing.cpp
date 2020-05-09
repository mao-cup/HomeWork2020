#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    m=n/2+1;
    for (int i = 1; i <= m ; ++i) {  //上半个，包含中间最长的一行
        for (int j = 1; j <= n-(2*i-1) ; ++j) {
            cout<<" ";
        }
        for (int k = 1; k <=2*i-1 ; ++k) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int l = 1; l < m ; ++l) {
        for (int i = 1; i <= 2*l ; ++i) {
            cout<<" ";
        }
        for (int j = 1; j <= 2*(m-l)-1 ; ++j) {
            cout << "* ";
        }
        cout<<endl;
    }

    return 0;
}


//https://pintia.cn/problem-sets/12/problems/295
