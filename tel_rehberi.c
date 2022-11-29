#include<stdio.h>

struct telguide{
char name[20];
char city[20];
int tell;
}tel[5];

int main(){
      FILE *file;
      file=fopen("rehber.txt","w");
 for(int i=1;i<=5;i++){
 printf("%d)\nName: ",i);
 scanf("%s",&tel[i].name);
 printf("City: ");
 scanf("%s",&tel[i].city);
  printf("Tel no: ");
 scanf("%d",&tel[i].tell);
 }
 fprintf(file,"\n\t###GUIDE###\n\n");
 for(int i=1;i<=5;i++){
    fprintf(file,"%d)Name: %s\t\tCity: %s\t\tTel number: %d\n",i,tel[i].name,tel[i].city,tel[i].tell);
 }
 fclose(file);
}
