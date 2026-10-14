#define A digitalRead(5)
#define B digitalRead(4)
#define C digitalRead(3)
void setup() {
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(2, OUTPUT);
}
void loop() {
    digitalWrite(2, B & !C | A & !C);
}