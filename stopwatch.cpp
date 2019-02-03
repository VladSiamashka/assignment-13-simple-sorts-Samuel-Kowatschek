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

float begin;    //global variable for the begin of the process
float end;     //global variable for the end of the process

void start_stopwatch(){
    begin = clock();
}
float elapsed_time(){
    if(end < begin)
        return clock() - begin;
    return end - begin;
}
void stop_stopwatch(){
    end = clock();
}
