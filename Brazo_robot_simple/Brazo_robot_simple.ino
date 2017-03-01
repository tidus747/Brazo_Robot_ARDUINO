// Proyecto Brazo Robot

#include <Servo.h> 
 
Servo myservo;  // creamos los objetos de los diferentes servos.
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;
Servo myservo_5;
 
int pos_myservo = 90;    // Definimos las posiciones iniciales del robot 
int pos_myservo_2 = 120;
int pos_myservo_3 = 90;
int pos_myservo_4 = 30;
int pos_myservo_5 = 90;

int next_pos_myservo=90;
int next_pos_myservo_2=120;
int next_pos_myservo_3=90;
int next_pos_myservo_4=30;
int next_pos_myservo_5=90;


//Definimos los limites de movimiento del robot

int myservo_lim_1 = 120;
int myservo_lim_2 = 30;

int myservo_2_lim_1 = 160;
int myservo_2_lim_2 = 90;

int myservo_3_lim_1 = 120;
int myservo_3_lim_2 = 50;

int myservo_4_lim_1 = 90;
int myservo_4_lim_2 = 20;

int myservo_5_lim_1 = 95;
int myservo_5_lim_2 = 40;



int print_sel_servo = 0;
int print_mov_servo = 0;


int num_servo = 0;
int mov_ter = 0;

 
void setup() 
{ 
  
  Serial.begin(9600); //Iniciamos la comunicacion serial
  
  // Definicion del servo de la base
  myservo.attach(9,500,2500);  // attaches the servo on pin 9 to the servo object 
  myservo.write(pos_myservo); //Lo giramos a su posicion inicial
  
  myservo_2.attach(10,500,2500);  
  myservo_2.write(pos_myservo_2);
  delay(200);
  
  myservo_3.attach(8,500,2500);  
  myservo_3.write(pos_myservo_3);
  delay(200);
  
  myservo_4.attach(7,500,2500);  
  myservo_4.write(pos_myservo_4);
  delay(200);
  
  myservo_5.attach(6,500,2500);  
  myservo_5.write(pos_myservo_5);
  
  

  delay(1000);
  
  
} 
 
 
void loop() { 
  // Apertura y cierre de la pinza
  
  // Definicion del servo de la base

  myservo.write(45); //Lo giramos a su posicion inicial

  myservo_2.write(100);
  delay(200);
  

  myservo_3.write(70);
  delay(200);
  
 
  myservo_4.write(80);
  delay(200);
  
  myservo_5.write(50);
  
  
  delay(5000);
  
  myservo_5.write(pos_myservo_5);
  

  myservo.write(pos_myservo); //Lo giramos a su posicion inicial
  

  myservo_2.write(pos_myservo_2);
  delay(200);
 
  myservo_3.write(pos_myservo_3);
  delay(200);

  myservo_4.write(pos_myservo_4);
  delay(200);
  
  
  
  
  
  
}
  

    

  
