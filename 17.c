#include <stdio.h>
#include <stdlib.h>

void to_lower_case(char *str) {
   int i = 0;
    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Debe proporcionar una palabra como argumento.\n");
        return 0;
    }

    to_lower_case(argv[1]);
    printf("%s\n", argv[1]);

    return 0;
}
