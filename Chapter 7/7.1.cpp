//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Sales_Data
//{
//    std::string bookNo;
//    unsigned units_sold = 0;
//    double revenue = 0.0;
//    std::string isbn() const { return bookNo; }
//    Sales_Data& Combine(const Sales_Data &lhs );
//};
//
//
//Sales_Data& Sales_Data::Combine( const Sales_Data &rhs )
//{
//    units_sold += rhs.units_sold;
//    revenue += rhs.revenue;
//    return *this;
//}
//
//
//
//int main()
//{
//    Sales_Data total;
//    double price = 0;
//    if ( std::cin >> total.bookNo >> total.units_sold >> price )
//    {
//        total.revenue = total.units_sold * price;
//        Sales_Data trans;
//        while ( cin >> trans.bookNo >> trans.units_sold >> price)
//        {
//            trans.revenue = trans.units_sold * price;
//            if (total.isbn() == trans.isbn())
//            {
//                total.Combine( trans );
//            }
//            else
//            {
//                cout << trans.bookNo << trans.units_sold << trans.revenue;
//                total = trans;
//            }
//        }
//        cout << total.isbn() << total.units_sold << total.revenue;
//    }
//    else
//    {
//        std::cerr << "No Data?!" << std::endl;
//    }
//
//    
//    return 0;
//}
