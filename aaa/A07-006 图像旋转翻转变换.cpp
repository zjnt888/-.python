#include<iostream>
#include<algorithm>

using namespace std;

void dia(int q[100][100]);        //��45�ȶԽ��߶Ե�
void updown(int q[100][100]);     //���¶Ե�
void leftright(int q[100][100]);  //���ҶԵ�
void turnl(int q[100][100]);      //˳ʱ��90
void turnr(int q[100][100]);      //��ʱ��90
void printq(int q[100][100]);     //��ӡ����

int a,b,q[100][100];

void dia(int q[100][100])
{
    for(int i=0;i<a;i++)
        for(int j=i;j<b;j++)
        swap(q[i][j],q[j][i]);     //swap ������������
    swap(a,b);
}

void updown(int q[100][100])
{
    for(int i=0;i<a/2;i++)
        for(int j=0;j<b;j++)
        swap(q[i][j],q[a-1-i][j]);
}

void leftright(int q[100][100])
{
    for(int i=0;i<a;i++)
        for(int j=0;j<b/2;j++)
        swap(q[i][j],q[i][b-1-j]);
}

void turnl(int q[100][100])
{
    dia(q);
    leftright(q);
}

void turnr(int q[100][100])
{
    dia(q);
    updown(q);
}

void printq(int q[100][100])
{
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        cout<<q[i][j]<<' ';
    cout<<endl;
    }
}

int main()
{
    cin>>a>>b;
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
        cin>>q[i][j];
    turnl(q);
    printq(q);
}

