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
typedef undefined __unknown__[32];

typedef longdouble __float128;

typedef ushort XMLCh;

typedef struct XMemory XMemory, *PXMemory;

struct XMemory {
    undefined field0_0x0;
};

typedef uchar XMLByte;

typedef struct XMLDeleter XMLDeleter, *PXMLDeleter;

struct XMLDeleter {
    int (** _vptr.XMLDeleter)(...);
};

typedef struct XMLBuffer XMLBuffer, *PXMLBuffer;

typedef struct MemoryManager MemoryManager, *PMemoryManager;

typedef struct XMLBufferFullHandler XMLBufferFullHandler, *PXMLBufferFullHandler;

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

typedef ulong size_t;

typedef struct XMLChar1_0 XMLChar1_0, *PXMLChar1_0;

struct XMLChar1_0 {
    undefined field0_0x0;
};

typedef struct XMLChar1_1 XMLChar1_1, *PXMLChar1_1;

struct XMLChar1_1 {
    undefined field0_0x0;
};

typedef struct XMLString XMLString, *PXMLString;

struct XMLString {
    undefined field0_0x0;
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

typedef struct BaseRefVectorOf<short_unsigned_int> BaseRefVectorOf<short_unsigned_int>, *PBaseRefVectorOf<short_unsigned_int>;

struct BaseRefVectorOf<short_unsigned_int> { // Original name: BaseRefVectorOf<short unsigned int>
};

typedef struct XMLLCPTranscoder XMLLCPTranscoder, *PXMLLCPTranscoder;

struct XMLLCPTranscoder {
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




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


