//
// Created by Istiak on 12/01/2024.
//

#include "../headers/Bird.h"
#include "../headers/Animal.h"
#include <iostream>

Bird::Bird() {
    wingspan = 0.0;
}

Bird::Bird(string animalName, string animalColor, double animalWingspan, string animalDiet, string animalHabitat,
           int animalAge, bool animalIsPet, double animalWeight, double animalHeight)
           :Animal(animalName, animalColor, animalDiet, animalHabitat,animalAge,animalIsPet, animalWeight, animalHeight)
           {
    wingspan = animalWingspan;
}

Bird::Bird(const Bird& other):Animal(other) {
    wingspan = other.wingspan;
}

void Bird::printInfo() const {
    cout << "Animal of unkown type : " << endl;
    cout << "Name : " << getName() << endl;
    cout << "Color : " << getColor() << endl;
    cout << "Wingspan : " << getWingspan() << "cm" << endl;
    cout << "Diet : " << getDiet() << endl;
    cout << "Habitat : " << getHabitat() << endl;
    cout << "Age : " << getAge() << "'s old" <<endl;
    cout << "This animal is ";
    if (!getIsPet()){
        cout << "not ";
    }
    cout << "a pet" << endl;
    cout << "Weight : " << getWeight() << "kg" << endl;
    cout << "Height : " << getHeight() << "cm" << endl;
}

void Bird::setWingspan(const double newWingspan) {
    wingspan = newWingspan;
}

double Bird::getWingspan() const {
    return wingspan;
}

string Bird::getType() const {
    return "Bird";
}

