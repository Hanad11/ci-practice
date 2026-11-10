#include <stdio.h>

int add(int a, int b) {
    return a - b;
}

int main(void) {
    int result = add(2, 3);
    printf("add(2, 3) = %d\n", result);

    if (result != 5) {
        printf("TEST FAILED\n");
        return 1;   /* non-zero exit code = the CI step fails */
    }

    printf("TEST PASSED\n");
    return 0;       /* zero exit code = the CI step passes */
}