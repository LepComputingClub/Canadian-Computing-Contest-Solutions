#include <stdio.h>
#include <stdlib.h>

/* typedef struct athlete { */
/*     int size, num; */
/* } athlete; */

int main(int argc, char *argv[])
{
    int j, a, num;
    int total = 0;
    /* S = 0
     * M = 1
     * L = 2
     * taken = -1
     */
    char size, aSize;

    /* user input */
    scanf("%d", &j);
    scanf("%d", &a);

    int *sizes = malloc(j*sizeof(int));
    /* athlete *requests = malloc(a*sizeof(athlete)); */

    for(int i=0;i<j;++i){
        scanf(" %c", &size);
        switch (size) {
            case 'S':
                sizes[i] = 0;
                break;
            case 'M':
                sizes[i] = 1;
                break;
            case 'L':
                sizes[i] = 2;
                break;
        }
    }
    
    for(int i=0;i<a;++i){
        scanf(" %c %d", &aSize, &num);
        /* scanf(" %c", &aSize); */
        /* scanf("%d", &num); */
        int aSizeInt;
        switch (aSize) {
            case 'S':
                aSizeInt = 0;
                break;
            case 'M':
                aSizeInt = 1;
                break;
            case 'L':
                aSizeInt = 2;
                break;
        }

        if ((num-1 < j) && sizes[num-1] >= aSizeInt) {
            sizes[num-1] = -1;
            ++total;
        }
    }

    printf("%d\n", total);

    free(sizes);
    
    return 0;
}

