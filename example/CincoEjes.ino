#include <Arduino.h>
#include "constantes.h"

//#include <Jormi_Pulsador.h>
//#include <Jormi_Led.h>
#include <Jormi_Depura.h>
#include "Jormi_5Direcciones.h"


/*
 * Define objetos y variables necesarias
 */
//Jormi_Pulsador botoncillo(PIN_PULSADOR);
//Jormi_Led miled(PIN_LED);           
Jormi_Depura mensaje;
Jormi_CincoEjes joystick(PIN_UP, PIN_DOWN, PIN_LEFT, PIN_RIGHT, PIN_MID, PIN_SET, PIN_RESET);


/*
 * ********   S E T U P   ***************
 */
 
void setup() {
//  botoncillo.init();
//  miled.init();
	Serial.begin(9600);
	
	mensaje.texto("loop");
	delay(1000);    
}

/*
 * ********   L O O P   ***************
 */

void loop() {

	joystick.update();
	//joystick.informacion();
	
	//mensaje.binario("estado",joystick.estado());
	
	if(joystick.arriba())
		mensaje.texto("arriba");

	if(joystick.abajo())
		mensaje.texto("abajo");

	if(joystick.izquierda())
		mensaje.texto("izquierda");

	if(joystick.derecha())
		mensaje.texto("derecha");

	if(joystick.centro())
		mensaje.texto("centro");

	if(joystick.set())
		mensaje.texto("set");

	if(joystick.reset())
		mensaje.texto("reset");

	delay(500);
}