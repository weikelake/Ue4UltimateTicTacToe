// Fill out your copyright notice in the Description page of Project Settings.


#include "turnLogic.h"

const int countWins = 8;
const int countCells = 3;
int arrayWinCells[countWins][countCells] =
{
	{0,1,2},
	{3,4,5},
	{6,7,8},
	{0,3,6},
	{1,4,7},
	{2,5,8},
	{0,4,8},
	{2,4,6}
};

void UturnLogic::getCellWin(TArray<int> cellsXO, int& whoIsWin)
{
	for (int i = 0; i < countWins; i++)
	{
		if (cellsXO[arrayWinCells[i][0]] == cellsXO[arrayWinCells[i][1]] && cellsXO[arrayWinCells[i][0]] == cellsXO[arrayWinCells[i][2]])
		{
			whoIsWin = cellsXO[arrayWinCells[i][0]];
			return;
		}
	}
}
