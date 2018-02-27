/***************************************************************
 *  organization : Automated Warehouse Robotics Team
 *  Developer    : Abdallah Mustafa
 ***************************************************************
 *Description About Team :
 Automated Warehouse Robotics project is a graduation project
 for university students in the last year studying
 in the Automatic Control and Computer Science Department
 at Faculty of Engineering,Tanta University.
  ***************************************************************
 *  Source File: config.h
 *  Description: libraries and frequency Macros config
 *  Date   :     22/02/2018
 **************************************************************/

#ifndef CONFIG_H_
#define CONFIG_H_


#ifndef F_CPU
#define F_CPU 1000000UL //1MHz Clock frequency
#endif  

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#endif /* CONFIG_H_ */