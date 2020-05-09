#include <bits/stdc++.h>
using namespace std;

int prime( int p );
void Goldbach( int n );

int main() {
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if (prime(m) != 0) printf("%d is a prime number\n", m);
    if (m < 6) m = 6;
    if (m % 2) m++;
    cnt = 0;
    for (i = m; i <= n; i += 2) {
        Goldbach(i);
        cnt++;
        if (cnt % 5) printf(", ");
        else printf("\n");
    }

    return 0;
}
int prime(int p){
    int i;
    if(p<=1){
        return 0;
    }else if(p==2){
        return 1;
    } else{   //判断素数
        for (int j = 2; j <= p/2 ; ++j) {
            if(p%j==0){
                return 0;
            }else if(j>p/2){
                return 1;
            }
        }
    }
    return 1;
}

void Goldbach (int n){
    int x;
    for (int i = 2; i <= n ; ++i) {
        if(prime(i)==1 && prime(n-i)==1){
            x++;
            if(x==1){
                cout<<n<<"="<<i<<"+"<<n-i;   //按格式输出
            }
        }
    }
}

//https://pintia.cn/problem-sets/13/problems/478