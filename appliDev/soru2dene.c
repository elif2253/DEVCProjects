#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  char matris[24][120];
  srand(time(NULL));
  int count = 2880;
  int i, j, k;

  // Matrisi "_" karakteri ile dolduruyoruz
  for (j = 0; j < 24; j++) {
    for (i = 0; i < 120; i++) {
      matris[j][i] = '_';
    }
  }

  // eruYazisi matrisi
  int eruYazisi[][2] = {
      {10, 20},  {10, 21},  {10, 22},  {10, 23},  {10, 24},  {10, 27},
      {10, 28},  {10, 29},  {10, 30},  {10, 35},  {10, 36},  {10, 37},
      {10, 38},  {10, 41},  {10, 44},  {10, 47},  {10, 51},  {10, 55},
      {10, 56},  {10, 57},  {10, 58},  {10, 59},  {10, 63},  {10, 64},
      {10, 65},  {10, 66},  {10, 67},  {11, 20},  {11, 27},  {11, 31},
      {11, 35},  {11, 48},  {11, 50},  {11, 55},  {11, 63},  {12, 20},
      {12, 21},  {12, 22},  {12, 23},  {12, 24},  {12, 27},  {12, 28},
      {12, 29},  {12, 30},  {12, 35},  {12, 43},  {12, 49},  {12, 55},
      {12, 56},  {12, 57},  {12, 58},  {12, 59},  {12, 63},  {12, 64},
      {12, 65},  {12, 66},  {12, 67},  {13, 20},  {13, 27},  {13, 30},
      {13, 35},  {13, 43},  {13, 49},  {13, 55},  {13, 67},  {14, 20},
      {14, 21},  {14, 22},  {14, 23},  {14, 24},  {14, 27},  {14, 31},
      {14, 36},  {14, 37},  {14, 38},  {14, 39},  {14, 43},  {14, 49},
      {14, 55},  {14, 56},  {14, 57},  {14, 58},  {14, 59},  {14, 63},
      {14, 64},  {14, 65},  {14, 66},  {14, 67},  {17, 20},  {17, 24},
      {17, 28},  {17, 34},  {17, 37},  {17, 38},  {17, 39},  {17, 40},
      {17, 41},  {17, 44},  {17, 52},  {17, 56},  {17, 57},  {17, 58},
      {17, 59},  {17, 60},  {17, 64},  {17, 65},  {17, 66},  {17, 67},
      {17, 72},  {17, 73},  {17, 74},  {17, 75},  {17, 76},  {17, 79},
      {17, 80},  {17, 81},  {17, 82},  {17, 83},  {17, 85},  {17, 86},
      {17, 87},  {17, 88},  {17, 89},  {17, 93},  {17, 94},  {17, 95},
      {17, 96},  {17, 97},  {17, 100}, {17, 101}, {17, 102}, {17, 103},
      {17, 104}, {17, 107}, {17, 108}, {17, 109}, {17, 110}, {17, 111},
      {18, 20},  {18, 24},  {18, 28},  {18, 30},  {18, 34},  {18, 39},
      {18, 45},  {18, 51},  {18, 56},  {18, 64},  {18, 68},  {18, 72},
      {18, 81},  {18, 88},  {18, 94},  {18, 101}, {18, 110}, {19, 20},
      {19, 24},  {19, 28},  {19, 31},  {19, 34},  {19, 39},  {19, 46},
      {19, 50},  {19, 56},  {19, 57},  {19, 58},  {19, 59},  {19, 60},
      {19, 64},  {19, 65},  {19, 66},  {19, 67},  {19, 72},  {19, 73},
      {19, 74},  {19, 75},  {19, 76},  {19, 80},  {19, 87},  {19, 93},
      {19, 94},  {19, 95},  {19, 96},  {19, 97},  {19, 100}, {19, 101},
      {19, 102}, {19, 103}, {19, 104}, {20, 20},  {20, 24},  {20, 28},
      {20, 32},  {20, 33},  {20, 39},  {20, 47},  {20, 49},  {20, 56},
      {20, 64},  {20, 68},  {20, 76},  {20, 80},  {20, 87},  {20, 93},
      {20, 104}, {20, 109}, {21, 21},  {21, 22},  {21, 23},  {21, 28},
      {21, 34},  {21, 37},  {21, 38},  {21, 39},  {21, 40},  {21, 41},
      {21, 48},  {21, 56},  {21, 57},  {21, 58},  {21, 59},  {21, 60},
      {21, 64},  {21, 69},  {21, 72},  {21, 73},  {21, 74},  {21, 75},
      {21, 76},  {21, 78},  {21, 79},  {21, 80},  {21, 81},  {21, 82},
      {21, 87},  {21, 93},  {21, 94},  {21, 95},  {21, 96},  {21, 97},
      {21, 100}, {21, 101}, {21, 102}, {21, 103}, {21, 104}, {21, 107},
      {21, 108}, {21, 109}, {21, 110}, {21, 111}};

  // "_" karakterlerini " " ile de�i�tirme
  while (count > 0) {
    int rows = rand() % 24;
    int columns = rand() % 120;

    if (matris[rows][columns] == '_') {
      matris[rows][columns] = ' ';
      count--;

      system("cls");
      for (j = 0; j < 24; j++) {
        for (i = 0; i < 120; i++) {
          printf("%c", matris[j][i]);
        }
        printf("\n");
      }
    }
  }

  // Kullan�c�dan herhangi bir tu�a basmas�n� isteme
  printf("\nDevam etmek i�in herhangi bir tu�a bas�n...");
  getchar(); // Kullan�c�n�n bir tu�a basmas�n� bekler

  // eruYazisi matrisindeki konumlar� "*" ile doldurma
  int numOfPoints = sizeof(eruYazisi) / sizeof(eruYazisi[0]);
  for (k = 0; k < numOfPoints; k++) {
    int row = eruYazisi[k][0];
    int col = eruYazisi[k][1];
    matris[row][col] = '*';
  }

  // Y�ld�zl� deseni ekrana yazd�rma
  system("cls");
  for (j = 0; j < 24; j++) {
    for (i = 0; i < 120; i++) {
      printf("%c", matris[j][i]);
    }
    printf("\n");
  }

  return 0;
}
