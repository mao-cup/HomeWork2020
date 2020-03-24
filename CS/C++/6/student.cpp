#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct student{
    string name;  //名字
    int num;  //学号
    int score;   //分数
}st[20];  //学生最大个数

bool cmp(student x,student y){  //排序结构体
    return x.score<y.score;   //升序排序，>则为降序
}



int main(){
    void n1(int n);  //声明函数
    void n2(int n);
    void n3(int n);
    int n;  //录入人数
    cin>>n;
    for (int i = 0; i < n ; ++i) {
        cin>>st[i].name>>st[i].num>>st[i].score;
    }
    cout<<"请输入你需要的功能：1.统计最高分 2.统计排名 3.查找学号成绩";
    while(1){
        int f;
        cin>>f; //输入功能判断
        if(f==1){
            n1(n);
        }
        else if(f==2){
            n2(n);
        }
        else if(f==3){
            n3(n);
        } else{
            cout<<"请按提示输入功能";
        }
    }
    return 0;
}

void n1(int n){
    sort(st,st+n,cmp);  //按score为基准排序 升序 排序结构体
    cout<<"最高分为："<<endl;
    cout<<st[n-1].name<<" "<<st[n-1].num<<" "<<st[n-1].score<<endl;
}

void n2(int n){
    cout<<"按照分数进行排名，从高到低输出："<<endl;
    for (int j = n-1; j >= 0  ; --j) {
        cout<<st[j].name<<" "<<st[j].num<<" "<<st[j].score<<endl;
    }
}
void n3(int n){
    int soNum;  //搜索的学号
    int p=0; //判断标记，用于确认是否查到
    cout<<"输入：";
    cin>>soNum;  //
    for (int i = 0; i < n; ++i) {
        if(soNum==st[i].num){
            cout<<st[i].name<<" "<<st[i].num<<" "<<st[i].score<<endl;
            p=1;
        }
    }
    if(p==0){  //若未搜索到则提示
        cout<<"not found";
    }
    p=1;//重置标记，阻止无限循环
}
//
// Created by mao-cup on 2020/3/24.
//

