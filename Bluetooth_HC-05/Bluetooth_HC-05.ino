// Connect the HC-05 module and communicate using the serial monitor
// The default baud rate for communication mode is 9600

#define ledPin 7
#include <SoftwareSerial.h>         
SoftwareSerial BTserial(2, 3); // RX | TX       //New serial Ports are made to minimise use of PIN 0 & 1
// Connect the HC-05 TX to Arduino pin 2 RX. 
// Connect the HC-05 RX to Arduino pin 3 TX through a voltage divider.
 
char c = ' ';
 
void setup() 
{
    Serial.begin(9600);
    Serial.println("Arduino is ready");       //Indicates that Arduino is communicating on Serial Monitor
 
    // HC-05 default serial speed for communication mode is 9600
    BTserial.begin(9600); 

     pinMode(ledPin, OUTPUT);
     digitalWrite(ledPin,LOW);
}
 
void loop()
{
 
    // Keep reading from HC-05 and send to Arduino Serial Monitor
    if (BTserial.available())
    {  
        c = BTserial.read();
        Serial.write(c);
        if (c == 'off') {
        digitalWrite(ledPin, LOW); // Turn LED OFF
        Serial.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
        
    }
    else if (c == 'on') {
        digitalWrite(ledPin, HIGH);
        Serial.println("LED: ON");
        
 }  
    }
 
    // Keep reading from Arduino Serial Monitor and send to HC-05
    if (Serial.available())
    {
        c =  Serial.read();
        BTserial.write(c);  
    }
 
}
