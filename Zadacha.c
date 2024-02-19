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

// Other functions will be implemented // Function to parse an input string into an Address structure
void parseAddress(const char *input, Address *address) %7B
    // Temporary variables to hold the parts of the address
    char index[10] = "";
    char city[50] = "";
    char street[50] = "";
    char house[10] = "";
    int house_number = 0;

    // Pointers to the parts of the input string
    char *cityPtr, *streetPtr, *housePtr;

    // Find the parts of the address using the known prefixes
    cityPtr = strstr(input, "г. ");
    streetPtr = strstr(input, "ул. ");
    housePtr = strstr(input, "д. ");

    // Extract the index (assuming it's always at the beginning)
    sscanf(input, "%s", index);

    // Extract the city name
    if (cityPtr) %7B
        sscanf(cityPtr + 3, "%49s", city); // +3 to skip the prefix
    %7D

    // Extract the street name
    if (streetPtr) %7B
        sscanf(streetPtr + 4, "%49s", street); // +4 to skip the prefix
    %7D

    // Extract the house number
    if (housePtr) %7B
        sscanf(housePtr + 3, "%9s", house); // +3 to skip the prefix
        house_number = atoi(house); // Convert string to integer
    %7D

    // Assign the extracted values to the address structure
    strcpy(address->index, index);
    strcpy(address->city, city);
    strcpy(address->street, street);
    address->house_number = house_number;
%7D

// ... (Rest of the code)
