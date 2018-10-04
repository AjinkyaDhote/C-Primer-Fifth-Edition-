#include<iostream>
#include<string>

//pointer to an int pointer
void SwapIntPointers( int **ptr1, int **ptr2 )
{
    int *temp = nullptr;
    temp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
}

//Reference to an int pointer
void SwapIntPointers( int *&ptr1, int *&ptr2 )
{
    int *temp;
    temp = ptr2;
    ptr2 = ptr1;
    ptr1 = temp;
}


int main( int argc, char* argv[] )
{
    int a = 8;
    int b = 100;

    int *ptr1 = &a;
    int *ptr2 = &b;
 
    std::cout << *ptr1 << std::endl << *ptr2 << std::endl;

    SwapIntPointers( &ptr1, &ptr2 );

    std::cout << *ptr1 << std::endl << *ptr2 << std::endl;

    SwapIntPointers( ptr1, ptr2 );

    std::cout << *ptr1 << std::endl << *ptr2 << std::endl;

    std::cin.get();
    return 0;
}