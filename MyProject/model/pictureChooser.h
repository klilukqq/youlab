#ifndef PICTURECHOOSER_H
#define PICTURECHOOSER_H

#include <QString>



class pictureChooser
{
public:
    pictureChooser();
    QString GetRightName(QString prevName);
    QString GetRightSmallName(QString prevName);
};

#endif // PICTURECHOOSER_H
