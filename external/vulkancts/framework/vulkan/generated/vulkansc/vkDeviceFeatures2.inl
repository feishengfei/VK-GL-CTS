/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
VkPhysicalDeviceScalarBlockLayoutFeatures			deviceScalarBlockLayoutFeatures[count];
VkPhysicalDevice16BitStorageFeatures				device16BitStorageFeatures[count];
VkPhysicalDeviceMultiviewFeatures					deviceMultiviewFeatures[count];
VkPhysicalDeviceProtectedMemoryFeatures				deviceProtectedMemoryFeatures[count];
VkPhysicalDeviceSamplerYcbcrConversionFeatures		deviceSamplerYcbcrConversionFeatures[count];
VkPhysicalDeviceVariablePointersFeatures			deviceVariablePointersFeatures[count];
VkPhysicalDevice8BitStorageFeatures					device8BitStorageFeatures[count];
VkPhysicalDeviceShaderAtomicInt64Features			deviceShaderAtomicInt64Features[count];
VkPhysicalDeviceShaderFloat16Int8Features			deviceShaderFloat16Int8Features[count];
VkPhysicalDeviceBufferDeviceAddressFeatures			deviceBufferDeviceAddressFeatures[count];
VkPhysicalDeviceDescriptorIndexingFeatures			deviceDescriptorIndexingFeatures[count];
VkPhysicalDeviceTimelineSemaphoreFeatures			deviceTimelineSemaphoreFeatures[count];

const bool isScalarBlockLayoutFeatures			=																	   context.contextSupports(vk::ApiVersion(1, 2, 0));
const bool is16BitStorageFeatures				=																	   context.contextSupports(vk::ApiVersion(1, 1, 0));
const bool isMultiviewFeatures					=																	   context.contextSupports(vk::ApiVersion(1, 1, 0));
const bool isProtectedMemoryFeatures			=																	   context.contextSupports(vk::ApiVersion(1, 1, 0));
const bool isSamplerYcbcrConversionFeatures		=																	   context.contextSupports(vk::ApiVersion(1, 1, 0));
const bool isVariablePointersFeatures			=																	   context.contextSupports(vk::ApiVersion(1, 1, 0));
const bool is8BitStorageFeatures				=																	   context.contextSupports(vk::ApiVersion(1, 2, 0));
const bool isShaderAtomicInt64Features			=																	   context.contextSupports(vk::ApiVersion(1, 2, 0));
const bool isShaderFloat16Int8Features			=																	   context.contextSupports(vk::ApiVersion(1, 2, 0));
const bool isBufferDeviceAddressFeatures		=																	   context.contextSupports(vk::ApiVersion(1, 2, 0));
const bool isDescriptorIndexingFeatures			=																	   context.contextSupports(vk::ApiVersion(1, 2, 0));
const bool isTimelineSemaphoreFeatures			=																	   context.contextSupports(vk::ApiVersion(1, 2, 0));

for (int ndx = 0; ndx < count; ++ndx)
{
	deMemset(&deviceScalarBlockLayoutFeatures[ndx],			0xFF * ndx, sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures));
	deMemset(&device16BitStorageFeatures[ndx],				0xFF * ndx, sizeof(VkPhysicalDevice16BitStorageFeatures));
	deMemset(&deviceMultiviewFeatures[ndx],					0xFF * ndx, sizeof(VkPhysicalDeviceMultiviewFeatures));
	deMemset(&deviceProtectedMemoryFeatures[ndx],			0xFF * ndx, sizeof(VkPhysicalDeviceProtectedMemoryFeatures));
	deMemset(&deviceSamplerYcbcrConversionFeatures[ndx],	0xFF * ndx, sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures));
	deMemset(&deviceVariablePointersFeatures[ndx],			0xFF * ndx, sizeof(VkPhysicalDeviceVariablePointersFeatures));
	deMemset(&device8BitStorageFeatures[ndx],				0xFF * ndx, sizeof(VkPhysicalDevice8BitStorageFeatures));
	deMemset(&deviceShaderAtomicInt64Features[ndx],			0xFF * ndx, sizeof(VkPhysicalDeviceShaderAtomicInt64Features));
	deMemset(&deviceShaderFloat16Int8Features[ndx],			0xFF * ndx, sizeof(VkPhysicalDeviceShaderFloat16Int8Features));
	deMemset(&deviceBufferDeviceAddressFeatures[ndx],		0xFF * ndx, sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures));
	deMemset(&deviceDescriptorIndexingFeatures[ndx],		0xFF * ndx, sizeof(VkPhysicalDeviceDescriptorIndexingFeatures));
	deMemset(&deviceTimelineSemaphoreFeatures[ndx],			0xFF * ndx, sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures));

	deviceScalarBlockLayoutFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
	deviceScalarBlockLayoutFeatures[ndx].pNext = &device16BitStorageFeatures[ndx];

	device16BitStorageFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
	device16BitStorageFeatures[ndx].pNext = &deviceMultiviewFeatures[ndx];

	deviceMultiviewFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
	deviceMultiviewFeatures[ndx].pNext = &deviceProtectedMemoryFeatures[ndx];

	deviceProtectedMemoryFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
	deviceProtectedMemoryFeatures[ndx].pNext = &deviceSamplerYcbcrConversionFeatures[ndx];

	deviceSamplerYcbcrConversionFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
	deviceSamplerYcbcrConversionFeatures[ndx].pNext = &deviceVariablePointersFeatures[ndx];

	deviceVariablePointersFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;
	deviceVariablePointersFeatures[ndx].pNext = &device8BitStorageFeatures[ndx];

	device8BitStorageFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;
	device8BitStorageFeatures[ndx].pNext = &deviceShaderAtomicInt64Features[ndx];

	deviceShaderAtomicInt64Features[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;
	deviceShaderAtomicInt64Features[ndx].pNext = &deviceShaderFloat16Int8Features[ndx];

	deviceShaderFloat16Int8Features[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;
	deviceShaderFloat16Int8Features[ndx].pNext = &deviceBufferDeviceAddressFeatures[ndx];

	deviceBufferDeviceAddressFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;
	deviceBufferDeviceAddressFeatures[ndx].pNext = &deviceDescriptorIndexingFeatures[ndx];

	deviceDescriptorIndexingFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;
	deviceDescriptorIndexingFeatures[ndx].pNext = &deviceTimelineSemaphoreFeatures[ndx];

	deviceTimelineSemaphoreFeatures[ndx].sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
	deviceTimelineSemaphoreFeatures[ndx].pNext = DE_NULL;

	deMemset(&extFeatures.features, 0xcd, sizeof(extFeatures.features));
	extFeatures.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
	extFeatures.pNext = &deviceScalarBlockLayoutFeatures[ndx];
	vki.getPhysicalDeviceFeatures2(physicalDevice, &extFeatures);
}

if (isScalarBlockLayoutFeatures)
	log << TestLog::Message << deviceScalarBlockLayoutFeatures[0] << TestLog::EndMessage;
if (is16BitStorageFeatures)
	log << TestLog::Message << device16BitStorageFeatures[0] << TestLog::EndMessage;
if (isMultiviewFeatures)
	log << TestLog::Message << deviceMultiviewFeatures[0] << TestLog::EndMessage;
if (isProtectedMemoryFeatures)
	log << TestLog::Message << deviceProtectedMemoryFeatures[0] << TestLog::EndMessage;
if (isSamplerYcbcrConversionFeatures)
	log << TestLog::Message << deviceSamplerYcbcrConversionFeatures[0] << TestLog::EndMessage;
if (isVariablePointersFeatures)
	log << TestLog::Message << deviceVariablePointersFeatures[0] << TestLog::EndMessage;
if (is8BitStorageFeatures)
	log << TestLog::Message << device8BitStorageFeatures[0] << TestLog::EndMessage;
if (isShaderAtomicInt64Features)
	log << TestLog::Message << deviceShaderAtomicInt64Features[0] << TestLog::EndMessage;
if (isShaderFloat16Int8Features)
	log << TestLog::Message << deviceShaderFloat16Int8Features[0] << TestLog::EndMessage;
if (isBufferDeviceAddressFeatures)
	log << TestLog::Message << deviceBufferDeviceAddressFeatures[0] << TestLog::EndMessage;
if (isDescriptorIndexingFeatures)
	log << TestLog::Message << deviceDescriptorIndexingFeatures[0] << TestLog::EndMessage;
if (isTimelineSemaphoreFeatures)
	log << TestLog::Message << deviceTimelineSemaphoreFeatures[0] << TestLog::EndMessage;

if (isScalarBlockLayoutFeatures &&
	(deviceScalarBlockLayoutFeatures[0].scalarBlockLayout != deviceScalarBlockLayoutFeatures[1].scalarBlockLayout))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceScalarBlockLayoutFeatures");
}
if (is16BitStorageFeatures &&
	(device16BitStorageFeatures[0].storageBuffer16BitAccess != device16BitStorageFeatures[1].storageBuffer16BitAccess ||
	 device16BitStorageFeatures[0].uniformAndStorageBuffer16BitAccess != device16BitStorageFeatures[1].uniformAndStorageBuffer16BitAccess ||
	 device16BitStorageFeatures[0].storagePushConstant16 != device16BitStorageFeatures[1].storagePushConstant16 ||
	 device16BitStorageFeatures[0].storageInputOutput16 != device16BitStorageFeatures[1].storageInputOutput16))
{
		TCU_FAIL("Mismatch between VkPhysicalDevice16BitStorageFeatures");
}
if (isMultiviewFeatures &&
	(deviceMultiviewFeatures[0].multiview != deviceMultiviewFeatures[1].multiview ||
	 deviceMultiviewFeatures[0].multiviewGeometryShader != deviceMultiviewFeatures[1].multiviewGeometryShader ||
	 deviceMultiviewFeatures[0].multiviewTessellationShader != deviceMultiviewFeatures[1].multiviewTessellationShader))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceMultiviewFeatures");
}
if (isProtectedMemoryFeatures &&
	(deviceProtectedMemoryFeatures[0].protectedMemory != deviceProtectedMemoryFeatures[1].protectedMemory))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceProtectedMemoryFeatures");
}
if (isSamplerYcbcrConversionFeatures &&
	(deviceSamplerYcbcrConversionFeatures[0].samplerYcbcrConversion != deviceSamplerYcbcrConversionFeatures[1].samplerYcbcrConversion))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceSamplerYcbcrConversionFeatures");
}
if (isVariablePointersFeatures &&
	(deviceVariablePointersFeatures[0].variablePointersStorageBuffer != deviceVariablePointersFeatures[1].variablePointersStorageBuffer ||
	 deviceVariablePointersFeatures[0].variablePointers != deviceVariablePointersFeatures[1].variablePointers))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceVariablePointersFeatures");
}
if (is8BitStorageFeatures &&
	(device8BitStorageFeatures[0].storageBuffer8BitAccess != device8BitStorageFeatures[1].storageBuffer8BitAccess ||
	 device8BitStorageFeatures[0].uniformAndStorageBuffer8BitAccess != device8BitStorageFeatures[1].uniformAndStorageBuffer8BitAccess ||
	 device8BitStorageFeatures[0].storagePushConstant8 != device8BitStorageFeatures[1].storagePushConstant8))
{
		TCU_FAIL("Mismatch between VkPhysicalDevice8BitStorageFeatures");
}
if (isShaderAtomicInt64Features &&
	(deviceShaderAtomicInt64Features[0].shaderBufferInt64Atomics != deviceShaderAtomicInt64Features[1].shaderBufferInt64Atomics ||
	 deviceShaderAtomicInt64Features[0].shaderSharedInt64Atomics != deviceShaderAtomicInt64Features[1].shaderSharedInt64Atomics))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceShaderAtomicInt64Features");
}
if (isShaderFloat16Int8Features &&
	(deviceShaderFloat16Int8Features[0].shaderFloat16 != deviceShaderFloat16Int8Features[1].shaderFloat16 ||
	 deviceShaderFloat16Int8Features[0].shaderInt8 != deviceShaderFloat16Int8Features[1].shaderInt8))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceShaderFloat16Int8Features");
}
if (isBufferDeviceAddressFeatures &&
	(deviceBufferDeviceAddressFeatures[0].bufferDeviceAddress != deviceBufferDeviceAddressFeatures[1].bufferDeviceAddress ||
	 deviceBufferDeviceAddressFeatures[0].bufferDeviceAddressCaptureReplay != deviceBufferDeviceAddressFeatures[1].bufferDeviceAddressCaptureReplay ||
	 deviceBufferDeviceAddressFeatures[0].bufferDeviceAddressMultiDevice != deviceBufferDeviceAddressFeatures[1].bufferDeviceAddressMultiDevice))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceBufferDeviceAddressFeatures");
}
if (isDescriptorIndexingFeatures &&
	(deviceDescriptorIndexingFeatures[0].shaderInputAttachmentArrayDynamicIndexing != deviceDescriptorIndexingFeatures[1].shaderInputAttachmentArrayDynamicIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderUniformTexelBufferArrayDynamicIndexing != deviceDescriptorIndexingFeatures[1].shaderUniformTexelBufferArrayDynamicIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderStorageTexelBufferArrayDynamicIndexing != deviceDescriptorIndexingFeatures[1].shaderStorageTexelBufferArrayDynamicIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderUniformBufferArrayNonUniformIndexing != deviceDescriptorIndexingFeatures[1].shaderUniformBufferArrayNonUniformIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderSampledImageArrayNonUniformIndexing != deviceDescriptorIndexingFeatures[1].shaderSampledImageArrayNonUniformIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderStorageBufferArrayNonUniformIndexing != deviceDescriptorIndexingFeatures[1].shaderStorageBufferArrayNonUniformIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderStorageImageArrayNonUniformIndexing != deviceDescriptorIndexingFeatures[1].shaderStorageImageArrayNonUniformIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderInputAttachmentArrayNonUniformIndexing != deviceDescriptorIndexingFeatures[1].shaderInputAttachmentArrayNonUniformIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderUniformTexelBufferArrayNonUniformIndexing != deviceDescriptorIndexingFeatures[1].shaderUniformTexelBufferArrayNonUniformIndexing ||
	 deviceDescriptorIndexingFeatures[0].shaderStorageTexelBufferArrayNonUniformIndexing != deviceDescriptorIndexingFeatures[1].shaderStorageTexelBufferArrayNonUniformIndexing ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingUniformBufferUpdateAfterBind != deviceDescriptorIndexingFeatures[1].descriptorBindingUniformBufferUpdateAfterBind ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingSampledImageUpdateAfterBind != deviceDescriptorIndexingFeatures[1].descriptorBindingSampledImageUpdateAfterBind ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingStorageImageUpdateAfterBind != deviceDescriptorIndexingFeatures[1].descriptorBindingStorageImageUpdateAfterBind ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingStorageBufferUpdateAfterBind != deviceDescriptorIndexingFeatures[1].descriptorBindingStorageBufferUpdateAfterBind ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingUniformTexelBufferUpdateAfterBind != deviceDescriptorIndexingFeatures[1].descriptorBindingUniformTexelBufferUpdateAfterBind ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingStorageTexelBufferUpdateAfterBind != deviceDescriptorIndexingFeatures[1].descriptorBindingStorageTexelBufferUpdateAfterBind ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingUpdateUnusedWhilePending != deviceDescriptorIndexingFeatures[1].descriptorBindingUpdateUnusedWhilePending ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingPartiallyBound != deviceDescriptorIndexingFeatures[1].descriptorBindingPartiallyBound ||
	 deviceDescriptorIndexingFeatures[0].descriptorBindingVariableDescriptorCount != deviceDescriptorIndexingFeatures[1].descriptorBindingVariableDescriptorCount ||
	 deviceDescriptorIndexingFeatures[0].runtimeDescriptorArray != deviceDescriptorIndexingFeatures[1].runtimeDescriptorArray))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceDescriptorIndexingFeatures");
}
if (isTimelineSemaphoreFeatures &&
	(deviceTimelineSemaphoreFeatures[0].timelineSemaphore != deviceTimelineSemaphoreFeatures[1].timelineSemaphore))
{
		TCU_FAIL("Mismatch between VkPhysicalDeviceTimelineSemaphoreFeatures");
}
