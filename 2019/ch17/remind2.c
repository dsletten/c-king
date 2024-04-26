/*
 *
 *   File:
 *      remind2.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200610  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_REMINDERS 50
#define MSG_LENGTH 60
#define DAY_LABEL 3
#define EXIT 0

int read_line(char s[], int n);

int main(void) {
  char *reminders[MAX_REMINDERS];
  int n_reminders = 0;

  while ( true ) {
    if ( n_reminders == MAX_REMINDERS ) {
      printf("-- No space left --\n");
      break;
    } else {
      printf("Enter day and reminder: ");
      int day;
      scanf("%2d", &day);

      if ( day == EXIT ) {
        break;
      } else {
        char day_str[DAY_LABEL];
        sprintf(day_str, "%2d", day);

        char msg_str[MSG_LENGTH+1];
        read_line(msg_str, MSG_LENGTH); // Leading space that separates date from msg is preserved.

        int i;
        for (i = 0; i < n_reminders; i++) {
          if ( strcmp(day_str, reminders[i]) < 0 ) {  // Figure out sorting procedure... ^-----
            break;
          }
        }

        for (int j = n_reminders; j > i; j--) {
          reminders[j] = reminders[j-1];
        }

        reminders[i] = malloc(2 + strlen(msg_str) + 1);
        if ( reminders[i] == NULL ) {
          printf("-- Out of memory! --\n");
          break;
        }

        strcpy(reminders[i], day_str);  // Safe here 
        strcat(reminders[i], msg_str);

        n_reminders++;
      }
    }
  }

  printf("\nDay Reminder\n");

  for (int i = 0; i < n_reminders; i++) {
    printf(" %s\n", reminders[i]);
  }

  exit(EXIT_SUCCESS);
}

int read_line(char s[], int n) {
  char ch;
  int i = 0;

  while ( (ch = getchar()) != '\n' ) {
    if ( i < n ) {
      s[i++] = ch;
    }
  }

  s[i] = '\0';
  return i;
}
