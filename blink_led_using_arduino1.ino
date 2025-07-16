// C++ code
// LED BLINK
int led1=13;

void setup()
{
  pinMode(led1, OUTPUT);
}

void loop()
{
  // the first Led is made to blink  one time
  digitalWrite(led1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}