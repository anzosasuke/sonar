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

typedef uint source_location;

typedef source_location location_t;

typedef struct cfg_hooks cfg_hooks, *Pcfg_hooks;

typedef struct basic_block_def basic_block_def, *Pbasic_block_def;

typedef struct basic_block_def * basic_block;


// WARNING! conflicting data type names: /DWARF/FILE.h/FILE - /stdio.h/FILE

typedef struct edge_def edge_def, *Pedge_def;

typedef struct edge_def * edge;

typedef struct edge_def * const_edge;

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

typedef struct basic_block_def * const_basic_block;

typedef struct simple_bitmap_def simple_bitmap_def, *Psimple_bitmap_def;

typedef struct simple_bitmap_def * sbitmap;

typedef struct loop loop, *Ploop;

typedef struct VEC_edge_heap VEC_edge_heap, *PVEC_edge_heap;

typedef struct VEC_edge_gc VEC_edge_gc, *PVEC_edge_gc;

typedef struct et_node et_node, *Pet_node;

typedef union basic_block_il_dependent basic_block_il_dependent, *Pbasic_block_il_dependent;

typedef long gcov_type;

typedef union edge_def_insns edge_def_insns, *Pedge_def_insns;

typedef union tree_node tree_node, *Ptree_node;

typedef union tree_node * tree;

typedef struct VEC_edge_base VEC_edge_base, *PVEC_edge_base;

typedef struct gimple_bb_info gimple_bb_info, *Pgimple_bb_info;

typedef struct rtl_bb_info rtl_bb_info, *Prtl_bb_info;

typedef struct gimple_seq_d gimple_seq_d, *Pgimple_seq_d;

typedef struct gimple_seq_d * gimple_seq;

typedef struct rtx_def rtx_def, *Prtx_def;

typedef struct rtx_def * rtx;

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

typedef union u u, *Pu;

typedef struct double_int double_int, *Pdouble_int;

typedef struct real_value real_value, *Preal_value;

typedef struct fixed_value fixed_value, *Pfixed_value;

typedef struct ht_identifier ht_identifier, *Pht_identifier;

typedef struct lang_decl lang_decl, *Plang_decl;

typedef struct var_ann_d var_ann_d, *Pvar_ann_d;

typedef struct function function, *Pfunction;

typedef int alias_set_type;

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

typedef struct cl_optimization cl_optimization, *Pcl_optimization;

typedef struct cl_target_option cl_target_option, *Pcl_target_option;

typedef union rtunion_def rtunion_def, *Prtunion_def;

typedef union rtunion_def rtunion;

typedef struct block_symbol block_symbol, *Pblock_symbol;

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

typedef struct eh_status eh_status, *Peh_status;

typedef struct control_flow_graph control_flow_graph, *Pcontrol_flow_graph;

typedef struct gimple_df gimple_df, *Pgimple_df;

typedef struct loops loops, *Ploops;

typedef struct htab htab, *Phtab;

typedef struct htab * htab_t;

typedef struct machine_function machine_function, *Pmachine_function;

typedef struct language_function language_function, *Planguage_function;

typedef struct die_struct die_struct, *Pdie_struct;

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

typedef struct rtvec_def rtvec_def, *Prtvec_def;

typedef struct rtvec_def * rtvec;

typedef struct addr_diff_vec_flags addr_diff_vec_flags, *Paddr_diff_vec_flags;

typedef struct cselib_val_struct cselib_val_struct, *Pcselib_val_struct;

typedef struct bitmap_head_def bitmap_head_def, *Pbitmap_head_def;

typedef struct mem_attrs mem_attrs, *Pmem_attrs;

typedef struct reg_attrs reg_attrs, *Preg_attrs;

typedef struct constant_descriptor_rtx constant_descriptor_rtx, *Pconstant_descriptor_rtx;

typedef struct object_block object_block, *Pobject_block;

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

typedef uint hashval_t;

typedef hashval_t (* htab_hash)(void *);

typedef int (* htab_eq)(void *, void *);

typedef void (* htab_del)(void *);

typedef void * (* htab_alloc)(size_t, size_t);

typedef void (* htab_free)(void *);

typedef void * (* htab_alloc_with_arg)(void *, size_t, size_t);

typedef void (* htab_free_with_arg)(void *, void *);

typedef struct stack_local_entry stack_local_entry, *Pstack_local_entry;

typedef struct machine_cfa_state machine_cfa_state, *Pmachine_cfa_state;

typedef enum calling_abi {
    SYSV_ABI=0,
    MS_ABI=1
} calling_abi;

typedef struct constructor_elt_d constructor_elt_d, *Pconstructor_elt_d;

typedef struct constructor_elt_d constructor_elt;

typedef struct bitmap_element_def bitmap_element_def, *Pbitmap_element_def;

typedef struct bitmap_element_def bitmap_element;

typedef struct bitmap_obstack bitmap_obstack, *Pbitmap_obstack;

typedef union section section, *Psection;

typedef struct VEC_rtx_gc VEC_rtx_gc, *PVEC_rtx_gc;

typedef struct VEC_basic_block_base VEC_basic_block_base, *PVEC_basic_block_base;

typedef ulong BITMAP_WORD;

typedef struct obstack obstack, *Pobstack;

typedef struct _obstack_chunk _obstack_chunk, *P_obstack_chunk;

typedef struct section_common section_common, *Psection_common;

typedef struct named_section named_section, *Pnamed_section;

typedef struct unnamed_section unnamed_section, *Punnamed_section;

typedef struct noswitch_section noswitch_section, *Pnoswitch_section;

typedef struct VEC_rtx_base VEC_rtx_base, *PVEC_rtx_base;

typedef void (* unnamed_section_callback)(void *);

typedef uchar (* noswitch_section_callback)(tree, char *, ulong, ulong);

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

struct gimple_df {
};

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

struct lang_decl {
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

union gimple_statement_d {
};

struct tree_label_decl {
    struct tree_decl_with_rtl common;
    int label_decl_uid;
    int eh_landing_pad_nr;
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

struct tree_const_decl {
    struct tree_decl_with_rtl common;
};

struct ptr_info_def {
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

struct simple_bitmap_def {
    uchar * popcount;
    uint n_bits;
    uint size;
    ulong elms[1];
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

struct _obstack_chunk {
    char * limit;
    struct _obstack_chunk * prev;
    char contents[4];
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
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

struct tree_statement_list {
    struct tree_common common;
    struct tree_statement_list_node * head;
    struct tree_statement_list_node * tail;
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

struct VEC_edge_heap {
    struct VEC_edge_base base;
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

struct ht_identifier {
    uchar * str;
    uint len;
    uint hash_value;
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

struct tree_vector {
    struct tree_common common;
    tree elements;
};

struct gimple_seq_d {
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
};

struct VEC_edge_gc {
    struct VEC_edge_base base;
};

struct rtvec_def {
    int num_elem;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
    rtx elem[1];
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

typedef struct sequence_stack sequence_stack, *Psequence_stack;

struct sequence_stack {
    rtx first;
    rtx last;
    struct sequence_stack * next;
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

typedef struct incoming_args incoming_args, *Pincoming_args;

typedef struct ix86_args ix86_args, *Pix86_args;

typedef struct ix86_args CUMULATIVE_ARGS;

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

typedef struct rtl_eh rtl_eh, *Prtl_eh;

typedef struct VEC_uchar_gc VEC_uchar_gc, *PVEC_uchar_gc;

typedef struct VEC_uchar_base VEC_uchar_base, *PVEC_uchar_base;


// WARNING! conflicting data type names: /DWARF/vecprim.h/uchar - /uchar

struct VEC_uchar_base {
    uint num;
    uint alloc;
    uchar vec[1];
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
};

struct VEC_uchar_gc {
    struct VEC_uchar_base base;
};

struct rtl_eh {
    rtx ehr_stackadj;
    rtx ehr_handler;
    rtx ehr_label;
    rtx sjlj_fc;
    rtx sjlj_exit_after;
    struct VEC_uchar_gc * action_record_data;
    struct VEC_call_site_record_gc * call_site_record[2];
};

typedef struct varasm_status varasm_status, *Pvarasm_status;

typedef struct rtx_constant_pool rtx_constant_pool, *Prtx_constant_pool;

struct varasm_status {
    struct rtx_constant_pool * pool;
    uint deferred_constants;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct rtx_constant_pool {
};

typedef struct expr_status expr_status, *Pexpr_status;

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

typedef struct function_subsections function_subsections, *Pfunction_subsections;

typedef struct initial_value_struct initial_value_struct, *Pinitial_value_struct;

struct initial_value_struct {
};

struct function_subsections {
    char * hot_section_label;
    char * cold_section_label;
    char * hot_section_end_label;
    char * cold_section_end_label;
    char * unlikely_text_section_name;
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

typedef ulong HARD_REG_ELT_TYPE;

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

typedef struct cpp_reader cpp_reader, *Pcpp_reader;

struct cpp_reader {
};

typedef struct stdarg_info stdarg_info, *Pstdarg_info;

struct stdarg_info {
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

typedef struct bitmap_head_def * bitmap;

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

typedef void * (* line_map_realloc)(void *, size_t);

typedef struct line_map line_map, *Pline_map;

typedef uint linenum_type;

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

typedef enum attr_type {
    TYPE_OTHER=0,
    TYPE_MULTI=1,
    TYPE_ALU=2,
    TYPE_ALU1=3,
    TYPE_NEGNOT=4,
    TYPE_IMOV=5,
    TYPE_IMOVX=6,
    TYPE_LEA=7,
    TYPE_INCDEC=8,
    TYPE_ISHIFT=9,
    TYPE_ISHIFT1=10,
    TYPE_ROTATE=11,
    TYPE_ROTATE1=12,
    TYPE_IMUL=13,
    TYPE_IDIV=14,
    TYPE_ICMP=15,
    TYPE_TEST=16,
    TYPE_IBR=17,
    TYPE_SETCC=18,
    TYPE_ICMOV=19,
    TYPE_PUSH=20,
    TYPE_POP=21,
    TYPE_CALL=22,
    TYPE_CALLV=23,
    TYPE_LEAVE=24,
    TYPE_STR=25,
    TYPE_BITMANIP=26,
    TYPE_FMOV=27,
    TYPE_FOP=28,
    TYPE_FSGN=29,
    TYPE_FMUL=30,
    TYPE_FDIV=31,
    TYPE_FPSPC=32,
    TYPE_FCMOV=33,
    TYPE_FCMP=34,
    TYPE_FXCH=35,
    TYPE_FISTP=36,
    TYPE_FISTTP=37,
    TYPE_FRNDINT=38,
    TYPE_SSELOG=39,
    TYPE_SSELOG1=40,
    TYPE_SSEIADD=41,
    TYPE_SSEIADD1=42,
    TYPE_SSEISHFT=43,
    TYPE_SSEIMUL=44,
    TYPE_SSE=45,
    TYPE_SSEMOV=46,
    TYPE_SSEADD=47,
    TYPE_SSEMUL=48,
    TYPE_SSECMP=49,
    TYPE_SSECOMI=50,
    TYPE_SSECVT=51,
    TYPE_SSECVT1=52,
    TYPE_SSEICVT=53,
    TYPE_SSEDIV=54,
    TYPE_SSEINS=55,
    TYPE_SSEMULADD=56,
    TYPE_SSE4ARG=57,
    TYPE_LWP=58,
    TYPE_MMX=59,
    TYPE_MMXMOV=60,
    TYPE_MMXADD=61,
    TYPE_MMXMUL=62,
    TYPE_MMXCMP=63,
    TYPE_MMXCVT=64,
    TYPE_MMXSHFT=65
} attr_type;

typedef enum attr_mode {
    MODE_UNKNOWN=0,
    MODE_NONE=1,
    MODE_QI=2,
    MODE_HI=3,
    MODE_SI=4,
    MODE_DI=5,
    MODE_TI=6,
    MODE_OI=7,
    MODE_SF=8,
    MODE_DF=9,
    MODE_XF=10,
    MODE_TF=11,
    MODE_V8SF=12,
    MODE_V4DF=13,
    MODE_V4SF=14,
    MODE_V2DF=15,
    MODE_V2SF=16,
    MODE_V1DF=17
} attr_mode;


// WARNING! conflicting data type names: /DWARF/struct_FILE.h/_IO_FILE - /stdio.h/_IO_FILE

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

typedef bitmap regset;

typedef long ptrdiff_t;

typedef enum tls_model {
    TLS_MODEL_NONE=0,
    TLS_MODEL_EMULATED=1,
    TLS_MODEL_GLOBAL_DYNAMIC=2,
    TLS_MODEL_REAL=2,
    TLS_MODEL_LOCAL_DYNAMIC=3,
    TLS_MODEL_INITIAL_EXEC=4,
    TLS_MODEL_LOCAL_EXEC=5
} tls_model;

typedef struct VEC_int_heap VEC_int_heap, *PVEC_int_heap;

typedef struct VEC_int_base VEC_int_base, *PVEC_int_base;

struct VEC_int_base {
    uint num;
    uint alloc;
    int vec[1];
};

struct VEC_int_heap {
    struct VEC_int_base base;
};

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




uint rhs_regno(const_rtx x)

{
  return *(uint *)&x->u;
}



char * output_16(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,0,0);
  return pcVar1;
}



char * output_18(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,0,0);
  return pcVar1;
}



char * output_20(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,0,0);
  return pcVar1;
}



char * output_21(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,0,0);
  return pcVar1;
}



char * output_24(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,0,1);
  return pcVar1;
}



char * output_26(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,0,0);
  return pcVar1;
}



char * output_27(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,0,0);
  return pcVar1;
}



char * output_31(rtx *operands,rtx insn)

{
  return "sahf";
}



char * output_32(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,1,0);
  return pcVar1;
}



char * output_33(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,1,0);
  return pcVar1;
}



char * output_34(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,1,0);
  return pcVar1;
}



char * output_35(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,1,1);
  return pcVar1;
}



char * output_36(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,1,1);
  return pcVar1;
}



char * output_37(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fp_compare(insn,operands,1,1);
  return pcVar1;
}



char * output_43(rtx *operands,rtx insn)

{
  operands[1] = tls_modbase_operand;
  return "or{l}\t{%1, %0|%0, %1}";
}



char * output_44(rtx *operands,rtx insn)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = get_attr_type(insn);
  if (uVar2 == 0x3c) {
    iVar3 = get_attr_mode(insn);
    if (iVar3 == 5) {
      return "movq\t{%1, %0|%0, %1}";
    }
    return "movd\t{%1, %0|%0, %1}";
  }
  if (uVar2 < 0x3d) {
    if (uVar2 == 0x3b) {
LAB_001003c4:
      return "pxor\t%0, %0";
    }
    if (uVar2 < 0x3c) {
      if (uVar2 == 0x2e) {
        uVar2 = get_attr_mode(insn);
        if (uVar2 == 0xe) {
          return "%vmovaps\t{%1, %0|%0, %1}";
        }
        if (uVar2 < 0xf) {
          if (uVar2 == 8) {
            return "%vmovss\t{%1, %0|%0, %1}";
          }
          if (uVar2 < 9) {
            if (uVar2 == 4) {
              return "%vmovd\t{%1, %0|%0, %1}";
            }
            if (uVar2 == 6) {
              return "%vmovdqa\t{%1, %0|%0, %1}";
            }
          }
        }
        fancy_abort("insn-output.c",0xbc,&DAT_00107b6b);
        goto LAB_001003c4;
      }
      if (uVar2 < 0x2f) {
        if (uVar2 == 7) {
          return "lea{l}\t{%1, %0|%0, %1}";
        }
        if (uVar2 == 0x28) {
          iVar3 = get_attr_mode(insn);
          if (iVar3 == 6) {
            return "%vpxor\t%0, %d0";
          }
          return "%vxorps\t%0, %d0";
        }
      }
    }
  }
  if ((flag_pic != 0) && (cVar1 = legitimate_pic_operand_p(operands[1]), cVar1 == '\0')) {
    fancy_abort("insn-output.c",0xcb,&DAT_00107b6b);
  }
  return "mov{l}\t{%1, %0|%0, %1}";
}



char * output_47(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 6) {
    pcVar2 = "movz{wl|x}\t{%1, %k0|%k0, %1}";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 4) {
      pcVar2 = "mov{l}\t{%k1, %k0|%k0, %k1}";
    }
    else {
      pcVar2 = "mov{w}\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_53(rtx *operands,rtx insn)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 6) {
    if (((*(short *)operands[1] != 0x25) || (uVar2 = rhs_regno(operands[1]), 3 < uVar2)) &&
       (*(short *)operands[1] != 0x2b)) {
      fancy_abort("insn-output.c",0xed,&DAT_00107b6b);
    }
    return "movz{bl|x}\t{%1, %k0|%k0, %1}";
  }
  iVar1 = get_attr_mode(insn);
  if (iVar1 == 4) {
    return "mov{l}\t{%k1, %k0|%k0, %k1}";
  }
  return "mov{b}\t{%1, %0|%0, %1}";
}



char * output_60(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 6) {
    pcVar2 = "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
  }
  else {
    pcVar2 = "mov{b}\t{%h1, %0|%0, %h1}";
  }
  return pcVar2;
}



char * output_62(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 6) {
    pcVar2 = "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
  }
  else {
    pcVar2 = "mov{b}\t{%h1, %0|%0, %h1}";
  }
  return pcVar2;
}



char * output_67(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = "vxorps\t%0, %0, %0";
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0x137,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = misaligned_operand(*operands,0x13);
    if ((iVar1 == 0) && (iVar1 = misaligned_operand(operands[1],0x13), iVar1 == 0)) {
      return "vmovdqa\t{%1, %0|%0, %1}";
    }
    pcVar2 = "vmovdqu\t{%1, %0|%0, %1}";
  }
  return pcVar2;
}



char * output_68(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "%vxorps\t%0, %d0";
    }
    else {
      pcVar2 = "%vpxor\t%0, %d0";
    }
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0x15f,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = misaligned_operand(*operands,0x12);
    if ((iVar1 == 0) && (iVar1 = misaligned_operand(operands[1],0x12), iVar1 == 0)) {
      iVar1 = get_attr_mode(insn);
      if (iVar1 == 0xe) {
        return "%vmovaps\t{%1, %0|%0, %1}";
      }
      return "%vmovdqa\t{%1, %0|%0, %1}";
    }
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "%vmovups\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "%vmovdqu\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_69(rtx *operands,rtx insn)

{
  if (which_alternative != 1) {
    fancy_abort("insn-output.c",0x16d,&DAT_00107b6b);
  }
  return "push{l}\t%1";
}



char * output_70(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  switch(which_alternative) {
  case 0:
  case 1:
    pcVar2 = (char *)output_387_reg_move(insn,operands);
    break;
  case 2:
    pcVar2 = (char *)standard_80387_constant_opcode(operands[1]);
    break;
  case 3:
  case 4:
    pcVar2 = "mov{l}\t{%1, %0|%0, %1}";
    break;
  case 5:
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 6) {
      pcVar2 = "%vpxor\t%0, %d0";
    }
    else {
      pcVar2 = "%vxorps\t%0, %d0";
    }
    break;
  case 6:
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "%vmovaps\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "%vmovss\t{%1, %d0|%d0, %1}";
    }
    break;
  case 7:
    if ((ix86_isa_flags & 0x20) == 0) {
      pcVar2 = "movss\t{%1, %0|%0, %1}";
    }
    else if (*(short *)operands[1] == 0x25) {
      pcVar2 = "vmovss\t{%1, %0, %0|%0, %0, %1}";
    }
    else {
      pcVar2 = "vmovss\t{%1, %0|%0, %1}";
    }
    break;
  case 8:
    pcVar2 = "%vmovss\t{%1, %0|%0, %1}";
    break;
  case 9:
  case 10:
  case 0xe:
  case 0xf:
    pcVar2 = "movd\t{%1, %0|%0, %1}";
    break;
  case 0xb:
    pcVar2 = "movq\t{%1, %0|%0, %1}";
    break;
  case 0xc:
  case 0xd:
    pcVar2 = "%vmovd\t{%1, %0|%0, %1}";
    break;
  default:
    fancy_abort("insn-output.c",0x19f,&DAT_00107b6b);
    pcVar2 = "";
  }
  return pcVar2;
}



char * output_71(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if ((*(short *)*operands == 0x25) && (uVar1 = rhs_regno(*operands), uVar1 == 8)) {
    return "fxch\t%1";
  }
  return "fxch\t%0";
}



char * output_72(rtx *operands,rtx insn)

{
  fancy_abort("insn-output.c",0x1b9,&DAT_00107b6b);
  return "";
}



char * output_73(rtx *operands,rtx insn)

{
  fancy_abort("insn-output.c",0x1c6,&DAT_00107b6b);
  return "";
}



char * output_74(rtx *operands,rtx insn)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  switch(which_alternative) {
  case 0:
  case 1:
    pcVar3 = (char *)output_387_reg_move(insn,operands);
    break;
  case 2:
    pcVar3 = (char *)standard_80387_constant_opcode(operands[1]);
    break;
  case 3:
  case 4:
    pcVar3 = "#";
    break;
  case 5:
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xf) {
      return "%vxorpd\t%0, %d0";
    }
    if (uVar1 < 0x10) {
      if (uVar1 == 6) {
        return "%vpxor\t%0, %d0";
      }
      if (uVar1 == 0xe) {
        return "%vxorps\t%0, %d0";
      }
    }
    fancy_abort("insn-output.c",0x1e8,&DAT_00107b6b);
  case 6:
  case 7:
  case 8:
    uVar2 = get_attr_mode(insn);
    switch(uVar2) {
    case 5:
      pcVar3 = "%vmovq\t{%1, %0|%0, %1}";
      break;
    case 6:
      pcVar3 = "%vmovdqa\t{%1, %0|%0, %1}";
      break;
    default:
      fancy_abort("insn-output.c",0x216,&DAT_00107b6b);
switchD_001009c0_caseD_9:
      fancy_abort("insn-output.c",0x21a,&DAT_00107b6b);
      pcVar3 = "";
      break;
    case 9:
      if ((ix86_isa_flags & 0x20) == 0) {
        pcVar3 = "movsd\t{%1, %0|%0, %1}";
      }
      else if ((*(short *)*operands == 0x25) && (*(short *)operands[1] == 0x25)) {
        pcVar3 = "vmovsd\t{%1, %0, %0|%0, %0, %1}";
      }
      else {
        pcVar3 = "vmovsd\t{%1, %0|%0, %1}";
      }
      break;
    case 0xe:
      pcVar3 = "%vmovaps\t{%1, %0|%0, %1}";
      break;
    case 0xf:
      pcVar3 = "%vmovapd\t{%1, %0|%0, %1}";
      break;
    case 0x10:
      if ((ix86_isa_flags & 0x20) == 0) {
        pcVar3 = "movlps\t{%1, %0|%0, %1}";
      }
      else if (*(short *)*operands == 0x25) {
        pcVar3 = "vmovlps\t{%1, %0, %0|%0, %0, %1}";
      }
      else {
        pcVar3 = "vmovlps\t{%1, %0|%0, %1}";
      }
      break;
    case 0x11:
      if ((ix86_isa_flags & 0x20) == 0) {
        pcVar3 = "movlpd\t{%1, %0|%0, %1}";
      }
      else if (*(short *)*operands == 0x25) {
        pcVar3 = "vmovlpd\t{%1, %0, %0|%0, %0, %1}";
      }
      else {
        pcVar3 = "vmovlpd\t{%1, %0|%0, %1}";
      }
    }
    break;
  default:
    goto switchD_001009c0_caseD_9;
  }
  return pcVar3;
}



char * output_75(rtx *operands,rtx insn)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  switch(which_alternative) {
  case 0:
  case 1:
    pcVar3 = (char *)output_387_reg_move(insn,operands);
    break;
  case 2:
    pcVar3 = (char *)standard_80387_constant_opcode(operands[1]);
    break;
  case 3:
  case 4:
    pcVar3 = "#";
    break;
  case 5:
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xf) {
      return "xorpd\t%0, %0";
    }
    if (uVar1 < 0x10) {
      if (uVar1 == 6) {
        return "pxor\t%0, %0";
      }
      if (uVar1 == 0xe) {
        return "xorps\t%0, %0";
      }
    }
    fancy_abort("insn-output.c",0x23e,&DAT_00107b6b);
  case 6:
  case 7:
  case 8:
    uVar2 = get_attr_mode(insn);
    switch(uVar2) {
    case 5:
      pcVar3 = "movq\t{%1, %0|%0, %1}";
      break;
    case 6:
      pcVar3 = "movdqa\t{%1, %0|%0, %1}";
      break;
    default:
      fancy_abort("insn-output.c",0x254,&DAT_00107b6b);
switchD_00100c0a_caseD_9:
      fancy_abort("insn-output.c",600,&DAT_00107b6b);
      pcVar3 = "";
      break;
    case 9:
      pcVar3 = "movsd\t{%1, %0|%0, %1}";
      break;
    case 0xe:
      pcVar3 = "movaps\t{%1, %0|%0, %1}";
      break;
    case 0xf:
      pcVar3 = "movapd\t{%1, %0|%0, %1}";
      break;
    case 0x10:
      pcVar3 = "movlps\t{%1, %0|%0, %1}";
      break;
    case 0x11:
      pcVar3 = "movlpd\t{%1, %0|%0, %1}";
    }
    break;
  default:
    goto switchD_00100c0a_caseD_9;
  }
  return pcVar3;
}



char * output_76(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if ((*(short *)*operands == 0x25) && (uVar1 = rhs_regno(*operands), uVar1 == 8)) {
    return "fxch\t%1";
  }
  return "fxch\t%0";
}



char * output_77(rtx *operands,rtx insn)

{
  fancy_abort("insn-output.c",0x272,&DAT_00107b6b);
  return "";
}



char * output_78(rtx *operands,rtx insn)

{
  fancy_abort("insn-output.c",0x27f,&DAT_00107b6b);
  return "";
}



char * output_79(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative < 5) {
    if (2 < which_alternative) {
      return "#";
    }
    if (which_alternative < 2) {
      if (-1 < which_alternative) {
        pcVar1 = (char *)output_387_reg_move(insn,operands);
        return pcVar1;
      }
    }
    else if (which_alternative == 2) {
      pcVar1 = (char *)standard_80387_constant_opcode(operands[1]);
      return pcVar1;
    }
  }
  fancy_abort("insn-output.c",0x297,&DAT_00107b6b);
  return "";
}



char * output_80(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative < 5) {
    if (2 < which_alternative) {
      return "#";
    }
    if (which_alternative < 2) {
      if (-1 < which_alternative) {
        pcVar1 = (char *)output_387_reg_move(insn,operands);
        return pcVar1;
      }
    }
    else if (which_alternative == 2) {
      pcVar1 = (char *)standard_80387_constant_opcode(operands[1]);
      return pcVar1;
    }
  }
  fancy_abort("insn-output.c",0x2b1,&DAT_00107b6b);
  return "";
}



char * output_81(rtx *operands,rtx insn)

{
  int iVar1;
  
  if (which_alternative < 5) {
    if (2 < which_alternative) {
      return "#";
    }
    if (which_alternative < 2) {
      if (-1 < which_alternative) {
        iVar1 = get_attr_mode(insn);
        if (iVar1 == 0xe) {
          return "%vmovaps\t{%1, %0|%0, %1}";
        }
        return "%vmovdqa\t{%1, %0|%0, %1}";
      }
    }
    else if (which_alternative == 2) {
      iVar1 = get_attr_mode(insn);
      if (iVar1 == 0xe) {
        return "%vxorps\t%0, %d0";
      }
      return "%vpxor\t%0, %d0";
    }
  }
  fancy_abort("insn-output.c",0x2cf,&DAT_00107b6b);
  return "";
}



char * output_82(rtx *operands,rtx insn)

{
  fancy_abort("insn-output.c",0x2dd,&DAT_00107b6b);
  return "";
}



char * output_83(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if ((*(short *)*operands == 0x25) && (uVar1 = rhs_regno(*operands), uVar1 == 8)) {
    return "fxch\t%1";
  }
  return "fxch\t%0";
}



char * output_94(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_attr_prefix_0f(insn);
  if (iVar1 == 0) {
    pcVar2 = "{cwtl|cwde}";
  }
  else {
    pcVar2 = "movs{wl|x}\t{%1, %0|%0, %1}";
  }
  return pcVar2;
}



char * output_95(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_attr_prefix_0f(insn);
  if (iVar1 == 0) {
    pcVar2 = "{cbtw|cbw}";
  }
  else {
    pcVar2 = "movs{bw|x}\t{%1, %0|%0, %1}";
  }
  return pcVar2;
}



char * output_97(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative < 2) {
    if (-1 < which_alternative) {
      pcVar1 = (char *)output_387_reg_move(insn,operands);
      return pcVar1;
    }
  }
  else if (which_alternative == 2) {
    return "%vcvtss2sd\t{%1, %d0|%d0, %1}";
  }
  fancy_abort("insn-output.c",0x327,&DAT_00107b6b);
  return "";
}



char * output_99(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_100(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_101(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_102(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_reg_move(insn,operands);
  }
  else if (which_alternative == 1) {
    pcVar1 = "%vcvtsd2ss\t{%1, %d0|%d0, %1}";
  }
  else {
    fancy_abort("insn-output.c",0x350,&DAT_00107b6b);
    pcVar1 = "";
  }
  return pcVar1;
}



char * output_104(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_105(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_reg_move(insn,operands);
  }
  else if (which_alternative == 1) {
    pcVar1 = "%vcvtsd2ss\t{%1, %d0|%d0, %1}";
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_106(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_reg_move(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_107(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_108(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative != 0) {
    fancy_abort("insn-output.c",0x38d,&DAT_00107b6b);
  }
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_109(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative != 0) {
    fancy_abort("insn-output.c",0x397,&DAT_00107b6b);
  }
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_110(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_111(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_112(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_113(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_121(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,1);
  return pcVar1;
}



char * output_122(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,1);
  return pcVar1;
}



char * output_123(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,1);
  return pcVar1;
}



char * output_130(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_132(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_133(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_197(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 7) {
    operands[2] = *(rtx *)(*(long *)(*(long *)(*(long *)(insn + 1) + 8) + 8) + 0x10);
    pcVar2 = "lea{l}\t{%a2, %0|%0, %a2}";
  }
  else if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x42c,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{l}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x431,&DAT_00107b6b);
      }
      pcVar2 = "dec{l}\t%0";
    }
  }
  else if ((which_alternative == 2) && (DAT_001560bd != '\0')) {
    pcVar2 = "add{l}\t{%1, %0|%0, %1}";
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x43a,&DAT_00107b6b);
    }
    if ((*(short *)operands[2] == 0x1e) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{l}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{l}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_198(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 7) {
    operands[2] = *(rtx *)(*(long *)(*(long *)(*(long *)(insn + 1) + 8) + 8) + 0x10);
    pcVar2 = "lea{q}\t{%a2, %0|%0, %a2}";
  }
  else if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x45a,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{q}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x45f,&DAT_00107b6b);
      }
      pcVar2 = "dec{q}\t%0";
    }
  }
  else if ((which_alternative == 2) && (DAT_001560bd != '\0')) {
    pcVar2 = "add{q}\t{%1, %0|%0, %1}";
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x468,&DAT_00107b6b);
    }
    if (((*(short *)operands[2] == 0x1e) && ((*(ulong *)&operands[2]->u & 0x7fffffff) != 0)) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{q}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{q}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_199(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{w}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x488,&DAT_00107b6b);
      }
      pcVar2 = "dec{w}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) &&
          ((*(long *)&operands[2]->u == 0x80 ||
           ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    pcVar2 = "sub{w}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{w}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_200(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 7) {
    pcVar3 = "#";
  }
  else if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar3 = "inc{w}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x4aa,&DAT_00107b6b);
      }
      pcVar3 = "dec{w}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) &&
          ((*(long *)&operands[2]->u == 0x80 ||
           ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
    prVar2 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar2;
    pcVar3 = "sub{w}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar3 = "add{w}\t{%2, %0|%0, %2}";
  }
  return pcVar3;
}



char * output_201(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  bool bVar4;
  int widen;
  
  bVar4 = which_alternative != 2;
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      if (bVar4) {
        pcVar2 = "inc{b}\t%0";
      }
      else {
        pcVar2 = "inc{l}\t%k0";
      }
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x4cb,&DAT_00107b6b);
      }
      if (bVar4) {
        pcVar2 = "dec{b}\t%0";
      }
      else {
        pcVar2 = "dec{l}\t%k0";
      }
    }
  }
  else if ((*(short *)operands[2] == 0x1e) &&
          ((*(long *)&operands[2]->u == 0x80 ||
           ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    if (bVar4) {
      pcVar2 = "sub{b}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "sub{l}\t{%2, %k0|%k0, %2}";
    }
  }
  else if (bVar4) {
    pcVar2 = "add{b}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{l}\t{%k2, %k0|%k0, %k2}";
  }
  return pcVar2;
}



char * output_202(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  bool bVar4;
  int widen;
  
  bVar4 = which_alternative != 2;
  iVar1 = get_attr_type(insn);
  if (iVar1 == 7) {
    pcVar3 = "#";
  }
  else if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      if (bVar4) {
        pcVar3 = "inc{b}\t%0";
      }
      else {
        pcVar3 = "inc{l}\t%k0";
      }
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x4f4,&DAT_00107b6b);
      }
      if (bVar4) {
        pcVar3 = "dec{b}\t%0";
      }
      else {
        pcVar3 = "dec{l}\t%k0";
      }
    }
  }
  else if ((*(short *)operands[2] == 0x1e) &&
          ((*(long *)&operands[2]->u == 0x80 ||
           ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
    prVar2 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar2;
    if (bVar4) {
      pcVar3 = "sub{b}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar3 = "sub{l}\t{%2, %k0|%k0, %2}";
    }
  }
  else if (bVar4) {
    pcVar3 = "add{b}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar3 = "add{l}\t{%k2, %k0|%k0, %k2}";
  }
  return pcVar3;
}



char * output_203(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[1] == const_double_operand) {
      pcVar2 = "inc{b}\t%0";
    }
    else {
      if (operands[1] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x51a,&DAT_00107b6b);
      }
      pcVar2 = "dec{b}\t%0";
    }
  }
  else if ((*(short *)operands[1] == 0x1e) && (*(long *)&operands[1]->u < 0)) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[1]->u);
    operands[1] = prVar3;
    pcVar2 = "sub{b}\t{%1, %0|%0, %1}";
  }
  else {
    pcVar2 = "add{b}\t{%1, %0|%0, %1}";
  }
  return pcVar2;
}



char * output_204(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x533,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{l}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x538,&DAT_00107b6b);
      }
      pcVar2 = "dec{l}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x53d,&DAT_00107b6b);
    }
    if ((*(short *)operands[2] == 0x1e) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{l}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{l}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_205(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x55a,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{q}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x55f,&DAT_00107b6b);
      }
      pcVar2 = "dec{q}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x564,&DAT_00107b6b);
    }
    if (((*(short *)operands[2] == 0x1e) && ((*(ulong *)&operands[2]->u & 0x7fffffff) != 0)) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{q}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{q}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_206(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{w}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x585,&DAT_00107b6b);
      }
      pcVar2 = "dec{w}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) &&
          ((*(long *)&operands[2]->u == 0x80 ||
           ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    pcVar2 = "sub{w}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{w}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_207(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{b}\t%0";
    }
    else {
      if ((operands[2] != tls_modbase_operand) &&
         ((*(short *)operands[2] != 0x1e || (*(long *)&operands[2]->u != 0xff)))) {
        fancy_abort("insn-output.c",0x5a5,&DAT_00107b6b);
      }
      pcVar2 = "dec{b}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) && (*(long *)&operands[2]->u < 0)) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    pcVar2 = "sub{b}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{b}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_208(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x5c0,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{l}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x5c5,&DAT_00107b6b);
      }
      pcVar2 = "dec{l}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x5ca,&DAT_00107b6b);
    }
    if ((*(short *)operands[2] == 0x1e) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{l}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{l}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_209(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x5e7,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{q}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x5ec,&DAT_00107b6b);
      }
      pcVar2 = "dec{q}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x5f1,&DAT_00107b6b);
    }
    if (((*(short *)operands[2] == 0x1e) && ((*(ulong *)&operands[2]->u & 0x7fffffff) != 0)) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{q}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{q}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_210(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{w}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x612,&DAT_00107b6b);
      }
      pcVar2 = "dec{w}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) &&
          ((*(long *)&operands[2]->u == 0x80 ||
           ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    pcVar2 = "sub{w}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{w}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_211(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{b}\t%0";
    }
    else {
      if ((operands[2] != tls_modbase_operand) &&
         ((*(short *)operands[2] != 0x1e || (*(long *)&operands[2]->u != 0xff)))) {
        fancy_abort("insn-output.c",0x632,&DAT_00107b6b);
      }
      pcVar2 = "dec{b}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) && (*(long *)&operands[2]->u < 0)) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    pcVar2 = "sub{b}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{b}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_212(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == tls_modbase_operand) {
      pcVar2 = "inc{l}\t%0";
    }
    else {
      if (operands[2] != const_double_operand) {
        fancy_abort("insn-output.c",0x651,&DAT_00107b6b);
      }
      pcVar2 = "dec{l}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x656,&DAT_00107b6b);
    }
    if ((*(long *)&operands[2]->u == -0x80) ||
       ((0 < *(long *)&operands[2]->u && (*(long *)&operands[2]->u != 0x80)))) {
      pcVar2 = "sub{l}\t{%2, %0|%0, %2}";
    }
    else {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "add{l}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_213(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == tls_modbase_operand) {
      pcVar2 = "inc{w}\t%0";
    }
    else {
      if (operands[2] != const_double_operand) {
        fancy_abort("insn-output.c",0x66f,&DAT_00107b6b);
      }
      pcVar2 = "dec{w}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x674,&DAT_00107b6b);
    }
    if ((*(long *)&operands[2]->u == -0x80) ||
       ((0 < *(long *)&operands[2]->u && (*(long *)&operands[2]->u != 0x80)))) {
      pcVar2 = "sub{w}\t{%2, %0|%0, %2}";
    }
    else {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "add{w}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_214(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if ((operands[2] == tls_modbase_operand) ||
       ((*(short *)operands[2] == 0x1e && (*(long *)&operands[2]->u == 0xff)))) {
      pcVar2 = "inc{b}\t%0";
    }
    else {
      if (operands[2] != const_double_operand) {
        fancy_abort("insn-output.c",0x68f,&DAT_00107b6b);
      }
      pcVar2 = "dec{b}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x694,&DAT_00107b6b);
    }
    if (*(long *)&operands[2]->u < 0) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "add{b}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "sub{b}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_215(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x6a7,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{l}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x6ac,&DAT_00107b6b);
      }
      pcVar2 = "dec{l}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x6b1,&DAT_00107b6b);
    }
    if ((*(short *)operands[2] == 0x1e) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{l}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{l}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_216(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x6cc,&DAT_00107b6b);
    }
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{q}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x6d1,&DAT_00107b6b);
      }
      pcVar2 = "dec{q}\t%0";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x6d6,&DAT_00107b6b);
    }
    if (((*(short *)operands[2] == 0x1e) && ((*(ulong *)&operands[2]->u & 0x7fffffff) != 0)) &&
       ((*(long *)&operands[2]->u == 0x80 ||
        ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
      prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
      operands[2] = prVar3;
      pcVar2 = "sub{q}\t{%2, %0|%0, %2}";
    }
    else {
      pcVar2 = "add{q}\t{%2, %0|%0, %2}";
    }
  }
  return pcVar2;
}



char * output_217(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{w}\t%0";
    }
    else {
      if (operands[2] != tls_modbase_operand) {
        fancy_abort("insn-output.c",0x6f5,&DAT_00107b6b);
      }
      pcVar2 = "dec{w}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) &&
          ((*(long *)&operands[2]->u == 0x80 ||
           ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    pcVar2 = "sub{w}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{w}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_218(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  rtx prVar3;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{b}\t%0";
    }
    else {
      if ((operands[2] != tls_modbase_operand) &&
         ((*(short *)operands[2] != 0x1e || (*(long *)&operands[2]->u != 0xff)))) {
        fancy_abort("insn-output.c",0x715,&DAT_00107b6b);
      }
      pcVar2 = "dec{b}\t%0";
    }
  }
  else if ((*(short *)operands[2] == 0x1e) && (*(long *)&operands[2]->u < 0)) {
    prVar3 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
    operands[2] = prVar3;
    pcVar2 = "sub{b}\t{%2, %0|%0, %2}";
  }
  else {
    pcVar2 = "add{b}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_219(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 8) {
    if (operands[2] == const_double_operand) {
      pcVar2 = "inc{b}\t%h0";
    }
    else {
      if ((operands[2] != tls_modbase_operand) &&
         ((*(short *)operands[2] != 0x1e || (*(long *)&operands[2]->u != 0xff)))) {
        fancy_abort("insn-output.c",0x734,&DAT_00107b6b);
      }
      pcVar2 = "dec{b}\t%h0";
    }
  }
  else {
    pcVar2 = "add{b}\t{%2, %h0|%h0, %2}";
  }
  return pcVar2;
}



char * output_281(rtx *operands,rtx insn)

{
  rtx prVar1;
  char *pcVar2;
  
  if (which_alternative == 3) {
    if ((*(short *)operands[1] == 0x1e) && (*(long *)&operands[1]->u < 0)) {
      prVar1 = (rtx)gen_rtx_CONST_INT(0,*(ulong *)&operands[1]->u & 0xff);
      operands[1] = prVar1;
    }
    pcVar2 = "test{l}\t{%1, %k0|%k0, %1}";
  }
  else {
    pcVar2 = "test{b}\t{%1, %0|%0, %1}";
  }
  return pcVar2;
}



char * output_289(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  machine_mode mode;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 6) {
    if (*(short *)operands[2] != 0x1e) {
      fancy_abort("insn-output.c",0x766,&DAT_00107b6b);
    }
    if (*(long *)&operands[2]->u == 0xff) {
      mode = MIN_MODE_INT;
    }
    else {
      if (*(long *)&operands[2]->u != 0xffff) {
        fancy_abort("insn-output.c",0x76b,&DAT_00107b6b);
      }
      mode = HImode;
    }
    prVar2 = (rtx)(*rtl_hooks)(mode,operands[1]);
    operands[1] = prVar2;
    if (mode == MIN_MODE_INT) {
      pcVar3 = "movz{bl|x}\t{%1, %0|%0, %1}";
    }
    else {
      pcVar3 = "movz{wl|x}\t{%1, %0|%0, %1}";
    }
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x777,&DAT_00107b6b);
    }
    pcVar3 = "and{l}\t{%2, %0|%0, %2}";
  }
  return pcVar3;
}



char * output_290(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = get_attr_type(insn);
  if (iVar1 == 6) {
    if (*(short *)operands[2] != 0x1e) {
      fancy_abort("insn-output.c",0x785,&DAT_00107b6b);
    }
    if (*(long *)&operands[2]->u != 0xff) {
      fancy_abort("insn-output.c",0x786,&DAT_00107b6b);
    }
    pcVar2 = "movz{bl|x}\t{%b1, %k0|%k0, %b1}";
  }
  else {
    iVar1 = rtx_equal_p(*operands,operands[1]);
    if (iVar1 == 0) {
      fancy_abort("insn-output.c",0x78a,&DAT_00107b6b);
    }
    pcVar2 = "and{w}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_293(rtx *operands,rtx insn)

{
  rtx prVar1;
  char *pcVar2;
  
  if (which_alternative == 2) {
    if ((*(short *)operands[2] == 0x1e) && (*(long *)&operands[2]->u < 0)) {
      prVar1 = (rtx)gen_rtx_CONST_INT(0,*(ulong *)&operands[2]->u & 0xff);
      operands[2] = prVar1;
    }
    pcVar2 = "and{l}\t{%2, %k0|%k0, %2}";
  }
  else {
    pcVar2 = "and{b}\t{%2, %0|%0, %2}";
  }
  return pcVar2;
}



char * output_383(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x7bf,&DAT_00107b6b);
    }
    iVar2 = rtx_equal_p(*operands,operands[1]);
    if (iVar2 == 0) {
      fancy_abort("insn-output.c",0x7c0,&DAT_00107b6b);
    }
    return "add{l}\t%0, %0";
  }
  if (iVar2 != 7) {
    if (*(short *)operands[2] != 0x25) {
      if ((operands[2] == const_double_operand) &&
         ((constant_call_address_operand != (code)0x0 ||
          (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
        pcVar3 = "sal{l}\t%0";
      }
      else {
        pcVar3 = "sal{l}\t{%2, %0|%0, %2}";
      }
      return pcVar3;
    }
    return "sal{l}\t{%b2, %0|%0, %b2}";
  }
  return "#";
}



char * output_384(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x7da,&DAT_00107b6b);
    }
    return "add{l}\t%0, %0";
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      pcVar3 = "sal{l}\t%0";
    }
    else {
      pcVar3 = "sal{l}\t{%2, %0|%0, %2}";
    }
    return pcVar3;
  }
  return "sal{l}\t{%b2, %0|%0, %b2}";
}



char * output_385(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x7f1,&DAT_00107b6b);
    }
    return "add{l}\t%0, %0";
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      pcVar3 = "sal{l}\t%0";
    }
    else {
      pcVar3 = "sal{l}\t{%2, %0|%0, %2}";
    }
    return pcVar3;
  }
  return "sal{l}\t{%b2, %0|%0, %b2}";
}



char * output_386(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x80a,&DAT_00107b6b);
    }
    return "add{w}\t%0, %0";
  }
  if (iVar2 != 7) {
    if (*(short *)operands[2] != 0x25) {
      if ((operands[2] == const_double_operand) &&
         ((constant_call_address_operand != (code)0x0 ||
          (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
        pcVar3 = "sal{w}\t%0";
      }
      else {
        pcVar3 = "sal{w}\t{%2, %0|%0, %2}";
      }
      return pcVar3;
    }
    return "sal{w}\t{%b2, %0|%0, %b2}";
  }
  return "#";
}



char * output_387(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x821,&DAT_00107b6b);
    }
    return "add{w}\t%0, %0";
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      pcVar3 = "sal{w}\t%0";
    }
    else {
      pcVar3 = "sal{w}\t{%2, %0|%0, %2}";
    }
    return pcVar3;
  }
  return "sal{w}\t{%b2, %0|%0, %b2}";
}



char * output_388(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x838,&DAT_00107b6b);
    }
    return "add{w}\t%0, %0";
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      pcVar3 = "sal{w}\t%0";
    }
    else {
      pcVar3 = "sal{w}\t{%2, %0|%0, %2}";
    }
    return pcVar3;
  }
  return "sal{w}\t{%b2, %0|%0, %b2}";
}



char * output_389(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x84f,&DAT_00107b6b);
    }
    return "add{w}\t%0, %0";
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      pcVar3 = "sal{w}\t%0";
    }
    else {
      pcVar3 = "sal{w}\t{%2, %0|%0, %2}";
    }
    return pcVar3;
  }
  return "sal{w}\t{%b2, %0|%0, %b2}";
}



char * output_390(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x868,&DAT_00107b6b);
    }
    if ((*(short *)operands[1] == 0x25) &&
       ((*(short *)operands[1] != 0x25 || (uVar3 = rhs_regno(operands[1]), 3 < uVar3)))) {
      pcVar4 = "add{l}\t%k0, %k0";
    }
    else {
      pcVar4 = "add{b}\t%0, %0";
    }
    return pcVar4;
  }
  if (iVar2 == 7) {
    return "#";
  }
  if (*(short *)operands[2] == 0x25) {
    iVar2 = get_attr_mode(insn);
    if (iVar2 == 4) {
      return "sal{l}\t{%b2, %k0|%k0, %b2}";
    }
    return "sal{b}\t{%b2, %0|%0, %b2}";
  }
  if ((operands[2] == const_double_operand) &&
     ((constant_call_address_operand != (code)0x0 ||
      (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
    iVar2 = get_attr_mode(insn);
    if (iVar2 == 4) {
      return "sal{l}\t%0";
    }
    return "sal{b}\t%0";
  }
  iVar2 = get_attr_mode(insn);
  if (iVar2 == 4) {
    return "sal{l}\t{%2, %k0|%k0, %2}";
  }
  return "sal{b}\t{%2, %0|%0, %2}";
}



char * output_391(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x891,&DAT_00107b6b);
    }
    if ((*(short *)operands[1] == 0x25) &&
       ((*(short *)operands[1] != 0x25 || (uVar3 = rhs_regno(operands[1]), 3 < uVar3)))) {
      pcVar4 = "add{l}\t%k0, %k0";
    }
    else {
      pcVar4 = "add{b}\t%0, %0";
    }
    return pcVar4;
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      iVar2 = get_attr_mode(insn);
      if (iVar2 == 4) {
        return "sal{l}\t%0";
      }
      return "sal{b}\t%0";
    }
    iVar2 = get_attr_mode(insn);
    if (iVar2 == 4) {
      return "sal{l}\t{%2, %k0|%k0, %2}";
    }
    return "sal{b}\t{%2, %0|%0, %2}";
  }
  iVar2 = get_attr_mode(insn);
  if (iVar2 == 4) {
    return "sal{l}\t{%b2, %k0|%k0, %b2}";
  }
  return "sal{b}\t{%b2, %0|%0, %b2}";
}



char * output_392(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x8ba,&DAT_00107b6b);
    }
    return "add{b}\t%0, %0";
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      pcVar3 = "sal{b}\t%0";
    }
    else {
      pcVar3 = "sal{b}\t{%2, %0|%0, %2}";
    }
    return pcVar3;
  }
  return "sal{b}\t{%b2, %0|%0, %b2}";
}



char * output_393(rtx *operands,rtx insn)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = get_attr_type(insn);
  if (iVar2 == 2) {
    if (operands[2] != const_double_operand) {
      fancy_abort("insn-output.c",0x8d1,&DAT_00107b6b);
    }
    return "add{b}\t%0, %0";
  }
  if (*(short *)operands[2] != 0x25) {
    if ((operands[2] == const_double_operand) &&
       ((constant_call_address_operand != (code)0x0 ||
        (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')))) {
      pcVar3 = "sal{b}\t%0";
    }
    else {
      pcVar3 = "sal{b}\t{%2, %0|%0, %2}";
    }
    return pcVar3;
  }
  return "sal{b}\t{%b2, %0|%0, %b2}";
}



char * output_481(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if ((insn->field_0x3 & 1) == 0) {
    pcVar1 = "call\t%P0";
  }
  else {
    pcVar1 = "jmp\t%P0";
  }
  return pcVar1;
}



char * output_482(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = constant_call_address_operand(*operands,0x10);
  if (iVar1 == 0) {
    pcVar2 = "call\t%A0";
  }
  else {
    pcVar2 = "call\t%P0";
  }
  return pcVar2;
}



char * output_484(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if ((insn->field_0x3 & 1) == 0) {
    pcVar1 = "call\t%P0";
  }
  else {
    pcVar1 = "jmp\t%P0";
  }
  return pcVar1;
}



char * output_485(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = constant_call_address_operand(*operands,0x10);
  if (iVar1 == 0) {
    pcVar2 = "call\t%A0";
  }
  else {
    pcVar2 = "call\t%P0";
  }
  return pcVar2;
}



char * output_496(rtx *operands,rtx insn)

{
  undefined8 in_R8;
  undefined8 in_R9;
  
  if ((int)*(undefined8 *)&(*operands)->u == 0) {
    fprintf(asm_out_file,"\t.p2align %d\n",4);
  }
  else {
    fprintf(asm_out_file,"\t.p2align %d,,%d\n",4,*(ulong *)&(*operands)->u & 0xffffffff,in_R8,in_R9,
            insn);
  }
  return "";
}



char * output_497(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_set_got(*operands,0);
  return pcVar1;
}



char * output_498(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_set_got(*operands,operands[1]);
  return pcVar1;
}



char * output_506(rtx *operands,rtx insn)

{
  return "popcnt{w}\t{%1, %0|%0, %1}";
}



char * output_507(rtx *operands,rtx insn)

{
  return "popcnt{l}\t{%1, %0|%0, %1}";
}



char * output_508(rtx *operands,rtx insn)

{
  return "popcnt{w}\t{%1, %0|%0, %1}";
}



char * output_509(rtx *operands,rtx insn)

{
  return "popcnt{l}\t{%1, %0|%0, %1}";
}



char * output_510(rtx *operands,rtx insn)

{
  return "popcnt{q}\t{%1, %0|%0, %1}";
}



char * output_529(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_530(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_531(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_532(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_533(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_534(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_535(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_536(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_537(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_538(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_539(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_540(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_541(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_542(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_544(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_545(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_546(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_547(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_548(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_549(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_550(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_551(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_552(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_553(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_554(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_555(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_556(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_557(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_558(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_559(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_560(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_561(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_562(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_563(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_564(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_565(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_566(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (which_alternative == 0) {
    pcVar1 = (char *)output_387_binary_op(insn,operands);
  }
  else {
    pcVar1 = "#";
  }
  return pcVar1;
}



char * output_567(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_568(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_569(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_570(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_571(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_572(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_binary_op(insn,operands);
  return pcVar1;
}



char * output_573(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_574(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_387_reg_move(insn,operands);
  return pcVar1;
}



char * output_613(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_617(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_618(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_626(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_628(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_629(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_637(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_639(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_640(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  pcVar1 = (char *)output_fix_trunc(insn,operands,0);
  return pcVar1;
}



char * output_693(rtx *operands,rtx insn)

{
  uint uVar1;
  rtx prVar2;
  
  uVar1 = get_attr_type(insn);
  if (uVar1 == 7) {
    operands[2] = *(rtx *)(*(long *)(*(long *)(*(long *)(insn + 1) + 8) + 8) + 0x10);
    return "lea{l}\t{%a2, %0|%0, %a2}";
  }
  if (uVar1 < 8) {
    if (uVar1 == 2) {
      if ((*(short *)operands[2] == 0x1e) &&
         ((*(long *)&operands[2]->u == 0x80 ||
          ((*(long *)&operands[2]->u < 0 && (*(long *)&operands[2]->u != -0x80)))))) {
        prVar2 = (rtx)gen_rtx_CONST_INT(0,-*(long *)&operands[2]->u);
        operands[2] = prVar2;
        return "sub{l}\t{%2, %0|%0, %2}";
      }
      return "add{l}\t{%2, %0|%0, %2}";
    }
    if (uVar1 == 5) {
      return "mov{l}\t{%1, %0|%0, %1}";
    }
  }
  fancy_abort("insn-output.c",0xb89,&DAT_00107b6b);
  return "";
}



char * output_695(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if ((insn->field_0x3 & 1) == 0) {
    pcVar1 = "call\t%P1";
  }
  else {
    pcVar1 = "jmp\t%P1";
  }
  return pcVar1;
}



char * output_696(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = constant_call_address_operand(operands[1],0x10);
  if (iVar1 == 0) {
    pcVar2 = "call\t%A1";
  }
  else {
    pcVar2 = "call\t%P1";
  }
  return pcVar2;
}



char * output_698(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if ((insn->field_0x3 & 1) == 0) {
    pcVar1 = "call\t%P1";
  }
  else {
    pcVar1 = "jmp\t%P1";
  }
  return pcVar1;
}



char * output_699(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = constant_call_address_operand(operands[1],0x10);
  if (iVar1 == 0) {
    pcVar2 = "call\t%A1";
  }
  else {
    pcVar2 = "call\t%P1";
  }
  return pcVar2;
}



char * output_701(rtx *operands,rtx insn)

{
  return "\t.value\t0x0b0f";
}



char * output_702(rtx *operands,rtx insn)

{
  int iVar1;
  int locality;
  
  iVar1 = (int)*(undefined8 *)&operands[1]->u;
  if ((iVar1 < 0) || (3 < iVar1)) {
    fancy_abort("insn-output.c",0xbda,&DAT_00107b6b);
  }
  return output_702::lexical_block_0::patterns[iVar1];
}



char * output_703(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (*(long *)&operands[1]->u == 0) {
    pcVar1 = "prefetch\t%a0";
  }
  else {
    pcVar1 = "prefetchw\t%a0";
  }
  return pcVar1;
}



char * output_817(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)iVar1);
  operands[3] = prVar2;
  if (*(short *)operands[2] == 0x2b) {
    pcVar3 = "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  }
  else {
    pcVar3 = "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
  }
  return pcVar3;
}



char * output_819(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[2]->u |
                                                (uint)(*(long *)&operands[3]->u << 2) |
                                                (uint)(*(long *)&operands[4]->u << 4) |
                                               (uint)(*(long *)&operands[5]->u << 6)));
  operands[2] = prVar1;
  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}



char * output_826(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (((ix86_isa_flags & 0x10000) == 0) && ((ix86_isa_flags & 2) == 0)) {
    pcVar1 = "pavgusb\t{%2, %0|%0, %2}";
  }
  else {
    pcVar1 = "pavgb\t{%2, %0|%0, %2}";
  }
  return pcVar1;
}



char * output_833(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xce4,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105168:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010515f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010515f;
      if (uVar1 == 0xd) goto LAB_00105168;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_834(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xd03,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105218:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010520f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010520f;
      if (uVar1 == 0xd) goto LAB_00105218;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_835(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xd22,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_001052c8:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_001052bf:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_001052bf;
      if (uVar1 == 0xd) goto LAB_001052c8;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_836(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xd41,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105378:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010536f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010536f;
      if (uVar1 == 0xd) goto LAB_00105378;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_837(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xd60,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105428:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010541f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010541f;
      if (uVar1 == 0xd) goto LAB_00105428;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_838(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xd7f,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_001054d8:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_001054cf:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_001054cf;
      if (uVar1 == 0xd) goto LAB_001054d8;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_839(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xd9e,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105588:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010557f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010557f;
      if (uVar1 == 0xd) goto LAB_00105588;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_840(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xdbd,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105638:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010562f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010562f;
      if (uVar1 == 0xd) goto LAB_00105638;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_841(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xddc,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_001056e8:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_001056df:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_001056df;
      if (uVar1 == 0xd) goto LAB_001056e8;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_842(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xdfb,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105798:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010578f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010578f;
      if (uVar1 == 0xd) goto LAB_00105798;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_843(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xe1a,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_00105848:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010583f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010583f;
      if (uVar1 == 0xd) goto LAB_00105848;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_844(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xe39,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_001058f8:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_001058ef:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_001058ef;
      if (uVar1 == 0xd) goto LAB_001058f8;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_845(rtx *operands,rtx insn)

{
  uint uVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
    return pcVar2;
  }
  if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xe58,&DAT_00107b6b);
    return "";
  }
  uVar1 = get_attr_mode(insn);
  if (uVar1 == 0xf) {
LAB_001059a8:
    return "vmovapd\t{%1, %0|%0, %1}";
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 0xe) {
LAB_0010599f:
      return "vmovaps\t{%1, %0|%0, %1}";
    }
    if (uVar1 < 0xf) {
      if (uVar1 == 0xc) goto LAB_0010599f;
      if (uVar1 == 0xd) goto LAB_001059a8;
    }
  }
  return "vmovdqa\t{%1, %0|%0, %1}";
}



char * output_846(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xe75,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "movaps\t{%1, %0|%0, %1}";
    }
    else if (iVar1 == 0xf) {
      pcVar2 = "movapd\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "movdqa\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_847(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xe92,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "movaps\t{%1, %0|%0, %1}";
    }
    else if (iVar1 == 0xf) {
      pcVar2 = "movapd\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "movdqa\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_848(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xeaf,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "movaps\t{%1, %0|%0, %1}";
    }
    else if (iVar1 == 0xf) {
      pcVar2 = "movapd\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "movdqa\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_849(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xecc,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "movaps\t{%1, %0|%0, %1}";
    }
    else if (iVar1 == 0xf) {
      pcVar2 = "movapd\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "movdqa\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_850(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xee9,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "movaps\t{%1, %0|%0, %1}";
    }
    else if (iVar1 == 0xf) {
      pcVar2 = "movapd\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "movdqa\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_851(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xf06,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "movaps\t{%1, %0|%0, %1}";
    }
    else if (iVar1 == 0xf) {
      pcVar2 = "movapd\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "movdqa\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_852(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = (char *)standard_sse_constant_opcode(insn,operands[1]);
  }
  else if ((which_alternative < 0) || (1 < which_alternative - 1U)) {
    fancy_abort("insn-output.c",0xf23,&DAT_00107b6b);
    pcVar2 = "";
  }
  else {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xe) {
      pcVar2 = "movaps\t{%1, %0|%0, %1}";
    }
    else if (iVar1 == 0xf) {
      pcVar2 = "movapd\t{%1, %0|%0, %1}";
    }
    else {
      pcVar2 = "movdqa\t{%1, %0|%0, %1}";
    }
  }
  return pcVar2;
}



char * output_1157(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if ((ix86_isa_flags & 0x20) == 0) {
    pcVar1 = "cvtpd2dq\t{%1, %0|%0, %1}";
  }
  else {
    pcVar1 = "vcvtpd2dq{x}\t{%1, %0|%0, %1}";
  }
  return pcVar1;
}



char * output_1159(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if ((ix86_isa_flags & 0x20) == 0) {
    pcVar1 = "cvttpd2dq\t{%1, %0|%0, %1}";
  }
  else {
    pcVar1 = "vcvttpd2dq{x}\t{%1, %0|%0, %1}";
  }
  return pcVar1;
}



char * output_1165(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if ((ix86_isa_flags & 0x20) == 0) {
    pcVar1 = "cvtpd2ps\t{%1, %0|%0, %1}";
  }
  else {
    pcVar1 = "vcvtpd2ps{x}\t{%1, %0|%0, %1}";
  }
  return pcVar1;
}



char * output_1182(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                                (uint)(*(long *)&operands[4]->u << 2) |
                                                ((int)*(undefined8 *)&operands[5]->u + -8) * 0x10 |
                                               ((int)*(undefined8 *)&operands[6]->u + -8) * 0x40));
  operands[3] = prVar1;
  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1183(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                                (uint)(*(long *)&operands[4]->u << 2) |
                                                ((int)*(undefined8 *)&operands[5]->u + -4) * 0x10 |
                                               ((int)*(undefined8 *)&operands[6]->u + -4) * 0x40));
  operands[3] = prVar1;
  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1184(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                                (uint)(*(long *)&operands[4]->u << 2) |
                                                ((int)*(undefined8 *)&operands[5]->u + -4) * 0x10 |
                                               ((int)*(undefined8 *)&operands[6]->u + -4) * 0x40));
  operands[3] = prVar1;
  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1185(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                                (uint)(*(long *)&operands[4]->u << 2) |
                                                ((int)*(undefined8 *)&operands[5]->u + -4) * 0x10 |
                                               ((int)*(undefined8 *)&operands[6]->u + -4) * 0x40));
  operands[3] = prVar1;
  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1186(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                                (uint)(*(long *)&operands[4]->u << 2) |
                                                ((int)*(undefined8 *)&operands[5]->u + -4) * 0x10 |
                                               ((int)*(undefined8 *)&operands[6]->u + -4) * 0x40));
  operands[3] = prVar1;
  return "shufps\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1211(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 << 4));
  operands[3] = prVar2;
  return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1212(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 << 4));
  operands[3] = prVar2;
  return "insertps\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1238(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                                ((int)*(undefined8 *)&operands[4]->u + -4) * 2 |
                                                ((int)*(undefined8 *)&operands[5]->u + -2) * 4 |
                                               ((int)*(undefined8 *)&operands[6]->u + -6) * 8));
  operands[3] = prVar1;
  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1243(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                               ((int)*(undefined8 *)&operands[4]->u + -2) * 2));
  operands[3] = prVar1;
  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1244(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                               ((int)*(undefined8 *)&operands[4]->u + -2) * 2));
  operands[3] = prVar1;
  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1245(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                               ((int)*(undefined8 *)&operands[4]->u + -2) * 2));
  operands[3] = prVar1;
  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1246(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[3]->u |
                                               ((int)*(undefined8 *)&operands[4]->u + -2) * 2));
  operands[3] = prVar1;
  return "shufpd\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1316(rtx *operands,rtx insn)

{
  long lVar1;
  rtx prVar2;
  
  lVar1 = *(long *)&operands[2]->u;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 7;
  }
  prVar2 = (rtx)gen_rtx_CONST_INT(0,lVar1 >> 3);
  operands[2] = prVar2;
  return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1320(rtx *operands,rtx insn)

{
  long lVar1;
  rtx prVar2;
  
  lVar1 = *(long *)&operands[2]->u;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 7;
  }
  prVar2 = (rtx)gen_rtx_CONST_INT(0,lVar1 >> 3);
  operands[2] = prVar2;
  return "psrldq\t{%2, %0|%0, %2}";
}



char * output_1324(rtx *operands,rtx insn)

{
  long lVar1;
  rtx prVar2;
  
  lVar1 = *(long *)&operands[2]->u;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 7;
  }
  prVar2 = (rtx)gen_rtx_CONST_INT(0,lVar1 >> 3);
  operands[2] = prVar2;
  return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1328(rtx *operands,rtx insn)

{
  long lVar1;
  rtx prVar2;
  
  lVar1 = *(long *)&operands[2]->u;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 7;
  }
  prVar2 = (rtx)gen_rtx_CONST_INT(0,lVar1 >> 3);
  operands[2] = prVar2;
  return "pslldq\t{%2, %0|%0, %2}";
}



char * output_1458(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)iVar1);
  operands[3] = prVar2;
  if (*(short *)operands[2] == 0x2b) {
    pcVar3 = "vpinsrb\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  }
  else {
    pcVar3 = "vpinsrb\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
  }
  return pcVar3;
}



char * output_1459(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)iVar1);
  operands[3] = prVar2;
  if (*(short *)operands[2] == 0x2b) {
    pcVar3 = "vpinsrw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  }
  else {
    pcVar3 = "vpinsrw\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
  }
  return pcVar3;
}



char * output_1460(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)iVar1);
  operands[3] = prVar2;
  if (*(short *)operands[2] == 0x2b) {
    pcVar3 = "vpinsrd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
  }
  else {
    pcVar3 = "vpinsrd\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
  }
  return pcVar3;
}



char * output_1461(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)iVar1);
  operands[3] = prVar2;
  if (*(short *)operands[2] == 0x2b) {
    pcVar3 = "pinsrb\t{%3, %2, %0|%0, %2, %3}";
  }
  else {
    pcVar3 = "pinsrb\t{%3, %k2, %0|%0, %k2, %3}";
  }
  return pcVar3;
}



char * output_1462(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  char *pcVar3;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)iVar1);
  operands[3] = prVar2;
  if (*(short *)operands[2] == 0x2b) {
    pcVar3 = "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  }
  else {
    pcVar3 = "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
  }
  return pcVar3;
}



char * output_1463(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  
  iVar1 = exact_log2(*(undefined8 *)&operands[3]->u);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)iVar1);
  operands[3] = prVar2;
  return "pinsrd\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1469(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[2]->u |
                                                (uint)(*(long *)&operands[3]->u << 2) |
                                                (uint)(*(long *)&operands[4]->u << 4) |
                                               (uint)(*(long *)&operands[5]->u << 6)));
  operands[2] = prVar1;
  return "%vpshufd\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1470(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((uint)*(undefined8 *)&operands[2]->u |
                                                (uint)(*(long *)&operands[3]->u << 2) |
                                                (uint)(*(long *)&operands[4]->u << 4) |
                                               (uint)(*(long *)&operands[5]->u << 6)));
  operands[2] = prVar1;
  return "%vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1471(rtx *operands,rtx insn)

{
  rtx prVar1;
  int mask;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,(long)(int)((int)*(undefined8 *)&operands[2]->u - 4U |
                                                ((int)*(undefined8 *)&operands[3]->u + -4) * 4 |
                                                ((int)*(undefined8 *)&operands[4]->u + -4) * 0x10 |
                                               ((int)*(undefined8 *)&operands[5]->u + -4) * 0x40));
  operands[2] = prVar1;
  return "%vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1549(rtx *operands,rtx insn)

{
  long lVar1;
  rtx prVar2;
  
  lVar1 = *(long *)&operands[3]->u;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 7;
  }
  prVar2 = (rtx)gen_rtx_CONST_INT(0,lVar1 >> 3);
  operands[3] = prVar2;
  return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1550(rtx *operands,rtx insn)

{
  long lVar1;
  rtx prVar2;
  
  lVar1 = *(long *)&operands[3]->u;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 7;
  }
  prVar2 = (rtx)gen_rtx_CONST_INT(0,lVar1 >> 3);
  operands[3] = prVar2;
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1551(rtx *operands,rtx insn)

{
  long lVar1;
  rtx prVar2;
  
  lVar1 = *(long *)&operands[3]->u;
  if (lVar1 < 0) {
    lVar1 = lVar1 + 7;
  }
  prVar2 = (rtx)gen_rtx_CONST_INT(0,lVar1 >> 3);
  operands[3] = prVar2;
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}



char * output_1689(rtx *operands,rtx insn)

{
  rtx prVar1;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,0x80 - *(long *)&operands[2]->u);
  operands[3] = prVar1;
  return "vprotb\t{%3, %1, %0|%0, %1, %3}";
}



char * output_1690(rtx *operands,rtx insn)

{
  rtx prVar1;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,0x40 - *(long *)&operands[2]->u);
  operands[3] = prVar1;
  return "vprotw\t{%3, %1, %0|%0, %1, %3}";
}



char * output_1691(rtx *operands,rtx insn)

{
  rtx prVar1;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,0x20 - *(long *)&operands[2]->u);
  operands[3] = prVar1;
  return "vprotd\t{%3, %1, %0|%0, %1, %3}";
}



char * output_1692(rtx *operands,rtx insn)

{
  rtx prVar1;
  
  prVar1 = (rtx)gen_rtx_CONST_INT(0,0x10 - *(long *)&operands[2]->u);
  operands[3] = prVar1;
  return "vprotq\t{%3, %1, %0|%0, %1, %3}";
}



char * output_1723(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (*(long *)&operands[3]->u == 0) {
    pcVar1 = "vpcomfalseb\t{%2, %1, %0|%0, %1, %2}";
  }
  else {
    pcVar1 = "vpcomtrueb\t{%2, %1, %0|%0, %1, %2}";
  }
  return pcVar1;
}



char * output_1724(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (*(long *)&operands[3]->u == 0) {
    pcVar1 = "vpcomfalsew\t{%2, %1, %0|%0, %1, %2}";
  }
  else {
    pcVar1 = "vpcomtruew\t{%2, %1, %0|%0, %1, %2}";
  }
  return pcVar1;
}



char * output_1725(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (*(long *)&operands[3]->u == 0) {
    pcVar1 = "vpcomfalsed\t{%2, %1, %0|%0, %1, %2}";
  }
  else {
    pcVar1 = "vpcomtrued\t{%2, %1, %0|%0, %1, %2}";
  }
  return pcVar1;
}



char * output_1726(rtx *operands,rtx insn)

{
  char *pcVar1;
  
  if (*(long *)&operands[3]->u == 0) {
    pcVar1 = "vpcomfalseq\t{%2, %1, %0|%0, %1, %2}";
  }
  else {
    pcVar1 = "vpcomtrueq\t{%2, %1, %0|%0, %1, %2}";
  }
  return pcVar1;
}



char * output_1755(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  undefined8 in_R9;
  int elt;
  
  iVar1 = (int)*(undefined8 *)&operands[3]->u;
  if (which_alternative < 2) {
    if (-1 < which_alternative) {
      prVar2 = (rtx)adjust_address_1(operands[1],0x26,(long)(iVar1 << 2),0,1,in_R9,insn);
      operands[1] = prVar2;
      return "vbroadcastss\t{%1, %0|%0, %1}";
    }
  }
  else if (which_alternative == 2) {
    prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 * 0x55));
    operands[2] = prVar2;
    return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
  }
  fancy_abort("insn-output.c",0x1306,&DAT_00107b6b);
  return "";
}



char * output_1758(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  int mask;
  
  iVar1 = avx_vpermilp_parallel(operands[2],0x4f);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 + -1));
  operands[2] = prVar2;
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1759(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  int mask;
  
  iVar1 = avx_vpermilp_parallel(operands[2],0x50);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 + -1));
  operands[2] = prVar2;
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1760(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  int mask;
  
  iVar1 = avx_vpermilp_parallel(operands[2],0x51);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 + -1));
  operands[2] = prVar2;
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1761(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  int mask;
  
  iVar1 = avx_vpermilp_parallel(operands[2],0x52);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 + -1));
  operands[2] = prVar2;
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}



char * output_1769(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  int mask;
  
  iVar1 = avx_vperm2f128_parallel(operands[3],0x46);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 + -1));
  operands[3] = prVar2;
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1770(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  int mask;
  
  iVar1 = avx_vperm2f128_parallel(operands[3],0x51);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 + -1));
  operands[3] = prVar2;
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1771(rtx *operands,rtx insn)

{
  int iVar1;
  rtx prVar2;
  int mask;
  
  iVar1 = avx_vperm2f128_parallel(operands[3],0x52);
  prVar2 = (rtx)gen_rtx_CONST_INT(0,(long)(iVar1 + -1));
  operands[3] = prVar2;
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}



char * output_1792(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if (which_alternative == 0) {
    return "";
  }
  if (which_alternative == 1) {
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xd) {
      return "vmovapd\t{%1, %x0|%x0, %1}";
    }
    if (uVar1 < 0xe) {
      if (uVar1 == 7) {
        return "vmovdqa\t{%1, %x0|%x0, %1}";
      }
      if (uVar1 == 0xc) {
        return "vmovaps\t{%1, %x0|%x0, %1}";
      }
    }
  }
  fancy_abort("insn-output.c",0x1373,&DAT_00107b6b);
  return "";
}



char * output_1793(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if (which_alternative == 0) {
    return "";
  }
  if (which_alternative == 1) {
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xd) {
      return "vmovapd\t{%1, %x0|%x0, %1}";
    }
    if (uVar1 < 0xe) {
      if (uVar1 == 7) {
        return "vmovdqa\t{%1, %x0|%x0, %1}";
      }
      if (uVar1 == 0xc) {
        return "vmovaps\t{%1, %x0|%x0, %1}";
      }
    }
  }
  fancy_abort("insn-output.c",0x1392,&DAT_00107b6b);
  return "";
}



char * output_1794(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if (which_alternative == 0) {
    return "";
  }
  if (which_alternative == 1) {
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xd) {
      return "vmovapd\t{%1, %x0|%x0, %1}";
    }
    if (uVar1 < 0xe) {
      if (uVar1 == 7) {
        return "vmovdqa\t{%1, %x0|%x0, %1}";
      }
      if (uVar1 == 0xc) {
        return "vmovaps\t{%1, %x0|%x0, %1}";
      }
    }
  }
  fancy_abort("insn-output.c",0x13b1,&DAT_00107b6b);
  return "";
}



char * output_1795(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if (which_alternative == 0) {
    return "";
  }
  if (which_alternative == 1) {
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xd) {
      return "vmovapd\t{%x1, %0|%0, %x1}";
    }
    if (uVar1 < 0xe) {
      if (uVar1 == 7) {
        return "vmovdqa\t{%x1, %0|%0, %x1}";
      }
      if (uVar1 == 0xc) {
        return "vmovaps\t{%x1, %0|%0, %x1}";
      }
    }
  }
  fancy_abort("insn-output.c",0x13d0,&DAT_00107b6b);
  return "";
}



char * output_1796(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if (which_alternative == 0) {
    return "";
  }
  if (which_alternative == 1) {
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xd) {
      return "vmovapd\t{%x1, %0|%0, %x1}";
    }
    if (uVar1 < 0xe) {
      if (uVar1 == 7) {
        return "vmovdqa\t{%x1, %0|%0, %x1}";
      }
      if (uVar1 == 0xc) {
        return "vmovaps\t{%x1, %0|%0, %x1}";
      }
    }
  }
  fancy_abort("insn-output.c",0x13ef,&DAT_00107b6b);
  return "";
}



char * output_1797(rtx *operands,rtx insn)

{
  uint uVar1;
  
  if (which_alternative == 0) {
    return "";
  }
  if (which_alternative == 1) {
    uVar1 = get_attr_mode(insn);
    if (uVar1 == 0xd) {
      return "vmovapd\t{%x1, %0|%0, %x1}";
    }
    if (uVar1 < 0xe) {
      if (uVar1 == 7) {
        return "vmovdqa\t{%x1, %0|%0, %x1}";
      }
      if (uVar1 == 0xc) {
        return "vmovaps\t{%x1, %0|%0, %x1}";
      }
    }
  }
  fancy_abort("insn-output.c",0x140e,&DAT_00107b6b);
  return "";
}



char * output_1798(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
  }
  else if (which_alternative == 1) {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xc) {
      pcVar2 = "vmovaps\t{%1, %x0|%x0, %1}";
    }
    else if (iVar1 == 0xd) {
      pcVar2 = "vmovapd\t{%1, %x0|%x0, %1}";
    }
    else {
      pcVar2 = "vmovdqa\t{%1, %x0|%x0, %1}";
    }
  }
  else {
    fancy_abort("insn-output.c",0x1429,&DAT_00107b6b);
    pcVar2 = "";
  }
  return pcVar2;
}



char * output_1799(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
  }
  else if (which_alternative == 1) {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xc) {
      pcVar2 = "vmovaps\t{%1, %x0|%x0, %1}";
    }
    else if (iVar1 == 0xd) {
      pcVar2 = "vmovapd\t{%1, %x0|%x0, %1}";
    }
    else {
      pcVar2 = "vmovdqa\t{%1, %x0|%x0, %1}";
    }
  }
  else {
    fancy_abort("insn-output.c",0x1445,&DAT_00107b6b);
    pcVar2 = "";
  }
  return pcVar2;
}



char * output_1800(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
  }
  else if (which_alternative == 1) {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xc) {
      pcVar2 = "vmovaps\t{%1, %x0|%x0, %1}";
    }
    else if (iVar1 == 0xd) {
      pcVar2 = "vmovapd\t{%1, %x0|%x0, %1}";
    }
    else {
      pcVar2 = "vmovdqa\t{%1, %x0|%x0, %1}";
    }
  }
  else {
    fancy_abort("insn-output.c",0x1461,&DAT_00107b6b);
    pcVar2 = "";
  }
  return pcVar2;
}



char * output_1801(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
  }
  else if (which_alternative == 1) {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xc) {
      pcVar2 = "vmovaps\t{%1, %x0|%x0, %1}";
    }
    else if (iVar1 == 0xd) {
      pcVar2 = "vmovapd\t{%1, %x0|%x0, %1}";
    }
    else {
      pcVar2 = "vmovdqa\t{%1, %x0|%x0, %1}";
    }
  }
  else {
    fancy_abort("insn-output.c",0x147d,&DAT_00107b6b);
    pcVar2 = "";
  }
  return pcVar2;
}



char * output_1802(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
  }
  else if (which_alternative == 1) {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xc) {
      pcVar2 = "vmovaps\t{%1, %x0|%x0, %1}";
    }
    else if (iVar1 == 0xd) {
      pcVar2 = "vmovapd\t{%1, %x0|%x0, %1}";
    }
    else {
      pcVar2 = "vmovdqa\t{%1, %x0|%x0, %1}";
    }
  }
  else {
    fancy_abort("insn-output.c",0x1499,&DAT_00107b6b);
    pcVar2 = "";
  }
  return pcVar2;
}



char * output_1803(rtx *operands,rtx insn)

{
  int iVar1;
  char *pcVar2;
  
  if (which_alternative == 0) {
    pcVar2 = "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
  }
  else if (which_alternative == 1) {
    iVar1 = get_attr_mode(insn);
    if (iVar1 == 0xc) {
      pcVar2 = "vmovaps\t{%1, %x0|%x0, %1}";
    }
    else if (iVar1 == 0xd) {
      pcVar2 = "vmovapd\t{%1, %x0|%x0, %1}";
    }
    else {
      pcVar2 = "vmovdqa\t{%1, %x0|%x0, %1}";
    }
  }
  else {
    fancy_abort("insn-output.c",0x14b5,&DAT_00107b6b);
    pcVar2 = "";
  }
  return pcVar2;
}



char * output_1816(rtx *operands,rtx insn)

{
  if (DAT_001560af != '\0') {
    if (operands[1] == const_double_operand) {
      return "lock{%;| }inc{b}\t%0";
    }
    if (operands[1] == tls_modbase_operand) {
      return "lock{%;| }dec{b}\t%0";
    }
  }
  return "lock{%;| }add{b}\t{%1, %0|%0, %1}";
}



char * output_1817(rtx *operands,rtx insn)

{
  if (DAT_001560af != '\0') {
    if (operands[1] == const_double_operand) {
      return "lock{%;| }inc{w}\t%0";
    }
    if (operands[1] == tls_modbase_operand) {
      return "lock{%;| }dec{w}\t%0";
    }
  }
  return "lock{%;| }add{w}\t{%1, %0|%0, %1}";
}



char * output_1818(rtx *operands,rtx insn)

{
  if (DAT_001560af != '\0') {
    if (operands[1] == const_double_operand) {
      return "lock{%;| }inc{l}\t%0";
    }
    if (operands[1] == tls_modbase_operand) {
      return "lock{%;| }dec{l}\t%0";
    }
  }
  return "lock{%;| }add{l}\t{%1, %0|%0, %1}";
}



char * output_1819(rtx *operands,rtx insn)

{
  if (DAT_001560af != '\0') {
    if (operands[1] == const_double_operand) {
      return "lock{%;| }dec{b}\t%0";
    }
    if (operands[1] == tls_modbase_operand) {
      return "lock{%;| }inc{b}\t%0";
    }
  }
  return "lock{%;| }sub{b}\t{%1, %0|%0, %1}";
}



char * output_1820(rtx *operands,rtx insn)

{
  if (DAT_001560af != '\0') {
    if (operands[1] == const_double_operand) {
      return "lock{%;| }dec{w}\t%0";
    }
    if (operands[1] == tls_modbase_operand) {
      return "lock{%;| }inc{w}\t%0";
    }
  }
  return "lock{%;| }sub{w}\t{%1, %0|%0, %1}";
}



char * output_1821(rtx *operands,rtx insn)

{
  if (DAT_001560af != '\0') {
    if (operands[1] == const_double_operand) {
      return "lock{%;| }dec{l}\t%0";
    }
    if (operands[1] == tls_modbase_operand) {
      return "lock{%;| }inc{l}\t%0";
    }
  }
  return "lock{%;| }sub{l}\t{%1, %0|%0, %1}";
}



char * get_insn_name(int code)

{
  char *pcVar1;
  
  if (code == 0x7fffffff) {
    pcVar1 = "NOOP_MOVE";
  }
  else {
    pcVar1 = *(char **)(insn_data + (long)code * 0x28);
  }
  return pcVar1;
}


