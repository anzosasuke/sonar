typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong size_t;

typedef struct FastBoard FastBoard, *PFastBoard;

struct FastBoard { // PlaceHolder Structure
};

typedef struct UCTNode UCTNode, *PUCTNode;

struct UCTNode { // PlaceHolder Structure
};

typedef struct KoState KoState, *PKoState;

struct KoState { // PlaceHolder Structure
};

typedef struct FullBoard FullBoard, *PFullBoard;

struct FullBoard { // PlaceHolder Structure
};

typedef struct GameState GameState, *PGameState;

struct GameState { // PlaceHolder Structure
};

typedef struct Time Time, *PTime;

struct Time { // PlaceHolder Structure
};

typedef struct Playout Playout, *PPlayout;

struct Playout { // PlaceHolder Structure
};

typedef struct FastState FastState, *PFastState;

struct FastState { // PlaceHolder Structure
};

typedef struct UCTSearch UCTSearch, *PUCTSearch;

struct UCTSearch { // PlaceHolder Structure
};

typedef struct UCTWorker UCTWorker, *PUCTWorker;

struct UCTWorker { // PlaceHolder Structure
};

typedef struct allocator<int> allocator<int>, *Pallocator<int>;

struct allocator<int> { // PlaceHolder Structure
};

typedef struct _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>> _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>, *P_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>;

struct _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>> { // PlaceHolder Structure
};

typedef struct vector<int,std::allocator<int>> vector<int,std::allocator<int>>, *Pvector<int,std::allocator<int>>;

struct vector<int,std::allocator<int>> { // PlaceHolder Structure
};

typedef struct vector vector, *Pvector;

struct vector { // PlaceHolder Structure
};

typedef struct allocator<KoState> allocator<KoState>, *Pallocator<KoState>;

struct allocator<KoState> { // PlaceHolder Structure
};

typedef struct vector<unsigned_long_long,std::allocator<unsigned_long_long>> vector<unsigned_long_long,std::allocator<unsigned_long_long>>, *Pvector<unsigned_long_long,std::allocator<unsigned_long_long>>;

struct vector<unsigned_long_long,std::allocator<unsigned_long_long>> { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct _Vector_base<int,std::allocator<int>> _Vector_base<int,std::allocator<int>>, *P_Vector_base<int,std::allocator<int>>;

struct _Vector_base<int,std::allocator<int>> { // PlaceHolder Structure
};

typedef struct allocator<unsigned_long_long> allocator<unsigned_long_long>, *Pallocator<unsigned_long_long>;

struct allocator<unsigned_long_long> { // PlaceHolder Structure
};

typedef struct vector<KoState,std::allocator<KoState>> vector<KoState,std::allocator<KoState>>, *Pvector<KoState,std::allocator<KoState>>;

struct vector<KoState,std::allocator<KoState>> { // PlaceHolder Structure
};

typedef struct _Vector_base<KoState,std::allocator<KoState>> _Vector_base<KoState,std::allocator<KoState>>, *P_Vector_base<KoState,std::allocator<KoState>>;

struct _Vector_base<KoState,std::allocator<KoState>> { // PlaceHolder Structure
};

typedef struct _Vector_impl _Vector_impl, *P_Vector_impl;

struct _Vector_impl { // PlaceHolder Structure
};

typedef struct _Vector_impl_data _Vector_impl_data, *P_Vector_impl_data;

struct _Vector_impl_data { // PlaceHolder Structure
};

typedef struct basic_string basic_string, *Pbasic_string;

struct basic_string { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>> basic_string<char,std::char_traits<char>,std::allocator<char>>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>> { // PlaceHolder Structure
};

typedef struct new_allocator<KoState> new_allocator<KoState>, *Pnew_allocator<KoState>;

struct new_allocator<KoState> { // PlaceHolder Structure
};

typedef struct new_allocator new_allocator, *Pnew_allocator;

struct new_allocator { // PlaceHolder Structure
};

typedef struct __normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>> __normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>, *P__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>;

struct __normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>> { // PlaceHolder Structure
};

typedef dword __normal_iterator;

typedef struct new_allocator<unsigned_long_long> new_allocator<unsigned_long_long>, *Pnew_allocator<unsigned_long_long>;

struct new_allocator<unsigned_long_long> { // PlaceHolder Structure
};

typedef struct new_allocator<int> new_allocator<int>, *Pnew_allocator<int>;

struct new_allocator<int> { // PlaceHolder Structure
};

typedef struct __normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>> __normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>>, *P__normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>>;

struct __normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>> { // PlaceHolder Class Structure
};

typedef struct __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>, *P__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>;

struct __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> { // PlaceHolder Class Structure
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




// UCTSearch::UCTSearch(GameState&)

void __thiscall UCTSearch::UCTSearch(UCTSearch *this,GameState *param_1)

{
  int iVar1;
  
  *(GameState **)this = param_1;
  iVar1 = FastState::get_to_move();
  UCTNode::UCTNode((UCTNode *)(this + 8),iVar1,-1);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 500000000;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4d] = (UCTSearch)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x58] = (UCTSearch)0x0;
  return;
}



// UCTSearch::set_runflag(bool*)

void __thiscall UCTSearch::set_runflag(UCTSearch *this,bool *param_1)

{
  *(bool **)(this + 0x50) = param_1;
  this[0x4d] = (UCTSearch)0x1;
  return;
}



// WARNING: Could not reconcile some variable overlaps
// UCTSearch::play_simulation(KoState&, UCTNode*)

undefined8 * UCTSearch::play_simulation(KoState *param_1,UCTNode *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  FastState *in_RCX;
  undefined8 in_RDX;
  float extraout_XMM0_Da;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FastState *local_68;
  undefined8 local_60;
  UCTNode *local_58;
  undefined8 *local_50;
  int local_3c;
  long local_38;
  char local_29;
  UCTNode *local_28;
  undefined4 local_1c;
  
  local_68 = in_RCX;
  local_60 = in_RDX;
  local_58 = param_2;
  local_50 = (undefined8 *)param_1;
  local_1c = FastState::get_to_move();
  local_28 = (UCTNode *)FullBoard::get_hash();
  Playout::Playout((Playout *)local_50);
  uVar6 = TTable::get_TT();
  TTable::sync(uVar6,local_28);
  local_29 = UCTNode::has_children();
  if (local_29 == '\0') {
    iVar4 = UCTNode::get_visits();
    iVar5 = UCTNode::do_extend();
    if (iVar4 <= iVar5) {
      bVar1 = true;
      goto LAB_0010014d;
    }
  }
  bVar1 = false;
LAB_0010014d:
  if (bVar1) {
    Playout::run((FastState *)local_50,SUB81(local_60,0));
  }
  else {
    if ((local_29 == '\0') && (*(int *)(local_58 + 0x40) < 5000000)) {
      iVar4 = UCTNode::create_children(local_68,SUB81(local_60,0));
      *(int *)(local_58 + 0x40) = iVar4 + *(int *)(local_58 + 0x40);
    }
    cVar3 = UCTNode::has_children();
    if (cVar3 == '\x01') {
      local_38 = UCTNode::uct_select_child((int)local_68);
      if (local_38 == 0) {
        Playout::run((FastState *)local_50,SUB81(local_60,0));
      }
      else {
        local_3c = UCTNode::get_move();
        if (local_3c == -1) {
          KoState::play_pass();
          puVar2 = local_50;
          play_simulation((KoState *)&local_e8,local_58);
          *puVar2 = local_e8;
          puVar2[1] = local_e0;
          puVar2[2] = local_d8;
          puVar2[3] = local_d0;
          puVar2[4] = local_c8;
          puVar2[5] = local_c0;
          puVar2[6] = local_b8;
          puVar2[7] = local_b0;
          puVar2[8] = local_a8;
          puVar2[9] = local_a0;
          puVar2[10] = local_98;
          puVar2[0xb] = local_90;
          puVar2[0xc] = local_88;
          puVar2[0xd] = local_80;
          puVar2[0xe] = local_78;
        }
        else {
          KoState::play_move((int)local_60);
          cVar3 = KoState::superko();
          puVar2 = local_50;
          if (cVar3 == '\x01') {
            UCTNode::invalidate();
            Playout::run((FastState *)local_50,(bool)(undefined)local_60);
          }
          else {
            play_simulation((KoState *)&local_e8,local_58);
            *puVar2 = local_e8;
            puVar2[1] = local_e0;
            puVar2[2] = local_d8;
            puVar2[3] = local_d0;
            puVar2[4] = local_c8;
            puVar2[5] = local_c0;
            puVar2[6] = local_b8;
            puVar2[7] = local_b0;
            puVar2[8] = local_a8;
            puVar2[9] = local_a0;
            puVar2[10] = local_98;
            puVar2[0xb] = local_90;
            puVar2[0xc] = local_88;
            puVar2[0xd] = local_80;
            puVar2[0xe] = local_78;
          }
        }
      }
      UCTNode::updateRAVE((Playout *)local_68,(int)local_50);
    }
    else if (*(int *)(local_58 + 0x40) < 5000000) {
      FastState::percentual_area_score();
      Playout::set_final_score(extraout_XMM0_Da);
    }
    else {
      Playout::run((FastState *)local_50,SUB81(local_60,0));
    }
  }
  UCTNode::update((Playout *)local_68,(int)local_50);
  uVar6 = TTable::get_TT();
  TTable::update(uVar6,local_28);
  return local_50;
}



// UCTSearch::dump_stats(GameState&, UCTNode&)

void __thiscall UCTSearch::dump_stats(UCTSearch *this,GameState *param_1,UCTNode *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  basic_string_char_std__char_traits_char__std__allocator_char__ local_4358 [32];
  GameState local_4338 [8512];
  GameState local_21f8 [8512];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_b8 [32];
  GameState local_98 [32];
  GameState local_78 [40];
  long local_50;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  int local_2c;
  
  local_3c = FastState::get_to_move();
  local_40 = 0xffffffff;
  local_44 = 0;
  local_48 = 0.0;
  cVar1 = UCTNode::has_children();
  if (cVar1 == '\x01') {
    UCTNode::sort_children((int)this + 8);
    local_50 = UCTNode::get_first_child();
    cVar1 = UCTNode::first_visit();
    if (cVar1 == '\0') {
      iVar2 = UCTNode::get_winrate((int)local_50);
      local_48 = (float)iVar2;
      local_44 = UCTNode::get_visits();
      local_40 = UCTNode::get_move();
      local_2c = 0;
      local_38 = local_50;
      while ((iVar2 = (int)register0x00000020, local_38 != 0 &&
             (local_2c = local_2c + 1, local_2c < 7))) {
        UCTNode::get_move();
        FastState::move_to_text_abi_cxx11_(iVar2 + -0x4358);
        uVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::c_str
                          ();
        uVar5 = UCTNode::get_ravevisits();
        iVar4 = UCTNode::get_visits();
        if (0 < iVar4) {
          UCTNode::get_raverate();
        }
        iVar4 = UCTNode::get_visits();
        if (iVar4 < 1) {
          pcVar8 = (char *)0x0;
        }
        else {
          iVar4 = UCTNode::get_winrate((int)local_38);
          pcVar8 = (char *)(double)((float)iVar4 / 10.0);
        }
        uVar3 = UCTNode::get_visits();
        uVar6 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::c_str
                          ();
        Utils::myprintf(pcVar8,"%4s -> %7d (U: %4.1f%%) (R: %4.1f%%: %7d) PV: %s ",uVar6,
                        (ulong)uVar3,(ulong)uVar5,uVar7);
        GameState::GameState(local_4338,param_1);
        UCTNode::get_move();
        GameState::play_move(iVar2 + -0x4338);
        get_pv_abi_cxx11_(local_98,(UCTNode *)this);
        pcVar8 = (char *)std::__cxx11::
                         basic_string<char,std::char_traits<char>,std::allocator<char>>::c_str();
        Utils::myprintf(pcVar8);
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                  ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_98);
        Utils::myprintf("\n");
        local_38 = UCTNode::get_sibling();
        _ZN9GameStateD1Ev(local_4338);
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                  (local_4358);
      }
      UCTNode::get_move();
      FastState::move_to_text_abi_cxx11_(iVar2 + -0xb8);
      uVar7 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::c_str();
      iVar2 = UCTNode::get_winrate((int)param_2);
      iVar4 = UCTNode::get_visits();
      if (iVar4 < 1) {
        pcVar8 = (char *)0x0;
      }
      else {
        iVar4 = UCTNode::get_winrate((int)local_50);
        pcVar8 = (char *)(double)((float)iVar4 / 10.0);
      }
      uVar5 = UCTNode::get_visits();
      Utils::myprintf(pcVar8,(double)((float)iVar2 / 10.0),
                      "====================================\n%d visits, score %4.1f%% (from %4.1f%%) PV: "
                      ,(ulong)uVar5,uVar7);
      GameState::GameState(local_21f8,param_1);
      get_pv_abi_cxx11_(local_78,(UCTNode *)this);
      pcVar8 = (char *)std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                       ::c_str();
      Utils::myprintf(pcVar8);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_78);
      Utils::myprintf("\n");
      _ZN9GameStateD1Ev(local_21f8);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                (local_b8);
    }
  }
  return;
}



// UCTSearch::get_best_move(int)

int __thiscall UCTSearch::get_best_move(UCTSearch *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float local_20;
  int local_1c;
  
  iVar3 = *(int *)(*(long *)this + 0x6e8);
  UCTNode::sort_children((int)this + 8);
  UCTNode::get_first_child();
  local_1c = UCTNode::get_move();
  lVar5 = UCTNode::get_first_child();
  if (lVar5 != 0) {
    UCTNode::get_first_child();
    cVar1 = UCTNode::first_visit();
    if (cVar1 != '\0') {
      return local_1c;
    }
  }
  iVar2 = UCTNode::get_first_child();
  iVar2 = UCTNode::get_winrate(iVar2);
  local_20 = (float)iVar2 / 1000.0;
  UCTNode::get_first_child();
  iVar2 = UCTNode::get_visits();
  *(float *)(this + 0x48) = local_20;
  if ((param_1 & 1U) == 0) {
    iVar4 = FastState::get_last_move();
    if ((iVar4 == -1) && (lVar5 = UCTNode::get_pass_child(), lVar5 != 0)) {
      UCTNode::get_pass_child();
      iVar4 = UCTNode::get_visits();
      if (100 < iVar4) {
        iVar4 = UCTNode::get_pass_child();
        iVar4 = UCTNode::get_winrate(iVar4);
        fVar6 = (float)iVar4 / 1000.0;
        if ((0.9 < fVar6) && (local_20 - fVar6 < 0.05)) {
          Utils::myprintf((char *)(double)(fVar6 * 100.0),
                          "Preferring to pass since it\'s %5.2f%% compared to %5.2f%%.\n");
          local_1c = -1;
        }
      }
    }
    if (local_1c == -1) {
      FastState::final_score();
      if (((0.0 < extraout_XMM0_Da) && (iVar3 == 1)) || ((extraout_XMM0_Da < 0.0 && (iVar3 == 0))))
      {
        Utils::myprintf("Passing loses :-(\n");
        lVar5 = UCTNode::get_nopass_child();
        if (lVar5 == 0) {
          Utils::myprintf("No alternative to passing.\n");
        }
        else {
          Utils::myprintf("Avoiding pass because it loses.\n");
          local_1c = UCTNode::get_move();
          cVar1 = UCTNode::first_visit();
          if (cVar1 == '\0') {
            iVar3 = UCTNode::get_winrate((int)lVar5);
            local_20 = (float)iVar3 / 1000.0;
          }
          else {
            local_20 = 1.0;
          }
        }
      }
      else {
        Utils::myprintf((char *)0x0,0,"Passing wins :-)\n");
      }
    }
  }
  else if (local_1c == -1) {
    lVar5 = UCTNode::get_nopass_child();
    if (lVar5 == 0) {
      Utils::myprintf("Pass is the only acceptable move.\n");
    }
    else {
      Utils::myprintf("Preferring not to pass.\n");
      local_1c = UCTNode::get_move();
      cVar1 = UCTNode::first_visit();
      if (cVar1 == '\0') {
        iVar3 = UCTNode::get_winrate((int)lVar5);
        local_20 = (float)iVar3 / 1000.0;
      }
      else {
        local_20 = 1.0;
      }
    }
  }
  if ((local_1c != -1) && ((param_1 & 2U) == 0)) {
    iVar3 = FastBoard::get_boardsize();
    iVar4 = FastBoard::get_boardsize();
    if ((local_20 < 0.15) &&
       ((0x5a < iVar2 && ((iVar4 * iVar3) / 3 < *(int *)(*(long *)this + 0x1f98))))) {
      Utils::myprintf("Score looks bad. Resigning.\n");
      local_1c = -2;
    }
  }
  return local_1c;
}



// UCTSearch::get_pv[abi:cxx11](GameState&, UCTNode&)

GameState * UCTSearch::get_pv_abi_cxx11_(GameState *param_1,UCTNode *param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  GameState local_88 [32];
  basic_string local_68 [32];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  
  cVar1 = UCTNode::has_children();
  if (cVar1 == '\x01') {
    FastState::get_to_move();
    UCTNode::sort_children(in_ECX);
    local_20 = UCTNode::get_first_child();
    iVar2 = UCTNode::get_visits();
    if (iVar2 < 0x10) {
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
    }
    else {
      local_24 = UCTNode::get_move();
      FastState::move_to_text_abi_cxx11_((int)register0x00000020 + -0x48);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
                (local_68);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::append
                ((char *)local_68);
      GameState::play_move(in_EDX);
      get_pv_abi_cxx11_(local_88,param_2);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::append(local_68)
      ;
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
                ((basic_string *)param_1);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_88);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_68);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                (local_48);
    }
  }
  else {
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
  }
  return param_1;
}



// UCTSearch::dump_analysis()

void __thiscall UCTSearch::dump_analysis(UCTSearch *this)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 uVar4;
  char *pcVar5;
  float local_218c;
  GameState local_2188 [32];
  GameState local_2168 [1768];
  undefined4 local_1a80;
  float local_24;
  float local_20;
  undefined4 local_1c;
  
  GameState::GameState(local_2168,*(GameState **)this);
  local_1c = local_1a80;
  get_pv_abi_cxx11_(local_2188,(UCTNode *)this);
  iVar1 = UCTNode::get_winrate((int)this + 8);
  local_218c = (float)iVar1 / 10.0;
  local_24 = 0.0;
  pfVar3 = std::max_float_(&local_24,&local_218c);
  local_218c = *pfVar3;
  local_20 = 100.0;
  pfVar3 = std::min_float_(&local_20,&local_218c);
  local_218c = *pfVar3;
  uVar4 = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::c_str();
  pcVar5 = (char *)(double)local_218c;
  uVar2 = UCTNode::get_visits();
  Utils::myprintf(pcVar5,"Nodes: %d, Win: %4.1f%%, PV: %s\n",(ulong)uVar2,uVar4);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_2188);
  _ZN9GameStateD1Ev(local_2168);
  return;
}



// UCTSearch::is_running()

UCTSearch __thiscall UCTSearch::is_running(UCTSearch *this)

{
  return this[0x4c];
}



// UCTWorker::TEMPNAMEPLACEHOLDERVALUE()

void __thiscall UCTWorker::operator__(UCTWorker *this)

{
  char cVar1;
  KoState local_2198 [8448];
  KoState local_98 [136];
  
  do {
    KoState::KoState(local_2198,*(KoState **)this);
    UCTSearch::play_simulation(local_98,*(UCTNode **)(this + 0x10));
    _ZN7KoStateD1Ev(local_2198);
    cVar1 = UCTSearch::is_running(*(UCTSearch **)(this + 0x10));
  } while (cVar1 != '\0');
  return;
}



// UCTSearch::get_score()

undefined4 __thiscall UCTSearch::get_score(UCTSearch *this)

{
  return *(undefined4 *)(this + 0x48);
}



// UCTSearch::think(int, int)

undefined4 __thiscall UCTSearch::think(UCTSearch *this,int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  KoState local_21b8 [8444];
  Time local_bc [4];
  KoState local_b8 [124];
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  char local_21;
  int local_20;
  int local_1c;
  
  *(int *)(*(long *)this + 0x6e8) = param_1;
  Time::Time(local_bc);
  local_2c = 0;
  if (this[0x58] == (UCTSearch)0x1) {
    local_30 = 500000000;
  }
  else {
    iVar4 = GameState::get_timecontrol();
    local_30 = TimeControl::max_time_for_move(iVar4);
    iVar4 = FastState::get_handicap();
    if (iVar4 == 0) {
      lVar7 = FullBoard::get_ko_hash();
      if (lVar7 == -0x3aab42ef967136cd) {
        return 0x3c;
      }
      lVar7 = FullBoard::get_ko_hash();
      if (lVar7 == 0x16d49b38172bae63) {
        uVar3 = Random::get_Rng();
        iVar4 = Random::randint(uVar3);
        if (iVar4 == 0) {
          return 0x52;
        }
        return 0x51;
      }
      lVar7 = FullBoard::get_ko_hash();
      if (lVar7 == -0x6b3241ddd2b180e1) {
        uVar3 = Random::get_Rng();
        iVar4 = Random::randint(uVar3);
        if (iVar4 == 0) {
          return 0x160;
        }
        if (iVar4 == 1) {
          return 0x175;
        }
        return 0x176;
      }
    }
  }
  local_1c = 0;
  local_20 = 0;
  iVar4 = FastBoard::get_boardsize();
  if (iVar4 == 9) {
    local_1c = 10000;
    local_20 = 2000;
  }
  else {
    local_1c = 4000;
    local_20 = 1000;
  }
  GameState::start_clock((int)*(undefined8 *)this);
  MCOwnerTable::clear();
  Playout::mc_owner(*(FastState **)this,0x40);
  iVar4 = UCTNode::create_children((FastState *)(this + 8),SUB81(*(undefined8 *)this,0));
  *(int *)(this + 0x40) = iVar4 + *(int *)(this + 0x40);
  UCTNode::kill_superkos((KoState *)(this + 8));
  this[0x4c] = (UCTSearch)0x1;
  local_3c = 1;
  local_21 = '\x01';
  local_28 = 0;
  do {
    KoState::KoState(local_21b8,*(KoState **)this);
    play_simulation(local_b8,(UCTNode *)this);
    if (this[0x58] == (UCTSearch)0x1) {
      if (local_28 % local_20 == 0) {
        dump_analysis(this);
      }
      if ((this[0x4d] == (UCTSearch)0x1) && (**(char **)(this + 0x50) == '\0')) {
        local_21 = '\0';
      }
      else {
        local_21 = '\x01';
      }
    }
    else {
      if (local_28 % local_20 == 0) {
        dump_analysis(this);
      }
      iVar4 = UCTNode::get_visits();
      if ((iVar4 < *(int *)(this + 0x44)) &&
         ((this[0x4d] != (UCTSearch)0x1 || (**(char **)(this + 0x50) != '\0')))) {
        local_21 = '\x01';
      }
      else {
        local_21 = '\0';
      }
    }
    if (local_1c < local_28) {
      local_21 = '\0';
    }
    local_28 = local_28 + 1;
    _ZN7KoStateD1Ev(local_21b8);
  } while (local_21 != '\0');
  this[0x4c] = (UCTSearch)0x0;
  cVar2 = UCTNode::has_children();
  if (cVar2 == '\x01') {
    GameState::stop_clock((int)*(undefined8 *)this);
    Utils::myprintf("\n");
    dump_stats(this,*(GameState **)this,(UCTNode *)(this + 8));
    uVar1 = *(uint *)(this + 0x40);
    uVar5 = UCTNode::get_visits();
    Utils::myprintf("\n%d visits, %d nodes\n\n",(ulong)uVar5,(ulong)uVar1);
    uVar6 = get_best_move(this,param_2);
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// UCTSearch::ponder()

void __thiscall UCTSearch::ponder(UCTSearch *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  KoState local_2198 [8448];
  KoState local_98 [124];
  undefined4 local_1c;
  
  MCOwnerTable::clear();
  Playout::mc_owner(*(FastState **)this,0x40);
  this[0x4c] = (UCTSearch)0x1;
  local_1c = SMP::get_num_cpus();
  do {
    KoState::KoState(local_2198,*(KoState **)this);
    play_simulation(local_98,(UCTNode *)this);
    _ZN7KoStateD1Ev(local_2198);
    cVar3 = Utils::input_pending();
    if ((cVar3 == '\x01') || ((this[0x4d] == (UCTSearch)0x1 && (**(char **)(this + 0x50) == '\0'))))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  } while (bVar2);
  this[0x4c] = (UCTSearch)0x0;
  Utils::myprintf("\n");
  dump_stats(this,*(GameState **)this,(UCTNode *)(this + 8));
  uVar1 = *(uint *)(this + 0x40);
  uVar4 = UCTNode::get_visits();
  Utils::myprintf("\n%d visits, %d nodes\n\n",(ulong)uVar4,(ulong)uVar1);
  return;
}



// UCTSearch::set_visit_limit(int)

void __thiscall UCTSearch::set_visit_limit(UCTSearch *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x44) = 500000000;
  }
  else {
    *(int *)(this + 0x44) = param_1;
  }
  return;
}



// UCTSearch::set_analyzing(bool)

void __thiscall UCTSearch::set_analyzing(UCTSearch *this,bool param_1)

{
  this[0x58] = (UCTSearch)param_1;
  return;
}



// UCTSearch::set_quiet(bool)

void __thiscall UCTSearch::set_quiet(UCTSearch *this,bool param_1)

{
  this[0x59] = (UCTSearch)param_1;
  return;
}



// operator new(unsigned long, void*)

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}



// operator delete(void*, void*)

void operator_delete(void *param_1,void *param_2)

{
  return;
}



// FastBoard::FastBoard(FastBoard const&)

void __thiscall FastBoard::FastBoard(FastBoard *this,FastBoard *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1;
  puVar5 = (undefined8 *)this;
  for (lVar2 = 0x6e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  *(undefined8 *)(this + 0x372) = *(undefined8 *)(param_1 + 0x372);
  *(undefined8 *)(this + 0x6dc) = *(undefined8 *)(param_1 + 0x6dc);
  lVar2 = (long)(this + 0x372) - (long)(undefined8 *)((ulong)(this + 0x37a) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)(param_1 + 0x372) - lVar2);
  puVar5 = (undefined8 *)((ulong)(this + 0x37a) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((int)lVar2 + 0x372U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(this + 0x6e4) = *(undefined4 *)(param_1 + 0x6e4);
  *(undefined4 *)(this + 0x6e8) = *(undefined4 *)(param_1 + 0x6e8);
  *(undefined4 *)(this + 0x6ec) = *(undefined4 *)(param_1 + 0x6ec);
  puVar4 = (undefined8 *)(param_1 + 0x6f0);
  puVar5 = (undefined8 *)(this + 0x6f0);
  for (lVar2 = 0xdc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
  *(undefined8 *)(this + 0xdd4) = *(undefined8 *)(param_1 + 0xdd4);
  *(undefined8 *)(this + 0x1140) = *(undefined8 *)(param_1 + 0x1140);
  lVar2 = (long)(this + 0xdd4) - (long)(undefined8 *)((ulong)(this + 0xddc) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)(param_1 + 0xdd4) - lVar2);
  puVar5 = (undefined8 *)((ulong)(this + 0xddc) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((int)lVar2 + 0x374U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x1148);
  puVar5 = (undefined8 *)(this + 0x1148);
  for (lVar2 = 0x6e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
  *(undefined8 *)(this + 0x14bc) = *(undefined8 *)(param_1 + 0x14bc);
  *(undefined8 *)(this + 0x1828) = *(undefined8 *)(param_1 + 0x1828);
  lVar2 = (long)(this + 0x14bc) - (long)(undefined8 *)((ulong)(this + 0x14c4) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)(param_1 + 0x14bc) - lVar2);
  puVar5 = (undefined8 *)((ulong)(this + 0x14c4) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((int)lVar2 + 0x374U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x1830);
  puVar5 = (undefined8 *)(this + 0x1830);
  for (lVar2 = 0x6e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
  *(undefined8 *)(this + 0x1ba4) = *(undefined8 *)(param_1 + 0x1ba4);
  *(undefined8 *)(this + 0x1f0e) = *(undefined8 *)(param_1 + 0x1f0e);
  lVar2 = (long)(this + 0x1ba4) - (long)(undefined8 *)((ulong)(this + 0x1bac) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)(param_1 + 0x1ba4) - lVar2);
  puVar5 = (undefined8 *)((ulong)(this + 0x1bac) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((int)lVar2 + 0x372U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1f20);
  *(undefined8 *)(this + 0x1f18) = *(undefined8 *)(param_1 + 0x1f18);
  *(undefined8 *)(this + 0x1f20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1f30);
  *(undefined8 *)(this + 0x1f28) = *(undefined8 *)(param_1 + 0x1f28);
  *(undefined8 *)(this + 0x1f30) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8000);
  *(undefined8 *)(this + 0x1f38) = *(undefined8 *)(param_1 + 0x1f38);
  *(undefined8 *)(this + 8000) = uVar1;
  *(undefined8 *)(this + 0x1f48) = *(undefined8 *)(param_1 + 0x1f48);
  *(undefined8 *)(this + 0x1f50) = *(undefined8 *)(param_1 + 0x1f50);
  std::vector<int,std::allocator<int>>::vector
            ((vector_int_std__allocator_int__ *)(this + 0x1f58),(vector *)(param_1 + 0x1f58));
  *(undefined4 *)(this + 0x1f70) = *(undefined4 *)(param_1 + 0x1f70);
  return;
}



// FastBoard::~FastBoard()

void __thiscall FastBoard::_FastBoard(FastBoard *this)

{
  std::vector<int,std::allocator<int>>::_vector((vector_int_std__allocator_int__ *)(this + 0x1f58));
  return;
}



// FullBoard::FullBoard(FullBoard const&)

void __thiscall FullBoard::FullBoard(FullBoard *this,FullBoard *param_1)

{
  FastBoard::FastBoard((FastBoard *)this,(FastBoard *)param_1);
  *(undefined8 *)(this + 0x1f78) = *(undefined8 *)(param_1 + 0x1f78);
  *(undefined8 *)(this + 0x1f80) = *(undefined8 *)(param_1 + 0x1f80);
  return;
}



// FullBoard::~FullBoard()

void __thiscall FullBoard::_FullBoard(FullBoard *this)

{
  FastBoard::_FastBoard((FastBoard *)this);
  return;
}



// FastState::FastState(FastState const&)

void __thiscall FastState::FastState(FastState *this,FastState *param_1)

{
  undefined8 uVar1;
  
  FullBoard::FullBoard((FullBoard *)this,(FullBoard *)param_1);
  *(undefined4 *)(this + 0x1f88) = *(undefined4 *)(param_1 + 0x1f88);
  *(undefined4 *)(this + 0x1f8c) = *(undefined4 *)(param_1 + 0x1f8c);
  *(undefined4 *)(this + 0x1f90) = *(undefined4 *)(param_1 + 0x1f90);
  *(undefined4 *)(this + 0x1f94) = *(undefined4 *)(param_1 + 0x1f94);
  *(undefined4 *)(this + 0x1f98) = *(undefined4 *)(param_1 + 0x1f98);
  *(undefined4 *)(this + 0x1f9c) = *(undefined4 *)(param_1 + 0x1f9c);
  *(undefined4 *)(this + 0x1fa0) = *(undefined4 *)(param_1 + 0x1fa0);
  uVar1 = *(undefined8 *)(param_1 + 0x1fac);
  *(undefined8 *)(this + 0x1fa4) = *(undefined8 *)(param_1 + 0x1fa4);
  *(undefined8 *)(this + 0x1fac) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1fbc);
  *(undefined8 *)(this + 0x1fb4) = *(undefined8 *)(param_1 + 0x1fb4);
  *(undefined8 *)(this + 0x1fbc) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1fcc);
  *(undefined8 *)(this + 0x1fc4) = *(undefined8 *)(param_1 + 0x1fc4);
  *(undefined8 *)(this + 0x1fcc) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1fdc);
  *(undefined8 *)(this + 0x1fd4) = *(undefined8 *)(param_1 + 0x1fd4);
  *(undefined8 *)(this + 0x1fdc) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1fec);
  *(undefined8 *)(this + 0x1fe4) = *(undefined8 *)(param_1 + 0x1fe4);
  *(undefined8 *)(this + 0x1fec) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x1ffc);
  *(undefined8 *)(this + 0x1ff4) = *(undefined8 *)(param_1 + 0x1ff4);
  *(undefined8 *)(this + 0x1ffc) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x200c);
  *(undefined8 *)(this + 0x2004) = *(undefined8 *)(param_1 + 0x2004);
  *(undefined8 *)(this + 0x200c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x201c);
  *(undefined8 *)(this + 0x2014) = *(undefined8 *)(param_1 + 0x2014);
  *(undefined8 *)(this + 0x201c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x202c);
  *(undefined8 *)(this + 0x2024) = *(undefined8 *)(param_1 + 0x2024);
  *(undefined8 *)(this + 0x202c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x203c);
  *(undefined8 *)(this + 0x2034) = *(undefined8 *)(param_1 + 0x2034);
  *(undefined8 *)(this + 0x203c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x204c);
  *(undefined8 *)(this + 0x2044) = *(undefined8 *)(param_1 + 0x2044);
  *(undefined8 *)(this + 0x204c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x205c);
  *(undefined8 *)(this + 0x2054) = *(undefined8 *)(param_1 + 0x2054);
  *(undefined8 *)(this + 0x205c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x206c);
  *(undefined8 *)(this + 0x2064) = *(undefined8 *)(param_1 + 0x2064);
  *(undefined8 *)(this + 0x206c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x207c);
  *(undefined8 *)(this + 0x2074) = *(undefined8 *)(param_1 + 0x2074);
  *(undefined8 *)(this + 0x207c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x208c);
  *(undefined8 *)(this + 0x2084) = *(undefined8 *)(param_1 + 0x2084);
  *(undefined8 *)(this + 0x208c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x209c);
  *(undefined8 *)(this + 0x2094) = *(undefined8 *)(param_1 + 0x2094);
  *(undefined8 *)(this + 0x209c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20ac);
  *(undefined8 *)(this + 0x20a4) = *(undefined8 *)(param_1 + 0x20a4);
  *(undefined8 *)(this + 0x20ac) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20bc);
  *(undefined8 *)(this + 0x20b4) = *(undefined8 *)(param_1 + 0x20b4);
  *(undefined8 *)(this + 0x20bc) = uVar1;
  return;
}



// FastState::~FastState()

void __thiscall FastState::_FastState(FastState *this)

{
  FullBoard::_FullBoard((FullBoard *)this);
  return;
}



// KoState::KoState(KoState const&)

void __thiscall KoState::KoState(KoState *this,KoState *param_1)

{
  FastState::FastState((FastState *)this,(FastState *)param_1);
  std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>::vector
            ((vector_unsigned_long_long_std__allocator_unsigned_long_long__ *)(this + 0x20c8),
             (vector *)(param_1 + 0x20c8));
  std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>::vector
            ((vector_unsigned_long_long_std__allocator_unsigned_long_long__ *)(this + 0x20e0),
             (vector *)(param_1 + 0x20e0));
  return;
}



// (LSDA) Type Table
// GameState::GameState(GameState const&)

void __thiscall GameState::GameState(GameState *this,GameState *param_1)

{
  undefined8 uVar1;
  
  KoState::KoState((KoState *)this,(KoState *)param_1);
  std::vector<KoState,std::allocator<KoState>>::vector
            ((vector_KoState_std__allocator_KoState__ *)(this + 0x20f8),(vector *)(param_1 + 0x20f8)
            );
  uVar1 = *(undefined8 *)(param_1 + 0x2118);
  *(undefined8 *)(this + 0x2110) = *(undefined8 *)(param_1 + 0x2110);
  *(undefined8 *)(this + 0x2118) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x2128);
  *(undefined8 *)(this + 0x2120) = *(undefined8 *)(param_1 + 0x2120);
  *(undefined8 *)(this + 0x2128) = uVar1;
  *(undefined8 *)(this + 0x2130) = *(undefined8 *)(param_1 + 0x2130);
  *(undefined4 *)(this + 0x2138) = *(undefined4 *)(param_1 + 0x2138);
  return;
}



// (LSDA) Type Table
// std::vector<int, std::allocator<int>>::vector(std::vector<int, std::allocator<int>> const&)

void __thiscall
std::vector<int,std::allocator<int>>::vector(vector_int_std__allocator_int__ *this,vector *param_1)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  allocator *paVar3;
  ulong uVar4;
  int *piVar5;
  
  paVar3 = (allocator *)
           _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                     ((_Vector_base_int_std__allocator_int__ *)param_1);
  paVar3 = (allocator *)
           __gnu_cxx::__alloc_traits<std::allocator<int>,int>::_S_select_on_copy(paVar3);
  uVar4 = size((vector_int_std__allocator_int__ *)param_1);
  _Vector_base<int,std::allocator<int>>::_Vector_base
            ((_Vector_base_int_std__allocator_int__ *)this,uVar4,paVar3);
  paVar3 = (allocator *)
           _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                     ((_Vector_base_int_std__allocator_int__ *)this);
  piVar5 = *(int **)this;
  _Var1 = end((vector_int_std__allocator_int__ *)param_1);
  _Var2 = begin((vector_int_std__allocator_int__ *)param_1);
  piVar5 = __uninitialized_copy_a___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__int_
                     (_Var2,_Var1,piVar5,paVar3);
  *(int **)(this + 8) = piVar5;
  return;
}



// std::vector<int, std::allocator<int>>::~vector()

void __thiscall std::vector<int,std::allocator<int>>::_vector(vector_int_std__allocator_int__ *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                     ((_Vector_base_int_std__allocator_int__ *)this);
  _Destroy_int__int_(*(int **)this,*(int **)(this + 8),paVar1);
  _Vector_base<int,std::allocator<int>>::__Vector_base
            ((_Vector_base_int_std__allocator_int__ *)this);
  return;
}



// std::vector<unsigned long long, std::allocator<unsigned long long>>::vector(std::vector<unsigned
// long long, std::allocator<unsigned long long>> const&)

void __thiscall
std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>::vector
          (vector_unsigned_long_long_std__allocator_unsigned_long_long__ *this,vector *param_1)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  allocator *paVar3;
  ulong uVar4;
  ulonglong *puVar5;
  
  paVar3 = (allocator *)
           _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_get_Tp_allocator
                     ((_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *)param_1
                     );
  paVar3 = (allocator *)
           __gnu_cxx::__alloc_traits<std::allocator<unsigned_long_long>,unsigned_long_long>::
           _S_select_on_copy(paVar3);
  uVar4 = size((vector_unsigned_long_long_std__allocator_unsigned_long_long__ *)param_1);
  _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_Vector_base
            ((_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *)this,uVar4,
             paVar3);
  paVar3 = (allocator *)
           _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_get_Tp_allocator
                     ((_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *)this);
  puVar5 = *(ulonglong **)this;
  _Var1 = end((vector_unsigned_long_long_std__allocator_unsigned_long_long__ *)param_1);
  _Var2 = begin((vector_unsigned_long_long_std__allocator_unsigned_long_long__ *)param_1);
  puVar5 = __uninitialized_copy_a___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__unsigned_long_long_
                     (_Var2,_Var1,puVar5,paVar3);
  *(ulonglong **)(this + 8) = puVar5;
  return;
}



// std::vector<unsigned long long, std::allocator<unsigned long long>>::~vector()

void __thiscall
std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>::_vector
          (vector_unsigned_long_long_std__allocator_unsigned_long_long__ *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_get_Tp_allocator
                     ((_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *)this);
  _Destroy_unsigned_long_long__unsigned_long_long_
            (*(ulonglong **)this,*(ulonglong **)(this + 8),paVar1);
  _Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::__Vector_base
            ((_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *)this);
  return;
}



// std::vector<KoState, std::allocator<KoState>>::vector(std::vector<KoState,
// std::allocator<KoState>> const&)

void __thiscall
std::vector<KoState,std::allocator<KoState>>::vector
          (vector_KoState_std__allocator_KoState__ *this,vector *param_1)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  allocator *paVar3;
  ulong uVar4;
  KoState *pKVar5;
  
  paVar3 = (allocator *)
           _Vector_base<KoState,std::allocator<KoState>>::_M_get_Tp_allocator
                     ((_Vector_base_KoState_std__allocator_KoState__ *)param_1);
  paVar3 = (allocator *)
           __gnu_cxx::__alloc_traits<std::allocator<KoState>,KoState>::_S_select_on_copy(paVar3);
  uVar4 = size((vector_KoState_std__allocator_KoState__ *)param_1);
  _Vector_base<KoState,std::allocator<KoState>>::_Vector_base
            ((_Vector_base_KoState_std__allocator_KoState__ *)this,uVar4,paVar3);
  paVar3 = (allocator *)
           _Vector_base<KoState,std::allocator<KoState>>::_M_get_Tp_allocator
                     ((_Vector_base_KoState_std__allocator_KoState__ *)this);
  pKVar5 = *(KoState **)this;
  _Var1 = end((vector_KoState_std__allocator_KoState__ *)param_1);
  _Var2 = begin((vector_KoState_std__allocator_KoState__ *)param_1);
  pKVar5 = __uninitialized_copy_a___gnu_cxx____normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState____KoState__KoState_
                     (_Var2,_Var1,pKVar5,paVar3);
  *(KoState **)(this + 8) = pKVar5;
  return;
}



// std::vector<KoState, std::allocator<KoState>>::~vector()

void __thiscall
std::vector<KoState,std::allocator<KoState>>::_vector(vector_KoState_std__allocator_KoState__ *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<KoState,std::allocator<KoState>>::_M_get_Tp_allocator
                     ((_Vector_base_KoState_std__allocator_KoState__ *)this);
  _Destroy_KoState__KoState_(*(KoState **)this,*(KoState **)(this + 8),paVar1);
  _Vector_base<KoState,std::allocator<KoState>>::__Vector_base
            ((_Vector_base_KoState_std__allocator_KoState__ *)this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// float const& std::max<float>(float const&, float const&)

float * std::max_float_(float *param_1,float *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// float const& std::min<float>(float const&, float const&)

float * std::min_float_(float *param_1,float *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}



// std::vector<int, std::allocator<int>>::size() const

long __thiscall std::vector<int,std::allocator<int>>::size(vector_int_std__allocator_int__ *this)

{
  return *(long *)(this + 8) - *(long *)this >> 2;
}



// __gnu_cxx::__alloc_traits<std::allocator<int>, int>::_S_select_on_copy(std::allocator<int>
// const&)

allocator *
__gnu_cxx::__alloc_traits<std::allocator<int>,int>::_S_select_on_copy(allocator *param_1)

{
  return param_1;
}



// std::_Vector_base<int, std::allocator<int>>::_M_get_Tp_allocator() const

_Vector_base_int_std__allocator_int__ * __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
          (_Vector_base_int_std__allocator_int__ *this)

{
  return this;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::~_Vector_impl()

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::__Vector_impl(_Vector_impl *this)

{
  allocator<int>::_allocator((allocator_int_ *)this);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_base(unsigned long, std::allocator<int>
// const&)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_base
          (_Vector_base_int_std__allocator_int__ *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
  _M_create_storage(this,param_1);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::~_Vector_base()

void __thiscall
std::_Vector_base<int,std::allocator<int>>::__Vector_base
          (_Vector_base_int_std__allocator_int__ *this)

{
  _M_deallocate(this,*(int **)this,*(long *)(this + 0x10) - *(long *)this >> 2);
  _Vector_impl::__Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<int, std::allocator<int>>::begin() const

undefined8 __thiscall
std::vector<int,std::allocator<int>>::begin(vector_int_std__allocator_int__ *this)

{
  undefined8 local_10;
  
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)&local_10,
             (int **)this);
  return local_10;
}



// std::vector<int, std::allocator<int>>::end() const

undefined8 __thiscall
std::vector<int,std::allocator<int>>::end(vector_int_std__allocator_int__ *this)

{
  undefined8 local_10;
  
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)&local_10,
             (int **)(this + 8));
  return local_10;
}



// std::_Vector_base<int, std::allocator<int>>::_M_get_Tp_allocator()

_Vector_base_int_std__allocator_int__ * __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
          (_Vector_base_int_std__allocator_int__ *this)

{
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*, std::allocator<int>&)

int * std::
      __uninitialized_copy_a___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__int_
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3,allocator *param_4
                )

{
  int *piVar1;
  
  piVar1 = uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                     (param_1,param_2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&)

void std::_Destroy_int__int_(int *param_1,int *param_2,allocator *param_3)

{
  _Destroy_int__(param_1,param_2);
  return;
}



// std::vector<unsigned long long, std::allocator<unsigned long long>>::size() const

long __thiscall
std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>::size
          (vector_unsigned_long_long_std__allocator_unsigned_long_long__ *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}



// __gnu_cxx::__alloc_traits<std::allocator<unsigned long long>, unsigned long
// long>::_S_select_on_copy(std::allocator<unsigned long long> const&)

allocator *
__gnu_cxx::__alloc_traits<std::allocator<unsigned_long_long>,unsigned_long_long>::_S_select_on_copy
          (allocator *param_1)

{
  return param_1;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long long>>::_M_get_Tp_allocator()
// const

_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ * __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_get_Tp_allocator
          (_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *this)

{
  return this;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long
// long>>::_Vector_impl::~_Vector_impl()

void __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_Vector_impl::
__Vector_impl(_Vector_impl *this)

{
  allocator<unsigned_long_long>::_allocator((allocator_unsigned_long_long_ *)this);
  return;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long long>>::_Vector_base(unsigned
// long, std::allocator<unsigned long long> const&)

void __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_Vector_base
          (_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *this,ulong param_1,
          allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
  _M_create_storage(this,param_1);
  return;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long long>>::~_Vector_base()

void __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::__Vector_base
          (_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *this)

{
  _M_deallocate(this,*(ulonglong **)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::__Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<unsigned long long, std::allocator<unsigned long long>>::begin() const

undefined8 __thiscall
std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>::begin
          (vector_unsigned_long_long_std__allocator_unsigned_long_long__ *this)

{
  undefined8 local_10;
  
  __gnu_cxx::
  __normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>>
  ::__normal_iterator((__normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
                       *)&local_10,(ulonglong **)this);
  return local_10;
}



// std::vector<unsigned long long, std::allocator<unsigned long long>>::end() const

undefined8 __thiscall
std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>::end
          (vector_unsigned_long_long_std__allocator_unsigned_long_long__ *this)

{
  undefined8 local_10;
  
  __gnu_cxx::
  __normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>>
  ::__normal_iterator((__normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
                       *)&local_10,(ulonglong **)(this + 8));
  return local_10;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long long>>::_M_get_Tp_allocator()

_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ * __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_get_Tp_allocator
          (_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *this)

{
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<unsigned long long
// const*, std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long
// long*, unsigned long long>(__gnu_cxx::__normal_iterator<unsigned long long const*,
// std::vector<unsigned long long, std::allocator<unsigned long long>>>,
// __gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>, unsigned long long*, std::allocator<unsigned long long>&)

ulonglong *
std::
__uninitialized_copy_a___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__unsigned_long_long_
          (__normal_iterator param_1,__normal_iterator param_2,ulonglong *param_3,allocator *param_4
          )

{
  ulonglong *puVar1;
  
  puVar1 = uninitialized_copy___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
                     (param_1,param_2,param_3);
  return puVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<unsigned long long*, unsigned long long>(unsigned long long*, unsigned long
// long*, std::allocator<unsigned long long>&)

void std::_Destroy_unsigned_long_long__unsigned_long_long_
               (ulonglong *param_1,ulonglong *param_2,allocator *param_3)

{
  _Destroy_unsigned_long_long__(param_1,param_2);
  return;
}



// std::vector<KoState, std::allocator<KoState>>::size() const

long __thiscall
std::vector<KoState,std::allocator<KoState>>::size(vector_KoState_std__allocator_KoState__ *this)

{
  return (*(long *)(this + 8) - *(long *)this >> 3) * 0x2694fd54afae77df;
}



// __gnu_cxx::__alloc_traits<std::allocator<KoState>,
// KoState>::_S_select_on_copy(std::allocator<KoState> const&)

allocator *
__gnu_cxx::__alloc_traits<std::allocator<KoState>,KoState>::_S_select_on_copy(allocator *param_1)

{
  return param_1;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_M_get_Tp_allocator() const

_Vector_base_KoState_std__allocator_KoState__ * __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_M_get_Tp_allocator
          (_Vector_base_KoState_std__allocator_KoState__ *this)

{
  return this;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_Vector_impl::~_Vector_impl()

void __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_Vector_impl::__Vector_impl(_Vector_impl *this)

{
  allocator<KoState>::_allocator((allocator_KoState_ *)this);
  return;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_Vector_base(unsigned long,
// std::allocator<KoState> const&)

void __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_Vector_base
          (_Vector_base_KoState_std__allocator_KoState__ *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
  _M_create_storage(this,param_1);
  return;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::~_Vector_base()

void __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::__Vector_base
          (_Vector_base_KoState_std__allocator_KoState__ *this)

{
  _M_deallocate(this,*(KoState **)this,
                (*(long *)(this + 0x10) - *(long *)this >> 3) * 0x2694fd54afae77df);
  _Vector_impl::__Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<KoState, std::allocator<KoState>>::begin() const

undefined8 __thiscall
std::vector<KoState,std::allocator<KoState>>::begin(vector_KoState_std__allocator_KoState__ *this)

{
  undefined8 local_10;
  
  __gnu_cxx::__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
  __normal_iterator((__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___
                     *)&local_10,(KoState **)this);
  return local_10;
}



// std::vector<KoState, std::allocator<KoState>>::end() const

undefined8 __thiscall
std::vector<KoState,std::allocator<KoState>>::end(vector_KoState_std__allocator_KoState__ *this)

{
  undefined8 local_10;
  
  __gnu_cxx::__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
  __normal_iterator((__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___
                     *)&local_10,(KoState **)(this + 8));
  return local_10;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_M_get_Tp_allocator()

_Vector_base_KoState_std__allocator_KoState__ * __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_M_get_Tp_allocator
          (_Vector_base_KoState_std__allocator_KoState__ *this)

{
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// KoState* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<KoState const*,
// std::vector<KoState, std::allocator<KoState>>>, KoState*,
// KoState>(__gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>, __gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>, KoState*, std::allocator<KoState>&)

KoState * std::
          __uninitialized_copy_a___gnu_cxx____normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState____KoState__KoState_
                    (__normal_iterator param_1,__normal_iterator param_2,KoState *param_3,
                    allocator *param_4)

{
  KoState *pKVar1;
  
  pKVar1 = uninitialized_copy___gnu_cxx____normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState____KoState__
                     (param_1,param_2,param_3);
  return pKVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<KoState*, KoState>(KoState*, KoState*, std::allocator<KoState>&)

void std::_Destroy_KoState__KoState_(KoState *param_1,KoState *param_2,allocator *param_3)

{
  _Destroy_KoState__(param_1,param_2);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::_Vector_impl(std::allocator<int>
// const&)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<int>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



// std::allocator<int>::~allocator()

void __thiscall std::allocator<int>::_allocator(allocator_int_ *this)

{
  __gnu_cxx::new_allocator<int>::_new_allocator((new_allocator_int_ *)this);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_create_storage(unsigned long)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_create_storage
          (_Vector_base_int_std__allocator_int__ *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = *(long *)this + param_1 * 4;
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_deallocate(int*, unsigned long)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_deallocate
          (_Vector_base_int_std__allocator_int__ *this,int *param_1,ulong param_2)

{
  if (param_1 != (int *)0x0) {
    __gnu_cxx::__alloc_traits<std::allocator<int>,int>::deallocate
              ((allocator *)this,param_1,param_2);
  }
  return;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::__normal_iterator(int const* const&)

void __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this,int **param_1)

{
  *(int **)this = *param_1;
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * std::
      uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __uninitialized_copy<true>::
           __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                     (param_1,param_2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*>(int*, int*)

void std::_Destroy_int__(int *param_1,int *param_2)

{
  _Destroy_aux<true>::__destroy_int__(param_1,param_2);
  return;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long
// long>>::_Vector_impl::_Vector_impl(std::allocator<unsigned long long> const&)

void __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<unsigned_long_long>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



// std::allocator<unsigned long long>::~allocator()

void __thiscall std::allocator<unsigned_long_long>::_allocator(allocator_unsigned_long_long_ *this)

{
  __gnu_cxx::new_allocator<unsigned_long_long>::_new_allocator
            ((new_allocator_unsigned_long_long_ *)this);
  return;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long
// long>>::_M_create_storage(unsigned long)

void __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_create_storage
          (_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = *(long *)this + param_1 * 8;
  return;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long long>>::_M_deallocate(unsigned
// long long*, unsigned long)

void __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_deallocate
          (_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *this,
          ulonglong *param_1,ulong param_2)

{
  if (param_1 != (ulonglong *)0x0) {
    __gnu_cxx::__alloc_traits<std::allocator<unsigned_long_long>,unsigned_long_long>::deallocate
              ((allocator *)this,param_1,param_2);
  }
  return;
}



// __gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>::__normal_iterator(unsigned long long const* const&)

void __thiscall
__gnu_cxx::
__normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>>
::__normal_iterator(__normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
                    *this,ulonglong **param_1)

{
  *(ulonglong **)this = *param_1;
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::uninitialized_copy<__gnu_cxx::__normal_iterator<unsigned long long
// const*, std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long
// long*>(__gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>, __gnu_cxx::__normal_iterator<unsigned long long const*,
// std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long long*)

ulonglong *
std::
uninitialized_copy___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
          (__normal_iterator param_1,__normal_iterator param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  
  puVar1 = __uninitialized_copy<true>::
           __uninit_copy___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
                     (param_1,param_2,param_3);
  return puVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<unsigned long long*>(unsigned long long*, unsigned long long*)

void std::_Destroy_unsigned_long_long__(ulonglong *param_1,ulonglong *param_2)

{
  _Destroy_aux<true>::__destroy_unsigned_long_long__(param_1,param_2);
  return;
}



// std::_Vector_base<KoState,
// std::allocator<KoState>>::_Vector_impl::_Vector_impl(std::allocator<KoState> const&)

void __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<KoState>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



// std::allocator<KoState>::~allocator()

void __thiscall std::allocator<KoState>::_allocator(allocator_KoState_ *this)

{
  __gnu_cxx::new_allocator<KoState>::_new_allocator((new_allocator_KoState_ *)this);
  return;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_M_create_storage(unsigned long)

void __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_M_create_storage
          (_Vector_base_KoState_std__allocator_KoState__ *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = *(long *)this + param_1 * 0x20f8;
  return;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_M_deallocate(KoState*, unsigned long)

void __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_M_deallocate
          (_Vector_base_KoState_std__allocator_KoState__ *this,KoState *param_1,ulong param_2)

{
  if (param_1 != (KoState *)0x0) {
    __gnu_cxx::__alloc_traits<std::allocator<KoState>,KoState>::deallocate
              ((allocator *)this,param_1,param_2);
  }
  return;
}



// __gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>::__normal_iterator(KoState const* const&)

void __thiscall
__gnu_cxx::__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
__normal_iterator(__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___
                  *this,KoState **param_1)

{
  *(KoState **)this = *param_1;
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// KoState* std::uninitialized_copy<__gnu_cxx::__normal_iterator<KoState const*,
// std::vector<KoState, std::allocator<KoState>>>, KoState*>(__gnu_cxx::__normal_iterator<KoState
// const*, std::vector<KoState, std::allocator<KoState>>>, __gnu_cxx::__normal_iterator<KoState
// const*, std::vector<KoState, std::allocator<KoState>>>, KoState*)

KoState * std::
          uninitialized_copy___gnu_cxx____normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState____KoState__
                    (__normal_iterator param_1,__normal_iterator param_2,KoState *param_3)

{
  KoState *pKVar1;
  
  pKVar1 = __uninitialized_copy<false>::
           __uninit_copy___gnu_cxx____normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState____KoState__
                     (param_1,param_2,param_3);
  return pKVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<KoState*>(KoState*, KoState*)

void std::_Destroy_KoState__(KoState *param_1,KoState *param_2)

{
  _Destroy_aux<false>::__destroy_KoState__(param_1,param_2);
  return;
}



// std::allocator<int>::allocator(std::allocator<int> const&)

void std::allocator<int>::allocator(allocator *param_1)

{
  __gnu_cxx::new_allocator<int>::new_allocator((new_allocator *)param_1);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data::_Vector_impl_data()

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



// __gnu_cxx::new_allocator<int>::~new_allocator()

void __thiscall __gnu_cxx::new_allocator<int>::_new_allocator(new_allocator_int_ *this)

{
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_allocate(unsigned long)

undefined8 __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_allocate
          (_Vector_base_int_std__allocator_int__ *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = __gnu_cxx::__alloc_traits<std::allocator<int>,int>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



// __gnu_cxx::__alloc_traits<std::allocator<int>, int>::deallocate(std::allocator<int>&, int*,
// unsigned long)

void __gnu_cxx::__alloc_traits<std::allocator<int>,int>::deallocate
               (allocator *param_1,int *param_2,ulong param_3)

{
  new_allocator<int>::deallocate((int *)param_1,(ulong)param_2);
  return;
}



// int* std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * std::__uninitialized_copy<true>::
      __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                     (param_1,param_2,param_3);
  return piVar1;
}



// void std::_Destroy_aux<true>::__destroy<int*>(int*, int*)

void std::_Destroy_aux<true>::__destroy_int__(int *param_1,int *param_2)

{
  return;
}



// std::allocator<unsigned long long>::allocator(std::allocator<unsigned long long> const&)

void std::allocator<unsigned_long_long>::allocator(allocator *param_1)

{
  __gnu_cxx::new_allocator<unsigned_long_long>::new_allocator((new_allocator *)param_1);
  return;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long
// long>>::_Vector_impl_data::_Vector_impl_data()

void __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_Vector_impl_data::
_Vector_impl_data(_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



// __gnu_cxx::new_allocator<unsigned long long>::~new_allocator()

void __thiscall
__gnu_cxx::new_allocator<unsigned_long_long>::_new_allocator
          (new_allocator_unsigned_long_long_ *this)

{
  return;
}



// std::_Vector_base<unsigned long long, std::allocator<unsigned long long>>::_M_allocate(unsigned
// long)

undefined8 __thiscall
std::_Vector_base<unsigned_long_long,std::allocator<unsigned_long_long>>::_M_allocate
          (_Vector_base_unsigned_long_long_std__allocator_unsigned_long_long__ *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = __gnu_cxx::__alloc_traits<std::allocator<unsigned_long_long>,unsigned_long_long>::
            allocate((allocator *)this,param_1);
  }
  return uVar1;
}



// __gnu_cxx::__alloc_traits<std::allocator<unsigned long long>, unsigned long
// long>::deallocate(std::allocator<unsigned long long>&, unsigned long long*, unsigned long)

void __gnu_cxx::__alloc_traits<std::allocator<unsigned_long_long>,unsigned_long_long>::deallocate
               (allocator *param_1,ulonglong *param_2,ulong param_3)

{
  new_allocator<unsigned_long_long>::deallocate((ulonglong *)param_1,(ulong)param_2);
  return;
}



// unsigned long long*
// std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<unsigned long long
// const*, std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long
// long*>(__gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>, __gnu_cxx::__normal_iterator<unsigned long long const*,
// std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long long*)

ulonglong *
std::__uninitialized_copy<true>::
__uninit_copy___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
          (__normal_iterator param_1,__normal_iterator param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  
  puVar1 = copy___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
                     (param_1,param_2,param_3);
  return puVar1;
}



// void std::_Destroy_aux<true>::__destroy<unsigned long long*>(unsigned long long*, unsigned long
// long*)

void std::_Destroy_aux<true>::__destroy_unsigned_long_long__(ulonglong *param_1,ulonglong *param_2)

{
  return;
}



// std::allocator<KoState>::allocator(std::allocator<KoState> const&)

void std::allocator<KoState>::allocator(allocator *param_1)

{
  __gnu_cxx::new_allocator<KoState>::new_allocator((new_allocator *)param_1);
  return;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_Vector_impl_data::_Vector_impl_data()

void __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



// __gnu_cxx::new_allocator<KoState>::~new_allocator()

void __thiscall __gnu_cxx::new_allocator<KoState>::_new_allocator(new_allocator_KoState_ *this)

{
  return;
}



// std::_Vector_base<KoState, std::allocator<KoState>>::_M_allocate(unsigned long)

undefined8 __thiscall
std::_Vector_base<KoState,std::allocator<KoState>>::_M_allocate
          (_Vector_base_KoState_std__allocator_KoState__ *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = __gnu_cxx::__alloc_traits<std::allocator<KoState>,KoState>::allocate
                      ((allocator *)this,param_1);
  }
  return uVar1;
}



// __gnu_cxx::__alloc_traits<std::allocator<KoState>, KoState>::deallocate(std::allocator<KoState>&,
// KoState*, unsigned long)

void __gnu_cxx::__alloc_traits<std::allocator<KoState>,KoState>::deallocate
               (allocator *param_1,KoState *param_2,ulong param_3)

{
  new_allocator<KoState>::deallocate((KoState *)param_1,(ulong)param_2);
  return;
}



// KoState* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<KoState
// const*, std::vector<KoState, std::allocator<KoState>>>,
// KoState*>(__gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>, __gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>, KoState*)

KoState * std::__uninitialized_copy<false>::
          __uninit_copy___gnu_cxx____normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState____KoState__
                    (__normal_iterator param_1,__normal_iterator param_2,KoState *param_3)

{
  bool bVar1;
  KoState *pKVar2;
  KoState *pKVar3;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_38;
  undefined8 local_30 [2];
  KoState *local_20;
  
  local_30[0] = CONCAT44(in_register_0000003c,param_1);
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_20 = param_3;
  while( true ) {
    bVar1 = __gnu_cxx::operator__((__normal_iterator *)local_30,(__normal_iterator *)&local_38);
    if (bVar1 == false) break;
    pKVar2 = (KoState *)
             __gnu_cxx::
             __normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
             operator_((__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___
                        *)local_30);
    pKVar3 = __addressof_KoState_(local_20);
    _Construct_KoState_KoState_(pKVar3,pKVar2);
    __gnu_cxx::__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
    operator__((__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___ *)
               local_30);
    local_20 = local_20 + 0x20f8;
  }
  return local_20;
}



// void std::_Destroy_aux<false>::__destroy<KoState*>(KoState*, KoState*)

void std::_Destroy_aux<false>::__destroy_KoState__(KoState *param_1,KoState *param_2)

{
  KoState *pKVar1;
  KoState *local_10;
  
  for (local_10 = param_1; local_10 != param_2; local_10 = local_10 + 0x20f8) {
    pKVar1 = __addressof_KoState_(local_10);
    _Destroy_KoState_(pKVar1);
  }
  return;
}



// __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&)

void __gnu_cxx::new_allocator<int>::new_allocator(new_allocator *param_1)

{
  return;
}



// __gnu_cxx::__alloc_traits<std::allocator<int>, int>::allocate(std::allocator<int>&, unsigned
// long)

void __gnu_cxx::__alloc_traits<std::allocator<int>,int>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<int>::allocate((ulong)param_1,(void *)param_2);
  return;
}



// __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long)

void __gnu_cxx::new_allocator<int>::deallocate(int *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>, int*)

int * std::copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  int *piVar3;
  
  _Var1 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                    (param_2);
  _Var2 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                    (param_1);
  piVar3 = __copy_move_a_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                     (_Var2,_Var1,param_3);
  return piVar3;
}



// __gnu_cxx::new_allocator<unsigned long long>::new_allocator(__gnu_cxx::new_allocator<unsigned
// long long> const&)

void __gnu_cxx::new_allocator<unsigned_long_long>::new_allocator(new_allocator *param_1)

{
  return;
}



// __gnu_cxx::__alloc_traits<std::allocator<unsigned long long>, unsigned long
// long>::allocate(std::allocator<unsigned long long>&, unsigned long)

void __gnu_cxx::__alloc_traits<std::allocator<unsigned_long_long>,unsigned_long_long>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<unsigned_long_long>::allocate((ulong)param_1,(void *)param_2);
  return;
}



// __gnu_cxx::new_allocator<unsigned long long>::deallocate(unsigned long long*, unsigned long)

void __gnu_cxx::new_allocator<unsigned_long_long>::deallocate(ulonglong *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::copy<__gnu_cxx::__normal_iterator<unsigned long long const*,
// std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long
// long*>(__gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>, __gnu_cxx::__normal_iterator<unsigned long long const*,
// std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long long*)

ulonglong *
std::
copy___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
          (__normal_iterator param_1,__normal_iterator param_2,ulonglong *param_3)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  ulonglong *puVar3;
  
  _Var1 = __miter_base___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____
                    (param_2);
  _Var2 = __miter_base___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____
                    (param_1);
  puVar3 = __copy_move_a_false___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
                     (_Var2,_Var1,param_3);
  return puVar3;
}



// __gnu_cxx::new_allocator<KoState>::new_allocator(__gnu_cxx::new_allocator<KoState> const&)

void __gnu_cxx::new_allocator<KoState>::new_allocator(new_allocator *param_1)

{
  return;
}



// __gnu_cxx::__alloc_traits<std::allocator<KoState>, KoState>::allocate(std::allocator<KoState>&,
// unsigned long)

void __gnu_cxx::__alloc_traits<std::allocator<KoState>,KoState>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<KoState>::allocate((ulong)param_1,(void *)param_2);
  return;
}



// __gnu_cxx::new_allocator<KoState>::deallocate(KoState*, unsigned long)

void __gnu_cxx::new_allocator<KoState>::deallocate(KoState *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}



// bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<KoState const*,
// std::vector<KoState, std::allocator<KoState>>> const&, __gnu_cxx::__normal_iterator<KoState
// const*, std::vector<KoState, std::allocator<KoState>>> const&)

bool __gnu_cxx::operator__(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
                   base((__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___
                         *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
                   base((__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___
                         *)param_2);
  return lVar1 != *plVar2;
}



// __gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>::TEMPNAMEPLACEHOLDERVALUE()

__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___ * __thiscall
__gnu_cxx::__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::
operator__(__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___ *this)

{
  *(long *)this = *(long *)this + 0x20f8;
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// KoState* std::__addressof<KoState>(KoState&)

KoState * std::__addressof_KoState_(KoState *param_1)

{
  return param_1;
}



// __gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>::TEMPNAMEPLACEHOLDERVALUE() const

undefined8 __thiscall
__gnu_cxx::__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::operator_
          (__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___ *this)

{
  return *(undefined8 *)this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Construct<KoState, KoState>(KoState*, KoState const&)

void std::_Construct_KoState_KoState_(KoState *param_1,KoState *param_2)

{
  KoState *this;
  
  this = (KoState *)operator_new(0x20f8,param_1);
  KoState::KoState(this,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<KoState>(KoState*)

void std::_Destroy_KoState_(KoState *param_1)

{
  _ZN7KoStateD1Ev(param_1);
  return;
}



// __gnu_cxx::new_allocator<int>::allocate(unsigned long, void const*)

void __gnu_cxx::new_allocator<int>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    if ((void *)0x3fffffffffffffff < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>
// std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

__normal_iterator
std::__miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
          (__normal_iterator param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * std::
      __copy_move_a_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  int *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = param_3;
  piVar1 = __niter_base_int__(param_3);
  piVar2 = __niter_base_int_const__std__vector_int_std__allocator_int___
                     ((__normal_iterator)local_28);
  piVar3 = __niter_base_int_const__std__vector_int_std__allocator_int___
                     ((__normal_iterator)local_20);
  piVar1 = __copy_move_a1_false_int_const__int__(piVar3,piVar2,piVar1);
  piVar1 = __niter_wrap_int__(&local_30,piVar1);
  return piVar1;
}



// __gnu_cxx::new_allocator<unsigned long long>::allocate(unsigned long, void const*)

void __gnu_cxx::new_allocator<unsigned_long_long>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    if ((void *)0x1fffffffffffffff < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// __gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>> std::__miter_base<__gnu_cxx::__normal_iterator<unsigned long
// long const*, std::vector<unsigned long long, std::allocator<unsigned long
// long>>>>(__gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>)

__normal_iterator
std::
__miter_base___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____
          (__normal_iterator param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::__copy_move_a<false, __gnu_cxx::__normal_iterator<unsigned long long
// const*, std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long
// long*>(__gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>, __gnu_cxx::__normal_iterator<unsigned long long const*,
// std::vector<unsigned long long, std::allocator<unsigned long long>>>, unsigned long long*)

ulonglong *
std::
__copy_move_a_false___gnu_cxx____normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long____unsigned_long_long__
          (__normal_iterator param_1,__normal_iterator param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  ulonglong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = param_3;
  puVar1 = __niter_base_unsigned_long_long__(param_3);
  puVar2 = __niter_base_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
                     ((__normal_iterator)local_28);
  puVar3 = __niter_base_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
                     ((__normal_iterator)local_20);
  puVar1 = __copy_move_a1_false_unsigned_long_long_const__unsigned_long_long__(puVar3,puVar2,puVar1)
  ;
  puVar1 = __niter_wrap_unsigned_long_long__(&local_30,puVar1);
  return puVar1;
}



// __gnu_cxx::new_allocator<KoState>::allocate(unsigned long, void const*)

void __gnu_cxx::new_allocator<KoState>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)_M_max_size();
  if (pvVar1 < param_2) {
    if ((void *)0x7c3d2618c02e9 < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x20f8);
  return;
}



// __gnu_cxx::__normal_iterator<KoState const*, std::vector<KoState,
// std::allocator<KoState>>>::base() const

__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___ * __thiscall
__gnu_cxx::__normal_iterator<KoState_const*,std::vector<KoState,std::allocator<KoState>>>::base
          (__normal_iterator_KoState_const__std__vector_KoState_std__allocator_KoState___ *this)

{
  return this;
}



// __gnu_cxx::new_allocator<int>::_M_max_size() const

undefined8 __gnu_cxx::new_allocator<int>::_M_max_size(void)

{
  return 0x1fffffffffffffff;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int const* std::__niter_base<int const*, std::vector<int,
// std::allocator<int>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

int * std::__niter_base_int_const__std__vector_int_std__allocator_int___(__normal_iterator param_1)

{
  int **ppiVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  ppiVar1 = (int **)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    base((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)
                         &local_10);
  return *ppiVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__niter_base<int*>(int*)

int * std::__niter_base_int__(int *param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a1<false, int const*, int*>(int const*, int const*, int*)

int * std::__copy_move_a1_false_int_const__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move_a2_false_int_const__int__(param_1,param_2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__niter_wrap<int*>(int* const&, int*)

int * std::__niter_wrap_int__(int **param_1,int *param_2)

{
  return param_2;
}



// __gnu_cxx::new_allocator<unsigned long long>::_M_max_size() const

undefined8 __gnu_cxx::new_allocator<unsigned_long_long>::_M_max_size(void)

{
  return 0xfffffffffffffff;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long const* std::__niter_base<unsigned long long const*, std::vector<unsigned long
// long, std::allocator<unsigned long long>>>(__gnu_cxx::__normal_iterator<unsigned long long
// const*, std::vector<unsigned long long, std::allocator<unsigned long long>>>)

ulonglong *
std::
__niter_base_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
          (__normal_iterator param_1)

{
  ulonglong **ppuVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  ppuVar1 = (ulonglong **)
            __gnu_cxx::
            __normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>>
            ::base((__normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
                    *)&local_10);
  return *ppuVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::__niter_base<unsigned long long*>(unsigned long long*)

ulonglong * std::__niter_base_unsigned_long_long__(ulonglong *param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::__copy_move_a1<false, unsigned long long const*, unsigned long
// long*>(unsigned long long const*, unsigned long long const*, unsigned long long*)

ulonglong *
std::__copy_move_a1_false_unsigned_long_long_const__unsigned_long_long__
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  
  puVar1 = __copy_move_a2_false_unsigned_long_long_const__unsigned_long_long__
                     (param_1,param_2,param_3);
  return puVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::__niter_wrap<unsigned long long*>(unsigned long long* const&, unsigned
// long long*)

ulonglong * std::__niter_wrap_unsigned_long_long__(ulonglong **param_1,ulonglong *param_2)

{
  return param_2;
}



// __gnu_cxx::new_allocator<KoState>::_M_max_size() const

undefined8 __gnu_cxx::new_allocator<KoState>::_M_max_size(void)

{
  return 0x3e1e930c60174;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>::base() const

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this)

{
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a2<false, int const*, int*>(int const*, int const*, int*)

int * std::__copy_move_a2_false_int_const__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                     (param_1,param_2,param_3);
  return piVar1;
}



// __gnu_cxx::__normal_iterator<unsigned long long const*, std::vector<unsigned long long,
// std::allocator<unsigned long long>>>::base() const

__normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
* __thiscall
__gnu_cxx::
__normal_iterator<unsigned_long_long_const*,std::vector<unsigned_long_long,std::allocator<unsigned_long_long>>>
::base(__normal_iterator_unsigned_long_long_const__std__vector_unsigned_long_long_std__allocator_unsigned_long_long___
       *this)

{
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long long* std::__copy_move_a2<false, unsigned long long const*, unsigned long
// long*>(unsigned long long const*, unsigned long long const*, unsigned long long*)

ulonglong *
std::__copy_move_a2_false_unsigned_long_long_const__unsigned_long_long__
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  
  puVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m_unsigned_long_long_
                     (param_1,param_2,param_3);
  return puVar1;
}



// int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*,
// int const*, int*)

int * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                (int *param_1,int *param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return param_3 + lVar1;
}



// unsigned long long* std::__copy_move<false, true,
// std::random_access_iterator_tag>::__copy_m<unsigned long long>(unsigned long long const*,
// unsigned long long const*, unsigned long long*)

ulonglong *
std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m_unsigned_long_long_
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}


