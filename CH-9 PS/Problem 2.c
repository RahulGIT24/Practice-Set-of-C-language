#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} vec;

vec sumvector(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vec v1, v2, result;
    v1.x = 90;
    v1.y = 80;
    v2.x = 900;
    v2.y = 850;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
    result = sumvector(v1, v2);
    printf("X dim of result is %d and Y dim is %d\n", result.x, result.y);
    return 0;
}