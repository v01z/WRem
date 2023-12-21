#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "qglobal.h"

// -------------------------------------------------------

// Menu
static const char *TEST_MENU_STR{QT_TRANSLATE_NOOP("MainWindow", "Test")};
static const char *EDIT_MENU_STR{QT_TRANSLATE_NOOP("MainWindow", "Edit")};
static const char *QUESTION_MENU_STR{QT_TRANSLATE_NOOP("MainWindow", "?")};

// -------------------------------------------------------

// Actions
static const QPair<const char *, const char *> START_ACTION_STR_PAIR{
    QT_TRANSLATE_NOOP("MainWindow", "Start"),
    QT_TRANSLATE_NOOP("MainWindow", "Start new test")};
static const QPair<const char *, const char *> STOP_ACTION_STR_PAIR{
    QT_TRANSLATE_NOOP("MainWindow", "Stop"),
    QT_TRANSLATE_NOOP("MainWindow", "Stop test")};
static const QPair<const char *, const char *> EXIT_ACTION_STR_PAIR{
    QT_TRANSLATE_NOOP("MainWindow", "Exit"),
    QT_TRANSLATE_NOOP("MainWindow", "Exit application")};
static const QPair<const char *, const char *> EDIT_DICTS_ACTION_STR_PAIR{
    QT_TRANSLATE_NOOP("MainWindow", "Edit noun dictionary"),
    QT_TRANSLATE_NOOP("MainWindow", "Add/remove words to/from dictionary")};
static const QPair<const char *, const char *> SETTINGS_ACTION_STR_PAIR{
    QT_TRANSLATE_NOOP("MainWindow", "Settings"),
    QT_TRANSLATE_NOOP("MainWindow", "Change settings")};
static const QPair<const char *, const char *> HELP_ACTION_STR_PAIR{
    QT_TRANSLATE_NOOP("MainWindow", "Help"),
    QT_TRANSLATE_NOOP("MainWindow", "Get help")};
static const QPair<const char *, const char *> ABOUT_ACTION_STR_PAIR{
    QT_TRANSLATE_NOOP("MainWindow", "About"),
    QT_TRANSLATE_NOOP("MainWindow", "About application")};

// -------------------------------------------------------

// Icons
static const char *START_ICON_PATH{":/imgs/start.png"};
static const char *STOP_ICON_PATH{":/imgs/stop.png"};
static const char *EXIT_ICON_PATH{":/imgs/exit.png"};
static const char *NOUN_ICON_PATH{":/imgs/noun.png"};
static const char *RUS_FLAG_ICON_PATH{":/imgs/rus_flag.png"};
static const char *USA_FLAG_ICON_PATH{":/imgs/usa_flag.png"};
static const char *VERB_ICON_PATH{":/imgs/verb.png"};
static const char *ADJECTIVE_ICON_PATH{":/imgs/adjective.png"};
static const char *STYLE_ICON_PATH{":/imgs/style.png"};
static const char *DICTS_ICON_PATH{":/imgs/books.png"};
static const char *SETTINGS_ICON_PATH{":/imgs/settings.png"};
static const char *HELP_ICON_PATH{":/imgs/help.png"};
static const char *ABOUT_ICON_PATH{":/imgs/about.png"};
static const char *TEST_BUTTON_ICON_PATH{":/imgs/check.png"};
static const char *ADD_BUTTON_ICON_PATH{":/imgs/add.png"};
static const char *REMOVE_BUTTON_ICON_PATH{":/imgs/remove.png"};

// -------------------------------------------------------

// button
static const char *TEST_BUTTON_CAPTION{
    QT_TRANSLATE_NOOP("MainWindow", "Check")};
static const char *TEST_BUTTON_TOOLTIP{
    QT_TRANSLATE_NOOP("MainWindow", "Check it")};

// -------------------------------------------------------

// Settings
// static const QString SETTINGS_STORAGE{"settings.conf"};

// -------------------------------------------------------

#endif // CONSTANTS_H
