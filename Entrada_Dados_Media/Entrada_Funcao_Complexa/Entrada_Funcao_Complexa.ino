//declaracao das variaveis / numeros reais//
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //inicia a comunicacao com o Serial monitor
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  Serial.print("Digite a nota 1");
  //while = repetiçao//
  while (Serial.available() == 0) {
    //agrarda a entrada//
  }
  // le o valor da nota1 //
  nota1 = Serial.parseFloat();
  Serial.println(nota1);
  Serial.print("Digite a nota 2:");
  while (Serial.available() == 0) {
  }
  nota2 = Serial.parseFloat();
  Serial.println(nota2);
  Serial.print("Digite a nota 3:");
  while (Serial.available() == 0) {
  }
  nota3 = Serial.parseFloat();
  Serial.println(nota3);
  Serial.print("Digite peso 1:");
  while (Serial.available() == 0) {
  }
  peso1 = Serial.parseFloat();
  Serial.println(peso1);
  Serial.print("Digite peso 2:");
  while (Serial.available() == 0) {
  }
  Serial.println(peso2);
  peso2 = Serial.parseFloat();
  Serial.print("Digite peso 3:");
  while (Serial.available() == 0) {
  }
  peso3 = Serial.parseFloat();
  Serial.println(peso3);
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("A media pomderada e: ");
  Serial.println(media, 1);
  delay(500);

}
float aguardaEntradaNumerica() {
  while (Serial.available() > 0) {
  }
  while(!isdigit(Serial.peek()) && Serial.peek() != '-') {
  Serial.read();
  while(Serial.available()== 0){

  }
  }

  return Serial.parseFloat();
}