//
// Created by Istiak on 12/01/2024.
//

#include "../headers/Reptile.h"

Reptile::Reptile() : Animal() {
    scalePattern = "";
}

Reptile::Reptile(string animalName, string animalColor, string animalScalePattern, string animalDiet, string animalHabitat,
int animalAge, bool animalIsPet, double animalWeight, double animalHeight)
:Animal(animalName, animalColor, animalDiet, animalHabitat,animalAge,animalIsPet, animalWeight, animalHeight){
    scalePattern = animalScalePattern;
}

Reptile::Reptile(const Reptile& other):Animal(other) {
    scalePattern = other.scalePattern;
}

void Reptile::printInfo() const {
    cout << "Animal of unkown type : " << endl;
    cout << "Name : " << getName() << endl;
    cout << "Color : " << getColor() << endl;
    cout << "Scale Pattern: " << getScalePattern() << endl;
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

void Reptile::setScalePattern(const string& newScalePattern) {
    scalePattern = newScalePattern;
}

string Reptile::getScalePattern() const {
    return scalePattern;
}

string Reptile::getType() {
    return "Reptile";
}
