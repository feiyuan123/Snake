#pragma once

//////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

#include "cu_map.h"

#include "MacroDefine.h"

//////////////////////////////////////////////////////////////////////////

void InitPlayingMap( HWND, HDC, HINSTANCE );

//////////////////////////////////////////////////////////////////////////

void DrawBrickWall( HWND, HDC );			//������ש��

void DrawRandWall( HWND, HDC, CMAP*, int );		//���ǽ��
