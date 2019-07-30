int led=13;     //Assigning respective LEDs to Arduino Pins
int led2=12;
int led3=11;
void setup() {
    pinMode(led, OUTPUT);         //Setting the Pins as OUTPUT so that Potential may be applied 5V/0V
    pinMode(led,OUTPUT);
    pinMode(led,OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);        //HIGH means giving a potential of 5V to Pin
  delay(100);                     //Delay is introduced so that LED may glow for some time
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
}
