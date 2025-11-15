#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "mediana.h"

//struct Studentas {  // studento struktūra
//    std::string vardas, pavarde;
//    std::vector<int> pazymiai;
//    int egzas;
//    float rez;
//    float mediana;
//};

class Studentas {
private:
    string vardas_;
    string pavarde_;
    vector<double> pazymiai_;
    double egzas_;
    float rez_;
    float mediana_;
public:
    Studentas() : egzas_(0.0), rez_(0.0), mediana_(0.0) {}
    Studentas(istream& is);
    inline std::string vardas() const { return vardas_; }
    inline std::string pavarde() const { return pavarde_; }
    double galBalas(double (*) (vector<double>) = mediana) const;
    std::istream& readStudent(std::istream&);
};

bool compare(const Studentas&, const Studentas&);
bool comparePagalPavarde(const Studentas&, const Studentas&);
bool comparePagalEgza(const Studentas&, const Studentas&);