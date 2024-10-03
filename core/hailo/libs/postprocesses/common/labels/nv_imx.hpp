/**
* Copyright (c) 2021-2022 Hailo Technologies Ltd. All rights reserved.
* Distributed under the LGPL license (https://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt)
**/
#pragma once
#include <map>
namespace common
{
    static std::map<uint8_t, std::string> nv_imx = {
        {0, "unlabeled"},
        {1, "persons"},
        {2, "cars"},
        {3, "bikesandbicycles"},
        {4, "vehicles"},
        {5, "tanks"},
        {6, "ships"},
        {7, "boatsandstreams"},
        {8, "birds"},
        {9, "monkeys"},
        {10, "animals"},
        {11, "drones"},
        {12, "flights"},
        {13, "fighterflights"},
        {14, "helicopters"},
        {15, "riflesandguns"},
        {16, "baggages"}};
}