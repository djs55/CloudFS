/*
Copyright (c) 2007-2011 VMware, Inc. All Rights Reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted (subject to the limitations in the
disclaimer below) provided that the following conditions are met:

* Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the
   distribution.

* Neither the name of VMware nor the names of its
   contributors may be used to endorse or promote products derived
   from this software without specific prior written permission.

NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE
GRANTED BY THIS LICENSE.  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/************************************************************
 * **********************************************************/

/*
 * logfs_vsi.h --
 *
 * Define vsi related vsi nodes.
 */

#ifndef _LogFS_VSI_H
#define _LogFS_VSI_H

#define INCLUDE_ALLOW_VMKERNEL
#define INCLUDE_ALLOW_VMKERNEL_MODULE
#include "includeCheck.h"
#include "vsiDefs.h"

VSI_DEF_STRUCT(VSI_LogHostIdStruct, "LogFS Info Struct")
{
   VSI_DEF_STRUCT_FIELD(VSI_DEC_U32, fsCheck, "fsCheck");
};

VSI_DEF_STRUCT(VSI_LogDeviceStruct, "LogFS Info Struct")
{
   VSI_DEF_STRUCT_FIELD(VSI_DEC_U32, fsCheck, "fsCheck");
};

VSI_DEF_LEAF(device, root,
             LogFS_VSIDeviceGet, VSI_LogDeviceStruct,
             LogFS_VSIDeviceSet, VSI_Empty_Output, "device");

#endif