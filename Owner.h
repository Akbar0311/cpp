//
// Created by Akbar on 2023-02-18.
//

#ifndef ASSIGNMEN1_OWNER_H
#define ASSIGNMEN1_OWNER_H
#include <iostream>
using namespace std;

class Owner {
    string name;
    int age{};
    int phoneNumber{};
    string dogName;

public:
    Owner();
    Owner(string n, int a, int p, string d);

    string getName()  {
        return name;
    }

    void setName(string name) {
        Owner::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Owner::age = age;
    }

    int getPhoneNumber() const {
        return phoneNumber;
    }

    void setPhoneNumber(int phoneNumber) {
        Owner::phoneNumber = phoneNumber;
    }

    string getDogName() {
        return dogName;
    }

    void setDogName(string dogName) {
        Owner::dogName = dogName;
    }

    void setDetails(){
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your age:";
        cin >> age;
        cout << "Enter your phone number:";
        cin >> phoneNumber;
        cout << "Enter your dog's name:";
        cin >> dogName;
        cout << endl;
    }

    void printDetails(){
        cout << "Owner's name - " << getName();
        cout << "\n" << getName() << "'s age - " << getAge();
        cout << "\n" << getName() << "'s phone number - " << getPhoneNumber();
        cout << "\n" << getName() << "'s dog's name - " << getDogName();
        cout << endl;

    }
};


#endif //ASSIGNMEN1_OWNER_H
