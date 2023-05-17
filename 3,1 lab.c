#include <stdio.h>
#include <math.h>
int main(){
int s, t ;
  float w;
printf(" vedite cili cisla s:");
  scanf("%d",&s );
  printf(" vedite cili cisla t:");
  scanf("%d",&t );
  if (s<7 ){
    w=2*s*pow(t,2)+pow(s,2)*t+1;
    printf("W=%g",w);}
if(s==7){
  w= sqrt(10*s/t);
  printf("W=%g",w);}
  if(s>7){ 
    w=pow(s,2)+2*t;
1.	printf("W=%g",w);}
};
