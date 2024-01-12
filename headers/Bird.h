//
// Created by Istiak on 12/01/2024.
//

#ifndef CPP_EXAM_BIRD_H
#define CPP_EXAM_BIRD_H
#include "Animal.h"

class Bird : public Animal {
private :
    double wingspan;
public:
    Bird();
    Bird(string, string, double, string, string,int, bool, double, double);
    Bird(const Bird&);
    void printInfo() const override;
    void setWingspan(const double);
    double getWingspan() const;
};


#endif //CPP_EXAM_BIRD_H
