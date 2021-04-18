#include "pictureChooser.h"

pictureChooser::pictureChooser()
{

}

QString pictureChooser::GetRightName(QString prevName)
{
    QString nextName;
    if(prevName == "Солнечно")
        nextName = ":/image/image/Weather_Sun.png";
    if(prevName == "Облачно")
        nextName = ":/image/image/Weather_Cloud.png";
    if(prevName == "Переменно")
        nextName = ":/image/image/Weather_CloudAndSun.png";

    return nextName;
}

