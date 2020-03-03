#include <iostream>
using namespace std;

int main(){
    int a[5]={16,8,4,32,5};
    int tmp;
    for (int i = 0; i <5 ; i++) {
        for (int j = 0; j <4-i ; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int k = 0; k <5 ; k++) {
        cout<<a[k]<<endl;
    }
    return 0;
}


