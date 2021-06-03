﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class InventoryOptionalField
  {
    NOT_SET,
    Size,
    LastModifiedDate,
    StorageClass,
    ETag,
    IsMultipartUploaded,
    ReplicationStatus,
    EncryptionStatus,
    ObjectLockRetainUntilDate,
    ObjectLockMode,
    ObjectLockLegalHoldStatus,
    IntelligentTieringAccessTier,
    BucketKeyStatus
  };

namespace InventoryOptionalFieldMapper
{
AWS_S3CRT_API InventoryOptionalField GetInventoryOptionalFieldForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForInventoryOptionalField(InventoryOptionalField value);
} // namespace InventoryOptionalFieldMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
