﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/EventDataSource.h>
#include <aws/devops-guru/model/EventClass.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/EventTimeRange.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API ListEventsFilters
  {
  public:
    ListEventsFilters();
    ListEventsFilters(Aws::Utils::Json::JsonView jsonValue);
    ListEventsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const EventDataSource& GetDataSource() const{ return m_dataSource; }

    
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    
    inline void SetDataSource(const EventDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    
    inline void SetDataSource(EventDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    
    inline ListEventsFilters& WithDataSource(const EventDataSource& value) { SetDataSource(value); return *this;}

    
    inline ListEventsFilters& WithDataSource(EventDataSource&& value) { SetDataSource(std::move(value)); return *this;}


    
    inline const EventClass& GetEventClass() const{ return m_eventClass; }

    
    inline bool EventClassHasBeenSet() const { return m_eventClassHasBeenSet; }

    
    inline void SetEventClass(const EventClass& value) { m_eventClassHasBeenSet = true; m_eventClass = value; }

    
    inline void SetEventClass(EventClass&& value) { m_eventClassHasBeenSet = true; m_eventClass = std::move(value); }

    
    inline ListEventsFilters& WithEventClass(const EventClass& value) { SetEventClass(value); return *this;}

    
    inline ListEventsFilters& WithEventClass(EventClass&& value) { SetEventClass(std::move(value)); return *this;}


    
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }

    
    inline ListEventsFilters& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    
    inline ListEventsFilters& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    
    inline ListEventsFilters& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    
    inline const EventTimeRange& GetEventTimeRange() const{ return m_eventTimeRange; }

    
    inline bool EventTimeRangeHasBeenSet() const { return m_eventTimeRangeHasBeenSet; }

    
    inline void SetEventTimeRange(const EventTimeRange& value) { m_eventTimeRangeHasBeenSet = true; m_eventTimeRange = value; }

    
    inline void SetEventTimeRange(EventTimeRange&& value) { m_eventTimeRangeHasBeenSet = true; m_eventTimeRange = std::move(value); }

    
    inline ListEventsFilters& WithEventTimeRange(const EventTimeRange& value) { SetEventTimeRange(value); return *this;}

    
    inline ListEventsFilters& WithEventTimeRange(EventTimeRange&& value) { SetEventTimeRange(std::move(value)); return *this;}


    
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    
    inline ListEventsFilters& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    
    inline ListEventsFilters& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    
    inline ListEventsFilters& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ListEventsFilters& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ListEventsFilters& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}

  private:

    EventDataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    EventClass m_eventClass;
    bool m_eventClassHasBeenSet;

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet;

    EventTimeRange m_eventTimeRange;
    bool m_eventTimeRangeHasBeenSet;

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
