﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/Participant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

Participant::Participant() : 
    m_attributesHasBeenSet(false),
    m_firstJoinTimeHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_published(false),
    m_publishedHasBeenSet(false),
    m_state(ParticipantState::NOT_SET),
    m_stateHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Participant::Participant(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_firstJoinTimeHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_published(false),
    m_publishedHasBeenSet(false),
    m_state(ParticipantState::NOT_SET),
    m_stateHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
  *this = jsonValue;
}

Participant& Participant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstJoinTime"))
  {
    m_firstJoinTime = jsonValue.GetString("firstJoinTime");

    m_firstJoinTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("participantId"))
  {
    m_participantId = jsonValue.GetString("participantId");

    m_participantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("published"))
  {
    m_published = jsonValue.GetBool("published");

    m_publishedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ParticipantStateMapper::GetParticipantStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Participant::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_firstJoinTimeHasBeenSet)
  {
   payload.WithString("firstJoinTime", m_firstJoinTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_publishedHasBeenSet)
  {
   payload.WithBool("published", m_published);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ParticipantStateMapper::GetNameForParticipantState(m_state));
  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
