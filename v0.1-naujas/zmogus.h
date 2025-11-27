#pragma once

#include <string>

class Zmogus {   // Žmogaus klasė
protected:
    std::string vardas_;
    std::string pavarde_;
public:
    // Konstruktorius:
    Zmogus() = default;

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

    virtual void abstaktu() const = 0;
};