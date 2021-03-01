#include <iostream>
#include <string>

using namespace std;

void sayHello(std::string);
void sayGoodbye(std::string);

int main(int argc, char *argv[]){

    bool interactive = !(argc == 2);
    
    std::string name;

    if(interactive) {
	cout << "Gib deinen Namen ein: ";
	cin >> name;
	cout << endl;
    } else {
	name = argv[1];
    }
    
    sayHello(name);
    sayGoodbye(name);
}

// New function
void sayHello(std::string name){
    cout << "Hallo " << name << "!" << endl;
}

void sayGoodbye(std::string name){
    cout << "Tschuess " << name << "!" << endl;
}
