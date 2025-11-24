#include <iostream>
#include "tehtava1_09.h"

using namespace std;

int main() {
    Ajoneuvo ajoneuvo(180, 2020, 1500.0);
    Auto auto1(200, 2021, 1400.0, 4, 4);
    Henkiloauto henkiloauto(190, 2019, 1300.0, 4, 4, 5);
    KuormaAuto kuormaauto(120, 2015, 8000.0, 2, 6, 20000.0);
    Lentokone lentokone(900, 2010, 40000.0, 12000.0);
    Laiva laiva(40, 2005, 500000.0, 10.0);

    return 0;
}
