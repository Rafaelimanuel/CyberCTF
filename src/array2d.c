#include <stdio.h>

//Raffi Anggi Rachman Budianto
//2410511104

int main() {
    int matriks[2][3] = {{6, 7, 8}, {8, 7, 6}};
    
    printf("Hasil:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}