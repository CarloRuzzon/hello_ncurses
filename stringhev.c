#include<stdio.h>
#include<time.h>
#include<ncurses.h>

int main(){
  struct timespec time;
  time.tv_sec=0;
  time.tv_nsec=700*1000*1000;

  initscr();
  
  curs_set(0);

  move(15, 4);
  addstr("1 stringa");
  refresh();
  nanosleep(&time, NULL);
  

  move(10, 20);
  addstr("2 stringa");
  refresh();
  nanosleep(&time, NULL);
  

  move(5, 4);
  addstr("3 stringa");
  refresh();
  nanosleep(&time, NULL);

  move(18,15);
  addstr("Inserisci un tasto per continuare:");
  getch();

  endwin();
  return 0;
}
