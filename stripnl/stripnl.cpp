// stripnl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int c;
	int nlflag = 0;
	while ((c = fgetc(stdin)) >= 0) {
		if (c == '\n') {
			nlflag++;
			continue;
		}
		else if(c!=' '&&c!='\t'){
			if (nlflag == 1) {
				nlflag = 0;
				putc(' ', stdout);
			}
		}
		while (nlflag != 0) { 
			putc('\n', stdout); 
			--nlflag; 
		}
		putc(c, stdout);
	}
	return 0;
}

