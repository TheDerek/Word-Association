#include "File.h"



File::File(char* t_fN)
{
	if (true)// call file name user input sanitiser, (t_fN)
	{
		// copy pointer,
		//m_fN = t_fN;
		// call file reader/ new file creator, (m_fN)
		fileRead();
	}
}

File::~File()
{
}

int File::fileRead()
{
	// if file exists
		// read file / folder excluding README and MIAS, "m_fN"
		return 0;
	// else
		// return -1
}

int File::fileWrite()
{
	// if file exists
		// overwrite
	// else
		// create new file
	return 0;
}