#include "../model/copyfile.h"
#include <QFile>


copyFile::copyFile()
{

}

void copyFile::copyFileDB()
{
    if(!QFile::exists("./../MyDB.db"))
    {
        QFile::copy(":/MyDB.db","./../MyDB.db");
        QFile::setPermissions("./../MyDB.db",QFileDevice::ReadUser | QFileDevice::WriteUser | QFileDevice::ExeUser);
    }
}

void copyFile::copyFileSettings()
{
    if(!QFile::exists("./../settings.txt"))
    {
        QFile::copy(":/settings.txt","./../settings.txt");
        QFile::setPermissions("./../settings.txt",QFileDevice::ReadUser | QFileDevice::WriteUser | QFileDevice::ExeUser);
    }
}
