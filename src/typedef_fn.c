
#include <stdio.h>

typedef int Number;
typedef char String[50];

int main() {

    // typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d\n", z);

    String name = "hi";

    printf("%s\n", name);

    return 0;
}
