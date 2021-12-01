int pinos[4] = {13, 12, 11, 10};

void setup()
{
  for (int i = 0; i <= 3; i++)
  {
    pinMode(pinos[i], OUTPUT);
  }
}

void piscarLed(int pino, int tempo)
{
  digitalWrite(pino, HIGH);
  delay(tempo);
  digitalWrite(pino, LOW);
  delay(tempo);
}

void loop()
{
  noInterrupts();
  piscarLed(pinos[0], 10000);
  piscarLed(pinos[1], 2000);
  piscarLed(pinos[2], 500);
  piscarLed(pinos[3], 6000);
}
