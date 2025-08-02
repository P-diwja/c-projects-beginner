#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// swg is snake water gun function for the game.
int swg(char you, char comp)
{
   //  return 1 if you win return -1 if you lose and 0 if draw
   if (you == comp)
   {
      // if comp and you choose same the game will be draw.
      return 0;
   }
   if (you == 's' && comp == 'w')
   {
      return 1;
      /* code */
   }
   else if (you == 'w' && comp == 's')
   {

      return -1;
      /* code */
   }
   if (you == 'w' && comp == 's')
   {
      return -1;
      /* code */
   }
   else if (you == 's' && comp == 'w')
   {
      /* code */
      return 1;
   }
   if (you == 'g' && comp == 's')

   {
      return 1; /* code */
   }
   else if (you == 's' && comp == 'g')
   {
      return -1;
   }
   /* you  choose   comp choose   
      snake         water         you win
      water         snake         you lose
      snake         gun           you lose
      gun           snake         you win
      water         gun           you win
      gun           water         you lose*/       
}
int main()
{
   int number;
   char you, comp;
   srand(time(0));
   number = (rand() % 100) + 1;
   if (number < 33)
   {
      comp = 's';
      /* code */
   }
   else if (number > 33 && number < 66)
   {
      comp = 'w';
      /* code */
   }
   else
   {
      comp = 'g';
   }
   printf("Enter 's' for snake.\n ");
   printf("Enter 'w' for water.\n ");
   printf("Enter 'g' for gun.\n ");
   printf("Enter your choice here:\n ");
   scanf("%c", &you);
   int result = swg(you, comp);
   printf("You choose %c and Computer choose %c\n", you, comp);
   if (result == 0)
   {
      /* code */
      printf("GAME DRAW!!\n");
   }
   else if (result == 1)
   {
      printf("You Won!!\n");
      /* code */
   }
   else
   {
      printf("You Lose!!\n");
   }

   return 0;
}
