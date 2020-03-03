#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
struct clock{
    int h;
    int m;
    int s;
};
typedef struct clock CLOCK;//重新定义结构体clock 下面可以直接用CLOCK代替不用再写struct


int main(){
    CLOCK t={0,0,0};//初始化结构体
    while(1){
        t.s++;
        if (t.s > 59){
            t.s=0;
            t.m++;
        }
        if (t.m > 59){
            t.m=0;
            t.h++;
        }
        if (t.h > 23){
            t.h=0;
            cout<<"得，又浪费一天"<<endl;
        }
        printf("%2d:%2d:%2d\r",t.h, t.m, t.s);
        Sleep(1000); //每执行一次休息1秒，用于生成秒
    }

    return 0;
}

//https://www.runoob.com/w3cnote/c-structures-intro.html 结构体说明

