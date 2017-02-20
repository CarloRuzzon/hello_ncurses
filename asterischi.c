#include<stdio.h>
#include<ncurses.h>
#include<time.h>

int main(){
  struct timespec intervallo;
  intervallo.tv_sec=0;
  intervallo.tv_nsec=700*1000*1000;

  initscr();
  curs_set(0);
  move(3,3);
  addstr("*");
  refresh();
  nanosleep(&intervallo, NULL);

  move(3,3);
  addstr(" ");
  refresh();
  nanosleep(&intervallo, NULL);

  move(3,3);
  addstr("*");
  refresh();
  nanosleep(&intervallo, NULL);

  move(3,3);
  addstr(" ");
  refresh();
  nanosleep(&intervallo, NULL);

  move(3,3);
  addstr("*");
  refresh();
  nanosleep(&intervallo, NULL);
       
  move(3,3);
  addstr(" ");
  refresh();
  nanosleep(&intervallo, NULL);
  
  move(3,3);
  addstr("*");
  refresh();
  nanosleep(&intervallo, NULL);
         
  move(3,3);
  addstr(" ");
  refresh();
  nanosleep(&intervallo, NULL);
  
  move(3,3);
  addstr("*");
  refresh();
  nanosleep(&intervallo, NULL);
         
  move(3,3);
  addstr(" ");
  refresh();
  nanosleep(&intervallo, NULL);
  
  endwin();
  return 0;
}
