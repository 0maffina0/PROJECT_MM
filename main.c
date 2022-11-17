#include <stdio.h>

int main()
{
    int n[36];
    int i, j, key;
    scanf("%d", &j);

    for(i = 0; i < j; i++)
        scanf("%d", &n[i]);

    key = n[j - 1];
    for (int i = j; i > 0; i--)
        n[i] = n[i - 1];
    n[0] = key;

    for(i = 0; i < j; i++)
        printf("%d ", n[i]);
    return 0;
}