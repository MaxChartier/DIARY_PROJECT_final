#ifndef CELL_H
# define CELL_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>

#define SIZE 4
#define true 1
#define false 0

typedef int bool;

typedef struct s_d_cell
{
    int value;
    int level;
    struct s_d_cell **next;
} t_d_cell;

typedef struct s_d_list
{
    int maxlevel;
    t_d_cell **head;
} t_d_list;

t_d_cell* createCell(int value, int levels);
t_d_list* createEmptyList(int maxlevel);
void insertHead(t_d_list* list, int value, int levels);
void displayLevel(t_d_list* list, int level);
// void sortedInsert(t_d_list* list, int value, int levels);
void displayALLlevel(t_d_list* list);

#endif