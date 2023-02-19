//
// Created by Akbar on 2023-02-18.
//

#ifndef ASSIGNMEN1_DOG_H
#define ASSIGNMEN1_DOG_H
#include <iostream>
#include <string>

using namespace std;

class Dog {
    string name;
    string breed;
    int energy{0};
    int age{0};
    float size{0.0};
    string color;
public:
    Dog();


    Dog(string n, string b, int e, int a, float s, string c);

    string getName()  {
        return name;
    }

    void setName(string name) {
        Dog::name = name;
    }

    string getBreed() {
        return breed;
    }

    void setBreed(string breed) {
        Dog::breed = breed;
    }

    int getEnergy()  {
        return energy;
    }

    void setEnergy(int energy) {
        Dog::energy = energy;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        Dog::age = age;
    }

    float getSize() {
        return size;
    }

    void setSize(float size) {
        Dog::size = size;
    }

    string getColor() {
        return color;
    }

    void setColor(string color) {
        Dog::color = color;
    }

    void walk(int minutes){
        energy -= minutes * 2;
        if (energy < 0) energy = 0;
//        if (energy > 100) energy = 100;
        cout << getName() << "'s energy - " << energy;
        cout << endl;
    }

    void sleep(int minutes){
        energy += minutes * 3;
        if (energy > 100) energy = 100;
        cout << getName() << "'s energy - " << energy;
        cout << endl;
    }

    void bark(){
        cout << getName() << " - Bowwow!\n";
    }

    void eat(){
        size += 0.5;
        cout << getName() << "'s size - " << size;
        cout << endl;

    }


    void setDetails(){
        cout << "\nEnter dog's name:";
        cin >> name;
        cout << "Enter dog's breed:";
        getline(cin >> ws, breed);
        cout << "Enter dog's energy in range 0 <= energy <= 100:";
        cin >> energy;
        if (energy > 100){
            energy = 100;
            cout << "You've entered energy greater than 100, so energy will be 100" << endl;
        }else if (energy < 0){
            energy = 0;
            cout << "You've entered energy less than 0, so energy will be 0" << endl;
        }

        cout << "Enter dog's age:";
        cin >> age;
        cout << "Enter dog's size:";
        cin >> size;
        cout << "\nEnter dog's color:";
        cin >> color;


    }
    void printDetails(){
        cout << "Dog's name - " << getName();
        cout << "\n" << getName() << "'s breed - " << getBreed();
        cout << "\n" << getName() << "'s energy - " << getEnergy();
        cout << "\n" << getName() << "'s age -  " << getAge();
        cout << "\n" << getName() << "'s size - " << getSize();
        cout << "\n" << getName() << "'s color - " << getColor();
        cout << endl;

    }
};


#endif //ASSIGNMEN1_DOG_H
