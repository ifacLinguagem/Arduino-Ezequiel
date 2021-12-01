int pinoLed = 13;

void setup()
{
  pinMode(pinoLed, OUTPUT);
}

void loop()
{

  /* 

  Se o pinoLed for igual a 13 > faça 

  	ligue o pinoLed 

  termine 

  Senão > faça 

  	desligue o pinoLed 

  termine 

  */

  // início da condição com o if (se)
  if (pinoLed == 13)
  {
    // executa essa linha se verdade
    digitalWrite(pinoLed, HIGH);
  }
  else
  {

    // senão execute essa
    digitalWrite(pinoLed, LOW);
  }
}