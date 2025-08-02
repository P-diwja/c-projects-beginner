// Guessing the number game using c programming.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=(rand()%100) + 1;
    //generates a random no between 1 to 100.
    //printf("the no is %d\n",number);
    //keep running te loop tillthe no is guessed.
    
     printf(" !!! Guess the number !!!\n(between 1 to 100)\n");
    do
    {
     scanf("%d",&guess);
          if (guess>number){
            printf("LOWER NUMBER PLEASE!!");
          }
          else if (guess<number)
          {
            printf("HIGHER NUMBER PLEASE!!");
          }
          else{
             printf("YOU GUESSED IT IN %d ATTEMPTS\n",nguesses);
          }
          nguesses++;
    }while(guess!=number);
return 0;

}
