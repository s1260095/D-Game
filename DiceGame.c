#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int sum,num1,num2;
  char name[256];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s\n",name);
  printf("Rolling the dice\n");
  srand(time(NULL));
  num1=rand()%6+1;
  num2=rand()%6+1;
  sum=num1+num2;
  printf("Die 1:%d\n",num1);
  printf("Die 2:%d\n",num2);
  printf("Total value: %d\n",sum);
  return 0;
}
