#pragma once

#define IOCTL_DEVICETYPE_BASE	0x800
#define IOCTL_FUNCTION_INDEX	0x800
#define IOCTRL_MSG_REQUEST CTL_CODE(IOCTL_DEVICETYPE_BASE, IOCTL_FUNCTION_INDEX, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTRL_MSG_REPLY   CTL_CODE(IOCTL_DEVICETYPE_BASE, IOCTL_FUNCTION_INDEX, METHOD_BUFFERED, FILE_ANY_ACCESS)