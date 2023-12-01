#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	const int col = 8; //８桁
	const int row = 8; //８桁

	FILE* fp = fopen("data.txt", "r"); //ファイルオープン

	char data[row][col + 1] = {}; //  char型
	int r = 0;
	while (fscanf(fp, "%s", data[r]) != EOF){
		r++;
	} //r++をすることで読み取れる

	fclose(fp); //ファイルクローズ

	for (int r = 0; r < row; r++) { //row
		for (int c = 0; c < col; c++) { //col
			if (data[r][c] == '1') { //もしそのデータが'1'だった場合 -1に''を入れる!!!-
				printf("*"); //全角"＊"表示
			}
			else { //じゃなかったら
				printf("　"); //全角スペースを表示する
			}
		}
		printf("\n"); //改行する
	}

	return 0; //問題なしなら0!!!
}