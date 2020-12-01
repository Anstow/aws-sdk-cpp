﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/profile/model/GetProfileObjectTypeTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Profile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProfileObjectTypeTemplateRequest::GetProfileObjectTypeTemplateRequest() : 
    m_templateIdHasBeenSet(false)
{
}

Aws::String GetProfileObjectTypeTemplateRequest::SerializePayload() const
{
  return {};
}




