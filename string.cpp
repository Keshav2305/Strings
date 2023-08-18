#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[100] = {'h','e','l','l','o'};
    cout<<str<<endl<<"Enter your name and surname:";
    char name[100];
    cin.get(name ,100);
    cout<<name<<endl;
    int length=0,length1=0;
    for(int i=0;name[i]!='\0';i++)
    {
        length++;
    }
    cout<<length<<endl;

    char *ptr;
    ptr=&name[0];
    while(*ptr!='\0')
    {
        length1++;
        ptr++;
    }
    cout<<length1<<endl;

    int onlyname=0,surname;
    ptr=&name[0];
    while(*ptr!='\0')
    {
        if(*ptr!=' ')
        {
            onlyname++;
        }
        else
        {
            surname=onlyname+1;
        }
        ptr++;
    }
    cout<<"Initials are "<<name[0]<<"."<<name[surname]<<".";
    return 0;
}