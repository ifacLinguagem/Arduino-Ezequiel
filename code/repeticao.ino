int pinoLed = 13;

void setup()
{
  pinMode(pinoLed, OUTPUT);
}

void loop()
{

  // variável i de controle é definidada com 0

  int i = 0;

  while (i < 3)
  { // enquanto o i for menor que 3 irá fazer

    digitalWrite(pinoLed, HIGH); // ligar o led do pinoLed
    delay(1000);                 // após 1 segundo (1000 milisegundos)
    digitalWrite(pinoLed, LOW);  // desligando o led
    delay(1000);                 // mais um atraso de 1 segundo
    i = i + 1;                   // atribua o i somando-o com 1
  }

  delay(5000); // espere 5 segundos para repetir
}