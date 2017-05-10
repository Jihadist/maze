// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


class PointF
{
public:
	float _first, _second;
	PointF() : _first(0), _second(0) {}
	PointF(float first, float second) : _first(first), _second(second) {}
};


class MDGEN_API Edges
{

public:
	PointF _vertexA;		//������� 1
	PointF _vertexB;		//������� 2
	int _WeightEdge;		//��� �����
	int _FirstRoom;			//����� 1 ������� 
	int _SecondRoom;		//����� 2 ������� 
	int _NumberEdge;		//����� �����
	bool _isDraw;			//���������� �����

	Edges();
	Edges(float FirstvertexA, float SecondvertexA, float FirstvertexB, float SecondvertexB, double NumberEdge, int WeightEdge, int FirstRoom, int SecondRoom, bool isDraw);
	Edges(PointF vertexA, PointF vertexB, double NumberEdge, int WeightEdge, int FirstRoom, int SecondRoom, bool isDraw);
	~Edges();
};

class shortEdge
{
public:
	int _vertexA, _vertexB, _WeightEdge;
	shortEdge() {}
	shortEdge(int vertexA, int vertexB, int WeightEdge) : _vertexA(vertexA), _vertexB(vertexB), _WeightEdge(WeightEdge) {}
};