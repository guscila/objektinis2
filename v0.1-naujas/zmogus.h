#pragma once

#include <string>
#include <vector>
#include <iostream>

class Zmogus {   // Žmogaus klasė
protected:
    std::string vardas_;
    std::string pavarde_;
public:
    // Konstruktorius:
    Zmogus() {}

    // Kopijavimo konstruktorius:
    Zmogus(const Zmogus& copy) :
        vardas_(copy.vardas_),
        pavarde_(copy.pavarde_) {
    }

    // Kopijavimo priskyrimo operatorius:
    Zmogus& operator = (const Zmogus& copy) {
        if (this != &copy) {
            vardas_ = copy.vardas_;
            pavarde_ = copy.pavarde_;
        }
        return *this;
    }

    // Destruktorius:
    virtual ~Zmogus() {
        vardas_.clear();
        pavarde_.clear();
    }

    // Geter'iai:
    inline const std::string vardas() const { return vardas_; }
    inline const std::string pavarde() const { return pavarde_; }

    // Seter'iai:
    inline void setVardas(const std::string& v) { vardas_ = v; }
    inline void setPavarde(const std::string& p) { pavarde_ = p; }
};