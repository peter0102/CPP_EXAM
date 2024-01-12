//
// Created by Istiak on 12/01/2024.
//

#ifndef CPP_EXAM_REPTILE_H
#define CPP_EXAM_REPTILE_H

#include "Animal.h"
#include <iostream>

class Reptile : public Animal {
private :
    string scalePattern;
public:
Reptile();
    Reptile(string, string, string, string, string,int, bool, double, double);
    Reptile(const Reptile&);
    void printInfo() const override;
    void setScalePattern(const string&);
    string getScalePattern() const;
};


#endif //CPP_EXAM_REPTILE_H
