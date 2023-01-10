#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template<typename It>
void sortujTagliatelle(It it_begin, It it_end){
    std::sort(it_begin, it_end, [](const Tagliatelle& t1, const Tagliatelle& t2) {
        return t1.ileMaki(1) > t2.ileMaki(1);
    });
}
