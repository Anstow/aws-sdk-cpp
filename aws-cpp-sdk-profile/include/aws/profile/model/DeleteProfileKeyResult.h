﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/profile/Profile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Profile
{
namespace Model
{
  class AWS_PROFILE_API DeleteProfileKeyResult
  {
  public:
    DeleteProfileKeyResult();
    DeleteProfileKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteProfileKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline DeleteProfileKeyResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline DeleteProfileKeyResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline DeleteProfileKeyResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
  };

} // namespace Model
} // namespace Profile
} // namespace Aws
