//
// Created by Istiak on 12/01/2024.
//

#include "../headers/Mammal.h"
#include "../headers/Animal.h"
#include <iostream>

Mammal::Mammal() {
    furColor = "";
}

Mammal::Mammal(string animalName, string animalColor,string animalFurColor, string animalDiet, string animalHabitat,int animalAge,bool animalIsPet, double animalWeight, double animalHeight)
:Animal(animalName, animalColor, animalDiet, animalHabitat,animalAge,animalIsPet, animalWeight, animalHeight) {
    furColor = animalFurColor;
}

Mammal::Mammal(const Mammal& other):Animal(other) {
    furColor = other.furColor;
}

void Mammal::printInfo() const {
        cout << "Animal of unkown type : " << endl;
        cout << "Name : " << getName() << endl;
        cout << "Color : " << getColor() << endl;
        cout << "Fur Color: " << getFurColor() << endl;
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

void Mammal::setFurColor(const string& newFurColor) {
    furColor = newFurColor;
}

string Mammal::getFurColor() const {
    return furColor;
}

string Mammal::getType() {
    return "Mammal";
}

