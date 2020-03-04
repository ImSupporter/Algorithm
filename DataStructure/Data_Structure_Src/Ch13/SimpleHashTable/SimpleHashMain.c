#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
#include "Table.h"

int MyHashFunc(int k)
{
	return k % 100;    // Ű�� �κ������θ� ����� ���� ���� ���� �ؽ��� ��!!!
}

int main(void)
{
	Table myTbl;
	Person * np;
	Person * sp;
	Person * rp;

	TBLInit(&myTbl, MyHashFunc);

	// ������ �Է�
	np = MakePersonData(20120003, "Lee", "Seoul");
	TBLInsert(&myTbl, GetSSN(np), np);

	np = MakePersonData(20130012, "KIM", "Jeju");
	TBLInsert(&myTbl, GetSSN(np), np);

	np = MakePersonData(20170049, "HAN", "Kangwon");
	TBLInsert(&myTbl, GetSSN(np), np);

	// ������ �˻�
	sp = TBLSearch(&myTbl, 20120003);
	if(sp != NULL)
		ShowPerInfo(sp);

	sp = TBLSearch(&myTbl, 20130012);
	if(sp != NULL)
		ShowPerInfo(sp);

	sp = TBLSearch(&myTbl, 20170049);
	if(sp != NULL)
		ShowPerInfo(sp);

	// ������ ����
	rp = TBLDelete(&myTbl, 20120003);
	if(rp != NULL)
		free(rp);

	rp = TBLDelete(&myTbl, 20130012);
	if(rp != NULL)
		free(rp);

	rp = TBLDelete(&myTbl, 20170049);
	if(rp != NULL)
		free(rp);

	return 0;
}