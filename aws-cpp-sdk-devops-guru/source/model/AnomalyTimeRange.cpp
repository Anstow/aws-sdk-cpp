﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/AnomalyTimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

AnomalyTimeRange::AnomalyTimeRange() : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

AnomalyTimeRange::AnomalyTimeRange(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyTimeRange& AnomalyTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
