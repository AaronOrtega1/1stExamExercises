#include <stdio.h>

void almostMap(int *domain, int count);
void show_array(int *array, int count);

int main(void)
{
  // pueden revisar archivos para mas test_cases :)
  int target_1[] = {1,2,3,4,5,6};
  almostMap(target_1, 6);

  // esperamos que imprima 1 4 9 16 25 36
  show_array(target_1, 6);
}

void almostMap(int *domain, int count)
{
}

void show_array(int *array, int count)
{
  for(int i = 0; i < count; i++)
    printf("%d ", array[i]);
}