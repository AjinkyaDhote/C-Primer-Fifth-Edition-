#include <iostream>
#include <vector>

void PrintVector(const std::vector<int>::iterator begin,const std::vector<int>::iterator end )
{
    if (begin == end)
    {
        return;
    }

#ifndef NDEBUG
    std::cerr << __func__ << std::endl;
#endif


    std::cout << "Value : " << *begin << std::endl;
    PrintVector( begin + 1, end );

}


int main()
{
    std::vector<int> vec = { 0,1,2,3,4,5,6,7,8,9 };
    PrintVector( vec.begin(), vec.end() );

    std::getchar();
    return 0;
}

