/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <cstdlib>
#include "general.h"
#include <time.h>

void bubble_sort(int numbers[], int len){

}
void insertion_sort(int numbers[], int len){

}
void init_random(int numbers[], unsigned long len)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < len; i++)
		numbers[i] = random();
}