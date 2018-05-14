#include<stdio.i>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;
int mon1, mon2, d1, d2;
int h1, h2, min1, min2;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
void datecmp(void);
void datecmp(void);
void timecmp(void);

int main(void)
{
 filestat1();
 filestat2();
 filetime1();
 filetime2();
 sizecmp();
 blockcmp();
 datecmp();
 timecmp();
 }

 void filestat1(void){
 }

 void filestat2(void){
}

 void filetime1(void){
 }

 void filetime2(void){
 }

 void sizecmp(void){
 }

 void blockcmp(void){
 }

 void datecmp(void){	
  int result = 0;
	if(d1 < d2)
		result = 1;
	else if(d1 > d2)
		result = 2;
  
	if(mon1 < mon2)
		result = 1;
	else if(mon1 > mon2)
		result = 2;

	if(!result)
		printf("same time\n");
	else if(result == 1)
		printf("text1 is younger\n");
	else
		printf("text2 is younger\n");
 }

 void timecmp(void){
  	int result = 0;
	if(min1 < min2)
		result = 1;
	else if(min1 > min2)
		result = 2;
  
	if(h1 < h2)
		result = 1;
	else if(h1 > h2)
		result = 2;

	if(!result)
		printf("same date\n");
	else if(result == 1)
		printf("text2 is younger\n");
	else
		printf("text2 is younger\n");
 }
