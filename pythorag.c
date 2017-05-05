#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
  if (argc!=3){
    printf("Usage: ./pythorag <val1> <val2>\n");
    return 1;
  }
  printf("%f\n",sqrt((strtol(argv[1],NULL,10)*strtol(argv[1],NULL,10))+(strtol(argv[2],NULL,10)*strtol(argv[2],NULL,10))));
}
