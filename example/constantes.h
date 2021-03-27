//#define PIN num_pin_conectado
//const tipo_constante nombre_constante = valor_constante;
//const float pi = 3.14;


/*
 * Pines conectados
 *
 */
 
 
#define PIN_PULSADOR 10
#define PIN_LED 11
 
#define PIN_UP		2		//bit 0
#define PIN_DOWN	3		//1
#define PIN_LEFT	4		//2
#define PIN_RIGHT	5		//3
#define PIN_MID		6		//4
#define PIN_SET		7		//5
#define PIN_RESET	8		//6
	//El bit 7 lo dejamos para indicar COM a 1 si Vcc o 0 si GND

 
 /*
  * Constantes del programa
  *
  */
  
  
/* ************************************************************ */
/*
Name
	Five direction navigation button module  
	MH-CD42
Voltaje
	2.0 - 9.0 V
	
Pines (7 en total)
	UP		PIN_UP
	DWN		PIN_DOWN
	LFT		PIN_LEFT
	RHT		PIN_RIGHT
	MID		PIN_MID
	SET		PIN_SET
	RST		PIN_RESET
	COM		GND/VCC 
	
	*/