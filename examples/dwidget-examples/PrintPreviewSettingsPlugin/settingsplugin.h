/*
 * Copyright (C) 2022 UnionTech Technology Co., Ltd.
 *
 * Author:     Chen Bin <chenbin@uniontech.com>
 *
 * Maintainer: Chen Bin <chenbin@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef PRINTPREVIEWSETTINGSPLUGIN_H
#define PRINTPREVIEWSETTINGSPLUGIN_H

#include <QObject>
#include "dprintpreviewsettinginterface.h"

DWIDGET_USE_NAMESPACE

class PrintPreviewSettingsPlugin : public QObject, public DPrintPreviewSettingInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.deepin.dtk.plugin.PrintPreview.SettingsExample" FILE "PrintPreviewSettingsPlugin.json")

public:
    PrintPreviewSettingsPlugin(QObject *parent = nullptr);
    QString name() const;
    bool settingFilter(const QVariant &mimeData, DPrintPreviewSettingInfo *info);
    SettingStatus settingStatus(const QVariant &mimeData, SettingSubControl control);
};

#endif // PRINTPREVIEWSETTINGSPLUGIN_H
