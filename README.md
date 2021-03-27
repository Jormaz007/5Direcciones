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
		Return true si pulsado UP


	bool abajo()
		Abajo
		Return true si pulsado DWN


	bool izquierda()
		Izquierda
		Return true si pulsado LFT


	bool derecha()
		Derecha
		Return true si pulsado RHT


	bool centro()
		Centro
		Return true si pulsado MID


	bool set()
		Set
		Return true si pulsado SET


	bool reset()
		Reset
		Return true si pulsado RST


	update()
		Update del loop


	informacion()
		Muestra en ventana de depuración (puerto serie) info de las variables
