int pinSalidaRojo = 9, pinSalidaVerde = 10, 
pinSalidaAzul = 11, pinEntrada = 3, valor = 0;
int brillo= 0;                                               //Variable de brillo inicia en 0
int variacion= 3;                                            //Variable de incremento configurada de 5 en 5

void setup() {                                               // configuración preparatoria
  pinMode(pinEntrada,INPUT);                                 // entrada analógica
  pinMode(pinSalidaRojo,OUTPUT);                             // salida modulada para rojo
  pinMode(pinSalidaVerde,OUTPUT);                            // salida modulada para verde
  pinMode(pinSalidaAzul,OUTPUT);    
  Serial.begin(9600);
}


void loop()
{                                                           //inicio programa
 valor = analogRead(pinEntrada);
 valor = map(valor,0,1023,1,3);
 Serial.println(valor);
 //delay(500);
 //valor = 7;
 
 switch(valor)
 {
 case 1:
 analogWrite(pinSalidaRojo, brillo); 
 brillo = brillo + variacion;
 if(brillo== 0 || brillo== 255)
 variacion=-variacion;                                       //La variación se vuelve negativa
 delay(50);                                                  //Tiempo de incremento en el brillo
 break;
 
 case 2:
 analogWrite(pinSalidaVerde, brillo); 
 brillo = brillo + variacion;
 if(brillo== 0 || brillo== 255)
 variacion=-variacion;                                       //La variación se vuelve negativa
 delay(50);                                                  //Tiempo de incremento en el brillo
 break;
 
 case 3:
 analogWrite(pinSalidaVerde, brillo); 
 brillo = brillo + variacion;
 if(brillo== 0 || brillo== 255)
 variacion=-variacion;                                       //La variación se vuelve negativa
 delay(50);                                                  //Tiempo de incremento en el brillo
 break;
 
 default:
 
 analogWrite(pinSalidaRojo, brillo); 
 analogWrite(pinSalidaAzul, brillo); 
 analogWrite(pinSalidaVerde, brillo); 
 brillo = brillo + variacion;
 if(brillo== 0 || brillo== 255)
 variacion=-variacion;                                       //La variación se vuelve negativa
 delay(50);                                                  //Tiempo de incremento en el brillo
 break;
 }
 
 
 
 
 }                                                           //Fin programa
 
 
 //analogWrite(pinSalidaVerde, brillo);
 //analogWrite(pinSalidaAzul, brillo);
