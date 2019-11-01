// IOCTLS.H -- IOCTL code definitions for fileio driver
// Copyright (C) 1999 by Walter Oney
// All rights reserved

#ifndef IOCTLS_H
#define IOCTLS_H

#ifndef CTL_CODE
	#pragma message("CTL_CODE undefined. Include winioctl.h or wdm.h")
#endif

#define IOCTL_ENABLE_INT CTL_CODE(\
			FILE_DEVICE_UNKNOWN, \
			0x800, \
			METHOD_BUFFERED, \
			FILE_ANY_ACCESS)

#define IOCTL_DISABLE_INT CTL_CODE(\
			FILE_DEVICE_UNKNOWN, \
			0x801, \
			METHOD_BUFFERED, \
			FILE_ANY_ACCESS)

#define IOCTL_READ_FROM_101 CTL_CODE(\
			FILE_DEVICE_UNKNOWN, \
			0x802, \
			METHOD_DIRECT, \
			FILE_ANY_ACCESS)
#endif
