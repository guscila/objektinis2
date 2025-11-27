#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "zmogus.h"

class Studentas : public Zmogus {   // derived Studentas klasė
private:
    std::vector<int> pazymiai_;
    int egzas_;
    float rez_;
    float mediana_;
public:
    // Konstruktorius:
    Studentas() :
        Zmogus(),
        egzas_(0),
        rez_(0.0f),
        mediana_(0.0f) {}

    // Kopijavimo konstruktorius:
    Studentas(const Studentas& copy) :
        Zmogus(copy),
        pazymiai_(copy.pazymiai_),
        egzas_(copy.egzas_),
        rez_(copy.rez_),
        mediana_(copy.mediana_) {}

    // Kopijavimo priskyrimo operatorius:
    Studentas& operator = (const Studentas& copy) {
        if (this != &copy) {
            Zmogus::operator=(copy);
            pazymiai_ = copy.pazymiai_;
            egzas_ = copy.egzas_;
            rez_ = copy.rez_;
            mediana_ = copy.mediana_;
        }
        return *this;
    }

    // Destruktorius:
    ~Studentas() override {
        vardas_.clear();
        pavarde_.clear();
        pazymiai_.clear();
        egzas_ = 0;
        rez_ = 0.0f;
        mediana_ = 0.0f;
    }

    // Geter'iai:
    inline int egzas() const { return egzas_; }
    inline const std::vector<int> pazymiai() const { return pazymiai_; }
    inline std::vector<int>& pazymiai() { return pazymiai_; }
    inline float rez() const { return rez_; }
    inline float mediana() const { return mediana_; }

    // Seter'iai:
    inline void setEgzas(int egzas) { egzas_ = egzas; }
    inline void setPazymiai(const std::vector<int>& nd) { pazymiai_ = nd; }
    inline void setRez(float rez) { rez_ = rez; }
    inline void setMediana(float mediana) { mediana_ = mediana; }

    // Operatoriai:
    friend std::ostream& operator<<(std::ostream& out, const Studentas& stud);  // išvedimo operatorius
    friend std::istream& operator>>(std::istream& in, Studentas& stud); // įvesties operatorius

    // Abstraktumas:
   std::string WhoIAm() const override { return "Studentas iš studentas klasės"; }
};