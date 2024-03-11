float Sal, Novosal;

void setup() {
  Serial.begin(9600);
 }
void loop() {
  Serial.print("digite o salario:");
  while (!Serial.available());
  Sal = Serial.parseFloat();
  Serial.println(Sal);
  Novosal = Sal * 1.25;
  Serial.print("O novo salario com aumento de 25% e:");
  Serial.println(Novosal);
}