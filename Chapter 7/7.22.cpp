//#include<string>
//
//struct Person
//{
//    friend std::istream &Read(std::istream &is, Person &person);
//    friend std::ostream &Print(std::ostream &os, const Person &person);
//
//public:
//    Person() = default;
//    Person(std::string &Name, std::string &Address) : m_Name(Name), m_Address(Address) {}
//    Person(std::istream &is);
//
//    inline std::string GetName() const { return m_Name; }
//    inline std::string GetAddress() const { return m_Address; }
//
//    //Both the functions will be const because they don't change the object.
//
//private:
//    std::string m_Name;
//    std::string m_Address;
//};
//
//std::istream &Read(std::istream &is, Person &person)
//{
//    is >> person.m_Name >> person.m_Address;
//    return is;
//}
//
//Person::Person(std::istream &is)
//{
//    Read(is, *this);
//}
//
//std::ostream &Print(std::ostream &os, const Person &person)
//{
//    os << person.m_Name << " " << person.m_Address;
//    return os;
//}
//
//
//int main()
//{
//    return 0;
//}