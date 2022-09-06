﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>A filter name and value pair that is used to return a more specific list of
   * results from a describe operation. Filters can be used to match a set of
   * resources by specific criteria, such as tags, attributes, or IDs.</p> <p>If you
   * specify multiple filters, the filters are joined with an <code>AND</code>, and
   * the request returns only results that match all of the specified
   * filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Filter">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Filter
  {
  public:
    Filter();
    Filter(const Aws::Utils::Xml::XmlNode& xmlNode);
    Filter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an <code>OR</code>, and the
     * request returns all results that match any of the specified values.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
