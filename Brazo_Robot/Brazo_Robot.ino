/* Copyright (C) 2017 Iván Rodríguez Méndez
This software is distributed under the GNU General Public
Licence (version 3 or later); please refer to the file
Licence.txt, included with the software, for details.
*/

// Control por serial del brazo robot

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
  if (print_sel_servo == 0){
    Serial.println("Introduce el numero del servo que quieres controlar");
    print_sel_servo = 1;
  }

  if(Serial.available() > 0) {
     num_servo = Serial.parseInt();

     switch (num_servo) {

       case 1:
       Serial.println("Servo de la base seleccionado:");
       while (mov_ter == 0){
         if (print_mov_servo == 0){
            Serial.println("  Introduce el giro para el servo que quieres realizar");
            print_mov_servo = 1;
         }
         if(Serial.available() > 0){
            next_pos_myservo = Serial.parseInt();
            Serial.print("    La posicion introducida es:");
            Serial.println(next_pos_myservo);
            if(next_pos_myservo>myservo_lim_2 && next_pos_myservo<myservo_lim_1) {
              myservo.write(next_pos_myservo); //Mueve el servo a la posición entrada (excepto si es 0)
              mov_ter = 1;
              print_sel_servo = 0;
              Serial.println("  Movimiento realizado!");
            }
            else {
              Serial.println("  El valor de movimiento para el servo no esta permitido, introduce otro valor!");
            }
          }
        }

         break;

        case 2:
        Serial.println("Segundo servo seleccionado:");
        while (mov_ter == 0){
         if (print_mov_servo == 0){
            Serial.println("  Introduce el giro para el servo que quieres realizar");
            print_mov_servo = 1;
         }
         if(Serial.available() > 0){
            next_pos_myservo_2 = Serial.parseInt();
            Serial.print("    La posicion introducida es:");
            Serial.println(next_pos_myservo_2);
            if(next_pos_myservo_2>myservo_2_lim_2 && next_pos_myservo_2<myservo_2_lim_1) {
              myservo_2.write(next_pos_myservo_2); //Mueve el servo a la posición entrada (excepto si es 0)
              mov_ter = 1;
              print_sel_servo = 0;
              Serial.println("  Movimiento realizado!");
            }
            else {
              Serial.println("  El valor de movimiento para el servo no esta permitido, introduce otro valor!");
            }
          }
        }
          break;

         case 3:

         Serial.println("Tercer servo seleccionado:");
         while (mov_ter == 0){
         if (print_mov_servo == 0){
            Serial.println("  Introduce el giro para el servo que quieres realizar");
            print_mov_servo = 1;
         }
         if(Serial.available() > 0){
            next_pos_myservo_3 = Serial.parseInt();
            Serial.print("    La posicion introducida es:");
            Serial.println(next_pos_myservo_3);
            if(next_pos_myservo_3>myservo_3_lim_2 && next_pos_myservo_3<myservo_3_lim_1) {
              myservo_3.write(next_pos_myservo_3); //Mueve el servo a la posición entrada (excepto si es 0)
              mov_ter = 1;
              print_sel_servo = 0;
              Serial.println("  Movimiento realizado!");
            }
            else {
              Serial.println("  El valor de movimiento para el servo no esta permitido, introduce otro valor!");
            }
          }
        }
        break;

        case 4:

         Serial.println("Cabeceo de la pinza seleccionado:");
         while (mov_ter == 0){
         if (print_mov_servo == 0){
            Serial.println("  Introduce el giro para el servo que quieres realizar");
            print_mov_servo = 1;
         }
         if(Serial.available() > 0){
            next_pos_myservo_4 = Serial.parseInt();
            Serial.print("    La posicion introducida es:");
            Serial.println(next_pos_myservo_4);
            if(next_pos_myservo_4>myservo_4_lim_2 && next_pos_myservo_4<myservo_4_lim_1) {
              myservo_4.write(next_pos_myservo_4); //Mueve el servo a la posición entrada (excepto si es 0)
              mov_ter = 1;
              print_sel_servo = 0;
              Serial.println("  Movimiento realizado!");
            }
            else {
              Serial.println("  El valor de movimiento para el servo no esta permitido, introduce otro valor!");
            }
          }
        }

        break;

        case 5:

         Serial.println("Apertura de la pinza seleccionado:");
         while (mov_ter == 0){
         if (print_mov_servo == 0){
            Serial.println("  Introduce el giro para el servo que quieres realizar");
            print_mov_servo = 1;
         }
         if(Serial.available() > 0){
            next_pos_myservo_5 = Serial.parseInt();
            Serial.print("    La posicion introducida es:");
            Serial.println(next_pos_myservo_5);
            if(next_pos_myservo_5>myservo_5_lim_2 && next_pos_myservo_5<myservo_5_lim_1) {
              myservo_5.write(next_pos_myservo_5); //Mueve el servo a la posición entrada (excepto si es 0)
              mov_ter = 1;
              print_sel_servo = 0;
              Serial.println("  Movimiento realizado!");
            }
            else {
              Serial.println("  El valor de movimiento para el servo no esta permitido, introduce otro valor!");
            }
          }
        }



        break;



       default:

       Serial.println("El servo seleccionado no existe!!");


       break;

     }


   }
   delay(500);
   print_mov_servo = 0;
   mov_ter = 0;
}
