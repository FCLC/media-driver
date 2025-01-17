/*
* Copyright (c) 2020-2022, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file     media_debug_interface_misc.cpp
//! \brief    Defines the debug interface shared by all of Media.
//! \details  The debug interface dumps output from Media based on input config file.
//!
#include "media_debug_interface.h"
#if USE_MEDIA_DEBUG_TOOL
MOS_STATUS MediaDebugInterface::SubmitDummyWorkload(MOS_COMMAND_BUFFER *pCmdBuffer, int32_t bNullRendering)
{
    return MOS_STATUS_SUCCESS;
}

MOS_STATUS MediaDebugInterface::DetectCorruptionHw(CodechalHwInterface *hwInterface, PMOS_RESOURCE frameCntRes, uint32_t curIdx, uint32_t frameCrcOffset, std::vector<MOS_RESOURCE> &vStatusBuffer, PMOS_COMMAND_BUFFER pCmdBuffer, uint32_t frameNum)
{
    return MOS_STATUS_SUCCESS;
}

MOS_STATUS MediaDebugInterface::CopySurfaceData_Vdbox(
    uint32_t      dwDataSize,
    PMOS_RESOURCE presSourceSurface,
    PMOS_RESOURCE presCopiedSurface)
{
    return MOS_STATUS_SUCCESS;
}

MOS_STATUS MediaDebugInterface::StoreNumFrame(PMHW_MI_INTERFACE pMiInterface, PMOS_RESOURCE pResource, int32_t frameNum, PMOS_COMMAND_BUFFER pCmdBuffer)
{
    return MOS_STATUS_SUCCESS;
}

#endif  // USE_MEDIA_DEBUG_TOOL
