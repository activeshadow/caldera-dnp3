//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
//
// This file is auto-generated. Do not edit manually
//
// Copyright 2013-2020 Automatak, LLC
//
// Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
// LLC (www.automatak.com) under one or more contributor license agreements.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership. Green Energy Corp and Automatak LLC license
// this file to you under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may obtain
// a copy of the License at:
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef OPENDNP3_COMMANDPOINTSTATE_H
#define OPENDNP3_COMMANDPOINTSTATE_H

#include <cstdint>
#include <string>

namespace opendnp3 {

/**
  List the various states that an individual command object can be in after an SBO or direct operate request
*/
enum class CommandPointState : uint8_t
{
  /// No corresponding response was ever received for this command point
  INIT = 0,
  /// A response to a select request was received and matched, but the operate did not complete
  SELECT_SUCCESS = 1,
  /// A response to a select operation did not contain the same value that was sent
  SELECT_MISMATCH = 2,
  /// A response to a select operation contained a command status other than success
  SELECT_FAIL = 3,
  /// A response to an operate or direct operate did not match the request
  OPERATE_FAIL = 4,
  /// A matching response was received to the operate
  SUCCESS = 5
};

struct CommandPointStateSpec
{
  using enum_type_t = CommandPointState;

  static uint8_t to_type(CommandPointState arg);
  static CommandPointState from_type(uint8_t arg);
  static char const* to_string(CommandPointState arg);
  static char const* to_human_string(CommandPointState arg);
  static CommandPointState from_string(const std::string& arg);
};

}

#endif
