﻿/*
 * Education Frameworks
 * Copyright © 2015-2017 Origin Studio Inc.
 *
 */

#pragma once

#include <NetEasy/CommonHeader.h>

typedef bool(*ProtocolLauncher)(CCommand&);

extern ProtocolLauncher g_bpfLauncher[];

#define SET_COMMAND(o) g_bpfLauncher[o] = CMD_##o;

void InitializeCommand();

void InitializeIdCommand();
void InitializeInfoCommand();
void InitializeItemCommand();
void InitializeRoomCommand();
void InitializeUserCommand();
void InitializeOtherCommand();
void InitializeCheatCommand();