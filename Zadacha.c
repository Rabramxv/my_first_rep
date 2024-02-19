#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent an address
typedef struct {
    char index[10];
    char city[50];
    char street[50];
    int house_number;
} Address;

// Function prototypes
void commands();
void enterAddressManually();
void readAddressesFromFile();
void sortAddresses();
void printAllAddresses();
void searchByStreet();
// ... (Other function prototypes will be added here)

int main() {
    // Main function will be implemented here
    return 0;
}

void commands() {
    printf("1 - Ввести самостоятельно\n");
    printf("2 - Прочитать с файла\n");
    printf("3 - Сортировать\n");
    printf("4 - Вывести все адреса\n");
    printf("5 - Поиск по улице\n");
    printf("6 - Список команд\n");
}

// Other functions will be implemented here
