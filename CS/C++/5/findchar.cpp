//��ĿҪ�� ��д?��������?�����ַ��� string1 �� string2������� string1���Ƿ������string2��
#include <iostream>
using namespace std;

int main()
{
    char s1[100],s2[100],*p1,*p2;
    int ans[30],sum=0; //ansΪ�����¼ֵ��sumΪ��¼�Ѿ�������ַ�����
    int i=0,len2;
    cout<<"������string1��"<<endl;
    gets(s1);
    cout<<"������string2��"<<endl;
    gets(s2);
    p2=s2;
    for(;*p2!='\0';p2++) //ͳ��s2����
        len2++;
    p1=s1;  //��ʼ��p1
    p2=s2;   //�ָ�p2��ʼ״̬
    while(*p1!='\0')
    {
        if(*p1!=*p2)   //�ж��Ƿ���ͬ��������бȽ�s1��һλ
        {
            p1++;
            sum++;
        }
        else
        {
            while((*p1==*p2)&&(*p2!='\0'))   //ͷ��ͬ����ͬʱ���бȽ���һλ
            {
                p1++;
                p2++;
                sum++;
            }
            if(*p2=='\0')  //��ͬ��β��
            {
                ans[i]= sum - len2;  //��𰸣�����ܳ��ȣ�βֵ��- s2���� = ͷֵ
                i++;
            }
        }
        p2=s2;  //�ָ�p2��ʼ״̬
    }
    if(i<1){
        cout<<"δ�ҵ�"<<endl;
    } else{
        cout<<"����"<<i<<"�Σ���ʼλ�÷ֱ��ǣ�";
        for(int j=0;j<i;j++){
            cout<<ans[j]<<" ";
        }
    }

    return 0;
}

