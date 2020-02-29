#include<stdio.h>
#include<string.h>
void sreplace(char x[],char o,char n){
int i,l=strlen(x);
for(i=0;i<l;i++){
if(x[i]==o)
x[i]=n;
}
printf("\nthe new string is:%s",x);
}
