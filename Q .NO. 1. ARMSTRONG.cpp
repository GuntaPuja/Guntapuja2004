//  Write a program to create a  function such that it will validate whether  a number is the armstrong or not.
# include <stdio.h>
int armstrong ( int num)
{
int temp , a,b ;
temp = num ;
while ( temp!=0)
{
a= temp % 10; 
b += a * a *a ;
temp= 10;
}
if ( num == b)
return 0;
else 
return 1;
}
int main( )
intnum 
printf( " Enter Number") ;
 scanf( "%d ", & num);
 if (armstrong (num) ==0)
 printf("%d is armstrong ", num);
 else printf ("%d is not armstrong ", num);
 return 0;
}
 


