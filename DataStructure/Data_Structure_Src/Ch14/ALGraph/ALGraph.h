#ifndef __AL_GRAPH__
#define __AL_GRAPH__

#include "DLinkedList.h"

// ������ �̸����� ���ȭ
enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
	int numV;   // ������ ��
	int numE;   // ������ ��
	List * adjList;   // ������ ����
} ALGraph;

// �׷����� �ʱ�ȭ
void GraphInit(ALGraph * pg, int nv);

// �׷����� ���ҽ� ����
void GraphDestroy(ALGraph * pg);

// ������ �߰�
void AddEdge(ALGraph * pg, int fromV, int toV);

// ��ƿ��Ƽ �Լ�: ������ ���� ���
void ShowGraphEdgeInfo(ALGraph * pg);

#endif