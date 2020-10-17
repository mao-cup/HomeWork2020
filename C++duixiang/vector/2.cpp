#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
//    char s[]="asdqwefsd";
//    char b[4];
//    strncpy(b,s+1,3);
//    b[3]='\0';
//    string s="asdqwesad";
//    string d(begin(s)+1,begin(s)+6);
    char a[10] = "abcdefg";
    memmove(a + 6, a + 5, strlen(a + 5) + 1);
    strncpy(a + 2, "XYZW", 4);
    char b[10] = "abcdefg";
    strncpy(b + 2, "UV", 2);
    memmove(b + 4, b + 5, strlen(b + 5) + 1);
    return 0;
}


//在这里我们可以看出，当你想使用 vector 来代替数组的时候，写法其实很简单，基本没什么不同。那读者可能会问，既然看起来没什么区别，那为什么要使用 vector 呢？这有如下几个原因：
//
//vector 可以让你插入删除元素，当你需要的时候就非常方便，而数组就不可以。
//vector 可以配合标准库的其他强大的功能，大大简化代码的复杂程度。