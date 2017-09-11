#include <TX/Config/ANT_ConfigureEventFilter.h>

#include <ANT_private_defines.h>

ConfigureEventFilter::ConfigureEventFilter() : AntRequest(CONFIGURE_EVENT_FILTER) {

}

ConfigureEventFilter::ConfigureEventFilter(uint16_t eventFilter) : AntRequest(CONFIGURE_EVENT_FILTER) {
    setEventFilter(eventFilter);
}

void ConfigureEventFilter::setEventFilter(uint16_t eventFilter) {
    _eventFilter = eventFilter;
}

uint16_t ConfigureEventFilter::getEventFilter() {
    return _eventFilter;
}

uint8_t ConfigureEventFilter::getData(uint8_t pos) {
    // TODO
    return 0;
}

uint8_t ConfigureEventFilter::getDataLength() {
    // TODO
    return 0;
}

#ifdef NATIVE_API_AVAILABLE

uint8_t execute() {
    // TODO
    return 0;
}

#endif // NATIVE_API_AVAILABLE