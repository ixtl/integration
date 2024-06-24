/****************************************************************************
**   _____   _____   ___ ___  _ __ ___
**  / _ \ \ / / _ \ / __/ _ \| '_ ` _ \
** |  __/\ V / (_) | (_| (_) | | | | | |
**  \___| \_/ \___/ \___\___/|_| |_| |_|
**
**
** Dpyright (C) 2011-2021 Eralog SARL
**
** NOTICE : This file is subject to the terms and conditions defined in
** file 'LICENSE.txt', which is part of this source code package.
**
** Auteur : Patrick Babonneau
** Contact: contact@eralog.fr
** Date   : 2021-03-15
**
** Purpose :
** TEST-SENSORS
**
*****************************************************************************/
#ifndef TESTSENSORS_H
#define TESTSENSORS_H

#include <evopacket.h>

class TestSensorsRec : public EvoPacket
{
public:
    explicit TestSensorsRec(const QString &szSet, const QString &szGet, const bool fRadar=false);


    // JsonSerializable interface
public:
    void read(const QJsonObject &jsonObj) override;
    void write(QJsonObject &jsonObj) const override;

    // EvoPacket interface
public:
    QString payload() override;
    bool decode(const QVariantList &rgData) override;

private:
    QString m_aaa;
    QString m_bbb;
    QString m_ccc;
    QString m_ddd;
};

#endif // TESTSENSORS_H
