//
// Created by Istiak on 11/01/2024.
//

#include <iostream>
#include "headers/Animal.h"
#include "headers/Mammal.h"
#include "headers/Bird.h"
#include "headers/Reptile.h"
#include "headers/Zoo.h"

using namespace std;

int main() {
    cout << "---------------------" << endl;
    Mammal m1("Tiger", "Orange", "Golden", "Carnivore", "Africa", 2, false, 200.0, 1.5);
    m1.printInfo();
    Mammal m2("Elephant", "Grey", "Grey", "Herbivore", "Africa", 12, false, 2000.0, 3.0);
    cout << "---------------------" << endl;
    Bird b1("Eagle", "Black", 200.0, "Carnivore", "Sky", 1, false, 5.0, 0.5);
    b1.printInfo();
    Bird b2("Penguin", "Black", 50.0, "Carnivore", "Water", 3, false, 5.0, 0.5);
    cout << "---------------------" << endl;
    Reptile r1("Crocodile", "Green", "Scaly", "Carnivore", "Water", 20, false, 100.0, 1.0);
    r1.printInfo();
    Reptile r2("Snake", "Green", "Scaly", "Carnivore", "Land", 3, false, 10.0, 0.5);
    cout << "---------------------" << endl;
    cout << "---------------------" << endl;
    Zoo z1("Zoo1");
    z1.addAnimal(&m1);
    z1.addAnimal(&m2);
    z1.addAnimal(&b1);
    z1.addAnimal(&b2);
    z1.addAnimal(&r1);
    z1.addAnimal(&r2);
    z1.listAnimals();

    int index = z1.searchAnimalByName("Elephant");
    cout << "Index of Elephant in the zoo list: " << index << endl;



}
