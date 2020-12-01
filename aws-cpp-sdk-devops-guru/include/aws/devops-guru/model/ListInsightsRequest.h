﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/ListInsightsStatusFilter.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API ListInsightsRequest : public DevOpsGuruRequest
  {
  public:
    ListInsightsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInsights"; }

    Aws::String SerializePayload() const override;


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListInsightsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListInsightsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListInsightsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListInsightsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ListInsightsStatusFilter& GetStatusFilter() const{ return m_statusFilter; }

    
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }

    
    inline void SetStatusFilter(const ListInsightsStatusFilter& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    
    inline void SetStatusFilter(ListInsightsStatusFilter&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }

    
    inline ListInsightsRequest& WithStatusFilter(const ListInsightsStatusFilter& value) { SetStatusFilter(value); return *this;}

    
    inline ListInsightsRequest& WithStatusFilter(ListInsightsStatusFilter&& value) { SetStatusFilter(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    ListInsightsStatusFilter m_statusFilter;
    bool m_statusFilterHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
