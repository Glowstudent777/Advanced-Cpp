#include <iostream>
#include <fstream>

using namespace std;

const int DESC_SIZE = 31;

struct InventoryItem
{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()
{
    InventoryItem record;
    long recNum;

    fstream inventory("inventory.dat", ios::in | ios::out | ios::binary);

    cout << "Enter the record number you want to edit: ";
    cin >> recNum;

    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    cout << "\nHere is the record you are editing:\n";
    cout << "Description: " << record.desc << endl;
    cout << "Quantity: " << record.qty << endl;
    cout << "Price: " << record.price << endl;

    cout << "\nEnter the new data:\n";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));

    inventory.close();

    return 0;
}
