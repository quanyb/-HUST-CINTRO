// VINHLT BK Bookseller
#include <stdio.h>
#include <string.h>

int main() {
    char isbn1[32], title1[32], isbn2[32], title2[32];
    float price1, total1, price2, total2;
    int qty1, qty2;

    gets(isbn1); isbn1[strcspn(isbn1, "\n")] = '\0';
    gets(title1); title1[strcspn(title1, "\n")] = '\0';
    scanf("%f", &price1);
    scanf("%d", &qty1);

    while(getchar() != '\n'); 

    gets(isbn2); 
    isbn2[strcspn(isbn2, "\n")] = '\0';
    
    gets(title2); 
    title2[strcspn(title2, "\n")] = '\0';
    
    scanf("%f", &price2);
    scanf("%d", &qty2);

    total1 = price1 * qty1;
    total2 = price2 * qty2;
    float sumTotal = total1 + total2;
    float vat = sumTotal * 0.04f;
    float pay = sumTotal + vat;

    printf("BK Bookseller\n\n");
    printf("%-5s%-20s%-20s%-8s%-8s\n", "Qty", "ISBN", "Title", "Price", "Total");
    printf("%-5d%-20s%-20s%-8.0f%-8.0f\n", qty1, isbn1, title1, price1, total1);
    printf("%-5d%-20s%-20s%-8.0f%-8.0f\n", qty2, isbn2, title2, price2, total2);
    printf("\nVAT: %.0f\n", vat);
    printf("You pay: %.0f\n", pay);

    return 0;
}
