int ledVermelho = 3;
int ledVerde = 4;
int ledAmarelo = 5;
int button = 10;
int buzzer = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledVerde, HIGH);
  int sinal = digitalRead(button);
  if(sinal == 0 ){
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    delay(5000);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    tone(buzzer, 3000, 1000);
    delay(5000);
    digitalWrite(ledVermelho, LOW);
  }
}
