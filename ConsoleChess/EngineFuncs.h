#pragma once
#include "EngineFuncs.h"

#include "structs.h"


void ENGINE_SetBackgroundColor(int R, int G, int B);

void ENGINE_SetForegroundColor(int R, int G, int B);
void ENGINE_SetCursorPos(Point coords);

void ENGINE_WriteCharToXy(Point old, Point target, char ch, int returnToOldPos);