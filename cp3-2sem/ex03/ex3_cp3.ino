
#define A digitalRead(5)
#define B digitalRead(4)
#define C digitalRead(3)
#define D digitalRead(2)

void setup()
{
    pinMode(1, OUTPUT); // LED
    pinMode(2, INPUT);  // Falha no circuito
    pinMode(3, INPUT);  // Bateria descarregada
    pinMode(4, INPUT);  // Botão de teste
    pinMode(5, INPUT);  // Falta de energia
}

void loop()
{
    digitalWrite(1, (A | B) & !(C | D));
}
