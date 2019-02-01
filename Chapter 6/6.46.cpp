//6.46
//isShorter cannot be defined as a constexpr function as it does not return literals.
//A constexpr function must have a literal type for return type and parameter type. It should also only have one return statement.