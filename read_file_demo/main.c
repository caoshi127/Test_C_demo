#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *fp;
	char ch;
	
	if ((fp = fopen("C:\\Users\\Administrator\\Desktop\\demo.txt", "rt")) == NULL) {
		puts("打开文件失败!");
		exit(0);
	}
	
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}
	
	putchar('\n');
	fclose(fp);
	
	system("pause");
	return 0;
}