#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/* 0-strcat.c */
char *_strcat(char *dest, char *src);

/* 1-strncat.c */
char *_strncat(char *dest, char *src, int n);

/* 2-strncpy.c */
char *_strncpy(char *dest, char *src, int n);

/* 3-strcmp.c */
int _strcmp(char *s1, char *s2);

/* 4-rev_array.c */
void reverse_array(int *a, int n);

/* 5-string_toupper.c */
char *string_toupper(char *);

/* 6-cap_string.c */
char *cap_string(char *);

/* 7-leet.c */
char *leet(char *);

/* 8-rot13.c */
char *rot13(char *);

/* 101-magic.c */
void print_number(int n);

/* 102-infinite_add.c */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* 103-print_buffer.c */
void print_buffer(char *b, int size);

int _strlen(char *); 

#endif
