//If we make a parameter a plain reference then it is possible the caller of the
//function would think that the argument might be changed in the function. Its always
//safe to make a reference to a const to avoid accidentally changing the data.