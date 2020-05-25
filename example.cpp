#include "smart_enum.h"
#include <cstdio>


SMART_ENUM(Color, int, RED, GREEN, YELLOW)

void f(Color::Value c){
    puts(Color::to_string(c));
}

int main(){
    f(Color::RED);
    for(auto c : Color::range)
        puts(Color::to_string(c));
}

