#include <stdio.h>

int main(int argc, char const *argv[]) {
    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "r");
        
        if (file == NULL) {
            printf("Cannot open the file: %s\n", argv[i]);
            return -1;
        }

        int chr;

        while ((chr = fgetc(file)) != EOF) {
            putchar(chr);
        }
        
        fclose(file);
    }
   
    return 0;
}