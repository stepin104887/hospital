#include<stdio.h>
#include<string.h>
struct ad
{
    char name[30];
    char disease[30];
    int cabin,phone,age;
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void edit();
void del();
void show();

