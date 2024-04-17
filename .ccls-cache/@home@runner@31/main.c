#include <stdio.h>

  #include <stdio.h>

  int main() {
      int rows, cols;

      printf("Podaj liczbę wierszy: ");
      scanf("%d", &rows);
      printf("Podaj liczbę kolumn: ");
      scanf("%d", &cols);

      // Pętla zagnieżdżona do wydrukowania znaków
      for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
              printf("* "); // Możesz zmienić ten znak na dowolny inny
          }
          printf("\n"); // Przejście do nowego wiersza po zakończeniu każdego wiersza
      }

      return 0;
  }