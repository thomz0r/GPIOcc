#pragma once

typedef enum {
    GpioStartEventOtgOff = 0,
    GpioStartEventOtgOn,
    GpioStartEventManualControl,
    GpioCustomEventErrorBack,
    GpioUsbUartEventConfig,
} GpioCustomEvent;
