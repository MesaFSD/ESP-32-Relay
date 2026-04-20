// ESP32 Relay Control Test
const int solenoidPin = 27; 

void setup() {
  pinMode(solenoidPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println("Solenoid ON");
  digitalWrite(solenoidPin, HIGH); 
  delay(2000); 
  
  Serial.println("Solenoid OFF");
  digitalWrite(solenoidPin, LOW);  
  delay(5000); 
}