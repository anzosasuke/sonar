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
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef ulong size_t;

typedef struct NameIdPoolBucketElem NameIdPoolBucketElem, *PNameIdPoolBucketElem;

struct NameIdPoolBucketElem { // PlaceHolder Structure
};

typedef undefined __unknown__[32];

typedef longdouble __float128;

typedef struct XMLBufferMgr XMLBufferMgr, *PXMLBufferMgr;

typedef struct MemoryManager MemoryManager, *PMemoryManager;

typedef struct XMLBuffer XMLBuffer, *PXMLBuffer;

typedef struct XMLBufferFullHandler XMLBufferFullHandler, *PXMLBufferFullHandler;

typedef ushort XMLCh;

struct XMLBufferMgr { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fBufCount]
    uint fBufCount;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct MemoryManager * fMemoryManager;
    struct XMLBuffer * * fBufList;
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

typedef struct XMLBufBid XMLBufBid, *PXMLBufBid;

struct XMLBufBid { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fBuffer]
    struct XMLBuffer * fBuffer;
    struct XMLBufferMgr * fMgr;
};

typedef uchar XMLByte;

typedef struct XMLValidator XMLValidator, *PXMLValidator;

typedef struct XMLErrorReporter XMLErrorReporter, *PXMLErrorReporter;

typedef struct ReaderMgr ReaderMgr, *PReaderMgr;

typedef struct XMLScanner XMLScanner, *PXMLScanner;

struct ReaderMgr {
};

struct XMLErrorReporter {
    int (** _vptr.XMLErrorReporter)(...);
};

struct XMLScanner {
};

struct XMLValidator { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.XMLValidator]
    int (** _vptr.XMLValidator)(...);
    struct XMLBufferMgr * fBufMgr;
    struct XMLErrorReporter * fErrorReporter;
    struct ReaderMgr * fReaderMgr;
    struct XMLScanner * fScanner;
};

typedef struct ArrayIndexOutOfBoundsException ArrayIndexOutOfBoundsException, *PArrayIndexOutOfBoundsException;

typedef struct XMLException XMLException, *PXMLException;

struct XMLException {
};

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

typedef struct RefVectorOf<xercesc_2_7::XSAnnotation> RefVectorOf<xercesc_2_7::XSAnnotation>, *PRefVectorOf<xercesc_2_7::XSAnnotation>;

typedef struct RefVectorOf<xercesc_2_7::XSAnnotation> XSAnnotationList;

struct RefVectorOf<xercesc_2_7::XSAnnotation> {
};

typedef struct RefVectorOf<xercesc_2_7::XSNamespaceItem> RefVectorOf<xercesc_2_7::XSNamespaceItem>, *PRefVectorOf<xercesc_2_7::XSNamespaceItem>;

typedef struct RefVectorOf<xercesc_2_7::XSNamespaceItem> XSNamespaceItemList;

struct RefVectorOf<xercesc_2_7::XSNamespaceItem> {
};

typedef struct RefArrayVectorOf<short_unsigned_int> RefArrayVectorOf<short_unsigned_int>, *PRefArrayVectorOf<short_unsigned_int>;

typedef struct RefArrayVectorOf<short_unsigned_int> StringList;

typedef struct BaseRefVectorOf<short_unsigned_int> BaseRefVectorOf<short_unsigned_int>, *PBaseRefVectorOf<short_unsigned_int>;

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

typedef struct XMLEntityHandler XMLEntityHandler, *PXMLEntityHandler;

struct XMLEntityHandler {
    int (** _vptr.XMLEntityHandler)(...);
};

typedef struct EndOfEntityException EndOfEntityException, *PEndOfEntityException;

typedef struct XMLEntityDecl XMLEntityDecl, *PXMLEntityDecl;

struct XMLEntityDecl {
};

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

typedef struct XMLGrammarPool XMLGrammarPool, *PXMLGrammarPool;

typedef struct BinInputStream BinInputStream, *PBinInputStream;

typedef struct BinOutputStream BinOutputStream, *PBinOutputStream;

typedef struct RefHashTableOf<xercesc_2_7::XSerializedObjectId> RefHashTableOf<xercesc_2_7::XSerializedObjectId>, *PRefHashTableOf<xercesc_2_7::XSerializedObjectId>;

typedef struct ValueVectorOf<void*> ValueVectorOf<void*>, *PValueVectorOf<void*>;

typedef uint XSerializedObjectId_t;

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

struct ValueVectorOf<void*> {
};

struct BinOutputStream {
};

struct RefHashTableOf<xercesc_2_7::XSerializedObjectId> {
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

typedef struct DTDEntityDecl DTDEntityDecl, *PDTDEntityDecl;

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

typedef struct XMLExcepts XMLExcepts, *PXMLExcepts;

struct XMLExcepts {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /DWARF/XMLExceptMsgs.hpp/xercesc_2_7/XMLExcepts/Codes - /DWARF/XMLErrorCodes.hpp/xercesc_2_7/XMLErrs/Codes

typedef struct XSModel XSModel, *PXSModel;

typedef struct RefVectorOf<xercesc_2_7::XSObject> RefVectorOf<xercesc_2_7::XSObject>, *PRefVectorOf<xercesc_2_7::XSObject>;

typedef struct XSNamedMap<xercesc_2_7::XSObject> XSNamedMap<xercesc_2_7::XSObject>, *PXSNamedMap<xercesc_2_7::XSObject>;

typedef struct XMLStringPool XMLStringPool, *PXMLStringPool;

typedef struct RefHashTableOf<xercesc_2_7::XSNamespaceItem> RefHashTableOf<xercesc_2_7::XSNamespaceItem>, *PRefHashTableOf<xercesc_2_7::XSNamespaceItem>;

typedef struct XSObjectFactory XSObjectFactory, *PXSObjectFactory;

struct XSObjectFactory {
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

struct RefVectorOf<xercesc_2_7::XSObject> {
};

struct XSNamedMap<xercesc_2_7::XSObject> {
};

struct RefHashTableOf<xercesc_2_7::XSNamespaceItem> {
};

struct XMLStringPool {
};

typedef struct XMLElementDecl XMLElementDecl, *PXMLElementDecl;

struct XMLElementDecl {
};

typedef struct InputSource InputSource, *PInputSource;

struct InputSource {
};

typedef struct XSObject XSObject, *PXSObject;

struct XSObject {
};

typedef struct XMLNotationDecl XMLNotationDecl, *PXMLNotationDecl;

struct XMLNotationDecl {
};

typedef struct QName QName, *PQName;

struct QName {
};

typedef struct XSAttributeDeclaration XSAttributeDeclaration, *PXSAttributeDeclaration;

struct XSAttributeDeclaration {
};

typedef struct RefHashTableOfEnumerator<xercesc_2_7::Grammar> RefHashTableOfEnumerator<xercesc_2_7::Grammar>, *PRefHashTableOfEnumerator<xercesc_2_7::Grammar>;

struct RefHashTableOfEnumerator<xercesc_2_7::Grammar> {
};

typedef struct SchemaGrammar SchemaGrammar, *PSchemaGrammar;

struct SchemaGrammar {
};

typedef struct DatatypeValidator DatatypeValidator, *PDatatypeValidator;

struct DatatypeValidator {
};

typedef struct DatatypeValidatorFactory DatatypeValidatorFactory, *PDatatypeValidatorFactory;

struct DatatypeValidatorFactory {
};

typedef struct XSAttributeGroupDefinition XSAttributeGroupDefinition, *PXSAttributeGroupDefinition;

struct XSAttributeGroupDefinition {
};

typedef struct XSTypeDefinition XSTypeDefinition, *PXSTypeDefinition;

struct XSTypeDefinition {
};

typedef struct XMLDTDDescription XMLDTDDescription, *PXMLDTDDescription;

struct XMLDTDDescription {
};

typedef struct ValueVectorOf<xercesc_2_7::SchemaGrammar*> ValueVectorOf<xercesc_2_7::SchemaGrammar*>, *PValueVectorOf<xercesc_2_7::SchemaGrammar*>;

struct ValueVectorOf<xercesc_2_7::SchemaGrammar*> {
};

typedef struct RefHashTableOf<xercesc_2_7::Grammar> RefHashTableOf<xercesc_2_7::Grammar>, *PRefHashTableOf<xercesc_2_7::Grammar>;

struct RefHashTableOf<xercesc_2_7::Grammar> {
};

typedef struct IdentityConstraint IdentityConstraint, *PIdentityConstraint;

struct IdentityConstraint {
};

typedef struct XSNamespaceItem XSNamespaceItem, *PXSNamespaceItem;

struct XSNamespaceItem {
};

typedef struct XMLSchemaDescription XMLSchemaDescription, *PXMLSchemaDescription;

struct XMLSchemaDescription {
};

typedef struct XMLGrammarDescription XMLGrammarDescription, *PXMLGrammarDescription;

struct XMLGrammarDescription {
};

typedef struct XSNotationDeclaration XSNotationDeclaration, *PXSNotationDeclaration;

struct XSNotationDeclaration {
};

typedef struct XMLAttDef XMLAttDef, *PXMLAttDef;

struct XMLAttDef {
};

typedef struct Grammar Grammar, *PGrammar;

struct Grammar {
};

typedef struct XMLTranscoder XMLTranscoder, *PXMLTranscoder;

struct XMLTranscoder {
};

typedef struct RefHashTableOf<xercesc_2_7::DatatypeValidator> RefHashTableOf<xercesc_2_7::DatatypeValidator>, *PRefHashTableOf<xercesc_2_7::DatatypeValidator>;

struct RefHashTableOf<xercesc_2_7::DatatypeValidator> {
};

typedef struct SchemaElementDecl SchemaElementDecl, *PSchemaElementDecl;

struct SchemaElementDecl {
};

typedef struct XSModelGroupDefinition XSModelGroupDefinition, *PXSModelGroupDefinition;

struct XSModelGroupDefinition {
};

typedef struct XMLResourceIdentifier XMLResourceIdentifier, *PXMLResourceIdentifier;

struct XMLResourceIdentifier {
};

typedef struct XSElementDeclaration XSElementDeclaration, *PXSElementDeclaration;

struct XSElementDeclaration {
};

typedef struct XMLLCPTranscoder XMLLCPTranscoder, *PXMLLCPTranscoder;

struct XMLLCPTranscoder {
};

typedef struct DOMLocator DOMLocator, *PDOMLocator;

struct DOMLocator {
};

typedef struct DTDElementDecl DTDElementDecl, *PDTDElementDecl;

struct DTDElementDecl {
};

typedef struct DTDAttDef DTDAttDef, *PDTDAttDef;

struct DTDAttDef {
};

typedef struct DTDGrammar DTDGrammar, *PDTDGrammar;

struct DTDGrammar {
};

typedef struct IC_Field IC_Field, *PIC_Field;

struct IC_Field {
};

typedef struct nothrow_t nothrow_t, *Pnothrow_t;

struct nothrow_t {
    undefined field0_0x0;
};

typedef long XMLSSize_t;

typedef struct XMLRefInfo XMLRefInfo, *PXMLRefInfo;

typedef struct XSerializable XSerializable, *PXSerializable;

struct XSerializable {
    int (** _vptr.XSerializable)(...);
};

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

typedef struct LastExtEntityInfo LastExtEntityInfo, *PLastExtEntityInfo;

struct LastExtEntityInfo { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with systemId]
    XMLCh * systemId;
    XMLCh * publicId;
    XMLSSize_t lineNumber;
    XMLSSize_t colNumber;
};

typedef struct XProtoType XProtoType, *PXProtoType;

struct XProtoType {
    XMLByte * fClassName;
    XSerializable * (* fCreateObject)(struct MemoryManager *);
};

typedef struct XMLDeleter XMLDeleter, *PXMLDeleter;

struct XMLDeleter {
    int (** _vptr.XMLDeleter)(...);
};

typedef enum ErrTypes {
    ErrType_Warning=0,
    ErrType_Error=1,
    ErrType_Fatal=2,
    ErrTypes_Unknown=3
} ErrTypes;

typedef enum States {
    InWhitespace=0,
    InContent=1
} States;


// WARNING! conflicting data type names: /DWARF/DTDScanner.cpp/xercesc_2_7/DTDScanner/scanComment/States - /DWARF/DTDScanner.cpp/xercesc_2_7/DTDScanner/scanAttValue/States

typedef struct ContentSpecNode ContentSpecNode, *PContentSpecNode;

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

typedef struct XMemory XMemory, *PXMemory;

struct XMemory {
    undefined field0_0x0;
};

struct OutOfMemoryException {
    struct XMemory super_XMemory;
};

typedef enum CreateReasons {
    NoReason=0,
    Declared=1,
    AttList=2,
    InContentModel=3,
    AsRootElem=4,
    JustFaultIn=5
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

typedef struct GrammarResolver GrammarResolver, *PGrammarResolver;

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

typedef struct XMLString XMLString, *PXMLString;

struct XMLString {
    undefined field0_0x0;
};

typedef struct NameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl> NameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl>, *PNameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl>;

struct NameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl> {
    struct DTDEntityDecl * fData;
    struct NameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl> * fNext;
};

typedef struct NameIdPool<xercesc_2_7::DTDEntityDecl> NameIdPool<xercesc_2_7::DTDEntityDecl>, *PNameIdPool<xercesc_2_7::DTDEntityDecl>;

struct NameIdPool<xercesc_2_7::DTDEntityDecl> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fMemoryManager]
    struct MemoryManager * fMemoryManager;
    struct NameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl> * * fBucketList;
    struct DTDEntityDecl * * fIdPtrs;
    uint fIdPtrsCount;
    uint fIdCounter;
    uint fHashModulus;
    undefined field6_0x24;
    undefined field7_0x25;
    undefined field8_0x26;
    undefined field9_0x27;
};

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
    Children=3,
    ModelTypes_Count=4
} ModelTypes;

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

typedef struct FlagJanitor<bool> FlagJanitor<bool>, *PFlagJanitor<bool>;

struct FlagJanitor<bool> {
    bool fOldVal;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    bool * fValPtr;
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

typedef struct DTDScanner DTDScanner, *PDTDScanner;

struct DTDScanner { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with _vptr.DTDScanner]
    int (** _vptr.DTDScanner)(...);
    struct MemoryManager * fMemoryManager;
    struct MemoryManager * fGrammarPoolMemoryManager;
    struct DocTypeHandler * fDocTypeHandler;
    struct DTDAttDef * fDumAttDef;
    struct DTDElementDecl * fDumElemDecl;
    struct DTDEntityDecl * fDumEntityDecl;
    bool fInternalSubset;
    undefined field8_0x39;
    undefined field9_0x3a;
    undefined field10_0x3b;
    uint fNextAttrId;
    struct DTDGrammar * fDTDGrammar;
    struct XMLBufferMgr * fBufMgr;
    struct ReaderMgr * fReaderMgr;
    struct XMLScanner * fScanner;
    struct NameIdPool<xercesc_2_7::DTDEntityDecl> * fPEntityDeclPool;
    uint fEmptyNamespaceId;
    uint fDocTypeReaderId;
};

typedef enum EntityExpRes {
    EntityExp_Failed=0,
    EntityExp_Pushed=1,
    EntityExp_Returned=2
} EntityExpRes;

typedef enum IDTypes {
    IDType_Public=0,
    IDType_External=1,
    IDType_Either=2
} IDTypes;

typedef enum anon_enum_32.conflict66a6 {
    TOP_LEVEL_SCOPE=-2,
    UNKNOWN_SCOPE=-1
} anon_enum_32.conflict66a6;

typedef struct DOMError DOMError, *PDOMError;

struct DOMError {
    int (** _vptr.DOMError)(...);
};

typedef enum ErrorSeverity {
    DOM_SEVERITY_WARNING=0,
    DOM_SEVERITY_ERROR=1,
    DOM_SEVERITY_FATAL_ERROR=2
} ErrorSeverity;

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

typedef struct XMLValid XMLValid, *PXMLValid;

struct XMLValid {
    undefined field0_0x0;
};


// WARNING! conflicting data type names: /DWARF/XMLValidityCodes.hpp/xercesc_2_7/XMLValid/Codes - /DWARF/XMLErrorCodes.hpp/xercesc_2_7/XMLErrs/Codes

typedef struct Janitor<xercesc_2_7::InputSource> Janitor<xercesc_2_7::InputSource>, *PJanitor<xercesc_2_7::InputSource>;

struct Janitor<xercesc_2_7::InputSource> { // Missing member super_XMemory : XMemory at offset 0x0 [conflict with fData]
    struct InputSource * fData;
};

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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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




ContentSpecNode *
xercesc_2_7::makeRepNode(XMLCh testCh,ContentSpecNode *prevNode,MemoryManager *manager)

{
  ContentSpecNode *pCVar1;
  
  if (testCh == 0x3f) {
    pCVar1 = (ContentSpecNode *)xercesc_2_7::XMemory::operator_new(0x40,manager);
    ContentSpecNode::ContentSpecNode
              (pCVar1,ZeroOrOne,prevNode,(ContentSpecNode *)0x0,true,true,manager);
    prevNode = pCVar1;
  }
  else if (testCh == 0x2b) {
    pCVar1 = (ContentSpecNode *)xercesc_2_7::XMemory::operator_new(0x40,manager);
    ContentSpecNode::ContentSpecNode
              (pCVar1,OneOrMore,prevNode,(ContentSpecNode *)0x0,true,true,manager);
    prevNode = pCVar1;
  }
  else if (testCh == 0x2a) {
    pCVar1 = (ContentSpecNode *)xercesc_2_7::XMemory::operator_new(0x40,manager);
    ContentSpecNode::ContentSpecNode
              (pCVar1,ZeroOrMore,prevNode,(ContentSpecNode *)0x0,true,true,manager);
    prevNode = pCVar1;
  }
  return prevNode;
}



void __thiscall
xercesc_2_7::DTDScanner::DTDScanner
          (DTDScanner *this,DTDGrammar *dtdGrammar,DocTypeHandler *docTypeHandler,
          MemoryManager *grammarPoolMemoryManager,MemoryManager *manager)

{
  NameIdPool_xercesc_2_7__DTDEntityDecl_ *this_00;
  
  XMemory::XMemory((XMemory *)this);
  this->_vptr_DTDScanner = (anon_subr_int_varargs **)&PTR__DTDScanner_0010b410;
  this->fMemoryManager = manager;
  this->fGrammarPoolMemoryManager = grammarPoolMemoryManager;
  this->fDocTypeHandler = docTypeHandler;
  this->fDumAttDef = (DTDAttDef *)0x0;
  this->fDumElemDecl = (DTDElementDecl *)0x0;
  this->fDumEntityDecl = (DTDEntityDecl *)0x0;
  this->fInternalSubset = false;
  this->fNextAttrId = 1;
  this->fDTDGrammar = dtdGrammar;
  this->fBufMgr = (XMLBufferMgr *)0x0;
  this->fReaderMgr = (ReaderMgr *)0x0;
  this->fScanner = (XMLScanner *)0x0;
  this->fPEntityDeclPool = (NameIdPool_xercesc_2_7__DTDEntityDecl_ *)0x0;
  this->fEmptyNamespaceId = 0;
  this->fDocTypeReaderId = 0;
  this_00 = (NameIdPool_xercesc_2_7__DTDEntityDecl_ *)
            xercesc_2_7::XMemory::operator_new(0x28,this->fMemoryManager);
  NameIdPool<xercesc_2_7::DTDEntityDecl>::NameIdPool(this_00,0x6d,0x80,this->fMemoryManager);
  this->fPEntityDeclPool = this_00;
  return;
}



void __thiscall xercesc_2_7::DTDScanner::_DTDScanner(DTDScanner *this)

{
  long *plVar1;
  DTDEntityDecl *pDVar2;
  NameIdPool_xercesc_2_7__DTDEntityDecl_ *this_00;
  void *in_RSI;
  
  this->_vptr_DTDScanner = (anon_subr_int_varargs **)&PTR__DTDScanner_0010b410;
  plVar1 = (long *)this->fDumAttDef;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  plVar1 = (long *)this->fDumElemDecl;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  pDVar2 = this->fDumEntityDecl;
  if (pDVar2 != (DTDEntityDecl *)0x0) {
    (**(code **)(*(long *)pDVar2 + 8))(pDVar2);
  }
  this_00 = this->fPEntityDeclPool;
  if (this_00 != (NameIdPool_xercesc_2_7__DTDEntityDecl_ *)0x0) {
    NameIdPool<xercesc_2_7::DTDEntityDecl>::_NameIdPool(this_00);
    xercesc_2_7::XMemory::operator_delete((XMemory *)this_00,in_RSI);
  }
  return;
}



void __thiscall xercesc_2_7::DTDScanner::_DTDScanner(DTDScanner *this)

{
  void *in_RSI;
  
  _DTDScanner(this);
  xercesc_2_7::XMemory::operator_delete((XMemory *)this,in_RSI);
  return;
}



void __thiscall
xercesc_2_7::DTDScanner::setScannerInfo
          (DTDScanner *this,XMLScanner *owningScanner,ReaderMgr *readerMgr,XMLBufferMgr *bufMgr)

{
  bool bVar1;
  uint uVar2;
  
  this->fScanner = owningScanner;
  this->fReaderMgr = readerMgr;
  this->fBufMgr = bufMgr;
  bVar1 = XMLScanner::getDoNamespaces(this->fScanner);
  if (bVar1 == false) {
    this->fEmptyNamespaceId = 0;
  }
  else {
    uVar2 = XMLScanner::getEmptyNamespaceId(this->fScanner);
    this->fEmptyNamespaceId = uVar2;
  }
  uVar2 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  this->fDocTypeReaderId = uVar2;
  return;
}



bool __thiscall
xercesc_2_7::DTDScanner::checkForPERef(DTDScanner *this,bool inLiteral,bool inMarkup)

{
  char cVar1;
  bool bVar2;
  bool gotSpace;
  
  cVar1 = xercesc_2_7::ReaderMgr::skippedSpace();
  gotSpace = cVar1 != '\0';
  if (gotSpace) {
    xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
  }
  cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  while (cVar1 == '\x01') {
    bVar2 = expandPERef(this,false,inLiteral,inMarkup,false);
    if (bVar2 != true) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
    cVar1 = xercesc_2_7::ReaderMgr::skippedSpace();
    if (cVar1 != '\0') {
      xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
      gotSpace = true;
    }
    cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  }
  return gotSpace;
}



bool __thiscall
xercesc_2_7::DTDScanner::expandPERef
          (DTDScanner *this,bool scanExternal,bool inLiteral,bool inMarkup,bool throwEndOfExt)

{
  long lVar1;
  ReaderMgr *this_00;
  XMLScanner *pXVar2;
  NameIdPool_xercesc_2_7__DTDEntityDecl_ *this_01;
  ushort *puVar3;
  MemoryManager *memoryManager;
  bool bVar4;
  char cVar5;
  uint uVar6;
  XMLBuffer *toFill;
  XMLCh *pXVar7;
  DTDEntityDecl *this_02;
  XMLValidator *pXVar8;
  XMLCh *pXVar9;
  XMLCh *pXVar10;
  XMLReader *this_03;
  RuntimeException *this_04;
  XMLEntityHandler *pXVar11;
  XMLEntityDecl *pXVar12;
  long in_FS_OFFSET;
  Types local_b8;
  undefined local_b1;
  uint readerNum;
  InputSource *srcUsed;
  Janitor_xercesc_2_7__InputSource_ janSrc;
  XMLEntityDecl *decl;
  XMLReader *valueReader;
  XMLReader *reader;
  XMLEntityHandler *entHandler;
  OutOfMemoryException *anon_var_0;
  XMLBufBid bbName;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLScanner::setHasNoDTD(this->fScanner,false);
  XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
  if ((this->fInternalSubset != false) && (inMarkup != false)) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  this_00 = this->fReaderMgr;
  toFill = XMLBufBid::getBuffer(&bbName);
  bVar4 = ReaderMgr::getName(this_00,toFill);
  if (bVar4 == true) {
    cVar5 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar5 != '\x01') {
      pXVar2 = this->fScanner;
      pXVar7 = XMLBufBid::getRawBuffer(&bbName);
      xercesc_2_7::XMLScanner::emitError
                ((Codes)pXVar2,(ushort *)0xe5,pXVar7,(ushort *)0x0,(ushort *)0x0);
    }
    this_01 = this->fPEntityDeclPool;
    pXVar7 = XMLBufBid::getRawBuffer(&bbName);
    this_02 = NameIdPool<xercesc_2_7::DTDEntityDecl>::getByKey(this_01,pXVar7);
    if (this_02 == (DTDEntityDecl *)0x0) {
      bVar4 = XMLScanner::getStandalone(this->fScanner);
      if (bVar4 == false) {
        bVar4 = XMLScanner::getDoValidation(this->fScanner);
        if (bVar4 != false) {
          pXVar8 = XMLScanner::getValidator(this->fScanner);
          pXVar7 = XMLBufBid::getRawBuffer(&bbName);
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)pXVar8,(ushort *)0x55,pXVar7,(ushort *)0x0,(ushort *)0x0);
        }
      }
      else {
        pXVar2 = this->fScanner;
        pXVar7 = XMLBufBid::getRawBuffer(&bbName);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar2,(ushort *)0xe3,pXVar7,(ushort *)0x0,(ushort *)0x0);
      }
      local_b1 = 0;
    }
    else {
      bVar4 = XMLScanner::getDoValidation(this->fScanner);
      if (((bVar4 == false) || (bVar4 = XMLScanner::getStandalone(this->fScanner), bVar4 == false))
         || (cVar5 = (**(code **)(*(long *)this_02 + 0x28))(this_02), cVar5 == '\x01')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pXVar8 = XMLScanner::getValidator(this->fScanner);
        pXVar7 = XMLBufBid::getRawBuffer(&bbName);
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)pXVar8,(ushort *)0x51,pXVar7,(ushort *)0x0,(ushort *)0x0);
      }
      bVar4 = XMLEntityDecl::isExternal(&this_02->super_XMLEntityDecl);
      if (bVar4 == false) {
        puVar3 = (ushort *)this->fReaderMgr;
        uVar6 = XMLEntityDecl::getValueLen(&this_02->super_XMLEntityDecl);
        pXVar7 = XMLEntityDecl::getValue(&this_02->super_XMLEntityDecl);
        pXVar9 = XMLEntityDecl::getName(&this_02->super_XMLEntityDecl);
        pXVar12 = (XMLEntityDecl *)
                  xercesc_2_7::ReaderMgr::createIntEntReader
                            (puVar3,(RefFrom)pXVar9,(uint)(inLiteral == false),(ushort *)0x0,
                             (uint)pXVar7,SUB41(uVar6,0),false);
        cVar5 = xercesc_2_7::ReaderMgr::pushReader((XMLReader *)this->fReaderMgr,pXVar12);
        if (cVar5 != '\x01') {
          pXVar2 = this->fScanner;
          pXVar7 = XMLEntityDecl::getName(&this_02->super_XMLEntityDecl);
          xercesc_2_7::XMLScanner::emitError
                    ((Codes)pXVar2,(ushort *)0xe6,pXVar7,(ushort *)0x0,(ushort *)0x0);
        }
      }
      else {
        puVar3 = (ushort *)this->fReaderMgr;
        XMLScanner::getDisableDefaultEntityResolution(this->fScanner);
        bVar4 = XMLScanner::getCalculateSrcOfs(this->fScanner);
        local_b8 = (Types)(inLiteral == false);
        pXVar7 = XMLEntityDecl::getPublicId(&this_02->super_XMLEntityDecl);
        pXVar9 = XMLEntityDecl::getSystemId(&this_02->super_XMLEntityDecl);
        pXVar10 = XMLEntityDecl::getBaseURI(&this_02->super_XMLEntityDecl);
        this_03 = (XMLReader *)
                  xercesc_2_7::ReaderMgr::createReader
                            (puVar3,pXVar10,pXVar9,SUB81(pXVar7,0),RefFrom_Literal,local_b8,
                             Source_Internal,(InputSource **)0x1,true,bVar4);
        Janitor<xercesc_2_7::InputSource>::Janitor(&janSrc,srcUsed);
        if (this_03 == (XMLReader *)0x0) {
          this_04 = (RuntimeException *)__cxa_allocate_exception(0x30);
          memoryManager = this->fMemoryManager;
          if (srcUsed == (InputSource *)0x0) {
            pXVar7 = XMLEntityDecl::getSystemId(&this_02->super_XMLEntityDecl);
          }
          else {
            pXVar7 = (XMLCh *)(**(code **)(*(long *)srcUsed + 0x28))(srcUsed);
          }
          RuntimeException::RuntimeException
                    (this_04,"DTDScanner.cpp",0x115,Gen_CouldNotOpenExtEntity,pXVar7,(XMLCh *)0x0,
                     (XMLCh *)0x0,(XMLCh *)0x0,memoryManager);
                    // WARNING: Subroutine does not return
          __cxa_throw(this_04,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
        }
        XMLReader::setThrowAtEnd(this_03,throwEndOfExt);
        cVar5 = xercesc_2_7::ReaderMgr::pushReader
                          ((XMLReader *)this->fReaderMgr,(XMLEntityDecl *)this_03);
        if (cVar5 == '\x01') {
          if (scanExternal == false) {
            cVar5 = xercesc_2_7::XMLScanner::checkXMLDecl(SUB81(this->fScanner,0));
            if (cVar5 != '\0') {
              scanTextDecl(this);
            }
          }
          else {
            pXVar11 = XMLScanner::getEntityHandler(this->fScanner);
            if (pXVar11 != (XMLEntityHandler *)0x0) {
              (*pXVar11->_vptr_XMLEntityHandler[7])(pXVar11,srcUsed);
            }
            ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
            scanExtSubsetDecl(this,false,false);
            if (pXVar11 != (XMLEntityHandler *)0x0) {
              (*pXVar11->_vptr_XMLEntityHandler[2])(pXVar11,srcUsed);
            }
          }
          bVar4 = true;
        }
        else {
          pXVar2 = this->fScanner;
          pXVar7 = XMLEntityDecl::getName(&this_02->super_XMLEntityDecl);
          xercesc_2_7::XMLScanner::emitError
                    ((Codes)pXVar2,(ushort *)0xe6,pXVar7,(ushort *)0x0,(ushort *)0x0);
          local_b1 = 0;
          bVar4 = false;
        }
        Janitor<xercesc_2_7::InputSource>::_Janitor(&janSrc);
        if (!bVar4) goto LAB_00100bca;
      }
      local_b1 = 1;
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    local_b1 = 0;
  }
LAB_00100bca:
  XMLBufBid::_XMLBufBid(&bbName);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (bool)local_b1;
}



bool __thiscall xercesc_2_7::DTDScanner::getQuotedString(DTDScanner *this,XMLBuffer *toFill)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  XMLCh toAppend;
  long in_FS_OFFSET;
  XMLCh quoteCh;
  XMLCh nextCh;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toFill);
  cVar2 = xercesc_2_7::ReaderMgr::skipIfQuote((ushort *)this->fReaderMgr);
  if (cVar2 == '\x01') {
    while( true ) {
      toAppend = xercesc_2_7::ReaderMgr::getNextChar();
      if (toAppend == quoteCh) break;
      if (toAppend == 0) {
        bVar3 = false;
        goto LAB_00100d74;
      }
      XMLBuffer::append(toFill,toAppend);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
LAB_00100d74:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return bVar3;
}



XMLAttDef * __thiscall
xercesc_2_7::DTDScanner::scanAttDef(DTDScanner *this,DTDElementDecl *parentElem,XMLBuffer *bufToUse)

{
  long lVar1;
  XMLScanner *pXVar2;
  MemoryManager *pMVar3;
  bool bVar4;
  char cVar5;
  AttTypes AVar6;
  DefAttTypes DVar7;
  uint uVar8;
  long lVar9;
  XMLCh *pXVar10;
  XMLCh *pXVar11;
  DTDAttDef *pDVar12;
  XMLValidator *pXVar13;
  ushort *puVar14;
  BaseRefVectorOf_short_unsigned_int_ *this_00;
  long in_FS_OFFSET;
  bool ok;
  bool isIgnored;
  int size;
  DTDAttDef *decl;
  BaseRefVectorOf_short_unsigned_int_ *enumVector;
  XMLCh fgDefault [8];
  XMLCh fgPreserve [9];
  XMLCh fgXMLSpace [10];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  checkForPERef(this,false,true);
  bVar4 = ReaderMgr::getName(this->fReaderMgr,bufToUse);
  if (bVar4 != true) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    decl = (DTDAttDef *)0x0;
    goto LAB_001017cd;
  }
  XMLBuffer::getRawBuffer(bufToUse);
  lVar9 = xercesc_2_7::DTDElementDecl::getAttDef((ushort *)parentElem);
  if (lVar9 == 0) {
    pXVar10 = XMLBuffer::getRawBuffer(bufToUse);
    decl = (DTDAttDef *)xercesc_2_7::XMemory::operator_new(0x48,this->fGrammarPoolMemoryManager);
    xercesc_2_7::DTDAttDef::DTDAttDef
              (decl,pXVar10,AttTypes_Min,Implied,this->fGrammarPoolMemoryManager);
    uVar8 = this->fNextAttrId;
    this->fNextAttrId = uVar8 + 1;
    XMLAttDef::setId((XMLAttDef *)decl,uVar8);
    bVar4 = isReadingExternalEntity(this);
    XMLAttDef::setExternalAttDeclaration((XMLAttDef *)decl,bVar4);
    xercesc_2_7::DTDElementDecl::addAttDef((DTDAttDef *)parentElem);
  }
  else {
    pXVar2 = this->fScanner;
    pXVar10 = XMLElementDecl::getFullName((XMLElementDecl *)parentElem);
    pXVar11 = XMLBuffer::getRawBuffer(bufToUse);
    xercesc_2_7::XMLScanner::emitError((Codes)pXVar2,(ushort *)0x3,pXVar11,pXVar10,(ushort *)0x0);
    if (this->fDumAttDef == (DTDAttDef *)0x0) {
      pDVar12 = (DTDAttDef *)xercesc_2_7::XMemory::operator_new(0x48,this->fMemoryManager);
      xercesc_2_7::DTDAttDef::DTDAttDef(pDVar12,this->fMemoryManager);
      this->fDumAttDef = pDVar12;
      uVar8 = this->fNextAttrId;
      this->fNextAttrId = uVar8 + 1;
      XMLAttDef::setId((XMLAttDef *)this->fDumAttDef,uVar8);
    }
    puVar14 = (ushort *)this->fDumAttDef;
    XMLBuffer::getRawBuffer(bufToUse);
    xercesc_2_7::DTDAttDef::setName(puVar14);
    decl = this->fDumAttDef;
  }
  pDVar12 = this->fDumAttDef;
  bVar4 = checkForPERef(this,false,true);
  if (bVar4 != true) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  bVar4 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgCDATAString);
  if (bVar4 == false) {
    bVar4 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgIDString);
    if (bVar4 == false) {
      bVar4 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgEntitString);
      if (bVar4 == false) {
        bVar4 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgNmTokenString);
        if (bVar4 == false) {
          bVar4 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgNotationString);
          if (bVar4 == false) {
            cVar5 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
            if (cVar5 == '\0') {
              pXVar2 = this->fScanner;
              pXVar10 = XMLElementDecl::getFullName((XMLElementDecl *)parentElem);
              puVar14 = (ushort *)(**(code **)(*(long *)decl + 0x28))(decl);
              xercesc_2_7::XMLScanner::emitError
                        ((Codes)pXVar2,(ushort *)0xc9,puVar14,pXVar10,(ushort *)0x0);
              decl = (DTDAttDef *)0x0;
              goto LAB_001017cd;
            }
            XMLAttDef::setType((XMLAttDef *)decl,Enumeration);
            bVar4 = scanEnumeration(this,decl,bufToUse,false);
            if (bVar4 != true) {
              decl = (DTDAttDef *)0x0;
              goto LAB_001017cd;
            }
            pXVar10 = XMLBuffer::getRawBuffer(bufToUse);
            XMLAttDef::setEnumeration((XMLAttDef *)decl,pXVar10);
          }
          else {
            bVar4 = checkForPERef(this,false,true);
            if (bVar4 != true) {
              xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
            }
            XMLAttDef::setType((XMLAttDef *)decl,Notation);
            bVar4 = scanEnumeration(this,decl,bufToUse,true);
            if (bVar4 != true) {
              decl = (DTDAttDef *)0x0;
              goto LAB_001017cd;
            }
            pXVar10 = XMLBuffer::getRawBuffer(bufToUse);
            XMLAttDef::setEnumeration((XMLAttDef *)decl,pXVar10);
          }
        }
        else {
          cVar5 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
          if (cVar5 == '\0') {
            XMLAttDef::setType((XMLAttDef *)decl,NmToken);
          }
          else {
            XMLAttDef::setType((XMLAttDef *)decl,NmTokens);
          }
        }
      }
      else {
        cVar5 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
        if (cVar5 == '\0') {
          bVar4 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgIESString);
          if (bVar4 == false) {
            pXVar2 = this->fScanner;
            pXVar10 = XMLElementDecl::getFullName((XMLElementDecl *)parentElem);
            puVar14 = (ushort *)(**(code **)(*(long *)decl + 0x28))(decl);
            xercesc_2_7::XMLScanner::emitError
                      ((Codes)pXVar2,(ushort *)0xc9,puVar14,pXVar10,(ushort *)0x0);
            decl = (DTDAttDef *)0x0;
            goto LAB_001017cd;
          }
          XMLAttDef::setType((XMLAttDef *)decl,Entities);
        }
        else {
          XMLAttDef::setType((XMLAttDef *)decl,Entity);
        }
      }
    }
    else {
      bVar4 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgRefString);
      if (bVar4 == true) {
        cVar5 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
        if (cVar5 == '\x01') {
          XMLAttDef::setType((XMLAttDef *)decl,IDRefs);
        }
        else {
          XMLAttDef::setType((XMLAttDef *)decl,IDRef);
        }
      }
      else {
        XMLAttDef::setType((XMLAttDef *)decl,ID);
      }
    }
  }
  else {
    XMLAttDef::setType((XMLAttDef *)decl,AttTypes_Min);
  }
  bVar4 = checkForPERef(this,false,true);
  if (bVar4 != true) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  scanDefaultDecl(this,decl);
  bVar4 = XMLScanner::getDoValidation(this->fScanner);
  if (bVar4 != false) {
    AVar6 = XMLAttDef::getType((XMLAttDef *)decl);
    if (AVar6 == ID) {
      DVar7 = XMLAttDef::getDefaultType((XMLAttDef *)decl);
      if ((DVar7 == Implied) ||
         (DVar7 = XMLAttDef::getDefaultType((XMLAttDef *)decl), DVar7 == Required)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pXVar13 = XMLScanner::getValidator(this->fScanner);
        puVar14 = (ushort *)(**(code **)(*(long *)decl + 0x28))(decl);
        xercesc_2_7::XMLValidator::emitError
                  ((Codes)pXVar13,(ushort *)0x8,puVar14,(ushort *)0x0,(ushort *)0x0);
      }
    }
    fgXMLSpace[0] = 0x78;
    fgXMLSpace[1] = 0x6d;
    fgXMLSpace[2] = 0x6c;
    fgXMLSpace[3] = 0x3a;
    fgXMLSpace[4] = 0x73;
    fgXMLSpace[5] = 0x70;
    fgXMLSpace[6] = 0x61;
    fgXMLSpace[7] = 99;
    fgXMLSpace[8] = 0x65;
    fgXMLSpace[9] = 0;
    pXVar10 = (XMLCh *)(**(code **)(*(long *)decl + 0x28))(decl);
    bVar4 = XMLString::equals(pXVar10,fgXMLSpace);
    if (bVar4 != false) {
      fgPreserve[0] = 0x70;
      fgPreserve[1] = 0x72;
      fgPreserve[2] = 0x65;
      fgPreserve[3] = 0x73;
      fgPreserve[4] = 0x65;
      fgPreserve[5] = 0x72;
      fgPreserve[6] = 0x76;
      fgPreserve[7] = 0x65;
      fgPreserve[8] = 0;
      fgDefault[0] = 100;
      fgDefault[1] = 0x65;
      fgDefault[2] = 0x66;
      fgDefault[3] = 0x61;
      fgDefault[4] = 0x75;
      fgDefault[5] = 0x6c;
      fgDefault[6] = 0x74;
      fgDefault[7] = 0;
      bVar4 = false;
      AVar6 = XMLAttDef::getType((XMLAttDef *)decl);
      if (AVar6 == Enumeration) {
        pMVar3 = this->fMemoryManager;
        pXVar10 = XMLAttDef::getEnumeration((XMLAttDef *)decl);
        this_00 = (BaseRefVectorOf_short_unsigned_int_ *)
                  xercesc_2_7::XMLString::tokenizeString(pXVar10,pMVar3);
        uVar8 = BaseRefVectorOf<short_unsigned_int>::size(this_00);
        if (uVar8 == 1) {
          puVar14 = BaseRefVectorOf<short_unsigned_int>::elementAt(this_00,0);
          bVar4 = XMLString::equals(puVar14,fgDefault);
          if (bVar4 == false) {
            puVar14 = BaseRefVectorOf<short_unsigned_int>::elementAt(this_00,0);
            bVar4 = XMLString::equals(puVar14,fgPreserve);
            if (bVar4 == false) goto LAB_0010168a;
          }
LAB_00101732:
          bVar4 = true;
        }
        else {
LAB_0010168a:
          if (uVar8 == 2) {
            puVar14 = BaseRefVectorOf<short_unsigned_int>::elementAt(this_00,0);
            bVar4 = XMLString::equals(puVar14,fgDefault);
            if (bVar4 != false) {
              puVar14 = BaseRefVectorOf<short_unsigned_int>::elementAt(this_00,1);
              bVar4 = XMLString::equals(puVar14,fgPreserve);
              if (bVar4 != false) goto LAB_00101732;
            }
          }
          if (uVar8 == 2) {
            puVar14 = BaseRefVectorOf<short_unsigned_int>::elementAt(this_00,1);
            bVar4 = XMLString::equals(puVar14,fgDefault);
            if (bVar4 != false) {
              puVar14 = BaseRefVectorOf<short_unsigned_int>::elementAt(this_00,0);
              bVar4 = XMLString::equals(puVar14,fgPreserve);
              if (bVar4 != false) goto LAB_00101732;
            }
          }
          bVar4 = false;
        }
        if (this_00 != (BaseRefVectorOf_short_unsigned_int_ *)0x0) {
          (*this_00->_vptr_BaseRefVectorOf[1])(this_00);
        }
      }
      if (!bVar4) {
        pXVar13 = XMLScanner::getValidator(this->fScanner);
        xercesc_2_7::XMLValidator::emitError((Codes)pXVar13);
      }
    }
  }
  if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
    (*this->fDocTypeHandler->_vptr_DocTypeHandler[2])
              (this->fDocTypeHandler,parentElem,decl,(ulong)(decl == pDVar12));
  }
LAB_001017cd:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (XMLAttDef *)decl;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __thiscall xercesc_2_7::DTDScanner::scanAttListDecl(DTDScanner *this)

{
  long lVar1;
  ReaderMgr *this_00;
  DTDGrammar *pDVar2;
  code *pcVar3;
  DocTypeHandler *pDVar4;
  anon_subr_int_varargs *paVar5;
  bool bVar6;
  bool bVar7;
  XMLCh toCheck;
  uint uVar8;
  AttTypes AVar9;
  XMLBuffer *pXVar10;
  XMLCh *pXVar11;
  UnexpectedEOFException *this_01;
  XMLReader *this_02;
  XMLAttDef *this_03;
  XMLValidator *pXVar12;
  long in_FS_OFFSET;
  bool seenAnId;
  XMLCh nextCh;
  DTDElementDecl *elemDecl;
  XMLBuffer *tmpBuf;
  XMLAttDef *attDef;
  XMLBufBid bbName;
  XMLBufBid bbTmp;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar6 = checkForPERef(this,false,true);
  if (bVar6 == true) {
    XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
    this_00 = this->fReaderMgr;
    pXVar10 = XMLBufBid::getBuffer(&bbName);
    bVar6 = ReaderMgr::getName(this_00,pXVar10);
    if (bVar6 == true) {
      pDVar2 = this->fDTDGrammar;
      pcVar3 = *(code **)(*(long *)this->fDTDGrammar + 0x58);
      pXVar11 = XMLBufBid::getRawBuffer(&bbName);
      elemDecl = (DTDElementDecl *)(*pcVar3)(pDVar2,this->fEmptyNamespaceId,0,pXVar11,0xfffffffe);
      if (elemDecl == (DTDElementDecl *)0x0) {
        pXVar11 = XMLBufBid::getRawBuffer(&bbName);
        elemDecl = (DTDElementDecl *)
                   xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
        xercesc_2_7::DTDElementDecl::DTDElementDecl
                  (elemDecl,pXVar11,this->fEmptyNamespaceId,Any,this->fGrammarPoolMemoryManager);
        XMLElementDecl::setCreateReason((XMLElementDecl *)elemDecl,AttList);
        bVar6 = isReadingExternalEntity(this);
        XMLElementDecl::setExternalElemDeclaration((XMLElementDecl *)elemDecl,bVar6);
        (**(code **)(*(long *)this->fDTDGrammar + 0x88))(this->fDTDGrammar,elemDecl,0);
      }
      if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
        (*this->fDocTypeHandler->_vptr_DocTypeHandler[0xe])(this->fDocTypeHandler,elemDecl);
      }
      XMLBufBid::XMLBufBid(&bbTmp,this->fBufMgr);
      pXVar10 = XMLBufBid::getBuffer(&bbTmp);
      bVar6 = false;
      while( true ) {
        toCheck = xercesc_2_7::ReaderMgr::peekNextChar();
        if (toCheck == 0) {
          this_01 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
          UnexpectedEOFException::UnexpectedEOFException
                    (this_01,"DTDScanner.cpp",0x292,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
          __cxa_throw(this_01,&UnexpectedEOFException::typeinfo,
                      UnexpectedEOFException::_UnexpectedEOFException);
        }
        if (toCheck == 0x3e) break;
        this_02 = ReaderMgr::getCurrentReader(this->fReaderMgr);
        bVar7 = XMLReader::isWhitespace(this_02,toCheck);
        if (bVar7 == false) {
          if (toCheck == 0x25) {
            xercesc_2_7::ReaderMgr::getNextChar();
            expandPERef(this,false,false,true,false);
          }
          else {
            this_03 = scanAttDef(this,elemDecl,pXVar10);
            if (this_03 == (XMLAttDef *)0x0) {
              ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
              goto LAB_00101ca5;
            }
            bVar7 = XMLScanner::getDoValidation(this->fScanner);
            if ((bVar7 != false) && (AVar9 = XMLAttDef::getType(this_03), AVar9 == ID)) {
              if (bVar6) {
                pXVar12 = XMLScanner::getValidator(this->fScanner);
                pXVar11 = XMLElementDecl::getFullName((XMLElementDecl *)elemDecl);
                xercesc_2_7::XMLValidator::emitError
                          ((Codes)pXVar12,(ushort *)0xb,pXVar11,(ushort *)0x0,(ushort *)0x0);
              }
              bVar6 = true;
            }
          }
        }
        else if (this->fDocTypeHandler == (DocTypeHandler *)0x0) {
          xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
        }
        else {
          xercesc_2_7::ReaderMgr::getSpaces((XMLBuffer *)this->fReaderMgr);
          pDVar4 = this->fDocTypeHandler;
          paVar5 = this->fDocTypeHandler->_vptr_DocTypeHandler[6];
          uVar8 = XMLBuffer::getLen(pXVar10);
          pXVar11 = XMLBuffer::getRawBuffer(pXVar10);
          (*paVar5)(pDVar4,pXVar11,(ulong)uVar8);
        }
      }
      xercesc_2_7::ReaderMgr::getNextChar();
LAB_00101ca5:
      if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
        (*this->fDocTypeHandler->_vptr_DocTypeHandler[8])(this->fDocTypeHandler,elemDecl);
      }
      XMLBufBid::_XMLBufBid(&bbTmp);
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
    XMLBufBid::_XMLBufBid(&bbName);
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



bool __thiscall
xercesc_2_7::DTDScanner::scanAttValue
          (DTDScanner *this,XMLCh *attrName,XMLBuffer *toFill,AttTypes type)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  EntityExpRes EVar5;
  UnexpectedEOFException *this_00;
  XMLReader *pXVar6;
  long in_FS_OFFSET;
  bool escaped;
  bool firstNonWS;
  bool gotLeadingSurrogate;
  XMLCh quoteCh;
  XMLCh nextCh;
  XMLCh secondCh;
  States curState;
  uint curReader;
  EndOfEntityException *anon_var_0;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toFill);
  cVar2 = xercesc_2_7::ReaderMgr::skipIfQuote((ushort *)this->fReaderMgr);
  if (cVar2 != '\x01') {
    bVar3 = false;
LAB_00102164:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return bVar3;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  curReader = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  secondCh = 0;
  curState = InContent;
  firstNonWS = false;
  gotLeadingSurrogate = false;
LAB_00101e0b:
  do {
    nextCh = xercesc_2_7::ReaderMgr::getNextChar();
    if (nextCh == 0) {
      this_00 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
      UnexpectedEOFException::UnexpectedEOFException
                (this_00,"DTDScanner.cpp",0x313,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&UnexpectedEOFException::typeinfo,
                  UnexpectedEOFException::_UnexpectedEOFException);
    }
    if (nextCh == quoteCh) {
      uVar4 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      if (curReader == uVar4) {
        bVar3 = true;
        goto LAB_00102164;
      }
      uVar4 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      if (uVar4 < curReader) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        bVar3 = false;
        goto LAB_00102164;
      }
    }
    escaped = false;
    if (nextCh == 0x26) {
      EVar5 = scanEntityRef(this,&nextCh,&secondCh,&escaped);
      if (EVar5 != EntityExp_Returned) {
        gotLeadingSurrogate = false;
        goto LAB_00101e0b;
      }
    }
    else if ((nextCh < 0xd800) || (0xdbff < nextCh)) {
      if (gotLeadingSurrogate == false) {
        pXVar6 = ReaderMgr::getCurrentReader(this->fReaderMgr);
        bVar3 = XMLReader::isXMLChar(pXVar6,nextCh);
        if (bVar3 != true) {
          xercesc_2_7::XMLString::binToText((uint)nextCh,tmpBuf,8,0x10,this->fMemoryManager);
          xercesc_2_7::XMLScanner::emitError
                    ((Codes)this->fScanner,(ushort *)0xda,attrName,tmpBuf,(ushort *)0x0);
        }
      }
      else if ((nextCh < 0xdc00) || (0xdfff < nextCh)) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      gotLeadingSurrogate = false;
    }
    else if (gotLeadingSurrogate == false) {
      gotLeadingSurrogate = true;
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
    if ((escaped != true) && (nextCh == 0x3c)) {
      xercesc_2_7::XMLScanner::emitError
                ((Codes)this->fScanner,(ushort *)0xf8,attrName,(ushort *)0x0,(ushort *)0x0);
    }
    if (type == AttTypes_Min) {
      if ((escaped != true) && (((nextCh == 9 || (nextCh == 10)) || (nextCh == 0xd)))) {
        nextCh = 0x20;
      }
LAB_0010211c:
      XMLBuffer::append(toFill,nextCh);
      if (secondCh != 0) {
        XMLBuffer::append(toFill,secondCh);
        secondCh = 0;
      }
    }
    else if (curState == InWhitespace) {
      pXVar6 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      bVar3 = XMLReader::isWhitespace(pXVar6,nextCh);
      if (bVar3 != true) {
        if (firstNonWS != false) {
          XMLBuffer::append(toFill,0x20);
        }
        curState = InContent;
        firstNonWS = true;
        goto LAB_0010211c;
      }
    }
    else {
      if (curState != InContent) goto LAB_0010211c;
      pXVar6 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      bVar3 = XMLReader::isWhitespace(pXVar6,nextCh);
      if (bVar3 == false) {
        firstNonWS = true;
        goto LAB_0010211c;
      }
      curState = InWhitespace;
    }
  } while( true );
}



bool __thiscall xercesc_2_7::DTDScanner::scanCharRef(DTDScanner *this,XMLCh *first,XMLCh *second)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  UnexpectedEOFException *this_00;
  XMLReader *pXVar5;
  long in_FS_OFFSET;
  bool gotOne;
  XMLCh nextCh;
  uint value;
  uint radix;
  uint nextVal;
  XMLCh tmpStr [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = false;
  value = 0;
  radix = 10;
  cVar2 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar2 == '\0') {
    cVar2 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar2 != '\0') {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      radix = 0x10;
    }
  }
  else {
    radix = 0x10;
  }
  while( true ) {
    uVar4 = xercesc_2_7::ReaderMgr::peekNextChar();
    if (uVar4 == 0) {
      this_00 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
      UnexpectedEOFException::UnexpectedEOFException
                (this_00,"DTDScanner.cpp",0x3bc,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&UnexpectedEOFException::typeinfo,
                  UnexpectedEOFException::_UnexpectedEOFException);
    }
    if (uVar4 == 0x3b) break;
    if ((uVar4 < 0x30) || (0x39 < uVar4)) {
      if ((uVar4 < 0x41) || (0x46 < uVar4)) {
        if ((uVar4 < 0x61) || (0x66 < uVar4)) {
          if (bVar3) {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
          else {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
          bVar3 = false;
          goto LAB_001024ec;
        }
        nextVal = uVar4 - 0x57;
      }
      else {
        nextVal = uVar4 - 0x37;
      }
    }
    else {
      nextVal = uVar4 - 0x30;
    }
    if (nextVal < radix) {
      value = nextVal + value * radix;
    }
    else {
      tmpStr[1] = 0;
      tmpStr[0] = uVar4;
      xercesc_2_7::XMLScanner::emitError
                ((Codes)this->fScanner,(ushort *)0x111,tmpStr,(ushort *)0x0,(ushort *)0x0);
    }
    bVar3 = true;
    xercesc_2_7::ReaderMgr::getNextChar();
  }
  xercesc_2_7::ReaderMgr::getNextChar();
  if ((value < 0x10000) || (0x10ffff < value)) {
    if (0xfffd < value) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      bVar3 = false;
      goto LAB_001024ec;
    }
    *first = (XMLCh)value;
    *second = 0;
    pXVar5 = ReaderMgr::getCurrentReader(this->fReaderMgr);
    bVar3 = XMLReader::isXMLChar(pXVar5,*first);
    if (bVar3 == true) {
LAB_001024a6:
      bVar3 = false;
    }
    else {
      pXVar5 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      bVar3 = XMLReader::isControlChar(pXVar5,*first);
      if (bVar3 == true) goto LAB_001024a6;
      bVar3 = true;
    }
    if (bVar3) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      bVar3 = false;
      goto LAB_001024ec;
    }
  }
  else {
    *first = (short)(value - 0x10000 >> 10) + 0xd800;
    *second = ((ushort)(value - 0x10000) & 0x3ff) + 0xdc00;
  }
  bVar3 = true;
LAB_001024ec:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return bVar3;
}



ContentSpecNode * __thiscall
xercesc_2_7::DTDScanner::scanChildren(DTDScanner *this,DTDElementDecl *elemDecl,XMLBuffer *bufToUse)

{
  DTDGrammar *pDVar1;
  code *pcVar2;
  XMLScanner *pXVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  XMLCh XVar7;
  uint uVar8;
  uint uVar9;
  NodeTypes NVar10;
  XMLValidator *pXVar11;
  ContentSpecNode *pCVar12;
  ContentSpecNode *pCVar13;
  XMLCh *pXVar14;
  QName *pQVar15;
  bool gotSpaces;
  XMLCh repCh_1;
  XMLCh opCh;
  XMLCh repCh_2;
  XMLCh repCh;
  NodeTypes curType;
  uint curReader;
  Codes anon_var_0;
  ContentSpecNode *curNode;
  XMLElementDecl *decl;
  ContentSpecNode *headNode;
  ContentSpecNode *lastNode;
  XMLElementDecl *decl_1;
  ContentSpecNode *tmpNode;
  ContentSpecNode *tmpLeaf;
  ContentSpecNode *tmpLeaf2;
  ContentSpecNode *newCur_1;
  ContentSpecNode *subNode;
  ContentSpecNode *newCur;
  ContentSpecNode *saveFirst;
  ContentSpecNode *retNode;
  
  checkForPERef(this,false,true);
  cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar4 == '\0') {
    bVar5 = ReaderMgr::getName(this->fReaderMgr,bufToUse);
    if (bVar5 != true) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      return (ContentSpecNode *)0x0;
    }
    pDVar1 = this->fDTDGrammar;
    pcVar2 = *(code **)(*(long *)this->fDTDGrammar + 0x58);
    pXVar14 = XMLBuffer::getRawBuffer(bufToUse);
    decl = (XMLElementDecl *)(*pcVar2)(pDVar1,this->fEmptyNamespaceId,0,pXVar14,0xfffffffe);
    if (decl == (XMLElementDecl *)0x0) {
      pXVar14 = XMLBuffer::getRawBuffer(bufToUse);
      decl = (XMLElementDecl *)
             xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
      xercesc_2_7::DTDElementDecl::DTDElementDecl
                ((DTDElementDecl *)decl,pXVar14,this->fEmptyNamespaceId,Any,
                 this->fGrammarPoolMemoryManager);
      XMLElementDecl::setCreateReason(decl,InContentModel);
      bVar5 = isReadingExternalEntity(this);
      XMLElementDecl::setExternalElemDeclaration(decl,bVar5);
      (**(code **)(*(long *)this->fDTDGrammar + 0x88))(this->fDTDGrammar,decl,0);
    }
    pQVar15 = XMLElementDecl::getElementName(decl);
    curNode = (ContentSpecNode *)
              xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
    ContentSpecNode::ContentSpecNode(curNode,pQVar15,this->fGrammarPoolMemoryManager);
    bVar5 = checkForPERef(this,false,true);
    XVar7 = xercesc_2_7::ReaderMgr::peekNextChar();
    pCVar12 = makeRepNode(XVar7,curNode,this->fGrammarPoolMemoryManager);
    if (pCVar12 != curNode) {
      if (bVar5 != false) {
        cVar4 = xercesc_2_7::XMLScanner::emitErrorWillThrowException((Codes)this->fScanner);
        if ((cVar4 != '\0') && (pCVar12 != (ContentSpecNode *)0x0)) {
          (*(pCVar12->super_XSerializable)._vptr_XSerializable[1])(pCVar12);
        }
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      xercesc_2_7::ReaderMgr::getNextChar();
      curNode = pCVar12;
    }
  }
  else {
    uVar8 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
    curNode = scanChildren(this,elemDecl,bufToUse);
    if (curNode == (ContentSpecNode *)0x0) {
      return (ContentSpecNode *)0x0;
    }
    uVar9 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
    if ((uVar8 == uVar9) || (bVar5 = XMLScanner::getDoValidation(this->fScanner), bVar5 == false)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pXVar11 = XMLScanner::getValidator(this->fScanner);
      xercesc_2_7::XMLValidator::emitError((Codes)pXVar11);
    }
  }
  checkForPERef(this,false,true);
  sVar6 = xercesc_2_7::ReaderMgr::peekNextChar();
  if (((sVar6 == 0x2c) || (sVar6 == 0x7c)) || (sVar6 == 0x29)) {
    curType = UnknownType;
    if (sVar6 == 0x2c) {
      curType = Sequence;
      headNode = (ContentSpecNode *)
                 xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (headNode,Sequence,curNode,(ContentSpecNode *)0x0,true,true,
                 this->fGrammarPoolMemoryManager);
    }
    else if (sVar6 == 0x7c) {
      curType = Choice;
      headNode = (ContentSpecNode *)
                 xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (headNode,Choice,curNode,(ContentSpecNode *)0x0,true,true,
                 this->fGrammarPoolMemoryManager);
    }
    else {
      headNode = curNode;
      xercesc_2_7::ReaderMgr::getNextChar();
    }
    if ((sVar6 == 0x2c) || (sVar6 == 0x7c)) {
      lastNode = (ContentSpecNode *)0x0;
      curNode = headNode;
      while( true ) {
        while( true ) {
          while( true ) {
            while (bVar5 = ReaderMgr::lookingAtChar(this->fReaderMgr,0x25), bVar5 != false) {
              checkForPERef(this,false,true);
            }
            cVar4 = xercesc_2_7::ReaderMgr::skippedSpace();
            if (cVar4 == '\0') break;
            xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
          }
          cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
          if (cVar4 != '\0') {
            NVar10 = ContentSpecNode::getType(curNode);
            if ((NVar10 == Choice) ||
               (NVar10 = ContentSpecNode::getType(curNode), NVar10 == Sequence)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar5) &&
               (pCVar12 = ContentSpecNode::getSecond(curNode), pCVar12 == (ContentSpecNode *)0x0)) {
              pCVar12 = ContentSpecNode::orphanFirst(curNode);
              ContentSpecNode::setSecond(lastNode,pCVar12);
            }
            goto LAB_00103059;
          }
          cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
          if (cVar4 == '\0') {
            if (headNode != (ContentSpecNode *)0x0) {
              (*(headNode->super_XSerializable)._vptr_XSerializable[1])(headNode);
            }
            if (sVar6 == 0x2c) {
              xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
            }
            else {
              pXVar3 = this->fScanner;
              pXVar14 = XMLElementDecl::getFullName((XMLElementDecl *)elemDecl);
              xercesc_2_7::XMLScanner::emitError
                        ((Codes)pXVar3,(ushort *)0xf1,pXVar14,(ushort *)0x0,(ushort *)0x0);
            }
            return (ContentSpecNode *)0x0;
          }
          checkForPERef(this,false,true);
          cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
          if (cVar4 == '\0') break;
          uVar8 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
          pCVar12 = scanChildren(this,elemDecl,bufToUse);
          if (pCVar12 == (ContentSpecNode *)0x0) {
            if (headNode != (ContentSpecNode *)0x0) {
              (*(headNode->super_XSerializable)._vptr_XSerializable[1])(headNode);
            }
            return (ContentSpecNode *)0x0;
          }
          uVar9 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
          if ((uVar8 == uVar9) ||
             (bVar5 = XMLScanner::getDoValidation(this->fScanner), bVar5 == false)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            pXVar11 = XMLScanner::getValidator(this->fScanner);
            xercesc_2_7::XMLValidator::emitError((Codes)pXVar11);
          }
          pCVar13 = (ContentSpecNode *)
                    xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
          ContentSpecNode::ContentSpecNode
                    (pCVar13,curType,pCVar12,(ContentSpecNode *)0x0,true,true,
                     this->fGrammarPoolMemoryManager);
          ContentSpecNode::setSecond(curNode,pCVar13);
          lastNode = curNode;
          curNode = pCVar13;
        }
        bVar5 = ReaderMgr::getName(this->fReaderMgr,bufToUse);
        if (bVar5 != true) break;
        pDVar1 = this->fDTDGrammar;
        pcVar2 = *(code **)(*(long *)this->fDTDGrammar + 0x58);
        pXVar14 = XMLBuffer::getRawBuffer(bufToUse);
        decl_1 = (XMLElementDecl *)(*pcVar2)(pDVar1,this->fEmptyNamespaceId,0,pXVar14,0xfffffffe);
        if (decl_1 == (XMLElementDecl *)0x0) {
          pXVar14 = XMLBuffer::getRawBuffer(bufToUse);
          decl_1 = (XMLElementDecl *)
                   xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
          xercesc_2_7::DTDElementDecl::DTDElementDecl
                    ((DTDElementDecl *)decl_1,pXVar14,this->fEmptyNamespaceId,Any,
                     this->fGrammarPoolMemoryManager);
          XMLElementDecl::setCreateReason(decl_1,InContentModel);
          bVar5 = isReadingExternalEntity(this);
          XMLElementDecl::setExternalElemDeclaration(decl_1,bVar5);
          (**(code **)(*(long *)this->fDTDGrammar + 0x88))(this->fDTDGrammar,decl_1,0);
        }
        pQVar15 = XMLElementDecl::getElementName(decl_1);
        pCVar12 = (ContentSpecNode *)
                  xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
        ContentSpecNode::ContentSpecNode(pCVar12,pQVar15,this->fGrammarPoolMemoryManager);
        XVar7 = xercesc_2_7::ReaderMgr::peekNextChar();
        pCVar13 = makeRepNode(XVar7,pCVar12,this->fGrammarPoolMemoryManager);
        if (pCVar12 != pCVar13) {
          xercesc_2_7::ReaderMgr::getNextChar();
        }
        pCVar12 = (ContentSpecNode *)
                  xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
        ContentSpecNode::ContentSpecNode
                  (pCVar12,curType,pCVar13,(ContentSpecNode *)0x0,true,true,
                   this->fGrammarPoolMemoryManager);
        ContentSpecNode::setSecond(curNode,pCVar12);
        lastNode = curNode;
        curNode = pCVar12;
      }
      if (headNode != (ContentSpecNode *)0x0) {
        (*(headNode->super_XSerializable)._vptr_XSerializable[1])(headNode);
      }
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      pCVar12 = (ContentSpecNode *)0x0;
    }
    else {
LAB_00103059:
      XVar7 = xercesc_2_7::ReaderMgr::peekNextChar();
      pCVar12 = makeRepNode(XVar7,headNode,this->fGrammarPoolMemoryManager);
      if (pCVar12 != headNode) {
        xercesc_2_7::ReaderMgr::getNextChar();
      }
    }
  }
  else {
    if (curNode != (ContentSpecNode *)0x0) {
      (*(curNode->super_XSerializable)._vptr_XSerializable[1])(curNode);
    }
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    pCVar12 = (ContentSpecNode *)0x0;
  }
  return pCVar12;
}



void __thiscall xercesc_2_7::DTDScanner::scanComment(DTDScanner *this)

{
  long lVar1;
  DocTypeHandler *pDVar2;
  anon_subr_int_varargs *paVar3;
  bool bVar4;
  ushort toCheck;
  UnexpectedEOFException *this_00;
  XMLReader *this_01;
  XMLCh *pXVar5;
  long in_FS_OFFSET;
  bool gotLeadingSurrogate;
  XMLCh nextCh;
  States curState;
  XMLBufBid bbComment;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBufBid::XMLBufBid(&bbComment,this->fBufMgr);
  bVar4 = false;
  curState = InText;
  do {
    while( true ) {
      while( true ) {
        toCheck = xercesc_2_7::ReaderMgr::getNextChar();
        if (toCheck == 0) {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          this_00 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
          UnexpectedEOFException::UnexpectedEOFException
                    (this_00,"DTDScanner.cpp",0x58a,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
          __cxa_throw(this_00,&UnexpectedEOFException::typeinfo,
                      UnexpectedEOFException::_UnexpectedEOFException);
        }
        if ((toCheck < 0xd800) || (0xdbff < toCheck)) {
          if (bVar4) {
            if ((toCheck < 0xdc00) || (0xdfff < toCheck)) {
              xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
            }
          }
          else {
            this_01 = ReaderMgr::getCurrentReader(this->fReaderMgr);
            bVar4 = XMLReader::isXMLChar(this_01,toCheck);
            if (bVar4 != true) {
              xercesc_2_7::XMLString::binToText((uint)toCheck,tmpBuf,8,0x10,this->fMemoryManager);
              xercesc_2_7::XMLScanner::emitError
                        ((Codes)this->fScanner,(ushort *)0xc4,tmpBuf,(ushort *)0x0,(ushort *)0x0);
            }
          }
          bVar4 = false;
        }
        else if (bVar4) {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        }
        else {
          bVar4 = true;
        }
        if (curState != InText) break;
        if (toCheck == 0x2d) {
          curState = OneDash;
        }
        else {
          XMLBufBid::append(&bbComment,toCheck);
        }
      }
      if (curState != OneDash) break;
      if (toCheck == 0x2d) {
        curState = TwoDashes;
      }
      else {
        XMLBufBid::append(&bbComment,0x2d);
        XMLBufBid::append(&bbComment,toCheck);
        curState = InText;
      }
    }
  } while (curState != TwoDashes);
  if (toCheck == 0x3e) {
    if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
      pDVar2 = this->fDocTypeHandler;
      paVar3 = this->fDocTypeHandler->_vptr_DocTypeHandler[3];
      pXVar5 = XMLBufBid::getRawBuffer(&bbComment);
      (*paVar3)(pDVar2,pXVar5);
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
  }
  XMLBufBid::_XMLBufBid(&bbComment);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



bool __thiscall xercesc_2_7::DTDScanner::scanContentSpec(DTDScanner *this,DTDElementDecl *toFill)

{
  long lVar1;
  XMLScanner *pXVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  XMLCh *pXVar7;
  XMLValidator *pXVar8;
  XMLBuffer *bufToUse;
  ContentSpecNode *pCVar9;
  long in_FS_OFFSET;
  bool status;
  uint curReader;
  ContentSpecNode *resNode;
  XMLBufBid bbTmp;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgEmptyString);
  if (bVar3 == false) {
    bVar3 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgAnyString);
    if (bVar3 == false) {
      cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
      if (cVar4 == '\x01') {
        uVar5 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
        checkForPERef(this,false,true);
        bVar3 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgPCDATAString);
        if (bVar3 == false) {
          DTDElementDecl::setModelType(toFill,Children);
          XMLBufBid::XMLBufBid(&bbTmp,this->fBufMgr);
          bufToUse = XMLBufBid::getBuffer(&bbTmp);
          pCVar9 = scanChildren(this,toFill,bufToUse);
          status = pCVar9 != (ContentSpecNode *)0x0;
          if (status) {
            (**(code **)(*(long *)toFill + 0x60))(toFill,pCVar9);
          }
          XMLBufBid::_XMLBufBid(&bbTmp);
        }
        else {
          DTDElementDecl::setModelType(toFill,Mixed_Simple);
          status = scanMixed(this,toFill);
          bVar3 = XMLScanner::getDoValidation(this->fScanner);
          if (bVar3 != false) {
            (**(code **)(*(long *)toFill + 0x68))(toFill);
            cVar4 = xercesc_2_7::MixedContentModel::hasDups();
            if (cVar4 != '\0') {
              pXVar8 = XMLScanner::getValidator(this->fScanner);
              xercesc_2_7::XMLValidator::emitError((Codes)pXVar8);
            }
          }
        }
        uVar6 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
        if ((uVar5 == uVar6) ||
           (bVar3 = XMLScanner::getDoValidation(this->fScanner), bVar3 == false)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pXVar8 = XMLScanner::getValidator(this->fScanner);
          xercesc_2_7::XMLValidator::emitError((Codes)pXVar8);
        }
      }
      else {
        pXVar2 = this->fScanner;
        pXVar7 = XMLElementDecl::getFullName((XMLElementDecl *)toFill);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar2,(ushort *)0xe9,pXVar7,(ushort *)0x0,(ushort *)0x0);
        status = false;
      }
    }
    else {
      DTDElementDecl::setModelType(toFill,Any);
      status = true;
    }
  }
  else {
    DTDElementDecl::setModelType(toFill,Empty);
    status = true;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return status;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __thiscall xercesc_2_7::DTDScanner::scanDefaultDecl(DTDScanner *this,DTDAttDef *toFill)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  AttTypes type;
  XMLBuffer *toFill_00;
  XMLCh *pXVar4;
  long in_FS_OFFSET;
  XMLBufBid bbValue;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgRequiredString);
  if (bVar2 == false) {
    bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgImpliedString);
    if (bVar2 == false) {
      bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgFixedString);
      if (bVar2 == false) {
        XMLAttDef::setDefaultType((XMLAttDef *)toFill,DefAttTypes_Min);
      }
      else {
        cVar3 = xercesc_2_7::ReaderMgr::skippedSpace();
        if (cVar3 == '\x01') {
          xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
        }
        else {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        }
        XMLAttDef::setDefaultType((XMLAttDef *)toFill,Fixed);
      }
      checkForPERef(this,false,true);
      XMLBufBid::XMLBufBid(&bbValue,this->fBufMgr);
      type = XMLAttDef::getType((XMLAttDef *)toFill);
      toFill_00 = XMLBufBid::getBuffer(&bbValue);
      pXVar4 = (XMLCh *)(**(code **)(*(long *)toFill + 0x28))(toFill);
      bVar2 = scanAttValue(this,pXVar4,toFill_00,type);
      if (bVar2 != true) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      pXVar4 = XMLBufBid::getRawBuffer(&bbValue);
      XMLAttDef::setValue((XMLAttDef *)toFill,pXVar4);
      XMLBufBid::_XMLBufBid(&bbValue);
    }
    else {
      XMLAttDef::setDefaultType((XMLAttDef *)toFill,Implied);
    }
  }
  else {
    XMLAttDef::setDefaultType((XMLAttDef *)toFill,Required);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void __thiscall xercesc_2_7::DTDScanner::scanElementDecl(DTDScanner *this)

{
  long lVar1;
  ReaderMgr *this_00;
  DTDGrammar *pDVar2;
  code *pcVar3;
  ushort *puVar4;
  XMLScanner *pXVar5;
  bool bVar6;
  char cVar7;
  XMLBuffer *toFill;
  XMLCh *pXVar8;
  XMLValidator *pXVar9;
  DTDElementDecl *pDVar10;
  long in_FS_OFFSET;
  bool isIgnored;
  DTDElementDecl *decl;
  XMLBufBid bbName;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar6 = checkForPERef(this,false,true);
  if (bVar6 != true) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
  this_00 = this->fReaderMgr;
  toFill = XMLBufBid::getBuffer(&bbName);
  bVar6 = ReaderMgr::getName(this_00,toFill);
  if (bVar6 == true) {
    pDVar2 = this->fDTDGrammar;
    pcVar3 = *(code **)(*(long *)this->fDTDGrammar + 0x58);
    pXVar8 = XMLBufBid::getRawBuffer(&bbName);
    decl = (DTDElementDecl *)(*pcVar3)(pDVar2,this->fEmptyNamespaceId,0,pXVar8,0xfffffffe);
    if (decl == (DTDElementDecl *)0x0) {
      pXVar8 = XMLBufBid::getRawBuffer(&bbName);
      decl = (DTDElementDecl *)
             xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
      xercesc_2_7::DTDElementDecl::DTDElementDecl
                (decl,pXVar8,this->fEmptyNamespaceId,Any,this->fGrammarPoolMemoryManager);
      (**(code **)(*(long *)this->fDTDGrammar + 0x88))(this->fDTDGrammar,decl,0);
    }
    else {
      bVar6 = XMLElementDecl::isDeclared((XMLElementDecl *)decl);
      if (bVar6 != false) {
        bVar6 = XMLScanner::getDoValidation(this->fScanner);
        if (bVar6 != false) {
          pXVar9 = XMLScanner::getValidator(this->fScanner);
          pXVar8 = XMLBufBid::getRawBuffer(&bbName);
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)pXVar9,(ushort *)0xa,pXVar8,(ushort *)0x0,(ushort *)0x0);
        }
        if (this->fDumElemDecl == (DTDElementDecl *)0x0) {
          pXVar8 = XMLBufBid::getRawBuffer(&bbName);
          pDVar10 = (DTDElementDecl *)xercesc_2_7::XMemory::operator_new(0x50,this->fMemoryManager);
          xercesc_2_7::DTDElementDecl::DTDElementDecl
                    (pDVar10,pXVar8,this->fEmptyNamespaceId,Any,this->fMemoryManager);
          this->fDumElemDecl = pDVar10;
        }
        else {
          puVar4 = (ushort *)this->fDumElemDecl;
          pXVar8 = XMLBufBid::getRawBuffer(&bbName);
          xercesc_2_7::XMLElementDecl::setElementName(puVar4,(int)pXVar8);
        }
      }
    }
    pDVar10 = this->fDumElemDecl;
    bVar6 = isReadingExternalEntity(this);
    XMLElementDecl::setExternalElemDeclaration((XMLElementDecl *)decl,bVar6);
    XMLElementDecl::setCreateReason((XMLElementDecl *)decl,Declared);
    bVar6 = checkForPERef(this,false,true);
    if (bVar6 != true) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
    bVar6 = scanContentSpec(this,decl);
    if (bVar6 == true) {
      checkForPERef(this,false,true);
      cVar7 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
      if (cVar7 != '\x01') {
        pXVar5 = this->fScanner;
        pXVar8 = XMLBufBid::getRawBuffer(&bbName);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar5,(ushort *)0xe8,pXVar8,(ushort *)0x0,(ushort *)0x0);
        ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      }
      if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
        (*this->fDocTypeHandler->_vptr_DocTypeHandler[7])
                  (this->fDocTypeHandler,decl,(ulong)(decl == pDVar10));
      }
    }
    else {
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
  }
  XMLBufBid::_XMLBufBid(&bbName);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __thiscall xercesc_2_7::DTDScanner::scanEntityDecl(DTDScanner *this)

{
  long lVar1;
  ReaderMgr *this_00;
  NameIdPool_xercesc_2_7__DTDEntityDecl_ *this_01;
  DTDGrammar *this_02;
  XMLScanner *pXVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  XMLBuffer *toFill;
  XMLCh *pXVar8;
  DTDEntityDecl *pDVar9;
  long in_FS_OFFSET;
  bool isPEDecl;
  bool isIgnored;
  bool hasNoDTD;
  DTDEntityDecl *entityDecl;
  XMLBufBid bbName;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = ReaderMgr::lookingAtSpace(this->fReaderMgr);
  if (bVar3 == true) {
    xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  bVar3 = (bool)xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if ((bVar3 != false) && (bVar4 = checkForPERef(this,false,true), bVar4 != true)) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
  this_00 = this->fReaderMgr;
  toFill = XMLBufBid::getBuffer(&bbName);
  bVar4 = ReaderMgr::getName(this_00,toFill);
  if (bVar4 == true) {
    bVar4 = XMLScanner::getDoNamespaces(this->fScanner);
    if (bVar4 != false) {
      pXVar8 = XMLBufBid::getRawBuffer(&bbName);
      iVar7 = xercesc_2_7::XMLString::indexOf(pXVar8,0x3a);
      if (iVar7 != -1) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
    }
    if (bVar3 == false) {
      this_02 = this->fDTDGrammar;
      pXVar8 = XMLBufBid::getRawBuffer(&bbName);
      entityDecl = DTDGrammar::getEntityDecl(this_02,pXVar8);
    }
    else {
      this_01 = this->fPEntityDeclPool;
      pXVar8 = XMLBufBid::getRawBuffer(&bbName);
      entityDecl = NameIdPool<xercesc_2_7::DTDEntityDecl>::getByKey(this_01,pXVar8);
    }
    if (entityDecl == (DTDEntityDecl *)0x0) {
      pXVar8 = XMLBufBid::getRawBuffer(&bbName);
      entityDecl = (DTDEntityDecl *)
                   xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
      DTDEntityDecl::DTDEntityDecl(entityDecl,pXVar8,false,this->fGrammarPoolMemoryManager);
      DTDEntityDecl::setDeclaredInIntSubset(entityDecl,this->fInternalSubset);
      if (bVar3 == false) {
        DTDGrammar::putEntityDecl(this->fDTDGrammar,entityDecl);
      }
      else {
        NameIdPool<xercesc_2_7::DTDEntityDecl>::put(this->fPEntityDeclPool,entityDecl);
      }
    }
    else {
      if (this->fDumEntityDecl == (DTDEntityDecl *)0x0) {
        pDVar9 = (DTDEntityDecl *)xercesc_2_7::XMemory::operator_new(0x50,this->fMemoryManager);
        DTDEntityDecl::DTDEntityDecl(pDVar9,this->fMemoryManager);
        this->fDumEntityDecl = pDVar9;
      }
      pDVar9 = this->fDumEntityDecl;
      XMLBufBid::getRawBuffer(&bbName);
      xercesc_2_7::XMLEntityDecl::setName((ushort *)pDVar9);
      entityDecl = this->fDumEntityDecl;
    }
    pDVar9 = this->fDumEntityDecl;
    DTDEntityDecl::setIsParameter(entityDecl,bVar3);
    bVar4 = checkForPERef(this,false,true);
    if (bVar4 != true) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
    bVar4 = XMLScanner::getHasNoDTD(this->fScanner);
    if ((bVar4 != false) && (bVar3 != false)) {
      XMLScanner::setHasNoDTD(this->fScanner,false);
    }
    bVar5 = scanEntityDef(this,entityDecl,bVar3);
    if (bVar5 == true) {
      if (bVar4 != false) {
        XMLScanner::setHasNoDTD(this->fScanner,true);
      }
      checkForPERef(this,false,true);
      cVar6 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
      if (cVar6 != '\x01') {
        pXVar2 = this->fScanner;
        pXVar8 = XMLEntityDecl::getName(&entityDecl->super_XMLEntityDecl);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar2,(ushort *)0xdf,pXVar8,(ushort *)0x0,(ushort *)0x0);
        ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      }
      if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
        (*this->fDocTypeHandler->_vptr_DocTypeHandler[0xb])
                  (this->fDocTypeHandler,entityDecl,(ulong)bVar3,(ulong)(entityDecl == pDVar9));
      }
    }
    else {
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      XMLScanner::setHasNoDTD(this->fScanner,true);
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
  }
  XMLBufBid::_XMLBufBid(&bbName);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



EntityExpRes __thiscall
xercesc_2_7::DTDScanner::scanEntityRef
          (DTDScanner *this,XMLCh *firstCh,XMLCh *secondCh,bool *escaped)

{
  long lVar1;
  ReaderMgr *this_00;
  XMLScanner *pXVar2;
  DTDGrammar *this_01;
  ushort *puVar3;
  MemoryManager *memoryManager;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  XMLBuffer *toFill;
  XMLCh *pXVar8;
  DTDEntityDecl *this_02;
  XMLValidator *pXVar9;
  XMLCh *pXVar10;
  XMLCh *pXVar11;
  XMLEntityDecl *pXVar12;
  RuntimeException *this_03;
  EntityExpRes unaff_EBX;
  long in_FS_OFFSET;
  uint curReader;
  InputSource *srcUsed;
  Janitor_xercesc_2_7__InputSource_ janSrc;
  XMLEntityDecl *decl;
  XMLReader *valueReader;
  XMLReader *reader;
  XMLBufBid bbName;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *escaped = false;
  *secondCh = 0;
  uVar6 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar4 != '\0') {
    bVar5 = scanCharRef(this,firstCh,secondCh);
    if (bVar5 == true) {
      uVar7 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      if (uVar6 != uVar7) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      *escaped = true;
      unaff_EBX = EntityExp_Returned;
    }
    else {
      unaff_EBX = EntityExp_Failed;
    }
    goto LAB_00104a4e;
  }
  XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
  this_00 = this->fReaderMgr;
  toFill = XMLBufBid::getBuffer(&bbName);
  bVar5 = ReaderMgr::getName(this_00,toFill);
  if (bVar5 == true) {
    cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar4 != '\x01') {
      pXVar2 = this->fScanner;
      pXVar8 = XMLBufBid::getRawBuffer(&bbName);
      xercesc_2_7::XMLScanner::emitError
                ((Codes)pXVar2,(ushort *)0xe5,pXVar8,(ushort *)0x0,(ushort *)0x0);
    }
    uVar7 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
    if (uVar6 != uVar7) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
    this_01 = this->fDTDGrammar;
    pXVar8 = XMLBufBid::getRawBuffer(&bbName);
    this_02 = DTDGrammar::getEntityDecl(this_01,pXVar8);
    if (this_02 == (DTDEntityDecl *)0x0) {
      bVar5 = XMLScanner::getStandalone(this->fScanner);
      if ((bVar5 == false) && (bVar5 = XMLScanner::getHasNoDTD(this->fScanner), bVar5 == false)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pXVar2 = this->fScanner;
        pXVar8 = XMLBufBid::getRawBuffer(&bbName);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar2,(ushort *)0xe3,pXVar8,(ushort *)0x0,(ushort *)0x0);
      }
      else {
        bVar5 = XMLScanner::getDoValidation(this->fScanner);
        if (bVar5 != false) {
          pXVar9 = XMLScanner::getValidator(this->fScanner);
          pXVar8 = XMLBufBid::getRawBuffer(&bbName);
          xercesc_2_7::XMLValidator::emitError
                    ((Codes)pXVar9,(ushort *)0x55,pXVar8,(ushort *)0x0,(ushort *)0x0);
        }
      }
      unaff_EBX = EntityExp_Failed;
    }
    else {
      bVar5 = XMLScanner::getStandalone(this->fScanner);
      if ((bVar5 == false) ||
         (cVar4 = (**(code **)(*(long *)this_02 + 0x28))(this_02), cVar4 == '\x01')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pXVar2 = this->fScanner;
        pXVar8 = XMLBufBid::getRawBuffer(&bbName);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar2,(ushort *)0x12a,pXVar8,(ushort *)0x0,(ushort *)0x0);
      }
      cVar4 = (**(code **)(*(long *)this_02 + 0x38))(this_02);
      if (cVar4 == '\0') {
        bVar5 = XMLEntityDecl::isExternal(&this_02->super_XMLEntityDecl);
        if (bVar5 == false) {
          puVar3 = (ushort *)this->fReaderMgr;
          uVar6 = XMLEntityDecl::getValueLen(&this_02->super_XMLEntityDecl);
          pXVar8 = XMLEntityDecl::getValue(&this_02->super_XMLEntityDecl);
          pXVar10 = XMLEntityDecl::getName(&this_02->super_XMLEntityDecl);
          pXVar12 = (XMLEntityDecl *)
                    xercesc_2_7::ReaderMgr::createIntEntReader
                              (puVar3,(RefFrom)pXVar10,Type_General,(ushort *)0x1,(uint)pXVar8,
                               SUB41(uVar6,0),false);
          cVar4 = xercesc_2_7::ReaderMgr::pushReader((XMLReader *)this->fReaderMgr,pXVar12);
          if (cVar4 != '\x01') {
            pXVar2 = this->fScanner;
            pXVar8 = XMLEntityDecl::getName(&this_02->super_XMLEntityDecl);
            xercesc_2_7::XMLScanner::emitError
                      ((Codes)pXVar2,(ushort *)0xe6,pXVar8,(ushort *)0x0,(ushort *)0x0);
          }
LAB_00104a3a:
          unaff_EBX = EntityExp_Pushed;
        }
        else {
          bVar5 = XMLEntityDecl::isUnparsed(&this_02->super_XMLEntityDecl);
          if (bVar5 == false) {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
            puVar3 = (ushort *)this->fReaderMgr;
            XMLScanner::getDisableDefaultEntityResolution(this->fScanner);
            bVar5 = XMLScanner::getCalculateSrcOfs(this->fScanner);
            pXVar8 = XMLEntityDecl::getPublicId(&this_02->super_XMLEntityDecl);
            pXVar10 = XMLEntityDecl::getSystemId(&this_02->super_XMLEntityDecl);
            pXVar11 = XMLEntityDecl::getBaseURI(&this_02->super_XMLEntityDecl);
            pXVar12 = (XMLEntityDecl *)
                      xercesc_2_7::ReaderMgr::createReader
                                (puVar3,pXVar11,pXVar10,SUB81(pXVar8,0),RefFrom_Literal,Type_General
                                 ,Source_External,(InputSource **)0x1,true,bVar5);
            Janitor<xercesc_2_7::InputSource>::Janitor(&janSrc,srcUsed);
            if (pXVar12 == (XMLEntityDecl *)0x0) {
              this_03 = (RuntimeException *)__cxa_allocate_exception(0x30);
              memoryManager = this->fMemoryManager;
              if (srcUsed == (InputSource *)0x0) {
                pXVar8 = XMLEntityDecl::getSystemId(&this_02->super_XMLEntityDecl);
              }
              else {
                pXVar8 = (XMLCh *)(**(code **)(*(long *)srcUsed + 0x28))(srcUsed);
              }
              RuntimeException::RuntimeException
                        (this_03,"DTDScanner.cpp",0x7dd,Gen_CouldNotOpenExtEntity,pXVar8,
                         (XMLCh *)0x0,(XMLCh *)0x0,(XMLCh *)0x0,memoryManager);
                    // WARNING: Subroutine does not return
              __cxa_throw(this_03,&RuntimeException::typeinfo,RuntimeException::_RuntimeException);
            }
            cVar4 = xercesc_2_7::ReaderMgr::pushReader((XMLReader *)this->fReaderMgr,pXVar12);
            if (cVar4 == '\x01') {
              cVar4 = xercesc_2_7::XMLScanner::checkXMLDecl(SUB81(this->fScanner,0));
              if (cVar4 != '\0') {
                scanTextDecl(this);
              }
              bVar5 = true;
            }
            else {
              pXVar2 = this->fScanner;
              pXVar8 = XMLEntityDecl::getName(&this_02->super_XMLEntityDecl);
              xercesc_2_7::XMLScanner::emitError
                        ((Codes)pXVar2,(ushort *)0xe6,pXVar8,(ushort *)0x0,(ushort *)0x0);
              unaff_EBX = EntityExp_Failed;
              bVar5 = false;
            }
            Janitor<xercesc_2_7::InputSource>::_Janitor(&janSrc);
            if (bVar5) goto LAB_00104a3a;
          }
          else {
            pXVar2 = this->fScanner;
            pXVar8 = XMLBufBid::getRawBuffer(&bbName);
            xercesc_2_7::XMLScanner::emitError
                      ((Codes)pXVar2,(ushort *)0xe4,pXVar8,(ushort *)0x0,(ushort *)0x0);
            unaff_EBX = EntityExp_Failed;
          }
        }
      }
      else {
        pXVar8 = XMLEntityDecl::getValue(&this_02->super_XMLEntityDecl);
        *firstCh = *pXVar8;
        *escaped = true;
        unaff_EBX = EntityExp_Returned;
      }
    }
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    unaff_EBX = EntityExp_Failed;
  }
  XMLBufBid::_XMLBufBid(&bbName);
LAB_00104a4e:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_EBX;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



bool __thiscall xercesc_2_7::DTDScanner::scanEntityLiteral(DTDScanner *this,XMLBuffer *toFill)

{
  long lVar1;
  XMLScanner *pXVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  UnexpectedEOFException *this_00;
  XMLCh *pXVar7;
  XMLReader *this_01;
  XMLValidator *pXVar8;
  long in_FS_OFFSET;
  bool gotLeadingSurrogate;
  XMLCh quoteCh;
  XMLCh nextCh;
  XMLCh secondCh;
  uint orgReader;
  XMLBuffer *nameBuf;
  XMLBufBid bbName;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toFill);
  cVar3 = xercesc_2_7::ReaderMgr::skipIfQuote((ushort *)this->fReaderMgr);
  if (cVar3 != '\x01') {
    bVar5 = false;
LAB_00104f14:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return bVar5;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
  nameBuf = XMLBufBid::getBuffer(&bbName);
  orgReader = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  secondCh = 0;
  bVar5 = false;
LAB_00104b5a:
  do {
    nextCh = xercesc_2_7::ReaderMgr::getNextChar();
    if (nextCh == 0) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      this_00 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
      UnexpectedEOFException::UnexpectedEOFException
                (this_00,"DTDScanner.cpp",0x836,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&UnexpectedEOFException::typeinfo,
                  UnexpectedEOFException::_UnexpectedEOFException);
    }
    if ((nextCh == quoteCh) &&
       (uVar6 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr), orgReader == uVar6)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar6 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      if ((orgReader == uVar6) ||
         (bVar5 = XMLScanner::getDoValidation(this->fScanner), bVar5 == false)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pXVar8 = XMLScanner::getValidator(this->fScanner);
        xercesc_2_7::XMLValidator::emitError((Codes)pXVar8);
      }
      bVar5 = true;
LAB_00104f08:
      XMLBufBid::_XMLBufBid(&bbName);
      goto LAB_00104f14;
    }
    if (nextCh != 0x25) {
      if (nextCh == 0x26) {
        cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
        if (cVar3 == '\0') {
          bVar5 = ReaderMgr::getName(this->fReaderMgr,nameBuf);
          if (bVar5 == true) {
            XMLBuffer::append(toFill,0x26);
            pXVar7 = XMLBuffer::getRawBuffer(nameBuf);
            XMLBuffer::append(toFill,pXVar7);
            cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
            if (cVar3 != '\x01') {
              pXVar2 = this->fScanner;
              pXVar7 = XMLBuffer::getRawBuffer(nameBuf);
              xercesc_2_7::XMLScanner::emitError
                        ((Codes)pXVar2,(ushort *)0xe5,pXVar7,(ushort *)0x0,(ushort *)0x0);
            }
            nextCh = 0x3b;
          }
          else {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
          bVar5 = false;
        }
        else {
          bVar4 = scanCharRef(this,&nextCh,&secondCh);
          if (bVar4 != true) {
            bVar5 = false;
            goto LAB_00104b5a;
          }
        }
      }
      else if ((nextCh < 0xd800) || (0xdbff < nextCh)) {
        if (bVar5) {
          if ((nextCh < 0xdc00) || (0xdfff < nextCh)) {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
        }
        else {
          this_01 = ReaderMgr::getCurrentReader(this->fReaderMgr);
          bVar5 = XMLReader::isXMLChar(this_01,nextCh);
          if (bVar5 != true) {
            xercesc_2_7::XMLString::binToText((uint)nextCh,tmpBuf,8,0x10,this->fMemoryManager);
            xercesc_2_7::XMLScanner::emitError
                      ((Codes)this->fScanner,(ushort *)0xc4,tmpBuf,(ushort *)0x0,(ushort *)0x0);
            ReaderMgr::skipPastChar(this->fReaderMgr,quoteCh);
            bVar5 = false;
            goto LAB_00104f08;
          }
        }
        bVar5 = false;
      }
      else if (bVar5) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      else {
        bVar5 = true;
      }
      XMLBuffer::append(toFill,nextCh);
      if (secondCh != 0) {
        XMLBuffer::append(toFill,secondCh);
        secondCh = 0;
      }
      goto LAB_00104b5a;
    }
    expandPERef(this,false,true,true,false);
  } while( true );
}



bool __thiscall
xercesc_2_7::DTDScanner::scanEntityDef(DTDScanner *this,DTDEntityDecl *decl,bool isPEDecl)

{
  long lVar1;
  ReaderMgr *this_00;
  bool bVar2;
  bool bVar3;
  XMLBuffer *pXVar4;
  XMLCh *pXVar5;
  XMLBuffer *pubIdToFill;
  XMLCh *newId;
  long in_FS_OFFSET;
  bool gotSpaces;
  XMLCh *publicId;
  XMLCh *systemId;
  XMLBufBid bbPubId;
  XMLBufBid bbSysId;
  XMLBufBid bbName;
  LastExtEntityInfo lastInfo;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = ReaderMgr::lookingAtChar(this->fReaderMgr,0x27);
  if ((bVar2 == false) && (bVar2 = ReaderMgr::lookingAtChar(this->fReaderMgr,0x22), bVar2 == false))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    XMLBufBid::XMLBufBid((XMLBufBid *)&lastInfo,this->fBufMgr);
    pXVar4 = XMLBufBid::getBuffer((XMLBufBid *)&lastInfo);
    bVar2 = scanEntityLiteral(this,pXVar4);
    bVar2 = bVar2 == true;
    if (bVar2) {
      pXVar5 = XMLBufBid::getRawBuffer((XMLBufBid *)&lastInfo);
      XMLEntityDecl::setValue(&decl->super_XMLEntityDecl,pXVar5);
    }
    XMLBufBid::_XMLBufBid((XMLBufBid *)&lastInfo);
    goto LAB_0010538d;
  }
  XMLBufBid::XMLBufBid(&bbPubId,this->fBufMgr);
  XMLBufBid::XMLBufBid(&bbSysId,this->fBufMgr);
  pXVar4 = XMLBufBid::getBuffer(&bbSysId);
  pubIdToFill = XMLBufBid::getBuffer(&bbPubId);
  bVar2 = scanId(this,pubIdToFill,pXVar4,IDType_External);
  if (bVar2 == true) {
    ReaderMgr::LastExtEntityInfo::LastExtEntityInfo(&lastInfo);
    xercesc_2_7::ReaderMgr::getLastExtEntityInfo((LastExtEntityInfo *)this->fReaderMgr);
    pXVar5 = XMLBufBid::getRawBuffer(&bbPubId);
    newId = XMLBufBid::getRawBuffer(&bbSysId);
    if ((pXVar5 == (XMLCh *)0x0) || (*pXVar5 == 0)) {
      pXVar5 = (XMLCh *)0x0;
    }
    XMLEntityDecl::setPublicId(&decl->super_XMLEntityDecl,pXVar5);
    if ((newId == (XMLCh *)0x0) || (*newId == 0)) {
      newId = (XMLCh *)0x0;
    }
    XMLEntityDecl::setSystemId(&decl->super_XMLEntityDecl,newId);
    if ((lastInfo.systemId == (XMLCh *)0x0) || (*lastInfo.systemId == 0)) {
      lastInfo.systemId = (XMLCh *)0x0;
    }
    XMLEntityDecl::setBaseURI(&decl->super_XMLEntityDecl,lastInfo.systemId);
    bVar2 = checkForPERef(this,false,true);
    if (isPEDecl != false) {
      if (bVar2 == false) {
        bVar2 = true;
        goto LAB_00105375;
      }
      bVar3 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgNDATAString);
      if (bVar3 != false) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
    }
    bVar3 = ReaderMgr::lookingAtChar(this->fReaderMgr,0x3e);
    if (bVar3 == false) {
      if (bVar2 != true) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgNDATAString);
      if (bVar2 != true) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      bVar2 = checkForPERef(this,false,true);
      if (bVar2 != true) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
      this_00 = this->fReaderMgr;
      pXVar4 = XMLBufBid::getBuffer(&bbName);
      bVar2 = ReaderMgr::getName(this_00,pXVar4);
      bVar2 = bVar2 == true;
      if (bVar2) {
        pXVar5 = XMLBufBid::getRawBuffer(&bbName);
        XMLEntityDecl::setNotationName(&decl->super_XMLEntityDecl,pXVar5);
      }
      else {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      XMLBufBid::_XMLBufBid(&bbName);
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
LAB_00105375:
  XMLBufBid::_XMLBufBid(&bbSysId);
  XMLBufBid::_XMLBufBid(&bbPubId);
LAB_0010538d:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



bool __thiscall
xercesc_2_7::DTDScanner::scanEnumeration
          (DTDScanner *this,DTDAttDef *attDef,XMLBuffer *toFill,bool notation)

{
  long lVar1;
  ReaderMgr *pRVar2;
  XMLScanner *pXVar3;
  char cVar4;
  uint count;
  XMLBuffer *pXVar5;
  ushort *puVar6;
  XMLCh *chars;
  bool bVar7;
  long in_FS_OFFSET;
  bool success;
  XMLBufBid bbTmp;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toFill);
  checkForPERef(this,false,true);
  if (notation != false) {
    cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar4 != '\x01') {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
  }
  XMLBufBid::XMLBufBid(&bbTmp,this->fBufMgr);
  do {
    checkForPERef(this,false,true);
    if (notation == false) {
      pRVar2 = this->fReaderMgr;
      pXVar5 = XMLBufBid::getBuffer(&bbTmp);
      success = ReaderMgr::getNameToken(pRVar2,pXVar5);
    }
    else {
      pRVar2 = this->fReaderMgr;
      pXVar5 = XMLBufBid::getBuffer(&bbTmp);
      success = ReaderMgr::getName(pRVar2,pXVar5);
    }
    if (success != true) {
      pXVar3 = this->fScanner;
      puVar6 = (ushort *)(**(code **)(*(long *)attDef + 0x28))(attDef);
      xercesc_2_7::XMLScanner::emitError
                ((Codes)pXVar3,(ushort *)0xf2,puVar6,(ushort *)0x0,(ushort *)0x0);
      bVar7 = false;
      goto LAB_0010561a;
    }
    count = XMLBufBid::getLen(&bbTmp);
    chars = XMLBufBid::getRawBuffer(&bbTmp);
    XMLBuffer::append(toFill,chars,count);
    checkForPERef(this,false,true);
    cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar4 != '\0') {
      bVar7 = true;
      goto LAB_0010561a;
    }
    XMLBuffer::append(toFill,0x20);
    cVar4 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  } while (cVar4 == '\x01');
  xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  bVar7 = false;
LAB_0010561a:
  XMLBufBid::_XMLBufBid(&bbTmp);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return bVar7;
}



bool __thiscall xercesc_2_7::DTDScanner::scanEq(DTDScanner *this)

{
  char cVar1;
  
  xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
  cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar1 != '\0') {
    xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
  }
  return cVar1 != '\0';
}



// WARNING: Removing unreachable block (ram,0x00105c39)

void __thiscall
xercesc_2_7::DTDScanner::scanExtSubsetDecl(DTDScanner *this,bool inIncludeSect,bool isDTD)

{
  long lVar1;
  XMLBuffer *pXVar2;
  DocTypeHandler *pDVar3;
  anon_subr_int_varargs *paVar4;
  char cVar5;
  bool bVar6;
  XMLCh toCheck;
  uint uVar7;
  Types TVar8;
  uint uVar9;
  XMLReader *pXVar10;
  XMLValidator *pXVar11;
  XMLCh *pXVar12;
  long in_FS_OFFSET;
  bool bAcceptDecl;
  bool inMarkup;
  bool inCharData;
  bool bDoBreak;
  bool wasInPE;
  XMLCh nextCh;
  uint orgReader;
  uint orgReader_1;
  EndOfEntityException *toCatch;
  FlagJanitor_bool_ janContentFlag;
  XMLBufBid bbSpace;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FlagJanitor<bool>::FlagJanitor(&janContentFlag,&this->fInternalSubset,false);
  bAcceptDecl = (bool)(inIncludeSect ^ 1);
  XMLBufBid::XMLBufBid(&bbSpace,this->fBufMgr);
  if ((this->fDocTypeHandler != (DocTypeHandler *)0x0) && (inIncludeSect != true)) {
    (*this->fDocTypeHandler->_vptr_DocTypeHandler[0x10])(this->fDocTypeHandler);
  }
  cVar5 = xercesc_2_7::ReaderMgr::isScanningPERefOutOfLiteral();
  if (((cVar5 != '\0') && (cVar5 = xercesc_2_7::ReaderMgr::skippedSpace(), cVar5 != '\0')) &&
     (cVar5 = xercesc_2_7::XMLScanner::checkXMLDecl(SUB81(this->fScanner,0)), cVar5 != '\0')) {
    scanTextDecl(this);
    bAcceptDecl = false;
  }
  ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  do {
    toCheck = xercesc_2_7::ReaderMgr::peekNextChar();
    if (toCheck == 0x3c) {
      uVar7 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      pXVar10 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      TVar8 = XMLReader::getType(pXVar10);
      xercesc_2_7::ReaderMgr::getNextChar();
      scanMarkupDecl(this,bAcceptDecl);
      uVar9 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      if (uVar7 != uVar9) {
        if (TVar8 == Type_PE) {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        }
        else {
          bVar6 = XMLScanner::getDoValidation(this->fScanner);
          if (bVar6 != false) {
            pXVar11 = XMLScanner::getValidator(this->fScanner);
            xercesc_2_7::XMLValidator::emitError((Codes)pXVar11);
          }
        }
      }
    }
    else {
      pXVar10 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      bVar6 = XMLReader::isWhitespace(pXVar10,toCheck);
      if (bVar6 == false) {
        if (toCheck == 0x25) {
          xercesc_2_7::ReaderMgr::getNextChar();
          expandPERef(this,true,false,false,true);
        }
        else {
          if ((inIncludeSect != false) && (toCheck == 0x5d)) {
            xercesc_2_7::ReaderMgr::getNextChar();
            cVar5 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
            if (cVar5 == '\x01') {
              cVar5 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
              if (cVar5 != '\x01') {
                xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
                ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
              }
            }
            else {
              xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
              ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
            }
LAB_00105c21:
            XMLBufBid::_XMLBufBid(&bbSpace);
            FlagJanitor<bool>::_FlagJanitor(&janContentFlag);
            if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
              __stack_chk_fail();
            }
            return;
          }
          if (toCheck == 0) goto LAB_00105c21;
          xercesc_2_7::ReaderMgr::getNextChar();
          pXVar10 = ReaderMgr::getCurrentReader(this->fReaderMgr);
          bVar6 = XMLReader::isXMLChar(pXVar10,toCheck);
          if (bVar6 == true) {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
          else {
            xercesc_2_7::XMLString::binToText((uint)toCheck,tmpBuf,8,0x10,this->fMemoryManager);
            xercesc_2_7::XMLScanner::emitError
                      ((Codes)this->fScanner,(ushort *)0xc4,tmpBuf,(ushort *)0x0,(ushort *)0x0);
          }
          xercesc_2_7::ReaderMgr::skipUntilInOrWS((ushort *)this->fReaderMgr);
        }
      }
      else if (this->fDocTypeHandler == (DocTypeHandler *)0x0) {
        xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
      }
      else {
        pXVar2 = (XMLBuffer *)this->fReaderMgr;
        XMLBufBid::getBuffer(&bbSpace);
        xercesc_2_7::ReaderMgr::getSpaces(pXVar2);
        pDVar3 = this->fDocTypeHandler;
        paVar4 = this->fDocTypeHandler->_vptr_DocTypeHandler[6];
        uVar7 = XMLBufBid::getLen(&bbSpace);
        pXVar12 = XMLBufBid::getRawBuffer(&bbSpace);
        (*paVar4)(pDVar3,pXVar12,(ulong)uVar7);
      }
    }
    bAcceptDecl = false;
  } while( true );
}



bool __thiscall
xercesc_2_7::DTDScanner::scanId
          (DTDScanner *this,XMLBuffer *pubIdToFill,XMLBuffer *sysIdToFill,IDTypes whatKind)

{
  bool bVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  bool hasSpace;
  bool bIsQuote;
  XMLCh chPeek_1;
  XMLCh chPeek;
  
  XMLBuffer::reset(pubIdToFill);
  XMLBuffer::reset(sysIdToFill);
  bVar1 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgSysIDString);
  if (bVar1 == false) {
    bVar1 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgPubIDString);
    if (bVar1 == true) {
      cVar2 = xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
      if (cVar2 != '\x01') {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        sVar4 = xercesc_2_7::ReaderMgr::peekNextChar();
        if ((sVar4 != 0x22) && (sVar4 != 0x27)) {
          return false;
        }
      }
      bVar1 = scanPublicLiteral(this,pubIdToFill);
      if (bVar1 == true) {
        if (whatKind == IDType_Public) {
          uVar3 = 1;
        }
        else {
          cVar2 = xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
          sVar4 = xercesc_2_7::ReaderMgr::peekNextChar();
          if ((sVar4 == 0x22) || (sVar4 == 0x27)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (cVar2 != '\x01') {
            if (whatKind == IDType_External) {
              xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
              if (!bVar1) {
                return false;
              }
            }
            else {
              if (!bVar1) {
                return true;
              }
              xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
            }
          }
          if (bVar1) {
            bVar1 = scanSystemLiteral(this,sysIdToFill);
            if (bVar1 != true) {
              return false;
            }
          }
          else if (whatKind == IDType_External) {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      uVar3 = 0;
    }
  }
  else if (whatKind == IDType_Public) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    uVar3 = 0;
  }
  else {
    cVar2 = xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
    if (cVar2 == '\x01') {
      uVar3 = scanSystemLiteral(this,sysIdToFill);
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      uVar3 = 0;
    }
  }
  return (bool)uVar3;
}



void __thiscall xercesc_2_7::DTDScanner::scanIgnoredSection(DTDScanner *this)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  ushort toCheck;
  UnexpectedEOFException *this_00;
  XMLReader *this_01;
  long in_FS_OFFSET;
  bool gotLeadingSurrogate;
  XMLCh nextCh;
  ulong depth;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  depth = 1;
  bVar4 = false;
  do {
    do {
      while( true ) {
        while( true ) {
          toCheck = xercesc_2_7::ReaderMgr::getNextChar();
          if (toCheck == 0) {
            this_00 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
            UnexpectedEOFException::UnexpectedEOFException
                      (this_00,"DTDScanner.cpp",0xaf1,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
            __cxa_throw(this_00,&UnexpectedEOFException::typeinfo,
                        UnexpectedEOFException::_UnexpectedEOFException);
          }
          if (toCheck != 0x3c) break;
          cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
          if ((cVar3 == '\0') ||
             (cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr), cVar3 == '\0'))
          {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            depth = depth + 1;
          }
        }
        if (toCheck == 0x5d) break;
        if ((toCheck < 0xd800) || (0xdbff < toCheck)) {
          if ((toCheck < 0xdc00) || (0xdfff < toCheck)) {
            if (bVar4) {
              xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
            }
            else {
              this_01 = ReaderMgr::getCurrentReader(this->fReaderMgr);
              bVar4 = XMLReader::isXMLChar(this_01,toCheck);
              if (bVar4 != true) {
                xercesc_2_7::XMLString::binToText((uint)toCheck,tmpBuf,8,0x10,this->fMemoryManager);
                xercesc_2_7::XMLScanner::emitError
                          ((Codes)this->fScanner,(ushort *)0xc4,tmpBuf,(ushort *)0x0,(ushort *)0x0);
              }
            }
          }
          else if (!bVar4) {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
          bVar4 = false;
        }
        else if (bVar4) {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        }
        else {
          bVar4 = true;
        }
      }
      cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    } while (cVar3 == '\0');
    do {
      cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    } while (cVar3 != '\0');
    cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  } while ((cVar3 == '\0') || (depth = depth - 1, depth != 0));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



bool __thiscall xercesc_2_7::DTDScanner::scanInternalSubset(DTDScanner *this)

{
  long lVar1;
  XMLBuffer *pXVar2;
  DocTypeHandler *pDVar3;
  anon_subr_int_varargs *paVar4;
  MemoryManager *pMVar5;
  bool bVar6;
  XMLCh toCheck;
  ushort uVar7;
  uint uVar8;
  Types TVar9;
  uint uVar10;
  XMLReader *pXVar11;
  XMLValidator *pXVar12;
  XMLCh *pXVar13;
  long in_FS_OFFSET;
  bool noErrors;
  bool wasInPE;
  XMLCh nextCh;
  uint orgReader;
  FlagJanitor_bool_ janContentFlag;
  XMLBufBid bbSpace;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FlagJanitor<bool>::FlagJanitor(&janContentFlag,&this->fInternalSubset,true);
  if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
    (*this->fDocTypeHandler->_vptr_DocTypeHandler[0xf])(this->fDocTypeHandler);
  }
  XMLBufBid::XMLBufBid(&bbSpace,this->fBufMgr);
  noErrors = true;
  do {
    toCheck = xercesc_2_7::ReaderMgr::peekNextChar();
    if (toCheck == 0) {
      noErrors = false;
LAB_001065ef:
      XMLBufBid::_XMLBufBid(&bbSpace);
      FlagJanitor<bool>::_FlagJanitor(&janContentFlag);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return noErrors;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    if (toCheck == 0x5d) {
      xercesc_2_7::ReaderMgr::getNextChar();
LAB_001065bf:
      if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
        (*this->fDocTypeHandler->_vptr_DocTypeHandler[9])(this->fDocTypeHandler);
      }
      goto LAB_001065ef;
    }
    if (toCheck == 0x25) {
      xercesc_2_7::ReaderMgr::getNextChar();
      expandPERef(this,true,false,false,true);
    }
    else if (toCheck == 0x3c) {
      uVar8 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      pXVar11 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      TVar9 = XMLReader::getType(pXVar11);
      xercesc_2_7::ReaderMgr::getNextChar();
      scanMarkupDecl(this,false);
      uVar10 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
      if (uVar8 != uVar10) {
        if (TVar9 == Type_PE) {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        }
        else {
          bVar6 = XMLScanner::getDoValidation(this->fScanner);
          if (bVar6 != false) {
            pXVar12 = XMLScanner::getValidator(this->fScanner);
            xercesc_2_7::XMLValidator::emitError((Codes)pXVar12);
          }
        }
      }
    }
    else {
      pXVar11 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      bVar6 = XMLReader::isWhitespace(pXVar11,toCheck);
      if (bVar6 == false) {
        pMVar5 = this->fMemoryManager;
        uVar7 = xercesc_2_7::ReaderMgr::getNextChar();
        xercesc_2_7::XMLString::binToText((uint)uVar7,tmpBuf,8,0x10,pMVar5);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)this->fScanner,(ushort *)0xd5,tmpBuf,(ushort *)0x0,(ushort *)0x0);
        if (toCheck == 0x3e) {
          noErrors = false;
          goto LAB_001065bf;
        }
        xercesc_2_7::ReaderMgr::skipUntilInOrWS((ushort *)this->fReaderMgr);
      }
      else if (this->fDocTypeHandler == (DocTypeHandler *)0x0) {
        xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
      }
      else {
        pXVar2 = (XMLBuffer *)this->fReaderMgr;
        XMLBufBid::getBuffer(&bbSpace);
        xercesc_2_7::ReaderMgr::getSpaces(pXVar2);
        pDVar3 = this->fDocTypeHandler;
        paVar4 = this->fDocTypeHandler->_vptr_DocTypeHandler[6];
        uVar8 = XMLBufBid::getLen(&bbSpace);
        pXVar13 = XMLBufBid::getRawBuffer(&bbSpace);
        (*paVar4)(pDVar3,pXVar13,(ulong)uVar8);
      }
    }
  } while( true );
}



void __thiscall xercesc_2_7::DTDScanner::scanMarkupDecl(DTDScanner *this,bool parseTextDecl)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  XMLValidator *pXVar6;
  XMLCh nextCh;
  uint orgReader_1;
  uint orgReader;
  
  sVar3 = xercesc_2_7::ReaderMgr::getNextChar();
  if (sVar3 != 0x21) {
    if (sVar3 != 0x3f) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      return;
    }
    cVar1 = xercesc_2_7::XMLScanner::checkXMLDecl(SUB81(this->fScanner,0));
    if (cVar1 != '\0') {
      if (parseTextDecl != false) {
        scanTextDecl(this);
        return;
      }
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      return;
    }
    scanPI(this);
    return;
  }
  cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar1 != '\0') {
    cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar1 != '\0') {
      scanComment(this);
      return;
    }
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    return;
  }
  cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar1 == '\0') {
    bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgAttListString);
    if (bVar2 != false) {
      scanAttListDecl(this);
      return;
    }
    bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgElemString);
    if (bVar2 != false) {
      scanElementDecl(this);
      return;
    }
    bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgEntityString);
    if (bVar2 != false) {
      scanEntityDecl(this);
      return;
    }
    bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgNotationString);
    if (bVar2 != false) {
      scanNotationDecl(this);
      return;
    }
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    return;
  }
  if (this->fInternalSubset != false) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    return;
  }
  checkForPERef(this,false,true);
  bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgIncludeString);
  if (bVar2 != false) {
    checkForPERef(this,false,true);
    cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar1 != '\x01') {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
    uVar4 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
    checkForPERef(this,false,true);
    scanExtSubsetDecl(this,true,false);
    uVar5 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
    if ((uVar4 == uVar5) || (bVar2 = XMLScanner::getDoValidation(this->fScanner), bVar2 == false)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pXVar6 = XMLScanner::getValidator(this->fScanner);
      xercesc_2_7::XMLValidator::emitError((Codes)pXVar6);
    }
    return;
  }
  bVar2 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgIgnoreString);
  if (bVar2 == false) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    return;
  }
  checkForPERef(this,false,true);
  cVar1 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar1 != '\x01') {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  uVar4 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  scanIgnoredSection(this);
  uVar5 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  if ((uVar4 == uVar5) || (bVar2 = XMLScanner::getDoValidation(this->fScanner), bVar2 == false)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  pXVar6 = XMLScanner::getValidator(this->fScanner);
  xercesc_2_7::XMLValidator::emitError((Codes)pXVar6);
  return;
}



bool __thiscall xercesc_2_7::DTDScanner::scanMixed(DTDScanner *this,DTDElementDecl *toFill)

{
  long lVar1;
  XMLScanner *pXVar2;
  DTDGrammar *pDVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  XMLBuffer *toFill_00;
  QName *pQVar7;
  ContentSpecNode *pCVar8;
  XMLCh *pXVar9;
  ContentSpecNode *pCVar10;
  ContentSpecNode *this_00;
  ContentSpecNode *this_01;
  bool bVar11;
  long in_FS_OFFSET;
  bool starRequired;
  bool starSkipped;
  ContentSpecNode *curNode;
  ContentSpecNode *headNode;
  XMLElementDecl *decl;
  XMLBuffer *nameBuf;
  ContentSpecNode *orgNode;
  ContentSpecNode *oldRight;
  XMLBufBid bbName;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar11 = false;
  XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
  toFill_00 = XMLBufBid::getBuffer(&bbName);
  pQVar7 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
  xercesc_2_7::QName::QName
            (pQVar7,(ushort *)&XMLUni::fgZeroLenString,(ushort *)&XMLUni::fgZeroLenString,
             XMLElementDecl::fgPCDataElemId,this->fGrammarPoolMemoryManager);
  pCVar8 = (ContentSpecNode *)
           xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
  ContentSpecNode::ContentSpecNode(pCVar8,pQVar7,false,this->fGrammarPoolMemoryManager);
  curNode = pCVar8;
  headNode = pCVar8;
  while( true ) {
    while( true ) {
      while( true ) {
        while (bVar5 = ReaderMgr::lookingAtChar(this->fReaderMgr,0x25), bVar5 != false) {
          checkForPERef(this,false,true);
        }
        cVar6 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
        if (cVar6 == '\0') break;
        cVar6 = xercesc_2_7::XMLScanner::emitErrorWillThrowException((Codes)this->fScanner);
        if ((cVar6 != '\0') && (headNode != (ContentSpecNode *)0x0)) {
          (*(headNode->super_XSerializable)._vptr_XSerializable[1])(headNode);
        }
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      cVar6 = xercesc_2_7::ReaderMgr::skippedSpace();
      if (cVar6 == '\0') break;
      xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
    }
    cVar6 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar6 != '\x01') break;
    bVar11 = true;
    checkForPERef(this,false,true);
    bVar5 = ReaderMgr::getName(this->fReaderMgr,toFill_00);
    if (bVar5 != true) {
      if (headNode != (ContentSpecNode *)0x0) {
        (*(headNode->super_XSerializable)._vptr_XSerializable[1])(headNode);
      }
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      bVar11 = false;
LAB_00107107:
      XMLBufBid::_XMLBufBid(&bbName);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar11;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    pDVar3 = this->fDTDGrammar;
    pcVar4 = *(code **)(*(long *)this->fDTDGrammar + 0x58);
    pXVar9 = XMLBuffer::getRawBuffer(toFill_00);
    decl = (XMLElementDecl *)(*pcVar4)(pDVar3,this->fEmptyNamespaceId,0,pXVar9,0xfffffffe);
    if (decl == (XMLElementDecl *)0x0) {
      pXVar9 = XMLBuffer::getRawBuffer(toFill_00);
      decl = (XMLElementDecl *)
             xercesc_2_7::XMemory::operator_new(0x50,this->fGrammarPoolMemoryManager);
      xercesc_2_7::DTDElementDecl::DTDElementDecl
                ((DTDElementDecl *)decl,pXVar9,this->fEmptyNamespaceId,Any,
                 this->fGrammarPoolMemoryManager);
      XMLElementDecl::setCreateReason(decl,InContentModel);
      bVar5 = isReadingExternalEntity(this);
      XMLElementDecl::setExternalElemDeclaration(decl,bVar5);
      (**(code **)(*(long *)this->fDTDGrammar + 0x88))(this->fDTDGrammar,decl,0);
    }
    if (curNode == pCVar8) {
      pQVar7 = XMLElementDecl::getElementName(decl);
      pCVar10 = (ContentSpecNode *)
                xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode(pCVar10,pQVar7,this->fGrammarPoolMemoryManager);
      headNode = (ContentSpecNode *)
                 xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (headNode,Choice,curNode,pCVar10,true,true,this->fGrammarPoolMemoryManager);
      curNode = headNode;
    }
    else {
      pCVar10 = ContentSpecNode::orphanSecond(curNode);
      pQVar7 = XMLElementDecl::getElementName(decl);
      this_00 = (ContentSpecNode *)
                xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode(this_00,pQVar7,this->fGrammarPoolMemoryManager);
      this_01 = (ContentSpecNode *)
                xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (this_01,Choice,pCVar10,this_00,true,true,this->fGrammarPoolMemoryManager);
      ContentSpecNode::setSecond(curNode,this_01);
      curNode = ContentSpecNode::getSecond(curNode);
    }
  }
  cVar6 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
  if (cVar6 == '\x01') {
    bVar5 = true;
    cVar6 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if ((cVar6 != '\x01') && (bVar5 = false, bVar11)) {
      cVar6 = xercesc_2_7::XMLScanner::emitErrorWillThrowException((Codes)this->fScanner);
      if ((cVar6 != '\0') && (headNode != (ContentSpecNode *)0x0)) {
        (*(headNode->super_XSerializable)._vptr_XSerializable[1])(headNode);
      }
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    }
    if ((bVar11) || (bVar5)) {
      pCVar8 = (ContentSpecNode *)
               xercesc_2_7::XMemory::operator_new(0x40,this->fGrammarPoolMemoryManager);
      ContentSpecNode::ContentSpecNode
                (pCVar8,ZeroOrMore,headNode,(ContentSpecNode *)0x0,true,true,
                 this->fGrammarPoolMemoryManager);
      headNode = pCVar8;
    }
    (**(code **)(*(long *)toFill + 0x60))(toFill,headNode);
    bVar11 = true;
  }
  else {
    if (headNode != (ContentSpecNode *)0x0) {
      (*(headNode->super_XSerializable)._vptr_XSerializable[1])(headNode);
    }
    pXVar2 = this->fScanner;
    pQVar7 = XMLElementDecl::getElementName((XMLElementDecl *)toFill);
    pXVar9 = QName::getLocalPart(pQVar7);
    xercesc_2_7::XMLScanner::emitError
              ((Codes)pXVar2,(ushort *)0xeb,pXVar9,(ushort *)0x0,(ushort *)0x0);
    bVar11 = false;
  }
  goto LAB_00107107;
}



void __thiscall xercesc_2_7::DTDScanner::scanNotationDecl(DTDScanner *this)

{
  long lVar1;
  ReaderMgr *this_00;
  DTDGrammar *pDVar2;
  code *pcVar3;
  XMLScanner *pXVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  XMLBuffer *pXVar8;
  XMLCh *pXVar9;
  XMLBuffer *pubIdToFill;
  ushort *puVar10;
  XMLCh *pXVar11;
  long in_FS_OFFSET;
  bool isIgnoring;
  XMLNotationDecl *decl;
  XMLCh *publicId;
  XMLCh *systemId;
  XMLBufBid bbName;
  XMLBufBid bbPubId;
  XMLBufBid bbSysId;
  LastExtEntityInfo lastInfo;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar5 = checkForPERef(this,false,true);
  if (bVar5 == true) {
    XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
    this_00 = this->fReaderMgr;
    pXVar8 = XMLBufBid::getBuffer(&bbName);
    bVar5 = ReaderMgr::getName(this_00,pXVar8);
    if (bVar5 == true) {
      bVar5 = XMLScanner::getDoNamespaces(this->fScanner);
      if (bVar5 != false) {
        pXVar9 = XMLBufBid::getRawBuffer(&bbName);
        iVar7 = xercesc_2_7::XMLString::indexOf(pXVar9,0x3a);
        if (iVar7 != -1) {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        }
      }
      bVar5 = checkForPERef(this,false,true);
      if (bVar5 == true) {
        XMLBufBid::XMLBufBid(&bbPubId,this->fBufMgr);
        XMLBufBid::XMLBufBid(&bbSysId,this->fBufMgr);
        pXVar8 = XMLBufBid::getBuffer(&bbSysId);
        pubIdToFill = XMLBufBid::getBuffer(&bbPubId);
        bVar5 = scanId(this,pubIdToFill,pXVar8,IDType_Either);
        if (bVar5 == true) {
          checkForPERef(this,false,true);
          pDVar2 = this->fDTDGrammar;
          pcVar3 = *(code **)(*(long *)this->fDTDGrammar + 0x78);
          pXVar9 = XMLBufBid::getRawBuffer(&bbName);
          decl = (XMLNotationDecl *)(*pcVar3)(pDVar2,pXVar9);
          bVar5 = decl != (XMLNotationDecl *)0x0;
          if (bVar5) {
            pXVar4 = this->fScanner;
            pXVar9 = XMLBufBid::getRawBuffer(&bbName);
            xercesc_2_7::XMLScanner::emitError
                      ((Codes)pXVar4,(ushort *)0x2,pXVar9,(ushort *)0x0,(ushort *)0x0);
          }
          else {
            puVar10 = XMLBufBid::getRawBuffer(&bbPubId);
            pXVar9 = XMLBufBid::getRawBuffer(&bbSysId);
            ReaderMgr::LastExtEntityInfo::LastExtEntityInfo(&lastInfo);
            xercesc_2_7::ReaderMgr::getLastExtEntityInfo((LastExtEntityInfo *)this->fReaderMgr);
            pXVar11 = XMLBufBid::getRawBuffer(&bbName);
            decl = (XMLNotationDecl *)
                   xercesc_2_7::XMemory::operator_new(0x38,this->fGrammarPoolMemoryManager);
            if ((lastInfo.systemId == (XMLCh *)0x0) || (*lastInfo.systemId == 0)) {
              lastInfo.systemId = (ushort *)0x0;
            }
            if ((pXVar9 == (XMLCh *)0x0) || (*pXVar9 == 0)) {
              pXVar9 = (ushort *)0x0;
            }
            if ((puVar10 == (XMLCh *)0x0) || (*puVar10 == 0)) {
              puVar10 = (ushort *)0x0;
            }
            xercesc_2_7::XMLNotationDecl::XMLNotationDecl
                      (decl,pXVar11,puVar10,pXVar9,lastInfo.systemId,this->fGrammarPoolMemoryManager
                      );
            (**(code **)(*(long *)this->fDTDGrammar + 0x90))(this->fDTDGrammar,decl);
          }
          if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
            (*this->fDocTypeHandler->_vptr_DocTypeHandler[0xd])
                      (this->fDocTypeHandler,decl,(ulong)bVar5);
          }
          checkForPERef(this,false,true);
          cVar6 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
          if (cVar6 != '\x01') {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
        }
        else {
          ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
        }
        XMLBufBid::_XMLBufBid(&bbSysId);
        XMLBufBid::_XMLBufBid(&bbPubId);
      }
      else {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      }
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
    XMLBufBid::_XMLBufBid(&bbName);
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __thiscall xercesc_2_7::DTDScanner::scanPI(DTDScanner *this)

{
  long lVar1;
  ReaderMgr *this_00;
  bool bVar2;
  char cVar3;
  ushort toCheck;
  uint uVar4;
  int iVar5;
  XMLBuffer *toFill;
  XMLCh *pXVar6;
  UnexpectedEOFException *this_01;
  XMLReader *this_02;
  XMLCh *pXVar7;
  long in_FS_OFFSET;
  bool gotLeadingSurrogate;
  XMLCh nextCh;
  XMLCh *namePtr;
  XMLCh *targetPtr;
  XMLBufBid bbName;
  XMLBufBid bbTarget;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = ReaderMgr::lookingAtSpace(this->fReaderMgr);
  if (bVar2 != false) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
  }
  XMLBufBid::XMLBufBid(&bbName,this->fBufMgr);
  this_00 = this->fReaderMgr;
  toFill = XMLBufBid::getBuffer(&bbName);
  bVar2 = ReaderMgr::getName(this_00,toFill);
  if (bVar2 != true) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    goto LAB_00107c1f;
  }
  pXVar6 = XMLBufBid::getRawBuffer(&bbName);
  uVar4 = XMLBufBid::getLen(&bbName);
  if ((((uVar4 == 3) && ((*pXVar6 == 0x78 || (*pXVar6 == 0x58)))) &&
      ((pXVar6[1] == 0x6d || (pXVar6[1] == 0x4d)))) && ((pXVar6[2] == 0x6c || (pXVar6[2] == 0x4c))))
  {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  bVar2 = XMLScanner::getDoNamespaces(this->fScanner);
  if ((bVar2 != false) && (iVar5 = xercesc_2_7::XMLString::indexOf(pXVar6,0x3a), iVar5 != -1)) {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
  }
  XMLBufBid::XMLBufBid(&bbTarget,this->fBufMgr);
  cVar3 = xercesc_2_7::ReaderMgr::skippedSpace();
  if (cVar3 == '\0') {
    cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
    if (cVar3 == '\x01') {
      cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
      if (cVar3 == '\x01') goto LAB_00107bb5;
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
  }
  else {
    xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
    bVar2 = false;
    while( true ) {
      toCheck = xercesc_2_7::ReaderMgr::getNextChar();
      if (toCheck == 0) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        this_01 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
        UnexpectedEOFException::UnexpectedEOFException
                  (this_01,"DTDScanner.cpp",0xdf2,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
        __cxa_throw(this_01,&UnexpectedEOFException::typeinfo,
                    UnexpectedEOFException::_UnexpectedEOFException);
      }
      if ((toCheck == 0x3f) &&
         (cVar3 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr), cVar3 != '\0'))
      break;
      if ((toCheck < 0xd800) || (0xdbff < toCheck)) {
        if (bVar2) {
          if ((toCheck < 0xdc00) || (0xdfff < toCheck)) {
            xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          }
        }
        else {
          this_02 = ReaderMgr::getCurrentReader(this->fReaderMgr);
          bVar2 = XMLReader::isXMLChar(this_02,toCheck);
          if (bVar2 != true) {
            xercesc_2_7::XMLString::binToText((uint)toCheck,tmpBuf,8,0x10,this->fMemoryManager);
            xercesc_2_7::XMLScanner::emitError
                      ((Codes)this->fScanner,(ushort *)0xc4,tmpBuf,(ushort *)0x0,(ushort *)0x0);
          }
        }
        bVar2 = false;
      }
      else if (bVar2) {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      }
      else {
        bVar2 = true;
      }
      XMLBufBid::append(&bbTarget,toCheck);
    }
LAB_00107bb5:
    pXVar7 = XMLBufBid::getRawBuffer(&bbTarget);
    if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
      (*this->fDocTypeHandler->_vptr_DocTypeHandler[5])(this->fDocTypeHandler,pXVar6,pXVar7);
    }
  }
  XMLBufBid::_XMLBufBid(&bbTarget);
LAB_00107c1f:
  XMLBufBid::_XMLBufBid(&bbName);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



bool __thiscall xercesc_2_7::DTDScanner::scanPublicLiteral(DTDScanner *this,XMLBuffer *toFill)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ushort toAppend;
  UnexpectedEOFException *this_00;
  XMLReader *pXVar4;
  long in_FS_OFFSET;
  XMLCh quoteCh;
  XMLCh nextCh;
  XMLCh tmpBuf [9];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toFill);
  cVar2 = xercesc_2_7::ReaderMgr::skipIfQuote((ushort *)this->fReaderMgr);
  if (cVar2 == '\x01') {
    while( true ) {
      toAppend = xercesc_2_7::ReaderMgr::getNextChar();
      if (toAppend == 0) {
        this_00 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
        UnexpectedEOFException::UnexpectedEOFException
                  (this_00,"DTDScanner.cpp",0xe59,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
        __cxa_throw(this_00,&UnexpectedEOFException::typeinfo,
                    UnexpectedEOFException::_UnexpectedEOFException);
      }
      if (toAppend == quoteCh) break;
      pXVar4 = ReaderMgr::getCurrentReader(this->fReaderMgr);
      cVar2 = xercesc_2_7::XMLReader::isPublicIdChar((ushort)pXVar4);
      if (cVar2 != '\x01') {
        xercesc_2_7::XMLString::binToText((uint)toAppend,tmpBuf,8,0x10,this->fMemoryManager);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)this->fScanner,(ushort *)0xd3,tmpBuf,(ushort *)0x0,(ushort *)0x0);
      }
      XMLBuffer::append(toFill,toAppend);
    }
    bVar3 = true;
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    bVar3 = false;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return bVar3;
}



bool __thiscall xercesc_2_7::DTDScanner::scanSystemLiteral(DTDScanner *this,XMLBuffer *toFill)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  XMLCh toAppend;
  UnexpectedEOFException *this_00;
  long in_FS_OFFSET;
  XMLCh quoteCh;
  XMLCh nextCh;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  XMLBuffer::reset(toFill);
  cVar2 = xercesc_2_7::ReaderMgr::skipIfQuote((ushort *)this->fReaderMgr);
  if (cVar2 == '\x01') {
    while( true ) {
      toAppend = xercesc_2_7::ReaderMgr::getNextChar();
      if (toAppend == 0) {
        this_00 = (UnexpectedEOFException *)__cxa_allocate_exception(0x30);
        UnexpectedEOFException::UnexpectedEOFException
                  (this_00,"DTDScanner.cpp",0xe8c,Gen_UnexpectedEOF,this->fMemoryManager);
                    // WARNING: Subroutine does not return
        __cxa_throw(this_00,&UnexpectedEOFException::typeinfo,
                    UnexpectedEOFException::_UnexpectedEOFException);
      }
      if (toAppend == quoteCh) break;
      XMLBuffer::append(toFill,toAppend);
    }
    bVar3 = true;
  }
  else {
    xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
    bVar3 = false;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return bVar3;
}



void __thiscall xercesc_2_7::DTDScanner::scanTextDecl(DTDScanner *this)

{
  long lVar1;
  XMLScanner *pXVar2;
  DocTypeHandler *pDVar3;
  anon_subr_int_varargs *paVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  XMLVersion XVar8;
  XMLBuffer *pXVar9;
  XMLCh *pXVar10;
  XMLCh *pXVar11;
  XMLReader *pXVar12;
  long in_FS_OFFSET;
  bool gotEncoding;
  XMLBufBid bbVersion;
  XMLBufBid bbEncoding;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
  XMLBufBid::XMLBufBid(&bbVersion,this->fBufMgr);
  bVar5 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgVersionString);
  if (bVar5 != false) {
    bVar5 = scanEq(this);
    if (bVar5 != true) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      goto LAB_0010845c;
    }
    pXVar9 = XMLBufBid::getBuffer(&bbVersion);
    bVar5 = getQuotedString(this,pXVar9);
    if (bVar5 != true) {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      goto LAB_0010845c;
    }
    pXVar10 = XMLBufBid::getRawBuffer(&bbVersion);
    bVar5 = XMLString::equals(pXVar10,(XMLCh *)&XMLUni::fgVersion1_1);
    if (bVar5 == false) {
      pXVar10 = XMLBufBid::getRawBuffer(&bbVersion);
      bVar5 = XMLString::equals(pXVar10,(XMLCh *)&XMLUni::fgVersion1_0);
      if (bVar5 != true) {
        pXVar2 = this->fScanner;
        pXVar10 = XMLBufBid::getRawBuffer(&bbVersion);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar2,(ushort *)0xbd,pXVar10,(ushort *)0x0,(ushort *)0x0);
      }
    }
    else {
      XVar8 = XMLScanner::getXMLVersion(this->fScanner);
      if (XVar8 != XMLV1_1) {
        pXVar2 = this->fScanner;
        pXVar10 = XMLBufBid::getRawBuffer(&bbVersion);
        xercesc_2_7::XMLScanner::emitError
                  ((Codes)pXVar2,(ushort *)0xbd,pXVar10,(ushort *)0x0,(ushort *)0x0);
      }
    }
  }
  XMLBufBid::XMLBufBid(&bbEncoding,this->fBufMgr);
  xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
  bVar5 = false;
  bVar6 = ReaderMgr::skippedString(this->fReaderMgr,(XMLCh *)&XMLUni::fgEncodingString);
  if (bVar6 == false) {
LAB_0010828f:
    if (bVar5) {
      xercesc_2_7::ReaderMgr::skipPastSpaces(SUB81(this->fReaderMgr,0));
      cVar7 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
      if (cVar7 == '\x01') {
        cVar7 = xercesc_2_7::ReaderMgr::skippedChar((ushort)this->fReaderMgr);
        if (cVar7 != '\x01') {
          xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
          ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
        }
      }
      else {
        xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
        ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
      }
      if (this->fDocTypeHandler != (DocTypeHandler *)0x0) {
        pDVar3 = this->fDocTypeHandler;
        paVar4 = this->fDocTypeHandler->_vptr_DocTypeHandler[0x11];
        pXVar10 = XMLBufBid::getRawBuffer(&bbEncoding);
        pXVar11 = XMLBufBid::getRawBuffer(&bbVersion);
        (*paVar4)(pDVar3,pXVar11,pXVar10);
      }
      bVar5 = XMLBufBid::isEmpty(&bbEncoding);
      if (bVar5 != true) {
        pXVar12 = ReaderMgr::getCurrentReader(this->fReaderMgr);
        XMLBufBid::getRawBuffer(&bbEncoding);
        cVar7 = xercesc_2_7::XMLReader::setEncoding((ushort *)pXVar12);
        if (cVar7 != '\x01') {
          pXVar2 = this->fScanner;
          pXVar10 = XMLBufBid::getRawBuffer(&bbEncoding);
          xercesc_2_7::XMLScanner::emitError
                    ((Codes)pXVar2,(ushort *)0x4,pXVar10,(ushort *)0x0,(ushort *)0x0);
        }
      }
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
  }
  else {
    bVar5 = scanEq(this);
    if (bVar5 == true) {
      pXVar9 = XMLBufBid::getBuffer(&bbEncoding);
      getQuotedString(this,pXVar9);
      bVar5 = XMLBufBid::isEmpty(&bbEncoding);
      if (bVar5 == false) {
        pXVar10 = XMLBufBid::getRawBuffer(&bbEncoding);
        cVar7 = xercesc_2_7::XMLString::isValidEncName(pXVar10);
        if (cVar7 != '\x01') goto LAB_00108227;
        bVar5 = false;
      }
      else {
LAB_00108227:
        bVar5 = true;
      }
      if (!bVar5) {
        bVar5 = true;
        goto LAB_0010828f;
      }
      pXVar2 = this->fScanner;
      pXVar10 = XMLBufBid::getRawBuffer(&bbEncoding);
      xercesc_2_7::XMLScanner::emitError
                ((Codes)pXVar2,(ushort *)0xbf,pXVar10,(ushort *)0x0,(ushort *)0x0);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
    else {
      xercesc_2_7::XMLScanner::emitError((Codes)this->fScanner);
      ReaderMgr::skipPastChar(this->fReaderMgr,0x3e);
    }
  }
  XMLBufBid::_XMLBufBid(&bbEncoding);
LAB_0010845c:
  XMLBufBid::_XMLBufBid(&bbVersion);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void __thiscall xercesc_2_7::XMemory::XMemory(XMemory *this)

{
  return;
}



void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  this->_vptr_XMLDeleter = (anon_subr_int_varargs **)&PTR__XMLDeleter_0010b678;
  return;
}



void __thiscall xercesc_2_7::XMLDeleter::_XMLDeleter(XMLDeleter *this)

{
  _XMLDeleter(this);
  operator_delete(this);
  return;
}



void __thiscall
xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException
          (UnexpectedEOFException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__UnexpectedEOFException_0010b648;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}



// (LSDA) Type Table

void __thiscall
xercesc_2_7::UnexpectedEOFException::UnexpectedEOFException
          (UnexpectedEOFException *this,UnexpectedEOFException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__UnexpectedEOFException_0010b648;
  return;
}



void __thiscall
xercesc_2_7::UnexpectedEOFException::_UnexpectedEOFException(UnexpectedEOFException *this)

{
  *(undefined ***)this = &PTR__UnexpectedEOFException_0010b648;
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
xercesc_2_7::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_0010b618;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}



void __thiscall
xercesc_2_7::ArrayIndexOutOfBoundsException::_ArrayIndexOutOfBoundsException
          (ArrayIndexOutOfBoundsException *this)

{
  *(undefined ***)this = &PTR__ArrayIndexOutOfBoundsException_0010b618;
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



uint xercesc_2_7::XMLString::hash(XMLCh *tohash,uint hashModulus,MemoryManager *param_3)

{
  uint uVar1;
  uint hashVal;
  XMLCh *curCh;
  
  if ((tohash == (XMLCh *)0x0) || (*tohash == 0)) {
    uVar1 = 0;
  }
  else {
    hashVal = (uint)*tohash;
    for (curCh = tohash + 1; *curCh != 0; curCh = curCh + 1) {
      hashVal = (uint)*curCh + (hashVal >> 0x18) + hashVal * 0x26;
    }
    uVar1 = hashVal % hashModulus;
  }
  return uVar1;
}



void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,char *srcFile,uint srcLine,Codes toThrow,
          MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__IllegalArgumentException_0010b5e8;
  xercesc_2_7::XMLException::loadExceptText((Codes)this);
  return;
}



// (LSDA) Type Table

void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,IllegalArgumentException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__IllegalArgumentException_0010b5e8;
  return;
}



void __thiscall
xercesc_2_7::IllegalArgumentException::IllegalArgumentException
          (IllegalArgumentException *this,char *srcFile,uint srcLine,Codes toThrow,XMLCh *text1,
          XMLCh *text2,XMLCh *text3,XMLCh *text4,MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__IllegalArgumentException_0010b5e8;
  xercesc_2_7::XMLException::loadExceptText
            ((Codes)this,(ushort *)(ulong)(uint)toThrow,text1,text2,text3);
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
xercesc_2_7::RuntimeException::RuntimeException(RuntimeException *this,RuntimeException *toCopy)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,&toCopy->super_XMLException);
  *(undefined ***)this = &PTR__RuntimeException_0010b5b8;
  return;
}



void __thiscall
xercesc_2_7::RuntimeException::RuntimeException
          (RuntimeException *this,char *srcFile,uint srcLine,Codes toThrow,XMLCh *text1,XMLCh *text2
          ,XMLCh *text3,XMLCh *text4,MemoryManager *memoryManager)

{
  xercesc_2_7::XMLException::XMLException(&this->super_XMLException,srcFile,srcLine,memoryManager);
  *(undefined ***)this = &PTR__RuntimeException_0010b5b8;
  xercesc_2_7::XMLException::loadExceptText
            ((Codes)this,(ushort *)(ulong)(uint)toThrow,text1,text2,text3);
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

XMLException * __thiscall xercesc_2_7::RuntimeException::duplicate(RuntimeException *this)

{
  RuntimeException *this_00;
  
  this_00 = (RuntimeException *)
            xercesc_2_7::XMemory::operator_new(0x30,*(MemoryManager **)&this->field_0x28);
  RuntimeException(this_00,this);
  return &this_00->super_XMLException;
}



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
  this->_vptr_XSerializable = (anon_subr_int_varargs **)&DAT_0010b580;
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
  this->_vptr_XSerializable = (anon_subr_int_varargs **)&DAT_0010b580;
  return;
}



XMLCh * __thiscall xercesc_2_7::QName::getLocalPart(QName *this)

{
  return *(XMLCh **)(this + 0x20);
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



void __thiscall xercesc_2_7::XMLAttDef::setDefaultType(XMLAttDef *this,DefAttTypes newValue)

{
  *(DefAttTypes *)(this + 8) = newValue;
  return;
}



void __thiscall xercesc_2_7::XMLAttDef::setEnumeration(XMLAttDef *this,XMLCh *newValue)

{
  XMLCh *pXVar1;
  
  if (*(long *)(this + 0x28) != 0) {
    (**(code **)(**(long **)(this + 0x30) + 0x18))
              (*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x28));
  }
  pXVar1 = XMLString::replicate(newValue,*(MemoryManager **)(this + 0x30));
  *(XMLCh **)(this + 0x28) = pXVar1;
  return;
}



void __thiscall xercesc_2_7::XMLAttDef::setId(XMLAttDef *this,uint newId)

{
  *(uint *)(this + 0x18) = newId;
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



void __thiscall xercesc_2_7::XMLAttDef::setExternalAttDeclaration(XMLAttDef *this,bool aValue)

{
  this[0x15] = (XMLAttDef)aValue;
  return;
}



uint __thiscall xercesc_2_7::EndOfEntityException::getReaderNum(EndOfEntityException *this)

{
  return this->fReaderNum;
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



void __thiscall xercesc_2_7::XMLRefInfo::_XMLRefInfo(XMLRefInfo *this)

{
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__XMLRefInfo_0010b548;
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

bool __thiscall xercesc_2_7::XMLReader::isXMLChar(XMLReader *this,XMLCh toCheck)

{
  return (this->fgCharCharsTable[toCheck] & 0x40) != 0;
}



bool __thiscall xercesc_2_7::XMLReader::isWhitespace(XMLReader *this,XMLCh toCheck)

{
  return (bool)(this->fgCharCharsTable[toCheck] >> 7);
}



bool __thiscall xercesc_2_7::XMLReader::isControlChar(XMLReader *this,XMLCh toCheck)

{
  return (this->fgCharCharsTable[toCheck] & 0x20) != 0;
}



uint __thiscall xercesc_2_7::XMLReader::getReaderNum(XMLReader *this)

{
  return this->fReaderNum;
}



Types __thiscall xercesc_2_7::XMLReader::getType(XMLReader *this)

{
  return this->fType;
}



void __thiscall xercesc_2_7::XMLReader::setThrowAtEnd(XMLReader *this,bool newValue)

{
  this->fThrowAtEnd = newValue;
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



bool __thiscall xercesc_2_7::ReaderMgr::getName(ReaderMgr *this,XMLBuffer *toFill)

{
  undefined uVar1;
  
  XMLBuffer::reset(toFill);
  uVar1 = xercesc_2_7::XMLReader::getName(*(XMLBuffer **)(this + 0x10),SUB81(toFill,0));
  return (bool)uVar1;
}



bool __thiscall xercesc_2_7::ReaderMgr::getNameToken(ReaderMgr *this,XMLBuffer *toFill)

{
  undefined uVar1;
  
  XMLBuffer::reset(toFill);
  uVar1 = xercesc_2_7::XMLReader::getName(*(XMLBuffer **)(this + 0x10),SUB81(toFill,0));
  return (bool)uVar1;
}



bool __thiscall xercesc_2_7::ReaderMgr::lookingAtChar(ReaderMgr *this,XMLCh chToCheck)

{
  XMLCh XVar1;
  
  XVar1 = xercesc_2_7::ReaderMgr::peekNextChar();
  return chToCheck == XVar1;
}



bool __thiscall xercesc_2_7::ReaderMgr::lookingAtSpace(ReaderMgr *this)

{
  bool bVar1;
  XMLCh toCheck;
  XMLCh c;
  
  toCheck = xercesc_2_7::ReaderMgr::peekNextChar();
  bVar1 = XMLReader::isWhitespace(*(XMLReader **)(this + 0x10),toCheck);
  return bVar1;
}



bool __thiscall xercesc_2_7::ReaderMgr::skippedString(ReaderMgr *this,XMLCh *toSkip)

{
  undefined uVar1;
  
  uVar1 = xercesc_2_7::XMLReader::skippedString(*(ushort **)(this + 0x10));
  return (bool)uVar1;
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



XMLCh * __thiscall xercesc_2_7::XMLEntityDecl::getName(XMLEntityDecl *this)

{
  return *(XMLCh **)(this + 0x18);
}



XMLCh * __thiscall xercesc_2_7::XMLEntityDecl::getPublicId(XMLEntityDecl *this)

{
  return *(XMLCh **)(this + 0x28);
}



XMLCh * __thiscall xercesc_2_7::XMLEntityDecl::getSystemId(XMLEntityDecl *this)

{
  return *(XMLCh **)(this + 0x30);
}



XMLCh * __thiscall xercesc_2_7::XMLEntityDecl::getBaseURI(XMLEntityDecl *this)

{
  return *(XMLCh **)(this + 0x38);
}



XMLCh * __thiscall xercesc_2_7::XMLEntityDecl::getValue(XMLEntityDecl *this)

{
  return *(XMLCh **)(this + 0x10);
}



uint __thiscall xercesc_2_7::XMLEntityDecl::getValueLen(XMLEntityDecl *this)

{
  return *(uint *)(this + 0xc);
}



bool __thiscall xercesc_2_7::XMLEntityDecl::isExternal(XMLEntityDecl *this)

{
  bool bVar1;
  
  if ((*(long *)(this + 0x28) == 0) && (*(long *)(this + 0x30) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



bool __thiscall xercesc_2_7::XMLEntityDecl::isUnparsed(XMLEntityDecl *this)

{
  return *(long *)(this + 0x20) != 0;
}



void __thiscall xercesc_2_7::XMLEntityDecl::setId(XMLEntityDecl *this,uint newId)

{
  *(uint *)(this + 8) = newId;
  return;
}



void __thiscall xercesc_2_7::XMLEntityDecl::setNotationName(XMLEntityDecl *this,XMLCh *newName)

{
  XMLCh *pXVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))
              (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x20));
  }
  pXVar1 = XMLString::replicate(newName,*(MemoryManager **)(this + 0x40));
  *(XMLCh **)(this + 0x20) = pXVar1;
  return;
}



void __thiscall xercesc_2_7::XMLEntityDecl::setPublicId(XMLEntityDecl *this,XMLCh *newId)

{
  XMLCh *pXVar1;
  
  if (*(long *)(this + 0x28) != 0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))
              (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x28));
  }
  pXVar1 = XMLString::replicate(newId,*(MemoryManager **)(this + 0x40));
  *(XMLCh **)(this + 0x28) = pXVar1;
  return;
}



void __thiscall xercesc_2_7::XMLEntityDecl::setSystemId(XMLEntityDecl *this,XMLCh *newId)

{
  XMLCh *pXVar1;
  
  if (*(long *)(this + 0x30) != 0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))
              (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x30));
  }
  pXVar1 = XMLString::replicate(newId,*(MemoryManager **)(this + 0x40));
  *(XMLCh **)(this + 0x30) = pXVar1;
  return;
}



void __thiscall xercesc_2_7::XMLEntityDecl::setBaseURI(XMLEntityDecl *this,XMLCh *newId)

{
  XMLCh *pXVar1;
  
  if (*(long *)(this + 0x38) != 0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))
              (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x38));
  }
  pXVar1 = XMLString::replicate(newId,*(MemoryManager **)(this + 0x40));
  *(XMLCh **)(this + 0x38) = pXVar1;
  return;
}



void __thiscall xercesc_2_7::XMLEntityDecl::setValue(XMLEntityDecl *this,XMLCh *newValue)

{
  uint uVar1;
  XMLCh *pXVar2;
  
  if (*(long *)(this + 0x10) != 0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))
              (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x10));
  }
  pXVar2 = XMLString::replicate(newValue,*(MemoryManager **)(this + 0x40));
  *(XMLCh **)(this + 0x10) = pXVar2;
  uVar1 = XMLString::stringLen(newValue);
  *(uint *)(this + 0xc) = uVar1;
  return;
}



XMLCh * __thiscall xercesc_2_7::XMLEntityDecl::getKey(XMLEntityDecl *this)

{
  return *(XMLCh **)(this + 0x18);
}



void __thiscall
xercesc_2_7::DTDEntityDecl::DTDEntityDecl(DTDEntityDecl *this,MemoryManager *manager)

{
  xercesc_2_7::XMLEntityDecl::XMLEntityDecl(&this->super_XMLEntityDecl,manager);
  *(undefined ***)this = &PTR__DTDEntityDecl_0010b4f8;
  this->fDeclaredInIntSubset = false;
  this->fIsParameter = false;
  this->fIsSpecialChar = false;
  return;
}



void __thiscall
xercesc_2_7::DTDEntityDecl::DTDEntityDecl
          (DTDEntityDecl *this,XMLCh *entName,bool fromIntSubset,MemoryManager *manager)

{
  xercesc_2_7::XMLEntityDecl::XMLEntityDecl(&this->super_XMLEntityDecl,entName,manager);
  *(undefined ***)this = &PTR__DTDEntityDecl_0010b4f8;
  this->fDeclaredInIntSubset = fromIntSubset;
  this->fIsParameter = false;
  this->fIsSpecialChar = false;
  return;
}



void __thiscall xercesc_2_7::DTDEntityDecl::_DTDEntityDecl(DTDEntityDecl *this)

{
  *(undefined ***)this = &PTR__DTDEntityDecl_0010b4f8;
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



void __thiscall
xercesc_2_7::DTDEntityDecl::setDeclaredInIntSubset(DTDEntityDecl *this,bool newValue)

{
  this->fDeclaredInIntSubset = newValue;
  return;
}



void __thiscall xercesc_2_7::DTDEntityDecl::setIsParameter(DTDEntityDecl *this,bool newValue)

{
  this->fIsParameter = newValue;
  return;
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



bool __thiscall xercesc_2_7::XMLElementDecl::isDeclared(XMLElementDecl *this)

{
  return *(int *)(this + 0x18) == 1;
}



void __thiscall
xercesc_2_7::XMLElementDecl::setCreateReason(XMLElementDecl *this,CreateReasons newReason)

{
  *(CreateReasons *)(this + 0x18) = newReason;
  return;
}



void __thiscall
xercesc_2_7::XMLElementDecl::setExternalElemDeclaration(XMLElementDecl *this,bool aValue)

{
  this[0x20] = (XMLElementDecl)aValue;
  return;
}



bool __thiscall xercesc_2_7::XMLScanner::getDoNamespaces(XMLScanner *this)

{
  return (bool)this[0x12];
}



XMLEntityHandler * __thiscall xercesc_2_7::XMLScanner::getEntityHandler(XMLScanner *this)

{
  return *(XMLEntityHandler **)(this + 0x88);
}



bool __thiscall xercesc_2_7::XMLScanner::getStandalone(XMLScanner *this)

{
  return (bool)this[0x16];
}



XMLValidator * __thiscall xercesc_2_7::XMLScanner::getValidator(XMLScanner *this)

{
  return *(XMLValidator **)(this + 0x108);
}



uint __thiscall xercesc_2_7::XMLScanner::getEmptyNamespaceId(XMLScanner *this)

{
  return *(uint *)(this + 0x34);
}



bool __thiscall xercesc_2_7::XMLScanner::getHasNoDTD(XMLScanner *this)

{
  return (bool)this[0x17];
}



bool __thiscall xercesc_2_7::XMLScanner::getCalculateSrcOfs(XMLScanner *this)

{
  return (bool)this[0x11];
}



XMLVersion __thiscall xercesc_2_7::XMLScanner::getXMLVersion(XMLScanner *this)

{
  return *(XMLVersion *)(this + 0x160);
}



bool __thiscall xercesc_2_7::XMLScanner::getDisableDefaultEntityResolution(XMLScanner *this)

{
  return (bool)this[0x25];
}



void __thiscall xercesc_2_7::XMLScanner::setHasNoDTD(XMLScanner *this,bool hasNoDTD)

{
  this[0x17] = (XMLScanner)hasNoDTD;
  return;
}



bool __thiscall xercesc_2_7::XMLScanner::getDoValidation(XMLScanner *this)

{
  return (bool)this[0x18];
}



void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,QName *element,MemoryManager *manager)

{
  QName *this_00;
  
  XSerializable::XSerializable(&this->super_XSerializable);
  XMemory::XMemory((XMemory *)this);
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_0010b430;
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
  if (element != (QName *)0x0) {
    this_00 = (QName *)xercesc_2_7::XMemory::operator_new(0x38,this->fMemoryManager);
    xercesc_2_7::QName::QName(this_00,element);
    this->fElement = this_00;
  }
  return;
}



// (LSDA) Type Table

void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,QName *element,bool copyQName,MemoryManager *manager)

{
  QName *this_00;
  
  XSerializable::XSerializable(&this->super_XSerializable);
  XMemory::XMemory((XMemory *)this);
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_0010b430;
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



// (LSDA) Type Table

void __thiscall
xercesc_2_7::ContentSpecNode::ContentSpecNode
          (ContentSpecNode *this,NodeTypes type,ContentSpecNode *firstAdopt,
          ContentSpecNode *secondAdopt,bool adoptFirst,bool adoptSecond,MemoryManager *manager)

{
  XSerializable::XSerializable(&this->super_XSerializable);
  XMemory::XMemory((XMemory *)this);
  (this->super_XSerializable)._vptr_XSerializable =
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_0010b430;
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
       (anon_subr_int_varargs **)&PTR__ContentSpecNode_0010b430;
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

ContentSpecNode * __thiscall xercesc_2_7::ContentSpecNode::getSecond(ContentSpecNode *this)

{
  return this->fSecond;
}



NodeTypes __thiscall xercesc_2_7::ContentSpecNode::getType(ContentSpecNode *this)

{
  return this->fType;
}



ContentSpecNode * __thiscall xercesc_2_7::ContentSpecNode::orphanFirst(ContentSpecNode *this)

{
  ContentSpecNode *pCVar1;
  ContentSpecNode *retNode;
  
  pCVar1 = this->fFirst;
  this->fFirst = (ContentSpecNode *)0x0;
  return pCVar1;
}



ContentSpecNode * __thiscall xercesc_2_7::ContentSpecNode::orphanSecond(ContentSpecNode *this)

{
  ContentSpecNode *pCVar1;
  ContentSpecNode *retNode;
  
  pCVar1 = this->fSecond;
  this->fSecond = (ContentSpecNode *)0x0;
  return pCVar1;
}



void __thiscall
xercesc_2_7::ContentSpecNode::setSecond(ContentSpecNode *this,ContentSpecNode *toAdopt)

{
  ContentSpecNode *pCVar1;
  
  if ((this->fAdoptSecond != false) && (pCVar1 = this->fSecond, pCVar1 != (ContentSpecNode *)0x0)) {
    (*(pCVar1->super_XSerializable)._vptr_XSerializable[1])(pCVar1);
  }
  this->fSecond = toAdopt;
  return;
}



void __thiscall xercesc_2_7::DTDElementDecl::setModelType(DTDElementDecl *this,ModelTypes toSet)

{
  *(ModelTypes *)(this + 0x24) = toSet;
  return;
}



DTDEntityDecl * __thiscall xercesc_2_7::DTDGrammar::getEntityDecl(DTDGrammar *this,XMLCh *entName)

{
  DTDEntityDecl *pDVar1;
  DTDEntityDecl *decl;
  
  pDVar1 = NameIdPool<xercesc_2_7::DTDEntityDecl>::getByKey(fDefaultEntities,entName);
  if (pDVar1 == (DTDEntityDecl *)0x0) {
    pDVar1 = NameIdPool<xercesc_2_7::DTDEntityDecl>::getByKey
                       (*(NameIdPool_xercesc_2_7__DTDEntityDecl_ **)(this + 0x20),entName);
  }
  return pDVar1;
}



uint __thiscall xercesc_2_7::DTDGrammar::putEntityDecl(DTDGrammar *this,DTDEntityDecl *entityDecl)

{
  uint uVar1;
  
  uVar1 = NameIdPool<xercesc_2_7::DTDEntityDecl>::put
                    (*(NameIdPool_xercesc_2_7__DTDEntityDecl_ **)(this + 0x20),entityDecl);
  return uVar1;
}



bool __thiscall xercesc_2_7::DTDScanner::isReadingExternalEntity(DTDScanner *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->fDocTypeReaderId;
  uVar2 = ReaderMgr::getCurrentReaderNum(this->fReaderMgr);
  return uVar1 != uVar2;
}



void __thiscall
xercesc_2_7::ReaderMgr::LastExtEntityInfo::LastExtEntityInfo(LastExtEntityInfo *this)

{
  XMemory::XMemory((XMemory *)this);
  return;
}



DTDEntityDecl * __thiscall
xercesc_2_7::NameIdPool<xercesc_2_7::DTDEntityDecl>::getByKey
          (NameIdPool_xercesc_2_7__DTDEntityDecl_ *this,XMLCh *key)

{
  DTDEntityDecl *pDVar1;
  long in_FS_OFFSET;
  uint hashVal;
  NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *findIt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  findIt = findBucketElem(this,key,&hashVal);
  if (findIt == (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)0x0) {
    pDVar1 = (DTDEntityDecl *)0x0;
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



// WARNING: Removing unreachable block (ram,0x0010ad41)

uint __thiscall
xercesc_2_7::NameIdPool<xercesc_2_7::DTDEntityDecl>::put
          (NameIdPool_xercesc_2_7__DTDEntityDecl_ *this,DTDEntityDecl *elemToAdopt)

{
  MemoryManager *memoryManager;
  int iVar1;
  XMLCh *pXVar2;
  NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *pNVar3;
  IllegalArgumentException *this_00;
  undefined4 extraout_var;
  ulong uVar4;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  uint hashVal;
  uint newCount;
  uint retId;
  NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *newBucket;
  DTDEntityDecl **newArray;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pXVar2 = XMLEntityDecl::getKey(&elemToAdopt->super_XMLEntityDecl);
  pNVar3 = findBucketElem(this,pXVar2,&hashVal);
  if (pNVar3 != (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)0x0) {
    this_00 = (IllegalArgumentException *)__cxa_allocate_exception(0x30);
    memoryManager = this->fMemoryManager;
    pXVar2 = XMLEntityDecl::getKey(&elemToAdopt->super_XMLEntityDecl);
    IllegalArgumentException::IllegalArgumentException
              (this_00,"./xercesc/util/NameIdPool.c",0xcf,Pool_ElemAlreadyExists,pXVar2,(XMLCh *)0x0
               ,(XMLCh *)0x0,(XMLCh *)0x0,memoryManager);
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&IllegalArgumentException::typeinfo,
                IllegalArgumentException::_IllegalArgumentException);
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])(this->fMemoryManager,0x10);
  newBucket = (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)
              operator_new(0x10,(void *)CONCAT44(extraout_var,iVar1));
  NameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl>::NameIdPoolBucketElem
            (newBucket,elemToAdopt,this->fBucketList[hashVal]);
  this->fBucketList[hashVal] = newBucket;
  if (this->fIdCounter + 1 == this->fIdPtrsCount) {
    uVar4 = (ulong)((double)(ulong)this->fIdPtrsCount * 1.5);
    newCount = (uint)uVar4;
    iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                      (this->fMemoryManager,(uVar4 & 0xffffffff) << 3);
    newArray = (DTDEntityDecl **)CONCAT44(extraout_var_00,iVar1);
    memcpy(newArray,this->fIdPtrs,(ulong)this->fIdPtrsCount * 8);
    (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager);
    this->fIdPtrs = newArray;
    this->fIdPtrsCount = newCount;
  }
  this->fIdCounter = this->fIdCounter + 1;
  retId = this->fIdCounter;
  this->fIdPtrs[retId] = elemToAdopt;
  XMLEntityDecl::setId(&elemToAdopt->super_XMLEntityDecl,retId);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return retId;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __thiscall
xercesc_2_7::NameIdPool<xercesc_2_7::DTDEntityDecl>::NameIdPool
          (NameIdPool_xercesc_2_7__DTDEntityDecl_ *this,uint hashModulus,uint initSize,
          MemoryManager *manager)

{
  int iVar1;
  IllegalArgumentException *this_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint index;
  
  XMemory::XMemory((XMemory *)this);
  this->fMemoryManager = manager;
  this->fBucketList = (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ **)0x0;
  this->fIdPtrs = (DTDEntityDecl **)0x0;
  this->fIdPtrsCount = initSize;
  this->fIdCounter = 0;
  this->fHashModulus = hashModulus;
  if (this->fHashModulus == 0) {
    this_00 = (IllegalArgumentException *)__cxa_allocate_exception(0x30);
    IllegalArgumentException::IllegalArgumentException
              (this_00,"./xercesc/util/NameIdPool.c",0x45,Pool_ZeroModulus,this->fMemoryManager);
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&IllegalArgumentException::typeinfo,
                IllegalArgumentException::_IllegalArgumentException);
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fHashModulus << 3);
  this->fBucketList =
       (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ **)CONCAT44(extraout_var,iVar1);
  for (index = 0; index < this->fHashModulus; index = index + 1) {
    this->fBucketList[index] = (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)0x0;
  }
  if (this->fIdPtrsCount == 0) {
    this->fIdPtrsCount = 0x100;
  }
  iVar1 = (*this->fMemoryManager->_vptr_MemoryManager[2])
                    (this->fMemoryManager,(ulong)this->fIdPtrsCount << 3);
  this->fIdPtrs = (DTDEntityDecl **)CONCAT44(extraout_var_00,iVar1);
  *this->fIdPtrs = (DTDEntityDecl *)0x0;
  return;
}



void __thiscall
xercesc_2_7::NameIdPool<xercesc_2_7::DTDEntityDecl>::_NameIdPool
          (NameIdPool_xercesc_2_7__DTDEntityDecl_ *this)

{
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fIdPtrs);
  removeAll(this);
  (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,this->fBucketList);
  return;
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
xercesc_2_7::FlagJanitor<bool>::FlagJanitor(FlagJanitor_bool_ *this,bool *valPtr,bool newVal)

{
  this->fValPtr = valPtr;
  if (this->fValPtr != (bool *)0x0) {
    this->fOldVal = *this->fValPtr;
    *this->fValPtr = newVal;
  }
  return;
}



void __thiscall xercesc_2_7::FlagJanitor<bool>::_FlagJanitor(FlagJanitor_bool_ *this)

{
  if (this->fValPtr != (bool *)0x0) {
    *this->fValPtr = this->fOldVal;
  }
  return;
}



NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ * __thiscall
xercesc_2_7::NameIdPool<xercesc_2_7::DTDEntityDecl>::findBucketElem
          (NameIdPool_xercesc_2_7__DTDEntityDecl_ *this,XMLCh *key,uint *hashVal)

{
  bool bVar1;
  uint uVar2;
  XMLCh *str2;
  NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *curElem;
  
  uVar2 = XMLString::hash(key,this->fHashModulus,this->fMemoryManager);
  *hashVal = uVar2;
  curElem = this->fBucketList[*hashVal];
  while( true ) {
    if (curElem == (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)0x0) {
      return (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)0x0;
    }
    str2 = XMLEntityDecl::getKey(&curElem->fData->super_XMLEntityDecl);
    bVar1 = XMLString::equals(key,str2);
    if (bVar1 != false) break;
    curElem = curElem->fNext;
  }
  return curElem;
}



void __thiscall
xercesc_2_7::NameIdPoolBucketElem<xercesc_2_7::DTDEntityDecl>::NameIdPoolBucketElem
          (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *this,DTDEntityDecl *value,
          NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *next)

{
  this->fData = value;
  this->fNext = next;
  return;
}



void __thiscall
xercesc_2_7::NameIdPool<xercesc_2_7::DTDEntityDecl>::removeAll
          (NameIdPool_xercesc_2_7__DTDEntityDecl_ *this)

{
  NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *pNVar1;
  DTDEntityDecl *pDVar2;
  uint buckInd;
  NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *curElem;
  NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *nextElem;
  
  for (buckInd = 0; buckInd < this->fHashModulus; buckInd = buckInd + 1) {
    curElem = this->fBucketList[buckInd];
    while (curElem != (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)0x0) {
      pNVar1 = curElem->fNext;
      pDVar2 = curElem->fData;
      if (pDVar2 != (DTDEntityDecl *)0x0) {
        (**(code **)(*(long *)pDVar2 + 8))(pDVar2);
      }
      (*this->fMemoryManager->_vptr_MemoryManager[3])(this->fMemoryManager,curElem);
      curElem = pNVar1;
    }
    this->fBucketList[buckInd] = (NameIdPoolBucketElem_xercesc_2_7__DTDEntityDecl_ *)0x0;
  }
  this->fIdCounter = 0;
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


