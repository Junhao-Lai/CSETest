#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int ARR_SIZE = 1000;
int main()
{
  //create an array of ARR_SIZE ints
  int* intArray;
  intArray = malloc(sizeof(int)*ARR_SIZE); //ask the memory from memory system and allocate the memory 

  //POPULATE THEM 
  for (int i = 0; i < ARR_SIZE; i++)
    {
      intArray[i] = i;
    }

  //Print one out
  //First, seed the random number generator
  srand(time(NULL));
  int randNum = rand() % ARR_SIZE;
  
  printf("intArray[%d]\n", randNum, intArray[randNum]);
  return 0;
}