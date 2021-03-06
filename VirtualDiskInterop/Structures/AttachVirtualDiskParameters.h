#pragma once


using namespace System;

namespace VirtualDiskInterop
{
	public value class AttachVirtualDiskParametersVersion1
	{
	public:
		property unsigned long Reserved
		{
			unsigned long get()
			{
				return this->m_Reserved;
			}
			void set(unsigned long value)
			{
				throw gcnew NotSupportedException("Cannot set reserved parameter");
			}
		}
	private:
		unsigned long m_Reserved = 0;
	};

	public value class AttachVirtualDiskParameters
	{
	public:
		property AttachVirtualDiskVersions Version
		{
			AttachVirtualDiskVersions get()
			{
				return this->m_Version;
			}
			void set(AttachVirtualDiskVersions value)
			{
				this->m_Version = value;
			}
		}
		property AttachVirtualDiskParametersVersion1 Version1
		{
			AttachVirtualDiskParametersVersion1 get()
			{
				return this->m_Version1;
			}
			void set(AttachVirtualDiskParametersVersion1 value)
			{
				this->m_Version1 = value;
			}
		}
	private:
		AttachVirtualDiskVersions m_Version;
		AttachVirtualDiskParametersVersion1 m_Version1;
	};
}