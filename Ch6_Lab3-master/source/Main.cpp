#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct _stu {
	char num[7];
	char clas[20];
	char name[20];
	int score[3];
}student;

void main() {
	int i;
	student stu[3] = {
		{"970101","�|�l�@��","���p��",61,71,81},
		{"970102","�|�l�@��","������",92,82,72},
		{"970103","�|�l�@��","�i�j��",73,63,83},
	};
	student* ps;
	ps = stu;
	cout << endl;
	cout << "=========================================="<<endl;
	cout << "�Ǹ�   �Z��       �m�W      ��    �^    ��" << endl;
	cout << "==========================================" << endl;
	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n",
			(ps + i)->num,
			(ps + i)->clas,
			(ps + i)->name,
			(ps + i)->score[0],
			(ps + i)->score[1],
			(ps + i)->score[2]
		);
	}
	cout << endl;
	system("PAUSE");
}