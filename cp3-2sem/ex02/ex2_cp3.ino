
#define A digitalRead(5)
#define B digitalRead(4)
#define C digitalRead(3)
#define D digitalRead(2)

void setup()
{
    pinMode(1, OUTPUT); // LED
    pinMode(2, INPUT);  // Alarme
    pinMode(3, INPUT);  // Sistema bloqueado
    pinMode(4, INPUT);  // Biometria
    pinMode(5, INPUT);  // Cartão
}

void loop()
{
    digitalWrite(1, (A | B) & !(C | D));
}
