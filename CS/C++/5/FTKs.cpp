#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
const int N=5;
string t,names[N+1];

int main(){
    int i;
    for(i=1;i<=N;++i){
        cin>>names[i];   //读取字符串
    }
    sort(names+1,names+N+1);   //排序
    for(i=1;i<=N;++i) {
        cout<<names[i]<<endl;  //循环写出
    }
    return 0;
	
}

//输出字典顺序国家名