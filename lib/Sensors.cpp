#include <Arduino.h>
#include "Sensors.h"

//método para setar estado do sensor de movimento
void Sensors::setMoviment(int senmov){
	movmnt = senmov;
}

//método retorna estado do sensor de movimento
int Sensors::getMoviment(void){
	return movmnt;
}