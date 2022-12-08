#pragma once

#include <pcap.h>
#include <stdio.h>
#include <WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <tchar.h>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_RIGHT 77
#define KEY_LEFT 75
#define KEY_ENTER '\r'
#define KEY_BACKSPACE 8

BOOL LoadNpcapDlls();

enum UI_NUM {
	BASIC_UI,
	INTERFACE_LIST_UI,
	UDP_UI,
	TEST_UI,
	BASIC_DUMP_UI,
	UI_COUNT //�׻� ������ ����
};