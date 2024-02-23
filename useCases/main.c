#include <stdio.h>
#include <stdlib.h>

int main()
{
   int weight;
   double bmi, height;

   scanf("%lf %d", &height, &weight);

   bmi = (double)weight/(height*height);

   if (bmi < 18.5)
   {
       printf("%.3f%s", bmi, " Underweight");
   }

   else if (bmi >= 18.5 && bmi <= 24.99999)
   {
       printf("%.3f%s", bmi, " Normal");
   }

   else if (bmi >= 25 && bmi <= 29.99999)
   {
       printf("%.3f%s", bmi, " Overweight");
   }

   else if (bmi >= 30)
   {
       printf("%.3f%s", bmi, " Obese");
   }
   return 0;
}
