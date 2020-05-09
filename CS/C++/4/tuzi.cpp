//C++
#include <iostream>
using namespace std;
int main(){
    int X; //输入量
    int sum,t=0,t1=1,t2=1;
    cin>>X;
    if(X==1){
        cout<<1;
    } else{
        for (int i = 2; t2 <X ; i++) {
            t=t1+t2;   //逆斐波那契
            t1=t2;
            t2=t;
            sum=i;
        }
    }
    sum++;
    cout<<sum;
    return 0;
}