#include<dirent.h>
#include<iostream>
#include<sys\stat.h>
#include <io.h>
#include<conio.h>

using namespace std;

void DeleteFileIfExist(const char* path) 
{
  	bool check = access(path, 0);
 	if (check != -1) remove(path);  	
}


int main(){
	DeleteFileIfExist("E:/SEB/abc/New XLS Worksheet.xls");
	return 0;
}
