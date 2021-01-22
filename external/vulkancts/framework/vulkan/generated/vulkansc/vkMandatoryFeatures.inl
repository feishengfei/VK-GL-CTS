/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
bool checkMandatoryFeatures(const vkt::Context& context)
{
	if (!context.isInstanceFunctionalitySupported("VK_KHR_get_physical_device_properties2"))
		TCU_THROW(NotSupportedError, "Extension VK_KHR_get_physical_device_properties2 is not present");

	VkPhysicalDevice					physicalDevice		= context.getPhysicalDevice();
	const InstanceInterface&			vki					= context.getInstanceInterface();
	const vector<VkExtensionProperties>	deviceExtensions	= enumerateDeviceExtensionProperties(vki, physicalDevice, DE_NULL);

	tcu::TestLog& log = context.getTestContext().getLog();
	vk::VkPhysicalDeviceFeatures2 coreFeatures;
	deMemset(&coreFeatures, 0, sizeof(coreFeatures));
	coreFeatures.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
	void** nextPtr = &coreFeatures.pNext;

	vk::VkPhysicalDevice16BitStorageFeatures physicalDevice16BitStorageFeatures;
	deMemset(&physicalDevice16BitStorageFeatures, 0, sizeof(physicalDevice16BitStorageFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_16bit_storage")) )
	{
		physicalDevice16BitStorageFeatures.sType = getStructureType<VkPhysicalDevice16BitStorageFeatures>();
		*nextPtr = &physicalDevice16BitStorageFeatures;
		nextPtr  = &physicalDevice16BitStorageFeatures.pNext;
	}

	vk::VkPhysicalDevice8BitStorageFeatures physicalDevice8BitStorageFeatures;
	deMemset(&physicalDevice8BitStorageFeatures, 0, sizeof(physicalDevice8BitStorageFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_8bit_storage")) )
	{
		physicalDevice8BitStorageFeatures.sType = getStructureType<VkPhysicalDevice8BitStorageFeatures>();
		*nextPtr = &physicalDevice8BitStorageFeatures;
		nextPtr  = &physicalDevice8BitStorageFeatures.pNext;
	}

	vk::VkPhysicalDeviceBufferDeviceAddressFeatures physicalDeviceBufferDeviceAddressFeatures;
	deMemset(&physicalDeviceBufferDeviceAddressFeatures, 0, sizeof(physicalDeviceBufferDeviceAddressFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_buffer_device_address")) )
	{
		physicalDeviceBufferDeviceAddressFeatures.sType = getStructureType<VkPhysicalDeviceBufferDeviceAddressFeatures>();
		*nextPtr = &physicalDeviceBufferDeviceAddressFeatures;
		nextPtr  = &physicalDeviceBufferDeviceAddressFeatures.pNext;
	}

	vk::VkPhysicalDeviceDepthClipEnableFeaturesEXT physicalDeviceDepthClipEnableFeaturesEXT;
	deMemset(&physicalDeviceDepthClipEnableFeaturesEXT, 0, sizeof(physicalDeviceDepthClipEnableFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_depth_clip_enable")) )
	{
		physicalDeviceDepthClipEnableFeaturesEXT.sType = getStructureType<VkPhysicalDeviceDepthClipEnableFeaturesEXT>();
		*nextPtr = &physicalDeviceDepthClipEnableFeaturesEXT;
		nextPtr  = &physicalDeviceDepthClipEnableFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceDescriptorIndexingFeatures physicalDeviceDescriptorIndexingFeatures;
	deMemset(&physicalDeviceDescriptorIndexingFeatures, 0, sizeof(physicalDeviceDescriptorIndexingFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		physicalDeviceDescriptorIndexingFeatures.sType = getStructureType<VkPhysicalDeviceDescriptorIndexingFeatures>();
		*nextPtr = &physicalDeviceDescriptorIndexingFeatures;
		nextPtr  = &physicalDeviceDescriptorIndexingFeatures.pNext;
	}

	vk::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT physicalDeviceFragmentShaderInterlockFeaturesEXT;
	deMemset(&physicalDeviceFragmentShaderInterlockFeaturesEXT, 0, sizeof(physicalDeviceFragmentShaderInterlockFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_fragment_shader_interlock")) )
	{
		physicalDeviceFragmentShaderInterlockFeaturesEXT.sType = getStructureType<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>();
		*nextPtr = &physicalDeviceFragmentShaderInterlockFeaturesEXT;
		nextPtr  = &physicalDeviceFragmentShaderInterlockFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceHostQueryResetFeatures physicalDeviceHostQueryResetFeatures;
	deMemset(&physicalDeviceHostQueryResetFeatures, 0, sizeof(physicalDeviceHostQueryResetFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_host_query_reset")) )
	{
		physicalDeviceHostQueryResetFeatures.sType = getStructureType<VkPhysicalDeviceHostQueryResetFeatures>();
		*nextPtr = &physicalDeviceHostQueryResetFeatures;
		nextPtr  = &physicalDeviceHostQueryResetFeatures.pNext;
	}

	vk::VkPhysicalDeviceImagelessFramebufferFeatures physicalDeviceImagelessFramebufferFeatures;
	deMemset(&physicalDeviceImagelessFramebufferFeatures, 0, sizeof(physicalDeviceImagelessFramebufferFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_imageless_framebuffer")) )
	{
		physicalDeviceImagelessFramebufferFeatures.sType = getStructureType<VkPhysicalDeviceImagelessFramebufferFeatures>();
		*nextPtr = &physicalDeviceImagelessFramebufferFeatures;
		nextPtr  = &physicalDeviceImagelessFramebufferFeatures.pNext;
	}

	vk::VkPhysicalDeviceIndexTypeUint8FeaturesEXT physicalDeviceIndexTypeUint8FeaturesEXT;
	deMemset(&physicalDeviceIndexTypeUint8FeaturesEXT, 0, sizeof(physicalDeviceIndexTypeUint8FeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_index_type_uint8")) )
	{
		physicalDeviceIndexTypeUint8FeaturesEXT.sType = getStructureType<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>();
		*nextPtr = &physicalDeviceIndexTypeUint8FeaturesEXT;
		nextPtr  = &physicalDeviceIndexTypeUint8FeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceLineRasterizationFeaturesEXT physicalDeviceLineRasterizationFeaturesEXT;
	deMemset(&physicalDeviceLineRasterizationFeaturesEXT, 0, sizeof(physicalDeviceLineRasterizationFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_line_rasterization")) )
	{
		physicalDeviceLineRasterizationFeaturesEXT.sType = getStructureType<VkPhysicalDeviceLineRasterizationFeaturesEXT>();
		*nextPtr = &physicalDeviceLineRasterizationFeaturesEXT;
		nextPtr  = &physicalDeviceLineRasterizationFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceMultiviewFeatures physicalDeviceMultiviewFeatures;
	deMemset(&physicalDeviceMultiviewFeatures, 0, sizeof(physicalDeviceMultiviewFeatures));

	if ( context.contextSupports(vk::ApiVersion(1, 1, 0)) || isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_multiview")) )
	{
		physicalDeviceMultiviewFeatures.sType = getStructureType<VkPhysicalDeviceMultiviewFeatures>();
		*nextPtr = &physicalDeviceMultiviewFeatures;
		nextPtr  = &physicalDeviceMultiviewFeatures.pNext;
	}

	vk::VkPhysicalDeviceSamplerYcbcrConversionFeatures physicalDeviceSamplerYcbcrConversionFeatures;
	deMemset(&physicalDeviceSamplerYcbcrConversionFeatures, 0, sizeof(physicalDeviceSamplerYcbcrConversionFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_sampler_ycbcr_conversion")) )
	{
		physicalDeviceSamplerYcbcrConversionFeatures.sType = getStructureType<VkPhysicalDeviceSamplerYcbcrConversionFeatures>();
		*nextPtr = &physicalDeviceSamplerYcbcrConversionFeatures;
		nextPtr  = &physicalDeviceSamplerYcbcrConversionFeatures.pNext;
	}

	vk::VkPhysicalDeviceScalarBlockLayoutFeatures physicalDeviceScalarBlockLayoutFeatures;
	deMemset(&physicalDeviceScalarBlockLayoutFeatures, 0, sizeof(physicalDeviceScalarBlockLayoutFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_scalar_block_layout")) )
	{
		physicalDeviceScalarBlockLayoutFeatures.sType = getStructureType<VkPhysicalDeviceScalarBlockLayoutFeatures>();
		*nextPtr = &physicalDeviceScalarBlockLayoutFeatures;
		nextPtr  = &physicalDeviceScalarBlockLayoutFeatures.pNext;
	}

	vk::VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures physicalDeviceSeparateDepthStencilLayoutsFeatures;
	deMemset(&physicalDeviceSeparateDepthStencilLayoutsFeatures, 0, sizeof(physicalDeviceSeparateDepthStencilLayoutsFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_separate_depth_stencil_layouts")) )
	{
		physicalDeviceSeparateDepthStencilLayoutsFeatures.sType = getStructureType<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>();
		*nextPtr = &physicalDeviceSeparateDepthStencilLayoutsFeatures;
		nextPtr  = &physicalDeviceSeparateDepthStencilLayoutsFeatures.pNext;
	}

	vk::VkPhysicalDeviceShaderAtomicInt64Features physicalDeviceShaderAtomicInt64Features;
	deMemset(&physicalDeviceShaderAtomicInt64Features, 0, sizeof(physicalDeviceShaderAtomicInt64Features));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_atomic_int64")) )
	{
		physicalDeviceShaderAtomicInt64Features.sType = getStructureType<VkPhysicalDeviceShaderAtomicInt64Features>();
		*nextPtr = &physicalDeviceShaderAtomicInt64Features;
		nextPtr  = &physicalDeviceShaderAtomicInt64Features.pNext;
	}

	vk::VkPhysicalDeviceShaderClockFeaturesKHR physicalDeviceShaderClockFeaturesKHR;
	deMemset(&physicalDeviceShaderClockFeaturesKHR, 0, sizeof(physicalDeviceShaderClockFeaturesKHR));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_clock")) )
	{
		physicalDeviceShaderClockFeaturesKHR.sType = getStructureType<VkPhysicalDeviceShaderClockFeaturesKHR>();
		*nextPtr = &physicalDeviceShaderClockFeaturesKHR;
		nextPtr  = &physicalDeviceShaderClockFeaturesKHR.pNext;
	}

	vk::VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT;
	deMemset(&physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT, 0, sizeof(physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_shader_demote_to_helper_invocation")) )
	{
		physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT.sType = getStructureType<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>();
		*nextPtr = &physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT;
		nextPtr  = &physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceShaderFloat16Int8Features physicalDeviceShaderFloat16Int8Features;
	deMemset(&physicalDeviceShaderFloat16Int8Features, 0, sizeof(physicalDeviceShaderFloat16Int8Features));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_float16_int8")) )
	{
		physicalDeviceShaderFloat16Int8Features.sType = getStructureType<VkPhysicalDeviceShaderFloat16Int8Features>();
		*nextPtr = &physicalDeviceShaderFloat16Int8Features;
		nextPtr  = &physicalDeviceShaderFloat16Int8Features.pNext;
	}

	vk::VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT physicalDeviceShaderImageAtomicInt64FeaturesEXT;
	deMemset(&physicalDeviceShaderImageAtomicInt64FeaturesEXT, 0, sizeof(physicalDeviceShaderImageAtomicInt64FeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_shader_image_atomic_int64")) )
	{
		physicalDeviceShaderImageAtomicInt64FeaturesEXT.sType = getStructureType<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>();
		*nextPtr = &physicalDeviceShaderImageAtomicInt64FeaturesEXT;
		nextPtr  = &physicalDeviceShaderImageAtomicInt64FeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures physicalDeviceShaderSubgroupExtendedTypesFeatures;
	deMemset(&physicalDeviceShaderSubgroupExtendedTypesFeatures, 0, sizeof(physicalDeviceShaderSubgroupExtendedTypesFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_subgroup_extended_types")) )
	{
		physicalDeviceShaderSubgroupExtendedTypesFeatures.sType = getStructureType<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>();
		*nextPtr = &physicalDeviceShaderSubgroupExtendedTypesFeatures;
		nextPtr  = &physicalDeviceShaderSubgroupExtendedTypesFeatures.pNext;
	}

	vk::VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR physicalDeviceShaderTerminateInvocationFeaturesKHR;
	deMemset(&physicalDeviceShaderTerminateInvocationFeaturesKHR, 0, sizeof(physicalDeviceShaderTerminateInvocationFeaturesKHR));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_terminate_invocation")) )
	{
		physicalDeviceShaderTerminateInvocationFeaturesKHR.sType = getStructureType<VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR>();
		*nextPtr = &physicalDeviceShaderTerminateInvocationFeaturesKHR;
		nextPtr  = &physicalDeviceShaderTerminateInvocationFeaturesKHR.pNext;
	}

	vk::VkPhysicalDeviceSubgroupSizeControlFeaturesEXT physicalDeviceSubgroupSizeControlFeaturesEXT;
	deMemset(&physicalDeviceSubgroupSizeControlFeaturesEXT, 0, sizeof(physicalDeviceSubgroupSizeControlFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_subgroup_size_control")) )
	{
		physicalDeviceSubgroupSizeControlFeaturesEXT.sType = getStructureType<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>();
		*nextPtr = &physicalDeviceSubgroupSizeControlFeaturesEXT;
		nextPtr  = &physicalDeviceSubgroupSizeControlFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT physicalDeviceTexelBufferAlignmentFeaturesEXT;
	deMemset(&physicalDeviceTexelBufferAlignmentFeaturesEXT, 0, sizeof(physicalDeviceTexelBufferAlignmentFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_texel_buffer_alignment")) )
	{
		physicalDeviceTexelBufferAlignmentFeaturesEXT.sType = getStructureType<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>();
		*nextPtr = &physicalDeviceTexelBufferAlignmentFeaturesEXT;
		nextPtr  = &physicalDeviceTexelBufferAlignmentFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT physicalDeviceTextureCompressionASTCHDRFeaturesEXT;
	deMemset(&physicalDeviceTextureCompressionASTCHDRFeaturesEXT, 0, sizeof(physicalDeviceTextureCompressionASTCHDRFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_texture_compression_astc_hdr")) )
	{
		physicalDeviceTextureCompressionASTCHDRFeaturesEXT.sType = getStructureType<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>();
		*nextPtr = &physicalDeviceTextureCompressionASTCHDRFeaturesEXT;
		nextPtr  = &physicalDeviceTextureCompressionASTCHDRFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceTimelineSemaphoreFeatures physicalDeviceTimelineSemaphoreFeatures;
	deMemset(&physicalDeviceTimelineSemaphoreFeatures, 0, sizeof(physicalDeviceTimelineSemaphoreFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_timeline_semaphore")) )
	{
		physicalDeviceTimelineSemaphoreFeatures.sType = getStructureType<VkPhysicalDeviceTimelineSemaphoreFeatures>();
		*nextPtr = &physicalDeviceTimelineSemaphoreFeatures;
		nextPtr  = &physicalDeviceTimelineSemaphoreFeatures.pNext;
	}

	vk::VkPhysicalDeviceUniformBufferStandardLayoutFeatures physicalDeviceUniformBufferStandardLayoutFeatures;
	deMemset(&physicalDeviceUniformBufferStandardLayoutFeatures, 0, sizeof(physicalDeviceUniformBufferStandardLayoutFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_uniform_buffer_standard_layout")) )
	{
		physicalDeviceUniformBufferStandardLayoutFeatures.sType = getStructureType<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>();
		*nextPtr = &physicalDeviceUniformBufferStandardLayoutFeatures;
		nextPtr  = &physicalDeviceUniformBufferStandardLayoutFeatures.pNext;
	}

	vk::VkPhysicalDeviceVariablePointersFeatures physicalDeviceVariablePointersFeatures;
	deMemset(&physicalDeviceVariablePointersFeatures, 0, sizeof(physicalDeviceVariablePointersFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_variable_pointers")) )
	{
		physicalDeviceVariablePointersFeatures.sType = getStructureType<VkPhysicalDeviceVariablePointersFeatures>();
		*nextPtr = &physicalDeviceVariablePointersFeatures;
		nextPtr  = &physicalDeviceVariablePointersFeatures.pNext;
	}

	vk::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT physicalDeviceVertexAttributeDivisorFeaturesEXT;
	deMemset(&physicalDeviceVertexAttributeDivisorFeaturesEXT, 0, sizeof(physicalDeviceVertexAttributeDivisorFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_vertex_attribute_divisor")) )
	{
		physicalDeviceVertexAttributeDivisorFeaturesEXT.sType = getStructureType<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>();
		*nextPtr = &physicalDeviceVertexAttributeDivisorFeaturesEXT;
		nextPtr  = &physicalDeviceVertexAttributeDivisorFeaturesEXT.pNext;
	}

	vk::VkPhysicalDeviceVulkan11Features physicalDeviceVulkan11Features;
	deMemset(&physicalDeviceVulkan11Features, 0, sizeof(physicalDeviceVulkan11Features));

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		physicalDeviceVulkan11Features.sType = getStructureType<VkPhysicalDeviceVulkan11Features>();
		*nextPtr = &physicalDeviceVulkan11Features;
		nextPtr  = &physicalDeviceVulkan11Features.pNext;
	}

	vk::VkPhysicalDeviceVulkan12Features physicalDeviceVulkan12Features;
	deMemset(&physicalDeviceVulkan12Features, 0, sizeof(physicalDeviceVulkan12Features));

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		physicalDeviceVulkan12Features.sType = getStructureType<VkPhysicalDeviceVulkan12Features>();
		*nextPtr = &physicalDeviceVulkan12Features;
		nextPtr  = &physicalDeviceVulkan12Features.pNext;
	}

	vk::VkPhysicalDeviceVulkanMemoryModelFeatures physicalDeviceVulkanMemoryModelFeatures;
	deMemset(&physicalDeviceVulkanMemoryModelFeatures, 0, sizeof(physicalDeviceVulkanMemoryModelFeatures));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_vulkan_memory_model")) )
	{
		physicalDeviceVulkanMemoryModelFeatures.sType = getStructureType<VkPhysicalDeviceVulkanMemoryModelFeatures>();
		*nextPtr = &physicalDeviceVulkanMemoryModelFeatures;
		nextPtr  = &physicalDeviceVulkanMemoryModelFeatures.pNext;
	}

	vk::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT physicalDeviceYcbcrImageArraysFeaturesEXT;
	deMemset(&physicalDeviceYcbcrImageArraysFeaturesEXT, 0, sizeof(physicalDeviceYcbcrImageArraysFeaturesEXT));

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_ycbcr_image_arrays")) )
	{
		physicalDeviceYcbcrImageArraysFeaturesEXT.sType = getStructureType<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>();
		*nextPtr = &physicalDeviceYcbcrImageArraysFeaturesEXT;
		nextPtr  = &physicalDeviceYcbcrImageArraysFeaturesEXT.pNext;
	}

	context.getInstanceInterface().getPhysicalDeviceFeatures2(context.getPhysicalDevice(), &coreFeatures);
	bool result = true;

	{
		if ( coreFeatures.features.robustBufferAccess == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature robustBufferAccess not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( coreFeatures.features.shaderSampledImageArrayDynamicIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderSampledImageArrayDynamicIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( coreFeatures.features.shaderStorageBufferArrayDynamicIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderStorageBufferArrayDynamicIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_8bit_storage")) )
	{
		if ( physicalDevice8BitStorageFeatures.storageBuffer8BitAccess == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature storageBuffer8BitAccess not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan11Features.multiview == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature multiview not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 1, 0)) )
	{
		if ( physicalDeviceMultiviewFeatures.multiview == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature multiview not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_multiview")) )
	{
		if ( physicalDeviceMultiviewFeatures.multiview == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature multiview not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_variable_pointers")) )
	{
		if ( physicalDeviceVariablePointersFeatures.variablePointersStorageBuffer == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature variablePointersStorageBuffer not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.shaderUniformTexelBufferArrayDynamicIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderUniformTexelBufferArrayDynamicIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.shaderStorageTexelBufferArrayDynamicIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderStorageTexelBufferArrayDynamicIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.shaderSampledImageArrayNonUniformIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderSampledImageArrayNonUniformIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.shaderStorageBufferArrayNonUniformIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderStorageBufferArrayNonUniformIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.shaderUniformTexelBufferArrayNonUniformIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderUniformTexelBufferArrayNonUniformIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.descriptorBindingSampledImageUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingSampledImageUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.descriptorBindingStorageImageUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingStorageImageUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.descriptorBindingStorageBufferUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingStorageBufferUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.descriptorBindingUniformTexelBufferUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingUniformTexelBufferUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.descriptorBindingStorageTexelBufferUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingStorageTexelBufferUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.descriptorBindingUpdateUnusedWhilePending == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingUpdateUnusedWhilePending not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.descriptorBindingPartiallyBound == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingPartiallyBound not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_descriptor_indexing")) )
	{
		if ( physicalDeviceDescriptorIndexingFeatures.runtimeDescriptorArray == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature runtimeDescriptorArray not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_scalar_block_layout")) )
	{
		if ( physicalDeviceScalarBlockLayoutFeatures.scalarBlockLayout == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature scalarBlockLayout not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_uniform_buffer_standard_layout")) )
	{
		if ( physicalDeviceUniformBufferStandardLayoutFeatures.uniformBufferStandardLayout == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature uniformBufferStandardLayout not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_subgroup_size_control")) )
	{
		if ( physicalDeviceSubgroupSizeControlFeaturesEXT.subgroupSizeControl == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature subgroupSizeControl not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_subgroup_size_control")) )
	{
		if ( physicalDeviceSubgroupSizeControlFeaturesEXT.computeFullSubgroups == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature computeFullSubgroups not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan12Features.subgroupBroadcastDynamicId == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature subgroupBroadcastDynamicId not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_subgroup_extended_types")) )
	{
		if ( physicalDeviceShaderSubgroupExtendedTypesFeatures.shaderSubgroupExtendedTypes == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderSubgroupExtendedTypes not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan12Features.shaderSubgroupExtendedTypes == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderSubgroupExtendedTypes not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_imageless_framebuffer")) )
	{
		if ( physicalDeviceImagelessFramebufferFeatures.imagelessFramebuffer == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature imagelessFramebuffer not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan12Features.imagelessFramebuffer == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature imagelessFramebuffer not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan12Features.uniformBufferStandardLayout == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature uniformBufferStandardLayout not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_separate_depth_stencil_layouts")) )
	{
		if ( physicalDeviceSeparateDepthStencilLayoutsFeatures.separateDepthStencilLayouts == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature separateDepthStencilLayouts not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan12Features.separateDepthStencilLayouts == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature separateDepthStencilLayouts not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_host_query_reset")) )
	{
		if ( physicalDeviceHostQueryResetFeatures.hostQueryReset == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature hostQueryReset not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan12Features.hostQueryReset == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature hostQueryReset not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_timeline_semaphore")) )
	{
		if ( physicalDeviceTimelineSemaphoreFeatures.timelineSemaphore == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature timelineSemaphore not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) )
	{
		if ( physicalDeviceVulkan12Features.timelineSemaphore == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature timelineSemaphore not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.shaderUniformTexelBufferArrayDynamicIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderUniformTexelBufferArrayDynamicIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.shaderStorageTexelBufferArrayDynamicIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderStorageTexelBufferArrayDynamicIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.shaderSampledImageArrayNonUniformIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderSampledImageArrayNonUniformIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.shaderStorageBufferArrayNonUniformIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderStorageBufferArrayNonUniformIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.shaderUniformTexelBufferArrayNonUniformIndexing == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderUniformTexelBufferArrayNonUniformIndexing not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.descriptorBindingSampledImageUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingSampledImageUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.descriptorBindingStorageImageUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingStorageImageUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.descriptorBindingStorageBufferUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingStorageBufferUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.descriptorBindingUniformTexelBufferUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingUniformTexelBufferUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.descriptorBindingStorageTexelBufferUpdateAfterBind == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingStorageTexelBufferUpdateAfterBind not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.descriptorBindingUpdateUnusedWhilePending == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingUpdateUnusedWhilePending not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.descriptorBindingPartiallyBound == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature descriptorBindingPartiallyBound not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && physicalDeviceVulkan12Features.descriptorIndexing )
	{
		if ( physicalDeviceVulkan12Features.runtimeDescriptorArray == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature runtimeDescriptorArray not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_texture_compression_astc_hdr")) )
	{
		if ( physicalDeviceTextureCompressionASTCHDRFeaturesEXT.textureCompressionASTC_HDR == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature textureCompressionASTC_HDR not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_depth_clip_enable")) )
	{
		if ( physicalDeviceDepthClipEnableFeaturesEXT.depthClipEnable == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature depthClipEnable not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_ycbcr_image_arrays")) )
	{
		if ( physicalDeviceYcbcrImageArraysFeaturesEXT.ycbcrImageArrays == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature ycbcrImageArrays not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_index_type_uint8")) )
	{
		if ( physicalDeviceIndexTypeUint8FeaturesEXT.indexTypeUint8 == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature indexTypeUint8 not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_shader_demote_to_helper_invocation")) )
	{
		if ( physicalDeviceShaderDemoteToHelperInvocationFeaturesEXT.shaderDemoteToHelperInvocation == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderDemoteToHelperInvocation not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_texel_buffer_alignment")) )
	{
		if ( physicalDeviceTexelBufferAlignmentFeaturesEXT.texelBufferAlignment == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature texelBufferAlignment not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_vulkan_memory_model")) )
	{
		if ( physicalDeviceVulkanMemoryModelFeatures.vulkanMemoryModel == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature vulkanMemoryModel not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_buffer_device_address")) )
	{
		if ( physicalDeviceBufferDeviceAddressFeatures.bufferDeviceAddress == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature bufferDeviceAddress not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_vertex_attribute_divisor")) )
	{
		if ( physicalDeviceVertexAttributeDivisorFeaturesEXT.vertexAttributeInstanceRateDivisor == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature vertexAttributeInstanceRateDivisor not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_clock")) )
	{
		if ( physicalDeviceShaderClockFeaturesKHR.shaderSubgroupClock == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderSubgroupClock not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_atomic_int64")) )
	{
		if ( physicalDeviceShaderAtomicInt64Features.shaderBufferInt64Atomics == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderBufferInt64Atomics not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_16bit_storage")) )
	{
		if ( physicalDevice16BitStorageFeatures.storageBuffer16BitAccess == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature storageBuffer16BitAccess not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_float16_int8")) )
	{
		if ( ( physicalDeviceShaderFloat16Int8Features.shaderFloat16 == VK_FALSE ) && ( physicalDeviceShaderFloat16Int8Features.shaderInt8 == VK_FALSE ) )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderFloat16 or shaderInt8 not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_fragment_shader_interlock")) )
	{
		if ( ( physicalDeviceFragmentShaderInterlockFeaturesEXT.fragmentShaderSampleInterlock == VK_FALSE ) && ( physicalDeviceFragmentShaderInterlockFeaturesEXT.fragmentShaderPixelInterlock == VK_FALSE ) && ( physicalDeviceFragmentShaderInterlockFeaturesEXT.fragmentShaderShadingRateInterlock == VK_FALSE ) )
		{
			log << tcu::TestLog::Message << "Mandatory feature fragmentShaderSampleInterlock or fragmentShaderPixelInterlock or fragmentShaderShadingRateInterlock not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_line_rasterization")) )
	{
		if ( ( physicalDeviceLineRasterizationFeaturesEXT.rectangularLines == VK_FALSE ) && ( physicalDeviceLineRasterizationFeaturesEXT.bresenhamLines == VK_FALSE ) && ( physicalDeviceLineRasterizationFeaturesEXT.smoothLines == VK_FALSE ) && ( physicalDeviceLineRasterizationFeaturesEXT.stippledRectangularLines == VK_FALSE ) && ( physicalDeviceLineRasterizationFeaturesEXT.stippledBresenhamLines == VK_FALSE ) && ( physicalDeviceLineRasterizationFeaturesEXT.stippledSmoothLines == VK_FALSE ) )
		{
			log << tcu::TestLog::Message << "Mandatory feature rectangularLines or bresenhamLines or smoothLines or stippledRectangularLines or stippledBresenhamLines or stippledSmoothLines not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_sampler_ycbcr_conversion")) )
	{
		if ( physicalDeviceSamplerYcbcrConversionFeatures.samplerYcbcrConversion == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature samplerYcbcrConversion not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_draw_indirect_count")) )
	{
		if ( physicalDeviceVulkan12Features.drawIndirectCount == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature drawIndirectCount not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_sampler_mirror_clamp_to_edge")) )
	{
		if ( physicalDeviceVulkan12Features.samplerMirrorClampToEdge == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature samplerMirrorClampToEdge not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_sampler_filter_minmax")) )
	{
		if ( physicalDeviceVulkan12Features.samplerFilterMinmax == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature samplerFilterMinmax not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_shader_viewport_index_layer")) )
	{
		if ( physicalDeviceVulkan12Features.shaderOutputViewportIndex == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderOutputViewportIndex not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( context.contextSupports(vk::ApiVersion(1, 2, 0)) && isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_shader_viewport_index_layer")) )
	{
		if ( physicalDeviceVulkan12Features.shaderOutputLayer == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderOutputLayer not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_KHR_shader_terminate_invocation")) )
	{
		if ( physicalDeviceShaderTerminateInvocationFeaturesKHR.shaderTerminateInvocation == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderTerminateInvocation not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	if ( isExtensionSupported(deviceExtensions, RequiredExtension("VK_EXT_shader_image_atomic_int64")) )
	{
		if ( physicalDeviceShaderImageAtomicInt64FeaturesEXT.shaderImageInt64Atomics == VK_FALSE )
		{
			log << tcu::TestLog::Message << "Mandatory feature shaderImageInt64Atomics not supported" << tcu::TestLog::EndMessage;
			result = false;
		}
	}

	return result;
}

