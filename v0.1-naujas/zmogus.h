#pragma once

#include <string>

class Zmogus {   // Žmogaus klasė
protected:
    std::string vardas_;
    std::string pavarde_;
public:
    // Konstruktorius:
    Zmogus() : vardas_(""), pavarde_("") {}

    // Destruktorius:
    virtual ~Zmogus() {
        vardas_.clear();
        pavarde_.clear();
    }

    // Geter'iai:
    inline const std::string vardas() const { return vardas_; }
    inline const std::string pavarde() const { return pavarde_; }

    // Seter'iai:
    inline void setVardas(const std::string& vardas) { vardas_ = vardas; }
    inline void setPavarde(const std::string& pavarde) { pavarde_ = pavarde; }

    // Abstraktumas:
    virtual std::string WhoIAm() const = 0; // abstrakti funkcija, neleidžianti kurti klasės objektų
};