#include "copyfile.h"
#include <QFile>

copyFile::copyFile()
{

}

void copyFile::copyFileDB()
{
    if(!QFile::exists("./../MyDB.db"))
    {
        QFile::copy(":/MyDB.db","./../MyDB.db");
    }
}

void copyFile::copyFileSettings()
{
    if(!QFile::exists("./../settings.txt"))
    {
        QFile::copy(":/settings.txt","./../settings.txt");
    }
}
