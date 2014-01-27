//This method uses pulseIn to measure the time between
//rising edges (can be changed to FALLING or CHANGE as need be)


double dasDelay=0;
long pulseDuration;

void setup() {
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  
  pulseDuration= pulseIn(4, HIGH);
  dasDelay = (1/(double)(pulseDuration/1000)) * 1000;
  Serial.print(pulseDuration); Serial.print(" "); Serial.println(dasDelay);
  delay(100);
}
