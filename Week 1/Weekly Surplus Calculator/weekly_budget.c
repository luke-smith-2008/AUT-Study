#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf(
        "  ,__ __                                                                          \n"
        " /|  |  |                                                                         \n"
        "  |  |  |   __   _  _    _           _  _  _    __,   _  _    __,   __,  _   ,_   \n"
        "  |  |  |  /  \\_/ |/ |  |/  |   |   / |/ |/ |  /  |  / |/ |  /  |  /  | |/  /  |  \n"
        "  |  |  |_/\\__/   |  |_/|__/ \\_/|/    |  |  |_/\\_/|_/  |  |_/\\_/|_/\\_/|/|__/   |_/\n"
        "                               /|                                    /|           \n"
        "                               \\|                                    \\|           \n"
    );
    double total;
    double rent;
    double food;
    double additional;
    double surplus;

    printf("Please input weekly salary: \n");
    scanf("%lf", &total);

    printf("Please input weekly rent: \n");
    scanf("%lf", &rent);

    printf("Please input weekly food costs: \n");
    scanf("%lf", &food);

    printf("Please input total weekly additional costs: \n");
    scanf("%lf", &additional);

    surplus = total - rent - food - additional;

    printf("Tour weekly surplus is: %.2lf\n", surplus);

    return 0;
}
