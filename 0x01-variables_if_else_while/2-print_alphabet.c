/*
<<<<<<< HEAD
 *
 *  * File: 2-print_alphabet.c
 *
 *   * Auth: Samuel Kioko
 *
 *    */



#include <stdio.h>

#include <ctype.h>

=======
 * File: 2-print_alphabet.c
 * Auth: Samuel Kioko
 */

#include <stdio.h>
#include <ctype.h>
>>>>>>> 94ba04ba5359b136c34a780c13e6fdc4be26c5da
/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{
<<<<<<< HEAD

		int x = 'A';

				do {

							int low_x = tolower(x);



									putchar(low_x);



											x++;

												}

						while (x <= 'Z');

						putchar('\n');



					return (0);



=======
<<<<<<< HEAD
	int x = 'A';
		do {
		int low_x = tolower(x);

		putchar(low_x);

		x++;
	}
		while (x <= 'Z');
		putchar('\n');

	return (0);

=======
    char i;
    for (i='a';i<=z;++i);
     {
        putchar(i)
     }
     putchar('\n')
     return (0);
>>>>>>> a94166469a03ff9445c71bd5fd06b688ede55ba1
>>>>>>> 94ba04ba5359b136c34a780c13e6fdc4be26c5da
}
