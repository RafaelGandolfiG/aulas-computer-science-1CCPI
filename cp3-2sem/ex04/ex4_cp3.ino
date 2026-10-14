
#define A digitalRead(5)
#define B digitalRead(4)
#define C digitalRead(3)
#define D digitalRead(2)

void setup()
{
    pinMode(1, OUTPUT); // LED (aquecedor)
    pinMode(2, INPUT);  // Superaquecimento
    pinMode(3, INPUT);  // Porta aberta
    pinMode(4, INPUT);  // Aquecimento manual
    pinMode(5, INPUT);  // Temperatura baixa
}

void loop()
{
    digitalWrite(1, (A | B) & !(C | D));
}
