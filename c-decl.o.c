typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[56];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct _obstack_chunk _obstack_chunk, *P_obstack_chunk;

struct _obstack_chunk {
    char * limit;
    struct _obstack_chunk * prev;
    char contents[4];
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

typedef struct obstack obstack, *Pobstack;

struct obstack {
    long chunk_size;
    struct _obstack_chunk * chunk;
    char * object_base;
    char * next_free;
    char * chunk_limit;
    long temp;
    int alignment_mask;
    undefined field7_0x34;
    undefined field8_0x35;
    undefined field9_0x36;
    undefined field10_0x37;
    _obstack_chunk * (* chunkfun)(void *, long);
    void (* freefun)(void *, struct _obstack_chunk *);
    void * extra_arg;
    uint use_extra_arg:1;
    uint maybe_empty_object:1;
    uint alloc_failed:1;
    undefined field17_0x51;
    undefined field18_0x52;
    undefined field19_0x53;
    undefined field20_0x54;
    undefined field21_0x55;
    undefined field22_0x56;
    undefined field23_0x57;
};

typedef enum mode_class {
    MODE_RANDOM=0,
    MODE_CC=1,
    MODE_INT=2,
    MODE_PARTIAL_INT=3,
    MODE_FRACT=4,
    MODE_UFRACT=5,
    MODE_ACCUM=6,
    MODE_UACCUM=7,
    MODE_FLOAT=8,
    MODE_DECIMAL_FLOAT=9,
    MODE_COMPLEX_INT=10,
    MODE_COMPLEX_FLOAT=11,
    MODE_VECTOR_INT=12,
    MODE_VECTOR_FRACT=13,
    MODE_VECTOR_UFRACT=14,
    MODE_VECTOR_ACCUM=15,
    MODE_VECTOR_UACCUM=16,
    MODE_VECTOR_FLOAT=17,
    MAX_MODE_CLASS=18
} mode_class;

typedef enum gt_types_enum {
    gt_ggc_e_14sequence_stack=-128,
    gt_ggc_e_8elt_list=-127,
    gt_ggc_e_17tree_priority_map=-126,
    gt_ggc_e_12tree_int_map=-125,
    gt_ggc_e_8tree_map=-124,
    gt_ggc_e_14lang_tree_node=-123,
    gt_ggc_e_24tree_statement_list_node=-122,
    gt_ggc_e_9var_ann_d=-121,
    gt_ggc_e_9lang_decl=-120,
    gt_ggc_e_9lang_type=-119,
    gt_ggc_e_10die_struct=-118,
    gt_ggc_e_15varray_head_tag=-117,
    gt_ggc_e_12ptr_info_def=-116,
    gt_ggc_e_22VEC_constructor_elt_gc=-115,
    gt_ggc_e_17VEC_alias_pair_gc=-114,
    gt_ggc_e_11VEC_tree_gc=-113,
    gt_ggc_e_12VEC_uchar_gc=-112,
    gt_ggc_e_8function=-111,
    gt_ggc_e_23constant_descriptor_rtx=-110,
    gt_ggc_e_11fixed_value=-109,
    gt_ggc_e_10real_value=-108,
    gt_ggc_e_10VEC_rtx_gc=-107,
    gt_ggc_e_12object_block=-106,
    gt_ggc_e_9reg_attrs=-105,
    gt_ggc_e_9mem_attrs=-104,
    gt_ggc_e_14bitmap_obstack=-103,
    gt_ggc_e_18bitmap_element_def=-102,
    gt_ggc_e_16machine_function=-101,
    gt_ggc_e_17stack_local_entry=-100,
    gt_ggc_e_15basic_block_def=-99,
    gt_ggc_e_8edge_def=-98,
    gt_ggc_e_17gimple_seq_node_d=-97,
    gt_ggc_e_12gimple_seq_d=-96,
    gt_ggc_e_7section=-95,
    gt_ggc_e_18gimple_statement_d=-94,
    gt_ggc_e_9rtvec_def=-93,
    gt_ggc_e_7rtx_def=-92,
    gt_ggc_e_15bitmap_head_def=-91,
    gt_ggc_e_9tree_node=-90,
    gt_ggc_e_6answer=-89,
    gt_ggc_e_9cpp_macro=-88,
    gt_ggc_e_9cpp_token=-87,
    gt_ggc_e_9line_maps=-86,
    gt_e_II17splay_tree_node_s=-85,
    gt_e_SP9tree_node17splay_tree_node_s=-84,
    gt_e_P9tree_nodeP9tree_node17splay_tree_node_s=-83,
    gt_e_IP9tree_node17splay_tree_node_s=-82,
    gt_e_P15interface_tuple4htab=-81,
    gt_e_P16volatilized_type4htab=-80,
    gt_e_P17string_descriptor4htab=-79,
    gt_e_P14type_assertion4htab=-78,
    gt_e_P18treetreehash_entry4htab=-77,
    gt_e_P17module_htab_entry4htab=-76,
    gt_e_P21pending_abstract_type4htab=-75,
    gt_e_P10spec_entry4htab=-74,
    gt_e_P16cxx_int_tree_map4htab=-73,
    gt_e_P17named_label_entry4htab=-72,
    gt_e_P12tree_int_map4htab=-71,
    gt_e_P20lto_symtab_entry_def4htab=-70,
    gt_e_IP9tree_node12splay_tree_s=-69,
    gt_e_P9tree_nodeP9tree_node12splay_tree_s=-68,
    gt_e_P12varpool_node4htab=-67,
    gt_e_P13scev_info_str4htab=-66,
    gt_e_P23constant_descriptor_rtx4htab=-65,
    gt_e_P24constant_descriptor_tree4htab=-64,
    gt_e_P12object_block4htab=-63,
    gt_e_P7section4htab=-62,
    gt_e_P17tree_priority_map4htab=-61,
    gt_e_P8tree_map4htab=-60,
    gt_e_P9type_hash4htab=-59,
    gt_e_P13libfunc_entry4htab=-58,
    gt_e_P23temp_slot_address_entry4htab=-57,
    gt_e_P15throw_stmt_node4htab=-56,
    gt_e_P9reg_attrs4htab=-55,
    gt_e_P9mem_attrs4htab=-54,
    gt_e_P7rtx_def4htab=-53,
    gt_e_SP9tree_node12splay_tree_s=-52,
    gt_e_P10vcall_insn4htab=-51,
    gt_e_P16var_loc_list_def4htab=-50,
    gt_e_P10die_struct4htab=-49,
    gt_e_P15dwarf_file_data4htab=-48,
    gt_e_P20indirect_string_node4htab=-47,
    gt_e_P11cgraph_node4htab=-46,
    gt_e_II12splay_tree_s=-45,
    gt_e_P27cgraph_node_set_element_def4htab=-44,
    gt_e_P11cgraph_edge4htab=-43,
    gt_e_P9loop_exit4htab=-42,
    gt_e_P24types_used_by_vars_entry4htab=-41,
    gt_e_P9tree_node4htab=-40,
    gt_types_enum_last=-39,
    gt_ggc_e_15interface_tuple=0,
    gt_ggc_e_16volatilized_type=1,
    gt_ggc_e_17string_descriptor=2,
    gt_ggc_e_15c_inline_static=3,
    gt_ggc_e_24VEC_c_goto_bindings_p_gc=4,
    gt_ggc_e_15c_goto_bindings=5,
    gt_ggc_e_7c_scope=6,
    gt_ggc_e_9c_binding=7,
    gt_ggc_e_12c_label_vars=8,
    gt_ggc_e_8c_parser=9,
    gt_ggc_e_9imp_entry=10,
    gt_ggc_e_16hashed_attribute=11,
    gt_ggc_e_12hashed_entry=12,
    gt_ggc_e_14type_assertion=13,
    gt_ggc_e_18treetreehash_entry=14,
    gt_ggc_e_5CPool=15,
    gt_ggc_e_3JCF=16,
    gt_ggc_e_17module_htab_entry=17,
    gt_ggc_e_13binding_level=18,
    gt_ggc_e_9opt_stack=19,
    gt_ggc_e_11align_stack=20,
    gt_ggc_e_18VEC_tree_gc_vec_gc=21,
    gt_ggc_e_19VEC_const_char_p_gc=22,
    gt_ggc_e_21pending_abstract_type=23,
    gt_ggc_e_15VEC_tree_int_gc=24,
    gt_ggc_e_9cp_parser=25,
    gt_ggc_e_17cp_parser_context=26,
    gt_ggc_e_8cp_lexer=27,
    gt_ggc_e_10tree_check=28,
    gt_ggc_e_22VEC_deferred_access_gc=29,
    gt_ggc_e_10spec_entry=30,
    gt_ggc_e_16pending_template=31,
    gt_ggc_e_21named_label_use_entry=32,
    gt_ggc_e_28VEC_deferred_access_check_gc=33,
    gt_ggc_e_18sorted_fields_type=34,
    gt_ggc_e_18VEC_tree_pair_s_gc=35,
    gt_ggc_e_17named_label_entry=36,
    gt_ggc_e_32VEC_qualified_typedef_usage_t_gc=37,
    gt_ggc_e_14cp_token_cache=38,
    gt_ggc_e_11saved_scope=39,
    gt_ggc_e_16cxx_int_tree_map=40,
    gt_ggc_e_23VEC_cp_class_binding_gc=41,
    gt_ggc_e_24VEC_cxx_saved_binding_gc=42,
    gt_ggc_e_16cp_binding_level=43,
    gt_ggc_e_11cxx_binding=44,
    gt_ggc_e_15binding_entry_s=45,
    gt_ggc_e_15binding_table_s=46,
    gt_ggc_e_11tinst_level=47,
    gt_ggc_e_14VEC_tinfo_s_gc=48,
    gt_ggc_e_18gnat_binding_level=49,
    gt_ggc_e_9elab_info=50,
    gt_ggc_e_10stmt_group=51,
    gt_ggc_e_16VEC_parm_attr_gc=52,
    gt_ggc_e_11parm_attr_d=53,
    gt_ggc_e_22VEC_ipa_edge_args_t_gc=54,
    gt_ggc_e_20lto_symtab_entry_def=55,
    gt_ggc_e_20ssa_operand_memory_d=56,
    gt_ggc_e_13scev_info_str=57,
    gt_ggc_e_24VEC_mem_addr_template_gc=58,
    gt_ggc_e_13VEC_gimple_gc=59,
    gt_ggc_e_9type_hash=60,
    gt_ggc_e_16string_pool_data=61,
    gt_ggc_e_13libfunc_entry=62,
    gt_ggc_e_23temp_slot_address_entry=63,
    gt_ggc_e_15throw_stmt_node=64,
    gt_ggc_e_21VEC_eh_landing_pad_gc=65,
    gt_ggc_e_16VEC_eh_region_gc=66,
    gt_ggc_e_10eh_catch_d=67,
    gt_ggc_e_16eh_landing_pad_d=68,
    gt_ggc_e_11eh_region_d=69,
    gt_ggc_e_10vcall_insn=70,
    gt_ggc_e_18VEC_vcall_entry_gc=71,
    gt_ggc_e_18VEC_dcall_entry_gc=72,
    gt_ggc_e_16var_loc_list_def=73,
    gt_ggc_e_12var_loc_node=74,
    gt_ggc_e_20VEC_die_arg_entry_gc=75,
    gt_ggc_e_16limbo_die_struct=76,
    gt_ggc_e_20VEC_pubname_entry_gc=77,
    gt_ggc_e_19VEC_dw_attr_node_gc=78,
    gt_ggc_e_18comdat_type_struct=79,
    gt_ggc_e_25dw_ranges_by_label_struct=80,
    gt_ggc_e_16dw_ranges_struct=81,
    gt_ggc_e_28dw_separate_line_info_struct=82,
    gt_ggc_e_19dw_line_info_struct=83,
    gt_ggc_e_25VEC_deferred_locations_gc=84,
    gt_ggc_e_18dw_loc_list_struct=85,
    gt_ggc_e_15dwarf_file_data=86,
    gt_ggc_e_15queued_reg_save=87,
    gt_ggc_e_20indirect_string_node=88,
    gt_ggc_e_19dw_loc_descr_struct=89,
    gt_ggc_e_13dw_fde_struct=90,
    gt_ggc_e_13dw_cfi_struct=91,
    gt_ggc_e_8typeinfo=92,
    gt_ggc_e_22VEC_alias_set_entry_gc=93,
    gt_ggc_e_17alias_set_entry_d=94,
    gt_ggc_e_24constant_descriptor_tree=95,
    gt_ggc_e_15cgraph_asm_node=96,
    gt_ggc_e_12varpool_node=97,
    gt_ggc_e_22VEC_cgraph_node_set_gc=98,
    gt_ggc_e_19cgraph_node_set_def=99,
    gt_ggc_e_27cgraph_node_set_element_def=100,
    gt_ggc_e_22VEC_cgraph_node_ptr_gc=101,
    gt_ggc_e_11cgraph_edge=102,
    gt_ggc_e_24VEC_ipa_replace_map_p_gc=103,
    gt_ggc_e_15ipa_replace_map=104,
    gt_ggc_e_11cgraph_node=105,
    gt_ggc_e_18VEC_basic_block_gc=106,
    gt_ggc_e_14gimple_bb_info=107,
    gt_ggc_e_11rtl_bb_info=108,
    gt_ggc_e_11VEC_edge_gc=109,
    gt_ggc_e_17cselib_val_struct=110,
    gt_ggc_e_12elt_loc_list=111,
    gt_ggc_e_13VEC_loop_p_gc=112,
    gt_ggc_e_4loop=113,
    gt_ggc_e_9loop_exit=114,
    gt_ggc_e_13nb_iter_bound=115,
    gt_ggc_e_24types_used_by_vars_entry=116,
    gt_ggc_e_17language_function=117,
    gt_ggc_e_5loops=118,
    gt_ggc_e_18control_flow_graph=119,
    gt_ggc_e_9eh_status=120,
    gt_ggc_e_20initial_value_struct=121,
    gt_ggc_e_17rtx_constant_pool=122,
    gt_ggc_e_18VEC_temp_slot_p_gc=123,
    gt_ggc_e_9temp_slot=124,
    gt_ggc_e_9gimple_df=125,
    gt_ggc_e_23VEC_call_site_record_gc=126,
    gt_ggc_e_18call_site_record_d=127
} gt_types_enum;

typedef struct fixed_value fixed_value, *Pfixed_value;

typedef struct double_int double_int, *Pdouble_int;

typedef enum machine_mode {
    MAX_MODE_PARTIAL_INT=0,
    MAX_MODE_VECTOR_ACCUM=0,
    MAX_MODE_VECTOR_FRACT=0,
    MAX_MODE_VECTOR_UACCUM=0,
    MAX_MODE_VECTOR_UFRACT=0,
    MIN_MODE_PARTIAL_INT=0,
    MIN_MODE_RANDOM=0,
    MIN_MODE_VECTOR_ACCUM=0,
    MIN_MODE_VECTOR_FRACT=0,
    MIN_MODE_VECTOR_UACCUM=0,
    MIN_MODE_VECTOR_UFRACT=0,
    VOIDmode=0,
    BLKmode=1,
    MAX_MODE_RANDOM=1,
    CCmode=2,
    MIN_MODE_CC=2,
    CCGCmode=3,
    CCGOCmode=4,
    CCNOmode=5,
    CCAmode=6,
    CCCmode=7,
    CCOmode=8,
    CCSmode=9,
    CCZmode=10,
    CCFPmode=11,
    CCFPUmode=12,
    MAX_MODE_CC=12,
    BImode=13,
    MIN_MODE_INT=14,
    QImode=14,
    HImode=15,
    SImode=16,
    DImode=17,
    TImode=18,
    MAX_MODE_INT=19,
    OImode=19,
    MIN_MODE_FRACT=20,
    QQmode=20,
    HQmode=21,
    SQmode=22,
    DQmode=23,
    MAX_MODE_FRACT=24,
    TQmode=24,
    MIN_MODE_UFRACT=25,
    UQQmode=25,
    UHQmode=26,
    USQmode=27,
    UDQmode=28,
    MAX_MODE_UFRACT=29,
    UTQmode=29,
    HAmode=30,
    MIN_MODE_ACCUM=30,
    SAmode=31,
    DAmode=32,
    MAX_MODE_ACCUM=33,
    TAmode=33,
    MIN_MODE_UACCUM=34,
    UHAmode=34,
    USAmode=35,
    UDAmode=36,
    MAX_MODE_UACCUM=37,
    UTAmode=37,
    MIN_MODE_FLOAT=38,
    SFmode=38,
    DFmode=39,
    XFmode=40,
    MAX_MODE_FLOAT=41,
    TFmode=41,
    MIN_MODE_DECIMAL_FLOAT=42,
    SDmode=42,
    DDmode=43,
    MAX_MODE_DECIMAL_FLOAT=44,
    TDmode=44,
    CQImode=45,
    MIN_MODE_COMPLEX_INT=45,
    CHImode=46,
    CSImode=47,
    CDImode=48,
    CTImode=49,
    COImode=50,
    MAX_MODE_COMPLEX_INT=50,
    MIN_MODE_COMPLEX_FLOAT=51,
    SCmode=51,
    DCmode=52,
    XCmode=53,
    MAX_MODE_COMPLEX_FLOAT=54,
    TCmode=54,
    MIN_MODE_VECTOR_INT=55,
    V2QImode=55,
    V4QImode=56,
    V2HImode=57,
    V1SImode=58,
    V8QImode=59,
    V4HImode=60,
    V2SImode=61,
    V1DImode=62,
    V16QImode=63,
    V8HImode=64,
    V4SImode=65,
    V2DImode=66,
    V1TImode=67,
    V32QImode=68,
    V16HImode=69,
    V8SImode=70,
    V4DImode=71,
    V2TImode=72,
    V64QImode=73,
    V32HImode=74,
    V16SImode=75,
    V8DImode=76,
    MAX_MODE_VECTOR_INT=77,
    V4TImode=77,
    MIN_MODE_VECTOR_FLOAT=78,
    V2SFmode=78,
    V4SFmode=79,
    V2DFmode=80,
    V8SFmode=81,
    V4DFmode=82,
    V2TFmode=83,
    V16SFmode=84,
    V8DFmode=85,
    MAX_MODE_VECTOR_FLOAT=86,
    V4TFmode=86,
    MAX_MACHINE_MODE=87,
    NUM_MACHINE_MODES=87
} machine_mode;

struct double_int {
    ulong low;
    long high;
};

struct fixed_value {
    struct double_int data;
    enum machine_mode mode;
    undefined field2_0x14;
    undefined field3_0x15;
    undefined field4_0x16;
    undefined field5_0x17;
};

typedef int (* htab_eq)(void *, void *);

typedef void * (* htab_alloc_with_arg)(void *, size_t, size_t);

typedef struct htab htab, *Phtab;

typedef uint hashval_t;

typedef hashval_t (* htab_hash)(void *);

typedef void (* htab_del)(void *);

typedef void * (* htab_alloc)(size_t, size_t);

typedef void (* htab_free)(void *);

typedef void (* htab_free_with_arg)(void *, void *);

struct htab {
    htab_hash hash_f;
    htab_eq eq_f;
    htab_del del_f;
    void * * entries;
    size_t size;
    size_t n_elements;
    size_t n_deleted;
    uint searches;
    uint collisions;
    htab_alloc alloc_f;
    htab_free free_f;
    void * alloc_arg;
    htab_alloc_with_arg alloc_with_arg_f;
    htab_free_with_arg free_with_arg_f;
    uint size_prime_index;
    undefined field15_0x6c;
    undefined field16_0x6d;
    undefined field17_0x6e;
    undefined field18_0x6f;
};

typedef struct htab * htab_t;

typedef enum insert_option {
    NO_INSERT=0,
    INSERT=1
} insert_option;

typedef struct sequence_stack sequence_stack, *Psequence_stack;

typedef struct rtx_def rtx_def, *Prtx_def;

typedef struct rtx_def * rtx;

typedef union u u, *Pu;

typedef union rtunion_def rtunion_def, *Prtunion_def;

typedef union rtunion_def rtunion;

typedef struct block_symbol block_symbol, *Pblock_symbol;

typedef struct real_value real_value, *Preal_value;

typedef struct rtvec_def rtvec_def, *Prtvec_def;

typedef struct rtvec_def * rtvec;

typedef struct addr_diff_vec_flags addr_diff_vec_flags, *Paddr_diff_vec_flags;

typedef struct cselib_val_struct cselib_val_struct, *Pcselib_val_struct;

typedef struct bitmap_head_def bitmap_head_def, *Pbitmap_head_def;

typedef union tree_node tree_node, *Ptree_node;

typedef union tree_node * tree;

typedef struct basic_block_def basic_block_def, *Pbasic_block_def;

typedef struct mem_attrs mem_attrs, *Pmem_attrs;

typedef struct reg_attrs reg_attrs, *Preg_attrs;

typedef struct constant_descriptor_rtx constant_descriptor_rtx, *Pconstant_descriptor_rtx;

typedef struct object_block object_block, *Pobject_block;

typedef struct bitmap_element_def bitmap_element_def, *Pbitmap_element_def;

typedef struct bitmap_element_def bitmap_element;

typedef struct bitmap_obstack bitmap_obstack, *Pbitmap_obstack;

typedef struct tree_base tree_base, *Ptree_base;

typedef struct tree_common tree_common, *Ptree_common;

typedef struct tree_int_cst tree_int_cst, *Ptree_int_cst;

typedef struct tree_real_cst tree_real_cst, *Ptree_real_cst;

typedef struct tree_fixed_cst tree_fixed_cst, *Ptree_fixed_cst;

typedef struct tree_vector tree_vector, *Ptree_vector;

typedef struct tree_string tree_string, *Ptree_string;

typedef struct tree_complex tree_complex, *Ptree_complex;

typedef struct tree_identifier tree_identifier, *Ptree_identifier;

typedef struct tree_decl_minimal tree_decl_minimal, *Ptree_decl_minimal;

typedef struct tree_decl_common tree_decl_common, *Ptree_decl_common;

typedef struct tree_decl_with_rtl tree_decl_with_rtl, *Ptree_decl_with_rtl;

typedef struct tree_decl_non_common tree_decl_non_common, *Ptree_decl_non_common;

typedef struct tree_parm_decl tree_parm_decl, *Ptree_parm_decl;

typedef struct tree_decl_with_vis tree_decl_with_vis, *Ptree_decl_with_vis;

typedef struct tree_var_decl tree_var_decl, *Ptree_var_decl;

typedef struct tree_field_decl tree_field_decl, *Ptree_field_decl;

typedef struct tree_label_decl tree_label_decl, *Ptree_label_decl;

typedef struct tree_result_decl tree_result_decl, *Ptree_result_decl;

typedef struct tree_const_decl tree_const_decl, *Ptree_const_decl;

typedef struct tree_type_decl tree_type_decl, *Ptree_type_decl;

typedef struct tree_function_decl tree_function_decl, *Ptree_function_decl;

typedef struct tree_type tree_type, *Ptree_type;

typedef struct tree_list tree_list, *Ptree_list;

typedef struct tree_vec tree_vec, *Ptree_vec;

typedef struct tree_exp tree_exp, *Ptree_exp;

typedef struct tree_ssa_name tree_ssa_name, *Ptree_ssa_name;

typedef struct tree_block tree_block, *Ptree_block;

typedef struct tree_binfo tree_binfo, *Ptree_binfo;

typedef struct tree_statement_list tree_statement_list, *Ptree_statement_list;

typedef struct tree_constructor tree_constructor, *Ptree_constructor;

typedef struct tree_omp_clause tree_omp_clause, *Ptree_omp_clause;

typedef struct tree_optimization_option tree_optimization_option, *Ptree_optimization_option;

typedef struct tree_target_option tree_target_option, *Ptree_target_option;

typedef struct VEC_edge_gc VEC_edge_gc, *PVEC_edge_gc;

typedef struct loop loop, *Ploop;

typedef struct et_node et_node, *Pet_node;

typedef union basic_block_il_dependent basic_block_il_dependent, *Pbasic_block_il_dependent;

typedef long gcov_type;

typedef int alias_set_type;

typedef union section section, *Psection;

typedef struct VEC_rtx_gc VEC_rtx_gc, *PVEC_rtx_gc;

typedef ulong BITMAP_WORD;

typedef struct ht_identifier ht_identifier, *Pht_identifier;

typedef uint source_location;

typedef source_location location_t;

typedef struct lang_decl lang_decl, *Plang_decl;

typedef struct var_ann_d var_ann_d, *Pvar_ann_d;

typedef struct function function, *Pfunction;

typedef union tree_type_symtab tree_type_symtab, *Ptree_type_symtab;

typedef struct lang_type lang_type, *Plang_type;

typedef union gimple_statement_d gimple_statement_d, *Pgimple_statement_d;

typedef union gimple_statement_d * gimple;

typedef struct ptr_info_def ptr_info_def, *Pptr_info_def;

typedef struct ssa_use_operand_d ssa_use_operand_d, *Pssa_use_operand_d;

typedef struct VEC_tree_gc VEC_tree_gc, *PVEC_tree_gc;

typedef struct VEC_tree_none VEC_tree_none, *PVEC_tree_none;

typedef struct tree_statement_list_node tree_statement_list_node, *Ptree_statement_list_node;

typedef struct VEC_constructor_elt_gc VEC_constructor_elt_gc, *PVEC_constructor_elt_gc;

typedef enum omp_clause_code {
    OMP_CLAUSE_ERROR=0,
    OMP_CLAUSE_PRIVATE=1,
    OMP_CLAUSE_SHARED=2,
    OMP_CLAUSE_FIRSTPRIVATE=3,
    OMP_CLAUSE_LASTPRIVATE=4,
    OMP_CLAUSE_REDUCTION=5,
    OMP_CLAUSE_COPYIN=6,
    OMP_CLAUSE_COPYPRIVATE=7,
    OMP_CLAUSE_IF=8,
    OMP_CLAUSE_NUM_THREADS=9,
    OMP_CLAUSE_SCHEDULE=10,
    OMP_CLAUSE_NOWAIT=11,
    OMP_CLAUSE_ORDERED=12,
    OMP_CLAUSE_DEFAULT=13,
    OMP_CLAUSE_COLLAPSE=14,
    OMP_CLAUSE_UNTIED=15
} omp_clause_code;

typedef union omp_clause_subcode omp_clause_subcode, *Pomp_clause_subcode;

typedef struct gimple_seq_d gimple_seq_d, *Pgimple_seq_d;

typedef struct gimple_seq_d * gimple_seq;

typedef struct cl_optimization cl_optimization, *Pcl_optimization;

typedef struct cl_target_option cl_target_option, *Pcl_target_option;

typedef struct VEC_edge_base VEC_edge_base, *PVEC_edge_base;

typedef struct gimple_bb_info gimple_bb_info, *Pgimple_bb_info;

typedef struct rtl_bb_info rtl_bb_info, *Prtl_bb_info;

typedef struct section_common section_common, *Psection_common;

typedef struct named_section named_section, *Pnamed_section;

typedef struct unnamed_section unnamed_section, *Punnamed_section;

typedef struct noswitch_section noswitch_section, *Pnoswitch_section;

typedef struct VEC_rtx_base VEC_rtx_base, *PVEC_rtx_base;

typedef struct eh_status eh_status, *Peh_status;

typedef struct control_flow_graph control_flow_graph, *Pcontrol_flow_graph;

typedef struct gimple_df gimple_df, *Pgimple_df;

typedef struct loops loops, *Ploops;

typedef struct machine_function machine_function, *Pmachine_function;

typedef struct language_function language_function, *Planguage_function;

typedef struct die_struct die_struct, *Pdie_struct;

typedef struct sorted_fields_type sorted_fields_type, *Psorted_fields_type;

typedef struct gimple_statement_base gimple_statement_base, *Pgimple_statement_base;

typedef struct gimple_statement_with_ops gimple_statement_with_ops, *Pgimple_statement_with_ops;

typedef struct gimple_statement_with_memory_ops_base gimple_statement_with_memory_ops_base, *Pgimple_statement_with_memory_ops_base;

typedef struct gimple_statement_with_memory_ops gimple_statement_with_memory_ops, *Pgimple_statement_with_memory_ops;

typedef struct gimple_statement_omp gimple_statement_omp, *Pgimple_statement_omp;

typedef struct gimple_statement_bind gimple_statement_bind, *Pgimple_statement_bind;

typedef struct gimple_statement_catch gimple_statement_catch, *Pgimple_statement_catch;

typedef struct gimple_statement_eh_filter gimple_statement_eh_filter, *Pgimple_statement_eh_filter;

typedef struct gimple_statement_eh_mnt gimple_statement_eh_mnt, *Pgimple_statement_eh_mnt;

typedef struct gimple_statement_phi gimple_statement_phi, *Pgimple_statement_phi;

typedef struct gimple_statement_eh_ctrl gimple_statement_eh_ctrl, *Pgimple_statement_eh_ctrl;

typedef struct gimple_statement_try gimple_statement_try, *Pgimple_statement_try;

typedef struct gimple_statement_wce gimple_statement_wce, *Pgimple_statement_wce;

typedef struct gimple_statement_asm gimple_statement_asm, *Pgimple_statement_asm;

typedef struct gimple_statement_omp_critical gimple_statement_omp_critical, *Pgimple_statement_omp_critical;

typedef struct gimple_statement_omp_for gimple_statement_omp_for, *Pgimple_statement_omp_for;

typedef struct gimple_statement_omp_parallel gimple_statement_omp_parallel, *Pgimple_statement_omp_parallel;

typedef struct gimple_statement_omp_task gimple_statement_omp_task, *Pgimple_statement_omp_task;

typedef struct gimple_statement_omp_sections gimple_statement_omp_sections, *Pgimple_statement_omp_sections;

typedef struct gimple_statement_omp_single gimple_statement_omp_single, *Pgimple_statement_omp_single;

typedef struct gimple_statement_omp_continue gimple_statement_omp_continue, *Pgimple_statement_omp_continue;

typedef struct gimple_statement_omp_atomic_load gimple_statement_omp_atomic_load, *Pgimple_statement_omp_atomic_load;

typedef struct gimple_statement_omp_atomic_store gimple_statement_omp_atomic_store, *Pgimple_statement_omp_atomic_store;

typedef union anon_union_8_2_97a3f200_for_loc anon_union_8_2_97a3f200_for_loc, *Panon_union_8_2_97a3f200_for_loc;

typedef struct VEC_tree_base VEC_tree_base, *PVEC_tree_base;

typedef struct VEC_constructor_elt_base VEC_constructor_elt_base, *PVEC_constructor_elt_base;

typedef enum omp_clause_default_kind {
    OMP_CLAUSE_DEFAULT_UNSPECIFIED=0,
    OMP_CLAUSE_DEFAULT_SHARED=1,
    OMP_CLAUSE_DEFAULT_NONE=2,
    OMP_CLAUSE_DEFAULT_PRIVATE=3,
    OMP_CLAUSE_DEFAULT_FIRSTPRIVATE=4
} omp_clause_default_kind;

typedef enum omp_clause_schedule_kind {
    OMP_CLAUSE_SCHEDULE_STATIC=0,
    OMP_CLAUSE_SCHEDULE_DYNAMIC=1,
    OMP_CLAUSE_SCHEDULE_GUIDED=2,
    OMP_CLAUSE_SCHEDULE_AUTO=3,
    OMP_CLAUSE_SCHEDULE_RUNTIME=4
} omp_clause_schedule_kind;

typedef enum tree_code {
    POSTINCREMENT_EXPR=-128,
    VA_ARG_EXPR=-127,
    TRY_CATCH_EXPR=-126,
    TRY_FINALLY_EXPR=-125,
    DECL_EXPR=-124,
    LABEL_EXPR=-123,
    GOTO_EXPR=-122,
    RETURN_EXPR=-121,
    EXIT_EXPR=-120,
    LOOP_EXPR=-119,
    SWITCH_EXPR=-118,
    CASE_LABEL_EXPR=-117,
    ASM_EXPR=-116,
    SSA_NAME=-115,
    CATCH_EXPR=-114,
    EH_FILTER_EXPR=-113,
    SCEV_KNOWN=-112,
    SCEV_NOT_KNOWN=-111,
    POLYNOMIAL_CHREC=-110,
    STATEMENT_LIST=-109,
    ASSERT_EXPR=-108,
    TREE_BINFO=-107,
    WITH_SIZE_EXPR=-106,
    REALIGN_LOAD_EXPR=-105,
    TARGET_MEM_REF=-104,
    OMP_PARALLEL=-103,
    OMP_TASK=-102,
    OMP_FOR=-101,
    OMP_SECTIONS=-100,
    OMP_SINGLE=-99,
    OMP_SECTION=-98,
    OMP_MASTER=-97,
    OMP_ORDERED=-96,
    OMP_CRITICAL=-95,
    OMP_ATOMIC=-94,
    OMP_CLAUSE=-93,
    REDUC_MAX_EXPR=-92,
    REDUC_MIN_EXPR=-91,
    REDUC_PLUS_EXPR=-90,
    DOT_PROD_EXPR=-89,
    WIDEN_SUM_EXPR=-88,
    WIDEN_MULT_EXPR=-87,
    VEC_LSHIFT_EXPR=-86,
    VEC_RSHIFT_EXPR=-85,
    VEC_WIDEN_MULT_HI_EXPR=-84,
    VEC_WIDEN_MULT_LO_EXPR=-83,
    VEC_UNPACK_HI_EXPR=-82,
    VEC_UNPACK_LO_EXPR=-81,
    VEC_UNPACK_FLOAT_HI_EXPR=-80,
    VEC_UNPACK_FLOAT_LO_EXPR=-79,
    VEC_PACK_TRUNC_EXPR=-78,
    VEC_PACK_SAT_EXPR=-77,
    VEC_PACK_FIX_TRUNC_EXPR=-76,
    VEC_EXTRACT_EVEN_EXPR=-75,
    VEC_EXTRACT_ODD_EXPR=-74,
    VEC_INTERLEAVE_HIGH_EXPR=-73,
    VEC_INTERLEAVE_LOW_EXPR=-72,
    PREDICT_EXPR=-71,
    OPTIMIZATION_NODE=-70,
    TARGET_OPTION_NODE=-69,
    LAST_AND_UNUSED_TREE_CODE=-68,
    C_MAYBE_CONST_EXPR=-67,
    EXCESS_PRECISION_EXPR=-66,
    MAX_TREE_CODES=-65,
    ERROR_MARK=0,
    IDENTIFIER_NODE=1,
    TREE_LIST=2,
    TREE_VEC=3,
    BLOCK=4,
    OFFSET_TYPE=5,
    ENUMERAL_TYPE=6,
    BOOLEAN_TYPE=7,
    INTEGER_TYPE=8,
    REAL_TYPE=9,
    POINTER_TYPE=10,
    FIXED_POINT_TYPE=11,
    REFERENCE_TYPE=12,
    COMPLEX_TYPE=13,
    VECTOR_TYPE=14,
    ARRAY_TYPE=15,
    RECORD_TYPE=16,
    UNION_TYPE=17,
    QUAL_UNION_TYPE=18,
    VOID_TYPE=19,
    FUNCTION_TYPE=20,
    METHOD_TYPE=21,
    LANG_TYPE=22,
    INTEGER_CST=23,
    REAL_CST=24,
    FIXED_CST=25,
    COMPLEX_CST=26,
    VECTOR_CST=27,
    STRING_CST=28,
    FUNCTION_DECL=29,
    LABEL_DECL=30,
    FIELD_DECL=31,
    VAR_DECL=32,
    CONST_DECL=33,
    PARM_DECL=34,
    TYPE_DECL=35,
    RESULT_DECL=36,
    DEBUG_EXPR_DECL=37,
    NAMESPACE_DECL=38,
    IMPORTED_DECL=39,
    TRANSLATION_UNIT_DECL=40,
    COMPONENT_REF=41,
    BIT_FIELD_REF=42,
    REALPART_EXPR=43,
    IMAGPART_EXPR=44,
    ARRAY_REF=45,
    ARRAY_RANGE_REF=46,
    INDIRECT_REF=47,
    ALIGN_INDIRECT_REF=48,
    MISALIGNED_INDIRECT_REF=49,
    OBJ_TYPE_REF=50,
    CONSTRUCTOR=51,
    COMPOUND_EXPR=52,
    MODIFY_EXPR=53,
    INIT_EXPR=54,
    TARGET_EXPR=55,
    COND_EXPR=56,
    VEC_COND_EXPR=57,
    BIND_EXPR=58,
    CALL_EXPR=59,
    WITH_CLEANUP_EXPR=60,
    CLEANUP_POINT_EXPR=61,
    PLACEHOLDER_EXPR=62,
    PLUS_EXPR=63,
    MINUS_EXPR=64,
    MULT_EXPR=65,
    POINTER_PLUS_EXPR=66,
    TRUNC_DIV_EXPR=67,
    CEIL_DIV_EXPR=68,
    FLOOR_DIV_EXPR=69,
    ROUND_DIV_EXPR=70,
    TRUNC_MOD_EXPR=71,
    CEIL_MOD_EXPR=72,
    FLOOR_MOD_EXPR=73,
    ROUND_MOD_EXPR=74,
    RDIV_EXPR=75,
    EXACT_DIV_EXPR=76,
    FIX_TRUNC_EXPR=77,
    FLOAT_EXPR=78,
    NEGATE_EXPR=79,
    MIN_EXPR=80,
    MAX_EXPR=81,
    ABS_EXPR=82,
    LSHIFT_EXPR=83,
    RSHIFT_EXPR=84,
    LROTATE_EXPR=85,
    RROTATE_EXPR=86,
    BIT_IOR_EXPR=87,
    BIT_XOR_EXPR=88,
    BIT_AND_EXPR=89,
    BIT_NOT_EXPR=90,
    TRUTH_ANDIF_EXPR=91,
    TRUTH_ORIF_EXPR=92,
    TRUTH_AND_EXPR=93,
    TRUTH_OR_EXPR=94,
    TRUTH_XOR_EXPR=95,
    TRUTH_NOT_EXPR=96,
    LT_EXPR=97,
    LE_EXPR=98,
    GT_EXPR=99,
    GE_EXPR=100,
    EQ_EXPR=101,
    NE_EXPR=102,
    UNORDERED_EXPR=103,
    ORDERED_EXPR=104,
    UNLT_EXPR=105,
    UNLE_EXPR=106,
    UNGT_EXPR=107,
    UNGE_EXPR=108,
    UNEQ_EXPR=109,
    LTGT_EXPR=110,
    RANGE_EXPR=111,
    PAREN_EXPR=112,
    CONVERT_EXPR=113,
    ADDR_SPACE_CONVERT_EXPR=114,
    FIXED_CONVERT_EXPR=115,
    NOP_EXPR=116,
    NON_LVALUE_EXPR=117,
    VIEW_CONVERT_EXPR=118,
    COMPOUND_LITERAL_EXPR=119,
    SAVE_EXPR=120,
    ADDR_EXPR=121,
    FDESC_EXPR=122,
    COMPLEX_EXPR=123,
    CONJ_EXPR=124,
    PREDECREMENT_EXPR=125,
    PREINCREMENT_EXPR=126,
    POSTDECREMENT_EXPR=127
} tree_code;

typedef struct gimple_seq_node_d gimple_seq_node_d, *Pgimple_seq_node_d;

typedef struct gimple_seq_node_d * gimple_seq_node;

typedef struct edge_def edge_def, *Pedge_def;

typedef struct edge_def * edge;

typedef void (* unnamed_section_callback)(void *);

typedef uchar (* noswitch_section_callback)(tree, char *, ulong, ulong);

typedef struct eh_region_d eh_region_d, *Peh_region_d;

typedef struct eh_region_d * eh_region;

typedef struct VEC_eh_region_gc VEC_eh_region_gc, *PVEC_eh_region_gc;

typedef struct VEC_eh_landing_pad_gc VEC_eh_landing_pad_gc, *PVEC_eh_landing_pad_gc;

typedef union eh_status_u eh_status_u, *Peh_status_u;

typedef struct basic_block_def * basic_block;

typedef struct VEC_basic_block_gc VEC_basic_block_gc, *PVEC_basic_block_gc;

typedef enum profile_status_d {
    PROFILE_ABSENT=0,
    PROFILE_GUESSED=1,
    PROFILE_READ=2
} profile_status_d;

typedef enum dom_state {
    DOM_NONE=0,
    DOM_NO_FAST_QUERY=1,
    DOM_OK=2
} dom_state;

typedef struct stack_local_entry stack_local_entry, *Pstack_local_entry;

typedef struct machine_cfa_state machine_cfa_state, *Pmachine_cfa_state;

typedef enum calling_abi {
    SYSV_ABI=0,
    MS_ABI=1
} calling_abi;

typedef struct c_language_function c_language_function, *Pc_language_function;

typedef struct c_switch c_switch, *Pc_switch;

typedef struct c_arg_info c_arg_info, *Pc_arg_info;

typedef struct gimple_statement_with_ops_base gimple_statement_with_ops_base, *Pgimple_statement_with_ops_base;

typedef struct phi_arg_d phi_arg_d, *Pphi_arg_d;

typedef struct gimple_omp_for_iter gimple_omp_for_iter, *Pgimple_omp_for_iter;

typedef struct constructor_elt_d constructor_elt_d, *Pconstructor_elt_d;

typedef struct constructor_elt_d constructor_elt;

typedef union edge_def_insns edge_def_insns, *Pedge_def_insns;

typedef enum eh_region_type {
    ERT_CLEANUP=0,
    ERT_TRY=1,
    ERT_ALLOWED_EXCEPTIONS=2,
    ERT_MUST_NOT_THROW=3
} eh_region_type;

typedef union eh_region_u eh_region_u, *Peh_region_u;

typedef struct eh_landing_pad_d eh_landing_pad_d, *Peh_landing_pad_d;

typedef struct VEC_eh_region_base VEC_eh_region_base, *PVEC_eh_region_base;

typedef struct VEC_eh_landing_pad_base VEC_eh_landing_pad_base, *PVEC_eh_landing_pad_base;

typedef struct VEC_uchar_gc VEC_uchar_gc, *PVEC_uchar_gc;

typedef struct VEC_basic_block_base VEC_basic_block_base, *PVEC_basic_block_base;

typedef struct stmt_tree_s stmt_tree_s, *Pstmt_tree_s;

typedef struct def_optype_d def_optype_d, *Pdef_optype_d;

typedef struct use_optype_d use_optype_d, *Puse_optype_d;

typedef struct eh_region_u_try eh_region_u_try, *Peh_region_u_try;

typedef struct eh_region_u_allowed eh_region_u_allowed, *Peh_region_u_allowed;

typedef struct eh_region_u_must_not_throw eh_region_u_must_not_throw, *Peh_region_u_must_not_throw;

typedef struct eh_landing_pad_d * eh_landing_pad;

typedef struct VEC_uchar_base VEC_uchar_base, *PVEC_uchar_base;

typedef struct eh_catch_d eh_catch_d, *Peh_catch_d;


// WARNING! conflicting data type names: /DWARF/vecprim.h/uchar - /uchar

struct cl_optimization {
    int align_functions;
    int align_jumps;
    int align_labels;
    int align_loops;
    int flag_sched_stalled_insns;
    int flag_sched_stalled_insns_dep;
    uchar optimize;
    uchar optimize_size;
    char flag_argument_noalias;
    char flag_asynchronous_unwind_tables;
    char flag_branch_on_count_reg;
    char flag_branch_probabilities;
    char flag_branch_target_load_optimize;
    char flag_branch_target_load_optimize2;
    char flag_btr_bb_exclusive;
    char flag_caller_saves;
    char flag_no_common;
    char flag_conserve_stack;
    char flag_cprop_registers;
    char flag_crossjumping;
    char flag_cse_follow_jumps;
    char flag_cx_fortran_rules;
    char flag_cx_limited_range;
    char flag_data_sections;
    char flag_dce;
    char flag_defer_pop;
    char flag_delayed_branch;
    char flag_delete_null_pointer_checks;
    char flag_dse;
    char flag_early_inlining;
    char flag_exceptions;
    char flag_expensive_optimizations;
    char flag_finite_math_only;
    char flag_float_store;
    char flag_forward_propagate;
    char flag_gcse;
    char flag_gcse_after_reload;
    char flag_gcse_las;
    char flag_gcse_lm;
    char flag_gcse_sm;
    char flag_graphite_identity;
    char flag_guess_branch_prob;
    char flag_if_conversion;
    char flag_if_conversion2;
    char flag_inline_functions;
    char flag_inline_functions_called_once;
    char flag_inline_small_functions;
    char flag_ipa_cp;
    char flag_ipa_cp_clone;
    char flag_ipa_matrix_reorg;
    char flag_ipa_pta;
    char flag_ipa_pure_const;
    char flag_ipa_reference;
    char flag_ipa_sra;
    char flag_ipa_type_escape;
    char flag_ivopts;
    char flag_jump_tables;
    char flag_loop_block;
    char flag_loop_interchange;
    char flag_loop_parallelize_all;
    char flag_loop_strip_mine;
    char flag_lto_report;
    char flag_ltrans;
    char flag_errno_math;
    char flag_merge_constants;
    char flag_modulo_sched;
    char flag_move_loop_invariants;
    char flag_non_call_exceptions;
    char flag_omit_frame_pointer;
    char flag_regmove;
    char flag_optimize_sibling_calls;
    char flag_pack_struct;
    char flag_peel_loops;
    char flag_no_peephole;
    char flag_peephole2;
    char flag_predictive_commoning;
    char flag_prefetch_loop_arrays;
    char flag_pcc_struct_return;
    char flag_rename_registers;
    char flag_reorder_blocks;
    char flag_reorder_blocks_and_partition;
    char flag_reorder_functions;
    char flag_rerun_cse_after_loop;
    char flag_resched_modulo_sched;
    char flag_rounding_math;
    char flag_sched_critical_path_heuristic;
    char flag_sched_dep_count_heuristic;
    char flag_sched_group_heuristic;
    char flag_schedule_interblock;
    char flag_sched_last_insn_heuristic;
    char flag_sched_pressure;
    char flag_sched_rank_heuristic;
    char flag_schedule_speculative;
    char flag_sched_spec_insn_heuristic;
    char flag_schedule_speculative_load;
    char flag_schedule_speculative_load_dangerous;
    char flag_sched2_use_superblocks;
    char flag_schedule_insns;
    char flag_schedule_insns_after_reload;
    char flag_section_anchors;
    char flag_sel_sched_pipelining;
    char flag_sel_sched_pipelining_outer_loops;
    char flag_sel_sched_reschedule_pipelined;
    char flag_selective_scheduling;
    char flag_selective_scheduling2;
    char flag_signaling_nans;
    char flag_signed_zeros;
    char flag_single_precision_constant;
    char flag_split_ivs_in_unroller;
    char flag_split_wide_types;
    char flag_strict_aliasing;
    char flag_thread_jumps;
    char flag_toplevel_reorder;
    char flag_trapping_math;
    char flag_trapv;
    char flag_tree_builtin_call_dce;
    char flag_tree_ccp;
    char flag_tree_ch;
    char flag_tree_copy_prop;
    char flag_tree_copyrename;
    char flag_tree_cselim;
    char flag_tree_dce;
    char flag_tree_dom;
    char flag_tree_dse;
    char flag_tree_forwprop;
    char flag_tree_fre;
    char flag_tree_loop_distribution;
    char flag_tree_loop_im;
    char flag_tree_loop_ivcanon;
    char flag_tree_loop_linear;
    char flag_tree_loop_optimize;
    char flag_tree_live_range_split;
    char flag_tree_phiprop;
    char flag_tree_pre;
    char flag_tree_pta;
    char flag_tree_reassoc;
    char flag_tree_scev_cprop;
    char flag_tree_sink;
    char flag_tree_slp_vectorize;
    char flag_tree_sra;
    char flag_tree_switch_conversion;
    char flag_tree_ter;
    char flag_tree_vect_loop_version;
    char flag_tree_vectorize;
    char flag_tree_vrp;
    char flag_unit_at_a_time;
    char flag_unroll_all_loops;
    char flag_unroll_loops;
    char flag_unsafe_loop_optimizations;
    char flag_unsafe_math_optimizations;
    char flag_unswitch_loops;
    char flag_unwind_tables;
    char flag_var_tracking;
    char flag_var_tracking_assignments;
    char flag_var_tracking_assignments_toggle;
    char flag_var_tracking_uninit;
    char flag_variable_expansion_in_unroller;
    char flag_vect_cost_model;
    char flag_value_profile_transformations;
    char flag_web;
    char flag_whole_program;
    char flag_wpa;
    char flag_wrapv;
    undefined field163_0xb5;
    undefined field164_0xb6;
    undefined field165_0xb7;
};

struct constant_descriptor_rtx {
};

struct gimple_df {
};

struct gimple_statement_base {
    uint code:8;
    uint no_warning:1;
    uint visited:1;
    uint nontemporal_move:1;
    uint plf:2;
    uint modified:1;
    uint has_volatile_ops:1;
    uint pad:1;
    uint subcode:16;
    uint uid;
    location_t location;
    uint num_ops;
    struct basic_block_def * bb;
    tree block;
};

struct gimple_statement_with_ops_base {
    struct gimple_statement_base gsbase;
    struct def_optype_d * def_ops;
    struct use_optype_d * use_ops;
};

struct gimple_statement_with_memory_ops_base {
    struct gimple_statement_with_ops_base opbase;
    tree vdef;
    tree vuse;
};

struct gimple_statement_with_memory_ops {
    struct gimple_statement_with_memory_ops_base membase;
    tree op[1];
};

struct tree_base {
    uint code:16;
    uint side_effects_flag:1;
    uint constant_flag:1;
    uint addressable_flag:1;
    uint volatile_flag:1;
    uint readonly_flag:1;
    uint unsigned_flag:1;
    uint asm_written_flag:1;
    uint nowarning_flag:1;
    uint used_flag:1;
    uint nothrow_flag:1;
    uint static_flag:1;
    uint public_flag:1;
    uint private_flag:1;
    uint protected_flag:1;
    uint deprecated_flag:1;
    uint saturating_flag:1;
    uint default_def_flag:1;
    uint lang_flag_0:1;
    uint lang_flag_1:1;
    uint lang_flag_2:1;
    uint lang_flag_3:1;
    uint lang_flag_4:1;
    uint lang_flag_5:1;
    uint lang_flag_6:1;
    uint visited:1;
    uint packed_flag:1;
    uint user_align:1;
    uint spare:13;
    uint address_space:8;
};

union omp_clause_subcode {
    enum omp_clause_default_kind default_kind;
    enum omp_clause_schedule_kind schedule_kind;
    enum tree_code reduction_code;
};

struct tree_common {
    struct tree_base base;
    tree chain;
    tree type;
};

struct tree_decl_minimal {
    struct tree_common common;
    location_t locus;
    uint uid;
    tree name;
    tree context;
};

struct tree_decl_common {
    struct tree_decl_minimal common;
    tree size;
    uint mode:8;
    uint nonlocal_flag:1;
    uint virtual_flag:1;
    uint ignored_flag:1;
    uint abstract_flag:1;
    uint artificial_flag:1;
    uint preserve_flag:1;
    uint debug_expr_is_from:1;
    uint lang_flag_0:1;
    uint lang_flag_1:1;
    uint lang_flag_2:1;
    uint lang_flag_3:1;
    uint lang_flag_4:1;
    uint lang_flag_5:1;
    uint lang_flag_6:1;
    uint lang_flag_7:1;
    uint lang_flag_8:1;
    uint decl_flag_0:1;
    uint decl_flag_1:1;
    uint decl_flag_2:1;
    uint gimple_reg_flag:1;
    uint decl_by_reference_flag:1;
    uint decl_restricted_flag:1;
    uint decl_common_unused:2;
    uint off_align:8;
    undefined field27_0x3d;
    undefined field28_0x3e;
    undefined field29_0x3f;
    uint align;
    undefined field31_0x44;
    undefined field32_0x45;
    undefined field33_0x46;
    undefined field34_0x47;
    tree size_unit;
    tree initial;
    tree attributes;
    tree abstract_origin;
    struct lang_decl * lang_specific;
};

struct tree_decl_with_rtl {
    struct tree_decl_common common;
    rtx rtl;
};

struct tree_decl_with_vis {
    struct tree_decl_with_rtl common;
    tree assembler_name;
    tree section_name;
    tree comdat_group;
    uint defer_output:1;
    uint hard_register:1;
    uint thread_local:1;
    uint common_flag:1;
    uint in_text_section:1;
    uint dllimport_flag:1;
    uint shadowed_for_var_p:1;
    uint weak_flag:1;
    uint seen_in_bind_expr:1;
    uint comdat_flag:1;
    uint visibility:2;
    uint visibility_specified:1;
    uint tls_model:3;
    uint init_priority_p:1;
    undefined field18_0x93;
    undefined field19_0x94;
    undefined field20_0x95;
    undefined field21_0x96;
    undefined field22_0x97;
};

union anon_union_8_2_97a3f200_for_loc {
    gimple stmt;
    tree ssa_name;
};

struct ssa_use_operand_d {
    struct ssa_use_operand_d * prev;
    struct ssa_use_operand_d * next;
    union anon_union_8_2_97a3f200_for_loc loc;
    tree * use;
};

struct use_optype_d {
    struct use_optype_d * next;
    struct ssa_use_operand_d use_ptr;
};

struct lang_decl {
    char dummy;
};

struct gimple_statement_eh_ctrl {
    struct gimple_statement_base gsbase;
    int region;
    undefined field2_0x24;
    undefined field3_0x25;
    undefined field4_0x26;
    undefined field5_0x27;
};

struct c_switch {
};

struct tree_ssa_name {
    struct tree_common common;
    tree var;
    gimple def_stmt;
    uint version;
    undefined field4_0x2c;
    undefined field5_0x2d;
    undefined field6_0x2e;
    undefined field7_0x2f;
    struct ptr_info_def * ptr_info;
    struct ssa_use_operand_d imm_uses;
};

struct cl_target_option {
    int ix86_isa_flags_explicit;
    int target_flags_explicit;
    int target_flags;
    int ix86_isa_flags;
    uchar arch;
    uchar arch_specified;
    uchar branch_cost;
    uchar fpmath;
    uchar schedule;
    uchar tune;
    uchar tune_defaulted;
    undefined field11_0x17;
};

struct gimple_statement_wce {
    struct gimple_statement_base gsbase;
    gimple_seq cleanup;
};

struct mem_attrs {
    tree expr;
    rtx offset;
    rtx size;
    alias_set_type alias;
    uint align;
    uchar addrspace;
    undefined field6_0x21;
    undefined field7_0x22;
    undefined field8_0x23;
    undefined field9_0x24;
    undefined field10_0x25;
    undefined field11_0x26;
    undefined field12_0x27;
};

struct gimple_statement_omp {
    struct gimple_statement_base gsbase;
    gimple_seq body;
};

struct gimple_statement_omp_parallel {
    struct gimple_statement_omp omp;
    tree clauses;
    tree child_fn;
    tree data_arg;
};

struct tree_parm_decl {
    struct tree_decl_with_rtl common;
    rtx incoming_rtl;
    struct var_ann_d * ann;
};

struct tree_field_decl {
    struct tree_decl_common common;
    tree offset;
    tree bit_field_type;
    tree qualifier;
    tree bit_offset;
    tree fcontext;
};

struct VEC_tree_base {
    uint num;
    uint alloc;
    tree vec[1];
};

struct gimple_statement_eh_filter {
    struct gimple_statement_base gsbase;
    tree types;
    gimple_seq failure;
};

struct gimple_statement_eh_mnt {
    struct gimple_statement_base gsbase;
    tree fndecl;
};

struct gimple_statement_with_ops {
    struct gimple_statement_with_ops_base opbase;
    tree op[1];
};

struct gimple_statement_omp_single {
    struct gimple_statement_omp omp;
    tree clauses;
};

struct gimple_statement_catch {
    struct gimple_statement_base gsbase;
    tree types;
    gimple_seq handler;
};

struct gimple_statement_try {
    struct gimple_statement_base gsbase;
    gimple_seq eval;
    gimple_seq cleanup;
};

struct gimple_statement_omp_for {
    struct gimple_statement_omp omp;
    tree clauses;
    size_t collapse;
    struct gimple_omp_for_iter * iter;
    gimple_seq pre_body;
};

struct gimple_statement_omp_atomic_store {
    struct gimple_statement_base gsbase;
    tree val;
};

struct phi_arg_d {
    struct ssa_use_operand_d imm_use;
    tree def;
    location_t locus;
    undefined field3_0x2c;
    undefined field4_0x2d;
    undefined field5_0x2e;
    undefined field6_0x2f;
};

struct gimple_statement_phi {
    struct gimple_statement_base gsbase;
    uint capacity;
    uint nargs;
    tree result;
    struct phi_arg_d args[1];
};

struct gimple_statement_asm {
    struct gimple_statement_with_memory_ops_base membase;
    char * string;
    uchar ni;
    uchar no;
    uchar nc;
    uchar nl;
    undefined field6_0x4c;
    undefined field7_0x4d;
    undefined field8_0x4e;
    undefined field9_0x4f;
    tree op[1];
};

struct gimple_statement_omp_sections {
    struct gimple_statement_omp omp;
    tree clauses;
    tree control;
};

struct gimple_statement_omp_continue {
    struct gimple_statement_base gsbase;
    tree control_def;
    tree control_use;
};

struct gimple_statement_omp_critical {
    struct gimple_statement_omp omp;
    tree name;
};

struct gimple_statement_bind {
    struct gimple_statement_base gsbase;
    tree vars;
    tree block;
    gimple_seq body;
};

struct gimple_statement_omp_atomic_load {
    struct gimple_statement_base gsbase;
    tree rhs;
    tree lhs;
};

struct gimple_statement_omp_task {
    struct gimple_statement_omp_parallel par;
    tree copy_fn;
    tree arg_size;
    tree arg_align;
};

union gimple_statement_d {
    struct gimple_statement_base gsbase;
    struct gimple_statement_with_ops gsops;
    struct gimple_statement_with_memory_ops_base gsmembase;
    struct gimple_statement_with_memory_ops gsmem;
    struct gimple_statement_omp omp;
    struct gimple_statement_bind gimple_bind;
    struct gimple_statement_catch gimple_catch;
    struct gimple_statement_eh_filter gimple_eh_filter;
    struct gimple_statement_eh_mnt gimple_eh_mnt;
    struct gimple_statement_phi gimple_phi;
    struct gimple_statement_eh_ctrl gimple_eh_ctrl;
    struct gimple_statement_try gimple_try;
    struct gimple_statement_wce gimple_wce;
    struct gimple_statement_asm gimple_asm;
    struct gimple_statement_omp_critical gimple_omp_critical;
    struct gimple_statement_omp_for gimple_omp_for;
    struct gimple_statement_omp_parallel gimple_omp_parallel;
    struct gimple_statement_omp_task gimple_omp_task;
    struct gimple_statement_omp_sections gimple_omp_sections;
    struct gimple_statement_omp_single gimple_omp_single;
    struct gimple_statement_omp_continue gimple_omp_continue;
    struct gimple_statement_omp_atomic_load gimple_omp_atomic_load;
    struct gimple_statement_omp_atomic_store gimple_omp_atomic_store;
};

struct tree_label_decl {
    struct tree_decl_with_rtl common;
    int label_decl_uid;
    int eh_landing_pad_nr;
};

struct VEC_eh_region_base {
    uint num;
    uint alloc;
    eh_region vec[1];
};

struct VEC_eh_region_gc {
    struct VEC_eh_region_base base;
};

struct VEC_uchar_base {
    uint num;
    uint alloc;
    uchar vec[1];
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
};

struct rtl_bb_info {
    rtx head_;
    rtx end_;
    rtx header;
    rtx footer;
    int visited;
    undefined field5_0x24;
    undefined field6_0x25;
    undefined field7_0x26;
    undefined field8_0x27;
};

struct VEC_tree_none {
    struct VEC_tree_base base;
};

struct tree_binfo {
    struct tree_common common;
    tree offset;
    tree vtable;
    tree virtuals;
    tree vptr_field;
    struct VEC_tree_gc * base_accesses;
    tree inheritance;
    tree vtt_subvtt;
    tree vtt_vptr;
    struct VEC_tree_none base_binfos;
};

struct eh_catch_d {
    struct eh_catch_d * next_catch;
    struct eh_catch_d * prev_catch;
    tree type_list;
    tree filter_list;
    tree label;
};

struct tree_const_decl {
    struct tree_decl_with_rtl common;
};

struct ptr_info_def {
};

struct gimple_seq_node_d {
    gimple stmt;
    struct gimple_seq_node_d * prev;
    struct gimple_seq_node_d * next;
};

struct eh_region_u_try {
    struct eh_catch_d * first_catch;
    struct eh_catch_d * last_catch;
};

struct eh_region_u_allowed {
    tree type_list;
    tree label;
    int filter;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

struct eh_region_u_must_not_throw {
    tree failure_decl;
    location_t failure_loc;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

union eh_region_u {
    struct eh_region_u_try eh_try;
    struct eh_region_u_allowed allowed;
    struct eh_region_u_must_not_throw must_not_throw;
};

struct control_flow_graph {
    basic_block x_entry_block_ptr;
    basic_block x_exit_block_ptr;
    struct VEC_basic_block_gc * x_basic_block_info;
    int x_n_basic_blocks;
    int x_n_edges;
    int x_last_basic_block;
    undefined field6_0x24;
    undefined field7_0x25;
    undefined field8_0x26;
    undefined field9_0x27;
    struct VEC_basic_block_gc * x_label_to_block_map;
    enum profile_status_d x_profile_status;
    enum dom_state x_dom_computed[2];
    uint x_n_bbs_in_dom_tree[2];
    int max_jumptable_ents;
    int last_label_uid;
    undefined field16_0x4c;
    undefined field17_0x4d;
    undefined field18_0x4e;
    undefined field19_0x4f;
};

struct gimple_bb_info {
    gimple_seq seq;
    gimple_seq phi_nodes;
};

struct VEC_basic_block_base {
    uint num;
    uint alloc;
    basic_block vec[1];
};

struct tree_var_decl {
    struct tree_decl_with_vis common;
    struct var_ann_d * ann;
};

struct VEC_basic_block_gc {
    struct VEC_basic_block_base base;
};

struct VEC_edge_base {
    uint num;
    uint alloc;
    edge vec[1];
};

struct machine_cfa_state {
    rtx reg;
    long offset;
};

struct addr_diff_vec_flags {
    uint min_align:8;
    uint base_after_vec:1;
    uint min_after_vec:1;
    uint max_after_vec:1;
    uint min_after_base:1;
    uint max_after_base:1;
    uint offset_unsigned:1;
    uint scale:8;
    undefined field8_0x3;
};

struct tree_exp {
    struct tree_common common;
    location_t locus;
    undefined field2_0x1c;
    undefined field3_0x1d;
    undefined field4_0x1e;
    undefined field5_0x1f;
    tree block;
    tree operands[1];
};

struct tree_decl_non_common {
    struct tree_decl_with_vis common;
    tree saved_tree;
    tree arguments;
    tree result;
    tree vindex;
};

struct tree_function_decl {
    struct tree_decl_non_common common;
    struct function * f;
    tree personality;
    tree function_specific_target;
    tree function_specific_optimization;
    uint function_code:11;
    uint built_in_class:2;
    uint static_ctor_flag:1;
    uint static_dtor_flag:1;
    uint uninlinable:1;
    uint possibly_inlined:1;
    uint novops_flag:1;
    uint returns_twice_flag:1;
    uint malloc_flag:1;
    uint operator_new_flag:1;
    uint declared_inline_flag:1;
    uint regdecl_flag:1;
    uint no_inline_warning_flag:1;
    uint no_instrument_function_entry_exit:1;
    uint no_limit_stack:1;
    uint disregard_inline_limits:1;
    uint pure_flag:1;
    uint looping_const_or_pure_flag:1;
    undefined field23_0xdc;
    undefined field24_0xdd;
    undefined field25_0xde;
    undefined field26_0xdf;
};

struct VEC_uchar_gc {
    struct VEC_uchar_base base;
};

struct stmt_tree_s {
    tree x_cur_stmt_list;
    int stmts_are_full_exprs_p;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct c_language_function {
    struct stmt_tree_s x_stmt_tree;
};

struct real_value {
    uint cl:2;
    uint decimal:1;
    uint sign:1;
    uint signalling:1;
    uint canonical:1;
    uint uexp:26;
    undefined field6_0x4;
    undefined field7_0x5;
    undefined field8_0x6;
    undefined field9_0x7;
    ulong sig[3];
};

struct var_ann_d {
};

union tree_type_symtab {
    int address;
    char * pointer;
    struct die_struct * die;
};

struct section_common {
    uint flags;
};

struct tree_optimization_option {
    struct tree_common common;
    struct cl_optimization opts;
};

struct loops {
};

union basic_block_il_dependent {
    struct gimple_bb_info * gimple;
    struct rtl_bb_info * rtl;
};

struct named_section {
    struct section_common common;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    char * name;
    tree decl;
};

union rtunion_def {
    int rt_int;
    uint rt_uint;
    char * rt_str;
    rtx rt_rtx;
    rtvec rt_rtvec;
    enum machine_mode rt_type;
    struct addr_diff_vec_flags rt_addr_diff_vec_flags;
    struct cselib_val_struct * rt_cselib;
    struct bitmap_head_def * rt_bit;
    tree rt_tree;
    struct basic_block_def * rt_bb;
    struct mem_attrs * rt_mem;
    struct reg_attrs * rt_reg;
    struct constant_descriptor_rtx * rt_constant;
};

struct block_symbol {
    rtunion fld[3];
    struct object_block * block;
    long offset;
};

union u {
    rtunion fld[1];
    long hwint[1];
    struct block_symbol block_sym;
    struct real_value rv;
    struct fixed_value fv;
};

struct tree_statement_list {
    struct tree_common common;
    struct tree_statement_list_node * head;
    struct tree_statement_list_node * tail;
};

struct tree_type_decl {
    struct tree_decl_non_common common;
};

struct sorted_fields_type {
    int len;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    tree elts[1];
};

struct tree_list {
    struct tree_common common;
    tree purpose;
    tree value;
};

struct stack_local_entry {
};

struct tree_target_option {
    struct tree_common common;
    struct cl_target_option opts;
};

union edge_def_insns {
    gimple_seq g;
    rtx r;
};

struct c_arg_info {
    tree parms;
    tree tags;
    tree types;
    tree others;
    tree pending_sizes;
    uint had_vla_unspec:1;
    undefined field6_0x29;
    undefined field7_0x2a;
    undefined field8_0x2b;
    undefined field9_0x2c;
    undefined field10_0x2d;
    undefined field11_0x2e;
    undefined field12_0x2f;
};

struct tree_int_cst {
    struct tree_common common;
    struct double_int int_cst;
};

struct constructor_elt_d {
    tree index;
    tree value;
};

struct eh_landing_pad_d {
    struct eh_landing_pad_d * next_lp;
    struct eh_region_d * region;
    tree post_landing_pad;
    rtx landing_pad;
    int index;
    undefined field5_0x24;
    undefined field6_0x25;
    undefined field7_0x26;
    undefined field8_0x27;
};

struct tree_complex {
    struct tree_common common;
    tree real;
    tree imag;
};

struct language_function {
    struct c_language_function base;
    tree x_break_label;
    tree x_cont_label;
    struct c_switch * x_switch_stack;
    struct c_arg_info * arg_info;
    int returns_value;
    int returns_null;
    int returns_abnormally;
    int warn_about_return_type;
};

struct tree_result_decl {
    struct tree_decl_with_rtl common;
    struct var_ann_d * ann;
};

struct noswitch_section {
    struct section_common common;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    noswitch_section_callback callback;
};

struct unnamed_section {
    struct section_common common;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    unnamed_section_callback callback;
    void * data;
    union section * next;
};

union section {
    struct section_common common;
    struct named_section named;
    struct unnamed_section unnamed;
    struct noswitch_section noswitch;
};

union eh_status_u {
    struct VEC_tree_gc * arm_eabi;
    struct VEC_uchar_gc * other;
};

struct tree_block {
    struct tree_common common;
    uint abstract_flag:1;
    uint block_num:31;
    location_t locus;
    tree vars;
    struct VEC_tree_gc * nonlocalized_vars;
    tree subblocks;
    tree supercontext;
    tree abstract_origin;
    tree fragment_origin;
    tree fragment_chain;
};

struct VEC_constructor_elt_base {
    uint num;
    uint alloc;
    constructor_elt vec[1];
};

struct VEC_constructor_elt_gc {
    struct VEC_constructor_elt_base base;
};

struct loop {
};

struct function {
    struct eh_status * eh;
    struct control_flow_graph * cfg;
    struct gimple_seq_d * gimple_body;
    struct gimple_df * gimple_df;
    struct loops * x_current_loops;
    htab_t value_histograms;
    tree decl;
    tree static_chain_decl;
    tree nonlocal_goto_save_area;
    tree local_decls;
    struct machine_function * machine;
    struct language_function * language;
    htab_t used_types_hash;
    int last_stmt_uid;
    int funcdef_no;
    location_t function_start_locus;
    location_t function_end_locus;
    uint curr_properties;
    uint last_verified;
    char * cannot_be_copied_reason;
    uint va_list_gpr_size:8;
    uint va_list_fpr_size:8;
    uint function_frequency:2;
    uint calls_setjmp:1;
    uint calls_alloca:1;
    uint has_nonlocal_label:1;
    uint cannot_be_copied_set:1;
    uint stdarg:1;
    uint dont_save_pending_sizes_p:1;
    uint after_inlining:1;
    uint always_inline_functions_inlined:1;
    uint returns_struct:1;
    uint returns_pcc_struct:1;
    uint after_tree_profile:1;
    uint has_local_explicit_reg_vars:1;
    uint is_thunk:1;
    undefined field36_0x8c;
    undefined field37_0x8d;
    undefined field38_0x8e;
    undefined field39_0x8f;
};

struct object_block {
    union section * sect;
    uint alignment;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    long size;
    struct VEC_rtx_gc * objects;
    struct VEC_rtx_gc * anchors;
};

struct bitmap_head_def {
    bitmap_element * first;
    bitmap_element * current;
    uint indx;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
    struct bitmap_obstack * obstack;
};

struct ht_identifier {
    uchar * str;
    uint len;
    uint hash_value;
};

struct tree_string {
    struct tree_common common;
    int length;
    char str[1];
    undefined field3_0x1d;
    undefined field4_0x1e;
    undefined field5_0x1f;
};

struct tree_fixed_cst {
    struct tree_common common;
    struct fixed_value * fixed_cst_ptr;
};

struct et_node {
};

struct die_struct {
};

struct reg_attrs {
    tree decl;
    long offset;
};

struct VEC_eh_landing_pad_base {
    uint num;
    uint alloc;
    eh_landing_pad vec[1];
};

struct tree_vector {
    struct tree_common common;
    tree elements;
};

struct gimple_seq_d {
    gimple_seq_node first;
    gimple_seq_node last;
    gimple_seq next_free;
};

struct bitmap_element_def {
    struct bitmap_element_def * next;
    struct bitmap_element_def * prev;
    uint indx;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
    BITMAP_WORD bits[2];
};

struct tree_identifier {
    struct tree_common common;
    struct ht_identifier id;
};

struct tree_real_cst {
    struct tree_common common;
    struct real_value * real_cst_ptr;
};

struct lang_type {
    struct sorted_fields_type * s;
    tree enum_min;
    tree enum_max;
    tree objc_info;
};

struct eh_status {
    eh_region region_tree;
    struct VEC_eh_region_gc * region_array;
    struct VEC_eh_landing_pad_gc * lp_array;
    htab_t throw_stmt_table;
    struct VEC_tree_gc * ttype_data;
    union eh_status_u ehspec_data;
};

struct eh_region_d {
    struct eh_region_d * outer;
    struct eh_region_d * inner;
    struct eh_region_d * next_peer;
    int index;
    enum eh_region_type type;
    union eh_region_u u;
    struct eh_landing_pad_d * landing_pads;
    rtx exc_ptr_reg;
    rtx filter_reg;
    uchar use_cxa_end_cleanup;
    undefined field10_0x51;
    undefined field11_0x52;
    undefined field12_0x53;
    undefined field13_0x54;
    undefined field14_0x55;
    undefined field15_0x56;
    undefined field16_0x57;
};

struct VEC_edge_gc {
    struct VEC_edge_base base;
};

struct sequence_stack {
    rtx first;
    rtx last;
    struct sequence_stack * next;
};

struct rtvec_def {
    int num_elem;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    rtx elem[1];
};

struct VEC_eh_landing_pad_gc {
    struct VEC_eh_landing_pad_base base;
};

struct edge_def {
    struct basic_block_def * src;
    struct basic_block_def * dest;
    union edge_def_insns insns;
    void * aux;
    tree goto_block;
    location_t goto_locus;
    uint dest_idx;
    int flags;
    int probability;
    gcov_type count;
};

struct def_optype_d {
    struct def_optype_d * next;
    tree * def_ptr;
};

struct tree_type {
    struct tree_common common;
    tree values;
    tree size;
    tree size_unit;
    tree attributes;
    uint uid;
    uint precision:10;
    uint no_force_blk_flag:1;
    uint needs_constructing_flag:1;
    uint transparent_aggr_flag:1;
    uint restrict_flag:1;
    uint contains_placeholder_bits:2;
    uint mode:8;
    uint string_flag:1;
    uint lang_flag_0:1;
    uint lang_flag_1:1;
    uint lang_flag_2:1;
    uint lang_flag_3:1;
    uint lang_flag_4:1;
    uint lang_flag_5:1;
    uint lang_flag_6:1;
    uint align;
    alias_set_type alias_set;
    tree pointer_to;
    tree reference_to;
    union tree_type_symtab symtab;
    tree name;
    tree minval;
    tree maxval;
    tree next_variant;
    tree main_variant;
    tree binfo;
    tree context;
    tree canonical;
    struct lang_type * lang_specific;
};

struct VEC_rtx_base {
    uint num;
    uint alloc;
    rtx vec[1];
};

struct tree_vec {
    struct tree_common common;
    int length;
    undefined field2_0x1c;
    undefined field3_0x1d;
    undefined field4_0x1e;
    undefined field5_0x1f;
    tree a[1];
};

struct gimple_omp_for_iter {
    enum tree_code cond;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    tree index;
    tree initial;
    tree final;
    tree incr;
};

struct machine_function {
    struct stack_local_entry * stack_locals;
    char * some_ld_name;
    int varargs_gpr_size;
    int varargs_fpr_size;
    int optimize_mode_switching[4];
    int use_fast_prologue_epilogue_nregs;
    undefined field6_0x2c;
    undefined field7_0x2d;
    undefined field8_0x2e;
    undefined field9_0x2f;
    struct machine_cfa_state cfa;
    enum calling_abi call_abi;
    uint accesses_prev_frame:1;
    uint needs_cld:1;
    uint use_fast_prologue_epilogue:1;
    uint tls_descriptor_call_expanded_p:1;
    uint static_chain_on_stack:1;
    undefined field17_0x45;
    undefined field18_0x46;
    undefined field19_0x47;
};

struct VEC_tree_gc {
    struct VEC_tree_base base;
};

struct cselib_val_struct {
};

struct tree_omp_clause {
    struct tree_common common;
    location_t locus;
    enum omp_clause_code code;
    union omp_clause_subcode subcode;
    undefined field4_0x24;
    undefined field5_0x25;
    undefined field6_0x26;
    undefined field7_0x27;
    gimple_seq gimple_reduction_init;
    gimple_seq gimple_reduction_merge;
    tree ops[1];
};

struct tree_constructor {
    struct tree_common common;
    struct VEC_constructor_elt_gc * elts;
};

union tree_node {
    struct tree_base base;
    struct tree_common common;
    struct tree_int_cst int_cst;
    struct tree_real_cst real_cst;
    struct tree_fixed_cst fixed_cst;
    struct tree_vector vector;
    struct tree_string string;
    struct tree_complex complex;
    struct tree_identifier identifier;
    struct tree_decl_minimal decl_minimal;
    struct tree_decl_common decl_common;
    struct tree_decl_with_rtl decl_with_rtl;
    struct tree_decl_non_common decl_non_common;
    struct tree_parm_decl parm_decl;
    struct tree_decl_with_vis decl_with_vis;
    struct tree_var_decl var_decl;
    struct tree_field_decl field_decl;
    struct tree_label_decl label_decl;
    struct tree_result_decl result_decl;
    struct tree_const_decl const_decl;
    struct tree_type_decl type_decl;
    struct tree_function_decl function_decl;
    struct tree_type type;
    struct tree_list list;
    struct tree_vec vec;
    struct tree_exp exp;
    struct tree_ssa_name ssa_name;
    struct tree_block block;
    struct tree_binfo binfo;
    struct tree_statement_list stmt_list;
    struct tree_constructor constructor;
    struct tree_omp_clause omp_clause;
    struct tree_optimization_option optimization;
    struct tree_target_option target_option;
};

struct tree_statement_list_node {
    struct tree_statement_list_node * prev;
    struct tree_statement_list_node * next;
    tree stmt;
};

struct VEC_rtx_gc {
    struct VEC_rtx_base base;
};

struct bitmap_obstack {
    struct bitmap_element_def * elements;
    struct bitmap_head_def * heads;
    struct obstack obstack;
};

struct basic_block_def {
    struct VEC_edge_gc * preds;
    struct VEC_edge_gc * succs;
    void * aux;
    struct loop * loop_father;
    struct et_node * dom[2];
    struct basic_block_def * prev_bb;
    struct basic_block_def * next_bb;
    union basic_block_il_dependent il;
    gcov_type count;
    int index;
    int loop_depth;
    int frequency;
    int discriminator;
    int flags;
    undefined field14_0x64;
    undefined field15_0x65;
    undefined field16_0x66;
    undefined field17_0x67;
};

struct rtx_def {
    uint code:16;
    uint mode:8;
    uint jump:1;
    uint call:1;
    uint unchanging:1;
    uint volatil:1;
    uint in_struct:1;
    uint used:1;
    uint frame_related:1;
    uint return_val:1;
    undefined field10_0x4;
    undefined field11_0x5;
    undefined field12_0x6;
    undefined field13_0x7;
    union u u;
};

typedef struct VEC_call_site_record_gc VEC_call_site_record_gc, *PVEC_call_site_record_gc;

typedef struct VEC_call_site_record_base VEC_call_site_record_base, *PVEC_call_site_record_base;

typedef struct call_site_record_d call_site_record_d, *Pcall_site_record_d;

typedef struct call_site_record_d * call_site_record;

struct VEC_call_site_record_base {
    uint num;
    uint alloc;
    call_site_record vec[1];
};

struct VEC_call_site_record_gc {
    struct VEC_call_site_record_base base;
};

struct call_site_record_d {
};

typedef struct ipa_opt_pass_d ipa_opt_pass_d, *Pipa_opt_pass_d;

typedef struct cgraph_node_set_def cgraph_node_set_def, *Pcgraph_node_set_def;

typedef struct cgraph_node cgraph_node, *Pcgraph_node;

typedef struct varpool_node varpool_node, *Pvarpool_node;

typedef struct ipa_opt_pass_d * ipa_opt_pass;

typedef struct opt_pass opt_pass, *Popt_pass;

typedef struct VEC_cgraph_node_ptr_gc VEC_cgraph_node_ptr_gc, *PVEC_cgraph_node_ptr_gc;

typedef struct cgraph_edge cgraph_edge, *Pcgraph_edge;

typedef struct VEC_ipa_opt_pass_heap VEC_ipa_opt_pass_heap, *PVEC_ipa_opt_pass_heap;

typedef struct cgraph_local_info cgraph_local_info, *Pcgraph_local_info;

typedef struct cgraph_global_info cgraph_global_info, *Pcgraph_global_info;

typedef struct cgraph_rtl_info cgraph_rtl_info, *Pcgraph_rtl_info;

typedef struct cgraph_clone_info cgraph_clone_info, *Pcgraph_clone_info;

typedef struct cgraph_thunk_info cgraph_thunk_info, *Pcgraph_thunk_info;

typedef enum opt_pass_type {
    GIMPLE_PASS=0,
    RTL_PASS=1,
    SIMPLE_IPA_PASS=2,
    IPA_PASS=3
} opt_pass_type;

typedef enum timevar_id_t {
    TV_LOOP_UNROLL=-128,
    TV_LOOP_DOLOOP=-127,
    TV_CPROP=-126,
    TV_PRE=-125,
    TV_HOIST=-124,
    TV_LSM=-123,
    TV_TRACER=-122,
    TV_WEB=-121,
    TV_AUTO_INC_DEC=-120,
    TV_CSE2=-119,
    TV_BRANCH_PROB=-118,
    TV_VPT=-117,
    TV_COMBINE=-116,
    TV_IFCVT=-115,
    TV_REGMOVE=-114,
    TV_MODE_SWITCH=-113,
    TV_SMS=-112,
    TV_SCHED=-111,
    TV_LOCAL_ALLOC=-110,
    TV_GLOBAL_ALLOC=-109,
    TV_IRA=-108,
    TV_RELOAD=-107,
    TV_RELOAD_CSE_REGS=-106,
    TV_SEQABSTR=-105,
    TV_GCSE_AFTER_RELOAD=-104,
    TV_THREAD_PROLOGUE_AND_EPILOGUE=-103,
    TV_IFCVT2=-102,
    TV_COMBINE_STACK_ADJUST=-101,
    TV_PEEPHOLE2=-100,
    TV_RENAME_REGISTERS=-99,
    TV_CPROP_REGISTERS=-98,
    TV_SCHED2=-97,
    TV_MACH_DEP=-96,
    TV_DBR_SCHED=-95,
    TV_REORDER_BLOCKS=-94,
    TV_SHORTEN_BRANCH=-93,
    TV_REG_STACK=-92,
    TV_FINAL=-91,
    TV_SYMOUT=-90,
    TV_VAR_TRACKING=-89,
    TV_TREE_IFCOMBINE=-88,
    TV_PLUGIN_INIT=-87,
    TV_PLUGIN_RUN=-86,
    TV_REST_OF_COMPILATION=-85,
    TIMEVAR_LAST=-84,
    TV_NONE=0,
    TV_TOTAL=1,
    TV_GC=2,
    TV_DUMP=3,
    TV_CGRAPH=4,
    TV_CGRAPHOPT=5,
    TV_IPA_CONSTANT_PROP=6,
    TV_IPA_LTO_GIMPLE_IO=7,
    TV_IPA_LTO_DECL_IO=8,
    TV_IPA_LTO_CGRAPH_IO=9,
    TV_LTO=10,
    TV_WHOPR_WPA=11,
    TV_WHOPR_WPA_IO=12,
    TV_WHOPR_LTRANS=13,
    TV_WHOPR_WPA_FIXUP=14,
    TV_WHOPR_WPA_LTRANS_EXEC=15,
    TV_IPA_REFERENCE=16,
    TV_IPA_PURE_CONST=17,
    TV_IPA_TYPE_ESCAPE=18,
    TV_IPA_PTA=19,
    TV_IPA_SRA=20,
    TV_IPA_FREE_LANG_DATA=21,
    TV_CFG=22,
    TV_CLEANUP_CFG=23,
    TV_CFG_VERIFY=24,
    TV_DELETE_TRIVIALLY_DEAD=25,
    TV_LIFE=26,
    TV_LIFE_UPDATE=27,
    TV_DF_SCAN=28,
    TV_DF_MD=29,
    TV_DF_RD=30,
    TV_DF_LR=31,
    TV_DF_LIVE=32,
    TV_DF_UREC=33,
    TV_DF_CHAIN=34,
    TV_DF_BYTE_LR=35,
    TV_DF_NOTE=36,
    TV_REG_STATS=37,
    TV_ALIAS_ANALYSIS=38,
    TV_ALIAS_STMT_WALK=39,
    TV_REG_SCAN=40,
    TV_REBUILD_JUMP=41,
    TV_CPP=42,
    TV_LEX=43,
    TV_PARSE=44,
    TV_NAME_LOOKUP=45,
    TV_INLINE_HEURISTICS=46,
    TV_INTEGRATION=47,
    TV_TREE_GIMPLIFY=48,
    TV_TREE_EH=49,
    TV_TREE_CFG=50,
    TV_TREE_CLEANUP_CFG=51,
    TV_TREE_VRP=52,
    TV_TREE_COPY_PROP=53,
    TV_TREE_STORE_COPY_PROP=54,
    TV_FIND_REFERENCED_VARS=55,
    TV_TREE_PTA=56,
    TV_TREE_INSERT_PHI_NODES=57,
    TV_TREE_SSA_REWRITE_BLOCKS=58,
    TV_TREE_SSA_OTHER=59,
    TV_TREE_SSA_INCREMENTAL=60,
    TV_TREE_OPS=61,
    TV_TREE_SSA_DOMINATOR_OPTS=62,
    TV_TREE_SRA=63,
    TV_TREE_STORE_CCP=64,
    TV_TREE_CCP=65,
    TV_TREE_PHI_CPROP=66,
    TV_TREE_SPLIT_EDGES=67,
    TV_TREE_REASSOC=68,
    TV_TREE_PRE=69,
    TV_TREE_REDPHI=70,
    TV_TREE_FRE=71,
    TV_TREE_SINK=72,
    TV_TREE_PHIOPT=73,
    TV_TREE_FORWPROP=74,
    TV_TREE_PHIPROP=75,
    TV_TREE_DCE=76,
    TV_TREE_CD_DCE=77,
    TV_TREE_CALL_CDCE=78,
    TV_TREE_DSE=79,
    TV_TREE_MERGE_PHI=80,
    TV_TREE_LOOP=81,
    TV_TREE_LOOP_BOUNDS=82,
    TV_LIM=83,
    TV_TREE_LOOP_IVCANON=84,
    TV_SCEV_CONST=85,
    TV_TREE_LOOP_UNSWITCH=86,
    TV_COMPLETE_UNROLL=87,
    TV_TREE_PARALLELIZE_LOOPS=88,
    TV_TREE_VECTORIZATION=89,
    TV_TREE_SLP_VECTORIZATION=90,
    TV_GRAPHITE_TRANSFORMS=91,
    TV_GRAPHITE_DATA_DEPS=92,
    TV_GRAPHITE_CODE_GEN=93,
    TV_TREE_LINEAR_TRANSFORM=94,
    TV_TREE_LOOP_DISTRIBUTION=95,
    TV_CHECK_DATA_DEPS=96,
    TV_TREE_PREFETCH=97,
    TV_TREE_LOOP_IVOPTS=98,
    TV_PREDCOM=99,
    TV_TREE_LOOP_INIT=100,
    TV_TREE_LOOP_FINI=101,
    TV_TREE_CH=102,
    TV_TREE_SSA_UNCPROP=103,
    TV_TREE_SSA_TO_NORMAL=104,
    TV_TREE_NRV=105,
    TV_TREE_COPY_RENAME=106,
    TV_TREE_SSA_VERIFY=107,
    TV_TREE_STMT_VERIFY=108,
    TV_TREE_SWITCH_CONVERSION=109,
    TV_CGRAPH_VERIFY=110,
    TV_DOM_FRONTIERS=111,
    TV_DOMINANCE=112,
    TV_CONTROL_DEPENDENCES=113,
    TV_OVERLOAD=114,
    TV_TEMPLATE_INSTANTIATION=115,
    TV_EXPAND=116,
    TV_VARCONST=117,
    TV_LOWER_SUBREG=118,
    TV_JUMP=119,
    TV_FWPROP=120,
    TV_CSE=121,
    TV_DCE=122,
    TV_DSE1=123,
    TV_DSE2=124,
    TV_LOOP=125,
    TV_LOOP_MOVE_INVARIANTS=126,
    TV_LOOP_UNSWITCH=127
} timevar_id_t;

typedef struct VEC_cgraph_node_ptr_base VEC_cgraph_node_ptr_base, *PVEC_cgraph_node_ptr_base;

typedef enum cgraph_inline_failed_t {
    CIF_OK=0,
    CIF_UNSPECIFIED=1,
    CIF_FUNCTION_NOT_CONSIDERED=2,
    CIF_BODY_NOT_AVAILABLE=3,
    CIF_REDEFINED_EXTERN_INLINE=4,
    CIF_FUNCTION_NOT_INLINABLE=5,
    CIF_FUNCTION_NOT_INLINE_CANDIDATE=6,
    CIF_LARGE_FUNCTION_GROWTH_LIMIT=7,
    CIF_LARGE_STACK_FRAME_GROWTH_LIMIT=8,
    CIF_MAX_INLINE_INSNS_SINGLE_LIMIT=9,
    CIF_MAX_INLINE_INSNS_AUTO_LIMIT=10,
    CIF_INLINE_UNIT_GROWTH_LIMIT=11,
    CIF_RECURSIVE_INLINING=12,
    CIF_UNLIKELY_CALL=13,
    CIF_NOT_DECLARED_INLINED=14,
    CIF_OPTIMIZING_FOR_SIZE=15,
    CIF_TARGET_OPTION_MISMATCH=16,
    CIF_MISMATCHED_ARGUMENTS=17,
    CIF_ORIGINALLY_INDIRECT_CALL=18,
    CIF_N_REASONS=19
} cgraph_inline_failed_t;

typedef struct VEC_ipa_opt_pass_base VEC_ipa_opt_pass_base, *PVEC_ipa_opt_pass_base;

typedef struct lto_file_decl_data lto_file_decl_data, *Plto_file_decl_data;

typedef struct inline_summary inline_summary, *Pinline_summary;

typedef struct VEC_ipa_replace_map_p_gc VEC_ipa_replace_map_p_gc, *PVEC_ipa_replace_map_p_gc;

typedef struct bitmap_head_def * bitmap;

typedef struct cgraph_node * cgraph_node_ptr;

typedef struct VEC_ipa_replace_map_p_base VEC_ipa_replace_map_p_base, *PVEC_ipa_replace_map_p_base;

typedef struct ipa_replace_map ipa_replace_map, *Pipa_replace_map;

typedef struct ipa_replace_map * ipa_replace_map_p;

struct cgraph_rtl_info {
    uint preferred_incoming_stack_boundary;
};

struct cgraph_node_set_def {
    htab_t hashtab;
    struct VEC_cgraph_node_ptr_gc * nodes;
    void * aux;
};

struct VEC_ipa_replace_map_p_base {
    uint num;
    uint alloc;
    ipa_replace_map_p vec[1];
};

struct VEC_ipa_replace_map_p_gc {
    struct VEC_ipa_replace_map_p_base base;
};

struct cgraph_thunk_info {
    long fixed_offset;
    long virtual_value;
    tree alias;
    uchar this_adjusting;
    uchar virtual_offset_p;
    uchar thunk_p;
    undefined field6_0x1b;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
};

struct VEC_ipa_opt_pass_base {
    uint num;
    uint alloc;
    ipa_opt_pass vec[1];
};

struct VEC_ipa_opt_pass_heap {
    struct VEC_ipa_opt_pass_base base;
};

struct cgraph_clone_info {
    struct VEC_ipa_replace_map_p_gc * tree_map;
    bitmap args_to_skip;
    bitmap combined_args_to_skip;
};

struct opt_pass {
    enum opt_pass_type type;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    char * name;
    uchar (* gate)(void);
    uint (* execute)(void);
    struct opt_pass * sub;
    struct opt_pass * next;
    int static_pass_number;
    enum timevar_id_t tv_id;
    uint properties_required;
    uint properties_provided;
    uint properties_destroyed;
    uint todo_flags_start;
    uint todo_flags_finish;
    undefined field17_0x4c;
    undefined field18_0x4d;
    undefined field19_0x4e;
    undefined field20_0x4f;
};

struct ipa_opt_pass_d {
    struct opt_pass pass;
    void (* generate_summary)(void);
    void (* write_summary)(struct cgraph_node_set_def *);
    void (* read_summary)(void);
    void (* function_read_summary)(struct cgraph_node *);
    void (* stmt_fixup)(struct cgraph_node *, gimple *);
    uint function_transform_todo_flags_start;
    undefined field7_0x7c;
    undefined field8_0x7d;
    undefined field9_0x7e;
    undefined field10_0x7f;
    uint (* function_transform)(struct cgraph_node *);
    void (* variable_transform)(struct varpool_node *);
};

struct inline_summary {
    long estimated_self_stack_size;
    int self_size;
    int size_inlining_benefit;
    int self_time;
    int time_inlining_benefit;
};

struct VEC_cgraph_node_ptr_base {
    uint num;
    uint alloc;
    cgraph_node_ptr vec[1];
};

struct VEC_cgraph_node_ptr_gc {
    struct VEC_cgraph_node_ptr_base base;
};

struct lto_file_decl_data {
};

struct cgraph_global_info {
    long estimated_stack_size;
    long stack_frame_offset;
    struct cgraph_node * inlined_to;
    int time;
    int size;
    int estimated_growth;
    uchar inlined;
    undefined field7_0x25;
    undefined field8_0x26;
    undefined field9_0x27;
};

struct cgraph_local_info {
    struct lto_file_decl_data * lto_file_data;
    struct inline_summary inline_summary;
    uint local:1;
    uint externally_visible:1;
    uint finalized:1;
    uint inlinable:1;
    uint disregard_inline_limits:1;
    uint redefined_extern_inline:1;
    uint for_functions_valid:1;
    uint vtable_method:1;
    undefined field10_0x21;
    undefined field11_0x22;
    undefined field12_0x23;
    undefined field13_0x24;
    undefined field14_0x25;
    undefined field15_0x26;
    undefined field16_0x27;
};

struct cgraph_node {
    tree decl;
    struct cgraph_edge * callees;
    struct cgraph_edge * callers;
    struct cgraph_node * next;
    struct cgraph_node * previous;
    struct cgraph_node * origin;
    struct cgraph_node * nested;
    struct cgraph_node * next_nested;
    struct cgraph_node * next_needed;
    struct cgraph_node * next_sibling_clone;
    struct cgraph_node * prev_sibling_clone;
    struct cgraph_node * clones;
    struct cgraph_node * clone_of;
    struct cgraph_node * same_body;
    struct cgraph_node * same_comdat_group;
    htab_t call_site_hash;
    void * aux;
    struct VEC_ipa_opt_pass_heap * ipa_transforms_to_apply;
    struct cgraph_local_info local;
    struct cgraph_global_info global;
    struct cgraph_rtl_info rtl;
    undefined field21_0xe4;
    undefined field22_0xe5;
    undefined field23_0xe6;
    undefined field24_0xe7;
    struct cgraph_clone_info clone;
    struct cgraph_thunk_info thunk;
    gcov_type count;
    int uid;
    int order;
    int pid;
    uint needed:1;
    uint address_taken:1;
    uint abstract_and_needed:1;
    uint reachable:1;
    uint lowered:1;
    uint analyzed:1;
    uint process:1;
    uint alias:1;
    uint finalized_by_frontend:1;
    uint same_body_alias:1;
    undefined field41_0x136;
    undefined field42_0x137;
};

struct varpool_node {
    tree decl;
    struct varpool_node * next;
    struct varpool_node * next_needed;
    struct varpool_node * extra_name;
    int order;
    uint needed:1;
    uint force_output:1;
    uint analyzed:1;
    uint finalized:1;
    uint output:1;
    uint externally_visible:1;
    uint alias:1;
    undefined field12_0x25;
    undefined field13_0x26;
    undefined field14_0x27;
};

struct cgraph_edge {
    gcov_type count;
    struct cgraph_node * caller;
    struct cgraph_node * callee;
    struct cgraph_edge * prev_caller;
    struct cgraph_edge * next_caller;
    struct cgraph_edge * prev_callee;
    struct cgraph_edge * next_callee;
    gimple call_stmt;
    void * aux;
    enum cgraph_inline_failed_t inline_failed;
    uint lto_stmt_uid;
    int frequency;
    int uid;
    ushort loop_nest;
    uint indirect_call:1;
    uint call_stmt_cannot_inline_p:1;
    uint can_throw_external:1;
    undefined field17_0x5b;
    undefined field18_0x5c;
    undefined field19_0x5d;
    undefined field20_0x5e;
    undefined field21_0x5f;
};

struct ipa_replace_map {
    tree old_tree;
    tree new_tree;
    uchar replace_p;
    uchar ref_p;
    undefined field4_0x12;
    undefined field5_0x13;
    undefined field6_0x14;
    undefined field7_0x15;
    undefined field8_0x16;
    undefined field9_0x17;
};

typedef struct rtl_eh rtl_eh, *Prtl_eh;

struct rtl_eh {
    rtx ehr_stackadj;
    rtx ehr_handler;
    rtx ehr_label;
    rtx sjlj_fc;
    rtx sjlj_exit_after;
    struct VEC_uchar_gc * action_record_data;
    struct VEC_call_site_record_gc * call_site_record[2];
};

typedef struct VEC_temp_slot_p_gc VEC_temp_slot_p_gc, *PVEC_temp_slot_p_gc;

typedef struct VEC_temp_slot_p_base VEC_temp_slot_p_base, *PVEC_temp_slot_p_base;

typedef struct temp_slot temp_slot, *Ptemp_slot;

typedef struct temp_slot * temp_slot_p;

struct VEC_temp_slot_p_base {
    uint num;
    uint alloc;
    temp_slot_p vec[1];
};

struct VEC_temp_slot_p_gc {
    struct VEC_temp_slot_p_base base;
};

struct temp_slot {
};

typedef struct emit_status emit_status, *Pemit_status;

struct emit_status {
    int x_reg_rtx_no;
    int x_first_label_num;
    rtx x_first_insn;
    rtx x_last_insn;
    struct sequence_stack * sequence_stack;
    int x_cur_insn_uid;
    int x_cur_debug_insn_uid;
    location_t x_last_location;
    int regno_pointer_align_length;
    uchar * regno_pointer_align;
};

typedef struct rtl_data rtl_data, *Prtl_data;

typedef struct expr_status expr_status, *Pexpr_status;

typedef struct varasm_status varasm_status, *Pvarasm_status;

typedef struct incoming_args incoming_args, *Pincoming_args;

typedef struct function_subsections function_subsections, *Pfunction_subsections;

typedef struct initial_value_struct initial_value_struct, *Pinitial_value_struct;

typedef struct rtx_constant_pool rtx_constant_pool, *Prtx_constant_pool;

typedef struct ix86_args ix86_args, *Pix86_args;

typedef struct ix86_args CUMULATIVE_ARGS;

struct initial_value_struct {
};

struct function_subsections {
    char * hot_section_label;
    char * cold_section_label;
    char * hot_section_end_label;
    char * cold_section_end_label;
    char * unlikely_text_section_name;
};

struct ix86_args {
    int words;
    int nregs;
    int regno;
    int fastcall;
    int sse_words;
    int sse_nregs;
    int warn_avx;
    int warn_sse;
    int warn_mmx;
    int sse_regno;
    int mmx_words;
    int mmx_nregs;
    int mmx_regno;
    int maybe_vaarg;
    int float_in_sse;
    enum calling_abi call_abi;
};

struct incoming_args {
    int pops_args;
    int size;
    int pretend_args_size;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    rtx arg_offset_rtx;
    CUMULATIVE_ARGS info;
    rtx internal_arg_pointer;
};

struct expr_status {
    int x_pending_stack_adjust;
    int x_inhibit_defer_pop;
    int x_stack_pointer_delta;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
    rtx x_saveregs_value;
    rtx x_apply_args_value;
    rtx x_forced_labels;
};

struct varasm_status {
    struct rtx_constant_pool * pool;
    uint deferred_constants;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct rtl_data {
    struct expr_status expr;
    struct emit_status emit;
    struct varasm_status varasm;
    struct incoming_args args;
    struct function_subsections subsections;
    struct rtl_eh eh;
    int outgoing_args_size;
    undefined field7_0x13c;
    undefined field8_0x13d;
    undefined field9_0x13e;
    undefined field10_0x13f;
    rtx return_rtx;
    struct initial_value_struct * hard_reg_initial_vals;
    tree stack_protect_guard;
    rtx x_nonlocal_goto_handler_labels;
    rtx x_return_label;
    rtx x_naked_return_label;
    rtx x_stack_slot_list;
    rtx x_stack_check_probe_note;
    rtx x_arg_pointer_save_area;
    rtx drap_reg;
    long x_frame_offset;
    rtx x_parm_birth_insn;
    struct VEC_temp_slot_p_gc * x_used_temp_slots;
    struct temp_slot * x_avail_temp_slots;
    int x_temp_slot_level;
    uint stack_alignment_needed;
    uint preferred_stack_boundary;
    uint parm_stack_boundary;
    uint max_used_stack_slot_alignment;
    uint stack_alignment_estimated;
    rtx epilogue_delay_list;
    uchar accesses_prior_frames;
    uchar calls_eh_return;
    uchar saves_all_registers;
    uchar has_nonlocal_goto;
    uchar has_asm_statement;
    uchar all_throwers_are_sibcalls;
    uchar limit_stack;
    uchar profile;
    uchar uses_const_pool;
    uchar uses_pic_offset_table;
    uchar uses_eh_lsda;
    uchar tail_call_emit;
    uchar arg_pointer_save_area_init;
    uchar frame_pointer_needed;
    uchar maybe_hot_insn_p;
    uchar stack_realign_needed;
    uchar stack_realign_tried;
    uchar need_drap;
    uchar stack_realign_processed;
    uchar stack_realign_finalized;
    uchar dbr_scheduled_p;
    uchar nothrow;
    undefined field54_0x1e6;
    undefined field55_0x1e7;
};

struct rtx_constant_pool {
};

typedef enum tree_dump_index {
    TDI_none=0,
    TDI_cgraph=1,
    TDI_tu=2,
    TDI_class=3,
    TDI_original=4,
    TDI_generic=5,
    TDI_nested=6,
    TDI_vcg=7,
    TDI_tree_all=8,
    TDI_rtl_all=9,
    TDI_ipa_all=10,
    TDI_end=11
} tree_dump_index;

typedef struct gimple_opt_pass gimple_opt_pass, *Pgimple_opt_pass;

struct gimple_opt_pass {
    struct opt_pass pass;
};

typedef struct rtl_opt_pass rtl_opt_pass, *Prtl_opt_pass;

struct rtl_opt_pass {
    struct opt_pass pass;
};

typedef struct simple_ipa_opt_pass simple_ipa_opt_pass, *Psimple_ipa_opt_pass;

struct simple_ipa_opt_pass {
    struct opt_pass pass;
};

typedef enum diagnostic_t {
    DK_UNSPECIFIED=0,
    DK_IGNORED=1,
    DK_FATAL=2,
    DK_ICE=3,
    DK_ERROR=4,
    DK_SORRY=5,
    DK_WARNING=6,
    DK_ANACHRONISM=7,
    DK_NOTE=8,
    DK_DEBUG=9,
    DK_PEDWARN=10,
    DK_PERMERROR=11,
    DK_LAST_DIAGNOSTIC_KIND=12
} diagnostic_t;

typedef struct diagnostic_context diagnostic_context, *Pdiagnostic_context;

typedef struct __va_list_tag __va_list_tag, *P__va_list_tag;

typedef struct pretty_print_info pretty_print_info, *Ppretty_print_info;

typedef struct pretty_print_info pretty_printer;

typedef struct output_buffer output_buffer, *Poutput_buffer;

typedef enum pp_padding {
    pp_none=0,
    pp_before=1,
    pp_after=2
} pp_padding;

typedef struct pp_wrapping_mode_t pp_wrapping_mode_t, *Ppp_wrapping_mode_t;

typedef struct text_info text_info, *Ptext_info;

typedef uchar (* printer_fn)(pretty_printer *, struct text_info *, char *, int, uchar, uchar, uchar);

typedef struct chunk_info chunk_info, *Pchunk_info;


// WARNING! conflicting data type names: /DWARF/FILE.h/FILE - /stdio.h/FILE

typedef enum diagnostic_prefixing_rule_t {
    DIAGNOSTICS_SHOW_PREFIX_ONCE=0,
    DIAGNOSTICS_SHOW_PREFIX_NEVER=1,
    DIAGNOSTICS_SHOW_PREFIX_EVERY_LINE=2
} diagnostic_prefixing_rule_t;

struct pp_wrapping_mode_t {
    enum diagnostic_prefixing_rule_t rule;
    int line_cutoff;
};

struct chunk_info {
    struct chunk_info * prev;
    char * args[60];
};

struct output_buffer {
    struct obstack formatted_obstack;
    struct obstack chunk_obstack;
    struct obstack * obstack;
    struct chunk_info * cur_chunk_array;
    FILE * stream;
    int line_length;
    char digit_buffer[128];
    undefined field7_0x14c;
    undefined field8_0x14d;
    undefined field9_0x14e;
    undefined field10_0x14f;
};

struct text_info {
    char * format_spec;
    va_list * args_ptr;
    int err_no;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
    location_t * locus;
    tree * abstract_origin;
};

struct pretty_print_info {
    struct output_buffer * buffer;
    char * prefix;
    enum pp_padding padding;
    int maximum_length;
    int indent_skip;
    struct pp_wrapping_mode_t wrapping;
    undefined field6_0x24;
    undefined field7_0x25;
    undefined field8_0x26;
    undefined field9_0x27;
    printer_fn format_decoder;
    uchar emitted_prefix;
    uchar need_newline;
    uchar translate_identifiers;
    undefined field14_0x33;
    undefined field15_0x34;
    undefined field16_0x35;
    undefined field17_0x36;
    undefined field18_0x37;
};

struct __va_list_tag {
    uint gp_offset;
    uint fp_offset;
    void * overflow_arg_area;
    void * reg_save_area;
};

typedef struct __va_list_tag __builtin_va_list[1];

typedef __builtin_va_list __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef struct diagnostic_info diagnostic_info, *Pdiagnostic_info;

typedef void (* diagnostic_starter_fn)(struct diagnostic_context *, struct diagnostic_info *);

typedef diagnostic_starter_fn diagnostic_finalizer_fn;

typedef struct line_map line_map, *Pline_map;

typedef uint linenum_type;

struct diagnostic_info {
    struct text_info message;
    location_t location;
    uint override_column;
    tree abstract_origin;
    enum diagnostic_t kind;
    int option_index;
};

struct line_map {
    char * to_file;
    linenum_type to_line;
    source_location start_location;
    int included_from;
    uint reason:8;
    uchar sysp;
    uint column_bits:8;
    undefined field7_0x17;
};

struct diagnostic_context {
    pretty_printer * printer;
    int diagnostic_count[12];
    uchar issue_warnings_are_errors_message;
    uchar warning_as_error_requested;
    undefined field4_0x3a;
    undefined field5_0x3b;
    enum diagnostic_t classify_diagnostic[870];
    uchar show_option_requested;
    uchar abort_on_error;
    undefined field9_0xdd6;
    undefined field10_0xdd7;
    diagnostic_starter_fn begin_diagnostic;
    diagnostic_finalizer_fn end_diagnostic;
    void (* internal_error)(char *, va_list *);
    tree last_function;
    struct line_map * last_module;
    int lock;
    uchar inhibit_notes_p;
    undefined field18_0xe05;
    undefined field19_0xe06;
    undefined field20_0xe07;
};

typedef enum rtx_class {
    RTX_COMPARE=0,
    RTX_COMM_COMPARE=1,
    RTX_BIN_ARITH=2,
    RTX_COMM_ARITH=3,
    RTX_UNARY=4,
    RTX_EXTRA=5,
    RTX_MATCH=6,
    RTX_INSN=7,
    RTX_OBJ=8,
    RTX_CONST_OBJ=9,
    RTX_TERNARY=10,
    RTX_BITFIELD_OPS=11,
    RTX_AUTOINC=12
} rtx_class;

typedef enum rtx_code {
    US_PLUS=-128,
    SS_MINUS=-127,
    SS_NEG=-126,
    US_NEG=-125,
    SS_ABS=-124,
    SS_ASHIFT=-123,
    US_ASHIFT=-122,
    US_MINUS=-121,
    SS_TRUNCATE=-120,
    US_TRUNCATE=-119,
    VAR_LOCATION=-118,
    LAST_AND_UNUSED_RTX_CODE=-117,
    UNKNOWN=0,
    VALUE=1,
    DEBUG_EXPR=2,
    EXPR_LIST=3,
    INSN_LIST=4,
    SEQUENCE=5,
    ADDRESS=6,
    DEBUG_INSN=7,
    INSN=8,
    JUMP_INSN=9,
    CALL_INSN=10,
    BARRIER=11,
    CODE_LABEL=12,
    NOTE=13,
    COND_EXEC=14,
    PARALLEL=15,
    ASM_INPUT=16,
    ASM_OPERANDS=17,
    UNSPEC=18,
    UNSPEC_VOLATILE=19,
    ADDR_VEC=20,
    ADDR_DIFF_VEC=21,
    PREFETCH=22,
    SET=23,
    USE=24,
    CLOBBER=25,
    CALL=26,
    RETURN=27,
    EH_RETURN=28,
    TRAP_IF=29,
    CONST_INT=30,
    CONST_FIXED=31,
    CONST_DOUBLE=32,
    CONST_VECTOR=33,
    CONST_STRING=34,
    CONST=35,
    PC=36,
    REG=37,
    SCRATCH=38,
    SUBREG=39,
    STRICT_LOW_PART=40,
    CONCAT=41,
    CONCATN=42,
    MEM=43,
    LABEL_REF=44,
    SYMBOL_REF=45,
    CC0=46,
    IF_THEN_ELSE=47,
    COMPARE=48,
    PLUS=49,
    MINUS=50,
    NEG=51,
    MULT=52,
    SS_MULT=53,
    US_MULT=54,
    DIV=55,
    SS_DIV=56,
    US_DIV=57,
    MOD=58,
    UDIV=59,
    UMOD=60,
    AND=61,
    IOR=62,
    XOR=63,
    NOT=64,
    ASHIFT=65,
    ROTATE=66,
    ASHIFTRT=67,
    LSHIFTRT=68,
    ROTATERT=69,
    SMIN=70,
    SMAX=71,
    UMIN=72,
    UMAX=73,
    PRE_DEC=74,
    PRE_INC=75,
    POST_DEC=76,
    POST_INC=77,
    PRE_MODIFY=78,
    POST_MODIFY=79,
    NE=80,
    EQ=81,
    GE=82,
    GT=83,
    LE=84,
    LT=85,
    GEU=86,
    GTU=87,
    LEU=88,
    LTU=89,
    UNORDERED=90,
    ORDERED=91,
    UNEQ=92,
    UNGE=93,
    UNGT=94,
    UNLE=95,
    UNLT=96,
    LTGT=97,
    SIGN_EXTEND=98,
    ZERO_EXTEND=99,
    TRUNCATE=100,
    FLOAT_EXTEND=101,
    FLOAT_TRUNCATE=102,
    FLOAT=103,
    FIX=104,
    UNSIGNED_FLOAT=105,
    UNSIGNED_FIX=106,
    FRACT_CONVERT=107,
    UNSIGNED_FRACT_CONVERT=108,
    SAT_FRACT=109,
    UNSIGNED_SAT_FRACT=110,
    ABS=111,
    SQRT=112,
    BSWAP=113,
    FFS=114,
    CLZ=115,
    CTZ=116,
    POPCOUNT=117,
    PARITY=118,
    SIGN_EXTRACT=119,
    ZERO_EXTRACT=120,
    HIGH=121,
    LO_SUM=122,
    VEC_MERGE=123,
    VEC_SELECT=124,
    VEC_CONCAT=125,
    VEC_DUPLICATE=126,
    SS_PLUS=127
} rtx_code;

typedef enum insn_note {
    NOTE_INSN_DELETED=0,
    NOTE_INSN_DELETED_LABEL=1,
    NOTE_INSN_BLOCK_BEG=2,
    NOTE_INSN_BLOCK_END=3,
    NOTE_INSN_FUNCTION_BEG=4,
    NOTE_INSN_PROLOGUE_END=5,
    NOTE_INSN_EPILOGUE_BEG=6,
    NOTE_INSN_EH_REGION_BEG=7,
    NOTE_INSN_EH_REGION_END=8,
    NOTE_INSN_VAR_LOCATION=9,
    NOTE_INSN_BASIC_BLOCK=10,
    NOTE_INSN_SWITCH_TEXT_SECTIONS=11,
    NOTE_INSN_CFA_RESTORE_STATE=12,
    NOTE_INSN_MAX=13
} insn_note;

typedef struct rtl_hooks rtl_hooks, *Prtl_hooks;

typedef struct rtx_def * const_rtx;

struct rtl_hooks {
    rtx (* gen_lowpart)(enum machine_mode, rtx);
    rtx (* gen_lowpart_no_emit)(enum machine_mode, rtx);
    rtx (* reg_nonzero_bits)(const_rtx, enum machine_mode, const_rtx, enum machine_mode, ulong, ulong *);
    rtx (* reg_num_sign_bit_copies)(const_rtx, enum machine_mode, const_rtx, enum machine_mode, uint, uint *);
    uchar (* reg_truncated_to_mode)(enum machine_mode, const_rtx);
};

typedef enum global_rtl_index {
    GR_PC=0,
    GR_CC0=1,
    GR_STACK_POINTER=2,
    GR_FRAME_POINTER=3,
    GR_HARD_FRAME_POINTER=4,
    GR_ARG_POINTER=5,
    GR_VIRTUAL_INCOMING_ARGS=6,
    GR_VIRTUAL_STACK_ARGS=7,
    GR_VIRTUAL_STACK_DYNAMIC=8,
    GR_VIRTUAL_OUTGOING_ARGS=9,
    GR_VIRTUAL_CFA=10,
    GR_MAX=11
} global_rtl_index;

typedef enum libfunc_index {
    LTI_abort=0,
    LTI_memcpy=1,
    LTI_memmove=2,
    LTI_memcmp=3,
    LTI_memset=4,
    LTI_setbits=5,
    LTI_setjmp=6,
    LTI_longjmp=7,
    LTI_unwind_sjlj_register=8,
    LTI_unwind_sjlj_unregister=9,
    LTI_profile_function_entry=10,
    LTI_profile_function_exit=11,
    LTI_synchronize=12,
    LTI_gcov_flush=13,
    LTI_MAX=14
} libfunc_index;

typedef struct cpp_reader cpp_reader, *Pcpp_reader;

struct cpp_reader {
};

typedef struct pointer_set_t pointer_set_t, *Ppointer_set_t;

struct pointer_set_t {
};

typedef struct array_descr_info array_descr_info, *Parray_descr_info;

struct array_descr_info {
};

typedef struct stdarg_info stdarg_info, *Pstdarg_info;

struct stdarg_info {
};

typedef struct gimplify_omp_ctx gimplify_omp_ctx, *Pgimplify_omp_ctx;

struct gimplify_omp_ctx {
};

typedef struct gcov_ctr_summary gcov_ctr_summary, *Pgcov_ctr_summary;

struct gcov_ctr_summary {
};

typedef struct _IO_wide_data _IO_wide_data, *P_IO_wide_data;

struct _IO_wide_data {
};

typedef struct _dep _dep, *P_dep;

struct _dep {
};

typedef struct ddg ddg, *Pddg;

struct ddg {
};


// WARNING! conflicting data type names: /DWARF/_UNCATEGORIZED_/_IO_marker - /libio.h/_IO_marker

typedef struct answer answer, *Panswer;

struct answer {
};

typedef struct _IO_codecvt _IO_codecvt, *P_IO_codecvt;

struct _IO_codecvt {
};

typedef struct spec_info_def spec_info_def, *Pspec_info_def;

struct spec_info_def {
};

typedef struct simple_bitmap_def simple_bitmap_def, *Psimple_bitmap_def;

struct simple_bitmap_def {
    uchar * popcount;
    uint n_bits;
    uint size;
    ulong elms[1];
};

typedef struct simple_bitmap_def * sbitmap;

typedef struct VEC_c_goto_bindings_p_gc VEC_c_goto_bindings_p_gc, *PVEC_c_goto_bindings_p_gc;

typedef struct VEC_c_goto_bindings_p_base VEC_c_goto_bindings_p_base, *PVEC_c_goto_bindings_p_base;

typedef struct c_goto_bindings c_goto_bindings, *Pc_goto_bindings;

typedef struct c_goto_bindings * c_goto_bindings_p;

typedef struct c_spot_bindings c_spot_bindings, *Pc_spot_bindings;

typedef struct c_scope c_scope, *Pc_scope;

typedef struct c_binding c_binding, *Pc_binding;

typedef union anon_union_8_2_e8869085_for_u anon_union_8_2_e8869085_for_u, *Panon_union_8_2_e8869085_for_u;

typedef struct c_label_vars c_label_vars, *Pc_label_vars;

union anon_union_8_2_e8869085_for_u {
    tree type;
    struct c_label_vars * label;
};

struct c_binding {
    union anon_union_8_2_e8869085_for_u u;
    tree decl;
    tree id;
    struct c_binding * prev;
    struct c_binding * shadowed;
    uint depth:28;
    uint invisible:1;
    uint nested:1;
    uint inner_comp:1;
    uint in_struct:1;
    location_t locus;
};

struct VEC_c_goto_bindings_p_base {
    uint num;
    uint alloc;
    c_goto_bindings_p vec[1];
};

struct c_spot_bindings {
    struct c_scope * scope;
    struct c_binding * bindings_in_scope;
    int stmt_exprs;
    uchar left_stmt_expr;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

struct c_label_vars {
    struct c_label_vars * shadowed;
    struct c_spot_bindings label_bindings;
    struct VEC_tree_gc * decls_in_scope;
    struct VEC_c_goto_bindings_p_gc * gotos;
};

struct c_goto_bindings {
    location_t loc;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct c_spot_bindings goto_bindings;
};

struct c_scope {
    struct c_scope * outer;
    struct c_scope * outer_function;
    struct c_binding * bindings;
    tree blocks;
    tree blocks_last;
    uint depth:28;
    uint parm_flag:1;
    uint had_vla_unspec:1;
    uint warned_forward_parm_decls:1;
    uint function_body:1;
    uint keep:1;
    uint float_const_decimal64:1;
    uint has_label_bindings:1;
    undefined field13_0x2d;
    undefined field14_0x2e;
    undefined field15_0x2f;
};

struct VEC_c_goto_bindings_p_gc {
    struct VEC_c_goto_bindings_p_base base;
};

typedef struct VEC_c_binding_ptr_heap VEC_c_binding_ptr_heap, *PVEC_c_binding_ptr_heap;

typedef struct VEC_c_binding_ptr_base VEC_c_binding_ptr_base, *PVEC_c_binding_ptr_base;

typedef struct c_binding * c_binding_ptr;

struct VEC_c_binding_ptr_base {
    uint num;
    uint alloc;
    c_binding_ptr vec[1];
};

struct VEC_c_binding_ptr_heap {
    struct VEC_c_binding_ptr_base base;
};

typedef struct c_struct_parse_info c_struct_parse_info, *Pc_struct_parse_info;

typedef struct VEC_tree_heap VEC_tree_heap, *PVEC_tree_heap;

struct VEC_tree_heap {
    struct VEC_tree_base base;
};

struct c_struct_parse_info {
    struct VEC_tree_heap * struct_types;
    struct VEC_c_binding_ptr_heap * fields;
    struct VEC_tree_heap * typedefs_seen;
};

typedef enum decl_context {
    NORMAL=0,
    FUNCDEF=1,
    PARM=2,
    FIELD=3,
    TYPENAME=4
} decl_context;

typedef enum deprecated_states {
    DEPRECATED_NORMAL=0,
    DEPRECATED_SUPPRESS=1
} deprecated_states;

typedef union lang_tree_node lang_tree_node, *Plang_tree_node;

typedef struct lang_identifier lang_identifier, *Plang_identifier;

typedef struct c_common_identifier c_common_identifier, *Pc_common_identifier;

typedef struct cpp_hashnode cpp_hashnode, *Pcpp_hashnode;

typedef union _cpp_hashnode_value _cpp_hashnode_value, *P_cpp_hashnode_value;

typedef struct cpp_macro cpp_macro, *Pcpp_macro;

typedef enum cpp_builtin_type {
    BT_SPECLINE=0,
    BT_DATE=1,
    BT_FILE=2,
    BT_BASE_FILE=3,
    BT_INCLUDE_LEVEL=4,
    BT_TIME=5,
    BT_STDC=6,
    BT_PRAGMA=7,
    BT_TIMESTAMP=8,
    BT_COUNTER=9
} cpp_builtin_type;

union _cpp_hashnode_value {
    struct cpp_macro * macro;
    struct answer * answers;
    enum cpp_builtin_type builtin;
    ushort arg_index;
};

struct cpp_hashnode {
    struct ht_identifier ident;
    uint is_directive:1;
    uint directive_index:7;
    uchar rid_code;
    uint type:6;
    uint flags:10;
    undefined field6_0x14;
    undefined field7_0x15;
    undefined field8_0x16;
    undefined field9_0x17;
    union _cpp_hashnode_value value;
};

struct c_common_identifier {
    struct tree_common common;
    struct cpp_hashnode node;
};

struct lang_identifier {
    struct c_common_identifier common_id;
    struct c_binding * symbol_binding;
    struct c_binding * tag_binding;
    struct c_binding * label_binding;
};

union lang_tree_node {
    union tree_node generic;
    struct lang_identifier identifier;
};

struct cpp_macro {
};

typedef struct c_inline_static c_inline_static, *Pc_inline_static;

typedef enum c_inline_static_type {
    csi_internal=0,
    csi_modifiable=1
} c_inline_static_type;

struct c_inline_static {
    location_t location;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    tree function;
    tree static_decl;
    enum c_inline_static_type type;
    undefined field8_0x1c;
    undefined field9_0x1d;
    undefined field10_0x1e;
    undefined field11_0x1f;
    struct c_inline_static * next;
};

typedef void * (* line_map_realloc)(void *, size_t);

typedef struct line_maps line_maps, *Pline_maps;

struct line_maps {
    struct line_map * maps;
    uint allocated;
    uint used;
    uint cache;
    int last_listed;
    uint depth;
    uchar trace_includes;
    undefined field7_0x1d;
    undefined field8_0x1e;
    undefined field9_0x1f;
    source_location highest_location;
    source_location highest_line;
    uint max_column_hint;
    undefined field13_0x2c;
    undefined field14_0x2d;
    undefined field15_0x2e;
    undefined field16_0x2f;
    line_map_realloc reallocator;
};

typedef bitmap regset;

typedef struct VEC_edge_heap VEC_edge_heap, *PVEC_edge_heap;

struct VEC_edge_heap {
    struct VEC_edge_base base;
};

typedef enum anon_enum_32.conflict3a7 {
    _sch_isupper=-128,
    _sch_isalpha=-120,
    _sch_isalnum=-116,
    _sch_isgraph=-84,
    NTV_MACRO=0,
    NTV_ANSWER=1,
    _sch_isblank=1,
    NTV_BUILTIN=2,
    _sch_iscntrl=2,
    NTV_ARGUMENT=3,
    NTV_NONE=4,
    _sch_isdigit=4,
    _sch_islower=8,
    _sch_isprint=16,
    _sch_ispunct=32,
    _sch_isspace=64,
    _sch_isxdigit=256,
    _sch_isidst=512,
    _sch_isidnum=516,
    _sch_isvsp=1024,
    _sch_isnvsp=2048,
    _sch_iscppsp=3072,
    _sch_isbasic=3088
} anon_enum_32.conflict3a7;

typedef long ptrdiff_t;

typedef enum br_predictor {
    PRED_COMBINED=0,
    PRED_DS_THEORY=1,
    PRED_FIRST_MATCH=2,
    PRED_NO_PREDICTION=3,
    PRED_UNCONDITIONAL=4,
    PRED_LOOP_ITERATIONS=5,
    PRED_BUILTIN_EXPECT=6,
    PRED_LOOP_ITERATIONS_GUESSED=7,
    PRED_CONTINUE=8,
    PRED_NORETURN=9,
    PRED_COLD_FUNCTION=10,
    PRED_LOOP_BRANCH=11,
    PRED_LOOP_EXIT=12,
    PRED_POINTER=13,
    PRED_TREE_POINTER=14,
    PRED_OPCODE_POSITIVE=15,
    PRED_OPCODE_NONEQUAL=16,
    PRED_FPOPCODE=17,
    PRED_TREE_OPCODE_POSITIVE=18,
    PRED_TREE_OPCODE_NONEQUAL=19,
    PRED_TREE_FPOPCODE=20,
    PRED_CALL=21,
    PRED_TREE_EARLY_RETURN=22,
    PRED_GOTO=23,
    PRED_CONST_RETURN=24,
    PRED_NEGATIVE_RETURN=25,
    PRED_NULL_RETURN=26,
    PRED_MUDFLAP=27,
    END_PREDICTORS=28
} br_predictor;

typedef enum c_declarator_kind {
    cdk_id=0,
    cdk_function=1,
    cdk_array=2,
    cdk_pointer=3,
    cdk_attrs=4
} c_declarator_kind;

typedef enum c_storage_class {
    csc_none=0,
    csc_auto=1,
    csc_extern=2,
    csc_register=3,
    csc_static=4,
    csc_typedef=5
} c_storage_class;

typedef struct c_declarator c_declarator, *Pc_declarator;

typedef union anon_union_32_5_6f866347_for_u anon_union_32_5_6f866347_for_u, *Panon_union_32_5_6f866347_for_u;

typedef struct anon_struct_32_5_257492c0_for_array anon_struct_32_5_257492c0_for_array, *Panon_struct_32_5_257492c0_for_array;

struct anon_struct_32_5_257492c0_for_array {
    tree dimen;
    int quals;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    tree attrs;
    uint static_p:1;
    uint vla_unspec_p:1;
    undefined field9_0x19;
    undefined field10_0x1a;
    undefined field11_0x1b;
    undefined field12_0x1c;
    undefined field13_0x1d;
    undefined field14_0x1e;
    undefined field15_0x1f;
};

union anon_union_32_5_6f866347_for_u {
    tree id;
    struct c_arg_info * arg_info;
    struct anon_struct_32_5_257492c0_for_array array;
    int pointer_quals;
    tree attrs;
};

struct c_declarator {
    enum c_declarator_kind kind;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    struct c_declarator * declarator;
    location_t id_loc;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
    union anon_union_32_5_6f866347_for_u u;
};

typedef struct c_type_name c_type_name, *Pc_type_name;

typedef struct c_declspecs c_declspecs, *Pc_declspecs;

typedef enum c_typespec_keyword {
    cts_none=0,
    cts_void=1,
    cts_bool=2,
    cts_char=3,
    cts_int=4,
    cts_float=5,
    cts_double=6,
    cts_dfloat32=7,
    cts_dfloat64=8,
    cts_dfloat128=9,
    cts_fract=10,
    cts_accum=11
} c_typespec_keyword;

typedef uchar addr_space_t;

struct c_type_name {
    struct c_declspecs * specs;
    struct c_declarator * declarator;
};

struct c_declspecs {
    tree type;
    tree expr;
    tree decl_attr;
    tree attrs;
    enum c_typespec_keyword typespec_word;
    enum c_storage_class storage_class;
    uint expr_const_operands:1;
    uint declspecs_seen_p:1;
    uint type_seen_p:1;
    uint non_sc_seen_p:1;
    uint typedef_p:1;
    uint tag_defined_p:1;
    uint explicit_signed_p:1;
    uint deprecated_p:1;
    undefined field14_0x29;
    undefined field15_0x2a;
    undefined field16_0x2b;
    uint default_int_p;
    uint long_p:1;
    uint long_long_p:1;
    uint short_p:1;
    uint signed_p:1;
    uint unsigned_p:1;
    uint complex_p:1;
    uint inline_p:1;
    uint thread_p:1;
    uint const_p:1;
    uint volatile_p:1;
    uint restrict_p:1;
    uint saturating_p:1;
    addr_space_t address_space;
    undefined field31_0x33;
    undefined field32_0x34;
    undefined field33_0x35;
    undefined field34_0x36;
    undefined field35_0x37;
};

typedef struct c_enum_contents c_enum_contents, *Pc_enum_contents;

struct c_enum_contents {
    tree enum_next_value;
    int enum_overflow;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

typedef struct c_parm c_parm, *Pc_parm;

struct c_parm {
    struct c_declspecs * specs;
    tree attrs;
    struct c_declarator * declarator;
};

typedef struct c_typespec c_typespec, *Pc_typespec;

typedef enum c_typespec_kind {
    ctsk_resword=0,
    ctsk_tagref=1,
    ctsk_tagfirstref=2,
    ctsk_tagdef=3,
    ctsk_typedef=4,
    ctsk_objc=5,
    ctsk_typeof=6
} c_typespec_kind;

struct c_typespec {
    enum c_typespec_kind kind;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    tree spec;
    tree expr;
    uchar expr_const_operands;
    undefined field8_0x19;
    undefined field9_0x1a;
    undefined field10_0x1b;
    undefined field11_0x1c;
    undefined field12_0x1d;
    undefined field13_0x1e;
    undefined field14_0x1f;
};

typedef struct cfg_hooks cfg_hooks, *Pcfg_hooks;

typedef struct edge_def * const_edge;

typedef struct basic_block_def * const_basic_block;

struct cfg_hooks {
    char * name;
    int (* verify_flow_info)(void);
    void (* dump_bb)(basic_block, FILE *, int, int);
    basic_block (* create_basic_block)(void *, void *, basic_block);
    edge (* redirect_edge_and_branch)(edge, basic_block);
    basic_block (* redirect_edge_and_branch_force)(edge, basic_block);
    uchar (* can_remove_branch_p)(const_edge);
    void (* delete_basic_block)(basic_block);
    basic_block (* split_block)(basic_block, void *);
    uchar (* move_block_after)(basic_block, basic_block);
    uchar (* can_merge_blocks_p)(basic_block, basic_block);
    void (* merge_blocks)(basic_block, basic_block);
    void (* predict_edge)(edge, enum br_predictor, int);
    uchar (* predicted_by_p)(const_basic_block, enum br_predictor);
    uchar (* can_duplicate_block_p)(const_basic_block);
    basic_block (* duplicate_block)(basic_block);
    basic_block (* split_edge)(edge);
    void (* make_forwarder_block)(edge);
    void (* tidy_fallthru_edge)(edge);
    uchar (* block_ends_with_call_p)(basic_block);
    uchar (* block_ends_with_condjump_p)(const_basic_block);
    int (* flow_call_edges_add)(sbitmap);
    void (* execute_on_growing_pred)(edge);
    void (* execute_on_shrinking_pred)(edge);
    uchar (* cfg_hook_duplicate_loop_to_header_edge)(struct loop *, edge, uint, sbitmap, edge, struct VEC_edge_heap * *, int);
    void (* lv_add_condition_to_bb)(basic_block, basic_block, basic_block, void *);
    void (* lv_adjust_loop_header_phi)(basic_block, basic_block, basic_block, edge);
    void (* extract_cond_bb_edges)(basic_block, edge *, edge *);
    void (* flush_pending_stmts)(edge);
};

typedef struct c_common_resword c_common_resword, *Pc_common_resword;

struct c_common_resword {
    char * word;
    uint rid:16;
    uint disable:16;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
};

typedef struct stmt_tree_s * stmt_tree;

typedef enum rid {
    RID_AT_SELECTOR=-128,
    RID_AT_THROW=-127,
    RID_AT_TRY=-126,
    RID_AT_CATCH=-125,
    RID_AT_FINALLY=-124,
    RID_AT_SYNCHRONIZED=-123,
    RID_AT_INTERFACE=-122,
    RID_AT_IMPLEMENTATION=-121,
    RID_LAST_AT=-121,
    RID_ADDR_SPACE_0=-120,
    RID_FIRST_ADDR_SPACE=-120,
    RID_ADDR_SPACE_1=-119,
    RID_ADDR_SPACE_2=-118,
    RID_ADDR_SPACE_3=-117,
    RID_ADDR_SPACE_4=-116,
    RID_ADDR_SPACE_5=-115,
    RID_ADDR_SPACE_6=-114,
    RID_ADDR_SPACE_7=-113,
    RID_ADDR_SPACE_8=-112,
    RID_ADDR_SPACE_9=-111,
    RID_ADDR_SPACE_10=-110,
    RID_ADDR_SPACE_11=-109,
    RID_ADDR_SPACE_12=-108,
    RID_ADDR_SPACE_13=-107,
    RID_ADDR_SPACE_14=-106,
    RID_ADDR_SPACE_15=-105,
    RID_LAST_ADDR_SPACE=-105,
    RID_MAX=-104,
    RID_FIRST_MODIFIER=0,
    RID_STATIC=0,
    RID_UNSIGNED=1,
    RID_LONG=2,
    RID_CONST=3,
    RID_EXTERN=4,
    RID_REGISTER=5,
    RID_TYPEDEF=6,
    RID_SHORT=7,
    RID_INLINE=8,
    RID_VOLATILE=9,
    RID_SIGNED=10,
    RID_AUTO=11,
    RID_RESTRICT=12,
    RID_COMPLEX=13,
    RID_THREAD=14,
    RID_SAT=15,
    RID_FRIEND=16,
    RID_VIRTUAL=17,
    RID_EXPLICIT=18,
    RID_EXPORT=19,
    RID_MUTABLE=20,
    RID_FIRST_PQ=21,
    RID_IN=21,
    RID_OUT=22,
    RID_INOUT=23,
    RID_BYCOPY=24,
    RID_BYREF=25,
    RID_LAST_MODIFIER=26,
    RID_LAST_PQ=26,
    RID_ONEWAY=26,
    RID_IMAGINARY=27,
    RID_INT=28,
    RID_CHAR=29,
    RID_FLOAT=30,
    RID_DOUBLE=31,
    RID_VOID=32,
    RID_ENUM=33,
    RID_STRUCT=34,
    RID_UNION=35,
    RID_IF=36,
    RID_ELSE=37,
    RID_WHILE=38,
    RID_DO=39,
    RID_FOR=40,
    RID_SWITCH=41,
    RID_CASE=42,
    RID_DEFAULT=43,
    RID_BREAK=44,
    RID_CONTINUE=45,
    RID_RETURN=46,
    RID_GOTO=47,
    RID_SIZEOF=48,
    RID_ASM=49,
    RID_TYPEOF=50,
    RID_ALIGNOF=51,
    RID_ATTRIBUTE=52,
    RID_VA_ARG=53,
    RID_EXTENSION=54,
    RID_IMAGPART=55,
    RID_REALPART=56,
    RID_LABEL=57,
    RID_CHOOSE_EXPR=58,
    RID_TYPES_COMPATIBLE_P=59,
    RID_DFLOAT32=60,
    RID_DFLOAT64=61,
    RID_DFLOAT128=62,
    RID_FRACT=63,
    RID_ACCUM=64,
    RID_CXX_COMPAT_WARN=65,
    RID_FUNCTION_NAME=66,
    RID_PRETTY_FUNCTION_NAME=67,
    RID_C99_FUNCTION_NAME=68,
    RID_BOOL=69,
    RID_WCHAR=70,
    RID_CLASS=71,
    RID_PUBLIC=72,
    RID_PRIVATE=73,
    RID_PROTECTED=74,
    RID_TEMPLATE=75,
    RID_NULL=76,
    RID_CATCH=77,
    RID_DELETE=78,
    RID_FALSE=79,
    RID_NAMESPACE=80,
    RID_NEW=81,
    RID_OFFSETOF=82,
    RID_OPERATOR=83,
    RID_THIS=84,
    RID_THROW=85,
    RID_TRUE=86,
    RID_TRY=87,
    RID_TYPENAME=88,
    RID_TYPEID=89,
    RID_USING=90,
    RID_CHAR16=91,
    RID_CHAR32=92,
    RID_CONSTCAST=93,
    RID_DYNCAST=94,
    RID_REINTCAST=95,
    RID_STATCAST=96,
    RID_HAS_NOTHROW_ASSIGN=97,
    RID_HAS_NOTHROW_CONSTRUCTOR=98,
    RID_HAS_NOTHROW_COPY=99,
    RID_HAS_TRIVIAL_ASSIGN=100,
    RID_HAS_TRIVIAL_CONSTRUCTOR=101,
    RID_HAS_TRIVIAL_COPY=102,
    RID_HAS_TRIVIAL_DESTRUCTOR=103,
    RID_HAS_VIRTUAL_DESTRUCTOR=104,
    RID_IS_ABSTRACT=105,
    RID_IS_BASE_OF=106,
    RID_IS_CONVERTIBLE_TO=107,
    RID_IS_CLASS=108,
    RID_IS_EMPTY=109,
    RID_IS_ENUM=110,
    RID_IS_POD=111,
    RID_IS_POLYMORPHIC=112,
    RID_IS_STD_LAYOUT=113,
    RID_IS_TRIVIAL=114,
    RID_IS_UNION=115,
    RID_FIRST_CXX0X=116,
    RID_STATIC_ASSERT=116,
    RID_CONSTEXPR=117,
    RID_DECLTYPE=118,
    RID_LAST_CXX0X=118,
    RID_AT_ENCODE=119,
    RID_FIRST_AT=119,
    RID_AT_END=120,
    RID_AT_CLASS=121,
    RID_AT_ALIAS=122,
    RID_AT_DEFS=123,
    RID_AT_PRIVATE=124,
    RID_AT_PROTECTED=125,
    RID_AT_PUBLIC=126,
    RID_AT_PROTOCOL=127
} rid;

typedef enum cxx_dialect {
    cxx98=0,
    cxx0x=1
} cxx_dialect;

typedef enum c_language_kind {
    clk_c=0,
    clk_objc=1,
    clk_cxx=2,
    clk_objcxx=3
} c_language_kind;

typedef enum c_tree_index {
    CTI_CHAR16_TYPE=0,
    CTI_CHAR32_TYPE=1,
    CTI_WCHAR_TYPE=2,
    CTI_UNDERLYING_WCHAR_TYPE=3,
    CTI_WINT_TYPE=4,
    CTI_SIGNED_SIZE_TYPE=5,
    CTI_UNSIGNED_PTRDIFF_TYPE=6,
    CTI_INTMAX_TYPE=7,
    CTI_UINTMAX_TYPE=8,
    CTI_WIDEST_INT_LIT_TYPE=9,
    CTI_WIDEST_UINT_LIT_TYPE=10,
    CTI_SIG_ATOMIC_TYPE=11,
    CTI_INT8_TYPE=12,
    CTI_INT16_TYPE=13,
    CTI_INT32_TYPE=14,
    CTI_INT64_TYPE=15,
    CTI_UINT8_TYPE=16,
    CTI_UINT16_TYPE=17,
    CTI_UINT32_TYPE=18,
    CTI_UINT64_TYPE=19,
    CTI_INT_LEAST8_TYPE=20,
    CTI_INT_LEAST16_TYPE=21,
    CTI_INT_LEAST32_TYPE=22,
    CTI_INT_LEAST64_TYPE=23,
    CTI_UINT_LEAST8_TYPE=24,
    CTI_UINT_LEAST16_TYPE=25,
    CTI_UINT_LEAST32_TYPE=26,
    CTI_UINT_LEAST64_TYPE=27,
    CTI_INT_FAST8_TYPE=28,
    CTI_INT_FAST16_TYPE=29,
    CTI_INT_FAST32_TYPE=30,
    CTI_INT_FAST64_TYPE=31,
    CTI_UINT_FAST8_TYPE=32,
    CTI_UINT_FAST16_TYPE=33,
    CTI_UINT_FAST32_TYPE=34,
    CTI_UINT_FAST64_TYPE=35,
    CTI_INTPTR_TYPE=36,
    CTI_UINTPTR_TYPE=37,
    CTI_CHAR_ARRAY_TYPE=38,
    CTI_CHAR16_ARRAY_TYPE=39,
    CTI_CHAR32_ARRAY_TYPE=40,
    CTI_WCHAR_ARRAY_TYPE=41,
    CTI_INT_ARRAY_TYPE=42,
    CTI_STRING_TYPE=43,
    CTI_CONST_STRING_TYPE=44,
    CTI_TRUTHVALUE_TYPE=45,
    CTI_TRUTHVALUE_TRUE=46,
    CTI_TRUTHVALUE_FALSE=47,
    CTI_DEFAULT_FUNCTION_TYPE=48,
    CTI_FUNCTION_NAME_DECL=49,
    CTI_PRETTY_FUNCTION_NAME_DECL=50,
    CTI_C99_FUNCTION_NAME_DECL=51,
    CTI_SAVED_FUNCTION_NAME_DECLS=52,
    CTI_VOID_ZERO=53,
    CTI_NULL=54,
    CTI_MAX=55
} c_tree_index;

typedef enum debug_info_level {
    DINFO_LEVEL_NONE=0,
    DINFO_LEVEL_TERSE=1,
    DINFO_LEVEL_NORMAL=2,
    DINFO_LEVEL_VERBOSE=3
} debug_info_level;

typedef enum debug_info_type {
    NO_DEBUG=0,
    DBX_DEBUG=1,
    SDB_DEBUG=2,
    DWARF2_DEBUG=3,
    XCOFF_DEBUG=4,
    VMS_DEBUG=5,
    VMS_AND_DWARF2_DEBUG=6
} debug_info_type;

typedef enum excess_precision {
    EXCESS_PRECISION_DEFAULT=0,
    EXCESS_PRECISION_FAST=1,
    EXCESS_PRECISION_STANDARD=2
} excess_precision;

typedef struct visibility_flags visibility_flags, *Pvisibility_flags;

struct visibility_flags {
    uint inpragma:1;
    uint inlines_hidden:1;
    undefined field2_0x1;
    undefined field3_0x2;
    undefined field4_0x3;
};

typedef enum ira_region {
    IRA_REGION_ONE=0,
    IRA_REGION_ALL=1,
    IRA_REGION_MIXED=2
} ira_region;

typedef enum stack_check_type {
    NO_STACK_CHECK=0,
    GENERIC_STACK_CHECK=1,
    STATIC_BUILTIN_STACK_CHECK=2,
    FULL_BUILTIN_STACK_CHECK=3
} stack_check_type;

typedef enum ira_algorithm {
    IRA_ALGORITHM_CB=0,
    IRA_ALGORITHM_PRIORITY=1
} ira_algorithm;

typedef enum graph_dump_types {
    no_graph=0,
    vcg=1
} graph_dump_types;

typedef struct cgraph_asm_node cgraph_asm_node, *Pcgraph_asm_node;

struct cgraph_asm_node {
    struct cgraph_asm_node * next;
    tree asm_str;
    int order;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
};

typedef enum cgraph_state {
    CGRAPH_STATE_CONSTRUCTION=0,
    CGRAPH_STATE_IPA=1,
    CGRAPH_STATE_IPA_SSA=2,
    CGRAPH_STATE_EXPANSION=3,
    CGRAPH_STATE_FINISHED=4
} cgraph_state;

typedef enum LTO_cgraph_tags {
    LTO_cgraph_avail_node=1,
    LTO_cgraph_overwritable_node=2,
    LTO_cgraph_unavail_node=3,
    LTO_cgraph_edge=4,
    LTO_cgraph_last_tag=5
} LTO_cgraph_tags;

typedef enum cl_var_type {
    CLVC_BOOLEAN=0,
    CLVC_EQUAL=1,
    CLVC_BIT_CLEAR=2,
    CLVC_BIT_SET=3,
    CLVC_STRING=4
} cl_var_type;

typedef struct cl_option cl_option, *Pcl_option;

struct cl_option {
    char * opt_text;
    char * help;
    ushort back_chain;
    uchar opt_len;
    undefined field4_0x13;
    int neg_index;
    uint flags;
    undefined field7_0x1c;
    undefined field8_0x1d;
    undefined field9_0x1e;
    undefined field10_0x1f;
    void * flag_var;
    enum cl_var_type var_type;
    int var_value;
};

typedef ulong HARD_REG_ELT_TYPE;

typedef enum gimple_statement_structure_enum {
    GSS_BASE=0,
    GSS_WITH_OPS=1,
    GSS_WITH_MEM_OPS_BASE=2,
    GSS_WITH_MEM_OPS=3,
    GSS_ASM=4,
    GSS_BIND=5,
    GSS_PHI=6,
    GSS_TRY=7,
    GSS_CATCH=8,
    GSS_EH_FILTER=9,
    GSS_EH_MNT=10,
    GSS_EH_CTRL=11,
    GSS_WCE=12,
    GSS_OMP=13,
    GSS_OMP_CRITICAL=14,
    GSS_OMP_FOR=15,
    GSS_OMP_PARALLEL=16,
    GSS_OMP_TASK=17,
    GSS_OMP_SECTIONS=18,
    GSS_OMP_SINGLE=19,
    GSS_OMP_CONTINUE=20,
    GSS_OMP_ATOMIC_LOAD=21,
    GSS_OMP_ATOMIC_STORE=22,
    LAST_GSS_ENUM=23
} gimple_statement_structure_enum;

typedef struct real_format real_format, *Preal_format;

struct real_format {
    void (* encode)(struct real_format *, long *, struct real_value *);
    void (* decode)(struct real_format *, struct real_value *, long *);
    int b;
    int p;
    int pnan;
    int emin;
    int emax;
    int signbit_ro;
    int signbit_rw;
    uchar round_towards_zero;
    uchar has_sign_dependent_rounding;
    uchar has_nans;
    uchar has_inf;
    uchar has_denorm;
    uchar has_signed_zero;
    uchar qnan_msb_set;
    uchar canonical_nan_lsbs_set;
    undefined field17_0x34;
    undefined field18_0x35;
    undefined field19_0x36;
    undefined field20_0x37;
};

typedef struct ht_identifier * hashnode;

typedef struct ht ht, *Pht;

typedef struct ht hash_table;

struct ht {
    struct obstack stack;
    hashnode * entries;
    hashnode (* alloc_node)(hash_table *);
    void * (* alloc_subobject)(size_t);
    uint nslots;
    uint nelements;
    struct cpp_reader * pfile;
    uint searches;
    uint collisions;
    uchar entries_owned;
    undefined field10_0x89;
    undefined field11_0x8a;
    undefined field12_0x8b;
    undefined field13_0x8c;
    undefined field14_0x8d;
    undefined field15_0x8e;
    undefined field16_0x8f;
};

typedef struct cxx cxx, *Pcxx;

struct cxx {
    tree (* guard_type)(void);
    uchar (* guard_mask_bit)(void);
    tree (* get_cookie_size)(tree);
    uchar (* cookie_has_size)(void);
    int (* import_export_class)(tree, int);
    uchar (* cdtor_returns_this)(void);
    uchar (* key_method_may_be_inline)(void);
    void (* determine_class_data_visibility)(tree);
    uchar (* class_data_always_comdat)(void);
    uchar (* library_rtti_comdat)(void);
    uchar (* use_aeabi_atexit)(void);
    uchar (* use_atexit_for_cxa_atexit)(void);
    void (* adjust_class_at_definition)(tree);
};

typedef struct c c, *Pc;

struct c {
    machine_mode (* mode_for_suffix)(char);
};

typedef struct secondary_reload_info secondary_reload_info, *Psecondary_reload_info;

struct secondary_reload_info {
    int icode;
    int extra_cost;
    struct secondary_reload_info * prev_sri;
    int t_icode;
    undefined field4_0x14;
    undefined field5_0x15;
    undefined field6_0x16;
    undefined field7_0x17;
};

typedef struct asm_int_op asm_int_op, *Pasm_int_op;

struct asm_int_op {
    char * hi;
    char * si;
    char * di;
    char * ti;
};

typedef struct addr_space addr_space, *Paddr_space;

struct addr_space {
    machine_mode (* pointer_mode)(addr_space_t);
    machine_mode (* address_mode)(addr_space_t);
    uchar (* valid_pointer_mode)(enum machine_mode, addr_space_t);
    uchar (* legitimate_address_p)(enum machine_mode, rtx, uchar, addr_space_t);
    rtx (* legitimize_address)(rtx, rtx, enum machine_mode, addr_space_t);
    uchar (* subset_p)(addr_space_t, addr_space_t);
    rtx (* convert)(rtx, tree, tree);
};

typedef enum print_switch_type {
    SWITCH_TYPE_PASSED=0,
    SWITCH_TYPE_ENABLED=1,
    SWITCH_TYPE_DESCRIPTIVE=2,
    SWITCH_TYPE_LINE_START=3,
    SWITCH_TYPE_LINE_END=4
} print_switch_type;

typedef int (* print_switch_fn_type)(enum print_switch_type, char *);

typedef struct asm_out asm_out, *Pasm_out;

typedef union tree_node * const_tree;

struct asm_out {
    char * open_paren;
    char * close_paren;
    char * byte_op;
    struct asm_int_op aligned_op;
    struct asm_int_op unaligned_op;
    uchar (* integer)(rtx, uint, int);
    void (* globalize_label)(FILE *, char *);
    void (* globalize_decl_name)(FILE *, tree);
    void (* unwind_label)(FILE *, tree, int, int);
    void (* except_table_label)(FILE *);
    void (* unwind_emit)(FILE *, rtx);
    void (* internal_label)(FILE *, char *, ulong);
    uchar (* ttype)(rtx);
    void (* visibility)(tree, int);
    void (* function_prologue)(FILE *, long);
    void (* function_end_prologue)(FILE *);
    void (* function_begin_epilogue)(FILE *);
    void (* function_epilogue)(FILE *, long);
    void (* init_sections)(void);
    void (* named_section)(char *, uint, tree);
    int (* reloc_rw_mask)(void);
    section * (* select_section)(tree, int, ulong);
    section * (* select_rtx_section)(enum machine_mode, rtx, ulong);
    void (* unique_section)(tree, int);
    section * (* function_rodata_section)(tree);
    void (* constructor)(rtx, int);
    void (* destructor)(rtx, int);
    void (* output_mi_thunk)(FILE *, tree, long, long, tree);
    uchar (* can_output_mi_thunk)(const_tree, long, long, const_tree);
    void (* file_start)(void);
    void (* file_end)(void);
    void (* code_end)(void);
    void (* external_libcall)(rtx);
    void (* mark_decl_preserved)(char *);
    print_switch_fn_type record_gcc_switches;
    char * record_gcc_switches_section;
    void (* output_anchor)(rtx);
    void (* output_dwarf_dtprel)(FILE *, int, rtx);
    void (* final_postscan_insn)(FILE *, rtx, rtx *, int);
    void (* trampoline_template)(FILE *);
};

typedef struct gcc_targetcm gcc_targetcm, *Pgcc_targetcm;

struct gcc_targetcm {
    uchar (* handle_c_option)(size_t, char *, int);
};

typedef struct gcc_target gcc_target, *Pgcc_target;

typedef enum reg_class {
    NO_REGS=0,
    AREG=1,
    DREG=2,
    CREG=3,
    BREG=4,
    SIREG=5,
    DIREG=6,
    AD_REGS=7,
    CLOBBERED_REGS=8,
    Q_REGS=9,
    NON_Q_REGS=10,
    INDEX_REGS=11,
    LEGACY_REGS=12,
    GENERAL_REGS=13,
    FP_TOP_REG=14,
    FP_SECOND_REG=15,
    FLOAT_REGS=16,
    SSE_FIRST_REG=17,
    SSE_REGS=18,
    MMX_REGS=19,
    FP_TOP_SSE_REGS=20,
    FP_SECOND_SSE_REGS=21,
    FLOAT_SSE_REGS=22,
    FLOAT_INT_REGS=23,
    INT_SSE_REGS=24,
    FLOAT_INT_SSE_REGS=25,
    ALL_REGS=26,
    LIM_REG_CLASSES=27
} reg_class;

typedef union gimple_statement_d * const_gimple;

typedef struct sched sched, *Psched;

typedef struct vectorize vectorize, *Pvectorize;

typedef struct attribute_spec attribute_spec, *Pattribute_spec;

typedef struct calls calls, *Pcalls;

typedef struct emutls emutls, *Pemutls;

typedef struct target_option_hooks target_option_hooks, *Ptarget_option_hooks;

struct sched {
    int (* adjust_cost)(rtx, rtx, rtx, int);
    int (* adjust_priority)(rtx, int);
    int (* issue_rate)(void);
    int (* variable_issue)(FILE *, int, rtx, int);
    void (* md_init)(FILE *, int, int);
    void (* md_finish)(FILE *, int);
    void (* md_init_global)(FILE *, int, int);
    void (* md_finish_global)(FILE *, int);
    int (* reorder)(FILE *, int, rtx *, int *, int);
    int (* reorder2)(FILE *, int, rtx *, int *, int);
    void (* dependencies_evaluation_hook)(rtx, rtx);
    void (* init_dfa_pre_cycle_insn)(void);
    rtx (* dfa_pre_cycle_insn)(void);
    void (* init_dfa_post_cycle_insn)(void);
    rtx (* dfa_post_cycle_insn)(void);
    void (* dfa_pre_advance_cycle)(void);
    void (* dfa_post_advance_cycle)(void);
    int (* first_cycle_multipass_dfa_lookahead)(void);
    int (* first_cycle_multipass_dfa_lookahead_guard)(rtx);
    int (* dfa_new_cycle)(FILE *, int, rtx, int, int, int *);
    uchar (* is_costly_dependence)(struct _dep *, int, int);
    int (* adjust_cost_2)(rtx, int, rtx, int, int);
    void (* h_i_d_extended)(void);
    void * (* alloc_sched_context)(void);
    void (* init_sched_context)(void *, uchar);
    void (* set_sched_context)(void *);
    void (* clear_sched_context)(void *);
    void (* free_sched_context)(void *);
    int (* speculate_insn)(rtx, int, rtx *);
    uchar (* needs_block_p)(int);
    rtx (* gen_spec_check)(rtx, rtx, int);
    uchar (* first_cycle_multipass_dfa_lookahead_guard_spec)(const_rtx);
    void (* set_sched_flags)(struct spec_info_def *);
    int (* get_insn_spec_ds)(rtx);
    int (* get_insn_checked_ds)(rtx);
    uchar (* skip_rtx_p)(const_rtx);
    int (* sms_res_mii)(struct ddg *);
};

struct attribute_spec {
    char * name;
    int min_length;
    int max_length;
    uchar decl_required;
    uchar type_required;
    uchar function_type_required;
    undefined field6_0x13;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
    tree (* handler)(tree *, tree, tree, int, uchar *);
};

struct calls {
    machine_mode (* promote_function_mode)(const_tree, enum machine_mode, int *, const_tree, int);
    uchar (* promote_prototypes)(const_tree);
    rtx (* struct_value_rtx)(tree, int);
    uchar (* return_in_memory)(const_tree, const_tree);
    uchar (* return_in_msb)(const_tree);
    uchar (* pass_by_reference)(CUMULATIVE_ARGS *, enum machine_mode, const_tree, uchar);
    rtx (* expand_builtin_saveregs)(void);
    void (* setup_incoming_varargs)(CUMULATIVE_ARGS *, enum machine_mode, tree, int *, int);
    uchar (* strict_argument_naming)(CUMULATIVE_ARGS *);
    uchar (* pretend_outgoing_varargs_named)(CUMULATIVE_ARGS *);
    uchar (* split_complex_arg)(const_tree);
    uchar (* must_pass_in_stack)(enum machine_mode, const_tree);
    uchar (* callee_copies)(CUMULATIVE_ARGS *, enum machine_mode, const_tree, uchar);
    int (* arg_partial_bytes)(CUMULATIVE_ARGS *, enum machine_mode, tree, uchar);
    char * (* invalid_arg_for_unprototyped_fn)(const_tree, const_tree, const_tree);
    rtx (* function_value)(const_tree, const_tree, uchar);
    rtx (* libcall_value)(enum machine_mode, const_rtx);
    rtx (* internal_arg_pointer)(void);
    void (* update_stack_boundary)(void);
    rtx (* get_drap_rtx)(void);
    uchar (* allocate_stack_slots_for_args)(void);
    rtx (* static_chain)(const_tree, uchar);
    void (* trampoline_init)(rtx, tree, rtx);
    rtx (* trampoline_adjust_address)(rtx);
};

struct emutls {
    char * get_address;
    char * register_common;
    char * var_section;
    char * tmpl_section;
    char * var_prefix;
    char * tmpl_prefix;
    tree (* var_fields)(tree, tree *);
    tree (* var_init)(tree, tree, tree);
    uchar var_align_fixed;
    uchar debug_form_tls_address;
    undefined field10_0x42;
    undefined field11_0x43;
    undefined field12_0x44;
    undefined field13_0x45;
    undefined field14_0x46;
    undefined field15_0x47;
};

struct vectorize {
    tree (* builtin_mask_for_load)(void);
    tree (* builtin_vectorized_function)(tree, tree, tree);
    tree (* builtin_conversion)(uint, tree);
    tree (* builtin_mul_widen_even)(tree);
    tree (* builtin_mul_widen_odd)(tree);
    int (* builtin_vectorization_cost)(uchar);
    uchar (* vector_alignment_reachable)(const_tree, uchar);
    tree (* builtin_vec_perm)(tree, tree *);
    uchar (* builtin_vec_perm_ok)(tree, tree);
    uchar (* builtin_support_vector_misalignment)(enum machine_mode, const_tree, int, uchar);
};

struct target_option_hooks {
    uchar (* valid_attribute_p)(tree, tree, tree, int);
    void (* save)(struct cl_target_option *);
    void (* restore)(struct cl_target_option *);
    void (* print)(FILE *, int, struct cl_target_option *);
    uchar (* pragma_parse)(tree, tree);
    uchar (* can_inline_p)(tree, tree);
};

struct gcc_target {
    struct asm_out asm_out;
    struct sched sched;
    struct vectorize vectorize;
    int default_target_flags;
    undefined field4_0x2ec;
    undefined field5_0x2ed;
    undefined field6_0x2ee;
    undefined field7_0x2ef;
    void (* override_options_after_change)(void);
    uchar (* handle_option)(size_t, char *, int);
    void (* target_help)(void);
    machine_mode (* eh_return_filter_mode)(void);
    machine_mode (* libgcc_cmp_return_mode)(void);
    machine_mode (* libgcc_shift_count_mode)(void);
    machine_mode (* unwind_word_mode)(void);
    tree (* merge_decl_attributes)(tree, tree);
    tree (* merge_type_attributes)(tree, tree);
    struct attribute_spec * attribute_table;
    int (* comp_type_attributes)(const_tree, const_tree);
    void (* set_default_type_attributes)(tree);
    void (* insert_attributes)(tree, tree *);
    uchar (* function_attribute_inlinable_p)(const_tree);
    uchar (* ms_bitfield_layout_p)(const_tree);
    uchar (* decimal_float_supported_p)(void);
    uchar (* fixed_point_supported_p)(void);
    uchar (* align_anon_bitfield)(void);
    uchar (* narrow_volatile_bitfield)(void);
    void (* init_builtins)(void);
    tree (* builtin_decl)(uint, uchar);
    rtx (* expand_builtin)(tree, rtx, rtx, enum machine_mode, int);
    tree (* resolve_overloaded_builtin)(uint, tree, void *);
    tree (* fold_builtin)(tree, tree, uchar);
    tree (* builtin_reciprocal)(uint, uchar, uchar);
    char * (* mangle_type)(const_tree);
    void (* init_libfuncs)(void);
    uint (* section_type_flags)(tree, char *, int);
    uchar (* cannot_modify_jumps_p)(void);
    reg_class (* branch_target_register_class)(void);
    uchar (* branch_target_register_callee_saved)(uchar);
    uchar (* have_conditional_execution)(void);
    uchar (* cannot_force_const_mem)(rtx);
    uchar (* cannot_copy_insn_p)(rtx);
    uchar (* commutative_p)(const_rtx, int);
    rtx (* legitimize_address)(rtx, rtx, enum machine_mode);
    rtx (* delegitimize_address)(rtx);
    uchar (* legitimate_address_p)(enum machine_mode, rtx, uchar);
    uchar (* use_blocks_for_constant_p)(enum machine_mode, const_rtx);
    long min_anchor_offset;
    long max_anchor_offset;
    uchar (* use_anchors_for_symbol_p)(const_rtx);
    uchar (* function_ok_for_sibcall)(tree, tree);
    void (* set_current_function)(tree);
    uchar (* in_small_data_p)(const_tree);
    uchar (* binds_local_p)(const_tree);
    tree (* mangle_decl_assembler_name)(tree, tree);
    void (* encode_section_info)(tree, rtx, int);
    char * (* strip_name_encoding)(char *);
    ulong (* shift_truncation_mask)(enum machine_mode);
    uint (* min_divisions_for_recip_mul)(enum machine_mode);
    int (* mode_rep_extended)(enum machine_mode, enum machine_mode);
    uchar (* valid_pointer_mode)(enum machine_mode);
    struct addr_space addr_space;
    uchar (* scalar_mode_supported_p)(enum machine_mode);
    uchar (* vector_mode_supported_p)(enum machine_mode);
    uchar (* rtx_costs)(rtx, int, int, int *, uchar);
    int (* address_cost)(rtx, uchar);
    rtx (* allocate_initial_value)(rtx);
    int (* unspec_may_trap_p)(const_rtx, uint);
    rtx (* dwarf_register_span)(rtx);
    void (* init_dwarf_reg_sizes_extra)(tree);
    uchar (* fixed_condition_code_regs)(uint *, uint *);
    machine_mode (* cc_modes_compatible)(enum machine_mode, enum machine_mode);
    void (* machine_dependent_reorg)(void);
    tree (* build_builtin_va_list)(void);
    tree (* fn_abi_va_list)(tree);
    tree (* canonical_va_list_type)(tree);
    void (* expand_builtin_va_start)(tree, rtx);
    tree (* gimplify_va_arg_expr)(tree, tree, gimple_seq *, gimple_seq *);
    void * (* get_pch_validity)(size_t *);
    char * (* pch_valid_p)(void *, size_t);
    char * (* check_pch_target_flags)(int);
    uchar (* default_short_enums)(void);
    rtx (* builtin_setjmp_frame_value)(void);
    tree (* md_asm_clobbers)(tree, tree, tree);
    int (* dwarf_calling_convention)(const_tree);
    void (* dwarf_handle_frame_unspec)(char *, rtx, int);
    uchar (* stdarg_optimize_hook)(struct stdarg_info *, const_gimple);
    tree (* stack_protect_guard)(void);
    tree (* stack_protect_fail)(void);
    char * (* invalid_within_doloop)(const_rtx);
    uchar (* valid_dllimport_attribute_p)(const_tree);
    ulong const_anchor;
    struct calls calls;
    char * (* invalid_conversion)(const_tree, const_tree);
    char * (* invalid_unary_op)(int, const_tree);
    char * (* invalid_binary_op)(int, const_tree, const_tree);
    char * (* invalid_parameter_type)(const_tree);
    char * (* invalid_return_type)(const_tree);
    tree (* promoted_type)(const_tree);
    tree (* convert_to_type)(tree, tree);
    reg_class * (* ira_cover_classes)(void);
    reg_class (* secondary_reload)(uchar, rtx, enum reg_class, enum machine_mode, struct secondary_reload_info *);
    void (* expand_to_rtl_hook)(void);
    void (* instantiate_decls)(void);
    uchar (* hard_regno_scratch_ok)(uint);
    uint (* case_values_threshold)(void);
    uchar (* frame_pointer_required)(void);
    uchar (* can_eliminate)(int, int);
    struct c c;
    struct cxx cxx;
    struct emutls emutls;
    struct target_option_hooks target_option;
    void (* live_on_entry)(bitmap);
    uchar unwind_tables_default;
    uchar have_named_sections;
    uchar have_switchable_bss_sections;
    uchar have_ctors_dtors;
    uchar have_tls;
    uchar have_srodata_section;
    uchar terminate_dw2_eh_frame_info;
    uchar file_start_app_off;
    uchar file_start_file_directive;
    uchar handle_pragma_extern_prefix;
    uchar relaxed_ordering;
    uchar arm_eabi_unwinder;
    undefined field125_0x7f4;
    undefined field126_0x7f5;
    undefined field127_0x7f6;
    undefined field128_0x7f7;
};

typedef void (* gt_pointer_walker)(void *);

typedef struct ggc_root_tab ggc_root_tab, *Pggc_root_tab;

struct ggc_root_tab {
    void * base;
    size_t nelt;
    size_t stride;
    gt_pointer_walker cb;
    gt_pointer_walker pchw;
};

typedef struct ggc_cache_tab ggc_cache_tab, *Pggc_cache_tab;

struct ggc_cache_tab {
    struct htab * * base;
    size_t nelt;
    size_t stride;
    gt_pointer_walker cb;
    gt_pointer_walker pchw;
    int (* marked_p)(void *);
};

typedef void (* gt_pointer_operator)(void *, void *);

typedef enum opt_code {
    OPT_Wmissing_braces=-128,
    OPT_Wmissing_declarations=-127,
    OPT_Wmissing_field_initializers=-126,
    OPT_Wmissing_format_attribute=-125,
    OPT_Wmissing_include_dirs=-124,
    OPT_Wmissing_noreturn=-123,
    OPT_Wmissing_parameter_type=-122,
    OPT_Wmissing_prototypes=-121,
    OPT_Wmudflap=-120,
    OPT_Wmultichar=-119,
    OPT_Wnested_externs=-118,
    OPT_Wnls=-117,
    OPT_Wno_effect_assign=-116,
    OPT_Wnon_template_friend=-115,
    OPT_Wnon_virtual_dtor=-114,
    OPT_Wnonnull=-113,
    OPT_Wnormalized_=-112,
    OPT_Wnull=-111,
    OPT_Wold_style_cast=-110,
    OPT_Wold_style_declaration=-109,
    OPT_Wold_style_definition=-108,
    OPT_Wout_of_date=-107,
    OPT_Wover_ann=-106,
    OPT_Woverflow=-105,
    OPT_Woverlength_strings=-104,
    OPT_Woverloaded_virtual=-103,
    OPT_Woverride_init=-102,
    OPT_Wpacked=-101,
    OPT_Wpacked_bitfield_compat=-100,
    OPT_Wpadded=-99,
    OPT_Wparam_assign=-98,
    OPT_Wparentheses=-97,
    OPT_Wpkg_default_method=-96,
    OPT_Wpmf_conversions=-95,
    OPT_Wpointer_arith=-94,
    OPT_Wpointer_sign=-93,
    OPT_Wpointer_to_int_cast=-92,
    OPT_Wpragmas=-91,
    OPT_Wprotocol=-90,
    OPT_Wpsabi=-89,
    OPT_Wraw=-88,
    OPT_Wredundant_decls=-87,
    OPT_Wredundant_modifiers=-86,
    OPT_Wreorder=-85,
    OPT_Wreturn_type=-84,
    OPT_Wselector=-83,
    OPT_Wsequence_point=-82,
    OPT_Wserial=-81,
    OPT_Wshadow=-80,
    OPT_Wsign_compare=-79,
    OPT_Wsign_conversion=-78,
    OPT_Wsign_promo=-77,
    OPT_Wspecial_param_hiding=-76,
    OPT_Wstack_protector=-75,
    OPT_Wstatic_access=-74,
    OPT_Wstatic_receiver=-73,
    OPT_Wstrict_aliasing=-72,
    OPT_Wstrict_aliasing_=-71,
    OPT_Wstrict_null_sentinel=-70,
    OPT_Wstrict_overflow=-69,
    OPT_Wstrict_overflow_=-68,
    OPT_Wstrict_prototypes=-67,
    OPT_Wstrict_selector_match=-66,
    OPT_Wsuppress=-65,
    OPT_Wsurprising=-64,
    OPT_Wswitch=-63,
    OPT_Wswitch_default=-62,
    OPT_Wswitch_enum=-61,
    OPT_Wsync_nand=-60,
    OPT_Wsynth=-59,
    OPT_Wsynthetic_access=-58,
    OPT_Wsystem_headers=-57,
    OPT_Wtabs=-56,
    OPT_Wtasks=-55,
    OPT_Wtraditional=-54,
    OPT_Wtraditional_conversion=-53,
    OPT_Wtrigraphs=-52,
    OPT_Wtype_hiding=-51,
    OPT_Wtype_limits=-50,
    OPT_Wuncheck=-49,
    OPT_Wundeclared_selector=-48,
    OPT_Wundef=-47,
    OPT_Wunderflow=-46,
    OPT_Wuninitialized=-45,
    OPT_Wunknown_pragmas=-44,
    OPT_Wunnecessary_else=-43,
    OPT_Wunqualified_field=-42,
    OPT_Wunreachable_code=-41,
    OPT_Wunsafe_loop_optimizations=-40,
    OPT_Wunsuffixed_float_constants=-39,
    OPT_Wunused=-38,
    OPT_Wunused_argument=-37,
    OPT_Wunused_function=-36,
    OPT_Wunused_import=-35,
    OPT_Wunused_label=-34,
    OPT_Wunused_local=-33,
    OPT_Wunused_macros=-32,
    OPT_Wunused_parameter=-31,
    OPT_Wunused_private=-30,
    OPT_Wunused_result=-29,
    OPT_Wunused_thrown=-28,
    OPT_Wunused_value=-27,
    OPT_Wunused_variable=-26,
    OPT_Wuseless_type_check=-25,
    OPT_Wvarargs_cast=-24,
    OPT_Wvariadic_macros=-23,
    OPT_Wvla=-22,
    OPT_Wvolatile_register_var=-21,
    OPT_Wwarning_token=-20,
    OPT_Wwrite_strings=-19,
    OPT_ansi=-18,
    OPT_aux_info=-17,
    OPT_aux_info_=-16,
    OPT_auxbase=-15,
    OPT_auxbase_strip=-14,
    OPT_cpp=-13,
    OPT_d=-12,
    OPT_dumpbase=-11,
    OPT_dumpdir=-10,
    OPT_fCLASSPATH_=-9,
    OPT_fPIC=-8,
    OPT_fPIE=-7,
    OPT_fRTS_=-6,
    OPT_fabi_version_=-5,
    OPT_faccess_control=-4,
    OPT_falign_commons=-3,
    OPT_falign_functions=-2,
    OPT_falign_functions_=-1,
    OPT__help=0,
    OPT__help_=1,
    OPT__output_pch_=2,
    OPT__param=3,
    OPT__target_help=4,
    OPT__version=5,
    OPT_A=6,
    OPT_C=7,
    OPT_CC=8,
    OPT_D=9,
    OPT_E=10,
    OPT_F=11,
    OPT_G=12,
    OPT_H=13,
    OPT_I=14,
    OPT_J=15,
    OPT_M=16,
    OPT_MD=17,
    OPT_MD_=18,
    OPT_MF=19,
    OPT_MG=20,
    OPT_MM=21,
    OPT_MMD=22,
    OPT_MMD_=23,
    OPT_MP=24,
    OPT_MQ=25,
    OPT_MT=26,
    OPT_O=27,
    OPT_Os=28,
    OPT_P=29,
    OPT_U=30,
    OPT_W=31,
    OPT_Wabi=32,
    OPT_Waddress=33,
    OPT_Waggregate_return=34,
    OPT_Waliasing=35,
    OPT_Walign_commons=36,
    OPT_Wall=37,
    OPT_Wall_deprecation=38,
    OPT_Wall_javadoc=39,
    OPT_Wampersand=40,
    OPT_Warray_bounds=41,
    OPT_Warray_temporaries=42,
    OPT_Wassert_identifier=43,
    OPT_Wassign_intercept=44,
    OPT_Wattributes=45,
    OPT_Wbad_function_cast=46,
    OPT_Wboxing=47,
    OPT_Wbuiltin_macro_redefined=48,
    OPT_Wc___compat=49,
    OPT_Wc__0x_compat=50,
    OPT_Wcast_align=51,
    OPT_Wcast_qual=52,
    OPT_Wchar_concat=53,
    OPT_Wchar_subscripts=54,
    OPT_Wcharacter_truncation=55,
    OPT_Wclobbered=56,
    OPT_Wcomment=57,
    OPT_Wcomments=58,
    OPT_Wcondition_assign=59,
    OPT_Wconstructor_name=60,
    OPT_Wconversion=61,
    OPT_Wconversion_null=62,
    OPT_Wcoverage_mismatch=63,
    OPT_Wctor_dtor_privacy=64,
    OPT_Wdeclaration_after_statement=65,
    OPT_Wdep_ann=66,
    OPT_Wdeprecated=67,
    OPT_Wdeprecated_declarations=68,
    OPT_Wdisabled_optimization=69,
    OPT_Wdiscouraged=70,
    OPT_Wdiv_by_zero=71,
    OPT_Weffc__=72,
    OPT_Wempty_block=73,
    OPT_Wempty_body=74,
    OPT_Wendif_labels=75,
    OPT_Wenum_compare=76,
    OPT_Wenum_identifier=77,
    OPT_Wenum_switch=78,
    OPT_Werror=79,
    OPT_Werror_implicit_function_declaration=80,
    OPT_Werror_=81,
    OPT_Wextra=82,
    OPT_Wextraneous_semicolon=83,
    OPT_Wfallthrough=84,
    OPT_Wfatal_errors=85,
    OPT_Wfield_hiding=86,
    OPT_Wfinal_bound=87,
    OPT_Wfinally=88,
    OPT_Wfloat_equal=89,
    OPT_Wforbidden=90,
    OPT_Wformat=91,
    OPT_Wformat_contains_nul=92,
    OPT_Wformat_extra_args=93,
    OPT_Wformat_nonliteral=94,
    OPT_Wformat_security=95,
    OPT_Wformat_y2k=96,
    OPT_Wformat_zero_length=97,
    OPT_Wformat_=98,
    OPT_Wframe_larger_than_=99,
    OPT_Whiding=100,
    OPT_Wignored_qualifiers=101,
    OPT_Wimplicit=102,
    OPT_Wimplicit_function_declaration=103,
    OPT_Wimplicit_int=104,
    OPT_Wimplicit_interface=105,
    OPT_Wimplicit_procedure=106,
    OPT_Wimport=107,
    OPT_Windirect_static=108,
    OPT_Winit_self=109,
    OPT_Winline=110,
    OPT_Wint_to_pointer_cast=111,
    OPT_Wintf_annotation=112,
    OPT_Wintf_non_inherited=113,
    OPT_Wintrinsic_shadow=114,
    OPT_Wintrinsics_std=115,
    OPT_Winvalid_offsetof=116,
    OPT_Winvalid_pch=117,
    OPT_Wjavadoc=118,
    OPT_Wjump_misses_init=119,
    OPT_Wlarger_than_=120,
    OPT_Wlarger_than_eq=121,
    OPT_Wline_truncation=122,
    OPT_Wlocal_hiding=123,
    OPT_Wlogical_op=124,
    OPT_Wlong_long=125,
    OPT_Wmain=126,
    OPT_Wmasked_catch_block=127,
    OPT_falign_jumps=256,
    OPT_falign_jumps_=257,
    OPT_falign_labels=258,
    OPT_falign_labels_=259,
    OPT_falign_loops=260,
    OPT_falign_loops_=261,
    OPT_fall_intrinsics=262,
    OPT_fall_virtual=263,
    OPT_fallow_leading_underscore=264,
    OPT_falt_external_templates=265,
    OPT_fargument_alias=266,
    OPT_fargument_noalias=267,
    OPT_fargument_noalias_anything=268,
    OPT_fargument_noalias_global=269,
    OPT_fasm=270,
    OPT_fassert=271,
    OPT_fassociative_math=272,
    OPT_fassume_compiled=273,
    OPT_fassume_compiled_=274,
    OPT_fasynchronous_unwind_tables=275,
    OPT_fauto_inc_dec=276,
    OPT_fautomatic=277,
    OPT_faux_classpath=278,
    OPT_fbackslash=279,
    OPT_fbacktrace=280,
    OPT_fblas_matmul_limit_=281,
    OPT_fbootclasspath_=282,
    OPT_fbootstrap_classes=283,
    OPT_fbounds_check=284,
    OPT_fbranch_count_reg=285,
    OPT_fbranch_probabilities=286,
    OPT_fbranch_target_load_optimize=287,
    OPT_fbranch_target_load_optimize2=288,
    OPT_fbtr_bb_exclusive=289,
    OPT_fbuiltin=290,
    OPT_fbuiltin_=291,
    OPT_fcall_saved_=292,
    OPT_fcall_used_=293,
    OPT_fcaller_saves=294,
    OPT_fcheck_array_temporaries=295,
    OPT_fcheck_data_deps=296,
    OPT_fcheck_new=297,
    OPT_fcheck_references=298,
    OPT_fcheck_=299,
    OPT_fclasspath_=300,
    OPT_fcommon=301,
    OPT_fcompare_debug_second=302,
    OPT_fcompare_debug_=303,
    OPT_fcompile_resource_=304,
    OPT_fcond_mismatch=305,
    OPT_fconserve_space=306,
    OPT_fconserve_stack=307,
    OPT_fconstant_string_class_=308,
    OPT_fconvert_big_endian=309,
    OPT_fconvert_little_endian=310,
    OPT_fconvert_native=311,
    OPT_fconvert_swap=312,
    OPT_fcprop_registers=313,
    OPT_fcray_pointer=314,
    OPT_fcrossjumping=315,
    OPT_fcse_follow_jumps=316,
    OPT_fcse_skip_blocks=317,
    OPT_fcx_fortran_rules=318,
    OPT_fcx_limited_range=319,
    OPT_fd_lines_as_code=320,
    OPT_fd_lines_as_comments=321,
    OPT_fdata_sections=322,
    OPT_fdbg_cnt_list=323,
    OPT_fdbg_cnt_=324,
    OPT_fdce=325,
    OPT_fdebug_prefix_map_=326,
    OPT_fdeduce_init_list=327,
    OPT_fdefault_double_8=328,
    OPT_fdefault_inline=329,
    OPT_fdefault_integer_8=330,
    OPT_fdefault_real_8=331,
    OPT_fdefer_pop=332,
    OPT_fdelayed_branch=333,
    OPT_fdelete_null_pointer_checks=334,
    OPT_fdiagnostics_show_location_=335,
    OPT_fdiagnostics_show_option=336,
    OPT_fdirectives_only=337,
    OPT_fdisable_assertions=338,
    OPT_fdisable_assertions_=339,
    OPT_fdollar_ok=340,
    OPT_fdollars_in_identifiers=341,
    OPT_fdse=342,
    OPT_fdump_=343,
    OPT_fdump_core=344,
    OPT_fdump_final_insns_=345,
    OPT_fdump_noaddr=346,
    OPT_fdump_parse_tree=347,
    OPT_fdump_unnumbered=348,
    OPT_fdump_unnumbered_links=349,
    OPT_fdwarf2_cfi_asm=350,
    OPT_fearly_inlining=351,
    OPT_felide_constructors=352,
    OPT_feliminate_dwarf2_dups=353,
    OPT_feliminate_unused_debug_symbols=354,
    OPT_feliminate_unused_debug_types=355,
    OPT_femit_class_debug_always=356,
    OPT_femit_class_file=357,
    OPT_femit_class_files=358,
    OPT_femit_struct_debug_baseonly=359,
    OPT_femit_struct_debug_detailed_=360,
    OPT_femit_struct_debug_reduced=361,
    OPT_fenable_assertions=362,
    OPT_fenable_assertions_=363,
    OPT_fenable_icf_debug=364,
    OPT_fencoding_=365,
    OPT_fenforce_eh_specs=366,
    OPT_fenum_int_equiv=367,
    OPT_fexceptions=368,
    OPT_fexcess_precision_=369,
    OPT_fexec_charset_=370,
    OPT_fexpensive_optimizations=371,
    OPT_fextdirs_=372,
    OPT_fextended_identifiers=373,
    OPT_fexternal_blas=374,
    OPT_fexternal_templates=375,
    OPT_ff2c=376,
    OPT_ffast_math=377,
    OPT_ffilelist_file=378,
    OPT_ffinite_math_only=379,
    OPT_ffixed_=380,
    OPT_ffixed_form=381,
    OPT_ffixed_line_length_=382,
    OPT_ffixed_line_length_none=383,
    OPT_ffloat_store=384,
    OPT_ffor_scope=385,
    OPT_fforce_addr=386,
    OPT_fforce_classes_archive_check=387,
    OPT_fforward_propagate=388,
    OPT_ffpe_trap_=389,
    OPT_ffree_form=390,
    OPT_ffree_line_length_=391,
    OPT_ffree_line_length_none=392,
    OPT_ffreestanding=393,
    OPT_ffriend_injection=394,
    OPT_ffunction_cse=395,
    OPT_ffunction_sections=396,
    OPT_fgcse=397,
    OPT_fgcse_after_reload=398,
    OPT_fgcse_las=399,
    OPT_fgcse_lm=400,
    OPT_fgcse_sm=401,
    OPT_fgnu_keywords=402,
    OPT_fgnu_runtime=403,
    OPT_fgnu89_inline=404,
    OPT_fgraphite=405,
    OPT_fgraphite_identity=406,
    OPT_fguess_branch_probability=407,
    OPT_fguiding_decls=408,
    OPT_fhandle_exceptions=409,
    OPT_fhash_synchronization=410,
    OPT_fhelp=411,
    OPT_fhelp_=412,
    OPT_fhonor_std=413,
    OPT_fhosted=414,
    OPT_fhuge_objects=415,
    OPT_fident=416,
    OPT_fif_conversion=417,
    OPT_fif_conversion2=418,
    OPT_fimplement_inlines=419,
    OPT_fimplicit_inline_templates=420,
    OPT_fimplicit_none=421,
    OPT_fimplicit_templates=422,
    OPT_findirect_classes=423,
    OPT_findirect_dispatch=424,
    OPT_findirect_inlining=425,
    OPT_finhibit_size_directive=426,
    OPT_finit_character_=427,
    OPT_finit_integer_=428,
    OPT_finit_local_zero=429,
    OPT_finit_logical_=430,
    OPT_finit_real_=431,
    OPT_finline=432,
    OPT_finline_functions=433,
    OPT_finline_functions_called_once=434,
    OPT_finline_limit_=435,
    OPT_finline_limit_eq=436,
    OPT_finline_small_functions=437,
    OPT_finput_charset_=438,
    OPT_finstrument_functions=439,
    OPT_finstrument_functions_exclude_file_list_=440,
    OPT_finstrument_functions_exclude_function_list_=441,
    OPT_fintrinsic_modules_path=442,
    OPT_fipa_cp=443,
    OPT_fipa_cp_clone=444,
    OPT_fipa_matrix_reorg=445,
    OPT_fipa_pta=446,
    OPT_fipa_pure_const=447,
    OPT_fipa_reference=448,
    OPT_fipa_sra=449,
    OPT_fipa_struct_reorg=450,
    OPT_fipa_type_escape=451,
    OPT_fira_algorithm_=452,
    OPT_fira_coalesce=453,
    OPT_fira_loop_pressure=454,
    OPT_fira_region_=455,
    OPT_fira_share_save_slots=456,
    OPT_fira_share_spill_slots=457,
    OPT_fira_verbose_=458,
    OPT_fivopts=459,
    OPT_fjni=460,
    OPT_fjump_tables=461,
    OPT_fkeep_inline_functions=462,
    OPT_fkeep_static_consts=463,
    OPT_flabels_ok=464,
    OPT_flax_vector_conversions=465,
    OPT_fleading_underscore=466,
    OPT_floop_block=467,
    OPT_floop_interchange=468,
    OPT_floop_optimize=469,
    OPT_floop_parallelize_all=470,
    OPT_floop_strip_mine=471,
    OPT_flto=472,
    OPT_flto_compression_level_=473,
    OPT_flto_report=474,
    OPT_fltrans=475,
    OPT_fltrans_output_list_=476,
    OPT_fmath_errno=477,
    OPT_fmax_array_constructor_=478,
    OPT_fmax_errors_=479,
    OPT_fmax_identifier_length_=480,
    OPT_fmax_stack_var_size_=481,
    OPT_fmax_subrecord_length_=482,
    OPT_fmem_report=483,
    OPT_fmerge_all_constants=484,
    OPT_fmerge_constants=485,
    OPT_fmerge_debug_strings=486,
    OPT_fmessage_length_=487,
    OPT_fmodule_private=488,
    OPT_fmodulo_sched=489,
    OPT_fmodulo_sched_allow_regmoves=490,
    OPT_fmove_loop_invariants=491,
    OPT_fms_extensions=492,
    OPT_fmudflap=493,
    OPT_fmudflapir=494,
    OPT_fmudflapth=495,
    OPT_fname_mangling_version_=496,
    OPT_fnew_abi=497,
    OPT_fnext_runtime=498,
    OPT_fnil_receivers=499,
    OPT_fnon_call_exceptions=500,
    OPT_fnonansi_builtins=501,
    OPT_fnonnull_objects=502,
    OPT_fobjc_call_cxx_cdtors=503,
    OPT_fobjc_direct_dispatch=504,
    OPT_fobjc_exceptions=505,
    OPT_fobjc_gc=506,
    OPT_fobjc_sjlj_exceptions=507,
    OPT_fomit_frame_pointer=508,
    OPT_fopenmp=509,
    OPT_foperator_names=510,
    OPT_foptimize_register_move=511,
    OPT_foptimize_sibling_calls=512,
    OPT_foptimize_static_class_initialization=513,
    OPT_foptional_diags=514,
    OPT_foutput_class_dir_=515,
    OPT_fpack_derived=516,
    OPT_fpack_struct=517,
    OPT_fpack_struct_=518,
    OPT_fpcc_struct_return=519,
    OPT_fpch_deps=520,
    OPT_fpch_preprocess=521,
    OPT_fpeel_loops=522,
    OPT_fpeephole=523,
    OPT_fpeephole2=524,
    OPT_fpermissive=525,
    OPT_fpic=526,
    OPT_fpie=527,
    OPT_fplugin_arg_=528,
    OPT_fplugin_=529,
    OPT_fpost_ipa_mem_report=530,
    OPT_fpre_ipa_mem_report=531,
    OPT_fpredictive_commoning=532,
    OPT_fprefetch_loop_arrays=533,
    OPT_fpreprocessed=534,
    OPT_fpretty_templates=535,
    OPT_fprofile=536,
    OPT_fprofile_arcs=537,
    OPT_fprofile_correction=538,
    OPT_fprofile_dir_=539,
    OPT_fprofile_generate=540,
    OPT_fprofile_generate_=541,
    OPT_fprofile_use=542,
    OPT_fprofile_use_=543,
    OPT_fprofile_values=544,
    OPT_fprotect_parens=545,
    OPT_frandom_seed=546,
    OPT_frandom_seed_=547,
    OPT_frange_check=548,
    OPT_freciprocal_math=549,
    OPT_frecord_gcc_switches=550,
    OPT_frecord_marker_4=551,
    OPT_frecord_marker_8=552,
    OPT_frecursive=553,
    OPT_freduced_reflection=554,
    OPT_freg_struct_return=555,
    OPT_fregmove=556,
    OPT_frename_registers=557,
    OPT_freorder_blocks=558,
    OPT_freorder_blocks_and_partition=559,
    OPT_freorder_functions=560,
    OPT_frepack_arrays=561,
    OPT_freplace_objc_classes=562,
    OPT_frepo=563,
    OPT_frerun_cse_after_loop=564,
    OPT_frerun_loop_opt=565,
    OPT_freschedule_modulo_scheduled_loops=566,
    OPT_fresolution=567,
    OPT_frounding_math=568,
    OPT_frtti=569,
    OPT_fsaw_java_file=570,
    OPT_fsched_critical_path_heuristic=571,
    OPT_fsched_dep_count_heuristic=572,
    OPT_fsched_group_heuristic=573,
    OPT_fsched_interblock=574,
    OPT_fsched_last_insn_heuristic=575,
    OPT_fsched_pressure=576,
    OPT_fsched_rank_heuristic=577,
    OPT_fsched_spec=578,
    OPT_fsched_spec_insn_heuristic=579,
    OPT_fsched_spec_load=580,
    OPT_fsched_spec_load_dangerous=581,
    OPT_fsched_stalled_insns=582,
    OPT_fsched_stalled_insns_dep=583,
    OPT_fsched_stalled_insns_dep_=584,
    OPT_fsched_stalled_insns_=585,
    OPT_fsched_verbose_=586,
    OPT_fsched2_use_superblocks=587,
    OPT_fsched2_use_traces=588,
    OPT_fschedule_insns=589,
    OPT_fschedule_insns2=590,
    OPT_fsecond_underscore=591,
    OPT_fsection_anchors=592,
    OPT_fsee=593,
    OPT_fsel_sched_pipelining=594,
    OPT_fsel_sched_pipelining_outer_loops=595,
    OPT_fsel_sched_reschedule_pipelined=596,
    OPT_fselective_scheduling=597,
    OPT_fselective_scheduling2=598,
    OPT_fshort_double=599,
    OPT_fshort_enums=600,
    OPT_fshort_wchar=601,
    OPT_fshow_column=602,
    OPT_fsign_zero=603,
    OPT_fsignaling_nans=604,
    OPT_fsigned_bitfields=605,
    OPT_fsigned_char=606,
    OPT_fsigned_zeros=607,
    OPT_fsingle_precision_constant=608,
    OPT_fsource_filename_=609,
    OPT_fsource_=610,
    OPT_fsplit_ivs_in_unroller=611,
    OPT_fsplit_wide_types=612,
    OPT_fsquangle=613,
    OPT_fstack_check=614,
    OPT_fstack_check_=615,
    OPT_fstack_limit=616,
    OPT_fstack_limit_register_=617,
    OPT_fstack_limit_symbol_=618,
    OPT_fstack_protector=619,
    OPT_fstack_protector_all=620,
    OPT_fstats=621,
    OPT_fstore_check=622,
    OPT_fstrength_reduce=623,
    OPT_fstrict_aliasing=624,
    OPT_fstrict_overflow=625,
    OPT_fstrict_prototype=626,
    OPT_fsyntax_only=627,
    OPT_ftabstop_=628,
    OPT_ftarget_help=629,
    OPT_ftarget_=630,
    OPT_ftemplate_depth_=631,
    OPT_ftemplate_depth_eq=632,
    OPT_ftest_coverage=633,
    OPT_fthis_is_variable=634,
    OPT_fthread_jumps=635,
    OPT_fthreadsafe_statics=636,
    OPT_ftime_report=637,
    OPT_ftls_model_=638,
    OPT_ftoplevel_reorder=639,
    OPT_ftracer=640,
    OPT_ftrapping_math=641,
    OPT_ftrapv=642,
    OPT_ftree_builtin_call_dce=643,
    OPT_ftree_ccp=644,
    OPT_ftree_ch=645,
    OPT_ftree_copy_prop=646,
    OPT_ftree_copyrename=647,
    OPT_ftree_cselim=648,
    OPT_ftree_dce=649,
    OPT_ftree_dominator_opts=650,
    OPT_ftree_dse=651,
    OPT_ftree_forwprop=652,
    OPT_ftree_fre=653,
    OPT_ftree_loop_distribution=654,
    OPT_ftree_loop_im=655,
    OPT_ftree_loop_ivcanon=656,
    OPT_ftree_loop_linear=657,
    OPT_ftree_loop_optimize=658,
    OPT_ftree_lrs=659,
    OPT_ftree_parallelize_loops_=660,
    OPT_ftree_phiprop=661,
    OPT_ftree_pre=662,
    OPT_ftree_pta=663,
    OPT_ftree_reassoc=664,
    OPT_ftree_salias=665,
    OPT_ftree_scev_cprop=666,
    OPT_ftree_sink=667,
    OPT_ftree_slp_vectorize=668,
    OPT_ftree_sra=669,
    OPT_ftree_store_ccp=670,
    OPT_ftree_store_copy_prop=671,
    OPT_ftree_switch_conversion=672,
    OPT_ftree_ter=673,
    OPT_ftree_vect_loop_version=674,
    OPT_ftree_vectorize=675,
    OPT_ftree_vectorizer_verbose_=676,
    OPT_ftree_vrp=677,
    OPT_funderscoring=678,
    OPT_funit_at_a_time=679,
    OPT_funroll_all_loops=680,
    OPT_funroll_loops=681,
    OPT_funsafe_loop_optimizations=682,
    OPT_funsafe_math_optimizations=683,
    OPT_funsigned_bitfields=684,
    OPT_funsigned_char=685,
    OPT_funswitch_loops=686,
    OPT_funwind_tables=687,
    OPT_fuse_atomic_builtins=688,
    OPT_fuse_boehm_gc=689,
    OPT_fuse_cxa_atexit=690,
    OPT_fuse_cxa_get_exception_ptr=691,
    OPT_fuse_divide_subroutine=692,
    OPT_fuse_linker_plugin=693,
    OPT_fvar_tracking=694,
    OPT_fvar_tracking_assignments=695,
    OPT_fvar_tracking_assignments_toggle=696,
    OPT_fvar_tracking_uninit=697,
    OPT_fvariable_expansion_in_unroller=698,
    OPT_fvect_cost_model=699,
    OPT_fverbose_asm=700,
    OPT_fversion=701,
    OPT_fvisibility_inlines_hidden=702,
    OPT_fvisibility_ms_compat=703,
    OPT_fvisibility_=704,
    OPT_fvpt=705,
    OPT_fvtable_gc=706,
    OPT_fvtable_thunks=707,
    OPT_fweak=708,
    OPT_fweb=709,
    OPT_fwhole_file=710,
    OPT_fwhole_program=711,
    OPT_fwhopr=712,
    OPT_fwide_exec_charset_=713,
    OPT_fworking_directory=714,
    OPT_fwpa=715,
    OPT_fwrapv=716,
    OPT_fxref=717,
    OPT_fzero_initialized_in_bss=718,
    OPT_fzero_link=719,
    OPT_g=720,
    OPT_gant=721,
    OPT_gcoff=722,
    OPT_gdwarfplus=723,
    OPT_gdwarf_=724,
    OPT_gen_decls=725,
    OPT_ggdb=726,
    OPT_gnat=727,
    OPT_gnatO=728,
    OPT_gno_strict_dwarf=729,
    OPT_gstabs=730,
    OPT_gstabs_=731,
    OPT_gstrict_dwarf=732,
    OPT_gtoggle=733,
    OPT_gvms=734,
    OPT_gxcoff=735,
    OPT_gxcoff_=736,
    OPT_idirafter=737,
    OPT_imacros=738,
    OPT_imultilib=739,
    OPT_include=740,
    OPT_iprefix=741,
    OPT_iquote=742,
    OPT_isysroot=743,
    OPT_isystem=744,
    OPT_iwithprefix=745,
    OPT_iwithprefixbefore=746,
    OPT_lang_asm=747,
    OPT_lang_objc=748,
    OPT_m128bit_long_double=749,
    OPT_m32=750,
    OPT_m3dnow=751,
    OPT_m3dnowa=752,
    OPT_m64=753,
    OPT_m80387=754,
    OPT_m96bit_long_double=755,
    OPT_mabi_=756,
    OPT_mabm=757,
    OPT_maccumulate_outgoing_args=758,
    OPT_maes=759,
    OPT_malign_double=760,
    OPT_malign_functions_=761,
    OPT_malign_jumps_=762,
    OPT_malign_loops_=763,
    OPT_malign_stringops=764,
    OPT_march_=765,
    OPT_masm_=766,
    OPT_mavx=767,
    OPT_mbranch_cost_=768,
    OPT_mcld=769,
    OPT_mcmodel_=770,
    OPT_mcrc32=771,
    OPT_mcx16=772,
    OPT_mfancy_math_387=773,
    OPT_mfma=774,
    OPT_mfma4=775,
    OPT_mforce_drap=776,
    OPT_mfp_ret_in_387=777,
    OPT_mfpmath_=778,
    OPT_mfused_madd=779,
    OPT_mglibc=780,
    OPT_mhard_float=781,
    OPT_mieee_fp=782,
    OPT_mincoming_stack_boundary_=783,
    OPT_minline_all_stringops=784,
    OPT_minline_stringops_dynamically=785,
    OPT_mintel_syntax=786,
    OPT_mlarge_data_threshold_=787,
    OPT_mlwp=788,
    OPT_mmmx=789,
    OPT_mmovbe=790,
    OPT_mms_bitfields=791,
    OPT_mno_align_stringops=792,
    OPT_mno_fancy_math_387=793,
    OPT_mno_push_args=794,
    OPT_mno_red_zone=795,
    OPT_mno_sse4=796,
    OPT_momit_leaf_frame_pointer=797,
    OPT_mpc=798,
    OPT_mpclmul=799,
    OPT_mpopcnt=800,
    OPT_mpreferred_stack_boundary_=801,
    OPT_mpush_args=802,
    OPT_mrecip=803,
    OPT_mred_zone=804,
    OPT_mregparm_=805,
    OPT_mrtd=806,
    OPT_msahf=807,
    OPT_msoft_float=808,
    OPT_msse=809,
    OPT_msse2=810,
    OPT_msse2avx=811,
    OPT_msse3=812,
    OPT_msse4=813,
    OPT_msse4_1=814,
    OPT_msse4_2=815,
    OPT_msse4a=816,
    OPT_msseregparm=817,
    OPT_mssse3=818,
    OPT_mstack_arg_probe=819,
    OPT_mstackrealign=820,
    OPT_mstringop_strategy_=821,
    OPT_mtls_dialect_=822,
    OPT_mtls_direct_seg_refs=823,
    OPT_mtune_=824,
    OPT_muclibc=825,
    OPT_mveclibabi_=826,
    OPT_mxop=827,
    OPT_nocpp=828,
    OPT_nostdinc=829,
    OPT_nostdinc__=830,
    OPT_nostdlib=831,
    OPT_o=832,
    OPT_p=833,
    OPT_pedantic=834,
    OPT_pedantic_errors=835,
    OPT_pie=836,
    OPT_print_objc_runtime_info=837,
    OPT_print_pch_checksum=838,
    OPT_quiet=839,
    OPT_remap=840,
    OPT_shared=841,
    OPT_static_libgfortran=842,
    OPT_std_c__0x=843,
    OPT_std_c__98=844,
    OPT_std_c89=845,
    OPT_std_c90=846,
    OPT_std_c99=847,
    OPT_std_c9x=848,
    OPT_std_f2003=849,
    OPT_std_f2008=850,
    OPT_std_f95=851,
    OPT_std_gnu=852,
    OPT_std_gnu__0x=853,
    OPT_std_gnu__98=854,
    OPT_std_gnu89=855,
    OPT_std_gnu90=856,
    OPT_std_gnu99=857,
    OPT_std_gnu9x=858,
    OPT_std_iso9899_1990=859,
    OPT_std_iso9899_199409=860,
    OPT_std_iso9899_1999=861,
    OPT_std_iso9899_199x=862,
    OPT_std_legacy=863,
    OPT_traditional_cpp=864,
    OPT_trigraphs=865,
    OPT_undef=866,
    OPT_v=867,
    OPT_version=868,
    OPT_w=869,
    N_OPTS=870
} opt_code;

typedef struct eni_weights_d eni_weights_d, *Peni_weights_d;

typedef struct eni_weights_d eni_weights;

struct eni_weights_d {
    uint call_cost;
    uint target_builtin_call_cost;
    uint div_mod_cost;
    uint omp_cost;
    uchar time_based;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
};

typedef struct gcc_debug_hooks gcc_debug_hooks, *Pgcc_debug_hooks;

struct gcc_debug_hooks {
    void (* init)(char *);
    void (* finish)(char *);
    void (* assembly_start)(void);
    void (* define)(uint, char *);
    void (* undef)(uint, char *);
    void (* start_source_file)(uint, char *);
    void (* end_source_file)(uint);
    void (* begin_block)(uint, uint);
    void (* end_block)(uint, uint);
    uchar (* ignore_block)(const_tree);
    void (* source_line)(uint, char *, int, uchar);
    void (* begin_prologue)(uint, char *);
    void (* end_prologue)(uint, char *);
    void (* end_epilogue)(uint, char *);
    void (* begin_function)(tree);
    void (* end_function)(uint);
    void (* function_decl)(tree);
    void (* global_decl)(tree);
    void (* type_decl)(tree, int);
    void (* imported_module_or_decl)(tree, tree, tree, uchar);
    void (* deferred_inline_function)(tree);
    void (* outlining_inline_function)(tree);
    void (* label)(rtx);
    void (* handle_pch)(uint);
    void (* var_location)(rtx);
    void (* switch_text_section)(void);
    void (* direct_call)(tree);
    void (* virtual_call_token)(tree, int);
    void (* copy_call_info)(rtx, rtx);
    void (* virtual_call)(int);
    void (* set_name)(tree, tree);
    int start_end_main_source_file;
    undefined field32_0xfc;
    undefined field33_0xfd;
    undefined field34_0xfe;
    undefined field35_0xff;
};

typedef struct lang_hooks_for_decls lang_hooks_for_decls, *Plang_hooks_for_decls;

struct lang_hooks_for_decls {
    int (* global_bindings_p)(void);
    tree (* pushdecl)(tree);
    tree (* getdecls)(void);
    uchar (* function_decl_explicit_p)(tree);
    uchar (* generic_generic_parameter_decl_p)(const_tree);
    uchar (* function_parm_expanded_from_pack_p)(tree, tree);
    tree (* get_generic_function_decl)(const_tree);
    uchar (* warn_unused_global)(const_tree);
    void (* final_write_globals)(void);
    uchar (* ok_for_sibcall)(const_tree);
    uchar (* omp_privatize_by_reference)(const_tree);
    omp_clause_default_kind (* omp_predetermined_sharing)(tree);
    uchar (* omp_disregard_value_expr)(tree, uchar);
    uchar (* omp_private_debug_clause)(tree, uchar);
    uchar (* omp_private_outer_ref)(tree);
    tree (* omp_clause_default_ctor)(tree, tree, tree);
    tree (* omp_clause_copy_ctor)(tree, tree, tree);
    tree (* omp_clause_assign_op)(tree, tree, tree);
    tree (* omp_clause_dtor)(tree, tree);
    void (* omp_finish_clause)(tree);
};

typedef struct lang_hooks_for_tree_dump lang_hooks_for_tree_dump, *Plang_hooks_for_tree_dump;

struct lang_hooks_for_tree_dump {
    uchar (* dump_tree)(void *, tree);
    int (* type_quals)(const_tree);
};

typedef struct lang_hooks_for_tree_inlining lang_hooks_for_tree_inlining, *Plang_hooks_for_tree_inlining;

struct lang_hooks_for_tree_inlining {
    uchar (* var_mod_type_p)(tree, tree);
};

typedef void (* lang_print_tree_hook)(FILE *, tree, int);

typedef struct lang_hooks lang_hooks, *Plang_hooks;

typedef struct lang_hooks_for_callgraph lang_hooks_for_callgraph, *Plang_hooks_for_callgraph;

typedef struct lang_hooks_for_types lang_hooks_for_types, *Plang_hooks_for_types;

typedef enum classify_record {
    RECORD_IS_STRUCT=0,
    RECORD_IS_CLASS=1,
    RECORD_IS_INTERFACE=2
} classify_record;

typedef struct lang_hooks_for_lto lang_hooks_for_lto, *Plang_hooks_for_lto;

struct lang_hooks_for_types {
    tree (* make_type)(enum tree_code);
    classify_record (* classify_record)(tree);
    tree (* type_for_mode)(enum machine_mode, int);
    tree (* type_for_size)(uint, int);
    uchar (* generic_p)(const_tree);
    tree (* get_argument_pack_elems)(const_tree);
    tree (* type_promotes_to)(tree);
    void (* register_builtin_type)(tree, char *);
    void (* incomplete_type_error)(const_tree, const_tree);
    tree (* max_size)(const_tree);
    void (* omp_firstprivatize_type_sizes)(struct gimplify_omp_ctx *, tree);
    uchar (* type_hash_eq)(const_tree, const_tree);
    uchar (* get_array_descr_info)(const_tree, struct array_descr_info *);
    void (* get_subrange_bounds)(const_tree, tree *, tree *);
    tree (* reconstruct_complex_type)(tree, tree);
    uchar hash_types;
    undefined field16_0x79;
    undefined field17_0x7a;
    undefined field18_0x7b;
    undefined field19_0x7c;
    undefined field20_0x7d;
    undefined field21_0x7e;
    undefined field22_0x7f;
};

struct lang_hooks_for_lto {
    void (* begin_section)(char *);
    void (* append_data)(void *, size_t, void *);
    void (* end_section)(void);
};

struct lang_hooks_for_callgraph {
    tree (* analyze_expr)(tree *, int *);
};

struct lang_hooks {
    char * name;
    size_t identifier_size;
    void (* free_lang_data)(tree);
    size_t (* tree_size)(enum tree_code);
    uint (* init_options)(uint, char * *);
    void (* initialize_diagnostics)(struct diagnostic_context *);
    int (* handle_option)(size_t, char *, int);
    uchar (* missing_argument)(char *, size_t);
    uchar (* post_options)(char * *);
    uchar (* init)(void);
    void (* finish)(void);
    void (* parse_file)(int);
    uchar (* missing_noreturn_ok_p)(tree);
    alias_set_type (* get_alias_set)(tree);
    void (* finish_incomplete_decl)(tree);
    void (* dup_lang_specific_decl)(tree);
    void (* set_decl_assembler_name)(tree);
    void (* print_statistics)(void);
    lang_print_tree_hook print_xnode;
    lang_print_tree_hook print_decl;
    lang_print_tree_hook print_type;
    lang_print_tree_hook print_identifier;
    char * (* decl_printable_name)(tree, int);
    char * (* dwarf_name)(tree, int);
    int (* types_compatible_p)(tree, tree);
    void (* print_error_function)(struct diagnostic_context *, char *, struct diagnostic_info *);
    long (* to_target_charset)(long);
    struct attribute_spec * attribute_table;
    struct attribute_spec * common_attribute_table;
    struct attribute_spec * format_attribute_table;
    struct lang_hooks_for_tree_inlining tree_inlining;
    struct lang_hooks_for_callgraph callgraph;
    struct lang_hooks_for_tree_dump tree_dump;
    struct lang_hooks_for_decls decls;
    struct lang_hooks_for_types types;
    struct lang_hooks_for_lto lto;
    tree (* get_innermost_generic_parms)(const_tree);
    tree (* get_innermost_generic_args)(const_tree);
    uchar (* function_parameter_pack_p)(const_tree);
    int (* gimplify_expr)(tree *, gimple_seq *, gimple_seq *);
    tree (* fold_obj_type_ref)(tree, tree);
    tree (* builtin_function)(tree);
    tree (* builtin_function_ext_scope)(tree);
    void (* init_ts)(void);
    tree (* expr_to_decl)(tree, uchar *, uchar *);
    tree (* eh_personality)(void);
    tree (* eh_runtime_type)(tree);
    uchar eh_use_cxa_end_cleanup;
    undefined field48_0x2a1;
    undefined field49_0x2a2;
    undefined field50_0x2a3;
    undefined field51_0x2a4;
    undefined field52_0x2a5;
    undefined field53_0x2a6;
    undefined field54_0x2a7;
};

typedef enum node_type {
    NT_VOID=0,
    NT_MACRO=1,
    NT_ASSERTION=2
} node_type;


// WARNING! conflicting data type names: /DWARF/struct_FILE.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct alias_pair alias_pair, *Palias_pair;

struct alias_pair {
    tree decl;
    tree target;
};

typedef struct VEC_alias_pair_gc VEC_alias_pair_gc, *PVEC_alias_pair_gc;

typedef struct VEC_alias_pair_base VEC_alias_pair_base, *PVEC_alias_pair_base;

struct VEC_alias_pair_base {
    uint num;
    uint alloc;
    struct alias_pair vec[1];
};

struct VEC_alias_pair_gc {
    struct VEC_alias_pair_base base;
};

typedef enum attribute_flags {
    ATTR_FLAG_DECL_NEXT=1,
    ATTR_FLAG_FUNCTION_NEXT=2,
    ATTR_FLAG_ARRAY_NEXT=4,
    ATTR_FLAG_TYPE_IN_PLACE=8,
    ATTR_FLAG_BUILT_IN=16
} attribute_flags;

typedef enum tree_code_class {
    tcc_exceptional=0,
    tcc_constant=1,
    tcc_type=2,
    tcc_declaration=3,
    tcc_reference=4,
    tcc_comparison=5,
    tcc_unary=6,
    tcc_binary=7,
    tcc_statement=8,
    tcc_vl_exp=9,
    tcc_expression=10
} tree_code_class;

typedef enum tree_index {
    TI_TARGET_OPTION_CURRENT=-128,
    TI_CURRENT_TARGET_PRAGMA=-127,
    TI_CURRENT_OPTIMIZE_PRAGMA=-126,
    TI_MAX=-125,
    TI_ERROR_MARK=0,
    TI_INTQI_TYPE=1,
    TI_INTHI_TYPE=2,
    TI_INTSI_TYPE=3,
    TI_INTDI_TYPE=4,
    TI_INTTI_TYPE=5,
    TI_UINTQI_TYPE=6,
    TI_UINTHI_TYPE=7,
    TI_UINTSI_TYPE=8,
    TI_UINTDI_TYPE=9,
    TI_UINTTI_TYPE=10,
    TI_UINT32_TYPE=11,
    TI_UINT64_TYPE=12,
    TI_INTEGER_ZERO=13,
    TI_INTEGER_ONE=14,
    TI_INTEGER_MINUS_ONE=15,
    TI_NULL_POINTER=16,
    TI_SIZE_ZERO=17,
    TI_SIZE_ONE=18,
    TI_BITSIZE_ZERO=19,
    TI_BITSIZE_ONE=20,
    TI_BITSIZE_UNIT=21,
    TI_PUBLIC=22,
    TI_PROTECTED=23,
    TI_PRIVATE=24,
    TI_BOOLEAN_FALSE=25,
    TI_BOOLEAN_TRUE=26,
    TI_COMPLEX_INTEGER_TYPE=27,
    TI_COMPLEX_FLOAT_TYPE=28,
    TI_COMPLEX_DOUBLE_TYPE=29,
    TI_COMPLEX_LONG_DOUBLE_TYPE=30,
    TI_FLOAT_TYPE=31,
    TI_DOUBLE_TYPE=32,
    TI_LONG_DOUBLE_TYPE=33,
    TI_FLOAT_PTR_TYPE=34,
    TI_DOUBLE_PTR_TYPE=35,
    TI_LONG_DOUBLE_PTR_TYPE=36,
    TI_INTEGER_PTR_TYPE=37,
    TI_VOID_TYPE=38,
    TI_PTR_TYPE=39,
    TI_CONST_PTR_TYPE=40,
    TI_SIZE_TYPE=41,
    TI_PID_TYPE=42,
    TI_PTRDIFF_TYPE=43,
    TI_VA_LIST_TYPE=44,
    TI_VA_LIST_GPR_COUNTER_FIELD=45,
    TI_VA_LIST_FPR_COUNTER_FIELD=46,
    TI_BOOLEAN_TYPE=47,
    TI_FILEPTR_TYPE=48,
    TI_DFLOAT32_TYPE=49,
    TI_DFLOAT64_TYPE=50,
    TI_DFLOAT128_TYPE=51,
    TI_DFLOAT32_PTR_TYPE=52,
    TI_DFLOAT64_PTR_TYPE=53,
    TI_DFLOAT128_PTR_TYPE=54,
    TI_VOID_LIST_NODE=55,
    TI_MAIN_IDENTIFIER=56,
    TI_SAT_SFRACT_TYPE=57,
    TI_SAT_FRACT_TYPE=58,
    TI_SAT_LFRACT_TYPE=59,
    TI_SAT_LLFRACT_TYPE=60,
    TI_SAT_USFRACT_TYPE=61,
    TI_SAT_UFRACT_TYPE=62,
    TI_SAT_ULFRACT_TYPE=63,
    TI_SAT_ULLFRACT_TYPE=64,
    TI_SFRACT_TYPE=65,
    TI_FRACT_TYPE=66,
    TI_LFRACT_TYPE=67,
    TI_LLFRACT_TYPE=68,
    TI_USFRACT_TYPE=69,
    TI_UFRACT_TYPE=70,
    TI_ULFRACT_TYPE=71,
    TI_ULLFRACT_TYPE=72,
    TI_SAT_SACCUM_TYPE=73,
    TI_SAT_ACCUM_TYPE=74,
    TI_SAT_LACCUM_TYPE=75,
    TI_SAT_LLACCUM_TYPE=76,
    TI_SAT_USACCUM_TYPE=77,
    TI_SAT_UACCUM_TYPE=78,
    TI_SAT_ULACCUM_TYPE=79,
    TI_SAT_ULLACCUM_TYPE=80,
    TI_SACCUM_TYPE=81,
    TI_ACCUM_TYPE=82,
    TI_LACCUM_TYPE=83,
    TI_LLACCUM_TYPE=84,
    TI_USACCUM_TYPE=85,
    TI_UACCUM_TYPE=86,
    TI_ULACCUM_TYPE=87,
    TI_ULLACCUM_TYPE=88,
    TI_QQ_TYPE=89,
    TI_HQ_TYPE=90,
    TI_SQ_TYPE=91,
    TI_DQ_TYPE=92,
    TI_TQ_TYPE=93,
    TI_UQQ_TYPE=94,
    TI_UHQ_TYPE=95,
    TI_USQ_TYPE=96,
    TI_UDQ_TYPE=97,
    TI_UTQ_TYPE=98,
    TI_SAT_QQ_TYPE=99,
    TI_SAT_HQ_TYPE=100,
    TI_SAT_SQ_TYPE=101,
    TI_SAT_DQ_TYPE=102,
    TI_SAT_TQ_TYPE=103,
    TI_SAT_UQQ_TYPE=104,
    TI_SAT_UHQ_TYPE=105,
    TI_SAT_USQ_TYPE=106,
    TI_SAT_UDQ_TYPE=107,
    TI_SAT_UTQ_TYPE=108,
    TI_HA_TYPE=109,
    TI_SA_TYPE=110,
    TI_DA_TYPE=111,
    TI_TA_TYPE=112,
    TI_UHA_TYPE=113,
    TI_USA_TYPE=114,
    TI_UDA_TYPE=115,
    TI_UTA_TYPE=116,
    TI_SAT_HA_TYPE=117,
    TI_SAT_SA_TYPE=118,
    TI_SAT_DA_TYPE=119,
    TI_SAT_TA_TYPE=120,
    TI_SAT_UHA_TYPE=121,
    TI_SAT_USA_TYPE=122,
    TI_SAT_UDA_TYPE=123,
    TI_SAT_UTA_TYPE=124,
    TI_OPTIMIZATION_DEFAULT=125,
    TI_OPTIMIZATION_CURRENT=126,
    TI_TARGET_OPTION_DEFAULT=127
} tree_index;

typedef enum integer_type_kind {
    itk_char=0,
    itk_signed_char=1,
    itk_unsigned_char=2,
    itk_short=3,
    itk_unsigned_short=4,
    itk_int=5,
    itk_unsigned_int=6,
    itk_long=7,
    itk_unsigned_long=8,
    itk_long_long=9,
    itk_unsigned_long_long=10,
    itk_none=11
} integer_type_kind;

typedef enum built_in_class {
    NOT_BUILT_IN=0,
    BUILT_IN_FRONTEND=1,
    BUILT_IN_MD=2,
    BUILT_IN_NORMAL=3
} built_in_class;

typedef enum size_type_kind {
    SIZETYPE=0,
    SSIZETYPE=1,
    BITSIZETYPE=2,
    SBITSIZETYPE=3,
    TYPE_KIND_LAST=4
} size_type_kind;

typedef enum built_in_function {
    BUILT_IN_LLCEILL=-128,
    BUILT_IN_LLFLOOR=-127,
    BUILT_IN_LLFLOORF=-126,
    BUILT_IN_LLFLOORL=-125,
    BUILT_IN_LLRINT=-124,
    BUILT_IN_LLRINTF=-123,
    BUILT_IN_LLRINTL=-122,
    BUILT_IN_LLROUND=-121,
    BUILT_IN_LLROUNDF=-120,
    BUILT_IN_LLROUNDL=-119,
    BUILT_IN_LOG=-118,
    BUILT_IN_LOG10=-117,
    BUILT_IN_LOG10F=-116,
    BUILT_IN_LOG10L=-115,
    BUILT_IN_LOG1P=-114,
    BUILT_IN_LOG1PF=-113,
    BUILT_IN_LOG1PL=-112,
    BUILT_IN_LOG2=-111,
    BUILT_IN_LOG2F=-110,
    BUILT_IN_LOG2L=-109,
    BUILT_IN_LOGB=-108,
    BUILT_IN_LOGBF=-107,
    BUILT_IN_LOGBL=-106,
    BUILT_IN_LOGF=-105,
    BUILT_IN_LOGL=-104,
    BUILT_IN_LRINT=-103,
    BUILT_IN_LRINTF=-102,
    BUILT_IN_LRINTL=-101,
    BUILT_IN_LROUND=-100,
    BUILT_IN_LROUNDF=-99,
    BUILT_IN_LROUNDL=-98,
    BUILT_IN_MODF=-97,
    BUILT_IN_MODFF=-96,
    BUILT_IN_MODFL=-95,
    BUILT_IN_NAN=-94,
    BUILT_IN_NANF=-93,
    BUILT_IN_NANL=-92,
    BUILT_IN_NAND32=-91,
    BUILT_IN_NAND64=-90,
    BUILT_IN_NAND128=-89,
    BUILT_IN_NANS=-88,
    BUILT_IN_NANSF=-87,
    BUILT_IN_NANSL=-86,
    BUILT_IN_NEARBYINT=-85,
    BUILT_IN_NEARBYINTF=-84,
    BUILT_IN_NEARBYINTL=-83,
    BUILT_IN_NEXTAFTER=-82,
    BUILT_IN_NEXTAFTERF=-81,
    BUILT_IN_NEXTAFTERL=-80,
    BUILT_IN_NEXTTOWARD=-79,
    BUILT_IN_NEXTTOWARDF=-78,
    BUILT_IN_NEXTTOWARDL=-77,
    BUILT_IN_POW=-76,
    BUILT_IN_POW10=-75,
    BUILT_IN_POW10F=-74,
    BUILT_IN_POW10L=-73,
    BUILT_IN_POWF=-72,
    BUILT_IN_POWI=-71,
    BUILT_IN_POWIF=-70,
    BUILT_IN_POWIL=-69,
    BUILT_IN_POWL=-68,
    BUILT_IN_REMAINDER=-67,
    BUILT_IN_REMAINDERF=-66,
    BUILT_IN_REMAINDERL=-65,
    BUILT_IN_REMQUO=-64,
    BUILT_IN_REMQUOF=-63,
    BUILT_IN_REMQUOL=-62,
    BUILT_IN_RINT=-61,
    BUILT_IN_RINTF=-60,
    BUILT_IN_RINTL=-59,
    BUILT_IN_ROUND=-58,
    BUILT_IN_ROUNDF=-57,
    BUILT_IN_ROUNDL=-56,
    BUILT_IN_SCALB=-55,
    BUILT_IN_SCALBF=-54,
    BUILT_IN_SCALBL=-53,
    BUILT_IN_SCALBLN=-52,
    BUILT_IN_SCALBLNF=-51,
    BUILT_IN_SCALBLNL=-50,
    BUILT_IN_SCALBN=-49,
    BUILT_IN_SCALBNF=-48,
    BUILT_IN_SCALBNL=-47,
    BUILT_IN_SIGNBIT=-46,
    BUILT_IN_SIGNBITF=-45,
    BUILT_IN_SIGNBITL=-44,
    BUILT_IN_SIGNBITD32=-43,
    BUILT_IN_SIGNBITD64=-42,
    BUILT_IN_SIGNBITD128=-41,
    BUILT_IN_SIGNIFICAND=-40,
    BUILT_IN_SIGNIFICANDF=-39,
    BUILT_IN_SIGNIFICANDL=-38,
    BUILT_IN_SIN=-37,
    BUILT_IN_SINCOS=-36,
    BUILT_IN_SINCOSF=-35,
    BUILT_IN_SINCOSL=-34,
    BUILT_IN_SINF=-33,
    BUILT_IN_SINH=-32,
    BUILT_IN_SINHF=-31,
    BUILT_IN_SINHL=-30,
    BUILT_IN_SINL=-29,
    BUILT_IN_SQRT=-28,
    BUILT_IN_SQRTF=-27,
    BUILT_IN_SQRTL=-26,
    BUILT_IN_TAN=-25,
    BUILT_IN_TANF=-24,
    BUILT_IN_TANH=-23,
    BUILT_IN_TANHF=-22,
    BUILT_IN_TANHL=-21,
    BUILT_IN_TANL=-20,
    BUILT_IN_TGAMMA=-19,
    BUILT_IN_TGAMMAF=-18,
    BUILT_IN_TGAMMAL=-17,
    BUILT_IN_TRUNC=-16,
    BUILT_IN_TRUNCF=-15,
    BUILT_IN_TRUNCL=-14,
    BUILT_IN_Y0=-13,
    BUILT_IN_Y0F=-12,
    BUILT_IN_Y0L=-11,
    BUILT_IN_Y1=-10,
    BUILT_IN_Y1F=-9,
    BUILT_IN_Y1L=-8,
    BUILT_IN_YN=-7,
    BUILT_IN_YNF=-6,
    BUILT_IN_YNL=-5,
    BUILT_IN_CABS=-4,
    BUILT_IN_CABSF=-3,
    BUILT_IN_CABSL=-2,
    BUILT_IN_CACOS=-1,
    BUILT_IN_ACOS=0,
    BUILT_IN_ACOSF=1,
    BUILT_IN_ACOSH=2,
    BUILT_IN_ACOSHF=3,
    BUILT_IN_ACOSHL=4,
    BUILT_IN_ACOSL=5,
    BUILT_IN_ASIN=6,
    BUILT_IN_ASINF=7,
    BUILT_IN_ASINH=8,
    BUILT_IN_ASINHF=9,
    BUILT_IN_ASINHL=10,
    BUILT_IN_ASINL=11,
    BUILT_IN_ATAN=12,
    BUILT_IN_ATAN2=13,
    BUILT_IN_ATAN2F=14,
    BUILT_IN_ATAN2L=15,
    BUILT_IN_ATANF=16,
    BUILT_IN_ATANH=17,
    BUILT_IN_ATANHF=18,
    BUILT_IN_ATANHL=19,
    BUILT_IN_ATANL=20,
    BUILT_IN_CBRT=21,
    BUILT_IN_CBRTF=22,
    BUILT_IN_CBRTL=23,
    BUILT_IN_CEIL=24,
    BUILT_IN_CEILF=25,
    BUILT_IN_CEILL=26,
    BUILT_IN_COPYSIGN=27,
    BUILT_IN_COPYSIGNF=28,
    BUILT_IN_COPYSIGNL=29,
    BUILT_IN_COS=30,
    BUILT_IN_COSF=31,
    BUILT_IN_COSH=32,
    BUILT_IN_COSHF=33,
    BUILT_IN_COSHL=34,
    BUILT_IN_COSL=35,
    BUILT_IN_DREM=36,
    BUILT_IN_DREMF=37,
    BUILT_IN_DREML=38,
    BUILT_IN_ERF=39,
    BUILT_IN_ERFC=40,
    BUILT_IN_ERFCF=41,
    BUILT_IN_ERFCL=42,
    BUILT_IN_ERFF=43,
    BUILT_IN_ERFL=44,
    BUILT_IN_EXP=45,
    BUILT_IN_EXP10=46,
    BUILT_IN_EXP10F=47,
    BUILT_IN_EXP10L=48,
    BUILT_IN_EXP2=49,
    BUILT_IN_EXP2F=50,
    BUILT_IN_EXP2L=51,
    BUILT_IN_EXPF=52,
    BUILT_IN_EXPL=53,
    BUILT_IN_EXPM1=54,
    BUILT_IN_EXPM1F=55,
    BUILT_IN_EXPM1L=56,
    BUILT_IN_FABS=57,
    BUILT_IN_FABSF=58,
    BUILT_IN_FABSL=59,
    BUILT_IN_FDIM=60,
    BUILT_IN_FDIMF=61,
    BUILT_IN_FDIML=62,
    BUILT_IN_FLOOR=63,
    BUILT_IN_FLOORF=64,
    BUILT_IN_FLOORL=65,
    BUILT_IN_FMA=66,
    BUILT_IN_FMAF=67,
    BUILT_IN_FMAL=68,
    BUILT_IN_FMAX=69,
    BUILT_IN_FMAXF=70,
    BUILT_IN_FMAXL=71,
    BUILT_IN_FMIN=72,
    BUILT_IN_FMINF=73,
    BUILT_IN_FMINL=74,
    BUILT_IN_FMOD=75,
    BUILT_IN_FMODF=76,
    BUILT_IN_FMODL=77,
    BUILT_IN_FREXP=78,
    BUILT_IN_FREXPF=79,
    BUILT_IN_FREXPL=80,
    BUILT_IN_GAMMA=81,
    BUILT_IN_GAMMAF=82,
    BUILT_IN_GAMMAL=83,
    BUILT_IN_GAMMA_R=84,
    BUILT_IN_GAMMAF_R=85,
    BUILT_IN_GAMMAL_R=86,
    BUILT_IN_HUGE_VAL=87,
    BUILT_IN_HUGE_VALF=88,
    BUILT_IN_HUGE_VALL=89,
    BUILT_IN_HYPOT=90,
    BUILT_IN_HYPOTF=91,
    BUILT_IN_HYPOTL=92,
    BUILT_IN_ILOGB=93,
    BUILT_IN_ILOGBF=94,
    BUILT_IN_ILOGBL=95,
    BUILT_IN_INF=96,
    BUILT_IN_INFF=97,
    BUILT_IN_INFL=98,
    BUILT_IN_INFD32=99,
    BUILT_IN_INFD64=100,
    BUILT_IN_INFD128=101,
    BUILT_IN_J0=102,
    BUILT_IN_J0F=103,
    BUILT_IN_J0L=104,
    BUILT_IN_J1=105,
    BUILT_IN_J1F=106,
    BUILT_IN_J1L=107,
    BUILT_IN_JN=108,
    BUILT_IN_JNF=109,
    BUILT_IN_JNL=110,
    BUILT_IN_LCEIL=111,
    BUILT_IN_LCEILF=112,
    BUILT_IN_LCEILL=113,
    BUILT_IN_LDEXP=114,
    BUILT_IN_LDEXPF=115,
    BUILT_IN_LDEXPL=116,
    BUILT_IN_LFLOOR=117,
    BUILT_IN_LFLOORF=118,
    BUILT_IN_LFLOORL=119,
    BUILT_IN_LGAMMA=120,
    BUILT_IN_LGAMMAF=121,
    BUILT_IN_LGAMMAL=122,
    BUILT_IN_LGAMMA_R=123,
    BUILT_IN_LGAMMAF_R=124,
    BUILT_IN_LGAMMAL_R=125,
    BUILT_IN_LLCEIL=126,
    BUILT_IN_LLCEILF=127,
    BUILT_IN_CACOSF=256,
    BUILT_IN_CACOSH=257,
    BUILT_IN_CACOSHF=258,
    BUILT_IN_CACOSHL=259,
    BUILT_IN_CACOSL=260,
    BUILT_IN_CARG=261,
    BUILT_IN_CARGF=262,
    BUILT_IN_CARGL=263,
    BUILT_IN_CASIN=264,
    BUILT_IN_CASINF=265,
    BUILT_IN_CASINH=266,
    BUILT_IN_CASINHF=267,
    BUILT_IN_CASINHL=268,
    BUILT_IN_CASINL=269,
    BUILT_IN_CATAN=270,
    BUILT_IN_CATANF=271,
    BUILT_IN_CATANH=272,
    BUILT_IN_CATANHF=273,
    BUILT_IN_CATANHL=274,
    BUILT_IN_CATANL=275,
    BUILT_IN_CCOS=276,
    BUILT_IN_CCOSF=277,
    BUILT_IN_CCOSH=278,
    BUILT_IN_CCOSHF=279,
    BUILT_IN_CCOSHL=280,
    BUILT_IN_CCOSL=281,
    BUILT_IN_CEXP=282,
    BUILT_IN_CEXPF=283,
    BUILT_IN_CEXPL=284,
    BUILT_IN_CEXPI=285,
    BUILT_IN_CEXPIF=286,
    BUILT_IN_CEXPIL=287,
    BUILT_IN_CIMAG=288,
    BUILT_IN_CIMAGF=289,
    BUILT_IN_CIMAGL=290,
    BUILT_IN_CLOG=291,
    BUILT_IN_CLOGF=292,
    BUILT_IN_CLOGL=293,
    BUILT_IN_CLOG10=294,
    BUILT_IN_CLOG10F=295,
    BUILT_IN_CLOG10L=296,
    BUILT_IN_CONJ=297,
    BUILT_IN_CONJF=298,
    BUILT_IN_CONJL=299,
    BUILT_IN_CPOW=300,
    BUILT_IN_CPOWF=301,
    BUILT_IN_CPOWL=302,
    BUILT_IN_CPROJ=303,
    BUILT_IN_CPROJF=304,
    BUILT_IN_CPROJL=305,
    BUILT_IN_CREAL=306,
    BUILT_IN_CREALF=307,
    BUILT_IN_CREALL=308,
    BUILT_IN_CSIN=309,
    BUILT_IN_CSINF=310,
    BUILT_IN_CSINH=311,
    BUILT_IN_CSINHF=312,
    BUILT_IN_CSINHL=313,
    BUILT_IN_CSINL=314,
    BUILT_IN_CSQRT=315,
    BUILT_IN_CSQRTF=316,
    BUILT_IN_CSQRTL=317,
    BUILT_IN_CTAN=318,
    BUILT_IN_CTANF=319,
    BUILT_IN_CTANH=320,
    BUILT_IN_CTANHF=321,
    BUILT_IN_CTANHL=322,
    BUILT_IN_CTANL=323,
    BUILT_IN_BCMP=324,
    BUILT_IN_BCOPY=325,
    BUILT_IN_BZERO=326,
    BUILT_IN_INDEX=327,
    BUILT_IN_MEMCHR=328,
    BUILT_IN_MEMCMP=329,
    BUILT_IN_MEMCPY=330,
    BUILT_IN_MEMMOVE=331,
    BUILT_IN_MEMPCPY=332,
    BUILT_IN_MEMSET=333,
    BUILT_IN_RINDEX=334,
    BUILT_IN_STPCPY=335,
    BUILT_IN_STPNCPY=336,
    BUILT_IN_STRCASECMP=337,
    BUILT_IN_STRCAT=338,
    BUILT_IN_STRCHR=339,
    BUILT_IN_STRCMP=340,
    BUILT_IN_STRCPY=341,
    BUILT_IN_STRCSPN=342,
    BUILT_IN_STRDUP=343,
    BUILT_IN_STRNDUP=344,
    BUILT_IN_STRLEN=345,
    BUILT_IN_STRNCASECMP=346,
    BUILT_IN_STRNCAT=347,
    BUILT_IN_STRNCMP=348,
    BUILT_IN_STRNCPY=349,
    BUILT_IN_STRPBRK=350,
    BUILT_IN_STRRCHR=351,
    BUILT_IN_STRSPN=352,
    BUILT_IN_STRSTR=353,
    BUILT_IN_FPRINTF=354,
    BUILT_IN_FPRINTF_UNLOCKED=355,
    BUILT_IN_PUTC=356,
    BUILT_IN_PUTC_UNLOCKED=357,
    BUILT_IN_FPUTC=358,
    BUILT_IN_FPUTC_UNLOCKED=359,
    BUILT_IN_FPUTS=360,
    BUILT_IN_FPUTS_UNLOCKED=361,
    BUILT_IN_FSCANF=362,
    BUILT_IN_FWRITE=363,
    BUILT_IN_FWRITE_UNLOCKED=364,
    BUILT_IN_PRINTF=365,
    BUILT_IN_PRINTF_UNLOCKED=366,
    BUILT_IN_PUTCHAR=367,
    BUILT_IN_PUTCHAR_UNLOCKED=368,
    BUILT_IN_PUTS=369,
    BUILT_IN_PUTS_UNLOCKED=370,
    BUILT_IN_SCANF=371,
    BUILT_IN_SNPRINTF=372,
    BUILT_IN_SPRINTF=373,
    BUILT_IN_SSCANF=374,
    BUILT_IN_VFPRINTF=375,
    BUILT_IN_VFSCANF=376,
    BUILT_IN_VPRINTF=377,
    BUILT_IN_VSCANF=378,
    BUILT_IN_VSNPRINTF=379,
    BUILT_IN_VSPRINTF=380,
    BUILT_IN_VSSCANF=381,
    BUILT_IN_ISALNUM=382,
    BUILT_IN_ISALPHA=383,
    BUILT_IN_ISASCII=384,
    BUILT_IN_ISBLANK=385,
    BUILT_IN_ISCNTRL=386,
    BUILT_IN_ISDIGIT=387,
    BUILT_IN_ISGRAPH=388,
    BUILT_IN_ISLOWER=389,
    BUILT_IN_ISPRINT=390,
    BUILT_IN_ISPUNCT=391,
    BUILT_IN_ISSPACE=392,
    BUILT_IN_ISUPPER=393,
    BUILT_IN_ISXDIGIT=394,
    BUILT_IN_TOASCII=395,
    BUILT_IN_TOLOWER=396,
    BUILT_IN_TOUPPER=397,
    BUILT_IN_ISWALNUM=398,
    BUILT_IN_ISWALPHA=399,
    BUILT_IN_ISWBLANK=400,
    BUILT_IN_ISWCNTRL=401,
    BUILT_IN_ISWDIGIT=402,
    BUILT_IN_ISWGRAPH=403,
    BUILT_IN_ISWLOWER=404,
    BUILT_IN_ISWPRINT=405,
    BUILT_IN_ISWPUNCT=406,
    BUILT_IN_ISWSPACE=407,
    BUILT_IN_ISWUPPER=408,
    BUILT_IN_ISWXDIGIT=409,
    BUILT_IN_TOWLOWER=410,
    BUILT_IN_TOWUPPER=411,
    BUILT_IN_ABORT=412,
    BUILT_IN_ABS=413,
    BUILT_IN_AGGREGATE_INCOMING_ADDRESS=414,
    BUILT_IN_ALLOCA=415,
    BUILT_IN_APPLY=416,
    BUILT_IN_APPLY_ARGS=417,
    BUILT_IN_ARGS_INFO=418,
    BUILT_IN_BSWAP32=419,
    BUILT_IN_BSWAP64=420,
    BUILT_IN_CLEAR_CACHE=421,
    BUILT_IN_CALLOC=422,
    BUILT_IN_CLASSIFY_TYPE=423,
    BUILT_IN_CLZ=424,
    BUILT_IN_CLZIMAX=425,
    BUILT_IN_CLZL=426,
    BUILT_IN_CLZLL=427,
    BUILT_IN_CONSTANT_P=428,
    BUILT_IN_CTZ=429,
    BUILT_IN_CTZIMAX=430,
    BUILT_IN_CTZL=431,
    BUILT_IN_CTZLL=432,
    BUILT_IN_DCGETTEXT=433,
    BUILT_IN_DGETTEXT=434,
    BUILT_IN_DWARF_CFA=435,
    BUILT_IN_DWARF_SP_COLUMN=436,
    BUILT_IN_EH_RETURN=437,
    BUILT_IN_EH_RETURN_DATA_REGNO=438,
    BUILT_IN_EXECL=439,
    BUILT_IN_EXECLP=440,
    BUILT_IN_EXECLE=441,
    BUILT_IN_EXECV=442,
    BUILT_IN_EXECVP=443,
    BUILT_IN_EXECVE=444,
    BUILT_IN_EXIT=445,
    BUILT_IN_EXPECT=446,
    BUILT_IN_EXTEND_POINTER=447,
    BUILT_IN_EXTRACT_RETURN_ADDR=448,
    BUILT_IN_FFS=449,
    BUILT_IN_FFSIMAX=450,
    BUILT_IN_FFSL=451,
    BUILT_IN_FFSLL=452,
    BUILT_IN_FORK=453,
    BUILT_IN_FRAME_ADDRESS=454,
    BUILT_IN_FREE=455,
    BUILT_IN_FROB_RETURN_ADDR=456,
    BUILT_IN_GETTEXT=457,
    BUILT_IN_IMAXABS=458,
    BUILT_IN_INIT_DWARF_REG_SIZES=459,
    BUILT_IN_FINITE=460,
    BUILT_IN_FINITEF=461,
    BUILT_IN_FINITEL=462,
    BUILT_IN_FINITED32=463,
    BUILT_IN_FINITED64=464,
    BUILT_IN_FINITED128=465,
    BUILT_IN_FPCLASSIFY=466,
    BUILT_IN_ISFINITE=467,
    BUILT_IN_ISINF_SIGN=468,
    BUILT_IN_ISINF=469,
    BUILT_IN_ISINFF=470,
    BUILT_IN_ISINFL=471,
    BUILT_IN_ISINFD32=472,
    BUILT_IN_ISINFD64=473,
    BUILT_IN_ISINFD128=474,
    BUILT_IN_ISNAN=475,
    BUILT_IN_ISNANF=476,
    BUILT_IN_ISNANL=477,
    BUILT_IN_ISNAND32=478,
    BUILT_IN_ISNAND64=479,
    BUILT_IN_ISNAND128=480,
    BUILT_IN_ISNORMAL=481,
    BUILT_IN_ISGREATER=482,
    BUILT_IN_ISGREATEREQUAL=483,
    BUILT_IN_ISLESS=484,
    BUILT_IN_ISLESSEQUAL=485,
    BUILT_IN_ISLESSGREATER=486,
    BUILT_IN_ISUNORDERED=487,
    BUILT_IN_LABS=488,
    BUILT_IN_LLABS=489,
    BUILT_IN_LONGJMP=490,
    BUILT_IN_MALLOC=491,
    BUILT_IN_NEXT_ARG=492,
    BUILT_IN_PARITY=493,
    BUILT_IN_PARITYIMAX=494,
    BUILT_IN_PARITYL=495,
    BUILT_IN_PARITYLL=496,
    BUILT_IN_POPCOUNT=497,
    BUILT_IN_POPCOUNTIMAX=498,
    BUILT_IN_POPCOUNTL=499,
    BUILT_IN_POPCOUNTLL=500,
    BUILT_IN_PREFETCH=501,
    BUILT_IN_REALLOC=502,
    BUILT_IN_RETURN=503,
    BUILT_IN_RETURN_ADDRESS=504,
    BUILT_IN_SAVEREGS=505,
    BUILT_IN_SETJMP=506,
    BUILT_IN_STRFMON=507,
    BUILT_IN_STRFTIME=508,
    BUILT_IN_TRAP=509,
    BUILT_IN_UNREACHABLE=510,
    BUILT_IN_UNWIND_INIT=511,
    BUILT_IN_UPDATE_SETJMP_BUF=512,
    BUILT_IN_VA_COPY=513,
    BUILT_IN_VA_END=514,
    BUILT_IN_VA_START=515,
    BUILT_IN_VA_ARG_PACK=516,
    BUILT_IN_VA_ARG_PACK_LEN=517,
    BUILT_IN__EXIT=518,
    BUILT_IN__EXIT2=519,
    BUILT_IN_INIT_TRAMPOLINE=520,
    BUILT_IN_ADJUST_TRAMPOLINE=521,
    BUILT_IN_NONLOCAL_GOTO=522,
    BUILT_IN_SETJMP_SETUP=523,
    BUILT_IN_SETJMP_DISPATCHER=524,
    BUILT_IN_SETJMP_RECEIVER=525,
    BUILT_IN_STACK_SAVE=526,
    BUILT_IN_STACK_RESTORE=527,
    BUILT_IN_OBJECT_SIZE=528,
    BUILT_IN_MEMCPY_CHK=529,
    BUILT_IN_MEMMOVE_CHK=530,
    BUILT_IN_MEMPCPY_CHK=531,
    BUILT_IN_MEMSET_CHK=532,
    BUILT_IN_STPCPY_CHK=533,
    BUILT_IN_STRCAT_CHK=534,
    BUILT_IN_STRCPY_CHK=535,
    BUILT_IN_STRNCAT_CHK=536,
    BUILT_IN_STRNCPY_CHK=537,
    BUILT_IN_SNPRINTF_CHK=538,
    BUILT_IN_SPRINTF_CHK=539,
    BUILT_IN_VSNPRINTF_CHK=540,
    BUILT_IN_VSPRINTF_CHK=541,
    BUILT_IN_FPRINTF_CHK=542,
    BUILT_IN_PRINTF_CHK=543,
    BUILT_IN_VFPRINTF_CHK=544,
    BUILT_IN_VPRINTF_CHK=545,
    BUILT_IN_PROFILE_FUNC_ENTER=546,
    BUILT_IN_PROFILE_FUNC_EXIT=547,
    BUILT_IN_EMUTLS_GET_ADDRESS=548,
    BUILT_IN_EMUTLS_REGISTER_COMMON=549,
    BUILT_IN_UNWIND_RESUME=550,
    BUILT_IN_CXA_END_CLEANUP=551,
    BUILT_IN_EH_POINTER=552,
    BUILT_IN_EH_FILTER=553,
    BUILT_IN_EH_COPY_VALUES=554,
    BUILT_IN_FETCH_AND_ADD_N=555,
    BUILT_IN_FETCH_AND_ADD_1=556,
    BUILT_IN_FETCH_AND_ADD_2=557,
    BUILT_IN_FETCH_AND_ADD_4=558,
    BUILT_IN_FETCH_AND_ADD_8=559,
    BUILT_IN_FETCH_AND_ADD_16=560,
    BUILT_IN_FETCH_AND_SUB_N=561,
    BUILT_IN_FETCH_AND_SUB_1=562,
    BUILT_IN_FETCH_AND_SUB_2=563,
    BUILT_IN_FETCH_AND_SUB_4=564,
    BUILT_IN_FETCH_AND_SUB_8=565,
    BUILT_IN_FETCH_AND_SUB_16=566,
    BUILT_IN_FETCH_AND_OR_N=567,
    BUILT_IN_FETCH_AND_OR_1=568,
    BUILT_IN_FETCH_AND_OR_2=569,
    BUILT_IN_FETCH_AND_OR_4=570,
    BUILT_IN_FETCH_AND_OR_8=571,
    BUILT_IN_FETCH_AND_OR_16=572,
    BUILT_IN_FETCH_AND_AND_N=573,
    BUILT_IN_FETCH_AND_AND_1=574,
    BUILT_IN_FETCH_AND_AND_2=575,
    BUILT_IN_FETCH_AND_AND_4=576,
    BUILT_IN_FETCH_AND_AND_8=577,
    BUILT_IN_FETCH_AND_AND_16=578,
    BUILT_IN_FETCH_AND_XOR_N=579,
    BUILT_IN_FETCH_AND_XOR_1=580,
    BUILT_IN_FETCH_AND_XOR_2=581,
    BUILT_IN_FETCH_AND_XOR_4=582,
    BUILT_IN_FETCH_AND_XOR_8=583,
    BUILT_IN_FETCH_AND_XOR_16=584,
    BUILT_IN_FETCH_AND_NAND_N=585,
    BUILT_IN_FETCH_AND_NAND_1=586,
    BUILT_IN_FETCH_AND_NAND_2=587,
    BUILT_IN_FETCH_AND_NAND_4=588,
    BUILT_IN_FETCH_AND_NAND_8=589,
    BUILT_IN_FETCH_AND_NAND_16=590,
    BUILT_IN_ADD_AND_FETCH_N=591,
    BUILT_IN_ADD_AND_FETCH_1=592,
    BUILT_IN_ADD_AND_FETCH_2=593,
    BUILT_IN_ADD_AND_FETCH_4=594,
    BUILT_IN_ADD_AND_FETCH_8=595,
    BUILT_IN_ADD_AND_FETCH_16=596,
    BUILT_IN_SUB_AND_FETCH_N=597,
    BUILT_IN_SUB_AND_FETCH_1=598,
    BUILT_IN_SUB_AND_FETCH_2=599,
    BUILT_IN_SUB_AND_FETCH_4=600,
    BUILT_IN_SUB_AND_FETCH_8=601,
    BUILT_IN_SUB_AND_FETCH_16=602,
    BUILT_IN_OR_AND_FETCH_N=603,
    BUILT_IN_OR_AND_FETCH_1=604,
    BUILT_IN_OR_AND_FETCH_2=605,
    BUILT_IN_OR_AND_FETCH_4=606,
    BUILT_IN_OR_AND_FETCH_8=607,
    BUILT_IN_OR_AND_FETCH_16=608,
    BUILT_IN_AND_AND_FETCH_N=609,
    BUILT_IN_AND_AND_FETCH_1=610,
    BUILT_IN_AND_AND_FETCH_2=611,
    BUILT_IN_AND_AND_FETCH_4=612,
    BUILT_IN_AND_AND_FETCH_8=613,
    BUILT_IN_AND_AND_FETCH_16=614,
    BUILT_IN_XOR_AND_FETCH_N=615,
    BUILT_IN_XOR_AND_FETCH_1=616,
    BUILT_IN_XOR_AND_FETCH_2=617,
    BUILT_IN_XOR_AND_FETCH_4=618,
    BUILT_IN_XOR_AND_FETCH_8=619,
    BUILT_IN_XOR_AND_FETCH_16=620,
    BUILT_IN_NAND_AND_FETCH_N=621,
    BUILT_IN_NAND_AND_FETCH_1=622,
    BUILT_IN_NAND_AND_FETCH_2=623,
    BUILT_IN_NAND_AND_FETCH_4=624,
    BUILT_IN_NAND_AND_FETCH_8=625,
    BUILT_IN_NAND_AND_FETCH_16=626,
    BUILT_IN_BOOL_COMPARE_AND_SWAP_N=627,
    BUILT_IN_BOOL_COMPARE_AND_SWAP_1=628,
    BUILT_IN_BOOL_COMPARE_AND_SWAP_2=629,
    BUILT_IN_BOOL_COMPARE_AND_SWAP_4=630,
    BUILT_IN_BOOL_COMPARE_AND_SWAP_8=631,
    BUILT_IN_BOOL_COMPARE_AND_SWAP_16=632,
    BUILT_IN_VAL_COMPARE_AND_SWAP_N=633,
    BUILT_IN_VAL_COMPARE_AND_SWAP_1=634,
    BUILT_IN_VAL_COMPARE_AND_SWAP_2=635,
    BUILT_IN_VAL_COMPARE_AND_SWAP_4=636,
    BUILT_IN_VAL_COMPARE_AND_SWAP_8=637,
    BUILT_IN_VAL_COMPARE_AND_SWAP_16=638,
    BUILT_IN_LOCK_TEST_AND_SET_N=639,
    BUILT_IN_LOCK_TEST_AND_SET_1=640,
    BUILT_IN_LOCK_TEST_AND_SET_2=641,
    BUILT_IN_LOCK_TEST_AND_SET_4=642,
    BUILT_IN_LOCK_TEST_AND_SET_8=643,
    BUILT_IN_LOCK_TEST_AND_SET_16=644,
    BUILT_IN_LOCK_RELEASE_N=645,
    BUILT_IN_LOCK_RELEASE_1=646,
    BUILT_IN_LOCK_RELEASE_2=647,
    BUILT_IN_LOCK_RELEASE_4=648,
    BUILT_IN_LOCK_RELEASE_8=649,
    BUILT_IN_LOCK_RELEASE_16=650,
    BUILT_IN_SYNCHRONIZE=651,
    BUILT_IN_OMP_GET_THREAD_NUM=652,
    BUILT_IN_OMP_GET_NUM_THREADS=653,
    BUILT_IN_GOMP_ATOMIC_START=654,
    BUILT_IN_GOMP_ATOMIC_END=655,
    BUILT_IN_GOMP_BARRIER=656,
    BUILT_IN_GOMP_TASKWAIT=657,
    BUILT_IN_GOMP_CRITICAL_START=658,
    BUILT_IN_GOMP_CRITICAL_END=659,
    BUILT_IN_GOMP_CRITICAL_NAME_START=660,
    BUILT_IN_GOMP_CRITICAL_NAME_END=661,
    BUILT_IN_GOMP_LOOP_STATIC_START=662,
    BUILT_IN_GOMP_LOOP_DYNAMIC_START=663,
    BUILT_IN_GOMP_LOOP_GUIDED_START=664,
    BUILT_IN_GOMP_LOOP_RUNTIME_START=665,
    BUILT_IN_GOMP_LOOP_ORDERED_STATIC_START=666,
    BUILT_IN_GOMP_LOOP_ORDERED_DYNAMIC_START=667,
    BUILT_IN_GOMP_LOOP_ORDERED_GUIDED_START=668,
    BUILT_IN_GOMP_LOOP_ORDERED_RUNTIME_START=669,
    BUILT_IN_GOMP_LOOP_STATIC_NEXT=670,
    BUILT_IN_GOMP_LOOP_DYNAMIC_NEXT=671,
    BUILT_IN_GOMP_LOOP_GUIDED_NEXT=672,
    BUILT_IN_GOMP_LOOP_RUNTIME_NEXT=673,
    BUILT_IN_GOMP_LOOP_ORDERED_STATIC_NEXT=674,
    BUILT_IN_GOMP_LOOP_ORDERED_DYNAMIC_NEXT=675,
    BUILT_IN_GOMP_LOOP_ORDERED_GUIDED_NEXT=676,
    BUILT_IN_GOMP_LOOP_ORDERED_RUNTIME_NEXT=677,
    BUILT_IN_GOMP_LOOP_ULL_STATIC_START=678,
    BUILT_IN_GOMP_LOOP_ULL_DYNAMIC_START=679,
    BUILT_IN_GOMP_LOOP_ULL_GUIDED_START=680,
    BUILT_IN_GOMP_LOOP_ULL_RUNTIME_START=681,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_STATIC_START=682,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_DYNAMIC_START=683,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_GUIDED_START=684,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_RUNTIME_START=685,
    BUILT_IN_GOMP_LOOP_ULL_STATIC_NEXT=686,
    BUILT_IN_GOMP_LOOP_ULL_DYNAMIC_NEXT=687,
    BUILT_IN_GOMP_LOOP_ULL_GUIDED_NEXT=688,
    BUILT_IN_GOMP_LOOP_ULL_RUNTIME_NEXT=689,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_STATIC_NEXT=690,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_DYNAMIC_NEXT=691,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_GUIDED_NEXT=692,
    BUILT_IN_GOMP_LOOP_ULL_ORDERED_RUNTIME_NEXT=693,
    BUILT_IN_GOMP_PARALLEL_LOOP_STATIC_START=694,
    BUILT_IN_GOMP_PARALLEL_LOOP_DYNAMIC_START=695,
    BUILT_IN_GOMP_PARALLEL_LOOP_GUIDED_START=696,
    BUILT_IN_GOMP_PARALLEL_LOOP_RUNTIME_START=697,
    BUILT_IN_GOMP_LOOP_END=698,
    BUILT_IN_GOMP_LOOP_END_NOWAIT=699,
    BUILT_IN_GOMP_ORDERED_START=700,
    BUILT_IN_GOMP_ORDERED_END=701,
    BUILT_IN_GOMP_PARALLEL_START=702,
    BUILT_IN_GOMP_PARALLEL_END=703,
    BUILT_IN_GOMP_TASK=704,
    BUILT_IN_GOMP_SECTIONS_START=705,
    BUILT_IN_GOMP_SECTIONS_NEXT=706,
    BUILT_IN_GOMP_PARALLEL_SECTIONS_START=707,
    BUILT_IN_GOMP_SECTIONS_END=708,
    BUILT_IN_GOMP_SECTIONS_END_NOWAIT=709,
    BUILT_IN_GOMP_SINGLE_START=710,
    BUILT_IN_GOMP_SINGLE_COPY_START=711,
    BUILT_IN_GOMP_SINGLE_COPY_END=712,
    BUILT_IN_COMPLEX_MUL_MIN=713,
    BUILT_IN_COMPLEX_MUL_MAX=716,
    BUILT_IN_COMPLEX_DIV_MIN=717,
    BUILT_IN_COMPLEX_DIV_MAX=720,
    END_BUILTINS=721
} built_in_function;

typedef enum symbol_visibility {
    VISIBILITY_DEFAULT=0,
    VISIBILITY_PROTECTED=1,
    VISIBILITY_HIDDEN=2,
    VISIBILITY_INTERNAL=3
} symbol_visibility;

typedef enum tree_node_structure_enum {
    TS_BASE=0,
    TS_COMMON=1,
    TS_INT_CST=2,
    TS_REAL_CST=3,
    TS_FIXED_CST=4,
    TS_VECTOR=5,
    TS_STRING=6,
    TS_COMPLEX=7,
    TS_IDENTIFIER=8,
    TS_DECL_MINIMAL=9,
    TS_DECL_COMMON=10,
    TS_DECL_WRTL=11,
    TS_DECL_NON_COMMON=12,
    TS_DECL_WITH_VIS=13,
    TS_FIELD_DECL=14,
    TS_VAR_DECL=15,
    TS_PARM_DECL=16,
    TS_LABEL_DECL=17,
    TS_RESULT_DECL=18,
    TS_CONST_DECL=19,
    TS_TYPE_DECL=20,
    TS_FUNCTION_DECL=21,
    TS_TYPE=22,
    TS_LIST=23,
    TS_VEC=24,
    TS_EXP=25,
    TS_SSA_NAME=26,
    TS_BLOCK=27,
    TS_BINFO=28,
    TS_STATEMENT_LIST=29,
    TS_CONSTRUCTOR=30,
    TS_OMP_CLAUSE=31,
    TS_OPTIMIZATION=32,
    TS_TARGET_OPTION=33,
    LAST_TS_ENUM=34
} tree_node_structure_enum;

typedef enum plugin_event {
    PLUGIN_PASS_MANAGER_SETUP=0,
    PLUGIN_FINISH_TYPE=1,
    PLUGIN_FINISH_UNIT=2,
    PLUGIN_PRE_GENERICIZE=3,
    PLUGIN_FINISH=4,
    PLUGIN_INFO=5,
    PLUGIN_GGC_START=6,
    PLUGIN_GGC_MARKING=7,
    PLUGIN_GGC_END=8,
    PLUGIN_REGISTER_GGC_ROOTS=9,
    PLUGIN_REGISTER_GGC_CACHES=10,
    PLUGIN_ATTRIBUTES=11,
    PLUGIN_START_UNIT=12,
    PLUGIN_PRAGMAS=13,
    PLUGIN_ALL_PASSES_START=14,
    PLUGIN_ALL_PASSES_END=15,
    PLUGIN_ALL_IPA_PASSES_START=16,
    PLUGIN_ALL_IPA_PASSES_END=17,
    PLUGIN_OVERRIDE_GATE=18,
    PLUGIN_PASS_EXECUTION=19,
    PLUGIN_EARLY_GIMPLE_PASSES_START=20,
    PLUGIN_EARLY_GIMPLE_PASSES_END=21,
    PLUGIN_NEW_PASS=22,
    PLUGIN_EVENT_FIRST_DYNAMIC=23
} plugin_event;

typedef enum tls_model {
    TLS_MODEL_NONE=0,
    TLS_MODEL_EMULATED=1,
    TLS_MODEL_GLOBAL_DYNAMIC=2,
    TLS_MODEL_REAL=2,
    TLS_MODEL_LOCAL_DYNAMIC=3,
    TLS_MODEL_INITIAL_EXEC=4,
    TLS_MODEL_LOCAL_EXEC=5
} tls_model;

typedef enum processor_type {
    PROCESSOR_I386=0,
    PROCESSOR_I486=1,
    PROCESSOR_PENTIUM=2,
    PROCESSOR_PENTIUMPRO=3,
    PROCESSOR_GEODE=4,
    PROCESSOR_K6=5,
    PROCESSOR_ATHLON=6,
    PROCESSOR_PENTIUM4=7,
    PROCESSOR_K8=8,
    PROCESSOR_NOCONA=9,
    PROCESSOR_CORE2=10,
    PROCESSOR_GENERIC32=11,
    PROCESSOR_GENERIC64=12,
    PROCESSOR_AMDFAM10=13,
    PROCESSOR_ATOM=14,
    PROCESSOR_max=15
} processor_type;

typedef enum cmodel {
    CM_32=0,
    CM_SMALL=1,
    CM_KERNEL=2,
    CM_MEDIUM=3,
    CM_LARGE=4,
    CM_SMALL_PIC=5,
    CM_MEDIUM_PIC=6,
    CM_LARGE_PIC=7
} cmodel;

typedef enum ix86_entity {
    I387_TRUNC=0,
    I387_FLOOR=1,
    I387_CEIL=2,
    I387_MASK_PM=3,
    MAX_386_ENTITIES=4
} ix86_entity;

typedef struct stringop_algs stringop_algs, *Pstringop_algs;

typedef enum stringop_alg {
    no_stringop=0,
    libcall=1,
    rep_prefix_1_byte=2,
    rep_prefix_4_byte=3,
    rep_prefix_8_byte=4,
    loop_1_byte=5,
    loop=6,
    unrolled_loop=7
} stringop_alg;

typedef struct stringop_strategy stringop_strategy, *Pstringop_strategy;

struct stringop_strategy {
    int max;
    enum stringop_alg alg;
};

struct stringop_algs {
    enum stringop_alg unknown_size;
    struct stringop_strategy size[4];
};

typedef enum ix86_tune_indices {
    X86_TUNE_USE_LEAVE=0,
    X86_TUNE_PUSH_MEMORY=1,
    X86_TUNE_ZERO_EXTEND_WITH_AND=2,
    X86_TUNE_UNROLL_STRLEN=3,
    X86_TUNE_DEEP_BRANCH_PREDICTION=4,
    X86_TUNE_BRANCH_PREDICTION_HINTS=5,
    X86_TUNE_DOUBLE_WITH_ADD=6,
    X86_TUNE_USE_SAHF=7,
    X86_TUNE_MOVX=8,
    X86_TUNE_PARTIAL_REG_STALL=9,
    X86_TUNE_PARTIAL_FLAG_REG_STALL=10,
    X86_TUNE_USE_HIMODE_FIOP=11,
    X86_TUNE_USE_SIMODE_FIOP=12,
    X86_TUNE_USE_MOV0=13,
    X86_TUNE_USE_CLTD=14,
    X86_TUNE_USE_XCHGB=15,
    X86_TUNE_SPLIT_LONG_MOVES=16,
    X86_TUNE_READ_MODIFY_WRITE=17,
    X86_TUNE_READ_MODIFY=18,
    X86_TUNE_PROMOTE_QIMODE=19,
    X86_TUNE_FAST_PREFIX=20,
    X86_TUNE_SINGLE_STRINGOP=21,
    X86_TUNE_QIMODE_MATH=22,
    X86_TUNE_HIMODE_MATH=23,
    X86_TUNE_PROMOTE_QI_REGS=24,
    X86_TUNE_PROMOTE_HI_REGS=25,
    X86_TUNE_ADD_ESP_4=26,
    X86_TUNE_ADD_ESP_8=27,
    X86_TUNE_SUB_ESP_4=28,
    X86_TUNE_SUB_ESP_8=29,
    X86_TUNE_INTEGER_DFMODE_MOVES=30,
    X86_TUNE_PARTIAL_REG_DEPENDENCY=31,
    X86_TUNE_SSE_PARTIAL_REG_DEPENDENCY=32,
    X86_TUNE_SSE_UNALIGNED_MOVE_OPTIMAL=33,
    X86_TUNE_SSE_SPLIT_REGS=34,
    X86_TUNE_SSE_TYPELESS_STORES=35,
    X86_TUNE_SSE_LOAD0_BY_PXOR=36,
    X86_TUNE_MEMORY_MISMATCH_STALL=37,
    X86_TUNE_PROLOGUE_USING_MOVE=38,
    X86_TUNE_EPILOGUE_USING_MOVE=39,
    X86_TUNE_SHIFT1=40,
    X86_TUNE_USE_FFREEP=41,
    X86_TUNE_INTER_UNIT_MOVES=42,
    X86_TUNE_INTER_UNIT_CONVERSIONS=43,
    X86_TUNE_FOUR_JUMP_LIMIT=44,
    X86_TUNE_SCHEDULE=45,
    X86_TUNE_USE_BT=46,
    X86_TUNE_USE_INCDEC=47,
    X86_TUNE_PAD_RETURNS=48,
    X86_TUNE_EXT_80387_CONSTANTS=49,
    X86_TUNE_SHORTEN_X87_SSE=50,
    X86_TUNE_AVOID_VECTOR_DECODE=51,
    X86_TUNE_PROMOTE_HIMODE_IMUL=52,
    X86_TUNE_SLOW_IMUL_IMM32_MEM=53,
    X86_TUNE_SLOW_IMUL_IMM8=54,
    X86_TUNE_MOVE_M1_VIA_OR=55,
    X86_TUNE_NOT_UNPAIRABLE=56,
    X86_TUNE_NOT_VECTORMODE=57,
    X86_TUNE_USE_VECTOR_FP_CONVERTS=58,
    X86_TUNE_USE_VECTOR_CONVERTS=59,
    X86_TUNE_FUSE_CMP_AND_BRANCH=60,
    X86_TUNE_OPT_AGU=61,
    X86_TUNE_LAST=62
} ix86_tune_indices;

typedef enum asm_dialect {
    ASM_ATT=0,
    ASM_INTEL=1
} asm_dialect;

typedef enum ix86_arch_indices {
    X86_ARCH_CMOVE=0,
    X86_ARCH_CMPXCHG=1,
    X86_ARCH_CMPXCHG8B=2,
    X86_ARCH_XADD=3,
    X86_ARCH_BSWAP=4,
    X86_ARCH_LAST=5
} ix86_arch_indices;

typedef enum fpmath_unit {
    FPMATH_387=1,
    FPMATH_SSE=2
} fpmath_unit;

typedef struct processor_costs processor_costs, *Pprocessor_costs;

struct processor_costs {
    int add;
    int lea;
    int shift_var;
    int shift_const;
    int mult_init[5];
    int mult_bit;
    int divide[5];
    int movsx;
    int movzx;
    int large_insn;
    int move_ratio;
    int movzbl_load;
    int int_load[3];
    int int_store[3];
    int fp_move;
    int fp_load[3];
    int fp_store[3];
    int mmx_move;
    int mmx_load[2];
    int mmx_store[2];
    int sse_move;
    int sse_load[3];
    int sse_store[3];
    int mmxsse_to_integer;
    int l1_cache_size;
    int l2_cache_size;
    int prefetch_block;
    int simultaneous_prefetches;
    int branch_cost;
    int fadd;
    int fmul;
    int fdiv;
    int fabs;
    int fchs;
    int fsqrt;
    struct stringop_algs memcpy[2];
    struct stringop_algs memset[2];
    int scalar_stmt_cost;
    int scalar_load_cost;
    int scalar_store_cost;
    int vec_stmt_cost;
    int vec_to_scalar_cost;
    int scalar_to_vec_cost;
    int vec_align_load_cost;
    int vec_unalign_load_cost;
    int vec_store_cost;
    int cond_taken_branch_cost;
    int cond_not_taken_branch_cost;
};

typedef enum tls_dialect {
    TLS_DIALECT_GNU=0,
    TLS_DIALECT_GNU2=1,
    TLS_DIALECT_SUN=2
} tls_dialect;

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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
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




uint VEC_tree_base_length(VEC_tree_base *vec_)

{
  uint uVar1;
  
  if (vec_ == (VEC_tree_base *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = vec_->num;
  }
  return uVar1;
}



int VEC_tree_base_iterate(VEC_tree_base *vec_,uint ix_,tree *ptr)

{
  int iVar1;
  
  if ((vec_ == (VEC_tree_base *)0x0) || (vec_->num <= ix_)) {
    *ptr = (tree)0x0;
    iVar1 = 0;
  }
  else {
    *ptr = vec_->vec[ix_];
    iVar1 = 1;
  }
  return iVar1;
}



int VEC_tree_base_space(VEC_tree_base *vec_,int alloc_)

{
  bool bVar1;
  
  if (vec_ == (VEC_tree_base *)0x0) {
    bVar1 = alloc_ == 0;
  }
  else {
    bVar1 = (uint)alloc_ <= vec_->alloc - vec_->num;
  }
  return (uint)bVar1;
}



tree * VEC_tree_base_quick_push(VEC_tree_base *vec_,tree obj_)

{
  uint uVar1;
  tree *slot_;
  
  uVar1 = vec_->num;
  vec_->num = uVar1 + 1;
  vec_->vec[uVar1] = obj_;
  return vec_->vec + uVar1;
}



VEC_tree_gc * VEC_tree_gc_alloc(int alloc_)

{
  VEC_tree_gc *pVVar1;
  
  pVVar1 = (VEC_tree_gc *)vec_gc_p_reserve_exact(0,alloc_);
  return pVVar1;
}



void VEC_tree_gc_free(VEC_tree_gc **vec_)

{
  if (*vec_ != (VEC_tree_gc *)0x0) {
    ggc_free(*vec_);
  }
  *vec_ = (VEC_tree_gc *)0x0;
  return;
}



int VEC_tree_gc_reserve(VEC_tree_gc **vec_,int alloc_)

{
  int iVar1;
  VEC_tree_gc *pVVar2;
  VEC_tree_base *vec__00;
  int extend;
  
  if (*vec_ == (VEC_tree_gc *)0x0) {
    vec__00 = (VEC_tree_base *)0x0;
  }
  else {
    vec__00 = (VEC_tree_base *)*vec_;
  }
  iVar1 = VEC_tree_base_space(vec__00,alloc_);
  if ((iVar1 == 0) != 0) {
    pVVar2 = (VEC_tree_gc *)vec_gc_p_reserve(*vec_,alloc_);
    *vec_ = pVVar2;
  }
  return (uint)(iVar1 == 0);
}



tree * VEC_tree_gc_safe_push(VEC_tree_gc **vec_,tree obj_)

{
  tree *pptVar1;
  VEC_tree_base *vec__00;
  
  VEC_tree_gc_reserve(vec_,1);
  if (*vec_ == (VEC_tree_gc *)0x0) {
    vec__00 = (VEC_tree_base *)0x0;
  }
  else {
    vec__00 = (VEC_tree_base *)*vec_;
  }
  pptVar1 = VEC_tree_base_quick_push(vec__00,obj_);
  return pptVar1;
}



VEC_tree_heap * VEC_tree_heap_alloc(int alloc_)

{
  VEC_tree_heap *pVVar1;
  
  pVVar1 = (VEC_tree_heap *)vec_heap_p_reserve_exact(0,alloc_);
  return pVVar1;
}



void VEC_tree_heap_free(VEC_tree_heap **vec_)

{
  if (*vec_ != (VEC_tree_heap *)0x0) {
    free(*vec_);
  }
  *vec_ = (VEC_tree_heap *)0x0;
  return;
}



int VEC_tree_heap_reserve(VEC_tree_heap **vec_,int alloc_)

{
  int iVar1;
  VEC_tree_heap *pVVar2;
  VEC_tree_base *vec__00;
  int extend;
  
  if (*vec_ == (VEC_tree_heap *)0x0) {
    vec__00 = (VEC_tree_base *)0x0;
  }
  else {
    vec__00 = (VEC_tree_base *)*vec_;
  }
  iVar1 = VEC_tree_base_space(vec__00,alloc_);
  if ((iVar1 == 0) != 0) {
    pVVar2 = (VEC_tree_heap *)vec_heap_p_reserve(*vec_,alloc_);
    *vec_ = pVVar2;
  }
  return (uint)(iVar1 == 0);
}



tree * VEC_tree_heap_safe_push(VEC_tree_heap **vec_,tree obj_)

{
  tree *pptVar1;
  VEC_tree_base *vec__00;
  
  VEC_tree_heap_reserve(vec_,1);
  if (*vec_ == (VEC_tree_heap *)0x0) {
    vec__00 = (VEC_tree_base *)0x0;
  }
  else {
    vec__00 = (VEC_tree_base *)*vec_;
  }
  pptVar1 = VEC_tree_base_quick_push(vec__00,obj_);
  return pptVar1;
}



uint VEC_constructor_elt_base_length(VEC_constructor_elt_base *vec_)

{
  uint uVar1;
  
  if (vec_ == (VEC_constructor_elt_base *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = vec_->num;
  }
  return uVar1;
}



constructor_elt * VEC_constructor_elt_base_last(VEC_constructor_elt_base *vec_)

{
  return vec_->vec + (vec_->num - 1);
}



int tree_operand_length(const_tree node)

{
  uint uVar1;
  
  if (*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)node * 4) == 9) {
    uVar1 = (uint)*(undefined8 *)(*(long *)&node->field_0x28 + 0x18);
  }
  else {
    uVar1 = (uint)(byte)(&tree_code_length)[(int)(uint)*(ushort *)node];
  }
  return uVar1;
}



int VEC_c_goto_bindings_p_base_iterate
              (VEC_c_goto_bindings_p_base *vec_,uint ix_,c_goto_bindings_p *ptr)

{
  int iVar1;
  
  if ((vec_ == (VEC_c_goto_bindings_p_base *)0x0) || (vec_->num <= ix_)) {
    *ptr = (c_goto_bindings_p)0x0;
    iVar1 = 0;
  }
  else {
    *ptr = vec_->vec[ix_];
    iVar1 = 1;
  }
  return iVar1;
}



int VEC_c_goto_bindings_p_base_space(VEC_c_goto_bindings_p_base *vec_,int alloc_)

{
  bool bVar1;
  
  if (vec_ == (VEC_c_goto_bindings_p_base *)0x0) {
    bVar1 = alloc_ == 0;
  }
  else {
    bVar1 = (uint)alloc_ <= vec_->alloc - vec_->num;
  }
  return (uint)bVar1;
}



c_goto_bindings_p *
VEC_c_goto_bindings_p_base_quick_push(VEC_c_goto_bindings_p_base *vec_,c_goto_bindings_p obj_)

{
  uint uVar1;
  c_goto_bindings_p *slot_;
  
  uVar1 = vec_->num;
  vec_->num = uVar1 + 1;
  vec_->vec[uVar1] = obj_;
  return vec_->vec + uVar1;
}



void VEC_c_goto_bindings_p_base_truncate(VEC_c_goto_bindings_p_base *vec_,uint size_)

{
  if (vec_ != (VEC_c_goto_bindings_p_base *)0x0) {
    vec_->num = size_;
  }
  return;
}



VEC_c_goto_bindings_p_gc * VEC_c_goto_bindings_p_gc_alloc(int alloc_)

{
  VEC_c_goto_bindings_p_gc *pVVar1;
  
  pVVar1 = (VEC_c_goto_bindings_p_gc *)vec_gc_p_reserve_exact(0,alloc_);
  return pVVar1;
}



int VEC_c_goto_bindings_p_gc_reserve(VEC_c_goto_bindings_p_gc **vec_,int alloc_)

{
  int iVar1;
  VEC_c_goto_bindings_p_gc *pVVar2;
  VEC_c_goto_bindings_p_base *vec__00;
  int extend;
  
  if (*vec_ == (VEC_c_goto_bindings_p_gc *)0x0) {
    vec__00 = (VEC_c_goto_bindings_p_base *)0x0;
  }
  else {
    vec__00 = (VEC_c_goto_bindings_p_base *)*vec_;
  }
  iVar1 = VEC_c_goto_bindings_p_base_space(vec__00,alloc_);
  if ((iVar1 == 0) != 0) {
    pVVar2 = (VEC_c_goto_bindings_p_gc *)vec_gc_p_reserve(*vec_,alloc_);
    *vec_ = pVVar2;
  }
  return (uint)(iVar1 == 0);
}



c_goto_bindings_p *
VEC_c_goto_bindings_p_gc_safe_push(VEC_c_goto_bindings_p_gc **vec_,c_goto_bindings_p obj_)

{
  c_goto_bindings_p *ppcVar1;
  VEC_c_goto_bindings_p_base *vec__00;
  
  VEC_c_goto_bindings_p_gc_reserve(vec_,1);
  if (*vec_ == (VEC_c_goto_bindings_p_gc *)0x0) {
    vec__00 = (VEC_c_goto_bindings_p_base *)0x0;
  }
  else {
    vec__00 = (VEC_c_goto_bindings_p_base *)*vec_;
  }
  ppcVar1 = VEC_c_goto_bindings_p_base_quick_push(vec__00,obj_);
  return ppcVar1;
}



int VEC_c_binding_ptr_base_iterate(VEC_c_binding_ptr_base *vec_,uint ix_,c_binding_ptr *ptr)

{
  int iVar1;
  
  if ((vec_ == (VEC_c_binding_ptr_base *)0x0) || (vec_->num <= ix_)) {
    *ptr = (c_binding_ptr)0x0;
    iVar1 = 0;
  }
  else {
    *ptr = vec_->vec[ix_];
    iVar1 = 1;
  }
  return iVar1;
}



int VEC_c_binding_ptr_base_space(VEC_c_binding_ptr_base *vec_,int alloc_)

{
  bool bVar1;
  
  if (vec_ == (VEC_c_binding_ptr_base *)0x0) {
    bVar1 = alloc_ == 0;
  }
  else {
    bVar1 = (uint)alloc_ <= vec_->alloc - vec_->num;
  }
  return (uint)bVar1;
}



c_binding_ptr * VEC_c_binding_ptr_base_quick_push(VEC_c_binding_ptr_base *vec_,c_binding_ptr obj_)

{
  uint uVar1;
  c_binding_ptr *slot_;
  
  uVar1 = vec_->num;
  vec_->num = uVar1 + 1;
  vec_->vec[uVar1] = obj_;
  return vec_->vec + uVar1;
}



VEC_c_binding_ptr_heap * VEC_c_binding_ptr_heap_alloc(int alloc_)

{
  VEC_c_binding_ptr_heap *pVVar1;
  
  pVVar1 = (VEC_c_binding_ptr_heap *)vec_heap_p_reserve_exact(0,alloc_);
  return pVVar1;
}



void VEC_c_binding_ptr_heap_free(VEC_c_binding_ptr_heap **vec_)

{
  if (*vec_ != (VEC_c_binding_ptr_heap *)0x0) {
    free(*vec_);
  }
  *vec_ = (VEC_c_binding_ptr_heap *)0x0;
  return;
}



int VEC_c_binding_ptr_heap_reserve(VEC_c_binding_ptr_heap **vec_,int alloc_)

{
  int iVar1;
  VEC_c_binding_ptr_heap *pVVar2;
  VEC_c_binding_ptr_base *vec__00;
  int extend;
  
  if (*vec_ == (VEC_c_binding_ptr_heap *)0x0) {
    vec__00 = (VEC_c_binding_ptr_base *)0x0;
  }
  else {
    vec__00 = (VEC_c_binding_ptr_base *)*vec_;
  }
  iVar1 = VEC_c_binding_ptr_base_space(vec__00,alloc_);
  if ((iVar1 == 0) != 0) {
    pVVar2 = (VEC_c_binding_ptr_heap *)vec_heap_p_reserve(*vec_,alloc_);
    *vec_ = pVVar2;
  }
  return (uint)(iVar1 == 0);
}



c_binding_ptr * VEC_c_binding_ptr_heap_safe_push(VEC_c_binding_ptr_heap **vec_,c_binding_ptr obj_)

{
  c_binding_ptr *ppcVar1;
  VEC_c_binding_ptr_base *vec__00;
  
  VEC_c_binding_ptr_heap_reserve(vec_,1);
  if (*vec_ == (VEC_c_binding_ptr_heap *)0x0) {
    vec__00 = (VEC_c_binding_ptr_base *)0x0;
  }
  else {
    vec__00 = (VEC_c_binding_ptr_base *)*vec_;
  }
  ppcVar1 = VEC_c_binding_ptr_base_quick_push(vec__00,obj_);
  return ppcVar1;
}



tree add_stmt(tree t)

{
  short sVar1;
  stmt_tree psVar2;
  tree_code code;
  
  sVar1 = *(short *)t;
  if (((((t != (tree)0x0) && (3 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4)))
       && (*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4) < 0xb)) && (sVar1 != 0x85)
      ) && (((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4) < 4 ||
             (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4))) ||
            (*(int *)&t->field_0x18 == 0)))) {
    *(undefined4 *)&t->field_0x18 = input_location;
  }
  if ((sVar1 == 0x85) || (sVar1 == 0x8b)) {
    psVar2 = current_stmt_tree();
    psVar2->x_cur_stmt_list->field_0x4 = psVar2->x_cur_stmt_list->field_0x4 | 0x10;
  }
  psVar2 = current_stmt_tree();
  append_to_statement_list_force(t,psVar2);
  return t;
}



void c_print_identifier(FILE *file,tree node,int indent)

{
  long lVar1;
  undefined8 uVar2;
  tree rid;
  
  if (*(long *)&node->field_0x38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)&node->field_0x38 + 8);
  }
  print_node(file,"symbol",uVar2,indent + 4);
  if (*(long *)&node->field_0x40 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)&node->field_0x40 + 8);
  }
  print_node(file,&DAT_0011c9e7,uVar2,indent + 4);
  if (*(long *)&node->field_0x48 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)&node->field_0x48 + 8);
  }
  print_node(file,"label",uVar2,indent + 4);
  if (((node->field_0x4 & 2) != 0) && (node->field_0x29 != 'A')) {
    lVar1 = *(long *)((ulong)(byte)node->field_0x29 * 8 + ridpointers);
    indent_to(file,indent + 4);
    fprintf((FILE *)file,"rid %p \"%s\"",lVar1,*(undefined8 *)(lVar1 + 0x18));
  }
  return;
}



void bind(tree name,tree decl,c_scope *scope,uchar invisible,uchar nested,location_t locus)

{
  c_binding *b;
  c_binding **here;
  
  if (binding_freelist == (c_binding *)0x0) {
    b = (c_binding *)ggc_alloc_stat(0x30);
  }
  else {
    b = binding_freelist;
    binding_freelist = binding_freelist->prev;
  }
  b->shadowed = (c_binding *)0x0;
  b->decl = decl;
  b->id = name;
  *(uint *)&b->field_0x28 =
       *(uint *)&b->field_0x28 & 0xf0000000 | *(uint *)&scope->field_0x28 & 0xfffffff;
  b->field_0x2b = b->field_0x2b & 0xef | (byte)((invisible & 1) << 4);
  b->field_0x2b = b->field_0x2b & 0xdf | (byte)((nested & 1) << 5);
  b->field_0x2b = b->field_0x2b & 0xbf;
  b->field_0x2b = b->field_0x2b & 0x7f;
  b->locus = locus;
  b->u = 0;
  b->prev = scope->bindings;
  scope->bindings = b;
  if (name != (tree)0x0) {
    switch(*(undefined2 *)decl) {
    case 0:
    case 0x1d:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      here = (c_binding **)&name->field_0x38;
      break;
    default:
      fancy_abort("c-decl.c",0x279,&DAT_0011c9fd);
      break;
    case 6:
    case 0x10:
    case 0x11:
      here = (c_binding **)&name->field_0x40;
      break;
    case 0x1e:
      here = (c_binding **)&name->field_0x48;
    }
    while ((*here != (c_binding *)0x0 &&
           ((*(uint *)&scope->field_0x28 & 0xfffffff) < (*(uint *)&(*here)->field_0x28 & 0xfffffff))
           )) {
      here = &(*here)->shadowed;
    }
    b->shadowed = *here;
    *here = b;
  }
  return;
}



c_binding * free_binding_and_advance(c_binding *b)

{
  c_binding *pcVar1;
  c_binding *prev;
  
  pcVar1 = b->prev;
  memset(b,0,0x30);
  b->prev = binding_freelist;
  binding_freelist = b;
  return pcVar1;
}



void bind_label(tree name,tree label,c_scope *scope,c_label_vars *label_vars)

{
  c_binding *pcVar1;
  c_binding *b;
  
  bind(name,label,scope,'\0','\0',0);
  scope->field_0x2c = scope->field_0x2c | 4;
  pcVar1 = scope->bindings;
  if (label != pcVar1->decl) {
    fancy_abort("c-decl.c",0x2a4,&DAT_0011c9fd);
  }
  label_vars->shadowed = (c_label_vars *)pcVar1->u;
  pcVar1->u = label_vars;
  return;
}



void c_finish_incomplete_decl(tree decl)

{
  short *psVar1;
  tree type;
  
  if ((((*(short *)decl == 0x20) && (psVar1 = *(short **)&decl->field_0x10, psVar1 != global_trees))
      && (*psVar1 == 0xf)) && (((decl->field_0x3b & 2) == 0 && (*(long *)(psVar1 + 0xc) == 0)))) {
    warning_at(*(undefined4 *)&decl->field_0x18,0,"array %q+D assumed to have one element",decl);
    complete_array_type(&decl->field_0x10,0,1);
    layout_decl(decl,0);
  }
  return;
}



void record_inline_static(location_t loc,tree func,tree decl,c_inline_static_type type)

{
  c_inline_static *pcVar1;
  c_inline_static *csi;
  
  pcVar1 = (c_inline_static *)ggc_alloc_stat(0x28);
  pcVar1->location = loc;
  pcVar1->function = func;
  pcVar1->static_decl = decl;
  pcVar1->type = type;
  pcVar1->next = c_inline_statics;
  c_inline_statics = pcVar1;
  return;
}



void check_inline_statics(void)

{
  c_inline_static *csi;
  
  for (csi = c_inline_statics; csi != (c_inline_static *)0x0; csi = csi->next) {
    if ((csi->function->field_0x3b & 2) != 0) {
      if (csi->type == csi_internal) {
        pedwarn(csi->location,0,"%qD is static but used in inline function %qD which is not static",
                csi->static_decl,csi->function);
      }
      else if (csi->type == csi_modifiable) {
        pedwarn(csi->location,0,
                "%q+D is static but declared in inline function %qD which is not static",
                csi->static_decl,csi->function);
      }
      else {
        fancy_abort("c-decl.c",0x2ea,&DAT_0011c9fd);
      }
    }
  }
  c_inline_statics = (c_inline_static *)0x0;
  return;
}



void set_spot_bindings(c_spot_bindings *p,uchar defining)

{
  if (defining == '\0') {
    p->scope = (c_scope *)0x0;
    p->bindings_in_scope = (c_binding *)0x0;
  }
  else {
    p->scope = current_scope;
    p->bindings_in_scope = current_scope->bindings;
  }
  p->stmt_exprs = 0;
  p->left_stmt_expr = '\0';
  return;
}



uchar decl_jump_unsafe(tree decl)

{
  uchar uVar1;
  char cVar2;
  
  if ((decl == global_trees) || (*(tree *)&decl->field_0x10 == global_trees)) {
    uVar1 = '\0';
  }
  else {
    if (((*(short *)decl == 0x20) || (*(short *)decl == 0x23)) &&
       (cVar2 = variably_modified_type_p(*(undefined8 *)&decl->field_0x10,0), cVar2 != '\0')) {
      return '\x01';
    }
    if (((warn_jump_misses_init == 0) || (*(short *)decl != 0x20)) ||
       (((decl->field_0x3 & 4) != 0 || (*(long *)&decl->field_0x50 == 0)))) {
      uVar1 = '\0';
    }
    else {
      uVar1 = '\x01';
    }
  }
  return uVar1;
}



uchar update_spot_bindings(c_scope *scope,c_spot_bindings *p)

{
  bool bVar1;
  
  bVar1 = scope == p->scope;
  if (bVar1) {
    p->scope = scope->outer;
    p->bindings_in_scope = p->scope->bindings;
  }
  return bVar1;
}



void * objc_get_current_scope(void)

{
  return current_scope;
}



void objc_mark_locals_volatile(void *enclosing_blk)

{
  c_scope *scope;
  c_binding *b;
  
  scope = current_scope;
  while( true ) {
    if ((scope == (c_scope *)0x0) || (scope == (c_scope *)enclosing_blk)) {
      return;
    }
    for (b = scope->bindings; b != (c_binding *)0x0; b = b->prev) {
      objc_volatilize_decl(b->decl);
    }
    if ((scope->field_0x2b & 0x80) != 0) break;
    scope = scope->outer;
  }
  return;
}



int global_bindings_p(void)

{
  int iVar1;
  
  if ((current_scope == file_scope) && (c_override_global_bindings_to_false == '\0')) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void keep_next_level(void)

{
  keep_next_level_flag = '\x01';
  return;
}



void set_float_const_decimal64(void)

{
  current_scope->field_0x2c = current_scope->field_0x2c | 2;
  return;
}



void clear_float_const_decimal64(void)

{
  current_scope->field_0x2c = current_scope->field_0x2c & 0xfd;
  return;
}



uchar float_const_decimal64_p(void)

{
  return (byte)current_scope->field_0x2c >> 1 & 1;
}



void declare_parm_level(void)

{
  current_scope->field_0x2b = current_scope->field_0x2b | 0x10;
  return;
}



void push_scope(void)

{
  uint uVar1;
  c_scope *scope;
  
  if (next_is_function_body == '\0') {
    if (scope_freelist == (c_scope *)0x0) {
      scope = (c_scope *)ggc_alloc_cleared_stat(0x30);
    }
    else {
      scope = scope_freelist;
      scope_freelist = scope_freelist->outer;
    }
    if (current_scope == (c_scope *)0x0) {
      scope->field_0x2c = scope->field_0x2c & 0xfd;
    }
    else {
      scope->field_0x2c =
           scope->field_0x2c & 0xfd | ((byte)current_scope->field_0x2c >> 1 & 1) * '\x02';
    }
    scope->field_0x2c = scope->field_0x2c & 0xfe | keep_next_level_flag & 1;
    scope->outer = current_scope;
    if (current_scope == (c_scope *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(uint *)&current_scope->field_0x28 & 0xfffffff) + 1 & 0xfffffff;
    }
    *(uint *)&scope->field_0x28 = *(uint *)&scope->field_0x28 & 0xf0000000 | uVar1;
    if ((current_scope != (c_scope *)0x0) && ((*(uint *)&scope->field_0x28 & 0xfffffff) == 0)) {
      *(uint *)&scope->field_0x28 =
           *(uint *)&scope->field_0x28 & 0xf0000000 |
           (*(uint *)&scope->field_0x28 & 0xfffffff) + 0xfffffff & 0xfffffff;
      sorry("GCC supports only %u nested scopes",*(uint *)&scope->field_0x28 & 0xfffffff);
    }
    current_scope = scope;
    keep_next_level_flag = '\0';
  }
  else {
    current_scope->field_0x2b = current_scope->field_0x2b & 0xef;
    current_scope->field_0x2b = current_scope->field_0x2b | 0x80;
    current_scope->field_0x2c = current_scope->field_0x2c | 1;
    current_scope->outer_function = current_function_scope;
    current_function_scope = current_scope;
    keep_next_level_flag = '\0';
    next_is_function_body = '\0';
    if (current_scope->outer == (c_scope *)0x0) {
      current_scope->field_0x2c = current_scope->field_0x2c & 0xfd;
    }
    else {
      current_scope->field_0x2c =
           current_scope->field_0x2c & 0xfd |
           ((byte)current_scope->outer->field_0x2c >> 1 & 1) * '\x02';
    }
  }
  return;
}



void update_label_decls(c_scope *scope)

{
  uchar uVar1;
  int iVar2;
  VEC_c_goto_bindings_p_base *vec_;
  long in_FS_OFFSET;
  uint ix;
  c_goto_bindings *g;
  c_scope *s;
  c_binding *b;
  c_binding *b1;
  c_label_vars *label_vars;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (s = scope; s != (c_scope *)0x0; s = s->outer) {
    if ((s->field_0x2c & 4) != 0) {
      for (b = s->bindings; b != (c_binding *)0x0; b = b->prev) {
        if (*(short *)b->decl == 0x1e) {
          label_vars = (c_label_vars *)b->u;
          b1 = (label_vars->label_bindings).bindings_in_scope;
          uVar1 = update_spot_bindings(scope,&label_vars->label_bindings);
          if (uVar1 != '\0') {
            for (; b1 != (c_binding *)0x0; b1 = b1->prev) {
              uVar1 = decl_jump_unsafe(b1->decl);
              if (uVar1 != '\0') {
                VEC_tree_gc_safe_push(&label_vars->decls_in_scope,b1->decl);
              }
            }
          }
          ix = 0;
          while( true ) {
            if (label_vars->gotos == (VEC_c_goto_bindings_p_gc *)0x0) {
              vec_ = (VEC_c_goto_bindings_p_base *)0x0;
            }
            else {
              vec_ = (VEC_c_goto_bindings_p_base *)label_vars->gotos;
            }
            iVar2 = VEC_c_goto_bindings_p_base_iterate(vec_,ix,&g);
            if (iVar2 == 0) break;
            update_spot_bindings(scope,&g->goto_bindings);
            ix = ix + 1;
          }
        }
      }
    }
    if (s == current_function_scope) break;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void set_type_context(tree type,tree context)

{
  long local_10;
  
  for (local_10 = *(long *)&type->field_0x80; local_10 != 0; local_10 = *(long *)(local_10 + 0x78))
  {
    *(tree *)(local_10 + 0x90) = context;
  }
  return;
}



tree pop_scope(void)

{
  tree type;
  c_scope *pcVar1;
  bool bVar2;
  c_scope *__s;
  long lVar3;
  long in_FS_OFFSET;
  uchar functionbody;
  uchar keep;
  tree block;
  tree context;
  tree p;
  c_binding *b;
  c_scope *scope;
  tree file_decl;
  c_scope *t_;
  c_scope *f_;
  c_scope *s_;
  tree d_;
  tree extp;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  __s = current_scope;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((char)current_scope->field_0x2b < '\0') || ((current_scope->field_0x2c & 1) != 0)) ||
     (current_scope->bindings != (c_binding *)0x0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  update_label_decls(current_scope);
  block = (tree)0x0;
  if (bVar2) {
    block = (tree)make_node_stat(4);
    *(tree *)&block->field_0x30 = __s->blocks;
    block->field_0x3 = block->field_0x3 | 1;
    for (p = __s->blocks; p != (tree)0x0; p = *(tree *)&p->field_0x8) {
      *(tree *)&p->field_0x38 = block;
    }
    *(undefined8 *)&block->field_0x20 = 0;
  }
  if ((__s->field_0x2b & 0x80) == 0) {
    if (__s == file_scope) {
      context = (tree)build_decl_stat(0,0x28,0,0);
      *(tree *)&context->field_0x8 = all_translation_units;
      all_translation_units = context;
    }
    else {
      context = block;
    }
  }
  else {
    context = current_function_decl;
  }
  b = __s->bindings;
  do {
    if (b == (c_binding *)0x0) {
      if ((((__s->field_0x2b & 0x80) == 0) && (__s != file_scope)) || (context == (tree)0x0)) {
        if (__s->outer != (c_scope *)0x0) {
          if (block == (tree)0x0) {
            if (__s->blocks != (tree)0x0) {
              pcVar1 = __s->outer;
              if (pcVar1->blocks_last == (tree)0x0) {
                pcVar1->blocks = __s->blocks;
              }
              else {
                *(tree *)&pcVar1->blocks_last->field_0x8 = __s->blocks;
              }
              pcVar1->blocks_last = __s->blocks_last;
            }
          }
          else {
            pcVar1 = __s->outer;
            if (pcVar1->blocks_last == (tree)0x0) {
              pcVar1->blocks = block;
            }
            else {
              *(tree *)&pcVar1->blocks_last->field_0x8 = block;
            }
            pcVar1->blocks_last = block;
          }
        }
      }
      else {
        *(tree *)&context->field_0x50 = block;
        *(tree *)&block->field_0x38 = context;
      }
      current_scope = __s->outer;
      if ((__s->field_0x2b & 0x80) != 0) {
        current_function_scope = __s->outer_function;
      }
      memset(__s,0,0x30);
      __s->outer = scope_freelist;
      scope_freelist = __s;
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return block;
    }
    type = b->decl;
    switch(*(undefined2 *)type) {
    case 0:
    case 0x22:
      goto switchD_00101725_caseD_0;
    default:
      fancy_abort("c-decl.c",0x4e0,&DAT_0011c9fd);
      break;
    case 6:
    case 0x10:
    case 0x11:
      set_type_context(type,context);
      if (b->id != (tree)0x0) {
        if (b != *(c_binding **)&b->id->field_0x40) {
          fancy_abort("c-decl.c",0x468,&DAT_0011c9fd);
        }
        *(c_binding **)&b->id->field_0x40 = b->shadowed;
      }
      break;
    case 0x1d:
      if ((((type->field_0x2 & 0x40) == 0) && (*(long *)&type->field_0x50 != 0)) &&
         (((type->field_0x2 & 4) != 0 &&
          ((*(long *)&type->field_0x60 != 0 && (type != *(tree *)&type->field_0x60)))))) {
        *(byte *)(*(long *)&type->field_0x60 + 2) = *(byte *)(*(long *)&type->field_0x60 + 2) | 4;
      }
      if (((((type->field_0x3b & 2) == 0) && (*(long *)&type->field_0x50 == 0)) &&
          (__s != file_scope)) && (__s != external_scope)) {
        error("nested function %q+D declared but never defined");
        undef_nested_function = '\x01';
      }
      else if ((((type->field_0xda & 0x20) != 0) && ((type->field_0x3 & 8) != 0)) &&
              (*(long *)&type->field_0x50 == 0)) {
        if (flag_gnu89_inline == 0) {
          pedwarn(input_location,0,"inline function %q+D declared but never defined",type);
        }
        type->field_0x3b = type->field_0x3b | 2;
      }
    case 0x21:
    case 0x23:
common_symbol:
      if ((b->field_0x2b & 0x20) == 0) {
        *(undefined8 *)&type->field_0x8 = *(undefined8 *)&block->field_0x20;
        *(tree *)&block->field_0x20 = type;
      }
      else if ((*(short *)type == 0x20) || (*(short *)type == 0x1d)) {
        lVar3 = copy_node_stat(type);
        *(byte *)(lVar3 + 0x3b) = *(byte *)(lVar3 + 0x3b) | 2;
        *(byte *)(lVar3 + 3) = *(byte *)(lVar3 + 3) & 0xfb;
        *(byte *)(lVar3 + 3) = *(byte *)(lVar3 + 3) | 8;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        *(tree *)(lVar3 + 0x28) = current_function_decl;
        if (*(short *)type == 0x1d) {
          *(undefined8 *)(lVar3 + 0xa8) = 0;
          *(undefined8 *)(lVar3 + 0x98) = 0;
          *(undefined8 *)(lVar3 + 0xb8) = 0;
        }
        if (b->locus != 0) {
          *(location_t *)(lVar3 + 0x18) = b->locus;
        }
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)&block->field_0x20;
        *(long *)&block->field_0x20 = lVar3;
      }
      if (((__s == file_scope) && (1 < num_in_fnames)) &&
         (*(tree *)&type->field_0x28 = context, *(short *)type == 0x23)) {
        set_type_context(*(tree *)&type->field_0x10,context);
      }
switchD_00101725_caseD_0:
      if (b->id != (tree)0x0) {
        if (b != *(c_binding **)&b->id->field_0x38) {
          fancy_abort("c-decl.c",0x4d8,&DAT_0011c9fd);
        }
        *(c_binding **)&b->id->field_0x38 = b->shadowed;
        if ((b->shadowed != (c_binding *)0x0) && (b->shadowed->u != 0)) {
          *(anon_union_8_2_e8869085_for_u *)&b->shadowed->decl->field_0x10 = b->shadowed->u;
        }
      }
      break;
    case 0x1e:
      if (((type->field_0x3 & 1) == 0) || (*(long *)&type->field_0x50 != 0)) {
        warn_for_unused_label(type);
      }
      else {
        error("label %q+D used but not defined");
        *(undefined8 *)&type->field_0x50 = global_trees;
      }
      *(undefined8 *)&type->field_0x8 = *(undefined8 *)&block->field_0x20;
      *(tree *)&block->field_0x20 = type;
      if (b != *(c_binding **)&b->id->field_0x48) {
        fancy_abort("c-decl.c",0x457,&DAT_0011c9fd);
      }
      *(c_binding **)&b->id->field_0x48 = b->shadowed;
      release_tree_vector(*(undefined8 *)(b->u + 0x20));
      b->u = *(undefined8 *)b->u;
      break;
    case 0x20:
      if ((((type->field_0x3 & 1) == 0) && ((type->field_0x2 & 0x80) == 0)) &&
         ((expand_location(local_28,*(undefined4 *)&type->field_0x18), local_18 == '\0' &&
          ((((*(long *)&type->field_0x20 != 0 && ((type->field_0x39 & 0x10) == 0)) &&
            (__s != file_scope)) && (__s != external_scope)))))) {
        warning(0xe6,"unused variable %q+D",type);
      }
      if ((b->field_0x2b & 0x40) != 0) {
        error("type of array %q+D completed incompatibly with implicit initialization");
      }
      goto common_symbol;
    }
    b = free_binding_and_advance(b);
  } while( true );
}



void push_file_scope(void)

{
  tree decl;
  
  if (file_scope == (c_scope *)0x0) {
    push_scope();
    file_scope = current_scope;
    start_fname_decls();
    for (decl = visible_builtins; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
      bind(*(tree *)&decl->field_0x20,decl,file_scope,'\0','\x01',*(location_t *)&decl->field_0x18);
    }
  }
  return;
}



void pop_file_scope(void)

{
  while (current_scope != file_scope) {
    pop_scope();
  }
  finish_fname_decls();
  check_inline_statics();
  if (pch_file == 0) {
    pop_scope();
    file_scope = (c_scope *)0x0;
    maybe_apply_pending_pragma_weaks();
  }
  else {
    c_common_write_pch();
  }
  return;
}



void c_bindings_start_stmt_expr(c_spot_bindings *switch_bindings)

{
  int iVar1;
  VEC_c_goto_bindings_p_base *vec_;
  long in_FS_OFFSET;
  uint ix;
  c_goto_bindings *g;
  c_scope *scope;
  c_binding *b;
  c_label_vars *label_vars;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (scope = current_scope; scope != (c_scope *)0x0; scope = scope->outer) {
    if ((scope->field_0x2c & 4) != 0) {
      for (b = scope->bindings; b != (c_binding *)0x0; b = b->prev) {
        if (*(short *)b->decl == 0x1e) {
          label_vars = (c_label_vars *)b->u;
          (label_vars->label_bindings).stmt_exprs = (label_vars->label_bindings).stmt_exprs + 1;
          ix = 0;
          while( true ) {
            if (label_vars->gotos == (VEC_c_goto_bindings_p_gc *)0x0) {
              vec_ = (VEC_c_goto_bindings_p_base *)0x0;
            }
            else {
              vec_ = (VEC_c_goto_bindings_p_base *)label_vars->gotos;
            }
            iVar1 = VEC_c_goto_bindings_p_base_iterate(vec_,ix,&g);
            if (iVar1 == 0) break;
            (g->goto_bindings).stmt_exprs = (g->goto_bindings).stmt_exprs + 1;
            ix = ix + 1;
          }
        }
      }
    }
  }
  if (switch_bindings != (c_spot_bindings *)0x0) {
    switch_bindings->stmt_exprs = switch_bindings->stmt_exprs + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void c_bindings_end_stmt_expr(c_spot_bindings *switch_bindings)

{
  int iVar1;
  VEC_c_goto_bindings_p_base *vec_;
  long in_FS_OFFSET;
  uint ix;
  c_goto_bindings *g;
  c_scope *scope;
  c_binding *b;
  c_label_vars *label_vars;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (scope = current_scope; scope != (c_scope *)0x0; scope = scope->outer) {
    if ((scope->field_0x2c & 4) != 0) {
      for (b = scope->bindings; b != (c_binding *)0x0; b = b->prev) {
        if (*(short *)b->decl == 0x1e) {
          label_vars = (c_label_vars *)b->u;
          (label_vars->label_bindings).stmt_exprs = (label_vars->label_bindings).stmt_exprs + -1;
          if ((label_vars->label_bindings).stmt_exprs < 0) {
            (label_vars->label_bindings).left_stmt_expr = '\x01';
            (label_vars->label_bindings).stmt_exprs = 0;
          }
          ix = 0;
          while( true ) {
            if (label_vars->gotos == (VEC_c_goto_bindings_p_gc *)0x0) {
              vec_ = (VEC_c_goto_bindings_p_base *)0x0;
            }
            else {
              vec_ = (VEC_c_goto_bindings_p_base *)label_vars->gotos;
            }
            iVar1 = VEC_c_goto_bindings_p_base_iterate(vec_,ix,&g);
            if (iVar1 == 0) break;
            (g->goto_bindings).stmt_exprs = (g->goto_bindings).stmt_exprs + -1;
            if ((g->goto_bindings).stmt_exprs < 0) {
              (g->goto_bindings).left_stmt_expr = '\x01';
              (g->goto_bindings).stmt_exprs = 0;
            }
            ix = ix + 1;
          }
        }
      }
    }
  }
  if ((switch_bindings != (c_spot_bindings *)0x0) &&
     (switch_bindings->stmt_exprs = switch_bindings->stmt_exprs + -1,
     switch_bindings->stmt_exprs < 0)) {
    fancy_abort("c-decl.c",0x583,&DAT_0011c9fd);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void pushtag(location_t loc,tree name,tree type)

{
  long lVar1;
  tree ptVar2;
  c_binding *b;
  
  if ((name != (tree)0x0) && (*(long *)&type->field_0x60 == 0)) {
    *(tree *)&type->field_0x60 = name;
  }
  bind(name,type,current_scope,'\0','\0',loc);
  ptVar2 = (tree)build_decl_stat(loc,0x23,0,type);
  ptVar2 = pushdecl(ptVar2);
  *(tree *)&type->field_0x8 = ptVar2;
  *(undefined8 *)&type->field_0x90 = *(undefined8 *)(*(long *)&type->field_0x8 + 0x28);
  if ((((((warn_cxx_compat != 0) && (name != (tree)0x0)) &&
        (lVar1 = *(long *)&name->field_0x38, lVar1 != 0)) &&
       ((*(long *)(lVar1 + 8) != 0 && (**(short **)(lVar1 + 8) == 0x23)))) &&
      (((*(uint *)(lVar1 + 0x28) & 0xfffffff) == (*(uint *)&current_scope->field_0x28 & 0xfffffff)
       || ((current_scope == file_scope && ((*(uint *)(lVar1 + 0x28) & 0xfffffff) == 0)))))) &&
     (*(long *)(*(long *)(*(long *)(lVar1 + 8) + 0x10) + 0x80) != *(long *)&type->field_0x80)) {
    warning_at(loc,0x31,"using %qD as both a typedef and a tag is invalid in C++",
               *(undefined8 *)(lVar1 + 8));
    if (*(int *)(lVar1 + 0x2c) != 0) {
      inform(*(undefined4 *)(lVar1 + 0x2c),"originally defined here");
    }
  }
  return;
}



tree match_builtin_function_types(tree newtype,tree oldtype)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  tree ptVar6;
  tree newargs;
  tree oldargs;
  tree oldrettype;
  tree newrettype;
  tree tryargs;
  tree trytype;
  
  psVar1 = *(short **)&oldtype->field_0x10;
  psVar2 = *(short **)&newtype->field_0x10;
  if (*psVar1 == 0xe) {
    uVar3 = vector_type_mode(psVar1);
  }
  else {
    uVar3 = (uint)*(byte *)(psVar1 + 0x1f);
  }
  if (*psVar2 == 0xe) {
    uVar4 = vector_type_mode(psVar2);
  }
  else {
    uVar4 = (uint)*(byte *)(psVar2 + 0x1f);
  }
  if (uVar3 == uVar4) {
    oldargs = *(tree *)&oldtype->field_0x18;
    ptVar6 = *(tree *)&newtype->field_0x18;
    newargs = ptVar6;
    while( true ) {
      if ((oldargs == (tree)0x0) && (newargs == (tree)0x0)) {
        uVar5 = build_function_type(psVar2,ptVar6);
        ptVar6 = (tree)build_type_attribute_variant(uVar5,*(undefined8 *)&oldtype->field_0x30);
        return ptVar6;
      }
      if ((((oldargs == (tree)0x0) || (newargs == (tree)0x0)) ||
          (*(long *)&oldargs->field_0x20 == 0)) || (*(long *)&newargs->field_0x20 == 0)) break;
      if (**(short **)&oldargs->field_0x20 == 0xe) {
        uVar3 = vector_type_mode(*(undefined8 *)&oldargs->field_0x20);
      }
      else {
        uVar3 = (uint)*(byte *)(*(long *)&oldargs->field_0x20 + 0x3e);
      }
      if (**(short **)&newargs->field_0x20 == 0xe) {
        uVar4 = vector_type_mode(*(undefined8 *)&newargs->field_0x20);
      }
      else {
        uVar4 = (uint)*(byte *)(*(long *)&newargs->field_0x20 + 0x3e);
      }
      if (uVar3 != uVar4) {
        return (tree)0x0;
      }
      oldargs = *(tree *)&oldargs->field_0x8;
      newargs = *(tree *)&newargs->field_0x8;
    }
  }
  return (tree)0x0;
}



void diagnose_arglist_conflict(tree newdecl,tree olddecl,tree newtype,tree oldtype)

{
  long lVar1;
  int iVar2;
  long lVar3;
  tree t;
  tree type;
  
  if (((*(short *)olddecl == 0x1d) &&
      (iVar2 = comptypes(*(undefined8 *)&oldtype->field_0x10,*(undefined8 *)&newtype->field_0x10),
      iVar2 != 0)) &&
     (((*(long *)&oldtype->field_0x18 == 0 && (*(long *)&olddecl->field_0x50 == 0)) ||
      ((*(long *)&newtype->field_0x18 == 0 && (*(long *)&newdecl->field_0x50 == 0)))))) {
    t = *(tree *)&oldtype->field_0x18;
    if (t == (tree)0x0) {
      t = *(tree *)&newtype->field_0x18;
    }
    for (; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
      lVar1 = *(long *)&t->field_0x20;
      if ((*(long *)&t->field_0x8 == 0) && (*(long *)(lVar1 + 0x80) != warn_traditional)) {
        inform(input_location,
               "a parameter list with an ellipsis can%\'t match an empty parameter name list declaration"
              );
        return;
      }
      lVar3 = c_type_promotes_to(lVar1);
      if (lVar1 != lVar3) {
        inform(input_location,
               "an argument type that has a default promotion can%\'t match an empty parameter name list declaration"
              );
        return;
      }
    }
  }
  return;
}



uchar validate_proto_after_old_defn(tree newdecl,tree newtype,tree oldtype)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int i;
  tree newargs;
  tree oldargs;
  tree oldargtype;
  tree newargtype;
  
  oldargs = *(tree *)&oldtype->field_0x88;
  newargs = *(tree *)&newtype->field_0x18;
  i = 1;
  while( true ) {
    if ((*(long *)&oldargs->field_0x20 == global_trees) ||
       (*(long *)&newargs->field_0x20 == global_trees)) {
      return '\0';
    }
    lVar1 = *(long *)(*(long *)&oldargs->field_0x20 + 0x80);
    lVar2 = *(long *)(*(long *)&newargs->field_0x20 + 0x80);
    if ((lVar1 == warn_traditional) && (lVar2 == warn_traditional)) break;
    if (lVar1 == warn_traditional) {
      error("prototype for %q+D declares more arguments than previous old-style definition",newdecl)
      ;
      return '\0';
    }
    if (lVar2 == warn_traditional) {
      error("prototype for %q+D declares fewer arguments than previous old-style definition",newdecl
           );
      return '\0';
    }
    iVar3 = comptypes(lVar1,lVar2);
    if (iVar3 == 0) {
      error("prototype for %q+D declares argument %d with incompatible type",newdecl,i);
      return '\0';
    }
    oldargs = *(tree *)&oldargs->field_0x8;
    newargs = *(tree *)&newargs->field_0x8;
    i = i + 1;
  }
  warning(0,"prototype for %q+D follows non-prototype definition",newdecl);
  return '\x01';
}



void locate_old_decl(tree decl)

{
  if ((*(short *)decl != 0x1d) || ((decl->field_0xd9 & 0x18) == 0)) {
    if (*(long *)&decl->field_0x50 == 0) {
      if ((decl->field_0x3a & 2) == 0) {
        inform(input_location,"previous declaration of %q+D was here",decl);
      }
      else {
        inform(input_location,"previous implicit declaration of %q+D was here",decl);
      }
    }
    else {
      inform(input_location,"previous definition of %q+D was here",decl);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uchar diagnose_mismatched_decls(tree newdecl,tree olddecl,tree *newtypep,tree *oldtypep)

{
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  tree ptVar10;
  long in_FS_OFFSET;
  bool bVar11;
  uchar pedwarned;
  uchar warned;
  uchar retval;
  addr_space_t new_addr;
  addr_space_t old_addr;
  uchar newa;
  uchar olda;
  int new_quals;
  int old_quals;
  tree newtype;
  tree oldtype;
  tree trytype;
  undefined local_58 [16];
  char local_48;
  undefined local_38 [16];
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pedwarned = '\0';
  warned = '\0';
  retval = '\x01';
  if ((olddecl == global_trees) || (newdecl == global_trees)) {
    retval = '\0';
  }
  else {
    oldtype = *(tree *)&olddecl->field_0x10;
    *oldtypep = oldtype;
    newtype = *(tree *)&newdecl->field_0x10;
    *newtypep = newtype;
    if ((oldtype == global_trees) || (newtype == global_trees)) {
      retval = '\0';
    }
    else if (*(short *)olddecl == *(short *)newdecl) {
      if (*(short *)olddecl == 0x21) {
        error("redeclaration of enumerator %q+D",newdecl);
        locate_old_decl(olddecl);
        retval = '\0';
      }
      else {
        iVar4 = comptypes(oldtype,newtype);
        if (iVar4 == 0) {
          if (((*(short *)olddecl == 0x1d) && ((olddecl->field_0xd9 & 0x18) != 0)) &&
             ((olddecl->field_0x3a & 4) == 0)) {
            oldtype = match_builtin_function_types(newtype,oldtype);
            if ((oldtype == (tree)0x0) || (iVar4 = comptypes(newtype,oldtype), iVar4 == 0)) {
              warning(0,"conflicting types for built-in function %q+D",newdecl);
              retval = '\0';
              goto LAB_00103b67;
            }
            *oldtypep = oldtype;
          }
          else {
            if ((*(short *)olddecl == 0x1d) && (*(uint *)&olddecl->field_0x18 < 2)) {
              newdecl->field_0x2 =
                   newdecl->field_0x2 & 0xf7 |
                   ((byte)newdecl->field_0x2 >> 3 & 1 | (byte)olddecl->field_0x2 >> 3 & 1) * '\b';
              retval = '\0';
              goto LAB_00103b67;
            }
            if (((((*(short *)newdecl == 0x1d) && (*(long *)&newdecl->field_0x50 != 0)) &&
                 (*(long *)(*(long *)&oldtype->field_0x10 + 0x80) ==
                  CONCAT44(warn_traditional._4_4_,(int)warn_traditional))) &&
                ((*(long *)(*(long *)&newtype->field_0x10 + 0x80) == _error_at &&
                 ((newdecl->field_0x3a & 1) != 0)))) && (*(long *)&olddecl->field_0x50 == 0)) {
              pedwarned = pedwarn(input_location,0,"conflicting types for %q+D",newdecl);
              *newtypep = oldtype;
              *(tree *)&newdecl->field_0x10 = *newtypep;
              newdecl->field_0x3a = newdecl->field_0x3a & 0xfe;
              newtype = oldtype;
            }
            else {
              if (((*(short *)newdecl != 0x1d) ||
                  (*(long *)(*(long *)&newtype->field_0x10 + 0x80) !=
                   CONCAT44(warn_traditional._4_4_,(int)warn_traditional))) ||
                 ((*(long *)(*(long *)&oldtype->field_0x10 + 0x80) != _error_at ||
                  (((olddecl->field_0x3a & 2) == 0 || (*(long *)&olddecl->field_0x50 != 0)))))) {
                bVar3 = newtype->field_0x7;
                uVar5 = (uint)bVar3 << 8 |
                        (uint)((byte)newtype->field_0x2 >> 4 & 1) |
                        (uint)((byte)newtype->field_0x2 >> 3 & 1) * 2 |
                        (uint)((byte)newtype->field_0x3d >> 5 & 1) << 2;
                bVar1 = oldtype->field_0x7;
                uVar6 = (uint)bVar1 << 8 |
                        (uint)((byte)oldtype->field_0x2 >> 4 & 1) |
                        (uint)((byte)oldtype->field_0x2 >> 3 & 1) * 2 |
                        (uint)((byte)oldtype->field_0x3d >> 5 & 1) << 2;
                if (uVar5 == uVar6) {
                  error("conflicting types for %q+D",newdecl);
                }
                else {
                  if (bVar3 != bVar1) {
                    if (bVar3 == 0) {
                      uVar7 = c_addr_space_name(bVar1);
                      error("conflicting named address spaces (generic vs %s) for %q+D",uVar7,
                            newdecl);
                    }
                    else if (bVar1 == 0) {
                      uVar7 = c_addr_space_name(bVar3);
                      error("conflicting named address spaces (%s vs generic) for %q+D",uVar7,
                            newdecl);
                    }
                    else {
                      uVar7 = c_addr_space_name(bVar1);
                      uVar8 = c_addr_space_name(bVar3);
                      error("conflicting named address spaces (%s vs %s) for %q+D",uVar8,uVar7,
                            newdecl);
                    }
                  }
                  if (((uVar5 ^ uVar6) & 0xffff00ff) != 0) {
                    error("conflicting type qualifiers for %q+D",newdecl);
                  }
                }
                diagnose_arglist_conflict(newdecl,olddecl,newtype,oldtype);
                locate_old_decl(olddecl);
                retval = '\0';
                goto LAB_00103b67;
              }
              pedwarned = pedwarn(input_location,0,"conflicting types for %q+D",newdecl);
              *oldtypep = newtype;
              *(tree *)&olddecl->field_0x10 = *oldtypep;
              oldtype = newtype;
            }
          }
        }
        if (*(short *)newdecl == 0x23) {
          expand_location(local_58,*(undefined4 *)&newdecl->field_0x18);
          if ((((local_48 == '\0') &&
               (expand_location(local_38,*(undefined4 *)&olddecl->field_0x18), local_28 == '\0')) &&
              ((newdecl->field_0x2 & 0x80) == 0)) && ((olddecl->field_0x2 & 0x80) == 0)) {
            error("redefinition of typedef %q+D",newdecl);
            locate_old_decl(olddecl);
            retval = '\0';
          }
          else {
            retval = '\x01';
          }
        }
        else {
          if (*(short *)newdecl == 0x1d) {
            if ((((olddecl->field_0xd9 & 0x18) != 0) && ((olddecl->field_0x3a & 4) == 0)) &&
               (((newdecl->field_0x3 & 8) == 0 ||
                ((*(long *)&newdecl->field_0x50 != 0 &&
                 (*(long *)(*(long *)&newdecl->field_0x10 + 0x18) == 0)))))) {
              warning(0xb0,"declaration of %q+D shadows a built-in function",newdecl);
              retval = '\0';
              goto LAB_00103b67;
            }
            if (*(long *)&newdecl->field_0x50 == 0) {
              if ((((*(long *)&olddecl->field_0x50 != 0) && (*(long *)&oldtype->field_0x18 == 0)) &&
                  (*(long *)&newtype->field_0x18 != 0)) &&
                 ((*(long *)&oldtype->field_0x88 != 0 &&
                  (uVar2 = validate_proto_after_old_defn(newdecl,newtype,oldtype), uVar2 == '\0'))))
              {
                locate_old_decl(olddecl);
                retval = '\0';
                goto LAB_00103b67;
              }
            }
            else if (((*(long *)&olddecl->field_0x50 != 0) &&
                     (((((olddecl->field_0xda & 0x20) == 0 || ((olddecl->field_0x3b & 2) == 0)) ||
                       (((newdecl->field_0xda & 0x20) != 0 && ((newdecl->field_0x3b & 2) != 0)))) ||
                      (((flag_gnu89_inline == 0 &&
                        (((olddecl->field_0xda & 0x20) == 0 ||
                         (lVar9 = lookup_attribute("gnu_inline",*(undefined8 *)&olddecl->field_0x58)
                         , lVar9 == 0)))) &&
                       (((newdecl->field_0xda & 0x20) == 0 ||
                        (lVar9 = lookup_attribute("gnu_inline",*(undefined8 *)&newdecl->field_0x58),
                        lVar9 == 0)))))))) &&
                    (iVar4 = same_translation_unit_p(newdecl,olddecl), iVar4 != 0)) {
              error("redefinition of %q+D",newdecl);
              locate_old_decl(olddecl);
              retval = '\0';
              goto LAB_00103b67;
            }
            if (((olddecl->field_0x3 & 8) != 0) && ((newdecl->field_0x3 & 8) == 0)) {
              if ((1 < *(uint *)&olddecl->field_0x18) &&
                 (((olddecl->field_0xda & 0x20) == 0 || ((olddecl->field_0x3b & 2) == 0)))) {
                error("static declaration of %q+D follows non-static declaration",newdecl);
                locate_old_decl(olddecl);
              }
              retval = '\0';
              goto LAB_00103b67;
            }
            if (((newdecl->field_0x3 & 8) != 0) && ((olddecl->field_0x3 & 8) == 0)) {
              if (*(long *)&olddecl->field_0x28 != 0) {
                error("non-static declaration of %q+D follows static declaration",newdecl);
                locate_old_decl(olddecl);
                retval = '\0';
                goto LAB_00103b67;
              }
              if ((int)warn_traditional != 0) {
                warned = warning(0xca,"non-static declaration of %q+D follows static declaration",
                                 newdecl);
              }
            }
            if (((olddecl->field_0xda & 0x20) != 0) && ((newdecl->field_0xda & 0x20) != 0)) {
              lVar9 = lookup_attribute("gnu_inline",*(undefined8 *)&newdecl->field_0x58);
              bVar11 = lVar9 != 0;
              lVar9 = lookup_attribute("gnu_inline",*(undefined8 *)&olddecl->field_0x58);
              if (bVar11 != (lVar9 != 0)) {
                ptVar10 = olddecl;
                if (bVar11) {
                  ptVar10 = newdecl;
                }
                error_at(input_location,"%<gnu_inline%> attribute present on %q+D",ptVar10);
                ptVar10 = newdecl;
                if (bVar11) {
                  ptVar10 = olddecl;
                }
                error_at(*(undefined4 *)&ptVar10->field_0x18,"but not here");
              }
            }
          }
          else if (*(short *)newdecl == 0x20) {
            if ((((olddecl->field_0x3a & 4) == 0) || (1 < (byte)newdecl->field_0x91 >> 5)) &&
               (1 < (byte)olddecl->field_0x91 >> 5 != 1 < (byte)newdecl->field_0x91 >> 5)) {
              if ((byte)newdecl->field_0x91 >> 5 < 2) {
                error("non-thread-local declaration of %q+D follows thread-local declaration",
                      newdecl);
              }
              else {
                error("thread-local declaration of %q+D follows non-thread-local declaration",
                      newdecl);
              }
              locate_old_decl(olddecl);
              retval = '\0';
              goto LAB_00103b67;
            }
            if ((*(long *)&newdecl->field_0x50 != 0) && (*(long *)&olddecl->field_0x50 != 0)) {
              error("redefinition of %q+D",newdecl);
              locate_old_decl(olddecl);
              retval = '\0';
              goto LAB_00103b67;
            }
            if (((*(long *)&newdecl->field_0x28 == 0) || (**(short **)&newdecl->field_0x28 == 0x28))
               && (((byte)newdecl->field_0x3 >> 3 & 1) != ((byte)olddecl->field_0x3 >> 3 & 1))) {
              if ((newdecl->field_0x3b & 2) == 0) {
                if ((newdecl->field_0x3 & 8) == 0) {
                  error("static declaration of %q+D follows non-static declaration",newdecl);
                }
                else {
                  error("non-static declaration of %q+D follows static declaration",newdecl);
                }
                locate_old_decl(olddecl);
                retval = '\0';
                goto LAB_00103b67;
              }
              if ((*(long *)&olddecl->field_0x28 != 0) && (**(short **)&olddecl->field_0x28 != 0x28)
                 ) {
                error("extern declaration of %q+D follows declaration with no linkage",newdecl);
                locate_old_decl(olddecl);
                retval = '\0';
                goto LAB_00103b67;
              }
              if ((int)warn_traditional != 0) {
                warned = warning(0xca,"non-static declaration of %q+D follows static declaration",
                                 newdecl);
              }
            }
            else if ((*(long *)&newdecl->field_0x28 != 0) &&
                    (**(short **)&newdecl->field_0x28 != 0x28)) {
              if ((newdecl->field_0x3b & 2) == 0) {
                if ((olddecl->field_0x3b & 2) == 0) {
                  error("redeclaration of %q+D with no linkage",newdecl);
                  locate_old_decl(olddecl);
                }
                else {
                  error("declaration of %q+D with no linkage follows extern declaration",newdecl);
                  locate_old_decl(olddecl);
                }
              }
              retval = '\0';
              goto LAB_00103b67;
            }
            if ((warn_cxx_compat != 0) &&
               ((((*(long *)&newdecl->field_0x28 == 0 || (**(short **)&newdecl->field_0x28 == 0x28))
                 && ((newdecl->field_0x3b & 2) == 0)) && ((olddecl->field_0x3b & 2) == 0)))) {
              bVar3 = warning_at(*(undefined4 *)&newdecl->field_0x18,0x31,
                                 "duplicate declaration of %qD is invalid in C++",newdecl);
              warned = warned | bVar3;
            }
          }
          if ((((*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)newdecl * 0x40 + 5) !=
                 '\0') && ((newdecl->field_0x91 & 0x10) != 0)) &&
              ((olddecl->field_0x91 & 0x10) != 0)) &&
             (((byte)newdecl->field_0x91 >> 2 & 3) != ((byte)olddecl->field_0x91 >> 2 & 3))) {
            bVar3 = warning(0,
                            "redeclaration of %q+D with different visibility (old visibility preserved)"
                            ,newdecl);
            warned = warned | bVar3;
          }
          if (*(short *)newdecl == 0x1d) {
            if (((newdecl->field_0xda & 0x20) == 0) ||
               (lVar9 = lookup_attribute("noinline",*(undefined8 *)&olddecl->field_0x58), lVar9 == 0
               )) {
              if (((olddecl->field_0xda & 0x20) != 0) &&
                 (lVar9 = lookup_attribute("noinline",*(undefined8 *)&newdecl->field_0x58),
                 lVar9 != 0)) {
                bVar3 = warning(0x2d,
                                "declaration of %q+D with attribute noinline follows inline declaration "
                                ,newdecl);
                warned = warned | bVar3;
              }
            }
            else {
              bVar3 = warning(0x2d,
                              "inline declaration of %qD follows declaration with attribute noinline"
                              ,newdecl);
              warned = warned | bVar3;
            }
          }
          else if ((*(short *)newdecl == 0x22) &&
                  (((olddecl->field_0x2 & 0x40) == 0 || ((newdecl->field_0x2 & 0x40) != 0)))) {
            error("redefinition of parameter %q+D",newdecl);
            locate_old_decl(olddecl);
            retval = '\0';
            goto LAB_00103b67;
          }
          if (((((warned == '\0') && (pedwarned == '\0')) && ((int)warn_redundant_decls != 0)) &&
              (((((*(short *)newdecl != 0x1d || (*(long *)&newdecl->field_0x50 == 0)) ||
                 (*(long *)&olddecl->field_0x50 != 0)) &&
                (((*(short *)newdecl != 0x1d || ((newdecl->field_0xd9 & 0x18) != 0)) ||
                 (((olddecl->field_0xd9 & 0x18) == 0 || ((olddecl->field_0x3a & 4) != 0)))))) &&
               (((olddecl->field_0x3b & 2) == 0 || ((newdecl->field_0x3b & 2) != 0)))))) &&
             (((*(short *)newdecl != 0x22 ||
               (((olddecl->field_0x2 & 0x40) == 0 || ((newdecl->field_0x2 & 0x40) != 0)))) &&
              ((*(short *)newdecl != 0x20 ||
               ((*(long *)&newdecl->field_0x50 == 0 || (*(long *)&olddecl->field_0x50 != 0)))))))) {
            warned = warning(0xa9,"redundant redeclaration of %q+D",newdecl);
          }
          if ((warned != '\0') || (pedwarned != '\0')) {
            locate_old_decl(olddecl);
          }
        }
      }
    }
    else {
      if (((*(short *)olddecl == 0x1d) && ((olddecl->field_0xd9 & 0x18) != 0)) &&
         ((olddecl->field_0x3a & 4) == 0)) {
        if ((newdecl->field_0x3 & 8) == 0) {
          warning(0xb0,"declaration of %q+D shadows a built-in function",newdecl);
        }
        else {
          warning(0,"built-in function %q+D declared as non-function",newdecl);
        }
      }
      else {
        error("%q+D redeclared as different kind of symbol",newdecl);
        locate_old_decl(olddecl);
      }
      retval = '\0';
    }
  }
LAB_00103b67:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return retval;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void merge_decls(tree newdecl,tree olddecl,tree newtype,tree oldtype)

{
  ushort uVar1;
  undefined4 uVar2;
  c_binding *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  uchar new_is_definition;
  uchar new_is_prototype;
  uchar old_is_prototype;
  uchar extern_changed;
  uint olddecl_uid;
  c_binding **here;
  tree t;
  tree olddecl_arguments;
  c_binding *b;
  tree olddecl_context;
  undefined local_88 [16];
  char local_78;
  undefined local_68 [16];
  char local_58;
  undefined local_48 [16];
  char local_38;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(short *)newdecl == 0x1d) && (*(long *)&newdecl->field_0x50 != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((*(short *)newdecl == 0x1d) && (*(long *)(*(long *)&newdecl->field_0x10 + 0x18) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((*(short *)olddecl == 0x1d) && (*(long *)(*(long *)&olddecl->field_0x10 + 0x18) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((*(short *)newdecl == 0x22) && ((olddecl->field_0x2 & 0x40) != 0)) &&
     ((newdecl->field_0x2 & 0x40) == 0)) {
    for (here = &current_scope->bindings; *here != (c_binding *)0x0; here = &(*here)->prev) {
      if (olddecl == (*here)->decl) goto found;
    }
    fancy_abort("c-decl.c",0x85e,&DAT_0011c9fd);
found:
    pcVar3 = *here;
    *here = pcVar3->prev;
    pcVar3->prev = current_scope->bindings;
    current_scope->bindings = pcVar3;
    olddecl->field_0x2 = olddecl->field_0x2 & 0xbf;
  }
  uVar9 = (*_in_sizeof)(olddecl,newdecl);
  *(undefined8 *)&newdecl->field_0x58 = uVar9;
  uVar9 = composite_type(newtype,oldtype);
  *(undefined8 *)&olddecl->field_0x10 = uVar9;
  *(undefined8 *)&newdecl->field_0x10 = *(undefined8 *)&olddecl->field_0x10;
  iVar8 = comptypes(oldtype,*(undefined8 *)&newdecl->field_0x10);
  if (iVar8 == 0) {
    if (*(long *)&newdecl->field_0x10 != global_trees) {
      layout_type(*(undefined8 *)&newdecl->field_0x10);
    }
    if (((*(short *)newdecl != 0x1d) && (*(short *)newdecl != 0x23)) && (*(short *)newdecl != 0x21))
    {
      layout_decl(newdecl,0);
    }
  }
  else {
    *(undefined8 *)&newdecl->field_0x30 = *(undefined8 *)&olddecl->field_0x30;
    *(undefined8 *)&newdecl->field_0x48 = *(undefined8 *)&olddecl->field_0x48;
    newdecl->field_0x38 = olddecl->field_0x38;
    if (*(uint *)&newdecl->field_0x40 < *(uint *)&olddecl->field_0x40) {
      *(undefined4 *)&newdecl->field_0x40 = *(undefined4 *)&olddecl->field_0x40;
      newdecl->field_0x5 =
           newdecl->field_0x5 & 0xfb |
           ((byte)newdecl->field_0x5 >> 2 & 1 | (byte)olddecl->field_0x5 >> 2 & 1) * '\x04';
    }
  }
  if (*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)olddecl * 0x40 + 3) != '\0') {
    *(undefined8 *)&newdecl->field_0x70 = *(undefined8 *)&olddecl->field_0x70;
  }
  if ((newdecl->field_0x2 & 0x10) != 0) {
    olddecl->field_0x2 = olddecl->field_0x2 | 0x10;
  }
  if ((newdecl->field_0x2 & 8) != 0) {
    olddecl->field_0x2 = olddecl->field_0x2 | 8;
  }
  if ((newdecl->field_0x3 & 0x40) != 0) {
    olddecl->field_0x3 = olddecl->field_0x3 | 0x40;
  }
  if (((*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)olddecl * 0x40 + 5) == '\0') ||
      (expand_location(local_88,*(undefined4 *)&olddecl->field_0x18), local_78 == '\0')) ||
     (expand_location(local_68,*(undefined4 *)&newdecl->field_0x18), local_58 != '\0')) {
    if (((*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)olddecl * 0x40 + 5) == '\0') ||
        (expand_location(local_48,*(undefined4 *)&newdecl->field_0x18), local_38 == '\0')) ||
       (expand_location(local_28,*(undefined4 *)&olddecl->field_0x18), local_18 != '\0')) {
      if (((*(long *)&newdecl->field_0x50 == 0) && (*(long *)&olddecl->field_0x50 != 0)) ||
         ((bVar4 && ((!bVar5 && ((olddecl->field_0x3a & 0x20) == 0)))))) {
        *(undefined4 *)&newdecl->field_0x18 = *(undefined4 *)&olddecl->field_0x18;
      }
    }
    else {
      *(undefined4 *)&olddecl->field_0x18 = *(undefined4 *)&newdecl->field_0x18;
    }
  }
  else {
    *(undefined4 *)&newdecl->field_0x18 = *(undefined4 *)&olddecl->field_0x18;
  }
  if (*(long *)&newdecl->field_0x50 == 0) {
    *(undefined8 *)&newdecl->field_0x50 = *(undefined8 *)&olddecl->field_0x50;
  }
  if ((*(short *)olddecl == 0x20) && ((olddecl->field_0x3a & 4) != 0)) {
    newdecl->field_0x91 = newdecl->field_0x91 & 0x1f | olddecl->field_0x91 & 0xe0;
    newdecl->field_0x3a = newdecl->field_0x3a | 4;
  }
  if (*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)olddecl * 0x40 + 5) != '\0') {
    if (*(long *)&newdecl->field_0x80 == 0) {
      *(undefined8 *)&newdecl->field_0x80 = *(undefined8 *)&olddecl->field_0x80;
    }
    if ((*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)olddecl * 0x40 + 5) != '\0') &&
       (*(long *)&olddecl->field_0x78 != 0)) {
      uVar9 = decl_assembler_name(olddecl);
      *(undefined8 *)&newdecl->field_0x78 = uVar9;
    }
    if ((olddecl->field_0x91 & 0x10) != 0) {
      newdecl->field_0x91 =
           newdecl->field_0x91 & 0xf3 | ((byte)olddecl->field_0x91 >> 2 & 3) * '\x04';
      newdecl->field_0x91 = newdecl->field_0x91 | 0x10;
    }
    if (*(short *)newdecl == 0x1d) {
      newdecl->field_0xd9 =
           newdecl->field_0xd9 & 0xdf |
           (byte)(((byte)newdecl->field_0xd9 >> 5 & 1 | (byte)olddecl->field_0xd9 >> 5 & 1) << 5);
      newdecl->field_0xd9 =
           newdecl->field_0xd9 & 0xbf |
           (byte)(((byte)newdecl->field_0xd9 >> 6 & 1 | (byte)olddecl->field_0xd9 >> 6 & 1) << 6);
      newdecl->field_0xdb =
           newdecl->field_0xdb & 0xfd |
           ((byte)newdecl->field_0xdb >> 1 & 1 | (byte)olddecl->field_0xdb >> 1 & 1) * '\x02';
      newdecl->field_0xdb =
           newdecl->field_0xdb & 0xfe | newdecl->field_0xdb & 1 | olddecl->field_0xdb & 1;
      newdecl->field_0x2 =
           newdecl->field_0x2 & 0xf7 |
           ((byte)newdecl->field_0x2 >> 3 & 1 | (byte)olddecl->field_0x2 >> 3 & 1) * '\b';
      newdecl->field_0xda =
           newdecl->field_0xda & 0xf7 |
           ((byte)newdecl->field_0xda >> 3 & 1 | (byte)olddecl->field_0xda >> 3 & 1) * '\b';
      newdecl->field_0xda =
           newdecl->field_0xda & 0xef |
           (byte)(((byte)newdecl->field_0xda >> 4 & 1 | (byte)olddecl->field_0xda >> 4 & 1) << 4);
      newdecl->field_0x2 =
           newdecl->field_0x2 & 0xef |
           (byte)(((byte)newdecl->field_0x2 >> 4 & 1 | (byte)olddecl->field_0x2 >> 4 & 1) << 4);
      newdecl->field_0xdb =
           newdecl->field_0xdb & 0xf7 |
           ((byte)newdecl->field_0xdb >> 3 & 1 | (byte)olddecl->field_0xdb >> 3 & 1) * '\b';
      newdecl->field_0xda =
           newdecl->field_0xda & 0xfd |
           ((byte)newdecl->field_0xda >> 1 & 1 | (byte)olddecl->field_0xda >> 1 & 1) * '\x02';
    }
    merge_weak(newdecl,olddecl);
    if (*(short *)newdecl == 0x1d) {
      newdecl->field_0x3 =
           newdecl->field_0x3 & 0xf7 |
           ((byte)olddecl->field_0x3 >> 3 & 1 & (byte)newdecl->field_0x3 >> 3 & 1) * '\b';
      olddecl->field_0x3 = olddecl->field_0x3 & 0xf7 | ((byte)newdecl->field_0x3 >> 3 & 1) * '\b';
      if ((olddecl->field_0x3 & 8) == 0) {
        *(byte *)(*(long *)&olddecl->field_0x20 + 3) =
             *(byte *)(*(long *)&olddecl->field_0x20 + 3) & 0xf7;
      }
    }
  }
  if (((((*(short *)newdecl == 0x1d) && (flag_gnu89_inline == 0)) &&
       (((newdecl->field_0xda & 0x20) != 0 || ((olddecl->field_0xda & 0x20) != 0)))) &&
      (((((newdecl->field_0xda & 0x20) == 0 || ((olddecl->field_0xda & 0x20) == 0)) ||
        ((olddecl->field_0x3b & 2) == 0)) &&
       (((newdecl->field_0x3b & 2) != 0 &&
        (lVar10 = lookup_attribute("gnu_inline",*(undefined8 *)&newdecl->field_0x58), lVar10 == 0)))
       ))) && (current_function_decl == 0)) {
    newdecl->field_0x3b = newdecl->field_0x3b & 0xfd;
  }
  if ((newdecl->field_0x3b & 2) == 0) {
    olddecl->field_0x3 = olddecl->field_0x3 & 0xfb | ((byte)newdecl->field_0x3 >> 2 & 1) * '\x04';
    olddecl->field_0x3 = olddecl->field_0x3 & 0xf7 | ((byte)newdecl->field_0x3 >> 3 & 1) * '\b';
  }
  else {
    newdecl->field_0x3 = newdecl->field_0x3 & 0xfb | ((byte)olddecl->field_0x3 >> 2 & 1) * '\x04';
    newdecl->field_0x3b = newdecl->field_0x3b & 0xfd | ((byte)olddecl->field_0x3b >> 1 & 1) * '\x02'
    ;
    newdecl->field_0x3 = newdecl->field_0x3 & 0xf7 | ((byte)olddecl->field_0x3 >> 3 & 1) * '\b';
    if ((newdecl->field_0x3b & 2) == 0) {
      *(undefined8 *)&newdecl->field_0x28 = *(undefined8 *)&olddecl->field_0x28;
      newdecl->field_0x90 = newdecl->field_0x90 & 0xf7 | ((byte)olddecl->field_0x90 >> 3 & 1) * '\b'
      ;
    }
  }
  if (*(short *)newdecl == 0x1d) {
    if ((bVar6) && (*(long *)&olddecl->field_0x50 != 0)) {
      newdecl->field_0xd9 = newdecl->field_0xd9 | 0x80;
    }
    else {
      if (((newdecl->field_0xda & 0x20) != 0) || ((olddecl->field_0xda & 0x20) != 0)) {
        newdecl->field_0xda = newdecl->field_0xda | 0x20;
      }
      if (((newdecl->field_0xd9 & 0x80) == 0) && ((olddecl->field_0xd9 & 0x80) == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = 1;
      }
      olddecl->field_0xd9 = olddecl->field_0xd9 & 0x7f | (byte)(iVar8 << 7);
      newdecl->field_0xd9 = newdecl->field_0xd9 & 0x7f | olddecl->field_0xd9 & 0x80;
      if (((newdecl->field_0xdb & 4) == 0) && ((olddecl->field_0xdb & 4) == 0)) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x01';
      }
      olddecl->field_0xdb = olddecl->field_0xdb & 0xfb | cVar7 * '\x04';
      newdecl->field_0xdb =
           newdecl->field_0xdb & 0xfb | ((byte)olddecl->field_0xdb >> 2 & 1) * '\x04';
    }
    if ((olddecl->field_0xd9 & 0x18) != 0) {
      newdecl->field_0xd9 = newdecl->field_0xd9 & 0xe7 | ((byte)olddecl->field_0xd9 >> 3 & 3) * '\b'
      ;
      *(ushort *)&newdecl->field_0xd8 =
           *(ushort *)&newdecl->field_0xd8 & 0xf800 | *(ushort *)&olddecl->field_0xd8 & 0x7ff;
      newdecl->field_0x3a = newdecl->field_0x3a | 4;
      if (bVar5) {
        newdecl->field_0x3a = newdecl->field_0x3a & 0xdf;
      }
      else {
        newdecl->field_0x3a =
             newdecl->field_0x3a & 0xdf | (byte)(((byte)olddecl->field_0x3a >> 5 & 1) << 5);
      }
    }
    if ((*(long *)&olddecl->field_0xc8 != 0) && (*(long *)&newdecl->field_0xc8 == 0)) {
      *(undefined8 *)&newdecl->field_0xc8 = *(undefined8 *)&olddecl->field_0xc8;
    }
    if ((*(long *)&olddecl->field_0xd0 != 0) && (*(long *)&newdecl->field_0xd0 == 0)) {
      *(undefined8 *)&newdecl->field_0xd0 = *(undefined8 *)&olddecl->field_0xd0;
    }
    if (!bVar6) {
      *(undefined8 *)&newdecl->field_0xa8 = *(undefined8 *)&olddecl->field_0xa8;
      *(undefined8 *)&newdecl->field_0x50 = *(undefined8 *)&olddecl->field_0x50;
      *(undefined8 *)&newdecl->field_0xb8 = *(undefined8 *)&olddecl->field_0xb8;
      *(undefined8 *)&newdecl->field_0x98 = *(undefined8 *)&olddecl->field_0x98;
      uVar9 = gimple_body(olddecl);
      gimple_set_body(newdecl,uVar9);
      uVar9 = copy_list(*(undefined8 *)&olddecl->field_0xa0);
      *(undefined8 *)&newdecl->field_0xa0 = uVar9;
      for (t = *(tree *)&newdecl->field_0xa0; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
        *(tree *)&t->field_0x28 = newdecl;
      }
      if (*(long *)&olddecl->field_0x98 != 0) {
        *(undefined8 *)&newdecl->field_0x60 = *(undefined8 *)&olddecl->field_0x60;
      }
    }
  }
  if (((olddecl->field_0x3b & 2) == 0) || ((newdecl->field_0x3b & 2) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((olddecl->field_0x3 & 1) == 0) {
    if ((newdecl->field_0x3 & 1) != 0) {
      olddecl->field_0x3 = olddecl->field_0x3 | 1;
    }
  }
  else {
    newdecl->field_0x3 = newdecl->field_0x3 | 1;
  }
  if ((olddecl->field_0x39 & 0x20) == 0) {
    if ((newdecl->field_0x39 & 0x20) != 0) {
      olddecl->field_0x39 = olddecl->field_0x39 | 0x20;
    }
  }
  else {
    newdecl->field_0x39 = newdecl->field_0x39 | 0x20;
  }
  uVar2 = *(undefined4 *)&olddecl->field_0x1c;
  uVar9 = *(undefined8 *)&olddecl->field_0x28;
  olddecl_arguments = (tree)0x0;
  if (*(short *)olddecl == 0x1d) {
    olddecl_arguments = *(tree *)&olddecl->field_0xa0;
  }
  memcpy(&olddecl->field_0x18,&newdecl->field_0x18,0x58);
  uVar1 = *(ushort *)olddecl;
  if (uVar1 == 0x1d) {
    uVar11 = gimple_body(newdecl);
    gimple_set_body(olddecl,uVar11);
  }
  else if ((uVar1 < 0x1d) || (6 < uVar1 - 0x1e)) {
    memcpy(&olddecl->field_0x70,&newdecl->field_0x70,0x48);
    goto LAB_00104eb5;
  }
  lVar10 = tree_code_size(*(undefined2 *)olddecl);
  memcpy(&olddecl->field_0x70,&newdecl->field_0x70,lVar10 - 0x70);
LAB_00104eb5:
  *(undefined4 *)&olddecl->field_0x1c = uVar2;
  *(undefined8 *)&olddecl->field_0x28 = uVar9;
  if (*(short *)olddecl == 0x1d) {
    *(tree *)&olddecl->field_0xa0 = olddecl_arguments;
  }
  if (((*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)olddecl * 0x40 + 3) != '\0') &&
      (*(long *)&olddecl->field_0x70 != 0)) &&
     ((*(short *)olddecl == 0x1d || ((*(short *)olddecl == 0x20 && ((olddecl->field_0x3 & 4) != 0)))
      ))) {
    make_decl_rtl(olddecl);
  }
  if ((((bVar5) && (!bVar6)) && (*(short *)olddecl == 0x1d)) && (*(long *)&olddecl->field_0x50 != 0)
     ) {
    cgraph_mark_if_needed(olddecl);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



uchar duplicate_decls(tree newdecl,tree olddecl)

{
  uchar uVar1;
  long in_FS_OFFSET;
  tree newtype;
  tree oldtype;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  newtype = (tree)0x0;
  oldtype = (tree)0x0;
  uVar1 = diagnose_mismatched_decls(newdecl,olddecl,&newtype,&oldtype);
  if (uVar1 != '\0') {
    merge_decls(newdecl,olddecl,newtype,oldtype);
  }
  else {
    olddecl->field_0x2 = olddecl->field_0x2 | 0x80;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar1 != '\0';
}



void warn_if_shadowing(tree new_decl)

{
  tree ptVar1;
  c_binding *b;
  tree old_decl;
  
  if (((warn_shadow != 0) && (1 < *(uint *)&new_decl->field_0x18)) &&
     ((*(long *)&new_decl->field_0x60 == 0 || (new_decl == *(tree *)&new_decl->field_0x60)))) {
    for (b = *(c_binding **)(*(long *)&new_decl->field_0x20 + 0x38); b != (c_binding *)0x0;
        b = b->shadowed) {
      if (((b->decl != (tree)0x0) && (new_decl != b->decl)) && ((b->field_0x2b & 0x10) == 0)) {
        ptVar1 = b->decl;
        if (ptVar1 == global_trees) {
          warning(0xb0,"declaration of %q+D shadows previous non-variable",new_decl);
          return;
        }
        if (*(short *)ptVar1 == 0x22) {
          warning(0xb0,"declaration of %q+D shadows a parameter",new_decl);
        }
        else if ((*(long *)&ptVar1->field_0x28 == 0) || (**(short **)&ptVar1->field_0x28 == 0x28)) {
          warning(0xb0,"declaration of %q+D shadows a global declaration",new_decl);
        }
        else {
          if ((*(short *)ptVar1 == 0x1d) && ((ptVar1->field_0xd9 & 0x18) != 0)) {
            warning(0xb0,"declaration of %q+D shadows a built-in function",new_decl);
            return;
          }
          warning(0xb0,"declaration of %q+D shadows a previous local",new_decl);
        }
        warning_at(*(undefined4 *)&ptVar1->field_0x18,0xb0,"shadowed declaration is here");
        return;
      }
    }
  }
  return;
}



tree pushdecl(tree x)

{
  location_t locus_00;
  tree name_00;
  undefined8 uVar1;
  short *psVar2;
  bool bVar3;
  c_scope *scope_00;
  uchar uVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  tree local_b0;
  uchar nested;
  uchar type_saved;
  location_t locus;
  c_binding *b;
  c_binding *b_ext;
  c_binding *b_use;
  tree thistype;
  tree vistype_1;
  tree visdecl_1;
  tree thistype_1;
  tree element;
  tree name;
  c_scope *scope;
  tree type;
  tree visdecl;
  tree vistype;
  tree type_1;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  scope_00 = current_scope;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  name_00 = *(tree *)&x->field_0x20;
  nested = '\0';
  locus_00 = *(location_t *)&x->field_0x18;
  if ((current_function_decl != 0) &&
     ((((*(short *)x != 0x1d && (*(short *)x != 0x20)) || (*(long *)&x->field_0x50 != 0)) ||
      ((x->field_0x3b & 2) == 0)))) {
    *(long *)&x->field_0x28 = current_function_decl;
  }
  if (name_00 == (tree)0x0) {
    bind((tree)0x0,x,scope_00,'\0','\0',locus_00);
  }
  else {
    b = *(c_binding **)&name_00->field_0x38;
    local_b0 = x;
    if ((b == (c_binding *)0x0) ||
       ((*(uint *)&b->field_0x28 & 0xfffffff) != (*(uint *)&scope_00->field_0x28 & 0xfffffff))) {
      if (((x->field_0x3b & 2) != 0) || (scope_00 == file_scope)) {
        thistype_1 = *(tree *)&x->field_0x10;
        vistype_1 = (tree)0x0;
        visdecl_1 = (tree)0x0;
        bVar3 = false;
        if ((((b != (c_binding *)0x0) && ((*(uint *)&b->field_0x28 & 0xfffffff) != 0)) &&
            ((*(short *)b->decl == 0x1d || (*(short *)b->decl == 0x20)))) &&
           ((*(long *)&b->decl->field_0x28 == 0 || (**(short **)&b->decl->field_0x28 == 0x28)))) {
          visdecl_1 = b->decl;
          vistype_1 = *(tree *)&visdecl_1->field_0x10;
        }
        if ((scope_00 != file_scope) &&
           (expand_location(local_28,*(undefined4 *)&x->field_0x18), local_18 == '\0')) {
          warning(0x8a,"nested extern declaration of %qD",x);
        }
        for (; (b != (c_binding *)0x0 && ((*(uint *)&b->field_0x28 & 0xfffffff) != 0));
            b = b->shadowed) {
          if ((*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)b->decl * 4) == 3) &&
             (((*(long *)&b->decl->field_0x28 == 0 || (**(short **)&b->decl->field_0x28 == 0x28)) &&
              (!bVar3)))) {
            b->u = *(undefined8 *)&b->decl->field_0x10;
            bVar3 = true;
          }
          if ((((((*(uint *)&b->field_0x28 & 0xfffffff) == 1) && (*(short *)b->decl == 0x20)) &&
               (((b->decl->field_0x3 & 4) != 0 &&
                ((**(short **)&b->decl->field_0x10 == 0xf &&
                 (*(long *)(*(long *)&b->decl->field_0x10 + 0x18) == 0)))))) &&
              (*(short *)thistype_1 == 0xf)) &&
             (((*(long *)&thistype_1->field_0x18 != 0 &&
               (*(long *)(*(long *)&thistype_1->field_0x18 + 0x70) != 0)) &&
              (iVar5 = integer_zerop(), iVar5 == 0)))) {
            b->field_0x2b = b->field_0x2b | 0x40;
          }
        }
        if (((b != (c_binding *)0x0) &&
            (((x->field_0x3 & 8) != 0 || (iVar5 = same_translation_unit_p(x,b->decl), iVar5 != 0))))
           && (b->u != 0)) {
          *(anon_union_8_2_e8869085_for_u *)&b->decl->field_0x10 = b->u;
        }
        if (((b != (c_binding *)0x0) &&
            (((x->field_0x3 & 8) != 0 || (iVar5 = same_translation_unit_p(x,b->decl), iVar5 != 0))))
           && (uVar4 = duplicate_decls(x,b->decl), uVar4 != '\0')) {
          if (vistype_1 != (tree)0x0) {
            iVar5 = comptypes(vistype_1,thistype_1);
            if (iVar5 == 0) {
              thistype_1 = *(tree *)&b->decl->field_0x10;
            }
            else {
              thistype_1 = (tree)composite_type(vistype_1,thistype_1);
            }
          }
          b->u = *(undefined8 *)&b->decl->field_0x10;
          if ((*(short *)b->decl == 0x1d) && ((b->decl->field_0xd9 & 0x18) != 0)) {
            thistype_1 = (tree)build_type_attribute_variant(thistype_1,*(undefined8 *)(b->u + 0x30))
            ;
          }
          *(tree *)&b->decl->field_0x10 = thistype_1;
          bind(name_00,b->decl,scope_00,'\0','\x01',locus_00);
          x = b->decl;
          goto LAB_00105bc2;
        }
        if ((x->field_0x3 & 8) != 0) {
          if (((visdecl_1 == (tree)0x0) || (b != (c_binding *)0x0)) ||
             (uVar4 = duplicate_decls(x,visdecl_1), uVar4 == '\0')) {
            bind(name_00,x,external_scope,'\x01','\0',locus_00);
            nested = '\x01';
          }
          else {
            nested = '\x01';
            local_b0 = visdecl_1;
          }
        }
      }
      if (*(short *)local_b0 != 0x22) {
        warn_if_shadowing(local_b0);
      }
    }
    else {
      uVar6 = *(undefined8 *)&x->field_0x10;
      uVar1 = *(undefined8 *)&b->decl->field_0x10;
      if ((**(short **)&x->field_0x10 == 0xf) && (*(long *)(*(long *)&x->field_0x10 + 0x20) != 0)) {
        b->field_0x2b = b->field_0x2b & 0xbf;
      }
      b_use = b;
      if (((x->field_0x3 & 8) != 0) && (b_ext = b, (b->decl->field_0x3 & 8) != 0)) {
        for (; (b_ext != (c_binding *)0x0 && ((*(uint *)&b_ext->field_0x28 & 0xfffffff) != 0));
            b_ext = b_ext->shadowed) {
        }
        if ((b_ext != (c_binding *)0x0) && (b_use = b_ext, b_ext->u != 0)) {
          *(anon_union_8_2_e8869085_for_u *)&b_ext->decl->field_0x10 = b_ext->u;
        }
      }
      uVar4 = duplicate_decls(x,b_use->decl);
      if (uVar4 != '\0') {
        if (b_use != b) {
          iVar5 = comptypes(uVar1,uVar6);
          if (iVar5 == 0) {
            thistype = *(tree *)&b_use->decl->field_0x10;
          }
          else {
            thistype = (tree)composite_type(uVar1,uVar6);
          }
          b_use->u = *(undefined8 *)&b_use->decl->field_0x10;
          if ((*(short *)b_use->decl == 0x1d) && ((b_use->decl->field_0xd9 & 0x18) != 0)) {
            thistype = (tree)build_type_attribute_variant(thistype,*(undefined8 *)(b_use->u + 0x30))
            ;
          }
          *(tree *)&b_use->decl->field_0x10 = thistype;
        }
        x = b_use->decl;
        goto LAB_00105bc2;
      }
    }
    if (*(short *)local_b0 == 0x23) {
      set_underlying_type();
    }
    bind(name_00,local_b0,scope_00,'\0',nested,locus_00);
    x = local_b0;
    if ((*(long *)&local_b0->field_0x10 != global_trees) &&
       (*(long *)(*(long *)&local_b0->field_0x10 + 0x20) == 0)) {
      for (element = *(tree *)&local_b0->field_0x10; *(short *)element == 0xf;
          element = *(tree *)&element->field_0x10) {
      }
      psVar2 = *(short **)&element->field_0x80;
      if ((((*psVar2 == 0x10) || (*psVar2 == 0x11)) &&
          ((*(short *)local_b0 != 0x23 || (**(short **)&local_b0->field_0x10 == 0xf)))) &&
         (*(long *)(psVar2 + 0x10) == 0)) {
        uVar6 = tree_cons_stat(0,local_b0,*(undefined8 *)(psVar2 + 0x34));
        *(undefined8 *)(psVar2 + 0x34) = uVar6;
      }
    }
  }
LAB_00105bc2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return x;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree pushdecl_top_level(tree x)

{
  tree name_00;
  bool nested_00;
  uchar nested;
  tree name;
  
  if ((*(short *)x != 0x20) && (*(short *)x != 0x21)) {
    fancy_abort("c-decl.c",0xae7,&DAT_0011c9fd);
  }
  name_00 = *(tree *)&x->field_0x20;
  if ((*(short *)x != 0x21) && (*(long *)&name_00->field_0x38 != 0)) {
    fancy_abort("c-decl.c",0xaeb,&DAT_0011c9fd);
  }
  nested_00 = (x->field_0x3 & 8) != 0;
  if (nested_00) {
    bind(name_00,x,external_scope,'\x01','\0',0);
  }
  if (file_scope != (c_scope *)0x0) {
    bind(name_00,x,file_scope,'\0',nested_00,0);
  }
  return x;
}



void implicit_decl_warning(tree id,tree olddecl)

{
  uchar warned;
  
  if ((int)warn_implicit_function_declaration != 0) {
    if (flag_isoc99 == 0) {
      warned = warning(0x67,"implicit declaration of function %qE",id);
    }
    else {
      warned = pedwarn(input_location,0x67,"implicit declaration of function %qE",id);
    }
    if ((olddecl != (tree)0x0) && (warned != '\0')) {
      locate_old_decl(olddecl);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree implicitly_declare(location_t loc,tree functionid)

{
  int iVar1;
  long in_FS_OFFSET;
  tree decl;
  c_binding *b;
  tree newtype;
  tree asmspec_tree;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  decl = (tree)0x0;
  b = *(c_binding **)&functionid->field_0x38;
  do {
    if (b == (c_binding *)0x0) {
LAB_00105dda:
      if (decl == (tree)0x0) {
        decl = (tree)build_decl_stat(loc,0x1d,functionid,_c_fully_fold);
        decl->field_0x3b = decl->field_0x3b | 2;
        decl->field_0x3 = decl->field_0x3 | 8;
        decl->field_0x3a = decl->field_0x3a | 2;
        implicit_decl_warning(functionid,(tree)0x0);
        asmspec_tree = (tree)maybe_apply_renaming_pragma(decl,0);
        if (asmspec_tree != (tree)0x0) {
          set_user_assembler_name(decl,&asmspec_tree->field_0x1c);
        }
        decl = pushdecl(decl);
        rest_of_decl_compilation(decl,0,0);
        gen_aux_info_record(decl,0,1,0);
        decl_attributes(&decl,0,0);
      }
      else if (global_trees != decl) {
        if (((decl->field_0xd9 & 0x18) == 0) && (*(uint *)&decl->field_0x18 < 2)) {
          bind(functionid,decl,file_scope,'\0','\x01',*(location_t *)&decl->field_0x18);
        }
        else {
          newtype = _c_fully_fold;
          if (b->u != 0) {
            *(anon_union_8_2_e8869085_for_u *)&decl->field_0x10 = b->u;
          }
          if ((decl->field_0x3a & 2) == 0) {
            implicit_decl_warning(functionid,decl);
            decl->field_0x3a = decl->field_0x3a | 2;
          }
          if ((decl->field_0xd9 & 0x18) == 0) {
            iVar1 = comptypes(newtype,*(undefined8 *)&decl->field_0x10);
            if (iVar1 == 0) {
              error_at(loc,"incompatible implicit declaration of function %qD",decl);
              locate_old_decl(decl);
            }
          }
          else {
            newtype = (tree)build_type_attribute_variant
                                      (newtype,*(undefined8 *)(*(long *)&decl->field_0x10 + 0x30));
            iVar1 = comptypes(newtype,*(undefined8 *)&decl->field_0x10);
            if (iVar1 == 0) {
              warning_at(loc,0,"incompatible implicit declaration of built-in function %qD");
              newtype = *(tree *)&decl->field_0x10;
            }
          }
          b->u = *(undefined8 *)&decl->field_0x10;
          *(tree *)&decl->field_0x10 = newtype;
          bind(functionid,decl,current_scope,'\0','\x01',*(location_t *)&decl->field_0x18);
        }
      }
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return decl;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    if ((*(uint *)&b->field_0x28 & 0xfffffff) == (*(uint *)&external_scope->field_0x28 & 0xfffffff))
    {
      decl = b->decl;
      goto LAB_00105dda;
    }
    b = b->shadowed;
  } while( true );
}



void undeclared_variable(location_t loc,tree id)

{
  c_scope *scope;
  
  if (current_function_decl == 0) {
    error_at(loc,"%qE undeclared here (not in a function)",id);
    scope = current_scope;
  }
  else {
    error_at(loc,"%qE undeclared (first use in this function)",id);
    if (undeclared_variable::already == '\0') {
      inform(loc,"each undeclared identifier is reported only once for each function it appears in")
      ;
      undeclared_variable::already = '\x01';
    }
    scope = current_scope;
    if (current_function_scope != (c_scope *)0x0) {
      scope = current_function_scope;
    }
  }
  bind(id,global_trees,scope,'\0','\0',0);
  return;
}



tree make_label(location_t location,tree name,uchar defining,c_label_vars **p_label_vars)

{
  tree ptVar1;
  c_label_vars *pcVar2;
  VEC_tree_gc *pVVar3;
  VEC_c_goto_bindings_p_gc *pVVar4;
  tree label;
  c_label_vars *label_vars;
  
  ptVar1 = (tree)build_decl_stat(location,0x1e,name,warn_traditional);
  *(undefined8 *)&ptVar1->field_0x28 = current_function_decl;
  ptVar1->field_0x38 = 0;
  pcVar2 = (c_label_vars *)ggc_alloc_stat(0x30);
  pcVar2->shadowed = (c_label_vars *)0x0;
  set_spot_bindings(&pcVar2->label_bindings,defining);
  pVVar3 = (VEC_tree_gc *)make_tree_vector();
  pcVar2->decls_in_scope = pVVar3;
  pVVar4 = VEC_c_goto_bindings_p_gc_alloc(0);
  pcVar2->gotos = pVVar4;
  *p_label_vars = pcVar2;
  return ptVar1;
}



tree lookup_label(tree name)

{
  tree ptVar1;
  long in_FS_OFFSET;
  c_label_vars *label_vars;
  tree label;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (current_function_decl == 0) {
    error("label %qE referenced outside of any function",name);
    ptVar1 = (tree)0x0;
  }
  else {
    if (*(long *)&name->field_0x48 == 0) {
      ptVar1 = (tree)0x0;
    }
    else {
      ptVar1 = *(tree *)(*(long *)&name->field_0x48 + 8);
    }
    label = ptVar1;
    if ((ptVar1 == (tree)0x0) ||
       ((*(long *)&ptVar1->field_0x28 != current_function_decl && ((ptVar1->field_0x4 & 4) == 0))))
    {
      label = make_label(input_location,name,'\0',&label_vars);
      bind_label(name,label,current_function_scope,label_vars);
      ptVar1 = label;
    }
    else if (*(long *)&ptVar1->field_0x50 == 0) {
      *(location_t *)&ptVar1->field_0x18 = input_location;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void warn_about_goto(location_t goto_loc,tree label,tree decl)

{
  char cVar1;
  
  cVar1 = variably_modified_type_p(*(undefined8 *)&decl->field_0x10,0);
  if (cVar1 == '\0') {
    warning_at(goto_loc,0x77,"jump skips variable initialization");
  }
  else {
    error_at(goto_loc,"jump into scope of identifier with variably modified type");
  }
  inform(*(undefined4 *)&label->field_0x18,"label %qD defined here",label);
  inform(*(undefined4 *)&decl->field_0x18,"%qD declared here",decl);
  return;
}



tree lookup_label_for_goto(location_t loc,tree name)

{
  int iVar1;
  tree ptVar2;
  VEC_tree_base *vec_;
  long in_FS_OFFSET;
  uint ix;
  tree decl;
  tree label;
  c_label_vars *label_vars;
  c_goto_bindings *g;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  label = lookup_label(name);
  if (label == (tree)0x0) {
    ptVar2 = (tree)0x0;
  }
  else if (*(long *)&label->field_0x28 == current_function_decl) {
    label_vars = **(c_label_vars ***)&name->field_0x48;
    if ((label_vars->label_bindings).scope == (c_scope *)0x0) {
      g = (c_goto_bindings *)ggc_alloc_stat(0x20);
      g->loc = loc;
      set_spot_bindings(&g->goto_bindings,'\x01');
      VEC_c_goto_bindings_p_gc_safe_push(&label_vars->gotos,g);
      ptVar2 = label;
    }
    else {
      ix = 0;
      while( true ) {
        if (label_vars->decls_in_scope == (VEC_tree_gc *)0x0) {
          vec_ = (VEC_tree_base *)0x0;
        }
        else {
          vec_ = (VEC_tree_base *)label_vars->decls_in_scope;
        }
        iVar1 = VEC_tree_base_iterate(vec_,ix,&decl);
        if (iVar1 == 0) break;
        warn_about_goto(loc,label,decl);
        ix = ix + 1;
      }
      ptVar2 = label;
      if ((label_vars->label_bindings).left_stmt_expr != '\0') {
        error_at(loc,"jump into statement expression");
        inform(*(undefined4 *)&label->field_0x18,"label %qD defined here",label);
        ptVar2 = label;
      }
    }
  }
  else {
    ptVar2 = label;
    if ((label->field_0x4 & 4) == 0) {
      fancy_abort("c-decl.c",0xbfb,&DAT_0011c9fd);
      ptVar2 = label;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree declare_label(tree name)

{
  tree ptVar1;
  long in_FS_OFFSET;
  c_label_vars *label_vars;
  c_binding *b;
  tree label;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  b = *(c_binding **)&name->field_0x48;
  if ((b == (c_binding *)0x0) ||
     ((*(uint *)&b->field_0x28 & 0xfffffff) != (*(uint *)&current_scope->field_0x28 & 0xfffffff))) {
    label = make_label(input_location,name,'\0',&label_vars);
    label->field_0x4 = label->field_0x4 | 4;
    bind_label(name,label,current_scope,label_vars);
    ptVar1 = label;
  }
  else {
    error("duplicate label declaration %qE",name);
    locate_old_decl(b->decl);
    ptVar1 = b->decl;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar1;
}



void check_earlier_gotos(tree label,c_label_vars *label_vars)

{
  uchar uVar1;
  int iVar2;
  VEC_c_goto_bindings_p_base *pVVar3;
  long in_FS_OFFSET;
  uint ix;
  c_goto_bindings *g;
  c_binding *b;
  c_scope *scope;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ix = 0;
  while( true ) {
    if (label_vars->gotos == (VEC_c_goto_bindings_p_gc *)0x0) {
      pVVar3 = (VEC_c_goto_bindings_p_base *)0x0;
    }
    else {
      pVVar3 = (VEC_c_goto_bindings_p_base *)label_vars->gotos;
    }
    iVar2 = VEC_c_goto_bindings_p_base_iterate(pVVar3,ix,&g);
    if (iVar2 == 0) break;
    for (b = ((g->goto_bindings).scope)->bindings; b != (g->goto_bindings).bindings_in_scope;
        b = b->prev) {
      uVar1 = decl_jump_unsafe(b->decl);
      if (uVar1 != '\0') {
        warn_about_goto(g->loc,label,b->decl);
      }
    }
    for (scope = (label_vars->label_bindings).scope; scope != (g->goto_bindings).scope;
        scope = scope->outer) {
      if (scope == (c_scope *)0x0) {
        fancy_abort("c-decl.c",0xc62,&DAT_0011c9fd);
      }
      if (scope == (label_vars->label_bindings).scope) {
        b = (label_vars->label_bindings).bindings_in_scope;
      }
      else {
        b = scope->bindings;
      }
      for (; b != (c_binding *)0x0; b = b->prev) {
        uVar1 = decl_jump_unsafe(b->decl);
        if (uVar1 != '\0') {
          warn_about_goto(g->loc,label,b->decl);
        }
      }
    }
    if (0 < (g->goto_bindings).stmt_exprs) {
      error_at(g->loc,"jump into statement expression");
      inform(*(undefined4 *)&label->field_0x18,"label %qD defined here",label);
    }
    ix = ix + 1;
  }
  if (label_vars->gotos == (VEC_c_goto_bindings_p_gc *)0x0) {
    pVVar3 = (VEC_c_goto_bindings_p_base *)0x0;
  }
  else {
    pVVar3 = (VEC_c_goto_bindings_p_base *)label_vars->gotos;
  }
  VEC_c_goto_bindings_p_base_truncate(pVVar3,0);
  label_vars->gotos = (VEC_c_goto_bindings_p_gc *)0x0;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



tree define_label(location_t location,tree name)

{
  c_label_vars *label_vars_00;
  tree ptVar1;
  long in_FS_OFFSET;
  tree label;
  c_label_vars *label_vars;
  c_label_vars *label_vars_1;
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)&name->field_0x48 == 0) {
    label = (tree)0x0;
  }
  else {
    label = *(tree *)(*(long *)&name->field_0x48 + 8);
  }
  if ((label == (tree)0x0) ||
     (((*(long *)&label->field_0x28 != current_function_decl || (*(long *)&label->field_0x50 == 0))
      && ((*(long *)&label->field_0x28 == current_function_decl || ((label->field_0x4 & 4) == 0)))))
     ) {
    if ((label == (tree)0x0) || (*(long *)&label->field_0x28 != current_function_decl)) {
      label = make_label(location,name,'\x01',&label_vars_1);
      bind_label(name,label,current_function_scope,label_vars_1);
    }
    else {
      label_vars_00 = **(c_label_vars ***)&name->field_0x48;
      *(location_t *)&label->field_0x18 = location;
      set_spot_bindings(&label_vars_00->label_bindings,'\x01');
      check_earlier_gotos(label,label_vars_00);
    }
    expand_location(&label_vars_1,input_location);
    if (local_18 == '\0') {
      ptVar1 = lookup_name(name);
      if (ptVar1 != (tree)0x0) {
        warning_at(location,0xca,
                   "traditional C lacks a separate namespace for labels, identifier %qE conflicts",
                   name);
      }
    }
    *(undefined8 *)&label->field_0x50 = global_trees;
  }
  else {
    error_at(location,"duplicate label %qD",label);
    locate_old_decl(label);
    label = (tree)0x0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return label;
}



c_spot_bindings * c_get_switch_bindings(void)

{
  c_spot_bindings *p;
  c_spot_bindings *switch_bindings;
  
  p = (c_spot_bindings *)xmalloc(0x18);
  set_spot_bindings(p,'\x01');
  return p;
}



void c_release_switch_bindings(c_spot_bindings *bindings)

{
  if ((bindings->stmt_exprs != 0) || (bindings->left_stmt_expr != '\0')) {
    fancy_abort("c-decl.c",0xcc7,&DAT_0011c9fd);
  }
  free(bindings);
  return;
}



uchar c_check_switch_jump_warnings
                (c_spot_bindings *switch_bindings,location_t switch_loc,location_t case_loc)

{
  uchar uVar1;
  char cVar2;
  uchar saw_error;
  c_scope *scope;
  c_binding *b;
  
  saw_error = '\0';
  for (scope = current_scope; scope != switch_bindings->scope; scope = scope->outer) {
    if (scope == (c_scope *)0x0) {
      fancy_abort("c-decl.c",0xcdd,&DAT_0011c9fd);
    }
    for (b = scope->bindings; b != (c_binding *)0x0; b = b->prev) {
      uVar1 = decl_jump_unsafe(b->decl);
      if (uVar1 != '\0') {
        cVar2 = variably_modified_type_p(*(undefined8 *)&b->decl->field_0x10,0);
        if (cVar2 == '\0') {
          warning_at(case_loc,0x77,"switch jumps over variable initialization");
        }
        else {
          saw_error = '\x01';
          error_at(case_loc,"switch jumps into scope of identifier with variably modified type");
        }
        inform(switch_loc,"switch starts here");
        inform(*(undefined4 *)&b->decl->field_0x18,"%qD declared here",b->decl);
      }
    }
  }
  if (0 < switch_bindings->stmt_exprs) {
    saw_error = '\x01';
    error_at(case_loc,"switch jumps into statement expression");
    inform(switch_loc,"switch starts here");
  }
  return saw_error;
}



tree lookup_tag(tree_code code,tree name,int thislevel_only,location_t *ploc)

{
  long lVar1;
  bool bVar2;
  tree ptVar3;
  int thislevel;
  c_binding *b;
  
  lVar1 = *(long *)&name->field_0x40;
  bVar2 = false;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 8) == 0)) {
    ptVar3 = (tree)0x0;
  }
  else {
    if (((thislevel_only != 0) || (code != (uint)**(ushort **)(lVar1 + 8))) &&
       (((*(uint *)(lVar1 + 0x28) & 0xfffffff) == (*(uint *)&current_scope->field_0x28 & 0xfffffff)
        || ((current_scope == file_scope && ((*(uint *)(lVar1 + 0x28) & 0xfffffff) == 0)))))) {
      bVar2 = true;
    }
    if ((thislevel_only == 0) || (bVar2)) {
      if (code != (uint)**(ushort **)(lVar1 + 8)) {
        pending_invalid_xref_location = input_location;
        pending_invalid_xref = name;
        if (bVar2) {
          pending_xref_error();
        }
      }
      if (ploc != (location_t *)0x0) {
        *ploc = *(location_t *)(lVar1 + 0x2c);
      }
      ptVar3 = *(tree *)(lVar1 + 8);
    }
    else {
      ptVar3 = (tree)0x0;
    }
  }
  return ptVar3;
}



void pending_xref_error(void)

{
  if (pending_invalid_xref != (tree)0x0) {
    error_at(pending_invalid_xref_location,"%qE defined as wrong kind of tag",pending_invalid_xref);
  }
  pending_invalid_xref = (tree)0x0;
  return;
}



tree lookup_name(tree name)

{
  long lVar1;
  tree ptVar2;
  c_binding *b;
  
  lVar1 = *(long *)&name->field_0x38;
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x2b) & 0x10) != 0)) {
    ptVar2 = (tree)0x0;
  }
  else {
    ptVar2 = *(tree *)(lVar1 + 8);
  }
  return ptVar2;
}



tree lookup_name_in_scope(tree name,c_scope *scope)

{
  c_binding *b;
  
  b = *(c_binding **)&name->field_0x38;
  while( true ) {
    if (b == (c_binding *)0x0) {
      return (tree)0x0;
    }
    if ((*(uint *)&b->field_0x28 & 0xfffffff) == (*(uint *)&scope->field_0x28 & 0xfffffff)) break;
    b = b->shadowed;
  }
  return b->decl;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void c_init_decl_processing(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  tree x;
  location_t save_loc;
  
  uVar1 = input_location;
  c_parse_init();
  current_function_decl = 0;
  _obstack_begin(&parser_obstack,0,0,0xbac18948,0x58b48c08949);
  push_scope();
  external_scope = current_scope;
  input_location = 1;
  build_common_tree_nodes((uint)flag_signed_char & 0xff,0);
  c_common_nodes_and_builtins();
  uVar2 = _gimple_body;
  _set_compound_literal_name = _error_at;
  _build2_stat = _error;
  _identifier_to_locale = _build_decl_stat;
  uVar3 = get_identifier("_Bool");
  x = (tree)build_decl_stat(0,0x23,uVar3,uVar2);
  pushdecl(x);
  pedantic_lvalues._0_4_ = 1;
  make_fname_decl = c_make_fname_decl;
  input_location = uVar1;
  start_fname_decls();
  return;
}



tree c_make_fname_decl(location_t loc,tree id,int type_dep)

{
  char *__s;
  size_t sVar1;
  undefined8 uVar2;
  tree decl_00;
  tree init_00;
  char *name;
  size_t length;
  tree type;
  tree decl;
  tree init;
  
  __s = (char *)fname_as_string(type_dep);
  sVar1 = strlen(__s);
  uVar2 = size_int_kind(sVar1,0);
  uVar2 = build_index_type(uVar2);
  uVar2 = build_array_type(integer_types,uVar2);
  uVar2 = c_build_qualified_type(uVar2,1);
  decl_00 = (tree)build_decl_stat(loc,0x20,id,uVar2);
  decl_00->field_0x3 = decl_00->field_0x3 | 4;
  decl_00->field_0x2 = decl_00->field_0x2 | 0x10;
  decl_00->field_0x39 = decl_00->field_0x39 | 0x10;
  init_00 = (tree)build_string((int)sVar1 + 1);
  free(__s);
  *(undefined8 *)&init_00->field_0x10 = uVar2;
  *(tree *)&decl_00->field_0x50 = init_00;
  decl_00->field_0x3 = decl_00->field_0x3 | 1;
  if ((current_function_decl != 0) &&
     ((*(int *)(global_dc + 0x18) == 0 || (current_function_scope != (c_scope *)0x0)))) {
    *(long *)&decl_00->field_0x28 = current_function_decl;
    bind(id,decl_00,current_function_scope,'\0','\0',0);
  }
  finish_decl(decl_00,loc,init_00,(tree)0x0,(tree)0x0);
  return decl_00;
}



tree c_builtin_function(tree decl)

{
  tree name_00;
  char *pcVar1;
  tree type;
  tree id;
  char *name;
  
  name_00 = *(tree *)&decl->field_0x20;
  pcVar1 = *(char **)&name_00->field_0x18;
  decl->field_0x3a =
       decl->field_0x3a & 0xdf | (*(long *)(*(long *)&decl->field_0x10 + 0x18) != 0) << 5;
  if (*(long *)&name_00->field_0x38 != 0) {
    fancy_abort("c-decl.c",0xdcc,&DAT_0011c9fd);
  }
  bind(name_00,decl,external_scope,'\x01','\0',0);
  if ((*pcVar1 == '_') &&
     ((pcVar1[1] == '_' ||
      ((*(ushort *)((long)&_sch_istable + (long)(int)((int)pcVar1[1] & 0xff) * 2) & 0x80) != 0)))) {
    *(tree *)&decl->field_0x8 = visible_builtins;
    visible_builtins = decl;
  }
  return decl;
}



tree c_builtin_function_ext_scope(tree decl)

{
  tree name_00;
  char *pcVar1;
  tree type;
  tree id;
  char *name;
  
  name_00 = *(tree *)&decl->field_0x20;
  pcVar1 = *(char **)&name_00->field_0x18;
  decl->field_0x3a =
       decl->field_0x3a & 0xdf | (*(long *)(*(long *)&decl->field_0x10 + 0x18) != 0) << 5;
  if (*(long *)&name_00->field_0x38 != 0) {
    fancy_abort("c-decl.c",0xde6,&DAT_0011c9fd);
  }
  bind(name_00,decl,external_scope,'\0','\0',0);
  if ((*pcVar1 == '_') &&
     ((pcVar1[1] == '_' ||
      ((*(ushort *)((long)&_sch_istable + (long)(int)((int)pcVar1[1] & 0xff) * 2) & 0x80) != 0)))) {
    *(tree *)&decl->field_0x8 = visible_builtins;
    visible_builtins = decl;
  }
  return decl;
}



void shadow_tag(c_declspecs *declspecs)

{
  shadow_tag_warned(declspecs,0);
  return;
}



void shadow_tag_warned(c_declspecs *declspecs,int warned)

{
  tree name_00;
  bool bVar1;
  tree_code code_00;
  tree ptVar2;
  long in_FS_OFFSET;
  int local_d4;
  uchar found_tag;
  tree_code code;
  tree value;
  tree name;
  tree t;
  undefined local_a8 [16];
  char local_98;
  undefined local_88 [16];
  char local_78;
  undefined local_68 [16];
  char local_58;
  undefined local_48 [16];
  char local_38;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = false;
  local_d4 = warned;
  if (((declspecs->type == (tree)0x0) || (declspecs->default_int_p != 0)) ||
     ((declspecs->field_0x28 & 0x10) != 0)) {
    if (((warned != 1) && (expand_location(local_88,input_location), local_78 == '\0')) &&
       ((declspecs->field_0x28 & 0x10) != 0)) {
      pedwarn(input_location,0,"useless type name in empty declaration");
      local_d4 = 1;
    }
  }
  else {
    code_00 = (tree_code)*(ushort *)declspecs->type;
    if (((code_00 == RECORD_TYPE) || (code_00 == UNION_TYPE)) || (code_00 == ENUMERAL_TYPE)) {
      name_00 = *(tree *)&declspecs->type->field_0x60;
      bVar1 = true;
      if ((declspecs->field_0x31 & 4) != 0) {
        error();
        local_d4 = 1;
      }
      if (name_00 == (tree)0x0) {
        if ((local_d4 != 1) && (code_00 != ENUMERAL_TYPE)) {
          pedwarn(input_location,0,"unnamed struct/union that defines no instances");
          local_d4 = 1;
        }
      }
      else {
        if (((declspecs->field_0x28 & 0x20) == 0) && (declspecs->storage_class != csc_none)) {
          if (local_d4 != 1) {
            pedwarn(input_location,0,
                    "empty declaration with storage class specifier does not redeclare tag");
          }
          pending_xref_error();
        }
        else {
          if (((declspecs->field_0x28 & 0x20) != 0) ||
             (((((declspecs->field_0x31 & 1) == 0 && ((declspecs->field_0x31 & 2) == 0)) &&
               ((declspecs->field_0x31 & 4) == 0)) && (declspecs->address_space == '\0')))) {
            pending_invalid_xref = (tree)0x0;
            ptVar2 = lookup_tag(code_00,name_00,1,(location_t *)0x0);
            if (ptVar2 == (tree)0x0) {
              ptVar2 = (tree)make_node_stat();
              pushtag(input_location,name_00,ptVar2);
            }
            goto LAB_00107681;
          }
          if (local_d4 != 1) {
            pedwarn(input_location,0,"empty declaration with type qualifier does not redeclare tag")
            ;
          }
          pending_xref_error();
        }
        local_d4 = 1;
      }
    }
    else if ((warned != 1) && (expand_location(local_a8,input_location), local_98 == '\0')) {
      pedwarn(input_location,0,"useless type name in empty declaration");
      local_d4 = 1;
    }
  }
LAB_00107681:
  pending_invalid_xref = (tree)0x0;
  if ((declspecs->field_0x30 & 0x40) != 0) {
    error("%<inline%> in empty declaration");
    local_d4 = 1;
  }
  if ((current_scope == file_scope) && (declspecs->storage_class == csc_auto)) {
    error("%<auto%> in file-scope empty declaration");
    local_d4 = 1;
  }
  if ((current_scope == file_scope) && (declspecs->storage_class == csc_register)) {
    error("%<register%> in file-scope empty declaration");
    local_d4 = 1;
  }
  if (((local_d4 == 0) && (expand_location(local_68,input_location), local_58 == '\0')) &&
     (declspecs->storage_class != csc_none)) {
    warning(0,"useless storage class specifier in empty declaration");
    local_d4 = 2;
  }
  if (((local_d4 == 0) && (expand_location(local_48,input_location), local_38 == '\0')) &&
     ((declspecs->field_0x30 & 0x80) != 0)) {
    warning(0,"useless %<__thread%> in empty declaration");
    local_d4 = 2;
  }
  if (((local_d4 == 0) && (expand_location(local_28,input_location), local_18 == '\0')) &&
     (((declspecs->field_0x31 & 1) != 0 ||
      ((((declspecs->field_0x31 & 2) != 0 || ((declspecs->field_0x31 & 4) != 0)) ||
       (declspecs->address_space != '\0')))))) {
    warning(0,"useless type qualifier in empty declaration");
    local_d4 = 2;
  }
  if ((local_d4 != 1) && (!bVar1)) {
    pedwarn(input_location,0,"empty declaration");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int quals_from_declspecs(c_declspecs *specs)

{
  byte bVar1;
  byte bVar2;
  int quals;
  
  bVar1 = specs->field_0x31;
  bVar2 = specs->address_space;
  if (((((specs->type != (tree)0x0) || (specs->decl_attr != (tree)0x0)) ||
       (specs->typespec_word != cts_none)) ||
      (((specs->storage_class != csc_none || ((specs->field_0x28 & 0x10) != 0)) ||
       (((specs->field_0x28 & 0x40) != 0 ||
        (((specs->field_0x28 & 0x80) != 0 || ((specs->field_0x30 & 1) != 0)))))))) ||
     (((specs->field_0x30 & 2) != 0 ||
      ((((((specs->field_0x30 & 4) != 0 || ((specs->field_0x30 & 8) != 0)) ||
         ((specs->field_0x30 & 0x10) != 0)) ||
        (((specs->field_0x30 & 0x20) != 0 || ((specs->field_0x30 & 0x40) != 0)))) ||
       ((specs->field_0x30 & 0x80) != 0)))))) {
    fancy_abort("c-decl.c",0xe98,&DAT_0011c9fd);
  }
  return (uint)bVar2 << 8 | bVar1 & 7;
}



c_declarator *
build_array_declarator
          (location_t loc,tree expr,c_declspecs *quals,uchar static_p,uchar vla_unspec_p)

{
  int iVar1;
  char *pcVar2;
  c_declarator *pcVar3;
  c_declarator *declarator;
  
  parser_obstack.temp = 0x38;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x38) {
    _obstack_newchunk(&parser_obstack,0x38);
  }
  pcVar3 = (c_declarator *)parser_obstack.object_base;
  pcVar2 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar2 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar2 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  *(location_t *)((long)pcVar3 + 0x10) = loc;
  pcVar3->kind = 2;
  *(undefined8 *)((long)pcVar3 + 8) = 0;
  *(tree *)((long)pcVar3 + 0x18) = expr;
  if (quals == (c_declspecs *)0x0) {
    *(undefined8 *)((long)pcVar3 + 0x28) = 0;
    *(undefined4 *)((long)pcVar3 + 0x20) = 0;
  }
  else {
    *(tree *)((long)pcVar3 + 0x28) = quals->attrs;
    iVar1 = quals_from_declspecs(quals);
    *(int *)((long)pcVar3 + 0x20) = iVar1;
  }
  *(byte *)((long)pcVar3 + 0x30) = *(byte *)((long)pcVar3 + 0x30) & 0xfe | static_p & 1;
  *(byte *)((long)pcVar3 + 0x30) =
       *(byte *)((long)pcVar3 + 0x30) & 0xfd | (vla_unspec_p & 1) * '\x02';
  if (flag_isoc99 == 0) {
    if ((static_p != '\0') || (quals != (c_declspecs *)0x0)) {
      pedwarn(loc,0x342,
              "ISO C90 does not support %<static%> or type qualifiers in parameter array declarators"
             );
    }
    if (vla_unspec_p != '\0') {
      pedwarn(loc,0x342,"ISO C90 does not support %<[*]%> array declarators");
    }
  }
  if (vla_unspec_p != '\0') {
    if ((current_scope->field_0x2b & 0x10) == 0) {
      error_at(loc,"%<[*]%> not allowed in other than function prototype scope");
      *(byte *)((long)pcVar3 + 0x30) = *(byte *)((long)pcVar3 + 0x30) & 0xfd;
      pcVar3 = (c_declarator *)0x0;
    }
    else {
      current_scope->field_0x2b = current_scope->field_0x2b | 0x20;
    }
  }
  return pcVar3;
}



c_declarator * set_array_declarator_inner(c_declarator *decl,c_declarator *inner)

{
  decl->declarator = inner;
  return decl;
}



void add_flexible_array_elts_to_size(tree decl,tree init)

{
  uint uVar1;
  VEC_constructor_elt_base *pVVar2;
  constructor_elt *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  tree type;
  tree elt;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)&init->field_0x18 == 0) {
    pVVar2 = (VEC_constructor_elt_base *)0x0;
  }
  else {
    pVVar2 = *(VEC_constructor_elt_base **)&init->field_0x18;
  }
  uVar1 = VEC_constructor_elt_base_length(pVVar2);
  if (uVar1 != 0) {
    if (*(long *)&init->field_0x18 == 0) {
      pVVar2 = (VEC_constructor_elt_base *)0x0;
    }
    else {
      pVVar2 = *(VEC_constructor_elt_base **)&init->field_0x18;
    }
    pcVar3 = VEC_constructor_elt_base_last(pVVar2);
    elt = pcVar3->value;
    type = *(tree *)&elt->field_0x10;
    if ((((*(short *)type == 0xf) && (*(long *)&type->field_0x20 == 0)) &&
        (*(long *)&type->field_0x18 != 0)) && (*(long *)(*(long *)&type->field_0x18 + 0x70) == 0)) {
      complete_array_type(&type,elt,0);
      uVar4 = size_binop_loc(0,0x3f,*(undefined8 *)&decl->field_0x30,
                             *(undefined8 *)&type->field_0x20);
      *(undefined8 *)&decl->field_0x30 = uVar4;
      uVar4 = size_binop_loc(0,0x3f,*(undefined8 *)&decl->field_0x48,
                             *(undefined8 *)&type->field_0x28);
      *(undefined8 *)&decl->field_0x48 = uVar4;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



tree groktypename(c_type_name *type_name,tree *expr,uchar *expr_const_operands)

{
  long in_FS_OFFSET;
  tree type;
  tree attrs;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  attrs = type_name->specs->attrs;
  type_name->specs->attrs = (tree)0x0;
  type = grokdeclarator(type_name->declarator,type_name->specs,TYPENAME,'\0',(tree *)0x0,&attrs,expr
                        ,expr_const_operands,DEPRECATED_NORMAL);
  decl_attributes(&type,attrs,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return type;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree start_decl(c_declarator *declarator,c_declspecs *declspecs,uchar initialized,tree attributes)

{
  ushort uVar1;
  char cVar2;
  long lVar3;
  tree ptVar4;
  long in_FS_OFFSET;
  tree local_68;
  uchar local_5c;
  c_declspecs *local_58;
  c_declarator *local_50;
  deprecated_states deprecated_state;
  tree decl;
  tree expr;
  c_declarator *ce;
  tree args;
  tree type;
  tree tem;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  expr = (tree)0x0;
  deprecated_state = DEPRECATED_NORMAL;
  local_68 = attributes;
  local_5c = initialized;
  local_58 = declspecs;
  local_50 = declarator;
  lVar3 = lookup_attribute("deprecated",attributes);
  if (lVar3 != 0) {
    deprecated_state = DEPRECATED_SUPPRESS;
  }
  decl = grokdeclarator(local_50,local_58,NORMAL,local_5c,(tree *)0x0,&local_68,&expr,(uchar *)0x0,
                        deprecated_state);
  if (decl == (tree)0x0) {
    ptVar4 = (tree)0x0;
    goto LAB_0010846b;
  }
  if (expr != (tree)0x0) {
    add_stmt(expr);
  }
  if ((*(short *)decl != 0x1d) && (*(long *)&decl->field_0x20 == _set_underlying_type)) {
    warning(0x7e,"%q+D is usually a function",decl);
  }
  if (local_5c != '\0') {
    uVar1 = *(ushort *)decl;
    if (uVar1 == 0x23) {
      error("typedef %qD is initialized (use __typeof__ instead)",decl);
      local_5c = '\0';
    }
    else if (uVar1 < 0x24) {
      if (uVar1 == 0x1d) {
        error("function %qD is initialized like a variable",decl);
        local_5c = '\0';
      }
      else {
        if (uVar1 != 0x22) goto LAB_00108011;
        error("parameter %qD is initialized",decl);
        local_5c = '\0';
      }
    }
    else {
LAB_00108011:
      if (*(long *)&decl->field_0x10 == global_trees) {
        local_5c = '\0';
      }
      else if (*(long *)(*(long *)&decl->field_0x10 + 0x20) == 0) {
        if (**(short **)&decl->field_0x10 == 0xf) {
          if ((decl->field_0x39 & 0x80) != 0) {
            error("variable-sized object may not be initialized");
            local_5c = '\0';
          }
        }
        else {
          error("variable %qD has initializer but incomplete type",decl);
          local_5c = '\0';
        }
      }
      else if ((**(short **)(*(long *)&decl->field_0x10 + 0x20) != 0x17) ||
              ((decl->field_0x39 & 0x80) != 0)) {
        error("variable-sized object may not be initialized");
        local_5c = '\0';
      }
    }
  }
  if (local_5c != '\0') {
    if (current_scope == file_scope) {
      decl->field_0x3 = decl->field_0x3 | 4;
    }
    *(long *)&decl->field_0x50 = global_trees;
  }
  if (*(short *)decl == 0x1d) {
    gen_aux_info_record(decl,0,0,*(long *)(*(long *)&decl->field_0x10 + 0x18) != 0);
  }
  if ((((*(short *)decl == 0x20) && (local_5c == '\0')) && ((decl->field_0x3 & 8) != 0)) &&
     (((byte)decl->field_0x91 >> 5 < 2 && ((int)flag_no_common == 0)))) {
    decl->field_0x90 = decl->field_0x90 | 8;
  }
  decl_attributes(&decl,local_68,0);
  if ((((((local_58->field_0x30 & 0x40) != 0) && (flag_gnu89_inline == 0)) &&
       ((*(short *)decl == 0x1d &&
        ((lVar3 = lookup_attribute("gnu_inline",*(undefined8 *)&decl->field_0x58), lVar3 != 0 ||
         (current_function_decl != (tree)0x0)))))) &&
      ((local_58->storage_class != csc_auto || (current_scope == file_scope)))) &&
     (local_58->storage_class != csc_static)) {
    decl->field_0x3b = decl->field_0x3b & 0xfd | ((decl->field_0x3b & 2) == 0) * '\x02';
  }
  if ((*(short *)decl == 0x1d) && (cVar2 = (*_gt_pch_note_object)(), cVar2 != '\0')) {
    ce = local_50;
    if (local_50->kind == cdk_pointer) {
      ce = local_50->declarator;
    }
    if (ce->kind == cdk_function) {
      for (args = **(tree **)&ce->u; args != (tree)0x0; args = *(tree *)&args->field_0x8) {
        type = *(tree *)&args->field_0x10;
        if ((type != (tree)0x0) &&
           ((((*(short *)type == 6 || (*(short *)type == 7)) || (*(short *)type == 8)) &&
            ((*(ushort *)&type->field_0x3c & 0x3ff) < (*(ushort *)(_error_at + 0x3c) & 0x3ff))))) {
          *(long *)&args->field_0x50 = _error_at;
        }
      }
    }
  }
  if (((*(short *)decl == 0x1d) && ((decl->field_0xda & 0x20) != 0)) &&
     (((decl->field_0xd9 & 0x80) != 0 &&
      (lVar3 = lookup_attribute("noinline",*(undefined8 *)&decl->field_0x58), lVar3 != 0)))) {
    warning(0x2d,"inline function %q+D given attribute noinline",decl);
  }
  if (((*(short *)decl == 0x20) && (current_scope != file_scope)) &&
     (((decl->field_0x3 & 4) != 0 &&
      ((((decl->field_0x2 & 0x10) == 0 && ((current_function_decl->field_0xda & 0x20) != 0)) &&
       ((current_function_decl->field_0x3b & 2) != 0)))))) {
    record_inline_static(input_location,current_function_decl,decl,csi_modifiable);
  }
  ptVar4 = pushdecl(decl);
  tem = ptVar4;
  if ((local_5c != '\0') && ((ptVar4->field_0x3b & 2) != 0)) {
    ptVar4->field_0x3b = ptVar4->field_0x3b & 0xfd;
    ptVar4->field_0x3 = ptVar4->field_0x3 | 4;
  }
LAB_0010846b:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void finish_decl(tree decl,location_t init_loc,tree init,tree origtype,tree asmspec_tree)

{
  long lVar1;
  char cVar2;
  int iVar3;
  stmt_tree psVar4;
  tree ptVar5;
  undefined8 uVar6;
  VEC_tree_base *vec_;
  long in_FS_OFFSET;
  bool bVar7;
  tree local_90;
  tree local_80;
  uchar was_incomplete;
  uchar do_default;
  int failure;
  VEC_tree_gc *vec;
  tree type;
  char *asmspec;
  c_binding *b_ext;
  tree bind;
  tree attr;
  tree cleanup_id;
  tree cleanup_decl;
  tree cleanup;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)&decl->field_0x30;
  asmspec = (char *)0x0;
  local_90 = asmspec_tree;
  if (((*(short *)decl == 0x1d) || (*(short *)decl == 0x20)) &&
     ((*(long *)&decl->field_0x28 == 0 || (**(short **)&decl->field_0x28 == 0x28)))) {
    local_90 = (tree)maybe_apply_renaming_pragma(decl,asmspec_tree);
  }
  if (local_90 != (tree)0x0) {
    asmspec = &local_90->field_0x1c;
  }
  if (((*(short *)decl == 0x20) && ((decl->field_0x3 & 4) != 0)) &&
     (iVar3 = global_bindings_p(), iVar3 != 0)) {
    record_types_used_by_current_var_decl(decl);
  }
  local_80 = init;
  if ((init != (tree)0x0) && (*(long *)&decl->field_0x50 == 0)) {
    local_80 = (tree)0x0;
  }
  if (*(short *)decl == 0x22) {
    local_80 = (tree)0x0;
  }
  if (local_80 != (tree)0x0) {
    store_init_value(init_loc,decl,local_80);
  }
  if (((c_language & 1) != 0) &&
     (((*(short *)decl == 0x20 || (*(short *)decl == 0x1d)) || (*(short *)decl == 0x1f)))) {
    objc_check_decl(decl);
  }
  type = *(tree *)&decl->field_0x10;
  if (((*(short *)type != 0xf) || (*(long *)&type->field_0x18 != 0)) || (*(short *)decl == 0x23))
  goto LAB_00108860;
  if ((decl->field_0x3 & 4) == 0) {
    bVar7 = (decl->field_0x3b & 2) == 0;
  }
  else if ((pedantic == 0) || ((decl->field_0x3 & 8) != 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  iVar3 = complete_array_type(&decl->field_0x10,*(undefined8 *)&decl->field_0x50,bVar7);
  type = *(tree *)&decl->field_0x10;
  if (iVar3 == 3) {
    error("zero or negative size array %q+D",decl);
  }
  else if (iVar3 < 4) {
    if (iVar3 == 2) {
      if (bVar7 == false) {
        if (((pedantic == 0) && ((decl->field_0x3 & 4) != 0)) && ((decl->field_0x3 & 8) == 0)) {
          decl->field_0x3b = decl->field_0x3b | 2;
        }
      }
      else {
        error("array size missing in %q+D",decl);
      }
    }
    else {
      if (2 < iVar3) goto LAB_00108814;
      if (iVar3 == 0) {
        if ((decl->field_0x3 & 8) != 0) {
          for (b_ext = *(c_binding **)(*(long *)&decl->field_0x20 + 0x38);
              (b_ext != (c_binding *)0x0 && ((*(uint *)&b_ext->field_0x28 & 0xfffffff) != 0));
              b_ext = b_ext->shadowed) {
          }
          if (b_ext != (c_binding *)0x0) {
            if (b_ext->u == 0) {
              b_ext->u = type;
            }
            else {
              uVar6 = composite_type(b_ext->u,type);
              b_ext->u = uVar6;
            }
          }
        }
      }
      else {
        if (iVar3 != 1) goto LAB_00108814;
        error("initializer fails to determine size of %q+D",decl);
      }
    }
  }
  else {
LAB_00108814:
    fancy_abort("c-decl.c",0x1059,&DAT_0011c9fd);
  }
  if (*(long *)&decl->field_0x50 != 0) {
    *(tree *)(*(long *)&decl->field_0x50 + 0x10) = type;
  }
  layout_decl(decl,0);
LAB_00108860:
  if (*(short *)decl == 0x20) {
    if ((local_80 != (tree)0x0) && (*(short *)local_80 == 0x33)) {
      add_flexible_array_elts_to_size(decl,local_80);
    }
    if (((*(long *)&decl->field_0x30 == 0) && (*(long *)&decl->field_0x10 != global_trees)) &&
       (*(long *)(*(long *)&decl->field_0x10 + 0x20) != 0)) {
      layout_decl(decl,0);
    }
    if ((*(long *)&decl->field_0x30 == 0) && (*(long *)&decl->field_0x10 != global_trees)) {
      if ((decl->field_0x3 & 4) == 0) {
        bVar7 = (decl->field_0x3b & 2) == 0;
      }
      else if ((*(long *)&decl->field_0x50 == 0) &&
              ((*(long *)&decl->field_0x28 == 0 || (**(short **)&decl->field_0x28 == 0x28)))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        error("storage size of %q+D isn%\'t known",decl);
        *(long *)&decl->field_0x10 = global_trees;
      }
    }
    if ((((decl->field_0x3b & 2) != 0) || ((decl->field_0x3 & 4) != 0)) &&
       (*(long *)&decl->field_0x30 != 0)) {
      if (**(short **)&decl->field_0x30 == 0x17) {
        constant_expression_warning(*(undefined8 *)&decl->field_0x30);
      }
      else {
        error("storage size of %q+D isn%\'t constant",decl);
        *(long *)&decl->field_0x10 = global_trees;
      }
    }
    if ((type->field_0x3 & 1) != 0) {
      decl->field_0x3 = decl->field_0x3 | 1;
    }
  }
  if ((*(short *)decl == 0x1d) && (asmspec != (char *)0x0)) {
    if ((decl->field_0xd9 & 0x18) == 0x18) {
      set_builtin_user_assembler_name(decl,asmspec);
    }
    set_user_assembler_name(decl,asmspec);
  }
  maybe_apply_pragma_weak(decl);
  if ((*(short *)decl == 0x20) || (*(short *)decl == 0x1d)) {
    if ((decl->field_0x3 & 8) != 0) {
      c_determine_visibility(decl);
    }
    if ((c_language & 1) != 0) {
      objc_check_decl(decl);
    }
    if (asmspec != (char *)0x0) {
      if ((((*(long *)&decl->field_0x28 == 0) || (**(short **)&decl->field_0x28 == 0x28)) ||
          (*(short *)decl != 0x20)) ||
         (((decl->field_0x3a & 8) != 0 || ((decl->field_0x3 & 4) != 0)))) {
        set_user_assembler_name(decl,asmspec);
      }
      else {
        warning(0,"ignoring asm-specifier for non-static local variable %q+D",decl);
      }
    }
    if ((*(long *)&decl->field_0x28 == 0) || (**(short **)&decl->field_0x28 == 0x28)) {
      if ((*(long *)&decl->field_0x50 == 0) || (*(long *)&decl->field_0x50 == global_trees)) {
        decl->field_0x90 = decl->field_0x90 | 1;
      }
      rest_of_decl_compilation(decl,1,0);
    }
    else {
      if (((asmspec != (char *)0x0) && ((decl->field_0x3a & 8) != 0)) &&
         (decl->field_0x90 = decl->field_0x90 | 2, (decl->field_0x3b & 1) == 0)) {
        error("cannot put object with volatile field into register");
      }
      if (*(short *)decl != 0x1d) {
        if (((*(long *)&decl->field_0x30 != 0) &&
            ((*(byte *)(*(long *)&decl->field_0x30 + 2) & 2) == 0)) &&
           (psVar4 = current_stmt_tree(), (psVar4->x_cur_stmt_list->field_0x4 & 0x10) != 0)) {
          bind = (tree)build3_stat(0x3a,warn_traditional,0,0,0);
          bind->field_0x2 = bind->field_0x2 | 1;
          add_stmt(bind);
          uVar6 = push_stmt_list();
          *(undefined8 *)&bind->field_0x30 = uVar6;
        }
        ptVar5 = (tree)build_stmt(*(undefined4 *)&decl->field_0x18,0x84,decl);
        add_stmt(ptVar5);
      }
    }
    if (((*(long *)&decl->field_0x28 != 0) && (**(short **)&decl->field_0x28 != 0x28)) &&
       ((lVar1 == 0 &&
        ((((decl->field_0x3 & 4) == 0 && ((decl->field_0x3b & 2) == 0)) &&
         (decl->field_0x2 = decl->field_0x2 & 0xfb | (decl->field_0x3 & 1) * '\x04',
         *(long *)&decl->field_0x30 == 0)))))) {
      *(undefined8 *)&decl->field_0x50 = 0;
    }
  }
  if (*(short *)decl == 0x23) {
    if (((*(long *)&decl->field_0x28 != 0) && (**(short **)&decl->field_0x28 != 0x28)) &&
       (cVar2 = variably_modified_type_p(*(undefined8 *)&decl->field_0x10,0), cVar2 != '\0')) {
      ptVar5 = (tree)build_stmt(*(undefined4 *)&decl->field_0x18,0x84,decl);
      add_stmt(ptVar5);
    }
    if ((*(long *)&decl->field_0x28 == 0) || (**(short **)&decl->field_0x28 == 0x28)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    rest_of_decl_compilation(decl,uVar6,0);
  }
  if (current_scope == file_scope) {
    get_pending_sizes();
  }
  if (((*(short *)decl == 0x20) && ((decl->field_0x3 & 4) == 0)) &&
     (attr = (tree)lookup_attribute("cleanup",*(undefined8 *)&decl->field_0x58), attr != (tree)0x0))
  {
    cleanup_id = *(tree *)(*(long *)&attr->field_0x20 + 0x20);
    cleanup_decl = lookup_name(cleanup_id);
    cleanup = (tree)build_unary_op(input_location,0x79,decl,0);
    vec = VEC_tree_gc_alloc(1);
    vec_ = &vec->base;
    if (&vec->base == (VEC_tree_base *)0x0) {
      vec_ = (VEC_tree_base *)0x0;
    }
    VEC_tree_base_quick_push(vec_,cleanup);
    cleanup = (tree)build_function_call_vec(*(undefined4 *)&decl->field_0x18,cleanup_decl,vec,0);
    VEC_tree_gc_free(&vec);
    decl->field_0x3 = decl->field_0x3 | 1;
    cleanup_decl->field_0x3 = cleanup_decl->field_0x3 | 1;
    push_cleanup(decl,cleanup,0);
  }
  if (((warn_cxx_compat != 0) && (*(short *)decl == 0x20)) &&
     (((decl->field_0x2 & 0x10) != 0 &&
      (((decl->field_0x3b & 2) == 0 && (*(long *)&decl->field_0x50 == 0)))))) {
    warning_at(*(undefined4 *)&decl->field_0x18,0x31,"uninitialized const %qD is invalid in C++",
               decl);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree grokparm(c_parm *parm)

{
  long in_FS_OFFSET;
  tree attrs;
  tree decl;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  attrs = parm->attrs;
  decl = grokdeclarator(parm->declarator,parm->specs,PARM,'\0',(tree *)0x0,&attrs,(tree *)0x0,
                        (uchar *)0x0,DEPRECATED_NORMAL);
  decl_attributes(&decl,attrs,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return decl;
}



void push_parm_decl(c_parm *parm)

{
  long in_FS_OFFSET;
  tree attrs;
  tree decl;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  attrs = parm->attrs;
  decl = grokdeclarator(parm->declarator,parm->specs,PARM,'\0',(tree *)0x0,&attrs,(tree *)0x0,
                        (uchar *)0x0,DEPRECATED_NORMAL);
  decl_attributes(&decl,attrs,0);
  decl = pushdecl(decl);
  finish_decl(decl,input_location,(tree)0x0,(tree)0x0,(tree)0x0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void mark_forward_parm_decls(void)

{
  c_binding *b;
  
  if ((pedantic != 0) && ((current_scope->field_0x2b & 0x40) == 0)) {
    pedwarn(input_location,0x342,"ISO C forbids forward parameter declarations");
    current_scope->field_0x2b = current_scope->field_0x2b | 0x40;
  }
  for (b = current_scope->bindings; b != (c_binding *)0x0; b = b->prev) {
    if (*(short *)b->decl == 0x22) {
      b->decl->field_0x2 = b->decl->field_0x2 | 0x40;
    }
  }
  return;
}



tree build_compound_literal(location_t loc,tree type,tree init,uchar non_const)

{
  int iVar1;
  tree x;
  undefined8 uVar2;
  tree ptVar3;
  tree local_38;
  int failure;
  tree complit;
  tree decl;
  tree stmt;
  
  ptVar3 = global_trees;
  if ((type != global_trees) && (init != global_trees)) {
    x = (tree)build_decl_stat(loc,0x20,0);
    x->field_0x3b = x->field_0x3b & 0xfd;
    x->field_0x3 = x->field_0x3 & 0xf7;
    x->field_0x3 = x->field_0x3 & 0xfb | (current_scope == file_scope) * '\x04';
    *(undefined8 *)&x->field_0x28 = current_function_decl;
    x->field_0x3 = x->field_0x3 | 1;
    *(tree *)&x->field_0x10 = type;
    x->field_0x2 = x->field_0x2 & 0xef | (byte)(((byte)type->field_0x2 >> 4 & 1) << 4);
    store_init_value(loc,x,init,0);
    local_38 = type;
    if ((*(short *)type == 0xf) && (*(long *)&type->field_0x20 == 0)) {
      iVar1 = complete_array_type(&x->field_0x10,*(undefined8 *)&x->field_0x50,1);
      if (iVar1 != 0) {
        fancy_abort("c-decl.c",0x1183,&DAT_0011c9fd);
      }
      local_38 = *(tree *)&x->field_0x10;
      *(tree *)(*(long *)&x->field_0x50 + 0x10) = local_38;
    }
    ptVar3 = global_trees;
    if ((local_38 != global_trees) && (*(long *)&local_38->field_0x20 != 0)) {
      uVar2 = build_stmt(*(undefined4 *)&x->field_0x18,0x84,x);
      ptVar3 = (tree)build1_stat(0x77,local_38,uVar2);
      ptVar3->field_0x2 = ptVar3->field_0x2 | 1;
      layout_decl(x,0);
      if ((x->field_0x3 & 4) != 0) {
        set_compound_literal_name(x);
        x->field_0x90 = x->field_0x90 | 1;
        x->field_0x91 = x->field_0x91 | 2;
        x->field_0x39 = x->field_0x39 | 0x10;
        x->field_0x39 = x->field_0x39 | 4;
        pushdecl(x);
        rest_of_decl_compilation(x,1,0);
      }
      if (non_const != '\0') {
        ptVar3 = (tree)build2_stat(0xbd,local_38,0,ptVar3);
        ptVar3->field_0x4 = ptVar3->field_0x4 | 4;
      }
    }
  }
  return ptVar3;
}



void check_compound_literal_type(location_t loc,c_type_name *type_name)

{
  if ((warn_cxx_compat != 0) && ((type_name->specs->field_0x28 & 0x20) != 0)) {
    warning_at(loc,0x31,"defining a type in a compound literal is invalid in C++");
  }
  return;
}



uchar flexible_array_type_p(tree type)

{
  uchar uVar1;
  tree x;
  
  if (*(short *)type == 0x10) {
    x = *(tree *)&type->field_0x18;
    if (x == (tree)0x0) {
      uVar1 = '\0';
    }
    else {
      for (; *(long *)&x->field_0x8 != 0; x = *(tree *)&x->field_0x8) {
      }
      if ((((**(short **)&x->field_0x10 == 0xf) && (*(long *)(*(long *)&x->field_0x10 + 0x20) == 0))
          && (*(long *)(*(long *)&x->field_0x10 + 0x18) != 0)) &&
         (*(long *)(*(long *)(*(long *)&x->field_0x10 + 0x18) + 0x70) == 0)) {
        uVar1 = '\x01';
      }
      else {
        uVar1 = '\0';
      }
    }
  }
  else if (*(short *)type == 0x11) {
    for (x = *(tree *)&type->field_0x18; x != (tree)0x0; x = *(tree *)&x->field_0x8) {
      uVar1 = flexible_array_type_p(*(tree *)&x->field_0x10);
      if (uVar1 != '\0') {
        return '\x01';
      }
    }
    uVar1 = '\0';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void check_bitfield_type_and_width(tree *type,tree *width,tree orig_name)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  tree ptVar5;
  long in_FS_OFFSET;
  uint max_width;
  ulong w;
  char *name;
  tree type_mv;
  lang_type *lt;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (orig_name == (tree)0x0) {
    pcVar4 = "<anonymous>";
  }
  else {
    pcVar4 = (char *)identifier_to_locale(*(undefined8 *)&orig_name->field_0x18);
  }
  if (((**(short **)&(*width)->field_0x10 == 6) || (**(short **)&(*width)->field_0x10 == 7)) ||
     (**(short **)&(*width)->field_0x10 == 8)) {
    if (*(short *)*width != 0x17) {
      ptVar5 = (tree)c_fully_fold(*width,0,0);
      *width = ptVar5;
      if (*(short *)*width == 0x17) {
        pedwarn(input_location,0x342,"bit-field %qs width not an integer constant expression",pcVar4
               );
      }
    }
    if (*(short *)*width != 0x17) {
      error("bit-field %qs width not an integer constant",pcVar4);
      *width = _error;
    }
    constant_expression_warning(*width);
    iVar2 = tree_int_cst_sgn(*width);
    if (iVar2 < 0) {
      error("negative width in bit-field %qs",pcVar4);
      *width = _error;
    }
    else {
      iVar2 = integer_zerop(*width);
      if ((iVar2 != 0) && (orig_name != (tree)0x0)) {
        error("zero width for bit-field %qs",pcVar4);
        *width = _error;
      }
    }
  }
  else {
    error("bit-field %qs width not an integer constant",pcVar4);
    *width = _error;
  }
  if (((*(short *)*type != 8) && (*(short *)*type != 7)) && (*(short *)*type != 6)) {
    error("bit-field %qs has invalid type",pcVar4);
    *type = tree_contains_struct;
  }
  ptVar5 = *(tree *)&(*type)->field_0x80;
  expand_location(local_28,input_location);
  if ((((local_18 == '\0') && (ptVar5 != _error_at)) && (ptVar5 != tree_contains_struct)) &&
     (ptVar5 != _gimple_body)) {
    pedwarn(input_location,0x342,"type of bit-field %qs is a GCC extension",pcVar4);
  }
  uVar3 = (uint)(*(ushort *)&(*type)->field_0x3c & 0x3ff);
  iVar2 = compare_tree_int(*width,uVar3);
  if (iVar2 < 1) {
    w = tree_low_cst(*width,1);
  }
  else {
    error("width of %qs exceeds its type",pcVar4);
    w = (ulong)uVar3;
    ptVar5 = (tree)build_int_cst(0,w);
    *width = ptVar5;
  }
  if (*(short *)*type == 6) {
    lVar1 = *(long *)&(*type)->field_0xa0;
    if (lVar1 != 0) {
      uVar3 = tree_int_cst_min_precision
                        (*(undefined8 *)(lVar1 + 8),(byte)(*type)->field_0x2 >> 5 & 1);
      if (uVar3 <= w) {
        uVar3 = tree_int_cst_min_precision
                          (*(undefined8 *)(lVar1 + 0x10),(byte)(*type)->field_0x2 >> 5 & 1);
        if (uVar3 <= w) goto code_r0x0010997f;
      }
    }
    warning(0,"%qs is narrower than values of its type",pcVar4);
  }
code_r0x0010997f:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void warn_variable_length_array(tree name,tree size)

{
  byte bVar1;
  int const_size;
  
  bVar1 = (byte)size->field_0x2 >> 1 & 1;
  if (((flag_isoc99 == 0) && (pedantic != 0)) && (warn_vla != 0)) {
    if (bVar1 == 0) {
      if (name == (tree)0x0) {
        pedwarn(input_location,0xea,"ISO C90 forbids variable length array");
      }
      else {
        pedwarn(input_location,0xea,"ISO C90 forbids variable length array %qE",name);
      }
    }
    else if (name == (tree)0x0) {
      pedwarn(input_location,0xea,"ISO C90 forbids array whose size can%\'t be evaluated");
    }
    else {
      pedwarn(input_location,0xea,"ISO C90 forbids array %qE whose size can%\'t be evaluated",name);
    }
  }
  else if (0 < warn_vla) {
    if (bVar1 == 0) {
      if (name == (tree)0x0) {
        warning(0xea,"variable length array is used");
      }
      else {
        warning(0xea,"variable length array %qE is used",name);
      }
    }
    else if (name == (tree)0x0) {
      warning(0xea,"the size of array can %\'t be evaluated");
    }
    else {
      warning(0xea,"the size of array %qE can%\'t be evaluated",name);
    }
  }
  return;
}



tree c_variable_size(tree size)

{
  int iVar1;
  undefined8 uVar2;
  tree save;
  
  if ((size->field_0x2 & 2) == 0) {
    size = (tree)save_expr(size);
    uVar2 = skip_simple_arithmetic(size);
    if (((cfun == 0) || ((*(byte *)(cfun + 0x8a) & 0x80) == 0)) &&
       (iVar1 = global_bindings_p(), iVar1 == 0)) {
      put_pending_size(uVar2);
    }
  }
  return size;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree grokdeclarator(c_declarator *declarator,c_declspecs *declspecs,decl_context decl_context,
                   uchar initialized,tree *width,tree *decl_attrs,tree *expr,
                   uchar *expr_const_operands,deprecated_states deprecated_state)

{
  c_declarator_kind cVar1;
  c_declarator *pcVar2;
  char cVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  tree ptVar9;
  uint uVar10;
  long in_FS_OFFSET;
  byte *local_1e0;
  tree *local_1d8;
  decl_context local_1bc;
  c_declarator *local_1b0;
  uchar expr_const_operands_dummy;
  uchar threadp;
  uchar funcdef_flag;
  uchar funcdef_syntax;
  uchar size_varies;
  uchar this_size_varies;
  uchar flexible_array_member;
  uchar really_funcdef;
  uchar array_parm_vla_unspec_p;
  uchar bitfield;
  addr_space_t as1;
  addr_space_t as2;
  addr_space_t address_space;
  uchar size_int_const;
  addr_space_t as;
  c_storage_class storage_class;
  int type_quals;
  int array_ptr_quals;
  int array_parm_static;
  location_t loc;
  int attr_flags;
  int constp;
  int restrictp;
  int volatilep;
  int extern_ref;
  int was_reg;
  tree type;
  tree expr_dummy;
  tree name;
  tree array_ptr_attrs;
  tree returned_attrs;
  c_arg_info *arg_info;
  c_declarator *decl;
  c_declarator *inner_decl;
  tree itype;
  tree size;
  c_declarator *t;
  c_declarator *t_1;
  tree link;
  tree decl_3;
  tree promoted_type;
  tree decl_attr;
  tree element_type;
  tree attrs;
  tree decl_1;
  tree index_type;
  char *errmsg;
  tree arg_types;
  tree global_decl;
  tree visible_decl;
  tree decl_2;
  c_binding *b;
  undefined local_98 [16];
  char local_88;
  char local_68;
  undefined local_58 [16];
  char local_48;
  uchar size_maybe_const;
  char local_28;
  long local_20;
  
  local_1d8 = expr;
  local_1e0 = expr_const_operands;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  type = declspecs->type;
  threadp = (byte)declspecs->field_0x30 >> 7;
  storage_class = declspecs->storage_class;
  type_quals = 0;
  name = (tree)0x0;
  funcdef_flag = '\0';
  funcdef_syntax = '\0';
  size_varies = '\0';
  decl_attr = declspecs->decl_attr;
  array_ptr_quals = 0;
  array_ptr_attrs = (tree)0x0;
  array_parm_static = 0;
  array_parm_vla_unspec_p = '\0';
  returned_attrs = (tree)0x0;
  bitfield = width != (tree *)0x0;
  arg_info = (c_arg_info *)0x0;
  loc = 0;
  if (expr == (tree *)0x0) {
    local_1d8 = &expr_dummy;
  }
  if (expr_const_operands == (uchar *)0x0) {
    local_1e0 = &expr_const_operands_dummy;
  }
  *local_1d8 = declspecs->expr;
  *local_1e0 = declspecs->field_0x28 & 1;
  decl = declarator;
  local_1bc = decl_context;
  if (decl_context == FUNCDEF) {
    funcdef_flag = '\x01';
    local_1bc = NORMAL;
  }
  while (decl != (c_declarator *)0x0) {
    switch(decl->kind) {
    case cdk_id:
      loc = decl->id_loc;
      if (*(long *)&decl->u != 0) {
        name = *(tree *)&decl->u;
      }
      decl = (c_declarator *)0x0;
      break;
    case cdk_array:
      loc = decl->id_loc;
    case cdk_function:
    case cdk_pointer:
      funcdef_syntax = decl->kind == cdk_function;
      decl = decl->declarator;
      break;
    case cdk_attrs:
      decl = decl->declarator;
      break;
    default:
      fancy_abort("c-decl.c",0x12ee,&DAT_0011c9fd);
    }
  }
  if (name == (tree)0x0) {
    if (((local_1bc != PARM) && (local_1bc != TYPENAME)) &&
       ((local_1bc != FIELD || (declarator->kind != cdk_id)))) {
      fancy_abort("c-decl.c",0x12f2,&DAT_0011c9fd);
    }
    if (initialized != '\0') {
      fancy_abort("c-decl.c",0x12f6,&DAT_0011c9fd);
    }
  }
  if ((funcdef_flag == '\0') || (funcdef_syntax != '\0')) {
    if ((local_1bc == NORMAL) &&
       ((funcdef_flag == '\0' && ((current_scope->field_0x2b & 0x10) != 0)))) {
      local_1bc = PARM;
    }
    if (((declspecs->field_0x28 & 0x80) != 0) && (deprecated_state != DEPRECATED_SUPPRESS)) {
      warn_deprecated_use(declspecs->type);
    }
    if ((((local_1bc == NORMAL) || (local_1bc == FIELD)) && (current_scope == file_scope)) &&
       (cVar3 = variably_modified_type_p(type), cVar3 != '\0')) {
      if (name == (tree)0x0) {
        error_at(loc);
      }
      else {
        error_at(loc,"variably modified %qE at file scope",name);
      }
      type = _error_at;
    }
    size_varies = (type->field_0x3f & 4) != 0;
    if ((declspecs->default_int_p != 0) && (expand_location(local_98), local_88 == '\0')) {
      if (((warn_implicit_int == 0) && ((warn_return_type == 0 && (flag_isoc99 == 0)))) ||
         (funcdef_flag == '\0')) {
        if (name == (tree)0x0) {
          if (flag_isoc99 == 0) {
            uVar7 = 0x68;
          }
          else {
            uVar7 = 0;
          }
          pedwarn_c99(input_location,uVar7,"type defaults to %<int%> in type name");
        }
        else {
          if (flag_isoc99 == 0) {
            uVar7 = 0x68;
          }
          else {
            uVar7 = 0;
          }
          pedwarn_c99(loc,uVar7,"type defaults to %<int%> in declaration of %qE",name);
        }
      }
      else {
        warn_about_return_type = 1;
      }
    }
    if ((((bitfield != '\0') && (flag_signed_bitfields == 0)) &&
        ((declspecs->field_0x28 & 0x40) == 0)) && (*(short *)type == 8)) {
      type = (tree)unsigned_type_for(type);
    }
    element_type = (tree)strip_array_types(type);
    constp = (uint)((byte)element_type->field_0x2 >> 4 & 1) + (uint)(declspecs->field_0x31 & 1);
    restrictp = (uint)((byte)element_type->field_0x3d >> 5 & 1) +
                (uint)((byte)declspecs->field_0x31 >> 2 & 1);
    volatilep = (uint)((byte)element_type->field_0x2 >> 3 & 1) +
                (uint)((byte)declspecs->field_0x31 >> 1 & 1);
    as1 = declspecs->address_space;
    as2 = element_type->field_0x7;
    address_space = as1;
    if (as1 == '\0') {
      address_space = as2;
    }
    if ((pedantic != 0) && (flag_isoc99 == 0)) {
      if (1 < (uint)constp) {
        pedwarn(loc,0x342,"duplicate %<const%>");
      }
      if (1 < restrictp) {
        pedwarn(loc,0x342,"duplicate %<restrict%>");
      }
      if (1 < volatilep) {
        pedwarn(loc,0x342,"duplicate %<volatile%>");
      }
    }
    if (((as1 != '\0') && (as2 != '\0')) && (as1 != as2)) {
      uVar7 = c_addr_space_name(as2);
      uVar8 = c_addr_space_name(as1);
      error_at(loc,"conflicting named address spaces (%s vs %s)",uVar8,uVar7);
    }
    if ((flag_gen_aux_info == 0) &&
       (((uint)(byte)element_type->field_0x7 << 8 |
        (uint)((byte)element_type->field_0x2 >> 4 & 1) |
        (uint)((byte)element_type->field_0x2 >> 3 & 1) * 2 |
        (uint)((byte)element_type->field_0x3d >> 5 & 1) << 2) != 0)) {
      type = *(tree *)&type->field_0x80;
    }
    if (restrictp == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 4;
    }
    if (volatilep == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 2;
    }
    type_quals = (uint)address_space << 8 | uVar10 | constp != 0 | uVar6;
    local_1b0 = declarator;
    if ((funcdef_flag == '\0') ||
       ((((threadp == '\0' && (storage_class != csc_auto)) && (storage_class != csc_register)) &&
        (storage_class != csc_typedef)))) {
      if ((local_1bc == NORMAL) || ((storage_class == csc_none && (threadp == '\0')))) {
        if ((storage_class == csc_extern) && ((initialized != '\0' && (funcdef_flag == '\0')))) {
          if (current_scope == file_scope) {
            if ((warn_cxx_compat == 0) || (constp == 0)) {
              warning_at(loc,0,"%qE initialized and declared %<extern%>",name);
            }
          }
          else {
            error_at(loc,"%qE has both %<extern%> and initializer",name);
          }
        }
        else if (current_scope == file_scope) {
          if (storage_class == csc_auto) {
            error_at(loc,"file-scope declaration of %qE specifies %<auto%>",name);
          }
          if ((pedantic != 0) && (storage_class == csc_register)) {
            pedwarn(input_location,0x342,"file-scope declaration of %qE specifies %<register%>",name
                   );
          }
        }
        else if ((storage_class == csc_extern) && (funcdef_flag != '\0')) {
          error_at(loc,"nested function %qE declared %<extern%>",name);
        }
        else if ((threadp != '\0') && (storage_class == csc_none)) {
          error_at(loc,"function-scope %qE implicitly auto and declared %<__thread%>",name);
          threadp = '\0';
        }
      }
      else if ((local_1bc != PARM) || (storage_class != csc_register)) {
        if (local_1bc == PARM) {
          if (name == (tree)0x0) {
            error_at(loc);
          }
          else {
            error_at(loc,"storage class specified for parameter %qE",name);
          }
        }
        else if (local_1bc == FIELD) {
          if (name == (tree)0x0) {
            error_at(loc);
          }
          else {
            error_at(loc,"storage class specified for structure field %qE",name);
          }
        }
        else {
          error_at(loc);
        }
        storage_class = csc_none;
        threadp = '\0';
      }
    }
    else {
      if (storage_class == csc_auto) {
        if (current_scope == file_scope) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0x342;
        }
        pedwarn(loc,uVar7,"function definition declared %<auto%>");
      }
      if (storage_class == csc_register) {
        error_at(loc);
      }
      if (storage_class == csc_typedef) {
        error_at(loc);
      }
      if (threadp != '\0') {
        error_at(loc);
      }
      threadp = '\0';
      if (((storage_class == csc_auto) || (storage_class == csc_register)) ||
         (storage_class == csc_typedef)) {
        storage_class = csc_none;
      }
    }
LAB_0010b8d6:
    while( true ) {
      while( true ) {
        if ((local_1b0 == (c_declarator *)0x0) || (local_1b0->kind == cdk_id)) goto LAB_0010b8f1;
        if (global_trees != type) break;
        local_1b0 = local_1b0->declarator;
      }
      if (((array_ptr_quals != 0) || (array_ptr_attrs != (tree)0x0)) || (array_parm_static != 0)) {
        error_at(loc);
        array_ptr_quals = 0;
        array_ptr_attrs = (tree)0x0;
        array_parm_static = 0;
      }
      cVar1 = local_1b0->kind;
      if (cVar1 != cdk_attrs) break;
      attrs = *(tree *)&local_1b0->u;
      attr_flags = 0;
      local_1b0 = local_1b0->declarator;
      for (inner_decl = local_1b0; inner_decl->kind == cdk_attrs;
          inner_decl = inner_decl->declarator) {
      }
      if (inner_decl->kind == cdk_id) {
        attr_flags = 1;
      }
      else if (inner_decl->kind == cdk_function) {
        attr_flags = 2;
      }
      else if (inner_decl->kind == cdk_array) {
        attr_flags = 4;
      }
      uVar7 = chainon(returned_attrs,attrs);
      returned_attrs = (tree)decl_attributes(&type,uVar7,attr_flags);
    }
    if (cVar1 < (cdk_function|cdk_attrs)) {
      if (cVar1 == cdk_pointer) {
        if (((pedantic != 0) && (*(short *)type == 0x14)) && (type_quals != 0)) {
          pedwarn(loc,0x342,"ISO C forbids qualified function types");
        }
        if (type_quals != 0) {
          type = (tree)c_build_qualified_type(type);
        }
        size_varies = '\0';
        if (((*(long *)&type->field_0x60 == 0) && ((local_1bc == NORMAL || (local_1bc == FIELD))))
           && (cVar3 = variably_modified_type_p(type), cVar3 != '\0')) {
          decl_1 = (tree)build_decl_stat(loc,0x23,0,type);
          decl_1->field_0x39 = decl_1->field_0x39 | 0x10;
          pushdecl(decl_1);
          finish_decl(decl_1,loc,(tree)0x0,(tree)0x0,(tree)0x0);
          *(tree *)&type->field_0x60 = decl_1;
        }
        type = (tree)build_pointer_type();
        type_quals = *(int *)&local_1b0->u;
        local_1b0 = local_1b0->declarator;
        goto LAB_0010b8d6;
      }
      if (cVar1 < cdk_attrs) {
        if (cVar1 == cdk_function) {
          really_funcdef = '\0';
          if (funcdef_flag != '\0') {
            for (t_1 = local_1b0->declarator; t_1->kind == cdk_attrs; t_1 = t_1->declarator) {
            }
            really_funcdef = t_1->kind == cdk_id;
          }
          if (global_trees != type) {
            size_varies = '\0';
            if (*(short *)type == 0x14) {
              if (name == (tree)0x0) {
                error_at(loc);
              }
              else {
                error_at(loc,"%qE declared as function returning a function",name);
              }
              type = _error_at;
            }
            if (*(short *)type == 0xf) {
              if (name == (tree)0x0) {
                error_at(loc);
              }
              else {
                error_at(loc,"%qE declared as function returning an array",name);
              }
              type = _error_at;
            }
            errmsg = (char *)(*_DAT_00123918)(type);
            if (errmsg != (char *)0x0) {
              error(errmsg);
              type = _error_at;
            }
            arg_info = *(c_arg_info **)&local_1b0->u;
            arg_types = grokparms(arg_info,really_funcdef);
            if (really_funcdef != '\0') {
              put_pending_sizes(arg_info->pending_sizes);
            }
            if (type_quals != 0) {
              if ((*(short *)type == 0x13) && (really_funcdef != '\0')) {
                pedwarn(loc,0,"function definition has qualified void return type");
              }
              else {
                warning_at(loc,0x65,"type qualifiers ignored on function return type");
              }
              type = (tree)c_build_qualified_type(type,type_quals);
            }
            type_quals = 0;
            type = (tree)build_function_type();
            local_1b0 = local_1b0->declarator;
            for (link = arg_info->tags; link != (tree)0x0; link = *(tree *)&link->field_0x8) {
              *(tree *)(*(long *)&link->field_0x20 + 0x90) = type;
            }
          }
        }
        else {
          if (cVar1 != cdk_array) goto LAB_0010b8be;
          itype = (tree)0x0;
          size = *(tree *)&local_1b0->u;
          index_type = (tree)c_common_signed_type();
          array_ptr_quals = *(int *)&(local_1b0->u).field_0x8;
          array_ptr_attrs = *(tree *)&(local_1b0->u).field_0x10;
          array_parm_static = (int)((local_1b0->u).field_0x18 & 1);
          array_parm_vla_unspec_p = (byte)(local_1b0->u).field_0x18 >> 1 & 1;
          local_1b0 = local_1b0->declarator;
          if (*(short *)type == 0x13) {
            if (name == (tree)0x0) {
              error_at();
            }
            else {
              error_at(loc,"declaration of %qE as array of voids",name);
            }
            type = global_trees;
          }
          if (*(short *)type == 0x14) {
            if (name == (tree)0x0) {
              error_at();
            }
            else {
              error_at(loc,"declaration of %qE as array of functions",name);
            }
            type = global_trees;
          }
          if (((pedantic != 0) && (expand_location(), local_68 == '\0')) &&
             (uVar4 = flexible_array_type_p(type), uVar4 != '\0')) {
            pedwarn(loc,0x342,"invalid use of structure with flexible array member");
          }
          if (size == global_trees) {
            type = global_trees;
          }
          if (global_trees != type) {
            if (size == (tree)0x0) {
              if (local_1bc == FIELD) {
                flexible_array_member = '\0';
                pcVar2 = local_1b0;
                if (array_parm_vla_unspec_p == '\0') {
                  while (t = pcVar2, t->kind == cdk_attrs) {
                    pcVar2 = t->declarator;
                  }
                  flexible_array_member = t->kind == cdk_id;
                }
                else {
                  size_varies = '\x01';
                }
                if (((flexible_array_member != '\0') && (pedantic != 0)) &&
                   ((flag_isoc99 == 0 &&
                    (expand_location(local_58,input_location), local_48 == '\0')))) {
                  pedwarn(loc,0x342,"ISO C90 does not support flexible array members");
                }
                if ((flexible_array_member != '\0') || (array_parm_vla_unspec_p != '\0')) {
                  itype = (tree)build_range_type(sizetype_tab,
                                                 CONCAT44(uRam00000000001231b4,flag_gnu89_inline),0)
                  ;
                }
              }
              else if (local_1bc == PARM) {
                if (array_parm_vla_unspec_p != '\0') {
                  itype = (tree)build_range_type(sizetype_tab,
                                                 CONCAT44(uRam00000000001231b4,flag_gnu89_inline),0)
                  ;
                  size_varies = '\x01';
                }
              }
              else if ((local_1bc == TYPENAME) && (array_parm_vla_unspec_p != '\0')) {
                warning(0,"%<[*]%> not in a declaration");
                itype = (tree)build_range_type(sizetype_tab,
                                               CONCAT44(uRam00000000001231b4,flag_gnu89_inline),0);
                size_varies = '\x01';
              }
            }
            else {
              size_maybe_const = '\x01';
              if ((*(short *)size == 0x17) && ((size->field_0x3 & 8) == 0)) {
                size_int_const = '\x01';
              }
              else {
                size_int_const = '\0';
              }
              this_size_varies = '\0';
              for (; (((*(short *)size == 0x74 || (*(short *)size == 0x71)) ||
                      (*(short *)size == 0x75)) &&
                     ((*(tree *)&size->field_0x28 != global_trees &&
                      (*(long *)&size->field_0x10 == *(long *)(*(long *)&size->field_0x28 + 0x10))))
                     ); size = *(tree *)&size->field_0x28) {
              }
              if (((**(short **)&size->field_0x10 != 6) && (**(short **)&size->field_0x10 != 7)) &&
                 (**(short **)&size->field_0x10 != 8)) {
                if (name == (tree)0x0) {
                  error_at(loc,"size of unnamed array has non-integer type");
                }
                else {
                  error_at(loc,"size of array %qE has non-integer type",name);
                }
                size = _error;
              }
              size = (tree)c_fully_fold(size,0,&size_maybe_const);
              if (((pedantic != 0) && (size_maybe_const != '\0')) &&
                 (iVar5 = integer_zerop(size), iVar5 != 0)) {
                if (name == (tree)0x0) {
                  pedwarn(loc,0x342,"ISO C forbids zero-size array");
                }
                else {
                  pedwarn(loc,0x342,"ISO C forbids zero-size array %qE",name);
                }
              }
              if ((*(short *)size == 0x17) && (size_maybe_const != '\0')) {
                constant_expression_warning(size);
                iVar5 = tree_int_cst_sgn(size);
                if (iVar5 < 0) {
                  if (name == (tree)0x0) {
                    error_at(loc,"size of unnamed array is negative");
                  }
                  else {
                    error_at(loc,"size of array %qE is negative",name);
                  }
                  size = _error;
                }
                if (size_int_const == '\0') {
                  if (((local_1bc == NORMAL) || (local_1bc == FIELD)) &&
                     (current_scope == file_scope)) {
                    pedwarn(input_location,0,"variably modified %qE at file scope",name);
                  }
                  else {
                    size_varies = '\x01';
                    this_size_varies = '\x01';
                  }
                  warn_variable_length_array(name,size);
                }
              }
              else if (((local_1bc == NORMAL) || (local_1bc == FIELD)) &&
                      (current_scope == file_scope)) {
                error_at(loc,"variably modified %qE at file scope",name);
                size = _error;
              }
              else {
                size_varies = '\x01';
                this_size_varies = '\x01';
                warn_variable_length_array(name,size);
              }
              iVar5 = integer_zerop(size);
              if ((iVar5 == 0) || (this_size_varies != '\0')) {
                if (size_varies != '\0') {
                  size = c_variable_size(size);
                }
                if ((this_size_varies != '\0') && (*(short *)size == 0x17)) {
                  size = (tree)build2_stat(0x34,*(undefined8 *)&size->field_0x10,_build_decl_stat,
                                           size);
                }
                uVar7 = convert(index_type,_expand_location);
                uVar8 = convert(index_type,size);
                itype = (tree)fold_build2_stat_loc(loc,0x40,index_type,uVar8,uVar7);
                if ((*(short *)itype == 0x17) && ((itype->field_0x3 & 8) != 0)) {
                  if (name == (tree)0x0) {
                    error_at();
                  }
                  else {
                    error_at(loc,"size of array %qE is too large",name);
                  }
                  type = global_trees;
                  goto LAB_0010b8d6;
                }
                itype = (tree)build_index_type();
              }
              else {
                itype = (tree)build_range_type(sizetype_tab,size,0);
              }
              if (this_size_varies != '\0') {
                if (*local_1d8 == (tree)0x0) {
                  *local_1d8 = size;
                }
                else {
                  ptVar9 = (tree)build2_stat(0x34,*(undefined8 *)&size->field_0x10,*local_1d8,size);
                  *local_1d8 = ptVar9;
                }
                *local_1e0 = *local_1e0 & size_maybe_const;
              }
            }
            if (*(long *)&type->field_0x20 == 0) {
              error_at();
              type = global_trees;
            }
            else {
              as = (addr_space_t)((uint)type_quals >> 8);
              if ((as != 0) && (as != type->field_0x7)) {
                type = (tree)build_qualified_type(type,(ulong)as << 8);
              }
              type = (tree)build_array_type();
            }
            if (global_trees != type) {
              if (size_varies != '\0') {
                if ((size != (tree)0x0) && (*(short *)size == 0x17)) {
                  type = (tree)build_distinct_type_copy();
                }
                type->field_0x3f = type->field_0x3f | 4;
              }
              if ((size != (tree)0x0) && (iVar5 = integer_zerop(), iVar5 != 0)) {
                if (itype == (tree)0x0) {
                  fancy_abort("c-decl.c",0x1516,&DAT_0011c9fd);
                }
                *(undefined8 *)&type->field_0x20 = _warning;
                *(ulong *)&type->field_0x28 = CONCAT44(uRam00000000001231b4,flag_gnu89_inline);
                *(undefined8 *)&type->field_0x98 = 0;
              }
              if (array_parm_vla_unspec_p != '\0') {
                if (itype == (tree)0x0) {
                  fancy_abort("c-decl.c",0x151d,&DAT_0011c9fd);
                }
                *(undefined8 *)&type->field_0x20 = _warning;
                *(ulong *)&type->field_0x28 = CONCAT44(uRam00000000001231b4,flag_gnu89_inline);
                *(undefined8 *)&type->field_0x98 = 0;
              }
            }
            if ((local_1bc != PARM) &&
               (((array_ptr_quals != 0 || (array_ptr_attrs != (tree)0x0)) ||
                (array_parm_static != 0)))) {
              error_at();
              array_ptr_quals = 0;
              array_ptr_attrs = (tree)0x0;
              array_parm_static = 0;
            }
          }
        }
        goto LAB_0010b8d6;
      }
    }
LAB_0010b8be:
    fancy_abort("c-decl.c",0x15c8,&DAT_0011c9fd);
    goto LAB_0010b8d6;
  }
  ptVar9 = (tree)0x0;
LAB_0010cc82:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar9;
LAB_0010b8f1:
  ptVar9 = (tree)chainon(returned_attrs,*decl_attrs);
  *decl_attrs = ptVar9;
  address_space = (addr_space_t)((uint)type_quals >> 8);
  if (address_space != '\0') {
    if (local_1bc == NORMAL) {
      switch(storage_class) {
      case csc_none:
        if (current_function_scope != (c_scope *)0x0) {
          uVar7 = c_addr_space_name(address_space);
          error("%qs specified for auto variable %qE",uVar7,name);
        }
        break;
      case csc_auto:
        uVar7 = c_addr_space_name(address_space);
        error("%qs combined with %<auto%> qualifier for %qE",uVar7,name);
        break;
      case csc_extern:
      case csc_static:
      case csc_typedef:
        break;
      case csc_register:
        uVar7 = c_addr_space_name(address_space);
        error("%qs combined with %<register%> qualifier for %qE",uVar7,name);
        break;
      default:
        fancy_abort("c-decl.c",0x15ee,&DAT_0011c9fd);
      }
    }
    else if ((local_1bc == PARM) && (*(short *)type != 0xf)) {
      if (name == (tree)0x0) {
        uVar7 = c_addr_space_name(address_space);
        error("%qs specified for unnamed parameter",uVar7);
      }
      else {
        uVar7 = c_addr_space_name(address_space);
        error("%qs specified for parameter %qE",uVar7,name);
      }
    }
    else if (local_1bc == FIELD) {
      if (name == (tree)0x0) {
        uVar7 = c_addr_space_name(address_space);
        error("%qs specified for structure field",uVar7);
      }
      else {
        uVar7 = c_addr_space_name(address_space);
        error("%qs specified for structure field %qE",uVar7,name);
      }
    }
  }
  if (bitfield != '\0') {
    check_bitfield_type_and_width(&type,width,name);
  }
  if ((((*(short *)type == 0xf) && (*(long *)&type->field_0x20 != 0)) &&
      (**(short **)&type->field_0x28 == 0x17)) &&
     ((*(byte *)(*(long *)&type->field_0x28 + 3) & 8) != 0)) {
    if (name == (tree)0x0) {
      error_at(loc,"size of unnamed array is too large");
    }
    else {
      error_at(loc,"size of array %qE is too large",name);
    }
    type = global_trees;
  }
  if (storage_class == csc_typedef) {
    if (((pedantic != 0) && (*(short *)type == 0x14)) && (type_quals != 0)) {
      pedwarn(loc,0x342,"ISO C forbids qualified function types");
    }
    if (type_quals != 0) {
      type = (tree)c_build_qualified_type(type,type_quals);
    }
    decl_2 = (tree)build_decl_stat(local_1b0->id_loc,0x23,*(undefined8 *)&local_1b0->u,type);
    if ((declspecs->field_0x28 & 0x40) != 0) {
      decl_2->field_0x3a = decl_2->field_0x3a | 1;
    }
    if ((declspecs->field_0x30 & 0x40) != 0) {
      pedwarn(loc,0,"typedef %q+D declared %<inline%>",decl_2);
    }
    ptVar9 = decl_2;
    if (((((warn_cxx_compat != 0) && (*(long *)&local_1b0->u != 0)) &&
         ((b = *(c_binding **)(*(long *)&local_1b0->u + 0x40), b != (c_binding *)0x0 &&
          (b->decl != (tree)0x0)))) &&
        (((*(uint *)&b->field_0x28 & 0xfffffff) == (*(uint *)&current_scope->field_0x28 & 0xfffffff)
         || ((current_scope == file_scope && ((*(uint *)&b->field_0x28 & 0xfffffff) == 0)))))) &&
       ((*(long *)&b->decl->field_0x80 != *(long *)&type->field_0x80 &&
        (warning_at(local_1b0->id_loc,0x31,"using %qD as both a typedef and a tag is invalid in C++"
                    ,decl_2), ptVar9 = decl_2, b->locus != 0)))) {
      inform(b->locus,"originally defined here");
      ptVar9 = decl_2;
    }
  }
  else if (local_1bc == TYPENAME) {
    if (((storage_class != csc_none) || (threadp != '\0')) || ((declspecs->field_0x30 & 0x40) != 0))
    {
      fancy_abort("c-decl.c",0x1648,&DAT_0011c9fd);
    }
    if (((pedantic != 0) && (*(short *)type == 0x14)) && (type_quals != 0)) {
      pedwarn(loc,0x342,"ISO C forbids const or volatile function types");
    }
    ptVar9 = type;
    if (type_quals != 0) {
      ptVar9 = (tree)c_build_qualified_type(type,type_quals);
      type = ptVar9;
    }
  }
  else {
    if (((pedantic != 0) && (local_1bc == FIELD)) &&
       (cVar3 = variably_modified_type_p(type,0), cVar3 != '\0')) {
      pedwarn(loc,0x342,"a member of a structure or union cannot have a variably modified type");
    }
    if (((*(short *)type == 0x13) && (local_1bc != PARM)) &&
       (((local_1bc == FIELD || (*(short *)type == 0x14)) ||
        ((storage_class != csc_extern &&
         (((current_scope != file_scope || (storage_class == csc_static)) ||
          (storage_class == csc_register)))))))) {
      error_at(loc,"variable or field %qE declared void",name);
      type = _error_at;
    }
    if (local_1bc == PARM) {
      if (*(short *)type == 0xf) {
        type = *(tree *)&type->field_0x10;
        if (type_quals != 0) {
          type = (tree)c_build_qualified_type(type,type_quals);
        }
        type = (tree)build_pointer_type(type);
        type_quals = array_ptr_quals;
        if (array_ptr_quals != 0) {
          type = (tree)c_build_qualified_type(type,array_ptr_quals);
        }
        if (array_ptr_attrs != (tree)0x0) {
          warning_at(loc,0x2d,"attributes in parameter array declarator ignored");
        }
        size_varies = '\0';
      }
      else if (*(short *)type == 0x14) {
        if (type_quals != 0) {
          pedwarn(loc,0x342,"ISO C forbids qualified function types");
        }
        if (type_quals != 0) {
          type = (tree)c_build_qualified_type(type,type_quals);
        }
        type = (tree)build_pointer_type(type);
        type_quals = 0;
      }
      else if (type_quals != 0) {
        type = (tree)c_build_qualified_type(type,type_quals);
      }
      decl_3 = (tree)build_decl_stat(local_1b0->id_loc,0x22,*(undefined8 *)&local_1b0->u);
      if (size_varies != '\0') {
        decl_3->field_0x39 = decl_3->field_0x39 | 0x80;
      }
      if (global_trees == type) {
        promoted_type = type;
      }
      else {
        promoted_type = (tree)c_type_promotes_to(type);
      }
      *(tree *)&decl_3->field_0x50 = promoted_type;
      if ((declspecs->field_0x30 & 0x40) != 0) {
        pedwarn(loc,0,"parameter %q+D declared %<inline%>");
      }
    }
    else if (local_1bc == FIELD) {
      if (((storage_class != csc_none) || (threadp != '\0')) ||
         ((declspecs->field_0x30 & 0x40) != 0)) {
        fancy_abort("c-decl.c",0x16af,&DAT_0011c9fd);
      }
      if (*(short *)type == 0x14) {
        error_at(loc,"field %qE declared as a function",name);
        type = (tree)build_pointer_type(type);
      }
      else if (*(short *)type != 0) {
        ptVar9 = type;
        if (*(short *)type == 0xf) {
          ptVar9 = *(tree *)&type->field_0x10;
        }
        if (*(long *)&ptVar9->field_0x20 == 0) {
          if (name == (tree)0x0) {
            error_at(loc,"unnamed field has incomplete type");
          }
          else {
            error_at(loc,"field %qE has incomplete type",name);
          }
          type = global_trees;
        }
      }
      type = (tree)c_build_qualified_type(type,type_quals);
      decl_3 = (tree)build_decl_stat(local_1b0->id_loc,0x1f,*(undefined8 *)&local_1b0->u);
      decl_3->field_0x3b = decl_3->field_0x3b & 0xfb | (bitfield & 1) * '\x04';
      if ((bitfield != '\0') && (*(long *)&local_1b0->u == 0)) {
        decl_3->field_0x2 = decl_3->field_0x2 | 0x80;
      }
      if (size_varies != '\0') {
        decl_3->field_0x39 = decl_3->field_0x39 | 0x80;
      }
    }
    else if (*(short *)type == 0x14) {
      if ((storage_class == csc_register) || (threadp != '\0')) {
        error_at(loc,"invalid storage class for function %qE",name);
      }
      else if (current_scope != file_scope) {
        if (storage_class == csc_auto) {
          pedwarn(loc,0x342,"invalid storage class for function %qE",name);
        }
        else if (storage_class == csc_static) {
          error_at(loc,"invalid storage class for function %qE",name);
          if (funcdef_flag == '\0') {
            ptVar9 = (tree)0x0;
            goto LAB_0010cc82;
          }
          declspecs->storage_class = csc_none;
          storage_class = declspecs->storage_class;
        }
      }
      decl_3 = (tree)build_decl_stat(local_1b0->id_loc,0x1d,*(undefined8 *)&local_1b0->u);
      decl_3 = (tree)build_decl_attribute_variant(decl_3,decl_attr);
      if (((pedantic != 0) && (type_quals != 0)) &&
         (expand_location(&size_maybe_const,*(undefined4 *)&decl_3->field_0x18), local_28 == '\0'))
      {
        pedwarn(loc,0x342,"ISO C forbids qualified function types");
      }
      if (((type_quals & 2U) != 0) && (**(short **)(*(long *)&decl_3->field_0x10 + 0x10) != 0x13)) {
        warning_at(loc,0,"%<noreturn%> function returns non-void value");
      }
      if ((storage_class == csc_auto) && (current_scope != file_scope)) {
        decl_3->field_0x3b = decl_3->field_0x3b & 0xfd;
      }
      else if (((declspecs->field_0x30 & 0x40) == 0) || (storage_class == csc_static)) {
        decl_3->field_0x3b = decl_3->field_0x3b & 0xfd | (initialized == '\0') * '\x02';
      }
      else {
        decl_3->field_0x3b =
             decl_3->field_0x3b & 0xfd |
             ((storage_class == csc_extern) == flag_gnu89_inline) * '\x02';
      }
      if ((storage_class == csc_static) || (storage_class == csc_auto)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      decl_3->field_0x3 = decl_3->field_0x3 & 0xf7 | cVar3 * '\b';
      if (funcdef_flag != '\0') {
        current_function_arg_info = arg_info;
      }
      if (declspecs->default_int_p != 0) {
        decl_3->field_0x3a = decl_3->field_0x3a | 1;
      }
      if ((flag_hosted == 0) || (*(long *)&local_1b0->u != _set_underlying_type)) {
        if ((declspecs->field_0x30 & 0x40) != 0) {
          decl_3->field_0xda = decl_3->field_0xda | 0x20;
        }
      }
      else if ((declspecs->field_0x30 & 0x40) != 0) {
        pedwarn(loc,0,"cannot inline function %<main%>");
      }
    }
    else {
      if ((initialized == '\0') && (storage_class == csc_extern)) {
        extern_ref = 1;
      }
      else {
        extern_ref = 0;
      }
      type = (tree)c_build_qualified_type(type,type_quals);
      if ((extern_ref != 0) && (current_scope != file_scope)) {
        global_decl = identifier_global_value(*(tree *)&local_1b0->u);
        visible_decl = lookup_name(*(tree *)&local_1b0->u);
        if ((global_decl != (tree)0x0) &&
           (((global_decl != visible_decl && (*(short *)global_decl == 0x20)) &&
            ((global_decl->field_0x3 & 8) == 0)))) {
          error_at(loc,"variable previously declared %<static%> redeclared %<extern%>");
        }
      }
      decl_3 = (tree)build_decl_stat(local_1b0->id_loc,0x20,*(undefined8 *)&local_1b0->u);
      if (size_varies != '\0') {
        decl_3->field_0x39 = decl_3->field_0x39 | 0x80;
      }
      if ((declspecs->field_0x30 & 0x40) != 0) {
        pedwarn(loc,0,"variable %q+D declared %<inline%>");
      }
      decl_3->field_0x3b = decl_3->field_0x3b & 0xfd | (storage_class == csc_extern) * '\x02';
      if (current_scope == file_scope) {
        decl_3->field_0x3 = decl_3->field_0x3 & 0xf7 | (storage_class != csc_static) * '\b';
        decl_3->field_0x3 = decl_3->field_0x3 & 0xfb | (extern_ref == 0) * '\x04';
      }
      else {
        decl_3->field_0x3 = decl_3->field_0x3 & 0xfb | (storage_class == csc_static) * '\x04';
        decl_3->field_0x3 = decl_3->field_0x3 & 0xf7 | ((byte)extern_ref & 1) * '\b';
      }
      if (threadp != '\0') {
        uVar6 = decl_default_tls_model(decl_3);
        decl_3->field_0x91 = decl_3->field_0x91 & 0x1f | (byte)((uVar6 & 7) << 5);
      }
    }
    if (((storage_class == csc_extern) ||
        (((storage_class == csc_none && (*(short *)type == 0x14)) && (funcdef_flag == '\0')))) &&
       (cVar3 = variably_modified_type_p(type,0), cVar3 != '\0')) {
      if (*(short *)type == 0x14) {
        error_at(loc,"non-nested function with variably modified type");
      }
      else {
        error_at(loc,"object with variably modified type must have no linkage");
      }
    }
    if (storage_class == csc_register) {
      decl_3->field_0x3a = decl_3->field_0x3a | 8;
      decl_3->field_0x3b = decl_3->field_0x3b | 1;
    }
    c_apply_type_quals_to_decl(type_quals,decl_3);
    if (((*(byte *)(*(long *)&decl_3->field_0x10 + 4) & 8) != 0) &&
       (((*(short *)decl_3 == 0x20 || (*(short *)decl_3 == 0x22)) || (*(short *)decl_3 == 0x24)))) {
      was_reg = (int)((byte)decl_3->field_0x3a >> 3 & 1);
      decl_3->field_0x3a = decl_3->field_0x3a & 0xf7;
      decl_3->field_0x3b = decl_3->field_0x3b & 0xfe;
      c_mark_addressable(decl_3);
      decl_3->field_0x3a = decl_3->field_0x3a & 0xf7 | ((byte)was_reg & 1) * '\b';
    }
    if ((*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)decl_3 * 0x40 + 5) != '\0') &&
       (*(long *)&decl_3->field_0x78 != 0)) {
      fancy_abort("c-decl.c",0x1786,&DAT_0011c9fd);
    }
    ptVar9 = decl_3;
    if (((warn_cxx_compat != 0) && (*(short *)decl_3 == 0x20)) &&
       ((((decl_3->field_0x3 & 8) != 0 && ((decl_3->field_0x3 & 4) != 0)) &&
        ((((**(short **)&decl_3->field_0x10 == 0x10 || (**(short **)&decl_3->field_0x10 == 0x11)) ||
          (**(short **)&decl_3->field_0x10 == 6)) &&
         (*(long *)(*(long *)&decl_3->field_0x10 + 0x60) == 0)))))) {
      warning_at(*(undefined4 *)&decl_3->field_0x18,0x31,
                 "non-local variable %qD with anonymous type is questionable in C++",decl_3);
      ptVar9 = decl_3;
    }
  }
  goto LAB_0010cc82;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree grokparms(c_arg_info *arg_info,uchar funcdef_flag)

{
  tree ptVar1;
  long lVar2;
  long in_FS_OFFSET;
  uint parmno;
  tree arg_types;
  tree parm;
  tree typelt;
  tree type;
  char *errmsg;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  arg_types = arg_info->types;
  if ((funcdef_flag != '\0') && ((arg_info->field_0x28 & 1) != 0)) {
    error("%<[*]%> not allowed in other than function prototype scope");
  }
  if (((arg_types == (tree)0x0) && (funcdef_flag == '\0')) &&
     (expand_location(local_28,input_location), local_18 == '\0')) {
    warning(0xbd,"function declaration isn%\'t a prototype");
  }
  if (arg_types == global_trees) {
    arg_types = (tree)0x0;
  }
  else if ((arg_types == (tree)0x0) || (**(short **)&arg_types->field_0x20 != 1)) {
    parm = arg_info->parms;
    parmno = 1;
    typelt = arg_types;
    for (; parm != (tree)0x0; parm = *(tree *)&parm->field_0x8) {
      ptVar1 = *(tree *)&typelt->field_0x20;
      if (ptVar1 != global_trees) {
        if (*(long *)&ptVar1->field_0x20 == 0) {
          if (funcdef_flag == '\0') {
            if (*(short *)ptVar1 == 0x13) {
              if (*(long *)&parm->field_0x20 == 0) {
                warning_at(*(undefined4 *)&parm->field_0x18,0,"parameter %u has void type",parmno);
              }
              else {
                warning_at(input_location,0,"parameter %u (%q+D) has void type",parmno,parm);
              }
            }
          }
          else {
            if (*(long *)&parm->field_0x20 == 0) {
              error_at(*(undefined4 *)&parm->field_0x18,"parameter %u has incomplete type",parmno);
            }
            else {
              error_at(input_location,"parameter %u (%q+D) has incomplete type",parmno);
            }
            *(tree *)&typelt->field_0x20 = global_trees;
            *(tree *)&parm->field_0x10 = global_trees;
            arg_types = (tree)0x0;
          }
        }
        lVar2 = (*_DAT_00123910)();
        if (lVar2 != 0) {
          error();
          *(tree *)&typelt->field_0x20 = global_trees;
          *(tree *)&parm->field_0x10 = global_trees;
          arg_types = (tree)0x0;
        }
        if ((*(long *)&parm->field_0x20 != 0) && ((parm->field_0x3 & 1) != 0)) {
          warn_if_shadowing(parm);
        }
      }
      typelt = *(tree *)&typelt->field_0x8;
      parmno = parmno + 1;
    }
  }
  else {
    if (funcdef_flag == '\0') {
      pedwarn(input_location,0,"parameter names (without types) in function declaration");
    }
    arg_info->parms = arg_info->types;
    arg_info->types = (tree)0x0;
    arg_types = (tree)0x0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return arg_types;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

c_arg_info * get_parm_info(uchar ellipsis)

{
  tree ptVar1;
  short *psVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uchar gave_void_only_once_err;
  c_binding *b;
  tree parms;
  tree tags;
  tree types;
  tree others;
  char *keyword;
  c_arg_info *arg_info;
  tree decl;
  tree type;
  
  b = current_scope->bindings;
  parser_obstack.temp = 0x30;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x30) {
    _obstack_newchunk(&parser_obstack,0x30);
  }
  pcVar4 = parser_obstack.object_base;
  pcVar5 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar5 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar5 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  parms = (tree)0x0;
  tags = (tree)0x0;
  types = (tree)0x0;
  others = (tree)0x0;
  bVar3 = false;
  *(undefined8 *)pcVar4 = 0;
  *(undefined8 *)(pcVar4 + 8) = 0;
  *(undefined8 *)(pcVar4 + 0x10) = 0;
  *(undefined8 *)(pcVar4 + 0x18) = 0;
  *(undefined8 *)(pcVar4 + 0x20) = 0;
  pcVar4[0x28] = pcVar4[0x28] & 0xfeU | (byte)current_scope->field_0x2b >> 5 & 1;
  current_scope->bindings = (c_binding *)0x0;
  if (b == (c_binding *)0x0) {
    fancy_abort("c-decl.c",0x182b,&DAT_0011c9fd);
  }
  if ((((b->prev == (c_binding *)0x0) && (*(short *)b->decl == 0x22)) &&
      (*(long *)&b->decl->field_0x20 == 0)) && (**(short **)&b->decl->field_0x10 == 0x13)) {
    if ((((b->decl->field_0x2 & 8) != 0) || ((b->decl->field_0x2 & 0x10) != 0)) ||
       ((b->decl->field_0x3a & 8) != 0)) {
      error("%<void%> as only parameter may not be qualified");
    }
    if (ellipsis != '\0') {
      error("%<void%> must be the only parameter");
    }
    *(tree *)(pcVar4 + 0x10) = _integer_zerop;
  }
  else {
    if (ellipsis == '\0') {
      types = _integer_zerop;
    }
    for (; b != (c_binding *)0x0; b = free_binding_and_advance(b)) {
      ptVar1 = b->decl;
      psVar2 = *(short **)&ptVar1->field_0x10;
      switch(*(short *)ptVar1) {
      default:
        fancy_abort("c-decl.c",0x18b9,&DAT_0011c9fd);
        break;
      case 6:
        keyword = "enum";
        goto tag;
      case 0x10:
        keyword = "struct";
        goto tag;
      case 0x11:
        keyword = "union";
tag:
        if (b->id != (tree)0x0) {
          if (b != *(c_binding **)&b->id->field_0x40) {
            fancy_abort("c-decl.c",0x1879,&DAT_0011c9fd);
          }
          *(c_binding **)&b->id->field_0x40 = b->shadowed;
        }
        if ((*(short *)ptVar1 != 0x11) || (b->id != (tree)0x0)) {
          if (b->id == (tree)0x0) {
            warning(0,"anonymous %s declared inside parameter list",keyword);
          }
          else {
            warning(0,"%<%s %E%> declared inside parameter list",keyword,b->id);
          }
          if (get_parm_info::explained_incomplete_types == '\0') {
            warning(0,
                    "its scope is only this definition or declaration, which is probably not what you want"
                   );
            get_parm_info::explained_incomplete_types = '\x01';
          }
        }
        tags = (tree)tree_cons_stat(b->id,ptVar1,tags);
        break;
      case 0x1d:
      case 0x21:
      case 0x23:
        if (*(short *)ptVar1 == 0x1d) {
          bVar7 = (b->field_0x2b & 0x20) == 0;
        }
        else {
          bVar7 = (b->field_0x2b & 0x20) != 0;
        }
        if (bVar7) {
          fancy_abort("c-decl.c",0x18a4,&DAT_0011c9fd);
        }
        *(tree *)&ptVar1->field_0x8 = others;
        others = ptVar1;
      case 0:
        if (b->id != (tree)0x0) {
          if (b != *(c_binding **)&b->id->field_0x38) {
            fancy_abort("c-decl.c",0x18b0,&DAT_0011c9fd);
          }
          *(c_binding **)&b->id->field_0x38 = b->shadowed;
        }
        break;
      case 0x22:
        if (b->id != (tree)0x0) {
          if (b != *(c_binding **)&b->id->field_0x38) {
            fancy_abort("c-decl.c",0x1854,&DAT_0011c9fd);
          }
          *(c_binding **)&b->id->field_0x38 = b->shadowed;
        }
        if ((ptVar1->field_0x2 & 0x40) == 0) {
          if ((*psVar2 == 0x13) && (*(long *)&ptVar1->field_0x20 == 0)) {
            if (!bVar3) {
              error("%<void%> must be the only parameter");
              bVar3 = true;
            }
          }
          else {
            *(tree *)&ptVar1->field_0x8 = parms;
            *(short **)&ptVar1->field_0x50 = psVar2;
            types = (tree)tree_cons_stat(0,psVar2,types);
            parms = ptVar1;
          }
        }
        else {
          error("parameter %q+D has just a forward declaration",ptVar1);
        }
      }
    }
    *(tree *)pcVar4 = parms;
    *(tree *)(pcVar4 + 8) = tags;
    *(tree *)(pcVar4 + 0x10) = types;
    *(tree *)(pcVar4 + 0x18) = others;
    uVar6 = get_pending_sizes();
    *(undefined8 *)(pcVar4 + 0x20) = uVar6;
  }
  return (c_arg_info *)pcVar4;
}



// WARNING: Could not reconcile some variable overlaps

c_typespec *
parser_xref_tag(c_typespec *__return_storage_ptr__,location_t loc,tree_code code,tree name)

{
  long lVar1;
  undefined uVar2;
  long in_FS_OFFSET;
  location_t refloc;
  tree ref;
  c_typespec ret;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ret.expr = (tree)0x0;
  ret.expr_const_operands = '\x01';
  ref = lookup_tag(code,name,0,&refloc);
  if (ref == (tree)0x0) {
    ret.kind = ctsk_tagfirstref;
  }
  else {
    ret.kind = ctsk_tagref;
    if (code == (uint)*(ushort *)ref) {
      if ((((ref->field_0x3f & 8) != 0) && (loc != 0)) && (warn_cxx_compat != 0)) {
        if (code == UNION_TYPE) {
          warning_at(loc,0x31,"union defined in struct or union is not visible in C++");
          inform(refloc,"union defined here");
        }
        else if ((uint)code < 0x12) {
          if (code == ENUMERAL_TYPE) {
            warning_at(loc,0x31,"enum type defined in struct or union is not visible in C++");
            inform(refloc,"enum type defined here");
          }
          else {
            if (code != RECORD_TYPE) goto LAB_0010d73c;
            warning_at(loc,0x31,"struct defined in struct or union is not visible in C++");
            inform(refloc,"struct defined here");
          }
        }
        else {
LAB_0010d73c:
          fancy_abort("c-decl.c",0x1901,&DAT_0011c9fd);
        }
      }
      *(ulong *)__return_storage_ptr__ = CONCAT44(ret._4_4_,ret.kind);
      __return_storage_ptr__->spec = ref;
      __return_storage_ptr__->expr = ret.expr;
      *(ulong *)&__return_storage_ptr__->expr_const_operands =
           CONCAT71(ret._25_7_,ret.expr_const_operands);
      goto LAB_0010d890;
    }
  }
  ref = (tree)make_node_stat();
  if (code == ENUMERAL_TYPE) {
    if (*tree_contains_struct == 0xe) {
      uVar2 = vector_type_mode();
    }
    else {
      uVar2 = *(undefined *)(tree_contains_struct + 0x1f);
    }
    ref->field_0x3e = uVar2;
    *(undefined4 *)&ref->field_0x40 = *(undefined4 *)(tree_contains_struct + 0x20);
    ref->field_0x5 = ref->field_0x5 & 0xfb;
    ref->field_0x2 = ref->field_0x2 | 0x20;
    *(ushort *)&ref->field_0x3c =
         *(ushort *)&ref->field_0x3c & 0xfc00 | tree_contains_struct[0x1e] & 0x3ffU;
    *(undefined8 *)&ref->field_0x68 = *(undefined8 *)(tree_contains_struct + 0x34);
    *(undefined8 *)&ref->field_0x70 = *(undefined8 *)(tree_contains_struct + 0x38);
  }
  pushtag(loc,name,ref);
  *(ulong *)__return_storage_ptr__ = CONCAT44(ret._4_4_,ret.kind);
  __return_storage_ptr__->spec = ref;
  __return_storage_ptr__->expr = ret.expr;
  *(ulong *)&__return_storage_ptr__->expr_const_operands =
       CONCAT71(ret._25_7_,ret.expr_const_operands);
LAB_0010d890:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
    ret.spec = ref;
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __return_storage_ptr__;
}



tree xref_tag(tree_code code,tree name)

{
  long in_FS_OFFSET;
  c_typespec local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  parser_xref_tag(&local_38,input_location,code,name);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_38.spec;
}



tree start_struct(location_t loc,tree_code code,tree name,
                 c_struct_parse_info **enclosing_struct_parse_info)

{
  c_struct_parse_info *pcVar1;
  VEC_tree_heap *pVVar2;
  VEC_c_binding_ptr_heap *pVVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  location_t refloc;
  tree ref;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ref = (tree)0x0;
  refloc = 0;
  if (name != (tree)0x0) {
    ref = lookup_tag(code,name,1,&refloc);
  }
  if ((ref != (tree)0x0) && (code == (uint)*(ushort *)ref)) {
    if (*(long *)&ref->field_0x20 == 0) {
      if ((ref->field_0x3f & 2) != 0) {
        if (code == UNION_TYPE) {
          error_at(loc,"nested redefinition of %<union %E%>",name);
        }
        else {
          error_at(loc,"nested redefinition of %<struct %E%>",name);
        }
        ref = (tree)0x0;
      }
    }
    else {
      if (code == UNION_TYPE) {
        error_at(loc,"redefinition of %<union %E%>",name);
      }
      else {
        error_at(loc,"redefinition of %<struct %E%>",name);
      }
      if (refloc != 0) {
        inform(refloc,"originally defined here");
      }
      ref = (tree)0x0;
    }
  }
  if ((ref == (tree)0x0) || (code != (uint)*(ushort *)ref)) {
    ref = (tree)make_node_stat();
    pushtag(loc,name,ref);
  }
  ref->field_0x3f = ref->field_0x3f | 2;
  ref->field_0x5 = ref->field_0x5 & 0xfd | ((byte)flag_pack_struct & 1) * '\x02';
  *enclosing_struct_parse_info = struct_parse_info;
  pcVar1 = (c_struct_parse_info *)xmalloc(0x18);
  struct_parse_info = pcVar1;
  pVVar2 = VEC_tree_heap_alloc(0);
  pcVar1->struct_types = pVVar2;
  pcVar1 = struct_parse_info;
  pVVar3 = VEC_c_binding_ptr_heap_alloc(0);
  pcVar1->fields = pVVar3;
  pcVar1 = struct_parse_info;
  pVVar2 = VEC_tree_heap_alloc(0);
  pcVar1->typedefs_seen = pVVar2;
  if ((warn_cxx_compat != 0) && (((in_sizeof != 0 || (in_typeof != 0)) || (in_alignof != 0)))) {
    if (in_sizeof == 0) {
      if (in_typeof == 0) {
        pcVar4 = "alignof";
      }
      else {
        pcVar4 = "typeof";
      }
    }
    else {
      pcVar4 = "sizeof";
    }
    warning_at(loc,0x31,"defining type in %qs expression is invalid in C++",pcVar4);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ref;
}



tree grokfield(location_t loc,c_declarator *declarator,c_declspecs *declspecs,tree width,
              tree *decl_attrs)

{
  tree *width_00;
  tree local_48;
  c_declspecs *local_40;
  c_declarator *local_38;
  location_t local_2c;
  uchar ok;
  uchar type_ok;
  tree type;
  tree value;
  c_binding *b;
  
  local_48 = width;
  local_40 = declspecs;
  local_38 = declarator;
  local_2c = loc;
  if (((declarator->kind == cdk_id) && (*(long *)&declarator->u == 0)) && (width == (tree)0x0)) {
    type = declspecs->type;
    if ((*(short *)type == 0x10) || (*(short *)type == 0x11)) {
      type_ok = '\x01';
    }
    else {
      type_ok = '\0';
    }
    ok = '\0';
    if ((type_ok != '\0') && ((flag_ms_extensions != 0 || ((declspecs->field_0x28 & 0x10) == 0)))) {
      if (flag_ms_extensions == 0) {
        if (flag_iso == 0) {
          if (*(long *)&type->field_0x60 == 0) {
            ok = '\x01';
          }
          else {
            ok = '\0';
          }
        }
        else {
          ok = '\0';
        }
      }
      else {
        ok = '\x01';
      }
    }
    if (ok == '\0') {
      pedwarn(loc,0,"declaration does not declare anything");
      return (tree)0x0;
    }
    pedwarn(loc,0x342,"ISO C doesn%\'t support unnamed structs/unions");
  }
  if (local_48 == (tree)0x0) {
    width_00 = (tree *)0x0;
  }
  else {
    width_00 = &local_48;
  }
  value = grokdeclarator(local_38,local_40,FIELD,'\0',width_00,decl_attrs,(tree *)0x0,(uchar *)0x0,
                         DEPRECATED_NORMAL);
  finish_decl(value,local_2c,(tree)0x0,(tree)0x0,(tree)0x0);
  *(tree *)&value->field_0x50 = local_48;
  if ((((warn_cxx_compat != 0) && (*(long *)&value->field_0x20 != 0)) &&
      (b = *(c_binding_ptr *)(*(long *)&value->field_0x20 + 0x38), b != (c_binding_ptr)0x0)) &&
     ((b->field_0x2b & 0x80) == 0)) {
    VEC_c_binding_ptr_heap_safe_push(&struct_parse_info->fields,b);
    b->field_0x2b = b->field_0x2b | 0x80;
  }
  return value;
}



void detect_field_duplicates(tree fieldlist)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  int timeout;
  tree x;
  tree y;
  htab_t htab;
  void **slot;
  
  timeout = 10;
  if ((fieldlist != (tree)0x0) && (x = *(tree *)&fieldlist->field_0x8, x != (tree)0x0)) {
    do {
      timeout = timeout + -1;
      x = *(tree *)&x->field_0x8;
      if (timeout < 1) break;
    } while (x != (tree)0x0);
    if (timeout < 1) {
      uVar2 = htab_create(0x25,htab_hash_pointer,htab_eq_pointer,0);
      for (x = fieldlist; x != (tree)0x0; x = *(tree *)&x->field_0x8) {
        lVar1 = *(long *)&x->field_0x20;
        if (lVar1 != 0) {
          plVar3 = (long *)htab_find_slot(uVar2,lVar1,1);
          if (*plVar3 != 0) {
            error("duplicate member %q+D",x);
            *(undefined8 *)&x->field_0x20 = 0;
          }
          *plVar3 = lVar1;
        }
      }
      htab_delete(uVar2);
    }
    else {
      for (x = *(tree *)&fieldlist->field_0x8; x != (tree)0x0; x = *(tree *)&x->field_0x8) {
        y = fieldlist;
        if (*(long *)&x->field_0x20 != 0) {
          for (; y != x; y = *(tree *)&y->field_0x8) {
            if (*(long *)&y->field_0x20 == *(long *)&x->field_0x20) {
              error("duplicate member %q+D",x);
              *(undefined8 *)&x->field_0x20 = 0;
            }
          }
        }
      }
    }
  }
  return;
}



void warn_cxx_compat_finish_struct(tree fieldlist)

{
  int iVar1;
  uint uVar2;
  VEC_tree_base *pVVar3;
  VEC_c_binding_ptr_base *vec_;
  long in_FS_OFFSET;
  uint ix;
  tree x;
  c_binding *b;
  pointer_set_t *tset;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ix = 0;
  while( true ) {
    if (struct_parse_info->struct_types == (VEC_tree_heap *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    else {
      pVVar3 = (VEC_tree_base *)struct_parse_info->struct_types;
    }
    iVar1 = VEC_tree_base_iterate(pVVar3,ix,&x);
    if (iVar1 == 0) break;
    x->field_0x3f = x->field_0x3f | 8;
    ix = ix + 1;
  }
  if (struct_parse_info->typedefs_seen == (VEC_tree_heap *)0x0) {
    pVVar3 = (VEC_tree_base *)0x0;
  }
  else {
    pVVar3 = (VEC_tree_base *)struct_parse_info->typedefs_seen;
  }
  uVar2 = VEC_tree_base_length(pVVar3);
  if ((uVar2 != 0) && (fieldlist != (tree)0x0)) {
    tset = (pointer_set_t *)pointer_set_create();
    ix = 0;
    while( true ) {
      if (struct_parse_info->typedefs_seen == (VEC_tree_heap *)0x0) {
        pVVar3 = (VEC_tree_base *)0x0;
      }
      else {
        pVVar3 = (VEC_tree_base *)struct_parse_info->typedefs_seen;
      }
      iVar1 = VEC_tree_base_iterate(pVVar3,ix,&x);
      x = fieldlist;
      if (iVar1 == 0) break;
      pointer_set_insert(tset);
      ix = ix + 1;
    }
    for (; x != (tree)0x0; x = *(tree *)&x->field_0x8) {
      iVar1 = pointer_set_contains(tset);
      if (iVar1 != 0) {
        warning_at(*(undefined4 *)&x->field_0x18,0x31,
                   "using %qD as both field and typedef name is invalid in C++",x);
      }
    }
    pointer_set_destroy(tset);
  }
  ix = 0;
  while( true ) {
    if (struct_parse_info->fields == (VEC_c_binding_ptr_heap *)0x0) {
      vec_ = (VEC_c_binding_ptr_base *)0x0;
    }
    else {
      vec_ = (VEC_c_binding_ptr_base *)struct_parse_info->fields;
    }
    iVar1 = VEC_c_binding_ptr_base_iterate(vec_,ix,&b);
    if (iVar1 == 0) break;
    b->field_0x2b = b->field_0x2b & 0x7f;
    ix = ix + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree finish_struct(location_t loc,tree t,tree fieldlist,tree attributes,
                  c_struct_parse_info *enclosing_struct_parse_info)

{
  uchar uVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  stmt_tree psVar6;
  undefined8 uVar7;
  tree ptVar8;
  tree local_90;
  tree local_88;
  location_t local_7c;
  uchar toplevel;
  int saw_named_field;
  int len;
  tree x;
  tree t1;
  tree *fieldlistp;
  lang_type *space;
  sorted_fields_type *space2;
  tree *field_array;
  tree decl;
  ulong width_1;
  tree type;
  ulong width;
  
  toplevel = file_scope == current_scope;
  *(undefined8 *)&t->field_0x20 = 0;
  local_90 = fieldlist;
  local_88 = t;
  local_7c = loc;
  decl_attributes(&local_88,attributes,8);
  if (pedantic != 0) {
    for (x = local_90; (x != (tree)0x0 && (*(long *)&x->field_0x20 == 0));
        x = *(tree *)&x->field_0x8) {
    }
    if (x == (tree)0x0) {
      if (*(short *)local_88 == 0x11) {
        if (local_90 == (tree)0x0) {
          pedwarn(local_7c,0x342,"union has no members");
        }
        else {
          pedwarn(local_7c,0x342,"union has no named members");
        }
      }
      else if (local_90 == (tree)0x0) {
        pedwarn(local_7c,0x342,"struct has no members");
      }
      else {
        pedwarn(local_7c,0x342,"struct has no named members");
      }
    }
  }
  saw_named_field = 0;
  for (x = local_90; x != (tree)0x0; x = *(tree *)&x->field_0x8) {
    if (*(long *)&x->field_0x10 != global_trees) {
      *(tree *)&x->field_0x28 = local_88;
      if ((x->field_0x2 & 0x10) == 0) {
        for (t1 = *(tree *)&x->field_0x10; *(short *)t1 == 0xf; t1 = *(tree *)&t1->field_0x10) {
        }
        if (((*(short *)t1 == 0x10) || (*(short *)t1 == 0x11)) && ((t1->field_0x4 & 4) != 0)) {
          local_88->field_0x4 = local_88->field_0x4 | 4;
        }
      }
      else {
        local_88->field_0x4 = local_88->field_0x4 | 4;
      }
      if ((x->field_0x2 & 8) != 0) {
        local_88->field_0x4 = local_88->field_0x4 | 8;
      }
      if ((x->field_0x39 & 0x80) != 0) {
        local_88->field_0x3f = local_88->field_0x3f | 4;
      }
      if (*(long *)&x->field_0x50 != 0) {
        width = tree_low_cst(*(undefined8 *)&x->field_0x50,1);
        uVar7 = size_int_kind(width,2);
        *(undefined8 *)&x->field_0x30 = uVar7;
        x->field_0x3b = x->field_0x3b | 2;
        x->field_0x3a = x->field_0x3a | 8;
      }
      if (((local_88->field_0x5 & 2) != 0) &&
         (((x->field_0x3b & 2) != 0 || (8 < *(uint *)(*(long *)&x->field_0x10 + 0x40))))) {
        x->field_0x5 = x->field_0x5 | 2;
      }
      if (((**(short **)&x->field_0x10 == 0xf) && (*(long *)(*(long *)&x->field_0x10 + 0x20) == 0))
         && ((*(long *)(*(long *)&x->field_0x10 + 0x18) != 0 &&
             (*(long *)(*(long *)(*(long *)&x->field_0x10 + 0x18) + 0x70) == 0)))) {
        if (*(short *)local_88 == 0x11) {
          error_at(*(undefined4 *)&x->field_0x18,"flexible array member in union");
          *(long *)&x->field_0x10 = global_trees;
        }
        else if (*(long *)&x->field_0x8 == 0) {
          if (saw_named_field == 0) {
            error_at(*(undefined4 *)&x->field_0x18,"flexible array member in otherwise empty struct"
                    );
            *(long *)&x->field_0x10 = global_trees;
          }
        }
        else {
          error_at(*(undefined4 *)&x->field_0x18,"flexible array member not at end of struct");
          *(long *)&x->field_0x10 = global_trees;
        }
      }
      if (((pedantic != 0) && (*(short *)local_88 == 0x10)) &&
         (uVar1 = flexible_array_type_p(*(tree *)&x->field_0x10), uVar1 != '\0')) {
        pedwarn(*(undefined4 *)&x->field_0x18,0x342,
                "invalid use of structure with flexible array member");
      }
      if (*(long *)&x->field_0x20 != 0) {
        saw_named_field = 1;
      }
    }
  }
  detect_field_duplicates(local_90);
  *(tree *)&local_88->field_0x18 = local_90;
  layout_type(local_88);
  fieldlistp = &local_90;
  while (*fieldlistp != (tree)0x0) {
    if (((*(short *)*fieldlistp == 0x1f) && (*(long *)&(*fieldlistp)->field_0x50 != 0)) &&
       (*(long *)&(*fieldlistp)->field_0x10 != global_trees)) {
      width_1 = tree_low_cst(*(undefined8 *)&(*fieldlistp)->field_0x50,1);
      type = *(tree *)&(*fieldlistp)->field_0x10;
      if (width_1 != (*(ushort *)&type->field_0x3c & 0x3ff)) {
        ptVar8 = *fieldlistp;
        uVar7 = c_build_bitfield_integer_type(width_1,(byte)type->field_0x2 >> 5 & 1);
        *(undefined8 *)&ptVar8->field_0x10 = uVar7;
        if (**(short **)&(*fieldlistp)->field_0x10 == 0xe) {
          uVar2 = vector_type_mode(*(undefined8 *)&(*fieldlistp)->field_0x10);
        }
        else {
          uVar2 = *(undefined *)(*(long *)&(*fieldlistp)->field_0x10 + 0x3e);
        }
        (*fieldlistp)->field_0x38 = uVar2;
      }
      *(undefined8 *)&(*fieldlistp)->field_0x50 = 0;
    }
    else {
      fieldlistp = (tree *)&(*fieldlistp)->field_0x8;
    }
  }
  *(tree *)&local_88->field_0x18 = local_90;
  len = 0;
  for (x = local_90; ((x != (tree)0x0 && (len < 0x10)) && (*(long *)&x->field_0x20 != 0));
      x = *(tree *)&x->field_0x8) {
    len = len + 1;
  }
  if (0xf < len) {
    iVar4 = list_length(x);
    len = len + iVar4;
    space = (lang_type *)ggc_alloc_cleared_stat(0x20);
    space2 = (sorted_fields_type *)ggc_alloc_stat(((long)len + 2) * 8);
    len = 0;
    space->s = space2;
    field_array = space2->elts;
    for (x = local_90; x != (tree)0x0; x = *(tree *)&x->field_0x8) {
      iVar4 = len + 1;
      field_array[len] = x;
      len = iVar4;
      if (*(long *)&x->field_0x20 == 0) break;
    }
    if (x == (tree)0x0) {
      *(lang_type **)&local_88->field_0xa0 = space;
      ***(int ***)&local_88->field_0xa0 = len;
      field_array = (tree *)(**(long **)&local_88->field_0xa0 + 8);
      spec_qsort(field_array,(long)len,8);
    }
  }
  for (x = *(tree *)&local_88->field_0x80; x != (tree)0x0; x = *(tree *)&x->field_0x78) {
    *(undefined8 *)&x->field_0x18 = *(undefined8 *)&local_88->field_0x18;
    *(undefined8 *)&x->field_0xa0 = *(undefined8 *)&local_88->field_0xa0;
    x->field_0x4 = x->field_0x4 & 0xfb | ((byte)local_88->field_0x4 >> 2 & 1) * '\x04';
    x->field_0x4 = x->field_0x4 & 0xf7 | ((byte)local_88->field_0x4 >> 3 & 1) * '\b';
    x->field_0x3f = x->field_0x3f & 0xfb | ((byte)local_88->field_0x3f >> 2 & 1) * '\x04';
  }
  if ((*(short *)local_88 == 0x11) && ((local_88->field_0x3d & 0x10) != 0)) {
    if (*(long *)&local_88->field_0x18 != 0) {
      if (*(short *)local_88 == 0xe) {
        uVar5 = vector_type_mode(local_88);
      }
      else {
        uVar5 = (uint)(byte)local_88->field_0x3e;
      }
      if (uVar5 == *(byte *)(*(long *)&local_88->field_0x18 + 0x38)) goto LAB_0010e974;
    }
    local_88->field_0x3d = local_88->field_0x3d & 0xef;
    warning_at(local_7c,0,"union cannot be made transparent");
  }
LAB_0010e974:
  for (x = *(tree *)(*(long *)&local_88->field_0x80 + 0x68); x != (tree)0x0;
      x = *(tree *)&x->field_0x8) {
    decl = *(tree *)&x->field_0x20;
    if (**(short **)&decl->field_0x10 == 0xf) {
      layout_array_type(*(tree *)&decl->field_0x10);
    }
    if (*(short *)decl != 0x23) {
      layout_decl(decl,0);
      if ((c_language & 1) != 0) {
        objc_check_decl(decl);
      }
      rest_of_decl_compilation(decl,toplevel,0);
      if (toplevel == '\0') {
        expand_decl(decl);
      }
    }
  }
  *(undefined8 *)(*(long *)&local_88->field_0x80 + 0x68) = 0;
  if (*(long *)&local_88->field_0x8 != 0) {
    *(location_t *)(*(long *)&local_88->field_0x8 + 0x18) = local_7c;
  }
  rest_of_type_compilation(local_88,toplevel);
  psVar6 = current_stmt_tree();
  if ((psVar6->x_cur_stmt_list != (tree)0x0) &&
     (cVar3 = variably_modified_type_p(local_88,0), cVar3 != '\0')) {
    uVar7 = build_decl_stat(local_7c,0x23,0,local_88);
    ptVar8 = (tree)build_stmt(local_7c,0x84,uVar7);
    add_stmt(ptVar8);
  }
  if (warn_cxx_compat != 0) {
    warn_cxx_compat_finish_struct(local_90);
  }
  VEC_tree_heap_free(&struct_parse_info->struct_types);
  VEC_c_binding_ptr_heap_free(&struct_parse_info->fields);
  VEC_tree_heap_free(&struct_parse_info->typedefs_seen);
  free(struct_parse_info);
  struct_parse_info = enclosing_struct_parse_info;
  if ((((warn_cxx_compat != 0) && (enclosing_struct_parse_info != (c_struct_parse_info *)0x0)) &&
      (in_sizeof == 0)) && ((in_typeof == 0 && (in_alignof == 0)))) {
    VEC_tree_heap_safe_push(&enclosing_struct_parse_info->struct_types,local_88);
  }
  return local_88;
}



void layout_array_type(tree t)

{
  if (**(short **)&t->field_0x10 == 0xf) {
    layout_array_type(*(tree *)&t->field_0x10);
  }
  layout_type(t);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree start_enum(location_t loc,c_enum_contents *the_enum,tree name)

{
  char *pcVar1;
  long in_FS_OFFSET;
  location_t enumloc;
  tree enumtype;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  enumtype = (tree)0x0;
  enumloc = 0;
  if (name != (tree)0x0) {
    enumtype = lookup_tag(ENUMERAL_TYPE,name,1,&enumloc);
  }
  if ((enumtype == (tree)0x0) || (*(short *)enumtype != 6)) {
    enumtype = (tree)make_node_stat();
    pushtag(loc,name,enumtype);
  }
  if ((enumtype->field_0x3f & 2) != 0) {
    error_at(loc,"nested redefinition of %<enum %E%>",name);
  }
  enumtype->field_0x3f = enumtype->field_0x3f | 2;
  if (*(long *)&enumtype->field_0x18 != 0) {
    error_at(loc,"redeclaration of %<enum %E%>",name);
    if (enumloc != 0) {
      inform(enumloc,"originally defined here");
    }
    *(undefined8 *)&enumtype->field_0x18 = 0;
  }
  the_enum->enum_next_value = _build_decl_stat;
  the_enum->enum_overflow = 0;
  if (flag_short_enums != 0) {
    enumtype->field_0x5 = enumtype->field_0x5 | 2;
  }
  if ((warn_cxx_compat != 0) && (((in_sizeof != 0 || (in_typeof != 0)) || (in_alignof != 0)))) {
    if (in_sizeof == 0) {
      if (in_typeof == 0) {
        pcVar1 = "alignof";
      }
      else {
        pcVar1 = "typeof";
      }
    }
    else {
      pcVar1 = "sizeof";
    }
    warning_at(loc,0x31,"defining type in %qs expression is invalid in C++",pcVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return enumtype;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree finish_enum(tree enumtype,tree values,tree attributes)

{
  tree ptVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  tree local_70;
  uchar toplevel;
  int unsign;
  int precision;
  tree pair;
  tree tem;
  tree minnode;
  tree maxnode;
  tree ini;
  tree value;
  tree enu;
  lang_type *lt;
  
  minnode = (tree)0x0;
  maxnode = (tree)0x0;
  toplevel = file_scope == current_scope;
  local_70 = enumtype;
  decl_attributes(&local_70,attributes,8);
  if (values == global_trees) {
    maxnode = _build_decl_stat;
    minnode = _build_decl_stat;
  }
  else {
    minnode = *(tree *)&values->field_0x20;
    maxnode = minnode;
    for (pair = *(tree *)&values->field_0x8; pair != (tree)0x0; pair = *(tree *)&pair->field_0x8) {
      value = *(tree *)&pair->field_0x20;
      iVar3 = tree_int_cst_lt(maxnode,value);
      if (iVar3 != 0) {
        maxnode = value;
      }
      iVar3 = tree_int_cst_lt(value,minnode);
      if (iVar3 != 0) {
        minnode = value;
      }
    }
  }
  uVar4 = tree_int_cst_sgn(minnode);
  unsign = ~uVar4 >> 0x1f;
  uVar4 = tree_int_cst_min_precision(minnode,unsign);
  uVar5 = tree_int_cst_min_precision(maxnode,unsign & 0xff);
  if (uVar5 < uVar4) {
    precision = tree_int_cst_min_precision(minnode,unsign & 0xff);
  }
  else {
    precision = tree_int_cst_min_precision(maxnode,unsign & 0xff);
  }
  if (((local_70->field_0x5 & 2) == 0) &&
     (precision <= (int)(uint)(*(ushort *)&_error_at->field_0x3c & 0x3ff))) {
    tem = _error_at;
    if (unsign != 0) {
      tem = tree_contains_struct;
    }
  }
  else {
    tem = (tree)c_common_type_for_size(precision,unsign);
    if (tem == (tree)0x0) {
      warning(0,"enumeration values exceed range of largest integer");
      tem = _composite_type;
    }
  }
  *(undefined8 *)&local_70->field_0x68 = *(undefined8 *)&tem->field_0x68;
  *(undefined8 *)&local_70->field_0x70 = *(undefined8 *)&tem->field_0x70;
  local_70->field_0x2 = local_70->field_0x2 & 0xdf | (byte)(((byte)tem->field_0x2 >> 5 & 1) << 5);
  *(undefined8 *)&local_70->field_0x20 = 0;
  if ((*(ushort *)&local_70->field_0x3c & 0x3ff) == 0) {
    *(ushort *)&local_70->field_0x3c =
         *(ushort *)&local_70->field_0x3c & 0xfc00 | *(ushort *)&tem->field_0x3c & 0x3ff;
  }
  else if ((int)(uint)(*(ushort *)&local_70->field_0x3c & 0x3ff) < precision) {
    error("specified mode too small for enumeral values");
  }
  layout_type(local_70);
  ptVar1 = values;
  if (values != global_trees) {
    while (pair = ptVar1, pair != (tree)0x0) {
      enu = *(tree *)&pair->field_0x18;
      ini = *(tree *)&enu->field_0x50;
      *(tree *)&enu->field_0x10 = local_70;
      if (*(tree *)&ini->field_0x10 != _error_at) {
        ini = (tree)convert(local_70,ini);
      }
      *(tree *)&enu->field_0x50 = ini;
      *(undefined8 *)&pair->field_0x18 = *(undefined8 *)&enu->field_0x20;
      *(tree *)&pair->field_0x20 = ini;
      ptVar1 = *(tree *)&pair->field_0x8;
    }
    *(tree *)&local_70->field_0x18 = values;
  }
  lt = (lang_type *)ggc_alloc_cleared_stat(0x20);
  lt->enum_min = minnode;
  lt->enum_max = maxnode;
  *(lang_type **)&local_70->field_0xa0 = lt;
  for (tem = *(tree *)&local_70->field_0x80; tem != (tree)0x0; tem = *(tree *)&tem->field_0x78) {
    if (tem != local_70) {
      *(undefined8 *)&tem->field_0x18 = *(undefined8 *)&local_70->field_0x18;
      *(undefined8 *)&tem->field_0x68 = *(undefined8 *)&local_70->field_0x68;
      *(undefined8 *)&tem->field_0x70 = *(undefined8 *)&local_70->field_0x70;
      *(undefined8 *)&tem->field_0x20 = *(undefined8 *)&local_70->field_0x20;
      *(undefined8 *)&tem->field_0x28 = *(undefined8 *)&local_70->field_0x28;
      if (*(short *)local_70 == 0xe) {
        uVar2 = vector_type_mode(local_70);
      }
      else {
        uVar2 = local_70->field_0x3e;
      }
      tem->field_0x3e = uVar2;
      *(ushort *)&tem->field_0x3c =
           *(ushort *)&tem->field_0x3c & 0xfc00 | *(ushort *)&local_70->field_0x3c & 0x3ff;
      *(undefined4 *)&tem->field_0x40 = *(undefined4 *)&local_70->field_0x40;
      tem->field_0x5 = tem->field_0x5 & 0xfb | ((byte)local_70->field_0x5 >> 2 & 1) * '\x04';
      tem->field_0x2 = tem->field_0x2 & 0xdf | (byte)(((byte)local_70->field_0x2 >> 5 & 1) << 5);
      *(undefined8 *)&tem->field_0xa0 = *(undefined8 *)&local_70->field_0xa0;
    }
  }
  rest_of_type_compilation(local_70,toplevel);
  if ((((warn_cxx_compat != 0) && (struct_parse_info != (c_struct_parse_info *)0x0)) &&
      (in_sizeof == 0)) && ((in_typeof == 0 && (in_alignof == 0)))) {
    VEC_tree_heap_safe_push(&struct_parse_info->struct_types,local_70);
  }
  return local_70;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree build_enumerator(location_t loc,c_enum_contents *the_enum,tree name,tree value)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  tree ptVar6;
  undefined8 uVar7;
  tree local_38;
  tree type;
  tree decl;
  
  local_38 = value;
  if (value != (tree)0x0) {
    if (value == global_trees) {
      local_38 = (tree)0x0;
    }
    else if (((**(short **)&value->field_0x10 == 6) || (**(short **)&value->field_0x10 == 7)) ||
            (**(short **)&value->field_0x10 == 8)) {
      if ((*(short *)value != 0x17) &&
         (local_38 = (tree)c_fully_fold(value,0,0), *(short *)local_38 == 0x17)) {
        pedwarn(loc,0x342,"enumerator value for %qE is not an integer constant expression",name);
      }
      if (*(short *)local_38 == 0x17) {
        local_38 = (tree)default_conversion(local_38);
        constant_expression_warning(local_38);
      }
      else {
        error("enumerator value for %qE is not an integer constant",name);
        local_38 = (tree)0x0;
      }
    }
    else {
      error_at(loc,"enumerator value for %qE is not an integer constant",name);
      local_38 = (tree)0x0;
    }
  }
  if (local_38 == (tree)0x0) {
    local_38 = the_enum->enum_next_value;
    if (the_enum->enum_overflow != 0) {
      error_at(loc,"overflow in enumeration values");
    }
  }
  else {
    iVar4 = int_fits_type_p(local_38,_error_at);
    if (iVar4 == 0) {
      pedwarn(loc,0x342,"ISO C restricts enumerator values to range of %<int%>");
    }
  }
  iVar4 = int_fits_type_p(local_38,_error_at);
  if (iVar4 != 0) {
    local_38 = (tree)convert(_error_at,local_38);
  }
  uVar5 = input_location;
  if (((3 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)local_38 * 4)) &&
      (*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)local_38 * 4) < 0xb)) &&
     (*(int *)&local_38->field_0x18 != 0)) {
    if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)local_38 * 4) < 4) ||
       (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)local_38 * 4))) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)&local_38->field_0x18;
    }
  }
  ptVar6 = (tree)build_binary_op(uVar5,0x3f,local_38,_error,0);
  the_enum->enum_next_value = ptVar6;
  iVar4 = tree_int_cst_lt(the_enum->enum_next_value,local_38);
  the_enum->enum_overflow = iVar4;
  lVar1 = *(long *)&local_38->field_0x10;
  if (((*(ushort *)(lVar1 + 0x3c) & 0x3ff) < (*(ushort *)(_error_at + 0x3c) & 0x3ff)) ||
     ((*(byte *)(lVar1 + 2) & 0x20) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  uVar2 = *(ushort *)(_error_at + 0x3c) & 0x3ff;
  uVar3 = *(ushort *)(lVar1 + 0x3c) & 0x3ff;
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  uVar7 = c_common_type_for_size(uVar3,uVar7);
  ptVar6 = (tree)build_decl_stat(loc,0x21,name,uVar7);
  uVar7 = convert(uVar7,local_38);
  *(undefined8 *)&ptVar6->field_0x50 = uVar7;
  pushdecl(ptVar6);
  ptVar6 = (tree)tree_cons_stat(ptVar6,local_38,0);
  return ptVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int start_function(c_declspecs *declspecs,c_declarator *declarator,tree attributes)

{
  tree ptVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  tree local_80;
  c_declarator *local_78;
  c_declspecs *local_70;
  location_t loc;
  tree decl1;
  tree old_decl;
  c_binding *b;
  tree ext_decl;
  tree ext_type;
  tree restype;
  tree resdecl;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  current_function_returns_value = 0;
  current_function_returns_null = 0;
  current_function_returns_abnormally = 0;
  warn_about_return_type = 0;
  c_switch_stack = 0;
  c_break_label = (tree)CONCAT44(uRam00000000001231b4,flag_gnu89_inline);
  c_cont_label = c_break_label;
  local_80 = attributes;
  local_78 = declarator;
  local_70 = declspecs;
  decl1 = grokdeclarator(declarator,declspecs,FUNCDEF,'\x01',(tree *)0x0,&local_80,(tree *)0x0,
                         (uchar *)0x0,DEPRECATED_NORMAL);
  if (decl1 == (tree)0x0) {
    iVar3 = 0;
  }
  else {
    loc = *(location_t *)&decl1->field_0x18;
    decl_attributes(&decl1,local_80,0);
    if ((((decl1->field_0xda & 0x20) != 0) && ((decl1->field_0xd9 & 0x80) != 0)) &&
       (lVar4 = lookup_attribute("noinline",*(undefined8 *)&decl1->field_0x58), lVar4 != 0)) {
      warning_at(loc,0x2d,"inline function %qD given attribute noinline");
    }
    if (((((local_70->field_0x30 & 0x40) != 0) && (flag_gnu89_inline == 0)) &&
        ((*(short *)decl1 == 0x1d &&
         ((lVar4 = lookup_attribute("gnu_inline",*(undefined8 *)&decl1->field_0x58), lVar4 != 0 ||
          (current_function_decl != (tree)0x0)))))) && (local_70->storage_class != csc_static)) {
      decl1->field_0x3b = decl1->field_0x3b & 0xfd | ((decl1->field_0x3b & 2) == 0) * '\x02';
    }
    announce_function(decl1);
    if ((*(long *)(*(long *)(*(long *)&decl1->field_0x10 + 0x10) + 0x20) == 0) &&
       (**(short **)(*(long *)&decl1->field_0x10 + 0x10) != 0x13)) {
      error_at(loc,"return type is an incomplete type");
      ptVar1 = decl1;
      uVar5 = build_function_type(warn_traditional,
                                  *(undefined8 *)(*(long *)&decl1->field_0x10 + 0x18));
      *(undefined8 *)&ptVar1->field_0x10 = uVar5;
    }
    if (warn_about_return_type != 0) {
      if (flag_isoc99 == 0) {
        if (warn_return_type == 0) {
          uVar2 = 0x68;
        }
        else {
          uVar2 = 0xac;
        }
      }
      else {
        uVar2 = 0;
      }
      pedwarn_c99(loc,uVar2,"return type defaults to %<int%>");
    }
    *(tree *)&decl1->field_0x50 = global_trees;
    old_decl = lookup_name_in_scope(*(tree *)&decl1->field_0x20,current_scope);
    if ((old_decl != (tree)0x0) && (*(short *)old_decl != 0x1d)) {
      old_decl = (tree)0x0;
    }
    current_function_prototype_locus = 0;
    current_function_prototype_built_in = '\0';
    current_function_prototype_arg_types = (tree)0x0;
    if (*(long *)(*(long *)&decl1->field_0x10 + 0x18) == 0) {
      if (((old_decl != (tree)0x0) && (**(short **)&old_decl->field_0x10 == 0x14)) &&
         (iVar3 = comptypes(*(undefined8 *)(*(long *)&decl1->field_0x10 + 0x10),
                            *(undefined8 *)(*(long *)&old_decl->field_0x10 + 0x10)), ptVar1 = decl1,
         iVar3 != 0)) {
        uVar5 = composite_type(*(undefined8 *)&old_decl->field_0x10,
                               *(undefined8 *)&decl1->field_0x10);
        *(undefined8 *)&ptVar1->field_0x10 = uVar5;
        current_function_prototype_locus = *(location_t *)&old_decl->field_0x18;
        current_function_prototype_built_in = (byte)old_decl->field_0x3a >> 5 & 1;
        current_function_prototype_arg_types = *(tree *)(*(long *)&decl1->field_0x10 + 0x18);
      }
      if ((decl1->field_0x3 & 8) != 0) {
        for (b = *(c_binding **)(*(long *)&decl1->field_0x20 + 0x38);
            (b != (c_binding *)0x0 &&
            ((*(uint *)&b->field_0x28 & 0xfffffff) !=
             (*(uint *)&external_scope->field_0x28 & 0xfffffff))); b = b->shadowed) {
        }
        if (b != (c_binding *)0x0) {
          ext_decl = b->decl;
          if (b->u == 0) {
            ext_type = *(tree *)&ext_decl->field_0x10;
          }
          else {
            ext_type = (tree)b->u;
          }
          if ((*(short *)ext_type == 0x14) &&
             (iVar3 = comptypes(*(undefined8 *)(*(long *)&decl1->field_0x10 + 0x10),
                                *(undefined8 *)&ext_type->field_0x10), iVar3 != 0)) {
            current_function_prototype_locus = *(location_t *)&ext_decl->field_0x18;
            current_function_prototype_built_in = (byte)ext_decl->field_0x3a >> 5 & 1;
            current_function_prototype_arg_types = *(tree *)&ext_type->field_0x18;
          }
        }
      }
    }
    if ((((warn_strict_prototypes == 0) || (old_decl == global_trees)) ||
        (*(long *)(*(long *)&decl1->field_0x10 + 0x18) != 0)) ||
       ((old_decl != (tree)0x0 &&
        ((*(long *)(*(long *)&old_decl->field_0x10 + 0x18) != 0 ||
         ((old_decl->field_0xd9 & 0x18) != 0)))))) {
      if (((warn_missing_prototypes == 0) ||
          (((old_decl == global_trees || ((decl1->field_0x3 & 8) == 0)) ||
           (*(long *)&decl1->field_0x20 == _set_underlying_type)))) ||
         ((old_decl != (tree)0x0 &&
          ((*(long *)(*(long *)&old_decl->field_0x10 + 0x18) != 0 ||
           ((old_decl->field_0xd9 & 0x18) != 0)))))) {
        if ((warn_missing_prototypes == 0) ||
           ((((old_decl == (tree)0x0 || (old_decl == global_trees)) ||
             ((old_decl->field_0x3 & 1) == 0)) ||
            (*(long *)(*(long *)&old_decl->field_0x10 + 0x18) != 0)))) {
          if (((warn_missing_declarations == 0) || ((decl1->field_0x3 & 8) == 0)) ||
             ((old_decl != (tree)0x0 || (*(long *)&decl1->field_0x20 == _set_underlying_type)))) {
            if (((warn_missing_declarations != 0) && (old_decl != (tree)0x0)) &&
               ((old_decl != global_trees &&
                (((old_decl->field_0x3 & 1) != 0 && ((old_decl->field_0x3a & 2) != 0)))))) {
              warning_at(loc,0x81,"%qD was used with no declaration before its definition",decl1);
            }
          }
          else {
            warning_at(loc,0x81,"no previous declaration for %qD",decl1);
          }
        }
        else {
          warning_at(loc,0x87,"%qD was used with no prototype before its definition",decl1);
        }
      }
      else {
        warning_at(loc,0x87,"no previous prototype for %qD",decl1);
      }
    }
    else {
      warning_at(loc,0xbd,"function declaration isn%\'t a prototype");
    }
    decl1->field_0x3 = decl1->field_0x3 | 4;
    if (current_function_decl != (tree)0x0) {
      decl1->field_0x3 = decl1->field_0x3 & 0xf7;
    }
    if ((*(char *)((long)&warn_redundant_decls + (ulong)*(ushort *)decl1 * 0x40 + 5) != '\0') &&
       (*(long *)&decl1->field_0x78 != 0)) {
      fancy_abort("c-decl.c",0x1d76,&DAT_0011c9fd);
    }
    if (current_scope == file_scope) {
      maybe_apply_pragma_weak(decl1);
    }
    if ((warn_main != 0) && (*(long *)&decl1->field_0x20 == _set_underlying_type)) {
      if (*(long *)(*(long *)(*(long *)&decl1->field_0x10 + 0x10) + 0x80) != _error_at) {
        pedwarn(loc,0x7e,"return type of %qD is not %<int%>",decl1);
      }
      check_main_parameter_types(decl1);
      if ((decl1->field_0x3 & 8) == 0) {
        pedwarn(loc,0x7e,"%qD is normally a non-static function",decl1);
      }
    }
    current_function_decl = pushdecl(decl1);
    push_scope();
    declare_parm_level();
    restype = *(tree *)(*(long *)&current_function_decl->field_0x10 + 0x10);
    resdecl = (tree)build_decl_stat(loc,0x24,0,restype);
    resdecl->field_0x39 = resdecl->field_0x39 | 0x10;
    resdecl->field_0x39 = resdecl->field_0x39 | 4;
    *(tree *)&current_function_decl->field_0xa8 = resdecl;
    start_fname_decls();
    iVar3 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void store_parm_decls_newstyle(tree fndecl,c_arg_info *arg_info)

{
  long in_FS_OFFSET;
  tree decl;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (current_scope->bindings == (c_binding *)0x0) {
    expand_location(local_28,input_location);
    if (((local_18 == '\0') && (current_function_scope == (c_scope *)0x0)) &&
       (arg_info->types != global_trees)) {
      warning_at(*(undefined4 *)&fndecl->field_0x18,0xca,
                 "traditional C rejects ISO C style function definitions");
    }
  }
  else {
    error_at(*(undefined4 *)&fndecl->field_0x18,
             "old-style parameter declarations in prototyped function definition");
    pop_scope();
    push_scope();
  }
  for (decl = arg_info->parms; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
    *(undefined8 *)&decl->field_0x28 = current_function_decl;
    if (*(long *)&decl->field_0x20 == 0) {
      error_at(*(undefined4 *)&decl->field_0x18,"parameter name omitted");
    }
    else {
      bind(*(tree *)&decl->field_0x20,decl,current_scope,'\0','\0',0);
      if ((decl->field_0x3 & 1) == 0) {
        warn_if_shadowing(decl);
      }
    }
  }
  *(tree *)&fndecl->field_0xa0 = arg_info->parms;
  for (decl = arg_info->others; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
    *(undefined8 *)&decl->field_0x28 = current_function_decl;
    if (*(long *)&decl->field_0x20 != 0) {
      bind(*(tree *)&decl->field_0x20,decl,current_scope,'\0',*(short *)decl == 0x1d,0);
    }
  }
  for (decl = arg_info->tags; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
    if (*(long *)&decl->field_0x18 != 0) {
      bind(*(tree *)&decl->field_0x18,*(tree *)&decl->field_0x20,current_scope,'\0','\0',0);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void store_parm_decls_oldstyle(tree fndecl,c_arg_info *arg_info)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  tree ptVar6;
  tree ptVar7;
  long in_FS_OFFSET;
  c_binding *b;
  tree parm;
  tree decl;
  tree last;
  tree parmids;
  tree type;
  tree actual;
  tree last_1;
  pointer_set_t *seen_args;
  tree type_1;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  parmids = arg_info->parms;
  uVar4 = pointer_set_create();
  expand_location(local_28,input_location);
  parm = parmids;
  if (local_18 == '\0') {
    warning_at(*(undefined4 *)&fndecl->field_0x18,0x94,"old-style function definition");
  }
  for (; parm != (tree)0x0; parm = *(tree *)&parm->field_0x8) {
    if (*(long *)&parm->field_0x20 == 0) {
      error_at(*(undefined4 *)&fndecl->field_0x18,"parameter name missing from parameter list");
      *(undefined8 *)&parm->field_0x18 = 0;
    }
    else {
      lVar1 = *(long *)(*(long *)&parm->field_0x20 + 0x38);
      if ((lVar1 == 0) ||
         ((*(uint *)(lVar1 + 0x28) & 0xfffffff) != (*(uint *)&current_scope->field_0x28 & 0xfffffff)
         )) {
        decl = (tree)build_decl_stat(*(undefined4 *)&fndecl->field_0x18,0x22,
                                     *(undefined8 *)&parm->field_0x20,_error_at);
        *(undefined8 *)&decl->field_0x50 = *(undefined8 *)&decl->field_0x10;
        pushdecl(decl);
        warn_if_shadowing(decl);
        if (flag_isoc99 == 0) {
          warning_at(*(undefined4 *)&decl->field_0x18,0x86,"type of %qD defaults to %<int%>",decl);
        }
        else {
          pedwarn(*(undefined4 *)&decl->field_0x18,0,"type of %qD defaults to %<int%>",decl);
        }
      }
      else {
        decl = *(tree *)(lVar1 + 8);
        if (*(short *)decl == 0x22) {
          iVar3 = pointer_set_contains(uVar4,decl);
          if (iVar3 != 0) {
            error_at(*(undefined4 *)&decl->field_0x18,"multiple parameters named %qD",decl);
            *(undefined8 *)&parm->field_0x18 = 0;
            goto LAB_0011040e;
          }
          if (**(short **)&decl->field_0x10 == 0x13) {
            error_at(*(undefined4 *)&decl->field_0x18,"parameter %qD declared with void type",decl);
            *(long *)&decl->field_0x10 = _error_at;
            *(long *)&decl->field_0x50 = _error_at;
            layout_decl(decl,0);
          }
        }
        else {
          error_at(*(undefined4 *)&decl->field_0x18,"%qD declared as a non-parameter",decl);
        }
        warn_if_shadowing(decl);
      }
      *(tree *)&parm->field_0x18 = decl;
      pointer_set_insert(uVar4,decl);
    }
LAB_0011040e:
  }
  for (b = current_scope->bindings; b != (c_binding *)0x0; b = b->prev) {
    ptVar7 = b->decl;
    if (*(short *)ptVar7 == 0x22) {
      if ((*(long *)&ptVar7->field_0x10 != global_trees) &&
         (*(long *)(*(long *)&ptVar7->field_0x10 + 0x20) == 0)) {
        error_at(*(undefined4 *)&ptVar7->field_0x18,"parameter %qD has incomplete type",ptVar7);
        *(long *)&ptVar7->field_0x10 = global_trees;
      }
      iVar3 = pointer_set_contains(uVar4,ptVar7);
      if (iVar3 == 0) {
        error_at(*(undefined4 *)&ptVar7->field_0x18,
                 "declaration for parameter %qD but no such parameter",ptVar7);
        uVar5 = tree_cons_stat(ptVar7,0,0);
        parmids = (tree)chainon(parmids,uVar5);
      }
    }
  }
  *(undefined8 *)&fndecl->field_0xa0 = 0;
  for (parm = parmids; (parm != (tree)0x0 && (*(long *)&parm->field_0x18 == 0));
      parm = *(tree *)&parm->field_0x8) {
  }
  if ((parm != (tree)0x0) && (*(long *)&parm->field_0x18 != 0)) {
    last = *(tree *)&parm->field_0x18;
    *(tree *)&fndecl->field_0xa0 = last;
    for (parm = *(tree *)&parm->field_0x8; parm != (tree)0x0; parm = *(tree *)&parm->field_0x8) {
      if (*(long *)&parm->field_0x18 != 0) {
        *(undefined8 *)&last->field_0x8 = *(undefined8 *)&parm->field_0x18;
        last = *(tree *)&parm->field_0x18;
      }
    }
    *(undefined8 *)&last->field_0x8 = 0;
  }
  pointer_set_destroy(uVar4);
  if (current_function_prototype_arg_types == (tree)0x0) {
    actual = (tree)0x0;
    last_1 = (tree)0x0;
    for (parm = *(tree *)&fndecl->field_0xa0; parm != (tree)0x0; parm = *(tree *)&parm->field_0x8) {
      ptVar6 = (tree)tree_cons_stat(0,*(undefined8 *)&parm->field_0x50,0);
      ptVar7 = ptVar6;
      if (last_1 != (tree)0x0) {
        *(tree *)&last_1->field_0x8 = ptVar6;
        ptVar7 = actual;
      }
      actual = ptVar7;
      last_1 = ptVar6;
    }
    ptVar7 = (tree)tree_cons_stat(0,warn_traditional,0);
    if (last_1 != (tree)0x0) {
      *(tree *)&last_1->field_0x8 = ptVar7;
      ptVar7 = actual;
    }
    actual = ptVar7;
    uVar4 = build_variant_type_copy(*(undefined8 *)&fndecl->field_0x10);
    *(undefined8 *)&fndecl->field_0x10 = uVar4;
    *(tree *)(*(long *)&fndecl->field_0x10 + 0x88) = actual;
  }
  else {
    parm = *(tree *)&fndecl->field_0xa0;
    type = current_function_prototype_arg_types;
    while( true ) {
      if ((parm == (tree)0x0) &&
         (((type == (tree)0x0 || (*(long *)&type->field_0x20 == global_trees)) ||
          (*(long *)(*(long *)&type->field_0x20 + 0x80) == warn_traditional)))) goto LAB_0011090c;
      if (((parm == (tree)0x0) || (type == (tree)0x0)) ||
         (*(long *)(*(long *)&type->field_0x20 + 0x80) == warn_traditional)) break;
      if (((*(long *)&parm->field_0x10 != global_trees) &&
          (*(long *)&type->field_0x10 != global_trees)) &&
         (iVar3 = comptypes(*(undefined8 *)(*(long *)&parm->field_0x50 + 0x80),
                            *(undefined8 *)(*(long *)&type->field_0x20 + 0x80)), iVar3 == 0)) {
        if (*(long *)(*(long *)&parm->field_0x10 + 0x80) ==
            *(long *)(*(long *)&type->field_0x20 + 0x80)) {
          *(undefined8 *)&parm->field_0x50 = *(undefined8 *)&parm->field_0x10;
          cVar2 = (*_gt_pch_note_object)(*(undefined8 *)(current_function_decl + 0x10));
          if (((cVar2 != '\0') &&
              (((**(short **)&parm->field_0x10 == 6 || (**(short **)&parm->field_0x10 == 7)) ||
               (**(short **)&parm->field_0x10 == 8)))) &&
             ((*(ushort *)(*(long *)&parm->field_0x10 + 0x3c) & 0x3ff) <
              (*(ushort *)(_error_at + 0x3c) & 0x3ff))) {
            *(long *)&parm->field_0x50 = _error_at;
          }
          if (current_function_prototype_built_in == '\0') {
            pedwarn(*(undefined4 *)&parm->field_0x18,0x342,
                    "promoted argument %qD doesn%\'t match prototype",parm);
            pedwarn(current_function_prototype_locus,0x342,"prototype declaration");
          }
          else {
            warning_at(*(undefined4 *)&parm->field_0x18,0x342,
                       "promoted argument %qD doesn%\'t match built-in prototype",parm);
          }
        }
        else if (current_function_prototype_built_in == '\0') {
          error_at(*(undefined4 *)&parm->field_0x18,"argument %qD doesn%\'t match prototype",parm);
          error_at(current_function_prototype_locus,"prototype declaration");
        }
        else {
          warning_at(*(undefined4 *)&parm->field_0x18,0,
                     "argument %qD doesn%\'t match built-in prototype",parm);
        }
      }
      parm = *(tree *)&parm->field_0x8;
      type = *(tree *)&type->field_0x8;
    }
    if (current_function_prototype_built_in == '\0') {
      error_at(input_location,"number of arguments doesn%\'t match prototype");
      error_at(current_function_prototype_locus,"prototype declaration");
    }
    else {
      warning_at(*(undefined4 *)&fndecl->field_0x18,0,
                 "number of arguments doesn%\'t match built-in prototype");
    }
LAB_0011090c:
    *(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x88) = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void store_parm_decls_from(c_arg_info *arg_info)

{
  current_function_arg_info = arg_info;
  store_parm_decls();
  return;
}



void store_parm_decls(void)

{
  c_arg_info *arg_info_00;
  tree ptVar1;
  undefined8 uVar2;
  bool bVar3;
  uchar proto;
  tree t;
  tree fndecl;
  c_arg_info *arg_info;
  
  ptVar1 = current_function_decl;
  arg_info_00 = current_function_arg_info;
  current_function_arg_info = (c_arg_info *)0x0;
  bVar3 = arg_info_00->types != (tree)0x0;
  if (bVar3) {
    store_parm_decls_newstyle(current_function_decl,arg_info_00);
  }
  else {
    store_parm_decls_oldstyle(current_function_decl,arg_info_00);
  }
  next_is_function_body = '\x01';
  gen_aux_info_record(ptVar1,1,0,bVar3);
  allocate_struct_function(ptVar1,0);
  uVar2 = push_stmt_list();
  *(undefined8 *)&ptVar1->field_0x98 = uVar2;
  uVar2 = get_pending_sizes();
  for (t = (tree)nreverse(uVar2); t != (tree)0x0; t = *(tree *)&t->field_0x8) {
    add_stmt(*(tree *)&t->field_0x20);
  }
  *(byte *)(cfun + 0x8a) = *(byte *)(cfun + 0x8a) | 0x80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void finish_function(void)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  tree args;
  tree fndecl;
  tree type;
  
  psVar2 = current_function_decl;
  if ((*current_function_decl == 0x1d) &&
     (cVar3 = (*_gt_pch_note_object)(*(undefined8 *)(current_function_decl + 8)), cVar3 != '\0')) {
    for (args = *(tree *)(psVar2 + 0x50); args != (tree)0x0; args = *(tree *)&args->field_0x8) {
      psVar1 = *(short **)&args->field_0x10;
      if ((((*psVar1 == 6) || (*psVar1 == 7)) || (*psVar1 == 8)) &&
         ((psVar1[0x1e] & 0x3ffU) < (*(ushort *)(_error_at + 0x3c) & 0x3ff))) {
        *(long *)&args->field_0x50 = _error_at;
      }
    }
  }
  if ((*(long *)(psVar2 + 0x28) != 0) && (*(long *)(psVar2 + 0x28) != global_trees)) {
    *(short **)(*(long *)(psVar2 + 0x28) + 0x38) = psVar2;
  }
  if ((*(long *)(psVar2 + 0x54) != 0) && (*(long *)(psVar2 + 0x54) != global_trees)) {
    *(short **)(*(long *)(psVar2 + 0x54) + 0x28) = psVar2;
  }
  if ((((*(long *)(psVar2 + 0x10) == _set_underlying_type) && (flag_hosted != 0)) &&
      (*(long *)(*(long *)(*(long *)(psVar2 + 8) + 0x10) + 0x80) == _error_at)) &&
     (flag_isoc99 != 0)) {
    c_finish_return(1,_build_decl_stat,0);
  }
  uVar4 = pop_stmt_list(*(undefined8 *)(psVar2 + 0x4c));
  *(undefined8 *)(psVar2 + 0x4c) = uVar4;
  finish_fname_decls();
  if (((((warn_return_type != 0) && (**(short **)(*(long *)(psVar2 + 8) + 0x10) != 0x13)) &&
       ((current_function_returns_value == 0 &&
        ((current_function_returns_null == 0 && (current_function_returns_abnormally == 0)))))) &&
      ((*(byte *)(psVar2 + 1) & 8) == 0)) &&
     (((*(long *)(psVar2 + 0x10) != _set_underlying_type && ((*(byte *)(psVar2 + 0x1d) & 1) == 0))
      && ((*(byte *)((long)psVar2 + 3) & 8) == 0)))) {
    warning(0xac,"no return statement in function returning non-void");
    *(byte *)(psVar2 + 1) = *(byte *)(psVar2 + 1) | 0x80;
  }
  *(undefined4 *)(cfun + 0x74) = input_location;
  c_determine_visibility(psVar2);
  if (((*(byte *)((long)psVar2 + 0x3b) & 2) != 0) && ((*(byte *)(psVar2 + 0x6d) & 0x20) != 0)) {
    *(byte *)((long)psVar2 + 0xdb) = *(byte *)((long)psVar2 + 0xdb) | 4;
  }
  if (((*(long *)(psVar2 + 0x28) != 0) && (*(long *)(psVar2 + 0x28) != global_trees)) &&
     (undef_nested_function == '\0')) {
    lVar5 = decl_function_context(psVar2);
    if (lVar5 == 0) {
      invoke_plugin_callbacks(3,psVar2);
      c_genericize(psVar2);
      if (cgraph_global_info_ready != '\0') {
        cgraph_add_new_function(psVar2,0);
        return;
      }
      cgraph_finalize_function(psVar2,0);
    }
    else {
      cgraph_node(psVar2);
    }
  }
  lVar5 = decl_function_context(psVar2);
  if (lVar5 == 0) {
    undef_nested_function = '\0';
  }
  set_cfun(0);
  current_function_decl = (short *)0x0;
  return;
}



tree check_for_loop_decls(location_t loc)

{
  ushort uVar1;
  tree ptVar2;
  tree ptVar3;
  int n_decls;
  location_t decl_loc;
  c_binding *b;
  tree one_decl;
  tree id;
  tree decl;
  
  one_decl = (tree)0x0;
  n_decls = 0;
  if (flag_isoc99 == 0) {
    error_at(loc,"%<for%> loop initial declarations are only allowed in C99 mode");
    if (check_for_loop_decls::lexical_block_0::hint != '\0') {
      inform(loc,"use option -std=c99 or -std=gnu99 to compile your code");
      check_for_loop_decls::lexical_block_0::hint = '\0';
    }
    one_decl = (tree)0x0;
  }
  else {
    for (b = current_scope->bindings; b != (c_binding *)0x0; b = b->prev) {
      ptVar2 = b->id;
      ptVar3 = b->decl;
      if (ptVar2 != (tree)0x0) {
        uVar1 = *(ushort *)ptVar3;
        if (uVar1 == 0x20) {
          if ((ptVar3->field_0x3 & 4) == 0) {
            if ((ptVar3->field_0x3b & 2) != 0) {
              error_at(*(undefined4 *)&ptVar3->field_0x18,
                       "declaration of %<extern%> variable %qD in %<for%> loop initial declaration",
                       ptVar3);
            }
          }
          else {
            error_at(*(undefined4 *)&ptVar3->field_0x18,
                     "declaration of static variable %qD in %<for%> loop initial declaration",ptVar3
                    );
          }
        }
        else if (uVar1 < 0x21) {
          if (uVar1 == 0x11) {
            error_at(loc,"%<union %E%> declared in %<for%> loop initial declaration",ptVar2);
          }
          else {
            if (0x11 < uVar1) goto LAB_00111058;
            if (uVar1 == 6) {
              error_at(loc,"%<enum %E%> declared in %<for%> loop initial declaration",ptVar2);
            }
            else {
              if (uVar1 != 0x10) goto LAB_00111058;
              error_at(loc,"%<struct %E%> declared in %<for%> loop initial declaration",ptVar2);
            }
          }
        }
        else {
LAB_00111058:
          error_at(loc,"declaration of non-variable %qD in %<for%> loop initial declaration",ptVar3)
          ;
        }
        n_decls = n_decls + 1;
        one_decl = ptVar3;
      }
    }
    if (n_decls != 1) {
      one_decl = (tree)0x0;
    }
  }
  return one_decl;
}



void c_push_function_context(void)

{
  tree ptVar1;
  tree *pptVar2;
  language_function *p;
  
  pptVar2 = (tree *)ggc_alloc_stat(0x40);
  *(tree **)(cfun + 0x58) = pptVar2;
  ptVar1 = c_stmt_tree._8_8_;
  *pptVar2 = c_stmt_tree.x_cur_stmt_list;
  pptVar2[1] = ptVar1;
  pptVar2[2] = c_break_label;
  pptVar2[3] = c_cont_label;
  pptVar2[4] = c_switch_stack;
  pptVar2[5] = (tree)current_function_arg_info;
  *(int *)(pptVar2 + 6) = current_function_returns_value;
  *(int *)((long)pptVar2 + 0x34) = current_function_returns_null;
  *(int *)(pptVar2 + 7) = current_function_returns_abnormally;
  *(int *)((long)pptVar2 + 0x3c) = warn_about_return_type;
  push_function_context();
  return;
}



void c_pop_function_context(void)

{
  tree *pptVar1;
  language_function *p;
  
  pop_function_context();
  pptVar1 = *(tree **)(cfun + 0x58);
  *(undefined8 *)(cfun + 0x58) = 0;
  if ((*(long *)(current_function_decl + 0xb8) == 0) &&
     (*(long *)(current_function_decl + 0x98) == 0)) {
    *(undefined8 *)(current_function_decl + 0x50) = global_trees;
    *(undefined8 *)(current_function_decl + 0xa0) = 0;
  }
  current_function_arg_info = (c_arg_info *)pptVar1[5];
  c_stmt_tree.x_cur_stmt_list = *pptVar1;
  c_stmt_tree._8_8_ = pptVar1[1];
  warn_about_return_type = *(int *)((long)pptVar1 + 0x3c);
  c_break_label = pptVar1[2];
  c_cont_label = pptVar1[3];
  current_function_returns_value = *(int *)(pptVar1 + 6);
  current_function_returns_null = *(int *)((long)pptVar1 + 0x34);
  current_function_returns_abnormally = *(int *)(pptVar1 + 7);
  c_switch_stack = pptVar1[4];
  return;
}



stmt_tree current_stmt_tree(void)

{
  return &c_stmt_tree;
}



tree identifier_global_value(tree t)

{
  c_binding *b;
  
  b = *(c_binding **)&t->field_0x38;
  while( true ) {
    if (b == (c_binding *)0x0) {
      return (tree)0x0;
    }
    if (((*(uint *)&b->field_0x28 & 0xfffffff) == 1) || ((*(uint *)&b->field_0x28 & 0xfffffff) == 0)
       ) break;
    b = b->shadowed;
  }
  return b->decl;
}



void record_builtin_type(rid rid_index,char *name,tree type)

{
  tree x;
  tree id;
  tree decl;
  
  if (name == (char *)0x0) {
    id = *(tree *)(ridpointers + (long)rid_index * 8);
  }
  else {
    id = (tree)get_identifier(name);
  }
  x = (tree)build_decl_stat(0,0x23,id,type);
  pushdecl(x);
  if (*(long *)(debug_hooks + 0x90) != 0) {
    (**(code **)(debug_hooks + 0x90))(x,0);
  }
  return;
}



tree build_void_list_node(void)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = (tree)build_tree_list_stat(0,warn_traditional);
  return ptVar1;
}



c_parm * build_c_parm(c_declspecs *specs,tree attrs,c_declarator *declarator)

{
  char *pcVar1;
  char *pcVar2;
  c_parm *ret;
  
  parser_obstack.temp = 0x18;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x18) {
    _obstack_newchunk(&parser_obstack,0x18);
  }
  pcVar1 = parser_obstack.object_base;
  pcVar2 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar2 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar2 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  *(c_declspecs **)pcVar1 = specs;
  *(tree *)(pcVar1 + 8) = attrs;
  *(c_declarator **)(pcVar1 + 0x10) = declarator;
  return (c_parm *)pcVar1;
}



c_declarator * build_attrs_declarator(tree attrs,c_declarator *target)

{
  char *pcVar1;
  char *pcVar2;
  c_declarator *ret;
  
  parser_obstack.temp = 0x38;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x38) {
    _obstack_newchunk(&parser_obstack,0x38);
  }
  pcVar1 = parser_obstack.object_base;
  pcVar2 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar2 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar2 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  *(undefined4 *)pcVar1 = 4;
  *(c_declarator **)(pcVar1 + 8) = target;
  *(tree *)(pcVar1 + 0x18) = attrs;
  return (c_declarator *)pcVar1;
}



c_declarator * build_function_declarator(c_arg_info *args,c_declarator *target)

{
  char *pcVar1;
  char *pcVar2;
  c_declarator *ret;
  
  parser_obstack.temp = 0x38;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x38) {
    _obstack_newchunk(&parser_obstack,0x38);
  }
  pcVar1 = parser_obstack.object_base;
  pcVar2 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar2 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar2 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  *(undefined4 *)pcVar1 = 1;
  *(c_declarator **)(pcVar1 + 8) = target;
  *(c_arg_info **)(pcVar1 + 0x18) = args;
  return (c_declarator *)pcVar1;
}



c_declarator * build_id_declarator(tree ident)

{
  char *pcVar1;
  char *pcVar2;
  c_declarator *ret;
  
  parser_obstack.temp = 0x38;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x38) {
    _obstack_newchunk(&parser_obstack,0x38);
  }
  pcVar1 = parser_obstack.object_base;
  pcVar2 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar2 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar2 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  *(undefined4 *)pcVar1 = 0;
  *(undefined8 *)(pcVar1 + 8) = 0;
  *(tree *)(pcVar1 + 0x18) = ident;
  *(undefined4 *)(pcVar1 + 0x10) = input_location;
  return (c_declarator *)pcVar1;
}



c_declarator * make_pointer_declarator(c_declspecs *type_quals_attrs,c_declarator *target)

{
  tree attrs_00;
  char *pcVar1;
  char *pcVar2;
  int quals;
  c_declarator *itarget;
  c_declarator *ret;
  tree attrs;
  
  quals = 0;
  parser_obstack.temp = 0x38;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x38) {
    _obstack_newchunk(&parser_obstack,0x38);
  }
  pcVar1 = parser_obstack.object_base;
  pcVar2 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar2 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar2 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  itarget = target;
  if (type_quals_attrs != (c_declspecs *)0x0) {
    attrs_00 = type_quals_attrs->attrs;
    quals = quals_from_declspecs(type_quals_attrs);
    if (attrs_00 != (tree)0x0) {
      itarget = build_attrs_declarator(attrs_00,target);
    }
  }
  *(undefined4 *)pcVar1 = 3;
  *(c_declarator **)(pcVar1 + 8) = itarget;
  *(int *)(pcVar1 + 0x18) = quals;
  return (c_declarator *)pcVar1;
}



c_declspecs * build_null_declspecs(void)

{
  char *pcVar1;
  char *pcVar2;
  c_declspecs *ret;
  
  parser_obstack.temp = 0x38;
  if ((long)parser_obstack.chunk_limit - (long)parser_obstack.next_free < 0x38) {
    _obstack_newchunk(&parser_obstack,0x38);
  }
  pcVar1 = parser_obstack.object_base;
  pcVar2 = parser_obstack.next_free + parser_obstack.temp;
  if (pcVar2 == parser_obstack.object_base) {
    parser_obstack._80_1_ = parser_obstack._80_1_ | 2;
  }
  parser_obstack.temp = (long)parser_obstack.object_base;
  parser_obstack.next_free =
       (char *)((long)~parser_obstack.alignment_mask &
               (ulong)(pcVar2 + parser_obstack.alignment_mask));
  if (parser_obstack.chunk_limit < parser_obstack.next_free) {
    parser_obstack.next_free = parser_obstack.chunk_limit;
  }
  parser_obstack.object_base = parser_obstack.next_free;
  *(undefined8 *)pcVar1 = 0;
  *(undefined8 *)(pcVar1 + 8) = 0;
  *(undefined8 *)(pcVar1 + 0x10) = 0;
  *(undefined8 *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  *(undefined4 *)(pcVar1 + 0x24) = 0;
  pcVar1[0x28] = pcVar1[0x28] | 1;
  pcVar1[0x28] = pcVar1[0x28] & 0xfd;
  pcVar1[0x28] = pcVar1[0x28] & 0xfb;
  pcVar1[0x28] = pcVar1[0x28] & 0xf7;
  pcVar1[0x28] = pcVar1[0x28] & 0xef;
  pcVar1[0x28] = pcVar1[0x28] & 0xdf;
  pcVar1[0x28] = pcVar1[0x28] & 0xbf;
  pcVar1[0x28] = pcVar1[0x28] & 0x7f;
  *(undefined4 *)(pcVar1 + 0x2c) = 0;
  pcVar1[0x30] = pcVar1[0x30] & 0xfe;
  pcVar1[0x30] = pcVar1[0x30] & 0xfd;
  pcVar1[0x30] = pcVar1[0x30] & 0xfb;
  pcVar1[0x30] = pcVar1[0x30] & 0xf7;
  pcVar1[0x30] = pcVar1[0x30] & 0xef;
  pcVar1[0x30] = pcVar1[0x30] & 0xdf;
  pcVar1[0x30] = pcVar1[0x30] & 0xbf;
  pcVar1[0x30] = pcVar1[0x30] & 0x7f;
  pcVar1[0x31] = pcVar1[0x31] & 0xfe;
  pcVar1[0x31] = pcVar1[0x31] & 0xfd;
  pcVar1[0x31] = pcVar1[0x31] & 0xfb;
  pcVar1[0x31] = pcVar1[0x31] & 0xf7;
  pcVar1[0x32] = '\0';
  return (c_declspecs *)pcVar1;
}



c_declspecs * declspecs_add_addrspace(c_declspecs *specs,addr_space_t as)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  specs->field_0x28 = specs->field_0x28 | 8;
  specs->field_0x28 = specs->field_0x28 | 2;
  if ((specs->address_space == '\0') || (as == specs->address_space)) {
    specs->address_space = as;
  }
  else {
    uVar1 = c_addr_space_name(specs->address_space);
    uVar2 = c_addr_space_name(as);
    error("incompatible address space qualifiers %qs and %qs",uVar2,uVar1);
  }
  return specs;
}



c_declspecs * declspecs_add_qual(c_declspecs *specs,tree qual)

{
  byte bVar1;
  uchar dupe;
  rid i;
  
  dupe = '\0';
  specs->field_0x28 = specs->field_0x28 | 8;
  specs->field_0x28 = specs->field_0x28 | 2;
  if ((*(short *)qual != 1) || ((qual->field_0x4 & 2) == 0)) {
    fancy_abort("c-decl.c",0x2114,&DAT_0011c9fd);
  }
  bVar1 = qual->field_0x29;
  if (bVar1 == 0xc) {
    dupe = (byte)specs->field_0x31 >> 2 & 1;
    specs->field_0x31 = specs->field_0x31 | 4;
    goto LAB_00111dd1;
  }
  if (bVar1 < 0xd) {
    if (bVar1 == 3) {
      dupe = specs->field_0x31 & 1;
      specs->field_0x31 = specs->field_0x31 | 1;
      goto LAB_00111dd1;
    }
    if (bVar1 == 9) {
      dupe = (byte)specs->field_0x31 >> 1 & 1;
      specs->field_0x31 = specs->field_0x31 | 2;
      goto LAB_00111dd1;
    }
  }
  fancy_abort("c-decl.c",0x2126,&DAT_0011c9fd);
LAB_00111dd1:
  if ((dupe != '\0') && (flag_isoc99 == 0)) {
    pedwarn(input_location,0x342,"duplicate %qE",qual);
  }
  return specs;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

c_declspecs * declspecs_add_type(location_t loc,c_declspecs *specs,c_typespec spec)

{
  byte bVar1;
  tree name;
  char cVar2;
  tree ptVar3;
  long in_FS_OFFSET;
  uchar dupe;
  rid i;
  char *str;
  char *str_1;
  tree type;
  tree t;
  undefined local_28 [16];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  name = SUB328(spec >> 0x40,0);
  specs->field_0x28 = specs->field_0x28 | 8;
  specs->field_0x28 = specs->field_0x28 | 2;
  specs->field_0x28 = specs->field_0x28 | 4;
  if ((name->field_0x3 & 0x40) != 0) {
    specs->field_0x28 = specs->field_0x28 | 0x80;
  }
  if (((*(short *)name == 1) && ((name->field_0x4 & 2) != 0)) && (name->field_0x29 != 'A')) {
    bVar1 = name->field_0x29;
    if (specs->type != (tree)0x0) {
      error_at(loc,"two or more data types in declaration specifiers");
      goto LAB_00113324;
    }
    if (bVar1 < 0x1b) {
      dupe = '\0';
      switch(bVar1) {
      default:
        fancy_abort("c-decl.c",0x224e,&DAT_0011c9fd);
        break;
      case 1:
        dupe = (byte)specs->field_0x30 >> 4 & 1;
        if ((specs->field_0x30 & 8) == 0) {
          if (specs->typespec_word == cts_void) {
            error_at(loc,"both %<unsigned%> and %<void%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_bool) {
            error_at(loc,"both %<unsigned%> and %<_Bool%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_float) {
            error_at(loc,"both %<unsigned%> and %<float%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_double) {
            error_at(loc,"both %<unsigned%> and %<double%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat32) {
            error_at(loc,"both %<unsigned%> and %<_Decimal32%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat64) {
            error_at(loc,"both %<unsigned%> and %<_Decimal64%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat128) {
            error_at(loc,"both %<unsigned%> and %<_Decimal128%> in declaration specifiers");
          }
          else {
            specs->field_0x30 = specs->field_0x30 | 0x10;
          }
        }
        else {
          error_at(loc,"both %<signed%> and %<unsigned%> in declaration specifiers");
        }
        break;
      case 2:
        if ((specs->field_0x30 & 2) == 0) {
          if ((specs->field_0x30 & 1) == 0) {
            if ((specs->field_0x30 & 4) == 0) {
              if (specs->typespec_word == cts_void) {
                error_at(loc,"both %<long%> and %<void%> in declaration specifiers");
              }
              else if (specs->typespec_word == cts_bool) {
                error_at(loc,"both %<long%> and %<_Bool%> in declaration specifiers");
              }
              else if (specs->typespec_word == cts_char) {
                error_at(loc,"both %<long%> and %<char%> in declaration specifiers");
              }
              else if (specs->typespec_word == cts_float) {
                error_at(loc,"both %<long%> and %<float%> in declaration specifiers");
              }
              else if (specs->typespec_word == cts_dfloat32) {
                error_at(loc,"both %<long%> and %<_Decimal32%> in declaration specifiers");
              }
              else if (specs->typespec_word == cts_dfloat64) {
                error_at(loc,"both %<long%> and %<_Decimal64%> in declaration specifiers");
              }
              else if (specs->typespec_word == cts_dfloat128) {
                error_at(loc,"both %<long%> and %<_Decimal128%> in declaration specifiers");
              }
              else {
                specs->field_0x30 = specs->field_0x30 | 1;
              }
            }
            else {
              error_at(loc,"both %<long%> and %<short%> in declaration specifiers");
            }
          }
          else if (specs->typespec_word == cts_double) {
            error_at(loc,"both %<long long%> and %<double%> in declaration specifiers");
          }
          else {
            pedwarn_c90(loc,0x7d,"ISO C90 does not support %<long long%>");
            specs->field_0x30 = specs->field_0x30 | 2;
          }
        }
        else {
          error_at(loc,"%<long long long%> is too long for GCC");
        }
        break;
      case 7:
        dupe = (byte)specs->field_0x30 >> 2 & 1;
        if ((specs->field_0x30 & 1) == 0) {
          if (specs->typespec_word == cts_void) {
            error_at(loc,"both %<short%> and %<void%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_bool) {
            error_at(loc,"both %<short%> and %<_Bool%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_char) {
            error_at(loc,"both %<short%> and %<char%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_float) {
            error_at(loc,"both %<short%> and %<float%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_double) {
            error_at(loc,"both %<short%> and %<double%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat32) {
            error_at(loc,"both %<short%> and %<_Decimal32%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat64) {
            error_at(loc,"both %<short%> and %<_Decimal64%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat128) {
            error_at(loc,"both %<short%> and %<_Decimal128%> in declaration specifiers");
          }
          else {
            specs->field_0x30 = specs->field_0x30 | 4;
          }
        }
        else {
          error_at(loc,"both %<long%> and %<short%> in declaration specifiers");
        }
        break;
      case 10:
        dupe = (byte)specs->field_0x30 >> 3 & 1;
        if ((specs->field_0x30 & 0x10) == 0) {
          if (specs->typespec_word == cts_void) {
            error_at(loc,"both %<signed%> and %<void%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_bool) {
            error_at(loc,"both %<signed%> and %<_Bool%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_float) {
            error_at(loc,"both %<signed%> and %<float%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_double) {
            error_at(loc,"both %<signed%> and %<double%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat32) {
            error_at(loc,"both %<signed%> and %<_Decimal32%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat64) {
            error_at(loc,"both %<signed%> and %<_Decimal64%> in declaration specifiers");
          }
          else if (specs->typespec_word == cts_dfloat128) {
            error_at(loc,"both %<signed%> and %<_Decimal128%> in declaration specifiers");
          }
          else {
            specs->field_0x30 = specs->field_0x30 | 8;
          }
        }
        else {
          error_at(loc,"both %<signed%> and %<unsigned%> in declaration specifiers");
        }
        break;
      case 0xd:
        dupe = (byte)specs->field_0x30 >> 5 & 1;
        if ((flag_isoc99 == 0) && (expand_location(local_28,input_location), local_18 == '\0')) {
          pedwarn(loc,0x342,"ISO C90 does not support complex types");
        }
        if (specs->typespec_word == cts_void) {
          error_at(loc,"both %<complex%> and %<void%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_bool) {
          error_at(loc,"both %<complex%> and %<_Bool%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_dfloat32) {
          error_at(loc,"both %<complex%> and %<_Decimal32%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_dfloat64) {
          error_at(loc,"both %<complex%> and %<_Decimal64%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_dfloat128) {
          error_at(loc,"both %<complex%> and %<_Decimal128%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_fract) {
          error_at(loc,"both %<complex%> and %<_Fract%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_accum) {
          error_at(loc,"both %<complex%> and %<_Accum%> in declaration specifiers");
        }
        else if ((specs->field_0x31 & 8) == 0) {
          specs->field_0x30 = specs->field_0x30 | 0x20;
        }
        else {
          error_at(loc,"both %<complex%> and %<_Sat%> in declaration specifiers");
        }
        break;
      case 0xf:
        dupe = (byte)specs->field_0x31 >> 3 & 1;
        pedwarn(loc,0x342,"ISO C does not support saturating types");
        if (specs->typespec_word == cts_void) {
          error_at(loc,"both %<_Sat%> and %<void%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_bool) {
          error_at(loc,"both %<_Sat%> and %<_Bool%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_char) {
          error_at(loc,"both %<_Sat%> and %<char%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_int) {
          error_at(loc,"both %<_Sat%> and %<int%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_float) {
          error_at(loc,"both %<_Sat%> and %<float%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_double) {
          error_at(loc,"both %<_Sat%> and %<double%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_dfloat32) {
          error_at(loc,"both %<_Sat%> and %<_Decimal32%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_dfloat64) {
          error_at(loc,"both %<_Sat%> and %<_Decimal64%> in declaration specifiers");
        }
        else if (specs->typespec_word == cts_dfloat128) {
          error_at(loc,"both %<_Sat%> and %<_Decimal128%> in declaration specifiers");
        }
        else if ((specs->field_0x30 & 0x20) == 0) {
          specs->field_0x31 = specs->field_0x31 | 8;
        }
        else {
          error_at(loc,"both %<_Sat%> and %<complex%> in declaration specifiers");
        }
      }
      if (dupe != '\0') {
        error_at(loc,"duplicate %qE",name);
      }
      goto LAB_00113324;
    }
    if (specs->typespec_word != cts_none) {
      error_at(loc,"two or more data types in declaration specifiers");
      goto LAB_00113324;
    }
    switch(bVar1) {
    case 0x1c:
      if ((specs->field_0x31 & 8) == 0) {
        specs->typespec_word = cts_int;
      }
      else {
        error_at(loc,"both %<_Sat%> and %<int%> in declaration specifiers");
      }
      break;
    case 0x1d:
      if ((specs->field_0x30 & 1) == 0) {
        if ((specs->field_0x30 & 4) == 0) {
          if ((specs->field_0x31 & 8) == 0) {
            specs->typespec_word = cts_char;
          }
          else {
            error_at(loc,"both %<_Sat%> and %<char%> in declaration specifiers");
          }
        }
        else {
          error_at(loc,"both %<short%> and %<char%> in declaration specifiers");
        }
      }
      else {
        error_at(loc,"both %<long%> and %<char%> in declaration specifiers");
      }
      break;
    case 0x1e:
      if ((specs->field_0x30 & 1) == 0) {
        if ((specs->field_0x30 & 4) == 0) {
          if ((specs->field_0x30 & 8) == 0) {
            if ((specs->field_0x30 & 0x10) == 0) {
              if ((specs->field_0x31 & 8) == 0) {
                specs->typespec_word = cts_float;
              }
              else {
                error_at(loc,"both %<_Sat%> and %<float%> in declaration specifiers");
              }
            }
            else {
              error_at(loc,"both %<unsigned%> and %<float%> in declaration specifiers");
            }
          }
          else {
            error_at(loc,"both %<signed%> and %<float%> in declaration specifiers");
          }
        }
        else {
          error_at(loc,"both %<short%> and %<float%> in declaration specifiers");
        }
      }
      else {
        error_at(loc,"both %<long%> and %<float%> in declaration specifiers");
      }
      break;
    case 0x1f:
      if ((specs->field_0x30 & 2) == 0) {
        if ((specs->field_0x30 & 4) == 0) {
          if ((specs->field_0x30 & 8) == 0) {
            if ((specs->field_0x30 & 0x10) == 0) {
              if ((specs->field_0x31 & 8) == 0) {
                specs->typespec_word = cts_double;
              }
              else {
                error_at(loc,"both %<_Sat%> and %<double%> in declaration specifiers");
              }
            }
            else {
              error_at(loc,"both %<unsigned%> and %<double%> in declaration specifiers");
            }
          }
          else {
            error_at(loc,"both %<signed%> and %<double%> in declaration specifiers");
          }
        }
        else {
          error_at(loc,"both %<short%> and %<double%> in declaration specifiers");
        }
      }
      else {
        error_at(loc,"both %<long long%> and %<double%> in declaration specifiers");
      }
      break;
    case 0x20:
      if ((specs->field_0x30 & 1) == 0) {
        if ((specs->field_0x30 & 4) == 0) {
          if ((specs->field_0x30 & 8) == 0) {
            if ((specs->field_0x30 & 0x10) == 0) {
              if ((specs->field_0x30 & 0x20) == 0) {
                if ((specs->field_0x31 & 8) == 0) {
                  specs->typespec_word = cts_void;
                }
                else {
                  error_at(loc,"both %<_Sat%> and %<void%> in declaration specifiers");
                }
              }
              else {
                error_at(loc,"both %<complex%> and %<void%> in declaration specifiers");
              }
            }
            else {
              error_at(loc,"both %<unsigned%> and %<void%> in declaration specifiers");
            }
          }
          else {
            error_at(loc,"both %<signed%> and %<void%> in declaration specifiers");
          }
        }
        else {
          error_at(loc,"both %<short%> and %<void%> in declaration specifiers");
        }
      }
      else {
        error_at(loc,"both %<long%> and %<void%> in declaration specifiers");
      }
      break;
    default:
      goto LAB_0011305f;
    case 0x3c:
    case 0x3d:
    case 0x3e:
      if (bVar1 == 0x3c) {
        str = "_Decimal32";
      }
      else if (bVar1 == 0x3d) {
        str = "_Decimal64";
      }
      else {
        str = "_Decimal128";
      }
      if ((specs->field_0x30 & 2) != 0) {
        error_at(loc,"both %<long long%> and %<%s%> in declaration specifiers",str);
      }
      if ((specs->field_0x30 & 1) == 0) {
        if ((specs->field_0x30 & 4) == 0) {
          if ((specs->field_0x30 & 8) == 0) {
            if ((specs->field_0x30 & 0x10) == 0) {
              if ((specs->field_0x30 & 0x20) == 0) {
                if ((specs->field_0x31 & 8) == 0) {
                  if (bVar1 == 0x3c) {
                    specs->typespec_word = cts_dfloat32;
                  }
                  else if (bVar1 == 0x3d) {
                    specs->typespec_word = cts_dfloat64;
                  }
                  else {
                    specs->typespec_word = cts_dfloat128;
                  }
                }
                else {
                  error_at(loc,"both %<_Sat%> and %<%s%> in declaration specifiers",str);
                }
              }
              else {
                error_at(loc,"both %<complex%> and %<%s%> in declaration specifiers",str);
              }
            }
            else {
              error_at(loc,"both %<unsigned%> and %<%s%> in declaration specifiers",str);
            }
          }
          else {
            error_at(loc,"both %<signed%> and %<%s%> in declaration specifiers",str);
          }
        }
        else {
          error_at(loc,"both %<short%> and %<%s%> in declaration specifiers",str);
        }
      }
      else {
        error_at(loc,"both %<long%> and %<%s%> in declaration specifiers",str);
      }
      cVar2 = (*_htab_find_slot)();
      if (cVar2 == '\0') {
        error_at(loc,"decimal floating point not supported for this target");
      }
      pedwarn(loc,0x342,"ISO C does not support decimal floating point");
      break;
    case 0x3f:
    case 0x40:
      if (bVar1 == 0x3f) {
        str_1 = "_Fract";
      }
      else {
        str_1 = "_Accum";
      }
      if ((specs->field_0x30 & 0x20) == 0) {
        if (bVar1 == 0x3f) {
          specs->typespec_word = cts_fract;
        }
        else {
          specs->typespec_word = cts_accum;
        }
      }
      else {
        error_at(loc,"both %<complex%> and %<%s%> in declaration specifiers",str_1);
      }
      cVar2 = (*_htab_delete)();
      if (cVar2 == '\0') {
        error_at(loc,"fixed-point types not supported for this target");
      }
      pedwarn(loc,0x342,"ISO C does not support fixed-point types");
      break;
    case 0x45:
      if ((specs->field_0x30 & 1) == 0) {
        if ((specs->field_0x30 & 4) == 0) {
          if ((specs->field_0x30 & 8) == 0) {
            if ((specs->field_0x30 & 0x10) == 0) {
              if ((specs->field_0x30 & 0x20) == 0) {
                if ((specs->field_0x31 & 8) == 0) {
                  specs->typespec_word = cts_bool;
                }
                else {
                  error_at(loc,"both %<_Sat%> and %<_Bool%> in declaration specifiers");
                }
              }
              else {
                error_at(loc,"both %<complex%> and %<_Bool%> in declaration specifiers");
              }
            }
            else {
              error_at(loc,"both %<unsigned%> and %<_Bool%> in declaration specifiers");
            }
          }
          else {
            error_at(loc,"both %<signed%> and %<_Bool%> in declaration specifiers");
          }
        }
        else {
          error_at(loc,"both %<short%> and %<_Bool%> in declaration specifiers");
        }
      }
      else {
        error_at(loc,"both %<long%> and %<_Bool%> in declaration specifiers");
      }
    }
  }
  else {
LAB_0011305f:
    if (((((specs->type == (tree)0x0) && (specs->typespec_word == cts_none)) &&
         (((specs->field_0x30 & 1) == 0 &&
          (((specs->field_0x30 & 4) == 0 && ((specs->field_0x30 & 8) == 0)))))) &&
        ((specs->field_0x30 & 0x10) == 0)) && ((specs->field_0x30 & 0x20) == 0)) {
      if (*(short *)name == 0x23) {
        if (*(long *)&name->field_0x10 != global_trees) {
          specs->type = *(tree *)&name->field_0x10;
          specs->decl_attr = *(tree *)&name->field_0x58;
          specs->field_0x28 = specs->field_0x28 | 0x10;
          specs->field_0x28 = specs->field_0x28 & 0xbf | (byte)(((byte)name->field_0x3a & 1) << 6);
          if ((warn_cxx_compat != 0) &&
             ((*(byte *)(*(long *)(*(long *)&name->field_0x20 + 0x38) + 0x2b) & 0x80) != 0)) {
            warning_at(loc,0x31,"C++ lookup of %qD would return a field, not a type",name);
          }
          if ((warn_cxx_compat != 0) && (struct_parse_info != (c_struct_parse_info *)0x0)) {
            VEC_tree_heap_safe_push(&struct_parse_info->typedefs_seen,name);
          }
        }
      }
      else if (*(short *)name == 1) {
        ptVar3 = lookup_name(name);
        if ((ptVar3 == (tree)0x0) || (*(short *)ptVar3 != 0x23)) {
          error_at(loc,"%qE fails to be a typedef or built in type",name);
        }
        else if (*(long *)&ptVar3->field_0x10 != global_trees) {
          specs->type = *(tree *)&ptVar3->field_0x10;
        }
      }
      else if (*(short *)name != 0) {
        if ((spec.kind == ctsk_tagdef) || (spec.kind == ctsk_tagfirstref)) {
          specs->field_0x28 = specs->field_0x28 | 0x20;
        }
        if (spec.kind == ctsk_typeof) {
          specs->field_0x28 = specs->field_0x28 | 0x10;
          ptVar3 = SUB328(spec >> 0x80,0);
          if (ptVar3 != (tree)0x0) {
            if (specs->expr == (tree)0x0) {
              specs->expr = ptVar3;
            }
            else {
              ptVar3 = (tree)build2_stat(0x34,*(undefined8 *)&ptVar3->field_0x10,specs->expr);
              specs->expr = ptVar3;
            }
            specs->field_0x28 =
                 specs->field_0x28 & 0xfe | spec.expr_const_operands & specs->field_0x28 & 1;
          }
        }
        specs->type = name;
      }
    }
    else {
      error_at(loc,"two or more data types in declaration specifiers");
    }
  }
LAB_00113324:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return specs;
}



c_declspecs * declspecs_add_scspec(c_declspecs *specs,tree scspec)

{
  undefined uVar1;
  uchar dupe;
  c_storage_class n;
  rid i;
  
  n = csc_none;
  dupe = '\0';
  specs->field_0x28 = specs->field_0x28 | 2;
  if ((*(short *)scspec != 1) || ((scspec->field_0x4 & 2) == 0)) {
    fancy_abort("c-decl.c",0x238a,&DAT_0011c9fd);
  }
  uVar1 = scspec->field_0x29;
  if ((specs->field_0x28 & 8) != 0) {
    warning(0x93,"%qE is not at beginning of declaration",scspec);
  }
  switch(uVar1) {
  case 0:
    n = csc_static;
    if ((specs->field_0x30 & 0x80) != 0) {
      error("%<__thread%> before %<static%>");
    }
    break;
  default:
    fancy_abort("c-decl.c",0x23bb,&DAT_0011c9fd);
    break;
  case 4:
    n = csc_extern;
    if ((specs->field_0x30 & 0x80) != 0) {
      error("%<__thread%> before %<extern%>");
    }
    break;
  case 5:
    n = csc_register;
    break;
  case 6:
    n = csc_typedef;
    break;
  case 8:
    dupe = '\0';
    specs->field_0x30 = specs->field_0x30 | 0x40;
    break;
  case 0xb:
    n = csc_auto;
    break;
  case 0xe:
    dupe = (byte)specs->field_0x30 >> 7;
    if (specs->storage_class == csc_auto) {
      error("%<__thread%> used with %<auto%>");
    }
    else if (specs->storage_class == csc_register) {
      error("%<__thread%> used with %<register%>");
    }
    else if (specs->storage_class == csc_typedef) {
      error("%<__thread%> used with %<typedef%>");
    }
    else {
      specs->field_0x30 = specs->field_0x30 | 0x80;
    }
  }
  if ((n != csc_none) && (n == specs->storage_class)) {
    dupe = '\x01';
  }
  if (dupe != '\0') {
    error("duplicate %qE",scspec);
  }
  if (n != csc_none) {
    if ((specs->storage_class == csc_none) || (n == specs->storage_class)) {
      specs->storage_class = n;
      if ((n != csc_extern) && ((n != csc_static && ((specs->field_0x30 & 0x80) != 0)))) {
        error("%<__thread%> used with %qE",scspec);
        specs->field_0x30 = specs->field_0x30 & 0x7f;
      }
    }
    else {
      error("multiple storage classes in declaration specifiers");
    }
  }
  return specs;
}



c_declspecs * declspecs_add_attrs(c_declspecs *specs,tree attrs)

{
  tree ptVar1;
  
  ptVar1 = (tree)chainon(attrs,specs->attrs);
  specs->attrs = ptVar1;
  specs->field_0x28 = specs->field_0x28 | 2;
  return specs;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

c_declspecs * finish_declspecs(c_declspecs *specs)

{
  char cVar1;
  tree ptVar2;
  
  if (specs->type == (tree)0x0) {
    if (specs->typespec_word == cts_none) {
      if ((specs->field_0x31 & 8) == 0) {
        if ((((specs->field_0x30 & 1) == 0) && ((specs->field_0x30 & 4) == 0)) &&
           (((specs->field_0x30 & 8) == 0 && ((specs->field_0x30 & 0x10) == 0)))) {
          if ((specs->field_0x30 & 0x20) == 0) {
            specs->typespec_word = cts_int;
            specs->default_int_p = 1;
          }
          else {
            specs->typespec_word = cts_double;
            pedwarn(input_location,0x342,
                    "ISO C does not support plain %<complex%> meaning %<double complex%>");
          }
        }
        else {
          specs->typespec_word = cts_int;
        }
      }
      else {
        error("%<_Sat%> is used without %<_Fract%> or %<_Accum%>");
        cVar1 = (*_htab_delete)();
        if (cVar1 == '\0') {
          error("fixed-point types not supported for this target");
        }
        specs->typespec_word = cts_fract;
      }
    }
    specs->field_0x28 = specs->field_0x28 & 0xbf | (byte)(((byte)specs->field_0x30 >> 3 & 1) << 6);
    switch(specs->typespec_word) {
    default:
      fancy_abort("c-decl.c",0x24ce,&DAT_0011c9fd);
      break;
    case cts_void:
      if ((((specs->field_0x30 & 1) != 0) || ((specs->field_0x30 & 4) != 0)) ||
         (((specs->field_0x30 & 8) != 0 ||
          (((specs->field_0x30 & 0x10) != 0 || ((specs->field_0x30 & 0x20) != 0)))))) {
        fancy_abort("c-decl.c",0x241f,&DAT_0011c9fd);
      }
      specs->type = warn_traditional;
      break;
    case cts_bool:
      if (((((specs->field_0x30 & 1) != 0) || ((specs->field_0x30 & 4) != 0)) ||
          ((specs->field_0x30 & 8) != 0)) ||
         (((specs->field_0x30 & 0x10) != 0 || ((specs->field_0x30 & 0x20) != 0)))) {
        fancy_abort("c-decl.c",0x2425,&DAT_0011c9fd);
      }
      specs->type = _gimple_body;
      break;
    case cts_char:
      if (((specs->field_0x30 & 1) != 0) || ((specs->field_0x30 & 4) != 0)) {
        fancy_abort("c-decl.c",0x242b,&DAT_0011c9fd);
      }
      if (((specs->field_0x30 & 8) != 0) && ((specs->field_0x30 & 0x10) != 0)) {
        fancy_abort("c-decl.c",0x242c,&DAT_0011c9fd);
      }
      if ((specs->field_0x30 & 8) == 0) {
        if ((specs->field_0x30 & 0x10) == 0) {
          specs->type = integer_types;
        }
        else {
          specs->type = _lookup_attribute;
        }
      }
      else {
        specs->type = _c_addr_space_name;
      }
      if ((specs->field_0x30 & 0x20) != 0) {
        pedwarn(input_location,0x342,"ISO C does not support complex integer types");
        ptVar2 = (tree)build_complex_type(specs->type);
        specs->type = ptVar2;
      }
      break;
    case cts_int:
      if (((specs->field_0x30 & 1) != 0) && ((specs->field_0x30 & 4) != 0)) {
        fancy_abort("c-decl.c",0x243b,&DAT_0011c9fd);
      }
      if (((specs->field_0x30 & 8) != 0) && ((specs->field_0x30 & 0x10) != 0)) {
        fancy_abort("c-decl.c",0x243c,&DAT_0011c9fd);
      }
      if ((specs->field_0x30 & 2) == 0) {
        if ((specs->field_0x30 & 1) == 0) {
          if ((specs->field_0x30 & 4) == 0) {
            ptVar2 = _error_at;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = tree_contains_struct;
            }
            specs->type = ptVar2;
          }
          else {
            ptVar2 = _same_translation_unit_p;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = warn_traditional;
            }
            specs->type = ptVar2;
          }
        }
        else {
          ptVar2 = warn_redundant_decls;
          if ((specs->field_0x30 & 0x10) != 0) {
            ptVar2 = targetm;
          }
          specs->type = ptVar2;
        }
      }
      else {
        ptVar2 = _composite_type;
        if ((specs->field_0x30 & 0x10) != 0) {
          ptVar2 = _layout_type;
        }
        specs->type = ptVar2;
      }
      if ((specs->field_0x30 & 0x20) != 0) {
        pedwarn(input_location,0x342,"ISO C does not support complex integer types");
        ptVar2 = (tree)build_complex_type(specs->type);
        specs->type = ptVar2;
      }
      break;
    case cts_float:
      if (((((specs->field_0x30 & 1) != 0) || ((specs->field_0x30 & 4) != 0)) ||
          ((specs->field_0x30 & 8) != 0)) || ((specs->field_0x30 & 0x10) != 0)) {
        fancy_abort("c-decl.c",0x2455,&DAT_0011c9fd);
      }
      ptVar2 = _build_type_attribute_variant;
      if ((specs->field_0x30 & 0x20) != 0) {
        ptVar2 = _inform;
      }
      specs->type = ptVar2;
      break;
    case cts_double:
      if ((((specs->field_0x30 & 2) != 0) || ((specs->field_0x30 & 4) != 0)) ||
         (((specs->field_0x30 & 8) != 0 || ((specs->field_0x30 & 0x10) != 0)))) {
        fancy_abort("c-decl.c",0x245c,&DAT_0011c9fd);
      }
      if ((specs->field_0x30 & 1) == 0) {
        ptVar2 = _comptypes;
        if ((specs->field_0x30 & 0x20) != 0) {
          ptVar2 = _vector_type_mode;
        }
        specs->type = ptVar2;
      }
      else {
        ptVar2 = _c_type_promotes_to;
        if ((specs->field_0x30 & 0x20) != 0) {
          ptVar2 = _build_function_type;
        }
        specs->type = ptVar2;
      }
      break;
    case cts_dfloat32:
    case cts_dfloat64:
    case cts_dfloat128:
      if (((((specs->field_0x30 & 1) != 0) || ((specs->field_0x30 & 2) != 0)) ||
          ((specs->field_0x30 & 4) != 0)) ||
         ((((specs->field_0x30 & 8) != 0 || ((specs->field_0x30 & 0x10) != 0)) ||
          ((specs->field_0x30 & 0x20) != 0)))) {
        fancy_abort("c-decl.c",0x246e,&DAT_0011c9fd);
      }
      if (specs->typespec_word == cts_dfloat32) {
        specs->type = _copy_list;
      }
      else if (specs->typespec_word == cts_dfloat64) {
        specs->type = _memcpy;
      }
      else {
        specs->type = _tree_code_size;
      }
      break;
    case cts_fract:
      if ((specs->field_0x30 & 0x20) != 0) {
        fancy_abort("c-decl.c",0x2478,&DAT_0011c9fd);
      }
      cVar1 = (*_htab_delete)();
      if (cVar1 == '\0') {
        specs->type = _error_at;
      }
      else if ((specs->field_0x31 & 8) == 0) {
        if ((specs->field_0x30 & 2) == 0) {
          if ((specs->field_0x30 & 1) == 0) {
            if ((specs->field_0x30 & 4) == 0) {
              ptVar2 = _make_tree_vector;
              if ((specs->field_0x30 & 0x10) != 0) {
                ptVar2 = flag_signed_char;
              }
              specs->type = ptVar2;
            }
            else {
              ptVar2 = _decl_attributes;
              if ((specs->field_0x30 & 0x10) != 0) {
                ptVar2 = __obstack_begin;
              }
              specs->type = ptVar2;
            }
          }
          else {
            ptVar2 = _xmalloc;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = _build_common_tree_nodes;
            }
            specs->type = ptVar2;
          }
        }
        else {
          ptVar2 = _c_parse_init;
          if ((specs->field_0x30 & 0x10) != 0) {
            ptVar2 = _c_common_nodes_and_builtins;
          }
          specs->type = ptVar2;
        }
      }
      else if ((specs->field_0x30 & 2) == 0) {
        if ((specs->field_0x30 & 1) == 0) {
          if ((specs->field_0x30 & 4) == 0) {
            ptVar2 = warn_implicit_function_declaration;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = _set_user_assembler_name;
            }
            specs->type = ptVar2;
          }
          else {
            ptVar2 = _tree_cons_stat;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = _maybe_apply_renaming_pragma;
            }
            specs->type = ptVar2;
          }
        }
        else {
          ptVar2 = _flag_isoc99;
          if ((specs->field_0x30 & 0x10) != 0) {
            ptVar2 = _rest_of_decl_compilation;
          }
          specs->type = ptVar2;
        }
      }
      else {
        ptVar2 = c_global_trees;
        if ((specs->field_0x30 & 0x10) != 0) {
          ptVar2 = _gen_aux_info_record;
        }
        specs->type = ptVar2;
      }
      break;
    case cts_accum:
      if ((specs->field_0x30 & 0x20) != 0) {
        fancy_abort("c-decl.c",0x24a3,&DAT_0011c9fd);
      }
      cVar1 = (*_htab_delete)();
      if (cVar1 == '\0') {
        specs->type = _error_at;
      }
      else if ((specs->field_0x31 & 8) == 0) {
        if ((specs->field_0x30 & 2) == 0) {
          if ((specs->field_0x30 & 1) == 0) {
            if ((specs->field_0x30 & 4) == 0) {
              ptVar2 = _build_string;
              if ((specs->field_0x30 & 0x10) != 0) {
                ptVar2 = _size_binop_loc;
              }
              specs->type = ptVar2;
            }
            else {
              ptVar2 = _c_build_qualified_type;
              if ((specs->field_0x30 & 0x10) != 0) {
                ptVar2 = __obstack_newchunk;
              }
              specs->type = ptVar2;
            }
          }
          else {
            ptVar2 = global_dc;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = flag_no_common;
            }
            specs->type = ptVar2;
          }
        }
        else {
          ptVar2 = _sch_istable;
          if ((specs->field_0x30 & 0x10) != 0) {
            ptVar2 = _record_types_used_by_current_var_decl;
          }
          specs->type = ptVar2;
        }
      }
      else if ((specs->field_0x30 & 2) == 0) {
        if ((specs->field_0x30 & 1) == 0) {
          if ((specs->field_0x30 & 4) == 0) {
            ptVar2 = pedantic_lvalues;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = _size_int_kind;
            }
            specs->type = ptVar2;
          }
          else {
            ptVar2 = _get_identifier;
            if ((specs->field_0x30 & 0x10) != 0) {
              ptVar2 = _strlen;
            }
            specs->type = ptVar2;
          }
        }
        else {
          ptVar2 = make_fname_decl;
          if ((specs->field_0x30 & 0x10) != 0) {
            ptVar2 = _build_index_type;
          }
          specs->type = ptVar2;
        }
      }
      else {
        ptVar2 = _fname_as_string;
        if ((specs->field_0x30 & 0x10) != 0) {
          ptVar2 = _build_array_type;
        }
        specs->type = ptVar2;
      }
    }
  }
  else if ((((((specs->field_0x30 & 1) != 0) || ((specs->field_0x30 & 2) != 0)) ||
            ((specs->field_0x30 & 4) != 0)) ||
           (((specs->field_0x30 & 8) != 0 || ((specs->field_0x30 & 0x10) != 0)))) ||
          ((specs->field_0x30 & 0x20) != 0)) {
    fancy_abort("c-decl.c",0x23ec,&DAT_0011c9fd);
  }
  return specs;
}



void c_write_global_declarations_1(tree globals)

{
  byte bVar1;
  uchar reconsider;
  tree decl;
  
  for (decl = globals; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
    if ((((*(short *)decl == 0x1d) && (*(long *)&decl->field_0x50 == 0)) &&
        ((decl->field_0x3b & 2) != 0)) &&
       (((decl->field_0x3 & 8) == 0 && ((decl->field_0x3a & 0x10) != 0)))) {
      pedwarn(input_location,0,"%q+F used but never defined",decl);
      decl->field_0x2 = decl->field_0x2 | 0x80;
    }
    wrapup_global_declaration_1();
  }
  do {
    reconsider = '\0';
    for (decl = globals; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
      bVar1 = wrapup_global_declaration_2(decl);
      reconsider = reconsider | bVar1;
    }
    decl = globals;
  } while (reconsider != '\0');
  for (; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
    check_global_declaration_1(decl);
  }
  return;
}



void c_write_global_declarations_2(tree globals)

{
  tree decl;
  
  for (decl = globals; decl != (tree)0x0; decl = *(tree *)&decl->field_0x8) {
    (**(code **)(debug_hooks + 0x88))(decl);
  }
  return;
}



void c_write_global_declarations(void)

{
  long in_FS_OFFSET;
  int flags;
  tree t;
  tree tmp;
  FILE *stream;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pch_file == 0) && (flag_syntax_only == 0)) {
    ext_block = pop_scope();
    external_scope = (c_scope *)0x0;
    if (current_scope != (c_scope *)0x0) {
      fancy_abort("c-decl.c",0x251d,&DAT_0011c9fd);
    }
    if (ext_block != (tree)0x0) {
      tmp = *(tree *)&ext_block->field_0x20;
      stream = (FILE *)dump_begin(2,&flags);
      if ((stream != (FILE *)0x0) && (tmp != (tree)0x0)) {
        dump_node(tmp,flags & 0xfffffffd,stream);
        dump_end(2,stream);
      }
    }
    for (t = all_translation_units; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
      c_write_global_declarations_1(*(tree *)(*(long *)&t->field_0x50 + 0x20));
    }
    c_write_global_declarations_1(*(tree *)&ext_block->field_0x20);
    cgraph_finalize_compilation_unit();
    if ((*(int *)(global_dc + 0x18) == 0) && (*(int *)(global_dc + 0x1c) == 0)) {
      if (timevar_enable != '\0') {
        timevar_push_1(0xa6);
      }
      for (t = all_translation_units; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
        c_write_global_declarations_2(*(tree *)(*(long *)&t->field_0x50 + 0x20));
      }
      c_write_global_declarations_2(*(tree *)&ext_block->field_0x20);
      if (timevar_enable != '\0') {
        timevar_pop_1(0xa6);
      }
    }
    ext_block = (tree)0x0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void gt_ggc_mx_c_inline_static(void *x_p)

{
  int iVar1;
  c_inline_static *x;
  c_inline_static *xlimit;
  
  xlimit = (c_inline_static *)x_p;
  while (((x = (c_inline_static *)x_p, xlimit != (c_inline_static *)0x0 &&
          (xlimit != (c_inline_static *)0x1)) && (iVar1 = ggc_set_mark(xlimit), iVar1 == 0))) {
    xlimit = xlimit->next;
  }
  for (; x != xlimit; x = x->next) {
    if (x->function != (tree)0x0) {
      gt_ggc_mx_lang_tree_node(x->function);
    }
    if (x->static_decl != (tree)0x0) {
      gt_ggc_mx_lang_tree_node(x->static_decl);
    }
    if (x->next != (c_inline_static *)0x0) {
      gt_ggc_mx_c_inline_static(x->next);
    }
  }
  return;
}



void gt_ggc_mx_VEC_c_goto_bindings_p_gc(void *x_p)

{
  uint uVar1;
  int iVar2;
  size_t i0;
  VEC_c_goto_bindings_p_gc *x;
  size_t l0;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar2 = ggc_set_mark(x_p);
    if (iVar2 == 0) {
                    // WARNING: Load size is inaccurate
      uVar1 = *x_p;
      for (i0 = 0; i0 != uVar1; i0 = i0 + 1) {
        if (*(long *)((long)x_p + i0 * 8 + 8) != 0) {
          gt_ggc_mx_c_goto_bindings(*(void **)((long)x_p + i0 * 8 + 8));
        }
      }
    }
  }
  return;
}



void gt_ggc_mx_c_goto_bindings(void *x_p)

{
  int iVar1;
  c_goto_bindings *x;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar1 = ggc_set_mark(x_p);
    if (iVar1 == 0) {
      if (*(long *)((long)x_p + 8) != 0) {
        gt_ggc_mx_c_scope(*(void **)((long)x_p + 8));
      }
      if (*(long *)((long)x_p + 0x10) != 0) {
        gt_ggc_mx_c_binding(*(void **)((long)x_p + 0x10));
      }
    }
  }
  return;
}



void gt_ggc_mx_c_scope(void *x_p)

{
  int iVar1;
  c_scope *x;
  c_scope *xlimit;
  
  xlimit = (c_scope *)x_p;
  while (((x = (c_scope *)x_p, xlimit != (c_scope *)0x0 && (xlimit != (c_scope *)0x1)) &&
         (iVar1 = ggc_set_mark(xlimit), iVar1 == 0))) {
    xlimit = xlimit->outer;
  }
  for (; x != xlimit; x = x->outer) {
    if (x->outer != (c_scope *)0x0) {
      gt_ggc_mx_c_scope(x->outer);
    }
    if (x->outer_function != (c_scope *)0x0) {
      gt_ggc_mx_c_scope(x->outer_function);
    }
    if (x->bindings != (c_binding *)0x0) {
      gt_ggc_mx_c_binding(x->bindings);
    }
    if (x->blocks != (tree)0x0) {
      gt_ggc_mx_lang_tree_node(x->blocks);
    }
    if (x->blocks_last != (tree)0x0) {
      gt_ggc_mx_lang_tree_node(x->blocks_last);
    }
  }
  return;
}



void gt_ggc_mx_c_binding(void *x_p)

{
  int iVar1;
  bool bVar2;
  c_binding *x;
  c_binding *xlimit;
  
  xlimit = (c_binding *)x_p;
  while (((x = (c_binding *)x_p, xlimit != (c_binding *)0x0 && (xlimit != (c_binding *)0x1)) &&
         (iVar1 = ggc_set_mark(xlimit), iVar1 == 0))) {
    xlimit = xlimit->prev;
  }
  for (; x != xlimit; x = x->prev) {
    bVar2 = *(short *)x->decl == 0x1e;
    if (bVar2) {
      if ((bVar2) && (x->u != 0)) {
        gt_ggc_mx_c_label_vars((void *)x->u);
      }
    }
    else if (x->u != 0) {
      gt_ggc_mx_lang_tree_node((void *)x->u);
    }
    if (x->decl != (tree)0x0) {
      gt_ggc_mx_lang_tree_node(x->decl);
    }
    if (x->id != (tree)0x0) {
      gt_ggc_mx_lang_tree_node(x->id);
    }
    if (x->prev != (c_binding *)0x0) {
      gt_ggc_mx_c_binding(x->prev);
    }
    if (x->shadowed != (c_binding *)0x0) {
      gt_ggc_mx_c_binding(x->shadowed);
    }
  }
  return;
}



void gt_ggc_mx_c_label_vars(void *x_p)

{
  int iVar1;
  c_label_vars *x;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar1 = ggc_set_mark(x_p);
    if (iVar1 == 0) {
                    // WARNING: Load size is inaccurate
      if (*x_p != 0) {
                    // WARNING: Load size is inaccurate
        gt_ggc_mx_c_label_vars(*x_p);
      }
      if (*(long *)((long)x_p + 8) != 0) {
        gt_ggc_mx_c_scope(*(void **)((long)x_p + 8));
      }
      if (*(long *)((long)x_p + 0x10) != 0) {
        gt_ggc_mx_c_binding(*(void **)((long)x_p + 0x10));
      }
      if (*(long *)((long)x_p + 0x20) != 0) {
        gt_ggc_mx_VEC_tree_gc(*(undefined8 *)((long)x_p + 0x20));
      }
      if (*(long *)((long)x_p + 0x28) != 0) {
        gt_ggc_mx_VEC_c_goto_bindings_p_gc(*(void **)((long)x_p + 0x28));
      }
    }
  }
  return;
}



void gt_ggc_mx_language_function(void *x_p)

{
  int iVar1;
  language_function *x;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar1 = ggc_set_mark(x_p);
    if (iVar1 == 0) {
                    // WARNING: Load size is inaccurate
      if (*x_p != 0) {
                    // WARNING: Load size is inaccurate
        gt_ggc_mx_lang_tree_node(*x_p);
      }
      if (*(long *)((long)x_p + 0x10) != 0) {
        gt_ggc_mx_lang_tree_node(*(void **)((long)x_p + 0x10));
      }
      if (*(long *)((long)x_p + 0x18) != 0) {
        gt_ggc_mx_lang_tree_node(*(void **)((long)x_p + 0x18));
      }
    }
  }
  return;
}



void gt_ggc_mx_lang_tree_node(void *x_p)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  lang_tree_node *x;
  lang_tree_node *xlimit;
  size_t i1;
  size_t i2;
  size_t i3;
  size_t i4;
  size_t l4;
  size_t l3;
  size_t l2;
  size_t l1;
  
  xlimit = (lang_tree_node *)x_p;
  while (((x = (lang_tree_node *)x_p, xlimit != (lang_tree_node *)0x0 &&
          (xlimit != (lang_tree_node *)0x1)) && (iVar2 = ggc_set_mark(xlimit), iVar2 == 0))) {
    if (*(short *)xlimit == 8) {
      xlimit = *(lang_tree_node **)&xlimit->field_0x78;
    }
    else {
      xlimit = *(lang_tree_node **)&xlimit->field_0x8;
    }
  }
  while (x != xlimit) {
    if (*(short *)x == 1) {
      if (*(short *)x == 1) {
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        gt_ggc_m_S(*(undefined8 *)&x->field_0x18);
        if ((*(ushort *)&x->field_0x2a >> 6 & 0x40) == 0) {
          if ((x->field_0x2a & 0x3f) == 1) {
            uVar4 = (int)(uint)(*(ushort *)&x->field_0x2a >> 6) >> 1 & 2;
          }
          else if ((x->field_0x2a & 0x3f) == 2) {
            uVar4 = 1;
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
        if (((uVar4 != 3) && (uVar4 < 4)) && ((uVar4 != 2 && (uVar4 < 3)))) {
          if (uVar4 == 0) {
            if (*(long *)&x->field_0x30 != 0) {
              gt_ggc_mx_cpp_macro(*(undefined8 *)&x->field_0x30);
            }
          }
          else if ((uVar4 == 1) && (*(long *)&x->field_0x30 != 0)) {
            gt_ggc_mx_answer(*(undefined8 *)&x->field_0x30);
          }
        }
        if (*(long *)&x->field_0x38 != 0) {
          gt_ggc_mx_c_binding(*(void **)&x->field_0x38);
        }
        if (*(long *)&x->field_0x40 != 0) {
          gt_ggc_mx_c_binding(*(void **)&x->field_0x40);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_c_binding(*(void **)&x->field_0x48);
        }
      }
    }
    else {
      uVar3 = tree_node_structure(x);
      switch(uVar3) {
      case 0:
        break;
      case 1:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 2:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 3:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_real_value(*(undefined8 *)&x->field_0x18);
        }
        break;
      case 4:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_fixed_value(*(undefined8 *)&x->field_0x18);
        }
        break;
      case 5:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x18);
        }
        break;
      case 6:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 7:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        break;
      case 8:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        gt_ggc_m_S(*(undefined8 *)&x->field_0x18);
        break;
      case 9:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        break;
      case 10:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        break;
      case 0xb:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        break;
      case 0xc:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xa0);
        }
        if (*(long *)&x->field_0xa8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xa8);
        }
        if (*(long *)&x->field_0xb0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xb0);
        }
        break;
      case 0xd:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x88);
        }
        break;
      case 0xe:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x90 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x90);
        }
        break;
      case 0xf:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_ggc_mx_var_ann_d(*(undefined8 *)&x->field_0x98);
        }
        break;
      case 0x10:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_var_ann_d(*(undefined8 *)&x->field_0x80);
        }
        break;
      case 0x11:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        break;
      case 0x12:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_var_ann_d(*(undefined8 *)&x->field_0x78);
        }
        break;
      case 0x13:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        break;
      case 0x14:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xa0);
        }
        if (*(long *)&x->field_0xa8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xa8);
        }
        if (*(long *)&x->field_0xb0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xb0);
        }
        break;
      case 0x15:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xa0);
        }
        if (*(long *)&x->field_0xa8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xa8);
        }
        if (*(long *)&x->field_0xb0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xb0);
        }
        if (*(long *)&x->field_0xb8 != 0) {
          gt_ggc_mx_function(*(undefined8 *)&x->field_0xb8);
        }
        if (*(long *)&x->field_0xc0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xc0);
        }
        if (*(long *)&x->field_0xc8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xc8);
        }
        if (*(long *)&x->field_0xd0 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0xd0);
        }
        break;
      case 0x16:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (debug_hooks == &sdb_debug_hooks) {
          uVar4 = 1;
        }
        else if (debug_hooks == &dwarf2_debug_hooks) {
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
        }
        if (uVar4 == 2) {
          if (*(long *)&x->field_0x58 != 0) {
            gt_ggc_mx_die_struct(*(undefined8 *)&x->field_0x58);
          }
        }
        else if (((uVar4 < 3) && (uVar4 != 0)) && (uVar4 == 1)) {
          gt_ggc_m_S(*(undefined8 *)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x90 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x90);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_ggc_mx_lang_type(*(void **)&x->field_0xa0);
        }
        break;
      case 0x17:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        break;
      case 0x18:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        iVar2 = *(int *)&x->field_0x18;
        for (i1 = 0; i1 != (long)iVar2; i1 = i1 + 1) {
          if (*(long *)(&x->field_0x20 + i1 * 8) != 0) {
            gt_ggc_mx_lang_tree_node(*(void **)(&x->field_0x20 + i1 * 8));
          }
        }
        break;
      case 0x19:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        iVar2 = tree_operand_length((const_tree)x);
        for (i2 = 0; i2 != (long)iVar2; i2 = i2 + 1) {
          if (*(long *)(&x->field_0x28 + i2 * 8) != 0) {
            gt_ggc_mx_lang_tree_node(*(void **)(&x->field_0x28 + i2 * 8));
          }
        }
        break;
      case 0x1a:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_gimple_statement_d(*(undefined8 *)&x->field_0x20);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_ptr_info_def(*(undefined8 *)&x->field_0x30);
        }
        break;
      case 0x1b:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_VEC_tree_gc(*(undefined8 *)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x38 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x38);
        }
        if (*(long *)&x->field_0x40 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x40);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        break;
      case 0x1c:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x38 != 0) {
          gt_ggc_mx_VEC_tree_gc(*(undefined8 *)&x->field_0x38);
        }
        if (*(long *)&x->field_0x40 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x40);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x50);
        }
        uVar4 = *(uint *)&x->field_0x58;
        for (i3 = 0; i3 != uVar4; i3 = i3 + 1) {
          if (*(long *)(&x->field_0x60 + i3 * 8) != 0) {
            gt_ggc_mx_lang_tree_node(*(void **)(&x->field_0x60 + i3 * 8));
          }
        }
        break;
      case 0x1d:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_tree_statement_list_node(*(undefined8 *)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_ggc_mx_tree_statement_list_node(*(undefined8 *)&x->field_0x20);
        }
        break;
      case 0x1e:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_ggc_mx_VEC_constructor_elt_gc(*(undefined8 *)&x->field_0x18);
        }
        break;
      case 0x1f:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_ggc_mx_gimple_seq_d(*(undefined8 *)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_ggc_mx_gimple_seq_d(*(undefined8 *)&x->field_0x30);
        }
        bVar1 = (&omp_clause_num_ops)[*(uint *)&x->field_0x1c];
        for (i4 = 0; i4 != bVar1; i4 = i4 + 1) {
          if (*(long *)(&x->field_0x38 + i4 * 8) != 0) {
            gt_ggc_mx_lang_tree_node(*(void **)(&x->field_0x38 + i4 * 8));
          }
        }
        break;
      case 0x20:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 0x21:
        if (*(long *)&x->field_0x8 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_ggc_mx_lang_tree_node(*(void **)&x->field_0x10);
        }
      }
    }
    if (*(short *)x == 8) {
      x = *(lang_tree_node **)&x->field_0x78;
    }
    else {
      x = *(lang_tree_node **)&x->field_0x8;
    }
  }
  return;
}



void gt_ggc_mx_lang_decl(void *x_p)

{
  lang_decl *x;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    ggc_set_mark(x_p);
  }
  return;
}



void gt_ggc_mx_lang_type(void *x_p)

{
  int iVar1;
  lang_type *x;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar1 = ggc_set_mark(x_p);
    if (iVar1 == 0) {
                    // WARNING: Load size is inaccurate
      if (*x_p != 0) {
                    // WARNING: Load size is inaccurate
        gt_ggc_mx_sorted_fields_type(*x_p);
      }
      if (*(long *)((long)x_p + 8) != 0) {
        gt_ggc_mx_lang_tree_node(*(void **)((long)x_p + 8));
      }
      if (*(long *)((long)x_p + 0x10) != 0) {
        gt_ggc_mx_lang_tree_node(*(void **)((long)x_p + 0x10));
      }
      if (*(long *)((long)x_p + 0x18) != 0) {
        gt_ggc_mx_lang_tree_node(*(void **)((long)x_p + 0x18));
      }
    }
  }
  return;
}



void gt_pch_nx_c_inline_static(void *x_p)

{
  int iVar1;
  c_inline_static *x;
  c_inline_static *xlimit;
  
  xlimit = (c_inline_static *)x_p;
  while (iVar1 = gt_pch_note_object(xlimit,xlimit,gt_pch_p_15c_inline_static,3),
        x = (c_inline_static *)x_p, iVar1 != 0) {
    xlimit = xlimit->next;
  }
  for (; x != xlimit; x = x->next) {
    if (x->function != (tree)0x0) {
      gt_pch_nx_lang_tree_node(x->function);
    }
    if (x->static_decl != (tree)0x0) {
      gt_pch_nx_lang_tree_node(x->static_decl);
    }
    if (x->next != (c_inline_static *)0x0) {
      gt_pch_nx_c_inline_static(x->next);
    }
  }
  return;
}



void gt_pch_nx_VEC_c_goto_bindings_p_gc(void *x_p)

{
  uint uVar1;
  int iVar2;
  size_t i0;
  VEC_c_goto_bindings_p_gc *x;
  size_t l0;
  
  iVar2 = gt_pch_note_object(x_p,x_p,gt_pch_p_24VEC_c_goto_bindings_p_gc,4);
  if (iVar2 != 0) {
                    // WARNING: Load size is inaccurate
    uVar1 = *x_p;
    for (i0 = 0; i0 != uVar1; i0 = i0 + 1) {
      if (*(long *)((long)x_p + i0 * 8 + 8) != 0) {
        gt_pch_nx_c_goto_bindings(*(void **)((long)x_p + i0 * 8 + 8));
      }
    }
  }
  return;
}



void gt_pch_nx_c_goto_bindings(void *x_p)

{
  int iVar1;
  c_goto_bindings *x;
  
  iVar1 = gt_pch_note_object(x_p,x_p,gt_pch_p_15c_goto_bindings,5);
  if (iVar1 != 0) {
    if (*(long *)((long)x_p + 8) != 0) {
      gt_pch_nx_c_scope(*(void **)((long)x_p + 8));
    }
    if (*(long *)((long)x_p + 0x10) != 0) {
      gt_pch_nx_c_binding(*(void **)((long)x_p + 0x10));
    }
  }
  return;
}



void gt_pch_nx_c_scope(void *x_p)

{
  int iVar1;
  c_scope *x;
  c_scope *xlimit;
  
  xlimit = (c_scope *)x_p;
  while (iVar1 = gt_pch_note_object(xlimit,xlimit,gt_pch_p_7c_scope,6), x = (c_scope *)x_p,
        iVar1 != 0) {
    xlimit = xlimit->outer;
  }
  for (; x != xlimit; x = x->outer) {
    if (x->outer != (c_scope *)0x0) {
      gt_pch_nx_c_scope(x->outer);
    }
    if (x->outer_function != (c_scope *)0x0) {
      gt_pch_nx_c_scope(x->outer_function);
    }
    if (x->bindings != (c_binding *)0x0) {
      gt_pch_nx_c_binding(x->bindings);
    }
    if (x->blocks != (tree)0x0) {
      gt_pch_nx_lang_tree_node(x->blocks);
    }
    if (x->blocks_last != (tree)0x0) {
      gt_pch_nx_lang_tree_node(x->blocks_last);
    }
  }
  return;
}



void gt_pch_nx_c_binding(void *x_p)

{
  int iVar1;
  bool bVar2;
  c_binding *x;
  c_binding *xlimit;
  
  xlimit = (c_binding *)x_p;
  while (iVar1 = gt_pch_note_object(xlimit,xlimit,gt_pch_p_9c_binding,7), x = (c_binding *)x_p,
        iVar1 != 0) {
    xlimit = xlimit->prev;
  }
  for (; x != xlimit; x = x->prev) {
    bVar2 = *(short *)x->decl == 0x1e;
    if (bVar2) {
      if ((bVar2) && (x->u != 0)) {
        gt_pch_nx_c_label_vars((void *)x->u);
      }
    }
    else if (x->u != 0) {
      gt_pch_nx_lang_tree_node((void *)x->u);
    }
    if (x->decl != (tree)0x0) {
      gt_pch_nx_lang_tree_node(x->decl);
    }
    if (x->id != (tree)0x0) {
      gt_pch_nx_lang_tree_node(x->id);
    }
    if (x->prev != (c_binding *)0x0) {
      gt_pch_nx_c_binding(x->prev);
    }
    if (x->shadowed != (c_binding *)0x0) {
      gt_pch_nx_c_binding(x->shadowed);
    }
  }
  return;
}



void gt_pch_nx_c_label_vars(void *x_p)

{
  int iVar1;
  c_label_vars *x;
  
  iVar1 = gt_pch_note_object(x_p,x_p,gt_pch_p_12c_label_vars,8);
  if (iVar1 != 0) {
                    // WARNING: Load size is inaccurate
    if (*x_p != 0) {
                    // WARNING: Load size is inaccurate
      gt_pch_nx_c_label_vars(*x_p);
    }
    if (*(long *)((long)x_p + 8) != 0) {
      gt_pch_nx_c_scope(*(void **)((long)x_p + 8));
    }
    if (*(long *)((long)x_p + 0x10) != 0) {
      gt_pch_nx_c_binding(*(void **)((long)x_p + 0x10));
    }
    if (*(long *)((long)x_p + 0x20) != 0) {
      gt_pch_nx_VEC_tree_gc(*(undefined8 *)((long)x_p + 0x20));
    }
    if (*(long *)((long)x_p + 0x28) != 0) {
      gt_pch_nx_VEC_c_goto_bindings_p_gc(*(void **)((long)x_p + 0x28));
    }
  }
  return;
}



void gt_pch_nx_language_function(void *x_p)

{
  int iVar1;
  language_function *x;
  
  iVar1 = gt_pch_note_object(x_p,x_p,gt_pch_p_17language_function,0x75);
  if (iVar1 != 0) {
                    // WARNING: Load size is inaccurate
    if (*x_p != 0) {
                    // WARNING: Load size is inaccurate
      gt_pch_nx_lang_tree_node(*x_p);
    }
    if (*(long *)((long)x_p + 0x10) != 0) {
      gt_pch_nx_lang_tree_node(*(void **)((long)x_p + 0x10));
    }
    if (*(long *)((long)x_p + 0x18) != 0) {
      gt_pch_nx_lang_tree_node(*(void **)((long)x_p + 0x18));
    }
  }
  return;
}



void gt_pch_nx_lang_tree_node(void *x_p)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  lang_tree_node *x;
  lang_tree_node *xlimit;
  size_t i1;
  size_t i2;
  size_t i3;
  size_t i4;
  size_t l4;
  size_t l3;
  size_t l2;
  size_t l1;
  
  xlimit = (lang_tree_node *)x_p;
  while (iVar2 = gt_pch_note_object(xlimit,xlimit,gt_pch_p_14lang_tree_node,0x85),
        x = (lang_tree_node *)x_p, iVar2 != 0) {
    if (*(short *)xlimit == 8) {
      xlimit = *(lang_tree_node **)&xlimit->field_0x78;
    }
    else {
      xlimit = *(lang_tree_node **)&xlimit->field_0x8;
    }
  }
  while (x != xlimit) {
    if (*(short *)x == 1) {
      if (*(short *)x == 1) {
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        gt_pch_n_S(*(undefined8 *)&x->field_0x18);
        if ((*(ushort *)&x->field_0x2a >> 6 & 0x40) == 0) {
          if ((x->field_0x2a & 0x3f) == 1) {
            uVar4 = (int)(uint)(*(ushort *)&x->field_0x2a >> 6) >> 1 & 2;
          }
          else if ((x->field_0x2a & 0x3f) == 2) {
            uVar4 = 1;
          }
          else {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
        if ((((uVar4 != 3) && (uVar4 < 4)) && (uVar4 != 2)) && (uVar4 < 3)) {
          if (uVar4 == 0) {
            if (*(long *)&x->field_0x30 != 0) {
              gt_pch_nx_cpp_macro(*(undefined8 *)&x->field_0x30);
            }
          }
          else if ((uVar4 == 1) && (*(long *)&x->field_0x30 != 0)) {
            gt_pch_nx_answer(*(undefined8 *)&x->field_0x30);
          }
        }
        if (*(long *)&x->field_0x38 != 0) {
          gt_pch_nx_c_binding(*(void **)&x->field_0x38);
        }
        if (*(long *)&x->field_0x40 != 0) {
          gt_pch_nx_c_binding(*(void **)&x->field_0x40);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_c_binding(*(void **)&x->field_0x48);
        }
      }
    }
    else {
      uVar3 = tree_node_structure(x);
      switch(uVar3) {
      case 0:
        break;
      case 1:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 2:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 3:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_real_value(*(undefined8 *)&x->field_0x18);
        }
        break;
      case 4:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_fixed_value(*(undefined8 *)&x->field_0x18);
        }
        break;
      case 5:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x18);
        }
        break;
      case 6:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 7:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        break;
      case 8:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        gt_pch_n_S(*(undefined8 *)&x->field_0x18);
        break;
      case 9:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        break;
      case 10:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        break;
      case 0xb:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        break;
      case 0xc:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xa0);
        }
        if (*(long *)&x->field_0xa8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xa8);
        }
        if (*(long *)&x->field_0xb0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xb0);
        }
        break;
      case 0xd:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x88);
        }
        break;
      case 0xe:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x90 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x90);
        }
        break;
      case 0xf:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_pch_nx_var_ann_d(*(undefined8 *)&x->field_0x98);
        }
        break;
      case 0x10:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_var_ann_d(*(undefined8 *)&x->field_0x80);
        }
        break;
      case 0x11:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        break;
      case 0x12:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_var_ann_d(*(undefined8 *)&x->field_0x78);
        }
        break;
      case 0x13:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        break;
      case 0x14:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xa0);
        }
        if (*(long *)&x->field_0xa8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xa8);
        }
        if (*(long *)&x->field_0xb0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xb0);
        }
        break;
      case 0x15:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (*(long *)&x->field_0x58 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_decl(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_rtx_def(*(undefined8 *)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xa0);
        }
        if (*(long *)&x->field_0xa8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xa8);
        }
        if (*(long *)&x->field_0xb0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xb0);
        }
        if (*(long *)&x->field_0xb8 != 0) {
          gt_pch_nx_function(*(undefined8 *)&x->field_0xb8);
        }
        if (*(long *)&x->field_0xc0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xc0);
        }
        if (*(long *)&x->field_0xc8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xc8);
        }
        if (*(long *)&x->field_0xd0 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0xd0);
        }
        break;
      case 0x16:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        if (debug_hooks == &sdb_debug_hooks) {
          uVar4 = 1;
        }
        else if (debug_hooks == &dwarf2_debug_hooks) {
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
        }
        if (uVar4 == 2) {
          if (*(long *)&x->field_0x58 != 0) {
            gt_pch_nx_die_struct(*(undefined8 *)&x->field_0x58);
          }
        }
        else if (((uVar4 < 3) && (uVar4 != 0)) && (uVar4 == 1)) {
          gt_pch_n_S(*(undefined8 *)&x->field_0x58);
        }
        if (*(long *)&x->field_0x60 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x60);
        }
        if (*(long *)&x->field_0x68 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x68);
        }
        if (*(long *)&x->field_0x70 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x70);
        }
        if (*(long *)&x->field_0x78 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x78);
        }
        if (*(long *)&x->field_0x80 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x80);
        }
        if (*(long *)&x->field_0x88 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x88);
        }
        if (*(long *)&x->field_0x90 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x90);
        }
        if (*(long *)&x->field_0x98 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x98);
        }
        if (*(long *)&x->field_0xa0 != 0) {
          gt_pch_nx_lang_type(*(void **)&x->field_0xa0);
        }
        break;
      case 0x17:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        break;
      case 0x18:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        iVar2 = *(int *)&x->field_0x18;
        for (i1 = 0; i1 != (long)iVar2; i1 = i1 + 1) {
          if (*(long *)(&x->field_0x20 + i1 * 8) != 0) {
            gt_pch_nx_lang_tree_node(*(void **)(&x->field_0x20 + i1 * 8));
          }
        }
        break;
      case 0x19:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        iVar2 = tree_operand_length((const_tree)x);
        for (i2 = 0; i2 != (long)iVar2; i2 = i2 + 1) {
          if (*(long *)(&x->field_0x28 + i2 * 8) != 0) {
            gt_pch_nx_lang_tree_node(*(void **)(&x->field_0x28 + i2 * 8));
          }
        }
        break;
      case 0x1a:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_gimple_statement_d(*(undefined8 *)&x->field_0x20);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_ptr_info_def(*(undefined8 *)&x->field_0x30);
        }
        break;
      case 0x1b:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_VEC_tree_gc(*(undefined8 *)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x38 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x38);
        }
        if (*(long *)&x->field_0x40 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x40);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        break;
      case 0x1c:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x20);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x30);
        }
        if (*(long *)&x->field_0x38 != 0) {
          gt_pch_nx_VEC_tree_gc(*(undefined8 *)&x->field_0x38);
        }
        if (*(long *)&x->field_0x40 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x40);
        }
        if (*(long *)&x->field_0x48 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x48);
        }
        if (*(long *)&x->field_0x50 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x50);
        }
        uVar4 = *(uint *)&x->field_0x58;
        for (i3 = 0; i3 != uVar4; i3 = i3 + 1) {
          if (*(long *)(&x->field_0x60 + i3 * 8) != 0) {
            gt_pch_nx_lang_tree_node(*(void **)(&x->field_0x60 + i3 * 8));
          }
        }
        break;
      case 0x1d:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_tree_statement_list_node(*(undefined8 *)&x->field_0x18);
        }
        if (*(long *)&x->field_0x20 != 0) {
          gt_pch_nx_tree_statement_list_node(*(undefined8 *)&x->field_0x20);
        }
        break;
      case 0x1e:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x18 != 0) {
          gt_pch_nx_VEC_constructor_elt_gc(*(undefined8 *)&x->field_0x18);
        }
        break;
      case 0x1f:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        if (*(long *)&x->field_0x28 != 0) {
          gt_pch_nx_gimple_seq_d(*(undefined8 *)&x->field_0x28);
        }
        if (*(long *)&x->field_0x30 != 0) {
          gt_pch_nx_gimple_seq_d(*(undefined8 *)&x->field_0x30);
        }
        bVar1 = (&omp_clause_num_ops)[*(uint *)&x->field_0x1c];
        for (i4 = 0; i4 != bVar1; i4 = i4 + 1) {
          if (*(long *)(&x->field_0x38 + i4 * 8) != 0) {
            gt_pch_nx_lang_tree_node(*(void **)(&x->field_0x38 + i4 * 8));
          }
        }
        break;
      case 0x20:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
        break;
      case 0x21:
        if (*(long *)&x->field_0x8 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x8);
        }
        if (*(long *)&x->field_0x10 != 0) {
          gt_pch_nx_lang_tree_node(*(void **)&x->field_0x10);
        }
      }
    }
    if (*(short *)x == 8) {
      x = *(lang_tree_node **)&x->field_0x78;
    }
    else {
      x = *(lang_tree_node **)&x->field_0x8;
    }
  }
  return;
}



void gt_pch_nx_lang_decl(void *x_p)

{
  lang_decl *x;
  
  gt_pch_note_object(x_p,x_p,gt_pch_p_9lang_decl,0x88);
  return;
}



void gt_pch_nx_lang_type(void *x_p)

{
  int iVar1;
  lang_type *x;
  
  iVar1 = gt_pch_note_object(x_p,x_p,gt_pch_p_9lang_type,0x89);
  if (iVar1 != 0) {
                    // WARNING: Load size is inaccurate
    if (*x_p != 0) {
                    // WARNING: Load size is inaccurate
      gt_pch_nx_sorted_fields_type(*x_p);
    }
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
    gt_pch_note_reorder(*x_p,*x_p,0x97e8c78948ce8948);
    if (*(long *)((long)x_p + 8) != 0) {
      gt_pch_nx_lang_tree_node(*(void **)((long)x_p + 8));
    }
    if (*(long *)((long)x_p + 0x10) != 0) {
      gt_pch_nx_lang_tree_node(*(void **)((long)x_p + 0x10));
    }
    if (*(long *)((long)x_p + 0x18) != 0) {
      gt_pch_nx_lang_tree_node(*(void **)((long)x_p + 0x18));
    }
  }
  return;
}



void gt_pch_p_15c_inline_static(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  c_inline_static *x;
  
  if (x_p == this_obj) {
    (*op)((void *)((long)x_p + 8),cookie);
    (*op)((void *)((long)x_p + 0x10),cookie);
    (*op)((void *)((long)x_p + 0x20),cookie);
  }
  return;
}



void gt_pch_p_24VEC_c_goto_bindings_p_gc
               (void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  uint uVar1;
  size_t i0;
  VEC_c_goto_bindings_p_gc *x;
  size_t l0;
  
                    // WARNING: Load size is inaccurate
  uVar1 = *x_p;
  for (i0 = 0; i0 != uVar1; i0 = i0 + 1) {
    if (x_p == this_obj) {
      (*op)((void *)((long)x_p + i0 * 8 + 8),cookie);
    }
  }
  return;
}



void gt_pch_p_15c_goto_bindings(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  c_goto_bindings *x;
  
  if (x_p == this_obj) {
    (*op)((void *)((long)x_p + 8),cookie);
    (*op)((void *)((long)x_p + 0x10),cookie);
  }
  return;
}



void gt_pch_p_7c_scope(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  c_scope *x;
  
  if (x_p == this_obj) {
    (*op)(x_p,cookie);
    (*op)((void *)((long)x_p + 8),cookie);
    (*op)((void *)((long)x_p + 0x10),cookie);
    (*op)((void *)((long)x_p + 0x18),cookie);
    (*op)((void *)((long)x_p + 0x20),cookie);
  }
  return;
}



void gt_pch_p_9c_binding(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  bool bVar1;
  c_binding *x;
  
  bVar1 = **(short **)((long)x_p + 8) == 0x1e;
  if (bVar1) {
    if ((bVar1) && (x_p == this_obj)) {
      (*op)(x_p,cookie);
    }
  }
  else if (x_p == this_obj) {
    (*op)(x_p,cookie);
  }
  if (x_p == this_obj) {
    (*op)((void *)((long)x_p + 8),cookie);
    (*op)((void *)((long)x_p + 0x10),cookie);
    (*op)((void *)((long)x_p + 0x18),cookie);
    (*op)((void *)((long)x_p + 0x20),cookie);
  }
  return;
}



void gt_pch_p_12c_label_vars(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  c_label_vars *x;
  
  if (x_p == this_obj) {
    (*op)(x_p,cookie);
    (*op)((void *)((long)x_p + 8),cookie);
    (*op)((void *)((long)x_p + 0x10),cookie);
    (*op)((void *)((long)x_p + 0x20),cookie);
    (*op)((void *)((long)x_p + 0x28),cookie);
  }
  return;
}



void gt_pch_p_17language_function(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  language_function *x;
  
  if (x_p == this_obj) {
    (*op)(x_p,cookie);
    (*op)((void *)((long)x_p + 0x10),cookie);
    (*op)((void *)((long)x_p + 0x18),cookie);
  }
  return;
}



void gt_pch_p_14lang_tree_node(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  size_t i1;
  size_t i2;
  size_t i3;
  size_t i4;
  lang_tree_node *x;
  size_t l4;
  size_t l3;
  size_t l2;
  size_t l1;
  
                    // WARNING: Load size is inaccurate
  if (*x_p == 1) {
    if (*x_p == 1) {
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
      }
      if ((*(ushort *)((long)x_p + 0x2a) >> 6 & 0x40) == 0) {
        if ((*(byte *)((long)x_p + 0x2a) & 0x3f) == 1) {
          uVar4 = (int)(uint)(*(ushort *)((long)x_p + 0x2a) >> 6) >> 1 & 2;
        }
        else if ((*(byte *)((long)x_p + 0x2a) & 0x3f) == 2) {
          uVar4 = 1;
        }
        else {
          uVar4 = 4;
        }
      }
      else {
        uVar4 = 3;
      }
      if ((((uVar4 != 3) && (uVar4 < 4)) && (uVar4 != 2)) && (uVar4 < 3)) {
        if (uVar4 == 0) {
          if (x_p == this_obj) {
            (*op)((void *)((long)x_p + 0x30),cookie);
          }
        }
        else if ((uVar4 == 1) && (x_p == this_obj)) {
          (*op)((void *)((long)x_p + 0x30),cookie);
        }
      }
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 0x38),cookie);
        (*op)((void *)((long)x_p + 0x40),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
      }
    }
  }
  else {
    uVar2 = tree_node_structure(x_p);
    switch(uVar2) {
    case 0:
      break;
    case 1:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
      }
      break;
    case 2:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
      }
      break;
    case 3:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
      }
      break;
    case 4:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
      }
      break;
    case 5:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
      }
      break;
    case 6:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
      }
      break;
    case 7:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
      }
      break;
    case 8:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
      }
      break;
    case 9:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
      }
      break;
    case 10:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
      }
      break;
    case 0xb:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
      }
      break;
    case 0xc:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
        (*op)((void *)((long)x_p + 0x88),cookie);
        (*op)((void *)((long)x_p + 0x98),cookie);
        (*op)((void *)((long)x_p + 0xa0),cookie);
        (*op)((void *)((long)x_p + 0xa8),cookie);
        (*op)((void *)((long)x_p + 0xb0),cookie);
      }
      break;
    case 0xd:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
        (*op)((void *)((long)x_p + 0x88),cookie);
      }
      break;
    case 0xe:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
        (*op)((void *)((long)x_p + 0x88),cookie);
        (*op)((void *)((long)x_p + 0x90),cookie);
      }
      break;
    case 0xf:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
        (*op)((void *)((long)x_p + 0x88),cookie);
        (*op)((void *)((long)x_p + 0x98),cookie);
      }
      break;
    case 0x10:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
      }
      break;
    case 0x11:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
      }
      break;
    case 0x12:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
      }
      break;
    case 0x13:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
      }
      break;
    case 0x14:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
        (*op)((void *)((long)x_p + 0x88),cookie);
        (*op)((void *)((long)x_p + 0x98),cookie);
        (*op)((void *)((long)x_p + 0xa0),cookie);
        (*op)((void *)((long)x_p + 0xa8),cookie);
        (*op)((void *)((long)x_p + 0xb0),cookie);
      }
      break;
    case 0x15:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
        (*op)((void *)((long)x_p + 0x58),cookie);
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
        (*op)((void *)((long)x_p + 0x88),cookie);
        (*op)((void *)((long)x_p + 0x98),cookie);
        (*op)((void *)((long)x_p + 0xa0),cookie);
        (*op)((void *)((long)x_p + 0xa8),cookie);
        (*op)((void *)((long)x_p + 0xb0),cookie);
        (*op)((void *)((long)x_p + 0xb8),cookie);
        (*op)((void *)((long)x_p + 0xc0),cookie);
        (*op)((void *)((long)x_p + 200),cookie);
        (*op)((void *)((long)x_p + 0xd0),cookie);
      }
      break;
    case 0x16:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
      }
      if (debug_hooks == &sdb_debug_hooks) {
        uVar4 = 1;
      }
      else if (debug_hooks == &dwarf2_debug_hooks) {
        uVar4 = 2;
      }
      else {
        uVar4 = 0;
      }
      if (uVar4 == 2) {
        if (x_p == this_obj) {
          (*op)((void *)((long)x_p + 0x58),cookie);
        }
      }
      else if (((uVar4 < 3) && (uVar4 != 0)) && ((uVar4 == 1 && (x_p == this_obj)))) {
        (*op)((void *)((long)x_p + 0x58),cookie);
      }
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 0x60),cookie);
        (*op)((void *)((long)x_p + 0x68),cookie);
        (*op)((void *)((long)x_p + 0x70),cookie);
        (*op)((void *)((long)x_p + 0x78),cookie);
        (*op)((void *)((long)x_p + 0x80),cookie);
        (*op)((void *)((long)x_p + 0x88),cookie);
        (*op)((void *)((long)x_p + 0x90),cookie);
        (*op)((void *)((long)x_p + 0x98),cookie);
        (*op)((void *)((long)x_p + 0xa0),cookie);
      }
      break;
    case 0x17:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
      }
      break;
    case 0x18:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
      }
      iVar3 = *(int *)((long)x_p + 0x18);
      for (i1 = 0; i1 != (long)iVar3; i1 = i1 + 1) {
        if (x_p == this_obj) {
          (*op)((void *)((i1 + 4) * 8 + (long)x_p),cookie);
        }
      }
      break;
    case 0x19:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
      }
      iVar3 = tree_operand_length((const_tree)x_p);
      for (i2 = 0; i2 != (long)iVar3; i2 = i2 + 1) {
        if (x_p == this_obj) {
          (*op)((void *)((long)x_p + (i2 + 4) * 8 + 8),cookie);
        }
      }
      break;
    case 0x1a:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
      }
      break;
    case 0x1b:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x38),cookie);
        (*op)((void *)((long)x_p + 0x40),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
      }
      break;
    case 0x1c:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
        (*op)((void *)((long)x_p + 0x38),cookie);
        (*op)((void *)((long)x_p + 0x40),cookie);
        (*op)((void *)((long)x_p + 0x48),cookie);
        (*op)((void *)((long)x_p + 0x50),cookie);
      }
      uVar4 = *(uint *)((long)x_p + 0x58);
      for (i3 = 0; i3 != uVar4; i3 = i3 + 1) {
        if (x_p == this_obj) {
          (*op)((void *)((long)x_p + (i3 + 10) * 8 + 0x10),cookie);
        }
      }
      break;
    case 0x1d:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
        (*op)((void *)((long)x_p + 0x20),cookie);
      }
      break;
    case 0x1e:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x18),cookie);
      }
      break;
    case 0x1f:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
        (*op)((void *)((long)x_p + 0x28),cookie);
        (*op)((void *)((long)x_p + 0x30),cookie);
      }
      bVar1 = (&omp_clause_num_ops)[*(uint *)((long)x_p + 0x1c)];
      for (i4 = 0; i4 != bVar1; i4 = i4 + 1) {
        if (x_p == this_obj) {
          (*op)((void *)((long)x_p + (i4 + 6) * 8 + 8),cookie);
        }
      }
      break;
    case 0x20:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
      }
      break;
    case 0x21:
      if (x_p == this_obj) {
        (*op)((void *)((long)x_p + 8),cookie);
        (*op)((void *)((long)x_p + 0x10),cookie);
      }
    }
  }
  return;
}



void gt_pch_p_9lang_decl(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  lang_decl *x;
  
  return;
}



void gt_pch_p_9lang_type(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  lang_type *x;
  
  if (x_p == this_obj) {
    (*op)(x_p,cookie);
    (*op)((void *)((long)x_p + 8),cookie);
    (*op)((void *)((long)x_p + 0x10),cookie);
    (*op)((void *)((long)x_p + 0x18),cookie);
  }
  return;
}


