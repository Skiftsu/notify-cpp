#pragma once

#include <filesystem>
#include <memory>
#include <notify-cpp/event.h>

namespace notifycpp {
class FileSystemEvent {
public:
    FileSystemEvent(const std::filesystem::path&);
    FileSystemEvent(const std::filesystem::path&, Event, unsigned int = 0);
    ~FileSystemEvent();

    [[nodiscard]] Event getEvent() const;
    [[nodiscard]] std::filesystem::path getPath() const;
    [[nodiscard]] unsigned int getPid() const;

private:
    Event _Event;
    std::filesystem::path _Path;
    unsigned int _Pid;
};
using TFileSystemEventPtr = std::shared_ptr<FileSystemEvent>;
}
