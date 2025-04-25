#ifndef MODS_H 
#define MODS_H



enum Menu{	//列舉型態(無定義數字的話自動從 0 開始也可自行定義數字) 
	CHOICE_EXIT,    	//選擇離開 0 
	CHOICE_CONTINUE,	//選擇繼續 1 
	CHOICE_INVALID,		//選擇無效 2 
};



enum ErrorCode{
	EC_Input_error = -1,	
};

int get_random_number_time(void);
int input_number(int * number);
int determine_input_number(int in_number ,int random_number,int * count);
int show_choose(void);
void pause(void);
void clear(void);

#endif
