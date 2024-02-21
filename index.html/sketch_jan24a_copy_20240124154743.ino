//declaracao de variavel para numeros decimais
float sal_atual, novo_sal;

void setup() {
  //configuracao inicial do sistema
  //sera executada apenas no inicio

  sal_atual = 1200;

  //verificando o valor do salario com o comdicional
  if (sal_atual <= 500 && novo_sal > 0)
    (                              //inicio
       novo_sal  = novo_sal * 1.2);  //fim;
      else if ( novo_sal > 500)(
       novo_sal  = novo_sal * 1.1); else(novo_sal = -1);
      //iniciandoa comunicacao com o monitor serial
  Serial.begin (9600);
}

void loop() {
  // codigo que sera execultado repentinamente
  //Serial.print("hoje e o ultimo dia de janeiro !!!");  // mostra o monitor
  delay(1000); //espera 1 segundo antes de seguir o loop
}

(
  Serial.print(novo salario: *);
  Serial.println(novo_sal);
  Serial.println(..............)
  delay(1000) //agora 1 segundo antes de seguir o loop;
)