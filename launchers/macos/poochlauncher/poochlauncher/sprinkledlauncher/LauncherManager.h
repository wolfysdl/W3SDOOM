/* ... */
//-----------------------------------------------------------------------------
//
// Copyright(C) 2009 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
//-----------------------------------------------------------------------------

#ifndef LAUNCHER_LAUNCHERMANAGER_H
#define LAUNCHER_LAUNCHERMANAGER_H

#include <AppKit/AppKit.h>
#include <AppKit/NSNibLoading.h>

@interface LauncherManager : NSObject
{
    id launcherWindow;

    id commandLineArguments;
    id packageLabel;
}

- (void) launchdoom: (id)sender;
- (void) launchhexen: (id)sender;
- (void) launchheretic: (id)sender;
- (void) launchstrife: (id)sender;
- (void) runSetup: (id)sender;
- (void) awakeFromNib;

@end

#endif /* #ifndef LAUNCHER_LAUNCHERMANAGER_H */

