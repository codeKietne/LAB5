/*
 * UART_Communication.h
 *
 *  Created on: Nov 29, 2024
 *      Author: Nguyen Quoc Kiet
 */

#ifndef INC_UART_COMMUNICATION_H_
#define INC_UART_COMMUNICATION_H_

#include "main.h"
#include "timer.h"
#include "stdio.h"
#include "stdlib.h"
#include "global.h"
#include "fsm_command_parser.h"

void uart_communiation_fsm(ADC_HandleTypeDef hadc1, UART_HandleTypeDef huart2);

#endif /* INC_UART_COMMUNICATION_H_ */
