/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
$Id: alloc.c,v 1.5 2005/05/21 15:56:20 sjborley Exp $
**********/

/*
 * Memory alloction functions
 */
#include <config.h>

#ifndef HAVE_LIBGC
#include <ngspice.h>
#include <stdio.h>
#include <memory.h>


/* Malloc num bytes and initialize to zero. Fatal error if the space can't
 * be tmalloc'd.   Return NULL for a request for 0 bytes.
 */

/* New implementation of tmalloc, it uses calloc and does not call bzero()  */

void *
tmalloc(size_t num)
{
  void *s;
    if (!num)
      return NULL;
    s = calloc(num,1);
    if (!s){
      fprintf(stderr,"malloc: Internal Error: can't allocate %ld bytes. \n",(long)num);
      exit(EXIT_BAD);
    }
    return(s);
}

void *
trealloc(void *ptr, size_t num)
{
  void *s;

  if (!num) {
    if (ptr)
      free(ptr);
    return NULL;
  }

  if (!ptr)
    s = tmalloc(num);
  else
    s = realloc(ptr, num);

  if (!s) {
    fprintf(stderr,"realloc: Internal Error: can't allocate %ld bytes.\n",(long)num);
    exit(EXIT_BAD);
  }
  return(s);
}



/* Original Berkeley Implementation */
/*
void *
tmalloc(size_t num)
{
     void *s;

    if (!num)
	return NULL;

    s = malloc((unsigned) num);
    if (!s) {
        fprintf(stderr, 
		"malloc: Internal Error: can't allocate %d bytes.\n", num);
        exit(EXIT_BAD);
    }

    bzero(s, num);

    return(s);
}

void *
trealloc(void *str, size_t num)
{
    void *s;

    if (!num) {
	if (str)
		free(str);
	return NULL;
    }

    if (!str)
	s = tmalloc(num);
    else
        s = realloc(str, (unsigned) num);

    if (!s) {
        fprintf(stderr, 
		"realloc: Internal Error: can't allocate %d bytes.\n", num);
        exit(EXIT_BAD);
    }
    return(s);
}

*/


void
txfree(void *ptr)
{
	if (ptr)
		free(ptr);
}

#endif
