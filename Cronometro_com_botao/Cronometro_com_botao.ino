int verde = 3;
int botao = 2;
int tempo = 5000;

void setup() {
  // put your setup code here, to run once:
pinMode (verde, OUTPUT);
pinMode (botao, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int estado = digitalRead (botao);

if (estado == 1){
 delay (tempo);
 digitalWrite (verde, HIGH);
 delay (1000);
 digitalWrite (verde, LOW);
 tempo += 5000;
}
}
