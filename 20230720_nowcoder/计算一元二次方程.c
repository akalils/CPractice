//
// Created by 黎圣  on 2023/7/20.
//
#include <stdio.h>
#include "math.h"
int main()
{
     double a = 0.0;
     double b = 0.0;
     double c = 0.0;
     while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
     {
         if (a == 0)
             printf("Not quadratic equation\n");
         else
         {
             double disc = b * b - 4 * a * c;
             if (disc == 0.0)
                 printf("x1=x2=%.2lf\n", (-b) / (2 * a));
             else if (disc > 0.0)
                 printf("x1=%.2lf;x2=%.2lf\n",
                 (-b - sqrt(disc)) / (2 * a),
                 ((-b + sqrt(disc)) / (2 * a)));
             else
             {
                 double real = (-b) / (2 * a);
                 double image = sqrt(-disc) / (2 * a);
                 printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
                 real, image, real, image);
             }
         }
     }
     return 0;
 }
