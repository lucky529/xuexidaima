#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_count 10
void InitBoard(char arr[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char arr[ROWS][COLS],int row,int col);
void Setmine(char arr[ROWS][COLS],int row,int col);
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int GetmineCount(char arr[ROWS][COLS],int x,int y);
