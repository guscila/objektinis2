#pragma once

#include <string>
#include <vector>
#include <iostream>

class Studentas {   // Studentas klasė
private:
    std::string vardas_;
    std::string pavarde_;
    std::vector<int> pazymiai_;
    int egzas_;
    float rez_;
    float mediana_;
public:
    // Konstruktoriai:
    Studentas() : egzas_(0), rez_(0.0f), mediana_(0.0f) {}

    // Destruktorius:
    ~Studentas() = default;

    // Geter'iai:
    inline const std::string vardas() const { return vardas_; }
    inline const std::string pavarde() const { return pavarde_; }
    inline int egzas() const { return egzas_; }
    inline const std::vector<int> pazymiai() const { return pazymiai_; }
    inline std::vector<int>& pazymiai() { return pazymiai_; }
    inline float rez() const { return rez_; }
    inline float mediana() const { return mediana_; }

    // Seter'iai:
    inline void setVardas(const std::string& v) { vardas_ = v; }
    inline void setPavarde(const std::string& p) { pavarde_ = p; }
    inline void setEgzas(int e) { egzas_ = e; }
    inline void setPazymiai(const std::vector<int>& nd) { pazymiai_ = nd; }
    inline void setRez(float r) { rez_ = r; }
    inline void setMediana(float m) { mediana_ = m; }
};