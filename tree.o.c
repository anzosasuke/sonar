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
typedef unsigned short    undefined2;
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

struct rtx_def {
};

struct sequence_stack {
    rtx first;
    rtx last;
    struct sequence_stack * next;
};

typedef struct VEC_call_site_record_gc VEC_call_site_record_gc, *PVEC_call_site_record_gc;

typedef struct VEC_call_site_record_base VEC_call_site_record_base, *PVEC_call_site_record_base;

typedef struct call_site_record_d call_site_record_d, *Pcall_site_record_d;

typedef struct call_site_record_d * call_site_record;

struct call_site_record_d {
};

struct VEC_call_site_record_base {
    uint num;
    uint alloc;
    call_site_record vec[1];
};

struct VEC_call_site_record_gc {
    struct VEC_call_site_record_base base;
};

typedef struct ipa_opt_pass_d ipa_opt_pass_d, *Pipa_opt_pass_d;

typedef struct cgraph_node_set_def cgraph_node_set_def, *Pcgraph_node_set_def;

typedef struct cgraph_node cgraph_node, *Pcgraph_node;

typedef union gimple_statement_d gimple_statement_d, *Pgimple_statement_d;

typedef union gimple_statement_d * gimple;

typedef struct varpool_node varpool_node, *Pvarpool_node;

typedef struct ipa_opt_pass_d * ipa_opt_pass;

typedef struct opt_pass opt_pass, *Popt_pass;

typedef struct VEC_cgraph_node_ptr_gc VEC_cgraph_node_ptr_gc, *PVEC_cgraph_node_ptr_gc;

typedef union tree_node tree_node, *Ptree_node;

typedef union tree_node * tree;

typedef struct cgraph_edge cgraph_edge, *Pcgraph_edge;

typedef struct VEC_ipa_opt_pass_heap VEC_ipa_opt_pass_heap, *PVEC_ipa_opt_pass_heap;

typedef struct cgraph_local_info cgraph_local_info, *Pcgraph_local_info;

typedef struct cgraph_global_info cgraph_global_info, *Pcgraph_global_info;

typedef struct cgraph_rtl_info cgraph_rtl_info, *Pcgraph_rtl_info;

typedef struct cgraph_clone_info cgraph_clone_info, *Pcgraph_clone_info;

typedef struct cgraph_thunk_info cgraph_thunk_info, *Pcgraph_thunk_info;

typedef long gcov_type;

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

typedef struct bitmap_head_def bitmap_head_def, *Pbitmap_head_def;

typedef struct bitmap_head_def * bitmap;

typedef uint source_location;

typedef source_location location_t;

typedef struct basic_block_def basic_block_def, *Pbasic_block_def;

typedef struct gimple_statement_with_ops_base gimple_statement_with_ops_base, *Pgimple_statement_with_ops_base;

typedef struct gimple_seq_d gimple_seq_d, *Pgimple_seq_d;

typedef struct gimple_seq_d * gimple_seq;

typedef struct phi_arg_d phi_arg_d, *Pphi_arg_d;

typedef struct gimple_omp_for_iter gimple_omp_for_iter, *Pgimple_omp_for_iter;

typedef struct cgraph_node * cgraph_node_ptr;

typedef struct real_value real_value, *Preal_value;

typedef struct ht_identifier ht_identifier, *Pht_identifier;

typedef struct lang_decl lang_decl, *Plang_decl;

typedef struct var_ann_d var_ann_d, *Pvar_ann_d;

typedef struct function function, *Pfunction;

typedef int alias_set_type;

typedef union tree_type_symtab tree_type_symtab, *Ptree_type_symtab;

typedef struct lang_type lang_type, *Plang_type;

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

typedef struct cl_optimization cl_optimization, *Pcl_optimization;

typedef struct cl_target_option cl_target_option, *Pcl_target_option;

typedef struct VEC_ipa_replace_map_p_base VEC_ipa_replace_map_p_base, *PVEC_ipa_replace_map_p_base;

typedef struct bitmap_element_def bitmap_element_def, *Pbitmap_element_def;

typedef struct bitmap_element_def bitmap_element;

typedef struct bitmap_obstack bitmap_obstack, *Pbitmap_obstack;

typedef struct VEC_edge_gc VEC_edge_gc, *PVEC_edge_gc;

typedef struct loop loop, *Ploop;

typedef struct et_node et_node, *Pet_node;

typedef union basic_block_il_dependent basic_block_il_dependent, *Pbasic_block_il_dependent;

typedef struct def_optype_d def_optype_d, *Pdef_optype_d;

typedef struct use_optype_d use_optype_d, *Puse_optype_d;

typedef struct gimple_seq_node_d gimple_seq_node_d, *Pgimple_seq_node_d;

typedef struct gimple_seq_node_d * gimple_seq_node;

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

typedef struct eh_status eh_status, *Peh_status;

typedef struct control_flow_graph control_flow_graph, *Pcontrol_flow_graph;

typedef struct gimple_df gimple_df, *Pgimple_df;

typedef struct loops loops, *Ploops;

typedef struct machine_function machine_function, *Pmachine_function;

typedef struct language_function language_function, *Planguage_function;

typedef struct die_struct die_struct, *Pdie_struct;

typedef struct pt_solution pt_solution, *Ppt_solution;

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

typedef struct ipa_replace_map ipa_replace_map, *Pipa_replace_map;

typedef struct ipa_replace_map * ipa_replace_map_p;

typedef ulong BITMAP_WORD;

typedef struct VEC_edge_base VEC_edge_base, *PVEC_edge_base;

typedef struct gimple_bb_info gimple_bb_info, *Pgimple_bb_info;

typedef struct rtl_bb_info rtl_bb_info, *Prtl_bb_info;

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

typedef struct VEC_gimple_gc VEC_gimple_gc, *PVEC_gimple_gc;

typedef struct pointer_map_t pointer_map_t, *Ppointer_map_t;

typedef struct ssa_operands ssa_operands, *Pssa_operands;

typedef struct stack_local_entry stack_local_entry, *Pstack_local_entry;

typedef struct machine_cfa_state machine_cfa_state, *Pmachine_cfa_state;

typedef enum calling_abi {
    SYSV_ABI=0,
    MS_ABI=1
} calling_abi;

typedef struct constructor_elt_d constructor_elt_d, *Pconstructor_elt_d;

typedef struct constructor_elt_d constructor_elt;

typedef struct edge_def edge_def, *Pedge_def;

typedef struct edge_def * edge;

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

typedef struct VEC_gimple_base VEC_gimple_base, *PVEC_gimple_base;

typedef struct ssa_operand_memory_d ssa_operand_memory_d, *Pssa_operand_memory_d;

typedef union edge_def_insns edge_def_insns, *Pedge_def_insns;

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

struct pt_solution {
    uint anything:1;
    uint nonlocal:1;
    uint escaped:1;
    uint null:1;
    uint vars_contains_global:1;
    uint vars_contains_restrict:1;
    undefined field6_0x1;
    undefined field7_0x2;
    undefined field8_0x3;
    undefined field9_0x4;
    undefined field10_0x5;
    undefined field11_0x6;
    undefined field12_0x7;
    bitmap vars;
};

struct ssa_operands {
    struct ssa_operand_memory_d * operand_memory;
    uint operand_memory_index;
    uint ssa_operand_mem_size;
    uchar ops_active;
    undefined field4_0x11;
    undefined field5_0x12;
    undefined field6_0x13;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
    struct def_optype_d * free_defs;
    struct use_optype_d * free_uses;
};

struct gimple_df {
    htab_t referenced_vars;
    struct VEC_gimple_gc * modified_noreturn_calls;
    struct VEC_tree_gc * ssa_names;
    tree vop;
    struct pt_solution escaped;
    struct pt_solution callused;
    struct pointer_map_t * decls_to_pointers;
    tree free_ssanames;
    htab_t default_defs;
    bitmap syms_to_rename;
    uint in_ssa_p:1;
    undefined field11_0x61;
    undefined field12_0x62;
    undefined field13_0x63;
    undefined field14_0x64;
    undefined field15_0x65;
    undefined field16_0x66;
    undefined field17_0x67;
    struct ssa_operands ssa_operands;
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

struct cgraph_rtl_info {
    uint preferred_incoming_stack_boundary;
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

struct gimple_statement_eh_ctrl {
    struct gimple_statement_base gsbase;
    int region;
    undefined field2_0x24;
    undefined field3_0x25;
    undefined field4_0x26;
    undefined field5_0x27;
};

struct lang_decl {
};

struct gimple_statement_wce {
    struct gimple_statement_base gsbase;
    gimple_seq cleanup;
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

struct cgraph_node_set_def {
    htab_t hashtab;
    struct VEC_cgraph_node_ptr_gc * nodes;
    void * aux;
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

struct VEC_ipa_opt_pass_base {
    uint num;
    uint alloc;
    ipa_opt_pass vec[1];
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

struct VEC_ipa_opt_pass_heap {
    struct VEC_ipa_opt_pass_base base;
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
    struct pt_solution pt;
};

struct gimple_seq_node_d {
    gimple stmt;
    struct gimple_seq_node_d * prev;
    struct gimple_seq_node_d * next;
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

struct eh_region_u_try {
    struct eh_catch_d * first_catch;
    struct eh_catch_d * last_catch;
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

struct cgraph_clone_info {
    struct VEC_ipa_replace_map_p_gc * tree_map;
    bitmap args_to_skip;
    bitmap combined_args_to_skip;
};

struct machine_cfa_state {
    rtx reg;
    long offset;
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

struct VEC_gimple_base {
    uint num;
    uint alloc;
    gimple vec[1];
};

struct VEC_gimple_gc {
    struct VEC_gimple_base base;
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

struct var_ann_d {
    uint base_var_processed:1;
    uint used:1;
    uint need_phi_state:2;
    uint is_heapvar:1;
    uint noalias_state:2;
    undefined field5_0x1;
    undefined field6_0x2;
    undefined field7_0x3;
    uint base_index;
    tree current_def;
};

union tree_type_symtab {
    int address;
    char * pointer;
    struct die_struct * die;
};

struct tree_optimization_option {
    struct tree_common common;
    struct cl_optimization opts;
};

struct inline_summary {
    long estimated_self_stack_size;
    int self_size;
    int size_inlining_benefit;
    int self_time;
    int time_inlining_benefit;
};

struct loops {
};

union basic_block_il_dependent {
    struct gimple_bb_info * gimple;
    struct rtl_bb_info * rtl;
};

struct tree_statement_list {
    struct tree_common common;
    struct tree_statement_list_node * head;
    struct tree_statement_list_node * tail;
};

struct tree_type_decl {
    struct tree_decl_non_common common;
};

struct VEC_cgraph_node_ptr_base {
    uint num;
    uint alloc;
    cgraph_node_ptr vec[1];
};

struct VEC_cgraph_node_ptr_gc {
    struct VEC_cgraph_node_ptr_base base;
};

struct tree_list {
    struct tree_common common;
    tree purpose;
    tree value;
};

struct stack_local_entry {
};

struct lto_file_decl_data {
};

struct tree_target_option {
    struct tree_common common;
    struct cl_target_option opts;
};

union edge_def_insns {
    gimple_seq g;
    rtx r;
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

struct tree_result_decl {
    struct tree_decl_with_rtl common;
    struct var_ann_d * ann;
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

struct ssa_operand_memory_d {
    struct ssa_operand_memory_d * next;
    char mem[1];
    undefined field2_0x9;
    undefined field3_0xa;
    undefined field4_0xb;
    undefined field5_0xc;
    undefined field6_0xd;
    undefined field7_0xe;
    undefined field8_0xf;
};

struct pointer_map_t {
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

struct tree_constructor {
    struct tree_common common;
    struct VEC_constructor_elt_gc * elts;
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

typedef struct noswitch_section noswitch_section, *Pnoswitch_section;

typedef struct section_common section_common, *Psection_common;

typedef uchar (* noswitch_section_callback)(tree, char *, ulong, ulong);

struct section_common {
    uint flags;
};

struct noswitch_section {
    struct section_common common;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    noswitch_section_callback callback;
};

typedef struct unnamed_section unnamed_section, *Punnamed_section;

typedef void (* unnamed_section_callback)(void *);

typedef union section section, *Psection;

typedef struct named_section named_section, *Pnamed_section;

struct named_section {
    struct section_common common;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    char * name;
    tree decl;
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

typedef struct eh_catch_d * eh_catch;

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

typedef enum bb_flags {
    BB_DUPLICATED=-128,
    BB_NEW=1,
    BB_REACHABLE=2,
    BB_IRREDUCIBLE_LOOP=4,
    BB_SUPERBLOCK=8,
    BB_DISABLE_SCHEDULE=16,
    BB_HOT_PARTITION=32,
    BB_COLD_PARTITION=64,
    BB_NON_LOCAL_GOTO_TARGET=256,
    BB_RTL=512,
    BB_FORWARDER_BLOCK=1024,
    BB_NONTHREADABLE_BLOCK=2048
} bb_flags;

typedef struct VEC_edge_heap VEC_edge_heap, *PVEC_edge_heap;

struct VEC_edge_heap {
    struct VEC_edge_base base;
};

typedef struct tree_stmt_iterator tree_stmt_iterator, *Ptree_stmt_iterator;

struct tree_stmt_iterator {
    struct tree_statement_list_node * ptr;
    tree container;
};

typedef enum anon_enum_32.conflict3a2 {
    _sch_isupper=-128,
    _sch_isalpha=-120,
    _sch_isalnum=-116,
    _sch_isgraph=-84,
    _sch_isblank=1,
    _sch_iscntrl=2,
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
} anon_enum_32.conflict3a2;

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

typedef struct expanded_location expanded_location, *Pexpanded_location;

struct expanded_location {
    char * file;
    int line;
    int column;
    uchar sysp;
    undefined field4_0x11;
    undefined field5_0x12;
    undefined field6_0x13;
    undefined field7_0x14;
    undefined field8_0x15;
    undefined field9_0x16;
    undefined field10_0x17;
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

typedef enum symbol_visibility {
    VISIBILITY_DEFAULT=0,
    VISIBILITY_PROTECTED=1,
    VISIBILITY_HIDDEN=2,
    VISIBILITY_INTERNAL=3
} symbol_visibility;

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

typedef enum compiler_param {
    PARAM_STRUCT_REORG_COLD_STRUCT_RATIO=0,
    PARAM_PREDICTABLE_BRANCH_OUTCOME=1,
    PARAM_MAX_INLINE_INSNS_SINGLE=2,
    PARAM_MAX_INLINE_INSNS_AUTO=3,
    PARAM_MAX_INLINE_INSNS_RECURSIVE=4,
    PARAM_MAX_INLINE_INSNS_RECURSIVE_AUTO=5,
    PARAM_MAX_INLINE_RECURSIVE_DEPTH=6,
    PARAM_MAX_INLINE_RECURSIVE_DEPTH_AUTO=7,
    PARAM_MIN_INLINE_RECURSIVE_PROBABILITY=8,
    PARAM_EARLY_INLINER_MAX_ITERATIONS=9,
    PARAM_MAX_VARIABLE_EXPANSIONS=10,
    PARAM_MIN_VECT_LOOP_BOUND=11,
    PARAM_MAX_DELAY_SLOT_INSN_SEARCH=12,
    PARAM_MAX_DELAY_SLOT_LIVE_SEARCH=13,
    PARAM_MAX_PENDING_LIST_LENGTH=14,
    PARAM_LARGE_FUNCTION_INSNS=15,
    PARAM_LARGE_FUNCTION_GROWTH=16,
    PARAM_LARGE_UNIT_INSNS=17,
    PARAM_INLINE_UNIT_GROWTH=18,
    PARAM_IPCP_UNIT_GROWTH=19,
    PARAM_EARLY_INLINING_INSNS=20,
    PARAM_LARGE_STACK_FRAME=21,
    PARAM_STACK_FRAME_GROWTH=22,
    PARAM_MAX_GCSE_MEMORY=23,
    PARAM_GCSE_AFTER_RELOAD_PARTIAL_FRACTION=24,
    PARAM_GCSE_AFTER_RELOAD_CRITICAL_FRACTION=25,
    PARAM_MAX_UNROLLED_INSNS=26,
    PARAM_MAX_AVERAGE_UNROLLED_INSNS=27,
    PARAM_MAX_UNROLL_TIMES=28,
    PARAM_MAX_PEELED_INSNS=29,
    PARAM_MAX_PEEL_TIMES=30,
    PARAM_MAX_COMPLETELY_PEELED_INSNS=31,
    PARAM_MAX_COMPLETELY_PEEL_TIMES=32,
    PARAM_MAX_ONCE_PEELED_INSNS=33,
    PARAM_MAX_UNROLL_ITERATIONS=34,
    PARAM_MAX_UNSWITCH_INSNS=35,
    PARAM_MAX_UNSWITCH_LEVEL=36,
    PARAM_MAX_ITERATIONS_TO_TRACK=37,
    PARAM_MAX_ITERATIONS_COMPUTATION_COST=38,
    PARAM_SMS_MAX_II_FACTOR=39,
    PARAM_SMS_DFA_HISTORY=40,
    PARAM_SMS_LOOP_AVERAGE_COUNT_THRESHOLD=41,
    HOT_BB_COUNT_FRACTION=42,
    HOT_BB_FREQUENCY_FRACTION=43,
    PARAM_ALIGN_THRESHOLD=44,
    PARAM_ALIGN_LOOP_ITERATIONS=45,
    PARAM_MAX_PREDICTED_ITERATIONS=46,
    TRACER_DYNAMIC_COVERAGE_FEEDBACK=47,
    TRACER_DYNAMIC_COVERAGE=48,
    TRACER_MAX_CODE_GROWTH=49,
    TRACER_MIN_BRANCH_RATIO=50,
    TRACER_MIN_BRANCH_PROBABILITY_FEEDBACK=51,
    TRACER_MIN_BRANCH_PROBABILITY=52,
    PARAM_MAX_CROSSJUMP_EDGES=53,
    PARAM_MIN_CROSSJUMP_INSNS=54,
    PARAM_MAX_GROW_COPY_BB_INSNS=55,
    PARAM_MAX_GOTO_DUPLICATION_INSNS=56,
    PARAM_MAX_CSE_PATH_LENGTH=57,
    PARAM_MAX_CSE_INSNS=58,
    PARAM_LIM_EXPENSIVE=59,
    PARAM_IV_CONSIDER_ALL_CANDIDATES_BOUND=60,
    PARAM_IV_MAX_CONSIDERED_USES=61,
    PARAM_IV_ALWAYS_PRUNE_CAND_SET_BOUND=62,
    PARAM_SCEV_MAX_EXPR_SIZE=63,
    PARAM_OMEGA_MAX_VARS=64,
    PARAM_OMEGA_MAX_GEQS=65,
    PARAM_OMEGA_MAX_EQS=66,
    PARAM_OMEGA_MAX_WILD_CARDS=67,
    PARAM_OMEGA_HASH_TABLE_SIZE=68,
    PARAM_OMEGA_MAX_KEYS=69,
    PARAM_OMEGA_ELIMINATE_REDUNDANT_CONSTRAINTS=70,
    PARAM_VECT_MAX_VERSION_FOR_ALIGNMENT_CHECKS=71,
    PARAM_VECT_MAX_VERSION_FOR_ALIAS_CHECKS=72,
    PARAM_MAX_CSELIB_MEMORY_LOCATIONS=73,
    GGC_MIN_EXPAND=74,
    GGC_MIN_HEAPSIZE=75,
    PARAM_MAX_RELOAD_SEARCH_INSNS=76,
    PARAM_MAX_SCHED_REGION_BLOCKS=77,
    PARAM_MAX_SCHED_REGION_INSNS=78,
    PARAM_MAX_PIPELINE_REGION_BLOCKS=79,
    PARAM_MAX_PIPELINE_REGION_INSNS=80,
    PARAM_MIN_SPEC_PROB=81,
    PARAM_MAX_SCHED_EXTEND_REGIONS_ITERS=82,
    PARAM_MAX_SCHED_INSN_CONFLICT_DELAY=83,
    PARAM_SCHED_SPEC_PROB_CUTOFF=84,
    PARAM_SELSCHED_MAX_LOOKAHEAD=85,
    PARAM_SELSCHED_MAX_SCHED_TIMES=86,
    PARAM_SELSCHED_INSNS_TO_RENAME=87,
    PARAM_SCHED_MEM_TRUE_DEP_COST=88,
    PARAM_MAX_LAST_VALUE_RTL=89,
    PARAM_INTEGER_SHARE_LIMIT=90,
    PARAM_MIN_VIRTUAL_MAPPINGS=91,
    PARAM_VIRTUAL_MAPPINGS_TO_SYMS_RATIO=92,
    PARAM_SSP_BUFFER_SIZE=93,
    PARAM_MAX_JUMP_THREAD_DUPLICATION_STMTS=94,
    PARAM_MAX_FIELDS_FOR_FIELD_SENSITIVE=95,
    PARAM_MAX_SCHED_READY_INSNS=96,
    PARAM_PREFETCH_LATENCY=97,
    PARAM_SIMULTANEOUS_PREFETCHES=98,
    PARAM_L1_CACHE_SIZE=99,
    PARAM_L1_CACHE_LINE_SIZE=100,
    PARAM_L2_CACHE_SIZE=101,
    PARAM_USE_CANONICAL_TYPES=102,
    PARAM_MAX_PARTIAL_ANTIC_LENGTH=103,
    PARAM_SCCVN_MAX_SCC_SIZE=104,
    PARAM_IRA_MAX_LOOPS_NUM=105,
    PARAM_IRA_MAX_CONFLICT_TABLE_SIZE=106,
    PARAM_IRA_LOOP_RESERVED_REGS=107,
    PARAM_SWITCH_CONVERSION_BRANCH_RATIO=108,
    PARAM_LOOP_BLOCK_TILE_SIZE=109,
    PARAM_GRAPHITE_MAX_NB_SCOP_PARAMS=110,
    PARAM_GRAPHITE_MAX_BBS_PER_FUNCTION=111,
    PARAM_LOOP_INVARIANT_MAX_BBS_IN_LOOP=112,
    PARAM_SLP_MAX_INSNS_IN_BB=113,
    PARAM_MIN_INSN_TO_PREFETCH_RATIO=114,
    PARAM_PREFETCH_MIN_INSN_TO_MEM_RATIO=115,
    PARAM_MAX_VARTRACK_SIZE=116,
    PARAM_MIN_NONDEBUG_INSN_UID=117,
    PARAM_IPA_SRA_PTR_GROWTH_FACTOR=118,
    LAST_PARAM=119
} compiler_param;

typedef struct param_info param_info, *Pparam_info;

struct param_info {
    char * option;
    int value;
    uchar set;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    int min_value;
    int max_value;
    char * help;
};

typedef ulong HARD_REG_ELT_TYPE;

typedef struct gimple_stmt_iterator gimple_stmt_iterator, *Pgimple_stmt_iterator;

struct gimple_stmt_iterator {
    gimple_seq_node ptr;
    gimple_seq seq;
    basic_block bb;
};

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

typedef enum gimple_code {
    GIMPLE_ERROR_MARK=0,
    GIMPLE_COND=1,
    GIMPLE_DEBUG=2,
    GIMPLE_GOTO=3,
    GIMPLE_LABEL=4,
    GIMPLE_SWITCH=5,
    GIMPLE_ASSIGN=6,
    GIMPLE_ASM=7,
    GIMPLE_CALL=8,
    GIMPLE_RETURN=9,
    GIMPLE_BIND=10,
    GIMPLE_CATCH=11,
    GIMPLE_EH_FILTER=12,
    GIMPLE_EH_MUST_NOT_THROW=13,
    GIMPLE_RESX=14,
    GIMPLE_EH_DISPATCH=15,
    GIMPLE_PHI=16,
    GIMPLE_TRY=17,
    GIMPLE_NOP=18,
    GIMPLE_OMP_ATOMIC_LOAD=19,
    GIMPLE_OMP_ATOMIC_STORE=20,
    GIMPLE_OMP_CONTINUE=21,
    GIMPLE_OMP_CRITICAL=22,
    GIMPLE_OMP_FOR=23,
    GIMPLE_OMP_MASTER=24,
    GIMPLE_OMP_ORDERED=25,
    GIMPLE_OMP_PARALLEL=26,
    GIMPLE_OMP_TASK=27,
    GIMPLE_OMP_RETURN=28,
    GIMPLE_OMP_SECTION=29,
    GIMPLE_OMP_SECTIONS=30,
    GIMPLE_OMP_SECTIONS_SWITCH=31,
    GIMPLE_OMP_SINGLE=32,
    GIMPLE_PREDICT=33,
    GIMPLE_WITH_CLEANUP_EXPR=34,
    LAST_AND_UNUSED_GIMPLE_CODE=35
} gimple_code;

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

typedef struct __mpz_struct __mpz_struct, *P__mpz_struct;

typedef ulong mp_limb_t;

struct __mpz_struct {
    int _mp_alloc;
    int _mp_size;
    mp_limb_t * _mp_d;
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

typedef uchar addr_space_t;

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

typedef struct rtx_def * const_rtx;

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


// WARNING! conflicting data type names: /DWARF/struct_FILE.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct omp_region omp_region, *Pomp_region;

struct omp_region {
    struct omp_region * outer;
    struct omp_region * inner;
    struct omp_region * next;
    basic_block entry;
    basic_block exit;
    basic_block cont;
    tree ws_args;
    enum gimple_code type;
    enum omp_clause_schedule_kind sched_kind;
    uchar is_combined_parallel;
    undefined field10_0x41;
    undefined field11_0x42;
    undefined field12_0x43;
    undefined field13_0x44;
    undefined field14_0x45;
    undefined field15_0x46;
    undefined field16_0x47;
};

typedef struct VEC_tree_heap VEC_tree_heap, *PVEC_tree_heap;

struct VEC_tree_heap {
    struct VEC_tree_base base;
};

typedef struct alias_pair alias_pair, *Palias_pair;

struct alias_pair {
    tree decl;
    tree target;
};

typedef struct const_call_expr_arg_iterator_d const_call_expr_arg_iterator_d, *Pconst_call_expr_arg_iterator_d;

typedef struct const_call_expr_arg_iterator_d const_call_expr_arg_iterator;

struct const_call_expr_arg_iterator_d {
    const_tree t;
    int n;
    int i;
};

typedef struct tree_map tree_map, *Ptree_map;

typedef struct tree_map_base tree_map_base, *Ptree_map_base;

struct tree_map_base {
    tree from;
};

struct tree_map {
    struct tree_map_base base;
    uint hash;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
    tree to;
};

typedef struct tree_priority_map tree_priority_map, *Ptree_priority_map;

typedef ushort priority_type;

struct tree_priority_map {
    struct tree_map_base base;
    priority_type init;
    priority_type fini;
    undefined field3_0xc;
    undefined field4_0xd;
    undefined field5_0xe;
    undefined field6_0xf;
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

typedef struct function_args_iterator function_args_iterator, *Pfunction_args_iterator;

struct function_args_iterator {
    tree fntype;
    tree next;
};

typedef tree (* walk_tree_fn)(tree *, int *, void *);

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

typedef enum operand_equal_flag {
    OEP_ONLY_CONST=1,
    OEP_PURE_SAME=2
} operand_equal_flag;

typedef tree (* walk_tree_lh)(tree *, int *, tree (* )(tree *, int *, void *), void *, struct pointer_set_t *);

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

typedef enum tls_model {
    TLS_MODEL_NONE=0,
    TLS_MODEL_EMULATED=1,
    TLS_MODEL_GLOBAL_DYNAMIC=2,
    TLS_MODEL_REAL=2,
    TLS_MODEL_LOCAL_DYNAMIC=3,
    TLS_MODEL_INITIAL_EXEC=4,
    TLS_MODEL_LOCAL_EXEC=5
} tls_model;

typedef struct gimple_seq_d * const_gimple_seq;

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

typedef struct type_hash type_hash, *Ptype_hash;

struct type_hash {
    ulong hash;
    tree type;
};

typedef struct free_lang_data_d free_lang_data_d, *Pfree_lang_data_d;

struct free_lang_data_d {
    struct VEC_tree_heap * worklist;
    struct pointer_set_t * pset;
    struct VEC_tree_heap * decls;
    struct VEC_tree_heap * types;
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




double_int shwi_to_double_int(long cst)

{
  undefined8 uVar1;
  double_int r;
  
  if (cst < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 0;
  }
  return (double_int)CONCAT88(uVar1,cst);
}



uchar double_int_zero_p(double_int cst)

{
  uchar uVar1;
  long in_RSI;
  long in_RDI;
  
  if ((in_RDI == 0) && (in_RSI == 0)) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



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



size_t VEC_tree_base_embedded_size(int alloc_)

{
  return ((long)alloc_ + 1) * 8;
}



void VEC_tree_base_embedded_init(VEC_tree_base *vec_,int alloc_)

{
  vec_->num = 0;
  vec_->alloc = alloc_;
  return;
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



tree VEC_tree_base_pop(VEC_tree_base *vec_)

{
  tree obj_;
  
  vec_->num = vec_->num - 1;
  return vec_->vec[vec_->num];
}



VEC_tree_gc * VEC_tree_gc_alloc(int alloc_)

{
  VEC_tree_gc *pVVar1;
  
  pVVar1 = (VEC_tree_gc *)vec_gc_p_reserve_exact(0,alloc_);
  return pVVar1;
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



int VEC_alias_pair_base_iterate(VEC_alias_pair_base *vec_,uint ix_,alias_pair **ptr)

{
  int iVar1;
  
  if ((vec_ == (VEC_alias_pair_base *)0x0) || (vec_->num <= ix_)) {
    *ptr = (alias_pair *)0x0;
    iVar1 = 0;
  }
  else {
    *ptr = vec_->vec + ix_;
    iVar1 = 1;
  }
  return iVar1;
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



constructor_elt * VEC_constructor_elt_base_index(VEC_constructor_elt_base *vec_,uint ix_)

{
  return vec_->vec + ix_;
}



int VEC_constructor_elt_base_iterate(VEC_constructor_elt_base *vec_,uint ix_,constructor_elt **ptr)

{
  int iVar1;
  
  if ((vec_ == (VEC_constructor_elt_base *)0x0) || (vec_->num <= ix_)) {
    *ptr = (constructor_elt *)0x0;
    iVar1 = 0;
  }
  else {
    *ptr = vec_->vec + ix_;
    iVar1 = 1;
  }
  return iVar1;
}



constructor_elt *
VEC_constructor_elt_base_quick_push(VEC_constructor_elt_base *vec_,constructor_elt *obj_)

{
  uint uVar1;
  tree ptVar2;
  constructor_elt *slot_;
  
  uVar1 = vec_->num;
  vec_->num = uVar1 + 1;
  if (obj_ != (constructor_elt *)0x0) {
    ptVar2 = obj_->value;
    vec_->vec[uVar1].index = obj_->index;
    vec_->vec[uVar1].value = ptVar2;
  }
  return vec_->vec + uVar1;
}



VEC_constructor_elt_gc * VEC_constructor_elt_gc_alloc(int alloc_)

{
  VEC_constructor_elt_gc *pVVar1;
  
  pVVar1 = (VEC_constructor_elt_gc *)vec_gc_o_reserve_exact(0,alloc_,8,0x10);
  return pVVar1;
}



uchar handled_component_p(const_tree t)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)t;
  if (uVar1 < 0x2f) {
    if (0x28 < uVar1) {
      return '\x01';
    }
  }
  else if (uVar1 == 0x76) {
    return '\x01';
  }
  return '\0';
}



void function_args_iter_init(function_args_iterator *i,tree fntype)

{
  i->fntype = fntype;
  i->next = *(tree *)&fntype->field_0x18;
  return;
}



tree function_args_iter_cond(function_args_iterator *i)

{
  tree ptVar1;
  
  if (i->next == (tree)0x0) {
    ptVar1 = (tree)0x0;
  }
  else {
    ptVar1 = *(tree *)&i->next->field_0x20;
  }
  return ptVar1;
}



void function_args_iter_next(function_args_iterator *i)

{
  if (i->next == (tree)0x0) {
    fancy_abort("tree.h",0x123e,&DAT_00117460);
  }
  i->next = *(tree *)&i->next->field_0x8;
  return;
}



int tree_operand_length(const_tree node)

{
  uint uVar1;
  
  if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)node * 4) == 9) {
    uVar1 = (uint)*(undefined8 *)(*(long *)&node->field_0x28 + 0x18);
  }
  else {
    uVar1 = (uint)(byte)tree_code_length[(int)(uint)*(ushort *)node];
  }
  return uVar1;
}



void init_const_call_expr_arg_iterator(const_tree exp,const_call_expr_arg_iterator *iter)

{
  iter->t = exp;
  iter->n = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -3;
  iter->i = 0;
  return;
}



const_tree next_const_call_expr_arg(const_call_expr_arg_iterator *iter)

{
  const_tree ptVar1;
  const_tree result;
  
  if (iter->i < iter->n) {
    ptVar1 = *(const_tree *)(&iter->t->field_0x28 + (long)(iter->i + 3) * 8);
    iter->i = iter->i + 1;
  }
  else {
    ptVar1 = (const_tree)0x0;
  }
  return ptVar1;
}



const_tree first_const_call_expr_arg(const_tree exp,const_call_expr_arg_iterator *iter)

{
  const_tree ptVar1;
  
  init_const_call_expr_arg_iterator(exp,iter);
  ptVar1 = next_const_call_expr_arg(iter);
  return ptVar1;
}



uchar is_lang_specific(tree t)

{
  uchar uVar1;
  
  if ((*(short *)t == 0x16) || (0xbb < *(ushort *)t)) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



gimple_seq_node gimple_seq_first(const_gimple_seq s)

{
  gimple_seq_node pgVar1;
  
  if (s == (const_gimple_seq)0x0) {
    pgVar1 = (gimple_seq_node)0x0;
  }
  else {
    pgVar1 = s->first;
  }
  return pgVar1;
}



gimple_seq bb_seq(const_basic_block bb)

{
  gimple_seq pgVar1;
  
  if (((bb->flags & 0x200U) == 0) && (bb->il != 0)) {
    pgVar1 = *(gimple_seq *)bb->il;
  }
  else {
    pgVar1 = (gimple_seq)0x0;
  }
  return pgVar1;
}



gimple_code gimple_code(const_gimple g)

{
  return (gimple_code)*(byte *)g;
}



gimple_statement_structure_enum gss_for_code(gimple_code code)

{
  return *(gimple_statement_structure_enum *)(&gss_for_code_ + (ulong)code * 4);
}



gimple_statement_structure_enum gimple_statement_structure(gimple gs)

{
  gimple_code code;
  gimple_statement_structure_enum gVar1;
  
  code = gimple_code(gs);
  gVar1 = gss_for_code(code);
  return gVar1;
}



uchar gimple_has_ops(const_gimple g)

{
  gimple_code gVar1;
  
  gVar1 = gimple_code(g);
  if ((gVar1 != GIMPLE_ERROR_MARK) && (gVar1 = gimple_code(g), gVar1 < GIMPLE_BIND)) {
    return '\x01';
  }
  return '\0';
}



uint gimple_num_ops(const_gimple gs)

{
  return *(uint *)&gs->field_0xc;
}



tree * gimple_ops(gimple gs)

{
  long lVar1;
  gimple_statement_structure_enum gVar2;
  size_t off;
  
  gVar2 = gimple_statement_structure(gs);
  lVar1 = *(long *)(&gimple_ops_offset_ + (ulong)gVar2 * 8);
  if (lVar1 == 0) {
    fancy_abort("gimple.h",0x656,&DAT_00117460);
  }
  return (tree *)(&gs->field_0x0 + lVar1);
}



tree gimple_op(const_gimple gs,uint i)

{
  uchar uVar1;
  tree *pptVar2;
  tree ptVar3;
  
  uVar1 = gimple_has_ops(gs);
  if (uVar1 == '\0') {
    ptVar3 = (tree)0x0;
  }
  else {
    pptVar2 = gimple_ops(gs);
    ptVar3 = pptVar2[i];
  }
  return ptVar3;
}



uint gimple_phi_num_args(const_gimple gs)

{
  return *(uint *)&gs->field_0x24;
}



phi_arg_d * gimple_phi_arg(gimple gs,uint index)

{
  if (*(uint *)&gs->field_0x20 < index) {
    fancy_abort("gimple.h",0xc1f,&DAT_00117460);
  }
  return (phi_arg_d *)(&gs->field_0x30 + (ulong)index * 0x30);
}



gimple_stmt_iterator * gsi_start_bb(gimple_stmt_iterator *__return_storage_ptr__,basic_block bb)

{
  gimple_seq s;
  gimple_seq_node pgVar1;
  gimple_seq seq;
  gimple_stmt_iterator i;
  
  s = bb_seq(bb);
  pgVar1 = gimple_seq_first(s);
  __return_storage_ptr__->ptr = pgVar1;
  __return_storage_ptr__->seq = s;
  __return_storage_ptr__->bb = bb;
  return __return_storage_ptr__;
}



uchar gsi_end_p(gimple_stmt_iterator i)

{
  return i.ptr == (gimple_seq_node)0x0;
}



void gsi_next(gimple_stmt_iterator *i)

{
  i->ptr = i->ptr->next;
  return;
}



gimple gsi_stmt(gimple_stmt_iterator i)

{
  return (i.ptr)->stmt;
}



tree_stmt_iterator tsi_start(tree t)

{
  tree_stmt_iterator i;
  
  return (tree_stmt_iterator)CONCAT88(t,*(undefined8 *)&t->field_0x18);
}



uchar tsi_end_p(tree_stmt_iterator i)

{
  long in_RDI;
  
  return in_RDI == 0;
}



void tsi_next(tree_stmt_iterator *i)

{
  i->ptr = i->ptr->next;
  return;
}



tree * tsi_stmt_ptr(tree_stmt_iterator i)

{
  long in_RDI;
  
  return (tree *)(in_RDI + 0x10);
}



tree * gimple_phi_arg_def_ptr(gimple gs,size_t index)

{
  phi_arg_d *ppVar1;
  
  ppVar1 = gimple_phi_arg(gs,(uint)index);
  return &ppVar1->def;
}



uchar is_global_var(const_tree t)

{
  uchar uVar1;
  
  if (((t->field_0x3 & 4) == 0) && ((t->field_0x3b & 2) == 0)) {
    uVar1 = '\0';
  }
  else {
    uVar1 = '\x01';
  }
  return uVar1;
}



eh_region ehr_next(eh_region r,eh_region start)

{
  eh_region peVar1;
  eh_region local_10;
  
  if (r->inner == (eh_region_d *)0x0) {
    local_10 = r;
    if ((r->next_peer == (eh_region_d *)0x0) || (r == start)) {
      do {
        local_10 = local_10->outer;
        if (local_10 == start) {
          return (eh_region)0x0;
        }
      } while (local_10->next_peer == (eh_region_d *)0x0);
      peVar1 = local_10->next_peer;
    }
    else {
      peVar1 = r->next_peer;
    }
  }
  else {
    peVar1 = r->inner;
  }
  return peVar1;
}



tree_node_structure_enum tree_node_structure_for_code(tree_code code)

{
  uint uVar1;
  tree_node_structure_enum tVar2;
  
  uVar1 = *(uint *)(tree_code_type + (long)code * 4);
  if (uVar1 < 0xb) {
    if (3 < uVar1) {
      return TS_EXP;
    }
    if (uVar1 == 2) {
      return TS_TYPE;
    }
    if (uVar1 == 3) {
      switch(code) {
      case FUNCTION_DECL:
        return TS_FUNCTION_DECL;
      case LABEL_DECL:
        return TS_LABEL_DECL;
      case FIELD_DECL:
        return TS_FIELD_DECL;
      case VAR_DECL:
        return TS_VAR_DECL;
      case CONST_DECL:
        return TS_CONST_DECL;
      case PARM_DECL:
        return TS_PARM_DECL;
      case TYPE_DECL:
        return TS_TYPE_DECL;
      case RESULT_DECL:
        return TS_RESULT_DECL;
      case DEBUG_EXPR_DECL:
        return TS_DECL_WRTL;
      default:
        return TS_DECL_NON_COMMON;
      }
    }
  }
  switch(code) {
  case ERROR_MARK:
    tVar2 = TS_COMMON;
    break;
  case IDENTIFIER_NODE:
    tVar2 = TS_IDENTIFIER;
    break;
  case TREE_LIST:
    tVar2 = TS_LIST;
    break;
  case TREE_VEC:
    tVar2 = TS_VEC;
    break;
  case BLOCK:
    tVar2 = TS_BLOCK;
    break;
  case INTEGER_CST:
    tVar2 = TS_INT_CST;
    break;
  case REAL_CST:
    tVar2 = TS_REAL_CST;
    break;
  case FIXED_CST:
    tVar2 = TS_FIXED_CST;
    break;
  case COMPLEX_CST:
    tVar2 = TS_COMPLEX;
    break;
  case VECTOR_CST:
    tVar2 = TS_VECTOR;
    break;
  case STRING_CST:
    tVar2 = TS_STRING;
    break;
  case CONSTRUCTOR:
    tVar2 = TS_CONSTRUCTOR;
    break;
  case PLACEHOLDER_EXPR:
    tVar2 = TS_COMMON;
    break;
  default:
    if (((uint)code < 0xbc) && (0x8c < (uint)code)) {
      switch(code) {
      case 0x8d:
        return TS_SSA_NAME;
      case 0x93:
        return TS_STATEMENT_LIST;
      case 0x95:
        return TS_BINFO;
      case 0xa3:
        return TS_OMP_CLAUSE;
      case 0xba:
        return TS_OPTIMIZATION;
      case 0xbb:
        return TS_TARGET_OPTION;
      }
    }
  case OFFSET_TYPE:
  case ENUMERAL_TYPE:
  case BOOLEAN_TYPE:
  case INTEGER_TYPE:
  case REAL_TYPE:
  case POINTER_TYPE:
  case FIXED_POINT_TYPE:
  case REFERENCE_TYPE:
  case COMPLEX_TYPE:
  case VECTOR_TYPE:
  case ARRAY_TYPE:
  case RECORD_TYPE:
  case UNION_TYPE:
  case QUAL_UNION_TYPE:
  case VOID_TYPE:
  case FUNCTION_TYPE:
  case METHOD_TYPE:
  case LANG_TYPE:
  case FUNCTION_DECL:
  case LABEL_DECL:
  case FIELD_DECL:
  case VAR_DECL:
  case CONST_DECL:
  case PARM_DECL:
  case TYPE_DECL:
  case RESULT_DECL:
  case DEBUG_EXPR_DECL:
  case NAMESPACE_DECL:
  case IMPORTED_DECL:
  case TRANSLATION_UNIT_DECL:
  case COMPONENT_REF:
  case BIT_FIELD_REF:
  case REALPART_EXPR:
  case IMAGPART_EXPR:
  case ARRAY_REF:
  case ARRAY_RANGE_REF:
  case INDIRECT_REF:
  case ALIGN_INDIRECT_REF:
  case MISALIGNED_INDIRECT_REF:
  case OBJ_TYPE_REF:
  case COMPOUND_EXPR:
  case MODIFY_EXPR:
  case INIT_EXPR:
  case TARGET_EXPR:
  case COND_EXPR:
  case VEC_COND_EXPR:
  case BIND_EXPR:
  case CALL_EXPR:
  case WITH_CLEANUP_EXPR:
  case CLEANUP_POINT_EXPR:
    fancy_abort("tree.c",0x155,&DAT_00117460);
    tVar2 = TS_BASE;
  }
  return tVar2;
}



void initialize_tree_contains_struct(void)

{
  tree_node_structure_enum tVar1;
  uint i;
  tree_code code;
  tree_node_structure_enum ts_code;
  
  for (i = 0; i < 0xbc; i = i + 1) {
    tVar1 = tree_node_structure_for_code(i);
    tree_contains_struct[i][tVar1] = '\x01';
    switch(tVar1) {
    default:
      fancy_abort("tree.c",0x1d9,&DAT_00117460);
      break;
    case TS_COMMON:
      tree_contains_struct[i][0] = '\x01';
      break;
    case TS_INT_CST:
    case TS_REAL_CST:
    case TS_FIXED_CST:
    case TS_VECTOR:
    case TS_STRING:
    case TS_COMPLEX:
    case TS_IDENTIFIER:
    case TS_DECL_MINIMAL:
    case TS_TYPE:
    case TS_LIST:
    case TS_VEC:
    case TS_EXP:
    case TS_SSA_NAME:
    case TS_BLOCK:
    case TS_BINFO:
    case TS_STATEMENT_LIST:
    case TS_CONSTRUCTOR:
    case TS_OMP_CLAUSE:
    case TS_OPTIMIZATION:
    case TS_TARGET_OPTION:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      break;
    case TS_DECL_COMMON:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      tree_contains_struct[i][9] = '\x01';
      break;
    case TS_DECL_WRTL:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      tree_contains_struct[i][9] = '\x01';
      tree_contains_struct[i][10] = '\x01';
      break;
    case TS_DECL_NON_COMMON:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      tree_contains_struct[i][9] = '\x01';
      tree_contains_struct[i][10] = '\x01';
      tree_contains_struct[i][0xb] = '\x01';
      tree_contains_struct[i][0xd] = '\x01';
      break;
    case TS_DECL_WITH_VIS:
    case TS_PARM_DECL:
    case TS_LABEL_DECL:
    case TS_RESULT_DECL:
    case TS_CONST_DECL:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      tree_contains_struct[i][9] = '\x01';
      tree_contains_struct[i][10] = '\x01';
      tree_contains_struct[i][0xb] = '\x01';
      break;
    case TS_FIELD_DECL:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      tree_contains_struct[i][9] = '\x01';
      tree_contains_struct[i][10] = '\x01';
      break;
    case TS_VAR_DECL:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      tree_contains_struct[i][9] = '\x01';
      tree_contains_struct[i][10] = '\x01';
      tree_contains_struct[i][0xb] = '\x01';
      tree_contains_struct[i][0xd] = '\x01';
      break;
    case TS_TYPE_DECL:
    case TS_FUNCTION_DECL:
      tree_contains_struct[i][0] = '\x01';
      tree_contains_struct[i][1] = '\x01';
      tree_contains_struct[i][9] = '\x01';
      tree_contains_struct[i][10] = '\x01';
      tree_contains_struct[i][0xb] = '\x01';
      tree_contains_struct[i][0xd] = '\x01';
      tree_contains_struct[i][0xc] = '\x01';
    }
  }
  if (tree_contains_struct[29][12] == '\0') {
    fancy_abort("tree.c",0x1de,&DAT_00117460);
  }
  if (tree_contains_struct[40][12] == '\0') {
    fancy_abort("tree.c",0x1df,&DAT_00117460);
  }
  if (tree_contains_struct[35][12] == '\0') {
    fancy_abort("tree.c",0x1e0,&DAT_00117460);
  }
  if (tree_contains_struct[33][10] == '\0') {
    fancy_abort("tree.c",0x1e1,&DAT_00117460);
  }
  if (tree_contains_struct[32][10] == '\0') {
    fancy_abort("tree.c",0x1e2,&DAT_00117460);
  }
  if (tree_contains_struct[34][10] == '\0') {
    fancy_abort("tree.c",0x1e3,&DAT_00117460);
  }
  if (tree_contains_struct[36][10] == '\0') {
    fancy_abort("tree.c",0x1e4,&DAT_00117460);
  }
  if (tree_contains_struct[29][10] == '\0') {
    fancy_abort("tree.c",0x1e5,&DAT_00117460);
  }
  if (tree_contains_struct[35][10] == '\0') {
    fancy_abort("tree.c",0x1e6,&DAT_00117460);
  }
  if (tree_contains_struct[40][10] == '\0') {
    fancy_abort("tree.c",0x1e7,&DAT_00117460);
  }
  if (tree_contains_struct[30][10] == '\0') {
    fancy_abort("tree.c",0x1e8,&DAT_00117460);
  }
  if (tree_contains_struct[31][10] == '\0') {
    fancy_abort("tree.c",0x1e9,&DAT_00117460);
  }
  if (tree_contains_struct[33][11] == '\0') {
    fancy_abort("tree.c",0x1ea,&DAT_00117460);
  }
  if (tree_contains_struct[32][11] == '\0') {
    fancy_abort("tree.c",0x1eb,&DAT_00117460);
  }
  if (tree_contains_struct[34][11] == '\0') {
    fancy_abort("tree.c",0x1ec,&DAT_00117460);
  }
  if (tree_contains_struct[36][11] == '\0') {
    fancy_abort("tree.c",0x1ed,&DAT_00117460);
  }
  if (tree_contains_struct[29][11] == '\0') {
    fancy_abort("tree.c",0x1ee,&DAT_00117460);
  }
  if (tree_contains_struct[30][11] == '\0') {
    fancy_abort("tree.c",0x1ef,&DAT_00117460);
  }
  if (tree_contains_struct[33][9] == '\0') {
    fancy_abort("tree.c",0x1f0,&DAT_00117460);
  }
  if (tree_contains_struct[32][9] == '\0') {
    fancy_abort("tree.c",0x1f1,&DAT_00117460);
  }
  if (tree_contains_struct[34][9] == '\0') {
    fancy_abort("tree.c",0x1f2,&DAT_00117460);
  }
  if (tree_contains_struct[36][9] == '\0') {
    fancy_abort("tree.c",499,&DAT_00117460);
  }
  if (tree_contains_struct[29][9] == '\0') {
    fancy_abort("tree.c",500,&DAT_00117460);
  }
  if (tree_contains_struct[35][9] == '\0') {
    fancy_abort("tree.c",0x1f5,&DAT_00117460);
  }
  if (tree_contains_struct[40][9] == '\0') {
    fancy_abort("tree.c",0x1f6,&DAT_00117460);
  }
  if (tree_contains_struct[30][9] == '\0') {
    fancy_abort("tree.c",0x1f7,&DAT_00117460);
  }
  if (tree_contains_struct[31][9] == '\0') {
    fancy_abort("tree.c",0x1f8,&DAT_00117460);
  }
  if (tree_contains_struct[32][13] == '\0') {
    fancy_abort("tree.c",0x1f9,&DAT_00117460);
  }
  if (tree_contains_struct[29][13] == '\0') {
    fancy_abort("tree.c",0x1fa,&DAT_00117460);
  }
  if (tree_contains_struct[35][13] == '\0') {
    fancy_abort("tree.c",0x1fb,&DAT_00117460);
  }
  if (tree_contains_struct[40][13] == '\0') {
    fancy_abort("tree.c",0x1fc,&DAT_00117460);
  }
  if (tree_contains_struct[32][15] == '\0') {
    fancy_abort("tree.c",0x1fd,&DAT_00117460);
  }
  if (tree_contains_struct[31][14] == '\0') {
    fancy_abort("tree.c",0x1fe,&DAT_00117460);
  }
  if (tree_contains_struct[34][16] == '\0') {
    fancy_abort("tree.c",0x1ff,&DAT_00117460);
  }
  if (tree_contains_struct[30][17] == '\0') {
    fancy_abort("tree.c",0x200,&DAT_00117460);
  }
  if (tree_contains_struct[36][18] == '\0') {
    fancy_abort("tree.c",0x201,&DAT_00117460);
  }
  if (tree_contains_struct[33][19] == '\0') {
    fancy_abort("tree.c",0x202,&DAT_00117460);
  }
  if (tree_contains_struct[35][20] == '\0') {
    fancy_abort("tree.c",0x203,&DAT_00117460);
  }
  if (tree_contains_struct[29][21] == '\0') {
    fancy_abort("tree.c",0x204,&DAT_00117460);
  }
  if (tree_contains_struct[39][9] == '\0') {
    fancy_abort("tree.c",0x205,&DAT_00117460);
  }
  if (tree_contains_struct[39][10] == '\0') {
    fancy_abort("tree.c",0x206,&DAT_00117460);
  }
  return;
}



void init_ttree(void)

{
                    // WARNING: Subroutine does not return
  htab_create_alloc(1000,type_hash_hash,type_hash_eq,0,0xb9c08949,0x58b48c18949);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree decl_assembler_name(tree decl)

{
  if ((tree_contains_struct[*(ushort *)decl][0xd] == '\0') || (*(long *)&decl->field_0x78 == 0)) {
    (*_vector_type_mode)(decl);
  }
  return *(tree *)&decl->field_0x78;
}



uchar decl_assembler_name_equal(tree decl,const_tree asmname)

{
  char *pcVar1;
  int iVar2;
  tree ptVar3;
  size_t sVar4;
  bool bVar5;
  uchar test;
  char *decl_str;
  char *asmname_str;
  tree decl_asmname;
  size_t ulp_len;
  size_t ulp_len_1;
  
  ptVar3 = decl_assembler_name(decl);
  bVar5 = false;
  if (ptVar3 == asmname) {
    bVar5 = true;
  }
  else {
    decl_str = *(char **)&ptVar3->field_0x18;
    asmname_str = *(char **)&asmname->field_0x18;
    if (*decl_str == '*') {
      sVar4 = strlen(user_label_prefix);
      pcVar1 = decl_str + 1;
      if (sVar4 == 0) {
        bVar5 = true;
        decl_str = pcVar1;
      }
      else {
        iVar2 = strncmp(pcVar1,user_label_prefix,sVar4);
        if (iVar2 == 0) {
          decl_str = pcVar1 + sVar4;
          bVar5 = true;
        }
      }
    }
    if (*asmname_str == '*') {
      sVar4 = strlen(user_label_prefix);
      pcVar1 = asmname_str + 1;
      if (sVar4 == 0) {
        bVar5 = true;
        asmname_str = pcVar1;
      }
      else {
        iVar2 = strncmp(pcVar1,user_label_prefix,sVar4);
        if (iVar2 == 0) {
          asmname_str = pcVar1 + sVar4;
          bVar5 = true;
        }
      }
    }
    if (bVar5) {
      iVar2 = strcmp(decl_str,asmname_str);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



hashval_t decl_assembler_name_hash(const_tree asmname)

{
  int iVar1;
  hashval_t hVar2;
  size_t __n;
  char *decl_str;
  size_t ulp_len;
  
  if (**(char **)&asmname->field_0x18 == '*') {
    decl_str = (char *)(*(long *)&asmname->field_0x18 + 1);
    __n = strlen(user_label_prefix);
    if (__n != 0) {
      iVar1 = strncmp(decl_str,user_label_prefix,__n);
      if (iVar1 == 0) {
        decl_str = decl_str + __n;
      }
    }
    hVar2 = htab_hash_string(decl_str);
  }
  else {
    hVar2 = htab_hash_string(*(undefined8 *)&asmname->field_0x18);
  }
  return hVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

size_t tree_code_size(tree_code code)

{
  size_t sVar1;
  
  switch(*(undefined4 *)(tree_code_type + (long)code * 4)) {
  case 0:
    if (code == 0xbb) {
      return 0x30;
    }
    if (0xbb < (uint)code) goto switchD_00101c31_caseD_5;
    if (code == 0xba) {
      return 0xd0;
    }
    if (0xba < (uint)code) goto switchD_00101c31_caseD_5;
    if (code == 0xa3) {
switchD_00101c31_caseD_3:
      fancy_abort("tree.c",0x2d1,&DAT_00117460);
      return 0x58;
    }
    if (0xa3 < (uint)code) goto switchD_00101c31_caseD_5;
    if (code == 0x93) {
      return 0x28;
    }
    if (0x93 < (uint)code) goto switchD_00101c31_caseD_5;
    if (code == 0x8d) {
      return 0x58;
    }
    if (0x8d < (uint)code) goto switchD_00101c31_caseD_5;
    if (code == PLACEHOLDER_EXPR) {
LAB_00101cc2:
      return 0x18;
    }
    if (0x3e < (uint)code) goto switchD_00101c31_caseD_5;
    switch(code) {
    case ERROR_MARK:
      goto LAB_00101cc2;
    case IDENTIFIER_NODE:
      sVar1 = user_label_prefix;
      break;
    case TREE_LIST:
      sVar1 = 0x28;
      break;
    case TREE_VEC:
      goto switchD_00101c31_caseD_3;
    case BLOCK:
      sVar1 = 0x58;
      break;
    default:
      if (code == CONSTRUCTOR) {
        return 0x20;
      }
    case 0xbad1abe1:
switchD_00101c31_caseD_5:
      sVar1 = (*_strncmp)(code);
    }
    break;
  case 1:
    switch(code) {
    case INTEGER_CST:
      sVar1 = 0x28;
      break;
    case REAL_CST:
      sVar1 = 0x20;
      break;
    case FIXED_CST:
      sVar1 = 0x20;
      break;
    case COMPLEX_CST:
      sVar1 = 0x28;
      break;
    case VECTOR_CST:
      sVar1 = 0x20;
      break;
    case STRING_CST:
      fancy_abort("tree.c",0x2c2,&DAT_00117460);
    default:
      sVar1 = (*_strncmp)(code);
    }
    break;
  case 2:
    sVar1 = 0xa8;
    break;
  case 3:
    switch(code) {
    case FUNCTION_DECL:
      sVar1 = 0xe0;
      break;
    case LABEL_DECL:
      sVar1 = 0x80;
      break;
    case FIELD_DECL:
      sVar1 = 0x98;
      break;
    case VAR_DECL:
      sVar1 = 0xa0;
      break;
    case CONST_DECL:
      sVar1 = 0x78;
      break;
    case PARM_DECL:
      sVar1 = 0x88;
      break;
    case TYPE_DECL:
      sVar1 = 0xb8;
      break;
    case RESULT_DECL:
      sVar1 = 0x80;
      break;
    case DEBUG_EXPR_DECL:
      sVar1 = 0x78;
      break;
    default:
      sVar1 = 0xb8;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
    sVar1 = ((long)(int)((byte)tree_code_length[code] - 1) + 6) * 8;
    break;
  default:
    fancy_abort("tree.c",0x2e0,&DAT_00117460);
    sVar1 = 0;
  }
  return sVar1;
}



size_t tree_size(const_tree node)

{
  tree_code code_00;
  uint alloc_;
  VEC_tree_base *vec_;
  size_t sVar1;
  tree_code code;
  
  code_00 = (tree_code)*(ushort *)node;
  if (code_00 == 0xa3) {
    return ((long)(int)((byte)omp_clause_num_ops[*(uint *)&node->field_0x1c] - 1) + 8) * 8;
  }
  if ((uint)code_00 < 0xa4) {
    if (code_00 == 0x95) {
      if (node == (const_tree)0xffffffffffffffa8) {
        vec_ = (VEC_tree_base *)0x0;
      }
      else {
        vec_ = (VEC_tree_base *)&node->field_0x58;
      }
      alloc_ = VEC_tree_base_length(vec_);
      sVar1 = VEC_tree_base_embedded_size(alloc_);
      return sVar1 + 0x58;
    }
    if ((uint)code_00 < 0x96) {
      if (code_00 == TREE_VEC) {
        return ((long)(*(int *)&node->field_0x18 + -1) + 5) * 8;
      }
      if (code_00 == STRING_CST) {
        return (long)*(int *)&node->field_0x18 + 0x1d;
      }
    }
  }
  if (*(int *)(tree_code_type + (long)code_00 * 4) == 9) {
    sVar1 = ((long)((int)*(undefined8 *)(*(long *)&node->field_0x28 + 0x18) + -1) + 6) * 8;
  }
  else {
    sVar1 = tree_code_size(code_00);
  }
  return sVar1;
}



tree make_node_stat(tree_code code)

{
  undefined4 uVar1;
  int iVar2;
  size_t __n;
  tree_code_class type;
  tree t;
  size_t length;
  
  uVar1 = *(undefined4 *)(tree_code_type + (long)code * 4);
  __n = tree_code_size(code);
  if (code == IDENTIFIER_NODE) {
    t = (tree)ggc_alloc_stat(__n);
  }
  else {
    t = (tree)ggc_alloc_stat(__n);
  }
  memset(t,0,__n);
  *(short *)t = (short)code;
  switch(uVar1) {
  case 1:
    t->field_0x2 = t->field_0x2 | 2;
    break;
  case 2:
    iVar2 = next_type_uid + 1;
    *(int *)&t->field_0x38 = next_type_uid;
    next_type_uid = iVar2;
    *(undefined4 *)&t->field_0x40 = 8;
    t->field_0x5 = t->field_0x5 & 0xfb;
    *(tree *)&t->field_0x80 = t;
    *(tree *)&t->field_0x98 = t;
    *(undefined8 *)&t->field_0x30 = 0;
    (*weak_global_object_name)(t);
    *(undefined4 *)&t->field_0x44 = 0xffffffff;
    break;
  case 3:
    if (tree_contains_struct[(uint)code][10] != '\0') {
      if (code == FUNCTION_DECL) {
        *(undefined4 *)&t->field_0x40 = 8;
        t->field_0x38 = 0xe;
      }
      else {
        *(undefined4 *)&t->field_0x40 = 1;
      }
    }
    *(undefined4 *)&t->field_0x18 = input_location;
    if (*(short *)t == 0x25) {
      next_debug_decl_uid = next_debug_decl_uid + -1;
      *(int *)&t->field_0x1c = next_debug_decl_uid;
    }
    else {
      iVar2 = next_decl_uid + 1;
      *(int *)&t->field_0x1c = next_decl_uid;
      next_decl_uid = iVar2;
    }
    if (*(short *)t == 0x1e) {
      *(undefined4 *)&t->field_0x78 = 0xffffffff;
    }
    break;
  case 8:
    t->field_0x2 = t->field_0x2 | 1;
    break;
  case 10:
    if ((uint)code < 0x37) {
      if ((uint)code < 0x35) {
        return t;
      }
    }
    else if (4 < (uint)(code + TRY_FINALLY_EXPR)) {
      return t;
    }
    t->field_0x2 = t->field_0x2 | 1;
  }
  return t;
}



tree copy_node_stat(tree node)

{
  int iVar1;
  priority_type priority;
  uint uVar2;
  size_t __n;
  tree from;
  undefined8 *puVar3;
  tree to;
  tree_code code;
  size_t length;
  tree t;
  
  uVar2 = (uint)*(ushort *)node;
  if (uVar2 == 0x93) {
    fancy_abort("tree.c",0x3bb,&DAT_00117460);
  }
  __n = tree_size(node);
  from = (tree)ggc_alloc_stat(__n);
  memcpy(from,node,__n);
  *(undefined8 *)&from->field_0x8 = 0;
  from->field_0x2 = from->field_0x2 & 0xbf;
  from->field_0x5 = from->field_0x5 & 0xfe;
  if (((uVar2 == 0x20) || (uVar2 == 0x22)) || (uVar2 == 0x24)) {
    if (*(short *)from == 0x20) {
      puVar3 = (undefined8 *)&from->field_0x98;
    }
    else if (*(short *)from == 0x22) {
      puVar3 = (undefined8 *)&from->field_0x80;
    }
    else if (*(short *)from == 0x24) {
      puVar3 = (undefined8 *)&from->field_0x78;
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
    *puVar3 = 0;
  }
  if (*(int *)(tree_code_type + (long)(int)uVar2 * 4) == 3) {
    if (uVar2 == 0x25) {
      next_debug_decl_uid = next_debug_decl_uid + -1;
      *(int *)&from->field_0x1c = next_debug_decl_uid;
    }
    else {
      iVar1 = next_decl_uid + 1;
      *(int *)&from->field_0x1c = next_decl_uid;
      next_decl_uid = iVar1;
    }
    if (((*(short *)node == 0x22) || (*(short *)node == 0x20)) && ((node->field_0x3b & 4) != 0)) {
      to = decl_value_expr_lookup(node);
      decl_value_expr_insert(from,to);
      from->field_0x3b = from->field_0x3b | 4;
    }
    if ((*(short *)node == 0x20) && ((node->field_0x92 & 1) != 0)) {
      priority = decl_init_priority_lookup(node);
      decl_init_priority_insert(from,priority);
      from->field_0x92 = from->field_0x92 | 1;
    }
  }
  else if (*(int *)(tree_code_type + (long)(int)uVar2 * 4) == 2) {
    iVar1 = next_type_uid + 1;
    *(int *)&from->field_0x38 = next_type_uid;
    next_type_uid = iVar1;
    *(undefined8 *)&from->field_0x58 = 0;
    *(undefined4 *)&from->field_0x58 = 0;
    if ((from->field_0x3 & 8) != 0) {
      from->field_0x3 = from->field_0x3 & 0xf7;
      *(undefined8 *)&from->field_0x18 = 0;
    }
  }
  return from;
}



tree copy_list(tree list)

{
  tree ptVar1;
  tree ptVar2;
  tree prev;
  tree next;
  tree head;
  
  if (list == (tree)0x0) {
    ptVar1 = (tree)0x0;
  }
  else {
    ptVar1 = copy_node_stat(list);
    prev = ptVar1;
    for (next = *(tree *)&list->field_0x8; next != (tree)0x0; next = *(tree *)&next->field_0x8) {
      ptVar2 = copy_node_stat(next);
      *(tree *)&prev->field_0x8 = ptVar2;
      prev = *(tree *)&prev->field_0x8;
    }
  }
  return ptVar1;
}



tree build_int_cst(tree type,long low)

{
  tree ptVar1;
  long hi;
  tree local_10;
  
  local_10 = type;
  if (type == (tree)0x0) {
    local_10 = integer_types[5];
  }
  if (low < 0) {
    hi = -1;
  }
  else {
    hi = 0;
  }
  ptVar1 = build_int_cst_wide(local_10,low,hi);
  return ptVar1;
}



tree build_int_cstu(tree type,ulong low)

{
  tree ptVar1;
  
  ptVar1 = build_int_cst_wide(type,low,0);
  return ptVar1;
}



tree build_int_cst_type(tree type,long low)

{
  tree ptVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong low1;
  long hi;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (type == (tree)0x0) {
    fancy_abort("tree.c",0x42a,&DAT_00117460);
  }
  if (low < 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = 0;
  }
  fit_double_type(low,uVar2,&low1,&hi,type);
  ptVar1 = build_int_cst_wide(type,low1,hi);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar1;
}



tree build_int_cst_wide_type(tree type,ulong low,long high)

{
  tree ptVar1;
  long local_20;
  ulong local_18;
  tree local_10;
  
  local_20 = high;
  local_18 = low;
  local_10 = type;
  fit_double_type(low,high,&local_18,&local_20,type);
  ptVar1 = build_int_cst_wide(local_10,local_18,local_20);
  return ptVar1;
}



hashval_t int_cst_hash_hash(void *x)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  const_tree t;
  
  uVar1 = *(undefined8 *)((long)x + 0x20);
  uVar2 = *(undefined8 *)((long)x + 0x18);
  uVar3 = (*htab_hash_pointer)(*(undefined8 *)((long)x + 0x10));
  return uVar3 ^ (uint)uVar1 ^ (uint)uVar2;
}



int int_cst_hash_eq(void *x,void *y)

{
  int iVar1;
  const_tree xt;
  const_tree yt;
  
  if (((*(long *)((long)x + 0x10) == *(long *)((long)y + 0x10)) &&
      (*(long *)((long)x + 0x20) == *(long *)((long)y + 0x20))) &&
     (*(long *)((long)x + 0x18) == *(long *)((long)y + 0x18))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



tree build_int_cst_wide(tree type,ulong low,long hi)

{
  int iVar1;
  tree ptVar2;
  tree *pptVar3;
  int ix;
  int limit;
  tree t;
  void **slot;
  
  ix = -1;
  limit = 0;
  if (type == (tree)0x0) {
    fancy_abort("tree.c",0x463,&DAT_00117460);
  }
  iVar1 = (int)low;
  switch(*(undefined2 *)type) {
  case 5:
  case 8:
    if ((type->field_0x2 & 0x20) == 0) {
      limit = *(int *)(compiler_params + 0xb48) + 1;
      if ((hi == 0) && (low < (ulong)(long)*(int *)(compiler_params + 0xb48))) {
        ix = iVar1 + 1;
      }
      else if ((hi == -1) && (low == 0xffffffffffffffff)) {
        ix = 0;
      }
    }
    else {
      limit = *(int *)(compiler_params + 0xb48);
      if ((hi == 0) && (low < (ulong)(long)*(int *)(compiler_params + 0xb48))) {
        ix = iVar1;
      }
    }
    break;
  case 6:
    break;
  case 7:
    limit = 2;
    if ((hi == 0) && (low < 2)) {
      ix = iVar1;
    }
    break;
  default:
    fancy_abort("tree.c",0x490,&DAT_00117460);
    break;
  case 10:
  case 0xc:
    if ((hi == 0) && (low == 0)) {
      limit = 1;
      ix = 0;
    }
  }
  if (ix < 0) {
    *(ulong *)&int_cst_node->field_0x18 = low;
    *(long *)&int_cst_node->field_0x20 = hi;
    *(tree *)&int_cst_node->field_0x10 = type;
    pptVar3 = (tree *)htab_find_slot(int_cst_hash_table,int_cst_node,1);
    t = *pptVar3;
    if (t == (tree)0x0) {
      t = int_cst_node;
      *pptVar3 = int_cst_node;
      int_cst_node = make_node_stat(INTEGER_CST);
    }
  }
  else {
    if ((type->field_0x3 & 8) == 0) {
      type->field_0x3 = type->field_0x3 | 8;
      ptVar2 = make_tree_vec_stat(limit);
      *(tree *)&type->field_0x18 = ptVar2;
    }
    t = *(tree *)(*(long *)&type->field_0x18 + ((long)ix + 4) * 8);
    if (t == (tree)0x0) {
      t = make_node_stat(INTEGER_CST);
      *(ulong *)&t->field_0x18 = low;
      *(long *)&t->field_0x20 = hi;
      *(tree *)&t->field_0x10 = type;
      *(tree *)(*(long *)&type->field_0x18 + ((long)ix + 4) * 8) = t;
    }
    else {
      if (type != *(tree *)&t->field_0x10) {
        fancy_abort("tree.c",0x4a0,&DAT_00117460);
      }
      if (low != *(ulong *)&t->field_0x18) {
        fancy_abort("tree.c",0x4a1,&DAT_00117460);
      }
      if (hi != *(long *)&t->field_0x20) {
        fancy_abort("tree.c",0x4a2,&DAT_00117460);
      }
    }
  }
  return t;
}



tree build_low_bits_mask(tree type,uint bits)

{
  tree ptVar1;
  ulong low;
  long high;
  ulong all_ones;
  
  if ((*(ushort *)&type->field_0x3c & 0x3ff) < bits) {
    fancy_abort("tree.c",0x4d2,&DAT_00117460);
  }
  if ((bits == (*(ushort *)&type->field_0x3c & 0x3ff)) && ((type->field_0x2 & 0x20) == 0)) {
    low = 0xffffffffffffffff;
    high = -1;
  }
  else if (bits < 0x41) {
    low = 0xffffffffffffffff >> (0x40U - (char)bits & 0x3f);
    high = 0;
  }
  else {
    low = 0xffffffffffffffff;
    high = 0xffffffffffffffff >> (0x40U - ((char)bits + -0x40) & 0x3f);
  }
  ptVar1 = build_int_cst_wide(type,low,high);
  return ptVar1;
}



uchar cst_and_fits_in_hwi(const_tree x)

{
  uchar uVar1;
  
  if (*(short *)x == 0x17) {
    if ((*(ushort *)(*(long *)&x->field_0x10 + 0x3c) & 0x3ff) < 0x41) {
      if ((*(long *)&x->field_0x20 == 0) || (*(long *)&x->field_0x20 == -1)) {
        uVar1 = '\x01';
      }
      else {
        uVar1 = '\0';
      }
    }
    else {
      uVar1 = '\0';
    }
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



tree build_vector(tree type,tree vals)

{
  tree ptVar1;
  int over;
  tree link;
  tree v;
  tree value;
  
  ptVar1 = make_node_stat(VECTOR_CST);
  over = 0;
  *(tree *)&ptVar1->field_0x18 = vals;
  *(tree *)&ptVar1->field_0x10 = type;
  for (link = vals; link != (tree)0x0; link = *(tree *)&link->field_0x8) {
    if (*(int *)(tree_code_type + (long)(int)(uint)**(ushort **)&link->field_0x20 * 4) == 1) {
      over = over | (uint)(*(byte *)((long)*(ushort **)&link->field_0x20 + 3) >> 3 & 1);
    }
  }
  ptVar1->field_0x3 = ptVar1->field_0x3 & 0xf7 | (char)over * '\b';
  return ptVar1;
}



tree build_vector_from_ctor(tree type,VEC_constructor_elt_gc *v)

{
  bool bVar1;
  uint uVar2;
  VEC_constructor_elt_base *pVVar3;
  constructor_elt *pcVar4;
  tree ptVar5;
  tree list;
  ulong idx;
  tree value;
  
  list = (tree)0x0;
  idx = 0;
  while( true ) {
    pVVar3 = &v->base;
    if (v == (VEC_constructor_elt_gc *)0x0) {
      pVVar3 = (VEC_constructor_elt_base *)0x0;
    }
    uVar2 = VEC_constructor_elt_base_length(pVVar3);
    if (idx < uVar2) {
      pVVar3 = &v->base;
      if (v == (VEC_constructor_elt_gc *)0x0) {
        pVVar3 = (VEC_constructor_elt_base *)0x0;
      }
      pcVar4 = VEC_constructor_elt_base_index(pVVar3,(uint)idx);
      value = pcVar4->value;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    list = tree_cons_stat((tree)0x0,value,list);
    idx = idx + 1;
  }
  ptVar5 = nreverse(list);
  ptVar5 = build_vector(type,ptVar5);
  return ptVar5;
}



tree build_constructor(tree type,VEC_constructor_elt_gc *vals)

{
  tree ptVar1;
  tree c;
  
  ptVar1 = make_node_stat(CONSTRUCTOR);
  *(tree *)&ptVar1->field_0x10 = type;
  *(VEC_constructor_elt_gc **)&ptVar1->field_0x18 = vals;
  return ptVar1;
}



tree build_constructor_single(tree type,tree index,tree value)

{
  VEC_constructor_elt_base *vals;
  VEC_constructor_elt_base *vec_;
  constructor_elt *pcVar1;
  tree ptVar2;
  VEC_constructor_elt_gc *v;
  constructor_elt *elt;
  tree t;
  
  vals = (VEC_constructor_elt_base *)VEC_constructor_elt_gc_alloc(1);
  vec_ = vals;
  if (vals == (VEC_constructor_elt_base *)0x0) {
    vec_ = (VEC_constructor_elt_base *)0x0;
  }
  pcVar1 = VEC_constructor_elt_base_quick_push(vec_,(constructor_elt *)0x0);
  pcVar1->index = index;
  pcVar1->value = value;
  ptVar2 = build_constructor(type,(VEC_constructor_elt_gc *)vals);
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfd | ((byte)value->field_0x2 >> 1 & 1) * '\x02';
  return ptVar2;
}



tree build_constructor_from_list(tree type,tree vals)

{
  int alloc_;
  VEC_constructor_elt_base *vec_;
  constructor_elt *pcVar1;
  tree ptVar2;
  uchar constant_p;
  tree t;
  VEC_constructor_elt_gc *v;
  constructor_elt *elt;
  tree val;
  
  v = (VEC_constructor_elt_gc *)0x0;
  constant_p = '\x01';
  if (vals != (tree)0x0) {
    alloc_ = list_length(vals);
    v = VEC_constructor_elt_gc_alloc(alloc_);
    for (t = vals; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
      vec_ = &v->base;
      if (&v->base == (VEC_constructor_elt_base *)0x0) {
        vec_ = (VEC_constructor_elt_base *)0x0;
      }
      pcVar1 = VEC_constructor_elt_base_quick_push(vec_,(constructor_elt *)0x0);
      ptVar2 = *(tree *)&t->field_0x20;
      pcVar1->index = *(tree *)&t->field_0x18;
      pcVar1->value = ptVar2;
      if ((ptVar2->field_0x2 & 2) == 0) {
        constant_p = '\0';
      }
    }
  }
  ptVar2 = build_constructor(type,v);
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfd | constant_p * '\x02';
  return ptVar2;
}



tree build_fixed(tree type,fixed_value f)

{
  tree ptVar1;
  void *__dest;
  tree v;
  fixed_value *fp;
  
  ptVar1 = make_node_stat(FIXED_CST);
  __dest = (void *)ggc_alloc_stat(0x18);
  memcpy(__dest,&f,0x18);
  *(tree *)&ptVar1->field_0x10 = type;
  *(void **)&ptVar1->field_0x18 = __dest;
  return ptVar1;
}



tree build_real(tree type,real_value d)

{
  tree ptVar1;
  void *__dest;
  int overflow;
  tree v;
  real_value *dp;
  
  ptVar1 = make_node_stat(REAL_CST);
  __dest = (void *)ggc_alloc_stat(0x20);
  memcpy(__dest,&d,0x20);
  *(tree *)&ptVar1->field_0x10 = type;
  *(void **)&ptVar1->field_0x18 = __dest;
  ptVar1->field_0x3 = ptVar1->field_0x3 & 0xf7;
  return ptVar1;
}



// WARNING: Could not reconcile some variable overlaps

real_value *
real_value_from_int_cst(real_value *__return_storage_ptr__,const_tree type,const_tree i)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  real_value d;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  memset(&d,0,0x20);
  bVar1 = *(byte *)(*(long *)&i->field_0x10 + 2);
  uVar3 = *(undefined8 *)&i->field_0x20;
  uVar4 = *(undefined8 *)&i->field_0x18;
  if (type == (const_tree)0x0) {
    uVar5 = 0;
  }
  else if (*(short *)type == 0xe) {
    uVar5 = vector_type_mode(type);
  }
  else {
    uVar5 = (uint)(byte)type->field_0x3e;
  }
  real_from_integer(&d,uVar5,uVar4,uVar3,bVar1 >> 5 & 1);
  *(undefined8 *)__return_storage_ptr__ = d._0_8_;
  __return_storage_ptr__->sig[0] = d.sig[0];
  __return_storage_ptr__->sig[1] = d.sig[1];
  __return_storage_ptr__->sig[2] = d.sig[2];
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __return_storage_ptr__;
}



tree build_real_from_int_cst(tree type,const_tree i)

{
  byte bVar1;
  tree ptVar2;
  long in_FS_OFFSET;
  int overflow;
  tree v;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = i->field_0x3;
  real_value_from_int_cst((real_value *)&local_38,type,i);
  ptVar2 = build_real(type,(real_value)
                           CONCAT725((int7)(local_20 >> 8),
                                     CONCAT124((char)local_20,
                                               CONCAT816(local_28,CONCAT88(local_30,local_38)))));
  ptVar2->field_0x3 =
       ptVar2->field_0x3 & 0xf7 | (bVar1 >> 3 & 1 | (byte)ptVar2->field_0x3 >> 3 & 1) * '\b';
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar2;
}



tree build_string(int len,char *str)

{
  tree __s;
  size_t length;
  tree s;
  
  __s = (tree)ggc_alloc_stat((long)len + 0x1d);
  memset(__s,0,0x18);
  *(undefined2 *)__s = 0x1c;
  __s->field_0x2 = __s->field_0x2 | 2;
  *(int *)&__s->field_0x18 = len;
  memcpy(&__s->field_0x1c,str,(long)len);
  (&__s->field_0x1c)[len] = 0;
  return __s;
}



tree build_complex(tree type,tree real,tree imag)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = make_node_stat(COMPLEX_CST);
  *(tree *)&ptVar1->field_0x18 = real;
  *(tree *)&ptVar1->field_0x20 = imag;
  if (type == (tree)0x0) {
    type = build_complex_type(*(tree *)&real->field_0x10);
  }
  *(tree *)&ptVar1->field_0x10 = type;
  ptVar1->field_0x3 =
       ptVar1->field_0x3 & 0xf7 |
       ((byte)real->field_0x3 >> 3 & 1 | (byte)imag->field_0x3 >> 3 & 1) * '\b';
  return ptVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree build_one_cst(tree type)

{
  uint uVar1;
  tree real;
  tree ptVar2;
  int i;
  tree cst;
  tree scalar;
  
  switch(*(undefined2 *)type) {
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xc:
    ptVar2 = build_int_cst(type,1);
    break;
  case 9:
    ptVar2 = build_real(type,(real_value)
                             CONCAT725((int7)((ulong)_fold_convert_loc >> 8),
                                       CONCAT124((char)_fold_convert_loc,
                                                 CONCAT816(fconst1,CONCAT88(mode_class,dconst1)))));
    break;
  case 0xb:
    if (*(short *)type == 0xe) {
      uVar1 = vector_type_mode(type);
    }
    else {
      uVar1 = (uint)(byte)type->field_0x3e;
    }
    if (*(char *)((long)&mode_class + (ulong)uVar1) != '\x06') {
      if (*(short *)type == 0xe) {
        uVar1 = vector_type_mode(type);
      }
      else {
        uVar1 = (uint)(byte)type->field_0x3e;
      }
      if (*(char *)((long)&mode_class + (ulong)uVar1) != '\a') {
        fancy_abort("tree.c",0x5ea,&DAT_00117460);
      }
    }
    if (*(short *)type == 0xe) {
      uVar1 = vector_type_mode(type);
    }
    else {
      uVar1 = (uint)(byte)type->field_0x3e;
    }
    ptVar2 = build_fixed(type,*(fixed_value *)(&fconst1 + (ulong)(uVar1 - 0x1e) * 3));
    break;
  case 0xd:
    ptVar2 = (tree)fold_convert_loc(0,*(undefined8 *)&type->field_0x10,global_trees[13]);
    real = build_one_cst(*(tree *)&type->field_0x10);
    ptVar2 = build_complex(type,real,ptVar2);
    break;
  case 0xe:
    ptVar2 = build_one_cst(*(tree *)&type->field_0x10);
    cst = (tree)0x0;
    i = (int)(1 << ((byte)*(undefined2 *)&type->field_0x3c & 0x3f));
    while (i = i + -1, -1 < i) {
      cst = tree_cons_stat((tree)0x0,ptVar2,cst);
    }
    ptVar2 = build_vector(type,cst);
    break;
  default:
    fancy_abort("tree.c",0x602,&DAT_00117460);
    ptVar2 = (tree)0x0;
  }
  return ptVar2;
}



tree make_tree_binfo_stat(uint base_binfos)

{
  size_t sVar1;
  tree __s;
  VEC_tree_base *vec_;
  size_t length;
  tree t;
  
  sVar1 = VEC_tree_base_embedded_size(base_binfos);
  __s = (tree)ggc_alloc_stat(sVar1 + 0x58);
  memset(__s,0,0x58);
  *(undefined2 *)__s = 0x95;
  if (__s == (tree)0xffffffffffffffa8) {
    vec_ = (VEC_tree_base *)0x0;
  }
  else {
    vec_ = (VEC_tree_base *)&__s->field_0x58;
  }
  VEC_tree_base_embedded_init(vec_,base_binfos);
  return __s;
}



tree make_tree_vec_stat(int len)

{
  int iVar1;
  tree __s;
  int length;
  tree t;
  
  iVar1 = (len + 4) * 8;
  __s = (tree)ggc_alloc_stat((long)iVar1);
  memset(__s,0,(long)iVar1);
  *(undefined2 *)__s = 3;
  *(int *)&__s->field_0x18 = len;
  return __s;
}



int integer_zerop(const_tree expr)

{
  int iVar1;
  tree ptVar2;
  
  ptVar2 = tree_strip_nop_conversions(expr);
  if (((*(short *)ptVar2 == 0x17) && (*(long *)&ptVar2->field_0x18 == 0)) &&
     (*(long *)&ptVar2->field_0x20 == 0)) {
LAB_001034c5:
    iVar1 = 1;
  }
  else {
    if (*(short *)ptVar2 == 0x1a) {
      iVar1 = integer_zerop(*(const_tree *)&ptVar2->field_0x18);
      if (iVar1 != 0) {
        iVar1 = integer_zerop(*(const_tree *)&ptVar2->field_0x20);
        if (iVar1 != 0) goto LAB_001034c5;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



int integer_onep(const_tree expr)

{
  int iVar1;
  tree ptVar2;
  
  ptVar2 = tree_strip_nop_conversions(expr);
  if (((*(short *)ptVar2 == 0x17) && (*(long *)&ptVar2->field_0x18 == 1)) &&
     (*(long *)&ptVar2->field_0x20 == 0)) {
LAB_00103550:
    iVar1 = 1;
  }
  else {
    if (*(short *)ptVar2 == 0x1a) {
      iVar1 = integer_onep(*(const_tree *)&ptVar2->field_0x18);
      if (iVar1 != 0) {
        iVar1 = integer_zerop(*(const_tree *)&ptVar2->field_0x20);
        if (iVar1 != 0) goto LAB_00103550;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



int integer_all_onesp(const_tree expr)

{
  int iVar1;
  uint uVar2;
  tree ptVar3;
  int uns;
  int prec;
  int shift_amount;
  long high_value;
  
  ptVar3 = tree_strip_nop_conversions(expr);
  if (((*(short *)ptVar3 == 0x1a) &&
      (iVar1 = integer_all_onesp(*(const_tree *)&ptVar3->field_0x18), iVar1 != 0)) &&
     (iVar1 = integer_zerop(*(const_tree *)&ptVar3->field_0x20), iVar1 != 0)) {
    return 1;
  }
  if (*(short *)ptVar3 == 0x17) {
    if ((*(long *)&ptVar3->field_0x18 == -1) && (*(long *)&ptVar3->field_0x20 == -1)) {
      uVar2 = 1;
    }
    else if ((*(byte *)(*(long *)&ptVar3->field_0x10 + 2) >> 5 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (**(short **)&ptVar3->field_0x10 == 0xe) {
        uVar2 = vector_type_mode(*(undefined8 *)&ptVar3->field_0x10);
      }
      else {
        uVar2 = (uint)*(byte *)(*(long *)&ptVar3->field_0x10 + 0x3e);
      }
      uVar2 = (uint)(byte)(&mode_size)[uVar2] * 8;
      if (uVar2 < 0x40) {
        uVar2 = (uint)(*(long *)&ptVar3->field_0x18 == (1 << ((byte)uVar2 & 0x3f)) + -1);
      }
      else {
        iVar1 = uVar2 - 0x40;
        if (0x40 < iVar1) {
          fancy_abort("tree.c",0x67f,&DAT_00117460);
        }
        if (iVar1 == 0x40) {
          high_value = -1;
        }
        else {
          high_value = (1 << ((byte)iVar1 & 0x3f)) + -1;
        }
        if ((*(long *)&ptVar3->field_0x18 == -1) && (high_value == *(long *)&ptVar3->field_0x20)) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int integer_pow2p(const_tree expr)

{
  ushort uVar1;
  int iVar2;
  tree ptVar3;
  int prec;
  long high;
  long low;
  
  ptVar3 = tree_strip_nop_conversions(expr);
  if (((*(short *)ptVar3 == 0x1a) &&
      (iVar2 = integer_pow2p(*(const_tree *)&ptVar3->field_0x18), iVar2 != 0)) &&
     (iVar2 = integer_zerop(*(const_tree *)&ptVar3->field_0x20), iVar2 != 0)) {
    return 1;
  }
  if (*(short *)ptVar3 == 0x17) {
    uVar1 = *(ushort *)(*(long *)&ptVar3->field_0x10 + 0x3c) & 0x3ff;
    high = *(long *)&ptVar3->field_0x20;
    low = *(long *)&ptVar3->field_0x18;
    if (uVar1 != 0x80) {
      if (uVar1 < 0x41) {
        high = 0;
        if (uVar1 < 0x40) {
          low = low & ~(-1 << ((byte)uVar1 & 0x3f));
        }
      }
      else {
        high = high & ~(-1 << ((byte)uVar1 - 0x40 & 0x3f));
      }
    }
    if ((high == 0) && (low == 0)) {
      iVar2 = 0;
    }
    else if (((high == 0) && ((low - 1U & low) == 0)) || ((low == 0 && ((high - 1U & high) == 0))))
    {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int integer_nonzerop(const_tree expr)

{
  int iVar1;
  tree ptVar2;
  
  ptVar2 = tree_strip_nop_conversions(expr);
  if (((*(short *)ptVar2 != 0x17) ||
      ((*(long *)&ptVar2->field_0x18 == 0 && (*(long *)&ptVar2->field_0x20 == 0)))) &&
     ((*(short *)ptVar2 != 0x1a ||
      ((iVar1 = integer_nonzerop(*(const_tree *)&ptVar2->field_0x18), iVar1 == 0 &&
       (iVar1 = integer_nonzerop(*(const_tree *)&ptVar2->field_0x20), iVar1 == 0)))))) {
    return 0;
  }
  return 1;
}



int fixed_zerop(const_tree expr)

{
  uchar uVar1;
  undefined8 in_stack_ffffffffffffffe8;
  
  if ((*(short *)expr == 0x19) &&
     (uVar1 = double_int_zero_p((double_int)CONCAT88(expr,in_stack_ffffffffffffffe8)), uVar1 != '\0'
     )) {
    return 1;
  }
  return 0;
}



int tree_log2(const_tree expr)

{
  ushort uVar1;
  int iVar2;
  tree ptVar3;
  int prec;
  long high;
  long low;
  
  ptVar3 = tree_strip_nop_conversions(expr);
  if (*(short *)ptVar3 == 0x1a) {
    iVar2 = tree_log2(*(const_tree *)&ptVar3->field_0x18);
  }
  else {
    uVar1 = *(ushort *)(*(long *)&ptVar3->field_0x10 + 0x3c) & 0x3ff;
    high = *(long *)&ptVar3->field_0x20;
    low = *(long *)&ptVar3->field_0x18;
    if (uVar1 != 0x80) {
      if (uVar1 < 0x41) {
        high = 0;
        if (uVar1 < 0x40) {
          low = low & ~(-1 << ((byte)uVar1 & 0x3f));
        }
      }
      else {
        high = high & ~(-1 << ((byte)uVar1 - 0x40 & 0x3f));
      }
    }
    if (high == 0) {
      iVar2 = exact_log2(low);
    }
    else {
      iVar2 = exact_log2(high);
      iVar2 = iVar2 + 0x40;
    }
  }
  return iVar2;
}



int tree_floor_log2(const_tree expr)

{
  ushort uVar1;
  int iVar2;
  tree ptVar3;
  int prec;
  long high;
  long low;
  
  ptVar3 = tree_strip_nop_conversions(expr);
  if (*(short *)ptVar3 == 0x1a) {
    iVar2 = tree_log2(*(const_tree *)&ptVar3->field_0x18);
  }
  else {
    uVar1 = *(ushort *)(*(long *)&ptVar3->field_0x10 + 0x3c) & 0x3ff;
    high = *(long *)&ptVar3->field_0x20;
    low = *(long *)&ptVar3->field_0x18;
    if ((uVar1 != 0x80) && (uVar1 != 0)) {
      if (uVar1 < 0x41) {
        high = 0;
        if (uVar1 < 0x40) {
          low = low & ~(-1 << ((byte)uVar1 & 0x3f));
        }
      }
      else {
        high = high & ~(-1 << ((byte)uVar1 - 0x40 & 0x3f));
      }
    }
    if (high == 0) {
      iVar2 = floor_log2(low);
    }
    else {
      iVar2 = floor_log2(high);
      iVar2 = iVar2 + 0x40;
    }
  }
  return iVar2;
}



int real_zerop(const_tree expr)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  tree ptVar4;
  
  ptVar4 = tree_strip_nop_conversions(expr);
  if (*(short *)ptVar4 == 0x18) {
    cVar1 = real_compare(0x65,*(undefined8 *)&ptVar4->field_0x18,&dconst0);
    if (cVar1 == '\0') goto LAB_00103b9d;
    if (**(short **)&ptVar4->field_0x10 == 0xe) {
      uVar2 = vector_type_mode(*(undefined8 *)&ptVar4->field_0x10);
    }
    else {
      uVar2 = (uint)*(byte *)(*(long *)&ptVar4->field_0x10 + 0x3e);
    }
    if (*(char *)((long)&mode_class + (ulong)uVar2) == '\t') goto LAB_00103b9d;
LAB_00103bd2:
    iVar3 = 1;
  }
  else {
LAB_00103b9d:
    if (*(short *)ptVar4 == 0x1a) {
      iVar3 = real_zerop(*(const_tree *)&ptVar4->field_0x18);
      if (iVar3 != 0) {
        iVar3 = real_zerop(*(const_tree *)&ptVar4->field_0x20);
        if (iVar3 != 0) goto LAB_00103bd2;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



int real_onep(const_tree expr)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  tree ptVar4;
  
  ptVar4 = tree_strip_nop_conversions(expr);
  if (*(short *)ptVar4 == 0x18) {
    cVar1 = real_compare(0x65,*(undefined8 *)&ptVar4->field_0x18,&dconst1);
    if (cVar1 == '\0') goto LAB_00103c70;
    if (**(short **)&ptVar4->field_0x10 == 0xe) {
      uVar2 = vector_type_mode(*(undefined8 *)&ptVar4->field_0x10);
    }
    else {
      uVar2 = (uint)*(byte *)(*(long *)&ptVar4->field_0x10 + 0x3e);
    }
    if (*(char *)((long)&mode_class + (ulong)uVar2) == '\t') goto LAB_00103c70;
LAB_00103ca5:
    iVar3 = 1;
  }
  else {
LAB_00103c70:
    if (*(short *)ptVar4 == 0x1a) {
      iVar3 = real_onep(*(const_tree *)&ptVar4->field_0x18);
      if (iVar3 != 0) {
        iVar3 = real_zerop(*(const_tree *)&ptVar4->field_0x20);
        if (iVar3 != 0) goto LAB_00103ca5;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



int real_twop(const_tree expr)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  tree ptVar4;
  
  ptVar4 = tree_strip_nop_conversions(expr);
  if (*(short *)ptVar4 == 0x18) {
    cVar1 = real_compare(0x65,*(undefined8 *)&ptVar4->field_0x18,&dconst2);
    if (cVar1 == '\0') goto LAB_00103d43;
    if (**(short **)&ptVar4->field_0x10 == 0xe) {
      uVar2 = vector_type_mode(*(undefined8 *)&ptVar4->field_0x10);
    }
    else {
      uVar2 = (uint)*(byte *)(*(long *)&ptVar4->field_0x10 + 0x3e);
    }
    if (*(char *)((long)&mode_class + (ulong)uVar2) == '\t') goto LAB_00103d43;
LAB_00103d78:
    iVar3 = 1;
  }
  else {
LAB_00103d43:
    if (*(short *)ptVar4 == 0x1a) {
      iVar3 = real_twop(*(const_tree *)&ptVar4->field_0x18);
      if (iVar3 != 0) {
        iVar3 = real_zerop(*(const_tree *)&ptVar4->field_0x20);
        if (iVar3 != 0) goto LAB_00103d78;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



int real_minus_onep(const_tree expr)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  tree ptVar4;
  
  ptVar4 = tree_strip_nop_conversions(expr);
  if (*(short *)ptVar4 == 0x18) {
    cVar1 = real_compare(0x65,*(undefined8 *)&ptVar4->field_0x18,&dconstm1);
    if (cVar1 == '\0') goto LAB_00103e16;
    if (**(short **)&ptVar4->field_0x10 == 0xe) {
      uVar2 = vector_type_mode(*(undefined8 *)&ptVar4->field_0x10);
    }
    else {
      uVar2 = (uint)*(byte *)(*(long *)&ptVar4->field_0x10 + 0x3e);
    }
    if (*(char *)((long)&mode_class + (ulong)uVar2) == '\t') goto LAB_00103e16;
LAB_00103e4b:
    iVar3 = 1;
  }
  else {
LAB_00103e16:
    if (*(short *)ptVar4 == 0x1a) {
      iVar3 = real_minus_onep(*(const_tree *)&ptVar4->field_0x18);
      if (iVar3 != 0) {
        iVar3 = real_zerop(*(const_tree *)&ptVar4->field_0x20);
        if (iVar3 != 0) goto LAB_00103e4b;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



int really_constant_p(const_tree exp)

{
  const_tree local_10;
  
  for (local_10 = exp;
      ((*(short *)local_10 == 0x74 || (*(short *)local_10 == 0x71)) || (*(short *)local_10 == 0x75))
      ; local_10 = *(const_tree *)&local_10->field_0x28) {
  }
  return (int)((byte)local_10->field_0x2 >> 1 & 1);
}



tree value_member(tree elem,tree list)

{
  tree local_18;
  
  local_18 = list;
  while( true ) {
    if (local_18 == (tree)0x0) {
      return (tree)0x0;
    }
    if (elem == *(tree *)&local_18->field_0x20) break;
    local_18 = *(tree *)&local_18->field_0x8;
  }
  return local_18;
}



tree purpose_member(const_tree elem,tree list)

{
  tree local_18;
  
  local_18 = list;
  while( true ) {
    if (local_18 == (tree)0x0) {
      return (tree)0x0;
    }
    if (elem == *(const_tree *)&local_18->field_0x18) break;
    local_18 = *(tree *)&local_18->field_0x8;
  }
  return local_18;
}



tree chain_index(int idx,tree chain)

{
  tree local_18;
  int local_c;
  
  local_18 = chain;
  for (local_c = idx; (local_18 != (tree)0x0 && (0 < local_c)); local_c = local_c + -1) {
    local_18 = *(tree *)&local_18->field_0x8;
  }
  return local_18;
}



int chain_member(const_tree elem,const_tree chain)

{
  const_tree local_18;
  
  local_18 = chain;
  while( true ) {
    if (local_18 == (const_tree)0x0) {
      return 0;
    }
    if (elem == local_18) break;
    local_18 = *(const_tree *)&local_18->field_0x8;
  }
  return 1;
}



int list_length(const_tree t)

{
  int len;
  const_tree p;
  
  len = 0;
  for (p = t; p != (const_tree)0x0; p = *(const_tree *)&p->field_0x8) {
    len = len + 1;
  }
  return len;
}



int fields_length(const_tree type)

{
  int count;
  tree t;
  
  t = *(tree *)&type->field_0x18;
  count = 0;
  for (; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
    if (*(short *)t == 0x1f) {
      count = count + 1;
    }
  }
  return count;
}



tree first_field(const_tree type)

{
  tree t;
  
  for (t = *(tree *)&type->field_0x18; (t != (tree)0x0 && (*(short *)t != 0x1f));
      t = *(tree *)&t->field_0x8) {
  }
  return t;
}



tree chainon(tree op1,tree op2)

{
  tree ptVar1;
  tree t1;
  
  ptVar1 = op2;
  if ((op1 != (tree)0x0) && (ptVar1 = op1, t1 = op1, op2 != (tree)0x0)) {
    for (; *(long *)&t1->field_0x8 != 0; t1 = *(tree *)&t1->field_0x8) {
    }
    *(tree *)&t1->field_0x8 = op2;
  }
  return ptVar1;
}



tree tree_last(tree chain)

{
  tree ptVar1;
  tree local_20;
  tree next;
  
  ptVar1 = chain;
  local_20 = chain;
  if (chain != (tree)0x0) {
    do {
      local_20 = ptVar1;
      ptVar1 = *(tree *)&local_20->field_0x8;
    } while (*(tree *)&local_20->field_0x8 != (tree)0x0);
  }
  return local_20;
}



tree nreverse(tree t)

{
  tree ptVar1;
  tree prev;
  tree decl;
  tree next;
  
  prev = (tree)0x0;
  decl = t;
  while (decl != (tree)0x0) {
    ptVar1 = *(tree *)&decl->field_0x8;
    *(tree *)&decl->field_0x8 = prev;
    prev = decl;
    decl = ptVar1;
  }
  return prev;
}



tree build_tree_list_stat(tree parm,tree value)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = make_node_stat(TREE_LIST);
  *(tree *)&ptVar1->field_0x18 = parm;
  *(tree *)&ptVar1->field_0x20 = value;
  return ptVar1;
}



tree build_tree_list_vec_stat(VEC_tree_gc *vec)

{
  int iVar1;
  tree ptVar2;
  VEC_tree_base *vec_;
  long in_FS_OFFSET;
  uint i;
  tree ret;
  tree t;
  tree *pp;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ret = (tree)0x0;
  pp = &ret;
  i = 0;
  while( true ) {
    vec_ = &vec->base;
    if (vec == (VEC_tree_gc *)0x0) {
      vec_ = (VEC_tree_base *)0x0;
    }
    iVar1 = VEC_tree_base_iterate(vec_,i,&t);
    if (iVar1 == 0) break;
    ptVar2 = build_tree_list_stat((tree)0x0,t);
    *pp = ptVar2;
    pp = (tree *)&(*pp)->field_0x8;
    i = i + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ret;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree tree_cons_stat(tree purpose,tree value,tree chain)

{
  tree __s;
  tree node;
  
  __s = (tree)ggc_alloc_stat(0x28);
  memset(__s,0,0x18);
  *(undefined2 *)__s = 2;
  *(tree *)&__s->field_0x8 = chain;
  *(tree *)&__s->field_0x18 = purpose;
  *(tree *)&__s->field_0x20 = value;
  return __s;
}



tree ctor_to_list(tree ctor)

{
  bool bVar1;
  uint uVar2;
  tree ptVar3;
  constructor_elt *pcVar4;
  VEC_constructor_elt_base *pVVar5;
  long in_FS_OFFSET;
  uint ix;
  tree list;
  tree *p;
  tree purpose;
  tree val;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  list = (tree)0x0;
  p = &list;
  ix = 0;
  while( true ) {
    if (*(long *)&ctor->field_0x18 == 0) {
      pVVar5 = (VEC_constructor_elt_base *)0x0;
    }
    else {
      pVVar5 = *(VEC_constructor_elt_base **)&ctor->field_0x18;
    }
    uVar2 = VEC_constructor_elt_base_length(pVVar5);
    if (ix < uVar2) {
      if (*(long *)&ctor->field_0x18 == 0) {
        pVVar5 = (VEC_constructor_elt_base *)0x0;
      }
      else {
        pVVar5 = *(VEC_constructor_elt_base **)&ctor->field_0x18;
      }
      pcVar4 = VEC_constructor_elt_base_index(pVVar5,ix);
      val = pcVar4->value;
      if (*(long *)&ctor->field_0x18 == 0) {
        pVVar5 = (VEC_constructor_elt_base *)0x0;
      }
      else {
        pVVar5 = *(VEC_constructor_elt_base **)&ctor->field_0x18;
      }
      pcVar4 = VEC_constructor_elt_base_index(pVVar5,ix);
      purpose = pcVar4->index;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    ptVar3 = build_tree_list_stat(purpose,val);
    *p = ptVar3;
    p = (tree *)&(*p)->field_0x8;
    ix = ix + 1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return list;
}



VEC_tree_gc * ctor_to_vec(tree ctor)

{
  bool bVar1;
  uint uVar2;
  VEC_tree_base *pVVar3;
  VEC_tree_base *vec_;
  constructor_elt *pcVar4;
  VEC_constructor_elt_base *pVVar5;
  uint ix;
  tree val;
  VEC_tree_gc *vec;
  
  if (*(long *)&ctor->field_0x18 == 0) {
    pVVar5 = (VEC_constructor_elt_base *)0x0;
  }
  else {
    pVVar5 = *(VEC_constructor_elt_base **)&ctor->field_0x18;
  }
  uVar2 = VEC_constructor_elt_base_length(pVVar5);
  pVVar3 = (VEC_tree_base *)VEC_tree_gc_alloc(uVar2);
  ix = 0;
  while( true ) {
    if (*(long *)&ctor->field_0x18 == 0) {
      pVVar5 = (VEC_constructor_elt_base *)0x0;
    }
    else {
      pVVar5 = *(VEC_constructor_elt_base **)&ctor->field_0x18;
    }
    uVar2 = VEC_constructor_elt_base_length(pVVar5);
    if (ix < uVar2) {
      if (*(long *)&ctor->field_0x18 == 0) {
        pVVar5 = (VEC_constructor_elt_base *)0x0;
      }
      else {
        pVVar5 = *(VEC_constructor_elt_base **)&ctor->field_0x18;
      }
      pcVar4 = VEC_constructor_elt_base_index(pVVar5,ix);
      val = pcVar4->value;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    vec_ = pVVar3;
    if (pVVar3 == (VEC_tree_base *)0x0) {
      vec_ = (VEC_tree_base *)0x0;
    }
    VEC_tree_base_quick_push(vec_,val);
    ix = ix + 1;
  }
  return (VEC_tree_gc *)pVVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree size_in_bytes(const_tree type)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = global_trees[13];
  if (type != global_trees[0]) {
    ptVar1 = *(tree *)(*(long *)&type->field_0x80 + 0x28);
    if (ptVar1 == (tree)0x0) {
      (*_mode_for_size)(0,*(long *)&type->field_0x80);
      ptVar1 = global_trees[17];
    }
  }
  return ptVar1;
}



long int_size_in_bytes(const_tree type)

{
  short *psVar1;
  long lVar2;
  tree t;
  
  if (type == global_trees[0]) {
    lVar2 = 0;
  }
  else {
    psVar1 = *(short **)(*(long *)&type->field_0x80 + 0x28);
    if ((((psVar1 == (short *)0x0) || (*psVar1 != 0x17)) || (*(long *)(psVar1 + 0x10) != 0)) ||
       (*(long *)(psVar1 + 0xc) < 0)) {
      lVar2 = -1;
    }
    else {
      lVar2 = *(long *)(psVar1 + 0xc);
    }
  }
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long max_int_size_in_bytes(const_tree type)

{
  int iVar1;
  const_tree ptVar2;
  long size;
  tree size_tree;
  
  size = -1;
  if ((*(short *)type == 0xf) &&
     (ptVar2 = *(const_tree *)&type->field_0x70, ptVar2 != (const_tree)0x0)) {
    iVar1 = host_integerp(ptVar2,1);
    if (iVar1 != 0) {
      size = tree_low_cst(ptVar2,1);
    }
  }
  if (size == -1) {
    ptVar2 = (const_tree)(*_make_unsigned_type)(type);
    if (ptVar2 != (const_tree)0x0) {
      iVar1 = host_integerp(ptVar2,1);
      if (iVar1 != 0) {
        size = tree_low_cst(ptVar2,1);
      }
    }
  }
  return size;
}



tree tree_expr_size(const_tree exp)

{
  tree ptVar1;
  
  if ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) == 3) &&
     (*(long *)&exp->field_0x48 != 0)) {
    ptVar1 = *(tree *)&exp->field_0x48;
  }
  else {
    ptVar1 = size_in_bytes(*(const_tree *)&exp->field_0x10);
  }
  return ptVar1;
}



tree bit_position(const_tree field)

{
  tree ptVar1;
  
  ptVar1 = (tree)bit_from_pos(*(undefined8 *)&field->field_0x70,*(undefined8 *)&field->field_0x88);
  return ptVar1;
}



long int_bit_position(const_tree field)

{
  tree t;
  long lVar1;
  
  t = bit_position(field);
  lVar1 = tree_low_cst(t,0);
  return lVar1;
}



tree byte_position(const_tree field)

{
  tree ptVar1;
  
  ptVar1 = (tree)byte_from_pos(*(undefined8 *)&field->field_0x70,*(undefined8 *)&field->field_0x88);
  return ptVar1;
}



long int_byte_position(const_tree field)

{
  tree t;
  long lVar1;
  
  t = byte_position(field);
  lVar1 = tree_low_cst(t,0);
  return lVar1;
}



uint expr_align(const_tree t)

{
  uint uVar1;
  uint uVar2;
  uint align0;
  uint align1;
  
  switch(*(undefined2 *)t) {
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x24:
    if (*(int *)&t->field_0x40 == 0) {
      fancy_abort("tree.c",0x911,&DAT_00117460);
    }
    uVar1 = *(uint *)&t->field_0x40;
    break;
  default:
    uVar1 = *(uint *)(*(long *)&t->field_0x10 + 0x40);
    break;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x3c:
  case 0x3d:
  case 0x78:
    uVar1 = expr_align(*(const_tree *)&t->field_0x28);
    break;
  case 0x38:
    uVar1 = expr_align(*(const_tree *)&t->field_0x30);
    uVar2 = expr_align(*(const_tree *)&t->field_0x38);
    if (uVar2 <= uVar1) {
      uVar1 = uVar2;
    }
    break;
  case 0x71:
  case 0x74:
  case 0x75:
    uVar1 = expr_align(*(const_tree *)&t->field_0x28);
    uVar2 = *(uint *)(*(long *)&t->field_0x10 + 0x40);
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}



tree array_type_nelts(const_tree type)

{
  const_tree expr;
  int iVar1;
  tree ptVar2;
  tree index_type;
  tree min;
  tree max;
  
  ptVar2 = global_trees[0];
  if (*(long *)&type->field_0x18 != 0) {
    expr = *(const_tree *)(*(long *)&type->field_0x18 + 0x68);
    ptVar2 = *(tree *)(*(long *)&type->field_0x18 + 0x70);
    iVar1 = integer_zerop(expr);
    if (iVar1 == 0) {
      ptVar2 = (tree)fold_build2_stat_loc(0,0x40,*(undefined8 *)&ptVar2->field_0x10,ptVar2,expr);
    }
  }
  return ptVar2;
}



tree staticp(tree arg)

{
  switch(*(undefined2 *)arg) {
  case 0x1c:
  case 0x1e:
    break;
  case 0x1d:
    break;
  default:
    arg = (tree)0x0;
    break;
  case 0x20:
    if (((((arg->field_0x3 & 4) == 0) && ((arg->field_0x3b & 2) == 0)) ||
        (1 < (byte)arg->field_0x91 >> 5)) || ((arg->field_0x90 & 0x20) != 0)) {
      arg = (tree)0x0;
    }
    break;
  case 0x21:
    if (((arg->field_0x3 & 4) == 0) && ((arg->field_0x3b & 2) == 0)) {
      arg = (tree)0x0;
    }
    break;
  case 0x29:
    if (**(short **)&arg->field_0x30 != 0x1f) {
      fancy_abort("tree.c",0x955,&DAT_00117460);
    }
    if ((*(byte *)(*(long *)&arg->field_0x30 + 0x3b) & 2) == 0) {
      arg = staticp(*(tree *)&arg->field_0x28);
    }
    else {
      arg = (tree)0x0;
    }
    break;
  case 0x2a:
    arg = (tree)0x0;
    break;
  case 0x2d:
  case 0x2e:
    if ((**(short **)(*(long *)&arg->field_0x10 + 0x20) == 0x17) &&
       (**(short **)&arg->field_0x30 == 0x17)) {
      arg = staticp(*(tree *)&arg->field_0x28);
    }
    else {
      arg = (tree)0x0;
    }
    break;
  case 0x2f:
  case 0x30:
  case 0x31:
    if ((*(byte *)(*(long *)&arg->field_0x28 + 2) & 2) == 0) {
      arg = (tree)0x0;
    }
    break;
  case 0x33:
    if ((arg->field_0x3 & 4) == 0) {
      arg = (tree)0x0;
    }
    break;
  case 0x77:
    if ((*(byte *)(*(long *)(*(long *)&arg->field_0x28 + 0x28) + 3) & 4) == 0) {
      arg = (tree)0x0;
    }
  }
  return arg;
}



uchar decl_address_invariant_p(const_tree op)

{
  tree ptVar1;
  
  switch(*(undefined2 *)op) {
  case 0x1d:
  case 0x1e:
  case 0x22:
  case 0x24:
    return '\x01';
  case 0x20:
    if ((((((op->field_0x3 & 4) != 0) || ((op->field_0x3b & 2) != 0)) &&
         ((op->field_0x90 & 0x20) == 0)) ||
        ((1 < (byte)op->field_0x91 >> 5 || (*(tree *)&op->field_0x28 == current_function_decl)))) ||
       (ptVar1 = decl_function_context(op), ptVar1 == current_function_decl)) {
      return '\x01';
    }
    break;
  case 0x21:
    if ((((op->field_0x3 & 4) != 0) || ((op->field_0x3b & 2) != 0)) ||
       (ptVar1 = decl_function_context(op), ptVar1 == current_function_decl)) {
      return '\x01';
    }
  }
  return '\0';
}



uchar decl_address_ip_invariant_p(const_tree op)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)op;
  if (uVar1 == 0x21) {
    if (((op->field_0x3 & 4) != 0) || ((op->field_0x3b & 2) != 0)) {
      return '\x01';
    }
  }
  else if (uVar1 < 0x22) {
    if (uVar1 < 0x1f) {
      if (0x1b < uVar1) {
        return '\x01';
      }
    }
    else if ((uVar1 == 0x20) &&
            (((((op->field_0x3 & 4) != 0 || ((op->field_0x3b & 2) != 0)) &&
              ((op->field_0x90 & 0x20) == 0)) || (1 < (byte)op->field_0x91 >> 5)))) {
      return '\x01';
    }
  }
  return '\0';
}



uchar tree_invariant_p_1(tree t)

{
  ushort uVar1;
  uchar uVar2;
  tree op;
  
  if (((t->field_0x2 & 2) == 0) && (((t->field_0x2 & 0x10) == 0 || ((t->field_0x2 & 1) != 0)))) {
    if (*(short *)t == 0x78) {
      uVar2 = '\x01';
    }
    else if (*(short *)t == 0x79) {
      op = *(tree *)&t->field_0x28;
      while (uVar2 = handled_component_p(op), uVar2 != '\0') {
        uVar1 = *(ushort *)op;
        if (uVar1 == 0x29) {
          if (*(long *)&op->field_0x38 != 0) {
            return '\0';
          }
        }
        else if (((0x28 < uVar1) && (uVar1 - 0x2d < 2)) &&
                ((uVar2 = tree_invariant_p(*(tree *)&op->field_0x30), uVar2 == '\0' ||
                 ((*(long *)&op->field_0x38 != 0 || (*(long *)&op->field_0x40 != 0)))))) {
          return '\0';
        }
        op = *(tree *)&op->field_0x28;
      }
      if ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)op * 4) == 1) ||
         (uVar2 = decl_address_invariant_p(op), uVar2 != '\0')) {
        uVar2 = '\x01';
      }
      else {
        uVar2 = '\0';
      }
    }
    else {
      uVar2 = '\0';
    }
  }
  else {
    uVar2 = '\x01';
  }
  return uVar2;
}



uchar tree_invariant_p(tree t)

{
  uchar uVar1;
  tree t_00;
  tree inner;
  
  t_00 = skip_simple_arithmetic(t);
  uVar1 = tree_invariant_p_1(t_00);
  return uVar1;
}



tree save_expr(tree expr)

{
  uchar uVar1;
  undefined4 uVar2;
  tree expr_00;
  tree t_00;
  tree ptVar3;
  tree t;
  tree inner;
  
  expr_00 = (tree)fold(expr);
  t_00 = skip_simple_arithmetic(expr_00);
  ptVar3 = t_00;
  if (((*(short *)t_00 != 0) && (uVar1 = tree_invariant_p_1(t_00), ptVar3 = expr_00, uVar1 == '\0'))
     && (uVar1 = contains_placeholder_p(t_00), uVar1 == '\0')) {
    ptVar3 = build1_stat(SAVE_EXPR,*(tree *)&expr->field_0x10,expr_00);
    if ((*(uint *)(tree_code_type + (long)(int)(uint)*(ushort *)expr * 4) < 4) ||
       (10 < *(uint *)(tree_code_type + (long)(int)(uint)*(ushort *)expr * 4))) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)&expr->field_0x18;
    }
    *(undefined4 *)&ptVar3->field_0x18 = uVar2;
    ptVar3->field_0x2 = ptVar3->field_0x2 | 1;
  }
  return ptVar3;
}



tree skip_simple_arithmetic(tree expr)

{
  uchar uVar1;
  tree local_20;
  tree inner;
  
  for (local_20 = expr; *(short *)local_20 == 0x75; local_20 = *(tree *)&local_20->field_0x28) {
  }
  inner = local_20;
  while( true ) {
    while (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)inner * 4) == 6) {
      inner = *(tree *)&inner->field_0x28;
    }
    if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)inner * 4) != 7) break;
    uVar1 = tree_invariant_p(*(tree *)&inner->field_0x30);
    if (uVar1 == '\0') {
      uVar1 = tree_invariant_p(*(tree *)&inner->field_0x28);
      if (uVar1 == '\0') {
        return inner;
      }
      inner = *(tree *)&inner->field_0x30;
    }
    else {
      inner = *(tree *)&inner->field_0x28;
    }
  }
  return inner;
}



tree_node_structure_enum tree_node_structure(const_tree t)

{
  tree_node_structure_enum tVar1;
  tree_code code;
  
  tVar1 = tree_node_structure_for_code((uint)*(ushort *)t);
  return tVar1;
}



void process_call_operands(tree t)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uchar side_effects;
  uchar read_only;
  int i;
  tree op;
  
  side_effects = t->field_0x2 & 1;
  uVar2 = call_expr_flags(t);
  if (((uVar2 & 4) != 0) || ((uVar2 & 3) == 0)) {
    side_effects = '\x01';
  }
  read_only = (uVar2 & 1) != 0;
  if ((side_effects == '\0') || ((bool)read_only)) {
    for (i = 1; iVar3 = tree_operand_length(t), i < iVar3; i = i + 1) {
      puVar1 = *(ushort **)(&t->field_0x28 + (long)i * 8);
      if ((puVar1 != (ushort *)0x0) && ((*(byte *)(puVar1 + 1) & 1) != 0)) {
        side_effects = '\x01';
      }
      if (((puVar1 != (ushort *)0x0) && ((*(byte *)(puVar1 + 1) & 0x10) == 0)) &&
         (*(int *)(tree_code_type + (long)(int)(uint)*puVar1 * 4) != 1)) {
        read_only = '\0';
      }
    }
  }
  t->field_0x2 = t->field_0x2 & 0xfe | side_effects;
  t->field_0x2 = t->field_0x2 & 0xef | read_only << 4;
  return;
}



uchar contains_placeholder_p(const_tree exp)

{
  long lVar1;
  uchar uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  tree_code code;
  const_tree arg;
  const_call_expr_arg_iterator iter;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (exp == (const_tree)0x0) {
    uVar2 = '\0';
  }
  else {
    uVar3 = (uint)*(ushort *)exp;
    if (uVar3 == 0x3e) {
      uVar2 = '\x01';
    }
    else {
      switch(*(undefined4 *)(tree_code_type + (long)(int)uVar3 * 4)) {
      case 0:
        if (uVar3 == 2) {
          if ((((*(long *)&exp->field_0x20 == 0) ||
               ((*(byte *)(*(long *)&exp->field_0x20 + 2) & 2) != 0)) ||
              (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x20), uVar2 == '\0')) &&
             (((*(long *)&exp->field_0x8 == 0 ||
               ((*(byte *)(*(long *)&exp->field_0x8 + 2) & 2) != 0)) ||
              (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x8), uVar2 == '\0')))) {
            uVar2 = '\0';
          }
          else {
            uVar2 = '\x01';
          }
        }
        else {
          uVar2 = '\0';
        }
        break;
      default:
        uVar2 = '\0';
        break;
      case 4:
        if (((*(long *)&exp->field_0x28 == 0) ||
            ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) ||
           (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x28), uVar2 == '\0')) {
          uVar2 = '\0';
        }
        else {
          uVar2 = '\x01';
        }
        break;
      case 5:
      case 6:
      case 7:
      case 10:
        if (uVar3 == 0x78) {
          uVar2 = '\0';
        }
        else {
          if (uVar3 < 0x79) {
            if (uVar3 == 0x34) {
              if (((*(long *)&exp->field_0x30 == 0) ||
                  ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) ||
                 (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x30), uVar2 == '\0')) {
                uVar2 = '\0';
              }
              else {
                uVar2 = '\x01';
              }
              break;
            }
            if (uVar3 == 0x38) {
              if (((((*(long *)&exp->field_0x28 == 0) ||
                    ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) ||
                   (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x28), uVar2 == '\0'))
                  && (((*(long *)&exp->field_0x30 == 0 ||
                       ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) ||
                      (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x30),
                      uVar2 == '\0')))) &&
                 (((*(long *)&exp->field_0x38 == 0 ||
                   ((*(byte *)(*(long *)&exp->field_0x38 + 2) & 2) != 0)) ||
                  (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x38), uVar2 == '\0')))
                 ) {
                uVar2 = '\0';
              }
              else {
                uVar2 = '\x01';
              }
              break;
            }
          }
          if (tree_code_length[(int)uVar3] == '\x01') {
            if (((*(long *)&exp->field_0x28 == 0) ||
                ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) ||
               (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x28), uVar2 == '\0')) {
              uVar2 = '\0';
            }
            else {
              uVar2 = '\x01';
            }
          }
          else if (tree_code_length[(int)uVar3] == '\x02') {
            if ((((*(long *)&exp->field_0x28 == 0) ||
                 ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) ||
                (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x28), uVar2 == '\0')) &&
               (((*(long *)&exp->field_0x30 == 0 ||
                 ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) ||
                (uVar2 = contains_placeholder_p(*(const_tree *)&exp->field_0x30), uVar2 == '\0'))))
            {
              uVar2 = '\0';
            }
            else {
              uVar2 = '\x01';
            }
          }
          else {
            uVar2 = '\0';
          }
        }
        break;
      case 9:
        if (uVar3 == 0x3b) {
          arg = first_const_call_expr_arg(exp,&iter);
          while (arg != (const_tree)0x0) {
            if (((arg != (const_tree)0x0) && ((arg->field_0x2 & 2) == 0)) &&
               (uVar2 = contains_placeholder_p(arg), uVar2 != '\0')) {
              uVar2 = '\x01';
              goto LAB_00105531;
            }
            arg = next_const_call_expr_arg(&iter);
          }
          uVar2 = '\0';
        }
        else {
          uVar2 = '\0';
        }
      }
    }
  }
LAB_00105531:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



uchar type_contains_placeholder_1(const_tree type)

{
  uchar uVar1;
  tree field;
  
  if ((((*(long *)&type->field_0x20 != 0) && ((*(byte *)(*(long *)&type->field_0x20 + 2) & 2) == 0))
      && (uVar1 = contains_placeholder_p(*(const_tree *)&type->field_0x20), uVar1 != '\0')) ||
     ((((*(long *)&type->field_0x28 != 0 && ((*(byte *)(*(long *)&type->field_0x28 + 2) & 2) == 0))
       && (uVar1 = contains_placeholder_p(*(const_tree *)&type->field_0x28), uVar1 != '\0')) ||
      ((*(long *)&type->field_0x10 != 0 &&
       (uVar1 = type_contains_placeholder_p(*(tree *)&type->field_0x10), uVar1 != '\0')))))) {
    return '\x01';
  }
  switch(*(undefined2 *)type) {
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x13:
  case 0x14:
  case 0x15:
    uVar1 = '\0';
    break;
  case 8:
  case 9:
  case 0xb:
    if ((((*(long *)&type->field_0x68 == 0) ||
         ((*(byte *)(*(long *)&type->field_0x68 + 2) & 2) != 0)) ||
        (uVar1 = contains_placeholder_p(*(const_tree *)&type->field_0x68), uVar1 == '\0')) &&
       (((*(long *)&type->field_0x70 == 0 || ((*(byte *)(*(long *)&type->field_0x70 + 2) & 2) != 0))
        || (uVar1 = contains_placeholder_p(*(const_tree *)&type->field_0x70), uVar1 == '\0')))) {
      uVar1 = '\0';
    }
    else {
      uVar1 = '\x01';
    }
    break;
  case 0xf:
    uVar1 = type_contains_placeholder_p(*(tree *)&type->field_0x18);
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    for (field = *(tree *)&type->field_0x18; field != (tree)0x0; field = *(tree *)&field->field_0x8)
    {
      if ((*(short *)field == 0x1f) &&
         (((((*(long *)&field->field_0x70 != 0 &&
             ((*(byte *)(*(long *)&field->field_0x70 + 2) & 2) == 0)) &&
            (uVar1 = contains_placeholder_p(*(const_tree *)&field->field_0x70), uVar1 != '\0')) ||
           (((*(short *)type == 0x12 && (*(long *)&field->field_0x80 != 0)) &&
            (((*(byte *)(*(long *)&field->field_0x80 + 2) & 2) == 0 &&
             (uVar1 = contains_placeholder_p(*(const_tree *)&field->field_0x80), uVar1 != '\0'))))))
          || (uVar1 = type_contains_placeholder_p(*(tree *)&field->field_0x10), uVar1 != '\0')))) {
        return '\x01';
      }
    }
    uVar1 = '\0';
    break;
  default:
    fancy_abort("tree.c",0xb20,&DAT_00117460);
    return '\0';
  }
  return uVar1;
}



uchar type_contains_placeholder_p(tree type)

{
  byte bVar1;
  uchar result;
  
  if ((type->field_0x3d & 0xc0) == 0) {
    type->field_0x3d = type->field_0x3d & 0x3f | 0x40;
    bVar1 = type_contains_placeholder_1(type);
    type->field_0x3d = type->field_0x3d & 0x3f | (byte)((bVar1 + 1 & 3) << 6);
  }
  else {
    bVar1 = ((byte)type->field_0x3d >> 6) - 1;
  }
  return bVar1;
}



void push_without_duplicates(tree exp,VEC_tree_heap **queue)

{
  int iVar1;
  VEC_tree_base *vec_;
  long in_FS_OFFSET;
  uint i;
  tree iter;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  i = 0;
  while( true ) {
    if (*queue == (VEC_tree_heap *)0x0) {
      vec_ = (VEC_tree_base *)0x0;
    }
    else {
      vec_ = (VEC_tree_base *)*queue;
    }
    iVar1 = VEC_tree_base_iterate(vec_,i,&iter);
    if ((iVar1 == 0) || (iVar1 = simple_cst_equal(iter,exp), iVar1 == 1)) break;
    i = i + 1;
  }
  if (iter == (tree)0x0) {
    VEC_tree_heap_safe_push(queue,exp);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void find_placeholder_in_expr(tree exp,VEC_tree_heap **refs)

{
  uint uVar1;
  int iVar2;
  int i;
  tree_code code;
  tree inner;
  
  uVar1 = (uint)*(ushort *)exp;
  if (uVar1 == 2) {
    if ((*(long *)&exp->field_0x8 != 0) && ((*(byte *)(*(long *)&exp->field_0x8 + 2) & 2) == 0)) {
      find_placeholder_in_expr(*(tree *)&exp->field_0x8,refs);
    }
    if ((*(long *)&exp->field_0x20 != 0) && ((*(byte *)(*(long *)&exp->field_0x20 + 2) & 2) == 0)) {
      find_placeholder_in_expr(*(tree *)&exp->field_0x20,refs);
    }
  }
  else if (uVar1 == 0x29) {
    inner = *(tree *)&exp->field_0x28;
    while (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)inner * 4) == 4) {
      inner = *(tree *)&inner->field_0x28;
    }
    if (*(short *)inner == 0x3e) {
      push_without_duplicates(exp,refs);
    }
    else if ((*(long *)&exp->field_0x28 != 0) &&
            ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) == 0)) {
      find_placeholder_in_expr(*(tree *)&exp->field_0x28,refs);
    }
  }
  else {
    switch(*(undefined4 *)(tree_code_type + (long)(int)uVar1 * 4)) {
    case 1:
      break;
    default:
      fancy_abort("tree.c",0xb94,&DAT_00117460);
      break;
    case 3:
      if ((exp->field_0x3 & 4) == 0) {
        push_without_duplicates(exp,refs);
      }
      break;
    case 9:
      for (i = 1; iVar2 = tree_operand_length(exp), i < iVar2; i = i + 1) {
        if ((*(long *)(&exp->field_0x28 + (long)i * 8) != 0) &&
           ((*(byte *)(*(long *)(&exp->field_0x28 + (long)i * 8) + 2) & 2) == 0)) {
          find_placeholder_in_expr(*(tree *)(&exp->field_0x28 + (long)i * 8),refs);
        }
      }
      break;
    case 10:
      if ((uVar1 == 0x79) && (**(short **)&exp->field_0x28 == 0x3e)) {
        push_without_duplicates(exp,refs);
        return;
      }
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
      for (i = 0; i < (int)(uint)(byte)tree_code_length[(int)uVar1]; i = i + 1) {
        if ((*(long *)(&exp->field_0x28 + (long)i * 8) != 0) &&
           ((*(byte *)(*(long *)(&exp->field_0x28 + (long)i * 8) + 2) & 2) == 0)) {
          find_placeholder_in_expr(*(tree *)(&exp->field_0x28 + (long)i * 8),refs);
        }
      }
    }
  }
  return;
}



tree substitute_in_expr(tree exp,tree f,tree r)

{
  tree_code code_00;
  int iVar1;
  tree ptVar2;
  tree ptVar3;
  tree ptVar4;
  tree arg3;
  int i;
  tree_code code;
  tree new_tree;
  tree inner;
  tree t;
  tree op;
  tree new_op;
  tree op0;
  tree op1;
  tree op2;
  tree op3;
  
  code_00 = (tree_code)*(ushort *)exp;
  if (code_00 == TREE_LIST) {
    if ((*(long *)&exp->field_0x8 == 0) || ((*(byte *)(*(long *)&exp->field_0x8 + 2) & 2) != 0)) {
      ptVar3 = *(tree *)&exp->field_0x8;
    }
    else {
      ptVar3 = substitute_in_expr(*(tree *)&exp->field_0x8,f,r);
    }
    if ((*(long *)&exp->field_0x20 == 0) || ((*(byte *)(*(long *)&exp->field_0x20 + 2) & 2) != 0)) {
      ptVar2 = *(tree *)&exp->field_0x20;
    }
    else {
      ptVar2 = substitute_in_expr(*(tree *)&exp->field_0x20,f,r);
    }
    if ((ptVar3 == *(tree *)&exp->field_0x8) && (ptVar2 == *(tree *)&exp->field_0x20)) {
      return exp;
    }
    ptVar3 = tree_cons_stat(*(tree *)&exp->field_0x18,ptVar2,ptVar3);
    return ptVar3;
  }
  if (code_00 == COMPONENT_REF) {
    inner = *(tree *)&exp->field_0x28;
    while (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)inner * 4) == 4) {
      inner = *(tree *)&inner->field_0x28;
    }
    ptVar3 = *(tree *)&exp->field_0x30;
    if ((*(short *)inner == 0x3e) && (ptVar3 == f)) {
      return r;
    }
    if ((*(short *)inner == 0x3e) && (*(long *)&inner->field_0x10 == 0)) {
      return exp;
    }
    if ((*(long *)&exp->field_0x28 == 0) || ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
      ptVar2 = *(tree *)&exp->field_0x28;
    }
    else {
      ptVar2 = substitute_in_expr(*(tree *)&exp->field_0x28,f,r);
    }
    if (ptVar2 == *(tree *)&exp->field_0x28) {
      return exp;
    }
    new_tree = (tree)fold_build3_stat_loc(0,0x29,*(undefined8 *)&exp->field_0x10,ptVar2,ptVar3,0);
  }
  else {
    switch(*(undefined4 *)(tree_code_type + (long)code_00 * 4)) {
    case 1:
      return exp;
    default:
      fancy_abort("tree.c",0xc43,&DAT_00117460);
      break;
    case 3:
      if (exp != f) {
        return exp;
      }
      return r;
    case 9:
      new_tree = (tree)0x0;
      if (((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)r * 4) == 1) &&
          (code_00 == CALL_EXPR)) &&
         (ptVar3 = (tree)maybe_inline_call_in_expr(exp), ptVar3 != (tree)0x0)) {
        if (ptVar3 == (tree)0x0) {
          return (tree)0x0;
        }
        if ((ptVar3->field_0x2 & 2) != 0) {
          return ptVar3;
        }
        ptVar3 = substitute_in_expr(ptVar3,f,r);
        return ptVar3;
      }
      for (i = 1; iVar1 = tree_operand_length(exp), i < iVar1; i = i + 1) {
        ptVar3 = *(tree *)(&exp->field_0x28 + (long)i * 8);
        ptVar2 = ptVar3;
        if ((ptVar3 != (tree)0x0) && ((ptVar3->field_0x2 & 2) == 0)) {
          ptVar2 = substitute_in_expr(ptVar3,f,r);
        }
        if (ptVar2 != ptVar3) {
          if (new_tree == (tree)0x0) {
            new_tree = copy_node_stat(exp);
          }
          *(tree *)(&new_tree->field_0x28 + (long)i * 8) = ptVar2;
        }
      }
      if (new_tree == (tree)0x0) {
        return exp;
      }
      new_tree = (tree)fold(new_tree);
      if (*(short *)new_tree == 0x3b) {
        process_call_operands(new_tree);
      }
      break;
    case 10:
      if (exp == f) {
        return r;
      }
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
      switch(tree_code_length[code_00]) {
      case 0:
        return exp;
      case 1:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_in_expr(*(tree *)&exp->field_0x28,f,r);
        }
        if (ptVar3 == *(tree *)&exp->field_0x28) {
          return exp;
        }
        new_tree = (tree)fold_build1_stat_loc(0,code_00,*(undefined8 *)&exp->field_0x10);
        break;
      case 2:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_in_expr(*(tree *)&exp->field_0x28,f,r);
        }
        if ((*(long *)&exp->field_0x30 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) {
          ptVar2 = *(tree *)&exp->field_0x30;
        }
        else {
          ptVar2 = substitute_in_expr(*(tree *)&exp->field_0x30,f,r);
        }
        if ((ptVar3 == *(tree *)&exp->field_0x28) && (ptVar2 == *(tree *)&exp->field_0x30)) {
          return exp;
        }
        new_tree = (tree)fold_build2_stat_loc
                                   (0,code_00,*(undefined8 *)&exp->field_0x10,ptVar3,ptVar2);
        break;
      case 3:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_in_expr(*(tree *)&exp->field_0x28,f,r);
        }
        if ((*(long *)&exp->field_0x30 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) {
          ptVar2 = *(tree *)&exp->field_0x30;
        }
        else {
          ptVar2 = substitute_in_expr(*(tree *)&exp->field_0x30,f,r);
        }
        if ((*(long *)&exp->field_0x38 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x38 + 2) & 2) != 0)) {
          ptVar4 = *(tree *)&exp->field_0x38;
        }
        else {
          ptVar4 = substitute_in_expr(*(tree *)&exp->field_0x38,f,r);
        }
        if (((ptVar3 == *(tree *)&exp->field_0x28) && (ptVar2 == *(tree *)&exp->field_0x30)) &&
           (ptVar4 == *(tree *)&exp->field_0x38)) {
          return exp;
        }
        new_tree = (tree)fold_build3_stat_loc
                                   (0,code_00,*(undefined8 *)&exp->field_0x10,ptVar3,ptVar2,ptVar4);
        break;
      case 4:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_in_expr(*(tree *)&exp->field_0x28,f,r);
        }
        if ((*(long *)&exp->field_0x30 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) {
          ptVar2 = *(tree *)&exp->field_0x30;
        }
        else {
          ptVar2 = substitute_in_expr(*(tree *)&exp->field_0x30,f,r);
        }
        if ((*(long *)&exp->field_0x38 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x38 + 2) & 2) != 0)) {
          ptVar4 = *(tree *)&exp->field_0x38;
        }
        else {
          ptVar4 = substitute_in_expr(*(tree *)&exp->field_0x38,f,r);
        }
        if ((*(long *)&exp->field_0x40 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x40 + 2) & 2) != 0)) {
          arg3 = *(tree *)&exp->field_0x40;
        }
        else {
          arg3 = substitute_in_expr(*(tree *)&exp->field_0x40,f,r);
        }
        if ((((ptVar3 == *(tree *)&exp->field_0x28) && (ptVar2 == *(tree *)&exp->field_0x30)) &&
            (ptVar4 == *(tree *)&exp->field_0x38)) && (arg3 == *(tree *)&exp->field_0x40)) {
          return exp;
        }
        ptVar3 = build4_stat(code_00,*(tree *)&exp->field_0x10,ptVar3,ptVar2,ptVar4,arg3);
        new_tree = (tree)fold(ptVar3);
        break;
      default:
        fancy_abort("tree.c",0xc16,&DAT_00117460);
      }
    }
  }
  new_tree->field_0x2 =
       new_tree->field_0x2 & 0xef |
       (byte)(((byte)new_tree->field_0x2 >> 4 & 1 | (byte)exp->field_0x2 >> 4 & 1) << 4);
  return new_tree;
}



tree substitute_placeholder_in_expr(tree exp,tree obj)

{
  long lVar1;
  tree_code code_00;
  int iVar2;
  tree ptVar3;
  tree ptVar4;
  tree ptVar5;
  tree arg3;
  int i;
  tree_code code;
  tree new_tree;
  tree elt;
  tree op;
  tree new_op;
  tree op0;
  tree op1;
  tree op2;
  tree op3;
  tree need_type;
  
  code_00 = (tree_code)*(ushort *)exp;
  if (code_00 == PLACEHOLDER_EXPR) {
    lVar1 = *(long *)(*(long *)&exp->field_0x10 + 0x80);
    elt = obj;
    while (ptVar3 = obj, elt != (tree)0x0) {
      if (lVar1 == *(long *)(*(long *)&elt->field_0x10 + 0x80)) {
        return elt;
      }
      if ((*(short *)elt == 0x34) || (*(short *)elt == 0x38)) {
        elt = *(tree *)&elt->field_0x30;
      }
      else if ((((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 4) ||
                (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 6)) ||
               (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 7)) ||
              ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 9 ||
               (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 10)))) {
        elt = *(tree *)&elt->field_0x28;
      }
      else {
        elt = (tree)0x0;
      }
    }
    while (elt = ptVar3, new_tree = exp, elt != (tree)0x0) {
      if (((**(short **)&elt->field_0x10 == 10) || (**(short **)&elt->field_0x10 == 0xc)) &&
         (lVar1 == *(long *)(*(long *)(*(long *)&elt->field_0x10 + 0x10) + 0x80))) {
        ptVar3 = (tree)fold_build1_stat_loc(0,0x2f,lVar1,elt);
        return ptVar3;
      }
      if ((*(short *)elt == 0x34) || (*(short *)elt == 0x38)) {
        ptVar3 = *(tree *)&elt->field_0x30;
      }
      else if ((((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 4) ||
                (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 6)) ||
               (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 7)) ||
              ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 9 ||
               (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)elt * 4) == 10)))) {
        ptVar3 = *(tree *)&elt->field_0x28;
      }
      else {
        ptVar3 = (tree)0x0;
      }
    }
  }
  else if (code_00 == TREE_LIST) {
    if ((*(long *)&exp->field_0x8 == 0) || ((*(byte *)(*(long *)&exp->field_0x8 + 2) & 2) != 0)) {
      ptVar3 = *(tree *)&exp->field_0x8;
    }
    else {
      ptVar3 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x8,obj);
    }
    if ((*(long *)&exp->field_0x20 == 0) || ((*(byte *)(*(long *)&exp->field_0x20 + 2) & 2) != 0)) {
      ptVar4 = *(tree *)&exp->field_0x20;
    }
    else {
      ptVar4 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x20,obj);
    }
    if ((ptVar3 != *(tree *)&exp->field_0x8) ||
       (new_tree = exp, ptVar4 != *(tree *)&exp->field_0x20)) {
      new_tree = tree_cons_stat(*(tree *)&exp->field_0x18,ptVar4,ptVar3);
    }
  }
  else {
    switch(*(undefined4 *)(tree_code_type + (long)code_00 * 4)) {
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
      switch(tree_code_length[code_00]) {
      case 0:
        return exp;
      case 1:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x28,obj);
        }
        if (ptVar3 == *(tree *)&exp->field_0x28) {
          return exp;
        }
        new_tree = (tree)fold_build1_stat_loc(0,code_00,*(undefined8 *)&exp->field_0x10);
        break;
      case 2:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x28,obj);
        }
        if ((*(long *)&exp->field_0x30 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) {
          ptVar4 = *(tree *)&exp->field_0x30;
        }
        else {
          ptVar4 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x30,obj);
        }
        if ((ptVar3 == *(tree *)&exp->field_0x28) && (ptVar4 == *(tree *)&exp->field_0x30)) {
          return exp;
        }
        new_tree = (tree)fold_build2_stat_loc
                                   (0,code_00,*(undefined8 *)&exp->field_0x10,ptVar3,ptVar4);
        break;
      case 3:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x28,obj);
        }
        if ((*(long *)&exp->field_0x30 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) {
          ptVar4 = *(tree *)&exp->field_0x30;
        }
        else {
          ptVar4 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x30,obj);
        }
        if ((*(long *)&exp->field_0x38 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x38 + 2) & 2) != 0)) {
          ptVar5 = *(tree *)&exp->field_0x38;
        }
        else {
          ptVar5 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x38,obj);
        }
        if (((ptVar3 == *(tree *)&exp->field_0x28) && (ptVar4 == *(tree *)&exp->field_0x30)) &&
           (ptVar5 == *(tree *)&exp->field_0x38)) {
          return exp;
        }
        new_tree = (tree)fold_build3_stat_loc
                                   (0,code_00,*(undefined8 *)&exp->field_0x10,ptVar3,ptVar4,ptVar5);
        break;
      case 4:
        if ((*(long *)&exp->field_0x28 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x28 + 2) & 2) != 0)) {
          ptVar3 = *(tree *)&exp->field_0x28;
        }
        else {
          ptVar3 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x28,obj);
        }
        if ((*(long *)&exp->field_0x30 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x30 + 2) & 2) != 0)) {
          ptVar4 = *(tree *)&exp->field_0x30;
        }
        else {
          ptVar4 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x30,obj);
        }
        if ((*(long *)&exp->field_0x38 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x38 + 2) & 2) != 0)) {
          ptVar5 = *(tree *)&exp->field_0x38;
        }
        else {
          ptVar5 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x38,obj);
        }
        if ((*(long *)&exp->field_0x40 == 0) ||
           ((*(byte *)(*(long *)&exp->field_0x40 + 2) & 2) != 0)) {
          arg3 = *(tree *)&exp->field_0x40;
        }
        else {
          arg3 = substitute_placeholder_in_expr(*(tree *)&exp->field_0x40,obj);
        }
        if ((((ptVar3 == *(tree *)&exp->field_0x28) && (ptVar4 == *(tree *)&exp->field_0x30)) &&
            (ptVar5 == *(tree *)&exp->field_0x38)) && (arg3 == *(tree *)&exp->field_0x40)) {
          return exp;
        }
        ptVar3 = build4_stat(code_00,*(tree *)&exp->field_0x10,ptVar3,ptVar4,ptVar5,arg3);
        new_tree = (tree)fold(ptVar3);
        break;
      default:
        fancy_abort("tree.c",0xcc8,&DAT_00117460);
      }
      break;
    case 1:
    case 3:
      return exp;
    default:
      fancy_abort("tree.c",0xcea,&DAT_00117460);
      break;
    case 9:
      new_tree = (tree)0x0;
      for (i = 1; iVar2 = tree_operand_length(exp), i < iVar2; i = i + 1) {
        ptVar3 = *(tree *)(&exp->field_0x28 + (long)i * 8);
        ptVar4 = ptVar3;
        if ((ptVar3 != (tree)0x0) && ((ptVar3->field_0x2 & 2) == 0)) {
          ptVar4 = substitute_placeholder_in_expr(ptVar3,obj);
        }
        if (ptVar4 != ptVar3) {
          if (new_tree == (tree)0x0) {
            new_tree = copy_node_stat(exp);
          }
          *(tree *)(&new_tree->field_0x28 + (long)i * 8) = ptVar4;
        }
      }
      if (new_tree == (tree)0x0) {
        return exp;
      }
      new_tree = (tree)fold(new_tree);
      if (*(short *)new_tree == 0x3b) {
        process_call_operands(new_tree);
      }
    }
    new_tree->field_0x2 =
         new_tree->field_0x2 & 0xef |
         (byte)(((byte)new_tree->field_0x2 >> 4 & 1 | (byte)exp->field_0x2 >> 4 & 1) << 4);
  }
  return new_tree;
}



tree stabilize_reference(tree ref)

{
  undefined8 uVar1;
  undefined8 uVar2;
  tree_code code_00;
  tree ptVar3;
  tree ptVar4;
  tree_code code;
  tree result;
  
  code_00 = (tree_code)*(ushort *)ref;
  if (code_00 == ERROR_MARK) {
    return global_trees[0];
  }
  if (0x74 < (uint)code_00) {
    return ref;
  }
  if ((uint)code_00 < 0x20) {
    return ref;
  }
  result = ref;
  switch(code_00) {
  case VAR_DECL:
  case PARM_DECL:
  case RESULT_DECL:
    return ref;
  default:
    goto LAB_0010716a;
  case COMPONENT_REF:
    uVar1 = *(undefined8 *)&ref->field_0x30;
    ptVar3 = stabilize_reference(*(tree *)&ref->field_0x28);
    result = build_nt(COMPONENT_REF,ptVar3,uVar1);
    break;
  case BIT_FIELD_REF:
    stabilize_reference_1(*(tree *)&ref->field_0x38);
    ptVar3 = stabilize_reference_1(*(tree *)&ref->field_0x30);
    ptVar4 = stabilize_reference(*(tree *)&ref->field_0x28);
    result = build_nt(BIT_FIELD_REF,ptVar4,ptVar3);
    break;
  case ARRAY_REF:
    uVar1 = *(undefined8 *)&ref->field_0x40;
    uVar2 = *(undefined8 *)&ref->field_0x38;
    ptVar3 = stabilize_reference_1(*(tree *)&ref->field_0x30);
    ptVar4 = stabilize_reference(*(tree *)&ref->field_0x28);
    result = build_nt(ARRAY_REF,ptVar4,ptVar3,uVar2,uVar1);
    break;
  case ARRAY_RANGE_REF:
    uVar1 = *(undefined8 *)&ref->field_0x40;
    uVar2 = *(undefined8 *)&ref->field_0x38;
    ptVar3 = stabilize_reference_1(*(tree *)&ref->field_0x30);
    ptVar4 = stabilize_reference(*(tree *)&ref->field_0x28);
    result = build_nt(ARRAY_RANGE_REF,ptVar4,ptVar3,uVar2,uVar1);
    break;
  case INDIRECT_REF:
    ptVar3 = stabilize_reference_1(*(tree *)&ref->field_0x28);
    result = build_nt(INDIRECT_REF,ptVar3);
    break;
  case COMPOUND_EXPR:
    ptVar3 = stabilize_reference_1(ref);
    return ptVar3;
  case FIX_TRUNC_EXPR:
  case FLOAT_EXPR:
  case CONVERT_EXPR:
  case NOP_EXPR:
    ptVar3 = stabilize_reference(*(tree *)&ref->field_0x28);
    result = build_nt(code_00,ptVar3);
  }
  *(undefined8 *)&result->field_0x10 = *(undefined8 *)&ref->field_0x10;
  result->field_0x2 = result->field_0x2 & 0xef | (byte)(((byte)ref->field_0x2 >> 4 & 1) << 4);
  result->field_0x2 = result->field_0x2 & 0xfe | ref->field_0x2 & 1;
  result->field_0x2 = result->field_0x2 & 0xf7 | ((byte)ref->field_0x2 >> 3 & 1) * '\b';
LAB_0010716a:
  return result;
}



tree stabilize_reference_1(tree e)

{
  uchar uVar1;
  tree_code code_00;
  tree ptVar2;
  tree ptVar3;
  tree_code code;
  tree result;
  
  code_00 = (tree_code)*(ushort *)e;
  uVar1 = tree_invariant_p(e);
  if (uVar1 != '\0') {
    return e;
  }
  switch(*(undefined4 *)(tree_code_type + (long)code_00 * 4)) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 9:
  case 10:
    if ((e->field_0x2 & 1) == 0) {
      return e;
    }
    ptVar2 = save_expr(e);
    return ptVar2;
  case 1:
    return e;
  case 6:
    ptVar2 = stabilize_reference_1(*(tree *)&e->field_0x28);
    result = build_nt(code_00,ptVar2);
    break;
  case 7:
    if (((((code_00 == TRUNC_DIV_EXPR) || (code_00 == TRUNC_MOD_EXPR)) ||
         (code_00 == FLOOR_DIV_EXPR)) || ((code_00 == FLOOR_MOD_EXPR || (code_00 == CEIL_DIV_EXPR)))
        ) || ((code_00 == CEIL_MOD_EXPR ||
              ((code_00 == ROUND_DIV_EXPR || (code_00 == ROUND_MOD_EXPR)))))) {
      ptVar2 = save_expr(e);
      return ptVar2;
    }
    ptVar2 = stabilize_reference_1(*(tree *)&e->field_0x30);
    ptVar3 = stabilize_reference_1(*(tree *)&e->field_0x28);
    result = build_nt(code_00,ptVar3,ptVar2);
    break;
  default:
    fancy_abort("tree.c",0xd8a,&DAT_00117460);
  }
  *(undefined8 *)&result->field_0x10 = *(undefined8 *)&e->field_0x10;
  result->field_0x2 = result->field_0x2 & 0xef | (byte)(((byte)e->field_0x2 >> 4 & 1) << 4);
  result->field_0x2 = result->field_0x2 & 0xfe | e->field_0x2 & 1;
  result->field_0x2 = result->field_0x2 & 0xf7 | ((byte)e->field_0x2 >> 3 & 1) * '\b';
  return result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void recompute_tree_invariant_for_addr_expr(tree t)

{
  uchar uVar1;
  tree ptVar2;
  long in_FS_OFFSET;
  uchar tc;
  uchar se;
  tree node;
  tree _node_5;
  tree _node;
  tree _node_1;
  tree _node_2;
  tree _node_3;
  tree _node_4;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  tc = '\x01';
  se = '\0';
  node = *(tree *)&t->field_0x28;
  while (uVar1 = handled_component_p(node), uVar1 != '\0') {
    if (((*(short *)node == 0x2d) || (*(short *)node == 0x2e)) &&
       (**(short **)(*(long *)&node->field_0x28 + 0x10) == 0xf)) {
      _node = *(tree *)&node->field_0x30;
      if ((_node != (tree)0x0) && ((_node->field_0x2 & 2) == 0)) {
        tc = '\0';
      }
      if ((_node != (tree)0x0) && ((_node->field_0x2 & 1) != 0)) {
        se = '\x01';
      }
      if (*(long *)&node->field_0x38 != 0) {
        _node_1 = *(tree *)&node->field_0x38;
        if ((_node_1 != (tree)0x0) && ((_node_1->field_0x2 & 2) == 0)) {
          tc = '\0';
        }
        if ((_node_1 != (tree)0x0) && ((_node_1->field_0x2 & 1) != 0)) {
          se = '\x01';
        }
      }
      if (*(long *)&node->field_0x40 != 0) {
        _node_2 = *(tree *)&node->field_0x40;
        if ((_node_2 != (tree)0x0) && ((_node_2->field_0x2 & 2) == 0)) {
          tc = '\0';
        }
        if ((_node_2 != (tree)0x0) && ((_node_2->field_0x2 & 1) != 0)) {
          se = '\x01';
        }
      }
    }
    else if ((*(short *)node == 0x29) && (**(short **)&node->field_0x30 == 0x1f)) {
      if (*(long *)&node->field_0x38 != 0) {
        _node_3 = *(tree *)&node->field_0x38;
        if ((_node_3 != (tree)0x0) && ((_node_3->field_0x2 & 2) == 0)) {
          tc = '\0';
        }
        if ((_node_3 != (tree)0x0) && ((_node_3->field_0x2 & 1) != 0)) {
          se = '\x01';
        }
      }
    }
    else if (*(short *)node == 0x2a) {
      _node_4 = *(tree *)&node->field_0x38;
      if ((_node_4 != (tree)0x0) && ((_node_4->field_0x2 & 2) == 0)) {
        tc = '\0';
      }
      if ((_node_4 != (tree)0x0) && ((_node_4->field_0x2 & 1) != 0)) {
        se = '\x01';
      }
    }
    node = *(tree *)&node->field_0x28;
  }
  node = (tree)(*_htab_find_slot_with_hash)(node,&tc,&se);
  if (*(short *)node == 0x2f) {
    _node_5 = *(tree *)&node->field_0x28;
    if ((_node_5 != (tree)0x0) && ((_node_5->field_0x2 & 2) == 0)) {
      tc = '\0';
    }
    if ((_node_5 != (tree)0x0) && ((_node_5->field_0x2 & 1) != 0)) {
      se = '\x01';
    }
  }
  else if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)node * 4) != 1) {
    if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)node * 4) == 3) {
      ptVar2 = staticp(node);
      tc = tc & ptVar2 != (tree)0x0;
    }
    else {
      tc = '\0';
      se = se | node->field_0x2 & 1;
    }
  }
  t->field_0x2 = t->field_0x2 & 0xfd | (tc & 1) * '\x02';
  t->field_0x2 = t->field_0x2 & 0xfe | se & 1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree build0_stat(tree_code code,tree tt)

{
  tree ptVar1;
  tree t;
  
  if (tree_code_length[code] != '\0') {
    fancy_abort("tree.c",0xdef,&DAT_00117460);
  }
  ptVar1 = make_node_stat(code);
  *(tree *)&ptVar1->field_0x10 = tt;
  return ptVar1;
}



tree build1_stat(tree_code code,tree type,tree node)

{
  tree t_00;
  tree *pptVar1;
  int length;
  tree t;
  
  if (tree_code_length[code] != '\x01') {
    fancy_abort("tree.c",0xe12,&DAT_00117460);
  }
  t_00 = (tree)ggc_alloc_stat(0x30);
  memset(t_00,0,0x18);
  *(short *)t_00 = (short)code;
  *(tree *)&t_00->field_0x10 = type;
  *(undefined4 *)&t_00->field_0x18 = 0;
  *(tree *)&t_00->field_0x28 = node;
  pptVar1 = tree_block(t_00);
  *pptVar1 = (tree)0x0;
  if ((node != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)node * 4) != 2))
  {
    t_00->field_0x2 = t_00->field_0x2 & 0xfe | node->field_0x2 & 1;
    t_00->field_0x2 = t_00->field_0x2 & 0xef | (byte)(((byte)node->field_0x2 >> 4 & 1) << 4);
  }
  if (*(int *)(tree_code_type + (long)code * 4) == 8) {
    t_00->field_0x2 = t_00->field_0x2 | 1;
  }
  else if (code == 0x81) {
    t_00->field_0x2 = t_00->field_0x2 | 1;
    t_00->field_0x2 = t_00->field_0x2 & 0xef;
  }
  else {
    if ((uint)code < 0x82) {
      if ((uint)code < 0x32) {
        if (0x2e < (uint)code) {
          t_00->field_0x2 = t_00->field_0x2 & 0xef;
          return t_00;
        }
      }
      else if (code == ADDR_EXPR) {
        if (node == (tree)0x0) {
          return t_00;
        }
        recompute_tree_invariant_for_addr_expr(t_00);
        return t_00;
      }
    }
    if ((((*(int *)(tree_code_type + (long)code * 4) == 6) || (code == VIEW_CONVERT_EXPR)) &&
        (node != (tree)0x0)) &&
       ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)node * 4) != 2 &&
        ((node->field_0x2 & 2) != 0)))) {
      t_00->field_0x2 = t_00->field_0x2 | 2;
    }
    if (((*(int *)(tree_code_type + (long)code * 4) == 4) && (node != (tree)0x0)) &&
       ((node->field_0x2 & 8) != 0)) {
      t_00->field_0x2 = t_00->field_0x2 | 8;
    }
  }
  return t_00;
}



tree build2_stat(tree_code code,tree tt,tree arg0,tree arg1)

{
  char cVar1;
  tree ptVar2;
  uchar constant;
  uchar read_only;
  uchar side_effects;
  tree t;
  
  if (tree_code_length[code] != '\x02') {
    fancy_abort("tree.c",0xe5f,&DAT_00117460);
  }
  if ((((((code == MINUS_EXPR) || (code == PLUS_EXPR)) || (code == MULT_EXPR)) &&
       (((arg0 != (tree)0x0 && (arg1 != (tree)0x0)) &&
        ((tt != (tree)0x0 && ((*(short *)tt == 10 || (*(short *)tt == 0xc)))))))) &&
      ((*(ushort *)(sizetype_tab + 0x3c) & 0x3ff) == (*(ushort *)&tt->field_0x3c & 0x3ff))) &&
     ((*(short *)arg0 != 0x17 || (*(short *)arg1 != 0x17)))) {
    fancy_abort("tree.c",0xe67,&DAT_00117460);
  }
  if ((((code == POINTER_PLUS_EXPR) && (arg0 != (tree)0x0)) && (arg1 != (tree)0x0)) &&
     (tt != (tree)0x0)) {
    if ((((*(short *)tt == 10) || (*(short *)tt == 0xc)) &&
        ((**(short **)&arg0->field_0x10 == 10 || (**(short **)&arg0->field_0x10 == 0xc)))) &&
       (((**(short **)&arg1->field_0x10 == 6 || (**(short **)&arg1->field_0x10 == 7)) ||
        (**(short **)&arg1->field_0x10 == 8)))) {
      cVar1 = useless_type_conversion_p(sizetype_tab,*(undefined8 *)&arg1->field_0x10);
      if (cVar1 != '\0') goto LAB_00107b8f;
    }
    fancy_abort("tree.c",0xe6b,&DAT_00117460);
  }
LAB_00107b8f:
  ptVar2 = make_node_stat(code);
  *(tree *)&ptVar2->field_0x10 = tt;
  if ((*(int *)(tree_code_type + (long)code * 4) == 5) ||
     (*(int *)(tree_code_type + (long)code * 4) == 7)) {
    constant = '\x01';
  }
  else {
    constant = '\0';
  }
  read_only = '\x01';
  side_effects = ptVar2->field_0x2 & 1;
  *(tree *)&ptVar2->field_0x28 = arg0;
  if ((arg0 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) != 2))
  {
    if ((arg0->field_0x2 & 1) != 0) {
      side_effects = '\x01';
    }
    if (((arg0->field_0x2 & 0x10) == 0) &&
       (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) != 1)) {
      read_only = '\0';
    }
    if ((arg0->field_0x2 & 2) == 0) {
      constant = '\0';
    }
  }
  *(tree *)&ptVar2->field_0x30 = arg1;
  if ((arg1 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg1 * 4) != 2))
  {
    if ((arg1->field_0x2 & 1) != 0) {
      side_effects = '\x01';
    }
    if (((arg1->field_0x2 & 0x10) == 0) &&
       (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg1 * 4) != 1)) {
      read_only = '\0';
    }
    if ((arg1->field_0x2 & 2) == 0) {
      constant = '\0';
    }
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xef | read_only << 4;
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfd | constant * '\x02';
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfe | side_effects;
  if (((*(int *)(tree_code_type + (long)code * 4) == 4) && (arg0 != (tree)0x0)) &&
     ((arg0->field_0x2 & 8) != 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xf7 | cVar1 * '\b';
  return ptVar2;
}



tree build3_stat(tree_code code,tree tt,tree arg0,tree arg1,tree arg2)

{
  char cVar1;
  tree ptVar2;
  uchar read_only;
  uchar side_effects;
  uchar constant;
  tree t;
  
  if (tree_code_length[code] != '\x03') {
    fancy_abort("tree.c",0xe93,&DAT_00117460);
  }
  if (*(int *)(tree_code_type + (long)code * 4) == 9) {
    fancy_abort("tree.c",0xe94,&DAT_00117460);
  }
  ptVar2 = make_node_stat(code);
  *(tree *)&ptVar2->field_0x10 = tt;
  read_only = '\x01';
  if ((((code == COND_EXPR) && (tt == global_trees[38])) && (arg1 == (tree)0x0)) &&
     (arg2 == (tree)0x0)) {
    side_effects = '\x01';
  }
  else {
    side_effects = ptVar2->field_0x2 & 1;
  }
  *(tree *)&ptVar2->field_0x28 = arg0;
  if ((arg0 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) != 2))
  {
    if ((arg0->field_0x2 & 1) != 0) {
      side_effects = '\x01';
    }
    if (((arg0->field_0x2 & 0x10) == 0) &&
       (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) != 1)) {
      read_only = '\0';
    }
  }
  *(tree *)&ptVar2->field_0x30 = arg1;
  if ((arg1 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg1 * 4) != 2))
  {
    if ((arg1->field_0x2 & 1) != 0) {
      side_effects = '\x01';
    }
    if (((arg1->field_0x2 & 0x10) == 0) &&
       (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg1 * 4) != 1)) {
      read_only = '\0';
    }
  }
  *(tree *)&ptVar2->field_0x38 = arg2;
  if ((arg2 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg2 * 4) != 2))
  {
    if ((arg2->field_0x2 & 1) != 0) {
      side_effects = '\x01';
    }
    if (((arg2->field_0x2 & 0x10) == 0) &&
       (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg2 * 4) != 1)) {
      read_only = '\0';
    }
  }
  if (code == COND_EXPR) {
    ptVar2->field_0x2 = ptVar2->field_0x2 & 0xef | read_only << 4;
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfe | side_effects;
  if (((*(int *)(tree_code_type + (long)code * 4) == 4) && (arg0 != (tree)0x0)) &&
     ((arg0->field_0x2 & 8) != 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xf7 | cVar1 * '\b';
  return ptVar2;
}



tree build4_stat(tree_code code,tree tt,tree arg0,tree arg1,tree arg2,tree arg3)

{
  char cVar1;
  tree ptVar2;
  uchar side_effects;
  uchar read_only;
  uchar constant;
  tree t;
  
  if (tree_code_length[code] != '\x04') {
    fancy_abort("tree.c",0xebc,&DAT_00117460);
  }
  ptVar2 = make_node_stat(code);
  *(tree *)&ptVar2->field_0x10 = tt;
  side_effects = ptVar2->field_0x2 & 1;
  *(tree *)&ptVar2->field_0x28 = arg0;
  if (((arg0 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) != 2)
      ) && ((arg0->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x30 = arg1;
  if (((arg1 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg1 * 4) != 2)
      ) && ((arg1->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x38 = arg2;
  if (((arg2 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg2 * 4) != 2)
      ) && ((arg2->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x40 = arg3;
  if (((arg3 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg3 * 4) != 2)
      ) && ((arg3->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfe | side_effects;
  if (((*(int *)(tree_code_type + (long)code * 4) == 4) && (arg0 != (tree)0x0)) &&
     ((arg0->field_0x2 & 8) != 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xf7 | cVar1 * '\b';
  return ptVar2;
}



tree build5_stat(tree_code code,tree tt,tree arg0,tree arg1,tree arg2,tree arg3,tree arg4)

{
  char cVar1;
  tree ptVar2;
  uchar side_effects;
  uchar read_only;
  uchar constant;
  tree t;
  
  if (tree_code_length[code] != '\x05') {
    fancy_abort("tree.c",0xed7,&DAT_00117460);
  }
  ptVar2 = make_node_stat(code);
  *(tree *)&ptVar2->field_0x10 = tt;
  side_effects = ptVar2->field_0x2 & 1;
  *(tree *)&ptVar2->field_0x28 = arg0;
  if (((arg0 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) != 2)
      ) && ((arg0->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x30 = arg1;
  if (((arg1 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg1 * 4) != 2)
      ) && ((arg1->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x38 = arg2;
  if (((arg2 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg2 * 4) != 2)
      ) && ((arg2->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x40 = arg3;
  if (((arg3 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg3 * 4) != 2)
      ) && ((arg3->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x48 = arg4;
  if (((arg4 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg4 * 4) != 2)
      ) && ((arg4->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfe | side_effects;
  if (((*(int *)(tree_code_type + (long)code * 4) == 4) && (arg0 != (tree)0x0)) &&
     ((arg0->field_0x2 & 8) != 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xf7 | cVar1 * '\b';
  return ptVar2;
}



tree build6_stat(tree_code code,tree tt,tree arg0,tree arg1,tree arg2,tree arg3,tree arg4,tree arg5)

{
  char cVar1;
  tree ptVar2;
  uchar side_effects;
  uchar read_only;
  uchar constant;
  tree t;
  
  if (code != 0x98) {
    fancy_abort("tree.c",0xef3,&DAT_00117460);
  }
  ptVar2 = make_node_stat(code);
  *(tree *)&ptVar2->field_0x10 = tt;
  side_effects = ptVar2->field_0x2 & 1;
  *(tree *)&ptVar2->field_0x28 = arg0;
  if (((arg0 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) != 2)
      ) && ((arg0->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x30 = arg1;
  if (((arg1 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg1 * 4) != 2)
      ) && ((arg1->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x38 = arg2;
  if (((arg2 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg2 * 4) != 2)
      ) && ((arg2->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x40 = arg3;
  if (((arg3 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg3 * 4) != 2)
      ) && ((arg3->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  *(tree *)&ptVar2->field_0x48 = arg4;
  if (((arg4 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg4 * 4) != 2)
      ) && ((arg4->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  if (code == 0x98) {
    side_effects = '\0';
  }
  *(tree *)&ptVar2->field_0x50 = arg5;
  if (((arg5 != (tree)0x0) && (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)arg5 * 4) != 2)
      ) && ((arg5->field_0x2 & 1) != 0)) {
    side_effects = '\x01';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xfe | side_effects;
  if (((code == 0x98) && (arg5 != (tree)0x0)) && ((arg5->field_0x2 & 8) != 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  ptVar2->field_0x2 = ptVar2->field_0x2 & 0xf7 | cVar1 * '\b';
  return ptVar2;
}



tree build_nt(tree_code code,...)

{
  byte bVar1;
  long lVar2;
  char in_AL;
  tree ptVar3;
  undefined8 *puVar4;
  undefined8 in_RCX;
  undefined8 in_RDX;
  ulong uVar5;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  int i;
  int length;
  tree t;
  va_list p;
  undefined8 local_b8 [4];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8[1] = in_RSI;
  local_b8[2] = in_RDX;
  local_b8[3] = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  if (*(int *)(tree_code_type + (long)code * 4) == 9) {
    fancy_abort("tree.c",0xf18,&DAT_00117460);
  }
  p[0].gp_offset = 8;
  p[0].overflow_arg_area = &stack0x00000008;
  ptVar3 = make_node_stat(code);
  bVar1 = tree_code_length[code];
  for (i = 0; i < (int)(uint)bVar1; i = i + 1) {
    if (p[0].gp_offset < 0x30) {
      uVar5 = (ulong)p[0].gp_offset;
      p[0].gp_offset = p[0].gp_offset + 8;
      puVar4 = (undefined8 *)((long)local_b8 + uVar5);
    }
    else {
      puVar4 = (undefined8 *)p[0].overflow_arg_area;
      p[0].overflow_arg_area = (void *)((long)p[0].overflow_arg_area + 8);
    }
    *(undefined8 *)(&ptVar3->field_0x28 + (long)i * 8) = *puVar4;
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar3;
}



tree build_nt_call_list(tree fn,tree arglist)

{
  int iVar1;
  tree ptVar2;
  tree local_28;
  int i;
  tree t;
  
  iVar1 = list_length(arglist);
  ptVar2 = build_vl_exp_stat(CALL_EXPR,iVar1 + 3);
  *(tree *)&ptVar2->field_0x30 = fn;
  *(undefined8 *)&ptVar2->field_0x38 = 0;
  i = 0;
  for (local_28 = arglist; local_28 != (tree)0x0; local_28 = *(tree *)&local_28->field_0x8) {
    *(undefined8 *)(&ptVar2->field_0x28 + (long)(i + 3) * 8) = *(undefined8 *)&local_28->field_0x20;
    i = i + 1;
  }
  return ptVar2;
}



tree build_nt_call_vec(tree fn,VEC_tree_gc *args)

{
  uint uVar1;
  int iVar2;
  VEC_tree_base *pVVar3;
  long in_FS_OFFSET;
  uint ix;
  tree t;
  tree ret;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar3 = &args->base;
  if (args == (VEC_tree_gc *)0x0) {
    pVVar3 = (VEC_tree_base *)0x0;
  }
  uVar1 = VEC_tree_base_length(pVVar3);
  ret = build_vl_exp_stat(CALL_EXPR,uVar1 + 3);
  *(tree *)&ret->field_0x30 = fn;
  *(undefined8 *)&ret->field_0x38 = 0;
  ix = 0;
  while( true ) {
    pVVar3 = &args->base;
    if (args == (VEC_tree_gc *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    iVar2 = VEC_tree_base_iterate(pVVar3,ix,&t);
    if (iVar2 == 0) break;
    *(tree *)(&ret->field_0x28 + (ulong)(ix + 3) * 8) = t;
    ix = ix + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ret;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree build_decl_stat(location_t loc,tree_code code,tree name,tree type)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = make_node_stat(code);
  *(location_t *)&ptVar1->field_0x18 = loc;
  *(tree *)&ptVar1->field_0x20 = name;
  *(tree *)&ptVar1->field_0x10 = type;
  if (((code == VAR_DECL) || (code == PARM_DECL)) || (code == RESULT_DECL)) {
    layout_decl(ptVar1,0);
  }
  return ptVar1;
}



tree build_fn_decl(char *name,tree type)

{
  tree ptVar1;
  tree id;
  tree decl;
  
  ptVar1 = (tree)get_identifier();
  ptVar1 = build_decl_stat(input_location,FUNCTION_DECL,ptVar1,type);
  ptVar1->field_0x3b = ptVar1->field_0x3b | 2;
  ptVar1->field_0x3 = ptVar1->field_0x3 | 8;
  ptVar1->field_0x39 = ptVar1->field_0x39 | 0x10;
  ptVar1->field_0x3 = ptVar1->field_0x3 | 2;
  return ptVar1;
}



tree build_block(tree vars,tree subblocks,tree supercontext,tree chain)

{
  tree ptVar1;
  tree block;
  
  ptVar1 = make_node_stat(BLOCK);
  *(tree *)&ptVar1->field_0x20 = vars;
  *(tree *)&ptVar1->field_0x30 = subblocks;
  *(tree *)&ptVar1->field_0x38 = supercontext;
  *(tree *)&ptVar1->field_0x8 = chain;
  return ptVar1;
}



// WARNING: Could not reconcile some variable overlaps

expanded_location * expand_location(expanded_location *__return_storage_ptr__,source_location loc)

{
  char **ppcVar1;
  line_map *map;
  expanded_location xloc;
  
  if (loc < 2) {
    if (loc == 0) {
      xloc.file = (char *)0x0;
    }
    else {
      xloc.file = "<built-in>";
    }
    xloc.line = 0;
    xloc.column = 0;
    xloc.sysp = '\0';
  }
  else {
    ppcVar1 = (char **)linemap_lookup(line_table,loc);
    xloc.file = *ppcVar1;
    xloc.line = *(int *)(ppcVar1 + 1) +
                (loc - *(int *)((long)ppcVar1 + 0xc) >> (*(byte *)((long)ppcVar1 + 0x16) & 0x1f));
    xloc.column = (1 << (*(byte *)((long)ppcVar1 + 0x16) & 0x1f)) - 1U &
                  loc - *(int *)((long)ppcVar1 + 0xc);
    xloc.sysp = *(char *)((long)ppcVar1 + 0x15) != '\0';
  }
  __return_storage_ptr__->file = xloc.file;
  *(ulong *)&__return_storage_ptr__->line = CONCAT44(xloc.column,xloc.line);
  *(ulong *)&__return_storage_ptr__->sysp = CONCAT71(xloc._17_7_,xloc.sysp);
  return __return_storage_ptr__;
}



void protected_set_expr_location(tree t,location_t loc)

{
  if ((((t != (tree)0x0) && (t != (tree)0x0)) &&
      (3 < *(uint *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4))) &&
     (*(uint *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) < 0xb)) {
    *(location_t *)&t->field_0x18 = loc;
  }
  return;
}



tree build_decl_attribute_variant(tree ddecl,tree attribute)

{
  *(tree *)&ddecl->field_0x58 = attribute;
  return ddecl;
}



hashval_t iterative_hash_hashval_t(hashval_t val,hashval_t val2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  hashval_t a;
  
  uVar1 = (-0x61c88647 - val) - val2 ^ val2 >> 0xd;
  uVar2 = (val - val2) - uVar1 ^ uVar1 << 8;
  uVar3 = (val2 - uVar1) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar2 >> 0xf;
}



hashval_t iterative_hash_host_wide_int(long val,hashval_t val2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  hashval_t a;
  int zero;
  hashval_t b;
  
  iVar4 = (int)((ulong)val >> 0x20);
  uVar1 = ((int)val - iVar4) - val2 ^ val2 >> 0xd;
  uVar2 = (iVar4 - val2) - uVar1 ^ uVar1 << 8;
  uVar3 = (val2 - uVar1) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar2 >> 0xf;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree build_type_attribute_qual_variant(tree ttype,tree attribute,int quals)

{
  int iVar1;
  tree type;
  long in_FS_OFFSET;
  tree_code code;
  uint precision;
  hashval_t hashcode;
  tree ntype;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = attribute_list_equal(*(const_tree *)&ttype->field_0x30,attribute);
  if (iVar1 == 0) {
    hashcode = 0;
    code = (tree_code)*(ushort *)ttype;
    if ((((*(short *)ttype == 0x10) || (*(short *)ttype == 0x11)) || (*(short *)ttype == 0x12)) ||
       (*(short *)ttype == 6)) {
      warning(0x2d,"ignoring attributes applied to %qT after definition",
              *(undefined8 *)&ttype->field_0x80);
      ttype = build_qualified_type(ttype,quals);
    }
    else {
      type = build_qualified_type(ttype,0);
      ntype = build_distinct_type_copy(type);
      *(tree *)&ntype->field_0x30 = attribute;
      hashcode = iterative_hash(&code,4,hashcode);
      if (*(long *)&ntype->field_0x10 != 0) {
        hashcode = iterative_hash(*(long *)&ntype->field_0x10 + 0x38,4,hashcode);
      }
      hashcode = attribute_hash_list(attribute,hashcode);
      switch(*(undefined2 *)ntype) {
      case 8:
        hashcode = iterative_hash(*(long *)&ntype->field_0x70 + 0x18,8,hashcode);
        hashcode = iterative_hash(*(long *)&ntype->field_0x70 + 0x20,8,hashcode);
        break;
      case 9:
      case 0xb:
        precision = (uint)(*(ushort *)&ntype->field_0x3c & 0x3ff);
        hashcode = iterative_hash(&precision,4,hashcode);
        break;
      case 0xf:
        if (*(long *)&ntype->field_0x18 != 0) {
          hashcode = iterative_hash(*(long *)&ntype->field_0x18 + 0x38,4,hashcode);
        }
        break;
      case 0x14:
        hashcode = type_hash_list(*(const_tree *)&ntype->field_0x18,hashcode);
      }
      ntype = type_hash_canon(hashcode,ntype);
      if ((*(long *)&type->field_0x98 == 0) || (iVar1 = (*_strrchr)(ntype), iVar1 == 0)) {
        *(undefined8 *)&ntype->field_0x98 = 0;
      }
      else if (ntype == *(tree *)&ntype->field_0x98) {
        *(undefined8 *)&ntype->field_0x98 = *(undefined8 *)&type->field_0x98;
      }
      ttype = build_qualified_type(ntype,quals);
    }
  }
  else if (quals != ((uint)(byte)ttype->field_0x7 << 8 |
                    (uint)((byte)ttype->field_0x2 >> 4 & 1) |
                    (uint)((byte)ttype->field_0x2 >> 3 & 1) * 2 |
                    (uint)((byte)ttype->field_0x3d >> 5 & 1) << 2)) {
    ttype = build_qualified_type(ttype,quals);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ttype;
}



tree build_type_attribute_variant(tree ttype,tree attribute)

{
  tree ptVar1;
  
  ptVar1 = build_type_attribute_qual_variant
                     (ttype,attribute,
                      (uint)((byte)ttype->field_0x2 >> 4 & 1) |
                      (uint)((byte)ttype->field_0x2 >> 3 & 1) * 2 |
                      (uint)((byte)ttype->field_0x3d >> 5 & 1) << 2 |
                      (uint)(byte)ttype->field_0x7 << 8);
  return ptVar1;
}



void free_lang_data_in_binfo(tree binfo)

{
  int iVar1;
  VEC_tree_base *vec_;
  long in_FS_OFFSET;
  uint i;
  tree t;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)binfo != 0x95) {
    fancy_abort("tree.c",0x1055,&DAT_00117460);
  }
  *(undefined8 *)&binfo->field_0x20 = 0;
  *(undefined8 *)&binfo->field_0x38 = 0;
  *(undefined8 *)&binfo->field_0x40 = 0;
  *(undefined8 *)&binfo->field_0x48 = 0;
  i = 0;
  while( true ) {
    if (binfo == (tree)0xffffffffffffffa8) {
      vec_ = (VEC_tree_base *)0x0;
    }
    else {
      vec_ = (VEC_tree_base *)&binfo->field_0x58;
    }
    iVar1 = VEC_tree_base_iterate(vec_,i,&t);
    if (iVar1 == 0) break;
    free_lang_data_in_binfo(t);
    i = i + 1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void free_lang_data_in_type(tree type)

{
  tree ptVar1;
  int quals;
  tree p;
  tree prev;
  tree member;
  tree arg_type;
  
  if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)type * 4) != 2) {
    fancy_abort("tree.c",0x1066,&DAT_00117460);
  }
  (*_strlen)(type);
  type->field_0x4 = type->field_0x4 & 0xfd;
  type->field_0x4 = type->field_0x4 & 0xfb;
  type->field_0x4 = type->field_0x4 & 0xf7;
  type->field_0x4 = type->field_0x4 & 0xef;
  type->field_0x4 = type->field_0x4 & 0xdf;
  type->field_0x4 = type->field_0x4 & 0xbf;
  type->field_0x4 = type->field_0x4 & 0x7f;
  if (*(short *)type == 0x14) {
    for (p = *(tree *)&type->field_0x18; p != (tree)0x0; p = *(tree *)&p->field_0x8) {
      ptVar1 = *(tree *)&p->field_0x20;
      if (((ptVar1->field_0x2 & 0x10) != 0) || ((ptVar1->field_0x2 & 8) != 0)) {
        ptVar1 = build_qualified_type
                           (ptVar1,(uint)(byte)ptVar1->field_0x7 << 8 |
                                   (uint)((byte)ptVar1->field_0x3d >> 5 & 1) << 2);
        *(tree *)&p->field_0x20 = ptVar1;
        free_lang_data_in_type(*(tree *)&p->field_0x20);
      }
    }
  }
  if (((*(short *)type == 0x10) || (*(short *)type == 0x11)) || (*(short *)type == 0x12)) {
    prev = (tree)0x0;
    for (member = *(tree *)&type->field_0x18; member != (tree)0x0;
        member = *(tree *)&member->field_0x8) {
      if (*(short *)member == 0x1f) {
        if (prev == (tree)0x0) {
          *(tree *)&type->field_0x18 = member;
        }
        else {
          *(tree *)&prev->field_0x8 = member;
        }
        prev = member;
      }
    }
    if (prev == (tree)0x0) {
      *(undefined8 *)&type->field_0x18 = 0;
    }
    else {
      *(undefined8 *)&prev->field_0x8 = 0;
    }
    *(undefined8 *)&type->field_0x70 = 0;
    if (*(long *)&type->field_0x88 != 0) {
      free_lang_data_in_binfo(*(tree *)&type->field_0x88);
    }
  }
  else {
    *(undefined8 *)&type->field_0x88 = 0;
  }
  *(undefined8 *)&type->field_0x90 = 0;
  if (debug_info_level == 0) {
    *(undefined8 *)&type->field_0x8 = 0;
  }
  return;
}



uchar need_assembler_name_p(tree decl)

{
  uchar uVar1;
  long lVar2;
  
  if ((*(short *)decl == 0x1d) || (*(short *)decl == 0x20)) {
    if ((tree_contains_struct[*(ushort *)decl][0xd] == '\0') ||
       ((tree_contains_struct[*(ushort *)decl][0xd] != '\0' && (*(long *)&decl->field_0x78 != 0))))
    {
      uVar1 = '\0';
    }
    else if ((decl->field_0x39 & 8) == 0) {
      if ((((*(short *)decl == 0x20) && ((decl->field_0x3 & 4) == 0)) &&
          ((decl->field_0x3 & 8) == 0)) && ((decl->field_0x3b & 2) == 0)) {
        uVar1 = '\0';
      }
      else {
        if (*(short *)decl == 0x1d) {
          if (((decl->field_0xd9 & 0x18) != 0) && ((decl->field_0xd9 & 0x18) != 8)) {
            return '\0';
          }
          lVar2 = cgraph_get_node(decl);
          if (lVar2 != 0) {
            return '\x01';
          }
          if (((decl->field_0x3 & 1) == 0) && ((decl->field_0x3 & 8) == 0)) {
            return '\0';
          }
        }
        uVar1 = '\x01';
      }
    }
    else {
      uVar1 = '\0';
    }
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



void free_lang_data_in_block(tree fn,tree block,pointer_set_t *locals)

{
  int iVar1;
  tree *tp;
  tree t;
  
  tp = (tree *)&block->field_0x20;
  while (*tp != (tree)0x0) {
    iVar1 = pointer_set_contains(locals,*tp);
    if (iVar1 == 0) {
      *tp = *(tree *)&(*tp)->field_0x8;
    }
    else {
      tp = (tree *)&(*tp)->field_0x8;
    }
  }
  for (t = *(tree *)&block->field_0x30; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
    free_lang_data_in_block(fn,t,locals);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void free_lang_data_in_decl(tree decl)

{
  short *psVar1;
  char cVar2;
  tree ptVar3;
  pointer_set_t *locals_00;
  tree_code code;
  tree t;
  tree context;
  tree expr;
  pointer_set_t *locals;
  
  if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)decl * 4) != 3) {
    fancy_abort("tree.c",0x110c,&DAT_00117460);
  }
  (*_strlen)(decl);
  decl->field_0x4 = decl->field_0x4 & 0xfd;
  decl->field_0x4 = decl->field_0x4 & 0xfb;
  decl->field_0x4 = decl->field_0x4 & 0xf7;
  decl->field_0x4 = decl->field_0x4 & 0xef;
  decl->field_0x4 = decl->field_0x4 & 0xdf;
  decl->field_0x4 = decl->field_0x4 & 0xbf;
  decl->field_0x4 = decl->field_0x4 & 0x7f;
  if (*(long *)&decl->field_0x20 != 0) {
    *(undefined8 *)(*(long *)&decl->field_0x20 + 0x10) = 0;
  }
  if (*(short *)decl != 0x1f) {
    ptVar3 = decl_function_context(decl);
    *(tree *)&decl->field_0x28 = ptVar3;
  }
  if ((*(long *)&decl->field_0x28 != 0) && (**(short **)&decl->field_0x28 == 0x26)) {
    *(undefined8 *)&decl->field_0x28 = 0;
  }
  if ((*(short *)decl == 0x20) && (psVar1 = *(short **)&decl->field_0x28, psVar1 != (short *)0x0)) {
    if ((*psVar1 == 0x1d) && ((*(byte *)((long)psVar1 + 0x39) & 8) != 0)) {
      *(undefined8 *)&decl->field_0x50 = 0;
    }
    if ((decl->field_0x3 & 4) != 0) {
      *(undefined8 *)&decl->field_0x28 = 0;
    }
  }
  if ((*(short *)decl == 0x1f) && (debug_info_level == 0)) {
    *(undefined8 *)&decl->field_0x90 = 0;
  }
  if (*(short *)decl == 0x1d) {
    cVar2 = gimple_has_body_p(decl);
    if (cVar2 != '\0') {
      for (t = *(tree *)&decl->field_0xa0; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
        *(tree *)&t->field_0x28 = decl;
      }
      locals_00 = (pointer_set_t *)pointer_set_create();
      for (t = *(tree *)(*(long *)&decl->field_0xb8 + 0x48); t != (tree)0x0;
          t = *(tree *)&t->field_0x8) {
        pointer_set_insert(locals_00,*(undefined8 *)&t->field_0x20);
        *(tree *)(*(long *)&t->field_0x20 + 0x28) = decl;
      }
      free_lang_data_in_block(decl,*(tree *)&decl->field_0x50,locals_00);
      pointer_set_destroy(locals_00);
    }
    *(undefined8 *)&decl->field_0x98 = 0;
  }
  else if (*(short *)decl == 0x20) {
    ptVar3 = decl_debug_expr_lookup(decl);
    if ((((ptVar3 != (tree)0x0) && (*(short *)ptVar3 == 0x20)) && ((ptVar3->field_0x3 & 4) == 0)) &&
       ((ptVar3->field_0x3b & 2) == 0)) {
      decl_debug_expr_insert(decl,(tree)0x0);
    }
    if (((decl->field_0x3b & 2) != 0) &&
       (((decl->field_0x3 & 4) == 0 || ((decl->field_0x2 & 0x10) == 0)))) {
      *(undefined8 *)&decl->field_0x50 = 0;
    }
  }
  else if (*(short *)decl == 0x23) {
    *(undefined8 *)&decl->field_0x50 = 0;
    *(undefined8 *)&decl->field_0x28 = 0;
  }
  return;
}



void save_debug_info_for_decl(tree t)

{
  if (((debug_info_level < 2) || (t == (tree)0x0)) ||
     (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) != 3)) {
    fancy_abort("tree.c",0x119e,&DAT_00117460);
  }
  return;
}



void save_debug_info_for_type(tree t)

{
  if (((debug_info_level < 2) || (t == (tree)0x0)) ||
     (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) != 2)) {
    fancy_abort("tree.c",0x11ac,&DAT_00117460);
  }
  return;
}



void add_tree_to_fld_list(tree t,free_lang_data_d *fld)

{
  if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) == 3) {
    VEC_tree_heap_safe_push(&fld->decls,t);
    if (1 < debug_info_level) {
      save_debug_info_for_decl(t);
    }
  }
  else if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) == 2) {
    VEC_tree_heap_safe_push(&fld->types,t);
    if (1 < debug_info_level) {
      save_debug_info_for_type(t);
    }
  }
  else {
    fancy_abort("tree.c",0x11c5,&DAT_00117460);
  }
  return;
}



void fld_worklist_push(tree t,free_lang_data_d *fld)

{
  uchar uVar1;
  int iVar2;
  
  if (t != (tree)0x0) {
    uVar1 = is_lang_specific(t);
    if (uVar1 == '\0') {
      iVar2 = pointer_set_contains(fld->pset,t);
      if (iVar2 == 0) {
        VEC_tree_heap_safe_push(&fld->worklist,t);
      }
    }
  }
  return;
}



tree find_decls_types_r(tree *tp,int *ws,void *data)

{
  uchar uVar1;
  int iVar2;
  VEC_tree_base *vec_;
  long in_FS_OFFSET;
  uint i;
  tree tem;
  tree tem_1;
  tree t;
  free_lang_data_d *fld;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  t = *tp;
  fld = (free_lang_data_d *)data;
  if (*(short *)t != 2) {
    uVar1 = is_lang_specific(t);
    if (uVar1 == '\0') {
      if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) == 3) {
        add_tree_to_fld_list(t,fld);
        fld_worklist_push(*(tree *)&t->field_0x20,fld);
        fld_worklist_push(*(tree *)&t->field_0x28,fld);
        fld_worklist_push(*(tree *)&t->field_0x30,fld);
        fld_worklist_push(*(tree *)&t->field_0x48,fld);
        if (*(short *)t != 0x23) {
          fld_worklist_push(*(tree *)&t->field_0x50,fld);
        }
        fld_worklist_push(*(tree *)&t->field_0x58,fld);
        fld_worklist_push(*(tree *)&t->field_0x60,fld);
        if (*(short *)t == 0x1d) {
          fld_worklist_push(*(tree *)&t->field_0xa0,fld);
          fld_worklist_push(*(tree *)&t->field_0xa8,fld);
        }
        else if (*(short *)t == 0x23) {
          fld_worklist_push(*(tree *)&t->field_0xa0,fld);
          fld_worklist_push(*(tree *)&t->field_0xb0,fld);
        }
        else if (*(short *)t == 0x1f) {
          fld_worklist_push(*(tree *)&t->field_0x70,fld);
          fld_worklist_push(*(tree *)&t->field_0x78,fld);
          fld_worklist_push(*(tree *)&t->field_0x80,fld);
          fld_worklist_push(*(tree *)&t->field_0x88,fld);
          fld_worklist_push(*(tree *)&t->field_0x90,fld);
        }
        else if (*(short *)t == 0x20) {
          fld_worklist_push(*(tree *)&t->field_0x80,fld);
          fld_worklist_push(*(tree *)&t->field_0x88,fld);
        }
        if (*(short *)t != 0x1f) {
          fld_worklist_push(*(tree *)&t->field_0x8,fld);
        }
        *ws = 0;
      }
      else if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) == 2) {
        add_tree_to_fld_list(t,fld);
        if (((*(short *)t != 0x10) && (*(short *)t != 0x11)) && (*(short *)t != 0x12)) {
          fld_worklist_push(*(tree *)&t->field_0x18,fld);
        }
        fld_worklist_push(*(tree *)&t->field_0x20,fld);
        fld_worklist_push(*(tree *)&t->field_0x28,fld);
        fld_worklist_push(*(tree *)&t->field_0x30,fld);
        fld_worklist_push(*(tree *)&t->field_0x48,fld);
        fld_worklist_push(*(tree *)&t->field_0x50,fld);
        fld_worklist_push(*(tree *)&t->field_0x60,fld);
        fld_worklist_push(*(tree *)&t->field_0x68,fld);
        if (((*(short *)t != 0x10) && (*(short *)t != 0x11)) && (*(short *)t != 0x12)) {
          fld_worklist_push(*(tree *)&t->field_0x70,fld);
        }
        fld_worklist_push(*(tree *)&t->field_0x80,fld);
        fld_worklist_push(*(tree *)&t->field_0x78,fld);
        fld_worklist_push(*(tree *)&t->field_0x90,fld);
        fld_worklist_push(*(tree *)&t->field_0x98,fld);
        if ((((*(short *)t == 0x10) || (*(short *)t == 0x11)) || (*(short *)t == 0x12)) &&
           (*(long *)&t->field_0x88 != 0)) {
          i = 0;
          while( true ) {
            if (*(long *)&t->field_0x88 == -0x58) {
              vec_ = (VEC_tree_base *)0x0;
            }
            else {
              vec_ = (VEC_tree_base *)(*(long *)&t->field_0x88 + 0x58);
            }
            iVar2 = VEC_tree_base_iterate(vec_,i,&tem);
            if (iVar2 == 0) break;
            fld_worklist_push(*(tree *)&tem->field_0x10,fld);
            i = i + 1;
          }
          tem = *(tree *)(*(long *)&t->field_0x88 + 0x28);
          if ((tem != (tree)0x0) && (*(short *)tem == 2)) {
            do {
              fld_worklist_push(*(tree *)&tem->field_0x20,fld);
              tem = *(tree *)&tem->field_0x8;
            } while (tem != (tree)0x0);
          }
        }
        if (((*(short *)t == 0x10) || (*(short *)t == 0x11)) || (*(short *)t == 0x12)) {
          for (tem_1 = *(tree *)&t->field_0x18; tem_1 != (tree)0x0;
              tem_1 = *(tree *)&tem_1->field_0x8) {
            if (*(short *)tem_1 == 0x1f) {
              fld_worklist_push(tem_1,fld);
            }
          }
        }
        fld_worklist_push(*(tree *)&t->field_0x8,fld);
        *ws = 0;
      }
      fld_worklist_push(*(tree *)&t->field_0x10,fld);
    }
    else {
      *ws = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (tree)0x0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void find_decls_types(tree t,free_lang_data_d *fld)

{
  int iVar1;
  uint uVar2;
  VEC_tree_base *pVVar3;
  tree local_10;
  
  local_10 = t;
  while( true ) {
    iVar1 = pointer_set_contains(fld->pset,local_10);
    if (iVar1 == 0) {
      walk_tree_1(&local_10,find_decls_types_r,fld,fld->pset,(walk_tree_lh)0x0);
    }
    if (fld->worklist == (VEC_tree_heap *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    else {
      pVVar3 = (VEC_tree_base *)fld->worklist;
    }
    uVar2 = VEC_tree_base_length(pVVar3);
    if (uVar2 == 0) break;
    if (fld->worklist == (VEC_tree_heap *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    else {
      pVVar3 = (VEC_tree_base *)fld->worklist;
    }
    local_10 = VEC_tree_base_pop(pVVar3);
  }
  return;
}



tree get_eh_types_for_runtime(tree list)

{
  tree ptVar1;
  tree ptVar2;
  long local_30;
  tree prev;
  tree head;
  tree n;
  
  if (list == (tree)0x0) {
    ptVar1 = (tree)0x0;
  }
  else {
    ptVar1 = (tree)lookup_type_for_runtime(*(undefined8 *)&list->field_0x20);
    ptVar1 = build_tree_list_stat((tree)0x0,ptVar1);
    prev = ptVar1;
    for (local_30 = *(long *)&list->field_0x8; local_30 != 0; local_30 = *(long *)(local_30 + 8)) {
      ptVar2 = (tree)lookup_type_for_runtime(*(undefined8 *)(local_30 + 0x20));
      ptVar2 = build_tree_list_stat((tree)0x0,ptVar2);
      *(tree *)&prev->field_0x8 = ptVar2;
      prev = *(tree *)&prev->field_0x8;
    }
  }
  return ptVar1;
}



void find_decls_types_in_eh_region(eh_region r,free_lang_data_d *fld)

{
  eh_region_type eVar1;
  tree ptVar2;
  eh_catch c;
  
  eVar1 = r->type;
  if (eVar1 == ERT_MUST_NOT_THROW) {
    walk_tree_1((tree *)&r->u,find_decls_types_r,fld,fld->pset,(walk_tree_lh)0x0);
  }
  else if (eVar1 < 4) {
    if (eVar1 == ERT_ALLOWED_EXCEPTIONS) {
      ptVar2 = get_eh_types_for_runtime(*(tree *)&r->u);
      *(tree *)&r->u = ptVar2;
      walk_tree_1((tree *)&r->u,find_decls_types_r,fld,fld->pset,(walk_tree_lh)0x0);
    }
    else if (((eVar1 < ERT_MUST_NOT_THROW) && (eVar1 != ERT_CLEANUP)) && (eVar1 == ERT_TRY)) {
      for (c = *(eh_catch *)&r->u; c != (eh_catch)0x0; c = c->next_catch) {
        ptVar2 = get_eh_types_for_runtime(c->type_list);
        c->type_list = ptVar2;
        walk_tree_1(&c->type_list,find_decls_types_r,fld,fld->pset,(walk_tree_lh)0x0);
      }
    }
  }
  return;
}



void find_decls_types_in_node(cgraph_node *n,free_lang_data_d *fld)

{
  long lVar1;
  char cVar2;
  uchar uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  gimple_stmt_iterator local_a8;
  free_lang_data_d *local_88;
  cgraph_node *local_80;
  uint i;
  basic_block bb;
  tree t;
  eh_region r;
  function *fn;
  gimple stmt;
  tree arg;
  gimple phi;
  tree *arg_p;
  gimple_stmt_iterator si;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = fld;
  local_80 = n;
  find_decls_types(n->decl,fld);
  cVar2 = gimple_has_body_p(local_80->decl);
  if (cVar2 != '\0') {
    if ((current_function_decl != 0) || (cfun != 0)) {
      fancy_abort("tree.c",0x12b8,&DAT_00117460);
    }
    fn = *(function **)&local_80->decl->field_0xb8;
    for (t = fn->local_decls; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
      find_decls_types(*(tree *)&t->field_0x20,local_88);
    }
    for (r = fn->eh->region_tree; r != (eh_region)0x0; r = ehr_next(r,(eh_region)0x0)) {
      find_decls_types_in_eh_region(r,local_88);
    }
    for (bb = fn->cfg->x_entry_block_ptr->next_bb; bb != fn->cfg->x_exit_block_ptr; bb = bb->next_bb
        ) {
      gsi_start_phis(&local_a8,bb);
      si.ptr = local_a8.ptr;
      si.seq = local_a8.seq;
      si.bb = local_a8.bb;
      while (uVar3 = gsi_end_p((gimple_stmt_iterator)CONCAT816(si.bb,CONCAT88(si.seq,si.ptr))),
            uVar3 == '\0') {
        phi = gsi_stmt((gimple_stmt_iterator)CONCAT816(si.bb,CONCAT88(si.seq,si.ptr)));
        i = 0;
        while (uVar4 = gimple_phi_num_args(phi), i < uVar4) {
          arg_p = gimple_phi_arg_def_ptr(phi,(ulong)i);
          find_decls_types(*arg_p,local_88);
          i = i + 1;
        }
        gsi_next(&si);
      }
      gsi_start_bb(&local_a8,bb);
      si.ptr = local_a8.ptr;
      si.seq = local_a8.seq;
      si.bb = local_a8.bb;
      while (uVar3 = gsi_end_p((gimple_stmt_iterator)CONCAT816(si.bb,CONCAT88(si.seq,si.ptr))),
            uVar3 == '\0') {
        stmt = gsi_stmt((gimple_stmt_iterator)CONCAT816(si.bb,CONCAT88(si.seq,si.ptr)));
        i = 0;
        while (uVar4 = gimple_num_ops(stmt), i < uVar4) {
          arg = gimple_op(stmt,i);
          find_decls_types(arg,local_88);
          i = i + 1;
        }
        gsi_next(&si);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void find_decls_types_in_var(varpool_node *v,free_lang_data_d *fld)

{
  find_decls_types(v->decl,fld);
  return;
}



void assign_assembler_name_if_neeeded(tree t)

{
  undefined4 uVar1;
  uchar uVar2;
  location_t saved_location;
  
  uVar2 = need_assembler_name_p(t);
  uVar1 = input_location;
  if (uVar2 != '\0') {
    input_location = *(undefined4 *)&t->field_0x18;
    decl_assembler_name(t);
  }
  input_location = uVar1;
  return;
}



void free_lang_data_in_cgraph(void)

{
  long lVar1;
  int iVar2;
  VEC_alias_pair_base *vec_;
  VEC_tree_base *pVVar3;
  long in_FS_OFFSET;
  uint i;
  tree t;
  alias_pair *p;
  cgraph_node *n;
  varpool_node *v;
  free_lang_data_d fld;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  fld.pset = (pointer_set_t *)pointer_set_create();
  fld.worklist = (VEC_tree_heap *)0x0;
  fld.decls = VEC_tree_heap_alloc(100);
  fld.types = VEC_tree_heap_alloc(100);
  for (n = cgraph_nodes; n != (cgraph_node *)0x0; n = n->next) {
    find_decls_types_in_node(n,&fld);
  }
  i = 0;
  while( true ) {
    vec_ = alias_pairs;
    if (alias_pairs == (VEC_alias_pair_base *)0x0) {
      vec_ = (VEC_alias_pair_base *)0x0;
    }
    iVar2 = VEC_alias_pair_base_iterate(vec_,i,&p);
    if (iVar2 == 0) break;
    find_decls_types(p->decl,&fld);
    i = i + 1;
  }
  for (v = varpool_nodes_queue; v != (varpool_node *)0x0; v = v->next_needed) {
    find_decls_types_in_var(v,&fld);
  }
  i = 0;
  while( true ) {
    pVVar3 = &(fld.decls)->base;
    if (fld.decls == (VEC_tree_heap *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    iVar2 = VEC_tree_base_iterate(pVVar3,i,&t);
    if (iVar2 == 0) break;
    assign_assembler_name_if_neeeded(t);
    i = i + 1;
  }
  i = 0;
  while( true ) {
    pVVar3 = &(fld.decls)->base;
    if (fld.decls == (VEC_tree_heap *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    iVar2 = VEC_tree_base_iterate(pVVar3,i,&t);
    if (iVar2 == 0) break;
    free_lang_data_in_decl(t);
    i = i + 1;
  }
  i = 0;
  while( true ) {
    pVVar3 = &(fld.types)->base;
    if (fld.types == (VEC_tree_heap *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    iVar2 = VEC_tree_base_iterate(pVVar3,i,&t);
    if (iVar2 == 0) break;
    free_lang_data_in_type(t);
    i = i + 1;
  }
  pointer_set_destroy(fld.pset);
  VEC_tree_heap_free(&fld.worklist);
  VEC_tree_heap_free(&fld.decls);
  VEC_tree_heap_free(&fld.types);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint free_lang_data(void)

{
  tree ptVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  tree ptVar5;
  uint i;
  
  if (in_lto_p != '\0') {
    return 0;
  }
  if (flag_generate_lto == 0) {
    return 0;
  }
  for (i = 0; i < 0xb; i = i + 1) {
    if (integer_types[i] != (tree)0x0) {
      ptVar1 = integer_types[i];
      uVar2 = get_alias_set(integer_types[i]);
      *(undefined4 *)&ptVar1->field_0x44 = uVar2;
    }
  }
  free_lang_data_in_cgraph();
  global_trees[43] = integer_types[5];
  global_trees[48] = global_trees[39];
  if (*(short *)global_trees[47] == 7) {
    if (*(short *)global_trees[47] == 0xe) {
      uVar3 = vector_type_mode(global_trees[47]);
    }
    else {
      uVar3 = (uint)(byte)global_trees[47]->field_0x3e;
    }
    uVar4 = mode_for_size(8,2,0);
    if (((uVar3 == uVar4) && ((*(ushort *)&global_trees[47]->field_0x3c & 0x3ff) == 1)) &&
       ((global_trees[47]->field_0x2 & 0x20) != 0)) goto LAB_0010b2c6;
  }
  global_trees[47] = (tree)make_unsigned_type(8);
  *(undefined2 *)global_trees[47] = 7;
  ptVar1 = global_trees[47];
  ptVar5 = build_int_cst(global_trees[47],1);
  *(tree *)&ptVar1->field_0x70 = ptVar5;
  *(ushort *)&global_trees[47]->field_0x3c = *(ushort *)&global_trees[47]->field_0x3c & 0xfc00 | 1;
  global_trees[25] = *(tree *)&global_trees[47]->field_0x68;
  global_trees[26] = *(tree *)&global_trees[47]->field_0x70;
LAB_0010b2c6:
  if ((integer_types[0]->field_0x2 & 0x20) == 0) {
    integer_types[1] = integer_types[0];
  }
  else {
    integer_types[2] = integer_types[0];
  }
  _fold_build2_stat_loc = 0;
  _exact_log2 = 0x4800015239058948;
  _mode_size = 0x4800015223058948;
  _vector_type_mode = 0x48000151e5058948;
  _htab_size = 0x48000153bf058948;
  global_dc[0x1bb] = 0x4800000dd8908948;
  global_dc[0x1bc] = 0x4800000de0908948;
  *(undefined8 *)(*global_dc + 0x28) = 0xb828508948;
  return 0;
}



int is_attribute_with_length_p(char *attr,int attr_len,const_tree ident)

{
  char *__s2;
  int iVar1;
  int iVar2;
  int ident_len;
  char *p;
  
  if (*(short *)ident == 1) {
    __s2 = *(char **)&ident->field_0x18;
    iVar2 = *(int *)&ident->field_0x20;
    if ((iVar2 == attr_len) && (iVar1 = strcmp(attr,__s2), iVar1 == 0)) {
      return 1;
    }
    if (*attr == '_') {
      if (attr[1] != '_') {
        fancy_abort("tree.c",0x13bb,&DAT_00117460);
      }
      if (attr[(long)attr_len + -2] != '_') {
        fancy_abort("tree.c",0x13bc,&DAT_00117460);
      }
      if (attr[(long)attr_len + -1] != '_') {
        fancy_abort("tree.c",0x13bd,&DAT_00117460);
      }
      if ((iVar2 == attr_len + -4) &&
         (iVar2 = strncmp(attr + 2,__s2,(long)(attr_len + -4)), iVar2 == 0)) {
        return 1;
      }
    }
    else if (((((iVar2 == attr_len + 4) && (*__s2 == '_')) && (__s2[1] == '_')) &&
             ((__s2[(long)iVar2 + -2] == '_' && (__s2[(long)iVar2 + -1] == '_')))) &&
            (iVar2 = strncmp(attr,__s2 + 2,(long)attr_len), iVar2 == 0)) {
      return 1;
    }
  }
  return 0;
}



int is_attribute_p(char *attr,const_tree ident)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(attr);
  iVar1 = is_attribute_with_length_p(attr,(int)sVar2,ident);
  return iVar1;
}



tree lookup_attribute(char *attr_name,tree list)

{
  int iVar1;
  size_t sVar2;
  tree l;
  size_t attr_len;
  
  sVar2 = strlen(attr_name);
  l = list;
  while( true ) {
    if (l == (tree)0x0) {
      return (tree)0x0;
    }
    if (**(short **)&l->field_0x18 != 1) {
      fancy_abort("tree.c",0x13e7,&DAT_00117460);
    }
    iVar1 = is_attribute_with_length_p(attr_name,(int)sVar2,*(const_tree *)&l->field_0x18);
    if (iVar1 != 0) break;
    l = *(tree *)&l->field_0x8;
  }
  return l;
}



tree remove_attribute(char *attr_name,tree list)

{
  int iVar1;
  tree local_38;
  char *local_30;
  tree *p;
  size_t attr_len;
  tree l;
  
  local_38 = list;
  local_30 = attr_name;
  attr_len = strlen(attr_name);
  p = &local_38;
  while (*p != (tree)0x0) {
    l = *p;
    if (**(short **)&l->field_0x18 != 1) {
      fancy_abort("tree.c",0x13fa,&DAT_00117460);
    }
    iVar1 = is_attribute_with_length_p(local_30,(int)attr_len,*(const_tree *)&l->field_0x18);
    if (iVar1 == 0) {
      p = (tree *)&l->field_0x8;
    }
    else {
      *p = *(tree *)&l->field_0x8;
    }
  }
  return local_38;
}



tree merge_attributes(tree a1,tree a2)

{
  int iVar1;
  int iVar2;
  tree ptVar3;
  tree local_38;
  tree attributes;
  tree a;
  
  attributes = a2;
  if ((((a1 != (tree)0x0) && (attributes = a1, a2 != (tree)0x0)) &&
      (iVar1 = attribute_list_contained(a1,a2), iVar1 == 0)) &&
     (iVar1 = attribute_list_contained(a2,a1), attributes = a2, iVar1 == 0)) {
    iVar1 = list_length(a1);
    iVar2 = list_length(a2);
    local_38 = a2;
    attributes = a1;
    if (iVar1 < iVar2) {
      local_38 = a1;
      attributes = a2;
    }
    for (; local_38 != (tree)0x0; local_38 = *(tree *)&local_38->field_0x8) {
      for (a = lookup_attribute(*(char **)(*(long *)&local_38->field_0x18 + 0x18),attributes);
          a != (tree)0x0;
          a = lookup_attribute(*(char **)(*(long *)&local_38->field_0x18 + 0x18),
                               *(tree *)&a->field_0x8)) {
        if (((*(long *)&a->field_0x20 == 0) || (**(short **)&a->field_0x20 != 2)) ||
           ((*(long *)&local_38->field_0x20 == 0 || (**(short **)&local_38->field_0x20 != 2)))) {
          iVar1 = simple_cst_equal(*(const_tree *)&a->field_0x20,
                                   *(const_tree *)&local_38->field_0x20);
        }
        else {
          iVar1 = simple_cst_list_equal
                            (*(const_tree *)&a->field_0x20,*(const_tree *)&local_38->field_0x20);
        }
        if (iVar1 == 1) break;
      }
      if (a == (tree)0x0) {
        ptVar3 = copy_node_stat(local_38);
        *(tree *)&ptVar3->field_0x8 = attributes;
        attributes = ptVar3;
      }
    }
  }
  return attributes;
}



tree merge_type_attributes(tree t1,tree t2)

{
  tree ptVar1;
  
  ptVar1 = merge_attributes(*(tree *)&t1->field_0x30,*(tree *)&t2->field_0x30);
  return ptVar1;
}



tree merge_decl_attributes(tree olddecl,tree newdecl)

{
  tree ptVar1;
  
  ptVar1 = merge_attributes(*(tree *)&olddecl->field_0x58,*(tree *)&newdecl->field_0x58);
  return ptVar1;
}



void set_type_quals(tree type,int type_quals)

{
  type->field_0x2 = type->field_0x2 & 0xef | ((type_quals & 1U) != 0) << 4;
  type->field_0x2 = type->field_0x2 & 0xf7 | ((type_quals & 2U) != 0) * '\b';
  type->field_0x3d = type->field_0x3d & 0xdf | ((type_quals & 4U) != 0) << 5;
  type->field_0x7 = (char)((uint)type_quals >> 8);
  return;
}



uchar check_qualified_type(const_tree cand,const_tree base,int type_quals)

{
  int iVar1;
  
  if ((((type_quals ==
         ((uint)(byte)cand->field_0x7 << 8 |
         (uint)((byte)cand->field_0x2 >> 4 & 1) | (uint)((byte)cand->field_0x2 >> 3 & 1) * 2 |
         (uint)((byte)cand->field_0x3d >> 5 & 1) << 2)) &&
       (*(long *)&cand->field_0x60 == *(long *)&base->field_0x60)) &&
      (*(long *)&cand->field_0x90 == *(long *)&base->field_0x90)) &&
     (iVar1 = attribute_list_equal
                        (*(const_tree *)&cand->field_0x30,*(const_tree *)&base->field_0x30),
     iVar1 != 0)) {
    return '\x01';
  }
  return '\0';
}



tree get_qualified_type(tree type,int type_quals)

{
  uchar uVar1;
  tree t;
  
  if (type_quals !=
      ((uint)(byte)type->field_0x7 << 8 |
      (uint)((byte)type->field_0x2 >> 4 & 1) | (uint)((byte)type->field_0x2 >> 3 & 1) * 2 |
      (uint)((byte)type->field_0x3d >> 5 & 1) << 2)) {
    for (t = *(tree *)&type->field_0x80; t != (tree)0x0; t = *(tree *)&t->field_0x78) {
      uVar1 = check_qualified_type(t,type,type_quals);
      if (uVar1 != '\0') {
        return t;
      }
    }
    type = (tree)0x0;
  }
  return type;
}



tree build_qualified_type(tree type,int type_quals)

{
  tree ptVar1;
  tree t;
  
  t = get_qualified_type(type,type_quals);
  if (t == (tree)0x0) {
    t = build_variant_type_copy(type);
    set_type_quals(t,type_quals);
    if (*(long *)&type->field_0x98 == 0) {
      *(undefined8 *)&t->field_0x98 = 0;
    }
    else if (type == *(tree *)&type->field_0x98) {
      *(tree *)&t->field_0x98 = t;
    }
    else {
      ptVar1 = build_qualified_type(*(tree *)&type->field_0x98,type_quals);
      *(tree *)&t->field_0x98 = ptVar1;
    }
  }
  return t;
}



tree build_distinct_type_copy(tree type)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = copy_node_stat(type);
  *(undefined8 *)&ptVar1->field_0x48 = 0;
  *(undefined8 *)&ptVar1->field_0x50 = 0;
  if (*(long *)&type->field_0x98 == 0) {
    *(undefined8 *)&ptVar1->field_0x98 = 0;
  }
  else {
    *(tree *)&ptVar1->field_0x98 = ptVar1;
  }
  *(tree *)&ptVar1->field_0x80 = ptVar1;
  *(undefined8 *)&ptVar1->field_0x78 = 0;
  return ptVar1;
}



tree build_variant_type_copy(tree type)

{
  long lVar1;
  tree ptVar2;
  tree m;
  tree t;
  
  lVar1 = *(long *)&type->field_0x80;
  ptVar2 = build_distinct_type_copy(type);
  *(undefined8 *)&ptVar2->field_0x98 = *(undefined8 *)&type->field_0x98;
  *(undefined8 *)&ptVar2->field_0x78 = *(undefined8 *)(lVar1 + 0x78);
  *(tree *)(lVar1 + 0x78) = ptVar2;
  *(long *)&ptVar2->field_0x80 = lVar1;
  return ptVar2;
}



int tree_map_base_eq(void *va,void *vb)

{
  tree_map_base *a;
  tree_map_base *b;
  
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
  return (int)(*va == *vb);
}



uint tree_map_base_hash(void *item)

{
  uint uVar1;
  
                    // WARNING: Load size is inaccurate
  uVar1 = (*htab_hash_pointer)(*item);
  return uVar1;
}



int tree_map_base_marked_p(void *p)

{
  int iVar1;
  
                    // WARNING: Load size is inaccurate
  iVar1 = ggc_marked_p(*p);
  return iVar1;
}



uint tree_map_hash(void *item)

{
  return *(uint *)((long)item + 8);
}



priority_type decl_init_priority_lookup(tree decl)

{
  long lVar1;
  priority_type pVar2;
  long lVar3;
  long in_FS_OFFSET;
  tree_map_base in;
  tree_priority_map *h;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(short *)decl != 0x20) && (*(short *)decl != 0x1d)) {
    fancy_abort("tree.c",0x15e7,&DAT_00117460);
  }
  in = decl;
  lVar3 = htab_find(init_priority_for_decl,&in);
  if (lVar3 == 0) {
    pVar2 = 0xffff;
  }
  else {
    pVar2 = *(priority_type *)(lVar3 + 8);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pVar2;
}



priority_type decl_fini_priority_lookup(tree decl)

{
  long lVar1;
  priority_type pVar2;
  long lVar3;
  long in_FS_OFFSET;
  tree_map_base in;
  tree_priority_map *h;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)decl != 0x1d) {
    fancy_abort("tree.c",0x15f5,&DAT_00117460);
  }
  in = decl;
  lVar3 = htab_find(init_priority_for_decl,&in);
  if (lVar3 == 0) {
    pVar2 = 0xffff;
  }
  else {
    pVar2 = *(priority_type *)(lVar3 + 10);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pVar2;
}



tree_priority_map * decl_priority_info(tree decl)

{
  long lVar1;
  tree_priority_map **pptVar2;
  long in_FS_OFFSET;
  tree_priority_map *h;
  void **loc;
  tree_priority_map in;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  in.base = decl;
  pptVar2 = (tree_priority_map **)htab_find_slot(init_priority_for_decl,&in,1);
  h = *pptVar2;
  if (h == (tree_priority_map *)0x0) {
    h = (tree_priority_map *)ggc_alloc_cleared_stat(0x10);
    *pptVar2 = h;
    (h->base).from = decl;
    h->init = 0xffff;
    h->fini = 0xffff;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return h;
}



void decl_init_priority_insert(tree decl,priority_type priority)

{
  tree_priority_map *ptVar1;
  tree_priority_map *h;
  
  if ((*(short *)decl != 0x20) && (*(short *)decl != 0x1d)) {
    fancy_abort("tree.c",0x161c,&DAT_00117460);
  }
  ptVar1 = decl_priority_info(decl);
  ptVar1->init = priority;
  return;
}



void decl_fini_priority_insert(tree decl,priority_type priority)

{
  tree_priority_map *ptVar1;
  tree_priority_map *h;
  
  if (*(short *)decl != 0x1d) {
    fancy_abort("tree.c",0x1628,&DAT_00117460);
  }
  ptVar1 = decl_priority_info(decl);
  ptVar1->fini = priority;
  return;
}



void print_debug_expr_statistics(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FILE *__stream;
  
  __stream = (FILE *)htab_collisions(debug_expr_for_decl);
  uVar1 = htab_elements(debug_expr_for_decl);
  uVar2 = htab_size(debug_expr_for_decl);
  fprintf(__stream,stderr,"DECL_DEBUG_EXPR  hash: size %ld, %ld elements, %f collisions\n",uVar2,
          uVar1);
  return;
}



void print_value_expr_statistics(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FILE *__stream;
  
  __stream = (FILE *)htab_collisions(value_expr_for_decl);
  uVar1 = htab_elements(value_expr_for_decl);
  uVar2 = htab_size(value_expr_for_decl);
  fprintf(__stream,stderr,"DECL_VALUE_EXPR  hash: size %ld, %ld elements, %f collisions\n",uVar2,
          uVar1);
  return;
}



tree decl_debug_expr_lookup(tree from)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  tree ptVar4;
  long in_FS_OFFSET;
  tree_map *h;
  tree_map in;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  in.base = from;
  uVar2 = (*htab_hash_pointer)(from);
  lVar3 = htab_find_with_hash(debug_expr_for_decl,&in,uVar2);
  if (lVar3 == 0) {
    ptVar4 = (tree)0x0;
  }
  else {
    ptVar4 = *(tree *)(lVar3 + 0x10);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar4;
}



void decl_debug_expr_insert(tree from,tree to)

{
  undefined4 uVar1;
  tree *pptVar2;
  long *plVar3;
  tree_map *h;
  void **loc;
  
  pptVar2 = (tree *)ggc_alloc_stat(0x18);
  uVar1 = (*htab_hash_pointer)(from);
  *(undefined4 *)(pptVar2 + 1) = uVar1;
  *pptVar2 = from;
  pptVar2[2] = to;
  plVar3 = (long *)htab_find_slot_with_hash
                             (debug_expr_for_decl,pptVar2,*(undefined4 *)(pptVar2 + 1),1);
  *plVar3 = (long)pptVar2;
  return;
}



tree decl_value_expr_lookup(tree from)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  tree ptVar4;
  long in_FS_OFFSET;
  tree_map *h;
  tree_map in;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  in.base = from;
  uVar2 = (*htab_hash_pointer)(from);
  lVar3 = htab_find_with_hash(value_expr_for_decl,&in,uVar2);
  if (lVar3 == 0) {
    ptVar4 = (tree)0x0;
  }
  else {
    ptVar4 = *(tree *)(lVar3 + 0x10);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar4;
}



void decl_value_expr_insert(tree from,tree to)

{
  undefined4 uVar1;
  tree *pptVar2;
  long *plVar3;
  tree_map *h;
  void **loc;
  
  pptVar2 = (tree *)ggc_alloc_stat(0x18);
  uVar1 = (*htab_hash_pointer)(from);
  *(undefined4 *)(pptVar2 + 1) = uVar1;
  *pptVar2 = from;
  pptVar2[2] = to;
  plVar3 = (long *)htab_find_slot_with_hash
                             (value_expr_for_decl,pptVar2,*(undefined4 *)(pptVar2 + 1),1);
  *plVar3 = (long)pptVar2;
  return;
}



uint type_hash_list(const_tree list,hashval_t hashcode)

{
  hashval_t local_24;
  const_tree tail;
  
  local_24 = hashcode;
  for (tail = list; tail != (const_tree)0x0; tail = *(const_tree *)&tail->field_0x8) {
    if (*(tree *)&tail->field_0x20 != global_trees[0]) {
      local_24 = iterative_hash(*(long *)&tail->field_0x20 + 0x38,4,local_24);
    }
  }
  return local_24;
}



int type_hash_eq(void *va,void *vb)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  type_hash *a;
  type_hash *b;
  
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
  if ((((*va == *vb) && (**(short **)((long)va + 8) == **(short **)((long)vb + 8))) &&
      (*(long *)(*(long *)((long)va + 8) + 0x10) == *(long *)(*(long *)((long)vb + 8) + 0x10))) &&
     ((iVar2 = attribute_list_equal
                         (*(const_tree *)(*(long *)((long)va + 8) + 0x30),
                          *(const_tree *)(*(long *)((long)vb + 8) + 0x30)), iVar2 != 0 &&
      (*(int *)(*(long *)((long)va + 8) + 0x40) == *(int *)(*(long *)((long)vb + 8) + 0x40))))) {
    if (**(short **)((long)va + 8) == 0xe) {
      uVar3 = vector_type_mode(*(undefined8 *)((long)va + 8));
    }
    else {
      uVar3 = (uint)*(byte *)(*(long *)((long)va + 8) + 0x3e);
    }
    if (**(short **)((long)vb + 8) == 0xe) {
      uVar4 = vector_type_mode(*(undefined8 *)((long)vb + 8));
    }
    else {
      uVar4 = (uint)*(byte *)(*(long *)((long)vb + 8) + 0x3e);
    }
    if ((uVar3 == uVar4) &&
       ((**(short **)((long)va + 8) == 0xd ||
        (*(long *)(*(long *)((long)va + 8) + 0x60) == *(long *)(*(long *)((long)vb + 8) + 0x60)))))
    {
      switch(**(undefined2 **)((long)va + 8)) {
      case 5:
        uVar3 = (uint)(*(long *)(*(long *)((long)va + 8) + 0x70) ==
                      *(long *)(*(long *)((long)vb + 8) + 0x70));
        break;
      case 6:
        if ((*(long *)(*(long *)((long)va + 8) + 0x18) != *(long *)(*(long *)((long)vb + 8) + 0x18))
           && (((*(long *)(*(long *)((long)va + 8) + 0x18) == 0 ||
                (**(short **)(*(long *)((long)va + 8) + 0x18) != 2)) ||
               ((*(long *)(*(long *)((long)vb + 8) + 0x18) == 0 ||
                ((**(short **)(*(long *)((long)vb + 8) + 0x18) != 2 ||
                 (iVar2 = type_list_equal(*(const_tree *)(*(long *)((long)va + 8) + 0x18),
                                          *(const_tree *)(*(long *)((long)vb + 8) + 0x18)),
                 iVar2 == 0)))))))) {
          return 0;
        }
      case 7:
      case 8:
      case 9:
        if (((*(long *)(*(long *)((long)va + 8) + 0x70) == *(long *)(*(long *)((long)vb + 8) + 0x70)
             ) || (iVar2 = tree_int_cst_equal(*(const_tree *)(*(long *)((long)va + 8) + 0x70),
                                              *(const_tree *)(*(long *)((long)vb + 8) + 0x70)),
                  iVar2 != 0)) &&
           ((*(long *)(*(long *)((long)va + 8) + 0x68) == *(long *)(*(long *)((long)vb + 8) + 0x68)
            || (iVar2 = tree_int_cst_equal(*(const_tree *)(*(long *)((long)va + 8) + 0x68),
                                           *(const_tree *)(*(long *)((long)vb + 8) + 0x68)),
               iVar2 != 0)))) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        break;
      case 10:
      case 0xc:
      case 0xd:
      case 0x13:
        uVar3 = 1;
        break;
      case 0xb:
        uVar3 = (uint)(*(byte *)(*(long *)((long)va + 8) + 3) >> 7 ==
                      *(byte *)(*(long *)((long)vb + 8) + 3) >> 7);
        break;
      case 0xe:
        uVar3 = (uint)(1 << ((byte)*(undefined2 *)(*(long *)((long)va + 8) + 0x3c) & 0x3f) ==
                      1 << ((byte)*(undefined2 *)(*(long *)((long)vb + 8) + 0x3c) & 0x3f));
        break;
      case 0xf:
        uVar3 = (uint)(*(long *)(*(long *)((long)va + 8) + 0x18) ==
                      *(long *)(*(long *)((long)vb + 8) + 0x18));
        break;
      case 0x10:
      case 0x11:
      case 0x12:
        if ((*(long *)(*(long *)((long)va + 8) + 0x18) == *(long *)(*(long *)((long)vb + 8) + 0x18))
           || ((((*(long *)(*(long *)((long)va + 8) + 0x18) != 0 &&
                 (**(short **)(*(long *)((long)va + 8) + 0x18) == 2)) &&
                (*(long *)(*(long *)((long)vb + 8) + 0x18) != 0)) &&
               ((**(short **)(*(long *)((long)vb + 8) + 0x18) == 2 &&
                (iVar2 = type_list_equal(*(const_tree *)(*(long *)((long)va + 8) + 0x18),
                                         *(const_tree *)(*(long *)((long)vb + 8) + 0x18)),
                iVar2 != 0)))))) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        break;
      case 0x14:
        if ((*(long *)(*(long *)((long)va + 8) + 0x18) == *(long *)(*(long *)((long)vb + 8) + 0x18))
           || (((*(long *)(*(long *)((long)va + 8) + 0x18) != 0 &&
                (**(short **)(*(long *)((long)va + 8) + 0x18) == 2)) &&
               ((*(long *)(*(long *)((long)vb + 8) + 0x18) != 0 &&
                ((**(short **)(*(long *)((long)vb + 8) + 0x18) == 2 &&
                 (iVar2 = type_list_equal(*(const_tree *)(*(long *)((long)va + 8) + 0x18),
                                          *(const_tree *)(*(long *)((long)vb + 8) + 0x18)),
                 iVar2 != 0)))))))) {
          if (gimple_decl_printable_name == (code *)0x0) {
            uVar3 = 1;
          }
          else {
            bVar1 = (*gimple_decl_printable_name)
                              (*(undefined8 *)((long)va + 8),*(undefined8 *)((long)vb + 8));
            uVar3 = (uint)bVar1;
          }
        }
        else {
          uVar3 = 0;
        }
        break;
      case 0x15:
        if ((*(long *)(*(long *)((long)va + 8) + 0x70) == *(long *)(*(long *)((long)vb + 8) + 0x70))
           && ((*(long *)(*(long *)((long)va + 8) + 0x18) ==
                *(long *)(*(long *)((long)vb + 8) + 0x18) ||
               ((((*(long *)(*(long *)((long)va + 8) + 0x18) != 0 &&
                  (**(short **)(*(long *)((long)va + 8) + 0x18) == 2)) &&
                 (*(long *)(*(long *)((long)vb + 8) + 0x18) != 0)) &&
                ((**(short **)(*(long *)((long)vb + 8) + 0x18) == 2 &&
                 (iVar2 = type_list_equal(*(const_tree *)(*(long *)((long)va + 8) + 0x18),
                                          *(const_tree *)(*(long *)((long)vb + 8) + 0x18)),
                 iVar2 != 0)))))))) {
          return 1;
        }
        uVar3 = 0;
        break;
      default:
        return 0;
      }
      return uVar3;
    }
  }
  return 0;
}



hashval_t type_hash_hash(void *item)

{
                    // WARNING: Load size is inaccurate
  return (hashval_t)*item;
}



tree type_hash_lookup(hashval_t hashcode,tree type)

{
  long lVar1;
  long lVar2;
  tree ptVar3;
  long in_FS_OFFSET;
  type_hash *h;
  type_hash in;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  layout_type(type);
  in.hash = (ulong)hashcode;
  in.type = type;
  lVar2 = htab_find_with_hash(type_hash_table,&in,hashcode);
  if (lVar2 == 0) {
    ptVar3 = (tree)0x0;
  }
  else {
    ptVar3 = *(tree *)(lVar2 + 8);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar3;
}



void type_hash_add(hashval_t hashcode,tree type)

{
  ulong *puVar1;
  ulong **ppuVar2;
  type_hash *h;
  void **loc;
  
  puVar1 = (ulong *)ggc_alloc_stat(0x10);
  *puVar1 = (ulong)hashcode;
  puVar1[1] = (ulong)type;
  ppuVar2 = (ulong **)htab_find_slot_with_hash(type_hash_table,puVar1,hashcode,1);
  *ppuVar2 = puVar1;
  return;
}



tree type_hash_canon(uint hashcode,tree type)

{
  tree ptVar1;
  tree t1;
  
  if (type != *(tree *)&type->field_0x80) {
    fancy_abort("tree.c",0x173d,&DAT_00117460);
  }
  ptVar1 = type;
  if ((default_diagnostic_starter != '\0') &&
     (ptVar1 = type_hash_lookup(hashcode,type), ptVar1 == (tree)0x0)) {
    type_hash_add(hashcode,type);
    ptVar1 = type;
  }
  return ptVar1;
}



int type_hash_marked_p(void *p)

{
  long lVar1;
  int iVar2;
  const_tree type;
  
  lVar1 = *(long *)((long)p + 8);
  iVar2 = ggc_marked_p(lVar1);
  if ((iVar2 == 0) && (*(long *)(lVar1 + 0x58) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}



void print_type_hash_statistics(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FILE *__stream;
  
  __stream = (FILE *)htab_collisions(type_hash_table);
  uVar1 = htab_elements(type_hash_table);
  uVar2 = htab_size(type_hash_table);
  fprintf(__stream,stderr,"Type hash: size %ld, %ld elements, %f collisions\n",uVar2,uVar1);
  return;
}



uint attribute_hash_list(const_tree list,hashval_t hashcode)

{
  hashval_t local_24;
  const_tree tail;
  
  local_24 = hashcode;
  for (tail = list; tail != (const_tree)0x0; tail = *(const_tree *)&tail->field_0x8) {
    local_24 = iterative_hash(*(long *)&tail->field_0x18 + 0x24,4,local_24);
  }
  return local_24;
}



int attribute_list_equal(const_tree l1,const_tree l2)

{
  int iVar1;
  
  iVar1 = attribute_list_contained(l1,l2);
  if ((iVar1 != 0) && (iVar1 = attribute_list_contained(l2,l1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



int attribute_list_contained(const_tree l1,const_tree l2)

{
  int iVar1;
  const_tree t1;
  const_tree t2;
  const_tree attr;
  
  t1 = l1;
  t2 = l2;
  if (l1 != l2) {
    for (; (((t1 != (const_tree)0x0 && (t2 != (const_tree)0x0)) &&
            (*(long *)&t1->field_0x18 == *(long *)&t2->field_0x18)) &&
           (*(long *)&t1->field_0x20 == *(long *)&t2->field_0x20));
        t1 = *(const_tree *)&t1->field_0x8) {
      t2 = *(const_tree *)&t2->field_0x8;
    }
    if ((t1 != (const_tree)0x0) || (t2 != (const_tree)0x0)) {
      for (; t2 != (const_tree)0x0; t2 = *(const_tree *)&t2->field_0x8) {
        for (attr = lookup_attribute(*(char **)(*(long *)&t2->field_0x18 + 0x18),l1);
            attr != (const_tree)0x0;
            attr = lookup_attribute(*(char **)(*(long *)&t2->field_0x18 + 0x18),
                                    *(tree *)&attr->field_0x8)) {
          if (((*(long *)&t2->field_0x20 == 0) || (**(short **)&t2->field_0x20 != 2)) ||
             ((*(long *)&attr->field_0x20 == 0 || (**(short **)&attr->field_0x20 != 2)))) {
            iVar1 = simple_cst_equal(*(const_tree *)&t2->field_0x20,*(const_tree *)&attr->field_0x20
                                    );
          }
          else {
            iVar1 = simple_cst_list_equal
                              (*(const_tree *)&t2->field_0x20,*(const_tree *)&attr->field_0x20);
          }
          if (iVar1 == 1) break;
        }
        if (attr == (const_tree)0x0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



int type_list_equal(const_tree l1,const_tree l2)

{
  int iVar1;
  const_tree t1;
  const_tree t2;
  
  t1 = l1;
  t2 = l2;
  while( true ) {
    if ((t1 == (const_tree)0x0) || (t2 == (const_tree)0x0)) {
      return (uint)(t1 == t2);
    }
    if ((*(long *)&t1->field_0x20 != *(long *)&t2->field_0x20) ||
       ((*(long *)&t1->field_0x18 != *(long *)&t2->field_0x18 &&
        ((iVar1 = simple_cst_equal(*(const_tree *)&t1->field_0x18,*(const_tree *)&t2->field_0x18),
         iVar1 != 1 ||
         (*(long *)(*(long *)&t1->field_0x18 + 0x10) != *(long *)(*(long *)&t2->field_0x18 + 0x10)))
        )))) break;
    t1 = *(const_tree *)&t1->field_0x8;
    t2 = *(const_tree *)&t2->field_0x8;
  }
  return 0;
}



int type_num_arguments(const_tree type)

{
  int i;
  tree t;
  
  i = 0;
  for (t = *(tree *)&type->field_0x18; (t != (tree)0x0 && (**(short **)&t->field_0x20 != 0x13));
      t = *(tree *)&t->field_0x8) {
    i = i + 1;
  }
  return i;
}



int tree_int_cst_equal(const_tree t1,const_tree t2)

{
  int iVar1;
  
  if (t1 == t2) {
    iVar1 = 1;
  }
  else if ((t1 == (const_tree)0x0) || (t2 == (const_tree)0x0)) {
    iVar1 = 0;
  }
  else if ((*(short *)t1 == 0x17) &&
          (((*(short *)t2 == 0x17 && (*(long *)&t1->field_0x18 == *(long *)&t2->field_0x18)) &&
           (*(long *)&t1->field_0x20 == *(long *)&t2->field_0x20)))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int tree_int_cst_lt(const_tree t1,const_tree t2)

{
  int iVar1;
  int iVar2;
  int t1_sgn;
  int t2_sgn;
  
  if (t1 == t2) {
    return 0;
  }
  if ((*(byte *)(*(long *)&t1->field_0x10 + 2) >> 5 & 1) ==
      (*(byte *)(*(long *)&t2->field_0x10 + 2) >> 5 & 1)) {
    if ((*(byte *)(*(long *)&t1->field_0x10 + 2) & 0x20) == 0) {
      if ((*(long *)&t2->field_0x20 <= *(long *)&t1->field_0x20) &&
         ((*(long *)&t1->field_0x20 != *(long *)&t2->field_0x20 ||
          (*(ulong *)&t2->field_0x18 <= *(ulong *)&t1->field_0x18)))) {
        return 0;
      }
      return 1;
    }
  }
  else {
    iVar1 = tree_int_cst_sgn(t1);
    iVar2 = tree_int_cst_sgn(t2);
    if (iVar1 < iVar2) {
      return 1;
    }
    if (iVar2 < iVar1) {
      return 0;
    }
  }
  if ((*(ulong *)&t1->field_0x20 < *(ulong *)&t2->field_0x20) ||
     ((*(long *)&t1->field_0x20 == *(long *)&t2->field_0x20 &&
      (*(ulong *)&t1->field_0x18 < *(ulong *)&t2->field_0x18)))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int tree_int_cst_compare(const_tree t1,const_tree t2)

{
  int iVar1;
  
  iVar1 = tree_int_cst_lt(t1,t2);
  if (iVar1 == 0) {
    iVar1 = tree_int_cst_lt(t2,t1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



int host_integerp(const_tree t,int pos)

{
  int iVar1;
  
  if (t == (const_tree)0x0) {
    iVar1 = 0;
  }
  else if ((*(short *)t == 0x17) &&
          (((*(long *)&t->field_0x20 == 0 && (-1 < *(long *)&t->field_0x18)) ||
           ((((pos == 0 && ((*(long *)&t->field_0x20 == -1 && (*(long *)&t->field_0x18 < 0)))) &&
             (((*(byte *)(*(long *)&t->field_0x10 + 2) & 0x20) == 0 ||
              ((**(short **)&t->field_0x10 == 8 &&
               ((*(byte *)(*(long *)&t->field_0x10 + 0x3d) & 4) != 0)))))) ||
            ((pos != 0 && (*(long *)&t->field_0x20 == 0)))))))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



long tree_low_cst(const_tree t,int pos)

{
  int iVar1;
  
  iVar1 = host_integerp(t,pos);
  if (iVar1 == 0) {
    fancy_abort("tree.c",0x1846,&DAT_00117460);
  }
  return *(long *)&t->field_0x18;
}



int tree_int_cst_msb(const_tree t)

{
  uint uVar1;
  long in_FS_OFFSET;
  int prec;
  long h;
  ulong l;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (**(short **)&t->field_0x10 == 0xe) {
    uVar1 = vector_type_mode(*(undefined8 *)&t->field_0x10);
  }
  else {
    uVar1 = (uint)*(byte *)(*(long *)&t->field_0x10 + 0x3e);
  }
  rshift_double(*(undefined8 *)&t->field_0x18,*(undefined8 *)&t->field_0x20,
                (long)(int)((uint)(byte)(&mode_size)[uVar1] * 8 + -1),0x80,&l,&h,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (int)((l & 1) != 0);
}



int tree_int_cst_sgn(const_tree t)

{
  int iVar1;
  
  if ((*(long *)&t->field_0x18 == 0) && (*(long *)&t->field_0x20 == 0)) {
    iVar1 = 0;
  }
  else if ((*(byte *)(*(long *)&t->field_0x10 + 2) & 0x20) == 0) {
    if (*(long *)&t->field_0x20 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



uint tree_int_cst_min_precision(tree value,uchar unsignedp)

{
  int iVar1;
  tree local_20;
  int log;
  
  iVar1 = tree_int_cst_sgn(value);
  local_20 = value;
  if (iVar1 < 0) {
    local_20 = (tree)fold_build1_stat_loc(0,0x5a,*(undefined8 *)&value->field_0x10,value);
  }
  iVar1 = integer_zerop(local_20);
  if (iVar1 == 0) {
    log = tree_floor_log2(local_20);
  }
  else {
    log = 0;
  }
  return (uint)(unsignedp == '\0') + log + 1;
}



int simple_cst_list_equal(const_tree l1,const_tree l2)

{
  int iVar1;
  const_tree local_18;
  const_tree local_10;
  
  local_10 = l1;
  for (local_18 = l2; (local_10 != (const_tree)0x0 && (local_18 != (const_tree)0x0));
      local_18 = *(const_tree *)&local_18->field_0x8) {
    iVar1 = simple_cst_equal(*(const_tree *)&local_10->field_0x20,
                             *(const_tree *)&local_18->field_0x20);
    if (iVar1 != 1) {
      return 0;
    }
    local_10 = *(const_tree *)&local_10->field_0x8;
  }
  return (uint)(local_10 == local_18);
}



int simple_cst_equal(const_tree t1,const_tree t2)

{
  long lVar1;
  VEC_constructor_elt_base *pVVar2;
  VEC_constructor_elt_base *pVVar3;
  const_tree t2_00;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  constructor_elt *pcVar8;
  VEC_constructor_elt_base *pVVar9;
  long in_FS_OFFSET;
  int cmp;
  int i;
  tree_code code1;
  tree_code code2;
  ulong idx;
  const_tree arg1;
  const_tree arg2;
  VEC_constructor_elt_gc *v1;
  VEC_constructor_elt_gc *v2;
  const_call_expr_arg_iterator iter1;
  const_call_expr_arg_iterator iter2;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (t1 == t2) {
    cmp = 1;
    goto LAB_0010db49;
  }
  if ((t1 == (const_tree)0x0) || (t2 == (const_tree)0x0)) {
    cmp = 0;
    goto LAB_0010db49;
  }
  uVar5 = (uint)*(ushort *)t1;
  uVar6 = (uint)*(ushort *)t2;
  if (((uVar5 == 0x74) || (uVar5 == 0x71)) || (uVar5 == 0x75)) {
    if (((uVar6 == 0x74) || (uVar6 == 0x71)) || (uVar6 == 0x75)) {
      cmp = simple_cst_equal(*(const_tree *)&t1->field_0x28,*(const_tree *)&t2->field_0x28);
    }
    else {
      cmp = simple_cst_equal(*(const_tree *)&t1->field_0x28,t2);
    }
    goto LAB_0010db49;
  }
  if (((uVar6 == 0x74) || (uVar6 == 0x71)) || (uVar6 == 0x75)) {
    cmp = simple_cst_equal(t1,*(const_tree *)&t2->field_0x28);
    goto LAB_0010db49;
  }
  if (uVar5 != uVar6) {
    cmp = 0;
    goto LAB_0010db49;
  }
  switch(uVar5) {
  case 0x17:
    if ((*(long *)&t1->field_0x18 == *(long *)&t2->field_0x18) &&
       (*(long *)&t1->field_0x20 == *(long *)&t2->field_0x20)) {
      cmp = 1;
    }
    else {
      cmp = 0;
    }
    break;
  case 0x18:
    bVar4 = real_identical(*(undefined8 *)&t1->field_0x18,*(undefined8 *)&t2->field_0x18);
    cmp = (int)bVar4;
    break;
  case 0x19:
    bVar4 = fixed_identical(*(undefined8 *)&t1->field_0x18,*(undefined8 *)&t2->field_0x18);
    cmp = (int)bVar4;
    break;
  default:
    if (0xbb < uVar5) {
      cmp = 0xffffffff;
      break;
    }
    uVar6 = *(uint *)(tree_code_type + (long)(int)uVar5 * 4);
    if (uVar6 < 9) {
      if (3 < uVar6) {
LAB_0010dace:
        cmp = 1;
        i = 0;
        while ((i < (int)(uint)(byte)tree_code_length[(int)uVar5] &&
               (cmp = simple_cst_equal(*(const_tree *)(&t1->field_0x28 + (long)i * 8),
                                       *(const_tree *)(&t2->field_0x28 + (long)i * 8)), 0 < cmp))) {
          i = i + 1;
        }
        break;
      }
    }
    else if (uVar6 == 10) goto LAB_0010dace;
    cmp = 0xffffffff;
    break;
  case 0x1c:
    if ((*(int *)&t1->field_0x18 == *(int *)&t2->field_0x18) &&
       (iVar7 = memcmp(&t1->field_0x1c,&t2->field_0x1c,(long)*(int *)&t1->field_0x18), iVar7 == 0))
    {
      cmp = 1;
    }
    else {
      cmp = 0;
    }
    break;
  case 0x1d:
  case 0x20:
  case 0x21:
  case 0x22:
    cmp = 0;
    break;
  case 0x29:
    if (*(long *)&t1->field_0x30 == *(long *)&t2->field_0x30) {
      cmp = simple_cst_equal(*(const_tree *)&t1->field_0x28,*(const_tree *)&t2->field_0x28);
    }
    else {
      cmp = 0;
    }
    break;
  case 0x33:
    pVVar2 = *(VEC_constructor_elt_base **)&t1->field_0x18;
    pVVar3 = *(VEC_constructor_elt_base **)&t2->field_0x18;
    pVVar9 = pVVar2;
    if (pVVar2 == (VEC_constructor_elt_base *)0x0) {
      pVVar9 = (VEC_constructor_elt_base *)0x0;
    }
    uVar5 = VEC_constructor_elt_base_length(pVVar9);
    pVVar9 = pVVar3;
    if (pVVar3 == (VEC_constructor_elt_base *)0x0) {
      pVVar9 = (VEC_constructor_elt_base *)0x0;
    }
    uVar6 = VEC_constructor_elt_base_length(pVVar9);
    if (uVar5 == uVar6) {
      idx = 0;
      while( true ) {
        pVVar9 = pVVar2;
        if (pVVar2 == (VEC_constructor_elt_base *)0x0) {
          pVVar9 = (VEC_constructor_elt_base *)0x0;
        }
        uVar5 = VEC_constructor_elt_base_length(pVVar9);
        if (uVar5 <= idx) {
          cmp = 1;
          goto LAB_0010db49;
        }
        pVVar9 = pVVar3;
        if (pVVar3 == (VEC_constructor_elt_base *)0x0) {
          pVVar9 = (VEC_constructor_elt_base *)0x0;
        }
        pcVar8 = VEC_constructor_elt_base_index(pVVar9,(uint)idx);
        t2_00 = pcVar8->value;
        pVVar9 = pVVar2;
        if (pVVar2 == (VEC_constructor_elt_base *)0x0) {
          pVVar9 = (VEC_constructor_elt_base *)0x0;
        }
        pcVar8 = VEC_constructor_elt_base_index(pVVar9,(uint)idx);
        iVar7 = simple_cst_equal(pcVar8->value,t2_00);
        if (iVar7 == 0) break;
        idx = idx + 1;
      }
      cmp = 0;
    }
    else {
      cmp = 0;
    }
    break;
  case 0x37:
    if ((((**(short **)&t1->field_0x28 == 0x20) && (*(long *)(*(long *)&t1->field_0x28 + 0x20) == 0)
         ) && ((tree_contains_struct[**(ushort **)&t1->field_0x28][0xb] == '\0' ||
               (*(long *)(*(long *)&t1->field_0x28 + 0x70) == 0)))) ||
       (((**(short **)&t2->field_0x28 == 0x20 && (*(long *)(*(long *)&t2->field_0x28 + 0x20) == 0))
        && ((tree_contains_struct[**(ushort **)&t2->field_0x28][0xb] == '\0' ||
            (*(long *)(*(long *)&t2->field_0x28 + 0x70) == 0)))))) {
      cmp = 1;
    }
    else {
      cmp = simple_cst_equal(*(const_tree *)&t1->field_0x28,*(const_tree *)&t2->field_0x28);
    }
    if (0 < cmp) {
      cmp = simple_cst_equal(*(const_tree *)&t1->field_0x30,*(const_tree *)&t2->field_0x30);
    }
    break;
  case 0x3b:
    cmp = simple_cst_equal(*(const_tree *)&t1->field_0x30,*(const_tree *)&t2->field_0x30);
    if (0 < cmp) {
      if ((int)*(undefined8 *)(*(long *)&t1->field_0x28 + 0x18) ==
          (int)*(undefined8 *)(*(long *)&t2->field_0x28 + 0x18)) {
        arg1 = first_const_call_expr_arg(t1,&iter1);
        arg2 = first_const_call_expr_arg(t2,&iter2);
        while ((arg1 != (const_tree)0x0 && (arg2 != (const_tree)0x0))) {
          cmp = simple_cst_equal(arg1,arg2);
          if (cmp < 1) goto LAB_0010db49;
          arg1 = next_const_call_expr_arg(&iter1);
          arg2 = next_const_call_expr_arg(&iter2);
        }
        cmp = (int)(arg1 == arg2);
      }
      else {
        cmp = 0;
      }
    }
    break;
  case 0x3c:
    cmp = simple_cst_equal(*(const_tree *)&t1->field_0x28,*(const_tree *)&t2->field_0x28);
    if (0 < cmp) {
      cmp = simple_cst_equal(*(const_tree *)&t1->field_0x30,*(const_tree *)&t1->field_0x30);
    }
    break;
  case 0x78:
    cmp = simple_cst_equal(*(const_tree *)&t1->field_0x28,*(const_tree *)&t2->field_0x28);
  }
LAB_0010db49:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return cmp;
}



int compare_tree_int(const_tree t,ulong u)

{
  int iVar1;
  
  iVar1 = tree_int_cst_sgn(t);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else if (*(long *)&t->field_0x20 == 0) {
    if (u == *(ulong *)&t->field_0x18) {
      iVar1 = 0;
    }
    else if (*(ulong *)&t->field_0x18 < u) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



uchar associative_tree_code(tree_code code)

{
  uchar uVar1;
  
  if (((uint)(code + ~PLACEHOLDER_EXPR) < 0x1b) &&
     ((1 << ((byte)(code + ~PLACEHOLDER_EXPR) & 0x3f) & 0x7060005U) != 0)) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



uchar commutative_tree_code(tree_code code)

{
  uchar uVar1;
  
  switch(code) {
  case PLUS_EXPR:
  case MULT_EXPR:
  case MIN_EXPR:
  case MAX_EXPR:
  case BIT_IOR_EXPR:
  case BIT_XOR_EXPR:
  case BIT_AND_EXPR:
  case TRUTH_AND_EXPR:
  case TRUTH_OR_EXPR:
  case TRUTH_XOR_EXPR:
  case EQ_EXPR:
  case NE_EXPR:
  case UNORDERED_EXPR:
  case ORDERED_EXPR:
  case UNEQ_EXPR:
  case LTGT_EXPR:
    uVar1 = '\x01';
    break;
  default:
    uVar1 = '\0';
  }
  return uVar1;
}



hashval_t iterative_hash_expr(const_tree t_1,hashval_t val)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  uint uVar4;
  hashval_t hVar5;
  constructor_elt *pcVar6;
  VEC_constructor_elt_base *pVVar7;
  long in_FS_OFFSET;
  hashval_t local_54;
  const_tree local_50;
  char tclass;
  tree_code code;
  int i;
  hashval_t one;
  hashval_t two;
  uint val2_1;
  uint val2;
  hashval_t t;
  ulong idx;
  tree field;
  tree value;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (t_1 == (const_tree)0x0) {
    local_54 = iterative_hash_hashval_t(0,val);
    goto LAB_0010e121;
  }
  code = (tree_code)*(ushort *)t_1;
  local_50 = t_1;
  if ((uint)code < 0x34) {
    local_54 = val;
    switch(code) {
    case TREE_LIST:
      for (; local_50 != (const_tree)0x0; local_50 = *(const_tree *)&local_50->field_0x8) {
        local_54 = iterative_hash_expr(*(const_tree *)&local_50->field_0x20,local_54);
      }
      break;
    case INTEGER_CST:
      hVar5 = iterative_hash_host_wide_int(*(long *)&t_1->field_0x18,val);
      local_54 = iterative_hash_host_wide_int(*(long *)&t_1->field_0x20,hVar5);
      break;
    case REAL_CST:
      val2 = real_hash();
      local_54 = iterative_hash_hashval_t(val2,val);
      break;
    case FIXED_CST:
      val2_1 = fixed_hash();
      local_54 = iterative_hash_hashval_t(val2_1,val);
      break;
    case COMPLEX_CST:
      hVar5 = iterative_hash_expr(*(const_tree *)&t_1->field_0x18,val);
      local_54 = iterative_hash_expr(*(const_tree *)&t_1->field_0x20,hVar5);
      break;
    case VECTOR_CST:
      local_54 = iterative_hash_expr(*(const_tree *)&t_1->field_0x18,val);
      break;
    case STRING_CST:
      local_54 = iterative_hash(&t_1->field_0x1c,(long)*(int *)&t_1->field_0x18,val);
      break;
    case FUNCTION_DECL:
      if (((t_1->field_0xd9 & 0x18) == 0x18) &&
         (*(long *)(&built_in_decls + (long)(int)(uint)(*(ushort *)&t_1->field_0xd8 & 0x7ff) * 8) !=
          0)) {
        local_50 = *(const_tree *)
                    (&built_in_decls + (long)(int)(uint)(*(ushort *)&t_1->field_0xd8 & 0x7ff) * 8);
        code = (tree_code)*(ushort *)local_50;
      }
    default:
switchD_0010dce9_caseD_3:
      cVar2 = (char)*(undefined4 *)(tree_code_type + (long)code * 4);
      if (cVar2 == '\x03') {
        local_54 = iterative_hash_host_wide_int((ulong)*(uint *)&local_50->field_0x1c,val);
      }
      else {
        if ((cVar2 < '\x04') || ('\n' < cVar2)) {
          fancy_abort("tree.c",0x19e4,&DAT_00117460);
        }
        local_54 = iterative_hash(&code,4,val);
        if (((code == NOP_EXPR) || (code == CONVERT_EXPR)) || (code == NON_LVALUE_EXPR)) {
          local_54 = iterative_hash_expr(*(const_tree *)&local_50->field_0x28,
                                         local_54 +
                                         (*(byte *)(*(long *)&local_50->field_0x10 + 2) >> 5 & 1));
        }
        else {
          uVar3 = commutative_tree_code(code);
          if (uVar3 == '\0') {
            i = tree_operand_length(local_50);
            while (i = i + -1, -1 < i) {
              local_54 = iterative_hash_expr(*(const_tree *)(&local_50->field_0x28 + (long)i * 8),
                                             local_54);
            }
          }
          else {
            one = iterative_hash_expr(*(const_tree *)&local_50->field_0x28,0);
            hVar5 = iterative_hash_expr(*(const_tree *)&local_50->field_0x30,0);
            two = hVar5;
            if (hVar5 < one) {
              t = one;
              two = one;
              one = hVar5;
            }
            hVar5 = iterative_hash_hashval_t(one,local_54);
            local_54 = iterative_hash_hashval_t(two,hVar5);
          }
        }
      }
      break;
    case CONSTRUCTOR:
      idx = 0;
      while( true ) {
        if (*(long *)&t_1->field_0x18 == 0) {
          pVVar7 = (VEC_constructor_elt_base *)0x0;
        }
        else {
          pVVar7 = *(VEC_constructor_elt_base **)&t_1->field_0x18;
        }
        uVar4 = VEC_constructor_elt_base_length(pVVar7);
        if (idx < uVar4) {
          if (*(long *)&t_1->field_0x18 == 0) {
            pVVar7 = (VEC_constructor_elt_base *)0x0;
          }
          else {
            pVVar7 = *(VEC_constructor_elt_base **)&t_1->field_0x18;
          }
          pcVar6 = VEC_constructor_elt_base_index(pVVar7,(uint)idx);
          value = pcVar6->value;
          if (*(long *)&t_1->field_0x18 == 0) {
            pVVar7 = (VEC_constructor_elt_base *)0x0;
          }
          else {
            pVVar7 = *(VEC_constructor_elt_base **)&t_1->field_0x18;
          }
          pcVar6 = VEC_constructor_elt_base_index(pVVar7,(uint)idx);
          field = pcVar6->index;
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        hVar5 = iterative_hash_expr(field,local_54);
        local_54 = iterative_hash_expr(value,hVar5);
        idx = idx + 1;
      }
    }
LAB_0010e121:
    if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    return local_54;
  }
  if (code == 0x8d) {
    local_54 = iterative_hash_host_wide_int((ulong)*(uint *)&t_1->field_0x28,val);
    goto LAB_0010e121;
  }
  goto switchD_0010dce9_caseD_3;
}



hashval_t iterative_hash_exprs_commutative(const_tree t1,const_tree t2,hashval_t val)

{
  hashval_t hVar1;
  hashval_t one;
  hashval_t two;
  hashval_t t;
  
  hVar1 = iterative_hash_expr(t1,0);
  two = iterative_hash_expr(t2,0);
  one = hVar1;
  if (two < hVar1) {
    one = two;
    two = hVar1;
  }
  hVar1 = iterative_hash_hashval_t(one,val);
  hVar1 = iterative_hash_hashval_t(two,hVar1);
  return hVar1;
}



tree build_pointer_type_for_mode(tree to_type,machine_mode mode,uchar can_alias_all)

{
  machine_mode mVar1;
  tree ptVar2;
  tree ptVar3;
  byte local_28;
  tree t;
  
  ptVar2 = global_trees[0];
  if (to_type != global_trees[0]) {
    ptVar2 = lookup_attribute("may_alias",*(tree *)&to_type->field_0x30);
    local_28 = can_alias_all;
    if (ptVar2 != (tree)0x0) {
      local_28 = 1;
    }
    if ((*(long *)&to_type->field_0x48 == 0) || (**(short **)&to_type->field_0x48 == 10)) {
      for (t = *(tree *)&to_type->field_0x48; t != (tree)0x0; t = *(tree *)&t->field_0x68) {
        if (*(short *)t == 0xe) {
          mVar1 = vector_type_mode(t);
        }
        else {
          mVar1 = (machine_mode)(byte)t->field_0x3e;
        }
        if ((mVar1 == mode) && (((byte)t->field_0x3 >> 2 & 1) == local_28)) {
          return t;
        }
      }
      ptVar2 = make_node_stat(POINTER_TYPE);
      *(tree *)&ptVar2->field_0x10 = to_type;
      ptVar2->field_0x3e = (char)mode;
      ptVar2->field_0x3 = ptVar2->field_0x3 & 0xfb | (local_28 & 1) * '\x04';
      *(undefined8 *)&ptVar2->field_0x68 = *(undefined8 *)&to_type->field_0x48;
      *(tree *)&to_type->field_0x48 = ptVar2;
      if (*(long *)&to_type->field_0x98 == 0) {
        *(undefined8 *)&ptVar2->field_0x98 = 0;
      }
      else if (to_type != *(tree *)&to_type->field_0x98) {
        ptVar3 = build_pointer_type_for_mode(*(tree *)&to_type->field_0x98,mode,local_28);
        *(tree *)&ptVar2->field_0x98 = ptVar3;
      }
      layout_type(ptVar2);
    }
    else {
      ptVar2 = *(tree *)&to_type->field_0x48;
    }
  }
  return ptVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree build_pointer_type(tree to_type)

{
  undefined uVar1;
  machine_mode mode;
  tree ptVar2;
  addr_space_t as;
  machine_mode pointer_mode;
  
  if (to_type == global_trees[0]) {
    uVar1 = 0;
  }
  else {
    uVar1 = to_type->field_0x7;
  }
  mode = (*_DAT_00120970)(uVar1);
  ptVar2 = build_pointer_type_for_mode(to_type,mode,'\0');
  return ptVar2;
}



tree build_reference_type_for_mode(tree to_type,machine_mode mode,uchar can_alias_all)

{
  machine_mode mVar1;
  tree ptVar2;
  tree ptVar3;
  byte local_28;
  tree t;
  
  ptVar2 = global_trees[0];
  if (to_type != global_trees[0]) {
    ptVar2 = lookup_attribute("may_alias",*(tree *)&to_type->field_0x30);
    local_28 = can_alias_all;
    if (ptVar2 != (tree)0x0) {
      local_28 = 1;
    }
    if ((*(long *)&to_type->field_0x50 == 0) || (**(short **)&to_type->field_0x50 == 0xc)) {
      for (t = *(tree *)&to_type->field_0x50; t != (tree)0x0; t = *(tree *)&t->field_0x68) {
        if (*(short *)t == 0xe) {
          mVar1 = vector_type_mode(t);
        }
        else {
          mVar1 = (machine_mode)(byte)t->field_0x3e;
        }
        if ((mVar1 == mode) && (((byte)t->field_0x3 >> 2 & 1) == local_28)) {
          return t;
        }
      }
      ptVar2 = make_node_stat(REFERENCE_TYPE);
      *(tree *)&ptVar2->field_0x10 = to_type;
      ptVar2->field_0x3e = (char)mode;
      ptVar2->field_0x3 = ptVar2->field_0x3 & 0xfb | (local_28 & 1) * '\x04';
      *(undefined8 *)&ptVar2->field_0x68 = *(undefined8 *)&to_type->field_0x50;
      *(tree *)&to_type->field_0x50 = ptVar2;
      if (*(long *)&to_type->field_0x98 == 0) {
        *(undefined8 *)&ptVar2->field_0x98 = 0;
      }
      else if (to_type != *(tree *)&to_type->field_0x98) {
        ptVar3 = build_reference_type_for_mode(*(tree *)&to_type->field_0x98,mode,local_28);
        *(tree *)&ptVar2->field_0x98 = ptVar3;
      }
      layout_type(ptVar2);
    }
    else {
      ptVar2 = *(tree *)&to_type->field_0x50;
    }
  }
  return ptVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree build_reference_type(tree to_type)

{
  undefined uVar1;
  machine_mode mode;
  tree ptVar2;
  addr_space_t as;
  machine_mode pointer_mode;
  
  if (to_type == global_trees[0]) {
    uVar1 = 0;
  }
  else {
    uVar1 = to_type->field_0x7;
  }
  mode = (*_DAT_00120970)(uVar1);
  ptVar2 = build_reference_type_for_mode(to_type,mode,'\0');
  return ptVar2;
}



tree build_type_no_quals(tree t)

{
  byte bVar1;
  machine_mode mVar2;
  tree ptVar3;
  
  if (*(short *)t == 10) {
    bVar1 = t->field_0x3;
    if (*(short *)t == 0xe) {
      mVar2 = vector_type_mode(t);
    }
    else {
      mVar2 = (machine_mode)(byte)t->field_0x3e;
    }
    ptVar3 = build_type_no_quals(*(tree *)&t->field_0x10);
    ptVar3 = build_pointer_type_for_mode(ptVar3,mVar2,bVar1 >> 2 & 1);
  }
  else if (*(short *)t == 0xc) {
    bVar1 = t->field_0x3;
    if (*(short *)t == 0xe) {
      mVar2 = vector_type_mode(t);
    }
    else {
      mVar2 = (machine_mode)(byte)t->field_0x3e;
    }
    ptVar3 = build_type_no_quals(*(tree *)&t->field_0x10);
    ptVar3 = build_reference_type_for_mode(ptVar3,mVar2,bVar1 >> 2 & 1);
  }
  else {
    ptVar3 = *(tree *)&t->field_0x80;
  }
  return ptVar3;
}



tree build_index_type(tree maxval)

{
  undefined uVar1;
  int iVar2;
  tree type;
  undefined8 uVar3;
  long lVar4;
  tree itype;
  
  type = make_node_stat(INTEGER_TYPE);
  *(short **)&type->field_0x10 = sizetype_tab;
  *(ushort *)&type->field_0x3c = *(ushort *)&type->field_0x3c & 0xfc00 | sizetype_tab[0x1e] & 0x3ffU
  ;
  *(tree *)&type->field_0x68 = global_trees[17];
  uVar3 = fold_convert_loc(0,sizetype_tab,maxval);
  *(undefined8 *)&type->field_0x70 = uVar3;
  if (*sizetype_tab == 0xe) {
    uVar1 = vector_type_mode(sizetype_tab);
  }
  else {
    uVar1 = *(undefined *)(sizetype_tab + 0x1f);
  }
  type->field_0x3e = uVar1;
  *(undefined8 *)&type->field_0x20 = *(undefined8 *)(sizetype_tab + 0x10);
  *(undefined8 *)&type->field_0x28 = *(undefined8 *)(sizetype_tab + 0x14);
  *(undefined4 *)&type->field_0x40 = *(undefined4 *)(sizetype_tab + 0x20);
  type->field_0x5 = type->field_0x5 & 0xfb | (*(byte *)((long)sizetype_tab + 5) >> 2 & 1) * '\x04';
  iVar2 = host_integerp(maxval,1);
  if (iVar2 == 0) {
    *(undefined8 *)&type->field_0x98 = 0;
  }
  else {
    lVar4 = tree_low_cst(maxval,1);
    type = type_hash_canon((uint)lVar4,type);
  }
  return type;
}



tree build_nonstandard_integer_type(ulong precision,int unsignedp)

{
  int iVar1;
  tree type;
  long lVar2;
  tree itype;
  
  type = make_node_stat(INTEGER_TYPE);
  *(ushort *)&type->field_0x3c = *(ushort *)&type->field_0x3c & 0xfc00 | (ushort)precision & 0x3ff;
  if (unsignedp == 0) {
    fixup_signed_type(type);
  }
  else {
    fixup_unsigned_type(type);
  }
  iVar1 = host_integerp(*(const_tree *)&type->field_0x70,1);
  if (iVar1 != 0) {
    lVar2 = tree_low_cst(*(const_tree *)&type->field_0x70,1);
    type = type_hash_canon((uint)lVar2,type);
  }
  return type;
}



tree build_range_type(tree type,tree lowval,tree highval)

{
  undefined uVar1;
  int iVar2;
  tree type_00;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  tree local_30;
  tree itype;
  
  type_00 = make_node_stat(INTEGER_TYPE);
  *(tree *)&type_00->field_0x10 = type;
  local_30 = type;
  if (type == (tree)0x0) {
    local_30 = sizetype_tab;
  }
  uVar3 = fold_convert_loc(0,local_30,lowval);
  *(undefined8 *)&type_00->field_0x68 = uVar3;
  if (highval == (tree)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fold_convert_loc(0,local_30,highval);
  }
  *(undefined8 *)&type_00->field_0x70 = uVar3;
  *(ushort *)&type_00->field_0x3c =
       *(ushort *)&type_00->field_0x3c & 0xfc00 | *(ushort *)&local_30->field_0x3c & 0x3ff;
  if (*(short *)local_30 == 0xe) {
    uVar1 = vector_type_mode(local_30);
  }
  else {
    uVar1 = local_30->field_0x3e;
  }
  type_00->field_0x3e = uVar1;
  *(undefined8 *)&type_00->field_0x20 = *(undefined8 *)&local_30->field_0x20;
  *(undefined8 *)&type_00->field_0x28 = *(undefined8 *)&local_30->field_0x28;
  *(undefined4 *)&type_00->field_0x40 = *(undefined4 *)&local_30->field_0x40;
  type_00->field_0x5 = type_00->field_0x5 & 0xfb | ((byte)local_30->field_0x5 >> 2 & 1) * '\x04';
  iVar2 = host_integerp(lowval,0);
  if (((iVar2 != 0) && (highval != (tree)0x0)) && (iVar2 = host_integerp(highval,0), iVar2 != 0)) {
    lVar4 = tree_low_cst(highval,0);
    lVar5 = tree_low_cst(lowval,0);
    type_00 = type_hash_canon((int)lVar4 - (int)lVar5,type_00);
  }
  return type_00;
}



uchar subrange_type_for_debug_p(const_tree type,tree *lowval,tree *highval)

{
  uchar uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  tree low;
  tree high;
  tree type_name;
  tree base_type_name;
  tree base_type;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  base_type = *(tree *)&type->field_0x10;
  if (((*(short *)base_type == 6) || (*(short *)base_type == 7)) || (*(short *)base_type == 8)) {
    if (gimple_fold_obj_type_ref == (code *)0x0) {
      low = *(tree *)&type->field_0x68;
      high = *(tree *)&type->field_0x70;
    }
    else {
      (*gimple_fold_obj_type_ref)(type,&low,&high);
    }
    if ((*(short *)base_type == 8) || (*(short *)base_type == 7)) {
      lVar3 = int_size_in_bytes(type);
      lVar4 = int_size_in_bytes(base_type);
      if (lVar3 == lVar4) {
        iVar2 = tree_int_cst_equal(low,*(const_tree *)&base_type->field_0x68);
        if (iVar2 != 0) {
          iVar2 = tree_int_cst_equal(high,*(const_tree *)&base_type->field_0x70);
          if (iVar2 != 0) {
            type_name = *(tree *)&type->field_0x60;
            base_type_name = *(tree *)&base_type->field_0x60;
            if ((type_name != (tree)0x0) && (*(short *)type_name == 0x23)) {
              type_name = *(tree *)&type_name->field_0x20;
            }
            if ((base_type_name != (tree)0x0) && (*(short *)base_type_name == 0x23)) {
              base_type_name = *(tree *)&base_type_name->field_0x20;
            }
            if (type_name == base_type_name) {
              uVar1 = '\0';
              goto LAB_0010ec3f;
            }
          }
        }
      }
    }
    if (lowval != (tree *)0x0) {
      *lowval = low;
    }
    if (highval != (tree *)0x0) {
      *highval = high;
    }
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
LAB_0010ec3f:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar1;
}



tree build_index_2_type(tree lowval,tree highval)

{
  tree ptVar1;
  
  ptVar1 = build_range_type(sizetype_tab,lowval,highval);
  return ptVar1;
}



tree build_array_type(tree elt_type,tree index_type)

{
  tree type;
  tree ptVar1;
  tree local_20;
  hashval_t hashcode;
  tree t;
  
  local_20 = elt_type;
  if (*(short *)elt_type == 0x14) {
    error("arrays of functions are not meaningful");
    local_20 = integer_types[5];
  }
  type = make_node_stat(ARRAY_TYPE);
  *(tree *)&type->field_0x10 = local_20;
  *(tree *)&type->field_0x18 = index_type;
  type->field_0x7 = local_20->field_0x7;
  layout_type(type);
  if (*(long *)&type->field_0x98 != 0) {
    hashcode = iterative_hash(&local_20->field_0x38,4,0);
    if (index_type != (tree)0x0) {
      hashcode = iterative_hash(&index_type->field_0x38,4,hashcode);
    }
    type = type_hash_canon(hashcode,type);
    if (type == *(tree *)&type->field_0x98) {
      if ((*(long *)&local_20->field_0x98 == 0) ||
         ((index_type != (tree)0x0 && (*(long *)&index_type->field_0x98 == 0)))) {
        *(undefined8 *)&type->field_0x98 = 0;
      }
      else if ((local_20 != *(tree *)&local_20->field_0x98) ||
              ((index_type != (tree)0x0 && (index_type != *(tree *)&index_type->field_0x98)))) {
        if (index_type == (tree)0x0) {
          ptVar1 = (tree)0x0;
        }
        else {
          ptVar1 = *(tree *)&index_type->field_0x98;
        }
        ptVar1 = build_array_type(*(tree *)&local_20->field_0x98,ptVar1);
        *(tree *)&type->field_0x98 = ptVar1;
      }
    }
  }
  return type;
}



tree strip_array_types(tree type)

{
  tree local_10;
  
  for (local_10 = type; *(short *)local_10 == 0xf; local_10 = *(tree *)&local_10->field_0x10) {
  }
  return local_10;
}



tree maybe_canonicalize_argtypes(tree argtypes,uchar *any_structural_p,uchar *any_noncanonical_p)

{
  bool bVar1;
  uchar any_noncanonical_argtypes_p;
  uchar is_void;
  tree arg;
  tree canon_argtypes;
  
  bVar1 = false;
  arg = argtypes;
  while ((arg != (tree)0x0 && (*any_structural_p == '\0'))) {
    if ((*(long *)&arg->field_0x20 == 0) || (*(tree *)&arg->field_0x20 == global_trees[0])) {
      *any_structural_p = '\x01';
    }
    else if (*(long *)(*(long *)&arg->field_0x20 + 0x98) == 0) {
      *any_structural_p = '\x01';
    }
    else if ((*(long *)(*(long *)&arg->field_0x20 + 0x98) != *(long *)&arg->field_0x20) ||
            (*(long *)&arg->field_0x18 != 0)) {
      bVar1 = true;
    }
    arg = *(tree *)&arg->field_0x8;
  }
  canon_argtypes = argtypes;
  if ((*any_structural_p == '\0') && (bVar1)) {
    canon_argtypes = (tree)0x0;
    bVar1 = false;
    for (arg = argtypes; arg != (tree)0x0; arg = *(tree *)&arg->field_0x8) {
      if (arg == global_trees[55]) {
        bVar1 = true;
      }
      else {
        canon_argtypes =
             tree_cons_stat((tree)0x0,*(tree *)(*(long *)&arg->field_0x20 + 0x98),canon_argtypes);
      }
    }
    canon_argtypes = nreverse(canon_argtypes);
    if (bVar1) {
      canon_argtypes = chainon(canon_argtypes,global_trees[55]);
    }
    *any_noncanonical_p = '\x01';
  }
  return canon_argtypes;
}



tree build_function_type(tree value_type,tree arg_types)

{
  tree ptVar1;
  long in_FS_OFFSET;
  tree local_30;
  uchar any_structural_p;
  uchar any_noncanonical_p;
  hashval_t hashcode;
  tree t;
  tree canon_argtypes;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  hashcode = 0;
  local_30 = value_type;
  if (*(short *)value_type == 0x14) {
    error("function return type cannot be function");
    local_30 = integer_types[5];
  }
  t = make_node_stat(FUNCTION_TYPE);
  *(tree *)&t->field_0x10 = local_30;
  *(tree *)&t->field_0x18 = arg_types;
  hashcode = iterative_hash(&local_30->field_0x38,4,hashcode);
  hashcode = type_hash_list(arg_types,hashcode);
  t = type_hash_canon(hashcode,t);
  any_structural_p = *(long *)&local_30->field_0x98 == 0;
  any_noncanonical_p = local_30 != *(tree *)&local_30->field_0x98;
  canon_argtypes = maybe_canonicalize_argtypes(arg_types,&any_structural_p,&any_noncanonical_p);
  if (any_structural_p == '\0') {
    if (any_noncanonical_p != '\0') {
      ptVar1 = build_function_type(*(tree *)&local_30->field_0x98,canon_argtypes);
      *(tree *)&t->field_0x98 = ptVar1;
    }
  }
  else {
    *(undefined8 *)&t->field_0x98 = 0;
  }
  if (*(long *)&t->field_0x20 == 0) {
    layout_type(t);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return t;
}



tree build_function_type_skip_args(tree orig_type,bitmap args_to_skip)

{
  int iVar1;
  tree ptVar2;
  int i;
  tree new_type;
  tree args;
  tree new_args;
  tree new_reversed;
  tree t;
  
  new_args = (tree)0x0;
  i = 0;
  for (args = *(tree *)&orig_type->field_0x18; (args != (tree)0x0 && (args != global_trees[55]));
      args = *(tree *)&args->field_0x8) {
    iVar1 = bitmap_bit_p(args_to_skip,i);
    if (iVar1 == 0) {
      new_args = tree_cons_stat((tree)0x0,*(tree *)&args->field_0x20,new_args);
    }
    i = i + 1;
  }
  new_reversed = nreverse(new_args);
  if (args != (tree)0x0) {
    if (new_reversed == (tree)0x0) {
      new_reversed = global_trees[55];
    }
    else {
      *(tree *)&new_args->field_0x8 = global_trees[55];
    }
  }
  if (*(short *)orig_type == 0x15) {
    iVar1 = bitmap_bit_p(args_to_skip,0);
    if (iVar1 != 0) {
      ptVar2 = build_function_type(*(tree *)&orig_type->field_0x10,new_reversed);
      new_type = build_distinct_type_copy(ptVar2);
      *(undefined8 *)&new_type->field_0x90 = *(undefined8 *)&orig_type->field_0x90;
      goto LAB_0010f29f;
    }
  }
  new_type = copy_node_stat(orig_type);
  *(tree *)&new_type->field_0x18 = new_reversed;
LAB_0010f29f:
  ptVar2 = *(tree *)&orig_type->field_0x80;
  if (orig_type == ptVar2) {
    *(tree *)&new_type->field_0x80 = new_type;
    *(undefined8 *)&new_type->field_0x78 = 0;
  }
  else {
    *(tree *)&new_type->field_0x80 = ptVar2;
    *(undefined8 *)&new_type->field_0x78 = *(undefined8 *)&ptVar2->field_0x78;
    *(tree *)&ptVar2->field_0x78 = new_type;
  }
  return new_type;
}



tree build_function_decl_skip_args(tree orig_decl,bitmap args_to_skip)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  tree new_type;
  tree new_decl;
  
  ptVar3 = copy_node_stat(orig_decl);
  new_type = *(tree *)&orig_decl->field_0x10;
  uVar1 = prototype_p(new_type);
  if (uVar1 != '\0') {
    new_type = build_function_type_skip_args(new_type,args_to_skip);
  }
  *(tree *)&ptVar3->field_0x10 = new_type;
  iVar2 = bitmap_bit_p(args_to_skip,0);
  if (iVar2 != 0) {
    *(undefined8 *)&ptVar3->field_0xb0 = 0;
  }
  return ptVar3;
}



tree build_function_type_list_1(uchar vaargs,tree return_type,__va_list_tag *argp)

{
  tree *pptVar1;
  tree ptVar2;
  tree t;
  tree args;
  tree last;
  
  if (argp->gp_offset < 0x30) {
    pptVar1 = (tree *)((ulong)argp->gp_offset + (long)argp->reg_save_area);
    argp->gp_offset = argp->gp_offset + 8;
  }
  else {
    pptVar1 = (tree *)argp->overflow_arg_area;
    argp->overflow_arg_area = pptVar1 + 1;
  }
  t = *pptVar1;
  args = (tree)0x0;
  while (ptVar2 = args, t != (tree)0x0) {
    args = tree_cons_stat((tree)0x0,t,args);
    if (argp->gp_offset < 0x30) {
      pptVar1 = (tree *)((ulong)argp->gp_offset + (long)argp->reg_save_area);
      argp->gp_offset = argp->gp_offset + 8;
    }
    else {
      pptVar1 = (tree *)argp->overflow_arg_area;
      argp->overflow_arg_area = pptVar1 + 1;
    }
    t = *pptVar1;
  }
  if (vaargs == '\0') {
    if (args == (tree)0x0) {
      args = global_trees[55];
    }
    else {
      ptVar2 = nreverse(args);
      *(tree *)&args->field_0x8 = global_trees[55];
      args = ptVar2;
    }
  }
  else {
    if (args != (tree)0x0) {
      args = nreverse(args);
    }
    if ((args == (tree)0x0) || (ptVar2 == global_trees[55])) {
      fancy_abort("tree.c",0x1c76,&DAT_00117460);
    }
  }
  ptVar2 = build_function_type(return_type,args);
  return ptVar2;
}



tree build_function_type_list(tree return_type,...)

{
  long lVar1;
  char in_AL;
  tree ptVar2;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  tree args;
  va_list p;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  p[0].gp_offset = 8;
  p[0].fp_offset = 0x30;
  p[0].overflow_arg_area = &stack0x00000008;
  p[0].reg_save_area = local_b8;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  ptVar2 = build_function_type_list_1('\0',return_type,p);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar2;
}



tree build_varargs_function_type_list(tree return_type,...)

{
  long lVar1;
  char in_AL;
  tree ptVar2;
  undefined8 in_RCX;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  tree args;
  va_list p;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  p[0].gp_offset = 8;
  p[0].fp_offset = 0x30;
  p[0].overflow_arg_area = &stack0x00000008;
  p[0].reg_save_area = local_b8;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  ptVar2 = build_function_type_list_1('\x01',return_type,p);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar2;
}



tree build_method_type_directly(tree basetype,tree rettype,tree argtypes)

{
  tree ptVar1;
  long in_FS_OFFSET;
  uchar any_structural_p;
  uchar any_noncanonical_p;
  int hashcode;
  tree t;
  tree ptype;
  tree canon_argtypes;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  hashcode = 0;
  t = make_node_stat(METHOD_TYPE);
  *(undefined8 *)&t->field_0x70 = *(undefined8 *)&basetype->field_0x80;
  *(tree *)&t->field_0x10 = rettype;
  ptype = build_pointer_type(basetype);
  ptVar1 = tree_cons_stat((tree)0x0,ptype,argtypes);
  *(tree *)&t->field_0x18 = ptVar1;
  hashcode = iterative_hash(&basetype->field_0x38,4,hashcode);
  hashcode = iterative_hash(&rettype->field_0x38,4,hashcode);
  hashcode = type_hash_list(ptVar1,hashcode);
  t = type_hash_canon(hashcode,t);
  if ((*(long *)&basetype->field_0x98 == 0) || (*(long *)&rettype->field_0x98 == 0)) {
    any_structural_p = '\x01';
  }
  else {
    any_structural_p = '\0';
  }
  if ((basetype == *(tree *)&basetype->field_0x98) && (rettype == *(tree *)&rettype->field_0x98)) {
    any_noncanonical_p = '\0';
  }
  else {
    any_noncanonical_p = '\x01';
  }
  canon_argtypes =
       maybe_canonicalize_argtypes
                 (*(tree *)&ptVar1->field_0x8,&any_structural_p,&any_noncanonical_p);
  if (any_structural_p == '\0') {
    if (any_noncanonical_p != '\0') {
      ptVar1 = build_method_type_directly
                         (*(tree *)&basetype->field_0x98,*(tree *)&rettype->field_0x98,
                          canon_argtypes);
      *(tree *)&t->field_0x98 = ptVar1;
    }
  }
  else {
    *(undefined8 *)&t->field_0x98 = 0;
  }
  if (*(long *)&t->field_0x20 == 0) {
    layout_type(t);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return t;
}



tree build_method_type(tree basetype,tree type)

{
  tree ptVar1;
  
  if (*(short *)type != 0x14) {
    fancy_abort("tree.c",0x1ce9,&DAT_00117460);
  }
  ptVar1 = build_method_type_directly
                     (basetype,*(tree *)&type->field_0x10,*(tree *)&type->field_0x18);
  return ptVar1;
}



tree build_offset_type(tree basetype,tree type)

{
  undefined4 uVar1;
  uint hashcode_00;
  tree ptVar2;
  tree ptVar3;
  hashval_t hashcode;
  tree t;
  
  ptVar2 = make_node_stat(OFFSET_TYPE);
  *(undefined8 *)&ptVar2->field_0x70 = *(undefined8 *)&basetype->field_0x80;
  *(tree *)&ptVar2->field_0x10 = type;
  uVar1 = iterative_hash(&basetype->field_0x38,4,0);
  hashcode_00 = iterative_hash(&type->field_0x38,4,uVar1);
  ptVar2 = type_hash_canon(hashcode_00,ptVar2);
  if (*(long *)&ptVar2->field_0x20 == 0) {
    layout_type(ptVar2);
  }
  if (ptVar2 == *(tree *)&ptVar2->field_0x98) {
    if ((*(long *)&basetype->field_0x98 == 0) || (*(long *)&type->field_0x98 == 0)) {
      *(undefined8 *)&ptVar2->field_0x98 = 0;
    }
    else if ((basetype != *(tree *)(*(long *)&basetype->field_0x80 + 0x98)) ||
            (type != *(tree *)&type->field_0x98)) {
      ptVar3 = build_offset_type(*(tree *)(*(long *)&basetype->field_0x80 + 0x98),
                                 *(tree *)&type->field_0x98);
      *(tree *)&ptVar2->field_0x98 = ptVar3;
    }
  }
  return ptVar2;
}



tree build_complex_type(tree component_type)

{
  uint hashcode_00;
  tree ptVar1;
  tree ptVar2;
  hashval_t hashcode;
  char *name;
  tree t;
  
  if ((((*(short *)component_type != 6) && (*(short *)component_type != 7)) &&
      (*(short *)component_type != 8)) &&
     ((*(short *)component_type != 9 && (*(short *)component_type != 0xb)))) {
    fancy_abort("tree.c",0x1d1f,&DAT_00117460);
  }
  ptVar1 = make_node_stat(COMPLEX_TYPE);
  *(undefined8 *)&ptVar1->field_0x10 = *(undefined8 *)&component_type->field_0x80;
  hashcode_00 = iterative_hash(&component_type->field_0x38,4,0);
  ptVar1 = type_hash_canon(hashcode_00,ptVar1);
  if (*(long *)&ptVar1->field_0x20 == 0) {
    layout_type(ptVar1);
  }
  if (ptVar1 == *(tree *)&ptVar1->field_0x98) {
    if (*(long *)&component_type->field_0x98 == 0) {
      *(undefined8 *)&ptVar1->field_0x98 = 0;
    }
    else if (component_type != *(tree *)&component_type->field_0x98) {
      ptVar2 = build_complex_type(*(tree *)&component_type->field_0x98);
      *(tree *)&ptVar1->field_0x98 = ptVar2;
    }
  }
  if (*(long *)&ptVar1->field_0x60 == 0) {
    if (component_type == integer_types[0]) {
      name = "complex char";
    }
    else if (component_type == integer_types[1]) {
      name = "complex signed char";
    }
    else if (component_type == integer_types[2]) {
      name = "complex unsigned char";
    }
    else if (component_type == integer_types[3]) {
      name = "complex short int";
    }
    else if (component_type == integer_types[4]) {
      name = "complex short unsigned int";
    }
    else if (component_type == integer_types[5]) {
      name = "complex int";
    }
    else if (component_type == integer_types[6]) {
      name = "complex unsigned int";
    }
    else if (component_type == integer_types[7]) {
      name = "complex long int";
    }
    else if (component_type == integer_types[8]) {
      name = "complex long unsigned int";
    }
    else if (component_type == integer_types[9]) {
      name = "complex long long int";
    }
    else if (component_type == integer_types[10]) {
      name = "complex long long unsigned int";
    }
    else {
      name = (char *)0x0;
    }
    if (name != (char *)0x0) {
      ptVar2 = (tree)get_identifier(name);
      ptVar2 = build_decl_stat(0,TYPE_DECL,ptVar2,ptVar1);
      *(tree *)&ptVar1->field_0x60 = ptVar2;
    }
  }
  ptVar1 = build_qualified_type
                     (ptVar1,(uint)((byte)component_type->field_0x2 >> 4 & 1) |
                             (uint)((byte)component_type->field_0x2 >> 3 & 1) * 2 |
                             (uint)((byte)component_type->field_0x3d >> 5 & 1) << 2 |
                             (uint)(byte)component_type->field_0x7 << 8);
  return ptVar1;
}



tree excess_precision_type(tree type)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int flt_eval_method;
  
  if (flag_excess_precision != 1) {
    if ((ix86_fpmath & 3) == 3) {
      iVar1 = -1;
    }
    else if ((ix86_fpmath & 2) == 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = 0;
    }
    if (*(short *)type == 9) {
      if (iVar1 == 1) {
        if (*(short *)type == 0xe) {
          uVar2 = vector_type_mode(type);
        }
        else {
          uVar2 = (uint)(byte)type->field_0x3e;
        }
        if (*(short *)global_trees[31] == 0xe) {
          uVar3 = vector_type_mode(global_trees[31]);
        }
        else {
          uVar3 = (uint)(byte)global_trees[31]->field_0x3e;
        }
        if (uVar2 == uVar3) {
          return global_trees[32];
        }
      }
      else if (iVar1 == 2) {
        if (*(short *)type == 0xe) {
          uVar2 = vector_type_mode(type);
        }
        else {
          uVar2 = (uint)(byte)type->field_0x3e;
        }
        if (*(short *)global_trees[31] == 0xe) {
          uVar3 = vector_type_mode(global_trees[31]);
        }
        else {
          uVar3 = (uint)(byte)global_trees[31]->field_0x3e;
        }
        if (uVar2 == uVar3) {
          return global_trees[33];
        }
        if (*(short *)type == 0xe) {
          uVar2 = vector_type_mode(type);
        }
        else {
          uVar2 = (uint)(byte)type->field_0x3e;
        }
        if (*(short *)global_trees[32] == 0xe) {
          uVar3 = vector_type_mode(global_trees[32]);
        }
        else {
          uVar3 = (uint)(byte)global_trees[32]->field_0x3e;
        }
        if (uVar2 == uVar3) {
          return global_trees[33];
        }
      }
      else {
        fancy_abort("tree.c",0x1d77,&DAT_00117460);
      }
    }
    else if (*(short *)type == 0xd) {
      if (**(short **)&type->field_0x10 != 9) {
        return (tree)0x0;
      }
      if (iVar1 == 1) {
        if (**(short **)&type->field_0x10 == 0xe) {
          uVar2 = vector_type_mode(*(undefined8 *)&type->field_0x10);
        }
        else {
          uVar2 = (uint)*(byte *)(*(long *)&type->field_0x10 + 0x3e);
        }
        if (*(short *)global_trees[31] == 0xe) {
          uVar3 = vector_type_mode(global_trees[31]);
        }
        else {
          uVar3 = (uint)(byte)global_trees[31]->field_0x3e;
        }
        if (uVar2 == uVar3) {
          return global_trees[29];
        }
      }
      else if (iVar1 == 2) {
        if (**(short **)&type->field_0x10 == 0xe) {
          uVar2 = vector_type_mode(*(undefined8 *)&type->field_0x10);
        }
        else {
          uVar2 = (uint)*(byte *)(*(long *)&type->field_0x10 + 0x3e);
        }
        if (*(short *)global_trees[31] == 0xe) {
          uVar3 = vector_type_mode(global_trees[31]);
        }
        else {
          uVar3 = (uint)(byte)global_trees[31]->field_0x3e;
        }
        if (uVar2 == uVar3) {
          return global_trees[30];
        }
        if (**(short **)&type->field_0x10 == 0xe) {
          uVar2 = vector_type_mode(*(undefined8 *)&type->field_0x10);
        }
        else {
          uVar2 = (uint)*(byte *)(*(long *)&type->field_0x10 + 0x3e);
        }
        if (*(short *)global_trees[32] == 0xe) {
          uVar3 = vector_type_mode(global_trees[32]);
        }
        else {
          uVar3 = (uint)(byte)global_trees[32]->field_0x3e;
        }
        if (uVar2 == uVar3) {
          return global_trees[30];
        }
      }
      else {
        fancy_abort("tree.c",0x1d8a,&DAT_00117460);
      }
    }
  }
  return (tree)0x0;
}



tree get_unwidened(tree op,tree for_type)

{
  tree ptVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  tree ptVar5;
  tree local_30;
  int uns;
  uint final_prec;
  int bitschange;
  tree win;
  tree type;
  
  ptVar1 = *(tree *)&op->field_0x10;
  ptVar5 = ptVar1;
  if (for_type != (tree)0x0) {
    ptVar5 = for_type;
  }
  uVar3 = *(ushort *)&ptVar5->field_0x3c & 0x3ff;
  local_30 = op;
  win = op;
  if ((((for_type == (tree)0x0) || (for_type == ptVar1)) ||
      (uVar3 <= (*(ushort *)&ptVar1->field_0x3c & 0x3ff))) || ((ptVar1->field_0x2 & 0x20) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  while (((*(short *)local_30 == 0x74 || (*(short *)local_30 == 0x71)) &&
         ((**(short **)(*(long *)&local_30->field_0x28 + 0x10) != 0xe &&
          ((iVar4 = (uint)(*(ushort *)(*(long *)&local_30->field_0x10 + 0x3c) & 0x3ff) -
                    (uint)(*(ushort *)(*(long *)(*(long *)&local_30->field_0x28 + 0x10) + 0x3c) &
                          0x3ff), -1 < iVar4 ||
           (uVar3 <= (*(ushort *)(*(long *)&local_30->field_0x10 + 0x3c) & 0x3ff)))))))) {
    local_30 = *(tree *)&local_30->field_0x28;
    if (0 < iVar4) {
      if ((!bVar2) || (uVar3 <= (*(ushort *)(*(long *)&local_30->field_0x10 + 0x3c) & 0x3ff))) {
        win = local_30;
      }
      if ((((bVar2) || (*(short *)local_30 == 0x74)) || (*(short *)local_30 == 0x71)) &&
         ((*(byte *)(*(long *)&local_30->field_0x10 + 2) & 0x20) != 0)) {
        bVar2 = true;
        win = local_30;
      }
    }
  }
  if (((for_type != (tree)0x0) && (*(short *)win == 0x17)) &&
     ((for_type != *(tree *)&win->field_0x10 && (iVar4 = int_fits_type_p(win,for_type), iVar4 != 0))
     )) {
    win = (tree)fold_convert_loc(0,for_type,win);
  }
  return win;
}



tree get_narrower(tree op,int *unsignedp_ptr)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  tree local_40;
  uchar integral_p;
  int uns;
  int first;
  int bitschange;
  int unsignedp;
  tree win;
  ulong innerprec;
  tree type;
  
  uns = 0;
  bVar1 = true;
  local_40 = op;
  win = op;
  if (((**(short **)&op->field_0x10 == 6) || (**(short **)&op->field_0x10 == 7)) ||
     (**(short **)&op->field_0x10 == 8)) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
LAB_00110480:
  if ((*(short *)local_40 != 0x74) ||
     (iVar3 = (uint)(*(ushort *)(*(long *)&local_40->field_0x10 + 0x3c) & 0x3ff) -
              (uint)(*(ushort *)(*(long *)(*(long *)&local_40->field_0x28 + 0x10) + 0x3c) & 0x3ff),
     iVar3 < 0)) {
LAB_00110497:
    if ((((*(short *)local_40 == 0x29) && (**(short **)&local_40->field_0x10 != 9)) &&
        (**(short **)&local_40->field_0x10 != 0xb)) &&
       ((*(long *)(*(long *)&local_40->field_0x30 + 0x30) != 0 &&
        (iVar3 = host_integerp(*(const_tree *)(*(long *)&local_40->field_0x30 + 0x30),1), iVar3 != 0
        )))) {
      uVar5 = tree_low_cst(*(const_tree *)(*(long *)&local_40->field_0x30 + 0x30),1);
      if (((*(byte *)(*(long *)&local_40->field_0x30 + 2) & 0x20) == 0) &&
         ((*(byte *)(*(long *)(*(long *)&local_40->field_0x30 + 0x10) + 2) & 0x20) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      lVar6 = (*alias_pairs)(uVar5 & 0xffffffff,uVar4);
      if (((uVar5 < (*(ushort *)(*(long *)&local_40->field_0x10 + 0x3c) & 0x3ff)) &&
          ((*(byte *)(*(long *)&local_40->field_0x30 + 0x3b) & 2) == 0)) &&
         (((bVar1 || (uns == (uint)(*(byte *)(*(long *)&local_40->field_0x30 + 2) >> 5 & 1))) &&
          (lVar6 != 0)))) {
        if (bVar1) {
          uns = (int)(*(byte *)(*(long *)&local_40->field_0x30 + 2) >> 5 & 1);
        }
        win = (tree)fold_convert_loc(0,lVar6,local_40);
      }
    }
    *unsignedp_ptr = uns;
    return win;
  }
  if (iVar3 < 1) goto LAB_001103fe;
  local_40 = *(tree *)&local_40->field_0x28;
  if (bVar1) {
    uns = (int)(*(byte *)(*(long *)&local_40->field_0x10 + 2) >> 5 & 1);
    goto LAB_00110478;
  }
  if (uns != (uint)(*(byte *)(*(long *)&local_40->field_0x10 + 2) >> 5 & 1)) goto LAB_00110497;
LAB_00110478:
  bVar1 = false;
  win = local_40;
  goto LAB_00110480;
LAB_001103fe:
  if (bVar1) {
    uns = (int)(*(byte *)(*(long *)&local_40->field_0x10 + 2) >> 5 & 1);
  }
  bVar1 = false;
  local_40 = *(tree *)&local_40->field_0x28;
  if (((**(short **)&local_40->field_0x10 == 6) || (**(short **)&local_40->field_0x10 == 7)) ||
     (**(short **)&local_40->field_0x10 == 8)) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  if (cVar7 != cVar2) goto LAB_00110480;
  goto LAB_00110478;
}



int int_fits_type_p(const_tree c,const_tree type)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  long in_FS_OFFSET;
  undefined auVar12 [16];
  const_tree local_78;
  uchar ok_for_low_bound;
  uchar ok_for_high_bound;
  uchar unsc;
  int c_neg;
  int t_neg;
  int c_neg_1;
  int t_neg_1;
  int prec;
  tree type_low_bound;
  tree type_high_bound;
  double_int dc;
  double_int dd;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  dc = tree_to_double_int(c);
  bVar4 = *(byte *)(*(long *)&c->field_0x10 + 2) >> 5 & 1;
  local_78 = type;
  auVar12 = dc;
  if (((**(short **)&c->field_0x10 == 8) && ((*(byte *)(*(long *)&c->field_0x10 + 0x3d) & 4) != 0))
     && (bVar4 != 0)) {
    auVar12 = double_int_zext(SUB168(dc,0),SUB168(dc >> 0x40,0),
                              *(ushort *)(*(long *)&c->field_0x10 + 0x3c) & 0x3ff);
  }
  do {
    psVar2 = *(short **)&local_78->field_0x68;
    psVar3 = *(short **)&local_78->field_0x70;
    if ((psVar2 == (short *)0x0) || (*psVar2 != 0x17)) {
      bVar6 = false;
    }
    else {
      dc = auVar12;
      auVar12 = tree_to_double_int(psVar2);
      if (((*(short *)local_78 == 8) && ((local_78->field_0x3d & 4) != 0)) &&
         ((local_78->field_0x2 & 0x20) != 0)) {
        auVar12 = double_int_zext(SUB168(auVar12,0),SUB168(auVar12 >> 0x40,0),
                                  *(ushort *)&local_78->field_0x3c & 0x3ff);
      }
      dd.high = SUB168(auVar12 >> 0x40,0);
      dd.low = SUB168(auVar12,0);
      dc.high = SUB168(dc >> 0x40,0);
      if (bVar4 == (*(byte *)(*(long *)(psVar2 + 8) + 2) >> 5 & 1)) {
        iVar9 = double_int_cmp(dc.low,dc.high,dd.low,dd.high,bVar4);
        if (iVar9 < 0) {
          uVar10 = 0;
          goto LAB_00110b72;
        }
      }
      else {
        if (bVar4 == 0) {
          cVar5 = double_int_negative_p(dc.low,dc.high);
          if (cVar5 == '\0') goto LAB_00110794;
          bVar6 = true;
        }
        else {
LAB_00110794:
          bVar6 = false;
        }
        if (bVar4 == 0) {
LAB_001107c0:
          bVar7 = false;
        }
        else {
          cVar5 = double_int_negative_p(dd.low,dd.high);
          if (cVar5 == '\0') goto LAB_001107c0;
          bVar7 = true;
        }
        dc.high = SUB168(dc >> 0x40,0);
        if ((bVar6) && (!bVar7)) {
          uVar10 = 0;
          goto LAB_00110b72;
        }
        if ((bVar6) || (!bVar7)) {
          iVar9 = double_int_ucmp(dc.low,dc.high,dd.low);
          if (iVar9 < 0) {
            uVar10 = 0;
            goto LAB_00110b72;
          }
        }
      }
      bVar6 = true;
      auVar12 = dc;
    }
    if ((psVar3 == (short *)0x0) || (*psVar3 != 0x17)) {
      bVar7 = false;
    }
    else {
      dc = auVar12;
      auVar12 = tree_to_double_int(psVar3);
      if (((*(short *)local_78 == 8) && ((local_78->field_0x3d & 4) != 0)) &&
         ((local_78->field_0x2 & 0x20) != 0)) {
        auVar12 = double_int_zext(SUB168(auVar12,0),SUB168(auVar12 >> 0x40,0),
                                  *(ushort *)&local_78->field_0x3c & 0x3ff);
      }
      dd.high = SUB168(auVar12 >> 0x40,0);
      dd.low = SUB168(auVar12,0);
      dc.high = SUB168(dc >> 0x40,0);
      if (bVar4 == (*(byte *)(*(long *)(psVar3 + 8) + 2) >> 5 & 1)) {
        iVar9 = double_int_cmp(dc.low,dc.high,dd.low,dd.high,bVar4);
        if (0 < iVar9) {
          uVar10 = 0;
          goto LAB_00110b72;
        }
      }
      else {
        if (bVar4 == 0) {
          cVar5 = double_int_negative_p(dc.low,dc.high);
          if (cVar5 == '\0') goto LAB_00110911;
          bVar7 = true;
        }
        else {
LAB_00110911:
          bVar7 = false;
        }
        if (bVar4 == 0) {
LAB_0011093d:
          bVar8 = false;
        }
        else {
          cVar5 = double_int_negative_p(dd.low,dd.high);
          if (cVar5 == '\0') goto LAB_0011093d;
          bVar8 = true;
        }
        dc.high = SUB168(dc >> 0x40,0);
        if ((bVar8) && (!bVar7)) {
          uVar10 = 0;
          goto LAB_00110b72;
        }
        if ((bVar8) || (!bVar7)) {
          iVar9 = double_int_ucmp(dc.low,dc.high,dd.low);
          if (0 < iVar9) {
            uVar10 = 0;
            goto LAB_00110b72;
          }
        }
      }
      bVar7 = true;
      auVar12 = dc;
    }
    dc.high = SUB168(auVar12 >> 0x40,0);
    dc.low = SUB168(auVar12,0);
    dc = auVar12;
    if ((bVar6) && (bVar7)) {
      uVar10 = 1;
      goto LAB_00110b72;
    }
    if (((local_78->field_0x2 & 0x20) != 0) && (bVar4 == 0)) {
      cVar5 = double_int_negative_p(dc.low,dc.high);
      if (cVar5 != '\0') {
        uVar10 = 0;
        goto LAB_00110b72;
      }
    }
    if ((*(ushort *)(*(long *)&c->field_0x10 + 0x3c) & 0x3ff) <
        (*(ushort *)&local_78->field_0x3c & 0x3ff)) {
      uVar10 = 1;
      goto LAB_00110b72;
    }
    auVar12 = dc;
    if (((local_78->field_0x2 & 0x20) == 0) && (bVar4 != 0)) {
      if (**(short **)&c->field_0x10 == 0xe) {
        uVar10 = vector_type_mode(*(undefined8 *)&c->field_0x10);
      }
      else {
        uVar10 = (uint)*(byte *)(*(long *)&c->field_0x10 + 0x3e);
      }
      dc.high = SUB168(dc >> 0x40,0);
      iVar9 = (uint)(byte)(&mode_size)[uVar10] * 8 + -1;
      bVar11 = (byte)iVar9;
      auVar12 = dc;
      if (iVar9 < 0x40) {
        if ((dc.low >> (bVar11 & 0x3f) & 1) != 0) {
          uVar10 = 0;
          goto LAB_00110b72;
        }
      }
      else if (((ulong)dc.high >> (bVar11 - 0x40 & 0x3f) & 1) != 0) {
        uVar10 = 0;
        goto LAB_00110b72;
      }
    }
    dc.high = SUB168(auVar12 >> 0x40,0);
    dc.low = SUB168(auVar12,0);
    if (((*(short *)local_78 != 8) || (*(long *)&local_78->field_0x10 == 0)) ||
       ((*(ushort *)&local_78->field_0x3c & 0x3ff) !=
        (*(ushort *)(*(long *)&local_78->field_0x10 + 0x3c) & 0x3ff))) {
      dc = auVar12;
      iVar9 = fit_double_type(dc.low,dc.high,&dc,&dc.high,local_78);
      uVar10 = (uint)(iVar9 == 0);
LAB_00110b72:
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return uVar10;
    }
    local_78 = *(const_tree *)&local_78->field_0x10;
  } while( true );
}



void get_type_static_bounds(const_tree type,__mpz_struct *min,__mpz_struct *max)

{
  byte bVar1;
  ushort uVar2;
  undefined auVar3 [16];
  double_int dVar4;
  double_int mn;
  
  if ((((*(short *)type == 10) || (*(short *)type == 0xc)) || (*(long *)&type->field_0x68 == 0)) ||
     (**(short **)&type->field_0x68 != 0x17)) {
    if ((type->field_0x2 & 0x20) == 0) {
      auVar3 = double_int_mask((*(ushort *)&type->field_0x3c & 0x3ff) - 1);
      uVar2 = *(ushort *)&type->field_0x3c;
      dVar4 = shwi_to_double_int(1);
      auVar3 = double_int_add(SUB168(auVar3,0),SUB168(auVar3 >> 0x40,0),
                              SUB168((undefined  [16])dVar4,0),
                              SUB168((undefined  [16])dVar4 >> 0x40,0));
      auVar3 = double_int_sext(SUB168(auVar3,0),SUB168(auVar3 >> 0x40,0),uVar2 & 0x3ff);
      mpz_set_double_int(min,SUB168(auVar3,0),SUB168(auVar3 >> 0x40,0),0);
    }
    else {
      mpz_set_ui(min,0);
    }
  }
  else {
    bVar1 = type->field_0x2;
    auVar3 = tree_to_double_int(*(undefined8 *)&type->field_0x68);
    mpz_set_double_int(min,SUB168(auVar3,0),SUB168(auVar3 >> 0x40,0),bVar1 >> 5 & 1);
  }
  if (((*(short *)type == 10) || (*(short *)type == 0xc)) ||
     ((*(long *)&type->field_0x70 == 0 || (**(short **)&type->field_0x70 != 0x17)))) {
    if ((type->field_0x2 & 0x20) == 0) {
      auVar3 = double_int_mask((*(ushort *)&type->field_0x3c & 0x3ff) - 1);
      mpz_set_double_int(max,SUB168(auVar3,0),SUB168(auVar3 >> 0x40,0),1);
    }
    else {
      auVar3 = double_int_mask(*(ushort *)&type->field_0x3c & 0x3ff);
      mpz_set_double_int(max,SUB168(auVar3,0),SUB168(auVar3 >> 0x40,0),1);
    }
  }
  else {
    bVar1 = type->field_0x2;
    auVar3 = tree_to_double_int(*(undefined8 *)&type->field_0x70);
    mpz_set_double_int(max,SUB168(auVar3,0),SUB168(auVar3 >> 0x40,0),bVar1 >> 5 & 1);
  }
  return;
}



uchar auto_var_in_fn_p(const_tree var,const_tree fn)

{
  uchar uVar1;
  
  if (((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)var * 4) == 3) &&
      (fn == *(const_tree *)&var->field_0x28)) &&
     ((((*(short *)var == 0x20 || (*(short *)var == 0x22)) && ((var->field_0x3 & 4) == 0)) ||
      ((*(short *)var == 0x1e || (*(short *)var == 0x24)))))) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



tree find_var_from_fn(tree *tp,int *walk_subtrees,void *data)

{
  uchar uVar1;
  tree fn;
  
  if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)*tp * 4) == 2) {
    *walk_subtrees = 0;
  }
  else if ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)*tp * 4) == 3) &&
          (uVar1 = auto_var_in_fn_p(*tp,(const_tree)data), uVar1 != '\0')) {
    return *tp;
  }
  return (tree)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uchar variably_modified_type_p(tree type,tree fn)

{
  uchar uVar1;
  tree ptVar2;
  long in_FS_OFFSET;
  tree _t;
  tree t;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (type == global_trees[0]) {
    uVar1 = '\0';
  }
  else {
    _t = *(tree *)&type->field_0x20;
    if ((((_t == (tree)0x0) || (global_trees[0] == _t)) || (*(short *)_t == 0x17)) ||
       ((fn != (tree)0x0 &&
        (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,(walk_tree_lh)0x0),
        ptVar2 == (tree)0x0)))) {
      _t = *(tree *)&type->field_0x28;
      if (((_t == (tree)0x0) || ((global_trees[0] == _t || (*(short *)_t == 0x17)))) ||
         ((fn != (tree)0x0 &&
          (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,(walk_tree_lh)0x0),
          ptVar2 == (tree)0x0)))) {
        switch(*(undefined2 *)type) {
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xb:
          _t = *(tree *)&type->field_0x68;
          if ((((_t != (tree)0x0) && (global_trees[0] != _t)) && (*(short *)_t != 0x17)) &&
             ((fn == (tree)0x0 ||
              (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,(walk_tree_lh)0x0),
              ptVar2 != (tree)0x0)))) {
            uVar1 = '\x01';
            goto LAB_0011144e;
          }
          _t = *(tree *)&type->field_0x70;
          if (((_t != (tree)0x0) && (global_trees[0] != _t)) &&
             ((*(short *)_t != 0x17 &&
              ((fn == (tree)0x0 ||
               (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,(walk_tree_lh)0x0)
               , ptVar2 != (tree)0x0)))))) {
            uVar1 = '\x01';
            goto LAB_0011144e;
          }
          break;
        case 10:
        case 0xc:
        case 0xe:
          uVar1 = variably_modified_type_p(*(tree *)&type->field_0x10,fn);
          if (uVar1 != '\0') {
            uVar1 = '\x01';
            goto LAB_0011144e;
          }
          break;
        case 0xf:
          _t = *(tree *)(*(long *)&type->field_0x10 + 0x20);
          if ((((_t != (tree)0x0) && (global_trees[0] != _t)) && (*(short *)_t != 0x17)) &&
             ((fn == (tree)0x0 ||
              (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,(walk_tree_lh)0x0),
              ptVar2 != (tree)0x0)))) {
            uVar1 = '\x01';
            goto LAB_0011144e;
          }
          _t = *(tree *)(*(long *)&type->field_0x10 + 0x28);
          if (((_t != (tree)0x0) && (global_trees[0] != _t)) &&
             ((*(short *)_t != 0x17 &&
              ((fn == (tree)0x0 ||
               (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,(walk_tree_lh)0x0)
               , ptVar2 != (tree)0x0)))))) {
            uVar1 = '\x01';
            goto LAB_0011144e;
          }
          break;
        case 0x10:
        case 0x11:
        case 0x12:
          for (t = *(tree *)&type->field_0x18; t != (tree)0x0; t = *(tree *)&t->field_0x8) {
            if (*(short *)t == 0x1f) {
              _t = *(tree *)&t->field_0x70;
              if ((((_t != (tree)0x0) && (global_trees[0] != _t)) && (*(short *)_t != 0x17)) &&
                 ((fn == (tree)0x0 ||
                  (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,
                                        (walk_tree_lh)0x0), ptVar2 != (tree)0x0)))) {
                uVar1 = '\x01';
                goto LAB_0011144e;
              }
              _t = *(tree *)&t->field_0x30;
              if (((_t != (tree)0x0) && (global_trees[0] != _t)) &&
                 ((*(short *)_t != 0x17 &&
                  ((fn == (tree)0x0 ||
                   (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,
                                         (walk_tree_lh)0x0), ptVar2 != (tree)0x0)))))) {
                uVar1 = '\x01';
                goto LAB_0011144e;
              }
              _t = *(tree *)&t->field_0x48;
              if ((((_t != (tree)0x0) && (global_trees[0] != _t)) && (*(short *)_t != 0x17)) &&
                 ((fn == (tree)0x0 ||
                  (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,
                                        (walk_tree_lh)0x0), ptVar2 != (tree)0x0)))) {
                uVar1 = '\x01';
                goto LAB_0011144e;
              }
              if ((((*(short *)type == 0x12) && (_t = *(tree *)&t->field_0x80, _t != (tree)0x0)) &&
                  ((global_trees[0] != _t && (*(short *)_t != 0x17)))) &&
                 ((fn == (tree)0x0 ||
                  (ptVar2 = walk_tree_1(&_t,find_var_from_fn,fn,(pointer_set_t *)0x0,
                                        (walk_tree_lh)0x0), ptVar2 != (tree)0x0)))) {
                uVar1 = '\x01';
                goto LAB_0011144e;
              }
            }
          }
          break;
        case 0x14:
        case 0x15:
          uVar1 = variably_modified_type_p(*(tree *)&type->field_0x10,fn);
          if (uVar1 != '\0') {
            uVar1 = '\x01';
            goto LAB_0011144e;
          }
        }
        uVar1 = (*_byte_from_pos)(type,fn);
      }
      else {
        uVar1 = '\x01';
      }
    }
    else {
      uVar1 = '\x01';
    }
  }
LAB_0011144e:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar1;
}



tree get_containing_scope(const_tree t)

{
  tree ptVar1;
  
  if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) == 2) {
    ptVar1 = *(tree *)&t->field_0x90;
  }
  else {
    ptVar1 = *(tree *)&t->field_0x28;
  }
  return ptVar1;
}



tree decl_function_context(const_tree decl)

{
  tree context;
  
  if (*(short *)decl == 0) {
    context = (tree)0x0;
  }
  else {
    if ((*(short *)decl == 0x1d) && (*(long *)&decl->field_0xb0 != 0)) {
      context = *(tree *)(*(long *)(*(long *)(*(long *)(*(long *)&decl->field_0x10 + 0x18) + 0x20) +
                                   0x10) + 0x80);
    }
    else {
      context = *(tree *)&decl->field_0x28;
    }
    while ((context != (tree)0x0 && (*(short *)context != 0x1d))) {
      if (*(short *)context == 4) {
        context = *(tree *)&context->field_0x38;
      }
      else {
        context = get_containing_scope(context);
      }
    }
  }
  return context;
}



tree decl_type_context(const_tree decl)

{
  tree context;
  
  context = *(tree *)&decl->field_0x28;
  while (context != (tree)0x0) {
    switch(*(undefined2 *)context) {
    case 4:
      context = *(tree *)&context->field_0x38;
      break;
    default:
      fancy_abort("tree.c",0x1fc6,&DAT_00117460);
      break;
    case 0x10:
    case 0x11:
    case 0x12:
      return context;
    case 0x1d:
    case 0x23:
      context = *(tree *)&context->field_0x28;
      break;
    case 0x26:
    case 0x28:
      return (tree)0x0;
    }
  }
  return (tree)0x0;
}



tree get_callee_fndecl(const_tree call)

{
  tree ptVar1;
  tree addr;
  
  ptVar1 = global_trees[0];
  if (call != global_trees[0]) {
    if (*(short *)call != 0x3b) {
      fancy_abort("tree.c",0x1fda,&DAT_00117460);
    }
    addr = tree_strip_nop_conversions(*(tree *)&call->field_0x30);
    if ((((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)addr * 4) == 3) &&
         (*(short *)addr != 0x1d)) && ((addr->field_0x2 & 0x10) != 0)) &&
       (((addr->field_0x2 & 8) == 0 && (*(long *)&addr->field_0x50 != 0)))) {
      addr = *(tree *)&addr->field_0x50;
    }
    if ((*(short *)addr == 0x79) && (**(short **)&addr->field_0x28 == 0x1d)) {
      ptVar1 = *(tree *)&addr->field_0x28;
    }
    else {
      ptVar1 = (tree)0x0;
    }
  }
  return ptVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dump_tree_statistics(void)

{
  fwrite("\n??? tree nodes created\n\n",1,0x19,stderr);
  fwrite("(No per-node statistics)\n",1,0x19,stderr);
  print_type_hash_statistics();
  print_debug_expr_statistics();
  print_value_expr_statistics();
  (*_real_from_integer)();
  return;
}



uint crc32_string(uint chksum,char *string)

{
  char cVar1;
  uint uVar2;
  char *local_28;
  uint local_1c;
  uint value;
  uint ix;
  uint feedback;
  
  local_28 = string;
  local_1c = chksum;
  do {
    value = (int)*local_28 << 0x18;
    ix = 8;
    while (ix != 0) {
      if ((int)(value ^ local_1c) < 0) {
        uVar2 = 0x4c11db7;
      }
      else {
        uVar2 = 0;
      }
      local_1c = local_1c << 1 ^ uVar2;
      value = value << 1;
      ix = ix - 1;
    }
    cVar1 = *local_28;
    local_28 = local_28 + 1;
  } while (cVar1 != '\0');
  return local_1c;
}



void clean_symbol_name(char *p)

{
  char *local_10;
  
  for (local_10 = p; *local_10 != '\0'; local_10 = local_10 + 1) {
    if (((*(ushort *)(&_sch_istable + (long)(int)((int)*local_10 & 0xff) * 2) & 0x8c) == 0) &&
       (*local_10 != '.')) {
      *local_10 = '_';
    }
  }
  return;
}



tree get_file_function_name(char *type)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  ulong uVar6;
  char *pcVar7;
  size_t sVar8;
  tree ptVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long in_FS_OFFSET;
  undefined auStack168 [8];
  char *local_a0;
  uint len;
  char *p;
  char *q;
  char *file;
  char *name;
  char *file_1;
  char *buf;
  expanded_location local_58;
  expanded_location local_38;
  long local_20;
  
  puVar11 = auStack168;
  puVar12 = auStack168;
  puVar13 = auStack168;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = type;
  if (first_global_object_name == (char *)0x0) {
    if (((*type == 'I') || (*type == 'D')) && (DAT_00120cc3 != '\0')) {
      file = main_input_filename;
      if (main_input_filename == (char *)0x0) {
        expand_location(&local_58,input_location);
        file = local_58.file;
      }
      pcVar7 = strrchr(file,0x2f);
      if (pcVar7 == (char *)0x0) {
        p = file;
      }
      else {
        p = pcVar7 + 1;
      }
      libiberty_optr = p;
      sVar5 = strlen(p);
      libiberty_len = sVar5 + 1;
      uVar6 = ((sVar5 + 0x18) / 0x10) * 0x10;
      for (; puVar12 != auStack168 + -(uVar6 & 0xfffffffffffff000); puVar12 = puVar12 + -0x1000) {
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      }
      lVar1 = -(ulong)((uint)uVar6 & 0xfff);
      puVar14 = puVar12 + lVar1;
      if ((uVar6 & 0xfff) != 0) {
        *(undefined8 *)(puVar12 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1) =
             *(undefined8 *)(puVar12 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1);
      }
      libiberty_nptr = (void *)((ulong)(puVar12 + lVar1 + 0xf) & 0xfffffffffffffff0);
      *(undefined8 *)(puVar12 + lVar1 + -8) = 0x111ab6;
      q = (char *)memcpy(libiberty_nptr,libiberty_optr,libiberty_len);
      p = q;
    }
    else {
      name = weak_global_object_name;
      file_1 = main_input_filename;
      if (weak_global_object_name == (char *)0x0) {
        name = "";
      }
      if (main_input_filename == (char *)0x0) {
        expand_location(&local_38,input_location);
        file_1 = local_38.file;
      }
      sVar5 = strlen(file_1);
      len = (uint)sVar5;
      uVar6 = (((ulong)((uint)sVar5 + 0x13) + 0x17) / 0x10) * 0x10;
      for (; puVar13 != auStack168 + -(uVar6 & 0xfffffffffffff000); puVar13 = puVar13 + -0x1000) {
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
      }
      lVar1 = -(ulong)((uint)uVar6 & 0xfff);
      puVar14 = puVar13 + lVar1;
      if ((uVar6 & 0xfff) != 0) {
        *(undefined8 *)(puVar13 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1) =
             *(undefined8 *)(puVar13 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1);
      }
      pcVar7 = file_1;
      q = (char *)((ulong)(puVar13 + lVar1 + 0xf) & 0xfffffffffffffff0);
      uVar3 = len + 1;
      *(undefined8 *)(puVar13 + lVar1 + -8) = 0x111bd5;
      memcpy((char *)((ulong)(puVar13 + lVar1 + 0xf) & 0xfffffffffffffff0),pcVar7,(ulong)uVar3);
      *(undefined8 *)(puVar13 + lVar1 + -8) = 0x111bdf;
      pcVar7 = (char *)get_random_seed(0);
      *(undefined8 *)(puVar13 + lVar1 + -8) = 0x111bec;
      uVar3 = crc32_string(0,pcVar7);
      pcVar7 = name;
      *(undefined8 *)(puVar13 + lVar1 + -8) = 0x111bff;
      uVar4 = crc32_string(0,pcVar7);
      pcVar7 = q + len;
      *(undefined8 *)(puVar13 + lVar1 + -8) = 0x111c24;
      sprintf(pcVar7,"_%08X_%08X",(ulong)uVar4,(ulong)uVar3);
      p = q;
    }
  }
  else {
    libiberty_optr = first_global_object_name;
    sVar5 = strlen(first_global_object_name);
    libiberty_len = sVar5 + 1;
    uVar6 = ((sVar5 + 0x18) / 0x10) * 0x10;
    for (; puVar11 != auStack168 + -(uVar6 & 0xfffffffffffff000); puVar11 = puVar11 + -0x1000) {
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    }
    lVar1 = -(ulong)((uint)uVar6 & 0xfff);
    puVar14 = puVar11 + lVar1;
    if ((uVar6 & 0xfff) != 0) {
      *(undefined8 *)(puVar11 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)(puVar11 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1);
    }
    libiberty_nptr = (void *)((ulong)(puVar11 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar11 + lVar1 + -8) = 0x111946;
    q = (char *)memcpy(libiberty_nptr,libiberty_optr,libiberty_len);
    p = q;
  }
  pcVar7 = q;
  p = q;
  *(undefined8 *)(puVar14 + -8) = 0x111c38;
  clean_symbol_name(pcVar7);
  pcVar7 = p;
  *(undefined8 *)(puVar14 + -8) = 0x111c44;
  sVar5 = strlen(pcVar7);
  pcVar7 = local_a0;
  *(undefined8 *)(puVar14 + -8) = 0x111c56;
  sVar8 = strlen(pcVar7);
  uVar6 = ((sVar8 + sVar5 + 0x26) / 0x10) * 0x10;
  puVar10 = puVar14 + -(uVar6 & 0xfffffffffffff000);
  for (; puVar14 != puVar10; puVar14 = puVar14 + -0x1000) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  lVar1 = -(ulong)((uint)uVar6 & 0xfff);
  if ((uVar6 & 0xfff) != 0) {
    *(undefined8 *)(puVar14 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)(puVar14 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar1);
  }
  pcVar2 = p;
  pcVar7 = local_a0;
  buf = (char *)((ulong)(puVar14 + lVar1 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar14 + lVar1 + -8) = 0x111d08;
  sprintf((char *)((ulong)(puVar14 + lVar1 + 0xf) & 0xfffffffffffffff0),"_GLOBAL__%s_%s",pcVar7,
          pcVar2);
  pcVar7 = buf;
  *(undefined8 *)(puVar14 + lVar1 + -8) = 0x111d14;
  ptVar9 = (tree)get_identifier(pcVar7);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)(puVar14 + lVar1 + -8) = 0x111d28;
    __stack_chk_fail();
  }
  return ptVar9;
}



tree make_vector_type(tree innertype,int nunits,machine_mode mode)

{
  ushort uVar1;
  hashval_t hVar2;
  uint hashcode_00;
  tree ptVar3;
  tree ptVar4;
  tree ptVar5;
  tree name;
  hashval_t hashcode;
  tree t;
  tree index;
  tree array;
  tree rt;
  
  ptVar3 = make_node_stat(VECTOR_TYPE);
  *(undefined8 *)&ptVar3->field_0x10 = *(undefined8 *)&innertype->field_0x80;
  uVar1 = exact_log2((long)nunits);
  *(ushort *)&ptVar3->field_0x3c = *(ushort *)&ptVar3->field_0x3c & 0xfc00 | uVar1 & 0x3ff;
  ptVar3->field_0x3e = (char)mode;
  if (*(long *)&innertype->field_0x98 == 0) {
    *(undefined8 *)&ptVar3->field_0x98 = 0;
  }
  else if ((innertype != *(tree *)&innertype->field_0x98) || (mode != MAX_MODE_PARTIAL_INT)) {
    ptVar4 = make_vector_type(*(tree *)&innertype->field_0x98,nunits,MAX_MODE_PARTIAL_INT);
    *(tree *)&ptVar3->field_0x98 = ptVar4;
  }
  layout_type(ptVar3);
  ptVar4 = build_int_cst((tree)0x0,(long)(nunits + -1));
  ptVar4 = build_index_type(ptVar4);
  ptVar4 = build_array_type(*(tree *)&innertype->field_0x80,ptVar4);
  ptVar5 = make_node_stat(RECORD_TYPE);
  name = (tree)get_identifier(&DAT_0011935b);
  ptVar4 = build_decl_stat(0,FIELD_DECL,name,ptVar4);
  *(tree *)&ptVar5->field_0x18 = ptVar4;
  *(tree *)(*(long *)&ptVar5->field_0x18 + 0x28) = ptVar5;
  layout_type(ptVar5);
  *(tree *)&ptVar3->field_0x18 = ptVar5;
  *(undefined4 *)&ptVar5->field_0x38 = *(undefined4 *)&ptVar3->field_0x38;
  hVar2 = iterative_hash_host_wide_int(0xe,0);
  hVar2 = iterative_hash_host_wide_int((long)nunits,hVar2);
  hVar2 = iterative_hash_host_wide_int((ulong)mode,hVar2);
  hashcode_00 = iterative_hash(*(long *)&ptVar3->field_0x10 + 0x38,4,hVar2);
  ptVar3 = type_hash_canon(hashcode_00,ptVar3);
  if (((*(long *)&innertype->field_0x30 != 0) ||
      (((uint)(byte)innertype->field_0x7 << 8 |
       (uint)((byte)innertype->field_0x2 >> 4 & 1) | (uint)((byte)innertype->field_0x2 >> 3 & 1) * 2
       | (uint)((byte)innertype->field_0x3d >> 5 & 1) << 2) != 0)) &&
     (innertype != *(tree *)&ptVar3->field_0x10)) {
    ptVar3 = build_type_attribute_qual_variant
                       (ptVar3,*(tree *)&innertype->field_0x30,
                        (uint)((byte)innertype->field_0x2 >> 4 & 1) |
                        (uint)((byte)innertype->field_0x2 >> 3 & 1) * 2 |
                        (uint)((byte)innertype->field_0x3d >> 5 & 1) << 2 |
                        (uint)(byte)innertype->field_0x7 << 8);
  }
  return ptVar3;
}



tree make_or_reuse_type(uint size,int unsignedp)

{
  tree ptVar1;
  
  if (size == 0x20) {
    ptVar1 = integer_types[5];
    if (unsignedp != 0) {
      ptVar1 = integer_types[6];
    }
  }
  else if (size == 8) {
    ptVar1 = integer_types[1];
    if (unsignedp != 0) {
      ptVar1 = integer_types[2];
    }
  }
  else if (size == 0x10) {
    ptVar1 = integer_types[3];
    if (unsignedp != 0) {
      ptVar1 = integer_types[4];
    }
  }
  else if (size == 0x20) {
    ptVar1 = integer_types[7];
    if (unsignedp != 0) {
      ptVar1 = integer_types[8];
    }
  }
  else if (size == 0x40) {
    ptVar1 = integer_types[9];
    if (unsignedp != 0) {
      ptVar1 = integer_types[10];
    }
  }
  else if (unsignedp == 0) {
    ptVar1 = (tree)make_signed_type(size);
  }
  else {
    ptVar1 = (tree)make_unsigned_type(size);
  }
  return ptVar1;
}



tree make_or_reuse_fract_type(uint size,int unsignedp,int satp)

{
  tree ptVar1;
  
  if (satp == 0) {
    if (size == 8) {
      if (unsignedp == 0) {
        return global_trees[65];
      }
      return global_trees[69];
    }
    if (size == 0x10) {
      if (unsignedp == 0) {
        return global_trees[66];
      }
      return global_trees[70];
    }
    if (size == 0x20) {
      if (unsignedp == 0) {
        return global_trees[67];
      }
      return global_trees[71];
    }
    if (size == 0x40) {
      if (unsignedp == 0) {
        return global_trees[68];
      }
      return global_trees[72];
    }
  }
  else {
    if (size == 8) {
      if (unsignedp == 0) {
        return global_trees[57];
      }
      return global_trees[61];
    }
    if (size == 0x10) {
      if (unsignedp == 0) {
        return global_trees[58];
      }
      return global_trees[62];
    }
    if (size == 0x20) {
      if (unsignedp == 0) {
        return global_trees[59];
      }
      return global_trees[63];
    }
    if (size == 0x40) {
      if (unsignedp == 0) {
        return global_trees[60];
      }
      return global_trees[64];
    }
  }
  ptVar1 = (tree)make_fract_type(size,unsignedp,satp);
  return ptVar1;
}



tree make_or_reuse_accum_type(uint size,int unsignedp,int satp)

{
  tree ptVar1;
  
  if (satp == 0) {
    if (size == 0x10) {
      if (unsignedp == 0) {
        return global_trees[81];
      }
      return global_trees[85];
    }
    if (size == 0x20) {
      if (unsignedp == 0) {
        return global_trees[82];
      }
      return global_trees[86];
    }
    if (size == 0x40) {
      if (unsignedp == 0) {
        return global_trees[83];
      }
      return global_trees[87];
    }
    if (size == 0x80) {
      if (unsignedp == 0) {
        return global_trees[84];
      }
      return global_trees[88];
    }
  }
  else {
    if (size == 0x10) {
      if (unsignedp == 0) {
        return global_trees[73];
      }
      return global_trees[77];
    }
    if (size == 0x20) {
      if (unsignedp == 0) {
        return global_trees[74];
      }
      return global_trees[78];
    }
    if (size == 0x40) {
      if (unsignedp == 0) {
        return global_trees[75];
      }
      return global_trees[79];
    }
    if (size == 0x80) {
      if (unsignedp == 0) {
        return global_trees[76];
      }
      return global_trees[80];
    }
  }
  ptVar1 = (tree)make_accum_type(size,unsignedp,satp);
  return ptVar1;
}



void build_common_tree_nodes(uchar signed_char,uchar signed_sizetype)

{
  tree ptVar1;
  tree ptVar2;
  
  global_trees[0] = make_node_stat(ERROR_MARK);
  *(tree *)&global_trees[0]->field_0x10 = global_trees[0];
  initialize_sizetypes(signed_sizetype);
  integer_types[1] = (tree)make_signed_type(8);
  integer_types[1]->field_0x3f = integer_types[1]->field_0x3f | 1;
  integer_types[2] = (tree)make_unsigned_type(8);
  integer_types[2]->field_0x3f = integer_types[2]->field_0x3f | 1;
  if (signed_char == '\0') {
    integer_types[0] = (tree)make_unsigned_type(8);
  }
  else {
    integer_types[0] = (tree)make_signed_type(8);
  }
  integer_types[0]->field_0x3f = integer_types[0]->field_0x3f | 1;
  integer_types[3] = (tree)make_signed_type(0x10);
  integer_types[4] = (tree)make_unsigned_type(0x10);
  integer_types[5] = (tree)make_signed_type(0x20);
  integer_types[6] = (tree)make_unsigned_type(0x20);
  integer_types[7] = (tree)make_signed_type(0x20);
  integer_types[8] = (tree)make_unsigned_type(0x20);
  integer_types[9] = (tree)make_signed_type(0x40);
  integer_types[10] = (tree)make_unsigned_type(0x40);
  global_trees[47] = (tree)make_unsigned_type(8);
  *(undefined2 *)global_trees[47] = 7;
  ptVar1 = global_trees[47];
  ptVar2 = build_int_cst(global_trees[47],1);
  *(tree *)&ptVar1->field_0x70 = ptVar2;
  *(ushort *)&global_trees[47]->field_0x3c = *(ushort *)&global_trees[47]->field_0x3c & 0xfc00 | 1;
  global_trees[1] = make_or_reuse_type((uint)DAT_0012054e << 3,0);
  global_trees[2] = make_or_reuse_type((uint)DAT_0012054f << 3,0);
  global_trees[3] = make_or_reuse_type((uint)(byte)floor_log2 << 3,0);
  global_trees[4] = make_or_reuse_type((uint)DAT_00120551 << 3,0);
  global_trees[5] = make_or_reuse_type((uint)DAT_00120552 << 3,0);
  global_trees[6] = make_or_reuse_type((uint)DAT_0012054e << 3,1);
  global_trees[7] = make_or_reuse_type((uint)DAT_0012054f << 3,1);
  global_trees[8] = make_or_reuse_type((uint)(byte)floor_log2 << 3,1);
  global_trees[9] = make_or_reuse_type((uint)DAT_00120551 << 3,1);
  global_trees[10] = make_or_reuse_type((uint)DAT_00120552 << 3,1);
  global_trees[22] = (tree)get_identifier("public");
  global_trees[23] = (tree)get_identifier("protected");
  global_trees[24] = (tree)get_identifier("private");
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void build_common_tree_nodes_2(int short_double)

{
  tree ptVar1;
  tree t;
  
  global_trees[13] = build_int_cst((tree)0x0,0);
  global_trees[14] = build_int_cst((tree)0x0,1);
  global_trees[15] = build_int_cst((tree)0x0,-1);
  global_trees[17] = (tree)size_int_kind(0,0);
  global_trees[18] = (tree)size_int_kind(1,0);
  global_trees[19] = (tree)size_int_kind(0,2);
  global_trees[20] = (tree)size_int_kind(1,2);
  global_trees[21] = (tree)size_int_kind(8,2);
  global_trees[25] = *(tree *)&global_trees[47]->field_0x68;
  global_trees[26] = *(tree *)&global_trees[47]->field_0x70;
  global_trees[38] = make_node_stat(VOID_TYPE);
  layout_type(global_trees[38]);
  *(undefined4 *)&global_trees[38]->field_0x40 = 8;
  global_trees[38]->field_0x5 = global_trees[38]->field_0x5 & 0xfb;
  ptVar1 = build_pointer_type(global_trees[38]);
  global_trees[16] = build_int_cst(ptVar1,0);
  layout_type(*(undefined8 *)&global_trees[16]->field_0x10);
  global_trees[39] = build_pointer_type(global_trees[38]);
  ptVar1 = build_qualified_type(global_trees[38],1);
  global_trees[40] = build_pointer_type(ptVar1);
  global_trees[48] = global_trees[39];
  global_trees[31] = make_node_stat(REAL_TYPE);
  *(ushort *)&global_trees[31]->field_0x3c =
       *(ushort *)&global_trees[31]->field_0x3c & 0xfc00 | 0x20;
  layout_type(global_trees[31]);
  global_trees[32] = make_node_stat(REAL_TYPE);
  if (short_double == 0) {
    *(ushort *)&global_trees[32]->field_0x3c =
         *(ushort *)&global_trees[32]->field_0x3c & 0xfc00 | 0x40;
  }
  else {
    *(ushort *)&global_trees[32]->field_0x3c =
         *(ushort *)&global_trees[32]->field_0x3c & 0xfc00 | 0x20;
  }
  layout_type(global_trees[32]);
  global_trees[33] = make_node_stat(REAL_TYPE);
  *(ushort *)&global_trees[33]->field_0x3c =
       *(ushort *)&global_trees[33]->field_0x3c & 0xfc00 | 0x50;
  layout_type(global_trees[33]);
  global_trees[34] = build_pointer_type(global_trees[31]);
  global_trees[35] = build_pointer_type(global_trees[32]);
  global_trees[36] = build_pointer_type(global_trees[33]);
  global_trees[37] = build_pointer_type(integer_types[5]);
  global_trees[11] = build_nonstandard_integer_type(0x20,1);
  global_trees[12] = build_nonstandard_integer_type(0x40,1);
  global_trees[49] = make_node_stat(REAL_TYPE);
  *(ushort *)&global_trees[49]->field_0x3c =
       *(ushort *)&global_trees[49]->field_0x3c & 0xfc00 | 0x20;
  layout_type(global_trees[49]);
  global_trees[49]->field_0x3e = 0x2a;
  global_trees[52] = build_pointer_type(global_trees[49]);
  global_trees[50] = make_node_stat(REAL_TYPE);
  *(ushort *)&global_trees[50]->field_0x3c =
       *(ushort *)&global_trees[50]->field_0x3c & 0xfc00 | 0x40;
  layout_type(global_trees[50]);
  global_trees[50]->field_0x3e = 0x2b;
  global_trees[53] = build_pointer_type(global_trees[50]);
  global_trees[51] = make_node_stat(REAL_TYPE);
  *(short *)&global_trees[51]->field_0x3c =
       (short)CONCAT71((uint7)((byte)((ushort)*(undefined2 *)&global_trees[51]->field_0x3c >> 8) &
                              0xfc),0x80);
  layout_type(global_trees[51]);
  global_trees[51]->field_0x3e = 0x2c;
  global_trees[54] = build_pointer_type(global_trees[51]);
  global_trees[27] = build_complex_type(integer_types[5]);
  global_trees[28] = build_complex_type(global_trees[31]);
  global_trees[29] = build_complex_type(global_trees[32]);
  global_trees[30] = build_complex_type(global_trees[33]);
  global_trees[57] = (tree)make_fract_type(8,0,1);
  global_trees[61] = (tree)make_fract_type(8,1,1);
  global_trees[65] = (tree)make_fract_type(8,0,0);
  global_trees[69] = (tree)make_fract_type(8,1,0);
  global_trees[58] = (tree)make_fract_type(0x10,0,1);
  global_trees[62] = (tree)make_fract_type(0x10,1,1);
  global_trees[66] = (tree)make_fract_type(0x10,0,0);
  global_trees[70] = (tree)make_fract_type(0x10,1,0);
  global_trees[59] = (tree)make_fract_type(0x20,0,1);
  global_trees[63] = (tree)make_fract_type(0x20,1,1);
  global_trees[67] = (tree)make_fract_type(0x20,0,0);
  global_trees[71] = (tree)make_fract_type(0x20,1,0);
  global_trees[60] = (tree)make_fract_type(0x40,0,1);
  global_trees[64] = (tree)make_fract_type(0x40,1,1);
  global_trees[68] = (tree)make_fract_type(0x40,0,0);
  global_trees[72] = (tree)make_fract_type(0x40,1,0);
  global_trees[73] = (tree)make_accum_type(0x10,0,1);
  global_trees[77] = (tree)make_accum_type(0x10,1,1);
  global_trees[81] = (tree)make_accum_type(0x10,0,0);
  global_trees[85] = (tree)make_accum_type(0x10,1,0);
  global_trees[74] = (tree)make_accum_type(0x20,0,1);
  global_trees[78] = (tree)make_accum_type(0x20,1,1);
  global_trees[82] = (tree)make_accum_type(0x20,0,0);
  global_trees[86] = (tree)make_accum_type(0x20,1,0);
  global_trees[75] = (tree)make_accum_type(0x40,0,1);
  global_trees[79] = (tree)make_accum_type(0x40,1,1);
  global_trees[83] = (tree)make_accum_type(0x40,0,0);
  global_trees[87] = (tree)make_accum_type(0x40,1,0);
  global_trees[76] = (tree)make_accum_type(0x80,0,1);
  global_trees[80] = (tree)make_accum_type(0x80,1,1);
  global_trees[84] = (tree)make_accum_type(0x80,0,0);
  global_trees[88] = (tree)make_accum_type(0x80,1,0);
  global_trees[89] = make_or_reuse_fract_type((uint)DAT_00120554 << 3,0,0);
  global_trees[94] = make_or_reuse_fract_type((uint)DAT_00120559 << 3,1,0);
  global_trees[99] = make_or_reuse_fract_type((uint)DAT_00120554 << 3,0,1);
  global_trees[104] = make_or_reuse_fract_type((uint)DAT_00120559 << 3,1,1);
  global_trees[90] = make_or_reuse_fract_type((uint)DAT_00120555 << 3,0,0);
  global_trees[95] = make_or_reuse_fract_type((uint)DAT_0012055a << 3,1,0);
  global_trees[100] = make_or_reuse_fract_type((uint)DAT_00120555 << 3,0,1);
  global_trees[105] = make_or_reuse_fract_type((uint)DAT_0012055a << 3,1,1);
  global_trees[91] = make_or_reuse_fract_type((uint)DAT_00120556 << 3,0,0);
  global_trees[96] = make_or_reuse_fract_type((uint)DAT_0012055b << 3,1,0);
  global_trees[101] = make_or_reuse_fract_type((uint)DAT_00120556 << 3,0,1);
  global_trees[106] = make_or_reuse_fract_type((uint)DAT_0012055b << 3,1,1);
  global_trees[92] = make_or_reuse_fract_type((uint)DAT_00120557 << 3,0,0);
  global_trees[97] = make_or_reuse_fract_type((uint)DAT_0012055c << 3,1,0);
  global_trees[102] = make_or_reuse_fract_type((uint)DAT_00120557 << 3,0,1);
  global_trees[107] = make_or_reuse_fract_type((uint)DAT_0012055c << 3,1,1);
  global_trees[93] = make_or_reuse_fract_type((uint)dconst0 << 3,0,0);
  global_trees[98] = make_or_reuse_fract_type((uint)DAT_0012055d << 3,1,0);
  global_trees[103] = make_or_reuse_fract_type((uint)dconst0 << 3,0,1);
  global_trees[108] = make_or_reuse_fract_type((uint)DAT_0012055d << 3,1,1);
  global_trees[109] = make_or_reuse_accum_type((uint)DAT_0012055e << 3,0,0);
  global_trees[113] = make_or_reuse_accum_type((uint)DAT_00120562 << 3,1,0);
  global_trees[117] = make_or_reuse_accum_type((uint)DAT_0012055e << 3,0,1);
  global_trees[121] = make_or_reuse_accum_type((uint)DAT_00120562 << 3,1,1);
  global_trees[110] = make_or_reuse_accum_type((uint)DAT_0012055f << 3,0,0);
  global_trees[114] = make_or_reuse_accum_type((uint)DAT_00120563 << 3,1,0);
  global_trees[118] = make_or_reuse_accum_type((uint)DAT_0012055f << 3,0,1);
  global_trees[122] = make_or_reuse_accum_type((uint)DAT_00120563 << 3,1,1);
  global_trees[111] = make_or_reuse_accum_type((uint)(byte)real_compare << 3,0,0);
  global_trees[115] = make_or_reuse_accum_type((uint)DAT_00120564 << 3,1,0);
  global_trees[119] = make_or_reuse_accum_type((uint)(byte)real_compare << 3,0,1);
  global_trees[123] = make_or_reuse_accum_type((uint)DAT_00120564 << 3,1,1);
  global_trees[112] = make_or_reuse_accum_type((uint)DAT_00120561 << 3,0,0);
  global_trees[116] = make_or_reuse_accum_type((uint)DAT_00120565 << 3,1,0);
  global_trees[120] = make_or_reuse_accum_type((uint)DAT_00120561 << 3,0,1);
  global_trees[124] = make_or_reuse_accum_type((uint)DAT_00120565 << 3,1,1);
  t = (tree)(*_DAT_00120a00)();
  if (*(short *)t != 0x10) {
    t = build_variant_type_copy(t);
  }
  global_trees[44] = t;
  return;
}



void local_define_builtin
               (char *name,tree type,built_in_function code,char *library_name,int ecf_flags)

{
  long lVar1;
  tree decl;
  
  lVar1 = add_builtin_function(name,type,code,3,library_name,0);
  if ((ecf_flags & 1U) != 0) {
    *(byte *)(lVar1 + 2) = *(byte *)(lVar1 + 2) | 0x10;
  }
  if ((ecf_flags & 2U) != 0) {
    *(byte *)(lVar1 + 0xdb) = *(byte *)(lVar1 + 0xdb) | 8;
  }
  if ((ecf_flags & 4U) != 0) {
    *(byte *)(lVar1 + 0xdb) = *(byte *)(lVar1 + 0xdb) | 0x10;
  }
  if ((ecf_flags & 8U) != 0) {
    *(byte *)(lVar1 + 2) = *(byte *)(lVar1 + 2) | 8;
  }
  if ((ecf_flags & 0x40U) != 0) {
    *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) | 2;
  }
  if ((ecf_flags & 0x10U) != 0) {
    *(byte *)(lVar1 + 0xda) = *(byte *)(lVar1 + 0xda) | 8;
  }
  *(long *)(&built_in_decls + (ulong)(uint)code * 8) = lVar1;
  *(long *)(&implicit_built_in_decls + (ulong)(uint)code * 8) = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void build_common_builtin_nodes(void)

{
  code *pcVar1;
  undefined4 uVar2;
  built_in_function code;
  built_in_function code_00;
  tree ptVar3;
  tree ptVar4;
  tree ptVar5;
  undefined8 uVar6;
  int ecf_flags;
  long in_FS_OFFSET;
  int mode;
  built_in_function mcode;
  built_in_function dcode;
  char *q;
  char *p;
  tree tmp;
  tree ftype;
  tree tmp2;
  tree type;
  tree inner_type;
  char mode_name_buf [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_DAT_001211a8 == 0) || (_DAT_001211b0 == 0)) {
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[41],global_trees[55]);
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[40],ptVar3);
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],ptVar3);
    ptVar3 = build_function_type(global_trees[39],ptVar3);
    if (_DAT_001211a8 == 0) {
      local_define_builtin("__builtin_memcpy",ptVar3,BUILT_IN_MEMCPY,"memcpy",0x40);
    }
    if (_DAT_001211b0 == 0) {
      local_define_builtin("__builtin_memmove",ptVar3,BUILT_IN_MEMMOVE,"memmove",0x40);
    }
  }
  if (_DAT_001211a0 == 0) {
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[41],global_trees[55]);
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[40],ptVar3);
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[40],ptVar3);
    ptVar3 = build_function_type(integer_types[5],ptVar3);
    local_define_builtin("__builtin_memcmp",ptVar3,BUILT_IN_MEMCMP,"memcmp",0x42);
  }
  if (_DAT_001211c0 == 0) {
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[41],global_trees[55]);
    ptVar3 = tree_cons_stat((tree)0x0,integer_types[5],ptVar3);
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],ptVar3);
    ptVar3 = build_function_type(global_trees[39],ptVar3);
    local_define_builtin("__builtin_memset",ptVar3,BUILT_IN_MEMSET,"memset",0x40);
  }
  if (_DAT_00121450 == 0) {
    ptVar3 = tree_cons_stat((tree)0x0,global_trees[41],global_trees[55]);
    ptVar3 = build_function_type(global_trees[39],ptVar3);
    if (flag_stack_check == 0) {
      ecf_flags = 0x50;
    }
    else {
      ecf_flags = 0x10;
    }
    local_define_builtin("__builtin_alloca",ptVar3,BUILT_IN_ALLOCA,"alloca",ecf_flags);
  }
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],ptVar3);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],ptVar3);
  ptVar3 = build_function_type(global_trees[38],ptVar3);
  local_define_builtin
            ("__builtin_init_trampoline",ptVar3,BUILT_IN_INIT_TRAMPOLINE,"__builtin_init_trampoline"
             ,0x40);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = build_function_type(global_trees[39],ptVar3);
  local_define_builtin
            ("__builtin_adjust_trampoline",ptVar3,BUILT_IN_ADJUST_TRAMPOLINE,
             "__builtin_adjust_trampoline",0x41);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],ptVar3);
  ptVar3 = build_function_type(global_trees[38],ptVar3);
  local_define_builtin
            ("__builtin_nonlocal_goto",ptVar3,BUILT_IN_NONLOCAL_GOTO,"__builtin_nonlocal_goto",0x48)
  ;
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],ptVar3);
  ptVar3 = build_function_type(global_trees[38],ptVar3);
  local_define_builtin
            ("__builtin_setjmp_setup",ptVar3,BUILT_IN_SETJMP_SETUP,"__builtin_setjmp_setup",0x40);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = build_function_type(global_trees[39],ptVar3);
  local_define_builtin
            ("__builtin_setjmp_dispatcher",ptVar3,BUILT_IN_SETJMP_DISPATCHER,
             "__builtin_setjmp_dispatcher",0x42);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = build_function_type(global_trees[38],ptVar3);
  local_define_builtin
            ("__builtin_setjmp_receiver",ptVar3,BUILT_IN_SETJMP_RECEIVER,"__builtin_setjmp_receiver"
             ,0x40);
  ptVar3 = build_function_type(global_trees[39],global_trees[55]);
  local_define_builtin
            ("__builtin_stack_save",ptVar3,BUILT_IN_STACK_SAVE,"__builtin_stack_save",0x40);
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = build_function_type(global_trees[38],ptVar3);
  local_define_builtin
            ("__builtin_stack_restore",ptVar3,BUILT_IN_STACK_RESTORE,"__builtin_stack_restore",0x40)
  ;
  ptVar3 = build_function_type(global_trees[38],global_trees[55]);
  local_define_builtin
            ("__builtin_profile_func_enter",ptVar3,BUILT_IN_PROFILE_FUNC_ENTER,"profile_func_enter",
             0);
  local_define_builtin
            ("__builtin_profile_func_exit",ptVar3,BUILT_IN_PROFILE_FUNC_EXIT,"profile_func_exit",0);
  if (DAT_00120ccb != '\0') {
    ptVar3 = build_function_type(global_trees[38],global_trees[55]);
    local_define_builtin
              ("__builtin_cxa_end_cleanup",ptVar3,BUILT_IN_CXA_END_CLEANUP,"__cxa_end_cleanup",8);
  }
  ptVar3 = tree_cons_stat((tree)0x0,global_trees[39],global_trees[55]);
  ptVar3 = build_function_type(global_trees[38],ptVar3);
  local_define_builtin("__builtin_unwind_resume",ptVar3,BUILT_IN_UNWIND_RESUME,"_Unwind_Resume",8);
  ptVar3 = tree_cons_stat((tree)0x0,integer_types[5],global_trees[55]);
  ptVar4 = build_function_type(global_trees[39],ptVar3);
  local_define_builtin
            ("__builtin_eh_pointer",ptVar4,BUILT_IN_EH_POINTER,"__builtin_eh_pointer",0x42);
  pcVar1 = cgraph_nodes;
  uVar2 = (*_fwrite)();
  ptVar4 = (tree)(*pcVar1)(uVar2,0);
  ptVar3 = build_function_type(ptVar4,ptVar3);
  local_define_builtin("__builtin_eh_filter",ptVar3,BUILT_IN_EH_FILTER,"__builtin_eh_filter",0x42);
  ptVar3 = tree_cons_stat((tree)0x0,integer_types[5],global_trees[55]);
  ptVar3 = tree_cons_stat((tree)0x0,integer_types[5],ptVar3);
  ptVar3 = build_function_type(global_trees[38],ptVar3);
  local_define_builtin
            ("__builtin_eh_copy_values",ptVar3,BUILT_IN_EH_COPY_VALUES,"__builtin_eh_copy_values",
             0x40);
  for (mode = 0x33; mode < 0x37; mode = mode + 1) {
    ptVar3 = (tree)(*cgraph_nodes)(mode,0);
    if (ptVar3 != (tree)0x0) {
      ptVar4 = *(tree *)&ptVar3->field_0x10;
      ptVar5 = tree_cons_stat((tree)0x0,ptVar4,global_trees[55]);
      ptVar5 = tree_cons_stat((tree)0x0,ptVar4,ptVar5);
      ptVar5 = tree_cons_stat((tree)0x0,ptVar4,ptVar5);
      ptVar4 = tree_cons_stat((tree)0x0,ptVar4,ptVar5);
      ptVar3 = build_function_type(ptVar3,ptVar4);
      code = mode + BUILT_IN_GOMP_LOOP_STATIC_START;
      code_00 = mode + BUILT_IN_GOMP_LOOP_ORDERED_STATIC_START;
      q = mode_name_buf;
      for (p = *(char **)(&mode_name + (long)mode * 8); *p != '\0'; p = p + 1) {
        *q = (&_sch_tolower)[(int)((int)*p & 0xff)];
        q = q + 1;
      }
      *q = '\0';
      uVar6 = concat("__mul",mode_name_buf,&DAT_001195a3,0);
      *(undefined8 *)(&built_in_names + (ulong)(uint)code * 8) = uVar6;
      local_define_builtin
                (*(char **)(&built_in_names + (ulong)(uint)code * 8),ptVar3,code,
                 *(char **)(&built_in_names + (ulong)(uint)code * 8),0x41);
      uVar6 = concat("__div",mode_name_buf,&DAT_001195a3,0);
      *(undefined8 *)(&built_in_names + (ulong)(uint)code_00 * 8) = uVar6;
      local_define_builtin
                (*(char **)(&built_in_names + (ulong)(uint)code_00 * 8),ptVar3,code_00,
                 *(char **)(&built_in_names + (ulong)(uint)code_00 * 8),0x41);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



tree reconstruct_complex_type(tree type,tree bottom)

{
  byte bVar1;
  machine_mode mVar2;
  tree ptVar3;
  tree outer;
  tree inner;
  
  if (*(short *)type == 10) {
    ptVar3 = reconstruct_complex_type(*(tree *)&type->field_0x10,bottom);
    bVar1 = type->field_0x3;
    if (*(short *)type == 0xe) {
      mVar2 = vector_type_mode(type);
    }
    else {
      mVar2 = (machine_mode)(byte)type->field_0x3e;
    }
    outer = build_pointer_type_for_mode(ptVar3,mVar2,bVar1 >> 2 & 1);
  }
  else if (*(short *)type == 0xc) {
    ptVar3 = reconstruct_complex_type(*(tree *)&type->field_0x10,bottom);
    bVar1 = type->field_0x3;
    if (*(short *)type == 0xe) {
      mVar2 = vector_type_mode(type);
    }
    else {
      mVar2 = (machine_mode)(byte)type->field_0x3e;
    }
    outer = build_reference_type_for_mode(ptVar3,mVar2,bVar1 >> 2 & 1);
  }
  else if (*(short *)type == 0xf) {
    ptVar3 = reconstruct_complex_type(*(tree *)&type->field_0x10,bottom);
    outer = build_array_type(ptVar3,*(tree *)&type->field_0x18);
  }
  else if (*(short *)type == 0x14) {
    ptVar3 = reconstruct_complex_type(*(tree *)&type->field_0x10,bottom);
    outer = build_function_type(ptVar3,*(tree *)&type->field_0x18);
  }
  else if (*(short *)type == 0x15) {
    ptVar3 = reconstruct_complex_type(*(tree *)&type->field_0x10,bottom);
    outer = build_method_type_directly
                      (*(tree *)(*(long *)(*(long *)&type->field_0x18 + 0x20) + 0x10),ptVar3,
                       *(tree *)(*(long *)&type->field_0x18 + 8));
  }
  else {
    if (*(short *)type != 5) {
      return bottom;
    }
    ptVar3 = reconstruct_complex_type(*(tree *)&type->field_0x10,bottom);
    outer = build_offset_type(*(tree *)&type->field_0x70,ptVar3);
  }
  ptVar3 = build_type_attribute_qual_variant
                     (outer,*(tree *)&type->field_0x30,
                      (uint)((byte)type->field_0x2 >> 4 & 1) |
                      (uint)((byte)type->field_0x2 >> 3 & 1) * 2 |
                      (uint)((byte)type->field_0x3d >> 5 & 1) << 2 |
                      (uint)(byte)type->field_0x7 << 8);
  return ptVar3;
}



tree build_vector_type_for_mode(tree innertype,machine_mode mode)

{
  byte bVar1;
  tree ptVar2;
  int nunits;
  
  bVar1 = *(byte *)((long)&mode_class + (ulong)mode);
  if (bVar1 == 2) {
    if (((ulong)(byte)(&mode_size)[mode] << 3) % *(ulong *)(*(long *)&innertype->field_0x20 + 0x18)
        != 0) {
      fancy_abort("tree.c",0x2433,&DAT_00117460);
    }
    nunits = (int)(((ulong)(byte)(&mode_size)[mode] << 3) /
                  *(ulong *)(*(long *)&innertype->field_0x20 + 0x18));
  }
  else if ((bVar1 < 2) || (5 < bVar1 - 0xc)) {
    fancy_abort("tree.c",0x243b,&DAT_00117460);
  }
  else {
    nunits = (int)(byte)(&mode_nunits)[mode];
  }
  ptVar2 = make_vector_type(innertype,nunits,mode);
  return ptVar2;
}



tree build_vector_type(tree innertype,int nunits)

{
  tree ptVar1;
  
  ptVar1 = make_vector_type(innertype,nunits,MAX_MODE_PARTIAL_INT);
  return ptVar1;
}



tree build_opaque_vector_type(tree innertype,int nunits)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = build_distinct_type_copy(innertype);
  ptVar1 = make_vector_type(ptVar1,nunits,MAX_MODE_PARTIAL_INT);
  ptVar1->field_0x4 = ptVar1->field_0x4 | 1;
  return ptVar1;
}



uchar initializer_zerop(const_tree init)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  tree expr;
  VEC_constructor_elt_base *pVVar6;
  constructor_elt *pcVar7;
  tree elt;
  ulong idx;
  
  expr = tree_strip_nop_conversions(init);
  switch(*(undefined2 *)expr) {
  case 0x17:
    iVar4 = integer_zerop(expr);
    uVar3 = (uchar)iVar4;
    break;
  case 0x18:
    iVar4 = real_zerop(expr);
    if ((iVar4 == 0) || (cVar2 = real_isnegzero(*(undefined8 *)&expr->field_0x18), cVar2 != '\0')) {
      uVar3 = '\0';
    }
    else {
      uVar3 = '\x01';
    }
    break;
  case 0x19:
    iVar4 = fixed_zerop(expr);
    uVar3 = (uchar)iVar4;
    break;
  case 0x1a:
    iVar4 = integer_zerop(expr);
    if ((iVar4 == 0) &&
       (((iVar4 = real_zerop(expr), iVar4 == 0 ||
         (cVar2 = real_isnegzero(*(undefined8 *)(*(long *)&expr->field_0x18 + 0x18)), cVar2 != '\0')
         ) || (cVar2 = real_isnegzero(*(undefined8 *)(*(long *)&expr->field_0x20 + 0x18)),
              cVar2 != '\0')))) {
      uVar3 = '\0';
    }
    else {
      uVar3 = '\x01';
    }
    break;
  case 0x1b:
    for (elt = *(tree *)&expr->field_0x18; elt != (tree)0x0; elt = *(tree *)&elt->field_0x8) {
      uVar3 = initializer_zerop(*(const_tree *)&elt->field_0x20);
      if (uVar3 == '\0') {
        return '\0';
      }
    }
    uVar3 = '\x01';
    break;
  default:
    uVar3 = '\0';
    break;
  case 0x33:
    idx = 0;
    while( true ) {
      if (*(long *)&expr->field_0x18 == 0) {
        pVVar6 = (VEC_constructor_elt_base *)0x0;
      }
      else {
        pVVar6 = *(VEC_constructor_elt_base **)&expr->field_0x18;
      }
      uVar5 = VEC_constructor_elt_base_length(pVVar6);
      if (idx < uVar5) {
        if (*(long *)&expr->field_0x18 == 0) {
          pVVar6 = (VEC_constructor_elt_base *)0x0;
        }
        else {
          pVVar6 = *(VEC_constructor_elt_base **)&expr->field_0x18;
        }
        pcVar7 = VEC_constructor_elt_base_index(pVVar6,(uint)idx);
        elt = pcVar7->value;
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return '\x01';
      }
      uVar3 = initializer_zerop(elt);
      if (uVar3 == '\0') break;
      idx = idx + 1;
    }
    uVar3 = '\0';
  }
  return uVar3;
}



tree build_empty_stmt(location_t loc)

{
  tree ptVar1;
  tree t;
  
  ptVar1 = build1_stat(NOP_EXPR,global_trees[38],global_trees[17]);
  *(location_t *)&ptVar1->field_0x18 = loc;
  return ptVar1;
}



tree build_omp_clause(location_t loc,omp_clause_code code)

{
  int iVar1;
  tree __s;
  int length;
  int size;
  tree t;
  
  iVar1 = ((byte)omp_clause_num_ops[code] + 7) * 8;
  __s = (tree)ggc_alloc_stat(iVar1);
  memset(__s,0,(long)iVar1);
  *(undefined2 *)__s = 0xa3;
  *(omp_clause_code *)&__s->field_0x1c = code;
  *(location_t *)&__s->field_0x18 = loc;
  return __s;
}



tree build_vl_exp_stat(tree_code code,int len)

{
  int iVar1;
  tree __s;
  tree ptVar2;
  int length;
  tree t;
  
  iVar1 = (len + 5) * 8;
  if (*(int *)(tree_code_type + (long)code * 4) != 9) {
    fancy_abort("tree.c",0x24bb,&DAT_00117460);
  }
  if (len < 1) {
    fancy_abort("tree.c",0x24bc,&DAT_00117460);
  }
  __s = (tree)ggc_alloc_stat((long)iVar1);
  memset(__s,0,(long)iVar1);
  *(short *)__s = (short)code;
  ptVar2 = build_int_cst(sizetype_tab,(long)len);
  *(tree *)&__s->field_0x28 = ptVar2;
  return __s;
}



tree build_call_list(tree return_type,tree fn,tree arglist)

{
  int iVar1;
  tree t_00;
  tree local_30;
  int i;
  tree t;
  
  iVar1 = list_length(arglist);
  t_00 = build_vl_exp_stat(CALL_EXPR,iVar1 + 3);
  *(tree *)&t_00->field_0x10 = return_type;
  *(tree *)&t_00->field_0x30 = fn;
  *(undefined8 *)&t_00->field_0x38 = 0;
  i = 0;
  for (local_30 = arglist; local_30 != (tree)0x0; local_30 = *(tree *)&local_30->field_0x8) {
    *(undefined8 *)(&t_00->field_0x28 + (long)(i + 3) * 8) = *(undefined8 *)&local_30->field_0x20;
    i = i + 1;
  }
  process_call_operands(t_00);
  return t_00;
}



tree build_call_nary(tree return_type,tree fn,int nargs,...)

{
  long lVar1;
  char in_AL;
  tree ptVar2;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  tree ret;
  va_list args;
  undefined local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  args[0].gp_offset = 0x18;
  args[0].fp_offset = 0x30;
  args[0].overflow_arg_area = &stack0x00000008;
  args[0].reg_save_area = local_b8;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  ptVar2 = build_call_valist(return_type,fn,nargs,args);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar2;
}



tree build_call_valist(tree return_type,tree fn,int nargs,__va_list_tag *args)

{
  tree t_00;
  undefined8 *puVar1;
  int i;
  tree t;
  
  t_00 = build_vl_exp_stat(CALL_EXPR,nargs + 3);
  *(tree *)&t_00->field_0x10 = return_type;
  *(tree *)&t_00->field_0x30 = fn;
  *(undefined8 *)&t_00->field_0x38 = 0;
  for (i = 0; i < nargs; i = i + 1) {
    if (args->gp_offset < 0x30) {
      puVar1 = (undefined8 *)((ulong)args->gp_offset + (long)args->reg_save_area);
      args->gp_offset = args->gp_offset + 8;
    }
    else {
      puVar1 = (undefined8 *)args->overflow_arg_area;
      args->overflow_arg_area = puVar1 + 1;
    }
    *(undefined8 *)(&t_00->field_0x28 + (long)(i + 3) * 8) = *puVar1;
  }
  process_call_operands(t_00);
  return t_00;
}



tree build_call_array_loc(location_t loc,tree return_type,tree fn,int nargs,tree *args)

{
  tree t_00;
  int i;
  tree t;
  
  t_00 = build_vl_exp_stat(CALL_EXPR,nargs + 3);
  *(tree *)&t_00->field_0x10 = return_type;
  *(tree *)&t_00->field_0x30 = fn;
  *(undefined8 *)&t_00->field_0x38 = 0;
  for (i = 0; i < nargs; i = i + 1) {
    *(tree *)(&t_00->field_0x28 + (long)(i + 3) * 8) = args[i];
  }
  process_call_operands(t_00);
  *(location_t *)&t_00->field_0x18 = loc;
  return t_00;
}



tree build_call_vec(tree return_type,tree fn,VEC_tree_gc *args)

{
  uint uVar1;
  int iVar2;
  VEC_tree_base *pVVar3;
  long in_FS_OFFSET;
  uint ix;
  tree t;
  tree ret;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar3 = &args->base;
  if (args == (VEC_tree_gc *)0x0) {
    pVVar3 = (VEC_tree_base *)0x0;
  }
  uVar1 = VEC_tree_base_length(pVVar3);
  ret = build_vl_exp_stat(CALL_EXPR,uVar1 + 3);
  *(tree *)&ret->field_0x10 = return_type;
  *(tree *)&ret->field_0x30 = fn;
  *(undefined8 *)&ret->field_0x38 = 0;
  ix = 0;
  while( true ) {
    pVVar3 = &args->base;
    if (args == (VEC_tree_gc *)0x0) {
      pVVar3 = (VEC_tree_base *)0x0;
    }
    iVar2 = VEC_tree_base_iterate(pVVar3,ix,&t);
    if (iVar2 == 0) break;
    *(tree *)(&ret->field_0x28 + (ulong)(ix + 3) * 8) = t;
    ix = ix + 1;
  }
  process_call_operands(ret);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ret;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



uchar in_array_bounds_p(tree ref)

{
  const_tree t1;
  int iVar1;
  const_tree t2;
  const_tree t1_00;
  tree idx;
  tree min;
  tree max;
  
  t1 = *(const_tree *)&ref->field_0x30;
  if (*(short *)t1 == 0x17) {
    t2 = (const_tree)array_ref_low_bound(ref);
    t1_00 = (const_tree)array_ref_up_bound(ref);
    if ((((t2 != (const_tree)0x0) && (t1_00 != (const_tree)0x0)) && (*(short *)t2 == 0x17)) &&
       (((*(short *)t1_00 == 0x17 && (iVar1 = tree_int_cst_lt(t1,t2), iVar1 == 0)) &&
        (iVar1 = tree_int_cst_lt(t1_00,t1), iVar1 == 0)))) {
      return '\x01';
    }
  }
  return '\0';
}



uchar range_in_array_bounds_p(tree ref)

{
  long lVar1;
  const_tree t1;
  const_tree t2;
  int iVar2;
  const_tree t2_00;
  const_tree t1_00;
  tree domain_type;
  tree range_min;
  tree range_max;
  tree min;
  tree max;
  
  lVar1 = *(long *)(*(long *)&ref->field_0x10 + 0x18);
  t1 = *(const_tree *)(lVar1 + 0x68);
  t2 = *(const_tree *)(lVar1 + 0x70);
  if ((((t1 != (const_tree)0x0) && (t2 != (const_tree)0x0)) && (*(short *)t1 == 0x17)) &&
     (*(short *)t2 == 0x17)) {
    t2_00 = (const_tree)array_ref_low_bound(ref);
    t1_00 = (const_tree)array_ref_up_bound(ref);
    if ((((t2_00 != (const_tree)0x0) && (t1_00 != (const_tree)0x0)) &&
        ((*(short *)t2_00 == 0x17 &&
         ((*(short *)t1_00 == 0x17 && (iVar2 = tree_int_cst_lt(t1,t2_00), iVar2 == 0)))))) &&
       (iVar2 = tree_int_cst_lt(t1_00,t2), iVar2 == 0)) {
      return '\x01';
    }
  }
  return '\0';
}



uchar needs_to_live_in_memory(const_tree t)

{
  uchar uVar1;
  int iVar2;
  const_tree local_10;
  
  local_10 = t;
  if (*(short *)t == 0x8d) {
    local_10 = *(const_tree *)&t->field_0x18;
  }
  if ((((local_10->field_0x2 & 4) == 0) && (uVar1 = is_global_var(local_10), uVar1 == '\0')) &&
     ((*(short *)local_10 != 0x24 ||
      (iVar2 = aggregate_value_p(local_10,current_function_decl), iVar2 == 0)))) {
    return '\0';
  }
  return '\x01';
}



uchar fields_compatible_p(const_tree f1,const_tree f2)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = operand_equal_p(*(undefined8 *)&f1->field_0x88,*(undefined8 *)&f2->field_0x88,1);
  if (iVar3 == 0) {
    uVar1 = '\0';
  }
  else {
    iVar3 = operand_equal_p(*(undefined8 *)&f1->field_0x70,*(undefined8 *)&f2->field_0x70,1);
    if (iVar3 == 0) {
      uVar1 = '\0';
    }
    else {
      cVar2 = types_compatible_p(*(undefined8 *)&f1->field_0x10,*(undefined8 *)&f2->field_0x10);
      if (cVar2 == '\0') {
        uVar1 = '\0';
      }
      else {
        uVar1 = '\x01';
      }
    }
  }
  return uVar1;
}



tree find_compatible_field(tree record,tree orig_field)

{
  uchar uVar1;
  const_tree f1;
  tree f;
  
  f = *(tree *)&record->field_0x18;
  while( true ) {
    if (f == (tree)0x0) {
      f1 = *(const_tree *)&record->field_0x68;
      if (((f1 == (const_tree)0x0) || (*(short *)f1 != 0x1f)) ||
         (uVar1 = fields_compatible_p(f1,orig_field), uVar1 == '\0')) {
        f1 = orig_field;
      }
      return f1;
    }
    if ((*(short *)f == 0x1f) && (uVar1 = fields_compatible_p(f,orig_field), uVar1 != '\0')) break;
    f = *(tree *)&f->field_0x8;
  }
  return f;
}



long int_cst_value(const_tree x)

{
  char cVar1;
  ushort uVar2;
  uchar negative;
  uint bits;
  ulong val;
  
  uVar2 = *(ushort *)(*(long *)&x->field_0x10 + 0x3c) & 0x3ff;
  val = *(ulong *)&x->field_0x18;
  if ((*(long *)&x->field_0x20 != 0) && (*(long *)&x->field_0x20 != -1)) {
    fancy_abort("tree.c",0x25b2,&DAT_00117460);
  }
  if (uVar2 < 0x40) {
    cVar1 = (char)uVar2;
    if ((val >> (cVar1 - 1U & 0x3f) & 1) == 0) {
      val = val & ~((-1 << (cVar1 - 1U & 0x3f)) * 2);
    }
    else {
      val = val | (-1 << (cVar1 - 1U & 0x3f)) * 2;
    }
  }
  return val;
}



long widest_int_cst_value(const_tree x)

{
  char cVar1;
  ushort uVar2;
  uchar negative;
  uint bits;
  ulong val;
  
  uVar2 = *(ushort *)(*(long *)&x->field_0x10 + 0x3c) & 0x3ff;
  val = *(ulong *)&x->field_0x18;
  if ((*(long *)&x->field_0x20 != 0) && (*(long *)&x->field_0x20 != -1)) {
    fancy_abort("tree.c",0x25cf,&DAT_00117460);
  }
  if (uVar2 < 0x40) {
    cVar1 = (char)uVar2;
    if ((val >> (cVar1 - 1U & 0x3f) & 1) == 0) {
      val = val & ~((-1 << (cVar1 - 1U & 0x3f)) * 2);
    }
    else {
      val = val | (-1 << (cVar1 - 1U & 0x3f)) * 2;
    }
  }
  return val;
}



tree signed_or_unsigned_type_for(int unsignedp,tree type)

{
  tree ptVar1;
  tree t;
  
  if ((*(short *)type == 10) || (t = type, *(short *)type == 0xc)) {
    if (*(char *)(*(long *)&type->field_0x10 + 7) != '\0') {
      ptVar1 = (tree)(*alias_pairs)(*(ushort *)&type->field_0x3c & 0x3ff,unsignedp);
      return ptVar1;
    }
    t = global_trees[41];
  }
  if ((((*(short *)t == 6) || (*(short *)t == 7)) || (*(short *)t == 8)) &&
     (unsignedp != (uint)((byte)t->field_0x2 >> 5 & 1))) {
    t = (tree)(*alias_pairs)(*(ushort *)&t->field_0x3c & 0x3ff,unsignedp);
  }
  return t;
}



tree unsigned_type_for(tree type)

{
  tree ptVar1;
  
  ptVar1 = signed_or_unsigned_type_for(1,type);
  return ptVar1;
}



tree signed_type_for(tree type)

{
  tree ptVar1;
  
  ptVar1 = signed_or_unsigned_type_for(0,type);
  return ptVar1;
}



tree upper_bound_in_type(tree outer,tree inner)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  tree ptVar4;
  uint prec;
  uint det;
  uint oprec;
  uint iprec;
  ulong lo;
  ulong hi;
  
  uVar2 = (uint)(*(ushort *)&outer->field_0x3c & 0x3ff);
  uVar3 = (uint)(*(ushort *)&inner->field_0x3c & 0x3ff);
  if (uVar3 < uVar2) {
    bVar1 = 4;
  }
  else {
    bVar1 = 0;
  }
  switch(bVar1 | (byte)outer->field_0x2 >> 4 & 2 | (byte)inner->field_0x2 >> 5 & 1) {
  case 0:
  case 1:
    prec = uVar2 - 1;
    break;
  case 2:
  case 3:
    prec = uVar2;
    break;
  case 4:
    prec = uVar3 - 1;
    break;
  case 5:
    prec = uVar3;
    break;
  case 6:
    prec = uVar2;
    break;
  case 7:
    prec = uVar3;
    break;
  default:
    fancy_abort("tree.c",0x2637,&DAT_00117460);
  }
  if (prec < 0x41) {
    hi = 0;
    lo = 0xffffffffffffffff >> (0x40U - (char)prec & 0x3f);
  }
  else {
    hi = 0xffffffffffffffff >> (0x80U - (char)prec & 0x3f);
    lo = 0xffffffffffffffff;
  }
  ptVar4 = build_int_cst_wide(outer,lo,hi);
  return ptVar4;
}



tree lower_bound_in_type(tree outer,tree inner)

{
  ushort uVar1;
  ushort uVar2;
  tree ptVar3;
  uint oprec;
  uint iprec;
  uint prec;
  ulong lo;
  ulong hi;
  
  uVar1 = *(ushort *)&outer->field_0x3c & 0x3ff;
  uVar2 = *(ushort *)&inner->field_0x3c & 0x3ff;
  if (((outer->field_0x2 & 0x20) == 0) && ((uVar1 <= uVar2 || ((inner->field_0x2 & 0x20) == 0)))) {
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    if (uVar2 < 0x41) {
      hi = 0xffffffffffffffff;
      lo = -1 << ((char)uVar2 - 1U & 0x3f);
    }
    else {
      hi = -1 << ((char)uVar2 + 0xbfU & 0x3f);
      lo = 0;
    }
  }
  else {
    hi = 0;
    lo = 0;
  }
  ptVar3 = build_int_cst_wide(outer,lo,hi);
  return ptVar3;
}



int operand_equal_for_phi_arg_p(const_tree arg0,const_tree arg1)

{
  int iVar1;
  
  if (arg0 == arg1) {
    iVar1 = 1;
  }
  else if ((*(short *)arg0 == 0x8d) || (*(short *)arg1 == 0x8d)) {
    iVar1 = 0;
  }
  else {
    iVar1 = operand_equal_p(arg0,arg1,0);
  }
  return iVar1;
}



tree num_ending_zeros(const_tree x)

{
  tree ptVar1;
  ulong uVar2;
  uint num;
  uint abits;
  ulong fr;
  tree type;
  ulong nfr;
  
  ptVar1 = *(tree *)&x->field_0x10;
  if (*(long *)&x->field_0x18 == 0) {
    num = 0x40;
    fr = *(ulong *)&x->field_0x20;
  }
  else {
    num = 0;
    fr = *(ulong *)&x->field_0x18;
  }
  for (abits = 0x20; abits != 0; abits = abits >> 1) {
    uVar2 = fr >> (sbyte)abits;
    if (fr == uVar2 << (sbyte)abits) {
      num = num + abits;
      fr = uVar2;
    }
  }
  if ((*(ushort *)&ptVar1->field_0x3c & 0x3ff) < num) {
    num = (uint)(*(ushort *)&ptVar1->field_0x3c & 0x3ff);
  }
  ptVar1 = build_int_cst_type(ptVar1,(ulong)num);
  return ptVar1;
}



tree walk_type_fields(tree type,walk_tree_fn func,void *data,pointer_set_t *pset,walk_tree_lh lh)

{
  tree ptVar1;
  tree arg;
  tree result;
  
  switch(*(undefined2 *)type) {
  case 5:
    ptVar1 = walk_tree_1((tree *)&type->field_0x10,func,data,pset,lh);
    if (ptVar1 != (tree)0x0) {
      return ptVar1;
    }
    ptVar1 = walk_tree_1((tree *)&type->field_0x70,func,data,pset,lh);
    break;
  default:
    goto LAB_00115887;
  case 10:
  case 0xc:
    if ((((**(short **)&type->field_0x10 != 10) && (**(short **)&type->field_0x10 != 0xc)) ||
        ((**(short **)(*(long *)&type->field_0x10 + 0x10) != 10 &&
         (**(short **)(*(long *)&type->field_0x10 + 0x10) != 0xc)))) ||
       (((**(short **)(*(long *)(*(long *)&type->field_0x10 + 0x10) + 0x10) != 10 &&
         (**(short **)(*(long *)(*(long *)&type->field_0x10 + 0x10) + 0x10) != 0xc)) ||
        (pset != (pointer_set_t *)0x0)))) goto switchD_001155a6_caseD_d;
    ptVar1 = walk_tree_without_duplicates_1((tree *)&type->field_0x10,func,data,(walk_tree_lh)0x0);
    goto joined_r0x00115693;
  case 0xd:
switchD_001155a6_caseD_d:
    ptVar1 = walk_tree_1((tree *)&type->field_0x10,func,data,pset,lh);
joined_r0x00115693:
    if (ptVar1 != (tree)0x0) {
      return ptVar1;
    }
    goto LAB_00115887;
  case 0xf:
    if (((pset != (pointer_set_t *)0x0) ||
        (((**(short **)&type->field_0x10 != 10 && (**(short **)&type->field_0x10 != 0xc)) &&
         (**(short **)&type->field_0x10 != 5)))) &&
       (ptVar1 = walk_tree_1((tree *)&type->field_0x10,func,data,pset,lh), ptVar1 != (tree)0x0)) {
      return ptVar1;
    }
    ptVar1 = walk_tree_1((tree *)&type->field_0x18,func,data,pset,lh);
    break;
  case 0x14:
    goto switchD_001155a6_caseD_14;
  case 0x15:
    ptVar1 = walk_tree_1((tree *)&type->field_0x70,func,data,pset,lh);
    if (ptVar1 != (tree)0x0) {
      return ptVar1;
    }
    goto switchD_001155a6_caseD_14;
  }
  if (ptVar1 == (tree)0x0) {
LAB_00115887:
    ptVar1 = (tree)0x0;
  }
  return ptVar1;
switchD_001155a6_caseD_14:
  ptVar1 = walk_tree_1((tree *)&type->field_0x10,func,data,pset,lh);
  if (ptVar1 != (tree)0x0) {
    return ptVar1;
  }
  for (arg = *(tree *)&type->field_0x18; arg != (tree)0x0; arg = *(tree *)&arg->field_0x8) {
    ptVar1 = walk_tree_1((tree *)&arg->field_0x20,func,data,pset,lh);
    if (ptVar1 != (tree)0x0) {
      return ptVar1;
    }
  }
  goto LAB_00115887;
}



tree walk_tree_1(tree *tp,walk_tree_fn func,void *data,pointer_set_t *pset,walk_tree_lh lh)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  tree *tp_00;
  VEC_constructor_elt_base *vec_;
  long in_FS_OFFSET;
  undefined8 in_stack_ffffffffffffff58;
  tree *local_80;
  int walk_subtrees;
  int len;
  int i;
  int i_1;
  int i_2;
  int i_3;
  tree_code code;
  int len_1;
  int len_2;
  ulong idx;
  tree decl;
  tree field;
  tree result;
  tree *type_p;
  constructor_elt *ce;
  tree local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = tp;
tail_recurse:
  if (*local_80 != (tree)0x0) {
    if (pset != (pointer_set_t *)0x0) {
      iVar2 = pointer_set_insert(pset,*local_80);
      if (iVar2 != 0) {
        ptVar3 = (tree)0x0;
        _ce = (tree_stmt_iterator)CONCAT88(local_20,ce);
        goto LAB_00116545;
      }
    }
    walk_subtrees = 1;
    result = (*func)(local_80,&walk_subtrees,data);
    ptVar3 = result;
    if (result != (tree)0x0) goto LAB_00116545;
    code = (tree_code)*(ushort *)*local_80;
    if (walk_subtrees == 0) {
      if (code == TREE_LIST) {
        local_80 = (tree *)&(*local_80)->field_0x8;
      }
      else {
        if (code != 0xa3) {
          ptVar3 = (tree)0x0;
          _ce = (tree_stmt_iterator)CONCAT88(local_20,ce);
          goto LAB_00116545;
        }
        local_80 = (tree *)&(*local_80)->field_0x8;
      }
    }
    else {
      if (lh != (walk_tree_lh)0x0) {
        ptVar3 = (*lh)(local_80,&walk_subtrees,func,data,pset);
        result = ptVar3;
        if ((ptVar3 != (tree)0x0) || (walk_subtrees == 0)) goto LAB_00116545;
      }
      switch(code) {
      case ERROR_MARK:
      case IDENTIFIER_NODE:
      case BLOCK:
      case INTEGER_CST:
      case REAL_CST:
      case FIXED_CST:
      case VECTOR_CST:
      case STRING_CST:
      case FIELD_DECL:
      case RESULT_DECL:
      case PLACEHOLDER_EXPR:
      case 0x8d:
        _ce = (tree_stmt_iterator)CONCAT88(local_20,ce);
        goto LAB_00116540;
      case TREE_LIST:
        ptVar3 = walk_tree_1((tree *)&(*local_80)->field_0x20,func,data,pset,lh);
        result = ptVar3;
        if (ptVar3 != (tree)0x0) goto LAB_00116545;
        local_80 = (tree *)&(*local_80)->field_0x8;
        break;
      case TREE_VEC:
        len = *(int *)&(*local_80)->field_0x18;
        if (len == 0) goto LAB_00116540;
        while (len = len + -1, len != 0) {
          ptVar3 = walk_tree_1((tree *)(&(*local_80)->field_0x20 + (long)len * 8),func,data,pset,lh)
          ;
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
        }
        local_80 = (tree *)&(*local_80)->field_0x20;
        break;
      case COMPLEX_CST:
        ptVar3 = walk_tree_1((tree *)&(*local_80)->field_0x18,func,data,pset,lh);
        result = ptVar3;
        if (ptVar3 != (tree)0x0) goto LAB_00116545;
        local_80 = (tree *)&(*local_80)->field_0x20;
        break;
      case CONSTRUCTOR:
        idx = 0;
        goto LAB_00115ba4;
      case TARGET_EXPR:
        if (*(long *)&(*local_80)->field_0x40 == *(long *)&(*local_80)->field_0x30) {
          len_1 = 2;
        }
        else {
          len_1 = 3;
        }
        for (i_2 = 0; i_2 < len_1; i_2 = i_2 + 1) {
          ptVar3 = walk_tree_1((tree *)(&(*local_80)->field_0x28 + (long)i_2 * 8),func,data,pset,lh)
          ;
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
        }
        local_80 = (tree *)(&(*local_80)->field_0x28 + (long)len_1 * 8);
        break;
      case BIND_EXPR:
        for (decl = *(tree *)&(*local_80)->field_0x28; decl != (tree)0x0;
            decl = *(tree *)&decl->field_0x8) {
          ptVar3 = walk_tree_1((tree *)&decl->field_0x50,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
          ptVar3 = walk_tree_1((tree *)&decl->field_0x30,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
          ptVar3 = walk_tree_1((tree *)&decl->field_0x48,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
        }
        local_80 = (tree *)&(*local_80)->field_0x30;
        break;
      case SAVE_EXPR:
        local_80 = (tree *)&(*local_80)->field_0x28;
        break;
      case 0x84:
        if (**(short **)&(*local_80)->field_0x28 == 0x23) {
          type_p = (tree *)(*(long *)&(*local_80)->field_0x28 + 0x10);
          if (*(short *)*type_p == 0) {
            ptVar3 = (tree)0x0;
            goto LAB_00116545;
          }
          ptVar3 = (*func)(type_p,&walk_subtrees,data);
          result = ptVar3;
          if ((ptVar3 != (tree)0x0) || (walk_subtrees == 0)) goto LAB_00116545;
          ptVar3 = walk_type_fields(*type_p,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
          if (((*(short *)*type_p == 0x10) || (*(short *)*type_p == 0x11)) ||
             (*(short *)*type_p == 0x12)) {
            for (field = *(tree *)&(*type_p)->field_0x18; field != (tree)0x0;
                field = *(tree *)&field->field_0x8) {
              if (*(short *)field == 0x1f) {
                ptVar3 = walk_tree_1((tree *)&field->field_0x70,func,data,pset,lh);
                result = ptVar3;
                if (ptVar3 != (tree)0x0) goto LAB_00116545;
                ptVar3 = walk_tree_1((tree *)&field->field_0x30,func,data,pset,lh);
                result = ptVar3;
                if (ptVar3 != (tree)0x0) goto LAB_00116545;
                ptVar3 = walk_tree_1((tree *)&field->field_0x48,func,data,pset,lh);
                result = ptVar3;
                if (ptVar3 != (tree)0x0) goto LAB_00116545;
                if (*(short *)*type_p == 0x12) {
                  ptVar3 = walk_tree_1((tree *)&field->field_0x80,func,data,pset,lh);
                  result = ptVar3;
                  if (ptVar3 != (tree)0x0) goto LAB_00116545;
                }
              }
            }
          }
          else if (((*(short *)*type_p == 7) || (*(short *)*type_p == 6)) ||
                  ((*(short *)*type_p == 8 ||
                   ((*(short *)*type_p == 0xb || (*(short *)*type_p == 9)))))) {
            ptVar3 = walk_tree_1((tree *)&(*type_p)->field_0x68,func,data,pset,lh);
            result = ptVar3;
            if (ptVar3 != (tree)0x0) goto LAB_00116545;
            ptVar3 = walk_tree_1((tree *)&(*type_p)->field_0x70,func,data,pset,lh);
            result = ptVar3;
            if (ptVar3 != (tree)0x0) goto LAB_00116545;
          }
          ptVar3 = walk_tree_1((tree *)&(*type_p)->field_0x20,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
          local_80 = (tree *)&(*type_p)->field_0x28;
          break;
        }
      default:
        if ((*(uint *)(tree_code_type + (long)code * 4) < 4) ||
           (10 < *(uint *)(tree_code_type + (long)code * 4))) {
          _ce = (tree_stmt_iterator)CONCAT88(local_20,ce);
          if (*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)*local_80 * 4) != 2)
          goto LAB_00116540;
          ptVar3 = walk_type_fields(*local_80,func,data,pset,lh);
          goto LAB_00116545;
        }
        len_2 = tree_operand_length(*local_80);
        if (len_2 == 0) goto LAB_00116540;
        for (i_3 = 0; i_3 < len_2 + -1; i_3 = i_3 + 1) {
          ptVar3 = walk_tree_1((tree *)(&(*local_80)->field_0x28 + (long)i_3 * 8),func,data,pset,lh)
          ;
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
        }
        local_80 = (tree *)(&(*local_80)->field_0x28 + (long)(len_2 + -1) * 8);
        break;
      case 0x93:
        _ce = tsi_start(*local_80);
        goto LAB_00115d71;
      case 0xa3:
        switch(*(undefined4 *)&(*local_80)->field_0x1c) {
        default:
          fancy_abort("tree.c",0x27be,&DAT_00117460);
          _ce = (tree_stmt_iterator)CONCAT88(local_20,ce);
          goto LAB_00116540;
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
          ptVar3 = walk_tree_1((tree *)&(*local_80)->field_0x38,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xf:
          local_80 = (tree *)&(*local_80)->field_0x8;
          break;
        case 4:
          ptVar3 = walk_tree_1((tree *)&(*local_80)->field_0x38,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
          ptVar3 = walk_tree_1((tree *)&(*local_80)->field_0x40,func,data,pset,lh);
          result = ptVar3;
          if (ptVar3 != (tree)0x0) goto LAB_00116545;
          local_80 = (tree *)&(*local_80)->field_0x8;
          break;
        case 5:
          for (i_1 = 0; i_1 < 4; i_1 = i_1 + 1) {
            ptVar3 = walk_tree_1((tree *)(&(*local_80)->field_0x38 + (long)i_1 * 8),func,data,pset,
                                 lh);
            result = ptVar3;
            if (ptVar3 != (tree)0x0) goto LAB_00116545;
          }
          local_80 = (tree *)&(*local_80)->field_0x8;
          break;
        case 0xe:
          for (i = 0; i < 3; i = i + 1) {
            result = walk_tree_1((tree *)(&(*local_80)->field_0x38 + (long)i * 8),func,data,pset,lh)
            ;
            ptVar3 = result;
            if (result != (tree)0x0) goto LAB_00116545;
          }
          local_80 = (tree *)&(*local_80)->field_0x8;
        }
      }
    }
    goto tail_recurse;
  }
  ptVar3 = (tree)0x0;
  _ce = (tree_stmt_iterator)CONCAT88(local_20,ce);
LAB_00116545:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
LAB_00115d71:
  uVar1 = tsi_end_p((tree_stmt_iterator)CONCAT88(lh,in_stack_ffffffffffffff58));
  if (uVar1 != '\0') goto LAB_00116540;
  tp_00 = tsi_stmt_ptr((tree_stmt_iterator)CONCAT88(lh,in_stack_ffffffffffffff58));
  ptVar3 = walk_tree_1(tp_00,func,data,pset,lh);
  result = ptVar3;
  if (ptVar3 != (tree)0x0) goto LAB_00116545;
  tsi_next((tree_stmt_iterator *)&ce);
  goto LAB_00115d71;
LAB_00115ba4:
  if (*(long *)&(*local_80)->field_0x18 == 0) {
    vec_ = (VEC_constructor_elt_base *)0x0;
  }
  else {
    vec_ = *(VEC_constructor_elt_base **)&(*local_80)->field_0x18;
  }
  iVar2 = VEC_constructor_elt_base_iterate(vec_,(uint)idx,&ce);
  if (iVar2 == 0) goto LAB_00116540;
  ptVar3 = walk_tree_1(&ce->value,func,data,pset,lh);
  result = ptVar3;
  if (ptVar3 != (tree)0x0) goto LAB_00116545;
  idx = idx + 1;
  goto LAB_00115ba4;
LAB_00116540:
  ptVar3 = (tree)0x0;
  goto LAB_00116545;
}



tree walk_tree_without_duplicates_1(tree *tp,walk_tree_fn func,void *data,walk_tree_lh lh)

{
  pointer_set_t *pset_00;
  tree ptVar1;
  pointer_set_t *pset;
  tree result;
  
  pset_00 = (pointer_set_t *)pointer_set_create();
  ptVar1 = walk_tree_1(tp,func,data,pset_00,lh);
  pointer_set_destroy(pset_00);
  return ptVar1;
}



tree * tree_block(tree t)

{
  tree *pptVar1;
  char c;
  
  if (((char)*(undefined4 *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4) < '\x04') ||
     ('\n' < (char)*(undefined4 *)(tree_code_type + (long)(int)(uint)*(ushort *)t * 4))) {
    fancy_abort("tree.c",0x2847,&DAT_00117460);
    pptVar1 = (tree *)0x0;
  }
  else {
    pptVar1 = (tree *)&t->field_0x20;
  }
  return pptVar1;
}



tree call_expr_arglist(tree exp)

{
  int i;
  tree arglist;
  
  arglist = (tree)0x0;
  for (i = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -4; -1 < i; i = i + -1) {
    arglist = tree_cons_stat((tree)0x0,*(tree *)(&exp->field_0x28 + (long)(i + 3) * 8),arglist);
  }
  return arglist;
}



tree create_artificial_label(location_t loc)

{
  tree ptVar1;
  tree lab;
  
  ptVar1 = build_decl_stat(loc,LABEL_DECL,(tree)0x0,global_trees[38]);
  ptVar1->field_0x39 = ptVar1->field_0x39 | 0x10;
  ptVar1->field_0x39 = ptVar1->field_0x39 | 4;
  *(undefined8 *)&ptVar1->field_0x28 = current_function_decl;
  return ptVar1;
}



char * get_name(tree t)

{
  tree ptVar1;
  char *pcVar2;
  tree stripped_decl;
  
  ptVar1 = tree_strip_nop_conversions(t);
  if ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)ptVar1 * 4) == 3) &&
     (*(long *)&ptVar1->field_0x20 != 0)) {
    pcVar2 = *(char **)(*(long *)&ptVar1->field_0x20 + 0x18);
  }
  else if (*(short *)ptVar1 == 0x79) {
    pcVar2 = get_name(*(tree *)&ptVar1->field_0x28);
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}



uchar stdarg_p(tree fntype)

{
  long lVar1;
  uchar uVar2;
  tree ptVar3;
  long in_FS_OFFSET;
  tree n;
  tree t;
  function_args_iterator args_iter;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  n = (tree)0x0;
  if (fntype == (tree)0x0) {
    uVar2 = '\0';
  }
  else {
    function_args_iter_init(&args_iter,fntype);
    while( true ) {
      ptVar3 = function_args_iter_cond(&args_iter);
      if (ptVar3 == (tree)0x0) break;
      function_args_iter_next(&args_iter);
      n = ptVar3;
    }
    if ((n == (tree)0x0) || (n == global_trees[38])) {
      uVar2 = '\0';
    }
    else {
      uVar2 = '\x01';
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



uchar prototype_p(tree fntype)

{
  tree t;
  
  if (fntype == (tree)0x0) {
    fancy_abort("tree.c",0x289e,&DAT_00117460);
  }
  return *(long *)&fntype->field_0x18 != 0;
}



location_t * block_nonartificial_location(tree block)

{
  tree ptVar1;
  tree local_20;
  location_t *ret;
  tree ao;
  
  ret = (location_t *)0x0;
  local_20 = block;
  do {
    if (((local_20 == (tree)0x0) || (*(short *)local_20 != 4)) ||
       (*(long *)&local_20->field_0x40 == 0)) {
      return ret;
    }
    for (ao = *(tree *)&local_20->field_0x40;
        ((*(short *)ao == 4 && (*(long *)&ao->field_0x40 != 0)) && (ao != *(tree *)&ao->field_0x40))
        ; ao = *(tree *)&ao->field_0x40) {
    }
    if (*(short *)ao == 0x1d) {
      if ((ao->field_0xda & 0x20) == 0) {
        return ret;
      }
      ptVar1 = lookup_attribute("artificial",*(tree *)&ao->field_0x58);
      if (ptVar1 == (tree)0x0) {
        return ret;
      }
      ret = (location_t *)&local_20->field_0x1c;
    }
    else if (*(short *)ao != 4) {
      return ret;
    }
    local_20 = *(tree *)&local_20->field_0x38;
  } while( true );
}



location_t tree_nonartificial_location(tree exp)

{
  location_t lVar1;
  tree *pptVar2;
  location_t *plVar3;
  location_t *loc;
  
  pptVar2 = tree_block(exp);
  plVar3 = block_nonartificial_location(*pptVar2);
  if (plVar3 == (location_t *)0x0) {
    if ((*(uint *)(tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
       (10 < *(uint *)(tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(location_t *)&exp->field_0x18;
    }
  }
  else {
    lVar1 = *plVar3;
  }
  return lVar1;
}



hashval_t cl_option_hash_hash(void *x)

{
  hashval_t hash;
  char *p;
  size_t i;
  size_t len;
  const_tree t;
  
  len = 0;
  hash = 0;
                    // WARNING: Load size is inaccurate
  if (*x == 0xba) {
    p = (char *)((long)x + 0x18);
    len = 0xb8;
  }
  else {
                    // WARNING: Load size is inaccurate
    if (*x == 0xbb) {
      p = (char *)((long)x + 0x18);
      len = 0x18;
    }
    else {
      fancy_abort("tree.c",0x28f5,&DAT_00117460);
    }
  }
  for (i = 0; i < len; i = i + 1) {
    if (p[i] != '\0') {
      hash = ((int)p[i] | (int)i * 4) ^ hash << 4;
    }
  }
  return hash;
}



int cl_option_hash_eq(void *x,void *y)

{
  uint uVar1;
  int iVar2;
  char *xp;
  char *yp;
  size_t len;
  const_tree xt;
  const_tree yt;
  
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
  if (*x == *y) {
                    // WARNING: Load size is inaccurate
    if (*x == 0xba) {
      xp = (char *)((long)x + 0x18);
      yp = (char *)((long)y + 0x18);
      len = 0xb8;
    }
    else {
                    // WARNING: Load size is inaccurate
      if (*x == 0xbb) {
        xp = (char *)((long)x + 0x18);
        yp = (char *)((long)y + 0x18);
        len = 0x18;
      }
      else {
        fancy_abort("tree.c",0x291f,&DAT_00117460);
      }
    }
    iVar2 = memcmp(xp,yp,len);
    uVar1 = (uint)(iVar2 == 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



tree build_optimization_node(void)

{
  tree *pptVar1;
  tree t;
  void **slot;
  
  cl_optimization_save(&cl_optimization_node->field_0x18);
  pptVar1 = (tree *)htab_find_slot(cl_option_hash_table,cl_optimization_node,1);
  t = *pptVar1;
  if (t == (tree)0x0) {
    t = cl_optimization_node;
    *pptVar1 = cl_optimization_node;
    cl_optimization_node = make_node_stat(0xba);
  }
  return t;
}



tree build_target_option_node(void)

{
  tree *pptVar1;
  tree t;
  void **slot;
  
  cl_target_option_save(&cl_target_option_node->field_0x18);
  pptVar1 = (tree *)htab_find_slot(cl_option_hash_table,cl_target_option_node,1);
  t = *pptVar1;
  if (t == (tree)0x0) {
    t = cl_target_option_node;
    *pptVar1 = cl_target_option_node;
    cl_target_option_node = make_node_stat(0xbb);
  }
  return t;
}



tree block_ultimate_origin(const_tree block)

{
  const_tree ptVar1;
  tree lookahead;
  tree immediate_origin;
  tree ret_val;
  
  ptVar1 = *(const_tree *)&block->field_0x40;
  if (((block->field_0x18 & 1) == 0) || (ptVar1 != block)) {
    if (ptVar1 == (const_tree)0x0) {
      lookahead = (tree)0x0;
    }
    else {
      do {
        lookahead = ptVar1;
        if (*(short *)lookahead == 4) {
          ptVar1 = *(const_tree *)&lookahead->field_0x40;
        }
        else {
          ptVar1 = (tree)0x0;
        }
      } while ((ptVar1 != (tree)0x0) && (ptVar1 != lookahead));
      if ((*(int *)(tree_code_type + (long)(int)(uint)*(ushort *)lookahead * 4) == 3) &&
         (*(long *)&lookahead->field_0x60 != 0)) {
        lookahead = *(tree *)&lookahead->field_0x60;
      }
    }
  }
  else {
    lookahead = (tree)0x0;
  }
  return lookahead;
}



uchar list_equal_p(const_tree t1,const_tree t2)

{
  uchar uVar1;
  const_tree local_18;
  const_tree local_10;
  
  local_10 = t1;
  for (local_18 = t2; (local_10 != (const_tree)0x0 && (local_18 != (const_tree)0x0));
      local_18 = *(const_tree *)&local_18->field_0x8) {
    if (*(long *)&local_10->field_0x20 != *(long *)&local_18->field_0x20) {
      return '\0';
    }
    local_10 = *(const_tree *)&local_10->field_0x8;
  }
  if ((local_10 == (const_tree)0x0) && (local_18 == (const_tree)0x0)) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



uchar tree_nop_conversion(const_tree exp)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  tree outer_type;
  tree inner_type;
  
  if (((*(short *)exp == 0x74) || (*(short *)exp == 0x71)) || (*(short *)exp == 0x75)) {
    if (*(tree *)&exp->field_0x28 == global_trees[0]) {
      bVar5 = false;
    }
    else {
      psVar1 = *(short **)&exp->field_0x10;
      psVar2 = *(short **)(*(long *)&exp->field_0x28 + 0x10);
      if (((((*psVar1 == 6) || (*psVar1 == 7)) ||
           ((*psVar1 == 8 || ((*psVar1 == 10 || (*psVar1 == 0xc)))))) || (*psVar1 == 5)) &&
         (((((*psVar2 == 6 || (*psVar2 == 7)) || (*psVar2 == 8)) ||
           ((*psVar2 == 10 || (*psVar2 == 0xc)))) || (*psVar2 == 5)))) {
        bVar5 = (psVar1[0x1e] & 0x3ffU) == (psVar2[0x1e] & 0x3ffU);
      }
      else {
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
        bVar5 = uVar3 == uVar4;
      }
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



uchar tree_sign_nop_conversion(const_tree exp)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  tree outer_type;
  tree inner_type;
  
  uVar5 = tree_nop_conversion(exp);
  if (uVar5 != '\0') {
    psVar1 = *(short **)&exp->field_0x10;
    psVar2 = *(short **)(*(long *)&exp->field_0x28 + 0x10);
    if ((*(byte *)(psVar1 + 1) >> 5 & 1) == (*(byte *)(psVar2 + 1) >> 5 & 1)) {
      if ((*psVar1 == 10) || (*psVar1 == 0xc)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if ((*psVar2 == 10) || (*psVar2 == 0xc)) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      if ((bool)(bVar4 ^ bVar3 ^ 1)) {
        return '\x01';
      }
    }
  }
  return '\0';
}



tree tree_strip_nop_conversions(tree exp)

{
  uchar uVar1;
  const_tree local_10;
  
  local_10 = exp;
  while( true ) {
    uVar1 = tree_nop_conversion(local_10);
    if (uVar1 == '\0') break;
    local_10 = *(const_tree *)&local_10->field_0x28;
  }
  return local_10;
}



tree tree_strip_sign_nop_conversions(tree exp)

{
  uchar uVar1;
  const_tree local_10;
  
  local_10 = exp;
  while( true ) {
    uVar1 = tree_sign_nop_conversion(local_10);
    if (uVar1 == '\0') break;
    local_10 = *(const_tree *)&local_10->field_0x28;
  }
  return local_10;
}



tree lhd_gcc_personality(void)

{
  if (gcc_eh_personality_decl == (tree)0x0) {
    gcc_eh_personality_decl = (tree)build_personality_function("__gcc_personality_v0");
  }
  return gcc_eh_personality_decl;
}



void gt_ggc_mx_type_hash(void *x_p)

{
  int iVar1;
  type_hash *x;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar1 = ggc_set_mark(x_p);
    if ((iVar1 == 0) && (*(long *)((long)x_p + 8) != 0)) {
      gt_ggc_mx_lang_tree_node(*(undefined8 *)((long)x_p + 8));
    }
  }
  return;
}



void gt_ggc_m_P9type_hash4htab(void *x_p)

{
  long lVar1;
  int iVar2;
  size_t i0;
  htab *x;
  void *a__;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar2 = ggc_set_mark(x_p);
    if ((iVar2 == 0) && (*(long *)((long)x_p + 0x18) != 0)) {
      for (i0 = 0; i0 != *(size_t *)((long)x_p + 0x20); i0 = i0 + 1) {
        if (*(long *)(*(long *)((long)x_p + 0x18) + i0 * 8) != 0) {
          gt_ggc_mx_type_hash(*(void **)(*(long *)((long)x_p + 0x18) + i0 * 8));
        }
      }
      lVar1 = *(long *)((long)x_p + 0x18);
      if ((lVar1 != 0) && (lVar1 != 1)) {
        ggc_set_mark(lVar1);
      }
    }
  }
  return;
}



void gt_pch_nx_type_hash(void *x_p)

{
  int iVar1;
  type_hash *x;
  
  iVar1 = gt_pch_note_object(x_p,x_p,gt_pch_p_9type_hash,0x3c);
  if ((iVar1 != 0) && (*(long *)((long)x_p + 8) != 0)) {
    gt_pch_nx_lang_tree_node(*(undefined8 *)((long)x_p + 8));
  }
  return;
}



void gt_pch_n_P9type_hash4htab(void *x_p)

{
  int iVar1;
  size_t i0;
  htab *x;
  
  iVar1 = gt_pch_note_object(x_p,x_p,gt_pch_p_P9type_hash4htab,0xc5);
  if ((iVar1 != 0) && (*(long *)((long)x_p + 0x18) != 0)) {
    for (i0 = 0; i0 != *(size_t *)((long)x_p + 0x20); i0 = i0 + 1) {
      if (*(long *)(*(long *)((long)x_p + 0x18) + i0 * 8) != 0) {
        gt_pch_nx_type_hash(*(void **)(*(long *)((long)x_p + 0x18) + i0 * 8));
      }
    }
    gt_pch_note_object(*(undefined8 *)((long)x_p + 0x18),x_p,gt_pch_p_P9type_hash4htab,0xd9);
  }
  return;
}



void gt_pch_p_9type_hash(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  type_hash *x;
  
  if (x_p == this_obj) {
    (*op)((void *)((long)x_p + 8),cookie);
  }
  return;
}



void gt_pch_p_P9type_hash4htab(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  size_t i0;
  htab *x;
  
  if (*(long *)((long)x_p + 0x18) != 0) {
    for (i0 = 0; i0 != *(size_t *)((long)x_p + 0x20); i0 = i0 + 1) {
      if (this_obj == *(void **)((long)x_p + 0x18)) {
        (*op)((void *)(*(long *)((long)x_p + 0x18) + i0 * 8),cookie);
      }
    }
    if (x_p == this_obj) {
      (*op)((void *)((long)x_p + 0x18),cookie);
    }
  }
  return;
}


