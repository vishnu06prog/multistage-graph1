#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];

    // Stage 1: Write
    fp = fopen("data.txt", "w");
    printf("Enter your name: ");
    scanf("%s", name);
    fprintf(fp, "%s", name);
    fclose(fp);

    // Stage 2: Read
    fp = fopen("data.txt", "r");
    fscanf(fp, "%s", name);
    printf("Name from file: %s\n", name);
    fclose(fp);

    return 0;
}