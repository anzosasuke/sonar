
void __thiscall
xercesc_2_7::TraverseSchema::TraverseSchema
          (TraverseSchema *this,DOMElement *schemaRoot,XMLStringPool *uriStringPool,
          SchemaGrammar *schemaGrammar,GrammarResolver *grammarResolver,XMLScanner *xmlScanner,
          XMLCh *schemaURL,XMLEntityHandler *entityHandler,XMLErrorReporter *errorReporter,
          MemoryManager *manager)

{
  long lVar1;
  MemoryManager *pMVar2;
  TraverseSchema *ctx;
  long in_FS_OFFSET;
  OutOfMemoryException *anon_var_0;
  CleanupType cleanup;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMemory::XMemory((XMemory *)this);
  this->fFullConstraintChecking = false;
  this->fTargetNSURI = -1;
  this->fEmptyNamespaceURI = -1;
  this->fCurrentScope = 0xfffffffe;
  this->fScopeCount = 0;
  this->fAnonXSTypeCount = 0;
  this->fCircularCheckIndex = 0;
  this->fTargetNSURIString = (XMLCh *)0x0;
  this->fDatatypeRegistry = (DatatypeValidatorFactory *)0x0;
  this->fGrammarResolver = grammarResolver;
  this->fSchemaGrammar = schemaGrammar;
  this->fEntityHandler = entityHandler;
  this->fErrorReporter = errorReporter;
  this->fURIStringPool = uriStringPool;
  this->fStringPool = (XMLStringPool *)0x0;
  XMLBuffer::XMLBuffer(&this->fBuffer,0x3ff,manager);
  this->fScanner = xmlScanner;
  this->fNamespaceScope = (NamespaceScope *)0x0;
  this->fAttributeDeclRegistry = (RefHashTableOf_xercesc_2_7__XMLAttDef_ *)0x0;
  this->fComplexTypeRegistry = (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *)0x0;
  this->fGroupRegistry = (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *)0x0;
  this->fAttGroupRegistry = (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *)0x0;
  this->fIC_ElementsNS =
       (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0;
  this->fPreprocessedNodes = (RefHashTableOf_xercesc_2_7__SchemaInfo_ *)0x0;
  this->fSchemaInfo = (SchemaInfo *)0x0;
  this->fCurrentGroupInfo = (XercesGroupInfo *)0x0;
  this->fCurrentAttGroupInfo = (XercesAttGroupInfo *)0x0;
  this->fCurrentComplexType = (ComplexTypeInfo *)0x0;
  this->fCurrentTypeNameStack = (ValueVectorOf_unsigned_int_ *)0x0;
  this->fCurrentGroupStack = (ValueVectorOf_unsigned_int_ *)0x0;
  this->fIC_NamespaceDepth = (ValueVectorOf_unsigned_int_ *)0x0;
  this->fIC_Elements = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0;
  this->fDeclStack = (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)0x0;
  this->fGlobalDeclarations = (ValueVectorOf_unsigned_int_ **)0x0;
  this->fNonXSAttList = (ValueVectorOf_xercesc_2_7__DOMNode__ *)0x0;
  this->fIC_NodeListNS =
       (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0;
  this->fIC_NamespaceDepthNS = (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0;
  this->fNotationRegistry = (RefHash2KeysTableOf_short_unsigned_int_ *)0x0;
  this->fRedefineComponents = (RefHash2KeysTableOf_short_unsigned_int_ *)0x0;
  this->fIdentityConstraintNames = (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *)0x0;
  this->fValidSubstitutionGroups =
       (RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0;
  this->fSchemaInfoList = (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *)0x0;
  this->fParser = (XSDDOMParser *)0x0;
  xercesc_2_7::XSDErrorReporter::XSDErrorReporter(&this->fXSDErrorReporter,(XMLErrorReporter *)0x0);
  this->fLocator = (XSDLocator *)0x0;
  this->fMemoryManager = manager;
  pMVar2 = GrammarResolver::getGrammarPoolMemoryManager(this->fGrammarResolver);
  this->fGrammarPoolMemoryManager = pMVar2;
  this->fAnnotation = (XSAnnotation *)0x0;
  xercesc_2_7::GeneralAttributeCheck::GeneralAttributeCheck(&this->fAttributeCheck,manager);
  ctx = this;
  JanitorMemFunCall<xercesc_2_7::TraverseSchema>::JanitorMemFunCall(&cleanup,this,(MFPT)cleanUp);
  if (((this->fGrammarResolver != (GrammarResolver *)0x0) && (schemaRoot != (DOMElement *)0x0)) &&
     (this->fURIStringPool != (XMLStringPool *)0x0)) {
    init(this,(EVP_PKEY_CTX *)ctx);
    preprocessSchema(this,schemaRoot,schemaURL);
    doTraverseSchema(this,schemaRoot);
  }
  JanitorMemFunCall<xercesc_2_7::TraverseSchema>::release(&cleanup);
  JanitorMemFunCall<xercesc_2_7::TraverseSchema>::_JanitorMemFunCall(&cleanup);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall xercesc_2_7::TraverseSchema::_TraverseSchema(TraverseSchema *this)

{
  cleanUp(this);
  xercesc_2_7::GeneralAttributeCheck::_GeneralAttributeCheck(&this->fAttributeCheck);
  XSDErrorReporter::_XSDErrorReporter(&this->fXSDErrorReporter);
  XMLBuffer::_XMLBuffer(&this->fBuffer);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::doTraverseSchema(TraverseSchema *this,DOMElement *schemaRoot)

{
  uint namespaceDepth;
  SchemaElementDecl *elemDecl;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *pVVar4;
  ValueVectorOf_unsigned_int_ *pVVar5;
  SchemaElementDecl **ppSVar6;
  ValueVectorOf_xercesc_2_7__DOMElement__ *this_00;
  uint *puVar7;
  DOMElement **ppDVar8;
  RefHashTableOf_xercesc_2_7__XSAnnotation_ *this_01;
  uint i;
  uint j;
  uint icListSize;
  uint icNodesSize;
  uint scopeDepth;
  SchemaElementDecl *curElem;
  ValueVectorOf_xercesc_2_7__DOMElement__ *icNodes;
  
  processChildren(this,schemaRoot);
  if (this->fIC_ElementsNS ==
      (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0) {
LAB_001005ba:
    bVar1 = false;
  }
  else {
    bVar1 = RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
            containsKey(this->fIC_ElementsNS,this->fTargetNSURIString);
    if (bVar1 == false) goto LAB_001005ba;
    bVar1 = true;
  }
  if (bVar1) {
    pVVar4 = RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
                       (this->fIC_ElementsNS,this->fTargetNSURIString);
    this->fIC_Elements = pVVar4;
    pVVar5 = RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::get
                       (this->fIC_NamespaceDepthNS,this->fTargetNSURIString);
    this->fIC_NamespaceDepth = pVVar5;
    uVar2 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::size(this->fIC_Elements);
    for (i = 0; i < uVar2; i = i + 1) {
      ppSVar6 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::elementAt(this->fIC_Elements,i);
      elemDecl = *ppSVar6;
      this_00 = RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::get
                          (this->fIC_NodeListNS,elemDecl);
      uVar3 = ValueVectorOf<xercesc_2_7::DOMElement*>::size(this_00);
      puVar7 = ValueVectorOf<unsigned_int>::elementAt(this->fIC_NamespaceDepth,i);
      namespaceDepth = *puVar7;
      for (j = 0; j < uVar3; j = j + 1) {
        ppDVar8 = ValueVectorOf<xercesc_2_7::DOMElement*>::elementAt(this_00,j);
        traverseKeyRef(this,*ppDVar8,elemDecl,namespaceDepth);
      }
    }
  }
  bVar1 = XMLScanner::getValidateAnnotations(this->fScanner);
  if (bVar1 != false) {
    this_01 = SchemaGrammar::getAnnotations(this->fSchemaGrammar);
    bVar1 = RefHashTableOf<xercesc_2_7::XSAnnotation>::isEmpty(this_01);
    if (bVar1 != true) {
      bVar1 = true;
      goto LAB_00100732;
    }
  }
  bVar1 = false;
LAB_00100732:
  if (bVar1) {
    validateAnnotations(this);
  }
  SchemaInfo::setProcessed(this->fSchemaInfo,true);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::preprocessSchema
          (TraverseSchema *this,DOMElement *schemaRoot,XMLCh *schemaURL)

{
  RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this_00;
  int iVar1;
  uint uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *pRVar3;
  RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *pRVar4;
  RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *pRVar5;
  RefHashTableOf_xercesc_2_7__XMLAttDef_ *pRVar6;
  NamespaceScope *pNVar7;
  RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *pRVar8;
  undefined4 extraout_var_01;
  XMLCh *pXVar9;
  long *plVar10;
  ValidationContext *newValidationContext;
  SchemaInfo *pSVar11;
  XMLCh *rootPrefix;
  XMLCh *xmlnsStr;
  XMLCh *targetNSURIStr;
  XMLSchemaDescription *gramDesc;
  SchemaInfo *currInfo;
  
  iVar1 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x17])(schemaRoot);
  if (((short *)CONCAT44(extraout_var,iVar1) == (short *)0x0) ||
     (*(short *)CONCAT44(extraout_var,iVar1) == 0)) {
    iVar1 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x29])(schemaRoot,&XMLUni::fgXMLNSString);
    if (((short *)CONCAT44(extraout_var_00,iVar1) == (short *)0x0) ||
       (*(short *)CONCAT44(extraout_var_00,iVar1) == 0)) {
      (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x2c])
                (schemaRoot,&XMLUni::fgXMLNSString,&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    }
  }
  pRVar3 = SchemaGrammar::getComplexTypeRegistry(this->fSchemaGrammar);
  this->fComplexTypeRegistry = pRVar3;
  if (this->fComplexTypeRegistry == (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *)0x0) {
    pRVar3 = (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *)
             xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
    RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::RefHashTableOf
              (pRVar3,0x1d,this->fGrammarPoolMemoryManager);
    this->fComplexTypeRegistry = pRVar3;
    SchemaGrammar::setComplexTypeRegistry(this->fSchemaGrammar,this->fComplexTypeRegistry);
  }
  pRVar4 = SchemaGrammar::getGroupInfoRegistry(this->fSchemaGrammar);
  this->fGroupRegistry = pRVar4;
  if (this->fGroupRegistry == (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *)0x0) {
    pRVar4 = (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *)
             xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
    RefHashTableOf<xercesc_2_7::XercesGroupInfo>::RefHashTableOf
              (pRVar4,0xd,this->fGrammarPoolMemoryManager);
    this->fGroupRegistry = pRVar4;
    SchemaGrammar::setGroupInfoRegistry(this->fSchemaGrammar,this->fGroupRegistry);
  }
  pRVar5 = SchemaGrammar::getAttGroupInfoRegistry(this->fSchemaGrammar);
  this->fAttGroupRegistry = pRVar5;
  if (this->fAttGroupRegistry == (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *)0x0) {
    pRVar5 = (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *)
             xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
    RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::RefHashTableOf
              (pRVar5,0xd,this->fGrammarPoolMemoryManager);
    this->fAttGroupRegistry = pRVar5;
    SchemaGrammar::setAttGroupInfoRegistry(this->fSchemaGrammar,this->fAttGroupRegistry);
  }
  pRVar6 = SchemaGrammar::getAttributeDeclRegistry(this->fSchemaGrammar);
  this->fAttributeDeclRegistry = pRVar6;
  if (this->fAttributeDeclRegistry == (RefHashTableOf_xercesc_2_7__XMLAttDef_ *)0x0) {
    pRVar6 = (RefHashTableOf_xercesc_2_7__XMLAttDef_ *)
             xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
    RefHashTableOf<xercesc_2_7::XMLAttDef>::RefHashTableOf
              (pRVar6,0x1d,this->fGrammarPoolMemoryManager);
    this->fAttributeDeclRegistry = pRVar6;
    SchemaGrammar::setAttributeDeclRegistry(this->fSchemaGrammar,this->fAttributeDeclRegistry);
  }
  pNVar7 = SchemaGrammar::getNamespaceScope(this->fSchemaGrammar);
  this->fNamespaceScope = pNVar7;
  if (this->fNamespaceScope == (NamespaceScope *)0x0) {
    pNVar7 = (NamespaceScope *)
             xercesc_2_7::XMemory::operator_new(0x48,this->fGrammarPoolMemoryManager);
    xercesc_2_7::NamespaceScope::NamespaceScope(pNVar7,this->fGrammarPoolMemoryManager);
    this->fNamespaceScope = pNVar7;
    xercesc_2_7::NamespaceScope::reset((uint)this->fNamespaceScope);
    SchemaGrammar::setNamespaceScope(this->fSchemaGrammar,this->fNamespaceScope);
  }
  pRVar8 = SchemaGrammar::getValidSubstitutionGroups(this->fSchemaGrammar);
  this->fValidSubstitutionGroups = pRVar8;
  if (this->fValidSubstitutionGroups ==
      (RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0) {
    pRVar8 = (RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)
             xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
    RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
    RefHash2KeysTableOf(pRVar8,0x1d,this->fGrammarPoolMemoryManager);
    this->fValidSubstitutionGroups = pRVar8;
    SchemaGrammar::setValidSubstitutionGroups(this->fSchemaGrammar,this->fValidSubstitutionGroups);
  }
  iVar1 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x29])
                    (schemaRoot,&SchemaSymbols::fgATT_TARGETNAMESPACE);
  SchemaGrammar::setTargetNamespace(this->fSchemaGrammar,(XMLCh *)CONCAT44(extraout_var_01,iVar1));
  this->fScopeCount = 0;
  this->fCurrentScope = 0xfffffffe;
  pXVar9 = (XMLCh *)(**(code **)(*(long *)this->fSchemaGrammar + 0x30))(this->fSchemaGrammar);
  this->fTargetNSURIString = pXVar9;
  iVar1 = (**(code **)(*(long *)this->fURIStringPool + 0x28))
                    (this->fURIStringPool,this->fTargetNSURIString);
  this->fTargetNSURI = iVar1;
  plVar10 = (long *)(**(code **)(*(long *)this->fSchemaGrammar + 0xb0))(this->fSchemaGrammar);
  (**(code **)(*plVar10 + 0x70))(plVar10,this->fTargetNSURIString);
  xercesc_2_7::GrammarResolver::putGrammar((Grammar *)this->fGrammarResolver);
  newValidationContext = SchemaGrammar::getValidationContext(this->fSchemaGrammar);
  GeneralAttributeCheck::setValidationContext(&this->fAttributeCheck,newValidationContext);
  uVar2 = xercesc_2_7::NamespaceScope::increaseDepth();
  pXVar9 = XMLString::replicate(schemaURL,this->fGrammarPoolMemoryManager);
  pSVar11 = (SchemaInfo *)xercesc_2_7::XMemory::operator_new(0xb8,this->fMemoryManager);
  xercesc_2_7::SchemaInfo::SchemaInfo
            (pSVar11,0,0,0,this->fTargetNSURI,this->fScopeCount,uVar2,pXVar9,
             this->fTargetNSURIString,schemaRoot,this->fGrammarPoolMemoryManager);
  if (this->fSchemaInfo != (SchemaInfo *)0x0) {
    SchemaInfo::addSchemaInfo(this->fSchemaInfo,pSVar11,IMPORT);
  }
  this->fSchemaInfo = pSVar11;
  this_00 = this->fSchemaInfoList;
  pSVar11 = this->fSchemaInfo;
  iVar1 = SchemaInfo::getTargetNSURI(this->fSchemaInfo);
  pXVar9 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
  RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::put(this_00,pXVar9,iVar1,pSVar11);
  SchemaInfo::addSchemaInfo(this->fSchemaInfo,this->fSchemaInfo,INCLUDE);
  traverseSchemaHeader(this,schemaRoot);
  preprocessChildren(this,schemaRoot);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseSchemaHeader(TraverseSchema *this,DOMElement *schemaRoot)

{
  SchemaInfo *pSVar1;
  bool bVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ushort elemAttrDefaultQualified;
  
  iVar3 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x18])(schemaRoot);
  bVar2 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar3),
                            (XMLCh *)&SchemaSymbols::fgELT_SCHEMA);
  if (bVar2 != true) {
    reportSchemaError(this,schemaRoot,(XMLCh *)&XMLUni::fgXMLErrDomain,0xa3);
  }
  checkForEmptyTargetNamespace(this,schemaRoot);
  SchemaInfo::getNonXSAttList(this->fSchemaInfo);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)schemaRoot,(TraverseSchema *)0x28,
             SUB81(this,0),(ValueVectorOf *)0x1);
  retrieveNamespaceMapping(this,schemaRoot);
  iVar3 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x29])
                    (schemaRoot,&SchemaSymbols::fgATT_ELEMENTFORMDEFAULT);
  bVar2 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar3),
                            (XMLCh *)&SchemaSymbols::fgATTVAL_QUALIFIED);
  elemAttrDefaultQualified = (ushort)(bVar2 != false);
  iVar3 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x29])
                    (schemaRoot,&SchemaSymbols::fgATT_ATTRIBUTEFORMDEFAULT);
  bVar2 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_01,iVar3),
                            (XMLCh *)&SchemaSymbols::fgATTVAL_QUALIFIED);
  if (bVar2 != false) {
    elemAttrDefaultQualified = elemAttrDefaultQualified | 2;
  }
  SchemaInfo::setElemAttrDefaultQualified(this->fSchemaInfo,elemAttrDefaultQualified);
  pSVar1 = this->fSchemaInfo;
  iVar3 = parseBlockSet(this,schemaRoot,0,true);
  SchemaInfo::setBlockDefault(pSVar1,iVar3);
  pSVar1 = this->fSchemaInfo;
  iVar3 = parseFinalSet(this,schemaRoot,4,true);
  SchemaInfo::setFinalDefault(pSVar1,iVar3);
  return;
}


XSAnnotation * __thiscall
xercesc_2_7::TraverseSchema::traverseAnnotationDecl
          (TraverseSchema *this,DOMElement *annotationElem,
          ValueVectorOf_xercesc_2_7__DOMNode__ *nonXSAttList,bool topLevel)

{
  DOMNode *pDVar1;
  anon_subr_int_varargs *paVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_var;
  long *plVar10;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  DOMNode **ppDVar11;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  XMLCh *pXVar12;
  XMLSSize_t XVar13;
  XMLSSize_t XVar14;
  uint i;
  uint nonXSAttSize;
  int annotTokenStart;
  XMLCh *contents;
  DOMElement *child;
  XSAnnotation *theAnnotation;
  DOMNode *textContent_2;
  XMLCh *name;
  DOMNode *textContent_1;
  DOMNode *textContent;
  DOMNode *attNode;
  undefined4 extraout_var_00;
  
  bVar4 = SUB81(this,0);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)annotationElem,(TraverseSchema *)0x1,bVar4
             ,(ValueVectorOf *)(ulong)topLevel);
  contents = (XMLCh *)0x0;
  child = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&annotationElem->super_DOMNode);
  if (child == (DOMElement *)0x0) {
    iVar6 = (*(annotationElem->super_DOMNode)._vptr_DOMNode[7])(annotationElem);
    plVar10 = (long *)CONCAT44(extraout_var_02,iVar6);
    if ((plVar10 == (long *)0x0) || (sVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), sVar5 != 3)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      contents = (XMLCh *)(**(code **)(*plVar10 + 0x140))(plVar10);
    }
  }
  else {
    for (; child != (DOMElement *)0x0;
        child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode)) {
      iVar6 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
      bVar3 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar6),
                                (XMLCh *)&SchemaSymbols::fgELT_APPINFO);
      if (bVar3 == false) {
        bVar3 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar6),
                                  (XMLCh *)&SchemaSymbols::fgELT_DOCUMENTATION);
        if (bVar3 == false) {
          reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0xa1);
        }
        else {
          iVar6 = (*(child->super_DOMNode)._vptr_DOMNode[7])(child);
          plVar10 = (long *)CONCAT44(extraout_var_01,iVar6);
          if ((plVar10 == (long *)0x0) ||
             (sVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), sVar5 != 3)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            contents = (XMLCh *)(**(code **)(*plVar10 + 0x140))(plVar10);
          }
          xercesc_2_7::GeneralAttributeCheck::checkAttributes
                    ((DOMElement *)&this->fAttributeCheck,(ushort)child,(TraverseSchema *)0xe,bVar4,
                     (ValueVectorOf *)0x0);
        }
      }
      else {
        iVar6 = (*(child->super_DOMNode)._vptr_DOMNode[7])(child);
        plVar10 = (long *)CONCAT44(extraout_var_00,iVar6);
        if ((plVar10 == (long *)0x0) ||
           (sVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), sVar5 != 3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          contents = (XMLCh *)(**(code **)(*plVar10 + 0x140))(plVar10);
        }
        xercesc_2_7::GeneralAttributeCheck::checkAttributes
                  ((DOMElement *)&this->fAttributeCheck,(ushort)child,(TraverseSchema *)0x4,bVar4,
                   (ValueVectorOf *)0x0);
      }
    }
  }
  if ((contents == (XMLCh *)0x0) ||
     (bVar4 = XMLScanner::getIgnoreAnnotations(this->fScanner), bVar4 == true)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar7 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(nonXSAttList);
    if (uVar7 == 0) {
      theAnnotation =
           (XSAnnotation *)xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
      xercesc_2_7::XSAnnotation::XSAnnotation
                (theAnnotation,contents,this->fGrammarPoolMemoryManager);
    }
    else {
      iVar6 = xercesc_2_7::XMLString::patternMatch
                        (contents,(ushort *)&SchemaSymbols::fgELT_ANNOTATION);
      if (iVar6 == -1) {
        return (XSAnnotation *)0x0;
      }
      XMLBuffer::set(&this->fBuffer,contents,iVar6 + 10);
      for (i = 0; i < uVar7; i = i + 1) {
        ppDVar11 = ValueVectorOf<xercesc_2_7::DOMNode*>::elementAt(nonXSAttList,i);
        pDVar1 = *ppDVar11;
        paVar2 = (annotationElem->super_DOMNode)._vptr_DOMNode[0x30];
        iVar8 = (*pDVar1->_vptr_DOMNode[0x18])(pDVar1);
        iVar9 = (*pDVar1->_vptr_DOMNode[0x16])(pDVar1);
        iVar8 = (*paVar2)(annotationElem,CONCAT44(extraout_var_04,iVar9),
                          CONCAT44(extraout_var_03,iVar8));
        bVar4 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_05,iVar8),
                                  (XMLCh *)&XMLUni::fgZeroLenString);
        if (bVar4 == true) {
          XMLBuffer::append(&this->fBuffer,0x20);
          iVar8 = (*pDVar1->_vptr_DOMNode[2])(pDVar1);
          XMLBuffer::append(&this->fBuffer,(XMLCh *)CONCAT44(extraout_var_06,iVar8));
          XMLBuffer::append(&this->fBuffer,0x3d);
          XMLBuffer::append(&this->fBuffer,0x22);
          iVar8 = (*pDVar1->_vptr_DOMNode[3])(pDVar1);
          processAttValue(this,(XMLCh *)CONCAT44(extraout_var_07,iVar8),&this->fBuffer);
          XMLBuffer::append(&this->fBuffer,0x22);
        }
      }
      XMLBuffer::append(&this->fBuffer,contents + (long)iVar6 + 10);
      pXVar12 = XMLBuffer::getRawBuffer(&this->fBuffer);
      theAnnotation =
           (XSAnnotation *)xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
      xercesc_2_7::XSAnnotation::XSAnnotation(theAnnotation,pXVar12,this->fGrammarPoolMemoryManager)
      ;
    }
    XVar13 = XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)annotationElem);
    XVar14 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)annotationElem);
    XSAnnotation::setLineCol(theAnnotation,(int)XVar14,(int)XVar13);
    SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
    xercesc_2_7::XSAnnotation::setSystemId((ushort *)theAnnotation);
  }
  else {
    theAnnotation = (XSAnnotation *)0x0;
  }
  return theAnnotation;
}


void __thiscall
xercesc_2_7::TraverseSchema::preprocessInclude(TraverseSchema *this,DOMElement *elem)

{
  long lVar1;
  XSDLocator *pXVar2;
  RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this_00;
  undefined uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  DOMElement *pDVar7;
  XSAnnotation *pXVar8;
  XMLCh *pXVar9;
  XMLSSize_t XVar10;
  XMLCh *pXVar11;
  long *plVar12;
  SchemaInfo *pSVar13;
  XSDDOMParser *this_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  SchemaInfo *pSVar14;
  long in_FS_OFFSET;
  bool flag;
  Janitor_xercesc_2_7__InputSource_ janSrc;
  XMLCh *schemaLocation;
  InputSource *srcToFill;
  XMLCh *includeURL;
  SchemaInfo *includeSchemaInfo;
  DOMDocument *document;
  DOMElement *root;
  XMLCh *targetNSURIString;
  SchemaInfo *saveInfo;
  XMLCh *str1;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x19,SUB81(this,0),
             (ValueVectorOf *)0x1);
  pDVar7 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  pDVar7 = checkContent(this,elem,pDVar7,true);
  if (pDVar7 != (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x5c);
  }
  if (this->fAnnotation == (XSAnnotation *)0x0) {
    bVar4 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if ((bVar4 == false) ||
       (uVar6 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar6 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pXVar8 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
      this->fAnnotation = pXVar8;
      xercesc_2_7::SchemaGrammar::addAnnotation((XSAnnotation *)this->fSchemaGrammar);
    }
  }
  else {
    xercesc_2_7::SchemaGrammar::addAnnotation((XSAnnotation *)this->fSchemaGrammar);
  }
  pXVar9 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_SCHEMALOCATION,false);
  if ((pXVar9 == (XMLCh *)0x0) || (*pXVar9 == 0)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x5a,
                      (XMLCh *)&SchemaSymbols::fgELT_INCLUDE,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0)
    ;
  }
  else {
    pXVar2 = this->fLocator;
    XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)elem);
    XVar10 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)elem);
    pXVar11 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
    xercesc_2_7::XSDLocator::setValues((ushort *)pXVar2,pXVar11,0,XVar10);
    plVar12 = (long *)resolveSchemaLocation(this,pXVar9,SchemaInclude,(XMLCh *)0x0);
    Janitor<xercesc_2_7::InputSource>::Janitor(&janSrc,(InputSource *)plVar12);
    if (plVar12 != (long *)0x0) {
      pXVar11 = (XMLCh *)(**(code **)(*plVar12 + 0x28))(plVar12);
      pSVar13 = RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::get
                          (this->fSchemaInfoList,pXVar11,this->fTargetNSURI);
      if (pSVar13 == (SchemaInfo *)0x0) {
        if (this->fParser == (XSDDOMParser *)0x0) {
          this_01 = (XSDDOMParser *)
                    xercesc_2_7::XMemory::operator_new(0x170,this->fGrammarPoolMemoryManager);
          xercesc_2_7::XSDDOMParser::XSDDOMParser
                    (this_01,(XMLValidator *)0x0,this->fGrammarPoolMemoryManager,
                     (XMLGrammarPool *)0x0);
          this->fParser = this_01;
        }
        xercesc_2_7::AbstractDOMParser::setValidationScheme((ValSchemes)this->fParser);
        xercesc_2_7::AbstractDOMParser::setDoNamespaces(SUB81(this->fParser,0));
        xercesc_2_7::XSDDOMParser::setUserEntityHandler((XMLEntityHandler *)this->fParser);
        xercesc_2_7::XSDDOMParser::setUserErrorReporter((XMLErrorReporter *)this->fParser);
        uVar3 = (**(code **)(*plVar12 + 0x30))(plVar12);
        (**(code **)(*plVar12 + 0x50))(plVar12,0);
        xercesc_2_7::AbstractDOMParser::parse((InputSource *)this->fParser);
        (**(code **)(*plVar12 + 0x50))(plVar12,uVar3);
        bVar4 = XSDDOMParser::getSawFatal(this->fParser);
        if ((bVar4 == false) ||
           (bVar4 = XMLScanner::getExitOnFirstFatal(this->fScanner), bVar4 == false)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x129);
        }
        plVar12 = (long *)xercesc_2_7::AbstractDOMParser::getDocument();
        if ((plVar12 != (long *)0x0) &&
           (pDVar7 = (DOMElement *)(**(code **)(*plVar12 + 0x68))(plVar12),
           pDVar7 != (DOMElement *)0x0)) {
          iVar5 = (*(pDVar7->super_DOMNode)._vptr_DOMNode[0x29])
                            (pDVar7,&SchemaSymbols::fgATT_TARGETNAMESPACE);
          str1 = (XMLCh *)CONCAT44(extraout_var,iVar5);
          if ((*str1 == 0) ||
             (bVar4 = XMLString::equals(str1,this->fTargetNSURIString), bVar4 == true)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            reportSchemaError(this,pDVar7,(XMLCh *)&XMLUni::fgXMLErrDomain,0x5b,pXVar9,str1,
                              (XMLCh *)0x0,(XMLCh *)0x0);
          }
          else {
            if (((*str1 == 0) &&
                (iVar5 = (*(pDVar7->super_DOMNode)._vptr_DOMNode[0x2a])
                                   (pDVar7,&XMLUni::fgXMLNSString),
                CONCAT44(extraout_var_00,iVar5) == 0)) &&
               (this->fTargetNSURI != this->fEmptyNamespaceURI)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              (*(pDVar7->super_DOMNode)._vptr_DOMNode[0x2c])
                        (pDVar7,&XMLUni::fgXMLNSString,this->fTargetNSURIString);
            }
            pSVar13 = this->fSchemaInfo;
            uVar6 = xercesc_2_7::NamespaceScope::increaseDepth();
            pXVar9 = XMLString::replicate(pXVar11,this->fGrammarPoolMemoryManager);
            pSVar14 = (SchemaInfo *)xercesc_2_7::XMemory::operator_new(0xb8,this->fMemoryManager);
            xercesc_2_7::SchemaInfo::SchemaInfo
                      (pSVar14,0,0,0,this->fTargetNSURI,this->fScopeCount,uVar6,pXVar9,
                       this->fTargetNSURIString,pDVar7,this->fGrammarPoolMemoryManager);
            this->fSchemaInfo = pSVar14;
            this_00 = this->fSchemaInfoList;
            pSVar14 = this->fSchemaInfo;
            iVar5 = SchemaInfo::getTargetNSURI(this->fSchemaInfo);
            pXVar9 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
            RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::put(this_00,pXVar9,iVar5,pSVar14);
            RefHashTableOf<xercesc_2_7::SchemaInfo>::put
                      (this->fPreprocessedNodes,elem,this->fSchemaInfo);
            SchemaInfo::addSchemaInfo(pSVar13,this->fSchemaInfo,INCLUDE);
            traverseSchemaHeader(this,pDVar7);
            preprocessChildren(this,pDVar7);
            this->fSchemaInfo = pSVar13;
          }
        }
      }
      else {
        SchemaInfo::addSchemaInfo(this->fSchemaInfo,pSVar13,INCLUDE);
      }
    }
    Janitor<xercesc_2_7::InputSource>::_Janitor(&janSrc);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall xercesc_2_7::TraverseSchema::traverseInclude(TraverseSchema *this,DOMElement *elem)

{
  SchemaInfo *pSVar1;
  SchemaInfo *this_00;
  DOMElement *root;
  SchemaInfo *includeInfo;
  SchemaInfo *saveInfo;
  
  this_00 = RefHashTableOf<xercesc_2_7::SchemaInfo>::get(this->fPreprocessedNodes,elem);
  if (this_00 != (SchemaInfo *)0x0) {
    pSVar1 = this->fSchemaInfo;
    this->fSchemaInfo = this_00;
    root = SchemaInfo::getRoot(this_00);
    processChildren(this,root);
    this->fSchemaInfo = pSVar1;
  }
  return;
}


void __thiscall xercesc_2_7::TraverseSchema::preprocessImport(TraverseSchema *this,DOMElement *elem)

{
  long lVar1;
  code *pcVar2;
  SchemaInfo *pSVar3;
  XSDLocator *pXVar4;
  RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this_00;
  bool bVar5;
  undefined uVar6;
  uint uVar7;
  int iVar8;
  DOMElement *pDVar9;
  XSAnnotation *pXVar10;
  XMLCh *str1;
  XMLGrammarPool *pXVar11;
  undefined4 extraout_var;
  XMLCh *pXVar12;
  XMLSSize_t XVar13;
  XMLCh *pXVar14;
  long *plVar15;
  XSDDOMParser *this_01;
  undefined4 extraout_var_00;
  SchemaGrammar *this_02;
  long in_FS_OFFSET;
  bool grammarFound;
  bool flag;
  Janitor_xercesc_2_7__InputSource_ janSrc;
  Grammar *aGrammar;
  SchemaInfo *importSchemaInfo;
  XMLCh *nameSpace;
  XMLSchemaDescription *gramDesc;
  XMLCh *schemaLocation;
  InputSource *srcToFill;
  XMLCh *importURL;
  DOMDocument *document;
  DOMElement *root;
  XMLCh *targetNSURIString;
  SchemaInfo *saveInfo;
  XMLSchemaDescription *gramDesc_1;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x18,SUB81(this,0),
             (ValueVectorOf *)0x1);
  pDVar9 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  pDVar9 = checkContent(this,elem,pDVar9,true);
  if (pDVar9 != (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x5c);
  }
  if (this->fAnnotation == (XSAnnotation *)0x0) {
    bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if ((bVar5 == false) ||
       (uVar7 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar7 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pXVar10 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
      this->fAnnotation = pXVar10;
      xercesc_2_7::SchemaGrammar::addAnnotation((XSAnnotation *)this->fSchemaGrammar);
    }
  }
  else {
    xercesc_2_7::SchemaGrammar::addAnnotation((XSAnnotation *)this->fSchemaGrammar);
  }
  str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAMESPACE,false);
  bVar5 = XMLString::equals(str1,this->fTargetNSURIString);
  if (bVar5 == false) {
    if (((str1 == (XMLCh *)0x0) || (*str1 == 0)) && (this->fTargetNSURI == this->fEmptyNamespaceURI)
       ) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x68);
    }
    else {
      aGrammar = (Grammar *)0x0;
      if (str1 != (XMLCh *)0x0) {
        pXVar11 = GrammarResolver::getGrammarPool(this->fGrammarResolver);
        iVar8 = (*pXVar11->_vptr_XMLGrammarPool[0xc])(pXVar11,str1);
        plVar15 = (long *)CONCAT44(extraout_var,iVar8);
        Janitor<xercesc_2_7::XMLSchemaDescription>::Janitor
                  ((Janitor_xercesc_2_7__XMLSchemaDescription_ *)&janSrc,
                   (XMLSchemaDescription *)plVar15);
        (**(code **)(*plVar15 + 0x68))(plVar15,2);
        pcVar2 = *(code **)(*plVar15 + 0x78);
        pXVar12 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_SCHEMALOCATION,false);
        (*pcVar2)(plVar15,pXVar12);
        aGrammar = (Grammar *)
                   xercesc_2_7::GrammarResolver::getGrammar
                             ((XMLGrammarDescription *)this->fGrammarResolver);
        Janitor<xercesc_2_7::XMLSchemaDescription>::_Janitor
                  ((Janitor_xercesc_2_7__XMLSchemaDescription_ *)&janSrc);
      }
      if ((aGrammar == (Grammar *)0x0) ||
         (iVar8 = (**(code **)(*(long *)aGrammar + 0x28))(aGrammar), iVar8 != 1)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pSVar3 = this->fSchemaInfo;
        iVar8 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
        SchemaInfo::addImportedNS(pSVar3,iVar8);
      }
      pXVar12 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_SCHEMALOCATION,false);
      if ((pXVar12 != (XMLCh *)0x0) || (str1 != (XMLCh *)0x0)) {
        pXVar4 = this->fLocator;
        XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)elem);
        XVar13 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)elem);
        pXVar14 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
        xercesc_2_7::XSDLocator::setValues((ushort *)pXVar4,pXVar14,0,XVar13);
        plVar15 = (long *)resolveSchemaLocation(this,pXVar12,SchemaImport,str1);
        if (plVar15 != (long *)0x0) {
          Janitor<xercesc_2_7::InputSource>::Janitor(&janSrc,(InputSource *)plVar15);
          pXVar14 = (XMLCh *)(**(code **)(*plVar15 + 0x28))(plVar15);
          if (str1 == (XMLCh *)0x0) {
            importSchemaInfo =
                 RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::get
                           (this->fSchemaInfoList,pXVar14,this->fEmptyNamespaceURI);
          }
          else {
            this_00 = this->fSchemaInfoList;
            iVar8 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,str1);
            importSchemaInfo =
                 RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::get(this_00,pXVar14,iVar8);
          }
          if (importSchemaInfo == (SchemaInfo *)0x0) {
            if (!bVar5) {
              if (this->fParser == (XSDDOMParser *)0x0) {
                this_01 = (XSDDOMParser *)
                          xercesc_2_7::XMemory::operator_new(0x170,this->fGrammarPoolMemoryManager);
                xercesc_2_7::XSDDOMParser::XSDDOMParser
                          (this_01,(XMLValidator *)0x0,this->fGrammarPoolMemoryManager,
                           (XMLGrammarPool *)0x0);
                this->fParser = this_01;
              }
              xercesc_2_7::AbstractDOMParser::setValidationScheme((ValSchemes)this->fParser);
              xercesc_2_7::AbstractDOMParser::setDoNamespaces(SUB81(this->fParser,0));
              xercesc_2_7::XSDDOMParser::setUserEntityHandler((XMLEntityHandler *)this->fParser);
              xercesc_2_7::XSDDOMParser::setUserErrorReporter((XMLErrorReporter *)this->fParser);
              uVar6 = (**(code **)(*plVar15 + 0x30))(plVar15);
              (**(code **)(*plVar15 + 0x50))(plVar15,0);
              xercesc_2_7::AbstractDOMParser::parse((InputSource *)this->fParser);
              (**(code **)(*plVar15 + 0x50))(plVar15,uVar6);
              bVar5 = XSDDOMParser::getSawFatal(this->fParser);
              if ((bVar5 == false) ||
                 (bVar5 = XMLScanner::getExitOnFirstFatal(this->fScanner), bVar5 == false)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x129);
              }
              plVar15 = (long *)xercesc_2_7::AbstractDOMParser::getDocument();
              if ((plVar15 != (long *)0x0) &&
                 (pDVar9 = (DOMElement *)(**(code **)(*plVar15 + 0x68))(plVar15),
                 pDVar9 != (DOMElement *)0x0)) {
                iVar8 = (*(pDVar9->super_DOMNode)._vptr_DOMNode[0x29])
                                  (pDVar9,&SchemaSymbols::fgATT_TARGETNAMESPACE);
                bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar8),str1);
                if (bVar5 == true) {
                  pSVar3 = this->fSchemaInfo;
                  this_02 = (SchemaGrammar *)
                            xercesc_2_7::XMemory::operator_new(0xa0,this->fGrammarPoolMemoryManager)
                  ;
                  xercesc_2_7::SchemaGrammar::SchemaGrammar(this_02,this->fGrammarPoolMemoryManager)
                  ;
                  this->fSchemaGrammar = this_02;
                  plVar15 = (long *)(**(code **)(*(long *)this->fSchemaGrammar + 0xb0))
                                              (this->fSchemaGrammar);
                  (**(code **)(*plVar15 + 0x68))(plVar15,2);
                  (**(code **)(*plVar15 + 0x78))(plVar15,pXVar14);
                  preprocessSchema(this,pDVar9,pXVar14);
                  RefHashTableOf<xercesc_2_7::SchemaInfo>::put
                            (this->fPreprocessedNodes,elem,this->fSchemaInfo);
                  restoreSchemaInfo(this,pSVar3,IMPORT,0xfffffffe);
                }
                else {
                  reportSchemaError(this,pDVar9,(XMLCh *)&XMLUni::fgXMLErrDomain,0x58,pXVar12,
                                    (XMLCh *)CONCAT44(extraout_var_00,iVar8),str1,(XMLCh *)0x0);
                }
              }
            }
          }
          else {
            SchemaInfo::addSchemaInfo(this->fSchemaInfo,importSchemaInfo,IMPORT);
          }
          Janitor<xercesc_2_7::InputSource>::_Janitor(&janSrc);
        }
      }
    }
  }
  else {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x67);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall xercesc_2_7::TraverseSchema::traverseImport(TraverseSchema *this,DOMElement *elem)

{
  SchemaInfo *toRestore;
  SchemaInfo *toRestore_00;
  DOMElement *schemaRoot;
  SchemaInfo *importInfo;
  SchemaInfo *saveInfo;
  
  toRestore_00 = RefHashTableOf<xercesc_2_7::SchemaInfo>::get(this->fPreprocessedNodes,elem);
  if (toRestore_00 != (SchemaInfo *)0x0) {
    toRestore = this->fSchemaInfo;
    restoreSchemaInfo(this,toRestore_00,IMPORT,0xfffffffe);
    schemaRoot = SchemaInfo::getRoot(toRestore_00);
    doTraverseSchema(this,schemaRoot);
    restoreSchemaInfo(this,toRestore,IMPORT,0xfffffffe);
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::preprocessRedefine(TraverseSchema *this,DOMElement *redefineElem)

{
  SchemaInfo *redefiningSchemaInfo;
  SchemaInfo *redefinedSchemaInfo;
  bool bVar1;
  RefHash2KeysTableOf_short_unsigned_int_ *this_00;
  DOMElement *root;
  SchemaInfo *redefiningInfo;
  SchemaInfo *redefinedInfo;
  
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)redefineElem,(TraverseSchema *)0x26,
             SUB81(this,0),(ValueVectorOf *)0x1);
  redefiningSchemaInfo = this->fSchemaInfo;
  bVar1 = openRedefinedSchema(this,redefineElem);
  if (bVar1 == true) {
    if (this->fRedefineComponents == (RefHash2KeysTableOf_short_unsigned_int_ *)0x0) {
      this_00 = (RefHash2KeysTableOf_short_unsigned_int_ *)
                xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
      RefHash2KeysTableOf<short_unsigned_int>::RefHash2KeysTableOf
                (this_00,0xd,false,this->fMemoryManager);
      this->fRedefineComponents = this_00;
    }
    redefinedSchemaInfo = this->fSchemaInfo;
    renameRedefinedComponents(this,redefineElem,redefiningSchemaInfo,redefinedSchemaInfo);
    bVar1 = RefHashTableOf<xercesc_2_7::SchemaInfo>::containsKey
                      (this->fPreprocessedNodes,redefineElem);
    if (bVar1 != false) {
      this->fSchemaInfo = redefinedSchemaInfo;
      root = SchemaInfo::getRoot(this->fSchemaInfo);
      preprocessChildren(this,root);
    }
    this->fSchemaInfo = redefiningSchemaInfo;
  }
  else {
    SchemaInfo::addFailedRedefine(redefiningSchemaInfo,redefineElem);
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseRedefine(TraverseSchema *this,DOMElement *redefineElem)

{
  SchemaInfo *pSVar1;
  SchemaInfo *pSVar2;
  DOMElement *root;
  SchemaInfo *saveInfo;
  SchemaInfo *redefinedInfo;
  
  pSVar1 = this->fSchemaInfo;
  pSVar2 = RefHashTableOf<xercesc_2_7::SchemaInfo>::get(this->fPreprocessedNodes,redefineElem);
  if (pSVar2 != (SchemaInfo *)0x0) {
    this->fSchemaInfo = pSVar2;
    root = SchemaInfo::getRoot(this->fSchemaInfo);
    processChildren(this,root);
    this->fSchemaInfo = pSVar1;
    processChildren(this,redefineElem);
  }
  return;
}


ContentSpecNode * __thiscall
xercesc_2_7::TraverseSchema::traverseChoiceSequence
          (TraverseSchema *this,DOMElement *elem,int modelGroupType)

{
  long lVar1;
  SchemaGrammar *pSVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  DOMElement *contentElem;
  XSAnnotation *pXVar8;
  undefined4 extraout_var;
  SchemaElementDecl *elemDecl_00;
  XercesGroupInfo *this_00;
  ContentSpecNode *pCVar9;
  NodeTypes type;
  long in_FS_OFFSET;
  bool hadContent;
  bool seeParticle;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  DOMElement *child;
  ContentSpecNode *left;
  ContentSpecNode *right;
  ContentSpecNode *contentSpecNode;
  XMLCh *childName;
  XercesGroupInfo *grpInfo;
  SchemaElementDecl *elemDecl;
  XMLCh *str1;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x2a,SUB81(this,0),
             (ValueVectorOf *)0x0);
  contentElem = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  child = checkContent(this,elem,contentElem,true);
  bVar3 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if (((bVar3 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
     (uVar6 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar6 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    pXVar8 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
    this->fAnnotation = pXVar8;
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  left = (ContentSpecNode *)0x0;
  right = (ContentSpecNode *)0x0;
  bVar3 = false;
  do {
    if (child == (DOMElement *)0x0) {
      if (bVar3) {
        pCVar9 = (ContentSpecNode *)
                 xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
        if (modelGroupType == 4) {
          type = ModelGroupChoice;
        }
        else {
          type = ModelGroupSequence;
        }
        ContentSpecNode::ContentSpecNode
                  (pCVar9,type,left,right,true,true,this->fGrammarPoolMemoryManager);
        bVar3 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
        left = pCVar9;
        if (bVar3 != true) {
          pSVar2 = this->fSchemaGrammar;
          Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
          xercesc_2_7::SchemaGrammar::putAnnotation(pSVar2,(XSAnnotation *)pCVar9);
        }
      }
      Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return left;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    contentSpecNode = (ContentSpecNode *)0x0;
    bVar5 = false;
    iVar7 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    str1 = (XMLCh *)CONCAT44(extraout_var,iVar7);
    bVar4 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_ELEMENT);
    if (bVar4 == false) {
      bVar4 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_GROUP);
      if (bVar4 == false) {
        bVar4 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_CHOICE);
        if (bVar4 == false) {
          bVar4 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_SEQUENCE);
          if (bVar4 == false) {
            bVar4 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_ANY);
            if (bVar4 == false) {
              reportSchemaError(this,child,(XMLCh *)&XMLUni::fgValidityDomain,0x27,str1,(XMLCh *)0x0
                                ,(XMLCh *)0x0,(XMLCh *)0x0);
            }
            else {
              contentSpecNode = traverseAny(this,child);
              bVar5 = true;
            }
          }
          else {
            contentSpecNode = traverseChoiceSequence(this,child,5);
            bVar5 = true;
          }
        }
        else {
          contentSpecNode = traverseChoiceSequence(this,child,4);
          bVar5 = true;
        }
        goto LAB_001030a3;
      }
      this_00 = traverseGroupDecl(this,child,false);
      if ((this_00 != (XercesGroupInfo *)0x0) &&
         (pCVar9 = XercesGroupInfo::getContentSpec(this_00), pCVar9 != (ContentSpecNode *)0x0)) {
        bVar5 = ContentSpecNode::hasAllContent(pCVar9);
        if (bVar5 == false) {
          contentSpecNode =
               (ContentSpecNode *)
               xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
          xercesc_2_7::ContentSpecNode::ContentSpecNode(contentSpecNode,pCVar9);
          bVar5 = true;
          goto LAB_001030a3;
        }
        reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x76);
      }
    }
    else {
      elemDecl_00 = traverseElementDecl(this,child,false);
      if (elemDecl_00 == (SchemaElementDecl *)0x0) goto LAB_00103154;
      contentSpecNode =
           (ContentSpecNode *)
           xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (contentSpecNode,(XMLElementDecl *)elemDecl_00,this->fGrammarPoolMemoryManager);
      bVar5 = true;
LAB_001030a3:
      if (contentSpecNode != (ContentSpecNode *)0x0) {
        bVar3 = true;
      }
      if (bVar5) {
        checkMinMax(this,contentSpecNode,child,0);
      }
      if (left == (ContentSpecNode *)0x0) {
        left = contentSpecNode;
      }
      else if (right == (ContentSpecNode *)0x0) {
        right = contentSpecNode;
      }
      else {
        pCVar9 = (ContentSpecNode *)
                 xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
        ContentSpecNode::ContentSpecNode
                  (pCVar9,modelGroupType,left,right,true,true,this->fGrammarPoolMemoryManager);
        right = contentSpecNode;
        left = pCVar9;
      }
    }
LAB_00103154:
    child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode);
  } while( true );
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::traverseSimpleTypeDecl
          (TraverseSchema *this,DOMElement *childElem,bool topLevel,int baseRefContext)

{
  long lVar1;
  XMLStringPool *pXVar2;
  code *pcVar3;
  SchemaGrammar *pSVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  XMLCh *pXVar11;
  DOMElement *pDVar12;
  XSAnnotation *pXVar13;
  undefined4 extraout_var;
  DatatypeValidator *unaff_RBX;
  long in_FS_OFFSET;
  bool nameEmpty;
  ushort scope;
  uint fullTypeNameId;
  int finalSet;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  XMLCh *name;
  DatatypeValidator *dv;
  XMLCh *fullName;
  DOMElement *content;
  XMLCh *varietyName;
  XMLCh *str1;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  name = getElementAttValue(this,childElem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  if ((name == (XMLCh *)0x0) || (*name == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((topLevel != false) && (bVar7)) {
    reportSchemaError(this,childElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x62,
                      (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE,(XMLCh *)0x0,(XMLCh *)0x0,
                      (XMLCh *)0x0);
    unaff_RBX = (DatatypeValidator *)0x0;
    goto LAB_00103878;
  }
  if (bVar7) {
    name = genAnonTypeName(this,(XMLCh *)fgAnonSNamePrefix);
  }
  else {
    cVar5 = xercesc_2_7::XMLString::isValidNCName(name);
    if (cVar5 != '\x01') {
      reportSchemaError(this,childElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                        (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE,name,(XMLCh *)0x0,(XMLCh *)0x0);
      unaff_RBX = (DatatypeValidator *)0x0;
      goto LAB_00103878;
    }
  }
  XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
  XMLBuffer::append(&this->fBuffer,0x2c);
  XMLBuffer::append(&this->fBuffer,name);
  pXVar2 = this->fStringPool;
  pcVar3 = *(code **)(*(long *)this->fStringPool + 0x28);
  pXVar11 = XMLBuffer::getRawBuffer(&this->fBuffer);
  fullTypeNameId = (*pcVar3)(pXVar2,pXVar11);
  pXVar11 = (XMLCh *)(**(code **)(*(long *)this->fStringPool + 0x50))
                               (this->fStringPool,fullTypeNameId);
  dv = DatatypeValidatorFactory::getDatatypeValidator(this->fDatatypeRegistry,pXVar11);
  if (dv == (DatatypeValidator *)0x0) {
    if (topLevel == false) {
      uVar8 = 0x2d;
    }
    else {
      uVar8 = 0x2c;
    }
    xercesc_2_7::GeneralAttributeCheck::checkAttributes
              ((DOMElement *)&this->fAttributeCheck,(ushort)childElem,(TraverseSchema *)(ulong)uVar8
               ,SUB81(this,0),(ValueVectorOf *)(ulong)topLevel);
    bVar6 = ValueVectorOf<unsigned_int>::containsElement
                      (this->fCurrentTypeNameStack,&fullTypeNameId,0);
    if (bVar6 != false) {
      reportSchemaError(this,childElem,(XMLCh *)&XMLUni::fgXMLErrDomain,99,name,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      unaff_RBX = (DatatypeValidator *)0x0;
      goto LAB_00103878;
    }
    ValueVectorOf<unsigned_int>::addElement(this->fCurrentTypeNameStack,&fullTypeNameId);
    finalSet = parseFinalSet(this,childElem,2,false);
    pDVar12 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&childElem->super_DOMNode);
    pDVar12 = checkContent(this,childElem,pDVar12,false);
    bVar6 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if ((bVar6 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) {
LAB_001035f5:
      bVar6 = false;
    }
    else {
      uVar9 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList);
      if (uVar9 == 0) goto LAB_001035f5;
      bVar6 = true;
    }
    if (bVar6) {
      pXVar13 = generateSyntheticAnnotation(this,childElem,this->fNonXSAttList);
      this->fAnnotation = pXVar13;
    }
    Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
    if (pDVar12 == (DOMElement *)0x0) {
      reportSchemaError(this,childElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1d);
      popCurrentTypeNameStack(this);
      unaff_RBX = (DatatypeValidator *)0x0;
      bVar7 = false;
    }
    else {
      iVar10 = (*(pDVar12->super_DOMNode)._vptr_DOMNode[0x18])(pDVar12);
      str1 = (XMLCh *)CONCAT44(extraout_var,iVar10);
      bVar6 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_LIST);
      if (bVar6 == false) {
        bVar6 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_RESTRICTION);
        if (bVar6 == false) {
          bVar6 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_UNION);
          if (bVar6 == false) {
            reportSchemaError(this,pDVar12,(XMLCh *)&XMLUni::fgXMLErrDomain,10,str1,(XMLCh *)0x0,
                              (XMLCh *)0x0,(XMLCh *)0x0);
            popCurrentTypeNameStack(this);
          }
          else {
            dv = traverseByUnion(this,childElem,pDVar12,name,pXVar11,finalSet,baseRefContext,
                                 &janAnnot);
          }
        }
        else {
          dv = traverseByRestriction(this,childElem,pDVar12,name,pXVar11,finalSet,&janAnnot);
        }
      }
      else {
        if ((baseRefContext & 8U) != 0) {
          reportSchemaError(this,pDVar12,(XMLCh *)&XMLUni::fgXMLErrDomain,0x70);
          popCurrentTypeNameStack(this);
          unaff_RBX = (DatatypeValidator *)0x0;
          bVar7 = false;
          goto LAB_0010385f;
        }
        dv = traverseByList(this,childElem,pDVar12,name,pXVar11,finalSet,&janAnnot);
      }
      if (dv != (DatatypeValidator *)0x0) {
        if (bVar7) {
          DatatypeValidator::setAnonymous(dv);
        }
        bVar7 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
        if (bVar7 != true) {
          pSVar4 = this->fSchemaGrammar;
          Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
          xercesc_2_7::SchemaGrammar::putAnnotation(pSVar4,(XSAnnotation *)dv);
        }
      }
      bVar7 = true;
    }
LAB_0010385f:
    Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
    if (!bVar7) goto LAB_00103878;
  }
  unaff_RBX = dv;
LAB_00103878:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_RBX;
}


/* WARNING: Could not reconcile some variable overlaps */

int __thiscall
xercesc_2_7::TraverseSchema::traverseComplexTypeDecl
          (TraverseSchema *this,DOMElement *elem,bool topLevel,XMLCh *recursingTypeName)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  XMLStringPool *pXVar4;
  code *pcVar5;
  XMLStringPool *pXVar6;
  code *pcVar7;
  ComplexTypeInfo *pCVar8;
  SchemaGrammar *pSVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int finalSet_00;
  XMLCh *pXVar19;
  XSDLocator *this_00;
  XMLSSize_t XVar20;
  ushort *puVar21;
  DOMElement *contentElem;
  DOMNode *childElem;
  XSAnnotation *pXVar22;
  XMLCh *pXVar23;
  undefined4 extraout_var;
  long lVar24;
  long in_FS_OFFSET;
  bool isAnonymous;
  bool isMixed;
  bool preProcessFlag;
  ushort scope;
  int typeNameIndex;
  uint previousCircularCheckIndex;
  uint previousScope;
  ExceptionCodes aCode;
  int blockSet;
  int finalSet;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  XMLCh *name;
  ComplexTypeInfo *typeInfo;
  XMLCh *fullName;
  XSDLocator *aLocator;
  ComplexTypeInfo *saveTypeInfo;
  DOMElement *child;
  XMLCh *mixedVal;
  XMLCh *childName;
  XMLCh *abstractAttVal;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  name = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  bVar12 = false;
  if ((name == (XMLCh *)0x0) || (*name == 0)) {
    if (topLevel != false) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0xb);
      iVar15 = -1;
      goto LAB_001042fc;
    }
    name = recursingTypeName;
    if (recursingTypeName == (XMLCh *)0x0) {
      name = genAnonTypeName(this,(XMLCh *)fgAnonCNamePrefix);
      bVar12 = true;
    }
  }
  cVar10 = xercesc_2_7::XMLString::isValidNCName(name);
  if (cVar10 == '\x01') {
    XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
    XMLBuffer::append(&this->fBuffer,0x2c);
    XMLBuffer::append(&this->fBuffer,name);
    pXVar4 = this->fStringPool;
    pcVar5 = *(code **)(*(long *)this->fStringPool + 0x28);
    XMLBuffer::getRawBuffer(&this->fBuffer);
    iVar15 = (*pcVar5)(pXVar4);
    pXVar19 = (XMLCh *)(**(code **)(*(long *)this->fStringPool + 0x50))(this->fStringPool);
    typeInfo = (ComplexTypeInfo *)0x0;
    if ((topLevel != false) || (recursingTypeName != (XMLCh *)0x0)) {
      typeInfo = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get
                           (this->fComplexTypeRegistry,pXVar19);
      if ((typeInfo == (ComplexTypeInfo *)0x0) ||
         (bVar11 = ComplexTypeInfo::getPreprocessed(typeInfo), bVar11 == true)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) goto LAB_001042fc;
    }
    if (topLevel == false) {
      uVar14 = 0xd;
    }
    else {
      uVar14 = 0xc;
    }
    xercesc_2_7::GeneralAttributeCheck::checkAttributes
              ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)(ulong)uVar14,
               SUB81(this,0),(ValueVectorOf *)(ulong)topLevel);
    if ((typeInfo == (ComplexTypeInfo *)0x0) ||
       (bVar11 = ComplexTypeInfo::getPreprocessed(typeInfo), bVar11 == false)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    uVar1 = this->fCircularCheckIndex;
    uVar2 = this->fCurrentScope;
    if (bVar11) {
      uVar16 = ComplexTypeInfo::getScopeDefined(typeInfo);
      this->fCurrentScope = uVar16;
      ComplexTypeInfo::setPreprocessed(typeInfo,false);
    }
    else {
      typeInfo = (ComplexTypeInfo *)
                 xercesc_2_7::XMemory::operator_new(0xb0,this->fGrammarPoolMemoryManager);
      xercesc_2_7::ComplexTypeInfo::ComplexTypeInfo(typeInfo,this->fGrammarPoolMemoryManager);
      if (bVar12) {
        ComplexTypeInfo::setAnonymous(typeInfo);
      }
      uVar16 = this->fScopeCount;
      this->fScopeCount = uVar16 + 1;
      this->fCurrentScope = uVar16;
      RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::put(this->fComplexTypeRegistry,pXVar19,typeInfo)
      ;
      ComplexTypeInfo::setTypeName(typeInfo,pXVar19);
      ComplexTypeInfo::setScopeDefined(typeInfo,this->fCurrentScope);
      if (this->fFullConstraintChecking != false) {
        this_00 = (XSDLocator *)
                  xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
        xercesc_2_7::XSDLocator::XSDLocator(this_00);
        XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)elem);
        XVar20 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)elem);
        pXVar4 = this->fStringPool;
        pcVar5 = *(code **)(*(long *)this->fStringPool + 0x50);
        pXVar6 = this->fStringPool;
        pcVar7 = *(code **)(*(long *)this->fStringPool + 0x28);
        pXVar23 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
        uVar17 = (*pcVar7)(pXVar6,pXVar23);
        puVar21 = (ushort *)(*pcVar5)(pXVar4,uVar17);
        xercesc_2_7::XSDLocator::setValues((ushort *)this_00,puVar21,0,XVar20);
        xercesc_2_7::ComplexTypeInfo::setLocator((XSDLocator *)typeInfo);
      }
    }
    janAnnot.fData._0_4_ = iVar15;
    ValueVectorOf<unsigned_int>::addElement(this->fCurrentTypeNameStack,(uint *)&janAnnot);
    pCVar8 = this->fCurrentComplexType;
    this->fCurrentComplexType = typeInfo;
    contentElem = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
    childElem = (DOMNode *)checkContent(this,elem,contentElem,true);
    bVar12 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if (((bVar12 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
       (uVar16 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar16 == 0)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      pXVar22 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
      this->fAnnotation = pXVar22;
    }
    Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
    pXVar23 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_MIXED,false);
    if (((pXVar23 == (XMLCh *)0x0) || (*pXVar23 == 0)) ||
       ((bVar12 = XMLString::equals((XMLCh *)&SchemaSymbols::fgATTVAL_TRUE,pXVar23), bVar12 == false
        && (bVar12 = XMLString::equals((XMLCh *)&fgValueOne,pXVar23), bVar12 == false)))) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (childElem == (DOMNode *)0x0) {
      processComplexContent(this,elem,name,(DOMElement *)0x0,typeInfo,(XMLCh *)0x0,bVar12,false);
    }
    else {
      iVar18 = (*childElem->_vptr_DOMNode[0x18])(childElem);
      bVar13 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar18),
                                 (XMLCh *)&SchemaSymbols::fgELT_SIMPLECONTENT);
      if (bVar13 == false) {
        bVar13 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar18),
                                   (XMLCh *)&SchemaSymbols::fgELT_COMPLEXCONTENT);
        if (bVar13 == false) {
          if (this->fCurrentGroupInfo == (XercesGroupInfo *)0x0) {
            processComplexContent
                      (this,elem,name,(DOMElement *)childElem,typeInfo,(XMLCh *)0x0,bVar12,false);
          }
          else {
            ComplexTypeInfo::setPreprocessed(typeInfo,true);
          }
        }
        else {
          traverseComplexContentDecl(this,name,(DOMElement *)childElem,typeInfo,bVar12,&janAnnot);
          lVar24 = xercesc_2_7::XUtil::getNextSiblingElement(childElem);
          if (lVar24 != 0) {
            reportSchemaError(this,(DOMElement *)childElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x2e);
          }
        }
      }
      else {
        traverseSimpleContentDecl(this,name,pXVar19,(DOMElement *)childElem,typeInfo,&janAnnot);
        lVar24 = xercesc_2_7::XUtil::getNextSiblingElement(childElem);
        if (lVar24 != 0) {
          reportSchemaError(this,(DOMElement *)childElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x2d);
        }
      }
    }
    if (!bVar11) {
      pXVar19 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_ABSTRACT,false);
      iVar18 = parseBlockSet(this,elem,1,false);
      finalSet_00 = parseFinalSet(this,elem,3,false);
      ComplexTypeInfo::setBlockSet(typeInfo,iVar18);
      ComplexTypeInfo::setFinalSet(typeInfo,finalSet_00);
      if (((pXVar19 == (XMLCh *)0x0) || (*pXVar19 == 0)) ||
         ((bVar12 = XMLString::equals(pXVar19,(XMLCh *)&SchemaSymbols::fgATTVAL_TRUE),
          bVar12 == false &&
          (bVar12 = XMLString::equals(pXVar19,(XMLCh *)&fgValueOne), bVar12 == false)))) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        ComplexTypeInfo::setAbstract(typeInfo,true);
      }
      else {
        ComplexTypeInfo::setAbstract(typeInfo,false);
      }
    }
    bVar12 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
    if (bVar12 != true) {
      pSVar9 = this->fSchemaGrammar;
      Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
      xercesc_2_7::SchemaGrammar::putAnnotation(pSVar9,(XSAnnotation *)typeInfo);
    }
    popCurrentTypeNameStack(this);
    this->fCircularCheckIndex = uVar1;
    this->fCurrentScope = uVar2;
    this->fCurrentComplexType = pCVar8;
    Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  }
  else {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                      (XMLCh *)&SchemaSymbols::fgELT_COMPLEXTYPE,name,(XMLCh *)0x0,(XMLCh *)0x0);
    iVar15 = -1;
  }
LAB_001042fc:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar15;
}


XercesGroupInfo * __thiscall
xercesc_2_7::TraverseSchema::traverseGroupDecl(TraverseSchema *this,DOMElement *elem,bool topLevel)

{
  long lVar1;
  XMLStringPool *pXVar2;
  code *pcVar3;
  SchemaGrammar *pSVar4;
  XMLStringPool *pXVar5;
  code *pcVar6;
  RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this_00;
  SchemaInfo *pSVar7;
  SchemaInfo *pSVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  XMLCh *pXVar16;
  XMLCh *pXVar17;
  DOMElement *pDVar18;
  DOMNode *elem_00;
  XSAnnotation *pXVar19;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long lVar20;
  XSDLocator *this_01;
  XMLSSize_t XVar21;
  XMLCh *pXVar22;
  ushort *puVar23;
  XercesGroupInfo *pXVar24;
  SchemaInfo **ppSVar25;
  XSDLocator *this_02;
  long in_FS_OFFSET;
  bool illegalChild;
  bool nameEmpty;
  bool refEmpty;
  ushort scope;
  uint nameIndex;
  uint rdfNameIndex;
  int saveScope;
  uint stackSize;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  ContentSpecNode *specNode;
  XMLCh *name;
  XMLCh *ref;
  XMLCh *fullName;
  XercesGroupInfo *groupInfo;
  DOMElement *content;
  XercesGroupInfo *saveGroupInfo;
  XMLCh *childName;
  XSDLocator *aLocator;
  XercesGroupInfo *baseGroup;
  SchemaInfo *saveInfo;
  DOMElement *groupElem;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pXVar16 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  pXVar17 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_REF,false);
  if ((pXVar16 == (XMLCh *)0x0) || (*pXVar16 == 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if ((pXVar17 == (XMLCh *)0x0) || (*pXVar17 == 0)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if ((bVar10) && (topLevel != false)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x62,
                      (XMLCh *)&SchemaSymbols::fgELT_GROUP,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
    this_02 = (XSDLocator *)0x0;
  }
  else if ((bVar10) && (bVar11)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x10);
    this_02 = (XSDLocator *)0x0;
  }
  else {
    if (topLevel == false) {
      uVar12 = 0x17;
    }
    else {
      uVar12 = 0x16;
    }
    xercesc_2_7::GeneralAttributeCheck::checkAttributes
              ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)(ulong)uVar12,
               SUB81(this,0),(ValueVectorOf *)(ulong)topLevel);
    if (topLevel == true) {
      cVar9 = xercesc_2_7::XMLString::isValidNCName(pXVar16);
      if (cVar9 == '\x01') {
        XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
        XMLBuffer::append(&this->fBuffer,0x2c);
        XMLBuffer::append(&this->fBuffer,pXVar16);
        pXVar2 = this->fStringPool;
        pcVar3 = *(code **)(*(long *)this->fStringPool + 0x28);
        pXVar17 = XMLBuffer::getRawBuffer(&this->fBuffer);
        nameIndex = (*pcVar3)(pXVar2,pXVar17);
        pXVar17 = (XMLCh *)(**(code **)(*(long *)this->fStringPool + 0x50))
                                     (this->fStringPool,nameIndex);
        this_02 = (XSDLocator *)
                  RefHashTableOf<xercesc_2_7::XercesGroupInfo>::get(this->fGroupRegistry,pXVar17);
        if (this_02 == (XSDLocator *)0x0) {
          pDVar18 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
          elem_00 = (DOMNode *)checkContent(this,elem,pDVar18,true);
          bVar10 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
          if (((bVar10 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
             (uVar13 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar13 == 0)
             ) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (bVar10) {
            pXVar19 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
            this->fAnnotation = pXVar19;
          }
          Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
          saveScope = this->fCurrentScope;
          specNode = (ContentSpecNode *)0x0;
          pXVar24 = this->fCurrentGroupInfo;
          uVar13 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,pXVar16);
          this_02 = (XSDLocator *)
                    xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
          xercesc_2_7::XercesGroupInfo::XercesGroupInfo
                    ((XercesGroupInfo *)this_02,uVar13,this->fTargetNSURI,
                     this->fGrammarPoolMemoryManager);
          ValueVectorOf<unsigned_int>::addElement(this->fCurrentGroupStack,&nameIndex);
          this->fCurrentGroupInfo = (XercesGroupInfo *)this_02;
          uVar13 = this->fScopeCount;
          this->fScopeCount = uVar13 + 1;
          this->fCurrentScope = uVar13;
          XercesGroupInfo::setScope(this->fCurrentGroupInfo,this->fCurrentScope);
          if (elem_00 == (DOMNode *)0x0) {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x72,pXVar16,(XMLCh *)0x0,
                              (XMLCh *)0x0,(XMLCh *)0x0);
          }
          else {
            iVar14 = (*elem_00->_vptr_DOMNode[0x2a])(elem_00,&SchemaSymbols::fgATT_MINOCCURS);
            if ((CONCAT44(extraout_var,iVar14) == 0) &&
               (iVar14 = (*elem_00->_vptr_DOMNode[0x2a])(elem_00,&SchemaSymbols::fgATT_MAXOCCURS),
               CONCAT44(extraout_var_00,iVar14) == 0)) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            if (bVar10) {
              reportSchemaError(this,(DOMElement *)elem_00,(XMLCh *)&XMLUni::fgXMLErrDomain,0x74);
            }
            bVar10 = false;
            iVar14 = (*elem_00->_vptr_DOMNode[0x18])(elem_00);
            pXVar22 = (XMLCh *)CONCAT44(extraout_var_01,iVar14);
            bVar11 = XMLString::equals(pXVar22,(XMLCh *)&SchemaSymbols::fgELT_SEQUENCE);
            if (bVar11 == false) {
              bVar11 = XMLString::equals(pXVar22,(XMLCh *)&SchemaSymbols::fgELT_CHOICE);
              if (bVar11 == false) {
                bVar11 = XMLString::equals(pXVar22,(XMLCh *)&SchemaSymbols::fgELT_ALL);
                if (bVar11 == false) {
                  bVar10 = true;
                }
                else {
                  specNode = traverseAll(this,(DOMElement *)elem_00);
                }
              }
              else {
                specNode = traverseChoiceSequence(this,(DOMElement *)elem_00,4);
              }
            }
            else {
              specNode = traverseChoiceSequence(this,(DOMElement *)elem_00,5);
            }
            if ((bVar10) ||
               (lVar20 = xercesc_2_7::XUtil::getNextSiblingElement(elem_00), lVar20 != 0)) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              reportSchemaError(this,(DOMElement *)elem_00,(XMLCh *)&XMLUni::fgXMLErrDomain,0x72,
                                pXVar16,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
            }
            if (this->fCurrentComplexType != (ComplexTypeInfo *)0x0) {
              processElements(this,elem,this->fCurrentGroupInfo,this->fCurrentComplexType);
            }
          }
          stackSize = ValueVectorOf<unsigned_int>::size(this->fCurrentGroupStack);
          if (stackSize != 0) {
            ValueVectorOf<unsigned_int>::removeElementAt(this->fCurrentGroupStack,stackSize - 1);
          }
          XercesGroupInfo::setContentSpec(this->fCurrentGroupInfo,specNode);
          RefHashTableOf<xercesc_2_7::XercesGroupInfo>::put
                    (this->fGroupRegistry,pXVar17,this->fCurrentGroupInfo);
          this->fCurrentGroupInfo = pXVar24;
          this->fCurrentScope = saveScope;
          bVar10 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
          if (bVar10 != true) {
            pSVar4 = this->fSchemaGrammar;
            Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
            xercesc_2_7::SchemaGrammar::putAnnotation(pSVar4,(XSAnnotation *)this_02);
          }
          if (this->fFullConstraintChecking != false) {
            this_01 = (XSDLocator *)
                      xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
            xercesc_2_7::XSDLocator::XSDLocator(this_01);
            xercesc_2_7::XercesGroupInfo::setLocator(this_02);
            XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)elem);
            XVar21 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)elem);
            pXVar2 = this->fStringPool;
            pcVar3 = *(code **)(*(long *)this->fStringPool + 0x50);
            pXVar5 = this->fStringPool;
            pcVar6 = *(code **)(*(long *)this->fStringPool + 0x28);
            pXVar22 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
            uVar15 = (*pcVar6)(pXVar5,pXVar22);
            puVar23 = (ushort *)(*pcVar3)(pXVar2,uVar15);
            xercesc_2_7::XSDLocator::setValues((ushort *)this_01,puVar23,0,XVar21);
            if ((this->fRedefineComponents == (RefHash2KeysTableOf_short_unsigned_int_ *)0x0) ||
               (puVar23 = RefHash2KeysTableOf<short_unsigned_int>::get
                                    (this->fRedefineComponents,&SchemaSymbols::fgELT_GROUP,nameIndex
                                    ), puVar23 == (ushort *)0x0)) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            if (bVar10) {
              XMLBuffer::set(&this->fBuffer,pXVar17);
              XMLBuffer::append(&this->fBuffer,(XMLCh *)&SchemaSymbols::fgRedefIdentifier);
              pXVar2 = this->fStringPool;
              pcVar3 = *(code **)(*(long *)this->fStringPool + 0x28);
              pXVar17 = XMLBuffer::getRawBuffer(&this->fBuffer);
              rdfNameIndex = (*pcVar3)(pXVar2,pXVar17);
              bVar10 = ValueVectorOf<unsigned_int>::containsElement
                                 (this->fCurrentGroupStack,&rdfNameIndex,0);
              if (bVar10 == false) {
                this_00 = this->fGroupRegistry;
                pXVar17 = XMLBuffer::getRawBuffer(&this->fBuffer);
                pXVar24 = RefHashTableOf<xercesc_2_7::XercesGroupInfo>::get(this_00,pXVar17);
                if (pXVar24 == (XercesGroupInfo *)0x0) {
                  XMLBuffer::set(&this->fBuffer,pXVar16);
                  XMLBuffer::append(&this->fBuffer,(XMLCh *)&SchemaSymbols::fgRedefIdentifier);
                  pSVar7 = this->fSchemaInfo;
                  pSVar8 = this->fSchemaInfo;
                  ppSVar25 = (SchemaInfo **)XMLBuffer::getRawBuffer(&this->fBuffer);
                  pDVar18 = (DOMElement *)
                            xercesc_2_7::SchemaInfo::getTopLevelComponent
                                      ((ushort)pSVar8,(ushort *)0x2,
                                       (ushort *)&SchemaSymbols::fgELT_GROUP,ppSVar25);
                  if (pDVar18 == (DOMElement *)0x0) {
                    pXVar16 = XMLBuffer::getRawBuffer(&this->fBuffer);
                    reportSchemaError(this,this_01,(XMLCh *)&XMLUni::fgXMLErrDomain,0x75,
                                      (XMLCh *)&SchemaSymbols::fgELT_GROUP,this->fTargetNSURIString,
                                      pXVar16,(XMLCh *)0x0);
                  }
                  else {
                    pXVar24 = traverseGroupDecl(this,pDVar18,true);
                    XercesGroupInfo::setBaseGroup((XercesGroupInfo *)this_02,pXVar24);
                    this->fSchemaInfo = pSVar7;
                  }
                }
                else {
                  XercesGroupInfo::setBaseGroup((XercesGroupInfo *)this_02,pXVar24);
                }
              }
              else {
                reportSchemaError(this,this_01,(XMLCh *)&XMLUni::fgXMLErrDomain,99,pXVar16,
                                  (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
              }
            }
          }
          Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
        }
      }
      else {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                          (XMLCh *)&SchemaSymbols::fgELT_GROUP,pXVar16,(XMLCh *)0x0,(XMLCh *)0x0);
        this_02 = (XSDLocator *)0x0;
      }
    }
    else if (bVar11) {
      this_02 = (XSDLocator *)0x0;
    }
    else {
      this_02 = (XSDLocator *)processGroupRef(this,elem,pXVar17);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (XercesGroupInfo *)this_02;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


XercesAttGroupInfo * __thiscall
xercesc_2_7::TraverseSchema::traverseAttributeGroupDecl
          (TraverseSchema *this,DOMElement *elem,ComplexTypeInfo *typeInfo,bool topLevel)

{
  long lVar1;
  ValueVectorOf_const_xercesc_2_7__DOMElement__ *this_00;
  RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *pRVar2;
  XMLStringPool *pXVar3;
  code *pcVar4;
  SchemaGrammar *pSVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  XMLCh *pXVar11;
  XMLCh *pXVar12;
  DOMElement *contentElem;
  XSAnnotation *pXVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long lVar14;
  void *key;
  ushort *puVar15;
  XercesAttGroupInfo *pXVar16;
  SchemaAttDef *pSVar17;
  SchemaAttDef *this_01;
  long in_FS_OFFSET;
  DOMNode *local_98;
  TraverseSchema *local_90;
  bool nameEmpty;
  bool refEmpty;
  ushort scope;
  uint k;
  uint nameIndex;
  uint anyAttCount;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  XercesAttGroupInfo *attGroupInfo;
  DOMElement *content;
  XMLCh *name;
  XMLCh *ref;
  XercesAttGroupInfo *saveAttGroupInfo;
  SchemaAttDef *anyAtt;
  XercesAttGroupInfo *baseAttGroupInfo;
  SchemaAttDef *attGroupWildCard;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = &elem->super_DOMNode;
  local_90 = this;
  pXVar11 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  pXVar12 = getElementAttValue(local_90,(DOMElement *)local_98,(XMLCh *)&SchemaSymbols::fgATT_REF,
                               false);
  if ((pXVar11 == (XMLCh *)0x0) || (*pXVar11 == 0)) {
    nameEmpty = true;
  }
  else {
    nameEmpty = false;
  }
  if ((pXVar12 == (XMLCh *)0x0) || (*pXVar12 == 0)) {
    refEmpty = true;
  }
  else {
    refEmpty = false;
  }
  if ((nameEmpty == false) || (topLevel == false)) {
    if ((nameEmpty == false) || (refEmpty == false)) {
      if (topLevel == false) {
        scope = 9;
      }
      else {
        scope = 8;
      }
      xercesc_2_7::GeneralAttributeCheck::checkAttributes
                ((DOMElement *)&local_90->fAttributeCheck,(ushort)local_98,
                 (TraverseSchema *)(ulong)scope,SUB81(local_90,0),(ValueVectorOf *)(ulong)topLevel);
      if (topLevel == true) {
        cVar6 = xercesc_2_7::XMLString::isValidNCName(pXVar11);
        if (cVar6 != '\x01') {
          reportSchemaError(local_90,(DOMElement *)local_98,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                            (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP,pXVar11,(XMLCh *)0x0,
                            (XMLCh *)0x0);
          attGroupInfo = (XercesAttGroupInfo *)0x0;
          goto LAB_001059f3;
        }
        contentElem = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(local_98);
        content = checkContent(local_90,(DOMElement *)local_98,contentElem,true);
        bVar7 = XMLScanner::getGenerateSyntheticAnnotations(local_90->fScanner);
        if (((bVar7 == false) || (local_90->fAnnotation != (XSAnnotation *)0x0)) ||
           (uVar8 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(local_90->fNonXSAttList), uVar8 == 0)
           ) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pXVar13 = generateSyntheticAnnotation
                              (local_90,(DOMElement *)local_98,local_90->fNonXSAttList);
          local_90->fAnnotation = pXVar13;
        }
        Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,local_90->fAnnotation);
        pXVar16 = local_90->fCurrentAttGroupInfo;
        uVar8 = (**(code **)(*(long *)local_90->fStringPool + 0x28))(local_90->fStringPool,pXVar11);
        attGroupInfo = (XercesAttGroupInfo *)
                       xercesc_2_7::XMemory::operator_new(0x38,local_90->fGrammarPoolMemoryManager);
        xercesc_2_7::XercesAttGroupInfo::XercesAttGroupInfo
                  (attGroupInfo,uVar8,local_90->fTargetNSURI,local_90->fGrammarPoolMemoryManager);
        ValueVectorOf<const_xercesc_2_7::DOMElement*>::addElement
                  (local_90->fDeclStack,(DOMElement **)&local_98);
        local_90->fCurrentAttGroupInfo = attGroupInfo;
        for (; content != (DOMElement *)0x0;
            content = (DOMElement *)
                      xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode)) {
          iVar9 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
          bVar7 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar9),
                                    (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTE);
          if (bVar7 == false) {
            iVar9 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
            bVar7 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar9),
                                      (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP);
            if (bVar7 == false) break;
            traverseAttributeGroupDecl(local_90,content,typeInfo,false);
          }
          else {
            traverseAttributeDecl(local_90,content,typeInfo,false);
          }
        }
        if (content != (DOMElement *)0x0) {
          iVar9 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
          bVar7 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_01,iVar9),
                                    (XMLCh *)&SchemaSymbols::fgELT_ANYATTRIBUTE);
          if (bVar7 == false) {
            reportSchemaError(local_90,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x73,pXVar11,
                              (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
          }
          else {
            pSVar17 = traverseAnyAttribute(local_90,content);
            if (pSVar17 != (SchemaAttDef *)0x0) {
              XercesAttGroupInfo::addAnyAttDef(local_90->fCurrentAttGroupInfo,pSVar17,false);
            }
            lVar14 = xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode);
            if (lVar14 != 0) {
              reportSchemaError(local_90,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x73,pXVar11,
                                (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
            }
          }
        }
        this_00 = local_90->fDeclStack;
        uVar8 = ValueVectorOf<const_xercesc_2_7::DOMElement*>::size(local_90->fDeclStack);
        ValueVectorOf<const_xercesc_2_7::DOMElement*>::removeElementAt(this_00,uVar8 - 1);
        pRVar2 = local_90->fAttGroupRegistry;
        pXVar3 = local_90->fStringPool;
        pcVar4 = *(code **)(*(long *)local_90->fStringPool + 0x50);
        uVar10 = (**(code **)(*(long *)local_90->fStringPool + 0x28))(local_90->fStringPool,pXVar11)
        ;
        key = (void *)(*pcVar4)(pXVar3,uVar10);
        RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::put(pRVar2,key,attGroupInfo);
        local_90->fCurrentAttGroupInfo = pXVar16;
        XMLBuffer::set(&local_90->fBuffer,local_90->fTargetNSURIString);
        XMLBuffer::append(&local_90->fBuffer,0x2c);
        XMLBuffer::append(&local_90->fBuffer,pXVar11);
        pXVar3 = local_90->fStringPool;
        pcVar4 = *(code **)(*(long *)local_90->fStringPool + 0x28);
        pXVar12 = XMLBuffer::getRawBuffer(&local_90->fBuffer);
        nameIndex = (*pcVar4)(pXVar3,pXVar12);
        if ((local_90->fRedefineComponents == (RefHash2KeysTableOf_short_unsigned_int_ *)0x0) ||
           (puVar15 = RefHash2KeysTableOf<short_unsigned_int>::get
                                (local_90->fRedefineComponents,&SchemaSymbols::fgELT_ATTRIBUTEGROUP,
                                 nameIndex), puVar15 == (ushort *)0x0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          XMLBuffer::set(&local_90->fBuffer,pXVar11);
          XMLBuffer::append(&local_90->fBuffer,(XMLCh *)&SchemaSymbols::fgRedefIdentifier);
          pRVar2 = local_90->fAttGroupRegistry;
          pXVar11 = XMLBuffer::getRawBuffer(&local_90->fBuffer);
          pXVar16 = RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::get(pRVar2,pXVar11);
          if (pXVar16 != (XercesAttGroupInfo *)0x0) {
            checkAttDerivationOK(local_90,(DOMElement *)local_98,pXVar16,attGroupInfo);
          }
        }
        bVar7 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
        if (bVar7 != true) {
          pSVar5 = local_90->fSchemaGrammar;
          Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
          xercesc_2_7::SchemaGrammar::putAnnotation(pSVar5,(XSAnnotation *)attGroupInfo);
        }
        Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
      }
      else {
        if (refEmpty != false) {
          attGroupInfo = (XercesAttGroupInfo *)0x0;
          goto LAB_001059f3;
        }
        attGroupInfo = processAttributeGroupRef(local_90,(DOMElement *)local_98,pXVar12,typeInfo);
      }
      if (attGroupInfo != (XercesAttGroupInfo *)0x0) {
        anyAttCount = XercesAttGroupInfo::anyAttributeCount(attGroupInfo);
        if ((anyAttCount == 0) ||
           (pSVar17 = XercesAttGroupInfo::getCompleteWildCard(attGroupInfo),
           pSVar17 != (SchemaAttDef *)0x0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pSVar17 = XercesAttGroupInfo::anyAttributeAt(attGroupInfo,0);
          this_01 = (SchemaAttDef *)
                    xercesc_2_7::XMemory::operator_new(0x78,local_90->fGrammarPoolMemoryManager);
          xercesc_2_7::SchemaAttDef::SchemaAttDef(this_01,pSVar17);
          for (k = 1; k < anyAttCount; k = k + 1) {
            pSVar17 = XercesAttGroupInfo::anyAttributeAt(attGroupInfo,k);
            attWildCardIntersection(local_90,this_01,pSVar17);
          }
          XercesAttGroupInfo::setCompleteWildCard(attGroupInfo,this_01);
        }
      }
    }
    else {
      reportSchemaError(local_90,(DOMElement *)local_98,(XMLCh *)&XMLUni::fgXMLErrDomain,0x11);
      attGroupInfo = (XercesAttGroupInfo *)0x0;
    }
  }
  else {
    reportSchemaError(local_90,(DOMElement *)local_98,(XMLCh *)&XMLUni::fgXMLErrDomain,0x62,
                      (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP,(XMLCh *)0x0,(XMLCh *)0x0,
                      (XMLCh *)0x0);
    attGroupInfo = (XercesAttGroupInfo *)0x0;
  }
LAB_001059f3:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return attGroupInfo;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


ContentSpecNode * __thiscall
xercesc_2_7::TraverseSchema::traverseAny(TraverseSchema *this,DOMElement *elem)

{
  long lVar1;
  code *pcVar2;
  MemoryManager *pMVar3;
  SchemaGrammar *pSVar4;
  bool bVar5;
  uint uVar6;
  DOMElement *pDVar7;
  XSAnnotation *pXVar8;
  XMLCh *str1;
  XMLCh *str1_00;
  QName *pQVar9;
  BaseRefVectorOf_short_unsigned_int_ *this_00;
  long *plVar10;
  ushort *str1_01;
  ValidationContext *pVVar11;
  ContentSpecNode *this_01;
  ContentSpecNode *this_02;
  long in_FS_OFFSET;
  uint local_b4;
  NodeTypes anyType;
  NodeTypes anyLocalType;
  NodeTypes anyOtherType;
  uint i;
  int uriIndex;
  uint tokensSize;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  ContentSpecNode *retSpecNode;
  ContentSpecNode *secondNode;
  XMLCh *processContents;
  XMLCh *nameSpace;
  BaseRefVectorOf_short_unsigned_int_ *nameSpaceTokens;
  ContentSpecNode *firstNode;
  DatatypeValidator *anyURIDV;
  XMLCh *tokenElem;
  XMLException *excep;
  ValueVectorOf_unsigned_int_ uriList;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x2,SUB81(this,0),
             (ValueVectorOf *)0x0);
  pDVar7 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  pDVar7 = checkContent(this,elem,pDVar7,true);
  if (pDVar7 != (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x5c);
  }
  bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if (((bVar5 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
     (uVar6 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar6 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    pXVar8 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
    this->fAnnotation = pXVar8;
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_PROCESSCONTENTS,false);
  str1_00 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAMESPACE,false);
  anyType = Any;
  anyLocalType = Any_NS;
  anyOtherType = Any_Other;
  if (((str1 == (XMLCh *)0x0) || (*str1 == 0)) ||
     (bVar5 = XMLString::equals(str1,(XMLCh *)fgStrict), bVar5 == true)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    bVar5 = XMLString::equals(str1,(XMLCh *)&fgLax);
    if (bVar5 == false) {
      bVar5 = XMLString::equals(str1,(XMLCh *)fgSkip);
      if (bVar5 != false) {
        anyType = Any_Skip;
        anyOtherType = Any_Other_Skip;
        anyLocalType = Any_NS_Skip;
      }
    }
    else {
      anyType = Any_Lax;
      anyOtherType = Any_Other_Lax;
      anyLocalType = Any_NS_Lax;
    }
  }
  if (((str1_00 == (XMLCh *)0x0) || (*str1_00 == 0)) ||
     (bVar5 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgATTVAL_TWOPOUNDANY),
     bVar5 != false)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    pQVar9 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
    xercesc_2_7::QName::QName
              (pQVar9,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
               this->fEmptyNamespaceURI,this->fGrammarPoolMemoryManager);
    retSpecNode = (ContentSpecNode *)
                  xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
    ContentSpecNode::ContentSpecNode(retSpecNode,pQVar9,false,this->fGrammarPoolMemoryManager);
    ContentSpecNode::setType(retSpecNode,anyType);
  }
  else {
    bVar5 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgATTVAL_TWOPOUNDOTHER);
    if (bVar5 == false) {
      this_00 = (BaseRefVectorOf_short_unsigned_int_ *)
                xercesc_2_7::XMLString::tokenizeString(str1_00,this->fMemoryManager);
      ValueVectorOf<unsigned_int>::ValueVectorOf(&uriList,8,this->fGrammarPoolMemoryManager,false);
      secondNode = (ContentSpecNode *)0x0;
      tokensSize = BaseRefVectorOf<short_unsigned_int>::size(this_00);
      plVar10 = (long *)DatatypeValidatorFactory::getDatatypeValidator
                                  (this->fDatatypeRegistry,(XMLCh *)&SchemaSymbols::fgDT_ANYURI);
      for (i = 0; i < tokensSize; i = i + 1) {
        str1_01 = BaseRefVectorOf<short_unsigned_int>::elementAt(this_00,i);
        uriIndex = this->fEmptyNamespaceURI;
        bVar5 = XMLString::equals(str1_01,(XMLCh *)&SchemaSymbols::fgATTVAL_TWOPOUNDLOCAL);
        if (bVar5 != true) {
          bVar5 = XMLString::equals(str1_01,(XMLCh *)&SchemaSymbols::
                                                      fgATTVAL_TWOPOUNDTRAGETNAMESPACE);
          if (bVar5 == false) {
            pcVar2 = *(code **)(*plVar10 + 0x40);
            pMVar3 = this->fMemoryManager;
            pVVar11 = SchemaGrammar::getValidationContext(this->fSchemaGrammar);
            (*pcVar2)(plVar10,str1_01,pVVar11,pMVar3);
            uriIndex = (**(code **)(*(long *)this->fURIStringPool + 0x28))
                                 (this->fURIStringPool,str1_01);
          }
          else {
            uriIndex = this->fTargetNSURI;
          }
        }
        local_b4 = uriIndex;
        bVar5 = ValueVectorOf<unsigned_int>::containsElement(&uriList,&local_b4,0);
        this_01 = secondNode;
        if (bVar5 == false) {
          local_b4 = uriIndex;
          ValueVectorOf<unsigned_int>::addElement(&uriList,&local_b4);
          pQVar9 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager)
          ;
          xercesc_2_7::QName::QName
                    (pQVar9,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
                     uriIndex,this->fGrammarPoolMemoryManager);
          this_01 = (ContentSpecNode *)
                    xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
          ContentSpecNode::ContentSpecNode(this_01,pQVar9,false,this->fGrammarPoolMemoryManager);
          ContentSpecNode::setType(this_01,anyLocalType);
          if (secondNode != (ContentSpecNode *)0x0) {
            this_02 = (ContentSpecNode *)
                      xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
            ContentSpecNode::ContentSpecNode
                      (this_02,Any_NS_Choice,secondNode,this_01,true,true,
                       this->fGrammarPoolMemoryManager);
            this_01 = this_02;
          }
        }
        secondNode = this_01;
      }
      retSpecNode = secondNode;
      if (this_00 != (BaseRefVectorOf_short_unsigned_int_ *)0x0) {
        (*this_00->_vptr_BaseRefVectorOf[1])(this_00);
      }
      ValueVectorOf<unsigned_int>::_ValueVectorOf(&uriList);
    }
    else {
      pQVar9 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
      xercesc_2_7::QName::QName
                (pQVar9,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
                 this->fTargetNSURI,this->fGrammarPoolMemoryManager);
      retSpecNode = (ContentSpecNode *)
                    xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode(retSpecNode,pQVar9,false,this->fGrammarPoolMemoryManager);
      ContentSpecNode::setType(retSpecNode,anyOtherType);
    }
  }
  if ((retSpecNode == (ContentSpecNode *)0x0) ||
     (bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot), bVar5 == true)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    pSVar4 = this->fSchemaGrammar;
    Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
    xercesc_2_7::SchemaGrammar::putAnnotation(pSVar4,(XSAnnotation *)retSpecNode);
  }
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return retSpecNode;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


ContentSpecNode * __thiscall
xercesc_2_7::TraverseSchema::traverseAll(TraverseSchema *this,DOMElement *elem)

{
  long lVar1;
  SchemaGrammar *pSVar2;
  ContentSpecNode *pCVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  DOMElement *contentElem;
  XSAnnotation *pXVar8;
  undefined4 extraout_var;
  SchemaElementDecl *elemDecl_00;
  ContentSpecNode *this_00;
  ContentSpecNode *pCVar9;
  long in_FS_OFFSET;
  bool hadContent;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  DOMElement *child;
  ContentSpecNode *left;
  ContentSpecNode *right;
  ContentSpecNode *contentSpecNode;
  XMLCh *childName;
  SchemaElementDecl *elemDecl;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x0,SUB81(this,0),
             (ValueVectorOf *)0x0);
  contentElem = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  child = checkContent(this,elem,contentElem,true);
  bVar4 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if (((bVar4 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
     (uVar6 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar6 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    pXVar8 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
    this->fAnnotation = pXVar8;
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  if (child == (DOMElement *)0x0) {
    pCVar9 = (ContentSpecNode *)0x0;
  }
  else {
    left = (ContentSpecNode *)0x0;
    right = (ContentSpecNode *)0x0;
    bVar4 = false;
    for (; child != (DOMElement *)0x0;
        child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode)) {
      iVar7 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
      bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar7),
                                (XMLCh *)&SchemaSymbols::fgELT_ELEMENT);
      pCVar9 = left;
      pCVar3 = right;
      if (bVar5 == false) {
        reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x85,
                          (XMLCh *)CONCAT44(extraout_var,iVar7),(XMLCh *)0x0,(XMLCh *)0x0,
                          (XMLCh *)0x0);
      }
      else {
        elemDecl_00 = traverseElementDecl(this,child,false);
        if (elemDecl_00 != (SchemaElementDecl *)0x0) {
          this_00 = (ContentSpecNode *)
                    xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
          ContentSpecNode::ContentSpecNode
                    (this_00,(XMLElementDecl *)elemDecl_00,this->fGrammarPoolMemoryManager);
          checkMinMax(this,this_00,child,1);
          bVar4 = true;
          pCVar9 = this_00;
          if ((left != (ContentSpecNode *)0x0) &&
             (pCVar9 = left, pCVar3 = this_00, right != (ContentSpecNode *)0x0)) {
            pCVar9 = (ContentSpecNode *)
                     xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
            ContentSpecNode::ContentSpecNode
                      (pCVar9,All,left,right,true,true,this->fGrammarPoolMemoryManager);
          }
        }
      }
      right = pCVar3;
      left = pCVar9;
    }
    pCVar9 = left;
    if (bVar4) {
      pCVar9 = (ContentSpecNode *)
               xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (pCVar9,All,left,right,true,true,this->fGrammarPoolMemoryManager);
      bVar4 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
      if (bVar4 != true) {
        pSVar2 = this->fSchemaGrammar;
        Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
        xercesc_2_7::SchemaGrammar::putAnnotation(pSVar2,(XSAnnotation *)pCVar9);
      }
    }
  }
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pCVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseAttributeDecl
          (TraverseSchema *this,DOMElement *elem,ComplexTypeInfo *typeInfo,bool topLevel)

{
  long lVar1;
  SchemaInfo *pSVar2;
  code *pcVar3;
  MemoryManager *pMVar4;
  SchemaGrammar *pSVar5;
  RefHashTableOf_xercesc_2_7__XMLAttDef_ *this_00;
  XMLStringPool *pXVar6;
  bool bVar7;
  XMLCh *pXVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  ValidatorType VVar15;
  undefined4 uVar16;
  XMLCh *str1;
  XMLCh *pXVar17;
  XMLCh *defaultVal_00;
  XMLCh *pXVar18;
  XMLCh *type;
  DOMElement *contentElem;
  undefined4 extraout_var;
  long lVar19;
  XSAnnotation *pXVar20;
  SchemaAttDef *pSVar21;
  ValidationContext *pVVar22;
  void *key;
  undefined8 *puVar23;
  long in_FS_OFFSET;
  bool badContent;
  bool required;
  bool prohibited;
  bool nameEmpty;
  bool refEmpty;
  bool ofTypeID;
  ushort scope;
  int uriIndex;
  AttTypes attType;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  XMLCh *fixedVal;
  XMLCh *useVal;
  DOMElement *simpleType;
  DatatypeValidator *dv;
  XMLCh *localPart;
  DatatypeValidator *dvBack;
  XMLCh *name;
  XMLCh *ref;
  XMLCh *defaultVal;
  XMLCh *attForm;
  XMLCh *dvType;
  XMLCh *contentName;
  XMLCh *qualified;
  SchemaInfo *saveInfo;
  XMLCh *prefix;
  XMLCh *typeURI;
  XMLCh *valueToCheck;
  OutOfMemoryException *anon_var_0;
  XMLException *excep;
  SchemaAttDef *attDef;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  pXVar17 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_REF,false);
  if ((str1 == (XMLCh *)0x0) || (*str1 == 0)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if ((pXVar17 == (XMLCh *)0x0) || (*pXVar17 == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((bVar10) && (bVar7)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0xd);
    goto LAB_00107bf4;
  }
  if ((topLevel != false) && (bVar10)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0xc);
    goto LAB_00107bf4;
  }
  if (topLevel == false) {
    if (bVar7) {
      uVar12 = 6;
    }
    else {
      uVar12 = 7;
    }
  }
  else {
    uVar12 = 5;
  }
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)(ulong)uVar12,
             SUB81(this,0),(ValueVectorOf *)(ulong)topLevel);
  defaultVal_00 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_DEFAULT,false);
  fixedVal = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_FIXED,false);
  useVal = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_USE,false);
  pXVar18 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_FORM,false);
  type = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_TYPE,false);
  contentElem = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  simpleType = checkContent(this,elem,contentElem,true);
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  bVar10 = false;
  for (; simpleType != (DOMElement *)0x0;
      simpleType = (DOMElement *)
                   xercesc_2_7::XUtil::getNextSiblingElement(&simpleType->super_DOMNode)) {
    iVar13 = (*(simpleType->super_DOMNode)._vptr_DOMNode[0x18])(simpleType);
    bVar9 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE,
                              (XMLCh *)CONCAT44(extraout_var,iVar13));
    if (bVar9 != false) {
      lVar19 = xercesc_2_7::XUtil::getNextSiblingElement(&simpleType->super_DOMNode);
      if (lVar19 != 0) {
        bVar10 = true;
      }
      break;
    }
    bVar10 = true;
  }
  if (bVar10) {
    if (str1 == (XMLCh *)0x0) {
      puVar23 = &SchemaSymbols::fgATT_REF;
      pXVar8 = pXVar17;
    }
    else {
      puVar23 = &SchemaSymbols::fgATT_NAME;
      pXVar8 = str1;
    }
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x5d,(XMLCh *)puVar23,pXVar8,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
  if (defaultVal_00 != (XMLCh *)0x0) {
    if (fixedVal != (XMLCh *)0x0) {
      fixedVal = (XMLCh *)0x0;
      if (str1 == (XMLCh *)0x0) {
        puVar23 = &SchemaSymbols::fgATT_REF;
        pXVar8 = pXVar17;
      }
      else {
        puVar23 = &SchemaSymbols::fgATT_NAME;
        pXVar8 = str1;
      }
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x31,(XMLCh *)puVar23,pXVar8,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
    if (((useVal == (XMLCh *)0x0) || (*useVal == 0)) ||
       (bVar10 = XMLString::equals(useVal,(XMLCh *)&SchemaSymbols::fgATTVAL_OPTIONAL),
       bVar10 == true)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      useVal = (XMLCh *)0x0;
      if (str1 == (XMLCh *)0x0) {
        puVar23 = &SchemaSymbols::fgATT_REF;
        pXVar8 = pXVar17;
      }
      else {
        puVar23 = &SchemaSymbols::fgATT_NAME;
        pXVar8 = str1;
      }
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x32,(XMLCh *)puVar23,pXVar8,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  if ((bVar7) || (topLevel == true)) {
    bVar10 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if ((bVar10 == false) ||
       ((this->fAnnotation != (XSAnnotation *)0x0 ||
        (uVar14 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar14 == 0)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      pXVar20 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
      this->fAnnotation = pXVar20;
      Janitor<xercesc_2_7::XSAnnotation>::reset(&janAnnot,this->fAnnotation);
    }
    cVar11 = xercesc_2_7::XMLString::isValidNCName(str1);
    if ((cVar11 == '\x01') &&
       (bVar10 = XMLString::equals(str1,(XMLCh *)&XMLUni::fgXMLNSString), bVar10 == false)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                        (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTE,str1,(XMLCh *)0x0,(XMLCh *)0x0);
    }
    else {
      uriIndex = this->fEmptyNamespaceURI;
      if (((this->fTargetNSURIString == (XMLCh *)0x0) || (*this->fTargetNSURIString == 0)) ||
         (((topLevel == false &&
           (bVar10 = XMLString::equals(pXVar18,(XMLCh *)&SchemaSymbols::fgATTVAL_QUALIFIED),
           bVar10 == false)) &&
          ((uVar12 = SchemaInfo::getElemAttrDefaultQualified(this->fSchemaInfo), (uVar12 & 2) == 0
           || ((pXVar18 != (XMLCh *)0x0 && (*pXVar18 != 0)))))))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) {
        uriIndex = this->fTargetNSURI;
      }
      bVar10 = XMLString::equals(this->fTargetNSURIString,(XMLCh *)&SchemaSymbols::fgURI_XSI);
      if (bVar10 == false) {
        if ((typeInfo == (ComplexTypeInfo *)0x0) ||
           (pSVar21 = ComplexTypeInfo::getAttDef(typeInfo,str1,uriIndex),
           pSVar21 == (SchemaAttDef *)0x0)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x35,str1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
        }
        else {
          if ((this->fCurrentAttGroupInfo == (XercesAttGroupInfo *)0x0) ||
             (cVar11 = xercesc_2_7::XercesAttGroupInfo::containsAttribute
                                 ((ushort *)this->fCurrentAttGroupInfo,(uint)str1), cVar11 == '\0'))
          {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (!bVar10) {
            attType = Simple;
            pSVar2 = this->fSchemaInfo;
            if (simpleType == (DOMElement *)0x0) {
              if ((type != (XMLCh *)0x0) && (*type != 0)) {
                checkEnumerationRequiredNotation(this,elem,str1,type);
                localPart = getLocalPart(this,type);
                pXVar17 = getPrefix(this,type);
                pXVar17 = resolvePrefixToURI(this,elem,pXVar17);
                bVar10 = XMLString::equals(pXVar17,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
                if (bVar10 == false) {
                  dvBack = getAttrDatatypeValidatorNS(this,elem,localPart,pXVar17);
                  dv = dvBack;
                  do {
                    if (dv == (DatatypeValidator *)0x0) {
LAB_00107391:
                      bVar10 = false;
                    }
                    else {
                      pXVar18 = DatatypeValidator::getTypeUri(dv);
                      bVar10 = XMLString::equals(pXVar18,(XMLCh *)&SchemaSymbols::
                                                                   fgURI_SCHEMAFORSCHEMA);
                      if (bVar10 == true) goto LAB_00107391;
                      bVar10 = true;
                    }
                    if (!bVar10) goto LAB_001073b2;
                    dv = DatatypeValidator::getBaseValidator(dv);
                  } while( true );
                }
                dv = DatatypeValidatorFactory::getDatatypeValidator
                               (this->fDatatypeRegistry,localPart);
                dvBack = dv;
                goto LAB_001073d2;
              }
              dv = DatatypeValidatorFactory::getDatatypeValidator
                             (this->fDatatypeRegistry,(XMLCh *)&SchemaSymbols::fgDT_ANYSIMPLETYPE);
            }
            else {
              if ((type != (XMLCh *)0x0) && (*type != 0)) {
                reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x36,str1,(XMLCh *)0x0,
                                  (XMLCh *)0x0,(XMLCh *)0x0);
              }
              dv = traverseSimpleTypeDecl(this,simpleType,false,0);
            }
            goto LAB_0010758c;
          }
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x35,str1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
        }
      }
      else {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0xa7,str1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
    }
  }
  else {
    if (((pXVar18 != (XMLCh *)0x0) || (type != (XMLCh *)0x0)) || (simpleType != (DOMElement *)0x0))
    {
      if (str1 == (XMLCh *)0x0) {
        puVar23 = &SchemaSymbols::fgATT_REF;
        str1 = pXVar17;
      }
      else {
        puVar23 = &SchemaSymbols::fgATT_NAME;
      }
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x53,(XMLCh *)puVar23,str1,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
    processAttributeDeclRef(this,elem,typeInfo,pXVar17,useVal,defaultVal_00,fixedVal);
  }
  goto LAB_00107aa9;
LAB_001073b2:
  if (dv != (DatatypeValidator *)0x0) {
    localPart = DatatypeValidator::getTypeLocalName(dv);
  }
LAB_001073d2:
  if (dv == (DatatypeValidator *)0x0) {
    attType = Simple;
  }
  else {
    bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgIDString);
    if (bVar10 == false) {
      bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgIDRefString);
      if (bVar10 == false) {
        bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgIDRefsString);
        if (bVar10 == false) {
          bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgEntityString);
          if (bVar10 == false) {
            bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgEntitiesString);
            if (bVar10 == false) {
              bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgNmTokenString);
              if (bVar10 == false) {
                bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgNmTokensString);
                if (bVar10 == false) {
                  bVar10 = XMLString::equals(localPart,(XMLCh *)&XMLUni::fgNotationString);
                  if (bVar10 == false) {
                    attType = Simple;
                  }
                  else {
                    attType = Notation;
                  }
                }
                else {
                  attType = NmTokens;
                }
              }
              else {
                attType = NmToken;
              }
            }
            else {
              attType = Entities;
            }
          }
          else {
            attType = Entity;
          }
        }
        else {
          attType = IDRefs;
        }
      }
      else {
        attType = IDRef;
      }
    }
    else {
      attType = ID;
    }
  }
  dv = dvBack;
  if (dvBack == (DatatypeValidator *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x37,pXVar17,localPart,str1,
                      (XMLCh *)0x0);
  }
LAB_0010758c:
  this->fSchemaInfo = pSVar2;
  bVar7 = false;
  bVar10 = false;
  if ((useVal != (XMLCh *)0x0) && (*useVal != 0)) {
    bVar9 = XMLString::equals(useVal,(XMLCh *)&SchemaSymbols::fgATTVAL_REQUIRED);
    if (bVar9 == false) {
      bVar9 = XMLString::equals(useVal,(XMLCh *)&SchemaSymbols::fgATTVAL_PROHIBITED);
      if (bVar9 != false) {
        bVar10 = true;
      }
    }
    else {
      bVar7 = true;
    }
  }
  pXVar17 = fixedVal;
  if (defaultVal_00 != (XMLCh *)0x0) {
    pXVar17 = defaultVal_00;
  }
  if ((dv == (DatatypeValidator *)0x0) || (VVar15 = DatatypeValidator::getType(dv), VVar15 != ID)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (((attType == Simple) && (dv != (DatatypeValidator *)0x0)) && (pXVar17 != (XMLCh *)0x0)) {
    pcVar3 = *(code **)(*(long *)dv + 0x40);
    pMVar4 = this->fMemoryManager;
    pVVar22 = SchemaGrammar::getValidationContext(this->fSchemaGrammar);
    (*pcVar3)(dv,pXVar17,pVVar22,pMVar4);
  }
  if ((bVar9) && (pXVar17 != (XMLCh *)0x0)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x98,
                      (XMLCh *)&SchemaSymbols::fgATT_NAME,str1,(XMLCh *)0x0,(XMLCh *)0x0);
  }
  if ((topLevel == true) || (!bVar9)) {
LAB_0010781d:
    pSVar21 = (SchemaAttDef *)
              xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
    xercesc_2_7::SchemaAttDef::SchemaAttDef
              (pSVar21,(ushort *)&XMLUni::fgZeroLenString,str1,uriIndex,attType,Implied,
               this->fGrammarPoolMemoryManager);
    SchemaAttDef::setDatatypeValidator(pSVar21,dv);
    if (bVar10) {
      XMLAttDef::setDefaultType((XMLAttDef *)pSVar21,DefAttTypes_Max);
    }
    else if (bVar7) {
      if (fixedVal == (XMLCh *)0x0) {
        XMLAttDef::setDefaultType((XMLAttDef *)pSVar21,Required);
      }
      else {
        XMLAttDef::setDefaultType((XMLAttDef *)pSVar21,Required_And_Fixed);
      }
    }
    else if (fixedVal == (XMLCh *)0x0) {
      if (defaultVal_00 != (XMLCh *)0x0) {
        XMLAttDef::setDefaultType((XMLAttDef *)pSVar21,DefAttTypes_Min);
      }
    }
    else {
      XMLAttDef::setDefaultType((XMLAttDef *)pSVar21,Fixed);
    }
    if (pXVar17 != (XMLCh *)0x0) {
      XMLAttDef::setValue((XMLAttDef *)pSVar21,pXVar17);
    }
    bVar10 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
    if (bVar10 != true) {
      pSVar5 = this->fSchemaGrammar;
      Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
      xercesc_2_7::SchemaGrammar::putAnnotation(pSVar5,(XSAnnotation *)pSVar21);
    }
    if (topLevel == false) {
      if ((typeInfo != (ComplexTypeInfo *)0x0) &&
         (xercesc_2_7::ComplexTypeInfo::addAttDef((SchemaAttDef *)typeInfo),
         this->fCurrentAttGroupInfo == (XercesAttGroupInfo *)0x0)) {
        SchemaAttDef::setPSVIScope(pSVar21,SCP_LOCAL);
      }
      if (this->fCurrentAttGroupInfo != (XercesAttGroupInfo *)0x0) {
        XercesAttGroupInfo::addAttDef
                  (this->fCurrentAttGroupInfo,pSVar21,typeInfo != (ComplexTypeInfo *)0x0);
      }
    }
    else {
      this_00 = this->fAttributeDeclRegistry;
      pXVar6 = this->fStringPool;
      pcVar3 = *(code **)(*(long *)this->fStringPool + 0x50);
      uVar16 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,str1);
      key = (void *)(*pcVar3)(pXVar6,uVar16);
      RefHashTableOf<xercesc_2_7::XMLAttDef>::put(this_00,key,(XMLAttDef *)pSVar21);
      SchemaAttDef::setPSVIScope(pSVar21,SCP_GLOBAL);
    }
  }
  else if (this->fCurrentAttGroupInfo == (XercesAttGroupInfo *)0x0) {
    bVar9 = ComplexTypeInfo::containsAttWithTypeId(typeInfo);
    if (bVar9 == false) {
      ComplexTypeInfo::setAttWithTypeId(typeInfo,true);
      goto LAB_0010781d;
    }
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x99,str1,(XMLCh *)0x0,(XMLCh *)0x0
                      ,(XMLCh *)0x0);
  }
  else {
    bVar9 = XercesAttGroupInfo::containsTypeWithId(this->fCurrentAttGroupInfo);
    if (bVar9 == false) {
      XercesAttGroupInfo::setTypeWithId(this->fCurrentAttGroupInfo,true);
      goto LAB_0010781d;
    }
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9a,str1,(XMLCh *)0x0,(XMLCh *)0x0
                      ,(XMLCh *)0x0);
  }
LAB_00107aa9:
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
LAB_00107bf4:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


SchemaElementDecl * __thiscall
xercesc_2_7::TraverseSchema::traverseElementDecl
          (TraverseSchema *this,DOMElement *elem,bool topLevel)

{
  SchemaGrammar *pSVar1;
  SchemaInfo *this_00;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ModelTypes toSet;
  SchemaElementDecl *pSVar7;
  DOMElement *contentElem;
  XSAnnotation *pXVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  SchemaAttDef *this_01;
  long in_FS_OFFSET;
  bool isDuplicate;
  bool noErrorFound;
  bool anonymousType;
  ushort scope;
  int miscFlags;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  XMLCh *valueConstraint;
  ComplexTypeInfo *typeInfo;
  DatatypeValidator *validator;
  DOMElement *content;
  XMLCh *refName;
  XMLCh *name;
  SchemaElementDecl *retDecl;
  SchemaElementDecl *elemDecl;
  XMLCh *contentName;
  XMLCh *temp_1;
  XMLCh *temp;
  XMLCh *typeInfoName;
  XMLCh *typeStr;
  XMLCh *typeLocalPart;
  XMLCh *typePrefix;
  XMLCh *typeURI;
  XMLCh *anotherSchemaURI;
  XMLCh *subsGroupName;
  DOMElement *ic;
  DatatypeValidator *eltDV;
  ComplexTypeInfo *eltTypeInfo;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((topLevel != true) &&
     (refName = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_REF,false),
     refName != (XMLCh *)0x0)) {
    pSVar7 = processElementDeclRef(this,elem,refName);
    goto LAB_00108969;
  }
  name = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  if ((name == (XMLCh *)0x0) || (*name == 0)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0xf);
    pSVar7 = (SchemaElementDecl *)0x0;
    goto LAB_00108969;
  }
  cVar2 = xercesc_2_7::XMLString::isValidNCName(name);
  if (cVar2 != '\x01') {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                      (XMLCh *)&SchemaSymbols::fgELT_ELEMENT,name,(XMLCh *)0x0,(XMLCh *)0x0);
    pSVar7 = (SchemaElementDecl *)0x0;
    goto LAB_00108969;
  }
  if ((topLevel != false) &&
     (pSVar7 = (SchemaElementDecl *)
               (**(code **)(*(long *)this->fSchemaGrammar + 0x58))
                         (this->fSchemaGrammar,this->fTargetNSURI,name,0,0xfffffffe),
     retDecl = pSVar7, pSVar7 != (SchemaElementDecl *)0x0)) goto LAB_00108969;
  if (topLevel == false) {
    scope = 0x10;
  }
  else {
    scope = 0xf;
  }
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)(ulong)scope,
             SUB81(this,0),(ValueVectorOf *)(ulong)topLevel);
  contentElem = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  content = checkContent(this,elem,contentElem,true);
  bVar3 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if (((bVar3 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
     (uVar4 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar4 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    pXVar8 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
    this->fAnnotation = pXVar8;
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  isDuplicate = false;
  valueConstraint = (XMLCh *)0x0;
  elemDecl = createSchemaElementDecl(this,elem,name,&isDuplicate,&valueConstraint,topLevel);
  if (isDuplicate != true) {
    (**(code **)(*(long *)this->fSchemaGrammar + 0x88))(this->fSchemaGrammar,elemDecl,0);
    if (valueConstraint != (XMLCh *)0x0) {
      SchemaElementDecl::setDefaultValue(elemDecl,valueConstraint);
    }
    bVar3 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
    if (bVar3 != true) {
      pSVar1 = this->fSchemaGrammar;
      Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
      xercesc_2_7::SchemaGrammar::putAnnotation(pSVar1,(XSAnnotation *)elemDecl);
    }
    if (this->fCurrentComplexType == (ComplexTypeInfo *)0x0) {
LAB_00108074:
      bVar3 = false;
    }
    else {
      uVar4 = SchemaElementDecl::getEnclosingScope(elemDecl);
      uVar5 = ComplexTypeInfo::getScopeDefined(this->fCurrentComplexType);
      if (uVar4 != uVar5) goto LAB_00108074;
      bVar3 = true;
    }
    if (bVar3) {
      ComplexTypeInfo::addElement(this->fCurrentComplexType,elemDecl);
      SchemaElementDecl::setPSVIScope(elemDecl,SCP_LOCAL);
    }
    if (this->fCurrentGroupInfo == (XercesGroupInfo *)0x0) {
LAB_001080f6:
      bVar3 = false;
    }
    else {
      uVar4 = SchemaElementDecl::getEnclosingScope(elemDecl);
      uVar5 = XercesGroupInfo::getScope(this->fCurrentGroupInfo);
      if (uVar4 != uVar5) goto LAB_001080f6;
      bVar3 = true;
    }
    if (bVar3) {
      XercesGroupInfo::addElement(this->fCurrentGroupInfo,elemDecl);
      SchemaElementDecl::setPSVIScope(elemDecl,SCP_ABSENT);
    }
  }
  anonymousType = false;
  typeInfo = (ComplexTypeInfo *)0x0;
  validator = (DatatypeValidator *)0x0;
  if (content != (DOMElement *)0x0) {
    iVar6 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
    contentName = (XMLCh *)CONCAT44(extraout_var,iVar6);
    bVar3 = XMLString::equals(contentName,(XMLCh *)&SchemaSymbols::fgELT_COMPLEXTYPE);
    if (bVar3 == false) {
      bVar3 = XMLString::equals(contentName,(XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
      if (bVar3 != false) {
        iVar6 = (*(content->super_DOMNode)._vptr_DOMNode[0x29])(content,&SchemaSymbols::fgATT_NAME);
        temp_1 = (XMLCh *)CONCAT44(extraout_var_01,iVar6);
        if ((temp_1 == (XMLCh *)0x0) || (*temp_1 == 0)) {
          validator = checkForSimpleTypeValidator(this,content,0);
        }
        else {
          reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x13,name,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
        }
        anonymousType = true;
        content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode);
      }
    }
    else {
      iVar6 = (*(content->super_DOMNode)._vptr_DOMNode[0x29])(content,&SchemaSymbols::fgATT_NAME);
      temp = (XMLCh *)CONCAT44(extraout_var_00,iVar6);
      if ((temp == (XMLCh *)0x0) || (*temp == 0)) {
        typeInfo = checkForComplexTypeInfo(this,content);
        if ((typeInfo != (ComplexTypeInfo *)0x0) &&
           ((validator = ComplexTypeInfo::getDatatypeValidator(typeInfo), isDuplicate != true &&
            (bVar3 = ComplexTypeInfo::getPreprocessed(typeInfo), bVar3 != false)))) {
          typeInfoName = ComplexTypeInfo::getTypeName(typeInfo);
          this_00 = this->fSchemaInfo;
          iVar6 = xercesc_2_7::XMLString::indexOf(typeInfoName,0x2c);
          SchemaInfo::addRecursingType(this_00,content,typeInfoName + (long)iVar6 + 1);
        }
      }
      else {
        reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x12,name,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      anonymousType = true;
      content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode);
    }
    if ((content != (DOMElement *)0x0) &&
       (content = checkIdentityConstraintContent(this,content), content != (DOMElement *)0x0)) {
      reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x14);
    }
  }
  typeStr = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_TYPE,false);
  if (typeStr != (XMLCh *)0x0) {
    if (anonymousType == false) {
      if (*typeStr != 0) {
        typeLocalPart = getLocalPart(this,typeStr);
        typePrefix = getPrefix(this,typeStr);
        typeURI = resolvePrefixToURI(this,elem,typePrefix);
        bVar3 = XMLString::equals(typeURI,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
        if ((bVar3 == true) &&
           (bVar3 = XMLString::equals(typeLocalPart,(XMLCh *)&SchemaSymbols::fgATTVAL_ANYTYPE),
           bVar3 == true)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          checkEnumerationRequiredNotation(this,elem,name,typeStr);
          noErrorFound = true;
          anotherSchemaURI = checkTypeFromAnotherSchema(this,elem,typeStr);
          typeInfo = getElementComplexTypeInfo(this,elem,typeStr,anotherSchemaURI);
          if (typeInfo == (ComplexTypeInfo *)0x0) {
            validator = getElementTypeValidator(this,elem,typeStr,&noErrorFound,anotherSchemaURI);
          }
          else {
            validator = ComplexTypeInfo::getDatatypeValidator(typeInfo);
          }
        }
      }
    }
    else {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3d,name,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  if (isDuplicate == false) {
    SchemaElementDecl::setDatatypeValidator(elemDecl,validator);
    SchemaElementDecl::setComplexTypeInfo(elemDecl,typeInfo);
    if (validator == (DatatypeValidator *)0x0) {
      if (typeInfo != (ComplexTypeInfo *)0x0) {
        toSet = ComplexTypeInfo::getContentType(typeInfo);
        SchemaElementDecl::setModelType(elemDecl,toSet);
      }
    }
    else {
      SchemaElementDecl::setModelType(elemDecl,Simple);
    }
    if (((topLevel != false) &&
        (subsGroupName =
              getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_SUBSTITUTIONGROUP,false),
        subsGroupName != (XMLCh *)0x0)) && (*subsGroupName != 0)) {
      processSubstitutionGroup(this,elem,elemDecl,&typeInfo,&validator,subsGroupName);
    }
    ic = (DOMElement *)
         xercesc_2_7::XUtil::getFirstChildElementNS
                   (&elem->super_DOMNode,fgIdentityConstraints,
                    (ushort *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA,3);
    if (ic != (DOMElement *)0x0) {
      processElemDeclIC(this,ic,elemDecl);
    }
  }
  else {
    eltDV = SchemaElementDecl::getDatatypeValidator(elemDecl);
    eltTypeInfo = SchemaElementDecl::getComplexTypeInfo(elemDecl);
    if ((eltTypeInfo != typeInfo) || (eltDV != validator)) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4f,name,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  if ((typeInfo == (ComplexTypeInfo *)0x0) && (validator == (DatatypeValidator *)0x0)) {
    if (isDuplicate != true) {
      SchemaElementDecl::setModelType(elemDecl,Any);
      this_01 = (SchemaAttDef *)
                xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
      xercesc_2_7::SchemaAttDef::SchemaAttDef
                (this_01,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
                 this->fEmptyNamespaceURI,Any_Any,ProcessContents_Lax,
                 this->fGrammarPoolMemoryManager);
      SchemaElementDecl::setAttWildCard(elemDecl,this_01);
    }
  }
  else if (valueConstraint != (XMLCh *)0x0) {
    bVar3 = checkElemDeclValueConstraint(this,elem,elemDecl,valueConstraint,typeInfo,validator);
    if ((bVar3 == true) || (isDuplicate == true)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar4 = SchemaElementDecl::getMiscFlags(elemDecl);
      miscFlags = uVar4 & 0xfffffffb;
      SchemaElementDecl::setDefaultValue(elemDecl,(XMLCh *)0x0);
      SchemaElementDecl::setMiscFlags(elemDecl,miscFlags);
    }
  }
  pSVar7 = elemDecl;
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
LAB_00108969:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


XMLCh * __thiscall
xercesc_2_7::TraverseSchema::traverseNotationDecl(TraverseSchema *this,DOMElement *elem)

{
  int key2;
  RefHash2KeysTableOf_short_unsigned_int_ *this_00;
  XMLStringPool *pXVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  XMLCh *key1;
  XMLCh *pXVar6;
  XMLCh *pXVar7;
  void *key1_00;
  XMLNotationDecl *this_01;
  DOMElement *contentElem;
  XSAnnotation *pXVar8;
  bool nameEmpty;
  XMLCh *name;
  XMLCh *publicId;
  XMLCh *systemId;
  XMLNotationDecl *decl;
  
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x24,SUB81(this,0),
             (ValueVectorOf *)0x1);
  key1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  if ((key1 == (XMLCh *)0x0) || (*key1 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x62,
                      (XMLCh *)&SchemaSymbols::fgELT_NOTATION,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0
                     );
    key1 = (XMLCh *)0x0;
  }
  else {
    bVar3 = RefHash2KeysTableOf<short_unsigned_int>::containsKey
                      (this->fNotationRegistry,key1,this->fTargetNSURI);
    if (bVar3 == false) {
      pXVar6 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_PUBLIC,false);
      pXVar7 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_SYSTEM,false);
      this_00 = this->fNotationRegistry;
      key2 = this->fTargetNSURI;
      pXVar1 = this->fStringPool;
      pcVar2 = *(code **)(*(long *)this->fStringPool + 0x50);
      uVar4 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,key1);
      key1_00 = (void *)(*pcVar2)(pXVar1,uVar4);
      RefHash2KeysTableOf<short_unsigned_int>::put(this_00,key1_00,key2,(ushort *)0x0);
      this_01 = (XMLNotationDecl *)
                xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
      xercesc_2_7::XMLNotationDecl::XMLNotationDecl
                (this_01,key1,pXVar6,pXVar7,(ushort *)0x0,this->fGrammarPoolMemoryManager);
      XMLNotationDecl::setNameSpaceId(this_01,this->fTargetNSURI);
      (**(code **)(*(long *)this->fSchemaGrammar + 0x90))(this->fSchemaGrammar,this_01);
      contentElem = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
      checkContent(this,elem,contentElem,true);
      if (this->fAnnotation == (XSAnnotation *)0x0) {
        bVar3 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
        if ((bVar3 == false) ||
           (uVar5 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar5 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pXVar8 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
          this->fAnnotation = pXVar8;
          xercesc_2_7::SchemaGrammar::putAnnotation(this->fSchemaGrammar,(XSAnnotation *)this_01);
        }
      }
      else {
        xercesc_2_7::SchemaGrammar::putAnnotation(this->fSchemaGrammar,(XSAnnotation *)this_01);
      }
    }
  }
  return key1;
}


XMLCh * __thiscall
xercesc_2_7::TraverseSchema::traverseNotationDecl
          (TraverseSchema *this,DOMElement *elem,XMLCh *name,XMLCh *uriStr)

{
  SchemaInfo *pSVar1;
  bool bVar2;
  int iVar3;
  uint namespaceURI;
  long *plVar4;
  SchemaInfo *this_00;
  DOMElement *elem_00;
  XMLCh *pXVar5;
  uint uriId;
  uint uriId_1;
  SchemaInfo *saveInfo;
  Grammar *grammar;
  SchemaInfo *impInfo;
  DOMElement *notationElem;
  XMLCh *notationName;
  
  iVar3 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,uriStr);
  pSVar1 = this->fSchemaInfo;
  if (this->fTargetNSURI != iVar3) {
    namespaceURI = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
    bVar2 = SchemaInfo::isImportingNS(this->fSchemaInfo,namespaceURI);
    if (bVar2 != true) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,uriStr,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      return (XMLCh *)0x0;
    }
    plVar4 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
    if ((plVar4 == (long *)0x0) || (iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4), iVar3 != 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x48,uriStr,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      return (XMLCh *)0x0;
    }
    this_00 = SchemaInfo::getImportInfo(this->fSchemaInfo,namespaceURI);
    if ((this_00 == (SchemaInfo *)0x0) ||
       (bVar2 = SchemaInfo::getProcessed(this_00), bVar2 != false)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x27,uriStr,name,(XMLCh *)0x0,
                        (XMLCh *)0x0);
      return (XMLCh *)0x0;
    }
    this->fSchemaInfo = this_00;
    iVar3 = SchemaInfo::getTargetNSURI(this->fSchemaInfo);
    this->fTargetNSURI = iVar3;
  }
  elem_00 = (DOMElement *)
            xercesc_2_7::SchemaInfo::getTopLevelComponent
                      ((ushort)this->fSchemaInfo,(ushort *)0x6,
                       (ushort *)&SchemaSymbols::fgELT_NOTATION,(SchemaInfo **)name);
  if (elem_00 == (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x91,uriStr,name,(XMLCh *)0x0,
                      (XMLCh *)0x0);
    pXVar5 = (XMLCh *)0x0;
  }
  else {
    pXVar5 = traverseNotationDecl(this,elem_00);
    this->fSchemaInfo = pSVar1;
    iVar3 = SchemaInfo::getTargetNSURI(this->fSchemaInfo);
    this->fTargetNSURI = iVar3;
  }
  return pXVar5;
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::traverseByList
          (TraverseSchema *this,DOMElement *rootElem,DOMElement *contentElem,XMLCh *typeName,
          XMLCh *qualifiedName,int finalSet,Janitor_xercesc_2_7__XSAnnotation_ *janAnnot)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  XMLCh *baseTypeName_00;
  long *plVar5;
  XMLCh *text1;
  DOMElement *pDVar6;
  DOMNode *elem;
  XSAnnotation *pXVar7;
  undefined4 extraout_var;
  DatatypeValidator *baseValidator;
  DOMElement *content;
  DatatypeValidator *newDV;
  XMLCh *baseTypeName;
  DOMElement *tempEl;
  OutOfMemoryException *anon_var_0;
  XMLException *excep;
  
  baseTypeName_00 =
       getElementAttValue(this,contentElem,(XMLCh *)&SchemaSymbols::fgATT_ITEMTYPE,false);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)contentElem,(TraverseSchema *)0x1d,
             SUB81(this,0),(ValueVectorOf *)0x0);
  plVar5 = (long *)xercesc_2_7::XUtil::getNextSiblingElement(&contentElem->super_DOMNode);
  if (plVar5 != (long *)0x0) {
    text1 = (XMLCh *)(**(code **)(*plVar5 + 0xc0))(plVar5);
    reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x16,text1,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
  if ((baseTypeName_00 == (XMLCh *)0x0) || (*baseTypeName_00 == 0)) {
    pDVar6 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentElem->super_DOMNode);
    elem = (DOMNode *)checkContent(this,rootElem,pDVar6,false);
    bVar1 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if ((bVar1 == false) ||
       ((this->fAnnotation != (XSAnnotation *)0x0 ||
        (uVar3 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar3 == 0)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pXVar7 = generateSyntheticAnnotation(this,contentElem,this->fNonXSAttList);
      this->fAnnotation = pXVar7;
    }
    if (this->fAnnotation != (XSAnnotation *)0x0) {
      bVar1 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
      if (bVar1 == false) {
        pXVar7 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
        xercesc_2_7::XSAnnotation::setNext(pXVar7);
      }
      else {
        Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
      }
    }
    if (elem == (DOMNode *)0x0) {
      reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x17,typeName,(XMLCh *)0x0
                        ,(XMLCh *)0x0,(XMLCh *)0x0);
      popCurrentTypeNameStack(this);
      return (DatatypeValidator *)0x0;
    }
    iVar4 = (*elem->_vptr_DOMNode[0x18])(elem);
    bVar1 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar4),
                              (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
    if (bVar1 == false) {
      reportSchemaError(this,(DOMElement *)elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x18,typeName,
                        (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
      popCurrentTypeNameStack(this);
      return (DatatypeValidator *)0x0;
    }
    baseValidator = checkForSimpleTypeValidator(this,(DOMElement *)elem,8);
    content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(elem);
  }
  else {
    baseValidator = findDTValidator(this,contentElem,typeName,baseTypeName_00,8);
    pDVar6 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentElem->super_DOMNode);
    content = checkContent(this,rootElem,pDVar6,true);
    bVar1 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if (((bVar1 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
       (uVar3 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pXVar7 = generateSyntheticAnnotation(this,contentElem,this->fNonXSAttList);
      this->fAnnotation = pXVar7;
    }
    if (this->fAnnotation != (XSAnnotation *)0x0) {
      bVar1 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
      if (bVar1 == false) {
        pXVar7 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
        xercesc_2_7::XSAnnotation::setNext(pXVar7);
      }
      else {
        Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
      }
    }
  }
  newDV = (DatatypeValidator *)0x0;
  if (baseValidator != (DatatypeValidator *)0x0) {
    cVar2 = (**(code **)(*(long *)baseValidator + 0x28))(baseValidator);
    if (cVar2 == '\x01') {
      if (content != (DOMElement *)0x0) {
        reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x19,typeName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      newDV = (DatatypeValidator *)
              xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator
                        ((ushort *)this->fDatatypeRegistry,(DatatypeValidator *)qualifiedName,
                         (RefHashTableOf *)baseValidator,(RefArrayVectorOf *)0x0,false,1,
                         SUB41(finalSet,0),(MemoryManager *)0x1);
    }
    else {
      reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x70,baseTypeName_00,
                        (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  popCurrentTypeNameStack(this);
  return newDV;
}


/* WARNING: Removing unreachable block (ram,0x0010a557) */

DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::traverseByRestriction
          (TraverseSchema *this,DOMElement *rootElem,DOMElement *contentElem,XMLCh *typeName,
          XMLCh *qualifiedName,int finalSet,Janitor_xercesc_2_7__XSAnnotation_ *janAnnot)

{
  long lVar1;
  MemoryManager *manager;
  XMLStringPool *pXVar2;
  code *pcVar3;
  SchemaGrammar *pSVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ValidatorType VVar10;
  undefined4 uVar11;
  XMLCh *pXVar12;
  long *plVar13;
  XMLCh *pXVar14;
  DOMElement *pDVar15;
  DOMNode *elem;
  XSAnnotation *pXVar16;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ushort *facetName_00;
  KVStringPair *pKVar17;
  long in_FS_OFFSET;
  bool isFirstPattern;
  bool bContinue;
  ushort scope;
  uint fixedFlag;
  uint uriId;
  Janitor_xercesc_2_7__XSAnnotation_ janEnumAnnot;
  Janitor_xercesc_2_7__XSAnnotation_ janPatternAnnot;
  DatatypeValidator *baseValidator;
  DatatypeValidator *newDV;
  DOMElement *content;
  RefHashTableOf_xercesc_2_7__KVStringPair_ *facets;
  RefArrayVectorOf_short_unsigned_int_ *enums;
  XMLCh *baseTypeName;
  DOMElement *tempEl;
  XMLCh *facetName;
  OutOfMemoryException *anon_var_0;
  XMLCh *attValue;
  XMLCh *facetStr;
  KVStringPair *kv;
  XMLCh *localPart;
  XMLCh *prefix;
  XMLCh *uriStr;
  KVStringPair *kv_1;
  OutOfMemoryException *anon_var_0_1;
  XMLException *excep;
  XMLBuffer pattern;
  XMLCh fixedFlagStr [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  newDV = (DatatypeValidator *)0x0;
  pXVar12 = getElementAttValue(this,contentElem,(XMLCh *)&SchemaSymbols::fgATT_BASE,false);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)contentElem,(TraverseSchema *)0x27,
             SUB81(this,0),(ValueVectorOf *)0x0);
  plVar13 = (long *)xercesc_2_7::XUtil::getNextSiblingElement(&contentElem->super_DOMNode);
  if (plVar13 != (long *)0x0) {
    pXVar14 = (XMLCh *)(**(code **)(*plVar13 + 0xc0))(plVar13);
    reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x16,pXVar14,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
  if ((pXVar12 == (XMLCh *)0x0) || (*pXVar12 == 0)) {
    pDVar15 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentElem->super_DOMNode);
    elem = (DOMNode *)checkContent(this,rootElem,pDVar15,false);
    bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if ((bVar5 == false) ||
       ((this->fAnnotation != (XSAnnotation *)0x0 ||
        (uVar8 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar8 == 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pXVar16 = generateSyntheticAnnotation(this,contentElem,this->fNonXSAttList);
      this->fAnnotation = pXVar16;
    }
    if (this->fAnnotation != (XSAnnotation *)0x0) {
      bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
      if (bVar5 == false) {
        pXVar16 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
        xercesc_2_7::XSAnnotation::setNext(pXVar16);
      }
      else {
        Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
      }
    }
    if (elem == (DOMNode *)0x0) {
      reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1a);
      popCurrentTypeNameStack(this);
      newDV = (DatatypeValidator *)0x0;
      goto LAB_0010a7d1;
    }
    iVar9 = (*elem->_vptr_DOMNode[0x18])(elem);
    bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar9),
                              (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
    if (bVar5 == false) {
      reportSchemaError(this,(DOMElement *)elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x18,typeName,
                        (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
      popCurrentTypeNameStack(this);
      newDV = (DatatypeValidator *)0x0;
      goto LAB_0010a7d1;
    }
    baseValidator = checkForSimpleTypeValidator(this,(DOMElement *)elem,0);
    content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(elem);
  }
  else {
    baseValidator = findDTValidator(this,contentElem,typeName,pXVar12,4);
    pDVar15 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentElem->super_DOMNode);
    content = checkContent(this,rootElem,pDVar15,true);
    bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if (((bVar5 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
       (uVar8 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar8 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pXVar16 = generateSyntheticAnnotation(this,contentElem,this->fNonXSAttList);
      this->fAnnotation = pXVar16;
    }
    if (this->fAnnotation != (XSAnnotation *)0x0) {
      bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
      if (bVar5 == false) {
        pXVar16 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
        xercesc_2_7::XSAnnotation::setNext(pXVar16);
      }
      else {
        Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
      }
    }
  }
  if (baseValidator != (DatatypeValidator *)0x0) {
    facets = (RefHashTableOf_xercesc_2_7__KVStringPair_ *)0x0;
    enums = (RefArrayVectorOf_short_unsigned_int_ *)0x0;
    XMLBuffer::XMLBuffer(&pattern,0x80,this->fGrammarPoolMemoryManager);
    Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janEnumAnnot,(XSAnnotation *)0x0);
    Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janPatternAnnot,(XSAnnotation *)0x0);
    fixedFlag = 0;
    bVar5 = true;
    for (; content != (DOMElement *)0x0;
        content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode))
    {
      iVar9 = (*(content->super_DOMNode)._vptr_DOMNode[4])(content);
      if ((short)iVar9 == 1) {
        iVar9 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
        pXVar12 = (XMLCh *)CONCAT44(extraout_var_00,iVar9);
        uVar7 = GeneralAttributeCheck::getFacetId
                          (&this->fAttributeCheck,pXVar12,this->fMemoryManager);
        xercesc_2_7::GeneralAttributeCheck::checkAttributes
                  ((DOMElement *)&this->fAttributeCheck,(ushort)content,
                   (TraverseSchema *)(ulong)uVar7,SUB81(this,0),(ValueVectorOf *)0x0);
        pDVar15 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&content->super_DOMNode);
        checkContent(this,rootElem,pDVar15,true);
        iVar9 = (*(content->super_DOMNode)._vptr_DOMNode[0x29])(content,&SchemaSymbols::fgATT_VALUE)
        ;
        pXVar14 = (XMLCh *)CONCAT44(extraout_var_01,iVar9);
        if (facets == (RefHashTableOf_xercesc_2_7__KVStringPair_ *)0x0) {
          facets = (RefHashTableOf_xercesc_2_7__KVStringPair_ *)
                   xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
          RefHashTableOf<xercesc_2_7::KVStringPair>::RefHashTableOf
                    (facets,0x1d,true,this->fGrammarPoolMemoryManager);
        }
        bVar6 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgELT_ENUMERATION);
        if (bVar6 == false) {
          bVar6 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgELT_PATTERN);
          if (bVar6 == false) {
            bVar6 = RefHashTableOf<xercesc_2_7::KVStringPair>::containsKey(facets,pXVar12);
            if (bVar6 == false) {
              bVar6 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgELT_WHITESPACE);
              if (((bVar6 == false) ||
                  (VVar10 = DatatypeValidator::getType(baseValidator), VVar10 == String)) ||
                 (bVar6 = XMLString::equals(pXVar14,(XMLCh *)&SchemaSymbols::fgWS_COLLAPSE),
                 bVar6 == true)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                if ((this->fAnnotation != (XSAnnotation *)0x0) &&
                   (plVar13 = (long *)this->fAnnotation, plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 8))(plVar13);
                }
                reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x66,pXVar14,
                                  (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
              }
              else {
                pXVar2 = this->fStringPool;
                pcVar3 = *(code **)(*(long *)this->fStringPool + 0x50);
                uVar11 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,pXVar12)
                ;
                facetName_00 = (ushort *)(*pcVar3)(pXVar2,uVar11);
                pKVar17 = (KVStringPair *)
                          xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
                xercesc_2_7::KVStringPair::KVStringPair
                          (pKVar17,facetName_00,pXVar14,this->fGrammarPoolMemoryManager);
                bVar6 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
                if (((bVar6 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
                   (uVar8 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList),
                   uVar8 == 0)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  pXVar16 = generateSyntheticAnnotation(this,content,this->fNonXSAttList);
                  this->fAnnotation = pXVar16;
                }
                if (this->fAnnotation != (XSAnnotation *)0x0) {
                  xercesc_2_7::SchemaGrammar::putAnnotation
                            (this->fSchemaGrammar,(XSAnnotation *)pKVar17);
                }
                RefHashTableOf<xercesc_2_7::KVStringPair>::put(facets,facetName_00,pKVar17);
                checkFixedFacet(this,content,facetName_00,baseValidator,&fixedFlag);
              }
            }
            else {
              if ((this->fAnnotation != (XSAnnotation *)0x0) &&
                 (plVar13 = (long *)this->fAnnotation, plVar13 != (long *)0x0)) {
                (**(code **)(*plVar13 + 8))(plVar13);
              }
              reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1b,pXVar12,
                                (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
            }
          }
          else {
            bVar6 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
            if (((bVar6 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
               (uVar8 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar8 == 0)
               ) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pXVar16 = generateSyntheticAnnotation(this,content,this->fNonXSAttList);
              this->fAnnotation = pXVar16;
            }
            if (this->fAnnotation != (XSAnnotation *)0x0) {
              bVar6 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janPatternAnnot);
              if (bVar6 == false) {
                pXVar16 = Janitor<xercesc_2_7::XSAnnotation>::get(&janPatternAnnot);
                xercesc_2_7::XSAnnotation::setNext(pXVar16);
              }
              else {
                Janitor<xercesc_2_7::XSAnnotation>::reset(&janPatternAnnot,this->fAnnotation);
              }
            }
            if (bVar5) {
              bVar5 = false;
              XMLBuffer::set(&pattern,pXVar14);
            }
            else {
              XMLBuffer::append(&pattern,0x7c);
              XMLBuffer::append(&pattern,pXVar14);
            }
          }
        }
        else {
          bVar6 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
          if (((bVar6 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
             (uVar8 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar8 == 0))
          {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            pXVar16 = generateSyntheticAnnotation(this,content,this->fNonXSAttList);
            this->fAnnotation = pXVar16;
          }
          if (this->fAnnotation != (XSAnnotation *)0x0) {
            bVar6 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janEnumAnnot);
            if (bVar6 == false) {
              pXVar16 = Janitor<xercesc_2_7::XSAnnotation>::get(&janEnumAnnot);
              xercesc_2_7::XSAnnotation::setNext(pXVar16);
            }
            else {
              Janitor<xercesc_2_7::XSAnnotation>::reset(&janEnumAnnot,this->fAnnotation);
            }
          }
          if (enums == (RefArrayVectorOf_short_unsigned_int_ *)0x0) {
            enums = (RefArrayVectorOf_short_unsigned_int_ *)
                    xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
            RefArrayVectorOf<short_unsigned_int>::RefArrayVectorOf
                      (enums,8,true,this->fGrammarPoolMemoryManager);
          }
          VVar10 = DatatypeValidator::getType(baseValidator);
          if (VVar10 == NOTATION) {
            pXVar12 = getLocalPart(this,pXVar14);
            pXVar14 = getPrefix(this,pXVar14);
            if ((pXVar14 == (XMLCh *)0x0) || (*pXVar14 == 0)) {
              pXVar14 = this->fTargetNSURIString;
            }
            else {
              pXVar14 = resolvePrefixToURI(this,content,pXVar14);
            }
            uriId = (**(code **)(*(long *)this->fURIStringPool + 0x28))
                              (this->fURIStringPool,pXVar14);
            bVar6 = RefHash2KeysTableOf<short_unsigned_int>::containsKey
                              (this->fNotationRegistry,pXVar12,uriId);
            if (bVar6 != true) {
              traverseNotationDecl(this,content,pXVar12,pXVar14);
            }
            XMLBuffer::set(&this->fBuffer,pXVar14);
            XMLBuffer::append(&this->fBuffer,0x3a);
            XMLBuffer::append(&this->fBuffer,pXVar12);
            manager = this->fGrammarPoolMemoryManager;
            pXVar12 = XMLBuffer::getRawBuffer(&this->fBuffer);
            pXVar12 = XMLString::replicate(pXVar12,manager);
            BaseRefVectorOf<short_unsigned_int>::addElement
                      (&enums->super_BaseRefVectorOf_short_unsigned_int_,pXVar12);
          }
          else {
            pXVar12 = XMLString::replicate(pXVar14,this->fGrammarPoolMemoryManager);
            BaseRefVectorOf<short_unsigned_int>::addElement
                      (&enums->super_BaseRefVectorOf_short_unsigned_int_,pXVar12);
          }
        }
      }
    }
    bVar5 = XMLBuffer::isEmpty(&pattern);
    if (bVar5 != true) {
      pXVar12 = XMLBuffer::getRawBuffer(&pattern);
      uVar8 = XMLBuffer::getLen(&pattern);
      pKVar17 = (KVStringPair *)
                xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
      xercesc_2_7::KVStringPair::KVStringPair
                (pKVar17,(ushort *)&SchemaSymbols::fgELT_PATTERN,pXVar12,uVar8,
                 this->fGrammarPoolMemoryManager);
      bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janPatternAnnot);
      if (bVar5 != true) {
        pSVar4 = this->fSchemaGrammar;
        Janitor<xercesc_2_7::XSAnnotation>::release(&janPatternAnnot);
        xercesc_2_7::SchemaGrammar::putAnnotation(pSVar4,(XSAnnotation *)pKVar17);
      }
      RefHashTableOf<xercesc_2_7::KVStringPair>::put(facets,&SchemaSymbols::fgELT_PATTERN,pKVar17);
    }
    if (fixedFlag != 0) {
      xercesc_2_7::XMLString::binToText
                (fixedFlag,fixedFlagStr,0xf,10,this->fGrammarPoolMemoryManager);
      pKVar17 = (KVStringPair *)
                xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
      xercesc_2_7::KVStringPair::KVStringPair
                (pKVar17,(ushort *)&SchemaSymbols::fgATT_FIXED,fixedFlagStr,
                 this->fGrammarPoolMemoryManager);
      RefHashTableOf<xercesc_2_7::KVStringPair>::put(facets,&SchemaSymbols::fgATT_FIXED,pKVar17);
    }
    if ((enums == (RefArrayVectorOf_short_unsigned_int_ *)0x0) ||
       (bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janEnumAnnot), bVar5 == true)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pSVar4 = this->fSchemaGrammar;
      Janitor<xercesc_2_7::XSAnnotation>::release(&janEnumAnnot);
      xercesc_2_7::SchemaGrammar::putAnnotation(pSVar4,(XSAnnotation *)enums);
    }
    newDV = (DatatypeValidator *)
            xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator
                      ((ushort *)this->fDatatypeRegistry,(DatatypeValidator *)qualifiedName,
                       (RefHashTableOf *)baseValidator,(RefArrayVectorOf *)facets,SUB81(enums,0),0,
                       SUB41(finalSet,0),(MemoryManager *)0x1);
    Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janPatternAnnot);
    Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janEnumAnnot);
    XMLBuffer::_XMLBuffer(&pattern);
  }
  popCurrentTypeNameStack(this);
LAB_0010a7d1:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return newDV;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::traverseByUnion
          (TraverseSchema *this,DOMElement *rootElem,DOMElement *contentElem,XMLCh *typeName,
          XMLCh *qualifiedName,int finalSet,int baseRefContext,
          Janitor_xercesc_2_7__XSAnnotation_ *janAnnot)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  XMLCh *pXVar6;
  BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this_00;
  DatatypeValidator *pDVar7;
  DOMElement *pDVar8;
  XSAnnotation *pXVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  DatatypeValidator *unaff_R12;
  long in_FS_OFFSET;
  int i;
  int tokCount;
  Janitor_xercesc_2_7__RefVectorOf_xercesc_2_7__DatatypeValidator___ janValidators;
  DOMElement *content;
  DatatypeValidator *newDV;
  DOMElement *tempEl;
  XMLCh *baseTypeName;
  DatatypeValidator *baseValidator;
  RefVectorOf_xercesc_2_7__DatatypeValidator_ *validators;
  XMLCh *memberTypeName;
  OutOfMemoryException *anon_var_0;
  XMLException *excep;
  XMLStringTokenizer unionMembers;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)contentElem,(TraverseSchema *)0x2f,
             SUB81(this,0),(ValueVectorOf *)0x0);
  plVar5 = (long *)xercesc_2_7::XUtil::getNextSiblingElement(&contentElem->super_DOMNode);
  if (plVar5 != (long *)0x0) {
    pXVar6 = (XMLCh *)(**(code **)(*plVar5 + 0xc0))(plVar5);
    reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x16,pXVar6,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
  pXVar6 = getElementAttValue(this,contentElem,(XMLCh *)&SchemaSymbols::fgATT_MEMBERTYPES,false);
  this_00 = (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *)
            xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
  RefVectorOf<xercesc_2_7::DatatypeValidator>::RefVectorOf
            ((RefVectorOf_xercesc_2_7__DatatypeValidator_ *)this_00,4,false,
             this->fGrammarPoolMemoryManager);
  Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::Janitor
            (&janValidators,(RefVectorOf_xercesc_2_7__DatatypeValidator_ *)this_00);
  content = (DOMElement *)0x0;
  if ((pXVar6 == (XMLCh *)0x0) || (*pXVar6 == 0)) {
    pDVar8 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentElem->super_DOMNode);
    content = checkContent(this,rootElem,pDVar8,false);
    bVar2 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if ((bVar2 == false) ||
       ((this->fAnnotation != (XSAnnotation *)0x0 ||
        (uVar4 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar4 == 0)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pXVar9 = generateSyntheticAnnotation(this,contentElem,this->fNonXSAttList);
      this->fAnnotation = pXVar9;
    }
    if (this->fAnnotation != (XSAnnotation *)0x0) {
      bVar2 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
      if (bVar2 == false) {
        pXVar9 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
        xercesc_2_7::XSAnnotation::setNext(pXVar9);
      }
      else {
        Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
      }
    }
    if (content == (DOMElement *)0x0) {
      reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1c,typeName,(XMLCh *)0x0
                        ,(XMLCh *)0x0,(XMLCh *)0x0);
      popCurrentTypeNameStack(this);
      unaff_R12 = (DatatypeValidator *)0x0;
      goto LAB_0010b1f8;
    }
    iVar3 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
    bVar2 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar3),
                              (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
    if (bVar2 != true) {
      reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x18,typeName,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      popCurrentTypeNameStack(this);
      unaff_R12 = (DatatypeValidator *)0x0;
      goto LAB_0010b1f8;
    }
  }
  else {
    xercesc_2_7::XMLStringTokenizer::XMLStringTokenizer
              (&unionMembers,pXVar6,this->fGrammarPoolMemoryManager);
    iVar3 = XMLStringTokenizer::countTokens(&unionMembers);
    for (i = 0; i < iVar3; i = i + 1) {
      pXVar6 = (XMLCh *)xercesc_2_7::XMLStringTokenizer::nextToken();
      pDVar7 = findDTValidator(this,contentElem,typeName,pXVar6,0x10);
      if (pDVar7 == (DatatypeValidator *)0x0) {
        popCurrentTypeNameStack(this);
        unaff_R12 = (DatatypeValidator *)0x0;
        bVar2 = false;
        goto LAB_0010ae69;
      }
      BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::addElement(this_00,pDVar7);
    }
    pDVar8 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentElem->super_DOMNode);
    content = checkContent(this,rootElem,pDVar8,true);
    bVar2 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
    if (((bVar2 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
       (uVar4 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar4 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pXVar9 = generateSyntheticAnnotation(this,contentElem,this->fNonXSAttList);
      this->fAnnotation = pXVar9;
    }
    if (this->fAnnotation != (XSAnnotation *)0x0) {
      bVar2 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
      if (bVar2 == false) {
        pXVar9 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
        xercesc_2_7::XSAnnotation::setNext(pXVar9);
      }
      else {
        Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
      }
    }
    bVar2 = true;
LAB_0010ae69:
    xercesc_2_7::XMLStringTokenizer::_XMLStringTokenizer(&unionMembers);
    if (!bVar2) goto LAB_0010b1f8;
  }
  for (; content != (DOMElement *)0x0;
      content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode)) {
    iVar3 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
    bVar2 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar3),
                              (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
    if (bVar2 == false) {
      reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x18,typeName,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
    else {
      pDVar7 = checkForSimpleTypeValidator(this,content,baseRefContext | 0x10);
      if (pDVar7 == (DatatypeValidator *)0x0) {
        popCurrentTypeNameStack(this);
        unaff_R12 = (DatatypeValidator *)0x0;
        goto LAB_0010b1f8;
      }
      BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::addElement(this_00,pDVar7);
    }
  }
  Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::orphan(&janValidators);
  unaff_R12 = (DatatypeValidator *)
              xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator
                        ((ushort *)this->fDatatypeRegistry,(RefVectorOf *)qualifiedName,(int)this_00
                         ,SUB41(finalSet,0),(MemoryManager *)0x1);
  popCurrentTypeNameStack(this);
LAB_0010b1f8:
  Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::_Janitor(&janValidators);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_R12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseSimpleContentDecl
          (TraverseSchema *this,XMLCh *typeName,XMLCh *qualifiedName,DOMElement *contentDecl,
          ComplexTypeInfo *typeInfo,Janitor_xercesc_2_7__XSAnnotation_ *janAnnot)

{
  long lVar1;
  XMLStringPool *pXVar2;
  code *pcVar3;
  ushort *puVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  DOMElement *pDVar13;
  XSAnnotation *pXVar14;
  undefined4 *puVar15;
  undefined4 extraout_var;
  ContentSpecNode *specNode;
  DatatypeValidator *pDVar16;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  RefHashTableOf_xercesc_2_7__KVStringPair_ *this_00;
  RefArrayVectorOf_short_unsigned_int_ *pRVar17;
  XMLCh *pXVar18;
  KVStringPair *pKVar19;
  long lVar20;
  bool bVar21;
  long in_FS_OFFSET;
  bool simpleTypeRequired;
  bool isFirstPattern;
  bool bDoBreak;
  ushort scope;
  uint fixedFlag;
  DOMElement *content;
  RefHashTableOf_xercesc_2_7__KVStringPair_ *facets;
  RefArrayVectorOf_short_unsigned_int_ *enums;
  DOMElement *simpleContent;
  XMLCh *contentName;
  XMLCh *baseName;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uri;
  DatatypeValidator *baseValidator;
  ComplexTypeInfo *baseTypeInfo;
  ComplexTypeInfo *baseTypeInfo_1;
  DatatypeValidator *simpleTypeDV;
  DatatypeValidator *baseDV;
  XMLCh *facetName;
  OutOfMemoryException *anon_var_0;
  XMLCh *attValue;
  XMLCh *facetNameStr;
  DatatypeValidator *simpleDV;
  OutOfMemoryException *anon_var_0_1;
  XMLException *excep;
  XMLBuffer pattern;
  XMLCh fixedFlagStr [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar21 = SUB81(this,0);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)contentDecl,(TraverseSchema *)0x2b,bVar21,
             (ValueVectorOf *)0x0);
  ComplexTypeInfo::setContentType(typeInfo,5);
  pDVar13 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentDecl->super_DOMNode);
  simpleContent = checkContent(this,contentDecl,pDVar13,false);
  bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if (((bVar5 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
     (uVar9 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar9 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    pXVar14 = generateSyntheticAnnotation(this,contentDecl,this->fNonXSAttList);
    this->fAnnotation = pXVar14;
  }
  if (this->fAnnotation != (XSAnnotation *)0x0) {
    bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
    if (bVar5 == false) {
      pXVar14 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
      xercesc_2_7::XSAnnotation::setNext(pXVar14);
    }
    else {
      Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
    }
  }
  if (simpleContent == (DOMElement *)0x0) {
    reportSchemaError(this,contentDecl,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1d);
    puVar15 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
  }
  iVar10 = (*(simpleContent->super_DOMNode)._vptr_DOMNode[0x18])(simpleContent);
  contentName = (XMLCh *)CONCAT44(extraout_var,iVar10);
  bVar5 = XMLString::equals(contentName,(XMLCh *)&SchemaSymbols::fgATTVAL_RESTRICTION);
  if (bVar5 == false) {
    bVar5 = XMLString::equals(contentName,(XMLCh *)&SchemaSymbols::fgATTVAL_EXTENSION);
    if (bVar5 == false) {
      reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1e);
      puVar15 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
    }
    xercesc_2_7::GeneralAttributeCheck::checkAttributes
              ((DOMElement *)&this->fAttributeCheck,(ushort)simpleContent,(TraverseSchema *)0x13,
               bVar21,(ValueVectorOf *)0x0);
    ComplexTypeInfo::setDerivedBy(typeInfo,2);
  }
  else {
    xercesc_2_7::GeneralAttributeCheck::checkAttributes
              ((DOMElement *)&this->fAttributeCheck,(ushort)simpleContent,(TraverseSchema *)0x27,
               bVar21,(ValueVectorOf *)0x0);
    ComplexTypeInfo::setDerivedBy(typeInfo,4);
  }
  pDVar13 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&simpleContent->super_DOMNode);
  content = checkContent(this,simpleContent,pDVar13,true);
  bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if (((bVar5 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) ||
     (uVar9 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList), uVar9 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    pXVar14 = generateSyntheticAnnotation(this,simpleContent,this->fNonXSAttList);
    this->fAnnotation = pXVar14;
  }
  if (this->fAnnotation != (XSAnnotation *)0x0) {
    bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
    if (bVar5 == false) {
      pXVar14 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
      xercesc_2_7::XSAnnotation::setNext(pXVar14);
    }
    else {
      Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
    }
  }
  baseName = getElementAttValue(this,simpleContent,(XMLCh *)&SchemaSymbols::fgATT_BASE,false);
  if ((baseName == (XMLCh *)0x0) || (*baseName == 0)) {
    reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1f);
    puVar15 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
  }
  prefix = getPrefix(this,baseName);
  localPart = getLocalPart(this,baseName);
  uri = resolvePrefixToURI(this,simpleContent,prefix);
  baseValidator = getDatatypeValidator(this,uri,localPart);
  if (baseValidator == (DatatypeValidator *)0x0) {
    bVar5 = XMLString::equals(uri,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    if ((bVar5 == false) ||
       (bVar5 = XMLString::equals(localPart,(XMLCh *)&SchemaSymbols::fgATTVAL_ANYTYPE),
       bVar5 == false)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x40,baseName,
                        (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
      puVar15 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
    }
    processBaseTypeInfo(this,simpleContent,baseName,localPart,uri,typeInfo);
  }
  else {
    uVar9 = DatatypeValidator::getFinalSet(baseValidator);
    uVar11 = ComplexTypeInfo::getDerivedBy(typeInfo);
    if ((uVar9 & 2) == uVar11) {
      reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3f,baseName,typeName,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      puVar15 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
    }
    ComplexTypeInfo::setBaseComplexTypeInfo(typeInfo,(ComplexTypeInfo *)0x0);
    ComplexTypeInfo::setBaseDatatypeValidator(typeInfo,baseValidator);
  }
  baseTypeInfo = ComplexTypeInfo::getBaseComplexTypeInfo(typeInfo);
  bVar5 = false;
  if (baseTypeInfo == (ComplexTypeInfo *)0x0) goto LAB_0010bca0;
  iVar10 = ComplexTypeInfo::getContentType(baseTypeInfo);
  if (iVar10 != 5) {
    iVar10 = ComplexTypeInfo::getDerivedBy(typeInfo);
    if ((iVar10 == 4) &&
       ((iVar10 = ComplexTypeInfo::getContentType(baseTypeInfo), iVar10 == 2 ||
        (iVar10 = ComplexTypeInfo::getContentType(baseTypeInfo), iVar10 == 3)))) {
      specNode = ComplexTypeInfo::getContentSpec(baseTypeInfo);
      bVar5 = emptiableParticle(this,specNode);
      if (bVar5 == false) goto LAB_0010bba7;
      bVar5 = true;
    }
    else {
LAB_0010bba7:
      bVar5 = false;
    }
    if (!bVar5) {
      reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x40,baseName,
                        (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
      puVar15 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
    }
    bVar5 = true;
  }
  uVar9 = ComplexTypeInfo::getFinalSet(baseTypeInfo);
  uVar11 = ComplexTypeInfo::getDerivedBy(typeInfo);
  if ((uVar11 & uVar9) != 0) {
    reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x6f,baseName,(XMLCh *)0x0
                      ,(XMLCh *)0x0,(XMLCh *)0x0);
    puVar15 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
  }
LAB_0010bca0:
  iVar10 = ComplexTypeInfo::getDerivedBy(typeInfo);
  if (iVar10 == 4) {
    pDVar16 = ComplexTypeInfo::getBaseDatatypeValidator(typeInfo);
    if (pDVar16 != (DatatypeValidator *)0x0) {
      reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x41,baseName,
                        (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
      puVar15 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
    }
    pDVar16 = ComplexTypeInfo::getDatatypeValidator(baseTypeInfo);
    ComplexTypeInfo::setBaseDatatypeValidator(typeInfo,pDVar16);
    if (content == (DOMElement *)0x0) {
      if (bVar5) {
        reportSchemaError(this,(DOMElement *)0x0,(XMLCh *)&XMLUni::fgXMLErrDomain,0x132);
        puVar15 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
      }
      pDVar16 = ComplexTypeInfo::getBaseDatatypeValidator(typeInfo);
      ComplexTypeInfo::setDatatypeValidator(typeInfo,pDVar16);
    }
    else {
      iVar10 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
      bVar6 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar10),
                                (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
      if (bVar6 == false) {
        if (bVar5) {
          reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x132);
          puVar15 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
        }
      }
      else {
        simpleTypeDV = traverseSimpleTypeDecl(this,content,false,0);
        if (simpleTypeDV == (DatatypeValidator *)0x0) {
          puVar15 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
        }
        baseDV = ComplexTypeInfo::getBaseDatatypeValidator(typeInfo);
        if (((long *)baseDV == (long *)0x0) ||
           (cVar7 = (**(code **)(*(long *)baseDV + 0x48))(baseDV,simpleTypeDV), cVar7 == '\x01')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x6e);
          puVar15 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar15 = 1;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar15,&ExceptionCodes::typeinfo,0);
        }
        ComplexTypeInfo::setBaseDatatypeValidator(typeInfo,simpleTypeDV);
        content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode);
      }
      facets = (RefHashTableOf_xercesc_2_7__KVStringPair_ *)0x0;
      enums = (RefArrayVectorOf_short_unsigned_int_ *)0x0;
      XMLBuffer::XMLBuffer(&pattern,0x80,this->fGrammarPoolMemoryManager);
      fixedFlag = 0;
      bVar5 = true;
      for (; content != (DOMElement *)0x0;
          content = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&content->super_DOMNode)
          ) {
        iVar10 = (*(content->super_DOMNode)._vptr_DOMNode[0x18])(content);
        facetName = (XMLCh *)CONCAT44(extraout_var_01,iVar10);
        uVar8 = GeneralAttributeCheck::getFacetId
                          (&this->fAttributeCheck,facetName,this->fMemoryManager);
        iVar10 = (*(content->super_DOMNode)._vptr_DOMNode[4])(content);
        if ((short)iVar10 == 1) {
          xercesc_2_7::GeneralAttributeCheck::checkAttributes
                    ((DOMElement *)&this->fAttributeCheck,(ushort)content,
                     (TraverseSchema *)(ulong)uVar8,bVar21,(ValueVectorOf *)0x0);
          iVar10 = (*(content->super_DOMNode)._vptr_DOMNode[0x29])
                             (content,&SchemaSymbols::fgATT_VALUE);
          attValue = (XMLCh *)CONCAT44(extraout_var_02,iVar10);
          if (facets == (RefHashTableOf_xercesc_2_7__KVStringPair_ *)0x0) {
            this_00 = (RefHashTableOf_xercesc_2_7__KVStringPair_ *)
                      xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
            RefHashTableOf<xercesc_2_7::KVStringPair>::RefHashTableOf
                      (this_00,0x1d,true,this->fGrammarPoolMemoryManager);
            facets = this_00;
          }
          bVar6 = XMLString::equals(facetName,(XMLCh *)&SchemaSymbols::fgELT_ENUMERATION);
          if (bVar6 == false) {
            bVar6 = XMLString::equals(facetName,(XMLCh *)&SchemaSymbols::fgELT_PATTERN);
            if (bVar6 == false) {
              bVar6 = RefHashTableOf<xercesc_2_7::KVStringPair>::containsKey(facets,facetName);
              if (bVar6 == false) {
                pXVar2 = this->fStringPool;
                pcVar3 = *(code **)(*(long *)this->fStringPool + 0x50);
                uVar12 = (**(code **)(*(long *)this->fStringPool + 0x28))
                                   (this->fStringPool,facetName);
                facetNameStr = (XMLCh *)(*pcVar3)(pXVar2,uVar12);
                pKVar19 = (KVStringPair *)
                          xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
                xercesc_2_7::KVStringPair::KVStringPair
                          (pKVar19,facetNameStr,attValue,this->fGrammarPoolMemoryManager);
                RefHashTableOf<xercesc_2_7::KVStringPair>::put(facets,facetNameStr,pKVar19);
                pDVar16 = ComplexTypeInfo::getBaseDatatypeValidator(typeInfo);
                checkFixedFacet(this,content,facetNameStr,pDVar16,&fixedFlag);
              }
              else {
                reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1b,facetName,
                                  (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
              }
            }
            else if (bVar5) {
              bVar5 = false;
              XMLBuffer::set(&pattern,attValue);
            }
            else {
              XMLBuffer::append(&pattern,0x7c);
              XMLBuffer::append(&pattern,attValue);
            }
          }
          else {
            if (enums == (RefArrayVectorOf_short_unsigned_int_ *)0x0) {
              pRVar17 = (RefArrayVectorOf_short_unsigned_int_ *)
                        xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
              RefArrayVectorOf<short_unsigned_int>::RefArrayVectorOf
                        (pRVar17,8,true,this->fGrammarPoolMemoryManager);
              enums = pRVar17;
            }
            pRVar17 = enums;
            pXVar18 = XMLString::replicate(attValue,this->fGrammarPoolMemoryManager);
            BaseRefVectorOf<short_unsigned_int>::addElement
                      (&pRVar17->super_BaseRefVectorOf_short_unsigned_int_,pXVar18);
          }
        }
      }
      if (facets == (RefHashTableOf_xercesc_2_7__KVStringPair_ *)0x0) {
        pDVar16 = ComplexTypeInfo::getBaseDatatypeValidator(typeInfo);
        ComplexTypeInfo::setDatatypeValidator(typeInfo,pDVar16);
      }
      else {
        bVar5 = XMLBuffer::isEmpty(&pattern);
        if (bVar5 != true) {
          pXVar18 = XMLBuffer::getRawBuffer(&pattern);
          uVar9 = XMLBuffer::getLen(&pattern);
          pKVar19 = (KVStringPair *)
                    xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
          xercesc_2_7::KVStringPair::KVStringPair
                    (pKVar19,(ushort *)&SchemaSymbols::fgELT_PATTERN,pXVar18,uVar9,
                     this->fGrammarPoolMemoryManager);
          RefHashTableOf<xercesc_2_7::KVStringPair>::put
                    (facets,&SchemaSymbols::fgELT_PATTERN,pKVar19);
        }
        if (fixedFlag != 0) {
          xercesc_2_7::XMLString::binToText
                    (fixedFlag,fixedFlagStr,0xf,10,this->fGrammarPoolMemoryManager);
          pKVar19 = (KVStringPair *)
                    xercesc_2_7::XMemory::operator_new(0x30,this->fGrammarPoolMemoryManager);
          xercesc_2_7::KVStringPair::KVStringPair
                    (pKVar19,(ushort *)&SchemaSymbols::fgATT_FIXED,fixedFlagStr,
                     this->fGrammarPoolMemoryManager);
          RefHashTableOf<xercesc_2_7::KVStringPair>::put(facets,&SchemaSymbols::fgATT_FIXED,pKVar19)
          ;
        }
        puVar4 = (ushort *)this->fDatatypeRegistry;
        pDVar16 = ComplexTypeInfo::getBaseDatatypeValidator(typeInfo);
        simpleDV = (DatatypeValidator *)
                   xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator
                             (puVar4,(DatatypeValidator *)qualifiedName,(RefHashTableOf *)pDVar16,
                              (RefArrayVectorOf *)facets,SUB81(enums,0),0,false,(MemoryManager *)0x1
                             );
        DatatypeValidator::setAnonymous(simpleDV);
        ComplexTypeInfo::setDatatypeValidator(typeInfo,simpleDV);
      }
      XMLBuffer::_XMLBuffer(&pattern);
    }
  }
  else {
    baseTypeInfo_1 = ComplexTypeInfo::getBaseComplexTypeInfo(typeInfo);
    if (baseTypeInfo_1 != (ComplexTypeInfo *)0x0) {
      pDVar16 = ComplexTypeInfo::getDatatypeValidator(baseTypeInfo_1);
      ComplexTypeInfo::setBaseDatatypeValidator(typeInfo,pDVar16);
    }
    pDVar16 = ComplexTypeInfo::getBaseDatatypeValidator(typeInfo);
    ComplexTypeInfo::setDatatypeValidator(typeInfo,pDVar16);
  }
  processAttributes(this,simpleContent,content,typeInfo,false);
  lVar20 = xercesc_2_7::XUtil::getNextSiblingElement(&simpleContent->super_DOMNode);
  if (lVar20 != 0) {
    reportSchemaError(this,simpleContent,(XMLCh *)&XMLUni::fgXMLErrDomain,0x42);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseComplexContentDecl
          (TraverseSchema *this,XMLCh *typeName,DOMElement *contentDecl,ComplexTypeInfo *typeInfo,
          bool isMixed,Janitor_xercesc_2_7__XSAnnotation_ *janAnnot)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  XMLCh *pXVar4;
  DOMElement *pDVar5;
  DOMNode *elem;
  XSAnnotation *pXVar6;
  undefined4 *puVar7;
  undefined4 extraout_var;
  XMLCh *pXVar8;
  XMLCh *str1;
  ComplexTypeInfo *pCVar9;
  long lVar10;
  bool mixedContent;
  bool isBaseAnyType;
  XMLCh *mixed;
  DOMElement *complexContent;
  XMLCh *complexContentName;
  XMLCh *baseName;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uri;
  DOMElement *content;
  
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)contentDecl,(TraverseSchema *)0xb,
             SUB81(this,0),(ValueVectorOf *)0x0);
  pXVar4 = getElementAttValue(this,contentDecl,(XMLCh *)&SchemaSymbols::fgATT_MIXED,false);
  mixedContent = isMixed;
  if (pXVar4 != (XMLCh *)0x0) {
    bVar1 = XMLString::equals(pXVar4,(XMLCh *)&SchemaSymbols::fgATTVAL_TRUE);
    if (bVar1 == false) {
      bVar1 = XMLString::equals(pXVar4,(XMLCh *)&fgValueOne);
      if (bVar1 != false) goto LAB_0010c9a1;
      bVar1 = false;
    }
    else {
LAB_0010c9a1:
      bVar1 = true;
    }
    if (bVar1) {
      mixedContent = true;
    }
    else {
      bVar1 = XMLString::equals(pXVar4,(XMLCh *)&SchemaSymbols::fgATTVAL_FALSE);
      if (bVar1 == false) {
        bVar1 = XMLString::equals(pXVar4,(XMLCh *)&fgValueZero);
        if (bVar1 != false) goto LAB_0010c9e5;
        bVar1 = false;
      }
      else {
LAB_0010c9e5:
        bVar1 = true;
      }
      if (bVar1) {
        mixedContent = false;
      }
    }
  }
  ComplexTypeInfo::setDatatypeValidator(typeInfo,(DatatypeValidator *)0x0);
  ComplexTypeInfo::setBaseDatatypeValidator(typeInfo,(DatatypeValidator *)0x0);
  pDVar5 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&contentDecl->super_DOMNode);
  elem = (DOMNode *)checkContent(this,contentDecl,pDVar5,false);
  bVar1 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if ((bVar1 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) {
LAB_0010ca88:
    bVar1 = false;
  }
  else {
    uVar2 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList);
    if (uVar2 == 0) goto LAB_0010ca88;
    bVar1 = true;
  }
  if (bVar1) {
    pXVar6 = generateSyntheticAnnotation(this,contentDecl,this->fNonXSAttList);
    this->fAnnotation = pXVar6;
  }
  if (this->fAnnotation != (XSAnnotation *)0x0) {
    bVar1 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
    if (bVar1 == false) {
      pXVar6 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
      xercesc_2_7::XSAnnotation::setNext(pXVar6);
    }
    else {
      Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
    }
  }
  if (elem == (DOMNode *)0x0) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ExceptionCodes::typeinfo,0);
  }
  iVar3 = (*elem->_vptr_DOMNode[0x18])(elem);
  bVar1 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar3),
                            (XMLCh *)&SchemaSymbols::fgELT_RESTRICTION);
  if (bVar1 == false) {
    bVar1 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar3),
                              (XMLCh *)&SchemaSymbols::fgELT_EXTENSION);
    if (bVar1 == false) {
      reportSchemaError(this,(DOMElement *)elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x20);
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ExceptionCodes::typeinfo,0);
    }
    ComplexTypeInfo::setDerivedBy(typeInfo,2);
  }
  else {
    ComplexTypeInfo::setDerivedBy(typeInfo,4);
  }
  pXVar4 = getElementAttValue(this,(DOMElement *)elem,(XMLCh *)&SchemaSymbols::fgATT_BASE,false);
  if ((pXVar4 == (XMLCh *)0x0) || (*pXVar4 == 0)) {
    reportSchemaError(this,(DOMElement *)elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x1f);
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ExceptionCodes::typeinfo,0);
  }
  pXVar8 = getPrefix(this,pXVar4);
  str1 = getLocalPart(this,pXVar4);
  pXVar8 = resolvePrefixToURI(this,(DOMElement *)elem,pXVar8);
  isBaseAnyType = false;
  bVar1 = XMLString::equals(pXVar8,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  if (bVar1 != false) {
    bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_ANYTYPE);
    if (bVar1 != false) {
      bVar1 = true;
      goto LAB_0010ccf2;
    }
  }
  bVar1 = false;
LAB_0010ccf2:
  if (bVar1) {
    isBaseAnyType = true;
  }
  else {
    processBaseTypeInfo(this,(DOMElement *)elem,pXVar4,str1,pXVar8,typeInfo);
    pCVar9 = ComplexTypeInfo::getBaseComplexTypeInfo(typeInfo);
    if (pCVar9 == (ComplexTypeInfo *)0x0) {
      reportSchemaError(this,(DOMElement *)elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x57);
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ExceptionCodes::typeinfo,0);
    }
  }
  if (this->fCurrentGroupInfo != (XercesGroupInfo *)0x0) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ExceptionCodes::typeinfo,0);
  }
  pDVar5 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(elem);
  pDVar5 = checkContent(this,(DOMElement *)elem,pDVar5,true);
  if (this->fAnnotation != (XSAnnotation *)0x0) {
    bVar1 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(janAnnot);
    if (bVar1 == false) {
      pXVar6 = Janitor<xercesc_2_7::XSAnnotation>::get(janAnnot);
      xercesc_2_7::XSAnnotation::setNext(pXVar6);
    }
    else {
      Janitor<xercesc_2_7::XSAnnotation>::reset(janAnnot,this->fAnnotation);
    }
  }
  processComplexContent
            (this,(DOMElement *)elem,typeName,pDVar5,typeInfo,str1,mixedContent,isBaseAnyType);
  lVar10 = xercesc_2_7::XUtil::getNextSiblingElement(elem);
  if (lVar10 != 0) {
    reportSchemaError(this,(DOMElement *)elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x43);
  }
  return;
}


SchemaAttDef * __thiscall
xercesc_2_7::TraverseSchema::traverseAnyAttribute(TraverseSchema *this,DOMElement *elem)

{
  long lVar1;
  code *pcVar2;
  MemoryManager *pMVar3;
  SchemaGrammar *pSVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  DOMElement *pDVar8;
  XSAnnotation *pXVar9;
  XMLCh *pXVar10;
  XMLCh *str1;
  long *plVar11;
  ValidationContext *pVVar12;
  SchemaAttDef *this_00;
  long in_FS_OFFSET;
  uint local_b0;
  DefAttTypes attDefType;
  int uriIndex;
  AttTypes attType;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  XMLCh *processContents;
  XMLCh *nameSpace;
  DatatypeValidator *anyURIDV;
  XMLCh *token;
  XMLException *excep;
  SchemaAttDef *attDef;
  ValueVectorOf_unsigned_int_ namespaceList;
  XMLStringTokenizer tokenizer;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x3,SUB81(this,0),
             (ValueVectorOf *)0x0);
  pDVar8 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  pDVar8 = checkContent(this,elem,pDVar8,true);
  if (pDVar8 != (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x61);
  }
  bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if ((bVar5 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) {
LAB_0010cfb7:
    bVar5 = false;
  }
  else {
    uVar7 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList);
    if (uVar7 == 0) goto LAB_0010cfb7;
    bVar5 = true;
  }
  if (bVar5) {
    pXVar9 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
    this->fAnnotation = pXVar9;
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  pXVar10 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_PROCESSCONTENTS,false);
  str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAMESPACE,false);
  attDefType = ProcessContents_Strict;
  if ((pXVar10 == (XMLCh *)0x0) || (*pXVar10 == 0)) {
LAB_0010d0a4:
    bVar5 = true;
  }
  else {
    bVar5 = XMLString::equals(pXVar10,(XMLCh *)&SchemaSymbols::fgATTVAL_STRICT);
    if (bVar5 != false) goto LAB_0010d0a4;
    bVar5 = false;
  }
  if (!bVar5) {
    bVar5 = XMLString::equals(pXVar10,(XMLCh *)&SchemaSymbols::fgATTVAL_SKIP);
    if (bVar5 == false) {
      bVar5 = XMLString::equals(pXVar10,(XMLCh *)&SchemaSymbols::fgATTVAL_LAX);
      if (bVar5 != false) {
        attDefType = ProcessContents_Lax;
      }
    }
    else {
      attDefType = ProcessContents_Skip;
    }
  }
  uriIndex = this->fEmptyNamespaceURI;
  attType = Any_Any;
  ValueVectorOf<unsigned_int>::ValueVectorOf(&namespaceList,8,this->fGrammarPoolMemoryManager,false)
  ;
  if ((str1 != (XMLCh *)0x0) && (*str1 != 0)) {
    bVar5 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_TWOPOUNDANY);
    if (bVar5 == false) {
      bVar5 = false;
      goto LAB_0010d17b;
    }
  }
  bVar5 = true;
LAB_0010d17b:
  if (!bVar5) {
    bVar5 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_TWOPOUNDOTHER);
    if (bVar5 == false) {
      xercesc_2_7::XMLStringTokenizer::XMLStringTokenizer
                (&tokenizer,str1,this->fGrammarPoolMemoryManager);
      plVar11 = (long *)DatatypeValidatorFactory::getDatatypeValidator
                                  (this->fDatatypeRegistry,(XMLCh *)&SchemaSymbols::fgDT_ANYURI);
      attType = Any_List;
      while( true ) {
        cVar6 = xercesc_2_7::XMLStringTokenizer::hasMoreTokens();
        if (cVar6 == '\0') break;
        pXVar10 = (XMLCh *)xercesc_2_7::XMLStringTokenizer::nextToken();
        bVar5 = XMLString::equals(pXVar10,(XMLCh *)&SchemaSymbols::fgATTVAL_TWOPOUNDLOCAL);
        if (bVar5 == false) {
          bVar5 = XMLString::equals(pXVar10,(XMLCh *)&SchemaSymbols::
                                                      fgATTVAL_TWOPOUNDTRAGETNAMESPACE);
          if (bVar5 == false) {
            pcVar2 = *(code **)(*plVar11 + 0x40);
            pMVar3 = this->fMemoryManager;
            pVVar12 = SchemaGrammar::getValidationContext(this->fSchemaGrammar);
            (*pcVar2)(plVar11,pXVar10,pVVar12,pMVar3);
            uriIndex = (**(code **)(*(long *)this->fURIStringPool + 0x28))
                                 (this->fURIStringPool,pXVar10);
          }
          else {
            uriIndex = this->fTargetNSURI;
          }
        }
        else {
          uriIndex = this->fEmptyNamespaceURI;
        }
        local_b0 = uriIndex;
        bVar5 = ValueVectorOf<unsigned_int>::containsElement(&namespaceList,&local_b0,0);
        if (bVar5 != true) {
          local_b0 = uriIndex;
          ValueVectorOf<unsigned_int>::addElement(&namespaceList,&local_b0);
        }
      }
      uriIndex = this->fEmptyNamespaceURI;
      xercesc_2_7::XMLStringTokenizer::_XMLStringTokenizer(&tokenizer);
    }
    else {
      attType = Any_Other;
      uriIndex = this->fTargetNSURI;
    }
  }
  this_00 = (SchemaAttDef *)xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager)
  ;
  xercesc_2_7::SchemaAttDef::SchemaAttDef
            (this_00,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,uriIndex,
             attType,attDefType,this->fGrammarPoolMemoryManager);
  bVar5 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
  if (bVar5 != true) {
    pSVar4 = this->fSchemaGrammar;
    Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
    xercesc_2_7::SchemaGrammar::putAnnotation(pSVar4,(XSAnnotation *)this_00);
  }
  uVar7 = ValueVectorOf<unsigned_int>::size(&namespaceList);
  if (uVar7 != 0) {
    SchemaAttDef::setNamespaceList(this_00,&namespaceList);
  }
  ValueVectorOf<unsigned_int>::_ValueVectorOf(&namespaceList);
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseKey
          (TraverseSchema *this,DOMElement *icElem,SchemaElementDecl *elemDecl)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  XMLCh *text1;
  RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this_00;
  XMLCh *pXVar4;
  IC_Key *this_01;
  long in_FS_OFFSET;
  Janitor_xercesc_2_7__IC_Key_ janKey;
  XMLCh *name;
  IC_Key *icKey;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)icElem,(TraverseSchema *)0x1a,
             SUB81(this,0),(ValueVectorOf *)0x0);
  text1 = getElementAttValue(this,icElem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  if ((text1 != (XMLCh *)0x0) && (*text1 != 0)) {
    cVar2 = xercesc_2_7::XMLString::isValidNCName(text1);
    if (cVar2 == '\x01') {
      if (this->fIdentityConstraintNames ==
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *)0x0) {
        this_00 = (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *)
                  xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
        RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::RefHash2KeysTableOf
                  (this_00,0x1d,false,this->fMemoryManager);
        this->fIdentityConstraintNames = this_00;
      }
      else {
        bVar3 = RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::containsKey
                          (this->fIdentityConstraintNames,text1,this->fTargetNSURI);
        if (bVar3 != false) {
          reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x92,text1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
          goto LAB_0010d889;
        }
      }
      pXVar4 = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
      this_01 = (IC_Key *)xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
      xercesc_2_7::IC_Key::IC_Key(this_01,text1,pXVar4,this->fGrammarPoolMemoryManager);
      Janitor<xercesc_2_7::IC_Key>::Janitor(&janKey,this_01);
      RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
                (this->fIdentityConstraintNames,text1,this->fTargetNSURI,
                 (IdentityConstraint *)this_01);
      bVar3 = traverseIdentityConstraint(this,(IdentityConstraint *)this_01,icElem);
      if (bVar3 == true) {
        SchemaElementDecl::addIdentityConstraint(elemDecl,(IdentityConstraint *)this_01);
        IdentityConstraint::setNamespaceURI((IdentityConstraint *)this_01,this->fTargetNSURI);
        Janitor<xercesc_2_7::IC_Key>::orphan(&janKey);
      }
      else {
        RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
                  (this->fIdentityConstraintNames,text1,this->fTargetNSURI,(IdentityConstraint *)0x0
                  );
      }
      Janitor<xercesc_2_7::IC_Key>::_Janitor(&janKey);
    }
    else {
      reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                        (XMLCh *)&SchemaSymbols::fgELT_KEY,text1,(XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
LAB_0010d889:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseUnique
          (TraverseSchema *this,DOMElement *icElem,SchemaElementDecl *elemDecl)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  XMLCh *text1;
  RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this_00;
  XMLCh *pXVar4;
  IC_Unique *this_01;
  long in_FS_OFFSET;
  Janitor_xercesc_2_7__IC_Unique_ janUnique;
  XMLCh *name;
  IC_Unique *icUnique;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)icElem,(TraverseSchema *)0x30,
             SUB81(this,0),(ValueVectorOf *)0x0);
  text1 = getElementAttValue(this,icElem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  if ((text1 != (XMLCh *)0x0) && (*text1 != 0)) {
    cVar2 = xercesc_2_7::XMLString::isValidNCName(text1);
    if (cVar2 == '\x01') {
      if (this->fIdentityConstraintNames ==
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *)0x0) {
        this_00 = (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *)
                  xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
        RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::RefHash2KeysTableOf
                  (this_00,0x1d,false,this->fGrammarPoolMemoryManager);
        this->fIdentityConstraintNames = this_00;
      }
      else {
        bVar3 = RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::containsKey
                          (this->fIdentityConstraintNames,text1,this->fTargetNSURI);
        if (bVar3 != false) {
          reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x92,text1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
          goto LAB_0010dbc3;
        }
      }
      pXVar4 = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
      this_01 = (IC_Unique *)
                xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
      xercesc_2_7::IC_Unique::IC_Unique(this_01,text1,pXVar4,this->fGrammarPoolMemoryManager);
      Janitor<xercesc_2_7::IC_Unique>::Janitor(&janUnique,this_01);
      RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
                (this->fIdentityConstraintNames,text1,this->fTargetNSURI,
                 (IdentityConstraint *)this_01);
      bVar3 = traverseIdentityConstraint(this,(IdentityConstraint *)this_01,icElem);
      if (bVar3 == true) {
        SchemaElementDecl::addIdentityConstraint(elemDecl,(IdentityConstraint *)this_01);
        IdentityConstraint::setNamespaceURI((IdentityConstraint *)this_01,this->fTargetNSURI);
        Janitor<xercesc_2_7::IC_Unique>::orphan(&janUnique);
      }
      else {
        RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
                  (this->fIdentityConstraintNames,text1,this->fTargetNSURI,(IdentityConstraint *)0x0
                  );
      }
      Janitor<xercesc_2_7::IC_Unique>::_Janitor(&janUnique);
    }
    else {
      reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                        (XMLCh *)&SchemaSymbols::fgELT_UNIQUE,text1,(XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
LAB_0010dbc3:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::traverseKeyRef
          (TraverseSchema *this,DOMElement *icElem,SchemaElementDecl *elemDecl,uint namespaceDepth)

{
  long lVar1;
  RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this_00;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  XMLCh *text1;
  XMLCh *pXVar6;
  XMLCh *pXVar7;
  IdentityConstraint *this_01;
  IC_KeyRef *this_02;
  long in_FS_OFFSET;
  Janitor_xercesc_2_7__IC_KeyRef_ janKeyRef;
  XMLCh *name;
  XMLCh *refer;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uriStr;
  IdentityConstraint *icKey;
  IC_KeyRef *icKeyRef;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)icElem,(TraverseSchema *)0x1b,
             SUB81(this,0),(ValueVectorOf *)0x0);
  text1 = getElementAttValue(this,icElem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  pXVar6 = getElementAttValue(this,icElem,(XMLCh *)&SchemaSymbols::fgATT_REFER,false);
  if ((((text1 != (XMLCh *)0x0) && (*text1 != 0)) && (pXVar6 != (XMLCh *)0x0)) && (*pXVar6 != 0)) {
    cVar2 = xercesc_2_7::XMLString::isValidNCName(text1);
    if (cVar2 == '\x01') {
      pXVar7 = getPrefix(this,pXVar6);
      pXVar6 = getLocalPart(this,pXVar6);
      pXVar7 = resolvePrefixToURI(this,icElem,pXVar7,namespaceDepth);
      if (this->fIdentityConstraintNames ==
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *)0x0) {
        this_01 = (IdentityConstraint *)0x0;
      }
      else {
        this_00 = this->fIdentityConstraintNames;
        iVar4 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,pXVar7);
        this_01 = RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::get(this_00,pXVar6,iVar4);
      }
      if (this_01 == (IdentityConstraint *)0x0) {
        reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x94,text1,pXVar6,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      else {
        bVar3 = RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::containsKey
                          (this->fIdentityConstraintNames,text1,this->fTargetNSURI);
        if (bVar3 == false) {
          pXVar6 = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
          this_02 = (IC_KeyRef *)
                    xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
          xercesc_2_7::IC_KeyRef::IC_KeyRef
                    (this_02,text1,pXVar6,this_01,this->fGrammarPoolMemoryManager);
          Janitor<xercesc_2_7::IC_KeyRef>::Janitor(&janKeyRef,this_02);
          RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
                    (this->fIdentityConstraintNames,text1,this->fTargetNSURI,
                     (IdentityConstraint *)this_02);
          bVar3 = traverseIdentityConstraint(this,(IdentityConstraint *)this_02,icElem);
          if (bVar3 == true) {
            iVar4 = IdentityConstraint::getFieldCount((IdentityConstraint *)this_02);
            iVar5 = IdentityConstraint::getFieldCount(this_01);
            if (iVar4 == iVar5) {
              SchemaElementDecl::addIdentityConstraint(elemDecl,(IdentityConstraint *)this_02);
              IdentityConstraint::setNamespaceURI((IdentityConstraint *)this_02,this->fTargetNSURI);
              Janitor<xercesc_2_7::IC_KeyRef>::orphan(&janKeyRef);
            }
            else {
              RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
                        (this->fIdentityConstraintNames,text1,this->fTargetNSURI,
                         (IdentityConstraint *)0x0);
              pXVar6 = IdentityConstraint::getIdentityConstraintName(this_01);
              reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x95,text1,pXVar6,
                                (XMLCh *)0x0,(XMLCh *)0x0);
            }
          }
          else {
            RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
                      (this->fIdentityConstraintNames,text1,this->fTargetNSURI,
                       (IdentityConstraint *)0x0);
          }
          Janitor<xercesc_2_7::IC_KeyRef>::_Janitor(&janKeyRef);
        }
        else {
          reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x92,text1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
        }
      }
    }
    else {
      reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3b,
                        (XMLCh *)&SchemaSymbols::fgELT_KEYREF,text1,(XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


bool __thiscall
xercesc_2_7::TraverseSchema::traverseIdentityConstraint
          (TraverseSchema *this,IdentityConstraint *ic,DOMElement *icElem)

{
  long lVar1;
  SchemaGrammar *pSVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  DOMElement *pDVar6;
  DOMNode *elem_00;
  XSAnnotation *pXVar7;
  undefined4 extraout_var;
  XMLCh *pXVar8;
  XercesXPath *pXVar9;
  IC_Selector *this_00;
  undefined4 extraout_var_00;
  IC_Field *this_01;
  long in_FS_OFFSET;
  uint startIndex;
  uint xpathLen;
  int chOffset;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  DOMElement *elem;
  XMLCh *xpathExpr;
  XercesXPath *sXPath;
  IC_Selector *icSelector;
  XercesXPath *fieldXPath;
  IC_Field *icField;
  XPathException *e_1;
  XPathException *e;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pDVar6 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&icElem->super_DOMNode);
  elem_00 = (DOMNode *)checkContent(this,icElem,pDVar6,false);
  bVar3 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if ((bVar3 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) {
LAB_0010e103:
    bVar3 = false;
  }
  else {
    uVar4 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList);
    if (uVar4 == 0) goto LAB_0010e103;
    bVar3 = true;
  }
  if (bVar3) {
    pXVar7 = generateSyntheticAnnotation(this,icElem,this->fNonXSAttList);
    this->fAnnotation = pXVar7;
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  if (elem_00 == (DOMNode *)0x0) {
    bVar3 = false;
    goto LAB_0010e9d4;
  }
  iVar5 = (*elem_00->_vptr_DOMNode[0x18])(elem_00);
  bVar3 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar5),
                            (XMLCh *)&SchemaSymbols::fgELT_SELECTOR);
  if (bVar3 != true) {
    reportSchemaError(this,(DOMElement *)elem_00,(XMLCh *)&XMLUni::fgXMLErrDomain,0x93);
    bVar3 = false;
    goto LAB_0010e9d4;
  }
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem_00,(TraverseSchema *)0x29,
             SUB81(this,0),(ValueVectorOf *)0x0);
  pDVar6 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(elem_00);
  checkContent(this,icElem,pDVar6,true);
  bVar3 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if ((bVar3 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) {
LAB_0010e280:
    bVar3 = false;
  }
  else {
    uVar4 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList);
    if (uVar4 == 0) goto LAB_0010e280;
    bVar3 = true;
  }
  if (bVar3) {
    pXVar7 = generateSyntheticAnnotation(this,(DOMElement *)elem_00,this->fNonXSAttList);
    this->fAnnotation = pXVar7;
  }
  if (this->fAnnotation != (XSAnnotation *)0x0) {
    bVar3 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
    if (bVar3 == false) {
      pXVar7 = Janitor<xercesc_2_7::XSAnnotation>::get(&janAnnot);
      xercesc_2_7::XSAnnotation::setNext(pXVar7);
    }
    else {
      Janitor<xercesc_2_7::XSAnnotation>::reset(&janAnnot,this->fAnnotation);
    }
  }
  pXVar8 = getElementAttValue(this,(DOMElement *)elem_00,(XMLCh *)&SchemaSymbols::fgATT_XPATH,true);
  uVar4 = XMLString::stringLen(pXVar8);
  if ((pXVar8 == (XMLCh *)0x0) || (uVar4 == 0)) {
    reportSchemaError(this,(DOMElement *)elem_00,(XMLCh *)&XMLUni::fgXMLErrDomain,0x96);
    bVar3 = false;
  }
  else {
    XMLBuffer::reset(&this->fBuffer);
    startIndex = 0;
    while (startIndex < uVar4) {
      bVar3 = XMLString::startsWith(pXVar8 + startIndex,(XMLCh *)&fgForwardSlash);
      if (bVar3 == true) {
LAB_0010e402:
        bVar3 = false;
      }
      else {
        bVar3 = XMLString::startsWith(pXVar8 + startIndex,(XMLCh *)&fgDot);
        if (bVar3 == true) goto LAB_0010e402;
        bVar3 = true;
      }
      if (bVar3) {
        XMLBuffer::append(&this->fBuffer,(XMLCh *)&fgDotForwardSlash);
      }
      iVar5 = xercesc_2_7::XMLString::indexOf(pXVar8,0x7c,startIndex,this->fMemoryManager);
      if (iVar5 == -1) break;
      XMLBuffer::append(&this->fBuffer,pXVar8 + startIndex,(iVar5 - startIndex) + 1);
      startIndex = iVar5 + 1;
    }
    if (startIndex < uVar4) {
      XMLBuffer::append(&this->fBuffer,pXVar8 + startIndex);
    }
    pXVar8 = XMLBuffer::getRawBuffer(&this->fBuffer);
    pXVar9 = (XercesXPath *)xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager)
    ;
    xercesc_2_7::XercesXPath::XercesXPath
              (pXVar9,pXVar8,this->fStringPool,this->fNamespaceScope,this->fEmptyNamespaceURI,true,
               this->fGrammarPoolMemoryManager);
    this_00 = (IC_Selector *)
              xercesc_2_7::XMemory::operator_new(0x18,this->fGrammarPoolMemoryManager);
    xercesc_2_7::IC_Selector::IC_Selector(this_00,pXVar9,ic);
    xercesc_2_7::IdentityConstraint::setSelector((IC_Selector *)ic);
    elem = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(elem_00);
    if (elem == (DOMElement *)0x0) {
      reportSchemaError(this,icElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x93);
      bVar3 = false;
    }
    else {
      for (; elem != (DOMElement *)0x0;
          elem = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&elem->super_DOMNode)) {
        iVar5 = (*(elem->super_DOMNode)._vptr_DOMNode[0x18])(elem);
        bVar3 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar5),
                                  (XMLCh *)&SchemaSymbols::fgELT_FIELD);
        if (bVar3 == true) {
          xercesc_2_7::GeneralAttributeCheck::checkAttributes
                    ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x14,
                     SUB81(this,0),(ValueVectorOf *)0x0);
          pDVar6 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
          checkContent(this,icElem,pDVar6,true);
          bVar3 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
          if ((bVar3 == false) || (this->fAnnotation != (XSAnnotation *)0x0)) {
LAB_0010e6ee:
            bVar3 = false;
          }
          else {
            uVar4 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(this->fNonXSAttList);
            if (uVar4 == 0) goto LAB_0010e6ee;
            bVar3 = true;
          }
          if (bVar3) {
            pXVar7 = generateSyntheticAnnotation(this,elem,this->fNonXSAttList);
            this->fAnnotation = pXVar7;
          }
          if (this->fAnnotation != (XSAnnotation *)0x0) {
            bVar3 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
            if (bVar3 == false) {
              pXVar7 = Janitor<xercesc_2_7::XSAnnotation>::get(&janAnnot);
              xercesc_2_7::XSAnnotation::setNext(pXVar7);
            }
            else {
              Janitor<xercesc_2_7::XSAnnotation>::reset(&janAnnot,this->fAnnotation);
            }
          }
          pXVar8 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_XPATH,true);
          if ((pXVar8 == (XMLCh *)0x0) || (*pXVar8 == 0)) {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x96);
            bVar3 = false;
            goto LAB_0010e9d4;
          }
          bVar3 = XMLString::startsWith(pXVar8,(XMLCh *)&fgForwardSlash);
          if (bVar3 == false) {
            bVar3 = XMLString::startsWith(pXVar8,(XMLCh *)&fgDot);
            if (bVar3 != false) goto LAB_0010e820;
            bVar3 = false;
          }
          else {
LAB_0010e820:
            bVar3 = true;
          }
          if (bVar3) {
            XMLBuffer::set(&this->fBuffer,pXVar8);
          }
          else {
            XMLBuffer::set(&this->fBuffer,(XMLCh *)&fgDotForwardSlash);
            XMLBuffer::append(&this->fBuffer,pXVar8);
          }
          pXVar8 = XMLBuffer::getRawBuffer(&this->fBuffer);
          pXVar9 = (XercesXPath *)
                   xercesc_2_7::XMemory::operator_new(0x28,this->fGrammarPoolMemoryManager);
          xercesc_2_7::XercesXPath::XercesXPath
                    (pXVar9,pXVar8,this->fStringPool,this->fNamespaceScope,this->fEmptyNamespaceURI,
                     false,this->fGrammarPoolMemoryManager);
          this_01 = (IC_Field *)
                    xercesc_2_7::XMemory::operator_new(0x18,this->fGrammarPoolMemoryManager);
          xercesc_2_7::IC_Field::IC_Field(this_01,pXVar9,ic);
          IdentityConstraint::addField(ic,this_01);
        }
        else {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x93);
        }
      }
      bVar3 = Janitor<xercesc_2_7::XSAnnotation>::isDataNull(&janAnnot);
      if (bVar3 != true) {
        pSVar2 = this->fSchemaGrammar;
        Janitor<xercesc_2_7::XSAnnotation>::release(&janAnnot);
        xercesc_2_7::SchemaGrammar::putAnnotation(pSVar2,(XSAnnotation *)ic);
      }
      iVar5 = IdentityConstraint::getFieldCount(ic);
      if (iVar5 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
  }
LAB_0010e9d4:
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


void __thiscall
xercesc_2_7::TraverseSchema::retrieveNamespaceMapping(TraverseSchema *this,DOMElement *schemaRoot)

{
  NamespaceScope *pNVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_var;
  long *plVar7;
  XMLCh *toTest;
  undefined8 uVar8;
  bool seenXMLNS;
  int i;
  int attrCount;
  int offsetIndex;
  DOMNamedNodeMap *schemaEltAttrs;
  DOMNode *attribute;
  XMLCh *attName;
  XMLCh *attValue_1;
  XMLCh *attValue;
  long *plVar6;
  
  iVar4 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0xb])(schemaRoot);
  plVar6 = (long *)CONCAT44(extraout_var,iVar4);
  bVar2 = false;
  iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
  for (i = 0; i < iVar4; i = i + 1) {
    plVar7 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,(long)i);
    if (plVar7 == (long *)0x0) break;
    toTest = (XMLCh *)(**(code **)(*plVar7 + 0x10))(plVar7);
    bVar3 = XMLString::startsWith(toTest,(XMLCh *)&XMLUni::fgXMLNSColonString);
    if (bVar3 == false) {
      bVar3 = XMLString::equals(toTest,(XMLCh *)&XMLUni::fgXMLNSString);
      if (bVar3 != false) {
        uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7);
        pNVar1 = this->fNamespaceScope;
        (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,uVar8);
        xercesc_2_7::NamespaceScope::addPrefix((ushort *)pNVar1,0x13c0c0);
        bVar2 = true;
      }
    }
    else {
      iVar5 = xercesc_2_7::XMLString::indexOf(toTest,0x3a);
      uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7);
      pNVar1 = this->fNamespaceScope;
      (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,uVar8);
      xercesc_2_7::NamespaceScope::addPrefix((ushort *)pNVar1,(int)toTest + (iVar5 + 1) * 2);
    }
  }
  if ((!bVar2) && ((this->fTargetNSURIString == (XMLCh *)0x0 || (*this->fTargetNSURIString == 0))))
  {
    xercesc_2_7::NamespaceScope::addPrefix((ushort *)this->fNamespaceScope,0x13c0c0);
  }
  pNVar1 = this->fNamespaceScope;
  (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,&XMLUni::fgXMLURIName);
  xercesc_2_7::NamespaceScope::addPrefix((ushort *)pNVar1,0x13c5e8);
  return;
}


void __thiscall xercesc_2_7::TraverseSchema::processChildren(TraverseSchema *this,DOMElement *root)

{
  XSAnnotation *pXVar1;
  XMLStringPool *pXVar2;
  code *pcVar3;
  RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this_00;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_var;
  ValueVectorOf_xercesc_2_7__DOMNode__ *pVVar8;
  undefined4 extraout_var_00;
  XMLCh *pXVar9;
  ushort **ppuVar10;
  DOMElement **ppDVar11;
  long in_FS_OFFSET;
  bool sawAnnotation;
  uint local_64;
  uint local_60;
  int fullNameId;
  uint i;
  uint recurseSize;
  DOMElement *child;
  XMLCh *name;
  XMLCh *name_1;
  XMLCh *typeName;
  ValueVectorOf_const_xercesc_2_7__DOMElement__ *recursingAnonTypes;
  ValueVectorOf_short_unsigned_int_const__ *recursingTypeNames;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = false;
  for (child = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&root->super_DOMNode);
      child != (DOMElement *)0x0;
      child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode)) {
    iVar6 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    name = (XMLCh *)CONCAT44(extraout_var,iVar6);
    bVar5 = XMLString::equals(name,(XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    if (bVar5 == false) {
      bVar5 = XMLString::equals(name,(XMLCh *)&SchemaSymbols::fgELT_INCLUDE);
      if (bVar5 == false) {
        bVar5 = XMLString::equals(name,(XMLCh *)&SchemaSymbols::fgELT_IMPORT);
        if (bVar5 == false) {
          bVar5 = XMLString::equals(name,(XMLCh *)&SchemaSymbols::fgELT_REDEFINE);
          if (bVar5 == false) break;
          traverseRedefine(this,child);
        }
        else {
          traverseImport(this,child);
        }
      }
      else {
        traverseInclude(this,child);
      }
    }
    else {
      pXVar1 = (XSAnnotation *)this->fSchemaGrammar;
      pVVar8 = SchemaInfo::getNonXSAttList(this->fSchemaInfo);
      traverseAnnotationDecl(this,child,pVVar8,true);
      xercesc_2_7::SchemaGrammar::addAnnotation(pXVar1);
      bVar4 = true;
    }
  }
  do {
    if (child == (DOMElement *)0x0) break;
    iVar6 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    name_1 = (XMLCh *)CONCAT44(extraout_var_00,iVar6);
    typeName = getElementAttValue(this,child,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
    fullNameId = 0;
    if (typeName != (XMLCh *)0x0) {
      XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
      XMLBuffer::append(&this->fBuffer,0x2c);
      XMLBuffer::append(&this->fBuffer,typeName);
      pXVar2 = this->fStringPool;
      pcVar3 = *(code **)(*(long *)this->fStringPool + 0x28);
      pXVar9 = XMLBuffer::getRawBuffer(&this->fBuffer);
      fullNameId = (*pcVar3)(pXVar2,pXVar9);
    }
    bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    if (bVar5 != false) {
      pXVar1 = (XSAnnotation *)this->fSchemaGrammar;
      pVVar8 = SchemaInfo::getNonXSAttList(this->fSchemaInfo);
      traverseAnnotationDecl(this,child,pVVar8,true);
      xercesc_2_7::SchemaGrammar::addAnnotation(pXVar1);
      bVar4 = true;
      goto LAB_0010f77f;
    }
    bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
    if (bVar5 == false) {
      bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_COMPLEXTYPE);
      if (bVar5 == false) {
        bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_ELEMENT);
        if (bVar5 != false) {
          if ((typeName != (XMLCh *)0x0) && (*typeName != 0)) {
            local_60 = fullNameId;
            bVar5 = ValueVectorOf<unsigned_int>::containsElement
                              (this->fGlobalDeclarations[2],&local_60,0);
            if (bVar5 != false) {
              reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x65,
                                (XMLCh *)&SchemaSymbols::fgELT_ELEMENT,typeName,(XMLCh *)0x0,
                                (XMLCh *)0x0);
              goto LAB_0010f77f;
            }
            local_60 = fullNameId;
            ValueVectorOf<unsigned_int>::addElement(this->fGlobalDeclarations[2],&local_60);
          }
          traverseElementDecl(this,child,true);
          goto LAB_0010f77f;
        }
        bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP);
        if (bVar5 == false) {
          bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTE);
          if (bVar5 == false) {
            bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_GROUP);
            if (bVar5 == false) {
              bVar5 = XMLString::equals(name_1,(XMLCh *)&SchemaSymbols::fgELT_NOTATION);
              if (bVar5 == false) {
                reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x21);
              }
              else {
                traverseNotationDecl(this,child);
              }
            }
            else {
              if ((typeName != (XMLCh *)0x0) && (*typeName != 0)) {
                local_60 = fullNameId;
                bVar5 = ValueVectorOf<unsigned_int>::containsElement
                                  (this->fGlobalDeclarations[5],&local_60,0);
                if (bVar5 != false) {
                  reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x65,
                                    (XMLCh *)&SchemaSymbols::fgELT_GROUP,typeName,(XMLCh *)0x0,
                                    (XMLCh *)0x0);
                  goto LAB_0010f77f;
                }
                local_60 = fullNameId;
                ValueVectorOf<unsigned_int>::addElement(this->fGlobalDeclarations[5],&local_60);
              }
              if (typeName == (XMLCh *)0x0) {
LAB_0010f70d:
                bVar5 = true;
              }
              else {
                this_00 = this->fGroupRegistry;
                pXVar9 = XMLBuffer::getRawBuffer(&this->fBuffer);
                bVar5 = RefHashTableOf<xercesc_2_7::XercesGroupInfo>::containsKey(this_00,pXVar9);
                if (bVar5 != true) goto LAB_0010f70d;
                bVar5 = false;
              }
              if (bVar5) {
                traverseGroupDecl(this,child,true);
              }
            }
          }
          else {
            if ((typeName != (XMLCh *)0x0) && (*typeName != 0)) {
              local_60 = fullNameId;
              bVar5 = ValueVectorOf<unsigned_int>::containsElement
                                (this->fGlobalDeclarations[3],&local_60,0);
              if (bVar5 != false) {
                reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x35,typeName,
                                  (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
                goto LAB_0010f77f;
              }
              local_60 = fullNameId;
              ValueVectorOf<unsigned_int>::addElement(this->fGlobalDeclarations[3],&local_60);
            }
            if (typeName == (XMLCh *)0x0) {
LAB_0010f5e2:
              bVar5 = true;
            }
            else {
              bVar5 = RefHashTableOf<xercesc_2_7::XMLAttDef>::containsKey
                                (this->fAttributeDeclRegistry,typeName);
              if (bVar5 != true) goto LAB_0010f5e2;
              bVar5 = false;
            }
            if (bVar5) {
              traverseAttributeDecl(this,child,(ComplexTypeInfo *)0x0,true);
            }
          }
        }
        else {
          if ((typeName != (XMLCh *)0x0) && (*typeName != 0)) {
            local_60 = fullNameId;
            bVar5 = ValueVectorOf<unsigned_int>::containsElement
                              (this->fGlobalDeclarations[4],&local_60,0);
            if (bVar5 != false) {
              reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x65,
                                (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP,typeName,(XMLCh *)0x0,
                                (XMLCh *)0x0);
              goto LAB_0010f77f;
            }
            local_60 = fullNameId;
            ValueVectorOf<unsigned_int>::addElement(this->fGlobalDeclarations[4],&local_60);
          }
          if (typeName == (XMLCh *)0x0) {
LAB_0010f4c4:
            bVar5 = true;
          }
          else {
            bVar5 = RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::containsKey
                              (this->fAttGroupRegistry,typeName);
            if (bVar5 != true) goto LAB_0010f4c4;
            bVar5 = false;
          }
          if (bVar5) {
            traverseAttributeGroupDecl(this,child,(ComplexTypeInfo *)0x0,true);
          }
        }
      }
      else {
        if ((typeName != (XMLCh *)0x0) && (*typeName != 0)) {
          local_64 = fullNameId;
          bVar5 = ValueVectorOf<unsigned_int>::containsElement
                            (*this->fGlobalDeclarations,&local_64,0);
          if (bVar5 == false) {
            local_60 = fullNameId;
            bVar5 = ValueVectorOf<unsigned_int>::containsElement
                              (this->fGlobalDeclarations[1],&local_60,0);
            if (bVar5 != false) goto LAB_0010f264;
            bVar5 = false;
          }
          else {
LAB_0010f264:
            bVar5 = true;
          }
          if (bVar5) {
            reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,100,
                              (XMLCh *)&SchemaSymbols::fgELT_COMPLEXTYPE,typeName,
                              (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE,(XMLCh *)0x0);
            goto LAB_0010f77f;
          }
          local_60 = fullNameId;
          ValueVectorOf<unsigned_int>::addElement(this->fGlobalDeclarations[1],&local_60);
        }
        traverseComplexTypeDecl(this,child,true,(XMLCh *)0x0);
      }
    }
    else {
      if ((typeName != (XMLCh *)0x0) && (*typeName != 0)) {
        local_64 = fullNameId;
        bVar5 = ValueVectorOf<unsigned_int>::containsElement(*this->fGlobalDeclarations,&local_64,0)
        ;
        if (bVar5 == false) {
          local_60 = fullNameId;
          bVar5 = ValueVectorOf<unsigned_int>::containsElement
                            (this->fGlobalDeclarations[1],&local_60,0);
          if (bVar5 != false) goto LAB_0010f143;
          bVar5 = false;
        }
        else {
LAB_0010f143:
          bVar5 = true;
        }
        if (bVar5) {
          reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,100,
                            (XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE,typeName,
                            (XMLCh *)&SchemaSymbols::fgELT_COMPLEXTYPE,(XMLCh *)0x0);
          goto LAB_0010f77f;
        }
        local_60 = fullNameId;
        ValueVectorOf<unsigned_int>::addElement(*this->fGlobalDeclarations,&local_60);
      }
      traverseSimpleTypeDecl(this,child,true,0);
    }
LAB_0010f77f:
    child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode);
  } while( true );
  bVar5 = XMLScanner::getGenerateSyntheticAnnotations(this->fScanner);
  if (bVar5 != false) {
    pVVar8 = SchemaInfo::getNonXSAttList(this->fSchemaInfo);
    uVar7 = ValueVectorOf<xercesc_2_7::DOMNode*>::size(pVVar8);
    if ((uVar7 != 0) && (!bVar4)) {
      bVar4 = true;
      goto LAB_0010f7e1;
    }
  }
  bVar4 = false;
LAB_0010f7e1:
  if (bVar4) {
    pXVar1 = (XSAnnotation *)this->fSchemaGrammar;
    pVVar8 = SchemaInfo::getNonXSAttList(this->fSchemaInfo);
    generateSyntheticAnnotation(this,root,pVVar8);
    xercesc_2_7::SchemaGrammar::addAnnotation(pXVar1);
  }
  recursingAnonTypes = SchemaInfo::getRecursingAnonTypes(this->fSchemaInfo);
  if (recursingAnonTypes != (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)0x0) {
    recursingTypeNames = SchemaInfo::getRecursingTypeNames(this->fSchemaInfo);
    recurseSize = ValueVectorOf<const_xercesc_2_7::DOMElement*>::size(recursingAnonTypes);
    for (i = 0; i < recurseSize; i = i + 1) {
      ppuVar10 = ValueVectorOf<short_unsigned_int_const*>::elementAt(recursingTypeNames,i);
      pXVar9 = *ppuVar10;
      ppDVar11 = ValueVectorOf<const_xercesc_2_7::DOMElement*>::elementAt(recursingAnonTypes,i);
      traverseComplexTypeDecl(this,*ppDVar11,false,pXVar9);
    }
    ValueVectorOf<const_xercesc_2_7::DOMElement*>::removeAllElements(recursingAnonTypes);
    ValueVectorOf<short_unsigned_int_const*>::removeAllElements(recursingTypeNames);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::preprocessChildren(TraverseSchema *this,DOMElement *root)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  DOMElement *child;
  XMLCh *name;
  XMLCh *str1;
  
  child = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&root->super_DOMNode);
  do {
    if (child == (DOMElement *)0x0) {
      return;
    }
    iVar2 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    str1 = (XMLCh *)CONCAT44(extraout_var,iVar2);
    bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    if (bVar1 == false) {
      bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_INCLUDE);
      if (bVar1 == false) {
        bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_IMPORT);
        if (bVar1 == false) {
          bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_REDEFINE);
          if (bVar1 == false) {
            return;
          }
          preprocessRedefine(this,child);
        }
        else {
          preprocessImport(this,child);
        }
      }
      else {
        preprocessInclude(this,child);
      }
    }
    child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode);
  } while( true );
}


DOMElement * __thiscall
xercesc_2_7::TraverseSchema::checkContent
          (TraverseSchema *this,DOMElement *rootElem,DOMElement *contentElem,bool isEmpty)

{
  bool bVar1;
  int iVar2;
  XMLCh *text1;
  undefined4 extraout_var;
  XSAnnotation *pXVar3;
  DOMElement *elem;
  undefined4 extraout_var_00;
  DOMElement *content;
  XMLCh *name;
  
  text1 = getElementAttValue(this,rootElem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  this->fAnnotation = (XSAnnotation *)0x0;
  if (contentElem == (DOMElement *)0x0) {
    if (isEmpty != true) {
      reportSchemaError(this,rootElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x22,text1,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
    elem = (DOMElement *)0x0;
  }
  else {
    iVar2 = (*(contentElem->super_DOMNode)._vptr_DOMNode[0x18])(contentElem);
    bVar1 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar2),
                              (XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    elem = contentElem;
    if (bVar1 != false) {
      pXVar3 = traverseAnnotationDecl(this,contentElem,this->fNonXSAttList,false);
      this->fAnnotation = pXVar3;
      elem = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&contentElem->super_DOMNode);
      if (elem == (DOMElement *)0x0) {
        if (isEmpty != true) {
          reportSchemaError(this,contentElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x22,text1,
                            (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
        }
        elem = (DOMElement *)0x0;
      }
      else {
        iVar2 = (*(elem->super_DOMNode)._vptr_DOMNode[0x18])(elem);
        bVar1 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar2),
                                  (XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
        if (bVar1 != false) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x44,text1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
          elem = (DOMElement *)0x0;
        }
      }
    }
  }
  return elem;
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::getDatatypeValidator
          (TraverseSchema *this,XMLCh *uriStr,XMLCh *localPartStr)

{
  bool bVar1;
  int iVar2;
  DatatypeValidator *pDVar3;
  long *this_00;
  DatatypeValidatorFactory *pDVar4;
  XMLCh *pXVar5;
  DatatypeValidator *dv;
  Grammar *grammar;
  
  dv = (DatatypeValidator *)0x0;
  bVar1 = XMLString::equals(uriStr,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  if (bVar1 != false) {
    pDVar3 = DatatypeValidatorFactory::getDatatypeValidator(this->fDatatypeRegistry,localPartStr);
    return pDVar3;
  }
  XMLBuffer::set(&this->fBuffer,uriStr);
  XMLBuffer::append(&this->fBuffer,0x2c);
  XMLBuffer::append(&this->fBuffer,localPartStr);
  if ((uriStr == (XMLCh *)0x0) ||
     (bVar1 = XMLString::equals(uriStr,this->fTargetNSURIString), bVar1 == true)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    this_00 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
    if ((this_00 == (long *)0x0) || (iVar2 = (**(code **)(*this_00 + 0x28))(this_00), iVar2 != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pDVar4 = SchemaGrammar::getDatatypeRegistry((SchemaGrammar *)this_00);
      pXVar5 = XMLBuffer::getRawBuffer(&this->fBuffer);
      dv = DatatypeValidatorFactory::getDatatypeValidator(pDVar4,pXVar5);
    }
    return dv;
  }
  pDVar4 = this->fDatatypeRegistry;
  pXVar5 = XMLBuffer::getRawBuffer(&this->fBuffer);
  pDVar3 = DatatypeValidatorFactory::getDatatypeValidator(pDVar4,pXVar5);
  return pDVar3;
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::checkForSimpleTypeValidator
          (TraverseSchema *this,DOMElement *content,int baseRefContext)

{
  DatatypeValidator *pDVar1;
  XMLCh *text1;
  DatatypeValidator *baseValidator;
  XMLCh *name;
  
  pDVar1 = traverseSimpleTypeDecl(this,content,false,baseRefContext);
  if (pDVar1 == (DatatypeValidator *)0x0) {
    text1 = getElementAttValue(this,content,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
    reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x23,text1,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
  return pDVar1;
}


ComplexTypeInfo * __thiscall
xercesc_2_7::TraverseSchema::checkForComplexTypeInfo(TraverseSchema *this,DOMElement *content)

{
  RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this_00;
  int iVar1;
  void *key;
  XMLCh *text1;
  int typeNameIndex;
  ComplexTypeInfo *baseTypeInfo;
  XMLCh *name;
  
  iVar1 = traverseComplexTypeDecl(this,content,false,(XMLCh *)0x0);
  baseTypeInfo = (ComplexTypeInfo *)0x0;
  if (iVar1 != -1) {
    this_00 = this->fComplexTypeRegistry;
    key = (void *)(**(code **)(*(long *)this->fStringPool + 0x50))(this->fStringPool,iVar1);
    baseTypeInfo = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get(this_00,key);
    if (baseTypeInfo != (ComplexTypeInfo *)0x0) {
      return baseTypeInfo;
    }
  }
  text1 = getElementAttValue(this,content,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
  reportSchemaError(this,content,(XMLCh *)&XMLUni::fgXMLErrDomain,0x24,text1,(XMLCh *)0x0,
                    (XMLCh *)0x0,(XMLCh *)0x0);
  return baseTypeInfo;
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::findDTValidator
          (TraverseSchema *this,DOMElement *elem,XMLCh *derivedTypeName,XMLCh *baseTypeName,
          int baseRefContext)

{
  SchemaInfo *toRestore;
  bool bVar1;
  uint namespaceURI;
  uint uVar2;
  XMLCh *pXVar3;
  SchemaInfo **localPartStr;
  SchemaInfo *this_00;
  DOMElement *childElem;
  ListType infoType;
  int saveScope;
  uint uriId;
  DatatypeValidator *baseValidator;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uri;
  SchemaInfo *saveInfo;
  SchemaInfo *impInfo;
  DOMElement *baseTypeNode;
  
  pXVar3 = getPrefix(this,baseTypeName);
  localPartStr = (SchemaInfo **)getLocalPart(this,baseTypeName);
  pXVar3 = resolvePrefixToURI(this,elem,pXVar3);
  baseValidator = getDatatypeValidator(this,pXVar3,(XMLCh *)localPartStr);
  if (baseValidator == (DatatypeValidator *)0x0) {
    infoType = INCLUDE;
    toRestore = this->fSchemaInfo;
    uVar2 = this->fCurrentScope;
    bVar1 = XMLString::equals(pXVar3,this->fTargetNSURIString);
    if (((bVar1 == true) || (pXVar3 == (XMLCh *)0x0)) || (*pXVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      namespaceURI = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
      bVar1 = SchemaInfo::isImportingNS(this->fSchemaInfo,namespaceURI);
      if (bVar1 != true) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,pXVar3,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        return (DatatypeValidator *)0x0;
      }
      this_00 = SchemaInfo::getImportInfo(this->fSchemaInfo,namespaceURI);
      if ((this_00 == (SchemaInfo *)0x0) ||
         (bVar1 = SchemaInfo::getProcessed(this_00), bVar1 != false)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return (DatatypeValidator *)0x0;
      }
      infoType = IMPORT;
      restoreSchemaInfo(this,this_00,IMPORT,0xfffffffe);
    }
    childElem = (DOMElement *)
                xercesc_2_7::SchemaInfo::getTopLevelComponent
                          ((ushort)this->fSchemaInfo,(ushort *)0x1,
                           (ushort *)&SchemaSymbols::fgELT_SIMPLETYPE,localPartStr);
    if ((childElem != (DOMElement *)0x0) &&
       (baseValidator = traverseSimpleTypeDecl(this,childElem,true,0),
       toRestore != this->fSchemaInfo)) {
      restoreSchemaInfo(this,toRestore,infoType,uVar2);
    }
  }
  if (baseValidator == (DatatypeValidator *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x28,baseTypeName,derivedTypeName
                      ,(XMLCh *)0x0,(XMLCh *)0x0);
  }
  else {
    uVar2 = DatatypeValidator::getFinalSet(baseValidator);
    if ((uVar2 & baseRefContext) != 0) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x45,baseTypeName,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      baseValidator = (DatatypeValidator *)0x0;
    }
  }
  return baseValidator;
}


XMLCh * __thiscall
xercesc_2_7::TraverseSchema::resolvePrefixToURI(TraverseSchema *this,DOMElement *elem,XMLCh *prefix)

{
  NamespaceScope *pNVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int nameSpaceIndex;
  XMLCh *uriStr;
  
  pNVar1 = this->fNamespaceScope;
  SchemaInfo::getNamespaceScopeLevel(this->fSchemaInfo);
  uVar2 = xercesc_2_7::NamespaceScope::getNamespaceForPrefix((ushort *)pNVar1,(int)prefix);
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)this->fURIStringPool + 0x50))(this->fURIStringPool,uVar2);
  if ((((puVar3 == (undefined8 *)0x0) || (*(short *)puVar3 == 0)) && (prefix != (XMLCh *)0x0)) &&
     (*prefix != 0)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x25,prefix,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    puVar3 = &XMLUni::fgZeroLenString;
  }
  return (XMLCh *)puVar3;
}


XMLCh * __thiscall
xercesc_2_7::TraverseSchema::resolvePrefixToURI
          (TraverseSchema *this,DOMElement *elem,XMLCh *prefix,uint namespaceDepth)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int nameSpaceIndex;
  XMLCh *uriStr;
  
  uVar1 = xercesc_2_7::NamespaceScope::getNamespaceForPrefix
                    ((ushort *)this->fNamespaceScope,(int)prefix);
  puVar2 = (undefined8 *)
           (**(code **)(*(long *)this->fURIStringPool + 0x50))(this->fURIStringPool,uVar1);
  if ((((puVar2 == (undefined8 *)0x0) || (*(short *)puVar2 == 0)) && (prefix != (XMLCh *)0x0)) &&
     (*prefix != 0)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x25,prefix,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    puVar2 = &XMLUni::fgZeroLenString;
  }
  return (XMLCh *)puVar2;
}


SchemaElementDecl * __thiscall
xercesc_2_7::TraverseSchema::processElementDeclRef
          (TraverseSchema *this,DOMElement *elem,XMLCh *refName)

{
  long lVar1;
  DOMElement *pDVar2;
  SchemaElementDecl *elem_00;
  long in_FS_OFFSET;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  DOMElement *content;
  SchemaElementDecl *refElemDecl;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::GeneralAttributeCheck::checkAttributes
            ((DOMElement *)&this->fAttributeCheck,(ushort)elem,(TraverseSchema *)0x11,SUB81(this,0),
             (ValueVectorOf *)0x0);
  pDVar2 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  pDVar2 = checkContent(this,elem,pDVar2,true);
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  if (pDVar2 != (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x2a,
                      (XMLCh *)&SchemaSymbols::fgELT_ELEMENT,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0)
    ;
  }
  elem_00 = getGlobalElemDecl(this,elem,refName);
  if (elem_00 == (SchemaElementDecl *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x26,refName,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
  else {
    if (this->fCurrentComplexType != (ComplexTypeInfo *)0x0) {
      ComplexTypeInfo::addElement(this->fCurrentComplexType,elem_00);
    }
    if (this->fCurrentGroupInfo != (XercesGroupInfo *)0x0) {
      XercesGroupInfo::addElement(this->fCurrentGroupInfo,elem_00);
    }
  }
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return elem_00;
}


int __thiscall
xercesc_2_7::TraverseSchema::parseBlockSet
          (TraverseSchema *this,DOMElement *elem,int blockType,bool isRoot)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  XMLCh *str1;
  XMLCh *str1_00;
  long in_FS_OFFSET;
  int blockSet;
  XMLCh *blockVal;
  XMLCh *token;
  XMLStringTokenizer tokenizer;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (isRoot == false) {
    str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_BLOCK,false);
  }
  else {
    str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_BLOCKDEFAULT,false);
  }
  if ((str1 == (XMLCh *)0x0) || (*str1 == 0)) {
    blockSet = SchemaInfo::getBlockDefault(this->fSchemaInfo);
  }
  else {
    blockSet = 0;
    bVar2 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_POUNDALL);
    if (bVar2 == false) {
      xercesc_2_7::XMLStringTokenizer::XMLStringTokenizer
                (&tokenizer,str1,this->fGrammarPoolMemoryManager);
      while (cVar3 = xercesc_2_7::XMLStringTokenizer::hasMoreTokens(), cVar3 != '\0') {
        str1_00 = (XMLCh *)xercesc_2_7::XMLStringTokenizer::nextToken();
        bVar2 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgATTVAL_SUBSTITUTION);
        if ((bVar2 == false) || (blockType != 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if ((blockSet & 1U) == 0) {
            blockSet = blockSet + 1;
          }
          else {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x46);
          }
        }
        else {
          bVar2 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgATTVAL_EXTENSION);
          if (bVar2 == false) {
            bVar2 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgATTVAL_RESTRICTION);
            if (bVar2 == false) {
              reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4b,str1,(XMLCh *)0x0,
                                (XMLCh *)0x0,(XMLCh *)0x0);
            }
            else if ((blockSet & 4U) == 0) {
              blockSet = blockSet + 4;
            }
            else {
              reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4a);
            }
          }
          else if ((blockSet & 2U) == 0) {
            blockSet = blockSet + 2;
          }
          else {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x48);
          }
        }
      }
      if (blockSet == 0) {
        blockSet = SchemaInfo::getBlockDefault(this->fSchemaInfo);
      }
      xercesc_2_7::XMLStringTokenizer::_XMLStringTokenizer(&tokenizer);
    }
    else {
      blockSet = 7;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return blockSet;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


int __thiscall
xercesc_2_7::TraverseSchema::parseFinalSet
          (TraverseSchema *this,DOMElement *elem,int finalType,bool isRoot)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  XMLCh *str1;
  XMLCh *str1_00;
  long in_FS_OFFSET;
  int finalSet;
  XMLCh *finalVal;
  XMLCh *token;
  XMLStringTokenizer tokenizer;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (isRoot == false) {
    str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_FINAL,false);
  }
  else {
    str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_FINALDEFAULT,false);
  }
  if ((str1 == (XMLCh *)0x0) || (*str1 == 0)) {
    finalSet = SchemaInfo::getFinalDefault(this->fSchemaInfo);
  }
  else {
    finalSet = 0;
    bVar2 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_POUNDALL);
    if (bVar2 == false) {
      xercesc_2_7::XMLStringTokenizer::XMLStringTokenizer
                (&tokenizer,str1,this->fGrammarPoolMemoryManager);
      while (cVar3 = xercesc_2_7::XMLStringTokenizer::hasMoreTokens(), cVar3 != '\0') {
        str1_00 = (XMLCh *)xercesc_2_7::XMLStringTokenizer::nextToken();
        bVar2 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgELT_UNION);
        if ((bVar2 == false) || (finalType != 2)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if ((finalSet & 0x10U) == 0) {
            finalSet = finalSet + 0x10;
          }
          else {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x47);
          }
        }
        else {
          bVar2 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgATTVAL_EXTENSION);
          if ((bVar2 == false) || (finalType == 2)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if ((finalSet & 2U) == 0) {
              finalSet = finalSet + 2;
            }
            else {
              reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x48);
            }
          }
          else {
            bVar2 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgELT_LIST);
            if ((bVar2 == false) || (finalType != 2)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              if ((finalSet & 8U) == 0) {
                finalSet = finalSet + 8;
              }
              else {
                reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x49);
              }
            }
            else {
              bVar2 = XMLString::equals(str1_00,(XMLCh *)&SchemaSymbols::fgATTVAL_RESTRICTION);
              if (bVar2 == false) {
                reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4c,str1,(XMLCh *)0x0,
                                  (XMLCh *)0x0,(XMLCh *)0x0);
              }
              else if ((finalSet & 4U) == 0) {
                finalSet = finalSet + 4;
              }
              else {
                reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4a);
              }
            }
          }
        }
      }
      if (finalSet == 0) {
        finalSet = SchemaInfo::getFinalDefault(this->fSchemaInfo);
      }
      xercesc_2_7::XMLStringTokenizer::_XMLStringTokenizer(&tokenizer);
    }
    else {
      finalSet = 0x1e;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return finalSet;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


DOMElement * __thiscall
xercesc_2_7::TraverseSchema::checkIdentityConstraintContent
          (TraverseSchema *this,DOMElement *content)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  DOMElement *child;
  
  child = content;
  if (content != (DOMElement *)0x0) {
    do {
      iVar2 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
      bVar1 = isIdentityConstraintName(this,(XMLCh *)CONCAT44(extraout_var,iVar2));
      if (bVar1 != true) {
        return child;
      }
      child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode);
    } while (child != (DOMElement *)0x0);
  }
  return child;
}


bool __thiscall
xercesc_2_7::TraverseSchema::isIdentityConstraintName(TraverseSchema *this,XMLCh *name)

{
  bool bVar1;
  
  bVar1 = XMLString::equals(name,(XMLCh *)&SchemaSymbols::fgELT_KEY);
  if (((bVar1 == false) &&
      (bVar1 = XMLString::equals(name,(XMLCh *)&SchemaSymbols::fgELT_KEYREF), bVar1 == false)) &&
     (bVar1 = XMLString::equals(name,(XMLCh *)&SchemaSymbols::fgELT_UNIQUE), bVar1 == false)) {
    return false;
  }
  return true;
}


XMLCh * __thiscall
xercesc_2_7::TraverseSchema::checkTypeFromAnotherSchema
          (TraverseSchema *this,DOMElement *elem,XMLCh *typeStr)

{
  bool bVar1;
  XMLCh *pXVar2;
  XMLCh *prefix;
  XMLCh *typeURI;
  
  pXVar2 = getPrefix(this,typeStr);
  pXVar2 = resolvePrefixToURI(this,elem,pXVar2);
  bVar1 = XMLString::equals(pXVar2,this->fTargetNSURIString);
  if ((bVar1 == true) ||
     (bVar1 = XMLString::equals(pXVar2,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA),
     bVar1 == true)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    pXVar2 = (XMLCh *)0x0;
  }
  return pXVar2;
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::getElementTypeValidator
          (TraverseSchema *this,DOMElement *elem,XMLCh *typeStr,bool *noErrorDetected,
          XMLCh *otherSchemaURI)

{
  uint saveScope_00;
  SchemaInfo *toRestore;
  bool bVar1;
  uint namespaceURI;
  SchemaInfo **localPartStr;
  SchemaInfo *this_00;
  XMLCh *prefix_00;
  DOMElement *childElem;
  ListType infoType;
  int saveScope;
  uint uriId;
  XMLCh *typeURI;
  DatatypeValidator *dv;
  XMLCh *localPart;
  SchemaInfo *saveInfo;
  SchemaInfo *impInfo;
  XMLCh *prefix;
  DOMElement *typeElem;
  
  localPartStr = (SchemaInfo **)getLocalPart(this,typeStr);
  infoType = INCLUDE;
  toRestore = this->fSchemaInfo;
  saveScope_00 = this->fCurrentScope;
  if ((otherSchemaURI == (XMLCh *)0x0) || (*otherSchemaURI == 0)) {
    prefix_00 = getPrefix(this,typeStr);
    typeURI = resolvePrefixToURI(this,elem,prefix_00);
    dv = getDatatypeValidator(this,typeURI,(XMLCh *)localPartStr);
  }
  else {
    namespaceURI = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
    bVar1 = SchemaInfo::isImportingNS(this->fSchemaInfo,namespaceURI);
    if (bVar1 != true) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,otherSchemaURI,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      return (DatatypeValidator *)0x0;
    }
    dv = getDatatypeValidator(this,otherSchemaURI,(XMLCh *)localPartStr);
    if (dv != (DatatypeValidator *)0x0) {
      return dv;
    }
    this_00 = SchemaInfo::getImportInfo(this->fSchemaInfo,namespaceURI);
    if ((this_00 == (SchemaInfo *)0x0) ||
       (bVar1 = SchemaInfo::getProcessed(this_00), bVar1 != false)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x27,otherSchemaURI,
                        (XMLCh *)localPartStr,(XMLCh *)0x0,(XMLCh *)0x0);
      return (DatatypeValidator *)0x0;
    }
    infoType = IMPORT;
    restoreSchemaInfo(this,this_00,IMPORT,0xfffffffe);
    typeURI = otherSchemaURI;
  }
  if (dv == (DatatypeValidator *)0x0) {
    bVar1 = XMLString::equals(typeURI,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    if ((bVar1 == true) &&
       (bVar1 = XMLString::equals(this->fTargetNSURIString,
                                  (XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA), bVar1 == false))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (childElem = (DOMElement *)
                    xercesc_2_7::SchemaInfo::getTopLevelComponent
                              ((ushort)this->fSchemaInfo,(ushort *)0x1,
                               (ushort *)&SchemaSymbols::fgELT_SIMPLETYPE,localPartStr),
       childElem != (DOMElement *)0x0)) {
      traverseSimpleTypeDecl(this,childElem,true,0);
      dv = getDatatypeValidator(this,typeURI,(XMLCh *)localPartStr);
    }
    if (toRestore != this->fSchemaInfo) {
      restoreSchemaInfo(this,toRestore,infoType,saveScope_00);
    }
    if (dv == (DatatypeValidator *)0x0) {
      *noErrorDetected = false;
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x27,typeURI,
                        (XMLCh *)localPartStr,(XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  return dv;
}


DatatypeValidator * __thiscall
xercesc_2_7::TraverseSchema::getAttrDatatypeValidatorNS
          (TraverseSchema *this,DOMElement *elem,XMLCh *localPart,XMLCh *typeURI)

{
  uint saveScope_00;
  SchemaInfo *toRestore;
  bool bVar1;
  uint namespaceURI;
  SchemaInfo *this_00;
  DOMElement *childElem;
  ListType infoType;
  int saveScope;
  uint uriId;
  DatatypeValidator *dv;
  SchemaInfo *saveInfo;
  SchemaInfo *impInfo;
  DOMElement *typeElem;
  
  dv = getDatatypeValidator(this,typeURI,localPart);
  infoType = INCLUDE;
  toRestore = this->fSchemaInfo;
  saveScope_00 = this->fCurrentScope;
  bVar1 = XMLString::equals(typeURI,this->fTargetNSURIString);
  if (((bVar1 == true) || (typeURI == (XMLCh *)0x0)) || (*typeURI == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    namespaceURI = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
    bVar1 = SchemaInfo::isImportingNS(this->fSchemaInfo,namespaceURI);
    if (bVar1 != true) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,typeURI,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      return (DatatypeValidator *)0x0;
    }
    if (dv == (DatatypeValidator *)0x0) {
      this_00 = SchemaInfo::getImportInfo(this->fSchemaInfo,namespaceURI);
      if ((this_00 == (SchemaInfo *)0x0) ||
         (bVar1 = SchemaInfo::getProcessed(this_00), bVar1 != false)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        return (DatatypeValidator *)0x0;
      }
      infoType = IMPORT;
      restoreSchemaInfo(this,this_00,IMPORT,0xfffffffe);
    }
  }
  if (dv == (DatatypeValidator *)0x0) {
    childElem = (DOMElement *)
                xercesc_2_7::SchemaInfo::getTopLevelComponent
                          ((ushort)this->fSchemaInfo,(ushort *)0x1,
                           (ushort *)&SchemaSymbols::fgELT_SIMPLETYPE,(SchemaInfo **)localPart);
    if (childElem != (DOMElement *)0x0) {
      dv = traverseSimpleTypeDecl(this,childElem,true,0);
    }
    if (toRestore != this->fSchemaInfo) {
      restoreSchemaInfo(this,toRestore,infoType,saveScope_00);
    }
  }
  return dv;
}


ComplexTypeInfo * __thiscall
xercesc_2_7::TraverseSchema::getElementComplexTypeInfo
          (TraverseSchema *this,DOMElement *elem,XMLCh *typeStr,XMLCh *otherSchemaURI)

{
  uint saveScope_00;
  long lVar1;
  SchemaInfo *toRestore;
  MemoryManager *manager;
  bool bVar2;
  uint uVar3;
  int iVar4;
  SchemaInfo **chars;
  XMLCh *pXVar5;
  XMLCh *pXVar6;
  long *this_00;
  RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *pRVar7;
  SchemaInfo *this_01;
  DOMElement *elem_00;
  long in_FS_OFFSET;
  ListType infoType;
  int saveScope;
  uint uriId;
  int typeIndex;
  ComplexTypeInfo *typeInfo;
  XMLCh *localPart;
  XMLCh *prefix;
  XMLCh *typeURI;
  SchemaInfo *saveInfo;
  Grammar *aGrammar;
  SchemaInfo *impInfo;
  DOMElement *typeNode;
  XMLBuffer buffCopy;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  chars = (SchemaInfo **)getLocalPart(this,typeStr);
  pXVar5 = getPrefix(this,typeStr);
  pXVar6 = otherSchemaURI;
  if (otherSchemaURI == (XMLCh *)0x0) {
    pXVar6 = resolvePrefixToURI(this,elem,pXVar5);
  }
  toRestore = this->fSchemaInfo;
  infoType = INCLUDE;
  saveScope_00 = this->fCurrentScope;
  XMLBuffer::set(&this->fBuffer,pXVar6);
  XMLBuffer::append(&this->fBuffer,0x2c);
  XMLBuffer::append(&this->fBuffer,(XMLCh *)chars);
  if (otherSchemaURI == (XMLCh *)0x0) {
    pRVar7 = this->fComplexTypeRegistry;
    pXVar5 = XMLBuffer::getRawBuffer(&this->fBuffer);
    typeInfo = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get(pRVar7,pXVar5);
  }
  else {
    uVar3 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
    bVar2 = SchemaInfo::isImportingNS(this->fSchemaInfo,uVar3);
    if (bVar2 != true) {
      typeInfo = (ComplexTypeInfo *)0x0;
      goto LAB_00111614;
    }
    this_00 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
    if ((this_00 == (long *)0x0) || (iVar4 = (**(code **)(*this_00 + 0x28))(this_00), iVar4 != 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      typeInfo = (ComplexTypeInfo *)0x0;
      goto LAB_00111614;
    }
    pRVar7 = SchemaGrammar::getComplexTypeRegistry((SchemaGrammar *)this_00);
    pXVar5 = XMLBuffer::getRawBuffer(&this->fBuffer);
    typeInfo = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get(pRVar7,pXVar5);
    if (typeInfo != (ComplexTypeInfo *)0x0) goto LAB_00111614;
    this_01 = SchemaInfo::getImportInfo(this->fSchemaInfo,uVar3);
    if ((this_01 == (SchemaInfo *)0x0) ||
       (bVar2 = SchemaInfo::getProcessed(this_01), bVar2 != false)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      typeInfo = (ComplexTypeInfo *)0x0;
      goto LAB_00111614;
    }
    infoType = IMPORT;
    restoreSchemaInfo(this,this_01,IMPORT,0xfffffffe);
  }
  if (typeInfo == (ComplexTypeInfo *)0x0) {
    bVar2 = XMLString::equals(pXVar6,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    if ((bVar2 == true) &&
       (bVar2 = XMLString::equals(this->fTargetNSURIString,
                                  (XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA), bVar2 == false))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (elem_00 = (DOMElement *)
                  xercesc_2_7::SchemaInfo::getTopLevelComponent
                            ((ushort)this->fSchemaInfo,(ushort *)0x0,
                             (ushort *)&SchemaSymbols::fgELT_COMPLEXTYPE,chars),
       elem_00 != (DOMElement *)0x0)) {
      manager = this->fMemoryManager;
      uVar3 = XMLBuffer::getLen(&this->fBuffer);
      XMLBuffer::XMLBuffer(&buffCopy,uVar3 + 1,manager);
      pXVar6 = XMLBuffer::getRawBuffer(&this->fBuffer);
      XMLBuffer::set(&buffCopy,pXVar6);
      traverseComplexTypeDecl(this,elem_00,true,(XMLCh *)0x0);
      pRVar7 = this->fComplexTypeRegistry;
      pXVar6 = XMLBuffer::getRawBuffer(&buffCopy);
      typeInfo = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get(pRVar7,pXVar6);
      XMLBuffer::_XMLBuffer(&buffCopy);
    }
  }
  restoreSchemaInfo(this,toRestore,infoType,saveScope_00);
LAB_00111614:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return typeInfo;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


SchemaElementDecl * __thiscall
xercesc_2_7::TraverseSchema::getGlobalElemDecl(TraverseSchema *this,DOMElement *elem,XMLCh *qName)

{
  uint saveScope_00;
  SchemaInfo *toRestore;
  bool bVar1;
  uint namespaceURI;
  uint uVar2;
  int iVar3;
  XMLCh *pXVar4;
  SchemaInfo **text2;
  long *plVar5;
  SchemaInfo *this_00;
  DOMElement *elem_00;
  ListType infoType;
  int saveScope;
  uint uriId;
  SchemaElementDecl *elemDecl;
  XMLCh *nameURI;
  XMLCh *localPart;
  SchemaInfo *saveInfo;
  Grammar *grammar;
  SchemaInfo *impInfo;
  DOMElement *subsGroupElem;
  
  pXVar4 = getPrefix(this,qName);
  pXVar4 = resolvePrefixToURI(this,elem,pXVar4);
  text2 = (SchemaInfo **)getLocalPart(this,qName);
  toRestore = this->fSchemaInfo;
  infoType = INCLUDE;
  saveScope_00 = this->fCurrentScope;
  namespaceURI = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
  uVar2 = SchemaInfo::getTargetNSURI(this->fSchemaInfo);
  if (uVar2 == namespaceURI) {
    elemDecl = (SchemaElementDecl *)
               (**(code **)(*(long *)this->fSchemaGrammar + 0x58))
                         (this->fSchemaGrammar,this->fTargetNSURI,text2,0,0xfffffffe);
  }
  else {
    bVar1 = SchemaInfo::isImportingNS(this->fSchemaInfo,namespaceURI);
    if (bVar1 != true) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,pXVar4,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      return (SchemaElementDecl *)0x0;
    }
    plVar5 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
    if ((plVar5 == (long *)0x0) || (iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5), iVar3 != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x48,pXVar4,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      return (SchemaElementDecl *)0x0;
    }
    elemDecl = (SchemaElementDecl *)
               (**(code **)(*plVar5 + 0x58))(plVar5,namespaceURI,text2,0,0xfffffffe);
    if (elemDecl == (SchemaElementDecl *)0x0) {
      this_00 = SchemaInfo::getImportInfo(this->fSchemaInfo,namespaceURI);
      if ((this_00 == (SchemaInfo *)0x0) ||
         (bVar1 = SchemaInfo::getProcessed(this_00), bVar1 != false)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x27,pXVar4,(XMLCh *)text2,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        return (SchemaElementDecl *)0x0;
      }
      infoType = IMPORT;
      restoreSchemaInfo(this,this_00,IMPORT,0xfffffffe);
    }
  }
  if (elemDecl == (SchemaElementDecl *)0x0) {
    elem_00 = (DOMElement *)
              xercesc_2_7::SchemaInfo::getTopLevelComponent
                        ((ushort)this->fSchemaInfo,(ushort *)0x5,
                         (ushort *)&SchemaSymbols::fgELT_ELEMENT,text2);
    if (elem_00 != (DOMElement *)0x0) {
      elemDecl = traverseElementDecl(this,elem_00,true);
    }
    if (elemDecl == (SchemaElementDecl *)0x0) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x27,pXVar4,(XMLCh *)text2,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  if (toRestore != this->fSchemaInfo) {
    restoreSchemaInfo(this,toRestore,infoType,saveScope_00);
  }
  return elemDecl;
}


bool __thiscall
xercesc_2_7::TraverseSchema::isSubstitutionGroupValid
          (TraverseSchema *this,DOMElement *elem,SchemaElementDecl *subsElemDecl,
          ComplexTypeInfo *typeInfo,DatatypeValidator *validator,XMLCh *elemName,bool toEmit)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ModelTypes MVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ComplexTypeInfo *pCVar10;
  XMLCh *text2;
  bool subsRestricted;
  int derivationMethod;
  ComplexTypeInfo *elemTypeInfo;
  DatatypeValidator *subsValidator_1;
  ComplexTypeInfo *subsTypeInfo;
  DatatypeValidator *elemDV;
  DatatypeValidator *subsValidator;
  
  bVar1 = false;
  MVar4 = SchemaElementDecl::getModelType(subsElemDecl);
  if (MVar4 == Any) {
    uVar5 = SchemaElementDecl::getFinalSet(subsElemDecl);
    if (((uVar5 & 4) == 0) ||
       ((typeInfo == (ComplexTypeInfo *)0x0 && (validator == (DatatypeValidator *)0x0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return true;
    }
    bVar1 = true;
  }
  else if (typeInfo == (ComplexTypeInfo *)0x0) {
    if (validator == (DatatypeValidator *)0x0) {
      return true;
    }
    plVar8 = (long *)SchemaElementDecl::getDatatypeValidator(subsElemDecl);
    if (plVar8 == (long *)validator) {
      return true;
    }
    if (((plVar8 == (long *)0x0) ||
        (cVar3 = (**(code **)(*plVar8 + 0x48))(plVar8,validator), cVar3 == '\0')) ||
       (uVar5 = SchemaElementDecl::getFinalSet(subsElemDecl), (uVar5 & 4) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  else {
    uVar5 = ComplexTypeInfo::getDerivedBy(typeInfo);
    iVar6 = ComplexTypeInfo::getContentType(typeInfo);
    if (iVar6 == 5) {
      plVar8 = (long *)ComplexTypeInfo::getDatatypeValidator(typeInfo);
      plVar9 = (long *)SchemaElementDecl::getDatatypeValidator(subsElemDecl);
      if (plVar8 == plVar9) {
        return true;
      }
      if ((plVar9 == (long *)0x0) ||
         (cVar3 = (**(code **)(*plVar9 + 0x48))(plVar9,plVar8), cVar3 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar7 = SchemaElementDecl::getFinalSet(subsElemDecl);
        if ((uVar7 & uVar5) == 0) {
          return true;
        }
        bVar1 = true;
      }
    }
    else {
      pCVar10 = SchemaElementDecl::getComplexTypeInfo(subsElemDecl);
      elemTypeInfo = typeInfo;
      if (pCVar10 == typeInfo) {
        return true;
      }
      for (; (elemTypeInfo != (ComplexTypeInfo *)0x0 && (elemTypeInfo != pCVar10));
          elemTypeInfo = ComplexTypeInfo::getBaseComplexTypeInfo(elemTypeInfo)) {
      }
      if (elemTypeInfo != (ComplexTypeInfo *)0x0) {
        uVar7 = SchemaElementDecl::getFinalSet(subsElemDecl);
        if ((uVar7 & uVar5) == 0) {
          return true;
        }
        bVar1 = true;
      }
    }
  }
  if (toEmit != false) {
    if (bVar1) {
      text2 = XMLElementDecl::getBaseName((XMLElementDecl *)subsElemDecl);
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4d,elemName,text2,(XMLCh *)0x0,
                        (XMLCh *)0x0);
    }
    else {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4e,elemName,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  return false;
}


SchemaElementDecl * __thiscall
xercesc_2_7::TraverseSchema::createSchemaElementDecl
          (TraverseSchema *this,DOMElement *elem,XMLCh *name,bool *isDuplicate,XMLCh **valConstraint
          ,bool topLevel)

{
  bool bVar1;
  ushort uVar2;
  XMLCh *str1;
  SchemaElementDecl *pSVar3;
  uint enclosingScope;
  int uriIndex;
  XMLCh *elemForm;
  SchemaElementDecl *other;
  SchemaElementDecl *elemDecl;
  
  enclosingScope = this->fCurrentScope;
  uriIndex = this->fEmptyNamespaceURI;
  if (topLevel == false) {
    str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_FORM,false);
    if ((((str1 == (XMLCh *)0x0) || (*str1 == 0)) &&
        (uVar2 = SchemaInfo::getElemAttrDefaultQualified(this->fSchemaInfo), (uVar2 & 1) != 0)) ||
       (bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_QUALIFIED), bVar1 != false)
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uriIndex = this->fTargetNSURI;
    }
    pSVar3 = (SchemaElementDecl *)
             (**(code **)(*(long *)this->fSchemaGrammar + 0x58))
                       (this->fSchemaGrammar,uriIndex,name,0,enclosingScope);
    if (pSVar3 != (SchemaElementDecl *)0x0) {
      *isDuplicate = true;
      return pSVar3;
    }
  }
  else {
    uriIndex = this->fTargetNSURI;
    enclosingScope = 0xfffffffe;
  }
  pSVar3 = (SchemaElementDecl *)
           xercesc_2_7::XMemory::operator_new(0x98,this->fGrammarPoolMemoryManager);
  xercesc_2_7::SchemaElementDecl::SchemaElementDecl
            (pSVar3,(ushort *)&XMLUni::fgZeroLenString,name,uriIndex,Any,enclosingScope,
             this->fGrammarPoolMemoryManager);
  XMLElementDecl::setCreateReason((XMLElementDecl *)pSVar3,Declared);
  if (topLevel != false) {
    SchemaElementDecl::setPSVIScope(pSVar3,SCP_GLOBAL);
  }
  processElemDeclAttrs(this,elem,pSVar3,valConstraint,topLevel);
  return pSVar3;
}


void __thiscall
xercesc_2_7::TraverseSchema::processAttributeDeclRef
          (TraverseSchema *this,DOMElement *elem,ComplexTypeInfo *typeInfo,XMLCh *refName,
          XMLCh *useAttr,XMLCh *defaultVal,XMLCh *fixedVal)

{
  uint saveScope_00;
  SchemaInfo *toRestore;
  code *pcVar1;
  MemoryManager *pMVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  DefAttTypes DVar9;
  ValidatorType VVar10;
  AttTypes AVar11;
  XMLCh *pXVar12;
  SchemaInfo **baseName;
  SchemaAttDef *pSVar13;
  long *plVar14;
  RefHashTableOf_xercesc_2_7__XMLAttDef_ *this_00;
  SchemaInfo *this_01;
  DOMElement *elem_00;
  QName *this_02;
  XMLCh *pXVar15;
  XMLCh *pXVar16;
  ValidationContext *pVVar17;
  bool invalidAttUse;
  bool toClone;
  bool required;
  bool prohibited;
  ListType infoType;
  uint attURI;
  int saveScope;
  uint uriId;
  DefAttTypes refAttDefType;
  SchemaAttDef *refAttDef;
  XMLCh *valueConstraint;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uriStr;
  SchemaInfo *saveInfo;
  Grammar *grammar;
  SchemaInfo *impInfo;
  DOMElement *referredAttribute;
  XMLCh *refAttValue;
  DatatypeValidator *attDV;
  QName *attQName;
  SchemaAttDef *attDef;
  OutOfMemoryException *anon_var_0;
  XMLException *excep;
  
  if ((typeInfo == (ComplexTypeInfo *)0x0) &&
     (this->fCurrentAttGroupInfo == (XercesAttGroupInfo *)0x0)) {
    return;
  }
  pXVar12 = getPrefix(this,refName);
  baseName = (SchemaInfo **)getLocalPart(this,refName);
  pXVar12 = resolvePrefixToURI(this,elem,pXVar12);
  uVar7 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,pXVar12);
  if ((typeInfo == (ComplexTypeInfo *)0x0) ||
     (pSVar13 = ComplexTypeInfo::getAttDef(typeInfo,(XMLCh *)baseName,uVar7),
     pSVar13 == (SchemaAttDef *)0x0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    if ((this->fCurrentAttGroupInfo == (XercesAttGroupInfo *)0x0) ||
       (cVar3 = xercesc_2_7::XercesAttGroupInfo::containsAttribute
                          ((ushort *)this->fCurrentAttGroupInfo,(uint)baseName), cVar3 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x54,pXVar12,(XMLCh *)baseName,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      return;
    }
    toRestore = this->fSchemaInfo;
    infoType = INCLUDE;
    refAttDef = (SchemaAttDef *)0x0;
    saveScope_00 = this->fCurrentScope;
    bVar4 = XMLString::equals(pXVar12,this->fTargetNSURIString);
    if (bVar4 != true) {
      iVar8 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
      bVar4 = SchemaInfo::isImportingNS(this->fSchemaInfo,iVar8);
      if (bVar4 != true) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,pXVar12,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        return;
      }
      plVar14 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
      if ((plVar14 == (long *)0x0) || (iVar8 = (**(code **)(*plVar14 + 0x28))(plVar14), iVar8 != 1))
      {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x48,pXVar12,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        return;
      }
      this_00 = SchemaGrammar::getAttributeDeclRegistry((SchemaGrammar *)plVar14);
      refAttDef = (SchemaAttDef *)RefHashTableOf<xercesc_2_7::XMLAttDef>::get(this_00,baseName);
      if (refAttDef == (SchemaAttDef *)0x0) {
        this_01 = SchemaInfo::getImportInfo(this->fSchemaInfo,uVar7);
        if ((this_01 == (SchemaInfo *)0x0) ||
           (bVar4 = SchemaInfo::getProcessed(this_01), bVar4 != false)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x28,refName,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
          return;
        }
        infoType = IMPORT;
        restoreSchemaInfo(this,this_01,IMPORT,0xfffffffe);
      }
    }
    if (refAttDef == (SchemaAttDef *)0x0) {
      bVar4 = RefHashTableOf<xercesc_2_7::XMLAttDef>::containsKey
                        (this->fAttributeDeclRegistry,baseName);
      if ((bVar4 == false) &&
         (elem_00 = (DOMElement *)
                    xercesc_2_7::SchemaInfo::getTopLevelComponent
                              ((ushort)this->fSchemaInfo,(ushort *)0x3,
                               (ushort *)&SchemaSymbols::fgELT_ATTRIBUTE,baseName),
         elem_00 != (DOMElement *)0x0)) {
        traverseAttributeDecl(this,elem_00,(ComplexTypeInfo *)0x0,true);
      }
      refAttDef = (SchemaAttDef *)
                  RefHashTableOf<xercesc_2_7::XMLAttDef>::get(this->fAttributeDeclRegistry,baseName)
      ;
    }
    if (toRestore != this->fSchemaInfo) {
      restoreSchemaInfo(this,toRestore,infoType,saveScope_00);
    }
    if (refAttDef != (SchemaAttDef *)0x0) {
      DVar9 = XMLAttDef::getDefaultType((XMLAttDef *)refAttDef);
      pXVar12 = XMLAttDef::getValue((XMLAttDef *)refAttDef);
      if ((DVar9 == Fixed) &&
         ((defaultVal != (XMLCh *)0x0 ||
          ((fixedVal != (XMLCh *)0x0 && (bVar4 = XMLString::equals(fixedVal,pXVar12), bVar4 != true)
           ))))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x97,refName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      plVar14 = (long *)SchemaAttDef::getDatatypeValidator(refAttDef);
      if ((plVar14 == (long *)0x0) ||
         (VVar10 = DatatypeValidator::getType((DatatypeValidator *)plVar14), VVar10 != ID)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if (this->fCurrentAttGroupInfo == (XercesAttGroupInfo *)0x0) {
          bVar5 = ComplexTypeInfo::containsAttWithTypeId(typeInfo);
          if (bVar5 != false) {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x99,refName,(XMLCh *)0x0,
                              (XMLCh *)0x0,(XMLCh *)0x0);
            return;
          }
          ComplexTypeInfo::setAttWithTypeId(typeInfo,true);
        }
        else {
          bVar5 = XercesAttGroupInfo::containsTypeWithId(this->fCurrentAttGroupInfo);
          if (bVar5 != false) {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9a,refName,(XMLCh *)0x0,
                              (XMLCh *)0x0,(XMLCh *)0x0);
            return;
          }
          XercesAttGroupInfo::setTypeWithId(this->fCurrentAttGroupInfo,true);
        }
      }
      bVar5 = XMLString::equals(useAttr,(XMLCh *)&SchemaSymbols::fgATTVAL_REQUIRED);
      bVar6 = XMLString::equals(useAttr,(XMLCh *)&SchemaSymbols::fgATTVAL_PROHIBITED);
      this_02 = SchemaAttDef::getAttName(refAttDef);
      pXVar15 = QName::getPrefix(this_02);
      pXVar16 = QName::getLocalPart(this_02);
      uVar7 = QName::getURI(this_02);
      AVar11 = XMLAttDef::getType((XMLAttDef *)refAttDef);
      pSVar13 = (SchemaAttDef *)
                xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
      xercesc_2_7::SchemaAttDef::SchemaAttDef
                (pSVar13,pXVar15,pXVar16,uVar7,pXVar12,AVar11,DVar9,(ushort *)0x0,
                 this->fGrammarPoolMemoryManager);
      SchemaAttDef::setBaseAttDecl(pSVar13,refAttDef);
      SchemaAttDef::setPSVIScope(pSVar13,SCP_GLOBAL);
      if (DVar9 == Fixed) {
        if ((bVar5 != false) && (!bVar4)) {
          XMLAttDef::setDefaultType((XMLAttDef *)pSVar13,Required_And_Fixed);
        }
      }
      else if (bVar6 == false) {
        valueConstraint = defaultVal;
        if (bVar5 == false) {
          if (fixedVal == (XMLCh *)0x0) {
            if (defaultVal != (XMLCh *)0x0) {
              XMLAttDef::setDefaultType((XMLAttDef *)pSVar13,DefAttTypes_Min);
            }
          }
          else {
            XMLAttDef::setDefaultType((XMLAttDef *)pSVar13,Fixed);
            valueConstraint = fixedVal;
          }
        }
        else if (fixedVal == (XMLCh *)0x0) {
          XMLAttDef::setDefaultType((XMLAttDef *)pSVar13,Required);
        }
        else {
          XMLAttDef::setDefaultType((XMLAttDef *)pSVar13,Required_And_Fixed);
          valueConstraint = fixedVal;
        }
        if (valueConstraint != (XMLCh *)0x0) {
          if (plVar14 != (long *)0x0) {
            VVar10 = DatatypeValidator::getType((DatatypeValidator *)plVar14);
            if (VVar10 == ID) {
              reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x98,
                                (XMLCh *)&SchemaSymbols::fgATT_REF,refName,(XMLCh *)0x0,(XMLCh *)0x0
                               );
            }
            else {
              pcVar1 = *(code **)(*plVar14 + 0x40);
              pMVar2 = this->fMemoryManager;
              pVVar17 = SchemaGrammar::getValidationContext(this->fSchemaGrammar);
              (*pcVar1)(plVar14,valueConstraint,pVVar17,pMVar2);
            }
          }
          XMLAttDef::setValue((XMLAttDef *)pSVar13,valueConstraint);
        }
      }
      else {
        XMLAttDef::setDefaultType((XMLAttDef *)pSVar13,DefAttTypes_Max);
      }
      SchemaAttDef::setDatatypeValidator(pSVar13,(DatatypeValidator *)plVar14);
      if (typeInfo != (ComplexTypeInfo *)0x0) {
        xercesc_2_7::ComplexTypeInfo::addAttDef((SchemaAttDef *)typeInfo);
      }
      if (this->fCurrentAttGroupInfo != (XercesAttGroupInfo *)0x0) {
        XercesAttGroupInfo::addAttDef
                  (this->fCurrentAttGroupInfo,pSVar13,typeInfo != (ComplexTypeInfo *)0x0);
      }
      return;
    }
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x28,refName,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    return;
  }
  reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x54,pXVar12,(XMLCh *)baseName,
                    (XMLCh *)0x0,(XMLCh *)0x0);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::checkMinMax
          (TraverseSchema *this,ContentSpecNode *specNode,DOMElement *elem,int allContextFlag)

{
  long lVar1;
  bool bVar2;
  XMLCh *pXVar3;
  XMLCh *str1;
  long in_FS_OFFSET;
  bool isMaxUnbounded;
  bool isAllElement;
  bool isAllGroup;
  bool isGroupRefAll;
  int minOccurs;
  int maxOccurs;
  XMLCh *minOccursStr;
  XMLCh *maxOccursStr;
  OutOfMemoryException *anon_var_0;
  OutOfMemoryException *anon_var_0_1;
  XMLCh tmpMinStr [128];
  XMLCh tmpMaxStr [128];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  minOccurs = 1;
  maxOccurs = 1;
  pXVar3 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_MINOCCURS,true);
  str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_MAXOCCURS,true);
  if ((pXVar3 == (XMLCh *)0x0) || (*pXVar3 == 0)) {
    if (specNode != (ContentSpecNode *)0x0) {
      minOccurs = ContentSpecNode::getMinOccurs(specNode);
    }
  }
  else {
    minOccurs = xercesc_2_7::XMLString::parseInt(pXVar3,this->fMemoryManager);
    if (specNode != (ContentSpecNode *)0x0) {
      ContentSpecNode::setMinOccurs(specNode,minOccurs);
    }
  }
  bVar2 = XMLString::equals(str1,(XMLCh *)fgUnbounded);
  if (bVar2 == false) {
    if ((str1 == (XMLCh *)0x0) || (*str1 == 0)) {
      if (specNode != (ContentSpecNode *)0x0) {
        maxOccurs = ContentSpecNode::getMaxOccurs(specNode);
      }
    }
    else {
      maxOccurs = xercesc_2_7::XMLString::parseInt(str1,this->fMemoryManager);
      if (specNode != (ContentSpecNode *)0x0) {
        ContentSpecNode::setMaxOccurs(specNode,maxOccurs);
      }
    }
  }
  else {
    maxOccurs = -1;
    if (specNode != (ContentSpecNode *)0x0) {
      ContentSpecNode::setMaxOccurs(specNode,-1);
    }
  }
  if ((minOccurs != 0) || (maxOccurs != 0)) {
    if (bVar2 != true) {
      xercesc_2_7::XMLString::binToText(minOccurs,tmpMinStr,0x7f,10,this->fMemoryManager);
      xercesc_2_7::XMLString::binToText(maxOccurs,tmpMaxStr,0x7f,10,this->fMemoryManager);
      if (maxOccurs < 1) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x52,tmpMaxStr,
                          (XMLCh *)&SchemaSymbols::fgATT_MAXOCCURS,(XMLCh *)0x0,(XMLCh *)0x0);
        if (specNode != (ContentSpecNode *)0x0) {
          ContentSpecNode::setMaxOccurs(specNode,minOccurs);
        }
      }
      else if (maxOccurs < minOccurs) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x60,tmpMinStr,tmpMaxStr,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        if (specNode != (ContentSpecNode *)0x0) {
          ContentSpecNode::setMaxOccurs(specNode,minOccurs);
        }
      }
    }
    if ((((allContextFlag == 1) || (allContextFlag == 4)) || (allContextFlag == 2)) &&
       (maxOccurs != 1)) {
      if (specNode != (ContentSpecNode *)0x0) {
        ContentSpecNode::setMaxOccurs(specNode,1);
        if (1 < minOccurs) {
          ContentSpecNode::setMinOccurs(specNode,1);
        }
      }
      if (allContextFlag == 1) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x78);
      }
      else {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x77);
      }
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::processComplexContent
          (TraverseSchema *this,DOMElement *ctElem,XMLCh *typeName,DOMElement *childElem,
          ComplexTypeInfo *typeInfo,XMLCh *baseLocalPart,bool isMixed,bool isBaseAnyType)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ComplexTypeInfo *this_00;
  undefined4 *puVar6;
  undefined4 extraout_var;
  XercesGroupInfo *this_01;
  ContentSpecNode *pCVar7;
  ContentSpecNode *pCVar8;
  QName *pQVar9;
  undefined4 extraout_var_00;
  int typeDerivedBy;
  int baseContentType;
  int contentContext;
  ContentSpecNode *specNode;
  DOMElement *attrNode;
  ComplexTypeInfo *baseTypeInfo;
  XMLCh *childName;
  XercesGroupInfo *grpInfo;
  ContentSpecNode *baseSpecNode;
  ContentSpecNode *anySpecNode;
  ContentSpecNode *pcdataNode;
  XMLCh *str1;
  
  specNode = (ContentSpecNode *)0x0;
  attrNode = (DOMElement *)0x0;
  uVar2 = ComplexTypeInfo::getDerivedBy(typeInfo);
  this_00 = ComplexTypeInfo::getBaseComplexTypeInfo(typeInfo);
  if (this_00 == (ComplexTypeInfo *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = ComplexTypeInfo::getContentType(this_00);
    if (uVar2 == 4) {
      uVar4 = ComplexTypeInfo::getFinalSet(this_00);
      if ((uVar4 & 4) != 0) {
        reportSchemaError(this,ctElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x55,baseLocalPart,
                          (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ExceptionCodes::typeinfo,0);
      }
    }
    else {
      uVar4 = ComplexTypeInfo::getFinalSet(this_00);
      if ((uVar4 & uVar2) != 0) {
        reportSchemaError(this,ctElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x56,baseLocalPart,
                          (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ExceptionCodes::typeinfo,0);
      }
      processElements(this,ctElem,this_00,typeInfo);
    }
  }
  if (childElem != (DOMElement *)0x0) {
    uVar4 = ValueVectorOf<unsigned_int>::size(this->fCurrentTypeNameStack);
    this->fCircularCheckIndex = uVar4;
    iVar5 = (*(childElem->super_DOMNode)._vptr_DOMNode[0x18])(childElem);
    str1 = (XMLCh *)CONCAT44(extraout_var,iVar5);
    bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_GROUP);
    if (bVar1 == false) {
      bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_SEQUENCE);
      if (bVar1 == false) {
        bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_CHOICE);
        if (bVar1 == false) {
          bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_ALL);
          if (bVar1 == false) {
            bVar1 = isAttrOrAttrGroup(this,childElem);
            if (bVar1 == false) {
              reportSchemaError(this,childElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x29,str1,
                                (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
            }
            else {
              ComplexTypeInfo::setContentType(typeInfo,1);
              attrNode = childElem;
            }
          }
          else {
            specNode = traverseAll(this,childElem);
            checkMinMax(this,specNode,childElem,4);
            attrNode = (DOMElement *)
                       xercesc_2_7::XUtil::getNextSiblingElement(&childElem->super_DOMNode);
          }
        }
        else {
          specNode = traverseChoiceSequence(this,childElem,4);
          checkMinMax(this,specNode,childElem,0);
          attrNode = (DOMElement *)
                     xercesc_2_7::XUtil::getNextSiblingElement(&childElem->super_DOMNode);
        }
      }
      else {
        specNode = traverseChoiceSequence(this,childElem,5);
        checkMinMax(this,specNode,childElem,0);
        attrNode = (DOMElement *)
                   xercesc_2_7::XUtil::getNextSiblingElement(&childElem->super_DOMNode);
      }
    }
    else {
      this_01 = traverseGroupDecl(this,childElem,false);
      if ((this_01 != (XercesGroupInfo *)0x0) &&
         (pCVar7 = XercesGroupInfo::getContentSpec(this_01), specNode = pCVar7,
         pCVar7 != (ContentSpecNode *)0x0)) {
        bVar1 = ContentSpecNode::hasAllContent(pCVar7);
        if (bVar1 == false) {
          iVar5 = 0;
        }
        else {
          iVar5 = 2;
        }
        specNode = (ContentSpecNode *)
                   xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
        xercesc_2_7::ContentSpecNode::ContentSpecNode(specNode,pCVar7);
        checkMinMax(this,specNode,childElem,iVar5);
      }
      attrNode = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&childElem->super_DOMNode);
    }
  }
  xercesc_2_7::ComplexTypeInfo::setContentSpec((ContentSpecNode *)typeInfo);
  ComplexTypeInfo::setAdoptContentSpec(typeInfo,true);
  if (this_00 == (ComplexTypeInfo *)0x0) {
    ComplexTypeInfo::setDerivedBy(typeInfo,0);
  }
  else {
    pCVar7 = ComplexTypeInfo::getContentSpec(this_00);
    if (uVar2 == 4) {
      pCVar8 = ComplexTypeInfo::getContentSpec(typeInfo);
      if (pCVar8 == (ContentSpecNode *)0x0) {
        if ((iVar3 == 0) || (bVar1 = emptiableParticle(this,pCVar7), bVar1 == true)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          reportSchemaError(this,ctElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x6c);
        }
      }
    }
    else if (specNode == (ContentSpecNode *)0x0) {
      if (pCVar7 != (ContentSpecNode *)0x0) {
        specNode = (ContentSpecNode *)
                   xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
        xercesc_2_7::ContentSpecNode::ContentSpecNode(specNode,pCVar7);
        xercesc_2_7::ComplexTypeInfo::setContentSpec((ContentSpecNode *)typeInfo);
        ComplexTypeInfo::setAdoptContentSpec(typeInfo,true);
      }
    }
    else if (pCVar7 != (ContentSpecNode *)0x0) {
      bVar1 = ContentSpecNode::hasAllContent(specNode);
      if ((bVar1 == false) && (bVar1 = ContentSpecNode::hasAllContent(pCVar7), bVar1 == false)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        reportSchemaError(this,ctElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0xa0);
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ExceptionCodes::typeinfo,0);
      }
      if (((isMixed != false) && (iVar3 == 4)) || ((isMixed != true && (iVar3 != 4)))) {
        reportSchemaError(this,ctElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x6d,baseLocalPart,typeName,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ExceptionCodes::typeinfo,0);
      }
      ComplexTypeInfo::setAdoptContentSpec(typeInfo,false);
      pCVar8 = (ContentSpecNode *)
               xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      xercesc_2_7::ContentSpecNode::ContentSpecNode(pCVar8,pCVar7);
      pCVar7 = (ContentSpecNode *)
               xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (pCVar7,ModelGroupSequence,pCVar8,specNode,true,true,this->fGrammarPoolMemoryManager
                );
      xercesc_2_7::ComplexTypeInfo::setContentSpec((ContentSpecNode *)typeInfo);
      ComplexTypeInfo::setAdoptContentSpec(typeInfo,true);
    }
  }
  if ((isBaseAnyType == false) || (uVar2 != 2)) {
    if (isMixed == false) {
      pCVar7 = ComplexTypeInfo::getContentSpec(typeInfo);
      if (pCVar7 == (ContentSpecNode *)0x0) {
        ComplexTypeInfo::setContentType(typeInfo,0);
      }
      else {
        ComplexTypeInfo::setContentType(typeInfo,4);
      }
    }
    else if (specNode == (ContentSpecNode *)0x0) {
      pQVar9 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
      xercesc_2_7::QName::QName
                (pQVar9,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
                 XMLElementDecl::fgPCDataElemId,this->fGrammarPoolMemoryManager);
      pCVar7 = (ContentSpecNode *)
               xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode(pCVar7,pQVar9,false,this->fGrammarPoolMemoryManager);
      ContentSpecNode::setMinOccurs(pCVar7,0);
      xercesc_2_7::ComplexTypeInfo::setContentSpec((ContentSpecNode *)typeInfo);
      ComplexTypeInfo::setAdoptContentSpec(typeInfo,true);
      ComplexTypeInfo::setContentType(typeInfo,2);
    }
    else {
      ComplexTypeInfo::setContentType(typeInfo,3);
    }
  }
  else {
    pQVar9 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
    xercesc_2_7::QName::QName
              (pQVar9,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
               this->fEmptyNamespaceURI,this->fGrammarPoolMemoryManager);
    pCVar7 = (ContentSpecNode *)
             xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
    ContentSpecNode::ContentSpecNode(pCVar7,pQVar9,false,this->fGrammarPoolMemoryManager);
    ContentSpecNode::setType(pCVar7,Any_Lax);
    ContentSpecNode::setMinOccurs(pCVar7,0);
    ContentSpecNode::setMaxOccurs(pCVar7,-1);
    if (specNode == (ContentSpecNode *)0x0) {
      xercesc_2_7::ComplexTypeInfo::setContentSpec((ContentSpecNode *)typeInfo);
      ComplexTypeInfo::setDerivedBy(typeInfo,2);
    }
    else {
      ComplexTypeInfo::setAdoptContentSpec(typeInfo,false);
      pCVar8 = (ContentSpecNode *)
               xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (pCVar8,ModelGroupSequence,pCVar7,specNode,true,true,this->fGrammarPoolMemoryManager
                );
      xercesc_2_7::ComplexTypeInfo::setContentSpec((ContentSpecNode *)typeInfo);
      ComplexTypeInfo::setAdoptContentSpec(typeInfo,true);
      if (isMixed != true) {
        reportSchemaError(this,ctElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x6d,baseLocalPart,typeName,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        puVar6 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar6 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&ExceptionCodes::typeinfo,0);
      }
    }
    ComplexTypeInfo::setContentType(typeInfo,3);
  }
  if (attrNode == (DOMElement *)0x0) {
    if ((this_00 != (ComplexTypeInfo *)0x0) || (isBaseAnyType != false)) {
      processAttributes(this,ctElem,(DOMElement *)0x0,typeInfo,isBaseAnyType);
    }
  }
  else {
    bVar1 = isAttrOrAttrGroup(this,attrNode);
    if (bVar1 == true) {
      processAttributes(this,ctElem,attrNode,typeInfo,isBaseAnyType);
    }
    else {
      iVar3 = (*(attrNode->super_DOMNode)._vptr_DOMNode[0x18])(attrNode);
      reportSchemaError(this,attrNode,(XMLCh *)&XMLUni::fgXMLErrDomain,0x29,
                        (XMLCh *)CONCAT44(extraout_var_00,iVar3),(XMLCh *)0x0,(XMLCh *)0x0,
                        (XMLCh *)0x0);
    }
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::processBaseTypeInfo
          (TraverseSchema *this,DOMElement *elem,XMLCh *baseName,XMLCh *localPart,XMLCh *uriStr,
          ComplexTypeInfo *typeInfo)

{
  SchemaInfo *this_00;
  ValueVectorOf_unsigned_int_ *pVVar1;
  RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this_01;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *key;
  long in_FS_OFFSET;
  uint local_64;
  ListType infoType;
  int saveScope;
  uint uriId;
  int baseTypeSymbol;
  ComplexTypeInfo *baseComplexTypeInfo;
  DatatypeValidator *baseDTValidator;
  SchemaInfo *saveInfo;
  XMLCh *fullBaseName;
  SchemaInfo *impInfo;
  DOMElement *baseTypeNode;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  saveInfo = this->fSchemaInfo;
  baseComplexTypeInfo = (ComplexTypeInfo *)0x0;
  baseDTValidator = (DatatypeValidator *)0x0;
  infoType = INCLUDE;
  saveScope = this->fCurrentScope;
  bVar2 = XMLString::equals(uriStr,this->fTargetNSURIString);
  if (bVar2 == true) {
    XMLBuffer::set(&this->fBuffer,uriStr);
    XMLBuffer::append(&this->fBuffer,0x2c);
    XMLBuffer::append(&this->fBuffer,localPart);
    fullBaseName = XMLBuffer::getRawBuffer(&this->fBuffer);
    baseComplexTypeInfo =
         RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get(this->fComplexTypeRegistry,fullBaseName);
    if (baseComplexTypeInfo != (ComplexTypeInfo *)0x0) {
      pVVar1 = this->fCurrentTypeNameStack;
      uVar3 = this->fCircularCheckIndex;
      local_64 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,fullBaseName);
      bVar2 = ValueVectorOf<unsigned_int>::containsElement(pVVar1,&local_64,uVar3);
      if (bVar2 != false) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,99,fullBaseName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        puVar4 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar4,&ExceptionCodes::typeinfo,0);
      }
      pVVar1 = this->fCurrentTypeNameStack;
      local_64 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,fullBaseName);
      bVar2 = ValueVectorOf<unsigned_int>::containsElement(pVVar1,&local_64,0);
      if (bVar2 != false) {
        ComplexTypeInfo::setBaseComplexTypeInfo(typeInfo,baseComplexTypeInfo);
        puVar4 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar4 = 2;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar4,&ExceptionCodes::typeinfo,0);
      }
      bVar2 = ComplexTypeInfo::getPreprocessed(baseComplexTypeInfo);
      if (bVar2 != false) {
        baseComplexTypeInfo = (ComplexTypeInfo *)0x0;
      }
    }
    goto LAB_0011412f;
  }
  bVar2 = XMLString::equals(uriStr,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  if (bVar2 != false) {
    baseDTValidator = getDatatypeValidator(this,uriStr,localPart);
    if (baseDTValidator == (DatatypeValidator *)0x0) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,uriStr,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      puVar4 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&ExceptionCodes::typeinfo,0);
    }
    goto LAB_0011412f;
  }
  uriId = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
  bVar2 = SchemaInfo::isImportingNS(this->fSchemaInfo,uriId);
  if (bVar2 != true) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,uriStr,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ExceptionCodes::typeinfo,0);
  }
  baseComplexTypeInfo = getTypeInfoFromNS(this,elem,uriStr,localPart);
  if (baseComplexTypeInfo != (ComplexTypeInfo *)0x0) goto LAB_0011412f;
  this_00 = this->fSchemaInfo;
  uVar3 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
  impInfo = SchemaInfo::getImportInfo(this_00,uVar3);
  if (impInfo == (SchemaInfo *)0x0) {
LAB_00113ede:
    bVar2 = true;
  }
  else {
    bVar2 = SchemaInfo::getProcessed(impInfo);
    if (bVar2 != false) goto LAB_00113ede;
    bVar2 = false;
  }
  if (bVar2) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x2a,baseName,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ExceptionCodes::typeinfo,0);
  }
  infoType = IMPORT;
  restoreSchemaInfo(this,impInfo,IMPORT,0xfffffffe);
LAB_0011412f:
  if ((baseComplexTypeInfo == (ComplexTypeInfo *)0x0) &&
     (baseDTValidator == (DatatypeValidator *)0x0)) {
    baseDTValidator = getDatatypeValidator(this,uriStr,localPart);
    if (baseDTValidator == (DatatypeValidator *)0x0) {
      baseTypeNode = (DOMElement *)
                     xercesc_2_7::SchemaInfo::getTopLevelComponent
                               ((ushort)this->fSchemaInfo,(ushort *)0x0,
                                (ushort *)&SchemaSymbols::fgELT_COMPLEXTYPE,(SchemaInfo **)localPart
                               );
      if (baseTypeNode == (DOMElement *)0x0) {
        baseTypeNode = (DOMElement *)
                       xercesc_2_7::SchemaInfo::getTopLevelComponent
                                 ((ushort)this->fSchemaInfo,(ushort *)0x1,
                                  (ushort *)&SchemaSymbols::fgELT_SIMPLETYPE,
                                  (SchemaInfo **)localPart);
        if (baseTypeNode == (DOMElement *)0x0) {
          if (saveInfo != this->fSchemaInfo) {
            restoreSchemaInfo(this,saveInfo,infoType,saveScope);
          }
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x2a,baseName,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
          puVar4 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&ExceptionCodes::typeinfo,0);
        }
        baseDTValidator = traverseSimpleTypeDecl(this,baseTypeNode,true,0);
        if (baseDTValidator == (DatatypeValidator *)0x0) {
          if (saveInfo != this->fSchemaInfo) {
            restoreSchemaInfo(this,saveInfo,infoType,saveScope);
          }
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x27,uriStr,localPart,uriStr,
                            (XMLCh *)0x0);
          puVar4 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&ExceptionCodes::typeinfo,0);
        }
      }
      else {
        baseTypeSymbol = traverseComplexTypeDecl(this,baseTypeNode,true,(XMLCh *)0x0);
        this_01 = this->fComplexTypeRegistry;
        key = (void *)(**(code **)(*(long *)this->fStringPool + 0x50))
                                (this->fStringPool,baseTypeSymbol);
        baseComplexTypeInfo = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get(this_01,key);
      }
    }
  }
  if (saveInfo != this->fSchemaInfo) {
    restoreSchemaInfo(this,saveInfo,infoType,saveScope);
  }
  ComplexTypeInfo::setBaseComplexTypeInfo(typeInfo,baseComplexTypeInfo);
  ComplexTypeInfo::setBaseDatatypeValidator(typeInfo,baseDTValidator);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


ComplexTypeInfo * __thiscall
xercesc_2_7::TraverseSchema::getTypeInfoFromNS
          (TraverseSchema *this,DOMElement *elem,XMLCh *uriStr,XMLCh *localPart)

{
  bool bVar1;
  int iVar2;
  long *this_00;
  RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this_01;
  XMLCh *key;
  ComplexTypeInfo *pCVar3;
  Grammar *grammar;
  ComplexTypeInfo *typeInfo;
  
  this_00 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
  if (this_00 != (long *)0x0) {
    iVar2 = (**(code **)(*this_00 + 0x28))(this_00);
    if (iVar2 == 1) {
      bVar1 = true;
      goto LAB_00114451;
    }
  }
  bVar1 = false;
LAB_00114451:
  if (bVar1) {
    XMLBuffer::set(&this->fBuffer,uriStr);
    XMLBuffer::append(&this->fBuffer,0x2c);
    XMLBuffer::append(&this->fBuffer,localPart);
    this_01 = SchemaGrammar::getComplexTypeRegistry((SchemaGrammar *)this_00);
    key = XMLBuffer::getRawBuffer(&this->fBuffer);
    pCVar3 = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get(this_01,key);
  }
  else {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x48,uriStr,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    pCVar3 = (ComplexTypeInfo *)0x0;
  }
  return pCVar3;
}


void __thiscall
xercesc_2_7::TraverseSchema::processAttributes
          (TraverseSchema *this,DOMElement *elem,DOMElement *attElem,ComplexTypeInfo *typeInfo,
          bool isBaseAnyType)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  DefAttTypes DVar7;
  AttTypes AVar8;
  undefined4 extraout_var;
  ComplexTypeInfo *this_00;
  XercesAttGroupInfo **ppXVar9;
  SchemaAttDef *pSVar10;
  long *plVar11;
  QName *this_01;
  XMLCh *pXVar12;
  SchemaAttDef *pSVar13;
  XMLCh *pXVar14;
  XMLCh *pXVar15;
  XMLCh *pXVar16;
  DatatypeValidator *newDatatypeValidator;
  SchemaAttDef *pSVar17;
  long in_FS_OFFSET;
  bool defAttTypeSet;
  bool baseWithAttributes;
  bool childWithAttributes;
  DefAttTypes defAttType;
  uint i;
  uint i_1;
  int derivedBy;
  uint attGroupListSize;
  uint anyAttCount;
  DefAttTypes saveDefType;
  Janitor_xercesc_2_7__SchemaAttDef_ janAttWildCard;
  XercesAttGroupInfo *attGroupInfo;
  Janitor_xercesc_2_7__SchemaAttDef_ janBaseAttWildCard;
  DOMElement *child;
  SchemaAttDef *attWildCard;
  SchemaAttDef *completeWildCard;
  SchemaAttDef *baseAttWildCard;
  XMLCh *childName;
  ComplexTypeInfo *baseTypeInfo;
  SchemaAttDef *attGroupWildCard;
  SchemaAttDef *newWildCard;
  SchemaAttDefList *baseAttList;
  SchemaAttDef *attDef;
  QName *attName;
  XMLCh *localPart;
  SchemaAttDef *newAttDef;
  ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ attGroupList;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (typeInfo == (ComplexTypeInfo *)0x0) goto LAB_001150da;
  attWildCard = (SchemaAttDef *)0x0;
  Janitor<xercesc_2_7::SchemaAttDef>::Janitor(&janAttWildCard,(SchemaAttDef *)0x0);
  attGroupInfo = (XercesAttGroupInfo *)0x0;
  ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::ValueVectorOf
            (&attGroupList,4,this->fGrammarPoolMemoryManager,false);
  for (child = attElem; child != (DOMElement *)0x0;
      child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode)) {
    iVar4 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    pXVar12 = (XMLCh *)CONCAT44(extraout_var,iVar4);
    bVar2 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTE);
    if (bVar2 == false) {
      bVar2 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP);
      if (bVar2 == false) {
        bVar2 = XMLString::equals(pXVar12,(XMLCh *)&SchemaSymbols::fgELT_ANYATTRIBUTE);
        if (bVar2 == false) {
          reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x29,pXVar12,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
        }
        else {
          attWildCard = traverseAnyAttribute(this,child);
          Janitor<xercesc_2_7::SchemaAttDef>::reset(&janAttWildCard,attWildCard);
        }
      }
      else {
        attGroupInfo = traverseAttributeGroupDecl(this,child,typeInfo,false);
        if (attGroupInfo == (XercesAttGroupInfo *)0x0) {
LAB_001146b0:
          bVar2 = false;
        }
        else {
          bVar2 = ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::containsElement
                            (&attGroupList,&attGroupInfo,0);
          if (bVar2 == true) goto LAB_001146b0;
          bVar2 = true;
        }
        if (bVar2) {
          ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::addElement(&attGroupList,&attGroupInfo);
        }
      }
    }
    else {
      traverseAttributeDecl(this,child,typeInfo,false);
    }
  }
  this_00 = ComplexTypeInfo::getBaseComplexTypeInfo(typeInfo);
  iVar4 = ComplexTypeInfo::getDerivedBy(typeInfo);
  uVar5 = ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::size(&attGroupList);
  if (uVar5 != 0) {
    completeWildCard = (SchemaAttDef *)0x0;
    Janitor<xercesc_2_7::SchemaAttDef>::Janitor(&janBaseAttWildCard,(SchemaAttDef *)0x0);
    bVar2 = false;
    for (i = 0; i < uVar5; i = i + 1) {
      ppXVar9 = ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::elementAt(&attGroupList,i);
      attGroupInfo = *ppXVar9;
      uVar6 = XercesAttGroupInfo::anyAttributeCount(attGroupInfo);
      if (uVar6 != 0) {
        if (!bVar2) {
          if (attWildCard == (SchemaAttDef *)0x0) {
            pSVar10 = XercesAttGroupInfo::anyAttributeAt(attGroupInfo,0);
            defAttType = XMLAttDef::getDefaultType((XMLAttDef *)pSVar10);
          }
          else {
            defAttType = XMLAttDef::getDefaultType((XMLAttDef *)attWildCard);
          }
          bVar2 = true;
        }
        pSVar10 = XercesAttGroupInfo::getCompleteWildCard(attGroupInfo);
        if (completeWildCard == (SchemaAttDef *)0x0) {
          completeWildCard =
               (SchemaAttDef *)
               xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
          xercesc_2_7::SchemaAttDef::SchemaAttDef(completeWildCard,pSVar10);
          Janitor<xercesc_2_7::SchemaAttDef>::reset(&janBaseAttWildCard,completeWildCard);
        }
        else {
          attWildCardIntersection(this,completeWildCard,pSVar10);
        }
      }
    }
    if (completeWildCard != (SchemaAttDef *)0x0) {
      if (attWildCard == (SchemaAttDef *)0x0) {
        attWildCard = completeWildCard;
        Janitor<xercesc_2_7::SchemaAttDef>::orphan(&janBaseAttWildCard);
        Janitor<xercesc_2_7::SchemaAttDef>::reset(&janAttWildCard,completeWildCard);
      }
      else {
        attWildCardIntersection(this,attWildCard,completeWildCard);
      }
      XMLAttDef::setDefaultType((XMLAttDef *)attWildCard,defAttType);
    }
    Janitor<xercesc_2_7::SchemaAttDef>::_Janitor(&janBaseAttWildCard);
  }
  if (this_00 == (ComplexTypeInfo *)0x0) {
    baseAttWildCard = (SchemaAttDef *)0x0;
  }
  else {
    baseAttWildCard = ComplexTypeInfo::getAttWildCard(this_00);
  }
  Janitor<xercesc_2_7::SchemaAttDef>::Janitor(&janBaseAttWildCard,(SchemaAttDef *)0x0);
  if (iVar4 == 2) {
    if (isBaseAnyType != false) {
      baseAttWildCard =
           (SchemaAttDef *)xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
      xercesc_2_7::SchemaAttDef::SchemaAttDef
                (baseAttWildCard,(ushort *)&XMLUni::fgZeroLenString,
                 (ushort *)&XMLUni::fgZeroLenString,this->fEmptyNamespaceURI,Any_Any,
                 ProcessContents_Lax,this->fGrammarPoolMemoryManager);
      Janitor<xercesc_2_7::SchemaAttDef>::reset(&janBaseAttWildCard,baseAttWildCard);
    }
    if ((baseAttWildCard != (SchemaAttDef *)0x0) && (attWildCard != (SchemaAttDef *)0x0)) {
      DVar7 = XMLAttDef::getDefaultType((XMLAttDef *)attWildCard);
      attWildCardUnion(this,attWildCard,baseAttWildCard);
      XMLAttDef::setDefaultType((XMLAttDef *)attWildCard,DVar7);
    }
  }
  if (attWildCard == (SchemaAttDef *)0x0) {
    if ((baseAttWildCard != (SchemaAttDef *)0x0) && (iVar4 == 2)) {
      if (isBaseAnyType == false) {
        pSVar10 = (SchemaAttDef *)
                  xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
        xercesc_2_7::SchemaAttDef::SchemaAttDef(pSVar10,baseAttWildCard);
        ComplexTypeInfo::setAttWildCard(typeInfo,pSVar10);
      }
      else {
        ComplexTypeInfo::setAttWildCard(typeInfo,baseAttWildCard);
        Janitor<xercesc_2_7::SchemaAttDef>::orphan(&janBaseAttWildCard);
      }
    }
  }
  else {
    ComplexTypeInfo::setAttWildCard(typeInfo,attWildCard);
    Janitor<xercesc_2_7::SchemaAttDef>::orphan(&janAttWildCard);
    AVar8 = XMLAttDef::getType((XMLAttDef *)attWildCard);
    if (AVar8 == AttTypes_Unknown) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7b);
    }
  }
  if (this_00 == (ComplexTypeInfo *)0x0) {
LAB_00114c40:
    bVar2 = false;
  }
  else {
    bVar2 = ComplexTypeInfo::hasAttDefs(this_00);
    if (bVar2 == false) goto LAB_00114c40;
    bVar2 = true;
  }
  bVar3 = ComplexTypeInfo::hasAttDefs(typeInfo);
  if (bVar3 == false) {
    pSVar10 = ComplexTypeInfo::getAttWildCard(typeInfo);
    if (pSVar10 != (SchemaAttDef *)0x0) goto LAB_00114c72;
    bVar3 = false;
  }
  else {
LAB_00114c72:
    bVar3 = true;
  }
  if ((iVar4 == 4) && (bVar3)) {
    if ((bVar2) || (baseAttWildCard != (SchemaAttDef *)0x0)) {
      checkAttDerivationOK(this,elem,this_00,typeInfo);
    }
    else {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7c);
    }
  }
  if (this_00 == (ComplexTypeInfo *)0x0) {
LAB_00114d1a:
    bVar2 = false;
  }
  else {
    bVar2 = ComplexTypeInfo::hasAttDefs(this_00);
    if (bVar2 == false) goto LAB_00114d1a;
    bVar2 = true;
  }
  if (bVar2) {
    plVar11 = (long *)xercesc_2_7::ComplexTypeInfo::getAttDefList();
    i_1 = 0;
    while( true ) {
      uVar5 = (**(code **)(*plVar11 + 0x68))(plVar11);
      if (uVar5 <= i_1) break;
      pSVar10 = (SchemaAttDef *)(**(code **)(*plVar11 + 0x70))(plVar11,i_1);
      this_01 = SchemaAttDef::getAttName(pSVar10);
      pXVar12 = QName::getLocalPart(this_01);
      uVar5 = QName::getURI(this_01);
      pSVar13 = ComplexTypeInfo::getAttDef(typeInfo,pXVar12,uVar5);
      if (pSVar13 == (SchemaAttDef *)0x0) {
        DVar7 = XMLAttDef::getDefaultType((XMLAttDef *)pSVar10);
        if (DVar7 != DefAttTypes_Max) {
          pXVar12 = QName::getPrefix(this_01);
          pXVar14 = QName::getLocalPart(this_01);
          uVar5 = QName::getURI(this_01);
          pXVar15 = XMLAttDef::getValue((XMLAttDef *)pSVar10);
          AVar8 = XMLAttDef::getType((XMLAttDef *)pSVar10);
          DVar7 = XMLAttDef::getDefaultType((XMLAttDef *)pSVar10);
          pXVar16 = XMLAttDef::getEnumeration((XMLAttDef *)pSVar10);
          pSVar13 = (SchemaAttDef *)
                    xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
          xercesc_2_7::SchemaAttDef::SchemaAttDef
                    (pSVar13,pXVar12,pXVar14,uVar5,pXVar15,AVar8,DVar7,pXVar16,
                     this->fGrammarPoolMemoryManager);
          newDatatypeValidator = SchemaAttDef::getDatatypeValidator(pSVar10);
          SchemaAttDef::setDatatypeValidator(pSVar13,newDatatypeValidator);
          xercesc_2_7::ComplexTypeInfo::addAttDef((SchemaAttDef *)typeInfo);
          pSVar17 = SchemaAttDef::getBaseAttDecl(pSVar10);
          if (pSVar17 == (SchemaAttDef *)0x0) {
            SchemaAttDef::setBaseAttDecl(pSVar13,pSVar10);
          }
          else {
            pSVar10 = SchemaAttDef::getBaseAttDecl(pSVar10);
            SchemaAttDef::setBaseAttDecl(pSVar13,pSVar10);
          }
        }
      }
      else if (iVar4 == 2) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7a,pXVar12,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      i_1 = i_1 + 1;
    }
  }
  Janitor<xercesc_2_7::SchemaAttDef>::_Janitor(&janBaseAttWildCard);
  ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::_ValueVectorOf(&attGroupList);
  Janitor<xercesc_2_7::SchemaAttDef>::_Janitor(&janAttWildCard);
LAB_001150da:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::defaultComplexTypeInfo(TraverseSchema *this,ComplexTypeInfo *typeInfo)

{
  if (typeInfo != (ComplexTypeInfo *)0x0) {
    ComplexTypeInfo::setDerivedBy(typeInfo,0);
    ComplexTypeInfo::setContentType(typeInfo,1);
    ComplexTypeInfo::setDatatypeValidator(typeInfo,(DatatypeValidator *)0x0);
    xercesc_2_7::ComplexTypeInfo::setContentSpec((ContentSpecNode *)typeInfo);
    ComplexTypeInfo::setBaseComplexTypeInfo(typeInfo,(ComplexTypeInfo *)0x0);
    ComplexTypeInfo::setBaseDatatypeValidator(typeInfo,(DatatypeValidator *)0x0);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

InputSource * __thiscall
xercesc_2_7::TraverseSchema::resolveSchemaLocation
          (TraverseSchema *this,XMLCh *loc,ResourceIdentifierType resourceIdentitiferType,
          XMLCh *nameSpace)

{
  long lVar1;
  XSDLocator *locator;
  bool bVar2;
  char cVar3;
  int iVar4;
  XMLCh *pXVar5;
  undefined4 extraout_var;
  XMLCh *pXVar6;
  MalformedURLException *pMVar7;
  long in_FS_OFFSET;
  InputSource *srcToFill;
  XMLCh *normalizedURI;
  XMLCh *tempURI;
  ArrayJanitor_short_unsigned_int_ tempURIName;
  XMLResourceIdentifier resourceIdentifier;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  srcToFill = (InputSource *)0x0;
  normalizedURI = (XMLCh *)0x0;
  if (loc != (XMLCh *)0x0) {
    resourceIdentifier.fResourceIdentifierType._0_2_ = 0xffff;
    xercesc_2_7::XMLString::removeChar(loc,(ushort *)&resourceIdentifier,&this->fBuffer);
    normalizedURI = XMLBuffer::getRawBuffer(&this->fBuffer);
  }
  if (this->fEntityHandler != (XMLEntityHandler *)0x0) {
    locator = this->fLocator;
    pXVar5 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
    XMLResourceIdentifier::XMLResourceIdentifier
              (&resourceIdentifier,resourceIdentitiferType,normalizedURI,nameSpace,(XMLCh *)0x0,
               pXVar5,(Locator *)locator);
    iVar4 = (*this->fEntityHandler->_vptr_XMLEntityHandler[6])
                      (this->fEntityHandler,&resourceIdentifier);
    srcToFill = (InputSource *)CONCAT44(extraout_var,iVar4);
    XMLResourceIdentifier::_XMLResourceIdentifier(&resourceIdentifier);
  }
  if ((srcToFill == (InputSource *)0x0) && (loc != (XMLCh *)0x0)) {
    bVar2 = XMLScanner::getDisableDefaultEntityResolution(this->fScanner);
    if (bVar2 == false) {
      xercesc_2_7::XMLURL::XMLURL((XMLURL *)&resourceIdentifier,this->fMemoryManager);
      pXVar5 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
      cVar3 = xercesc_2_7::XMLURL::setURL
                        ((ushort *)&resourceIdentifier,pXVar5,(XMLURL *)normalizedURI);
      if ((cVar3 == '\x01') && (cVar3 = xercesc_2_7::XMLURL::isRelative(), cVar3 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        bVar2 = XMLScanner::getStandardUriConformant(this->fScanner);
        if (bVar2 == true) {
          pMVar7 = (MalformedURLException *)__cxa_allocate_exception(0x30);
          MalformedURLException::MalformedURLException
                    (pMVar7,"TraverseSchema.cpp",0x1a12,URL_MalformedURL,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pMVar7,&MalformedURLException::typeinfo,
                      MalformedURLException::_MalformedURLException);
        }
        pXVar5 = XMLString::replicate(normalizedURI,this->fMemoryManager);
        ArrayJanitor<short_unsigned_int>::ArrayJanitor(&tempURIName,pXVar5,this->fMemoryManager);
        xercesc_2_7::XMLUri::normalizeURI(pXVar5,&this->fBuffer);
        pXVar5 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
        pXVar6 = XMLBuffer::getRawBuffer(&this->fBuffer);
        srcToFill = (InputSource *)xercesc_2_7::XMemory::operator_new(0x30,this->fMemoryManager);
        xercesc_2_7::LocalFileInputSource::LocalFileInputSource
                  ((LocalFileInputSource *)srcToFill,pXVar5,pXVar6,this->fMemoryManager);
        ArrayJanitor<short_unsigned_int>::_ArrayJanitor(&tempURIName);
      }
      else {
        bVar2 = XMLScanner::getStandardUriConformant(this->fScanner);
        if ((bVar2 == false) || (cVar3 = xercesc_2_7::XMLURL::hasInvalidChar(), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pMVar7 = (MalformedURLException *)__cxa_allocate_exception(0x30);
          MalformedURLException::MalformedURLException
                    (pMVar7,"TraverseSchema.cpp",0x1a17,URL_MalformedURL,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(pMVar7,&MalformedURLException::typeinfo,
                      MalformedURLException::_MalformedURLException);
        }
        srcToFill = (InputSource *)xercesc_2_7::XMemory::operator_new(0x88,this->fMemoryManager);
        xercesc_2_7::URLInputSource::URLInputSource
                  ((URLInputSource *)srcToFill,(XMLURL *)&resourceIdentifier,this->fMemoryManager);
      }
      xercesc_2_7::XMLURL::_XMLURL((XMLURL *)&resourceIdentifier);
    }
    else {
      srcToFill = (InputSource *)0x0;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return srcToFill;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::restoreSchemaInfo
          (TraverseSchema *this,SchemaInfo *toRestore,ListType aListType,uint saveScope)

{
  GrammarResolver *pGVar1;
  int iVar2;
  SchemaGrammar *pSVar3;
  DatatypeValidatorFactory *pDVar4;
  XMLCh *pXVar5;
  RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *pRVar6;
  RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *pRVar7;
  RefHashTableOf_xercesc_2_7__XMLAttDef_ *pRVar8;
  RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *pRVar9;
  RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *pRVar10;
  NamespaceScope *pNVar11;
  ValidationContext *newValidationContext;
  int targetNSURI;
  
  if (aListType == IMPORT) {
    SchemaInfo::setScopeCount(this->fSchemaInfo,this->fScopeCount);
    iVar2 = SchemaInfo::getTargetNSURI(toRestore);
    pGVar1 = this->fGrammarResolver;
    SchemaInfo::getTargetNSURIString(toRestore);
    pSVar3 = (SchemaGrammar *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)pGVar1);
    this->fSchemaGrammar = pSVar3;
    if (this->fSchemaGrammar == (SchemaGrammar *)0x0) {
      return;
    }
    this->fTargetNSURI = iVar2;
    this->fCurrentScope = saveScope;
    iVar2 = SchemaInfo::getScopeCount(toRestore);
    this->fScopeCount = iVar2;
    pDVar4 = SchemaGrammar::getDatatypeRegistry(this->fSchemaGrammar);
    this->fDatatypeRegistry = pDVar4;
    pXVar5 = (XMLCh *)(**(code **)(*(long *)this->fSchemaGrammar + 0x30))(this->fSchemaGrammar);
    this->fTargetNSURIString = pXVar5;
    pRVar6 = SchemaGrammar::getGroupInfoRegistry(this->fSchemaGrammar);
    this->fGroupRegistry = pRVar6;
    pRVar7 = SchemaGrammar::getAttGroupInfoRegistry(this->fSchemaGrammar);
    this->fAttGroupRegistry = pRVar7;
    pRVar8 = SchemaGrammar::getAttributeDeclRegistry(this->fSchemaGrammar);
    this->fAttributeDeclRegistry = pRVar8;
    pRVar9 = SchemaGrammar::getComplexTypeRegistry(this->fSchemaGrammar);
    this->fComplexTypeRegistry = pRVar9;
    pRVar10 = SchemaGrammar::getValidSubstitutionGroups(this->fSchemaGrammar);
    this->fValidSubstitutionGroups = pRVar10;
    pNVar11 = SchemaGrammar::getNamespaceScope(this->fSchemaGrammar);
    this->fNamespaceScope = pNVar11;
    newValidationContext = SchemaGrammar::getValidationContext(this->fSchemaGrammar);
    GeneralAttributeCheck::setValidationContext(&this->fAttributeCheck,newValidationContext);
  }
  this->fSchemaInfo = toRestore;
  return;
}


bool __thiscall
xercesc_2_7::TraverseSchema::emptiableParticle(TraverseSchema *this,ContentSpecNode *specNode)

{
  bool bVar1;
  int iVar2;
  
  if (((this->fFullConstraintChecking == true) && (specNode != (ContentSpecNode *)0x0)) &&
     (iVar2 = xercesc_2_7::ContentSpecNode::getMinTotalRange(), iVar2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


void __thiscall
xercesc_2_7::TraverseSchema::checkFixedFacet
          (TraverseSchema *this,DOMElement *elem,XMLCh *facetName,DatatypeValidator *baseDV,
          uint *flags)

{
  bool bVar1;
  ValidatorType VVar2;
  XMLCh *str1;
  XMLCh *fixedFacet;
  
  str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_FIXED,false);
  if (((str1 == (XMLCh *)0x0) || (*str1 == 0)) ||
     ((bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_TRUE), bVar1 == false &&
      (bVar1 = XMLString::equals(str1,(XMLCh *)&fgValueOne), bVar1 == false)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_LENGTH,facetName);
  if (bVar1 != false) {
    *flags = *flags | 1;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_MINLENGTH,facetName);
  if (bVar1 != false) {
    *flags = *flags | 2;
    return;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_MAXLENGTH,facetName);
  if (bVar1 != false) {
    *flags = *flags | 4;
    return;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_MAXEXCLUSIVE,facetName);
  if (bVar1 != false) {
    *flags = *flags | 0x40;
    return;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_MAXINCLUSIVE,facetName);
  if (bVar1 != false) {
    *flags = *flags | 0x20;
    return;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_MINEXCLUSIVE,facetName);
  if (bVar1 != false) {
    *flags = *flags | 0x100;
    return;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_MININCLUSIVE,facetName);
  if (bVar1 != false) {
    *flags = *flags | 0x80;
    return;
  }
  bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_TOTALDIGITS,facetName);
  if (bVar1 == false) {
    bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_FRACTIONDIGITS,facetName);
    if (bVar1 == false) {
      bVar1 = XMLString::equals((XMLCh *)&SchemaSymbols::fgELT_WHITESPACE,facetName);
      if ((bVar1 == false) || (VVar2 = DatatypeValidator::getType(baseDV), VVar2 != String)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *flags = *flags | 0x4000;
      }
      return;
    }
    *flags = *flags | 0x400;
    return;
  }
  *flags = *flags | 0x200;
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::buildValidSubstitutionListB
          (TraverseSchema *this,DOMElement *elem,SchemaElementDecl *elemDecl,
          SchemaElementDecl *subsElemDecl)

{
  long lVar1;
  GrammarResolver *pGVar2;
  bool bVar3;
  RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *pRVar4;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this_00;
  DatatypeValidator *validator;
  ComplexTypeInfo *typeInfo;
  long in_FS_OFFSET;
  SchemaElementDecl *local_90;
  DOMElement *local_88;
  TraverseSchema *local_80;
  int chainElemURI;
  SchemaElementDecl *chainElemDecl;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *validSubsElements;
  XMLCh *chainElemName;
  SchemaGrammar *aGrammar;
  SchemaInfo *curRef;
  SchemaGrammar *aGrammar_1;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *subsElemList;
  BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ importingEnum;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = elemDecl;
  local_88 = elem;
  local_80 = this;
  chainElemDecl = SchemaElementDecl::getSubstitutionGroupElem(subsElemDecl);
  while (chainElemDecl != (SchemaElementDecl *)0x0) {
    chainElemURI = XMLElementDecl::getURI((XMLElementDecl *)chainElemDecl);
    chainElemName = XMLElementDecl::getBaseName((XMLElementDecl *)chainElemDecl);
    validSubsElements =
         RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
                   (local_80->fValidSubstitutionGroups,chainElemName,chainElemURI);
    if (validSubsElements == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) {
      if (chainElemURI == local_80->fTargetNSURI) break;
      pGVar2 = local_80->fGrammarResolver;
      (**(code **)(*(long *)local_80->fURIStringPool + 0x50))(local_80->fURIStringPool,chainElemURI)
      ;
      aGrammar = (SchemaGrammar *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)pGVar2);
      if (aGrammar == (SchemaGrammar *)0x0) break;
      pRVar4 = SchemaGrammar::getValidSubstitutionGroups(aGrammar);
      validSubsElements =
           RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
                     (pRVar4,chainElemName,chainElemURI);
      if (validSubsElements == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) break;
      this_00 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)
                xercesc_2_7::XMemory::operator_new(0x20,local_80->fGrammarPoolMemoryManager);
      ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf(this_00,validSubsElements);
      validSubsElements = this_00;
      RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::put
                (local_80->fValidSubstitutionGroups,chainElemName,chainElemURI,this_00);
    }
    bVar3 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::containsElement
                      (validSubsElements,&local_90,0);
    if (bVar3 == false) {
      validator = SchemaElementDecl::getDatatypeValidator(local_90);
      typeInfo = SchemaElementDecl::getComplexTypeInfo(local_90);
      bVar3 = isSubstitutionGroupValid
                        (local_80,local_88,chainElemDecl,typeInfo,validator,(XMLCh *)0x0,false);
      if (bVar3 != true) goto LAB_00115d22;
      bVar3 = false;
    }
    else {
LAB_00115d22:
      bVar3 = true;
    }
    if (bVar3) break;
    ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::addElement(validSubsElements,&local_90);
    SchemaInfo::getImportingListEnumerator(&importingEnum,local_80->fSchemaInfo);
    while (bVar3 = BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::hasMoreElements(&importingEnum)
          , bVar3 != false) {
      curRef = BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::nextElement(&importingEnum);
      pGVar2 = local_80->fGrammarResolver;
      SchemaInfo::getTargetNSURIString(curRef);
      aGrammar_1 = (SchemaGrammar *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)pGVar2);
      pRVar4 = SchemaGrammar::getValidSubstitutionGroups(aGrammar_1);
      subsElemList = RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>
                     ::get(pRVar4,chainElemName,chainElemURI);
      if ((subsElemList == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) ||
         (bVar3 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::containsElement
                            (subsElemList,&local_90,0), bVar3 == true)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::addElement(subsElemList,&local_90);
      }
    }
    chainElemDecl = SchemaElementDecl::getSubstitutionGroupElem(chainElemDecl);
    BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::_BaseRefVectorEnumerator(&importingEnum);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::buildValidSubstitutionListF
          (TraverseSchema *this,DOMElement *elem,SchemaElementDecl *elemDecl,
          SchemaElementDecl *subsElemDecl)

{
  GrammarResolver *pGVar1;
  bool bVar2;
  uint uVar3;
  RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this_00;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this_01;
  SchemaElementDecl **ppSVar4;
  DatatypeValidator *validator;
  ComplexTypeInfo *typeInfo;
  long in_FS_OFFSET;
  uint i;
  int elemURI;
  int subsElemURI;
  uint elemSize;
  SchemaElementDecl *chainElem;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *validSubs;
  XMLCh *elemName;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *validSubsElements;
  XMLCh *subsElemName;
  SchemaGrammar *aGrammar;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = XMLElementDecl::getURI((XMLElementDecl *)elemDecl);
  elemName = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
  validSubsElements =
       RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
                 (this->fValidSubstitutionGroups,elemName,uVar3);
  if (validSubsElements == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) goto LAB_00116157;
  uVar3 = XMLElementDecl::getURI((XMLElementDecl *)subsElemDecl);
  subsElemName = XMLElementDecl::getBaseName((XMLElementDecl *)subsElemDecl);
  validSubs = RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
                        (this->fValidSubstitutionGroups,subsElemName,uVar3);
  if (validSubs == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) {
    if (uVar3 == this->fTargetNSURI) goto LAB_00116157;
    pGVar1 = this->fGrammarResolver;
    (**(code **)(*(long *)this->fURIStringPool + 0x50))(this->fURIStringPool,uVar3);
    aGrammar = (SchemaGrammar *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)pGVar1);
    if (aGrammar == (SchemaGrammar *)0x0) goto LAB_00116157;
    this_00 = SchemaGrammar::getValidSubstitutionGroups(aGrammar);
    validSubs = RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
                get(this_00,subsElemName,uVar3);
    if (validSubs == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) goto LAB_00116157;
    this_01 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)
              xercesc_2_7::XMemory::operator_new(0x20,this->fGrammarPoolMemoryManager);
    ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf(this_01,validSubs);
    validSubs = this_01;
    RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::put
              (this->fValidSubstitutionGroups,subsElemName,uVar3,this_01);
  }
  uVar3 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::size(validSubsElements);
  for (i = 0; i < uVar3; i = i + 1) {
    ppSVar4 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::elementAt(validSubsElements,i);
    chainElem = *ppSVar4;
    bVar2 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::containsElement(validSubs,&chainElem,0);
    if (bVar2 == false) {
      validator = SchemaElementDecl::getDatatypeValidator(chainElem);
      typeInfo = SchemaElementDecl::getComplexTypeInfo(chainElem);
      bVar2 = isSubstitutionGroupValid(this,elem,subsElemDecl,typeInfo,validator,(XMLCh *)0x0,false)
      ;
      if (bVar2 != false) {
        ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::addElement(validSubs,&chainElem);
        buildValidSubstitutionListB(this,elem,chainElem,subsElemDecl);
      }
    }
  }
LAB_00116157:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::checkEnumerationRequiredNotation
          (TraverseSchema *this,DOMElement *elem,XMLCh *name,XMLCh *type)

{
  bool bVar1;
  XMLCh *str1;
  XMLCh *localPart;
  
  str1 = getLocalPart(this,type);
  bVar1 = XMLString::equals(str1,(XMLCh *)&XMLUni::fgNotationString);
  if (bVar1 != false) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x6a,name,(XMLCh *)0x0,(XMLCh *)0x0
                      ,(XMLCh *)0x0);
  }
  return;
}


XercesGroupInfo * __thiscall
xercesc_2_7::TraverseSchema::processGroupRef(TraverseSchema *this,DOMElement *elem,XMLCh *refName)

{
  long lVar1;
  XMLStringPool *pXVar2;
  code *pcVar3;
  SchemaInfo *toRestore;
  bool bVar4;
  int iVar5;
  uint namespaceURI;
  DOMElement *pDVar6;
  XMLCh *pXVar7;
  SchemaInfo **chars;
  XMLCh *pXVar8;
  long *this_00;
  RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *pRVar9;
  void *pvVar10;
  SchemaInfo *pSVar11;
  ComplexTypeInfo *typeInfo;
  long in_FS_OFFSET;
  uint nameIndex;
  ListType infoType;
  uint saveScope;
  uint uriId;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  XercesGroupInfo *groupInfo;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uriStr;
  SchemaInfo *saveInfo;
  Grammar *aGrammar;
  SchemaInfo *impInfo;
  DOMElement *groupElem;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pDVar6 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  pDVar6 = checkContent(this,elem,pDVar6,true);
  if (pDVar6 != (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x2a,
                      (XMLCh *)&SchemaSymbols::fgELT_GROUP,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  pXVar7 = getPrefix(this,refName);
  chars = (SchemaInfo **)getLocalPart(this,refName);
  pXVar7 = resolvePrefixToURI(this,elem,pXVar7);
  XMLBuffer::set(&this->fBuffer,pXVar7);
  XMLBuffer::append(&this->fBuffer,0x2c);
  XMLBuffer::append(&this->fBuffer,(XMLCh *)chars);
  pXVar2 = this->fStringPool;
  pcVar3 = *(code **)(*(long *)this->fStringPool + 0x28);
  pXVar8 = XMLBuffer::getRawBuffer(&this->fBuffer);
  nameIndex = (*pcVar3)(pXVar2,pXVar8);
  bVar4 = ValueVectorOf<unsigned_int>::containsElement(this->fCurrentGroupStack,&nameIndex,0);
  if (bVar4 != false) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,99,(XMLCh *)chars,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    groupInfo = (XercesGroupInfo *)0x0;
    goto LAB_001167d0;
  }
  toRestore = this->fSchemaInfo;
  infoType = INCLUDE;
  saveScope = this->fCurrentScope;
  bVar4 = XMLString::equals(pXVar7,this->fTargetNSURIString);
  if (bVar4 == true) {
    pRVar9 = this->fGroupRegistry;
    pvVar10 = (void *)(**(code **)(*(long *)this->fStringPool + 0x50))(this->fStringPool,nameIndex);
    groupInfo = RefHashTableOf<xercesc_2_7::XercesGroupInfo>::get(pRVar9,pvVar10);
  }
  else {
    uriId = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
    bVar4 = SchemaInfo::isImportingNS(this->fSchemaInfo,uriId);
    if (bVar4 != true) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,pXVar7,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      groupInfo = (XercesGroupInfo *)0x0;
      goto LAB_001167d0;
    }
    this_00 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
    if ((this_00 == (long *)0x0) || (iVar5 = (**(code **)(*this_00 + 0x28))(this_00), iVar5 != 1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x48,pXVar7,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      groupInfo = (XercesGroupInfo *)0x0;
      goto LAB_001167d0;
    }
    pRVar9 = SchemaGrammar::getGroupInfoRegistry((SchemaGrammar *)this_00);
    pvVar10 = (void *)(**(code **)(*(long *)this->fStringPool + 0x50))(this->fStringPool,nameIndex);
    groupInfo = RefHashTableOf<xercesc_2_7::XercesGroupInfo>::get(pRVar9,pvVar10);
    if (groupInfo == (XercesGroupInfo *)0x0) {
      pSVar11 = this->fSchemaInfo;
      namespaceURI = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
      pSVar11 = SchemaInfo::getImportInfo(pSVar11,namespaceURI);
      if ((pSVar11 == (SchemaInfo *)0x0) ||
         (bVar4 = SchemaInfo::getProcessed(pSVar11), bVar4 != false)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x75,
                          (XMLCh *)&SchemaSymbols::fgELT_GROUP,pXVar7,(XMLCh *)chars,(XMLCh *)0x0);
        groupInfo = (XercesGroupInfo *)0x0;
        goto LAB_001167d0;
      }
      infoType = IMPORT;
      restoreSchemaInfo(this,pSVar11,IMPORT,0xfffffffe);
    }
  }
  if (groupInfo == (XercesGroupInfo *)0x0) {
    pDVar6 = (DOMElement *)
             xercesc_2_7::SchemaInfo::getTopLevelComponent
                       ((ushort)this->fSchemaInfo,(ushort *)0x2,
                        (ushort *)&SchemaSymbols::fgELT_GROUP,chars);
    if (pDVar6 == (DOMElement *)0x0) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x75,
                        (XMLCh *)&SchemaSymbols::fgELT_GROUP,pXVar7,(XMLCh *)chars,(XMLCh *)0x0);
      if (toRestore != this->fSchemaInfo) {
        restoreSchemaInfo(this,toRestore,infoType,saveScope);
      }
    }
    else {
      groupInfo = traverseGroupDecl(this,pDVar6,true);
      restoreSchemaInfo(this,toRestore,infoType,saveScope);
      if ((groupInfo != (XercesGroupInfo *)0x0) &&
         ((this->fCurrentGroupInfo != (XercesGroupInfo *)0x0 || (infoType == IMPORT)))) {
        if (infoType == IMPORT) {
          typeInfo = this->fCurrentComplexType;
        }
        else {
          typeInfo = (ComplexTypeInfo *)0x0;
        }
        copyGroupElements(this,elem,groupInfo,this->fCurrentGroupInfo,typeInfo);
      }
    }
  }
  else {
    copyGroupElements(this,elem,groupInfo,this->fCurrentGroupInfo,this->fCurrentComplexType);
  }
LAB_001167d0:
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return groupInfo;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


XercesAttGroupInfo * __thiscall
xercesc_2_7::TraverseSchema::processAttributeGroupRef
          (TraverseSchema *this,DOMElement *elem,XMLCh *refName,ComplexTypeInfo *typeInfo)

{
  uint saveScope_00;
  SchemaInfo *this_00;
  bool bVar1;
  int namespaceURI;
  uint namespaceURI_00;
  DOMElement *pDVar2;
  XercesAttGroupInfo *pXVar3;
  long in_FS_OFFSET;
  ListType infoType;
  uint saveScope;
  uint uriId;
  Janitor_xercesc_2_7__XSAnnotation_ janAnnot;
  DOMElement *local_60;
  XercesAttGroupInfo *attGroupInfo;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uriStr;
  SchemaInfo *saveInfo;
  SchemaInfo *impInfo;
  DOMElement *attGroupElem;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pDVar2 = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&elem->super_DOMNode);
  pDVar2 = checkContent(this,elem,pDVar2,true);
  if (pDVar2 != (DOMElement *)0x0) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x2a,
                      (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP,(XMLCh *)0x0,(XMLCh *)0x0,
                      (XMLCh *)0x0);
  }
  Janitor<xercesc_2_7::XSAnnotation>::Janitor(&janAnnot,this->fAnnotation);
  prefix = getPrefix(this,refName);
  localPart = getLocalPart(this,refName);
  uriStr = resolvePrefixToURI(this,elem,prefix);
  attGroupInfo = (XercesAttGroupInfo *)0x0;
  saveInfo = this->fSchemaInfo;
  infoType = INCLUDE;
  saveScope_00 = this->fCurrentScope;
  bVar1 = XMLString::equals(uriStr,this->fTargetNSURIString);
  if (bVar1 == true) {
    attGroupInfo = RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::get
                             (this->fAttGroupRegistry,localPart);
  }
  else {
    namespaceURI = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
    bVar1 = SchemaInfo::isImportingNS(this->fSchemaInfo,namespaceURI);
    if (bVar1 != true) {
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9f,uriStr,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
      pXVar3 = (XercesAttGroupInfo *)0x0;
      goto LAB_00116cc2;
    }
    attGroupInfo = traverseAttributeGroupDeclNS(this,elem,uriStr,localPart);
    if (attGroupInfo == (XercesAttGroupInfo *)0x0) {
      this_00 = this->fSchemaInfo;
      namespaceURI_00 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
      impInfo = SchemaInfo::getImportInfo(this_00,namespaceURI_00);
      if ((impInfo == (SchemaInfo *)0x0) ||
         (bVar1 = SchemaInfo::getProcessed(impInfo), bVar1 != false)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x75,
                          (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP,uriStr,localPart,
                          (XMLCh *)0x0);
        pXVar3 = (XercesAttGroupInfo *)0x0;
        goto LAB_00116cc2;
      }
      infoType = IMPORT;
      restoreSchemaInfo(this,impInfo,IMPORT,0xfffffffe);
    }
  }
  if (attGroupInfo == (XercesAttGroupInfo *)0x0) {
    attGroupElem = (DOMElement *)
                   xercesc_2_7::SchemaInfo::getTopLevelComponent
                             ((ushort)this->fSchemaInfo,(ushort *)0x4,
                              (ushort *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP,
                              (SchemaInfo **)localPart);
    if (attGroupElem != (DOMElement *)0x0) {
      local_60 = attGroupElem;
      bVar1 = ValueVectorOf<const_xercesc_2_7::DOMElement*>::containsElement
                        (this->fDeclStack,&local_60,0);
      if (bVar1 == false) {
        attGroupInfo = traverseAttributeGroupDecl(this,attGroupElem,typeInfo,true);
        if ((attGroupInfo != (XercesAttGroupInfo *)0x0) &&
           (this->fCurrentAttGroupInfo != (XercesAttGroupInfo *)0x0)) {
          copyAttGroupAttributes
                    (this,elem,attGroupInfo,this->fCurrentAttGroupInfo,(ComplexTypeInfo *)0x0);
        }
        pXVar3 = attGroupInfo;
        if (saveInfo != this->fSchemaInfo) {
          restoreSchemaInfo(this,saveInfo,infoType,saveScope_00);
          pXVar3 = attGroupInfo;
        }
      }
      else {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,99,refName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        pXVar3 = (XercesAttGroupInfo *)0x0;
      }
      goto LAB_00116cc2;
    }
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x75,
                      (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP,uriStr,localPart,(XMLCh *)0x0);
  }
  if (attGroupInfo != (XercesAttGroupInfo *)0x0) {
    copyAttGroupAttributes(this,elem,attGroupInfo,this->fCurrentAttGroupInfo,typeInfo);
  }
  pXVar3 = attGroupInfo;
  if (saveInfo != this->fSchemaInfo) {
    restoreSchemaInfo(this,saveInfo,infoType,0xfffffffe);
    pXVar3 = attGroupInfo;
  }
LAB_00116cc2:
  Janitor<xercesc_2_7::XSAnnotation>::_Janitor(&janAnnot);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::processElements
          (TraverseSchema *this,DOMElement *elem,ComplexTypeInfo *baseTypeInfo,
          ComplexTypeInfo *newTypeInfo)

{
  long *this_00;
  GrammarResolver *pGVar1;
  bool bVar2;
  uint uVar3;
  uint newEnclosingScope;
  uint uVar4;
  uint uVar5;
  uint newEnclosingScope_00;
  int iVar6;
  SchemaElementDecl *this_01;
  long *plVar7;
  XMLCh *text1;
  SchemaElementDecl *this_02;
  ComplexTypeInfo *pCVar8;
  ComplexTypeInfo *pCVar9;
  DatatypeValidator *pDVar10;
  DatatypeValidator *pDVar11;
  uint i;
  uint elemCount;
  uint newTypeScope;
  int schemaURI;
  int elemURI;
  int elemScope;
  SchemaGrammar *aGrammar;
  SchemaElementDecl *elemDecl;
  Grammar *aGrammar_1;
  XMLCh *localPart;
  SchemaElementDecl *other;
  
  uVar3 = ComplexTypeInfo::elementCount(baseTypeInfo);
  if (uVar3 != 0) {
    newEnclosingScope = ComplexTypeInfo::getScopeDefined(newTypeInfo);
    uVar4 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool);
    for (i = 0; i < uVar3; i = i + 1) {
      this_00 = (long *)this->fSchemaGrammar;
      this_01 = ComplexTypeInfo::elementAt(baseTypeInfo,i);
      uVar5 = XMLElementDecl::getURI((XMLElementDecl *)this_01);
      newEnclosingScope_00 = SchemaElementDecl::getEnclosingScope(this_01);
      if (newEnclosingScope_00 == 0xfffffffe) {
LAB_00116f71:
        ComplexTypeInfo::addElement(newTypeInfo,this_01);
      }
      else if (((uVar5 == this->fTargetNSURI) || (uVar5 == uVar4)) ||
              (uVar5 == this->fEmptyNamespaceURI)) {
LAB_00116e6c:
        text1 = XMLElementDecl::getBaseName((XMLElementDecl *)this_01);
        this_02 = (SchemaElementDecl *)
                  (**(code **)(*this_00 + 0x58))(this_00,uVar5,text1,0,newEnclosingScope);
        if (this_02 == (SchemaElementDecl *)0x0) {
          SchemaElementDecl::setEnclosingScope(this_01,newEnclosingScope);
          SchemaGrammar::putGroupElemDecl((SchemaGrammar *)this_00,(XMLElementDecl *)this_01);
          SchemaElementDecl::setEnclosingScope(this_01,newEnclosingScope_00);
          goto LAB_00116f71;
        }
        pCVar8 = SchemaElementDecl::getComplexTypeInfo(this_01);
        pCVar9 = SchemaElementDecl::getComplexTypeInfo(this_02);
        if (pCVar8 == pCVar9) {
          pDVar10 = SchemaElementDecl::getDatatypeValidator(this_01);
          pDVar11 = SchemaElementDecl::getDatatypeValidator(this_02);
          if (pDVar10 != pDVar11) goto LAB_00116ef5;
          bVar2 = false;
        }
        else {
LAB_00116ef5:
          bVar2 = true;
        }
        if (bVar2) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4f,text1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
        }
      }
      else {
        pGVar1 = this->fGrammarResolver;
        (**(code **)(*(long *)this->fURIStringPool + 0x50))(this->fURIStringPool,uVar5);
        plVar7 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)pGVar1);
        if ((plVar7 == (long *)0x0) || (iVar6 = (**(code **)(*plVar7 + 0x28))(plVar7), iVar6 != 1))
        {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) goto LAB_00116e6c;
      }
    }
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::processElements
          (TraverseSchema *this,DOMElement *elem,XercesGroupInfo *fromGroup,
          ComplexTypeInfo *typeInfo)

{
  bool bVar1;
  uint uVar2;
  uint newEnclosingScope;
  uint newEnclosingScope_00;
  uint uVar3;
  SchemaElementDecl *this_00;
  XMLCh *text1;
  SchemaElementDecl *this_01;
  ComplexTypeInfo *pCVar4;
  ComplexTypeInfo *pCVar5;
  DatatypeValidator *pDVar6;
  DatatypeValidator *pDVar7;
  uint i;
  uint elemCount;
  int newScope;
  int elemScope;
  int elemURI;
  SchemaElementDecl *elemDecl;
  XMLCh *localPart;
  SchemaElementDecl *other;
  
  uVar2 = XercesGroupInfo::elementCount(fromGroup);
  newEnclosingScope = ComplexTypeInfo::getScopeDefined(typeInfo);
  i = 0;
  do {
    if (uVar2 <= i) {
      return;
    }
    this_00 = XercesGroupInfo::elementAt(fromGroup,i);
    newEnclosingScope_00 = SchemaElementDecl::getEnclosingScope(this_00);
    if (newEnclosingScope_00 != 0xfffffffe) {
      uVar3 = XMLElementDecl::getURI((XMLElementDecl *)this_00);
      text1 = XMLElementDecl::getBaseName((XMLElementDecl *)this_00);
      this_01 = (SchemaElementDecl *)
                (**(code **)(*(long *)this->fSchemaGrammar + 0x58))
                          (this->fSchemaGrammar,uVar3,text1,0,newEnclosingScope);
      if (this_01 == (SchemaElementDecl *)0x0) {
        SchemaElementDecl::setEnclosingScope(this_00,newEnclosingScope);
        SchemaGrammar::putGroupElemDecl(this->fSchemaGrammar,(XMLElementDecl *)this_00);
        SchemaElementDecl::setEnclosingScope(this_00,newEnclosingScope_00);
        ComplexTypeInfo::addElement(typeInfo,this_00);
      }
      else {
        pCVar4 = SchemaElementDecl::getComplexTypeInfo(this_00);
        pCVar5 = SchemaElementDecl::getComplexTypeInfo(this_01);
        if (pCVar4 == pCVar5) {
          pDVar6 = SchemaElementDecl::getDatatypeValidator(this_00);
          pDVar7 = SchemaElementDecl::getDatatypeValidator(this_01);
          if (pDVar6 != pDVar7) goto LAB_001170b6;
          bVar1 = false;
        }
        else {
LAB_001170b6:
          bVar1 = true;
        }
        if (bVar1) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4f,text1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
        }
      }
    }
    i = i + 1;
  } while( true );
}


void __thiscall
xercesc_2_7::TraverseSchema::copyGroupElements
          (TraverseSchema *this,DOMElement *elem,XercesGroupInfo *fromGroup,XercesGroupInfo *toGroup
          ,ComplexTypeInfo *typeInfo)

{
  bool bVar1;
  uint uVar2;
  uint newEnclosingScope;
  uint newEnclosingScope_00;
  uint uVar3;
  SchemaElementDecl *this_00;
  XMLCh *text1;
  SchemaElementDecl *this_01;
  ComplexTypeInfo *pCVar4;
  ComplexTypeInfo *pCVar5;
  DatatypeValidator *pDVar6;
  DatatypeValidator *pDVar7;
  uint i;
  uint elemCount;
  int newScope;
  int elemScope;
  int elemURI;
  SchemaElementDecl *elemDecl;
  XMLCh *localPart;
  SchemaElementDecl *other;
  
  uVar2 = XercesGroupInfo::elementCount(fromGroup);
  if (typeInfo == (ComplexTypeInfo *)0x0) {
    newEnclosingScope = 0;
  }
  else {
    newEnclosingScope = ComplexTypeInfo::getScopeDefined(typeInfo);
    XercesGroupInfo::setCheckElementConsistency(fromGroup,false);
  }
  i = 0;
  do {
    if (uVar2 <= i) {
      return;
    }
    this_00 = XercesGroupInfo::elementAt(fromGroup,i);
    if (typeInfo == (ComplexTypeInfo *)0x0) {
LAB_00117344:
      if (toGroup != (XercesGroupInfo *)0x0) {
        XercesGroupInfo::addElement(toGroup,this_00);
      }
    }
    else {
      newEnclosingScope_00 = SchemaElementDecl::getEnclosingScope(this_00);
      if (newEnclosingScope_00 == 0xfffffffe) {
LAB_00117331:
        ComplexTypeInfo::addElement(typeInfo,this_00);
        goto LAB_00117344;
      }
      uVar3 = XMLElementDecl::getURI((XMLElementDecl *)this_00);
      text1 = XMLElementDecl::getBaseName((XMLElementDecl *)this_00);
      this_01 = (SchemaElementDecl *)
                (**(code **)(*(long *)this->fSchemaGrammar + 0x58))
                          (this->fSchemaGrammar,uVar3,text1,0,this->fCurrentScope);
      if (this_01 == (SchemaElementDecl *)0x0) {
        SchemaElementDecl::setEnclosingScope(this_00,newEnclosingScope);
        SchemaGrammar::putGroupElemDecl(this->fSchemaGrammar,(XMLElementDecl *)this_00);
        SchemaElementDecl::setEnclosingScope(this_00,newEnclosingScope_00);
        goto LAB_00117331;
      }
      pCVar4 = SchemaElementDecl::getComplexTypeInfo(this_00);
      pCVar5 = SchemaElementDecl::getComplexTypeInfo(this_01);
      if (pCVar4 == pCVar5) {
        pDVar6 = SchemaElementDecl::getDatatypeValidator(this_00);
        pDVar7 = SchemaElementDecl::getDatatypeValidator(this_01);
        if (pDVar6 != pDVar7) goto LAB_001172b1;
        bVar1 = false;
      }
      else {
LAB_001172b1:
        bVar1 = true;
      }
      if (bVar1) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x4f,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
    }
    i = i + 1;
  } while( true );
}


void __thiscall
xercesc_2_7::TraverseSchema::copyAttGroupAttributes
          (TraverseSchema *this,DOMElement *elem,XercesAttGroupInfo *fromAttGroup,
          XercesAttGroupInfo *toAttGroup,ComplexTypeInfo *typeInfo)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uriId;
  ValidatorType VVar4;
  SchemaAttDef *pSVar5;
  QName *this_00;
  XMLCh *text1;
  DatatypeValidator *this_01;
  SchemaAttDef *pSVar6;
  SchemaAttDef *pSVar7;
  uint i;
  uint j;
  uint attCount;
  uint anyAttCount;
  SchemaAttDef *attDef;
  QName *attName;
  XMLCh *localPart;
  DatatypeValidator *attDV;
  SchemaAttDef *clonedAttDef;
  
  uVar3 = XercesAttGroupInfo::attributeCount(fromAttGroup);
  i = 0;
  do {
    if (uVar3 <= i) {
      if (toAttGroup != (XercesAttGroupInfo *)0x0) {
        uVar3 = XercesAttGroupInfo::anyAttributeCount(fromAttGroup);
        for (j = 0; j < uVar3; j = j + 1) {
          pSVar5 = XercesAttGroupInfo::anyAttributeAt(fromAttGroup,j);
          XercesAttGroupInfo::addAnyAttDef(toAttGroup,pSVar5,true);
        }
      }
      return;
    }
    pSVar5 = XercesAttGroupInfo::attributeAt(fromAttGroup,i);
    this_00 = SchemaAttDef::getAttName(pSVar5);
    text1 = QName::getLocalPart(this_00);
    this_01 = SchemaAttDef::getDatatypeValidator(pSVar5);
    if (typeInfo == (ComplexTypeInfo *)0x0) {
      QName::getURI(this_00);
      cVar2 = xercesc_2_7::XercesAttGroupInfo::containsAttribute((ushort *)toAttGroup,(uint)text1);
      if (cVar2 != '\0') {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x35,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
        goto LAB_00117668;
      }
      if (this_01 == (DatatypeValidator *)0x0) {
LAB_001175f3:
        bVar1 = false;
      }
      else {
        VVar4 = DatatypeValidator::getType(this_01);
        if (VVar4 != ID) goto LAB_001175f3;
        bVar1 = true;
      }
      if (bVar1) {
        bVar1 = XercesAttGroupInfo::containsTypeWithId(toAttGroup);
        if (bVar1 != false) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9a,text1,(XMLCh *)0x0,
                            (XMLCh *)0x0,(XMLCh *)0x0);
          goto LAB_00117668;
        }
        XercesAttGroupInfo::setTypeWithId(toAttGroup,true);
      }
      XercesAttGroupInfo::addAttDef(toAttGroup,pSVar5,true);
    }
    else {
      uriId = QName::getURI(this_00);
      pSVar6 = ComplexTypeInfo::getAttDef(typeInfo,text1,uriId);
      if (pSVar6 == (SchemaAttDef *)0x0) {
        if (this_01 == (DatatypeValidator *)0x0) {
LAB_00117487:
          bVar1 = false;
        }
        else {
          VVar4 = DatatypeValidator::getType(this_01);
          if (VVar4 != ID) goto LAB_00117487;
          bVar1 = true;
        }
        if (bVar1) {
          bVar1 = ComplexTypeInfo::containsAttWithTypeId(typeInfo);
          if (bVar1 != false) {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x99,text1,(XMLCh *)0x0,
                              (XMLCh *)0x0,(XMLCh *)0x0);
            goto LAB_00117668;
          }
          ComplexTypeInfo::setAttWithTypeId(typeInfo,true);
        }
        pSVar6 = (SchemaAttDef *)
                 xercesc_2_7::XMemory::operator_new(0x78,this->fGrammarPoolMemoryManager);
        xercesc_2_7::SchemaAttDef::SchemaAttDef(pSVar6,pSVar5);
        xercesc_2_7::ComplexTypeInfo::addAttDef((SchemaAttDef *)typeInfo);
        pSVar7 = SchemaAttDef::getBaseAttDecl(pSVar6);
        if (pSVar7 == (SchemaAttDef *)0x0) {
          SchemaAttDef::setBaseAttDecl(pSVar6,pSVar5);
        }
        if (toAttGroup != (XercesAttGroupInfo *)0x0) {
          XercesAttGroupInfo::addAttDef(toAttGroup,pSVar5,true);
        }
      }
      else {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x35,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
    }
LAB_00117668:
    i = i + 1;
  } while( true );
}


void __thiscall
xercesc_2_7::TraverseSchema::attWildCardIntersection
          (TraverseSchema *this,SchemaAttDef *resultWildCard,SchemaAttDef *compareWildCard)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  QName *pQVar5;
  uint *puVar6;
  long in_FS_OFFSET;
  bool found;
  uint nameURI;
  uint compareURI;
  uint i;
  uint i_1;
  AttTypes typeR;
  AttTypes typeC;
  uint listSize_1;
  uint listSize;
  ValueVectorOf_unsigned_int_ *nameURIList;
  ValueVectorOf_unsigned_int_ *uriListR;
  ValueVectorOf_unsigned_int_ *uriListC;
  QName *qnameR;
  ValueVectorOf_unsigned_int_ tmpURIList;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  typeR = XMLAttDef::getType((XMLAttDef *)resultWildCard);
  typeC = XMLAttDef::getType((XMLAttDef *)compareWildCard);
  if ((typeC != Any_Any) && (typeR != AttTypes_Unknown)) {
    if ((typeR == Any_Any) || (typeC == AttTypes_Unknown)) {
      SchemaAttDef::resetNamespaceList(resultWildCard);
      copyWildCardData(this,compareWildCard,resultWildCard);
    }
    else if (((typeC == Any_Other) && (typeR == Any_List)) ||
            ((typeR == Any_Other && (typeC == Any_List)))) {
      compareURI = 0;
      nameURIList = (ValueVectorOf_unsigned_int_ *)0x0;
      if (typeC == Any_List) {
        nameURIList = SchemaAttDef::getNamespaceList(compareWildCard);
        pQVar5 = SchemaAttDef::getAttName(resultWildCard);
        compareURI = QName::getURI(pQVar5);
      }
      else {
        nameURIList = SchemaAttDef::getNamespaceList(resultWildCard);
        pQVar5 = SchemaAttDef::getAttName(compareWildCard);
        compareURI = QName::getURI(pQVar5);
      }
      if (nameURIList == (ValueVectorOf_unsigned_int_ *)0x0) {
        listSize = 0;
      }
      else {
        listSize = ValueVectorOf<unsigned_int>::size(nameURIList);
      }
      if (listSize != 0) {
        bVar2 = false;
        ValueVectorOf<unsigned_int>::ValueVectorOf
                  (&tmpURIList,listSize,this->fGrammarPoolMemoryManager,false);
        for (i = 0; i < listSize; i = i + 1) {
          puVar6 = ValueVectorOf<unsigned_int>::elementAt(nameURIList,i);
          nameURI = *puVar6;
          if ((compareURI == nameURI) || (this->fEmptyNamespaceURI == nameURI)) {
            bVar2 = true;
          }
          else {
            ValueVectorOf<unsigned_int>::addElement(&tmpURIList,&nameURI);
          }
        }
        if ((bVar2) || (typeC == Any_List)) {
          SchemaAttDef::setNamespaceList(resultWildCard,&tmpURIList);
        }
        ValueVectorOf<unsigned_int>::_ValueVectorOf(&tmpURIList);
      }
      if (typeC == Any_List) {
        copyWildCardData(this,compareWildCard,resultWildCard);
      }
    }
    else if ((typeR == Any_List) && (typeC == Any_List)) {
      uriListR = SchemaAttDef::getNamespaceList(resultWildCard);
      uriListC = SchemaAttDef::getNamespaceList(compareWildCard);
      if (uriListC == (ValueVectorOf_unsigned_int_ *)0x0) {
        listSize_1 = 0;
      }
      else {
        listSize_1 = ValueVectorOf<unsigned_int>::size(uriListC);
      }
      if (listSize_1 == 0) {
        SchemaAttDef::resetNamespaceList(resultWildCard);
      }
      else {
        ValueVectorOf<unsigned_int>::ValueVectorOf
                  (&tmpURIList,listSize_1,this->fGrammarPoolMemoryManager,false);
        for (i_1 = 0; i_1 < listSize_1; i_1 = i_1 + 1) {
          puVar6 = ValueVectorOf<unsigned_int>::elementAt(uriListC,i_1);
          nameURI = *puVar6;
          if ((uriListR == (ValueVectorOf_unsigned_int_ *)0x0) ||
             (bVar2 = ValueVectorOf<unsigned_int>::containsElement(uriListR,&nameURI,0),
             bVar2 == false)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            ValueVectorOf<unsigned_int>::addElement(&tmpURIList,&nameURI);
          }
        }
        SchemaAttDef::setNamespaceList(resultWildCard,&tmpURIList);
        ValueVectorOf<unsigned_int>::_ValueVectorOf(&tmpURIList);
      }
    }
    else if ((typeR == Any_Other) && (typeC == Any_Other)) {
      qnameR = SchemaAttDef::getAttName(resultWildCard);
      uVar3 = QName::getURI(qnameR);
      pQVar5 = SchemaAttDef::getAttName(compareWildCard);
      uVar4 = QName::getURI(pQVar5);
      if (uVar3 != uVar4) {
        uVar3 = QName::getURI(qnameR);
        if (uVar3 == this->fEmptyNamespaceURI) {
          pQVar5 = SchemaAttDef::getAttName(compareWildCard);
          uVar3 = QName::getURI(pQVar5);
          QName::setURI(qnameR,uVar3);
        }
        else {
          pQVar5 = SchemaAttDef::getAttName(compareWildCard);
          uVar3 = QName::getURI(pQVar5);
          if (uVar3 != this->fEmptyNamespaceURI) {
            QName::setURI(qnameR,this->fEmptyNamespaceURI);
            XMLAttDef::setType((XMLAttDef *)resultWildCard,AttTypes_Unknown);
          }
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Could not reconcile some variable overlaps */

void __thiscall
xercesc_2_7::TraverseSchema::attWildCardUnion
          (TraverseSchema *this,SchemaAttDef *resultWildCard,SchemaAttDef *compareWildCard)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  QName *pQVar7;
  long in_FS_OFFSET;
  bool containsAbsent;
  bool containsNamespace;
  uint uriName;
  uint i;
  AttTypes typeR;
  AttTypes typeC;
  uint listSizeC;
  ValueVectorOf_unsigned_int_ *nameURIList;
  ValueVectorOf_unsigned_int_ *uriListR;
  ValueVectorOf_unsigned_int_ *uriListC;
  QName *qnameR;
  QName *attNameR;
  ValueVectorOf_unsigned_int_ tmpURIList;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  typeR = XMLAttDef::getType((XMLAttDef *)resultWildCard);
  typeC = XMLAttDef::getType((XMLAttDef *)compareWildCard);
  if ((typeR != Any_Any) && (typeR != AttTypes_Unknown)) {
    if ((typeC == Any_Any) || (typeC == AttTypes_Unknown)) {
      SchemaAttDef::resetNamespaceList(resultWildCard);
      copyWildCardData(this,compareWildCard,resultWildCard);
    }
    else if ((typeR == Any_List) && (typeC == Any_List)) {
      uriListR = SchemaAttDef::getNamespaceList(resultWildCard);
      uriListC = SchemaAttDef::getNamespaceList(compareWildCard);
      if (uriListC == (ValueVectorOf_unsigned_int_ *)0x0) {
        listSizeC = 0;
      }
      else {
        listSizeC = ValueVectorOf<unsigned_int>::size(uriListC);
      }
      if (listSizeC != 0) {
        if ((uriListR == (ValueVectorOf_unsigned_int_ *)0x0) ||
           (uVar4 = ValueVectorOf<unsigned_int>::size(uriListR), uVar4 == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          SchemaAttDef::setNamespaceList(resultWildCard,uriListC);
        }
        else {
          ValueVectorOf<unsigned_int>::ValueVectorOf(&tmpURIList,uriListR);
          for (i = 0; i < listSizeC; i = i + 1) {
            puVar6 = ValueVectorOf<unsigned_int>::elementAt(uriListC,i);
            uriName = *puVar6;
            bVar2 = ValueVectorOf<unsigned_int>::containsElement(uriListR,&uriName,0);
            if (bVar2 != true) {
              ValueVectorOf<unsigned_int>::addElement(&tmpURIList,&uriName);
            }
          }
          SchemaAttDef::setNamespaceList(resultWildCard,&tmpURIList);
          ValueVectorOf<unsigned_int>::_ValueVectorOf(&tmpURIList);
        }
      }
    }
    else {
      if ((typeR == Any_Other) && (typeC == Any_Other)) {
        qnameR = SchemaAttDef::getAttName(resultWildCard);
        uVar4 = QName::getURI(qnameR);
        pQVar7 = SchemaAttDef::getAttName(compareWildCard);
        uVar5 = QName::getURI(pQVar7);
        if (uVar4 != uVar5) {
          QName::setURI(qnameR,this->fEmptyNamespaceURI);
          XMLAttDef::setType((XMLAttDef *)resultWildCard,Any_Other);
        }
      }
      if (((typeC == Any_Other) && (typeR == Any_List)) ||
         ((typeR == Any_Other && (typeC == Any_List)))) {
        nameURIList = (ValueVectorOf_unsigned_int_ *)0x0;
        attNameR = SchemaAttDef::getAttName(resultWildCard);
        uriName = 0;
        if (typeC == Any_List) {
          nameURIList = SchemaAttDef::getNamespaceList(compareWildCard);
          uriName = QName::getURI(attNameR);
        }
        else {
          nameURIList = SchemaAttDef::getNamespaceList(resultWildCard);
          pQVar7 = SchemaAttDef::getAttName(compareWildCard);
          uriName = QName::getURI(pQVar7);
        }
        if (this->fEmptyNamespaceURI == uriName) {
          if (nameURIList == (ValueVectorOf_unsigned_int_ *)0x0) {
            if (typeR == Any_List) {
              XMLAttDef::setType((XMLAttDef *)resultWildCard,Any_Other);
              QName::setURI(attNameR,this->fEmptyNamespaceURI);
            }
          }
          else {
            bVar2 = ValueVectorOf<unsigned_int>::containsElement(nameURIList,&uriName,0);
            if (bVar2 == false) {
              if (typeR == Any_List) {
                XMLAttDef::setType((XMLAttDef *)resultWildCard,Any_Other);
                QName::setURI(attNameR,this->fEmptyNamespaceURI);
              }
            }
            else {
              XMLAttDef::setType((XMLAttDef *)resultWildCard,Any_Any);
              QName::setURI(attNameR,this->fEmptyNamespaceURI);
            }
          }
        }
        else if (nameURIList == (ValueVectorOf_unsigned_int_ *)0x0) {
          XMLAttDef::setType((XMLAttDef *)resultWildCard,AttTypes_Unknown);
          QName::setURI(attNameR,this->fEmptyNamespaceURI);
        }
        else {
          tmpURIList._0_4_ = this->fEmptyNamespaceURI;
          bVar2 = ValueVectorOf<unsigned_int>::containsElement(nameURIList,(uint *)&tmpURIList,0);
          bVar3 = ValueVectorOf<unsigned_int>::containsElement(nameURIList,&uriName,0);
          if ((bVar2 == false) || (bVar3 == false)) {
            if (bVar3 == false) {
              if (bVar2 == false) {
                if (typeR == Any_List) {
                  XMLAttDef::setType((XMLAttDef *)resultWildCard,Any_Other);
                  QName::setURI(attNameR,uriName);
                }
              }
              else {
                XMLAttDef::setType((XMLAttDef *)resultWildCard,AttTypes_Unknown);
                QName::setURI(attNameR,this->fEmptyNamespaceURI);
              }
            }
            else {
              XMLAttDef::setType((XMLAttDef *)resultWildCard,Any_Other);
              QName::setURI(attNameR,this->fEmptyNamespaceURI);
            }
          }
          else {
            XMLAttDef::setType((XMLAttDef *)resultWildCard,Any_Any);
            QName::setURI(attNameR,this->fEmptyNamespaceURI);
          }
        }
        SchemaAttDef::resetNamespaceList(resultWildCard);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
xercesc_2_7::TraverseSchema::checkAttDerivationOK
          (TraverseSchema *this,DOMElement *elem,ComplexTypeInfo *baseTypeInfo,
          ComplexTypeInfo *childTypeInfo)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  DefAttTypes DVar4;
  DefAttTypes DVar5;
  long *plVar6;
  SchemaAttDef *baseAttWildCard_00;
  SchemaAttDef *pSVar7;
  QName *this_00;
  XMLCh *baseName;
  SchemaAttDef *this_01;
  long *plVar8;
  XMLCh *str2;
  XMLCh *str1;
  uint i;
  DefAttTypes baseAttDefType;
  DefAttTypes childAttDefType;
  SchemaAttDefList *childAttList;
  SchemaAttDef *baseAttWildCard;
  SchemaAttDef *childAttWildCard;
  SchemaAttDef *childAttDef;
  QName *childAttName;
  XMLCh *childLocalPart;
  SchemaAttDef *baseAttDef;
  DatatypeValidator *baseDV;
  DatatypeValidator *childDV;
  
  plVar6 = (long *)xercesc_2_7::ComplexTypeInfo::getAttDefList();
  baseAttWildCard_00 = ComplexTypeInfo::getAttWildCard(baseTypeInfo);
  i = 0;
  do {
    uVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
    if (uVar3 <= i) {
      pSVar7 = ComplexTypeInfo::getAttWildCard(childTypeInfo);
      if (pSVar7 != (SchemaAttDef *)0x0) {
        if (baseAttWildCard_00 == (SchemaAttDef *)0x0) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x81);
        }
        else {
          bVar2 = isWildCardSubset(this,baseAttWildCard_00,pSVar7);
          if (bVar2 == true) {
            DVar4 = XMLAttDef::getDefaultType((XMLAttDef *)pSVar7);
            DVar5 = XMLAttDef::getDefaultType((XMLAttDef *)baseAttWildCard_00);
            if (DVar4 < DVar5) {
              reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x84);
            }
          }
          else {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x82);
          }
        }
      }
      return;
    }
    pSVar7 = (SchemaAttDef *)(**(code **)(*plVar6 + 0x70))(plVar6,i);
    this_00 = SchemaAttDef::getAttName(pSVar7);
    baseName = QName::getLocalPart(this_00);
    uVar3 = QName::getURI(this_00);
    this_01 = ComplexTypeInfo::getAttDef(baseTypeInfo,baseName,uVar3);
    if (this_01 == (SchemaAttDef *)0x0) {
      if (baseAttWildCard_00 == (SchemaAttDef *)0x0) {
LAB_00118429:
        bVar2 = true;
      }
      else {
        uVar3 = QName::getURI(this_00);
        bVar2 = wildcardAllowsNamespace(this,baseAttWildCard_00,uVar3);
        if (bVar2 != true) goto LAB_00118429;
        bVar2 = false;
      }
      if (bVar2) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x80,baseName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
    }
    else {
      DVar4 = XMLAttDef::getDefaultType((XMLAttDef *)this_01);
      DVar5 = XMLAttDef::getDefaultType((XMLAttDef *)pSVar7);
      if ((DVar4 == DefAttTypes_Max) && (DVar5 != DefAttTypes_Max)) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x83,baseName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      if (((DVar4 & 2U) != 0) && ((DVar5 & 2U) == 0)) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7d,baseName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      plVar8 = (long *)SchemaAttDef::getDatatypeValidator(this_01);
      SchemaAttDef::getDatatypeValidator(pSVar7);
      if (plVar8 == (long *)0x0) {
LAB_00118331:
        bVar2 = true;
      }
      else {
        cVar1 = (**(code **)(*plVar8 + 0x48))(plVar8);
        if (cVar1 != '\x01') goto LAB_00118331;
        bVar2 = false;
      }
      if (bVar2) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7e,baseName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      if ((DVar4 & 1U) == 0) {
LAB_001183ba:
        bVar2 = false;
      }
      else {
        if ((DVar5 & 1U) != 0) {
          str2 = XMLAttDef::getValue((XMLAttDef *)pSVar7);
          str1 = XMLAttDef::getValue((XMLAttDef *)this_01);
          bVar2 = XMLString::equals(str1,str2);
          if (bVar2 == true) goto LAB_001183ba;
        }
        bVar2 = true;
      }
      if (bVar2) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7f,baseName,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
    }
    i = i + 1;
  } while( true );
}


void __thiscall
xercesc_2_7::TraverseSchema::checkAttDerivationOK
          (TraverseSchema *this,DOMElement *elem,XercesAttGroupInfo *baseAttGrpInfo,
          XercesAttGroupInfo *childAttGrpInfo)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  DefAttTypes DVar7;
  DefAttTypes DVar8;
  XMLAttDef *baseAttWildCard_00;
  SchemaAttDef *this_00;
  QName *this_01;
  XMLCh *text1;
  XMLAttDef *pXVar9;
  long *plVar10;
  XMLCh *str2;
  XMLCh *str1;
  uint i;
  uint baseAttCount;
  uint baseAnyAttCount;
  uint childAttCount;
  uint childAnyAttCount;
  DefAttTypes baseAttDefType;
  DefAttTypes childAttDefType;
  SchemaAttDef *baseAttWildCard;
  SchemaAttDef *childAttDef;
  QName *childAttName;
  XMLCh *childLocalPart;
  SchemaAttDef *baseAttDef;
  DatatypeValidator *baseDV;
  DatatypeValidator *childDV;
  SchemaAttDef *childAttWildCard;
  
  uVar3 = XercesAttGroupInfo::attributeCount(baseAttGrpInfo);
  uVar4 = XercesAttGroupInfo::anyAttributeCount(baseAttGrpInfo);
  uVar5 = XercesAttGroupInfo::attributeCount(childAttGrpInfo);
  uVar6 = XercesAttGroupInfo::anyAttributeCount(childAttGrpInfo);
  if ((((uVar5 != 0) || (uVar6 != 0)) && (uVar3 == 0)) && (uVar4 == 0)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7c);
  }
  if (uVar4 == 0) {
    baseAttWildCard_00 = (XMLAttDef *)0x0;
  }
  else {
    baseAttWildCard_00 = (XMLAttDef *)XercesAttGroupInfo::anyAttributeAt(baseAttGrpInfo,0);
  }
  i = 0;
  do {
    if (uVar5 <= i) {
      if (uVar6 == 0) {
        pXVar9 = (XMLAttDef *)0x0;
      }
      else {
        pXVar9 = (XMLAttDef *)XercesAttGroupInfo::anyAttributeAt(childAttGrpInfo,0);
      }
      if (pXVar9 != (XMLAttDef *)0x0) {
        if (baseAttWildCard_00 == (XMLAttDef *)0x0) {
          reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x81);
        }
        else {
          bVar2 = isWildCardSubset(this,(SchemaAttDef *)baseAttWildCard_00,(SchemaAttDef *)pXVar9);
          if (bVar2 == true) {
            DVar7 = XMLAttDef::getDefaultType(pXVar9);
            DVar8 = XMLAttDef::getDefaultType(baseAttWildCard_00);
            if (DVar7 < DVar8) {
              reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x84);
            }
          }
          else {
            reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x82);
          }
        }
      }
      return;
    }
    this_00 = XercesAttGroupInfo::attributeAt(childAttGrpInfo,i);
    this_01 = SchemaAttDef::getAttName(this_00);
    text1 = QName::getLocalPart(this_01);
    QName::getURI(this_01);
    pXVar9 = (XMLAttDef *)
             xercesc_2_7::XercesAttGroupInfo::getAttDef((ushort *)baseAttGrpInfo,(int)text1);
    if (pXVar9 == (XMLAttDef *)0x0) {
      if (baseAttWildCard_00 == (XMLAttDef *)0x0) {
LAB_00118861:
        bVar2 = true;
      }
      else {
        uVar3 = QName::getURI(this_01);
        bVar2 = wildcardAllowsNamespace(this,(SchemaAttDef *)baseAttWildCard_00,uVar3);
        if (bVar2 != true) goto LAB_00118861;
        bVar2 = false;
      }
      if (bVar2) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x80,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
    }
    else {
      DVar7 = XMLAttDef::getDefaultType(pXVar9);
      DVar8 = XMLAttDef::getDefaultType((XMLAttDef *)this_00);
      if ((DVar7 == DefAttTypes_Max) && (DVar8 != DefAttTypes_Max)) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x83,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      if (((DVar7 & 2U) != 0) && ((DVar8 & 2U) == 0)) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7d,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      plVar10 = (long *)SchemaAttDef::getDatatypeValidator((SchemaAttDef *)pXVar9);
      SchemaAttDef::getDatatypeValidator(this_00);
      if (plVar10 == (long *)0x0) {
LAB_00118769:
        bVar2 = true;
      }
      else {
        cVar1 = (**(code **)(*plVar10 + 0x48))(plVar10);
        if (cVar1 != '\x01') goto LAB_00118769;
        bVar2 = false;
      }
      if (bVar2) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7e,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
      if ((DVar7 & 1U) == 0) {
LAB_001187f2:
        bVar2 = false;
      }
      else {
        if ((DVar8 & 1U) != 0) {
          str2 = XMLAttDef::getValue((XMLAttDef *)this_00);
          str1 = XMLAttDef::getValue(pXVar9);
          bVar2 = XMLString::equals(str1,str2);
          if (bVar2 == true) goto LAB_001187f2;
        }
        bVar2 = true;
      }
      if (bVar2) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x7f,text1,(XMLCh *)0x0,
                          (XMLCh *)0x0,(XMLCh *)0x0);
      }
    }
    i = i + 1;
  } while( true );
}


bool __thiscall
xercesc_2_7::TraverseSchema::wildcardAllowsNamespace
          (TraverseSchema *this,SchemaAttDef *wildCard,uint nameURI)

{
  bool bVar1;
  uint uVar2;
  QName *this_00;
  uint local_2c;
  SchemaAttDef *local_28;
  TraverseSchema *local_20;
  AttTypes wildCardType;
  ValueVectorOf_unsigned_int_ *nameURIList;
  
  local_2c = nameURI;
  local_28 = wildCard;
  local_20 = this;
  wildCardType = XMLAttDef::getType((XMLAttDef *)wildCard);
  if (wildCardType == Any_Any) {
    return true;
  }
  if ((wildCardType == Any_Other) && (local_20->fEmptyNamespaceURI != local_2c)) {
    this_00 = SchemaAttDef::getAttName(local_28);
    uVar2 = QName::getURI(this_00);
    if (uVar2 != local_2c) {
      bVar1 = true;
      goto LAB_001189f3;
    }
  }
  bVar1 = false;
LAB_001189f3:
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (wildCardType == Any_List) {
      nameURIList = SchemaAttDef::getNamespaceList(local_28);
      bVar1 = ValueVectorOf<unsigned_int>::containsElement(nameURIList,&local_2c,0);
      if (bVar1 != false) {
        return true;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


bool __thiscall
xercesc_2_7::TraverseSchema::isWildCardSubset
          (TraverseSchema *this,SchemaAttDef *baseAttWildCard,SchemaAttDef *childAttWildCard)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  QName *pQVar4;
  uint *toCheck;
  long in_FS_OFFSET;
  uint local_44;
  uint i;
  AttTypes baseWildCardType;
  AttTypes childWildCardType;
  uint childListSize;
  ValueVectorOf_unsigned_int_ *childURIList;
  ValueVectorOf_unsigned_int_ *baseURIList;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  baseWildCardType = XMLAttDef::getType((XMLAttDef *)baseAttWildCard);
  childWildCardType = XMLAttDef::getType((XMLAttDef *)childAttWildCard);
  if ((baseWildCardType == AttTypes_Unknown) || (childWildCardType == AttTypes_Unknown)) {
    bVar1 = false;
    goto LAB_00118be5;
  }
  if (baseWildCardType == Any_Any) {
    bVar1 = true;
    goto LAB_00118be5;
  }
  if ((childWildCardType == Any_Other) && (baseWildCardType == Any_Other)) {
    pQVar4 = SchemaAttDef::getAttName(childAttWildCard);
    uVar2 = QName::getURI(pQVar4);
    pQVar4 = SchemaAttDef::getAttName(baseAttWildCard);
    uVar3 = QName::getURI(pQVar4);
    if (uVar2 != uVar3) goto LAB_00118aeb;
    bVar1 = true;
  }
  else {
LAB_00118aeb:
    bVar1 = false;
  }
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (childWildCardType == Any_List) {
      childURIList = SchemaAttDef::getNamespaceList(childAttWildCard);
      if (baseWildCardType == Any_List) {
        baseURIList = SchemaAttDef::getNamespaceList(baseAttWildCard);
        if (childURIList == (ValueVectorOf_unsigned_int_ *)0x0) {
          childListSize = 0;
        }
        else {
          childListSize = ValueVectorOf<unsigned_int>::size(childURIList);
        }
        for (i = 0; i < childListSize; i = i + 1) {
          toCheck = ValueVectorOf<unsigned_int>::elementAt(childURIList,i);
          bVar1 = ValueVectorOf<unsigned_int>::containsElement(baseURIList,toCheck,0);
          if (bVar1 != true) {
            bVar1 = false;
            goto LAB_00118be5;
          }
        }
        bVar1 = true;
        goto LAB_00118be5;
      }
      if (baseWildCardType == Any_Other) {
        pQVar4 = SchemaAttDef::getAttName(baseAttWildCard);
        local_44 = QName::getURI(pQVar4);
        bVar1 = ValueVectorOf<unsigned_int>::containsElement(childURIList,&local_44,0);
        if (bVar1 != true) {
          bVar1 = true;
          goto LAB_00118be5;
        }
      }
    }
    bVar1 = false;
  }
LAB_00118be5:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}


bool __thiscall
xercesc_2_7::TraverseSchema::openRedefinedSchema(TraverseSchema *this,DOMElement *redefineElem)

{
  long lVar1;
  XSDLocator *pXVar2;
  RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this_00;
  bool bVar3;
  undefined uVar4;
  int iVar5;
  uint uVar6;
  SchemaInfo *pSVar7;
  XMLCh *pXVar8;
  XMLSSize_t XVar9;
  XMLCh *pXVar10;
  long *plVar11;
  XMLCh *pXVar12;
  XSDDOMParser *this_01;
  DOMElement *schemaRoot;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  SchemaInfo *pSVar13;
  long in_FS_OFFSET;
  bool flag;
  Janitor_xercesc_2_7__InputSource_ janSrc;
  XMLCh *schemaLocation;
  InputSource *srcToFill;
  XMLCh *includeURL;
  SchemaInfo *redefSchemaInfo;
  DOMDocument *document;
  DOMElement *root;
  XMLCh *targetNSURIString;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = RefHashTableOf<xercesc_2_7::SchemaInfo>::containsKey
                    (this->fPreprocessedNodes,redefineElem);
  if (bVar3 != false) {
    pSVar7 = RefHashTableOf<xercesc_2_7::SchemaInfo>::get(this->fPreprocessedNodes,redefineElem);
    restoreSchemaInfo(this,pSVar7,INCLUDE,0xfffffffe);
    bVar3 = true;
    goto LAB_0011929e;
  }
  pXVar8 = getElementAttValue(this,redefineElem,(XMLCh *)&SchemaSymbols::fgATT_SCHEMALOCATION,false)
  ;
  if ((pXVar8 == (XMLCh *)0x0) || (*pXVar8 == 0)) {
    reportSchemaError(this,redefineElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x5a,
                      (XMLCh *)&SchemaSymbols::fgELT_REDEFINE,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0
                     );
    bVar3 = false;
    goto LAB_0011929e;
  }
  pXVar2 = this->fLocator;
  XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)redefineElem);
  XVar9 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)redefineElem);
  pXVar10 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
  xercesc_2_7::XSDLocator::setValues((ushort *)pXVar2,pXVar10,0,XVar9);
  plVar11 = (long *)resolveSchemaLocation(this,pXVar8,SchemaRedefine,(XMLCh *)0x0);
  Janitor<xercesc_2_7::InputSource>::Janitor(&janSrc,(InputSource *)plVar11);
  if (plVar11 == (long *)0x0) {
    bVar3 = false;
  }
  else {
    pXVar10 = (XMLCh *)(**(code **)(*plVar11 + 0x28))(plVar11);
    pXVar12 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
    bVar3 = XMLString::equals(pXVar10,pXVar12);
    if (bVar3 == false) {
      pSVar7 = RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::get
                         (this->fSchemaInfoList,pXVar10,this->fTargetNSURI);
      if (pSVar7 == (SchemaInfo *)0x0) {
        if (this->fParser == (XSDDOMParser *)0x0) {
          this_01 = (XSDDOMParser *)
                    xercesc_2_7::XMemory::operator_new(0x170,this->fGrammarPoolMemoryManager);
          xercesc_2_7::XSDDOMParser::XSDDOMParser
                    (this_01,(XMLValidator *)0x0,this->fGrammarPoolMemoryManager,
                     (XMLGrammarPool *)0x0);
          this->fParser = this_01;
        }
        xercesc_2_7::AbstractDOMParser::setValidationScheme((ValSchemes)this->fParser);
        xercesc_2_7::AbstractDOMParser::setDoNamespaces(SUB81(this->fParser,0));
        xercesc_2_7::XSDDOMParser::setUserEntityHandler((XMLEntityHandler *)this->fParser);
        xercesc_2_7::XSDDOMParser::setUserErrorReporter((XMLErrorReporter *)this->fParser);
        uVar4 = (**(code **)(*plVar11 + 0x30))(plVar11);
        (**(code **)(*plVar11 + 0x50))(plVar11,0);
        xercesc_2_7::AbstractDOMParser::parse((InputSource *)this->fParser);
        (**(code **)(*plVar11 + 0x50))(plVar11,uVar4);
        bVar3 = XSDDOMParser::getSawFatal(this->fParser);
        if (bVar3 == false) {
LAB_00118fa1:
          bVar3 = false;
        }
        else {
          bVar3 = XMLScanner::getExitOnFirstFatal(this->fScanner);
          if (bVar3 == false) goto LAB_00118fa1;
          bVar3 = true;
        }
        if (bVar3) {
          reportSchemaError(this,redefineElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x129);
        }
        plVar11 = (long *)xercesc_2_7::AbstractDOMParser::getDocument();
        if (plVar11 == (long *)0x0) {
          bVar3 = false;
        }
        else {
          schemaRoot = (DOMElement *)(**(code **)(*plVar11 + 0x68))(plVar11);
          if (schemaRoot == (DOMElement *)0x0) {
            bVar3 = false;
          }
          else {
            iVar5 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x29])
                              (schemaRoot,&SchemaSymbols::fgATT_TARGETNAMESPACE);
            pXVar12 = (XMLCh *)CONCAT44(extraout_var,iVar5);
            if (*pXVar12 == 0) {
LAB_0011906f:
              bVar3 = false;
            }
            else {
              bVar3 = XMLString::equals(pXVar12,this->fTargetNSURIString);
              if (bVar3 == true) goto LAB_0011906f;
              bVar3 = true;
            }
            if (bVar3) {
              reportSchemaError(this,schemaRoot,(XMLCh *)&XMLUni::fgXMLErrDomain,0x86,pXVar8,pXVar12
                                ,(XMLCh *)0x0,(XMLCh *)0x0);
              bVar3 = false;
            }
            else {
              if (*pXVar12 == 0) {
                iVar5 = (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x2a])
                                  (schemaRoot,&XMLUni::fgXMLNSString);
                if ((CONCAT44(extraout_var_00,iVar5) != 0) ||
                   (this->fTargetNSURI == this->fEmptyNamespaceURI)) goto LAB_001190fe;
                bVar3 = true;
              }
              else {
LAB_001190fe:
                bVar3 = false;
              }
              if (bVar3) {
                (*(schemaRoot->super_DOMNode)._vptr_DOMNode[0x2c])
                          (schemaRoot,&XMLUni::fgXMLNSString,this->fTargetNSURIString);
              }
              pSVar7 = this->fSchemaInfo;
              uVar6 = xercesc_2_7::NamespaceScope::increaseDepth();
              pXVar8 = XMLString::replicate(pXVar10,this->fGrammarPoolMemoryManager);
              pSVar13 = (SchemaInfo *)xercesc_2_7::XMemory::operator_new(0xb8,this->fMemoryManager);
              xercesc_2_7::SchemaInfo::SchemaInfo
                        (pSVar13,0,0,0,this->fTargetNSURI,this->fScopeCount,uVar6,pXVar8,
                         this->fTargetNSURIString,schemaRoot,this->fGrammarPoolMemoryManager);
              this->fSchemaInfo = pSVar13;
              traverseSchemaHeader(this,schemaRoot);
              this_00 = this->fSchemaInfoList;
              pSVar13 = this->fSchemaInfo;
              iVar5 = SchemaInfo::getTargetNSURI(this->fSchemaInfo);
              pXVar8 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
              RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::put(this_00,pXVar8,iVar5,pSVar13);
              SchemaInfo::addSchemaInfo(pSVar7,this->fSchemaInfo,INCLUDE);
              RefHashTableOf<xercesc_2_7::SchemaInfo>::put
                        (this->fPreprocessedNodes,redefineElem,this->fSchemaInfo);
              bVar3 = true;
            }
          }
        }
      }
      else {
        reportSchemaError(this,redefineElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9e,pXVar10,
                          (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
        bVar3 = false;
      }
    }
    else {
      bVar3 = false;
    }
  }
  Janitor<xercesc_2_7::InputSource>::_Janitor(&janSrc);
LAB_0011929e:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


void __thiscall
xercesc_2_7::TraverseSchema::renameRedefinedComponents
          (TraverseSchema *this,DOMElement *redefineElem,SchemaInfo *redefiningSchemaInfo,
          SchemaInfo *redefinedSchemaInfo)

{
  RefHash2KeysTableOf_short_unsigned_int_ *this_00;
  XMLStringPool *pXVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_var;
  XMLCh *chars;
  XMLCh *pXVar6;
  XMLCh *pXVar7;
  DOMElement *child;
  XMLCh *childName;
  XMLCh *typeName;
  XMLCh *tmpChildName;
  
  for (child = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&redefineElem->super_DOMNode);
      child != (DOMElement *)0x0;
      child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode)) {
    iVar4 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    pXVar7 = (XMLCh *)CONCAT44(extraout_var,iVar4);
    bVar3 = XMLString::equals(pXVar7,(XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    if (bVar3 == false) {
      chars = getElementAttValue(this,child,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
      XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
      XMLBuffer::append(&this->fBuffer,0x2c);
      XMLBuffer::append(&this->fBuffer,chars);
      this_00 = this->fRedefineComponents;
      pXVar1 = this->fStringPool;
      pcVar2 = *(code **)(*(long *)this->fStringPool + 0x28);
      pXVar6 = XMLBuffer::getRawBuffer(&this->fBuffer);
      iVar4 = (*pcVar2)(pXVar1,pXVar6);
      bVar3 = RefHash2KeysTableOf<short_unsigned_int>::containsKey(this_00,pXVar7,iVar4);
      if (bVar3 == false) {
        pXVar1 = this->fStringPool;
        pcVar2 = *(code **)(*(long *)this->fStringPool + 0x50);
        uVar5 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,pXVar7);
        pXVar7 = (XMLCh *)(*pcVar2)(pXVar1,uVar5);
        bVar3 = validateRedefineNameChange(this,child,pXVar7,chars,1,redefiningSchemaInfo);
        if (bVar3 == false) {
          SchemaInfo::addFailedRedefine(redefiningSchemaInfo,child);
        }
        else {
          fixRedefinedSchema(this,child,redefinedSchemaInfo,pXVar7,chars,1);
        }
      }
    }
  }
  return;
}


bool __thiscall
xercesc_2_7::TraverseSchema::validateRedefineNameChange
          (TraverseSchema *this,DOMElement *redefineChildElem,XMLCh *redefineChildComponentName,
          XMLCh *redefineChildTypeName,int redefineNameCounter,SchemaInfo *redefiningSchemaInfo)

{
  XMLStringPool *pXVar1;
  code *pcVar2;
  anon_subr_int_varargs *paVar3;
  RefHash2KeysTableOf_short_unsigned_int_ *pRVar4;
  bool bVar5;
  int iVar6;
  int key2;
  int iVar7;
  int iVar8;
  XMLCh *pXVar9;
  DatatypeValidator *pDVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  XMLCh *pXVar11;
  XMLCh *pXVar12;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  uint typeNameId;
  int fullTypeNameId;
  int attGroupRefCount;
  int groupRefCount;
  DOMElement *grandKid;
  DOMElement *grandKid_1;
  DOMElement *greatGrandKid;
  XMLCh *baseTypeName;
  XMLCh *typeNameStr;
  XMLCh *greatGrandKidName;
  XMLCh *prefix_1;
  XMLCh *localPart_1;
  XMLCh *uriStr_1;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uriStr;
  
  iVar6 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,redefineChildTypeName);
  XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
  XMLBuffer::append(&this->fBuffer,0x2c);
  XMLBuffer::append(&this->fBuffer,redefineChildTypeName);
  pXVar1 = this->fStringPool;
  pcVar2 = *(code **)(*(long *)this->fStringPool + 0x28);
  pXVar9 = XMLBuffer::getRawBuffer(&this->fBuffer);
  key2 = (*pcVar2)(pXVar1,pXVar9);
  pXVar9 = (XMLCh *)(**(code **)(*(long *)this->fStringPool + 0x50))(this->fStringPool,key2);
  restoreSchemaInfo(this,redefiningSchemaInfo,INCLUDE,0xfffffffe);
  bVar5 = XMLString::equals(redefineChildComponentName,(XMLCh *)&SchemaSymbols::fgELT_SIMPLETYPE);
  if (bVar5 != false) {
    pDVar10 = DatatypeValidatorFactory::getDatatypeValidator(this->fDatatypeRegistry,pXVar9);
    if (pDVar10 != (DatatypeValidator *)0x0) {
      return false;
    }
    grandKid = (DOMElement *)
               xercesc_2_7::XUtil::getFirstChildElement(&redefineChildElem->super_DOMNode);
    if ((DOMNode *)grandKid != (DOMNode *)0x0) {
      iVar7 = (*((DOMNode *)grandKid)->_vptr_DOMNode[0x18])(grandKid);
      bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar7),
                                (XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
      if (bVar5 != false) {
        bVar5 = true;
        goto LAB_00119726;
      }
    }
    bVar5 = false;
LAB_00119726:
    if (bVar5) {
      grandKid = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement((DOMNode *)grandKid);
    }
    if (grandKid == (DOMElement *)0x0) {
      reportSchemaError(this,redefineChildElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x87);
      return false;
    }
    iVar7 = (*(grandKid->super_DOMNode)._vptr_DOMNode[0x18])(grandKid);
    bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar7),
                              (XMLCh *)&SchemaSymbols::fgELT_RESTRICTION);
    if (bVar5 != true) {
      reportSchemaError(this,grandKid,(XMLCh *)&XMLUni::fgXMLErrDomain,0x87);
      return false;
    }
    pXVar9 = getElementAttValue(this,grandKid,(XMLCh *)&SchemaSymbols::fgATT_BASE,false);
    pXVar11 = getPrefix(this,pXVar9);
    pXVar12 = getLocalPart(this,pXVar9);
    pXVar11 = resolvePrefixToURI(this,grandKid,pXVar11);
    iVar7 = this->fTargetNSURI;
    iVar8 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,pXVar11);
    if ((iVar7 == iVar8) &&
       (iVar7 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,pXVar12),
       iVar6 == iVar7)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      getRedefineNewTypeName(this,pXVar9,redefineNameCounter,&this->fBuffer);
      paVar3 = (grandKid->super_DOMNode)._vptr_DOMNode[0x2c];
      pXVar9 = XMLBuffer::getRawBuffer(&this->fBuffer);
      (*paVar3)(grandKid,&SchemaSymbols::fgATT_BASE,pXVar9);
      RefHash2KeysTableOf<short_unsigned_int>::put
                (this->fRedefineComponents,&SchemaSymbols::fgELT_SIMPLETYPE,key2,(ushort *)0x0);
      return true;
    }
    reportSchemaError(this,grandKid,(XMLCh *)&XMLUni::fgXMLErrDomain,0x88);
    return false;
  }
  bVar5 = XMLString::equals(redefineChildComponentName,(XMLCh *)&SchemaSymbols::fgELT_COMPLEXTYPE);
  if (bVar5 == false) {
    bVar5 = XMLString::equals(redefineChildComponentName,(XMLCh *)&SchemaSymbols::fgELT_GROUP);
    if (bVar5 != false) {
      bVar5 = RefHashTableOf<xercesc_2_7::XercesGroupInfo>::containsKey(this->fGroupRegistry,pXVar9)
      ;
      if (bVar5 != false) {
        return false;
      }
      iVar6 = changeRedefineGroup(this,redefineChildElem,redefineChildComponentName,
                                  redefineChildTypeName,redefineNameCounter);
      if (iVar6 < 2) {
        if (iVar6 == 0) {
          pRVar4 = this->fRedefineComponents;
          pXVar9 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
          RefHash2KeysTableOf<short_unsigned_int>::put
                    (pRVar4,&SchemaSymbols::fgELT_GROUP,key2,pXVar9);
          return true;
        }
        RefHash2KeysTableOf<short_unsigned_int>::put
                  (this->fRedefineComponents,&SchemaSymbols::fgELT_GROUP,key2,(ushort *)0x0);
        return true;
      }
      reportSchemaError(this,redefineChildElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x8d);
      return false;
    }
    bVar5 = XMLString::equals(redefineChildComponentName,
                              (XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP);
    if (bVar5 == false) {
      reportSchemaError(this,redefineChildElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x8f,
                        redefineChildComponentName,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
      return false;
    }
    bVar5 = RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::containsKey
                      (this->fAttGroupRegistry,redefineChildTypeName);
    if (bVar5 != false) {
      return false;
    }
    iVar6 = changeRedefineGroup(this,redefineChildElem,redefineChildComponentName,
                                redefineChildTypeName,redefineNameCounter);
    if (1 < iVar6) {
      reportSchemaError(this,redefineChildElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x8e);
      return false;
    }
    if (iVar6 == 0) {
      pRVar4 = this->fRedefineComponents;
      pXVar9 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
      RefHash2KeysTableOf<short_unsigned_int>::put
                (pRVar4,&SchemaSymbols::fgELT_ATTRIBUTEGROUP,key2,pXVar9);
      return true;
    }
    RefHash2KeysTableOf<short_unsigned_int>::put
              (this->fRedefineComponents,&SchemaSymbols::fgELT_ATTRIBUTEGROUP,key2,(ushort *)0x0);
    return true;
  }
  bVar5 = RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::containsKey
                    (this->fComplexTypeRegistry,pXVar9);
  if (bVar5 != false) {
    return false;
  }
  grandKid_1 = (DOMElement *)
               xercesc_2_7::XUtil::getFirstChildElement(&redefineChildElem->super_DOMNode);
  if ((DOMNode *)grandKid_1 == (DOMNode *)0x0) {
LAB_001199fa:
    bVar5 = false;
  }
  else {
    iVar7 = (*((DOMNode *)grandKid_1)->_vptr_DOMNode[0x18])(grandKid_1);
    bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_01,iVar7),
                              (XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    if (bVar5 == false) goto LAB_001199fa;
    bVar5 = true;
  }
  if (bVar5) {
    grandKid_1 = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement((DOMNode *)grandKid_1);
  }
  if (grandKid_1 == (DOMElement *)0x0) {
    reportSchemaError(this,redefineChildElem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x89);
    return false;
  }
  greatGrandKid = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&grandKid_1->super_DOMNode)
  ;
  if ((DOMNode *)greatGrandKid != (DOMNode *)0x0) {
    iVar7 = (*((DOMNode *)greatGrandKid)->_vptr_DOMNode[0x18])(greatGrandKid);
    bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_02,iVar7),
                              (XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    if (bVar5 != false) {
      bVar5 = true;
      goto LAB_00119a96;
    }
  }
  bVar5 = false;
LAB_00119a96:
  if (bVar5) {
    greatGrandKid =
         (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement((DOMNode *)greatGrandKid);
  }
  if (greatGrandKid == (DOMElement *)0x0) {
    reportSchemaError(this,grandKid_1,(XMLCh *)&XMLUni::fgXMLErrDomain,0x89);
    return false;
  }
  iVar7 = (*(greatGrandKid->super_DOMNode)._vptr_DOMNode[0x18])(greatGrandKid);
  bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_03,iVar7),
                            (XMLCh *)&SchemaSymbols::fgELT_RESTRICTION);
  if ((bVar5 == true) ||
     (bVar5 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_03,iVar7),
                                (XMLCh *)&SchemaSymbols::fgELT_EXTENSION), bVar5 == true)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    pXVar9 = getElementAttValue(this,greatGrandKid,(XMLCh *)&SchemaSymbols::fgATT_BASE,false);
    pXVar11 = getPrefix(this,pXVar9);
    pXVar12 = getLocalPart(this,pXVar9);
    pXVar11 = resolvePrefixToURI(this,greatGrandKid,pXVar11);
    iVar7 = this->fTargetNSURI;
    iVar8 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,pXVar11);
    if ((iVar7 == iVar8) &&
       (iVar7 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,pXVar12),
       iVar6 == iVar7)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      getRedefineNewTypeName(this,pXVar9,redefineNameCounter,&this->fBuffer);
      paVar3 = (greatGrandKid->super_DOMNode)._vptr_DOMNode[0x2c];
      pXVar9 = XMLBuffer::getRawBuffer(&this->fBuffer);
      (*paVar3)(greatGrandKid,&SchemaSymbols::fgATT_BASE,pXVar9);
      RefHash2KeysTableOf<short_unsigned_int>::put
                (this->fRedefineComponents,&SchemaSymbols::fgELT_COMPLEXTYPE,key2,(ushort *)0x0);
      return true;
    }
    reportSchemaError(this,greatGrandKid,(XMLCh *)&XMLUni::fgXMLErrDomain,0x8a);
    return false;
  }
  reportSchemaError(this,greatGrandKid,(XMLCh *)&XMLUni::fgXMLErrDomain,0x89);
  return false;
}


int __thiscall
xercesc_2_7::TraverseSchema::changeRedefineGroup
          (TraverseSchema *this,DOMElement *redefineChildElem,XMLCh *redefineChildComponentName,
          XMLCh *redefineChildTypeName,int redefineNameCounter)

{
  anon_subr_int_varargs *paVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_var;
  XMLCh *pXVar5;
  XMLCh *pXVar6;
  XMLCh *pXVar7;
  int result;
  DOMElement *child;
  XMLCh *name;
  XMLCh *refName;
  XMLCh *prefix;
  XMLCh *localPart;
  XMLCh *uriStr;
  XMLCh *minOccurs;
  XMLCh *maxOccurs;
  
  result = 0;
  child = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(&redefineChildElem->super_DOMNode);
  do {
    if (child == (DOMElement *)0x0) {
      return result;
    }
    iVar3 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    bVar2 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar3),
                              (XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
    if (bVar2 == false) {
      bVar2 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar3),redefineChildComponentName);
      if (bVar2 == true) {
        pXVar5 = getElementAttValue(this,child,(XMLCh *)&SchemaSymbols::fgATT_REF,false);
        if ((pXVar5 != (XMLCh *)0x0) && (*pXVar5 != 0)) {
          pXVar6 = getPrefix(this,pXVar5);
          pXVar7 = getLocalPart(this,pXVar5);
          pXVar6 = resolvePrefixToURI(this,child,pXVar6);
          iVar3 = this->fTargetNSURI;
          iVar4 = (**(code **)(*(long *)this->fURIStringPool + 0x28))(this->fURIStringPool,pXVar6);
          if (iVar3 == iVar4) {
            iVar3 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,pXVar7);
            iVar4 = (**(code **)(*(long *)this->fStringPool + 0x28))
                              (this->fStringPool,redefineChildTypeName);
            if (iVar3 != iVar4) goto LAB_0011a15d;
            bVar2 = true;
          }
          else {
LAB_0011a15d:
            bVar2 = false;
          }
          if (bVar2) {
            getRedefineNewTypeName(this,pXVar5,redefineNameCounter,&this->fBuffer);
            paVar1 = (child->super_DOMNode)._vptr_DOMNode[0x2c];
            pXVar5 = XMLBuffer::getRawBuffer(&this->fBuffer);
            (*paVar1)(child,&SchemaSymbols::fgATT_REF,pXVar5);
            result = result + 1;
            bVar2 = XMLString::equals(redefineChildComponentName,
                                      (XMLCh *)&SchemaSymbols::fgELT_GROUP);
            if (bVar2 != false) {
              pXVar5 = getElementAttValue(this,child,(XMLCh *)&SchemaSymbols::fgATT_MINOCCURS,false)
              ;
              pXVar6 = getElementAttValue(this,child,(XMLCh *)&SchemaSymbols::fgATT_MAXOCCURS,false)
              ;
              if ((pXVar6 == (XMLCh *)0x0) || (*pXVar6 == 0)) {
LAB_0011a247:
                if ((pXVar5 != (XMLCh *)0x0) && (*pXVar5 != 0)) {
                  bVar2 = XMLString::equals(pXVar5,(XMLCh *)&fgValueOne);
                  if (bVar2 != true) goto LAB_0011a274;
                }
                bVar2 = false;
              }
              else {
                bVar2 = XMLString::equals(pXVar6,(XMLCh *)&fgValueOne);
                if (bVar2 == true) goto LAB_0011a247;
LAB_0011a274:
                bVar2 = true;
              }
              if (bVar2) {
                reportSchemaError(this,child,(XMLCh *)&XMLUni::fgXMLErrDomain,0x8b,
                                  redefineChildTypeName,(XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
              }
            }
          }
        }
      }
      else {
        iVar3 = changeRedefineGroup(this,child,redefineChildComponentName,redefineChildTypeName,
                                    redefineNameCounter);
        result = result + iVar3;
      }
    }
    child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode);
  } while( true );
}


void __thiscall
xercesc_2_7::TraverseSchema::fixRedefinedSchema
          (TraverseSchema *this,DOMElement *elem,SchemaInfo *redefinedSchemaInfo,
          XMLCh *redefineChildComponentName,XMLCh *redefineChildTypeName,int redefineNameCounter)

{
  anon_subr_int_varargs *paVar1;
  SchemaInfo *redefinedSchemaInfo_00;
  XMLStringPool *pXVar2;
  code *pcVar3;
  XMLStringPool *pXVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  DOMNode *pDVar10;
  undefined4 extraout_var;
  XMLCh *pXVar11;
  undefined4 extraout_var_00;
  bool foundIt;
  uint infoItemNameId;
  DOMElement *child;
  DOMElement *redefChild;
  XMLCh *name;
  XMLCh *redefName;
  XMLCh *infoItemName_1;
  SchemaInfo *reRedefinedSchemaInfo;
  XMLCh *newInfoItemName;
  XMLCh *infoItemName;
  
  bVar7 = false;
  pDVar10 = (DOMNode *)SchemaInfo::getRoot(redefinedSchemaInfo);
  child = (DOMElement *)xercesc_2_7::XUtil::getFirstChildElement(pDVar10);
  restoreSchemaInfo(this,redefinedSchemaInfo,INCLUDE,0xfffffffe);
  do {
    if (child == (DOMElement *)0x0) {
LAB_0011a7bc:
      if (!bVar7) {
        reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x8c,redefineChildTypeName,
                          (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0);
      }
      return;
    }
    iVar8 = (*(child->super_DOMNode)._vptr_DOMNode[0x18])(child);
    bVar6 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar8),redefineChildComponentName);
    if (bVar6 == false) {
      bVar6 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar8),
                                (XMLCh *)&SchemaSymbols::fgELT_REDEFINE);
      if (bVar6 != false) {
        for (redefChild = (DOMElement *)
                          xercesc_2_7::XUtil::getFirstChildElement(&child->super_DOMNode);
            redefChild != (DOMElement *)0x0;
            redefChild = (DOMElement *)
                         xercesc_2_7::XUtil::getNextSiblingElement(&redefChild->super_DOMNode)) {
          iVar8 = (*(redefChild->super_DOMNode)._vptr_DOMNode[0x18])(redefChild);
          bVar6 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar8),
                                    redefineChildComponentName);
          if (bVar6 != false) {
            pXVar11 = getElementAttValue(this,redefChild,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
            bVar6 = XMLString::equals(pXVar11,redefineChildTypeName);
            if (bVar6 == true) {
              bVar7 = openRedefinedSchema(this,child);
              if (bVar7 != true) {
                SchemaInfo::addFailedRedefine(redefinedSchemaInfo,child);
                return;
              }
              bVar7 = true;
              redefinedSchemaInfo_00 = this->fSchemaInfo;
              bVar6 = validateRedefineNameChange
                                (this,redefChild,redefineChildComponentName,redefineChildTypeName,
                                 redefineNameCounter + 1,redefinedSchemaInfo);
              if (bVar6 == false) {
                fixRedefinedSchema(this,redefChild,redefinedSchemaInfo_00,redefineChildComponentName
                                   ,redefineChildTypeName,redefineNameCounter);
                SchemaInfo::addFailedRedefine(redefinedSchemaInfo,redefChild);
                XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
                XMLBuffer::append(&this->fBuffer,0x2c);
                XMLBuffer::append(&this->fBuffer,pXVar11);
              }
              else {
                fixRedefinedSchema(this,redefChild,redefinedSchemaInfo_00,redefineChildComponentName
                                   ,redefineChildTypeName,redefineNameCounter + 1);
                getRedefineNewTypeName(this,pXVar11,redefineNameCounter,&this->fBuffer);
                pXVar2 = this->fStringPool;
                pcVar3 = *(code **)(*(long *)this->fStringPool + 0x50);
                pXVar4 = this->fStringPool;
                pcVar5 = *(code **)(*(long *)this->fStringPool + 0x28);
                pXVar11 = XMLBuffer::getRawBuffer(&this->fBuffer);
                uVar9 = (*pcVar5)(pXVar4,pXVar11);
                pXVar11 = (XMLCh *)(*pcVar3)(pXVar2,uVar9);
                (*(redefChild->super_DOMNode)._vptr_DOMNode[0x2c])
                          (redefChild,&SchemaSymbols::fgATT_NAME,pXVar11);
                XMLBuffer::set(&this->fBuffer,this->fTargetNSURIString);
                XMLBuffer::append(&this->fBuffer,0x2c);
                XMLBuffer::append(&this->fBuffer,pXVar11);
              }
              pXVar2 = this->fStringPool;
              pcVar3 = *(code **)(*(long *)this->fStringPool + 0x28);
              pXVar11 = XMLBuffer::getRawBuffer(&this->fBuffer);
              iVar8 = (*pcVar3)(pXVar2,pXVar11);
              bVar6 = RefHash2KeysTableOf<short_unsigned_int>::containsKey
                                (this->fRedefineComponents,redefineChildComponentName,iVar8);
              if (bVar6 != true) {
                RefHash2KeysTableOf<short_unsigned_int>::put
                          (this->fRedefineComponents,redefineChildComponentName,iVar8,(ushort *)0x0)
                ;
              }
              break;
            }
          }
        }
        if (bVar7) goto LAB_0011a7bc;
      }
    }
    else {
      pXVar11 = getElementAttValue(this,child,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
      bVar6 = XMLString::equals(pXVar11,redefineChildTypeName);
      if (bVar6 == true) {
        bVar7 = true;
        getRedefineNewTypeName(this,pXVar11,redefineNameCounter,&this->fBuffer);
        paVar1 = (child->super_DOMNode)._vptr_DOMNode[0x2c];
        pXVar11 = XMLBuffer::getRawBuffer(&this->fBuffer);
        (*paVar1)(child,&SchemaSymbols::fgATT_NAME,pXVar11);
        goto LAB_0011a7bc;
      }
    }
    child = (DOMElement *)xercesc_2_7::XUtil::getNextSiblingElement(&child->super_DOMNode);
  } while( true );
}


bool __thiscall
xercesc_2_7::TraverseSchema::isSubstitutionGroupCircular
          (TraverseSchema *this,SchemaElementDecl *elemDecl,SchemaElementDecl *subsElemDecl)

{
  bool bVar1;
  SchemaElementDecl *tmpElemDecl;
  
  if (elemDecl == subsElemDecl) {
    bVar1 = true;
  }
  else {
    for (tmpElemDecl = SchemaElementDecl::getSubstitutionGroupElem(subsElemDecl);
        tmpElemDecl != (SchemaElementDecl *)0x0;
        tmpElemDecl = SchemaElementDecl::getSubstitutionGroupElem(tmpElemDecl)) {
      if (tmpElemDecl == elemDecl) {
        return true;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


void __thiscall
xercesc_2_7::TraverseSchema::reportSchemaError
          (TraverseSchema *this,XSDLocator *aLocator,XMLCh *msgDomain,int errorCode)

{
  xercesc_2_7::XSDErrorReporter::emitError
            ((int)this + 0x160,(ushort *)(ulong)(uint)errorCode,(Locator *)msgDomain);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::reportSchemaError
          (TraverseSchema *this,XSDLocator *aLocator,XMLCh *msgDomain,int errorCode,XMLCh *text1,
          XMLCh *text2,XMLCh *text3,XMLCh *text4)

{
  xercesc_2_7::XSDErrorReporter::emitError
            ((int)this + 0x160,(ushort *)(ulong)(uint)errorCode,(Locator *)msgDomain,
             (ushort *)aLocator,text1,text2,text3,(MemoryManager *)text4);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::reportSchemaError
          (TraverseSchema *this,DOMElement *elem,XMLCh *msgDomain,int errorCode)

{
  XSDLocator *pXVar1;
  XMLSSize_t XVar2;
  XMLCh *pXVar3;
  
  pXVar1 = this->fLocator;
  XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)elem);
  XVar2 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)elem);
  pXVar3 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
  xercesc_2_7::XSDLocator::setValues((ushort *)pXVar1,pXVar3,0,XVar2);
  xercesc_2_7::XSDErrorReporter::emitError
            ((int)this + 0x160,(ushort *)(ulong)(uint)errorCode,(Locator *)msgDomain);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::reportSchemaError
          (TraverseSchema *this,DOMElement *elem,XMLCh *msgDomain,int errorCode,XMLCh *text1,
          XMLCh *text2,XMLCh *text3,XMLCh *text4)

{
  XSDLocator *pXVar1;
  XMLSSize_t XVar2;
  XMLCh *pXVar3;
  
  pXVar1 = this->fLocator;
  XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)elem);
  XVar2 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)elem);
  pXVar3 = SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
  xercesc_2_7::XSDLocator::setValues((ushort *)pXVar1,pXVar3,0,XVar2);
  xercesc_2_7::XSDErrorReporter::emitError
            ((int)this + 0x160,(ushort *)(ulong)(uint)errorCode,(Locator *)msgDomain,
             (ushort *)this->fLocator,text1,text2,text3,(MemoryManager *)text4);
  return;
}


int __thiscall xercesc_2_7::TraverseSchema::init(TraverseSchema *this,EVP_PKEY_CTX *ctx)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  DatatypeValidatorFactory *pDVar4;
  XMLStringPool *pXVar5;
  ValueVectorOf_unsigned_int_ *pVVar6;
  undefined4 extraout_var;
  ValueVectorOf_xercesc_2_7__DOMNode__ *this_00;
  RefHash2KeysTableOf_short_unsigned_int_ *this_01;
  RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this_02;
  HashBase *hashBase;
  RefHashTableOf_xercesc_2_7__SchemaInfo_ *this_03;
  XSDLocator *this_04;
  ValueVectorOf_const_xercesc_2_7__DOMElement__ *this_05;
  uint i;
  
  XSDErrorReporter::setErrorReporter(&this->fXSDErrorReporter,this->fErrorReporter);
  bVar1 = XMLScanner::getExitOnFirstFatal(this->fScanner);
  XSDErrorReporter::setExitOnFirstFatal(&this->fXSDErrorReporter,bVar1);
  bVar1 = XMLScanner::getValidationSchemaFullChecking(this->fScanner);
  this->fFullConstraintChecking = bVar1;
  pDVar4 = SchemaGrammar::getDatatypeRegistry(this->fSchemaGrammar);
  this->fDatatypeRegistry = pDVar4;
  pXVar5 = GrammarResolver::getStringPool(this->fGrammarResolver);
  this->fStringPool = pXVar5;
  uVar2 = XMLScanner::getEmptyNamespaceId(this->fScanner);
  this->fEmptyNamespaceURI = uVar2;
  pVVar6 = (ValueVectorOf_unsigned_int_ *)
           xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
  ValueVectorOf<unsigned_int>::ValueVectorOf(pVVar6,8,this->fMemoryManager,false);
  this->fCurrentTypeNameStack = pVVar6;
  pVVar6 = (ValueVectorOf_unsigned_int_ *)
           xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
  ValueVectorOf<unsigned_int>::ValueVectorOf(pVVar6,8,this->fMemoryManager,false);
  this->fCurrentGroupStack = pVVar6;
  iVar3 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x30);
  this->fGlobalDeclarations = (ValueVectorOf_unsigned_int_ **)CONCAT44(extraout_var,iVar3);
  for (i = 0; i < 6; i = i + 1) {
    pVVar6 = (ValueVectorOf_unsigned_int_ *)
             xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
    ValueVectorOf<unsigned_int>::ValueVectorOf(pVVar6,8,this->fMemoryManager,false);
    this->fGlobalDeclarations[i] = pVVar6;
  }
  this_00 = (ValueVectorOf_xercesc_2_7__DOMNode__ *)
            xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
  ValueVectorOf<xercesc_2_7::DOMNode*>::ValueVectorOf(this_00,4,this->fMemoryManager,false);
  this->fNonXSAttList = this_00;
  this_01 = (RefHash2KeysTableOf_short_unsigned_int_ *)
            xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
  RefHash2KeysTableOf<short_unsigned_int>::RefHash2KeysTableOf
            (this_01,0xd,false,this->fMemoryManager);
  this->fNotationRegistry = this_01;
  this_02 = (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *)
            xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
  RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::RefHash2KeysTableOf
            (this_02,0x1d,this->fMemoryManager);
  this->fSchemaInfoList = this_02;
  hashBase = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashPtr::HashPtr((HashPtr *)hashBase);
  this_03 = (RefHashTableOf_xercesc_2_7__SchemaInfo_ *)
            xercesc_2_7::XMemory::operator_new(0x30,this->fMemoryManager);
  RefHashTableOf<xercesc_2_7::SchemaInfo>::RefHashTableOf
            (this_03,0x1d,false,hashBase,this->fMemoryManager);
  this->fPreprocessedNodes = this_03;
  this_04 = (XSDLocator *)xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
  xercesc_2_7::XSDLocator::XSDLocator(this_04);
  this->fLocator = this_04;
  this_05 = (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)
            xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
  ValueVectorOf<const_xercesc_2_7::DOMElement*>::ValueVectorOf
            (this_05,0x10,this->fMemoryManager,false);
  this->fDeclStack = this_05;
  return (int)this;
}


void __thiscall xercesc_2_7::TraverseSchema::cleanUp(TraverseSchema *this)

{
  RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this_00;
  ValueVectorOf_unsigned_int_ *pVVar1;
  ValueVectorOf_xercesc_2_7__DOMNode__ *this_01;
  RefHash2KeysTableOf_short_unsigned_int_ *pRVar2;
  RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this_02;
  ValueVectorOf_const_xercesc_2_7__DOMElement__ *this_03;
  RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this_04;
  RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this_05;
  RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this_06;
  RefHashTableOf_xercesc_2_7__SchemaInfo_ *this_07;
  XSDLocator *pXVar3;
  long *plVar4;
  void *in_RSI;
  ValueVectorOf_unsigned_int_ **ppVVar5;
  uint i;
  
  this_00 = this->fSchemaInfoList;
  if (this_00 != (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *)0x0) {
    RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::_RefHash2KeysTableOf(this_00);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
  }
  pVVar1 = this->fCurrentTypeNameStack;
  if (pVVar1 != (ValueVectorOf_unsigned_int_ *)0x0) {
    ValueVectorOf<unsigned_int>::_ValueVectorOf(pVVar1);
    xercesc_2_7::XMemory::operator_delete((XMemory *)pVVar1,in_RSI);
  }
  pVVar1 = this->fCurrentGroupStack;
  if (pVVar1 != (ValueVectorOf_unsigned_int_ *)0x0) {
    ValueVectorOf<unsigned_int>::_ValueVectorOf(pVVar1);
    xercesc_2_7::XMemory::operator_delete((XMemory *)pVVar1,in_RSI);
  }
  for (i = 0; i < 6; i = i + 1) {
    pVVar1 = this->fGlobalDeclarations[i];
    if (pVVar1 != (ValueVectorOf_unsigned_int_ *)0x0) {
      ValueVectorOf<unsigned_int>::_ValueVectorOf(pVVar1);
      xercesc_2_7::XMemory::operator_delete((XMemory *)pVVar1,in_RSI);
    }
  }
  ppVVar5 = this->fGlobalDeclarations;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
  this_01 = this->fNonXSAttList;
  if (this_01 != (ValueVectorOf_xercesc_2_7__DOMNode__ *)0x0) {
    ValueVectorOf<xercesc_2_7::DOMNode*>::_ValueVectorOf(this_01);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_01,ppVVar5);
  }
  pRVar2 = this->fNotationRegistry;
  if (pRVar2 != (RefHash2KeysTableOf_short_unsigned_int_ *)0x0) {
    RefHash2KeysTableOf<short_unsigned_int>::_RefHash2KeysTableOf(pRVar2);
    xercesc_2_7::XMemory::operator_delete((XMemory *)pRVar2,ppVVar5);
  }
  pRVar2 = this->fRedefineComponents;
  if (pRVar2 != (RefHash2KeysTableOf_short_unsigned_int_ *)0x0) {
    RefHash2KeysTableOf<short_unsigned_int>::_RefHash2KeysTableOf(pRVar2);
    xercesc_2_7::XMemory::operator_delete((XMemory *)pRVar2,ppVVar5);
  }
  this_02 = this->fIdentityConstraintNames;
  if (this_02 != (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *)0x0) {
    RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::_RefHash2KeysTableOf(this_02);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_02,ppVVar5);
  }
  this_03 = this->fDeclStack;
  if (this_03 != (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)0x0) {
    ValueVectorOf<const_xercesc_2_7::DOMElement*>::_ValueVectorOf(this_03);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_03,ppVVar5);
  }
  this_04 = this->fIC_ElementsNS;
  if (this_04 != (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0
     ) {
    RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::_RefHashTableOf
              (this_04);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_04,ppVVar5);
  }
  this_05 = this->fIC_NamespaceDepthNS;
  if (this_05 != (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0) {
    RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::_RefHashTableOf(this_05);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_05,ppVVar5);
  }
  this_06 = this->fIC_NodeListNS;
  if (this_06 != (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0) {
    RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::_RefHashTableOf(this_06);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_06,ppVVar5);
  }
  this_07 = this->fPreprocessedNodes;
  if (this_07 != (RefHashTableOf_xercesc_2_7__SchemaInfo_ *)0x0) {
    RefHashTableOf<xercesc_2_7::SchemaInfo>::_RefHashTableOf(this_07);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_07,ppVVar5);
  }
  pXVar3 = this->fLocator;
  if (pXVar3 != (XSDLocator *)0x0) {
    (**(code **)(*(long *)pXVar3 + 8))(pXVar3);
  }
  plVar4 = (long *)this->fParser;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::processElemDeclAttrs
          (TraverseSchema *this,DOMElement *elem,SchemaElementDecl *elemDecl,XMLCh **valueConstraint
          ,bool isTopLevel)

{
  bool bVar1;
  int iVar2;
  XMLCh *pXVar3;
  XMLCh *str1;
  XMLCh *pXVar4;
  int elementMiscFlags;
  XMLCh *fixedVal;
  XMLCh *nillable;
  XMLCh *abstract;
  
  elementMiscFlags = 0;
  pXVar3 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_FIXED,false);
  str1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NILLABLE,false);
  pXVar4 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_DEFAULT,false);
  *valueConstraint = pXVar4;
  if (pXVar3 != (XMLCh *)0x0) {
    elementMiscFlags = 4;
    if (*valueConstraint != (XMLCh *)0x0) {
      pXVar4 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_NAME,false);
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x38,pXVar4,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
    *valueConstraint = pXVar3;
  }
  if ((str1 != (XMLCh *)0x0) && (*str1 != 0)) {
    bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgATTVAL_TRUE);
    if (bVar1 == false) {
      bVar1 = XMLString::equals(str1,(XMLCh *)&fgValueOne);
      if (bVar1 != false) goto LAB_0011b49b;
      bVar1 = false;
    }
    else {
LAB_0011b49b:
      bVar1 = true;
    }
    if (bVar1) {
      elementMiscFlags = elementMiscFlags | 1;
    }
  }
  if (isTopLevel == false) goto LAB_0011b558;
  pXVar3 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_ABSTRACT,false);
  if ((pXVar3 != (XMLCh *)0x0) && (*pXVar3 != 0)) {
    bVar1 = XMLString::equals(pXVar3,(XMLCh *)&SchemaSymbols::fgATTVAL_TRUE);
    if (bVar1 == false) {
      bVar1 = XMLString::equals(pXVar3,(XMLCh *)&fgValueOne);
      if (bVar1 != false) goto LAB_0011b51a;
      bVar1 = false;
    }
    else {
LAB_0011b51a:
      bVar1 = true;
    }
    if (bVar1) {
      elementMiscFlags = elementMiscFlags | 2;
    }
  }
  iVar2 = parseFinalSet(this,elem,3,false);
  SchemaElementDecl::setFinalSet(elemDecl,iVar2);
LAB_0011b558:
  iVar2 = parseBlockSet(this,elem,0,false);
  SchemaElementDecl::setBlockSet(elemDecl,iVar2);
  SchemaElementDecl::setMiscFlags(elemDecl,elementMiscFlags);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::processElemDeclIC
          (TraverseSchema *this,DOMElement *icElem,SchemaElementDecl *elemDecl)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ValueVectorOf_xercesc_2_7__DOMElement__ *this_00;
  RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this_01;
  RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this_02;
  HashBase *hashBase;
  RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this_03;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *pVVar3;
  ValueVectorOf_unsigned_int_ *pVVar4;
  long in_FS_OFFSET;
  SchemaElementDecl *local_50;
  DOMElement *local_48;
  TraverseSchema *local_40;
  uint local_34;
  DOMElement *ic;
  ValueVectorOf_xercesc_2_7__DOMElement__ *icNodes;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  icNodes = (ValueVectorOf_xercesc_2_7__DOMElement__ *)0x0;
  local_50 = elemDecl;
  local_48 = icElem;
  local_40 = this;
  for (ic = icElem; ic != (DOMElement *)0x0;
      ic = (DOMElement *)
           xercesc_2_7::XUtil::getNextSiblingElementNS
                     (&ic->super_DOMNode,fgIdentityConstraints,
                      (ushort *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA,3)) {
    iVar2 = (*(ic->super_DOMNode)._vptr_DOMNode[0x18])(ic);
    bVar1 = XMLString::equals((XMLCh *)CONCAT44(extraout_var,iVar2),
                              (XMLCh *)&SchemaSymbols::fgELT_KEY);
    if (bVar1 == false) {
      iVar2 = (*(ic->super_DOMNode)._vptr_DOMNode[0x18])(ic);
      bVar1 = XMLString::equals((XMLCh *)CONCAT44(extraout_var_00,iVar2),
                                (XMLCh *)&SchemaSymbols::fgELT_UNIQUE);
      if (bVar1 == false) {
        if (icNodes == (ValueVectorOf_xercesc_2_7__DOMElement__ *)0x0) {
          this_00 = (ValueVectorOf_xercesc_2_7__DOMElement__ *)
                    xercesc_2_7::XMemory::operator_new(0x20,local_40->fGrammarPoolMemoryManager);
          ValueVectorOf<xercesc_2_7::DOMElement*>::ValueVectorOf
                    (this_00,8,local_40->fGrammarPoolMemoryManager,false);
          icNodes = this_00;
        }
        ValueVectorOf<xercesc_2_7::DOMElement*>::addElement(icNodes,&ic);
      }
      else {
        traverseUnique(local_40,ic,local_50);
      }
    }
    else {
      traverseKey(local_40,ic,local_50);
    }
  }
  if (icNodes != (ValueVectorOf_xercesc_2_7__DOMElement__ *)0x0) {
    if (local_40->fIC_ElementsNS ==
        (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0) {
      this_01 = (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)
                xercesc_2_7::XMemory::operator_new(0x30,local_40->fMemoryManager);
      RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::RefHashTableOf
                (this_01,0xd,local_40->fMemoryManager);
      local_40->fIC_ElementsNS = this_01;
      this_02 = (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *)
                xercesc_2_7::XMemory::operator_new(0x30,local_40->fMemoryManager);
      RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::RefHashTableOf
                (this_02,0xd,local_40->fMemoryManager);
      local_40->fIC_NamespaceDepthNS = this_02;
      hashBase = (HashBase *)xercesc_2_7::XMemory::operator_new(8,local_40->fMemoryManager);
      xercesc_2_7::HashPtr::HashPtr((HashPtr *)hashBase);
      this_03 = (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)
                xercesc_2_7::XMemory::operator_new(0x30,local_40->fMemoryManager);
      RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::RefHashTableOf
                (this_03,0x1d,true,hashBase,local_40->fMemoryManager);
      local_40->fIC_NodeListNS = this_03;
    }
    bVar1 = RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
            containsKey(local_40->fIC_ElementsNS,local_40->fTargetNSURIString);
    if (bVar1 != false) {
      pVVar3 = RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
                         (local_40->fIC_ElementsNS,local_40->fTargetNSURIString);
      local_40->fIC_Elements = pVVar3;
      pVVar4 = RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::get
                         (local_40->fIC_NamespaceDepthNS,local_40->fTargetNSURIString);
      local_40->fIC_NamespaceDepth = pVVar4;
    }
    if (local_40->fIC_Elements == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) {
      pVVar3 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)
               xercesc_2_7::XMemory::operator_new(0x20,local_40->fMemoryManager);
      ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf
                (pVVar3,8,local_40->fMemoryManager,false);
      local_40->fIC_Elements = pVVar3;
      pVVar4 = (ValueVectorOf_unsigned_int_ *)
               xercesc_2_7::XMemory::operator_new(0x20,local_40->fMemoryManager);
      ValueVectorOf<unsigned_int>::ValueVectorOf(pVVar4,8,local_40->fMemoryManager,false);
      local_40->fIC_NamespaceDepth = pVVar4;
      RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::put
                (local_40->fIC_ElementsNS,local_40->fTargetNSURIString,local_40->fIC_Elements);
      RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::put
                (local_40->fIC_NamespaceDepthNS,local_40->fTargetNSURIString,
                 local_40->fIC_NamespaceDepth);
    }
    RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::put
              (local_40->fIC_NodeListNS,local_50,icNodes);
    ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::addElement(local_40->fIC_Elements,&local_50);
    pVVar4 = local_40->fIC_NamespaceDepth;
    local_34 = SchemaInfo::getNamespaceScopeLevel(local_40->fSchemaInfo);
    ValueVectorOf<unsigned_int>::addElement(pVVar4,&local_34);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


bool __thiscall
xercesc_2_7::TraverseSchema::checkElemDeclValueConstraint
          (TraverseSchema *this,DOMElement *elem,SchemaElementDecl *elemDecl,XMLCh *valConstraint,
          ComplexTypeInfo *typeInfo,DatatypeValidator *validator)

{
  long lVar1;
  bool bVar2;
  ValidatorType VVar3;
  int iVar4;
  XMLCh *pXVar5;
  ushort *toDelete;
  ContentSpecNode *specNode;
  long in_FS_OFFSET;
  bool isValid;
  int contentSpecType;
  XMLCh *canonical;
  OutOfMemoryException *anon_var_0;
  XMLException *excep;
  ArrayJanitor_short_unsigned_int_ tempCanonical;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  isValid = false;
  if (validator != (DatatypeValidator *)0x0) {
    VVar3 = DatatypeValidator::getType(validator);
    if (VVar3 == ID) {
      pXVar5 = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
      reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x69,pXVar5,valConstraint,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
    (**(code **)(*(long *)validator + 0x40))(validator,valConstraint,0,this->fMemoryManager);
    toDelete = (ushort *)
               (**(code **)(*(long *)validator + 0x38))
                         (validator,valConstraint,this->fMemoryManager,0);
    ArrayJanitor<short_unsigned_int>::ArrayJanitor(&tempCanonical,toDelete,this->fMemoryManager);
    (**(code **)(*(long *)validator + 0x40))(validator,toDelete,0,this->fMemoryManager);
    isValid = true;
    ArrayJanitor<short_unsigned_int>::_ArrayJanitor(&tempCanonical);
  }
  if (typeInfo == (ComplexTypeInfo *)0x0) goto LAB_0011bd41;
  iVar4 = ComplexTypeInfo::getContentType(typeInfo);
  if (((iVar4 != 5) && (iVar4 != 2)) && (iVar4 != 3)) {
    pXVar5 = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x3e,pXVar5,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
  if ((iVar4 == 3) || (iVar4 == 2)) {
    specNode = ComplexTypeInfo::getContentSpec(typeInfo);
    bVar2 = emptiableParticle(this,specNode);
    if (bVar2 == true) goto LAB_0011bcfc;
    bVar2 = true;
  }
  else {
LAB_0011bcfc:
    bVar2 = false;
  }
  if (bVar2) {
    pXVar5 = XMLElementDecl::getBaseName((XMLElementDecl *)elemDecl);
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x6b,pXVar5,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
  }
LAB_0011bd41:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return isValid;
}


void __thiscall
xercesc_2_7::TraverseSchema::processSubstitutionGroup
          (TraverseSchema *this,DOMElement *elem,SchemaElementDecl *elemDecl,
          ComplexTypeInfo **typeInfo,DatatypeValidator **validator,XMLCh *subsElemQName)

{
  long lVar1;
  GrammarResolver *pGVar2;
  SchemaElementDecl *this_00;
  bool bVar3;
  ModelTypes toSet;
  XMLCh *pXVar4;
  ComplexTypeInfo *pCVar5;
  DatatypeValidator *pDVar6;
  RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *pRVar7;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *pVVar8;
  long in_FS_OFFSET;
  SchemaElementDecl *local_90;
  DOMElement *local_88;
  TraverseSchema *local_80;
  int subsElemURI;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *subsElements;
  SchemaElementDecl *subsElemDecl;
  XMLCh *subsElemBaseName;
  SchemaGrammar *aGrammar;
  SchemaInfo *curRef;
  SchemaGrammar *aGrammar_1;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *subsElemList;
  BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ importingEnum;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = elemDecl;
  local_88 = elem;
  local_80 = this;
  subsElemDecl = getGlobalElemDecl(this,elem,subsElemQName);
  if (subsElemDecl != (SchemaElementDecl *)0x0) {
    bVar3 = isSubstitutionGroupCircular(local_80,local_90,subsElemDecl);
    if (bVar3 == false) {
      pXVar4 = XMLElementDecl::getBaseName((XMLElementDecl *)local_90);
      bVar3 = isSubstitutionGroupValid
                        (local_80,local_88,subsElemDecl,*typeInfo,*validator,pXVar4,true);
      if (bVar3 != false) {
        SchemaElementDecl::setSubstitutionGroupElem(local_90,subsElemDecl);
        if ((*typeInfo == (ComplexTypeInfo *)0x0) && (*validator == (DatatypeValidator *)0x0)) {
          pCVar5 = SchemaElementDecl::getComplexTypeInfo(subsElemDecl);
          *typeInfo = pCVar5;
          pDVar6 = SchemaElementDecl::getDatatypeValidator(subsElemDecl);
          *validator = pDVar6;
          if (*validator == (DatatypeValidator *)0x0) {
            if (*typeInfo != (ComplexTypeInfo *)0x0) {
              SchemaElementDecl::setComplexTypeInfo(local_90,*typeInfo);
              this_00 = local_90;
              toSet = ComplexTypeInfo::getContentType(*typeInfo);
              SchemaElementDecl::setModelType(this_00,toSet);
            }
          }
          else {
            SchemaElementDecl::setDatatypeValidator(local_90,*validator);
            SchemaElementDecl::setModelType(local_90,Simple);
          }
        }
        subsElemBaseName = XMLElementDecl::getBaseName((XMLElementDecl *)subsElemDecl);
        subsElemURI = XMLElementDecl::getURI((XMLElementDecl *)subsElemDecl);
        subsElements = RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>
                       ::get(local_80->fValidSubstitutionGroups,subsElemBaseName,subsElemURI);
        if ((subsElements == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) &&
           (subsElemURI != local_80->fTargetNSURI)) {
          pGVar2 = local_80->fGrammarResolver;
          (**(code **)(*(long *)local_80->fURIStringPool + 0x50))
                    (local_80->fURIStringPool,subsElemURI);
          aGrammar = (SchemaGrammar *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)pGVar2);
          if (aGrammar != (SchemaGrammar *)0x0) {
            pRVar7 = SchemaGrammar::getValidSubstitutionGroups(aGrammar);
            subsElements = RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>
                           ::get(pRVar7,subsElemBaseName,subsElemURI);
            if (subsElements == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) {
              bVar3 = SchemaInfo::circularImportExist(local_80->fSchemaInfo,subsElemURI);
              if (bVar3 != false) {
                pRVar7 = SchemaGrammar::getValidSubstitutionGroups(aGrammar);
                pVVar8 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)
                         xercesc_2_7::XMemory::operator_new
                                   (0x20,local_80->fGrammarPoolMemoryManager);
                ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf
                          (pVVar8,8,local_80->fGrammarPoolMemoryManager,false);
                RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
                put(pRVar7,subsElemBaseName,subsElemURI,pVVar8);
              }
            }
            else {
              pVVar8 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)
                       xercesc_2_7::XMemory::operator_new(0x20,local_80->fGrammarPoolMemoryManager);
              ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf(pVVar8,subsElements);
              subsElements = pVVar8;
              RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::put
                        (local_80->fValidSubstitutionGroups,subsElemBaseName,subsElemURI,pVVar8);
            }
          }
        }
        if (subsElements == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) {
          pVVar8 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)
                   xercesc_2_7::XMemory::operator_new(0x20,local_80->fGrammarPoolMemoryManager);
          ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf
                    (pVVar8,8,local_80->fGrammarPoolMemoryManager,false);
          subsElements = pVVar8;
          RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::put
                    (local_80->fValidSubstitutionGroups,subsElemBaseName,subsElemURI,pVVar8);
        }
        ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::addElement(subsElements,&local_90);
        SchemaInfo::getImportingListEnumerator(&importingEnum,local_80->fSchemaInfo);
        while( true ) {
          bVar3 = BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::hasMoreElements(&importingEnum);
          if (bVar3 == false) break;
          curRef = BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::nextElement(&importingEnum);
          pGVar2 = local_80->fGrammarResolver;
          SchemaInfo::getTargetNSURIString(curRef);
          aGrammar_1 = (SchemaGrammar *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)pGVar2);
          pRVar7 = SchemaGrammar::getValidSubstitutionGroups(aGrammar_1);
          subsElemList = RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>
                         ::get(pRVar7,subsElemBaseName,subsElemURI);
          if (subsElemList == (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0) {
LAB_0011c362:
            bVar3 = false;
          }
          else {
            bVar3 = ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::containsElement
                              (subsElemList,&local_90,0);
            if (bVar3 == true) goto LAB_0011c362;
            bVar3 = true;
          }
          if (bVar3) {
            ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::addElement(subsElemList,&local_90);
          }
        }
        buildValidSubstitutionListB(local_80,local_88,local_90,subsElemDecl);
        buildValidSubstitutionListF(local_80,local_88,local_90,subsElemDecl);
        BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::_BaseRefVectorEnumerator(&importingEnum);
      }
    }
    else {
      pXVar4 = XMLElementDecl::getBaseName((XMLElementDecl *)local_90);
      reportSchemaError(local_80,local_88,(XMLCh *)&XMLUni::fgXMLErrDomain,0xa4,pXVar4,(XMLCh *)0x0,
                        (XMLCh *)0x0,(XMLCh *)0x0);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::processAttValue(TraverseSchema *this,XMLCh *attVal,XMLBuffer *aBuf)

{
  XMLCh nextCh;
  XMLCh *srcVal;
  
  nextCh = *attVal;
  srcVal = attVal;
  while (nextCh != 0) {
    if (nextCh == 0x22) {
      XMLBuffer::append(aBuf,0x26);
      XMLBuffer::append(aBuf,(XMLCh *)&XMLUni::fgQuot);
      XMLBuffer::append(aBuf,0x3b);
    }
    else if (nextCh == 0x3e) {
      XMLBuffer::append(aBuf,0x26);
      XMLBuffer::append(aBuf,(XMLCh *)&XMLUni::fgGT);
      XMLBuffer::append(aBuf,0x3b);
    }
    else if (nextCh == 0x26) {
      XMLBuffer::append(aBuf,0x26);
      XMLBuffer::append(aBuf,(XMLCh *)&XMLUni::fgAmp);
      XMLBuffer::append(aBuf,0x3b);
    }
    else {
      XMLBuffer::append(aBuf,nextCh);
    }
    srcVal = srcVal + 1;
    nextCh = *srcVal;
  }
  return;
}


XSAnnotation * __thiscall
xercesc_2_7::TraverseSchema::generateSyntheticAnnotation
          (TraverseSchema *this,DOMElement *elem,ValueVectorOf_xercesc_2_7__DOMNode__ *nonXSAttList)

{
  bool bVar1;
  ValueHashTableOf_unsigned_int_ *this_00;
  bool bVar2;
  int iVar3;
  undefined4 extraout_var;
  DOMNode **ppDVar4;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  DOMElement *pDVar5;
  undefined4 extraout_var_08;
  XMLCh *pXVar6;
  XMLSSize_t XVar7;
  XMLSSize_t XVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  bool sawXMLNS;
  uint local_74;
  uint i;
  int j;
  uint nonXSAttSize;
  int attrCount;
  DOMElement *currentElem;
  XMLCh *prefix;
  ValueHashTableOf_unsigned_int_ *listOfURIs;
  DOMNode *attNode;
  DOMNamedNodeMap *eltAttrs;
  DOMNode *attribute;
  XMLCh *attName;
  XSAnnotation *annot;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (*(elem->super_DOMNode)._vptr_DOMNode[0x17])(elem);
  prefix = (XMLCh *)CONCAT44(extraout_var,iVar3);
  listOfURIs = (ValueHashTableOf_unsigned_int_ *)
               xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
  ValueHashTableOf<unsigned_int>::ValueHashTableOf(listOfURIs,0x1d,this->fMemoryManager);
  bVar1 = false;
  XMLBuffer::reset(&this->fBuffer);
  XMLBuffer::append(&this->fBuffer,0x3c);
  if (prefix != (XMLCh *)0x0) {
    XMLBuffer::append(&this->fBuffer,prefix);
    XMLBuffer::append(&this->fBuffer,0x3a);
  }
  puVar9 = &SchemaSymbols::fgELT_ANNOTATION;
  XMLBuffer::append(&this->fBuffer,(XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
  nonXSAttSize = ValueVectorOf<xercesc_2_7::DOMNode*>::size(nonXSAttList);
  for (i = 0; currentElem = elem, i < nonXSAttSize; i = i + 1) {
    ppDVar4 = ValueVectorOf<xercesc_2_7::DOMNode*>::elementAt(nonXSAttList,i);
    attNode = *ppDVar4;
    XMLBuffer::append(&this->fBuffer,0x20);
    iVar3 = (*attNode->_vptr_DOMNode[2])(attNode);
    XMLBuffer::append(&this->fBuffer,(XMLCh *)CONCAT44(extraout_var_00,iVar3));
    XMLBuffer::append(&this->fBuffer,0x3d);
    XMLBuffer::append(&this->fBuffer,0x22);
    iVar3 = (*attNode->_vptr_DOMNode[3])(attNode);
    processAttValue(this,(XMLCh *)CONCAT44(extraout_var_01,iVar3),&this->fBuffer);
    puVar9 = (undefined8 *)0x22;
    XMLBuffer::append(&this->fBuffer,0x22);
  }
  do {
    iVar3 = (*(currentElem->super_DOMNode)._vptr_DOMNode[0xb])(currentElem);
    eltAttrs = (DOMNamedNodeMap *)CONCAT44(extraout_var_02,iVar3);
    attrCount = (*eltAttrs->_vptr_DOMNamedNodeMap[5])(eltAttrs);
    for (j = 0; j < attrCount; j = j + 1) {
      iVar3 = (*eltAttrs->_vptr_DOMNamedNodeMap[3])(eltAttrs,(long)j);
      attribute = (DOMNode *)CONCAT44(extraout_var_03,iVar3);
      iVar3 = (*attribute->_vptr_DOMNode[2])(attribute);
      attName = (XMLCh *)CONCAT44(extraout_var_04,iVar3);
      puVar9 = &XMLUni::fgXMLNSColonString;
      bVar2 = XMLString::startsWith(attName,(XMLCh *)&XMLUni::fgXMLNSColonString);
      if (bVar2 == false) {
        if (bVar1) {
LAB_0011c94a:
          bVar2 = false;
        }
        else {
          puVar9 = &XMLUni::fgXMLNSString;
          bVar2 = XMLString::equals(attName,(XMLCh *)&XMLUni::fgXMLNSString);
          if (bVar2 == false) goto LAB_0011c94a;
          bVar2 = true;
        }
        if (bVar2) {
          XMLBuffer::append(&this->fBuffer,0x20);
          XMLBuffer::append(&this->fBuffer,attName);
          XMLBuffer::append(&this->fBuffer,0x3d);
          XMLBuffer::append(&this->fBuffer,0x22);
          iVar3 = (*attribute->_vptr_DOMNode[3])(attribute);
          processAttValue(this,(XMLCh *)CONCAT44(extraout_var_06,iVar3),&this->fBuffer);
          puVar9 = (undefined8 *)0x22;
          XMLBuffer::append(&this->fBuffer,0x22);
          bVar1 = true;
        }
      }
      else {
        puVar9 = (undefined8 *)attName;
        bVar2 = ValueHashTableOf<unsigned_int>::containsKey(listOfURIs,attName);
        if (bVar2 != true) {
          local_74 = 0;
          ValueHashTableOf<unsigned_int>::put(listOfURIs,attName,&local_74);
          XMLBuffer::append(&this->fBuffer,0x20);
          XMLBuffer::append(&this->fBuffer,attName);
          XMLBuffer::append(&this->fBuffer,0x3d);
          XMLBuffer::append(&this->fBuffer,0x22);
          iVar3 = (*attribute->_vptr_DOMNode[3])(attribute);
          processAttValue(this,(XMLCh *)CONCAT44(extraout_var_05,iVar3),&this->fBuffer);
          puVar9 = (undefined8 *)0x22;
          XMLBuffer::append(&this->fBuffer,0x22);
        }
      }
    }
    iVar3 = (*(currentElem->super_DOMNode)._vptr_DOMNode[5])(currentElem);
    currentElem = (DOMElement *)CONCAT44(extraout_var_07,iVar3);
    pDVar5 = SchemaInfo::getRoot(this->fSchemaInfo);
    iVar3 = (*(pDVar5->super_DOMNode)._vptr_DOMNode[5])(pDVar5);
    this_00 = listOfURIs;
    if (currentElem == (DOMElement *)CONCAT44(extraout_var_08,iVar3)) {
      if (listOfURIs != (ValueHashTableOf_unsigned_int_ *)0x0) {
        ValueHashTableOf<unsigned_int>::_ValueHashTableOf(listOfURIs);
        xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,puVar9);
      }
      XMLBuffer::append(&this->fBuffer,0x3e);
      XMLBuffer::append(&this->fBuffer,10);
      XMLBuffer::append(&this->fBuffer,0x3c);
      if (prefix != (XMLCh *)0x0) {
        XMLBuffer::append(&this->fBuffer,prefix);
        XMLBuffer::append(&this->fBuffer,0x3a);
      }
      XMLBuffer::append(&this->fBuffer,(XMLCh *)&SchemaSymbols::fgELT_DOCUMENTATION);
      XMLBuffer::append(&this->fBuffer,0x3e);
      XMLBuffer::append(&this->fBuffer,(XMLCh *)fgSynthetic_Annotation);
      XMLBuffer::append(&this->fBuffer,0x3c);
      XMLBuffer::append(&this->fBuffer,0x2f);
      if (prefix != (XMLCh *)0x0) {
        XMLBuffer::append(&this->fBuffer,prefix);
        XMLBuffer::append(&this->fBuffer,0x3a);
      }
      XMLBuffer::append(&this->fBuffer,(XMLCh *)&SchemaSymbols::fgELT_DOCUMENTATION);
      XMLBuffer::append(&this->fBuffer,0x3e);
      XMLBuffer::append(&this->fBuffer,10);
      XMLBuffer::append(&this->fBuffer,0x3c);
      XMLBuffer::append(&this->fBuffer,0x2f);
      if (prefix != (XMLCh *)0x0) {
        XMLBuffer::append(&this->fBuffer,prefix);
        XMLBuffer::append(&this->fBuffer,0x3a);
      }
      XMLBuffer::append(&this->fBuffer,(XMLCh *)&SchemaSymbols::fgELT_ANNOTATION);
      XMLBuffer::append(&this->fBuffer,0x3e);
      pXVar6 = XMLBuffer::getRawBuffer(&this->fBuffer);
      annot = (XSAnnotation *)
              xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
      xercesc_2_7::XSAnnotation::XSAnnotation(annot,pXVar6,this->fGrammarPoolMemoryManager);
      XVar7 = XSDElementNSImpl::getColumnNo((XSDElementNSImpl *)elem);
      XVar8 = XSDElementNSImpl::getLineNo((XSDElementNSImpl *)elem);
      XSAnnotation::setLineCol(annot,(int)XVar8,(int)XVar7);
      SchemaInfo::getCurrentSchemaURL(this->fSchemaInfo);
      xercesc_2_7::XSAnnotation::setSystemId((ushort *)annot);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return annot;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


void __thiscall xercesc_2_7::TraverseSchema::validateAnnotations(TraverseSchema *this)

{
  long lVar1;
  MemoryManager *manager;
  XMLStringPool *pXVar2;
  code *pcVar3;
  XMLStringPool *pXVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  RefHashTableOf_xercesc_2_7__XSAnnotation_ *toEnum;
  XSAnnotation *pXVar10;
  long *this_00;
  RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *pRVar11;
  RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this_01;
  RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this_02;
  RefHashTableOf_xercesc_2_7__XMLAttDef_ *this_03;
  NamespaceScope *this_04;
  RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this_05;
  long *plVar12;
  SchemaElementDecl *pSVar13;
  ContentSpecNode *this_06;
  XMLCh *pXVar14;
  SchemaAttDef *pSVar15;
  SchemaElementDecl *elemDecl;
  ContentSpecNode *firstAdopt;
  ContentSpecNode *secondAdopt;
  ContentSpecNode *this_07;
  XMLCh *src;
  long *this_08;
  long in_FS_OFFSET;
  XSAnnotation *nextAnnot;
  MemoryManager *memMgr;
  XSAnnotation *xsAnnot;
  SchemaGrammar *grammar;
  NamespaceScope *nsScope;
  XMLSchemaDescription *gramDesc;
  SchemaElementDecl *annotElemDecl;
  ComplexTypeInfo *complexType;
  XMLCh *fullName;
  SchemaElementDecl *appInfoElemDecl;
  SchemaElementDecl *docElemDecl;
  ContentSpecNode *left;
  ContentSpecNode *right;
  ContentSpecNode *root;
  MemBufInputSource *memBufIS;
  XSAXMLScanner *scanner;
  XSAnnotation *xsAnnot_1;
  RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ xsAnnotationEnum;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  manager = this->fMemoryManager;
  toEnum = SchemaGrammar::getAnnotations(this->fSchemaGrammar);
  RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::RefHashTableOfEnumerator
            (&xsAnnotationEnum,toEnum,false,manager);
  pXVar10 = RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::nextElement(&xsAnnotationEnum);
  this_00 = (long *)xercesc_2_7::XMemory::operator_new(0xa0,manager);
  xercesc_2_7::SchemaGrammar::SchemaGrammar((SchemaGrammar *)this_00,manager);
  pRVar11 = (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *)
            xercesc_2_7::XMemory::operator_new(0x30,manager);
  RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::RefHashTableOf(pRVar11,0x1d,manager);
  SchemaGrammar::setComplexTypeRegistry((SchemaGrammar *)this_00,pRVar11);
  this_01 = (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *)
            xercesc_2_7::XMemory::operator_new(0x30,manager);
  RefHashTableOf<xercesc_2_7::XercesGroupInfo>::RefHashTableOf(this_01,0xd,manager);
  SchemaGrammar::setGroupInfoRegistry((SchemaGrammar *)this_00,this_01);
  this_02 = (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *)
            xercesc_2_7::XMemory::operator_new(0x30,manager);
  RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::RefHashTableOf(this_02,0xd,manager);
  SchemaGrammar::setAttGroupInfoRegistry((SchemaGrammar *)this_00,this_02);
  this_03 = (RefHashTableOf_xercesc_2_7__XMLAttDef_ *)
            xercesc_2_7::XMemory::operator_new(0x30,manager);
  RefHashTableOf<xercesc_2_7::XMLAttDef>::RefHashTableOf(this_03,0x1d,manager);
  SchemaGrammar::setAttributeDeclRegistry((SchemaGrammar *)this_00,this_03);
  this_04 = (NamespaceScope *)xercesc_2_7::XMemory::operator_new(0x48,manager);
  xercesc_2_7::NamespaceScope::NamespaceScope(this_04,manager);
  xercesc_2_7::NamespaceScope::reset((uint)this_04);
  SchemaGrammar::setNamespaceScope((SchemaGrammar *)this_00,this_04);
  this_05 = (RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)
            xercesc_2_7::XMemory::operator_new(0x28,manager);
  RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
  RefHash2KeysTableOf(this_05,0x1d,manager);
  SchemaGrammar::setValidSubstitutionGroups((SchemaGrammar *)this_00,this_05);
  SchemaGrammar::setTargetNamespace
            ((SchemaGrammar *)this_00,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  plVar12 = (long *)(**(code **)(*this_00 + 0xb0))(this_00);
  (**(code **)(*plVar12 + 0x70))(plVar12,&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  iVar7 = (**(code **)(*(long *)this->fURIStringPool + 0x28))
                    (this->fURIStringPool,&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  pSVar13 = (SchemaElementDecl *)xercesc_2_7::XMemory::operator_new(0x98,manager);
  xercesc_2_7::SchemaElementDecl::SchemaElementDecl
            (pSVar13,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&SchemaSymbols::fgELT_ANNOTATION,
             iVar7,Mixed_Complex,0xfffffffe,manager);
  XMLElementDecl::setCreateReason((XMLElementDecl *)pSVar13,Declared);
  (**(code **)(*this_00 + 0x88))(this_00,pSVar13,0);
  this_06 = (ContentSpecNode *)xercesc_2_7::XMemory::operator_new(0xb0,manager);
  xercesc_2_7::ComplexTypeInfo::ComplexTypeInfo((ComplexTypeInfo *)this_06,manager);
  ComplexTypeInfo::setAnonymous((ComplexTypeInfo *)this_06);
  ComplexTypeInfo::setContentType((ComplexTypeInfo *)this_06,3);
  SchemaElementDecl::setComplexTypeInfo(pSVar13,(ComplexTypeInfo *)this_06);
  XMLBuffer::set(&this->fBuffer,(XMLCh *)&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  XMLBuffer::append(&this->fBuffer,0x2c);
  XMLBuffer::append(&this->fBuffer,0x43);
  XMLBuffer::append(&this->fBuffer,0x30);
  pXVar2 = this->fStringPool;
  pcVar3 = *(code **)(*(long *)this->fStringPool + 0x50);
  pXVar4 = this->fStringPool;
  pcVar5 = *(code **)(*(long *)this->fStringPool + 0x28);
  pXVar14 = XMLBuffer::getRawBuffer(&this->fBuffer);
  uVar8 = (*pcVar5)(pXVar4,pXVar14);
  pXVar14 = (XMLCh *)(*pcVar3)(pXVar2,uVar8);
  pRVar11 = SchemaGrammar::getComplexTypeRegistry((SchemaGrammar *)this_00);
  RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::put(pRVar11,pXVar14,(ComplexTypeInfo *)this_06);
  ComplexTypeInfo::setTypeName((ComplexTypeInfo *)this_06,pXVar14);
  pSVar15 = (SchemaAttDef *)xercesc_2_7::XMemory::operator_new(0x78,manager);
  xercesc_2_7::SchemaAttDef::SchemaAttDef
            (pSVar15,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
             this->fEmptyNamespaceURI,Any_Any,ProcessContents_Lax,manager);
  ComplexTypeInfo::setAttWildCard((ComplexTypeInfo *)this_06,pSVar15);
  iVar7 = (**(code **)(*(long *)this->fURIStringPool + 0x28))
                    (this->fURIStringPool,&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  pSVar13 = (SchemaElementDecl *)xercesc_2_7::XMemory::operator_new(0x98,manager);
  xercesc_2_7::SchemaElementDecl::SchemaElementDecl
            (pSVar13,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&SchemaSymbols::fgELT_APPINFO,
             iVar7,Any,0xfffffffe,manager);
  XMLElementDecl::setCreateReason((XMLElementDecl *)pSVar13,Declared);
  pSVar15 = (SchemaAttDef *)xercesc_2_7::XMemory::operator_new(0x78,manager);
  xercesc_2_7::SchemaAttDef::SchemaAttDef
            (pSVar15,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
             this->fEmptyNamespaceURI,Any_Any,ProcessContents_Lax,manager);
  SchemaElementDecl::setAttWildCard(pSVar13,pSVar15);
  (**(code **)(*this_00 + 0x88))(this_00,pSVar13,0);
  ComplexTypeInfo::addElement((ComplexTypeInfo *)this_06,pSVar13);
  iVar7 = (**(code **)(*(long *)this->fURIStringPool + 0x28))
                    (this->fURIStringPool,&SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  elemDecl = (SchemaElementDecl *)xercesc_2_7::XMemory::operator_new(0x98,manager);
  xercesc_2_7::SchemaElementDecl::SchemaElementDecl
            (elemDecl,(ushort *)&XMLUni::fgZeroLenString,
             (ushort *)&SchemaSymbols::fgELT_DOCUMENTATION,iVar7,Any,0xfffffffe,manager);
  XMLElementDecl::setCreateReason((XMLElementDecl *)elemDecl,Declared);
  pSVar15 = (SchemaAttDef *)xercesc_2_7::XMemory::operator_new(0x78,manager);
  xercesc_2_7::SchemaAttDef::SchemaAttDef
            (pSVar15,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
             this->fEmptyNamespaceURI,Any_Any,ProcessContents_Lax,manager);
  SchemaElementDecl::setAttWildCard(elemDecl,pSVar15);
  (**(code **)(*this_00 + 0x88))(this_00,elemDecl,0);
  ComplexTypeInfo::addElement((ComplexTypeInfo *)this_06,elemDecl);
  firstAdopt = (ContentSpecNode *)xercesc_2_7::XMemory::operator_new(0x40,manager);
  ContentSpecNode::ContentSpecNode(firstAdopt,(XMLElementDecl *)pSVar13,manager);
  secondAdopt = (ContentSpecNode *)xercesc_2_7::XMemory::operator_new(0x40,manager);
  ContentSpecNode::ContentSpecNode(secondAdopt,(XMLElementDecl *)elemDecl,manager);
  this_07 = (ContentSpecNode *)xercesc_2_7::XMemory::operator_new(0x40,manager);
  ContentSpecNode::ContentSpecNode
            (this_07,ModelGroupChoice,firstAdopt,secondAdopt,true,true,manager);
  ContentSpecNode::setMinOccurs(this_07,0);
  ContentSpecNode::setMaxOccurs(this_07,-1);
  xercesc_2_7::ComplexTypeInfo::setContentSpec(this_06);
  pXVar14 = XSAnnotation::getAnnotationString(pXVar10);
  src = XSAnnotation::getAnnotationString(pXVar10);
  uVar9 = XMLString::stringLen(src);
  plVar12 = (long *)xercesc_2_7::XMemory::operator_new(0x40,manager);
  xercesc_2_7::MemBufInputSource::MemBufInputSource
            ((MemBufInputSource *)plVar12,(uchar *)pXVar14,uVar9 * 2,
             (ushort *)&SchemaSymbols::fgELT_ANNOTATION,false,manager);
  (**(code **)(*plVar12 + 0x38))(plVar12,&XMLUni::fgXMLChEncodingString);
  MemBufInputSource::setCopyBufToStream((MemBufInputSource *)plVar12,false);
  this_08 = (long *)xercesc_2_7::XMemory::operator_new(1000,manager);
  xercesc_2_7::XSAXMLScanner::XSAXMLScanner
            ((XSAXMLScanner *)this_08,this->fGrammarResolver,this->fURIStringPool,
             (SchemaGrammar *)this_00,manager);
  XMLScanner::setErrorReporter((XMLScanner *)this_08,this->fErrorReporter);
  (**(code **)(*this_08 + 0x40))(this_08,plVar12);
  nextAnnot = (XSAnnotation *)xercesc_2_7::XSAnnotation::getNext();
  do {
    if (nextAnnot == (XSAnnotation *)0x0) {
      bVar6 = RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::hasMoreElements
                        (&xsAnnotationEnum);
      if (bVar6 != false) goto LAB_0011d79d;
      bVar6 = false;
    }
    else {
LAB_0011d79d:
      bVar6 = true;
    }
    if (!bVar6) {
      if (this_08 != (long *)0x0) {
        (**(code **)(*this_08 + 8))(this_08);
      }
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
      RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::_RefHashTableOfEnumerator
                (&xsAnnotationEnum);
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (nextAnnot == (XSAnnotation *)0x0) {
      pXVar10 = RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::nextElement(&xsAnnotationEnum);
      pXVar14 = XSAnnotation::getAnnotationString(pXVar10);
      XMLString::stringLen(pXVar14);
      pXVar14 = XSAnnotation::getAnnotationString(pXVar10);
      xercesc_2_7::MemBufInputSource::resetMemBufInputSource((uchar *)plVar12,(uint)pXVar14);
      nextAnnot = (XSAnnotation *)xercesc_2_7::XSAnnotation::getNext();
    }
    else {
      pXVar14 = XSAnnotation::getAnnotationString(nextAnnot);
      XMLString::stringLen(pXVar14);
      pXVar14 = XSAnnotation::getAnnotationString(nextAnnot);
      xercesc_2_7::MemBufInputSource::resetMemBufInputSource((uchar *)plVar12,(uint)pXVar14);
      nextAnnot = (XSAnnotation *)xercesc_2_7::XSAnnotation::getNext();
    }
    (**(code **)(*this_08 + 0x40))(this_08,plVar12);
  } while( true );
}


void __thiscall xercesc_2_7::XMemory::XMemory(XMemory *this)

{
  return;
}


XMLCh * __thiscall xercesc_2_7::XMLException::getMessage(XMLException *this)

{
  return *(XMLCh **)(this + 0x20);
}


void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  this->_vptr_XMLDeleter = (anon_subr_int_varargs **)&PTR__XMLDeleter_00131670;
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


void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_00131640;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this,ArrayIndexOutOfBoundsException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_00131640;
  return;
}


void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this)

{
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_00131640;
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


/* (LSDA) Type Table */

XMLException * __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::duplicate(ArrayIndexOutOfBoundsException *this)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  this_00 = (ArrayIndexOutOfBoundsException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  ArrayIndexOutOfBoundsException(this_00,this);
  return &this_00->super_XMLException;
}


XMLCh * __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::getType(ArrayIndexOutOfBoundsException *this)

{
  return (XMLCh *)&XMLUni::fgArrayIndexOutOfBoundsException_Name;
}


void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__IllegalArgumentException_00131610;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


/* (LSDA) Type Table */

void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,IllegalArgumentException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__IllegalArgumentException_00131610;
  return;
}


void __thiscall
xercesc_2_7::IllegalArgumentException::_IllegalArgumentException(IllegalArgumentException *this)

{
  *(undefined ***)this = &PTR__IllegalArgumentException_00131610;
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


XMLException * __thiscall
xercesc_2_7::IllegalArgumentException::duplicate(IllegalArgumentException *this)

{
  IllegalArgumentException *this_00;
  
  this_00 = (IllegalArgumentException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  IllegalArgumentException(this_00,this);
  return &this_00->super_XMLException;
}


/* (LSDA) Type Table */

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
  *(undefined ***)this = &PTR__NoSuchElementException_001315e0;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


void __thiscall
xercesc_2_7::NoSuchElementException::NoSuchElementException
          (NoSuchElementException *this,NoSuchElementException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__NoSuchElementException_001315e0;
  return;
}


void __thiscall
xercesc_2_7::NoSuchElementException::_NoSuchElementException(NoSuchElementException *this)

{
  *(undefined ***)this = &PTR__NoSuchElementException_001315e0;
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


/* (LSDA) Type Table */

XMLException * __thiscall
xercesc_2_7::NoSuchElementException::duplicate(NoSuchElementException *this)

{
  NoSuchElementException *this_00;
  
  this_00 = (NoSuchElementException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  NoSuchElementException(this_00,this);
  return &this_00->super_XMLException;
}


XMLCh * __thiscall xercesc_2_7::NoSuchElementException::getType(NoSuchElementException *this)

{
  return (XMLCh *)&XMLUni::fgNoSuchElementException_Name;
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
xercesc_2_7::NullPointerException::NullPointerException
          (NullPointerException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__NullPointerException_001315b0;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


/* (LSDA) Type Table */

void __thiscall
xercesc_2_7::NullPointerException::NullPointerException
          (NullPointerException *this,NullPointerException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__NullPointerException_001315b0;
  return;
}


void __thiscall xercesc_2_7::NullPointerException::_NullPointerException(NullPointerException *this)

{
  *(undefined ***)this = &PTR__NullPointerException_001315b0;
  xercesc_2_7::XMLException::_XMLException(&this->super_XMLException);
  return;
}


void __thiscall xercesc_2_7::NullPointerException::_NullPointerException(NullPointerException *this)

{
  void *in_RSI;
  
  _NullPointerException(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


XMLException * __thiscall xercesc_2_7::NullPointerException::duplicate(NullPointerException *this)

{
  NullPointerException *this_00;
  
  this_00 = (NullPointerException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  NullPointerException(this_00,this);
  return &this_00->super_XMLException;
}


/* (LSDA) Type Table */

XMLCh * __thiscall xercesc_2_7::NullPointerException::getType(NullPointerException *this)

{
  return (XMLCh *)&XMLUni::fgNullPointerException_Name;
}


/* Original name: operator new */

void * operator_new(size_t param_1,void *__p)

{
  return __p;
}


void __thiscall xercesc_2_7::XSerializable::_XSerializable(XSerializable *this)

{
  this->_vptr_XSerializable = (anon_subr_int_varargs **)&DAT_00131578;
  return;
}


void __thiscall xercesc_2_7::XSerializable::_XSerializable(XSerializable *this)

{
  _XSerializable(this);
  operator_delete(this);
  return;
}


void __thiscall xercesc_2_7::XSerializable::XSerializable(XSerializable *this)

{
  this->_vptr_XSerializable = (anon_subr_int_varargs **)&DAT_00131578;
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


void __thiscall xercesc_2_7::QName::setURI(QName *this,uint uriId)

{
  *(uint *)(this + 0x14) = uriId;
  return;
}


DefAttTypes __thiscall xercesc_2_7::XMLAttDef::getDefaultType(XMLAttDef *this)

{
  return *(DefAttTypes *)(this + 8);
}


XMLCh * __thiscall xercesc_2_7::XMLAttDef::getEnumeration(XMLAttDef *this)

{
  return *(XMLCh **)(this + 0x28);
}


AttTypes __thiscall xercesc_2_7::XMLAttDef::getType(XMLAttDef *this)

{
  return *(AttTypes *)(this + 0xc);
}


XMLCh * __thiscall xercesc_2_7::XMLAttDef::getValue(XMLAttDef *this)

{
  return *(XMLCh **)(this + 0x20);
}


MemoryManager * __thiscall xercesc_2_7::XMLAttDef::getMemoryManager(XMLAttDef *this)

{
  return *(MemoryManager **)(this + 0x30);
}


void __thiscall xercesc_2_7::XMLAttDef::setDefaultType(XMLAttDef *this,DefAttTypes newValue)

{
  *(DefAttTypes *)(this + 8) = newValue;
  return;
}


void __thiscall xercesc_2_7::XMLAttDef::setType(XMLAttDef *this,AttTypes newValue)

{
  *(AttTypes *)(this + 0xc) = newValue;
  return;
}


void __thiscall xercesc_2_7::XMLAttDef::setValue(XMLAttDef *this,XMLCh *newValue)

{
  XMLCh *pXVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    (**(code **)(**(long **)(this + 0x30) + 0x18))
              (*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x20));
  }
  pXVar1 = XMLString::replicate(newValue,*(MemoryManager **)(this + 0x30));
  *(XMLCh **)(this + 0x20) = pXVar1;
  return;
}


int __thiscall xercesc_2_7::DatatypeValidator::getFinalSet(DatatypeValidator *this)

{
  return *(int *)(this + 0x10);
}


DatatypeValidator * __thiscall
xercesc_2_7::DatatypeValidator::getBaseValidator(DatatypeValidator *this)

{
  return *(DatatypeValidator **)(this + 0x28);
}


ValidatorType __thiscall xercesc_2_7::DatatypeValidator::getType(DatatypeValidator *this)

{
  return *(ValidatorType *)(this + 0x1c);
}


XMLCh * __thiscall xercesc_2_7::DatatypeValidator::getTypeLocalName(DatatypeValidator *this)

{
  return *(XMLCh **)(this + 0x50);
}


XMLCh * __thiscall xercesc_2_7::DatatypeValidator::getTypeUri(DatatypeValidator *this)

{
  return *(XMLCh **)(this + 0x58);
}


void __thiscall xercesc_2_7::DatatypeValidator::setAnonymous(DatatypeValidator *this)

{
  this[8] = (DatatypeValidator)0x1;
  return;
}


XMLCh * __thiscall xercesc_2_7::XMLElementDecl::getBaseName(XMLElementDecl *this)

{
  XMLCh *pXVar1;
  
  pXVar1 = QName::getLocalPart(*(QName **)(this + 0x10));
  return pXVar1;
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


MemoryManager * __thiscall xercesc_2_7::XMLElementDecl::getMemoryManager(XMLElementDecl *this)

{
  return *(MemoryManager **)(this + 8);
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


void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,XMLElementDecl *elemDecl,MemoryManager *manager)

{
  QName *pQVar1;
  QName *this_00;
  
  XSerializable::XSerializable(&this->super_XSerializable);
  XMemory::XMemory((XMemory *)this);
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_001314b0;
  this->fMemoryManager = manager;
  this->fElement = (QName *)0x0;
  this->fElementDecl = elemDecl;
  this->fFirst = (ContentSpecNode *)0x0;
  this->fSecond = (ContentSpecNode *)0x0;
  this->fType = Leaf;
  this->fAdoptFirst = true;
  this->fAdoptSecond = true;
  this->fMinOccurs = 1;
  this->fMaxOccurs = 1;
  if (elemDecl != (XMLElementDecl *)0x0) {
    pQVar1 = XMLElementDecl::getElementName(elemDecl);
    this_00 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,manager);
    xercesc_2_7::QName::QName(this_00,pQVar1);
    this->fElement = this_00;
  }
  return;
}


void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,QName *element,bool copyQName,MemoryManager *manager)

{
  QName *this_00;
  
  XSerializable::XSerializable(&this->super_XSerializable);
  XMemory::XMemory((XMemory *)this);
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_001314b0;
  this->fMemoryManager = manager;
  this->fElement = (QName *)0x0;
  this->fElementDecl = (XMLElementDecl *)0x0;
  this->fFirst = (ContentSpecNode *)0x0;
  this->fSecond = (ContentSpecNode *)0x0;
  this->fType = Leaf;
  this->fAdoptFirst = true;
  this->fAdoptSecond = true;
  this->fMinOccurs = 1;
  this->fMaxOccurs = 1;
  if (copyQName == false) {
    this->fElement = element;
  }
  else if (element != (QName *)0x0) {
    this_00 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fMemoryManager);
    xercesc_2_7::QName::QName(this_00,element);
    this->fElement = this_00;
  }
  return;
}


void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,NodeTypes type,ContentSpecNode *firstAdopt,
          ContentSpecNode *secondAdopt,bool adoptFirst,bool adoptSecond,MemoryManager *manager)

{
  XSerializable::XSerializable(&this->super_XSerializable);
  XMemory::XMemory((XMemory *)this);
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_001314b0;
  this->fMemoryManager = manager;
  this->fElement = (QName *)0x0;
  this->fElementDecl = (XMLElementDecl *)0x0;
  this->fFirst = firstAdopt;
  this->fSecond = secondAdopt;
  this->fType = type;
  this->fAdoptFirst = adoptFirst;
  this->fAdoptSecond = adoptSecond;
  this->fMinOccurs = 1;
  this->fMaxOccurs = 1;
  return;
}


void __thiscall xercesc_2_7::ContentSpecNode::_ContentSpecNode(ContentSpecNode *this)

{
  ContentSpecNode *pCVar1;
  long *plVar2;
  
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_001314b0;
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


void __thiscall xercesc_2_7::ContentSpecNode::_ContentSpecNode(ContentSpecNode *this)

{
  void *in_RSI;
  
  _ContentSpecNode(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


NodeTypes __thiscall xercesc_2_7::ContentSpecNode::getType(ContentSpecNode *this)

{
  return this->fType;
}


int __thiscall xercesc_2_7::ContentSpecNode::getMinOccurs(ContentSpecNode *this)

{
  return this->fMinOccurs;
}


int __thiscall xercesc_2_7::ContentSpecNode::getMaxOccurs(ContentSpecNode *this)

{
  return this->fMaxOccurs;
}


void __thiscall xercesc_2_7::ContentSpecNode::setType(ContentSpecNode *this,NodeTypes type)

{
  this->fType = type;
  return;
}


void __thiscall xercesc_2_7::ContentSpecNode::setMinOccurs(ContentSpecNode *this,int min)

{
  this->fMinOccurs = min;
  return;
}


void __thiscall xercesc_2_7::ContentSpecNode::setMaxOccurs(ContentSpecNode *this,int max)

{
  this->fMaxOccurs = max;
  return;
}


bool __thiscall xercesc_2_7::ContentSpecNode::hasAllContent(ContentSpecNode *this)

{
  NodeTypes NVar1;
  
  if (this->fType == ZeroOrOne) {
    NVar1 = getType(this->fFirst);
  }
  else {
    NVar1 = this->fType;
  }
  return NVar1 == All;
}


void __thiscall xercesc_2_7::XMLNotationDecl::setNameSpaceId(XMLNotationDecl *this,uint newId)

{
  *(uint *)(this + 0xc) = newId;
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


SchemaAttDef * __thiscall xercesc_2_7::SchemaAttDef::getBaseAttDecl(SchemaAttDef *this)

{
  return *(SchemaAttDef **)(this + 0x70);
}


void __thiscall
xercesc_2_7::SchemaAttDef::setDatatypeValidator
          (SchemaAttDef *this,DatatypeValidator *newDatatypeValidator)

{
  *(DatatypeValidator **)(this + 0x50) = newDatatypeValidator;
  return;
}


void __thiscall xercesc_2_7::SchemaAttDef::resetNamespaceList(SchemaAttDef *this)

{
  bool bVar1;
  uint uVar2;
  
  if (*(long *)(this + 0x68) != 0) {
    uVar2 = ValueVectorOf<unsigned_int>::size(*(ValueVectorOf_unsigned_int_ **)(this + 0x68));
    if (uVar2 != 0) {
      bVar1 = true;
      goto LAB_0011f529;
    }
  }
  bVar1 = false;
LAB_0011f529:
  if (bVar1) {
    ValueVectorOf<unsigned_int>::removeAllElements(*(ValueVectorOf_unsigned_int_ **)(this + 0x68));
  }
  return;
}


void __thiscall
xercesc_2_7::SchemaAttDef::setNamespaceList(SchemaAttDef *this,ValueVectorOf_unsigned_int_ *toSet)

{
  bool bVar1;
  uint uVar2;
  MemoryManager *pMVar3;
  ValueVectorOf_unsigned_int_ *this_00;
  
  if (toSet != (ValueVectorOf_unsigned_int_ *)0x0) {
    uVar2 = ValueVectorOf<unsigned_int>::size(toSet);
    if (uVar2 != 0) {
      bVar1 = true;
      goto LAB_0011f57c;
    }
  }
  bVar1 = false;
LAB_0011f57c:
  if (bVar1) {
    if (*(long *)(this + 0x68) == 0) {
      pMVar3 = XMLAttDef::getMemoryManager((XMLAttDef *)this);
      this_00 = (ValueVectorOf_unsigned_int_ *)xercesc_2_7::XMemory::operator_new(0x20,pMVar3);
      ValueVectorOf<unsigned_int>::ValueVectorOf(this_00,toSet);
      *(ValueVectorOf_unsigned_int_ **)(this + 0x68) = this_00;
    }
    else {
      ValueVectorOf<unsigned_int>::operator_(*(ValueVectorOf_unsigned_int_ **)(this + 0x68),toSet);
    }
  }
  else {
    resetNamespaceList(this);
  }
  return;
}


/* (LSDA) Type Table */

void __thiscall xercesc_2_7::SchemaAttDef::setBaseAttDecl(SchemaAttDef *this,SchemaAttDef *attDef)

{
  *(SchemaAttDef **)(this + 0x70) = attDef;
  return;
}


void __thiscall xercesc_2_7::SchemaAttDef::setPSVIScope(SchemaAttDef *this,PSVIScope toSet)

{
  *(PSVIScope *)(this + 0x44) = toSet;
  return;
}


bool __thiscall xercesc_2_7::ComplexTypeInfo::containsAttWithTypeId(ComplexTypeInfo *this)

{
  return (bool)this[0xb];
}


bool __thiscall xercesc_2_7::ComplexTypeInfo::getPreprocessed(ComplexTypeInfo *this)

{
  return (bool)this[0xc];
}


int __thiscall xercesc_2_7::ComplexTypeInfo::getDerivedBy(ComplexTypeInfo *this)

{
  return *(int *)(this + 0x10);
}


int __thiscall xercesc_2_7::ComplexTypeInfo::getFinalSet(ComplexTypeInfo *this)

{
  return *(int *)(this + 0x18);
}


uint __thiscall xercesc_2_7::ComplexTypeInfo::getScopeDefined(ComplexTypeInfo *this)

{
  return *(uint *)(this + 0x1c);
}


int __thiscall xercesc_2_7::ComplexTypeInfo::getContentType(ComplexTypeInfo *this)

{
  return *(int *)(this + 0x20);
}


uint __thiscall xercesc_2_7::ComplexTypeInfo::elementCount(ComplexTypeInfo *this)

{
  uint uVar1;
  
  if (*(long *)(this + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::size
                      (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x78));
  }
  return uVar1;
}


XMLCh * __thiscall xercesc_2_7::ComplexTypeInfo::getTypeName(ComplexTypeInfo *this)

{
  return *(XMLCh **)(this + 0x30);
}


DatatypeValidator * __thiscall
xercesc_2_7::ComplexTypeInfo::getBaseDatatypeValidator(ComplexTypeInfo *this)

{
  return *(DatatypeValidator **)(this + 0x48);
}


DatatypeValidator * __thiscall
xercesc_2_7::ComplexTypeInfo::getDatatypeValidator(ComplexTypeInfo *this)

{
  return *(DatatypeValidator **)(this + 0x50);
}


ComplexTypeInfo * __thiscall
xercesc_2_7::ComplexTypeInfo::getBaseComplexTypeInfo(ComplexTypeInfo *this)

{
  return *(ComplexTypeInfo **)(this + 0x58);
}


ContentSpecNode * __thiscall xercesc_2_7::ComplexTypeInfo::getContentSpec(ComplexTypeInfo *this)

{
  return *(ContentSpecNode **)(this + 0x60);
}


SchemaAttDef * __thiscall xercesc_2_7::ComplexTypeInfo::getAttWildCard(ComplexTypeInfo *this)

{
  return *(SchemaAttDef **)(this + 0x68);
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


SchemaAttDef * __thiscall
xercesc_2_7::ComplexTypeInfo::getAttDef(ComplexTypeInfo *this,XMLCh *baseName,int uriId)

{
  SchemaAttDef *pSVar1;
  
  pSVar1 = RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::get
                     (*(RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x80),baseName,
                      uriId);
  return pSVar1;
}


SchemaElementDecl * __thiscall
xercesc_2_7::ComplexTypeInfo::elementAt(ComplexTypeInfo *this,uint index)

{
  SchemaElementDecl *pSVar1;
  
  if (*(long *)(this + 0x78) == 0) {
    pSVar1 = (SchemaElementDecl *)0x0;
  }
  else {
    pSVar1 = BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::elementAt
                       (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x78),index);
  }
  return pSVar1;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setAbstract(ComplexTypeInfo *this,bool isAbstract)

{
  this[9] = (ComplexTypeInfo)isAbstract;
  return;
}


void __thiscall
xercesc_2_7::ComplexTypeInfo::setAdoptContentSpec(ComplexTypeInfo *this,bool toAdopt)

{
  this[10] = (ComplexTypeInfo)toAdopt;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setAttWithTypeId(ComplexTypeInfo *this,bool value)

{
  this[0xb] = (ComplexTypeInfo)value;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setPreprocessed(ComplexTypeInfo *this,bool aValue)

{
  this[0xc] = (ComplexTypeInfo)aValue;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setDerivedBy(ComplexTypeInfo *this,int derivedBy)

{
  *(int *)(this + 0x10) = derivedBy;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setBlockSet(ComplexTypeInfo *this,int blockSet)

{
  *(int *)(this + 0x14) = blockSet;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setFinalSet(ComplexTypeInfo *this,int finalSet)

{
  *(int *)(this + 0x18) = finalSet;
  return;
}


void __thiscall
xercesc_2_7::ComplexTypeInfo::setScopeDefined(ComplexTypeInfo *this,int scopeDefined)

{
  *(int *)(this + 0x1c) = scopeDefined;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setContentType(ComplexTypeInfo *this,int contentType)

{
  *(int *)(this + 0x20) = contentType;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setTypeName(ComplexTypeInfo *this,XMLCh *typeName)

{
  int iVar1;
  uint uVar2;
  XMLCh *pXVar3;
  undefined8 uVar4;
  int index;
  int length;
  
  (**(code **)(**(long **)(this + 0xa8) + 0x18))
            (*(undefined8 *)(this + 0xa8),*(undefined8 *)(this + 0x30));
  (**(code **)(**(long **)(this + 0xa8) + 0x18))
            (*(undefined8 *)(this + 0xa8),*(undefined8 *)(this + 0x38));
  (**(code **)(**(long **)(this + 0xa8) + 0x18))
            (*(undefined8 *)(this + 0xa8),*(undefined8 *)(this + 0x40));
  if (typeName == (XMLCh *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x38);
  }
  else {
    pXVar3 = XMLString::replicate(typeName,*(MemoryManager **)(this + 0xa8));
    *(XMLCh **)(this + 0x30) = pXVar3;
    iVar1 = xercesc_2_7::XMLString::indexOf(*(ushort **)(this + 0x30),0x2c);
    uVar2 = XMLString::stringLen(*(XMLCh **)(this + 0x30));
    uVar4 = (**(code **)(**(long **)(this + 0xa8) + 0x10))
                      (*(undefined8 *)(this + 0xa8),(long)(int)((uVar2 - iVar1) + 1) * 2);
    *(undefined8 *)(this + 0x38) = uVar4;
    xercesc_2_7::XMLString::subString
              (*(ushort **)(this + 0x38),*(ushort **)(this + 0x30),iVar1 + 1,uVar2,
               *(MemoryManager **)(this + 0xa8));
    uVar4 = (**(code **)(**(long **)(this + 0xa8) + 0x10))
                      (*(undefined8 *)(this + 0xa8),(long)(iVar1 + 1) * 2);
    *(undefined8 *)(this + 0x40) = uVar4;
    xercesc_2_7::XMLString::subString
              (*(ushort **)(this + 0x40),*(ushort **)(this + 0x30),0,iVar1,
               *(MemoryManager **)(this + 0xa8));
  }
  return;
}


void __thiscall
xercesc_2_7::ComplexTypeInfo::setBaseDatatypeValidator
          (ComplexTypeInfo *this,DatatypeValidator *validator)

{
  *(DatatypeValidator **)(this + 0x48) = validator;
  return;
}


void __thiscall
xercesc_2_7::ComplexTypeInfo::setDatatypeValidator
          (ComplexTypeInfo *this,DatatypeValidator *validator)

{
  *(DatatypeValidator **)(this + 0x50) = validator;
  return;
}


void __thiscall
xercesc_2_7::ComplexTypeInfo::setBaseComplexTypeInfo
          (ComplexTypeInfo *this,ComplexTypeInfo *typeInfo)

{
  *(ComplexTypeInfo **)(this + 0x58) = typeInfo;
  return;
}


void __thiscall
xercesc_2_7::ComplexTypeInfo::addElement(ComplexTypeInfo *this,SchemaElementDecl *elem)

{
  bool bVar1;
  RefVectorOf_xercesc_2_7__SchemaElementDecl_ *this_00;
  
  if (*(long *)(this + 0x78) == 0) {
    this_00 = (RefVectorOf_xercesc_2_7__SchemaElementDecl_ *)
              xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)(this + 0xa8));
    RefVectorOf<xercesc_2_7::SchemaElementDecl>::RefVectorOf
              (this_00,8,false,*(MemoryManager **)(this + 0xa8));
    *(RefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x78) = this_00;
  }
  else {
    bVar1 = BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::containsElement
                      (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x78),elem);
    if (bVar1 != false) {
      return;
    }
  }
  BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::addElement
            (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x78),elem);
  return;
}


void __thiscall
xercesc_2_7::ComplexTypeInfo::setAttWildCard(ComplexTypeInfo *this,SchemaAttDef *toAdopt)

{
  long *plVar1;
  
  if ((*(long *)(this + 0x68) != 0) && (plVar1 = *(long **)(this + 0x68), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  *(SchemaAttDef **)(this + 0x68) = toAdopt;
  return;
}


void __thiscall xercesc_2_7::ComplexTypeInfo::setAnonymous(ComplexTypeInfo *this)

{
  this[8] = (ComplexTypeInfo)0x1;
  return;
}


bool __thiscall xercesc_2_7::ComplexTypeInfo::hasAttDefs(ComplexTypeInfo *this)

{
  bool bVar1;
  
  bVar1 = RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::isEmpty
                    (*(RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x80));
  return (bool)(bVar1 ^ 1);
}


int __thiscall xercesc_2_7::IdentityConstraint::getFieldCount(IdentityConstraint *this)

{
  uint uVar1;
  
  if (*(long *)(this + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = BaseRefVectorOf<xercesc_2_7::IC_Field>::size
                      (*(BaseRefVectorOf_xercesc_2_7__IC_Field_ **)(this + 0x20));
  }
  return uVar1;
}


XMLCh * __thiscall
xercesc_2_7::IdentityConstraint::getIdentityConstraintName(IdentityConstraint *this)

{
  return *(XMLCh **)(this + 8);
}


void __thiscall xercesc_2_7::IdentityConstraint::setNamespaceURI(IdentityConstraint *this,int uri)

{
  *(int *)(this + 0x30) = uri;
  return;
}


void __thiscall xercesc_2_7::IdentityConstraint::addField(IdentityConstraint *this,IC_Field *field)

{
  RefVectorOf_xercesc_2_7__IC_Field_ *this_00;
  
  if (*(long *)(this + 0x20) == 0) {
    this_00 = (RefVectorOf_xercesc_2_7__IC_Field_ *)
              xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)(this + 0x28));
    RefVectorOf<xercesc_2_7::IC_Field>::RefVectorOf(this_00,4,true,*(MemoryManager **)(this + 0x28))
    ;
    *(RefVectorOf_xercesc_2_7__IC_Field_ **)(this + 0x20) = this_00;
  }
  BaseRefVectorOf<xercesc_2_7::IC_Field>::addElement
            (*(BaseRefVectorOf_xercesc_2_7__IC_Field_ **)(this + 0x20),field);
  return;
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


DatatypeValidator * __thiscall
xercesc_2_7::SchemaElementDecl::getDatatypeValidator(SchemaElementDecl *this)

{
  return *(DatatypeValidator **)(this + 0x88);
}


uint __thiscall xercesc_2_7::SchemaElementDecl::getEnclosingScope(SchemaElementDecl *this)

{
  return *(uint *)(this + 0x34);
}


int __thiscall xercesc_2_7::SchemaElementDecl::getFinalSet(SchemaElementDecl *this)

{
  return *(int *)(this + 0x38);
}


int __thiscall xercesc_2_7::SchemaElementDecl::getMiscFlags(SchemaElementDecl *this)

{
  return *(int *)(this + 0x40);
}


ComplexTypeInfo * __thiscall
xercesc_2_7::SchemaElementDecl::getComplexTypeInfo(SchemaElementDecl *this)

{
  return *(ComplexTypeInfo **)(this + 0x50);
}


SchemaElementDecl * __thiscall
xercesc_2_7::SchemaElementDecl::getSubstitutionGroupElem(SchemaElementDecl *this)

{
  return *(SchemaElementDecl **)(this + 0x80);
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setModelType(SchemaElementDecl *this,ModelTypes toSet)

{
  *(ModelTypes *)(this + 0x24) = toSet;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setPSVIScope(SchemaElementDecl *this,PSVIScope toSet)

{
  *(PSVIScope *)(this + 0x28) = toSet;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setDatatypeValidator
          (SchemaElementDecl *this,DatatypeValidator *newDatatypeValidator)

{
  *(DatatypeValidator **)(this + 0x88) = newDatatypeValidator;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setEnclosingScope(SchemaElementDecl *this,uint newEnclosingScope)

{
  *(uint *)(this + 0x34) = newEnclosingScope;
  return;
}


void __thiscall xercesc_2_7::SchemaElementDecl::setFinalSet(SchemaElementDecl *this,int finalSet)

{
  *(int *)(this + 0x38) = finalSet;
  return;
}


void __thiscall xercesc_2_7::SchemaElementDecl::setBlockSet(SchemaElementDecl *this,int blockSet)

{
  *(int *)(this + 0x3c) = blockSet;
  return;
}


void __thiscall xercesc_2_7::SchemaElementDecl::setMiscFlags(SchemaElementDecl *this,int flags)

{
  *(int *)(this + 0x40) = flags;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setDefaultValue(SchemaElementDecl *this,XMLCh *value)

{
  MemoryManager *pMVar1;
  XMLCh *pXVar2;
  
  if (*(long *)(this + 0x48) != 0) {
    pMVar1 = XMLElementDecl::getMemoryManager((XMLElementDecl *)this);
    (*pMVar1->_vptr_MemoryManager[3])(pMVar1,*(undefined8 *)(this + 0x48));
  }
  pMVar1 = XMLElementDecl::getMemoryManager((XMLElementDecl *)this);
  pXVar2 = XMLString::replicate(value,pMVar1);
  *(XMLCh **)(this + 0x48) = pXVar2;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setComplexTypeInfo
          (SchemaElementDecl *this,ComplexTypeInfo *typeInfo)

{
  *(ComplexTypeInfo **)(this + 0x50) = typeInfo;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setAttWildCard(SchemaElementDecl *this,SchemaAttDef *attWildCard)

{
  long *plVar1;
  
  if ((*(long *)(this + 0x78) != 0) && (plVar1 = *(long **)(this + 0x78), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  *(SchemaAttDef **)(this + 0x78) = attWildCard;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::setSubstitutionGroupElem
          (SchemaElementDecl *this,SchemaElementDecl *elemDecl)

{
  *(SchemaElementDecl **)(this + 0x80) = elemDecl;
  return;
}


void __thiscall
xercesc_2_7::SchemaElementDecl::addIdentityConstraint
          (SchemaElementDecl *this,IdentityConstraint *ic)

{
  MemoryManager *manager;
  MemoryManager *pMVar1;
  RefVectorOf_xercesc_2_7__IdentityConstraint_ *this_00;
  
  if (*(long *)(this + 0x70) == 0) {
    manager = XMLElementDecl::getMemoryManager((XMLElementDecl *)this);
    pMVar1 = XMLElementDecl::getMemoryManager((XMLElementDecl *)this);
    this_00 = (RefVectorOf_xercesc_2_7__IdentityConstraint_ *)
              xercesc_2_7::XMemory::operator_new(0x28,pMVar1);
    RefVectorOf<xercesc_2_7::IdentityConstraint>::RefVectorOf(this_00,0x10,true,manager);
    *(RefVectorOf_xercesc_2_7__IdentityConstraint_ **)(this + 0x70) = this_00;
  }
  BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::addElement
            (*(BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ **)(this + 0x70),ic);
  return;
}


void __thiscall xercesc_2_7::XMLRefInfo::_XMLRefInfo(XMLRefInfo *this)

{
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__XMLRefInfo_001311a8;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fRefName);
  XSerializable::_XSerializable(&this->super_XSerializable);
  return;
}


void __thiscall xercesc_2_7::XMLRefInfo::_XMLRefInfo(XMLRefInfo *this)

{
  void *in_RSI;
  
  _XMLRefInfo(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


DatatypeValidator * __thiscall
xercesc_2_7::DatatypeValidatorFactory::getDatatypeValidator
          (DatatypeValidatorFactory *this,XMLCh *dvType)

{
  bool bVar1;
  DatatypeValidator *pDVar2;
  
  if (dvType != (XMLCh *)0x0) {
    if ((fBuiltInRegistry == (RefHashTableOf_xercesc_2_7__DatatypeValidator_ *)0x0) ||
       (bVar1 = RefHashTableOf<xercesc_2_7::DatatypeValidator>::containsKey(fBuiltInRegistry,dvType)
       , bVar1 == false)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pDVar2 = RefHashTableOf<xercesc_2_7::DatatypeValidator>::get(fBuiltInRegistry,dvType);
      return pDVar2;
    }
    if ((*(long *)(this + 8) == 0) ||
       (bVar1 = RefHashTableOf<xercesc_2_7::DatatypeValidator>::containsKey
                          (*(RefHashTableOf_xercesc_2_7__DatatypeValidator_ **)(this + 8),dvType),
       bVar1 == false)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pDVar2 = RefHashTableOf<xercesc_2_7::DatatypeValidator>::get
                         (*(RefHashTableOf_xercesc_2_7__DatatypeValidator_ **)(this + 8),dvType);
      return pDVar2;
    }
  }
  return (DatatypeValidator *)0x0;
}


RefHashTableOf_xercesc_2_7__XMLAttDef_ * __thiscall
xercesc_2_7::SchemaGrammar::getAttributeDeclRegistry(SchemaGrammar *this)

{
  return *(RefHashTableOf_xercesc_2_7__XMLAttDef_ **)(this + 0x30);
}


RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ * __thiscall
xercesc_2_7::SchemaGrammar::getComplexTypeRegistry(SchemaGrammar *this)

{
  return *(RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ **)(this + 0x38);
}


RefHashTableOf_xercesc_2_7__XercesGroupInfo_ * __thiscall
xercesc_2_7::SchemaGrammar::getGroupInfoRegistry(SchemaGrammar *this)

{
  return *(RefHashTableOf_xercesc_2_7__XercesGroupInfo_ **)(this + 0x40);
}


RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ * __thiscall
xercesc_2_7::SchemaGrammar::getAttGroupInfoRegistry(SchemaGrammar *this)

{
  return *(RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ **)(this + 0x48);
}


DatatypeValidatorFactory * __thiscall
xercesc_2_7::SchemaGrammar::getDatatypeRegistry(SchemaGrammar *this)

{
  return (DatatypeValidatorFactory *)(this + 0x88);
}


NamespaceScope * __thiscall xercesc_2_7::SchemaGrammar::getNamespaceScope(SchemaGrammar *this)

{
  return *(NamespaceScope **)(this + 0x50);
}


RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ * __thiscall
xercesc_2_7::SchemaGrammar::getValidSubstitutionGroups(SchemaGrammar *this)

{
  return *(RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)
          (this + 0x58);
}


ValidationContext * __thiscall xercesc_2_7::SchemaGrammar::getValidationContext(SchemaGrammar *this)

{
  return *(ValidationContext **)(this + 0x60);
}


RefHashTableOf_xercesc_2_7__XSAnnotation_ * __thiscall
xercesc_2_7::SchemaGrammar::getAnnotations(SchemaGrammar *this)

{
  return *(RefHashTableOf_xercesc_2_7__XSAnnotation_ **)(this + 0x78);
}


void __thiscall
xercesc_2_7::SchemaGrammar::setTargetNamespace(SchemaGrammar *this,XMLCh *targetNamespace)

{
  XMLCh *pXVar1;
  
  if (*(long *)(this + 8) != 0) {
    (**(code **)(**(long **)(this + 0x68) + 0x18))
              (*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 8));
  }
  pXVar1 = XMLString::replicate(targetNamespace,*(MemoryManager **)(this + 0x68));
  *(XMLCh **)(this + 8) = pXVar1;
  return;
}


void __thiscall
xercesc_2_7::SchemaGrammar::setAttributeDeclRegistry
          (SchemaGrammar *this,RefHashTableOf_xercesc_2_7__XMLAttDef_ *attReg)

{
  *(RefHashTableOf_xercesc_2_7__XMLAttDef_ **)(this + 0x30) = attReg;
  return;
}


void __thiscall
xercesc_2_7::SchemaGrammar::setComplexTypeRegistry
          (SchemaGrammar *this,RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *other)

{
  *(RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ **)(this + 0x38) = other;
  return;
}


void __thiscall
xercesc_2_7::SchemaGrammar::setGroupInfoRegistry
          (SchemaGrammar *this,RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *other)

{
  *(RefHashTableOf_xercesc_2_7__XercesGroupInfo_ **)(this + 0x40) = other;
  return;
}


void __thiscall
xercesc_2_7::SchemaGrammar::setAttGroupInfoRegistry
          (SchemaGrammar *this,RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *other)

{
  *(RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ **)(this + 0x48) = other;
  return;
}


void __thiscall
xercesc_2_7::SchemaGrammar::setNamespaceScope(SchemaGrammar *this,NamespaceScope *nsScope)

{
  *(NamespaceScope **)(this + 0x50) = nsScope;
  return;
}


void __thiscall
xercesc_2_7::SchemaGrammar::setValidSubstitutionGroups
          (SchemaGrammar *this,
          RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *other)

{
  *(RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)
   (this + 0x58) = other;
  return;
}


uint __thiscall
xercesc_2_7::SchemaGrammar::putGroupElemDecl(SchemaGrammar *this,XMLElementDecl *elemDecl)

{
  RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ *this_00;
  uint uVar1;
  uint key2;
  XMLCh *key1;
  
  this_00 = *(RefHash3KeysIdPool_xercesc_2_7__SchemaElementDecl_ **)(this + 0x20);
  uVar1 = SchemaElementDecl::getEnclosingScope((SchemaElementDecl *)elemDecl);
  key2 = XMLElementDecl::getURI(elemDecl);
  key1 = XMLElementDecl::getBaseName(elemDecl);
  uVar1 = RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>::put
                    (this_00,key1,key2,uVar1,(SchemaElementDecl *)elemDecl);
  return uVar1;
}


ushort __thiscall xercesc_2_7::SchemaInfo::getElemAttrDefaultQualified(SchemaInfo *this)

{
  return this->fElemAttrDefaultQualified;
}


bool __thiscall xercesc_2_7::SchemaInfo::getProcessed(SchemaInfo *this)

{
  return this->fProcessed;
}


int __thiscall xercesc_2_7::SchemaInfo::getBlockDefault(SchemaInfo *this)

{
  return this->fBlockDefault;
}


int __thiscall xercesc_2_7::SchemaInfo::getFinalDefault(SchemaInfo *this)

{
  return this->fFinalDefault;
}


uint __thiscall xercesc_2_7::SchemaInfo::getNamespaceScopeLevel(SchemaInfo *this)

{
  return this->fNamespaceScopeLevel;
}


XMLCh * __thiscall xercesc_2_7::SchemaInfo::getCurrentSchemaURL(SchemaInfo *this)

{
  return this->fCurrentSchemaURL;
}


XMLCh * __thiscall xercesc_2_7::SchemaInfo::getTargetNSURIString(SchemaInfo *this)

{
  return this->fTargetNSURIString;
}


DOMElement * __thiscall xercesc_2_7::SchemaInfo::getRoot(SchemaInfo *this)

{
  return this->fSchemaRootElement;
}


int __thiscall xercesc_2_7::SchemaInfo::getTargetNSURI(SchemaInfo *this)

{
  return this->fTargetNSURI;
}


int __thiscall xercesc_2_7::SchemaInfo::getScopeCount(SchemaInfo *this)

{
  return this->fScopeCount;
}


BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ * __thiscall
xercesc_2_7::SchemaInfo::getImportingListEnumerator
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *__return_storage_ptr__,SchemaInfo *this
          )

{
  BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::BaseRefVectorEnumerator
            (__return_storage_ptr__,
             (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fImportingInfoList,false);
  return __return_storage_ptr__;
}


ValueVectorOf_const_xercesc_2_7__DOMElement__ * __thiscall
xercesc_2_7::SchemaInfo::getRecursingAnonTypes(SchemaInfo *this)

{
  return this->fRecursingAnonTypes;
}


ValueVectorOf_short_unsigned_int_const__ * __thiscall
xercesc_2_7::SchemaInfo::getRecursingTypeNames(SchemaInfo *this)

{
  return this->fRecursingTypeNames;
}


ValueVectorOf_xercesc_2_7__DOMNode__ * __thiscall
xercesc_2_7::SchemaInfo::getNonXSAttList(SchemaInfo *this)

{
  return this->fNonXSAttList;
}


void __thiscall xercesc_2_7::SchemaInfo::setScopeCount(SchemaInfo *this,int aValue)

{
  this->fScopeCount = aValue;
  return;
}


void __thiscall xercesc_2_7::SchemaInfo::setBlockDefault(SchemaInfo *this,int aValue)

{
  this->fBlockDefault = aValue;
  return;
}


void __thiscall xercesc_2_7::SchemaInfo::setFinalDefault(SchemaInfo *this,int aValue)

{
  this->fFinalDefault = aValue;
  return;
}


void __thiscall xercesc_2_7::SchemaInfo::setElemAttrDefaultQualified(SchemaInfo *this,ushort aValue)

{
  this->fElemAttrDefaultQualified = aValue;
  return;
}


void __thiscall xercesc_2_7::SchemaInfo::setProcessed(SchemaInfo *this,bool aValue)

{
  this->fProcessed = aValue;
  return;
}


void __thiscall xercesc_2_7::SchemaInfo::addImportedNS(SchemaInfo *this,int namespaceURI)

{
  bool bVar1;
  ValueVectorOf_int_ *this_00;
  int local_24;
  SchemaInfo *local_20;
  
  local_24 = namespaceURI;
  local_20 = this;
  if (this->fImportedNSList == (ValueVectorOf_int_ *)0x0) {
    this_00 = (ValueVectorOf_int_ *)xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
    ValueVectorOf<int>::ValueVectorOf(this_00,4,local_20->fMemoryManager,false);
    local_20->fImportedNSList = this_00;
  }
  bVar1 = ValueVectorOf<int>::containsElement(local_20->fImportedNSList,&local_24,0);
  if (bVar1 != true) {
    ValueVectorOf<int>::addElement(local_20->fImportedNSList,&local_24);
  }
  return;
}


void __thiscall
xercesc_2_7::SchemaInfo::addSchemaInfo(SchemaInfo *this,SchemaInfo *toAdd,ListType aListType)

{
  bool bVar1;
  int namespaceURI;
  RefVectorOf_xercesc_2_7__SchemaInfo_ *pRVar2;
  
  if (aListType == IMPORT) {
    if (this->fImportedInfoList == (RefVectorOf_xercesc_2_7__SchemaInfo_ *)0x0) {
      pRVar2 = (RefVectorOf_xercesc_2_7__SchemaInfo_ *)
               xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
      RefVectorOf<xercesc_2_7::SchemaInfo>::RefVectorOf(pRVar2,4,false,this->fMemoryManager);
      this->fImportedInfoList = pRVar2;
    }
    bVar1 = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::containsElement
                      ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fImportedInfoList,toAdd);
    if (bVar1 != true) {
      BaseRefVectorOf<xercesc_2_7::SchemaInfo>::addElement
                ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fImportedInfoList,toAdd);
      namespaceURI = getTargetNSURI(toAdd);
      addImportedNS(this,namespaceURI);
      xercesc_2_7::SchemaInfo::updateImportingInfo(toAdd);
    }
  }
  else {
    if (this->fIncludeInfoList == (RefVectorOf_xercesc_2_7__SchemaInfo_ *)0x0) {
      pRVar2 = (RefVectorOf_xercesc_2_7__SchemaInfo_ *)
               xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
      RefVectorOf<xercesc_2_7::SchemaInfo>::RefVectorOf(pRVar2,8,false,this->fMemoryManager);
      this->fIncludeInfoList = pRVar2;
      this->fAdoptInclude = true;
    }
    bVar1 = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::containsElement
                      ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fIncludeInfoList,toAdd);
    if (bVar1 != true) {
      BaseRefVectorOf<xercesc_2_7::SchemaInfo>::addElement
                ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fIncludeInfoList,toAdd);
      toAdd->fIncludeInfoList = this->fIncludeInfoList;
    }
  }
  return;
}


SchemaInfo * __thiscall xercesc_2_7::SchemaInfo::getImportInfo(SchemaInfo *this,uint namespaceURI)

{
  uint uVar1;
  uint uVar2;
  uint i;
  uint importSize;
  SchemaInfo *currInfo;
  
  if (this->fImportedInfoList == (RefVectorOf_xercesc_2_7__SchemaInfo_ *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::size
                      ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fImportedInfoList);
  }
  currInfo = (SchemaInfo *)0x0;
  i = 0;
  while( true ) {
    if (uVar1 <= i) {
      return currInfo;
    }
    currInfo = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::elementAt
                         ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fImportedInfoList,i);
    uVar2 = getTargetNSURI(currInfo);
    if (uVar2 == namespaceURI) break;
    i = i + 1;
  }
  return currInfo;
}


bool __thiscall xercesc_2_7::SchemaInfo::circularImportExist(SchemaInfo *this,uint namespaceURI)

{
  uint uVar1;
  uint uVar2;
  SchemaInfo *this_00;
  uint i;
  uint importSize;
  
  uVar1 = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::size
                    ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fImportingInfoList);
  i = 0;
  while( true ) {
    if (uVar1 <= i) {
      return false;
    }
    this_00 = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::elementAt
                        ((BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)this->fImportingInfoList,i);
    uVar2 = getTargetNSURI(this_00);
    if (uVar2 == namespaceURI) break;
    i = i + 1;
  }
  return true;
}


void __thiscall xercesc_2_7::SchemaInfo::addFailedRedefine(SchemaInfo *this,DOMElement *anElem)

{
  ValueVectorOf_const_xercesc_2_7__DOMElement__ *this_00;
  DOMElement *local_28;
  SchemaInfo *local_20;
  
  local_28 = anElem;
  local_20 = this;
  if (this->fFailedRedefineList == (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)0x0) {
    this_00 = (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)
              xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
    ValueVectorOf<const_xercesc_2_7::DOMElement*>::ValueVectorOf
              (this_00,4,local_20->fMemoryManager,false);
    local_20->fFailedRedefineList = this_00;
  }
  ValueVectorOf<const_xercesc_2_7::DOMElement*>::addElement(local_20->fFailedRedefineList,&local_28)
  ;
  return;
}


bool __thiscall xercesc_2_7::SchemaInfo::isImportingNS(SchemaInfo *this,int namespaceURI)

{
  undefined uVar1;
  int local_14;
  SchemaInfo *local_10;
  
  if (this->fImportedNSList == (ValueVectorOf_int_ *)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = namespaceURI;
    local_10 = this;
    uVar1 = ValueVectorOf<int>::containsElement(this->fImportedNSList,&local_14,0);
  }
  return (bool)uVar1;
}


void __thiscall
xercesc_2_7::SchemaInfo::addRecursingType(SchemaInfo *this,DOMElement *elem,XMLCh *name)

{
  ValueVectorOf_const_xercesc_2_7__DOMElement__ *this_00;
  ValueVectorOf_short_unsigned_int_const__ *this_01;
  XMLCh *local_30;
  DOMElement *local_28;
  SchemaInfo *local_20;
  
  local_30 = name;
  local_28 = elem;
  local_20 = this;
  if (this->fRecursingAnonTypes == (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)0x0) {
    this_00 = (ValueVectorOf_const_xercesc_2_7__DOMElement__ *)
              xercesc_2_7::XMemory::operator_new(0x20,this->fMemoryManager);
    ValueVectorOf<const_xercesc_2_7::DOMElement*>::ValueVectorOf
              (this_00,8,local_20->fMemoryManager,false);
    local_20->fRecursingAnonTypes = this_00;
    this_01 = (ValueVectorOf_short_unsigned_int_const__ *)
              xercesc_2_7::XMemory::operator_new(0x20,local_20->fMemoryManager);
    ValueVectorOf<short_unsigned_int_const*>::ValueVectorOf
              (this_01,8,local_20->fMemoryManager,false);
    local_20->fRecursingTypeNames = this_01;
  }
  ValueVectorOf<const_xercesc_2_7::DOMElement*>::addElement(local_20->fRecursingAnonTypes,&local_28)
  ;
  ValueVectorOf<short_unsigned_int_const*>::addElement(local_20->fRecursingTypeNames,&local_30);
  return;
}


ushort __thiscall
xercesc_2_7::GeneralAttributeCheck::getFacetId
          (GeneralAttributeCheck *this,XMLCh *facetName,MemoryManager *manager)

{
  ushort *puVar1;
  
  puVar1 = ValueHashTableOf<short_unsigned_int>::get(fFacetsMap,facetName,manager);
  return *puVar1;
}


void __thiscall
xercesc_2_7::GeneralAttributeCheck::setValidationContext
          (GeneralAttributeCheck *this,ValidationContext *newValidationContext)

{
  this->fValidationContext = newValidationContext;
  return;
}


void __thiscall xercesc_2_7::XSDErrorReporter::_XSDErrorReporter(XSDErrorReporter *this)

{
  this->_vptr_XSDErrorReporter = (anon_subr_int_varargs **)&PTR__XSDErrorReporter_00131088;
  return;
}


void __thiscall xercesc_2_7::XSDErrorReporter::_XSDErrorReporter(XSDErrorReporter *this)

{
  void *in_RSI;
  
  _XSDErrorReporter(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
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


XMLCh * __thiscall xercesc_2_7::TraverseSchema::getPrefix(TraverseSchema *this,XMLCh *rawName)

{
  XMLStringPool *pXVar1;
  code *pcVar2;
  XMLStringPool *pXVar3;
  code *pcVar4;
  uint count;
  undefined4 uVar5;
  undefined8 *puVar6;
  XMLCh *pXVar7;
  int colonIndex;
  
  count = xercesc_2_7::XMLString::indexOf(rawName,0x3a);
  if ((count == 0xffffffff) || (count == 0)) {
    puVar6 = &XMLUni::fgZeroLenString;
  }
  else {
    XMLBuffer::set(&this->fBuffer,rawName,count);
    pXVar1 = this->fStringPool;
    pcVar2 = *(code **)(*(long *)this->fStringPool + 0x50);
    pXVar3 = this->fStringPool;
    pcVar4 = *(code **)(*(long *)this->fStringPool + 0x28);
    pXVar7 = XMLBuffer::getRawBuffer(&this->fBuffer);
    uVar5 = (*pcVar4)(pXVar3,pXVar7);
    puVar6 = (undefined8 *)(*pcVar2)(pXVar1,uVar5);
  }
  return (XMLCh *)puVar6;
}


XMLCh * __thiscall xercesc_2_7::TraverseSchema::getLocalPart(TraverseSchema *this,XMLCh *rawName)

{
  XMLStringPool *pXVar1;
  code *pcVar2;
  XMLStringPool *pXVar3;
  code *pcVar4;
  int iVar5;
  uint count;
  undefined4 uVar6;
  undefined8 *puVar7;
  XMLCh *pXVar8;
  int colonIndex;
  int rawNameLen;
  
  iVar5 = xercesc_2_7::XMLString::indexOf(rawName,0x3a);
  count = XMLString::stringLen(rawName);
  if (count == iVar5 + 1U) {
    puVar7 = &XMLUni::fgZeroLenString;
  }
  else {
    if (iVar5 == -1) {
      XMLBuffer::set(&this->fBuffer,rawName,count);
    }
    else {
      XMLBuffer::set(&this->fBuffer,rawName + (long)iVar5 + 1,(count - iVar5) - 1);
    }
    pXVar1 = this->fStringPool;
    pcVar2 = *(code **)(*(long *)this->fStringPool + 0x50);
    pXVar3 = this->fStringPool;
    pcVar4 = *(code **)(*(long *)this->fStringPool + 0x28);
    pXVar8 = XMLBuffer::getRawBuffer(&this->fBuffer);
    uVar6 = (*pcVar4)(pXVar3,pXVar8);
    puVar7 = (undefined8 *)(*pcVar2)(pXVar1,uVar6);
  }
  return (XMLCh *)puVar7;
}


XMLCh * __thiscall
xercesc_2_7::TraverseSchema::getElementAttValue
          (TraverseSchema *this,DOMElement *elem,XMLCh *attName,bool toTrim)

{
  XMLStringPool *pXVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined8 *chars;
  XMLCh *pXVar6;
  DOMAttr *attNode;
  XMLCh *attValue;
  XMLCh *bufValue;
  long *plVar5;
  
  iVar3 = (*(elem->super_DOMNode)._vptr_DOMNode[0x2a])(elem,attName);
  plVar5 = (long *)CONCAT44(extraout_var,iVar3);
  if (plVar5 == (long *)0x0) {
    chars = (undefined8 *)0x0;
  }
  else {
    chars = (undefined8 *)(**(code **)(*plVar5 + 0x150))(plVar5);
    if (toTrim != false) {
      XMLBuffer::set(&this->fBuffer,(XMLCh *)chars);
      pXVar6 = XMLBuffer::getRawBuffer(&this->fBuffer);
      xercesc_2_7::XMLString::trim(pXVar6);
      if ((pXVar6 == (XMLCh *)0x0) || (*pXVar6 == 0)) {
        chars = &XMLUni::fgZeroLenString;
      }
      else {
        pXVar1 = this->fStringPool;
        pcVar2 = *(code **)(*(long *)this->fStringPool + 0x50);
        uVar4 = (**(code **)(*(long *)this->fStringPool + 0x28))(this->fStringPool,pXVar6);
        chars = (undefined8 *)(*pcVar2)(pXVar1,uVar4);
      }
    }
  }
  return (XMLCh *)chars;
}


void __thiscall
xercesc_2_7::TraverseSchema::checkForEmptyTargetNamespace(TraverseSchema *this,DOMElement *elem)

{
  XMLCh *pXVar1;
  XMLCh *targetNS;
  
  pXVar1 = getElementAttValue(this,elem,(XMLCh *)&SchemaSymbols::fgATT_TARGETNAMESPACE,false);
  if ((pXVar1 != (XMLCh *)0x0) && (*pXVar1 == 0)) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgXMLErrDomain,0x9b);
  }
  return;
}


bool __thiscall
xercesc_2_7::TraverseSchema::isAttrOrAttrGroup(TraverseSchema *this,DOMElement *elem)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  XMLCh *elementName;
  XMLCh *str1;
  
  iVar2 = (*(elem->super_DOMNode)._vptr_DOMNode[0x18])(elem);
  str1 = (XMLCh *)CONCAT44(extraout_var,iVar2);
  bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTE);
  if (((bVar1 == false) &&
      (bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_ATTRIBUTEGROUP), bVar1 == false
      )) && (bVar1 = XMLString::equals(str1,(XMLCh *)&SchemaSymbols::fgELT_ANYATTRIBUTE),
            bVar1 == false)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


XMLCh * __thiscall xercesc_2_7::TraverseSchema::genAnonTypeName(TraverseSchema *this,XMLCh *prefix)

{
  uint uVar1;
  long lVar2;
  XMLStringPool *pXVar3;
  code *pcVar4;
  XMLStringPool *pXVar5;
  code *pcVar6;
  undefined4 uVar7;
  XMLCh *pXVar8;
  long in_FS_OFFSET;
  XMLCh anonCountStr [16];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = this->fAnonXSTypeCount;
  this->fAnonXSTypeCount = uVar1 + 1;
  xercesc_2_7::XMLString::binToText(uVar1,anonCountStr,0xf,10,this->fMemoryManager);
  XMLBuffer::set(&this->fBuffer,prefix);
  XMLBuffer::append(&this->fBuffer,anonCountStr);
  pXVar3 = this->fStringPool;
  pcVar4 = *(code **)(*(long *)this->fStringPool + 0x50);
  pXVar5 = this->fStringPool;
  pcVar6 = *(code **)(*(long *)this->fStringPool + 0x28);
  pXVar8 = XMLBuffer::getRawBuffer(&this->fBuffer);
  uVar7 = (*pcVar6)(pXVar5,pXVar8);
  pXVar8 = (XMLCh *)(*pcVar4)(pXVar3,uVar7);
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pXVar8;
}


void __thiscall xercesc_2_7::TraverseSchema::popCurrentTypeNameStack(TraverseSchema *this)

{
  uint uVar1;
  uint stackSize;
  
  uVar1 = ValueVectorOf<unsigned_int>::size(this->fCurrentTypeNameStack);
  if (uVar1 != 0) {
    ValueVectorOf<unsigned_int>::removeElementAt(this->fCurrentTypeNameStack,uVar1 - 1);
  }
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::copyWildCardData
          (TraverseSchema *this,SchemaAttDef *srcWildCard,SchemaAttDef *destWildCard)

{
  uint uriId;
  AttTypes newValue;
  DefAttTypes newValue_00;
  QName *this_00;
  QName *this_01;
  
  this_00 = SchemaAttDef::getAttName(destWildCard);
  this_01 = SchemaAttDef::getAttName(srcWildCard);
  uriId = QName::getURI(this_01);
  QName::setURI(this_00,uriId);
  newValue = XMLAttDef::getType((XMLAttDef *)srcWildCard);
  XMLAttDef::setType((XMLAttDef *)destWildCard,newValue);
  newValue_00 = XMLAttDef::getDefaultType((XMLAttDef *)srcWildCard);
  XMLAttDef::setDefaultType((XMLAttDef *)destWildCard,newValue_00);
  return;
}


void __thiscall
xercesc_2_7::TraverseSchema::getRedefineNewTypeName
          (TraverseSchema *this,XMLCh *oldTypeName,int redefineCounter,XMLBuffer *newTypeName)

{
  int i;
  
  XMLBuffer::set(newTypeName,oldTypeName);
  for (i = 0; i < redefineCounter; i = i + 1) {
    XMLBuffer::append(newTypeName,(XMLCh *)&SchemaSymbols::fgRedefIdentifier);
  }
  return;
}


void __thiscall xercesc_2_7::XPathScanner::_XPathScanner(XPathScanner *this)

{
  this->_vptr_XPathScanner = (anon_subr_int_varargs **)&PTR__XPathScanner_00131060;
  return;
}


void __thiscall xercesc_2_7::XPathScanner::_XPathScanner(XPathScanner *this)

{
  void *in_RSI;
  
  _XPathScanner(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::XPathScanner::addToken(XPathScanner *this,ValueVectorOf_int_ *tokens,int aToken)

{
  int local_1c;
  ValueVectorOf_int_ *local_18;
  XPathScanner *local_10;
  
  local_1c = aToken;
  local_18 = tokens;
  local_10 = this;
  ValueVectorOf<int>::addElement(tokens,&local_1c);
  return;
}


bool __thiscall xercesc_2_7::XMLStringTokenizer::isDelimeter(XMLStringTokenizer *this,XMLCh ch)

{
  int iVar1;
  
  iVar1 = xercesc_2_7::XMLString::indexOf(this->fDelimeters,ch);
  return iVar1 != -1;
}


int __thiscall xercesc_2_7::XMLStringTokenizer::countTokens(XMLStringTokenizer *this)

{
  bool bVar1;
  bool bVar2;
  bool inToken;
  int tokCount;
  int i;
  
  if (this->fStringLen == 0) {
    tokCount = 0;
  }
  else {
    tokCount = 0;
    bVar1 = false;
    for (i = this->fOffset; i < this->fStringLen; i = i + 1) {
      bVar2 = isDelimeter(this,this->fString[i]);
      if (bVar2 == false) {
        if (!bVar1) {
          tokCount = tokCount + 1;
          bVar1 = true;
        }
      }
      else if (bVar1) {
        bVar1 = false;
      }
    }
  }
  return tokCount;
}


MemoryManager * __thiscall xercesc_2_7::XMLGrammarPool::getMemoryManager(XMLGrammarPool *this)

{
  return this->fMemMgr;
}


XMLStringPool * __thiscall xercesc_2_7::GrammarResolver::getStringPool(GrammarResolver *this)

{
  return this->fStringPool;
}


XMLGrammarPool * __thiscall xercesc_2_7::GrammarResolver::getGrammarPool(GrammarResolver *this)

{
  return this->fGrammarPool;
}


MemoryManager * __thiscall
xercesc_2_7::GrammarResolver::getGrammarPoolMemoryManager(GrammarResolver *this)

{
  MemoryManager *pMVar1;
  
  pMVar1 = XMLGrammarPool::getMemoryManager(this->fGrammarPool);
  return pMVar1;
}


void __thiscall xercesc_2_7::Locator::_Locator(Locator *this)

{
  this->_vptr_Locator = (anon_subr_int_varargs **)&DAT_00131020;
  return;
}


void __thiscall xercesc_2_7::Locator::_Locator(Locator *this)

{
  _Locator(this);
  operator_delete(this);
  return;
}


void __thiscall xercesc_2_7::DTDEntityDecl::_DTDEntityDecl(DTDEntityDecl *this)

{
  *(undefined ***)this = &PTR__DTDEntityDecl_00130fd0;
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


bool __thiscall xercesc_2_7::XMLScanner::getExitOnFirstFatal(XMLScanner *this)

{
  return (bool)this[0x13];
}


bool __thiscall xercesc_2_7::XMLScanner::getValidationSchemaFullChecking(XMLScanner *this)

{
  return (bool)this[0x1b];
}


uint __thiscall xercesc_2_7::XMLScanner::getEmptyNamespaceId(XMLScanner *this)

{
  return *(uint *)(this + 0x34);
}


bool __thiscall xercesc_2_7::XMLScanner::getStandardUriConformant(XMLScanner *this)

{
  return (bool)this[0x10];
}


bool __thiscall xercesc_2_7::XMLScanner::getGenerateSyntheticAnnotations(XMLScanner *this)

{
  return (bool)this[0x21];
}


bool __thiscall xercesc_2_7::XMLScanner::getValidateAnnotations(XMLScanner *this)

{
  return (bool)this[0x22];
}


bool __thiscall xercesc_2_7::XMLScanner::getIgnoreAnnotations(XMLScanner *this)

{
  return (bool)this[0x24];
}


bool __thiscall xercesc_2_7::XMLScanner::getDisableDefaultEntityResolution(XMLScanner *this)

{
  return (bool)this[0x25];
}


void __thiscall
xercesc_2_7::XMLScanner::setErrorReporter(XMLScanner *this,XMLErrorReporter *errHandler)

{
  *(XMLErrorReporter **)(this + 0x90) = errHandler;
  return;
}


void __thiscall
xercesc_2_7::MalformedURLException::MalformedURLException
          (MalformedURLException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__MalformedURLException_00130fa0;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}


void __thiscall
xercesc_2_7::MalformedURLException::MalformedURLException
          (MalformedURLException *this,MalformedURLException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__MalformedURLException_00130fa0;
  return;
}


void __thiscall
xercesc_2_7::MalformedURLException::_MalformedURLException(MalformedURLException *this)

{
  *(undefined ***)this = &PTR__MalformedURLException_00130fa0;
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


int __thiscall xercesc_2_7::XercesGroupInfo::getScope(XercesGroupInfo *this)

{
  return *(int *)(this + 0xc);
}


uint __thiscall xercesc_2_7::XercesGroupInfo::elementCount(XercesGroupInfo *this)

{
  uint uVar1;
  
  uVar1 = BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::size
                    (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x20));
  return uVar1;
}


ContentSpecNode * __thiscall xercesc_2_7::XercesGroupInfo::getContentSpec(XercesGroupInfo *this)

{
  return *(ContentSpecNode **)(this + 0x18);
}


SchemaElementDecl * __thiscall
xercesc_2_7::XercesGroupInfo::elementAt(XercesGroupInfo *this,uint index)

{
  SchemaElementDecl *pSVar1;
  
  pSVar1 = BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::elementAt
                     (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x20),index);
  return pSVar1;
}


void __thiscall xercesc_2_7::XercesGroupInfo::setScope(XercesGroupInfo *this,int other)

{
  *(int *)(this + 0xc) = other;
  return;
}


void __thiscall
xercesc_2_7::XercesGroupInfo::setContentSpec(XercesGroupInfo *this,ContentSpecNode *other)

{
  *(ContentSpecNode **)(this + 0x18) = other;
  return;
}


void __thiscall
xercesc_2_7::XercesGroupInfo::addElement(XercesGroupInfo *this,SchemaElementDecl *elem)

{
  bool bVar1;
  
  bVar1 = BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::containsElement
                    (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x20),elem);
  if (bVar1 != true) {
    BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::addElement
              (*(BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ **)(this + 0x20),elem);
  }
  return;
}


void __thiscall
xercesc_2_7::XercesGroupInfo::setBaseGroup(XercesGroupInfo *this,XercesGroupInfo *baseGroup)

{
  *(XercesGroupInfo **)(this + 0x28) = baseGroup;
  return;
}


void __thiscall
xercesc_2_7::XercesGroupInfo::setCheckElementConsistency(XercesGroupInfo *this,bool aValue)

{
  this[8] = (XercesGroupInfo)aValue;
  return;
}


bool __thiscall xercesc_2_7::XercesAttGroupInfo::containsTypeWithId(XercesAttGroupInfo *this)

{
  return (bool)this[8];
}


uint __thiscall xercesc_2_7::XercesAttGroupInfo::attributeCount(XercesAttGroupInfo *this)

{
  uint uVar1;
  
  if (*(long *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::size
                      (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x18));
  }
  return uVar1;
}


uint __thiscall xercesc_2_7::XercesAttGroupInfo::anyAttributeCount(XercesAttGroupInfo *this)

{
  uint uVar1;
  
  if (*(long *)(this + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::size
                      (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x20));
  }
  return uVar1;
}


SchemaAttDef * __thiscall
xercesc_2_7::XercesAttGroupInfo::attributeAt(XercesAttGroupInfo *this,uint index)

{
  SchemaAttDef *pSVar1;
  
  if (*(long *)(this + 0x18) == 0) {
    pSVar1 = (SchemaAttDef *)0x0;
  }
  else {
    pSVar1 = BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::elementAt
                       (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x18),index);
  }
  return pSVar1;
}


SchemaAttDef * __thiscall
xercesc_2_7::XercesAttGroupInfo::attributeAt(XercesAttGroupInfo *this,uint index)

{
  SchemaAttDef *pSVar1;
  
  if (*(long *)(this + 0x18) == 0) {
    pSVar1 = (SchemaAttDef *)0x0;
  }
  else {
    pSVar1 = BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::elementAt
                       (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x18),index);
  }
  return pSVar1;
}


SchemaAttDef * __thiscall
xercesc_2_7::XercesAttGroupInfo::anyAttributeAt(XercesAttGroupInfo *this,uint index)

{
  SchemaAttDef *pSVar1;
  
  if (*(long *)(this + 0x20) == 0) {
    pSVar1 = (SchemaAttDef *)0x0;
  }
  else {
    pSVar1 = BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::elementAt
                       (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x20),index);
  }
  return pSVar1;
}


SchemaAttDef * __thiscall
xercesc_2_7::XercesAttGroupInfo::anyAttributeAt(XercesAttGroupInfo *this,uint index)

{
  SchemaAttDef *pSVar1;
  
  if (*(long *)(this + 0x20) == 0) {
    pSVar1 = (SchemaAttDef *)0x0;
  }
  else {
    pSVar1 = BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::elementAt
                       (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x20),index);
  }
  return pSVar1;
}


SchemaAttDef * __thiscall
xercesc_2_7::XercesAttGroupInfo::getCompleteWildCard(XercesAttGroupInfo *this)

{
  return *(SchemaAttDef **)(this + 0x28);
}


void __thiscall xercesc_2_7::XercesAttGroupInfo::setTypeWithId(XercesAttGroupInfo *this,bool other)

{
  this[8] = (XercesAttGroupInfo)other;
  return;
}


void __thiscall
xercesc_2_7::XercesAttGroupInfo::addAttDef
          (XercesAttGroupInfo *this,SchemaAttDef *toAdd,bool toClone)

{
  RefVectorOf_xercesc_2_7__SchemaAttDef_ *this_00;
  SchemaAttDef *this_01;
  SchemaAttDef *pSVar1;
  SchemaAttDef *clonedAttDef;
  
  if (*(long *)(this + 0x18) == 0) {
    this_00 = (RefVectorOf_xercesc_2_7__SchemaAttDef_ *)
              xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)(this + 0x30));
    RefVectorOf<xercesc_2_7::SchemaAttDef>::RefVectorOf
              (this_00,4,true,*(MemoryManager **)(this + 0x30));
    *(RefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x18) = this_00;
  }
  if (toClone == false) {
    BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::addElement
              (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x18),toAdd);
  }
  else {
    this_01 = (SchemaAttDef *)
              xercesc_2_7::XMemory::operator_new(0x78,*(MemoryManager **)(this + 0x30));
    xercesc_2_7::SchemaAttDef::SchemaAttDef(this_01,toAdd);
    pSVar1 = SchemaAttDef::getBaseAttDecl(this_01);
    if (pSVar1 == (SchemaAttDef *)0x0) {
      SchemaAttDef::setBaseAttDecl(this_01,toAdd);
    }
    BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::addElement
              (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x18),this_01);
  }
  return;
}


/* (LSDA) Type Table */

void __thiscall
xercesc_2_7::XercesAttGroupInfo::addAnyAttDef
          (XercesAttGroupInfo *this,SchemaAttDef *toAdd,bool toClone)

{
  RefVectorOf_xercesc_2_7__SchemaAttDef_ *this_00;
  SchemaAttDef *this_01;
  SchemaAttDef *pSVar1;
  SchemaAttDef *clonedAttDef;
  
  if (*(long *)(this + 0x20) == 0) {
    this_00 = (RefVectorOf_xercesc_2_7__SchemaAttDef_ *)
              xercesc_2_7::XMemory::operator_new(0x28,*(MemoryManager **)(this + 0x30));
    RefVectorOf<xercesc_2_7::SchemaAttDef>::RefVectorOf
              (this_00,2,true,*(MemoryManager **)(this + 0x30));
    *(RefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x20) = this_00;
  }
  if (toClone == false) {
    BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::addElement
              (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x20),toAdd);
  }
  else {
    this_01 = (SchemaAttDef *)
              xercesc_2_7::XMemory::operator_new(0x78,*(MemoryManager **)(this + 0x30));
    xercesc_2_7::SchemaAttDef::SchemaAttDef(this_01,toAdd);
    pSVar1 = SchemaAttDef::getBaseAttDecl(this_01);
    if (pSVar1 == (SchemaAttDef *)0x0) {
      SchemaAttDef::setBaseAttDecl(this_01,toAdd);
    }
    BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::addElement
              (*(BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ **)(this + 0x20),this_01);
  }
  return;
}


void __thiscall
xercesc_2_7::XercesAttGroupInfo::setCompleteWildCard(XercesAttGroupInfo *this,SchemaAttDef *toSet)

{
  long *plVar1;
  
  if ((*(long *)(this + 0x28) != 0) && (plVar1 = *(long **)(this + 0x28), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  *(SchemaAttDef **)(this + 0x28) = toSet;
  return;
}


void __thiscall xercesc_2_7::XSDLocator::_XSDLocator(XSDLocator *this)

{
  *(undefined ***)this = &PTR__XSDLocator_00130ed0;
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


void __thiscall xercesc_2_7::PSVIItem::_PSVIItem(PSVIItem *this)

{
  this->_vptr_PSVIItem = (anon_subr_int_varargs **)&DAT_00130e98;
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
  (this->super_PSVIItem)._vptr_PSVIItem = (anon_subr_int_varargs **)&PTR__PSVIAttribute_00130e60;
  (*((this->super_PSVIItem).fMemoryManager)->_vptr_MemoryManager[3])
            ((this->super_PSVIItem).fMemoryManager,(this->super_PSVIItem).fCanonicalValue);
  PSVIItem::_PSVIItem(&this->super_PSVIItem);
  return;
}


void __thiscall xercesc_2_7::PSVIAttribute::_PSVIAttribute(PSVIAttribute *this)

{
  void *in_RSI;
  
  _PSVIAttribute(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


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
xercesc_2_7::PSVIHandler::handlePartialElementPSVI
          (PSVIHandler *this,XMLCh *param_1,XMLCh *param_2,PSVIElement *param_3)

{
  return;
}


bool __thiscall xercesc_2_7::XSDDOMParser::getSawFatal(XSDDOMParser *this)

{
  return (bool)this[0xe0];
}


XMLSSize_t __thiscall xercesc_2_7::XSDElementNSImpl::getLineNo(XSDElementNSImpl *this)

{
  return *(XMLSSize_t *)(this + 0x80);
}


XMLSSize_t __thiscall xercesc_2_7::XSDElementNSImpl::getColumnNo(XSDElementNSImpl *this)

{
  return *(XMLSSize_t *)(this + 0x88);
}


XMLCh * __thiscall xercesc_2_7::XSAnnotation::getAnnotationString(XSAnnotation *this)

{
  return *(XMLCh **)(this + 0x30);
}


void __thiscall xercesc_2_7::XSAnnotation::setLineCol(XSAnnotation *this,int line,int col)

{
  *(int *)(this + 0x48) = line;
  *(int *)(this + 0x4c) = col;
  return;
}


void __thiscall
xercesc_2_7::MemBufInputSource::setCopyBufToStream(MemBufInputSource *this,bool newState)

{
  this[0x30] = (MemBufInputSource)newState;
  return;
}


XercesAttGroupInfo * __thiscall
xercesc_2_7::TraverseSchema::traverseAttributeGroupDeclNS
          (TraverseSchema *this,DOMElement *elem,XMLCh *uriStr,XMLCh *name)

{
  bool bVar1;
  int iVar2;
  long *this_00;
  XercesAttGroupInfo *pXVar3;
  RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this_01;
  Grammar *aGrammar;
  XercesAttGroupInfo *attGroupInfo;
  
  this_00 = (long *)xercesc_2_7::GrammarResolver::getGrammar((ushort *)this->fGrammarResolver);
  if (this_00 != (long *)0x0) {
    iVar2 = (**(code **)(*this_00 + 0x28))(this_00);
    if (iVar2 == 1) {
      bVar1 = false;
      goto code_r0x00123a94;
    }
  }
  bVar1 = true;
code_r0x00123a94:
  if (bVar1) {
    reportSchemaError(this,elem,(XMLCh *)&XMLUni::fgValidityDomain,0x48,uriStr,(XMLCh *)0x0,
                      (XMLCh *)0x0,(XMLCh *)0x0);
    pXVar3 = (XercesAttGroupInfo *)0x0;
  }
  else {
    this_01 = SchemaGrammar::getAttGroupInfoRegistry((SchemaGrammar *)this_00);
    pXVar3 = RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::get(this_01,name);
  }
  return pXVar3;
}


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::_RefArrayVectorOf
          (RefArrayVectorOf_short_unsigned_int_ *this)

{
  uint index;
  
  (this->super_BaseRefVectorOf_short_unsigned_int_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefArrayVectorOf_00131420;
  if ((this->super_BaseRefVectorOf_short_unsigned_int_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount;
        index = index + 1) {
      (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
                ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager);
    }
  }
  (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
            ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager,
             (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList);
  BaseRefVectorOf<short_unsigned_int>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_short_unsigned_int_);
  return;
}


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::_RefArrayVectorOf
          (RefArrayVectorOf_short_unsigned_int_ *this)

{
  void *in_RSI;
  
  _RefArrayVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

{
  long *plVar1;
  uint index;
  
  (this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00131390;
  if ((this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_).fCurCount;
        index = index + 1) {
      plVar1 = (long *)(this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_).fElemList
                       [index];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  (*((this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_).fMemoryManager)->
    _vptr_MemoryManager[3])
            ((this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_).fMemoryManager,
             (this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_).fElemList);
  BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

{
  void *in_RSI;
  
  _RefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


uint __thiscall xercesc_2_7::ValueVectorOf<unsigned_int>::size(ValueVectorOf_unsigned_int_ *this)

{
  return this->fCurCount;
}


void __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::removeAllElements(ValueVectorOf_unsigned_int_ *this)

{
  this->fCurCount = 0;
  return;
}


ValueVectorOf_unsigned_int_ * __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::operator_
          (ValueVectorOf_unsigned_int_ *this,ValueVectorOf_unsigned_int_ *toAssign)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  if (this != toAssign) {
    if (this->fMaxCount < toAssign->fCurCount) {
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
      iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                        (this->fMemoryManager,(ulong)toAssign->fMaxCount << 2);
      this->fElemList = (uint *)CONCAT44(extraout_var,iVar1);
      this->fMaxCount = toAssign->fMaxCount;
    }
    this->fCurCount = toAssign->fCurCount;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      this->fElemList[index] = toAssign->fElemList[index];
    }
  }
  return this;
}


void __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::ValueVectorOf
          (ValueVectorOf_unsigned_int_ *this,ValueVectorOf_unsigned_int_ *toCopy)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  this->fCallDestructor = toCopy->fCallDestructor;
  this->fCurCount = toCopy->fCurCount;
  this->fMaxCount = toCopy->fMaxCount;
  this->fElemList = (uint *)0x0;
  this->fMemoryManager = toCopy->fMemoryManager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 2);
  this->fElemList = (uint *)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 4);
  for (index = 0; index < this->fCurCount; index = index + 1) {
    this->fElemList[index] = toCopy->fElemList[index];
  }
  return;
}


uint __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::size
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

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


SchemaElementDecl * __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::elementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,uint getAt)

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
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaElementDecl>::RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_,maxElems,adoptElems,
             manager);
  (this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00131300;
  return;
}


bool __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::containsElement
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,SchemaElementDecl *toCheck)

{
  uint i;
  
  i = 0;
  while( true ) {
    if (this->fCurCount <= i) {
      return false;
    }
    if (toCheck == this->fElemList[i]) break;
    i = i + 1;
  }
  return true;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::addElement
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,SchemaElementDecl *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>::isEmpty
          (RefHash2KeysTableOf_xercesc_2_7__SchemaAttDef_ *this)

{
  return this->fCount == 0;
}


uint __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::size
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  return this->fCurCount;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IC_Field>::RefVectorOf
          (RefVectorOf_xercesc_2_7__IC_Field_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<xercesc_2_7::IC_Field>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_,maxElems,adoptElems,manager);
  (this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00131270;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::addElement
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this,IC_Field *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IdentityConstraint>::RefVectorOf
          (RefVectorOf_xercesc_2_7__IdentityConstraint_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_,maxElems,adoptElems,
             manager);
  (this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_001311e0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::addElement
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this,IdentityConstraint *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::DatatypeValidator>::containsKey
          (RefHashTableOf_xercesc_2_7__DatatypeValidator_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__DatatypeValidator_ *)0x0;
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


/* WARNING: Removing unreachable block (ram,0x00124508) */

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
    uVar3 = (ulong)((double)(ulong)this->fIdPtrsCount * DAT_0011de40);
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


void __thiscall
xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::BaseRefVectorEnumerator
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *this,
          BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *toEnum,bool adopt)

{
  XMLEnumerator<xercesc_2_7::SchemaInfo>::XMLEnumerator
            (&this->super_XMLEnumerator_xercesc_2_7__SchemaInfo_);
  XMemory::XMemory((XMemory *)this);
  (this->super_XMLEnumerator_xercesc_2_7__SchemaInfo_)._vptr_XMLEnumerator =
       (anon_subr_int_varargs **)&PTR__BaseRefVectorEnumerator_00131138;
  this->fAdopted = adopt;
  this->fCurIndex = 0;
  this->fToEnum = toEnum;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::_BaseRefVectorEnumerator
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *pBVar1;
  
  (this->super_XMLEnumerator_xercesc_2_7__SchemaInfo_)._vptr_XMLEnumerator =
       (anon_subr_int_varargs **)&PTR__BaseRefVectorEnumerator_00131138;
  if ((this->fAdopted != false) &&
     (pBVar1 = this->fToEnum, pBVar1 != (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *)0x0)) {
    (*pBVar1->_vptr_BaseRefVectorOf[1])(pBVar1);
  }
  XMLEnumerator<xercesc_2_7::SchemaInfo>::_XMLEnumerator
            (&this->super_XMLEnumerator_xercesc_2_7__SchemaInfo_);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::_BaseRefVectorEnumerator
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorEnumerator(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<int>::ValueVectorOf
          (ValueVectorOf_int_ *this,uint maxElems,MemoryManager *manager,bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (int *)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 2);
  this->fElemList = (int *)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 4);
  return;
}


bool __thiscall
xercesc_2_7::ValueVectorOf<int>::containsElement
          (ValueVectorOf_int_ *this,int *toCheck,uint startIndex)

{
  uint i;
  
  i = startIndex;
  while( true ) {
    if (this->fCurCount <= i) {
      return false;
    }
    if (this->fElemList[i] == *toCheck) break;
    i = i + 1;
  }
  return true;
}


void __thiscall xercesc_2_7::ValueVectorOf<int>::addElement(ValueVectorOf_int_ *this,int *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaInfo>::RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaInfo_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<xercesc_2_7::SchemaInfo>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_,maxElems,adoptElems,manager);
  (this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_001310a8;
  return;
}


bool __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::containsElement
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,SchemaInfo *toCheck)

{
  uint i;
  
  i = 0;
  while( true ) {
    if (this->fCurCount <= i) {
      return false;
    }
    if (toCheck == this->fElemList[i]) break;
    i = i + 1;
  }
  return true;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::addElement
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,SchemaInfo *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


uint __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::size
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  return this->fCurCount;
}


SchemaInfo * __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::elementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,uint getAt)

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


bool __thiscall
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::containsElement
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this,DOMElement **toCheck,uint startIndex)

{
  uint i;
  
  i = startIndex;
  while( true ) {
    if (this->fCurCount <= i) {
      return false;
    }
    if (this->fElemList[i] == *toCheck) break;
    i = i + 1;
  }
  return true;
}


void __thiscall
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::ValueVectorOf
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this,uint maxElems,MemoryManager *manager,
          bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (DOMElement **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 3);
  this->fElemList = (DOMElement **)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 8);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::addElement
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this,DOMElement **toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<short_unsigned_int_const*>::ValueVectorOf
          (ValueVectorOf_short_unsigned_int_const__ *this,uint maxElems,MemoryManager *manager,
          bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (ushort **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 3);
  this->fElemList = (ushort **)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 8);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<short_unsigned_int_const*>::addElement
          (ValueVectorOf_short_unsigned_int_const__ *this,ushort **toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__DOMElement__ *this)

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
xercesc_2_7::ValueVectorOf<unsigned_int>::removeElementAt
          (ValueVectorOf_unsigned_int_ *this,uint removeAt)

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


uint __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::size
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  return this->fCurCount;
}


SchemaAttDef * __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::elementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this,uint getAt)

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
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaAttDef>::RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaAttDef_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_,maxElems,adoptElems,manager);
  (this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00130f10;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::addElement
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this,SchemaAttDef *toAdd)

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


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::setElementAt
          (RefArrayVectorOf_short_unsigned_int_ *this,ushort *toSet,uint setAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  
  if ((this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount <= setAt) {
    this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_00,"./xercesc/util/RefArrayVectorOf.c",0x34,Vector_BadIndex,
               (this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  if ((this->super_BaseRefVectorOf_short_unsigned_int_).fAdoptedElems != false) {
    (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
              ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager,
               (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList[setAt]);
  }
  (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList[setAt] = toSet;
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::TraverseSchema>::JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__TraverseSchema_ *this,TraverseSchema *object,MFPT toCall)

{
  undefined8 in_RCX;
  
  this->fObject = object;
  this->fToCall = toCall;
  *(undefined8 *)&this->field_0x10 = in_RCX;
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::TraverseSchema>::_JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__TraverseSchema_ *this)

{
  code *pcVar1;
  
  if ((this->fObject != (TraverseSchema *)0x0) && (this->fToCall != 0)) {
    if ((this->fToCall & 1) == 0) {
      pcVar1 = (code *)this->fToCall;
    }
    else {
      pcVar1 = *(code **)((this->fToCall - 1) +
                         *(long *)(&this->fObject->fFullConstraintChecking +
                                  *(long *)&this->field_0x10));
    }
    (*pcVar1)(&this->fObject->fFullConstraintChecking + *(long *)&this->field_0x10);
  }
  return;
}


void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::TraverseSchema>::release
          (JanitorMemFunCall_xercesc_2_7__TraverseSchema_ *this)

{
  this->fObject = (TraverseSchema *)0x0;
  this->fToCall = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
containsKey(RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
           void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                    *)0x0;
}


ValueVectorOf_xercesc_2_7__SchemaElementDecl__ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
          void *key)

{
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *pVVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                 *)0x0) {
    pVVar1 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0;
  }
  else {
    pVVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pVVar1;
}


ValueVectorOf_unsigned_int_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::get
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this,void *key)

{
  ValueVectorOf_unsigned_int_ *pVVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0) {
    pVVar1 = (ValueVectorOf_unsigned_int_ *)0x0;
  }
  else {
    pVVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pVVar1;
}


uint __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::size
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this)

{
  return this->fCurCount;
}


SchemaElementDecl ** __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::elementAt
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this,uint getAt)

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


ValueVectorOf_xercesc_2_7__DOMElement__ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::get
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this,void *key)

{
  ValueVectorOf_xercesc_2_7__DOMElement__ *pVVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0
     ) {
    pVVar1 = (ValueVectorOf_xercesc_2_7__DOMElement__ *)0x0;
  }
  else {
    pVVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pVVar1;
}


uint __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::size
          (ValueVectorOf_xercesc_2_7__DOMElement__ *this)

{
  return this->fCurCount;
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


DOMElement ** __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::elementAt
          (ValueVectorOf_xercesc_2_7__DOMElement__ *this,uint getAt)

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


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XSAnnotation>::isEmpty
          (RefHashTableOf_xercesc_2_7__XSAnnotation_ *this)

{
  return this->fCount == 0;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this,uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this,uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this,uint modulus,MemoryManager *manager
          )

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__XMLAttDef_ *this,uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
RefHash2KeysTableOf(RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                    *this,uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList =
       (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **
       )0x0;
  this->fHashModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::put
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this,void *key1,int key2,
          SchemaInfo *valueToAdopt)

{
  SchemaInfo *this_00;
  int iVar1;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *this_01;
  void *pvVar2;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus << 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  pvVar2 = key1;
  newBucket = findBucketElem(this,key1,key2,&hashVal);
  if (newBucket == (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x20);
    this_01 = (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)
              operator_new(0x20,(void *)CONCAT44(extraout_var,iVar1));
    RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>::RefHash2KeysTableBucketElem
              (this_01,key1,key2,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_01;
    this->fCount = this->fCount + 1;
    newBucket = this_01;
  }
  else {
    if ((this->fAdoptedElems != false) && (this_00 = newBucket->fData, this_00 != (SchemaInfo *)0x0)
       ) {
      xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pvVar2);
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


uint __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::size(ValueVectorOf_xercesc_2_7__DOMNode__ *this)

{
  return this->fCurCount;
}


DOMNode ** __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::elementAt
          (ValueVectorOf_xercesc_2_7__DOMNode__ *this,uint getAt)

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


SchemaInfo * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::get
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this,void *key1,int key2)

{
  SchemaInfo *pSVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (findIt == (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
    pSVar1 = (SchemaInfo *)0x0;
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
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::put
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,void *key,SchemaInfo *valueToAdopt)

{
  SchemaInfo *this_00;
  int iVar1;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *this_01;
  void *pvVar2;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  pvVar2 = key;
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_01 = (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar1));
    RefHashTableBucketElem<xercesc_2_7::SchemaInfo>::RefHashTableBucketElem
              (this_01,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_01;
    this->fCount = this->fCount + 1;
    newBucket = this_01;
  }
  else {
    if ((this->fAdoptedElems != false) && (this_00 = newBucket->fData, this_00 != (SchemaInfo *)0x0)
       ) {
      xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pvVar2);
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


SchemaInfo * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::get
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,void *key)

{
  SchemaInfo *pSVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
    pSVar1 = (SchemaInfo *)0x0;
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
xercesc_2_7::Janitor<xercesc_2_7::XMLSchemaDescription>::Janitor
          (Janitor_xercesc_2_7__XMLSchemaDescription_ *this,XMLSchemaDescription *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XMLSchemaDescription>::_Janitor
          (Janitor_xercesc_2_7__XMLSchemaDescription_ *this)

{
  reset(this,(XMLSchemaDescription *)0x0);
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::RefHash2KeysTableOf
          (RefHash2KeysTableOf_short_unsigned_int_ *this,uint modulus,bool adoptElems,
          MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList = (RefHash2KeysTableBucketElem_short_unsigned_int_ **)0x0;
  this->fHashModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::containsKey
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::Janitor
          (Janitor_xercesc_2_7__XSAnnotation_ *this,XSAnnotation *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::_Janitor(Janitor_xercesc_2_7__XSAnnotation_ *this)

{
  reset(this,(XSAnnotation *)0x0);
  return;
}


bool __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::isDataNull
          (Janitor_xercesc_2_7__XSAnnotation_ *this)

{
  return this->fData == (XSAnnotation *)0x0;
}


XSAnnotation * __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::release(Janitor_xercesc_2_7__XSAnnotation_ *this)

{
  XSAnnotation *pXVar1;
  XSAnnotation *p;
  
  pXVar1 = this->fData;
  this->fData = (XSAnnotation *)0x0;
  return pXVar1;
}


bool __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::containsElement
          (ValueVectorOf_unsigned_int_ *this,uint *toCheck,uint startIndex)

{
  uint i;
  
  i = startIndex;
  while( true ) {
    if (this->fCurCount <= i) {
      return false;
    }
    if (this->fElemList[i] == *toCheck) break;
    i = i + 1;
  }
  return true;
}


void __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::addElement(ValueVectorOf_unsigned_int_ *this,uint *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


ComplexTypeInfo * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::get
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this,void *key)

{
  ComplexTypeInfo *pCVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0) {
    pCVar1 = (ComplexTypeInfo *)0x0;
  }
  else {
    pCVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pCVar1;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::put
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this,void *key,
          ComplexTypeInfo *valueToAdopt)

{
  long *plVar1;
  int iVar2;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0) {
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar2));
    RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>::RefHashTableBucketElem
              (this_00,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (plVar1 = (long *)newBucket->fData, plVar1 != (long *)0x0)
       ) {
      (**(code **)(*plVar1 + 8))(plVar1);
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


XercesGroupInfo * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::get
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this,void *key)

{
  XercesGroupInfo *pXVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0) {
    pXVar1 = (XercesGroupInfo *)0x0;
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


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::put
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this,void *key,
          XercesGroupInfo *valueToAdopt)

{
  long *plVar1;
  int iVar2;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0) {
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar2));
    RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>::RefHashTableBucketElem
              (this_00,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (plVar1 = (long *)newBucket->fData, plVar1 != (long *)0x0)
       ) {
      (**(code **)(*plVar1 + 8))(plVar1);
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


ushort * __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::get
          (RefHash2KeysTableOf_short_unsigned_int_ *this,void *key1,int key2)

{
  ushort *puVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (findIt == (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0) {
    puVar1 = (ushort *)0x0;
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


uint __thiscall
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::size
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this)

{
  return this->fCurCount;
}


void __thiscall
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::removeElementAt
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this,uint removeAt)

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


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::put
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this,void *key,
          XercesAttGroupInfo *valueToAdopt)

{
  long *plVar1;
  int iVar2;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0) {
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar2));
    RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>::RefHashTableBucketElem
              (this_00,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (plVar1 = (long *)newBucket->fData, plVar1 != (long *)0x0)
       ) {
      (**(code **)(*plVar1 + 8))(plVar1);
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


XercesAttGroupInfo * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::get
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this,void *key)

{
  XercesAttGroupInfo *pXVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0) {
    pXVar1 = (XercesAttGroupInfo *)0x0;
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


void __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::ValueVectorOf
          (ValueVectorOf_unsigned_int_ *this,uint maxElems,MemoryManager *manager,
          bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (uint *)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 2);
  this->fElemList = (uint *)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 4);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::_ValueVectorOf(ValueVectorOf_unsigned_int_ *this)

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
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::_BaseRefVectorOf
          (BaseRefVectorOf_short_unsigned_int_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00131468;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::_BaseRefVectorOf
          (BaseRefVectorOf_short_unsigned_int_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::reset
          (Janitor_xercesc_2_7__XSAnnotation_ *this,XSAnnotation *p)

{
  long *plVar1;
  
  if ((this->fData != (XSAnnotation *)0x0) && (plVar1 = (long *)this->fData, plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fData = p;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::put
          (RefHashTableOf_xercesc_2_7__XMLAttDef_ *this,void *key,XMLAttDef *valueToAdopt)

{
  long *plVar1;
  int iVar2;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)0x0) {
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar2));
    RefHashTableBucketElem<xercesc_2_7::XMLAttDef>::RefHashTableBucketElem
              (this_00,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (plVar1 = (long *)newBucket->fData, plVar1 != (long *)0x0)
       ) {
      (**(code **)(*plVar1 + 8))(plVar1);
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
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::containsKey
          (RefHash2KeysTableOf_short_unsigned_int_ *this,void *key1,int key2)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::put
          (RefHash2KeysTableOf_short_unsigned_int_ *this,void *key1,int key2,ushort *valueToAdopt)

{
  int iVar1;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus << 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key1,key2,&hashVal);
  if (newBucket == (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x20);
    this_00 = (RefHash2KeysTableBucketElem_short_unsigned_int_ *)
              operator_new(0x20,(void *)CONCAT44(extraout_var,iVar1));
    RefHash2KeysTableBucketElem<short_unsigned_int>::RefHash2KeysTableBucketElem
              (this_00,key1,key2,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (newBucket->fData != (ushort *)0x0)) {
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


XSAnnotation * __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::get(Janitor_xercesc_2_7__XSAnnotation_ *this)

{
  return this->fData;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__KVStringPair_ *this,uint modulus,bool adoptElems,
          MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::RefArrayVectorOf
          (RefArrayVectorOf_short_unsigned_int_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<short_unsigned_int>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_short_unsigned_int_,maxElems,adoptElems,manager);
  (this->super_BaseRefVectorOf_short_unsigned_int_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefArrayVectorOf_00131420;
  return;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::containsKey
          (RefHashTableOf_xercesc_2_7__KVStringPair_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::put
          (RefHashTableOf_xercesc_2_7__KVStringPair_ *this,void *key,KVStringPair *valueToAdopt)

{
  long *plVar1;
  int iVar2;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0) {
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar2));
    RefHashTableBucketElem<xercesc_2_7::KVStringPair>::RefHashTableBucketElem
              (this_00,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
    newBucket = this_00;
  }
  else {
    if ((this->fAdoptedElems != false) && (plVar1 = (long *)newBucket->fData, plVar1 != (long *)0x0)
       ) {
      (**(code **)(*plVar1 + 8))(plVar1);
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


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>::RefVectorOf
          (RefVectorOf_xercesc_2_7__DatatypeValidator_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_,maxElems,adoptElems,
             manager);
  (this->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00131390;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::Janitor
          (Janitor_xercesc_2_7__RefVectorOf_xercesc_2_7__DatatypeValidator___ *this,
          RefVectorOf_xercesc_2_7__DatatypeValidator_ *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::_Janitor
          (Janitor_xercesc_2_7__RefVectorOf_xercesc_2_7__DatatypeValidator___ *this)

{
  reset(this,(RefVectorOf_xercesc_2_7__DatatypeValidator_ *)0x0);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::addElement
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this,DatatypeValidator *toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::orphan
          (Janitor_xercesc_2_7__RefVectorOf_xercesc_2_7__DatatypeValidator___ *this)

{
  release(this);
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::RefHash2KeysTableOf
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this,uint modulus,bool adoptElems,
          MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList = (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **)0x0;
  this->fHashModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::containsKey
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this,void *key1,int key2)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::Janitor
          (Janitor_xercesc_2_7__IC_Key_ *this,IC_Key *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::_Janitor(Janitor_xercesc_2_7__IC_Key_ *this)

{
  reset(this,(IC_Key *)0x0);
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::put
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this,void *key1,int key2,
          IdentityConstraint *valueToAdopt)

{
  long *plVar1;
  int iVar2;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus << 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  newBucket = findBucketElem(this,key1,key2,&hashVal);
  if (newBucket == (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0) {
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x20);
    this_00 = (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)
              operator_new(0x20,(void *)CONCAT44(extraout_var,iVar2));
    RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>::RefHash2KeysTableBucketElem
              (this_00,key1,key2,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_00;
    this->fCount = this->fCount + 1;
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
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::orphan(Janitor_xercesc_2_7__IC_Key_ *this)

{
  release(this);
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::Janitor
          (Janitor_xercesc_2_7__IC_Unique_ *this,IC_Unique *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::_Janitor(Janitor_xercesc_2_7__IC_Unique_ *this)

{
  reset(this,(IC_Unique *)0x0);
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::orphan(Janitor_xercesc_2_7__IC_Unique_ *this)

{
  release(this);
  return;
}


IdentityConstraint * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::get
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this,void *key1,int key2)

{
  IdentityConstraint *pIVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (findIt == (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0) {
    pIVar1 = (IdentityConstraint *)0x0;
  }
  else {
    pIVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pIVar1;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::Janitor
          (Janitor_xercesc_2_7__IC_KeyRef_ *this,IC_KeyRef *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::_Janitor(Janitor_xercesc_2_7__IC_KeyRef_ *this)

{
  reset(this,(IC_KeyRef *)0x0);
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::orphan(Janitor_xercesc_2_7__IC_KeyRef_ *this)

{
  release(this);
  return;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::containsKey
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::containsKey
          (RefHashTableOf_xercesc_2_7__XMLAttDef_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)0x0;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::containsKey
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0;
}


DOMElement ** __thiscall
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::elementAt
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this,uint getAt)

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


ushort ** __thiscall
xercesc_2_7::ValueVectorOf<short_unsigned_int_const*>::elementAt
          (ValueVectorOf_short_unsigned_int_const__ *this,uint getAt)

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
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::removeAllElements
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this)

{
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<short_unsigned_int_const*>::removeAllElements
          (ValueVectorOf_short_unsigned_int_const__ *this)

{
  this->fCurCount = 0;
  return;
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


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::Janitor
          (Janitor_xercesc_2_7__SchemaAttDef_ *this,SchemaAttDef *toDelete)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::_Janitor(Janitor_xercesc_2_7__SchemaAttDef_ *this)

{
  reset(this,(SchemaAttDef *)0x0);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::ValueVectorOf
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this,uint maxElems,
          MemoryManager *manager,bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (XercesAttGroupInfo **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 3);
  this->fElemList = (XercesAttGroupInfo **)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 8);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this)

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


bool __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::containsElement
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this,XercesAttGroupInfo **toCheck,
          uint startIndex)

{
  uint i;
  
  i = startIndex;
  while( true ) {
    if (this->fCurCount <= i) {
      return false;
    }
    if (this->fElemList[i] == *toCheck) break;
    i = i + 1;
  }
  return true;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::addElement
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this,XercesAttGroupInfo **toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::reset
          (Janitor_xercesc_2_7__SchemaAttDef_ *this,SchemaAttDef *p)

{
  long *plVar1;
  
  if ((this->fData != (SchemaAttDef *)0x0) && (plVar1 = (long *)this->fData, plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fData = p;
  return;
}


uint __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::size
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this)

{
  return this->fCurCount;
}


XercesAttGroupInfo ** __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::elementAt
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this,uint getAt)

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
xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::orphan(Janitor_xercesc_2_7__SchemaAttDef_ *this)

{
  release(this);
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::ArrayJanitor
          (ArrayJanitor_short_unsigned_int_ *this,ushort *toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<short_unsigned_int>::_ArrayJanitor(ArrayJanitor_short_unsigned_int_ *this)

{
  reset(this,(ushort *)0x0);
  return;
}


ValueVectorOf_xercesc_2_7__SchemaElementDecl__ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::get
          (RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
          void *key1,int key2)

{
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *pVVar1;
  long in_FS_OFFSET;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key1,key2,&hashVal);
  if (findIt == (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                 *)0x0) {
    pVVar1 = (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0;
  }
  else {
    pVVar1 = findIt->fData;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pVVar1;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this,
          ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *toCopy)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  this->fCallDestructor = toCopy->fCallDestructor;
  this->fCurCount = toCopy->fCurCount;
  this->fMaxCount = toCopy->fMaxCount;
  this->fElemList = (SchemaElementDecl **)0x0;
  this->fMemoryManager = toCopy->fMemoryManager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 3);
  this->fElemList = (SchemaElementDecl **)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 8);
  for (index = 0; index < this->fCurCount; index = index + 1) {
    this->fElemList[index] = toCopy->fElemList[index];
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::put
          (RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
          void *key1,int key2,ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *valueToAdopt)

{
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this_00;
  int iVar1;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this_01
  ;
  void *pvVar2;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus << 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  pvVar2 = key1;
  newBucket = findBucketElem(this,key1,key2,&hashVal);
  if (newBucket ==
      (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)
      0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x20);
    this_01 = (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
               *)operator_new(0x20,(void *)CONCAT44(extraout_var,iVar1));
    RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
    RefHash2KeysTableBucketElem(this_01,key1,key2,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_01;
    this->fCount = this->fCount + 1;
    newBucket = this_01;
  }
  else {
    if ((this->fAdoptedElems != false) &&
       (this_00 = newBucket->fData, this_00 != (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0
       )) {
      ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::_ValueVectorOf(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pvVar2);
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


bool __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::containsElement
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this,SchemaElementDecl **toCheck,
          uint startIndex)

{
  uint i;
  
  i = startIndex;
  while( true ) {
    if (this->fCurCount <= i) {
      return false;
    }
    if (this->fElemList[i] == *toCheck) break;
    i = i + 1;
  }
  return true;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::addElement
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this,SchemaElementDecl **toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


bool __thiscall
xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::hasMoreElements
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->fCurIndex;
  uVar2 = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::size(this->fToEnum);
  return uVar1 < uVar2;
}


SchemaInfo * __thiscall
xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::nextElement
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  uint getAt;
  SchemaInfo *pSVar1;
  
  getAt = this->fCurIndex;
  this->fCurIndex = getAt + 1;
  pSVar1 = BaseRefVectorOf<xercesc_2_7::SchemaInfo>::elementAt(this->fToEnum,getAt);
  return pSVar1;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::containsKey
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::ValueVectorOf
          (ValueVectorOf_xercesc_2_7__DOMNode__ *this,uint maxElems,MemoryManager *manager,
          bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (DOMNode **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 3);
  this->fElemList = (DOMNode **)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 8);
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::RefHash2KeysTableOf
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this,uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList = (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0;
  this->fHashModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,uint modulus,bool adoptElems,
          HashBase *hashBase,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this->fHash = hashBase;
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this)

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
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__DOMNode__ *this)

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
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_short_unsigned_int_ *this)

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
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this)

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
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::_ValueVectorOf
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this)

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
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
_RefHashTableOf(RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this)

{
  EVP_PKEY_CTX *in_RSI;
  
  cleanup(this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this)

{
  EVP_PKEY_CTX *in_RSI;
  
  cleanup(this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this)

{
  EVP_PKEY_CTX *in_RSI;
  
  cleanup(this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  EVP_PKEY_CTX *in_RSI;
  
  cleanup(this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::ValueVectorOf
          (ValueVectorOf_xercesc_2_7__DOMElement__ *this,uint maxElems,MemoryManager *manager,
          bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (DOMElement **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 3);
  this->fElemList = (DOMElement **)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 8);
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::addElement
          (ValueVectorOf_xercesc_2_7__DOMElement__ *this,DOMElement **toAdd)

{
  ensureExtraCapacity(this,1);
  this->fElemList[this->fCurCount] = *toAdd;
  this->fCurCount = this->fCurCount + 1;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
RefHashTableOf(RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
              uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this,uint modulus,
          MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = true;
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::RefHashTableOf
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this,uint modulus,
          bool adoptElems,HashBase *hashBase,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fAdoptedElems = adoptElems;
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)0x0;
  this->fHashModulus = modulus;
  this->fInitialModulus = modulus;
  this->fCount = 0;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this->fHash = hashBase;
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this,uint maxElems,MemoryManager *manager
          ,bool toCallDestructor)

{
  int iVar1;
  undefined4 extraout_var;
  
  XMemory::XMemory((XMemory *)this);
  this->fCallDestructor = toCallDestructor;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (SchemaElementDecl **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fMaxCount << 3);
  this->fElemList = (SchemaElementDecl **)CONCAT44(extraout_var,iVar1);
  memset(this->fElemList,0,(ulong)this->fMaxCount * 8);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::put
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
          void *key,ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *valueToAdopt)

{
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this_00;
  int iVar1;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this_01;
  void *pvVar2;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  pvVar2 = key;
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket ==
      (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_01 = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
               *)operator_new(0x18,(void *)CONCAT44(extraout_var,iVar1));
    RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
    RefHashTableBucketElem(this_01,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_01;
    this->fCount = this->fCount + 1;
    newBucket = this_01;
  }
  else {
    if ((this->fAdoptedElems != false) &&
       (this_00 = newBucket->fData, this_00 != (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0
       )) {
      ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::_ValueVectorOf(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pvVar2);
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


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::put
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this,void *key,
          ValueVectorOf_unsigned_int_ *valueToAdopt)

{
  ValueVectorOf_unsigned_int_ *this_00;
  int iVar1;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *this_01;
  void *pvVar2;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  pvVar2 = key;
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_01 = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar1));
    RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>::RefHashTableBucketElem
              (this_01,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_01;
    this->fCount = this->fCount + 1;
    newBucket = this_01;
  }
  else {
    if ((this->fAdoptedElems != false) &&
       (this_00 = newBucket->fData, this_00 != (ValueVectorOf_unsigned_int_ *)0x0)) {
      ValueVectorOf<unsigned_int>::_ValueVectorOf(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pvVar2);
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


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::put
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this,void *key,
          ValueVectorOf_xercesc_2_7__DOMElement__ *valueToAdopt)

{
  ValueVectorOf_xercesc_2_7__DOMElement__ *this_00;
  int iVar1;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this_01;
  void *pvVar2;
  long in_FS_OFFSET;
  uint hashVal;
  uint threshold;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  threshold = this->fHashModulus * 3 >> 2;
  if (threshold <= this->fCount) {
    rehash(this);
  }
  pvVar2 = key;
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket ==
      (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_01 = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar1));
    RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::
    RefHashTableBucketElem(this_01,key,valueToAdopt,this->fBucketList[hashVal]);
    this->fBucketList[hashVal] = this_01;
    this->fCount = this->fCount + 1;
    newBucket = this_01;
  }
  else {
    if ((this->fAdoptedElems != false) &&
       (this_00 = newBucket->fData, this_00 != (ValueVectorOf_xercesc_2_7__DOMElement__ *)0x0)) {
      ValueVectorOf<xercesc_2_7::DOMElement*>::_ValueVectorOf(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pvVar2);
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


void __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::ValueHashTableOf
          (ValueHashTableOf_unsigned_int_ *this,uint modulus,MemoryManager *manager)

{
  HashBase *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fBucketList = (ValueHashTableBucketElem_unsigned_int_ **)0x0;
  this->fHashModulus = modulus;
  this->fHash = (HashBase *)0x0;
  initialize(this,modulus);
  this_00 = (HashBase *)xercesc_2_7::XMemory::operator_new(8,this->fMemoryManager);
  xercesc_2_7::HashXMLCh::HashXMLCh((HashXMLCh *)this_00);
  this->fHash = this_00;
  return;
}


bool __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::containsKey
          (ValueHashTableOf_unsigned_int_ *this,void *key)

{
  long in_FS_OFFSET;
  uint hashVal;
  ValueHashTableBucketElem_unsigned_int_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return findIt != (ValueHashTableBucketElem_unsigned_int_ *)0x0;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::put
          (ValueHashTableOf_unsigned_int_ *this,void *key,uint *valueToAdopt)

{
  int iVar1;
  undefined4 extraout_var;
  ValueHashTableBucketElem_unsigned_int_ *this_00;
  long in_FS_OFFSET;
  uint hashVal;
  ValueHashTableBucketElem_unsigned_int_ *newBucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  newBucket = findBucketElem(this,key,&hashVal);
  if (newBucket == (ValueHashTableBucketElem_unsigned_int_ *)0x0) {
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x18);
    this_00 = (ValueHashTableBucketElem_unsigned_int_ *)
              operator_new(0x18,(void *)CONCAT44(extraout_var,iVar1));
    ValueHashTableBucketElem<unsigned_int>::ValueHashTableBucketElem
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
xercesc_2_7::ValueHashTableOf<unsigned_int>::_ValueHashTableOf(ValueHashTableOf_unsigned_int_ *this)

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
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::RefHashTableOfEnumerator
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this,
          RefHashTableOf_xercesc_2_7__XSAnnotation_ *toEnum,bool adopt,MemoryManager *manager)

{
  NullPointerException *this_00;
  
  XMLEnumerator<xercesc_2_7::XSAnnotation>::XMLEnumerator
            (&this->super_XMLEnumerator_xercesc_2_7__XSAnnotation_);
  XMemory::XMemory((XMemory *)this);
  (this->super_XMLEnumerator_xercesc_2_7__XSAnnotation_)._vptr_XMLEnumerator =
       (anon_subr_int_varargs **)&PTR__RefHashTableOfEnumerator_00130db8;
  this->fAdopted = adopt;
  this->fCurElem = (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0;
  this->fCurHash = 0xffffffff;
  this->fToEnum = toEnum;
  this->fMemoryManager = manager;
  if (toEnum == (RefHashTableOf_xercesc_2_7__XSAnnotation_ *)0x0) {
    this_00 = (NullPointerException *)__cxa_allocate_exception(0x30);
    NullPointerException::NullPointerException
              (this_00,"./xercesc/util/RefHashTableOf.c",0x20f,CPtr_PointerIsZero,
               this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&NullPointerException::typeinfo,NullPointerException::_NullPointerException)
    ;
  }
  findNext(this);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::_RefHashTableOfEnumerator
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  RefHashTableOf_xercesc_2_7__XSAnnotation_ *this_00;
  void *in_RSI;
  
  (this->super_XMLEnumerator_xercesc_2_7__XSAnnotation_)._vptr_XMLEnumerator =
       (anon_subr_int_varargs **)&PTR__RefHashTableOfEnumerator_00130db8;
  if ((this->fAdopted != false) &&
     (this_00 = this->fToEnum, this_00 != (RefHashTableOf_xercesc_2_7__XSAnnotation_ *)0x0)) {
    RefHashTableOf<xercesc_2_7::XSAnnotation>::_RefHashTableOf(this_00);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
  }
  XMLEnumerator<xercesc_2_7::XSAnnotation>::_XMLEnumerator
            (&this->super_XMLEnumerator_xercesc_2_7__XSAnnotation_);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::_RefHashTableOfEnumerator
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  void *in_RSI;
  
  _RefHashTableOfEnumerator(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


XSAnnotation * __thiscall
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::nextElement
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *pRVar1;
  int iVar2;
  NoSuchElementException *this_00;
  RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *saveElem;
  
  iVar2 = (*(this->super_XMLEnumerator_xercesc_2_7__XSAnnotation_)._vptr_XMLEnumerator[2])(this);
  if ((char)iVar2 != '\x01') {
    this_00 = (NoSuchElementException *)__cxa_allocate_exception(0x30);
    NoSuchElementException::NoSuchElementException
              (this_00,"./xercesc/util/RefHashTableOf.c",0x23f,Enum_NoMoreElements,
               this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&NoSuchElementException::typeinfo,
                NoSuchElementException::_NoSuchElementException);
  }
  pRVar1 = this->fCurElem;
  findNext(this);
  return pRVar1->fData;
}


bool __thiscall
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::hasMoreElements
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  bool bVar1;
  
  if ((this->fCurElem == (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0) &&
     (this->fCurHash == this->fToEnum->fHashModulus)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_001313d8;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00131348;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (SchemaElementDecl **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (SchemaElementDecl **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (SchemaElementDecl *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00131348;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  SchemaElementDecl **newList;
  SchemaElementDecl **ppSVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppSVar2 = (SchemaElementDecl **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppSVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppSVar2[index] = (SchemaElementDecl *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppSVar2;
    this->fMaxCount = newMax;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_001312b8;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (IC_Field **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (IC_Field **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (IC_Field *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_001312b8;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  IC_Field **newList;
  IC_Field **ppIVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppIVar2 = (IC_Field **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppIVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppIVar2[index] = (IC_Field *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppIVar2;
    this->fMaxCount = newMax;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00131228;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (IdentityConstraint **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (IdentityConstraint **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (IdentityConstraint *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00131228;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  IdentityConstraint **newList;
  IdentityConstraint **ppIVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppIVar2 = (IdentityConstraint **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppIVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppIVar2[index] = (IdentityConstraint *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppIVar2;
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


void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::SchemaInfo>::XMLEnumerator
          (XMLEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  this->_vptr_XMLEnumerator = (anon_subr_int_varargs **)&DAT_00131170;
  return;
}


void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::SchemaInfo>::_XMLEnumerator
          (XMLEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  this->_vptr_XMLEnumerator = (anon_subr_int_varargs **)&DAT_00131170;
  return;
}


void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::SchemaInfo>::_XMLEnumerator
          (XMLEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  _XMLEnumerator(this);
  operator_delete(this);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_001310f0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0012a0f7) */

void __thiscall
xercesc_2_7::ValueVectorOf<int>::ensureExtraCapacity(ValueVectorOf_int_ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  int *newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0011de48);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 2)
    ;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((int *)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (int *)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_001310f0;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (SchemaInfo **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (SchemaInfo **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (SchemaInfo *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  SchemaInfo **newList;
  SchemaInfo **ppSVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppSVar2 = (SchemaInfo **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppSVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppSVar2[index] = (SchemaInfo *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppSVar2;
    this->fMaxCount = newMax;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0012a433) */

void __thiscall
xercesc_2_7::ValueVectorOf<const_xercesc_2_7::DOMElement*>::ensureExtraCapacity
          (ValueVectorOf_const_xercesc_2_7__DOMElement__ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  DOMElement **newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0011de48);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((DOMElement **)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (DOMElement **)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0012a567) */

void __thiscall
xercesc_2_7::ValueVectorOf<short_unsigned_int_const*>::ensureExtraCapacity
          (ValueVectorOf_short_unsigned_int_const__ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  ushort **newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0011de48);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((ushort **)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (ushort **)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
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


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00130f58;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (SchemaAttDef **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (SchemaAttDef **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (SchemaAttDef *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00130f58;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  void *in_RSI;
  
  _BaseRefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  SchemaAttDef **newList;
  SchemaAttDef **ppSVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppSVar2 = (SchemaAttDef **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppSVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppSVar2[index] = (SchemaAttDef *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppSVar2;
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


RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
findBucketElem(RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
              void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem ==
        (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0)
    {
      return (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *
             )0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
findBucketElem(RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
              void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem ==
        (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0)
    {
      return (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *
             )0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::findBucketElem
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::findBucketElem
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this,void *key,
          uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem ==
        (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::initialize
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::initialize
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::initialize
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::initialize
          (RefHashTableOf_xercesc_2_7__XMLAttDef_ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
initialize(RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
          uint modulus)

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
  this->fBucketList =
       (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **
       )CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] =
         (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
          *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::rehash
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  long lVar1;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *curElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **newBucketList;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *nextElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *newHeadElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo___ guard;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 8 + 1;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey1,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::
            release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::_ArrayJanitor
            (&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::findBucketElem
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this,void *key1,int key2,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
      return (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
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
xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>::RefHash2KeysTableBucketElem
          (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *this,void *key1,int key2,
          SchemaInfo *value,RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey1 = key1;
  this->fKey2 = key2;
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


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::rehash
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__SchemaInfo___ guard;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::release
                      (&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::_ArrayJanitor(&guard)
  ;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>::RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *this,void *key,SchemaInfo *value,
          RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XMLSchemaDescription>::reset
          (Janitor_xercesc_2_7__XMLSchemaDescription_ *this,XMLSchemaDescription *p)

{
  long *plVar1;
  
  if ((this->fData != (XMLSchemaDescription *)0x0) &&
     (plVar1 = (long *)this->fData, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fData = p;
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::initialize
          (RefHash2KeysTableOf_short_unsigned_int_ *this,uint modulus)

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
  this->fBucketList =
       (RefHash2KeysTableBucketElem_short_unsigned_int_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0;
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


/* WARNING: Removing unreachable block (ram,0x0012badb) */

void __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::ensureExtraCapacity
          (ValueVectorOf_unsigned_int_ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  uint *newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0011de48);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 2)
    ;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((uint *)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (uint *)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::rehash
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo___ guard;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::
            release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::_ArrayJanitor
            (&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>::RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *this,void *key,
          ComplexTypeInfo *value,RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::rehash
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo___ guard;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::
            release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::_ArrayJanitor
            (&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>::RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *this,void *key,
          XercesGroupInfo *value,RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


RefHash2KeysTableBucketElem_short_unsigned_int_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::findBucketElem
          (RefHash2KeysTableOf_short_unsigned_int_ *this,void *key1,int key2,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0) {
      return (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0;
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
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::rehash
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo___ guard;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **)CONCAT44(extraout_var,iVar4)
  ;
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::
            release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::_ArrayJanitor
            (&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>::RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *this,void *key,
          XercesAttGroupInfo *value,RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::rehash
          (RefHashTableOf_xercesc_2_7__XMLAttDef_ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XMLAttDef___ guard;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::release
                      (&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::_ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>::RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *this,void *key,XMLAttDef *value,
          RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


RefHash2KeysTableBucketElem_short_unsigned_int_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::findBucketElem
          (RefHash2KeysTableOf_short_unsigned_int_ *this,void *key1,int key2,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0) {
      return (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0;
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
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::rehash
          (RefHash2KeysTableOf_short_unsigned_int_ *this)

{
  long lVar1;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_short_unsigned_int_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *curElem;
  RefHash2KeysTableBucketElem_short_unsigned_int_ **newBucketList;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *nextElem;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *newHeadElem;
  RefHash2KeysTableBucketElem_short_unsigned_int_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_short_unsigned_int___ guard;
  RefHash2KeysTableBucketElem_short_unsigned_int_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 8 + 1;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHash2KeysTableBucketElem_short_unsigned_int_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey1,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>*>::release
                      (&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>*>::_ArrayJanitor(&guard)
  ;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>::RefHash2KeysTableBucketElem
          (RefHash2KeysTableBucketElem_short_unsigned_int_ *this,void *key1,int key2,ushort *value,
          RefHash2KeysTableBucketElem_short_unsigned_int_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey1 = key1;
  this->fKey2 = key2;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::initialize
          (RefHashTableOf_xercesc_2_7__KVStringPair_ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::BaseRefVectorOf
          (BaseRefVectorOf_short_unsigned_int_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_00131468;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (ushort **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (ushort **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (ushort *)0x0;
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__KVStringPair_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::findBucketElem
          (RefHashTableOf_xercesc_2_7__KVStringPair_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::rehash
          (RefHashTableOf_xercesc_2_7__KVStringPair_ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__KVStringPair___ guard;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::ArrayJanitor
            (&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::release
                      (&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::_ArrayJanitor
            (&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__KVStringPair_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::findBucketElem
          (RefHashTableOf_xercesc_2_7__KVStringPair_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>::RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *this,void *key,KVStringPair *value,
          RefHashTableBucketElem_xercesc_2_7__KVStringPair_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this,uint maxElems,bool adoptElems,
          MemoryManager *manager)

{
  int iVar1;
  undefined4 extraout_var;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_BaseRefVectorOf = (anon_subr_int_varargs **)&PTR__BaseRefVectorOf_001313d8;
  this->fAdoptedElems = adoptElems;
  this->fCurCount = 0;
  this->fMaxCount = maxElems;
  this->fElemList = (DatatypeValidator **)0x0;
  this->fMemoryManager = manager;
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)maxElems << 3)
  ;
  this->fElemList = (DatatypeValidator **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < maxElems; index = index + 1) {
    this->fElemList[index] = (DatatypeValidator *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::reset
          (Janitor_xercesc_2_7__RefVectorOf_xercesc_2_7__DatatypeValidator___ *this,
          RefVectorOf_xercesc_2_7__DatatypeValidator_ *p)

{
  RefVectorOf_xercesc_2_7__DatatypeValidator_ *pRVar1;
  
  if ((this->fData != (RefVectorOf_xercesc_2_7__DatatypeValidator_ *)0x0) &&
     (pRVar1 = this->fData, pRVar1 != (RefVectorOf_xercesc_2_7__DatatypeValidator_ *)0x0)) {
    (*(pRVar1->super_BaseRefVectorOf_xercesc_2_7__DatatypeValidator_)._vptr_BaseRefVectorOf[1])
              (pRVar1);
  }
  this->fData = p;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::ensureExtraCapacity
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this,uint length)

{
  int iVar1;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  DatatypeValidator **newList;
  DatatypeValidator **ppDVar2;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    if (newMax < (this->fMaxCount >> 1) + this->fMaxCount) {
      newMax = (this->fMaxCount >> 1) + this->fMaxCount;
    }
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    ppDVar2 = (DatatypeValidator **)CONCAT44(extraout_var,iVar1);
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ppDVar2[index] = this->fElemList[index];
    }
    for (; index < newMax; index = index + 1) {
      ppDVar2[index] = (DatatypeValidator *)0x0;
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = ppDVar2;
    this->fMaxCount = newMax;
  }
  return;
}


RefVectorOf_xercesc_2_7__DatatypeValidator_ * __thiscall
xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>_>::release
          (Janitor_xercesc_2_7__RefVectorOf_xercesc_2_7__DatatypeValidator___ *this)

{
  RefVectorOf_xercesc_2_7__DatatypeValidator_ *pRVar1;
  RefVectorOf_xercesc_2_7__DatatypeValidator_ *p;
  
  pRVar1 = this->fData;
  this->fData = (RefVectorOf_xercesc_2_7__DatatypeValidator_ *)0x0;
  return pRVar1;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::initialize
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this,uint modulus)

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
  this->fBucketList =
       (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **)CONCAT44(extraout_var,iVar1)
  ;
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0;
  }
  return;
}


RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::findBucketElem
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this,void *key1,int key2,
          uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0) {
      return (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0;
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
xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::reset(Janitor_xercesc_2_7__IC_Key_ *this,IC_Key *p)

{
  long *plVar1;
  
  if ((this->fData != (IC_Key *)0x0) && (plVar1 = (long *)this->fData, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fData = p;
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::rehash
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this)

{
  long lVar1;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *curElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **newBucketList;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *nextElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *newHeadElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint___ guard;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 8 + 1;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **)
            CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::
  ArrayJanitor(&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey1,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>
            ::release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::
  _ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ * __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::findBucketElem
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this,void *key1,int key2,
          uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *curElem;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0) {
      return (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0;
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
xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>::
RefHash2KeysTableBucketElem
          (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *this,void *key1,int key2,
          IdentityConstraint *value,
          RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey1 = key1;
  this->fKey2 = key2;
  return;
}


IC_Key * __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::release(Janitor_xercesc_2_7__IC_Key_ *this)

{
  IC_Key *pIVar1;
  IC_Key *p;
  
  pIVar1 = this->fData;
  this->fData = (IC_Key *)0x0;
  return pIVar1;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::reset
          (Janitor_xercesc_2_7__IC_Unique_ *this,IC_Unique *p)

{
  long *plVar1;
  
  if ((this->fData != (IC_Unique *)0x0) && (plVar1 = (long *)this->fData, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fData = p;
  return;
}


IC_Unique * __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::release(Janitor_xercesc_2_7__IC_Unique_ *this)

{
  IC_Unique *pIVar1;
  IC_Unique *p;
  
  pIVar1 = this->fData;
  this->fData = (IC_Unique *)0x0;
  return pIVar1;
}


void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::reset
          (Janitor_xercesc_2_7__IC_KeyRef_ *this,IC_KeyRef *p)

{
  long *plVar1;
  
  if ((this->fData != (IC_KeyRef *)0x0) && (plVar1 = (long *)this->fData, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  this->fData = p;
  return;
}


IC_KeyRef * __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::release(Janitor_xercesc_2_7__IC_KeyRef_ *this)

{
  IC_KeyRef *pIVar1;
  IC_KeyRef *p;
  
  pIVar1 = this->fData;
  this->fData = (IC_KeyRef *)0x0;
  return pIVar1;
}


RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__XercesAttGroupInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
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


RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__XercesGroupInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


/* WARNING: Removing unreachable block (ram,0x0012dc29) */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::ensureExtraCapacity
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  XercesAttGroupInfo **newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0011de48);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((XercesAttGroupInfo **)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (XercesAttGroupInfo **)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
  return;
}


SchemaAttDef * __thiscall
xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::release(Janitor_xercesc_2_7__SchemaAttDef_ *this)

{
  SchemaAttDef *pSVar1;
  SchemaAttDef *p;
  
  pSVar1 = this->fData;
  this->fData = (SchemaAttDef *)0x0;
  return pSVar1;
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


RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *
__thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
findBucketElem(RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
               *this,void *key1,int key2,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *curElem
  ;
  
  uVar2 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key1,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem ==
        (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *
        )0x0) {
      return (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
              *)0x0;
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
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
rehash(RefHash2KeysTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this)

{
  long lVar1;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *curElem
  ;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  **newBucketList;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  *nextElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  *newHeadElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
  guard;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 8 + 1;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
             **)CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
  ::ArrayJanitor(&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem !=
           (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
            *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey1,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
            ::release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
  ::_ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this)

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
xercesc_2_7::
RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
RefHash2KeysTableBucketElem
          (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
           *this,void *key1,int key2,ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *value,
          RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
          *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey1 = key1;
  this->fKey2 = key2;
  return;
}


/* WARNING: Removing unreachable block (ram,0x0012e193) */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ensureExtraCapacity
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  SchemaElementDecl **newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0011de48);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((SchemaElementDecl **)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (SchemaElementDecl **)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
  return;
}


RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ * __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::findBucketElem
          (RefHashTableOf_xercesc_2_7__ComplexTypeInfo_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0) {
      return (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::initialize
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this,uint modulus)

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
  this->fBucketList =
       (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::initialize
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::removeAll
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *pRVar1;
  SchemaInfo *this_00;
  bool bVar2;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *in_RSI;
  uint buckInd;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *curElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) &&
           (this_00 = curElem->fData, this_00 != (SchemaInfo *)0x0)) {
          xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
          xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
        in_RSI = curElem;
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] = (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::removeAll
          (RefHash2KeysTableOf_short_unsigned_int_ *this)

{
  RefHash2KeysTableBucketElem_short_unsigned_int_ *pRVar1;
  bool bVar2;
  uint buckInd;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *curElem;
  RefHash2KeysTableBucketElem_short_unsigned_int_ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) && (curElem->fData != (ushort *)0x0)) {
          operator_delete(curElem->fData);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] = (RefHash2KeysTableBucketElem_short_unsigned_int_ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::removeAll
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this)

{
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *pRVar1;
  long *plVar2;
  bool bVar3;
  uint buckInd;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *curElem;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *nextElem;
  
  bVar3 = isEmpty(this);
  if (bVar3 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) &&
           (plVar2 = (long *)curElem->fData, plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] =
           (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::cleanup
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
          EVP_PKEY_CTX *ctx)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)0x0;
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::cleanup
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this,EVP_PKEY_CTX *ctx)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)0x0;
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::cleanup
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this,
          EVP_PKEY_CTX *ctx)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)0x0;
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::cleanup
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this,EVP_PKEY_CTX *ctx)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0;
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0012ea0d) */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::ensureExtraCapacity
          (ValueVectorOf_xercesc_2_7__DOMElement__ *this,uint length)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  uint newMax;
  uint index;
  uint minNewMax;
  DOMElement **newList;
  
  newMax = length + this->fCurCount;
  if (this->fMaxCount < newMax) {
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * DAT_0011de48);
    if (newMax < uVar1) {
      newMax = uVar1;
    }
    iVar2 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)newMax << 3)
    ;
    for (index = 0; index < this->fCurCount; index = index + 1) {
      ((DOMElement **)CONCAT44(extraout_var,iVar2))[index] = this->fElemList[index];
    }
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
    this->fElemList = (DOMElement **)CONCAT44(extraout_var,iVar2);
    this->fMaxCount = newMax;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
initialize(RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this,
          uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)
       CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] =
         (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)0x0
    ;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::initialize
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)
       CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] =
         (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::initialize
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this,uint modulus)

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
  this->fBucketList =
       (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)
       CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] =
         (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::rehash
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *curElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
  guard;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **
            )CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
  ::ArrayJanitor(&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem !=
           (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)
           0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
            ::release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
  ::_ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::
RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
           *this,void *key,ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *value,
          RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *next
          )

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::rehash
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *curElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int_____
  guard;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)
            CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>*>::
  ArrayJanitor(&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem != (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>*>
            ::release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>*>::
  _ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>::
RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *this,void *key,
          ValueVectorOf_unsigned_int_ *value,
          RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::rehash
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this)

{
  long lVar1;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *pRVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_var;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **ppRVar7;
  long in_FS_OFFSET;
  uint index;
  uint newMod;
  uint hashVal;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *curElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **newBucketList;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *nextElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *newHeadElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **oldBucketList;
  ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement______
  guard;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **ppRVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = this->fHashModulus * 2;
  iVar4 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,(ulong)uVar3 << 3);
  ppRVar6 = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)
            CONCAT44(extraout_var,iVar4);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>*>
  ::ArrayJanitor(&guard,ppRVar6,this->fMemoryManager);
  memset(ppRVar6,0,(ulong)uVar3 * 8);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    curElem = this->fBucketList[index];
    while (curElem !=
           (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0) {
      pRVar2 = curElem->fNext;
      uVar5 = (**this->fHash->_vptr_HashBase)
                        (this->fHash,curElem->fKey,(ulong)uVar3,this->fMemoryManager);
      curElem->fNext = ppRVar6[uVar5];
      ppRVar6[uVar5] = curElem;
      curElem = pRVar2;
    }
  }
  ppRVar6 = this->fBucketList;
  ppRVar7 = ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>*>
            ::release(&guard);
  this->fBucketList = ppRVar7;
  this->fHashModulus = uVar3;
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,ppRVar6);
  ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>*>
  ::_ArrayJanitor(&guard);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::
RefHashTableBucketElem
          (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this,
          void *key,ValueVectorOf_xercesc_2_7__DOMElement__ *value,
          RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *next)

{
  this->fData = value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::initialize
          (ValueHashTableOf_unsigned_int_ *this,uint modulus)

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
  this->fBucketList = (ValueHashTableBucketElem_unsigned_int_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (ValueHashTableBucketElem_unsigned_int_ *)0x0;
  }
  return;
}


ValueHashTableBucketElem_unsigned_int_ * __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::findBucketElem
          (ValueHashTableOf_unsigned_int_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  ValueHashTableBucketElem_unsigned_int_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (ValueHashTableBucketElem_unsigned_int_ *)0x0) {
      return (ValueHashTableBucketElem_unsigned_int_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


ValueHashTableBucketElem_unsigned_int_ * __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::findBucketElem
          (ValueHashTableOf_unsigned_int_ *this,void *key,uint *hashVal)

{
  uint uVar1;
  int iVar2;
  ValueHashTableBucketElem_unsigned_int_ *curElem;
  
  uVar1 = (**this->fHash->_vptr_HashBase)
                    (this->fHash,key,(ulong)this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar1;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (ValueHashTableBucketElem_unsigned_int_ *)0x0) {
      return (ValueHashTableBucketElem_unsigned_int_ *)0x0;
    }
    iVar2 = (*this->fHash->_vptr_HashBase[1])(this->fHash,key,curElem->fKey);
    if ((char)iVar2 != '\0') break;
    curElem = curElem->fNext;
  }
  return curElem;
}


void __thiscall
xercesc_2_7::ValueHashTableBucketElem<unsigned_int>::ValueHashTableBucketElem
          (ValueHashTableBucketElem_unsigned_int_ *this,void *key,uint *value,
          ValueHashTableBucketElem_unsigned_int_ *next)

{
  this->fData = *value;
  this->fNext = next;
  this->fKey = key;
  return;
}


void __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::removeAll(ValueHashTableOf_unsigned_int_ *this)

{
  ValueHashTableBucketElem_unsigned_int_ *pVVar1;
  uint buckInd;
  ValueHashTableBucketElem_unsigned_int_ *curElem;
  ValueHashTableBucketElem_unsigned_int_ *nextElem;
  
  for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
    curElem = this->fBucketList[buckInd];
    while (curElem != (ValueHashTableBucketElem_unsigned_int_ *)0x0) {
      pVVar1 = curElem->fNext;
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
      curElem = pVVar1;
    }
    this->fBucketList[buckInd] = (ValueHashTableBucketElem_unsigned_int_ *)0x0;
  }
  return;
}


void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::XSAnnotation>::XMLEnumerator
          (XMLEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  this->_vptr_XMLEnumerator = (anon_subr_int_varargs **)&DAT_00130df0;
  return;
}


void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::XSAnnotation>::_XMLEnumerator
          (XMLEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  this->_vptr_XMLEnumerator = (anon_subr_int_varargs **)&DAT_00130df0;
  return;
}


void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::XSAnnotation>::_XMLEnumerator
          (XMLEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  _XMLEnumerator(this);
  operator_delete(this);
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::findNext
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  if (this->fCurElem != (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0) {
    this->fCurElem = this->fCurElem->fNext;
  }
  if ((this->fCurElem == (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0) &&
     (this->fCurHash = this->fCurHash + 1, this->fCurHash != this->fToEnum->fHashModulus)) {
    do {
      if (this->fToEnum->fBucketList[this->fCurHash] !=
          (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0) {
        this->fCurElem = this->fToEnum->fBucketList[this->fCurHash];
        return;
      }
      this->fCurHash = this->fCurHash + 1;
    } while (this->fCurHash != this->fToEnum->fHashModulus);
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XSAnnotation>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__XSAnnotation_ *this)

{
  EVP_PKEY_CTX *in_RSI;
  
  cleanup(this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo___ *this,
            RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo___ *this
             )

{
  reset(this,(RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0);
  return;
}


RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::
release(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo___ *this)

{
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **ppRVar1;
  RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__SchemaInfo___ *this,
            RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__SchemaInfo___ *this)

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::release
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__SchemaInfo___ *this)

{
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo___ *this,
            RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo___ *this
             )

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::
release(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo___ *this)

{
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo___ *this,
            RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo___ *this
             )

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::
release(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo___ *this)

{
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo___
             *this,RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **toDelete,
            MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo___
              *this)

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::
release(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo___ *this)

{
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XMLAttDef___ *this,
            RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XMLAttDef___ *this)

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::release
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XMLAttDef___ *this)

{
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_short_unsigned_int___ *this,
            RefHash2KeysTableBucketElem_short_unsigned_int_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_short_unsigned_int___ *this)

{
  reset(this,(RefHash2KeysTableBucketElem_short_unsigned_int_ **)0x0);
  return;
}


RefHash2KeysTableBucketElem_short_unsigned_int_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>*>::release
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_short_unsigned_int___ *this)

{
  RefHash2KeysTableBucketElem_short_unsigned_int_ **ppRVar1;
  RefHash2KeysTableBucketElem_short_unsigned_int_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHash2KeysTableBucketElem_short_unsigned_int_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__KVStringPair___ *this,
            RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__KVStringPair___ *this)

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__KVStringPair_ ** __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::release
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__KVStringPair___ *this)

{
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint___
             *this,RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **toDelete,
            MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint___
              *this)

{
  reset(this,(RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **)0x0);
  return;
}


RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ ** __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::release
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint___
           *this)

{
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **ppRVar1;
  RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
               *this,RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                     **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
                *this)

{
  reset(this,(RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
              **)0x0);
  return;
}


RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **
__thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::release(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
          *this)

{
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
  **ppRVar1;
  RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                 **)0x0;
  return ppRVar1;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::isEmpty
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  return this->fCount == 0;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<short_unsigned_int>::isEmpty
          (RefHash2KeysTableOf_short_unsigned_int_ *this)

{
  return this->fCount == 0;
}


bool __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::isEmpty
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this)

{
  return this->fCount == 0;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::removeAll
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this)

{
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *pRVar1;
  ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this_00;
  bool bVar2;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *in_RSI;
  uint buckInd;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *curElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem !=
             (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *
             )0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) &&
           (this_00 = curElem->fData,
           this_00 != (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *)0x0)) {
          ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::_ValueVectorOf(this_00);
          xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
        in_RSI = curElem;
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] =
           (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *)
           0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::removeAll
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this)

{
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *pRVar1;
  ValueVectorOf_unsigned_int_ *this_00;
  bool bVar2;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *in_RSI;
  uint buckInd;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *curElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) &&
           (this_00 = curElem->fData, this_00 != (ValueVectorOf_unsigned_int_ *)0x0)) {
          ValueVectorOf<unsigned_int>::_ValueVectorOf(this_00);
          xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
        in_RSI = curElem;
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] =
           (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::removeAll
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this)

{
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *pRVar1;
  ValueVectorOf_xercesc_2_7__DOMElement__ *this_00;
  bool bVar2;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *in_RSI;
  uint buckInd;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *curElem;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem !=
             (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) &&
           (this_00 = curElem->fData, this_00 != (ValueVectorOf_xercesc_2_7__DOMElement__ *)0x0)) {
          ValueVectorOf<xercesc_2_7::DOMElement*>::_ValueVectorOf(this_00);
          xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
        in_RSI = curElem;
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] =
           (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::removeAll
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *pRVar1;
  SchemaInfo *this_00;
  bool bVar2;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *in_RSI;
  uint buckInd;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *nextElem;
  
  bVar2 = isEmpty(this);
  if (bVar2 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) &&
           (this_00 = curElem->fData, this_00 != (SchemaInfo *)0x0)) {
          xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
          xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
        in_RSI = curElem;
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] = (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
               *this,RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                     **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
                *this)

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
              **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ ** __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::release(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
          *this)

{
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
                 **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>*>::
ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int_____
             *this,RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **toDelete,
            MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int_____
              *this)

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ ** __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>*>::
release(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int_____
        *this)

{
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>*>
::ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement______
               *this,RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____
                     **toDelete,MemoryManager *manager)

{
  XMemory::XMemory((XMemory *)this);
  this->fData = toDelete;
  this->fMemoryManager = manager;
  return;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>*>
::_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement______
                *this)

{
  reset(this,(RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)0x0);
  return;
}


RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ ** __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>*>
::release(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement______
          *this)

{
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **ppRVar1;
  RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **p;
  
  ppRVar1 = this->fData;
  this->fData = (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)
                0x0;
  return ppRVar1;
}


void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XSAnnotation>::cleanup
          (RefHashTableOf_xercesc_2_7__XSAnnotation_ *this,EVP_PKEY_CTX *ctx)

{
  HashBase *pHVar1;
  
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  this->fBucketList = (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ **)0x0;
  pHVar1 = this->fHash;
  if (pHVar1 != (HashBase *)0x0) {
    (*pHVar1->_vptr_HashBase[3])(pHVar1);
  }
  return;
}


void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo___ *this,
          RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **p)

{
  if (this->fData != (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0) {
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
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__SchemaInfo___ *this,
          RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **p)

{
  if (this->fData != (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_xercesc_2_7__SchemaInfo_ **)0x0) {
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
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo___ *this,
          RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **p)

{
  if (this->fData != (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo_ **)0x0) {
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
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo___ *this,
          RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **p)

{
  if (this->fData != (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo_ **)0x0) {
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
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::
reset(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo___ *this,
     RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **p)

{
  if (this->fData != (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo_ **)0x0) {
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
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XMLAttDef___ *this,
          RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **p)

{
  if (this->fData != (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_xercesc_2_7__XMLAttDef_ **)0x0) {
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
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<short_unsigned_int>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_short_unsigned_int___ *this,
          RefHash2KeysTableBucketElem_short_unsigned_int_ **p)

{
  if (this->fData != (RefHash2KeysTableBucketElem_short_unsigned_int_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHash2KeysTableBucketElem_short_unsigned_int_ **)0x0) {
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
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__KVStringPair___ *this,
          RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **p)

{
  if (this->fData != (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_xercesc_2_7__KVStringPair_ **)0x0) {
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
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint___
           *this,RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **p)

{
  if (this->fData != (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint_ **)0x0) {
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
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::reset(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
        *this,RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
              **p)

{
  if (this->fData !=
      (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)
      0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData !=
          (RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
           **)0x0) {
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


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>::isEmpty
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ *this)

{
  return this->fCount == 0;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>::isEmpty
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int___ *this)

{
  return this->fCount == 0;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>::isEmpty
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ *this)

{
  return this->fCount == 0;
}


bool __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::isEmpty
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  return this->fCount == 0;
}


void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>*>
::reset(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl______
        *this,RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____
              **p)

{
  if (this->fData !=
      (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)0x0)
  {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData !=
          (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl____ **)
          0x0) {
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
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>_>*>::reset
          (ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int_____
           *this,RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **p)

{
  if (this->fData != (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData != (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int___ **)0x0)
      {
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
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>*>
::reset(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement______
        *this,RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **p)

{
  if (this->fData !=
      (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)0x0) {
    if (this->fMemoryManager == (MemoryManager *)0x0) {
      if (this->fData !=
          (RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement____ **)0x0) {
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
xercesc_2_7::RefHashTableOf<xercesc_2_7::XSAnnotation>::removeAll
          (RefHashTableOf_xercesc_2_7__XSAnnotation_ *this)

{
  RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *pRVar1;
  long *plVar2;
  bool bVar3;
  uint buckInd;
  RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *curElem;
  RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *nextElem;
  
  bVar3 = isEmpty(this);
  if (bVar3 == false) {
    for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
      curElem = this->fBucketList[buckInd];
      while (curElem != (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0) {
        pRVar1 = curElem->fNext;
        if ((this->fAdoptedElems != false) &&
           (plVar2 = (long *)curElem->fData, plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
        curElem = pRVar1;
      }
      this->fBucketList[buckInd] = (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0;
    }
    this->fCount = 0;
  }
  return;
}


void __thiscall
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::Reset
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  this->fCurHash = 0xffffffff;
  this->fCurElem = (RefHashTableBucketElem_xercesc_2_7__XSAnnotation_ *)0x0;
  findNext(this);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaAttDef>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  long *plVar1;
  uint index;
  
  (this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00130f10;
  if ((this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_).fCurCount;
        index = index + 1) {
      plVar1 = (long *)(this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_).fElemList[index];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  (*((this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_).fMemoryManager)->_vptr_MemoryManager
    [3])((this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_).fMemoryManager,
         (this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_).fElemList);
  BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__SchemaAttDef_);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaAttDef>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  void *in_RSI;
  
  _RefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::setElementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this,SchemaAttDef *toSet,uint setAt)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::removeAllElements
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  long *plVar1;
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) &&
       (plVar1 = (long *)this->fElemList[index], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    this->fElemList[index] = (SchemaAttDef *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::removeElementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this,uint removeAt)

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
      this->fElemList[removeAt] = (SchemaAttDef *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (SchemaAttDef *)0x0;
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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::removeLastElement
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::cleanup
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this,EVP_PKEY_CTX *ctx)

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


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaInfo>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  SchemaInfo *this_00;
  void *in_RSI;
  uint index;
  
  (this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_001310a8;
  if ((this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_).fCurCount;
        index = index + 1) {
      this_00 = (this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_).fElemList[index];
      if (this_00 != (SchemaInfo *)0x0) {
        xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
        xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
      }
    }
  }
  (*((this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_).fMemoryManager)->_vptr_MemoryManager[3])
            ((this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_).fMemoryManager,
             (this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_).fElemList);
  BaseRefVectorOf<xercesc_2_7::SchemaInfo>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__SchemaInfo_);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaInfo>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  void *in_RSI;
  
  _RefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::setElementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,SchemaInfo *toSet,uint setAt)

{
  SchemaInfo *this_00;
  ArrayIndexOutOfBoundsException *this_01;
  SchemaInfo *pSVar1;
  
  if (this->fCurCount <= setAt) {
    this_01 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
    ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
              (this_01,"./xercesc/util/BaseRefVectorOf.c",0x43,Vector_BadIndex,this->fMemoryManager)
    ;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_01,&ArrayIndexOutOfBoundsException::typeinfo,
                ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
  }
  if ((this->fAdoptedElems != false) &&
     (this_00 = this->fElemList[setAt], this_00 != (SchemaInfo *)0x0)) {
    pSVar1 = toSet;
    xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pSVar1);
  }
  this->fElemList[setAt] = toSet;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::removeAllElements
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  SchemaInfo *this_00;
  void *in_RSI;
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) &&
       (this_00 = this->fElemList[index], this_00 != (SchemaInfo *)0x0)) {
      xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
    }
    this->fElemList[index] = (SchemaInfo *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::removeElementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,uint removeAt)

{
  SchemaInfo *this_00;
  ArrayIndexOutOfBoundsException *this_01;
  undefined4 in_register_00000034;
  void *pvVar1;
  uint index;
  
  pvVar1 = (void *)CONCAT44(in_register_00000034,removeAt);
  if (removeAt < this->fCurCount) {
    if ((this->fAdoptedElems != false) &&
       (this_00 = this->fElemList[removeAt], this_00 != (SchemaInfo *)0x0)) {
      xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
      xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,pvVar1);
    }
    index = removeAt;
    if (removeAt == this->fCurCount - 1) {
      this->fElemList[removeAt] = (SchemaInfo *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (SchemaInfo *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    return;
  }
  this_01 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
  ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
            (this_01,"./xercesc/util/BaseRefVectorOf.c",0x90,Vector_BadIndex,this->fMemoryManager);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_01,&ArrayIndexOutOfBoundsException::typeinfo,
              ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::removeLastElement
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  SchemaInfo *this_00;
  void *in_RSI;
  
  if (((this->fCurCount != 0) &&
      (this->fCurCount = this->fCurCount - 1, this->fAdoptedElems != false)) &&
     (this_00 = this->fElemList[this->fCurCount], this_00 != (SchemaInfo *)0x0)) {
    xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::cleanup
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this,EVP_PKEY_CTX *ctx)

{
  SchemaInfo *this_00;
  uint index;
  
  if (this->fAdoptedElems != false) {
    for (index = 0; index < this->fCurCount; index = index + 1) {
      this_00 = this->fElemList[index];
      if (this_00 != (SchemaInfo *)0x0) {
        xercesc_2_7::SchemaInfo::_SchemaInfo(this_00);
        xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,ctx);
      }
    }
  }
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fElemList);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::Reset
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  this->fCurIndex = 0;
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IdentityConstraint>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

{
  long *plVar1;
  uint index;
  
  (this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_001311e0;
  if ((this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_).fCurCount
        ; index = index + 1) {
      plVar1 = (long *)(this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_).fElemList
                       [index];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  (*((this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_).fMemoryManager)->
    _vptr_MemoryManager[3])
            ((this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_).fMemoryManager,
             (this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_).fElemList);
  BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__IdentityConstraint_);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IdentityConstraint>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

{
  void *in_RSI;
  
  _RefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::setElementAt
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this,IdentityConstraint *toSet,
          uint setAt)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::removeAllElements
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

{
  long *plVar1;
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) &&
       (plVar1 = (long *)this->fElemList[index], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    this->fElemList[index] = (IdentityConstraint *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::removeElementAt
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this,uint removeAt)

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
      this->fElemList[removeAt] = (IdentityConstraint *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (IdentityConstraint *)0x0;
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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::removeLastElement
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::cleanup
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this,EVP_PKEY_CTX *ctx)

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


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IC_Field>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  long *plVar1;
  uint index;
  
  (this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00131270;
  if ((this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_).fCurCount;
        index = index + 1) {
      plVar1 = (long *)(this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_).fElemList[index];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  (*((this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_).fMemoryManager)->_vptr_MemoryManager[3])
            ((this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_).fMemoryManager,
             (this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_).fElemList);
  BaseRefVectorOf<xercesc_2_7::IC_Field>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__IC_Field_);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IC_Field>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  void *in_RSI;
  
  _RefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::setElementAt
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this,IC_Field *toSet,uint setAt)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::removeAllElements
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  long *plVar1;
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) &&
       (plVar1 = (long *)this->fElemList[index], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    this->fElemList[index] = (IC_Field *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::removeElementAt
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this,uint removeAt)

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
      this->fElemList[removeAt] = (IC_Field *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (IC_Field *)0x0;
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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::removeLastElement
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::cleanup
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this,EVP_PKEY_CTX *ctx)

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


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaElementDecl>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

{
  long *plVar1;
  uint index;
  
  (this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_)._vptr_BaseRefVectorOf =
       (anon_subr_int_varargs **)&PTR__RefVectorOf_00131300;
  if ((this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_).fCurCount;
        index = index + 1) {
      plVar1 = (long *)(this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_).fElemList
                       [index];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  (*((this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_).fMemoryManager)->
    _vptr_MemoryManager[3])
            ((this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_).fMemoryManager,
             (this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_).fElemList);
  BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::_BaseRefVectorOf
            (&this->super_BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_);
  return;
}


void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaElementDecl>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

{
  void *in_RSI;
  
  _RefVectorOf(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::setElementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,SchemaElementDecl *toSet,uint setAt
          )

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::removeAllElements
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

{
  long *plVar1;
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) &&
       (plVar1 = (long *)this->fElemList[index], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    this->fElemList[index] = (SchemaElementDecl *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::removeElementAt
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,uint removeAt)

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
      this->fElemList[removeAt] = (SchemaElementDecl *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (SchemaElementDecl *)0x0;
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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::removeLastElement
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::cleanup
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this,EVP_PKEY_CTX *ctx)

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


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::setElementAt
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this,DatatypeValidator *toSet,uint setAt
          )

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::removeAllElements
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

{
  long *plVar1;
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) &&
       (plVar1 = (long *)this->fElemList[index], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    this->fElemList[index] = (DatatypeValidator *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::removeElementAt
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this,uint removeAt)

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
      this->fElemList[removeAt] = (DatatypeValidator *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (DatatypeValidator *)0x0;
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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::removeLastElement
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

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
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::cleanup
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this,EVP_PKEY_CTX *ctx)

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


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::removeAllElements
          (RefArrayVectorOf_short_unsigned_int_ *this)

{
  uint index;
  
  for (index = 0; index < (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount;
      index = index + 1) {
    if ((this->super_BaseRefVectorOf_short_unsigned_int_).fAdoptedElems != false) {
      (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
                ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager);
    }
    (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList[index] = (ushort *)0x0;
  }
  (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::removeElementAt
          (RefArrayVectorOf_short_unsigned_int_ *this,uint removeAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  uint index;
  
  if (removeAt < (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount) {
    if ((this->super_BaseRefVectorOf_short_unsigned_int_).fAdoptedElems != false) {
      (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
                ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager,
                 (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList[removeAt]);
    }
    index = removeAt;
    if (removeAt == (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount - 1) {
      (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList[removeAt] = (ushort *)0x0;
      (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount =
           (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount - 1;
    }
    else {
      for (; index < (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount - 1;
          index = index + 1) {
        (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList[index] =
             (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList[index + 1];
      }
      (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList
      [(this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount - 1] = (ushort *)0x0;
      (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount =
           (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount - 1;
    }
    return;
  }
  this_00 = (ArrayIndexOutOfBoundsException *)__cxa_allocate_exception(0x30);
  ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
            (this_00,"./xercesc/util/RefArrayVectorOf.c",0x4d,Vector_BadIndex,
             (this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&ArrayIndexOutOfBoundsException::typeinfo,
              ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException);
}


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::removeLastElement
          (RefArrayVectorOf_short_unsigned_int_ *this)

{
  if (((this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount != 0) &&
     ((this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount =
           (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount - 1,
     (this->super_BaseRefVectorOf_short_unsigned_int_).fAdoptedElems != false)) {
    (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
              ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager,
               (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList
               [(this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount]);
  }
  return;
}


void __thiscall
xercesc_2_7::RefArrayVectorOf<short_unsigned_int>::cleanup
          (RefArrayVectorOf_short_unsigned_int_ *this,EVP_PKEY_CTX *ctx)

{
  uint index;
  
  if ((this->super_BaseRefVectorOf_short_unsigned_int_).fAdoptedElems != false) {
    for (index = 0; index < (this->super_BaseRefVectorOf_short_unsigned_int_).fCurCount;
        index = index + 1) {
      (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
                ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager);
    }
  }
  (*((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager)->_vptr_MemoryManager[3])
            ((this->super_BaseRefVectorOf_short_unsigned_int_).fMemoryManager,
             (this->super_BaseRefVectorOf_short_unsigned_int_).fElemList);
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::setElementAt
          (BaseRefVectorOf_short_unsigned_int_ *this,ushort *toSet,uint setAt)

{
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
  if ((this->fAdoptedElems != false) && (this->fElemList[setAt] != (ushort *)0x0)) {
    operator_delete(this->fElemList[setAt]);
  }
  this->fElemList[setAt] = toSet;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::removeAllElements
          (BaseRefVectorOf_short_unsigned_int_ *this)

{
  uint index;
  
  for (index = 0; index < this->fCurCount; index = index + 1) {
    if ((this->fAdoptedElems != false) && (this->fElemList[index] != (ushort *)0x0)) {
      operator_delete(this->fElemList[index]);
    }
    this->fElemList[index] = (ushort *)0x0;
  }
  this->fCurCount = 0;
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::removeElementAt
          (BaseRefVectorOf_short_unsigned_int_ *this,uint removeAt)

{
  ArrayIndexOutOfBoundsException *this_00;
  uint index;
  
  if (removeAt < this->fCurCount) {
    if ((this->fAdoptedElems != false) && (this->fElemList[removeAt] != (ushort *)0x0)) {
      operator_delete(this->fElemList[removeAt]);
    }
    index = removeAt;
    if (removeAt == this->fCurCount - 1) {
      this->fElemList[removeAt] = (ushort *)0x0;
      this->fCurCount = this->fCurCount - 1;
    }
    else {
      for (; index < this->fCurCount - 1; index = index + 1) {
        this->fElemList[index] = this->fElemList[index + 1];
      }
      this->fElemList[this->fCurCount - 1] = (ushort *)0x0;
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
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::removeLastElement
          (BaseRefVectorOf_short_unsigned_int_ *this)

{
  if (((this->fCurCount != 0) &&
      (this->fCurCount = this->fCurCount - 1, this->fAdoptedElems != false)) &&
     (this->fElemList[this->fCurCount] != (ushort *)0x0)) {
    operator_delete(this->fElemList[this->fCurCount]);
  }
  return;
}


void __thiscall
xercesc_2_7::BaseRefVectorOf<short_unsigned_int>::cleanup
          (BaseRefVectorOf_short_unsigned_int_ *this,EVP_PKEY_CTX *ctx)

{
  uint index;
  
  if (this->fAdoptedElems != false) {
    for (index = 0; index < this->fCurCount; index = index + 1) {
      if (this->fElemList[index] != (ushort *)0x0) {
        operator_delete(this->fElemList[index]);
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
/* xercesc_2_7::QName::QName(xercesc_2_7::QName const&) */

void __thiscall xercesc_2_7::QName::QName(QName *this,QName *param_1)

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
/* xercesc_2_7::XMLString::subString(unsigned short*, unsigned short const*, int, int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMLString::subString
               (ushort *param_1,ushort *param_2,int param_3,int param_4,MemoryManager *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::SchemaInfo::updateImportingInfo(xercesc_2_7::SchemaInfo*) */

void xercesc_2_7::SchemaInfo::updateImportingInfo(SchemaInfo *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::trim(unsigned short*) */

void xercesc_2_7::XMLString::trim(ushort *param_1)

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

void __stack_chk_fail(void)

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
/* xercesc_2_7::SchemaAttDef::SchemaAttDef(xercesc_2_7::SchemaAttDef const*) */

void __thiscall xercesc_2_7::SchemaAttDef::SchemaAttDef(SchemaAttDef *this,SchemaAttDef *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSDErrorReporter::XSDErrorReporter(xercesc_2_7::XMLErrorReporter*) */

void __thiscall
xercesc_2_7::XSDErrorReporter::XSDErrorReporter(XSDErrorReporter *this,XMLErrorReporter *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::GeneralAttributeCheck::GeneralAttributeCheck(xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::GeneralAttributeCheck::GeneralAttributeCheck
          (GeneralAttributeCheck *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::GeneralAttributeCheck::~GeneralAttributeCheck() */

void __thiscall
xercesc_2_7::GeneralAttributeCheck::_GeneralAttributeCheck(GeneralAttributeCheck *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::NamespaceScope::NamespaceScope(xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::NamespaceScope::NamespaceScope(NamespaceScope *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::NamespaceScope::reset(unsigned int) */

void xercesc_2_7::NamespaceScope::reset(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GrammarResolver::putGrammar(xercesc_2_7::Grammar*) */

void xercesc_2_7::GrammarResolver::putGrammar(Grammar *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::NamespaceScope::increaseDepth() */

void xercesc_2_7::NamespaceScope::increaseDepth(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SchemaInfo::SchemaInfo(unsigned short, int, int, int, int, unsigned int, unsigned
   short*, unsigned short const*, xercesc_2_7::DOMElement const*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::SchemaInfo::SchemaInfo
          (SchemaInfo *this,ushort param_1,int param_2,int param_3,int param_4,int param_5,
          uint param_6,ushort *param_7,ushort *param_8,DOMElement *param_9,MemoryManager *param_10)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GeneralAttributeCheck::checkAttributes(xercesc_2_7::DOMElement const*, unsigned
   short, xercesc_2_7::TraverseSchema*, bool, xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>*) */

void xercesc_2_7::GeneralAttributeCheck::checkAttributes
               (DOMElement *param_1,ushort param_2,TraverseSchema *param_3,bool param_4,
               ValueVectorOf *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XUtil::getFirstChildElement(xercesc_2_7::DOMNode const*) */

void xercesc_2_7::XUtil::getFirstChildElement(DOMNode *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XUtil::getNextSiblingElement(xercesc_2_7::DOMNode const*) */

void xercesc_2_7::XUtil::getNextSiblingElement(DOMNode *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::patternMatch(unsigned short const*, unsigned short const*) */

void xercesc_2_7::XMLString::patternMatch(ushort *param_1,ushort *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSAnnotation::XSAnnotation(unsigned short const*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XSAnnotation::XSAnnotation(XSAnnotation *this,ushort *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSAnnotation::setSystemId(unsigned short const*) */

void xercesc_2_7::XSAnnotation::setSystemId(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::SchemaGrammar::addAnnotation(xercesc_2_7::XSAnnotation*) */

void xercesc_2_7::SchemaGrammar::addAnnotation(XSAnnotation *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSDLocator::setValues(unsigned short const*, unsigned short const*, long, long) */

void xercesc_2_7::XSDLocator::setValues(ushort *param_1,ushort *param_2,long param_3,long param_4)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::GrammarResolver::getGrammar(xercesc_2_7::XMLGrammarDescription*) */

void xercesc_2_7::GrammarResolver::getGrammar(XMLGrammarDescription *param_1)

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
/* xercesc_2_7::ContentSpecNode::ContentSpecNode(xercesc_2_7::ContentSpecNode const&) */

void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode(ContentSpecNode *this,ContentSpecNode *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::SchemaGrammar::putAnnotation(void*, xercesc_2_7::XSAnnotation*) */

void xercesc_2_7::SchemaGrammar::putAnnotation(void *param_1,XSAnnotation *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::isValidNCName(unsigned short const*) */

void xercesc_2_7::XMLString::isValidNCName(ushort *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ComplexTypeInfo::ComplexTypeInfo(xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::ComplexTypeInfo::ComplexTypeInfo(ComplexTypeInfo *this,MemoryManager *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSDLocator::XSDLocator() */

void __thiscall xercesc_2_7::XSDLocator::XSDLocator(XSDLocator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ComplexTypeInfo::setLocator(xercesc_2_7::XSDLocator*) */

void xercesc_2_7::ComplexTypeInfo::setLocator(XSDLocator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XercesGroupInfo::XercesGroupInfo(unsigned int, unsigned int,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XercesGroupInfo::XercesGroupInfo
          (XercesGroupInfo *this,uint param_1,uint param_2,MemoryManager *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XercesGroupInfo::setLocator(xercesc_2_7::XSDLocator*) */

void xercesc_2_7::XercesGroupInfo::setLocator(XSDLocator *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::SchemaInfo::getTopLevelComponent(unsigned short, unsigned short const*, unsigned
   short const*, xercesc_2_7::SchemaInfo**) */

void xercesc_2_7::SchemaInfo::getTopLevelComponent
               (ushort param_1,ushort *param_2,ushort *param_3,SchemaInfo **param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XercesAttGroupInfo::XercesAttGroupInfo(unsigned int, unsigned int,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XercesAttGroupInfo::XercesAttGroupInfo
          (XercesAttGroupInfo *this,uint param_1,uint param_2,MemoryManager *param_3)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::tokenizeString(unsigned short const*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMLString::tokenizeString(ushort *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XercesAttGroupInfo::containsAttribute(unsigned short const*, unsigned int) */

void xercesc_2_7::XercesAttGroupInfo::containsAttribute(ushort *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SchemaAttDef::SchemaAttDef(unsigned short const*, unsigned short const*, int,
   xercesc_2_7::XMLAttDef::AttTypes, xercesc_2_7::XMLAttDef::DefAttTypes,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::SchemaAttDef::SchemaAttDef
          (SchemaAttDef *this,ushort *param_1,ushort *param_2,int param_3,AttTypes param_4,
          DefAttTypes param_5,MemoryManager *param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::ComplexTypeInfo::addAttDef(xercesc_2_7::SchemaAttDef*) */

void xercesc_2_7::ComplexTypeInfo::addAttDef(SchemaAttDef *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XUtil::getFirstChildElementNS(xercesc_2_7::DOMNode const*, unsigned short const**,
   unsigned short const*, unsigned int) */

void xercesc_2_7::XUtil::getFirstChildElementNS
               (DOMNode *param_1,ushort **param_2,ushort *param_3,uint param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLNotationDecl::XMLNotationDecl(unsigned short const*, unsigned short const*,
   unsigned short const*, unsigned short const*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XMLNotationDecl::XMLNotationDecl
          (XMLNotationDecl *this,ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,
          MemoryManager *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSAnnotation::setNext(xercesc_2_7::XSAnnotation*) */

void xercesc_2_7::XSAnnotation::setNext(XSAnnotation *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator(unsigned short const*,
   xercesc_2_7::DatatypeValidator*, xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>*,
   xercesc_2_7::RefArrayVectorOf<unsigned short>*, bool, int, bool, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator
               (ushort *param_1,DatatypeValidator *param_2,RefHashTableOf *param_3,
               RefArrayVectorOf *param_4,bool param_5,int param_6,bool param_7,
               MemoryManager *param_8)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::KVStringPair::KVStringPair(unsigned short const*, unsigned short const*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::KVStringPair::KVStringPair
          (KVStringPair *this,ushort *param_1,ushort *param_2,MemoryManager *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::KVStringPair::KVStringPair(unsigned short const*, unsigned short const*, unsigned
   int, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::KVStringPair::KVStringPair
          (KVStringPair *this,ushort *param_1,ushort *param_2,uint param_3,MemoryManager *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLStringTokenizer::XMLStringTokenizer(unsigned short const*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XMLStringTokenizer::XMLStringTokenizer
          (XMLStringTokenizer *this,ushort *param_1,MemoryManager *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLStringTokenizer::nextToken() */

void xercesc_2_7::XMLStringTokenizer::nextToken(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLStringTokenizer::~XMLStringTokenizer() */

void __thiscall xercesc_2_7::XMLStringTokenizer::_XMLStringTokenizer(XMLStringTokenizer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator(unsigned short const*,
   xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>*, int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::DatatypeValidatorFactory::createDatatypeValidator
               (ushort *param_1,RefVectorOf *param_2,int param_3,bool param_4,MemoryManager *param_5
               )

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
/* xercesc_2_7::XMLStringTokenizer::hasMoreTokens() */

void xercesc_2_7::XMLStringTokenizer::hasMoreTokens(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IC_Key::IC_Key(unsigned short const*, unsigned short const*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::IC_Key::IC_Key(IC_Key *this,ushort *param_1,ushort *param_2,MemoryManager *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IC_Unique::IC_Unique(unsigned short const*, unsigned short const*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::IC_Unique::IC_Unique
          (IC_Unique *this,ushort *param_1,ushort *param_2,MemoryManager *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IC_KeyRef::IC_KeyRef(unsigned short const*, unsigned short const*,
   xercesc_2_7::IdentityConstraint*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::IC_KeyRef::IC_KeyRef
          (IC_KeyRef *this,ushort *param_1,ushort *param_2,IdentityConstraint *param_3,
          MemoryManager *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::indexOf(unsigned short const*, unsigned short, unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMLString::indexOf
               (ushort *param_1,ushort param_2,uint param_3,MemoryManager *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XercesXPath::XercesXPath(unsigned short const*, xercesc_2_7::XMLStringPool*,
   xercesc_2_7::NamespaceScope*, unsigned int, bool, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XercesXPath::XercesXPath
          (XercesXPath *this,ushort *param_1,XMLStringPool *param_2,NamespaceScope *param_3,
          uint param_4,bool param_5,MemoryManager *param_6)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IC_Selector::IC_Selector(xercesc_2_7::XercesXPath*,
   xercesc_2_7::IdentityConstraint*) */

void __thiscall
xercesc_2_7::IC_Selector::IC_Selector
          (IC_Selector *this,XercesXPath *param_1,IdentityConstraint *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::IdentityConstraint::setSelector(xercesc_2_7::IC_Selector*) */

void xercesc_2_7::IdentityConstraint::setSelector(IC_Selector *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::IC_Field::IC_Field(xercesc_2_7::XercesXPath*, xercesc_2_7::IdentityConstraint*) */

void __thiscall
xercesc_2_7::IC_Field::IC_Field(IC_Field *this,XercesXPath *param_1,IdentityConstraint *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::NamespaceScope::addPrefix(unsigned short const*, unsigned int) */

void xercesc_2_7::NamespaceScope::addPrefix(ushort *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::NamespaceScope::getNamespaceForPrefix(unsigned short const*, int) const */

void xercesc_2_7::NamespaceScope::getNamespaceForPrefix(ushort *param_1,int param_2)

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
/* xercesc_2_7::SchemaAttDef::SchemaAttDef(unsigned short const*, unsigned short const*, int,
   unsigned short const*, xercesc_2_7::XMLAttDef::AttTypes, xercesc_2_7::XMLAttDef::DefAttTypes,
   unsigned short const*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::SchemaAttDef::SchemaAttDef
          (SchemaAttDef *this,ushort *param_1,ushort *param_2,int param_3,ushort *param_4,
          AttTypes param_5,DefAttTypes param_6,ushort *param_7,MemoryManager *param_8)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XMLString::parseInt(unsigned short const*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XMLString::parseInt(ushort *param_1,MemoryManager *param_2)

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
/* xercesc_2_7::ComplexTypeInfo::setContentSpec(xercesc_2_7::ContentSpecNode*) */

void xercesc_2_7::ComplexTypeInfo::setContentSpec(ContentSpecNode *param_1)

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
/* xercesc_2_7::XMLString::removeChar(unsigned short const*, unsigned short const&,
   xercesc_2_7::XMLBuffer&) */

void xercesc_2_7::XMLString::removeChar(ushort *param_1,ushort *param_2,XMLBuffer *param_3)

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
/* xercesc_2_7::ContentSpecNode::getMinTotalRange() const */

void xercesc_2_7::ContentSpecNode::getMinTotalRange(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XercesAttGroupInfo::getAttDef(unsigned short const*, int) const */

void xercesc_2_7::XercesAttGroupInfo::getAttDef(ushort *param_1,int param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSDErrorReporter::emitError(unsigned int, unsigned short const*,
   xercesc_2_7::Locator const*) */

void xercesc_2_7::XSDErrorReporter::emitError(uint param_1,ushort *param_2,Locator *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSDErrorReporter::emitError(unsigned int, unsigned short const*,
   xercesc_2_7::Locator const*, unsigned short const*, unsigned short const*, unsigned short const*,
   unsigned short const*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::XSDErrorReporter::emitError
               (uint param_1,ushort *param_2,Locator *param_3,ushort *param_4,ushort *param_5,
               ushort *param_6,ushort *param_7,MemoryManager *param_8)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XUtil::getNextSiblingElementNS(xercesc_2_7::DOMNode const*, unsigned short const**,
   unsigned short const*, unsigned int) */

void xercesc_2_7::XUtil::getNextSiblingElementNS
               (DOMNode *param_1,ushort **param_2,ushort *param_3,uint param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::MemBufInputSource::MemBufInputSource(unsigned char const*, unsigned int, unsigned
   short const*, bool, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::MemBufInputSource::MemBufInputSource
          (MemBufInputSource *this,uchar *param_1,uint param_2,ushort *param_3,bool param_4,
          MemoryManager *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSAXMLScanner::XSAXMLScanner(xercesc_2_7::GrammarResolver*,
   xercesc_2_7::XMLStringPool*, xercesc_2_7::SchemaGrammar*, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::XSAXMLScanner::XSAXMLScanner
          (XSAXMLScanner *this,GrammarResolver *param_1,XMLStringPool *param_2,
          SchemaGrammar *param_3,MemoryManager *param_4)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::XSAnnotation::getNext() */

void xercesc_2_7::XSAnnotation::getNext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */
/* xercesc_2_7::MemBufInputSource::resetMemBufInputSource(unsigned char const*, unsigned int) */

void xercesc_2_7::MemBufInputSource::resetMemBufInputSource(uchar *param_1,uint param_2)

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
/* xercesc_2_7::HashXMLCh::HashXMLCh() */

void __thiscall xercesc_2_7::HashXMLCh::HashXMLCh(HashXMLCh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::SchemaInfo::~SchemaInfo() */

void __thiscall xercesc_2_7::SchemaInfo::_SchemaInfo(SchemaInfo *this)

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
/* xercesc_2_7::PSVIItem::getActualValue() const */

void xercesc_2_7::PSVIItem::getActualValue(void)

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
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>*>
::_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement_____
                *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::
     ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>*>
     ::ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned
   int>>*>::~ArrayJanitor() */

void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_unsigned_int____
              *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned
   int>>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned
   int>>**, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::
     ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>>*>::
     ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>
::_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl_____
                *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::
     ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>
     ::ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>
::_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl_____
                *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>::ArrayJanitor(xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::
     ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*>
     ::ArrayJanitor(RefHash2KeysTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::
ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__IdentityConstraint___
              *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::ArrayJanitor(xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::
     ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*>::
     ArrayJanitor(RefHash2KeysTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__KVStringPair___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*>::
     ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned
   short>*>::~ArrayJanitor() */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_short>*>::_ArrayJanitor
          (ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_unsigned_short___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned
   short>*>::ArrayJanitor(xercesc_2_7::RefHash2KeysTableBucketElem<unsigned short>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_short>*>::
     ArrayJanitor(RefHash2KeysTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XMLAttDef___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*>::
     ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesAttGroupInfo___
              *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::
     ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*>::
     ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__XercesGroupInfo___ *this
             )

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*>::
     ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__ComplexTypeInfo___ *this
             )

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*>::
     ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHashTableBucketElem_xercesc_2_7__SchemaInfo___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::ArrayJanitor(xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*>::
     ArrayJanitor(RefHashTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::~ArrayJanitor()
    */

void __thiscall
xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::
_ArrayJanitor(ArrayJanitor_xercesc_2_7__RefHash2KeysTableBucketElem_xercesc_2_7__SchemaInfo___ *this
             )

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::ArrayJanitor(xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>**,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*>::
     ArrayJanitor(RefHash2KeysTableBucketElem **param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::XSAnnotation>::~RefHashTableOf() */

void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::XSAnnotation>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__XSAnnotation_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLEnumerator<xercesc_2_7::XSAnnotation>::~XMLEnumerator() */

void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::XSAnnotation>::_XMLEnumerator
          (XMLEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLEnumerator<xercesc_2_7::XSAnnotation>::XMLEnumerator() */

void xercesc_2_7::XMLEnumerator<xercesc_2_7::XSAnnotation>::XMLEnumerator(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueHashTableBucketElem<unsigned int>::ValueHashTableBucketElem(void*, unsigned int
   const&, xercesc_2_7::ValueHashTableBucketElem<unsigned int>*) */

void xercesc_2_7::ValueHashTableBucketElem<unsigned_int>::ValueHashTableBucketElem
               (void *param_1,uint *param_2,ValueHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>::RefHashTableBucketElem(void*,
   xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>*,
   xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>::
     RefHashTableBucketElem(void *param_1,ValueVectorOf *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned
   int>>::RefHashTableBucketElem(void*, xercesc_2_7::ValueVectorOf<unsigned int>*,
   xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned int>>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<unsigned_int>>::
     RefHashTableBucketElem(void *param_1,ValueVectorOf *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::RefHashTableBucketElem(void*,
   xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>*,
   xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*)
    */

void xercesc_2_7::
     RefHashTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::
     RefHashTableBucketElem(void *param_1,ValueVectorOf *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::RefHash2KeysTableBucketElem(void*,
   int, xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>*,
   xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>*)
    */

void xercesc_2_7::
     RefHash2KeysTableBucketElem<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::
     RefHash2KeysTableBucketElem
               (void *param_1,int param_2,ValueVectorOf *param_3,
               RefHash2KeysTableBucketElem *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::~ValueVectorOf() */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__SchemaElementDecl__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaElementDecl>::~RefVectorOf() */

void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaElementDecl>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>::RefHash2KeysTableBucketElem(void*,
   int, xercesc_2_7::IdentityConstraint*,
   xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>*) */

void xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::IdentityConstraint>::
     RefHash2KeysTableBucketElem
               (void *param_1,int param_2,IdentityConstraint *param_3,
               RefHash2KeysTableBucketElem *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::BaseRefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>::RefHashTableBucketElem(void*,
   xercesc_2_7::KVStringPair*, xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::KVStringPair>::RefHashTableBucketElem
               (void *param_1,KVStringPair *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<unsigned short>::BaseRefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<unsigned_short>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableBucketElem<unsigned short>::RefHash2KeysTableBucketElem(void*, int,
   unsigned short*, xercesc_2_7::RefHash2KeysTableBucketElem<unsigned short>*) */

void xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_short>::RefHash2KeysTableBucketElem
               (void *param_1,int param_2,ushort *param_3,RefHash2KeysTableBucketElem *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>::RefHashTableBucketElem(void*,
   xercesc_2_7::XMLAttDef*, xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XMLAttDef>::RefHashTableBucketElem
               (void *param_1,XMLAttDef *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>::RefHashTableBucketElem(void*,
   xercesc_2_7::XercesAttGroupInfo*,
   xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesAttGroupInfo>::RefHashTableBucketElem
               (void *param_1,XercesAttGroupInfo *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>::RefHashTableBucketElem(void*,
   xercesc_2_7::XercesGroupInfo*,
   xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::XercesGroupInfo>::RefHashTableBucketElem
               (void *param_1,XercesGroupInfo *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>::RefHashTableBucketElem(void*,
   xercesc_2_7::ComplexTypeInfo*,
   xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::ComplexTypeInfo>::RefHashTableBucketElem
               (void *param_1,ComplexTypeInfo *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>::RefHashTableBucketElem(void*,
   xercesc_2_7::SchemaInfo*, xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>*) */

void xercesc_2_7::RefHashTableBucketElem<xercesc_2_7::SchemaInfo>::RefHashTableBucketElem
               (void *param_1,SchemaInfo *param_2,RefHashTableBucketElem *param_3)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>::RefHash2KeysTableBucketElem(void*,
   int, xercesc_2_7::SchemaInfo*,
   xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>*) */

void xercesc_2_7::RefHash2KeysTableBucketElem<xercesc_2_7::SchemaInfo>::RefHash2KeysTableBucketElem
               (void *param_1,int param_2,SchemaInfo *param_3,RefHash2KeysTableBucketElem *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::IC_Field>::~RefVectorOf() */

void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IC_Field>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::BaseRefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaAttDef>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::BaseRefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLEnumerator<xercesc_2_7::SchemaInfo>::~XMLEnumerator() */

void __thiscall
xercesc_2_7::XMLEnumerator<xercesc_2_7::SchemaInfo>::_XMLEnumerator
          (XMLEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XMLEnumerator<xercesc_2_7::SchemaInfo>::XMLEnumerator() */

void xercesc_2_7::XMLEnumerator<xercesc_2_7::SchemaInfo>::XMLEnumerator(void)

{
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
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::BaseRefVectorOf(unsigned int,
   bool, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IdentityConstraint>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__IC_Field_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::BaseRefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<xercesc_2_7::IC_Field>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__SchemaElementDecl_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::BaseRefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaElementDecl>::BaseRefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<xercesc_2_7::DatatypeValidator>::_BaseRefVectorOf
          (BaseRefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::~RefHashTableOfEnumerator() */

void __thiscall
xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::_RefHashTableOfEnumerator
          (RefHashTableOfEnumerator_xercesc_2_7__XSAnnotation_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::RefHashTableOfEnumerator(xercesc_2_7::RefHashTableOf<xercesc_2_7::XSAnnotation>*,
   bool, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOfEnumerator<xercesc_2_7::XSAnnotation>::RefHashTableOfEnumerator
               (RefHashTableOf *param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueHashTableOf<unsigned int>::~ValueHashTableOf() */

void __thiscall
xercesc_2_7::ValueHashTableOf<unsigned_int>::_ValueHashTableOf(ValueHashTableOf_unsigned_int_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueHashTableOf<unsigned int>::ValueHashTableOf(unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ValueHashTableOf<unsigned_int>::ValueHashTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf(unsigned int,
   xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>::RefHashTableOf(unsigned
   int, bool, xercesc_2_7::HashBase*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>::
     RefHashTableOf(uint param_1,bool param_2,HashBase *param_3,MemoryManager *param_4)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned int>>::RefHashTableOf(unsigned
   int, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>>::RefHashTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::RefHashTableOf(unsigned
   int, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::
     RefHashTableOf(uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::ValueVectorOf(unsigned int,
   xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::~RefHashTableOf() */

void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>::~RefHashTableOf()
    */

void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__DOMElement___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned int>>::~RefHashTableOf() */

void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>>::_RefHashTableOf
          (RefHashTableOf_xercesc_2_7__ValueVectorOf_unsigned_int__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::~RefHashTableOf()
    */

void __thiscall
xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::
_RefHashTableOf(RefHashTableOf_xercesc_2_7__ValueVectorOf_xercesc_2_7__SchemaElementDecl___ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement const*>::~ValueVectorOf() */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement_const*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__DOMElement_const__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::~RefHash2KeysTableOf() */

void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_xercesc_2_7__IdentityConstraint_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableOf<unsigned short>::~RefHash2KeysTableOf() */

void __thiscall
xercesc_2_7::RefHash2KeysTableOf<unsigned_short>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_unsigned_short_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::~ValueVectorOf() */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__DOMNode__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::~RefHash2KeysTableOf() */

void __thiscall
xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::_RefHash2KeysTableOf
          (RefHash2KeysTableOf_xercesc_2_7__SchemaInfo_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::RefHashTableOf(unsigned int, bool,
   xercesc_2_7::HashBase*, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::SchemaInfo>::RefHashTableOf
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
/* xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::RefHash2KeysTableOf(unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>::RefHash2KeysTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::ValueVectorOf(unsigned int,
   xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMNode*>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::IdentityConstraint>::~RefVectorOf() */

void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::IdentityConstraint>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__IdentityConstraint_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf(xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>
   const&) */

void xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>::ValueVectorOf
               (ValueVectorOf *param_1)

{
  undefined8 in_RDI;
  
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
/* xercesc_2_7::ArrayJanitor<unsigned short>::ArrayJanitor(unsigned short*,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::ArrayJanitor<unsigned_short>::ArrayJanitor(ushort *param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::~ValueVectorOf() */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__XercesAttGroupInfo__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::ValueVectorOf(unsigned int,
   xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueVectorOf<xercesc_2_7::XercesAttGroupInfo*>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::_Janitor(Janitor_xercesc_2_7__SchemaAttDef_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::Janitor(xercesc_2_7::SchemaAttDef*) */

void xercesc_2_7::Janitor<xercesc_2_7::SchemaAttDef>::Janitor(SchemaAttDef *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::_Janitor(Janitor_xercesc_2_7__IC_KeyRef_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::Janitor(xercesc_2_7::IC_KeyRef*) */

void xercesc_2_7::Janitor<xercesc_2_7::IC_KeyRef>::Janitor(IC_KeyRef *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::_Janitor(Janitor_xercesc_2_7__IC_Unique_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::Janitor(xercesc_2_7::IC_Unique*) */

void xercesc_2_7::Janitor<xercesc_2_7::IC_Unique>::Janitor(IC_Unique *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::_Janitor(Janitor_xercesc_2_7__IC_Key_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::Janitor(xercesc_2_7::IC_Key*) */

void xercesc_2_7::Janitor<xercesc_2_7::IC_Key>::Janitor(IC_Key *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::RefHash2KeysTableOf(unsigned
   int, bool, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>::RefHash2KeysTableOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>>::_Janitor
          (Janitor_xercesc_2_7__RefVectorOf_xercesc_2_7__DatatypeValidator__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>>::Janitor(xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>*)
    */

void xercesc_2_7::Janitor<xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>>::Janitor
               (RefVectorOf *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>::RefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>::RefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefArrayVectorOf<unsigned short>::RefArrayVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefArrayVectorOf<unsigned_short>::RefArrayVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::RefHashTableOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::KVStringPair>::RefHashTableOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorOf<unsigned short>::~BaseRefVectorOf() */

void __thiscall
xercesc_2_7::BaseRefVectorOf<unsigned_short>::_BaseRefVectorOf
          (BaseRefVectorOf_unsigned_short_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<unsigned int>::~ValueVectorOf() */

void __thiscall
xercesc_2_7::ValueVectorOf<unsigned_int>::_ValueVectorOf(ValueVectorOf_unsigned_int_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<unsigned int>::ValueVectorOf(unsigned int,
   xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueVectorOf<unsigned_int>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaInfo>::~RefVectorOf() */

void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaInfo>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaInfo_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::_Janitor(Janitor_xercesc_2_7__XSAnnotation_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::Janitor(xercesc_2_7::XSAnnotation*) */

void xercesc_2_7::Janitor<xercesc_2_7::XSAnnotation>::Janitor(XSAnnotation *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHash2KeysTableOf<unsigned short>::RefHash2KeysTableOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHash2KeysTableOf<unsigned_short>::RefHash2KeysTableOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::XMLSchemaDescription>::~Janitor() */

void __thiscall
xercesc_2_7::Janitor<xercesc_2_7::XMLSchemaDescription>::_Janitor
          (Janitor_xercesc_2_7__XMLSchemaDescription_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::Janitor<xercesc_2_7::XMLSchemaDescription>::Janitor(xercesc_2_7::XMLSchemaDescription*)
    */

void xercesc_2_7::Janitor<xercesc_2_7::XMLSchemaDescription>::Janitor(XMLSchemaDescription *param_1)

{
  undefined8 in_RDI;
  
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
/* xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::RefHash2KeysTableOf(unsigned
   int, xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>>::
     RefHash2KeysTableOf(uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::RefHashTableOf(unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::XMLAttDef>::RefHashTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::RefHashTableOf(unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>::RefHashTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::RefHashTableOf(unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::XercesGroupInfo>::RefHashTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::RefHashTableOf(unsigned int,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefHashTableOf<xercesc_2_7::ComplexTypeInfo>::RefHashTableOf
               (uint param_1,MemoryManager *param_2)

{
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::JanitorMemFunCall<xercesc_2_7::TraverseSchema>::~JanitorMemFunCall() */

void __thiscall
xercesc_2_7::JanitorMemFunCall<xercesc_2_7::TraverseSchema>::_JanitorMemFunCall
          (JanitorMemFunCall_xercesc_2_7__TraverseSchema_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::JanitorMemFunCall<xercesc_2_7::TraverseSchema>::JanitorMemFunCall(xercesc_2_7::TraverseSchema*,
   void (xercesc_2_7::TraverseSchema::*)()) */

void xercesc_2_7::JanitorMemFunCall<xercesc_2_7::TraverseSchema>::JanitorMemFunCall
               (TraverseSchema *param_1,FuncDef2 *param_2)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaAttDef>::RefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaAttDef>::RefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::~ValueVectorOf() */

void __thiscall
xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>::_ValueVectorOf
          (ValueVectorOf_xercesc_2_7__DOMElement__ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<unsigned short const*>::ValueVectorOf(unsigned int,
   xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueVectorOf<unsigned_short_const*>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement const*>::ValueVectorOf(unsigned int,
   xercesc_2_7::MemoryManager*, bool) */

void xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement_const*>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaInfo>::RefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaInfo>::RefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<int>::ValueVectorOf(unsigned int, xercesc_2_7::MemoryManager*, bool)
    */

void xercesc_2_7::ValueVectorOf<int>::ValueVectorOf
               (uint param_1,MemoryManager *param_2,bool param_3)

{
  undefined in_DL;
  undefined8 in_RSI;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::~BaseRefVectorEnumerator() */

void __thiscall
xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::_BaseRefVectorEnumerator
          (BaseRefVectorEnumerator_xercesc_2_7__SchemaInfo_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::BaseRefVectorEnumerator(xercesc_2_7::BaseRefVectorOf<xercesc_2_7::SchemaInfo>*,
   bool) */

void xercesc_2_7::BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>::BaseRefVectorEnumerator
               (BaseRefVectorOf *param_1,bool param_2)

{
  undefined in_SIL;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaAttDef>::~RefVectorOf() */

void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaAttDef>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__SchemaAttDef_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::IdentityConstraint>::RefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefVectorOf<xercesc_2_7::IdentityConstraint>::RefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::IC_Field>::RefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefVectorOf<xercesc_2_7::IC_Field>::RefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaElementDecl>::RefVectorOf(unsigned int, bool,
   xercesc_2_7::MemoryManager*) */

void xercesc_2_7::RefVectorOf<xercesc_2_7::SchemaElementDecl>::RefVectorOf
               (uint param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RDX;
  undefined in_SIL;
  undefined4 in_EDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ValueVectorOf<unsigned int>::ValueVectorOf(xercesc_2_7::ValueVectorOf<unsigned int>
   const&) */

void xercesc_2_7::ValueVectorOf<unsigned_int>::ValueVectorOf(ValueVectorOf *param_1)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>::~RefVectorOf() */

void __thiscall
xercesc_2_7::RefVectorOf<xercesc_2_7::DatatypeValidator>::_RefVectorOf
          (RefVectorOf_xercesc_2_7__DatatypeValidator_ *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::RefArrayVectorOf<unsigned short>::~RefArrayVectorOf() */

void __thiscall
xercesc_2_7::RefArrayVectorOf<unsigned_short>::_RefArrayVectorOf
          (RefArrayVectorOf_unsigned_short_ *this)

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
/* xercesc_2_7::XSDLocator::~XSDLocator() */

void __thiscall xercesc_2_7::XSDLocator::_XSDLocator(XSDLocator *this)

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
/* xercesc_2_7::DTDEntityDecl::~DTDEntityDecl() */

void __thiscall xercesc_2_7::DTDEntityDecl::_DTDEntityDecl(DTDEntityDecl *this)

{
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
/* xercesc_2_7::XPathScanner::~XPathScanner() */

void __thiscall xercesc_2_7::XPathScanner::_XPathScanner(XPathScanner *this)

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
/* xercesc_2_7::XSDErrorReporter::~XSDErrorReporter() */

void __thiscall xercesc_2_7::XSDErrorReporter::_XSDErrorReporter(XSDErrorReporter *this)

{
  undefined8 in_RDI;
  
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
/* xercesc_2_7::ContentSpecNode::~ContentSpecNode() */

void __thiscall xercesc_2_7::ContentSpecNode::_ContentSpecNode(ContentSpecNode *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ContentSpecNode::ContentSpecNode(xercesc_2_7::ContentSpecNode::NodeTypes,
   xercesc_2_7::ContentSpecNode*, xercesc_2_7::ContentSpecNode*, bool, bool,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,NodeTypes param_1,ContentSpecNode *param_2,ContentSpecNode *param_3
          ,bool param_4,bool param_5,MemoryManager *param_6)

{
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined4 in_ESI;
  undefined8 in_RDI;
  undefined in_R8B;
  undefined in_R9B;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ContentSpecNode::ContentSpecNode(xercesc_2_7::QName*, bool,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,QName *param_1,bool param_2,MemoryManager *param_3)

{
  undefined8 in_RCX;
  undefined in_DL;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::ContentSpecNode::ContentSpecNode(xercesc_2_7::XMLElementDecl*,
   xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,XMLElementDecl *param_1,MemoryManager *param_2)

{
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::XSerializable::XSerializable() */

void __thiscall xercesc_2_7::XSerializable::XSerializable(XSerializable *this)

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
/* xercesc_2_7::NullPointerException::~NullPointerException() */

void __thiscall xercesc_2_7::NullPointerException::_NullPointerException(NullPointerException *this)

{
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::NullPointerException::NullPointerException(xercesc_2_7::NullPointerException const&)
    */

void __thiscall
xercesc_2_7::NullPointerException::NullPointerException
          (NullPointerException *this,NullPointerException *param_1)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* xercesc_2_7::NullPointerException::NullPointerException(char const*, unsigned int,
   xercesc_2_7::XMLExcepts::Codes, xercesc_2_7::MemoryManager*) */

void __thiscall
xercesc_2_7::NullPointerException::NullPointerException
          (NullPointerException *this,char *param_1,uint param_2,Codes param_3,
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

