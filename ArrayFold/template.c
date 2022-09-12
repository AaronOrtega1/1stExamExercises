//PREPEND BEGIN
#include <stdio.h>
#include <stdlib.h>
//PREPEND END

//TEMPLATE BEGIN
int almostFold(int *domain, int count)
{
}
//TEMPLATE END

//APPEND BEGIN
int main() {
  int *target = malloc(sizeof(int) * 1000000);
  int count = 0;
  fscanf(stdin, "%d\n", &count);
  for(int i=0; i < count; i++)
    fscanf(stdin, "%d,", target+i);
  
  printf("%d", almostFold(target, count));
  free(target);
  return 0;
}
//APPEND END