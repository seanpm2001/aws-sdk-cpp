﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API GetServiceTemplateRequest : public ProtonRequest
  {
  public:
    GetServiceTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline GetServiceTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline GetServiceTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service template that you want to get detailed data for.</p>
     */
    inline GetServiceTemplateRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
