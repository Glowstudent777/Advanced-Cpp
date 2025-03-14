#include <iostream>
#include <fstream>

using namespace std;

const int DESC_SIZE = 31;
const int NUM_RECORDS = 5;

struct InventoryItem
{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()
{
    InventoryItem record = {"", 0, 0.0};

    fstream inventory("inventory.dat", ios::out | ios::binary);

    for (int i = 0; i < NUM_RECORDS; i++)
    {
        cout << "Writing record " << i + 1 << endl;
        inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
    }

    inventory.close();

    return 0;
}