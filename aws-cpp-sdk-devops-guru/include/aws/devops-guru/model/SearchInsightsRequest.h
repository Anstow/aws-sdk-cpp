﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/SearchInsightsFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/StartTimeRange.h>
#include <aws/devops-guru/model/InsightType.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API SearchInsightsRequest : public DevOpsGuruRequest
  {
  public:
    SearchInsightsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchInsights"; }

    Aws::String SerializePayload() const override;


    
    inline const SearchInsightsFilters& GetFilters() const{ return m_filters; }

    
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    
    inline void SetFilters(const SearchInsightsFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    
    inline void SetFilters(SearchInsightsFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    
    inline SearchInsightsRequest& WithFilters(const SearchInsightsFilters& value) { SetFilters(value); return *this;}

    
    inline SearchInsightsRequest& WithFilters(SearchInsightsFilters&& value) { SetFilters(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline SearchInsightsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline SearchInsightsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline SearchInsightsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline SearchInsightsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const StartTimeRange& GetStartTimeRange() const{ return m_startTimeRange; }

    
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }

    
    inline void SetStartTimeRange(const StartTimeRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    
    inline void SetStartTimeRange(StartTimeRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }

    
    inline SearchInsightsRequest& WithStartTimeRange(const StartTimeRange& value) { SetStartTimeRange(value); return *this;}

    
    inline SearchInsightsRequest& WithStartTimeRange(StartTimeRange&& value) { SetStartTimeRange(std::move(value)); return *this;}


    
    inline const InsightType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const InsightType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(InsightType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline SearchInsightsRequest& WithType(const InsightType& value) { SetType(value); return *this;}

    
    inline SearchInsightsRequest& WithType(InsightType&& value) { SetType(std::move(value)); return *this;}

  private:

    SearchInsightsFilters m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet;

    InsightType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
