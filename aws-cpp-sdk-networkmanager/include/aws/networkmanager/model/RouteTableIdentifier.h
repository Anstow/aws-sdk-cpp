﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a route table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteTableIdentifier">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKMANAGER_API RouteTableIdentifier
  {
  public:
    RouteTableIdentifier();
    RouteTableIdentifier(Aws::Utils::Json::JsonView jsonValue);
    RouteTableIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableArn() const{ return m_transitGatewayRouteTableArn; }

    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline bool TransitGatewayRouteTableArnHasBeenSet() const { return m_transitGatewayRouteTableArnHasBeenSet; }

    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableArn(const Aws::String& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = value; }

    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableArn(Aws::String&& value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn = std::move(value); }

    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableArn(const char* value) { m_transitGatewayRouteTableArnHasBeenSet = true; m_transitGatewayRouteTableArn.assign(value); }

    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline RouteTableIdentifier& WithTransitGatewayRouteTableArn(const Aws::String& value) { SetTransitGatewayRouteTableArn(value); return *this;}

    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline RouteTableIdentifier& WithTransitGatewayRouteTableArn(Aws::String&& value) { SetTransitGatewayRouteTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the transit gateway route table.</p>
     */
    inline RouteTableIdentifier& WithTransitGatewayRouteTableArn(const char* value) { SetTransitGatewayRouteTableArn(value); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableArn;
    bool m_transitGatewayRouteTableArnHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
