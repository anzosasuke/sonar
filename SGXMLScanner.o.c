typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined6;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef ulong size_t;

typedef struct RefVectorOf RefVectorOf, *PRefVectorOf;

struct RefVectorOf { // PlaceHolder Structure
};

typedef struct RefHashTableBucketElem RefHashTableBucketElem, *PRefHashTableBucketElem;

struct RefHashTableBucketElem { // PlaceHolder Structure
};

typedef struct LocalFileInputSource LocalFileInputSource, *PLocalFileInputSource;

struct LocalFileInputSource { // PlaceHolder Structure
};

typedef struct RefHash2KeysTableBucketElem RefHash2KeysTableBucketElem, *PRefHash2KeysTableBucketElem;

struct RefHash2KeysTableBucketElem { // PlaceHolder Structure
};

typedef struct RefHash3KeysTableBucketElem RefHash3KeysTableBucketElem, *PRefHash3KeysTableBucketElem;

struct RefHash3KeysTableBucketElem { // PlaceHolder Structure
};

typedef struct HashPtr HashPtr, *PHashPtr;

struct HashPtr { // PlaceHolder Structure
};

typedef struct ArrayJanitor<unsigned_short> ArrayJanitor<unsigned_short>, *PArrayJanitor<unsigned_short>;

struct ArrayJanitor<unsigned_short> { // PlaceHolder Structure
};

typedef struct Janitor<xercesc_2_7::BaseRefVectorOf<unsigned_short>> Janitor<xercesc_2_7::BaseRefVectorOf<unsigned_short>>, *PJanitor<xercesc_2_7::BaseRefVectorOf<unsigned_short>>;

struct Janitor<xercesc_2_7::BaseRefVectorOf<unsigned_short>> { // PlaceHolder Structure
};

typedef struct BaseRefVectorOf BaseRefVectorOf, *PBaseRefVectorOf;

struct BaseRefVectorOf { // PlaceHolder Structure
};

typedef struct URLInputSource URLInputSource, *PURLInputSource;

struct URLInputSource { // PlaceHolder Structure
};

typedef struct ValueHashTableBucketElem ValueHashTableBucketElem, *PValueHashTableBucketElem;

struct ValueHashTableBucketElem { // PlaceHolder Structure
};

typedef struct HashXMLCh HashXMLCh, *PHashXMLCh;

struct HashXMLCh { // PlaceHolder Structure
};

typedef struct ValueHashTableOf<unsigned_short> ValueHashTableOf<unsigned_short>, *PValueHashTableOf<unsigned_short>;

struct ValueHashTableOf<unsigned_short> { // PlaceHolder Structure
};

typedef dword ValSchemes;

typedef undefined __unknown__[32];

typedef longdouble __float128;

typedef struct XMLValidator XMLValidator, *PXMLValidator;

typedef struct XMLBufferMgr XMLBufferMgr, *PXMLBufferMgr;

typedef struct XMLErrorReporter XMLErrorReporter, *PXMLErrorReporter;

typedef struct ReaderMgr ReaderMgr, *PReaderMgr;

typedef struct XMLScanner XMLScanner, *PXMLScanner;

typedef struct MemoryManager MemoryManager, *PMemoryManager;

typedef struct XMLBuffer XMLBuffer, *PXMLBuffer;

typedef struct XMLBufferFullHandler XMLBufferFullHandler, *PXMLBufferFullHandler;

typedef ushort XMLCh;

struct ReaderMgr {
};

struct XMLErrorReporter {
    int (** _vptr.XMLErrorReporter)(...);
};

struct XMLBufferMgr { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fBufCount]
    uint fBufCount;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct MemoryManager * fMemoryManager;
    struct XMLBuffer * * fBufList;
};

struct XMLScanner {
};

struct MemoryManager {
    int (** _vptr.MemoryManager)(...);
};

struct XMLBuffer { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fIndex]
    uint fIndex;
    uint fCapacity;
    uint fFullSize;
    bool fUsed;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    struct MemoryManager * fMemoryManager;
    struct XMLBufferFullHandler * fFullHandler;
    XMLCh * fBuffer;
};

struct XMLBufferFullHandler {
    int (** _vptr.XMLBufferFullHandler)(...);
};

struct XMLValidator { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.XMLValidator]
    int (** _vptr.XMLValidator)(...);
    struct XMLBufferMgr * fBufMgr;
    struct XMLErrorReporter * fErrorReporter;
    struct ReaderMgr * fReaderMgr;
    struct XMLScanner * fScanner;
};

typedef struct DOMNode DOMNode, *PDOMNode;

struct DOMNode {
    int (** _vptr.DOMNode)(...);
};

typedef struct SubstitutionGroupComparator SubstitutionGroupComparator, *PSubstitutionGroupComparator;

typedef struct GrammarResolver GrammarResolver, *PGrammarResolver;

typedef struct XMLStringPool XMLStringPool, *PXMLStringPool;

typedef struct RefHashTableOf<xercesc_2_7::Grammar> RefHashTableOf<xercesc_2_7::Grammar>, *PRefHashTableOf<xercesc_2_7::Grammar>;

typedef struct DatatypeValidatorFactory DatatypeValidatorFactory, *PDatatypeValidatorFactory;

typedef struct XMLGrammarPool XMLGrammarPool, *PXMLGrammarPool;

typedef struct XSModel XSModel, *PXSModel;

typedef struct ValueVectorOf<xercesc_2_7::SchemaGrammar*> ValueVectorOf<xercesc_2_7::SchemaGrammar*>, *PValueVectorOf<xercesc_2_7::SchemaGrammar*>;

typedef struct RefArrayVectorOf<short_unsigned_int> RefArrayVectorOf<short_unsigned_int>, *PRefArrayVectorOf<short_unsigned_int>;

typedef struct RefArrayVectorOf<short_unsigned_int> StringList;

typedef struct RefVectorOf<xercesc_2_7::XSNamespaceItem> RefVectorOf<xercesc_2_7::XSNamespaceItem>, *PRefVectorOf<xercesc_2_7::XSNamespaceItem>;

typedef struct RefVectorOf<xercesc_2_7::XSNamespaceItem> XSNamespaceItemList;

typedef struct RefVectorOf<xercesc_2_7::XSObject> RefVectorOf<xercesc_2_7::XSObject>, *PRefVectorOf<xercesc_2_7::XSObject>;

typedef struct XSNamedMap<xercesc_2_7::XSObject> XSNamedMap<xercesc_2_7::XSObject>, *PXSNamedMap<xercesc_2_7::XSObject>;

typedef struct RefVectorOf<xercesc_2_7::XSAnnotation> RefVectorOf<xercesc_2_7::XSAnnotation>, *PRefVectorOf<xercesc_2_7::XSAnnotation>;

typedef struct RefVectorOf<xercesc_2_7::XSAnnotation> XSAnnotationList;

typedef struct RefHashTableOf<xercesc_2_7::XSNamespaceItem> RefHashTableOf<xercesc_2_7::XSNamespaceItem>, *PRefHashTableOf<xercesc_2_7::XSNamespaceItem>;

typedef struct XSObjectFactory XSObjectFactory, *PXSObjectFactory;

typedef struct BaseRefVectorOf<short_unsigned_int> BaseRefVectorOf<short_unsigned_int>, *PBaseRefVectorOf<short_unsigned_int>;

struct XMLGrammarPool { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.XMLGrammarPool]
    int (** _vptr.XMLGrammarPool)(...);
    struct MemoryManager * fMemMgr;
    bool fIgnoreSerializedAnnotations;
    undefined field3_0x11;
    undefined field4_0x12;
    undefined field5_0x13;
    undefined field6_0x14;
    undefined field7_0x15;
    undefined field8_0x16;
    undefined field9_0x17;
};

struct BaseRefVectorOf<short_unsigned_int> { // Original name: BaseRefVectorOf<short unsigned int>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.BaseRefVectorOf]
    int (** _vptr.BaseRefVectorOf)(...);
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    uint fCurCount;
    uint fMaxCount;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
    ushort * * fElemList;
    struct MemoryManager * fMemoryManager;
};

struct RefArrayVectorOf<short_unsigned_int> { // Original name: RefArrayVectorOf<short unsigned int>
    struct BaseRefVectorOf<short_unsigned_int> super_BaseRefVectorOf<short_unsigned_int>;
};

struct XSObjectFactory {
};

struct RefHashTableOf<xercesc_2_7::Grammar> {
};

struct ValueVectorOf<xercesc_2_7::SchemaGrammar*> {
};

struct RefVectorOf<xercesc_2_7::XSAnnotation> {
};

struct RefVectorOf<xercesc_2_7::XSObject> {
};

struct XMLStringPool {
};

struct DatatypeValidatorFactory {
};

struct SubstitutionGroupComparator { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fGrammarResolver]
    struct GrammarResolver * fGrammarResolver;
    struct XMLStringPool * fStringPool;
};

struct XSModel { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    StringList * fNamespaceStringList;
    XSNamespaceItemList * fXSNamespaceItemList;
    struct RefVectorOf<xercesc_2_7::XSObject> * fIdVector[14];
    struct XSNamedMap<xercesc_2_7::XSObject> * fComponentMap[14];
    struct XMLStringPool * fURIStringPool;
    XSAnnotationList * fXSAnnotationList;
    struct RefHashTableOf<xercesc_2_7::XSNamespaceItem> * fHashNamespace;
    struct XSObjectFactory * fObjFactory;
    struct RefVectorOf<xercesc_2_7::XSNamespaceItem> * fDeleteNamespace;
    struct XSModel * fParent;
    bool fDeleteParent;
    bool fAddedS4SGrammar;
    undefined field13_0x12a;
    undefined field14_0x12b;
    undefined field15_0x12c;
    undefined field16_0x12d;
    undefined field17_0x12e;
    undefined field18_0x12f;
};

struct GrammarResolver { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCacheGrammar]
    bool fCacheGrammar;
    bool fUseCachedGrammar;
    bool fGrammarPoolFromExternalApplication;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct XMLStringPool * fStringPool;
    struct RefHashTableOf<xercesc_2_7::Grammar> * fGrammarBucket;
    struct RefHashTableOf<xercesc_2_7::Grammar> * fGrammarFromPool;
    struct DatatypeValidatorFactory * fDataTypeReg;
    struct MemoryManager * fMemoryManager;
    struct XMLGrammarPool * fGrammarPool;
    struct XSModel * fXSModel;
    struct XSModel * fGrammarPoolXSModel;
    struct ValueVectorOf<xercesc_2_7::SchemaGrammar*> * fGrammarsToAddToXSModel;
};

struct XSNamedMap<xercesc_2_7::XSObject> {
};

struct RefHashTableOf<xercesc_2_7::XSNamespaceItem> {
};

struct RefVectorOf<xercesc_2_7::XSNamespaceItem> {
};

typedef struct DOMDocumentTraversal DOMDocumentTraversal, *PDOMDocumentTraversal;

struct DOMDocumentTraversal {
    int (** _vptr.DOMDocumentTraversal)(...);
};

typedef struct XMLEntityHandler XMLEntityHandler, *PXMLEntityHandler;

struct XMLEntityHandler {
    int (** _vptr.XMLEntityHandler)(...);
};

typedef struct ValueVectorOf<xercesc_2_7::DOMElement*> ValueVectorOf<xercesc_2_7::DOMElement*>, *PValueVectorOf<xercesc_2_7::DOMElement*>;

typedef struct DOMElement DOMElement, *PDOMElement;

struct ValueVectorOf<xercesc_2_7::DOMElement*> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCallDestructor]
    bool fCallDestructor;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    uint fCurCount;
    uint fMaxCount;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    struct DOMElement * * fElemList;
    struct MemoryManager * fMemoryManager;
};

struct DOMElement {
    struct DOMNode super_DOMNode;
};

typedef struct ValueVectorOf<xercesc_2_7::ComplexTypeInfo*> ValueVectorOf<xercesc_2_7::ComplexTypeInfo*>, *PValueVectorOf<xercesc_2_7::ComplexTypeInfo*>;

typedef struct ComplexTypeInfo ComplexTypeInfo, *PComplexTypeInfo;

struct ValueVectorOf<xercesc_2_7::ComplexTypeInfo*> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCallDestructor]
    bool fCallDestructor;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    uint fCurCount;
    uint fMaxCount;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    struct ComplexTypeInfo * * fElemList;
    struct MemoryManager * fMemoryManager;
};

struct ComplexTypeInfo {
};

typedef struct ValueVectorOf<bool> ValueVectorOf<bool>, *PValueVectorOf<bool>;

struct ValueVectorOf<bool> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCallDestructor]
    bool fCallDestructor;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    uint fCurCount;
    uint fMaxCount;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    bool * fElemList;
    struct MemoryManager * fMemoryManager;
};

typedef struct ValueVectorOf<int> ValueVectorOf<int>, *PValueVectorOf<int>;

struct ValueVectorOf<int> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCallDestructor]
    bool fCallDestructor;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    uint fCurCount;
    uint fMaxCount;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    int * fElemList;
    struct MemoryManager * fMemoryManager;
};

typedef struct ValueVectorOf<short_unsigned_int_const*> ValueVectorOf<short_unsigned_int_const*>, *PValueVectorOf<short_unsigned_int_const*>;

struct ValueVectorOf<short_unsigned_int_const*> { // Original name: ValueVectorOf<short unsigned int const*>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCallDestructor]
    bool fCallDestructor;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    uint fCurCount;
    uint fMaxCount;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    ushort * * fElemList;
    struct MemoryManager * fMemoryManager;
};

typedef struct ValueVectorOf<unsigned_int> ValueVectorOf<unsigned_int>, *PValueVectorOf<unsigned_int>;

struct ValueVectorOf<unsigned_int> { // Original name: ValueVectorOf<unsigned int>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCallDestructor]
    bool fCallDestructor;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    uint fCurCount;
    uint fMaxCount;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    uint * fElemList;
    struct MemoryManager * fMemoryManager;
};

typedef struct ValueVectorOf<const_xercesc_2_7::DOMElement*> ValueVectorOf<const_xercesc_2_7::DOMElement*>, *PValueVectorOf<const_xercesc_2_7::DOMElement*>;

struct ValueVectorOf<const_xercesc_2_7::DOMElement*> { // Original name: ValueVectorOf<const xercesc_2_7::DOMElement*>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCallDestructor]
    bool fCallDestructor;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    uint fCurCount;
    uint fMaxCount;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    struct DOMElement * * fElemList;
    struct MemoryManager * fMemoryManager;
};

typedef struct ValueHashTableOf<short_unsigned_int> ValueHashTableOf<short_unsigned_int>, *PValueHashTableOf<short_unsigned_int>;

typedef struct ValueHashTableBucketElem<short_unsigned_int> ValueHashTableBucketElem<short_unsigned_int>, *PValueHashTableBucketElem<short_unsigned_int>;

typedef struct HashBase HashBase, *PHashBase;

struct ValueHashTableOf<short_unsigned_int> { // Original name: ValueHashTableOf<short unsigned int>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    struct ValueHashTableBucketElem<short_unsigned_int> * * fBucketList;
    uint fHashModulus;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
    struct HashBase * fHash;
};

struct ValueHashTableBucketElem<short_unsigned_int> { // Original name: ValueHashTableBucketElem<short unsigned int>
    ushort fData;
    undefined field1_0x2;
    undefined field2_0x3;
    undefined field3_0x4;
    undefined field4_0x5;
    undefined field5_0x6;
    undefined field6_0x7;
    struct ValueHashTableBucketElem<short_unsigned_int> * fNext;
    void * fKey;
};

struct HashBase { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.HashBase]
    int (** _vptr.HashBase)(...);
};

typedef struct DTDEntityDecl DTDEntityDecl, *PDTDEntityDecl;

typedef struct XMLEntityDecl XMLEntityDecl, *PXMLEntityDecl;

struct XMLEntityDecl {
};

struct DTDEntityDecl {
    struct XMLEntityDecl super_XMLEntityDecl;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    bool fDeclaredInIntSubset;
    bool fIsParameter;
    bool fIsSpecialChar;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
};

typedef struct TraverseSchema TraverseSchema, *PTraverseSchema;

typedef struct SchemaGrammar SchemaGrammar, *PSchemaGrammar;

typedef struct NamespaceScope NamespaceScope, *PNamespaceScope;

typedef struct RefHashTableOf<xercesc_2_7::XMLAttDef> RefHashTableOf<xercesc_2_7::XMLAttDef>, *PRefHashTableOf<xercesc_2_7::XMLAttDef>;

typedef struct RefHashTableOf<xercesc_2_7::ComplexTypeInfo> RefHashTableOf<xercesc_2_7::ComplexTypeInfo>, *PRefHashTableOf<xercesc_2_7::ComplexTypeInfo>;

typedef struct RefHashTableOf<xercesc_2_7::XercesGroupInfo> RefHashTableOf<xercesc_2_7::XercesGroupInfo>, *PRefHashTableOf<xercesc_2_7::XercesGroupInfo>;

typedef struct RefHashTableOf<xercesc_2_7::XercesAttGroupInfo> RefHashTableOf<xercesc_2_7::XercesAttGroupInfo>, *PRefHashTableOf<xercesc_2_7::XercesAttGroupInfo>;

typedef struct RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_> RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>, *PRefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>;

typedef struct RefHashTableOf<xercesc_2_7::SchemaInfo> RefHashTableOf<xercesc_2_7::SchemaInfo>, *PRefHashTableOf<xercesc_2_7::SchemaInfo>;

typedef struct SchemaInfo SchemaInfo, *PSchemaInfo;

typedef struct XercesGroupInfo XercesGroupInfo, *PXercesGroupInfo;

typedef struct XercesAttGroupInfo XercesAttGroupInfo, *PXercesAttGroupInfo;

typedef struct ValueVectorOf<xercesc_2_7::SchemaElementDecl*> ValueVectorOf<xercesc_2_7::SchemaElementDecl*>, *PValueVectorOf<xercesc_2_7::SchemaElementDecl*>;

typedef struct ValueVectorOf<xercesc_2_7::DOMNode*> ValueVectorOf<xercesc_2_7::DOMNode*>, *PValueVectorOf<xercesc_2_7::DOMNode*>;

typedef struct RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_> RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>, *PRefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_>;

typedef struct RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_> RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>, *PRefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_>;

typedef struct RefHash2KeysTableOf<short_unsigned_int> RefHash2KeysTableOf<short_unsigned_int>, *PRefHash2KeysTableOf<short_unsigned_int>;

typedef struct RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint> RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>, *PRefHash2KeysTableOf<xercesc_2_7::IdentityConstraint>;

typedef struct RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_> RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>, *PRefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_>;

typedef struct RefHash2KeysTableOf<xercesc_2_7::SchemaInfo> RefHash2KeysTableOf<xercesc_2_7::SchemaInfo>, *PRefHash2KeysTableOf<xercesc_2_7::SchemaInfo>;

typedef struct XSDDOMParser XSDDOMParser, *PXSDDOMParser;

typedef struct XSDErrorReporter XSDErrorReporter, *PXSDErrorReporter;

typedef struct XSDLocator XSDLocator, *PXSDLocator;

typedef struct XSAnnotation XSAnnotation, *PXSAnnotation;

typedef struct GeneralAttributeCheck GeneralAttributeCheck, *PGeneralAttributeCheck;

typedef struct RefHashTableBucketElem<xercesc_2_7::XMLAttDef> RefHashTableBucketElem<xercesc_2_7::XMLAttDef>, *PRefHashTableBucketElem<xercesc_2_7::XMLAttDef>;

typedef struct RefVectorOf<xercesc_2_7::SchemaInfo> RefVectorOf<xercesc_2_7::SchemaInfo>, *PRefVectorOf<xercesc_2_7::SchemaInfo>;

typedef struct ValidationContext ValidationContext, *PValidationContext;

typedef struct XMemory XMemory, *PXMemory;

typedef long XMLSSize_t;

typedef struct IDDatatypeValidator IDDatatypeValidator, *PIDDatatypeValidator;

typedef struct XMLAttDef XMLAttDef, *PXMLAttDef;

typedef struct BaseRefVectorOf<xercesc_2_7::SchemaInfo> BaseRefVectorOf<xercesc_2_7::SchemaInfo>, *PBaseRefVectorOf<xercesc_2_7::SchemaInfo>;

struct BaseRefVectorOf<xercesc_2_7::SchemaInfo> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.BaseRefVectorOf]
    int (** _vptr.BaseRefVectorOf)(...);
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    uint fCurCount;
    uint fMaxCount;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
    struct SchemaInfo * * fElemList;
    struct MemoryManager * fMemoryManager;
};

struct RefHashTableOf<xercesc_2_7::SchemaInfo> {
};

struct RefHash2KeysTableOf<short_unsigned_int> { // Original name: RefHash2KeysTableOf<short unsigned int>
};

struct RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint> {
};

struct XSDErrorReporter { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.XSDErrorReporter]
    int (** _vptr.XSDErrorReporter)(...);
    bool fExitOnFirstFatal;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct XMLErrorReporter * fErrorReporter;
};

struct RefHash2KeysTableOf<xercesc_2_7::SchemaInfo> {
};

struct XMemory {
    undefined field0_0x0;
};

struct XSDLocator { // Missing member super_Locator : Locator at offset 0x0 [conflict with super_XMemory]
    struct XMemory super_XMemory;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    XMLSSize_t fLineNo;
    XMLSSize_t fColumnNo;
    XMLCh * fSystemId;
    XMLCh * fPublicId;
};

struct XSAnnotation {
};

struct SchemaGrammar {
};

struct RefHashTableOf<xercesc_2_7::XercesGroupInfo> {
};

struct RefHashTableBucketElem<xercesc_2_7::XMLAttDef> {
    struct XMLAttDef * fData;
    struct RefHashTableBucketElem<xercesc_2_7::XMLAttDef> * fNext;
    void * fKey;
};

struct RefHashTableOf<xercesc_2_7::XMLAttDef> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHashTableBucketElem<xercesc_2_7::XMLAttDef> * * fBucketList;
    uint fHashModulus;
    uint fInitialModulus;
    uint fCount;
    undefined field13_0x24;
    undefined field14_0x25;
    undefined field15_0x26;
    undefined field16_0x27;
    struct HashBase * fHash;
};

struct XercesAttGroupInfo {
};

struct RefHashTableOf<xercesc_2_7::ComplexTypeInfo> {
};

struct IDDatatypeValidator {
};

struct GeneralAttributeCheck { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    struct ValidationContext * fValidationContext;
    struct IDDatatypeValidator fIDValidator;
    undefined field3_0x11;
    undefined field4_0x12;
    undefined field5_0x13;
    undefined field6_0x14;
    undefined field7_0x15;
    undefined field8_0x16;
    undefined field9_0x17;
    undefined field10_0x18;
    undefined field11_0x19;
    undefined field12_0x1a;
    undefined field13_0x1b;
    undefined field14_0x1c;
    undefined field15_0x1d;
    undefined field16_0x1e;
    undefined field17_0x1f;
    undefined field18_0x20;
    undefined field19_0x21;
    undefined field20_0x22;
    undefined field21_0x23;
    undefined field22_0x24;
    undefined field23_0x25;
    undefined field24_0x26;
    undefined field25_0x27;
    undefined field26_0x28;
    undefined field27_0x29;
    undefined field28_0x2a;
    undefined field29_0x2b;
    undefined field30_0x2c;
    undefined field31_0x2d;
    undefined field32_0x2e;
    undefined field33_0x2f;
    undefined field34_0x30;
    undefined field35_0x31;
    undefined field36_0x32;
    undefined field37_0x33;
    undefined field38_0x34;
    undefined field39_0x35;
    undefined field40_0x36;
    undefined field41_0x37;
    undefined field42_0x38;
    undefined field43_0x39;
    undefined field44_0x3a;
    undefined field45_0x3b;
    undefined field46_0x3c;
    undefined field47_0x3d;
    undefined field48_0x3e;
    undefined field49_0x3f;
    undefined field50_0x40;
    undefined field51_0x41;
    undefined field52_0x42;
    undefined field53_0x43;
    undefined field54_0x44;
    undefined field55_0x45;
    undefined field56_0x46;
    undefined field57_0x47;
    undefined field58_0x48;
    undefined field59_0x49;
    undefined field60_0x4a;
    undefined field61_0x4b;
    undefined field62_0x4c;
    undefined field63_0x4d;
    undefined field64_0x4e;
    undefined field65_0x4f;
    undefined field66_0x50;
    undefined field67_0x51;
    undefined field68_0x52;
    undefined field69_0x53;
    undefined field70_0x54;
    undefined field71_0x55;
    undefined field72_0x56;
    undefined field73_0x57;
    undefined field74_0x58;
    undefined field75_0x59;
    undefined field76_0x5a;
    undefined field77_0x5b;
    undefined field78_0x5c;
    undefined field79_0x5d;
    undefined field80_0x5e;
    undefined field81_0x5f;
    undefined field82_0x60;
    undefined field83_0x61;
    undefined field84_0x62;
    undefined field85_0x63;
    undefined field86_0x64;
    undefined field87_0x65;
    undefined field88_0x66;
    undefined field89_0x67;
    undefined field90_0x68;
    undefined field91_0x69;
    undefined field92_0x6a;
    undefined field93_0x6b;
    undefined field94_0x6c;
    undefined field95_0x6d;
    undefined field96_0x6e;
    undefined field97_0x6f;
    undefined field98_0x70;
    undefined field99_0x71;
    undefined field100_0x72;
    undefined field101_0x73;
    undefined field102_0x74;
    undefined field103_0x75;
    undefined field104_0x76;
    undefined field105_0x77;
    undefined field106_0x78;
    undefined field107_0x79;
    undefined field108_0x7a;
    undefined field109_0x7b;
    undefined field110_0x7c;
    undefined field111_0x7d;
    undefined field112_0x7e;
    undefined field113_0x7f;
    undefined field114_0x80;
    undefined field115_0x81;
    undefined field116_0x82;
    undefined field117_0x83;
    undefined field118_0x84;
    undefined field119_0x85;
    undefined field120_0x86;
    undefined field121_0x87;
    undefined field122_0x88;
    undefined field123_0x89;
    undefined field124_0x8a;
    undefined field125_0x8b;
    undefined field126_0x8c;
    undefined field127_0x8d;
    undefined field128_0x8e;
    undefined field129_0x8f;
};

struct TraverseSchema { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fFullConstraintChecking]
    bool fFullConstraintChecking;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    int fTargetNSURI;
    int fEmptyNamespaceURI;
    uint fCurrentScope;
    int fScopeCount;
    uint fAnonXSTypeCount;
    uint fCircularCheckIndex;
    undefined field10_0x1c;
    undefined field11_0x1d;
    undefined field12_0x1e;
    undefined field13_0x1f;
    XMLCh * fTargetNSURIString;
    struct DatatypeValidatorFactory * fDatatypeRegistry;
    struct GrammarResolver * fGrammarResolver;
    struct SchemaGrammar * fSchemaGrammar;
    struct XMLEntityHandler * fEntityHandler;
    struct XMLErrorReporter * fErrorReporter;
    struct XMLStringPool * fURIStringPool;
    struct XMLStringPool * fStringPool;
    struct XMLBuffer fBuffer;
    struct XMLScanner * fScanner;
    struct NamespaceScope * fNamespaceScope;
    struct RefHashTableOf<xercesc_2_7::XMLAttDef> * fAttributeDeclRegistry;
    struct RefHashTableOf<xercesc_2_7::ComplexTypeInfo> * fComplexTypeRegistry;
    struct RefHashTableOf<xercesc_2_7::XercesGroupInfo> * fGroupRegistry;
    struct RefHashTableOf<xercesc_2_7::XercesAttGroupInfo> * fAttGroupRegistry;
    struct RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_> * fIC_ElementsNS;
    struct RefHashTableOf<xercesc_2_7::SchemaInfo> * fPreprocessedNodes;
    struct SchemaInfo * fSchemaInfo;
    struct XercesGroupInfo * fCurrentGroupInfo;
    struct XercesAttGroupInfo * fCurrentAttGroupInfo;
    struct ComplexTypeInfo * fCurrentComplexType;
    struct ValueVectorOf<unsigned_int> * fCurrentTypeNameStack;
    struct ValueVectorOf<unsigned_int> * fCurrentGroupStack;
    struct ValueVectorOf<unsigned_int> * fIC_NamespaceDepth;
    struct ValueVectorOf<xercesc_2_7::SchemaElementDecl*> * fIC_Elements;
    struct ValueVectorOf<const_xercesc_2_7::DOMElement*> * fDeclStack;
    struct ValueVectorOf<unsigned_int> * * fGlobalDeclarations;
    struct ValueVectorOf<xercesc_2_7::DOMNode*> * fNonXSAttList;
    struct RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_> * fIC_NodeListNS;
    struct RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_> * fIC_NamespaceDepthNS;
    struct RefHash2KeysTableOf<short_unsigned_int> * fNotationRegistry;
    struct RefHash2KeysTableOf<short_unsigned_int> * fRedefineComponents;
    struct RefHash2KeysTableOf<xercesc_2_7::IdentityConstraint> * fIdentityConstraintNames;
    struct RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_> * fValidSubstitutionGroups;
    struct RefHash2KeysTableOf<xercesc_2_7::SchemaInfo> * fSchemaInfoList;
    struct XSDDOMParser * fParser;
    struct XSDErrorReporter fXSDErrorReporter;
    struct XSDLocator * fLocator;
    struct MemoryManager * fMemoryManager;
    struct MemoryManager * fGrammarPoolMemoryManager;
    struct XSAnnotation * fAnnotation;
    struct GeneralAttributeCheck fAttributeCheck;
};

struct SchemaInfo { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fAdoptInclude]
    bool fAdoptInclude;
    bool fProcessed;
    ushort fElemAttrDefaultQualified;
    int fBlockDefault;
    int fFinalDefault;
    int fTargetNSURI;
    int fScopeCount;
    uint fNamespaceScopeLevel;
    XMLCh * fCurrentSchemaURL;
    XMLCh * fTargetNSURIString;
    struct DOMElement * fSchemaRootElement;
    struct RefVectorOf<xercesc_2_7::SchemaInfo> * fIncludeInfoList;
    struct RefVectorOf<xercesc_2_7::SchemaInfo> * fImportedInfoList;
    struct RefVectorOf<xercesc_2_7::SchemaInfo> * fImportingInfoList;
    struct ValueVectorOf<const_xercesc_2_7::DOMElement*> * fFailedRedefineList;
    struct ValueVectorOf<int> * fImportedNSList;
    struct ValueVectorOf<const_xercesc_2_7::DOMElement*> * fRecursingAnonTypes;
    struct ValueVectorOf<short_unsigned_int_const*> * fRecursingTypeNames;
    struct ValueVectorOf<xercesc_2_7::DOMElement*> * fTopLevelComponents[7];
    struct ValueVectorOf<xercesc_2_7::DOMNode*> * fNonXSAttList;
    struct ValidationContext * fValidationContext;
    struct MemoryManager * fMemoryManager;
};

struct NamespaceScope {
};

struct RefHashTableOf<xercesc_2_7::XercesAttGroupInfo> {
};

struct RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*>_> { // Original name: RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::DOMElement*> >
};

struct XMLAttDef {
};

struct RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_> { // Original name: RefHash2KeysTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*> >
};

struct XSDDOMParser {
};

struct ValidationContext { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.ValidationContext]
    int (** _vptr.ValidationContext)(...);
    struct MemoryManager * fMemoryManager;
};

struct ValueVectorOf<xercesc_2_7::SchemaElementDecl*> {
};

struct XercesGroupInfo {
};

struct RefVectorOf<xercesc_2_7::SchemaInfo> {
    struct BaseRefVectorOf<xercesc_2_7::SchemaInfo> super_BaseRefVectorOf<xercesc_2_7::SchemaInfo>;
};

struct RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*>_> { // Original name: RefHashTableOf<xercesc_2_7::ValueVectorOf<xercesc_2_7::SchemaElementDecl*> >
};

struct RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned_int>_> { // Original name: RefHashTableOf<xercesc_2_7::ValueVectorOf<unsigned int> >
};

struct ValueVectorOf<xercesc_2_7::DOMNode*> {
};

typedef struct MalformedURLException MalformedURLException, *PMalformedURLException;

typedef struct XMLException XMLException, *PXMLException;

struct XMLException {
};

struct MalformedURLException {
    struct XMLException super_XMLException;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
};

typedef uint XMLUInt32;

typedef struct XMLAttDefList XMLAttDefList, *PXMLAttDefList;

typedef struct XSerializable XSerializable, *PXSerializable;

struct XSerializable {
    int (** _vptr.XSerializable)(...);
};

struct XMLAttDefList { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with super_XSerializable]
    struct XSerializable super_XSerializable;
    struct MemoryManager * fMemoryManager;
};

typedef struct XMLRefInfo XMLRefInfo, *PXMLRefInfo;

struct XMLRefInfo { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with super_XSerializable]
    struct XSerializable super_XSerializable;
    bool fDeclared;
    bool fUsed;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    XMLCh * fRefName;
    struct MemoryManager * fMemoryManager;
};

typedef struct ThrowEOEJanitor ThrowEOEJanitor, *PThrowEOEJanitor;

struct ThrowEOEJanitor {
    bool fOld;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct ReaderMgr * fMgr;
};

typedef struct LastExtEntityInfo LastExtEntityInfo, *PLastExtEntityInfo;

struct LastExtEntityInfo { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with systemId]
    XMLCh * systemId;
    XMLCh * publicId;
    XMLSSize_t lineNumber;
    XMLSSize_t colNumber;
};

typedef struct ValueStoreCache ValueStoreCache, *PValueStoreCache;

typedef struct RefVectorOf<xercesc_2_7::ValueStore> RefVectorOf<xercesc_2_7::ValueStore>, *PRefVectorOf<xercesc_2_7::ValueStore>;

typedef struct RefHashTableOf<xercesc_2_7::ValueStore> RefHashTableOf<xercesc_2_7::ValueStore>, *PRefHashTableOf<xercesc_2_7::ValueStore>;

typedef struct RefHash2KeysTableOf<xercesc_2_7::ValueStore> RefHash2KeysTableOf<xercesc_2_7::ValueStore>, *PRefHash2KeysTableOf<xercesc_2_7::ValueStore>;

typedef struct RefStackOf<xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueStore>_> RefStackOf<xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueStore>_>, *PRefStackOf<xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueStore>_>;

typedef struct RefHashTableBucketElem<xercesc_2_7::ValueStore> RefHashTableBucketElem<xercesc_2_7::ValueStore>, *PRefHashTableBucketElem<xercesc_2_7::ValueStore>;

typedef struct RefHash2KeysTableBucketElem<xercesc_2_7::ValueStore> RefHash2KeysTableBucketElem<xercesc_2_7::ValueStore>, *PRefHash2KeysTableBucketElem<xercesc_2_7::ValueStore>;

typedef struct ValueStore ValueStore, *PValueStore;

struct RefStackOf<xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueStore>_> { // Original name: RefStackOf<xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueStore> >
};

struct RefVectorOf<xercesc_2_7::ValueStore> {
};

struct ValueStore {
};

struct RefHash2KeysTableOf<xercesc_2_7::ValueStore> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHash2KeysTableBucketElem<xercesc_2_7::ValueStore> * * fBucketList;
    uint fHashModulus;
    uint fCount;
    struct HashBase * fHash;
};

struct RefHashTableOf<xercesc_2_7::ValueStore> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHashTableBucketElem<xercesc_2_7::ValueStore> * * fBucketList;
    uint fHashModulus;
    uint fInitialModulus;
    uint fCount;
    undefined field13_0x24;
    undefined field14_0x25;
    undefined field15_0x26;
    undefined field16_0x27;
    struct HashBase * fHash;
};

struct RefHashTableBucketElem<xercesc_2_7::ValueStore> {
    struct ValueStore * fData;
    struct RefHashTableBucketElem<xercesc_2_7::ValueStore> * fNext;
    void * fKey;
};

struct ValueStoreCache { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fValueStores]
    struct RefVectorOf<xercesc_2_7::ValueStore> * fValueStores;
    struct RefHashTableOf<xercesc_2_7::ValueStore> * fGlobalICMap;
    struct RefHash2KeysTableOf<xercesc_2_7::ValueStore> * fIC2ValueStoreMap;
    struct RefStackOf<xercesc_2_7::RefHashTableOf<xercesc_2_7::ValueStore>_> * fGlobalMapStack;
    struct XMLScanner * fScanner;
    struct MemoryManager * fMemoryManager;
};

struct RefHash2KeysTableBucketElem<xercesc_2_7::ValueStore> {
    struct ValueStore * fData;
    struct RefHash2KeysTableBucketElem<xercesc_2_7::ValueStore> * fNext;
    void * fKey1;
    int fKey2;
    undefined field4_0x1c;
    undefined field5_0x1d;
    undefined field6_0x1e;
    undefined field7_0x1f;
};

typedef struct XMLDeleter XMLDeleter, *PXMLDeleter;

struct XMLDeleter {
    int (** _vptr.XMLDeleter)(...);
};

typedef enum ContextType {
    CONTEXT_INCLUDE=0,
    CONTEXT_REDEFINE=1,
    CONTEXT_IMPORT=2,
    CONTEXT_PREPARSE=3,
    CONTEXT_INSTANCE=4,
    CONTEXT_ELEMENT=5,
    CONTEXT_ATTRIBUTE=6,
    CONTEXT_XSITYPE=7,
    CONTEXT_UNKNOWN=8
} ContextType;

typedef struct PrefMapElem PrefMapElem, *PPrefMapElem;

struct PrefMapElem { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fPrefId]
    uint fPrefId;
    uint fURIId;
};

typedef struct ElemStack ElemStack, *PElemStack;

typedef struct StackElem StackElem, *PStackElem;

typedef struct ValueVectorOf<xercesc_2_7::PrefMapElem*> ValueVectorOf<xercesc_2_7::PrefMapElem*>, *PValueVectorOf<xercesc_2_7::PrefMapElem*>;

typedef struct XMLElementDecl XMLElementDecl, *PXMLElementDecl;

typedef struct QName QName, *PQName;

typedef struct Grammar Grammar, *PGrammar;

struct ValueVectorOf<xercesc_2_7::PrefMapElem*> {
};

struct ElemStack { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fEmptyNamespaceId]
    uint fEmptyNamespaceId;
    uint fGlobalPoolId;
    struct XMLStringPool fPrefixPool;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
    undefined field26_0x20;
    undefined field27_0x21;
    undefined field28_0x22;
    undefined field29_0x23;
    undefined field30_0x24;
    undefined field31_0x25;
    undefined field32_0x26;
    undefined field33_0x27;
    undefined field34_0x28;
    undefined field35_0x29;
    undefined field36_0x2a;
    undefined field37_0x2b;
    undefined field38_0x2c;
    undefined field39_0x2d;
    undefined field40_0x2e;
    undefined field41_0x2f;
    struct StackElem * * fStack;
    uint fStackCapacity;
    uint fStackTop;
    uint fUnknownNamespaceId;
    uint fXMLNamespaceId;
    uint fXMLPoolId;
    uint fXMLNSNamespaceId;
    uint fXMLNSPoolId;
    undefined field50_0x54;
    undefined field51_0x55;
    undefined field52_0x56;
    undefined field53_0x57;
    struct ValueVectorOf<xercesc_2_7::PrefMapElem*> * fNamespaceMap;
    struct MemoryManager * fMemoryManager;
};

struct QName {
};

struct Grammar {
};

struct StackElem { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fThisElement]
    struct XMLElementDecl * fThisElement;
    uint fReaderNum;
    uint fChildCapacity;
    uint fChildCount;
    undefined field4_0x14;
    undefined field5_0x15;
    undefined field6_0x16;
    undefined field7_0x17;
    struct QName * * fChildren;
    struct PrefMapElem * fMap;
    uint fMapCapacity;
    uint fMapCount;
    bool fValidationFlag;
    bool fCommentOrPISeen;
    bool fReferenceEscaped;
    undefined field15_0x33;
    uint fCurrentScope;
    struct Grammar * fCurrentGrammar;
    uint fCurrentURI;
    undefined field19_0x44;
    undefined field20_0x45;
    undefined field21_0x46;
    undefined field22_0x47;
    XMLCh * fSchemaElemName;
    uint fSchemaElemNameMaxLen;
    int fPrefixColonPos;
};

struct XMLElementDecl {
};

typedef enum MapModes {
    Mode_Attribute=0,
    Mode_Element=1
} MapModes;

typedef enum CreateReasons {
    NoReason=0,
    JustFaultIn=1
} CreateReasons;

typedef enum AttTypes {
    AttTypes_Unknown=-1,
    AttTypes_Min=0,
    CData=0,
    ID=1,
    IDRef=2,
    IDRefs=3,
    Entity=4,
    Entities=5,
    NmToken=6,
    NmTokens=7,
    Notation=8,
    Enumeration=9,
    Simple=10,
    Any_Any=11,
    Any_Other=12,
    Any_List=13,
    AttTypes_Max=13,
    AttTypes_Count=14
} AttTypes;

typedef enum DefAttTypes {
    DefAttTypes_Unknown=-1,
    DefAttTypes_Min=0,
    Default=0,
    Fixed=1,
    Required=2,
    Required_And_Fixed=3,
    Implied=4,
    ProcessContents_Skip=5,
    ProcessContents_Lax=6,
    ProcessContents_Strict=7,
    DefAttTypes_Max=8,
    Prohibited=8,
    DefAttTypes_Count=9
} DefAttTypes;

typedef struct XMLString XMLString, *PXMLString;

struct XMLString {
    undefined field0_0x0;
};

typedef struct SGXMLScanner SGXMLScanner, *PSGXMLScanner;

typedef enum GrammarType {
    DTDGrammarType=0,
    SchemaGrammarType=1,
    UnKnown=2
} GrammarType;

typedef struct RefVectorOf<xercesc_2_7::KVStringPair> RefVectorOf<xercesc_2_7::KVStringPair>, *PRefVectorOf<xercesc_2_7::KVStringPair>;

typedef struct SchemaValidator SchemaValidator, *PSchemaValidator;

typedef struct IdentityConstraintHandler IdentityConstraintHandler, *PIdentityConstraintHandler;

typedef struct RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl> RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>, *PRefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl>;

typedef struct RefHashTableOf<unsigned_int> RefHashTableOf<unsigned_int>, *PRefHashTableOf<unsigned_int>;

typedef struct RefHash2KeysTableOf<unsigned_int> RefHash2KeysTableOf<unsigned_int>, *PRefHash2KeysTableOf<unsigned_int>;

typedef struct PSVIAttributeList PSVIAttributeList, *PPSVIAttributeList;

typedef struct PSVIElement PSVIElement, *PPSVIElement;

typedef struct ValueStackOf<bool> ValueStackOf<bool>, *PValueStackOf<bool>;

typedef struct PSVIElemContext PSVIElemContext, *PPSVIElemContext;

typedef struct BaseRefVectorOf<xercesc_2_7::KVStringPair> BaseRefVectorOf<xercesc_2_7::KVStringPair>, *PBaseRefVectorOf<xercesc_2_7::KVStringPair>;

typedef struct RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl> RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl>, *PRefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl>;

typedef struct SchemaElementDecl SchemaElementDecl, *PSchemaElementDecl;

typedef struct RefHashTableBucketElem<unsigned_int> RefHashTableBucketElem<unsigned_int>, *PRefHashTableBucketElem<unsigned_int>;

typedef struct RefHash2KeysTableBucketElem<unsigned_int> RefHash2KeysTableBucketElem<unsigned_int>, *PRefHash2KeysTableBucketElem<unsigned_int>;

typedef struct RefVectorOf<xercesc_2_7::PSVIAttribute> RefVectorOf<xercesc_2_7::PSVIAttribute>, *PRefVectorOf<xercesc_2_7::PSVIAttribute>;

typedef struct DatatypeValidator DatatypeValidator, *PDatatypeValidator;

typedef struct KVStringPair KVStringPair, *PKVStringPair;

typedef struct BaseRefVectorOf<xercesc_2_7::PSVIAttribute> BaseRefVectorOf<xercesc_2_7::PSVIAttribute>, *PBaseRefVectorOf<xercesc_2_7::PSVIAttribute>;

typedef struct PSVIAttribute PSVIAttribute, *PPSVIAttribute;

typedef struct PSVIItem PSVIItem, *PPSVIItem;

typedef struct XSAttributeDeclaration XSAttributeDeclaration, *PXSAttributeDeclaration;

typedef enum VALIDITY_STATE {
    VALIDITY_NOTKNOWN=0,
    VALIDITY_INVALID=1,
    VALIDITY_VALID=2
} VALIDITY_STATE;

typedef enum ASSESSMENT_TYPE {
    VALIDATION_NONE=0,
    VALIDATION_PARTIAL=1,
    VALIDATION_FULL=2
} ASSESSMENT_TYPE;

typedef struct XSTypeDefinition XSTypeDefinition, *PXSTypeDefinition;

typedef struct XSSimpleTypeDefinition XSSimpleTypeDefinition, *PXSSimpleTypeDefinition;

struct XSTypeDefinition {
};

struct PSVIItem { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.PSVIItem]
    int (** _vptr.PSVIItem)(...);
    struct MemoryManager * fMemoryManager;
    XMLCh * fValidationContext;
    XMLCh * fNormalizedValue;
    XMLCh * fDefaultValue;
    XMLCh * fCanonicalValue;
    enum VALIDITY_STATE fValidityState;
    enum ASSESSMENT_TYPE fAssessmentType;
    bool fIsSpecified;
    undefined field9_0x39;
    undefined field10_0x3a;
    undefined field11_0x3b;
    undefined field12_0x3c;
    undefined field13_0x3d;
    undefined field14_0x3e;
    undefined field15_0x3f;
    struct XSTypeDefinition * fType;
    struct XSSimpleTypeDefinition * fMemberType;
};

struct SchemaElementDecl {
};

struct BaseRefVectorOf<xercesc_2_7::KVStringPair> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.BaseRefVectorOf]
    int (** _vptr.BaseRefVectorOf)(...);
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    uint fCurCount;
    uint fMaxCount;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
    struct KVStringPair * * fElemList;
    struct MemoryManager * fMemoryManager;
};

struct RefHash2KeysTableBucketElem<unsigned_int> { // Original name: RefHash2KeysTableBucketElem<unsigned int>
    uint * fData;
    struct RefHash2KeysTableBucketElem<unsigned_int> * fNext;
    void * fKey1;
    int fKey2;
    undefined field4_0x1c;
    undefined field5_0x1d;
    undefined field6_0x1e;
    undefined field7_0x1f;
};

struct BaseRefVectorOf<xercesc_2_7::PSVIAttribute> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.BaseRefVectorOf]
    int (** _vptr.BaseRefVectorOf)(...);
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    uint fCurCount;
    uint fMaxCount;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
    struct PSVIAttribute * * fElemList;
    struct MemoryManager * fMemoryManager;
};

struct RefVectorOf<xercesc_2_7::PSVIAttribute> {
    struct BaseRefVectorOf<xercesc_2_7::PSVIAttribute> super_BaseRefVectorOf<xercesc_2_7::PSVIAttribute>;
};

struct PSVIElemContext {
    bool fIsSpecified;
    bool fErrorOccurred;
    undefined field2_0x2;
    undefined field3_0x3;
    int fElemDepth;
    int fFullValidationDepth;
    int fNoneValidationDepth;
    struct DatatypeValidator * fCurrentDV;
    struct ComplexTypeInfo * fCurrentTypeInfo;
    XMLCh * fNormalizedValue;
};

struct SGXMLScanner {
    struct XMLScanner super_XMLScanner;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
    undefined field48_0x30;
    undefined field49_0x31;
    undefined field50_0x32;
    undefined field51_0x33;
    undefined field52_0x34;
    undefined field53_0x35;
    undefined field54_0x36;
    undefined field55_0x37;
    undefined field56_0x38;
    undefined field57_0x39;
    undefined field58_0x3a;
    undefined field59_0x3b;
    undefined field60_0x3c;
    undefined field61_0x3d;
    undefined field62_0x3e;
    undefined field63_0x3f;
    undefined field64_0x40;
    undefined field65_0x41;
    undefined field66_0x42;
    undefined field67_0x43;
    undefined field68_0x44;
    undefined field69_0x45;
    undefined field70_0x46;
    undefined field71_0x47;
    undefined field72_0x48;
    undefined field73_0x49;
    undefined field74_0x4a;
    undefined field75_0x4b;
    undefined field76_0x4c;
    undefined field77_0x4d;
    undefined field78_0x4e;
    undefined field79_0x4f;
    undefined field80_0x50;
    undefined field81_0x51;
    undefined field82_0x52;
    undefined field83_0x53;
    undefined field84_0x54;
    undefined field85_0x55;
    undefined field86_0x56;
    undefined field87_0x57;
    undefined field88_0x58;
    undefined field89_0x59;
    undefined field90_0x5a;
    undefined field91_0x5b;
    undefined field92_0x5c;
    undefined field93_0x5d;
    undefined field94_0x5e;
    undefined field95_0x5f;
    undefined field96_0x60;
    undefined field97_0x61;
    undefined field98_0x62;
    undefined field99_0x63;
    undefined field100_0x64;
    undefined field101_0x65;
    undefined field102_0x66;
    undefined field103_0x67;
    undefined field104_0x68;
    undefined field105_0x69;
    undefined field106_0x6a;
    undefined field107_0x6b;
    undefined field108_0x6c;
    undefined field109_0x6d;
    undefined field110_0x6e;
    undefined field111_0x6f;
    undefined field112_0x70;
    undefined field113_0x71;
    undefined field114_0x72;
    undefined field115_0x73;
    undefined field116_0x74;
    undefined field117_0x75;
    undefined field118_0x76;
    undefined field119_0x77;
    undefined field120_0x78;
    undefined field121_0x79;
    undefined field122_0x7a;
    undefined field123_0x7b;
    undefined field124_0x7c;
    undefined field125_0x7d;
    undefined field126_0x7e;
    undefined field127_0x7f;
    undefined field128_0x80;
    undefined field129_0x81;
    undefined field130_0x82;
    undefined field131_0x83;
    undefined field132_0x84;
    undefined field133_0x85;
    undefined field134_0x86;
    undefined field135_0x87;
    undefined field136_0x88;
    undefined field137_0x89;
    undefined field138_0x8a;
    undefined field139_0x8b;
    undefined field140_0x8c;
    undefined field141_0x8d;
    undefined field142_0x8e;
    undefined field143_0x8f;
    undefined field144_0x90;
    undefined field145_0x91;
    undefined field146_0x92;
    undefined field147_0x93;
    undefined field148_0x94;
    undefined field149_0x95;
    undefined field150_0x96;
    undefined field151_0x97;
    undefined field152_0x98;
    undefined field153_0x99;
    undefined field154_0x9a;
    undefined field155_0x9b;
    undefined field156_0x9c;
    undefined field157_0x9d;
    undefined field158_0x9e;
    undefined field159_0x9f;
    undefined field160_0xa0;
    undefined field161_0xa1;
    undefined field162_0xa2;
    undefined field163_0xa3;
    undefined field164_0xa4;
    undefined field165_0xa5;
    undefined field166_0xa6;
    undefined field167_0xa7;
    undefined field168_0xa8;
    undefined field169_0xa9;
    undefined field170_0xaa;
    undefined field171_0xab;
    undefined field172_0xac;
    undefined field173_0xad;
    undefined field174_0xae;
    undefined field175_0xaf;
    undefined field176_0xb0;
    undefined field177_0xb1;
    undefined field178_0xb2;
    undefined field179_0xb3;
    undefined field180_0xb4;
    undefined field181_0xb5;
    undefined field182_0xb6;
    undefined field183_0xb7;
    undefined field184_0xb8;
    undefined field185_0xb9;
    undefined field186_0xba;
    undefined field187_0xbb;
    undefined field188_0xbc;
    undefined field189_0xbd;
    undefined field190_0xbe;
    undefined field191_0xbf;
    undefined field192_0xc0;
    undefined field193_0xc1;
    undefined field194_0xc2;
    undefined field195_0xc3;
    undefined field196_0xc4;
    undefined field197_0xc5;
    undefined field198_0xc6;
    undefined field199_0xc7;
    undefined field200_0xc8;
    undefined field201_0xc9;
    undefined field202_0xca;
    undefined field203_0xcb;
    undefined field204_0xcc;
    undefined field205_0xcd;
    undefined field206_0xce;
    undefined field207_0xcf;
    undefined field208_0xd0;
    undefined field209_0xd1;
    undefined field210_0xd2;
    undefined field211_0xd3;
    undefined field212_0xd4;
    undefined field213_0xd5;
    undefined field214_0xd6;
    undefined field215_0xd7;
    undefined field216_0xd8;
    undefined field217_0xd9;
    undefined field218_0xda;
    undefined field219_0xdb;
    undefined field220_0xdc;
    undefined field221_0xdd;
    undefined field222_0xde;
    undefined field223_0xdf;
    undefined field224_0xe0;
    undefined field225_0xe1;
    undefined field226_0xe2;
    undefined field227_0xe3;
    undefined field228_0xe4;
    undefined field229_0xe5;
    undefined field230_0xe6;
    undefined field231_0xe7;
    undefined field232_0xe8;
    undefined field233_0xe9;
    undefined field234_0xea;
    undefined field235_0xeb;
    undefined field236_0xec;
    undefined field237_0xed;
    undefined field238_0xee;
    undefined field239_0xef;
    undefined field240_0xf0;
    undefined field241_0xf1;
    undefined field242_0xf2;
    undefined field243_0xf3;
    undefined field244_0xf4;
    undefined field245_0xf5;
    undefined field246_0xf6;
    undefined field247_0xf7;
    undefined field248_0xf8;
    undefined field249_0xf9;
    undefined field250_0xfa;
    undefined field251_0xfb;
    undefined field252_0xfc;
    undefined field253_0xfd;
    undefined field254_0xfe;
    undefined field255_0xff;
    undefined field256_0x100;
    undefined field257_0x101;
    undefined field258_0x102;
    undefined field259_0x103;
    undefined field260_0x104;
    undefined field261_0x105;
    undefined field262_0x106;
    undefined field263_0x107;
    undefined field264_0x108;
    undefined field265_0x109;
    undefined field266_0x10a;
    undefined field267_0x10b;
    undefined field268_0x10c;
    undefined field269_0x10d;
    undefined field270_0x10e;
    undefined field271_0x10f;
    undefined field272_0x110;
    undefined field273_0x111;
    undefined field274_0x112;
    undefined field275_0x113;
    undefined field276_0x114;
    undefined field277_0x115;
    undefined field278_0x116;
    undefined field279_0x117;
    undefined field280_0x118;
    undefined field281_0x119;
    undefined field282_0x11a;
    undefined field283_0x11b;
    undefined field284_0x11c;
    undefined field285_0x11d;
    undefined field286_0x11e;
    undefined field287_0x11f;
    undefined field288_0x120;
    undefined field289_0x121;
    undefined field290_0x122;
    undefined field291_0x123;
    undefined field292_0x124;
    undefined field293_0x125;
    undefined field294_0x126;
    undefined field295_0x127;
    undefined field296_0x128;
    undefined field297_0x129;
    undefined field298_0x12a;
    undefined field299_0x12b;
    undefined field300_0x12c;
    undefined field301_0x12d;
    undefined field302_0x12e;
    undefined field303_0x12f;
    undefined field304_0x130;
    undefined field305_0x131;
    undefined field306_0x132;
    undefined field307_0x133;
    undefined field308_0x134;
    undefined field309_0x135;
    undefined field310_0x136;
    undefined field311_0x137;
    undefined field312_0x138;
    undefined field313_0x139;
    undefined field314_0x13a;
    undefined field315_0x13b;
    undefined field316_0x13c;
    undefined field317_0x13d;
    undefined field318_0x13e;
    undefined field319_0x13f;
    undefined field320_0x140;
    undefined field321_0x141;
    undefined field322_0x142;
    undefined field323_0x143;
    undefined field324_0x144;
    undefined field325_0x145;
    undefined field326_0x146;
    undefined field327_0x147;
    undefined field328_0x148;
    undefined field329_0x149;
    undefined field330_0x14a;
    undefined field331_0x14b;
    undefined field332_0x14c;
    undefined field333_0x14d;
    undefined field334_0x14e;
    undefined field335_0x14f;
    undefined field336_0x150;
    undefined field337_0x151;
    undefined field338_0x152;
    undefined field339_0x153;
    undefined field340_0x154;
    undefined field341_0x155;
    undefined field342_0x156;
    undefined field343_0x157;
    undefined field344_0x158;
    undefined field345_0x159;
    undefined field346_0x15a;
    undefined field347_0x15b;
    undefined field348_0x15c;
    undefined field349_0x15d;
    undefined field350_0x15e;
    undefined field351_0x15f;
    undefined field352_0x160;
    undefined field353_0x161;
    undefined field354_0x162;
    undefined field355_0x163;
    undefined field356_0x164;
    undefined field357_0x165;
    undefined field358_0x166;
    undefined field359_0x167;
    undefined field360_0x168;
    undefined field361_0x169;
    undefined field362_0x16a;
    undefined field363_0x16b;
    undefined field364_0x16c;
    undefined field365_0x16d;
    undefined field366_0x16e;
    undefined field367_0x16f;
    undefined field368_0x170;
    undefined field369_0x171;
    undefined field370_0x172;
    undefined field371_0x173;
    undefined field372_0x174;
    undefined field373_0x175;
    undefined field374_0x176;
    undefined field375_0x177;
    undefined field376_0x178;
    undefined field377_0x179;
    undefined field378_0x17a;
    undefined field379_0x17b;
    undefined field380_0x17c;
    undefined field381_0x17d;
    undefined field382_0x17e;
    undefined field383_0x17f;
    undefined field384_0x180;
    undefined field385_0x181;
    undefined field386_0x182;
    undefined field387_0x183;
    undefined field388_0x184;
    undefined field389_0x185;
    undefined field390_0x186;
    undefined field391_0x187;
    undefined field392_0x188;
    undefined field393_0x189;
    undefined field394_0x18a;
    undefined field395_0x18b;
    undefined field396_0x18c;
    undefined field397_0x18d;
    undefined field398_0x18e;
    undefined field399_0x18f;
    undefined field400_0x190;
    undefined field401_0x191;
    undefined field402_0x192;
    undefined field403_0x193;
    undefined field404_0x194;
    undefined field405_0x195;
    undefined field406_0x196;
    undefined field407_0x197;
    undefined field408_0x198;
    undefined field409_0x199;
    undefined field410_0x19a;
    undefined field411_0x19b;
    undefined field412_0x19c;
    undefined field413_0x19d;
    undefined field414_0x19e;
    undefined field415_0x19f;
    undefined field416_0x1a0;
    undefined field417_0x1a1;
    undefined field418_0x1a2;
    undefined field419_0x1a3;
    undefined field420_0x1a4;
    undefined field421_0x1a5;
    undefined field422_0x1a6;
    undefined field423_0x1a7;
    undefined field424_0x1a8;
    undefined field425_0x1a9;
    undefined field426_0x1aa;
    undefined field427_0x1ab;
    undefined field428_0x1ac;
    undefined field429_0x1ad;
    undefined field430_0x1ae;
    undefined field431_0x1af;
    undefined field432_0x1b0;
    undefined field433_0x1b1;
    undefined field434_0x1b2;
    undefined field435_0x1b3;
    undefined field436_0x1b4;
    undefined field437_0x1b5;
    undefined field438_0x1b6;
    undefined field439_0x1b7;
    undefined field440_0x1b8;
    undefined field441_0x1b9;
    undefined field442_0x1ba;
    undefined field443_0x1bb;
    undefined field444_0x1bc;
    undefined field445_0x1bd;
    undefined field446_0x1be;
    undefined field447_0x1bf;
    undefined field448_0x1c0;
    undefined field449_0x1c1;
    undefined field450_0x1c2;
    undefined field451_0x1c3;
    undefined field452_0x1c4;
    undefined field453_0x1c5;
    undefined field454_0x1c6;
    undefined field455_0x1c7;
    undefined field456_0x1c8;
    undefined field457_0x1c9;
    undefined field458_0x1ca;
    undefined field459_0x1cb;
    undefined field460_0x1cc;
    undefined field461_0x1cd;
    undefined field462_0x1ce;
    undefined field463_0x1cf;
    undefined field464_0x1d0;
    undefined field465_0x1d1;
    undefined field466_0x1d2;
    undefined field467_0x1d3;
    undefined field468_0x1d4;
    undefined field469_0x1d5;
    undefined field470_0x1d6;
    undefined field471_0x1d7;
    undefined field472_0x1d8;
    undefined field473_0x1d9;
    undefined field474_0x1da;
    undefined field475_0x1db;
    undefined field476_0x1dc;
    undefined field477_0x1dd;
    undefined field478_0x1de;
    undefined field479_0x1df;
    undefined field480_0x1e0;
    undefined field481_0x1e1;
    undefined field482_0x1e2;
    undefined field483_0x1e3;
    undefined field484_0x1e4;
    undefined field485_0x1e5;
    undefined field486_0x1e6;
    undefined field487_0x1e7;
    undefined field488_0x1e8;
    undefined field489_0x1e9;
    undefined field490_0x1ea;
    undefined field491_0x1eb;
    undefined field492_0x1ec;
    undefined field493_0x1ed;
    undefined field494_0x1ee;
    undefined field495_0x1ef;
    undefined field496_0x1f0;
    undefined field497_0x1f1;
    undefined field498_0x1f2;
    undefined field499_0x1f3;
    undefined field500_0x1f4;
    undefined field501_0x1f5;
    undefined field502_0x1f6;
    undefined field503_0x1f7;
    undefined field504_0x1f8;
    undefined field505_0x1f9;
    undefined field506_0x1fa;
    undefined field507_0x1fb;
    undefined field508_0x1fc;
    undefined field509_0x1fd;
    undefined field510_0x1fe;
    undefined field511_0x1ff;
    undefined field512_0x200;
    undefined field513_0x201;
    undefined field514_0x202;
    undefined field515_0x203;
    undefined field516_0x204;
    undefined field517_0x205;
    undefined field518_0x206;
    undefined field519_0x207;
    undefined field520_0x208;
    undefined field521_0x209;
    undefined field522_0x20a;
    undefined field523_0x20b;
    undefined field524_0x20c;
    undefined field525_0x20d;
    undefined field526_0x20e;
    undefined field527_0x20f;
    undefined field528_0x210;
    undefined field529_0x211;
    undefined field530_0x212;
    undefined field531_0x213;
    undefined field532_0x214;
    undefined field533_0x215;
    undefined field534_0x216;
    undefined field535_0x217;
    undefined field536_0x218;
    undefined field537_0x219;
    undefined field538_0x21a;
    undefined field539_0x21b;
    undefined field540_0x21c;
    undefined field541_0x21d;
    undefined field542_0x21e;
    undefined field543_0x21f;
    undefined field544_0x220;
    undefined field545_0x221;
    undefined field546_0x222;
    undefined field547_0x223;
    undefined field548_0x224;
    undefined field549_0x225;
    undefined field550_0x226;
    undefined field551_0x227;
    undefined field552_0x228;
    undefined field553_0x229;
    undefined field554_0x22a;
    undefined field555_0x22b;
    undefined field556_0x22c;
    undefined field557_0x22d;
    undefined field558_0x22e;
    undefined field559_0x22f;
    undefined field560_0x230;
    undefined field561_0x231;
    undefined field562_0x232;
    undefined field563_0x233;
    undefined field564_0x234;
    undefined field565_0x235;
    undefined field566_0x236;
    undefined field567_0x237;
    undefined field568_0x238;
    undefined field569_0x239;
    undefined field570_0x23a;
    undefined field571_0x23b;
    undefined field572_0x23c;
    undefined field573_0x23d;
    undefined field574_0x23e;
    undefined field575_0x23f;
    undefined field576_0x240;
    undefined field577_0x241;
    undefined field578_0x242;
    undefined field579_0x243;
    undefined field580_0x244;
    undefined field581_0x245;
    undefined field582_0x246;
    undefined field583_0x247;
    undefined field584_0x248;
    undefined field585_0x249;
    undefined field586_0x24a;
    undefined field587_0x24b;
    undefined field588_0x24c;
    undefined field589_0x24d;
    undefined field590_0x24e;
    undefined field591_0x24f;
    undefined field592_0x250;
    undefined field593_0x251;
    undefined field594_0x252;
    undefined field595_0x253;
    undefined field596_0x254;
    undefined field597_0x255;
    undefined field598_0x256;
    undefined field599_0x257;
    undefined field600_0x258;
    undefined field601_0x259;
    undefined field602_0x25a;
    undefined field603_0x25b;
    undefined field604_0x25c;
    undefined field605_0x25d;
    undefined field606_0x25e;
    undefined field607_0x25f;
    undefined field608_0x260;
    undefined field609_0x261;
    undefined field610_0x262;
    undefined field611_0x263;
    undefined field612_0x264;
    undefined field613_0x265;
    undefined field614_0x266;
    undefined field615_0x267;
    undefined field616_0x268;
    undefined field617_0x269;
    undefined field618_0x26a;
    undefined field619_0x26b;
    undefined field620_0x26c;
    undefined field621_0x26d;
    undefined field622_0x26e;
    undefined field623_0x26f;
    undefined field624_0x270;
    undefined field625_0x271;
    undefined field626_0x272;
    undefined field627_0x273;
    undefined field628_0x274;
    undefined field629_0x275;
    undefined field630_0x276;
    undefined field631_0x277;
    undefined field632_0x278;
    undefined field633_0x279;
    undefined field634_0x27a;
    undefined field635_0x27b;
    undefined field636_0x27c;
    undefined field637_0x27d;
    undefined field638_0x27e;
    undefined field639_0x27f;
    undefined field640_0x280;
    undefined field641_0x281;
    undefined field642_0x282;
    undefined field643_0x283;
    undefined field644_0x284;
    undefined field645_0x285;
    undefined field646_0x286;
    undefined field647_0x287;
    undefined field648_0x288;
    undefined field649_0x289;
    undefined field650_0x28a;
    undefined field651_0x28b;
    undefined field652_0x28c;
    undefined field653_0x28d;
    undefined field654_0x28e;
    undefined field655_0x28f;
    undefined field656_0x290;
    undefined field657_0x291;
    undefined field658_0x292;
    undefined field659_0x293;
    undefined field660_0x294;
    undefined field661_0x295;
    undefined field662_0x296;
    undefined field663_0x297;
    undefined field664_0x298;
    undefined field665_0x299;
    undefined field666_0x29a;
    undefined field667_0x29b;
    undefined field668_0x29c;
    undefined field669_0x29d;
    undefined field670_0x29e;
    undefined field671_0x29f;
    undefined field672_0x2a0;
    undefined field673_0x2a1;
    undefined field674_0x2a2;
    undefined field675_0x2a3;
    undefined field676_0x2a4;
    undefined field677_0x2a5;
    undefined field678_0x2a6;
    undefined field679_0x2a7;
    undefined field680_0x2a8;
    undefined field681_0x2a9;
    undefined field682_0x2aa;
    undefined field683_0x2ab;
    undefined field684_0x2ac;
    undefined field685_0x2ad;
    undefined field686_0x2ae;
    undefined field687_0x2af;
    undefined field688_0x2b0;
    undefined field689_0x2b1;
    undefined field690_0x2b2;
    undefined field691_0x2b3;
    undefined field692_0x2b4;
    undefined field693_0x2b5;
    undefined field694_0x2b6;
    undefined field695_0x2b7;
    undefined field696_0x2b8;
    undefined field697_0x2b9;
    undefined field698_0x2ba;
    undefined field699_0x2bb;
    undefined field700_0x2bc;
    undefined field701_0x2bd;
    undefined field702_0x2be;
    undefined field703_0x2bf;
    undefined field704_0x2c0;
    undefined field705_0x2c1;
    undefined field706_0x2c2;
    undefined field707_0x2c3;
    undefined field708_0x2c4;
    undefined field709_0x2c5;
    undefined field710_0x2c6;
    undefined field711_0x2c7;
    undefined field712_0x2c8;
    undefined field713_0x2c9;
    undefined field714_0x2ca;
    undefined field715_0x2cb;
    undefined field716_0x2cc;
    undefined field717_0x2cd;
    undefined field718_0x2ce;
    undefined field719_0x2cf;
    undefined field720_0x2d0;
    undefined field721_0x2d1;
    undefined field722_0x2d2;
    undefined field723_0x2d3;
    undefined field724_0x2d4;
    undefined field725_0x2d5;
    undefined field726_0x2d6;
    undefined field727_0x2d7;
    undefined field728_0x2d8;
    undefined field729_0x2d9;
    undefined field730_0x2da;
    undefined field731_0x2db;
    undefined field732_0x2dc;
    undefined field733_0x2dd;
    undefined field734_0x2de;
    undefined field735_0x2df;
    undefined field736_0x2e0;
    undefined field737_0x2e1;
    undefined field738_0x2e2;
    undefined field739_0x2e3;
    undefined field740_0x2e4;
    undefined field741_0x2e5;
    undefined field742_0x2e6;
    undefined field743_0x2e7;
    undefined field744_0x2e8;
    undefined field745_0x2e9;
    undefined field746_0x2ea;
    undefined field747_0x2eb;
    undefined field748_0x2ec;
    undefined field749_0x2ed;
    undefined field750_0x2ee;
    undefined field751_0x2ef;
    undefined field752_0x2f0;
    undefined field753_0x2f1;
    undefined field754_0x2f2;
    undefined field755_0x2f3;
    undefined field756_0x2f4;
    undefined field757_0x2f5;
    undefined field758_0x2f6;
    undefined field759_0x2f7;
    undefined field760_0x2f8;
    undefined field761_0x2f9;
    undefined field762_0x2fa;
    undefined field763_0x2fb;
    undefined field764_0x2fc;
    undefined field765_0x2fd;
    undefined field766_0x2fe;
    undefined field767_0x2ff;
    undefined field768_0x300;
    undefined field769_0x301;
    undefined field770_0x302;
    undefined field771_0x303;
    undefined field772_0x304;
    undefined field773_0x305;
    undefined field774_0x306;
    undefined field775_0x307;
    bool fSeeXsi;
    undefined field777_0x309;
    undefined field778_0x30a;
    undefined field779_0x30b;
    enum GrammarType fGrammarType;
    uint fElemStateSize;
    undefined field782_0x314;
    undefined field783_0x315;
    undefined field784_0x316;
    undefined field785_0x317;
    uint * fElemState;
    struct XMLBuffer fContent;
    struct ValueHashTableOf<short_unsigned_int> * fEntityTable;
    struct RefVectorOf<xercesc_2_7::KVStringPair> * fRawAttrList;
    uint fRawAttrColonListSize;
    undefined field791_0x35c;
    undefined field792_0x35d;
    undefined field793_0x35e;
    undefined field794_0x35f;
    int * fRawAttrColonList;
    struct SchemaGrammar * fSchemaGrammar;
    struct SchemaValidator * fSchemaValidator;
    struct IdentityConstraintHandler * fICHandler;
    struct RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl> * fElemNonDeclPool;
    uint fElemCount;
    undefined field801_0x38c;
    undefined field802_0x38d;
    undefined field803_0x38e;
    undefined field804_0x38f;
    struct RefHashTableOf<unsigned_int> * fAttDefRegistry;
    struct RefHash2KeysTableOf<unsigned_int> * fUndeclaredAttrRegistryNS;
    struct PSVIAttributeList * fPSVIAttrList;
    struct XSModel * fModel;
    struct PSVIElement * fPSVIElement;
    struct ValueStackOf<bool> * fErrorStack;
    struct PSVIElemContext fPSVIElemContext;
};

struct ValueStackOf<bool> {
    struct XMemory super_XMemory;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct ValueVectorOf<bool> fVector;
};

struct PSVIAttribute {
    struct PSVIItem super_PSVIItem;
    struct XSAttributeDeclaration * fAttributeDecl;
    struct DatatypeValidator * fDV;
};

struct PSVIAttributeList { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    struct RefVectorOf<xercesc_2_7::PSVIAttribute> * fAttrList;
    struct RefArrayVectorOf<short_unsigned_int> * fAttrNameList;
    struct RefArrayVectorOf<short_unsigned_int> * fAttrNSList;
    uint fAttrPos;
    undefined field5_0x24;
    undefined field6_0x25;
    undefined field7_0x26;
    undefined field8_0x27;
};

struct XSAttributeDeclaration {
};

struct RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl> {
    struct SchemaElementDecl * fData;
    struct RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl> * fNext;
    void * fKey1;
    int fKey2;
    int fKey3;
};

struct RefHashTableBucketElem<unsigned_int> { // Original name: RefHashTableBucketElem<unsigned int>
    uint * fData;
    struct RefHashTableBucketElem<unsigned_int> * fNext;
    void * fKey;
};

struct SchemaValidator {
};

struct RefHashTableOf<unsigned_int> { // Original name: RefHashTableOf<unsigned int>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHashTableBucketElem<unsigned_int> * * fBucketList;
    uint fHashModulus;
    uint fInitialModulus;
    uint fCount;
    undefined field13_0x24;
    undefined field14_0x25;
    undefined field15_0x26;
    undefined field16_0x27;
    struct HashBase * fHash;
};

struct DatatypeValidator {
};

struct XSSimpleTypeDefinition {
};

struct PSVIElement {
};

struct RefVectorOf<xercesc_2_7::KVStringPair> {
    struct BaseRefVectorOf<xercesc_2_7::KVStringPair> super_BaseRefVectorOf<xercesc_2_7::KVStringPair>;
};

struct RefHash3KeysIdPool<xercesc_2_7::SchemaElementDecl> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHash3KeysTableBucketElem<xercesc_2_7::SchemaElementDecl> * * fBucketList;
    uint fHashModulus;
    undefined field11_0x1c;
    undefined field12_0x1d;
    undefined field13_0x1e;
    undefined field14_0x1f;
    struct HashBase * fHash;
    struct SchemaElementDecl * * fIdPtrs;
    uint fIdPtrsCount;
    uint fIdCounter;
};

struct KVStringPair {
};

struct IdentityConstraintHandler {
};

struct RefHash2KeysTableOf<unsigned_int> { // Original name: RefHash2KeysTableOf<unsigned int>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHash2KeysTableBucketElem<unsigned_int> * * fBucketList;
    uint fHashModulus;
    uint fCount;
    struct HashBase * fHash;
};

typedef enum EntityExpRes {
    EntityExp_Pushed=0,
    EntityExp_Returned=1,
    EntityExp_Failed=2
} EntityExpRes;


// WARNING! conflicting data type names: /DWARF/XMLScanner.hpp/xercesc_2_7/XMLScanner/ValSchemes - /Demangler/xercesc_2_7/AbstractDOMParser/ValSchemes

typedef enum XMLTokens {
    Token_CData=0,
    Token_CharData=1,
    Token_Comment=2,
    Token_EndTag=3,
    Token_EOF=4,
    Token_PI=5,
    Token_StartTag=6,
    Token_Unknown=7
} XMLTokens;

typedef struct NoSuchElementException NoSuchElementException, *PNoSuchElementException;

struct NoSuchElementException {
    struct XMLException super_XMLException;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
};

typedef struct XMLRecognizer XMLRecognizer, *PXMLRecognizer;

struct XMLRecognizer {
    undefined field0_0x0;
};

typedef enum Encodings {
    EBCDIC=0,
    Encodings_Min=0,
    UCS_4B=1,
    Def_UCS4=2,
    UCS_4L=2,
    US_ASCII=3,
    UTF_8=4,
    UTF_16B=5,
    Def_UTF16=6,
    UTF_16L=6,
    Encodings_Max=7,
    XERCES_XMLCH=7,
    Encodings_Count=8,
    OtherEncoding=999
} Encodings;

typedef struct DOMXPathEvaluator DOMXPathEvaluator, *PDOMXPathEvaluator;

struct DOMXPathEvaluator {
    int (** _vptr.DOMXPathEvaluator)(...);
};

typedef struct RefHashTableOf<xercesc_2_7::DatatypeValidator> RefHashTableOf<xercesc_2_7::DatatypeValidator>, *PRefHashTableOf<xercesc_2_7::DatatypeValidator>;

typedef struct RefHashTableBucketElem<xercesc_2_7::DatatypeValidator> RefHashTableBucketElem<xercesc_2_7::DatatypeValidator>, *PRefHashTableBucketElem<xercesc_2_7::DatatypeValidator>;

struct RefHashTableOf<xercesc_2_7::DatatypeValidator> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHashTableBucketElem<xercesc_2_7::DatatypeValidator> * * fBucketList;
    uint fHashModulus;
    uint fInitialModulus;
    uint fCount;
    undefined field13_0x24;
    undefined field14_0x25;
    undefined field15_0x26;
    undefined field16_0x27;
    struct HashBase * fHash;
};

struct RefHashTableBucketElem<xercesc_2_7::DatatypeValidator> {
    struct DatatypeValidator * fData;
    struct RefHashTableBucketElem<xercesc_2_7::DatatypeValidator> * fNext;
    void * fKey;
};

typedef struct DOMDocument DOMDocument, *PDOMDocument;

typedef struct DOMDocumentRange DOMDocumentRange, *PDOMDocumentRange;

struct DOMDocumentRange {
    int (** _vptr.DOMDocumentRange)(...);
};

struct DOMDocument {
    struct DOMDocumentRange super_DOMDocumentRange;
    struct DOMXPathEvaluator super_DOMXPathEvaluator;
    struct DOMDocumentTraversal super_DOMDocumentTraversal;
    struct DOMNode super_DOMNode;
};

typedef enum anon_enum_32.conflict61b2 {
    TOP_LEVEL_SCOPE=-2,
    UNKNOWN_SCOPE=-1
} anon_enum_32.conflict61b2;

typedef struct DOMError DOMError, *PDOMError;

struct DOMError {
    int (** _vptr.DOMError)(...);
};

typedef enum ErrorSeverity {
    DOM_SEVERITY_WARNING=0,
    DOM_SEVERITY_ERROR=1,
    DOM_SEVERITY_FATAL_ERROR=2
} ErrorSeverity;

typedef struct RefHashTableOf<xercesc_2_7::DatatypeValidator> DVHashTable;

typedef struct RuntimeException RuntimeException, *PRuntimeException;

struct RuntimeException {
    struct XMLException super_XMLException;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
};

typedef enum VARIETY {
    VARIETY_ABSENT=0,
    VARIETY_ATOMIC=1,
    VARIETY_LIST=2,
    VARIETY_UNION=3
} VARIETY;

typedef struct PSVIHandler PSVIHandler, *PPSVIHandler;

struct PSVIHandler {
    int (** _vptr.PSVIHandler)(...);
};

typedef struct Locator Locator, *PLocator;

struct Locator {
    int (** _vptr.Locator)(...);
};

typedef struct ContentLeafNameTypeVector ContentLeafNameTypeVector, *PContentLeafNameTypeVector;

typedef enum NodeTypes {
    UnknownType=-1,
    Leaf=0,
    ZeroOrOne=1,
    ZeroOrMore=2,
    OneOrMore=3,
    Choice=4,
    Sequence=5,
    Any=6,
    Any_Other=7,
    Any_NS=8,
    All=9,
    Any_NS_Choice=20,
    ModelGroupSequence=21,
    Any_Lax=22,
    Any_Other_Lax=23,
    Any_NS_Lax=24,
    ModelGroupChoice=36,
    Any_Skip=38,
    Any_Other_Skip=39,
    Any_NS_Skip=40
} NodeTypes;

struct ContentLeafNameTypeVector { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    struct QName * * fLeafNames;
    enum NodeTypes * fLeafTypes;
    uint fLeafCount;
    undefined field4_0x1c;
    undefined field5_0x1d;
    undefined field6_0x1e;
    undefined field7_0x1f;
};

typedef struct Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_> Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_>, *PJanitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_>;

struct Janitor<xercesc_2_7::BaseRefVectorOf<short_unsigned_int>_> { // Original name: Janitor<xercesc_2_7::BaseRefVectorOf<short unsigned int> >
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fData]
    struct BaseRefVectorOf<short_unsigned_int> * fData;
};

typedef struct JanitorMemFunCall<xercesc_2_7::ReaderMgr> JanitorMemFunCall<xercesc_2_7::ReaderMgr>, *PJanitorMemFunCall<xercesc_2_7::ReaderMgr>;

typedef qword offset_in_ReaderMgr_to_null;

typedef offset_in_ReaderMgr_to_null MFPT;

struct JanitorMemFunCall<xercesc_2_7::ReaderMgr> {
    struct ReaderMgr * fObject;
    MFPT fToCall;
    undefined field2_0x10;
    undefined field3_0x11;
    undefined field4_0x12;
    undefined field5_0x13;
    undefined field6_0x14;
    undefined field7_0x15;
    undefined field8_0x16;
    undefined field9_0x17;
};

typedef struct ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*> ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>, *PArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*>;

struct ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned_int>*> { // Original name: ArrayJanitor<xercesc_2_7::RefHash2KeysTableBucketElem<unsigned int>*>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fData]
    struct RefHash2KeysTableBucketElem<unsigned_int> * * fData;
    struct MemoryManager * fMemoryManager;
};

typedef struct JanitorMemFunCall<xercesc_2_7::SGXMLScanner> JanitorMemFunCall<xercesc_2_7::SGXMLScanner>, *PJanitorMemFunCall<xercesc_2_7::SGXMLScanner>;


// WARNING! conflicting data type names: /DWARF/Janitor.hpp/xercesc_2_7/JanitorMemFunCall<xercesc_2_7::SGXMLScanner>/MFPT - /DWARF/Janitor.hpp/xercesc_2_7/JanitorMemFunCall<xercesc_2_7::ReaderMgr>/MFPT

struct JanitorMemFunCall<xercesc_2_7::SGXMLScanner> {
    struct SGXMLScanner * fObject;
    MFPT fToCall;
    undefined field2_0x10;
    undefined field3_0x11;
    undefined field4_0x12;
    undefined field5_0x13;
    undefined field6_0x14;
    undefined field7_0x15;
    undefined field8_0x16;
    undefined field9_0x17;
};

typedef struct Janitor<xercesc_2_7::InputSource> Janitor<xercesc_2_7::InputSource>, *PJanitor<xercesc_2_7::InputSource>;

typedef struct InputSource InputSource, *PInputSource;

struct InputSource {
};

struct Janitor<xercesc_2_7::InputSource> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fData]
    struct InputSource * fData;
};

typedef struct ArrayJanitor<short_unsigned_int> ArrayJanitor<short_unsigned_int>, *PArrayJanitor<short_unsigned_int>;

struct ArrayJanitor<short_unsigned_int> { // Original name: ArrayJanitor<short unsigned int>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fData]
    ushort * fData;
    struct MemoryManager * fMemoryManager;
};

typedef struct ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*> ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>, *PArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*>;

struct ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned_int>*> { // Original name: ArrayJanitor<xercesc_2_7::RefHashTableBucketElem<unsigned int>*>
Missing member super_XMemory : XMemory at offset 0x0 [conflict with fData]
    struct RefHashTableBucketElem<unsigned_int> * * fData;
    struct MemoryManager * fMemoryManager;
};

typedef struct XMLBufBid XMLBufBid, *PXMLBufBid;

struct XMLBufBid { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fBuffer]
    struct XMLBuffer * fBuffer;
    struct XMLBufferMgr * fMgr;
};

typedef uchar XMLByte;

typedef struct ArrayIndexOutOfBoundsException ArrayIndexOutOfBoundsException, *PArrayIndexOutOfBoundsException;

struct ArrayIndexOutOfBoundsException {
    struct XMLException super_XMLException;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
};

typedef struct XSConstants XSConstants, *PXSConstants;

struct XSConstants {
    undefined field0_0x0;
};

typedef enum COMPONENT_TYPE {
    ATTRIBUTE_DECLARATION=1,
    ELEMENT_DECLARATION=2,
    TYPE_DEFINITION=3,
    ATTRIBUTE_USE=4,
    ATTRIBUTE_GROUP_DEFINITION=5,
    MODEL_GROUP_DEFINITION=6,
    MODEL_GROUP=7,
    PARTICLE=8,
    WILDCARD=9,
    IDENTITY_CONSTRAINT=10,
    NOTATION_DECLARATION=11,
    ANNOTATION=12,
    FACET=13,
    MULTIVALUE_FACET=14
} COMPONENT_TYPE;

typedef struct EmptyStackException EmptyStackException, *PEmptyStackException;

struct EmptyStackException {
    struct XMLException super_XMLException;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
};

typedef struct XMLErrs XMLErrs, *PXMLErrs;

struct XMLErrs {
    undefined field0_0x0;
};

typedef enum Codes {
    BadAttDerivation_5=-128,
    BadAttDerivation_6=-127,
    BadAttDerivation_7=-126,
    BadAttDerivation_8=-125,
    BadAttDerivation_9=-124,
    AllContentError=-123,
    RedefineNamespaceDifference=-122,
    Redefine_InvalidSimpleType=-121,
    Redefine_InvalidSimpleTypeBase=-120,
    Redefine_InvalidComplexType=-119,
    Redefine_InvalidComplexTypeBase=-118,
    Redefine_InvalidGroupMinMax=-117,
    Redefine_DeclarationNotFound=-116,
    Redefine_GroupRefCount=-115,
    Redefine_AttGroupRefCount=-114,
    Redefine_InvalidChild=-113,
    Notation_InvalidDecl=-112,
    Notation_DeclNotFound=-111,
    IC_DuplicateDecl=-110,
    IC_BadContent=-109,
    IC_KeyRefReferNotFound=-108,
    IC_KeyRefCardinality=-107,
    IC_XPathExprMissing=-106,
    AttUseCorrect=-105,
    AttDeclPropCorrect3=-104,
    AttDeclPropCorrect5=-103,
    AttGrpPropCorrect3=-102,
    InvalidTargetNSValue=-101,
    DisplayErrorMessage=-100,
    XMLException_Error=-99,
    InvalidRedefine=-98,
    InvalidNSReference=-97,
    NotAllContent=-96,
    InvalidAnnotationContent=-95,
    InvalidFacetName=-94,
    InvalidXMLSchemaRoot=-93,
    CircularSubsGroup=-92,
    SubsGroupMemberAbstract=-91,
    ELTSchemaNS=-90,
    InvalidAttTNS=-89,
    NSDeclInvalid=-88,
    DOMLevel1Node=-87,
    E_HighBounds=-86,
    F_LowBounds=-85,
    EntityExpansionLimitExceeded=-84,
    ExpectedCommentOrCDATA=-83,
    ExpectedAttrName=-82,
    ExpectedNotationName=-81,
    NoRepInMixed=-80,
    BadDefAttrDecl=-79,
    ExpectedDefAttrDecl=-78,
    AttListSyntaxError=-77,
    ExpectedEqSign=-76,
    DupAttrName=-75,
    BadIdForXMLLangAttr=-74,
    ExpectedElementName=-73,
    MustStartWithXMLDecl=-72,
    CommentsMustStartWith=-71,
    InvalidDocumentStructure=-70,
    ExpectedDeclString=-69,
    BadXMLVersion=-68,
    UnsupportedXMLVersion=-67,
    UnterminatedXMLDecl=-66,
    BadXMLEncoding=-65,
    BadStandalone=-64,
    UnterminatedComment=-63,
    PINameExpected=-62,
    UnterminatedPI=-61,
    InvalidCharacter=-60,
    UnexpectedTextBeforeRoot=-59,
    UnterminatedStartTag=-58,
    ExpectedAttrValue=-57,
    UnterminatedEndTag=-56,
    ExpectedAttributeType=-55,
    ExpectedEndOfTagX=-54,
    ExpectedMarkup=-53,
    NotValidAfterContent=-52,
    ExpectedComment=-51,
    ExpectedCommentOrPI=-50,
    ExpectedWhitespace=-49,
    NoRootElemInDOCTYPE=-48,
    ExpectedQuotedString=-47,
    ExpectedPublicId=-46,
    InvalidPublicIdChar=-45,
    UnterminatedDOCTYPE=-44,
    InvalidCharacterInIntSubset=-43,
    ExpectedCDATA=-42,
    InvalidInitialNameChar=-41,
    InvalidNameChar=-40,
    UnexpectedWhitespace=-39,
    InvalidCharacterInAttrValue=-38,
    ExpectedMarkupDecl=-37,
    TextDeclNotLegalHere=-36,
    ConditionalSectInIntSubset=-35,
    ExpectedPEName=-34,
    UnterminatedEntityDecl=-33,
    InvalidCharacterRef=-32,
    UnterminatedCharRef=-31,
    ExpectedEntityRefName=-30,
    EntityNotFound=-29,
    NoUnparsedEntityRefs=-28,
    UnterminatedEntityRef=-27,
    RecursiveEntity=-26,
    PartialMarkupInEntity=-25,
    UnterminatedElementDecl=-24,
    ExpectedContentSpecExpr=-23,
    ExpectedAsterisk=-22,
    UnterminatedContentModel=-21,
    ExpectedSystemId=-20,
    ExpectedSystemOrPublicId=-19,
    UnterminatedNotationDecl=-18,
    ExpectedSeqChoiceLeaf=-17,
    ExpectedChoiceOrCloseParen=-16,
    ExpectedSeqOrCloseParen=-15,
    ExpectedEnumValue=-14,
    ExpectedEnumSepOrParen=-13,
    UnterminatedEntityLiteral=-12,
    MoreEndThanStartTags=-11,
    ExpectedOpenParen=-10,
    AttrAlreadyUsedInSTag=-9,
    BracketInAttrValue=-8,
    Expected2ndSurrogateChar=-7,
    ExpectedEndOfConditional=-6,
    ExpectedIncOrIgn=-5,
    ExpectedINCLUDEBracket=-4,
    ExpectedTextDecl=-3,
    ExpectedXMLDecl=-2,
    UnexpectedEOE=-1,
    NoError=0,
    W_LowBounds=1,
    NotationAlreadyExists=2,
    AttListAlreadyExists=3,
    ContradictoryEncoding=4,
    UndeclaredElemInCM=5,
    UndeclaredElemInAttList=6,
    XMLException_Warning=7,
    W_HighBounds=8,
    E_LowBounds=9,
    FeatureUnsupported=10,
    TopLevelNoNameComplexType=11,
    TopLevelNoNameAttribute=12,
    NoNameRefAttribute=13,
    GlobalNoNameElement=14,
    NoNameRefElement=15,
    NoNameRefGroup=16,
    NoNameRefAttGroup=17,
    AnonComplexTypeWithName=18,
    AnonSimpleTypeWithName=19,
    InvalidElementContent=20,
    UntypedElement=21,
    SimpleTypeContentError=22,
    ExpectedSimpleTypeInList=23,
    ListUnionRestrictionError=24,
    SimpleTypeDerivationByListError=25,
    ExpectedSimpleTypeInRestriction=26,
    DuplicateFacet=27,
    ExpectedSimpleTypeInUnion=28,
    EmptySimpleTypeContent=29,
    InvalidSimpleContent=30,
    UnspecifiedBase=31,
    InvalidComplexContent=32,
    SchemaElementContentError=33,
    ContentError=34,
    UnknownSimpleType=35,
    UnknownComplexType=36,
    UnresolvedPrefix=37,
    RefElementNotFound=38,
    TypeNotFound=39,
    TopLevelAttributeNotFound=40,
    InvalidChildInComplexType=41,
    BaseTypeNotFound=42,
    NoAttributeInSchema=43,
    DatatypeValidatorCreationError=44,
    InvalidChildFollowingSimpleContent=45,
    InvalidChildFollowingConplexContent=46,
    InvalidComplexTypeBlockValue=47,
    InvalidComplexTypeFinalValue=48,
    AttributeDefaultFixedValue=49,
    NotOptionalDefaultAttValue=50,
    LocalAttributeWithNameRef=51,
    GlobalAttributeWithNameRef=52,
    DuplicateAttribute=53,
    AttributeWithTypeAndSimpleType=54,
    AttributeSimpleTypeNotFound=55,
    ElementWithFixedAndDefault=56,
    DeclarationWithNameRef=57,
    BadAttWithRef=58,
    InvalidDeclarationName=59,
    GlobalElementWithRef=60,
    ElementWithTypeAndAnonType=61,
    NotSimpleOrMixedElement=62,
    DisallowedSimpleTypeExtension=63,
    InvalidSimpleContentBase=64,
    InvalidComplexTypeBase=65,
    InvalidChildInSimpleContent=66,
    InvalidChildInComplexContent=67,
    AnnotationError=68,
    DisallowedBaseDerivation=69,
    SubstitutionRepeated=70,
    UnionRepeated=71,
    ExtensionRepeated=72,
    ListRepeated=73,
    RestrictionRepeated=74,
    InvalidBlockValue=75,
    InvalidFinalValue=76,
    InvalidSubstitutionGroupElement=77,
    SubstitutionGroupTypeMismatch=78,
    DuplicateElementDeclaration=79,
    InvalidElementBlockValue=80,
    InvalidElementFinalValue=81,
    InvalidAttValue=82,
    AttributeRefContentError=83,
    DuplicateRefAttribute=84,
    ForbiddenDerivationByRestriction=85,
    ForbiddenDerivationByExtension=86,
    BaseNotComplexType=87,
    ImportNamespaceDifference=88,
    ImportRootError=89,
    DeclarationNoSchemaLocation=90,
    IncludeNamespaceDifference=91,
    OnlyAnnotationExpected=92,
    InvalidAttributeContent=93,
    AttributeRequired=94,
    AttributeDisallowed=95,
    InvalidMin2MaxOccurs=96,
    AnyAttributeContentError=97,
    NoNameGlobalElement=98,
    NoCircularDefinition=99,
    DuplicateGlobalType=100,
    DuplicateGlobalDeclaration=101,
    WS_CollapseExpected=102,
    Import_1_1=103,
    Import_1_2=104,
    ElemIDValueConstraint=105,
    NoNotationType=106,
    EmptiableMixedContent=107,
    EmptyComplexRestrictionDerivation=108,
    MixedOrElementOnly=109,
    InvalidContentRestriction=110,
    ForbiddenDerivation=111,
    AtomicItemType=112,
    MemberTypeNoUnion=113,
    GroupContentError=114,
    AttGroupContentError=115,
    MinMaxOnGroupChild=116,
    DeclarationNotFound=117,
    AllContentLimited=118,
    BadMinMaxAllCT=119,
    BadMinMaxAllElem=120,
    NoCircularAttGroup=121,
    DuplicateAttInDerivation=122,
    NotExpressibleWildCardIntersection=123,
    BadAttDerivation_1=124,
    BadAttDerivation_2=125,
    BadAttDerivation_3=126,
    BadAttDerivation_4=127,
    PEPropogated=256,
    ExtraCloseSquare=257,
    PERefInMarkupInIntSubset=258,
    EntityPropogated=259,
    ExpectedNumericalCharRef=260,
    ExpectedOpenSquareBracket=261,
    BadSequenceInCharData=262,
    IllegalSequenceInComment=263,
    UnterminatedCDATASection=264,
    ExpectedNDATA=265,
    NDATANotValidForPE=266,
    HexRadixMustBeLowerCase=267,
    DeclStringRep=268,
    DeclStringsInWrongOrder=269,
    NoExtRefsInAttValue=270,
    XMLDeclMustBeLowerCase=271,
    ExpectedEntityValue=272,
    BadDigitForRadix=273,
    EndedWithTagsOnStack=274,
    AmbiguousContentModel=275,
    NestedCDATA=276,
    UnknownPrefix=277,
    PartialTagMarkupError=278,
    EmptyMainEntity=279,
    CDATAOutsideOfContent=280,
    OnlyCharRefsAllowedHere=281,
    Unexpected2ndSurrogateChar=282,
    NoPIStartsWithXML=283,
    XMLDeclMustBeFirst=284,
    XMLVersionRequired=285,
    StandaloneNotLegal=286,
    EncodingRequired=287,
    TooManyColonsInName=288,
    InvalidColonPos=289,
    ColonNotLegalWithNS=290,
    SysException=291,
    XMLException_Fatal=292,
    UnexpectedEOF=293,
    UnexpectedError=294,
    BadSchemaLocation=295,
    NoGrammarResolver=296,
    SchemaScanFatalError=297,
    IllegalRefInStandalone=298,
    PEBetweenDecl=299,
    NoEmptyStrNamespace=300,
    NoUseOfxmlnsAsPrefix=301,
    NoUseOfxmlnsURI=302,
    PrefixXMLNotMatchXMLURI=303,
    XMLURINotMatchXMLPrefix=304,
    NoXMLNSAsElementPrefix=305,
    CT_SimpleTypeChildRequired=306,
    InvalidRootElemInDOCTYPE=307,
    InvalidElementName=308,
    InvalidAttrName=309,
    InvalidEntityRefName=310,
    F_HighBounds=311
} Codes;

typedef struct EndOfEntityException EndOfEntityException, *PEndOfEntityException;

struct EndOfEntityException {
    struct XMLEntityDecl * fEntity;
    uint fReaderNum;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

typedef struct DocTypeHandler DocTypeHandler, *PDocTypeHandler;

struct DocTypeHandler {
    int (** _vptr.DocTypeHandler)(...);
};

typedef struct XSerializeEngine XSerializeEngine, *PXSerializeEngine;

typedef struct BinInputStream BinInputStream, *PBinInputStream;

typedef struct BinOutputStream BinOutputStream, *PBinOutputStream;

typedef struct RefHashTableOf<xercesc_2_7::XSerializedObjectId> RefHashTableOf<xercesc_2_7::XSerializedObjectId>, *PRefHashTableOf<xercesc_2_7::XSerializedObjectId>;

typedef struct ValueVectorOf<void*> ValueVectorOf<void*>, *PValueVectorOf<void*>;

typedef uint XSerializedObjectId_t;

struct ValueVectorOf<void*> {
};

struct XSerializeEngine {
    short fStoreLoad;
    short fStorerLevel;
    undefined field2_0x4;
    undefined field3_0x5;
    undefined field4_0x6;
    undefined field5_0x7;
    struct XMLGrammarPool * fGrammarPool;
    struct BinInputStream * fInputStream;
    struct BinOutputStream * fOutputStream;
    ulong fBufCount;
    ulong fBufSize;
    XMLByte * fBufStart;
    XMLByte * fBufEnd;
    XMLByte * fBufCur;
    XMLByte * fBufLoadMax;
    struct RefHashTableOf<xercesc_2_7::XSerializedObjectId> * fStorePool;
    struct ValueVectorOf<void*> * fLoadPool;
    XSerializedObjectId_t fObjectCount;
    undefined field18_0x64;
    undefined field19_0x65;
    undefined field20_0x66;
    undefined field21_0x67;
};

struct BinInputStream {
};

struct BinOutputStream {
};

struct RefHashTableOf<xercesc_2_7::XSerializedObjectId> {
};

typedef enum ListType {
    IMPORT=1,
    INCLUDE=2
} ListType;

typedef struct XMLExcepts XMLExcepts, *PXMLExcepts;

struct XMLExcepts {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /DWARF/XMLExceptMsgs.hpp/xercesc_2_7/XMLExcepts/Codes - /DWARF/XMLErrorCodes.hpp/xercesc_2_7/XMLErrs/Codes

typedef struct SchemaAttDef SchemaAttDef, *PSchemaAttDef;

struct SchemaAttDef {
};

typedef struct XMLNotationDecl XMLNotationDecl, *PXMLNotationDecl;

struct XMLNotationDecl {
};

typedef struct DOMXPathExpression DOMXPathExpression, *PDOMXPathExpression;

struct DOMXPathExpression {
};

typedef struct RefHashTableOfEnumerator<xercesc_2_7::Grammar> RefHashTableOfEnumerator<xercesc_2_7::Grammar>, *PRefHashTableOfEnumerator<xercesc_2_7::Grammar>;

struct RefHashTableOfEnumerator<xercesc_2_7::Grammar> {
};

typedef struct DOMDocumentFragment DOMDocumentFragment, *PDOMDocumentFragment;

struct DOMDocumentFragment {
};

typedef struct XSAttributeGroupDefinition XSAttributeGroupDefinition, *PXSAttributeGroupDefinition;

struct XSAttributeGroupDefinition {
};

typedef struct XMLSchemaDescription XMLSchemaDescription, *PXMLSchemaDescription;

struct XMLSchemaDescription {
};

typedef struct XMLGrammarDescription XMLGrammarDescription, *PXMLGrammarDescription;

struct XMLGrammarDescription {
};

typedef struct DOMXPathNSResolver DOMXPathNSResolver, *PDOMXPathNSResolver;

struct DOMXPathNSResolver {
};

typedef struct RefVectorOf<xercesc_2_7::XMLAttr> RefVectorOf<xercesc_2_7::XMLAttr>, *PRefVectorOf<xercesc_2_7::XMLAttr>;

struct RefVectorOf<xercesc_2_7::XMLAttr> {
};

typedef struct DOMCDATASection DOMCDATASection, *PDOMCDATASection;

struct DOMCDATASection {
};

typedef struct DOMTreeWalker DOMTreeWalker, *PDOMTreeWalker;

struct DOMTreeWalker {
};

typedef struct XMLTranscoder XMLTranscoder, *PXMLTranscoder;

struct XMLTranscoder {
};

typedef struct DOMImplementation DOMImplementation, *PDOMImplementation;

struct DOMImplementation {
};

typedef struct DOMNodeIterator DOMNodeIterator, *PDOMNodeIterator;

struct DOMNodeIterator {
};

typedef struct BaseRefVectorOf<xercesc_2_7::XMLAttr> BaseRefVectorOf<xercesc_2_7::XMLAttr>, *PBaseRefVectorOf<xercesc_2_7::XMLAttr>;

struct BaseRefVectorOf<xercesc_2_7::XMLAttr> {
};

typedef struct DOMEntity DOMEntity, *PDOMEntity;

struct DOMEntity {
};

typedef struct IC_Field IC_Field, *PIC_Field;

struct IC_Field {
};

typedef struct XSElementDeclaration XSElementDeclaration, *PXSElementDeclaration;

struct XSElementDeclaration {
};

typedef struct DTDGrammar DTDGrammar, *PDTDGrammar;

struct DTDGrammar {
};

typedef struct DOMConfiguration DOMConfiguration, *PDOMConfiguration;

struct DOMConfiguration {
};

typedef struct DOMNamedNodeMap DOMNamedNodeMap, *PDOMNamedNodeMap;

struct DOMNamedNodeMap {
};

typedef struct DOMNodeFilter DOMNodeFilter, *PDOMNodeFilter;

struct DOMNodeFilter {
};

typedef struct XMLURL XMLURL, *PXMLURL;

struct XMLURL {
};

typedef struct DOMProcessingInstruction DOMProcessingInstruction, *PDOMProcessingInstruction;

struct DOMProcessingInstruction {
};

typedef struct Janitor<xercesc_2_7::XSAnnotation> Janitor<xercesc_2_7::XSAnnotation>, *PJanitor<xercesc_2_7::XSAnnotation>;

struct Janitor<xercesc_2_7::XSAnnotation> {
};

typedef struct ValueVectorOf<xercesc_2_7::SchemaInfo*> ValueVectorOf<xercesc_2_7::SchemaInfo*>, *PValueVectorOf<xercesc_2_7::SchemaInfo*>;

struct ValueVectorOf<xercesc_2_7::SchemaInfo*> {
};

typedef struct DOMText DOMText, *PDOMText;

struct DOMText {
};

typedef struct DOMNodeList DOMNodeList, *PDOMNodeList;

struct DOMNodeList {
};

typedef struct XSNotationDeclaration XSNotationDeclaration, *PXSNotationDeclaration;

struct XSNotationDeclaration {
};

typedef struct RefVectorOf<xercesc_2_7::XPathMatcher> RefVectorOf<xercesc_2_7::XPathMatcher>, *PRefVectorOf<xercesc_2_7::XPathMatcher>;

struct RefVectorOf<xercesc_2_7::XPathMatcher> {
};

typedef struct RefHashTableOf<xercesc_2_7::XMLRefInfo> RefHashTableOf<xercesc_2_7::XMLRefInfo>, *PRefHashTableOf<xercesc_2_7::XMLRefInfo>;

struct RefHashTableOf<xercesc_2_7::XMLRefInfo> {
};

typedef struct XPathMatcher XPathMatcher, *PXPathMatcher;

struct XPathMatcher {
};

typedef struct DOMComment DOMComment, *PDOMComment;

struct DOMComment {
};

typedef struct XMLLCPTranscoder XMLLCPTranscoder, *PXMLLCPTranscoder;

struct XMLLCPTranscoder {
};

typedef struct NameIdPool<xercesc_2_7::DTDEntityDecl> NameIdPool<xercesc_2_7::DTDEntityDecl>, *PNameIdPool<xercesc_2_7::DTDEntityDecl>;

struct NameIdPool<xercesc_2_7::DTDEntityDecl> {
};

typedef struct XMLSchemaDescriptionImpl XMLSchemaDescriptionImpl, *PXMLSchemaDescriptionImpl;

struct XMLSchemaDescriptionImpl {
};

typedef struct XMLDTDDescription XMLDTDDescription, *PXMLDTDDescription;

struct XMLDTDDescription {
};

typedef struct DTDElementDecl DTDElementDecl, *PDTDElementDecl;

struct DTDElementDecl {
};

typedef struct DOMTypeInfo DOMTypeInfo, *PDOMTypeInfo;

struct DOMTypeInfo {
};

typedef struct XSModelGroupDefinition XSModelGroupDefinition, *PXSModelGroupDefinition;

struct XSModelGroupDefinition {
};

typedef struct XSNamespaceItem XSNamespaceItem, *PXSNamespaceItem;

struct XSNamespaceItem {
};

typedef struct DOMUserDataHandler DOMUserDataHandler, *PDOMUserDataHandler;

struct DOMUserDataHandler {
};

typedef struct IdentityConstraint IdentityConstraint, *PIdentityConstraint;

struct IdentityConstraint {
};

typedef struct DOMRange DOMRange, *PDOMRange;

struct DOMRange {
};

typedef struct XSObject XSObject, *PXSObject;

struct XSObject {
};

typedef struct DOMEntityReference DOMEntityReference, *PDOMEntityReference;

struct DOMEntityReference {
};

typedef struct XSValue XSValue, *PXSValue;

struct XSValue {
};

typedef struct DOMNotation DOMNotation, *PDOMNotation;

struct DOMNotation {
};

typedef struct DTDAttDef DTDAttDef, *PDTDAttDef;

struct DTDAttDef {
};

typedef struct DOMLocator DOMLocator, *PDOMLocator;

struct DOMLocator {
};

typedef qword offset_in_SGXMLScanner_to_null;

typedef struct nothrow_t nothrow_t, *Pnothrow_t;

struct nothrow_t {
    undefined field0_0x0;
};

typedef struct XProtoType XProtoType, *PXProtoType;

struct XProtoType {
    XMLByte * fClassName;
    XSerializable * (* fCreateObject)(struct MemoryManager *);
};

typedef struct RefHash2KeysTableBucketElem<xercesc_2_7::SchemaAttDef> RefHash2KeysTableBucketElem<xercesc_2_7::SchemaAttDef>, *PRefHash2KeysTableBucketElem<xercesc_2_7::SchemaAttDef>;

struct RefHash2KeysTableBucketElem<xercesc_2_7::SchemaAttDef> {
    struct SchemaAttDef * fData;
    struct RefHash2KeysTableBucketElem<xercesc_2_7::SchemaAttDef> * fNext;
    void * fKey1;
    int fKey2;
    undefined field4_0x1c;
    undefined field5_0x1d;
    undefined field6_0x1e;
    undefined field7_0x1f;
};

typedef struct RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef> RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>, *PRefHash2KeysTableOf<xercesc_2_7::SchemaAttDef>;

struct RefHash2KeysTableOf<xercesc_2_7::SchemaAttDef> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    bool fAdoptedElems;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
    struct RefHash2KeysTableBucketElem<xercesc_2_7::SchemaAttDef> * * fBucketList;
    uint fHashModulus;
    uint fCount;
    struct HashBase * fHash;
};

typedef enum ErrTypes {
    ErrType_Warning=0,
    ErrType_Error=1,
    ErrType_Fatal=2,
    ErrTypes_Unknown=3
} ErrTypes;

typedef struct ContentSpecNode ContentSpecNode, *PContentSpecNode;

struct ContentSpecNode { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with super_XSerializable]
    struct XSerializable super_XSerializable;
    struct MemoryManager * fMemoryManager;
    struct QName * fElement;
    struct XMLElementDecl * fElementDecl;
    struct ContentSpecNode * fFirst;
    struct ContentSpecNode * fSecond;
    enum NodeTypes fType;
    bool fAdoptFirst;
    bool fAdoptSecond;
    undefined field9_0x36;
    undefined field10_0x37;
    int fMinOccurs;
    int fMaxOccurs;
};

typedef struct OutOfMemoryException OutOfMemoryException, *POutOfMemoryException;

struct OutOfMemoryException {
    struct XMemory super_XMemory;
};

typedef struct ValueStackOf<xercesc_2_7::ComplexTypeInfo*> ValueStackOf<xercesc_2_7::ComplexTypeInfo*>, *PValueStackOf<xercesc_2_7::ComplexTypeInfo*>;

struct ValueStackOf<xercesc_2_7::ComplexTypeInfo*> {
    struct XMemory super_XMemory;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct ValueVectorOf<xercesc_2_7::ComplexTypeInfo*> fVector;
};

typedef struct ValueStackOf<int> ValueStackOf<int>, *PValueStackOf<int>;

struct ValueStackOf<int> {
    struct XMemory super_XMemory;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    struct ValueVectorOf<int> fVector;
};


// WARNING! conflicting data type names: /DWARF/XMLElementDecl.hpp/xercesc_2_7/XMLElementDecl/CreateReasons - /DWARF/XMLAttDef.hpp/xercesc_2_7/XMLAttDef/CreateReasons

typedef enum CharDataOpts {
    NoCharData=0,
    SpacesOk=1,
    AllCharData=2
} CharDataOpts;

typedef struct 7lldiv_t 7lldiv_t, *P7lldiv_t;

struct 7lldiv_t {
    longlong quot;
    longlong rem;
};

typedef struct 5div_t 5div_t, *P5div_t;

struct 5div_t {
    int quot;
    int rem;
};

typedef int (* __compar_fn_t)(void *, void *);

typedef struct 7lldiv_t lldiv_t;

typedef struct 6ldiv_t 6ldiv_t, *P6ldiv_t;

struct 6ldiv_t {
    long quot;
    long rem;
};

typedef struct 6ldiv_t ldiv_t;

typedef struct 5div_t div_t;

typedef enum ModelTypes {
    Empty=0,
    Any=1,
    Mixed_Simple=2,
    Mixed_Complex=3,
    Children=4,
    Simple=5,
    ModelTypes_Count=6
} ModelTypes;

typedef struct XMLDocumentHandler XMLDocumentHandler, *PXMLDocumentHandler;

struct XMLDocumentHandler {
    int (** _vptr.XMLDocumentHandler)(...);
};

typedef enum ValidatorType {
    String=0,
    AnyURI=1,
    QName=2,
    Name=3,
    NCName=4,
    Boolean=5,
    Float=6,
    Double=7,
    Decimal=8,
    HexBinary=9,
    Base64Binary=10,
    Duration=11,
    DateTime=12,
    Date=13,
    Time=14,
    MonthDay=15,
    YearMonth=16,
    Year=17,
    Month=18,
    Day=19,
    ID=20,
    IDREF=21,
    ENTITY=22,
    NOTATION=23,
    List=24,
    Union=25,
    AnySimpleType=26,
    UnKnown=27
} ValidatorType;

typedef enum anon_enum_32.conflict65f4 {
    PRESERVE=0,
    REPLACE=1,
    COLLAPSE=2
} anon_enum_32.conflict65f4;

typedef struct XMLContentModel XMLContentModel, *PXMLContentModel;

struct XMLContentModel { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.XMLContentModel]
    int (** _vptr.XMLContentModel)(...);
};

typedef struct UnexpectedEOFException UnexpectedEOFException, *PUnexpectedEOFException;

struct UnexpectedEOFException {
    struct XMLException super_XMLException;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
};

typedef struct XMLReader XMLReader, *PXMLReader;

typedef enum RefFrom {
    RefFrom_Literal=0,
    RefFrom_NonLiteral=1
} RefFrom;

typedef enum Sources {
    Source_Internal=0,
    Source_External=1
} Sources;

typedef enum Types {
    Type_PE=0,
    Type_General=1
} Types;

typedef enum XMLVersion {
    XMLV1_0=0,
    XMLV1_1=1,
    XMLV_Unknown=2
} XMLVersion;

struct XMLReader { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fCharIndex]
    uint fCharIndex;
    XMLCh fCharBuf[16384];
    uint fCharsAvail;
    uchar fCharSizeBuf[16384];
    uint fCharOfsBuf[16384];
    XMLSSize_t fCurCol;
    XMLSSize_t fCurLine;
    enum Encodings fEncoding;
    undefined field8_0x1c01c;
    undefined field9_0x1c01d;
    undefined field10_0x1c01e;
    undefined field11_0x1c01f;
    XMLCh * fEncodingStr;
    bool fForcedEncoding;
    bool fNoMore;
    undefined field15_0x1c02a;
    undefined field16_0x1c02b;
    undefined field17_0x1c02c;
    undefined field18_0x1c02d;
    undefined field19_0x1c02e;
    undefined field20_0x1c02f;
    XMLCh * fPublicId;
    uint fRawBufIndex;
    XMLByte fRawByteBuf[49152];
    uint fRawBytesAvail;
    uint fReaderNum;
    enum RefFrom fRefFrom;
    bool fSentTrailingSpace;
    undefined field28_0x28049;
    undefined field29_0x2804a;
    undefined field30_0x2804b;
    enum Sources fSource;
    uint fSrcOfsBase;
    bool fSrcOfsSupported;
    bool fCalculateSrcOfs;
    undefined field35_0x28056;
    undefined field36_0x28057;
    XMLCh * fSystemId;
    struct BinInputStream * fStream;
    bool fSwapped;
    bool fThrowAtEnd;
    undefined field41_0x2806a;
    undefined field42_0x2806b;
    undefined field43_0x2806c;
    undefined field44_0x2806d;
    undefined field45_0x2806e;
    undefined field46_0x2806f;
    struct XMLTranscoder * fTranscoder;
    enum Types fType;
    undefined field49_0x2807c;
    undefined field50_0x2807d;
    undefined field51_0x2807e;
    undefined field52_0x2807f;
    XMLByte * fgCharCharsTable;
    bool fNEL;
    undefined field55_0x28089;
    undefined field56_0x2808a;
    undefined field57_0x2808b;
    enum XMLVersion fXMLVersion;
    struct MemoryManager * fMemoryManager;
};

typedef enum Constants {
    kRawBufSize=-16384,
    kCharBufSize=16384
} Constants;

typedef struct XMLAttr XMLAttr, *PXMLAttr;

struct XMLAttr { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fSpecified]
    bool fSpecified;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    enum AttTypes fType;
    uint fValueBufSz;
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    XMLCh * fValue;
    struct QName * fAttName;
    struct MemoryManager * fMemoryManager;
    struct DatatypeValidator * fDatatypeValidator;
    bool fIsSchemaValidated;
    undefined field15_0x31;
    undefined field16_0x32;
    undefined field17_0x33;
    undefined field18_0x34;
    undefined field19_0x35;
    undefined field20_0x36;
    undefined field21_0x37;
};

typedef struct XPathMatcherStack XPathMatcherStack, *PXPathMatcherStack;

struct XPathMatcherStack { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMatchersCount]
    uint fMatchersCount;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct ValueStackOf<int> * fContextStack;
    struct RefVectorOf<xercesc_2_7::XPathMatcher> * fMatchers;
};

typedef struct XMLPScanToken XMLPScanToken, *PXMLPScanToken;

struct XMLPScanToken { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fScannerId]
    XMLUInt32 fScannerId;
    XMLUInt32 fSequenceId;
};

typedef struct DOMAttr DOMAttr, *PDOMAttr;

struct DOMAttr {
    struct DOMNode super_DOMNode;
};

typedef struct XMLValid XMLValid, *PXMLValid;

struct XMLValid {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /DWARF/XMLValidityCodes.hpp/xercesc_2_7/XMLValid/Codes - /DWARF/XMLErrorCodes.hpp/xercesc_2_7/XMLErrs/Codes

typedef struct IllegalArgumentException IllegalArgumentException, *PIllegalArgumentException;

struct IllegalArgumentException {
    struct XMLException super_XMLException;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    undefined field12_0xc;
    undefined field13_0xd;
    undefined field14_0xe;
    undefined field15_0xf;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    undefined field27_0x1b;
    undefined field28_0x1c;
    undefined field29_0x1d;
    undefined field30_0x1e;
    undefined field31_0x1f;
    undefined field32_0x20;
    undefined field33_0x21;
    undefined field34_0x22;
    undefined field35_0x23;
    undefined field36_0x24;
    undefined field37_0x25;
    undefined field38_0x26;
    undefined field39_0x27;
    undefined field40_0x28;
    undefined field41_0x29;
    undefined field42_0x2a;
    undefined field43_0x2b;
    undefined field44_0x2c;
    undefined field45_0x2d;
    undefined field46_0x2e;
    undefined field47_0x2f;
};

typedef struct JanitorMemFunCall<xercesc_2_7::ReaderMgr> ReaderMgrResetType;

typedef struct JanitorMemFunCall<xercesc_2_7::SGXMLScanner> CleanupType;

typedef enum States {
    State_Waiting=0,
    State_GotOne=1,
    State_GotTwo=2
} States;


// WARNING! conflicting data type names: /DWARF/SGXMLScanner.cpp/xercesc_2_7/SGXMLScanner/normalizeAttValue/States - /DWARF/SGXMLScanner.cpp/xercesc_2_7/SGXMLScanner/scanCharData/States

typedef struct BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo> BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>, *PBaseRefVectorEnumerator<xercesc_2_7::SchemaInfo>;

typedef struct XMLEnumerator<xercesc_2_7::SchemaInfo> XMLEnumerator<xercesc_2_7::SchemaInfo>, *PXMLEnumerator<xercesc_2_7::SchemaInfo>;

struct XMLEnumerator<xercesc_2_7::SchemaInfo> {
    int (** _vptr.XMLEnumerator)(...);
};

struct BaseRefVectorEnumerator<xercesc_2_7::SchemaInfo> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with super_XMLEnumerator<xercesc_2_7::SchemaInfo>]
    struct XMLEnumerator<xercesc_2_7::SchemaInfo> super_XMLEnumerator<xercesc_2_7::SchemaInfo>;
    bool fAdopted;
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    uint fCurIndex;
    struct BaseRefVectorOf<xercesc_2_7::SchemaInfo> * fToEnum;
};

typedef struct XMLResourceIdentifier XMLResourceIdentifier, *PXMLResourceIdentifier;

typedef enum ResourceIdentifierType {
    UnKnown=-1,
    SchemaGrammar=0,
    SchemaImport=1,
    SchemaInclude=2,
    SchemaRedefine=3,
    ExternalEntity=4
} ResourceIdentifierType;

struct XMLResourceIdentifier {
    enum ResourceIdentifierType fResourceIdentifierType;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    XMLCh * fPublicId;
    XMLCh * fSystemId;
    XMLCh * fBaseURI;
    XMLCh * fNameSpace;
    struct Locator * fLocator;
};

typedef struct DOMDocumentType DOMDocumentType, *PDOMDocumentType;

struct DOMDocumentType {
    struct DOMNode super_DOMNode;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
            (&resetReaderMgr,(ReaderMgr *)&this->field_0xb8,0xbac88948);
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
  }
  JanitorMemFunCall<xercesc_2_7::ReaderMgr>::JanitorMemFunCall
            (&resetReaderMgr,(ReaderMgr *)&this->field_0xb8,0xbd41c48949);
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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



// WARNING: Removing unreachable block (ram,0x0010449f)

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
                    // WARNING: Subroutine does not return
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
            (&resetReaderMgr,(ReaderMgr *)&this->field_0xb8,0xb941c08949);
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
      __cxa_throw(pRVar8,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
    }
    pRVar8 = (RuntimeException *)__cxa_allocate_exception(0x30);
    pMVar1 = *(MemoryManager **)&this->field_0x168;
    pXVar9 = (XMLCh *)(**(code **)(*(long *)src + 0x28))(src);
    RuntimeException::RuntimeException
              (pRVar8,"SGXMLScanner.cpp",0xc4a,Scan_CouldNotOpenSource_Warning,pXVar9,(XMLCh *)0x0,
               (XMLCh *)0x0,(XMLCh *)0x0,pMVar1);
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

XMLCh * __thiscall xercesc_2_7::RuntimeException::getType(RuntimeException *this)

{
  return (XMLCh *)&XMLUni::fgRuntimeException_Name;
}



// Original name: operator new

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



// (LSDA) Type Table

void __thiscall xercesc_2_7::XMLRefInfo::_XMLRefInfo(XMLRefInfo *this)

{
  void *in_RSI;
  
  _XMLRefInfo(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

void __thiscall xercesc_2_7::PSVIAttribute::_PSVIAttribute(PSVIAttribute *this)

{
  void *in_RSI;
  
  _PSVIAttribute(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}



// (LSDA) Type Table

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



// (LSDA) Type Table

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



// (LSDA) Type Table

void __thiscall xercesc_2_7::ContentSpecNode::_ContentSpecNode(ContentSpecNode *this)

{
  void *in_RSI;
  
  _ContentSpecNode(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}



// (LSDA) Type Table

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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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



// WARNING: Removing unreachable block (ram,0x00110a14)

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
    uVar3 = (ulong)((double)(ulong)this->fIdPtrsCount * 1.5);
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&NoSuchElementException::typeinfo,
                NoSuchElementException::_NoSuchElementException);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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



// WARNING: Removing unreachable block (ram,0x00113fe7)

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
    uVar1 = (uint)(long)((double)(ulong)this->fCurCount * 1.25);
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
                    // WARNING: Subroutine does not return
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
                    // WARNING: Subroutine does not return
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


