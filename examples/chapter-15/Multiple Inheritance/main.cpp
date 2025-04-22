#include "DateTime.h"

using namespace std;

int main()
{
    DateTime emptyDate, pastDate(2, 4, 1960, 5, 32, 27);
    emptyDate.showDateTime();
    pastDate.showDateTime();

    return 0;
}