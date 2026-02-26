#Preview

## 🎬 Demonstração em Vídeo

!["Demonstração do "Hello World da área de IoT"](./img/IMG_0220.mp4)


##Código

```
int farol = 13;

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
```
