#include <iostream>

typedef std::string Type; //Type string.
Type initVal(); //Type string is used for return val.

class Exercise
{
public:
    typedef double Type; //Type double
    Type setVal(Type); //Type double for both return type and parameter
    Type initVal(); //Type double for return type

private:
    int val; //int val
};

Type Exercise::setVal(Type param) //String Type is used for return value and double for parameter.
{
    val = param + initVal(); //Member function initVal is identified here. param is double as Type is double
    return val;
}

//To fix these errors class name should preced the return type of SetVal Function - 

Exercise::Type Exercise::setVal(Type param)
{
    val = param + initVal();
    return val;
}