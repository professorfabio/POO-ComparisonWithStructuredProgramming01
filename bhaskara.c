#include <stdio.h> 
#include <math.h> 

double calculaX1(int a, int b, int c) {
   double delta = (b*b)-4*(a)*(c); 
   return -b + sqrt(delta) / 2*a; 
} 

double calculaX2(int a, int b, int c) { 
   double delta = (b*b)-4*(a)*(c); 
   return -b - sqrt(delta) / 2*a; 
}
 
int main(int argc, char** argv)  { 
   int a, b, c; 
   printf("Digite a, b e c ... \n"); 
   scanf("%d",&a); 
   scanf("%d",&b);
   scanf("%d",&c); 
   printf(“X1 = %f", calculaX1(a, b, c)); 
   printf(“X2 = %f", calculaX2(a, b, c));
   return 0; 
} 
