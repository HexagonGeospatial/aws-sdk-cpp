﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>The request could not be processed because of conflict in the current
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/InvalidStateException">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECTCAMPAIGNS_API InvalidStateException
  {
  public:
    InvalidStateException();
    InvalidStateException(Aws::Utils::Json::JsonView jsonValue);
    InvalidStateException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidStateException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidStateException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidStateException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetXAmzErrorType() const{ return m_xAmzErrorType; }

    
    inline bool XAmzErrorTypeHasBeenSet() const { return m_xAmzErrorTypeHasBeenSet; }

    
    inline void SetXAmzErrorType(const Aws::String& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = value; }

    
    inline void SetXAmzErrorType(Aws::String&& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = std::move(value); }

    
    inline void SetXAmzErrorType(const char* value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType.assign(value); }

    
    inline InvalidStateException& WithXAmzErrorType(const Aws::String& value) { SetXAmzErrorType(value); return *this;}

    
    inline InvalidStateException& WithXAmzErrorType(Aws::String&& value) { SetXAmzErrorType(std::move(value)); return *this;}

    
    inline InvalidStateException& WithXAmzErrorType(const char* value) { SetXAmzErrorType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_xAmzErrorType;
    bool m_xAmzErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
