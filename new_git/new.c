#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int dice1;
  int dice2;
  char c[50];
  srand(time(NULL));
  printf("What is your name?\n> ");
  scanf("%s",c);
  printf("Hello, %s!\n",c);
  dice1 = rand() % 6+1;
  dice2 = rand() % 6+1;
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Total value: %d\n",dice1+dice2);
  if(dice1 + dice2 >= 7)printf("You won\n");
  else printf("You lost\n");
}
