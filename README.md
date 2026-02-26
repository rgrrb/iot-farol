# Preview

## 🎬 Demonstração em Vídeo

https://github.com/user-attachments/assets/dcb3ac13-15e7-4191-a7af-5b9b85c99618



### Explicação 

 Projeto para iniciantes, com a finalidade de demonstrar como funciona o básico de cada componente. Desenvolvido na primeira aula prática de IOT


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
