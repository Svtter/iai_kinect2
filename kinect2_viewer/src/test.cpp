/**
 * @author svtter
 *
 */

#include <stdlib.h>
#include <stdio.h>

class Point
{
    public:
        int x;
        int y;

        void print()
        {
            printf("(%d, %d)\n", x, y);
        }
};

Point cal(int x, int y)
{
    Point p;
    p.x = x;
    p.y = y;

    return p;
}

int main()
{
    //size_t t = 1;
    //printf("%lu", t);

    Point x = cal(10, 20);
    x.print();

    return 0;
}
