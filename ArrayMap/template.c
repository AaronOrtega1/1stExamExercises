//PREPEND BEGIN
#include <stdio.h>
#include <stdlib.h>
//PREPEND END

//TEMPLATE BEGIN
void almostMap(int *domain, int count)
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
  
  almostMap(target, count);
  for(int i=0; i < count; i++)
    printf("%d,",target[i]);
  free(target);
  return 0;
}
//APPEND END