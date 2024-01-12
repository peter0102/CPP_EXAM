//
// Created by Istiak on 12/01/2024.
//

#include "../headers/Zoo.h"
#include <vector>

int Zoo::MAX_CAPACITY = 10;

Zoo::Zoo() {
    name = "";
    MAX_CAPACITY = 10;
}

Zoo::Zoo(string zooName) {
    name = zooName;
    MAX_CAPACITY = 10;
}

Zoo::Zoo(const Zoo& zoo) {
    name = zoo.name;
    animals = zoo.animals;
}

void Zoo::setName(const string& zooName) {
    name = zooName;
}

string Zoo::getName() const {
    return name;
}

void Zoo::listAnimals() {
    cout << "Zoo animals: " << endl;
    for (int i = 0; i < animals.size(); i++) {
        animals[i]->printInfo();
        cout << "---------------------" << endl;
    }
}

void Zoo::addAnimal(Animal* animal) {
    string animalName
    if (animals.size() < MAX_CAPACITY) {
    } else {
        cout << "Zoo is full" << endl;
    }
}

int Zoo::searchAnimalByName(const string &searchName) {
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i]->getName() == searchName) {
            return i;
        }
    }
    return -1;
}

int Zoo::binarySearchAnimalByName(const std::string &searchName) {
    int start = 0;
    int end = animals.size() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (animals[mid]->getName() == searchName) {
            return mid;
        } else if (animals[mid]->getName() < searchName) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

void Zoo::removeAnimalByName(const string &searchName) {
    int index = binarySearchAnimalByName(searchName);
    if (index != -1) {
        animals.erase(animals.begin() + index);
    } else {
        cout << "Animal not found" << endl;
    }
}

int Zoo::AgeForType(const Animal &type) {
    int age = 0;
    for (int i = 0; i < animals.size(); i++) {
        if (typeid(*animals[i]) == typeid(type)) {
            age += animals[i]->getAge();
        }
    }
    return age;
}