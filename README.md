# Preview

## 🎬 Demonstração em Vídeo

<video src="./img/IMG_0220.mp4" controls width="600"></video>

## Código

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
