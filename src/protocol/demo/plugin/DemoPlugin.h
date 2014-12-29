//
// Copyright 2014 (C). Alex Robenko. All rights reserved.
//

// This file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "comms_champion/comms_champion.h"

namespace cc = comms_champion;

namespace demo
{

namespace plugin
{

class DemoPlugin : public QObject, public cc::ProtocolPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cc.DemoPlugin")
    Q_INTERFACES(comms_champion::ProtocolPlugin)

protected:

    virtual void initializeImpl() override;
    virtual void finalizeImpl() override;
    virtual void configureImpl(const std::string& config) override;
    virtual comms_champion::ProtocolPtr allocImpl() override;
};

}  // namespace plugin

}  // namespace demo
