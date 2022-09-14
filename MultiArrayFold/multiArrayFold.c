#include <stdio.h>
#include <stdlib.h>

void multiArrayTransform(int **domain);

// este es el problema MAS DIFICIL
// iniciar con los otros

int main(void)
{
  // test_case 1 - tiene 5 filas
  int numero_de_filas = 6;
  int row_1[] = {1, 1};
  int row_2[] = {0};
  int row_3[] = {4,-1,12,0,141};
  int row_4[] = {3,0,0,0};
  int row_5[] = {1,-512};
  int row_6[] = {-1};


  // no se tripeen por el malloc, solo modifiquen el
  // numero_de_filas segun su caso de prueba :)
  int **ptr = malloc(sizeof(int*) * numero_de_filas);

  // para efectos de este ejercicio dejen los test cases hardcodeados.
  ptr[0] = row_1;
  ptr[1] = row_2;
  ptr[2] = row_3;
  ptr[3] = row_4;
  ptr[4] = row_5;
  ptr[5] = row_6;

  multiArrayTransform(ptr);

  // para el test_case 1 imprimirá: 1,0,152,0,-512,-1,
  for(int i = 0; i < numero_de_filas; i++)
    printf("%d ", ptr[i][0]);
}

void multiArrayTransform(int **domain)
{
    // para cada sub arreglo que?
    int current_row = 0;
    while(**(domain+current_row) != -1)
    {
        //int elements_to_sum = domain[current_row][0];
        int elements_to_sum = **(domain+current_row);
        int local_sum = 0;
        for(int i = 1 ; i <= elements_to_sum; i++)
            local_sum += *(*(domain + current_row) + i);
        //domain[current_row][0] = local_sum;
        **(domain+current_row) = local_sum;
        current_row++;
    }
}
