int PinoTrigger = 7; // Pino que irá transmitir a distancia
int PinoEcho = 6;    // Pina que irá receber a distancia

int duracao = 0;
int distancia = 0;

// Pino dos 2 motores
int motor1 = 3;
int motor2 = 2;

void setup()
{
  // Configurando o tipo de dados transmitido pelos pinos digitais
  pinMode(PinoTrigger, OUTPUT);
  pinMode(PinoEcho, INPUT);

  // Definindo o modo do pino dos motores
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);

  Serial.begin(9600);
  // definindo a taxa de bits do serial para 9600
}

void loop()
{
  // Ligando o pino que transmite a distancia
  digitalWrite(PinoTrigger, HIGH);
  // Ele dura 10us (microsegundos) para calcular a distancia de cada pulso
  delayMicroseconds(10);
  // após esse intervalo o desligamos
  digitalWrite(PinoTrigger, LOW);

  // O pulseIn captura a duração de um pulso no pino que recebe a informação do mesmo
  duracao = pulseIn(PinoEcho, HIGH); // A variável duracao carrega essa duração
  // quando uma onda ultrassônica percorre o ar em uma velocidade de 343,5 m/s
  // devemos passar para microsegundos, para realizar o calculo

  distancia = duracao * 0.017175;
  
  // Verificando a distancia medida se ela for menor ou igual a 150
  if(distancia <= 150) {
    // ligando um motor e desligando outro, fazendo uma curva
  	digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
  } else {
    // senão ele apenas irá andar reto
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, HIGH);
  }
}