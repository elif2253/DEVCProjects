#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define WIDTH 90
#define HEIGHT 40

void ekranCiz(int x, int y) {
	int i, j;
    system("cls");
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            if (i == y && j == x) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int x = WIDTH / 2;
    int y = HEIGHT / 2;

    ekranCiz(x, y);

    while (1) {
        if (_kbhit()) {
            int tus = _getch();
            if (tus == 27) {
                break;
            }

            if (tus == 224) {
                tus = _getch();

                if (tus == 72 && y > 0) {
                    y--;
                } else if (tus == 80 && y < HEIGHT - 1) {
                    y++;
                } else if (tus == 75 && x > 0) {
                    x--;
                } else if (tus == 77 && x < WIDTH - 1) {
                    x++;
                }
            }

            ekranCiz(x, y);
        }
    }

    return 0;
}


