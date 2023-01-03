#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 1000
int main()
{
    char ch, string[MAX_LEN], stringSpace[MAX_LEN];
    scanf("%c %s %[^\n]", &ch, &string, &stringSpace);

    printf("%c\n%s\n%s\n", ch, string, stringSpace);

    return 0;
}