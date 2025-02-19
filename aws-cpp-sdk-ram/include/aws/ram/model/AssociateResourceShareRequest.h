﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class AWS_RAM_API AssociateResourceShareRequest : public RAMRequest
  {
  public:
    AssociateResourceShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResourceShare"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline AssociateResourceShareRequest& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline AssociateResourceShareRequest& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline AssociateResourceShareRequest& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline AssociateResourceShareRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline AssociateResourceShareRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline AssociateResourceShareRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline AssociateResourceShareRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline AssociateResourceShareRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>The principals to associate with the resource share. The possible values
     * are:</p> <ul> <li> <p>An Amazon Web Services account ID</p> </li> <li> <p>An
     * Amazon Resource Name (ARN) of an organization in Organizations</p> </li> <li>
     * <p>An ARN of an organizational unit (OU) in Organizations</p> </li> <li> <p>An
     * ARN of an IAM role</p> </li> <li> <p>An ARN of an IAM user</p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and IAM users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and IAM users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline AssociateResourceShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline AssociateResourceShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline AssociateResourceShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
