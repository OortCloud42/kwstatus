#include "modules.h"

/* refer to each module documentation in its source file to see what parameters it accepts. */
struct modules mdl[] = {
  /* function, .str | .num | .no_delim | .icon */
  /* when .no_delim is set to 1 then no delimeter is added between this and next module */
  /* icon adds icon before text from module */
  {interface, .str = "wlan0", .icon = " "},
  //{mpd}, // to use, enable MPD in config.mk
  {backlight, .str = "intel_backlight"},
  {battery, .str = "BAT0", .num = 3},
  {run_command, .str = "date '+%a %m.%d'", .num = 240, .icon = "📅 "},
  {clockm, .str = "%i %02H:%02M:%02S", .num = 1},
};

/* bar will not update more frequently than align_ms, align_ms also adds delay to bar */
const unsigned int align_ms = 20;

/* delimiter between modules */
const char delim[] = " · ";
