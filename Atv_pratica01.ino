//Código da atividade Prática 01
//Código para ler o botão e o touch e enquanto clicar em ambos] ligar o led
#define touch T0
int touch_value=100;
const int LED = 21;
const int botao = 23;
int estado = 0;

void setup(){
  //pinMode(ledPin, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(115200);
}

void loop(){
  touch_value = touchRead(touch);
  estado=digitalRead(botao);
  Serial.println(touch_value);

  if(estado==1 && touch_value<50){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
  delay(1000);
}
