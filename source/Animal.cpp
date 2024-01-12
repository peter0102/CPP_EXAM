//
// Created by Istiak on 12/01/2024.
//

#include "../headers/Animal.h"
#include <iostream>

using namespace std;


Animal::Animal() {
    name = "";
    color = "";
    diet = "";
    habitat = "";
    sounds = "";
    isPet = false;
    age = 0;
    weight = 0.0;
    height = 0.0;
}

Animal::Animal(string animalName, string animalColor, string animalDiet, string animalHabitat,int animalAge,bool animalIsPet, double animalWeight, double animalHeight) {
    name = animalName;
    color = animalColor;
    diet = animalDiet;
    habitat = animalHabitat;
    sounds = "";
    isPet = animalIsPet;
    age = animalAge;
    weight = animalWeight;
    height = animalHeight;
}

Animal::Animal(const Animal& other) {
    name = other.name;
    color = other.color;
    diet = other.diet;
    habitat = other.habitat;
    sounds = other.sounds;
    isPet = other.isPet;
    age = other.age;
    weight = other.weight;
    height = other.height;
}

void Animal::printInfo() const {
    cout << "Animal of unkown type : " << endl;
    cout << "Name : " << getName() << endl;
    cout << "Color : " << getColor() << endl;
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

string Animal::getName() const {
    return name;
}

void Animal::setName(const string& newName) {
    name = newName;
}

void Animal::setColor(const string& newColor) {
    color = newColor;
}

string Animal::getColor() const {
    return color;
}

void Animal::setDiet(const string& newDiet) {
    diet = newDiet;
}

string Animal::getDiet() const {
    return diet;
}

string Animal::getHabitat() const {
    return habitat;
}

void Animal::setHabitat(const string& newHabitat) {
    habitat = newHabitat;
}

string Animal::getSounds() const {
    return sounds;
}

void Animal::setSounds(const string& newSounds) {
    sounds = newSounds;
}

bool Animal::getIsPet() const {
    return isPet;
}

void Animal::setIsPet(bool newIsPet) {
    isPet = newIsPet;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int newAge) {
    age = newAge;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(double newWeight) {
    weight = newWeight;
}

double Animal::getHeight() const {
    return height;
}

void Animal::setHeight(double newHeight) {
    height = newHeight;
}

void Animal::make_sound() const {
    cout << sounds << endl;
}

