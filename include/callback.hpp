#pragma once

struct callback
{
    void *function;
    void *gap;
};
static_assert(sizeof(callback) == 0x8);