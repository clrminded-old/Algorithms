// This is a file with all the information and notes that I have collected on arrays.

// preprocessor definitions
#include <iostream>
#include <vector>

// class and function prototype declarations can be arranged above the main()
int add(int i, int j);
void printArray(int A[], int n);

int main()
{
    // declare and initialize an array of integers
    int array1[] = {1, 2, 3, 4, 5};

    // declare an array of integers
    int array2[5];

    printArray(array1, 5);

    std::cout << add(5, 10) << " will print out 15." << std::endl;

    // pointers
    int x = 0;
    int *pointerToX = &x;
    x++;
    std::cout << *pointerToX << std::endl;

    return 0;
}

// Then below the main() we can implement the prototypes above.
// These can also be seperated out into their own files, headers go
// into .h files and implementations go into .cpp files.
int add(int i, int j)
{
    return i + j;
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;
}

/*
 * One of the first things to remember about arrays are that they are
 * contiguous blocks of memory. When creating arrays there are a couple
 * variables that we need to keep track of.
 * 1. The length of the array, which is the actual number of elements in
 *    the array that exist at any time of point in the array.
 * 2. The size of the array, which is the total capacity number of
 *    elements that the array holds. This is the number that the compiler
 *    needs to know before compile time.
 * When declaring an array and not initializing it, the compiler will
 * fill the array up with garbage values.
 */
 
 