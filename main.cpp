//
// Created by Akbar on 2023-02-18.
//

#include "Dog.h"
#include "Owner.h"

struct Pair{
    string OwnerName;
    string dogName;
};

int main() {

    Dog d("Beethoven","Saint Bernard" ,100,1,19.5,"Brown");
    d.printDetails ();
    cout <<"----------------------"<<endl;
    d.walk (5);
    cout <<"----------------------"<<endl;
    d.sleep (2);
    cout <<"----------------------"<<endl;
    d.bark();
    cout <<"----------------------"<<endl;
    d.eat();
    cout <<"----------------------"<<endl;
    d.printDetails ();
    cout <<"*------------------------------------------*"<<endl;
    Owner o("Jack" ,25,99891,"Beethoven");
    o.printDetails ();
    cout <<"----------------------"<<endl;
    cout <<"*------------------------------------------*"<<endl;



    Dog dogs[2];
    for (auto & dog : dogs) {
        dog.setDetails();
    }
    for (auto & dog : dogs) {
        dog.printDetails();
    }

    Owner owner[2];
    for (auto & i : owner) {
        i.setDetails();
    }
    Pair pairs[2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (owner[i].getDogName() == dogs[j].getName()){
                pairs[i].OwnerName = owner[i].getName();
                pairs[i].dogName = dogs[j].getName();
            }
        }
    }

    for (int i = 0; i < 2; ++i) {
        cout << pairs[i].OwnerName << " " << pairs[i].dogName << endl;
    }

    return 0;
}