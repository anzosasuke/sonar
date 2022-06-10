
void __thiscall
xercesc_2_7::SGXMLScanner::SGXMLScanner
          (SGXMLScanner *this,XMLValidator *valToAdopt,GrammarResolver *grammarResolver,
          MemoryManager *manager)

{
  long lVar1;
  long in_FS_OFFSET;
  OutOfMemoryException *anon_var_0;
  CleanupType cleanup;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::XMLScanner::XMLScanner(&this->super_XMLScanner,valToAdopt,grammarResolver,manager);
  *(undefined ***)this = &PTR__SGXMLScanner_00114398;
  this->fSeeXsi = false;
  this->fGrammarType = UnKnown;
  this->fElemStateSize = 0x10;
  this->fElemState = (uint *)0x0;
  XMLBuffer::XMLBuffer(&this->fContent,0x3ff,manager);
  this->fEntityTable = (ValueHashTableOf_short_unsigned_int_ *)0x0;
  this->fRawAttrList = (RefVectorOf_xercesc_2_7__KVStringPair_ *)0x0;
  this->fRawAttrColonListSize = 0x20;
  this->fRawAttrColonList = (int *)0x0;
  this->fSchemaGrammar = (SchemaGrammar *)0x0;
  this->fSchemaValidator = (SchemaValidator *)0x0;
  this->fICHandler = (IdentityConstraintHandler *)0x0;
  this->fElemNonDeclPool = (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *)0x0;
  this->fElemCount = 0;
  this->fAttDefRegistry = (RefHashTableOf_unsigned_int_ *)0x0;
  this->fUndeclaredAttrRegistryNS = (RefHash2KeysTableOf_unsigned_int_ *)0x0;
  this->fPSVIAttrList = (PSVIAttributeList *)0x0;
  this->fModel = (XSModel *)0x0;
  this->fPSVIElement = (PSVIElement *)0x0;
  this->fErrorStack = (ValueStackOf_bool_ *)0x0;
  JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::JanitorMemFunCall(&cleanup,this,(MFPT)cleanUp);
  commonInit(this);
  JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::release(&cleanup);
  JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::_JanitorMemFunCall(&cleanup);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::SGXMLScanner::SGXMLScanner
          (SGXMLScanner *this,XMLDocumentHandler *docHandler,DocTypeHandler *docTypeHandler,
          XMLEntityHandler *entityHandler,XMLErrorReporter *errHandler,XMLValidator *valToAdopt,
          GrammarResolver *grammarResolver,MemoryManager *manager)

{
  long lVar1;
  long in_FS_OFFSET;
  OutOfMemoryException *anon_var_0;
  CleanupType cleanup;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::XMLScanner::XMLScanner
            (&this->super_XMLScanner,docHandler,docTypeHandler,entityHandler,errHandler,valToAdopt,
             grammarResolver,manager);
  *(undefined ***)this = &PTR__SGXMLScanner_00114398;
  this->fSeeXsi = false;
  this->fGrammarType = UnKnown;
  this->fElemStateSize = 0x10;
  this->fElemState = (uint *)0x0;
  XMLBuffer::XMLBuffer(&this->fContent,0x3ff,manager);
  this->fEntityTable = (ValueHashTableOf_short_unsigned_int_ *)0x0;
  this->fRawAttrList = (RefVectorOf_xercesc_2_7__KVStringPair_ *)0x0;
  this->fRawAttrColonListSize = 0x20;
  this->fRawAttrColonList = (int *)0x0;
  this->fSchemaGrammar = (SchemaGrammar *)0x0;
  this->fSchemaValidator = (SchemaValidator *)0x0;
  this->fICHandler = (IdentityConstraintHandler *)0x0;
  this->fElemNonDeclPool = (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *)0x0;
  this->fElemCount = 0;
  this->fAttDefRegistry = (RefHashTableOf_unsigned_int_ *)0x0;
  this->fUndeclaredAttrRegistryNS = (RefHash2KeysTableOf_unsigned_int_ *)0x0;
  this->fPSVIAttrList = (PSVIAttributeList *)0x0;
  this->fModel = (XSModel *)0x0;
  this->fPSVIElement = (PSVIElement *)0x0;
  this->fErrorStack = (ValueStackOf_bool_ *)0x0;
  JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::JanitorMemFunCall(&cleanup,this,(MFPT)cleanUp);
  commonInit(this);
  JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::release(&cleanup);
  JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::_JanitorMemFunCall(&cleanup);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::_SGXMLScanner(SGXMLScanner *this)

{
  *(undefined ***)this = &PTR__SGXMLScanner_00114398;
  cleanUp(this);
  XMLBuffer::_XMLBuffer(&this->fContent);
  xercesc_2_7::XMLScanner::_XMLScanner(&this->super_XMLScanner);
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::_SGXMLScanner(SGXMLScanner *this)

{
  void *in_RSI;
  
  _SGXMLScanner(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


NameIdPool_xercesc_2_7__DTDEntityDecl_ * __thiscall
xercesc_2_7::SGXMLScanner::getEntityDeclPool(SGXMLScanner *this)

{
  return (NameIdPool_xercesc_2_7__DTDEntityDecl_ *)0x0;
}


NameIdPool_xercesc_2_7__DTDEntityDecl_ * __thiscall
xercesc_2_7::SGXMLScanner::getEntityDeclPool(SGXMLScanner *this)

{
  return (NameIdPool_xercesc_2_7__DTDEntityDecl_ *)0x0;
}


void __thiscall xercesc_2_7::SGXMLScanner::scanDocument(SGXMLScanner *this,InputSource *src)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long in_FS_OFFSET;
  Codes anon_var_0_1;
  Codes anon_var_0;
  OutOfMemoryException *anon_var_0_3;
  XMLException *excToCatch;
  OutOfMemoryException *anon_var_0_2;
  ReaderMgrResetType resetReaderMgr;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  JanitorMemFunCall<xercesc_2_7::ReaderMgr>::JanitorMemFunCall
            (&resetReaderMgr,(ReaderMgr *)&this->field_0xb8,MRam0000000000100664);
  (**(code **)(*(long *)this + 0x78))(this,src);
  if (*(long *)&this->field_0x78 != 0) {
    (**(code **)(**(long **)&this->field_0x78 + 0x50))(*(undefined8 *)&this->field_0x78);
  }
  xercesc_2_7::XMLScanner::scanProlog();
  cVar2 = xercesc_2_7::ReaderMgr::atEOF();
  if (cVar2 == '\0') {
    bVar3 = scanContent(this);
    if (bVar3 != false) {
      if (this->field_0x18 != '\0') {
        xercesc_2_7::XMLScanner::checkIDRefs();
      }
      cVar2 = xercesc_2_7::ReaderMgr::atEOF();
      if (cVar2 != '\x01') {
        xercesc_2_7::XMLScanner::scanMiscellaneous();
      }
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this);
  }
  if (*(long *)&this->field_0x78 != 0) {
    (**(code **)(**(long **)&this->field_0x78 + 0x28))(*(undefined8 *)&this->field_0x78);
  }
  JanitorMemFunCall<xercesc_2_7::ReaderMgr>::_JanitorMemFunCall(&resetReaderMgr);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


bool __thiscall xercesc_2_7::SGXMLScanner::scanNext(SGXMLScanner *this,XMLPScanToken *token)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  RuntimeException *this_00;
  XMLCh *pXVar5;
  Codes CVar6;
  long in_FS_OFFSET;
  bool gotData;
  bool retVal;
  uint orgReader;
  XMLTokens curToken;
  Codes anon_var_0_1;
  Codes anon_var_0;
  StackElem *topElem;
  EndOfEntityException *toCatch;
  OutOfMemoryException *anon_var_0_3;
  XMLException *excToCatch;
  OutOfMemoryException *anon_var_0_2;
  ReaderMgrResetType resetReaderMgr;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = xercesc_2_7::XMLScanner::isLegalToken((XMLPScanToken *)this);
  if (cVar2 != '\x01') {
    this_00 = (RuntimeException *)__cxa_allocate_exception(0x30);
    RuntimeException::RuntimeException
              (this_00,"SGXMLScanner.cpp",0x12a,Scan_BadPScanToken,
               *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
  }
  JanitorMemFunCall<xercesc_2_7::ReaderMgr>::JanitorMemFunCall
            (&resetReaderMgr,(ReaderMgr *)&this->field_0xb8,MRam0000000000100a66);
  retVal = true;
  curToken = xercesc_2_7::XMLScanner::senseNextToken((uint *)this);
  if (curToken == Token_CharData) {
    (**(code **)(*(long *)this + 0x60))(this,&this->field_0x1d8);
  }
  else {
    CVar6 = (Codes)this;
    if (curToken == Token_EOF) {
      bVar3 = ElemStack::isEmpty((ElemStack *)&this->field_0x2a0);
      if (bVar3 != true) {
        topElem = (StackElem *)xercesc_2_7::ElemStack::popTop();
        pXVar5 = XMLElementDecl::getFullName(topElem->fThisElement);
        xercesc_2_7::XMLScanner::emitError(CVar6,(ushort *)0x112,pXVar5,(ushort *)0x0,(ushort *)0x0)
        ;
      }
      retVal = false;
    }
    else {
      gotData = true;
      switch(curToken) {
      case Token_CData:
        bVar3 = ElemStack::isEmpty((ElemStack *)&this->field_0x2a0);
        if (bVar3 != false) {
          xercesc_2_7::XMLScanner::emitError(CVar6);
        }
        (**(code **)(*(long *)this + 0x58))(this);
        break;
      default:
        ReaderMgr::skipToChar((ReaderMgr *)&this->field_0xb8,0x3c);
        break;
      case Token_Comment:
        xercesc_2_7::XMLScanner::scanComment();
        break;
      case Token_EndTag:
        (**(code **)(*(long *)this + 0x98))(this,&gotData);
        break;
      case Token_PI:
        xercesc_2_7::XMLScanner::scanPI();
        break;
      case Token_StartTag:
        (**(code **)(*(long *)this + 0x90))(this,&gotData);
      }
      uVar4 = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
      if (uVar4 != orgReader) {
        xercesc_2_7::XMLScanner::emitError(CVar6);
      }
      if (gotData != true) {
        if (this->field_0x18 != '\0') {
          xercesc_2_7::XMLScanner::checkIDRefs();
        }
        xercesc_2_7::XMLScanner::scanMiscellaneous();
        bVar3 = toCheckIdentityConstraint(this);
        if (bVar3 != false) {
          IdentityConstraintHandler::endDocument(this->fICHandler);
        }
        if (*(long *)&this->field_0x78 != 0) {
          (**(code **)(**(long **)&this->field_0x78 + 0x28))(*(undefined8 *)&this->field_0x78);
        }
      }
    }
  }
  if (retVal != false) {
    JanitorMemFunCall<xercesc_2_7::ReaderMgr>::release(&resetReaderMgr);
  }
  bVar3 = retVal;
  JanitorMemFunCall<xercesc_2_7::ReaderMgr>::_JanitorMemFunCall(&resetReaderMgr);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


uint __thiscall
xercesc_2_7::SGXMLScanner::rawAttrScan
          (SGXMLScanner *this,XMLCh *elemName,RefVectorOf_xercesc_2_7__KVStringPair_ *toFill,
          bool *isEmpty)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  XMLCh XVar4;
  uint uVar5;
  uint uVar6;
  XMLReader *pXVar7;
  XMLCh *pXVar8;
  KVStringPair *this_00;
  UnexpectedEOFException *this_01;
  Codes CVar9;
  long in_FS_OFFSET;
  XMLCh nextCh;
  XMLCh chFound;
  XMLCh chFound_1;
  int colonPosition;
  uint attCount;
  uint curVecSize;
  XMLCh *curAttNameBuf;
  KVStringPair *curPair;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  attCount = 0;
  curVecSize = BaseRefVectorOf<xercesc_2_7::KVStringPair>::size
                         (&toFill->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_);
  *isEmpty = false;
LAB_001010a3:
  while( true ) {
    nextCh = xercesc_2_7::ReaderMgr::peekNextChar();
    bVar2 = SUB81(this,0);
    CVar9 = (Codes)this;
    if (((attCount != 0) && (nextCh != 0x2f)) && (nextCh != 0x3e)) {
      pXVar7 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
      bVar1 = XMLReader::isWhitespace(pXVar7,nextCh);
      if (bVar1 == false) {
        xercesc_2_7::XMLScanner::emitError(CVar9);
      }
      else {
        xercesc_2_7::ReaderMgr::getNextChar();
        xercesc_2_7::ReaderMgr::skipPastSpaces((bool)(bVar2 + -0x48));
        nextCh = xercesc_2_7::ReaderMgr::peekNextChar();
      }
    }
    pXVar7 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
    bVar1 = XMLReader::isSpecialStartTagChar(pXVar7,nextCh);
    if (bVar1 != true) break;
    if (nextCh == 0) {
      this_01 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
      UnexpectedEOFException::UnexpectedEOFException
                (this_01,"SGXMLScanner.cpp",0x2a2,Gen_UnexpectedEOF,
                 *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_01,&UnexpectedEOFException::typeinfo,
                  UnexpectedEOFException::_UnexpectedEOFException);
    }
    if (nextCh == 0x2f) {
      xercesc_2_7::ReaderMgr::getNextChar();
      *isEmpty = true;
      cVar3 = xercesc_2_7::ReaderMgr::skippedChar((short)this + 0xb8);
      if (cVar3 != '\x01') {
        xercesc_2_7::XMLScanner::emitError
                  (CVar9,(ushort *)0xc6,elemName,(ushort *)0x0,(ushort *)0x0);
      }
      goto LAB_001016c8;
    }
    if (nextCh == 0x3e) {
      xercesc_2_7::ReaderMgr::getNextChar();
      goto LAB_001016c8;
    }
    if (nextCh == 0x3c) {
      xercesc_2_7::XMLScanner::emitError(CVar9,(ushort *)0xc6,elemName,(ushort *)0x0,(ushort *)0x0);
LAB_001016c8:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return attCount;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((nextCh == 0x27) || (nextCh == 0x22)) {
      xercesc_2_7::XMLScanner::emitError(CVar9);
      xercesc_2_7::ReaderMgr::getNextChar();
      xercesc_2_7::ReaderMgr::skipQuotedString((short)this + 0xb8);
      xercesc_2_7::ReaderMgr::skipPastSpaces((bool)(bVar2 + -0x48));
    }
  }
  bVar1 = ReaderMgr::getQName((ReaderMgr *)&this->field_0xb8,(XMLBuffer *)&this->field_0x188,
                              &colonPosition);
  if (bVar1 != true) {
    bVar2 = XMLBuffer::isEmpty((XMLBuffer *)&this->field_0x188);
    if (bVar2 == false) {
      pXVar8 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x188);
      xercesc_2_7::XMLScanner::emitError(CVar9,(ushort *)0x135,pXVar8,(ushort *)0x0,(ushort *)0x0);
    }
    else {
      xercesc_2_7::XMLScanner::emitError(CVar9);
    }
    ReaderMgr::skipPastChar((ReaderMgr *)&this->field_0xb8,0x3e);
    goto LAB_001016c8;
  }
  curAttNameBuf = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x188);
  cVar3 = xercesc_2_7::XMLScanner::scanEq(bVar2);
  if (cVar3 != '\x01') {
    xercesc_2_7::XMLScanner::emitError(CVar9);
    XVar4 = xercesc_2_7::ReaderMgr::skipUntilInOrWS((ushort *)&this->field_0xb8);
    if ((XVar4 == 0x3e) || (XVar4 == 0x2f)) goto LAB_001010a3;
    if ((XVar4 == 0x27) || (XVar4 == 0x22)) {
LAB_001012d2:
      bVar2 = true;
    }
    else {
      pXVar7 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
      bVar2 = XMLReader::isWhitespace(pXVar7,XVar4);
      if (bVar2 != false) goto LAB_001012d2;
      bVar2 = false;
    }
    if (!bVar2) {
      if (XVar4 == 0x3c) {
        xercesc_2_7::XMLScanner::emitError
                  (CVar9,(ushort *)0xc6,elemName,(ushort *)0x0,(ushort *)0x0);
      }
      goto LAB_001016c8;
    }
  }
  bVar2 = basicAttrValueScan(this,curAttNameBuf,(XMLBuffer *)&this->field_0x1b0);
  if (bVar2 != true) {
    xercesc_2_7::XMLScanner::emitError(CVar9);
    XVar4 = xercesc_2_7::ReaderMgr::skipUntilInOrWS((ushort *)&this->field_0xb8);
    if ((XVar4 == 0x3e) || (XVar4 == 0x2f)) {
LAB_001013ab:
      bVar2 = true;
    }
    else {
      pXVar7 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
      bVar2 = XMLReader::isWhitespace(pXVar7,XVar4);
      if (bVar2 != false) goto LAB_001013ab;
      bVar2 = false;
    }
    if (!bVar2) {
      if (XVar4 == 0x3c) {
        xercesc_2_7::XMLScanner::emitError
                  (CVar9,(ushort *)0xc6,elemName,(ushort *)0x0,(ushort *)0x0);
      }
      goto LAB_001016c8;
    }
  }
  curPair = (KVStringPair *)0x0;
  if (attCount < curVecSize) {
    curPair = BaseRefVectorOf<xercesc_2_7::KVStringPair>::elementAt
                        (&toFill->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_,attCount);
    uVar5 = XMLBuffer::getLen((XMLBuffer *)&this->field_0x1b0);
    pXVar8 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x1b0);
    uVar6 = XMLBuffer::getLen((XMLBuffer *)&this->field_0x188);
    KVStringPair::set(curPair,curAttNameBuf,uVar6,pXVar8,uVar5);
  }
  else {
    uVar5 = XMLBuffer::getLen((XMLBuffer *)&this->field_0x188);
    pXVar8 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x1b0);
    uVar6 = XMLBuffer::getLen((XMLBuffer *)&this->field_0x1b0);
    this_00 = (KVStringPair *)
              xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x168);
    xercesc_2_7::KVStringPair::KVStringPair
              (this_00,curAttNameBuf,uVar5,pXVar8,uVar6,*(MemoryManager **)&this->field_0x168);
    curPair = this_00;
    BaseRefVectorOf<xercesc_2_7::KVStringPair>::addElement
              (&toFill->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_,this_00);
  }
  if (this->fRawAttrColonListSize <= attCount) {
    resizeRawAttrColonList(this);
  }
  this->fRawAttrColonList[attCount] = colonPosition;
  attCount = attCount + 1;
  goto LAB_001010a3;
}


bool __thiscall xercesc_2_7::SGXMLScanner::scanContent(SGXMLScanner *this)

{
  bool bVar1;
  uint uVar2;
  XMLCh *pXVar3;
  Codes CVar4;
  long in_FS_OFFSET;
  bool gotData;
  bool inMarkup;
  uint orgReader;
  XMLTokens curToken;
  StackElem *topElem;
  EndOfEntityException *toCatch;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  gotData = true;
  inMarkup = false;
  while (gotData != false) {
    while (gotData != false) {
      curToken = xercesc_2_7::XMLScanner::senseNextToken((uint *)this);
      if (curToken == Token_CharData) {
        (**(code **)(*(long *)this + 0x60))(this,&this->field_0x1d8);
      }
      else {
        CVar4 = (Codes)this;
        if (curToken == Token_EOF) {
          bVar1 = ElemStack::isEmpty((ElemStack *)&this->field_0x2a0);
          if (bVar1 != true) {
            topElem = (StackElem *)xercesc_2_7::ElemStack::popTop();
            pXVar3 = XMLElementDecl::getFullName(topElem->fThisElement);
            xercesc_2_7::XMLScanner::emitError
                      (CVar4,(ushort *)0x112,pXVar3,(ushort *)0x0,(ushort *)0x0);
          }
          gotData = false;
        }
        else {
          inMarkup = true;
          switch(curToken) {
          case Token_CData:
            bVar1 = ElemStack::isEmpty((ElemStack *)&this->field_0x2a0);
            if (bVar1 != false) {
              xercesc_2_7::XMLScanner::emitError(CVar4);
            }
            (**(code **)(*(long *)this + 0x58))(this);
            break;
          default:
            ReaderMgr::skipToChar((ReaderMgr *)&this->field_0xb8,0x3c);
            break;
          case Token_Comment:
            xercesc_2_7::XMLScanner::scanComment();
            break;
          case Token_EndTag:
            (**(code **)(*(long *)this + 0x98))(this,&gotData);
            break;
          case Token_PI:
            xercesc_2_7::XMLScanner::scanPI();
            break;
          case Token_StartTag:
            (**(code **)(*(long *)this + 0x90))(this,&gotData);
          }
          uVar2 = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
          if (uVar2 != orgReader) {
            xercesc_2_7::XMLScanner::emitError(CVar4);
          }
          inMarkup = false;
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return true;
}


void __thiscall xercesc_2_7::SGXMLScanner::scanEndTag(SGXMLScanner *this,bool *gotData)

{
  undefined8 uVar1;
  SchemaElementDecl *pSVar2;
  code *pcVar3;
  ValueStackOf_bool_ *this_00;
  bool bVar4;
  char cVar5;
  uint uVar6;
  ValidatorType VVar7;
  uint uVar8;
  GrammarType GVar9;
  RuntimeException *this_01;
  XMLCh *pXVar10;
  ComplexTypeInfo *pCVar11;
  DatatypeValidator *pDVar12;
  ushort *puVar13;
  ushort *puVar14;
  QName *this_02;
  Grammar *pGVar15;
  Codes CVar16;
  long in_FS_OFFSET;
  bool local_42;
  bool isRoot;
  uint uriId;
  int res;
  DatatypeValidator *psviMemberType;
  XMLCh *elemName;
  StackElem *topElem;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *gotData = true;
  bVar4 = ElemStack::isEmpty((ElemStack *)&this->field_0x2a0);
  CVar16 = (Codes)this;
  if (bVar4 != false) {
    xercesc_2_7::XMLScanner::emitError(CVar16);
    ReaderMgr::skipPastChar((ReaderMgr *)&this->field_0xb8,0x3e);
    this_01 = (RuntimeException *)__cxa_allocate_exception(0x30);
    RuntimeException::RuntimeException
              (this_01,"SGXMLScanner.cpp",0x34d,Scan_UnbalancedStartEnd,
               *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_01,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
  }
  if (this->field_0x12 == '\0') {
    uriId = *(uint *)&this->field_0x34;
  }
  else {
    uriId = ElemStack::getCurrentURI((ElemStack *)&this->field_0x2a0);
  }
  elemName = ElemStack::getCurrentSchemaElemName((ElemStack *)&this->field_0x2a0);
  topElem = (StackElem *)xercesc_2_7::ElemStack::popTop();
  bVar4 = ReaderMgr::skippedString((ReaderMgr *)&this->field_0xb8,elemName);
  if (bVar4 != true) {
    xercesc_2_7::XMLScanner::emitError(CVar16,(ushort *)0xca,elemName,(ushort *)0x0,(ushort *)0x0);
    ReaderMgr::skipPastChar((ReaderMgr *)&this->field_0xb8,0x3e);
    goto LAB_00102253;
  }
  isRoot = ElemStack::isEmpty((ElemStack *)&this->field_0x2a0);
  bVar4 = ValueStackOf<bool>::pop(this->fErrorStack);
  (this->fPSVIElemContext).fErrorOccurred = bVar4;
  uVar8 = topElem->fReaderNum;
  uVar6 = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
  if (uVar8 != uVar6) {
    xercesc_2_7::XMLScanner::emitError(CVar16);
  }
  xercesc_2_7::ReaderMgr::skipPastSpaces((bool)((char)this + -0x48));
  cVar5 = xercesc_2_7::ReaderMgr::skippedChar((short)this + 0xb8);
  if (cVar5 != '\x01') {
    pXVar10 = XMLElementDecl::getFullName(topElem->fThisElement);
    xercesc_2_7::XMLScanner::emitError(CVar16,(ushort *)0xc8,pXVar10,(ushort *)0x0,(ushort *)0x0);
  }
  if (this->field_0x18 == '\0') {
LAB_00101c6a:
    bVar4 = false;
  }
  else {
    bVar4 = XMLElementDecl::isDeclared(topElem->fThisElement);
    if (bVar4 == false) goto LAB_00101c6a;
    bVar4 = true;
  }
  if (bVar4) {
    pCVar11 = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
    (this->fPSVIElemContext).fCurrentTypeInfo = pCVar11;
    if ((this->fPSVIElemContext).fCurrentTypeInfo == (ComplexTypeInfo *)0x0) {
      pDVar12 = SchemaValidator::getCurrentDatatypeValidator
                          (*(SchemaValidator **)&this->field_0x108);
      (this->fPSVIElemContext).fCurrentDV = pDVar12;
    }
    else {
      (this->fPSVIElemContext).fCurrentDV = (DatatypeValidator *)0x0;
    }
    if (*(long *)&this->field_0xa0 != 0) {
      pXVar10 = SchemaValidator::getNormalizedValue(*(SchemaValidator **)&this->field_0x108);
      (this->fPSVIElemContext).fNormalizedValue = pXVar10;
      bVar4 = XMLString::equals((this->fPSVIElemContext).fNormalizedValue,
                                (XMLCh *)&XMLUni::fgZeroLenString);
      if (bVar4 != false) {
        (this->fPSVIElemContext).fNormalizedValue = (XMLCh *)0x0;
      }
    }
  }
  else {
    (this->fPSVIElemContext).fCurrentDV = (DatatypeValidator *)0x0;
    (this->fPSVIElemContext).fCurrentTypeInfo = (ComplexTypeInfo *)0x0;
    (this->fPSVIElemContext).fNormalizedValue = (XMLCh *)0x0;
  }
  psviMemberType = (DatatypeValidator *)0x0;
  if (this->field_0x18 != '\0') {
    res = (**(code **)(**(long **)&this->field_0x108 + 0x10))
                    (*(undefined8 *)&this->field_0x108,topElem->fThisElement,topElem->fChildren,
                     topElem->fChildCount);
    if (-1 < res) {
      if (topElem->fChildCount == 0) {
        uVar1 = *(undefined8 *)&this->field_0x108;
        puVar13 = (ushort *)
                  (**(code **)(*(long *)topElem->fThisElement + 0x78))(topElem->fThisElement);
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)uVar1,(ushort *)0x10,puVar13,(ushort *)0x0,(ushort *)0x0);
      }
      else if ((uint)res < topElem->fChildCount) {
        uVar1 = *(undefined8 *)&this->field_0x108;
        puVar13 = (ushort *)
                  (**(code **)(*(long *)topElem->fThisElement + 0x78))(topElem->fThisElement);
        puVar14 = (ushort *)xercesc_2_7::QName::getRawName();
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)uVar1,(ushort *)0x7,puVar14,puVar13,(ushort *)0x0);
      }
      else {
        uVar1 = *(undefined8 *)&this->field_0x108;
        puVar13 = (ushort *)
                  (**(code **)(*(long *)topElem->fThisElement + 0x78))(topElem->fThisElement);
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)uVar1,(ushort *)0x15,puVar13,(ushort *)0x0,(ushort *)0x0);
      }
    }
    bVar4 = SchemaValidator::getErrorOccurred(*(SchemaValidator **)&this->field_0x108);
    if (bVar4 == false) {
      if ((this->fPSVIElemContext).fCurrentDV == (DatatypeValidator *)0x0) {
LAB_00101f2e:
        bVar4 = false;
      }
      else {
        VVar7 = DatatypeValidator::getType((this->fPSVIElemContext).fCurrentDV);
        if (VVar7 != Union) goto LAB_00101f2e;
        bVar4 = true;
      }
      if (bVar4) {
        psviMemberType =
             (DatatypeValidator *)
             (**(code **)(**(long **)&this->field_0xa8 + 0x58))(*(undefined8 *)&this->field_0xa8);
      }
    }
    else {
      (this->fPSVIElemContext).fErrorOccurred = true;
    }
    if (*(long *)&this->field_0xa0 != 0) {
      bVar4 = SchemaValidator::getIsElemSpecified(*(SchemaValidator **)&this->field_0x108);
      (this->fPSVIElemContext).fIsSpecified = bVar4;
      if ((this->fPSVIElemContext).fIsSpecified != false) {
        pXVar10 = SchemaElementDecl::getDefaultValue((SchemaElementDecl *)topElem->fThisElement);
        (this->fPSVIElemContext).fNormalizedValue = pXVar10;
      }
    }
    bVar4 = toCheckIdentityConstraint(this);
    if (bVar4 != false) {
      pSVar2 = (SchemaElementDecl *)this->fICHandler;
      XMLBuffer::getRawBuffer(&this->fContent);
      xercesc_2_7::IdentityConstraintHandler::deactivateContext
                (pSVar2,(ushort *)topElem->fThisElement);
    }
  }
  if (*(long *)&this->field_0xa0 != 0) {
    endElementPSVI(this,(SchemaElementDecl *)topElem->fThisElement,psviMemberType);
  }
  SchemaValidator::clearDatatypeBuffer(*(SchemaValidator **)&this->field_0x108);
  if (*(long *)&this->field_0x78 != 0) {
    if (this->fGrammarType == SchemaGrammarType) {
      if (topElem->fPrefixColonPos == -1) {
        XMLBuffer::reset((XMLBuffer *)&this->field_0x228);
      }
      else {
        XMLBuffer::set((XMLBuffer *)&this->field_0x228,elemName,topElem->fPrefixColonPos);
      }
    }
    else {
      this_02 = XMLElementDecl::getElementName(topElem->fThisElement);
      pXVar10 = QName::getPrefix(this_02);
      XMLBuffer::set((XMLBuffer *)&this->field_0x228,pXVar10);
    }
    uVar1 = *(undefined8 *)&this->field_0x78;
    pcVar3 = *(code **)(**(long **)&this->field_0x78 + 0x30);
    pXVar10 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
    (*pcVar3)(uVar1,topElem->fThisElement,uriId,isRoot,pXVar10);
  }
  if (isRoot != true) {
    this_00 = this->fErrorStack;
    uVar8 = ValueStackOf<bool>::size(this->fErrorStack);
    if (uVar8 == 0) {
LAB_00102154:
      if ((this->fPSVIElemContext).fErrorOccurred != false) goto LAB_00102163;
      local_42 = false;
    }
    else {
      bVar4 = ValueStackOf<bool>::pop(this->fErrorStack);
      if (bVar4 == false) goto LAB_00102154;
LAB_00102163:
      local_42 = true;
    }
    ValueStackOf<bool>::push(this_00,&local_42);
  }
  *gotData = (bool)(isRoot ^ 1);
  if (*gotData != false) {
    pGVar15 = ElemStack::getCurrentGrammar((ElemStack *)&this->field_0x2a0);
    *(Grammar **)&this->field_0x128 = pGVar15;
    GVar9 = (**(code **)(**(long **)&this->field_0x128 + 0x28))(*(undefined8 *)&this->field_0x128);
    this->fGrammarType = GVar9;
    (**(code **)(**(long **)&this->field_0x108 + 0x58))
              (*(undefined8 *)&this->field_0x108,*(undefined8 *)&this->field_0x128);
    bVar4 = ElemStack::getValidationFlag((ElemStack *)&this->field_0x2a0);
    this->field_0x18 = bVar4;
  }
LAB_00102253:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::scanDocTypeDecl(SGXMLScanner *this)

{
  short sVar1;
  XMLCh nextCh;
  
  sVar1 = xercesc_2_7::ReaderMgr::skipUntilIn((ushort *)&this->field_0xb8);
  if (sVar1 == 0x5b) {
    ReaderMgr::skipPastChar((ReaderMgr *)&this->field_0xb8,0x5d);
  }
  ReaderMgr::skipPastChar((ReaderMgr *)&this->field_0xb8,0x3e);
  return;
}


bool __thiscall xercesc_2_7::SGXMLScanner::scanStartTag(SGXMLScanner *this,bool *gotData)

{
  long lVar1;
  MemoryManager *pMVar2;
  undefined8 uVar3;
  RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *pRVar4;
  XMLValidator *this_00;
  code *pcVar5;
  PSVIAttributeList *pPVar6;
  code *pcVar7;
  PSVIElement *pPVar8;
  XSModel *pXVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  CreateReasons CVar13;
  uint uVar14;
  ValidatorType VVar15;
  GrammarType GVar16;
  XMLCh *pXVar17;
  SchemaElementDecl **ppSVar18;
  undefined4 extraout_var;
  SchemaElementDecl *pSVar19;
  QName *pQVar20;
  PSVIHandler *pPVar21;
  undefined8 uVar22;
  ComplexTypeInfo *pCVar23;
  DatatypeValidator *pDVar24;
  ushort *puVar25;
  Grammar *pGVar26;
  XSTypeDefinition *pXVar27;
  Codes CVar28;
  long in_FS_OFFSET;
  bool isEmpty;
  bool laxThisOne;
  bool wasAdded;
  bool isRoot;
  bool parentValidation;
  bool errorCondition_2;
  bool errorCondition_3;
  bool errorCondition;
  bool errorCondition_1;
  bool errorCondition_4;
  int prefixColonPos;
  uint currentScope;
  ModelTypes modelType;
  uint orgGrammarUri;
  uint orgGrammarUri_1;
  uint attCount;
  uint elemDepth;
  uint uriId;
  int comma;
  int res;
  ContentLeafNameTypeVector *cv;
  XMLContentModel *cm;
  ComplexTypeInfo *currType;
  XMLElementDecl *elemDecl;
  DatatypeValidator *psviMemberType;
  XSTypeDefinition *typeDef;
  XMLCh *qnameRawBuf;
  SchemaElementDecl *tempElement;
  XMLCh *nameRawBuf;
  XMLCh *original_uriStr;
  XMLCh *uriStr;
  ComplexTypeInfo *typeinfo;
  XMLCh *typeName;
  XMLCh *uriStr_1;
  QName *eName;
  ComplexTypeInfo *curTypeInfo;
  DatatypeValidator *curDV;
  QName element;
  XMLCh poundStr [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *gotData = true;
  XMLBuffer::reset(&this->fContent);
  bVar11 = ReaderMgr::getQName((ReaderMgr *)&this->field_0xb8,(XMLBuffer *)&this->field_0x200,
                               &prefixColonPos);
  CVar28 = (Codes)this;
  if (bVar11 != true) {
    bVar11 = XMLBuffer::isEmpty((XMLBuffer *)&this->field_0x200);
    if (bVar11 == false) {
      pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x200);
      xercesc_2_7::XMLScanner::emitError(CVar28,(ushort *)0x134,pXVar17,(ushort *)0x0,(ushort *)0x0)
      ;
    }
    else {
      xercesc_2_7::XMLScanner::emitError(CVar28);
    }
    ReaderMgr::skipToChar((ReaderMgr *)&this->field_0xb8,0x3c);
    bVar11 = false;
    goto LAB_00104253;
  }
  isRoot = ElemStack::isEmpty((ElemStack *)&this->field_0x2a0);
  xercesc_2_7::ReaderMgr::skipPastSpaces((bool)((char)this + -0x48));
  qnameRawBuf = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x200);
  attCount = rawAttrScan(this,qnameRawBuf,this->fRawAttrList,&isEmpty);
  cv = (ContentLeafNameTypeVector *)0x0;
  cm = (XMLContentModel *)0x0;
  currentScope = 0xfffffffe;
  laxThisOne = false;
  if (isRoot != true) {
    ppSVar18 = (SchemaElementDecl **)xercesc_2_7::ElemStack::topElement();
    tempElement = *ppSVar18;
    modelType = SchemaElementDecl::getModelType(tempElement);
    currType = (ComplexTypeInfo *)0x0;
    if (this->field_0x18 == '\0') {
      currType = SchemaElementDecl::getComplexTypeInfo(tempElement);
    }
    else {
      currType = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
      if (currType == (ComplexTypeInfo *)0x0) {
        modelType = Any;
      }
      else {
        modelType = ComplexTypeInfo::getContentType(currType);
      }
    }
    if (((modelType == Mixed_Simple) || (modelType == Mixed_Complex)) || (modelType == Children)) {
      cm = ComplexTypeInfo::getContentModel(currType,false);
      iVar12 = (*cm->_vptr_XMLContentModel[5])(cm);
      cv = (ContentLeafNameTypeVector *)CONCAT44(extraout_var,iVar12);
      currentScope = ElemStack::getCurrentScope((ElemStack *)&this->field_0x2a0);
    }
    else if (modelType == Any) {
      laxThisOne = true;
    }
  }
  elemDepth = xercesc_2_7::ElemStack::addLevel();
  ElemStack::setValidationFlag((ElemStack *)&this->field_0x2a0,(bool)this->field_0x18);
  ElemStack::setPrefixColonPos((ElemStack *)&this->field_0x2a0,prefixColonPos);
  if ((isRoot != false) &&
     ((*(long *)&this->field_0x148 != 0 || (*(long *)&this->field_0x150 != 0)))) {
    if (*(long *)&this->field_0x148 != 0) {
      parseSchemaLocation(this,*(XMLCh **)&this->field_0x148);
    }
    if (*(long *)&this->field_0x150 != 0) {
      resolveSchemaGrammar(this,*(XMLCh **)&this->field_0x150,(XMLCh *)&XMLUni::fgZeroLenString);
    }
  }
  if (attCount != 0) {
    scanRawAttrListforNameSpaces(this,attCount);
  }
  uriId = resolveQNameWithColon(this,qnameRawBuf,(XMLBuffer *)&this->field_0x228,1,prefixColonPos);
  parentValidation = (bool)this->field_0x18;
  if (cv != (ContentLeafNameTypeVector *)0x0) {
    pMVar2 = *(MemoryManager **)&this->field_0x168;
    puVar25 = qnameRawBuf + (long)prefixColonPos + 1;
    pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
    xercesc_2_7::QName::QName(&element,pXVar17,puVar25,uriId,pMVar2);
    laxThisOne = laxElementValidation(this,&element,cv,cm,elemDepth - 1);
    xercesc_2_7::QName::_QName(&element);
  }
  elemDecl = (XMLElementDecl *)0x0;
  wasAdded = false;
  nameRawBuf = qnameRawBuf + (long)prefixColonPos + 1;
  original_uriStr =
       (XMLCh *)(**(code **)(**(long **)&this->field_0x128 + 0x30))
                          (*(undefined8 *)&this->field_0x128);
  if (uriId == *(uint *)&this->field_0x34) {
    if (elemDecl == (XMLElementDecl *)0x0) {
      elemDecl = (XMLElementDecl *)
                 (**(code **)(**(long **)&this->field_0x128 + 0x58))
                           (*(undefined8 *)&this->field_0x128,uriId,nameRawBuf,qnameRawBuf,
                            currentScope);
      if (elemDecl == (XMLElementDecl *)0x0) {
        elemDecl = (XMLElementDecl *)
                   RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::getByKey
                             (this->fElemNonDeclPool,nameRawBuf,uriId,currentScope);
      }
      orgGrammarUri_1 = *(uint *)&this->field_0x34;
      if (elemDecl == (XMLElementDecl *)0x0) {
        orgGrammarUri_1 =
             (**(code **)(**(long **)&this->field_0x138 + 0x48))(*(undefined8 *)&this->field_0x138);
        if (orgGrammarUri_1 == *(uint *)&this->field_0x34) goto LAB_00102e0a;
        bVar11 = true;
      }
      else {
LAB_00102e0a:
        bVar11 = false;
      }
      if (bVar11) {
        bVar11 = switchGrammar(this,(XMLCh *)&XMLUni::fgZeroLenString);
        if ((bVar11 == true) || (this->field_0x18 == '\0')) {
          errorCondition_2 = false;
        }
        else {
          errorCondition_2 = true;
        }
        if ((errorCondition_2 != false) && (laxThisOne != true)) {
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)*(undefined8 *)&this->field_0x108,(ushort *)0x48,
                     (ushort *)&XMLUni::fgZeroLenString,(ushort *)0x0,(ushort *)0x0);
        }
        elemDecl = (XMLElementDecl *)
                   (**(code **)(**(long **)&this->field_0x128 + 0x58))
                             (*(undefined8 *)&this->field_0x128,uriId,nameRawBuf,qnameRawBuf,
                              currentScope);
      }
      if ((elemDecl == (XMLElementDecl *)0x0) && (currentScope != 0xfffffffe)) {
        elemDecl = (XMLElementDecl *)
                   (**(code **)(**(long **)&this->field_0x128 + 0x58))
                             (*(undefined8 *)&this->field_0x128,uriId,nameRawBuf,qnameRawBuf,
                              0xfffffffe);
        if (elemDecl == (XMLElementDecl *)0x0) {
          elemDecl = (XMLElementDecl *)
                     RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::getByKey
                               (this->fElemNonDeclPool,nameRawBuf,uriId,-2);
        }
        if ((elemDecl == (XMLElementDecl *)0x0) && (orgGrammarUri_1 != *(uint *)&this->field_0x34))
        {
          bVar11 = switchGrammar(this,original_uriStr);
          if ((bVar11 == true) || (this->field_0x18 == '\0')) {
            errorCondition_3 = false;
          }
          else {
            errorCondition_3 = true;
          }
          if ((errorCondition_3 != false) && (laxThisOne != true)) {
            xercesc_2_7::XMLValidator::emitError
                      ((Codes)*(undefined8 *)&this->field_0x108,(ushort *)0x48,original_uriStr,
                       (ushort *)0x0,(ushort *)0x0);
          }
          elemDecl = (XMLElementDecl *)
                     (**(code **)(**(long **)&this->field_0x128 + 0x58))
                               (*(undefined8 *)&this->field_0x128,orgGrammarUri_1,nameRawBuf,
                                qnameRawBuf,currentScope);
          if (elemDecl == (XMLElementDecl *)0x0) {
LAB_001030c3:
            bVar11 = false;
          }
          else {
            CVar13 = XMLElementDecl::getCreateReason(elemDecl);
            if ((CVar13 == JustFaultIn) || (this->field_0x18 == '\0')) goto LAB_001030c3;
            bVar11 = true;
          }
          if (bVar11) {
            uVar3 = *(undefined8 *)&this->field_0x108;
            pXVar17 = XMLElementDecl::getFullName(elemDecl);
            xercesc_2_7::XMLValidator::emitError
                      ((Codes)uVar3,(ushort *)0x4f,pXVar17,(ushort *)0x0,(ushort *)0x0);
          }
        }
      }
      if (elemDecl == (XMLElementDecl *)0x0) {
        if (orgGrammarUri_1 != *(uint *)&this->field_0x34) {
          switchGrammar(this,original_uriStr);
        }
        pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
        pSVar19 = (SchemaElementDecl *)
                  xercesc_2_7::XMemory::operator_new(0x98,*(MemoryManager **)&this->field_0x168);
        xercesc_2_7::SchemaElementDecl::SchemaElementDecl
                  (pSVar19,pXVar17,nameRawBuf,uriId,Any,0xfffffffe,
                   *(MemoryManager **)&this->field_0x168);
        uVar10 = uriId;
        uVar14 = currentScope;
        pRVar4 = this->fElemNonDeclPool;
        elemDecl = (XMLElementDecl *)pSVar19;
        pXVar17 = XMLElementDecl::getBaseName((XMLElementDecl *)pSVar19);
        uVar14 = RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::put
                           (pRVar4,pXVar17,uVar10,uVar14,(SchemaElementDecl *)elemDecl);
        XMLElementDecl::setId(elemDecl,uVar14);
        wasAdded = true;
      }
    }
  }
  else {
    elemDecl = (XMLElementDecl *)
               (**(code **)(**(long **)&this->field_0x128 + 0x58))
                         (*(undefined8 *)&this->field_0x128,uriId,nameRawBuf,qnameRawBuf,
                          currentScope);
    if (elemDecl == (XMLElementDecl *)0x0) {
      elemDecl = (XMLElementDecl *)
                 RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::getByKey
                           (this->fElemNonDeclPool,nameRawBuf,uriId,currentScope);
    }
    orgGrammarUri = uriId;
    if (elemDecl == (XMLElementDecl *)0x0) {
      orgGrammarUri =
           (**(code **)(**(long **)&this->field_0x138 + 0x48))(*(undefined8 *)&this->field_0x138);
      if (orgGrammarUri == uriId) goto LAB_0010295e;
      bVar11 = true;
    }
    else {
LAB_0010295e:
      bVar11 = false;
    }
    if (bVar11) {
      uriStr = (XMLCh *)xercesc_2_7::XMLScanner::getURIText(CVar28);
      bVar11 = switchGrammar(this,uriStr);
      if ((bVar11 == true) || (this->field_0x18 == '\0')) {
        errorCondition = false;
      }
      else {
        errorCondition = true;
      }
      if ((errorCondition != false) && (laxThisOne != true)) {
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)*(undefined8 *)&this->field_0x108,(ushort *)0x48,uriStr,(ushort *)0x0,
                   (ushort *)0x0);
      }
      elemDecl = (XMLElementDecl *)
                 (**(code **)(**(long **)&this->field_0x128 + 0x58))
                           (*(undefined8 *)&this->field_0x128,uriId,nameRawBuf,qnameRawBuf,
                            currentScope);
    }
    if ((elemDecl == (XMLElementDecl *)0x0) && (currentScope != 0xfffffffe)) {
      elemDecl = (XMLElementDecl *)
                 (**(code **)(**(long **)&this->field_0x128 + 0x58))
                           (*(undefined8 *)&this->field_0x128,uriId,nameRawBuf,qnameRawBuf,
                            0xfffffffe);
      if (elemDecl == (XMLElementDecl *)0x0) {
        elemDecl = (XMLElementDecl *)
                   RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::getByKey
                             (this->fElemNonDeclPool,nameRawBuf,uriId,-2);
      }
      if (elemDecl == (XMLElementDecl *)0x0) {
        elemDecl = (XMLElementDecl *)
                   (**(code **)(**(long **)&this->field_0x128 + 0x58))
                             (*(undefined8 *)&this->field_0x128,*(undefined4 *)&this->field_0x34,
                              nameRawBuf,qnameRawBuf,currentScope);
        if (elemDecl == (XMLElementDecl *)0x0) {
LAB_00102b8c:
          errorCondition_1 = false;
        }
        else {
          CVar13 = XMLElementDecl::getCreateReason(elemDecl);
          if (CVar13 == JustFaultIn) goto LAB_00102b8c;
          errorCondition_1 = true;
        }
        if ((errorCondition_1 != false) && (this->field_0x18 != '\0')) {
          uVar3 = *(undefined8 *)&this->field_0x108;
          pXVar17 = XMLElementDecl::getFullName(elemDecl);
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)uVar3,(ushort *)0x50,pXVar17,(ushort *)0x0,(ushort *)0x0);
        }
      }
    }
    if (elemDecl == (XMLElementDecl *)0x0) {
      if (orgGrammarUri != uriId) {
        switchGrammar(this,original_uriStr);
      }
      pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
      pSVar19 = (SchemaElementDecl *)
                xercesc_2_7::XMemory::operator_new(0x98,*(MemoryManager **)&this->field_0x168);
      xercesc_2_7::SchemaElementDecl::SchemaElementDecl
                (pSVar19,pXVar17,nameRawBuf,uriId,Any,0xfffffffe,
                 *(MemoryManager **)&this->field_0x168);
      uVar10 = uriId;
      uVar14 = currentScope;
      pRVar4 = this->fElemNonDeclPool;
      elemDecl = (XMLElementDecl *)pSVar19;
      pXVar17 = XMLElementDecl::getBaseName((XMLElementDecl *)pSVar19);
      uVar14 = RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::put
                         (pRVar4,pXVar17,uVar10,uVar14,(SchemaElementDecl *)elemDecl);
      XMLElementDecl::setId(elemDecl,uVar14);
      wasAdded = true;
    }
  }
  (this->fPSVIElemContext).fErrorOccurred = false;
  if (wasAdded == false) {
    bVar11 = XMLElementDecl::isDeclared(elemDecl);
    if (bVar11 != true) {
      CVar13 = XMLElementDecl::getCreateReason(elemDecl);
      if (CVar13 == NoReason) {
        (this->fPSVIElemContext).fErrorOccurred = true;
      }
      if (laxThisOne != false) {
        this->field_0x18 = 0;
        ElemStack::setValidationFlag((ElemStack *)&this->field_0x2a0,(bool)this->field_0x18);
      }
      if (this->field_0x18 != '\0') {
        uVar3 = *(undefined8 *)&this->field_0x108;
        pXVar17 = XMLElementDecl::getFullName(elemDecl);
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)uVar3,(ushort *)0x2,pXVar17,(ushort *)0x0,(ushort *)0x0);
      }
    }
  }
  else {
    if (laxThisOne != false) {
      this->field_0x18 = 0;
      ElemStack::setValidationFlag((ElemStack *)&this->field_0x2a0,(bool)this->field_0x18);
    }
    if (this->field_0x18 != '\0') {
      XMLElementDecl::setCreateReason(elemDecl,JustFaultIn);
      uVar3 = *(undefined8 *)&this->field_0x108;
      pXVar17 = XMLElementDecl::getFullName(elemDecl);
      xercesc_2_7::XMLValidator::emitError
                ((Codes)uVar3,(ushort *)0x2,pXVar17,(ushort *)0x0,(ushort *)0x0);
      (this->fPSVIElemContext).fErrorOccurred = true;
    }
  }
  ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
  xercesc_2_7::ElemStack::setElement((XMLElementDecl *)&this->field_0x2a0,(uint)elemDecl);
  ElemStack::setCurrentURI((ElemStack *)&this->field_0x2a0,uriId);
  if (isRoot != false) {
    *(undefined8 *)&this->field_0x130 = *(undefined8 *)&this->field_0x128;
    pXVar17 = XMLString::replicate(qnameRawBuf,*(MemoryManager **)&this->field_0x168);
    *(XMLCh **)&this->field_0x140 = pXVar17;
  }
  if (*(long *)&this->field_0xa0 != 0) {
    (this->fPSVIElemContext).fElemDepth = (this->fPSVIElemContext).fElemDepth + 1;
    bVar11 = XMLElementDecl::isDeclared(elemDecl);
    if (bVar11 == false) {
      (this->fPSVIElemContext).fFullValidationDepth = (this->fPSVIElemContext).fElemDepth;
    }
    else {
      (this->fPSVIElemContext).fNoneValidationDepth = (this->fPSVIElemContext).fElemDepth;
    }
  }
  if (this->field_0x18 != '\0') {
    (**(code **)(**(long **)&this->field_0x108 + 0x48))(*(undefined8 *)&this->field_0x108,elemDecl);
    bVar11 = SchemaValidator::getErrorOccurred(*(SchemaValidator **)&this->field_0x108);
    if (bVar11 != false) {
      (this->fPSVIElemContext).fErrorOccurred = true;
    }
  }
  pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x200);
  ElemStack::setCurrentSchemaElemName((ElemStack *)&this->field_0x2a0,pXVar17);
  if (this->field_0x18 == '\0') {
    typeinfo = SchemaElementDecl::getComplexTypeInfo((SchemaElementDecl *)elemDecl);
  }
  else {
    typeinfo = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
  }
  if (typeinfo != (ComplexTypeInfo *)0x0) {
    currentScope = ComplexTypeInfo::getScopeDefined(typeinfo);
    typeName = ComplexTypeInfo::getTypeName(typeinfo);
    poundStr[0] = 0x23;
    poundStr[1] = 0;
    bVar11 = XMLString::startsWith(typeName,poundStr);
    if (bVar11 != true) {
      comma = xercesc_2_7::XMLString::indexOf(typeName,0x2c);
      if (0 < comma) {
        XMLBuffer::XMLBuffer((XMLBuffer *)&element,comma + 1,*(MemoryManager **)&this->field_0x168);
        XMLBuffer::append((XMLBuffer *)&element,typeName,comma);
        uriStr_1 = XMLBuffer::getRawBuffer((XMLBuffer *)&element);
        bVar11 = switchGrammar(this,uriStr_1);
        if ((bVar11 == true) || (this->field_0x18 == '\0')) {
          errorCondition_4 = false;
        }
        else {
          errorCondition_4 = true;
        }
        if ((errorCondition_4 != false) && (laxThisOne != true)) {
          uVar3 = *(undefined8 *)&this->field_0x108;
          pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&element);
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)uVar3,(ushort *)0x48,pXVar17,(ushort *)0x0,(ushort *)0x0);
        }
        XMLBuffer::_XMLBuffer((XMLBuffer *)&element);
      }
    }
  }
  ElemStack::setCurrentScope((ElemStack *)&this->field_0x2a0,currentScope);
  if (this->fElemStateSize <= elemDepth) {
    resizeElemState(this);
  }
  this->fElemState[elemDepth] = 0;
  ElemStack::setCurrentGrammar((ElemStack *)&this->field_0x2a0,*(Grammar **)&this->field_0x128);
  if (isRoot == false) {
    if (parentValidation != false) {
      pQVar20 = XMLElementDecl::getElementName(elemDecl);
      xercesc_2_7::ElemStack::addChild((QName *)&this->field_0x2a0,SUB81(pQVar20,0));
    }
  }
  else if (this->field_0x18 != '\0') {
    if (this->field_0x19 == '\0') {
LAB_00103818:
      bVar11 = false;
    }
    else {
      this_00 = *(XMLValidator **)&this->field_0x108;
      uVar14 = XMLElementDecl::getId(elemDecl);
      bVar11 = XMLValidator::checkRootElement(this_00,uVar14);
      if (bVar11 == true) goto LAB_00103818;
      bVar11 = true;
    }
    if (bVar11) {
      xercesc_2_7::XMLValidator::emitError((Codes)*(undefined8 *)&this->field_0x108);
    }
  }
  pPVar21 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
  if (pPVar21 != (PSVIHandler *)0x0) {
    PSVIAttributeList::reset(this->fPSVIAttrList);
  }
  attCount = buildAttList(this,this->fRawAttrList,attCount,elemDecl,
                          *(RefVectorOf_xercesc_2_7__XMLAttr_ **)&this->field_0x68);
  if (attCount != 0) {
    RefHash2KeysTableOf<unsigned_int>::removeAll(this->fUndeclaredAttrRegistryNS);
  }
  bVar11 = toCheckIdentityConstraint(this);
  if (bVar11 != false) {
    pSVar19 = (SchemaElementDecl *)this->fICHandler;
    uVar3 = *(undefined8 *)&this->field_0x68;
    pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
    xercesc_2_7::IdentityConstraintHandler::activateIdentityConstraint
              (pSVar19,(int)elemDecl,elemDepth,(ushort *)(ulong)uriId,(RefVectorOf *)pXVar17,
               (uint)uVar3);
  }
  bVar11 = isRoot;
  if (*(long *)&this->field_0x78 != 0) {
    uVar3 = *(undefined8 *)&this->field_0x78;
    pcVar5 = *(code **)(**(long **)&this->field_0x78 + 0x58);
    uVar22 = *(undefined8 *)&this->field_0x68;
    pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
    (*pcVar5)(uVar3,elemDecl,uriId,pXVar17,uVar22,attCount,0,bVar11);
  }
  if (*(long *)&this->field_0xa0 != 0) {
    eName = XMLElementDecl::getElementName(elemDecl);
    uVar3 = *(undefined8 *)&this->field_0xa0;
    pcVar5 = *(code **)(**(long **)&this->field_0xa0 + 0x20);
    pPVar6 = this->fPSVIAttrList;
    uVar22 = *(undefined8 *)&this->field_0x138;
    pcVar7 = *(code **)(**(long **)&this->field_0x138 + 0x50);
    uVar14 = QName::getURI(eName);
    uVar22 = (*pcVar7)(uVar22,uVar14);
    pXVar17 = QName::getLocalPart(eName);
    (*pcVar5)(uVar3,pXVar17,uVar22,pPVar6);
  }
  if (isEmpty == false) {
    if (*(long *)&this->field_0xa0 != 0) {
      curTypeInfo = (ComplexTypeInfo *)0x0;
      curDV = (DatatypeValidator *)0x0;
      typeDef = (XSTypeDefinition *)0x0;
      if (this->field_0x18 == '\0') {
LAB_00104022:
        bVar11 = false;
      }
      else {
        bVar11 = XMLElementDecl::isDeclared(elemDecl);
        if (bVar11 == false) goto LAB_00104022;
        bVar11 = true;
      }
      if (bVar11) {
        curTypeInfo = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
        if (curTypeInfo == (ComplexTypeInfo *)0x0) {
          curDV = SchemaValidator::getCurrentDatatypeValidator
                            (*(SchemaValidator **)&this->field_0x108);
          if (curDV != (DatatypeValidator *)0x0) {
            typeDef = (XSTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
          }
        }
        else {
          typeDef = (XSTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
        }
      }
      pPVar8 = this->fPSVIElement;
      pXVar17 = SchemaElementDecl::getDefaultValue((SchemaElementDecl *)elemDecl);
      pXVar9 = this->fModel;
      bVar11 = XMLElementDecl::isDeclared(elemDecl);
      if (bVar11 == false) {
        pXVar27 = (XSTypeDefinition *)0x0;
      }
      else {
        pXVar27 = (XSTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
      }
      bVar11 = SchemaValidator::getIsElemSpecified(*(SchemaValidator **)&this->field_0x108);
      xercesc_2_7::PSVIElement::reset
                ((VALIDITY_STATE)pPVar8,VALIDATION_NONE,(ushort *)0x0,
                 SUB81(*(undefined8 *)&this->field_0x140,0),(XSElementDeclaration *)(ulong)bVar11,
                 pXVar27,(XSSimpleTypeDefinition *)typeDef,(XSModel *)0x0,(ushort *)pXVar9,pXVar17,
                 (ushort *)0x0,(XSNotationDeclaration *)0x0);
      uVar3 = *(undefined8 *)&this->field_0xa0;
      pcVar5 = *(code **)(**(long **)&this->field_0xa0 + 0x18);
      pPVar8 = this->fPSVIElement;
      uVar22 = *(undefined8 *)&this->field_0x138;
      pcVar7 = *(code **)(**(long **)&this->field_0x138 + 0x50);
      uVar14 = XMLElementDecl::getURI(elemDecl);
      uVar22 = (*pcVar7)(uVar22,uVar14);
      pXVar17 = XMLElementDecl::getBaseName(elemDecl);
      (*pcVar5)(uVar3,pXVar17,uVar22,pPVar8);
    }
    ValueStackOf<bool>::push(this->fErrorStack,&(this->fPSVIElemContext).fErrorOccurred);
  }
  else {
    xercesc_2_7::ElemStack::popTop();
    psviMemberType = (DatatypeValidator *)0x0;
    if (this->fGrammarType == SchemaGrammarType) {
      if (this->field_0x18 == '\0') {
LAB_00103b29:
        bVar11 = false;
      }
      else {
        bVar11 = XMLElementDecl::isDeclared(elemDecl);
        if (bVar11 == false) goto LAB_00103b29;
        bVar11 = true;
      }
      if (bVar11) {
        pCVar23 = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
        (this->fPSVIElemContext).fCurrentTypeInfo = pCVar23;
        if ((this->fPSVIElemContext).fCurrentTypeInfo == (ComplexTypeInfo *)0x0) {
          pDVar24 = SchemaValidator::getCurrentDatatypeValidator
                              (*(SchemaValidator **)&this->field_0x108);
          (this->fPSVIElemContext).fCurrentDV = pDVar24;
        }
        else {
          (this->fPSVIElemContext).fCurrentDV = (DatatypeValidator *)0x0;
        }
        if (*(long *)&this->field_0xa0 != 0) {
          pXVar17 = SchemaValidator::getNormalizedValue(*(SchemaValidator **)&this->field_0x108);
          (this->fPSVIElemContext).fNormalizedValue = pXVar17;
          bVar11 = XMLString::equals((this->fPSVIElemContext).fNormalizedValue,
                                     (XMLCh *)&XMLUni::fgZeroLenString);
          if (bVar11 != false) {
            (this->fPSVIElemContext).fNormalizedValue = (XMLCh *)0x0;
          }
        }
      }
      else {
        (this->fPSVIElemContext).fCurrentDV = (DatatypeValidator *)0x0;
        (this->fPSVIElemContext).fCurrentTypeInfo = (ComplexTypeInfo *)0x0;
        (this->fPSVIElemContext).fNormalizedValue = (XMLCh *)0x0;
      }
    }
    if (this->field_0x18 != '\0') {
      res = (**(code **)(**(long **)&this->field_0x108 + 0x10))
                      (*(undefined8 *)&this->field_0x108,elemDecl,0,0);
      if (-1 < res) {
        uVar3 = *(undefined8 *)&this->field_0x108;
        puVar25 = (ushort *)(**(code **)(*(long *)elemDecl + 0x78))(elemDecl);
        pXVar17 = XMLElementDecl::getFullName(elemDecl);
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)uVar3,(ushort *)0x7,pXVar17,puVar25,(ushort *)0x0);
      }
      bVar11 = SchemaValidator::getErrorOccurred(*(SchemaValidator **)&this->field_0x108);
      if (bVar11 == false) {
        if (*(long *)&this->field_0xa0 != 0) {
          bVar11 = SchemaValidator::getIsElemSpecified(*(SchemaValidator **)&this->field_0x108);
          (this->fPSVIElemContext).fIsSpecified = bVar11;
          if ((this->fPSVIElemContext).fIsSpecified != false) {
            pXVar17 = SchemaElementDecl::getDefaultValue((SchemaElementDecl *)elemDecl);
            (this->fPSVIElemContext).fNormalizedValue = pXVar17;
          }
        }
        if ((this->fPSVIElemContext).fCurrentDV == (DatatypeValidator *)0x0) {
LAB_00103dcd:
          bVar11 = false;
        }
        else {
          VVar15 = DatatypeValidator::getType((this->fPSVIElemContext).fCurrentDV);
          if (VVar15 != Union) goto LAB_00103dcd;
          bVar11 = true;
        }
        if (bVar11) {
          psviMemberType =
               (DatatypeValidator *)
               (**(code **)(**(long **)&this->field_0xa8 + 0x58))(*(undefined8 *)&this->field_0xa8);
        }
      }
      else {
        (this->fPSVIElemContext).fErrorOccurred = true;
      }
      bVar11 = toCheckIdentityConstraint(this);
      if (bVar11 != false) {
        pSVar19 = (SchemaElementDecl *)this->fICHandler;
        XMLBuffer::getRawBuffer(&this->fContent);
        xercesc_2_7::IdentityConstraintHandler::deactivateContext(pSVar19,(ushort *)elemDecl);
      }
    }
    if (*(long *)&this->field_0xa0 != 0) {
      endElementPSVI(this,(SchemaElementDecl *)elemDecl,psviMemberType);
    }
    if (*(long *)&this->field_0x78 != 0) {
      uVar3 = *(undefined8 *)&this->field_0x78;
      pcVar5 = *(code **)(**(long **)&this->field_0x78 + 0x30);
      pXVar17 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
      (*pcVar5)(uVar3,elemDecl,uriId,isRoot,pXVar17);
    }
    if (isRoot == false) {
      pGVar26 = ElemStack::getCurrentGrammar((ElemStack *)&this->field_0x2a0);
      *(Grammar **)&this->field_0x128 = pGVar26;
      GVar16 = (**(code **)(**(long **)&this->field_0x128 + 0x28))
                         (*(undefined8 *)&this->field_0x128);
      this->fGrammarType = GVar16;
      (**(code **)(**(long **)&this->field_0x108 + 0x58))
                (*(undefined8 *)&this->field_0x108,*(undefined8 *)&this->field_0x128);
      bVar11 = ElemStack::getValidationFlag((ElemStack *)&this->field_0x2a0);
      this->field_0x18 = bVar11;
    }
    else {
      *gotData = false;
    }
  }
  bVar11 = true;
LAB_00104253:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar11;
}


uint __thiscall
xercesc_2_7::SGXMLScanner::resolveQName
          (SGXMLScanner *this,XMLCh *qName,XMLBuffer *prefixBuf,short mode,int *prefixColonPos)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = xercesc_2_7::XMLString::indexOf(qName,0x3a);
  *prefixColonPos = iVar1;
  uVar2 = resolveQNameWithColon(this,qName,prefixBuf,mode,*prefixColonPos);
  return uVar2;
}


/* WARNING: Removing unreachable block (ram,0x0010449f) */

uint __thiscall
xercesc_2_7::SGXMLScanner::resolveQNameWithColon
          (SGXMLScanner *this,XMLCh *qName,XMLBuffer *prefixBuf,short mode,int prefixColonPos)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  XMLCh *str1;
  long in_FS_OFFSET;
  bool unknown;
  uint uriId;
  XMLCh *prefixRawBuf;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (prefixColonPos == -1) {
    XMLBuffer::reset(prefixBuf);
    uVar3 = xercesc_2_7::ElemStack::mapPrefixToURI
                      ((ushort *)&this->field_0x2a0,0x119220,(bool *)(ulong)(uint)(int)mode);
  }
  else {
    XMLBuffer::set(prefixBuf,qName,prefixColonPos);
    str1 = XMLBuffer::getRawBuffer(prefixBuf);
    bVar2 = XMLString::equals(str1,(XMLCh *)&XMLUni::fgXMLNSString);
    if (bVar2 == false) {
      bVar2 = XMLString::equals(str1,(XMLCh *)&XMLUni::fgXMLString);
      if (bVar2 == false) {
        uVar3 = xercesc_2_7::ElemStack::mapPrefixToURI
                          ((ushort *)&this->field_0x2a0,(MapModes)str1,
                           (bool *)(ulong)(uint)(int)mode);
      }
      else {
        uVar3 = *(uint *)&this->field_0x3c;
      }
    }
    else {
      if (mode == 1) {
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)this,(ushort *)0x131,qName,(ushort *)0x0,(ushort *)0x0);
      }
      uVar3 = *(uint *)&this->field_0x40;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


Grammar * __thiscall
xercesc_2_7::SGXMLScanner::loadGrammar
          (SGXMLScanner *this,InputSource *src,short grammarType,bool toCache)

{
  long lVar1;
  long in_FS_OFFSET;
  Codes anon_var_0_1;
  Codes anon_var_0;
  Grammar *loadedGrammar;
  OutOfMemoryException *anon_var_0_3;
  XMLException *excToCatch;
  OutOfMemoryException *anon_var_0_2;
  ReaderMgrResetType resetReaderMgr;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  loadedGrammar = (Grammar *)0x0;
  JanitorMemFunCall<xercesc_2_7::ReaderMgr>::JanitorMemFunCall
            (&resetReaderMgr,(ReaderMgr *)&this->field_0xb8,MRam0000000000104520);
  xercesc_2_7::GrammarResolver::cacheGrammarFromParse(SUB81(*(undefined8 *)&this->field_0x118,0));
  GrammarResolver::useCachedGrammarInParse(*(GrammarResolver **)&this->field_0x118,toCache);
  *(undefined8 *)&this->field_0x130 = 0;
  if (*(int *)&this->field_0x110 == 2) {
    this->field_0x18 = 1;
  }
  this->field_0x15 = 0;
  this->field_0x16 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  this->field_0x17 = 1;
  this->fSeeXsi = false;
  if (grammarType == 1) {
    loadedGrammar = loadXMLSchemaGrammar(this,src,toCache);
  }
  JanitorMemFunCall<xercesc_2_7::ReaderMgr>::_JanitorMemFunCall(&resetReaderMgr);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return loadedGrammar;
}


void __thiscall xercesc_2_7::SGXMLScanner::commonInit(SGXMLScanner *this)

{
  char cVar1;
  uint *puVar2;
  RefVectorOf_xercesc_2_7__KVStringPair_ *this_00;
  int *piVar3;
  SchemaValidator *this_01;
  IdentityConstraintHandler *this_02;
  ValueHashTableOf_short_unsigned_int_ *this_03;
  RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this_04;
  HashBase *pHVar4;
  RefHashTableOf_unsigned_int_ *this_05;
  RefHash2KeysTableOf_unsigned_int_ *this_06;
  PSVIAttributeList *this_07;
  RuntimeException *this_08;
  
  puVar2 = (uint *)(**(code **)(**(long **)&this->field_0x168 + 0x10))
                             (*(undefined8 *)&this->field_0x168,(ulong)this->fElemStateSize << 2);
  this->fElemState = puVar2;
  this_00 = (RefVectorOf_xercesc_2_7__KVStringPair_ *)
            xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)&this->field_0x168);
  RefVectorOf<xercesc_2_7::KVStringPair>::RefVectorOf
            (this_00,0x20,true,*(MemoryManager **)&this->field_0x168);
  this->fRawAttrList = this_00;
  piVar3 = (int *)(**(code **)(**(long **)&this->field_0x168 + 0x10))
                            (*(undefined8 *)&this->field_0x168,
                             (ulong)this->fRawAttrColonListSize << 2);
  this->fRawAttrColonList = piVar3;
  this_01 = (SchemaValidator *)
            xercesc_2_7::XMemory::operator_new(0xc0,*(MemoryManager **)&this->field_0x168);
  xercesc_2_7::SchemaValidator::SchemaValidator
            (this_01,(XMLErrorReporter *)0x0,*(MemoryManager **)&this->field_0x168);
  this->fSchemaValidator = this_01;
  xercesc_2_7::XMLScanner::initValidator((XMLValidator *)this);
  this_02 = (IdentityConstraintHandler *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x168);
  xercesc_2_7::IdentityConstraintHandler::IdentityConstraintHandler
            (this_02,&this->super_XMLScanner,*(MemoryManager **)&this->field_0x168);
  this->fICHandler = this_02;
  this_03 = (ValueHashTableOf_short_unsigned_int_ *)
            xercesc_2_7::XMemory::operator_new(0x20,*(MemoryManager **)&this->field_0x168);
  ValueHashTableOf<short_unsigned_int>::ValueHashTableOf
            (this_03,0xb,*(MemoryManager **)&this->field_0x168);
  this->fEntityTable = this_03;
  ValueHashTableOf<short_unsigned_int>::put(this->fEntityTable,&XMLUni::fgAmp,&chAmpersand);
  ValueHashTableOf<short_unsigned_int>::put(this->fEntityTable,&XMLUni::fgLT,&chOpenAngle);
  ValueHashTableOf<short_unsigned_int>::put(this->fEntityTable,&XMLUni::fgGT,&chCloseAngle);
  ValueHashTableOf<short_unsigned_int>::put(this->fEntityTable,&XMLUni::fgQuot,&chDoubleQuote);
  ValueHashTableOf<short_unsigned_int>::put(this->fEntityTable,&XMLUni::fgApos,&chSingleQuote);
  this_04 = (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *)
            xercesc_2_7::XMemory::operator_new(0x38,*(MemoryManager **)&this->field_0x168);
  RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::RefHash3KeysIdPool
            (this_04,0x1d,true,0x80,*(MemoryManager **)&this->field_0x168);
  this->fElemNonDeclPool = this_04;
  pHVar4 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,*(MemoryManager **)&this->field_0x168);
  xercesc_2_7::HashPtr::HashPtr((HashPtr *)pHVar4);
  this_05 = (RefHashTableOf_unsigned_int_ *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x168);
  RefHashTableOf<unsigned_int>::RefHashTableOf
            (this_05,0x83,false,pHVar4,*(MemoryManager **)&this->field_0x168);
  this->fAttDefRegistry = this_05;
  pHVar4 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,*(MemoryManager **)&this->field_0x168);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)pHVar4);
  this_06 = (RefHash2KeysTableOf_unsigned_int_ *)
            xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)&this->field_0x168);
  RefHash2KeysTableOf<unsigned_int>::RefHash2KeysTableOf
            (this_06,7,false,pHVar4,*(MemoryManager **)&this->field_0x168);
  this->fUndeclaredAttrRegistryNS = this_06;
  this_07 = (PSVIAttributeList *)
            xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)&this->field_0x168);
  xercesc_2_7::PSVIAttributeList::PSVIAttributeList(this_07,*(MemoryManager **)&this->field_0x168);
  this->fPSVIAttrList = this_07;
  if (*(long *)&this->field_0x108 == 0) {
    *(SchemaValidator **)&this->field_0x108 = this->fSchemaValidator;
  }
  else {
    cVar1 = (**(code **)(**(long **)&this->field_0x108 + 0x68))(*(undefined8 *)&this->field_0x108);
    if (cVar1 != '\x01') {
      this_08 = (RuntimeException *)__cxa_allocate_exception(0x30);
      RuntimeException::RuntimeException
                (this_08,"SGXMLScanner.cpp",0x7e1,0x9e,*(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_08,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
    }
  }
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::cleanUp(SGXMLScanner *this)

{
  long *plVar1;
  ValueHashTableOf_short_unsigned_int_ *this_00;
  RefVectorOf_xercesc_2_7__KVStringPair_ *pRVar2;
  RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this_01;
  RefHashTableOf_unsigned_int_ *this_02;
  RefHash2KeysTableOf_unsigned_int_ *this_03;
  PSVIAttributeList *this_04;
  ValueStackOf_bool_ *this_05;
  uint *puVar3;
  int *piVar4;
  
  puVar3 = this->fElemState;
  (**(code **)(**(long **)&this->field_0x168 + 0x18))(*(undefined8 *)&this->field_0x168);
  plVar1 = (long *)this->fSchemaGrammar;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this_00 = this->fEntityTable;
  if (this_00 != (ValueHashTableOf_short_unsigned_int_ *)0x0) {
    ValueHashTableOf<short_unsigned_int>::_ValueHashTableOf(this_00);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,puVar3);
  }
  pRVar2 = this->fRawAttrList;
  if (pRVar2 != (RefVectorOf_xercesc_2_7__KVStringPair_ *)0x0) {
    (*(pRVar2->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_)._vptr_BaseRefVectorOf[1])(pRVar2);
  }
  piVar4 = this->fRawAttrColonList;
  (**(code **)(**(long **)&this->field_0x168 + 0x18))(*(undefined8 *)&this->field_0x168);
  plVar1 = (long *)this->fSchemaValidator;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  plVar1 = (long *)this->fICHandler;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this_01 = this->fElemNonDeclPool;
  if (this_01 != (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *)0x0) {
    RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::_RefHash3KeysIdPool(this_01);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_01,piVar4);
  }
  this_02 = this->fAttDefRegistry;
  if (this_02 != (RefHashTableOf_unsigned_int_ *)0x0) {
    RefHashTableOf<unsigned_int>::_RefHashTableOf(this_02);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_02,piVar4);
  }
  this_03 = this->fUndeclaredAttrRegistryNS;
  if (this_03 != (RefHash2KeysTableOf_unsigned_int_ *)0x0) {
    RefHash2KeysTableOf<unsigned_int>::_RefHash2KeysTableOf(this_03);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_03,piVar4);
  }
  this_04 = this->fPSVIAttrList;
  if (this_04 != (PSVIAttributeList *)0x0) {
    PSVIAttributeList::_PSVIAttributeList(this_04);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_04,piVar4);
  }
  if ((this->fPSVIElement != (PSVIElement *)0x0) &&
     (plVar1 = (long *)this->fPSVIElement, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  if ((this->fErrorStack != (ValueStackOf_bool_ *)0x0) &&
     (this_05 = this->fErrorStack, this_05 != (ValueStackOf_bool_ *)0x0)) {
    ValueStackOf<bool>::_ValueStackOf(this_05);
    xercesc_2_7::XMemory::operator_delete(&this_05->super_XMemory,piVar4);
  }
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::resizeElemState(SGXMLScanner *this)

{
  uint uVar1;
  uint *puVar2;
  uint index;
  uint newSize;
  uint *newElemState;
  
  uVar1 = this->fElemStateSize * 2;
  puVar2 = (uint *)(**(code **)(**(long **)&this->field_0x168 + 0x10))
                             (*(undefined8 *)&this->field_0x168,(ulong)uVar1 << 2);
  for (index = 0; index < this->fElemStateSize; index = index + 1) {
    puVar2[index] = this->fElemState[index];
  }
  for (; index < uVar1; index = index + 1) {
    puVar2[index] = 0;
  }
  (**(code **)(**(long **)&this->field_0x168 + 0x18))
            (*(undefined8 *)&this->field_0x168,this->fElemState);
  this->fElemState = puVar2;
  this->fElemStateSize = uVar1;
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::resizeRawAttrColonList(SGXMLScanner *this)

{
  uint uVar1;
  int *piVar2;
  uint index;
  uint newSize;
  int *newRawAttrColonList;
  
  uVar1 = this->fRawAttrColonListSize * 2;
  piVar2 = (int *)(**(code **)(**(long **)&this->field_0x168 + 0x10))
                            (*(undefined8 *)&this->field_0x168,(ulong)uVar1 << 2);
  for (index = 0; index < this->fRawAttrColonListSize; index = index + 1) {
    piVar2[index] = this->fRawAttrColonList[index];
  }
  (**(code **)(**(long **)&this->field_0x168 + 0x18))
            (*(undefined8 *)&this->field_0x168,this->fRawAttrColonList);
  this->fRawAttrColonList = piVar2;
  this->fRawAttrColonListSize = uVar1;
  return;
}


uint __thiscall
xercesc_2_7::SGXMLScanner::buildAttList
          (SGXMLScanner *this,RefVectorOf_xercesc_2_7__KVStringPair_ *providedAttrs,uint attCount,
          XMLElementDecl *elemDecl,RefVectorOf_xercesc_2_7__XMLAttr_ *toFill)

{
  MemoryManager *manager;
  code *pcVar1;
  undefined8 uVar2;
  PSVIAttributeList *pPVar3;
  XSModel *pXVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  CreateReasons CVar9;
  int iVar10;
  VARIETY VVar11;
  XMLCh *pXVar12;
  undefined8 uVar13;
  ushort *puVar14;
  PSVIHandler *pPVar15;
  XMLCh *pXVar16;
  DVHashTable *pDVar17;
  XMLAttr *pXVar18;
  undefined4 extraout_var;
  Codes CVar19;
  long in_FS_OFFSET;
  bool laxThisOne;
  bool skipThisOne;
  bool hasDefs;
  bool isNSAttr;
  bool errorCondition;
  uint retCount;
  uint index;
  VALIDITY_STATE attrValid;
  ASSESSMENT_TYPE attrAssessed;
  AttTypes attType;
  uint i;
  uint curAttListSize;
  int colonInd;
  uint uriId;
  DefAttTypes defType;
  DatatypeValidator *currDV;
  ComplexTypeInfo *currType;
  XMLCh *prefPtr;
  XMLCh *suffPtr;
  DatatypeValidator *attrValidator;
  PSVIAttribute *psviAttr;
  XMLAttDef *attDefForWildCard;
  XMLAttDef *attDef;
  SchemaAttDef *attWildCard;
  XMLCh *xsNormalized;
  XMLCh *xsNormalized_1;
  SchemaAttDef *actualAttDef;
  XSSimpleTypeDefinition *memberType;
  XSSimpleTypeDefinition *validatingType_1;
  XMLAttr *curAttr;
  XMLAttr *curAtt;
  XSSimpleTypeDefinition *defAttrMemberType;
  XMLBuffer *normBuf;
  KVStringPair *curPair;
  XMLCh *namePtr;
  SchemaGrammar *sGrammar;
  RefHashTableOf_xercesc_2_7__XMLAttDef_ *attRegistry;
  uint *curCountPtr;
  XMLBuffer *bufMsg;
  XMLBuffer *bufURI;
  DatatypeValidator *tempDV_1;
  DatatypeValidator *tempDV;
  XSAttributeDeclaration *attrDecl;
  DatatypeValidator *attrDataType;
  XSSimpleTypeDefinition *validatingType;
  XMLAttDefList *attDefList;
  XMLAttDef *curDef;
  uint *attCountPtr;
  QName *attQName;
  PSVIAttribute *prohibitedAttr;
  QName *attName;
  PSVIAttribute *defAttrToFill;
  XSAttributeDeclaration *defAttrDecl;
  DatatypeValidator *attrDataType_1;
  XSSimpleTypeDefinition *defAttrType;
  XMLBufBid bbNormal;
  ArrayJanitor_short_unsigned_int_ janName;
  XMLBufBid bbMsg;
  XMLBufBid bbURI;
  XMLCh tempBuffer [100];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  currDV = (DatatypeValidator *)0x0;
  currType = (ComplexTypeInfo *)0x0;
  if ((this->field_0x18 != '\0') &&
     (currType = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108),
     currType == (ComplexTypeInfo *)0x0)) {
    currDV = SchemaValidator::getCurrentDatatypeValidator(*(SchemaValidator **)&this->field_0x108);
  }
  if ((currType == (ComplexTypeInfo *)0x0) || (this->field_0x18 == '\0')) {
    cVar5 = (**(code **)(*(long *)elemDecl + 0x40))(elemDecl);
  }
  else {
    cVar5 = ComplexTypeInfo::hasAttDefs(currType);
  }
  hasDefs = cVar5 != '\0';
  this->fElemCount = this->fElemCount + 1;
  if ((hasDefs) || (attCount != 0)) {
    retCount = 0;
    curAttListSize =
         BaseRefVectorOf<xercesc_2_7::XMLAttr>::size
                   ((BaseRefVectorOf_xercesc_2_7__XMLAttr_ *)toFill);
    XMLBufBid::XMLBufBid(&bbNormal,(XMLBufferMgr *)&this->field_0x170);
    normBuf = XMLBufBid::getBuffer(&bbNormal);
    for (index = 0; index < attCount; index = index + 1) {
      attrValid = VALIDITY_VALID;
      attrAssessed = VALIDATION_FULL;
      curPair = BaseRefVectorOf<xercesc_2_7::KVStringPair>::elementAt
                          (&providedAttrs->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_,index);
      namePtr = KVStringPair::getKey(curPair);
      ArrayJanitor<short_unsigned_int>::ArrayJanitor(&janName,(ushort *)0x0);
      colonInd = this->fRawAttrColonList[index];
      prefPtr = (XMLCh *)&XMLUni::fgZeroLenString;
      suffPtr = (XMLCh *)&XMLUni::fgZeroLenString;
      if (colonInd == -1) {
        suffPtr = namePtr;
      }
      else {
        uVar8 = XMLString::stringLen(namePtr);
        if (uVar8 < 100) {
          xercesc_2_7::XMLString::copyString(tempBuffer,namePtr);
          tempBuffer[colonInd] = 0;
          prefPtr = tempBuffer;
        }
        else {
          manager = *(MemoryManager **)&this->field_0x168;
          pXVar12 = XMLString::replicate(namePtr,*(MemoryManager **)&this->field_0x168);
          ArrayJanitor<short_unsigned_int>::reset(&janName,pXVar12,manager);
          puVar14 = ArrayJanitor<short_unsigned_int>::operator__(&janName,colonInd);
          *puVar14 = 0;
          prefPtr = ArrayJanitor<short_unsigned_int>::get(&janName);
        }
        suffPtr = namePtr + (long)colonInd + 1;
      }
      uriId = resolvePrefix(this,prefPtr,Mode_Attribute);
      CVar19 = (Codes)this;
      if ((uriId == *(uint *)&this->field_0x40) ||
         (bVar6 = XMLString::equals(suffPtr,(XMLCh *)&XMLUni::fgXMLNSString), bVar6 != false)) {
LAB_001056b7:
        isNSAttr = true;
      }
      else {
        pXVar12 = (XMLCh *)xercesc_2_7::XMLScanner::getURIText(CVar19);
        bVar6 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgURI_XSI);
        if (bVar6 != false) goto LAB_001056b7;
        isNSAttr = false;
      }
      attrValidator = (DatatypeValidator *)0x0;
      psviAttr = (PSVIAttribute *)0x0;
      if (isNSAttr == true) {
        attType = AttTypes_Min;
        pXVar12 = KVStringPair::getValue(curPair);
        normalizeAttRawValue(this,namePtr,pXVar12,normBuf);
        if (uriId == *(uint *)&this->field_0x40) {
LAB_00106759:
          bVar6 = true;
        }
        else {
          pXVar12 = (XMLCh *)xercesc_2_7::XMLScanner::getURIText(CVar19);
          bVar6 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgURI_XSI);
          if (bVar6 != false) goto LAB_00106759;
          bVar6 = false;
        }
        if (bVar6) {
          pDVar17 = DatatypeValidatorFactory::getBuiltInRegistry();
          attrValidator =
               RefHashTableOf<xercesc_2_7::DatatypeValidator>::get
                         (pDVar17,&SchemaSymbols::fgDT_ANYURI);
        }
        pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
        if (pPVar15 != (PSVIHandler *)0x0) {
          pPVar3 = this->fPSVIAttrList;
          pXVar12 = (XMLCh *)(**(code **)(**(long **)&this->field_0x138 + 0x50))
                                       (*(undefined8 *)&this->field_0x138,uriId);
          psviAttr = PSVIAttributeList::getPSVIAttributeToFill(pPVar3,suffPtr,pXVar12);
          validatingType_1 = (XSSimpleTypeDefinition *)0x0;
          if ((attrValidator != (DatatypeValidator *)0x0) && (this->fModel != (XSModel *)0x0)) {
            validatingType_1 =
                 (XSSimpleTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
          }
          xercesc_2_7::PSVIAttribute::reset
                    ((ushort *)psviAttr,(VALIDITY_STATE)*(undefined8 *)&this->field_0x140,
                     VALIDATION_NONE,(XSSimpleTypeDefinition *)0x0,validatingType_1,(ushort *)0x0,
                     false,(XSAttributeDeclaration *)0x0,(DatatypeValidator *)0x0);
        }
      }
      else {
        laxThisOne = false;
        skipThisOne = false;
        attDefForWildCard = (XMLAttDef *)0x0;
        attDef = (XMLAttDef *)0x0;
        if (this->fGrammarType == SchemaGrammarType) {
          attWildCard = (SchemaAttDef *)0x0;
          if (currType == (ComplexTypeInfo *)0x0) {
            if (currDV == (DatatypeValidator *)0x0) {
              attWildCard = SchemaElementDecl::getAttWildCard((SchemaElementDecl *)elemDecl);
            }
          }
          else {
            attDef = (XMLAttDef *)ComplexTypeInfo::getAttDef(currType,suffPtr,uriId);
            attWildCard = ComplexTypeInfo::getAttWildCard(currType);
          }
          if ((attDef == (XMLAttDef *)0x0) ||
             (CVar9 = XMLAttDef::getCreateReason(attDef), CVar9 == JustFaultIn)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            if (attWildCard == (SchemaAttDef *)0x0) {
              if (currType != (ComplexTypeInfo *)0x0) {
                if (uriId == *(uint *)&this->field_0x34) {
                  uVar2 = *(undefined8 *)&this->field_0x138;
                  pcVar1 = *(code **)(**(long **)&this->field_0x138 + 0x48);
                  uVar13 = (**(code **)(**(long **)&this->field_0x128 + 0x30))
                                     (*(undefined8 *)&this->field_0x128);
                  iVar10 = (*pcVar1)(uVar2,uVar13);
                  attDef = (XMLAttDef *)ComplexTypeInfo::getAttDef(currType,suffPtr,iVar10);
                  if (((this->field_0x18 == '\0') || (attDef == (XMLAttDef *)0x0)) ||
                     (CVar9 = XMLAttDef::getCreateReason(attDef), CVar9 == JustFaultIn)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if (bVar6) {
                    uVar2 = *(undefined8 *)&this->field_0x108;
                    puVar14 = (ushort *)(**(code **)(*(long *)attDef + 0x28))(attDef);
                    xercesc_2_7::XMLValidator::emitError
                              ((Codes)uVar2,(ushort *)0x5f,puVar14,(ushort *)0x0,(ushort *)0x0);
                    (this->fPSVIElemContext).fErrorOccurred = true;
                    pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
                    if (pPVar15 != (PSVIHandler *)0x0) {
                      attrValid = VALIDITY_INVALID;
                    }
                  }
                }
                else {
                  attDef = (XMLAttDef *)
                           ComplexTypeInfo::getAttDef(currType,suffPtr,*(int *)&this->field_0x34);
                  if (((this->field_0x18 == '\0') || (attDef == (XMLAttDef *)0x0)) ||
                     (CVar9 = XMLAttDef::getCreateReason(attDef), CVar9 == JustFaultIn)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if (bVar6) {
                    uVar2 = *(undefined8 *)&this->field_0x108;
                    puVar14 = (ushort *)(**(code **)(*(long *)attDef + 0x28))(attDef);
                    xercesc_2_7::XMLValidator::emitError
                              ((Codes)uVar2,(ushort *)0x60,puVar14,(ushort *)0x0,(ushort *)0x0);
                    (this->fPSVIElemContext).fErrorOccurred = true;
                    pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
                    if (pPVar15 != (PSVIHandler *)0x0) {
                      attrValid = VALIDITY_INVALID;
                    }
                  }
                }
              }
            }
            else {
              bVar6 = anyAttributeValidation(this,attWildCard,uriId,&skipThisOne,&laxThisOne);
              if ((bVar6 != false) && (skipThisOne != true)) {
                puVar14 = *(ushort **)&this->field_0x118;
                xercesc_2_7::XMLScanner::getURIText(CVar19);
                sGrammar = (SchemaGrammar *)xercesc_2_7::GrammarResolver::getGrammar(puVar14);
                if (((long *)sGrammar == (long *)0x0) ||
                   (iVar10 = (**(code **)(*(long *)sGrammar + 0x28))(sGrammar), iVar10 != 1)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if ((bVar6) &&
                   (attRegistry = SchemaGrammar::getAttributeDeclRegistry(sGrammar),
                   attRegistry != (RefHashTableOf_xercesc_2_7__XMLAttDef_ *)0x0)) {
                  attDefForWildCard =
                       RefHashTableOf<xercesc_2_7::XMLAttDef>::get(attRegistry,suffPtr);
                }
              }
            }
          }
        }
        if (attDef == (XMLAttDef *)0x0) {
          bVar6 = RefHash2KeysTableOf<unsigned_int>::containsKey
                            (this->fUndeclaredAttrRegistryNS,suffPtr,uriId);
          if (bVar6 == true) {
            pXVar12 = XMLElementDecl::getFullName(elemDecl);
            xercesc_2_7::XMLScanner::emitError(CVar19,(ushort *)0xf7,namePtr,pXVar12,(ushort *)0x0);
            (this->fPSVIElemContext).fErrorOccurred = true;
          }
          else {
            RefHash2KeysTableOf<unsigned_int>::put
                      (this->fUndeclaredAttrRegistryNS,suffPtr,uriId,(uint *)0x0);
          }
        }
        else {
          curCountPtr = RefHashTableOf<unsigned_int>::get(this->fAttDefRegistry,attDef);
          if (curCountPtr == (uint *)0x0) {
            curCountPtr = (uint *)xercesc_2_7::XMLScanner::getNewUIntPtr();
            *curCountPtr = this->fElemCount;
            RefHashTableOf<unsigned_int>::put(this->fAttDefRegistry,attDef,curCountPtr);
          }
          else if (*curCountPtr < this->fElemCount) {
            *curCountPtr = this->fElemCount;
          }
          else {
            pXVar12 = XMLElementDecl::getFullName(elemDecl);
            puVar14 = (ushort *)(**(code **)(*(long *)attDef + 0x28))(attDef);
            xercesc_2_7::XMLScanner::emitError(CVar19,(ushort *)0xf7,puVar14,pXVar12,(ushort *)0x0);
            (this->fPSVIElemContext).fErrorOccurred = true;
          }
        }
        if ((attDef == (XMLAttDef *)0x0) && (attDefForWildCard == (XMLAttDef *)0x0)) {
          if ((laxThisOne != true) && (skipThisOne != true)) {
            (this->fPSVIElemContext).fErrorOccurred = true;
          }
          pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
          if (pPVar15 != (PSVIHandler *)0x0) {
            if ((laxThisOne == true) || (skipThisOne == true)) {
              if (laxThisOne == false) {
                attrValid = VALIDITY_NOTKNOWN;
                attrAssessed = VALIDATION_NONE;
              }
              else {
                attrValid = VALIDITY_NOTKNOWN;
                attrAssessed = VALIDATION_PARTIAL;
              }
            }
            else {
              attrValid = VALIDITY_INVALID;
            }
          }
        }
        if (((this->field_0x18 == '\0') || (attDefForWildCard != (XMLAttDef *)0x0)) ||
           (attDef != (XMLAttDef *)0x0)) {
          errorCondition = false;
        }
        else {
          errorCondition = true;
        }
        if (((errorCondition != false) && (skipThisOne != true)) && (laxThisOne != true)) {
          XMLBufBid::XMLBufBid(&bbMsg,(XMLBufferMgr *)&this->field_0x170);
          bufMsg = XMLBufBid::getBuffer(&bbMsg);
          if (uriId != *(uint *)&this->field_0x34) {
            XMLBufBid::XMLBufBid(&bbURI,(XMLBufferMgr *)&this->field_0x170);
            bufURI = XMLBufBid::getBuffer(&bbURI);
            xercesc_2_7::XMLScanner::getURIText(CVar19,(XMLBuffer *)(ulong)uriId);
            XMLBuffer::append(bufMsg,0x7b);
            pXVar12 = XMLBuffer::getRawBuffer(bufURI);
            XMLBuffer::append(bufMsg,pXVar12);
            XMLBuffer::append(bufMsg,0x7d);
            XMLBufBid::_XMLBufBid(&bbURI);
          }
          XMLBuffer::append(bufMsg,suffPtr);
          uVar2 = *(undefined8 *)&this->field_0x108;
          pXVar12 = XMLElementDecl::getFullName(elemDecl);
          pXVar16 = XMLBuffer::getRawBuffer(bufMsg);
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)uVar2,(ushort *)0x11,pXVar16,pXVar12,(ushort *)0x0);
          XMLBufBid::_XMLBufBid(&bbMsg);
        }
        if (attDefForWildCard == (XMLAttDef *)0x0) {
          pXVar12 = KVStringPair::getValue(curPair);
          normalizeAttValue(this,attDef,namePtr,pXVar12,normBuf);
          if (attDef == (XMLAttDef *)0x0) {
            pDVar17 = DatatypeValidatorFactory::getBuiltInRegistry();
            attrValidator =
                 RefHashTableOf<xercesc_2_7::DatatypeValidator>::get
                           (pDVar17,&SchemaSymbols::fgDT_ANYSIMPLETYPE);
          }
          else {
            xsNormalized_1 = XMLBuffer::getRawBuffer(normBuf);
            if (this->fGrammarType == SchemaGrammarType) {
              tempDV_1 = SchemaAttDef::getDatatypeValidator((SchemaAttDef *)attDef);
              if ((tempDV_1 == (DatatypeValidator *)0x0) ||
                 (sVar7 = DatatypeValidator::getWSFacet(tempDV_1), sVar7 == 0)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                xercesc_2_7::SchemaValidator::normalizeWhiteSpace
                          (*(DatatypeValidator **)&this->field_0x108,(ushort *)tempDV_1,
                           (XMLBuffer *)xsNormalized_1);
                xsNormalized_1 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x278);
                if (((this->field_0x20 != '\0') && (this->field_0x18 != '\0')) &&
                   (skipThisOne != true)) {
                  XMLBuffer::set(normBuf,xsNormalized_1);
                }
              }
            }
            if ((this->field_0x18 == '\0') || (skipThisOne == true)) {
              pDVar17 = DatatypeValidatorFactory::getBuiltInRegistry();
              attrValidator =
                   RefHashTableOf<xercesc_2_7::DatatypeValidator>::get
                             (pDVar17,&SchemaSymbols::fgDT_ANYSIMPLETYPE);
            }
            else {
              (**(code **)(**(long **)&this->field_0x108 + 0x40))
                        (*(undefined8 *)&this->field_0x108,attDef,xsNormalized_1,0);
              attrValidator =
                   SchemaValidator::getMostRecentAttrValidator
                             (*(SchemaValidator **)&this->field_0x108);
              bVar6 = SchemaValidator::getErrorOccurred(*(SchemaValidator **)&this->field_0x108);
              if (bVar6 != false) {
                (this->fPSVIElemContext).fErrorOccurred = true;
                pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
                if (pPVar15 != (PSVIHandler *)0x0) {
                  attrValid = VALIDITY_INVALID;
                }
              }
            }
          }
          if (attDef == (XMLAttDef *)0x0) {
            attType = AttTypes_Min;
          }
          else {
            attType = XMLAttDef::getType(attDef);
          }
        }
        else {
          pXVar12 = KVStringPair::getValue(curPair);
          normalizeAttValue(this,attDefForWildCard,namePtr,pXVar12,normBuf);
          xsNormalized = XMLBuffer::getRawBuffer(normBuf);
          tempDV = SchemaAttDef::getDatatypeValidator((SchemaAttDef *)attDefForWildCard);
          if ((tempDV == (DatatypeValidator *)0x0) ||
             (sVar7 = DatatypeValidator::getWSFacet(tempDV), sVar7 == 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            xercesc_2_7::SchemaValidator::normalizeWhiteSpace
                      (*(DatatypeValidator **)&this->field_0x108,(ushort *)tempDV,
                       (XMLBuffer *)xsNormalized);
            xsNormalized = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x278);
            if ((this->field_0x20 != '\0') && (this->field_0x18 != '\0')) {
              XMLBuffer::set(normBuf,xsNormalized);
            }
          }
          if (this->field_0x18 == '\0') {
            pDVar17 = DatatypeValidatorFactory::getBuiltInRegistry();
            attrValidator =
                 RefHashTableOf<xercesc_2_7::DatatypeValidator>::get
                           (pDVar17,&SchemaSymbols::fgDT_ANYSIMPLETYPE);
          }
          else {
            (**(code **)(**(long **)&this->field_0x108 + 0x40))
                      (*(undefined8 *)&this->field_0x108,attDefForWildCard,xsNormalized,0);
            attrValidator =
                 SchemaValidator::getMostRecentAttrValidator
                           (*(SchemaValidator **)&this->field_0x108);
            bVar6 = SchemaValidator::getErrorOccurred(*(SchemaValidator **)&this->field_0x108);
            if (bVar6 != false) {
              (this->fPSVIElemContext).fErrorOccurred = true;
              pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
              if (pPVar15 != (PSVIHandler *)0x0) {
                attrValid = VALIDITY_INVALID;
              }
            }
          }
          attType = XMLAttDef::getType(attDefForWildCard);
        }
        pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
        if (pPVar15 != (PSVIHandler *)0x0) {
          pPVar3 = this->fPSVIAttrList;
          pXVar12 = (XMLCh *)(**(code **)(**(long **)&this->field_0x138 + 0x50))
                                       (*(undefined8 *)&this->field_0x138,uriId);
          psviAttr = PSVIAttributeList::getPSVIAttributeToFill(pPVar3,suffPtr,pXVar12);
          actualAttDef = (SchemaAttDef *)0x0;
          if (attDef == (XMLAttDef *)0x0) {
            if (attDefForWildCard != (XMLAttDef *)0x0) {
              actualAttDef = (SchemaAttDef *)attDefForWildCard;
            }
          }
          else {
            actualAttDef = (SchemaAttDef *)attDef;
          }
          if (actualAttDef == (SchemaAttDef *)0x0) {
            xercesc_2_7::PSVIAttribute::reset
                      ((ushort *)psviAttr,(VALIDITY_STATE)*(undefined8 *)&this->field_0x140,
                       attrValid,(XSSimpleTypeDefinition *)(ulong)attrAssessed,
                       (XSSimpleTypeDefinition *)0x0,(ushort *)0x0,false,
                       (XSAttributeDeclaration *)0x0,(DatatypeValidator *)0x0);
          }
          else {
            attrDecl = (XSAttributeDeclaration *)xercesc_2_7::XSModel::getXSObject(this->fModel);
            attrDataType = SchemaAttDef::getDatatypeValidator(actualAttDef);
            validatingType =
                 (XSSimpleTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
            if (attrValid == VALIDITY_VALID) {
              memberType = (XSSimpleTypeDefinition *)0x0;
              VVar11 = XSSimpleTypeDefinition::getVariety(validatingType);
              if (VVar11 == VARIETY_UNION) {
                memberType = (XSSimpleTypeDefinition *)
                             xercesc_2_7::XSModel::getXSObject(this->fModel);
              }
              pXVar12 = XMLAttDef::getValue((XMLAttDef *)actualAttDef);
              xercesc_2_7::PSVIAttribute::reset
                        ((ushort *)psviAttr,(VALIDITY_STATE)*(undefined8 *)&this->field_0x140,
                         attrValid,(XSSimpleTypeDefinition *)(ulong)attrAssessed,validatingType,
                         (ushort *)memberType,SUB81(pXVar12,0),(XSAttributeDeclaration *)0x0,
                         (DatatypeValidator *)attrDecl);
            }
            else {
              pXVar12 = XMLAttDef::getValue((XMLAttDef *)actualAttDef);
              xercesc_2_7::PSVIAttribute::reset
                        ((ushort *)psviAttr,(VALIDITY_STATE)*(undefined8 *)&this->field_0x140,
                         attrValid,(XSSimpleTypeDefinition *)(ulong)attrAssessed,validatingType,
                         (ushort *)0x0,SUB81(pXVar12,0),(XSAttributeDeclaration *)0x0,
                         (DatatypeValidator *)attrDecl);
            }
          }
        }
      }
      if (retCount < curAttListSize) {
        curAttr = BaseRefVectorOf<xercesc_2_7::XMLAttr>::elementAt
                            ((BaseRefVectorOf_xercesc_2_7__XMLAttr_ *)toFill,retCount);
        pXVar12 = XMLBuffer::getRawBuffer(normBuf);
        XMLAttr::set(curAttr,uriId,suffPtr,prefPtr,pXVar12,attType,(DatatypeValidator *)0x0,false);
        XMLAttr::setSpecified(curAttr,true);
      }
      else {
        pXVar12 = XMLBuffer::getRawBuffer(normBuf);
        pXVar18 = (XMLAttr *)
                  xercesc_2_7::XMemory::operator_new(0x38,*(MemoryManager **)&this->field_0x168);
        xercesc_2_7::XMLAttr::XMLAttr
                  (pXVar18,uriId,suffPtr,prefPtr,pXVar12,attType,true,
                   *(MemoryManager **)&this->field_0x168,(DatatypeValidator *)0x0,false);
        curAttr = pXVar18;
        BaseRefVectorOf<xercesc_2_7::XMLAttr>::addElement
                  ((BaseRefVectorOf_xercesc_2_7__XMLAttr_ *)toFill,pXVar18);
      }
      if (psviAttr != (PSVIAttribute *)0x0) {
        XMLAttr::getValue(curAttr);
        xercesc_2_7::PSVIAttribute::setValue((ushort *)psviAttr);
      }
      retCount = retCount + 1;
      ArrayJanitor<short_unsigned_int>::_ArrayJanitor(&janName);
    }
    if (hasDefs != false) {
      attDefList = getAttDefList(currType,elemDecl);
      i = 0;
      while (uVar8 = (*(attDefList->super_XSerializable)._vptr_XSerializable[0xd])(attDefList),
            i < uVar8) {
        iVar10 = (*(attDefList->super_XSerializable)._vptr_XSerializable[0xe])(attDefList,(ulong)i);
        curDef = (XMLAttDef *)CONCAT44(extraout_var,iVar10);
        defType = XMLAttDef::getDefaultType(curDef);
        attCountPtr = RefHashTableOf<unsigned_int>::get(this->fAttDefRegistry,curDef);
        if ((attCountPtr == (uint *)0x0) || (*attCountPtr < this->fElemCount)) {
          if (this->field_0x18 != '\0') {
            if ((defType == Required) || (defType == Required_And_Fixed)) {
              uVar2 = *(undefined8 *)&this->field_0x108;
              puVar14 = (ushort *)(**(code **)(*(long *)curDef + 0x28))(curDef);
              xercesc_2_7::XMLValidator::emitError
                        ((Codes)uVar2,(ushort *)0x6,puVar14,(ushort *)0x0,(ushort *)0x0);
              (this->fPSVIElemContext).fErrorOccurred = true;
            }
            else if ((defType == DefAttTypes_Min) || (defType == Fixed)) {
              if ((this->field_0x16 == '\0') ||
                 (bVar6 = XMLAttDef::isExternal(curDef), bVar6 == false)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                uVar2 = *(undefined8 *)&this->field_0x108;
                pXVar12 = XMLElementDecl::getFullName(elemDecl);
                puVar14 = (ushort *)(**(code **)(*(long *)curDef + 0x28))(curDef);
                xercesc_2_7::XMLValidator::emitError
                          ((Codes)uVar2,(ushort *)0x52,puVar14,pXVar12,(ushort *)0x0);
              }
            }
          }
          if ((defType == DefAttTypes_Min) || (defType == Fixed)) {
            if (this->field_0x18 != '\0') {
              uVar2 = *(undefined8 *)&this->field_0x108;
              pcVar1 = *(code **)(**(long **)&this->field_0x108 + 0x40);
              pXVar12 = XMLAttDef::getValue(curDef);
              (*pcVar1)(uVar2,curDef,pXVar12,0,elemDecl);
            }
            if (retCount < curAttListSize) {
              curAtt = BaseRefVectorOf<xercesc_2_7::XMLAttr>::elementAt
                                 (*(BaseRefVectorOf_xercesc_2_7__XMLAttr_ **)&this->field_0x68,
                                  retCount);
              (**(code **)(**(long **)&this->field_0x108 + 0x18))
                        (*(undefined8 *)&this->field_0x108,curAtt,curDef);
            }
            else {
              pXVar18 = (XMLAttr *)
                        xercesc_2_7::XMemory::operator_new
                                  (0x38,*(MemoryManager **)&this->field_0x168);
              xercesc_2_7::XMLAttr::XMLAttr(pXVar18,*(MemoryManager **)&this->field_0x168);
              curAtt = pXVar18;
              (**(code **)(**(long **)&this->field_0x108 + 0x18))
                        (*(undefined8 *)&this->field_0x108,pXVar18,curDef);
              BaseRefVectorOf<xercesc_2_7::XMLAttr>::addElement
                        (*(BaseRefVectorOf_xercesc_2_7__XMLAttr_ **)&this->field_0x68,curAtt);
            }
            XMLAttr::setSpecified(curAtt,false);
            retCount = retCount + 1;
            pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
            if (pPVar15 != (PSVIHandler *)0x0) {
              attName = SchemaAttDef::getAttName((SchemaAttDef *)curDef);
              pPVar3 = this->fPSVIAttrList;
              uVar2 = *(undefined8 *)&this->field_0x138;
              pcVar1 = *(code **)(**(long **)&this->field_0x138 + 0x50);
              uVar8 = QName::getURI(attName);
              pXVar12 = (XMLCh *)(*pcVar1)(uVar2,uVar8);
              pXVar16 = QName::getLocalPart(attName);
              defAttrToFill = PSVIAttributeList::getPSVIAttributeToFill(pPVar3,pXVar16,pXVar12);
              defAttrDecl = (XSAttributeDeclaration *)
                            xercesc_2_7::XSModel::getXSObject(this->fModel);
              attrDataType_1 = SchemaAttDef::getDatatypeValidator((SchemaAttDef *)curDef);
              defAttrType = (XSSimpleTypeDefinition *)
                            xercesc_2_7::XSModel::getXSObject(this->fModel);
              bVar6 = SchemaValidator::getErrorOccurred(*(SchemaValidator **)&this->field_0x108);
              if (bVar6 == false) {
                defAttrMemberType = (XSSimpleTypeDefinition *)0x0;
                VVar11 = XSSimpleTypeDefinition::getVariety(defAttrType);
                if (VVar11 == VARIETY_UNION) {
                  pXVar4 = this->fModel;
                  SchemaValidator::getMostRecentAttrValidator
                            (*(SchemaValidator **)&this->field_0x108);
                  defAttrMemberType =
                       (XSSimpleTypeDefinition *)xercesc_2_7::XSModel::getXSObject(pXVar4);
                }
                if (defAttrMemberType != (XSSimpleTypeDefinition *)0x0) {
                  SchemaValidator::getMostRecentAttrValidator
                            (*(SchemaValidator **)&this->field_0x108);
                }
                pXVar12 = XMLAttDef::getValue(curDef);
                xercesc_2_7::PSVIAttribute::reset
                          ((ushort *)defAttrToFill,(VALIDITY_STATE)*(undefined8 *)&this->field_0x140
                           ,VALIDATION_FULL,(XSSimpleTypeDefinition *)0x2,defAttrType,
                           (ushort *)defAttrMemberType,SUB81(pXVar12,0),
                           (XSAttributeDeclaration *)0x1,(DatatypeValidator *)defAttrDecl);
              }
              else {
                pXVar12 = XMLAttDef::getValue(curDef);
                xercesc_2_7::PSVIAttribute::reset
                          ((ushort *)defAttrToFill,(VALIDITY_STATE)*(undefined8 *)&this->field_0x140
                           ,VALIDATION_PARTIAL,(XSSimpleTypeDefinition *)0x2,defAttrType,
                           (ushort *)0x0,SUB81(pXVar12,0),(XSAttributeDeclaration *)0x1,
                           (DatatypeValidator *)defAttrDecl);
              }
              XMLAttDef::getValue(curDef);
              xercesc_2_7::PSVIAttribute::setValue((ushort *)defAttrToFill);
            }
          }
        }
        else if (((attCountPtr != (uint *)0x0) && (defType == DefAttTypes_Max)) &&
                (this->field_0x18 != '\0')) {
          uVar2 = *(undefined8 *)&this->field_0x108;
          puVar14 = (ushort *)(**(code **)(*(long *)curDef + 0x28))(curDef);
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)uVar2,(ushort *)0x31,puVar14,(ushort *)0x0,(ushort *)0x0);
          (this->fPSVIElemContext).fErrorOccurred = true;
          pPVar15 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
          if (pPVar15 != (PSVIHandler *)0x0) {
            attQName = SchemaAttDef::getAttName((SchemaAttDef *)curDef);
            pPVar3 = this->fPSVIAttrList;
            uVar2 = *(undefined8 *)&this->field_0x138;
            pcVar1 = *(code **)(**(long **)&this->field_0x138 + 0x50);
            uVar8 = QName::getURI(attQName);
            (*pcVar1)(uVar2,uVar8);
            pXVar12 = QName::getLocalPart(attQName);
            prohibitedAttr =
                 (PSVIAttribute *)
                 xercesc_2_7::PSVIAttributeList::getAttributePSVIByName((ushort *)pPVar3,pXVar12);
            PSVIAttribute::updateValidity(prohibitedAttr,VALIDITY_INVALID);
          }
        }
        i = i + 1;
      }
    }
    uVar8 = retCount;
    XMLBufBid::_XMLBufBid(&bbNormal);
  }
  else {
    uVar8 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


bool __thiscall
xercesc_2_7::SGXMLScanner::normalizeAttValue
          (SGXMLScanner *this,XMLAttDef *attDef,XMLCh *attName,XMLCh *value,XMLBuffer *toFill)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  AttTypes AVar5;
  XMLReader *pXVar6;
  bool retVal;
  bool firstNonWS;
  bool isAttExternal;
  XMLCh nextCh;
  States curState;
  AttTypes type;
  XMLCh *srcPtr;
  
  if (attDef == (XMLAttDef *)0x0) {
    AVar5 = AttTypes_Min;
  }
  else {
    AVar5 = XMLAttDef::getType(attDef);
  }
  retVal = true;
  XMLBuffer::reset(toFill);
  if ((attDef == (XMLAttDef *)0x0) || (bVar3 = XMLAttDef::isExternal(attDef), bVar3 == false)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar1 = true;
  bVar2 = false;
  srcPtr = value;
  if ((AVar5 == AttTypes_Min) || (Notation < AVar5)) {
    for (; *srcPtr != 0; srcPtr = srcPtr + 1) {
      nextCh = *srcPtr;
      if (nextCh == 0xffff) {
        srcPtr = srcPtr + 1;
        nextCh = *srcPtr;
      }
      else if ((nextCh < 0xe) && (((nextCh == 9 || (nextCh == 10)) || (nextCh == 0xd)))) {
        if (((this->field_0x16 != '\0') && (this->field_0x18 != '\0')) && (bVar3)) {
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)*(undefined8 *)&this->field_0x108,(ushort *)0x53,attName,(ushort *)0x0,
                     (ushort *)0x0);
        }
        nextCh = 0x20;
      }
      else if (nextCh == 0x3c) {
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)this,(ushort *)0xf8,attName,(ushort *)0x0,(ushort *)0x0);
        retVal = false;
      }
      XMLBuffer::append(toFill,nextCh);
    }
  }
  else {
    while (*srcPtr != 0) {
      nextCh = *srcPtr;
      if (nextCh == 0xffff) {
        srcPtr = srcPtr + 1;
        nextCh = *srcPtr;
      }
      else if (nextCh == 0x3c) {
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)this,(ushort *)0xf8,attName,(ushort *)0x0,(ushort *)0x0);
        retVal = false;
      }
      if (bVar1) {
        if (bVar1) {
          pXVar6 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
          bVar4 = XMLReader::isWhitespace(pXVar6,nextCh);
          if (bVar4 != false) {
            bVar1 = false;
            if (((this->field_0x16 == '\0') || (this->field_0x18 == '\0')) || (!bVar3))
            goto LAB_00107600;
            if (((bVar2) && (nextCh == 0x20)) && (srcPtr[1] != 0)) {
              pXVar6 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
              bVar4 = XMLReader::isWhitespace(pXVar6,srcPtr[1]);
              if (bVar4 != false) goto LAB_001075a0;
              bVar4 = false;
            }
            else {
LAB_001075a0:
              bVar4 = true;
            }
            if (bVar4) {
              xercesc_2_7::XMLValidator::emitError
                        ((Codes)*(undefined8 *)&this->field_0x108,(ushort *)0x53,attName,
                         (ushort *)0x0,(ushort *)0x0);
            }
            goto LAB_00107600;
          }
          bVar2 = true;
        }
LAB_001075e3:
        XMLBuffer::append(toFill,nextCh);
        srcPtr = srcPtr + 1;
      }
      else {
        pXVar6 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
        bVar4 = XMLReader::isWhitespace(pXVar6,nextCh);
        if (bVar4 != true) {
          if (bVar2) {
            XMLBuffer::append(toFill,0x20);
          }
          bVar1 = true;
          bVar2 = true;
          goto LAB_001075e3;
        }
LAB_00107600:
        srcPtr = srcPtr + 1;
      }
    }
  }
  return retVal;
}


bool __thiscall
xercesc_2_7::SGXMLScanner::normalizeAttRawValue
          (SGXMLScanner *this,XMLCh *attrName,XMLCh *value,XMLBuffer *toFill)

{
  XMLReader *this_00;
  bool bVar1;
  bool retVal;
  bool escaped;
  XMLCh nextCh;
  XMLCh *srcPtr;
  
  retVal = true;
  XMLBuffer::reset(toFill);
  for (srcPtr = value; *srcPtr != 0; srcPtr = srcPtr + 1) {
    nextCh = *srcPtr;
    bVar1 = nextCh == 0xffff;
    if (bVar1) {
      srcPtr = srcPtr + 1;
      nextCh = *srcPtr;
    }
    else if (*srcPtr == 0x3c) {
      xercesc_2_7::XMLScanner::emitError
                ((Codes)this,(ushort *)0xf8,attrName,(ushort *)0x0,(ushort *)0x0);
      retVal = false;
    }
    if (!bVar1) {
      this_00 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
      bVar1 = XMLReader::isWhitespace(this_00,nextCh);
      if (bVar1 != false) {
        nextCh = 0x20;
      }
    }
    XMLBuffer::append(toFill,nextCh);
  }
  return retVal;
}


uint __thiscall
xercesc_2_7::SGXMLScanner::resolvePrefix(SGXMLScanner *this,XMLCh *prefix,MapModes mode)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long in_FS_OFFSET;
  bool unknown;
  uint uriId;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = XMLString::equals(prefix,(XMLCh *)&XMLUni::fgXMLNSString);
  if (bVar2 == false) {
    bVar2 = XMLString::equals(prefix,(XMLCh *)&XMLUni::fgXMLString);
    if (bVar2 == false) {
      uVar3 = xercesc_2_7::ElemStack::mapPrefixToURI
                        ((ushort *)&this->field_0x2a0,(MapModes)prefix,(bool *)(ulong)mode);
      if (unknown != false) {
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)this,(ushort *)0x115,prefix,(ushort *)0x0,(ushort *)0x0);
      }
    }
    else {
      uVar3 = *(uint *)&this->field_0x3c;
    }
  }
  else {
    uVar3 = *(uint *)&this->field_0x40;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


uint __thiscall
xercesc_2_7::SGXMLScanner::resolvePrefix
          (SGXMLScanner *this,XMLCh *prefix,XMLBuffer *bufToFill,MapModes mode)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long in_FS_OFFSET;
  bool unknown;
  uint uriId;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = XMLString::equals(prefix,(XMLCh *)&XMLUni::fgXMLNSString);
  if (bVar2 == false) {
    bVar2 = XMLString::equals(prefix,(XMLCh *)&XMLUni::fgXMLString);
    if (bVar2 == false) {
      uVar3 = xercesc_2_7::ElemStack::mapPrefixToURI
                        ((ushort *)&this->field_0x2a0,(MapModes)prefix,(bool *)(ulong)mode);
      if (unknown != false) {
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)this,(ushort *)0x115,prefix,(ushort *)0x0,(ushort *)0x0);
      }
      xercesc_2_7::XMLScanner::getURIText((Codes)this,(XMLBuffer *)(ulong)uVar3);
    }
    else {
      uVar3 = *(uint *)&this->field_0x3c;
    }
  }
  else {
    uVar3 = *(uint *)&this->field_0x40;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


void __thiscall xercesc_2_7::SGXMLScanner::scanReset(SGXMLScanner *this,InputSource *src)

{
  MemoryManager *pMVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  PSVIHandler *pPVar5;
  XSModel *pXVar6;
  SchemaGrammar *this_00;
  PSVIElement *this_01;
  ValueStackOf_bool_ *this_02;
  XMLEntityDecl *pXVar7;
  RuntimeException *pRVar8;
  XMLCh *pXVar9;
  XMLReader *newReader;
  
  xercesc_2_7::GrammarResolver::cacheGrammarFromParse(SUB81(*(undefined8 *)&this->field_0x118,0));
  GrammarResolver::useCachedGrammarInParse
            (*(GrammarResolver **)&this->field_0x118,(bool)this->field_0x1e);
  if (this->fModel != (XSModel *)0x0) {
    pPVar5 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
    if (pPVar5 != (PSVIHandler *)0x0) {
      bVar2 = true;
      goto LAB_00107954;
    }
  }
  bVar2 = false;
LAB_00107954:
  if (bVar2) {
    pXVar6 = (XSModel *)xercesc_2_7::GrammarResolver::getXSModel();
    this->fModel = pXVar6;
  }
  if (this->fSchemaGrammar == (SchemaGrammar *)0x0) {
    this_00 = (SchemaGrammar *)
              xercesc_2_7::XMemory::operator_new(0xa0,*(MemoryManager **)&this->field_0x120);
    xercesc_2_7::SchemaGrammar::SchemaGrammar(this_00,*(MemoryManager **)&this->field_0x120);
    this->fSchemaGrammar = this_00;
  }
  *(SchemaGrammar **)&this->field_0x128 = this->fSchemaGrammar;
  this->fGrammarType = DTDGrammarType;
  *(undefined8 *)&this->field_0x130 = 0;
  (**(code **)(**(long **)&this->field_0x108 + 0x58))
            (*(undefined8 *)&this->field_0x108,*(undefined8 *)&this->field_0x128);
  if (this->field_0x19 != '\0') {
    SchemaValidator::setErrorReporter
              (*(SchemaValidator **)&this->field_0x108,*(XMLErrorReporter **)&this->field_0x90);
    SchemaValidator::setGrammarResolver
              (*(SchemaValidator **)&this->field_0x108,*(GrammarResolver **)&this->field_0x118);
    SchemaValidator::setExitOnFirstFatal
              (*(SchemaValidator **)&this->field_0x108,(bool)this->field_0x13);
  }
  this->field_0x18 = *(int *)&this->field_0x110 == 1;
  if (*(long *)&this->field_0x78 != 0) {
    (**(code **)(**(long **)&this->field_0x78 + 0x48))(*(undefined8 *)&this->field_0x78);
  }
  if (*(long *)&this->field_0x88 != 0) {
    (**(code **)(**(long **)&this->field_0x88 + 0x20))(*(undefined8 *)&this->field_0x88);
  }
  if (*(long *)&this->field_0x90 != 0) {
    (**(code **)(**(long **)&this->field_0x90 + 0x18))(*(undefined8 *)&this->field_0x90);
  }
  XMLScanner::resetValidationContext(&this->super_XMLScanner);
  (**(code **)(**(long **)&this->field_0x168 + 0x18))(*(undefined8 *)&this->field_0x168);
  *(undefined8 *)&this->field_0x140 = 0;
  if (this->fICHandler != (IdentityConstraintHandler *)0x0) {
    xercesc_2_7::IdentityConstraintHandler::reset();
  }
  xercesc_2_7::ElemStack::reset
            ((int)this + 0x2a0,*(uint *)&this->field_0x34,*(uint *)&this->field_0x38,
             *(uint *)&this->field_0x3c);
  if (*(int *)&this->field_0x44 == 0) {
    uVar4 = (**(code **)(**(long **)&this->field_0x138 + 0x28))
                      (*(undefined8 *)&this->field_0x138,&SchemaSymbols::fgURI_XSI);
    *(undefined4 *)&this->field_0x44 = uVar4;
  }
  this->field_0x15 = 0;
  this->field_0x16 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  this->field_0x17 = 1;
  this->fSeeXsi = false;
  this->field_0x12 = 1;
  this->field_0x1a = 1;
  if (this->fPSVIElement == (PSVIElement *)0x0) {
    this_01 = (PSVIElement *)
              xercesc_2_7::XMemory::operator_new(0x68,*(MemoryManager **)&this->field_0x168);
    xercesc_2_7::PSVIElement::PSVIElement(this_01,*(MemoryManager **)&this->field_0x168);
    this->fPSVIElement = this_01;
  }
  if (this->fErrorStack == (ValueStackOf_bool_ *)0x0) {
    this_02 = (ValueStackOf_bool_ *)
              xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)&this->field_0x168);
    ValueStackOf<bool>::ValueStackOf(this_02,8,*(MemoryManager **)&this->field_0x168,false);
    this->fErrorStack = this_02;
  }
  else {
    ValueStackOf<bool>::removeAllElements(this->fErrorStack);
  }
  resetPSVIElemContext(this);
  (**(code **)(*(long *)this->fSchemaValidator + 0x30))(this->fSchemaValidator);
  SchemaValidator::setErrorReporter(this->fSchemaValidator,*(XMLErrorReporter **)&this->field_0x90);
  SchemaValidator::setExitOnFirstFatal(this->fSchemaValidator,(bool)this->field_0x13);
  SchemaValidator::setGrammarResolver
            (this->fSchemaValidator,*(GrammarResolver **)&this->field_0x118);
  if (this->field_0x19 != '\0') {
    (**(code **)(**(long **)&this->field_0x108 + 0x30))(*(undefined8 *)&this->field_0x108);
  }
  pXVar7 = (XMLEntityDecl *)
           xercesc_2_7::ReaderMgr::createReader
                     ((InputSource *)&this->field_0xb8,SUB81(src,0),RefFrom_NonLiteral,Type_General,
                      Source_External,true);
  if (pXVar7 == (XMLEntityDecl *)0x0) {
    cVar3 = (**(code **)(*(long *)src + 0x30))(src);
    if (cVar3 != '\0') {
      pRVar8 = (RuntimeException *)__cxa_allocate_exception(0x30);
      pMVar1 = *(MemoryManager **)&this->field_0x168;
      pXVar9 = (XMLCh *)(**(code **)(*(long *)src + 0x28))(src);
      RuntimeException::RuntimeException
                (pRVar8,"SGXMLScanner.cpp",0xc48,Scan_CouldNotOpenSource,pXVar9,(XMLCh *)0x0,
                 (XMLCh *)0x0,(XMLCh *)0x0,pMVar1);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pRVar8,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
    }
    pRVar8 = (RuntimeException *)__cxa_allocate_exception(0x30);
    pMVar1 = *(MemoryManager **)&this->field_0x168;
    pXVar9 = (XMLCh *)(**(code **)(*(long *)src + 0x28))(src);
    RuntimeException::RuntimeException
              (pRVar8,"SGXMLScanner.cpp",0xc4a,Scan_CouldNotOpenSource_Warning,pXVar9,(XMLCh *)0x0,
               (XMLCh *)0x0,(XMLCh *)0x0,pMVar1);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pRVar8,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
  }
  xercesc_2_7::ReaderMgr::pushReader((XMLReader *)&this->field_0xb8,pXVar7);
  if (*(long *)&this->field_0x158 != 0) {
    uVar4 = (**(code **)(**(long **)&this->field_0x158 + 0x18))(*(undefined8 *)&this->field_0x158);
    *(undefined4 *)&this->field_0x2c = uVar4;
    *(undefined4 *)&this->field_0x30 = 0;
  }
  this->fElemCount = 0;
  if (*(uint *)&this->field_0x58 < 0x20) {
    xercesc_2_7::XMLScanner::resetUIntPool();
  }
  else {
    RefHashTableOf<unsigned_int>::removeAll(this->fAttDefRegistry);
    xercesc_2_7::XMLScanner::recreateUIntPool();
  }
  RefHash2KeysTableOf<unsigned_int>::removeAll(this->fUndeclaredAttrRegistryNS);
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::sendCharData(SGXMLScanner *this,XMLBuffer *toSend)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  XMLBuffer *pXVar8;
  ComplexTypeInfo *this_00;
  XMLReader *pXVar9;
  ushort *puVar10;
  XMLCh *pXVar11;
  CharDataOpts charOpts;
  uint xsLen;
  uint xsLen_1;
  uint len;
  ModelTypes modelType;
  XMLCh *xsNormalized;
  XMLCh *xsNormalized_1;
  XMLCh *rawBuf;
  ComplexTypeInfo *currType;
  DatatypeValidator *tempDV_1;
  DatatypeValidator *tempDV;
  
  bVar3 = XMLBuffer::isEmpty(toSend);
  if (bVar3 == false) {
    if (this->field_0x18 == '\0') {
      bVar3 = toCheckIdentityConstraint(this);
      if ((bVar3 == false) ||
         (iVar7 = IdentityConstraintHandler::getMatcherCount(this->fICHandler), iVar7 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar6 = XMLBuffer::getLen(toSend);
        pXVar11 = XMLBuffer::getRawBuffer(toSend);
        XMLBuffer::append(&this->fContent,pXVar11,uVar6);
      }
      if (*(long *)&this->field_0x78 != 0) {
        uVar1 = *(undefined8 *)&this->field_0x78;
        pcVar2 = *(code **)(**(long **)&this->field_0x78 + 0x10);
        uVar6 = XMLBuffer::getLen(toSend);
        pXVar11 = XMLBuffer::getRawBuffer(toSend);
        (*pcVar2)(uVar1,pXVar11,uVar6,0);
      }
    }
    else {
      pXVar8 = (XMLBuffer *)XMLBuffer::getRawBuffer(toSend);
      uVar6 = XMLBuffer::getLen(toSend);
      charOpts = AllCharData;
      this_00 = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
      if (this_00 != (ComplexTypeInfo *)0x0) {
        iVar7 = ComplexTypeInfo::getContentType(this_00);
        if (iVar7 == 4) {
          charOpts = SpacesOk;
        }
        else if (iVar7 == 0) {
          charOpts = NoCharData;
        }
      }
      if (charOpts == NoCharData) {
        xercesc_2_7::XMLValidator::emitError((Codes)*(undefined8 *)&this->field_0x108);
        XMLScanner::getPSVIHandler(&this->super_XMLScanner);
      }
      else {
        pXVar9 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
        cVar4 = xercesc_2_7::XMLReader::isAllSpaces((ushort *)pXVar9,(uint)pXVar8);
        if (cVar4 == '\0') {
          if (charOpts == AllCharData) {
            puVar10 = (ushort *)
                      SchemaValidator::getCurrentDatatypeValidator
                                (*(SchemaValidator **)&this->field_0x108);
            if ((puVar10 == (ushort *)0x0) ||
               (sVar5 = DatatypeValidator::getWSFacet((DatatypeValidator *)puVar10), sVar5 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            xsLen_1 = uVar6;
            xsNormalized_1 = (XMLCh *)pXVar8;
            if (bVar3) {
              xercesc_2_7::SchemaValidator::normalizeWhiteSpace
                        (*(DatatypeValidator **)&this->field_0x108,puVar10,pXVar8);
              xsNormalized_1 = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x278);
              xsLen_1 = XMLBuffer::getLen((XMLBuffer *)&this->field_0x278);
            }
            SchemaValidator::setDatatypeBuffer
                      (*(SchemaValidator **)&this->field_0x108,xsNormalized_1);
            bVar3 = toCheckIdentityConstraint(this);
            if ((bVar3 == false) ||
               (iVar7 = IdentityConstraintHandler::getMatcherCount(this->fICHandler), iVar7 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              XMLBuffer::append(&this->fContent,xsNormalized_1,xsLen_1);
            }
            if (*(long *)&this->field_0x78 != 0) {
              if (this->field_0x20 == '\0') {
                (**(code **)(**(long **)&this->field_0x78 + 0x10))
                          (*(undefined8 *)&this->field_0x78,pXVar8,uVar6,0);
              }
              else {
                (**(code **)(**(long **)&this->field_0x78 + 0x10))
                          (*(undefined8 *)&this->field_0x78,xsNormalized_1,xsLen_1,0);
              }
            }
          }
          else {
            xercesc_2_7::XMLValidator::emitError((Codes)*(undefined8 *)&this->field_0x108);
            XMLScanner::getPSVIHandler(&this->super_XMLScanner);
          }
        }
        else if (charOpts == SpacesOk) {
          if (*(long *)&this->field_0x78 != 0) {
            (**(code **)(**(long **)&this->field_0x78 + 0x40))
                      (*(undefined8 *)&this->field_0x78,pXVar8,uVar6,0);
          }
        }
        else if (charOpts == AllCharData) {
          puVar10 = (ushort *)
                    SchemaValidator::getCurrentDatatypeValidator
                              (*(SchemaValidator **)&this->field_0x108);
          if ((puVar10 == (ushort *)0x0) ||
             (sVar5 = DatatypeValidator::getWSFacet((DatatypeValidator *)puVar10), sVar5 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          xsLen = uVar6;
          xsNormalized = (XMLCh *)pXVar8;
          if (bVar3) {
            xercesc_2_7::SchemaValidator::normalizeWhiteSpace
                      (*(DatatypeValidator **)&this->field_0x108,puVar10,pXVar8);
            xsNormalized = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x278);
            xsLen = XMLBuffer::getLen((XMLBuffer *)&this->field_0x278);
          }
          SchemaValidator::setDatatypeBuffer(*(SchemaValidator **)&this->field_0x108,xsNormalized);
          bVar3 = toCheckIdentityConstraint(this);
          if ((bVar3 == false) ||
             (iVar7 = IdentityConstraintHandler::getMatcherCount(this->fICHandler), iVar7 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            XMLBuffer::append(&this->fContent,xsNormalized,xsLen);
          }
          if (*(long *)&this->field_0x78 != 0) {
            if (this->field_0x20 == '\0') {
              (**(code **)(**(long **)&this->field_0x78 + 0x10))
                        (*(undefined8 *)&this->field_0x78,pXVar8,uVar6,0);
            }
            else {
              (**(code **)(**(long **)&this->field_0x78 + 0x10))
                        (*(undefined8 *)&this->field_0x78,xsNormalized,xsLen,0);
            }
          }
        }
      }
    }
    XMLBuffer::reset(toSend);
  }
  return;
}


void __thiscall
xercesc_2_7::SGXMLScanner::updateNSMap(SGXMLScanner *this,XMLCh *attrName,XMLCh *attrValue)

{
  int colonOfs;
  
  colonOfs = xercesc_2_7::XMLString::indexOf(attrName,0x3a);
  updateNSMap(this,attrName,attrValue,colonOfs);
  return;
}


void __thiscall
xercesc_2_7::SGXMLScanner::updateNSMap
          (SGXMLScanner *this,XMLCh *attrName,XMLCh *attrValue,int colonOfs)

{
  long lVar1;
  bool bVar2;
  XMLBuffer *toFill;
  XMLCh *str1;
  Codes CVar3;
  long in_FS_OFFSET;
  XMLCh *prefPtr;
  XMLBuffer *normalBuf;
  XMLCh *namespaceURI;
  XMLBufBid bbNormal;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBufBid::XMLBufBid(&bbNormal,(XMLBufferMgr *)&this->field_0x170);
  toFill = XMLBufBid::getBuffer(&bbNormal);
  normalizeAttRawValue(this,attrName,attrValue,toFill);
  str1 = XMLBuffer::getRawBuffer(toFill);
  prefPtr = (XMLCh *)&XMLUni::fgZeroLenString;
  CVar3 = (Codes)this;
  if (colonOfs != -1) {
    prefPtr = attrName + (long)colonOfs + 1;
    bVar2 = XMLString::equals(prefPtr,(XMLCh *)&XMLUni::fgXMLNSString);
    if (bVar2 == false) {
      bVar2 = XMLString::equals(prefPtr,(XMLCh *)&XMLUni::fgXMLString);
      if (bVar2 != false) {
        bVar2 = XMLString::equals(str1,(XMLCh *)&XMLUni::fgXMLURIName);
        if (bVar2 != true) {
          xercesc_2_7::XMLScanner::emitError(CVar3);
        }
      }
    }
    else {
      xercesc_2_7::XMLScanner::emitError(CVar3);
    }
    if (str1 == (XMLCh *)0x0) {
      xercesc_2_7::XMLScanner::emitError(CVar3,(ushort *)0x12c,attrName,(ushort *)0x0,(ushort *)0x0)
      ;
    }
    else if ((*str1 == 0) && (*(int *)&this->field_0x160 == 0)) {
      xercesc_2_7::XMLScanner::emitError(CVar3,(ushort *)0x12c,attrName,(ushort *)0x0,(ushort *)0x0)
      ;
    }
  }
  bVar2 = XMLString::equals(str1,(XMLCh *)&XMLUni::fgXMLNSURIName);
  if (bVar2 == false) {
    bVar2 = XMLString::equals(str1,(XMLCh *)&XMLUni::fgXMLURIName);
    if (bVar2 != false) {
      bVar2 = XMLString::equals(prefPtr,(XMLCh *)&XMLUni::fgXMLString);
      if (bVar2 != true) {
        xercesc_2_7::XMLScanner::emitError(CVar3);
      }
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError(CVar3);
  }
  (**(code **)(**(long **)&this->field_0x138 + 0x28))(*(undefined8 *)&this->field_0x138,str1);
  xercesc_2_7::ElemStack::addPrefix((ushort *)&this->field_0x2a0,(uint)prefPtr);
  XMLBufBid::_XMLBufBid(&bbNormal);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::SGXMLScanner::scanRawAttrListforNameSpaces(SGXMLScanner *this,int attCount)

{
  long lVar1;
  code *pcVar2;
  SchemaValidator *this_00;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  XMLCh *pXVar7;
  XMLCh *prefix;
  long lVar8;
  long in_FS_OFFSET;
  int colonPos;
  int index;
  uint uriId;
  KVStringPair *curPair;
  XMLCh *rawPtr;
  XMLCh *valuePtr;
  XMLBuffer *fXsiType;
  KVStringPair *curPair_1;
  XMLCh *rawPtr_1;
  XMLCh *prefPtr;
  XMLCh *valuePtr_1;
  XMLCh *suffPtr;
  XMLBufBid bbXsi;
  QName attName;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  for (index = 0; index < attCount; index = index + 1) {
    curPair = BaseRefVectorOf<xercesc_2_7::KVStringPair>::elementAt
                        ((BaseRefVectorOf_xercesc_2_7__KVStringPair_ *)this->fRawAttrList,index);
    rawPtr = KVStringPair::getKey(curPair);
    iVar5 = xercesc_2_7::XMLString::compareNString(rawPtr,(ushort *)&XMLUni::fgXMLNSColonString,6);
    if (iVar5 == 0) {
LAB_001089b9:
      bVar3 = true;
    }
    else {
      bVar3 = XMLString::equals(rawPtr,(XMLCh *)&XMLUni::fgXMLNSString);
      if (bVar3 != false) goto LAB_001089b9;
      bVar3 = false;
    }
    if (bVar3) {
      valuePtr = KVStringPair::getValue(curPair);
      updateNSMap(this,rawPtr,valuePtr,this->fRawAttrColonList[index]);
      bVar3 = XMLString::equals(valuePtr,(XMLCh *)&SchemaSymbols::fgURI_XSI);
      if (bVar3 != false) {
        this->fSeeXsi = true;
      }
    }
  }
  if (this->fSeeXsi == false) goto code_r0x00108e41;
  XMLBufBid::XMLBufBid(&bbXsi,(XMLBufferMgr *)&this->field_0x170);
  fXsiType = XMLBufBid::getBuffer(&bbXsi);
  xercesc_2_7::QName::QName(&attName,*(MemoryManager **)&this->field_0x168);
  for (index = 0; index < attCount; index = index + 1) {
    curPair_1 = BaseRefVectorOf<xercesc_2_7::KVStringPair>::elementAt
                          ((BaseRefVectorOf_xercesc_2_7__KVStringPair_ *)this->fRawAttrList,index);
    rawPtr_1 = KVStringPair::getKey(curPair_1);
    xercesc_2_7::QName::setName((ushort *)&attName,(uint)rawPtr_1);
    prefPtr = QName::getPrefix(&attName);
    uVar6 = resolvePrefix(this,prefPtr,Mode_Attribute);
    if (uVar6 == *(uint *)&this->field_0x44) {
      valuePtr_1 = KVStringPair::getValue(curPair_1);
      suffPtr = QName::getLocalPart(&attName);
      bVar3 = XMLString::equals(suffPtr,(XMLCh *)&SchemaSymbols::fgXSI_SCHEMALOCACTION);
      if (bVar3 == false) {
        bVar3 = XMLString::equals(suffPtr,(XMLCh *)&SchemaSymbols::fgXSI_NONAMESPACESCHEMALOCACTION)
        ;
        if (bVar3 != false) {
          resolveSchemaGrammar(this,valuePtr_1,(XMLCh *)&XMLUni::fgZeroLenString);
        }
      }
      else {
        parseSchemaLocation(this,valuePtr_1);
      }
      bVar3 = XMLString::equals(suffPtr,(XMLCh *)&SchemaSymbols::fgXSI_TYPE);
      if (bVar3 == false) {
        bVar3 = XMLString::equals(suffPtr,(XMLCh *)&SchemaSymbols::fgATT_NILL);
        if ((bVar3 == false) || (*(long *)&this->field_0x108 == 0)) {
LAB_00108c98:
          bVar3 = false;
        }
        else {
          cVar4 = (**(code **)(**(long **)&this->field_0x108 + 0x68))
                            (*(undefined8 *)&this->field_0x108);
          if (cVar4 == '\0') goto LAB_00108c98;
          bVar3 = XMLString::equals(valuePtr_1,(XMLCh *)&SchemaSymbols::fgATTVAL_TRUE);
          if (bVar3 == false) goto LAB_00108c98;
          bVar3 = true;
        }
        if (bVar3) {
          SchemaValidator::setNillable(*(SchemaValidator **)&this->field_0x108,true);
        }
      }
      else {
        XMLBuffer::set(fXsiType,valuePtr_1);
      }
    }
  }
  if (*(long *)&this->field_0x108 == 0) {
LAB_00108d11:
    bVar3 = false;
  }
  else {
    cVar4 = (**(code **)(**(long **)&this->field_0x108 + 0x68))(*(undefined8 *)&this->field_0x108);
    if (cVar4 == '\0') goto LAB_00108d11;
    bVar3 = true;
  }
  if (bVar3) {
    bVar3 = XMLBuffer::isEmpty(fXsiType);
    if (bVar3 != true) {
      colonPos = -1;
      pcVar2 = *(code **)(*(long *)this + 0x38);
      pXVar7 = XMLBuffer::getRawBuffer(fXsiType);
      uriId = (*pcVar2)(this,pXVar7,&this->field_0x228,1,&colonPos);
      this_00 = *(SchemaValidator **)&this->field_0x108;
      pXVar7 = XMLBuffer::getRawBuffer(fXsiType);
      lVar8 = (long)colonPos;
      prefix = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x228);
      SchemaValidator::setXsiType(this_00,prefix,pXVar7 + lVar8 + 1,uriId);
    }
  }
  xercesc_2_7::QName::_QName(&attName);
  XMLBufBid::_XMLBufBid(&bbXsi);
code_r0x00108e41:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::SGXMLScanner::parseSchemaLocation(SGXMLScanner *this,XMLCh *schemaLocationStr)

{
  long lVar1;
  uint uVar2;
  BaseRefVectorOf_short_unsigned_int_ *toDelete;
  ushort *uri;
  ushort *loc;
  long in_FS_OFFSET;
  uint i;
  uint size;
  Janitor_xercesc_2_7__BaseRefVectorOf_short_unsigned_int___ janLoc;
  BaseRefVectorOf_short_unsigned_int_ *schemaLocation;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  toDelete = (BaseRefVectorOf_short_unsigned_int_ *)
             xercesc_2_7::XMLString::tokenizeString
                       (schemaLocationStr,*(MemoryManager **)&this->field_0x168);
  Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_>::Janitor(&janLoc,toDelete);
  uVar2 = BaseRefVectorOf<short_unsigned_int>::size(toDelete);
  if ((uVar2 & 1) == 0) {
    for (i = 0; i < uVar2; i = i + 2) {
      uri = BaseRefVectorOf<short_unsigned_int>::elementAt(toDelete,i);
      loc = BaseRefVectorOf<short_unsigned_int>::elementAt(toDelete,i + 1);
      resolveSchemaGrammar(this,loc,uri);
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this);
  }
  Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_>::_Janitor(&janLoc);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::SGXMLScanner::resolveSchemaGrammar(SGXMLScanner *this,XMLCh *loc,XMLCh *uri)

{
  long lVar1;
  code *pcVar2;
  MemoryManager *pMVar3;
  XMLErrorReporter *pXVar4;
  XMLEntityHandler *pXVar5;
  InputSource *baseURI;
  char cVar6;
  undefined uVar7;
  bool bVar8;
  int iVar9;
  XMLBuffer *pXVar10;
  XMLCh *pXVar11;
  XMLBuffer *this_00;
  MalformedURLException *pMVar12;
  long *plVar13;
  DOMElement *pDVar14;
  undefined4 extraout_var;
  long *plVar15;
  undefined8 uVar16;
  ushort *puVar17;
  PSVIHandler *pPVar18;
  XSModel *pXVar19;
  long in_FS_OFFSET;
  bool flag;
  Grammar *grammar;
  InputSource *srcToFill;
  XMLBuffer *normalizedSysId;
  XMLCh *normalizedURI;
  XMLBuffer *expSysId;
  XMLBuffer *resolvedSysId;
  DOMDocument *document;
  DOMElement *root;
  XMLCh *newUri;
  XMLSchemaDescription *gramDesc;
  XMLBufBid nnSys;
  XMLBufBid bbSys;
  XMLBufBid ddSys;
  Janitor_xercesc_2_7__InputSource_ janSrc;
  XSDDOMParser parser;
  XMLSchemaDescriptionImpl theSchemaDescription;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::XMLSchemaDescriptionImpl::XMLSchemaDescriptionImpl
            (&theSchemaDescription,uri,*(MemoryManager **)&this->field_0x168);
  xercesc_2_7::XMLSchemaDescriptionImpl::setLocationHints((ushort *)&theSchemaDescription);
  grammar = (Grammar *)
            xercesc_2_7::GrammarResolver::getGrammar(*(XMLGrammarDescription **)&this->field_0x118);
  xercesc_2_7::XMLSchemaDescriptionImpl::_XMLSchemaDescriptionImpl(&theSchemaDescription);
  if (((long *)grammar == (long *)0x0) ||
     (iVar9 = (**(code **)(*(long *)grammar + 0x28))(grammar), iVar9 == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    xercesc_2_7::XSDDOMParser::XSDDOMParser
              (&parser,(XMLValidator *)0x0,*(MemoryManager **)&this->field_0x168,
               (XMLGrammarPool *)0x0);
    xercesc_2_7::AbstractDOMParser::setValidationScheme((int)register0x00000020 - 0x3c8);
    xercesc_2_7::AbstractDOMParser::setDoNamespaces(true);
    xercesc_2_7::XSDDOMParser::setUserEntityHandler((XMLEntityHandler *)&parser);
    xercesc_2_7::XSDDOMParser::setUserErrorReporter((XMLErrorReporter *)&parser);
    XMLBufBid::XMLBufBid(&nnSys,(XMLBufferMgr *)&this->field_0x170);
    pXVar10 = XMLBufBid::getBuffer(&nnSys);
    _theSchemaDescription = 0xffff;
    xercesc_2_7::XMLString::removeChar(loc,(ushort *)&theSchemaDescription,pXVar10);
    pXVar11 = XMLBuffer::getRawBuffer(pXVar10);
    XMLBufBid::XMLBufBid(&bbSys,(XMLBufferMgr *)&this->field_0x170);
    pXVar10 = XMLBufBid::getBuffer(&bbSys);
    srcToFill = (InputSource *)0x0;
    if (*(long *)&this->field_0x88 == 0) {
      XMLBuffer::set(pXVar10,pXVar11);
    }
    else {
      cVar6 = (**(code **)(**(long **)&this->field_0x88 + 0x18))
                        (*(undefined8 *)&this->field_0x88,pXVar11,pXVar10);
      if (cVar6 != '\x01') {
        XMLBuffer::set(pXVar10,pXVar11);
      }
      ReaderMgr::LastExtEntityInfo::LastExtEntityInfo((LastExtEntityInfo *)&janSrc);
      xercesc_2_7::ReaderMgr::getLastExtEntityInfo((LastExtEntityInfo *)&this->field_0xb8);
      baseURI = janSrc;
      pXVar11 = XMLBuffer::getRawBuffer(pXVar10);
      XMLResourceIdentifier::XMLResourceIdentifier
                ((XMLResourceIdentifier *)&theSchemaDescription,SchemaGrammar,pXVar11,uri,
                 (XMLCh *)&XMLUni::fgZeroLenString,(XMLCh *)baseURI,(Locator *)&this->field_0xb8);
      srcToFill = (InputSource *)
                  (**(code **)(**(long **)&this->field_0x88 + 0x30))
                            (*(undefined8 *)&this->field_0x88,&theSchemaDescription);
      XMLResourceIdentifier::_XMLResourceIdentifier((XMLResourceIdentifier *)&theSchemaDescription);
    }
    if (srcToFill == (InputSource *)0x0) {
      if (this->field_0x25 == '\0') {
        ReaderMgr::LastExtEntityInfo::LastExtEntityInfo((LastExtEntityInfo *)&janSrc);
        xercesc_2_7::ReaderMgr::getLastExtEntityInfo((LastExtEntityInfo *)&this->field_0xb8);
        xercesc_2_7::XMLURL::XMLURL
                  ((XMLURL *)&theSchemaDescription,*(MemoryManager **)&this->field_0x168);
        pXVar11 = XMLBuffer::getRawBuffer(pXVar10);
        cVar6 = xercesc_2_7::XMLURL::setURL
                          ((ushort *)&theSchemaDescription,(ushort *)janSrc,(XMLURL *)pXVar11);
        if ((cVar6 == '\x01') && (cVar6 = xercesc_2_7::XMLURL::isRelative(), cVar6 == '\0')) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          if (this->field_0x10 == '\x01') {
            pMVar12 = (MalformedURLException *)__cxa_allocate_exception(0x30);
            MalformedURLException::MalformedURLException
                      (pMVar12,"SGXMLScanner.cpp",0xdfe,URL_MalformedURL,
                       *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pMVar12,&MalformedURLException::typeinfo,
                        MalformedURLException::_MalformedURLException);
          }
          XMLBufBid::XMLBufBid(&ddSys,(XMLBufferMgr *)&this->field_0x170);
          this_00 = XMLBufBid::getBuffer(&ddSys);
          pXVar11 = XMLBuffer::getRawBuffer(pXVar10);
          xercesc_2_7::XMLUri::normalizeURI(pXVar11,this_00);
          pXVar11 = XMLBuffer::getRawBuffer(this_00);
          srcToFill = (InputSource *)
                      xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x168)
          ;
          xercesc_2_7::LocalFileInputSource::LocalFileInputSource
                    ((LocalFileInputSource *)srcToFill,(ushort *)janSrc,pXVar11,
                     *(MemoryManager **)&this->field_0x168);
          XMLBufBid::_XMLBufBid(&ddSys);
        }
        else {
          if ((this->field_0x10 == '\0') ||
             (cVar6 = xercesc_2_7::XMLURL::hasInvalidChar(), cVar6 == '\0')) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            pMVar12 = (MalformedURLException *)__cxa_allocate_exception(0x30);
            MalformedURLException::MalformedURLException
                      (pMVar12,"SGXMLScanner.cpp",0xe03,URL_MalformedURL,
                       *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pMVar12,&MalformedURLException::typeinfo,
                        MalformedURLException::_MalformedURLException);
          }
          srcToFill = (InputSource *)
                      xercesc_2_7::XMemory::operator_new(0x88,*(MemoryManager **)&this->field_0x168)
          ;
          xercesc_2_7::URLInputSource::URLInputSource
                    ((URLInputSource *)srcToFill,(XMLURL *)&theSchemaDescription,
                     *(MemoryManager **)&this->field_0x168);
        }
        xercesc_2_7::XMLURL::_XMLURL((XMLURL *)&theSchemaDescription);
        goto LAB_001095f9;
      }
      bVar8 = false;
    }
    else {
LAB_001095f9:
      Janitor<xercesc_2_7::InputSource>::Janitor(&janSrc,srcToFill);
      uVar7 = (**(code **)(*(long *)srcToFill + 0x30))(srcToFill);
      (**(code **)(*(long *)srcToFill + 0x50))(srcToFill,0);
      xercesc_2_7::AbstractDOMParser::parse((InputSource *)&parser);
      (**(code **)(*(long *)srcToFill + 0x50))(srcToFill,uVar7);
      bVar8 = XSDDOMParser::getSawFatal(&parser);
      if ((bVar8 == false) || (this->field_0x13 == '\0')) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        xercesc_2_7::XMLScanner::emitError((Codes)this);
      }
      plVar13 = (long *)xercesc_2_7::AbstractDOMParser::getDocument();
      if ((plVar13 != (long *)0x0) &&
         (pDVar14 = (DOMElement *)(**(code **)(*plVar13 + 0x68))(plVar13),
         pDVar14 != (DOMElement *)0x0)) {
        iVar9 = (*(pDVar14->super_DOMNode)._vptr_DOMNode[0x29])
                          (pDVar14,&SchemaSymbols::fgATT_TARGETNAMESPACE);
        bVar8 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar9),uri);
        if (bVar8 != true) {
          if ((this->field_0x18 != '\0') || (*(int *)&this->field_0x110 == 2)) {
            xercesc_2_7::XMLValidator::emitError
                      ((Codes)*(undefined8 *)&this->field_0x108,(ushort *)0x45,loc,uri,(ushort *)0x0
                      );
          }
          grammar = (Grammar *)
                    xercesc_2_7::GrammarResolver::getGrammar(*(ushort **)&this->field_0x118);
        }
        if ((grammar == (Grammar *)0x0) ||
           (iVar9 = (**(code **)(*(long *)grammar + 0x28))(grammar), iVar9 == 0)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          if ((*(int *)&this->field_0x110 == 2) && (this->field_0x18 != '\x01')) {
            this->field_0x18 = 1;
            ElemStack::setValidationFlag((ElemStack *)&this->field_0x2a0,(bool)this->field_0x18);
          }
          plVar13 = (long *)xercesc_2_7::XMemory::operator_new
                                      (0xa0,*(MemoryManager **)&this->field_0x120);
          xercesc_2_7::SchemaGrammar::SchemaGrammar
                    ((SchemaGrammar *)plVar13,*(MemoryManager **)&this->field_0x120);
          plVar15 = (long *)(**(code **)(*plVar13 + 0xb0))(plVar13);
          (**(code **)(*plVar15 + 0x68))(plVar15,3);
          pcVar2 = *(code **)(*plVar15 + 0x78);
          uVar16 = (**(code **)(*(long *)srcToFill + 0x28))(srcToFill);
          (*pcVar2)(plVar15,uVar16);
          pMVar3 = *(MemoryManager **)&this->field_0x168;
          pXVar4 = *(XMLErrorReporter **)&this->field_0x90;
          pXVar5 = *(XMLEntityHandler **)&this->field_0x88;
          puVar17 = (ushort *)(**(code **)(*(long *)srcToFill + 0x28))(srcToFill);
          xercesc_2_7::TraverseSchema::TraverseSchema
                    ((TraverseSchema *)&theSchemaDescription,pDVar14,
                     *(XMLStringPool **)&this->field_0x138,(SchemaGrammar *)plVar13,
                     *(GrammarResolver **)&this->field_0x118,&this->super_XMLScanner,puVar17,pXVar5,
                     pXVar4,pMVar3);
          if (this->fGrammarType == DTDGrammarType) {
            *(long **)&this->field_0x128 = plVar13;
            this->fGrammarType = SchemaGrammarType;
            (**(code **)(**(long **)&this->field_0x108 + 0x58))
                      (*(undefined8 *)&this->field_0x108,*(undefined8 *)&this->field_0x128);
          }
          if (this->field_0x18 != '\0') {
            (**(code **)(**(long **)&this->field_0x108 + 0x20))
                      (*(undefined8 *)&this->field_0x108,0,0);
          }
          xercesc_2_7::TraverseSchema::_TraverseSchema((TraverseSchema *)&theSchemaDescription);
        }
      }
      Janitor<xercesc_2_7::InputSource>::_Janitor(&janSrc);
      bVar8 = true;
    }
    XMLBufBid::_XMLBufBid(&bbSys);
    XMLBufBid::_XMLBufBid(&nnSys);
    xercesc_2_7::XSDDOMParser::_XSDDOMParser(&parser);
    if (!bVar8) goto LAB_00109db3;
  }
  else {
    if ((*(int *)&this->field_0x110 == 2) && (this->field_0x18 != '\x01')) {
      this->field_0x18 = 1;
      ElemStack::setValidationFlag((ElemStack *)&this->field_0x2a0,(bool)this->field_0x18);
    }
    if (this->fGrammarType == DTDGrammarType) {
      *(Grammar **)&this->field_0x128 = grammar;
      this->fGrammarType = SchemaGrammarType;
      (**(code **)(**(long **)&this->field_0x108 + 0x58))
                (*(undefined8 *)&this->field_0x108,*(undefined8 *)&this->field_0x128);
    }
  }
  pPVar18 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
  if (pPVar18 != (PSVIHandler *)0x0) {
    pXVar19 = (XSModel *)xercesc_2_7::GrammarResolver::getXSModel();
    this->fModel = pXVar19;
  }
LAB_00109db3:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

InputSource * __thiscall
xercesc_2_7::SGXMLScanner::resolveSystemId(SGXMLScanner *this,XMLCh *sysId,XMLCh *pubId)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  XMLBuffer *pXVar4;
  XMLCh *pXVar5;
  XMLCh *systemId;
  XMLBuffer *this_00;
  MalformedURLException *pMVar6;
  long in_FS_OFFSET;
  InputSource *srcToFill;
  XMLBuffer *normalizedSysId;
  XMLCh *normalizedURI;
  XMLBuffer *expSysId;
  XMLBuffer *resolvedSysId;
  XMLBufBid nnSys;
  XMLBufBid bbSys;
  XMLBufBid ddSys;
  LastExtEntityInfo lastInfo;
  XMLResourceIdentifier resourceIdentifier;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBufBid::XMLBufBid(&nnSys,(XMLBufferMgr *)&this->field_0x170);
  pXVar4 = XMLBufBid::getBuffer(&nnSys);
  resourceIdentifier.fResourceIdentifierType._0_2_ = 0xffff;
  xercesc_2_7::XMLString::removeChar(sysId,(ushort *)&resourceIdentifier,pXVar4);
  pXVar5 = XMLBuffer::getRawBuffer(pXVar4);
  XMLBufBid::XMLBufBid(&bbSys,(XMLBufferMgr *)&this->field_0x170);
  pXVar4 = XMLBufBid::getBuffer(&bbSys);
  srcToFill = (InputSource *)0x0;
  if (*(long *)&this->field_0x88 == 0) {
    XMLBuffer::set(pXVar4,pXVar5);
  }
  else {
    cVar3 = (**(code **)(**(long **)&this->field_0x88 + 0x18))
                      (*(undefined8 *)&this->field_0x88,pXVar5,pXVar4);
    if (cVar3 != '\x01') {
      XMLBuffer::set(pXVar4,pXVar5);
    }
    ReaderMgr::LastExtEntityInfo::LastExtEntityInfo(&lastInfo);
    xercesc_2_7::ReaderMgr::getLastExtEntityInfo((LastExtEntityInfo *)&this->field_0xb8);
    pXVar5 = lastInfo.systemId;
    systemId = XMLBuffer::getRawBuffer(pXVar4);
    XMLResourceIdentifier::XMLResourceIdentifier
              (&resourceIdentifier,ExternalEntity,systemId,(XMLCh *)0x0,pubId,pXVar5,
               (Locator *)&this->field_0xb8);
    srcToFill = (InputSource *)
                (**(code **)(**(long **)&this->field_0x88 + 0x30))
                          (*(undefined8 *)&this->field_0x88,&resourceIdentifier);
    XMLResourceIdentifier::_XMLResourceIdentifier(&resourceIdentifier);
  }
  if (srcToFill == (InputSource *)0x0) {
    if (this->field_0x25 == '\0') {
      ReaderMgr::LastExtEntityInfo::LastExtEntityInfo(&lastInfo);
      xercesc_2_7::ReaderMgr::getLastExtEntityInfo((LastExtEntityInfo *)&this->field_0xb8);
      xercesc_2_7::XMLURL::XMLURL
                ((XMLURL *)&resourceIdentifier,*(MemoryManager **)&this->field_0x168);
      pXVar5 = XMLBuffer::getRawBuffer(pXVar4);
      cVar3 = xercesc_2_7::XMLURL::setURL
                        ((ushort *)&resourceIdentifier,lastInfo.systemId,(XMLURL *)pXVar5);
      if ((cVar3 == '\x01') && (cVar3 = xercesc_2_7::XMLURL::isRelative(), cVar3 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (this->field_0x10 == '\x01') {
          pMVar6 = (MalformedURLException *)__cxa_allocate_exception(0x30);
          MalformedURLException::MalformedURLException
                    (pMVar6,"SGXMLScanner.cpp",0xea4,URL_MalformedURL,
                     *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pMVar6,&MalformedURLException::typeinfo,
                      MalformedURLException::_MalformedURLException);
        }
        XMLBufBid::XMLBufBid(&ddSys,(XMLBufferMgr *)&this->field_0x170);
        this_00 = XMLBufBid::getBuffer(&ddSys);
        pXVar5 = XMLBuffer::getRawBuffer(pXVar4);
        xercesc_2_7::XMLUri::normalizeURI(pXVar5,this_00);
        pXVar5 = XMLBuffer::getRawBuffer(this_00);
        srcToFill = (InputSource *)
                    xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x168);
        xercesc_2_7::LocalFileInputSource::LocalFileInputSource
                  ((LocalFileInputSource *)srcToFill,lastInfo.systemId,pXVar5,
                   *(MemoryManager **)&this->field_0x168);
        XMLBufBid::_XMLBufBid(&ddSys);
      }
      else {
        if ((this->field_0x10 == '\0') ||
           (cVar3 = xercesc_2_7::XMLURL::hasInvalidChar(), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pMVar6 = (MalformedURLException *)__cxa_allocate_exception(0x30);
          MalformedURLException::MalformedURLException
                    (pMVar6,"SGXMLScanner.cpp",0xea9,URL_MalformedURL,
                     *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pMVar6,&MalformedURLException::typeinfo,
                      MalformedURLException::_MalformedURLException);
        }
        srcToFill = (InputSource *)
                    xercesc_2_7::XMemory::operator_new(0x88,*(MemoryManager **)&this->field_0x168);
        xercesc_2_7::URLInputSource::URLInputSource
                  ((URLInputSource *)srcToFill,(XMLURL *)&resourceIdentifier,
                   *(MemoryManager **)&this->field_0x168);
      }
      xercesc_2_7::XMLURL::_XMLURL((XMLURL *)&resourceIdentifier);
    }
    else {
      srcToFill = (InputSource *)0x0;
    }
  }
  XMLBufBid::_XMLBufBid(&bbSys);
  XMLBufBid::_XMLBufBid(&nnSys);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return srcToFill;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


Grammar * __thiscall
xercesc_2_7::SGXMLScanner::loadXMLSchemaGrammar(SGXMLScanner *this,InputSource *src,bool toCache)

{
  long lVar1;
  code *pcVar2;
  MemoryManager *pMVar3;
  XMLErrorReporter *pXVar4;
  XMLEntityHandler *pXVar5;
  undefined uVar6;
  bool bVar7;
  long *plVar8;
  DOMElement *pDVar9;
  long *plVar10;
  undefined8 uVar11;
  ushort *puVar12;
  PSVIHandler *pPVar13;
  XSModel *pXVar14;
  long in_FS_OFFSET;
  bool flag;
  DOMDocument *document;
  DOMElement *root;
  SchemaGrammar *grammar;
  XMLSchemaDescription *gramDesc;
  XSDDOMParser parser;
  TraverseSchema traverseSchema;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this->fSchemaValidator + 0x30))(this->fSchemaValidator);
  SchemaValidator::setErrorReporter(this->fSchemaValidator,*(XMLErrorReporter **)&this->field_0x90);
  SchemaValidator::setExitOnFirstFatal(this->fSchemaValidator,(bool)this->field_0x13);
  SchemaValidator::setGrammarResolver
            (this->fSchemaValidator,*(GrammarResolver **)&this->field_0x118);
  if (this->field_0x19 != '\0') {
    (**(code **)(**(long **)&this->field_0x108 + 0x30))(*(undefined8 *)&this->field_0x108);
  }
  xercesc_2_7::XSDDOMParser::XSDDOMParser
            (&parser,(XMLValidator *)0x0,*(MemoryManager **)&this->field_0x168,(XMLGrammarPool *)0x0
            );
  xercesc_2_7::AbstractDOMParser::setValidationScheme((int)register0x00000020 - 0x3c8);
  xercesc_2_7::AbstractDOMParser::setDoNamespaces(true);
  xercesc_2_7::XSDDOMParser::setUserEntityHandler((XMLEntityHandler *)&parser);
  xercesc_2_7::XSDDOMParser::setUserErrorReporter((XMLErrorReporter *)&parser);
  uVar6 = (**(code **)(*(long *)src + 0x30))(src);
  (**(code **)(*(long *)src + 0x50))(src,0);
  xercesc_2_7::AbstractDOMParser::parse((InputSource *)&parser);
  (**(code **)(*(long *)src + 0x50))(src,uVar6);
  bVar7 = XSDDOMParser::getSawFatal(&parser);
  if ((bVar7 == false) || (this->field_0x13 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    xercesc_2_7::XMLScanner::emitError((Codes)this);
  }
  plVar8 = (long *)xercesc_2_7::AbstractDOMParser::getDocument();
  if (plVar8 != (long *)0x0) {
    pDVar9 = (DOMElement *)(**(code **)(*plVar8 + 0x68))(plVar8);
    if (pDVar9 != (DOMElement *)0x0) {
      plVar8 = (long *)xercesc_2_7::XMemory::operator_new
                                 (0xa0,*(MemoryManager **)&this->field_0x120);
      xercesc_2_7::SchemaGrammar::SchemaGrammar
                ((SchemaGrammar *)plVar8,*(MemoryManager **)&this->field_0x120);
      plVar10 = (long *)(**(code **)(*plVar8 + 0xb0))(plVar8);
      (**(code **)(*plVar10 + 0x68))(plVar10,3);
      pcVar2 = *(code **)(*plVar10 + 0x78);
      uVar11 = (**(code **)(*(long *)src + 0x28))(src);
      (*pcVar2)(plVar10,uVar11);
      pMVar3 = *(MemoryManager **)&this->field_0x168;
      pXVar4 = *(XMLErrorReporter **)&this->field_0x90;
      pXVar5 = *(XMLEntityHandler **)&this->field_0x88;
      puVar12 = (ushort *)(**(code **)(*(long *)src + 0x28))(src);
      xercesc_2_7::TraverseSchema::TraverseSchema
                (&traverseSchema,pDVar9,*(XMLStringPool **)&this->field_0x138,
                 (SchemaGrammar *)plVar8,*(GrammarResolver **)&this->field_0x118,
                 &this->super_XMLScanner,puVar12,pXVar5,pXVar4,pMVar3);
      if (this->field_0x18 != '\0') {
        (**(code **)(**(long **)&this->field_0x108 + 0x58))
                  (*(undefined8 *)&this->field_0x108,plVar8);
        (**(code **)(**(long **)&this->field_0x108 + 0x20))(*(undefined8 *)&this->field_0x108,0,1);
      }
      if (toCache != false) {
        xercesc_2_7::GrammarResolver::cacheGrammars();
      }
      pPVar13 = XMLScanner::getPSVIHandler(&this->super_XMLScanner);
      if (pPVar13 != (PSVIHandler *)0x0) {
        pXVar14 = (XSModel *)xercesc_2_7::GrammarResolver::getXSModel();
        this->fModel = pXVar14;
      }
      xercesc_2_7::TraverseSchema::_TraverseSchema(&traverseSchema);
      goto LAB_0010a91f;
    }
  }
  plVar8 = (long *)0x0;
LAB_0010a91f:
  xercesc_2_7::XSDDOMParser::_XSDDOMParser(&parser);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (Grammar *)plVar8;
}


bool __thiscall
xercesc_2_7::SGXMLScanner::basicAttrValueScan(SGXMLScanner *this,XMLCh *attrName,XMLBuffer *toFill)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  XMLReader *this_00;
  UnexpectedEOFException *this_01;
  Codes CVar6;
  long in_FS_OFFSET;
  bool escaped;
  XMLCh quoteCh;
  XMLCh firstCh;
  XMLCh secondCh;
  XMLCh nextCh;
  uint curReader;
  EndOfEntityException *anon_var_0;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toFill);
  cVar2 = xercesc_2_7::ReaderMgr::skipIfQuote((ushort *)&this->field_0xb8);
  if (cVar2 == '\x01') {
    curReader = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
LAB_0010aa28:
    do {
      nextCh = xercesc_2_7::ReaderMgr::getNextChar();
      CVar6 = (Codes)this;
      if (nextCh == quoteCh) {
        uVar5 = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
        if (curReader == uVar5) {
          bVar3 = true;
          goto LAB_0010acac;
        }
        uVar5 = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
        if (uVar5 < curReader) goto code_r0x0010ac76;
      }
      else {
        if (nextCh == 0x26) {
          iVar4 = (**(code **)(*(long *)this + 0x68))(this,1,&firstCh,&secondCh,&escaped);
          if (iVar4 == 1) {
            if (escaped != false) {
              XMLBuffer::append(toFill,0xffff);
            }
            XMLBuffer::append(toFill,firstCh);
            if (secondCh != 0) {
              XMLBuffer::append(toFill,secondCh);
            }
          }
          goto LAB_0010aa28;
        }
        if ((nextCh < 0xd800) || (0xdfff < nextCh)) {
          this_00 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
          bVar3 = XMLReader::isXMLChar(this_00,nextCh);
          if (bVar3 != true) {
            if (nextCh == 0) {
              this_01 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
              UnexpectedEOFException::UnexpectedEOFException
                        (this_01,"SGXMLScanner.cpp",0xf34,Gen_UnexpectedEOF,
                         *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
              __cxa_throw(this_01,&UnexpectedEOFException::typeinfo,
                          UnexpectedEOFException::_UnexpectedEOFException);
            }
            xercesc_2_7::XMLString::binToText
                      ((uint)nextCh,tmpBuf,8,0x10,*(MemoryManager **)&this->field_0x168);
            xercesc_2_7::XMLScanner::emitError(CVar6,(ushort *)0xda,attrName,tmpBuf,(ushort *)0x0);
          }
        }
        else if (nextCh < 0xdc00) {
          XMLBuffer::append(toFill,nextCh);
          nextCh = xercesc_2_7::ReaderMgr::getNextChar();
          if ((nextCh < 0xdc00) || (0xdfff < nextCh)) {
            xercesc_2_7::XMLScanner::emitError(CVar6);
          }
        }
        else {
          xercesc_2_7::XMLScanner::emitError(CVar6);
        }
      }
      XMLBuffer::append(toFill,nextCh);
    } while( true );
  }
  bVar3 = false;
LAB_0010acac:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010ac76:
  xercesc_2_7::XMLScanner::emitError(CVar6);
  bVar3 = false;
  goto LAB_0010acac;
}


void __thiscall xercesc_2_7::SGXMLScanner::scanCDSection(SGXMLScanner *this)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  XMLCh toCheck;
  short sVar8;
  int iVar9;
  uint uVar10;
  ComplexTypeInfo *this_00;
  XMLElementDecl **ppXVar11;
  UnexpectedEOFException *this_01;
  XMLReader *pXVar12;
  ushort *this_02;
  XMLCh *pXVar13;
  Codes CVar14;
  long in_FS_OFFSET;
  bool emittedError;
  bool gotLeadingSurrogate;
  XMLCh nextCh;
  CharDataOpts charOpts;
  uint xsLen;
  ModelTypes modelType;
  XMLCh *xsNormalized;
  ComplexTypeInfo *currType;
  StackElem *topElem;
  DatatypeValidator *tempDV;
  XMLBufBid bbCData;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = xercesc_2_7::ReaderMgr::skippedChar((short)this + 0xb8);
  CVar14 = (Codes)this;
  if (cVar5 != '\x01') {
    xercesc_2_7::XMLScanner::emitError(CVar14);
    xercesc_2_7::ReaderMgr::skipPastSpaces((bool)((char)this + -0x48));
    cVar5 = xercesc_2_7::ReaderMgr::skippedChar((short)this + 0xb8);
    if (cVar5 != '\x01') {
LAB_0010b358:
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  XMLBufBid::XMLBufBid(&bbCData,(XMLBufferMgr *)&this->field_0x170);
  bVar4 = false;
  bVar7 = false;
  charOpts = AllCharData;
  this_00 = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
  if (this_00 != (ComplexTypeInfo *)0x0) {
    iVar9 = ComplexTypeInfo::getContentType(this_00);
    if (iVar9 == 4) {
      charOpts = SpacesOk;
    }
    else if (iVar9 == 0) {
      charOpts = NoCharData;
    }
  }
  ppXVar11 = (XMLElementDecl **)xercesc_2_7::ElemStack::topElement();
  do {
    toCheck = xercesc_2_7::ReaderMgr::getNextChar();
    if (toCheck == 0) {
      xercesc_2_7::XMLScanner::emitError(CVar14);
      this_01 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
      UnexpectedEOFException::UnexpectedEOFException
                (this_01,"SGXMLScanner.cpp",0xfca,Gen_UnexpectedEOF,
                 *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_01,&UnexpectedEOFException::typeinfo,
                  UnexpectedEOFException::_UnexpectedEOFException);
    }
    if ((this->field_0x18 == '\0') || (this->field_0x16 == '\0')) {
LAB_0010af0c:
      bVar6 = false;
    }
    else {
      pXVar12 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
      bVar6 = XMLReader::isWhitespace(pXVar12,toCheck);
      if (bVar6 == false) goto LAB_0010af0c;
      bVar6 = true;
    }
    if (bVar6) {
      bVar6 = XMLElementDecl::isExternal(*ppXVar11);
      if ((bVar6 != false) && (charOpts == SpacesOk)) {
        xercesc_2_7::XMLValidator::emitError((Codes)*(undefined8 *)&this->field_0x108);
        XMLScanner::getPSVIHandler(&this->super_XMLScanner);
      }
    }
    if (toCheck == 0x5d) {
      bVar6 = ReaderMgr::skippedString((ReaderMgr *)&this->field_0xb8,scanCDSection::CDataClose);
      if (bVar6 == false) goto LAB_0010af89;
      bVar6 = true;
    }
    else {
LAB_0010af89:
      bVar6 = false;
    }
    if (bVar6) {
      if (bVar7) {
        xercesc_2_7::XMLScanner::emitError(CVar14);
      }
      xsLen = XMLBufBid::getLen(&bbCData);
      xsNormalized = XMLBufBid::getRawBuffer(&bbCData);
      if (this->field_0x18 != '\0') {
        this_02 = (ushort *)
                  SchemaValidator::getCurrentDatatypeValidator
                            (*(SchemaValidator **)&this->field_0x108);
        if (this_02 == (ushort *)0x0) {
LAB_0010b01b:
          bVar7 = false;
        }
        else {
          sVar8 = DatatypeValidator::getWSFacet((DatatypeValidator *)this_02);
          if (sVar8 == 0) goto LAB_0010b01b;
          bVar7 = true;
        }
        if (bVar7) {
          xercesc_2_7::SchemaValidator::normalizeWhiteSpace
                    (*(DatatypeValidator **)&this->field_0x108,this_02,(XMLBuffer *)xsNormalized);
          xsNormalized = XMLBuffer::getRawBuffer((XMLBuffer *)&this->field_0x278);
          xsLen = XMLBuffer::getLen((XMLBuffer *)&this->field_0x278);
        }
        SchemaValidator::setDatatypeBuffer(*(SchemaValidator **)&this->field_0x108,xsNormalized);
        if (charOpts != AllCharData) {
          xercesc_2_7::XMLValidator::emitError((Codes)*(undefined8 *)&this->field_0x108);
          XMLScanner::getPSVIHandler(&this->super_XMLScanner);
        }
      }
      bVar7 = toCheckIdentityConstraint(this);
      if (bVar7 == false) {
LAB_0010b105:
        bVar7 = false;
      }
      else {
        iVar9 = IdentityConstraintHandler::getMatcherCount(this->fICHandler);
        if (iVar9 == 0) goto LAB_0010b105;
        bVar7 = true;
      }
      if (bVar7) {
        XMLBuffer::append(&this->fContent,xsNormalized,xsLen);
      }
      if (*(long *)&this->field_0x78 != 0) {
        if (this->field_0x20 == '\0') {
          uVar2 = *(undefined8 *)&this->field_0x78;
          pcVar3 = *(code **)(**(long **)&this->field_0x78 + 0x10);
          uVar10 = XMLBufBid::getLen(&bbCData);
          pXVar13 = XMLBufBid::getRawBuffer(&bbCData);
          (*pcVar3)(uVar2,pXVar13,uVar10,1);
        }
        else {
          (**(code **)(**(long **)&this->field_0x78 + 0x10))
                    (*(undefined8 *)&this->field_0x78,xsNormalized,xsLen,1);
        }
      }
      XMLBufBid::_XMLBufBid(&bbCData);
      goto LAB_0010b358;
    }
    if (!bVar4) {
      if ((toCheck < 0xd800) || (0xdbff < toCheck)) {
        if ((toCheck < 0xdc00) || (0xdfff < toCheck)) {
          if (bVar7) {
            xercesc_2_7::XMLScanner::emitError(CVar14);
          }
          else {
            pXVar12 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
            bVar7 = XMLReader::isXMLChar(pXVar12,toCheck);
            if (bVar7 != true) {
              xercesc_2_7::XMLString::binToText
                        ((uint)toCheck,tmpBuf,8,0x10,*(MemoryManager **)&this->field_0x168);
              xercesc_2_7::XMLScanner::emitError
                        (CVar14,(ushort *)0xc4,tmpBuf,(ushort *)0x0,(ushort *)0x0);
              bVar4 = true;
            }
          }
        }
        else if (!bVar7) {
          xercesc_2_7::XMLScanner::emitError(CVar14);
        }
        bVar7 = false;
      }
      else if (bVar7) {
        xercesc_2_7::XMLScanner::emitError(CVar14);
      }
      else {
        bVar7 = true;
      }
    }
    XMLBufBid::append(&bbCData,toCheck);
  } while( true );
}


void __thiscall xercesc_2_7::SGXMLScanner::scanCharData(SGXMLScanner *this,XMLBuffer *toUse)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  XMLReader *pXVar4;
  Codes CVar5;
  long in_FS_OFFSET;
  bool escaped;
  bool gotLeadingSurrogate;
  bool notDone;
  bool isSpaces;
  XMLCh nextCh;
  XMLCh secondCh;
  States curState;
  CharDataOpts charOpts;
  uint len;
  ModelTypes modelType;
  XMLCh *rawBuf;
  StackElem *topElem;
  ComplexTypeInfo *currType;
  EndOfEntityException *toCatch;
  ThrowEOEJanitor jan;
  ThrowEOEJanitor jan_1;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toUse);
  ThrowEOEJanitor::ThrowEOEJanitor(&jan,(ReaderMgr *)&this->field_0xb8,true);
  secondCh = 0;
  curState = State_Waiting;
  escaped = false;
  gotLeadingSurrogate = false;
  notDone = true;
  do {
    if (notDone == false) {
      if ((this->field_0x18 != '\0') && (this->field_0x16 != '\0')) {
        rawBuf = XMLBuffer::getRawBuffer(toUse);
        len = XMLBuffer::getLen(toUse);
        pXVar4 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
        isSpaces = (bool)xercesc_2_7::XMLReader::containsWhiteSpace((ushort *)pXVar4,(uint)rawBuf);
        if (isSpaces != false) {
          topElem = (StackElem *)xercesc_2_7::ElemStack::topElement();
          bVar2 = XMLElementDecl::isExternal(topElem->fThisElement);
          if (bVar2 != false) {
            charOpts = AllCharData;
            currType = SchemaValidator::getCurrentTypeInfo(*(SchemaValidator **)&this->field_0x108);
            if ((currType != (ComplexTypeInfo *)0x0) &&
               (modelType = ComplexTypeInfo::getContentType(currType), modelType == Children)) {
              charOpts = SpacesOk;
            }
            if (charOpts == SpacesOk) {
              xercesc_2_7::XMLValidator::emitError((Codes)*(undefined8 *)&this->field_0x108);
              XMLScanner::getPSVIHandler(&this->super_XMLScanner);
            }
          }
        }
      }
      (**(code **)(*(long *)this + 0x80))(this,toUse);
      ThrowEOEJanitor::_ThrowEOEJanitor(&jan);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
LAB_0010b40a:
    if ((curState == State_Waiting) && (gotLeadingSurrogate != true)) {
      ReaderMgr::movePlainContentChars((ReaderMgr *)&this->field_0xb8,toUse);
    }
    bVar2 = ReaderMgr::getNextCharIfNot((ReaderMgr *)&this->field_0xb8,0x3c,&nextCh);
    CVar5 = (Codes)this;
    if (bVar2 == true) {
      escaped = false;
      if (nextCh == 0x26) break;
      if ((nextCh < 0xd800) || (0xdbff < nextCh)) {
        if ((nextCh < 0xdc00) || (0xdfff < nextCh)) {
          if (gotLeadingSurrogate != false) {
            xercesc_2_7::XMLScanner::emitError(CVar5);
          }
          pXVar4 = ReaderMgr::getCurrentReader((ReaderMgr *)&this->field_0xb8);
          bVar2 = XMLReader::isXMLChar(pXVar4,nextCh);
          if (bVar2 != true) {
            xercesc_2_7::XMLString::binToText
                      ((uint)nextCh,tmpBuf,8,0x10,*(MemoryManager **)&this->field_0x168);
            xercesc_2_7::XMLScanner::emitError
                      (CVar5,(ushort *)0xc4,tmpBuf,(ushort *)0x0,(ushort *)0x0);
          }
        }
        else if (gotLeadingSurrogate != true) {
          xercesc_2_7::XMLScanner::emitError(CVar5);
        }
        gotLeadingSurrogate = false;
      }
      else if (gotLeadingSurrogate == false) {
        gotLeadingSurrogate = true;
      }
      else {
        xercesc_2_7::XMLScanner::emitError(CVar5);
      }
      goto LAB_0010b6a3;
    }
    if (gotLeadingSurrogate != false) {
      xercesc_2_7::XMLScanner::emitError(CVar5);
    }
    notDone = false;
  } while( true );
  (**(code **)(*(long *)this + 0x80))(this,toUse);
  ThrowEOEJanitor::ThrowEOEJanitor(&jan_1,(ReaderMgr *)&this->field_0xb8,false);
  iVar3 = (**(code **)(*(long *)this + 0x68))(this,0,&nextCh,&secondCh,&escaped);
  if (iVar3 != 1) {
    gotLeadingSurrogate = false;
  }
  ThrowEOEJanitor::_ThrowEOEJanitor(&jan_1);
  if (iVar3 == 1) {
LAB_0010b6a3:
    if (escaped == true) {
      curState = State_Waiting;
    }
    else if (nextCh == 0x5d) {
      if (curState == State_Waiting) {
        curState = State_GotOne;
      }
      else if (curState == State_GotOne) {
        curState = State_GotTwo;
      }
    }
    else if (nextCh == 0x3e) {
      if (curState == State_GotTwo) {
        xercesc_2_7::XMLScanner::emitError(CVar5);
      }
      curState = State_Waiting;
    }
    else {
      curState = State_Waiting;
    }
    XMLBuffer::append(toUse,nextCh);
    if (secondCh != 0) {
      XMLBuffer::append(toUse,secondCh);
      secondCh = 0;
    }
  }
  goto LAB_0010b40a;
}


EntityExpRes __thiscall
xercesc_2_7::SGXMLScanner::scanEntityRef
          (SGXMLScanner *this,bool param_1,XMLCh *firstCh,XMLCh *secondCh,bool *escaped)

{
  long lVar1;
  ValueHashTableOf_short_unsigned_int_ *pVVar2;
  MemoryManager *manager;
  char cVar3;
  bool bVar4;
  uint uVar5;
  XMLBuffer *toFill;
  XMLCh *pXVar6;
  ushort *puVar7;
  EntityExpRes EVar8;
  Codes CVar9;
  long in_FS_OFFSET;
  int colonPosition;
  uint curReader;
  XMLBufBid bbName;
  XMLCh expLimStr [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *secondCh = 0;
  *escaped = false;
  curReader = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
  cVar3 = xercesc_2_7::ReaderMgr::skippedChar((short)this + 0xb8);
  CVar9 = (Codes)this;
  if (cVar3 == '\0') {
    XMLBufBid::XMLBufBid(&bbName,(XMLBufferMgr *)&this->field_0x170);
    toFill = XMLBufBid::getBuffer(&bbName);
    bVar4 = ReaderMgr::getQName((ReaderMgr *)&this->field_0xb8,toFill,&colonPosition);
    if (bVar4 == true) {
      cVar3 = xercesc_2_7::ReaderMgr::skippedChar((short)this + 0xb8);
      if (cVar3 != '\x01') {
        pXVar6 = XMLBufBid::getRawBuffer(&bbName);
        xercesc_2_7::XMLScanner::emitError(CVar9,(ushort *)0xe5,pXVar6,(ushort *)0x0,(ushort *)0x0);
      }
      uVar5 = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
      if (curReader != uVar5) {
        xercesc_2_7::XMLScanner::emitError(CVar9);
      }
      pVVar2 = this->fEntityTable;
      pXVar6 = XMLBufBid::getRawBuffer(&bbName);
      bVar4 = ValueHashTableOf<short_unsigned_int>::containsKey(pVVar2,pXVar6);
      if (bVar4 == true) {
        if ((*(long *)&this->field_0x158 == 0) ||
           (*(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1,
           *(uint *)&this->field_0x30 <= *(uint *)&this->field_0x2c)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          xercesc_2_7::XMLString::binToText
                    (*(uint *)&this->field_0x2c,expLimStr,0xf,10,
                     *(MemoryManager **)&this->field_0x168);
          xercesc_2_7::XMLScanner::emitError
                    (CVar9,(ushort *)0xac,expLimStr,(ushort *)0x0,(ushort *)0x0);
          *(undefined4 *)&this->field_0x30 = 0;
        }
        manager = XMLPlatformUtils::fgMemoryManager;
        pVVar2 = this->fEntityTable;
        pXVar6 = XMLBufBid::getRawBuffer(&bbName);
        puVar7 = ValueHashTableOf<short_unsigned_int>::get(pVVar2,pXVar6,manager);
        *firstCh = *puVar7;
        *escaped = true;
        EVar8 = EntityExp_Returned;
      }
      else {
        if ((this->field_0x16 != '\0') || (this->field_0x17 != '\0')) {
          pXVar6 = XMLBufBid::getRawBuffer(&bbName);
          xercesc_2_7::XMLScanner::emitError
                    (CVar9,(ushort *)0xe3,pXVar6,(ushort *)0x0,(ushort *)0x0);
        }
        EVar8 = EntityExp_Failed;
      }
    }
    else {
      bVar4 = XMLBufBid::isEmpty(&bbName);
      if (bVar4 == false) {
        pXVar6 = XMLBufBid::getRawBuffer(&bbName);
        xercesc_2_7::XMLScanner::emitError(CVar9,(ushort *)0x136,pXVar6,(ushort *)0x0,(ushort *)0x0)
        ;
      }
      else {
        xercesc_2_7::XMLScanner::emitError(CVar9);
      }
      EVar8 = EntityExp_Failed;
    }
    XMLBufBid::_XMLBufBid(&bbName);
  }
  else {
    cVar3 = xercesc_2_7::XMLScanner::scanCharRef((ushort *)this,firstCh);
    if (cVar3 == '\x01') {
      *escaped = true;
      uVar5 = ReaderMgr::getCurrentReaderNum((ReaderMgr *)&this->field_0xb8);
      if (curReader != uVar5) {
        xercesc_2_7::XMLScanner::emitError(CVar9);
      }
      EVar8 = EntityExp_Returned;
    }
    else {
      EVar8 = EntityExp_Failed;
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return EVar8;
}


bool __thiscall
xercesc_2_7::SGXMLScanner::switchGrammar(SGXMLScanner *this,XMLCh *newGrammarNameSpace)

{
  bool bVar1;
  GrammarType GVar2;
  RuntimeException *this_00;
  Grammar *tempGrammar;
  
  tempGrammar = (Grammar *)xercesc_2_7::GrammarResolver::getGrammar(*(ushort **)&this->field_0x118);
  if (tempGrammar == (Grammar *)0x0) {
    tempGrammar = (Grammar *)this->fSchemaGrammar;
  }
  if (tempGrammar == (Grammar *)0x0) {
    bVar1 = false;
  }
  else {
    *(Grammar **)&this->field_0x128 = tempGrammar;
    GVar2 = (**(code **)(**(long **)&this->field_0x128 + 0x28))(*(undefined8 *)&this->field_0x128);
    this->fGrammarType = GVar2;
    if (this->fGrammarType == DTDGrammarType) {
      this_00 = (RuntimeException *)__cxa_allocate_exception(0x30);
      RuntimeException::RuntimeException
                (this_00,"SGXMLScanner.cpp",0x119e,Gen_NoDTDValidator,
                 *(MemoryManager **)&this->field_0x168);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
    }
    (**(code **)(**(long **)&this->field_0x108 + 0x58))
              (*(undefined8 *)&this->field_0x108,*(undefined8 *)&this->field_0x128);
    bVar1 = true;
  }
  return bVar1;
}


bool __thiscall
xercesc_2_7::SGXMLScanner::laxElementValidation
          (SGXMLScanner *this,QName *element,ContentLeafNameTypeVector *cv,XMLContentModel *cm,
          uint parentElemDepth)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  QName *this_00;
  XMLCh *str2;
  XMLCh *str1;
  long in_FS_OFFSET;
  bool skipThisOne;
  bool laxThisOne;
  bool anyEncountered;
  uint i;
  uint elementURI;
  uint currState;
  uint leafCount;
  uint uri;
  NodeTypes type;
  uint nextState;
  QName *fElemMap;
  SubstitutionGroupComparator comparator;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = false;
  laxThisOne = false;
  uVar7 = QName::getURI(element);
  uVar1 = this->fElemState[parentElemDepth];
  if (uVar1 == XMLContentModel::gInvalidTrans) {
    laxThisOne = false;
    goto LAB_0010c1e5;
  }
  SubstitutionGroupComparator::SubstitutionGroupComparator
            (&comparator,*(GrammarResolver **)&this->field_0x118,
             *(XMLStringPool **)&this->field_0x138);
  if (cv == (ContentLeafNameTypeVector *)0x0) {
LAB_0010c1a7:
    if (bVar4) {
      this->field_0x18 = 0;
      ElemStack::setValidationFlag((ElemStack *)&this->field_0x2a0,(bool)this->field_0x18);
    }
  }
  else {
    i = 0;
    uVar8 = xercesc_2_7::ContentLeafNameTypeVector::getLeafCount();
    for (; i < uVar8; i = i + 1) {
      this_00 = (QName *)xercesc_2_7::ContentLeafNameTypeVector::getLeafNameAt((uint)cv);
      uVar9 = QName::getURI(this_00);
      bVar3 = false;
      uVar10 = xercesc_2_7::ContentLeafNameTypeVector::getLeafTypeAt((uint)cv);
      if (uVar10 == 0) {
        if (uVar9 == uVar7) {
          str2 = QName::getLocalPart(element);
          str1 = QName::getLocalPart(this_00);
          bVar5 = XMLString::equals(str1,str2);
          if (bVar5 == false) goto LAB_0010c02e;
LAB_0010c049:
          bVar5 = true;
        }
        else {
LAB_0010c02e:
          cVar6 = xercesc_2_7::SubstitutionGroupComparator::isEquivalentTo
                            ((QName *)&comparator,element);
          if (cVar6 != '\0') goto LAB_0010c049;
          bVar5 = false;
        }
        if ((bVar5) &&
           (uVar9 = (*cm->_vptr_XMLContentModel[6])(cm,(ulong)uVar1,(ulong)i),
           uVar9 != XMLContentModel::gInvalidTrans)) {
          this->fElemState[parentElemDepth] = uVar9;
          break;
        }
      }
      else if ((uVar10 & 0xf) == 6) {
        bVar3 = true;
      }
      else if ((uVar10 & 0xf) == 7) {
        if (uVar9 != uVar7) {
          bVar3 = true;
        }
      }
      else if (((uVar10 & 0xf) == 8) && (uVar9 == uVar7)) {
        bVar3 = true;
      }
      if ((bVar3) &&
         (uVar9 = (*cm->_vptr_XMLContentModel[6])(cm,(ulong)uVar1,(ulong)i),
         uVar9 != XMLContentModel::gInvalidTrans)) {
        this->fElemState[parentElemDepth] = uVar9;
        if ((uVar10 == 0x26) || ((uVar10 == 0x28 || (uVar10 == 0x27)))) {
          bVar4 = true;
        }
        else if (((uVar10 == 0x16) || (uVar10 == 0x18)) || (uVar10 == 0x17)) {
          laxThisOne = true;
        }
        break;
      }
    }
    if (i != uVar8) goto LAB_0010c1a7;
    this->fElemState[parentElemDepth] = XMLContentModel::gInvalidTrans;
  }
  SubstitutionGroupComparator::_SubstitutionGroupComparator(&comparator);
LAB_0010c1e5:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return laxThisOne;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


bool __thiscall
xercesc_2_7::SGXMLScanner::anyAttributeValidation
          (SGXMLScanner *this,SchemaAttDef *attWildCard,uint uriId,bool *skipThisOne,
          bool *laxThisOne)

{
  bool bVar1;
  AttTypes AVar2;
  uint uVar3;
  DefAttTypes DVar4;
  QName *this_00;
  ValueVectorOf_unsigned_int_ *this_01;
  uint *puVar5;
  bool anyEncountered;
  uint i;
  AttTypes wildCardType;
  uint listSize;
  DefAttTypes defType;
  ValueVectorOf_unsigned_int_ *nameURIList;
  
  AVar2 = XMLAttDef::getType((XMLAttDef *)attWildCard);
  anyEncountered = false;
  *skipThisOne = false;
  *laxThisOne = false;
  if (AVar2 == Any_Any) {
    anyEncountered = true;
  }
  else if (AVar2 == Any_Other) {
    this_00 = SchemaAttDef::getAttName(attWildCard);
    uVar3 = QName::getURI(this_00);
    if ((uriId == uVar3) || (uriId == *(uint *)&this->field_0x34)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      anyEncountered = true;
    }
  }
  else if (AVar2 == Any_List) {
    this_01 = SchemaAttDef::getNamespaceList(attWildCard);
    if (this_01 == (ValueVectorOf_unsigned_int_ *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = ValueVectorOf<unsigned_int>::size(this_01);
    }
    if (uVar3 != 0) {
      for (i = 0; i < uVar3; i = i + 1) {
        puVar5 = ValueVectorOf<unsigned_int>::elementAt(this_01,i);
        if (uriId == *puVar5) {
          anyEncountered = true;
        }
      }
    }
  }
  if (anyEncountered != false) {
    DVar4 = XMLAttDef::getDefaultType((XMLAttDef *)attWildCard);
    if (DVar4 == ProcessContents_Skip) {
      *skipThisOne = true;
      XMLScanner::getPSVIHandler(&this->super_XMLScanner);
    }
    else if (DVar4 == ProcessContents_Lax) {
      *laxThisOne = true;
    }
  }
  return anyEncountered;
}


void __thiscall
xercesc_2_7::SGXMLScanner::endElementPSVI
          (SGXMLScanner *this,SchemaElementDecl *elemDecl,DatatypeValidator *memberDV)

{
  PSVIElement *pPVar1;
  ushort *puVar2;
  XSModel *pXVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  XMLCh *pXVar10;
  XSModel *pXVar11;
  XSTypeDefinition *pXVar12;
  undefined8 uVar13;
  bool isMixed;
  ASSESSMENT_TYPE validationAttempted;
  VALIDITY_STATE validity;
  ModelTypes modelType;
  XSTypeDefinition *typeDef;
  XMLCh *canonicalValue;
  
  validity = VALIDITY_NOTKNOWN;
  if ((this->fPSVIElemContext).fFullValidationDepth < (this->fPSVIElemContext).fElemDepth) {
    validationAttempted = VALIDATION_FULL;
  }
  else if ((this->fPSVIElemContext).fNoneValidationDepth < (this->fPSVIElemContext).fElemDepth) {
    validationAttempted = VALIDATION_NONE;
  }
  else {
    validationAttempted = VALIDATION_PARTIAL;
    (this->fPSVIElemContext).fNoneValidationDepth = (this->fPSVIElemContext).fElemDepth + -1;
    (this->fPSVIElemContext).fFullValidationDepth = (this->fPSVIElemContext).fNoneValidationDepth;
  }
  if ((this->field_0x18 == '\0') ||
     (bVar7 = XMLElementDecl::isDeclared((XMLElementDecl *)elemDecl), bVar7 == false)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    if ((this->fPSVIElemContext).fErrorOccurred == false) {
      validity = VALIDITY_VALID;
    }
    else {
      validity = VALIDITY_INVALID;
    }
  }
  typeDef = (XSTypeDefinition *)0x0;
  bVar7 = false;
  if ((this->fPSVIElemContext).fCurrentTypeInfo == (ComplexTypeInfo *)0x0) {
    if ((this->fPSVIElemContext).fCurrentDV != (DatatypeValidator *)0x0) {
      typeDef = (XSTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
    }
  }
  else {
    typeDef = (XSTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
    iVar8 = ComplexTypeInfo::getContentType((this->fPSVIElemContext).fCurrentTypeInfo);
    if ((iVar8 == 2) || (iVar8 == 3)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
  }
  canonicalValue = (XMLCh *)0x0;
  if ((((this->fPSVIElemContext).fNormalizedValue != (XMLCh *)0x0) && (!bVar7)) &&
     (validity == VALIDITY_VALID)) {
    if (memberDV == (DatatypeValidator *)0x0) {
      if ((this->fPSVIElemContext).fCurrentDV != (DatatypeValidator *)0x0) {
        canonicalValue =
             (XMLCh *)(**(code **)(*(long *)(this->fPSVIElemContext).fCurrentDV + 0x38))
                                ((this->fPSVIElemContext).fCurrentDV,
                                 (this->fPSVIElemContext).fNormalizedValue,
                                 *(undefined8 *)&this->field_0x168,0);
      }
    }
    else {
      canonicalValue =
           (XMLCh *)(**(code **)(*(long *)memberDV + 0x38))
                              (memberDV,(this->fPSVIElemContext).fNormalizedValue,
                               *(undefined8 *)&this->field_0x168,0);
    }
  }
  pPVar1 = this->fPSVIElement;
  puVar2 = (this->fPSVIElemContext).fNormalizedValue;
  pXVar10 = SchemaElementDecl::getDefaultValue(elemDecl);
  pXVar3 = this->fModel;
  if (memberDV == (DatatypeValidator *)0x0) {
    pXVar11 = (XSModel *)0x0;
  }
  else {
    pXVar11 = (XSModel *)xercesc_2_7::XSModel::getXSObject(this->fModel);
  }
  bVar7 = XMLElementDecl::isDeclared((XMLElementDecl *)elemDecl);
  if (bVar7 == false) {
    pXVar12 = (XSTypeDefinition *)0x0;
  }
  else {
    pXVar12 = (XSTypeDefinition *)xercesc_2_7::XSModel::getXSObject(this->fModel);
  }
  xercesc_2_7::PSVIElement::reset
            ((VALIDITY_STATE)pPVar1,validity,(ushort *)(ulong)validationAttempted,
             SUB81(*(undefined8 *)&this->field_0x140,0),
             (XSElementDeclaration *)(ulong)(this->fPSVIElemContext).fIsSpecified,pXVar12,
             (XSSimpleTypeDefinition *)typeDef,pXVar11,(ushort *)pXVar3,pXVar10,puVar2,
             (XSNotationDeclaration *)canonicalValue);
  uVar4 = *(undefined8 *)&this->field_0xa0;
  pcVar5 = *(code **)(**(long **)&this->field_0xa0 + 0x10);
  pPVar1 = this->fPSVIElement;
  uVar13 = *(undefined8 *)&this->field_0x138;
  pcVar6 = *(code **)(**(long **)&this->field_0x138 + 0x50);
  uVar9 = XMLElementDecl::getURI((XMLElementDecl *)elemDecl);
  uVar13 = (*pcVar6)(uVar13,uVar9);
  pXVar10 = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
  (*pcVar5)(uVar4,pXVar10,uVar13,pPVar1);
  (this->fPSVIElemContext).fElemDepth = (this->fPSVIElemContext).fElemDepth + -1;
  return;
}


void __thiscall xercesc_2_7::SGXMLScanner::resetPSVIElemContext(SGXMLScanner *this)

{
  (this->fPSVIElemContext).fIsSpecified = false;
  (this->fPSVIElemContext).fErrorOccurred = false;
  (this->fPSVIElemContext).fElemDepth = -1;
  (this->fPSVIElemContext).fFullValidationDepth = -1;
  (this->fPSVIElemContext).fNoneValidationDepth = -1;
  (this->fPSVIElemContext).fCurrentDV = (DatatypeValidator *)0x0;
  (this->fPSVIElemContext).fCurrentTypeInfo = (ComplexTypeInfo *)0x0;
  (this->fPSVIElemContext).fNormalizedValue = (XMLCh *)0x0;
  return;
}


void __thiscall xercesc_2_7::XMemory::XMemory(XMemory *this)

{
  return;
}


XMLCh * __thiscall xercesc_2_7::XMLException::getMessage(XMLException *this)

{
  return *(XMLCh **)(this + 0x20);
}


ErrTypes __thiscall xercesc_2_7::XMLException::getErrorType(XMLException *this)

{
  ErrTypes EVar1;
  
  if ((*(int *)(this + 8) < 1) || (4 < *(int *)(this + 8))) {
    if ((*(int *)(this + 8) < 5) || (0x191 < *(int *)(this + 8))) {
      if ((*(int *)(this + 8) < 0x192) || (0x193 < *(int *)(this + 8))) {
        EVar1 = ErrTypes_Unknown;
      }
      else {
        EVar1 = ErrType_Error;
      }
    }
    else {
      EVar1 = ErrType_Fatal;
    }
  }
  else {
    EVar1 = ErrType_Warning;
  }
  return EVar1;
}


void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  this->_vptr_XMLDeleter = (anon_subr_int_varargs **)&PTR__XMLDeleter_00114848;
  return;
}


void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  _XMLDeleter(this);
  operator_delete(this);
  return;
}


void __thiscall
xercesc_2_7::XMLBuffer::XMLBuffer(XMLBuffer *this,uint capacity,MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fIndex = 0;
  this->fCapacity = capacity;
  this->fFullSize = 0;
  this->fUsed = false;
  this->fMemoryManager = manager;
  this->fFullHandler = (XMLBufferFullHandler *)0x0;
  this->fBuffer = (XMLCh *)0x0;
  iVar1 = (*manager->_vptr_MemoryManager[2])(manager,(ulong)(capacity + 1) * 2);
  this->fBuffer = (XMLCh *)CONCAT44(extraout_var,iVar1);
  *this->fBuffer = 0;
  return;
}


void __thiscall xercesc_2_7::XMLBuffer::_XMLBuffer(XMLBuffer *this)

{
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBuffer);
  return;
}


void __thiscall xercesc_2_7::XMLBuffer::append(XMLBuffer *this,XMLCh toAppend)

{
  uint uVar1;
  
  if (this->fIndex == this->fCapacity) {
    xercesc_2_7::XMLBuffer::insureCapacity((uint)this);
  }
  uVar1 = this->fIndex;
  this->fIndex = uVar1 + 1;
  this->fBuffer[uVar1] = toAppend;
  return;
}


void __thiscall xercesc_2_7::XMLBuffer::append(XMLBuffer *this,XMLCh *chars,uint count)

{
  if (count == 0) {
    append(this,chars);
  }
  else {
    if (this->fCapacity <= this->fIndex + count) {
      xercesc_2_7::XMLBuffer::insureCapacity((uint)this);
    }
    memcpy(this->fBuffer + this->fIndex,chars,(ulong)count * 2);
    this->fIndex = this->fIndex + count;
  }
  return;
}


void __thiscall xercesc_2_7::XMLBuffer::append(XMLBuffer *this,XMLCh *chars)

{
  uint count;
  
  if ((chars != (XMLCh *)0x0) && (*chars != 0)) {
    for (count = 0; chars[count] != 0; count = count + 1) {
    }
    if (this->fCapacity <= this->fIndex + count) {
      xercesc_2_7::XMLBuffer::insureCapacity((uint)this);
    }
    memcpy(this->fBuffer + this->fIndex,chars,(ulong)count * 2);
    this->fIndex = this->fIndex + count;
  }
  return;
}


void __thiscall xercesc_2_7::XMLBuffer::set(XMLBuffer *this,XMLCh *chars,uint count)

{
  this->fIndex = 0;
  append(this,chars,count);
  return;
}


void __thiscall xercesc_2_7::XMLBuffer::set(XMLBuffer *this,XMLCh *chars)

{
  this->fIndex = 0;
  append(this,chars);
  return;
}


XMLCh * __thiscall xercesc_2_7::XMLBuffer::getRawBuffer(XMLBuffer *this)

{
  this->fBuffer[this->fIndex] = 0;
  return this->fBuffer;
}


XMLCh * __thiscall xercesc_2_7::XMLBuffer::getRawBuffer(XMLBuffer *this)

{
  this->fBuffer[this->fIndex] = 0;
  return this->fBuffer;
}


void __thiscall xercesc_2_7::XMLBuffer::reset(XMLBuffer *this)

{
  this->fIndex = 0;
  *this->fBuffer = 0;
  return;
}


uint __thiscall xercesc_2_7::XMLBuffer::getLen(XMLBuffer *this)

{
  return this->fIndex;
}


bool __thiscall xercesc_2_7::XMLBuffer::isEmpty(XMLBuffer *this)

{
  return this->fIndex == 0;
}


void __thiscall xercesc_2_7::XMLBufBid::XMLBufBid(XMLBufBid *this,XMLBufferMgr *srcMgr)

{
  XMLBuffer *pXVar1;
  
  XMemory::XMemory((XMemory *)this);
  pXVar1 = (XMLBuffer *)xercesc_2_7::XMLBufferMgr::bidOnBuffer();
  this->fBuffer = pXVar1;
  this->fMgr = srcMgr;
  return;
}


void __thiscall xercesc_2_7::XMLBufBid::_XMLBufBid(XMLBufBid *this)

{
  xercesc_2_7::XMLBufferMgr::releaseBuffer((XMLBuffer *)this->fMgr);
  return;
}


void __thiscall xercesc_2_7::XMLBufBid::append(XMLBufBid *this,XMLCh toAppend)

{
  XMLBuffer::append(this->fBuffer,toAppend);
  return;
}


XMLBuffer * __thiscall xercesc_2_7::XMLBufBid::getBuffer(XMLBufBid *this)

{
  return this->fBuffer;
}


XMLCh * __thiscall xercesc_2_7::XMLBufBid::getRawBuffer(XMLBufBid *this)

{
  this->fBuffer->fBuffer[this->fBuffer->fIndex] = 0;
  return this->fBuffer->fBuffer;
}


uint __thiscall xercesc_2_7::XMLBufBid::getLen(XMLBufBid *this)

{
  return this->fBuffer->fIndex;
}


bool __thiscall xercesc_2_7::XMLBufBid::isEmpty(XMLBufBid *this)

{
  return this->fBuffer->fIndex == 0;
}


void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_00114818;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


/* (LSDA) Type Table */

void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this,ArrayIndexOutOfBoundsException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_00114818;
  return;
}


void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this)

{
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_00114818;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this)

{
  void *in_RSI;
  
  _ArrayIndexOutOfBoundsException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


XMLException * __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::duplicate(ArrayIndexOutOfBoundsException *this)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  this_00 = (ArrayIndexOutOfBoundsException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  ArrayIndexOutOfBoundsException(this_00,this);
  return &this_00->super_XMLException;
}


/* (LSDA) Type Table */

XMLCh * __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::getType(ArrayIndexOutOfBoundsException *this)

{
  return (XMLCh *)&XMLUni::fgArrayIndexOutOfBoundsException_Name;
}


uint xercesc_2_7::XMLString::stringLen(XMLCh *src)

{
  uint uVar1;
  XMLCh *pszTmp;
  
  if ((src == (XMLCh *)0x0) || (*src == 0)) {
    uVar1 = 0;
  }
  else {
    for (pszTmp = src + 1; *pszTmp != 0; pszTmp = pszTmp + 1) {
    }
    uVar1 = (uint)((long)pszTmp - (long)src >> 1);
  }
  return uVar1;
}


XMLCh * xercesc_2_7::XMLString::replicate(XMLCh *toRep,MemoryManager *manager)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint len;
  XMLCh *ret;
  
  ret = (XMLCh *)0x0;
  if (toRep != (XMLCh *)0x0) {
    uVar1 = stringLen(toRep);
    iVar2 = (*manager->_vptr_MemoryManager[2])(manager,(ulong)(uVar1 + 1) * 2);
    ret = (XMLCh *)CONCAT44(extraout_var,iVar2);
    memcpy(ret,toRep,(ulong)(uVar1 + 1) * 2);
  }
  return ret;
}


bool xercesc_2_7::XMLString::startsWith(XMLCh *toTest,XMLCh *prefix)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = stringLen(prefix);
  iVar2 = xercesc_2_7::XMLString::compareNString(toTest,prefix,uVar1);
  return iVar2 == 0;
}


bool xercesc_2_7::XMLString::equals(XMLCh *str1,XMLCh *str2)

{
  bool bVar1;
  XMLCh *psz1;
  XMLCh *psz2;
  
  if ((str1 == (XMLCh *)0x0) || (psz1 = str1, psz2 = str2, str2 == (XMLCh *)0x0)) {
    if (((str1 == (XMLCh *)0x0) || (*str1 == 0)) && ((str2 == (XMLCh *)0x0 || (*str2 == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    for (; *psz1 == *psz2; psz1 = psz1 + 1) {
      if (*psz1 == 0) {
        return true;
      }
      psz2 = psz2 + 1;
    }
    bVar1 = false;
  }
  return bVar1;
}


void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__IllegalArgumentException_001147e8;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,IllegalArgumentException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__IllegalArgumentException_001147e8;
  return;
}


void __thiscall
xercesc_2_7::IllegalArgumentException::_IllegalArgumentException(IllegalArgumentException *this)

{
  *(undefined ***)this = &PTR__IllegalArgumentException_001147e8;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall
xercesc_2_7::IllegalArgumentException::_IllegalArgumentException(IllegalArgumentException *this)

{
  void *in_RSI;
  
  _IllegalArgumentException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


/* (LSDA) Type Table */

XMLException * __thiscall
xercesc_2_7::IllegalArgumentException::duplicate(IllegalArgumentException *this)

{
  IllegalArgumentException *this_00;
  
  this_00 = (IllegalArgumentException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  IllegalArgumentException(this_00,this);
  return &this_00->super_XMLException;
}


XMLCh * __thiscall xercesc_2_7::IllegalArgumentException::getType(IllegalArgumentException *this)

{
  return (XMLCh *)&XMLUni::fgIllegalArgumentException_Name;
}


void __thiscall
xercesc_2_7::NoSuchElementException::NoSuchElementException
          (NoSuchElementException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__NoSuchElementException_001147b8;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


/* (LSDA) Type Table */

void __thiscall
xercesc_2_7::NoSuchElementException::NoSuchElementException
          (NoSuchElementException *this,NoSuchElementException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__NoSuchElementException_001147b8;
  return;
}


void __thiscall
xercesc_2_7::NoSuchElementException::_NoSuchElementException(NoSuchElementException *this)

{
  *(undefined ***)this = &PTR__NoSuchElementException_001147b8;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall
xercesc_2_7::NoSuchElementException::_NoSuchElementException(NoSuchElementException *this)

{
  void *in_RSI;
  
  _NoSuchElementException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


XMLException * __thiscall
xercesc_2_7::NoSuchElementException::duplicate(NoSuchElementException *this)

{
  NoSuchElementException *this_00;
  
  this_00 = (NoSuchElementException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  NoSuchElementException(this_00,this);
  return &this_00->super_XMLException;
}


/* (LSDA) Type Table */

XMLCh * __thiscall xercesc_2_7::NoSuchElementException::getType(NoSuchElementException *this)

{
  return (XMLCh *)&XMLUni::fgNoSuchElementException_Name;
}


void __thiscall
xercesc_2_7::RuntimeException::RuntimeException
          (RuntimeException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__RuntimeException_00114788;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


void __thiscall
xercesc_2_7::RuntimeException::RuntimeException(RuntimeException *this,RuntimeException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__RuntimeException_00114788;
  return;
}


void __thiscall
xercesc_2_7::RuntimeException::RuntimeException
          (RuntimeException *this,char *srcFile,uint srcLine,Codes toThrow,XMLCh *text1,XMLCh *text2
          ,XMLCh *text3,XMLCh *text4,MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__RuntimeException_00114788;
  xercesc_2_7::XMLException::loadExceptText
            ((Codes)this,(ushort *)(ulong)(uint)toThrow,text1,text2,text3);
  return;
}


/* (LSDA) Type Table */

void __thiscall xercesc_2_7::RuntimeException::_RuntimeException(RuntimeException *this)

{
  *(undefined ***)this = &PTR__RuntimeException_00114788;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall xercesc_2_7::RuntimeException::_RuntimeException(RuntimeException *this)

{
  void *in_RSI;
  
  _RuntimeException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


XMLException * __thiscall xercesc_2_7::RuntimeException::duplicate(RuntimeException *this)

{
  RuntimeException *this_00;
  
  this_00 = (RuntimeException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  RuntimeException(this_00,this);
  return &this_00->super_XMLException;
}


/* (LSDA) Type Table */

XMLCh * __thiscall xercesc_2_7::RuntimeException::getType(RuntimeException *this)

{
  return (XMLCh *)&XMLUni::fgRuntimeException_Name;
}


/* Original name: operator new */

void * operator_new(size_t param_1,void *__p)

{
  return __p;
}


void __thiscall xercesc_2_7::XSerializable::_XSerializable(XSerializable *this)

{
  this->_vptr_XSerializable = (anon_subr_int_varargs **)&DAT_00114750;
  return;
}


void __thiscall xercesc_2_7::XSerializable::_XSerializable(XSerializable *this)

{
  _XSerializable(this);
  operator_delete(this);
  return;
}


void __thiscall xercesc_2_7::XMLRefInfo::_XMLRefInfo(XMLRefInfo *this)

{
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__XMLRefInfo_00114718;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fRefName);
  XSerializable::_XSerializable(&this->super_XSerializable);
  return;
}


/* (LSDA) Type Table */

void __thiscall xercesc_2_7::XMLRefInfo::_XMLRefInfo(XMLRefInfo *this)

{
  void *in_RSI;
  
  _XMLRefInfo(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


/* (LSDA) Type Table */

bool __thiscall xercesc_2_7::XMLReader::isPlainContentChar(XMLReader *this,XMLCh toCheck)

{
  return (this->fgCharCharsTable[toCheck] & 8) != 0;
}


bool __thiscall xercesc_2_7::XMLReader::isSpecialStartTagChar(XMLReader *this,XMLCh toCheck)

{
  return (this->fgCharCharsTable[toCheck] & 0x10) != 0;
}


bool __thiscall xercesc_2_7::XMLReader::isXMLChar(XMLReader *this,XMLCh toCheck)

{
  return (this->fgCharCharsTable[toCheck] & 0x40) != 0;
}


bool __thiscall xercesc_2_7::XMLReader::isWhitespace(XMLReader *this,XMLCh toCheck)

{
  return (bool)(this->fgCharCharsTable[toCheck] >> 7);
}


uint __thiscall xercesc_2_7::XMLReader::getReaderNum(XMLReader *this)

{
  return this->fReaderNum;
}


void __thiscall xercesc_2_7::XMLReader::movePlainContentChars(XMLReader *this,XMLBuffer *dest)

{
  uint uVar1;
  bool bVar2;
  uint count;
  
  uVar1 = this->fCharIndex;
  while (this->fCharIndex < this->fCharsAvail) {
    bVar2 = isPlainContentChar(this,this->fCharBuf[this->fCharIndex]);
    if (bVar2 != true) break;
    this->fCharIndex = this->fCharIndex + 1;
  }
  if (uVar1 != this->fCharIndex) {
    this->fCurCol = this->fCurCol + (ulong)(this->fCharIndex - uVar1);
    XMLBuffer::append(dest,this->fCharBuf + uVar1,this->fCharIndex - uVar1);
  }
  return;
}


bool __thiscall
xercesc_2_7::XMLReader::getNextCharIfNot(XMLReader *this,XMLCh chNotToGet,XMLCh *chGotten)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  
  if (this->fCharsAvail <= this->fCharIndex) {
    if (this->fNoMore != false) {
      return false;
    }
    cVar2 = xercesc_2_7::XMLReader::refreshCharBuffer();
    if (cVar2 != '\x01') {
      return false;
    }
  }
  if (chNotToGet == this->fCharBuf[this->fCharIndex]) {
    bVar3 = false;
  }
  else {
    uVar1 = this->fCharIndex;
    this->fCharIndex = uVar1 + 1;
    *chGotten = this->fCharBuf[uVar1];
    if ((*chGotten & 0xdf50) == 0) {
      xercesc_2_7::XMLReader::handleEOL((ushort *)this,SUB81(chGotten,0));
    }
    else {
      this->fCurCol = this->fCurCol + 1;
    }
    bVar3 = true;
  }
  return bVar3;
}


void __thiscall
xercesc_2_7::EmptyStackException::EmptyStackException
          (EmptyStackException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__EmptyStackException_001146e8;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


/* (LSDA) Type Table */

void __thiscall
xercesc_2_7::EmptyStackException::EmptyStackException
          (EmptyStackException *this,EmptyStackException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__EmptyStackException_001146e8;
  return;
}


void __thiscall xercesc_2_7::EmptyStackException::_EmptyStackException(EmptyStackException *this)

{
  *(undefined ***)this = &PTR__EmptyStackException_001146e8;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall xercesc_2_7::EmptyStackException::_EmptyStackException(EmptyStackException *this)

{
  void *in_RSI;
  
  _EmptyStackException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


XMLException * __thiscall xercesc_2_7::EmptyStackException::duplicate(EmptyStackException *this)

{
  EmptyStackException *this_00;
  
  this_00 = (EmptyStackException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  EmptyStackException(this_00,this);
  return &this_00->super_XMLException;
}


/* (LSDA) Type Table */

XMLCh * __thiscall xercesc_2_7::EmptyStackException::getType(EmptyStackException *this)

{
  return (XMLCh *)&XMLUni::fgEmptyStackException_Name;
}


void __thiscall xercesc_2_7::Locator::_Locator(Locator *this)

{
  this->_vptr_Locator = (anon_subr_int_varargs **)&DAT_001146a8;
  return;
}


void __thiscall xercesc_2_7::Locator::_Locator(Locator *this)

{
  _Locator(this);
  operator_delete(this);
  return;
}


uint __thiscall xercesc_2_7::ReaderMgr::getCurrentReaderNum(ReaderMgr *this)

{
  uint uVar1;
  
  uVar1 = XMLReader::getReaderNum(*(XMLReader **)(this + 0x10));
  return uVar1;
}


XMLReader * __thiscall xercesc_2_7::ReaderMgr::getCurrentReader(ReaderMgr *this)

{
  return *(XMLReader **)(this + 0x10);
}


bool __thiscall
xercesc_2_7::ReaderMgr::getQName(ReaderMgr *this,XMLBuffer *toFill,int *colonPosition)

{
  undefined uVar1;
  
  XMLBuffer::reset(toFill);
  uVar1 = xercesc_2_7::XMLReader::getQName(*(XMLBuffer **)(this + 0x10),(int *)toFill);
  return (bool)uVar1;
}


bool __thiscall
xercesc_2_7::ReaderMgr::getNextCharIfNot(ReaderMgr *this,XMLCh chNotToGet,XMLCh *chGotten)

{
  bool bVar1;
  
  bVar1 = XMLReader::getNextCharIfNot(*(XMLReader **)(this + 0x10),chNotToGet,chGotten);
  return bVar1;
}


void __thiscall xercesc_2_7::ReaderMgr::movePlainContentChars(ReaderMgr *this,XMLBuffer *dest)

{
  XMLReader::movePlainContentChars(*(XMLReader **)(this + 0x10),dest);
  return;
}


bool __thiscall xercesc_2_7::ReaderMgr::getThrowEOE(ReaderMgr *this)

{
  return (bool)this[0x38];
}


void __thiscall xercesc_2_7::ReaderMgr::setThrowEOE(ReaderMgr *this,bool newValue)

{
  this[0x38] = (ReaderMgr)newValue;
  return;
}


bool __thiscall xercesc_2_7::ReaderMgr::skippedString(ReaderMgr *this,XMLCh *toSkip)

{
  undefined uVar1;
  
  uVar1 = xercesc_2_7::XMLReader::skippedString(*(ushort **)(this + 0x10));
  return (bool)uVar1;
}


void __thiscall xercesc_2_7::ReaderMgr::skipToChar(ReaderMgr *this,XMLCh toSkipTo)

{
  XMLCh XVar1;
  XMLCh nextCh;
  
  do {
    XVar1 = xercesc_2_7::ReaderMgr::getNextChar();
    if (XVar1 == toSkipTo) {
      return;
    }
  } while (XVar1 != 0);
  return;
}


void __thiscall xercesc_2_7::ReaderMgr::skipPastChar(ReaderMgr *this,XMLCh toSkipPast)

{
  XMLCh XVar1;
  XMLCh nextCh;
  
  do {
    XVar1 = xercesc_2_7::ReaderMgr::getNextChar();
    if (XVar1 == toSkipPast) {
      return;
    }
  } while (XVar1 != 0);
  return;
}


void __thiscall
xercesc_2_7::ThrowEOEJanitor::ThrowEOEJanitor
          (ThrowEOEJanitor *this,ReaderMgr *mgrTarget,bool newValue)

{
  bool bVar1;
  
  bVar1 = ReaderMgr::getThrowEOE(mgrTarget);
  this->fOld = bVar1;
  this->fMgr = mgrTarget;
  ReaderMgr::setThrowEOE(mgrTarget,newValue);
  return;
}


void __thiscall xercesc_2_7::ThrowEOEJanitor::_ThrowEOEJanitor(ThrowEOEJanitor *this)

{
  ReaderMgr::setThrowEOE(this->fMgr,this->fOld);
  return;
}


XMLCh * __thiscall xercesc_2_7::QName::getPrefix(QName *this)

{
  return *(XMLCh **)(this + 0x18);
}


XMLCh * __thiscall xercesc_2_7::QName::getLocalPart(QName *this)

{
  return *(XMLCh **)(this + 0x20);
}


uint __thiscall xercesc_2_7::QName::getURI(QName *this)

{
  return *(uint *)(this + 0x14);
}


bool __thiscall xercesc_2_7::ElemStack::isEmpty(ElemStack *this)

{
  return this->fStackTop == 0;
}


bool __thiscall xercesc_2_7::ElemStack::getValidationFlag(ElemStack *this)

{
  return this->fStack[this->fStackTop - 1]->fValidationFlag;
}


void __thiscall xercesc_2_7::ElemStack::setValidationFlag(ElemStack *this,bool validationFlag)

{
  this->fStack[this->fStackTop - 1]->fValidationFlag = validationFlag;
  return;
}


void __thiscall
xercesc_2_7::ElemStack::setCurrentSchemaElemName(ElemStack *this,XMLCh *schemaElemName)

{
  XMLCh *pXVar1;
  StackElem *pSVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_var;
  uint schemaElemNameLen;
  uint stackPos;
  XMLCh *tempStr;
  
  uVar3 = XMLString::stringLen(schemaElemName);
  uVar4 = this->fStackTop - 1;
  if (this->fStack[uVar4]->fSchemaElemNameMaxLen <= uVar3) {
    pXVar1 = this->fStack[uVar4]->fSchemaElemName;
    this->fStack[uVar4]->fSchemaElemNameMaxLen = uVar3 * 2;
    pSVar2 = this->fStack[uVar4];
    iVar5 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                      (this->fMemoryManager,(ulong)this->fStack[uVar4]->fSchemaElemNameMaxLen * 2);
    pSVar2->fSchemaElemName = (XMLCh *)CONCAT44(extraout_var,iVar5);
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,pXVar1);
  }
  xercesc_2_7::XMLString::copyString(this->fStack[uVar4]->fSchemaElemName,schemaElemName);
  return;
}


XMLCh * __thiscall xercesc_2_7::ElemStack::getCurrentSchemaElemName(ElemStack *this)

{
  return this->fStack[this->fStackTop - 1]->fSchemaElemName;
}


int __thiscall xercesc_2_7::ElemStack::getCurrentScope(ElemStack *this)

{
  return this->fStack[this->fStackTop - 1]->fCurrentScope;
}


void __thiscall xercesc_2_7::ElemStack::setCurrentScope(ElemStack *this,int currentScope)

{
  this->fStack[this->fStackTop - 1]->fCurrentScope = currentScope;
  return;
}


Grammar * __thiscall xercesc_2_7::ElemStack::getCurrentGrammar(ElemStack *this)

{
  return this->fStack[this->fStackTop - 1]->fCurrentGrammar;
}


void __thiscall xercesc_2_7::ElemStack::setCurrentGrammar(ElemStack *this,Grammar *currentGrammar)

{
  this->fStack[this->fStackTop - 1]->fCurrentGrammar = currentGrammar;
  return;
}


uint __thiscall xercesc_2_7::ElemStack::getCurrentURI(ElemStack *this)

{
  return this->fStack[this->fStackTop - 1]->fCurrentURI;
}


void __thiscall xercesc_2_7::ElemStack::setCurrentURI(ElemStack *this,uint uri)

{
  this->fStack[this->fStackTop - 1]->fCurrentURI = uri;
  return;
}


void __thiscall xercesc_2_7::ElemStack::setPrefixColonPos(ElemStack *this,int colonPos)

{
  this->fStack[this->fStackTop - 1]->fPrefixColonPos = colonPos;
  return;
}


void __thiscall xercesc_2_7::DTDEntityDecl::_DTDEntityDecl(DTDEntityDecl *this)

{
  *(undefined ***)this = &PTR__DTDEntityDecl_00114658;
  xercesc_2_7::XMLEntityDecl::_XMLEntityDecl(&this->super_XMLEntityDecl);
  return;
}


void __thiscall xercesc_2_7::DTDEntityDecl::_DTDEntityDecl(DTDEntityDecl *this)

{
  void *in_RSI;
  
  _DTDEntityDecl(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


bool __thiscall xercesc_2_7::DTDEntityDecl::getDeclaredInIntSubset(DTDEntityDecl *this)

{
  return this->fDeclaredInIntSubset;
}


bool __thiscall xercesc_2_7::DTDEntityDecl::getIsParameter(DTDEntityDecl *this)

{
  return this->fIsParameter;
}


bool __thiscall xercesc_2_7::DTDEntityDecl::getIsSpecialChar(DTDEntityDecl *this)

{
  return this->fIsSpecialChar;
}


DefAttTypes __thiscall xercesc_2_7::XMLAttDef::getDefaultType(XMLAttDef *this)

{
  return *(DefAttTypes *)(this + 8);
}


AttTypes __thiscall xercesc_2_7::XMLAttDef::getType(XMLAttDef *this)

{
  return *(AttTypes *)(this + 0xc);
}


XMLCh * __thiscall xercesc_2_7::XMLAttDef::getValue(XMLAttDef *this)

{
  return *(XMLCh **)(this + 0x20);
}


CreateReasons __thiscall xercesc_2_7::XMLAttDef::getCreateReason(XMLAttDef *this)

{
  return *(CreateReasons *)(this + 0x10);
}


bool __thiscall xercesc_2_7::XMLAttDef::isExternal(XMLAttDef *this)

{
  return (bool)this[0x15];
}


XMLCh * __thiscall xercesc_2_7::KVStringPair::getKey(KVStringPair *this)

{
  return *(XMLCh **)(this + 0x18);
}


XMLCh * __thiscall xercesc_2_7::KVStringPair::getValue(KVStringPair *this)

{
  return *(XMLCh **)(this + 0x20);
}


void __thiscall
xercesc_2_7::KVStringPair::setKey(KVStringPair *this,XMLCh *newKey,uint newKeyLength)

{
  undefined8 uVar1;
  
  if (*(ulong *)(this + 8) <= (ulong)newKeyLength) {
    (**(code **)(**(long **)(this + 0x28) + 0x18))
              (*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x18));
    *(ulong *)(this + 8) = (ulong)(newKeyLength + 1);
    uVar1 = (**(code **)(**(long **)(this + 0x28) + 0x10))
                      (*(undefined8 *)(this + 0x28),*(long *)(this + 8) * 2);
    *(undefined8 *)(this + 0x18) = uVar1;
  }
  memcpy(*(void **)(this + 0x18),newKey,(ulong)(newKeyLength + 1) * 2);
  return;
}


void __thiscall
xercesc_2_7::KVStringPair::setValue(KVStringPair *this,XMLCh *newValue,uint newValueLength)

{
  undefined8 uVar1;
  
  if (*(ulong *)(this + 0x10) <= (ulong)newValueLength) {
    (**(code **)(**(long **)(this + 0x28) + 0x18))
              (*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x20));
    *(ulong *)(this + 0x10) = (ulong)(newValueLength + 1);
    uVar1 = (**(code **)(**(long **)(this + 0x28) + 0x10))
                      (*(undefined8 *)(this + 0x28),*(long *)(this + 0x10) * 2);
    *(undefined8 *)(this + 0x20) = uVar1;
  }
  memcpy(*(void **)(this + 0x20),newValue,(ulong)(newValueLength + 1) * 2);
  return;
}


void __thiscall
xercesc_2_7::KVStringPair::set
          (KVStringPair *this,XMLCh *newKey,uint newKeyLength,XMLCh *newValue,uint newValueLength)

{
  setKey(this,newKey,newKeyLength);
  setValue(this,newValue,newValueLength);
  return;
}


VARIETY __thiscall xercesc_2_7::XSSimpleTypeDefinition::getVariety(XSSimpleTypeDefinition *this)

{
  return *(VARIETY *)(this + 0x40);
}


short __thiscall xercesc_2_7::DatatypeValidator::getWSFacet(DatatypeValidator *this)

{
  return *(short *)(this + 0xc);
}


ValidatorType __thiscall xercesc_2_7::DatatypeValidator::getType(DatatypeValidator *this)

{
  return *(ValidatorType *)(this + 0x1c);
}


XMLCh * __thiscall xercesc_2_7::XMLAttr::getValue(XMLAttr *this)

{
  return this->fValue;
}


void __thiscall
xercesc_2_7::XMLAttr::set
          (XMLAttr *this,uint uriId,XMLCh *attrName,XMLCh *attrPrefix,XMLCh *attrValue,AttTypes type
          ,DatatypeValidator *datatypeValidator,bool isSchema)

{
  xercesc_2_7::QName::setName((ushort *)this->fAttName,attrPrefix,(uint)attrName);
  xercesc_2_7::XMLAttr::setValue((ushort *)this);
  this->fType = type;
  this->fIsSchemaValidated = isSchema;
  this->fDatatypeValidator = datatypeValidator;
  return;
}


void __thiscall xercesc_2_7::XMLAttr::setSpecified(XMLAttr *this,bool newValue)

{
  this->fSpecified = newValue;
  return;
}


XMLCh * __thiscall xercesc_2_7::XMLElementDecl::getBaseName(XMLElementDecl *this)

{
  XMLCh *pXVar1;
  
  pXVar1 = QName::getLocalPart(*(QName **)(this + 0x10));
  return pXVar1;
}


uint __thiscall xercesc_2_7::XMLElementDecl::getURI(XMLElementDecl *this)

{
  uint uVar1;
  
  uVar1 = QName::getURI(*(QName **)(this + 0x10));
  return uVar1;
}


QName * __thiscall xercesc_2_7::XMLElementDecl::getElementName(XMLElementDecl *this)

{
  return *(QName **)(this + 0x10);
}


XMLCh * __thiscall xercesc_2_7::XMLElementDecl::getFullName(XMLElementDecl *this)

{
  XMLCh *pXVar1;
  
  pXVar1 = (XMLCh *)xercesc_2_7::QName::getRawName();
  return pXVar1;
}


CreateReasons __thiscall xercesc_2_7::XMLElementDecl::getCreateReason(XMLElementDecl *this)

{
  return *(CreateReasons *)(this + 0x18);
}


uint __thiscall xercesc_2_7::XMLElementDecl::getId(XMLElementDecl *this)

{
  return *(uint *)(this + 0x1c);
}


bool __thiscall xercesc_2_7::XMLElementDecl::isDeclared(XMLElementDecl *this)

{
  return *(int *)(this + 0x18) == 1;
}


bool __thiscall xercesc_2_7::XMLElementDecl::isExternal(XMLElementDecl *this)

{
  return (bool)this[0x20];
}


void __thiscall
xercesc_2_7::XMLElementDecl::setCreateReason(XMLElementDecl *this,CreateReasons newReason)

{
  *(CreateReasons *)(this + 0x18) = newReason;
  return;
}


void __thiscall xercesc_2_7::XMLElementDecl::setId(XMLElementDecl *this,uint newId)

{
  *(uint *)(this + 0x1c) = newId;
  return;
}


QName * __thiscall xercesc_2_7::SchemaAttDef::getAttName(SchemaAttDef *this)

{
  return *(QName **)(this + 0x48);
}


DatatypeValidator * __thiscall xercesc_2_7::SchemaAttDef::getDatatypeValidator(SchemaAttDef *this)

{
  return *(DatatypeValidator **)(this + 0x50);
}


ValueVectorOf_unsigned_int_ * __thiscall
xercesc_2_7::SchemaAttDef::getNamespaceList(SchemaAttDef *this)

{
  return *(ValueVectorOf_unsigned_int_ **)(this + 0x68);
}


uint __thiscall xercesc_2_7::ComplexTypeInfo::getScopeDefined(ComplexTypeInfo *this)

{
  return *(uint *)(this + 0x1c);
}


int __thiscall xercesc_2_7::ComplexTypeInfo::getContentType(ComplexTypeInfo *this)

{
  return *(int *)(this + 0x20);
}


XMLCh * __thiscall xercesc_2_7::ComplexTypeInfo::getTypeName(ComplexTypeInfo *this)

{
  return *(XMLCh **)(this + 0x30);
}


SchemaAttDef * __thiscall xercesc_2_7::ComplexTypeInfo::getAttWildCard(ComplexTypeInfo *this)

{
  return *(SchemaAttDef **)(this + 0x68);
}


SchemaAttDef * __thiscall
xercesc_2_7::ComplexTypeInfo::getAttDef(ComplexTypeInfo *this,XMLCh *baseName,int uriId)

{
  SchemaAttDef *pSVar1;
  
  pSVar1 = RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::get
                     (*(RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x80),baseName,
                      uriId);
  return pSVar1;
}


XMLContentModel * __thiscall
xercesc_2_7::ComplexTypeInfo::getContentModel(ComplexTypeInfo *this,bool checkUPA)

{
  undefined8 uVar1;
  
  if ((*(long *)(this + 0x88) == 0) && (*(long *)(this + 0x60) != 0)) {
    uVar1 = xercesc_2_7::ComplexTypeInfo::makeContentModel(SUB81(this,0));
    *(undefined8 *)(this + 0x88) = uVar1;
  }
  return *(XMLContentModel **)(this + 0x88);
}


bool __thiscall xercesc_2_7::ComplexTypeInfo::hasAttDefs(ComplexTypeInfo *this)

{
  bool bVar1;
  
  bVar1 = RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::isEmpty
                    (*(RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x80));
  return (bool)(bVar1 ^ 1);
}


ModelTypes __thiscall xercesc_2_7::SchemaElementDecl::getModelType(SchemaElementDecl *this)

{
  ModelTypes MVar1;
  
  if (*(long *)(this + 0x50) == 0) {
    MVar1 = *(ModelTypes *)(this + 0x24);
  }
  else {
    MVar1 = ComplexTypeInfo::getContentType(*(ComplexTypeInfo **)(this + 0x50));
  }
  return MVar1;
}


XMLCh * __thiscall xercesc_2_7::SchemaElementDecl::getDefaultValue(SchemaElementDecl *this)

{
  return *(XMLCh **)(this + 0x48);
}


ComplexTypeInfo * __thiscall
xercesc_2_7::SchemaElementDecl::getComplexTypeInfo(SchemaElementDecl *this)

{
  return *(ComplexTypeInfo **)(this + 0x50);
}


SchemaAttDef * __thiscall xercesc_2_7::SchemaElementDecl::getAttWildCard(SchemaElementDecl *this)

{
  return *(SchemaAttDef **)(this + 0x78);
}


void __thiscall
xercesc_2_7::GrammarResolver::useCachedGrammarInParse(GrammarResolver *this,bool aValue)

{
  this->fUseCachedGrammar = aValue;
  return;
}


bool __thiscall xercesc_2_7::XMLScanner::bufferFull(XMLScanner *this,XMLBuffer *toSend)

{
  (**(code **)(*(long *)this + 0x80))(this,toSend);
  return true;
}


PSVIHandler * __thiscall xercesc_2_7::XMLScanner::getPSVIHandler(XMLScanner *this)

{
  return *(PSVIHandler **)(this + 0xa0);
}


void __thiscall xercesc_2_7::XMLScanner::resetValidationContext(XMLScanner *this)

{
  (**(code **)(**(long **)(this + 0xa8) + 0x20))(*(undefined8 *)(this + 0xa8));
  (**(code **)(**(long **)(this + 0xa8) + 0x48))(*(undefined8 *)(this + 0xa8),0);
  this[0xb0] = (XMLScanner)0x0;
  return;
}


XMLCh * __thiscall xercesc_2_7::SGXMLScanner::getName(SGXMLScanner *this)

{
  return (XMLCh *)&XMLUni::fgSGXMLScanner;
}


bool __thiscall xercesc_2_7::SGXMLScanner::toCheckIdentityConstraint(SGXMLScanner *this)

{
  bool bVar1;
  
  if (((this->field_0x18 == '\0') || (this->field_0x1c == '\0')) ||
     (this->fICHandler == (IdentityConstraintHandler *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


GrammarType __thiscall xercesc_2_7::SGXMLScanner::getCurrentGrammarType(SGXMLScanner *this)

{
  return this->fGrammarType;
}


void __thiscall
xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException
          (UnexpectedEOFException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__UnexpectedEOFException_00114598;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


/* (LSDA) Type Table */

void __thiscall
xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException
          (UnexpectedEOFException *this,UnexpectedEOFException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__UnexpectedEOFException_00114598;
  return;
}


void __thiscall
xercesc_2_7::UnexpectedEOFException::_UnexpectedEOFException(UnexpectedEOFException *this)

{
  *(undefined ***)this = &PTR__UnexpectedEOFException_00114598;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall
xercesc_2_7::UnexpectedEOFException::_UnexpectedEOFException(UnexpectedEOFException *this)

{
  void *in_RSI;
  
  _UnexpectedEOFException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


XMLException * __thiscall
xercesc_2_7::UnexpectedEOFException::duplicate(UnexpectedEOFException *this)

{
  UnexpectedEOFException *this_00;
  
  this_00 = (UnexpectedEOFException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  UnexpectedEOFException(this_00,this);
  return &this_00->super_XMLException;
}


/* (LSDA) Type Table */

XMLCh * __thiscall xercesc_2_7::UnexpectedEOFException::getType(UnexpectedEOFException *this)

{
  return (XMLCh *)&XMLUni::fgUnexpectedEOFException_Name;
}


void __thiscall
xercesc_2_7::MalformedURLException::MalformedURLException
          (MalformedURLException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__MalformedURLException_00114568;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


void __thiscall
xercesc_2_7::MalformedURLException::MalformedURLException
          (MalformedURLException *this,MalformedURLException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__MalformedURLException_00114568;
  return;
}


void __thiscall
xercesc_2_7::MalformedURLException::_MalformedURLException(MalformedURLException *this)

{
  *(undefined ***)this = &PTR__MalformedURLException_00114568;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall
xercesc_2_7::MalformedURLException::_MalformedURLException(MalformedURLException *this)

{
  void *in_RSI;
  
  _MalformedURLException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


/* (LSDA) Type Table */

XMLException * __thiscall xercesc_2_7::MalformedURLException::duplicate(MalformedURLException *this)

{
  MalformedURLException *this_00;
  
  this_00 = (MalformedURLException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  MalformedURLException(this_00,this);
  return &this_00->super_XMLException;
}


XMLCh * __thiscall xercesc_2_7::MalformedURLException::getType(MalformedURLException *this)

{
  return (XMLCh *)&XMLUni::fgMalformedURLException_Name;
}


void __thiscall xercesc_2_7::PSVIItem::_PSVIItem(PSVIItem *this)

{
  this->_vptr_PSVIItem = (anon_subr_int_varargs **)&DAT_00114530;
  return;
}


void __thiscall xercesc_2_7::PSVIItem::_PSVIItem(PSVIItem *this)

{
  void *in_RSI;
  
  _PSVIItem(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall xercesc_2_7::PSVIAttribute::_PSVIAttribute(PSVIAttribute *this)

{
  (this->super_PSVIItem)._vptr_PSVIItem = (anon_subr_int_varargs **)&PTR__PSVIAttribute_001144f8;
  (*((this->super_PSVIItem).fMemoryManager)->_vptr_MemoryManager[3])
            ((this->super_PSVIItem).fMemoryManager,(this->super_PSVIItem).fCanonicalValue);
  PSVIItem::_PSVIItem(&this->super_PSVIItem);
  return;
}


/* (LSDA) Type Table */

void __thiscall xercesc_2_7::PSVIAttribute::_PSVIAttribute(PSVIAttribute *this)

{
  void *in_RSI;
  
  _PSVIAttribute(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


/* (LSDA) Type Table */

XSTypeDefinition * __thiscall xercesc_2_7::PSVIAttribute::getTypeDefinition(PSVIAttribute *this)

{
  return (this->super_PSVIItem).fType;
}


XSSimpleTypeDefinition * __thiscall
xercesc_2_7::PSVIAttribute::getMemberTypeDefinition(PSVIAttribute *this)

{
  return (this->super_PSVIItem).fMemberType;
}


void __thiscall
xercesc_2_7::PSVIAttribute::updateValidity(PSVIAttribute *this,VALIDITY_STATE newValue)

{
  (this->super_PSVIItem).fValidityState = newValue;
  return;
}


void __thiscall xercesc_2_7::PSVIAttributeList::_PSVIAttributeList(PSVIAttributeList *this)

{
  RefVectorOf_xercesc_2_7__PSVIAttribute_ *pRVar1;
  RefArrayVectorOf_short_unsigned_int_ *pRVar2;
  
  pRVar1 = this->fAttrList;
  if (pRVar1 != (RefVectorOf_xercesc_2_7__PSVIAttribute_ *)0x0) {
    (*(pRVar1->super_BaseRefVectorOf_xercesc_2_7__PSVIAttribute_)._vptr_BaseRefVectorOf[1])(pRVar1);
  }
  pRVar2 = this->fAttrNameList;
  if (pRVar2 != (RefArrayVectorOf_short_unsigned_int_ *)0x0) {
    (*(pRVar2->super_BaseRefVectorOf_short_unsigned_int_)._vptr_BaseRefVectorOf[1])(pRVar2);
  }
  pRVar2 = this->fAttrNSList;
  if (pRVar2 != (RefArrayVectorOf_short_unsigned_int_ *)0x0) {
    (*(pRVar2->super_BaseRefVectorOf_short_unsigned_int_)._vptr_BaseRefVectorOf[1])(pRVar2);
  }
  return;
}


PSVIAttribute * __thiscall
xercesc_2_7::PSVIAttributeList::getPSVIAttributeToFill
          (PSVIAttributeList *this,XMLCh *attrName,XMLCh *attrNS)

{
  uint uVar1;
  uint uVar2;
  PSVIAttribute *retAttr;
  
  uVar1 = this->fAttrPos;
  uVar2 = BaseRefVectorOf<xercesc_2_7::PSVIAttribute>::size
                    ((BaseRefVectorOf_xercesc_2_7__PSVIAttribute_ *)this->fAttrList);
  if (uVar1 == uVar2) {
    retAttr = (PSVIAttribute *)xercesc_2_7::XMemory::operator_new(0x60,this->fMemoryManager);
    xercesc_2_7::PSVIAttribute::PSVIAttribute(retAttr,this->fMemoryManager);
    BaseRefVectorOf<xercesc_2_7::PSVIAttribute>::addElement
              ((BaseRefVectorOf_xercesc_2_7__PSVIAttribute_ *)this->fAttrList,retAttr);
    BaseRefVectorOf<short_unsigned_int>::addElement
              ((BaseRefVectorOf_short_unsigned_int_ *)this->fAttrNameList,attrName);
    BaseRefVectorOf<short_unsigned_int>::addElement
              ((BaseRefVectorOf_short_unsigned_int_ *)this->fAttrNSList,attrNS);
  }
  else {
    retAttr = BaseRefVectorOf<xercesc_2_7::PSVIAttribute>::elementAt
                        ((BaseRefVectorOf_xercesc_2_7__PSVIAttribute_ *)this->fAttrList,
                         this->fAttrPos);
    (*(this->fAttrNameList->super_BaseRefVectorOf_short_unsigned_int_)._vptr_BaseRefVectorOf[2])
              (this->fAttrNameList,attrName,(ulong)this->fAttrPos);
    (*(this->fAttrNSList->super_BaseRefVectorOf_short_unsigned_int_)._vptr_BaseRefVectorOf[2])
              (this->fAttrNSList,attrNS,(ulong)this->fAttrPos);
  }
  this->fAttrPos = this->fAttrPos + 1;
  return retAttr;
}


/* (LSDA) Type Table */

void __thiscall xercesc_2_7::PSVIAttributeList::reset(PSVIAttributeList *this)

{
  this->fAttrPos = 0;
  return;
}


void __thiscall
xercesc_2_7::PSVIHandler::handlePartialElementPSVI
          (PSVIHandler *this,XMLCh *param_1,XMLCh *param_2,PSVIElement *param_3)

{
  return;
}


XMLEntityDecl * __thiscall xercesc_2_7::EndOfEntityException::getEntity(EndOfEntityException *this)

{
  return this->fEntity;
}


void __thiscall xercesc_2_7::ContentSpecNode::_ContentSpecNode(ContentSpecNode *this)

{
  ContentSpecNode *pCVar1;
  long *plVar2;
  
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_00114488;
  if ((this->fAdoptFirst != false) && (pCVar1 = this->fFirst, pCVar1 != (ContentSpecNode *)0x0)) {
    (*(pCVar1->super_XSerializable)._vptr_XSerializable[1])(pCVar1);
  }
  if ((this->fAdoptSecond != false) && (pCVar1 = this->fSecond, pCVar1 != (ContentSpecNode *)0x0)) {
    (*(pCVar1->super_XSerializable)._vptr_XSerializable[1])(pCVar1);
  }
  plVar2 = (long *)this->fElement;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  XSerializable::_XSerializable(&this->super_XSerializable);
  return;
}


/* (LSDA) Type Table */

void __thiscall xercesc_2_7::ContentSpecNode::_ContentSpecNode(ContentSpecNode *this)

{
  void *in_RSI;
  
  _ContentSpecNode(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


/* (LSDA) Type Table */

bool __thiscall xercesc_2_7::XMLValidator::checkRootElement(XMLValidator *this,uint param_1)

{
  return true;
}


void __thiscall
xercesc_2_7::XMLValidator::setErrorReporter(XMLValidator *this,XMLErrorReporter *errorReporter)

{
  this->fErrorReporter = errorReporter;
  return;
}


DVHashTable * xercesc_2_7::DatatypeValidatorFactory::getBuiltInRegistry(void)

{
  return fBuiltInRegistry;
}


RefHashTableOf_xercesc_2_7__XMLAttDef_ * __thiscall
xercesc_2_7::SchemaGrammar::getAttributeDeclRegistry(SchemaGrammar *this)

{
  return *(RefHashTableOf_xercesc_2_7__XMLAttDef_ **)(this + 0x30);
}


void __thiscall
xercesc_2_7::XSDErrorReporter::setExitOnFirstFatal(XSDErrorReporter *this,bool newValue)

{
  this->fExitOnFirstFatal = newValue;
  return;
}


void __thiscall
xercesc_2_7::XSDErrorReporter::setErrorReporter
          (XSDErrorReporter *this,XMLErrorReporter *errorReporter)

{
  this->fErrorReporter = errorReporter;
  return;
}


void __thiscall
xercesc_2_7::SchemaValidator::setGrammarResolver
          (SchemaValidator *this,GrammarResolver *grammarResolver)

{
  *(GrammarResolver **)(this + 0x38) = grammarResolver;
  return;
}


void __thiscall
xercesc_2_7::SchemaValidator::setXsiType
          (SchemaValidator *this,XMLCh *prefix,XMLCh *localPart,uint uriId)

{
  long *plVar1;
  QName *this_00;
  
  plVar1 = *(long **)(this + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this_00 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,*(MemoryManager **)(this + 0x28));
  xercesc_2_7::QName::QName(this_00,prefix,localPart,uriId,*(MemoryManager **)(this + 0x28));
  *(QName **)(this + 0x40) = this_00;
  return;
}


void __thiscall xercesc_2_7::SchemaValidator::setNillable(SchemaValidator *this,bool isNil)

{
  this[0x48] = (SchemaValidator)isNil;
  return;
}


void __thiscall
xercesc_2_7::SchemaValidator::setExitOnFirstFatal(SchemaValidator *this,bool newValue)

{
  XSDErrorReporter::setExitOnFirstFatal((XSDErrorReporter *)(this + 0x90),newValue);
  return;
}


void __thiscall xercesc_2_7::SchemaValidator::setDatatypeBuffer(SchemaValidator *this,XMLCh *value)

{
  XMLBuffer::append((XMLBuffer *)(this + 0x60),value);
  return;
}


void __thiscall xercesc_2_7::SchemaValidator::clearDatatypeBuffer(SchemaValidator *this)

{
  XMLBuffer::reset((XMLBuffer *)(this + 0x60));
  return;
}


ComplexTypeInfo * __thiscall xercesc_2_7::SchemaValidator::getCurrentTypeInfo(SchemaValidator *this)

{
  bool bVar1;
  ComplexTypeInfo *pCVar2;
  ComplexTypeInfo **ppCVar3;
  
  bVar1 = ValueStackOf<xercesc_2_7::ComplexTypeInfo*>::empty
                    (*(ValueStackOf_xercesc_2_7__ComplexTypeInfo__ **)(this + 0xa8));
  if (bVar1 == false) {
    ppCVar3 = ValueStackOf<xercesc_2_7::ComplexTypeInfo*>::peek
                        (*(ValueStackOf_xercesc_2_7__ComplexTypeInfo__ **)(this + 0xa8));
    pCVar2 = *ppCVar3;
  }
  else {
    pCVar2 = (ComplexTypeInfo *)0x0;
  }
  return pCVar2;
}


DatatypeValidator * __thiscall
xercesc_2_7::SchemaValidator::getCurrentDatatypeValidator(SchemaValidator *this)

{
  return *(DatatypeValidator **)(this + 0x50);
}


DatatypeValidator * __thiscall
xercesc_2_7::SchemaValidator::getMostRecentAttrValidator(SchemaValidator *this)

{
  return *(DatatypeValidator **)(this + 0xb0);
}


void __thiscall
xercesc_2_7::SchemaValidator::setErrorReporter
          (SchemaValidator *this,XMLErrorReporter *errorReporter)

{
  XMLValidator::setErrorReporter((XMLValidator *)this,errorReporter);
  XSDErrorReporter::setErrorReporter((XSDErrorReporter *)(this + 0x90),errorReporter);
  return;
}


bool __thiscall xercesc_2_7::SchemaValidator::getErrorOccurred(SchemaValidator *this)

{
  return (bool)this[0xb8];
}


bool __thiscall xercesc_2_7::SchemaValidator::getIsElemSpecified(SchemaValidator *this)

{
  return (bool)this[0xb9];
}


XMLCh * __thiscall xercesc_2_7::SchemaValidator::getNormalizedValue(SchemaValidator *this)

{
  XMLCh *pXVar1;
  
  pXVar1 = XMLBuffer::getRawBuffer((XMLBuffer *)(this + 0x60));
  return pXVar1;
}


void __thiscall
xercesc_2_7::XMLResourceIdentifier::_XMLResourceIdentifier(XMLResourceIdentifier *this)

{
  return;
}


void __thiscall
xercesc_2_7::XMLResourceIdentifier::XMLResourceIdentifier
          (XMLResourceIdentifier *this,ResourceIdentifierType resourceIdentifierType,XMLCh *systemId
          ,XMLCh *nameSpace,XMLCh *publicId,XMLCh *baseURI,Locator *locator)

{
  this->fResourceIdentifierType = resourceIdentifierType;
  this->fPublicId = publicId;
  this->fSystemId = systemId;
  this->fBaseURI = baseURI;
  this->fNameSpace = nameSpace;
  this->fLocator = locator;
  return;
}


void __thiscall xercesc_2_7::XSDLocator::_XSDLocator(XSDLocator *this)

{
  *(undefined ***)this = &PTR__XSDLocator_00114448;
  Locator::_Locator((Locator *)this);
  return;
}


void __thiscall xercesc_2_7::XSDLocator::_XSDLocator(XSDLocator *this)

{
  void *in_RSI;
  
  _XSDLocator(this);
  xercesc_2_7::XMemory::operator_delete(&this->super_XMemory,in_RSI);
  return;
}


XMLSSize_t __thiscall xercesc_2_7::XSDLocator::getLineNumber(XSDLocator *this)

{
  return this->fLineNo;
}


XMLSSize_t __thiscall xercesc_2_7::XSDLocator::getColumnNumber(XSDLocator *this)

{
  return this->fColumnNo;
}


XMLCh * __thiscall xercesc_2_7::XSDLocator::getPublicId(XSDLocator *this)

{
  return this->fPublicId;
}


XMLCh * __thiscall xercesc_2_7::XSDLocator::getSystemId(XSDLocator *this)

{
  return this->fSystemId;
}


bool __thiscall xercesc_2_7::XSDDOMParser::getSawFatal(XSDDOMParser *this)

{
  return (bool)this[0xe0];
}


void __thiscall
xercesc_2_7::SubstitutionGroupComparator::SubstitutionGroupComparator
          (SubstitutionGroupComparator *this,GrammarResolver *pGrammarResolver,
          XMLStringPool *pStringPool)

{
  XMemory::XMemory((XMemory *)this);
  this->fGrammarResolver = pGrammarResolver;
  this->fStringPool = pStringPool;
  return;
}


void __thiscall
xercesc_2_7::SubstitutionGroupComparator::_SubstitutionGroupComparator
          (SubstitutionGroupComparator *this)

{
  return;
}


void __thiscall xercesc_2_7::ValueStoreCache::endDocument(ValueStoreCache *this)

{
  return;
}


uint __thiscall xercesc_2_7::XPathMatcherStack::getMatcherCount(XPathMatcherStack *this)

{
  return this->fMatchersCount;
}


void __thiscall xercesc_2_7::IdentityConstraintHandler::endDocument(IdentityConstraintHandler *this)

{
  ValueStoreCache::endDocument(*(ValueStoreCache **)(this + 0x20));
  return;
}


int __thiscall
xercesc_2_7::IdentityConstraintHandler::getMatcherCount(IdentityConstraintHandler *this)

{
  uint uVar1;
  
  uVar1 = XPathMatcherStack::getMatcherCount(*(XPathMatcherStack **)(this + 0x18));
  return uVar1;
}


void __thiscall
xercesc_2_7::ReaderMgr::LastExtEntityInfo::LastExtEntityInfo(LastExtEntityInfo *this)

{
  XMemory::XMemory((XMemory *)this);
  return;
}


XMLAttDefList * xercesc_2_7::getAttDefList(ComplexTypeInfo *currType,XMLElementDecl *elemDecl)

{
  XMLAttDefList *pXVar1;
  
  if (currType == (ComplexTypeInfo *)0x0) {
    pXVar1 = (XMLAttDefList *)(**(code **)(*(long *)elemDecl + 0x30))(elemDecl);
  }
  else {
    pXVar1 = (XMLAttDefList *)xercesc_2_7::ComplexTypeInfo::getAttDefList();
  }
  return pXVar1;
}


uint __thiscall xercesc_2_7::ValueVectorOf<unsigned_int>::size(ValueVectorOf_unsigned_int_ *this)

{
  return this->fCurCount;
}


SchemaAttDef * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::get
          (RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ *this,void *key1,int key2)

{
  SchemaAttDef *pSVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaAttDef_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (findIt == (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaAttDef_ *)0x0) {
    pSVar1 = (SchemaAttDef *)0x0;
  }
  else {
    pSVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar1;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::isEmpty
          (RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ *this)

{
  return this->fCount == 0;
}


uint __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::PSVIAttribute>::size
          (BaseRefVectorOf_xercesc_2_7__PSVIAttribute_ *this)

{
  return this->fCurCount;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::PSVIAttribute>::addElement
          (BaseRefVectorOf_xercesc_2_7__PSVIAttribute_ *this,PSVIAttribute *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::addElement
          (BaseRefVectorOf_short_unsigned_int_ *this,ushort *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


PSVIAttribute * __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::PSVIAttribute>::elementAt
          (BaseRefVectorOf_xercesc_2_7__PSVIAttribute_ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/BaseRefVectorOf.c",0xf9,Vector_BadIndex,this->fMemoryManager)
    ;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return this->fElemList[getAt];
}


DatatypeValidator * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::DatatypeValidator>::get
          (RefHashTableOf_xercesc_2_7__DatatypeValidator_ *this,void *key)

{
  DatatypeValidator *pDVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ *)0x0) {
    pDVar1 = (DatatypeValidator *)0x0;
  }
  else {
    pDVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pDVar1;
}


SchemaElementDecl * __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::getByKey
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this,void *key1,int key2,int key3)

{
  SchemaElementDecl *pSVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,key3,&hashVal);
  if (findIt == (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)0x0) {
    pSVar1 = (SchemaElementDecl *)0x0;
  }
  else {
    pSVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar1;
}


void __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::RefHash3KeysIdPool
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this,uint modulus,bool adoptElems,
          uint initSize,MemoryManager *manager)

{
  int iVar1;
  HashBase *this_00;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList = (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ **)0x0;
  this->fHashModulus = modulus;
  this->fHash = (HashBase *)0x0;
  this->fIdPtrs = (SchemaElementDecl **)0x0;
  this->fIdPtrsCount = initSize;
  this->fIdCounter = 0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  if (this->fIdPtrsCount == 0) {
    this->fIdPtrsCount = 0x100;
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fIdPtrsCount << 3);
  this->fIdPtrs = (SchemaElementDecl **)CONCAT44(extraout_var,iVar1);
  *this->fIdPtrs = (SchemaElementDecl *)0x0;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00110a14) */

uint __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::put
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this,void *key1,int key2,int key3,
          SchemaElementDecl *valueToAdopt)

{
  long *plVar1;
  int iVar2;
  undefined4 extraout_var;
  RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *this_00;
  ulong uVar3;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint newCount;
  uint retId;
  RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *newBucket;
  SchemaElementDecl **newArray;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  newBucket = findBucketElem(this,key1,key2,key3,&hashVal);
  if (newBucket == (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)0x0) {
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x20);
    this_00 = (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)
              operator_new(0x20,(void *)CONCAT44(extraout_var,iVar2));
    RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl>::RefHash3KeysTableBucketElem
              (this_00,key1,key2,key3,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (plVar1 = (long *)newBucket->fData, plVar1 != (long *)0x0)
       ) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    newBucket->fData = valueToAdopt;
    newBucket->fKey1 = key1;
    newBucket->fKey2 = key2;
    newBucket->fKey3 = key3;
  }
  if (this->fIdCounter + 1 == this->fIdPtrsCount) {
    uVar3 = (ulong)((double)(ulong)this->fIdPtrsCount * DAT_0010ca50);
    newCount = (uint)uVar3;
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                      (this->fMemoryManager,(uVar3 & 0xffffffff) << 3);
    newArray = (SchemaElementDecl **)CONCAT44(extraout_var_00,iVar2);
    memcpy(newArray,this->fIdPtrs,(ulong)this->fIdPtrsCount * 8);
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
    this->fIdPtrs = newArray;
    this->fIdPtrsCount = newCount;
  }
  this->fIdCounter = this->fIdCounter + 1;
  retId = this->fIdCounter;
  this->fIdPtrs[retId] = valueToAdopt;
  XMLElementDecl::setId((XMLElementDecl *)valueToAdopt,retId);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return retId;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


bool __thiscall
xercesc_2_7::ValueStackOf<xercesc_2_7::ComplexTypeInfo*>::empty
          (ValueStackOf_xercesc_2_7__ComplexTypeInfo__ *this)

{
  uint uVar1;
  
  uVar1 = ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>::size(&this->fVector);
  return uVar1 == 0;
}


ComplexTypeInfo ** __thiscall
xercesc_2_7::ValueStackOf<xercesc_2_7::ComplexTypeInfo*>::peek
          (ValueStackOf_xercesc_2_7__ComplexTypeInfo__ *this)

{
  uint uVar1;
  EmptyStackException *this_00;
  MemoryManager *memoryManager;
  ComplexTypeInfo **ppCVar2;
  int curSize;
  
  uVar1 = ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>::size(&this->fVector);
  if (uVar1 == 0) {
    this_00 = (EmptyStackException *)__cxa_allocate_exception(0x30);
    memoryManager = ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>::getMemoryManager(&this->fVector);
    EmptyStackException::EmptyStackException
              (this_00,"./xercesc/util/ValueStackOf.c",0x3d,Stack_EmptyStack,memoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&EmptyStackException::typeinfo,EmptyStackException::_EmptyStackException);
  }
  ppCVar2 = ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>::elementAt(&this->fVector,uVar1 - 1);
  return ppCVar2;
}


ushort * __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::get
          (ValueHashTableOf_short_unsigned_int_ *this,void *key,MemoryManager *manager)

{
  NoSuchElementException *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  ValueHashTableBucketElem_short_unsigned_int_ *findIt;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (ValueHashTableBucketElem_short_unsigned_int_ *)0x0) {
    this_00 = (NoSuchElementException *)__cxa_allocate_exception(0x30);
    NoSuchElementException::NoSuchElementException
              (this_00,"./xercesc/util/ValueHashTableOf.c",0x99,HshTbl_NoSuchKeyExists,manager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&NoSuchElementException::typeinfo,
                NoSuchElementException::_NoSuchElementException);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return &findIt->fData;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__SGXMLScanner_ *this,SGXMLScanner *object,MFPT toCall)

{
  undefined8 in_RCX;
  
  this->fObject = object;
  this->fToCall = toCall;
  *(undefined8 *)&this->field_0x10 = in_RCX;
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::_JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__SGXMLScanner_ *this)

{
  code *pcVar1;
  
  if ((this->fObject != (SGXMLScanner *)0x0) && (this->fToCall != 0)) {
    if ((this->fToCall & 1) == 0) {
      pcVar1 = (code *)this->fToCall;
    }
    else {
      pcVar1 = *(code **)((this->fToCall - 1) +
                         *(long *)(&this->fObject->super_XMLScanner + *(long *)&this->field_0x10));
    }
    (*pcVar1)(&this->fObject->super_XMLScanner + *(long *)&this->field_0x10);
  }
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::release
          (JanitorMemFunCall_xercesc_2_7__SGXMLScanner_ *this)

{
  this->fObject = (SGXMLScanner *)0x0;
  this->fToCall = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::ReaderMgr>::JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__ReaderMgr_ *this,ReaderMgr *object,MFPT toCall)

{
  undefined8 in_RCX;
  
  this->fObject = object;
  this->fToCall = toCall;
  *(undefined8 *)&this->field_0x10 = in_RCX;
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::ReaderMgr>::_JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__ReaderMgr_ *this)

{
  code *pcVar1;
  
  if ((this->fObject != (ReaderMgr *)0x0) && (this->fToCall != 0)) {
    if ((this->fToCall & 1) == 0) {
      pcVar1 = (code *)this->fToCall;
    }
    else {
      pcVar1 = *(code **)((this->fToCall - 1) +
                         *(long *)(this->fObject + *(long *)&this->field_0x10));
    }
    (*pcVar1)(this->fObject + *(long *)&this->field_0x10);
  }
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::ReaderMgr>::release
          (JanitorMemFunCall_xercesc_2_7__ReaderMgr_ *this)

{
  this->fObject = (ReaderMgr *)0x0;
  this->fToCall = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}


uint __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::size
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  return this->fCurCount;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::addElement
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,KVStringPair *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


KVStringPair * __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::elementAt
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/BaseRefVectorOf.c",0xf9,Vector_BadIndex,this->fMemoryManager)
    ;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return this->fElemList[getAt];
}


bool __thiscall xercesc_2_7::ValueStackOf<bool>::pop(ValueStackOf_bool_ *this)

{
  bool bVar1;
  uint uVar2;
  EmptyStackException *this_00;
  MemoryManager *memoryManager;
  bool *pbVar3;
  bool retVal;
  int curSize;
  
  uVar2 = ValueVectorOf<bool>::size(&this->fVector);
  if (uVar2 == 0) {
    this_00 = (EmptyStackException *)__cxa_allocate_exception(0x30);
    memoryManager = ValueVectorOf<bool>::getMemoryManager(&this->fVector);
    EmptyStackException::EmptyStackException
              (this_00,"./xercesc/util/ValueStackOf.c",0x46,Stack_EmptyStack,memoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&EmptyStackException::typeinfo,EmptyStackException::_EmptyStackException);
  }
  pbVar3 = ValueVectorOf<bool>::elementAt(&this->fVector,uVar2 - 1);
  bVar1 = *pbVar3;
  ValueVectorOf<bool>::removeElementAt(&this->fVector,uVar2 - 1);
  return bVar1;
}


uint __thiscall xercesc_2_7::ValueStackOf<bool>::size(ValueStackOf_bool_ *this)

{
  uint uVar1;
  
  uVar1 = ValueVectorOf<bool>::size(&this->fVector);
  return uVar1;
}


void __thiscall xercesc_2_7::ValueStackOf<bool>::push(ValueStackOf_bool_ *this,bool *toPush)

{
  ValueVectorOf<bool>::addElement(&this->fVector,toPush);
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::removeAll(RefHash2KeysTableOf_unsigned_int_ *this)

{
  RefHash2KeysTableBucketElem_unsigned_int_ *pRVar1;
  bool bVar2;
  uint buckInd;
  RefHash2KeysTableBucketElem_unsigned_int_ *curElem;
  RefHash2KeysTableBucketElem_unsigned_int_ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) && (curElem->fData != (uint *)0x0)) {
          operator_delete(curElem->fData);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] = (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::KVStringPair>::RefVectorOf
          (RefVectorOf_xercesc_2_7__KVStringPair_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<xercesc_2_7::KVStringPair>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_,maxElems,adoptElems,manager);
  (this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00114308;
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::ValueHashTableOf
          (ValueHashTableOf_short_unsigned_int_ *this,uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fBucketList = (ValueHashTableBucketElem_short_unsigned_int_ **)0x0;
  this->fHashModulus = modulus;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::put
          (ValueHashTableOf_short_unsigned_int_ *this,void *key,ushort *valueToAdopt)

{
  int iVar1;
  undefined4 extraout_var;
  ValueHashTableBucketElem_short_unsigned_int_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  ValueHashTableBucketElem_short_unsigned_int_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (ValueHashTableBucketElem_short_unsigned_int_ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (ValueHashTableBucketElem_short_unsigned_int_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar1));
    ValueHashTableBucketElem<short_unsigned_int>::ValueHashTableBucketElem
              (this_00,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    newBucket = this_00;
  }
  else {
    newBucket->fData = *valueToAdopt;
    newBucket->fKey = key;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::RefHashTableOf
          (RefHashTableOf_unsigned_int_ *this,uint modulus,bool adoptElems,HashBase *hashBase,
          MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList = (RefHashTableBucketElem_unsigned_int_ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this->fHash = hashBase;
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::RefHash2KeysTableOf
          (RefHash2KeysTableOf_unsigned_int_ *this,uint modulus,bool adoptElems,HashBase *hashBase,
          MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList = (RefHash2KeysTableBucketElem_unsigned_int_ **)0x0;
  this->fHashModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this->fHash = hashBase;
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::_ValueHashTableOf
          (ValueHashTableOf_short_unsigned_int_ *this)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::KVStringPair>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  long *plVar1;
  uint index;
  
  (this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00114308;
  if ((this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_).fCurCount;
        index = index + 1) {
      plVar1 = (long *)(this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_).fElemList[index];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  (*((this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_).fMemoryManager)->_vptr_MemoryManager
    [3])((this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_).fMemoryManager,
         (this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_).fElemList);
  BaseRefVectorOf<xercesc_2_7::KVStringPair>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__KVStringPair_);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::KVStringPair>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  void *in_RSI;
  
  _RefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::_RefHash3KeysIdPool
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fIdPtrs);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::_RefHashTableOf(RefHashTableOf_unsigned_int_ *this)

{
  EVP_PKEY_CTX *in_RSI;
  
  cleanup(this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_unsigned_int_ *this)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall xercesc_2_7::ValueStackOf<bool>::_ValueStackOf(ValueStackOf_bool_ *this)

{
  ValueVectorOf<bool>::_ValueVectorOf(&this->fVector);
  return;
}


uint __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::XMLAttr>::size
          (BaseRefVectorOf_xercesc_2_7__XMLAttr_ *this)

{
  return *(uint *)(this + 0xc);
}


KVStringPair * __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::elementAt
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/BaseRefVectorOf.c",0xf1,Vector_BadIndex,this->fMemoryManager)
    ;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return this->fElemList[getAt];
}


void __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::ArrayJanitor
          (ArrayJanitor_short_unsigned_int_ *this,ushort *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = (MemoryManager *)0x0;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::_ArrayJanitor(ArrayJanitor_short_unsigned_int_ *this)

{
  reset(this,(ushort *)0x0);
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::reset
          (ArrayJanitor_short_unsigned_int_ *this,ushort *p,MemoryManager *manager)

{
  if (this->fData != (ushort *)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (ushort *)0x0) {
        operator_delete__(this->fData);
      }
    }
    else {
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fData);
    }
  }
  this->fData = p;
  this->fMemoryManager = manager;
  return;
}


ushort * __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::operator__
          (ArrayJanitor_short_unsigned_int_ *this,int index)

{
  return this->fData + index;
}


ushort * __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::get(ArrayJanitor_short_unsigned_int_ *this)

{
  return this->fData;
}


XMLAttDef * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::get
          (RefHashTableOf_xercesc_2_7__XMLAttDef_ *this,void *key)

{
  XMLAttDef *pXVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)0x0) {
    pXVar1 = (XMLAttDef *)0x0;
  }
  else {
    pXVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pXVar1;
}


uint * __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::get(RefHashTableOf_unsigned_int_ *this,void *key)

{
  uint *puVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_unsigned_int_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_unsigned_int_ *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}


void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::put
          (RefHashTableOf_unsigned_int_ *this,void *key,uint *valueToAdopt)

{
  int iVar1;
  undefined4 extraout_var;
  RefHashTableBucketElem_unsigned_int_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_unsigned_int_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_unsigned_int_ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (RefHashTableBucketElem_unsigned_int_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar1));
    RefHashTableBucketElem<unsigned_int>::RefHashTableBucketElem
              (this_00,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (newBucket->fData != (uint *)0x0)) {
      operator_delete(newBucket->fData);
    }
    newBucket->fData = valueToAdopt;
    newBucket->fKey = key;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::containsKey
          (RefHash2KeysTableOf_unsigned_int_ *this,void *key1,int key2)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_unsigned_int_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::put
          (RefHash2KeysTableOf_unsigned_int_ *this,void *key1,int key2,uint *valueToAdopt)

{
  int iVar1;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_unsigned_int_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHash2KeysTableBucketElem_unsigned_int_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus << 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key1,key2,&hashVal);
  if (newBucket == (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x20);
    this_00 = (RefHash2KeysTableBucketElem_unsigned_int_ *)
              operator_new(0x20,(void *)CONCAT44(extraout_var,iVar1));
    RefHash2KeysTableBucketElem<unsigned_int>::RefHash2KeysTableBucketElem
              (this_00,key1,key2,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (newBucket->fData != (uint *)0x0)) {
      operator_delete(newBucket->fData);
    }
    newBucket->fData = valueToAdopt;
    newBucket->fKey1 = key1;
    newBucket->fKey2 = key2;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::XMLAttr>::addElement
          (BaseRefVectorOf_xercesc_2_7__XMLAttr_ *this,XMLAttr *toAdd)

{
  ensureExtraCapacity(this,1);
  *(XMLAttr **)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0xc) * 8) = toAdd;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return;
}


XMLAttr * __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::XMLAttr>::elementAt
          (BaseRefVectorOf_xercesc_2_7__XMLAttr_ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (*(uint *)(this + 0xc) <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/BaseRefVectorOf.c",0xf9,Vector_BadIndex,
               *(MemoryManager **)(this + 0x20));
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return *(XMLAttr **)(*(long *)(this + 0x18) + (ulong)getAt * 8);
}


void __thiscall
xercesc_2_7::ValueStackOf<bool>::ValueStackOf
          (ValueStackOf_bool_ *this,uint fInitCapacity,MemoryManager *manager,bool toCallDestructor)

{
  XMemory::XMemory(&this->super_XMemory);
  ValueVectorOf<bool>::ValueVectorOf(&this->fVector,fInitCapacity,manager,toCallDestructor);
  return;
}


void __thiscall xercesc_2_7::ValueStackOf<bool>::removeAllElements(ValueStackOf_bool_ *this)

{
  ValueVectorOf<bool>::removeAllElements(&this->fVector);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::removeAll(RefHashTableOf_unsigned_int_ *this)

{
  RefHashTableBucketElem_unsigned_int_ *pRVar1;
  bool bVar2;
  uint buckInd;
  RefHashTableBucketElem_unsigned_int_ *curElem;
  RefHashTableBucketElem_unsigned_int_ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHashTableBucketElem_unsigned_int_ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) && (curElem->fData != (uint *)0x0)) {
          operator_delete(curElem->fData);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] = (RefHashTableBucketElem_unsigned_int_ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_>::Janitor
          (Janitor_xercesc_2_7__BaseRefVectorOf_short_unsigned_int___ *this,
          BaseRefVectorOf_short_unsigned_int_ *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_>::_Janitor
          (Janitor_xercesc_2_7__BaseRefVectorOf_short_unsigned_int___ *this)

{
  reset(this,(BaseRefVectorOf_short_unsigned_int_ *)0x0);
  return;
}


uint __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::size(BaseRefVectorOf_short_unsigned_int_ *this)

{
  return this->fCurCount;
}


ushort * __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::elementAt
          (BaseRefVectorOf_short_unsigned_int_ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/BaseRefVectorOf.c",0xf9,Vector_BadIndex,this->fMemoryManager)
    ;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return this->fElemList[getAt];
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::InputSource>::Janitor
          (Janitor_xercesc_2_7__InputSource_ *this,InputSource *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::InputSource>::_Janitor(Janitor_xercesc_2_7__InputSource_ *this)

{
  reset(this,(InputSource *)0x0);
  return;
}


bool __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::containsKey
          (ValueHashTableOf_short_unsigned_int_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  ValueHashTableBucketElem_short_unsigned_int_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (ValueHashTableBucketElem_short_unsigned_int_ *)0x0;
}


uint * __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::elementAt(ValueVectorOf_unsigned_int_ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/ValueVectorOf.c",0xce,Vector_BadIndex,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return this->fElemList + getAt;
}


RefHash2KeysTableBucketElem_xercesc_2_7__SchemaAttDef_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::findBucketElem
          (RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ *this,void *key1,int key2,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaAttDef_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaAttDef_ *)0x0) {
      return (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaAttDef_ *)0x0;
    }
    if ((key2 == curElem->fKey2) &&
       (iVar3 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key1,curElem->fKey1),
       (char)iVar3 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::PSVIAttribute>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__PSVIAttribute_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  PSVIAttribute **newList;
  PSVIAttribute **ppPVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppPVar2 = (PSVIAttribute **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppPVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppPVar2[index] = (PSVIAttribute *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppPVar2;
    this->fMaxCount = newMax;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::ensureExtraCapacity
          (BaseRefVectorOf_short_unsigned_int_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  ushort **newList;
  ushort **ppuVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppuVar2 = (ushort **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppuVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppuVar2[index] = (ushort *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppuVar2;
    this->fMaxCount = newMax;
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::DatatypeValidator>::findBucketElem
          (RefHashTableOf_xercesc_2_7__DatatypeValidator_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ * __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::findBucketElem
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this,void *key1,int key2,int key3,
          uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)0x0) {
      return (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)0x0;
    }
    if (((key2 == curElem->fKey2) && (key3 == curElem->fKey3)) &&
       (iVar3 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key1,curElem->fKey1),
       (char)iVar3 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::initialize
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this,uint modulus)

{
  int iVar1;
  IllegalArgumentException *this_00;
  undefined4 extraout_var;
  uint index;
  
  if (modulus == 0) {
    this_00 = (IllegalArgumentException *)__cxa_allocate_exception(0x30);
    IllegalArgumentException::IllegalArgumentException
              (this_00,"./xercesc/util/RefHash3KeysIdPool.c",0x8a,HshTbl_ZeroModulus,
               this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&IllegalArgumentException::typeinfo,
                IllegalArgumentException::_IllegalArgumentException);
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fHashModulus << 3);
  this->fBucketList =
       (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl>::
RefHash3KeysTableBucketElem
          (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *this,void *key1,int key2,
          int key3,SchemaElementDecl *value,
          RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey1 = key1;
  this->fKey2 = key2;
  this->fKey3 = key3;
  return;
}


uint __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>::size
          (ValueVectorOf_xercesc_2_7__ComplexTypeInfo__ *this)

{
  return this->fCurCount;
}


MemoryManager * __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>::getMemoryManager
          (ValueVectorOf_xercesc_2_7__ComplexTypeInfo__ *this)

{
  return this->fMemoryManager;
}


ComplexTypeInfo ** __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>::elementAt
          (ValueVectorOf_xercesc_2_7__ComplexTypeInfo__ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/ValueVectorOf.c",0xc6,Vector_BadIndex,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return this->fElemList + getAt;
}


ValueHashTableBucketElem_short_unsigned_int_ * __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::findBucketElem
          (ValueHashTableOf_short_unsigned_int_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  ValueHashTableBucketElem_short_unsigned_int_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (ValueHashTableBucketElem_short_unsigned_int_ *)0x0) {
      return (ValueHashTableBucketElem_short_unsigned_int_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  KVStringPair **newList;
  KVStringPair **ppKVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppKVar2 = (KVStringPair **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppKVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppKVar2[index] = (KVStringPair *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppKVar2;
    this->fMaxCount = newMax;
  }
  return;
}


uint __thiscall xercesc_2_7::ValueVectorOf<bool>::size(ValueVectorOf_bool_ *this)

{
  return this->fCurCount;
}


MemoryManager * __thiscall
xercesc_2_7::ValueVectorOf<bool>::getMemoryManager(ValueVectorOf_bool_ *this)

{
  return this->fMemoryManager;
}


bool * __thiscall xercesc_2_7::ValueVectorOf<bool>::elementAt(ValueVectorOf_bool_ *this,uint getAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= getAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/ValueVectorOf.c",0xce,Vector_BadIndex,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  return this->fElemList + getAt;
}


void __thiscall
xercesc_2_7::ValueVectorOf<bool>::removeElementAt(ValueVectorOf_bool_ *this,uint removeAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  uint index;
  
  if (removeAt < this->fCurCount) {
    index = removeAt;
    if (removeAt == this->fCurCount - 1) {
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fCurCount = this->fCurCount - 1;
    }
    return;
  }
  this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
  ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
            (this_00,"./xercesc/util/ValueVectorOf.c",0x9c,Vector_BadIndex,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
              ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
}


void __thiscall xercesc_2_7::ValueVectorOf<bool>::addElement(ValueVectorOf_bool_ *this,bool *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::isEmpty(RefHash2KeysTableOf_unsigned_int_ *this)

{
  return this->fCount == 0;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00114350;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (KVStringPair **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (KVStringPair **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (KVStringPair *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00114350;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::initialize
          (ValueHashTableOf_short_unsigned_int_ *this,uint modulus)

{
  int iVar1;
  IllegalArgumentException *this_00;
  undefined4 extraout_var;
  uint index;
  
  if (modulus == 0) {
    this_00 = (IllegalArgumentException *)__cxa_allocate_exception(0x30);
    IllegalArgumentException::IllegalArgumentException
              (this_00,"./xercesc/util/ValueHashTableOf.c",0x45,HshTbl_ZeroModulus,
               this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&IllegalArgumentException::typeinfo,
                IllegalArgumentException::_IllegalArgumentException);
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fHashModulus << 3);
  this->fBucketList = (ValueHashTableBucketElem_short_unsigned_int_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (ValueHashTableBucketElem_short_unsigned_int_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableBucketElem<short_unsigned_int>::ValueHashTableBucketElem
          (ValueHashTableBucketElem_short_unsigned_int_ *this,void *key,ushort *value,
          ValueHashTableBucketElem_short_unsigned_int_ *next)

{
  this->fData = *value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::initialize
          (RefHashTableOf_unsigned_int_ *this,uint modulus)

{
  int iVar1;
  IllegalArgumentException *this_00;
  undefined4 extraout_var;
  uint index;
  
  if (modulus == 0) {
    this_00 = (IllegalArgumentException *)__cxa_allocate_exception(0x30);
    IllegalArgumentException::IllegalArgumentException
              (this_00,"./xercesc/util/RefHashTableOf.c",99,HshTbl_ZeroModulus,this->fMemoryManager)
    ;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&IllegalArgumentException::typeinfo,
                IllegalArgumentException::_IllegalArgumentException);
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fHashModulus << 3);
  this->fBucketList = (RefHashTableBucketElem_unsigned_int_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHashTableBucketElem_unsigned_int_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::initialize
          (RefHash2KeysTableOf_unsigned_int_ *this,uint modulus)

{
  int iVar1;
  IllegalArgumentException *this_00;
  undefined4 extraout_var;
  uint index;
  
  if (modulus == 0) {
    this_00 = (IllegalArgumentException *)__cxa_allocate_exception(0x30);
    IllegalArgumentException::IllegalArgumentException
              (this_00,"./xercesc/util/RefHash2KeysTableOf.c",0x5d,HshTbl_ZeroModulus,
               this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&IllegalArgumentException::typeinfo,
                IllegalArgumentException::_IllegalArgumentException);
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fHashModulus << 3);
  this->fBucketList = (RefHash2KeysTableBucketElem_unsigned_int_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::removeAll
          (ValueHashTableOf_short_unsigned_int_ *this)

{
  ValueHashTableBucketElem_short_unsigned_int_ *pVVar1;
  uint buckInd;
  ValueHashTableBucketElem_short_unsigned_int_ *curElem;
  ValueHashTableBucketElem_short_unsigned_int_ *nextElem;
  
  for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
    curElem = this->fBucketList[buckInd];
    while (curElem != (ValueHashTableBucketElem_short_unsigned_int_ *)0x0) {
      pVVar1 = curElem->fNext;
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
      curElem = pVVar1;
    }
    this->fBucketList[buckInd] = (ValueHashTableBucketElem_short_unsigned_int_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::removeAll
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this)

{
  RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *pRVar1;
  long *plVar2;
  uint buckInd;
  RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *curElem;
  RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *nextElem;
  
  for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
    curElem = this->fBucketList[buckInd];
    while (curElem != (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)0x0) {
      pRVar1 = curElem->fNext;
      if ((this->fAdoptedElems != false) && (plVar2 = (long *)curElem->fData, plVar2 != (long *)0x0)
         ) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
      curElem = pRVar1;
    }
    this->fBucketList[buckInd] = (RefHash3KeysTableBucketElem_xercesc_2_7__SchemaElementDecl_ *)0x0;
  }
  this->fIdCounter = 0;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::cleanup
          (RefHashTableOf_unsigned_int_ *this,EVP_PKEY_CTX *ctx)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  this->fBucketList = (RefHashTableBucketElem_unsigned_int_ **)0x0;
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall xercesc_2_7::ValueVectorOf<bool>::_ValueVectorOf(ValueVectorOf_bool_ *this)

{
  int index;
  
  if (this->fCallDestructor != false) {
    index = this->fMaxCount;
    do {
      index = index - 1;
    } while (-1 < index);
  }
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::reset
          (ArrayJanitor_short_unsigned_int_ *this,ushort *p)

{
  if (this->fData != (ushort *)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (ushort *)0x0) {
        operator_delete__(this->fData);
      }
    }
    else {
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fData);
    }
  }
  this->fData = p;
  this->fMemoryManager = (MemoryManager *)0x0;
  return;
}


RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::findBucketElem
          (RefHashTableOf_xercesc_2_7__XMLAttDef_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


RefHashTableBucketElem_unsigned_int_ * __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::findBucketElem
          (RefHashTableOf_unsigned_int_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_unsigned_int_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_unsigned_int_ *)0x0) {
      return (RefHashTableBucketElem_unsigned_int_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::rehash(RefHashTableOf_unsigned_int_ *this)

{
  long lVar1;
  RefHashTableBucketElem_unsigned_int_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_unsigned_int_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_unsigned_int_ *curElem;
  RefHashTableBucketElem_unsigned_int_ **newBucketList;
  RefHashTableBucketElem_unsigned_int_ *nextElem;
  RefHashTableBucketElem_unsigned_int_ *newHeadElem;
  RefHashTableBucketElem_unsigned_int_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_unsigned_int___ guard;
  RefHashTableBucketElem_unsigned_int_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_unsigned_int_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_unsigned_int_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::_ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<unsigned_int>::RefHashTableBucketElem
          (RefHashTableBucketElem_unsigned_int_ *this,void *key,uint *value,
          RefHashTableBucketElem_unsigned_int_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


RefHash2KeysTableBucketElem_unsigned_int_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::findBucketElem
          (RefHash2KeysTableOf_unsigned_int_ *this,void *key1,int key2,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_unsigned_int_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0) {
      return (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0;
    }
    iVar3 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key1,curElem->fKey1);
    if (((char)iVar3 == '\0') || (key2 != curElem->fKey2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::rehash(RefHash2KeysTableOf_unsigned_int_ *this)

{
  long lVar1;
  RefHash2KeysTableBucketElem_unsigned_int_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_unsigned_int_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHash2KeysTableBucketElem_unsigned_int_ *curElem;
  RefHash2KeysTableBucketElem_unsigned_int_ **newBucketList;
  RefHash2KeysTableBucketElem_unsigned_int_ *nextElem;
  RefHash2KeysTableBucketElem_unsigned_int_ *newHeadElem;
  RefHash2KeysTableBucketElem_unsigned_int_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_unsigned_int___ guard;
  RefHash2KeysTableBucketElem_unsigned_int_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 8 + 1;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHash2KeysTableBucketElem_unsigned_int_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey1,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::_ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


RefHash2KeysTableBucketElem_unsigned_int_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::findBucketElem
          (RefHash2KeysTableOf_unsigned_int_ *this,void *key1,int key2,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_unsigned_int_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0) {
      return (RefHash2KeysTableBucketElem_unsigned_int_ *)0x0;
    }
    if ((key2 == curElem->fKey2) &&
       (iVar3 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key1,curElem->fKey1),
       (char)iVar3 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>::RefHash2KeysTableBucketElem
          (RefHash2KeysTableBucketElem_unsigned_int_ *this,void *key1,int key2,uint *value,
          RefHash2KeysTableBucketElem_unsigned_int_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey1 = key1;
  this->fKey2 = key2;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::XMLAttr>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__XMLAttr_ *this,uint length)

{
  long lVar1;
  uint newMax;
  uint index;
  XMLAttr **newList;
  
  newMax = length + *(int *)(this + 0xc);
  if (*(uint *)(this + 0x10) < newMax) {
    if (newMax < (*(uint *)(this + 0x10) >> 1) + *(int *)(this + 0x10)) {
      newMax = (*(uint *)(this + 0x10) >> 1) + *(int *)(this + 0x10);
    }
    lVar1 = (**(code **)(**(long **)(this + 0x20) + 0x10))
                      (*(undefined8 *)(this + 0x20),(ulong)newMax << 3);
    for (index = 0; index < *(uint *)(this + 0xc); index = index + 1) {
      *(undefined8 *)(lVar1 + (ulong)index * 8) =
           *(undefined8 *)(*(long *)(this + 0x18) + (ulong)index * 8);
    }
    for (; index < newMax; index = index + 1) {
      *(undefined8 *)(lVar1 + (ulong)index * 8) = 0;
    }
    (**(code **)(**(long **)(this + 0x20) + 0x18))
              (*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x18));
    *(long *)(this + 0x18) = lVar1;
    *(uint *)(this + 0x10) = newMax;
  }
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<bool>::ValueVectorOf
          (ValueVectorOf_bool_ *this,uint maxElems,MemoryManager *manager,bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (bool *)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount);
  this->fElemList = (bool *)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount);
  return;
}


void __thiscall xercesc_2_7::ValueVectorOf<bool>::removeAllElements(ValueVectorOf_bool_ *this)

{
  this->fCurCount = 0;
  return;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::isEmpty(RefHashTableOf_unsigned_int_ *this)

{
  return this->fCount == 0;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_>::reset
          (Janitor_xercesc_2_7__BaseRefVectorOf_short_unsigned_int___ *this,
          BaseRefVectorOf_short_unsigned_int_ *p)

{
  BaseRefVectorOf_short_unsigned_int_ *pBVar1;
  
  if ((this->fData != (BaseRefVectorOf_short_unsigned_int_ *)0x0) &&
     (pBVar1 = this->fData, pBVar1 != (BaseRefVectorOf_short_unsigned_int_ *)0x0)) {
    (*pBVar1->_vptr_BaseRefVectorOf[1])(pBVar1);
  }
  this->fData = p;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::InputSource>::reset
          (Janitor_xercesc_2_7__InputSource_ *this,InputSource *p)

{
  long *plVar1;
  
  if ((this->fData != (InputSource *)0x0) && (plVar1 = (long *)this->fData, plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fData = p;
  return;
}


ValueHashTableBucketElem_short_unsigned_int_ * __thiscall
xercesc_2_7::ValueHashTableOf<short_unsigned_int>::findBucketElem
          (ValueHashTableOf_short_unsigned_int_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  ValueHashTableBucketElem_short_unsigned_int_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (ValueHashTableBucketElem_short_unsigned_int_ *)0x0) {
      return (ValueHashTableBucketElem_short_unsigned_int_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


/* WARNING: Removing unreachable block (ram,0x00113fe7) */

void __thiscall
xercesc_2_7::ValueVectorOf<bool>::ensureExtraCapacity(ValueVectorOf_bool_ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  bool *newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0010ca58);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((bool *)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (bool *)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::ArrayJanitor
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_unsigned_int___ *this,
          RefHashTableBucketElem_unsigned_int_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::_ArrayJanitor
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_unsigned_int___ *this)

{
  reset(this,(RefHashTableBucketElem_unsigned_int_ **)0x0);
  return;
}


RefHashTableBucketElem_unsigned_int_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::release
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_unsigned_int___ *this)

{
  RefHashTableBucketElem_unsigned_int_ **ppRVar1;
  RefHashTableBucketElem_unsigned_int_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_unsigned_int_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::ArrayJanitor
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_unsigned_int___ *this,
          RefHash2KeysTableBucketElem_unsigned_int_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::_ArrayJanitor
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_unsigned_int___ *this)

{
  reset(this,(RefHash2KeysTableBucketElem_unsigned_int_ **)0x0);
  return;
}


RefHash2KeysTableBucketElem_unsigned_int_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::release
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_unsigned_int___ *this)

{
  RefHash2KeysTableBucketElem_unsigned_int_ **ppRVar1;
  RefHash2KeysTableBucketElem_unsigned_int_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHash2KeysTableBucketElem_unsigned_int_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_unsigned_int___ *this,
          RefHashTableBucketElem_unsigned_int_ **p)

{
  if (this->fData != (RefHashTableBucketElem_unsigned_int_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_unsigned_int_ **)0x0) {
        operator_delete__(this->fData);
      }
    }
    else {
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fData);
    }
  }
  this->fData = p;
  this->fMemoryManager = (MemoryManager *)0x0;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_unsigned_int___ *this,
          RefHash2KeysTableBucketElem_unsigned_int_ **p)

{
  if (this->fData != (RefHash2KeysTableBucketElem_unsigned_int_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHash2KeysTableBucketElem_unsigned_int_ **)0x0) {
        operator_delete__(this->fData);
      }
    }
    else {
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fData);
    }
  }
  this->fData = p;
  this->fMemoryManager = (MemoryManager *)0x0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::setElementAt
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,KVStringPair *toSet,uint setAt)

{
  long *plVar1;
  ArrayIndexOutOfBoundsException *this_00;
  
  if (this->fCurCount <= setAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/BaseRefVectorOf.c",0x43,Vector_BadIndex,this->fMemoryManager)
    ;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  if ((this->fAdoptedElems != false) &&
     (plVar1 = (long *)this->fElemList[setAt], plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fElemList[setAt] = toSet;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::removeAllElements
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  long *plVar1;
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) &&
       (plVar1 = (long *)this->fElemList[index], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    this->fElemList[index] = (KVStringPair *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::removeElementAt
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,uint removeAt)

{
  long *plVar1;
  ArrayIndexOutOfBoundsException *this_00;
  uint index;
  
  if (removeAt < this->fCurCount) {
    if ((this->fAdoptedElems != false) &&
       (plVar1 = (long *)this->fElemList[removeAt], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    index = removeAt;
    if (removeAt == this->fCurCount - 1) {
      this->fElemList[removeAt] = (KVStringPair *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (KVStringPair *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    return;
  }
  this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
  ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
            (this_00,"./xercesc/util/BaseRefVectorOf.c",0x90,Vector_BadIndex,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
              ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::removeLastElement
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  long *plVar1;
  
  if (((this->fCurCount != 0) &&
      (this->fCurCount = this->fCurCount - 1, this->fAdoptedElems != false)) &&
     (plVar1 = (long *)this->fElemList[this->fCurCount], plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::cleanup
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this,EVP_PKEY_CTX *ctx)

{
  long *plVar1;
  uint index;
  
  if (this->fAdoptedElems != false) {
    for (index = 0; index < this->fCurCount; index = index + 1) {
      plVar1 = (long *)this->fElemList[index];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
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
/* xercesc_2_7::XMLBuffer::insureCapacity(unsigned int) */

void xercesc_2_7::XMLBuffer::insureCapacity(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLBufferMgr::bidOnBuffer() */

void xercesc_2_7::XMLBufferMgr::bidOnBuffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLBufferMgr::releaseBuffer(xercesc_2_7::XMLBuffer&) */

void xercesc_2_7::XMLBufferMgr::releaseBuffer(XMLBuffer *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLException::XMLException(char const*, unsigned int, xercesc_2_7::MemoryManager*)
    */

void __thiscall
xercesc_2_7::XMLException::XMLException
          (XMLException *this,char *param_1,uint param_2,MemoryManager *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLException::loadExceptText(xercesc_2_7::XMLExcepts::Codes) */

void xercesc_2_7::XMLException::loadExceptText(Codes param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLException::~XMLException() */

void __thiscall xercesc_2_7::XMLException::_XMLException(XMLException *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void _Unwind_Resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLException::XMLException(xercesc_2_7::XMLException const&) */

void __thiscall xercesc_2_7::XMLException::XMLException(XMLException *this,XMLException *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMemory::operator delete(void*) */

void __thiscall xercesc_2_7::XMemory::operator_delete(XMemory *this,void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMemory::operator new(unsigned long, xercesc_2_7::MemoryManager*) */

void * xercesc_2_7::XMemory::operator_new(ulong param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMemory::operator delete(void*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMemory::operator_delete(void *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::compareNString(unsigned short const*, unsigned short const*, unsigned
   int) */

void xercesc_2_7::XMLString::compareNString(ushort *param_1,ushort *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLException::loadExceptText(xercesc_2_7::XMLExcepts::Codes, unsigned short const*,
   unsigned short const*, unsigned short const*, unsigned short const*) */

void xercesc_2_7::XMLException::loadExceptText
               (Codes param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLReader::refreshCharBuffer() */

void xercesc_2_7::XMLReader::refreshCharBuffer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLReader::handleEOL(unsigned short&, bool) */

void xercesc_2_7::XMLReader::handleEOL(ushort *param_1,bool param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLReader::getQName(xercesc_2_7::XMLBuffer&, int*) */

void xercesc_2_7::XMLReader::getQName(XMLBuffer *param_1,int *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLReader::skippedString(unsigned short const*) */

void xercesc_2_7::XMLReader::skippedString(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::getNextChar() */

void xercesc_2_7::ReaderMgr::getNextChar(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::copyString(unsigned short*, unsigned short const*) */

void xercesc_2_7::XMLString::copyString(ushort *param_1,ushort *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLEntityDecl::~XMLEntityDecl() */

void __thiscall xercesc_2_7::XMLEntityDecl::_XMLEntityDecl(XMLEntityDecl *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::QName::setName(unsigned short const*, unsigned short const*, unsigned int) */

void xercesc_2_7::QName::setName(ushort *param_1,ushort *param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLAttr::setValue(unsigned short const*) */

void xercesc_2_7::XMLAttr::setValue(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::QName::getRawName() */

void xercesc_2_7::QName::getRawName(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ComplexTypeInfo::makeContentModel(bool) */

void xercesc_2_7::ComplexTypeInfo::makeContentModel(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::PSVIAttribute::PSVIAttribute(xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::PSVIAttribute::PSVIAttribute(PSVIAttribute *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::QName::QName(unsigned short const*, unsigned short const*, unsigned int,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::QName::QName
          (QName *this,ushort *param_1,ushort *param_2,uint param_3,MemoryManager *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLScanner::XMLScanner(xercesc_2_7::XMLValidator*, xercesc_2_7::GrammarResolver*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XMLScanner::XMLScanner
          (XMLScanner *this,XMLValidator *param_1,GrammarResolver *param_2,MemoryManager *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLScanner::~XMLScanner() */

void __thiscall xercesc_2_7::XMLScanner::_XMLScanner(XMLScanner *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLScanner::XMLScanner(xercesc_2_7::XMLDocumentHandler*,
   xercesc_2_7::DocTypeHandler*, xercesc_2_7::XMLEntityHandler*, xercesc_2_7::XMLErrorReporter*,
   xercesc_2_7::XMLValidator*, xercesc_2_7::GrammarResolver*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XMLScanner::XMLScanner
          (XMLScanner *this,XMLDocumentHandler *param_1,DocTypeHandler *param_2,
          XMLEntityHandler *param_3,XMLErrorReporter *param_4,XMLValidator *param_5,
          GrammarResolver *param_6,MemoryManager *param_7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::reset() */

void xercesc_2_7::ReaderMgr::reset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::scanProlog() */

void xercesc_2_7::XMLScanner::scanProlog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::atEOF() const */

void xercesc_2_7::ReaderMgr::atEOF(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::emitError(xercesc_2_7::XMLErrs::Codes) */

void xercesc_2_7::XMLScanner::emitError(Codes param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::checkIDRefs() */

void xercesc_2_7::XMLScanner::checkIDRefs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::scanMiscellaneous() */

void xercesc_2_7::XMLScanner::scanMiscellaneous(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::emitError(xercesc_2_7::XMLErrs::Codes, unsigned short const*, unsigned
   short const*, unsigned short const*, unsigned short const*) */

void xercesc_2_7::XMLScanner::emitError
               (Codes param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::isLegalToken(xercesc_2_7::XMLPScanToken const&) */

void xercesc_2_7::XMLScanner::isLegalToken(XMLPScanToken *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::senseNextToken(unsigned int&) */

void xercesc_2_7::XMLScanner::senseNextToken(uint *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::popTop() */

void xercesc_2_7::ElemStack::popTop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::scanComment() */

void xercesc_2_7::XMLScanner::scanComment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::scanPI() */

void xercesc_2_7::XMLScanner::scanPI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::peekNextChar() */

void xercesc_2_7::ReaderMgr::peekNextChar(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::skipPastSpaces(bool) */

void xercesc_2_7::ReaderMgr::skipPastSpaces(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::scanEq(bool) */

void xercesc_2_7::XMLScanner::scanEq(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::skipUntilInOrWS(unsigned short const*) */

void xercesc_2_7::ReaderMgr::skipUntilInOrWS(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::KVStringPair::KVStringPair(unsigned short const*, unsigned int, unsigned short
   const*, unsigned int, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::KVStringPair::KVStringPair
          (KVStringPair *this,ushort *param_1,uint param_2,ushort *param_3,uint param_4,
          MemoryManager *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::skippedChar(unsigned short) */

void xercesc_2_7::ReaderMgr::skippedChar(ushort param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::skipQuotedString(unsigned short) */

void xercesc_2_7::ReaderMgr::skipQuotedString(ushort param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLValidator::emitError(xercesc_2_7::XMLValid::Codes, unsigned short const*,
   unsigned short const*, unsigned short const*, unsigned short const*) */

void xercesc_2_7::XMLValidator::emitError
               (Codes param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::IdentityConstraintHandler::deactivateContext(xercesc_2_7::SchemaElementDecl*,
   unsigned short const*) */

void xercesc_2_7::IdentityConstraintHandler::deactivateContext
               (SchemaElementDecl *param_1,ushort *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::skipUntilIn(unsigned short const*) */

void xercesc_2_7::ReaderMgr::skipUntilIn(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::topElement() const */

void xercesc_2_7::ElemStack::topElement(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::addLevel() */

void xercesc_2_7::ElemStack::addLevel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::QName::~QName() */

void __thiscall xercesc_2_7::QName::_QName(QName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::getURIText(unsigned int) const */

void xercesc_2_7::XMLScanner::getURIText(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SchemaElementDecl::SchemaElementDecl(unsigned short const*, unsigned short const*,
   int, xercesc_2_7::SchemaElementDecl::ModelTypes, unsigned int, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::SchemaElementDecl::SchemaElementDecl
          (SchemaElementDecl *this,ushort *param_1,ushort *param_2,int param_3,ModelTypes param_4,
          uint param_5,MemoryManager *param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::setElement(xercesc_2_7::XMLElementDecl*, unsigned int) */

void xercesc_2_7::ElemStack::setElement(XMLElementDecl *param_1,uint param_2)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLValidator::emitError(xercesc_2_7::XMLValid::Codes) */

void xercesc_2_7::XMLValidator::emitError(Codes param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::addChild(xercesc_2_7::QName*, bool) */

void xercesc_2_7::ElemStack::addChild(QName *param_1,bool param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::IdentityConstraintHandler::activateIdentityConstraint(xercesc_2_7::SchemaElementDecl*,
   int, unsigned int, unsigned short const*, xercesc_2_7::RefVectorOf<xercesc_2_7::XMLAttr> const&,
   unsigned int) */

void xercesc_2_7::IdentityConstraintHandler::activateIdentityConstraint
               (SchemaElementDecl *param_1,int param_2,uint param_3,ushort *param_4,
               RefVectorOf *param_5,uint param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSModel::getXSObject(void*) */

void xercesc_2_7::XSModel::getXSObject(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::PSVIElement::reset(xercesc_2_7::PSVIItem::VALIDITY_STATE,
   xercesc_2_7::PSVIItem::ASSESSMENT_TYPE, unsigned short const*, bool,
   xercesc_2_7::XSElementDeclaration*, xercesc_2_7::XSTypeDefinition*,
   xercesc_2_7::XSSimpleTypeDefinition*, xercesc_2_7::XSModel*, unsigned short const*, unsigned
   short const*, unsigned short*, xercesc_2_7::XSNotationDeclaration*) */

void xercesc_2_7::PSVIElement::reset
               (VALIDITY_STATE param_1,ASSESSMENT_TYPE param_2,ushort *param_3,bool param_4,
               XSElementDeclaration *param_5,XSTypeDefinition *param_6,
               XSSimpleTypeDefinition *param_7,XSModel *param_8,ushort *param_9,ushort *param_10,
               ushort *param_11,XSNotationDeclaration *param_12)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::mapPrefixToURI(unsigned short const*, xercesc_2_7::ElemStack::MapModes,
   bool&) const */

void xercesc_2_7::ElemStack::mapPrefixToURI(ushort *param_1,MapModes param_2,bool *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GrammarResolver::cacheGrammarFromParse(bool) */

void xercesc_2_7::GrammarResolver::cacheGrammarFromParse(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SchemaValidator::SchemaValidator(xercesc_2_7::XMLErrorReporter*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::SchemaValidator::SchemaValidator
          (SchemaValidator *this,XMLErrorReporter *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::initValidator(xercesc_2_7::XMLValidator*) */

void xercesc_2_7::XMLScanner::initValidator(XMLValidator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IdentityConstraintHandler::IdentityConstraintHandler(xercesc_2_7::XMLScanner*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::IdentityConstraintHandler::IdentityConstraintHandler
          (IdentityConstraintHandler *this,XMLScanner *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::HashPtr::HashPtr() */

void __thiscall xercesc_2_7::HashPtr::HashPtr(HashPtr *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::HashXMLCh::HashXMLCh() */

void __thiscall xercesc_2_7::HashXMLCh::HashXMLCh(HashXMLCh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::PSVIAttributeList::PSVIAttributeList(xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::PSVIAttributeList::PSVIAttributeList(PSVIAttributeList *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GrammarResolver::getGrammar(unsigned short const*) */

void xercesc_2_7::GrammarResolver::getGrammar(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::getNewUIntPtr() */

void xercesc_2_7::XMLScanner::getNewUIntPtr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::getURIText(unsigned int, xercesc_2_7::XMLBuffer&) const */

void xercesc_2_7::XMLScanner::getURIText(uint param_1,XMLBuffer *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::SchemaValidator::normalizeWhiteSpace(xercesc_2_7::DatatypeValidator*, unsigned short
   const*, xercesc_2_7::XMLBuffer&) */

void xercesc_2_7::SchemaValidator::normalizeWhiteSpace
               (DatatypeValidator *param_1,ushort *param_2,XMLBuffer *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::PSVIAttribute::reset(unsigned short const*, xercesc_2_7::PSVIItem::VALIDITY_STATE,
   xercesc_2_7::PSVIItem::ASSESSMENT_TYPE, xercesc_2_7::XSSimpleTypeDefinition*,
   xercesc_2_7::XSSimpleTypeDefinition*, unsigned short const*, bool,
   xercesc_2_7::XSAttributeDeclaration*, xercesc_2_7::DatatypeValidator*) */

void xercesc_2_7::PSVIAttribute::reset
               (ushort *param_1,VALIDITY_STATE param_2,ASSESSMENT_TYPE param_3,
               XSSimpleTypeDefinition *param_4,XSSimpleTypeDefinition *param_5,ushort *param_6,
               bool param_7,XSAttributeDeclaration *param_8,DatatypeValidator *param_9)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLAttr::XMLAttr(unsigned int, unsigned short const*, unsigned short const*,
   unsigned short const*, xercesc_2_7::XMLAttDef::AttTypes, bool, xercesc_2_7::MemoryManager*,
   xercesc_2_7::DatatypeValidator*, bool) */

void __thiscall
xercesc_2_7::XMLAttr::XMLAttr
          (XMLAttr *this,uint param_1,ushort *param_2,ushort *param_3,ushort *param_4,
          AttTypes param_5,bool param_6,MemoryManager *param_7,DatatypeValidator *param_8,
          bool param_9)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::PSVIAttribute::setValue(unsigned short const*) */

void xercesc_2_7::PSVIAttribute::setValue(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLAttr::XMLAttr(xercesc_2_7::MemoryManager*) */

void __thiscall xercesc_2_7::XMLAttr::XMLAttr(XMLAttr *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::PSVIAttributeList::getAttributePSVIByName(unsigned short const*, unsigned short
   const*) */

void xercesc_2_7::PSVIAttributeList::getAttributePSVIByName(ushort *param_1,ushort *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GrammarResolver::getXSModel() */

void xercesc_2_7::GrammarResolver::getXSModel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SchemaGrammar::SchemaGrammar(xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::SchemaGrammar::SchemaGrammar(SchemaGrammar *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::IdentityConstraintHandler::reset() */

void xercesc_2_7::IdentityConstraintHandler::reset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::reset(unsigned int, unsigned int, unsigned int, unsigned int) */

void xercesc_2_7::ElemStack::reset(uint param_1,uint param_2,uint param_3,uint param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::PSVIElement::PSVIElement(xercesc_2_7::MemoryManager*) */

void __thiscall xercesc_2_7::PSVIElement::PSVIElement(PSVIElement *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::createReader(xercesc_2_7::InputSource const&, bool,
   xercesc_2_7::XMLReader::RefFrom, xercesc_2_7::XMLReader::Types, xercesc_2_7::XMLReader::Sources,
   bool) */

void xercesc_2_7::ReaderMgr::createReader
               (InputSource *param_1,bool param_2,RefFrom param_3,Types param_4,Sources param_5,
               bool param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::pushReader(xercesc_2_7::XMLReader*, xercesc_2_7::XMLEntityDecl*) */

void xercesc_2_7::ReaderMgr::pushReader(XMLReader *param_1,XMLEntityDecl *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::recreateUIntPool() */

void xercesc_2_7::XMLScanner::recreateUIntPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::resetUIntPool() */

void xercesc_2_7::XMLScanner::resetUIntPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLReader::isAllSpaces(unsigned short const*, unsigned int) const */

void xercesc_2_7::XMLReader::isAllSpaces(ushort *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ElemStack::addPrefix(unsigned short const*, unsigned int) */

void xercesc_2_7::ElemStack::addPrefix(ushort *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::QName::QName(xercesc_2_7::MemoryManager*) */

void __thiscall xercesc_2_7::QName::QName(QName *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::QName::setName(unsigned short const*, unsigned int) */

void xercesc_2_7::QName::setName(ushort *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::tokenizeString(unsigned short const*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMLString::tokenizeString(ushort *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLSchemaDescriptionImpl::XMLSchemaDescriptionImpl(unsigned short const*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XMLSchemaDescriptionImpl::XMLSchemaDescriptionImpl
          (XMLSchemaDescriptionImpl *this,ushort *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLSchemaDescriptionImpl::setLocationHints(unsigned short const*) */

void xercesc_2_7::XMLSchemaDescriptionImpl::setLocationHints(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GrammarResolver::getGrammar(xercesc_2_7::XMLGrammarDescription*) */

void xercesc_2_7::GrammarResolver::getGrammar(XMLGrammarDescription *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLSchemaDescriptionImpl::~XMLSchemaDescriptionImpl() */

void __thiscall
xercesc_2_7::XMLSchemaDescriptionImpl::_XMLSchemaDescriptionImpl(XMLSchemaDescriptionImpl *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSDDOMParser::XSDDOMParser(xercesc_2_7::XMLValidator*, xercesc_2_7::MemoryManager*,
   xercesc_2_7::XMLGrammarPool*) */

void __thiscall
xercesc_2_7::XSDDOMParser::XSDDOMParser
          (XSDDOMParser *this,XMLValidator *param_1,MemoryManager *param_2,XMLGrammarPool *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::AbstractDOMParser::setValidationScheme(xercesc_2_7::AbstractDOMParser::ValSchemes)
    */

void xercesc_2_7::AbstractDOMParser::setValidationScheme(ValSchemes param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::AbstractDOMParser::setDoNamespaces(bool) */

void xercesc_2_7::AbstractDOMParser::setDoNamespaces(bool param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSDDOMParser::setUserEntityHandler(xercesc_2_7::XMLEntityHandler*) */

void xercesc_2_7::XSDDOMParser::setUserEntityHandler(XMLEntityHandler *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSDDOMParser::setUserErrorReporter(xercesc_2_7::XMLErrorReporter*) */

void xercesc_2_7::XSDDOMParser::setUserErrorReporter(XMLErrorReporter *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::removeChar(unsigned short const*, unsigned short const&,
   xercesc_2_7::XMLBuffer&) */

void xercesc_2_7::XMLString::removeChar(ushort *param_1,ushort *param_2,XMLBuffer *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::getLastExtEntityInfo(xercesc_2_7::ReaderMgr::LastExtEntityInfo&) const */

void xercesc_2_7::ReaderMgr::getLastExtEntityInfo(LastExtEntityInfo *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLURL::XMLURL(xercesc_2_7::MemoryManager*) */

void __thiscall xercesc_2_7::XMLURL::XMLURL(XMLURL *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLURL::setURL(unsigned short const*, unsigned short const*, xercesc_2_7::XMLURL&)
    */

void xercesc_2_7::XMLURL::setURL(ushort *param_1,ushort *param_2,XMLURL *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLURL::isRelative() const */

void xercesc_2_7::XMLURL::isRelative(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLUri::normalizeURI(unsigned short const*, xercesc_2_7::XMLBuffer&) */

void xercesc_2_7::XMLUri::normalizeURI(ushort *param_1,XMLBuffer *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::LocalFileInputSource::LocalFileInputSource(unsigned short const*, unsigned short
   const*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::LocalFileInputSource::LocalFileInputSource
          (LocalFileInputSource *this,ushort *param_1,ushort *param_2,MemoryManager *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLURL::hasInvalidChar() const */

void xercesc_2_7::XMLURL::hasInvalidChar(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::URLInputSource::URLInputSource(xercesc_2_7::XMLURL const&,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::URLInputSource::URLInputSource
          (URLInputSource *this,XMLURL *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLURL::~XMLURL() */

void __thiscall xercesc_2_7::XMLURL::_XMLURL(XMLURL *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::AbstractDOMParser::parse(xercesc_2_7::InputSource const&) */

void xercesc_2_7::AbstractDOMParser::parse(InputSource *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::AbstractDOMParser::getDocument() */

void xercesc_2_7::AbstractDOMParser::getDocument(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::TraverseSchema::TraverseSchema(xercesc_2_7::DOMElement*,
   xercesc_2_7::XMLStringPool*, xercesc_2_7::SchemaGrammar*, xercesc_2_7::GrammarResolver*,
   xercesc_2_7::XMLScanner*, unsigned short const*, xercesc_2_7::XMLEntityHandler*,
   xercesc_2_7::XMLErrorReporter*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::TraverseSchema::TraverseSchema
          (TraverseSchema *this,DOMElement *param_1,XMLStringPool *param_2,SchemaGrammar *param_3,
          GrammarResolver *param_4,XMLScanner *param_5,ushort *param_6,XMLEntityHandler *param_7,
          XMLErrorReporter *param_8,MemoryManager *param_9)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::TraverseSchema::~TraverseSchema() */

void __thiscall xercesc_2_7::TraverseSchema::_TraverseSchema(TraverseSchema *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSDDOMParser::~XSDDOMParser() */

void __thiscall xercesc_2_7::XSDDOMParser::_XSDDOMParser(XSDDOMParser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GrammarResolver::cacheGrammars() */

void xercesc_2_7::GrammarResolver::cacheGrammars(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ReaderMgr::skipIfQuote(unsigned short&) */

void xercesc_2_7::ReaderMgr::skipIfQuote(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::binToText(int, unsigned short*, unsigned int, unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMLString::binToText
               (int param_1,ushort *param_2,uint param_3,uint param_4,MemoryManager *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLReader::containsWhiteSpace(unsigned short const*, unsigned int) const */

void xercesc_2_7::XMLReader::containsWhiteSpace(ushort *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLScanner::scanCharRef(unsigned short&, unsigned short&) */

void xercesc_2_7::XMLScanner::scanCharRef(ushort *param_1,ushort *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::binToText(unsigned int, unsigned short*, unsigned int, unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMLString::binToText
               (uint param_1,ushort *param_2,uint param_3,uint param_4,MemoryManager *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ContentLeafNameTypeVector::getLeafCount() const */

void xercesc_2_7::ContentLeafNameTypeVector::getLeafCount(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ContentLeafNameTypeVector::getLeafNameAt(unsigned int) const */

void xercesc_2_7::ContentLeafNameTypeVector::getLeafNameAt(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ContentLeafNameTypeVector::getLeafTypeAt(unsigned int) const */

void xercesc_2_7::ContentLeafNameTypeVector::getLeafTypeAt(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::SubstitutionGroupComparator::isEquivalentTo(xercesc_2_7::QName*,
   xercesc_2_7::QName*) */

void xercesc_2_7::SubstitutionGroupComparator::isEquivalentTo(QName *param_1,QName *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ComplexTypeInfo::getAttDefList() const */

void xercesc_2_7::ComplexTypeInfo::getAttDefList(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ContentSpecNode::isSerializable() const */

void xercesc_2_7::ContentSpecNode::isSerializable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ContentSpecNode::serialize(xercesc_2_7::XSerializeEngine&) */

void xercesc_2_7::ContentSpecNode::serialize(XSerializeEngine *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ContentSpecNode::getProtoType() const */

void xercesc_2_7::ContentSpecNode::getProtoType(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::PSVIItem::getActualValue() const */

void xercesc_2_7::PSVIItem::getActualValue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLAttDefList::isSerializable() const */

void xercesc_2_7::XMLAttDefList::isSerializable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLAttDefList::serialize(xercesc_2_7::XSerializeEngine&) */

void xercesc_2_7::XMLAttDefList::serialize(XSerializeEngine *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLAttDefList::getProtoType() const */

void xercesc_2_7::XMLAttDefList::getProtoType(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::DTDEntityDecl::isSerializable() const */

void xercesc_2_7::DTDEntityDecl::isSerializable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::DTDEntityDecl::serialize(xercesc_2_7::XSerializeEngine&) */

void xercesc_2_7::DTDEntityDecl::serialize(XSerializeEngine *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::DTDEntityDecl::getProtoType() const */

void xercesc_2_7::DTDEntityDecl::getProtoType(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLRefInfo::isSerializable() const */

void xercesc_2_7::XMLRefInfo::isSerializable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLRefInfo::serialize(xercesc_2_7::XSerializeEngine&) */

void xercesc_2_7::XMLRefInfo::serialize(XSerializeEngine *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLRefInfo::getProtoType() const */

void xercesc_2_7::XMLRefInfo::getProtoType(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableBucketElem<unsigned int>::RefHash2KeysTableBucketElem(void*, int,
   unsigned int*, xercesc_2_7::RefHash2KeysTableBucketElem<unsigned int>*) */

void xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>::RefHash2KeysTableBucketElem
               (void *param_1,int param_2,uint *param_3,RefHash2KeysTableBucketElem *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<unsigned int>::RefHashTableBucketElem(void*, unsigned int*,
   xercesc_2_7::RefHashTableBucketElem<unsigned int>*) */

void xercesc_2_7::RefHashTableBucketElem<unsigned_int>::RefHashTableBucketElem
               (void *param_1,uint *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<bool>::~ValueVectorOf() */

void __thiscall xercesc_2_7::ValueVectorOf<bool>::_ValueVectorOf(ValueVectorOf_bool_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueHashTableBucketElem<unsigned short>::ValueHashTableBucketElem(void*, unsigned
   short const&, xercesc_2_7::ValueHashTableBucketElem<unsigned short>*) */

void xercesc_2_7::ValueHashTableBucketElem<unsigned_short>::ValueHashTableBucketElem
               (void *param_1,ushort *param_2,ValueHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::BaseRefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<xercesc_2_7::KVStringPair>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl>::RefHash3KeysTableBucketElem(void*,
   int, int, xercesc_2_7::SchemaElementDecl*,
   xercesc_2_7::RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl>*) */

void xercesc_2_7::RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl>::
     RefHash3KeysTableBucketElem
               (void *param_1,int param_2,int param_3,SchemaElementDecl *param_4,
               RefHash3KeysTableBucketElem *param_5)

{
  undefined8 in_RCX;
  undefined4 in_EDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::InputSource>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::InputSource>::_Janitor(Janitor_xercesc_2_7__InputSource_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::InputSource>::Janitor(xercesc_2_7::InputSource*) */

void xercesc_2_7::Janitor<xercesc_2_7::InputSource>::Janitor(InputSource *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::BaseRefVectorOf<unsigned short>>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::BaseRefVectorOf<unsigned_short>>::_Janitor
          (Janitor_xercesc_2_7__BaseRefVectorOf_unsigned_short__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::BaseRefVectorOf<unsigned
   short>>::Janitor(xercesc_2_7::BaseRefVectorOf<unsigned short>*) */

void xercesc_2_7::Janitor<xercesc_2_7::BaseRefVectorOf<unsigned_short>>::Janitor
               (BaseRefVectorOf *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueStackOf<bool>::ValueStackOf(unsigned int, xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueStackOf<bool>::ValueStackOf(uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<unsigned short>::~ArrayJanitor() */

void __thiscall
xercesc_2_7::ArrayJanitor<unsigned_short>::_ArrayJanitor(ArrayJanitor_unsigned_short_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<unsigned short>::ArrayJanitor(unsigned short*) */

void xercesc_2_7::ArrayJanitor<unsigned_short>::ArrayJanitor(ushort *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueStackOf<bool>::~ValueStackOf() */

void __thiscall xercesc_2_7::ValueStackOf<bool>::_ValueStackOf(ValueStackOf_bool_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableOf<unsigned int>::~RefHash2KeysTableOf() */

void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_unsigned_int_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<unsigned int>::~RefHashTableOf() */

void __thiscall
xercesc_2_7::RefHashTableOf<unsigned_int>::_RefHashTableOf(RefHashTableOf_unsigned_int_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::~RefHash3KeysIdPool() */

void __thiscall
xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::_RefHash3KeysIdPool
          (RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::KVStringPair>::~RefVectorOf() */

void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::KVStringPair>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__KVStringPair_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueHashTableOf<unsigned short>::~ValueHashTableOf() */

void __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_short>::_ValueHashTableOf
          (ValueHashTableOf_unsigned_short_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableOf<unsigned int>::RefHash2KeysTableOf(unsigned int, bool,
   xercesc_2_7::HashBase*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHash2KeysTableOf<unsigned_int>::RefHash2KeysTableOf
               (uint param_1,bool param_2,HashBase *param_3,MemoryManager *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<unsigned int>::RefHashTableOf(unsigned int, bool,
   xercesc_2_7::HashBase*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<unsigned_int>::RefHashTableOf
               (uint param_1,bool param_2,HashBase *param_3,MemoryManager *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueHashTableOf<unsigned short>::ValueHashTableOf(unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ValueHashTableOf<unsigned_short>::ValueHashTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::KVStringPair>::RefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefVectorOf<xercesc_2_7::KVStringPair>::RefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::JanitorMemFunCall<xercesc_2_7::ReaderMgr>::~JanitorMemFunCall() */

void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::ReaderMgr>::_JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__ReaderMgr_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::JanitorMemFunCall<xercesc_2_7::ReaderMgr>::JanitorMemFunCall(xercesc_2_7::ReaderMgr*,
   void (xercesc_2_7::ReaderMgr::*)()) */

void xercesc_2_7::JanitorMemFunCall<xercesc_2_7::ReaderMgr>::JanitorMemFunCall
               (ReaderMgr *param_1,FuncDef0 *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::~JanitorMemFunCall() */

void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::_JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__SGXMLScanner_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::JanitorMemFunCall(xercesc_2_7::SGXMLScanner*,
   void (xercesc_2_7::SGXMLScanner::*)()) */

void xercesc_2_7::JanitorMemFunCall<xercesc_2_7::SGXMLScanner>::JanitorMemFunCall
               (SGXMLScanner *param_1,FuncDef1 *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::RefHash3KeysIdPool(unsigned int,
   bool, unsigned int, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::RefHash3KeysIdPool
               (uint param_1,bool param_2,uint param_3,MemoryManager *param_4)

{
  undefined8 in_RCX;
  undefined4 in_EDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ReaderMgr::LastExtEntityInfo::LastExtEntityInfo() */

void __thiscall
xercesc_2_7::ReaderMgr::LastExtEntityInfo::LastExtEntityInfo(LastExtEntityInfo *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SubstitutionGroupComparator::~SubstitutionGroupComparator() */

void __thiscall
xercesc_2_7::SubstitutionGroupComparator::_SubstitutionGroupComparator
          (SubstitutionGroupComparator *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SubstitutionGroupComparator::SubstitutionGroupComparator(xercesc_2_7::GrammarResolver*,
   xercesc_2_7::XMLStringPool*) */

void __thiscall
xercesc_2_7::SubstitutionGroupComparator::SubstitutionGroupComparator
          (SubstitutionGroupComparator *this,GrammarResolver *param_1,XMLStringPool *param_2)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSDLocator::~XSDLocator() */

void __thiscall xercesc_2_7::XSDLocator::_XSDLocator(XSDLocator *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLResourceIdentifier::XMLResourceIdentifier(xercesc_2_7::XMLResourceIdentifier::ResourceIdentifierType,
   unsigned short const*, unsigned short const*, unsigned short const*, unsigned short const*,
   xercesc_2_7::Locator const*) */

void __thiscall
xercesc_2_7::XMLResourceIdentifier::XMLResourceIdentifier
          (XMLResourceIdentifier *this,ResourceIdentifierType param_1,ushort *param_2,
          ushort *param_3,ushort *param_4,ushort *param_5,Locator *param_6)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLResourceIdentifier::~XMLResourceIdentifier() */

void __thiscall
xercesc_2_7::XMLResourceIdentifier::_XMLResourceIdentifier(XMLResourceIdentifier *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ContentSpecNode::~ContentSpecNode() */

void __thiscall xercesc_2_7::ContentSpecNode::_ContentSpecNode(ContentSpecNode *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::PSVIAttributeList::~PSVIAttributeList() */

void __thiscall xercesc_2_7::PSVIAttributeList::_PSVIAttributeList(PSVIAttributeList *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::PSVIAttribute::~PSVIAttribute() */

void __thiscall xercesc_2_7::PSVIAttribute::_PSVIAttribute(PSVIAttribute *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::PSVIItem::~PSVIItem() */

void __thiscall xercesc_2_7::PSVIItem::_PSVIItem(PSVIItem *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::MalformedURLException::~MalformedURLException() */

void __thiscall
xercesc_2_7::MalformedURLException::_MalformedURLException(MalformedURLException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::MalformedURLException::MalformedURLException(xercesc_2_7::MalformedURLException
   const&) */

void __thiscall
xercesc_2_7::MalformedURLException::MalformedURLException
          (MalformedURLException *this,MalformedURLException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::MalformedURLException::MalformedURLException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::MalformedURLException::MalformedURLException
          (MalformedURLException *this,char *param_1,uint param_2,Codes param_3,
          MemoryManager *param_4)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::UnexpectedEOFException::~UnexpectedEOFException() */

void __thiscall
xercesc_2_7::UnexpectedEOFException::_UnexpectedEOFException(UnexpectedEOFException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException(xercesc_2_7::UnexpectedEOFException
   const&) */

void __thiscall
xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException
          (UnexpectedEOFException *this,UnexpectedEOFException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException
          (UnexpectedEOFException *this,char *param_1,uint param_2,Codes param_3,
          MemoryManager *param_4)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::DTDEntityDecl::~DTDEntityDecl() */

void __thiscall xercesc_2_7::DTDEntityDecl::_DTDEntityDecl(DTDEntityDecl *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ThrowEOEJanitor::~ThrowEOEJanitor() */

void __thiscall xercesc_2_7::ThrowEOEJanitor::_ThrowEOEJanitor(ThrowEOEJanitor *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ThrowEOEJanitor::ThrowEOEJanitor(xercesc_2_7::ReaderMgr*, bool) */

void __thiscall
xercesc_2_7::ThrowEOEJanitor::ThrowEOEJanitor(ThrowEOEJanitor *this,ReaderMgr *param_1,bool param_2)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Locator::~Locator() */

void __thiscall xercesc_2_7::Locator::_Locator(Locator *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::EmptyStackException::~EmptyStackException() */

void __thiscall xercesc_2_7::EmptyStackException::_EmptyStackException(EmptyStackException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::EmptyStackException::EmptyStackException(xercesc_2_7::EmptyStackException const&) */

void __thiscall
xercesc_2_7::EmptyStackException::EmptyStackException
          (EmptyStackException *this,EmptyStackException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::EmptyStackException::EmptyStackException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::EmptyStackException::EmptyStackException
          (EmptyStackException *this,char *param_1,uint param_2,Codes param_3,MemoryManager *param_4
          )

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLRefInfo::~XMLRefInfo() */

void __thiscall xercesc_2_7::XMLRefInfo::_XMLRefInfo(XMLRefInfo *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSerializable::~XSerializable() */

void __thiscall xercesc_2_7::XSerializable::_XSerializable(XSerializable *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RuntimeException::~RuntimeException() */

void __thiscall xercesc_2_7::RuntimeException::_RuntimeException(RuntimeException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RuntimeException::RuntimeException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, unsigned short const*, unsigned short const*, unsigned short
   const*, unsigned short const*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::RuntimeException::RuntimeException
          (RuntimeException *this,char *param_1,uint param_2,Codes param_3,ushort *param_4,
          ushort *param_5,ushort *param_6,ushort *param_7,MemoryManager *param_8)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  undefined8 in_R9;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RuntimeException::RuntimeException(xercesc_2_7::RuntimeException const&) */

void __thiscall
xercesc_2_7::RuntimeException::RuntimeException(RuntimeException *this,RuntimeException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RuntimeException::RuntimeException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::RuntimeException::RuntimeException
          (RuntimeException *this,char *param_1,uint param_2,Codes param_3,MemoryManager *param_4)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::NoSuchElementException::~NoSuchElementException() */

void __thiscall
xercesc_2_7::NoSuchElementException::_NoSuchElementException(NoSuchElementException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::NoSuchElementException::NoSuchElementException(xercesc_2_7::NoSuchElementException
   const&) */

void __thiscall
xercesc_2_7::NoSuchElementException::NoSuchElementException
          (NoSuchElementException *this,NoSuchElementException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::NoSuchElementException::NoSuchElementException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::NoSuchElementException::NoSuchElementException
          (NoSuchElementException *this,char *param_1,uint param_2,Codes param_3,
          MemoryManager *param_4)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IllegalArgumentException::~IllegalArgumentException() */

void __thiscall
xercesc_2_7::IllegalArgumentException::_IllegalArgumentException(IllegalArgumentException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IllegalArgumentException::IllegalArgumentException(xercesc_2_7::IllegalArgumentException
   const&) */

void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,IllegalArgumentException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IllegalArgumentException::IllegalArgumentException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,char *param_1,uint param_2,Codes param_3,
          MemoryManager *param_4)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayIndexOutOfBoundsException::~ArrayIndexOutOfBoundsException() */

void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(xercesc_2_7::ArrayIndexOutOfBoundsException
   const&) */

void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this,ArrayIndexOutOfBoundsException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(char const*, unsigned
   int, xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this,char *param_1,uint param_2,Codes param_3,
          MemoryManager *param_4)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  undefined8 in_R8;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLBufBid::~XMLBufBid() */

void __thiscall xercesc_2_7::XMLBufBid::_XMLBufBid(XMLBufBid *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLBufBid::XMLBufBid(xercesc_2_7::XMLBufferMgr*) */

void __thiscall xercesc_2_7::XMLBufBid::XMLBufBid(XMLBufBid *this,XMLBufferMgr *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLBuffer::~XMLBuffer() */

void __thiscall xercesc_2_7::XMLBuffer::_XMLBuffer(XMLBuffer *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLBuffer::XMLBuffer(unsigned int, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XMLBuffer::XMLBuffer(XMLBuffer *this,uint param_1,MemoryManager *param_2)

{
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  
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


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMemory::XMemory() */

void __thiscall xercesc_2_7::XMemory::XMemory(XMemory *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned
   int>*>::~ArrayJanitor() */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::_ArrayJanitor
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_unsigned_int___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned
   int>*>::ArrayJanitor(xercesc_2_7::RefHash2KeysTableBucketElem<unsigned int>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>::
     ArrayJanitor(RefHash2KeysTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned int>*>::~ArrayJanitor() */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::_ArrayJanitor
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_unsigned_int___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned
   int>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<unsigned int>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>::ArrayJanitor
               (RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<bool>::ValueVectorOf(unsigned int, xercesc_2_7::MemoryManager*, bool)
    */

void xercesc_2_7::ValueVectorOf<bool>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

