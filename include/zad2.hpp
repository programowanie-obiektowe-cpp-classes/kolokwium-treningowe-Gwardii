#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

class Penne:public Makaron
{
public:
    ~Penne(){}
    double ileMaki(unsigned) const;
};

double Penne::ileMaki(unsigned P) const{
    return (double) P;
}

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const std::string& ref){
    if(ref.back() == ref.front()){
        return new Tagliatelle{3.14, 0.42, 0.1};
    }
    return new Penne();
}