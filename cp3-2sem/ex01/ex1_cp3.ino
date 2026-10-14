
#define A digitalRead(5)
#define B digitalRead(4)
#define C digitalRead(3)
#define D digitalRead(2)

void setup()
{
    pinMode(1, OUTPUT); // LED
    pinMode(2, INPUT);  // Superaquecimento
    pinMode(3, INPUT);  // Emergência
    pinMode(4, INPUT);  // Proteção mecânica
    pinMode(5, INPUT);  // Partida
}

void loop()
{
    digitalWrite(1, A & B & !(C | D));
}
