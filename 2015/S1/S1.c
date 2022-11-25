#include <stdio.h>

int main()
{
    int argc;
    int curValue;
    int total = 0;
    int ptr = 0;
    scanf("%d", &argc);
    //int* vals = malloc(argc * sizeof(int));
    int vals[100000];
    for(int i=0;i<argc;++i) {
        scanf("%d", &curValue);
        if(curValue == 0) {
            vals[ptr-1] = 0;
            --ptr;
        }
        
        else {
            vals[ptr] = curValue;
            ++ptr;
        }
    }
    for(int i=0;i<argc;++i){
        total = total + vals[i];
    }
    printf("%d\n", total);

    return 0;
}
