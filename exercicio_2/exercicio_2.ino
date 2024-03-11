void setup() {
  Serial.begin(9600);
}
void loop() {
  float sal, perc, aumento, novosal;
  Serial.println("digite o salario do funcionario");
  while (!Serial.available())
    ;
  sal = Serial.parseFloat();

  Serial.println("digite o percentual de aumento");
  while (!Serial.available())
    ;
  perc = Serial.parseFloat();
  aumento = sal * perc / 100;
  novosal = sal + aumento;
  Serial.print("valor do aumento e:");
  Serial.println(aumento);
  Serial.print("novo salario do funcionario e:");
  Serial.println(novosal);
  delay(1000);
}