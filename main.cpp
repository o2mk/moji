#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	const int col = 8; //�W��
	const int row = 8; //�W��

	FILE* fp = fopen("data.txt", "r"); //�t�@�C���I�[�v��

	char data[row][col + 1] = {}; //  char�^
	int r = 0;
	while (fscanf(fp, "%s", data[r]) != EOF){
		r++;
	} //r++�����邱�Ƃœǂݎ���

	fclose(fp); //�t�@�C���N���[�Y

	for (int r = 0; r < row; r++) { //row
		for (int c = 0; c < col; c++) { //col
			if (data[r][c] == '1') { //�������̃f�[�^��'1'�������ꍇ -1��''������!!!-
				printf("*"); //�S�p"��"�\��
			}
			else { //����Ȃ�������
				printf("�@"); //�S�p�X�y�[�X��\������
			}
		}
		printf("\n"); //���s����
	}

	return 0; //���Ȃ��Ȃ�0!!!
}