#include <stdio.h>
#include <stdlib.h>

void to_Upper_case(char *str) {
 int i = 0;
    while (str[i] != 0) {
        if (str[i]  >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
            i++;

    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Debe proporcionar una palabra como argumento.\n");
        return 1;
    }

    to_Upper_case(argv[1]);
    printf("%s\n", argv[1]);

    return 0;
}
