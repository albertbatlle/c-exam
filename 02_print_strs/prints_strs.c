#include <unistd.h>
#include <string.h>

void print_str(char *str) {
    int len = strlen(str);
    if (len % 2 != 0) {
        for (int i = 0; str[i] != '\0'; i++) {
            write(1, &str[i], 1);
        }
    } else {
        for (int i = len - 1; i >= 0; i--) {
            write(1, &str[i], 1);
        }
    }
}

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        print_str(argv[i]);
        write(1, "\n", 1);
    }
    return 0;
}
