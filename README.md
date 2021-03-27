    Jormi_CincoEjes.h
	  Librería de manejo del modulo 5 direcciones + reset + set
    v0.1	20210214	Multitask	
	  IMPORTANTE: COM puesto a GND con resistencia 10K como pull down Cuando el boton se pulsa se lee Vcc, sino esta pulsado lee GND

    Jormi_CincoEjes(byte pinUP, byte pinDWN, byte pinLFT, byte pinRHT, byte pinMID, byte pinSET, byte pinRST);
        Constructor


    byte  estado()
      Devuelve el byte que contiene la lectura de pines


    bool arriba()


	Arriba 
  Return True si pulsado UP


/*	
	Abajo
	True si pulsado DWN
*/
bool abajo()


/*	
	Izquierda
	True si pulsado LFT
*/
bool izquierda()


/*	
	Derecha
	True si pulsado RHT
*/
bool derecha()


/*	
	Centro
	True si pulsado MID
*/
bool centro()


/*	
	Set
	True si pulsado SET
*/
bool set()


/*	
	Reset
	True si pulsado RST
*/
bool reset()


/*
	Update
*/
void update()


/*
	Información
	Muestra en ventana de depuración info de las variables
*/
void informacion()
