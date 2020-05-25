#include <cstdio>
#include "smart_enum.h"

SMART_ENUM(Color, int, 
    RED, 
    GREEN, 
    YELLOW,
    LIME,
    AQUA,
    TEAL,
    FUCHSIA,
    PURPLE,
    MAGENTA,
    GOLD,
    DAFFODIL,
    FLAXEN,
    BUTTER,
    LEMON,
    BLONDE
    )

void f(Color::Value c){
    std::cout << Color::to_string(c) << std::endl;
}

int main(){
    f(Color::RED);
    for(auto c : Color::range){
        std::cout << Color::to_string(c) << std::endl;
    }
}
