#include <stdio.h>
#include <cs50.h>

int main(void){
    // Here your code !

    int x = get_int("Get X: ");
    int y = get_int("Get Y: ");
    int sum = x + y;

    if (x == y)
        {
        return sum*3;
        }
    else
        {
        return sum;
}
}