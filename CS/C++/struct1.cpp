#include <bits/stdc++.h>

//结构体根据分数选前三名
using namespace std;
struct node{
    int index;
    int fen;
};

node st[10];

bool cmp(node x,node y){   //从大到小
    return x.fen>y.fen;  //根据fen排序
}

int main() {
    for (int i = 0; i < 10; ++i) {
        st[i].index=i;
        cin>>st[i].fen;
    }
    sort(st,st+10,cmp);
    for (int i = 0; i < 3; ++i) {  //输出前三名
        cout<<"Number:"<<st[i].index<<" Mark:"<<st[i].fen<<endl;
    }

    return 0;
}


