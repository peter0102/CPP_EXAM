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
    if (animals.size() < MAX_CAPACITY) {
        animals.push_back(animal);
    } else {
        cout << "Zoo is full" << endl;
    }
    for (int i = 0; i < animals.size(); i++) {
        for (int j = i + 1; j < animals.size(); j++) {
            if (animals[i]->getName() > animals[j]->getName()) {
                Animal* temp = animals[i];
                animals[i] = animals[j];
                animals[j] = temp;
            }
        }
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
    int index = searchAnimalByName(searchName);
    if (index != -1) {
        animals.erase(animals.begin() + index);
    } else {
        cout << "Animal not found" << endl;
    }
}

int Zoo::AgeForType(const Animal &type) {
    string animalType = typeid(type).name();
    string result = "";
    for (char ch : animalType) {
        if (isalpha(ch))
            result.push_back(ch);
    }
    int totalAge = 0;
    int count = 0;
    for (int i = 0; i < animals.size(); i++) {
        string result2 = "";
        string currentAnimalType = typeid(*animals[i]).name();
        for (char ch : currentAnimalType) {
            if (isalpha(ch))
                result2.push_back(ch);
        }
        if (currentAnimalType == animalType) {
            totalAge += animals[i]->getAge();
            count++;
        }
    }
    return totalAge / count;
}