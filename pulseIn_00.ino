//This method uses pulseIn to measure the time between
//rising edges (can be changed to FALLING or CHANGE as need be)


long dasDelay=0;


void setup() {
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {

  dasDelay=pulseIn(4, HIGH);
  Serial.println(dasDelay);
  delay(100);
}
