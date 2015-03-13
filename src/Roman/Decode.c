#include "Decode.h"
#include <string.h>

int roman_decode(char in[]) {
	int i;
	for (int i = 0; i < strlen(in); ++i) { 
	  switch(in[0]) {
	  	case 'I':
	  		return 1;
	  		break;
	  	case 'V':
	  		return 5;
	  		break;
	  	case 'X':
	  		return 10;
	  		break;
	  	case 'L':
	  		return 50;
	  		break;
	  	case 'C':
	  		return 100;
	  		break;
	  	case 'D':
	  		return 500;
	  		break;
	  	case 'M':
	  		return 1000;
	  		break;
	  }
	}
}