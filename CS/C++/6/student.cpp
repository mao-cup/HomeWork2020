#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct student{
    string name;  //����
    int num;  //ѧ��
    int score;   //����
}st[20];  //ѧ��������

bool cmp(student x,student y){  //����ṹ��
    return x.score<y.score;   //��������>��Ϊ����
}



int main(){
    void n1(int n);  //��������
    void n2(int n);
    void n3(int n);
    int n;  //¼������
    cin>>n;
    for (int i = 0; i < n ; ++i) {
        cin>>st[i].name>>st[i].num>>st[i].score;
    }
    cout<<"����������Ҫ�Ĺ��ܣ�1.ͳ����߷� 2.ͳ������ 3.����ѧ�ųɼ�";
    while(1){
        int f;
        cin>>f; //���빦���ж�
        if(f==1){
            n1(n);
        }
        else if(f==2){
            n2(n);
        }
        else if(f==3){
            n3(n);
        } else{
            cout<<"�밴��ʾ���빦��";
        }
    }
    return 0;
}

void n1(int n){
    sort(st,st+n,cmp);  //��scoreΪ��׼���� ���� ����ṹ��
    cout<<"��߷�Ϊ��"<<endl;
    cout<<st[n-1].name<<" "<<st[n-1].num<<" "<<st[n-1].score<<endl;
}

void n2(int n){
    cout<<"���շ��������������Ӹߵ��������"<<endl;
    for (int j = n-1; j >= 0  ; --j) {
        cout<<st[j].name<<" "<<st[j].num<<" "<<st[j].score<<endl;
    }
}
void n3(int n){
    int soNum;  //������ѧ��
    int p=0; //�жϱ�ǣ�����ȷ���Ƿ�鵽
    cout<<"���룺";
    cin>>soNum;  //
    for (int i = 0; i < n; ++i) {
        if(soNum==st[i].num){
            cout<<st[i].name<<" "<<st[i].num<<" "<<st[i].score<<endl;
            p=1;
        }
    }
    if(p==0){  //��δ����������ʾ
        cout<<"not found";
    }
    p=1;//���ñ�ǣ���ֹ����ѭ��
}
//
// Created by mao-cup on 2020/3/24.
//

