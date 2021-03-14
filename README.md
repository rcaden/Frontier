# UserLand Frontier Open Source Release

Version 10.1a12 

Last updated March 13, 2021 by Rogers Cadenhead

## Installation Instructions

This project is currently being developed on Microsoft Visual Studio 2013, although other build instructions have been included.

To build the application, download all of the project's files. In Visual Studio, open the Frontier.sln solution file in the subfolder build_VC2013.

In the Solution Explorer, right-click the top line "Solution 'Frontier'" and choose Build Solution. The program will be built in the subfolder build_VC2013/Debug.

Before it can be run, you must have a copy of Frontier's database files, which are not included at this time.

If you don't have these files, you can get them from the UserLand Software archives:

    [frontier.userland.com](http://frontier.userland.com/frontier901b1)

Install that site's version of Frontier in its own folder and copy all of its files and subfolders except for Frontier.exe into build_VC2013.Debug.

When that's done, run Frontier.exe in build_VC2013/Debug.

Once you can run Frontier you can uninstall the version you got from frontier.userland.com.

## Alternate Instructions

Since the original open source release of Frontier, additional work has been done to allow the building of Frontier using other development environments. The following sections describe these environments.

### Apple Xcode Tools for Mac OS X
   
Build directory : build_XCode

Getting started with Xcode v1.2 or v1.5 or v2.0:

1. Open the Frontier.xcode project in Xcode.

2. Click the Build button.

Getting started with Xcode v2.1 and higher:

1. Open the FrontierFat.xcodeproj project in Xcode.

2. Click the Build button.

Both the Frontier.xcode and the FrontierFat.xcodeproj projects offer a development and a deployment build style.

In the FrontierFat.xcodeproj project, the development build style will compile for the native architecture only, but the deployment build style will compile a Universal Binary of Frontier which will run on both PPC and Intel Macs.

### Microsoft Visual Studio .NET 2005

Build directory: build_VC2k5

Getting started:

1. Open the Frontier.sln solution file in Visual Studio.

2. Select the Configuration Manager from the Build menu and switch the Active Solution Configuration to Debug. Click the Close button.

3. Select Build Solution from the Build menu.

### Microsoft Visual Studio .NET 2003

Build directory: build_VC2k3

Getting started:

1. Open the Frontier.sln solution file in Visual Studio.

2. Select the Configuration Manager from the Build menu and switch the Active Solution Configuration to Debug. Click the Close button.

3. Select Build Solution from the Build menu.

### Microsoft Visual Studio C++ 6.0 for Windows
   
Build directory : build_VC6

Getting started:

1. Open the Frontier.dsp project in MS Visual Studio.

2. Choose a build configuration from the Project menu. It is a good idea to start with the Debug build configuration.

3. Build.

### Metrowerks CodeWarrior Pro for Mac or Windows
   
Build directory: build_CWPro8

Building the Frontier kernel currently requires Metrowerks CodeWarrior Pro 8 for Mac or Windows with the 8.3 updates. Other versions might work, too, but have not been tested.

Getting started:

1. Locate the Frontier.mcp project file in the build_CW8 directory and open it with CodeWarrior.

2. Select a target from the popup menu at the top of the project window. It is a good idea to start with the Debug build for your current
platform, e.g. Frontier OSX CFM Debug if you are running CodeWarrior on Mac OS X.

3. Select the Make command from the Project menu.

4. When CodeWarrior has finished compiling and linking, locate the resulting application in the sub-directory of the build_CW8 directory
whose name corresponds to the target name you chose under step #2. Copy the application to a directory containing a Frontier installation with at least a Frontier.root file and launch it.

When you open the Frontier.mcp project file on Windows, CodeWarrior will
complain that this: access path

	{System}Library/CFM Support/StubLibraries

... cannot be found. This means that you will not be able to build the Mac OS X version on that platforms, but it does not affect the versions for Windows.

When you build the Frontier Win or Frontier Win Debug target, expect CodeWarrior to report about 240 compiler warnings, mostly about redeclared identifiers in Microsoft header files, some missing function prototypes, and some unused variables. You can ignore these warnings.

### GNU Tools (initially for Mac OS X only)
   
Build directory: build_GNU

Building the Frontier kernel currently requires the Mac OS X Developer Tools to be installed on Mac OS X. Older tools using Project Builder, or newer tools using Xcode should work, using 'gcc' v3.3. Other versions of 'gcc' might work, too, but have not been tested (on Mac OS X).

Getting started:

In a shell, do the following:

1. Change directory to the "build_GNU" directory of the Frontier project.

	cd build_GNU

2. Type:

	make

The support for the GNU tools is very preliminary, and currently builds a non-Debug version for Mac OS X (only) by default. No GUI based tools such as the Project Builder or Xcode IDE are required.

When you build, expect the GNU tools to report some compiler warnings. You can ignore these warnings.

Support for building the Windows version using Cygwin/MinGW or other GNU based development environments on Windows systems, and support for building the Windows version using WINE on non-Windows systems, may be added in the future.

## Reporting Problems

Report problems and ask questions on the Issues page:

	[https://github.com/rcaden/Frontier/issues]