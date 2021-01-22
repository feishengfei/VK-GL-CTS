/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */

PFN_vkVoidFunction DeviceDriver::getDeviceProcAddr (VkDevice device, const char* pName) const
{
	return m_vk.getDeviceProcAddr(device, pName);
}

void DeviceDriver::destroyDevice (VkDevice device, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyDevice(device, pAllocator);
}

void DeviceDriver::getDeviceQueue (VkDevice device, deUint32 queueFamilyIndex, deUint32 queueIndex, VkQueue* pQueue) const
{
	m_vk.getDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
}

VkResult DeviceDriver::queueSubmit (VkQueue queue, deUint32 submitCount, const VkSubmitInfo* pSubmits, VkFence fence) const
{
	return m_vk.queueSubmit(queue, submitCount, pSubmits, fence);
}

VkResult DeviceDriver::queueWaitIdle (VkQueue queue) const
{
	return m_vk.queueWaitIdle(queue);
}

VkResult DeviceDriver::deviceWaitIdle (VkDevice device) const
{
	return m_vk.deviceWaitIdle(device);
}

VkResult DeviceDriver::allocateMemory (VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) const
{
	return m_vk.allocateMemory(device, pAllocateInfo, pAllocator, pMemory);
}

VkResult DeviceDriver::mapMemory (VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) const
{
	return m_vk.mapMemory(device, memory, offset, size, flags, ppData);
}

void DeviceDriver::unmapMemory (VkDevice device, VkDeviceMemory memory) const
{
	m_vk.unmapMemory(device, memory);
}

VkResult DeviceDriver::flushMappedMemoryRanges (VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const
{
	return m_vk.flushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

VkResult DeviceDriver::invalidateMappedMemoryRanges (VkDevice device, deUint32 memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) const
{
	return m_vk.invalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

void DeviceDriver::getDeviceMemoryCommitment (VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) const
{
	m_vk.getDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
}

VkResult DeviceDriver::bindBufferMemory (VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) const
{
	return m_vk.bindBufferMemory(device, buffer, memory, memoryOffset);
}

VkResult DeviceDriver::bindImageMemory (VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) const
{
	return m_vk.bindImageMemory(device, image, memory, memoryOffset);
}

void DeviceDriver::getBufferMemoryRequirements (VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) const
{
	m_vk.getBufferMemoryRequirements(device, buffer, pMemoryRequirements);
}

void DeviceDriver::getImageMemoryRequirements (VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) const
{
	m_vk.getImageMemoryRequirements(device, image, pMemoryRequirements);
}

void DeviceDriver::getImageSparseMemoryRequirements (VkDevice device, VkImage image, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) const
{
	m_vk.getImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

VkResult DeviceDriver::queueBindSparse (VkQueue queue, deUint32 bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) const
{
	return m_vk.queueBindSparse(queue, bindInfoCount, pBindInfo, fence);
}

VkResult DeviceDriver::createFence (VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const
{
	return m_vk.createFence(device, pCreateInfo, pAllocator, pFence);
}

void DeviceDriver::destroyFence (VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyFence(device, fence, pAllocator);
}

VkResult DeviceDriver::resetFences (VkDevice device, deUint32 fenceCount, const VkFence* pFences) const
{
	return m_vk.resetFences(device, fenceCount, pFences);
}

VkResult DeviceDriver::getFenceStatus (VkDevice device, VkFence fence) const
{
	return m_vk.getFenceStatus(device, fence);
}

VkResult DeviceDriver::waitForFences (VkDevice device, deUint32 fenceCount, const VkFence* pFences, VkBool32 waitAll, deUint64 timeout) const
{
	return m_vk.waitForFences(device, fenceCount, pFences, waitAll, timeout);
}

VkResult DeviceDriver::createSemaphore (VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) const
{
	return m_vk.createSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
}

void DeviceDriver::destroySemaphore (VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroySemaphore(device, semaphore, pAllocator);
}

VkResult DeviceDriver::createEvent (VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) const
{
	return m_vk.createEvent(device, pCreateInfo, pAllocator, pEvent);
}

void DeviceDriver::destroyEvent (VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyEvent(device, event, pAllocator);
}

VkResult DeviceDriver::getEventStatus (VkDevice device, VkEvent event) const
{
	return m_vk.getEventStatus(device, event);
}

VkResult DeviceDriver::setEvent (VkDevice device, VkEvent event) const
{
	return m_vk.setEvent(device, event);
}

VkResult DeviceDriver::resetEvent (VkDevice device, VkEvent event) const
{
	return m_vk.resetEvent(device, event);
}

VkResult DeviceDriver::createQueryPool (VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) const
{
	return m_vk.createQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
}

VkResult DeviceDriver::getQueryPoolResults (VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, deUintptr dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) const
{
	return m_vk.getQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
}

VkResult DeviceDriver::createBuffer (VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) const
{
	return m_vk.createBuffer(device, pCreateInfo, pAllocator, pBuffer);
}

void DeviceDriver::destroyBuffer (VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyBuffer(device, buffer, pAllocator);
}

VkResult DeviceDriver::createBufferView (VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) const
{
	return m_vk.createBufferView(device, pCreateInfo, pAllocator, pView);
}

void DeviceDriver::destroyBufferView (VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyBufferView(device, bufferView, pAllocator);
}

VkResult DeviceDriver::createImage (VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) const
{
	return m_vk.createImage(device, pCreateInfo, pAllocator, pImage);
}

void DeviceDriver::destroyImage (VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyImage(device, image, pAllocator);
}

void DeviceDriver::getImageSubresourceLayout (VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) const
{
	m_vk.getImageSubresourceLayout(device, image, pSubresource, pLayout);
}

VkResult DeviceDriver::createImageView (VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) const
{
	return m_vk.createImageView(device, pCreateInfo, pAllocator, pView);
}

void DeviceDriver::destroyImageView (VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyImageView(device, imageView, pAllocator);
}

VkResult DeviceDriver::createPipelineCache (VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) const
{
	return m_vk.createPipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
}

void DeviceDriver::destroyPipelineCache (VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyPipelineCache(device, pipelineCache, pAllocator);
}

VkResult DeviceDriver::createGraphicsPipelines (VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const
{
	return m_vk.createGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

VkResult DeviceDriver::createComputePipelines (VkDevice device, VkPipelineCache pipelineCache, deUint32 createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) const
{
	return m_vk.createComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

void DeviceDriver::destroyPipeline (VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyPipeline(device, pipeline, pAllocator);
}

VkResult DeviceDriver::createPipelineLayout (VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) const
{
	return m_vk.createPipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
}

void DeviceDriver::destroyPipelineLayout (VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyPipelineLayout(device, pipelineLayout, pAllocator);
}

VkResult DeviceDriver::createSampler (VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) const
{
	return m_vk.createSampler(device, pCreateInfo, pAllocator, pSampler);
}

void DeviceDriver::destroySampler (VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroySampler(device, sampler, pAllocator);
}

VkResult DeviceDriver::createDescriptorSetLayout (VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) const
{
	return m_vk.createDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
}

void DeviceDriver::destroyDescriptorSetLayout (VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
}

VkResult DeviceDriver::createDescriptorPool (VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) const
{
	return m_vk.createDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
}

VkResult DeviceDriver::resetDescriptorPool (VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) const
{
	return m_vk.resetDescriptorPool(device, descriptorPool, flags);
}

VkResult DeviceDriver::allocateDescriptorSets (VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) const
{
	return m_vk.allocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
}

VkResult DeviceDriver::freeDescriptorSets (VkDevice device, VkDescriptorPool descriptorPool, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets) const
{
	return m_vk.freeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
}

void DeviceDriver::updateDescriptorSets (VkDevice device, deUint32 descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, deUint32 descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) const
{
	m_vk.updateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
}

VkResult DeviceDriver::createFramebuffer (VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) const
{
	return m_vk.createFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
}

void DeviceDriver::destroyFramebuffer (VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyFramebuffer(device, framebuffer, pAllocator);
}

VkResult DeviceDriver::createRenderPass (VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) const
{
	return m_vk.createRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
}

void DeviceDriver::destroyRenderPass (VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroyRenderPass(device, renderPass, pAllocator);
}

void DeviceDriver::getRenderAreaGranularity (VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) const
{
	m_vk.getRenderAreaGranularity(device, renderPass, pGranularity);
}

VkResult DeviceDriver::createCommandPool (VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) const
{
	return m_vk.createCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
}

VkResult DeviceDriver::resetCommandPool (VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) const
{
	return m_vk.resetCommandPool(device, commandPool, flags);
}

VkResult DeviceDriver::allocateCommandBuffers (VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) const
{
	return m_vk.allocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
}

void DeviceDriver::freeCommandBuffers (VkDevice device, VkCommandPool commandPool, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers) const
{
	m_vk.freeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
}

VkResult DeviceDriver::beginCommandBuffer (VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) const
{
	return m_vk.beginCommandBuffer(commandBuffer, pBeginInfo);
}

VkResult DeviceDriver::endCommandBuffer (VkCommandBuffer commandBuffer) const
{
	return m_vk.endCommandBuffer(commandBuffer);
}

VkResult DeviceDriver::resetCommandBuffer (VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) const
{
	return m_vk.resetCommandBuffer(commandBuffer, flags);
}

void DeviceDriver::cmdBindPipeline (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) const
{
	m_vk.cmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
}

void DeviceDriver::cmdSetViewport (VkCommandBuffer commandBuffer, deUint32 firstViewport, deUint32 viewportCount, const VkViewport* pViewports) const
{
	m_vk.cmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
}

void DeviceDriver::cmdSetScissor (VkCommandBuffer commandBuffer, deUint32 firstScissor, deUint32 scissorCount, const VkRect2D* pScissors) const
{
	m_vk.cmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
}

void DeviceDriver::cmdSetLineWidth (VkCommandBuffer commandBuffer, float lineWidth) const
{
	m_vk.cmdSetLineWidth(commandBuffer, lineWidth);
}

void DeviceDriver::cmdSetDepthBias (VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) const
{
	m_vk.cmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}

void DeviceDriver::cmdSetBlendConstants (VkCommandBuffer commandBuffer, const float blendConstants[4]) const
{
	m_vk.cmdSetBlendConstants(commandBuffer, blendConstants);
}

void DeviceDriver::cmdSetDepthBounds (VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) const
{
	m_vk.cmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
}

void DeviceDriver::cmdSetStencilCompareMask (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 compareMask) const
{
	m_vk.cmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
}

void DeviceDriver::cmdSetStencilWriteMask (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 writeMask) const
{
	m_vk.cmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
}

void DeviceDriver::cmdSetStencilReference (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, deUint32 reference) const
{
	m_vk.cmdSetStencilReference(commandBuffer, faceMask, reference);
}

void DeviceDriver::cmdBindDescriptorSets (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 firstSet, deUint32 descriptorSetCount, const VkDescriptorSet* pDescriptorSets, deUint32 dynamicOffsetCount, const deUint32* pDynamicOffsets) const
{
	m_vk.cmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
}

void DeviceDriver::cmdBindIndexBuffer (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) const
{
	m_vk.cmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
}

void DeviceDriver::cmdBindVertexBuffers (VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) const
{
	m_vk.cmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
}

void DeviceDriver::cmdDraw (VkCommandBuffer commandBuffer, deUint32 vertexCount, deUint32 instanceCount, deUint32 firstVertex, deUint32 firstInstance) const
{
	m_vk.cmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
}

void DeviceDriver::cmdDrawIndexed (VkCommandBuffer commandBuffer, deUint32 indexCount, deUint32 instanceCount, deUint32 firstIndex, deInt32 vertexOffset, deUint32 firstInstance) const
{
	m_vk.cmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}

void DeviceDriver::cmdDrawIndirect (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride) const
{
	m_vk.cmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

void DeviceDriver::cmdDrawIndexedIndirect (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 drawCount, deUint32 stride) const
{
	m_vk.cmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

void DeviceDriver::cmdDispatch (VkCommandBuffer commandBuffer, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ) const
{
	m_vk.cmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

void DeviceDriver::cmdDispatchIndirect (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) const
{
	m_vk.cmdDispatchIndirect(commandBuffer, buffer, offset);
}

void DeviceDriver::cmdCopyBuffer (VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferCopy* pRegions) const
{
	m_vk.cmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
}

void DeviceDriver::cmdCopyImage (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageCopy* pRegions) const
{
	m_vk.cmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

void DeviceDriver::cmdBlitImage (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageBlit* pRegions, VkFilter filter) const
{
	m_vk.cmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}

void DeviceDriver::cmdCopyBufferToImage (VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkBufferImageCopy* pRegions) const
{
	m_vk.cmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}

void DeviceDriver::cmdCopyImageToBuffer (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, deUint32 regionCount, const VkBufferImageCopy* pRegions) const
{
	m_vk.cmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}

void DeviceDriver::cmdUpdateBuffer (VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) const
{
	m_vk.cmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
}

void DeviceDriver::cmdFillBuffer (VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, deUint32 data) const
{
	m_vk.cmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
}

void DeviceDriver::cmdClearColorImage (VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const
{
	m_vk.cmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
}

void DeviceDriver::cmdClearDepthStencilImage (VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const
{
	m_vk.cmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
}

void DeviceDriver::cmdClearAttachments (VkCommandBuffer commandBuffer, deUint32 attachmentCount, const VkClearAttachment* pAttachments, deUint32 rectCount, const VkClearRect* pRects) const
{
	m_vk.cmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
}

void DeviceDriver::cmdResolveImage (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, deUint32 regionCount, const VkImageResolve* pRegions) const
{
	m_vk.cmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

void DeviceDriver::cmdSetEvent (VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const
{
	m_vk.cmdSetEvent(commandBuffer, event, stageMask);
}

void DeviceDriver::cmdResetEvent (VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const
{
	m_vk.cmdResetEvent(commandBuffer, event, stageMask);
}

void DeviceDriver::cmdWaitEvents (VkCommandBuffer commandBuffer, deUint32 eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const
{
	m_vk.cmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

void DeviceDriver::cmdPipelineBarrier (VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, deUint32 memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, deUint32 bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, deUint32 imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) const
{
	m_vk.cmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

void DeviceDriver::cmdBeginQuery (VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query, VkQueryControlFlags flags) const
{
	m_vk.cmdBeginQuery(commandBuffer, queryPool, query, flags);
}

void DeviceDriver::cmdEndQuery (VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 query) const
{
	m_vk.cmdEndQuery(commandBuffer, queryPool, query);
}

void DeviceDriver::cmdResetQueryPool (VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount) const
{
	m_vk.cmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
}

void DeviceDriver::cmdWriteTimestamp (VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, deUint32 query) const
{
	m_vk.cmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
}

void DeviceDriver::cmdCopyQueryPoolResults (VkCommandBuffer commandBuffer, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) const
{
	m_vk.cmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}

void DeviceDriver::cmdPushConstants (VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, deUint32 offset, deUint32 size, const void* pValues) const
{
	m_vk.cmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
}

void DeviceDriver::cmdBeginRenderPass (VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) const
{
	m_vk.cmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
}

void DeviceDriver::cmdNextSubpass (VkCommandBuffer commandBuffer, VkSubpassContents contents) const
{
	m_vk.cmdNextSubpass(commandBuffer, contents);
}

void DeviceDriver::cmdEndRenderPass (VkCommandBuffer commandBuffer) const
{
	m_vk.cmdEndRenderPass(commandBuffer);
}

void DeviceDriver::cmdExecuteCommands (VkCommandBuffer commandBuffer, deUint32 commandBufferCount, const VkCommandBuffer* pCommandBuffers) const
{
	m_vk.cmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
}

void DeviceDriver::getCommandPoolMemoryConsumption (VkDevice device, VkCommandPool commandPool, VkCommandBuffer commandBuffer, VkCommandPoolMemoryConsumption* pConsumption) const
{
	m_vk.getCommandPoolMemoryConsumption(device, commandPool, commandBuffer, pConsumption);
}

VkResult DeviceDriver::getFaultData (VkDevice device, VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, deUint32* pFaultCount, VkFaultData* pFaults) const
{
	return m_vk.getFaultData(device, faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
}

VkResult DeviceDriver::bindBufferMemory2 (VkDevice device, deUint32 bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) const
{
	return m_vk.bindBufferMemory2(device, bindInfoCount, pBindInfos);
}

VkResult DeviceDriver::bindImageMemory2 (VkDevice device, deUint32 bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) const
{
	return m_vk.bindImageMemory2(device, bindInfoCount, pBindInfos);
}

void DeviceDriver::getDeviceGroupPeerMemoryFeatures (VkDevice device, deUint32 heapIndex, deUint32 localDeviceIndex, deUint32 remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) const
{
	m_vk.getDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}

void DeviceDriver::cmdSetDeviceMask (VkCommandBuffer commandBuffer, deUint32 deviceMask) const
{
	m_vk.cmdSetDeviceMask(commandBuffer, deviceMask);
}

void DeviceDriver::cmdDispatchBase (VkCommandBuffer commandBuffer, deUint32 baseGroupX, deUint32 baseGroupY, deUint32 baseGroupZ, deUint32 groupCountX, deUint32 groupCountY, deUint32 groupCountZ) const
{
	m_vk.cmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

void DeviceDriver::getImageMemoryRequirements2 (VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) const
{
	m_vk.getImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
}

void DeviceDriver::getBufferMemoryRequirements2 (VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) const
{
	m_vk.getBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
}

void DeviceDriver::getImageSparseMemoryRequirements2 (VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, deUint32* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) const
{
	m_vk.getImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

void DeviceDriver::getDeviceQueue2 (VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) const
{
	m_vk.getDeviceQueue2(device, pQueueInfo, pQueue);
}

VkResult DeviceDriver::createSamplerYcbcrConversion (VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) const
{
	return m_vk.createSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
}

void DeviceDriver::destroySamplerYcbcrConversion (VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) const
{
	m_vk.destroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
}

void DeviceDriver::getDescriptorSetLayoutSupport (VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) const
{
	m_vk.getDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
}

void DeviceDriver::cmdDrawIndirectCount (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const
{
	m_vk.cmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

void DeviceDriver::cmdDrawIndexedIndirectCount (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, deUint32 maxDrawCount, deUint32 stride) const
{
	m_vk.cmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

VkResult DeviceDriver::createRenderPass2 (VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) const
{
	return m_vk.createRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
}

void DeviceDriver::cmdBeginRenderPass2 (VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) const
{
	m_vk.cmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
}

void DeviceDriver::cmdNextSubpass2 (VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) const
{
	m_vk.cmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
}

void DeviceDriver::cmdEndRenderPass2 (VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) const
{
	m_vk.cmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
}

void DeviceDriver::resetQueryPool (VkDevice device, VkQueryPool queryPool, deUint32 firstQuery, deUint32 queryCount) const
{
	m_vk.resetQueryPool(device, queryPool, firstQuery, queryCount);
}

VkResult DeviceDriver::getSemaphoreCounterValue (VkDevice device, VkSemaphore semaphore, deUint64* pValue) const
{
	return m_vk.getSemaphoreCounterValue(device, semaphore, pValue);
}

VkResult DeviceDriver::waitSemaphores (VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, deUint64 timeout) const
{
	return m_vk.waitSemaphores(device, pWaitInfo, timeout);
}

VkResult DeviceDriver::signalSemaphore (VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) const
{
	return m_vk.signalSemaphore(device, pSignalInfo);
}

VkDeviceAddress DeviceDriver::getBufferDeviceAddress (VkDevice device, const VkBufferDeviceAddressInfo* pInfo) const
{
	return m_vk.getBufferDeviceAddress(device, pInfo);
}

uint64_t DeviceDriver::getBufferOpaqueCaptureAddress (VkDevice device, const VkBufferDeviceAddressInfo* pInfo) const
{
	return m_vk.getBufferOpaqueCaptureAddress(device, pInfo);
}

uint64_t DeviceDriver::getDeviceMemoryOpaqueCaptureAddress (VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) const
{
	return m_vk.getDeviceMemoryOpaqueCaptureAddress(device, pInfo);
}

VkResult DeviceDriver::createSwapchainKHR (VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) const
{
	return m_vk.createSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
}

VkResult DeviceDriver::getSwapchainImagesKHR (VkDevice device, VkSwapchainKHR swapchain, deUint32* pSwapchainImageCount, VkImage* pSwapchainImages) const
{
	return m_vk.getSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
}

VkResult DeviceDriver::acquireNextImageKHR (VkDevice device, VkSwapchainKHR swapchain, deUint64 timeout, VkSemaphore semaphore, VkFence fence, deUint32* pImageIndex) const
{
	return m_vk.acquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
}

VkResult DeviceDriver::queuePresentKHR (VkQueue queue, const VkPresentInfoKHR* pPresentInfo) const
{
	return m_vk.queuePresentKHR(queue, pPresentInfo);
}

VkResult DeviceDriver::getDeviceGroupPresentCapabilitiesKHR (VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) const
{
	return m_vk.getDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
}

VkResult DeviceDriver::getDeviceGroupSurfacePresentModesKHR (VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) const
{
	return m_vk.getDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
}

VkResult DeviceDriver::acquireNextImage2KHR (VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, deUint32* pImageIndex) const
{
	return m_vk.acquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
}

VkResult DeviceDriver::createSharedSwapchainsKHR (VkDevice device, deUint32 swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) const
{
	return m_vk.createSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}

VkResult DeviceDriver::getMemoryFdKHR (VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) const
{
	return m_vk.getMemoryFdKHR(device, pGetFdInfo, pFd);
}

VkResult DeviceDriver::getMemoryFdPropertiesKHR (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) const
{
	return m_vk.getMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
}

VkResult DeviceDriver::importSemaphoreFdKHR (VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) const
{
	return m_vk.importSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
}

VkResult DeviceDriver::getSemaphoreFdKHR (VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) const
{
	return m_vk.getSemaphoreFdKHR(device, pGetFdInfo, pFd);
}

VkResult DeviceDriver::getSwapchainStatusKHR (VkDevice device, VkSwapchainKHR swapchain) const
{
	return m_vk.getSwapchainStatusKHR(device, swapchain);
}

VkResult DeviceDriver::importFenceFdKHR (VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) const
{
	return m_vk.importFenceFdKHR(device, pImportFenceFdInfo);
}

VkResult DeviceDriver::getFenceFdKHR (VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) const
{
	return m_vk.getFenceFdKHR(device, pGetFdInfo, pFd);
}

void DeviceDriver::cmdSetFragmentShadingRateKHR (VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) const
{
	m_vk.cmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
}

VkResult DeviceDriver::getFaultDataKHR (VkDevice device, VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, deUint32* pFaultCount, VkFaultData* pFaults) const
{
	return m_vk.getFaultDataKHR(device, faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
}

void DeviceDriver::cmdRefreshObjectsKHR (VkCommandBuffer commandBuffer, const VkRefreshObjectListKHR* pRefreshObjects) const
{
	m_vk.cmdRefreshObjectsKHR(commandBuffer, pRefreshObjects);
}

void DeviceDriver::cmdCopyBuffer2KHR (VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo) const
{
	m_vk.cmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
}

void DeviceDriver::cmdCopyImage2KHR (VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo) const
{
	m_vk.cmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
}

void DeviceDriver::cmdCopyBufferToImage2KHR (VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo) const
{
	m_vk.cmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
}

void DeviceDriver::cmdCopyImageToBuffer2KHR (VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo) const
{
	m_vk.cmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
}

void DeviceDriver::cmdBlitImage2KHR (VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo) const
{
	m_vk.cmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
}

void DeviceDriver::cmdResolveImage2KHR (VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo) const
{
	m_vk.cmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
}

VkResult DeviceDriver::displayPowerControlEXT (VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) const
{
	return m_vk.displayPowerControlEXT(device, display, pDisplayPowerInfo);
}

VkResult DeviceDriver::registerDeviceEventEXT (VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const
{
	return m_vk.registerDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
}

VkResult DeviceDriver::registerDisplayEventEXT (VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) const
{
	return m_vk.registerDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
}

VkResult DeviceDriver::getSwapchainCounterEXT (VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, deUint64* pCounterValue) const
{
	return m_vk.getSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
}

void DeviceDriver::cmdSetDiscardRectangleEXT (VkCommandBuffer commandBuffer, deUint32 firstDiscardRectangle, deUint32 discardRectangleCount, const VkRect2D* pDiscardRectangles) const
{
	m_vk.cmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}

void DeviceDriver::setHdrMetadataEXT (VkDevice device, deUint32 swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) const
{
	m_vk.setHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
}

void DeviceDriver::cmdSetSampleLocationsEXT (VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) const
{
	m_vk.cmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
}

VkResult DeviceDriver::getImageDrmFormatModifierPropertiesEXT (VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) const
{
	return m_vk.getImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
}

VkResult DeviceDriver::getMemoryHostPointerPropertiesEXT (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) const
{
	return m_vk.getMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
}

VkResult DeviceDriver::getCalibratedTimestampsEXT (VkDevice device, deUint32 timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, deUint64* pTimestamps, deUint64* pMaxDeviation) const
{
	return m_vk.getCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}

void DeviceDriver::cmdSetLineStippleEXT (VkCommandBuffer commandBuffer, deUint32 lineStippleFactor, deUint16 lineStipplePattern) const
{
	m_vk.cmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
}

void DeviceDriver::cmdSetCullModeEXT (VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) const
{
	m_vk.cmdSetCullModeEXT(commandBuffer, cullMode);
}

void DeviceDriver::cmdSetFrontFaceEXT (VkCommandBuffer commandBuffer, VkFrontFace frontFace) const
{
	m_vk.cmdSetFrontFaceEXT(commandBuffer, frontFace);
}

void DeviceDriver::cmdSetPrimitiveTopologyEXT (VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) const
{
	m_vk.cmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
}

void DeviceDriver::cmdSetViewportWithCountEXT (VkCommandBuffer commandBuffer, deUint32 viewportCount, const VkViewport* pViewports) const
{
	m_vk.cmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
}

void DeviceDriver::cmdSetScissorWithCountEXT (VkCommandBuffer commandBuffer, deUint32 scissorCount, const VkRect2D* pScissors) const
{
	m_vk.cmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
}

void DeviceDriver::cmdBindVertexBuffers2EXT (VkCommandBuffer commandBuffer, deUint32 firstBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) const
{
	m_vk.cmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}

void DeviceDriver::cmdSetDepthTestEnableEXT (VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) const
{
	m_vk.cmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
}

void DeviceDriver::cmdSetDepthWriteEnableEXT (VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) const
{
	m_vk.cmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
}

void DeviceDriver::cmdSetDepthCompareOpEXT (VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) const
{
	m_vk.cmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
}

void DeviceDriver::cmdSetDepthBoundsTestEnableEXT (VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) const
{
	m_vk.cmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
}

void DeviceDriver::cmdSetStencilTestEnableEXT (VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) const
{
	m_vk.cmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
}

void DeviceDriver::cmdSetStencilOpEXT (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) const
{
	m_vk.cmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
}
