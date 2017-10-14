#include<studio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
int k=0,z=0,i=0,j=0,c=0;
char a[16], ac[20], stk[15], act[10];
void check();
void main(){
    puts("GRAMMAR is \n E->E+E \nE->E*E \n E->(E) \n E->id");
    puts("enter a string");
    gets(a);
    c=strlen(a);
    strcpy(ac,"SHIFT->");
    puts("stack \t input \t action");
    for(k=0,j=0;j<c;k++,i++,j++){
        if(a[j]=='i' && a[j+1]=='d'){
            delay(800);
            stk[i]=a[j];
            stk[i+1]=a[j+1];
            stk[i+2]='\0';
            a[j]='';
            a[j+1]='';
            printf("\n$%s\y%s$\t%sid",stk,a,act);
            check();
        }
        else
        {
            delay(800);
            stk[i]=a[j];
            stk[i+1]='\0';
            a[j]='';
            printf("\n$%s\t%s$\t%ssymbols",stk,a,act);
            check();
        }
    }
}
void check(){
    strcpy(ac,"REDUCE TO E");
    for(z=0;z<c;z++)
    if(stk[z]=='i' && stk[z+1]=='d'){
        stk[z]='E';
        stk[z+1]='\0';
        delay(800);
        printf("\n$%s\t%s$\t%s",stk,a,ac);
        j++;
    }
    for()
}
