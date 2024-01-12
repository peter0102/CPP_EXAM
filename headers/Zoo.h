//
// Created by Istiak on 12/01/2024.
//

#ifndef CPP_EXAM_ZOO_H
#define CPP_EXAM_ZOO_H

#include <iostream>
#include <vector>
#include "Animal.h"

using namespace std;

class Zoo {
private:
    string name;
    static int MAX_CAPACITY;
    vector<Animal*> animals;
public:
    Zoo();
    Zoo(string name);
    Zoo(const Zoo& zoo);
    void setName(const string& name);
    string getName() const;
    void listAnimals();
    void addAnimal(Animal* animal);
    int searchAnimalByName(const string& name);
    int binarySearchAnimalByName(const string& name);
    void removeAnimalByName(const string& name);
    int AgeForType(const Animal& type);
};


#endif //CPP_EXAM_ZOO_H
