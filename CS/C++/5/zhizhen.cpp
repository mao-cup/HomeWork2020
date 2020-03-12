#include <iostream>
using namespace std;
const int MAX = 3;

int main(){
    int var[2][3]={{1,2,3},{4,5,6}};
    int (*ptr)[3];
    ptr = var;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<ptr[i][j];
        }
    }  //二位数组指针
    /*for(int i =0 ;i <MAX; i++){
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
     */
    return 0;
}
//
// Created by Bad_Cat on 2020/3/10.
//

