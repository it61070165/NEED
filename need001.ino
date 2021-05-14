const int analogInPin = A0; // input sensor
const int Relay = 2; //  input relay
int sensorValue = 0; 
int outputValue = 0;
void setup() {
Serial.begin(9600);
pinMode(Relay, OUTPUT); // relay Output
}
void loop() {
sensorValue = analogRead(analogInPin);
outputValue = map(sensorValue, 0, 1023, 100, 0);
Serial.print(outputValue);
Serial.println(" %");
if (outputValue <= 40) { // set temp
digitalWrite(Relay, HIGH); 
}
else {
digitalWrite(Relay, LOW); 
}
delay(1000);
}
