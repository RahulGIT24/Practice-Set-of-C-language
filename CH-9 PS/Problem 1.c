#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 90;
    v1.y = 80;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
    v2.x = 900;
    v2.y = 850;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
    return 0;
}