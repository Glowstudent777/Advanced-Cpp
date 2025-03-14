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

    fstream inventory("inventory.dat", ios::in | ios::binary);

    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    while (!inventory.eof())
    {
        cout << "Description: " << record.desc << endl;
        cout << "Quantity: " << record.qty << endl;
        cout << "Price: " << record.price << endl;
        cout << endl;

        inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    }

    inventory.close();

    return 0;
}