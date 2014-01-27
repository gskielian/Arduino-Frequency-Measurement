//This method uses pulseIn to measure the time between
//rising edges (can be changed to FALLING or CHANGE as need be)


double dasDelay=0;


void setup() {
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {

  dasDelay= (double) ( pulseIn(4, HIGH) );
  Serial.println(1/dasDelay);
  delay(100);
}
