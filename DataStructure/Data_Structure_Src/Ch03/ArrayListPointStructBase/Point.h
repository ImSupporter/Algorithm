#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point
{
	int xpos;
	int ypos;
} Point;

// Point ������ xpos, ypos �� ����
void SetPointPos(Point * ppos, int xpos, int ypos);

// Point ������ xpos, ypos ���� ��� 
void ShowPointPos(Point * ppos);

// �� Point ������ ��
int PointComp(Point * pos1, Point * pos2); 

#endif