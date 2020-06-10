/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hardware.h
 * Author: axel
 *
 * Created on 7 de junio de 2020, 13:23
 */

#ifndef HARDWARE_H
#define HARDWARE_H

// Microsegundos a milisegundos
#define USEC2MS(n) ((n)*1000)

/*******************************************************************************
 * Función: RPI_export_pin
 * Descripcción: Realiza un export en los puertos de la Raspberry para su poste-
 * rior utilización.
 * 
 ******************************************************************************/
void RPI_export_pin(void);

/*******************************************************************************
 * Función: RPI_set_direction
 * Descripcción: Fija en que direccion deseo que esten seteados los pines
 * 
 ******************************************************************************/

void RPI_set_direction(void);

/*******************************************************************************
 * Función: RPI_print_led
 * Descripcción: activa los leds en base a su estado en el puerto.
 * 
 ******************************************************************************/
void RPI_print_led(void);

/*******************************************************************************
 * Función: RPI_unexport_pin
 * Descripcción: Realiza un unexport en los puertos de la Raspberry para liberar
 * lo para otros tareas.
 * 
 ******************************************************************************/
void RPI_unexport_pin(void);
#endif /* HARDWARE_H */

