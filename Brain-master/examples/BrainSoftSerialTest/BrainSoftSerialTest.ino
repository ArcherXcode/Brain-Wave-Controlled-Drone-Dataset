#include <SoftwareSerial.h>
#include <Brain.h>

SoftwareSerial softSerial(10, 11);

Brain brain(softSerial);

void setup() {
    softSerial.begin(9600);

    Serial.begin(9600);
}

void loop() {
    if (brain.update()) {
        Serial.println(brain.readErrors());
        Serial.println(brain.readCSV());
    }
}
