#include <stdio.h>
//To do :can shu zhong diao yong han shu 
void main()
{
    void get_e(char a[],int i,char *e);
    void inits(char a[]);
    void unionf(char a[],char b[]);
    int len_c(char a[]);
    int loc_c(char a[],char c);
    char a[100]="qwertyuiop";
    char b[100]="asdf   qwer   asdf";
    int t=0;
    unionf(a,b);
    printf("%s\n",a);
//    inits(a);
//    t=loc_c(a,'r');
//    t=len_c(a);
//    printf("%d",t);
}
void unionf(char a[],char b[])
{
    void get_e(char a[],int i,char *e);
    int loc_c(char a[],char c);
    int len_c(char a[]);
    void ins_c(char a[],int i,char e);
    char e;
    int i,a_len,b_len;
    a_len=len_c(a);
    b_len=len_c(b);
    for(i=0;i<b_len;i++)
    {
        get_e(b,i,&e);
        if(loc_c(a,e)) 
            ins_c(a,++a_len,e);
        printf("debug%c  ",e);
    }
    a[++a_len]='\0';
}

void ins_c(char a[],int i,char e)
{
    a[i-1]=e;
}

void get_e(char a[],int i,char *e)
{
    *e=a[i];
}

int len_c(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}

int loc_c(char a[],char c)
{
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i++]==c)return 0;
    }
    return 1;
}

void inits(char a[])
{
    int i;
    for(i=0;i<20;i++)
    {
        a[i]=i+50;
    }
}
