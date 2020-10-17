#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//    int a[10];
//    int b[10];
//    int c[] = {1,2,3,4,5};
//    int x=c[2];
//    c[3] = x;
//    cout<<c[4];
//    vector<int> a(10);
//    vector<int> b(10,0);
    vector<int> c= {1,2,3,4,5};
//    int x = c[2];
//    c[3] = x;
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = { 3, 4, 5, 6, 7 };
    auto it = find_first_of(begin(a),end(a),begin(b),end(b));
    bool found =(it!=end(a));
    return 0;
}


//在这里我们可以看出，当你想使用 vector 来代替数组的时候，写法其实很简单，基本没什么不同。那读者可能会问，既然看起来没什么区别，那为什么要使用 vector 呢？这有如下几个原因：
//
//vector 可以让你插入删除元素，当你需要的时候就非常方便，而数组就不可以。
//vector 可以配合标准库的其他强大的功能，大大简化代码的复杂程度。