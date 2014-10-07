#include <windows.h>
#include <stdlib.h>
#include "ifsetting.hpp"

int WINAPI WinMain(HINSTANCE hInstance ,HINSTANCE hPrevInstance , PSTR lpCmdLine , int nCmdShow ) {
	
  //add comment
	char *command;
	int length = strlen(__argv[1]);
	
	command = (char*)malloc(sizeof(char)*(length+64));
	
	if(command == NULL){
		MessageBox(NULL,TEXT("ERROR"),TEXT("ERROR_RESULT"),MB_OK);
		return -1;
	}
	if(!MergeIfSettingCommand(__argv[1],TRUE,command)){
		MessageBox(NULL,TEXT("ERROR"),TEXT("ERROR_RESULT"),MB_OK);
	}
	system(command);
	MessageBox(NULL,(LPCSTR)command,TEXT("ERROR_RESULT"),MB_OK);
	free(command);
	return 0;
}
