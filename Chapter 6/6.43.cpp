//inline bool eq(const BigInt&, const BigInt&) {..}
//This function goes in a header file as it is an inline function and does really simple tasks.
//Inline functions can be defined multiple times in a program and the compiler will need its
//definition (apart from declaration) to expand the code. That is the reason it should be defined in a header file.

//void putValues(int *arr, int size);
//This function will be defined in a .cpp file as it does a more complex task of filling in values in an array.
//Functions should only be inlined it they are simple or have very few lines of code.
//Even if the function is defined as inlined compiler takes the final call whether to inline it or not.



//6.44

#include<string>
#include<iostream>

#define NDEBUG

inline bool isShorter( const std::string &s1, const std::string &s2 ) { return s1.size() < s2.size(); }

int main()
{
    std::cout << __func__;
    return 0;
}


//6.46
//isShorter cannot be defined as a constexpr function as it does not return literals.
//A constexpr function must have a literal type for return type and parameter type. It should also only have one return statement.
