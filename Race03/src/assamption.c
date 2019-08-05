#include "../inc/header.h"

static void erorr_Duplicate(char *card) {
	mx_printstrerr(DUPLICATE_CARD);
	mx_printstrerr(card);
	mx_printcharerr('\n');
}

static void erorr_USAGE() {
	mx_printstrerr(USAGE);
	mx_printcharerr('\n');
}

static void erorr_invalid(char *card) {
     mx_printstrerr(INVALID_CARD);
     mx_printstrerr(card);
	mx_printcharerr('\n');
}

static void erorr_invalid_rank(char *card) {
      mx_printstrerr(INVALID_CARD_RANK);
      mx_printstrerr(card);
	mx_printcharerr('\n');
 }

static void erorr_invalid_siut(char *card) {
      mx_printstrerr(INVALID_CARD_SUIT);
      mx_printstrerr(card);
	mx_printcharerr('\n');
 }
 





bool assemption(char **card, int q) {

//колчиство карт
	if (q != 6) {
		erorr_USAGE();
		return false;
	}
		
	
	for (int i = 1; i < 6; i++) {
		
//количество симвлов в аргумнтах
		for(int x = 0; card[i][x] != '\0'; x++)
			if (x>3) {
				erorr_invalid(card[i]);
				return false;
			}
//неправильная маст и ранг
         if (mx_israng(card[i]) == 0 && mx_issuit(card[i] ) == 0) {
              erorr_invalid(card[i]);
 
              return false;
          }		
//неправильный ранг но правильная масть		
		if (mx_israng(card[i]) == 0 && mx_issuit(card[i] ) == 1) {
			erorr_invalid_rank(card[i]);
			return false;
		}
		
//неправильная масть но правильный ранг

		if (mx_israng(card[i]) == 1 && mx_issuit(card[i] ) == 0) {
             erorr_invalid_siut(card[i]);
             return false;
         }   

	}
//дубликат
	for (int i = 1; i < 6; i++) {			
		for(int j = 1; j < 6; j++) {
			if (mx_strcmp(card[i], card[j])==0 &&( i!=j)) {
				erorr_Duplicate(card[i]);
				return false;
			}
		}
	}
	return true;
}
