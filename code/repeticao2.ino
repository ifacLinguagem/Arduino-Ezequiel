int pinoLed = 13;

void setup()
{
  pinMode(pinoLed, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 3; i++)
  { // cria a variável i atribuindo o 0, verifica se o i é menor que 3 e depois que executa do código incrementa o i com mais 1
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }

  delay(5000);
}