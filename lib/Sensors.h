#ifndef SENSORS_H
#define SENSORS_H

#include <Arduino.h>

//declarando classe para status de sensores
class Sensors{

	//declarando métodos publicos para sensores
	public:
		//sensor movimento
		void setMoviment(int senmov);
		int getMoviment(void);

	private:
		//atributo privado para movimento
		int movmnt;

};
#endif
