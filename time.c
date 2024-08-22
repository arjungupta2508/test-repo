#include <stdio.h>

int main(void)
{
 int h= 0, m=0 , s = 0;
 printf("enter the number of seconds :");
 scanf("%d", &s);

 h = s/3600;
 s = s%3600;
 m = s/60;
 s = s%60;
 printf("hours : %d, mins : %d, secs : %d" ,h,m,s);
 return 0;


}
