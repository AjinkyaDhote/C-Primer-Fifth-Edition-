//#include<vector>
//#include<string>
//
//
//double calc( double );
//
//int count( const std::string &, char );
//
//int sum( std::vector<int>::iterator &, const std::vector<int>::iterator &, int );
//
//
//int main()
//{
//    std::vector<int> vec( 10 );
//
//
//    calc( 23.4, 55.1 ); //Invalid. Takes only 1 parameter.
//
//    count( "abcda", 'a' ); //Valid
//    
//    calc( 66 ); //Valid. 66 is converted to double. Upcasting
//
//    sum( vec.begin(), vec.end(), 3.8 );  //Valid. 3.8 is truncated to int. Downcasting (Possible loss of data)
//
//    return 0;
//}