/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 *  @struct alumno_s alumnos.h inc/alumnos.h
 *  @brief Apellido, nombre y documento del alumno.
 *
 */
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/*! 
 *  @fn bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno)
 *  @brief: Imprime los datos de un alumno.
 *  @param cadena: La cadena a serializar.
 *  @param espacio: El tamaño de la cadena a serializar.
 *  @param alumno: El alumno a serializar.
 *  @return resultado: El resultado booleano. True: exitoso, False: fallo.
 * 
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/*! 
 *  @fn bool SerializarAlumnos(char * cadena, size_t espacio)
 *  @brief: Imprime los datos de los alumnos
 *  @param cadena: La cadena a serializar.
 *  @param espacio: El tamaño de la cadena a serializar.
 *  @return resultado: El resultado booleano. True: exitoso, False: fallo.
 * 
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
