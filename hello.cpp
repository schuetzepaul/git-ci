#include <iostream>

using namespace std;

void sayHello(const char*);
void sayGoodbye(const char*);

int main(){

    char name[100];
    cout << "Gib deinen Namen ein: ";
    cin >> name;
    cout << endl;
    
    sayHello(name);
    sayGoodbye(name);
}

// New function
void sayHello(const char* name){
    cout << "Hallo " << name << "!" << endl;
}

void sayGoodbye(const char* name){
    cout << "Tschuess " << name << "!" << endl;
}
