//#include<iostream>
//#include<string>
//
//struct Sales_Data
//{
//    std::string bookNo;
//    unsigned units_sold = 0;
//    double revenue = 0.0;
//    std::string isbn() const { return bookNo; }
//    Sales_Data& Combine(const Sales_Data &lhs);
//
//    Sales_Data() = default;
//    Sales_Data(std::istream&);
//    Sales_Data(const std::string isbn) : bookNo(isbn) {}
//    Sales_Data(const std::string isbn, unsigned int booksSold, double Price) :
//        bookNo(isbn), units_sold(booksSold), revenue(Price * booksSold) {}
//};
//
//
//Sales_Data& Sales_Data::Combine(const Sales_Data &rhs)
//{
//    units_sold += rhs.units_sold;
//    revenue += rhs.revenue;
//    return *this;
//}
//
//std::istream &Read(std::istream &is, Sales_Data &item) // Always pass a stream by reference
//{
//    double price = 0;
//    is >> item.bookNo >> item.units_sold >> price;
//    item.revenue = item.units_sold * price;
//    return is;
//}
//
//std::ostream &Print(std::ostream &os, const Sales_Data &item) // Always pass a stream by reference
//{
//    os << item.bookNo << " " << item.units_sold << " " <<
//        item.revenue;
//    return os;
//}
//
//Sales_Data Add(Sales_Data &lhs, Sales_Data &rhs)
//{
//    Sales_Data sum = lhs; //Default Copy Constructor
//    sum.Combine(rhs);
//    return sum;
//}
//
//Sales_Data::Sales_Data(std::istream& is)
//{
//    Read(is, *this);
//}
//
//
//int main()
//{
//        Sales_Data total(std::cin);
//        double price = 0;
//        if ( std::cin )
//        {
//            Sales_Data trans(std::cin);
//            while ( std::cin )
//            {
//                if ( total.isbn() == trans.isbn() )
//                {
//                    total.Combine( trans );
//                }
//                else
//                {
//                    Print(std::cout, trans);
//                    total = trans;
//                }
//            }
//            Print(std::cout, total);
//        }
//        else
//        {
//            std::cerr << "No Data?!" << std::endl;
//        }
//
//    return 0;
//}
