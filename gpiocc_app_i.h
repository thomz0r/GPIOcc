#pragma once

#include "gpiocc_app.h"
#include "gpiocc_item.h"
#include "scenes/gpio_scene.h"
#include "gpiocc_custom_event.h"

#include <gui/gui.h>
#include <gui/view_dispatcher.h>
#include <gui/scene_manager.h>
#include <gui/modules/submenu.h>
#include <notification/notification_messages.h>
#include <gui/modules/variable_item_list.h>
#include <gui/modules/widget.h>
#include "views/gpio_test.h"
#include <assets_icons.h>

struct GpioApp {
    Gui* gui;
    NotificationApp* notifications;
    ViewDispatcher* view_dispatcher;
    SceneManager* scene_manager;
    Widget* widget;

    VariableItemList* var_item_list;
    VariableItem* var_item_flow;
    GpioTest* gpio_test;
};

typedef enum {
    GpioAppViewVarItemList,
    GpioAppViewGpioTest,

} GpioAppView;
