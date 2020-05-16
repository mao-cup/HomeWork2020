#include <bits/stdc++.h>
using namespace std;

int main() {
    double sum,ans; //存阶乘值和答案
    int n;
    cin>>n;
    ans=1;
    for (int i = 1; i <=n; ++i) {
        sum=1;
        for (int j = 1; j <=i; ++j) {  //此处不能取0开始，若为0则后续无法做除
            sum=sum*j;
        }
        sum=1/sum;
        ans=ans+sum;
    }
    cout<<setprecision(8)<<std::fixed<<ans;

    return 0;
}


//
// https://pintia.cn/problem-sets/12/problems/284
//

