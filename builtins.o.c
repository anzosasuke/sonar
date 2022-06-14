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
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong size_t;

typedef enum optab_methods {
    OPTAB_DIRECT=0,
    OPTAB_LIB=1,
    OPTAB_WIDEN=2,
    OPTAB_LIB_WIDEN=3,
    OPTAB_MUST_WIDEN=4
} optab_methods;

typedef enum expand_modifier {
    EXPAND_NORMAL=0,
    EXPAND_STACK_PARM=1,
    EXPAND_SUM=2,
    EXPAND_CONST_ADDRESS=3,
    EXPAND_INITIALIZER=4,
    EXPAND_WRITE=5,
    EXPAND_MEMORY=6
} expand_modifier;

typedef enum save_level {
    SAVE_BLOCK=0,
    SAVE_FUNCTION=1,
    SAVE_NONLOCAL=2
} save_level;

typedef enum block_op_methods {
    BLOCK_OP_NORMAL=0,
    BLOCK_OP_NO_LIBCALL=1,
    BLOCK_OP_CALL_PARM=2,
    BLOCK_OP_TAILCALL=3
} block_op_methods;

typedef enum type_class {
    no_type_class=-1,
    void_type_class=0,
    integer_type_class=1,
    char_type_class=2,
    enumeral_type_class=3,
    boolean_type_class=4,
    pointer_type_class=5,
    reference_type_class=6,
    offset_type_class=7,
    real_type_class=8,
    complex_type_class=9,
    function_type_class=10,
    method_type_class=11,
    record_type_class=12,
    union_type_class=13,
    array_type_class=14,
    string_type_class=15,
    lang_type_class=16
} type_class;

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

typedef struct VEC_gimple_gc VEC_gimple_gc, *PVEC_gimple_gc;

typedef struct pointer_map_t pointer_map_t, *Ppointer_map_t;

typedef struct bitmap_head_def * bitmap;

typedef struct ssa_operands ssa_operands, *Pssa_operands;

typedef struct stack_local_entry stack_local_entry, *Pstack_local_entry;

typedef struct machine_cfa_state machine_cfa_state, *Pmachine_cfa_state;

typedef enum calling_abi {
    SYSV_ABI=0,
    MS_ABI=1
} calling_abi;

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

typedef struct VEC_gimple_base VEC_gimple_base, *PVEC_gimple_base;

typedef struct ssa_operand_memory_d ssa_operand_memory_d, *Pssa_operand_memory_d;

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
};

struct gimple_statement_eh_ctrl {
    struct gimple_statement_base gsbase;
    int region;
    undefined field2_0x24;
    undefined field3_0x25;
    undefined field4_0x26;
    undefined field5_0x27;
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
    struct pt_solution pt;
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

typedef struct ipa_opt_pass_d * ipa_opt_pass;

struct ipa_opt_pass_d {
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

typedef struct VEC_ipa_opt_pass_heap VEC_ipa_opt_pass_heap, *PVEC_ipa_opt_pass_heap;

typedef struct VEC_ipa_opt_pass_base VEC_ipa_opt_pass_base, *PVEC_ipa_opt_pass_base;

struct VEC_ipa_opt_pass_base {
    uint num;
    uint alloc;
    ipa_opt_pass vec[1];
};

struct VEC_ipa_opt_pass_heap {
    struct VEC_ipa_opt_pass_base base;
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

typedef long __off_t;

typedef long __off64_t;

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

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_FILE FILE;

typedef enum diagnostic_prefixing_rule_t {
    DIAGNOSTICS_SHOW_PREFIX_ONCE=0,
    DIAGNOSTICS_SHOW_PREFIX_NEVER=1,
    DIAGNOSTICS_SHOW_PREFIX_EVERY_LINE=2
} diagnostic_prefixing_rule_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef void _IO_lock_t;

typedef struct _IO_codecvt _IO_codecvt, *P_IO_codecvt;

typedef struct _IO_wide_data _IO_wide_data, *P_IO_wide_data;

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

struct _IO_wide_data {
};

struct _IO_codecvt {
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

struct _IO_marker {
};

struct _IO_FILE {
    int _flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
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
    undefined field24_0x84;
    undefined field25_0x85;
    undefined field26_0x86;
    undefined field27_0x87;
    _IO_lock_t * _lock;
    __off64_t _offset;
    struct _IO_codecvt * _codecvt;
    struct _IO_wide_data * _wide_data;
    struct _IO_FILE * _freeres_list;
    void * _freeres_buf;
    size_t __pad5;
    int _mode;
    char _unused2[20];
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

typedef enum libcall_type {
    LCT_NORMAL=0,
    LCT_CONST=1,
    LCT_PURE=2,
    LCT_NORETURN=3,
    LCT_THROW=4,
    LCT_RETURNS_TWICE=5
} libcall_type;

typedef enum reg_note {
    REG_DEP_TRUE=0,
    REG_DEAD=1,
    REG_INC=2,
    REG_EQUIV=3,
    REG_EQUAL=4,
    REG_NONNEG=5,
    REG_UNUSED=6,
    REG_CC_SETTER=7,
    REG_CC_USER=8,
    REG_LABEL_TARGET=9,
    REG_LABEL_OPERAND=10,
    REG_DEP_OUTPUT=11,
    REG_DEP_ANTI=12,
    REG_BR_PROB=13,
    REG_VALUE_PROFILE=14,
    REG_NOALIAS=15,
    REG_BR_PRED=16,
    REG_FRAME_RELATED_EXPR=17,
    REG_CFA_DEF_CFA=18,
    REG_CFA_ADJUST_CFA=19,
    REG_CFA_OFFSET=20,
    REG_CFA_REGISTER=21,
    REG_CFA_RESTORE=22,
    REG_CFA_SET_VDRAP=23,
    REG_EH_CONTEXT=24,
    REG_EH_REGION=25,
    REG_SAVE_NOTE=26,
    REG_NORETURN=27,
    REG_NON_LOCAL_GOTO=28,
    REG_CROSSING_JUMP=29,
    REG_SETJMP=30,
    REG_NOTE_MAX=31
} reg_note;

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

typedef struct lto_file_decl_data lto_file_decl_data, *Plto_file_decl_data;

struct lto_file_decl_data {
};

typedef struct _dep _dep, *P_dep;

struct _dep {
};

typedef struct ddg ddg, *Pddg;

struct ddg {
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

typedef enum insn_code {
    CODE_FOR_fix_truncdi_i387=-126,
    CODE_FOR_fix_truncdi_i387_with_temp=-125,
    CODE_FOR_fix_trunchi_i387=-124,
    CODE_FOR_fix_truncsi_i387=-123,
    CODE_FOR_fix_trunchi_i387_with_temp=-122,
    CODE_FOR_fix_truncsi_i387_with_temp=-121,
    CODE_FOR_x86_fnstcw_1=-120,
    CODE_FOR_x86_fldcw_1=-119,
    CODE_FOR_floatdisf2_i387_with_xmm=-71,
    CODE_FOR_floatdidf2_i387_with_xmm=-70,
    CODE_FOR_floatdixf2_i387_with_xmm=-69,
    CODE_FOR_addqi3_cc=-61,
    CODE_FOR_addqi_ext_1=-37,
    CODE_FOR_x86_fnstsw_1=30,
    CODE_FOR_x86_sahf_1=31,
    CODE_FOR_popsi1=41,
    CODE_FOR_movsi_insv_1=63,
    CODE_FOR_swapxf=83,
    CODE_FOR_zero_extendhisi2_and=84,
    CODE_FOR_zero_extendsidi2_32=92,
    CODE_FOR_extendhisi2=94,
    CODE_FOR_extendqihi2=95,
    CODE_FOR_extendqisi2=96,
    CODE_FOR_truncxfsf2_i387_noop=110,
    CODE_FOR_truncxfdf2_i387_noop=111,
    CODE_FOR_fix_truncsfsi_sse=116,
    CODE_FOR_fix_truncdfsi_sse=117,
    CODE_FOR_fix_trunchi_fisttp_i387_1=118,
    CODE_FOR_fix_truncsi_fisttp_i387_1=119,
    CODE_FOR_fix_truncdi_fisttp_i387_1=120,
    CODE_FOR_fix_trunchi_i387_fisttp=121,
    CODE_FOR_fix_truncsi_i387_fisttp=122,
    CODE_FOR_fix_truncdi_i387_fisttp=123,
    CODE_FOR_fix_trunchi_i387_fisttp_with_temp=124,
    CODE_FOR_fix_truncsi_i387_fisttp_with_temp=125,
    CODE_FOR_fix_truncdi_i387_fisttp_with_temp=126,
    CODE_FOR_divqi3=271,
    CODE_FOR_udivqi3=272,
    CODE_FOR_andqi_ext_0=298,
    CODE_FOR_copysignsf3_const=367,
    CODE_FOR_copysigndf3_const=368,
    CODE_FOR_copysigntf3_const=369,
    CODE_FOR_copysignsf3_var=370,
    CODE_FOR_copysigndf3_var=371,
    CODE_FOR_copysigntf3_var=372,
    CODE_FOR_x86_shld=382,
    CODE_FOR_x86_shrd=395,
    CODE_FOR_ix86_rotldi3=438,
    CODE_FOR_ix86_rotrdi3=447,
    CODE_FOR_jump=478,
    CODE_FOR_blockage=487,
    CODE_FOR_prologue_use=489,
    CODE_FOR_return_internal=490,
    CODE_FOR_return_internal_long=491,
    CODE_FOR_return_pop_internal=492,
    CODE_FOR_return_indirect_internal=493,
    CODE_FOR_nop=494,
    CODE_FOR_vswapmov=495,
    CODE_FOR_pad=496,
    CODE_FOR_set_got=497,
    CODE_FOR_set_got_labelled=498,
    CODE_FOR_eh_return_internal=499,
    CODE_FOR_leave=500,
    CODE_FOR_ctzsi2=503,
    CODE_FOR_clzsi2_abm=504,
    CODE_FOR_bsr=505,
    CODE_FOR_popcounthi2=506,
    CODE_FOR_popcountsi2=507,
    CODE_FOR_bswaphi_lowpart=514,
    CODE_FOR_clzhi2_abm=515,
    CODE_FOR_paritydi2_cmp=517,
    CODE_FOR_paritysi2_cmp=518,
    CODE_FOR_truncxfsf2_i387_noop_unspec=573,
    CODE_FOR_truncxfdf2_i387_noop_unspec=574,
    CODE_FOR_sqrtxf2=575,
    CODE_FOR_sqrt_extendsfxf2_i387=576,
    CODE_FOR_sqrt_extenddfxf2_i387=577,
    CODE_FOR_fpremxf4_i387=581,
    CODE_FOR_fprem1xf4_i387=582,
    CODE_FOR_sincosxf3=589,
    CODE_FOR_sincos_extendsfxf3_i387=590,
    CODE_FOR_sincos_extenddfxf3_i387=591,
    CODE_FOR_fptanxf4_i387=592,
    CODE_FOR_fptan_extendsfxf4_i387=593,
    CODE_FOR_fptan_extenddfxf4_i387=594,
    CODE_FOR_fpatan_extendsfxf3_i387=596,
    CODE_FOR_fpatan_extenddfxf3_i387=597,
    CODE_FOR_fyl2xxf3_i387=598,
    CODE_FOR_fyl2x_extendsfxf3_i387=599,
    CODE_FOR_fyl2x_extenddfxf3_i387=600,
    CODE_FOR_fyl2xp1xf3_i387=601,
    CODE_FOR_fyl2xp1_extendsfxf3_i387=602,
    CODE_FOR_fyl2xp1_extenddfxf3_i387=603,
    CODE_FOR_fxtractxf3_i387=604,
    CODE_FOR_fxtract_extendsfxf3_i387=605,
    CODE_FOR_fxtract_extenddfxf3_i387=606,
    CODE_FOR_sse4_1_roundsf2=609,
    CODE_FOR_sse4_1_rounddf2=610,
    CODE_FOR_rintxf2=611,
    CODE_FOR_fistdi2=613,
    CODE_FOR_fistdi2_with_temp=614,
    CODE_FOR_fisthi2=617,
    CODE_FOR_fistsi2=618,
    CODE_FOR_fisthi2_with_temp=619,
    CODE_FOR_fistsi2_with_temp=620,
    CODE_FOR_frndintxf2_floor=621,
    CODE_FOR_frndintxf2_floor_i387=622,
    CODE_FOR_fistdi2_floor=626,
    CODE_FOR_fistdi2_floor_with_temp=627,
    CODE_FOR_fisthi2_floor=628,
    CODE_FOR_fistsi2_floor=629,
    CODE_FOR_fisthi2_floor_with_temp=630,
    CODE_FOR_fistsi2_floor_with_temp=631,
    CODE_FOR_frndintxf2_ceil=632,
    CODE_FOR_frndintxf2_ceil_i387=633,
    CODE_FOR_fistdi2_ceil=637,
    CODE_FOR_fistdi2_ceil_with_temp=638,
    CODE_FOR_fisthi2_ceil=639,
    CODE_FOR_fistsi2_ceil=640,
    CODE_FOR_fisthi2_ceil_with_temp=641,
    CODE_FOR_fistsi2_ceil_with_temp=642,
    CODE_FOR_frndintxf2_trunc=643,
    CODE_FOR_frndintxf2_trunc_i387=644,
    CODE_FOR_frndintxf2_mask_pm=645,
    CODE_FOR_frndintxf2_mask_pm_i387=646,
    CODE_FOR_fxamsf2_i387=647,
    CODE_FOR_fxamdf2_i387=648,
    CODE_FOR_fxamxf2_i387=649,
    CODE_FOR_fxamsf2_i387_with_temp=650,
    CODE_FOR_fxamdf2_i387_with_temp=651,
    CODE_FOR_cld=652,
    CODE_FOR_smaxsf3=681,
    CODE_FOR_sminsf3=682,
    CODE_FOR_smaxdf3=683,
    CODE_FOR_smindf3=684,
    CODE_FOR_pro_epilogue_adjust_stack_1=693,
    CODE_FOR_allocate_stack_worker_32=694,
    CODE_FOR_trap=701,
    CODE_FOR_stack_protect_set_si=704,
    CODE_FOR_stack_tls_protect_set_si=705,
    CODE_FOR_stack_protect_test_si=706,
    CODE_FOR_stack_tls_protect_test_si=707,
    CODE_FOR_sse4_2_crc32qi=708,
    CODE_FOR_sse4_2_crc32hi=709,
    CODE_FOR_sse4_2_crc32si=710,
    CODE_FOR_lwp_slwpcbsi=715,
    CODE_FOR_sse_movntdi=728,
    CODE_FOR_mmx_rcpv2sf2=736,
    CODE_FOR_mmx_rcpit1v2sf3=737,
    CODE_FOR_mmx_rcpit2v2sf3=738,
    CODE_FOR_mmx_rsqrtv2sf2=739,
    CODE_FOR_mmx_rsqit1v2sf3=740,
    CODE_FOR_mmx_haddv2sf3=741,
    CODE_FOR_mmx_hsubv2sf3=742,
    CODE_FOR_mmx_addsubv2sf3=743,
    CODE_FOR_mmx_gtv2sf3=745,
    CODE_FOR_mmx_gev2sf3=746,
    CODE_FOR_mmx_pf2id=747,
    CODE_FOR_mmx_pf2iw=748,
    CODE_FOR_mmx_pi2fw=749,
    CODE_FOR_mmx_floatv2si2=750,
    CODE_FOR_mmx_pswapdv2sf2=751,
    CODE_FOR_mmx_ashrv4hi3=782,
    CODE_FOR_mmx_ashrv2si3=783,
    CODE_FOR_mmx_lshrv4hi3=784,
    CODE_FOR_mmx_lshrv2si3=785,
    CODE_FOR_mmx_lshrv1di3=786,
    CODE_FOR_mmx_ashlv4hi3=787,
    CODE_FOR_mmx_ashlv2si3=788,
    CODE_FOR_mmx_ashlv1di3=789,
    CODE_FOR_mmx_gtv8qi3=793,
    CODE_FOR_mmx_gtv4hi3=794,
    CODE_FOR_mmx_gtv2si3=795,
    CODE_FOR_mmx_andnotv8qi3=796,
    CODE_FOR_mmx_andnotv4hi3=797,
    CODE_FOR_mmx_andnotv2si3=798,
    CODE_FOR_mmx_packsswb=808,
    CODE_FOR_mmx_packssdw=809,
    CODE_FOR_mmx_packuswb=810,
    CODE_FOR_mmx_punpckhbw=811,
    CODE_FOR_mmx_punpcklbw=812,
    CODE_FOR_mmx_punpckhwd=813,
    CODE_FOR_mmx_punpcklwd=814,
    CODE_FOR_mmx_punpckhdq=815,
    CODE_FOR_mmx_punpckldq=816,
    CODE_FOR_mmx_pextrw=818,
    CODE_FOR_mmx_pshufw_1=819,
    CODE_FOR_mmx_pswapdv2si2=820,
    CODE_FOR_mmx_psadbw=828,
    CODE_FOR_mmx_pmovmskb=829,
    CODE_FOR_movdi_to_sse=853,
    CODE_FOR_avx_movups=854,
    CODE_FOR_avx_movupd=855,
    CODE_FOR_avx_movups256=856,
    CODE_FOR_avx_movupd256=857,
    CODE_FOR_sse2_movq128=858,
    CODE_FOR_sse_movups=859,
    CODE_FOR_sse2_movupd=860,
    CODE_FOR_avx_movdqu256=861,
    CODE_FOR_avx_movdqu=862,
    CODE_FOR_sse2_movdqu=863,
    CODE_FOR_avx_movntv4sf=864,
    CODE_FOR_avx_movntv2df=865,
    CODE_FOR_avx_movntv8sf=866,
    CODE_FOR_avx_movntv4df=867,
    CODE_FOR_sse_movntv4sf=868,
    CODE_FOR_sse2_movntv2df=869,
    CODE_FOR_avx_movntv4di=870,
    CODE_FOR_avx_movntv2di=871,
    CODE_FOR_sse2_movntv2di=872,
    CODE_FOR_sse2_movntsi=873,
    CODE_FOR_avx_lddqu256=874,
    CODE_FOR_avx_lddqu=875,
    CODE_FOR_sse3_lddqu=876,
    CODE_FOR_sse_vmaddv4sf3=893,
    CODE_FOR_sse_vmsubv4sf3=894,
    CODE_FOR_sse2_vmaddv2df3=895,
    CODE_FOR_sse2_vmsubv2df3=896,
    CODE_FOR_sse_vmmulv4sf3=905,
    CODE_FOR_sse2_vmmulv2df3=906,
    CODE_FOR_avx_divv4sf3=907,
    CODE_FOR_avx_divv2df3=908,
    CODE_FOR_avx_divv8sf3=909,
    CODE_FOR_avx_divv4df3=910,
    CODE_FOR_sse_divv4sf3=913,
    CODE_FOR_sse2_divv2df3=914,
    CODE_FOR_sse_vmdivv4sf3=917,
    CODE_FOR_sse2_vmdivv2df3=918,
    CODE_FOR_avx_rcpv8sf2=919,
    CODE_FOR_sse_rcpv4sf2=920,
    CODE_FOR_sse_vmrcpv4sf2=922,
    CODE_FOR_avx_sqrtv8sf2=923,
    CODE_FOR_sse_sqrtv4sf2=924,
    CODE_FOR_sqrtv4df2=925,
    CODE_FOR_sqrtv2df2=926,
    CODE_FOR_sse_vmsqrtv4sf2=929,
    CODE_FOR_sse2_vmsqrtv2df2=930,
    CODE_FOR_avx_rsqrtv8sf2=931,
    CODE_FOR_sse_rsqrtv4sf2=932,
    CODE_FOR_sse_vmrsqrtv4sf2=934,
    CODE_FOR_sse_vmsmaxv4sf3=963,
    CODE_FOR_sse_vmsminv4sf3=964,
    CODE_FOR_sse2_vmsmaxv2df3=965,
    CODE_FOR_sse2_vmsminv2df3=966,
    CODE_FOR_avx_addsubv8sf3=979,
    CODE_FOR_avx_addsubv4df3=980,
    CODE_FOR_sse3_addsubv4sf3=982,
    CODE_FOR_sse3_addsubv2df3=984,
    CODE_FOR_avx_haddv4df3=985,
    CODE_FOR_avx_hsubv4df3=986,
    CODE_FOR_avx_haddv8sf3=987,
    CODE_FOR_avx_hsubv8sf3=988,
    CODE_FOR_sse3_haddv4sf3=991,
    CODE_FOR_sse3_hsubv4sf3=992,
    CODE_FOR_sse3_haddv2df3=995,
    CODE_FOR_sse3_hsubv2df3=996,
    CODE_FOR_avx_cmppsv4sf3=997,
    CODE_FOR_avx_cmppdv2df3=998,
    CODE_FOR_avx_cmppsv8sf3=999,
    CODE_FOR_avx_cmppdv4df3=1000,
    CODE_FOR_avx_cmpssv4sf3=1001,
    CODE_FOR_avx_cmpsdv2df3=1002,
    CODE_FOR_sse_maskcmpsf3=1007,
    CODE_FOR_sse2_maskcmpdf3=1008,
    CODE_FOR_sse_maskcmpv4sf3=1009,
    CODE_FOR_sse2_maskcmpv2df3=1010,
    CODE_FOR_sse_vmmaskcmpv4sf3=1011,
    CODE_FOR_sse2_vmmaskcmpv2df3=1012,
    CODE_FOR_sse_comi=1013,
    CODE_FOR_sse2_comi=1014,
    CODE_FOR_sse_ucomi=1015,
    CODE_FOR_sse2_ucomi=1016,
    CODE_FOR_avx_andnotv4sf3=1017,
    CODE_FOR_avx_andnotv2df3=1018,
    CODE_FOR_avx_andnotv8sf3=1019,
    CODE_FOR_avx_andnotv4df3=1020,
    CODE_FOR_sse_andnotv4sf3=1021,
    CODE_FOR_sse2_andnotv2df3=1022,
    CODE_FOR_fma4_fmaddv8sf4256=1057,
    CODE_FOR_fma4_fmaddv4df4256=1058,
    CODE_FOR_fma4_fmsubv8sf4256=1059,
    CODE_FOR_fma4_fmsubv4df4256=1060,
    CODE_FOR_fma4_fnmaddv8sf4256=1061,
    CODE_FOR_fma4_fnmaddv4df4256=1062,
    CODE_FOR_fma4_fnmsubv8sf4256=1063,
    CODE_FOR_fma4_fnmsubv4df4256=1064,
    CODE_FOR_fma4_fmaddsf4=1065,
    CODE_FOR_fma4_fmadddf4=1066,
    CODE_FOR_fma4_fmaddv4sf4=1067,
    CODE_FOR_fma4_fmaddv2df4=1068,
    CODE_FOR_fma4_vmfmaddv4sf4=1069,
    CODE_FOR_fma4_vmfmaddv2df4=1070,
    CODE_FOR_fma4_fmsubsf4=1071,
    CODE_FOR_fma4_fmsubdf4=1072,
    CODE_FOR_fma4_fmsubv4sf4=1073,
    CODE_FOR_fma4_fmsubv2df4=1074,
    CODE_FOR_fma4_vmfmsubv4sf4=1075,
    CODE_FOR_fma4_vmfmsubv2df4=1076,
    CODE_FOR_fma4_fnmaddsf4=1077,
    CODE_FOR_fma4_fnmadddf4=1078,
    CODE_FOR_fma4_fnmaddv4sf4=1079,
    CODE_FOR_fma4_fnmaddv2df4=1080,
    CODE_FOR_fma4_vmfnmaddv4sf4=1081,
    CODE_FOR_fma4_vmfnmaddv2df4=1082,
    CODE_FOR_fma4_fnmsubsf4=1083,
    CODE_FOR_fma4_fnmsubdf4=1084,
    CODE_FOR_fma4_fnmsubv4sf4=1085,
    CODE_FOR_fma4_fnmsubv2df4=1086,
    CODE_FOR_fma4_vmfnmsubv4sf4=1087,
    CODE_FOR_fma4_vmfnmsubv2df4=1088,
    CODE_FOR_fma4i_fmaddv8sf4256=1089,
    CODE_FOR_fma4i_fmaddv4df4256=1090,
    CODE_FOR_fma4i_fmsubv8sf4256=1091,
    CODE_FOR_fma4i_fmsubv4df4256=1092,
    CODE_FOR_fma4i_fnmaddv8sf4256=1093,
    CODE_FOR_fma4i_fnmaddv4df4256=1094,
    CODE_FOR_fma4i_fnmsubv8sf4256=1095,
    CODE_FOR_fma4i_fnmsubv4df4256=1096,
    CODE_FOR_fma4i_fmaddv4sf4=1097,
    CODE_FOR_fma4i_fmaddv2df4=1098,
    CODE_FOR_fma4i_fmsubv4sf4=1099,
    CODE_FOR_fma4i_fmsubv2df4=1100,
    CODE_FOR_fma4i_fnmaddv4sf4=1101,
    CODE_FOR_fma4i_fnmaddv2df4=1102,
    CODE_FOR_fma4i_fnmsubv4sf4=1103,
    CODE_FOR_fma4i_fnmsubv2df4=1104,
    CODE_FOR_fma4i_vmfmaddv4sf4=1105,
    CODE_FOR_fma4i_vmfmaddv2df4=1106,
    CODE_FOR_fma4i_vmfmsubv4sf4=1107,
    CODE_FOR_fma4i_vmfmsubv2df4=1108,
    CODE_FOR_fma4i_vmfnmaddv4sf4=1109,
    CODE_FOR_fma4i_vmfnmaddv2df4=1110,
    CODE_FOR_fma4i_vmfnmsubv4sf4=1111,
    CODE_FOR_fma4i_vmfnmsubv2df4=1112,
    CODE_FOR_fma4_fmaddsubv8sf4=1113,
    CODE_FOR_fma4_fmaddsubv4df4=1114,
    CODE_FOR_fma4_fmaddsubv4sf4=1115,
    CODE_FOR_fma4_fmaddsubv2df4=1116,
    CODE_FOR_fma4_fmsubaddv8sf4=1117,
    CODE_FOR_fma4_fmsubaddv4df4=1118,
    CODE_FOR_fma4_fmsubaddv4sf4=1119,
    CODE_FOR_fma4_fmsubaddv2df4=1120,
    CODE_FOR_fma4i_fmaddsubv8sf4=1121,
    CODE_FOR_fma4i_fmaddsubv4df4=1122,
    CODE_FOR_fma4i_fmaddsubv4sf4=1123,
    CODE_FOR_fma4i_fmaddsubv2df4=1124,
    CODE_FOR_fma4i_fmsubaddv8sf4=1125,
    CODE_FOR_fma4i_fmsubaddv4df4=1126,
    CODE_FOR_fma4i_fmsubaddv4sf4=1127,
    CODE_FOR_fma4i_fmsubaddv2df4=1128,
    CODE_FOR_sse_cvtpi2ps=1129,
    CODE_FOR_sse_cvtps2pi=1130,
    CODE_FOR_sse_cvttps2pi=1131,
    CODE_FOR_sse_cvtsi2ss=1133,
    CODE_FOR_sse_cvtss2si=1134,
    CODE_FOR_sse_cvtss2si_2=1135,
    CODE_FOR_sse_cvttss2si=1136,
    CODE_FOR_avx_cvtdq2ps=1137,
    CODE_FOR_avx_cvtdq2ps256=1138,
    CODE_FOR_sse2_cvtdq2ps=1139,
    CODE_FOR_avx_cvtps2dq=1140,
    CODE_FOR_avx_cvtps2dq256=1141,
    CODE_FOR_sse2_cvtps2dq=1142,
    CODE_FOR_avx_cvttps2dq=1143,
    CODE_FOR_avx_cvttps2dq256=1144,
    CODE_FOR_sse2_cvttps2dq=1145,
    CODE_FOR_sse2_cvtpi2pd=1146,
    CODE_FOR_sse2_cvtpd2pi=1147,
    CODE_FOR_sse2_cvttpd2pi=1148,
    CODE_FOR_sse2_cvtsi2sd=1150,
    CODE_FOR_sse2_cvtsd2si=1151,
    CODE_FOR_sse2_cvtsd2si_2=1152,
    CODE_FOR_sse2_cvttsd2si=1153,
    CODE_FOR_avx_cvtdq2pd256=1154,
    CODE_FOR_sse2_cvtdq2pd=1155,
    CODE_FOR_avx_cvtpd2dq256=1156,
    CODE_FOR_avx_cvttpd2dq256=1158,
    CODE_FOR_sse2_cvtsd2ss=1161,
    CODE_FOR_sse2_cvtss2sd=1163,
    CODE_FOR_avx_cvtpd2ps256=1164,
    CODE_FOR_avx_cvtps2pd256=1166,
    CODE_FOR_sse2_cvtps2pd=1167,
    CODE_FOR_sse_movhlps=1169,
    CODE_FOR_sse_movlhps=1171,
    CODE_FOR_avx_unpckhps256=1172,
    CODE_FOR_vec_interleave_highv4sf=1174,
    CODE_FOR_avx_unpcklps256=1175,
    CODE_FOR_vec_interleave_lowv4sf=1177,
    CODE_FOR_avx_movshdup256=1178,
    CODE_FOR_sse3_movshdup=1179,
    CODE_FOR_avx_movsldup256=1180,
    CODE_FOR_sse3_movsldup=1181,
    CODE_FOR_avx_shufps256_1=1182,
    CODE_FOR_sse_shufps_v4sf=1185,
    CODE_FOR_sse_shufps_v4si=1186,
    CODE_FOR_sse_storehps=1187,
    CODE_FOR_sse_loadhps=1189,
    CODE_FOR_sse_storelps=1191,
    CODE_FOR_sse_loadlps=1193,
    CODE_FOR_sse_movss=1195,
    CODE_FOR_vec_setv4sf_0=1209,
    CODE_FOR_vec_setv4si_0=1210,
    CODE_FOR_sse4_1_insertps=1214,
    CODE_FOR_vec_extract_lo_v4di=1216,
    CODE_FOR_vec_extract_lo_v4df=1217,
    CODE_FOR_vec_extract_hi_v4di=1218,
    CODE_FOR_vec_extract_hi_v4df=1219,
    CODE_FOR_vec_extract_lo_v8si=1220,
    CODE_FOR_vec_extract_lo_v8sf=1221,
    CODE_FOR_vec_extract_hi_v8si=1222,
    CODE_FOR_vec_extract_hi_v8sf=1223,
    CODE_FOR_vec_extract_lo_v16hi=1224,
    CODE_FOR_vec_extract_hi_v16hi=1225,
    CODE_FOR_vec_extract_lo_v32qi=1226,
    CODE_FOR_vec_extract_hi_v32qi=1227,
    CODE_FOR_avx_unpckhpd256=1230,
    CODE_FOR_avx_shufpd256_1=1238,
    CODE_FOR_vec_interleave_highv2di=1240,
    CODE_FOR_vec_interleave_lowv2di=1242,
    CODE_FOR_sse2_shufpd_v2df=1245,
    CODE_FOR_sse2_shufpd_v2di=1246,
    CODE_FOR_sse2_storehpd=1248,
    CODE_FOR_sse2_storelpd=1249,
    CODE_FOR_sse2_loadhpd=1251,
    CODE_FOR_sse2_loadlpd=1253,
    CODE_FOR_sse2_movsd=1257,
    CODE_FOR_vec_dupv2df=1259,
    CODE_FOR_mulv16qi3=1295,
    CODE_FOR_mulv2di3=1311,
    CODE_FOR_ashrv8hi3=1314,
    CODE_FOR_ashrv4si3=1315,
    CODE_FOR_sse2_lshrv1ti3=1320,
    CODE_FOR_lshrv8hi3=1321,
    CODE_FOR_lshrv4si3=1322,
    CODE_FOR_lshrv2di3=1323,
    CODE_FOR_sse2_ashlv1ti3=1328,
    CODE_FOR_ashlv8hi3=1329,
    CODE_FOR_ashlv4si3=1330,
    CODE_FOR_ashlv2di3=1331,
    CODE_FOR_sse2_gtv16qi3=1368,
    CODE_FOR_sse2_gtv8hi3=1369,
    CODE_FOR_sse2_gtv4si3=1370,
    CODE_FOR_sse4_2_gtv2di3=1371,
    CODE_FOR_sse2_andnotv16qi3=1384,
    CODE_FOR_sse2_andnotv8hi3=1385,
    CODE_FOR_sse2_andnotv4si3=1386,
    CODE_FOR_sse2_andnotv2di3=1387,
    CODE_FOR_sse2_packsswb=1441,
    CODE_FOR_sse2_packssdw=1443,
    CODE_FOR_sse2_packuswb=1445,
    CODE_FOR_vec_interleave_highv16qi=1447,
    CODE_FOR_vec_interleave_lowv16qi=1449,
    CODE_FOR_vec_interleave_highv8hi=1451,
    CODE_FOR_vec_interleave_lowv8hi=1453,
    CODE_FOR_vec_interleave_highv4si=1455,
    CODE_FOR_vec_interleave_lowv4si=1457,
    CODE_FOR_sse2_pshufd_1=1469,
    CODE_FOR_sse2_pshuflw_1=1470,
    CODE_FOR_sse2_pshufhw_1=1471,
    CODE_FOR_sse2_loadld=1473,
    CODE_FOR_sse2_stored=1474,
    CODE_FOR_vec_concatv2di=1492,
    CODE_FOR_sse2_psadbw=1498,
    CODE_FOR_avx_movmskps256=1499,
    CODE_FOR_avx_movmskpd256=1500,
    CODE_FOR_sse_movmskps=1501,
    CODE_FOR_sse2_movmskpd=1502,
    CODE_FOR_sse2_pmovmskb=1503,
    CODE_FOR_sse_ldmxcsr=1505,
    CODE_FOR_sse_stmxcsr=1506,
    CODE_FOR_sse2_clflush=1508,
    CODE_FOR_sse3_mwait=1511,
    CODE_FOR_sse3_monitor=1512,
    CODE_FOR_ssse3_phaddwv8hi3=1514,
    CODE_FOR_ssse3_phaddwv4hi3=1515,
    CODE_FOR_ssse3_phadddv4si3=1517,
    CODE_FOR_ssse3_phadddv2si3=1518,
    CODE_FOR_ssse3_phaddswv8hi3=1520,
    CODE_FOR_ssse3_phaddswv4hi3=1521,
    CODE_FOR_ssse3_phsubwv8hi3=1523,
    CODE_FOR_ssse3_phsubwv4hi3=1524,
    CODE_FOR_ssse3_phsubdv4si3=1526,
    CODE_FOR_ssse3_phsubdv2si3=1527,
    CODE_FOR_ssse3_phsubswv8hi3=1529,
    CODE_FOR_ssse3_phsubswv4hi3=1530,
    CODE_FOR_ssse3_pmaddubsw128=1532,
    CODE_FOR_ssse3_pmaddubsw=1533,
    CODE_FOR_ssse3_pshufbv16qi3=1538,
    CODE_FOR_ssse3_pshufbv8qi3=1539,
    CODE_FOR_ssse3_psignv16qi3=1543,
    CODE_FOR_ssse3_psignv8hi3=1544,
    CODE_FOR_ssse3_psignv4si3=1545,
    CODE_FOR_ssse3_psignv8qi3=1546,
    CODE_FOR_ssse3_psignv4hi3=1547,
    CODE_FOR_ssse3_psignv2si3=1548,
    CODE_FOR_ssse3_palignrti=1550,
    CODE_FOR_ssse3_palignrdi=1551,
    CODE_FOR_absv16qi2=1552,
    CODE_FOR_absv8hi2=1553,
    CODE_FOR_absv4si2=1554,
    CODE_FOR_absv8qi2=1555,
    CODE_FOR_absv4hi2=1556,
    CODE_FOR_absv2si2=1557,
    CODE_FOR_sse4a_movntsf=1558,
    CODE_FOR_sse4a_movntdf=1559,
    CODE_FOR_sse4a_vmmovntv4sf=1560,
    CODE_FOR_sse4a_vmmovntv2df=1561,
    CODE_FOR_sse4a_extrqi=1562,
    CODE_FOR_sse4a_extrq=1563,
    CODE_FOR_sse4a_insertqi=1564,
    CODE_FOR_sse4a_insertq=1565,
    CODE_FOR_avx_blendps=1566,
    CODE_FOR_avx_blendpd=1567,
    CODE_FOR_avx_blendps256=1568,
    CODE_FOR_avx_blendpd256=1569,
    CODE_FOR_avx_blendvps=1570,
    CODE_FOR_avx_blendvpd=1571,
    CODE_FOR_avx_blendvps256=1572,
    CODE_FOR_avx_blendvpd256=1573,
    CODE_FOR_sse4_1_blendps=1574,
    CODE_FOR_sse4_1_blendpd=1575,
    CODE_FOR_sse4_1_blendvps=1576,
    CODE_FOR_sse4_1_blendvpd=1577,
    CODE_FOR_avx_dpps=1578,
    CODE_FOR_avx_dppd=1579,
    CODE_FOR_avx_dpps256=1580,
    CODE_FOR_avx_dppd256=1581,
    CODE_FOR_sse4_1_dpps=1582,
    CODE_FOR_sse4_1_dppd=1583,
    CODE_FOR_sse4_1_movntdqa=1584,
    CODE_FOR_sse4_1_mpsadbw=1586,
    CODE_FOR_sse4_1_packusdw=1588,
    CODE_FOR_sse4_1_pblendvb=1590,
    CODE_FOR_sse4_1_pblendw=1592,
    CODE_FOR_sse4_1_phminposuw=1593,
    CODE_FOR_sse4_1_extendv8qiv8hi2=1594,
    CODE_FOR_sse4_1_extendv4qiv4si2=1596,
    CODE_FOR_sse4_1_extendv2qiv2di2=1598,
    CODE_FOR_sse4_1_extendv4hiv4si2=1600,
    CODE_FOR_sse4_1_extendv2hiv2di2=1602,
    CODE_FOR_sse4_1_extendv2siv2di2=1604,
    CODE_FOR_sse4_1_zero_extendv8qiv8hi2=1606,
    CODE_FOR_sse4_1_zero_extendv4qiv4si2=1608,
    CODE_FOR_sse4_1_zero_extendv2qiv2di2=1610,
    CODE_FOR_sse4_1_zero_extendv4hiv4si2=1612,
    CODE_FOR_sse4_1_zero_extendv2hiv2di2=1614,
    CODE_FOR_sse4_1_zero_extendv2siv2di2=1616,
    CODE_FOR_avx_vtestps=1618,
    CODE_FOR_avx_vtestpd=1619,
    CODE_FOR_avx_vtestps256=1620,
    CODE_FOR_avx_vtestpd256=1621,
    CODE_FOR_avx_ptest256=1622,
    CODE_FOR_sse4_1_ptest=1623,
    CODE_FOR_avx_roundps256=1624,
    CODE_FOR_avx_roundpd256=1625,
    CODE_FOR_sse4_1_roundps=1626,
    CODE_FOR_sse4_1_roundpd=1627,
    CODE_FOR_sse4_1_roundss=1630,
    CODE_FOR_sse4_1_roundsd=1631,
    CODE_FOR_sse4_2_pcmpestr=1632,
    CODE_FOR_sse4_2_pcmpestri=1633,
    CODE_FOR_sse4_2_pcmpestrm=1634,
    CODE_FOR_sse4_2_pcmpestr_cconly=1635,
    CODE_FOR_sse4_2_pcmpistr=1636,
    CODE_FOR_sse4_2_pcmpistri=1637,
    CODE_FOR_sse4_2_pcmpistrm=1638,
    CODE_FOR_sse4_2_pcmpistr_cconly=1639,
    CODE_FOR_xop_pmacsww=1640,
    CODE_FOR_xop_pmacssww=1641,
    CODE_FOR_xop_pmacsdd=1642,
    CODE_FOR_xop_pmacssdd=1643,
    CODE_FOR_xop_pmacssdql=1644,
    CODE_FOR_xop_pmacssdqh=1645,
    CODE_FOR_xop_pmacsdql=1646,
    CODE_FOR_xop_mulv2div2di3_low=1647,
    CODE_FOR_xop_pmacsdqh=1648,
    CODE_FOR_xop_mulv2div2di3_high=1649,
    CODE_FOR_xop_pmacsswd=1650,
    CODE_FOR_xop_pmacswd=1651,
    CODE_FOR_xop_pmadcsswd=1652,
    CODE_FOR_xop_pmadcswd=1653,
    CODE_FOR_xop_pcmov_v16qi=1654,
    CODE_FOR_xop_pcmov_v8hi=1655,
    CODE_FOR_xop_pcmov_v4si=1656,
    CODE_FOR_xop_pcmov_v2di=1657,
    CODE_FOR_xop_pcmov_v4sf=1658,
    CODE_FOR_xop_pcmov_v2df=1659,
    CODE_FOR_xop_pcmov_v32qi256=1660,
    CODE_FOR_xop_pcmov_v16hi256=1661,
    CODE_FOR_xop_pcmov_v8si256=1662,
    CODE_FOR_xop_pcmov_v4di256=1663,
    CODE_FOR_xop_pcmov_v8sf256=1664,
    CODE_FOR_xop_pcmov_v4df256=1665,
    CODE_FOR_xop_phaddbw=1666,
    CODE_FOR_xop_phaddbd=1667,
    CODE_FOR_xop_phaddbq=1668,
    CODE_FOR_xop_phaddwd=1669,
    CODE_FOR_xop_phaddwq=1670,
    CODE_FOR_xop_phadddq=1671,
    CODE_FOR_xop_phaddubw=1672,
    CODE_FOR_xop_phaddubd=1673,
    CODE_FOR_xop_phaddubq=1674,
    CODE_FOR_xop_phadduwd=1675,
    CODE_FOR_xop_phadduwq=1676,
    CODE_FOR_xop_phaddudq=1677,
    CODE_FOR_xop_phsubbw=1678,
    CODE_FOR_xop_phsubwd=1679,
    CODE_FOR_xop_phsubdq=1680,
    CODE_FOR_xop_pperm=1681,
    CODE_FOR_xop_pperm_pack_v2di_v4si=1682,
    CODE_FOR_xop_pperm_pack_v4si_v8hi=1683,
    CODE_FOR_xop_pperm_pack_v8hi_v16qi=1684,
    CODE_FOR_xop_rotlv16qi3=1685,
    CODE_FOR_xop_rotlv8hi3=1686,
    CODE_FOR_xop_rotlv4si3=1687,
    CODE_FOR_xop_rotlv2di3=1688,
    CODE_FOR_xop_rotrv16qi3=1689,
    CODE_FOR_xop_rotrv8hi3=1690,
    CODE_FOR_xop_rotrv4si3=1691,
    CODE_FOR_xop_rotrv2di3=1692,
    CODE_FOR_xop_vrotlv16qi3=1693,
    CODE_FOR_xop_vrotlv8hi3=1694,
    CODE_FOR_xop_vrotlv4si3=1695,
    CODE_FOR_xop_vrotlv2di3=1696,
    CODE_FOR_xop_ashlv16qi3=1697,
    CODE_FOR_xop_ashlv8hi3=1698,
    CODE_FOR_xop_ashlv4si3=1699,
    CODE_FOR_xop_ashlv2di3=1700,
    CODE_FOR_xop_lshlv16qi3=1701,
    CODE_FOR_xop_lshlv8hi3=1702,
    CODE_FOR_xop_lshlv4si3=1703,
    CODE_FOR_xop_lshlv2di3=1704,
    CODE_FOR_xop_frczv4sf2=1705,
    CODE_FOR_xop_frczv2df2=1706,
    CODE_FOR_xop_vmfrczv4sf2=1707,
    CODE_FOR_xop_vmfrczv2df2=1708,
    CODE_FOR_xop_frczv8sf2256=1709,
    CODE_FOR_xop_frczv4df2256=1710,
    CODE_FOR_xop_maskcmpv16qi3=1711,
    CODE_FOR_xop_maskcmpv8hi3=1712,
    CODE_FOR_xop_maskcmpv4si3=1713,
    CODE_FOR_xop_maskcmpv2di3=1714,
    CODE_FOR_xop_maskcmp_unsv16qi3=1715,
    CODE_FOR_xop_maskcmp_unsv8hi3=1716,
    CODE_FOR_xop_maskcmp_unsv4si3=1717,
    CODE_FOR_xop_maskcmp_unsv2di3=1718,
    CODE_FOR_xop_maskcmp_uns2v16qi3=1719,
    CODE_FOR_xop_maskcmp_uns2v8hi3=1720,
    CODE_FOR_xop_maskcmp_uns2v4si3=1721,
    CODE_FOR_xop_maskcmp_uns2v2di3=1722,
    CODE_FOR_xop_pcom_tfv16qi3=1723,
    CODE_FOR_xop_pcom_tfv8hi3=1724,
    CODE_FOR_xop_pcom_tfv4si3=1725,
    CODE_FOR_xop_pcom_tfv2di3=1726,
    CODE_FOR_xop_vpermil2v4sf3=1727,
    CODE_FOR_xop_vpermil2v2df3=1728,
    CODE_FOR_xop_vpermil2v8sf3=1729,
    CODE_FOR_xop_vpermil2v4df3=1730,
    CODE_FOR_aesenc=1732,
    CODE_FOR_aesenclast=1734,
    CODE_FOR_aesdec=1736,
    CODE_FOR_aesdeclast=1738,
    CODE_FOR_aesimc=1739,
    CODE_FOR_aeskeygenassist=1740,
    CODE_FOR_pclmulqdq=1742,
    CODE_FOR_vec_dupv8si=1745,
    CODE_FOR_vec_dupv8sf=1746,
    CODE_FOR_vec_dupv4di=1747,
    CODE_FOR_vec_dupv4df=1748,
    CODE_FOR_avx_vbroadcastf128_v32qi=1749,
    CODE_FOR_avx_vbroadcastf128_v16hi=1750,
    CODE_FOR_avx_vbroadcastf128_v8si=1751,
    CODE_FOR_avx_vbroadcastf128_v4di=1752,
    CODE_FOR_avx_vbroadcastf128_v8sf=1753,
    CODE_FOR_avx_vbroadcastf128_v4df=1754,
    CODE_FOR_avx_vpermilvarv4sf3=1762,
    CODE_FOR_avx_vpermilvarv2df3=1763,
    CODE_FOR_avx_vpermilvarv8sf3=1764,
    CODE_FOR_avx_vpermilvarv4df3=1765,
    CODE_FOR_vec_set_lo_v4di=1772,
    CODE_FOR_vec_set_lo_v4df=1773,
    CODE_FOR_vec_set_hi_v4di=1774,
    CODE_FOR_vec_set_hi_v4df=1775,
    CODE_FOR_vec_set_lo_v8si=1776,
    CODE_FOR_vec_set_lo_v8sf=1777,
    CODE_FOR_vec_set_hi_v8si=1778,
    CODE_FOR_vec_set_hi_v8sf=1779,
    CODE_FOR_vec_set_lo_v16hi=1780,
    CODE_FOR_vec_set_hi_v16hi=1781,
    CODE_FOR_vec_set_lo_v32qi=1782,
    CODE_FOR_vec_set_hi_v32qi=1783,
    CODE_FOR_avx_maskloadps=1784,
    CODE_FOR_avx_maskloadpd=1785,
    CODE_FOR_avx_maskloadps256=1786,
    CODE_FOR_avx_maskloadpd256=1787,
    CODE_FOR_avx_maskstoreps=1788,
    CODE_FOR_avx_maskstorepd=1789,
    CODE_FOR_avx_maskstoreps256=1790,
    CODE_FOR_avx_maskstorepd256=1791,
    CODE_FOR_avx_si256_si=1792,
    CODE_FOR_avx_ps256_ps=1793,
    CODE_FOR_avx_pd256_pd=1794,
    CODE_FOR_avx_si_si256=1795,
    CODE_FOR_avx_ps_ps256=1796,
    CODE_FOR_avx_pd_pd256=1797,
    CODE_FOR_memory_barrier_nosse=1804,
    CODE_FOR_sync_double_compare_and_swapdi=1808,
    CODE_FOR_sync_old_addqi=1810,
    CODE_FOR_sync_old_addhi=1811,
    CODE_FOR_sync_old_addsi=1812,
    CODE_FOR_sync_lock_test_and_setqi=1813,
    CODE_FOR_sync_lock_test_and_sethi=1814,
    CODE_FOR_sync_lock_test_and_setsi=1815,
    CODE_FOR_sync_addqi=1816,
    CODE_FOR_sync_addhi=1817,
    CODE_FOR_sync_addsi=1818,
    CODE_FOR_sync_subqi=1819,
    CODE_FOR_sync_subhi=1820,
    CODE_FOR_sync_subsi=1821,
    CODE_FOR_sync_andqi=1822,
    CODE_FOR_sync_iorqi=1823,
    CODE_FOR_sync_xorqi=1824,
    CODE_FOR_sync_andhi=1825,
    CODE_FOR_sync_iorhi=1826,
    CODE_FOR_sync_xorhi=1827,
    CODE_FOR_sync_andsi=1828,
    CODE_FOR_sync_iorsi=1829,
    CODE_FOR_sync_xorsi=1830,
    CODE_FOR_cbranchqi4=1831,
    CODE_FOR_cbranchhi4=1832,
    CODE_FOR_cbranchsi4=1833,
    CODE_FOR_cbranchdi4=1834,
    CODE_FOR_cstoreqi4=1835,
    CODE_FOR_cstorehi4=1836,
    CODE_FOR_cstoresi4=1837,
    CODE_FOR_cmpsi_1=1838,
    CODE_FOR_cmpqi_ext_3=1839,
    CODE_FOR_cbranchxf4=1840,
    CODE_FOR_cstorexf4=1841,
    CODE_FOR_cbranchsf4=1842,
    CODE_FOR_cbranchdf4=1843,
    CODE_FOR_cstoresf4=1844,
    CODE_FOR_cstoredf4=1845,
    CODE_FOR_cbranchcc4=1846,
    CODE_FOR_cstorecc4=1847,
    CODE_FOR_movsi=1855,
    CODE_FOR_movhi=1856,
    CODE_FOR_movstricthi=1857,
    CODE_FOR_movqi=1858,
    CODE_FOR_movstrictqi=1859,
    CODE_FOR_movdi=1860,
    CODE_FOR_movoi=1863,
    CODE_FOR_movti=1864,
    CODE_FOR_movcdi=1866,
    CODE_FOR_movsf=1867,
    CODE_FOR_movdf=1870,
    CODE_FOR_movxf=1874,
    CODE_FOR_movtf=1877,
    CODE_FOR_zero_extendhisi2=1887,
    CODE_FOR_zero_extendqihi2=1889,
    CODE_FOR_zero_extendqisi2=1893,
    CODE_FOR_zero_extendsidi2=1897,
    CODE_FOR_extendsidi2=1900,
    CODE_FOR_extendsfdf2=1907,
    CODE_FOR_extendsfxf2=1909,
    CODE_FOR_extenddfxf2=1910,
    CODE_FOR_truncdfsf2=1911,
    CODE_FOR_truncdfsf2_with_temp=1913,
    CODE_FOR_truncxfsf2=1915,
    CODE_FOR_truncxfdf2=1916,
    CODE_FOR_fix_truncxfdi2=1921,
    CODE_FOR_fix_truncsfdi2=1922,
    CODE_FOR_fix_truncdfdi2=1923,
    CODE_FOR_fix_truncxfsi2=1924,
    CODE_FOR_fix_truncsfsi2=1925,
    CODE_FOR_fix_truncdfsi2=1926,
    CODE_FOR_fix_truncsfhi2=1927,
    CODE_FOR_fix_truncdfhi2=1928,
    CODE_FOR_fix_truncxfhi2=1929,
    CODE_FOR_fixuns_truncsfsi2=1930,
    CODE_FOR_fixuns_truncdfsi2=1931,
    CODE_FOR_fixuns_truncsfhi2=1934,
    CODE_FOR_fixuns_truncdfhi2=1935,
    CODE_FOR_floathisf2=1962,
    CODE_FOR_floathidf2=1963,
    CODE_FOR_floathixf2=1964,
    CODE_FOR_floatsisf2=1974,
    CODE_FOR_floatdisf2=1975,
    CODE_FOR_floatsidf2=1976,
    CODE_FOR_floatdidf2=1977,
    CODE_FOR_floatsixf2=1978,
    CODE_FOR_floatdixf2=1979,
    CODE_FOR_floatunssisf2=2028,
    CODE_FOR_floatunssidf2=2029,
    CODE_FOR_floatunssixf2=2030,
    CODE_FOR_addqi3=2031,
    CODE_FOR_addhi3=2032,
    CODE_FOR_addsi3=2033,
    CODE_FOR_adddi3=2034,
    CODE_FOR_subqi3=2040,
    CODE_FOR_subhi3=2041,
    CODE_FOR_subsi3=2042,
    CODE_FOR_subdi3=2043,
    CODE_FOR_addqi3_carry=2045,
    CODE_FOR_subqi3_carry=2046,
    CODE_FOR_addhi3_carry=2047,
    CODE_FOR_subhi3_carry=2048,
    CODE_FOR_addsi3_carry=2049,
    CODE_FOR_subsi3_carry=2050,
    CODE_FOR_adddi3_carry=2051,
    CODE_FOR_subdi3_carry=2052,
    CODE_FOR_addxf3=2053,
    CODE_FOR_subxf3=2054,
    CODE_FOR_addsf3=2055,
    CODE_FOR_subsf3=2056,
    CODE_FOR_adddf3=2057,
    CODE_FOR_subdf3=2058,
    CODE_FOR_mulhi3=2059,
    CODE_FOR_mulsi3=2060,
    CODE_FOR_mulqi3=2061,
    CODE_FOR_mulsidi3=2062,
    CODE_FOR_umulsidi3=2063,
    CODE_FOR_mulqihi3=2064,
    CODE_FOR_umulqihi3=2065,
    CODE_FOR_smulsi3_highpart=2066,
    CODE_FOR_umulsi3_highpart=2067,
    CODE_FOR_mulxf3=2068,
    CODE_FOR_mulsf3=2069,
    CODE_FOR_muldf3=2070,
    CODE_FOR_divxf3=2071,
    CODE_FOR_divdf3=2072,
    CODE_FOR_divsf3=2073,
    CODE_FOR_divmodhi4=2074,
    CODE_FOR_divmodsi4=2075,
    CODE_FOR_udivmodhi4=2078,
    CODE_FOR_udivmodsi4=2079,
    CODE_FOR_testsi_ccno_1=2082,
    CODE_FOR_testqi_ccz_1=2083,
    CODE_FOR_testqi_ext_ccno_0=2084,
    CODE_FOR_andqi3=2088,
    CODE_FOR_andhi3=2089,
    CODE_FOR_andsi3=2090,
    CODE_FOR_iorqi3=2096,
    CODE_FOR_xorqi3=2097,
    CODE_FOR_iorhi3=2098,
    CODE_FOR_xorhi3=2099,
    CODE_FOR_iorsi3=2100,
    CODE_FOR_xorsi3=2101,
    CODE_FOR_xorqi_cc_ext_1=2106,
    CODE_FOR_negqi2=2107,
    CODE_FOR_neghi2=2108,
    CODE_FOR_negsi2=2109,
    CODE_FOR_negdi2=2110,
    CODE_FOR_abssf2=2112,
    CODE_FOR_negsf2=2113,
    CODE_FOR_absdf2=2114,
    CODE_FOR_negdf2=2115,
    CODE_FOR_absxf2=2116,
    CODE_FOR_negxf2=2117,
    CODE_FOR_abstf2=2118,
    CODE_FOR_negtf2=2119,
    CODE_FOR_copysignsf3=2125,
    CODE_FOR_copysigndf3=2126,
    CODE_FOR_copysigntf3=2127,
    CODE_FOR_one_cmplqi2=2134,
    CODE_FOR_one_cmplhi2=2135,
    CODE_FOR_one_cmplsi2=2136,
    CODE_FOR_ashldi3=2142,
    CODE_FOR_x86_shift_adj_1=2145,
    CODE_FOR_x86_shift_adj_2=2146,
    CODE_FOR_ashlsi3=2147,
    CODE_FOR_ashlhi3=2150,
    CODE_FOR_ashlqi3=2151,
    CODE_FOR_ashrdi3=2152,
    CODE_FOR_x86_64_shift_adj_3=2153,
    CODE_FOR_x86_shift_adj_3=2156,
    CODE_FOR_ashrsi3_31=2157,
    CODE_FOR_ashrsi3=2158,
    CODE_FOR_ashrhi3=2159,
    CODE_FOR_ashrqi3=2160,
    CODE_FOR_lshrdi3=2161,
    CODE_FOR_lshrsi3=2164,
    CODE_FOR_lshrhi3=2165,
    CODE_FOR_lshrqi3=2166,
    CODE_FOR_rotldi3=2167,
    CODE_FOR_rotlsi3=2169,
    CODE_FOR_rotlhi3=2170,
    CODE_FOR_rotlqi3=2172,
    CODE_FOR_rotrdi3=2173,
    CODE_FOR_rotrsi3=2175,
    CODE_FOR_rotrhi3=2176,
    CODE_FOR_rotrqi3=2178,
    CODE_FOR_extv=2179,
    CODE_FOR_extzv=2180,
    CODE_FOR_insv=2181,
    CODE_FOR_indirect_jump=2200,
    CODE_FOR_tablejump=2201,
    CODE_FOR_call_pop=2204,
    CODE_FOR_call=2205,
    CODE_FOR_sibcall=2206,
    CODE_FOR_call_value_pop=2207,
    CODE_FOR_call_value=2208,
    CODE_FOR_sibcall_value=2209,
    CODE_FOR_untyped_call=2210,
    CODE_FOR_memory_blockage=2211,
    CODE_FOR_return=2212,
    CODE_FOR_prologue=2213,
    CODE_FOR_epilogue=2214,
    CODE_FOR_sibcall_epilogue=2215,
    CODE_FOR_eh_return=2216,
    CODE_FOR_ffssi2=2218,
    CODE_FOR_ffs_cmove=2219,
    CODE_FOR_clzsi2=2221,
    CODE_FOR_bswapsi2=2222,
    CODE_FOR_clzhi2=2223,
    CODE_FOR_paritydi2=2224,
    CODE_FOR_paritysi2=2226,
    CODE_FOR_tls_global_dynamic_32=2228,
    CODE_FOR_tls_global_dynamic_64=2229,
    CODE_FOR_tls_local_dynamic_base_32=2230,
    CODE_FOR_tls_local_dynamic_base_64=2231,
    CODE_FOR_tls_dynamic_gnu2_32=2233,
    CODE_FOR_rsqrtsf2=2240,
    CODE_FOR_sqrtsf2=2241,
    CODE_FOR_sqrtdf2=2242,
    CODE_FOR_fmodxf3=2243,
    CODE_FOR_fmodsf3=2244,
    CODE_FOR_fmoddf3=2245,
    CODE_FOR_remainderxf3=2246,
    CODE_FOR_remaindersf3=2247,
    CODE_FOR_remainderdf3=2248,
    CODE_FOR_sincossf3=2255,
    CODE_FOR_sincosdf3=2256,
    CODE_FOR_tanxf2=2257,
    CODE_FOR_tansf2=2258,
    CODE_FOR_tandf2=2259,
    CODE_FOR_atan2xf3=2260,
    CODE_FOR_atan2sf3=2261,
    CODE_FOR_atan2df3=2262,
    CODE_FOR_atanxf2=2263,
    CODE_FOR_atansf2=2264,
    CODE_FOR_atandf2=2265,
    CODE_FOR_asinxf2=2266,
    CODE_FOR_asinsf2=2267,
    CODE_FOR_asindf2=2268,
    CODE_FOR_acosxf2=2269,
    CODE_FOR_acossf2=2270,
    CODE_FOR_acosdf2=2271,
    CODE_FOR_logxf2=2272,
    CODE_FOR_logsf2=2273,
    CODE_FOR_logdf2=2274,
    CODE_FOR_log10xf2=2275,
    CODE_FOR_log10sf2=2276,
    CODE_FOR_log10df2=2277,
    CODE_FOR_log2xf2=2278,
    CODE_FOR_log2sf2=2279,
    CODE_FOR_log2df2=2280,
    CODE_FOR_log1pxf2=2281,
    CODE_FOR_log1psf2=2282,
    CODE_FOR_log1pdf2=2283,
    CODE_FOR_logbxf2=2284,
    CODE_FOR_logbsf2=2285,
    CODE_FOR_logbdf2=2286,
    CODE_FOR_ilogbxf2=2287,
    CODE_FOR_ilogbsf2=2288,
    CODE_FOR_ilogbdf2=2289,
    CODE_FOR_expNcorexf3=2290,
    CODE_FOR_expxf2=2291,
    CODE_FOR_expsf2=2292,
    CODE_FOR_expdf2=2293,
    CODE_FOR_exp10xf2=2294,
    CODE_FOR_exp10sf2=2295,
    CODE_FOR_exp10df2=2296,
    CODE_FOR_exp2xf2=2297,
    CODE_FOR_exp2sf2=2298,
    CODE_FOR_exp2df2=2299,
    CODE_FOR_expm1xf2=2300,
    CODE_FOR_expm1sf2=2301,
    CODE_FOR_expm1df2=2302,
    CODE_FOR_ldexpxf3=2303,
    CODE_FOR_ldexpsf3=2304,
    CODE_FOR_ldexpdf3=2305,
    CODE_FOR_scalbxf3=2306,
    CODE_FOR_scalbsf3=2307,
    CODE_FOR_scalbdf3=2308,
    CODE_FOR_significandxf2=2309,
    CODE_FOR_significandsf2=2310,
    CODE_FOR_significanddf2=2311,
    CODE_FOR_rintsf2=2312,
    CODE_FOR_rintdf2=2313,
    CODE_FOR_roundsf2=2314,
    CODE_FOR_rounddf2=2315,
    CODE_FOR_lrintxfhi2=2325,
    CODE_FOR_lrintxfsi2=2326,
    CODE_FOR_lrintxfdi2=2327,
    CODE_FOR_lrintsfsi2=2328,
    CODE_FOR_lrintdfsi2=2329,
    CODE_FOR_lroundsfsi2=2330,
    CODE_FOR_lrounddfsi2=2331,
    CODE_FOR_floorxf2=2333,
    CODE_FOR_floorsf2=2334,
    CODE_FOR_floordf2=2335,
    CODE_FOR_lfloorxfhi2=2345,
    CODE_FOR_lfloorxfsi2=2346,
    CODE_FOR_lfloorxfdi2=2347,
    CODE_FOR_lfloorsfsi2=2348,
    CODE_FOR_lfloordfsi2=2349,
    CODE_FOR_ceilxf2=2351,
    CODE_FOR_ceilsf2=2352,
    CODE_FOR_ceildf2=2353,
    CODE_FOR_lceilxfhi2=2363,
    CODE_FOR_lceilxfsi2=2364,
    CODE_FOR_lceilxfdi2=2365,
    CODE_FOR_lceilsfsi2=2366,
    CODE_FOR_lceildfsi2=2367,
    CODE_FOR_btruncxf2=2369,
    CODE_FOR_btruncsf2=2370,
    CODE_FOR_btruncdf2=2371,
    CODE_FOR_nearbyintxf2=2373,
    CODE_FOR_nearbyintsf2=2374,
    CODE_FOR_nearbyintdf2=2375,
    CODE_FOR_isinfxf2=2378,
    CODE_FOR_isinfsf2=2379,
    CODE_FOR_isinfdf2=2380,
    CODE_FOR_signbitsf2=2381,
    CODE_FOR_signbitdf2=2382,
    CODE_FOR_signbitxf2=2383,
    CODE_FOR_movmemsi=2384,
    CODE_FOR_strmov=2385,
    CODE_FOR_strmov_singleop=2386,
    CODE_FOR_rep_mov=2387,
    CODE_FOR_setmemsi=2388,
    CODE_FOR_strset=2389,
    CODE_FOR_strset_singleop=2390,
    CODE_FOR_rep_stos=2391,
    CODE_FOR_cmpstrnsi=2392,
    CODE_FOR_cmpintqi=2393,
    CODE_FOR_cmpstrnqi_nz_1=2394,
    CODE_FOR_cmpstrnqi_1=2395,
    CODE_FOR_strlensi=2396,
    CODE_FOR_strlendi=2397,
    CODE_FOR_strlenqi_1=2398,
    CODE_FOR_movqicc=2401,
    CODE_FOR_movhicc=2402,
    CODE_FOR_movsicc=2403,
    CODE_FOR_x86_movsicc_0_m1=2404,
    CODE_FOR_movsfcc=2406,
    CODE_FOR_movdfcc=2407,
    CODE_FOR_movxfcc=2408,
    CODE_FOR_addqicc=2411,
    CODE_FOR_addhicc=2412,
    CODE_FOR_addsicc=2413,
    CODE_FOR_allocate_stack=2414,
    CODE_FOR_probe_stack=2415,
    CODE_FOR_builtin_setjmp_receiver=2416,
    CODE_FOR_prefetch=2486,
    CODE_FOR_stack_protect_set=2487,
    CODE_FOR_stack_protect_test=2488,
    CODE_FOR_rdpmc=2489,
    CODE_FOR_rdtsc=2490,
    CODE_FOR_rdtscp=2491,
    CODE_FOR_lwp_llwpcb=2492,
    CODE_FOR_lwp_slwpcb=2493,
    CODE_FOR_lwp_lwpvalsi3=2494,
    CODE_FOR_lwp_lwpinssi3=2495,
    CODE_FOR_movv8qi=2496,
    CODE_FOR_movv4hi=2497,
    CODE_FOR_movv2si=2498,
    CODE_FOR_movv1di=2499,
    CODE_FOR_movv2sf=2500,
    CODE_FOR_pushv8qi1=2506,
    CODE_FOR_pushv4hi1=2507,
    CODE_FOR_pushv2si1=2508,
    CODE_FOR_pushv1di1=2509,
    CODE_FOR_pushv2sf1=2510,
    CODE_FOR_movmisalignv8qi=2511,
    CODE_FOR_movmisalignv4hi=2512,
    CODE_FOR_movmisalignv2si=2513,
    CODE_FOR_movmisalignv1di=2514,
    CODE_FOR_movmisalignv2sf=2515,
    CODE_FOR_mmx_addv2sf3=2516,
    CODE_FOR_mmx_subv2sf3=2517,
    CODE_FOR_mmx_subrv2sf3=2518,
    CODE_FOR_mmx_mulv2sf3=2519,
    CODE_FOR_mmx_smaxv2sf3=2520,
    CODE_FOR_mmx_sminv2sf3=2521,
    CODE_FOR_mmx_eqv2sf3=2522,
    CODE_FOR_vec_setv2sf=2523,
    CODE_FOR_vec_extractv2sf=2526,
    CODE_FOR_vec_initv2sf=2527,
    CODE_FOR_mmx_addv8qi3=2528,
    CODE_FOR_mmx_subv8qi3=2529,
    CODE_FOR_mmx_addv4hi3=2530,
    CODE_FOR_mmx_subv4hi3=2531,
    CODE_FOR_mmx_addv2si3=2532,
    CODE_FOR_mmx_subv2si3=2533,
    CODE_FOR_mmx_addv1di3=2534,
    CODE_FOR_mmx_subv1di3=2535,
    CODE_FOR_mmx_ssaddv8qi3=2536,
    CODE_FOR_mmx_usaddv8qi3=2537,
    CODE_FOR_mmx_sssubv8qi3=2538,
    CODE_FOR_mmx_ussubv8qi3=2539,
    CODE_FOR_mmx_ssaddv4hi3=2540,
    CODE_FOR_mmx_usaddv4hi3=2541,
    CODE_FOR_mmx_sssubv4hi3=2542,
    CODE_FOR_mmx_ussubv4hi3=2543,
    CODE_FOR_mmx_mulv4hi3=2544,
    CODE_FOR_mmx_smulv4hi3_highpart=2545,
    CODE_FOR_mmx_umulv4hi3_highpart=2546,
    CODE_FOR_mmx_pmaddwd=2547,
    CODE_FOR_mmx_pmulhrwv4hi3=2548,
    CODE_FOR_sse2_umulv1siv1di3=2549,
    CODE_FOR_mmx_smaxv4hi3=2550,
    CODE_FOR_mmx_sminv4hi3=2551,
    CODE_FOR_mmx_umaxv8qi3=2552,
    CODE_FOR_mmx_uminv8qi3=2553,
    CODE_FOR_mmx_eqv8qi3=2554,
    CODE_FOR_mmx_eqv4hi3=2555,
    CODE_FOR_mmx_eqv2si3=2556,
    CODE_FOR_mmx_andv8qi3=2557,
    CODE_FOR_mmx_iorv8qi3=2558,
    CODE_FOR_mmx_xorv8qi3=2559,
    CODE_FOR_mmx_andv4hi3=2560,
    CODE_FOR_mmx_iorv4hi3=2561,
    CODE_FOR_mmx_xorv4hi3=2562,
    CODE_FOR_mmx_andv2si3=2563,
    CODE_FOR_mmx_iorv2si3=2564,
    CODE_FOR_mmx_xorv2si3=2565,
    CODE_FOR_mmx_pinsrw=2566,
    CODE_FOR_mmx_pshufw=2567,
    CODE_FOR_vec_setv2si=2568,
    CODE_FOR_vec_extractv2si=2571,
    CODE_FOR_vec_initv2si=2572,
    CODE_FOR_vec_setv4hi=2573,
    CODE_FOR_vec_extractv4hi=2574,
    CODE_FOR_vec_initv4hi=2575,
    CODE_FOR_vec_setv8qi=2576,
    CODE_FOR_vec_extractv8qi=2577,
    CODE_FOR_vec_initv8qi=2578,
    CODE_FOR_mmx_uavgv8qi3=2579,
    CODE_FOR_mmx_uavgv4hi3=2580,
    CODE_FOR_mmx_maskmovq=2581,
    CODE_FOR_mmx_emms=2582,
    CODE_FOR_mmx_femms=2583,
    CODE_FOR_movv32qi=2584,
    CODE_FOR_movv16hi=2585,
    CODE_FOR_movv8si=2586,
    CODE_FOR_movv4di=2587,
    CODE_FOR_movv8sf=2588,
    CODE_FOR_movv4df=2589,
    CODE_FOR_movv16qi=2590,
    CODE_FOR_movv8hi=2591,
    CODE_FOR_movv4si=2592,
    CODE_FOR_movv2di=2593,
    CODE_FOR_movv1ti=2594,
    CODE_FOR_movv4sf=2595,
    CODE_FOR_movv2df=2596,
    CODE_FOR_pushv32qi1=2600,
    CODE_FOR_pushv16hi1=2601,
    CODE_FOR_pushv8si1=2602,
    CODE_FOR_pushv4di1=2603,
    CODE_FOR_pushv8sf1=2604,
    CODE_FOR_pushv4df1=2605,
    CODE_FOR_pushv16qi1=2606,
    CODE_FOR_pushv8hi1=2607,
    CODE_FOR_pushv4si1=2608,
    CODE_FOR_pushv2di1=2609,
    CODE_FOR_pushv1ti1=2610,
    CODE_FOR_pushv4sf1=2611,
    CODE_FOR_pushv2df1=2612,
    CODE_FOR_movmisalignv32qi=2613,
    CODE_FOR_movmisalignv16hi=2614,
    CODE_FOR_movmisalignv8si=2615,
    CODE_FOR_movmisalignv4di=2616,
    CODE_FOR_movmisalignv8sf=2617,
    CODE_FOR_movmisalignv4df=2618,
    CODE_FOR_movmisalignv16qi=2619,
    CODE_FOR_movmisalignv8hi=2620,
    CODE_FOR_movmisalignv4si=2621,
    CODE_FOR_movmisalignv2di=2622,
    CODE_FOR_movmisalignv1ti=2623,
    CODE_FOR_movmisalignv4sf=2624,
    CODE_FOR_movmisalignv2df=2625,
    CODE_FOR_storentv4sf=2626,
    CODE_FOR_storentv2df=2627,
    CODE_FOR_storentsf=2628,
    CODE_FOR_storentdf=2629,
    CODE_FOR_storentv2di=2630,
    CODE_FOR_storentsi=2631,
    CODE_FOR_absv4sf2=2632,
    CODE_FOR_negv4sf2=2633,
    CODE_FOR_absv2df2=2634,
    CODE_FOR_negv2df2=2635,
    CODE_FOR_addv8sf3=2636,
    CODE_FOR_subv8sf3=2637,
    CODE_FOR_addv4df3=2638,
    CODE_FOR_subv4df3=2639,
    CODE_FOR_addv4sf3=2640,
    CODE_FOR_subv4sf3=2641,
    CODE_FOR_addv2df3=2642,
    CODE_FOR_subv2df3=2643,
    CODE_FOR_mulv8sf3=2644,
    CODE_FOR_mulv4df3=2645,
    CODE_FOR_mulv4sf3=2646,
    CODE_FOR_mulv2df3=2647,
    CODE_FOR_divv8sf3=2648,
    CODE_FOR_divv4df3=2649,
    CODE_FOR_divv4sf3=2650,
    CODE_FOR_divv2df3=2651,
    CODE_FOR_sqrtv8sf2=2652,
    CODE_FOR_sqrtv4sf2=2653,
    CODE_FOR_rsqrtv8sf2=2654,
    CODE_FOR_rsqrtv4sf2=2655,
    CODE_FOR_smaxv8sf3=2656,
    CODE_FOR_sminv8sf3=2657,
    CODE_FOR_smaxv4df3=2658,
    CODE_FOR_sminv4df3=2659,
    CODE_FOR_smaxv4sf3=2660,
    CODE_FOR_sminv4sf3=2661,
    CODE_FOR_smaxv2df3=2662,
    CODE_FOR_sminv2df3=2663,
    CODE_FOR_reduc_splus_v4sf=2664,
    CODE_FOR_reduc_splus_v2df=2665,
    CODE_FOR_reduc_smax_v4sf=2666,
    CODE_FOR_reduc_smin_v4sf=2667,
    CODE_FOR_vcondv4sf=2668,
    CODE_FOR_vcondv2df=2669,
    CODE_FOR_andv8sf3=2670,
    CODE_FOR_iorv8sf3=2671,
    CODE_FOR_xorv8sf3=2672,
    CODE_FOR_andv4df3=2673,
    CODE_FOR_iorv4df3=2674,
    CODE_FOR_xorv4df3=2675,
    CODE_FOR_andv4sf3=2676,
    CODE_FOR_iorv4sf3=2677,
    CODE_FOR_xorv4sf3=2678,
    CODE_FOR_andv2df3=2679,
    CODE_FOR_iorv2df3=2680,
    CODE_FOR_xorv2df3=2681,
    CODE_FOR_copysignv4sf3=2682,
    CODE_FOR_copysignv2df3=2683,
    CODE_FOR_sse2_cvtudq2ps=2684,
    CODE_FOR_sse2_cvtpd2dq=2685,
    CODE_FOR_sse2_cvttpd2dq=2686,
    CODE_FOR_sse2_cvtpd2ps=2687,
    CODE_FOR_vec_unpacks_hi_v4sf=2688,
    CODE_FOR_vec_unpacks_lo_v4sf=2689,
    CODE_FOR_vec_unpacks_float_hi_v8hi=2690,
    CODE_FOR_vec_unpacks_float_lo_v8hi=2691,
    CODE_FOR_vec_unpacku_float_hi_v8hi=2692,
    CODE_FOR_vec_unpacku_float_lo_v8hi=2693,
    CODE_FOR_vec_unpacks_float_hi_v4si=2694,
    CODE_FOR_vec_unpacks_float_lo_v4si=2695,
    CODE_FOR_vec_unpacku_float_hi_v4si=2696,
    CODE_FOR_vec_unpacku_float_lo_v4si=2697,
    CODE_FOR_vec_pack_trunc_v2df=2698,
    CODE_FOR_vec_pack_sfix_trunc_v2df=2699,
    CODE_FOR_vec_pack_sfix_v2df=2700,
    CODE_FOR_sse_movhlps_exp=2701,
    CODE_FOR_sse_movlhps_exp=2702,
    CODE_FOR_avx_shufps256=2703,
    CODE_FOR_sse_shufps=2704,
    CODE_FOR_sse_loadhps_exp=2705,
    CODE_FOR_sse_loadlps_exp=2706,
    CODE_FOR_vec_dupv4sf=2707,
    CODE_FOR_vec_initv16qi=2708,
    CODE_FOR_vec_initv8hi=2709,
    CODE_FOR_vec_initv4si=2710,
    CODE_FOR_vec_initv2di=2711,
    CODE_FOR_vec_initv4sf=2712,
    CODE_FOR_vec_initv2df=2713,
    CODE_FOR_vec_setv16qi=2715,
    CODE_FOR_vec_setv8hi=2716,
    CODE_FOR_vec_setv4si=2717,
    CODE_FOR_vec_setv2di=2718,
    CODE_FOR_vec_setv4sf=2719,
    CODE_FOR_vec_setv2df=2720,
    CODE_FOR_avx_vextractf128v32qi=2722,
    CODE_FOR_avx_vextractf128v16hi=2723,
    CODE_FOR_avx_vextractf128v8si=2724,
    CODE_FOR_avx_vextractf128v4di=2725,
    CODE_FOR_avx_vextractf128v8sf=2726,
    CODE_FOR_avx_vextractf128v4df=2727,
    CODE_FOR_vec_extractv16qi=2729,
    CODE_FOR_vec_extractv8hi=2730,
    CODE_FOR_vec_extractv4si=2731,
    CODE_FOR_vec_extractv2di=2732,
    CODE_FOR_vec_extractv4sf=2733,
    CODE_FOR_vec_extractv2df=2734,
    CODE_FOR_vec_interleave_highv2df=2735,
    CODE_FOR_avx_movddup256=2736,
    CODE_FOR_avx_unpcklpd256=2737,
    CODE_FOR_vec_interleave_lowv2df=2738,
    CODE_FOR_avx_shufpd256=2741,
    CODE_FOR_sse2_shufpd=2742,
    CODE_FOR_vec_extract_evenv4sf=2743,
    CODE_FOR_vec_extract_evenv2df=2744,
    CODE_FOR_vec_extract_evenv2di=2745,
    CODE_FOR_vec_extract_evenv4si=2746,
    CODE_FOR_vec_extract_evenv8hi=2747,
    CODE_FOR_vec_extract_evenv16qi=2748,
    CODE_FOR_vec_extract_evenv4df=2749,
    CODE_FOR_vec_extract_evenv8sf=2750,
    CODE_FOR_vec_extract_oddv4sf=2751,
    CODE_FOR_vec_extract_oddv2df=2752,
    CODE_FOR_vec_extract_oddv2di=2753,
    CODE_FOR_vec_extract_oddv4si=2754,
    CODE_FOR_vec_extract_oddv8hi=2755,
    CODE_FOR_vec_extract_oddv16qi=2756,
    CODE_FOR_vec_extract_oddv4df=2757,
    CODE_FOR_vec_extract_oddv8sf=2758,
    CODE_FOR_sse2_loadhpd_exp=2761,
    CODE_FOR_sse2_loadlpd_exp=2763,
    CODE_FOR_negv16qi2=2765,
    CODE_FOR_negv8hi2=2766,
    CODE_FOR_negv4si2=2767,
    CODE_FOR_negv2di2=2768,
    CODE_FOR_addv16qi3=2769,
    CODE_FOR_subv16qi3=2770,
    CODE_FOR_addv8hi3=2771,
    CODE_FOR_subv8hi3=2772,
    CODE_FOR_addv4si3=2773,
    CODE_FOR_subv4si3=2774,
    CODE_FOR_addv2di3=2775,
    CODE_FOR_subv2di3=2776,
    CODE_FOR_sse2_ssaddv16qi3=2777,
    CODE_FOR_sse2_usaddv16qi3=2778,
    CODE_FOR_sse2_sssubv16qi3=2779,
    CODE_FOR_sse2_ussubv16qi3=2780,
    CODE_FOR_sse2_ssaddv8hi3=2781,
    CODE_FOR_sse2_usaddv8hi3=2782,
    CODE_FOR_sse2_sssubv8hi3=2783,
    CODE_FOR_sse2_ussubv8hi3=2784,
    CODE_FOR_mulv8hi3=2786,
    CODE_FOR_smulv8hi3_highpart=2787,
    CODE_FOR_umulv8hi3_highpart=2788,
    CODE_FOR_sse2_umulv2siv2di3=2789,
    CODE_FOR_sse4_1_mulv2siv2di3=2790,
    CODE_FOR_sse2_pmaddwd=2791,
    CODE_FOR_mulv4si3=2792,
    CODE_FOR_vec_widen_smult_hi_v8hi=2795,
    CODE_FOR_vec_widen_smult_lo_v8hi=2796,
    CODE_FOR_vec_widen_umult_hi_v8hi=2797,
    CODE_FOR_vec_widen_umult_lo_v8hi=2798,
    CODE_FOR_vec_widen_smult_hi_v4si=2799,
    CODE_FOR_vec_widen_smult_lo_v4si=2800,
    CODE_FOR_vec_widen_umult_hi_v4si=2801,
    CODE_FOR_vec_widen_umult_lo_v4si=2802,
    CODE_FOR_sdot_prodv8hi=2803,
    CODE_FOR_udot_prodv4si=2804,
    CODE_FOR_vec_shl_v16qi=2805,
    CODE_FOR_vec_shl_v8hi=2806,
    CODE_FOR_vec_shl_v4si=2807,
    CODE_FOR_vec_shl_v2di=2808,
    CODE_FOR_vec_shr_v16qi=2809,
    CODE_FOR_vec_shr_v8hi=2810,
    CODE_FOR_vec_shr_v4si=2811,
    CODE_FOR_vec_shr_v2di=2812,
    CODE_FOR_umaxv16qi3=2813,
    CODE_FOR_uminv16qi3=2814,
    CODE_FOR_smaxv8hi3=2815,
    CODE_FOR_sminv8hi3=2816,
    CODE_FOR_umaxv8hi3=2817,
    CODE_FOR_smaxv16qi3=2818,
    CODE_FOR_smaxv4si3=2819,
    CODE_FOR_smaxv2di3=2820,
    CODE_FOR_umaxv4si3=2821,
    CODE_FOR_umaxv2di3=2822,
    CODE_FOR_sminv16qi3=2823,
    CODE_FOR_sminv4si3=2824,
    CODE_FOR_sminv2di3=2825,
    CODE_FOR_uminv8hi3=2826,
    CODE_FOR_uminv4si3=2827,
    CODE_FOR_uminv2di3=2828,
    CODE_FOR_sse2_eqv16qi3=2829,
    CODE_FOR_sse2_eqv8hi3=2830,
    CODE_FOR_sse2_eqv4si3=2831,
    CODE_FOR_sse4_1_eqv2di3=2832,
    CODE_FOR_vcondv16qi=2833,
    CODE_FOR_vcondv8hi=2834,
    CODE_FOR_vcondv4si=2835,
    CODE_FOR_vcondv2di=2836,
    CODE_FOR_vconduv16qi=2837,
    CODE_FOR_vconduv8hi=2838,
    CODE_FOR_vconduv4si=2839,
    CODE_FOR_vconduv2di=2840,
    CODE_FOR_one_cmplv16qi2=2841,
    CODE_FOR_one_cmplv8hi2=2842,
    CODE_FOR_one_cmplv4si2=2843,
    CODE_FOR_one_cmplv2di2=2844,
    CODE_FOR_andv16qi3=2845,
    CODE_FOR_iorv16qi3=2846,
    CODE_FOR_xorv16qi3=2847,
    CODE_FOR_andv8hi3=2848,
    CODE_FOR_iorv8hi3=2849,
    CODE_FOR_xorv8hi3=2850,
    CODE_FOR_andv4si3=2851,
    CODE_FOR_iorv4si3=2852,
    CODE_FOR_xorv4si3=2853,
    CODE_FOR_andv2di3=2854,
    CODE_FOR_iorv2di3=2855,
    CODE_FOR_xorv2di3=2856,
    CODE_FOR_andtf3=2857,
    CODE_FOR_iortf3=2858,
    CODE_FOR_xortf3=2859,
    CODE_FOR_vec_pack_trunc_v8hi=2860,
    CODE_FOR_vec_pack_trunc_v4si=2861,
    CODE_FOR_vec_pack_trunc_v2di=2862,
    CODE_FOR_sse2_pshufd=2863,
    CODE_FOR_sse2_pshuflw=2864,
    CODE_FOR_sse2_pshufhw=2865,
    CODE_FOR_sse2_loadd=2866,
    CODE_FOR_sse_storeq=2869,
    CODE_FOR_vec_unpacku_hi_v16qi=2871,
    CODE_FOR_vec_unpacks_hi_v16qi=2872,
    CODE_FOR_vec_unpacku_lo_v16qi=2873,
    CODE_FOR_vec_unpacks_lo_v16qi=2874,
    CODE_FOR_vec_unpacku_hi_v8hi=2875,
    CODE_FOR_vec_unpacks_hi_v8hi=2876,
    CODE_FOR_vec_unpacku_lo_v8hi=2877,
    CODE_FOR_vec_unpacks_lo_v8hi=2878,
    CODE_FOR_vec_unpacku_hi_v4si=2879,
    CODE_FOR_vec_unpacks_hi_v4si=2880,
    CODE_FOR_vec_unpacku_lo_v4si=2881,
    CODE_FOR_vec_unpacks_lo_v4si=2882,
    CODE_FOR_sse2_uavgv16qi3=2883,
    CODE_FOR_sse2_uavgv8hi3=2884,
    CODE_FOR_sse2_maskmovdqu=2885,
    CODE_FOR_sse_sfence=2886,
    CODE_FOR_sse2_mfence=2887,
    CODE_FOR_sse2_lfence=2888,
    CODE_FOR_ssse3_pmulhrswv8hi3=2889,
    CODE_FOR_ssse3_pmulhrswv4hi3=2890,
    CODE_FOR_rotlv16qi3=2895,
    CODE_FOR_rotlv8hi3=2896,
    CODE_FOR_rotlv4si3=2897,
    CODE_FOR_rotlv2di3=2898,
    CODE_FOR_rotrv16qi3=2899,
    CODE_FOR_rotrv8hi3=2900,
    CODE_FOR_rotrv4si3=2901,
    CODE_FOR_rotrv2di3=2902,
    CODE_FOR_vrotrv16qi3=2903,
    CODE_FOR_vrotrv8hi3=2904,
    CODE_FOR_vrotrv4si3=2905,
    CODE_FOR_vrotrv2di3=2906,
    CODE_FOR_vrotlv16qi3=2907,
    CODE_FOR_vrotlv8hi3=2908,
    CODE_FOR_vrotlv4si3=2909,
    CODE_FOR_vrotlv2di3=2910,
    CODE_FOR_vlshrv16qi3=2911,
    CODE_FOR_vlshrv8hi3=2912,
    CODE_FOR_vlshrv4si3=2913,
    CODE_FOR_vashrv16qi3=2914,
    CODE_FOR_vashrv8hi3=2915,
    CODE_FOR_vashrv4si3=2916,
    CODE_FOR_vashlv16qi3=2917,
    CODE_FOR_vashlv8hi3=2918,
    CODE_FOR_vashlv4si3=2919,
    CODE_FOR_ashlv16qi3=2920,
    CODE_FOR_lshlv16qi3=2921,
    CODE_FOR_ashrv16qi3=2922,
    CODE_FOR_ashrv2di3=2923,
    CODE_FOR_avx_vzeroall=2924,
    CODE_FOR_avx_vzeroupper=2925,
    CODE_FOR_avx_vpermilv2df=2932,
    CODE_FOR_avx_vpermilv4df=2933,
    CODE_FOR_avx_vpermilv4sf=2934,
    CODE_FOR_avx_vpermilv8sf=2935,
    CODE_FOR_avx_vperm2f128v8si3=2936,
    CODE_FOR_avx_vperm2f128v8sf3=2937,
    CODE_FOR_avx_vperm2f128v4df3=2938,
    CODE_FOR_avx_vinsertf128v32qi=2939,
    CODE_FOR_avx_vinsertf128v16hi=2940,
    CODE_FOR_avx_vinsertf128v8si=2941,
    CODE_FOR_avx_vinsertf128v4di=2942,
    CODE_FOR_avx_vinsertf128v8sf=2943,
    CODE_FOR_avx_vinsertf128v4df=2944,
    CODE_FOR_vec_initv32qi=2945,
    CODE_FOR_vec_initv16hi=2946,
    CODE_FOR_vec_initv8si=2947,
    CODE_FOR_vec_initv4di=2948,
    CODE_FOR_vec_initv8sf=2949,
    CODE_FOR_vec_initv4df=2950,
    CODE_FOR_memory_barrier=2951,
    CODE_FOR_sync_compare_and_swapqi=2952,
    CODE_FOR_sync_compare_and_swaphi=2953,
    CODE_FOR_sync_compare_and_swapsi=2954,
    CODE_FOR_sync_compare_and_swapdi=2955,
    CODE_FOR_nothing=2956
} insn_code;

typedef bitmap regset;

typedef struct VEC_edge_heap VEC_edge_heap, *PVEC_edge_heap;

struct VEC_edge_heap {
    struct VEC_edge_base base;
};

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

typedef struct convert_optab_d convert_optab_d, *Pconvert_optab_d;

typedef struct optab_handlers optab_handlers, *Poptab_handlers;

struct optab_handlers {
    enum insn_code insn_code;
};

struct convert_optab_d {
    enum rtx_code code;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    char * libcall_basename;
    void (* libcall_gen)(struct convert_optab_d *, char *, enum machine_mode, enum machine_mode);
    struct optab_handlers handlers[87][87];
    undefined field8_0x765c;
    undefined field9_0x765d;
    undefined field10_0x765e;
    undefined field11_0x765f;
};

typedef struct optab_d optab_d, *Poptab_d;

struct optab_d {
    enum rtx_code code;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    char * libcall_basename;
    char libcall_suffix;
    undefined field7_0x11;
    undefined field8_0x12;
    undefined field9_0x13;
    undefined field10_0x14;
    undefined field11_0x15;
    undefined field12_0x16;
    undefined field13_0x17;
    void (* libcall_gen)(struct optab_d *, char *, char, enum machine_mode);
    struct optab_handlers handlers[87];
    undefined field16_0x17c;
    undefined field17_0x17d;
    undefined field18_0x17e;
    undefined field19_0x17f;
};

typedef enum convert_optab_index {
    COI_sext=0,
    COI_zext=1,
    COI_trunc=2,
    COI_sfix=3,
    COI_ufix=4,
    COI_sfixtrunc=5,
    COI_ufixtrunc=6,
    COI_sfloat=7,
    COI_ufloat=8,
    COI_lrint=9,
    COI_lround=10,
    COI_lfloor=11,
    COI_lceil=12,
    COI_fract=13,
    COI_fractuns=14,
    COI_satfract=15,
    COI_satfractuns=16,
    COI_MAX=17
} convert_optab_index;

typedef struct optab_d * optab;

typedef enum optab_index {
    OTI_usum_widen=-128,
    OTI_sdot_prod=-127,
    OTI_udot_prod=-126,
    OTI_vec_set=-125,
    OTI_vec_extract=-124,
    OTI_vec_extract_even=-123,
    OTI_vec_extract_odd=-122,
    OTI_vec_interleave_high=-121,
    OTI_vec_interleave_low=-120,
    OTI_vec_init=-119,
    OTI_vec_shl=-118,
    OTI_vec_shr=-117,
    OTI_vec_realign_load=-116,
    OTI_vec_widen_umult_hi=-115,
    OTI_vec_widen_umult_lo=-114,
    OTI_vec_widen_smult_hi=-113,
    OTI_vec_widen_smult_lo=-112,
    OTI_vec_unpacks_hi=-111,
    OTI_vec_unpacks_lo=-110,
    OTI_vec_unpacku_hi=-109,
    OTI_vec_unpacku_lo=-108,
    OTI_vec_unpacks_float_hi=-107,
    OTI_vec_unpacks_float_lo=-106,
    OTI_vec_unpacku_float_hi=-105,
    OTI_vec_unpacku_float_lo=-104,
    OTI_vec_pack_trunc=-103,
    OTI_vec_pack_usat=-102,
    OTI_vec_pack_ssat=-101,
    OTI_vec_pack_sfix_trunc=-100,
    OTI_vec_pack_ufix_trunc=-99,
    OTI_powi=-98,
    OTI_MAX=-97,
    OTI_ssadd=0,
    OTI_usadd=1,
    OTI_sssub=2,
    OTI_ussub=3,
    OTI_ssmul=4,
    OTI_usmul=5,
    OTI_ssdiv=6,
    OTI_usdiv=7,
    OTI_ssneg=8,
    OTI_usneg=9,
    OTI_ssashl=10,
    OTI_usashl=11,
    OTI_add=12,
    OTI_addv=13,
    OTI_sub=14,
    OTI_subv=15,
    OTI_smul=16,
    OTI_smulv=17,
    OTI_smul_highpart=18,
    OTI_umul_highpart=19,
    OTI_smul_widen=20,
    OTI_umul_widen=21,
    OTI_usmul_widen=22,
    OTI_smadd_widen=23,
    OTI_umadd_widen=24,
    OTI_ssmadd_widen=25,
    OTI_usmadd_widen=26,
    OTI_smsub_widen=27,
    OTI_umsub_widen=28,
    OTI_ssmsub_widen=29,
    OTI_usmsub_widen=30,
    OTI_sdiv=31,
    OTI_sdivv=32,
    OTI_sdivmod=33,
    OTI_udiv=34,
    OTI_udivmod=35,
    OTI_smod=36,
    OTI_umod=37,
    OTI_fmod=38,
    OTI_remainder=39,
    OTI_ftrunc=40,
    OTI_and=41,
    OTI_ior=42,
    OTI_xor=43,
    OTI_ashl=44,
    OTI_lshr=45,
    OTI_ashr=46,
    OTI_rotl=47,
    OTI_rotr=48,
    OTI_vashl=49,
    OTI_vlshr=50,
    OTI_vashr=51,
    OTI_vrotl=52,
    OTI_vrotr=53,
    OTI_smin=54,
    OTI_smax=55,
    OTI_umin=56,
    OTI_umax=57,
    OTI_pow=58,
    OTI_atan2=59,
    OTI_mov=60,
    OTI_movstrict=61,
    OTI_movmisalign=62,
    OTI_storent=63,
    OTI_neg=64,
    OTI_negv=65,
    OTI_abs=66,
    OTI_absv=67,
    OTI_bswap=68,
    OTI_one_cmpl=69,
    OTI_ffs=70,
    OTI_clz=71,
    OTI_ctz=72,
    OTI_popcount=73,
    OTI_parity=74,
    OTI_sqrt=75,
    OTI_sincos=76,
    OTI_sin=77,
    OTI_asin=78,
    OTI_cos=79,
    OTI_acos=80,
    OTI_exp=81,
    OTI_exp10=82,
    OTI_exp2=83,
    OTI_expm1=84,
    OTI_ldexp=85,
    OTI_scalb=86,
    OTI_significand=87,
    OTI_logb=88,
    OTI_ilogb=89,
    OTI_log=90,
    OTI_log10=91,
    OTI_log2=92,
    OTI_log1p=93,
    OTI_floor=94,
    OTI_ceil=95,
    OTI_btrunc=96,
    OTI_round=97,
    OTI_nearbyint=98,
    OTI_rint=99,
    OTI_tan=100,
    OTI_atan=101,
    OTI_copysign=102,
    OTI_signbit=103,
    OTI_isinf=104,
    OTI_cmp=105,
    OTI_ucmp=106,
    OTI_eq=107,
    OTI_ne=108,
    OTI_gt=109,
    OTI_ge=110,
    OTI_lt=111,
    OTI_le=112,
    OTI_unord=113,
    OTI_strlen=114,
    OTI_cbranch=115,
    OTI_cmov=116,
    OTI_cstore=117,
    OTI_ctrap=118,
    OTI_push=119,
    OTI_addcc=120,
    OTI_reduc_smax=121,
    OTI_reduc_umax=122,
    OTI_reduc_smin=123,
    OTI_reduc_umin=124,
    OTI_reduc_splus=125,
    OTI_reduc_uplus=126,
    OTI_ssum_widen=127
} optab_index;

typedef struct convert_optab_d * convert_optab;

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

typedef struct VEC_ipa_replace_map_p_base VEC_ipa_replace_map_p_base, *PVEC_ipa_replace_map_p_base;

typedef struct ipa_replace_map ipa_replace_map, *Pipa_replace_map;

typedef struct ipa_replace_map * ipa_replace_map_p;

struct VEC_ipa_replace_map_p_base {
    uint num;
    uint alloc;
    ipa_replace_map_p vec[1];
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

typedef struct cgraph_global_info cgraph_global_info, *Pcgraph_global_info;

typedef struct cgraph_node cgraph_node, *Pcgraph_node;

typedef struct cgraph_edge cgraph_edge, *Pcgraph_edge;

typedef struct cgraph_local_info cgraph_local_info, *Pcgraph_local_info;

typedef struct cgraph_rtl_info cgraph_rtl_info, *Pcgraph_rtl_info;

typedef struct cgraph_clone_info cgraph_clone_info, *Pcgraph_clone_info;

typedef struct cgraph_thunk_info cgraph_thunk_info, *Pcgraph_thunk_info;

typedef struct inline_summary inline_summary, *Pinline_summary;

typedef struct VEC_ipa_replace_map_p_gc VEC_ipa_replace_map_p_gc, *PVEC_ipa_replace_map_p_gc;

struct cgraph_rtl_info {
    uint preferred_incoming_stack_boundary;
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

struct cgraph_clone_info {
    struct VEC_ipa_replace_map_p_gc * tree_map;
    bitmap args_to_skip;
    bitmap combined_args_to_skip;
};

struct inline_summary {
    long estimated_self_stack_size;
    int self_size;
    int size_inlining_benefit;
    int self_time;
    int time_inlining_benefit;
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

typedef struct varpool_node varpool_node, *Pvarpool_node;

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

typedef enum LTO_cgraph_tags {
    LTO_cgraph_avail_node=1,
    LTO_cgraph_overwritable_node=2,
    LTO_cgraph_unavail_node=3,
    LTO_cgraph_edge=4,
    LTO_cgraph_last_tag=5
} LTO_cgraph_tags;

typedef struct reg_info_t reg_info_t, *Preg_info_t;

struct reg_info_t {
    int freq;
    int deaths;
    int live_length;
    int calls_crossed;
    int freq_calls_crossed;
    int throw_calls_crossed;
    int basic_block;
};

typedef struct regstat_n_sets_and_refs_t regstat_n_sets_and_refs_t, *Pregstat_n_sets_and_refs_t;

struct regstat_n_sets_and_refs_t {
    int sets;
    int refs;
};

typedef ushort move_table[27];

typedef ulong HARD_REG_ELT_TYPE;

typedef struct profile_hooks profile_hooks, *Pprofile_hooks;

typedef struct histogram_value_t histogram_value_t, *Phistogram_value_t;

typedef struct histogram_value_t * histogram_value;

typedef struct anon_struct_32_4_78ec3082_for_hvalue anon_struct_32_4_78ec3082_for_hvalue, *Panon_struct_32_4_78ec3082_for_hvalue;

typedef enum hist_type {
    HIST_TYPE_INTERVAL=0,
    HIST_TYPE_POW2=1,
    HIST_TYPE_SINGLE_VALUE=2,
    HIST_TYPE_CONST_DELTA=3,
    HIST_TYPE_INDIR_CALL=4,
    HIST_TYPE_AVERAGE=5,
    HIST_TYPE_IOR=6
} hist_type;

typedef union anon_union_8_1_a8155605_for_hdata anon_union_8_1_a8155605_for_hdata, *Panon_union_8_1_a8155605_for_hdata;

typedef struct anon_struct_8_2_7f832eba_for_intvl anon_struct_8_2_7f832eba_for_intvl, *Panon_struct_8_2_7f832eba_for_intvl;

struct anon_struct_8_2_7f832eba_for_intvl {
    int int_start;
    uint steps;
};

union anon_union_8_1_a8155605_for_hdata {
    struct anon_struct_8_2_7f832eba_for_intvl intvl;
};

struct anon_struct_32_4_78ec3082_for_hvalue {
    tree value;
    gimple stmt;
    gcov_type * counters;
    struct histogram_value_t * next;
};

struct histogram_value_t {
    struct anon_struct_32_4_78ec3082_for_hvalue hvalue;
    enum hist_type type;
    uint n_counters;
    union anon_union_8_1_a8155605_for_hdata hdata;
};

struct profile_hooks {
    void (* init_edge_profiler)(void);
    void (* gen_edge_profiler)(int, edge);
    void (* gen_interval_profiler)(histogram_value, uint, uint);
    void (* gen_pow2_profiler)(histogram_value, uint, uint);
    void (* gen_one_value_profiler)(histogram_value, uint, uint);
    void (* gen_const_delta_profiler)(histogram_value, uint, uint);
    void (* gen_ic_profiler)(histogram_value, uint, uint);
    void (* gen_average_profiler)(histogram_value, uint, uint);
    void (* gen_ior_profiler)(histogram_value, uint, uint);
};

typedef enum gimplify_status {
    GS_ERROR=-2,
    GS_UNHANDLED=-1,
    GS_OK=0,
    GS_ALL_DONE=1
} gimplify_status;

typedef enum fallback {
    fb_none=0,
    fb_rvalue=1,
    fb_lvalue=2,
    fb_either=3,
    fb_mayfail=4
} fallback;

typedef enum gf_mask {
    GF_PREDICT_TAKEN=-32768,
    GF_ASM_INPUT=1,
    GF_CALL_CANNOT_INLINE=1,
    GF_OMP_PARALLEL_COMBINED=1,
    GF_OMP_RETURN_NOWAIT=1,
    GF_OMP_SECTION_LAST=1,
    GF_ASM_VOLATILE=2,
    GF_CALL_FROM_THUNK=2,
    GF_CALL_RETURN_SLOT_OPT=4,
    GF_CALL_TAILCALL=8,
    GF_CALL_VA_ARG_PACK=16
} gf_mask;

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

typedef enum real_value_class {
    rvc_zero=0,
    rvc_normal=1,
    rvc_inf=2,
    rvc_nan=3
} real_value_class;

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

typedef char * (* insn_output_fn)(rtx *, rtx);

typedef struct insn_data insn_data, *Pinsn_data;

typedef union anon_union_8_3_66ded443_for_output anon_union_8_3_66ded443_for_output, *Panon_union_8_3_66ded443_for_output;

typedef rtx (* insn_gen_fn)(rtx, ...);

typedef struct insn_operand_data insn_operand_data, *Pinsn_operand_data;

typedef int (* insn_operand_predicate_fn)(rtx, enum machine_mode);

union anon_union_8_3_66ded443_for_output {
    char * single;
    char * * multi;
    insn_output_fn function;
};

struct insn_data {
    char * name;
    union anon_union_8_3_66ded443_for_output output;
    insn_gen_fn genfun;
    struct insn_operand_data * operand;
    char n_operands;
    char n_dups;
    char n_alternatives;
    char output_format;
    undefined field8_0x24;
    undefined field9_0x25;
    undefined field10_0x26;
    undefined field11_0x27;
};

struct insn_operand_data {
    insn_operand_predicate_fn predicate;
    char * constraint;
    uint mode:16;
    char strict_low;
    char eliminable;
    undefined field5_0x14;
    undefined field6_0x15;
    undefined field7_0x16;
    undefined field8_0x17;
};

typedef struct recog_data recog_data, *Precog_data;

typedef enum op_type {
    OP_IN=0,
    OP_OUT=1,
    OP_INOUT=2
} op_type;

struct recog_data {
    rtx operand[30];
    rtx * operand_loc[30];
    char * constraints[30];
    enum machine_mode operand_mode[30];
    enum op_type operand_type[30];
    rtx * dup_loc[14];
    char dup_num[14];
    char n_operands;
    char n_dups;
    char n_alternatives;
    uchar alternative_enabled_p[30];
    undefined field11_0x45f;
    rtx insn;
};

typedef struct operand_alternative operand_alternative, *Poperand_alternative;

struct operand_alternative {
    char * constraint;
    enum reg_class cl;
    uint reject;
    int matches;
    int matched;
    uint earlyclobber:1;
    uint memory_ok:1;
    uint offmem_ok:1;
    uint nonoffmem_ok:1;
    uint decmem_ok:1;
    uint incmem_ok:1;
    uint is_address:1;
    uint anything_ok:1;
    undefined field13_0x19;
    undefined field14_0x1a;
    undefined field15_0x1b;
    undefined field16_0x1c;
    undefined field17_0x1d;
    undefined field18_0x1e;
    undefined field19_0x1f;
};

typedef void (* gt_pointer_walker)(void *);

typedef struct ggc_cache_tab ggc_cache_tab, *Pggc_cache_tab;

struct ggc_cache_tab {
    struct htab * * base;
    size_t nelt;
    size_t stride;
    gt_pointer_walker cb;
    gt_pointer_walker pchw;
    int (* marked_p)(void *);
};

typedef struct ggc_root_tab ggc_root_tab, *Pggc_root_tab;

struct ggc_root_tab {
    void * base;
    size_t nelt;
    size_t stride;
    gt_pointer_walker cb;
    gt_pointer_walker pchw;
};

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

typedef struct elims elims, *Pelims;

struct elims {
    int from;
    int to;
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

typedef struct const_call_expr_arg_iterator_d const_call_expr_arg_iterator_d, *Pconst_call_expr_arg_iterator_d;

typedef struct const_call_expr_arg_iterator_d const_call_expr_arg_iterator;

struct const_call_expr_arg_iterator_d {
    const_tree t;
    int n;
    int i;
};

typedef struct VEC_tree_heap VEC_tree_heap, *PVEC_tree_heap;

struct VEC_tree_heap {
    struct VEC_tree_base base;
};

typedef struct call_expr_arg_iterator_d call_expr_arg_iterator_d, *Pcall_expr_arg_iterator_d;

struct call_expr_arg_iterator_d {
    tree t;
    int n;
    int i;
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

typedef struct VEC_alias_pair_base VEC_alias_pair_base, *PVEC_alias_pair_base;

typedef struct alias_pair alias_pair, *Palias_pair;

struct alias_pair {
    tree decl;
    tree target;
};

struct VEC_alias_pair_base {
    uint num;
    uint alloc;
    struct alias_pair vec[1];
};

typedef struct call_expr_arg_iterator_d call_expr_arg_iterator;

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

typedef struct VEC_alias_pair_gc VEC_alias_pair_gc, *PVEC_alias_pair_gc;

struct VEC_alias_pair_gc {
    struct VEC_alias_pair_base base;
};

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




uint rhs_regno(const_rtx x)

{
  return *(uint *)&x->u;
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



void init_call_expr_arg_iterator(tree exp,call_expr_arg_iterator *iter)

{
  iter->t = exp;
  iter->n = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -3;
  iter->i = 0;
  return;
}



void init_const_call_expr_arg_iterator(const_tree exp,const_call_expr_arg_iterator *iter)

{
  iter->t = exp;
  iter->n = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -3;
  iter->i = 0;
  return;
}



tree next_call_expr_arg(call_expr_arg_iterator *iter)

{
  tree ptVar1;
  tree result;
  
  if (iter->i < iter->n) {
    ptVar1 = *(tree *)(&iter->t->field_0x28 + (long)(iter->i + 3) * 8);
    iter->i = iter->i + 1;
  }
  else {
    ptVar1 = (tree)0x0;
  }
  return ptVar1;
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



tree first_call_expr_arg(tree exp,call_expr_arg_iterator *iter)

{
  tree ptVar1;
  
  init_call_expr_arg_iterator(exp,iter);
  ptVar1 = next_call_expr_arg(iter);
  return ptVar1;
}



uchar more_const_call_expr_args_p(const_call_expr_arg_iterator *iter)

{
  return iter->i < iter->n;
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



location_t gimple_location(const_gimple g)

{
  return *(location_t *)&g->field_0x8;
}



uchar gimple_has_location(const_gimple g)

{
  location_t lVar1;
  
  lVar1 = gimple_location(g);
  return lVar1 != 0;
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
    fancy_abort("gimple.h",0x656,&DAT_0011bd60);
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



tree gimple_call_fn(const_gimple gs)

{
  tree ptVar1;
  
  ptVar1 = gimple_op(gs,1);
  return ptVar1;
}



tree gimple_call_fndecl(const_gimple gs)

{
  tree ptVar1;
  tree addr;
  
  ptVar1 = gimple_call_fn(gs);
  if (*(short *)ptVar1 == 0x79) {
    ptVar1 = *(tree *)&ptVar1->field_0x28;
  }
  else {
    ptVar1 = (tree)0x0;
  }
  return ptVar1;
}



uint gimple_call_num_args(const_gimple gs)

{
  uint uVar1;
  uint num_ops;
  
  uVar1 = gimple_num_ops(gs);
  return uVar1 - 3;
}



tree gimple_call_arg(const_gimple gs,uint index)

{
  tree ptVar1;
  
  ptVar1 = gimple_op(gs,index + 3);
  return ptVar1;
}



uchar gimple_call_va_arg_pack_p(gimple s)

{
  return (*(ushort *)&s->field_0x2 & 0x10) != 0;
}



rtx expand_expr(tree exp,rtx target,machine_mode mode,expand_modifier modifier)

{
  rtx prVar1;
  
  prVar1 = (rtx)expand_expr_real(exp,target,mode,modifier,0);
  return prVar1;
}



rtx expand_normal(tree exp)

{
  rtx prVar1;
  
  prVar1 = (rtx)expand_expr_real(exp,0,0,0,0);
  return prVar1;
}



uchar gimple_in_ssa_p(function *fun)

{
  uchar uVar1;
  
  if (((fun == (function *)0x0) || (fun->gimple_df == (gimple_df *)0x0)) ||
     ((fun->gimple_df->field_0x60 & 1) == 0)) {
    uVar1 = '\0';
  }
  else {
    uVar1 = '\x01';
  }
  return uVar1;
}



uchar ranges_overlap_p(ulong pos1,ulong size1,ulong pos2,ulong size2)

{
  uchar uVar1;
  
  if ((pos1 < pos2) || ((size2 != 0xffffffffffffffff && (size2 + pos2 <= pos1)))) {
    if ((pos2 < pos1) || ((size1 != 0xffffffffffffffff && (size1 + pos1 <= pos2)))) {
      uVar1 = '\0';
    }
    else {
      uVar1 = '\x01';
    }
  }
  else {
    uVar1 = '\x01';
  }
  return uVar1;
}



uchar is_builtin_name(char *name)

{
  uchar uVar1;
  int iVar2;
  
  iVar2 = strncmp(name,"__builtin_",10);
  if (iVar2 == 0) {
    uVar1 = '\x01';
  }
  else {
    iVar2 = strncmp(name,"__sync_",7);
    if (iVar2 == 0) {
      uVar1 = '\x01';
    }
    else {
      uVar1 = '\0';
    }
  }
  return uVar1;
}



uchar is_builtin_fn(tree decl)

{
  uchar uVar1;
  
  if ((*(short *)decl == 0x1d) && ((decl->field_0xd9 & 0x18) != 0)) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



uchar called_as_built_in(tree node)

{
  uchar uVar1;
  char *name;
  
  uVar1 = is_builtin_name(*(char **)(*(long *)&node->field_0x20 + 0x18));
  return uVar1;
}



int get_object_alignment(tree exp,uint align,uint max_align)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_54;
  tree local_50;
  machine_mode mode;
  int unsignedp;
  int volatilep;
  uint inner;
  uint offset_factor;
  uint offset_bits;
  long bitsize;
  long bitpos;
  tree offset;
  tree next_offset;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  inner = max_align;
  uVar1 = handled_component_p(exp);
  local_50 = exp;
  uVar2 = inner;
  if (uVar1 != '\0') {
    local_50 = (tree)get_inner_reference(exp,&bitsize,&bitpos,&offset,&mode,&unsignedp,&volatilep,1)
    ;
    uVar2 = inner;
    if ((bitpos != 0) && (uVar2 = -(uint)bitpos & (uint)bitpos, inner <= uVar2)) {
      uVar2 = inner;
    }
    while (inner = uVar2, uVar2 = inner, offset != (tree)0x0) {
      if (*(short *)offset == 0x3f) {
        next_offset = *(tree *)&offset->field_0x28;
        offset = *(tree *)&offset->field_0x30;
      }
      else {
        next_offset = (tree)0x0;
      }
      iVar3 = host_integerp(offset,1);
      if (iVar3 == 0) {
        if ((*(short *)offset != 0x41) ||
           (iVar3 = host_integerp(*(undefined8 *)&offset->field_0x30,1), iVar3 == 0)) {
          uVar2 = 8;
          if (inner < 9) {
            uVar2 = inner;
          }
          break;
        }
        iVar3 = tree_low_cst(*(undefined8 *)&offset->field_0x30,1);
        offset_factor = iVar3 * 8;
        uVar2 = inner;
        if ((offset_factor != 0) && (uVar2 = iVar3 * -8 & offset_factor, inner <= uVar2)) {
          uVar2 = inner;
        }
      }
      else {
        iVar3 = tree_low_cst(offset,1);
        offset_bits = iVar3 * 8;
        uVar2 = inner;
        if ((offset_bits != 0) && (uVar2 = iVar3 * -8 & offset_bits, inner <= uVar2)) {
          uVar2 = inner;
        }
      }
      inner = uVar2;
      uVar2 = inner;
      offset = next_offset;
    }
  }
  inner = uVar2;
  if (*(ushort *)local_50 == 0x21) {
    local_50 = *(tree *)&local_50->field_0x50;
  }
  if ((*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)local_50 * 4) == 3) &&
     (*(ushort *)local_50 != 0x1e)) {
    local_54 = *(uint *)&local_50->field_0x40;
    if (inner <= local_54) {
      local_54 = inner;
    }
  }
  else if (*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)local_50 * 4) == 1) {
    uVar2 = ix86_constant_alignment(local_50,align);
    local_54 = inner;
    if (uVar2 <= inner) {
      local_54 = ix86_constant_alignment(local_50,align);
    }
  }
  else if ((*(ushort *)local_50 == 0x76) || (*(ushort *)local_50 == 0x2f)) {
    local_54 = *(uint *)(*(long *)&local_50->field_0x10 + 0x40);
    if (inner <= local_54) {
      local_54 = inner;
    }
  }
  else {
    local_54 = align;
    if (inner <= align) {
      local_54 = inner;
    }
  }
  if (max_align <= local_54) {
    local_54 = max_align;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_54;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



uchar can_trust_pointer_alignment(void)

{
  uchar uVar1;
  
  if ((optimize == 0) || (flag_tree_ter == 0)) {
    uVar1 = '\0';
  }
  else {
    uVar1 = '\x01';
  }
  return uVar1;
}



int get_pointer_alignment(tree exp,uint max_align)

{
  ushort uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uint local_24;
  tree local_20;
  uint align;
  uint inner;
  
  uVar2 = can_trust_pointer_alignment();
  if (uVar2 == '\0') {
    iVar3 = 0;
  }
  else if ((**(short **)&exp->field_0x10 == 10) || (**(short **)&exp->field_0x10 == 0xc)) {
    align = *(uint *)(*(long *)(*(long *)&exp->field_0x10 + 0x10) + 0x40);
    local_24 = max_align;
    local_20 = exp;
    if (max_align <= align) {
      align = max_align;
    }
    while (uVar1 = *(ushort *)local_20, uVar1 != 0x79) {
      if (0x79 < uVar1) {
        return align;
      }
      if (uVar1 == 0x74) {
LAB_0010092c:
        local_20 = *(tree *)&local_20->field_0x28;
        if ((**(short **)&local_20->field_0x10 != 10) && (**(short **)&local_20->field_0x10 != 0xc))
        {
          return align;
        }
        align = *(uint *)(*(long *)(*(long *)&local_20->field_0x10 + 0x10) + 0x40);
        if (local_24 <= align) {
          align = local_24;
        }
      }
      else {
        if (0x74 < uVar1) {
          return align;
        }
        if (uVar1 != 0x42) {
          if (uVar1 != 0x71) {
            return align;
          }
          goto LAB_0010092c;
        }
        iVar3 = host_integerp(*(undefined8 *)&local_20->field_0x30,1);
        if (iVar3 == 0) {
          return align;
        }
        for (; uVar4 = tree_low_cst(*(undefined8 *)&local_20->field_0x30),
            (uVar4 & (local_24 >> 3) - 1) != 0; local_24 = local_24 >> 1) {
        }
        local_20 = *(tree *)&local_20->field_0x28;
      }
    }
    iVar3 = get_object_alignment(*(tree *)&local_20->field_0x28,align,local_24);
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



tree c_strlen(tree src,int only_value)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  tree ptVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  long in_FS_OFFSET;
  location_t loc;
  int i;
  int max;
  tree offset_node;
  long offset;
  tree len1;
  tree len2;
  char *ptr;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (ushort *)tree_strip_nop_conversions(src);
  if ((*puVar3 == 0x38) &&
     ((only_value != 0 || ((*(byte *)(*(long *)(puVar3 + 0x14) + 2) & 1) == 0)))) {
    len1 = c_strlen(*(tree *)(puVar3 + 0x18),only_value);
    len2 = c_strlen(*(tree *)(puVar3 + 0x1c),only_value);
    iVar1 = tree_int_cst_equal(len1);
    ptVar4 = len1;
    if (iVar1 != 0) goto LAB_00100d12;
  }
  if ((*puVar3 == 0x34) &&
     ((only_value != 0 || ((*(byte *)(*(long *)(puVar3 + 0x14) + 2) & 1) == 0)))) {
    ptVar4 = c_strlen(*(tree *)(puVar3 + 0x18),only_value);
  }
  else {
    if ((*(uint *)(&tree_code_type + (long)(int)(uint)*puVar3 * 4) < 4) ||
       ((10 < *(uint *)(&tree_code_type + (long)(int)(uint)*puVar3 * 4) ||
        (*(int *)(puVar3 + 0xc) == 0)))) {
      loc = input_location;
    }
    else if ((*(uint *)(&tree_code_type + (long)(int)(uint)*puVar3 * 4) < 4) ||
            (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*puVar3 * 4))) {
      loc = 0;
    }
    else {
      loc = *(location_t *)(puVar3 + 0xc);
    }
    lVar5 = string_constant(puVar3,&offset_node);
    if (lVar5 == 0) {
      ptVar4 = (tree)0x0;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x18) + -1;
      ptr = (char *)(lVar5 + 0x1c);
      if ((offset_node == (tree)0x0) || (*(short *)offset_node == 0x17)) {
        if (offset_node == (tree)0x0) {
          offset = 0;
        }
        else {
          iVar2 = host_integerp(offset_node,0);
          if (iVar2 == 0) {
            offset = -1;
          }
          else {
            offset = tree_low_cst(offset_node,0);
          }
        }
        if ((offset < 0) || (iVar1 < offset)) {
          if ((*(byte *)(lVar5 + 2) & 0x80) == 0) {
            warning_at(loc,0,"offset outside bounds of constant string");
            *(byte *)(lVar5 + 2) = *(byte *)(lVar5 + 2) | 0x80;
          }
          ptVar4 = (tree)0x0;
        }
        else {
          sVar7 = strlen(ptr + offset);
          ptVar4 = (tree)size_int_kind(sVar7,1);
        }
      }
      else {
        for (i = 0; i < iVar1; i = i + 1) {
          if (ptr[i] == '\0') {
            ptVar4 = (tree)0x0;
            goto LAB_00100d12;
          }
        }
        uVar6 = size_int_kind((long)iVar1,0);
        ptVar4 = (tree)size_diffop_loc(loc,uVar6,offset_node);
      }
    }
  }
LAB_00100d12:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



char * c_getstr(tree src)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  tree offset_node;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = string_constant(src,&offset_node);
  if (lVar2 == 0) {
    pcVar3 = (char *)0x0;
  }
  else if (offset_node == (tree)0x0) {
    pcVar3 = (char *)(lVar2 + 0x1c);
  }
  else {
    iVar1 = host_integerp(offset_node,1);
    if (iVar1 != 0) {
      iVar1 = compare_tree_int(offset_node,(long)(*(int *)(lVar2 + 0x18) + -1));
      if (iVar1 < 1) {
        lVar4 = tree_low_cst(offset_node,1);
        pcVar3 = (char *)(lVar4 + lVar2 + 0x1c);
        goto LAB_00100ddd;
      }
    }
    pcVar3 = (char *)0x0;
  }
LAB_00100ddd:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pcVar3;
}



rtx c_readstr(char *str,machine_mode mode)

{
  uint uVar1;
  long lVar2;
  rtx prVar3;
  long in_FS_OFFSET;
  uint i;
  uint j;
  long ch;
  long c [2];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((&mode_class)[mode] != '\x02') {
    fancy_abort("builtins.c",0x229,&DAT_0011bd60);
  }
  c[0] = 0;
  c[1] = 0;
  ch = 1;
  for (i = 0; i < (byte)(&mode_size)[mode]; i = i + 1) {
    uVar1 = i << 3;
    if (0x80 < uVar1) {
      fancy_abort("builtins.c",0x237,&DAT_0011bd60);
    }
    if (ch != 0) {
      ch = (long)(byte)str[i];
    }
    c[uVar1 >> 6] = c[uVar1 >> 6] | ch << ((byte)uVar1 & 0x3f);
  }
  prVar3 = (rtx)immed_double_const(c[0],c[1],mode);
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return prVar3;
}



// WARNING: Removing unreachable block (ram,0x00100f87)

int target_char_cast(tree cst,char *p)

{
  char cVar1;
  int iVar2;
  ulong val;
  ulong hostval;
  
  iVar2 = host_integerp(cst,1);
  if (iVar2 != 0) {
    cVar1 = tree_low_cst(cst,1);
    *p = cVar1;
  }
  return (uint)(iVar2 == 0);
}



tree builtin_save_expr(tree exp)

{
  if (((exp->field_0x2 & 4) != 0) ||
     ((*(short *)exp != 0x22 && ((*(short *)exp != 0x20 || ((exp->field_0x3 & 4) != 0)))))) {
    exp = (tree)save_expr(exp);
  }
  return exp;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_return_addr(built_in_function fndecl_code,int count)

{
  undefined8 uVar1;
  int i;
  rtx tem;
  
  if ((count == 0) && (fndecl_code == BUILT_IN_RETURN_ADDRESS)) {
    tem = _memory_address_addr_space;
  }
  else {
    tem = _gen_frame_mem;
    gen_rtx_fmt_ee_stat = (code)0x1;
  }
  if (0 < count) {
    ix86_setup_frame_addresses();
  }
  for (i = 0; i < count; i = i + 1) {
    uVar1 = memory_address_addr_space(0x10,tem,0);
    uVar1 = gen_frame_mem(0x10,uVar1);
    tem = (rtx)copy_to_reg(uVar1);
  }
  if (fndecl_code != BUILT_IN_FRAME_ADDRESS) {
    if (count == 0) {
      uVar1 = plus_constant(_copy_to_reg,0xfffffffffffffffc);
      tem = (rtx)gen_rtx_MEM(0x10,uVar1);
    }
    else {
      uVar1 = plus_constant(tem,4);
      tem = (rtx)gen_rtx_MEM(0x10,uVar1);
    }
  }
  return tem;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void expand_builtin_setjmp_setup(rtx buf_addr,rtx receiver_label)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  machine_mode sa_mode;
  rtx stack_save;
  rtx mem;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (setjmp_alias_set == -1) {
    setjmp_alias_set = new_alias_set();
  }
  uVar1 = convert_memory_address_addr_space(0x10,buf_addr,0);
  uVar1 = force_operand(uVar1,0);
  uVar1 = force_reg(0x10,uVar1);
  mem = (rtx)gen_rtx_MEM(0x10,uVar1);
  set_mem_alias_set(mem,setjmp_alias_set);
  uVar2 = (*_expand_copysign)();
  emit_move_insn(mem,uVar2);
  uVar2 = plus_constant(uVar1,save_expr);
  mem = (rtx)gen_rtx_MEM(0x10,uVar2);
  set_mem_alias_set(mem,setjmp_alias_set);
  uVar2 = gen_rtx_fmt_u_stat(0x2c,0x10,receiver_label);
  uVar2 = force_reg(0x10,uVar2);
  uVar3 = validize_mem(mem);
  emit_move_insn(uVar3,uVar2);
  uVar1 = plus_constant(uVar1,(uint)(byte)save_expr * 2);
  stack_save = (rtx)gen_rtx_MEM(0x10,uVar1);
  set_mem_alias_set(stack_save,setjmp_alias_set);
  emit_stack_save(2,&stack_save,0);
  *(byte *)(cfun + 0x8a) = *(byte *)(cfun + 0x8a) | 4;
  *(byte *)(cfun + 0x8a) = *(byte *)(cfun + 0x8a) | 0x10;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void expand_builtin_setjmp_receiver(rtx receiver_label)

{
  short *psVar1;
  undefined8 uVar2;
  size_t i;
  rtx chain;
  
  emit_use(_gen_frame_mem);
  psVar1 = (short *)(*_real_nan)(current_function_decl,1);
  if ((psVar1 != (short *)0x0) && (*psVar1 == 0x25)) {
    emit_clobber(psVar1);
  }
  emit_move_insn(_gen_rtx_MEM,_gen_frame_mem);
  emit_clobber(_gen_frame_mem);
  if ((char)flag_pic != '\0') {
    for (i = 0; (i < 4 && ((expand_builtin_setjmp_receiver::lexical_block_0::elim_regs[i].from !=
                            0x10 || (expand_builtin_setjmp_receiver::lexical_block_0::elim_regs[i].
                                     to != 6)))); i = i + 1) {
    }
    if (i == 4) {
      uVar2 = get_arg_pointer_save_area();
      uVar2 = copy_to_reg(uVar2);
      emit_move_insn(_emit_insn,uVar2);
    }
  }
  if (flag_pic != 0) {
    uVar2 = gen_builtin_setjmp_receiver(receiver_label);
    emit_insn(uVar2);
  }
  uVar2 = gen_blockage();
  emit_insn(uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void expand_builtin_longjmp(rtx buf_addr,rtx value)

{
  undefined8 uVar1;
  rtx prVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  machine_mode sa_mode;
  rtx insn;
  rtx last;
  rtx fp;
  rtx lab;
  rtx stack;
  
  DAT_00128fd1 = 1;
  if (setjmp_alias_set == -1) {
    setjmp_alias_set = new_alias_set();
  }
  uVar1 = convert_memory_address_addr_space(0x10,buf_addr,0);
  uVar1 = force_reg(0x10,uVar1);
  if (value != flag_errno_math) {
    fancy_abort("builtins.c",0x356,&DAT_0011bd60);
  }
  prVar2 = (rtx)get_last_insn();
  uVar3 = gen_rtx_MEM(0x10,uVar1);
  uVar4 = plus_constant(uVar1,save_expr);
  uVar4 = gen_rtx_MEM(0x10,uVar4);
  uVar1 = plus_constant(uVar1,(uint)(byte)save_expr * 2);
  uVar1 = gen_rtx_MEM(0x10,uVar1);
  set_mem_alias_set(uVar3,setjmp_alias_set);
  set_mem_alias_set(uVar4,setjmp_alias_set);
  set_mem_alias_set(uVar1,setjmp_alias_set);
  uVar4 = copy_to_reg(uVar4);
  uVar5 = gen_rtx_fmt_0_stat(0x26,0);
  uVar5 = gen_rtx_MEM(1,uVar5);
  emit_clobber(uVar5);
  uVar5 = gen_rtx_MEM(1,_gen_frame_mem);
  emit_clobber(uVar5);
  emit_move_insn(_gen_frame_mem,uVar3);
  emit_stack_restore(2,uVar1,0);
  emit_use(_gen_frame_mem);
  emit_use(_ix86_setup_frame_addresses);
  emit_indirect_jump(uVar4);
  insn = (rtx)get_last_insn();
  while( true ) {
    if (insn == (rtx)0x0) {
      return;
    }
    if (insn == prVar2) {
      fancy_abort("builtins.c",0x389,&DAT_0011bd60);
    }
    if (*(short *)insn == 9) break;
    if (*(short *)insn == 10) {
      return;
    }
    insn = *(rtx *)&(insn->u).field_0x8;
  }
  add_reg_note(insn,0x1c,_vector_type_mode);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_nonlocal_goto(tree exp)

{
  tree exp_00;
  uchar uVar1;
  uint uVar2;
  rtx prVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  rtx insn;
  tree t_label;
  tree t_save_area;
  rtx r_label;
  rtx r_save_area;
  rtx r_fp;
  rtx r_sp;
  
  uVar1 = validate_arglist(exp,10,10,0x13);
  if (uVar1 == '\0') {
    prVar3 = (rtx)0x0;
  }
  else {
    exp_00 = *(tree *)&exp->field_0x48;
    prVar3 = expand_normal(*(tree *)&exp->field_0x40);
    uVar4 = convert_memory_address_addr_space(0x10,prVar3,0);
    prVar3 = expand_normal(exp_00);
    uVar5 = convert_memory_address_addr_space(0x10,prVar3,0);
    uVar5 = copy_to_reg(uVar5);
    uVar6 = gen_rtx_MEM(0x10,uVar5);
    uVar5 = plus_constant(uVar5,save_expr);
    uVar5 = gen_rtx_MEM(0x10,uVar5);
    DAT_00128fc3 = 1;
    uVar4 = copy_to_reg(uVar4);
    uVar7 = gen_rtx_fmt_0_stat(0x26,0);
    uVar7 = gen_rtx_MEM(1,uVar7);
    emit_clobber(uVar7);
    uVar7 = gen_rtx_MEM(1,_gen_frame_mem);
    emit_clobber(uVar7);
    emit_move_insn(_gen_frame_mem,uVar6);
    emit_stack_restore(2,uVar5,0);
    emit_use(_gen_frame_mem);
    emit_use(_ix86_setup_frame_addresses);
    if ((flag_pic != 0) &&
       ((reload_completed == 0 || (uVar2 = rhs_regno(pic_offset_table_rtx), uVar2 != 0xffffffff))))
    {
      if (flag_pic == 0) {
        uVar2 = 0xffffffff;
      }
      else if (reload_completed == 0) {
        uVar2 = 3;
      }
      else {
        uVar2 = rhs_regno(pic_offset_table_rtx);
      }
      if ((&fixed_regs)[uVar2] != '\0') {
        emit_use(pic_offset_table_rtx);
      }
    }
    emit_indirect_jump(uVar4);
    for (insn = (rtx)get_last_insn(); prVar3 = _vector_type_mode, insn != (rtx)0x0;
        insn = *(rtx *)&(insn->u).field_0x8) {
      if (*(short *)insn == 9) {
        add_reg_note(insn,0x1c,_vector_type_mode);
        return _vector_type_mode;
      }
      if (*(short *)insn == 10) {
        return _vector_type_mode;
      }
    }
  }
  return prVar3;
}



void expand_builtin_update_setjmp_buf(rtx buf_addr)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  machine_mode sa_mode;
  rtx stack_save;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = plus_constant(buf_addr,(uint)(byte)save_expr * 2);
  uVar1 = memory_address_addr_space(0x10,uVar1,0);
  stack_save = (rtx)gen_rtx_MEM(0x10,uVar1);
  emit_stack_save(2,&stack_save,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void expand_builtin_prefetch(tree exp)

{
  tree exp_00;
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  int nargs;
  tree arg1;
  tree arg2;
  rtx op0;
  rtx op1;
  rtx op2;
  tree arg0;
  
  uVar1 = validate_arglist(exp,10,0);
  if (uVar1 != '\0') {
    exp_00 = *(tree *)&exp->field_0x40;
    iVar2 = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -3;
    if (iVar2 < 2) {
      arg1 = _set_mem_expr;
    }
    else {
      arg1 = *(tree *)&exp->field_0x48;
    }
    if (iVar2 < 3) {
      arg2 = (tree)build_int_cst(0,3);
    }
    else {
      arg2 = *(tree *)&exp->field_0x50;
    }
    op0 = expand_expr(exp_00,(rtx)0x0,SImode,EXPAND_NORMAL);
    if (*(short *)arg1 != 0x17) {
      error("second argument to %<__builtin_prefetch%> must be a constant");
      arg1 = _set_mem_expr;
    }
    op1 = expand_normal(arg1);
    if ((*(long *)&op1->u != 0) && (*(long *)&op1->u != 1)) {
      warning(0,"invalid second argument to %<__builtin_prefetch%>; using zero");
      op1 = _vector_type_mode;
    }
    if (*(short *)arg2 != 0x17) {
      error("third argument to %<__builtin_prefetch%> must be a constant");
      arg2 = _set_mem_expr;
    }
    op2 = expand_normal(arg2);
    if ((*(long *)&op2->u < 0) || (3 < *(long *)&op2->u)) {
      warning(0,"invalid third argument to %<__builtin_prefetch%>; using zero");
      op2 = _vector_type_mode;
    }
    if ((x86_prefetch_sse != 0) || ((ix86_isa_flags & 1) != 0)) {
      iVar2 = (**_DAT_001413c0)(op0,*(undefined2 *)(_DAT_001413c0 + 2));
      if ((iVar2 == 0) || (op0->field_0x2 != '\x10')) {
        uVar3 = convert_memory_address_addr_space(0x10,op0,0);
        op0 = (rtx)force_reg(0x10,uVar3);
      }
      uVar3 = gen_prefetch(op0,op1,op2);
      emit_insn(uVar3);
    }
    if (*(short *)op0 != 0x2b) {
      iVar2 = side_effects_p(op0);
      if (iVar2 != 0) {
        emit_insn(op0);
      }
    }
  }
  return;
}



rtx get_memory_rtx(tree exp,tree len)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  rtx prVar4;
  undefined8 uVar5;
  short *psVar6;
  long lVar7;
  tree ptVar8;
  tree local_70;
  rtx mem;
  long off;
  tree mem_expr;
  long offset;
  long length;
  tree inner;
  tree orig_exp;
  rtx addr;
  tree field;
  long size;
  
  local_70 = exp;
  if ((*(short *)exp == 0x78) && ((exp->field_0x3 & 8) == 0)) {
    local_70 = *(tree *)&exp->field_0x28;
  }
  prVar4 = expand_expr(exp,(rtx)0x0,ptr_mode,EXPAND_NORMAL);
  uVar5 = memory_address_addr_space(1,prVar4,0);
  mem = (rtx)gen_rtx_MEM(1,uVar5);
  while (((*(short *)local_70 == 0x74 || (*(short *)local_70 == 0x71)) &&
         ((**(short **)(*(long *)&local_70->field_0x28 + 0x10) == 10 ||
          (**(short **)(*(long *)&local_70->field_0x28 + 0x10) == 0xc))))) {
    local_70 = *(tree *)&local_70->field_0x28;
  }
  off = 0;
  if ((((*(short *)local_70 == 0x42) && (**(short **)&local_70->field_0x28 == 0x79)) &&
      (iVar2 = host_integerp(*(undefined8 *)&local_70->field_0x30,0), iVar2 != 0)) &&
     (off = tree_low_cst(*(undefined8 *)&local_70->field_0x30,0), 0 < off)) {
    local_70 = *(tree *)(*(long *)&local_70->field_0x28 + 0x28);
  }
  else if (*(short *)local_70 == 0x79) {
    local_70 = *(tree *)&local_70->field_0x28;
  }
  else if ((**(short **)&local_70->field_0x10 == 10) || (**(short **)&local_70->field_0x10 == 0xc))
  {
    local_70 = (tree)build1_stat(0x2f,*(undefined8 *)(*(long *)&local_70->field_0x10 + 0x10),
                                 local_70);
  }
  else {
    local_70 = (tree)0x0;
  }
  if (local_70 != (tree)0x0) {
    set_mem_attributes(mem,local_70,0);
    if (off != 0) {
      mem = (rtx)adjust_automodify_address_1(mem,1,0,off,0);
    }
    if ((*(long *)&(mem->u).field_0x8 != 0) && (**(long **)&(mem->u).field_0x8 != 0)) {
      if (*(long *)&(mem->u).field_0x8 == 0) {
        psVar6 = (short *)0x0;
      }
      else {
        psVar6 = **(short ***)&(mem->u).field_0x8;
      }
      if (*psVar6 == 0x29) {
        if (*(long *)&(mem->u).field_0x8 == 0) {
          mem_expr = (tree)0x0;
        }
        else {
          mem_expr = **(tree **)&(mem->u).field_0x8;
        }
        offset = -1;
        length = -1;
        for (inner = local_70;
            (((*(short *)inner == 0x2d || (*(short *)inner == 0x74)) || (*(short *)inner == 0x71))
            || ((*(short *)inner == 0x76 || (*(short *)inner == 0x78))));
            inner = *(tree *)&inner->field_0x28) {
        }
        if (*(short *)inner != 0x29) {
          fancy_abort("builtins.c",0x4a1,&DAT_0011bd60);
        }
        if ((*(long *)&(mem->u).field_0x8 != 0) &&
           (*(long *)(*(long *)&(mem->u).field_0x8 + 8) != 0)) {
          if (*(long *)&(mem->u).field_0x8 == 0) {
            psVar6 = (short *)0x0;
          }
          else {
            psVar6 = *(short **)(*(long *)&(mem->u).field_0x8 + 8);
          }
          if (*psVar6 == 0x1e) {
            if (*(long *)&(mem->u).field_0x8 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(long *)(*(long *)&(mem->u).field_0x8 + 8);
            }
            offset = *(long *)(lVar7 + 8);
          }
        }
        if (((-1 < offset) && (len != (tree)0x0)) && (iVar2 = host_integerp(len,0), iVar2 != 0)) {
          length = tree_low_cst(len,0);
        }
        for (; *(short *)inner == 0x29; inner = *(tree *)&inner->field_0x28) {
          lVar7 = *(long *)&inner->field_0x30;
          if (*(short *)mem_expr != 0x29) {
            fancy_abort("builtins.c",0x4ad,&DAT_0011bd60);
          }
          if (lVar7 != *(long *)&mem_expr->field_0x30) {
            fancy_abort("builtins.c",0x4ae,&DAT_0011bd60);
          }
          if (((*(byte *)(lVar7 + 0x3b) & 2) != 0) &&
             (((uVar3 = tree_low_cst(*(undefined8 *)(lVar7 + 0x88),1), (uVar3 & 7) != 0 ||
               (iVar2 = host_integerp(*(undefined8 *)(lVar7 + 0x30),0), iVar2 == 0)) ||
              ((*(ulong *)(*(long *)(lVar7 + 0x30) + 0x18) & 7) != 0)))) {
            fancy_abort("builtins.c",0x4b1,&DAT_0011bd60);
          }
          if (((-1 < length) && (*(long *)(lVar7 + 0x48) != 0)) &&
             ((iVar2 = host_integerp(*(undefined8 *)(lVar7 + 0x48),0), iVar2 != 0 &&
              (((lVar1 = *(long *)(*(long *)(lVar7 + 0x48) + 0x18), offset <= lVar1 &&
                (length <= lVar1)) && (length + offset <= lVar1)))))) break;
          if ((offset < 0) || (iVar2 = host_integerp(*(undefined8 *)(lVar7 + 0x70),0), iVar2 == 0))
          {
            offset = -1;
            length = -1;
          }
          else {
            lVar1 = *(long *)(*(long *)(lVar7 + 0x70) + 0x18);
            lVar7 = tree_low_cst(*(undefined8 *)(lVar7 + 0x88),1);
            if (lVar7 < 0) {
              lVar7 = lVar7 + 7;
            }
            offset = offset + lVar1 + (lVar7 >> 3);
          }
          mem_expr = *(tree *)&mem_expr->field_0x28;
        }
        if (mem_expr == (tree)0x0) {
          offset = -1;
        }
        if (*(long *)&(mem->u).field_0x8 == 0) {
          ptVar8 = (tree)0x0;
        }
        else {
          ptVar8 = **(tree **)&(mem->u).field_0x8;
        }
        if (ptVar8 != mem_expr) {
          set_mem_expr(mem,mem_expr);
          if (offset < 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = gen_rtx_CONST_INT(0,offset);
          }
          set_mem_offset(mem,uVar5);
        }
      }
    }
    set_mem_alias_set(mem,0);
    set_mem_size(mem,0);
  }
  return mem;
}



int apply_args_size(void)

{
  machine_mode mVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint regno;
  machine_mode mode;
  int align;
  
  if (apply_args_size::size < 0) {
    apply_args_size::size = (int)(byte)save_expr;
    if (cfun == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(cfun + 0x30) + 0x10);
    }
    lVar5 = (*word_mode)(uVar4,0);
    if (lVar5 != 0) {
      apply_args_size::size = apply_args_size::size + (uint)(byte)save_expr;
    }
    for (regno = 0; regno < 0x35; regno = regno + 1) {
      cVar2 = ix86_function_arg_regno_p(regno);
      if (cVar2 == '\0') {
        apply_args_mode[regno] = MAX_MODE_PARTIAL_INT;
      }
      else {
        mVar1 = *(machine_mode *)((long)&reg_raw_mode + (ulong)regno * 4);
        if (mVar1 == MAX_MODE_PARTIAL_INT) {
          fancy_abort("builtins.c",0x511,&DAT_0011bd60);
        }
        uVar3 = get_mode_alignment();
        uVar3 = uVar3 >> 3;
        if (apply_args_size::size % (int)uVar3 != 0) {
          apply_args_size::size = ((int)(uVar3 + apply_args_size::size + -1) / (int)uVar3) * uVar3;
        }
        apply_args_size::size = apply_args_size::size + (uint)(byte)(&mode_size)[mVar1];
        apply_args_mode[regno] = mVar1;
      }
    }
  }
  return apply_args_size::size;
}



int apply_result_size(void)

{
  machine_mode mVar1;
  char cVar2;
  uint uVar3;
  int regno;
  machine_mode mode;
  int align;
  
  if (apply_result_size::size < 0) {
    apply_result_size::size = 0;
    for (regno = 0; regno < 0x35; regno = regno + 1) {
      cVar2 = ix86_function_value_regno_p(regno);
      if (cVar2 == '\0') {
        apply_result_mode[regno] = MAX_MODE_PARTIAL_INT;
      }
      else {
        mVar1 = *(machine_mode *)((long)&reg_raw_mode + (long)regno * 4);
        if (mVar1 == MAX_MODE_PARTIAL_INT) {
          fancy_abort("builtins.c",0x535,&DAT_0011bd60);
        }
        uVar3 = get_mode_alignment();
        uVar3 = uVar3 >> 3;
        if (apply_result_size::size % (int)uVar3 != 0) {
          apply_result_size::size =
               ((int)(uVar3 + apply_result_size::size + -1) / (int)uVar3) * uVar3;
        }
        apply_result_size::size = apply_result_size::size + (uint)(byte)(&mode_size)[mVar1];
        apply_result_mode[regno] = mVar1;
      }
    }
    apply_result_size::size = 0x74;
  }
  return apply_result_size::size;
}



rtx result_vector(int savep,rtx result)

{
  machine_mode mVar1;
  int iVar2;
  rtx *pprVar3;
  uint uVar4;
  rtx prVar5;
  undefined8 uVar6;
  rtx prVar7;
  long lVar8;
  rtx *pprVar9;
  long in_FS_OFFSET;
  rtx local_58;
  int local_4c;
  int regno;
  int size;
  int nelts;
  machine_mode mode;
  int align;
  rtx *savevec;
  rtx reg;
  rtx mem;
  long local_10;
  
  local_4c = savep;
  local_58 = result;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (pprVar9 = &local_58; pprVar9 != &local_58; pprVar9 = (rtx *)((long)pprVar9 + -0x1000)) {
    *(undefined8 *)((long)pprVar9 + -8) = *(undefined8 *)((long)pprVar9 + -8);
  }
  *(undefined8 *)((long)pprVar9 + -8) = *(undefined8 *)((long)pprVar9 + -8);
  savevec = (rtx *)((ulong)((long)pprVar9 + -0x1a1) & 0xfffffffffffffff0);
  nelts = 0;
  size = 0;
  for (regno = 0; pprVar3 = savevec, iVar2 = nelts, regno < 0x35; regno = regno + 1) {
    mVar1 = apply_result_mode[regno];
    mode = mVar1;
    if (mVar1 != MAX_MODE_PARTIAL_INT) {
      *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x1025c2;
      uVar4 = get_mode_alignment(mVar1);
      mVar1 = mode;
      iVar2 = regno;
      align = uVar4 >> 3;
      if (size % align != 0) {
        size = align * ((align + size + -1) / align);
      }
      *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x1025fe;
      reg = (rtx)gen_rtx_REG(mVar1,iVar2);
      mVar1 = mode;
      prVar7 = local_58;
      lVar8 = (long)size;
      *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x102622;
      prVar5 = (rtx)adjust_address_1(prVar7,mVar1,lVar8,1,1);
      prVar7 = reg;
      mem = prVar5;
      if (local_4c == 0) {
        *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x102668;
        prVar7 = (rtx)gen_rtx_fmt_ee_stat(0x17,0,prVar7);
      }
      else {
        *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x102649;
        prVar7 = (rtx)gen_rtx_fmt_ee_stat(0x17,0,prVar5);
      }
      iVar2 = nelts;
      nelts = nelts + 1;
      savevec[iVar2] = prVar7;
      size = size + (uint)(byte)(&mode_size)[mode];
    }
  }
  *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x1026b9;
  uVar6 = gen_rtvec_v(iVar2,pprVar3);
  *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x1026cb;
  prVar7 = (rtx)gen_rtx_fmt_E_stat(0xf,0,uVar6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar7;
  }
                    // WARNING: Subroutine does not return
  *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x1026df;
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_apply_args_1(void)

{
  machine_mode mVar1;
  code cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  rtx prVar10;
  int size;
  int regno;
  machine_mode mode;
  int align;
  rtx struct_incoming_value;
  rtx registers;
  rtx tem;
  
  if (cfun == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(cfun + 0x30) + 0x10);
  }
  lVar5 = (*word_mode)(uVar8,1);
  iVar3 = apply_args_size();
  lVar6 = assign_stack_local(1,(long)iVar3,0xffffffff);
  size = (int)(byte)save_expr;
  if (cfun == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(cfun + 0x30) + 0x10);
  }
  lVar7 = (*word_mode)(uVar8,0);
  if (lVar7 != 0) {
    size = size + (uint)(byte)save_expr;
  }
  for (regno = 0; regno < 0x35; regno = regno + 1) {
    mVar1 = apply_args_mode[regno];
    if (mVar1 != MAX_MODE_PARTIAL_INT) {
      uVar4 = get_mode_alignment(mVar1);
      uVar4 = uVar4 >> 3;
      if (size % (int)uVar4 != 0) {
        size = uVar4 * ((int)(uVar4 + size + -1) / (int)uVar4);
      }
      gen_rtx_REG(mVar1,regno);
      adjust_address_1(lVar6,mVar1,(long)size,1,1);
      emit_move_insn();
      size = size + (uint)(byte)(&mode_size)[mVar1];
    }
  }
  uVar8 = copy_to_reg(_emit_insn);
  uVar8 = plus_constant(uVar8,(long)_validize_mem);
  uVar8 = force_operand(uVar8,0);
  uVar9 = adjust_address_1(lVar6,0x10,0,1,1);
  emit_move_insn(uVar9,uVar8);
  cVar2 = save_expr;
  if (lVar5 != 0) {
    uVar8 = copy_to_reg(lVar5);
    uVar9 = adjust_address_1(lVar6,0x10,cVar2,1,1);
    emit_move_insn(uVar9,uVar8);
  }
  prVar10 = (rtx)copy_addr_to_reg(*(undefined8 *)(lVar6 + 8));
  return prVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_apply_args(void)

{
  uint uVar1;
  rtx prVar2;
  undefined8 uVar3;
  long lVar4;
  rtx temp;
  rtx seq;
  
  prVar2 = _gen_frame_mem;
  if (_gen_frame_mem == (rtx)0x0) {
    start_sequence();
    prVar2 = expand_builtin_apply_args_1();
    uVar3 = get_insns();
    end_sequence();
    _gen_frame_mem = prVar2;
    push_topmost_sequence();
    if ((*(short *)_emit_insn == 0x25) && (uVar1 = rhs_regno(_emit_insn), 0x39 < uVar1)) {
      emit_insn_before(uVar3,_set_mem_size);
    }
    else {
      lVar4 = entry_of_function();
      emit_insn_before(uVar3,*(undefined8 *)(lVar4 + 0x18));
    }
    pop_topmost_sequence();
  }
  return prVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_apply(rtx function,rtx arguments,rtx argsize)

{
  machine_mode mVar1;
  code cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  rtx prVar7;
  long in_FS_OFFSET;
  short *local_90;
  int size;
  int regno;
  machine_mode mode;
  int align;
  rtx old_stack_level;
  rtx call_fusage;
  rtx struct_value;
  rtx result;
  rtx incoming_args;
  rtx dest;
  rtx src;
  rtx value;
  rtx call_insn;
  rtx reg;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  old_stack_level = (rtx)0x0;
  call_fusage = (rtx)0x0;
  if (cfun == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(cfun + 0x30) + 0x10);
  }
  struct_value = (rtx)(*word_mode)(uVar5,0);
  uVar5 = convert_memory_address_addr_space(0x10,arguments,0);
  iVar3 = apply_result_size();
  result = (rtx)assign_stack_local(1,(long)iVar3,0xffffffff);
  incoming_args = (rtx)gen_reg_rtx(0x10);
  uVar6 = gen_rtx_MEM(0x10,uVar5);
  emit_move_insn(incoming_args,uVar6);
  do_pending_stack_adjust();
  DAT_00128df4 = DAT_00128df4 + 1;
  emit_stack_save(0,&old_stack_level,0);
  allocate_dynamic_stack_space(argsize,0,8);
  DAT_00128fd1 = 1;
  dest = _convert_memory_address_addr_space;
  dest = (rtx)gen_rtx_MEM(1,_convert_memory_address_addr_space);
  set_mem_align(dest,0x20);
  src = (rtx)gen_rtx_MEM(1,incoming_args);
  set_mem_align(src,0x20);
  emit_block_move(dest,src,argsize,0);
  apply_args_size();
  uVar5 = gen_rtx_MEM(1,uVar5);
  set_mem_align(uVar5,0x20);
  size = (int)(byte)save_expr;
  if (struct_value != (rtx)0x0) {
    size = size + (uint)(byte)save_expr;
  }
  for (regno = 0; cVar2 = save_expr, regno < 0x35; regno = regno + 1) {
    mVar1 = apply_args_mode[regno];
    if (mVar1 != MAX_MODE_PARTIAL_INT) {
      uVar4 = get_mode_alignment(mVar1);
      uVar4 = uVar4 >> 3;
      if (size % (int)uVar4 != 0) {
        size = uVar4 * ((int)(uVar4 + size + -1) / (int)uVar4);
      }
      reg = (rtx)gen_rtx_REG(mVar1,regno);
      uVar6 = adjust_address_1(uVar5,mVar1,(long)size,1,1);
      emit_move_insn(reg,uVar6);
      use_reg();
      size = size + (uint)(byte)(&mode_size)[mVar1];
    }
  }
  if (struct_value != (rtx)0x0) {
    value = (rtx)gen_reg_rtx(0x10);
    uVar5 = adjust_address_1(uVar5,0x10,cVar2,1,1);
    emit_move_insn(value,uVar5);
    emit_move_insn(struct_value,value);
    if (*(short *)struct_value == 0x25) {
      use_reg(&call_fusage,struct_value);
    }
  }
  local_90 = (short *)prepare_call_address(0,function,0,&call_fusage,0,0);
  if (*local_90 != 0x2d) {
    local_90 = (short *)memory_address_addr_space(0xe,local_90,0);
  }
  prVar7 = result_vector(1,result);
  uVar5 = gen_rtx_MEM(0xe,local_90);
  uVar5 = gen_untyped_call(uVar5,result,prVar7);
  emit_call_insn(uVar5);
  call_insn = (rtx)last_call_insn();
  add_function_usage_to(call_insn,call_fusage);
  emit_stack_restore(0,old_stack_level,0);
  DAT_00128df4 = DAT_00128df4 + -1;
  result = (rtx)copy_addr_to_reg(*(undefined8 *)&result->u);
  prVar7 = (rtx)convert_memory_address_addr_space(ptr_mode,result,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar7;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void expand_builtin_return(rtx result)

{
  machine_mode mVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int size;
  int regno;
  machine_mode mode;
  int align;
  rtx call_fusage;
  rtx reg;
  
  call_fusage = (rtx)0x0;
  uVar3 = convert_memory_address_addr_space(0x10,result,0);
  apply_result_size();
  uVar3 = gen_rtx_MEM(1,uVar3);
  size = 0;
  for (regno = 0; regno < 0x35; regno = regno + 1) {
    mVar1 = apply_result_mode[regno];
    if (mVar1 != MAX_MODE_PARTIAL_INT) {
      uVar2 = get_mode_alignment(mVar1);
      uVar2 = uVar2 >> 3;
      if (size % (int)uVar2 != 0) {
        size = uVar2 * ((int)(uVar2 + size + -1) / (int)uVar2);
      }
      uVar4 = gen_rtx_REG(mVar1,regno);
      adjust_address_1(uVar3,mVar1,(long)size,1,1);
      emit_move_insn(uVar4);
      push_to_sequence(call_fusage);
      emit_use();
      call_fusage = (rtx)get_insns();
      end_sequence();
      size = size + (uint)(byte)(&mode_size)[mVar1];
    }
  }
  emit_insn(call_fusage);
  expand_naked_return();
  return;
}



type_class type_to_class(tree type)

{
  type_class tVar1;
  
  switch(*(undefined2 *)type) {
  case 5:
    tVar1 = offset_type_class;
    break;
  case 6:
    tVar1 = enumeral_type_class;
    break;
  case 7:
    tVar1 = boolean_type_class;
    break;
  case 8:
    tVar1 = integer_type_class;
    break;
  case 9:
    tVar1 = real_type_class;
    break;
  case 10:
    tVar1 = pointer_type_class;
    break;
  default:
    tVar1 = no_type_class;
    break;
  case 0xc:
    tVar1 = reference_type_class;
    break;
  case 0xd:
    tVar1 = complex_type_class;
    break;
  case 0xf:
    if ((type->field_0x3f & 1) == 0) {
      tVar1 = array_type_class;
    }
    else {
      tVar1 = string_type_class;
    }
    break;
  case 0x10:
    tVar1 = record_type_class;
    break;
  case 0x11:
  case 0x12:
    tVar1 = union_type_class;
    break;
  case 0x13:
    tVar1 = void_type_class;
    break;
  case 0x14:
    tVar1 = function_type_class;
    break;
  case 0x15:
    tVar1 = method_type_class;
    break;
  case 0x16:
    tVar1 = lang_type_class;
  }
  return tVar1;
}



rtx expand_builtin_classify_type(tree exp)

{
  type_class tVar1;
  rtx prVar2;
  
  if ((int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) == 3) {
    prVar2 = (rtx)gen_rtx_CONST_INT(0,0xffffffffffffffff);
  }
  else {
    tVar1 = type_to_class(*(tree *)(*(long *)&exp->field_0x40 + 0x10));
    prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)tVar1);
  }
  return prVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree mathfn_built_in_1(tree type,built_in_function fn,uchar implicit)

{
  tree *pptVar1;
  tree ptVar2;
  built_in_function fcode;
  built_in_function fcodef;
  built_in_function fcodel;
  tree *fn_arr;
  
  if (implicit == '\0') {
    pptVar1 = built_in_decls;
  }
  else {
    pptVar1 = implicit_built_in_decls;
  }
  switch(fn) {
  case BUILT_IN_ACOS:
  case BUILT_IN_ACOSF:
  case BUILT_IN_ACOSL:
    fcode = BUILT_IN_ACOS;
    fcodef = BUILT_IN_ACOSF;
    fcodel = BUILT_IN_ACOSL;
    break;
  case BUILT_IN_ACOSH:
  case BUILT_IN_ACOSHF:
  case BUILT_IN_ACOSHL:
    fcode = BUILT_IN_ACOSH;
    fcodef = BUILT_IN_ACOSHF;
    fcodel = BUILT_IN_ACOSHL;
    break;
  case BUILT_IN_ASIN:
  case BUILT_IN_ASINF:
  case BUILT_IN_ASINL:
    fcode = BUILT_IN_ASIN;
    fcodef = BUILT_IN_ASINF;
    fcodel = BUILT_IN_ASINL;
    break;
  case BUILT_IN_ASINH:
  case BUILT_IN_ASINHF:
  case BUILT_IN_ASINHL:
    fcode = BUILT_IN_ASINH;
    fcodef = BUILT_IN_ASINHF;
    fcodel = BUILT_IN_ASINHL;
    break;
  case BUILT_IN_ATAN:
  case BUILT_IN_ATANF:
  case BUILT_IN_ATANL:
    fcode = BUILT_IN_ATAN;
    fcodef = BUILT_IN_ATANF;
    fcodel = BUILT_IN_ATANL;
    break;
  case BUILT_IN_ATAN2:
  case BUILT_IN_ATAN2F:
  case BUILT_IN_ATAN2L:
    fcode = BUILT_IN_ATAN2;
    fcodef = BUILT_IN_ATAN2F;
    fcodel = BUILT_IN_ATAN2L;
    break;
  case BUILT_IN_ATANH:
  case BUILT_IN_ATANHF:
  case BUILT_IN_ATANHL:
    fcode = BUILT_IN_ATANH;
    fcodef = BUILT_IN_ATANHF;
    fcodel = BUILT_IN_ATANHL;
    break;
  case BUILT_IN_CBRT:
  case BUILT_IN_CBRTF:
  case BUILT_IN_CBRTL:
    fcode = BUILT_IN_CBRT;
    fcodef = BUILT_IN_CBRTF;
    fcodel = BUILT_IN_CBRTL;
    break;
  case BUILT_IN_CEIL:
  case BUILT_IN_CEILF:
  case BUILT_IN_CEILL:
    fcode = BUILT_IN_CEIL;
    fcodef = BUILT_IN_CEILF;
    fcodel = BUILT_IN_CEILL;
    break;
  case BUILT_IN_COPYSIGN:
  case BUILT_IN_COPYSIGNF:
  case BUILT_IN_COPYSIGNL:
    fcode = BUILT_IN_COPYSIGN;
    fcodef = BUILT_IN_COPYSIGNF;
    fcodel = BUILT_IN_COPYSIGNL;
    break;
  case BUILT_IN_COS:
  case BUILT_IN_COSF:
  case BUILT_IN_COSL:
    fcode = BUILT_IN_COS;
    fcodef = BUILT_IN_COSF;
    fcodel = BUILT_IN_COSL;
    break;
  case BUILT_IN_COSH:
  case BUILT_IN_COSHF:
  case BUILT_IN_COSHL:
    fcode = BUILT_IN_COSH;
    fcodef = BUILT_IN_COSHF;
    fcodel = BUILT_IN_COSHL;
    break;
  case BUILT_IN_DREM:
  case BUILT_IN_DREMF:
  case BUILT_IN_DREML:
    fcode = BUILT_IN_DREM;
    fcodef = BUILT_IN_DREMF;
    fcodel = BUILT_IN_DREML;
    break;
  case BUILT_IN_ERF:
  case BUILT_IN_ERFF:
  case BUILT_IN_ERFL:
    fcode = BUILT_IN_ERF;
    fcodef = BUILT_IN_ERFF;
    fcodel = BUILT_IN_ERFL;
    break;
  case BUILT_IN_ERFC:
  case BUILT_IN_ERFCF:
  case BUILT_IN_ERFCL:
    fcode = BUILT_IN_ERFC;
    fcodef = BUILT_IN_ERFCF;
    fcodel = BUILT_IN_ERFCL;
    break;
  case BUILT_IN_EXP:
  case BUILT_IN_EXPF:
  case BUILT_IN_EXPL:
    fcode = BUILT_IN_EXP;
    fcodef = BUILT_IN_EXPF;
    fcodel = BUILT_IN_EXPL;
    break;
  case BUILT_IN_EXP10:
  case BUILT_IN_EXP10F:
  case BUILT_IN_EXP10L:
    fcode = BUILT_IN_EXP10;
    fcodef = BUILT_IN_EXP10F;
    fcodel = BUILT_IN_EXP10L;
    break;
  case BUILT_IN_EXP2:
  case BUILT_IN_EXP2F:
  case BUILT_IN_EXP2L:
    fcode = BUILT_IN_EXP2;
    fcodef = BUILT_IN_EXP2F;
    fcodel = BUILT_IN_EXP2L;
    break;
  case BUILT_IN_EXPM1:
  case BUILT_IN_EXPM1F:
  case BUILT_IN_EXPM1L:
    fcode = BUILT_IN_EXPM1;
    fcodef = BUILT_IN_EXPM1F;
    fcodel = BUILT_IN_EXPM1L;
    break;
  case BUILT_IN_FABS:
  case BUILT_IN_FABSF:
  case BUILT_IN_FABSL:
    fcode = BUILT_IN_FABS;
    fcodef = BUILT_IN_FABSF;
    fcodel = BUILT_IN_FABSL;
    break;
  case BUILT_IN_FDIM:
  case BUILT_IN_FDIMF:
  case BUILT_IN_FDIML:
    fcode = BUILT_IN_FDIM;
    fcodef = BUILT_IN_FDIMF;
    fcodel = BUILT_IN_FDIML;
    break;
  case BUILT_IN_FLOOR:
  case BUILT_IN_FLOORF:
  case BUILT_IN_FLOORL:
    fcode = BUILT_IN_FLOOR;
    fcodef = BUILT_IN_FLOORF;
    fcodel = BUILT_IN_FLOORL;
    break;
  case BUILT_IN_FMA:
  case BUILT_IN_FMAF:
  case BUILT_IN_FMAL:
    fcode = BUILT_IN_FMA;
    fcodef = BUILT_IN_FMAF;
    fcodel = BUILT_IN_FMAL;
    break;
  case BUILT_IN_FMAX:
  case BUILT_IN_FMAXF:
  case BUILT_IN_FMAXL:
    fcode = BUILT_IN_FMAX;
    fcodef = BUILT_IN_FMAXF;
    fcodel = BUILT_IN_FMAXL;
    break;
  case BUILT_IN_FMIN:
  case BUILT_IN_FMINF:
  case BUILT_IN_FMINL:
    fcode = BUILT_IN_FMIN;
    fcodef = BUILT_IN_FMINF;
    fcodel = BUILT_IN_FMINL;
    break;
  case BUILT_IN_FMOD:
  case BUILT_IN_FMODF:
  case BUILT_IN_FMODL:
    fcode = BUILT_IN_FMOD;
    fcodef = BUILT_IN_FMODF;
    fcodel = BUILT_IN_FMODL;
    break;
  case BUILT_IN_FREXP:
  case BUILT_IN_FREXPF:
  case BUILT_IN_FREXPL:
    fcode = BUILT_IN_FREXP;
    fcodef = BUILT_IN_FREXPF;
    fcodel = BUILT_IN_FREXPL;
    break;
  case BUILT_IN_GAMMA:
  case BUILT_IN_GAMMAF:
  case BUILT_IN_GAMMAL:
    fcode = BUILT_IN_GAMMA;
    fcodef = BUILT_IN_GAMMAF;
    fcodel = BUILT_IN_GAMMAL;
    break;
  case BUILT_IN_GAMMA_R:
  case BUILT_IN_GAMMAF_R:
  case BUILT_IN_GAMMAL_R:
    fcode = BUILT_IN_GAMMA_R;
    fcodef = BUILT_IN_GAMMAF_R;
    fcodel = BUILT_IN_GAMMAL_R;
    break;
  case BUILT_IN_HUGE_VAL:
  case BUILT_IN_HUGE_VALF:
  case BUILT_IN_HUGE_VALL:
    fcode = BUILT_IN_HUGE_VAL;
    fcodef = BUILT_IN_HUGE_VALF;
    fcodel = BUILT_IN_HUGE_VALL;
    break;
  case BUILT_IN_HYPOT:
  case BUILT_IN_HYPOTF:
  case BUILT_IN_HYPOTL:
    fcode = BUILT_IN_HYPOT;
    fcodef = BUILT_IN_HYPOTF;
    fcodel = BUILT_IN_HYPOTL;
    break;
  case BUILT_IN_ILOGB:
  case BUILT_IN_ILOGBF:
  case BUILT_IN_ILOGBL:
    fcode = BUILT_IN_ILOGB;
    fcodef = BUILT_IN_ILOGBF;
    fcodel = BUILT_IN_ILOGBL;
    break;
  case BUILT_IN_INF:
  case BUILT_IN_INFF:
  case BUILT_IN_INFL:
    fcode = BUILT_IN_INF;
    fcodef = BUILT_IN_INFF;
    fcodel = BUILT_IN_INFL;
    break;
  default:
    return (tree)0x0;
  case BUILT_IN_J0:
  case BUILT_IN_J0F:
  case BUILT_IN_J0L:
    fcode = BUILT_IN_J0;
    fcodef = BUILT_IN_J0F;
    fcodel = BUILT_IN_J0L;
    break;
  case BUILT_IN_J1:
  case BUILT_IN_J1F:
  case BUILT_IN_J1L:
    fcode = BUILT_IN_J1;
    fcodef = BUILT_IN_J1F;
    fcodel = BUILT_IN_J1L;
    break;
  case BUILT_IN_JN:
  case BUILT_IN_JNF:
  case BUILT_IN_JNL:
    fcode = BUILT_IN_JN;
    fcodef = BUILT_IN_JNF;
    fcodel = BUILT_IN_JNL;
    break;
  case BUILT_IN_LCEIL:
  case BUILT_IN_LCEILF:
  case BUILT_IN_LCEILL:
    fcode = BUILT_IN_LCEIL;
    fcodef = BUILT_IN_LCEILF;
    fcodel = BUILT_IN_LCEILL;
    break;
  case BUILT_IN_LDEXP:
  case BUILT_IN_LDEXPF:
  case BUILT_IN_LDEXPL:
    fcode = BUILT_IN_LDEXP;
    fcodef = BUILT_IN_LDEXPF;
    fcodel = BUILT_IN_LDEXPL;
    break;
  case BUILT_IN_LFLOOR:
  case BUILT_IN_LFLOORF:
  case BUILT_IN_LFLOORL:
    fcode = BUILT_IN_LFLOOR;
    fcodef = BUILT_IN_LFLOORF;
    fcodel = BUILT_IN_LFLOORL;
    break;
  case BUILT_IN_LGAMMA:
  case BUILT_IN_LGAMMAF:
  case BUILT_IN_LGAMMAL:
    fcode = BUILT_IN_LGAMMA;
    fcodef = BUILT_IN_LGAMMAF;
    fcodel = BUILT_IN_LGAMMAL;
    break;
  case BUILT_IN_LGAMMA_R:
  case BUILT_IN_LGAMMAF_R:
  case BUILT_IN_LGAMMAL_R:
    fcode = BUILT_IN_LGAMMA_R;
    fcodef = BUILT_IN_LGAMMAF_R;
    fcodel = BUILT_IN_LGAMMAL_R;
    break;
  case BUILT_IN_LLCEIL:
  case BUILT_IN_LLCEILF:
  case 0x80:
    fcode = BUILT_IN_LLCEIL;
    fcodef = BUILT_IN_LLCEILF;
    fcodel = 0x80;
    break;
  case 0x81:
  case 0x82:
  case 0x83:
    fcode = 0x81;
    fcodef = 0x82;
    fcodel = 0x83;
    break;
  case 0x84:
  case 0x85:
  case 0x86:
    fcode = 0x84;
    fcodef = 0x85;
    fcodel = 0x86;
    break;
  case 0x87:
  case 0x88:
  case 0x89:
    fcode = 0x87;
    fcodef = 0x88;
    fcodel = 0x89;
    break;
  case 0x8a:
  case 0x97:
  case 0x98:
    fcode = 0x8a;
    fcodef = 0x97;
    fcodel = 0x98;
    break;
  case 0x8b:
  case 0x8c:
  case 0x8d:
    fcode = 0x8b;
    fcodef = 0x8c;
    fcodel = 0x8d;
    break;
  case 0x8e:
  case 0x8f:
  case 0x90:
    fcode = 0x8e;
    fcodef = 0x8f;
    fcodel = 0x90;
    break;
  case 0x91:
  case 0x92:
  case 0x93:
    fcode = 0x91;
    fcodef = 0x92;
    fcodel = 0x93;
    break;
  case 0x94:
  case 0x95:
  case 0x96:
    fcode = 0x94;
    fcodef = 0x95;
    fcodel = 0x96;
    break;
  case 0x99:
  case 0x9a:
  case 0x9b:
    fcode = 0x99;
    fcodef = 0x9a;
    fcodel = 0x9b;
    break;
  case 0x9c:
  case 0x9d:
  case 0x9e:
    fcode = 0x9c;
    fcodef = 0x9d;
    fcodel = 0x9e;
    break;
  case 0x9f:
  case 0xa0:
  case 0xa1:
    fcode = 0x9f;
    fcodef = 0xa0;
    fcodel = 0xa1;
    break;
  case 0xa2:
  case 0xa3:
  case 0xa4:
    fcode = 0xa2;
    fcodef = 0xa3;
    fcodel = 0xa4;
    break;
  case 0xa8:
  case 0xa9:
  case 0xaa:
    fcode = 0xa8;
    fcodef = 0xa9;
    fcodel = 0xaa;
    break;
  case 0xab:
  case 0xac:
  case 0xad:
    fcode = 0xab;
    fcodef = 0xac;
    fcodel = 0xad;
    break;
  case 0xae:
  case 0xaf:
  case 0xb0:
    fcode = 0xae;
    fcodef = 0xaf;
    fcodel = 0xb0;
    break;
  case 0xb1:
  case 0xb2:
  case 0xb3:
    fcode = 0xb1;
    fcodef = 0xb2;
    fcodel = 0xb3;
    break;
  case 0xb4:
  case 0xb8:
  case 0xbc:
    fcode = 0xb4;
    fcodef = 0xb8;
    fcodel = 0xbc;
    break;
  case 0xb5:
  case 0xb6:
  case 0xb7:
    fcode = 0xb5;
    fcodef = 0xb6;
    fcodel = 0xb7;
    break;
  case 0xb9:
  case 0xba:
  case 0xbb:
    fcode = 0xb9;
    fcodef = 0xba;
    fcodel = 0xbb;
    break;
  case 0xbd:
  case 0xbe:
  case 0xbf:
    fcode = 0xbd;
    fcodef = 0xbe;
    fcodel = 0xbf;
    break;
  case 0xc0:
  case 0xc1:
  case 0xc2:
    fcode = 0xc0;
    fcodef = 0xc1;
    fcodel = 0xc2;
    break;
  case 0xc3:
  case 0xc4:
  case 0xc5:
    fcode = 0xc3;
    fcodef = 0xc4;
    fcodel = 0xc5;
    break;
  case 0xc6:
  case 199:
  case 200:
    fcode = 0xc6;
    fcodef = 199;
    fcodel = 200;
    break;
  case 0xc9:
  case 0xca:
  case 0xcb:
    fcode = 0xc9;
    fcodef = 0xca;
    fcodel = 0xcb;
    break;
  case 0xcc:
  case 0xcd:
  case 0xce:
    fcode = 0xcc;
    fcodef = 0xcd;
    fcodel = 0xce;
    break;
  case 0xcf:
  case 0xd0:
  case 0xd1:
    fcode = 0xcf;
    fcodef = 0xd0;
    fcodel = 0xd1;
    break;
  case 0xd2:
  case 0xd3:
  case 0xd4:
    fcode = 0xd2;
    fcodef = 0xd3;
    fcodel = 0xd4;
    break;
  case 0xd8:
  case 0xd9:
  case 0xda:
    fcode = 0xd8;
    fcodef = 0xd9;
    fcodel = 0xda;
    break;
  case 0xdb:
  case 0xdf:
  case 0xe3:
    fcode = 0xdb;
    fcodef = 0xdf;
    fcodel = 0xe3;
    break;
  case 0xdc:
  case 0xdd:
  case 0xde:
    fcode = 0xdc;
    fcodef = 0xdd;
    fcodel = 0xde;
    break;
  case 0xe0:
  case 0xe1:
  case 0xe2:
    fcode = 0xe0;
    fcodef = 0xe1;
    fcodel = 0xe2;
    break;
  case 0xe4:
  case 0xe5:
  case 0xe6:
    fcode = 0xe4;
    fcodef = 0xe5;
    fcodel = 0xe6;
    break;
  case 0xe7:
  case 0xe8:
  case 0xec:
    fcode = 0xe7;
    fcodef = 0xe8;
    fcodel = 0xec;
    break;
  case 0xe9:
  case 0xea:
  case 0xeb:
    fcode = 0xe9;
    fcodef = 0xea;
    fcodel = 0xeb;
    break;
  case 0xed:
  case 0xee:
  case 0xef:
    fcode = 0xed;
    fcodef = 0xee;
    fcodel = 0xef;
    break;
  case 0xf0:
  case 0xf1:
  case 0xf2:
    fcode = 0xf0;
    fcodef = 0xf1;
    fcodel = 0xf2;
    break;
  case 0xf3:
  case 0xf4:
  case 0xf5:
    fcode = 0xf3;
    fcodef = 0xf4;
    fcodel = 0xf5;
    break;
  case 0xf6:
  case 0xf7:
  case 0xf8:
    fcode = 0xf6;
    fcodef = 0xf7;
    fcodel = 0xf8;
    break;
  case 0xf9:
  case 0xfa:
  case 0xfb:
    fcode = 0xf9;
    fcodef = 0xfa;
    fcodel = 0xfb;
    break;
  case BUILT_IN_CEXPI:
  case BUILT_IN_CEXPIF:
  case BUILT_IN_CEXPIL:
    fcode = BUILT_IN_CEXPI;
    fcodef = BUILT_IN_CEXPIF;
    fcodel = BUILT_IN_CEXPIL;
    break;
  case BUILT_IN_ISINF:
  case BUILT_IN_ISINFF:
  case BUILT_IN_ISINFL:
    fcode = BUILT_IN_ISINF;
    fcodef = BUILT_IN_ISINFF;
    fcodel = BUILT_IN_ISINFL;
  }
  if (*(long *)&type->field_0x80 == _emit_insn_before) {
    ptVar2 = pptVar1[(uint)fcode];
  }
  else if (*(long *)&type->field_0x80 == _push_topmost_sequence) {
    ptVar2 = pptVar1[(uint)fcodef];
  }
  else if (*(long *)&type->field_0x80 == _entry_of_function) {
    ptVar2 = pptVar1[(uint)fcodel];
  }
  else {
    ptVar2 = (tree)0x0;
  }
  return ptVar2;
}



tree mathfn_built_in(tree type,built_in_function fn)

{
  tree ptVar1;
  
  ptVar1 = mathfn_built_in_1(type,fn,'\x01');
  return ptVar1;
}



void expand_errno_check(tree exp,rtx target)

{
  undefined8 uVar1;
  undefined8 uVar2;
  rtx lab;
  
  uVar2 = 0x103ac0;
  uVar1 = gen_label_rtx();
  do_compare_rtx_and_jump(target,target,0x51,0,target->field_0x2,0,0,uVar1,0x270c,uVar2);
  exp->field_0x2 = exp->field_0x2 & 0xfb;
  DAT_00128df4 = DAT_00128df4 + 1;
  expand_call(exp,target,0);
  DAT_00128df4 = DAT_00128df4 + -1;
  emit_label(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_mathfn(tree exp,rtx target,rtx subtarget)

{
  uint uVar1;
  uchar uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  tree ptVar7;
  rtx prVar8;
  bool bVar9;
  rtx local_48;
  uchar errno_set;
  machine_mode mode;
  optab builtin_optab;
  tree fndecl;
  tree arg;
  rtx op0;
  rtx insns;
  
  lVar5 = get_callee_fndecl(exp);
  bVar9 = false;
  uVar2 = validate_arglist(exp,9,0x13);
  if (uVar2 == '\0') {
    return (rtx)0x0;
  }
  ptVar7 = *(tree *)&exp->field_0x40;
  switch(*(ushort *)(lVar5 + 0xd8) & 0x7ff) {
  case 0:
  case 1:
  case 5:
    builtin_optab = (optab)0x1308b8;
    break;
  default:
    fancy_abort("builtins.c",0x7c7,&DAT_0011bd60);
    break;
  case 6:
  case 7:
  case 0xb:
    builtin_optab = (optab)0x1305b8;
    break;
  case 0xc:
  case 0x10:
  case 0x14:
    builtin_optab = (optab)0x132838;
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
    builtin_optab = (optab)0x131f38;
    break;
  case 0x2d:
  case 0x34:
  case 0x35:
    bVar9 = true;
    builtin_optab = (optab)0x130a38;
    break;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0xb5:
  case 0xb6:
  case 0xb7:
    bVar9 = true;
    builtin_optab = (optab)0x130bb8;
    break;
  case 0x31:
  case 0x32:
  case 0x33:
    bVar9 = true;
    builtin_optab = (optab)0x130d38;
    break;
  case 0x36:
  case 0x37:
  case 0x38:
    bVar9 = true;
    builtin_optab = (optab)0x130eb8;
    break;
  case 0x3f:
  case 0x40:
  case 0x41:
    builtin_optab = (optab)0x131db8;
    break;
  case 0x8a:
  case 0x97:
  case 0x98:
    bVar9 = true;
    builtin_optab = (optab)0x1317b8;
    break;
  case 0x8b:
  case 0x8c:
  case 0x8d:
    bVar9 = true;
    builtin_optab = (optab)0x131938;
    break;
  case 0x8e:
  case 0x8f:
  case 0x90:
    bVar9 = true;
    builtin_optab = (optab)0x131c38;
    break;
  case 0x91:
  case 0x92:
  case 0x93:
    bVar9 = true;
    builtin_optab = (optab)0x131ab8;
    break;
  case 0x94:
  case 0x95:
  case 0x96:
    bVar9 = true;
    builtin_optab = (optab)0x1314b8;
    break;
  case 0xab:
  case 0xac:
  case 0xad:
    builtin_optab = (optab)0x1323b8;
    if ((int)flag_trapping_math == 0) goto switchD_00103bf5_caseD_c3;
    break;
  case 0xc3:
  case 0xc4:
  case 0xc5:
switchD_00103bf5_caseD_c3:
    builtin_optab = (optab)0x132538;
    break;
  case 0xc6:
  case 199:
  case 200:
    builtin_optab = (optab)0x132238;
    break;
  case 0xd8:
  case 0xd9:
  case 0xda:
    builtin_optab = (optab)0x131338;
    break;
  case 0xe4:
  case 0xe5:
  case 0xe6:
    cVar3 = tree_expr_nonnegative_p(ptVar7);
    bVar9 = cVar3 == '\0';
    builtin_optab = (optab)0x130138;
    break;
  case 0xe7:
  case 0xe8:
  case 0xec:
    builtin_optab = (optab)0x1326b8;
    break;
  case 0xf0:
  case 0xf1:
  case 0xf2:
    builtin_optab = (optab)0x1320b8;
  }
  if (**(short **)&exp->field_0x10 == 0xe) {
    uVar4 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  else {
    uVar4 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
  }
  if (((int)flag_errno_math != 0) &&
     (((((&mode_class)[uVar4] == '\b' || ((&mode_class)[uVar4] == '\t')) ||
       ((&mode_class)[uVar4] == '\v')) || ((&mode_class)[uVar4] == '\x11')))) {
    uVar1 = uVar4;
    if (((&mode_class)[uVar4] != '\b') && ((&mode_class)[uVar4] != '\t')) {
      uVar1 = (uint)(byte)(&mode_inner)[uVar4];
    }
    if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)(uVar1 - 0x26) * 8) + 0x2e) != '\0') &&
       (flag_finite_math_only == 0)) goto LAB_00103e81;
  }
  bVar9 = false;
LAB_00103e81:
  local_48 = target;
  if (builtin_optab->handlers[(int)uVar4].insn_code != CODE_FOR_nothing) {
    uVar6 = gen_reg_rtx(uVar4);
    ptVar7 = builtin_save_expr(ptVar7);
    *(tree *)&exp->field_0x40 = ptVar7;
    prVar8 = expand_expr(ptVar7,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    start_sequence();
    local_48 = (rtx)expand_unop(uVar4,builtin_optab,prVar8,uVar6,0);
    if (local_48 != (rtx)0x0) {
      if (bVar9) {
        expand_errno_check(exp,local_48);
      }
      uVar6 = get_insns();
      end_sequence();
      emit_insn(uVar6);
      return local_48;
    }
    end_sequence();
  }
  prVar8 = (rtx)expand_call(exp,local_48,local_48 == _vector_type_mode);
  return prVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_mathfn_2(tree exp,rtx target,rtx subtarget)

{
  uint uVar1;
  bool bVar2;
  uchar uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  tree ptVar9;
  tree ptVar10;
  rtx prVar11;
  rtx prVar12;
  undefined8 uVar13;
  uchar errno_set;
  int op1_type;
  machine_mode mode;
  optab builtin_optab;
  tree fndecl;
  tree arg0;
  tree arg1;
  rtx op0;
  rtx op1;
  rtx insns;
  
  op1_type = 9;
  lVar7 = get_callee_fndecl(exp);
  bVar2 = true;
  uVar4 = *(ushort *)(lVar7 + 0xd8) & 0x7ff;
  if (uVar4 < 0x75) {
    if (0x71 < uVar4) {
LAB_00103fd0:
      op1_type = 8;
    }
  }
  else if (uVar4 - 0xcc < 6) goto LAB_00103fd0;
  uVar3 = validate_arglist(exp,9,(ulong)(uint)op1_type,0x13);
  if (uVar3 == '\0') {
    return (rtx)0x0;
  }
  ptVar9 = *(tree *)&exp->field_0x40;
  ptVar10 = *(tree *)&exp->field_0x48;
  uVar4 = *(ushort *)(lVar7 + 0xd8) & 0x7ff;
  if (uVar4 < 0xd2) {
    if (uVar4 < 0xb4) {
      if (uVar4 < 0x75) {
        uVar6 = (uint)uVar4;
        if (0x71 < uVar4) goto LAB_0010429d;
        if (uVar6 < 0x4e) {
          if (0x4a < uVar6) {
            builtin_optab = (optab)0x12c9b8;
            goto LAB_001042dc;
          }
          if (uVar6 < 0x10) {
            if (0xc < uVar4) {
              builtin_optab = (optab)0x12e938;
              goto LAB_001042dc;
            }
          }
          else if (uVar6 - 0x24 < 3) goto switchD_001040a1_caseD_bd;
        }
      }
      goto switchD_001040a1_caseD_b5;
    }
    switch(uVar4) {
    case 0xb4:
    case 0xb8:
    case 0xbc:
      builtin_optab = (optab)0x12e7b8;
      break;
    default:
      goto switchD_001040a1_caseD_b5;
    case 0xbd:
    case 0xbe:
    case 0xbf:
switchD_001040a1_caseD_bd:
      builtin_optab = (optab)0x12cb38;
      break;
    case 0xc9:
    case 0xca:
    case 0xcb:
      if (**(short **)&exp->field_0x10 == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar6] == '\t') {
        if (**(short **)&exp->field_0x10 == 0xe) {
          iVar5 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
          uVar6 = iVar5 - 0x26;
        }
        else {
          uVar6 = *(byte *)(*(long *)&exp->field_0x10 + 0x3e) - 0x26;
        }
      }
      else if (**(short **)&exp->field_0x10 == 0xe) {
        iVar5 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
        uVar6 = iVar5 - 0x26;
      }
      else {
        uVar6 = *(byte *)(*(long *)&exp->field_0x10 + 0x3e) - 0x26;
      }
      if (*(int *)(*(long *)(&real_format_for_mode + (ulong)uVar6 * 8) + 0x10) != 2) {
        return (rtx)0x0;
      }
      builtin_optab = (optab)0x1311b8;
      break;
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
      if (**(short **)&exp->field_0x10 == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar6] == '\t') {
        if (**(short **)&exp->field_0x10 == 0xe) {
          iVar5 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
          uVar6 = iVar5 - 0x26;
        }
        else {
          uVar6 = *(byte *)(*(long *)&exp->field_0x10 + 0x3e) - 0x26;
        }
      }
      else if (**(short **)&exp->field_0x10 == 0xe) {
        iVar5 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
        uVar6 = iVar5 - 0x26;
      }
      else {
        uVar6 = *(byte *)(*(long *)&exp->field_0x10 + 0x3e) - 0x26;
      }
      if (*(int *)(*(long *)(&real_format_for_mode + (ulong)uVar6 * 8) + 0x10) != 2) {
        return (rtx)0x0;
      }
LAB_0010429d:
      builtin_optab = (optab)0x131038;
    }
  }
  else {
switchD_001040a1_caseD_b5:
    fancy_abort("builtins.c",0x830,&DAT_0011bd60);
  }
LAB_001042dc:
  if (**(short **)&exp->field_0x10 == 0xe) {
    uVar6 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  else {
    uVar6 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
  }
  if (builtin_optab->handlers[(int)uVar6].insn_code == CODE_FOR_nothing) {
    return (rtx)0x0;
  }
  uVar8 = gen_reg_rtx(uVar6);
  if (((int)flag_errno_math != 0) &&
     (((((&mode_class)[uVar6] == '\b' || ((&mode_class)[uVar6] == '\t')) ||
       ((&mode_class)[uVar6] == '\v')) || ((&mode_class)[uVar6] == '\x11')))) {
    uVar1 = uVar6;
    if (((&mode_class)[uVar6] != '\b') && ((&mode_class)[uVar6] != '\t')) {
      uVar1 = (uint)(byte)(&mode_inner)[uVar6];
    }
    if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)(uVar1 - 0x26) * 8) + 0x2e) != '\0') &&
       (flag_finite_math_only == 0)) goto LAB_00104402;
  }
  bVar2 = false;
LAB_00104402:
  ptVar9 = builtin_save_expr(ptVar9);
  *(tree *)&exp->field_0x40 = ptVar9;
  ptVar10 = builtin_save_expr(ptVar10);
  *(tree *)&exp->field_0x48 = ptVar10;
  prVar11 = expand_expr(ptVar9,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  prVar12 = expand_normal(ptVar10);
  uVar13 = 0x10446d;
  start_sequence();
  prVar11 = (rtx)expand_binop(uVar6,builtin_optab,prVar11,prVar12,uVar8,0,0,uVar13);
  if (prVar11 == (rtx)0x0) {
    end_sequence();
    prVar11 = (rtx)expand_call(exp,0,_vector_type_mode == 0);
  }
  else {
    if (bVar2) {
      expand_errno_check(exp,prVar11);
    }
    uVar8 = get_insns();
    end_sequence();
    emit_insn(uVar8);
  }
  return prVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_mathfn_3(tree exp,rtx target,rtx subtarget)

{
  uchar uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  tree ptVar5;
  rtx prVar6;
  undefined8 uVar7;
  rtx local_48;
  int result;
  machine_mode mode;
  optab builtin_optab;
  tree fndecl;
  tree arg;
  rtx op0;
  rtx insns;
  
  lVar4 = get_callee_fndecl(exp);
  uVar1 = validate_arglist(exp,9,0x13);
  if (uVar1 == '\0') {
    return (rtx)0x0;
  }
  ptVar5 = *(tree *)&exp->field_0x40;
  uVar2 = *(ushort *)(lVar4 + 0xd8) & 0x7ff;
  if (uVar2 < 0xe4) {
    if (0xda < uVar2) {
      if ((1 << ((char)uVar2 + 0x25U & 0x3f) & 0x111U) != 0) goto LAB_001045ba;
      goto LAB_001045c7;
    }
    if (uVar2 < 0x20) {
      if (uVar2 < 0x1e) goto LAB_001045c7;
    }
    else if (uVar2 != 0x23) goto LAB_001045c7;
LAB_001045ba:
    builtin_optab = (optab)0x1302b8;
  }
  else {
LAB_001045c7:
    fancy_abort("builtins.c",0x87c,&DAT_0011bd60);
  }
  if (**(short **)&exp->field_0x10 == 0xe) {
    uVar3 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  else {
    uVar3 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
  }
  if (builtin_optab->handlers[(int)uVar3].insn_code == CODE_FOR_nothing) {
    uVar2 = *(ushort *)(lVar4 + 0xd8) & 0x7ff;
    if (uVar2 < 0xe4) {
      if (uVar2 < 0xdb) {
        if (uVar2 < 0x20) {
          if (0x1d < uVar2) {
LAB_00104693:
            builtin_optab = (optab)0x130738;
            goto LAB_001046bb;
          }
        }
        else if (uVar2 == 0x23) goto LAB_00104693;
      }
      else if ((1 << ((char)uVar2 + 0x25U & 0x3f) & 0x111U) != 0) {
        builtin_optab = (optab)0x130438;
        goto LAB_001046bb;
      }
    }
    fancy_abort("builtins.c",0x88c,&DAT_0011bd60);
  }
LAB_001046bb:
  local_48 = target;
  if (builtin_optab->handlers[(int)uVar3].insn_code == CODE_FOR_nothing) goto LAB_0010485e;
  local_48 = (rtx)gen_reg_rtx(uVar3);
  ptVar5 = builtin_save_expr(ptVar5);
  *(tree *)&exp->field_0x40 = ptVar5;
  prVar6 = expand_expr(ptVar5,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  start_sequence();
  if (builtin_optab == (optab)0x1302b8) {
    uVar2 = *(ushort *)(lVar4 + 0xd8) & 0x7ff;
    if (uVar2 < 0xe4) {
      if (uVar2 < 0xdb) {
        if (uVar2 < 0x20) {
          if (0x1d < uVar2) {
LAB_001047b6:
            result = expand_twoval_unop(0x1302b8,prVar6,local_48,0,0);
            goto LAB_001047f2;
          }
        }
        else if (uVar2 == 0x23) goto LAB_001047b6;
        goto LAB_001047da;
      }
      if ((1 << ((char)uVar2 + 0x25U & 0x3f) & 0x111U) == 0) goto LAB_001047da;
      result = expand_twoval_unop(0x1302b8,prVar6,0,local_48,0);
    }
    else {
LAB_001047da:
      fancy_abort("builtins.c",0x8ac,&DAT_0011bd60);
    }
LAB_001047f2:
    if (result == 0) {
      fancy_abort("builtins.c",0x8ae,&DAT_0011bd60);
    }
  }
  else {
    local_48 = (rtx)expand_unop(uVar3,builtin_optab,prVar6,local_48,0);
  }
  if (local_48 != (rtx)0x0) {
    uVar7 = get_insns();
    end_sequence();
    emit_insn(uVar7);
    return local_48;
  }
  end_sequence();
LAB_0010485e:
  prVar6 = (rtx)expand_call(exp,local_48,local_48 == _vector_type_mode);
  return prVar6;
}



insn_code interclass_mathfn_icode(tree arg,tree fndecl)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  insn_code iVar4;
  uchar errno_set;
  machine_mode mode;
  optab builtin_optab;
  
  bVar1 = false;
  builtin_optab = (optab)0x0;
  uVar2 = *(ushort *)&fndecl->field_0xd8 & 0x7ff;
  if (uVar2 < 0x60) {
    if (0x5c < uVar2) {
      bVar1 = true;
      builtin_optab = (optab)0x131638;
      goto LAB_00104940;
    }
  }
  else if ((uVar2 < 0x1e2) && (0x1cb < uVar2)) {
    switch(uVar2) {
    case 0x1cc:
    case 0x1cd:
    case 0x1ce:
    case 0x1cf:
    case 0x1d0:
    case 0x1d1:
    case 0x1d3:
    case 0x1d8:
    case 0x1d9:
    case 0x1da:
    case 0x1e1:
      break;
    default:
      goto switchD_001048f4_caseD_1d2;
    case 0x1d5:
    case 0x1d6:
    case 0x1d7:
      builtin_optab = (optab)0x132cb8;
    }
    goto LAB_00104940;
  }
switchD_001048f4_caseD_1d2:
  fancy_abort("builtins.c",0x8e6,&DAT_0011bd60);
LAB_00104940:
  if (((int)flag_errno_math == 0) || (!bVar1)) {
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar3 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar3 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if (builtin_optab == (optab)0x0) {
      iVar4 = CODE_FOR_nothing;
    }
    else {
      iVar4 = builtin_optab->handlers[(int)uVar3].insn_code;
    }
  }
  else {
    iVar4 = CODE_FOR_nothing;
  }
  return iVar4;
}



rtx expand_builtin_interclass_mathfn(tree exp,rtx target,rtx subtarget)

{
  byte bVar1;
  tree arg_00;
  uchar uVar2;
  char cVar3;
  insn_code iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  tree ptVar8;
  undefined8 uVar9;
  rtx local_58;
  insn_code icode;
  machine_mode mode;
  rtx op0;
  tree fndecl;
  tree arg;
  rtx last;
  tree orig_arg;
  
  ptVar8 = (tree)get_callee_fndecl(exp);
  uVar2 = validate_arglist(exp,9,0x13);
  if (uVar2 == '\0') {
    return (rtx)0x0;
  }
  arg_00 = *(tree *)&exp->field_0x40;
  iVar4 = interclass_mathfn_icode(arg_00,ptVar8);
  if (**(short **)&arg_00->field_0x10 == 0xe) {
    uVar5 = vector_type_mode(*(undefined8 *)&arg_00->field_0x10);
  }
  else {
    uVar5 = (uint)*(byte *)(*(long *)&arg_00->field_0x10 + 0x3e);
  }
  if (iVar4 == CODE_FOR_nothing) {
    return (rtx)0x0;
  }
  uVar9 = get_last_insn();
  if (target != (rtx)0x0) {
    bVar1 = target->field_0x2;
    if (**(short **)&exp->field_0x10 == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
    }
    if ((uVar6 == bVar1) &&
       (iVar7 = (***(code ***)(&ptr_mode + (ulong)(uint)iVar4 * 10))(target,target->field_0x2),
       local_58 = target, iVar7 != 0)) goto LAB_00104b3c;
  }
  if (**(short **)&exp->field_0x10 == 0xe) {
    uVar6 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  else {
    uVar6 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
  }
  local_58 = (rtx)gen_reg_rtx(uVar6);
LAB_00104b3c:
  iVar7 = (***(code ***)(&ptr_mode + (ulong)(uint)iVar4 * 10))(local_58,local_58->field_0x2);
  if (iVar7 == 0) {
    fancy_abort("builtins.c",0x917,&DAT_0011bd60);
  }
  ptVar8 = builtin_save_expr(arg_00);
  *(tree *)&exp->field_0x40 = ptVar8;
  op0 = expand_expr(ptVar8,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  if (uVar5 != (byte)op0->field_0x2) {
    op0 = (rtx)convert_to_mode(uVar5,op0,0);
  }
  cVar3 = maybe_emit_unop_insn(iVar4,local_58,op0,0);
  if (cVar3 == '\0') {
    delete_insns_since(uVar9);
    *(tree *)&exp->field_0x40 = arg_00;
    return (rtx)0x0;
  }
  return local_58;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_sincos(tree exp)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uchar uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  rtx prVar9;
  tree ptVar10;
  rtx prVar11;
  rtx prVar12;
  location_t loc;
  machine_mode mode;
  int result;
  tree arg;
  tree sinp;
  tree cosp;
  rtx target1;
  rtx target2;
  rtx op0;
  rtx op1;
  rtx op2;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)&exp->field_0x18;
  }
  uVar3 = validate_arglist(exp,9,10,10,0x13);
  if (uVar3 == '\0') {
    prVar9 = (rtx)0x0;
  }
  else {
    ptVar10 = *(tree *)&exp->field_0x40;
    uVar1 = *(undefined8 *)&exp->field_0x48;
    uVar2 = *(undefined8 *)&exp->field_0x50;
    if (**(short **)&ptVar10->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&ptVar10->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&ptVar10->field_0x10 + 0x3e);
    }
    if (*(int *)(&optab_table + ((long)(int)uVar5 + 0x1c88) * 4) == 0xb8c) {
      prVar9 = (rtx)0x0;
    }
    else {
      uVar7 = gen_reg_rtx(uVar5);
      uVar8 = gen_reg_rtx(uVar5);
      prVar9 = expand_normal(ptVar10);
      ptVar10 = (tree)build_fold_indirect_ref_loc(uVar4,uVar1);
      prVar11 = expand_normal(ptVar10);
      ptVar10 = (tree)build_fold_indirect_ref_loc(uVar4,uVar2);
      prVar12 = expand_normal(ptVar10);
      iVar6 = expand_twoval_unop(0x1302b8,prVar9,uVar8,uVar7,0);
      if (iVar6 == 0) {
        fancy_abort("builtins.c",0x956,&DAT_0011bd60);
      }
      emit_move_insn(prVar11,uVar7);
      emit_move_insn(prVar12,uVar8);
      prVar9 = _vector_type_mode;
    }
  }
  return prVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_cexpi(tree exp,rtx target,rtx subtarget)

{
  uchar uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  rtx prVar5;
  undefined8 uVar6;
  tree exp_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  tree ptVar10;
  location_t loc;
  machine_mode mode;
  rtx op1;
  rtx op2;
  tree fn;
  tree fn_1;
  char *name;
  tree fndecl;
  tree arg;
  tree type;
  tree ctype;
  tree fntype;
  tree narg;
  tree call_1;
  rtx op1a;
  rtx op2a;
  tree top1;
  tree top2;
  tree call;
  rtx op0;
  
  lVar4 = get_callee_fndecl(exp);
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)&exp->field_0x18;
  }
  uVar1 = validate_arglist(exp,9,0x13);
  if (uVar1 == '\0') {
    prVar5 = (rtx)0x0;
  }
  else {
    ptVar10 = *(tree *)&exp->field_0x40;
    uVar9 = *(undefined8 *)&ptVar10->field_0x10;
    if (**(short **)&ptVar10->field_0x10 == 0xe) {
      uVar3 = vector_type_mode(*(undefined8 *)&ptVar10->field_0x10);
    }
    else {
      uVar3 = (uint)*(byte *)(*(long *)&ptVar10->field_0x10 + 0x3e);
    }
    if (*(int *)(&optab_table + ((long)(int)uVar3 + 0x1c88) * 4) == 0xb8c) {
      if ((linux_uclibc & 1) != 0) {
        fn_1 = (tree)0x0;
        uVar7 = build_complex_type(uVar9);
        if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11e) {
          fn_1 = built_in_decls[283];
        }
        else if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11d) {
          fn_1 = built_in_decls[282];
        }
        else if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11f) {
          fn_1 = built_in_decls[284];
        }
        else {
          fancy_abort("builtins.c",0x9a9,&DAT_0011bd60);
        }
        if (fn_1 == (tree)0x0) {
          name = (char *)0x0;
          if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11e) {
            name = "cexpf";
          }
          else if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11d) {
            name = "cexp";
          }
          else if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11f) {
            name = "cexpl";
          }
          uVar8 = build_function_type_list(uVar7,uVar7,0);
          fn_1 = (tree)build_fn_decl(name,uVar8);
        }
        uVar9 = build_real(uVar9);
        uVar9 = fold_build2_stat_loc(uVar2,0x7b,uVar7,uVar9,ptVar10);
        uVar8 = build_pointer_type(*(undefined8 *)&fn_1->field_0x10);
        uVar8 = build1_stat(0x79,uVar8,fn_1);
        ptVar10 = (tree)build_call_nary(uVar7,uVar8,1,uVar9);
        prVar5 = expand_expr(ptVar10,target,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
        return prVar5;
      }
      fn = (tree)0x0;
      if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11e) {
        fn = built_in_decls[221];
      }
      else if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11d) {
        fn = built_in_decls[220];
      }
      else if ((*(ushort *)(lVar4 + 0xd8) & 0x7ff) == 0x11f) {
        fn = built_in_decls[222];
      }
      else {
        fancy_abort("builtins.c",0x98f,&DAT_0011bd60);
      }
      op1 = (rtx)assign_temp(*(undefined8 *)&ptVar10->field_0x10,0,1,1);
      op2 = (rtx)assign_temp(*(undefined8 *)&ptVar10->field_0x10,0,1,1);
      uVar7 = copy_to_mode_reg(0x10,*(undefined8 *)&op1->u);
      uVar8 = copy_to_mode_reg(0x10,*(undefined8 *)&op2->u);
      uVar6 = build_pointer_type(*(undefined8 *)&ptVar10->field_0x10);
      uVar7 = make_tree(uVar6,uVar7);
      uVar6 = build_pointer_type(*(undefined8 *)&ptVar10->field_0x10);
      uVar8 = make_tree(uVar6,uVar8);
      uVar6 = build_pointer_type(*(undefined8 *)&fn->field_0x10);
      uVar6 = build1_stat(0x79,uVar6,fn);
      exp_00 = (tree)build_call_nary(*(undefined8 *)(*(long *)&fn->field_0x10 + 0x10),uVar6,3,
                                     ptVar10,uVar7,uVar8);
      expand_normal(exp_00);
    }
    else {
      op1 = (rtx)gen_reg_rtx(uVar3);
      op2 = (rtx)gen_reg_rtx(uVar3);
      prVar5 = expand_expr(ptVar10,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
      expand_twoval_unop(0x1302b8,prVar5,op2,op1,0);
    }
    uVar7 = make_tree(*(undefined8 *)&ptVar10->field_0x10,op1);
    uVar8 = make_tree(*(undefined8 *)&ptVar10->field_0x10,op2);
    uVar9 = build_complex_type(uVar9);
    ptVar10 = (tree)build2_stat(0x7b,uVar9,uVar8,uVar7);
    prVar5 = expand_expr(ptVar10,target,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  }
  return prVar5;
}



tree build_call_nofold_loc(location_t loc,tree fndecl,int n,...)

{
  long lVar1;
  long lVar2;
  char in_AL;
  undefined8 uVar3;
  tree ptVar4;
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
  tree fntype;
  tree fn;
  va_list ap;
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
  lVar2 = *(long *)&fndecl->field_0x10;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  uVar3 = build_pointer_type(lVar2);
  uVar3 = build1_stat(0x79,uVar3,fndecl);
  ap[0].gp_offset = 0x18;
  ap[0].fp_offset = 0x30;
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].reg_save_area = local_b8;
  ptVar4 = (tree)build_call_valist(*(undefined8 *)(lVar2 + 0x10),uVar3,n,ap);
  *(location_t *)&ptVar4->field_0x18 = loc;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar4;
}



rtx expand_builtin_int_roundingfn(tree exp,rtx target)

{
  uchar uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  rtx prVar6;
  tree ptVar7;
  rtx prVar8;
  undefined8 uVar9;
  built_in_function fallback_fn;
  machine_mode mode;
  convert_optab builtin_optab;
  tree fallback_fndecl;
  char *name;
  tree fndecl;
  tree arg;
  rtx op0;
  tree fntype;
  rtx tmp;
  rtx insns;
  
  lVar5 = get_callee_fndecl(exp);
  uVar1 = validate_arglist(exp,9,0x13);
  if (uVar1 == '\0') {
    fancy_abort("builtins.c",0x9f6,&DAT_0011bd60);
  }
  ptVar7 = *(tree *)&exp->field_0x40;
  uVar3 = *(ushort *)(lVar5 + 0xd8) & 0x7ff;
  if (uVar3 < 0x84) {
    if (0x80 < uVar3) {
LAB_0010565d:
      builtin_optab = (convert_optab)0x17a7b8;
      fallback_fn = BUILT_IN_FLOOR;
      goto LAB_00105689;
    }
    if (uVar3 < 0x81) {
      uVar4 = (uint)uVar3;
      if (0x7d < uVar4) {
LAB_00105649:
        builtin_optab = (convert_optab)0x181e18;
        fallback_fn = BUILT_IN_CEIL;
        goto LAB_00105689;
      }
      if (uVar4 < 0x72) {
        if (0x6e < uVar4) goto LAB_00105649;
      }
      else if (uVar4 - 0x75 < 3) goto LAB_0010565d;
    }
  }
  fancy_abort("builtins.c",0xa09,&DAT_0011bd60);
LAB_00105689:
  if (**(short **)&exp->field_0x10 == 0xe) {
    uVar4 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  else {
    uVar4 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
  }
  prVar6 = (rtx)gen_reg_rtx(uVar4);
  ptVar7 = builtin_save_expr(ptVar7);
  *(tree *)&exp->field_0x40 = ptVar7;
  prVar8 = expand_expr(ptVar7,(rtx)0x0,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  start_sequence();
  cVar2 = expand_sfix_optab(prVar6,prVar8,builtin_optab);
  if (cVar2 == '\0') {
    end_sequence();
    fallback_fndecl = mathfn_built_in(*(tree *)&ptVar7->field_0x10,fallback_fn);
    if (fallback_fndecl == (tree)0x0) {
      name = (char *)0x0;
      switch(*(ushort *)(lVar5 + 0xd8) & 0x7ff) {
      case 0x6f:
      case 0x7e:
        name = "ceil";
        break;
      case 0x70:
      case 0x7f:
        name = "ceilf";
        break;
      case 0x71:
      case 0x80:
        name = "ceill";
        break;
      default:
        fancy_abort("builtins.c",0xa4f,&DAT_0011bd60);
        break;
      case 0x75:
      case 0x81:
        name = "floor";
        break;
      case 0x76:
      case 0x82:
        name = "floorf";
        break;
      case 0x77:
      case 0x83:
        name = "floorl";
      }
      uVar9 = build_function_type_list
                        (*(undefined8 *)&ptVar7->field_0x10,*(undefined8 *)&ptVar7->field_0x10,0);
      fallback_fndecl = (tree)build_fn_decl(name,uVar9);
    }
    ptVar7 = build_call_nofold_loc(0,fallback_fndecl,1,ptVar7);
    prVar8 = expand_normal(ptVar7);
    prVar6 = (rtx)gen_reg_rtx(uVar4);
    expand_fix(prVar6,prVar8,0);
  }
  else {
    uVar9 = get_insns();
    end_sequence();
    emit_insn(uVar9);
  }
  return prVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_int_roundingfn_2(tree exp,rtx target)

{
  uchar uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  rtx prVar6;
  tree ptVar7;
  rtx prVar8;
  undefined8 uVar9;
  machine_mode mode;
  convert_optab builtin_optab;
  tree fndecl;
  tree arg;
  rtx op0;
  rtx insns;
  
  lVar5 = get_callee_fndecl(exp);
  if ((int)flag_errno_math != 0) {
    return (rtx)0x0;
  }
  uVar1 = validate_arglist(exp,9,0x13);
  if (uVar1 == '\0') {
    fancy_abort("builtins.c",0xa77,&DAT_0011bd60);
  }
  ptVar7 = *(tree *)&exp->field_0x40;
  uVar3 = *(ushort *)(lVar5 + 0xd8) & 0x7ff;
  if (uVar3 < 0x9f) {
    if (0x9b < uVar3) {
LAB_00105992:
      builtin_optab = (convert_optab)0x173158;
      goto LAB_001059b7;
    }
    if (uVar3 < 0x9c) {
      uVar4 = (uint)uVar3;
      if (0x98 < uVar4) {
LAB_00105985:
        builtin_optab = (convert_optab)0x16baf8;
        goto LAB_001059b7;
      }
      if (uVar4 < 0x87) {
        if (0x83 < uVar4) goto LAB_00105985;
      }
      else if (uVar4 - 0x87 < 3) goto LAB_00105992;
    }
  }
  fancy_abort("builtins.c",0xa84,&DAT_0011bd60);
LAB_001059b7:
  if (**(short **)&exp->field_0x10 == 0xe) {
    uVar4 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  else {
    uVar4 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
  }
  prVar6 = (rtx)gen_reg_rtx(uVar4);
  ptVar7 = builtin_save_expr(ptVar7);
  *(tree *)&exp->field_0x40 = ptVar7;
  prVar8 = expand_expr(ptVar7,(rtx)0x0,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  start_sequence();
  cVar2 = expand_sfix_optab(prVar6,prVar8,builtin_optab);
  if (cVar2 == '\0') {
    end_sequence();
    prVar6 = (rtx)expand_call(exp,prVar6,prVar6 == _vector_type_mode);
  }
  else {
    uVar9 = get_insns();
    end_sequence();
    emit_insn(uVar9);
  }
  return prVar6;
}



int powi_lookup_cost(ulong n,uchar *cache)

{
  int iVar1;
  int iVar2;
  
  if (cache[n] == '\0') {
    cache[n] = '\x01';
    iVar1 = powi_lookup_cost(n - ""[n],cache);
    iVar2 = powi_lookup_cost((ulong)""[n],cache);
    iVar1 = iVar2 + iVar1 + 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int powi_cost(long n)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int result;
  ulong val;
  ulong digit;
  uchar cache [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n == 0) {
    iVar2 = 0;
  }
  else {
    val = (n >> 0x3f ^ n) - (n >> 0x3f);
    memset(cache,0,0x100);
    cache[1] = '\x01';
    result = 0;
    while (0xff < val) {
      if ((val & 1) == 0) {
        val = val >> 1;
        result = result + 1;
      }
      else {
        iVar2 = powi_lookup_cost((ulong)((uint)val & 7),cache);
        result = result + iVar2 + 4;
        val = val >> 3;
      }
    }
    iVar2 = powi_lookup_cost(val,cache);
    iVar2 = iVar2 + result;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



rtx expand_powi_1(machine_mode mode,ulong n,rtx *cache)

{
  ulong n_00;
  rtx prVar1;
  rtx target;
  rtx op0;
  rtx op1;
  ulong digit;
  rtx result;
  
  if (n < 0x100) {
    if (cache[n] != (rtx)0x0) {
      return cache[n];
    }
    target = (rtx)gen_reg_rtx();
    cache[n] = target;
    op0 = expand_powi_1(mode,n - ""[n],cache);
    op1 = expand_powi_1(mode,(ulong)""[n],cache);
  }
  else if ((n & 1) == 0) {
    target = (rtx)gen_reg_rtx();
    op0 = expand_powi_1(mode,n >> 1,cache);
    op1 = op0;
  }
  else {
    target = (rtx)gen_reg_rtx();
    n_00 = (ulong)((uint)n & 7);
    op0 = expand_powi_1(mode,n - n_00,cache);
    op1 = expand_powi_1(mode,n_00,cache);
  }
  prVar1 = (rtx)expand_mult(mode,op0,op1,target,0);
  if (prVar1 != target) {
    emit_move_insn(target,prVar1);
  }
  return target;
}



rtx expand_powi(rtx x,machine_mode mode,long n)

{
  long lVar1;
  rtx prVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  rtx result;
  rtx cache [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n == 0) {
    prVar2 = *(rtx *)(&const_tiny_rtx + ((long)(int)mode + 0x57) * 8);
  }
  else {
    memset(cache,0,0x800);
    uVar3 = 0x105ed2;
    cache[1] = x;
    prVar2 = expand_powi_1(mode,(n >> 0x3f ^ n) - (n >> 0x3f),cache);
    if (n < 0) {
      prVar2 = (rtx)expand_binop(mode,0x12bf38,
                                 *(undefined8 *)(&const_tiny_rtx + ((long)(int)mode + 0x57) * 8),
                                 prVar2,0,0,3,uVar3);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps

rtx expand_builtin_pow(tree exp,rtx target,rtx subtarget)

{
  long lVar1;
  tree exp_00;
  short *psVar2;
  undefined8 *puVar3;
  machine_mode mVar4;
  uchar uVar5;
  char cVar6;
  machine_mode mode_00;
  int iVar7;
  long lVar8;
  rtx prVar9;
  tree exp_01;
  tree fndecl;
  tree ptVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  machine_mode mode;
  rtx op;
  tree type;
  tree arg0;
  tree arg1;
  long n;
  tree narg0;
  tree fn;
  tree call_expr;
  rtx op2;
  tree call_expr_1;
  real_value cint;
  real_value c;
  real_value c2;
  real_value dconst3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar10 = *(tree *)&exp->field_0x10;
  if (*(short *)ptVar10 == 0xe) {
    mode_00 = vector_type_mode(ptVar10);
  }
  else {
    mode_00 = (machine_mode)(byte)ptVar10->field_0x3e;
  }
  uVar5 = validate_arglist(exp,9,9,0x13);
  if (uVar5 == '\0') {
    op = (rtx)0x0;
    goto LAB_001069dc;
  }
  exp_00 = *(tree *)&exp->field_0x40;
  psVar2 = *(short **)&exp->field_0x48;
  if ((*psVar2 != 0x18) || ((*(byte *)((long)psVar2 + 3) & 8) != 0)) {
    op = expand_builtin_mathfn_2(exp,target,subtarget);
    goto LAB_001069dc;
  }
  puVar3 = *(undefined8 **)(psVar2 + 0xc);
  c._0_8_ = *puVar3;
  c.sig[0] = puVar3[1];
  c.sig[1] = puVar3[2];
  c.sig[2] = puVar3[3];
  lVar8 = real_to_integer(&c);
  if (lVar8 < 0) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = 0;
  }
  real_from_integer(&cint,0,lVar8,uVar11,0);
  cVar6 = real_identical(&c,&cint);
  if ((cVar6 != '\0') &&
     (((-2 < lVar8 && (lVar8 < 3)) ||
      ((flag_unsafe_math_optimizations != 0 &&
       ((cVar6 = optimize_insn_for_speed_p(), cVar6 != '\0' &&
        (iVar7 = powi_cost(lVar8), iVar7 < 0x7f)))))))) {
    op = expand_expr(exp_00,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    if (lVar8 != 1) {
      prVar9 = (rtx)force_reg(mode_00);
      op = expand_powi(prVar9,mode_00,lVar8);
    }
    goto LAB_001069dc;
  }
  exp_01 = builtin_save_expr(exp_00);
  fndecl = mathfn_built_in(ptVar10,0xe4);
  if (fndecl != (tree)0x0) {
    real_arithmetic(&c2,0x41,&c,&dconst2);
    lVar8 = real_to_integer(&c2);
    if (lVar8 < 0) {
      uVar11 = 0xffffffffffffffff;
    }
    else {
      uVar11 = 0;
    }
    real_from_integer(&cint,0,lVar8,uVar11,0);
    cVar6 = real_identical(&c2,&cint);
    if (cVar6 != '\0') {
      if (((flag_unsafe_math_optimizations == 0) ||
          (cVar6 = optimize_insn_for_speed_p(), cVar6 == '\0')) ||
         (iVar7 = powi_cost(lVar8 / 2), 0x7e < iVar7)) {
        if ((((&mode_class)[mode_00] == '\b') || ((&mode_class)[mode_00] == '\t')) ||
           (((&mode_class)[mode_00] == '\v' || ((&mode_class)[mode_00] == '\x11')))) {
          mVar4 = mode_00;
          if (((&mode_class)[mode_00] != '\b') && ((&mode_class)[mode_00] != '\t')) {
            mVar4 = (uint)(byte)(&mode_inner)[mode_00];
          }
          if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)(mVar4 + ~MAX_MODE_UACCUM) * 8) +
                        0x31) == '\0') || (flag_signed_zeros == 0)) goto LAB_0010638c;
        }
        else {
LAB_0010638c:
          if (lVar8 == 1) goto LAB_001063cf;
        }
        if ((lVar8 != 3) || (*(int *)(&optab_table + ((long)(int)mode_00 + 0x1c28) * 4) == 0xb8c))
        goto LAB_0010655d;
      }
LAB_001063cf:
      ptVar10 = build_call_nofold_loc(0,fndecl,1,exp_01);
      op = expand_expr(ptVar10,subtarget,mode_00,EXPAND_NORMAL);
      if (lVar8 != 1) {
        expand_expr(exp_01,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
        prVar9 = (rtx)force_reg(mode_00);
        uVar13 = (uint)(lVar8 / 2);
        uVar12 = (int)uVar13 >> 0x1f;
        uVar11 = 0x1064ac;
        prVar9 = expand_powi(prVar9,mode_00,(long)(int)((uVar13 ^ uVar12) - uVar12));
        op = (rtx)expand_simple_binop(mode_00,0x34,op,prVar9,0,0,3,uVar11);
        if (lVar8 < 0) {
          op = (rtx)expand_binop(mode_00,0x12bf38,
                                 *(undefined8 *)(&const_tiny_rtx + ((long)(int)mode_00 + 0x57) * 8),
                                 op,0,0,3);
        }
      }
      goto LAB_001069dc;
    }
  }
LAB_0010655d:
  ptVar10 = mathfn_built_in(ptVar10,BUILT_IN_CBRT);
  if ((ptVar10 != (tree)0x0) && (flag_unsafe_math_optimizations != 0)) {
    cVar6 = tree_expr_nonnegative_p(exp_00);
    if ((cVar6 == '\0') &&
       (((((&mode_class)[mode_00] == '\b' || ((&mode_class)[mode_00] == '\t')) ||
         ((&mode_class)[mode_00] == '\v')) || ((&mode_class)[mode_00] == '\x11')))) {
      mVar4 = mode_00;
      if (((&mode_class)[mode_00] != '\b') && ((&mode_class)[mode_00] != '\t')) {
        mVar4 = (uint)(byte)(&mode_inner)[mode_00];
      }
      if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)(mVar4 + ~MAX_MODE_UACCUM) * 8) + 0x2e
                    ) != '\0') && (flag_finite_math_only == 0)) goto LAB_001069bc;
    }
    real_from_integer(&dconst3,0,3,0,0);
    real_arithmetic(&c2,0x41,&c,&dconst3);
    real_round(&c2,mode_00,&c2);
    lVar8 = real_to_integer(&c2);
    if (lVar8 < 0) {
      uVar11 = 0xffffffffffffffff;
    }
    else {
      uVar11 = 0;
    }
    real_from_integer(&cint,0,lVar8,uVar11,0);
    real_arithmetic(&c2,0x4b,&cint,&dconst3);
    real_convert(&c2,mode_00,&c2);
    cVar6 = real_identical(&c2,&c);
    if ((cVar6 != '\0') &&
       (((cVar6 = optimize_insn_for_speed_p(), cVar6 != '\0' &&
         (iVar7 = powi_cost(lVar8 / 3), iVar7 < 0x7f)) || (lVar8 == 1)))) {
      ptVar10 = build_call_nofold_loc(0,ptVar10,1);
      uVar11 = 0x106801;
      op = expand_builtin(ptVar10,(rtx)0x0,subtarget,mode_00,0);
      uVar13 = (int)(uint)lVar8 >> 0x1f;
      if ((int)(((uint)lVar8 ^ uVar13) - uVar13) % 3 == 2) {
        op = (rtx)expand_simple_binop(mode_00,0x34,op,op,op,0,3,uVar11);
      }
      if (lVar8 != 1) {
        expand_expr(exp_01,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
        prVar9 = (rtx)force_reg(mode_00);
        uVar13 = (uint)(lVar8 / 3);
        uVar12 = (int)uVar13 >> 0x1f;
        uVar11 = 0x10690e;
        prVar9 = expand_powi(prVar9,mode_00,(long)(int)((uVar13 ^ uVar12) - uVar12));
        op = (rtx)expand_simple_binop(mode_00,0x34,op,prVar9,0,0,3,uVar11);
        if (lVar8 < 0) {
          op = (rtx)expand_binop(mode_00,0x12bf38,
                                 *(undefined8 *)(&const_tiny_rtx + ((long)(int)mode_00 + 0x57) * 8),
                                 op,0,0,3);
        }
      }
      goto LAB_001069dc;
    }
  }
LAB_001069bc:
  op = expand_builtin_mathfn_2(exp,target,subtarget);
LAB_001069dc:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return op;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



rtx expand_builtin_powi(tree exp,rtx target,rtx subtarget)

{
  tree exp_00;
  tree exp_01;
  long n_00;
  uchar uVar1;
  char cVar2;
  machine_mode mode_00;
  int iVar3;
  machine_mode mode_01;
  rtx prVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  rtx local_48;
  machine_mode mode;
  machine_mode mode2;
  rtx op0;
  rtx op1;
  tree arg0;
  tree arg1;
  long n;
  
  uVar1 = validate_arglist(exp,9,8,0x13);
  if (uVar1 == '\0') {
    return (rtx)0x0;
  }
  exp_00 = *(tree *)&exp->field_0x40;
  exp_01 = *(tree *)&exp->field_0x48;
  if (**(short **)&exp->field_0x10 == 0xe) {
    mode_00 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  else {
    mode_00 = (machine_mode)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
  }
  if ((((*(short *)exp_01 == 0x17) && ((exp_01->field_0x3 & 8) == 0)) &&
      ((n_00 = *(long *)&exp_01->field_0x18, *(long *)&exp_01->field_0x20 == 0 ||
       (*(long *)&exp_01->field_0x20 == -1)))) &&
     (((-2 < n_00 && (n_00 < 3)) ||
      ((cVar2 = optimize_insn_for_speed_p(), cVar2 != '\0' &&
       (iVar3 = powi_cost(n_00), iVar3 < 0x7f)))))) {
    expand_expr(exp_00,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    prVar4 = (rtx)force_reg(mode_00);
    prVar4 = expand_powi(prVar4,mode_00,n_00);
    return prVar4;
  }
  mode_01 = mode_for_size(0x20,2,0);
  local_48 = target;
  if (target == (rtx)0x0) {
    local_48 = (rtx)gen_reg_rtx(mode_00);
  }
  op0 = expand_expr(exp_00,subtarget,mode_00,EXPAND_NORMAL);
  if (mode_00 != (byte)op0->field_0x2) {
    op0 = (rtx)convert_to_mode(mode_00,op0,0);
  }
  op1 = expand_expr(exp_01,(rtx)0x0,mode_01,EXPAND_NORMAL);
  if (mode_01 != (byte)op1->field_0x2) {
    op1 = (rtx)convert_to_mode(mode_01,op1,0);
  }
  uVar6 = 0x106c0f;
  uVar5 = optab_libfunc(0x137db8,mode_00);
  prVar4 = (rtx)emit_library_call_value(uVar5,local_48,1,mode_00,2,op0,mode_00,op1,mode_01,uVar6);
  return prVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_strlen(tree exp,rtx target,machine_mode target_mode)

{
  undefined2 uVar1;
  tree src_00;
  code *pcVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  tree ptVar7;
  rtx target_00;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  rtx prVar12;
  machine_mode insn_mode;
  insn_code icode;
  int align;
  machine_mode char_mode;
  rtx result;
  rtx char_rtx;
  tree src;
  tree len;
  rtx src_reg;
  rtx before_strlen;
  rtx pat;
  
  uVar3 = validate_arglist(exp,10,0x13);
  if (uVar3 == '\0') {
    result = (rtx)0x0;
  }
  else {
    src_00 = *(tree *)&exp->field_0x40;
    icode = CODE_FOR_nothing;
    ptVar7 = c_strlen(src_00,0);
    if (ptVar7 == (tree)0x0) {
      ptVar7 = c_strlen(src_00,1);
      if ((ptVar7 == (tree)0x0) || (*(short *)ptVar7 != 0x17)) {
        if ((ix86_isa_flags & 0x20) == 0) {
          uVar5 = 0x80;
        }
        else {
          uVar5 = 0x100;
        }
        iVar4 = get_pointer_alignment(src_00,uVar5);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 7;
        }
        insn_mode = target_mode;
        if (iVar4 >> 3 == 0) {
          result = (rtx)0x0;
        }
        else {
          while ((insn_mode != MAX_MODE_PARTIAL_INT &&
                 (icode = *(insn_code *)(&optab_table + ((long)(int)insn_mode + 0x2ac8) * 4),
                 icode == CODE_FOR_nothing))) {
            insn_mode = (machine_mode)(byte)(&mode_wider)[insn_mode];
          }
          if (insn_mode == MAX_MODE_PARTIAL_INT) {
            result = (rtx)0x0;
          }
          else {
            if ((((target == (rtx)0x0) || (*(short *)target != 0x25)) ||
                (insn_mode != (byte)target->field_0x2)) ||
               (uVar5 = rhs_regno(target), result = target, uVar5 < 0x35)) {
              result = (rtx)gen_reg_rtx(insn_mode);
            }
            target_00 = (rtx)gen_reg_rtx(0x10);
            lVar8 = get_last_insn();
            prVar12 = _vector_type_mode;
            char_rtx = _vector_type_mode;
            uVar1 = *(undefined2 *)(*(long *)(&ptr_mode + (long)icode * 10) + 0x40);
            iVar6 = (**(code **)(*(long *)(&ptr_mode + (long)icode * 10) + 0x30))
                              (_vector_type_mode,uVar1);
            if (iVar6 == 0) {
              char_rtx = (rtx)copy_to_mode_reg(uVar1,prVar12);
            }
            pcVar2 = *(code **)(side_effects_p + (ulong)(uint)icode * 0x28);
            uVar9 = gen_rtx_CONST_INT(0,(long)(iVar4 >> 3));
            uVar10 = gen_rtx_MEM(1,target_00);
            lVar11 = (*pcVar2)(result,uVar10,char_rtx,uVar9);
            if (lVar11 == 0) {
              result = (rtx)0x0;
            }
            else {
              emit_insn(lVar11);
              start_sequence();
              prVar12 = expand_expr(src_00,target_00,ptr_mode,EXPAND_NORMAL);
              if (prVar12 != target_00) {
                emit_move_insn(target_00,prVar12);
              }
              uVar9 = get_insns();
              end_sequence();
              if (lVar8 == 0) {
                uVar10 = get_insns();
                emit_insn_before(uVar9,uVar10);
              }
              else {
                emit_insn_after(uVar9,lVar8);
              }
              if (target_mode != (byte)result->field_0x2) {
                if (target == (rtx)0x0) {
                  result = (rtx)convert_to_mode(target_mode,result,0);
                }
                else {
                  convert_move(target,result,0);
                  result = target;
                }
              }
            }
          }
        }
      }
      else {
        expand_expr(src_00,_vector_type_mode,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
        result = expand_expr(ptVar7,target,target_mode,EXPAND_NORMAL);
      }
    }
    else {
      result = expand_expr(ptVar7,target,target_mode,EXPAND_NORMAL);
    }
  }
  return result;
}



rtx builtin_memcpy_read_str(void *data,long offset,machine_mode mode)

{
  byte bVar1;
  size_t sVar2;
  rtx prVar3;
  char *str;
  
  if (-1 < offset) {
    bVar1 = (&mode_size)[mode];
    sVar2 = strlen((char *)data);
    if ((ulong)bVar1 + offset <= sVar2 + 1) goto LAB_001070a6;
  }
  fancy_abort("builtins.c",0xcb8,&DAT_0011bd60);
LAB_001070a6:
  prVar3 = c_readstr((char *)(offset + (long)data),mode);
  return prVar3;
}



rtx expand_builtin_memcpy(tree exp,rtx target)

{
  ulong uVar1;
  uchar uVar2;
  int iVar3;
  rtx prVar4;
  size_t sVar5;
  uint uVar6;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 uVar7;
  uint expected_align;
  uint src_align;
  uint dest_align;
  long expected_size;
  rtx dest_addr;
  tree dest;
  tree src;
  tree len;
  rtx dest_mem;
  rtx len_rtx;
  char *src_str;
  rtx src_mem;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = validate_arglist(exp,10,10,8,0x13,in_R9,target);
  if (uVar2 == '\0') {
    prVar4 = (rtx)0x0;
  }
  else {
    dest = *(tree *)&exp->field_0x40;
    src = *(tree *)&exp->field_0x48;
    len = *(tree *)&exp->field_0x50;
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar6 = 0x80;
    }
    else {
      uVar6 = 0x100;
    }
    src_align = get_pointer_alignment(src,uVar6);
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar6 = 0x80;
    }
    else {
      uVar6 = 0x100;
    }
    dest_align = get_pointer_alignment(dest,uVar6);
    expected_size = -1;
    expected_align = 0;
    if (dest_align == 0) {
      prVar4 = (rtx)0x0;
    }
    else if (src_align == 0) {
      prVar4 = (rtx)0x0;
    }
    else {
      if (currently_expanding_gimple_stmt != 0) {
        stringop_block_profile(currently_expanding_gimple_stmt,&expected_align,&expected_size);
      }
      if (expected_align < dest_align) {
        expected_align = dest_align;
      }
      dest_mem = get_memory_rtx(dest,len);
      set_mem_align(dest_mem,dest_align);
      len_rtx = expand_normal(len);
      src_str = c_getstr(src);
      if (((src_str != (char *)0x0) && (*(short *)len_rtx == 0x1e)) &&
         (uVar1 = *(ulong *)&len_rtx->u, sVar5 = strlen(src_str), uVar1 <= sVar5 + 1)) {
        uVar7 = 0x1072a9;
        iVar3 = can_store_by_pieces(*(undefined8 *)&len_rtx->u,builtin_memcpy_read_str,src_str,
                                    dest_align,0);
        if (iVar3 != 0) {
          dest_mem = (rtx)store_by_pieces(dest_mem,*(undefined8 *)&len_rtx->u,
                                          builtin_memcpy_read_str,src_str,dest_align,0,0,uVar7);
          dest_mem = (rtx)force_operand(*(undefined8 *)&dest_mem->u,target);
          prVar4 = (rtx)convert_memory_address_addr_space(ptr_mode,dest_mem,0);
          dest_mem = prVar4;
          goto LAB_001073e1;
        }
      }
      src_mem = get_memory_rtx(src,len);
      set_mem_align(src_mem,src_align);
      if ((exp->field_0x2 & 4) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 3;
      }
      prVar4 = (rtx)emit_block_move_hints
                              (dest_mem,src_mem,len_rtx,uVar7,expected_align,expected_size);
      dest_addr = prVar4;
      if (prVar4 == (rtx)0x0) {
        dest_addr = (rtx)force_operand(*(undefined8 *)&dest_mem->u,target);
        prVar4 = (rtx)convert_memory_address_addr_space(ptr_mode,dest_addr,0);
        dest_addr = prVar4;
      }
    }
  }
LAB_001073e1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



rtx expand_builtin_mempcpy(tree exp,rtx target,machine_mode mode)

{
  uchar uVar1;
  rtx prVar2;
  tree dest;
  tree src;
  tree len;
  
  uVar1 = validate_arglist(exp,10,10,8);
  if (uVar1 == '\0') {
    prVar2 = (rtx)0x0;
  }
  else {
    prVar2 = expand_builtin_mempcpy_args
                       (*(tree *)&exp->field_0x40,*(tree *)&exp->field_0x48,
                        *(tree *)&exp->field_0x50,target,mode,1);
  }
  return prVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_mempcpy_args(tree dest,tree src,tree len,rtx target,machine_mode mode,int endp)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  tree exp;
  rtx prVar6;
  char *__s;
  size_t sVar7;
  rtx prVar8;
  long lVar9;
  rtx prVar10;
  undefined8 uVar11;
  uint src_align;
  uint dest_align;
  tree fn;
  tree result;
  rtx len_rtx;
  char *src_str;
  rtx dest_mem;
  rtx src_mem;
  
  if ((target == _vector_type_mode) && (implicit_built_in_decls[330] != (tree)0x0)) {
    exp = build_call_nofold_loc(0,implicit_built_in_decls[330],3,dest,src,len);
    prVar6 = expand_expr(exp,target,mode,EXPAND_NORMAL);
  }
  else {
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0x100;
    }
    uVar3 = get_pointer_alignment(src,uVar3);
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0x100;
    }
    uVar4 = get_pointer_alignment(dest,uVar4);
    if ((uVar4 == 0) || (uVar3 == 0)) {
      prVar6 = (rtx)0x0;
    }
    else {
      iVar5 = host_integerp(len,1);
      if (iVar5 == 0) {
        prVar6 = (rtx)0x0;
      }
      else {
        prVar6 = expand_normal(len);
        __s = c_getstr(src);
        if ((((__s != (char *)0x0) && (*(short *)prVar6 == 0x1e)) &&
            (uVar1 = *(ulong *)&prVar6->u, sVar7 = strlen(__s), uVar1 <= sVar7 + 1)) &&
           (iVar5 = can_store_by_pieces(*(undefined8 *)&prVar6->u,builtin_memcpy_read_str,__s,uVar4,
                                        0), iVar5 != 0)) {
          prVar8 = get_memory_rtx(dest,len);
          uVar11 = 0x107669;
          set_mem_align(prVar8,uVar4);
          lVar9 = store_by_pieces(prVar8,*(undefined8 *)&prVar6->u,builtin_memcpy_read_str,__s,uVar4
                                  ,0,endp,uVar11);
          uVar11 = force_operand(*(undefined8 *)(lVar9 + 8),0);
          prVar6 = (rtx)convert_memory_address_addr_space(ptr_mode,uVar11,0);
          return prVar6;
        }
        if (*(short *)prVar6 == 0x1e) {
          uVar2 = uVar4;
          if (uVar3 <= uVar4) {
            uVar2 = uVar3;
          }
          iVar5 = can_move_by_pieces(*(undefined8 *)&prVar6->u,uVar2);
          if (iVar5 != 0) {
            prVar8 = get_memory_rtx(dest,len);
            set_mem_align(prVar8,uVar4);
            prVar10 = get_memory_rtx(src,len);
            set_mem_align(prVar10,uVar3);
            if (uVar3 <= uVar4) {
              uVar4 = uVar3;
            }
            lVar9 = move_by_pieces(prVar8,prVar10,*(undefined8 *)&prVar6->u,uVar4,endp);
            uVar11 = force_operand(*(undefined8 *)(lVar9 + 8),0);
            prVar6 = (rtx)convert_memory_address_addr_space(ptr_mode,uVar11,0);
            return prVar6;
          }
        }
        prVar6 = (rtx)0x0;
      }
    }
  }
  return prVar6;
}



rtx expand_movstr(tree dest,tree src,rtx target,int endp)

{
  return (rtx)0x0;
}



rtx expand_builtin_strcpy(tree exp,rtx target)

{
  uchar uVar1;
  rtx prVar2;
  tree dest;
  tree src;
  
  uVar1 = validate_arglist(exp,10,10,0x13);
  if (uVar1 == '\0') {
    prVar2 = (rtx)0x0;
  }
  else {
    prVar2 = expand_builtin_strcpy_args(*(tree *)&exp->field_0x40,*(tree *)&exp->field_0x48,target);
  }
  return prVar2;
}



rtx expand_builtin_strcpy_args(tree dest,tree src,rtx target)

{
  rtx prVar1;
  
  prVar1 = expand_movstr(dest,src,target,0);
  return prVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_stpcpy(tree exp,rtx target,machine_mode mode)

{
  tree src_00;
  uchar uVar1;
  undefined4 uVar2;
  tree ptVar3;
  char *pcVar4;
  tree exp_00;
  undefined8 uVar5;
  tree len_00;
  rtx prVar6;
  long lVar7;
  rtx local_68;
  location_t loc;
  rtx ret;
  tree dst;
  tree src;
  tree fn;
  tree result;
  tree len;
  tree lenp1;
  rtx len_rtx;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)&exp->field_0x18;
  }
  uVar1 = validate_arglist(exp,10,10,0x13);
  if (uVar1 == '\0') {
    local_68 = (rtx)0x0;
  }
  else {
    ptVar3 = *(tree *)&exp->field_0x40;
    src_00 = *(tree *)&exp->field_0x48;
    if ((target == _vector_type_mode) && (implicit_built_in_decls[341] != (tree)0x0)) {
      ptVar3 = build_call_nofold_loc(0,implicit_built_in_decls[341],2,ptVar3,src_00);
      local_68 = expand_expr(ptVar3,target,mode,EXPAND_NORMAL);
    }
    else {
      pcVar4 = c_getstr(src_00);
      if ((pcVar4 == (char *)0x0) || (exp_00 = c_strlen(src_00,0), exp_00 == (tree)0x0)) {
        local_68 = expand_movstr(ptVar3,src_00,target,2);
      }
      else {
        uVar5 = size_int_kind(1,1);
        len_00 = (tree)size_binop_loc(uVar2,0x3f,exp_00,uVar5);
        local_68 = expand_builtin_mempcpy_args(ptVar3,src_00,len_00,target,mode,2);
        if (local_68 == (rtx)0x0) {
          if (((*(short *)exp_00 == 0x17) &&
              (prVar6 = expand_normal(exp_00), *(short *)prVar6 == 0x1e)) &&
             (ret = expand_builtin_strcpy_args(ptVar3,src_00,target), ret != (rtx)0x0)) {
            local_68 = target;
            if (target == (rtx)0x0) {
              if (mode == MAX_MODE_PARTIAL_INT) {
                local_68 = (rtx)gen_reg_rtx(ret->field_0x2);
              }
              else {
                local_68 = (rtx)gen_reg_rtx(mode);
              }
            }
            if (local_68->field_0x2 != ret->field_0x2) {
              ret = (rtx)(*rtl_hooks)(local_68->field_0x2,ret);
            }
            uVar5 = plus_constant(ret,*(undefined8 *)&prVar6->u);
            uVar5 = force_operand(uVar5,0);
            lVar7 = emit_move_insn(local_68,uVar5);
            if (lVar7 == 0) {
              fancy_abort("builtins.c",0xe16,&DAT_0011bd60);
            }
          }
          else {
            local_68 = expand_movstr(ptVar3,src_00,target,2);
          }
        }
      }
    }
  }
  return local_68;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx builtin_strncpy_read_str(void *data,long offset,machine_mode mode)

{
  size_t sVar1;
  rtx prVar2;
  char *str;
  
  sVar1 = strlen((char *)data);
  prVar2 = _vector_type_mode;
  if ((ulong)offset <= sVar1) {
    prVar2 = c_readstr((char *)(offset + (long)data),mode);
  }
  return prVar2;
}



rtx expand_builtin_strncpy(tree exp,rtx target)

{
  tree exp_00;
  tree src_00;
  tree len_00;
  uchar uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  tree ptVar5;
  undefined8 uVar6;
  char *pcVar7;
  rtx prVar8;
  uint max_align;
  undefined8 in_R9;
  undefined8 uVar9;
  location_t loc;
  uint dest_align;
  tree dest;
  tree src;
  tree len;
  tree slen;
  char *p;
  rtx dest_mem;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)&exp->field_0x18;
  }
  uVar1 = validate_arglist(exp,10,10,8,0x13,in_R9,target);
  if (uVar1 != '\0') {
    exp_00 = *(tree *)&exp->field_0x40;
    src_00 = *(tree *)&exp->field_0x48;
    len_00 = *(tree *)&exp->field_0x50;
    ptVar5 = c_strlen(src_00,1);
    iVar3 = host_integerp(len_00,1);
    if (((iVar3 != 0) && (ptVar5 != (tree)0x0)) && (iVar3 = host_integerp(ptVar5,1), iVar3 != 0)) {
      uVar6 = size_int_kind(1,1);
      uVar6 = size_binop_loc(uVar2,0x3f,ptVar5,uVar6);
      iVar3 = tree_int_cst_lt(uVar6);
      if (iVar3 != 0) {
        if ((ix86_isa_flags & 0x20) == 0) {
          max_align = 0x80;
        }
        else {
          max_align = 0x100;
        }
        iVar3 = get_pointer_alignment(exp_00,max_align);
        pcVar7 = c_getstr(src_00);
        if (((pcVar7 != (char *)0x0) && (iVar3 != 0)) &&
           (iVar4 = host_integerp(len_00,1), iVar4 != 0)) {
          uVar6 = tree_low_cst(len_00,1);
          iVar4 = can_store_by_pieces(uVar6,builtin_strncpy_read_str,pcVar7,iVar3,0);
          if (iVar4 != 0) {
            prVar8 = get_memory_rtx(exp_00,len_00);
            uVar9 = 0x107e2b;
            uVar6 = tree_low_cst(len_00,1);
            store_by_pieces(prVar8,uVar6,builtin_strncpy_read_str,pcVar7,iVar3,0,0,uVar9);
            uVar6 = force_operand(*(undefined8 *)&prVar8->u,target);
            prVar8 = (rtx)convert_memory_address_addr_space(ptr_mode,uVar6,0);
            return prVar8;
          }
        }
        return (rtx)0x0;
      }
    }
  }
  return (rtx)0x0;
}



rtx builtin_memset_read_str(void *data,long offset,machine_mode mode)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  machine_mode mode_00;
  char *str;
  ulong uVar4;
  rtx prVar5;
  undefined *puVar6;
  long in_FS_OFFSET;
  undefined auStack72 [12];
  machine_mode local_3c;
  long local_38;
  void *local_30;
  char *c;
  char *p;
  long local_10;
  
  local_30 = data;
  local_38 = offset;
  local_3c = mode;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  c = (char *)data;
  uVar4 = ((ulong)(byte)(&mode_size)[mode] + 0x17) / 0x10;
  for (puVar6 = auStack72; puVar6 != auStack72; puVar6 = puVar6 + -0x1000) {
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  }
  lVar3 = uVar4 * -0x10;
  if (uVar4 != 0) {
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  }
  p = (char *)((ulong)(puVar6 + lVar3 + 0xf) & 0xfffffffffffffff0);
  bVar1 = (&mode_size)[local_3c];
  cVar2 = *c;
  *(undefined8 *)(puVar6 + lVar3 + -8) = 0x107f93;
  memset((char *)((ulong)(puVar6 + lVar3 + 0xf) & 0xfffffffffffffff0),(int)cVar2,(ulong)bVar1);
  str = p;
  mode_00 = local_3c;
  *(undefined8 *)(puVar6 + lVar3 + -8) = 0x107fa4;
  prVar5 = c_readstr(str,mode_00);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)(puVar6 + lVar3 + -8) = 0x107fb8;
    __stack_chk_fail();
  }
  return prVar5;
}



rtx builtin_memset_gen_str(void *data,long offset,machine_mode mode)

{
  long lVar1;
  machine_mode mVar2;
  void *pvVar3;
  size_t __n;
  char *str;
  ulong uVar4;
  rtx prVar5;
  rtx prVar6;
  undefined *puVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  undefined auStack88 [12];
  machine_mode local_4c;
  long local_48;
  void *local_40;
  size_t size;
  char *p;
  rtx coeff;
  rtx target;
  long local_10;
  
  puVar7 = auStack88;
  puVar8 = auStack88;
  local_40 = data;
  local_48 = offset;
  local_4c = mode;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  size = (size_t)(byte)(&mode_size)[mode];
  if (size != 1) {
    uVar4 = (size + 0x17) / 0x10;
    for (; puVar7 != auStack88; puVar7 = puVar7 + -0x1000) {
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    }
    lVar1 = uVar4 * -0x10;
    puVar8 = puVar7 + lVar1;
    if (uVar4 != 0) {
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    }
    __n = size;
    p = (char *)((ulong)(puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x1080a6;
    memset((char *)((ulong)(puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0),1,__n);
    str = p;
    mVar2 = local_4c;
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x1080b7;
    coeff = c_readstr(str,mVar2);
    pvVar3 = local_40;
    mVar2 = local_4c;
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x1080d1;
    prVar5 = (rtx)convert_to_mode(mVar2,pvVar3,1);
    prVar6 = coeff;
    mVar2 = local_4c;
    target = prVar5;
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x1080f2;
    prVar6 = (rtx)expand_mult(mVar2,prVar5,prVar6,0,1);
    mVar2 = local_4c;
    target = prVar6;
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x108107;
    data = (void *)force_reg(mVar2,prVar6);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (rtx)data;
  }
                    // WARNING: Subroutine does not return
  *(undefined8 *)(puVar8 + -8) = 0x10811b;
  __stack_chk_fail();
}



rtx expand_builtin_memset(tree exp,rtx target,machine_mode mode)

{
  uchar uVar1;
  rtx prVar2;
  tree dest;
  tree val;
  tree len;
  
  uVar1 = validate_arglist(exp,10,8,8,0x13);
  if (uVar1 == '\0') {
    prVar2 = (rtx)0x0;
  }
  else {
    prVar2 = expand_builtin_memset_args
                       (*(tree *)&exp->field_0x40,*(tree *)&exp->field_0x48,
                        *(tree *)&exp->field_0x50,target,mode,exp);
  }
  return prVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_memset_args
              (tree dest,tree val,tree len,rtx target,machine_mode mode,tree orig_exp)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  rtx prVar5;
  tree exp;
  tree cst;
  tree exp_00;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 uVar7;
  char c;
  uint expected_align;
  uint dest_align;
  built_in_function fcode;
  long expected_size;
  tree fn;
  rtx dest_addr;
  rtx len_rtx;
  rtx dest_mem;
  rtx val_rtx;
  tree fndecl;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  expected_size = -1;
  expected_align = 0;
  if ((ix86_isa_flags & 0x20) == 0) {
    uVar4 = 0x80;
  }
  else {
    uVar4 = 0x100;
  }
  dest_align = get_pointer_alignment(dest,uVar4);
  if (dest_align == 0) {
    prVar5 = (rtx)0x0;
    goto LAB_001087c2;
  }
  if (currently_expanding_gimple_stmt != 0) {
    stringop_block_profile(currently_expanding_gimple_stmt,&expected_align,&expected_size);
  }
  if (expected_align < dest_align) {
    expected_align = dest_align;
  }
  iVar3 = integer_zerop(len);
  if (iVar3 != 0) {
    expand_expr(val,_vector_type_mode,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    prVar5 = expand_expr(dest,target,mode,EXPAND_NORMAL);
    goto LAB_001087c2;
  }
  exp = builtin_save_expr(dest);
  cst = builtin_save_expr(val);
  exp_00 = builtin_save_expr(len);
  len_rtx = expand_normal(exp_00);
  dest_mem = get_memory_rtx(exp,exp_00);
  if (*(short *)cst == 0x17) {
    iVar3 = target_char_cast(cst,&c);
    if (iVar3 == 0) {
      if (c == '\0') {
        set_mem_align(dest_mem,dest_align);
        if ((orig_exp->field_0x2 & 4) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 3;
        }
        prVar5 = (rtx)clear_storage_hints(dest_mem,len_rtx,uVar6,expected_align,expected_size);
        dest_addr = prVar5;
        if (prVar5 == (rtx)0x0) {
          dest_addr = (rtx)force_operand(*(undefined8 *)&dest_mem->u,0);
          prVar5 = (rtx)convert_memory_address_addr_space(ptr_mode,dest_addr,0);
          dest_addr = prVar5;
        }
        goto LAB_001087c2;
      }
      iVar3 = host_integerp(exp_00,1);
      if (iVar3 == 0) {
LAB_00108575:
        lVar1 = expected_size;
        uVar4 = expected_align;
        uVar6 = gen_rtx_CONST_INT(0,(long)c);
        cVar2 = set_storage_via_setmem(dest_mem,len_rtx,uVar6,dest_align,uVar4,lVar1);
        if (cVar2 == '\0') goto do_libcall;
      }
      else {
        uVar6 = tree_low_cst(exp_00,1);
        iVar3 = can_store_by_pieces(uVar6,builtin_memset_read_str,&c,dest_align,1);
        if (iVar3 == 0) goto LAB_00108575;
        uVar7 = 0x108540;
        uVar6 = tree_low_cst(exp_00,1);
        store_by_pieces(dest_mem,uVar6,builtin_memset_read_str,&c,dest_align,1,0,uVar7);
      }
      dest_mem = (rtx)force_operand(*(undefined8 *)&dest_mem->u,0);
      prVar5 = (rtx)convert_memory_address_addr_space(ptr_mode,dest_mem,0);
      dest_mem = prVar5;
      goto LAB_001087c2;
    }
do_libcall:
    fndecl = (tree)get_callee_fndecl(orig_exp);
    fcode = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
    if (fcode == BUILT_IN_MEMSET) {
      fn = build_call_nofold_loc(0,fndecl,3,exp,cst,exp_00);
    }
    else if (fcode == BUILT_IN_BZERO) {
      fn = build_call_nofold_loc(0,fndecl,2,exp,exp_00);
    }
    else {
      fancy_abort("builtins.c",0xf1d,&DAT_0011bd60);
    }
    if (*(short *)fn != 0x3b) {
      fancy_abort("builtins.c",0xf1e,&DAT_0011bd60);
    }
    fn->field_0x2 = fn->field_0x2 & 0xfb | ((byte)orig_exp->field_0x2 >> 2 & 1) * '\x04';
    prVar5 = (rtx)expand_call(fn,target,target == _vector_type_mode);
  }
  else {
    val_rtx = expand_normal(cst);
    if (*_clear_storage_hints == 0xe) {
      uVar4 = vector_type_mode(_clear_storage_hints);
    }
    else {
      uVar4 = (uint)*(byte *)(_clear_storage_hints + 0x1f);
    }
    val_rtx = (rtx)convert_to_mode(uVar4,val_rtx,0);
    c = '\x01';
    iVar3 = host_integerp(exp_00,1);
    if (iVar3 == 0) {
LAB_00108452:
      cVar2 = set_storage_via_setmem
                        (dest_mem,len_rtx,val_rtx,dest_align,expected_align,expected_size);
      if (cVar2 == '\0') goto do_libcall;
    }
    else {
      uVar6 = tree_low_cst(exp_00,1);
      iVar3 = can_store_by_pieces(uVar6,builtin_memset_read_str,&c,dest_align,1);
      if (iVar3 == 0) goto LAB_00108452;
      if (*_clear_storage_hints == 0xe) {
        uVar4 = vector_type_mode(_clear_storage_hints);
      }
      else {
        uVar4 = (uint)*(byte *)(_clear_storage_hints + 0x1f);
      }
      val_rtx = (rtx)force_reg(uVar4,val_rtx);
      uVar7 = 0x10841d;
      uVar6 = tree_low_cst(exp_00,1);
      store_by_pieces(dest_mem,uVar6,builtin_memset_gen_str,val_rtx,dest_align,1,0,uVar7);
    }
    dest_mem = (rtx)force_operand(*(undefined8 *)&dest_mem->u,0);
    prVar5 = (rtx)convert_memory_address_addr_space(ptr_mode,dest_mem,0);
    dest_mem = prVar5;
  }
LAB_001087c2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_bzero(tree exp)

{
  tree dest_00;
  uchar uVar1;
  undefined4 uVar2;
  rtx prVar3;
  tree len;
  location_t loc;
  tree dest;
  tree size;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)&exp->field_0x18;
  }
  uVar1 = validate_arglist(exp,10,8,0x13);
  prVar3 = _vector_type_mode;
  if (uVar1 == '\0') {
    prVar3 = (rtx)0x0;
  }
  else {
    dest_00 = *(tree *)&exp->field_0x40;
    len = (tree)fold_convert_loc(uVar2,sizetype_tab,*(undefined8 *)&exp->field_0x48);
    prVar3 = expand_builtin_memset_args(dest_00,_set_mem_expr,len,prVar3,MAX_MODE_PARTIAL_INT,exp);
  }
  return prVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_memcmp(tree exp,rtx target,machine_mode mode)

{
  byte bVar1;
  ushort uVar2;
  tree exp_00;
  tree len_00;
  undefined8 uVar3;
  uchar uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  rtx prVar10;
  rtx prVar11;
  tree ptVar12;
  rtx prVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  location_t loc;
  int arg1_align;
  int arg2_align;
  machine_mode insn_mode;
  rtx result;
  tree arg1;
  tree arg2;
  tree len;
  rtx arg1_rtx;
  rtx arg2_rtx;
  rtx arg3_rtx;
  rtx insn;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)&exp->field_0x18;
  }
  uVar4 = validate_arglist(exp,10,10,8,0x13);
  if (uVar4 == '\0') {
    result = (rtx)0x0;
  }
  else {
    ptVar12 = *(tree *)&exp->field_0x40;
    exp_00 = *(tree *)&exp->field_0x48;
    len_00 = *(tree *)&exp->field_0x50;
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar8 = 0x80;
    }
    else {
      uVar8 = 0x100;
    }
    iVar6 = get_pointer_alignment(ptVar12,uVar8);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    iVar6 = iVar6 >> 3;
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar8 = 0x80;
    }
    else {
      uVar8 = 0x100;
    }
    iVar7 = get_pointer_alignment(exp_00,uVar8);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 7;
    }
    iVar7 = iVar7 >> 3;
    uVar2 = *(ushort *)(_DAT_00140510 + 0x10);
    if ((iVar6 == 0) || (iVar7 == 0)) {
      result = (rtx)0x0;
    }
    else {
      if ((((target == (rtx)0x0) || (*(short *)target != 0x25)) ||
          (uVar2 != (byte)target->field_0x2)) ||
         (uVar8 = rhs_regno(target), result = target, uVar8 < 0x35)) {
        result = (rtx)gen_reg_rtx(uVar2);
      }
      prVar10 = get_memory_rtx(ptVar12,len_00);
      prVar11 = get_memory_rtx(exp_00,len_00);
      ptVar12 = (tree)fold_convert_loc(uVar5,sizetype_tab,len_00);
      prVar13 = expand_normal(ptVar12);
      if (*(short *)prVar13 == 0x1e) {
        set_mem_size(prVar10,prVar13);
        set_mem_size(prVar11,prVar13);
      }
      if (iVar7 <= iVar6) {
        iVar6 = iVar7;
      }
      uVar14 = gen_rtx_CONST_INT(0,(long)iVar6);
      lVar15 = gen_cmpstrnsi(result,prVar10,prVar11,prVar13,uVar14);
      if (lVar15 == 0) {
        if (*sizetype_tab == 0xe) {
          uVar8 = vector_type_mode(sizetype_tab);
        }
        else {
          uVar8 = (uint)*(byte *)(sizetype_tab + 0x1f);
        }
        bVar1 = *(byte *)(sizetype_tab + 1);
        if (*sizetype_tab == 0xe) {
          uVar9 = vector_type_mode(sizetype_tab);
        }
        else {
          uVar9 = (uint)*(byte *)(sizetype_tab + 0x1f);
        }
        uVar17 = 0x108be0;
        uVar16 = convert_to_mode(uVar9,prVar13,bVar1 >> 5 & 1);
        uVar14 = *(undefined8 *)&prVar11->u;
        uVar3 = *(undefined8 *)&prVar10->u;
        if (*_gen_cmpstrnsi == 0xe) {
          uVar17 = 0x108c12;
          uVar9 = vector_type_mode(_gen_cmpstrnsi);
        }
        else {
          uVar9 = (uint)*(byte *)(_gen_cmpstrnsi + 0x1f);
        }
        emit_library_call_value
                  (_build_fold_addr_expr_with_type_loc,result,2,uVar9,3,uVar3,0x10,uVar14,0x10,
                   uVar16,uVar8,uVar17);
      }
      else {
        emit_insn(lVar15);
      }
      if (**(short **)&exp->field_0x10 == 0xe) {
        uVar8 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
      }
      else {
        uVar8 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
      }
      if (uVar8 != (byte)result->field_0x2) {
        if (target == (rtx)0x0) {
          result = (rtx)convert_to_mode(uVar8,result,0);
        }
        else {
          convert_move(target,result,0);
          result = target;
        }
      }
    }
  }
  return result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_strcmp(tree exp,rtx target)

{
  ushort uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  rtx prVar7;
  tree ptVar8;
  tree ptVar9;
  rtx prVar10;
  undefined8 uVar11;
  rtx prVar12;
  long lVar13;
  tree fndecl_00;
  int arg1_align;
  int arg2_align;
  machine_mode insn_mode;
  machine_mode mode;
  rtx result;
  rtx insn;
  tree len;
  tree len1;
  tree len2;
  tree arg1;
  tree arg2;
  rtx arg1_rtx;
  rtx arg2_rtx;
  rtx arg3_rtx;
  tree fndecl;
  tree fn;
  
  uVar2 = validate_arglist(exp,10,10,0x13);
  if (uVar2 == '\0') {
    prVar7 = (rtx)0x0;
  }
  else if ((_gimplify_and_add == 0xb8c) && (_build_variant_type_copy == 0xb8c)) {
    prVar7 = (rtx)0x0;
  }
  else {
    ptVar8 = *(tree *)&exp->field_0x40;
    ptVar9 = *(tree *)&exp->field_0x48;
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar6 = 0x80;
    }
    else {
      uVar6 = 0x100;
    }
    iVar3 = get_pointer_alignment(ptVar8,uVar6);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    iVar3 = iVar3 >> 3;
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar6 = 0x80;
    }
    else {
      uVar6 = 0x100;
    }
    iVar4 = get_pointer_alignment(ptVar9,uVar6);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    iVar4 = iVar4 >> 3;
    if ((iVar3 == 0) || (iVar4 == 0)) {
      prVar7 = (rtx)0x0;
    }
    else {
      ptVar8 = builtin_save_expr(ptVar8);
      ptVar9 = builtin_save_expr(ptVar9);
      prVar7 = get_memory_rtx(ptVar8,(tree)0x0);
      prVar10 = get_memory_rtx(ptVar9,(tree)0x0);
      uVar1 = *(ushort *)(_DAT_00140510 + 0x10);
      len1 = c_strlen(ptVar8,1);
      len2 = c_strlen(ptVar9,1);
      if (len1 != (tree)0x0) {
        uVar11 = size_int_kind(1,1);
        len1 = (tree)size_binop_loc(0,0x3f,uVar11,len1);
      }
      if (len2 != (tree)0x0) {
        uVar11 = size_int_kind(1,1);
        len2 = (tree)size_binop_loc(0,0x3f,uVar11,len2);
      }
      if (len1 == (tree)0x0) {
        len = len2;
      }
      else if (len2 == (tree)0x0) {
        len = len1;
      }
      else if ((len1->field_0x2 & 1) == 0) {
        if ((len2->field_0x2 & 1) == 0) {
          if (*(short *)len1 == 0x17) {
            if (*(short *)len2 == 0x17) {
              iVar5 = tree_int_cst_lt(len1,len2);
              if (iVar5 == 0) {
                len = len2;
              }
              else {
                len = len1;
              }
            }
            else {
              len = len1;
            }
          }
          else {
            len = len2;
          }
        }
        else {
          len = len1;
        }
      }
      else {
        len = len2;
      }
      if ((len != (tree)0x0) && ((len->field_0x2 & 1) == 0)) {
        prVar12 = expand_normal(len);
        if ((target == (rtx)0x0) ||
           (((*(short *)target != 0x25 || (uVar1 != (byte)target->field_0x2)) ||
            (uVar6 = rhs_regno(target), result = target, uVar6 < 0x35)))) {
          result = (rtx)gen_reg_rtx(uVar1);
        }
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
        uVar11 = gen_rtx_CONST_INT(0,(long)iVar3);
        lVar13 = gen_cmpstrnsi(result,prVar7,prVar10,prVar12,uVar11);
        if (lVar13 != 0) {
          emit_insn(lVar13);
          if (**(short **)&exp->field_0x10 == 0xe) {
            uVar6 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
          }
          else {
            uVar6 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
          }
          if (uVar6 == (byte)result->field_0x2) {
            return result;
          }
          if (target == (rtx)0x0) {
            prVar7 = (rtx)convert_to_mode(uVar6,result,0);
            return prVar7;
          }
          convert_move(target,result,0);
          return target;
        }
      }
      fndecl_00 = (tree)get_callee_fndecl(exp);
      ptVar8 = build_call_nofold_loc(0,fndecl_00,2,ptVar8,ptVar9);
      if (*(short *)ptVar8 != 0x3b) {
        fancy_abort("builtins.c",0x102d,&DAT_0011bd60);
      }
      ptVar8->field_0x2 = ptVar8->field_0x2 & 0xfb | ((byte)exp->field_0x2 >> 2 & 1) * '\x04';
      prVar7 = (rtx)expand_call(ptVar8,target,target == _vector_type_mode);
    }
  }
  return prVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_strncmp(tree exp,rtx target,machine_mode mode)

{
  ushort uVar1;
  uchar uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  tree ptVar10;
  tree ptVar11;
  tree ptVar12;
  rtx prVar13;
  rtx prVar14;
  rtx prVar15;
  long lVar16;
  tree fndecl_00;
  location_t loc;
  int arg1_align;
  int arg2_align;
  machine_mode insn_mode;
  tree len;
  tree len1;
  tree len2;
  rtx result;
  tree arg1;
  tree arg2;
  tree arg3;
  rtx arg1_rtx;
  rtx arg2_rtx;
  rtx arg3_rtx;
  rtx insn;
  tree fndecl;
  tree fn;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)&exp->field_0x18;
  }
  uVar2 = validate_arglist(exp,10,10,8,0x13);
  if (uVar2 == '\0') {
    result = (rtx)0x0;
  }
  else {
    ptVar11 = *(tree *)&exp->field_0x40;
    ptVar12 = *(tree *)&exp->field_0x48;
    uVar9 = *(undefined8 *)&exp->field_0x50;
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar7 = 0x80;
    }
    else {
      uVar7 = 0x100;
    }
    iVar4 = get_pointer_alignment(ptVar11,uVar7);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    iVar4 = iVar4 >> 3;
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar7 = 0x80;
    }
    else {
      uVar7 = 0x100;
    }
    iVar5 = get_pointer_alignment(ptVar12,uVar7);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    iVar5 = iVar5 >> 3;
    uVar1 = *(ushort *)(_DAT_00140510 + 0x10);
    len1 = c_strlen(ptVar11,1);
    len2 = c_strlen(ptVar12,1);
    if (len1 != (tree)0x0) {
      uVar8 = size_int_kind(1,1);
      len1 = (tree)size_binop_loc(uVar3,0x3f,uVar8,len1);
    }
    if (len2 != (tree)0x0) {
      uVar8 = size_int_kind(1,1);
      len2 = (tree)size_binop_loc(uVar3,0x3f,uVar8,len2);
    }
    if (len1 == (tree)0x0) {
      len = len2;
    }
    else if (len2 == (tree)0x0) {
      len = len1;
    }
    else if ((len1->field_0x2 & 1) == 0) {
      if ((len2->field_0x2 & 1) == 0) {
        if (*(short *)len1 == 0x17) {
          if (*(short *)len2 == 0x17) {
            iVar6 = tree_int_cst_lt(len1,len2);
            if (iVar6 == 0) {
              len = len2;
            }
            else {
              len = len1;
            }
          }
          else {
            len = len1;
          }
        }
        else {
          len = len2;
        }
      }
      else {
        len = len1;
      }
    }
    else {
      len = len2;
    }
    if ((len == (tree)0x0) || ((len->field_0x2 & 1) != 0)) {
      result = (rtx)0x0;
    }
    else {
      uVar9 = fold_convert_loc(uVar3,*(undefined8 *)&len->field_0x10,uVar9);
      ptVar10 = (tree)fold_build2_stat_loc(uVar3,0x50,*(undefined8 *)&len->field_0x10,len,uVar9);
      if ((iVar4 == 0) || (iVar5 == 0)) {
        result = (rtx)0x0;
      }
      else {
        if ((((target == (rtx)0x0) || (*(short *)target != 0x25)) ||
            (uVar1 != (byte)target->field_0x2)) ||
           (uVar7 = rhs_regno(target), result = target, uVar7 < 0x35)) {
          result = (rtx)gen_reg_rtx(uVar1);
        }
        ptVar11 = builtin_save_expr(ptVar11);
        ptVar12 = builtin_save_expr(ptVar12);
        ptVar10 = builtin_save_expr(ptVar10);
        prVar13 = get_memory_rtx(ptVar11,ptVar10);
        prVar14 = get_memory_rtx(ptVar12,ptVar10);
        prVar15 = expand_normal(ptVar10);
        if (iVar5 <= iVar4) {
          iVar4 = iVar5;
        }
        uVar9 = gen_rtx_CONST_INT(0,(long)iVar4);
        lVar16 = gen_cmpstrnsi(result,prVar13,prVar14,prVar15,uVar9);
        if (lVar16 == 0) {
          fndecl_00 = (tree)get_callee_fndecl(exp);
          ptVar11 = build_call_nofold_loc(0,fndecl_00,3,ptVar11,ptVar12,ptVar10);
          if (*(short *)ptVar11 != 0x3b) {
            fancy_abort("builtins.c",0x10a7,&DAT_0011bd60);
          }
          ptVar11->field_0x2 = ptVar11->field_0x2 & 0xfb | ((byte)exp->field_0x2 >> 2 & 1) * '\x04';
          result = (rtx)expand_call(ptVar11,target,target == _vector_type_mode);
        }
        else {
          emit_insn(lVar16);
          if (**(short **)&exp->field_0x10 == 0xe) {
            uVar7 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
          }
          else {
            uVar7 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
          }
          if (uVar7 != (byte)result->field_0x2) {
            if (target == (rtx)0x0) {
              result = (rtx)convert_to_mode(uVar7,result,0);
            }
            else {
              convert_move(target,result,0);
              result = target;
            }
          }
        }
      }
    }
  }
  return result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_saveregs(void)

{
  rtx prVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  rtx val;
  rtx seq;
  
  prVar1 = _memory_address_addr_space;
  if (_memory_address_addr_space == (rtx)0x0) {
    start_sequence();
    prVar1 = (rtx)(*_get_identifier)();
    uVar2 = get_insns();
    end_sequence();
    _memory_address_addr_space = prVar1;
    push_topmost_sequence();
    uVar3 = entry_of_function();
    emit_insn_after(uVar2,uVar3);
    pop_topmost_sequence();
  }
  return prVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_args_info(tree exp)

{
  int iVar1;
  long lVar2;
  rtx prVar3;
  int nwords;
  int *word_ptr;
  long wordnum;
  
  if ((int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) == 3) {
    error("missing argument in %<__builtin_args_info%>");
    prVar3 = _vector_type_mode;
  }
  else {
    iVar1 = host_integerp(*(undefined8 *)&exp->field_0x40,0);
    if (iVar1 == 0) {
      error("argument of %<__builtin_args_info%> must be constant");
      prVar3 = _vector_type_mode;
    }
    else {
      lVar2 = tree_low_cst(*(undefined8 *)&exp->field_0x40,0);
      if ((lVar2 < 0) || (0xf < lVar2)) {
        error("argument of %<__builtin_args_info%> out of range");
        prVar3 = _vector_type_mode;
      }
      else {
        prVar3 = (rtx)gen_rtx_CONST_INT(0,(long)*(int *)((long)&cfun + lVar2 * 4));
      }
    }
  }
  return prVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_next_arg(void)

{
  rtx prVar1;
  
  prVar1 = (rtx)expand_binop(ptr_mode,0x12a2b8,_emit_insn,_emit_stack_save,0,0,3);
  return prVar1;
}



tree stabilize_va_list_loc(location_t loc,tree valist,int needs_lvalue)

{
  short *psVar1;
  undefined8 uVar2;
  tree local_38;
  tree vatype;
  tree pt;
  tree p1;
  
  psVar1 = (short *)(*rtx_class)(*(undefined8 *)&valist->field_0x10);
  if (psVar1 == (short *)0x0) {
    fancy_abort("builtins.c",0x1109,&DAT_0011bd60);
  }
  local_38 = valist;
  if (*psVar1 == 0xf) {
    if ((valist->field_0x2 & 1) != 0) {
      local_38 = (tree)save_expr(valist);
    }
    if (**(short **)&local_38->field_0x10 == 0xf) {
      uVar2 = build_pointer_type(*(undefined8 *)(psVar1 + 8));
      local_38 = (tree)build_fold_addr_expr_with_type_loc(loc,local_38,uVar2);
    }
  }
  else {
    if (needs_lvalue == 0) {
      if ((valist->field_0x2 & 1) == 0) {
        return valist;
      }
      uVar2 = build_pointer_type(psVar1);
      local_38 = (tree)fold_build1_stat_loc(loc,0x79,uVar2,valist);
      local_38->field_0x2 = local_38->field_0x2 | 1;
    }
    if ((local_38->field_0x2 & 1) != 0) {
      local_38 = (tree)save_expr(local_38);
    }
    local_38 = (tree)build_fold_indirect_ref_loc(loc,local_38);
  }
  return local_38;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree std_build_builtin_va_list(void)

{
  return _emit_block_move;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree std_fn_abi_va_list(tree fndecl)

{
  return _last_call_insn;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree std_canonical_va_list_type(tree type)

{
  tree ptVar1;
  tree local_20;
  tree wtype;
  tree htype;
  
  if (((*(short *)type == 0x2f) || (*(short *)type == 0x30)) || (*(short *)type == 0x31)) {
    local_20 = *(tree *)&type->field_0x10;
  }
  else {
    local_20 = type;
    if (((*(short *)type == 10) || (*(short *)type == 0xc)) &&
       ((**(short **)&type->field_0x10 == 10 || (**(short **)&type->field_0x10 == 0xc)))) {
      local_20 = *(tree *)&type->field_0x10;
    }
  }
  wtype = _last_call_insn;
  htype = local_20;
  if ((*(short *)_last_call_insn == 0x10) &&
     ((*(short *)local_20 == 10 || (*(short *)local_20 == 0xc)))) {
    htype = *(tree *)&local_20->field_0x10;
  }
  else if ((*(short *)_last_call_insn == 0xf) &&
          (((*(short *)local_20 == 0xf || (*(short *)local_20 == 10)) || (*(short *)local_20 == 0xc)
           ))) {
    wtype = *(tree *)&_last_call_insn->field_0x10;
    htype = *(tree *)&local_20->field_0x10;
  }
  ptVar1 = _last_call_insn;
  if (*(long *)&wtype->field_0x80 != *(long *)&htype->field_0x80) {
    ptVar1 = (tree)0x0;
  }
  return ptVar1;
}



void std_expand_builtin_va_start(tree valist,rtx nextarg)

{
  rtx prVar1;
  rtx va_r;
  
  prVar1 = expand_expr(valist,(rtx)0x0,MAX_MODE_PARTIAL_INT,EXPAND_WRITE);
  convert_move(prVar1,nextarg,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_va_start(tree exp)

{
  uchar uVar1;
  location_t loc_00;
  rtx nextarg_00;
  tree valist_00;
  location_t loc;
  rtx nextarg;
  tree valist;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    loc_00 = 0;
  }
  else {
    loc_00 = *(location_t *)&exp->field_0x18;
  }
  if ((int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) < 5) {
    error_at(loc_00,"too few arguments to function %<va_start%>");
  }
  else {
    uVar1 = fold_builtin_next_arg(exp,'\x01');
    if (uVar1 == '\0') {
      nextarg_00 = expand_builtin_next_arg();
      valist_00 = stabilize_va_list_loc(loc_00,*(tree *)&exp->field_0x40,1);
      if (_flag_guess_branch_prob == (code *)0x0) {
        std_expand_builtin_va_start(valist_00,nextarg_00);
      }
      else {
        (*_flag_guess_branch_prob)(valist_00,nextarg_00);
      }
    }
  }
  return _vector_type_mode;
}



tree std_gimplify_va_arg_expr(tree valist,tree type,gimple_seq *pre_p,gimple_seq *post_p)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  tree ptVar5;
  long in_FS_OFFSET;
  tree local_68;
  uchar indirect;
  tree rounded_size;
  tree addr;
  ulong boundary;
  ulong align;
  tree valist_tmp;
  tree t;
  tree type_size;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)type == 0xe) {
    uVar2 = vector_type_mode(type);
  }
  else {
    uVar2 = (uint)(byte)type->field_0x3e;
  }
  cVar1 = pass_by_reference(0,uVar2,type,0);
  local_68 = type;
  if (cVar1 != '\0') {
    local_68 = (tree)build_pointer_type(type);
  }
  align = 4;
  if (*(short *)local_68 == 0xe) {
    uVar2 = vector_type_mode(local_68);
  }
  else {
    uVar2 = (uint)(byte)local_68->field_0x3e;
  }
  iVar3 = ix86_function_arg_boundary(uVar2,local_68);
  boundary = (ulong)iVar3;
  if (0x80000000 < boundary) {
    boundary = 0x80000000;
  }
  boundary = boundary >> 3;
  valist_tmp = (tree)get_initialized_tmp_var(valist,pre_p,0);
  if (align < boundary) {
    iVar3 = integer_zerop(*(undefined8 *)&local_68->field_0x20);
    if (iVar3 == 0) {
      uVar4 = size_int_kind(boundary - 1,0);
      uVar4 = fold_build2_stat_loc(0,0x42,*(undefined8 *)&valist->field_0x10,valist_tmp,uVar4);
      t = (tree)build2_stat(0x35,*(undefined8 *)&valist->field_0x10,valist_tmp,uVar4);
      gimplify_and_add(t,pre_p);
      t = (tree)fold_convert_loc(0,sizetype_tab,valist_tmp);
      uVar4 = size_int_kind(-boundary,0);
      uVar4 = fold_build2_stat_loc(0,0x59,sizetype_tab,t,uVar4);
      uVar4 = fold_convert_loc(0,*(undefined8 *)&valist->field_0x10,uVar4);
      t = (tree)build2_stat(0x35,*(undefined8 *)&valist->field_0x10,valist_tmp,uVar4);
      gimplify_and_add(t,pre_p);
      goto LAB_00109f49;
    }
  }
  boundary = align;
LAB_00109f49:
  boundary = boundary << 3;
  if (boundary < *(uint *)&local_68->field_0x40) {
    local_68 = (tree)build_variant_type_copy(local_68);
    *(int *)&local_68->field_0x40 = (int)boundary;
  }
  type_size = (tree)size_in_bytes(local_68);
  rounded_size = (tree)round_up_loc(0,type_size,align & 0xffffffff);
  gimplify_expr(&rounded_size,pre_p,post_p,0x1f382e8c78948,1);
  addr = valist_tmp;
  t = (tree)build2_stat(0x42,*(undefined8 *)&valist->field_0x10,valist_tmp,rounded_size);
  t = (tree)build2_stat(0x35,*(undefined8 *)&valist->field_0x10,valist,t);
  gimplify_and_add(t,pre_p);
  uVar4 = build_pointer_type(local_68);
  addr = (tree)fold_convert_loc(0,uVar4,addr);
  if (cVar1 != '\0') {
    addr = build_va_arg_indirect_ref(addr);
  }
  ptVar5 = build_va_arg_indirect_ref(addr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar5;
}



tree build_va_arg_indirect_ref(tree addr)

{
  undefined4 uVar1;
  tree ptVar2;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)addr * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)addr * 4))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)&addr->field_0x18;
  }
  ptVar2 = (tree)build_fold_indirect_ref_loc(uVar1,addr);
  if (flag_mudflap != 0) {
    mf_mark(ptVar2);
  }
  return ptVar2;
}



tree dummy_object(tree type)

{
  undefined8 uVar1;
  tree ptVar2;
  tree t;
  
  uVar1 = build_pointer_type(type);
  uVar1 = build_int_cst(uVar1,0);
  ptVar2 = (tree)build1_stat(0x2f,type,uVar1);
  return ptVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

gimplify_status gimplify_va_arg_expr(tree *expr_p,gimple_seq *pre_p,gimple_seq *post_p)

{
  char cVar1;
  location_t loc_00;
  gimplify_status gVar2;
  tree ptVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar warned;
  location_t loc;
  tree valist;
  tree type;
  tree have_va_type;
  tree promoted_type;
  tree p1;
  tree t;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  valist = *(tree *)&(*expr_p)->field_0x28;
  type = *(tree *)&(*expr_p)->field_0x10;
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)*expr_p * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)*expr_p * 4))) {
    loc_00 = 0;
  }
  else {
    loc_00 = *(location_t *)&(*expr_p)->field_0x18;
  }
  have_va_type = *(tree *)&valist->field_0x10;
  if (have_va_type == global_trees) {
    gVar2 = GS_ERROR;
  }
  else {
    have_va_type = (tree)(*rtx_class)(have_va_type);
    if (have_va_type == (tree)0x0) {
      error_at(loc_00,"first argument to %<va_arg%> not of type %<va_list%>");
      gVar2 = GS_ERROR;
    }
    else {
      promoted_type = (tree)(*_build_int_cst_type)(type);
      if (promoted_type == type) {
        if (*(short *)have_va_type == 0xf) {
          if (**(short **)&valist->field_0x10 == 0xf) {
            p1 = (tree)build_pointer_type(*(undefined8 *)&have_va_type->field_0x10);
            uVar4 = build_fold_addr_expr_loc(loc_00,valist);
            valist = (tree)fold_convert_loc(loc_00,p1,uVar4);
          }
          gimplify_expr(&valist,pre_p,post_p,0x1ef6ce8c78948,1);
        }
        else {
          gimplify_expr(&valist,pre_p,post_p,0x1ef49e8c78948,2);
        }
        if (global_dc == (code *)0x0) {
          gVar2 = GS_ALL_DONE;
        }
        else {
          ptVar3 = (tree)(*global_dc)(valist,type,pre_p,post_p);
          *expr_p = ptVar3;
          gVar2 = GS_OK;
        }
      }
      else {
        cVar1 = warning_at(loc_00,0,"%qT is promoted to %qT when passed through %<...%>",type,
                           promoted_type);
        if ((gimplify_va_arg_expr::lexical_block_0::gave_help == '\0') && (cVar1 != '\0')) {
          gimplify_va_arg_expr::lexical_block_0::gave_help = '\x01';
          inform(loc_00,"(so you should pass %qT not %qT to %<va_arg%>)",promoted_type,type);
        }
        if (cVar1 != '\0') {
          inform(loc_00,"if this code is reached, the program will abort");
        }
        gimplify_and_add(valist,pre_p);
        t = build_call_expr_loc(loc_00,implicit_built_in_decls[509],0);
        gimplify_and_add(t,pre_p);
        ptVar3 = dummy_object(type);
        *expr_p = ptVar3;
        gVar2 = GS_ALL_DONE;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return gVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_va_end(tree exp)

{
  tree valist;
  
  if (((*(tree *)&exp->field_0x40)->field_0x2 & 1) != 0) {
    expand_expr(*(tree *)&exp->field_0x40,_vector_type_mode,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  }
  return _vector_type_mode;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_va_copy(tree exp)

{
  location_t loc_00;
  undefined4 uVar1;
  tree exp_00;
  tree ptVar2;
  short *psVar3;
  undefined8 uVar4;
  rtx prVar5;
  rtx prVar6;
  long lVar7;
  rtx prVar8;
  undefined8 uVar9;
  location_t loc;
  tree dst;
  tree src;
  rtx dstb;
  rtx srcb;
  rtx size;
  tree t;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    loc_00 = 0;
  }
  else {
    loc_00 = *(location_t *)&exp->field_0x18;
  }
  ptVar2 = *(tree *)&exp->field_0x48;
  exp_00 = stabilize_va_list_loc(loc_00,*(tree *)&exp->field_0x40,1);
  ptVar2 = stabilize_va_list_loc(loc_00,ptVar2,0);
  if ((cfun == 0) || (*(long *)(cfun + 0x30) == 0)) {
    fancy_abort("builtins.c",0x1282,&DAT_0011bd60);
  }
  psVar3 = (short *)(*_get_alias_set)(*(undefined8 *)(cfun + 0x30));
  if (*psVar3 == 0xf) {
    prVar5 = expand_expr(exp_00,(rtx)0x0,SImode,EXPAND_NORMAL);
    prVar6 = expand_expr(ptVar2,(rtx)0x0,SImode,EXPAND_NORMAL);
    lVar7 = (*_get_alias_set)(*(undefined8 *)(cfun + 0x30));
    prVar8 = expand_expr(*(tree *)(lVar7 + 0x28),(rtx)0x0,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    uVar4 = convert_memory_address_addr_space(0x10,prVar5,0);
    uVar9 = convert_memory_address_addr_space(0x10,prVar6,0);
    uVar4 = gen_rtx_MEM(1,uVar4);
    uVar1 = get_alias_set(*(undefined8 *)(*(long *)&exp_00->field_0x10 + 0x10));
    set_mem_alias_set(uVar4,uVar1);
    lVar7 = (*_get_alias_set)(*(undefined8 *)(cfun + 0x30));
    set_mem_align(uVar4,*(undefined4 *)(lVar7 + 0x40));
    uVar9 = gen_rtx_MEM(1,uVar9);
    uVar1 = get_alias_set(*(undefined8 *)(*(long *)&ptVar2->field_0x10 + 0x10));
    set_mem_alias_set(uVar9,uVar1);
    lVar7 = (*_get_alias_set)(*(undefined8 *)(cfun + 0x30));
    set_mem_align(uVar9,*(undefined4 *)(lVar7 + 0x40));
    emit_block_move(uVar4,uVar9,prVar8,0);
  }
  else {
    uVar4 = (*_get_alias_set)(*(undefined8 *)(cfun + 0x30));
    ptVar2 = (tree)build2_stat(0x35,uVar4,exp_00,ptVar2);
    ptVar2->field_0x2 = ptVar2->field_0x2 | 1;
    expand_expr(ptVar2,_vector_type_mode,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  }
  return _vector_type_mode;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_frame_address(tree fndecl,tree exp)

{
  int iVar1;
  rtx prVar2;
  rtx tem;
  
  prVar2 = _vector_type_mode;
  if ((int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) != 3) {
    iVar1 = host_integerp(*(undefined8 *)&exp->field_0x40,1);
    if (iVar1 == 0) {
      if ((*(ushort *)&fndecl->field_0xd8 & 0x7ff) == 0x1c6) {
        error("invalid argument to %<__builtin_frame_address%>");
        prVar2 = _vector_type_mode;
      }
      else {
        error("invalid argument to %<__builtin_return_address%>");
        prVar2 = _vector_type_mode;
      }
    }
    else {
      iVar1 = tree_low_cst();
      prVar2 = expand_builtin_return_addr((uint)(*(ushort *)&fndecl->field_0xd8 & 0x7ff),iVar1);
      if (prVar2 == (rtx)0x0) {
        if ((*(ushort *)&fndecl->field_0xd8 & 0x7ff) == 0x1c6) {
          warning(0,"unsupported argument to %<__builtin_frame_address%>");
          prVar2 = _vector_type_mode;
        }
        else {
          warning(0,"unsupported argument to %<__builtin_return_address%>");
          prVar2 = _vector_type_mode;
        }
      }
      else if ((((*(ushort *)&fndecl->field_0xd8 & 0x7ff) != 0x1c6) && (*(short *)prVar2 != 0x25))
              && (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)prVar2 * 4) != 9)) {
        prVar2 = (rtx)copy_to_mode_reg(0x10,prVar2);
      }
    }
  }
  return prVar2;
}



rtx expand_builtin_alloca(tree exp,rtx target)

{
  uchar uVar1;
  rtx prVar2;
  undefined8 uVar3;
  rtx op0;
  rtx result;
  
  if ((exp->field_0x3 & 4) == 0) {
    uVar1 = validate_arglist(exp,8,0x13);
    if (uVar1 == '\0') {
      prVar2 = (rtx)0x0;
    }
    else {
      prVar2 = expand_normal(*(tree *)&exp->field_0x40);
      uVar3 = allocate_dynamic_stack_space(prVar2,target,8);
      prVar2 = (rtx)convert_memory_address_addr_space(ptr_mode,uVar3,0);
    }
  }
  else {
    prVar2 = (rtx)0x0;
  }
  return prVar2;
}



rtx expand_builtin_bswap(tree exp,rtx target,rtx subtarget)

{
  tree exp_00;
  uchar uVar1;
  uint uVar2;
  rtx prVar3;
  long lVar4;
  machine_mode mode;
  tree arg;
  rtx op0;
  
  uVar1 = validate_arglist(exp,8,0x13);
  if (uVar1 == '\0') {
    prVar3 = (rtx)0x0;
  }
  else {
    exp_00 = *(tree *)&exp->field_0x40;
    if (**(short **)&exp_00->field_0x10 == 0xe) {
      uVar2 = vector_type_mode(*(undefined8 *)&exp_00->field_0x10);
    }
    else {
      uVar2 = (uint)*(byte *)(*(long *)&exp_00->field_0x10 + 0x3e);
    }
    prVar3 = expand_expr(exp_00,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    lVar4 = expand_unop(uVar2,0x12f6b8,prVar3,target,1);
    if (lVar4 == 0) {
      fancy_abort("builtins.c",0x1303,&DAT_0011bd60);
    }
    prVar3 = (rtx)convert_to_mode(uVar2,lVar4,0);
  }
  return prVar3;
}



rtx expand_builtin_unop(machine_mode target_mode,tree exp,rtx target,rtx subtarget,optab op_optab)

{
  uchar uVar1;
  uint uVar2;
  rtx prVar3;
  long lVar4;
  rtx op0;
  
  uVar1 = validate_arglist(exp,8,0x13);
  if (uVar1 == '\0') {
    prVar3 = (rtx)0x0;
  }
  else {
    prVar3 = expand_expr(*(tree *)&exp->field_0x40,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    if (**(short **)(*(long *)&exp->field_0x40 + 0x10) == 0xe) {
      uVar2 = vector_type_mode(*(undefined8 *)(*(long *)&exp->field_0x40 + 0x10));
    }
    else {
      uVar2 = (uint)*(byte *)(*(long *)(*(long *)&exp->field_0x40 + 0x10) + 0x3e);
    }
    lVar4 = expand_unop(uVar2,op_optab,prVar3,target,1);
    if (lVar4 == 0) {
      fancy_abort("builtins.c",0x131d,&DAT_0011bd60);
    }
    prVar3 = (rtx)convert_to_mode(target_mode,lVar4,0);
  }
  return prVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_expect(tree exp,rtx target)

{
  rtx prVar1;
  tree arg;
  
  prVar1 = _vector_type_mode;
  if ((((4 < (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18)) &&
       (prVar1 = expand_expr(*(tree *)&exp->field_0x40,target,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL),
       flag_guess_branch_prob != 0)) && (optimize != 0)) &&
     ((*(int *)(global_dc + 0x18) == 0 && (*(int *)(global_dc + 0x1c) == 0)))) {
    fancy_abort("builtins.c",0x1331,&DAT_0011bd60);
  }
  return prVar1;
}



void expand_builtin_trap(void)

{
  undefined8 uVar1;
  
  uVar1 = gen_trap();
  emit_insn(uVar1);
  emit_barrier();
  return;
}



void expand_builtin_unreachable(void)

{
  emit_barrier();
  return;
}



rtx expand_builtin_fabs(tree exp,rtx target,rtx subtarget)

{
  uchar uVar1;
  uint uVar2;
  undefined4 uVar3;
  rtx prVar4;
  tree exp_00;
  machine_mode mode;
  tree arg;
  rtx op0;
  
  uVar1 = validate_arglist(exp,9,0x13);
  if (uVar1 == '\0') {
    prVar4 = (rtx)0x0;
  }
  else {
    exp_00 = builtin_save_expr(*(tree *)&exp->field_0x40);
    *(tree *)&exp->field_0x40 = exp_00;
    if (**(short **)&exp_00->field_0x10 == 0xe) {
      uVar2 = vector_type_mode(*(undefined8 *)&exp_00->field_0x10);
    }
    else {
      uVar2 = (uint)*(byte *)(*(long *)&exp_00->field_0x10 + 0x3e);
    }
    prVar4 = expand_expr(exp_00,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    uVar3 = safe_from_p(target,exp_00,1);
    prVar4 = (rtx)expand_abs(uVar2,prVar4,target,0,uVar3);
  }
  return prVar4;
}



rtx expand_builtin_copysign(tree exp,rtx target,rtx subtarget)

{
  uchar uVar1;
  rtx prVar2;
  rtx prVar3;
  tree arg;
  rtx op0;
  rtx op1;
  
  uVar1 = validate_arglist(exp,9,9,0x13);
  if (uVar1 == '\0') {
    prVar2 = (rtx)0x0;
  }
  else {
    prVar2 = expand_expr(*(tree *)&exp->field_0x40,subtarget,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    prVar3 = expand_normal(*(tree *)&exp->field_0x48);
    prVar2 = (rtx)expand_copysign(prVar2,prVar3,target);
  }
  return prVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree build_string_literal(int len,char *str)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  tree ptVar4;
  tree t;
  tree elem;
  tree index;
  tree type;
  
  lVar1 = build_string(len,str);
  uVar2 = build_qualified_type(integer_types,1);
  uVar3 = size_int_kind((long)(len + -1),0);
  uVar3 = build_index_type(uVar3);
  uVar3 = build_array_type(uVar2,uVar3);
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  *(byte *)(lVar1 + 2) = *(byte *)(lVar1 + 2) | 2;
  *(byte *)(lVar1 + 2) = *(byte *)(lVar1 + 2) | 0x10;
  *(byte *)(lVar1 + 3) = *(byte *)(lVar1 + 3) | 4;
  uVar3 = build_pointer_type(uVar2);
  uVar2 = build4_stat(0x2d,uVar2,lVar1,_set_mem_expr,0,0);
  ptVar4 = (tree)build1_stat(0x79,uVar3,uVar2);
  return ptVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_profile_func(uchar exitp)

{
  undefined8 uVar1;
  short *psVar2;
  rtx prVar3;
  rtx which;
  rtx this_rtx;
  
  if (*(long *)(current_function_decl + 0x70) == 0) {
    make_decl_rtl(current_function_decl);
    psVar2 = *(short **)(current_function_decl + 0x70);
  }
  else {
    psVar2 = *(short **)(current_function_decl + 0x70);
  }
  if (*psVar2 != 0x2b) {
    fancy_abort("builtins.c",0x139a,&DAT_0011bd60);
  }
  uVar1 = *(undefined8 *)(psVar2 + 4);
  if (exitp == '\0') {
    which = _build_variant_type_copy;
  }
  else {
    which = _size_in_bytes;
  }
  prVar3 = expand_builtin_return_addr(BUILT_IN_RETURN_ADDRESS,0);
  emit_library_call(which,0,0,2,uVar1,0x10,prVar3,0x10);
  return _vector_type_mode;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin___clear_cache(tree exp)

{
  return _vector_type_mode;
}



rtx round_trampoline_addr(rtx tramp)

{
  return tramp;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_init_trampoline(tree exp)

{
  tree exp_00;
  short *psVar1;
  tree exp_01;
  uchar uVar2;
  rtx prVar3;
  rtx prVar4;
  undefined8 uVar5;
  rtx m_tramp;
  tree t_tramp;
  tree t_func;
  tree t_chain;
  rtx r_tramp;
  rtx tmp;
  rtx r_chain;
  
  uVar2 = validate_arglist(exp,10,10,10,0x13);
  if (uVar2 == '\0') {
    prVar3 = (rtx)0x0;
  }
  else {
    exp_00 = *(tree *)&exp->field_0x40;
    psVar1 = *(short **)&exp->field_0x48;
    exp_01 = *(tree *)&exp->field_0x50;
    prVar3 = expand_normal(exp_00);
    m_tramp = (rtx)gen_rtx_MEM(1,prVar3);
    m_tramp->field_0x3 = m_tramp->field_0x3 | 2;
    if (*(short *)exp_00 == 0x79) {
      set_mem_attributes_minus_bitpos(m_tramp,*(undefined8 *)&exp_00->field_0x28,1,0);
    }
    prVar4 = round_trampoline_addr(prVar3);
    if (prVar4 != prVar3) {
      m_tramp = (rtx)change_address(m_tramp,1,prVar4);
      set_mem_align(m_tramp,8);
      uVar5 = gen_rtx_CONST_INT(0,10);
      set_mem_size(m_tramp,uVar5);
    }
    if (*psVar1 != 0x79) {
      fancy_abort("builtins.c",0x141b,&DAT_0011bd60);
    }
    psVar1 = *(short **)(psVar1 + 0x14);
    if (*psVar1 != 0x1d) {
      fancy_abort("builtins.c",0x141d,&DAT_0011bd60);
    }
    prVar3 = expand_normal(exp_01);
    (*_real_isinteger)(m_tramp,psVar1,prVar3);
    _trampolines_created = 1;
    prVar3 = _vector_type_mode;
  }
  return prVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_adjust_trampoline(tree exp)

{
  uchar uVar1;
  rtx prVar2;
  rtx tramp;
  
  uVar1 = validate_arglist(exp,10,0x13);
  if (uVar1 == '\0') {
    prVar2 = (rtx)0x0;
  }
  else {
    prVar2 = expand_normal(*(tree *)&exp->field_0x40);
    prVar2 = round_trampoline_addr(prVar2);
    if (_strip_float_extensions != (code *)0x0) {
      prVar2 = (rtx)(*_strip_float_extensions)(prVar2);
    }
  }
  return prVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_signbit(tree exp,rtx target)

{
  long lVar1;
  uchar uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  rtx prVar9;
  tree ptVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  rtx local_68;
  machine_mode imode;
  int bitpos;
  location_t loc;
  machine_mode fmode;
  machine_mode rmode;
  insn_code icode;
  int word;
  long hi;
  long lo;
  rtx temp;
  tree arg;
  real_format *fmt;
  rtx last;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)&exp->field_0x18;
  }
  uVar2 = validate_arglist(exp,9,0x13);
  if (uVar2 == '\0') {
    prVar9 = (rtx)0x0;
  }
  else {
    ptVar10 = *(tree *)&exp->field_0x40;
    if (**(short **)&ptVar10->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&ptVar10->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&ptVar10->field_0x10 + 0x3e);
    }
    if (**(short **)&exp->field_0x10 == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
    }
    lVar1 = *(long *)(&real_format_for_mode + (ulong)(uVar5 - 0x26) * 8);
    ptVar10 = builtin_save_expr(ptVar10);
    prVar9 = expand_normal(ptVar10);
    iVar8 = *(int *)(&optab_table + ((long)(int)uVar5 + 0x26a8) * 4);
    local_68 = target;
    if (iVar8 != 0xb8c) {
      uVar11 = get_last_insn();
      if (**(short **)&exp->field_0x10 == 0xe) {
        uVar7 = vector_type_mode(*(undefined8 *)&exp->field_0x10);
      }
      else {
        uVar7 = (uint)*(byte *)(*(long *)&exp->field_0x10 + 0x3e);
      }
      local_68 = (rtx)gen_reg_rtx(uVar7);
      cVar3 = maybe_emit_unop_insn(iVar8,local_68,prVar9);
      if (cVar3 != '\0') {
        return local_68;
      }
      delete_insns_since(uVar11);
    }
    bitpos = *(int *)(lVar1 + 0x24);
    if (bitpos < 0) {
      if ((*(char *)(lVar1 + 0x31) != '\0') &&
         (((((&mode_class)[uVar5] == '\b' || ((&mode_class)[uVar5] == '\t')) ||
           ((&mode_class)[uVar5] == '\v')) || ((&mode_class)[uVar5] == '\x11')))) {
        if (((&mode_class)[uVar5] != '\b') && ((&mode_class)[uVar5] != '\t')) {
          uVar5 = (uint)(byte)(&mode_inner)[uVar5];
        }
        if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)(uVar5 - 0x26) * 8) + 0x31) != '\0')
           && (flag_signed_zeros != 0)) {
          return (rtx)0x0;
        }
      }
      uVar11 = build_real(*(undefined8 *)&ptVar10->field_0x10);
      ptVar10 = (tree)fold_build2_stat_loc
                                (uVar4,0x61,*(undefined8 *)&exp->field_0x10,ptVar10,uVar11);
      prVar9 = expand_expr(ptVar10,local_68,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
    }
    else {
      if ((byte)(&mode_size)[uVar5] < 5) {
        imode = int_mode_for_mode(uVar5);
        if (imode == BLKmode) {
          return (rtx)0x0;
        }
        temp = (rtx)(*rtl_hooks)(imode,prVar9);
      }
      else {
        imode = (machine_mode)word_mode;
        iVar8 = bitpos;
        if (bitpos < 0) {
          iVar8 = bitpos + 0x1f;
        }
        temp = (rtx)operand_subword_force(prVar9,iVar8 >> 5,uVar5);
        uVar5 = (uint)(bitpos >> 0x1f) >> 0x1b;
        bitpos = (bitpos + uVar5 & 0x1f) - uVar5;
      }
      temp = (rtx)force_reg(imode,temp);
      if (bitpos < (int)((uint)(byte)(&mode_size)[uVar6] << 3)) {
        if (bitpos < 0x40) {
          hi = 0;
          lo = 1 << ((byte)bitpos & 0x3f);
        }
        else {
          hi = 1 << ((byte)bitpos - 0x40 & 0x3f);
          lo = 0;
        }
        if ((byte)(&mode_size)[uVar6] < (byte)(&mode_size)[imode]) {
          temp = (rtx)(*rtl_hooks)(uVar6,temp);
        }
        uVar12 = 0x10b6f7;
        uVar11 = immed_double_const(lo,hi,uVar6);
        prVar9 = (rtx)expand_binop(uVar6,0x12ce38,temp,uVar11,0,1,3,uVar12);
      }
      else {
        uVar11 = build_int_cst(0,(long)bitpos);
        uVar11 = expand_shift(0x54,imode,temp,uVar11,0,1);
        uVar12 = 0x10b77b;
        uVar11 = (*rtl_hooks)(uVar6,uVar11);
        prVar9 = (rtx)expand_binop(uVar6,0x12ce38,uVar11,flag_errno_math,0,1,3,uVar12);
      }
    }
  }
  return prVar9;
}



rtx expand_builtin_fork_or_exec(tree fn,tree exp,rtx target,int ignore)

{
  location_t loc;
  rtx prVar1;
  tree ptVar2;
  tree id;
  tree decl;
  tree call;
  
  if (profile_arc_flag == 0) {
    prVar1 = (rtx)0x0;
  }
  else {
    switch(*(ushort *)&fn->field_0xd8 & 0x7ff) {
    case 0x1b7:
      id = (tree)get_identifier();
      break;
    case 0x1b8:
      id = (tree)get_identifier();
      break;
    case 0x1b9:
      id = (tree)get_identifier();
      break;
    case 0x1ba:
      id = (tree)get_identifier();
      break;
    case 0x1bb:
      id = (tree)get_identifier();
      break;
    case 0x1bc:
      id = (tree)get_identifier();
      break;
    default:
      fancy_abort("builtins.c",0x14e4,&DAT_0011bd60);
      break;
    case 0x1c5:
      id = (tree)get_identifier();
    }
    ptVar2 = (tree)build_decl_stat(*(undefined4 *)&fn->field_0x18,0x1d,id,
                                   *(undefined8 *)&fn->field_0x10);
    ptVar2->field_0x3b = ptVar2->field_0x3b | 2;
    ptVar2->field_0x3 = ptVar2->field_0x3 | 8;
    ptVar2->field_0x39 = ptVar2->field_0x39 | 0x10;
    ptVar2->field_0x3 = ptVar2->field_0x3 | 2;
    ptVar2->field_0x91 = ptVar2->field_0x91 & 0xf3;
    ptVar2->field_0x91 = ptVar2->field_0x91 | 0x10;
    if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
       (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
      loc = 0;
    }
    else {
      loc = *(location_t *)&exp->field_0x18;
    }
    ptVar2 = rewrite_call_expr(loc,exp,0,ptVar2,0);
    prVar1 = (rtx)expand_call(ptVar2,target,ignore);
  }
  return prVar1;
}



rtx get_builtin_sync_mem(tree loc,machine_mode mode)

{
  int iVar1;
  rtx prVar2;
  undefined8 uVar3;
  uint max_align;
  rtx addr;
  rtx mem;
  
  prVar2 = expand_expr(loc,(rtx)0x0,ptr_mode,EXPAND_SUM);
  convert_memory_address_addr_space(0x10,prVar2,0);
  uVar3 = gen_rtx_MEM(mode);
  prVar2 = (rtx)validize_mem(uVar3);
  if ((ix86_isa_flags & 0x20) == 0) {
    max_align = 0x80;
  }
  else {
    max_align = 0x100;
  }
  iVar1 = get_pointer_alignment(loc,max_align);
  set_mem_align(prVar2,iVar1);
  set_mem_alias_set(prVar2,0xffffffff);
  prVar2->field_0x3 = prVar2->field_0x3 | 8;
  return prVar2;
}



rtx expand_builtin_sync_operation
              (machine_mode mode,tree exp,rtx_code code,uchar after,rtx target,uchar ignore)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  rtx prVar4;
  rtx prVar5;
  undefined8 uVar6;
  machine_mode old_mode;
  location_t loc;
  built_in_function fcode;
  tree fndecl;
  rtx mem;
  rtx val;
  
  if ((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4) < 4) ||
     (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)exp * 4))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)&exp->field_0x18;
  }
  if ((code == NOT) && (warn_sync_nand != 0)) {
    lVar3 = get_callee_fndecl(exp);
    uVar2 = (uint)(*(ushort *)(lVar3 + 0xd8) & 0x7ff);
    if (uVar2 < 0x24f) {
      if (0x249 < uVar2) {
        if (expand_builtin_sync_operation::lexical_block_0::warned_f_a_n == '\0') {
          inform(uVar1,"%qD changed semantics in GCC 4.4",implicit_built_in_decls[585]);
          expand_builtin_sync_operation::lexical_block_0::warned_f_a_n = '\x01';
        }
        goto LAB_0010bc19;
      }
    }
    else if (uVar2 - 0x26e < 5) {
      if (expand_builtin_sync_operation::lexical_block_0::warned_n_a_f == '\0') {
        inform(uVar1,"%qD changed semantics in GCC 4.4",implicit_built_in_decls[621]);
        expand_builtin_sync_operation::lexical_block_0::warned_n_a_f = '\x01';
      }
      goto LAB_0010bc19;
    }
    fancy_abort("builtins.c",0x1553,&DAT_0011bd60);
  }
LAB_0010bc19:
  prVar4 = get_builtin_sync_mem(*(tree *)&exp->field_0x40,mode);
  prVar5 = expand_expr(*(tree *)&exp->field_0x48,(rtx)0x0,mode,EXPAND_NORMAL);
  old_mode = (machine_mode)(byte)prVar5->field_0x2;
  if (old_mode == MAX_MODE_PARTIAL_INT) {
    if (**(short **)(*(long *)&exp->field_0x48 + 0x10) == 0xe) {
      old_mode = vector_type_mode(*(undefined8 *)(*(long *)&exp->field_0x48 + 0x10));
    }
    else {
      old_mode = (machine_mode)*(byte *)(*(long *)(*(long *)&exp->field_0x48 + 0x10) + 0x3e);
    }
  }
  uVar6 = convert_modes(mode,old_mode,prVar5,1);
  if (ignore == '\0') {
    prVar4 = (rtx)expand_sync_fetch_operation(prVar4,uVar6,code,after,target);
  }
  else {
    prVar4 = (rtx)expand_sync_operation(prVar4,uVar6,code);
  }
  return prVar4;
}



rtx expand_builtin_compare_and_swap(machine_mode mode,tree exp,uchar is_bool,rtx target)

{
  rtx prVar1;
  rtx prVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  machine_mode old_mode;
  rtx mem;
  rtx old_val;
  rtx new_val;
  
  prVar1 = get_builtin_sync_mem(*(tree *)&exp->field_0x40,mode);
  prVar2 = expand_expr(*(tree *)&exp->field_0x48,(rtx)0x0,mode,EXPAND_NORMAL);
  old_mode = (machine_mode)(byte)prVar2->field_0x2;
  if (old_mode == MAX_MODE_PARTIAL_INT) {
    if (**(short **)(*(long *)&exp->field_0x48 + 0x10) == 0xe) {
      old_mode = vector_type_mode(*(undefined8 *)(*(long *)&exp->field_0x48 + 0x10));
    }
    else {
      old_mode = (machine_mode)*(byte *)(*(long *)(*(long *)&exp->field_0x48 + 0x10) + 0x3e);
    }
  }
  uVar3 = convert_modes(mode,old_mode,prVar2,1);
  prVar2 = expand_expr(*(tree *)&exp->field_0x50,(rtx)0x0,mode,EXPAND_NORMAL);
  old_mode = (machine_mode)(byte)prVar2->field_0x2;
  if (old_mode == MAX_MODE_PARTIAL_INT) {
    if (**(short **)(*(long *)&exp->field_0x50 + 0x10) == 0xe) {
      old_mode = vector_type_mode(*(undefined8 *)(*(long *)&exp->field_0x50 + 0x10));
    }
    else {
      old_mode = (machine_mode)*(byte *)(*(long *)(*(long *)&exp->field_0x50 + 0x10) + 0x3e);
    }
  }
  uVar4 = convert_modes(mode,old_mode,prVar2,1);
  if (is_bool == '\0') {
    prVar1 = (rtx)expand_val_compare_and_swap(prVar1,uVar3,uVar4,target);
  }
  else {
    prVar1 = (rtx)expand_bool_compare_and_swap(prVar1,uVar3,uVar4,target);
  }
  return prVar1;
}



rtx expand_builtin_lock_test_and_set(machine_mode mode,tree exp,rtx target)

{
  rtx prVar1;
  rtx prVar2;
  undefined8 uVar3;
  machine_mode old_mode;
  rtx mem;
  rtx val;
  
  prVar1 = get_builtin_sync_mem(*(tree *)&exp->field_0x40,mode);
  prVar2 = expand_expr(*(tree *)&exp->field_0x48,(rtx)0x0,mode,EXPAND_NORMAL);
  old_mode = (machine_mode)(byte)prVar2->field_0x2;
  if (old_mode == MAX_MODE_PARTIAL_INT) {
    if (**(short **)(*(long *)&exp->field_0x48 + 0x10) == 0xe) {
      old_mode = vector_type_mode(*(undefined8 *)(*(long *)&exp->field_0x48 + 0x10));
    }
    else {
      old_mode = (machine_mode)*(byte *)(*(long *)(*(long *)&exp->field_0x48 + 0x10) + 0x3e);
    }
  }
  uVar3 = convert_modes(mode,old_mode,prVar2,1);
  prVar1 = (rtx)expand_sync_lock_test_and_set(prVar1,uVar3,target);
  return prVar1;
}



void expand_builtin_synchronize(void)

{
  undefined8 uVar1;
  
  uVar1 = gen_memory_barrier();
  emit_insn(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void expand_builtin_lock_release(machine_mode mode,tree exp)

{
  uint uVar1;
  rtx prVar2;
  int iVar3;
  rtx prVar4;
  long lVar5;
  insn_code icode;
  rtx val;
  rtx mem;
  rtx insn;
  
  prVar2 = _vector_type_mode;
  val = _vector_type_mode;
  prVar4 = get_builtin_sync_mem(*(tree *)&exp->field_0x40,mode);
  uVar1 = *(uint *)(&sync_lock_release + (ulong)mode * 4);
  if (uVar1 != 0xb8c) {
    iVar3 = (**(code **)(*(long *)(&ptr_mode + (ulong)uVar1 * 10) + 0x18))(prVar2,mode);
    if (iVar3 == 0) {
      val = (rtx)force_reg(mode,prVar2);
    }
    lVar5 = (**(code **)(side_effects_p + (ulong)uVar1 * 0x28))(prVar4,val);
    if (lVar5 != 0) {
      emit_insn(lVar5);
      return;
    }
  }
  expand_builtin_synchronize();
  emit_move_insn(prVar4,val);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin(tree exp,rtx target,rtx subtarget,machine_mode mode,int ignore)

{
  long lVar1;
  bool bVar2;
  uchar uVar3;
  ushort uVar4;
  tree node;
  rtx prVar5;
  long in_FS_OFFSET;
  rtx local_58;
  uchar volatilep;
  built_in_function fcode;
  machine_mode target_mode;
  tree arg;
  tree fndecl;
  call_expr_arg_iterator iter;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  node = (tree)get_callee_fndecl(exp);
  uVar4 = *(ushort *)&node->field_0xd8 & 0x7ff;
  if (**(short **)&exp->field_0x10 == 0xe) {
    vector_type_mode(*(undefined8 *)&exp->field_0x10);
  }
  if ((node->field_0xd9 & 0x18) == 0x10) {
    prVar5 = (rtx)(*_optimize_insn_for_speed_p)(exp,target,subtarget,mode,ignore);
  }
  else if (((((optimize == 0) && (uVar3 = called_as_built_in(node), uVar3 == '\0')) &&
            ((&DAT_001294a5)[(ulong)*(ushort *)node * 0x40] != '\0')) &&
           ((*(long *)&node->field_0x78 != 0 && (uVar4 != 0x19f)))) && (uVar4 != 0x1c7)) {
    prVar5 = (rtx)expand_call(exp,target,ignore);
  }
  else {
    local_58 = target;
    if (ignore != 0) {
      local_58 = _vector_type_mode;
    }
    if ((local_58 == _vector_type_mode) &&
       (((node->field_0xdb & 8) != 0 || ((node->field_0x2 & 0x10) != 0)))) {
      bVar2 = false;
      arg = first_call_expr_arg(exp,&iter);
      while (arg != (tree)0x0) {
        if ((arg->field_0x2 & 8) != 0) {
          bVar2 = true;
          break;
        }
        arg = next_call_expr_arg(&iter);
      }
      if (!bVar2) {
        arg = first_call_expr_arg(exp,&iter);
        while (prVar5 = _vector_type_mode, arg != (tree)0x0) {
          expand_expr(arg,_vector_type_mode,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
          arg = next_call_expr_arg(&iter);
        }
        goto LAB_0010c2c9;
      }
    }
    prVar5 = (rtx)expand_call(exp,local_58,ignore);
  }
LAB_0010c2c9:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return prVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



built_in_function builtin_mathfn_code(const_tree t)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  uchar uVar4;
  built_in_function bVar5;
  short *psVar6;
  const_tree ptVar7;
  long in_FS_OFFSET;
  const_tree parmlist;
  const_tree fndecl;
  const_tree parmtype;
  const_tree arg;
  const_tree argtype;
  const_call_expr_arg_iterator iter;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(short *)t == 0x3b) && (**(short **)&t->field_0x30 == 0x79)) {
    psVar6 = (short *)get_callee_fndecl(t);
    if ((((psVar6 == (short *)0x0) || (*psVar6 != 0x1d)) ||
        ((*(byte *)((long)psVar6 + 0xd9) & 0x18) == 0)) ||
       ((*(byte *)((long)psVar6 + 0xd9) & 0x18) == 0x10)) {
      bVar5 = END_BUILTINS;
    }
    else {
      parmlist = *(const_tree *)(*(long *)(psVar6 + 8) + 0x18);
      init_const_call_expr_arg_iterator(t,&iter);
      for (; parmlist != (const_tree)0x0; parmlist = *(const_tree *)&parmlist->field_0x8) {
        psVar2 = *(short **)&parmlist->field_0x20;
        if (*psVar2 == 0x13) {
          uVar4 = more_const_call_expr_args_p(&iter);
          if (uVar4 == '\0') {
            bVar5 = (built_in_function)(psVar6[0x6c] & 0x7ff);
          }
          else {
            bVar5 = END_BUILTINS;
          }
          goto LAB_0010c55c;
        }
        uVar4 = more_const_call_expr_args_p(&iter);
        if (uVar4 == '\0') {
          bVar5 = END_BUILTINS;
          goto LAB_0010c55c;
        }
        ptVar7 = next_const_call_expr_arg(&iter);
        psVar3 = *(short **)&ptVar7->field_0x10;
        if (*psVar2 == 9) {
          if (*psVar3 != 9) {
            bVar5 = END_BUILTINS;
            goto LAB_0010c55c;
          }
        }
        else if ((*psVar2 == 0xd) && (**(short **)(psVar2 + 8) == 9)) {
          if ((*psVar3 != 0xd) || (**(short **)(psVar3 + 8) != 9)) {
            bVar5 = END_BUILTINS;
            goto LAB_0010c55c;
          }
        }
        else if ((*psVar2 == 10) || (*psVar2 == 0xc)) {
          if ((*psVar3 != 10) && (*psVar3 != 0xc)) {
            bVar5 = END_BUILTINS;
            goto LAB_0010c55c;
          }
        }
        else {
          if (((*psVar2 != 6) && (*psVar2 != 7)) && (*psVar2 != 8)) {
            bVar5 = END_BUILTINS;
            goto LAB_0010c55c;
          }
          if (((*psVar3 != 6) && (*psVar3 != 7)) && (*psVar3 != 8)) {
            bVar5 = END_BUILTINS;
            goto LAB_0010c55c;
          }
        }
      }
      bVar5 = (built_in_function)(psVar6[0x6c] & 0x7ff);
    }
  }
  else {
    bVar5 = END_BUILTINS;
  }
LAB_0010c55c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_constant_p(tree arg)

{
  short *psVar1;
  int iVar2;
  ushort *puVar3;
  tree ptVar4;
  tree op;
  
  puVar3 = (ushort *)tree_strip_nop_conversions(arg);
  ptVar4 = _gen_rtx_CONST_INT;
  if ((((*(int *)(&tree_code_type + (long)(int)(uint)*puVar3 * 4) != 1) &&
       ((*puVar3 != 0x33 || ((*(byte *)(puVar3 + 1) & 2) == 0)))) &&
      ((*puVar3 != 0x79 ||
       ((psVar1 = *(short **)(puVar3 + 0x14), *psVar1 != 0x1c &&
        (((*psVar1 != 0x2d || (iVar2 = integer_zerop(*(undefined8 *)(psVar1 + 0x18)), iVar2 == 0))
         || (ptVar4 = _gen_rtx_CONST_INT, **(short **)(psVar1 + 0x14) != 0x1c)))))))) &&
     (((((ptVar4 = _set_mem_expr, (*(byte *)(puVar3 + 1) & 1) == 0 &&
         (**(short **)(puVar3 + 8) != 0xf)) && (**(short **)(puVar3 + 8) != 0x10)) &&
       ((**(short **)(puVar3 + 8) != 0x11 && (**(short **)(puVar3 + 8) != 0x12)))) &&
      ((**(short **)(puVar3 + 8) != 10 &&
       (((**(short **)(puVar3 + 8) != 0xc && (cfun != 0)) && (folding_initializer == 0)))))))) {
    ptVar4 = (tree)0x0;
  }
  return ptVar4;
}



tree build_builtin_expect_predicate(location_t loc,tree pred,tree expected)

{
  long lVar1;
  undefined8 uVar2;
  tree ptVar3;
  undefined8 uVar4;
  tree fn;
  tree arg_types;
  tree ret_type;
  tree pred_type;
  tree expected_type;
  tree call_expr;
  
  ptVar3 = built_in_decls[446];
  lVar1 = *(long *)(*(long *)&built_in_decls[446]->field_0x10 + 0x18);
  uVar4 = *(undefined8 *)(*(long *)&built_in_decls[446]->field_0x10 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x20);
  lVar1 = fold_convert_loc(loc,*(undefined8 *)(lVar1 + 0x20),pred);
  uVar2 = fold_convert_loc(loc,uVar2,expected);
  ptVar3 = build_call_expr_loc(loc,ptVar3,2,lVar1,uVar2);
  uVar4 = build_int_cst(uVar4,0);
  ptVar3 = (tree)build2_stat(0x66,*(undefined8 *)(lVar1 + 0x10),ptVar3,uVar4);
  return ptVar3;
}



tree fold_builtin_expect(location_t loc,tree arg0,tree arg1)

{
  short sVar1;
  long lVar2;
  tree ptVar3;
  tree ptVar4;
  undefined8 uVar5;
  tree_code code;
  tree inner;
  tree fndecl;
  tree op0;
  tree op1;
  
  inner = arg0;
  if ((*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)arg0 * 4) == 5) &&
     (**(short **)&arg0->field_0x30 == 0x17)) {
    inner = *(tree *)&arg0->field_0x28;
  }
  sVar1 = *(short *)inner;
  inner = arg0;
  if ((((sVar1 != 0x3b) || (lVar2 = get_callee_fndecl(), lVar2 == 0)) ||
      ((*(byte *)(lVar2 + 0xd9) & 0x18) != 0x18)) || ((*(ushort *)(lVar2 + 0xd8) & 0x7ff) != 0x1be))
  {
    while (((*(short *)inner == 0x74 &&
            (((**(short **)&inner->field_0x10 == 6 || (**(short **)&inner->field_0x10 == 7)) ||
             (**(short **)&inner->field_0x10 == 8)))) &&
           (((**(short **)(*(long *)&inner->field_0x28 + 0x10) == 6 ||
             (**(short **)(*(long *)&inner->field_0x28 + 0x10) == 7)) ||
            (**(short **)(*(long *)&inner->field_0x28 + 0x10) == 8))))) {
      inner = *(tree *)&inner->field_0x28;
    }
    sVar1 = *(short *)inner;
    if ((sVar1 == 0x5b) || (sVar1 == 0x5c)) {
      ptVar4 = *(tree *)&inner->field_0x30;
      ptVar3 = build_builtin_expect_predicate(loc,*(tree *)&inner->field_0x28,arg1);
      ptVar4 = build_builtin_expect_predicate(loc,ptVar4,arg1);
      uVar5 = build2_stat(sVar1,*(undefined8 *)&inner->field_0x10,ptVar3,ptVar4);
      arg0 = (tree)fold_convert_loc(loc,*(undefined8 *)&arg0->field_0x10,uVar5);
    }
    else if ((arg0->field_0x2 & 2) == 0) {
      arg0 = (tree)0x0;
    }
    else {
      inner = (tree)tree_strip_nop_conversions(arg0);
      if (*(short *)inner == 0x79) {
        do {
          do {
            inner = *(tree *)&inner->field_0x28;
          } while (*(short *)inner == 0x29);
        } while (*(short *)inner == 0x2d);
        if (((*(short *)inner == 0x20) || (*(short *)inner == 0x1d)) &&
           ((inner->field_0x90 & 0x80) != 0)) {
          arg0 = (tree)0x0;
        }
      }
    }
  }
  return arg0;
}



tree fold_builtin_classify_type(tree arg)

{
  type_class tVar1;
  tree ptVar2;
  
  if (arg == (tree)0x0) {
    ptVar2 = (tree)build_int_cst(0,0xffffffffffffffff);
  }
  else {
    tVar1 = type_to_class(*(tree *)&arg->field_0x10);
    ptVar2 = (tree)build_int_cst(0,(long)tVar1);
  }
  return ptVar2;
}



tree fold_builtin_strlen(location_t loc,tree type,tree arg)

{
  uchar uVar1;
  tree ptVar2;
  tree len;
  
  uVar1 = validate_arg(arg,POINTER_TYPE);
  if (uVar1 == '\0') {
    ptVar2 = (tree)0x0;
  }
  else {
    ptVar2 = c_strlen(arg,0);
    if (ptVar2 == (tree)0x0) {
      ptVar2 = (tree)0x0;
    }
    else {
      ptVar2 = (tree)fold_convert_loc(loc,type,ptVar2);
    }
  }
  return ptVar2;
}



tree fold_builtin_inf(location_t loc,tree type,int warn)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  tree ptVar4;
  long in_FS_OFFSET;
  real_value real;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)type == 0xe) {
    uVar2 = vector_type_mode(type);
  }
  else {
    uVar2 = (uint)(byte)type->field_0x3e;
  }
  if ((&mode_class)[uVar2] == '\b') {
LAB_0010cc12:
    if (*(short *)type == 0xe) {
      uVar2 = vector_type_mode(type);
    }
    else {
      uVar2 = (uint)(byte)type->field_0x3e;
    }
    if ((&mode_class)[uVar2] == '\b') {
LAB_0010cc80:
      if (*(short *)type == 0xe) {
        uVar2 = vector_type_mode(type);
      }
      else {
        uVar2 = (uint)(byte)type->field_0x3e;
      }
    }
    else {
      if (*(short *)type == 0xe) {
        uVar2 = vector_type_mode(type);
      }
      else {
        uVar2 = (uint)(byte)type->field_0x3e;
      }
      if ((&mode_class)[uVar2] == '\t') goto LAB_0010cc80;
      if (*(short *)type == 0xe) {
        uVar2 = vector_type_mode(type);
      }
      else {
        uVar2 = (uint)(byte)type->field_0x3e;
      }
      uVar2 = (uint)(byte)(&mode_inner)[uVar2];
    }
    if ((&mode_class)[uVar2] == '\t') {
      if (*(short *)type == 0xe) {
        uVar2 = vector_type_mode(type);
      }
      else {
        uVar2 = (uint)(byte)type->field_0x3e;
      }
      if ((&mode_class)[uVar2] != '\b') {
        if (*(short *)type == 0xe) {
          uVar2 = vector_type_mode(type);
        }
        else {
          uVar2 = (uint)(byte)type->field_0x3e;
        }
        if ((&mode_class)[uVar2] != '\t') {
          if (*(short *)type == 0xe) {
            uVar2 = vector_type_mode(type);
          }
          else {
            uVar2 = (uint)(byte)type->field_0x3e;
          }
          uVar2 = (byte)(&mode_inner)[uVar2] - 0x26;
          goto LAB_0010cea8;
        }
      }
      if (*(short *)type == 0xe) {
        iVar3 = vector_type_mode(type);
        uVar2 = iVar3 - 0x26;
      }
      else {
        uVar2 = (byte)type->field_0x3e - 0x26;
      }
    }
    else {
      if (*(short *)type == 0xe) {
        uVar2 = vector_type_mode(type);
      }
      else {
        uVar2 = (uint)(byte)type->field_0x3e;
      }
      if ((&mode_class)[uVar2] != '\b') {
        if (*(short *)type == 0xe) {
          uVar2 = vector_type_mode(type);
        }
        else {
          uVar2 = (uint)(byte)type->field_0x3e;
        }
        if ((&mode_class)[uVar2] != '\t') {
          if (*(short *)type == 0xe) {
            uVar2 = vector_type_mode(type);
          }
          else {
            uVar2 = (uint)(byte)type->field_0x3e;
          }
          uVar2 = (byte)(&mode_inner)[uVar2] - 0x26;
          goto LAB_0010cea8;
        }
      }
      if (*(short *)type == 0xe) {
        iVar3 = vector_type_mode(type);
        uVar2 = iVar3 - 0x26;
      }
      else {
        uVar2 = (byte)type->field_0x3e - 0x26;
      }
    }
LAB_0010cea8:
    if (*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar2 * 8) + 0x2f) != '\0')
    goto LAB_0010cee6;
  }
  else {
    if (*(short *)type == 0xe) {
      uVar2 = vector_type_mode(type);
    }
    else {
      uVar2 = (uint)(byte)type->field_0x3e;
    }
    if ((&mode_class)[uVar2] == '\t') goto LAB_0010cc12;
    if (*(short *)type == 0xe) {
      uVar2 = vector_type_mode(type);
    }
    else {
      uVar2 = (uint)(byte)type->field_0x3e;
    }
    if ((&mode_class)[uVar2] == '\v') goto LAB_0010cc12;
    if (*(short *)type == 0xe) {
      uVar2 = vector_type_mode(type);
    }
    else {
      uVar2 = (uint)(byte)type->field_0x3e;
    }
    if ((&mode_class)[uVar2] == '\x11') goto LAB_0010cc12;
  }
  if (warn != 0) {
    pedwarn(loc,0,"target format does not support infinity");
  }
LAB_0010cee6:
  real_inf(&real);
  ptVar4 = (tree)build_real(type);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar4;
}



tree fold_builtin_nan(tree arg,tree type,int quiet)

{
  long lVar1;
  uchar uVar2;
  char cVar3;
  uint uVar4;
  tree ptVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char *str;
  real_value real;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = validate_arg(arg,POINTER_TYPE);
  if (uVar2 == '\0') {
    ptVar5 = (tree)0x0;
  }
  else {
    pcVar6 = c_getstr(arg);
    if (pcVar6 == (char *)0x0) {
      ptVar5 = (tree)0x0;
    }
    else {
      if (*(short *)type == 0xe) {
        uVar4 = vector_type_mode(type);
      }
      else {
        uVar4 = (uint)(byte)type->field_0x3e;
      }
      cVar3 = real_nan(&real,pcVar6,quiet,uVar4);
      if (cVar3 == '\0') {
        ptVar5 = (tree)0x0;
      }
      else {
        ptVar5 = (tree)build_real(type);
      }
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar5;
}



uchar integer_valued_real_p(tree t)

{
  short *psVar1;
  uchar uVar2;
  uint uVar3;
  built_in_function bVar4;
  tree type;
  
  switch(*(undefined2 *)t) {
  case 0x18:
    if (**(short **)&t->field_0x10 == 0xe) {
      uVar3 = vector_type_mode(*(undefined8 *)&t->field_0x10);
    }
    else {
      uVar3 = (uint)*(byte *)(*(long *)&t->field_0x10 + 0x3e);
    }
    uVar2 = real_isinteger(*(undefined8 *)&t->field_0x18,uVar3);
    break;
  default:
    goto LAB_0010d21c;
  case 0x34:
  case 0x35:
  case 0x3a:
    uVar2 = integer_valued_real_p(*(tree *)&t->field_0x30);
    break;
  case 0x38:
    uVar2 = integer_valued_real_p(*(tree *)&t->field_0x30);
    if ((uVar2 == '\0') || (uVar2 = integer_valued_real_p(*(tree *)&t->field_0x38), uVar2 == '\0'))
    {
      uVar2 = '\0';
    }
    else {
      uVar2 = '\x01';
    }
    break;
  case 0x3b:
    bVar4 = builtin_mathfn_code(t);
    if ((uint)bVar4 < 0xf3) {
      if (0xef < (uint)bVar4) {
        return '\x01';
      }
      if ((uint)bVar4 < 0xc9) {
        if (0xc2 < (uint)bVar4) {
          return '\x01';
        }
        if ((uint)bVar4 < 0xae) {
          if (0xaa < (uint)bVar4) {
            return '\x01';
          }
          if ((uint)bVar4 < 0x4b) {
            if (0x44 < (uint)bVar4) {
              uVar2 = integer_valued_real_p(*(tree *)&t->field_0x40);
              if ((uVar2 != '\0') &&
                 (uVar2 = integer_valued_real_p(*(tree *)&t->field_0x48), uVar2 != '\0')) {
                return '\x01';
              }
              return '\0';
            }
            if ((uint)bVar4 < 0x1b) {
              if (0x17 < (uint)bVar4) {
                return '\x01';
              }
            }
            else if ((uint)(bVar4 + BUILT_IN_REMQUOF) < 3) {
              return '\x01';
            }
          }
        }
      }
    }
    goto LAB_0010d21c;
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x50:
  case 0x51:
    uVar2 = integer_valued_real_p(*(tree *)&t->field_0x28);
    if ((uVar2 == '\0') || (uVar2 = integer_valued_real_p(*(tree *)&t->field_0x30), uVar2 == '\0'))
    {
      uVar2 = '\0';
    }
    else {
      uVar2 = '\x01';
    }
    break;
  case 0x4e:
    uVar2 = '\x01';
    break;
  case 0x52:
  case 0x78:
    uVar2 = integer_valued_real_p(*(tree *)&t->field_0x28);
    break;
  case 0x74:
    psVar1 = *(short **)(*(long *)&t->field_0x28 + 0x10);
    if (*psVar1 == 8) {
      return '\x01';
    }
    if (*psVar1 == 9) {
      uVar2 = integer_valued_real_p(*(tree *)&t->field_0x28);
      return uVar2;
    }
LAB_0010d21c:
    uVar2 = '\0';
  }
  return uVar2;
}



tree fold_trunc_transparent_mathfn(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  uchar uVar2;
  built_in_function fn;
  built_in_function bVar3;
  long lVar4;
  tree fndecl_00;
  undefined8 uVar5;
  tree ptVar6;
  built_in_function fcode;
  tree arg0;
  tree ftype;
  tree newtype;
  tree decl;
  
  fn = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  uVar2 = validate_arg(arg,REAL_TYPE);
  if (uVar2 == '\0') {
    arg = (tree)0x0;
  }
  else {
    bVar3 = builtin_mathfn_code(arg);
    if ((fn != bVar3) &&
       (((int)flag_errno_math != 0 || (uVar2 = integer_valued_real_p(arg), uVar2 == '\0')))) {
      if (optimize != 0) {
        lVar4 = strip_float_extensions(arg);
        lVar1 = *(long *)(*(long *)&fndecl->field_0x10 + 0x10);
        ptVar6 = *(tree *)(lVar4 + 0x10);
        if (((*(ushort *)&ptVar6->field_0x3c & 0x3ff) < (*(ushort *)(lVar1 + 0x3c) & 0x3ff)) &&
           (fndecl_00 = mathfn_built_in(ptVar6,fn), fndecl_00 != (tree)0x0)) {
          uVar5 = fold_convert_loc(loc,ptVar6,lVar4);
          ptVar6 = build_call_expr_loc(loc,fndecl_00,1,uVar5);
          ptVar6 = (tree)fold_convert_loc(loc,lVar1,ptVar6);
          return ptVar6;
        }
      }
      arg = (tree)0x0;
    }
  }
  return arg;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_fixed_mathfn(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  uchar uVar2;
  built_in_function fn;
  tree ptVar3;
  long lVar4;
  tree fndecl_00;
  undefined8 uVar5;
  built_in_function fcode;
  tree newfn;
  tree ftype;
  tree arg0;
  tree newtype;
  tree decl;
  tree newcall;
  
  fn = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  uVar2 = validate_arg(arg,REAL_TYPE);
  if (uVar2 == '\0') {
    ptVar3 = (tree)0x0;
  }
  else if (((int)flag_errno_math == 0) && (uVar2 = integer_valued_real_p(arg), uVar2 != '\0')) {
    ptVar3 = (tree)fold_build1_stat_loc
                             (loc,0x4d,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),arg);
  }
  else {
    if (optimize != 0) {
      lVar1 = *(long *)&arg->field_0x10;
      lVar4 = strip_float_extensions();
      ptVar3 = *(tree *)(lVar4 + 0x10);
      if (((*(ushort *)&ptVar3->field_0x3c & 0x3ff) < (*(ushort *)(lVar1 + 0x3c) & 0x3ff)) &&
         (fndecl_00 = mathfn_built_in(ptVar3,fn), fndecl_00 != (tree)0x0)) {
        uVar5 = fold_convert_loc(loc,ptVar3,lVar4);
        ptVar3 = build_call_expr_loc(loc,fndecl_00,1,uVar5);
        return ptVar3;
      }
    }
    if ((*(ushort *)(_build_fold_addr_expr_with_type_loc + 0x3c) & 0x3ff) ==
        (*(ushort *)(cmpstr_optab + 0x3c) & 0x3ff)) {
      newfn = (tree)0x0;
      if ((uint)fn < 0x8a) {
        if ((uint)fn < 0x87) {
          if ((uint)fn < 0x87) {
            if ((uint)fn < 0x84) {
              if ((uint)fn < 0x81) {
                if (0x7d < (uint)fn) {
                  newfn = mathfn_built_in(*(tree *)&arg->field_0x10,BUILT_IN_LCEIL);
                }
              }
              else if ((uint)(fn + 0xffffff7f) < 3) {
                newfn = mathfn_built_in(*(tree *)&arg->field_0x10,BUILT_IN_LFLOOR);
              }
            }
            else {
              newfn = mathfn_built_in(*(tree *)&arg->field_0x10,0x99);
            }
          }
        }
        else {
          newfn = mathfn_built_in(*(tree *)&arg->field_0x10,0x9c);
        }
      }
      if (newfn != (tree)0x0) {
        ptVar3 = build_call_expr_loc(loc,newfn,1,arg);
        ptVar3 = (tree)fold_convert_loc(loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),
                                        ptVar3);
        return ptVar3;
      }
    }
    ptVar3 = (tree)0x0;
  }
  return ptVar3;
}



tree fold_builtin_cabs(location_t loc,tree arg,tree type,tree fndecl)

{
  return (tree)0x0;
}



tree fold_builtin_sqrt(location_t loc,tree arg,tree type)

{
  return (tree)0x0;
}



tree fold_builtin_cbrt(location_t loc,tree arg,tree type)

{
  return (tree)0x0;
}



tree fold_builtin_cos(location_t loc,tree arg,tree type,tree fndecl)

{
  return (tree)0x0;
}



tree fold_builtin_cosh(location_t loc,tree arg,tree type,tree fndecl)

{
  return (tree)0x0;
}



tree fold_builtin_ccos(location_t loc,tree arg,tree type,tree fndecl,uchar hyper)

{
  return (tree)0x0;
}



tree fold_builtin_tan(tree arg,tree type)

{
  return (tree)0x0;
}



tree fold_builtin_sincos(location_t loc,tree arg0,tree arg1,tree arg2)

{
  return (tree)0x0;
}



tree fold_builtin_cexp(location_t loc,tree arg0,tree type)

{
  return (tree)0x0;
}



// WARNING: Could not reconcile some variable overlaps

tree fold_builtin_trunc(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  short *psVar2;
  undefined8 *puVar3;
  uchar uVar4;
  uint uVar5;
  tree ptVar6;
  long in_FS_OFFSET;
  tree type;
  real_value r;
  real_value x;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = validate_arg(arg,REAL_TYPE);
  if (uVar4 == '\0') {
    ptVar6 = (tree)0x0;
  }
  else if ((*(short *)arg == 0x18) && ((arg->field_0x3 & 8) == 0)) {
    psVar2 = *(short **)(*(long *)&fndecl->field_0x10 + 0x10);
    puVar3 = *(undefined8 **)&arg->field_0x18;
    x._0_8_ = *puVar3;
    x.sig[0] = puVar3[1];
    x.sig[1] = puVar3[2];
    x.sig[2] = puVar3[3];
    if (*psVar2 == 0xe) {
      uVar5 = vector_type_mode(psVar2);
    }
    else {
      uVar5 = (uint)*(byte *)(psVar2 + 0x1f);
    }
    real_trunc(&r,uVar5,&x);
    ptVar6 = (tree)build_real(psVar2);
  }
  else {
    ptVar6 = fold_trunc_transparent_mathfn(loc,fndecl,arg);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar6;
}



// WARNING: Could not reconcile some variable overlaps

tree fold_builtin_floor(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  undefined8 *puVar2;
  short *psVar3;
  uchar uVar4;
  char cVar5;
  uint uVar6;
  tree ptVar7;
  long in_FS_OFFSET;
  tree type;
  tree truncfn;
  real_value x;
  real_value r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = validate_arg(arg,REAL_TYPE);
  if (uVar4 == '\0') {
    ptVar7 = (tree)0x0;
  }
  else {
    if ((*(short *)arg == 0x18) && ((arg->field_0x3 & 8) == 0)) {
      puVar2 = *(undefined8 **)&arg->field_0x18;
      x._0_8_ = *puVar2;
      x.sig[0] = puVar2[1];
      x.sig[1] = puVar2[2];
      x.sig[2] = puVar2[3];
      cVar5 = real_isnan(&x);
      if ((cVar5 == '\0') || ((int)flag_errno_math == 0)) {
        psVar3 = *(short **)(*(long *)&fndecl->field_0x10 + 0x10);
        if (*psVar3 == 0xe) {
          uVar6 = vector_type_mode(psVar3);
        }
        else {
          uVar6 = (uint)*(byte *)(psVar3 + 0x1f);
        }
        real_floor(&r,uVar6,&x);
        ptVar7 = (tree)build_real(psVar3);
        goto LAB_0010d974;
      }
    }
    cVar5 = tree_expr_nonnegative_p();
    if (cVar5 != '\0') {
      ptVar7 = mathfn_built_in(*(tree *)&arg->field_0x10,0xf0);
      if (ptVar7 != (tree)0x0) {
        ptVar7 = build_call_expr_loc(loc,ptVar7,1,arg);
        goto LAB_0010d974;
      }
    }
    ptVar7 = fold_trunc_transparent_mathfn(loc,fndecl,arg);
  }
LAB_0010d974:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar7;
}



// WARNING: Could not reconcile some variable overlaps

tree fold_builtin_ceil(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  undefined8 *puVar2;
  short *psVar3;
  uchar uVar4;
  char cVar5;
  uint uVar6;
  tree ptVar7;
  long in_FS_OFFSET;
  tree type;
  real_value x;
  real_value r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = validate_arg(arg,REAL_TYPE);
  if (uVar4 == '\0') {
    ptVar7 = (tree)0x0;
  }
  else {
    if ((*(short *)arg == 0x18) && ((arg->field_0x3 & 8) == 0)) {
      puVar2 = *(undefined8 **)&arg->field_0x18;
      x._0_8_ = *puVar2;
      x.sig[0] = puVar2[1];
      x.sig[1] = puVar2[2];
      x.sig[2] = puVar2[3];
      cVar5 = real_isnan();
      if ((cVar5 == '\0') || ((int)flag_errno_math == 0)) {
        psVar3 = *(short **)(*(long *)&fndecl->field_0x10 + 0x10);
        if (*psVar3 == 0xe) {
          uVar6 = vector_type_mode(psVar3);
        }
        else {
          uVar6 = (uint)*(byte *)(psVar3 + 0x1f);
        }
        real_ceil(&r,uVar6,&x);
        ptVar7 = (tree)build_real(psVar3);
        goto LAB_0010daaf;
      }
    }
    ptVar7 = fold_trunc_transparent_mathfn(loc,fndecl,arg);
  }
LAB_0010daaf:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar7;
}



// WARNING: Could not reconcile some variable overlaps

tree fold_builtin_round(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  undefined8 *puVar2;
  short *psVar3;
  uchar uVar4;
  char cVar5;
  uint uVar6;
  tree ptVar7;
  long in_FS_OFFSET;
  tree type;
  real_value x;
  real_value r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = validate_arg(arg,REAL_TYPE);
  if (uVar4 == '\0') {
    ptVar7 = (tree)0x0;
  }
  else {
    if ((*(short *)arg == 0x18) && ((arg->field_0x3 & 8) == 0)) {
      puVar2 = *(undefined8 **)&arg->field_0x18;
      x._0_8_ = *puVar2;
      x.sig[0] = puVar2[1];
      x.sig[1] = puVar2[2];
      x.sig[2] = puVar2[3];
      cVar5 = real_isnan();
      if ((cVar5 == '\0') || ((int)flag_errno_math == 0)) {
        psVar3 = *(short **)(*(long *)&fndecl->field_0x10 + 0x10);
        if (*psVar3 == 0xe) {
          uVar6 = vector_type_mode(psVar3);
        }
        else {
          uVar6 = (uint)*(byte *)(psVar3 + 0x1f);
        }
        real_round(&r,uVar6,&x);
        ptVar7 = (tree)build_real(psVar3);
        goto LAB_0010dbea;
      }
    }
    ptVar7 = fold_trunc_transparent_mathfn(loc,fndecl,arg);
  }
LAB_0010dbea:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar7;
}



// WARNING: Could not reconcile some variable overlaps

tree fold_builtin_int_roundingfn(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  undefined8 *puVar2;
  uchar uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  tree ptVar8;
  long in_FS_OFFSET;
  ulong lo2;
  long hi;
  long lo;
  tree itype;
  tree ftype;
  real_value x;
  real_value r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = validate_arg(arg,REAL_TYPE);
  if (uVar3 == '\0') {
    ptVar8 = (tree)0x0;
    goto LAB_0010decb;
  }
  if ((*(short *)arg == 0x18) && ((arg->field_0x3 & 8) == 0)) {
    puVar2 = *(undefined8 **)&arg->field_0x18;
    x._0_8_ = *puVar2;
    x.sig[0] = puVar2[1];
    x.sig[1] = puVar2[2];
    x.sig[2] = puVar2[3];
    cVar4 = real_isfinite();
    if (cVar4 != '\0') {
      itype = *(tree *)(*(long *)&fndecl->field_0x10 + 0x10);
      ftype = *(tree *)&arg->field_0x10;
      switch(*(ushort *)&fndecl->field_0xd8 & 0x7ff) {
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x7e:
      case 0x7f:
      case 0x80:
        if (*(short *)ftype == 0xe) {
          uVar6 = vector_type_mode(ftype);
        }
        else {
          uVar6 = (uint)(byte)ftype->field_0x3e;
        }
        real_ceil(&r,uVar6,&x);
        break;
      default:
        fancy_abort("builtins.c",0x1d69,&DAT_0011bd60);
        break;
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x81:
      case 0x82:
      case 0x83:
        if (*(short *)ftype == 0xe) {
          uVar6 = vector_type_mode(ftype);
        }
        else {
          uVar6 = (uint)(byte)ftype->field_0x3e;
        }
        real_floor(&r,uVar6,&x);
        break;
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x9c:
      case 0x9d:
      case 0x9e:
        if (*(short *)ftype == 0xe) {
          uVar6 = vector_type_mode(ftype);
        }
        else {
          uVar6 = (uint)(byte)ftype->field_0x3e;
        }
        real_round(&r,uVar6,&x);
      }
      real_to_integer2(&lo,&hi,&r);
      iVar7 = fit_double_type(lo,hi,&lo2,&hi,itype);
      if (iVar7 == 0) {
        ptVar8 = (tree)build_int_cst_wide(itype,lo2,hi);
        goto LAB_0010decb;
      }
    }
  }
  uVar5 = *(ushort *)&fndecl->field_0xd8 & 0x7ff;
  if (uVar5 < 0x78) {
    if (0x74 < uVar5) {
LAB_0010de6f:
      cVar4 = tree_expr_nonnegative_p();
      if (cVar4 != '\0') {
        ptVar8 = (tree)fold_build1_stat_loc
                                 (loc,0x4d,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),arg)
        ;
        goto LAB_0010decb;
      }
    }
  }
  else if (uVar5 - 0x81 < 3) goto LAB_0010de6f;
  ptVar8 = fold_fixed_mathfn(loc,fndecl,arg);
LAB_0010decb:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar8;
}



tree fold_builtin_bitop(tree fndecl,tree arg)

{
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  tree ptVar4;
  ulong uVar5;
  long hi;
  long result;
  ulong lo;
  tree type;
  long width;
  
  uVar1 = validate_arg(arg,INTEGER_TYPE);
  if (uVar1 == '\0') {
    ptVar4 = (tree)0x0;
  }
  else if ((*(short *)arg == 0x17) && ((arg->field_0x3 & 8) == 0)) {
    uVar2 = *(ushort *)(*(long *)&arg->field_0x10 + 0x3c) & 0x3ff;
    uVar5 = (ulong)uVar2;
    lo = *(ulong *)&arg->field_0x18;
    if (uVar5 < 0x41) {
      hi = 0;
      if (uVar5 < 0x40) {
        lo = lo & ~(-1 << ((byte)uVar2 & 0x3f));
      }
    }
    else {
      hi = *(long *)&arg->field_0x20;
      if (uVar5 < 0x80) {
        hi = 0;
      }
    }
    switch(*(ushort *)&fndecl->field_0xd8 & 0x7ff) {
    case 0x1a8:
    case 0x1aa:
    case 0x1ab:
      if (hi == 0) {
        result = uVar5;
        if (lo != 0) {
          iVar3 = floor_log2(lo);
          result = (uVar5 - (long)iVar3) + -1;
        }
      }
      else {
        iVar3 = floor_log2(hi);
        result = (uVar5 - (long)iVar3) + -0x41;
      }
      break;
    default:
      fancy_abort("builtins.c",0x1dd4,&DAT_0011bd60);
      break;
    case 0x1ad:
    case 0x1af:
    case 0x1b0:
      if (lo == 0) {
        result = uVar5;
        if (hi != 0) {
          iVar3 = exact_log2(-hi & hi);
          result = (long)(iVar3 + 0x40);
        }
      }
      else {
        iVar3 = exact_log2(-lo & lo);
        result = (long)iVar3;
      }
      break;
    case 0x1c1:
    case 0x1c3:
    case 0x1c4:
      if (lo == 0) {
        if (hi == 0) {
          result = 0;
        }
        else {
          iVar3 = exact_log2(-hi & hi);
          result = (long)(iVar3 + 0x41);
        }
      }
      else {
        iVar3 = exact_log2(-lo & lo);
        result = (long)(iVar3 + 1);
      }
      break;
    case 0x1ed:
    case 0x1ef:
    case 0x1f0:
      result = 0;
      for (; lo != 0; lo = lo & lo - 1) {
        result = result + 1;
      }
      for (; hi != 0; hi = hi & hi - 1U) {
        result = result + 1;
      }
      result = result & 1;
      break;
    case 0x1f1:
    case 499:
    case 500:
      result = 0;
      for (; lo != 0; lo = lo & lo - 1) {
        result = result + 1;
      }
      for (; hi != 0; hi = hi & hi - 1U) {
        result = result + 1;
      }
    }
    ptVar4 = (tree)build_int_cst(*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),result);
  }
  else {
    ptVar4 = (tree)0x0;
  }
  return ptVar4;
}



tree fold_builtin_bswap(tree fndecl,tree arg)

{
  uchar uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  tree ptVar5;
  byte bVar6;
  int s;
  int d;
  long r_hi;
  ulong r_lo;
  ulong byte;
  tree type;
  long width;
  ulong lo;
  long hi;
  
  uVar1 = validate_arg(arg,INTEGER_TYPE);
  if (uVar1 == '\0') {
    ptVar5 = (tree)0x0;
  }
  else if ((*(short *)arg == 0x17) && ((arg->field_0x3 & 8) == 0)) {
    r_hi = 0;
    r_lo = 0;
    uVar2 = *(ushort *)(*(long *)&arg->field_0x10 + 0x3c) & 0x3ff;
    if ((*(ushort *)&fndecl->field_0xd8 & 0x7ff) - 0x1a3 < 2) {
      for (s = 0; s < (int)(uint)uVar2; s = s + 8) {
        iVar3 = ((uint)uVar2 - s) + -8;
        if (s < 0x40) {
          uVar4 = (uint)(*(ulong *)&arg->field_0x18 >> ((byte)s & 0x3f));
        }
        else {
          uVar4 = (uint)(*(long *)&arg->field_0x20 >> ((byte)s - 0x40 & 0x3f));
        }
        byte = (ulong)(uVar4 & 0xff);
        bVar6 = (byte)iVar3;
        if (iVar3 < 0x40) {
          r_lo = r_lo | byte << (bVar6 & 0x3f);
        }
        else {
          r_hi = r_hi | byte << (bVar6 - 0x40 & 0x3f);
        }
      }
    }
    else {
      fancy_abort("builtins.c",0x1e0c,&DAT_0011bd60);
    }
    if (uVar2 < 0x40) {
      ptVar5 = (tree)build_int_cst(*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),r_lo);
    }
    else {
      ptVar5 = (tree)build_int_cst_wide(*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),r_lo,
                                        r_hi);
    }
  }
  else {
    ptVar5 = (tree)0x0;
  }
  return ptVar5;
}



tree fold_builtin_hypot(location_t loc,tree fndecl,tree arg0,tree arg1,tree type)

{
  return (tree)0x0;
}



tree fold_builtin_pow(location_t loc,tree fndecl,tree arg0,tree arg1,tree type)

{
  return (tree)0x0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_powi(location_t loc,tree fndecl,tree arg0,tree arg1,tree type)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long c;
  real_value x;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = validate_arg(arg0,REAL_TYPE);
  if ((uVar4 == '\0') || (uVar4 = validate_arg(arg1,INTEGER_TYPE), uVar4 == '\0')) {
    arg0 = (tree)0x0;
  }
  else {
    iVar5 = real_onep(arg0);
    if (iVar5 == 0) {
      iVar5 = host_integerp(arg1,0);
      if (iVar5 != 0) {
        lVar2 = *(long *)&arg1->field_0x18;
        if ((*(short *)arg0 == 0x18) && ((arg0->field_0x3 & 8) == 0)) {
          puVar3 = *(undefined8 **)&arg0->field_0x18;
          x._0_8_ = *puVar3;
          x.sig[0] = puVar3[1];
          x.sig[1] = puVar3[2];
          x.sig[2] = puVar3[3];
          if (*(short *)type == 0xe) {
            uVar6 = vector_type_mode(type);
          }
          else {
            uVar6 = (uint)(byte)type->field_0x3e;
          }
          real_powi(&x,uVar6,&x,lVar2);
          arg0 = (tree)build_real(type);
          goto LAB_0010e60c;
        }
        if (lVar2 == 0) {
          uVar7 = build_real(type);
          arg0 = (tree)omit_one_operand_loc(loc,type,uVar7,arg0);
          goto LAB_0010e60c;
        }
        if (lVar2 == 1) goto LAB_0010e60c;
        if (lVar2 == -1) {
          uVar7 = build_real(type);
          arg0 = (tree)fold_build2_stat_loc(loc,0x4b,type,uVar7,arg0);
          goto LAB_0010e60c;
        }
      }
      arg0 = (tree)0x0;
    }
    else {
      uVar7 = build_real(type);
      arg0 = (tree)omit_one_operand_loc(loc,type,uVar7,arg1);
    }
  }
LAB_0010e60c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return arg0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



uchar var_decl_component_p(tree var)

{
  uchar uVar1;
  tree inner;
  
  inner = var;
  while( true ) {
    uVar1 = handled_component_p(inner);
    if (uVar1 == '\0') break;
    inner = *(tree *)&inner->field_0x28;
  }
  if ((((*(short *)inner == 0x20) || (*(short *)inner == 0x22)) || (*(short *)inner == 0x24)) ||
     ((*(short *)inner == 0x8d &&
      (((**(short **)&inner->field_0x18 == 0x20 || (**(short **)&inner->field_0x18 == 0x22)) ||
       (**(short **)&inner->field_0x18 == 0x24)))))) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



tree fold_builtin_memset(location_t loc,tree dest,tree c,tree len,tree type,uchar ignore)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  tree ptVar4;
  short *psVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  tree etype;
  ulong cval;
  tree var;
  ulong length;
  tree ret;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(c,INTEGER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 == '\0')) {
    ptVar4 = (tree)0x0;
  }
  else {
    iVar2 = host_integerp(len,1);
    if (iVar2 == 0) {
      ptVar4 = (tree)0x0;
    }
    else {
      iVar2 = integer_zerop(len);
      if (iVar2 == 0) {
        iVar2 = host_integerp(c,1);
        if ((iVar2 == 0) || ((dest->field_0x2 & 1) != 0)) {
          ptVar4 = (tree)0x0;
        }
        else {
          psVar5 = (short *)tree_strip_nop_conversions(dest);
          if (*psVar5 == 0x79) {
            ptVar4 = *(tree *)(psVar5 + 0x14);
            if ((ptVar4->field_0x2 & 8) == 0) {
              etype = *(tree *)&ptVar4->field_0x10;
              if (*(short *)etype == 0xf) {
                etype = *(tree *)&etype->field_0x10;
              }
              if (((*(short *)etype == 6) || (*(short *)etype == 7)) ||
                 ((*(short *)etype == 8 || ((*(short *)etype == 10 || (*(short *)etype == 0xc))))))
              {
                uVar1 = var_decl_component_p(ptVar4);
                if (uVar1 == '\0') {
                  ptVar4 = (tree)0x0;
                }
                else {
                  uVar6 = tree_low_cst(len);
                  if (*(short *)etype == 0xe) {
                    uVar3 = vector_type_mode(etype);
                  }
                  else {
                    uVar3 = (uint)(byte)etype->field_0x3e;
                  }
                  if (uVar6 == (byte)(&mode_size)[uVar3]) {
                    if ((ix86_isa_flags & 0x20) == 0) {
                      uVar3 = 0x80;
                    }
                    else {
                      uVar3 = 0x100;
                    }
                    iVar2 = get_pointer_alignment(dest,uVar3);
                    if (iVar2 < 0) {
                      iVar2 = iVar2 + 7;
                    }
                    if ((int)uVar6 <= iVar2 >> 3) {
                      if (8 < uVar6) {
                        return (tree)0x0;
                      }
                      iVar2 = integer_zerop(c);
                      if (iVar2 == 0) {
                        uVar6 = tree_low_cst(c,1);
                        uVar6 = uVar6 & 0xff | (uVar6 & 0xff) << 8;
                        uVar6 = uVar6 | uVar6 << 0x10;
                        cval = uVar6 | uVar6 << 0x20;
                      }
                      else {
                        cval = 0;
                      }
                      uVar7 = build_int_cst_type(etype,cval);
                      uVar8 = build_pointer_type(etype);
                      uVar8 = fold_convert_loc(loc,uVar8,dest);
                      uVar8 = build_fold_indirect_ref_loc(loc,uVar8);
                      ptVar4 = (tree)build2_stat(0x35,etype,uVar8,uVar7);
                      if (ignore != '\0') {
                        return ptVar4;
                      }
                      ptVar4 = (tree)omit_one_operand_loc(loc,type,dest,ptVar4);
                      return ptVar4;
                    }
                  }
                  ptVar4 = (tree)0x0;
                }
              }
              else {
                ptVar4 = (tree)0x0;
              }
            }
            else {
              ptVar4 = (tree)0x0;
            }
          }
          else {
            ptVar4 = (tree)0x0;
          }
        }
      }
      else {
        ptVar4 = (tree)omit_one_operand_loc(loc,type,dest,c);
      }
    }
  }
  return ptVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_bzero(location_t loc,tree dest,tree size,uchar ignore)

{
  uchar uVar1;
  tree len;
  tree ptVar2;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if ((uVar1 != '\0') &&
     (uVar1 = validate_arg(size,INTEGER_TYPE), ptVar2 = _set_mem_align, uVar1 != '\0')) {
    if (ignore == '\0') {
      return (tree)0x0;
    }
    len = (tree)fold_convert_loc(loc,sizetype_tab,size);
    ptVar2 = fold_builtin_memset(loc,dest,_set_mem_expr,len,ptVar2,ignore);
    return ptVar2;
  }
  return (tree)0x0;
}



tree fold_builtin_memory_op
               (location_t loc,tree dest,tree src,tree len,tree type,uchar ignore,int endp)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tree ptVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  tree local_d8;
  tree local_d0;
  tree local_c8;
  int src_align;
  int dest_align;
  long src_offset;
  long dest_offset;
  long size;
  long maxsize;
  tree destvar;
  tree srcvar;
  tree expr;
  tree srctype;
  tree desttype;
  tree src_base;
  tree dest_base;
  tree tem;
  tree tem_1;
  tree destptype;
  tree srcptype;
  tree fn_1;
  tree fn;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 == '\0')) {
    ptVar6 = (tree)0x0;
    goto LAB_0010fa58;
  }
  iVar3 = integer_zerop(len);
  if (iVar3 != 0) {
    ptVar6 = (tree)omit_one_operand_loc(loc,type,dest,src);
    goto LAB_0010fa58;
  }
  iVar3 = operand_equal_p(src,dest,0);
  local_c8 = dest;
  ptVar6 = len;
  if (iVar3 == 0) {
    if (endp == 3) {
      if ((ix86_isa_flags & 0x20) == 0) {
        uVar10 = 0x80;
      }
      else {
        uVar10 = 0x100;
      }
      iVar3 = get_pointer_alignment(src,uVar10);
      if ((ix86_isa_flags & 0x20) == 0) {
        uVar10 = 0x80;
      }
      else {
        uVar10 = 0x100;
      }
      iVar4 = get_pointer_alignment(dest,uVar10);
      if ((iVar4 == 0) || (iVar3 == 0)) {
        ptVar6 = (tree)0x0;
        goto LAB_0010fa58;
      }
      uVar1 = readonly_data_expr(src);
      if (uVar1 == '\0') {
        iVar5 = host_integerp(len,1);
        if (iVar5 != 0) {
          if (iVar4 <= iVar3) {
            iVar3 = iVar4;
          }
          if (iVar3 < 0) {
            iVar3 = iVar3 + 7;
          }
          lVar7 = tree_low_cst(len,1);
          if (lVar7 <= iVar3 >> 3) goto LAB_0010ecbf;
        }
        srcvar = (tree)build_fold_indirect_ref_loc(loc,src);
        destvar = (tree)build_fold_indirect_ref_loc(loc,dest);
        if (((srcvar == (tree)0x0) || ((srcvar->field_0x2 & 8) != 0)) ||
           ((destvar == (tree)0x0 || ((destvar->field_0x2 & 8) != 0)))) {
          ptVar6 = (tree)0x0;
        }
        else {
          src_offset = 0;
          dest_offset = 0;
          size = -1;
          maxsize = -1;
          src_base = srcvar;
          uVar1 = handled_component_p(srcvar);
          if (uVar1 != '\0') {
            src_base = (tree)get_ref_base_and_extent(src_base,&src_offset,&size,&maxsize);
          }
          dest_base = destvar;
          uVar1 = handled_component_p(destvar);
          if (uVar1 != '\0') {
            dest_base = (tree)get_ref_base_and_extent(dest_base,&dest_offset,&size,&maxsize);
          }
          iVar3 = host_integerp(len,1);
          if (iVar3 == 0) {
            maxsize = -1;
          }
          else {
            lVar7 = tree_low_cst(len,1);
            if (lVar7 < 0x1000000000000000) {
              maxsize = lVar7 << 3;
            }
            else {
              maxsize = -1;
            }
          }
          if (((((*(short *)src_base == 0x20) || (*(short *)src_base == 0x22)) ||
               (*(short *)src_base == 0x24)) ||
              ((*(short *)src_base == 0x8d &&
               (((**(short **)&src_base->field_0x18 == 0x20 ||
                 (**(short **)&src_base->field_0x18 == 0x22)) ||
                (**(short **)&src_base->field_0x18 == 0x24)))))) &&
             ((((*(short *)dest_base == 0x20 || (*(short *)dest_base == 0x22)) ||
               (*(short *)dest_base == 0x24)) ||
              ((*(short *)dest_base == 0x8d &&
               (((**(short **)&dest_base->field_0x18 == 0x20 ||
                 (**(short **)&dest_base->field_0x18 == 0x22)) ||
                (**(short **)&dest_base->field_0x18 == 0x24)))))))) {
            iVar3 = operand_equal_p(src_base,dest_base,0);
            if ((iVar3 != 0) &&
               (uVar1 = ranges_overlap_p(src_offset,maxsize,dest_offset,maxsize), uVar1 != '\0')) {
              ptVar6 = (tree)0x0;
              goto LAB_0010fa58;
            }
          }
          else {
            if ((*(short *)src_base != 0x2f) || (*(short *)dest_base != 0x2f)) {
              ptVar6 = (tree)0x0;
              goto LAB_0010fa58;
            }
            iVar3 = operand_equal_p(*(undefined8 *)&src_base->field_0x28,
                                    *(undefined8 *)&dest_base->field_0x28,0);
            if ((iVar3 == 0) ||
               (uVar1 = ranges_overlap_p(src_offset,maxsize,dest_offset,maxsize), uVar1 != '\0')) {
              ptVar6 = (tree)0x0;
              goto LAB_0010fa58;
            }
          }
          fn_1 = implicit_built_in_decls[330];
          if (implicit_built_in_decls[330] == (tree)0x0) {
            ptVar6 = (tree)0x0;
          }
          else {
            ptVar6 = build_call_expr_loc(loc,implicit_built_in_decls[330],3,dest,src,len);
          }
        }
      }
      else {
LAB_0010ecbf:
        fn = implicit_built_in_decls[330];
        if (implicit_built_in_decls[330] == (tree)0x0) {
          ptVar6 = (tree)0x0;
        }
        else {
          ptVar6 = build_call_expr_loc(loc,implicit_built_in_decls[330],3,dest,src,len);
        }
      }
      goto LAB_0010fa58;
    }
    iVar3 = host_integerp(len);
    if (iVar3 == 0) {
      ptVar6 = (tree)0x0;
      goto LAB_0010fa58;
    }
    local_d0 = (tree)tree_strip_nop_conversions(src);
    local_c8 = (tree)tree_strip_nop_conversions(dest);
    if (*(short *)local_d0 == 0x42) {
      tem = *(tree *)&local_d0->field_0x28;
      tem = (tree)tree_strip_nop_conversions(tem);
      if (tem != *(tree *)&local_d0->field_0x28) {
        local_d0 = (tree)build1_stat(0x74,*(undefined8 *)&tem->field_0x10,local_d0);
      }
    }
    if (*(short *)local_c8 == 0x42) {
      tem_1 = *(tree *)&local_c8->field_0x28;
      tem_1 = (tree)tree_strip_nop_conversions(tem_1);
      if (tem_1 != *(tree *)&local_c8->field_0x28) {
        local_c8 = (tree)build1_stat(0x74,*(undefined8 *)&tem_1->field_0x10,local_c8);
      }
    }
    srctype = *(tree *)(*(long *)&local_d0->field_0x10 + 0x10);
    if (((srctype != (tree)0x0) && (*(short *)srctype == 0xf)) &&
       (iVar3 = tree_int_cst_equal(*(undefined8 *)&srctype->field_0x28), iVar3 == 0)) {
      srctype = *(tree *)&srctype->field_0x10;
      uVar9 = tree_strip_nop_conversions(local_d0);
      uVar8 = build_pointer_type(srctype);
      local_d0 = (tree)build1_stat(0x74,uVar8,uVar9);
    }
    desttype = *(tree *)(*(long *)&local_c8->field_0x10 + 0x10);
    if (((desttype != (tree)0x0) && (*(short *)desttype == 0xf)) &&
       (iVar3 = tree_int_cst_equal(*(undefined8 *)&desttype->field_0x28), iVar3 == 0)) {
      desttype = *(tree *)&desttype->field_0x10;
      uVar9 = tree_strip_nop_conversions(local_c8);
      uVar8 = build_pointer_type(desttype);
      local_c8 = (tree)build1_stat(0x74,uVar8,uVar9);
    }
    if (((srctype == (tree)0x0) || (desttype == (tree)0x0)) ||
       ((*(long *)&srctype->field_0x28 == 0 ||
        ((((*(long *)&desttype->field_0x28 == 0 || (**(short **)&srctype->field_0x28 != 0x17)) ||
          (**(short **)&desttype->field_0x28 != 0x17)) ||
         (((srctype->field_0x2 & 8) != 0 || ((desttype->field_0x2 & 8) != 0)))))))) {
      ptVar6 = (tree)0x0;
      goto LAB_0010fa58;
    }
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar10 = 0x80;
    }
    else {
      uVar10 = 0x100;
    }
    iVar3 = get_pointer_alignment(local_d0,uVar10);
    if ((ix86_isa_flags & 0x20) == 0) {
      uVar10 = 0x80;
    }
    else {
      uVar10 = 0x100;
    }
    iVar4 = get_pointer_alignment(local_c8,uVar10);
    if ((iVar4 < *(int *)&desttype->field_0x40) || (iVar3 < *(int *)&srctype->field_0x40)) {
      ptVar6 = (tree)0x0;
      goto LAB_0010fa58;
    }
    if (ignore == '\0') {
      local_c8 = builtin_save_expr(local_c8);
    }
    srcvar = (tree)0x0;
    iVar5 = tree_int_cst_equal(*(undefined8 *)&srctype->field_0x28,len);
    if (iVar5 != 0) {
      srcvar = (tree)build_fold_indirect_ref_loc(loc,local_d0);
      if ((srcvar->field_0x2 & 8) != 0) {
        ptVar6 = (tree)0x0;
        goto LAB_0010fa58;
      }
      uVar9 = tree_expr_size(srcvar);
      iVar5 = tree_int_cst_equal(uVar9,len);
      if (iVar5 == 0) {
        srcvar = (tree)0x0;
      }
      else {
        uVar1 = var_decl_component_p(srcvar);
        if (uVar1 == '\0') {
          srcvar = (tree)0x0;
        }
      }
    }
    destvar = (tree)0x0;
    iVar5 = tree_int_cst_equal(*(undefined8 *)&desttype->field_0x28,len);
    if (iVar5 != 0) {
      destvar = (tree)build_fold_indirect_ref_loc(loc,local_c8);
      if ((destvar->field_0x2 & 8) != 0) {
        ptVar6 = (tree)0x0;
        goto LAB_0010fa58;
      }
      uVar9 = tree_expr_size(destvar);
      iVar5 = tree_int_cst_equal(uVar9,len);
      if (iVar5 == 0) {
        destvar = (tree)0x0;
      }
      else {
        uVar1 = var_decl_component_p(destvar);
        if (uVar1 == '\0') {
          destvar = (tree)0x0;
        }
      }
    }
    if ((srcvar == (tree)0x0) && (destvar == (tree)0x0)) {
      ptVar6 = (tree)0x0;
      goto LAB_0010fa58;
    }
    if (srcvar == (tree)0x0) {
      if ((*(byte *)(*(long *)&destvar->field_0x10 + 2) & 4) != 0) {
        ptVar6 = (tree)0x0;
        goto LAB_0010fa58;
      }
      srctype = (tree)build_qualified_type(desttype,0);
      if (iVar3 < *(int *)&srctype->field_0x40) {
        if (((*(short *)srctype == 0xf) || (*(short *)srctype == 0x10)) ||
           ((*(short *)srctype == 0x11 || (*(short *)srctype == 0x12)))) {
          ptVar6 = (tree)0x0;
          goto LAB_0010fa58;
        }
        srctype = (tree)build_variant_type_copy(srctype);
        *(int *)&srctype->field_0x40 = iVar3;
        srctype->field_0x5 = srctype->field_0x5 | 4;
        srctype->field_0x5 = srctype->field_0x5 | 2;
      }
      srcptype = (tree)build_pointer_type_for_mode(srctype,ptr_mode,1);
      uVar9 = fold_convert_loc(loc,srcptype,local_d0);
      srcvar = (tree)build_fold_indirect_ref_loc(loc,uVar9);
    }
    else if (destvar == (tree)0x0) {
      if ((*(byte *)(*(long *)&srcvar->field_0x10 + 2) & 4) != 0) {
        ptVar6 = (tree)0x0;
        goto LAB_0010fa58;
      }
      desttype = (tree)build_qualified_type(srctype,0);
      if (iVar4 < *(int *)&desttype->field_0x40) {
        if ((((*(short *)desttype == 0xf) || (*(short *)desttype == 0x10)) ||
            (*(short *)desttype == 0x11)) || (*(short *)desttype == 0x12)) {
          ptVar6 = (tree)0x0;
          goto LAB_0010fa58;
        }
        desttype = (tree)build_variant_type_copy(desttype);
        *(int *)&desttype->field_0x40 = iVar4;
        desttype->field_0x5 = desttype->field_0x5 | 4;
        desttype->field_0x5 = desttype->field_0x5 | 2;
      }
      destptype = (tree)build_pointer_type_for_mode(desttype,ptr_mode,1);
      local_c8 = (tree)fold_convert_loc(loc,destptype,local_c8);
      destvar = (tree)build_fold_indirect_ref_loc(loc,local_c8);
    }
    if ((srctype == desttype) ||
       ((uVar1 = gimple_in_ssa_p(cfun), uVar1 != '\0' &&
        (cVar2 = useless_type_conversion_p(desttype,srctype), cVar2 != '\0')))) {
      expr = srcvar;
    }
    else if (((((**(short **)&srcvar->field_0x10 == 6) || (**(short **)&srcvar->field_0x10 == 7)) ||
              (**(short **)&srcvar->field_0x10 == 8)) ||
             ((**(short **)&srcvar->field_0x10 == 10 || (**(short **)&srcvar->field_0x10 == 0xc))))
            && ((((**(short **)&destvar->field_0x10 == 6 ||
                  ((**(short **)&destvar->field_0x10 == 7 || (**(short **)&destvar->field_0x10 == 8)
                   ))) || (**(short **)&destvar->field_0x10 == 10)) ||
                (**(short **)&destvar->field_0x10 == 0xc)))) {
      expr = (tree)fold_convert_loc(loc,*(undefined8 *)&destvar->field_0x10,srcvar);
    }
    else {
      expr = (tree)fold_build1_stat_loc(loc,0x76,*(undefined8 *)&destvar->field_0x10,srcvar);
    }
    ptVar6 = (tree)build2_stat(0x35,*(undefined8 *)&destvar->field_0x10,destvar,expr);
  }
  expr = ptVar6;
  ptVar6 = expr;
  if (ignore == '\0') {
    if ((endp == 0) || (endp == 3)) {
      ptVar6 = (tree)omit_one_operand_loc(loc,type,local_c8,expr);
    }
    else {
      if (expr == len) {
        expr = (tree)0x0;
      }
      local_d8 = len;
      if (endp == 2) {
        uVar9 = size_int_kind(1,1);
        local_d8 = (tree)fold_build2_stat_loc(loc,0x40,*(undefined8 *)&len->field_0x10,len,uVar9);
      }
      uVar9 = fold_convert_loc(loc,sizetype_tab,local_d8);
      uVar9 = fold_build2_stat_loc(loc,0x42,*(undefined8 *)&local_c8->field_0x10,local_c8,uVar9);
      ptVar6 = (tree)fold_convert_loc(loc,type,uVar9);
      if (expr != (tree)0x0) {
        ptVar6 = (tree)omit_one_operand_loc(loc,type,ptVar6,expr);
      }
    }
  }
LAB_0010fa58:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar6;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree fold_builtin_strcpy(location_t loc,tree fndecl,tree dest,tree src,tree len)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  tree ptVar4;
  undefined8 uVar5;
  tree local_40;
  tree fn;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  iVar3 = operand_equal_p(src,dest,0);
  if (iVar3 != 0) {
    ptVar4 = (tree)fold_convert_loc(loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),dest);
    return ptVar4;
  }
  cVar2 = optimize_function_for_size_p(cfun);
  ptVar4 = implicit_built_in_decls[330];
  if (cVar2 != '\0') {
    return (tree)0x0;
  }
  if (implicit_built_in_decls[330] == (tree)0x0) {
    return (tree)0x0;
  }
  local_40 = len;
  if ((len == (tree)0x0) &&
     ((local_40 = c_strlen(src,1), local_40 == (tree)0x0 || ((local_40->field_0x2 & 1) != 0)))) {
    return (tree)0x0;
  }
  uVar5 = size_int_kind(1,1);
  uVar5 = size_binop_loc(loc,0x3f,local_40,uVar5);
  ptVar4 = build_call_expr_loc(loc,ptVar4,3,dest,src,uVar5);
  ptVar4 = (tree)fold_convert_loc(loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),ptVar4);
  return ptVar4;
}



tree fold_builtin_stpcpy(location_t loc,tree fndecl,tree dest,tree src)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  tree ptVar4;
  undefined8 uVar5;
  tree ptVar6;
  tree ptVar7;
  undefined8 uVar8;
  tree len;
  tree fn;
  tree lenp1;
  tree call;
  tree type;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  ptVar4 = c_strlen(src,1);
  if ((ptVar4 != (tree)0x0) && (*(short *)ptVar4 == 0x17)) {
    cVar2 = optimize_function_for_size_p(cfun);
    if ((cVar2 != '\0') && (iVar3 = integer_zerop(ptVar4), iVar3 == 0)) {
      return (tree)0x0;
    }
    ptVar7 = implicit_built_in_decls[330];
    if (implicit_built_in_decls[330] == (tree)0x0) {
      return (tree)0x0;
    }
    uVar5 = size_int_kind(1,1);
    uVar5 = size_binop_loc(loc,0x3f,ptVar4,uVar5);
    ptVar6 = builtin_save_expr(dest);
    ptVar7 = build_call_expr_loc(loc,ptVar7,3,ptVar6,src,uVar5);
    uVar5 = *(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10);
    uVar8 = fold_convert_loc(loc,sizetype_tab,ptVar4);
    uVar8 = fold_build2_stat_loc(loc,0x42,*(undefined8 *)&ptVar6->field_0x10,ptVar6,uVar8);
    uVar8 = fold_convert_loc(loc,uVar5,uVar8);
    ptVar4 = (tree)omit_one_operand_loc(loc,uVar5,uVar8,ptVar7);
    return ptVar4;
  }
  return (tree)0x0;
}



tree fold_builtin_strncpy(location_t loc,tree fndecl,tree dest,tree src,tree len,tree slen)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  undefined8 uVar4;
  tree local_48;
  tree fn;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  iVar2 = integer_zerop(len);
  if (iVar2 != 0) {
    ptVar3 = (tree)omit_one_operand_loc
                             (loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),dest,src);
    return ptVar3;
  }
  if ((len == (tree)0x0) || (*(short *)len != 0x17)) {
    return (tree)0x0;
  }
  local_48 = slen;
  if (slen == (tree)0x0) {
    local_48 = c_strlen(src,1);
  }
  if ((local_48 == (tree)0x0) || (*(short *)local_48 != 0x17)) {
    return (tree)0x0;
  }
  uVar4 = size_int_kind(1,1);
  uVar4 = size_binop_loc(loc,0x3f,local_48,uVar4);
  iVar2 = tree_int_cst_lt(uVar4,len);
  if (iVar2 != 0) {
    return (tree)0x0;
  }
  if (implicit_built_in_decls[330] == (tree)0x0) {
    return (tree)0x0;
  }
  ptVar3 = build_call_expr_loc(loc,implicit_built_in_decls[330],3,dest,src,len);
  ptVar3 = (tree)fold_convert_loc(loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),ptVar3);
  return ptVar3;
}



tree fold_builtin_memchr(location_t loc,tree arg1,tree arg2,tree len,tree type)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  size_t sVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  char c;
  char *p1;
  char *r;
  tree tem;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = validate_arg(arg1,POINTER_TYPE);
  if (uVar1 != '\0') {
    uVar1 = validate_arg(arg2,INTEGER_TYPE);
    if (uVar1 != '\0') {
      uVar1 = validate_arg(len,INTEGER_TYPE);
      if (uVar1 != '\0') {
        if (*(short *)arg2 == 0x17) {
          iVar2 = host_integerp(len,1);
          if (iVar2 != 0) {
            p1 = c_getstr(arg1);
            if (p1 != (char *)0x0) {
              sVar4 = strlen(p1);
              iVar2 = compare_tree_int(len,sVar4 + 1);
              if (iVar2 < 1) {
                iVar2 = target_char_cast(arg2,&c);
                if (iVar2 == 0) {
                  sVar4 = tree_low_cst(len);
                  r = (char *)memchr(p1,(int)c,sVar4);
                  if (r == (char *)0x0) {
                    ptVar3 = (tree)build_int_cst(*(undefined8 *)&arg1->field_0x10,0);
                  }
                  else {
                    uVar5 = size_int_kind((long)r - (long)p1,0);
                    tem = (tree)fold_build2_stat_loc
                                          (loc,0x42,*(undefined8 *)&arg1->field_0x10,arg1,uVar5);
                    ptVar3 = (tree)fold_convert_loc(loc,type,tem);
                  }
                }
                else {
                  ptVar3 = (tree)0x0;
                }
                goto LAB_001100f6;
              }
            }
            ptVar3 = (tree)0x0;
            goto LAB_001100f6;
          }
        }
        ptVar3 = (tree)0x0;
        goto LAB_001100f6;
      }
    }
  }
  ptVar3 = (tree)0x0;
LAB_001100f6:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_memcmp(location_t loc,tree arg1,tree arg2,tree len)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  char *__s;
  char *__s_00;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int r;
  char *p1;
  char *p2;
  tree cst_uchar_node;
  tree cst_uchar_ptr_node;
  tree ind1;
  tree ind2;
  
  uVar1 = validate_arg(arg1,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(arg2,POINTER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 == '\0')) {
    ptVar3 = (tree)0x0;
  }
  else {
    iVar2 = integer_zerop(len);
    if (iVar2 == 0) {
      iVar2 = operand_equal_p(arg1,arg2,0);
      if (iVar2 == 0) {
        __s = c_getstr(arg1);
        __s_00 = c_getstr(arg2);
        iVar2 = host_integerp(len,1);
        if (((iVar2 != 0) && (__s != (char *)0x0)) && (__s_00 != (char *)0x0)) {
          sVar4 = strlen(__s);
          iVar2 = compare_tree_int(len,sVar4 + 1);
          if (iVar2 < 1) {
            sVar4 = strlen(__s_00);
            iVar2 = compare_tree_int(len,sVar4 + 1);
            if (iVar2 < 1) {
              sVar4 = tree_low_cst(len,1);
              iVar2 = memcmp(__s,__s_00,sVar4);
              if (0 < iVar2) {
                return _gen_rtx_CONST_INT;
              }
              if (-1 < iVar2) {
                return _set_mem_expr;
              }
              return _set_mem_offset;
            }
          }
        }
        iVar2 = host_integerp(len,1);
        if ((iVar2 == 0) || (lVar5 = tree_low_cst(len,1), lVar5 != 1)) {
          ptVar3 = (tree)0x0;
        }
        else {
          uVar6 = build_qualified_type(_clear_storage_hints,1);
          uVar7 = build_pointer_type_for_mode(uVar6,ptr_mode,1);
          uVar8 = fold_convert_loc(loc,uVar7,arg1);
          uVar8 = build1_stat(0x2f,uVar6,uVar8);
          uVar8 = fold_convert_loc(loc,_gen_cmpstrnsi,uVar8);
          uVar7 = fold_convert_loc(loc,uVar7,arg2);
          uVar6 = build1_stat(0x2f,uVar6,uVar7);
          uVar6 = fold_convert_loc(loc,_gen_cmpstrnsi,uVar6);
          ptVar3 = (tree)fold_build2_stat_loc(loc,0x40,_gen_cmpstrnsi,uVar8,uVar6);
        }
      }
      else {
        ptVar3 = (tree)omit_one_operand_loc(loc,_gen_cmpstrnsi,_set_mem_expr,len);
      }
    }
    else {
      ptVar3 = (tree)omit_two_operands_loc(loc,_gen_cmpstrnsi,_set_mem_expr,arg1,arg2);
    }
  }
  return ptVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_strcmp(location_t loc,tree arg1,tree arg2)

{
  uchar uVar1;
  int iVar2;
  char *__s1;
  char *__s2;
  undefined8 uVar3;
  undefined8 uVar4;
  tree ptVar5;
  int i;
  char *p1;
  char *p2;
  tree cst_uchar_node;
  tree cst_uchar_ptr_node;
  tree cst_uchar_node_1;
  tree cst_uchar_ptr_node_1;
  tree temp;
  
  uVar1 = validate_arg(arg1,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(arg2,POINTER_TYPE), uVar1 == '\0')) {
    ptVar5 = (tree)0x0;
  }
  else {
    iVar2 = operand_equal_p(arg1,arg2,0);
    ptVar5 = _set_mem_expr;
    if (iVar2 == 0) {
      __s1 = c_getstr(arg1);
      __s2 = c_getstr(arg2);
      if ((__s1 == (char *)0x0) || (__s2 == (char *)0x0)) {
        if ((__s2 == (char *)0x0) || (*__s2 != '\0')) {
          if ((__s1 == (char *)0x0) || (*__s1 != '\0')) {
            ptVar5 = (tree)0x0;
          }
          else {
            uVar3 = build_qualified_type(_clear_storage_hints,1);
            uVar4 = build_pointer_type_for_mode(uVar3,ptr_mode,1);
            uVar4 = fold_convert_loc(loc,uVar4,arg2);
            uVar3 = build1_stat(0x2f,uVar3,uVar4);
            uVar3 = fold_convert_loc(loc,_gen_cmpstrnsi,uVar3);
            ptVar5 = (tree)fold_build1_stat_loc(loc,0x4f,_gen_cmpstrnsi,uVar3);
          }
        }
        else {
          uVar3 = build_qualified_type(_clear_storage_hints,1);
          uVar4 = build_pointer_type_for_mode(uVar3,ptr_mode,1);
          uVar4 = fold_convert_loc(loc,uVar4,arg1);
          uVar3 = build1_stat(0x2f,uVar3,uVar4);
          ptVar5 = (tree)fold_convert_loc(loc,_gen_cmpstrnsi,uVar3);
        }
      }
      else {
        iVar2 = strcmp(__s1,__s2);
        ptVar5 = _set_mem_offset;
        if ((-1 < iVar2) && (ptVar5 = _set_mem_expr, 0 < iVar2)) {
          ptVar5 = _gen_rtx_CONST_INT;
        }
      }
    }
  }
  return ptVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_strncmp(location_t loc,tree arg1,tree arg2,tree len)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  char *__s1;
  char *__s2;
  size_t __n;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int i;
  char *p1;
  char *p2;
  tree cst_uchar_node;
  tree cst_uchar_ptr_node;
  tree cst_uchar_node_1;
  tree cst_uchar_ptr_node_1;
  tree temp;
  tree cst_uchar_node_2;
  tree cst_uchar_ptr_node_2;
  tree ind1;
  tree ind2;
  
  uVar1 = validate_arg(arg1,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(arg2,POINTER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 == '\0')) {
    ptVar3 = (tree)0x0;
  }
  else {
    iVar2 = integer_zerop(len);
    if (iVar2 == 0) {
      iVar2 = operand_equal_p(arg1,arg2,0);
      if (iVar2 == 0) {
        __s1 = c_getstr(arg1);
        __s2 = c_getstr(arg2);
        iVar2 = host_integerp(len,1);
        if (((iVar2 == 0) || (__s1 == (char *)0x0)) || (__s2 == (char *)0x0)) {
          if (((__s2 == (char *)0x0) || (*__s2 != '\0')) ||
             ((*(short *)len != 0x17 || (iVar2 = tree_int_cst_sgn(len), iVar2 != 1)))) {
            if ((((__s1 == (char *)0x0) || (*__s1 != '\0')) || (*(short *)len != 0x17)) ||
               (iVar2 = tree_int_cst_sgn(len), iVar2 != 1)) {
              iVar2 = host_integerp(len,1);
              if ((iVar2 == 0) || (lVar6 = tree_low_cst(len,1), lVar6 != 1)) {
                ptVar3 = (tree)0x0;
              }
              else {
                uVar4 = build_qualified_type(_clear_storage_hints,1);
                uVar5 = build_pointer_type_for_mode(uVar4,ptr_mode,1);
                uVar7 = fold_convert_loc(loc,uVar5,arg1);
                uVar7 = build1_stat(0x2f,uVar4,uVar7);
                uVar7 = fold_convert_loc(loc,_gen_cmpstrnsi,uVar7);
                uVar5 = fold_convert_loc(loc,uVar5,arg2);
                uVar4 = build1_stat(0x2f,uVar4,uVar5);
                uVar4 = fold_convert_loc(loc,_gen_cmpstrnsi,uVar4);
                ptVar3 = (tree)fold_build2_stat_loc(loc,0x40,_gen_cmpstrnsi,uVar7,uVar4);
              }
            }
            else {
              uVar4 = build_qualified_type(_clear_storage_hints,1);
              uVar5 = build_pointer_type_for_mode(uVar4,ptr_mode,1);
              uVar5 = fold_convert_loc(loc,uVar5,arg2);
              uVar4 = build1_stat(0x2f,uVar4,uVar5);
              uVar4 = fold_convert_loc(loc,_gen_cmpstrnsi,uVar4);
              ptVar3 = (tree)fold_build1_stat_loc(loc,0x4f,_gen_cmpstrnsi,uVar4);
            }
          }
          else {
            uVar4 = build_qualified_type(_clear_storage_hints,1);
            uVar5 = build_pointer_type_for_mode(uVar4,ptr_mode,1);
            uVar5 = fold_convert_loc(loc,uVar5,arg1);
            uVar4 = build1_stat(0x2f,uVar4,uVar5);
            ptVar3 = (tree)fold_convert_loc(loc,_gen_cmpstrnsi,uVar4);
          }
        }
        else {
          __n = tree_low_cst(len,1);
          iVar2 = strncmp(__s1,__s2,__n);
          ptVar3 = _gen_rtx_CONST_INT;
          if ((iVar2 < 1) && (ptVar3 = _set_mem_expr, iVar2 < 0)) {
            ptVar3 = _set_mem_offset;
          }
        }
      }
      else {
        ptVar3 = (tree)omit_one_operand_loc(loc,_gen_cmpstrnsi,_set_mem_expr,len);
      }
    }
    else {
      ptVar3 = (tree)omit_two_operands_loc(loc,_gen_cmpstrnsi,_set_mem_expr,arg1,arg2);
    }
  }
  return ptVar3;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_signbit(location_t loc,tree arg,tree type)

{
  long lVar1;
  undefined8 *puVar2;
  uchar uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  tree ptVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  tree temp;
  real_value c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = validate_arg(arg,REAL_TYPE);
  if (uVar3 == '\0') {
    ptVar7 = (tree)0x0;
    goto LAB_00110fe4;
  }
  if ((*(short *)arg == 0x18) && ((arg->field_0x3 & 8) == 0)) {
    puVar2 = *(undefined8 **)&arg->field_0x18;
    c._0_8_ = *puVar2;
    c.sig[0] = puVar2[1];
    c.sig[1] = puVar2[2];
    c.sig[2] = puVar2[3];
    cVar4 = real_isneg(&c);
    uVar8 = _set_mem_expr;
    if (cVar4 != '\0') {
      uVar8 = _gen_rtx_CONST_INT;
    }
    ptVar7 = (tree)fold_convert_loc(loc,type,uVar8);
    goto LAB_00110fe4;
  }
  cVar4 = tree_expr_nonnegative_p(arg);
  if (cVar4 != '\0') {
    ptVar7 = (tree)omit_one_operand_loc(loc,type,_set_mem_expr,arg);
    goto LAB_00110fe4;
  }
  if (**(short **)&arg->field_0x10 == 0xe) {
    uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
  }
  else {
    uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
  }
  if ((&mode_class)[uVar5] == '\b') {
LAB_00110c47:
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\b') {
LAB_00110ccd:
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
    }
    else {
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] == '\t') goto LAB_00110ccd;
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      uVar5 = (uint)(byte)(&mode_inner)[uVar5];
    }
    if ((&mode_class)[uVar5] == '\t') {
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] != '\b') {
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        if ((&mode_class)[uVar5] != '\t') {
          if (**(short **)&arg->field_0x10 == 0xe) {
            uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          }
          else {
            uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
          }
          uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
          goto LAB_00110f6d;
        }
      }
      if (**(short **)&arg->field_0x10 == 0xe) {
        iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        uVar5 = iVar6 - 0x26;
      }
      else {
        uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
      }
    }
    else {
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] != '\b') {
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        if ((&mode_class)[uVar5] != '\t') {
          if (**(short **)&arg->field_0x10 == 0xe) {
            uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          }
          else {
            uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
          }
          uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
          goto LAB_00110f6d;
        }
      }
      if (**(short **)&arg->field_0x10 == 0xe) {
        iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        uVar5 = iVar6 - 0x26;
      }
      else {
        uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
      }
    }
LAB_00110f6d:
    if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar5 * 8) + 0x31) != '\0') &&
       (flag_signed_zeros != 0)) {
      ptVar7 = (tree)0x0;
      goto LAB_00110fe4;
    }
  }
  else {
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\t') goto LAB_00110c47;
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\v') goto LAB_00110c47;
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\x11') goto LAB_00110c47;
  }
  uVar8 = build_real(*(undefined8 *)&arg->field_0x10);
  ptVar7 = (tree)fold_build2_stat_loc(loc,0x61,type,arg,uVar8);
LAB_00110fe4:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar7;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps

tree fold_builtin_copysign(location_t loc,tree fndecl,tree arg1,tree arg2,tree type)

{
  long lVar1;
  undefined8 *puVar2;
  uchar uVar3;
  char cVar4;
  int iVar5;
  tree ptVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  tree tem;
  real_value c1;
  real_value c2;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = validate_arg(arg1,REAL_TYPE);
  if (uVar3 != '\0') {
    uVar3 = validate_arg(arg2,REAL_TYPE);
    if (uVar3 != '\0') {
      iVar5 = operand_equal_p(arg1,arg2,0);
      if (iVar5 == 0) {
        if ((((*(short *)arg1 == 0x18) && (*(short *)arg2 == 0x18)) && ((arg1->field_0x3 & 8) == 0))
           && ((arg2->field_0x3 & 8) == 0)) {
          puVar2 = *(undefined8 **)&arg1->field_0x18;
          c1._0_8_ = *puVar2;
          c1.sig[0] = puVar2[1];
          c1.sig[1] = puVar2[2];
          c1.sig[2] = puVar2[3];
          puVar2 = *(undefined8 **)&arg2->field_0x18;
          c2._0_8_ = *puVar2;
          c2.sig[0] = puVar2[1];
          c2.sig[1] = puVar2[2];
          c2.sig[2] = puVar2[3];
          real_copysign(&c1,&c2);
          ptVar6 = (tree)build_real(type);
        }
        else {
          cVar4 = tree_expr_nonnegative_p(arg2);
          if (cVar4 == '\0') {
            lVar8 = fold_strip_sign_ops();
            if (lVar8 == 0) {
              ptVar6 = (tree)0x0;
            }
            else {
              ptVar6 = build_call_expr_loc(loc,fndecl,2,lVar8,arg2);
            }
          }
          else {
            uVar7 = fold_build1_stat_loc(loc,0x52,type,arg1);
            ptVar6 = (tree)omit_one_operand_loc(loc,type,uVar7,arg2);
          }
        }
      }
      else {
        ptVar6 = (tree)fold_convert_loc(loc,type,arg1);
      }
      goto LAB_001111f6;
    }
  }
  ptVar6 = (tree)0x0;
LAB_001111f6:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_isascii(location_t loc,tree arg)

{
  uchar uVar1;
  tree ptVar2;
  undefined8 uVar3;
  
  uVar1 = validate_arg(arg,INTEGER_TYPE);
  if (uVar1 == '\0') {
    ptVar2 = (tree)0x0;
  }
  else {
    uVar3 = build_int_cst(0,0xffffffffffffff80);
    uVar3 = fold_build2_stat_loc(0,0x59,_gen_cmpstrnsi,arg,uVar3);
    ptVar2 = (tree)fold_build2_stat_loc(loc,0x65,_gen_cmpstrnsi,uVar3,_set_mem_expr);
  }
  return ptVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_toascii(location_t loc,tree arg)

{
  uchar uVar1;
  tree ptVar2;
  undefined8 uVar3;
  
  uVar1 = validate_arg(arg,INTEGER_TYPE);
  if (uVar1 == '\0') {
    ptVar2 = (tree)0x0;
  }
  else {
    uVar3 = build_int_cst(0,0x7f);
    ptVar2 = (tree)fold_build2_stat_loc(loc,0x59,_gen_cmpstrnsi,arg,uVar3);
  }
  return ptVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_isdigit(location_t loc,tree arg)

{
  uchar uVar1;
  tree ptVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong target_digit0;
  
  uVar1 = validate_arg(arg,INTEGER_TYPE);
  if (uVar1 == '\0') {
    ptVar2 = (tree)0x0;
  }
  else {
    lVar3 = (*_expand_shift)(0x30);
    if (lVar3 == 0) {
      ptVar2 = (tree)0x0;
    }
    else {
      uVar4 = fold_convert_loc(loc,libfunc_table,arg);
      uVar5 = build_int_cst(libfunc_table,lVar3);
      uVar4 = fold_build2_stat_loc(0,0x40,libfunc_table,uVar4,uVar5);
      uVar5 = build_int_cst(libfunc_table,9);
      ptVar2 = (tree)fold_build2_stat_loc(loc,0x62,_gen_cmpstrnsi,uVar4,uVar5);
    }
  }
  return ptVar2;
}



tree fold_builtin_fabs(location_t loc,tree arg,tree type)

{
  uchar uVar1;
  tree ptVar2;
  short *psVar3;
  
  uVar1 = validate_arg(arg,REAL_TYPE);
  if (uVar1 == '\0') {
    ptVar2 = (tree)0x0;
  }
  else {
    psVar3 = (short *)fold_convert_loc(loc,type,arg);
    if (*psVar3 == 0x18) {
      ptVar2 = (tree)fold_abs_const(psVar3,type);
    }
    else {
      ptVar2 = (tree)fold_build1_stat_loc(loc,0x52,type,psVar3);
    }
  }
  return ptVar2;
}



tree fold_builtin_abs(location_t loc,tree arg,tree type)

{
  uchar uVar1;
  tree ptVar2;
  short *psVar3;
  
  uVar1 = validate_arg(arg,INTEGER_TYPE);
  if (uVar1 == '\0') {
    ptVar2 = (tree)0x0;
  }
  else {
    psVar3 = (short *)fold_convert_loc(loc,type,arg);
    if (*psVar3 == 0x17) {
      ptVar2 = (tree)fold_abs_const(psVar3,type);
    }
    else {
      ptVar2 = (tree)fold_build1_stat_loc(loc,0x52,type,psVar3);
    }
  }
  return ptVar2;
}



tree fold_builtin_fmin_fmax(location_t loc,tree arg0,tree arg1,tree type,uchar max)

{
  return (tree)0x0;
}



tree fold_builtin_carg(location_t loc,tree arg,tree type)

{
  uchar uVar1;
  tree ptVar2;
  tree ptVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  tree atan2_fn;
  tree new_arg;
  tree r_arg;
  tree i_arg;
  
  uVar1 = validate_arg(arg,COMPLEX_TYPE);
  if (((uVar1 != '\0') && (**(short **)(*(long *)&arg->field_0x10 + 0x10) == 9)) &&
     (ptVar2 = mathfn_built_in(type,BUILT_IN_ATAN2), ptVar2 != (tree)0x0)) {
    ptVar3 = builtin_save_expr(arg);
    uVar4 = fold_build1_stat_loc(loc,0x2b,type,ptVar3);
    uVar5 = fold_build1_stat_loc(loc,0x2c,type,ptVar3);
    ptVar2 = build_call_expr_loc(loc,ptVar2,2,uVar5,uVar4);
    return ptVar2;
  }
  return (tree)0x0;
}



tree fold_builtin_logb(location_t loc,tree arg,tree rettype)

{
  uint *puVar1;
  uchar uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  tree ptVar7;
  undefined8 uVar8;
  real_value *value;
  
  uVar2 = validate_arg(arg,REAL_TYPE);
  if (uVar2 == '\0') {
    return (tree)0x0;
  }
  psVar6 = (short *)tree_strip_nop_conversions(arg);
  if ((*psVar6 == 0x18) && ((*(byte *)((long)psVar6 + 3) & 8) == 0)) {
    puVar1 = *(uint **)(psVar6 + 0xc);
    bVar3 = *(byte *)puVar1 & 3;
    if (bVar3 != 1) {
      if (((bVar3 != 0) && (bVar3 - 2 < 2)) && (*(short *)rettype == 9)) {
        ptVar7 = (tree)fold_convert_loc(loc,rettype,psVar6);
        return ptVar7;
      }
      return (tree)0x0;
    }
    if (**(short **)(psVar6 + 8) == 0xe) {
      uVar4 = vector_type_mode(*(undefined8 *)(psVar6 + 8));
    }
    else {
      uVar4 = (uint)*(byte *)(*(long *)(psVar6 + 8) + 0x3e);
    }
    if ((&mode_class)[uVar4] == '\t') {
      if (**(short **)(psVar6 + 8) == 0xe) {
        iVar5 = vector_type_mode(*(undefined8 *)(psVar6 + 8));
        uVar4 = iVar5 - 0x26;
      }
      else {
        uVar4 = *(byte *)(*(long *)(psVar6 + 8) + 0x3e) - 0x26;
      }
    }
    else if (**(short **)(psVar6 + 8) == 0xe) {
      iVar5 = vector_type_mode(*(undefined8 *)(psVar6 + 8));
      uVar4 = iVar5 - 0x26;
    }
    else {
      uVar4 = *(byte *)(*(long *)(psVar6 + 8) + 0x3e) - 0x26;
    }
    if (*(int *)(*(long *)(&real_format_for_mode + (ulong)uVar4 * 8) + 0x10) == 2) {
      uVar8 = build_int_cst(0,(long)(int)((*puVar1 >> 6 ^ 0x2000000) + 0xfdffffff));
      ptVar7 = (tree)fold_convert_loc(loc,rettype,uVar8);
      return ptVar7;
    }
  }
  return (tree)0x0;
}



tree fold_builtin_significand(location_t loc,tree arg,tree rettype)

{
  long lVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  tree ptVar5;
  short *psVar6;
  long in_FS_OFFSET;
  real_value *value;
  real_value result;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = validate_arg(arg,REAL_TYPE);
  if (uVar2 == '\0') {
    ptVar5 = (tree)0x0;
    goto LAB_001119a2;
  }
  psVar6 = (short *)tree_strip_nop_conversions(arg);
  if ((*psVar6 == 0x18) && ((*(byte *)((long)psVar6 + 3) & 8) == 0)) {
    if ((**(byte **)(psVar6 + 0xc) & 3) != 1) {
      ptVar5 = (tree)fold_convert_loc(loc,rettype,psVar6);
      goto LAB_001119a2;
    }
    if (**(short **)(psVar6 + 8) == 0xe) {
      uVar3 = vector_type_mode(*(undefined8 *)(psVar6 + 8));
    }
    else {
      uVar3 = (uint)*(byte *)(*(long *)(psVar6 + 8) + 0x3e);
    }
    if ((&mode_class)[uVar3] == '\t') {
      if (**(short **)(psVar6 + 8) == 0xe) {
        iVar4 = vector_type_mode(*(undefined8 *)(psVar6 + 8));
        uVar3 = iVar4 - 0x26;
      }
      else {
        uVar3 = *(byte *)(*(long *)(psVar6 + 8) + 0x3e) - 0x26;
      }
    }
    else if (**(short **)(psVar6 + 8) == 0xe) {
      iVar4 = vector_type_mode(*(undefined8 *)(psVar6 + 8));
      uVar3 = iVar4 - 0x26;
    }
    else {
      uVar3 = *(byte *)(*(long *)(psVar6 + 8) + 0x3e) - 0x26;
    }
    if (*(int *)(*(long *)(&real_format_for_mode + (ulong)uVar3 * 8) + 0x10) == 2) {
      ptVar5 = (tree)build_real(rettype);
      goto LAB_001119a2;
    }
  }
  ptVar5 = (tree)0x0;
LAB_001119a2:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_frexp(location_t loc,tree arg0,tree arg1,tree rettype)

{
  long lVar1;
  uint *puVar2;
  uchar uVar3;
  byte bVar4;
  tree ptVar5;
  long lVar6;
  long in_FS_OFFSET;
  tree frac;
  tree exp;
  real_value *value;
  real_value frac_rvt;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = validate_arg(arg0,REAL_TYPE);
  if ((uVar3 == '\0') || (uVar3 = validate_arg(arg1,POINTER_TYPE), uVar3 == '\0')) {
    ptVar5 = (tree)0x0;
    goto LAB_00111bc9;
  }
  ptVar5 = (tree)tree_strip_nop_conversions(arg0);
  if ((*(short *)ptVar5 != 0x18) || ((ptVar5->field_0x3 & 8) != 0)) {
    ptVar5 = (tree)0x0;
    goto LAB_00111bc9;
  }
  lVar6 = build_fold_indirect_ref_loc(loc,arg1);
  if (*(long *)(*(long *)(lVar6 + 0x10) + 0x80) != _gen_cmpstrnsi) {
    ptVar5 = (tree)0x0;
    goto LAB_00111bc9;
  }
  puVar2 = *(uint **)&ptVar5->field_0x18;
  bVar4 = *(byte *)puVar2 & 3;
  if (bVar4 < 4) {
    if (1 < bVar4) {
      ptVar5 = (tree)omit_one_operand_loc(loc,rettype,ptVar5,lVar6);
      goto LAB_00111bc9;
    }
    if (bVar4 == 0) {
      exp = _set_mem_expr;
      frac = ptVar5;
    }
    else {
      if (bVar4 != 1) goto LAB_00111b5c;
      frac = (tree)build_real(rettype);
      exp = (tree)build_int_cst(0,(long)(int)((*puVar2 >> 6 ^ 0x2000000) + 0xfe000000));
    }
  }
  else {
LAB_00111b5c:
    fancy_abort("builtins.c",0x2423,&DAT_0011bd60);
  }
  lVar6 = fold_build2_stat_loc(loc,0x35,rettype,lVar6,exp);
  *(byte *)(lVar6 + 2) = *(byte *)(lVar6 + 2) | 1;
  ptVar5 = (tree)fold_build2_stat_loc(loc,0x34,rettype,lVar6,frac);
LAB_00111bc9:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree fold_builtin_load_exponent(location_t loc,tree arg0,tree arg1,tree type,uchar ldexp)

{
  long lVar1;
  long lVar2;
  uchar uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  undefined8 uVar9;
  tree ptVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long max_exp_adj;
  long req_exp_adj;
  real_value initial_result;
  real_value trunc_result;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = validate_arg(arg0,REAL_TYPE);
  if (uVar3 != '\0') {
    uVar3 = validate_arg(arg1,INTEGER_TYPE);
    if (uVar3 != '\0') {
      psVar8 = (short *)tree_strip_nop_conversions(arg0);
      uVar9 = tree_strip_nop_conversions(arg1);
      iVar5 = real_zerop(psVar8);
      if (iVar5 == 0) {
        iVar5 = integer_zerop(uVar9);
        if (iVar5 == 0) {
          if (*psVar8 == 0x18) {
            cVar4 = real_isfinite(*(undefined8 *)(psVar8 + 0xc));
            if (cVar4 == '\0') goto LAB_00111cb8;
          }
          if (ldexp == '\0') {
            if (*(short *)type == 0xe) {
              uVar6 = vector_type_mode(type);
            }
            else {
              uVar6 = (uint)(byte)type->field_0x3e;
            }
            if ((&mode_class)[uVar6] == '\t') {
              if (*(short *)type == 0xe) {
                iVar5 = vector_type_mode(type);
                uVar6 = iVar5 - 0x26;
              }
              else {
                uVar6 = (byte)type->field_0x3e - 0x26;
              }
            }
            else if (*(short *)type == 0xe) {
              iVar5 = vector_type_mode(type);
              uVar6 = iVar5 - 0x26;
            }
            else {
              uVar6 = (byte)type->field_0x3e - 0x26;
            }
            if (*(int *)(*(long *)(&real_format_for_mode + (ulong)uVar6 * 8) + 0x10) != 2)
            goto LAB_00112079;
          }
          if ((*psVar8 == 0x18) && ((*(byte *)((long)psVar8 + 3) & 8) == 0)) {
            iVar5 = host_integerp(uVar9,0);
            if (iVar5 != 0) {
              if (*(short *)type == 0xe) {
                uVar6 = vector_type_mode(type);
              }
              else {
                uVar6 = (uint)(byte)type->field_0x3e;
              }
              if ((&mode_class)[uVar6] == '\t') {
                if (*(short *)type == 0xe) {
                  iVar5 = vector_type_mode(type);
                  uVar6 = iVar5 - 0x26;
                }
                else {
                  uVar6 = (byte)type->field_0x3e - 0x26;
                }
              }
              else if (*(short *)type == 0xe) {
                iVar5 = vector_type_mode(type);
                uVar6 = iVar5 - 0x26;
              }
              else {
                uVar6 = (byte)type->field_0x3e - 0x26;
              }
              iVar5 = *(int *)(*(long *)(&real_format_for_mode + (ulong)uVar6 * 8) + 0x20);
              if (*(short *)type == 0xe) {
                uVar6 = vector_type_mode(type);
              }
              else {
                uVar6 = (uint)(byte)type->field_0x3e;
              }
              if ((&mode_class)[uVar6] == '\t') {
                if (*(short *)type == 0xe) {
                  iVar7 = vector_type_mode(type);
                  uVar6 = iVar7 - 0x26;
                }
                else {
                  uVar6 = (byte)type->field_0x3e - 0x26;
                }
              }
              else if (*(short *)type == 0xe) {
                iVar7 = vector_type_mode(type);
                uVar6 = iVar7 - 0x26;
              }
              else {
                uVar6 = (byte)type->field_0x3e - 0x26;
              }
              uVar13 = iVar5 - *(int *)(*(long *)(&real_format_for_mode + (ulong)uVar6 * 8) + 0x1c);
              uVar6 = (int)uVar13 >> 0x1f;
              uVar12 = (ulong)((uVar13 ^ uVar6) - uVar6);
              lVar2 = uVar12 * 2;
              uVar11 = tree_low_cst(uVar9,0);
              uVar12 = uVar12 * -2;
              if ((uVar11 != uVar12 && SBORROW8(uVar11,uVar12) == (long)(uVar11 + lVar2) < 0) &&
                 ((long)uVar11 < lVar2)) {
                real_ldexp(&initial_result,*(undefined8 *)(psVar8 + 0xc),uVar11 & 0xffffffff);
                cVar4 = real_isinf(&initial_result);
                if (cVar4 == '\0') {
                  if (*(short *)type == 0xe) {
                    uVar6 = vector_type_mode(type);
                  }
                  else {
                    uVar6 = (uint)(byte)type->field_0x3e;
                  }
                  real_value_truncate(&trunc_result,uVar6);
                  cVar4 = real_compare(0x65,&initial_result,&trunc_result);
                  if (cVar4 != '\0') {
                    ptVar10 = (tree)build_real(type);
                    goto LAB_0011207e;
                  }
                }
              }
            }
          }
          goto LAB_00112079;
        }
      }
LAB_00111cb8:
      ptVar10 = (tree)omit_one_operand_loc(loc,type,psVar8,uVar9);
      goto LAB_0011207e;
    }
  }
LAB_00112079:
  ptVar10 = (tree)0x0;
LAB_0011207e:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar10;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_modf(location_t loc,tree arg0,tree arg1,tree rettype)

{
  long lVar1;
  ulong *puVar2;
  uchar uVar3;
  tree ptVar4;
  short *psVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  real_value *value;
  real_value trunc;
  real_value frac;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = validate_arg(arg0,REAL_TYPE);
  if (uVar3 != '\0') {
    uVar3 = validate_arg(arg1,POINTER_TYPE);
    if (uVar3 != '\0') {
      psVar5 = (short *)tree_strip_nop_conversions(arg0);
      if ((*psVar5 == 0x18) && ((*(byte *)((long)psVar5 + 3) & 8) == 0)) {
        lVar6 = build_fold_indirect_ref_loc(loc,arg1);
        if (*(long *)(*(long *)(lVar6 + 0x10) + 0x80) == *(long *)&rettype->field_0x80) {
          puVar2 = *(ulong **)(psVar5 + 0xc);
          if ((*(byte *)puVar2 & 3) == 1) {
            real_trunc(&trunc,0,puVar2);
            real_arithmetic(&frac,0x40,puVar2,&trunc);
            if (((*(byte *)puVar2 & 8) != 0) && ((frac._0_8_ & 3) == 0)) {
              frac._0_8_ = frac._0_8_ & 0xffffffffffffff00 |
                           (ulong)(byte)(frac._0_1_ & 0xf7 | (*(byte *)puVar2 >> 3 & 1) * '\b');
            }
          }
          else if ((*(byte *)puVar2 & 3) == 2) {
            frac.sig[0] = _build_real;
            frac.sig[1] = _fold_build2_stat_loc;
            frac.sig[2] = _build2_stat;
            frac._0_1_ = (byte)dconst0;
            frac._0_8_ = dconst0 & 0xffffffffffffff00 |
                         (ulong)(byte)(frac._0_1_ & 0xf7 | (*(byte *)puVar2 >> 3 & 1) * '\b');
            trunc._0_8_ = *puVar2;
            trunc.sig[0] = puVar2[1];
            trunc.sig[1] = puVar2[2];
            trunc.sig[2] = puVar2[3];
          }
          else {
            trunc._0_8_ = *puVar2;
            trunc.sig[0] = puVar2[1];
            trunc.sig[1] = puVar2[2];
            trunc.sig[2] = puVar2[3];
            frac._0_8_ = trunc._0_8_;
            frac.sig[0] = trunc.sig[0];
            frac.sig[1] = trunc.sig[1];
            frac.sig[2] = trunc.sig[2];
          }
          uVar7 = build_real(rettype);
          lVar6 = fold_build2_stat_loc(loc,0x35,rettype,lVar6,uVar7);
          *(byte *)(lVar6 + 2) = *(byte *)(lVar6 + 2) | 1;
          uVar7 = build_real(rettype);
          ptVar4 = (tree)fold_build2_stat_loc(loc,0x34,rettype,lVar6,uVar7);
        }
        else {
          ptVar4 = (tree)0x0;
        }
      }
      else {
        ptVar4 = (tree)0x0;
      }
      goto LAB_0011233d;
    }
  }
  ptVar4 = (tree)0x0;
LAB_0011233d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_interclass_mathfn(location_t loc,tree fndecl,tree arg)

{
  long lVar1;
  tree fndecl_00;
  uchar uVar2;
  ushort uVar3;
  insn_code iVar4;
  uint uVar5;
  tree ptVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  tree ptVar9;
  long in_FS_OFFSET;
  machine_mode mode;
  tree isle_fn_1;
  tree isge_fn;
  tree type_2;
  tree result;
  tree isgr_fn;
  tree type;
  tree isle_fn;
  tree type_1;
  real_value rmax;
  real_value r;
  char buf [128];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = validate_arg(arg,REAL_TYPE);
  if (uVar2 == '\0') {
    ptVar6 = (tree)0x0;
    goto LAB_0011285e;
  }
  iVar4 = interclass_mathfn_icode(arg,fndecl);
  if (iVar4 != CODE_FOR_nothing) {
    ptVar6 = (tree)0x0;
    goto LAB_0011285e;
  }
  if (**(short **)&arg->field_0x10 == 0xe) {
    uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
  }
  else {
    uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
  }
  ptVar9 = built_in_decls[485];
  fndecl_00 = built_in_decls[483];
  ptVar6 = built_in_decls[482];
  uVar3 = *(ushort *)&fndecl->field_0xd8 & 0x7ff;
  if (uVar3 == 0x1e1) {
    uVar8 = *(undefined8 *)&arg->field_0x10;
    get_max_float(*(undefined8 *)(&real_format_for_mode + (ulong)(uVar5 - 0x26) * 8),buf,0x80);
    real_from_string(&rmax,buf);
    sprintf(buf,"0x1p%d",
            (ulong)(*(int *)(*(long *)(&real_format_for_mode + (ulong)(uVar5 - 0x26) * 8) + 0x1c) -
                   1));
    real_from_string(&r,buf);
    ptVar6 = (tree)fold_build1_stat_loc(loc,0x52,uVar8,arg);
    ptVar6 = builtin_save_expr(ptVar6);
    uVar7 = build_real(uVar8);
    ptVar9 = build_call_expr_loc(0,ptVar9,2,ptVar6,uVar7);
    uVar8 = build_real(uVar8);
    ptVar6 = build_call_expr_loc(0,fndecl_00,2,ptVar6,uVar8);
    ptVar6 = (tree)fold_build2_stat_loc(0,0x59,_gen_cmpstrnsi,ptVar9,ptVar6);
    goto LAB_0011285e;
  }
  if ((0x1e1 < uVar3) || (0x1d7 < uVar3)) goto code_r0x00112859;
  if (0x1d4 < uVar3) {
    uVar8 = *(undefined8 *)&arg->field_0x10;
    get_max_float(*(undefined8 *)(&real_format_for_mode + (ulong)(uVar5 - 0x26) * 8),buf,0x80);
    real_from_string(&r,buf);
    uVar7 = build_real(uVar8);
    uVar8 = fold_build1_stat_loc(loc,0x52,uVar8,arg);
    ptVar6 = build_call_expr_loc(0,ptVar6,2,uVar8,uVar7);
    goto LAB_0011285e;
  }
  if (uVar3 < 0x1cf) {
    if (0x1cb < uVar3) {
LAB_0011256d:
      uVar8 = *(undefined8 *)&arg->field_0x10;
      get_max_float(*(undefined8 *)(&real_format_for_mode + (ulong)(uVar5 - 0x26) * 8),buf,0x80);
      real_from_string(&r,buf);
      uVar7 = build_real(uVar8);
      uVar8 = fold_build1_stat_loc(loc,0x52,uVar8,arg);
      ptVar6 = build_call_expr_loc(0,ptVar9,2,uVar8,uVar7);
      goto LAB_0011285e;
    }
  }
  else if (uVar3 == 0x1d3) goto LAB_0011256d;
code_r0x00112859:
  ptVar6 = (tree)0x0;
LAB_0011285e:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar6;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_classify(location_t loc,tree fndecl,tree arg,int builtin_index)

{
  long lVar1;
  undefined8 *puVar2;
  uchar uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  tree ptVar7;
  tree ptVar8;
  tree ptVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  tree tmp;
  tree type;
  tree signbit_fn;
  tree isinf_fn;
  tree signbit_call;
  tree isinf_call;
  real_value r;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = *(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10);
  uVar3 = validate_arg(arg,REAL_TYPE);
  if (uVar3 == '\0') {
    tmp = (tree)0x0;
    goto LAB_00113dff;
  }
  if (builtin_index != 0x1db) {
    if (0x1db < builtin_index) goto LAB_00113de2;
    if (builtin_index != 0x1d5) {
      if (builtin_index < 0x1d6) {
        if (builtin_index == 0x1d3) {
          if (**(short **)&arg->field_0x10 == 0xe) {
            uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          }
          else {
            uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
          }
          if ((&mode_class)[uVar5] == '\b') {
LAB_0011309f:
            if (**(short **)&arg->field_0x10 == 0xe) {
              uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
            }
            else {
              uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
            }
            if ((&mode_class)[uVar5] == '\b') {
LAB_00113125:
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
            }
            else {
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              if ((&mode_class)[uVar5] == '\t') goto LAB_00113125;
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              uVar5 = (uint)(byte)(&mode_inner)[uVar5];
            }
            if ((&mode_class)[uVar5] == '\t') {
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              if ((&mode_class)[uVar5] != '\b') {
                if (**(short **)&arg->field_0x10 == 0xe) {
                  uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                }
                if ((&mode_class)[uVar5] != '\t') {
                  if (**(short **)&arg->field_0x10 == 0xe) {
                    uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                  }
                  else {
                    uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                  }
                  uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
                  goto LAB_001133c5;
                }
              }
              if (**(short **)&arg->field_0x10 == 0xe) {
                iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                uVar5 = iVar6 - 0x26;
              }
              else {
                uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
              }
            }
            else {
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              if ((&mode_class)[uVar5] != '\b') {
                if (**(short **)&arg->field_0x10 == 0xe) {
                  uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                }
                if ((&mode_class)[uVar5] != '\t') {
                  if (**(short **)&arg->field_0x10 == 0xe) {
                    uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                  }
                  else {
                    uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                  }
                  uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
                  goto LAB_001133c5;
                }
              }
              if (**(short **)&arg->field_0x10 == 0xe) {
                iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                uVar5 = iVar6 - 0x26;
              }
              else {
                uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
              }
            }
LAB_001133c5:
            if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar5 * 8) + 0x2e) == '\0') ||
               (flag_finite_math_only != 0)) goto LAB_001133f0;
LAB_00113873:
            if (*(short *)arg == 0x18) {
              puVar2 = *(undefined8 **)&arg->field_0x18;
              r._0_8_ = *puVar2;
              r.sig[0] = puVar2[1];
              r.sig[1] = puVar2[2];
              r.sig[2] = puVar2[3];
              cVar4 = real_isfinite(&r);
              tmp = _set_mem_expr;
              if (cVar4 != '\0') {
                tmp = _gen_rtx_CONST_INT;
              }
            }
            else {
              tmp = (tree)0x0;
            }
          }
          else {
            if (**(short **)&arg->field_0x10 == 0xe) {
              uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
            }
            else {
              uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
            }
            if ((&mode_class)[uVar5] == '\t') goto LAB_0011309f;
            if (**(short **)&arg->field_0x10 == 0xe) {
              uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
            }
            else {
              uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
            }
            if ((&mode_class)[uVar5] == '\v') goto LAB_0011309f;
            if (**(short **)&arg->field_0x10 == 0xe) {
              uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
            }
            else {
              uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
            }
            if ((&mode_class)[uVar5] == '\x11') goto LAB_0011309f;
LAB_001133f0:
            if (**(short **)&arg->field_0x10 == 0xe) {
              uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
            }
            else {
              uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
            }
            if ((&mode_class)[uVar5] == '\b') {
LAB_00113508:
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              if ((&mode_class)[uVar5] == '\b') {
LAB_0011358e:
                if (**(short **)&arg->field_0x10 == 0xe) {
                  uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                }
              }
              else {
                if (**(short **)&arg->field_0x10 == 0xe) {
                  uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                }
                if ((&mode_class)[uVar5] == '\t') goto LAB_0011358e;
                if (**(short **)&arg->field_0x10 == 0xe) {
                  uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                }
                uVar5 = (uint)(byte)(&mode_inner)[uVar5];
              }
              if ((&mode_class)[uVar5] == '\t') {
                if (**(short **)&arg->field_0x10 == 0xe) {
                  uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                }
                if ((&mode_class)[uVar5] != '\b') {
                  if (**(short **)&arg->field_0x10 == 0xe) {
                    uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                  }
                  else {
                    uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                  }
                  if ((&mode_class)[uVar5] != '\t') {
                    if (**(short **)&arg->field_0x10 == 0xe) {
                      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                    }
                    else {
                      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                    }
                    uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
                    goto LAB_0011382e;
                  }
                }
                if (**(short **)&arg->field_0x10 == 0xe) {
                  iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                  uVar5 = iVar6 - 0x26;
                }
                else {
                  uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
                }
              }
              else {
                if (**(short **)&arg->field_0x10 == 0xe) {
                  uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                }
                if ((&mode_class)[uVar5] != '\b') {
                  if (**(short **)&arg->field_0x10 == 0xe) {
                    uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                  }
                  else {
                    uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                  }
                  if ((&mode_class)[uVar5] != '\t') {
                    if (**(short **)&arg->field_0x10 == 0xe) {
                      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                    }
                    else {
                      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
                    }
                    uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
                    goto LAB_0011382e;
                  }
                }
                if (**(short **)&arg->field_0x10 == 0xe) {
                  iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
                  uVar5 = iVar6 - 0x26;
                }
                else {
                  uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
                }
              }
LAB_0011382e:
              if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar5 * 8) + 0x2f) != '\0') &&
                 (flag_finite_math_only == 0)) goto LAB_00113873;
            }
            else {
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              if ((&mode_class)[uVar5] == '\t') goto LAB_00113508;
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              if ((&mode_class)[uVar5] == '\v') goto LAB_00113508;
              if (**(short **)&arg->field_0x10 == 0xe) {
                uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
              }
              else {
                uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
              }
              if ((&mode_class)[uVar5] == '\x11') goto LAB_00113508;
            }
            tmp = (tree)omit_one_operand_loc(loc,uVar10,_gen_rtx_CONST_INT,arg);
          }
          goto LAB_00113dff;
        }
        if (builtin_index == 0x1d4) {
          ptVar7 = mathfn_built_in_1(*(tree *)&arg->field_0x10,0xd2,'\0');
          ptVar9 = built_in_decls[469];
          tmp = (tree)0x0;
          ptVar8 = builtin_save_expr(arg);
          if ((ptVar7 != (tree)0x0) && (ptVar9 != (tree)0x0)) {
            ptVar7 = build_call_expr_loc(loc,ptVar7,1,ptVar8);
            ptVar9 = build_call_expr_loc(loc,ptVar9,1,ptVar8);
            uVar10 = fold_build2_stat_loc(loc,0x66,_gen_cmpstrnsi,ptVar7,_set_mem_expr);
            uVar11 = fold_build2_stat_loc(loc,0x66,_gen_cmpstrnsi,ptVar9,_set_mem_expr);
            uVar10 = fold_build3_stat_loc
                               (loc,0x38,_gen_cmpstrnsi,uVar10,_set_mem_offset,_gen_rtx_CONST_INT);
            tmp = (tree)fold_build3_stat_loc(loc,0x38,_gen_cmpstrnsi,uVar11,uVar10,_set_mem_expr);
          }
          goto LAB_00113dff;
        }
      }
LAB_00113de2:
      fancy_abort("builtins.c",0x2557,&DAT_0011bd60);
      tmp = (tree)0x0;
      goto LAB_00113dff;
    }
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\b') {
LAB_00112a37:
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] == '\b') {
LAB_00112abd:
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
      }
      else {
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        if ((&mode_class)[uVar5] == '\t') goto LAB_00112abd;
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        uVar5 = (uint)(byte)(&mode_inner)[uVar5];
      }
      if ((&mode_class)[uVar5] == '\t') {
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        if ((&mode_class)[uVar5] != '\b') {
          if (**(short **)&arg->field_0x10 == 0xe) {
            uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          }
          else {
            uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
          }
          if ((&mode_class)[uVar5] != '\t') {
            if (**(short **)&arg->field_0x10 == 0xe) {
              uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
            }
            else {
              uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
            }
            uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
            goto LAB_00112d5d;
          }
        }
        if (**(short **)&arg->field_0x10 == 0xe) {
          iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          uVar5 = iVar6 - 0x26;
        }
        else {
          uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
        }
      }
      else {
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        if ((&mode_class)[uVar5] != '\b') {
          if (**(short **)&arg->field_0x10 == 0xe) {
            uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          }
          else {
            uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
          }
          if ((&mode_class)[uVar5] != '\t') {
            if (**(short **)&arg->field_0x10 == 0xe) {
              uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
            }
            else {
              uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
            }
            uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
            goto LAB_00112d5d;
          }
        }
        if (**(short **)&arg->field_0x10 == 0xe) {
          iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          uVar5 = iVar6 - 0x26;
        }
        else {
          uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
        }
      }
LAB_00112d5d:
      if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar5 * 8) + 0x2f) != '\0') &&
         (flag_finite_math_only == 0)) {
        if (*(short *)arg == 0x18) {
          puVar2 = *(undefined8 **)&arg->field_0x18;
          r._0_8_ = *puVar2;
          r.sig[0] = puVar2[1];
          r.sig[1] = puVar2[2];
          r.sig[2] = puVar2[3];
          cVar4 = real_isinf(&r);
          tmp = _set_mem_expr;
          if ((cVar4 != '\0') &&
             (cVar4 = real_compare(99,&r,&dconst0), tmp = _set_mem_offset, cVar4 != '\0')) {
            tmp = _gen_rtx_CONST_INT;
          }
        }
        else {
          tmp = (tree)0x0;
        }
        goto LAB_00113dff;
      }
    }
    else {
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] == '\t') goto LAB_00112a37;
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] == '\v') goto LAB_00112a37;
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] == '\x11') goto LAB_00112a37;
    }
    tmp = (tree)omit_one_operand_loc(loc,uVar10,_set_mem_expr,arg);
    goto LAB_00113dff;
  }
  if (**(short **)&arg->field_0x10 == 0xe) {
    uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
  }
  else {
    uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
  }
  if ((&mode_class)[uVar5] == '\b') {
LAB_001139f1:
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\b') {
LAB_00113a77:
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
    }
    else {
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] == '\t') goto LAB_00113a77;
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      uVar5 = (uint)(byte)(&mode_inner)[uVar5];
    }
    if ((&mode_class)[uVar5] == '\t') {
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] != '\b') {
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        if ((&mode_class)[uVar5] != '\t') {
          if (**(short **)&arg->field_0x10 == 0xe) {
            uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          }
          else {
            uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
          }
          uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
          goto LAB_00113d17;
        }
      }
      if (**(short **)&arg->field_0x10 == 0xe) {
        iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        uVar5 = iVar6 - 0x26;
      }
      else {
        uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
      }
    }
    else {
      if (**(short **)&arg->field_0x10 == 0xe) {
        uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
      }
      else {
        uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
      }
      if ((&mode_class)[uVar5] != '\b') {
        if (**(short **)&arg->field_0x10 == 0xe) {
          uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        }
        else {
          uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
        }
        if ((&mode_class)[uVar5] != '\t') {
          if (**(short **)&arg->field_0x10 == 0xe) {
            uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
          }
          else {
            uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
          }
          uVar5 = (byte)(&mode_inner)[uVar5] - 0x26;
          goto LAB_00113d17;
        }
      }
      if (**(short **)&arg->field_0x10 == 0xe) {
        iVar6 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
        uVar5 = iVar6 - 0x26;
      }
      else {
        uVar5 = *(byte *)(*(long *)&arg->field_0x10 + 0x3e) - 0x26;
      }
    }
LAB_00113d17:
    if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar5 * 8) + 0x2e) != '\0') &&
       (flag_finite_math_only == 0)) {
      if (*(short *)arg == 0x18) {
        puVar2 = *(undefined8 **)&arg->field_0x18;
        r._0_8_ = *puVar2;
        r.sig[0] = puVar2[1];
        r.sig[1] = puVar2[2];
        r.sig[2] = puVar2[3];
        cVar4 = real_isnan(&r);
        tmp = _set_mem_expr;
        if (cVar4 != '\0') {
          tmp = _gen_rtx_CONST_INT;
        }
      }
      else {
        ptVar9 = builtin_save_expr(arg);
        tmp = (tree)fold_build2_stat_loc(loc,0x67,uVar10,ptVar9,ptVar9);
      }
      goto LAB_00113dff;
    }
  }
  else {
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\t') goto LAB_001139f1;
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\v') goto LAB_001139f1;
    if (**(short **)&arg->field_0x10 == 0xe) {
      uVar5 = vector_type_mode(*(undefined8 *)&arg->field_0x10);
    }
    else {
      uVar5 = (uint)*(byte *)(*(long *)&arg->field_0x10 + 0x3e);
    }
    if ((&mode_class)[uVar5] == '\x11') goto LAB_001139f1;
  }
  tmp = (tree)omit_one_operand_loc(loc,uVar10,_set_mem_expr,arg);
LAB_00113dff:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return tmp;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_fpclassify(location_t loc,tree exp)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  short *psVar4;
  uint uVar5;
  uchar uVar6;
  uint uVar7;
  tree ptVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  machine_mode mode;
  tree res;
  tree fp_nan;
  tree fp_infinite;
  tree fp_normal;
  tree fp_subnormal;
  tree fp_zero;
  tree arg;
  tree type;
  tree tmp;
  real_value r;
  char buf [128];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = validate_arglist(exp,8,8,8,8,8,9,0x13);
  if (uVar6 == '\0') {
    res = (tree)0x0;
  }
  else {
    uVar2 = *(undefined8 *)&exp->field_0x40;
    uVar13 = *(undefined8 *)&exp->field_0x48;
    uVar12 = *(undefined8 *)&exp->field_0x50;
    uVar10 = *(undefined8 *)&exp->field_0x58;
    uVar11 = *(undefined8 *)&exp->field_0x60;
    lVar3 = *(long *)&exp->field_0x68;
    psVar4 = *(short **)(lVar3 + 0x10);
    if (*psVar4 == 0xe) {
      uVar7 = vector_type_mode(psVar4);
    }
    else {
      uVar7 = (uint)*(byte *)(psVar4 + 0x1f);
    }
    ptVar8 = (tree)fold_build1_stat_loc(loc,0x52,psVar4,lVar3);
    ptVar8 = builtin_save_expr(ptVar8);
    uVar9 = build_real(psVar4);
    uVar9 = fold_build2_stat_loc(loc,0x65,_gen_cmpstrnsi,ptVar8,uVar9);
    uVar10 = fold_build3_stat_loc(loc,0x38,_gen_cmpstrnsi,uVar9,uVar11,uVar10);
    sprintf(buf,"0x1p%d",
            (ulong)(*(int *)(*(long *)(&real_format_for_mode + (ulong)(uVar7 - 0x26) * 8) + 0x1c) -
                   1));
    real_from_string(&r,buf);
    uVar11 = build_real(psVar4);
    uVar11 = fold_build2_stat_loc(loc,100,_gen_cmpstrnsi,ptVar8,uVar11);
    res = (tree)fold_build3_stat_loc(loc,0x38,_gen_cmpstrnsi,uVar11,uVar12,uVar10);
    if (((((&mode_class)[uVar7] == '\b') || ((&mode_class)[uVar7] == '\t')) ||
        ((&mode_class)[uVar7] == '\v')) || ((&mode_class)[uVar7] == '\x11')) {
      uVar5 = uVar7;
      if (((&mode_class)[uVar7] != '\b') && ((&mode_class)[uVar7] != '\t')) {
        uVar5 = (uint)(byte)(&mode_inner)[uVar7];
      }
      if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)(uVar5 - 0x26) * 8) + 0x2f) != '\0')
         && (flag_finite_math_only == 0)) {
        real_inf(&r);
        uVar12 = build_real(psVar4);
        uVar12 = fold_build2_stat_loc(loc,0x65,_gen_cmpstrnsi,ptVar8,uVar12);
        res = (tree)fold_build3_stat_loc(loc,0x38,_gen_cmpstrnsi,uVar12,uVar13,res);
      }
    }
    if (((((&mode_class)[uVar7] == '\b') || ((&mode_class)[uVar7] == '\t')) ||
        ((&mode_class)[uVar7] == '\v')) || ((&mode_class)[uVar7] == '\x11')) {
      if (((&mode_class)[uVar7] != '\b') && ((&mode_class)[uVar7] != '\t')) {
        uVar7 = (uint)(byte)(&mode_inner)[uVar7];
      }
      if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)(uVar7 - 0x26) * 8) + 0x2e) != '\0')
         && (flag_finite_math_only == 0)) {
        uVar13 = fold_build2_stat_loc(loc,0x68,_gen_cmpstrnsi,ptVar8,ptVar8);
        res = (tree)fold_build3_stat_loc(loc,0x38,_gen_cmpstrnsi,uVar13,res,uVar2);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_unordered_cmp
               (location_t loc,tree fndecl,tree arg0,tree arg1,tree_code unordered_code,
               tree_code ordered_code)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  tree ptVar4;
  tree ptVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  tree ptVar10;
  tree_code code0;
  tree_code code1;
  tree_code code;
  tree cmp_type;
  tree type;
  tree type0;
  tree type1;
  
  uVar3 = *(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10);
  cmp_type = (tree)0x0;
  ptVar10 = *(tree *)&arg0->field_0x10;
  ptVar4 = *(tree *)&arg1->field_0x10;
  sVar1 = *(short *)ptVar10;
  sVar2 = *(short *)ptVar4;
  if ((sVar1 == 9) && (sVar2 == 9)) {
    ptVar5 = ptVar4;
    if ((*(ushort *)&ptVar4->field_0x3c & 0x3ff) <= (*(ushort *)&ptVar10->field_0x3c & 0x3ff)) {
      ptVar5 = ptVar10;
    }
  }
  else if (((sVar1 != 9) || (ptVar5 = ptVar10, sVar2 != 8)) &&
          ((ptVar5 = cmp_type, sVar1 == 8 && (sVar2 == 9)))) {
    ptVar5 = ptVar4;
  }
  cmp_type = ptVar5;
  lVar8 = fold_convert_loc(loc,cmp_type,arg0);
  uVar9 = fold_convert_loc(loc,cmp_type,arg1);
  if (unordered_code != UNORDERED_EXPR) {
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
    }
    if ((&mode_class)[uVar6] == '\b') {
LAB_00114a81:
      if (**(short **)(lVar8 + 0x10) == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
      }
      if ((&mode_class)[uVar6] == '\b') {
LAB_00114b07:
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
      }
      else {
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
        if ((&mode_class)[uVar6] == '\t') goto LAB_00114b07;
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
        uVar6 = (uint)(byte)(&mode_inner)[uVar6];
      }
      if ((&mode_class)[uVar6] == '\t') {
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
        if ((&mode_class)[uVar6] != '\b') {
          if (**(short **)(lVar8 + 0x10) == 0xe) {
            uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
          }
          else {
            uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
          }
          if ((&mode_class)[uVar6] != '\t') {
            if (**(short **)(lVar8 + 0x10) == 0xe) {
              uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
            }
            else {
              uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
            }
            uVar6 = (byte)(&mode_inner)[uVar6] - 0x26;
            goto LAB_00114da7;
          }
        }
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          iVar7 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
          uVar6 = iVar7 - 0x26;
        }
        else {
          uVar6 = *(byte *)(*(long *)(lVar8 + 0x10) + 0x3e) - 0x26;
        }
      }
      else {
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
        if ((&mode_class)[uVar6] != '\b') {
          if (**(short **)(lVar8 + 0x10) == 0xe) {
            uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
          }
          else {
            uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
          }
          if ((&mode_class)[uVar6] != '\t') {
            if (**(short **)(lVar8 + 0x10) == 0xe) {
              uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
            }
            else {
              uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
            }
            uVar6 = (byte)(&mode_inner)[uVar6] - 0x26;
            goto LAB_00114da7;
          }
        }
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          iVar7 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
          uVar6 = iVar7 - 0x26;
        }
        else {
          uVar6 = *(byte *)(*(long *)(lVar8 + 0x10) + 0x3e) - 0x26;
        }
      }
LAB_00114da7:
      if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar6 * 8) + 0x2e) != '\0') &&
         (flag_finite_math_only == 0)) goto LAB_00114dd6;
    }
    else {
      if (**(short **)(lVar8 + 0x10) == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
      }
      if ((&mode_class)[uVar6] == '\t') goto LAB_00114a81;
      if (**(short **)(lVar8 + 0x10) == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
      }
      if ((&mode_class)[uVar6] == '\v') goto LAB_00114a81;
      if (**(short **)(lVar8 + 0x10) == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
      }
      if ((&mode_class)[uVar6] == '\x11') goto LAB_00114a81;
    }
    unordered_code = ordered_code;
LAB_00114dd6:
    uVar9 = fold_build2_stat_loc(loc,unordered_code,uVar3,lVar8,uVar9);
    ptVar10 = (tree)fold_build1_stat_loc(loc,0x60,uVar3,uVar9);
    return ptVar10;
  }
  if (**(short **)(lVar8 + 0x10) == 0xe) {
    uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
  }
  else {
    uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
  }
  if ((&mode_class)[uVar6] != '\b') {
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
    }
    if ((&mode_class)[uVar6] != '\t') {
      if (**(short **)(lVar8 + 0x10) == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
      }
      if ((&mode_class)[uVar6] != '\v') {
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
        if ((&mode_class)[uVar6] != '\x11') goto LAB_00114921;
      }
    }
  }
  if (**(short **)(lVar8 + 0x10) == 0xe) {
    uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
  }
  else {
    uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
  }
  if ((&mode_class)[uVar6] == '\b') {
LAB_0011465a:
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
    }
  }
  else {
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
    }
    if ((&mode_class)[uVar6] == '\t') goto LAB_0011465a;
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
    }
    uVar6 = (uint)(byte)(&mode_inner)[uVar6];
  }
  if ((&mode_class)[uVar6] == '\t') {
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
    }
    if ((&mode_class)[uVar6] != '\b') {
      if (**(short **)(lVar8 + 0x10) == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
      }
      if ((&mode_class)[uVar6] != '\t') {
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
        uVar6 = (byte)(&mode_inner)[uVar6] - 0x26;
        goto LAB_001148fa;
      }
    }
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      iVar7 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      uVar6 = iVar7 - 0x26;
    }
    else {
      uVar6 = *(byte *)(*(long *)(lVar8 + 0x10) + 0x3e) - 0x26;
    }
  }
  else {
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
    }
    else {
      uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
    }
    if ((&mode_class)[uVar6] != '\b') {
      if (**(short **)(lVar8 + 0x10) == 0xe) {
        uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      }
      else {
        uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
      }
      if ((&mode_class)[uVar6] != '\t') {
        if (**(short **)(lVar8 + 0x10) == 0xe) {
          uVar6 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
        }
        else {
          uVar6 = (uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x3e);
        }
        uVar6 = (byte)(&mode_inner)[uVar6] - 0x26;
        goto LAB_001148fa;
      }
    }
    if (**(short **)(lVar8 + 0x10) == 0xe) {
      iVar7 = vector_type_mode(*(undefined8 *)(lVar8 + 0x10));
      uVar6 = iVar7 - 0x26;
    }
    else {
      uVar6 = *(byte *)(*(long *)(lVar8 + 0x10) + 0x3e) - 0x26;
    }
  }
LAB_001148fa:
  if ((*(char *)(*(long *)(&real_format_for_mode + (ulong)uVar6 * 8) + 0x2e) != '\0') &&
     (flag_finite_math_only == 0)) {
    ptVar10 = (tree)fold_build2_stat_loc(loc,0x67,uVar3,lVar8,uVar9);
    return ptVar10;
  }
LAB_00114921:
  ptVar10 = (tree)omit_two_operands_loc(loc,uVar3,_set_mem_expr,lVar8,uVar9);
  return ptVar10;
}



tree fold_builtin_0(location_t loc,tree fndecl,uchar ignore)

{
  uint uVar1;
  tree ptVar2;
  built_in_function fcode;
  tree type;
  
  ptVar2 = *(tree *)(*(long *)&fndecl->field_0x10 + 0x10);
  uVar1 = (uint)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  if (uVar1 == 0x1a7) {
    ptVar2 = fold_builtin_classify_type((tree)0x0);
    return ptVar2;
  }
  if (uVar1 < 0x1a8) {
    if (uVar1 < 0x5a) {
      if (0x56 < uVar1) {
        ptVar2 = fold_builtin_inf(loc,ptVar2,0);
        return ptVar2;
      }
    }
    else if (uVar1 - 0x60 < 6) {
      ptVar2 = fold_builtin_inf(loc,ptVar2,1);
      return ptVar2;
    }
  }
  return (tree)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_1(location_t loc,tree fndecl,tree arg0,uchar ignore)

{
  uchar uVar1;
  built_in_function fcode_00;
  undefined8 uVar2;
  tree ptVar3;
  built_in_function fcode;
  tree val;
  tree type;
  tree ret_1;
  tree ret;
  
  ptVar3 = *(tree *)(*(long *)&fndecl->field_0x10 + 0x10);
  fcode_00 = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  switch(fcode_00) {
  case BUILT_IN_ACOS:
  case BUILT_IN_ACOSF:
  case BUILT_IN_ACOSL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_ACOSH:
  case BUILT_IN_ACOSHF:
  case BUILT_IN_ACOSHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_ASIN:
  case BUILT_IN_ASINF:
  case BUILT_IN_ASINL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_ASINH:
  case BUILT_IN_ASINHF:
  case BUILT_IN_ASINHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_ATAN:
  case BUILT_IN_ATANF:
  case BUILT_IN_ATANL:
    ptVar3 = (tree)0x0;
    break;
  default:
    goto LAB_001155fe;
  case BUILT_IN_ATANH:
  case BUILT_IN_ATANHF:
  case BUILT_IN_ATANHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CBRT:
  case BUILT_IN_CBRTF:
  case BUILT_IN_CBRTL:
    ptVar3 = fold_builtin_cbrt(loc,arg0,ptVar3);
    break;
  case BUILT_IN_CEIL:
  case BUILT_IN_CEILF:
  case BUILT_IN_CEILL:
    ptVar3 = fold_builtin_ceil(loc,fndecl,arg0);
    break;
  case BUILT_IN_COS:
  case BUILT_IN_COSF:
  case BUILT_IN_COSL:
    ptVar3 = fold_builtin_cos(loc,arg0,ptVar3,fndecl);
    break;
  case BUILT_IN_COSH:
  case BUILT_IN_COSHF:
  case BUILT_IN_COSHL:
    ptVar3 = fold_builtin_cosh(loc,arg0,ptVar3,fndecl);
    break;
  case BUILT_IN_ERF:
  case BUILT_IN_ERFF:
  case BUILT_IN_ERFL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_ERFC:
  case BUILT_IN_ERFCF:
  case BUILT_IN_ERFCL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_EXP:
  case BUILT_IN_EXPF:
  case BUILT_IN_EXPL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_EXP10:
  case BUILT_IN_EXP10F:
  case BUILT_IN_EXP10L:
  case 0xb5:
  case 0xb6:
  case 0xb7:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_EXP2:
  case BUILT_IN_EXP2F:
  case BUILT_IN_EXP2L:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_EXPM1:
  case BUILT_IN_EXPM1F:
  case BUILT_IN_EXPM1L:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_FABS:
  case BUILT_IN_FABSF:
  case BUILT_IN_FABSL:
    ptVar3 = fold_builtin_fabs(loc,arg0,ptVar3);
    break;
  case BUILT_IN_FLOOR:
  case BUILT_IN_FLOORF:
  case BUILT_IN_FLOORL:
    ptVar3 = fold_builtin_floor(loc,fndecl,arg0);
    break;
  case BUILT_IN_ILOGB:
  case BUILT_IN_ILOGBF:
  case BUILT_IN_ILOGBL:
  case 0x94:
  case 0x95:
  case 0x96:
    ptVar3 = fold_builtin_logb(loc,arg0,ptVar3);
    break;
  case BUILT_IN_J0:
  case BUILT_IN_J0F:
  case BUILT_IN_J0L:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_J1:
  case BUILT_IN_J1F:
  case BUILT_IN_J1L:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_LCEIL:
  case BUILT_IN_LCEILF:
  case BUILT_IN_LCEILL:
  case BUILT_IN_LFLOOR:
  case BUILT_IN_LFLOORF:
  case BUILT_IN_LFLOORL:
  case BUILT_IN_LLCEIL:
  case BUILT_IN_LLCEILF:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x9c:
  case 0x9d:
  case 0x9e:
    ptVar3 = fold_builtin_int_roundingfn(loc,fndecl,arg0);
    break;
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x99:
  case 0x9a:
  case 0x9b:
    ptVar3 = fold_fixed_mathfn(loc,fndecl,arg0);
    break;
  case 0x8a:
  case 0x97:
  case 0x98:
    ptVar3 = (tree)0x0;
    break;
  case 0x8b:
  case 0x8c:
  case 0x8d:
    ptVar3 = (tree)0x0;
    break;
  case 0x8e:
  case 0x8f:
  case 0x90:
    ptVar3 = (tree)0x0;
    break;
  case 0x91:
  case 0x92:
  case 0x93:
    ptVar3 = (tree)0x0;
    break;
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
    ptVar3 = fold_builtin_nan(arg0,ptVar3,1);
    break;
  case 0xa8:
  case 0xa9:
  case 0xaa:
    ptVar3 = fold_builtin_nan(arg0,ptVar3,0);
    break;
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xc3:
  case 0xc4:
  case 0xc5:
    ptVar3 = fold_trunc_transparent_mathfn(loc,fndecl,arg0);
    break;
  case 0xc6:
  case 199:
  case 200:
    ptVar3 = fold_builtin_round(loc,fndecl,arg0);
    break;
  case 0xd2:
  case 0xd3:
  case 0xd4:
    ptVar3 = fold_builtin_signbit(loc,arg0,ptVar3);
    break;
  case 0xd8:
  case 0xd9:
  case 0xda:
    ptVar3 = fold_builtin_significand(loc,arg0,ptVar3);
    break;
  case 0xdb:
  case 0xdf:
  case 0xe3:
    ptVar3 = (tree)0x0;
    break;
  case 0xe0:
  case 0xe1:
  case 0xe2:
    ptVar3 = (tree)0x0;
    break;
  case 0xe4:
  case 0xe5:
  case 0xe6:
    ptVar3 = fold_builtin_sqrt(loc,arg0,ptVar3);
    break;
  case 0xe7:
  case 0xe8:
  case 0xec:
    ptVar3 = fold_builtin_tan(arg0,ptVar3);
    break;
  case 0xe9:
  case 0xea:
  case 0xeb:
    ptVar3 = (tree)0x0;
    break;
  case 0xed:
  case 0xee:
  case 0xef:
    ptVar3 = (tree)0x0;
    break;
  case 0xf0:
  case 0xf1:
  case 0xf2:
    ptVar3 = fold_builtin_trunc(loc,fndecl,arg0);
    break;
  case 0xf3:
  case 0xf4:
  case 0xf5:
    ptVar3 = (tree)0x0;
    break;
  case 0xf6:
  case 0xf7:
  case 0xf8:
    ptVar3 = (tree)0x0;
    break;
  case 0xfc:
  case 0xfd:
  case 0xfe:
    ptVar3 = fold_builtin_cabs(loc,arg0,ptVar3,fndecl);
    break;
  case 0xff:
  case BUILT_IN_CACOSF:
  case BUILT_IN_CACOSL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CACOSH:
  case BUILT_IN_CACOSHF:
  case BUILT_IN_CACOSHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CARG:
  case BUILT_IN_CARGF:
  case BUILT_IN_CARGL:
    ptVar3 = fold_builtin_carg(loc,arg0,ptVar3);
    break;
  case BUILT_IN_CASIN:
  case BUILT_IN_CASINF:
  case BUILT_IN_CASINL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CASINH:
  case BUILT_IN_CASINHF:
  case BUILT_IN_CASINHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CATAN:
  case BUILT_IN_CATANF:
  case BUILT_IN_CATANL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CATANH:
  case BUILT_IN_CATANHF:
  case BUILT_IN_CATANHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CCOS:
  case BUILT_IN_CCOSF:
  case BUILT_IN_CCOSL:
    ptVar3 = fold_builtin_ccos(loc,arg0,ptVar3,fndecl,'\0');
    break;
  case BUILT_IN_CCOSH:
  case BUILT_IN_CCOSHF:
  case BUILT_IN_CCOSHL:
    ptVar3 = fold_builtin_ccos(loc,arg0,ptVar3,fndecl,'\x01');
    break;
  case BUILT_IN_CEXP:
  case BUILT_IN_CEXPF:
  case BUILT_IN_CEXPL:
    ptVar3 = fold_builtin_cexp(loc,arg0,ptVar3);
    break;
  case BUILT_IN_CEXPI:
  case BUILT_IN_CEXPIF:
  case BUILT_IN_CEXPIL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CIMAG:
  case BUILT_IN_CIMAGF:
  case BUILT_IN_CIMAGL:
    uVar1 = validate_arg(arg0,COMPLEX_TYPE);
    if ((uVar1 != '\0') && (**(short **)(*(long *)&arg0->field_0x10 + 0x10) == 9)) {
      uVar2 = fold_build1_stat_loc(loc,0x2c,ptVar3,arg0);
      ptVar3 = (tree)non_lvalue_loc(loc,uVar2);
      return ptVar3;
    }
    goto LAB_001155fe;
  case BUILT_IN_CLOG:
  case BUILT_IN_CLOGF:
  case BUILT_IN_CLOGL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CONJ:
  case BUILT_IN_CONJF:
  case BUILT_IN_CONJL:
    uVar1 = validate_arg(arg0,COMPLEX_TYPE);
    if ((uVar1 != '\0') && (**(short **)(*(long *)&arg0->field_0x10 + 0x10) == 9)) {
      ptVar3 = (tree)fold_build1_stat_loc(loc,0x7c,ptVar3,arg0);
      return ptVar3;
    }
    goto LAB_001155fe;
  case BUILT_IN_CREAL:
  case BUILT_IN_CREALF:
  case BUILT_IN_CREALL:
    uVar1 = validate_arg(arg0,COMPLEX_TYPE);
    if ((uVar1 != '\0') && (**(short **)(*(long *)&arg0->field_0x10 + 0x10) == 9)) {
      uVar2 = fold_build1_stat_loc(loc,0x2b,ptVar3,arg0);
      ptVar3 = (tree)non_lvalue_loc(loc,uVar2);
      return ptVar3;
    }
LAB_001155fe:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CSIN:
  case BUILT_IN_CSINF:
  case BUILT_IN_CSINL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CSINH:
  case BUILT_IN_CSINHF:
  case BUILT_IN_CSINHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CSQRT:
  case BUILT_IN_CSQRTF:
  case BUILT_IN_CSQRTL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CTAN:
  case BUILT_IN_CTANF:
  case BUILT_IN_CTANL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_CTANH:
  case BUILT_IN_CTANHF:
  case BUILT_IN_CTANHL:
    ptVar3 = (tree)0x0;
    break;
  case BUILT_IN_STRLEN:
    ptVar3 = fold_builtin_strlen(loc,ptVar3,arg0);
    break;
  case BUILT_IN_PRINTF:
  case BUILT_IN_PRINTF_UNLOCKED:
  case BUILT_IN_VPRINTF:
    ptVar3 = fold_builtin_printf(loc,fndecl,arg0,(tree)0x0,ignore,fcode_00);
    break;
  case BUILT_IN_ISASCII:
    ptVar3 = fold_builtin_isascii(loc,arg0);
    break;
  case BUILT_IN_ISDIGIT:
    ptVar3 = fold_builtin_isdigit(loc,arg0);
    break;
  case BUILT_IN_TOASCII:
    ptVar3 = fold_builtin_toascii(loc,arg0);
    break;
  case BUILT_IN_ABS:
  case BUILT_IN_IMAXABS:
  case BUILT_IN_LABS:
  case BUILT_IN_LLABS:
    ptVar3 = fold_builtin_abs(loc,arg0,ptVar3);
    break;
  case BUILT_IN_BSWAP32:
  case BUILT_IN_BSWAP64:
    ptVar3 = fold_builtin_bswap(fndecl,arg0);
    break;
  case BUILT_IN_CLASSIFY_TYPE:
    ptVar3 = fold_builtin_classify_type(arg0);
    break;
  case BUILT_IN_CLZ:
  case BUILT_IN_CLZL:
  case BUILT_IN_CLZLL:
  case BUILT_IN_CTZ:
  case BUILT_IN_CTZL:
  case BUILT_IN_CTZLL:
  case BUILT_IN_FFS:
  case BUILT_IN_FFSL:
  case BUILT_IN_FFSLL:
  case BUILT_IN_PARITY:
  case BUILT_IN_PARITYL:
  case BUILT_IN_PARITYLL:
  case BUILT_IN_POPCOUNT:
  case BUILT_IN_POPCOUNTL:
  case BUILT_IN_POPCOUNTLL:
    ptVar3 = fold_builtin_bitop(fndecl,arg0);
    break;
  case BUILT_IN_CONSTANT_P:
    ptVar3 = fold_builtin_constant_p(arg0);
    if ((ptVar3 == (tree)0x0) && (optimize == 0)) {
      ptVar3 = _set_mem_expr;
    }
    break;
  case BUILT_IN_FINITE:
  case BUILT_IN_FINITEF:
  case BUILT_IN_FINITEL:
  case BUILT_IN_FINITED32:
  case BUILT_IN_FINITED64:
  case BUILT_IN_FINITED128:
  case BUILT_IN_ISFINITE:
    ptVar3 = fold_builtin_classify(loc,fndecl,arg0,0x1d3);
    if (ptVar3 == (tree)0x0) {
      ptVar3 = fold_builtin_interclass_mathfn(loc,fndecl,arg0);
    }
    break;
  case BUILT_IN_ISINF_SIGN:
    ptVar3 = fold_builtin_classify(loc,fndecl,arg0,0x1d4);
    break;
  case BUILT_IN_ISINF:
  case BUILT_IN_ISINFF:
  case BUILT_IN_ISINFL:
  case BUILT_IN_ISINFD32:
  case BUILT_IN_ISINFD64:
  case BUILT_IN_ISINFD128:
    ptVar3 = fold_builtin_classify(loc,fndecl,arg0,0x1d5);
    if (ptVar3 == (tree)0x0) {
      ptVar3 = fold_builtin_interclass_mathfn(loc,fndecl,arg0);
    }
    break;
  case BUILT_IN_ISNAN:
  case BUILT_IN_ISNANF:
  case BUILT_IN_ISNANL:
  case BUILT_IN_ISNAND32:
  case BUILT_IN_ISNAND64:
  case BUILT_IN_ISNAND128:
    ptVar3 = fold_builtin_classify(loc,fndecl,arg0,0x1db);
    break;
  case BUILT_IN_ISNORMAL:
    ptVar3 = fold_builtin_interclass_mathfn(loc,fndecl,arg0);
  }
  return ptVar3;
}



tree fold_builtin_2(location_t loc,tree fndecl,tree arg0,tree arg1,uchar ignore)

{
  uchar uVar1;
  built_in_function fcode_00;
  tree ptVar2;
  built_in_function fcode;
  tree type;
  tree fn;
  
  ptVar2 = *(tree *)(*(long *)&fndecl->field_0x10 + 0x10);
  fcode_00 = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  switch(fcode_00) {
  case BUILT_IN_ATAN2:
  case BUILT_IN_ATAN2F:
  case BUILT_IN_ATAN2L:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_COPYSIGN:
  case BUILT_IN_COPYSIGNF:
  case BUILT_IN_COPYSIGNL:
    ptVar2 = fold_builtin_copysign(loc,fndecl,arg0,arg1,ptVar2);
    break;
  case BUILT_IN_DREM:
  case BUILT_IN_DREMF:
  case BUILT_IN_DREML:
  case 0xbd:
  case 0xbe:
  case 0xbf:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_FDIM:
  case BUILT_IN_FDIMF:
  case BUILT_IN_FDIML:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_FMAX:
  case BUILT_IN_FMAXF:
  case BUILT_IN_FMAXL:
    ptVar2 = fold_builtin_fmin_fmax(loc,arg0,arg1,ptVar2,'\x01');
    break;
  case BUILT_IN_FMIN:
  case BUILT_IN_FMINF:
  case BUILT_IN_FMINL:
    ptVar2 = fold_builtin_fmin_fmax(loc,arg0,arg1,ptVar2,'\0');
    break;
  case BUILT_IN_FREXP:
  case BUILT_IN_FREXPF:
  case BUILT_IN_FREXPL:
    ptVar2 = fold_builtin_frexp(loc,arg0,arg1,ptVar2);
    break;
  case BUILT_IN_GAMMA_R:
  case BUILT_IN_GAMMAF_R:
  case BUILT_IN_GAMMAL_R:
  case BUILT_IN_LGAMMA_R:
  case BUILT_IN_LGAMMAF_R:
  case BUILT_IN_LGAMMAL_R:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_HYPOT:
  case BUILT_IN_HYPOTF:
  case BUILT_IN_HYPOTL:
    ptVar2 = fold_builtin_hypot(loc,fndecl,arg0,arg1,ptVar2);
    break;
  case BUILT_IN_JN:
  case BUILT_IN_JNF:
  case BUILT_IN_JNL:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_LDEXP:
  case BUILT_IN_LDEXPF:
  case BUILT_IN_LDEXPL:
    ptVar2 = fold_builtin_load_exponent(loc,arg0,arg1,ptVar2,'\x01');
    break;
  case 0x9f:
  case 0xa0:
  case 0xa1:
    ptVar2 = fold_builtin_modf(loc,arg0,arg1,ptVar2);
    break;
  case 0xb4:
  case 0xb8:
  case 0xbc:
    ptVar2 = fold_builtin_pow(loc,fndecl,arg0,arg1,ptVar2);
    break;
  case 0xb9:
  case 0xba:
  case 0xbb:
    ptVar2 = fold_builtin_powi(loc,fndecl,arg0,arg1,ptVar2);
    break;
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
    ptVar2 = fold_builtin_load_exponent(loc,arg0,arg1,ptVar2,'\0');
    break;
  case 0xf9:
  case 0xfa:
  case 0xfb:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_CPOW:
  case BUILT_IN_CPOWF:
  case BUILT_IN_CPOWL:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_BZERO:
    ptVar2 = fold_builtin_bzero(loc,arg0,arg1,ignore);
    break;
  case BUILT_IN_INDEX:
  case BUILT_IN_STRCHR:
    ptVar2 = fold_builtin_strchr(loc,arg0,arg1,ptVar2);
    break;
  case BUILT_IN_RINDEX:
  case BUILT_IN_STRRCHR:
    ptVar2 = fold_builtin_strrchr(loc,arg0,arg1,ptVar2);
    break;
  case BUILT_IN_STPCPY:
    if (ignore == '\0') {
      ptVar2 = fold_builtin_stpcpy(loc,fndecl,arg0,arg1);
      return ptVar2;
    }
    if (implicit_built_in_decls[341] != (tree)0x0) {
      ptVar2 = build_call_expr_loc(loc,implicit_built_in_decls[341],2,arg0,arg1);
      return ptVar2;
    }
  default:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_STRCAT:
    ptVar2 = fold_builtin_strcat(loc,arg0,arg1);
    break;
  case BUILT_IN_STRCMP:
    ptVar2 = fold_builtin_strcmp(loc,arg0,arg1);
    break;
  case BUILT_IN_STRCPY:
    ptVar2 = fold_builtin_strcpy(loc,fndecl,arg0,arg1,(tree)0x0);
    break;
  case BUILT_IN_STRCSPN:
    ptVar2 = fold_builtin_strcspn(loc,arg0,arg1);
    break;
  case BUILT_IN_STRPBRK:
    ptVar2 = fold_builtin_strpbrk(loc,arg0,arg1,ptVar2);
    break;
  case BUILT_IN_STRSPN:
    ptVar2 = fold_builtin_strspn(loc,arg0,arg1);
    break;
  case BUILT_IN_STRSTR:
    ptVar2 = fold_builtin_strstr(loc,arg0,arg1,ptVar2);
    break;
  case BUILT_IN_FPRINTF:
  case BUILT_IN_FPRINTF_UNLOCKED:
  case BUILT_IN_VFPRINTF:
    ptVar2 = fold_builtin_fprintf(loc,fndecl,arg0,arg1,(tree)0x0,ignore,fcode_00);
    break;
  case BUILT_IN_FPUTS:
    ptVar2 = fold_builtin_fputs(loc,arg0,arg1,ignore,'\0',(tree)0x0);
    break;
  case BUILT_IN_FPUTS_UNLOCKED:
    ptVar2 = fold_builtin_fputs(loc,arg0,arg1,ignore,'\x01',(tree)0x0);
    break;
  case BUILT_IN_PRINTF:
  case BUILT_IN_PRINTF_UNLOCKED:
  case BUILT_IN_VPRINTF:
    ptVar2 = fold_builtin_printf(loc,fndecl,arg0,arg1,ignore,fcode_00);
    break;
  case BUILT_IN_SPRINTF:
    ptVar2 = fold_builtin_sprintf(loc,arg0,arg1,(tree)0x0,(uint)ignore);
    break;
  case BUILT_IN_EXPECT:
    ptVar2 = fold_builtin_expect(loc,arg0,arg1);
    break;
  case BUILT_IN_ISGREATER:
    ptVar2 = fold_builtin_unordered_cmp(loc,fndecl,arg0,arg1,UNLE_EXPR,LE_EXPR);
    break;
  case BUILT_IN_ISGREATEREQUAL:
    ptVar2 = fold_builtin_unordered_cmp(loc,fndecl,arg0,arg1,UNLT_EXPR,LT_EXPR);
    break;
  case BUILT_IN_ISLESS:
    ptVar2 = fold_builtin_unordered_cmp(loc,fndecl,arg0,arg1,UNGE_EXPR,GE_EXPR);
    break;
  case BUILT_IN_ISLESSEQUAL:
    ptVar2 = fold_builtin_unordered_cmp(loc,fndecl,arg0,arg1,UNGT_EXPR,GT_EXPR);
    break;
  case BUILT_IN_ISLESSGREATER:
    ptVar2 = fold_builtin_unordered_cmp(loc,fndecl,arg0,arg1,UNEQ_EXPR,EQ_EXPR);
    break;
  case BUILT_IN_ISUNORDERED:
    ptVar2 = fold_builtin_unordered_cmp(loc,fndecl,arg0,arg1,UNORDERED_EXPR,NOP_EXPR);
    break;
  case BUILT_IN_OBJECT_SIZE:
    ptVar2 = fold_builtin_object_size(arg0,arg1);
    break;
  case BUILT_IN_PRINTF_CHK:
  case BUILT_IN_VPRINTF_CHK:
    uVar1 = validate_arg(arg0,INTEGER_TYPE);
    if ((uVar1 == '\0') || ((arg0->field_0x2 & 1) != 0)) {
      ptVar2 = (tree)0x0;
    }
    else {
      ptVar2 = fold_builtin_printf(loc,fndecl,arg1,(tree)0x0,ignore,fcode_00);
    }
  }
  return ptVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_3(location_t loc,tree fndecl,tree arg0,tree arg1,tree arg2,uchar ignore)

{
  uchar uVar1;
  built_in_function fcode_00;
  tree ptVar2;
  built_in_function fcode;
  tree type;
  
  ptVar2 = *(tree *)(*(long *)&fndecl->field_0x10 + 0x10);
  fcode_00 = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  if ((uint)fcode_00 < 0x222) {
    if ((uint)fcode_00 < 0x215) {
      if ((uint)fcode_00 < 0x178) {
        if ((uint)fcode_00 < 0x144) {
          if ((uint)fcode_00 < 0xdf) {
            if (0xdb < (uint)fcode_00) {
              ptVar2 = fold_builtin_sincos(loc,arg0,arg1,arg2);
              return ptVar2;
            }
            if ((uint)fcode_00 < 0x45) {
              if (0x41 < (uint)fcode_00) {
                return (tree)0x0;
              }
            }
            else if ((uint)(fcode_00 + 0xffffff40) < 3) {
              return (tree)0x0;
            }
          }
        }
        else {
          switch(fcode_00) {
          case BUILT_IN_BCMP:
          case BUILT_IN_MEMCMP:
            ptVar2 = fold_builtin_memcmp(loc,arg0,arg1,arg2);
            return ptVar2;
          case BUILT_IN_BCOPY:
            ptVar2 = fold_builtin_memory_op(loc,arg1,arg0,arg2,_set_mem_align,'\x01',3);
            return ptVar2;
          case BUILT_IN_MEMCHR:
            ptVar2 = fold_builtin_memchr(loc,arg0,arg1,arg2,ptVar2);
            return ptVar2;
          case BUILT_IN_MEMCPY:
            ptVar2 = fold_builtin_memory_op(loc,arg0,arg1,arg2,ptVar2,ignore,0);
            return ptVar2;
          case BUILT_IN_MEMMOVE:
            ptVar2 = fold_builtin_memory_op(loc,arg0,arg1,arg2,ptVar2,ignore,3);
            return ptVar2;
          case BUILT_IN_MEMPCPY:
            ptVar2 = fold_builtin_memory_op(loc,arg0,arg1,arg2,ptVar2,ignore,1);
            return ptVar2;
          case BUILT_IN_MEMSET:
            ptVar2 = fold_builtin_memset(loc,arg0,arg1,arg2,ptVar2,ignore);
            return ptVar2;
          case BUILT_IN_STRNCAT:
            ptVar2 = fold_builtin_strncat(loc,arg0,arg1,arg2);
            return ptVar2;
          case BUILT_IN_STRNCMP:
            ptVar2 = fold_builtin_strncmp(loc,arg0,arg1,arg2);
            return ptVar2;
          case BUILT_IN_STRNCPY:
            ptVar2 = fold_builtin_strncpy(loc,fndecl,arg0,arg1,arg2,(tree)0x0);
            return ptVar2;
          case BUILT_IN_FPRINTF:
          case BUILT_IN_FPRINTF_UNLOCKED:
          case BUILT_IN_VFPRINTF:
            ptVar2 = fold_builtin_fprintf(loc,fndecl,arg0,arg1,arg2,ignore,fcode_00);
            return ptVar2;
          case BUILT_IN_SPRINTF:
            ptVar2 = fold_builtin_sprintf(loc,arg0,arg1,arg2,(uint)ignore);
            return ptVar2;
          }
        }
      }
    }
    else {
      switch(fcode_00) {
      case BUILT_IN_STPCPY_CHK:
      case BUILT_IN_STRCPY_CHK:
        ptVar2 = fold_builtin_stxcpy_chk(loc,fndecl,arg0,arg1,arg2,(tree)0x0,ignore,fcode_00);
        return ptVar2;
      case BUILT_IN_STRCAT_CHK:
        ptVar2 = fold_builtin_strcat_chk(loc,fndecl,arg0,arg1,arg2);
        return ptVar2;
      case BUILT_IN_FPRINTF_CHK:
      case BUILT_IN_VFPRINTF_CHK:
        uVar1 = validate_arg(arg1,INTEGER_TYPE);
        if ((uVar1 != '\0') && ((arg1->field_0x2 & 1) == 0)) {
          ptVar2 = fold_builtin_fprintf(loc,fndecl,arg0,arg2,(tree)0x0,ignore,fcode_00);
          return ptVar2;
        }
        return (tree)0x0;
      case BUILT_IN_PRINTF_CHK:
      case BUILT_IN_VPRINTF_CHK:
        uVar1 = validate_arg(arg0,INTEGER_TYPE);
        if ((uVar1 != '\0') && ((arg0->field_0x2 & 1) == 0)) {
          ptVar2 = fold_builtin_printf(loc,fndecl,arg1,arg2,ignore,fcode_00);
          return ptVar2;
        }
        return (tree)0x0;
      }
    }
  }
  return (tree)0x0;
}



tree fold_builtin_4(location_t loc,tree fndecl,tree arg0,tree arg1,tree arg2,tree arg3,uchar ignore)

{
  uchar uVar1;
  built_in_function fcode_00;
  tree ptVar2;
  built_in_function fcode;
  
  fcode_00 = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  switch(fcode_00) {
  case BUILT_IN_MEMCPY_CHK:
  case BUILT_IN_MEMMOVE_CHK:
  case BUILT_IN_MEMPCPY_CHK:
  case BUILT_IN_MEMSET_CHK:
    ptVar2 = fold_builtin_memory_chk
                       (loc,fndecl,arg0,arg1,arg2,arg3,(tree)0x0,ignore,
                        (uint)(*(ushort *)&fndecl->field_0xd8 & 0x7ff));
    break;
  default:
    ptVar2 = (tree)0x0;
    break;
  case BUILT_IN_STRNCAT_CHK:
    ptVar2 = fold_builtin_strncat_chk(loc,fndecl,arg0,arg1,arg2,arg3);
    break;
  case BUILT_IN_STRNCPY_CHK:
    ptVar2 = fold_builtin_strncpy_chk(loc,arg0,arg1,arg2,arg3,(tree)0x0);
    break;
  case BUILT_IN_FPRINTF_CHK:
  case BUILT_IN_VFPRINTF_CHK:
    uVar1 = validate_arg(arg1,INTEGER_TYPE);
    if ((uVar1 == '\0') || ((arg1->field_0x2 & 1) != 0)) {
      ptVar2 = (tree)0x0;
    }
    else {
      ptVar2 = fold_builtin_fprintf(loc,fndecl,arg0,arg2,arg3,ignore,fcode_00);
    }
  }
  return ptVar2;
}



tree fold_builtin_n(location_t loc,tree fndecl,tree *args,int nargs,uchar ignore)

{
  tree ptVar1;
  tree ret;
  
  ret = (tree)0x0;
  switch(nargs) {
  case 0:
    ret = fold_builtin_0(loc,fndecl,ignore);
    break;
  case 1:
    ret = fold_builtin_1(loc,fndecl,*args,ignore);
    break;
  case 2:
    ret = fold_builtin_2(loc,fndecl,*args,args[1],ignore);
    break;
  case 3:
    ret = fold_builtin_3(loc,fndecl,*args,args[1],args[2],ignore);
    break;
  case 4:
    ret = fold_builtin_4(loc,fndecl,*args,args[1],args[2],args[3],ignore);
  }
  if (ret == (tree)0x0) {
    ptVar1 = (tree)0x0;
  }
  else {
    ptVar1 = (tree)build1_stat(0x74,*(undefined8 *)&ret->field_0x10,ret);
    *(location_t *)&ptVar1->field_0x18 = loc;
    ptVar1->field_0x2 = ptVar1->field_0x2 | 0x80;
  }
  return ptVar1;
}



tree fold_builtin_varargs(location_t loc,tree fndecl,tree exp,uchar ignore)

{
  built_in_function fcode_00;
  tree ptVar1;
  built_in_function fcode;
  tree ret;
  
  fcode_00 = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  ret = (tree)0x0;
  if (fcode_00 == BUILT_IN_VSPRINTF_CHK) {
LAB_0011638c:
    ret = fold_builtin_sprintf_chk(loc,exp,fcode_00);
  }
  else {
    if (0x21d < (uint)fcode_00) goto LAB_001163dc;
    if (fcode_00 != BUILT_IN_VSNPRINTF_CHK) {
      if (0x21c < (uint)fcode_00) goto LAB_001163dc;
      if (fcode_00 == BUILT_IN_SPRINTF_CHK) goto LAB_0011638c;
      if (0x21b < (uint)fcode_00) goto LAB_001163dc;
      if (fcode_00 == BUILT_IN_FPCLASSIFY) {
        ret = fold_builtin_fpclassify(loc,exp);
        goto LAB_001163dc;
      }
      if (fcode_00 != BUILT_IN_SNPRINTF_CHK) goto LAB_001163dc;
    }
    ret = fold_builtin_snprintf_chk(loc,exp,(tree)0x0,fcode_00);
  }
LAB_001163dc:
  if (ret == (tree)0x0) {
    ptVar1 = (tree)0x0;
  }
  else {
    ptVar1 = (tree)build1_stat(0x74,*(undefined8 *)&ret->field_0x10,ret);
    *(location_t *)&ptVar1->field_0x18 = loc;
    ptVar1->field_0x2 = ptVar1->field_0x2 | 0x80;
  }
  return ptVar1;
}



uchar avoid_folding_inline_builtin(tree fndecl)

{
  long lVar1;
  
  if (((((fndecl->field_0xda & 0x20) != 0) && ((fndecl->field_0xdb & 4) != 0)) && (cfun != 0)) &&
     (((*(byte *)(cfun + 0x8b) & 2) == 0 &&
      (lVar1 = lookup_attribute("always_inline",*(undefined8 *)&fndecl->field_0x58), lVar1 != 0))))
  {
    return '\x01';
  }
  return '\0';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_call_expr(location_t loc,tree exp,uchar ignore)

{
  code *pcVar1;
  uchar uVar2;
  int nargs_00;
  tree ptVar4;
  short *psVar5;
  undefined8 uVar6;
  int nargs;
  tree ret;
  tree fndecl;
  tree fndecl2;
  tree *args;
  int iVar3;
  
  ret = (tree)0x0;
  ptVar4 = (tree)get_callee_fndecl(exp);
  if ((((ptVar4 != (tree)0x0) && (*(short *)ptVar4 == 0x1d)) && ((ptVar4->field_0xd9 & 0x18) != 0))
     && ((exp->field_0x3 & 8) == 0)) {
    iVar3 = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18);
    nargs_00 = iVar3 + -3;
    if ((((nargs_00 != 0) && (**(short **)(&exp->field_0x28 + (long)(iVar3 + -1) * 8) == 0x3b)) &&
        ((psVar5 = (short *)get_callee_fndecl(*(undefined8 *)
                                               (&exp->field_0x28 + (long)(iVar3 + -1) * 8)),
         psVar5 != (short *)0x0 &&
         ((*psVar5 == 0x1d && ((*(byte *)((long)psVar5 + 0xd9) & 0x18) == 0x18)))))) &&
       ((psVar5[0x6c] & 0x7ffU) == 0x204)) {
      return (tree)0x0;
    }
    uVar2 = avoid_folding_inline_builtin(ptVar4);
    pcVar1 = _real_arithmetic;
    if (uVar2 != '\0') {
      return (tree)0x0;
    }
    if ((ptVar4->field_0xd9 & 0x18) == 0x10) {
      uVar6 = call_expr_arglist(exp);
      ptVar4 = (tree)(*pcVar1)(ptVar4,uVar6,ignore);
      return ptVar4;
    }
    if (nargs_00 < 5) {
      ret = fold_builtin_n(loc,ptVar4,(tree *)&exp->field_0x40,nargs_00,ignore);
    }
    if (ret == (tree)0x0) {
      ret = fold_builtin_varargs(loc,ptVar4,exp,ignore);
    }
    if (ret != (tree)0x0) {
      return ret;
    }
  }
  return (tree)0x0;
}



tree build_function_call_expr(location_t loc,tree fndecl,tree arglist)

{
  tree type;
  long lVar1;
  location_t loc_00;
  int n_00;
  undefined8 uVar2;
  ulong uVar3;
  tree *argarray_00;
  tree ptVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  undefined auStack88 [8];
  tree local_50;
  tree local_48;
  location_t local_3c;
  int i;
  int n;
  tree fntype;
  tree fn;
  tree *argarray;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fntype = *(tree *)&fndecl->field_0x10;
  local_50 = arglist;
  local_48 = fndecl;
  local_3c = loc;
  uVar2 = build_pointer_type(fntype);
  fn = (tree)build1_stat(0x79,uVar2,local_48);
  n = list_length(local_50);
  uVar3 = (((long)n * 8 + 0x17U) / 0x10) * 0x10;
  for (puVar5 = auStack88; puVar5 != auStack88 + -(uVar3 & 0xfffffffffffff000);
      puVar5 = puVar5 + -0x1000) {
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  }
  lVar1 = -(ulong)((uint)uVar3 & 0xfff);
  if ((uVar3 & 0xfff) != 0) {
    *(undefined8 *)(puVar5 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)(puVar5 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1);
  }
  ptVar4 = fn;
  n_00 = n;
  loc_00 = local_3c;
  argarray_00 = (tree *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
  argarray = argarray_00;
  i = 0;
  while (i < n) {
    argarray_00[i] = *(tree *)&local_50->field_0x20;
    i = i + 1;
    local_50 = *(tree *)&local_50->field_0x8;
  }
  type = *(tree *)&fntype->field_0x10;
  *(undefined8 *)(puVar5 + lVar1 + -8) = 0x1167e0;
  ptVar4 = fold_builtin_call_array(loc_00,type,ptVar4,n_00,argarray_00);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)(puVar5 + lVar1 + -8) = 0x1167f4;
    __stack_chk_fail();
  }
  return ptVar4;
}



tree build_call_expr_loc(location_t loc,tree fndecl,int n,...)

{
  tree type;
  long lVar1;
  int n_00;
  location_t loc_00;
  char in_AL;
  undefined8 uVar2;
  ulong uVar3;
  tree *argarray_00;
  tree *pptVar4;
  tree ptVar5;
  undefined8 in_RCX;
  tree *pptVar6;
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
  tree local_108;
  int local_100;
  location_t local_fc;
  int i;
  tree fntype;
  tree fn;
  tree *argarray;
  va_list ap;
  long local_c0;
  tree local_b8 [4];
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
  
  pptVar6 = &local_108;
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
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  fntype = *(tree *)&fndecl->field_0x10;
  local_108 = fndecl;
  local_100 = n;
  local_fc = loc;
  local_b8[3] = (tree)in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  uVar2 = build_pointer_type(fntype);
  fn = (tree)build1_stat(0x79,uVar2,local_108);
  uVar3 = (((long)local_100 * 8 + 0x17U) / 0x10) * 0x10;
  for (; pptVar6 != (tree *)((long)&local_108 - (uVar3 & 0xfffffffffffff000));
      pptVar6 = (tree *)((long)pptVar6 + -0x1000)) {
    *(undefined8 *)((long)pptVar6 + -8) = *(undefined8 *)((long)pptVar6 + -8);
  }
  lVar1 = -(ulong)((uint)uVar3 & 0xfff);
  if ((uVar3 & 0xfff) != 0) {
    *(undefined8 *)((long)pptVar6 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)((long)pptVar6 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1);
  }
  ptVar5 = fn;
  loc_00 = local_fc;
  n_00 = local_100;
  argarray_00 = (tree *)((ulong)((long)pptVar6 + lVar1 + 0xf) & 0xfffffffffffffff0);
  argarray = argarray_00;
  ap[0].gp_offset = 0x18;
  ap[0].fp_offset = 0x30;
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].reg_save_area = local_b8;
  for (i = 0; pptVar4 = (tree *)ap[0].overflow_arg_area, i < local_100; i = i + 1) {
    if (ap[0].gp_offset < 0x30) {
      pptVar4 = (tree *)((long)local_b8 + (ulong)ap[0].gp_offset);
      ap[0].gp_offset = ap[0].gp_offset + 8;
    }
    else {
      ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
    }
    argarray_00[i] = *pptVar4;
  }
  type = *(tree *)&fntype->field_0x10;
  *(undefined8 *)((long)pptVar6 + lVar1 + -8) = 0x116a1a;
  ptVar5 = fold_builtin_call_array(loc_00,type,ptVar5,n_00,argarray_00);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)((long)pptVar6 + lVar1 + -8) = 0x116a31;
    __stack_chk_fail();
  }
  return ptVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_call_array(location_t loc,tree type,tree fn,int n,tree *argarray)

{
  uchar uVar1;
  short *psVar2;
  tree exp_00;
  tree ptVar3;
  int i;
  tree arglist;
  tree ret;
  tree fndecl;
  tree fndecl2;
  tree exp;
  
  if (((*(short *)fn == 0x79) && (ptVar3 = *(tree *)&fn->field_0x28, *(short *)ptVar3 == 0x1d)) &&
     ((ptVar3->field_0xd9 & 0x18) != 0)) {
    if ((((n == 0) || (*(short *)argarray[(long)n + -1] != 0x3b)) ||
        ((psVar2 = (short *)get_callee_fndecl(argarray[(long)n + -1]), psVar2 == (short *)0x0 ||
         ((*psVar2 != 0x1d || ((*(byte *)((long)psVar2 + 0xd9) & 0x18) != 0x18)))))) ||
       ((psVar2[0x6c] & 0x7ffU) != 0x204)) {
      uVar1 = avoid_folding_inline_builtin(ptVar3);
      if (uVar1 == '\0') {
        if ((ptVar3->field_0xd9 & 0x18) == 0x10) {
          arglist = (tree)0x0;
          for (i = n + -1; -1 < i; i = i + -1) {
            arglist = (tree)tree_cons_stat(0,argarray[i],arglist);
          }
          exp_00 = (tree)(*_real_arithmetic)(ptVar3,arglist,0);
          if (exp_00 == (tree)0x0) {
            exp_00 = (tree)build_call_array_loc(loc,type,fn,n,argarray);
          }
        }
        else if ((4 < n) ||
                (exp_00 = fold_builtin_n(loc,ptVar3,argarray,n,'\0'), exp_00 == (tree)0x0)) {
          exp_00 = (tree)build_call_array_loc(loc,type,fn,n,argarray);
          ptVar3 = fold_builtin_varargs(loc,ptVar3,exp_00,'\0');
          if (ptVar3 != (tree)0x0) {
            exp_00 = ptVar3;
          }
        }
      }
      else {
        exp_00 = (tree)build_call_array_loc(loc,type,fn,n,argarray);
      }
    }
    else {
      exp_00 = (tree)build_call_array_loc(loc,type,fn,n,argarray);
    }
  }
  else {
    exp_00 = (tree)build_call_array_loc(loc,type,fn,n,argarray);
  }
  return exp_00;
}



tree rewrite_call_expr(location_t loc,tree exp,int skip,tree fndecl,int n,...)

{
  long lVar1;
  location_t lVar2;
  int iVar3;
  char in_AL;
  undefined8 uVar4;
  ulong uVar5;
  tree *pptVar6;
  tree ptVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  undefined auStack296 [4];
  int local_124;
  tree local_120;
  tree local_118;
  int local_110;
  location_t local_10c;
  int i;
  int j;
  int oldnargs;
  int nargs;
  tree *buffer;
  tree fntype;
  tree fn;
  va_list ap;
  long local_c0;
  tree local_b8 [5];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  puVar8 = auStack296;
  puVar9 = auStack296;
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
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  oldnargs = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -3;
  nargs = n + (oldnargs - skip);
  fntype = *(tree *)&fndecl->field_0x10;
  local_124 = n;
  local_120 = fndecl;
  local_118 = exp;
  local_110 = skip;
  local_10c = loc;
  local_90 = in_R9;
  uVar4 = build_pointer_type(fntype);
  fn = (tree)build1_stat(0x79,uVar4,local_120);
  if (local_124 < 1) {
    buffer = (tree *)(&local_118->field_0x40 + (long)local_110 * 8);
  }
  else {
    uVar5 = (((long)nargs * 8 + 0x17U) / 0x10) * 0x10;
    for (; puVar8 != auStack296 + -(uVar5 & 0xfffffffffffff000); puVar8 = puVar8 + -0x1000) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    lVar1 = -(ulong)((uint)uVar5 & 0xfff);
    puVar9 = puVar8 + lVar1;
    if ((uVar5 & 0xfff) != 0) {
      *(undefined8 *)(puVar8 + ((ulong)((uint)uVar5 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)(puVar8 + ((ulong)((uint)uVar5 & 0xfff) - 8) + lVar1);
    }
    buffer = (tree *)((ulong)(puVar8 + lVar1 + 0xf) & 0xfffffffffffffff0);
    ap[0].gp_offset = 0x28;
    ap[0].fp_offset = 0x30;
    ap[0].overflow_arg_area = &stack0x00000008;
    ap[0].reg_save_area = local_b8;
    for (i = 0; pptVar6 = (tree *)ap[0].overflow_arg_area, i < local_124; i = i + 1) {
      if (ap[0].gp_offset < 0x30) {
        pptVar6 = (tree *)((long)local_b8 + (ulong)ap[0].gp_offset);
        ap[0].gp_offset = ap[0].gp_offset + 8;
      }
      else {
        ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
      }
      buffer[i] = *pptVar6;
    }
    for (j = local_110; j < oldnargs; j = j + 1) {
      buffer[i] = *(tree *)(&local_118->field_0x28 + (long)(j + 3) * 8);
      i = i + 1;
    }
  }
  ptVar7 = fn;
  pptVar6 = buffer;
  iVar3 = nargs;
  lVar2 = local_10c;
  uVar4 = *(undefined8 *)&local_118->field_0x10;
  *(undefined8 *)(puVar9 + -8) = 0x116fb5;
  uVar4 = build_call_array_loc(lVar2,uVar4,ptVar7,iVar3,pptVar6);
  *(undefined8 *)(puVar9 + -8) = 0x116fbd;
  ptVar7 = (tree)fold(uVar4);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar7;
  }
                    // WARNING: Subroutine does not return
  *(undefined8 *)(puVar9 + -8) = 0x116fd4;
  __stack_chk_fail();
}



uchar validate_arg(const_tree arg,tree_code code)

{
  bool bVar1;
  
  if (arg == (const_tree)0x0) {
    bVar1 = false;
  }
  else if (code == POINTER_TYPE) {
    if ((**(short **)&arg->field_0x10 == 10) || (**(short **)&arg->field_0x10 == 0xc)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else if (code == INTEGER_TYPE) {
    if (((**(short **)&arg->field_0x10 == 6) || (**(short **)&arg->field_0x10 == 7)) ||
       (**(short **)&arg->field_0x10 == 8)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = code == (uint)**(ushort **)&arg->field_0x10;
  }
  return bVar1;
}



uchar validate_gimple_arglist(const_gimple call,...)

{
  tree_code code_00;
  long lVar1;
  char in_AL;
  uchar uVar2;
  uint uVar3;
  tree_code *ptVar4;
  tree arg_00;
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
  uchar res;
  tree_code code;
  size_t i;
  const_tree arg;
  va_list ap;
  tree_code local_b8 [2];
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
  res = '\0';
  ap[0].gp_offset = 8;
  ap[0].overflow_arg_area = &stack0x00000008;
  i = 0;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  do {
    if (ap[0].gp_offset < 0x30) {
      uVar5 = (ulong)ap[0].gp_offset;
      ap[0].gp_offset = ap[0].gp_offset + 8;
      ptVar4 = (tree_code *)((long)local_b8 + uVar5);
    }
    else {
      ptVar4 = (tree_code *)ap[0].overflow_arg_area;
      ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
    }
    code_00 = *ptVar4;
    if (code_00 == ERROR_MARK) {
      res = '\x01';
      break;
    }
    if (code_00 == VOID_TYPE) {
      uVar3 = gimple_call_num_args(call);
      res = i == uVar3;
      break;
    }
    arg_00 = gimple_call_arg(call,(uint)i);
    uVar2 = validate_arg(arg_00,code_00);
    i = i + 1;
  } while (uVar2 != '\0');
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



uchar validate_arglist(const_tree callexpr,...)

{
  tree_code code_00;
  long lVar1;
  char in_AL;
  uchar uVar2;
  tree_code *ptVar3;
  const_tree arg_00;
  undefined8 in_RCX;
  undefined8 in_RDX;
  ulong uVar4;
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
  uchar res;
  tree_code code;
  const_tree arg;
  const_call_expr_arg_iterator iter;
  va_list ap;
  tree_code local_b8 [2];
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
  res = '\0';
  ap[0].gp_offset = 8;
  ap[0].overflow_arg_area = &stack0x00000008;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  init_const_call_expr_arg_iterator(callexpr,&iter);
  do {
    if (ap[0].gp_offset < 0x30) {
      uVar4 = (ulong)ap[0].gp_offset;
      ap[0].gp_offset = ap[0].gp_offset + 8;
      ptVar3 = (tree_code *)((long)local_b8 + uVar4);
    }
    else {
      ptVar3 = (tree_code *)ap[0].overflow_arg_area;
      ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
    }
    code_00 = *ptVar3;
    if (code_00 == ERROR_MARK) {
      res = '\x01';
      break;
    }
    if (code_00 == VOID_TYPE) {
      uVar2 = more_const_call_expr_args_p(&iter);
      res = uVar2 == '\0';
      break;
    }
    arg_00 = next_const_call_expr_arg(&iter);
    uVar2 = validate_arg(arg_00,code_00);
  } while (uVar2 != '\0');
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return res;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



rtx default_expand_builtin(tree exp,rtx target,rtx subtarget,machine_mode mode,int ignore)

{
  return (rtx)0x0;
}



uchar readonly_data_expr(tree exp)

{
  uchar uVar1;
  short *psVar2;
  
  psVar2 = (short *)tree_strip_nop_conversions(exp);
  if (*psVar2 == 0x79) {
    psVar2 = (short *)get_base_address(*(undefined8 *)(psVar2 + 0x14));
    if (psVar2 == (short *)0x0) {
      uVar1 = '\0';
    }
    else if (((*psVar2 == 0x1c) || (*psVar2 == 0x33)) ||
            ((*psVar2 == 0x20 && ((*(byte *)((long)psVar2 + 3) & 4) != 0)))) {
      uVar1 = decl_readonly_section(psVar2,0);
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



tree fold_builtin_strstr(location_t loc,tree s1,tree s2,tree type)

{
  uchar uVar1;
  char *pcVar2;
  char *__haystack;
  tree ptVar3;
  undefined8 uVar4;
  char *p2;
  char *p1;
  tree fn;
  char *r;
  tree tem;
  
  uVar1 = validate_arg(s1,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(s2,POINTER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  pcVar2 = c_getstr(s2);
  if (pcVar2 == (char *)0x0) {
    return (tree)0x0;
  }
  __haystack = c_getstr(s1);
  ptVar3 = implicit_built_in_decls[339];
  if (__haystack != (char *)0x0) {
    pcVar2 = strstr(__haystack,pcVar2);
    if (pcVar2 == (char *)0x0) {
      ptVar3 = (tree)build_int_cst(*(undefined8 *)&s1->field_0x10,0);
      return ptVar3;
    }
    uVar4 = size_int_kind((long)pcVar2 - (long)__haystack,0);
    uVar4 = fold_build2_stat_loc(loc,0x42,*(undefined8 *)&s1->field_0x10,s1,uVar4);
    ptVar3 = (tree)fold_convert_loc(loc,type,uVar4);
    return ptVar3;
  }
  if (*pcVar2 == '\0') {
    ptVar3 = (tree)fold_convert_loc(loc,type,s1);
    return ptVar3;
  }
  if (pcVar2[1] != '\0') {
    return (tree)0x0;
  }
  if (implicit_built_in_decls[339] == (tree)0x0) {
    return (tree)0x0;
  }
  uVar4 = build_int_cst(0,(long)*pcVar2);
  ptVar3 = build_call_expr_loc(loc,ptVar3,2,s1,uVar4);
  return ptVar3;
}



tree fold_builtin_strchr(location_t loc,tree s1,tree s2,tree type)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char c;
  char *p1;
  char *r;
  tree tem;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = validate_arg(s1,POINTER_TYPE);
  if (uVar1 != '\0') {
    uVar1 = validate_arg(s2,INTEGER_TYPE);
    if (uVar1 != '\0') {
      if (*(short *)s2 == 0x17) {
        p1 = c_getstr(s1);
        if (p1 == (char *)0x0) {
          ptVar3 = (tree)0x0;
        }
        else {
          iVar2 = target_char_cast(s2,&c);
          if (iVar2 == 0) {
            r = strchr(p1,(int)c);
            if (r == (char *)0x0) {
              ptVar3 = (tree)build_int_cst(*(undefined8 *)&s1->field_0x10,0);
            }
            else {
              uVar4 = size_int_kind((long)r - (long)p1,0);
              tem = (tree)fold_build2_stat_loc(loc,0x42,*(undefined8 *)&s1->field_0x10,s1,uVar4);
              ptVar3 = (tree)fold_convert_loc(loc,type,tem);
            }
          }
          else {
            ptVar3 = (tree)0x0;
          }
        }
      }
      else {
        ptVar3 = (tree)0x0;
      }
      goto LAB_0011776f;
    }
  }
  ptVar3 = (tree)0x0;
LAB_0011776f:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar3;
}



tree fold_builtin_strrchr(location_t loc,tree s1,tree s2,tree type)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  undefined8 uVar4;
  undefined8 in_R9;
  long in_FS_OFFSET;
  char c;
  char *p1;
  tree fn;
  char *r;
  tree tem;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = validate_arg(s1,POINTER_TYPE);
  if (uVar1 != '\0') {
    uVar1 = validate_arg(s2,INTEGER_TYPE);
    if (uVar1 != '\0') {
      if (*(short *)s2 == 0x17) {
        p1 = c_getstr(s1);
        if (p1 == (char *)0x0) {
          iVar2 = integer_zerop();
          if (iVar2 == 0) {
            ptVar3 = (tree)0x0;
          }
          else {
            fn = implicit_built_in_decls[339];
            if (implicit_built_in_decls[339] == (tree)0x0) {
              ptVar3 = (tree)0x0;
            }
            else {
              ptVar3 = build_call_expr_loc(loc,implicit_built_in_decls[339],2,s1,s2,in_R9,type);
            }
          }
        }
        else {
          iVar2 = target_char_cast(s2,&c);
          if (iVar2 == 0) {
            r = strrchr(p1,(int)c);
            if (r == (char *)0x0) {
              ptVar3 = (tree)build_int_cst(*(undefined8 *)&s1->field_0x10,0);
            }
            else {
              uVar4 = size_int_kind((long)r - (long)p1,0);
              tem = (tree)fold_build2_stat_loc(loc,0x42,*(undefined8 *)&s1->field_0x10,s1,uVar4);
              ptVar3 = (tree)fold_convert_loc(loc,type,tem);
            }
          }
          else {
            ptVar3 = (tree)0x0;
          }
        }
      }
      else {
        ptVar3 = (tree)0x0;
      }
      goto LAB_00117917;
    }
  }
  ptVar3 = (tree)0x0;
LAB_00117917:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return ptVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_strpbrk(location_t loc,tree s1,tree s2,tree type)

{
  uchar uVar1;
  char *pcVar2;
  char *__s;
  tree ptVar3;
  undefined8 uVar4;
  char *p2;
  char *p1;
  tree fn;
  char *r;
  tree tem;
  
  uVar1 = validate_arg(s1,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(s2,POINTER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  pcVar2 = c_getstr(s2);
  if (pcVar2 == (char *)0x0) {
    return (tree)0x0;
  }
  __s = c_getstr(s1);
  ptVar3 = implicit_built_in_decls[339];
  if (__s != (char *)0x0) {
    pcVar2 = strpbrk(__s,pcVar2);
    if (pcVar2 == (char *)0x0) {
      ptVar3 = (tree)build_int_cst(*(undefined8 *)&s1->field_0x10,0);
      return ptVar3;
    }
    uVar4 = size_int_kind((long)pcVar2 - (long)__s,0);
    uVar4 = fold_build2_stat_loc(loc,0x42,*(undefined8 *)&s1->field_0x10,s1,uVar4);
    ptVar3 = (tree)fold_convert_loc(loc,type,uVar4);
    return ptVar3;
  }
  if (*pcVar2 == '\0') {
    ptVar3 = (tree)omit_one_operand_loc(loc,*(undefined8 *)&s1->field_0x10,_set_mem_expr,s1);
    return ptVar3;
  }
  if (pcVar2[1] != '\0') {
    return (tree)0x0;
  }
  if (implicit_built_in_decls[339] == (tree)0x0) {
    return (tree)0x0;
  }
  uVar4 = build_int_cst(0,(long)*pcVar2);
  ptVar3 = build_call_expr_loc(loc,ptVar3,2,s1,uVar4);
  return ptVar3;
}



tree fold_builtin_strcat(location_t loc,tree dst,tree src)

{
  uchar uVar1;
  char cVar2;
  char *pcVar3;
  tree ptVar4;
  tree ptVar5;
  tree ptVar6;
  char *p;
  tree strlen_fn;
  tree strcpy_fn;
  tree len;
  tree newdst;
  tree call;
  
  uVar1 = validate_arg(dst,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) {
    dst = (tree)0x0;
  }
  else {
    pcVar3 = c_getstr(src);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\0')) {
      cVar2 = optimize_insn_for_speed_p();
      ptVar5 = implicit_built_in_decls[345];
      ptVar6 = implicit_built_in_decls[341];
      if (cVar2 == '\0') {
        dst = (tree)0x0;
      }
      else if ((implicit_built_in_decls[345] == (tree)0x0) ||
              (implicit_built_in_decls[341] == (tree)0x0)) {
        dst = (tree)0x0;
      }
      else {
        ptVar4 = c_strlen(src,1);
        if ((ptVar4 == (tree)0x0) || ((ptVar4->field_0x2 & 1) != 0)) {
          dst = (tree)0x0;
        }
        else {
          ptVar4 = builtin_save_expr(dst);
          ptVar5 = build_call_expr_loc(loc,ptVar5,1,ptVar4);
          ptVar5 = (tree)fold_build2_stat_loc
                                   (loc,0x42,*(undefined8 *)&ptVar4->field_0x10,ptVar4,ptVar5);
          ptVar5 = builtin_save_expr(ptVar5);
          ptVar6 = build_call_expr_loc(loc,ptVar6,2,ptVar5,src);
          dst = (tree)build2_stat(0x34,*(undefined8 *)&ptVar4->field_0x10,ptVar6,ptVar4);
        }
      }
    }
  }
  return dst;
}



tree fold_builtin_strncat(location_t loc,tree dst,tree src,tree len)

{
  uchar uVar1;
  int iVar2;
  char *__s;
  tree ptVar3;
  size_t sVar4;
  char *p;
  tree fn;
  
  uVar1 = validate_arg(dst,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  __s = c_getstr(src);
  iVar2 = integer_zerop(len);
  if ((iVar2 == 0) && ((__s == (char *)0x0 || (*__s != '\0')))) {
    if ((*(short *)len == 0x17) && (__s != (char *)0x0)) {
      sVar4 = strlen(__s);
      iVar2 = compare_tree_int(len,sVar4);
      if (-1 < iVar2) {
        if (implicit_built_in_decls[338] == (tree)0x0) {
          return (tree)0x0;
        }
        ptVar3 = build_call_expr_loc(loc,implicit_built_in_decls[338],2,dst,src);
        return ptVar3;
      }
    }
    return (tree)0x0;
  }
  ptVar3 = (tree)omit_two_operands_loc(loc,*(undefined8 *)&dst->field_0x10,dst,src,len);
  return ptVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_strspn(location_t loc,tree s1,tree s2)

{
  uchar uVar1;
  char *__s;
  char *__accept;
  size_t sVar2;
  tree ptVar3;
  char *p1;
  char *p2;
  size_t r;
  
  uVar1 = validate_arg(s1,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(s2,POINTER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  __s = c_getstr(s1);
  __accept = c_getstr(s2);
  if ((__s != (char *)0x0) && (__accept != (char *)0x0)) {
    sVar2 = strspn(__s,__accept);
    ptVar3 = (tree)size_int_kind(sVar2,0);
    return ptVar3;
  }
  if (((__s == (char *)0x0) || (*__s != '\0')) && ((__accept == (char *)0x0 || (*__accept != '\0')))
     ) {
    return (tree)0x0;
  }
  ptVar3 = (tree)omit_two_operands_loc(loc,_prepare_call_address,_ix86_function_arg_regno_p,s1,s2);
  return ptVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_strcspn(location_t loc,tree s1,tree s2)

{
  uchar uVar1;
  char *__s;
  char *__reject;
  size_t sVar2;
  tree ptVar3;
  char *p1;
  char *p2;
  size_t r;
  tree fn;
  
  uVar1 = validate_arg(s1,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(s2,POINTER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  __s = c_getstr(s1);
  __reject = c_getstr(s2);
  if ((__s != (char *)0x0) && (__reject != (char *)0x0)) {
    sVar2 = strcspn(__s,__reject);
    ptVar3 = (tree)size_int_kind(sVar2,0);
    return ptVar3;
  }
  if ((__s != (char *)0x0) && (*__s == '\0')) {
    ptVar3 = (tree)omit_one_operand_loc(loc,_prepare_call_address,_ix86_function_arg_regno_p,s2);
    return ptVar3;
  }
  if ((__reject != (char *)0x0) && (*__reject == '\0')) {
    if (implicit_built_in_decls[345] == (tree)0x0) {
      return (tree)0x0;
    }
    ptVar3 = build_call_expr_loc(loc,implicit_built_in_decls[345],1,s1);
    return ptVar3;
  }
  return (tree)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_fputs(location_t loc,tree arg0,tree arg1,uchar ignore,uchar unlocked,tree len)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  tree fndecl;
  char *pcVar4;
  undefined8 uVar5;
  tree ptVar6;
  tree local_50;
  tree fn_fputc;
  tree fn_fwrite;
  char *p;
  
  fndecl = implicit_built_in_decls[363];
  ptVar6 = implicit_built_in_decls[358];
  if (unlocked != '\0') {
    fndecl = built_in_decls[364];
    ptVar6 = built_in_decls[359];
  }
  if (ignore == '\0') {
    return (tree)0x0;
  }
  uVar1 = validate_arg(arg0,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(arg1,POINTER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  local_50 = len;
  if (len == (tree)0x0) {
    local_50 = c_strlen(arg0,0);
  }
  if ((local_50 == (tree)0x0) || (*(short *)local_50 != 0x17)) {
    return (tree)0x0;
  }
  iVar3 = compare_tree_int(local_50,1);
  if (iVar3 == 1) {
LAB_00118164:
    uVar5 = 0x118173;
    cVar2 = optimize_function_for_size_p(cfun);
    if (cVar2 == '\0') {
      if (fndecl == (tree)0x0) {
        ptVar6 = (tree)0x0;
      }
      else {
        ptVar6 = build_call_expr_loc(loc,fndecl,4,arg0,reg_raw_mode,local_50,arg1,uVar5);
      }
    }
    else {
      ptVar6 = (tree)0x0;
    }
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 == -1) {
        ptVar6 = (tree)omit_one_operand_loc(loc,_gen_cmpstrnsi,_set_mem_expr,arg1);
        return ptVar6;
      }
      if (iVar3 == 0) {
        pcVar4 = c_getstr(arg0);
        if (pcVar4 != (char *)0x0) {
          if (ptVar6 != (tree)0x0) {
            uVar5 = build_int_cst(0,(long)*pcVar4);
            ptVar6 = build_call_expr_loc(loc,ptVar6,2,uVar5,arg1);
            return ptVar6;
          }
          return (tree)0x0;
        }
        goto LAB_00118164;
      }
    }
    fancy_abort("builtins.c",0x2d7d,&DAT_0011bd60);
    ptVar6 = (tree)0x0;
  }
  return ptVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uchar fold_builtin_next_arg(tree exp,uchar va_start_p)

{
  int iVar1;
  long lVar3;
  tree ptVar4;
  int nargs;
  tree arg;
  tree fntype;
  tree last_parm;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18);
  iVar1 = iVar2 + -3;
  if ((*(long *)(*(long *)(current_function_decl + 0x10) + 0x18) == 0) ||
     (lVar3 = tree_last(*(undefined8 *)(*(long *)(current_function_decl + 0x10) + 0x18)),
     *(long *)(lVar3 + 0x20) == _set_mem_align)) {
    error("%<va_start%> used in function with fixed args");
    return '\x01';
  }
  if (va_start_p == '\0') {
    if (iVar2 == 3) {
      warning(0,"%<__builtin_next_arg%> called without an argument");
      return '\x01';
    }
    if (1 < iVar1) {
      error("wrong number of arguments to function %<__builtin_next_arg%>");
      return '\x01';
    }
    arg = *(tree *)&exp->field_0x40;
  }
  else {
    if ((va_start_p != '\0') && (iVar1 != 2)) {
      error("wrong number of arguments to function %<va_start%>");
      return '\x01';
    }
    arg = *(tree *)&exp->field_0x48;
  }
  if (*(short *)arg == 0x8d) {
    arg = *(tree *)&arg->field_0x18;
  }
  iVar1 = integer_zerop(arg);
  if (iVar1 == 0) {
    ptVar4 = (tree)tree_last(*(undefined8 *)(current_function_decl + 0xa0));
    for (; ((*(short *)arg == 0x74 || (*(short *)arg == 0x71)) || (*(short *)arg == 0x2f));
        arg = *(tree *)&arg->field_0x28) {
    }
    if (arg == ptVar4) {
      if ((arg->field_0x3b & 1) != 0) {
        warning(0,
                "undefined behaviour when second parameter of %<va_start%> is declared with %<register%> storage"
               );
      }
    }
    else {
      warning(0,"second parameter of %<va_start%> not last named argument");
    }
    if (va_start_p == '\0') {
      *(undefined8 *)&exp->field_0x40 = _set_mem_expr;
    }
    else {
      *(undefined8 *)&exp->field_0x48 = _set_mem_expr;
    }
  }
  return '\0';
}



tree fold_builtin_sprintf(location_t loc,tree dest,tree fmt,tree orig,int ignored)

{
  tree fndecl;
  uchar uVar1;
  int iVar2;
  char *__s;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  tree call;
  tree retval;
  char *fmt_str;
  tree fn_1;
  tree fn;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(fmt,POINTER_TYPE), uVar1 == '\0')) {
    call = (tree)0x0;
  }
  else if ((orig == (tree)0x0) || (uVar1 = validate_arg(orig,POINTER_TYPE), uVar1 != '\0')) {
    __s = c_getstr(fmt);
    if (__s == (char *)0x0) {
      call = (tree)0x0;
    }
    else {
      call = (tree)0x0;
      retval = (tree)0x0;
      uVar1 = init_target_chars();
      if (uVar1 == '\0') {
        call = (tree)0x0;
      }
      else {
        pcVar3 = strchr(__s,(int)target_percent);
        if (pcVar3 == (char *)0x0) {
          if (implicit_built_in_decls[341] == (tree)0x0) {
            return (tree)0x0;
          }
          if (orig != (tree)0x0) {
            return (tree)0x0;
          }
          call = build_call_expr_loc(loc,implicit_built_in_decls[341],2,dest,fmt);
          if (ignored == 0) {
            sVar4 = strlen(__s);
            retval = (tree)build_int_cst(0,sVar4);
          }
        }
        else if ((__s != (char *)0x0) &&
                (iVar2 = strcmp(__s,target_percent_s), fndecl = implicit_built_in_decls[341],
                iVar2 == 0)) {
          if (implicit_built_in_decls[341] == (tree)0x0) {
            return (tree)0x0;
          }
          if (orig == (tree)0x0) {
            return (tree)0x0;
          }
          if ((ignored == 0) &&
             ((retval = c_strlen(orig,1), retval == (tree)0x0 || (*(short *)retval != 0x17)))) {
            return (tree)0x0;
          }
          call = build_call_expr_loc(loc,fndecl,2,dest,orig);
        }
        if ((call != (tree)0x0) && (retval != (tree)0x0)) {
          lVar5 = fold_convert_loc(loc,*(undefined8 *)
                                        (*(long *)&implicit_built_in_decls[373]->field_0x10 + 0x10),
                                   retval);
          call = (tree)build2_stat(0x34,*(undefined8 *)(lVar5 + 0x10),call,lVar5);
        }
      }
    }
  }
  else {
    call = (tree)0x0;
  }
  return call;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_object_size(tree exp)

{
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  short *psVar4;
  rtx prVar5;
  int object_size_type;
  tree fndecl;
  tree ost;
  
  uVar3 = get_callee_fndecl(exp);
  uVar1 = validate_arglist(exp,10,8,0x13);
  if (uVar1 == '\0') {
    error("%Kfirst argument of %D must be a pointer, second integer constant",exp,uVar3);
    expand_builtin_trap();
    prVar5 = _vector_type_mode;
  }
  else {
    psVar4 = (short *)tree_strip_nop_conversions(*(undefined8 *)&exp->field_0x48);
    if (((*psVar4 == 0x17) && (iVar2 = tree_int_cst_sgn(psVar4), -1 < iVar2)) &&
       (iVar2 = compare_tree_int(psVar4,3), iVar2 < 1)) {
      iVar2 = tree_low_cst(psVar4,0);
      prVar5 = _vector_type_mode;
      if (iVar2 < 2) {
        prVar5 = flag_trapping_math;
      }
    }
    else {
      error("%Klast argument of %D is not integer constant between 0 and 3",exp,uVar3);
      expand_builtin_trap();
      prVar5 = _vector_type_mode;
    }
  }
  return prVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

rtx expand_builtin_memory_chk(tree exp,rtx target,machine_mode mode,built_in_function fcode)

{
  tree exp_00;
  tree exp_01;
  uchar uVar1;
  int iVar2;
  undefined4 uVar3;
  rtx prVar4;
  tree ptVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint dest_align;
  uint src_align;
  tree fn;
  tree dest;
  tree src;
  tree len;
  tree size;
  tree fn_1;
  tree expr;
  
  if (fcode == BUILT_IN_MEMSET_CHK) {
    uVar7 = 8;
  }
  else {
    uVar7 = 10;
  }
  uVar1 = validate_arglist(exp,10,uVar7,8,8,0x13);
  if (uVar1 == '\0') {
    prVar4 = (rtx)0x0;
  }
  else {
    ptVar5 = *(tree *)&exp->field_0x40;
    exp_00 = *(tree *)&exp->field_0x48;
    exp_01 = *(tree *)&exp->field_0x50;
    uVar7 = *(undefined8 *)&exp->field_0x58;
    iVar2 = host_integerp(uVar7,1);
    if (iVar2 == 0) {
      prVar4 = (rtx)0x0;
    }
    else {
      iVar2 = host_integerp(exp_01);
      if ((iVar2 == 0) && (iVar2 = integer_all_onesp(uVar7), iVar2 == 0)) {
        if (fcode == BUILT_IN_MEMSET_CHK) {
          prVar4 = (rtx)0x0;
        }
        else {
          if ((ix86_isa_flags & 0x20) == 0) {
            uVar6 = 0x80;
          }
          else {
            uVar6 = 0x100;
          }
          iVar2 = get_pointer_alignment(ptVar5,uVar6);
          if (iVar2 == 0) {
            prVar4 = (rtx)0x0;
          }
          else {
            iVar2 = operand_equal_p(exp_00,ptVar5,0);
            if (iVar2 == 0) {
              if (fcode == BUILT_IN_MEMMOVE_CHK) {
                if ((ix86_isa_flags & 0x20) == 0) {
                  uVar6 = 0x80;
                }
                else {
                  uVar6 = 0x100;
                }
                iVar2 = get_pointer_alignment(exp_00,uVar6);
                if (iVar2 == 0) {
                  return (rtx)0x0;
                }
                uVar8 = 0x118b26;
                uVar1 = readonly_data_expr(exp_00);
                if (uVar1 != '\0') {
                  if (built_in_decls[529] == (tree)0x0) {
                    return (rtx)0x0;
                  }
                  ptVar5 = build_call_nofold_loc
                                     (0,built_in_decls[529],4,ptVar5,exp_00,exp_01,uVar7,uVar8);
                  if (*(short *)ptVar5 != 0x3b) {
                    fancy_abort("builtins.c",0x2ecf,&DAT_0011bd60);
                  }
                  ptVar5->field_0x2 =
                       ptVar5->field_0x2 & 0xfb | ((byte)exp->field_0x2 >> 2 & 1) * '\x04';
                  prVar4 = expand_expr(ptVar5,target,mode,EXPAND_NORMAL);
                  return prVar4;
                }
              }
              prVar4 = (rtx)0x0;
            }
            else if (fcode == BUILT_IN_MEMPCPY_CHK) {
              ptVar5 = (tree)fold_build2_stat_loc
                                       (0,0x42,*(undefined8 *)&ptVar5->field_0x10,ptVar5,exp_01);
              prVar4 = expand_expr(ptVar5,target,mode,EXPAND_NORMAL);
            }
            else {
              expand_expr(exp_01,_vector_type_mode,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
              prVar4 = expand_expr(ptVar5,target,mode,EXPAND_NORMAL);
            }
          }
        }
      }
      else {
        iVar2 = integer_all_onesp(uVar7);
        if ((iVar2 == 0) && (iVar2 = tree_int_cst_lt(uVar7,exp_01), iVar2 != 0)) {
          uVar7 = get_callee_fndecl(exp);
          uVar3 = tree_nonartificial_location(exp);
          warning_at(uVar3,0,"%Kcall to %D will always overflow destination buffer",exp,uVar7);
          prVar4 = (rtx)0x0;
        }
        else {
          fn = (tree)0x0;
          if (fcode == BUILT_IN_MEMSET_CHK) {
            fn = built_in_decls[333];
          }
          else if ((uint)fcode < 0x215) {
            if (fcode == BUILT_IN_MEMPCPY_CHK) {
              fn = built_in_decls[332];
            }
            else if ((uint)fcode < 0x214) {
              if (fcode == BUILT_IN_MEMCPY_CHK) {
                fn = built_in_decls[330];
              }
              else if (fcode == BUILT_IN_MEMMOVE_CHK) {
                fn = built_in_decls[331];
              }
            }
          }
          if (fn == (tree)0x0) {
            prVar4 = (rtx)0x0;
          }
          else {
            ptVar5 = build_call_nofold_loc(0,fn,3,ptVar5,exp_00,exp_01);
            if (*(short *)ptVar5 != 0x3b) {
              fancy_abort("builtins.c",0x2e9f,&DAT_0011bd60);
            }
            ptVar5->field_0x2 = ptVar5->field_0x2 & 0xfb | ((byte)exp->field_0x2 >> 2 & 1) * '\x04';
            prVar4 = expand_expr(ptVar5,target,mode,EXPAND_NORMAL);
          }
        }
      }
    }
  }
  return prVar4;
}



void maybe_emit_chk_warning(tree exp,built_in_function fcode)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  tree ptVar4;
  undefined8 uVar5;
  int is_strlen;
  location_t loc;
  tree len;
  tree size;
  tree src;
  
  bVar1 = false;
  uVar2 = tree_nonartificial_location(exp);
  if (fcode == BUILT_IN_VSNPRINTF_CHK) {
LAB_00118caa:
    len = *(tree *)&exp->field_0x48;
    size = *(tree *)&exp->field_0x58;
  }
  else if ((uint)fcode < 0x21d) {
    if (fcode == BUILT_IN_SNPRINTF_CHK) goto LAB_00118caa;
    if (0x21a < (uint)fcode) goto LAB_00118cc4;
    if ((uint)fcode < 0x218) {
      if ((uint)fcode < 0x215) goto LAB_00118cc4;
      len = *(tree *)&exp->field_0x48;
      size = *(tree *)&exp->field_0x50;
      bVar1 = true;
    }
    else {
      if (1 < (uint)(fcode + ~BUILT_IN_STRCPY_CHK)) goto LAB_00118cc4;
      len = *(tree *)&exp->field_0x50;
      size = *(tree *)&exp->field_0x58;
    }
  }
  else {
LAB_00118cc4:
    fancy_abort("builtins.c",0x2ef7,&DAT_0011bd60);
  }
  if (len == (tree)0x0) {
    return;
  }
  if (size == (tree)0x0) {
    return;
  }
  iVar3 = host_integerp(size,1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = integer_all_onesp(size);
  if (iVar3 != 0) {
    return;
  }
  if (bVar1) {
    ptVar4 = c_strlen(len,1);
    if (ptVar4 == (tree)0x0) {
      return;
    }
    iVar3 = host_integerp(ptVar4,1);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = tree_int_cst_lt(ptVar4,size);
  }
  else {
    if (fcode != BUILT_IN_STRNCAT_CHK) {
      iVar3 = host_integerp(len,1);
      if (iVar3 == 0) {
        return;
      }
      iVar3 = tree_int_cst_lt(size,len);
      if (iVar3 == 0) {
        return;
      }
      goto LAB_00118e85;
    }
    ptVar4 = *(tree *)&exp->field_0x48;
    if (ptVar4 == (tree)0x0) {
      return;
    }
    iVar3 = host_integerp(len,1);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = tree_int_cst_lt(len,size);
    if (iVar3 != 0) {
      return;
    }
    ptVar4 = c_strlen(ptVar4,1);
    if ((ptVar4 == (tree)0x0) || (iVar3 = host_integerp(ptVar4,1), iVar3 == 0)) {
      uVar5 = get_callee_fndecl(exp);
      warning_at(uVar2,0,"%Kcall to %D might overflow destination buffer",exp,uVar5);
      return;
    }
    iVar3 = tree_int_cst_lt(ptVar4,size);
  }
  if (iVar3 != 0) {
    return;
  }
LAB_00118e85:
  uVar5 = get_callee_fndecl(exp);
  warning_at(uVar2,0,"%Kcall to %D will always overflow destination buffer",exp,uVar5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void maybe_emit_sprintf_chk_warning(tree exp,built_in_function fcode)

{
  tree ptVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s;
  char *pcVar6;
  size_t sVar7;
  undefined8 uVar8;
  int nargs;
  tree len;
  tree size;
  tree fmt;
  char *fmt_str;
  tree arg;
  
  iVar3 = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -3;
  if (3 < iVar3) {
    uVar8 = *(undefined8 *)&exp->field_0x50;
    ptVar1 = *(tree *)&exp->field_0x58;
    iVar4 = host_integerp(uVar8);
    if ((((iVar4 != 0) && (iVar4 = integer_all_onesp(uVar8), iVar4 == 0)) &&
        (__s = c_getstr(ptVar1), __s != (char *)0x0)) &&
       (uVar2 = init_target_chars(), uVar2 != '\0')) {
      pcVar6 = strchr(__s,(int)target_percent);
      if (pcVar6 == (char *)0x0) {
        sVar7 = strlen(__s);
        len = (tree)build_int_cstu(_prepare_call_address,sVar7);
      }
      else {
        if (fcode != BUILT_IN_SPRINTF_CHK) {
          return;
        }
        iVar4 = strcmp(__s,target_percent_s);
        if (iVar4 != 0) {
          return;
        }
        if (iVar3 < 5) {
          return;
        }
        ptVar1 = *(tree *)&exp->field_0x60;
        if ((**(short **)&ptVar1->field_0x10 != 10) && (**(short **)&ptVar1->field_0x10 != 0xc)) {
          return;
        }
        len = c_strlen(ptVar1,1);
        if (len == (tree)0x0) {
          return;
        }
        iVar3 = host_integerp(len,1);
        if (iVar3 == 0) {
          return;
        }
      }
      iVar3 = tree_int_cst_lt(len,uVar8);
      if (iVar3 == 0) {
        uVar8 = get_callee_fndecl(exp);
        uVar5 = tree_nonartificial_location(exp);
        warning_at(uVar5,0,"%Kcall to %D will always overflow destination buffer",exp,uVar8);
      }
    }
  }
  return;
}



void maybe_emit_free_warning(tree exp)

{
  undefined4 uVar1;
  short *psVar2;
  tree arg;
  
  psVar2 = (short *)tree_strip_nop_conversions(*(undefined8 *)&exp->field_0x40);
  if ((((*psVar2 == 0x79) &&
       (psVar2 = (short *)get_base_address(*(undefined8 *)(psVar2 + 0x14)), psVar2 != (short *)0x0))
      && (*psVar2 != 0x2f)) && ((*psVar2 != 0x30 && (*psVar2 != 0x31)))) {
    if (((*psVar2 == 0x20) || ((*psVar2 == 0x22 || (*psVar2 == 0x24)))) ||
       ((*psVar2 == 0x8d &&
        (((**(short **)(psVar2 + 0xc) == 0x20 || (**(short **)(psVar2 + 0xc) == 0x22)) ||
         (**(short **)(psVar2 + 0xc) == 0x24)))))) {
      uVar1 = tree_nonartificial_location(exp);
      warning_at(uVar1,0,"%Kattempt to free a non-heap object %qD",exp,psVar2);
    }
    else {
      uVar1 = tree_nonartificial_location(exp);
      warning_at(uVar1,0,"%Kattempt to free a non-heap object",exp);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_object_size(tree ptr,tree ost)

{
  uchar uVar1;
  int iVar2;
  short *psVar3;
  tree ptVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int object_size_type;
  ulong low;
  long high;
  tree ret;
  ulong bytes;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ret = (tree)0x0;
  uVar1 = validate_arg(ptr,POINTER_TYPE);
  if ((uVar1 == '\0') || (uVar1 = validate_arg(ost,INTEGER_TYPE), uVar1 == '\0')) {
    ptVar4 = (tree)0x0;
  }
  else {
    psVar3 = (short *)tree_strip_nop_conversions(ost);
    if ((*psVar3 == 0x17) &&
       ((iVar2 = tree_int_cst_sgn(psVar3), -1 < iVar2 &&
        (iVar2 = compare_tree_int(psVar3,3), iVar2 < 1)))) {
      iVar2 = tree_low_cst(psVar3,0);
      if ((ptr->field_0x2 & 1) == 0) {
        if (*(short *)ptr == 0x79) {
          uVar6 = compute_builtin_object_size(ptr,iVar2);
          ret = (tree)build_int_cstu(_prepare_call_address,uVar6);
        }
        else if (*(short *)ptr == 0x8d) {
          bytes = compute_builtin_object_size(ptr,iVar2);
          if (iVar2 < 2) {
            uVar5 = 0xffffffffffffffff;
          }
          else {
            uVar5 = 0;
          }
          if (uVar5 != bytes) {
            ret = (tree)build_int_cstu(_prepare_call_address,bytes);
          }
        }
        ptVar4 = ret;
        if (ret != (tree)0x0) {
          low = *(ulong *)&ret->field_0x18;
          high = *(long *)&ret->field_0x20;
          iVar2 = fit_double_type(low,high,&low,&high,*(undefined8 *)&ret->field_0x10);
          ptVar4 = ret;
          if (iVar2 != 0) {
            ret = (tree)0x0;
            ptVar4 = ret;
          }
        }
      }
      else {
        if (iVar2 < 2) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = 0;
        }
        ptVar4 = (tree)build_int_cst_type(_prepare_call_address,uVar6);
      }
    }
    else {
      ptVar4 = (tree)0x0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



tree fold_builtin_memory_chk
               (location_t loc,tree fndecl,tree dest,tree src,tree len,tree size,tree maxlen,
               uchar ignore,built_in_function fcode)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  undefined8 uVar4;
  tree_code code;
  tree fn;
  tree temp;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if (uVar1 != '\0') {
    if (fcode == BUILT_IN_MEMSET_CHK) {
      code = INTEGER_TYPE;
    }
    else {
      code = POINTER_TYPE;
    }
    uVar1 = validate_arg(src,code);
    if (((uVar1 != '\0') && (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 != '\0')) &&
       (uVar1 = validate_arg(size,INTEGER_TYPE), uVar1 != '\0')) {
      if ((fcode != BUILT_IN_MEMSET_CHK) && (iVar2 = operand_equal_p(src,dest,0), iVar2 != 0)) {
        if (fcode != BUILT_IN_MEMPCPY_CHK) {
          ptVar3 = (tree)omit_one_operand_loc
                                   (loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),dest,
                                    len);
          return ptVar3;
        }
        uVar4 = fold_build2_stat_loc(loc,0x42,*(undefined8 *)&dest->field_0x10,dest,len);
        ptVar3 = (tree)fold_convert_loc(loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),
                                        uVar4);
        return ptVar3;
      }
      iVar2 = host_integerp(size,1);
      if (iVar2 == 0) {
        return (tree)0x0;
      }
      iVar2 = integer_all_onesp(size);
      if (iVar2 == 0) {
        uVar4 = 0x119581;
        iVar2 = host_integerp(len,1);
        ptVar3 = len;
        if (iVar2 == 0) {
          if (maxlen == (tree)0x0) {
LAB_001195a2:
            if ((fcode == BUILT_IN_MEMPCPY_CHK) && (ignore != '\0')) {
              if (built_in_decls[529] == (tree)0x0) {
                return (tree)0x0;
              }
              ptVar3 = build_call_expr_loc(loc,built_in_decls[529],4,dest,src,len,size,uVar4);
              return ptVar3;
            }
            return (tree)0x0;
          }
          uVar4 = 0x11959e;
          iVar2 = host_integerp(maxlen,1);
          ptVar3 = maxlen;
          if (iVar2 == 0) goto LAB_001195a2;
        }
        maxlen = ptVar3;
        iVar2 = tree_int_cst_lt(size,maxlen);
        if (iVar2 != 0) {
          return (tree)0x0;
        }
      }
      fn = (tree)0x0;
      if (fcode == BUILT_IN_MEMSET_CHK) {
        fn = built_in_decls[333];
      }
      else if ((uint)fcode < 0x215) {
        if (fcode == BUILT_IN_MEMPCPY_CHK) {
          fn = built_in_decls[332];
        }
        else if ((uint)fcode < 0x214) {
          if (fcode == BUILT_IN_MEMCPY_CHK) {
            fn = built_in_decls[330];
          }
          else if (fcode == BUILT_IN_MEMMOVE_CHK) {
            fn = built_in_decls[331];
          }
        }
      }
      if (fn == (tree)0x0) {
        return (tree)0x0;
      }
      ptVar3 = build_call_expr_loc(loc,fn,3,dest,src,len);
      return ptVar3;
    }
  }
  return (tree)0x0;
}



tree fold_builtin_stxcpy_chk
               (location_t loc,tree fndecl,tree dest,tree src,tree size,tree maxlen,uchar ignore,
               built_in_function fcode)

{
  tree fndecl_00;
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  tree local_48;
  tree len;
  tree fn;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(size,INTEGER_TYPE), uVar1 == '\0')) {
    ptVar3 = (tree)0x0;
  }
  else if ((fcode == BUILT_IN_STRCPY_CHK) && (iVar2 = operand_equal_p(src,dest,0), iVar2 != 0)) {
    ptVar3 = (tree)fold_convert_loc(loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),dest);
  }
  else {
    iVar2 = host_integerp(size,1);
    if (iVar2 == 0) {
      ptVar3 = (tree)0x0;
    }
    else {
      iVar2 = integer_all_onesp();
      if (iVar2 == 0) {
        ptVar3 = c_strlen(src,1);
        if (((ptVar3 == (tree)0x0) ||
            (iVar2 = host_integerp(ptVar3,1), local_48 = ptVar3, iVar2 == 0)) &&
           ((maxlen == (tree)0x0 || (iVar2 = host_integerp(maxlen,1), local_48 = maxlen, iVar2 == 0)
            ))) {
          fndecl_00 = built_in_decls[529];
          if (fcode != BUILT_IN_STPCPY_CHK) {
            if ((ptVar3 != (tree)0x0) && ((ptVar3->field_0x2 & 1) == 0)) {
              if (built_in_decls[529] == (tree)0x0) {
                return (tree)0x0;
              }
              uVar4 = size_int_kind(1,1);
              uVar5 = 0x1198f5;
              uVar4 = size_binop_loc(loc,0x3f,ptVar3,uVar4);
              ptVar3 = build_call_expr_loc(loc,fndecl_00,4,dest,src,uVar4,size,uVar5);
              ptVar3 = (tree)fold_convert_loc(loc,*(undefined8 *)
                                                   (*(long *)&fndecl->field_0x10 + 0x10),ptVar3);
              return ptVar3;
            }
            return (tree)0x0;
          }
          if (ignore == '\0') {
            return (tree)0x0;
          }
          if (built_in_decls[535] == (tree)0x0) {
            return (tree)0x0;
          }
          ptVar3 = build_call_expr_loc(loc,built_in_decls[535],3,dest,src,size);
          return ptVar3;
        }
        iVar2 = tree_int_cst_lt(local_48,size);
        if (iVar2 == 0) {
          return (tree)0x0;
        }
      }
      if (fcode == BUILT_IN_STPCPY_CHK) {
        iVar2 = 0x14f;
      }
      else {
        iVar2 = 0x155;
      }
      if (built_in_decls[iVar2] == (tree)0x0) {
        ptVar3 = (tree)0x0;
      }
      else {
        ptVar3 = build_call_expr_loc(loc,built_in_decls[iVar2],2,dest,src);
      }
    }
  }
  return ptVar3;
}



tree fold_builtin_strncpy_chk(location_t loc,tree dest,tree src,tree len,tree size,tree maxlen)

{
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  tree local_48;
  tree fn;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if ((((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) ||
      (uVar1 = validate_arg(len,INTEGER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(size,INTEGER_TYPE), uVar1 == '\0')) {
    ptVar3 = (tree)0x0;
  }
  else {
    iVar2 = host_integerp(size,1);
    if (iVar2 == 0) {
      ptVar3 = (tree)0x0;
    }
    else {
      iVar2 = integer_all_onesp(size);
      if (iVar2 == 0) {
        iVar2 = host_integerp(len,1);
        local_48 = len;
        if ((iVar2 == 0) &&
           ((maxlen == (tree)0x0 || (iVar2 = host_integerp(maxlen,1), local_48 = maxlen, iVar2 == 0)
            ))) {
          return (tree)0x0;
        }
        iVar2 = tree_int_cst_lt(size,local_48);
        if (iVar2 != 0) {
          return (tree)0x0;
        }
      }
      if (built_in_decls[349] == (tree)0x0) {
        ptVar3 = (tree)0x0;
      }
      else {
        ptVar3 = build_call_expr_loc(loc,built_in_decls[349],3,dest,src,len);
      }
    }
  }
  return ptVar3;
}



tree fold_builtin_strcat_chk(location_t loc,tree fndecl,tree dest,tree src,tree size)

{
  uchar uVar1;
  int iVar2;
  char *pcVar3;
  tree ptVar4;
  char *p;
  tree fn;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if (((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(size,INTEGER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  pcVar3 = c_getstr(src);
  if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\0')) {
    ptVar4 = (tree)omit_one_operand_loc
                             (loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),dest,src);
    return ptVar4;
  }
  iVar2 = host_integerp(size,1);
  if ((iVar2 != 0) && (iVar2 = integer_all_onesp(), iVar2 != 0)) {
    if (built_in_decls[338] == (tree)0x0) {
      return (tree)0x0;
    }
    ptVar4 = build_call_expr_loc(loc,built_in_decls[338],2,dest,src);
    return ptVar4;
  }
  return (tree)0x0;
}



tree fold_builtin_strncat_chk(location_t loc,tree fndecl,tree dest,tree src,tree len,tree size)

{
  uchar uVar1;
  int iVar2;
  char *pcVar3;
  tree ptVar4;
  char *p;
  tree fn;
  tree src_len;
  
  uVar1 = validate_arg(dest,POINTER_TYPE);
  if ((((uVar1 == '\0') || (uVar1 = validate_arg(src,POINTER_TYPE), uVar1 == '\0')) ||
      (uVar1 = validate_arg(size,INTEGER_TYPE), uVar1 == '\0')) ||
     (uVar1 = validate_arg(size,INTEGER_TYPE), uVar1 == '\0')) {
    return (tree)0x0;
  }
  pcVar3 = c_getstr(src);
  if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\0')) {
    ptVar4 = (tree)omit_one_operand_loc
                             (loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),dest,len);
    return ptVar4;
  }
  iVar2 = integer_zerop(len);
  if (iVar2 != 0) {
    ptVar4 = (tree)omit_one_operand_loc
                             (loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),dest,src);
    return ptVar4;
  }
  iVar2 = host_integerp(size,1);
  if (iVar2 == 0) {
    return (tree)0x0;
  }
  iVar2 = integer_all_onesp(size);
  if (iVar2 != 0) {
    if (built_in_decls[347] == (tree)0x0) {
      return (tree)0x0;
    }
    ptVar4 = build_call_expr_loc(loc,built_in_decls[347],3,dest,src,len);
    return ptVar4;
  }
  ptVar4 = c_strlen(src,1);
  if (((ptVar4 != (tree)0x0) && (iVar2 = host_integerp(ptVar4,1), iVar2 != 0)) &&
     ((iVar2 = host_integerp(len,1), iVar2 != 0 && (iVar2 = tree_int_cst_lt(len,ptVar4), iVar2 == 0)
      ))) {
    if (built_in_decls[534] == (tree)0x0) {
      return (tree)0x0;
    }
    ptVar4 = build_call_expr_loc(loc,built_in_decls[534],3,dest,src,size);
    return ptVar4;
  }
  return (tree)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_builtin_sprintf_chk(location_t loc,tree exp,built_in_function fcode)

{
  const_tree arg_00;
  const_tree arg_01;
  const_tree arg_02;
  const_tree arg_03;
  uchar uVar1;
  int iVar2;
  int iVar3;
  char *__s;
  char *pcVar4;
  tree ptVar5;
  undefined8 uVar6;
  int nargs;
  tree len;
  tree dest;
  tree flag;
  tree size;
  tree fmt;
  char *fmt_str;
  tree arg;
  tree fn;
  
  iVar2 = (int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) + -3;
  if (iVar2 < 4) {
    return (tree)0x0;
  }
  arg_00 = *(const_tree *)&exp->field_0x40;
  uVar1 = validate_arg(arg_00,POINTER_TYPE);
  if (uVar1 == '\0') {
    return (tree)0x0;
  }
  uVar1 = validate_arg(*(const_tree *)&exp->field_0x48,INTEGER_TYPE);
  if (uVar1 == '\0') {
    return (tree)0x0;
  }
  arg_01 = *(const_tree *)&exp->field_0x50;
  uVar1 = validate_arg(arg_01,INTEGER_TYPE);
  if (uVar1 != '\0') {
    arg_02 = *(const_tree *)&exp->field_0x58;
    uVar1 = validate_arg(arg_02,POINTER_TYPE);
    if (uVar1 == '\0') {
      return (tree)0x0;
    }
    iVar3 = host_integerp(arg_01);
    if (iVar3 != 0) {
      len = (tree)0x0;
      uVar1 = init_target_chars();
      if (uVar1 == '\0') {
        return (tree)0x0;
      }
      __s = c_getstr(arg_02);
      if (__s != (char *)0x0) {
        pcVar4 = strchr(__s,(int)target_percent);
        if (pcVar4 == (char *)0x0) {
          if ((fcode != BUILT_IN_SPRINTF_CHK) || (iVar2 == 4)) {
            strlen(__s);
            len = (tree)build_int_cstu(_prepare_call_address);
          }
        }
        else if (((fcode == BUILT_IN_SPRINTF_CHK) &&
                 (iVar3 = strcmp(__s,target_percent_s), iVar3 == 0)) && (iVar2 == 5)) {
          arg_03 = *(const_tree *)&exp->field_0x60;
          uVar1 = validate_arg(arg_03,POINTER_TYPE);
          if ((uVar1 != '\0') &&
             ((len = c_strlen(arg_03,1), len == (tree)0x0 ||
              (iVar2 = host_integerp(len), iVar2 == 0)))) {
            len = (tree)0x0;
          }
        }
      }
      iVar2 = integer_all_onesp(arg_01);
      if ((iVar2 == 0) && ((len == (tree)0x0 || (iVar2 = tree_int_cst_lt(len), iVar2 == 0)))) {
        ptVar5 = (tree)0x0;
      }
      else {
        uVar6 = 0x11a0c6;
        iVar2 = integer_zerop();
        if (iVar2 == 0) {
          if (__s == (char *)0x0) {
            return (tree)0x0;
          }
          uVar6 = 0x11a0f2;
          pcVar4 = strchr(__s,(int)target_percent);
          if (pcVar4 != (char *)0x0) {
            uVar6 = 0x11a10a;
            iVar2 = strcmp(__s,target_percent_s);
            if (iVar2 != 0) {
              return (tree)0x0;
            }
          }
        }
        if (fcode == BUILT_IN_VSPRINTF_CHK) {
          iVar2 = 0x17c;
        }
        else {
          iVar2 = 0x175;
        }
        if (built_in_decls[iVar2] == (tree)0x0) {
          ptVar5 = (tree)0x0;
        }
        else {
          ptVar5 = rewrite_call_expr(loc,exp,4,built_in_decls[iVar2],2,arg_00,arg_02,uVar6);
        }
      }
      return ptVar5;
    }
    return (tree)0x0;
  }
  return (tree)0x0;
}



tree fold_builtin_snprintf_chk(location_t loc,tree exp,tree maxlen,built_in_function fcode)

{
  const_tree arg;
  const_tree arg_00;
  const_tree arg_01;
  const_tree arg_02;
  uchar uVar1;
  int iVar2;
  tree ptVar3;
  char *__s;
  char *pcVar4;
  tree dest;
  tree len;
  tree flag;
  tree size;
  tree fmt;
  char *fmt_str;
  tree fn;
  
  if ((int)*(undefined8 *)(*(long *)&exp->field_0x28 + 0x18) < 8) {
    ptVar3 = (tree)0x0;
  }
  else {
    arg = *(const_tree *)&exp->field_0x40;
    uVar1 = validate_arg(arg,POINTER_TYPE);
    if (uVar1 == '\0') {
      ptVar3 = (tree)0x0;
    }
    else {
      arg_00 = *(const_tree *)&exp->field_0x48;
      uVar1 = validate_arg(arg_00,INTEGER_TYPE);
      if (uVar1 == '\0') {
        ptVar3 = (tree)0x0;
      }
      else {
        uVar1 = validate_arg(*(const_tree *)&exp->field_0x50,INTEGER_TYPE);
        if (uVar1 == '\0') {
          ptVar3 = (tree)0x0;
        }
        else {
          arg_01 = *(const_tree *)&exp->field_0x58;
          uVar1 = validate_arg(arg_01,INTEGER_TYPE);
          if (uVar1 == '\0') {
            ptVar3 = (tree)0x0;
          }
          else {
            arg_02 = *(const_tree *)&exp->field_0x60;
            uVar1 = validate_arg(arg_02,POINTER_TYPE);
            if (uVar1 == '\0') {
              ptVar3 = (tree)0x0;
            }
            else {
              iVar2 = host_integerp(arg_01);
              if (iVar2 == 0) {
                ptVar3 = (tree)0x0;
              }
              else {
                iVar2 = integer_all_onesp(arg_01);
                if (iVar2 == 0) {
                  iVar2 = host_integerp(arg_00,1);
                  if ((iVar2 == 0) &&
                     ((maxlen == (tree)0x0 || (iVar2 = host_integerp(maxlen,1), iVar2 == 0)))) {
                    return (tree)0x0;
                  }
                  iVar2 = tree_int_cst_lt(arg_01);
                  if (iVar2 != 0) {
                    return (tree)0x0;
                  }
                }
                uVar1 = init_target_chars();
                if (uVar1 == '\0') {
                  ptVar3 = (tree)0x0;
                }
                else {
                  iVar2 = integer_zerop();
                  if (iVar2 == 0) {
                    __s = c_getstr(arg_02);
                    if (__s == (char *)0x0) {
                      return (tree)0x0;
                    }
                    pcVar4 = strchr(__s,(int)target_percent);
                    if ((pcVar4 != (char *)0x0) &&
                       (iVar2 = strcmp(__s,target_percent_s), iVar2 != 0)) {
                      return (tree)0x0;
                    }
                  }
                  if (fcode == BUILT_IN_VSNPRINTF_CHK) {
                    iVar2 = 0x17b;
                  }
                  else {
                    iVar2 = 0x174;
                  }
                  if (built_in_decls[iVar2] == (tree)0x0) {
                    ptVar3 = (tree)0x0;
                  }
                  else {
                    ptVar3 = rewrite_call_expr(loc,exp,5,built_in_decls[iVar2],3,arg,arg_00,arg_02);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return ptVar3;
}



tree fold_builtin_printf(location_t loc,tree fndecl,tree fmt,tree arg,uchar ignore,
                        built_in_function fcode)

{
  size_t __n;
  undefined8 uVar1;
  long lVar2;
  location_t lVar3;
  uchar uVar4;
  int iVar5;
  tree ptVar6;
  char *pcVar7;
  ulong uVar8;
  tree ptVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long in_FS_OFFSET;
  undefined auStack136 [12];
  built_in_function local_7c;
  tree local_78;
  tree local_70;
  tree local_68;
  uchar local_60;
  location_t local_5c;
  tree fn_putchar;
  tree fn_puts;
  tree call;
  char *str;
  char *fmt_str;
  size_t len;
  char *newstr;
  tree newarg;
  long local_10;
  
  puVar10 = auStack136;
  puVar12 = auStack136;
  local_5c = loc;
  local_68 = fndecl;
  local_70 = fmt;
  local_78 = arg;
  local_7c = fcode;
  local_60 = ignore;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  call = (tree)0x0;
  fmt_str = (char *)0x0;
  if (ignore == '\0') {
    ptVar6 = (tree)0x0;
    puVar12 = auStack136;
    goto LAB_0011a8ba;
  }
  uVar4 = validate_arg(fmt,POINTER_TYPE);
  if (uVar4 == '\0') {
    ptVar6 = (tree)0x0;
    puVar12 = auStack136;
    goto LAB_0011a8ba;
  }
  fmt_str = c_getstr(local_70);
  if (fmt_str == (char *)0x0) {
    ptVar6 = (tree)0x0;
    puVar12 = auStack136;
    goto LAB_0011a8ba;
  }
  if (local_7c == BUILT_IN_PRINTF_UNLOCKED) {
    fn_putchar = built_in_decls[368];
    fn_puts = built_in_decls[370];
  }
  else {
    fn_putchar = implicit_built_in_decls[367];
    fn_puts = implicit_built_in_decls[369];
  }
  uVar4 = init_target_chars();
  if (uVar4 == '\0') {
    ptVar6 = (tree)0x0;
    puVar12 = auStack136;
    goto LAB_0011a8ba;
  }
  iVar5 = strcmp(fmt_str,target_percent_s);
  if (iVar5 == 0) {
LAB_0011a530:
    iVar5 = strcmp(fmt_str,target_percent_s);
    if (iVar5 == 0) {
      if ((local_7c == BUILT_IN_VPRINTF) || (local_7c == BUILT_IN_VPRINTF_CHK)) {
        ptVar6 = (tree)0x0;
        puVar12 = auStack136;
        goto LAB_0011a8ba;
      }
      if (local_78 != (const_tree)0x0) {
        uVar4 = validate_arg(local_78,POINTER_TYPE);
        if (uVar4 != '\0') {
          str = c_getstr(local_78);
          if (str == (char *)0x0) {
            ptVar6 = (tree)0x0;
            puVar12 = auStack136;
            goto LAB_0011a8ba;
          }
          goto LAB_0011a5d5;
        }
      }
      ptVar6 = (tree)0x0;
      puVar12 = auStack136;
      goto LAB_0011a8ba;
    }
    if (((local_7c != BUILT_IN_VPRINTF) && (local_7c != BUILT_IN_VPRINTF_CHK)) &&
       (local_78 != (const_tree)0x0)) {
      ptVar6 = (tree)0x0;
      puVar12 = auStack136;
      goto LAB_0011a8ba;
    }
    str = fmt_str;
LAB_0011a5d5:
    if (*str == '\0') {
      ptVar6 = (tree)build_int_cst(*(undefined8 *)(*(long *)&local_68->field_0x10 + 0x10),0);
      puVar12 = auStack136;
      goto LAB_0011a8ba;
    }
    if (str[1] == '\0') {
      newarg = (tree)build_int_cst(0,(long)*str);
      puVar11 = auStack136;
      if (fn_putchar != (tree)0x0) {
        call = build_call_expr_loc(local_5c,fn_putchar,1,newarg);
        puVar11 = auStack136;
      }
    }
    else {
      len = strlen(str);
      if ((byte)str[len - 1] != target_newline) {
        ptVar6 = (tree)0x0;
        puVar12 = auStack136;
        goto LAB_0011a8ba;
      }
      uVar8 = ((len + 0x17) / 0x10) * 0x10;
      for (; puVar10 != auStack136 + -(uVar8 & 0xfffffffffffff000); puVar10 = puVar10 + -0x1000) {
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      }
      lVar2 = -(ulong)((uint)uVar8 & 0xfff);
      if ((uVar8 & 0xfff) != 0) {
        *(undefined8 *)(puVar10 + ((ulong)((uint)uVar8 & 0xfff) - 8) + lVar2) =
             *(undefined8 *)(puVar10 + ((ulong)((uint)uVar8 & 0xfff) - 8) + lVar2);
      }
      pcVar7 = str;
      newstr = (char *)((ulong)(puVar10 + lVar2 + 0xf) & 0xfffffffffffffff0);
      __n = len - 1;
      *(undefined8 *)(puVar10 + lVar2 + -8) = 0x11a738;
      memcpy((char *)((ulong)(puVar10 + lVar2 + 0xf) & 0xfffffffffffffff0),pcVar7,__n);
      pcVar7 = newstr;
      newstr[len - 1] = '\0';
      iVar5 = (int)len;
      *(undefined8 *)(puVar10 + lVar2 + -8) = 0x11a75e;
      ptVar9 = build_string_literal(iVar5,pcVar7);
      ptVar6 = fn_puts;
      lVar3 = local_5c;
      newarg = ptVar9;
      puVar11 = puVar10 + lVar2;
      if (fn_puts != (tree)0x0) {
        *(undefined8 *)(puVar10 + lVar2 + -8) = 0x11a78c;
        call = build_call_expr_loc(lVar3,ptVar6,1,ptVar9);
        puVar11 = puVar10 + lVar2;
      }
    }
  }
  else {
    pcVar7 = strchr(fmt_str,(int)target_percent);
    if (pcVar7 == (char *)0x0) goto LAB_0011a530;
    if ((local_7c == BUILT_IN_VPRINTF) || (local_7c == BUILT_IN_VPRINTF_CHK)) {
      ptVar6 = (tree)0x0;
      puVar12 = auStack136;
      goto LAB_0011a8ba;
    }
    iVar5 = strcmp(fmt_str,target_percent_s_newline);
    if (iVar5 == 0) {
      if (local_78 != (const_tree)0x0) {
        uVar4 = validate_arg(local_78,POINTER_TYPE);
        if (uVar4 != '\0') {
          puVar11 = auStack136;
          if (fn_puts != (tree)0x0) {
            call = build_call_expr_loc(local_5c,fn_puts,1,local_78);
            puVar11 = auStack136;
          }
          goto LAB_0011a88f;
        }
      }
      ptVar6 = (tree)0x0;
      puVar12 = auStack136;
      goto LAB_0011a8ba;
    }
    iVar5 = strcmp(fmt_str,target_percent_c);
    puVar11 = auStack136;
    if (iVar5 == 0) {
      if (local_78 != (const_tree)0x0) {
        uVar4 = validate_arg(local_78,INTEGER_TYPE);
        if (uVar4 != '\0') {
          puVar11 = auStack136;
          if (fn_putchar != (tree)0x0) {
            call = build_call_expr_loc(local_5c,fn_putchar,1,local_78);
            puVar11 = auStack136;
          }
          goto LAB_0011a88f;
        }
      }
      ptVar6 = (tree)0x0;
      goto LAB_0011a8ba;
    }
  }
LAB_0011a88f:
  ptVar6 = call;
  lVar3 = local_5c;
  puVar12 = puVar11;
  if (call == (tree)0x0) {
    ptVar6 = (tree)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)&local_68->field_0x10 + 0x10);
    *(undefined8 *)(puVar11 + -8) = 0x11a8ba;
    ptVar6 = (tree)fold_convert_loc(lVar3,uVar1,ptVar6);
  }
LAB_0011a8ba:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)(puVar12 + -8) = 0x11a8ce;
    __stack_chk_fail();
  }
  return ptVar6;
}



tree fold_builtin_fprintf
               (location_t loc,tree fndecl,tree fp,tree fmt,tree arg,uchar ignore,
               built_in_function fcode)

{
  uchar uVar1;
  int iVar2;
  char *__s;
  char *pcVar3;
  tree ptVar4;
  tree fn_fputc;
  tree fn_fputs;
  tree call;
  char *fmt_str;
  
  call = (tree)0x0;
  if (ignore == '\0') {
    return (tree)0x0;
  }
  uVar1 = validate_arg(fp,POINTER_TYPE);
  if (uVar1 == '\0') {
    return (tree)0x0;
  }
  uVar1 = validate_arg(fmt,POINTER_TYPE);
  if (uVar1 == '\0') {
    return (tree)0x0;
  }
  __s = c_getstr(fmt);
  if (__s != (char *)0x0) {
    if (fcode == BUILT_IN_FPRINTF_UNLOCKED) {
      fn_fputc = built_in_decls[359];
      fn_fputs = built_in_decls[361];
    }
    else {
      fn_fputc = implicit_built_in_decls[358];
      fn_fputs = implicit_built_in_decls[360];
    }
    uVar1 = init_target_chars();
    if (uVar1 != '\0') {
      pcVar3 = strchr(__s,(int)target_percent);
      if (pcVar3 == (char *)0x0) {
        if (((fcode != BUILT_IN_VFPRINTF) && (fcode != BUILT_IN_VFPRINTF_CHK)) && (arg != (tree)0x0)
           ) {
          return (tree)0x0;
        }
        if (*__s == '\0') {
          if ((fp->field_0x2 & 1) == 0) {
            ptVar4 = (tree)build_int_cst(*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),0);
            return ptVar4;
          }
          return (tree)0x0;
        }
        if (fn_fputs != (tree)0x0) {
          call = build_call_expr_loc(loc,fn_fputs,2,fmt,fp);
        }
      }
      else {
        if ((fcode == BUILT_IN_VFPRINTF) || (fcode == BUILT_IN_VFPRINTF_CHK)) {
          return (tree)0x0;
        }
        iVar2 = strcmp(__s,target_percent_s);
        if (iVar2 == 0) {
          if ((arg == (tree)0x0) || (uVar1 = validate_arg(arg,POINTER_TYPE), uVar1 == '\0')) {
            return (tree)0x0;
          }
          if (fn_fputs != (tree)0x0) {
            call = build_call_expr_loc(loc,fn_fputs,2,arg,fp);
          }
        }
        else {
          iVar2 = strcmp(__s,target_percent_c);
          if (iVar2 == 0) {
            if ((arg == (tree)0x0) || (uVar1 = validate_arg(arg,INTEGER_TYPE), uVar1 == '\0')) {
              return (tree)0x0;
            }
            if (fn_fputc != (tree)0x0) {
              call = build_call_expr_loc(loc,fn_fputc,2,arg,fp);
            }
          }
        }
      }
      if (call == (tree)0x0) {
        ptVar4 = (tree)0x0;
      }
      else {
        ptVar4 = (tree)fold_convert_loc(loc,*(undefined8 *)(*(long *)&fndecl->field_0x10 + 0x10),
                                        call);
      }
      return ptVar4;
    }
    return (tree)0x0;
  }
  return (tree)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uchar init_target_chars(void)

{
  if (init_target_chars::init == '\0') {
    target_newline = (*_expand_shift)(10);
    target_percent = (*_expand_shift)(0x25);
    target_c = (*_expand_shift)(99);
    target_s = (*_expand_shift)(0x73);
    if ((((target_newline == 0) || (target_percent == 0)) || (target_c == 0)) || (target_s == 0)) {
      return '\0';
    }
    target_percent_c[0] = (char)target_percent;
    target_percent_c[1] = (char)target_c;
    target_percent_c[2] = '\0';
    target_percent_s[1] = (char)target_s;
    target_percent_s[2] = '\0';
    target_percent_s_newline[2] = (char)target_newline;
    target_percent_s_newline[3] = '\0';
    init_target_chars::init = '\x01';
    target_percent_s[0] = target_percent_c[0];
    target_percent_s_newline[0] = target_percent_c[0];
    target_percent_s_newline[1] = target_percent_s[1];
  }
  return '\x01';
}



tree do_mpfr_sincos(tree arg,tree arg_sinp,tree arg_cosp)

{
  return (tree)0x0;
}



tree do_mpfr_remquo(tree arg0,tree arg1,tree arg_quo)

{
  return (tree)0x0;
}



tree do_mpfr_lgamma_r(tree arg,tree arg_sg,tree type)

{
  return (tree)0x0;
}



tree gimple_rewrite_call_expr(gimple stmt,int skip,tree fndecl,int n,...)

{
  long lVar1;
  const_gimple gs;
  int index;
  int iVar2;
  location_t lVar3;
  char in_AL;
  undefined8 uVar4;
  ulong uVar5;
  tree *pptVar6;
  tree ptVar7;
  undefined *puVar8;
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
  undefined auStack312 [8];
  tree local_130;
  int local_128;
  int local_124;
  gimple local_120;
  int i;
  int j;
  int oldnargs;
  int nargs;
  location_t loc;
  tree fntype;
  tree fn;
  tree *buffer;
  va_list ap;
  long local_d0;
  tree local_c8 [4];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  
  puVar8 = auStack312;
  if (in_AL != '\0') {
    local_98 = in_XMM0_Da;
    local_88 = in_XMM1_Da;
    local_78 = in_XMM2_Da;
    local_68 = in_XMM3_Da;
    local_58 = in_XMM4_Da;
    local_48 = in_XMM5_Da;
    local_38 = in_XMM6_Da;
    local_28 = in_XMM7_Da;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_130 = fndecl;
  local_128 = n;
  local_124 = skip;
  local_120 = stmt;
  local_a8 = in_R8;
  local_a0 = in_R9;
  oldnargs = gimple_call_num_args(stmt);
  nargs = local_128 + (oldnargs - local_124);
  fntype = *(tree *)&local_130->field_0x10;
  uVar4 = build_pointer_type(fntype);
  fn = (tree)build1_stat(0x79,uVar4,local_130);
  loc = gimple_location(local_120);
  uVar5 = (((long)nargs * 8 + 0x17U) / 0x10) * 0x10;
  for (; puVar8 != auStack312 + -(uVar5 & 0xfffffffffffff000); puVar8 = puVar8 + -0x1000) {
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
  }
  lVar1 = -(ulong)((uint)uVar5 & 0xfff);
  if ((uVar5 & 0xfff) != 0) {
    *(undefined8 *)(puVar8 + ((ulong)((uint)uVar5 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)(puVar8 + ((ulong)((uint)uVar5 & 0xfff) - 8) + lVar1);
  }
  buffer = (tree *)((ulong)(puVar8 + lVar1 + 0xf) & 0xfffffffffffffff0);
  ap[0].gp_offset = 0x20;
  ap[0].fp_offset = 0x30;
  ap[0].overflow_arg_area = &stack0x00000008;
  ap[0].reg_save_area = local_c8;
  for (i = 0; pptVar6 = (tree *)ap[0].overflow_arg_area, i < local_128; i = i + 1) {
    if (ap[0].gp_offset < 0x30) {
      pptVar6 = (tree *)((long)local_c8 + (ulong)ap[0].gp_offset);
      ap[0].gp_offset = ap[0].gp_offset + 8;
    }
    else {
      ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
    }
    ((tree *)((ulong)(puVar8 + lVar1 + 0xf) & 0xfffffffffffffff0))[i] = *pptVar6;
  }
  for (j = local_124; pptVar6 = buffer, ptVar7 = fn, lVar3 = loc, iVar2 = nargs, index = j,
      gs = local_120, j < oldnargs; j = j + 1) {
    pptVar6 = buffer + i;
    *(undefined8 *)(puVar8 + lVar1 + -8) = 0x11af95;
    ptVar7 = gimple_call_arg(gs,index);
    *pptVar6 = ptVar7;
    i = i + 1;
  }
  uVar4 = *(undefined8 *)&fntype->field_0x10;
  *(undefined8 *)(puVar8 + lVar1 + -8) = 0x11afe3;
  uVar4 = build_call_array_loc(lVar3,uVar4,ptVar7,iVar2,pptVar6);
  *(undefined8 *)(puVar8 + lVar1 + -8) = 0x11afeb;
  ptVar7 = (tree)fold(uVar4);
  if (local_d0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)(puVar8 + lVar1 + -8) = 0x11b002;
    __stack_chk_fail();
  }
  return ptVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree gimple_fold_builtin_sprintf_chk(gimple stmt,built_in_function fcode)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  tree ptVar4;
  tree arg_00;
  tree arg_01;
  tree arg_02;
  char *__s;
  char *pcVar5;
  tree arg_03;
  int nargs;
  tree len;
  tree dest;
  tree flag;
  tree size;
  tree fmt;
  char *fmt_str;
  tree arg;
  tree fn;
  
  uVar2 = gimple_call_num_args(stmt);
  if ((int)uVar2 < 4) {
    return (tree)0x0;
  }
  ptVar4 = gimple_call_arg(stmt,0);
  uVar1 = validate_arg(ptVar4,POINTER_TYPE);
  if (uVar1 == '\0') {
    return (tree)0x0;
  }
  arg_00 = gimple_call_arg(stmt,1);
  uVar1 = validate_arg(arg_00,INTEGER_TYPE);
  if (uVar1 == '\0') {
    return (tree)0x0;
  }
  arg_01 = gimple_call_arg(stmt,2);
  uVar1 = validate_arg(arg_01,INTEGER_TYPE);
  if (uVar1 != '\0') {
    arg_02 = gimple_call_arg(stmt,3);
    uVar1 = validate_arg(arg_02,POINTER_TYPE);
    if (uVar1 == '\0') {
      return (tree)0x0;
    }
    iVar3 = host_integerp(arg_01);
    if (iVar3 == 0) {
      return (tree)0x0;
    }
    len = (tree)0x0;
    uVar1 = init_target_chars();
    if (uVar1 == '\0') {
      return (tree)0x0;
    }
    __s = c_getstr(arg_02);
    if (__s != (char *)0x0) {
      pcVar5 = strchr(__s,(int)target_percent);
      if (pcVar5 == (char *)0x0) {
        if ((fcode != BUILT_IN_SPRINTF_CHK) || (uVar2 == 4)) {
          strlen(__s);
          len = (tree)build_int_cstu(_prepare_call_address);
        }
      }
      else if (((fcode == BUILT_IN_SPRINTF_CHK) &&
               (iVar3 = strcmp(__s,target_percent_s), iVar3 == 0)) && (uVar2 == 5)) {
        arg_03 = gimple_call_arg(stmt,4);
        uVar1 = validate_arg(arg_03,POINTER_TYPE);
        if ((uVar1 != '\0') &&
           ((len = c_strlen(arg_03,1), len == (tree)0x0 || (iVar3 = host_integerp(len), iVar3 == 0))
           )) {
          len = (tree)0x0;
        }
      }
    }
    iVar3 = integer_all_onesp(arg_01);
    if ((iVar3 == 0) && ((len == (tree)0x0 || (iVar3 = tree_int_cst_lt(len), iVar3 == 0)))) {
      ptVar4 = (tree)0x0;
    }
    else {
      iVar3 = integer_zerop(arg_00);
      if (iVar3 == 0) {
        if (__s == (char *)0x0) {
          return (tree)0x0;
        }
        pcVar5 = strchr(__s,(int)target_percent);
        if ((pcVar5 != (char *)0x0) && (iVar3 = strcmp(__s,target_percent_s), iVar3 != 0)) {
          return (tree)0x0;
        }
      }
      if (fcode == BUILT_IN_VSPRINTF_CHK) {
        iVar3 = 0x17c;
      }
      else {
        iVar3 = 0x175;
      }
      if (built_in_decls[iVar3] == (tree)0x0) {
        ptVar4 = (tree)0x0;
      }
      else {
        ptVar4 = gimple_rewrite_call_expr(stmt,4,built_in_decls[iVar3],2,ptVar4,arg_02);
      }
    }
    return ptVar4;
  }
  return (tree)0x0;
}



tree gimple_fold_builtin_snprintf_chk(gimple stmt,tree maxlen,built_in_function fcode)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  tree ptVar4;
  tree arg;
  tree arg_00;
  tree arg_01;
  tree arg_02;
  char *__s;
  char *pcVar5;
  undefined8 uVar6;
  tree dest;
  tree len;
  tree flag;
  tree size;
  tree fmt;
  char *fmt_str;
  tree fn;
  
  uVar2 = gimple_call_num_args(stmt);
  if (uVar2 < 5) {
    ptVar4 = (tree)0x0;
  }
  else {
    ptVar4 = gimple_call_arg(stmt,0);
    uVar1 = validate_arg(ptVar4,POINTER_TYPE);
    if (uVar1 == '\0') {
      ptVar4 = (tree)0x0;
    }
    else {
      arg = gimple_call_arg(stmt,1);
      uVar1 = validate_arg(arg,INTEGER_TYPE);
      if (uVar1 == '\0') {
        ptVar4 = (tree)0x0;
      }
      else {
        arg_00 = gimple_call_arg(stmt,2);
        uVar1 = validate_arg(arg_00,INTEGER_TYPE);
        if (uVar1 == '\0') {
          ptVar4 = (tree)0x0;
        }
        else {
          arg_01 = gimple_call_arg(stmt,3);
          uVar1 = validate_arg(arg_01,INTEGER_TYPE);
          if (uVar1 == '\0') {
            ptVar4 = (tree)0x0;
          }
          else {
            arg_02 = gimple_call_arg(stmt,4);
            uVar1 = validate_arg(arg_02,POINTER_TYPE);
            if (uVar1 == '\0') {
              ptVar4 = (tree)0x0;
            }
            else {
              iVar3 = host_integerp(arg_01);
              if (iVar3 == 0) {
                ptVar4 = (tree)0x0;
              }
              else {
                iVar3 = integer_all_onesp(arg_01);
                if (iVar3 == 0) {
                  iVar3 = host_integerp(arg,1);
                  if ((iVar3 == 0) &&
                     ((maxlen == (tree)0x0 || (iVar3 = host_integerp(maxlen,1), iVar3 == 0)))) {
                    return (tree)0x0;
                  }
                  iVar3 = tree_int_cst_lt(arg_01);
                  if (iVar3 != 0) {
                    return (tree)0x0;
                  }
                }
                uVar1 = init_target_chars();
                if (uVar1 == '\0') {
                  ptVar4 = (tree)0x0;
                }
                else {
                  uVar6 = 0x11b52b;
                  iVar3 = integer_zerop(arg_00);
                  if (iVar3 == 0) {
                    __s = c_getstr(arg_02);
                    if (__s == (char *)0x0) {
                      return (tree)0x0;
                    }
                    uVar6 = 0x11b567;
                    pcVar5 = strchr(__s,(int)target_percent);
                    if (pcVar5 != (char *)0x0) {
                      uVar6 = 0x11b57f;
                      iVar3 = strcmp(__s,target_percent_s);
                      if (iVar3 != 0) {
                        return (tree)0x0;
                      }
                    }
                  }
                  if (fcode == BUILT_IN_VSNPRINTF_CHK) {
                    iVar3 = 0x17b;
                  }
                  else {
                    iVar3 = 0x174;
                  }
                  if (built_in_decls[iVar3] == (tree)0x0) {
                    ptVar4 = (tree)0x0;
                  }
                  else {
                    ptVar4 = gimple_rewrite_call_expr
                                       (stmt,5,built_in_decls[iVar3],3,ptVar4,arg,arg_02,uVar6);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return ptVar4;
}



tree gimple_fold_builtin_varargs(tree fndecl,gimple stmt,uchar ignore)

{
  built_in_function fcode_00;
  tree ptVar1;
  built_in_function fcode;
  tree ret;
  
  fcode_00 = (built_in_function)(*(ushort *)&fndecl->field_0xd8 & 0x7ff);
  ret = (tree)0x0;
  if (fcode_00 == BUILT_IN_VSPRINTF_CHK) {
LAB_0011b66c:
    ret = gimple_fold_builtin_sprintf_chk(stmt,fcode_00);
  }
  else {
    if (0x21d < (uint)fcode_00) goto LAB_0011b69c;
    if (fcode_00 != BUILT_IN_VSNPRINTF_CHK) {
      if (0x21c < (uint)fcode_00) goto LAB_0011b69c;
      if (fcode_00 != BUILT_IN_SNPRINTF_CHK) {
        if (fcode_00 != BUILT_IN_SPRINTF_CHK) goto LAB_0011b69c;
        goto LAB_0011b66c;
      }
    }
    ret = gimple_fold_builtin_snprintf_chk(stmt,(tree)0x0,fcode_00);
  }
LAB_0011b69c:
  if (ret == (tree)0x0) {
    ptVar1 = (tree)0x0;
  }
  else {
    ptVar1 = (tree)build1_stat(0x74,*(undefined8 *)&ret->field_0x10,ret);
    ptVar1->field_0x2 = ptVar1->field_0x2 | 0x80;
  }
  return ptVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

tree fold_call_stmt(gimple stmt,uchar ignore)

{
  uchar uVar1;
  location_t loc_00;
  tree fndecl_00;
  tree ptVar2;
  long in_FS_OFFSET;
  int i;
  int i_1;
  location_t loc;
  int nargs;
  tree ret;
  tree arglist;
  tree realret;
  tree fndecl;
  tree args [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ret = (tree)0x0;
  fndecl_00 = gimple_call_fndecl(stmt);
  loc_00 = gimple_location(stmt);
  if ((((fndecl_00 != (tree)0x0) && (*(short *)fndecl_00 == 0x1d)) &&
      ((fndecl_00->field_0xd9 & 0x18) != 0)) &&
     (uVar1 = gimple_call_va_arg_pack_p(stmt), uVar1 == '\0')) {
    i = gimple_call_num_args(stmt);
    uVar1 = avoid_folding_inline_builtin(fndecl_00);
    if (uVar1 != '\0') {
      ret = (tree)0x0;
      goto LAB_0011b987;
    }
    if ((fndecl_00->field_0xd9 & 0x18) == 0x10) {
      arglist = (tree)0x0;
      while (i = i - 1, -1 < i) {
        ptVar2 = gimple_call_arg(stmt,i);
        arglist = (tree)tree_cons_stat(0,ptVar2,arglist);
      }
      ret = (tree)(*_real_arithmetic)(fndecl_00,arglist,ignore);
      goto LAB_0011b987;
    }
    if (i < 5) {
      for (i_1 = 0; i_1 < i; i_1 = i_1 + 1) {
        ptVar2 = gimple_call_arg(stmt,i_1);
        args[i_1] = ptVar2;
      }
      ret = fold_builtin_n(loc_00,fndecl_00,args,i,ignore);
    }
    if (ret == (tree)0x0) {
      ret = gimple_fold_builtin_varargs(fndecl_00,stmt,ignore);
    }
    if (ret != (tree)0x0) {
      uVar1 = gimple_has_location(stmt);
      if (uVar1 != '\0') {
        realret = ret;
        if (*(short *)ret == 0x74) {
          realret = *(tree *)&ret->field_0x28;
        }
        ret = realret;
        if ((((realret != (tree)0x0) &&
             (3 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)realret * 4))) &&
            (*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)realret * 4) < 0xb)) &&
           (((*(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)realret * 4) < 4 ||
             (10 < *(uint *)(&tree_code_type + (long)(int)(uint)*(ushort *)realret * 4))) ||
            (*(int *)&realret->field_0x18 == 0)))) {
          *(location_t *)&realret->field_0x18 = loc_00;
        }
      }
      goto LAB_0011b987;
    }
  }
  ret = (tree)0x0;
LAB_0011b987:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ret;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void set_builtin_user_assembler_name(tree decl,char *asmspec)

{
  ushort uVar1;
  tree builtin;
  
  if (((*(short *)decl != 0x1d) || ((decl->field_0xd9 & 0x18) != 0x18)) || (asmspec == (char *)0x0))
  {
    fancy_abort("builtins.c",0x362b,&DAT_0011bd60);
  }
  set_user_assembler_name(built_in_decls[(int)(uint)(*(ushort *)&decl->field_0xd8 & 0x7ff)],asmspec)
  ;
  uVar1 = *(ushort *)&decl->field_0xd8 & 0x7ff;
  if ((uVar1 != 0x1c1) && (uVar1 < 0x1c2)) {
    if (uVar1 == 0x19c) {
      libfunc_table = set_user_assembler_libfunc("abort",asmspec);
    }
    else if (uVar1 < 0x19d) {
      if (uVar1 == 0x14d) {
        init_block_clear_fn(asmspec);
        _fold_build1_stat_loc = set_user_assembler_libfunc("memset",asmspec);
      }
      else if (uVar1 < 0x14e) {
        if (uVar1 == 0x14b) {
          _cmpstrn_optab = set_user_assembler_libfunc("memmove",asmspec);
        }
        else if (uVar1 < 0x14c) {
          if (uVar1 == 0x149) {
            _build_fold_addr_expr_with_type_loc = set_user_assembler_libfunc("memcmp",asmspec);
          }
          else if (uVar1 == 0x14a) {
            init_block_move_fn(asmspec);
            cmpstr_optab = set_user_assembler_libfunc("memcpy",asmspec);
          }
        }
      }
    }
  }
  return;
}


