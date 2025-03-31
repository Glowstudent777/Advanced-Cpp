#include <iostream>
#include <iomanip>
#include "InventoryItem.h"

using namespace std;

int main()
{
     const int NUM_ITEMS = 5;

     InventoryItem inventory[NUM_ITEMS] = {
         InventoryItem("Hammer", 6.95, 12),
         InventoryItem("Wrench", 8.75, 20),
         InventoryItem("Pliers", 3.75, 10),
         InventoryItem("Ratchet", 7.95, 14),
         InventoryItem("Screwdriver", 2.50, 22)};

     cout << setw(14) << "Inventory Item" << setw(8) << "Cost" << setw(16) << "Units on Hand" << endl;
     cout << "--------------------------------------" << endl;

     for (int count = 0; count < NUM_ITEMS; count++)
     {
          cout << setw(14) << inventory[count].getDescription() << setw(8) << inventory[count].getCost() << setw(7) << inventory[count].getUnits() << endl;
     }

     return 0;
}