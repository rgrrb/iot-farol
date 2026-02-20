// C++ code

  int farol = 12;

void setup()
{
  pinMode(farol, OUTPUT);//FUNÇÃO DE SAÍDA DO PINO 13

}

void loop()
{
  digitalWrite(farol, HIGH);//Acende o led
  delay(2000);
  digitalWrite(farol, LOW);//Apaga o led
  delay(400);

}  