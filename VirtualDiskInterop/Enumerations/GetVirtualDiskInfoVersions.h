#pragma once

using namespace System;

namespace VirtualDiskInterop
{
	public enum class GetVirtualDiskInfoVersions
	{
		Unspecified = GET_VIRTUAL_DISK_INFO_UNSPECIFIED,
		Size = GET_VIRTUAL_DISK_INFO_SIZE,
		Identifier = GET_VIRTUAL_DISK_INFO_IDENTIFIER,
		ParentLocation = GET_VIRTUAL_DISK_INFO_PARENT_LOCATION,
		ParentIdentifier = GET_VIRTUAL_DISK_INFO_PARENT_IDENTIFIER,
		ParentTimestamp = GET_VIRTUAL_DISK_INFO_PARENT_TIMESTAMP,
		VirtualStorageType = GET_VIRTUAL_DISK_INFO_VIRTUAL_STORAGE_TYPE,
		ProviderSubtype = GET_VIRTUAL_DISK_INFO_PROVIDER_SUBTYPE,
		Is4kAligned = GET_VIRTUAL_DISK_INFO_IS_4K_ALIGNED,
		PhysicalDisk = GET_VIRTUAL_DISK_INFO_PHYSICAL_DISK,
		PhysicalSectorSize = GET_VIRTUAL_DISK_INFO_VHD_PHYSICAL_SECTOR_SIZE,
		SmallestSafeVirtualSize = GET_VIRTUAL_DISK_INFO_SMALLEST_SAFE_VIRTUAL_SIZE,
		Fragmentation = GET_VIRTUAL_DISK_INFO_FRAGMENTATION,
		IsLoaded = GET_VIRTUAL_DISK_INFO_IS_LOADED,
		VirtualDiskID = GET_VIRTUAL_DISK_INFO_VIRTUAL_DISK_ID,
#ifdef WIN10SUPPORT
		ChangeTrackingState = GET_VIRTUAL_DISK_INFO_CHANGE_TRACKING_STATE
#endif
	};
}