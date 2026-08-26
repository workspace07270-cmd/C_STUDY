#include <stdio.h>

typedef struct {
    char name[32];
    int price;
    int stock;
} Product;

static void print_product(const Product *product)
{
    printf("%-12s price=%d stock=%d\n",
           product->name, product->price, product->stock);
}

int main(void)
{
    const Product products[] = {
        {"Keyboard", 45000, 5}, {"Mouse", 28000, 8}
    };
    for (size_t i = 0; i < sizeof products / sizeof products[0]; ++i) {
        print_product(&products[i]);
    }
    return 0;
}
