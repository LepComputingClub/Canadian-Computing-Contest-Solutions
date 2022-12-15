/* COpyright 2022 Peter Xiong */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int G, P;
    int total = 0;
    int input;
    scanf("%d", &G);
    scanf("%d", &P);

    /* Although way worse memory-wise, a static array is quicker */
    /* int *gates = calloc(G, sizeof(int)); */
    int gates[100000] = {0};
    for(int i=0;i<P;++i)
    {
        scanf("%d", &input);
        for(int j=input;j>0;--j)
        {
            if(gates[j-1] == 0) {
                gates[j-1] = 1;
                ++total;
                input = -1;
                break;
            }
        }
        if(input!=-1) {
            break;
        }
    }

    printf("%d\n", total);

    return 0;
}

