#include<string>

struct Person
{
    std::string Name;
    std::string Address;

    inline std::string GetName() const { return Name; }   
    inline std::string GetAddress() const { return Address; }   

    //Both the functions will be const because they don't change the object.
};

std::istream &Read(std::istream &is, Person &person)
{
    is >> person.Name >> person.Address;
    return is;
}

std::ostream &Print(std::ostream &os, const Person &person)
{
    os << person.Name << " " << person.Address;
    return os;
}


int main()
{
    return 0;
}