#include <stdio.h>
#include <stdlib.h>
#include <omp.h>


int main(int argc, char* argv[]) {
    #pragma omp parallel for
    for(int i=0;i<10;i++){
        printf("%d\n",i);
    }


    return 0;
}



