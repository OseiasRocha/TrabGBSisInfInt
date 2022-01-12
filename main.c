#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <time.h>


uint32_t numberGenerator(uint32_t max);

typedef cidade{
    uint32_t x;
    uint32_t y;
}cidade;

int main(int argc, char **argv){

    if(argc < 2){
        printf("Usage %s num_cities\n", argv[0]);
        return EXIT_FAILURE;
    }
    srand(time(NULL));

    const uint32_t num_cidades = atoi(argv[1]);


    


    return EXIT_SUCCESS;
}

uint32_t numberGenerator(uint32_t max){
    return  (rand() % max) + 1;
}