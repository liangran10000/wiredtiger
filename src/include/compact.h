/*-
 * Copyright (c) 2008-2013 WiredTiger, Inc.
 *	All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 */

struct __wt_compact {
	uint32_t	lsm_count;	/* Number of LSM trees seen */
	uint32_t	file_count;	/* Number of files seen */
	uint64_t	max_time;	/* Configured timeout */
};