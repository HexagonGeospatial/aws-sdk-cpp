﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  class AWS_OPENSEARCHSERVICE_API AWSDomainInformation
  {
  public:
    AWSDomainInformation();
    AWSDomainInformation(Aws::Utils::Json::JsonView jsonValue);
    AWSDomainInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    
    inline AWSDomainInformation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    
    inline AWSDomainInformation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    
    inline AWSDomainInformation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline AWSDomainInformation& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline AWSDomainInformation& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline AWSDomainInformation& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    
    inline AWSDomainInformation& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline AWSDomainInformation& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    
    inline AWSDomainInformation& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
