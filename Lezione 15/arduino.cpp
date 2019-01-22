#include <iostream>
#include <vector>
 
using namespace std;
 
const int numPins = 16;
const bool input = false;
const bool output = true;
const bool high = true;
const bool low = false;
 
vector<bool> pinValue(numPins, false);
vector<bool> pinDirection(numPins, false);
 
void digitalWrite (int pinNumber, bool value) {
    if (pinDirection[pinNumber] == output) {
        pinValue[pinNumber] = value;
    }
}
 
bool digitalRead (int pinNumber) {
    if (pinDirection[pinNumber] == input){
        return pinValue[pinNumber];
    }
    return false;
}
 
void pinMode (int pinNumber, bool mode) {
    pinDirection[pinNumber] = mode;
}
 
void printPinValue (){
    cout << "Pin: ";
    for (int i=0; i<numPins; i++) {
        cout << i;
        if (pinValue[i] == high){
            cout << ":H, ";
        } else {
            cout << ":L, ";
        }
    }
    cout << endl;
}
 
void setup() {
}
 
void loop () {
}
 
int main () {
    printPinValue();
 
    setup();
    while(true){
       loop();
    }
}