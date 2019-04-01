#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct process{
	int id;
	int arrival_time;
	int burst_time;
	int waiting_time;
	int turn_around_time;
	int priority;
	bool finished;
		};
struct process *ptr, *ready;
int n,i,total_time,rp=0;


void calculate_priority();
void set_to_zero();
void calculate_waiting_time();
void calculate_ready_queue();
void show();
void calculate_turn_around();
void process_execute();

void main()
{

	printf("Enter the number of process:-\t");
	scanf("%d",&n);