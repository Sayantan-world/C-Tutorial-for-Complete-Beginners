#include <iostream>
#include "Doggy.h"
using namespace std;

int main(){
        cout << "Starting Program..." << endl;
        //object creation
        {
                Doggy milley;
                milley.bark();
                milley.jump();
        }//object destruction
        cout << "Ending program..." << endl;
}
