# Laboratorio 1 - Amplificador de Instrumentación Biomédico

Este repositorio contiene el código fuente para el generador de señal de prueba utilizado en el Laboratorio N.° 1 del curso de Instrumentación Biomédica I (UNMSM).

## Descripción
El código implementa un simulador de bioseñal utilizando un Arduino Mega. Genera una señal PWM continua modulada por una función senoidal a una frecuencia de 2 Hz, empleando temporización no bloqueante (`millis()`). Esta señal digital pasa luego por un filtro RC y un atenuador resistivo en hardware para emular la amplitud de una bioseñal real.

## Hardware utilizado
* Placa: Arduino Mega 2560
* Pin de salida PWM: Pin 2

## Advertencia de conexión
Para el correcto funcionamiento del circuito de acondicionamiento, es obligatorio conectar el pin **GND** del Arduino a la tierra común (GND) de la fuente dual del circuito analógico.

## Autores
* Eduardo Yanayaco Cochachin
* Rosa Manrique Sandoval
* Juan Alfaro Flores
* Andrea Girao Pebes
