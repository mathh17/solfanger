
int sensorPin1 = A0;
int sensorPin2 = A1;

int sensorValue1 = 0;
int sensorValue2 = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue1 = analogRead(sensorPin1);
sensorValue2 = analogRead(sensorPin2);
Serial.println(sensorValue1);
Serial.println(sensorValue2);

delay(1000);
}
