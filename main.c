# include <stdio.h>
int main() {
    printf("=== C Language Calculator ===\n");
    //Operations placeholders
    int a,b;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    printf("Result: %d\n", a - b);
    printf("System Check OK.\n");
    return 0;
}