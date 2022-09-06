﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API DescribeStandardsControlsRequest : public SecurityHubRequest
  {
  public:
    DescribeStandardsControlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStandardsControls"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline const Aws::String& GetStandardsSubscriptionArn() const{ return m_standardsSubscriptionArn; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline bool StandardsSubscriptionArnHasBeenSet() const { return m_standardsSubscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline void SetStandardsSubscriptionArn(const Aws::String& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = value; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline void SetStandardsSubscriptionArn(Aws::String&& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline void SetStandardsSubscriptionArn(const char* value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline DescribeStandardsControlsRequest& WithStandardsSubscriptionArn(const Aws::String& value) { SetStandardsSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline DescribeStandardsControlsRequest& WithStandardsSubscriptionArn(Aws::String&& value) { SetStandardsSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard. To get the subscription ARNs of the standards you have enabled, use
     * the <code>GetEnabledStandards</code> operation.</p>
     */
    inline DescribeStandardsControlsRequest& WithStandardsSubscriptionArn(const char* value) { SetStandardsSubscriptionArn(value); return *this;}


    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline DescribeStandardsControlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline DescribeStandardsControlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeStandardsControls</code> operation, set the value of this
     * parameter to <code>NULL</code>.</p> <p>For subsequent calls to the operation, to
     * continue listing data, set the value of this parameter to the value returned
     * from the previous response.</p>
     */
    inline DescribeStandardsControlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of security standard controls to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of security standard controls to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of security standard controls to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of security standard controls to return.</p>
     */
    inline DescribeStandardsControlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_standardsSubscriptionArn;
    bool m_standardsSubscriptionArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
