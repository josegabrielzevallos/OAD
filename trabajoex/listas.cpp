#include <iostream>
using namespace std;

void listas(int *lista1,int *lista2,int *lista3)
{
    int *tmp = lista3;
    while((*lista1 != -1) and (*lista2 =! -1))
    {
        if(*lista1<*lista2)
        {
            *lista3=*lista1;
            lista3++;
            lista1++;
        }
        if(*lista1>*lista2)
        {
            *lista3=*lista2;
            lista3++;
            lista2++;
        }
    }
    //cout<<"lista 1"<<*lista1<<endl<<"Lista2"<<*lista2<<endl;
    while(*lista1!=-1)
    {
        *lista3=*lista1;
        lista3++;
        lista1++;
    }
    //cout<<"lista 1"<<*lista1<<endl<<"Lista2"<<*lista2<<endl;
    while(*lista2!=-1)
    {
        *lista3=*lista2;
        lista3++;
        lista2++;
    }
    //cout<<"lista 1"<<*lista1<<endl<<"Lista2"<<*lista2<<endl;
    *lista3=-1;
   while(*tmp!=-1)
    {
        cout<<*tmp<<endl;
        tmp++;
    }
}

int main()
{
    int arr[5]={4,5,6,8,-1};
    int arri[5]={4,5,6,8,-1};
    int ariii[15]={};
    listas(arr,arri,ariii);
 return 0;
}
