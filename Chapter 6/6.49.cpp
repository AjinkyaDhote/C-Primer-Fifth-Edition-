//Candidate Functions are all the overloaded functions which match the called function name and whose definition 
//is visible from the scope of the call.

//For example
//Called Function sum(int a, int b)

//Overloaded Functions having the same name are in scope.
//sum()
//sum(int, int)
//sum(double, double)
//sum(double, double y = 0.0)

//All the above four functions are Candidate Functions.

//Viable functions on the other hand will be picked from the candidate functions list but they must also have the same number of parameters
//and each parameter type should match or be convertible to the parameter type of the called function.
//So viable functions from the above list will be sum(int, int), sum(double, double)