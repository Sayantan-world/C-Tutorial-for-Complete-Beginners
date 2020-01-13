#include <iostream>
#include "Doggy.h"
using namespace std;

//connstructor
Doggy::Doggy(){
        cout << "Doggy created" << endl;
        happy = true;
}
//destructor
Doggy::~Doggy(){
        cout << "Doggy destroyed" << endl;
}
void Doggy::bark(){
        if(happy)
                cout << "Bauu wau, shake tail" << endl;
        else
                cout << "Sad face :(" << endl;
}

void Doggy::jump(){
        cout << "I jumped" << endl;
}
