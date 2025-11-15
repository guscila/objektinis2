#pragma once
#include "funkcijos.h"

float mediana(vector<int>& pazymiai) {  // medianos apskaičiavimo funkcija
    int nd;
    sort(pazymiai.begin(), pazymiai.end()); // studento namų darbų pažymių vektoriaus surūšiavimas didėjimo tvarka
    nd = pazymiai.size();
    if (nd % 2 == 1) {   // veiksmai ieškant vektoriaus medianos
        return pazymiai[nd / 2];
    }
    else return (pazymiai[(nd / 2) - 1] + pazymiai[nd / 2]) / 2.0;
}