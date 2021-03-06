// vim: set sts=4 ts=8 sw=4 tw=99 et:
//
// Copyright (C) 2016-2020 David Anderson
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once

#include <proto/poll.pb.h>

namespace stone {

class Campaign;
class Context;

typedef google::protobuf::Map<google::protobuf::int32, PollList> ProtoPollMap;
typedef google::protobuf::RepeatedPtrField<Poll> ProtoPollList;

class DataSourceRcp final
{
  public:
    static std::optional<Feed> Fetch(Context* cx, Campaign* cc);
    static std::optional<ProtoPollMap> FetchGovernors(Context* cx, Campaign* cc, int year);
    static std::optional<ProtoPollList> FetchGenericBallot(Context* cx, Campaign* cc, int year);
};

} // namespace stone
