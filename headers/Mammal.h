//
// Created by Istiak on 12/01/2024.
//

#ifndef CPP_EXAM_MAMMAL_H
#define CPP_EXAM_MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
    public:
    Mammal();
    Mammal(string, string, string, string,string,int ,bool, double, double);
    Mammal(const Mammal&);
    void printInfo() const override ;
    void setFurColor(const string&);
    string getFurColor() const;
    string getType();
private:
    string furColor;
};


#endif //CPP_EXAM_MAMMAL_H
