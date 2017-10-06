#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
     char str[100];
     int l,i,j,a=0,d=0,e=0,f=0,h=1;
     char type[100];
     int flag1=1,flag2=1;
     int addr[50];
     int k = 2001;
     printf("Please enter the desire string\n");
     gets(str);
     l=strlen(str);
   // printf("%s",str);
     for(i=0;i<l;i++){
        if (isalpha(str[i])){
            type[i]='I';
            addr[i]= k++;
            a++;
        }
        else if(isdigit(str[i])){
            type[i]='C';
            addr[i]=k++;
            d++;
            for(z=i;z<l;z++){
            }
        }
        else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%'){
          type[i]='O';
          addr[i]=k++;
          e++;
        }
        else{
            type[i]='S';
            addr[i]=k++;
            f++;
        }
     }
     printf("No. of identifiers(I) = %d\nNo. of constant(C)=%d\nNo. of Operator(O)=%d\nNo. of Special Character(S)=%d\n",a,d,e,f);
     printf("Symbol\t ID\t Type\t Address\n");

     for(j=0;j<l;j++){
        printf("%c\t <id,%d>\t %c\t %d\n",str[j],h++,type[j],addr[j]);

     }


return 0;
}
