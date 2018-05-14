#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

int month1;
int hour1;
int day1;
int min1;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
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

void filestat1(void)
{
	char* File1 = "Text_File1";
	if (stat(File1, &stat1) < 0)
	{
		printf("Not exist %s\n", File1);
		exit(0);
	}
}

void filestat2(void)
{
	char* File2 = "Text_File2";
	if (stat(File2, &stat2) <0)
	{
		printf("Not exist %s\n", File2);
		exit(0);
	}
}

 void filetime1(void)
 {
	 time1 = localtime(&stat1.st_mtime);
	 month1 = time1->tm_mon;
	 day1 = time1->tm_mday;
	 hour1 = time1->tm_hour;
	 min1 = time1->tm_min;
 }

 void filetime2(void)
 {
	 time2 = localtime(&stat2.st_mtime);
	 mon2 = time2->tm_mon;
	 d2 = time2->tm_mday;
	 h2 = time2->tm_hour;
	 min2 = time2->tm_min;
 }

 void sizecmp(void)
 {
	 int file_size1 = stat1.st_size;
	 int file_size2 = stat2.st_size;

	 if (file_size1 == file_size2)
		 printf("sizes are equal\n");
	 else
	 {
		 if (file_size1 > file_size2)
			 printf("text1 is bigger\n");
		 else
			 printf("text2 is bigger\n");
	 }
 }
 void blockcmp(void)
 {
	 int file_blk_size1 = stat1.st_blksize;
	 int file_blk_size2 = stat2.st_blksize;

	 if (file_blk_size1 == file_blk_size2)
		 printf("sizes are equal\n");
	 else
	 {
		 if (file_blk_size1 > file_blk_size2)
			 printf("text1 is bigger\n");
		 else
			 printf("text2 is bigger\n");
	 }
 }

 void datecmp(void){
 }

 void timecmp(void){
 }
