#include "stdio.h"

/*int main() {
    for(char i = 'A'; i <= 'Z'; i+=1) {
        printf("%c ", i);
    }
}*/

/*int main() {
    int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
}*/

/*int main() {
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
}*/
int main() {
    char input = 'y';

    do{
        printf("Apakah anda ingin mengulang proses? (y/t): ");
        scanf(" %c", &input);
    }

    while(input == 'y');

    printf("\n\nPerulangan telah berhenti! terima kasih!");
    second("Helo", 19);
    return 0;

}

void second(char name[20], int age) {
        printf("\n%s %d", name, age);
}
