
#ifndef CONFIG_H
#define CONFIG_H

#pragma once
#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#ifndef DEBUG
//#define DEBUG 1 // uncomment this line to enable serial diagnostic messages
#endif

#include <OneWire.h>
#include <DallasTemperature.h>

#define BUFFER_SIZE				100
#define SLEEP_DELAY_IN_SECONDS  60
#define ONE_WIRE_BUS            D4      // DS18B20 pin
#define LEDPIN_Wifi				D1
#define LEDPIN_MQTT				D2
#define LEDON					1
#define LEDOFF					0



#endif // !CONFIG_H
