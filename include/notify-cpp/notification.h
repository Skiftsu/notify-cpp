#pragma once

#include <notify-cpp/event.h>

namespace notifycpp {

class Notification {
public:
    Notification(Event, const std::string&, unsigned int = 0);

    [[nodiscard]] std::string getPath() const;
    [[nodiscard]] Event getEvent() const;
    [[nodiscard]] unsigned int getPid() const;

private:
    Event _Event;
    std::string _Path;
    unsigned int _Pid;
};
}
