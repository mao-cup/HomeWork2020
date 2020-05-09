#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[1001];  //
    int rl[1001];// 容量
    int max=0;
    cin>>n;
    for (int i = 0; i < n ; ++i) {  //录入数据
        cin>>a[i];
        rl[i]=100;        
    }
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n ; ++j) {
            if(max<j){
                max=j;  //记录最大值个数
            }
            if(a[i]<=rl[j]){
                rl[j]=rl[j]-a[i];
                cout<<a[i]<<" "<<j+1<<endl;  //0起所以加一
                break; //跳出，开始下一个
            }
        }
    }
    cout<<max+1;
    return 0;
}


//https://pintia.cn/problem-sets/13/problems/509