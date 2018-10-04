#include<iostream>
#include<string>
#include<initializer_list>

void Sum( std::initializer_list<int> numbers )
{
    int sum = 0;
    
    for ( const auto &elem : numbers )
    {
        sum += elem;
    }

    std::cout << sum << std::endl;
}

int main( int argc, char**argv )
{
    std::initializer_list<int> list1{ 1, 2, 3 };
    Sum( list1 );

    std::initializer_list<int> list2{ 45, -10 ,90 };
    Sum( list2 );

    std::initializer_list<int> list3{ 100, 89 , 2 };
    Sum( list3 );

    std::cin.get();
    return 0;

}