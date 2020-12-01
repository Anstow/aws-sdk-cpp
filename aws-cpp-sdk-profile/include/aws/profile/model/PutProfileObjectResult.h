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
  class AWS_PROFILE_API PutProfileObjectResult
  {
  public:
    PutProfileObjectResult();
    PutProfileObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutProfileObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the profile object generated by the service.</p>
     */
    inline const Aws::String& GetProfileObjectUniqueKey() const{ return m_profileObjectUniqueKey; }

    /**
     * <p>The unique identifier of the profile object generated by the service.</p>
     */
    inline void SetProfileObjectUniqueKey(const Aws::String& value) { m_profileObjectUniqueKey = value; }

    /**
     * <p>The unique identifier of the profile object generated by the service.</p>
     */
    inline void SetProfileObjectUniqueKey(Aws::String&& value) { m_profileObjectUniqueKey = std::move(value); }

    /**
     * <p>The unique identifier of the profile object generated by the service.</p>
     */
    inline void SetProfileObjectUniqueKey(const char* value) { m_profileObjectUniqueKey.assign(value); }

    /**
     * <p>The unique identifier of the profile object generated by the service.</p>
     */
    inline PutProfileObjectResult& WithProfileObjectUniqueKey(const Aws::String& value) { SetProfileObjectUniqueKey(value); return *this;}

    /**
     * <p>The unique identifier of the profile object generated by the service.</p>
     */
    inline PutProfileObjectResult& WithProfileObjectUniqueKey(Aws::String&& value) { SetProfileObjectUniqueKey(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the profile object generated by the service.</p>
     */
    inline PutProfileObjectResult& WithProfileObjectUniqueKey(const char* value) { SetProfileObjectUniqueKey(value); return *this;}

  private:

    Aws::String m_profileObjectUniqueKey;
  };

} // namespace Model
} // namespace Profile
} // namespace Aws
