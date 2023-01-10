#include "zad1.hpp"

#include <vector>
#include <algorithm>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& makarony){
    double M = 0;
    unsigned P = 1;
    for(auto makaron_iterator = makarony.crbegin(); makaron_iterator != makarony.crend(); makaron_iterator++){
        M = M + makaron_iterator -> ileMaki(P++);
    }
    if( M > 100.)
        throw 2;
    else if(M > 50)
        throw 3.;
    return M;
}
