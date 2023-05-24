
const int led1 = 10;
const int led2 = 9;
const int tiempo = 500;

void setup () {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(tiempo);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(tiempo);
}