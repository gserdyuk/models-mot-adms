#ifndef _WORDLIST_H
#define _WORDLIST_H


/* Doubly linked lists of words. */
struct wordlist {
    char *wl_word;
    struct wordlist *wl_next;
    struct wordlist *wl_prev;
} ;

typedef struct wordlist wordlist;

int wl_length(wordlist *wlist);
void wl_free(wordlist *wlist);
wordlist * wl_copy(wordlist *wlist);
wordlist * wl_splice(wordlist *elt, wordlist *list);
void wl_print(wordlist *wlist, FILE *fp);
wordlist * wl_build(char **v);
char ** wl_mkvec(wordlist *wl);
wordlist * wl_append(wordlist *wlist, wordlist *nwl);
wordlist * wl_reverse(wordlist *wl);
char * wl_flatten(wordlist *wl);
wordlist * wl_nthelem(int i, wordlist *wl);
void wl_sort(wordlist *wl);
wordlist * wl_range(wordlist *wl, int low, int up);


/* For quoting individual characters. '' strings are all quoted, but
 * `` and "" strings are maintained as single words with the quotes
 * around them.  Note that this won't work on non-ascii machines.  */
#define quote(c)    ((c) | 0200)
#define strip(c)    ((c) & 0177)


#endif
