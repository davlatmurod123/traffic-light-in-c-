int red =8;
int yellow=9;
int green=10;

void setup()
{
  pinMode(red,  OUTPUT);
  pinMode(yellow,  OUTPUT);
  pinMode(green,  OUTPUT);


}


void loop()
{
  digitalWrite(red,   HIGH  );
  delay(2000);

  digitalWrite(yellow, HIGH);
  delay(2000);

  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);


}