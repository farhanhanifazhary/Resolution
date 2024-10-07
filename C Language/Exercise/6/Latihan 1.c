#include "stdio.h"

int main() {
    int array[5] = {8, 9, 5, 10, 12};

    //for(int inputan = 0; inputan < 5; inputan++) {
      //  printf("inputkan angka ke-%d: ", inputan);
        //scanf("\n%d", &array[inputan]);
    //}

    printf("\nData array yang sudah diinputkan adalah\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", array[i]);
    }
}
