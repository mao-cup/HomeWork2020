#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <=100 ; i++) {
        bool k=0;
        for (int j = 2; j <i ; j++) {
            if(i%j==0){
                k=1;//不是素数跳出
                break;
            }
        }
        if (k==0){
            cout<<i<<endl;
        }
    }
    return 0;
}

//一百以内所有素数