// Aseprite
// Copyright (C) 2001-2016  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#pragma once

namespace app {

  class LoggerModule {
  public:
    LoggerModule(bool createLogInDesktop);
    ~LoggerModule();
  };

} // namespace app
