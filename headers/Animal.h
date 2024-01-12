//
// Created by Istiak on 12/01/2024.
//

#ifndef CPP_EXAM_ANIMAL_H
#define CPP_EXAM_ANIMAL_H

#include <iostream>

using namespace std;

class Animal {
public:
    Animal();
    Animal(string, string, string, string, int, bool, double, double);
    Animal(const Animal&);
    virtual void printInfo() const;
    void setName(const string&);
    string getName() const;
    void setColor(const string&);
    string getColor() const;
    void setDiet(const string&);
    string getDiet() const;
    void setHabitat(const string&);
    string getHabitat() const;
    void setSounds(const string&);
    string getSounds() const;
    void setIsPet(bool);
    bool getIsPet() const;
    void setAge(int);
    int getAge() const;
    void setWeight(double);
    double getWeight() const;
    void setHeight(double);
    double getHeight() const;
    void make_sound() const;
private:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;


};


#endif //CPP_EXAM_ANIMAL_H
