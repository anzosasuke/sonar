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
typedef uint source_location;

typedef source_location location_t;

typedef struct cfg_hooks cfg_hooks, *Pcfg_hooks;

typedef struct basic_block_def basic_block_def, *Pbasic_block_def;

typedef struct basic_block_def * basic_block;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_FILE FILE;

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

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef long __off_t;

typedef void _IO_lock_t;

typedef long __off64_t;

typedef struct _IO_codecvt _IO_codecvt, *P_IO_codecvt;

typedef struct _IO_wide_data _IO_wide_data, *P_IO_wide_data;

typedef ulong size_t;

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

struct _IO_wide_data {
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

struct _IO_codecvt {
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

struct _IO_marker {
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

typedef enum debug_info_type {
    NO_DEBUG=0,
    DBX_DEBUG=1,
    SDB_DEBUG=2,
    DWARF2_DEBUG=3,
    XCOFF_DEBUG=4,
    VMS_DEBUG=5,
    VMS_AND_DWARF2_DEBUG=6
} debug_info_type;

typedef enum debug_info_level {
    DINFO_LEVEL_NONE=0,
    DINFO_LEVEL_TERSE=1,
    DINFO_LEVEL_NORMAL=2,
    DINFO_LEVEL_VERBOSE=3
} debug_info_level;

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

typedef enum stack_check_type {
    NO_STACK_CHECK=0,
    GENERIC_STACK_CHECK=1,
    STATIC_BUILTIN_STACK_CHECK=2,
    FULL_BUILTIN_STACK_CHECK=3
} stack_check_type;

typedef enum ira_region {
    IRA_REGION_ONE=0,
    IRA_REGION_ALL=1,
    IRA_REGION_MIXED=2
} ira_region;

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

typedef struct gcov_ctr_summary gcov_ctr_summary, *Pgcov_ctr_summary;

struct gcov_ctr_summary {
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

typedef enum attr_atom_sse_attr {
    ATOM_SSE_ATTR_RCP=0,
    ATOM_SSE_ATTR_MOVDUP=1,
    ATOM_SSE_ATTR_LFENCE=2,
    ATOM_SSE_ATTR_FENCE=3,
    ATOM_SSE_ATTR_PREFETCH=4,
    ATOM_SSE_ATTR_SQRT=5,
    ATOM_SSE_ATTR_MXCSR=6,
    ATOM_SSE_ATTR_OTHER=7
} attr_atom_sse_attr;

typedef enum attr_pent_pair {
    PENT_PAIR_UV=0,
    PENT_PAIR_PU=1,
    PENT_PAIR_PV=2,
    PENT_PAIR_NP=3
} attr_pent_pair;

typedef enum attr_amdfam10_decode {
    AMDFAM10_DECODE_DIRECT=0,
    AMDFAM10_DECODE_VECTOR=1,
    AMDFAM10_DECODE_DOUBLE=2
} attr_amdfam10_decode;

typedef enum attr_memory {
    MEMORY_NONE=0,
    MEMORY_LOAD=1,
    MEMORY_STORE=2,
    MEMORY_BOTH=3,
    MEMORY_UNKNOWN=4
} attr_memory;

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

typedef enum attr_athlon_decode {
    ATHLON_DECODE_DIRECT=0,
    ATHLON_DECODE_VECTOR=1,
    ATHLON_DECODE_DOUBLE=2
} attr_athlon_decode;

typedef enum attr_imm_disp {
    IMM_DISP_FALSE=0,
    IMM_DISP_TRUE=1,
    IMM_DISP_UNKNOWN=2
} attr_imm_disp;

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

typedef enum attr_cpu {
    CPU_NONE=0,
    CPU_PENTIUM=1,
    CPU_PENTIUMPRO=2,
    CPU_GEODE=3,
    CPU_K6=4,
    CPU_ATHLON=5,
    CPU_K8=6,
    CPU_CORE2=7,
    CPU_ATOM=8,
    CPU_GENERIC64=9,
    CPU_AMDFAM10=10
} attr_cpu;

typedef enum attr_movu {
    MOVU_0=0,
    MOVU_1=1
} attr_movu;

typedef enum attr_unit {
    UNIT_INTEGER=0,
    UNIT_I387=1,
    UNIT_SSE=2,
    UNIT_MMX=3,
    UNIT_UNKNOWN=4
} attr_unit;

typedef enum attr_use_carry {
    USE_CARRY_0=0,
    USE_CARRY_1=1
} attr_use_carry;

typedef enum attr_pent_prefix {
    PENT_PREFIX_FALSE=0,
    PENT_PREFIX_TRUE=1
} attr_pent_prefix;

typedef enum attr_i387_cw {
    I387_CW_TRUNC=0,
    I387_CW_FLOOR=1,
    I387_CW_CEIL=2,
    I387_CW_MASK_PM=3,
    I387_CW_UNINITIALIZED=4,
    I387_CW_ANY=5
} attr_i387_cw;

typedef enum attr_prefix {
    PREFIX_ORIG=0,
    PREFIX_VEX=1,
    PREFIX_MAYBE_VEX=2
} attr_prefix;

typedef enum attr_fp_int_src {
    FP_INT_SRC_FALSE=0,
    FP_INT_SRC_TRUE=1
} attr_fp_int_src;

typedef enum attr_atom_unit {
    ATOM_UNIT_SISHUF=0,
    ATOM_UNIT_SIMUL=1,
    ATOM_UNIT_JEU=2,
    ATOM_UNIT_COMPLEX=3,
    ATOM_UNIT_OTHER=4
} attr_atom_unit;

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

typedef struct bitmap_head_def * bitmap;

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

typedef struct VEC_int_base VEC_int_base, *PVEC_int_base;

struct VEC_int_base {
    uint num;
    uint alloc;
    int vec[1];
};

typedef struct VEC_int_heap VEC_int_heap, *PVEC_int_heap;

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




int * VEC_int_base_address(VEC_int_base *vec_)

{
  int *piVar1;
  
  if (vec_ == (VEC_int_base *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = vec_->vec;
  }
  return piVar1;
}



int recog_memoized(rtx insn)

{
  undefined4 uVar1;
  
  if (*(int *)&insn[1].u < 0) {
    uVar1 = recog(*(undefined8 *)(insn + 1),insn,0);
    *(undefined4 *)&insn[1].u = uVar1;
  }
  return *(int *)&insn[1].u;
}



int insn_current_length(rtx insn)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  VEC_int_base *pVVar4;
  short *psVar5;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 == 0x1de) {
    extract_insn_cached(insn);
    if (insn_addresses_ == (VEC_int_base *)0x0) {
      iVar1 = 0;
    }
    else {
      pVVar4 = insn_addresses_;
      if (insn_addresses_ == (VEC_int_base *)0x0) {
        pVVar4 = (VEC_int_base *)0x0;
      }
      piVar3 = VEC_int_base_address(pVVar4);
      psVar5 = recog_data;
      if (*recog_data == 0x2c) {
        psVar5 = *(short **)(recog_data + 4);
      }
      iVar1 = piVar3[*(int *)(psVar5 + 4)];
    }
    iVar2 = insn_current_reference_address(insn);
    if (-0x7f < iVar1 - iVar2) {
      if (insn_addresses_ == (VEC_int_base *)0x0) {
        iVar1 = 0;
      }
      else {
        pVVar4 = insn_addresses_;
        if (insn_addresses_ == (VEC_int_base *)0x0) {
          pVVar4 = (VEC_int_base *)0x0;
        }
        piVar3 = VEC_int_base_address(pVVar4);
        psVar5 = recog_data;
        if (*recog_data == 0x2c) {
          psVar5 = *(short **)(recog_data + 4);
        }
        iVar1 = piVar3[*(int *)(psVar5 + 4)];
      }
      iVar2 = insn_current_reference_address(insn);
      if (iVar1 - iVar2 < 0x80) {
        return 2;
      }
    }
    iVar1 = 5;
  }
  else {
    if (iVar1 < 0x1df) {
      if (iVar1 == 0x1d2) {
        extract_insn_cached(insn);
        if (insn_addresses_ == (VEC_int_base *)0x0) {
          iVar1 = 0;
        }
        else {
          pVVar4 = insn_addresses_;
          if (insn_addresses_ == (VEC_int_base *)0x0) {
            pVVar4 = (VEC_int_base *)0x0;
          }
          piVar3 = VEC_int_base_address(pVVar4);
          psVar5 = recog_data;
          if (*recog_data == 0x2c) {
            psVar5 = *(short **)(recog_data + 4);
          }
          iVar1 = piVar3[*(int *)(psVar5 + 4)];
        }
        iVar2 = insn_current_reference_address(insn);
        if (-0x7f < iVar1 - iVar2) {
          if (insn_addresses_ == (VEC_int_base *)0x0) {
            iVar1 = 0;
          }
          else {
            pVVar4 = insn_addresses_;
            if (insn_addresses_ == (VEC_int_base *)0x0) {
              pVVar4 = (VEC_int_base *)0x0;
            }
            piVar3 = VEC_int_base_address(pVVar4);
            psVar5 = recog_data;
            if (*recog_data == 0x2c) {
              psVar5 = *(short **)(recog_data + 4);
            }
            iVar1 = piVar3[*(int *)(psVar5 + 4)];
          }
          iVar2 = insn_current_reference_address(insn);
          if (iVar1 - iVar2 < 0x80) {
            return 2;
          }
        }
        return 6;
      }
      if (iVar1 < 0x1d3) {
        if (iVar1 == -1) {
          if ((**(short **)(insn + 1) != 0x10) &&
             (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
            _fatal_insn_not_found(insn,"insn-attrtab.c",0x3f,&DAT_001d5f4c);
          }
        }
        else if (iVar1 == 0x1d1) {
          extract_insn_cached(insn);
          if (insn_addresses_ == (VEC_int_base *)0x0) {
            iVar1 = 0;
          }
          else {
            pVVar4 = insn_addresses_;
            if (insn_addresses_ == (VEC_int_base *)0x0) {
              pVVar4 = (VEC_int_base *)0x0;
            }
            piVar3 = VEC_int_base_address(pVVar4);
            psVar5 = recog_data;
            if (*recog_data == 0x2c) {
              psVar5 = *(short **)(recog_data + 4);
            }
            iVar1 = piVar3[*(int *)(psVar5 + 4)];
          }
          iVar2 = insn_current_reference_address(insn);
          if (-0x7f < iVar1 - iVar2) {
            if (insn_addresses_ == (VEC_int_base *)0x0) {
              iVar1 = 0;
            }
            else {
              pVVar4 = insn_addresses_;
              if (insn_addresses_ == (VEC_int_base *)0x0) {
                pVVar4 = (VEC_int_base *)0x0;
              }
              piVar3 = VEC_int_base_address(pVVar4);
              psVar5 = recog_data;
              if (*recog_data == 0x2c) {
                psVar5 = *(short **)(recog_data + 4);
              }
              iVar1 = piVar3[*(int *)(psVar5 + 4)];
            }
            iVar2 = insn_current_reference_address(insn);
            if (iVar1 - iVar2 < 0x80) {
              return 2;
            }
          }
          return 6;
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



int insn_variable_length_p(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 == 0x1de) {
LAB_001004af:
    iVar1 = 1;
  }
  else {
    if (iVar1 < 0x1df) {
      if (iVar1 == -1) {
        if (**(short **)(insn + 1) != 0x10) {
          iVar1 = asm_noperands(*(undefined8 *)(insn + 1));
          if (iVar1 < 0) {
            _fatal_insn_not_found(insn,"insn-attrtab.c",0x53,&DAT_001d5f4c);
          }
        }
      }
      else if ((-2 < iVar1) && (iVar1 - 0x1d1U < 2)) goto LAB_001004af;
    }
    iVar1 = 0;
  }
  return iVar1;
}



int insn_min_length(rtx insn)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x0010054c. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*(code *)(&DAT_001d5f60 + *(int *)(&DAT_001d5f60 + (ulong)(iVar1 + 1U) * 4)))();
    return iVar1;
  }
  iVar1 = get_attr_modrm(insn);
  iVar2 = get_attr_prefix_0f(insn);
  iVar3 = get_attr_prefix_rex(insn);
  iVar4 = get_attr_prefix_extra(insn);
  iVar5 = get_attr_prefix_rep(insn);
  iVar6 = get_attr_prefix_data16(insn);
  iVar7 = get_attr_length_immediate(insn);
  iVar8 = get_attr_length_address(insn);
  return iVar8 + iVar4 + iVar1 + iVar2 + iVar3 + 1 + iVar5 + iVar6 + iVar7;
}



int insn_default_length(rtx insn)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x00102564. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*(code *)(&DAT_001d7c00 + *(int *)(&DAT_001d7c00 + (ulong)(iVar1 + 1U) * 4)))();
    return iVar1;
  }
  iVar1 = get_attr_modrm(insn);
  iVar2 = get_attr_prefix_0f(insn);
  iVar3 = get_attr_prefix_rex(insn);
  iVar4 = get_attr_prefix_extra(insn);
  iVar5 = get_attr_prefix_rep(insn);
  iVar6 = get_attr_prefix_data16(insn);
  iVar7 = get_attr_length_immediate(insn);
  iVar8 = get_attr_length_address(insn);
  return iVar8 + iVar4 + iVar1 + iVar2 + iVar3 + 1 + iVar5 + iVar6 + iVar7;
}



int bypass_p(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x4e7) {
                    // WARNING: Could not recover jumptable at 0x0010457b. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*(code *)(&DAT_001d98a0 + *(int *)(&DAT_001d98a0 + (ulong)(iVar1 + 1U) * 4)))();
    return iVar1;
  }
  return 0;
}



int insn_default_latency(rtx insn)

{
  int iVar1;
  attr_memory aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x001065b7. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*(code *)(&DAT_001dac3c + *(int *)(&DAT_001dac3c + (ulong)(iVar1 + 1U) * 4)))();
    return iVar1;
  }
  if ((ix86_schedule == 1) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_BOTH)) {
    return 3;
  }
  if ((ix86_schedule == 1) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
    return 2;
  }
  if ((ix86_schedule == 1) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_NONE)) {
    return 1;
  }
  if ((ix86_schedule == 4) &&
     ((aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD ||
      (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_BOTH)))) {
    return 3;
  }
  if ((ix86_schedule == 4) &&
     ((aVar2 = get_attr_memory(insn), aVar2 == MEMORY_STORE ||
      (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_BOTH)))) {
    iVar1 = 2;
  }
  else {
    if ((ix86_schedule == 5) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
      return 3;
    }
    if (((ix86_schedule == 6) || (ix86_schedule == 9)) &&
       (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
      return 5;
    }
    if ((ix86_schedule == 10) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
      return 4;
    }
    if (((ix86_schedule == 5) || (ix86_schedule == 6)) || (ix86_schedule == 9)) {
      iVar1 = 3;
    }
    else if (ix86_schedule == 10) {
      iVar1 = 2;
    }
    else if (ix86_schedule == 8) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



int internal_dfa_insn_code(rtx insn)

{
  int iVar1;
  attr_memory aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x0015c3ad. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*(code *)(&DAT_001dc8dc + *(int *)(&DAT_001dc8dc + (ulong)(iVar1 + 1U) * 4)))();
    return iVar1;
  }
  if ((ix86_schedule == 1) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_BOTH)) {
    return 0x12;
  }
  if ((ix86_schedule == 1) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
    return 0x16;
  }
  if ((ix86_schedule == 1) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_NONE)) {
    return 0x1a;
  }
  if ((ix86_schedule == 4) &&
     ((aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD ||
      (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_BOTH)))) {
    return 0x81;
  }
  if ((ix86_schedule == 4) &&
     ((aVar2 = get_attr_memory(insn), aVar2 == MEMORY_STORE ||
      (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_BOTH)))) {
    iVar1 = 0x85;
  }
  else {
    if ((ix86_schedule == 5) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
      return 0xec;
    }
    if (((ix86_schedule == 6) || (ix86_schedule == 9)) &&
       (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
      return 0xed;
    }
    if ((ix86_schedule == 10) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD)) {
      return 0xee;
    }
    if (ix86_schedule == 5) {
      iVar1 = 0xef;
    }
    else if ((ix86_schedule == 6) || (ix86_schedule == 9)) {
      iVar1 = 0xf0;
    }
    else if (ix86_schedule == 10) {
      iVar1 = 0xf1;
    }
    else {
      if ((ix86_schedule == 8) && (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_NONE)) {
        return 0x184;
      }
      if ((ix86_schedule == 8) && (aVar2 = get_attr_memory(insn), aVar2 != MEMORY_NONE)) {
        return 0x185;
      }
      iVar1 = 0x1aa;
    }
  }
  return iVar1;
}



attr_atom_sse_attr get_attr_atom_sse_attr(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 == 0x5e6) {
    return ATOM_SSE_ATTR_LFENCE;
  }
  if ((iVar1 < 0x5e7) && (iVar1 < 0x5e6)) {
    if (0x5e2 < iVar1) {
      return ATOM_SSE_ATTR_FENCE;
    }
    if (iVar1 < 0x5e3) {
      if (0x5e0 < iVar1) {
        return ATOM_SSE_ATTR_MXCSR;
      }
      if (iVar1 < 0x3a3) {
        if ((0x3a0 < iVar1) || (iVar1 == 0x39c)) {
          return ATOM_SSE_ATTR_SQRT;
        }
        if (iVar1 < 0x39d) {
          if (iVar1 == 0x39a) {
            return ATOM_SSE_ATTR_RCP;
          }
          if (iVar1 < 0x39b) {
            if (iVar1 == 0x398) {
              return ATOM_SSE_ATTR_RCP;
            }
            if (iVar1 < 0x399) {
              if (iVar1 == 0x2be) {
                return ATOM_SSE_ATTR_PREFETCH;
              }
              if ((iVar1 < 0x2bf) && (iVar1 < 0x245)) {
                if (0x242 < iVar1) {
                  return ATOM_SSE_ATTR_SQRT;
                }
                if (iVar1 == 0x242) {
                  return ATOM_SSE_ATTR_RCP;
                }
                if (iVar1 < 0x243) {
                  if (iVar1 == -1) {
                    if ((**(short **)(insn + 1) != 0x10) &&
                       (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
                      _fatal_insn_not_found(insn,"insn-attrtab.c",0x1bc09,&DAT_001d5f4c);
                    }
                  }
                  else if (iVar1 == 0x21f) {
                    return ATOM_SSE_ATTR_RCP;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return ATOM_SSE_ATTR_OTHER;
}



attr_atom_unit get_attr_atom_unit(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x610) {
    if (iVar1 < 0x5c6) {
      if (iVar1 == 0x51b) {
LAB_001c3c1b:
        return ATOM_UNIT_SIMUL;
      }
      if ((iVar1 < 0x51c) && (iVar1 < 0x3e1)) {
        if (0x3de < iVar1) {
          return ATOM_UNIT_COMPLEX;
        }
        if (iVar1 == 0x3d8) {
          return ATOM_UNIT_COMPLEX;
        }
        if (iVar1 < 0x3d9) {
          if (iVar1 == -1) {
            if ((**(short **)(insn + 1) != 0x10) &&
               (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
              _fatal_insn_not_found(insn,"insn-attrtab.c",0x1bc47,&DAT_001d5f4c);
            }
          }
          else if ((-2 < iVar1) && (iVar1 - 0x1eaU < 3)) {
            return ATOM_UNIT_JEU;
          }
        }
      }
    }
    else {
      switch(iVar1) {
      case 0x5c6:
        extract_constrain_insn_cached(insn);
        if (which_alternative == 0) {
          return ATOM_UNIT_OTHER;
        }
        if (which_alternative != 1) {
          return ATOM_UNIT_OTHER;
        }
        return ATOM_UNIT_SISHUF;
      case 0x5da:
      case 0x5fc:
      case 0x5fd:
        goto LAB_001c3c1b;
      case 0x5ea:
      case 0x5eb:
      case 0x5ed:
      case 0x5ee:
      case 0x5f0:
      case 0x5f1:
      case 0x5f3:
      case 0x5f4:
      case 0x5f6:
      case 0x5f7:
      case 0x5f9:
      case 0x5fa:
        return ATOM_UNIT_COMPLEX;
      case 0x60e:
      case 0x60f:
        return ATOM_UNIT_SISHUF;
      }
    }
  }
  return ATOM_UNIT_OTHER;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

attr_amdfam10_decode get_attr_amdfam10_decode(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x48e) {
    if (iVar1 < 0x46d) {
      if (iVar1 == 0x17e) {
LAB_001c3ea0:
        return AMDFAM10_DECODE_VECTOR;
      }
      if (iVar1 < 0x17f) {
        if (iVar1 == -1) {
          if ((**(short **)(insn + 1) != 0x10) &&
             (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
            _fatal_insn_not_found(insn,"insn-attrtab.c",0x1bcca,&DAT_001d5f4c);
          }
        }
        else if (((-2 < iVar1) && (iVar1 < 0x10f)) && (0x2c < iVar1)) {
          switch(iVar1) {
          case 0x2d:
          case 0x30:
          case 0x74:
          case 0x75:
          case 0xa5:
          case 0xa6:
          case 0xab:
          case 0xac:
          case 0x109:
          case 0x10a:
          case 0x10d:
          case 0x10e:
            goto LAB_001c3ea0;
          case 0x36:
          case 0x89:
            goto LAB_001c3ea0;
          case 0x99:
          case 0x9a:
          case 0x9d:
          case 0x9e:
            extract_constrain_insn_cached(insn);
            if ((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
              return AMDFAM10_DECODE_DIRECT;
            }
            if (which_alternative == 2) {
              return AMDFAM10_DECODE_VECTOR;
            }
            return AMDFAM10_DECODE_DOUBLE;
          case 0x9b:
          case 0x9c:
          case 0xa1:
          case 0xa2:
            extract_constrain_insn_cached(insn);
            if (which_alternative == 0) {
              return AMDFAM10_DECODE_DIRECT;
            }
            return AMDFAM10_DECODE_DOUBLE;
          case 0x9f:
          case 0xa0:
            extract_constrain_insn_cached(insn);
            if (which_alternative == 0) {
              return AMDFAM10_DECODE_DIRECT;
            }
            if (which_alternative == 1) {
              return AMDFAM10_DECODE_VECTOR;
            }
            return AMDFAM10_DECODE_DOUBLE;
          case 0xa3:
          case 0xa4:
          case 0xa7:
          case 0xa8:
          case 0xa9:
          case 0xaa:
            goto switchD_001c3cb6_caseD_46d;
          case 0x106:
            extract_constrain_insn_cached(insn);
            if (((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) &&
               (iVar1 = memory_operand(_insn_current_reference_address,0), iVar1 != 0)) {
              return AMDFAM10_DECODE_VECTOR;
            }
            return AMDFAM10_DECODE_DIRECT;
          case 0x107:
            extract_constrain_insn_cached(insn);
            if ((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
              return AMDFAM10_DECODE_VECTOR;
            }
            return AMDFAM10_DECODE_DIRECT;
          }
        }
      }
    }
    else {
      switch(iVar1) {
      case 0x46d:
      case 0x47e:
      case 0x489:
      case 0x48b:
switchD_001c3cb6_caseD_46d:
        extract_constrain_insn_cached(insn);
        if (which_alternative == 0) {
          return AMDFAM10_DECODE_VECTOR;
        }
        return AMDFAM10_DECODE_DOUBLE;
      case 0x46f:
      case 0x470:
      case 0x480:
      case 0x481:
      case 0x485:
      case 0x487:
      case 0x48d:
LAB_001c3ea0:
        return AMDFAM10_DECODE_DOUBLE;
      }
    }
  }
  return AMDFAM10_DECODE_DIRECT;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

attr_athlon_decode get_attr_athlon_decode(rtx insn)

{
  int iVar1;
  attr_memory aVar2;
  attr_type aVar3;
  attr_mode aVar4;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x727) {
    if (0x70b < iVar1) {
LAB_001c48a7:
      return ATHLON_DECODE_VECTOR;
    }
    if (iVar1 < 0x6de) {
      if (0x6db < iVar1) {
        return ATHLON_DECODE_VECTOR;
      }
      if (iVar1 < 0x5e9) {
        if (0x5e6 < iVar1) {
          return ATHLON_DECODE_VECTOR;
        }
        if (iVar1 < 0x5c5) {
          if (0x5c1 < iVar1) {
            return ATHLON_DECODE_VECTOR;
          }
          if (iVar1 < 0x520) {
            if (0x51d < iVar1) {
              return ATHLON_DECODE_VECTOR;
            }
            if (iVar1 == 0x50f) {
              return ATHLON_DECODE_VECTOR;
            }
            if (iVar1 < 0x510) {
              if (iVar1 == 0x4cd) {
                return ATHLON_DECODE_VECTOR;
              }
              if (iVar1 < 0x4ce) {
                if (iVar1 == 0x4bf) {
                  return ATHLON_DECODE_VECTOR;
                }
                if ((iVar1 < 0x4c0) && (iVar1 < 0x4b7)) {
                  if (0x4b2 < iVar1) {
                    extract_constrain_insn_cached(insn);
                    if ((0x1f >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return ATHLON_DECODE_DIRECT;
                    }
                    return ATHLON_DECODE_VECTOR;
                  }
                  if (iVar1 < 0x356) {
                    if (-2 < iVar1) {
                      switch(iVar1) {
                      case 0x10:
                      case 0x11:
                      case 0x12:
                      case 0x13:
                      case 0x14:
                      case 0x15:
                      case 0x16:
                      case 0x17:
                      case 0x18:
                      case 0x19:
                      case 0x1a:
                      case 0x1b:
                      case 0x1c:
                      case 0x1d:
                      case 0x1e:
                      case 0x1f:
                      case 0x20:
                      case 0x21:
                      case 0x22:
                      case 0x23:
                      case 0x24:
                      case 0x25:
                      case 0x28:
                      case 0x29:
                      case 0x2d:
                      case 0x30:
                      case 0x31:
                      case 0x36:
                      case 0x37:
                      case 0x41:
                      case 0x48:
                      case 0x49:
                      case 0x4d:
                      case 0x4e:
                      case 0x52:
                      case 0x5d:
                      case 0x72:
                      case 0x73:
                      case 0x88:
                      case 0x89:
                      case 0x8a:
                      case 0x8b:
                      case 0x8c:
                      case 0x93:
                      case 0x94:
                      case 0x95:
                      case 0x96:
                      case 0x97:
                      case 0x98:
                      case 0xb9:
                      case 0xba:
                      case 0xbb:
                      case 0xbc:
                      case 0xbd:
                      case 0xbe:
                      case 0xbf:
                      case 0xc0:
                      case 0xe0:
                      case 0xe1:
                      case 0x10f:
                      case 0x110:
                      case 0x111:
                      case 0x112:
                      case 0x113:
                      case 0x114:
                      case 0x115:
                      case 0x116:
                      case 0x117:
                      case 0x118:
                      case 0x120:
                      case 0x151:
                      case 0x152:
                      case 0x15b:
                      case 0x15c:
                      case 0x15d:
                      case 0x15e:
                      case 0x15f:
                      case 0x160:
                      case 0x161:
                      case 0x162:
                      case 0x16f:
                      case 0x170:
                      case 0x171:
                      case 0x172:
                      case 0x173:
                      case 0x174:
                      case 0x17d:
                      case 0x17e:
                      case 0x18a:
                      case 0x1a1:
                      case 0x1b6:
                      case 0x1bf:
                      case 0x1c9:
                      case 0x1ca:
                      case 0x1d3:
                      case 0x1d4:
                      case 0x1d5:
                      case 0x1d6:
                      case 0x1d7:
                      case 0x1d8:
                      case 0x1d9:
                      case 0x1da:
                      case 0x1db:
                      case 0x1dc:
                      case 0x1dd:
                      case 0x1e1:
                      case 0x1e2:
                      case 0x1e3:
                      case 0x1e4:
                      case 0x1e5:
                      case 0x1e6:
                      case 0x1e7:
                      case 0x1e8:
                      case 0x1e9:
                      case 0x1ea:
                      case 0x1eb:
                      case 0x1ec:
                      case 0x1ee:
                      case 0x1ef:
                      case 0x1f0:
                      case 0x1f1:
                      case 0x1f2:
                      case 499:
                      case 500:
                      case 0x1f5:
                      case 0x200:
                      case 0x201:
                      case 0x202:
                      case 0x205:
                      case 0x206:
                      case 0x207:
                      case 0x208:
                      case 0x209:
                      case 0x20a:
                      case 0x20b:
                      case 0x20f:
                      case 0x210:
                      case 0x245:
                      case 0x246:
                      case 0x247:
                      case 0x248:
                      case 0x249:
                      case 0x24a:
                      case 0x24b:
                      case 0x24c:
                      case 0x24d:
                      case 0x24e:
                      case 0x24f:
                      case 0x250:
                      case 0x251:
                      case 0x252:
                      case 0x253:
                      case 0x254:
                      case 0x255:
                      case 0x256:
                      case 599:
                      case 600:
                      case 0x259:
                      case 0x25a:
                      case 0x25b:
                      case 0x25c:
                      case 0x25d:
                      case 0x25e:
                      case 0x25f:
                      case 0x260:
                      case 0x263:
                      case 0x264:
                      case 0x265:
                      case 0x266:
                      case 0x267:
                      case 0x268:
                      case 0x269:
                      case 0x26a:
                      case 0x26b:
                      case 0x26c:
                      case 0x287:
                      case 0x288:
                      case 0x289:
                      case 0x28a:
                      case 0x28b:
                      case 0x28c:
                      case 0x28d:
                      case 0x28e:
                      case 0x28f:
                      case 0x290:
                      case 0x291:
                      case 0x292:
                      case 0x293:
                      case 0x294:
                      case 0x295:
                      case 0x296:
                      case 0x297:
                      case 0x298:
                      case 0x299:
                      case 0x2a1:
                      case 0x2a2:
                      case 0x2b6:
                      case 0x2bd:
                      case 0x2c0:
                      case 0x2c1:
                      case 0x2c2:
                      case 0x2c3:
                      case 0x2c7:
                      case 0x2c8:
                      case 0x2c9:
                      case 0x2f2:
                      case 0x338:
                      case 0x355:
                        goto LAB_001c48a7;
                      case 0x26:
                      case 0x27:
                      case 0x2e:
                      case 0x34:
                        extract_insn_cached(insn);
                        iVar1 = memory_operand(_insn_current_reference_address,0);
                        if (iVar1 == 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x42:
                      case 0x2a0:
                        extract_constrain_insn_cached(insn);
                        if ((3 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x45:
                        extract_constrain_insn_cached(insn);
                        if ((which_alternative == 1) &&
                           (iVar1 = memory_operand(_insn_current_reference_address,0), iVar1 == 0))
                        {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x4a:
                      case 0x4b:
                        extract_constrain_insn_cached(insn);
                        if ((0x18 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x4f:
                      case 0x50:
                        extract_constrain_insn_cached(insn);
                        if (((7 >> ((byte)which_alternative & 0x1f) & 1U) != 0) &&
                           (((7 >> ((byte)which_alternative & 0x1f) & 1U) == 0 ||
                            ((aVar2 = get_attr_memory(insn), aVar2 != MEMORY_LOAD &&
                             (aVar2 = get_attr_memory(insn), aVar2 != MEMORY_STORE)))))) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x51:
                        extract_constrain_insn_cached(insn);
                        if ((7 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x5c:
                        extract_constrain_insn_cached(insn);
                        if ((7 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x61:
                        extract_constrain_insn_cached(insn);
                        aVar2 = get_attr_memory(insn);
                        if (((aVar2 == MEMORY_LOAD) ||
                            (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_STORE)) &&
                           (which_alternative == 1)) {
                          return ATHLON_DECODE_VECTOR;
                        }
                        return ATHLON_DECODE_DIRECT;
                      case 99:
                      case 100:
                      case 0x65:
                        extract_constrain_insn_cached(insn);
                        if ((which_alternative == 1) &&
                           ((aVar2 = get_attr_memory(insn), aVar2 == MEMORY_LOAD ||
                            (aVar2 = get_attr_memory(insn), aVar2 == MEMORY_STORE)))) {
                          return ATHLON_DECODE_VECTOR;
                        }
                        return ATHLON_DECODE_DIRECT;
                      case 0x69:
                        extract_constrain_insn_cached(insn);
                        if ((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x6a:
                      case 0x6c:
                      case 0x6d:
                      case 0x8d:
                      case 0x8e:
                      case 0xad:
                      case 0xae:
                      case 0xaf:
                      case 0xb0:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative == 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x74:
                      case 0x75:
switchD_001c3fc3_caseD_46e:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative != 0) {
                          return ATHLON_DECODE_VECTOR;
                        }
                        return ATHLON_DECODE_DOUBLE;
                      case 0x8f:
                      case 0xb1:
                      case 0xb2:
                        extract_constrain_insn_cached(insn);
                        if (((which_alternative == 0) &&
                            (aVar2 = get_attr_memory(insn), aVar2 != MEMORY_LOAD)) &&
                           (aVar2 = get_attr_memory(insn), aVar2 != MEMORY_STORE)) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x92:
                      case 0xb7:
                      case 0xb8:
                        aVar2 = get_attr_memory(insn);
                        if ((aVar2 != MEMORY_LOAD) &&
                           (aVar2 = get_attr_memory(insn), aVar2 != MEMORY_STORE)) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x99:
                      case 0x9a:
                        extract_constrain_insn_cached(insn);
                        if ((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                          if (which_alternative != 1) {
                            return ATHLON_DECODE_DIRECT;
                          }
                          return ATHLON_DECODE_VECTOR;
                        }
                        if (which_alternative != 2) {
                          if (which_alternative != 3) {
                            return ATHLON_DECODE_DOUBLE;
                          }
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_DOUBLE;
                      case 0x9d:
                      case 0x9e:
                        extract_constrain_insn_cached(insn);
                        if ((3 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                          if (which_alternative != 2) {
                            return ATHLON_DECODE_DIRECT;
                          }
                          return ATHLON_DECODE_DOUBLE;
                        }
                        if (which_alternative != 1) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x9f:
                      case 0xa0:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative == 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        if (which_alternative != 1) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_DOUBLE;
                      case 0xa3:
                      case 0xa4:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative == 0) {
                          return ATHLON_DECODE_DOUBLE;
                        }
                        if (which_alternative != 1) {
                          return ATHLON_DECODE_DOUBLE;
                        }
                        return ATHLON_DECODE_DIRECT;
                      case 0xa7:
                      case 0xa8:
                      case 0xa9:
                      case 0xaa:
switchD_001c3fc3_caseD_47e:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative != 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_DOUBLE;
                      case 0x106:
                        extract_constrain_insn_cached(insn);
                        if (((ix86_schedule != 5) && (which_alternative != 1)) &&
                           ((which_alternative != 2 ||
                            (iVar1 = memory_operand(_insn_current_reference_address,0), iVar1 == 0))
                           )) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x107:
                        extract_constrain_insn_cached(insn);
                        if ((which_alternative == 0) && (ix86_schedule != 5)) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x108:
                      case 0x10b:
                      case 0x10c:
                        if (ix86_schedule != 5) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x109:
                      case 0x10a:
                      case 0x10d:
                      case 0x10e:
                        if (ix86_schedule != 5) {
                          return ATHLON_DECODE_DOUBLE;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x1ff:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative != 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x2ce:
                      case 0x2cf:
                      case 0x2d0:
                      case 0x2d1:
                        extract_constrain_insn_cached(insn);
                        if ((0xff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x2d2:
                      case 0x2d3:
                      case 0x2d4:
                      case 0x2d5:
                        extract_constrain_insn_cached(insn);
                        if ((0xfff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case 0x2d6:
                      case 0x2d7:
                        extract_constrain_insn_cached(insn);
                        if ((0x1ff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      case -1:
                        if ((**(short **)(insn + 1) != 0x10) &&
                           (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
                          _fatal_insn_not_found(insn,"insn-attrtab.c",0x1be1a,&DAT_001d5f4c);
                        }
                        extract_insn_cached(insn);
                        aVar3 = get_attr_type(insn);
                        if ((((((aVar3 != TYPE_CALL) &&
                               (aVar3 = get_attr_type(insn), aVar3 != TYPE_IMUL)) &&
                              (aVar3 = get_attr_type(insn), aVar3 != TYPE_IDIV)) &&
                             (((aVar3 = get_attr_type(insn), aVar3 != TYPE_OTHER &&
                               (aVar3 = get_attr_type(insn), aVar3 != TYPE_MULTI)) &&
                              ((aVar3 = get_attr_type(insn), aVar3 != TYPE_FCMOV &&
                               ((aVar3 = get_attr_type(insn), aVar3 != TYPE_FPSPC &&
                                (aVar3 = get_attr_type(insn), aVar3 != TYPE_STR)))))))) &&
                            (aVar3 = get_attr_type(insn), aVar3 != TYPE_POP)) &&
                           (((aVar3 = get_attr_type(insn), aVar3 != TYPE_LEAVE &&
                             ((aVar3 = get_attr_type(insn), aVar3 != TYPE_PUSH ||
                              (iVar1 = memory_operand(_insn_current_reference_address,0), iVar1 == 0
                              )))) && ((aVar3 = get_attr_type(insn), aVar3 != TYPE_FMOV ||
                                       (((aVar2 = get_attr_memory(insn), aVar2 != MEMORY_LOAD &&
                                         (aVar2 = get_attr_memory(insn), aVar2 != MEMORY_STORE)) ||
                                        (aVar4 = get_attr_mode(insn), aVar4 != MODE_XF)))))))) {
                          return ATHLON_DECODE_DIRECT;
                        }
                        return ATHLON_DECODE_VECTOR;
                      }
                    }
                  }
                  else if ((iVar1 < 0x48a) && (0x46c < iVar1)) {
                    switch(iVar1) {
                    case 0x46d:
                    case 0x489:
                      extract_constrain_insn_cached(insn);
                      if (which_alternative != 0) {
                        return ATHLON_DECODE_DOUBLE;
                      }
                      return ATHLON_DECODE_VECTOR;
                    case 0x46e:
                    case 0x46f:
                    case 0x470:
                    case 0x47f:
                    case 0x480:
                    case 0x481:
                      goto switchD_001c3fc3_caseD_46e;
                    case 0x47e:
                      goto switchD_001c3fc3_caseD_47e;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return ATHLON_DECODE_DIRECT;
}



attr_fp_int_src get_attr_fp_int_src(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x237) {
    if (0x232 < iVar1) {
      return FP_INT_SRC_TRUE;
    }
    if (iVar1 < 0x22e) {
      if (0x225 < iVar1) {
        return FP_INT_SRC_TRUE;
      }
      if (iVar1 < 0xbc) {
        if (0x98 < iVar1) {
          return FP_INT_SRC_TRUE;
        }
        if (iVar1 < 0x93) {
          if (0x8c < iVar1) {
            return FP_INT_SRC_TRUE;
          }
          if (iVar1 == -1) {
            if ((**(short **)(insn + 1) != 0x10) &&
               (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
              _fatal_insn_not_found(insn,"insn-attrtab.c",0x1bfc3,&DAT_001d5f4c);
            }
          }
          else if ((-2 < iVar1) && (iVar1 - 0x1aU < 4)) {
            return FP_INT_SRC_TRUE;
          }
        }
      }
    }
  }
  return FP_INT_SRC_FALSE;
}



attr_i387_cw get_attr_i387_cw(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x287) {
    if (0x284 < iVar1) {
      return I387_CW_MASK_PM;
    }
    if (iVar1 < 0x285) {
      if (0x282 < iVar1) {
        return I387_CW_TRUNC;
      }
      if (iVar1 < 0x283) {
        if (0x277 < iVar1) {
          return I387_CW_CEIL;
        }
        if (iVar1 < 0x278) {
          if (0x26c < iVar1) {
            return I387_CW_FLOOR;
          }
          if (iVar1 == -1) {
            if ((**(short **)(insn + 1) != 0x10) &&
               (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
              _fatal_insn_not_found(insn,"insn-attrtab.c",0x1bffd,&DAT_001d5f4c);
            }
          }
          else if ((-2 < iVar1) && (iVar1 - 0x7fU < 9)) {
            return I387_CW_TRUNC;
          }
        }
      }
    }
  }
  return I387_CW_ANY;
}



attr_imm_disp get_attr_imm_disp(rtx insn)

{
  int iVar1;
  attr_imm_disp aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x6de) {
    if ((-2 < iVar1) && (iVar1 + 1U < 0x6df)) {
                    // WARNING: Could not recover jumptable at 0x001c4a9e. Too many branches
                    // WARNING: Treating indirect jump as call
      aVar2 = (*(code *)(&DAT_001df880 + *(int *)(&DAT_001df880 + (ulong)(iVar1 + 1U) * 4)))();
      return aVar2;
    }
  }
  else if (iVar1 - 0x70cU < 0x1b) {
    return IMM_DISP_UNKNOWN;
  }
  return IMM_DISP_FALSE;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int get_attr_length_vex(rtx insn)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  attr_unit aVar4;
  attr_type aVar5;
  
  iVar3 = recog_memoized(insn);
  if (iVar3 < 0x70c) {
    if (iVar3 < 0x4ac) {
      if (iVar3 < 0x4ac) {
        if (0x468 < iVar3) {
switchD_001c59f0_caseD_4ad:
          extract_constrain_insn_cached(insn);
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        if (iVar3 < 0x421) {
          if (0x355 < iVar3) goto switchD_001c59f0_caseD_4ad;
          if (iVar3 < 0x245) {
            if (-2 < iVar3) {
              switch(iVar3) {
              case 0x20:
              case 0x23:
              case 0x66:
              case 0x9b:
              case 0x9c:
              case 0x9f:
              case 0xa0:
              case 0xa1:
              case 0xa2:
                goto switchD_001c59f0_caseD_5cd;
              case 0x21:
              case 0x24:
              case 0x3a:
              case 0x3b:
              case 0x3d:
              case 0x43:
              case 0x44:
              case 0x55:
              case 0x58:
              case 0x5b:
              case 0x60:
              case 0x62:
              case 0x67:
              case 0x74:
              case 0x75:
              case 0xa3:
              case 0xa4:
              case 0xa5:
              case 0xa6:
              case 0xa7:
              case 0xa8:
              case 0xa9:
              case 0xaa:
              case 0xab:
              case 0xac:
              case 0x17e:
              case 0x18b:
              case 0x1c8:
              case 0x1cb:
              case 0x1cc:
              case 0x1cd:
              case 0x1ce:
              case 0x1cf:
              case 0x1d0:
              case 0x1f6:
              case 0x1f7:
              case 0x1f8:
              case 0x1f9:
              case 0x1fa:
              case 0x1fb:
              case 0x1fc:
              case 0x1fd:
              case 0x1fe:
              case 0x200:
              case 0x203:
              case 0x204:
              case 0x215:
              case 0x216:
              case 0x217:
              case 0x218:
              case 0x21f:
              case 0x242:
              case 0x243:
              case 0x244:
                goto switchD_001c59f0_caseD_4ad;
              case 0x2c:
                extract_constrain_insn_cached(insn);
                if ((0xffc >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case 0x2f:
                extract_constrain_insn_cached(insn);
                cVar2 = optimize_function_for_size_p(cfun);
                if ((((cVar2 == '\0') &&
                     ((which_alternative != 0 || ((DAT_001f8071 != '\0' && (DAT_001f807f != '\0'))))
                     )) && (((6 >> ((byte)which_alternative & 0x1f) & 1U) == 0 ||
                            (iVar3 = aligned_operand(_insn_current_reference_address,0xf),
                            iVar3 == 0)))) &&
                   ((const0_operand != '\0' && ((5 >> ((byte)which_alternative & 0x1f) & 1U) != 0)))
                   ) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case 0x35:
              case 0x3c:
              case 0x3e:
                extract_constrain_insn_cached(insn);
                aVar5 = get_attr_type(insn);
                if (aVar5 == TYPE_IMOVX) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case 0x42:
              case 0x61:
              case 0x99:
              case 0x9a:
              case 0x9d:
              case 0x9e:
              case 0x106:
              case 0x107:
              case 0x121:
              case 0x122:
switchD_001c5a23_caseD_2a0:
                extract_constrain_insn_cached(insn);
                if ((3 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case 0x46:
              case 0x4a:
              case 0x4b:
                extract_constrain_insn_cached(insn);
                if ((0x1f >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case 0x51:
                goto switchD_001c59f0_caseD_4df;
              case 0x52:
              case 0x57:
              case 0x5a:
              case 0x1ff:
                goto switchD_001c59f0_caseD_4ac;
              case 0x5c:
                extract_constrain_insn_cached(insn);
                if ((7 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case 0x5e:
              case 0x5f:
                extract_constrain_insn_cached(insn);
                if ((ix86_schedule != 4) && (which_alternative == 0)) {
                  iVar3 = ix86_attr_length_vex_default(insn,0,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,1,0);
                return iVar3;
              case 0x69:
              case 0x211:
              case 0x212:
              case 0x213:
              case 0x214:
                extract_constrain_insn_cached(insn);
                if (which_alternative == 1) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case 0x21b:
              case 0x21c:
              case 0x21d:
              case 0x21e:
              case 0x220:
              case 0x221:
              case 0x222:
              case 0x223:
                extract_constrain_insn_cached(insn);
                aVar4 = get_attr_unit(insn);
                if (aVar4 == UNIT_SSE) {
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              case -1:
                if ((**(short **)(insn + 1) != 0x10) &&
                   (iVar3 = asm_noperands(*(undefined8 *)(insn + 1)), iVar3 < 0)) {
                  _fatal_insn_not_found(insn,"insn-attrtab.c",0x1c8aa,&DAT_001d5f4c);
                }
                extract_constrain_insn_cached(insn);
                iVar3 = get_attr_prefix_0f(insn);
                if ((iVar3 == 1) && (iVar3 = get_attr_prefix_extra(insn), iVar3 == 0)) {
                  iVar3 = get_attr_prefix_vex_w(insn);
                  if (iVar3 == 1) {
                    iVar3 = ix86_attr_length_vex_default(insn,1,1);
                    return iVar3;
                  }
                  iVar3 = ix86_attr_length_vex_default(insn,1,0);
                  return iVar3;
                }
                iVar3 = get_attr_prefix_vex_w(insn);
                if (iVar3 == 1) {
                  iVar3 = ix86_attr_length_vex_default(insn,0,1);
                  return iVar3;
                }
                iVar3 = ix86_attr_length_vex_default(insn,0,0);
                return iVar3;
              }
            }
          }
          else if ((iVar3 < 0x355) && (0x29c < iVar3)) {
            switch(iVar3) {
            case 0x29d:
            case 0x29e:
            case 0x29f:
            case 0x2a5:
            case 0x2a6:
            case 0x2a7:
            case 0x2a8:
            case 0x2a9:
            case 0x2aa:
            case 0x2ab:
            case 0x2ac:
            case 0x2ad:
            case 0x2ae:
            case 0x2af:
            case 0x2b0:
            case 0x2b1:
            case 0x2b2:
            case 0x2b3:
            case 0x2b4:
            case 0x2be:
            case 0x2bf:
            case 0x2d8:
            case 0x2f0:
            case 0x2f1:
            case 0x2f4:
            case 0x2f5:
            case 0x2f6:
            case 0x2f7:
            case 0x2f8:
            case 0x2f9:
            case 0x2fa:
            case 0x2fb:
            case 0x2fc:
            case 0x2fd:
            case 0x2fe:
            case 0x2ff:
            case 0x300:
            case 0x301:
            case 0x302:
            case 0x303:
            case 0x304:
            case 0x305:
            case 0x306:
            case 0x307:
            case 0x309:
            case 0x30a:
            case 0x30b:
            case 0x30c:
            case 0x30d:
            case 0x30e:
            case 0x30f:
            case 0x310:
            case 0x311:
            case 0x312:
            case 0x313:
            case 0x314:
            case 0x315:
            case 0x316:
            case 0x317:
            case 0x318:
            case 0x319:
            case 0x31a:
            case 0x31b:
            case 0x31c:
            case 0x31d:
            case 0x31e:
            case 799:
            case 800:
            case 0x321:
            case 0x322:
            case 0x323:
            case 0x324:
            case 0x325:
            case 0x326:
            case 0x327:
            case 0x328:
            case 0x329:
            case 0x32a:
            case 0x32b:
            case 0x32c:
            case 0x32d:
            case 0x32e:
            case 0x32f:
            case 0x330:
            case 0x331:
            case 0x332:
            case 0x333:
            case 0x335:
            case 0x336:
            case 0x337:
            case 0x33b:
            case 0x33c:
            case 0x33d:
            case 0x33e:
            case 0x33f:
            case 0x340:
            case 0x341:
            case 0x342:
            case 0x343:
            case 0x344:
            case 0x345:
            case 0x346:
            case 0x347:
            case 0x348:
            case 0x349:
            case 0x34a:
            case 0x34b:
            case 0x34c:
            case 0x34d:
            case 0x34e:
            case 0x34f:
            case 0x350:
            case 0x351:
            case 0x352:
            case 0x353:
            case 0x354:
              goto switchD_001c59f0_caseD_4ad;
            case 0x2a0:
              goto switchD_001c5a23_caseD_2a0;
            case 0x2ce:
            case 0x2cf:
            case 0x2d0:
            case 0x2d1:
              extract_constrain_insn_cached(insn);
              if ((0xff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                iVar3 = ix86_attr_length_vex_default(insn,1,0);
                return iVar3;
              }
              iVar3 = ix86_attr_length_vex_default(insn,0,0);
              return iVar3;
            case 0x2d2:
            case 0x2d3:
            case 0x2d4:
            case 0x2d5:
              extract_constrain_insn_cached(insn);
              if ((0xfff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                iVar3 = ix86_attr_length_vex_default(insn,1,0);
                return iVar3;
              }
              iVar3 = ix86_attr_length_vex_default(insn,0,0);
              return iVar3;
            case 0x2d6:
            case 0x2d7:
              extract_constrain_insn_cached(insn);
              if ((0x1ff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                iVar3 = ix86_attr_length_vex_default(insn,1,0);
                return iVar3;
              }
              iVar3 = ix86_attr_length_vex_default(insn,0,0);
              return iVar3;
            case 0x2f3:
              goto switchD_001c59f0_caseD_4b3;
            case 0x339:
              goto switchD_001c59f0_caseD_4e5;
            case 0x33a:
              extract_constrain_insn_cached(insn);
              if (((ix86_isa_flags & 0x10000) == 0) && ((ix86_isa_flags & 2) == 0)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                iVar3 = ix86_attr_length_vex_default(insn,1,0);
                return iVar3;
              }
              iVar3 = ix86_attr_length_vex_default(insn,0,0);
              return iVar3;
            }
          }
        }
      }
    }
    else {
      switch(iVar3) {
      case 0x4ac:
      case 0x5c8:
switchD_001c59f0_caseD_4ac:
        extract_constrain_insn_cached(insn);
        if (which_alternative == 0) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x4ad:
      case 0x4b0:
      case 0x4b1:
      case 0x4b2:
      case 0x4b7:
      case 0x4b8:
      case 0x4b9:
      case 0x4ba:
      case 0x4ce:
      case 0x4cf:
      case 0x4d0:
      case 0x4d1:
      case 0x4d2:
      case 0x4d3:
      case 0x4d4:
      case 0x4d5:
      case 0x4d6:
      case 0x4d7:
      case 0x4d8:
      case 0x4d9:
      case 0x4da:
      case 0x4db:
      case 0x4dc:
      case 0x4dd:
      case 0x4de:
      case 0x4e6:
      case 0x4e7:
      case 0x4e8:
      case 0x4e9:
      case 0x4ea:
      case 0x4eb:
      case 0x4ec:
      case 0x4ed:
      case 0x4ee:
      case 0x4ef:
      case 0x4f0:
      case 0x4f1:
      case 0x4f2:
      case 0x4f3:
      case 0x4f4:
      case 0x4f5:
      case 0x4f6:
      case 0x4f7:
      case 0x4f8:
      case 0x4f9:
      case 0x4fa:
      case 0x4fb:
      case 0x4fc:
      case 0x4fd:
      case 0x4fe:
      case 0x4ff:
      case 0x500:
      case 0x501:
      case 0x502:
      case 0x503:
      case 0x504:
      case 0x505:
      case 0x506:
      case 0x507:
      case 0x508:
      case 0x509:
      case 0x50a:
      case 0x50b:
      case 0x50c:
      case 0x50d:
      case 0x50e:
      case 0x510:
      case 0x511:
      case 0x512:
      case 0x513:
      case 0x514:
      case 0x515:
      case 0x516:
      case 0x517:
      case 0x51a:
      case 0x51b:
      case 0x520:
      case 0x521:
      case 0x522:
      case 0x523:
      case 0x524:
      case 0x525:
      case 0x526:
      case 0x527:
      case 0x528:
      case 0x529:
      case 0x52a:
      case 0x52b:
      case 0x52c:
      case 0x52d:
      case 0x52e:
      case 0x52f:
      case 0x530:
      case 0x531:
      case 0x532:
      case 0x533:
      case 0x540:
      case 0x541:
      case 0x542:
      case 0x543:
      case 0x550:
      case 0x551:
      case 0x552:
      case 0x558:
      case 0x559:
      case 0x55a:
      case 0x55c:
      case 0x55d:
      case 0x55e:
      case 0x55f:
      case 0x560:
      case 0x561:
      case 0x562:
      case 0x563:
      case 0x564:
      case 0x565:
      case 0x566:
      case 0x567:
      case 0x568:
      case 0x569:
      case 0x56a:
      case 0x56b:
      case 0x56c:
      case 0x56d:
      case 0x56e:
      case 0x56f:
      case 0x570:
      case 0x571:
      case 0x572:
      case 0x573:
      case 0x574:
      case 0x575:
      case 0x576:
      case 0x577:
      case 0x578:
      case 0x579:
      case 0x57a:
      case 0x57b:
      case 0x57c:
      case 0x57d:
      case 0x57e:
      case 0x57f:
      case 0x580:
      case 0x581:
      case 0x582:
      case 0x583:
      case 0x584:
      case 0x585:
      case 0x586:
      case 0x587:
      case 0x588:
      case 0x589:
      case 0x58a:
      case 0x58b:
      case 0x58c:
      case 0x58d:
      case 0x58e:
      case 0x58f:
      case 0x590:
      case 0x591:
      case 0x592:
      case 0x593:
      case 0x594:
      case 0x595:
      case 0x596:
      case 0x597:
      case 0x598:
      case 0x599:
      case 0x59a:
      case 0x59b:
      case 0x59c:
      case 0x59d:
      case 0x59e:
      case 0x59f:
      case 0x5a0:
      case 0x5a1:
      case 0x5a2:
      case 0x5a3:
      case 0x5a4:
      case 0x5a5:
      case 0x5a6:
      case 0x5a7:
      case 0x5a8:
      case 0x5a9:
      case 0x5aa:
      case 0x5ab:
      case 0x5ac:
      case 0x5ad:
      case 0x5ae:
      case 0x5af:
      case 0x5b0:
      case 0x5b1:
      case 0x5b6:
      case 0x5ba:
      case 0x5bd:
      case 0x5be:
      case 0x5bf:
      case 0x5c0:
      case 0x5c1:
      case 0x5c5:
      case 0x5c6:
      case 0x5c7:
      case 0x5c9:
      case 0x5ca:
      case 0x5cb:
      case 0x5cc:
      case 0x5cf:
      case 0x5d0:
      case 0x5d1:
      case 0x5d2:
      case 0x5d3:
      case 0x5d4:
      case 0x5d5:
      case 0x5d6:
      case 0x5d7:
      case 0x5d8:
      case 0x5d9:
      case 0x5da:
      case 0x5db:
      case 0x5dc:
      case 0x5dd:
      case 0x5de:
      case 0x5df:
      case 0x5e1:
      case 0x5e2:
      case 0x5e3:
      case 0x5e4:
      case 0x5e5:
      case 0x5e6:
      case 0x616:
      case 0x617:
      case 0x618:
      case 0x619:
      case 0x61a:
      case 0x61b:
      case 0x61c:
      case 0x61d:
      case 0x66f:
      case 0x671:
      case 0x695:
      case 0x696:
      case 0x697:
      case 0x698:
      case 0x699:
      case 0x69a:
      case 0x69b:
      case 0x69c:
      case 0x6cf:
      case 0x6d0:
      case 0x700:
      case 0x701:
      case 0x702:
      case 0x703:
      case 0x704:
      case 0x705:
        goto switchD_001c59f0_caseD_4ad;
      case 0x4ae:
      case 0x4af:
        extract_constrain_insn_cached(insn);
        if (which_alternative != 1) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x4b3:
      case 0x4b4:
      case 0x4b5:
      case 0x4b6:
      case 0x4e3:
switchD_001c59f0_caseD_4b3:
        extract_constrain_insn_cached(insn);
        if ((0xf >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x4df:
      case 0x4e0:
      case 0x4e1:
      case 0x4e2:
switchD_001c59f0_caseD_4df:
        extract_constrain_insn_cached(insn);
        if ((7 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x4e4:
        extract_constrain_insn_cached(insn);
        if ((0x1f >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x4e5:
switchD_001c59f0_caseD_4e5:
        extract_constrain_insn_cached(insn);
        if ((0x3f >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x534:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x535:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x536:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,1,0);
        return iVar3;
      case 0x537:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,1,0);
        return iVar3;
      case 0x538:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,1,0);
        return iVar3;
      case 0x539:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,1,0);
        return iVar3;
      case 0x53a:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x53b:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x53c:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x53d:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x53e:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x53f:
        extract_constrain_insn_cached(insn);
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x54c:
      case 0x54d:
      case 0x54e:
      case 0x54f:
      case 0x554:
      case 0x555:
      case 0x556:
      case 0x557:
        extract_constrain_insn_cached(insn);
        if (*(char *)(recog_data + 2) != 'B') {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x5b2:
      case 0x5b3:
      case 0x5b4:
        extract_constrain_insn_cached(insn);
        iVar3 = register_operand(recog_data,0x40);
        if (iVar3 != 0) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x5cd:
      case 0x5ce:
      case 0x706:
      case 0x707:
      case 0x708:
      case 0x709:
      case 0x70a:
      case 0x70b:
switchD_001c59f0_caseD_5cd:
        extract_constrain_insn_cached(insn);
        if (which_alternative != 0) {
          iVar3 = ix86_attr_length_vex_default(insn,1,0);
          return iVar3;
        }
        iVar3 = ix86_attr_length_vex_default(insn,0,0);
        return iVar3;
      case 0x5e0:
        return 3;
      }
    }
  }
  extract_constrain_insn_cached(insn);
  iVar3 = ix86_attr_length_vex_default(insn,0,0);
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int get_attr_length_address(rtx insn)

{
  int iVar1;
  attr_type aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x727) {
    if (0x70b < iVar1) {
LAB_001c6bb8:
      return 0;
    }
    if (iVar1 < 0x6de) {
      if (0x6db < iVar1) {
        return 0;
      }
      if (iVar1 < 0x5e9) {
        if (iVar1 < 0x5c2) {
          if (iVar1 < 0x520) {
            if (0x51d < iVar1) {
              return 0;
            }
            if (iVar1 == 0x50f) {
              return 0;
            }
            if (iVar1 < 0x510) {
              if (iVar1 == 0x4cd) {
                return 0;
              }
              if (iVar1 < 0x4ce) {
                if (iVar1 == 0x4bf) {
                  return 0;
                }
                if ((iVar1 < 0x4c0) && (iVar1 < 0x4b7)) {
                  if (0x4b2 < iVar1) {
                    extract_constrain_insn_cached(insn);
                    if ((0x1f >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      iVar1 = ix86_attr_length_address_default(insn);
                      return iVar1;
                    }
                    return 0;
                  }
                  if (iVar1 == 0x355) {
                    return 0;
                  }
                  if (iVar1 < 0x356) {
                    if (iVar1 < 0x2f3) {
                      if (-2 < iVar1) {
                        switch(iVar1) {
                        case 0x10:
                        case 0x11:
                        case 0x12:
                        case 0x13:
                        case 0x14:
                        case 0x15:
                        case 0x16:
                        case 0x17:
                        case 0x18:
                        case 0x19:
                        case 0x1a:
                        case 0x1b:
                        case 0x1c:
                        case 0x1d:
                        case 0x1e:
                        case 0x1f:
                        case 0x41:
                        case 0x47:
                        case 0x48:
                        case 0x49:
                        case 0x4c:
                        case 0x4d:
                        case 0x4e:
                        case 0x52:
                        case 0x53:
                        case 0x5d:
                        case 0x72:
                        case 0x73:
                        case 0x88:
                        case 0x89:
                        case 0x8a:
                        case 0x8b:
                        case 0x8c:
                        case 0x93:
                        case 0x94:
                        case 0x95:
                        case 0x96:
                        case 0x97:
                        case 0x98:
                        case 0xb9:
                        case 0xba:
                        case 0xbb:
                        case 0xbc:
                        case 0xbd:
                        case 0xbe:
                        case 0xbf:
                        case 0xc0:
                        case 0xe0:
                        case 0xe1:
                        case 0x111:
                        case 0x112:
                        case 0x115:
                        case 0x116:
                        case 0x120:
                        case 0x151:
                        case 0x152:
                        case 0x15b:
                        case 0x15c:
                        case 0x15d:
                        case 0x15e:
                        case 0x15f:
                        case 0x160:
                        case 0x161:
                        case 0x162:
                        case 0x16f:
                        case 0x170:
                        case 0x171:
                        case 0x172:
                        case 0x173:
                        case 0x174:
                        case 0x17d:
                        case 0x18a:
                        case 0x1a1:
                        case 0x1b6:
                        case 0x1bf:
                        case 0x1c9:
                        case 0x1ca:
                        case 0x1d3:
                        case 0x1d4:
                        case 0x1d5:
                        case 0x1d6:
                        case 0x1d7:
                        case 0x1d8:
                        case 0x1d9:
                        case 0x1da:
                        case 0x1db:
                        case 0x1dc:
                        case 0x1dd:
                        case 0x1e7:
                        case 0x1e8:
                        case 0x1e9:
                        case 0x1ea:
                        case 0x1eb:
                        case 0x1ec:
                        case 0x1ee:
                        case 0x1ef:
                        case 0x1f0:
                        case 0x1f1:
                        case 0x1f2:
                        case 499:
                        case 0x1f5:
                        case 0x200:
                        case 0x201:
                        case 0x202:
                        case 0x205:
                        case 0x206:
                        case 0x207:
                        case 0x208:
                        case 0x209:
                        case 0x20a:
                        case 0x20b:
                        case 0x20f:
                        case 0x210:
                        case 0x287:
                        case 0x288:
                        case 0x289:
                        case 0x28a:
                        case 0x28b:
                        case 0x28c:
                        case 0x28d:
                        case 0x28e:
                        case 0x28f:
                        case 0x290:
                        case 0x291:
                        case 0x292:
                        case 0x293:
                        case 0x294:
                        case 0x295:
                        case 0x296:
                        case 0x297:
                        case 0x298:
                        case 0x299:
                        case 0x2b6:
                        case 0x2bd:
                        case 0x2c0:
                        case 0x2c1:
                        case 0x2c2:
                        case 0x2c3:
                        case 0x2c7:
                        case 0x2c8:
                        case 0x2c9:
                        case 0x2f2:
                          goto LAB_001c6bb8;
                        case 0x42:
                          extract_constrain_insn_cached(insn);
                          if ((3 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x45:
                          extract_constrain_insn_cached(insn);
                          if (which_alternative == 1) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x4a:
                        case 0x4b:
                          extract_constrain_insn_cached(insn);
                          if ((0x18 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x4f:
                        case 0x50:
                        case 0x51:
                          extract_constrain_insn_cached(insn);
                          if ((7 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x5c:
                          extract_constrain_insn_cached(insn);
                          if ((7 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x69:
                        case 0x2a1:
                          extract_constrain_insn_cached(insn);
                          if ((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x6a:
                        case 0x6c:
                        case 0x6d:
                        case 0x8d:
                        case 0x8e:
                        case 0x8f:
                        case 0xad:
                        case 0xae:
                        case 0xaf:
                        case 0xb0:
                        case 0xb1:
                        case 0xb2:
                          extract_constrain_insn_cached(insn);
                          if (which_alternative == 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x99:
                        case 0x9a:
                        case 0x9d:
                        case 0x9e:
                          extract_constrain_insn_cached(insn);
                          if (which_alternative != 1) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x1e1:
                        case 0x1e2:
                        case 0x1e3:
                        case 0x1e4:
                        case 0x1e5:
                        case 0x1e6:
                          extract_constrain_insn_cached(insn);
                          iVar1 = constant_call_address_operand(recog_data,0);
                          if (iVar1 == 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x1ff:
                          extract_constrain_insn_cached(insn);
                          if (which_alternative != 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x20e:
                          return 4;
                        case 0x2b7:
                        case 0x2b8:
                        case 0x2b9:
                        case 0x2ba:
                        case 699:
                        case 700:
                          extract_constrain_insn_cached(insn);
                          iVar1 = constant_call_address_operand(_insn_current_reference_address,0);
                          if (iVar1 == 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x2be:
                          extract_constrain_insn_cached(insn);
                          iVar1 = memory_address_length(recog_data);
                          return iVar1;
                        case 0x2bf:
                          extract_constrain_insn_cached(insn);
                          iVar1 = memory_address_length(recog_data);
                          return iVar1;
                        case 0x2ce:
                        case 0x2cf:
                        case 0x2d0:
                        case 0x2d1:
                          extract_constrain_insn_cached(insn);
                          if ((0xff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x2d2:
                        case 0x2d3:
                        case 0x2d4:
                        case 0x2d5:
                          extract_constrain_insn_cached(insn);
                          if ((0xfff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case 0x2d6:
                        case 0x2d7:
                          extract_constrain_insn_cached(insn);
                          if ((0x1ff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        case -1:
                          if ((**(short **)(insn + 1) != 0x10) &&
                             (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
                            _fatal_insn_not_found(insn,"insn-attrtab.c",0x1c9c5,&DAT_001d5f4c);
                          }
                          extract_constrain_insn_cached(insn);
                          aVar2 = get_attr_type(insn);
                          if (((((aVar2 != TYPE_STR) &&
                                (aVar2 = get_attr_type(insn), aVar2 != TYPE_OTHER)) &&
                               (aVar2 = get_attr_type(insn), aVar2 != TYPE_MULTI)) &&
                              ((aVar2 = get_attr_type(insn), aVar2 != TYPE_FXCH &&
                               ((aVar2 = get_attr_type(insn), aVar2 != TYPE_CALL ||
                                (iVar1 = constant_call_address_operand(recog_data,0), iVar1 == 0))))
                              )) && ((aVar2 = get_attr_type(insn), aVar2 != TYPE_CALLV ||
                                     (iVar1 = constant_call_address_operand
                                                        (_insn_current_reference_address,0),
                                     iVar1 == 0)))) {
                            iVar1 = ix86_attr_length_address_default(insn);
                            return iVar1;
                          }
                          return 0;
                        }
                      }
                    }
                    else if (iVar1 == 0x338) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
        else if ((1 << ((char)iVar1 + 0x3eU & 0x3f) & 0x7a00000007U) != 0) {
          return 0;
        }
      }
    }
  }
  extract_constrain_insn_cached(insn);
  iVar1 = ix86_attr_length_address_default(insn);
  return iVar1;
}



int get_attr_length_immediate(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x70d) {
                    // WARNING: Could not recover jumptable at 0x001c6c04. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*(code *)(&DAT_001e3544 + *(int *)(&DAT_001e3544 + (ulong)(iVar1 + 1U) * 4)))();
    return iVar1;
  }
  return 0;
}



attr_movu get_attr_movu(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 == -1) {
    if ((**(short **)(insn + 1) != 0x10) &&
       (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
      _fatal_insn_not_found(insn,"insn-attrtab.c",0x1d0c5,&DAT_001d5f4c);
    }
  }
  else if ((((-2 < iVar1) && (iVar1 < 0x36d)) && (0x355 < iVar1)) &&
          ((1 << ((char)iVar1 + 0xaaU & 0x3f) & 0x7003efU) != 0)) {
    return MOVU_1;
  }
  return MOVU_0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

attr_memory get_attr_memory(rtx insn)

{
  int iVar1;
  attr_memory aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x001c8a0c. Too many branches
                    // WARNING: Treating indirect jump as call
    aVar2 = (*(code *)(&DAT_001e5178 + *(int *)(&DAT_001e5178 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  extract_insn_cached(insn);
  iVar1 = memory_operand(recog_data,0);
  if ((iVar1 != 0) && (iVar1 = memory_operand(_insn_current_reference_address,0), iVar1 != 0)) {
    return MEMORY_BOTH;
  }
  iVar1 = memory_operand(recog_data,0);
  if (iVar1 == 0) {
    iVar1 = memory_operand(_insn_current_reference_address,0);
    if ((iVar1 == 0) && (iVar1 = memory_operand(_asm_noperands,0), iVar1 == 0)) {
      return MEMORY_NONE;
    }
    aVar2 = MEMORY_LOAD;
  }
  else {
    aVar2 = MEMORY_STORE;
  }
  return aVar2;
}



int get_attr_modrm(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x4e6) {
    if ((-2 < iVar1) && (iVar1 + 1U < 0x4e7)) {
                    // WARNING: Could not recover jumptable at 0x001cb598. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*(code *)(&DAT_001e6e18 + *(int *)(&DAT_001e6e18 + (ulong)(iVar1 + 1U) * 4)))();
      return iVar1;
    }
  }
  else if (iVar1 - 0x6cfU < 2) {
    return 0;
  }
  return 1;
}



attr_mode get_attr_mode(rtx insn)

{
  int iVar1;
  attr_mode aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x001ccd88. Too many branches
                    // WARNING: Treating indirect jump as call
    aVar2 = (*(code *)(&DAT_001e81b4 + *(int *)(&DAT_001e81b4 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return MODE_TI;
}



attr_pent_pair get_attr_pent_pair(rtx insn)

{
  int iVar1;
  attr_pent_pair aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x4e7) {
                    // WARNING: Could not recover jumptable at 0x001ce89c. Too many branches
                    // WARNING: Treating indirect jump as call
    aVar2 = (*(code *)(&DAT_001e9e54 + *(int *)(&DAT_001e9e54 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return PENT_PAIR_NP;
}



attr_pent_prefix get_attr_pent_prefix(rtx insn)

{
  int iVar1;
  attr_pent_prefix aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x001cfa37. Too many branches
                    // WARNING: Treating indirect jump as call
    aVar2 = (*(code *)(&DAT_001eb1f0 + *(int *)(&DAT_001eb1f0 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return PENT_PREFIX_TRUE;
}



int get_attr_prefix_vex_w(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if ((iVar1 == -1) && (**(short **)(insn + 1) != 0x10)) {
    iVar1 = asm_noperands(*(undefined8 *)(insn + 1));
    if (iVar1 < 0) {
      _fatal_insn_not_found(insn,"insn-attrtab.c",0x1efb9,&DAT_001d5f4c);
    }
  }
  return 0;
}



attr_prefix get_attr_prefix(rtx insn)

{
  int iVar1;
  attr_prefix aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x70d) {
                    // WARNING: Could not recover jumptable at 0x001d04e3. Too many branches
                    // WARNING: Treating indirect jump as call
    aVar2 = (*(code *)(&DAT_001ece90 + *(int *)(&DAT_001ece90 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return PREFIX_ORIG;
}



// WARNING: Type propagation algorithm not settling

int get_attr_prefix_extra(rtx insn)

{
  bool bVar1;
  int iVar2;
  attr_type aVar3;
  
  iVar2 = recog_memoized(insn);
  if (iVar2 < 0x70c) {
    if (iVar2 < 0x668) {
      if (iVar2 < 0x668) {
        if (0x61d < iVar2) {
          return 1;
        }
        if (iVar2 < 0x616) {
          if (iVar2 < 0x518) {
            if (iVar2 < 0x4cd) {
              if (iVar2 < 0x4ac) {
                if (iVar2 < 0x469) {
                  if (0x420 < iVar2) {
                    return 2;
                  }
                  if (iVar2 == 0x33a) {
                    extract_constrain_insn_cached(insn);
                    if (((ix86_isa_flags & 0x10000) == 0) && ((ix86_isa_flags & 2) == 0)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) {
                      return 1;
                    }
                    return 0;
                  }
                  if (iVar2 < 0x33b) {
                    if (iVar2 == 0x334) {
                      return 1;
                    }
                    if (iVar2 < 0x335) {
                      if (iVar2 == 0x308) {
                        return 1;
                      }
                      if ((iVar2 < 0x309) && (iVar2 < 0x2f0)) {
                        if (0x2d8 < iVar2) {
                          return 1;
                        }
                        if (iVar2 < 0x2c7) {
                          if (0x2c3 < iVar2) {
                            return 1;
                          }
                          if (iVar2 < 0x2a5) {
                            if (0x2a2 < iVar2) {
                              return 2;
                            }
                            if (iVar2 < 0x263) {
                              if (0x260 < iVar2) {
                                return 1;
                              }
                              if (iVar2 == -1) {
                                if ((**(short **)(insn + 1) != 0x10) &&
                                   (iVar2 = asm_noperands(*(undefined8 *)(insn + 1)), iVar2 < 0)) {
                                  _fatal_insn_not_found(insn,"insn-attrtab.c",0x1f52f,&DAT_001d5f4c)
                                  ;
                                }
                                aVar3 = get_attr_type(insn);
                                if ((aVar3 != TYPE_SSEMULADD) &&
                                   (aVar3 = get_attr_type(insn), aVar3 != TYPE_SSE4ARG)) {
                                  aVar3 = get_attr_type(insn);
                                  if ((aVar3 != TYPE_SSEIADD1) &&
                                     (aVar3 = get_attr_type(insn), aVar3 != TYPE_SSECVT1)) {
                                    return 0;
                                  }
                                  return 1;
                                }
                                return 2;
                              }
                              if (iVar2 == 0x1ff) goto switchD_001d0974_caseD_5c8;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                switch(iVar2) {
                case 0x4ac:
                  goto switchD_001d0974_caseD_5c8;
                case 0x4ae:
                case 0x4af:
                  extract_constrain_insn_cached(insn);
                  if (which_alternative == 0) {
                    return 0;
                  }
                  if (which_alternative == 1) {
                    return 1;
                  }
                  return 0;
                case 0x4b3:
                case 0x4b4:
                case 0x4b5:
                case 0x4b6:
                  extract_constrain_insn_cached(insn);
                  if ((0xf >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                    return 0;
                  }
                  if (which_alternative == 4) {
                    return 1;
                  }
                  return 0;
                case 0x4bb:
                case 0x4bc:
                case 0x4bd:
                case 0x4be:
                case 0x4c0:
                case 0x4c1:
                case 0x4c2:
                case 0x4c3:
                case 0x4c4:
                case 0x4c5:
                case 0x4c6:
                case 0x4c7:
                case 0x4c8:
                case 0x4c9:
                case 0x4ca:
                case 0x4cb:
                case 0x4cc:
                  goto LAB_001d0cf9;
                }
              }
            }
          }
          else {
            switch(iVar2) {
            case 0x518:
            case 0x519:
            case 0x51c:
            case 0x51d:
            case 0x544:
            case 0x545:
            case 0x546:
            case 0x547:
            case 0x548:
            case 0x549:
            case 0x54a:
            case 0x54b:
            case 0x553:
            case 0x55b:
            case 0x5b5:
            case 0x5b7:
            case 0x5b8:
            case 0x5b9:
            case 0x5bb:
            case 0x5bc:
            case 0x5e9:
            case 0x5ea:
            case 0x5eb:
            case 0x5ec:
            case 0x5ed:
            case 0x5ee:
            case 0x5ef:
            case 0x5f0:
            case 0x5f1:
            case 0x5f2:
            case 0x5f3:
            case 0x5f4:
            case 0x5f5:
            case 0x5f6:
            case 0x5f7:
            case 0x5f8:
            case 0x5f9:
            case 0x5fa:
            case 0x5fb:
            case 0x5fc:
            case 0x5fd:
            case 0x5fe:
            case 0x5ff:
            case 0x600:
            case 0x601:
            case 0x602:
            case 0x603:
            case 0x604:
            case 0x605:
            case 0x606:
            case 0x607:
            case 0x608:
            case 0x609:
            case 0x60a:
            case 0x60b:
            case 0x60c:
            case 0x60d:
            case 0x60e:
            case 0x60f:
            case 0x610:
            case 0x611:
            case 0x612:
            case 0x613:
            case 0x614:
            case 0x615:
LAB_001d0cf9:
              return 1;
            case 0x534:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x535:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x536:
              extract_constrain_insn_cached(insn);
              return 0;
            case 0x537:
              extract_constrain_insn_cached(insn);
              return 0;
            case 0x538:
              extract_constrain_insn_cached(insn);
              return 0;
            case 0x539:
              extract_constrain_insn_cached(insn);
              return 0;
            case 0x53a:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x53b:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x53c:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x53d:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x53e:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x53f:
              extract_constrain_insn_cached(insn);
              return 1;
            case 0x54c:
            case 0x54d:
            case 0x54e:
            case 0x54f:
            case 0x554:
            case 0x555:
            case 0x556:
            case 0x557:
              extract_insn_cached(insn);
              if (*(char *)(recog_data + 2) == 'B') {
                return 1;
              }
              return 0;
            case 0x5b2:
            case 0x5b3:
            case 0x5b4:
              extract_insn_cached(insn);
              iVar2 = register_operand(recog_data,0x40);
              if (iVar2 != 0) {
                return 0;
              }
              return 1;
            case 0x5c8:
switchD_001d0974_caseD_5c8:
              extract_constrain_insn_cached(insn);
              if (which_alternative == 0) {
                return 0;
              }
              return 1;
            case 0x5cd:
            case 0x5ce:
              goto switchD_001d0941_caseD_706;
            }
          }
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x668:
      case 0x669:
      case 0x66a:
      case 0x66b:
      case 0x66c:
      case 0x66d:
      case 0x66e:
      case 0x670:
      case 0x672:
      case 0x673:
      case 0x674:
      case 0x675:
      case 0x676:
      case 0x677:
      case 0x678:
      case 0x679:
      case 0x67a:
      case 0x67b:
      case 0x67c:
      case 0x67d:
      case 0x67e:
      case 0x67f:
      case 0x680:
      case 0x681:
      case 0x691:
      case 0x692:
      case 0x693:
      case 0x694:
      case 0x69d:
      case 0x69e:
      case 0x69f:
      case 0x6a0:
      case 0x6a1:
      case 0x6a2:
      case 0x6a3:
      case 0x6a4:
      case 0x6a5:
      case 0x6a6:
      case 0x6a7:
      case 0x6a8:
      case 0x6af:
      case 0x6b0:
      case 0x6b1:
      case 0x6b2:
      case 0x6b3:
      case 0x6b4:
      case 0x6b5:
      case 0x6b6:
      case 0x6b7:
      case 0x6b8:
      case 0x6b9:
      case 0x6ba:
      case 0x6bb:
      case 0x6bc:
      case 0x6bd:
      case 0x6be:
      case 0x6bf:
      case 0x6c0:
      case 0x6c1:
      case 0x6c2:
        return 2;
      case 0x682:
      case 0x683:
      case 0x684:
      case 0x685:
      case 0x686:
      case 0x687:
      case 0x688:
      case 0x689:
      case 0x68a:
      case 0x68b:
      case 0x68c:
      case 0x68d:
      case 0x68e:
      case 0x68f:
      case 0x690:
      case 0x6a9:
      case 0x6aa:
      case 0x6ab:
      case 0x6ac:
      case 0x6ad:
      case 0x6ae:
      case 0x6c3:
      case 0x6c4:
      case 0x6c5:
      case 0x6c6:
      case 0x6c7:
      case 0x6c8:
      case 0x6c9:
      case 0x6ca:
      case 0x6cb:
      case 0x6cc:
      case 0x6cd:
      case 0x6ce:
      case 0x6d1:
      case 0x6d2:
      case 0x6d3:
      case 0x6d4:
      case 0x6d5:
      case 0x6d6:
      case 0x6d7:
      case 0x6d8:
      case 0x6d9:
      case 0x6da:
      case 0x6db:
      case 0x6de:
      case 0x6df:
      case 0x6e0:
      case 0x6e1:
      case 0x6e2:
      case 0x6e3:
      case 0x6e4:
      case 0x6e5:
      case 0x6e6:
      case 0x6e7:
      case 0x6e8:
      case 0x6e9:
      case 0x6ea:
      case 0x6eb:
      case 0x6ec:
      case 0x6ed:
      case 0x6ee:
      case 0x6ef:
      case 0x6f0:
      case 0x6f1:
      case 0x6f2:
      case 0x6f3:
      case 0x6f4:
      case 0x6f5:
      case 0x6f6:
      case 0x6f7:
      case 0x6f8:
      case 0x6f9:
      case 0x6fa:
      case 0x6fb:
      case 0x6fc:
      case 0x6fd:
      case 0x6fe:
      case 0x6ff:
        goto LAB_001d0cf9;
      case 0x706:
      case 0x707:
      case 0x708:
      case 0x709:
      case 0x70a:
      case 0x70b:
switchD_001d0941_caseD_706:
        extract_constrain_insn_cached(insn);
        if (which_alternative == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int get_attr_prefix_rex(rtx insn)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = recog_memoized(insn);
  if (iVar2 < 0x2d8) {
    if (-2 < iVar2) {
      switch(iVar2) {
      case 0:
      case 4:
      case 8:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3f:
      case 0x40:
      case 0xc3:
      case 0xcb:
      case 0xcf:
      case 0xd3:
      case 0xd6:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xe2:
      case 0xe6:
      case 0xe7:
      case 0xeb:
      case 0xef:
      case 0xf0:
      case 0xf7:
      case 0xfb:
      case 0xfe:
      case 0xff:
      case 0x108:
      case 0x10b:
      case 0x10c:
      case 0x10f:
      case 0x110:
      case 0x11a:
      case 0x11d:
      case 0x11e:
      case 0x11f:
      case 0x124:
      case 0x126:
      case 0x129:
      case 0x12a:
      case 299:
      case 300:
      case 0x12d:
      case 0x136:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x140:
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x14d:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x153:
      case 0x157:
      case 0x179:
      case 0x188:
      case 0x189:
      case 0x199:
      case 0x19a:
      case 0x19b:
      case 0x19c:
      case 0x19d:
      case 0x19e:
      case 0x19f:
      case 0x1a0:
      case 0x1ae:
      case 0x1af:
      case 0x1b0:
      case 0x1b1:
      case 0x1b2:
      case 0x1b3:
      case 0x1b4:
      case 0x1b5:
      case 0x1bb:
      case 0x1bc:
      case 0x1bd:
      case 0x1be:
      case 0x1c4:
      case 0x1c5:
      case 0x1c6:
      case 0x1c7:
      case 0x1cb:
      case 0x1cc:
      case 0x208:
      case 0x28f:
      case 0x294:
      case 0x296:
      case 0x297:
      case 0x298:
      case 0x299:
        extract_constrain_insn_cached(insn);
        return 0;
      case 3:
      case 7:
      case 0xb:
      case 0x78:
      case 0x7b:
      case 0x7e:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0xc2:
      case 0xc6:
      case 0xcd:
      case 0xd1:
      case 0xd8:
      case 0xe5:
      case 0xea:
      case 0xee:
      case 0xf5:
      case 0xf6:
      case 0xfa:
      case 0x104:
      case 0x105:
      case 0x132:
      case 0x133:
      case 0x13e:
      case 0x13f:
      case 0x148:
      case 0x149:
      case 0x156:
      case 0x15a:
      case 0x177:
      case 0x17c:
      case 0x1fe:
      case 0x264:
      case 0x265:
      case 0x266:
      case 0x271:
      case 0x272:
      case 0x273:
      case 0x27c:
      case 0x27d:
      case 0x27e:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x2f:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x35:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x3a:
      case 0x3b:
      case 0x3d:
      case 0x55:
      case 0x58:
      case 0x5b:
      case 0x5e:
      case 0x5f:
      case 0x60:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x3c:
      case 0x3e:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x42:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x51:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x57:
      case 0x5a:
      case 0x18c:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x9f:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xa0:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xa1:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xa2:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xa9:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xaa:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xab:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xac:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0xc9:
      case 0xca:
      case 0x123:
      case 0x125:
      case 0x134:
      case 0x135:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x119:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x121:
        extract_constrain_insn_cached(insn);
        if (((which_alternative == 2) && (*(long *)(_asm_noperands + 8) == 0xff)) &&
           (iVar2 = ext_QIreg_nomode_operand(_insn_current_reference_address,0), iVar2 != 0)) {
          return 1;
        }
        return 0;
      case 0x122:
        extract_constrain_insn_cached(insn);
        if ((which_alternative == 2) &&
           (iVar2 = ext_QIreg_nomode_operand(_insn_current_reference_address,0), iVar2 != 0)) {
          return 1;
        }
        return 0;
      case 0x178:
      case 0x186:
      case 0x187:
      case 0x201:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x2c4:
      case 0x2c5:
      case 0x2c6:
        extract_constrain_insn_cached(insn);
        iVar2 = ext_QIreg_operand(_asm_noperands,0xe);
        if (iVar2 != 0) {
          return 1;
        }
        return 0;
      case 0x2ce:
      case 0x2cf:
      case 0x2d0:
      case 0x2d1:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x2d2:
      case 0x2d3:
      case 0x2d4:
      case 0x2d5:
        extract_constrain_insn_cached(insn);
        return 0;
      case 0x2d6:
      case 0x2d7:
        extract_constrain_insn_cached(insn);
        return 0;
      case -1:
        if ((**(short **)(insn + 1) != 0x10) &&
           (iVar2 = asm_noperands(*(undefined8 *)(insn + 1)), iVar2 < 0)) {
          _fatal_insn_not_found(insn,"insn-attrtab.c",0x1f85f,&DAT_001d5f4c);
        }
        extract_constrain_insn_cached(insn);
        return 0;
      }
    }
  }
  else if ((iVar2 < 0x616) && (0x5ea < iVar2)) {
    switch(iVar2) {
    case 0x5eb:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x5ee:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x5f1:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x5f4:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x5f7:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x5fa:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x5fd:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x600:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x603:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x60a:
    case 0x60b:
    case 0x60c:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x60f:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    case 0x613:
    case 0x614:
    case 0x615:
      extract_constrain_insn_cached(insn);
      bVar1 = x86_extended_reg_mentioned_p(insn);
      return (uint)bVar1;
    }
  }
  extract_constrain_insn_cached(insn);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int get_attr_prefix_0f(rtx insn)

{
  char cVar1;
  int iVar2;
  attr_unit aVar3;
  attr_type aVar4;
  
  iVar2 = recog_memoized(insn);
  if (iVar2 < 0x727) {
    if (0x70b < iVar2) {
      return 0;
    }
    if (iVar2 < 0x6de) {
      if (0x6db < iVar2) {
        return 0;
      }
      if (iVar2 < 0x5e9) {
        if (0x5e6 < iVar2) {
          return 0;
        }
        if (iVar2 < 0x5c5) {
          if (0x5c1 < iVar2) {
            return 0;
          }
          if (iVar2 < 0x520) {
            if (0x51d < iVar2) {
              return 0;
            }
            if (iVar2 == 0x50f) {
              return 0;
            }
            if (iVar2 < 0x510) {
              if (iVar2 < 0x356) {
                if (-2 < iVar2) {
                  switch(iVar2) {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 0xb:
                  case 0xc:
                  case 0xd:
                  case 0xe:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x15:
                  case 0x16:
                  case 0x17:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                  case 0x1e:
                  case 0x1f:
                  case 0x22:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                  case 0x2b:
                  case 0x2d:
                  case 0x2e:
                  case 0x30:
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
                  case 0x3f:
                  case 0x40:
                  case 0x41:
                  case 0x45:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4c:
                  case 0x4d:
                  case 0x4e:
                  case 0x4f:
                  case 0x50:
                  case 0x53:
                  case 0x54:
                  case 0x56:
                  case 0x59:
                  case 0x5d:
                  case 99:
                  case 100:
                  case 0x65:
                  case 0x68:
                  case 0x6a:
                  case 0x6b:
                  case 0x6c:
                  case 0x6d:
                  case 0x6e:
                  case 0x6f:
                  case 0x70:
                  case 0x71:
                  case 0x72:
                  case 0x73:
                  case 0x76:
                  case 0x77:
                  case 0x78:
                  case 0x79:
                  case 0x7a:
                  case 0x7b:
                  case 0x7c:
                  case 0x7d:
                  case 0x7e:
                  case 0x7f:
                  case 0x80:
                  case 0x81:
                  case 0x82:
                  case 0x83:
                  case 0x84:
                  case 0x85:
                  case 0x86:
                  case 0x87:
                  case 0x88:
                  case 0x89:
                  case 0x8a:
                  case 0x8b:
                  case 0x8c:
                  case 0x8d:
                  case 0x8e:
                  case 0x8f:
                  case 0x90:
                  case 0x91:
                  case 0x92:
                  case 0x93:
                  case 0x94:
                  case 0x95:
                  case 0x96:
                  case 0x97:
                  case 0x98:
                  case 0xad:
                  case 0xae:
                  case 0xaf:
                  case 0xb0:
                  case 0xb1:
                  case 0xb2:
                  case 0xb3:
                  case 0xb4:
                  case 0xb5:
                  case 0xb6:
                  case 0xb7:
                  case 0xb8:
                  case 0xb9:
                  case 0xba:
                  case 0xbb:
                  case 0xbc:
                  case 0xbd:
                  case 0xbe:
                  case 0xbf:
                  case 0xc0:
                  case 0xc1:
                  case 0xc2:
                  case 0xc3:
                  case 0xc4:
                  case 0xc5:
                  case 0xc6:
                  case 199:
                  case 200:
                  case 0xc9:
                  case 0xca:
                  case 0xcb:
                  case 0xcc:
                  case 0xcd:
                  case 0xce:
                  case 0xcf:
                  case 0xd0:
                  case 0xd1:
                  case 0xd2:
                  case 0xd3:
                  case 0xd4:
                  case 0xd5:
                  case 0xd6:
                  case 0xd7:
                  case 0xd8:
                  case 0xd9:
                  case 0xda:
                  case 0xdb:
                  case 0xdc:
                  case 0xdd:
                  case 0xde:
                  case 0xdf:
                  case 0xe0:
                  case 0xe1:
                  case 0xe2:
                  case 0xe3:
                  case 0xe4:
                  case 0xe5:
                  case 0xe6:
                  case 0xe7:
                  case 0xe8:
                  case 0xe9:
                  case 0xea:
                  case 0xeb:
                  case 0xec:
                  case 0xed:
                  case 0xee:
                  case 0xef:
                  case 0xf0:
                  case 0xf1:
                  case 0xf2:
                  case 0xf3:
                  case 0xf4:
                  case 0xf5:
                  case 0xf6:
                  case 0xf7:
                  case 0xf8:
                  case 0xf9:
                  case 0xfa:
                  case 0xfb:
                  case 0xfc:
                  case 0xfd:
                  case 0xfe:
                  case 0xff:
                  case 0x100:
                  case 0x101:
                  case 0x102:
                  case 0x103:
                  case 0x104:
                  case 0x105:
                  case 0x108:
                  case 0x109:
                  case 0x10a:
                  case 0x10b:
                  case 0x10c:
                  case 0x10d:
                  case 0x10e:
                  case 0x10f:
                  case 0x110:
                  case 0x111:
                  case 0x112:
                  case 0x113:
                  case 0x114:
                  case 0x115:
                  case 0x116:
                  case 0x117:
                  case 0x118:
                  case 0x119:
                  case 0x11a:
                  case 0x11b:
                  case 0x11c:
                  case 0x11d:
                  case 0x11e:
                  case 0x11f:
                  case 0x120:
                  case 0x123:
                  case 0x124:
                  case 0x125:
                  case 0x126:
                  case 0x127:
                  case 0x128:
                  case 0x129:
                  case 0x12a:
                  case 299:
                  case 300:
                  case 0x12d:
                  case 0x12e:
                  case 0x12f:
                  case 0x130:
                  case 0x131:
                  case 0x132:
                  case 0x133:
                  case 0x134:
                  case 0x135:
                  case 0x136:
                  case 0x137:
                  case 0x138:
                  case 0x139:
                  case 0x13a:
                  case 0x13b:
                  case 0x13c:
                  case 0x13d:
                  case 0x13e:
                  case 0x13f:
                  case 0x140:
                  case 0x141:
                  case 0x142:
                  case 0x143:
                  case 0x144:
                  case 0x145:
                  case 0x146:
                  case 0x147:
                  case 0x148:
                  case 0x149:
                  case 0x14a:
                  case 0x14b:
                  case 0x14c:
                  case 0x14d:
                  case 0x14e:
                  case 0x14f:
                  case 0x150:
                  case 0x151:
                  case 0x152:
                  case 0x153:
                  case 0x154:
                  case 0x155:
                  case 0x156:
                  case 0x157:
                  case 0x158:
                  case 0x159:
                  case 0x15a:
                  case 0x15b:
                  case 0x15c:
                  case 0x15d:
                  case 0x15e:
                  case 0x15f:
                  case 0x160:
                  case 0x161:
                  case 0x162:
                  case 0x163:
                  case 0x164:
                  case 0x165:
                  case 0x166:
                  case 0x167:
                  case 0x168:
                  case 0x169:
                  case 0x16a:
                  case 0x16b:
                  case 0x16c:
                  case 0x16d:
                  case 0x16e:
                  case 0x16f:
                  case 0x170:
                  case 0x171:
                  case 0x172:
                  case 0x173:
                  case 0x174:
                  case 0x175:
                  case 0x176:
                  case 0x177:
                  case 0x178:
                  case 0x179:
                  case 0x17a:
                  case 0x17b:
                  case 0x17c:
                  case 0x17d:
                  case 0x17f:
                  case 0x180:
                  case 0x181:
                  case 0x182:
                  case 0x183:
                  case 0x184:
                  case 0x185:
                  case 0x186:
                  case 0x187:
                  case 0x188:
                  case 0x189:
                  case 0x18a:
                  case 0x18d:
                  case 0x18e:
                  case 399:
                  case 400:
                  case 0x191:
                  case 0x192:
                  case 0x193:
                  case 0x194:
                  case 0x195:
                  case 0x196:
                  case 0x197:
                  case 0x198:
                  case 0x199:
                  case 0x19a:
                  case 0x19b:
                  case 0x19c:
                  case 0x19d:
                  case 0x19e:
                  case 0x19f:
                  case 0x1a0:
                  case 0x1a1:
                  case 0x1a2:
                  case 0x1a3:
                  case 0x1a4:
                  case 0x1a5:
                  case 0x1a6:
                  case 0x1a7:
                  case 0x1a8:
                  case 0x1a9:
                  case 0x1aa:
                  case 0x1ab:
                  case 0x1ac:
                  case 0x1ad:
                  case 0x1ae:
                  case 0x1af:
                  case 0x1b0:
                  case 0x1b1:
                  case 0x1b2:
                  case 0x1b3:
                  case 0x1b4:
                  case 0x1b5:
                  case 0x1b6:
                  case 0x1b7:
                  case 0x1b8:
                  case 0x1b9:
                  case 0x1ba:
                  case 0x1bb:
                  case 0x1bc:
                  case 0x1bd:
                  case 0x1be:
                  case 0x1bf:
                  case 0x1c0:
                  case 0x1c1:
                  case 0x1c2:
                  case 0x1c3:
                  case 0x1c4:
                  case 0x1c5:
                  case 0x1c6:
                  case 0x1c7:
                  case 0x1c9:
                  case 0x1ca:
                  case 0x1d1:
                  case 0x1d2:
                  case 0x1d3:
                  case 0x1d4:
                  case 0x1d5:
                  case 0x1d6:
                  case 0x1d7:
                  case 0x1d8:
                  case 0x1d9:
                  case 0x1da:
                  case 0x1db:
                  case 0x1dc:
                  case 0x1dd:
                  case 0x1de:
                  case 0x1df:
                  case 0x1e0:
                  case 0x1e1:
                  case 0x1e2:
                  case 0x1e3:
                  case 0x1e4:
                  case 0x1e5:
                  case 0x1e6:
                  case 0x1e7:
                  case 0x1e8:
                  case 0x1e9:
                  case 0x1ea:
                  case 0x1eb:
                  case 0x1ec:
                  case 0x1ed:
                  case 0x1ee:
                  case 0x1ef:
                  case 0x1f0:
                  case 0x1f1:
                  case 0x1f2:
                  case 499:
                  case 500:
                  case 0x1f5:
                  case 0x201:
                  case 0x202:
                  case 0x205:
                  case 0x206:
                  case 0x207:
                  case 0x208:
                  case 0x209:
                  case 0x20a:
                  case 0x20b:
                  case 0x20c:
                  case 0x20d:
                  case 0x20e:
                  case 0x20f:
                  case 0x210:
                  case 0x219:
                  case 0x21a:
                  case 0x224:
                  case 0x225:
                  case 0x226:
                  case 0x227:
                  case 0x228:
                  case 0x229:
                  case 0x22a:
                  case 0x22b:
                  case 0x22c:
                  case 0x22d:
                  case 0x22e:
                  case 0x22f:
                  case 0x230:
                  case 0x231:
                  case 0x232:
                  case 0x233:
                  case 0x234:
                  case 0x235:
                  case 0x236:
                  case 0x237:
                  case 0x238:
                  case 0x239:
                  case 0x23a:
                  case 0x23b:
                  case 0x23c:
                  case 0x23d:
                  case 0x23e:
                  case 0x23f:
                  case 0x240:
                  case 0x241:
                  case 0x245:
                  case 0x246:
                  case 0x247:
                  case 0x248:
                  case 0x249:
                  case 0x24a:
                  case 0x24b:
                  case 0x24c:
                  case 0x24d:
                  case 0x24e:
                  case 0x24f:
                  case 0x250:
                  case 0x251:
                  case 0x252:
                  case 0x253:
                  case 0x254:
                  case 0x255:
                  case 0x256:
                  case 599:
                  case 600:
                  case 0x259:
                  case 0x25a:
                  case 0x25b:
                  case 0x25c:
                  case 0x25d:
                  case 0x25e:
                  case 0x25f:
                  case 0x260:
                  case 0x263:
                  case 0x264:
                  case 0x265:
                  case 0x266:
                  case 0x267:
                  case 0x268:
                  case 0x269:
                  case 0x26a:
                  case 0x26b:
                  case 0x26c:
                  case 0x26d:
                  case 0x26e:
                  case 0x26f:
                  case 0x270:
                  case 0x271:
                  case 0x272:
                  case 0x273:
                  case 0x274:
                  case 0x275:
                  case 0x276:
                  case 0x277:
                  case 0x278:
                  case 0x279:
                  case 0x27a:
                  case 0x27b:
                  case 0x27c:
                  case 0x27d:
                  case 0x27e:
                  case 0x27f:
                  case 0x280:
                  case 0x281:
                  case 0x282:
                  case 0x283:
                  case 0x284:
                  case 0x285:
                  case 0x286:
                  case 0x287:
                  case 0x288:
                  case 0x289:
                  case 0x28a:
                  case 0x28b:
                  case 0x28c:
                  case 0x28d:
                  case 0x28e:
                  case 0x28f:
                  case 0x290:
                  case 0x291:
                  case 0x292:
                  case 0x293:
                  case 0x294:
                  case 0x295:
                  case 0x296:
                  case 0x297:
                  case 0x298:
                  case 0x299:
                  case 0x29a:
                  case 0x29b:
                  case 0x29c:
                  case 0x2a1:
                  case 0x2a2:
                  case 0x2b5:
                  case 0x2b6:
                  case 0x2b7:
                  case 0x2b8:
                  case 0x2b9:
                  case 0x2ba:
                  case 699:
                  case 700:
                  case 0x2bd:
                  case 0x2c0:
                  case 0x2c1:
                  case 0x2c2:
                  case 0x2c3:
                  case 0x2c7:
                  case 0x2c8:
                  case 0x2c9:
                  case 0x2ca:
                  case 0x2cb:
                  case 0x2cc:
                  case 0x2cd:
                  case 0x2f2:
                  case 0x338:
                  case 0x355:
LAB_001d18ac:
                    return 0;
                  case 0x20:
                  case 0x23:
                  case 0x66:
                  case 0x9b:
                  case 0x9c:
                  case 0x9f:
                  case 0xa0:
                  case 0xa1:
                  case 0xa2:
                    extract_constrain_insn_cached(insn);
                    if (which_alternative != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x2c:
                    extract_constrain_insn_cached(insn);
                    if ((0xffc >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x2f:
                    extract_constrain_insn_cached(insn);
                    cVar1 = optimize_function_for_size_p(cfun);
                    if ((((cVar1 == '\0') &&
                         ((which_alternative != 0 ||
                          ((DAT_001f8071 != '\0' && (DAT_001f807f != '\0')))))) &&
                        (((6 >> ((byte)which_alternative & 0x1f) & 1U) == 0 ||
                         (iVar2 = aligned_operand(_insn_current_reference_address,0xf), iVar2 == 0))
                        )) && ((const0_operand != '\0' &&
                               ((5 >> ((byte)which_alternative & 0x1f) & 1U) != 0)))) {
                      return 1;
                    }
                    return 0;
                  case 0x35:
                  case 0x3c:
                  case 0x3e:
                    aVar4 = get_attr_type(insn);
                    if (aVar4 == TYPE_IMOVX) {
                      return 1;
                    }
                    return 0;
                  case 0x42:
                  case 0x61:
                  case 0x99:
                  case 0x9a:
                  case 0x9d:
                  case 0x9e:
                  case 0x121:
                  case 0x122:
                  case 0x2a0:
                    extract_constrain_insn_cached(insn);
                    if ((3 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                      return 1;
                    }
                    return 0;
                  case 0x46:
                  case 0x4a:
                  case 0x4b:
                    extract_constrain_insn_cached(insn);
                    if ((0x1f >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                      return 1;
                    }
                    return 0;
                  case 0x51:
switchD_001d132c_caseD_4df:
                    extract_constrain_insn_cached(insn);
                    if ((7 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x52:
                  case 0x57:
                  case 0x5a:
                    extract_constrain_insn_cached(insn);
                    if (which_alternative == 0) {
                      return 1;
                    }
                    return 0;
                  case 0x5c:
                    extract_constrain_insn_cached(insn);
                    if ((7 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                      return 1;
                    }
                    return 0;
                  case 0x5e:
                  case 0x5f:
                    extract_constrain_insn_cached(insn);
                    if ((ix86_schedule != 4) && (which_alternative == 0)) {
                      return 0;
                    }
                    return 1;
                  case 0x69:
                  case 0x211:
                  case 0x212:
                  case 0x213:
                  case 0x214:
                    extract_constrain_insn_cached(insn);
                    if (which_alternative == 1) {
                      return 1;
                    }
                    return 0;
                  case 0x106:
                  case 0x107:
                    extract_constrain_insn_cached(insn);
                    if ((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 0;
                    }
                    return 1;
                  case 0x18c:
                    extract_constrain_insn_cached(insn);
                    if (which_alternative == 0) {
                      return 0;
                    }
                    return 0;
                  case 0x21b:
                  case 0x21c:
                  case 0x21d:
                  case 0x21e:
                  case 0x220:
                  case 0x221:
                  case 0x222:
                  case 0x223:
                    aVar3 = get_attr_unit(insn);
                    if (aVar3 == UNIT_SSE) {
                      return 1;
                    }
                    return 0;
                  case 0x2ce:
                  case 0x2cf:
                  case 0x2d0:
                  case 0x2d1:
                    extract_constrain_insn_cached(insn);
                    if ((0xff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x2d2:
                  case 0x2d3:
                  case 0x2d4:
                  case 0x2d5:
                    extract_constrain_insn_cached(insn);
                    if ((0xfff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x2d6:
                  case 0x2d7:
                    extract_constrain_insn_cached(insn);
                    if ((0x1ff >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x2f3:
switchD_001d132c_caseD_4e3:
                    extract_constrain_insn_cached(insn);
                    if ((0xf >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x339:
switchD_001d132c_caseD_4e5:
                    extract_constrain_insn_cached(insn);
                    if ((0x3f >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case -1:
                    if ((**(short **)(insn + 1) != 0x10) &&
                       (iVar2 = asm_noperands(*(undefined8 *)(insn + 1)), iVar2 < 0)) {
                      _fatal_insn_not_found(insn,"insn-attrtab.c",0x1fc6d,&DAT_001d5f4c);
                    }
                    aVar4 = get_attr_type(insn);
                    if ((((aVar4 != TYPE_IMOVX) &&
                         (aVar4 = get_attr_type(insn), aVar4 != TYPE_SETCC)) &&
                        (aVar4 = get_attr_type(insn), aVar4 != TYPE_ICMOV)) &&
                       (((aVar4 = get_attr_type(insn), aVar4 != TYPE_BITMANIP &&
                         (aVar3 = get_attr_unit(insn), aVar3 != UNIT_SSE)) &&
                        (aVar3 = get_attr_unit(insn), aVar3 != UNIT_MMX)))) {
                      return 0;
                    }
                    return 1;
                  }
                }
              }
              else if ((iVar2 < 0x4e6) && (0x4b2 < iVar2)) {
                switch(iVar2) {
                case 0x4b3:
                case 0x4b4:
                case 0x4b5:
                case 0x4b6:
                case 0x4e4:
                  extract_constrain_insn_cached(insn);
                  if ((0x1f >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                    return 1;
                  }
                  return 0;
                case 0x4bf:
                case 0x4cd:
                  goto LAB_001d18ac;
                case 0x4df:
                case 0x4e0:
                case 0x4e1:
                case 0x4e2:
                  goto switchD_001d132c_caseD_4df;
                case 0x4e3:
                  goto switchD_001d132c_caseD_4e3;
                case 0x4e5:
                  goto switchD_001d132c_caseD_4e5;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



int get_attr_prefix_rep(rtx insn)

{
  char cVar1;
  int iVar2;
  attr_unit aVar3;
  attr_type aVar4;
  attr_mode aVar5;
  
  iVar2 = recog_memoized(insn);
  if (iVar2 == 0x6db) {
switchD_001d1a50_caseD_a3:
    extract_constrain_insn_cached(insn);
    if ((3 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
      return 1;
    }
    return 0;
  }
  if ((iVar2 < 0x6dc) && (iVar2 < 0x61e)) {
    if (0x61b < iVar2) {
      return 1;
    }
    if (iVar2 < 0x61a) {
      if (0x615 < iVar2) {
        return 1;
      }
      if (iVar2 < 0x5cc) {
        if (0x5c9 < iVar2) {
switchD_001d1a50_caseD_66:
          extract_constrain_insn_cached(insn);
          if (which_alternative != 0) {
            return 1;
          }
          return 0;
        }
        if (iVar2 == 0x5c1) {
          extract_constrain_insn_cached(insn);
          if ((7 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
            return 1;
          }
          return 0;
        }
        if ((iVar2 < 0x5c2) && (iVar2 < 0x5c0)) {
          if (0x5bd < iVar2) {
            return 1;
          }
          if (iVar2 < 0x4ef) {
            if (iVar2 < 0x36c) {
              if (iVar2 < 0x2f4) {
                if (iVar2 < 0x290) {
                  if (iVar2 < 0xad) {
                    if (-2 < iVar2) {
                      switch(iVar2) {
                      case 0x20:
                      case 0x23:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative != 0) {
                          return 0;
                        }
                        return 0;
                      case 0x2c:
                        extract_constrain_insn_cached(insn);
                        if (((0xf00 >> ((byte)which_alternative & 0x1f) & 1U) != 0) &&
                           ((ix86_isa_flags & 0x20000) == 0)) {
                          return 1;
                        }
                        return 0;
                      case 0x46:
                        extract_constrain_insn_cached(insn);
                        if (((0x31e0 >> ((byte)which_alternative & 0x1f) & 1U) != 0) &&
                           ((((which_alternative == 6 && (general_operand == '\0')) &&
                             (DAT_001f808a == '\0')) ||
                            ((0xe78 >> ((byte)which_alternative & 0x1f) & 1U) == 0)))) {
                          return 1;
                        }
                        return 0;
                      case 0x4a:
                        extract_constrain_insn_cached(insn);
                        if (((((int)ix86_isa_flags >> 0x11 & 1U) == 0) ||
                            ((((which_alternative != 6 ||
                               (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')) ||
                              (general_operand != '\0')) &&
                             ((which_alternative != 7 || (DAT_001f808a != '\0')))))) &&
                           ((which_alternative != 8 || (((int)ix86_isa_flags >> 0x11 & 1U) == 0))))
                        {
                          return 0;
                        }
                        return 1;
                      case 0x4b:
                        extract_constrain_insn_cached(insn);
                        if (((((int)ix86_isa_flags >> 0x11 & 1U) == 0) ||
                            ((((which_alternative != 6 ||
                               (cVar1 = optimize_function_for_size_p(cfun), cVar1 != '\0')) ||
                              (general_operand != '\0')) &&
                             ((which_alternative != 7 || (DAT_001f808a != '\0')))))) &&
                           ((which_alternative != 8 || (((int)ix86_isa_flags >> 0x11 & 1U) == 0))))
                        {
                          return 0;
                        }
                        return 1;
                      case 0x61:
                      case 0x9d:
                      case 0x9e:
                        extract_constrain_insn_cached(insn);
                        if ((3 >> ((byte)which_alternative & 0x1f) & 1U) == 0) {
                          return 1;
                        }
                        return 0;
                      case 0x62:
                      case 0x67:
                      case 0x74:
                      case 0x75:
                      case 0xa5:
                      case 0xa6:
                      case 0xa7:
                      case 0xa8:
                      case 0xa9:
                      case 0xaa:
                      case 0xab:
                      case 0xac:
                        goto LAB_001d2172;
                      case 0x66:
                      case 0x9f:
                      case 0xa0:
                      case 0xa1:
                      case 0xa2:
                        goto switchD_001d1a50_caseD_66;
                      case 0x69:
switchD_001d19bb_caseD_4b0:
                        extract_constrain_insn_cached(insn);
                        if (which_alternative == 1) {
                          return 1;
                        }
                        return 0;
                      case 0x99:
                      case 0x9a:
                        extract_constrain_insn_cached(insn);
                        if ((0xc >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                          return 1;
                        }
                        return 0;
                      case 0xa3:
                      case 0xa4:
                        goto switchD_001d1a50_caseD_a3;
                      case -1:
                        if ((**(short **)(insn + 1) != 0x10) &&
                           (iVar2 = asm_noperands(*(undefined8 *)(insn + 1)), iVar2 < 0)) {
                          _fatal_insn_not_found(insn,"insn-attrtab.c",0x1fe68,&DAT_001d5f4c);
                        }
                        aVar4 = get_attr_type(insn);
                        if ((((aVar4 != TYPE_SSEMULADD) &&
                             (aVar4 = get_attr_type(insn), aVar4 != TYPE_SSE4ARG)) &&
                            (aVar4 = get_attr_type(insn), aVar4 != TYPE_SSEIADD1)) &&
                           (aVar4 = get_attr_type(insn), aVar4 != TYPE_SSECVT1)) {
                          aVar3 = get_attr_unit(insn);
                          if ((aVar3 == UNIT_SSE) &&
                             ((aVar5 = get_attr_mode(insn), aVar5 == MODE_SF ||
                              (aVar5 = get_attr_mode(insn), aVar5 == MODE_DF)))) {
                            return 1;
                          }
                          return 0;
                        }
                        return 0;
                      }
                    }
                  }
                  else if ((iVar2 < 0x263) && (0x1cc < iVar2)) {
                    switch(iVar2) {
                    case 0x1cd:
                    case 0x1ce:
                    case 0x1cf:
                    case 0x1d0:
                    case 0x1eb:
                    case 0x1f8:
                    case 0x1fa:
                    case 0x1fb:
                    case 0x1fc:
                    case 0x1fd:
                    case 0x1fe:
                    case 0x203:
                    case 0x215:
                    case 0x216:
                    case 0x217:
                    case 0x218:
                    case 0x21f:
                    case 0x242:
                    case 0x243:
                    case 0x244:
                    case 0x261:
                    case 0x262:
                      goto LAB_001d2172;
                    case 0x211:
                    case 0x212:
                    case 0x213:
                    case 0x214:
                      goto switchD_001d19bb_caseD_4b0;
                    case 0x21b:
                    case 0x21c:
                    case 0x21d:
                    case 0x21e:
                    case 0x220:
                    case 0x221:
                    case 0x222:
                    case 0x223:
                      aVar3 = get_attr_unit(insn);
                      if (aVar3 == UNIT_SSE) {
                        return 1;
                      }
                      return 0;
                    }
                  }
                }
                else {
                  switch(iVar2) {
                  case 0x290:
                  case 0x291:
                  case 0x295:
                  case 0x296:
                  case 0x297:
                  case 0x298:
                  case 0x299:
                  case 0x2a5:
                  case 0x2a6:
                  case 0x2a7:
                  case 0x2a8:
                  case 0x2a9:
                  case 0x2aa:
                  case 0x2ab:
                  case 0x2ac:
                  case 0x2ad:
                  case 0x2ae:
                  case 0x2af:
                  case 0x2b0:
                  case 0x2b1:
                  case 0x2b2:
                  case 0x2b3:
                  case 0x2b4:
                  case 0x2c4:
                  case 0x2c5:
                  case 0x2c6:
                    goto LAB_001d2172;
                  case 0x2ce:
                  case 0x2cf:
                  case 0x2d0:
                  case 0x2d1:
                  case 0x2d6:
                  case 0x2d7:
                    extract_constrain_insn_cached(insn);
                    if ((7 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 0;
                    }
                    if ((0x18 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    return 0;
                  case 0x2d2:
                  case 0x2d3:
                  case 0x2d4:
                  case 0x2d5:
                    extract_constrain_insn_cached(insn);
                    if ((7 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 0;
                    }
                    if ((0x18 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                      return 1;
                    }
                    if (which_alternative == 5) {
                      return 0;
                    }
                    if (which_alternative == 6) {
                      return 1;
                    }
                    return 0;
                  case 0x2f3:
                    goto switchD_001d19bb_caseD_4e3;
                  }
                }
              }
            }
            else {
              switch(iVar2) {
              case 0x36c:
              case 0x379:
              case 0x37a:
              case 0x37b:
              case 0x37c:
              case 0x37d:
              case 0x37e:
              case 0x37f:
              case 0x380:
              case 0x387:
              case 0x388:
              case 0x389:
              case 0x38a:
              case 0x393:
              case 0x394:
              case 0x395:
              case 0x396:
              case 0x399:
              case 0x39a:
              case 0x39f:
              case 0x3a0:
              case 0x3a1:
              case 0x3a2:
              case 0x3a5:
              case 0x3a6:
              case 0x3bf:
              case 0x3c0:
              case 0x3c1:
              case 0x3c2:
              case 0x3c3:
              case 0x3c4:
              case 0x3c5:
              case 0x3c6:
              case 0x3d6:
              case 0x3df:
              case 0x3e0:
              case 0x3e9:
              case 0x3ea:
              case 0x3ef:
              case 0x3f0:
              case 0x3f3:
              case 0x3f4:
              case 0x46c:
              case 0x46d:
              case 0x46e:
              case 0x46f:
              case 0x470:
              case 0x479:
              case 0x47d:
              case 0x47e:
              case 0x47f:
              case 0x480:
              case 0x481:
              case 0x485:
              case 0x488:
              case 0x489:
              case 0x48a:
              case 0x48b:
              case 0x49b:
              case 0x49d:
              case 0x4aa:
              case 0x4ab:
              case 0x4b9:
              case 0x4ba:
              case 0x4ea:
              case 0x4ec:
LAB_001d2172:
                return 1;
              case 0x4ae:
              case 0x4af:
              case 0x4b8:
              case 0x4df:
              case 0x4e0:
              case 0x4e2:
              case 0x4ee:
                extract_constrain_insn_cached(insn);
                if (which_alternative == 2) {
                  return 1;
                }
                return 0;
              case 0x4b0:
                goto switchD_001d19bb_caseD_4b0;
              case 0x4b3:
              case 0x4b5:
                extract_constrain_insn_cached(insn);
                if ((0xb >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                  return 1;
                }
                return 0;
              case 0x4b4:
              case 0x4b6:
                extract_constrain_insn_cached(insn);
                if ((9 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                  return 1;
                }
                return 0;
              case 0x4b7:
                extract_constrain_insn_cached(insn);
                if ((5 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                  return 1;
                }
                return 0;
              case 0x4e1:
                extract_constrain_insn_cached(insn);
                if ((6 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                  return 1;
                }
                return 0;
              case 0x4e3:
switchD_001d19bb_caseD_4e3:
                extract_constrain_insn_cached(insn);
                if (which_alternative == 3) {
                  return 1;
                }
                return 0;
              case 0x4e4:
                extract_constrain_insn_cached(insn);
                if ((0x11 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                  return 1;
                }
                return 0;
              case 0x4e5:
                extract_constrain_insn_cached(insn);
                if ((0x21 >> ((byte)which_alternative & 0x1f) & 1U) != 0) {
                  return 1;
                }
                return 0;
              case 0x4e8:
              case 0x4e9:
                extract_constrain_insn_cached(insn);
                if (which_alternative == 0) {
                  return 1;
                }
                return 0;
              case 0x4ed:
                extract_constrain_insn_cached(insn);
                if (which_alternative != 1) {
                  return 1;
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



int get_attr_prefix_data16(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x6ff) {
                    // WARNING: Could not recover jumptable at 0x001d21be. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = (*(code *)(&DAT_001f18b4 + *(int *)(&DAT_001f18b4 + (ulong)(iVar1 + 1U) * 4)))();
    return iVar1;
  }
  return 0;
}



attr_type get_attr_type(rtx insn)

{
  int iVar1;
  attr_type aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x001d2ef2. Too many branches
                    // WARNING: Treating indirect jump as call
    aVar2 = (*(code *)(&DAT_001f34b0 + *(int *)(&DAT_001f34b0 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return TYPE_SSELOG;
}



attr_use_carry get_attr_use_carry(rtx insn)

{
  int iVar1;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 < 0x29d) {
    if (0x299 < iVar1) {
      return USE_CARRY_1;
    }
    if (iVar1 == -1) {
      if ((**(short **)(insn + 1) != 0x10) &&
         (iVar1 = asm_noperands(*(undefined8 *)(insn + 1)), iVar1 < 0)) {
        _fatal_insn_not_found(insn,"insn-attrtab.c",0x20eee,&DAT_001d5f4c);
      }
    }
    else if ((-2 < iVar1) && (iVar1 - 0xefU < 8)) {
      return USE_CARRY_1;
    }
  }
  return USE_CARRY_0;
}



attr_unit get_attr_unit(rtx insn)

{
  int iVar1;
  attr_unit aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    // WARNING: Could not recover jumptable at 0x001d4fed. Too many branches
                    // WARNING: Treating indirect jump as call
    aVar2 = (*(code *)(&DAT_001f5150 + *(int *)(&DAT_001f5150 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return UNIT_SSE;
}


