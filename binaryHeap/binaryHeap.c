#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>



typedef struct binaryHeap
{
    int *heap;
    int size;
    int length;

}BinaryHeap;


int isEmpty() {}

BinaryHeap *binaryHeap(int n)
{

    BinaryHeap *top = (BinaryHeap *)malloc(sizeof(BinaryHeap));
    assert(top);
       
    top->size = n;
    top->heap = (int *)malloc(top->size * sizeof(int));
    top->length = 0;

    return x;    
}



int main()
{
    int *heap;
    int size, length;

    printf("text format");
    
    return 0;
}