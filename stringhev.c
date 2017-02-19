#include<stdio.h>
#include<time.h>
#include<ncurses.h>

int main(){
  struct timespec time;
  time.tv_sec=0;
  time.tv_nsec=700*1000*1000;

  initscr();
  
  move(15, 4);
  addstr("1 stringa");
  nanosleep(&time, NULL);
  refresh();

  move(10, 20);
  addstr("2 stringa");
  nanosleep(&time, NULL);
  refresh();

  move(5, 4);
  addstr("3 stringa");
  nanosleep(&time, NULL);

  refresh();
  getch();

  endwin();
  return 0;
}
