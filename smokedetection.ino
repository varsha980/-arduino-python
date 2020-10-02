
/*
 VCC : Module power supply. Connect it to 5V output of Arduino.
 GND : Ground Pin. Connect to GND pin of the Arduino.
 DO : Digital Output representation of the gas.
 A0 : Analog Output voltage proportional to the concentration of gas.
 */



int buzzer = 10;
int smokeA0 = A5;

// Your threshold value. You might need to change it.
int sensorThres = 400;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    tone(buzzer, 1000, 200);
  }
  else
  {
    noTone(buzzer);
  }
  delay(100);
} 