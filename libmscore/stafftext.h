//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2002-2011 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENCE.GPL
//=============================================================================

#ifndef __STAFFTEXT_H__
#define __STAFFTEXT_H__

#include "text.h"
#include "part.h"
#include "staff.h"
#include "stafftextbase.h"

namespace Ms {

//---------------------------------------------------------
//   StaffText
//---------------------------------------------------------

class StaffText final : public StaffTextBase  {
   public:
      StaffText(Score* score);
      StaffText(SubStyleId, Score* = 0);
      virtual StaffText* clone() const override       { return new StaffText(*this); }
      virtual ElementType type() const override       { return ElementType::STAFF_TEXT; }
      virtual void layout() override;
      };


}     // namespace Ms
#endif
