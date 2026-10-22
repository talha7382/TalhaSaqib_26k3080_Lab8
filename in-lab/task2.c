#include <stdio.h>

void welcome() {
    printf("Welcome!\n");
}

int get_price(int product) {
    switch (product) {
        case 0: return 1000;
        case 1: return 2000;
        case 2: return 3000;
    }
}

void show_menu(int n_products, char *products[n_products]) {
    for(int i = 0; i < n_products; i++) {
        printf("product %d: %s   price: Rs. %d\n", i + 1, products[i], get_price(i));
    }
}

int calculate_price(int product, int quantity) {
    return get_price(product) * quantity;
}

int calculate_subtotal(int ) {

}

void main() {
    char *products[] = {"shoes", "shirts", "jeans"};
    int choice, quantity;

    welcome();
    show_menu(3, products);

    printf("\nSelect a product (1, 2 or 3) and the quantity.\n");
    scanf("%d %d", &choice, &quantity);

    int choices[choice][quantity];

}
