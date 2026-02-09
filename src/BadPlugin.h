#pragma once
#include "v1/PluginBase.h"

class BadPlugin : public PluginBase<BadPlugin> {
    ~BadPlugin() override = default;
    auto getName() const -> const char* override { return "BadPlugin"; }

    void startup() override {
        int* p = nullptr;
        *p = 42; // EXCEPTION_ACCESS_VIOLATION
    }

    void shutdown() override {
        setPluginYeetable();
    }

    auto registerPublicInterfaces() const -> std::vector<PublicInterface> override {
        return {};
    }
};