Small dependency less (not even the c or c++ standard library) header containing a macro for defining
stronlgy typed enums which exhibit two reflection properties. 
If you define your enumeration using this macro you can query a range of all possible values
and you can stringify a given enum value. 

Here is an example excerpt on its usage :

```cpp
#include "smart_enum.h"
#include <cstdio>


SMART_ENUM(Color, int, RED = 0, GREEN = 1, YELLOW = 42)

void f(Color::Value c){
    puts(Color::to_string(c));
}

int main(){
    f(Color::RED);
    for(auto c : Color::range)
        puts(Color::to_string(c));
}
```

The only restriction is that your enum should not have more than 8 possible values, 
but if you need more, just expand on the FOR_EACH macro.
