/* See LICENSE file for copyright and license details. */

static char *const rcinitcmd[]     = { "/sbin/rc.init", NULL };
static char *const rcrebootcmd[]   = { "/sbin/rc.shutdown", "reboot", NULL };
static char *const rcpoweroffcmd[] = { "/sbin/rc.shutdown", "poweroff", NULL };
