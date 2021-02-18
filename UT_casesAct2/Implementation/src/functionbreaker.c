#include"functionbreaker.h"

char* Function_breaker(char arr[100],char *c)
{
    //char array[100];
    int i,dollar=0,semi=0,j=0,l;
    for(l=0;arr[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if(arr[i]=='$')
      {
        dollar=i;
      }
    
      if(arr[i] == ';')
      {
        semi = i;
      }
    }

    for(i=dollar;i<=semi;i++)
    {
       
        c[j] = arr[i];
       
        j++;
    }
    //printf("%s",array);
    return c;
}
/*
int main()
{
char arr[100];



return 0;
}
*/