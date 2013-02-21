#include <string.h>
#include <stdlib.h>
int MergeIfSettingCommand(const char buf[], const bool enable_flg, char *command){

	if(buf == NULL){
		return -1;
	}

	strcpy(command,"netsh interface set interface ");
	strcat(command, buf);
	
	(enable_flg)?strcat(command," enabled"):strcat(command," disabled");
	return 1;
}
