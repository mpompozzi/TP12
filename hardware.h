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
/*******************************************************************************
 * Funcion:RPI_export_pin
 * Descripcción: Realiza un 
 * 
 ******************************************************************************/

void RPI_export_pin(void);

void RPI_set_direction(void);

void RPI_print_led(void);

void RPI_unexport_pin(void);
#endif /* HARDWARE_H */

