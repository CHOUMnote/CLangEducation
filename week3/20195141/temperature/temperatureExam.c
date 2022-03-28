//¼·¾¾¸¦ È­¾¾·Î ¹Ù²Ù´Â ÇÁ·Î±×·¥
//ÀÛ¼ºÀÚ : ±èÁöÈ£
//ÇÐ¹ø : 20195141

#include <stdio.h>

int main() {
	double c = 0.0; //¼·¾¾
	double f = 0.0; //È­¾¾
	printf("¼·¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf_s("%lf", &c);
	f = 32 + c * 180.0 / 100.0;

	printf("¼·¾¾ %.1lfCÀÇ È­¾¾´Â %.1lfF", c, f);
	return 0;
}