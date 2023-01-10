#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron
{
private:
    /* data */
public:
    virtual ~Makaron() = default;
    virtual double ileMaki(unsigned) const = 0;
    static Makaron* gotujMakaron(const std::string&);
};

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle:public Makaron
{
private:
    double L;
    double W;
    double R;
    static const double C;
public:
    Tagliatelle();
    Tagliatelle(double, double, double);
    double ileMaki(unsigned) const;
};

Tagliatelle::Tagliatelle():L{0.5}, W{0.5}, R{0.5}{}
Tagliatelle::Tagliatelle(double l, double w, double r):L{l}, W{w}, R{r} {}

double Tagliatelle::ileMaki(unsigned P) const{
    return P*L*W*(1.-R)*C;
}
