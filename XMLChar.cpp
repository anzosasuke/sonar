
bool xercesc_2_7::XMLChar1_0::isAllSpaces(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck;
  do {
    if (toCheck + count <= curCh) {
      return true;
    }
    uVar1 = *curCh;
    curCh = curCh + 1;
  } while ((char)fgCharCharsTable1_0[(int)(uint)uVar1] < '\0');
  return false;
}


bool xercesc_2_7::XMLChar1_0::containsWhiteSpace(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck;
  do {
    if (toCheck + count <= curCh) {
      return false;
    }
    uVar1 = *curCh;
    curCh = curCh + 1;
  } while (-1 < (char)fgCharCharsTable1_0[(int)(uint)uVar1]);
  return true;
}


bool xercesc_2_7::XMLChar1_0::isValidNCName(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  bool bVar2;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck;
  if ((*toCheck == 0x3a) ||
     (curCh = toCheck + 1, (fgCharCharsTable1_0[(int)(uint)*toCheck] & 2) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    do {
      if (toCheck + count <= curCh) {
        return true;
      }
      uVar1 = *curCh;
      curCh = curCh + 1;
    } while ((fgCharCharsTable1_0[(int)(uint)uVar1] & 1) != 0);
  }
  return false;
}


bool xercesc_2_7::XMLChar1_0::isValidNmtoken(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck;
  do {
    if (toCheck + count <= curCh) {
      return true;
    }
    uVar1 = *curCh;
    curCh = curCh + 1;
  } while ((fgCharCharsTable1_0[(int)(uint)uVar1] & 4) != 0);
  return false;
}


bool xercesc_2_7::XMLChar1_0::isValidName(XMLCh *toCheck,uint count)

{
  byte bVar1;
  ushort *puVar2;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  bVar1 = fgCharCharsTable1_0[(int)(uint)*toCheck] & 2;
  puVar2 = toCheck + 1;
  while( true ) {
    if (bVar1 == 0) {
      return false;
    }
    if (toCheck + count <= puVar2) break;
    bVar1 = fgCharCharsTable1_0[(int)(uint)*puVar2] & 4;
    puVar2 = puVar2 + 1;
  }
  return true;
}


bool xercesc_2_7::XMLChar1_0::isValidQName(XMLCh *toCheck,uint count)

{
  bool bVar1;
  undefined uVar2;
  uint count_00;
  int length;
  int colonPos;
  
  count_00 = xercesc_2_7::XMLString::indexOf(toCheck,0x3a);
  if ((count_00 == 0) || (count_00 == count - 1)) {
    uVar2 = 0;
  }
  else {
    if ((count_00 != 0xffffffff) && (bVar1 = isValidNCName(toCheck,count_00), bVar1 == false)) {
      return false;
    }
    uVar2 = isValidNCName(toCheck + (long)(int)count_00 + 1,(count - count_00) - 1);
  }
  return (bool)uVar2;
}


bool xercesc_2_7::XMLChar1_0::isPublicIdChar(XMLCh toCheck,XMLCh toCheck2)

{
  XMLCh XVar1;
  ushort *puVar2;
  XMLCh *curTable;
  
  if (toCheck2 != 0) {
    return false;
  }
  curTable = (XMLCh *)gPublicIdChars;
  while (*curTable != 0) {
    puVar2 = curTable + 1;
    if (toCheck < *curTable) goto LAB_0010038e;
    curTable = curTable + 2;
    if (toCheck <= *puVar2) {
      return true;
    }
  }
LAB_001003cb:
  do {
    if (*curTable == 0) {
      return false;
    }
    XVar1 = *curTable;
    curTable = curTable + 1;
  } while (toCheck != XVar1);
  return true;
LAB_0010038e:
  do {
    curTable = puVar2;
    puVar2 = curTable + 1;
    XVar1 = *curTable;
    curTable = puVar2;
  } while (XVar1 != 0);
  goto LAB_001003cb;
}


void xercesc_2_7::XMLChar1_0::enableNELWS(void)

{
  if (enableNEL != true) {
    enableNEL = true;
    fgCharCharsTable1_0[133] = fgCharCharsTable1_0[10];
    fgCharCharsTable1_0[8232] = fgCharCharsTable1_0[10];
  }
  return;
}


bool xercesc_2_7::XMLChar1_1::isAllSpaces(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck;
  do {
    if (toCheck + count <= curCh) {
      return true;
    }
    uVar1 = *curCh;
    curCh = curCh + 1;
  } while ((char)fgCharCharsTable1_1[(int)(uint)uVar1] < '\0');
  return false;
}


bool xercesc_2_7::XMLChar1_1::containsWhiteSpace(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck;
  do {
    if (toCheck + count <= curCh) {
      return false;
    }
    uVar1 = *curCh;
    curCh = curCh + 1;
  } while (-1 < (char)fgCharCharsTable1_1[(int)(uint)uVar1]);
  return true;
}


bool xercesc_2_7::XMLChar1_1::isValidNCName(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  bool bVar2;
  bool gotLeadingSurrogate;
  XMLCh nextCh;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck + 1;
  uVar1 = *toCheck;
  if ((uVar1 < 0xd800) || (0xdb7f < uVar1)) {
    if ((uVar1 == 0x3a) || ((fgCharCharsTable1_1[(int)(uint)uVar1] & 2) == 0)) {
      return false;
    }
  }
  else {
    uVar1 = *curCh;
    if ((uVar1 < 0xdc00) || (curCh = toCheck + 2, 0xdfff < uVar1)) {
      return false;
    }
  }
  bVar2 = false;
  do {
    while( true ) {
      if (toCheck + count <= curCh) {
        return true;
      }
      uVar1 = *curCh;
      if ((uVar1 < 0xd800) || (0xdbff < uVar1)) break;
      if ((0xdb7f < uVar1) || (bVar2)) {
        return false;
      }
      bVar2 = true;
      curCh = curCh + 1;
    }
    if ((uVar1 < 0xdc00) || (0xdfff < uVar1)) {
      if (bVar2) {
        return false;
      }
      if ((fgCharCharsTable1_1[(int)(uint)uVar1] & 1) == 0) {
        return false;
      }
    }
    else if (!bVar2) {
      return false;
    }
    bVar2 = false;
    curCh = curCh + 1;
  } while( true );
}


bool xercesc_2_7::XMLChar1_1::isValidNmtoken(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  bool bVar2;
  bool gotLeadingSurrogate;
  XMLCh nextCh;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  bVar2 = false;
  curCh = toCheck;
  do {
    while( true ) {
      if (toCheck + count <= curCh) {
        return true;
      }
      uVar1 = *curCh;
      if ((uVar1 < 0xd800) || (0xdbff < uVar1)) break;
      if ((0xdb7f < uVar1) || (bVar2)) {
        return false;
      }
      bVar2 = true;
      curCh = curCh + 1;
    }
    if ((uVar1 < 0xdc00) || (0xdfff < uVar1)) {
      if (bVar2) {
        return false;
      }
      if ((fgCharCharsTable1_1[(int)(uint)uVar1] & 4) == 0) {
        return false;
      }
    }
    else if (!bVar2) {
      return false;
    }
    bVar2 = false;
    curCh = curCh + 1;
  } while( true );
}


bool xercesc_2_7::XMLChar1_1::isValidName(XMLCh *toCheck,uint count)

{
  ushort uVar1;
  bool bVar2;
  bool gotLeadingSurrogate;
  XMLCh nextCh;
  XMLCh *curCh;
  XMLCh *endPtr;
  
  curCh = toCheck + 1;
  uVar1 = *toCheck;
  if ((uVar1 < 0xd800) || (0xdb7f < uVar1)) {
    if ((fgCharCharsTable1_1[(int)(uint)uVar1] & 2) == 0) {
      return false;
    }
  }
  else {
    uVar1 = *curCh;
    if ((uVar1 < 0xdc00) || (curCh = toCheck + 2, 0xdfff < uVar1)) {
      return false;
    }
  }
  bVar2 = false;
  do {
    while( true ) {
      if (toCheck + count <= curCh) {
        return true;
      }
      uVar1 = *curCh;
      if ((uVar1 < 0xd800) || (0xdbff < uVar1)) break;
      if ((0xdb7f < uVar1) || (bVar2)) {
        return false;
      }
      bVar2 = true;
      curCh = curCh + 1;
    }
    if ((uVar1 < 0xdc00) || (0xdfff < uVar1)) {
      if (bVar2) {
        return false;
      }
      if ((fgCharCharsTable1_1[(int)(uint)uVar1] & 4) == 0) {
        return false;
      }
    }
    else if (!bVar2) {
      return false;
    }
    bVar2 = false;
    curCh = curCh + 1;
  } while( true );
}


bool xercesc_2_7::XMLChar1_1::isValidQName(XMLCh *toCheck,uint count)

{
  bool bVar1;
  undefined uVar2;
  uint count_00;
  int length;
  int colonPos;
  
  count_00 = xercesc_2_7::XMLString::indexOf(toCheck,0x3a);
  if ((count_00 == 0) || (count_00 == count - 1)) {
    uVar2 = 0;
  }
  else {
    if ((count_00 != 0xffffffff) && (bVar1 = isValidNCName(toCheck,count_00), bVar1 == false)) {
      return false;
    }
    uVar2 = isValidNCName(toCheck + (long)(int)count_00 + 1,(count - count_00) - 1);
  }
  return (bool)uVar2;
}


bool xercesc_2_7::XMLChar1_1::isPublicIdChar(XMLCh toCheck,XMLCh toCheck2)

{
  XMLCh XVar1;
  ushort *puVar2;
  XMLCh *curTable;
  
  if (toCheck2 != 0) {
    return false;
  }
  curTable = (XMLCh *)gPublicIdChars;
  while (*curTable != 0) {
    puVar2 = curTable + 1;
    if (toCheck < *curTable) goto LAB_00100980;
    curTable = curTable + 2;
    if (toCheck <= *puVar2) {
      return true;
    }
  }
LAB_001009bd:
  do {
    if (*curTable == 0) {
      return false;
    }
    XVar1 = *curTable;
    curTable = curTable + 1;
  } while (toCheck != XVar1);
  return true;
LAB_00100980:
  do {
    curTable = puVar2;
    puVar2 = curTable + 1;
    XVar1 = *curTable;
    curTable = puVar2;
  } while (XVar1 != 0);
  goto LAB_001009bd;
}


void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  this->_vptr_XMLDeleter = (anon_subr_int_varargs **)&PTR__XMLDeleter_00121188;
  return;
}


void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  _XMLDeleter(this);
  operator_delete(this);
  return;
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* operator delete(void*) */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::indexOf(unsigned short const*, unsigned short) */

void xercesc_2_7::XMLString::indexOf(ushort *param_1,ushort param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLDeleter::~XMLDeleter() */

void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

