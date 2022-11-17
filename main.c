#include <stdio.h>

int main()
{
    const int amax = 1000;
    int n[amax], key1, key2, j, i;
    scanf("%d", &j);

    for( i = 0; i < j; i++)
        scanf("%d", &n[i]);
    int k = 0;
    key1 = n[0];
    key2 = 2000000000;
    for(int i = 0; i < j; i++) {
        if (n[i] < key1) {
            key1 = n[i];
            k = i;
        }
    }
    for(int i = 0; i < j; i++){
        if (n[i] < key2 && n[i] >= key1 && k != i){
            key2 = n[i];
        }
    }
        if (n[i] < key2 & n[i] > key1)
            key2 = n[i];

    printf("%d ", key1);
    printf("%d ", key2);
    return 0;
}