#pragma once
#include <Windows.h>
#include <stdio.h>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <string>

/// <summary>
/// ����ð���������
/// </summary>
/// <returns></returns>
std::string GetTime();

/// <summary>
/// �����޼���
/// </summary>
/// <param name="dwErrorNumber">������ȣ</param>
void ErrorMessage(DWORD dwErrorNumber);

/// <summary>
/// �����ڱ��� Ȯ��
/// </summary>
/// <returns></returns>
BOOL IsElevated();
