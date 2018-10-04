#include<iostream>
#include<string>


//Exception will be thrown while reading in if this steps are not done.

//Provide two command line arguments.
//Go To Solution Properties->Debugging->CommandLineArguments
//Provide two strings and run the program.

int main(int argc, char**argv)
{
    std::string s1 = argv[ 1 ];
    std::string s2 = argv[ 2 ];

    std::cout << s1 + s2;

    std::cin.get();
    return 0;

}