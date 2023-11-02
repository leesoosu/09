#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

int main(int argc, char *argv[])
{
  int i;
  int grade[N_STUDENT];
  
  for(i=0; i<N_STUDENT; i++)
    grade[i] = (i+1) *10;
  
  for(i=0; i<N_STUDENT; i++)
    printf("grade[%i] = %i\n", i,grade[i]);
    
  system("PAUSE");	
  return 0;
}
