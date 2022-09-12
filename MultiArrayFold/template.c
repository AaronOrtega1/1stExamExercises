//PREPEND BEGIN
#include <stdio.h>
#include <stdlib.h>
//PREPEND END

//TEMPLATE BEGIN
void multiArrayTransform(int **domain)
{
}
//TEMPLATE END

//APPEND BEGIN
int main() {
  int count = 0;
  fscanf(stdin, "%d\n", &count);

  int **target = malloc(sizeof(int*) * (count + 1));


  for(int i=0; i < count; i++)
  {
    int localArraySize = 0;
    fscanf(stdin, "%d,", &localArraySize);

    target[i] = malloc(sizeof(int*) * (localArraySize + 1));
    target[i][0] = localArraySize;

    for(int j=1; j < localArraySize + 1; j++)
    {
      fscanf(stdin, "%d,", &target[i][j]);
    }
  }

  target[count] = malloc(sizeof(int));
  target[count][0] = -1;

  multiArrayTransform(target);

  for(int i=0; i <= count; i++)
  {
    printf("%d,", target[i][0]);
  }

  return 0;
}
//APPEND END