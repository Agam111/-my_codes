#include<stdio.h>
void namaste();
void bonjour();
int main (){
printf("rnter i for indian and f for french\n");
char c;
scanf("%d",&c);
if(c== 'i'){
namaste();
}
else{
bonjour();
}

}
void namaste (){
printf("namaste\n");

}
void bonjour(){
printf("bonjour");

}
