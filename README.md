## Improvements:
- Space in path works properly now
- Deleting files/folders
- Renaming files/folders
- Receiving files
- Possibility to set root folder
- Possibility to set FTP port

Orianne
=======

Orianne is a minimal FTP server running on Windows and UNIX flavours. It is self-contained and needs no setup.

Simply start it and it serves the selected working directory.

Orianne has been written in full C++ using boost. 

Building
========

Compilation has been tested under VS2010, gcc and clang.
To compile, you will need boost >= 1.46.1.

For Visual Studio users, simply open the mftp.sln file.
Unix users can use the Makefile in the mftp directory. Simply change to CC variable to switch compilers.
