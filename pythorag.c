#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
  printf("%f\n",sqrt((strtol(argv[1],NULL,10)*strtol(argv[1],NULL,10))+(strtol(argv[2],NULL,10)*strtol(argv[2],NULL,10))));
}
