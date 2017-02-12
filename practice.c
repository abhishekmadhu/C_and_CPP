#include <stdio.h>

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    }b1, b2, b3;


    printf("\nEnter names, prices, and no of pages of 3 books:\n");
    scanf("%c%f%d", &b1.name, &b1.price, &b1.pages);
    scanf("%c%f%d", &b2.name, &b2.price, &b2.pages);      //b2 te input hocchena. Why?(See output)
    scanf("%c%f%d", &b3.name, &b3.price, &b3.pages);

    printf("\nAnd this is what you entered\n");
    printf("Name1=%c Price1=%.2f Page1=%d\n", b1.name, b1.price, b1.pages);
    printf("Name2=%c Price2=%.2f Page2=%d\n", b2.name, b2.price, b2.pages);
    printf("Name3=%c Price3=%.2f Page3=%d\n", b3.name, b3.price, b3.pages);

    return 0;
}
