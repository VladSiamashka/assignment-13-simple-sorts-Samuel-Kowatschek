/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: 13
 * File:			stopwatch.cpp
 * Author(s):		Kowatschek Samuel
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

float begin;
float end;

void start_stopwatch(){
    begin = clock();
}
float elapsed_time(){
    return end-begin;
}
void stop_stopwatch(){
    end = clock();
}