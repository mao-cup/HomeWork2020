//题目要求 编写?个程序输?两个字符串 string1 和 string2，检查在 string1中是否包含有string2。
#include <iostream>
using namespace std;

int main()
{
    char s1[100],s2[100],*p1,*p2;
    int ans[30],sum=0; //ans为储存记录值，sum为记录已经查过的字符长度
    int i=0,len2;
    cout<<"请输入string1："<<endl;
    gets(s1);
    cout<<"请输入string2："<<endl;
    gets(s2);
    p2=s2;
    for(;*p2!='\0';p2++) //统计s2长度
        len2++;
    p1=s1;  //初始化p1
    p2=s2;   //恢复p2初始状态
    while(*p1!='\0')
    {
        if(*p1!=*p2)   //判断是否相同，否则进行比较s1下一位
        {
            p1++;
            sum++;
        }
        else
        {
            while((*p1==*p2)&&(*p2!='\0'))   //头相同，则同时进行比较下一位
            {
                p1++;
                p2++;
                sum++;
            }
            if(*p2=='\0')  //相同到尾部
            {
                ans[i]= sum - len2;  //存答案，查过总长度（尾值）- s2长度 = 头值
                i++;
            }
        }
        p2=s2;  //恢复p2初始状态
    }
    if(i<1){
        cout<<"未找到"<<endl;
    } else{
        cout<<"出现"<<i<<"次，起始位置分别是：";
        for(int j=0;j<i;j++){
            cout<<ans[j]<<" ";
        }
    }

    return 0;
}

