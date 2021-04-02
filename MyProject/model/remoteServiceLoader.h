#ifndef REMOTESERVICELOADER_H
#define REMOTESERVICELOADER_H
#include "ILoader.h"

#include "../model/dataHandler.h"

class remoteServiceLoader : public ILoader
{
    dataHandler* data;
public:
    remoteServiceLoader(dataHandler* data);
    void loader() override;
};

#endif // REMOTESERVICELOADER_H
