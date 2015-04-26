#ifndef _INSPIRE_PLATFORM_H_
#define _INSPIRE_PLATFORM_H_

// defined NULL
#ifdef _CXX_11
#define NULL nullptr
#else
#define NULL 0
#endif // _CXX_11

// defined int64
typedef long long int64;

#ifdef _WIN32
#define NEWLINE "\r\n"
#define fmt64 "%l64d"
#else
typedef void* HANDLE;
#define NEWLINE "\n"
#define fmt64 "%lld"
#endif

#ifdef _WIN32
// include socket
#include <Winsock2.h>
#include <ws2tcpip.h>
#include <mswsock.h>
#pragma comment(lib, "Ws2_32.lib")
// include windows.h
#include <windows.h>
#include <process.h>
// include STL
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <map>
#include <vector>
#else
#endif

// include base header
#include "kernel.h"
#include "assert.h"
#include "insLog.h"

#endif