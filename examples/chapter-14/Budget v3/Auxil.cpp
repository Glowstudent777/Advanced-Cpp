#include "Auxil.h"
#include "Budget.h"

void AuxiliaryOffice::addBudget(double amount, Budget &b)
{
    auxBudget += amount;
    b.corpBudget += amount;
}