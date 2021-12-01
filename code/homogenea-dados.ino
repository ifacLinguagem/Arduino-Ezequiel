int pinos[4] = {13, 12, 11, 10}; // agora inicia uma matriz "pinos" com 4 posições e depois esse array foi alimentado com números de pinos conectados

void setup()
{
  for (int i = 1; i <= 4; i++)
  {
    pinMode(pinos[i], OUTPUT);
  }
}

void loop()
{
  for (int i = 1; i <= 4; i++)
  {
    digitalWrite(pinos[i], HIGH);
  }
}
