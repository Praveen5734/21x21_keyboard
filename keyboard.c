#include <stdio.h>

void setRow(int row, int state) {
    if (state == 1)
        printf("Row %d is HIGH\n", row);
    else
        printf("Row %d is LOW\n", row);
}

int readCol(int col) {
    int pressRow = 5;
    int pressCol = 10;
    if (col == pressCol)
        return 1;
    else
        return 0;
}

int main() {
    int row, col;
    while (1) {
        for (row = 0; row < 21; row++) {
            for (int r = 0; r < 21; r++) {
                if (r == row)
                    setRow(r, 1);
                else
                    setRow(r, 0);
            }

            for (col = 0; col < 21; col++) {
                if (readCol(col) == 1) {
                    int keycode = row * 21 + col;
                    printf("Key pressed at Row %d, Column %d, Keycode = %d\n", row, col, keycode);
                }
            }
        }
        break;
    }
}
