#include <SoftwareSerial.h>
SoftwareSerial cell(2,3);  // (Rx, Tx)

void setup() {
cell.begin(9600);
delay(500);
Serial.begin(9600);
Serial.println("CALLING..........");
cell.println("ATD+9538433364;");   
delay(20000);
}
void loop() {

}
