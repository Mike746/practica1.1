/* practica 1.1
nombre:miguel angel rodriguez ramirez grupo 1AV6*/
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(void){

printf("1.-suma \n");
printf("2.-resta \n");
printf("introduce 1 para la suma");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primer cantidad");
scanf("%d",&a);
printf("introduce la segunda cantidad");
scanf ("%d",&b);
int c;
if (opt==1){
    c=a+b;
}
else {
    c=a-b;

}
printf("el resultado es %d", c);
       }
