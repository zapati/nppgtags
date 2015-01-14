/**
 *  \file
 *  \brief  GTags plugin API
 *
 *  \author  Pavel Nedev <pg.nedev@gmail.com>
 *
 *  \section COPYRIGHT
 *  Copyright(C) 2014 Pavel Nedev
 *
 *  \section LICENSE
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once


#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <tchar.h>
#include "resource.h"
#include "Common.h"


namespace GTags
{

const TCHAR cPluginName[]       = VER_PLUGIN_NAME;
const TCHAR cBinsDir[]          = _T("NppGTags");
const unsigned cMaxTagLen       = 128;

const int cUIBackgroundColor    = COLOR_INFOBK;

const TCHAR cCreateDatabase[]   = _T("Create Database");
const TCHAR cUpdateSingle[]     = _T("Database Single File Update");
const TCHAR cAutoCompl[]        = _T("AutoComplete");
const TCHAR cAutoComplFile[]    = _T("AutoComplete File");
const TCHAR cFindFile[]         = _T("Find File");
const TCHAR cFindDefinition[]   = _T("Find Definition");
const TCHAR cFindReference[]    = _T("Find Reference");
const TCHAR cFindSymbol[]       = _T("Find Symbol");
const TCHAR cGrep[]             = _T("Grep");
const TCHAR cFindLiteral[]      = _T("Find Literal");
const TCHAR cVersion[]          = _T("About");


extern HINSTANCE HInst;
extern CPath DllPath;
extern TCHAR UIFontName[32];
extern unsigned UIFontSize;
extern bool AutoUpdate;


void AutoComplete();
void AutoCompleteFile();
void FindFile();
void FindDefinition();
void FindReference();
void Grep();
void FindLiteral();
void GoBack();
void CreateDatabase();
bool UpdateSingleFile(const TCHAR* file = NULL);
void DeleteDatabase();
void About();

} // namespace GTags
