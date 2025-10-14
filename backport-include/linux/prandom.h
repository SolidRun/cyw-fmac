#ifndef __BACKPORT_PRANDOM_H
#define __BACKPORT_PRANDOM_H
#include_next <linux/prandom.h>
#include <linux/version.h>

#if !LINUX_VERSION_IS_LESS(6,2,0)
/* removed with v6.2 */
static inline u32 prandom_u32_max(u32 ep_ro)
{
	return get_random_u32_below(ep_ro);
}
#endif

#endif /* __BACKPORT_PRANDOM_H */
