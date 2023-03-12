#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// This is a number guessing game made by sukrishna Maity
int main(){
   printf("Welcome to my game this game is made by  Sukrishna Maity :) \n");
  printf("\n");
    int number, guess,nguess=0;
    srand (time(0));
    number=rand()%100;
    do
    {
        printf("guess the number betweenn 1 to 100\n ");
        scanf("%d",& guess);
        if(guess>number) {
            printf("enter a lower number please\n");
        }
        else if (guess<number) {
            printf("higher number please\n");
        }
        else {
            printf("congratulations you guess the correct number in %d attempt \n",nguess);
        }nguess++;
         
        }while( guess!=number);
        return 0;
    }