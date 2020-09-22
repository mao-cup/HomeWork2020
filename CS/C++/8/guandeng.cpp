#include<iostream>
using namespace std;

int main(){
	int a[1000]={0};
	int n,k,t,m=0;   //n灯数，k人数，t开关次数，m记录数组推进。 
	cin>>n>>k;

	for(int i=1;i<=n;i++){
		t=0;   //初始化开关次数 
		for(int j=1;j<=k;j++){
			if(i%j==0){   //判断i号灯能否被J这个人触发，若触发，则t++ 
				t++;   //记录开关次数 
			}
		}
		if(t%2==1){    //判断T(开关次数)是否为奇数，如果为奇数，则最后还是开启，如果是复数，则为关闭 
			a[m]=i;  //存入该灯编号 
			m++;   //推进数组向后记录 
		}
	}
	for(int i=0;i<m;i++){   //输出记录在数组里的灯号 
		cout<<a[i]<<" "; 
	}
	
	return 0;
}
