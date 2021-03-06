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

#include <math.h>

#include <functional>

namespace stone {

// Derived from Princeton Election Consortium's "metamargin" analysis, with
// some tweaks to generalize to more elections.
struct MetamarginFinder
{
    MetamarginFinder(std::function<int(double)> bias_fn, int midpoint, int start, int high);

    static bool Debug;

    std::function<int(double)> bias_fn;
    double metamargin;

  private:
    double Calc(int midpoint, int direction);
};

} // namespace stone
