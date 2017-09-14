// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file SubMessageHeader.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "SubMessageHeader.h"

#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

SubmessageHeader::SubmessageHeader()
{
    submessage_id_ = 0;
    flags_ = 0;
    submessage_length_ = 0;
}

SubmessageHeader::~SubmessageHeader()
{
}

SubmessageHeader::SubmessageHeader(const SubmessageHeader &x)
{
    submessage_id_ = x.submessage_id_;
    flags_ = x.flags_;
    submessage_length_ = x.submessage_length_;
}

SubmessageHeader::SubmessageHeader(SubmessageHeader &&x)
{
    submessage_id_ = x.submessage_id_;
    flags_ = x.flags_;
    submessage_length_ = x.submessage_length_;
}

SubmessageHeader& SubmessageHeader::operator=(const SubmessageHeader &x)
{
    submessage_id_ = x.submessage_id_;
    flags_ = x.flags_;
    submessage_length_ = x.submessage_length_;
    
    return *this;
}

SubmessageHeader& SubmessageHeader::operator=(SubmessageHeader &&x)
{
    submessage_id_ = x.submessage_id_;
    flags_ = x.flags_;
    submessage_length_ = x.submessage_length_;
    
    return *this;
}

size_t SubmessageHeader::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

size_t SubmessageHeader::getCdrSerializedSize(const SubmessageHeader& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 2 + eprosima::fastcdr::Cdr::alignment(current_alignment, 2);


    return current_alignment - initial_alignment;
}

void SubmessageHeader::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << submessage_id_;
    scdr << flags_;
    scdr.serialize(submessage_length_, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
}

void SubmessageHeader::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> submessage_id_;
    dcdr >> flags_;
    dcdr.deserialize(submessage_length_, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
}