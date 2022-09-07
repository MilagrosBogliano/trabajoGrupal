/* Nicolas Amiano
	Jesus Libert
    Ernesto Huerta
    Leandro Ayala
    Matias Diaz
    Ignacio Amore
    Milagros Bogliano
    ingrid Ely
    Daniel Caceres
    Priscila Benitez
    sndres cruz
    Juan Coronel
*/
#define LED_BUILTIN 7 
#define LED_BUILTIN 2
#define LED_BUILTIN 4
#define LED_BUILTIN 5
#define LED_BUILTIN 6
#define LED_BUILTIN 9
#define LED_BUILTIN 8


#define LED_ROJO 12
#define LED_AMARILLO 11
#define LED_VERDE 10
#define TIEMPOS 1000

void prenderYApagarLed (int luz, int tiempos);
void encenderApagarDos(int pin1,int pin2,int tiempo);
void encenderApagarCuatro(int pin1,int pin2,int pin3,int pin4, int tiempo);
void encenderApagarCinco(int pin1,int pin2,int pin3,int pin4,int pin5, int tiempo);
void encenderApagarSeis(int pin1,int pin2,int pin3,int pin4,int pin5,int pin6, int tiempo);

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(A0, OUTPUT);
}



void loop()
{
  digitalWrite(A0, HIGH);
  delay(1000); 
  digitalWrite(A0, LOW);
  delay(1000);
  prenderYApagarLed (LED_ROJO, TIEMPOS);
  
  
  
  //Ely
  	encenderApagarCinco(7,9,8,4,5,250);//5
	encenderApagarCuatro(9,8,2,4,250);//4
	encenderApagarCinco(7,2,8,4,5,250);//3
	encenderApagarCinco(7,2,8,6,5,250);//2
   	prenderYApagarLed (LED_AMARILLO, TIEMPOS);
	encenderApagarDos(2,4,250);//1
	encenderApagarSeis(7,2,4,5,6,9,250);//0
  	prenderYApagarLed (LED_VERDE, TIEMPOS);
}

void prenderYApagarLed (int luz, int tiempos)
{
  digitalWrite(luz, HIGH);
  delay(tiempos);
  digitalWrite(luz, LOW);
  delay(tiempos);
}
//Funciones

void encenderApagarDos(int pin1,int pin2,int tiempo)
{
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  delay(tiempo); 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  delay(tiempo); 
}    

void encenderApagarCuatro(int pin1,int pin2,int pin3,int pin4, int tiempo)
{
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(tiempo); 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(tiempo); 
}
void encenderApagarCinco(int pin1,int pin2,int pin3,int pin4,int pin5, int tiempo)
{
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(tiempo); 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  delay(tiempo); 
}
void encenderApagarSeis(int pin1,int pin2,int pin3,int pin4,int pin5,int pin6, int tiempo)
{
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  digitalWrite(pin6, HIGH);
  delay(tiempo); 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  delay(tiempo); 
}

