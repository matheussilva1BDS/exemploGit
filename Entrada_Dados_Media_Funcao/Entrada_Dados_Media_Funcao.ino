//declaracao das variaveis / numeros reais//
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //inicia a comunicacao com o Serial monitor
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  Serial.print("Digite a nota 1");

  // le o valor da nota1 //
  nota1 = aguardaEntrada();
  Serial.println(nota1);
  Serial.print("Digite a nota 2:");
  nota2 = aguardaEntrada();
  Serial.println(nota2);
  Serial.print("Digite a nota 3:");

  nota3 = aguardaEntrada();
  Serial.println(nota3);
  Serial.print("Digite peso 1:");

  peso1 = aguardaEntrada();
  Serial.println(peso1);
  Serial.print("Digite peso 2:");
  Serial.println(peso2);
  peso2 = aguardaEntrada();
  Serial.print("Digite peso 3:");

  peso3 = aguardaEntrada();
  Serial.println(peso3);
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("A media pomderada e: ");
  Serial.println(media);
  delay(500);
}
float aguardaEntrada() {
  while (Serial.available()) {
  }
  return Serial.parseFloat();
}
