#include <stdio.h>

int main() {
    int i;
    int j;
    int z;
    for(i = 0; i < 1; i++) {
        for(j = 0; j < 1000; j++) {
            for(z = 0; z < 1000; z++) {
                printf("%d|%d|%d\n", i, j, z);
            }
        }
    }
    return 0;
}
