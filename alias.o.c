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
typedef ulong size_t;

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

typedef long __off_t;

typedef long __off64_t;

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

typedef int alias_set_type;

typedef struct alias_set_entry_d alias_set_entry_d, *Palias_set_entry_d;

typedef struct alias_set_entry_d * alias_set_entry;

typedef struct splay_tree_s splay_tree_s, *Psplay_tree_s;

typedef struct splay_tree_s * splay_tree;

typedef struct splay_tree_node_s splay_tree_node_s, *Psplay_tree_node_s;

typedef struct splay_tree_node_s * splay_tree_node;

typedef ulong libi_uhostptr_t;

typedef libi_uhostptr_t splay_tree_key;

typedef int (* splay_tree_compare_fn)(splay_tree_key, splay_tree_key);

typedef void (* splay_tree_delete_key_fn)(splay_tree_key);

typedef libi_uhostptr_t splay_tree_value;

typedef void (* splay_tree_delete_value_fn)(splay_tree_value);

typedef void * (* splay_tree_allocate_fn)(int, void *);

typedef void (* splay_tree_deallocate_fn)(void *, void *);

struct splay_tree_s {
    splay_tree_node root;
    splay_tree_compare_fn comp;
    splay_tree_delete_key_fn delete_key;
    splay_tree_delete_value_fn delete_value;
    splay_tree_allocate_fn allocate;
    splay_tree_deallocate_fn deallocate;
    void * allocate_data;
};

struct alias_set_entry_d {
    alias_set_type alias_set;
    int has_zero_child;
    splay_tree children;
};

struct splay_tree_node_s {
    splay_tree_key key;
    splay_tree_value value;
    splay_tree_node left;
    splay_tree_node right;
};

typedef struct VEC_alias_set_entry_base VEC_alias_set_entry_base, *PVEC_alias_set_entry_base;

struct VEC_alias_set_entry_base {
    uint num;
    uint alloc;
    alias_set_entry vec[1];
};

typedef struct VEC_alias_set_entry_gc VEC_alias_set_entry_gc, *PVEC_alias_set_entry_gc;

struct VEC_alias_set_entry_gc {
    struct VEC_alias_set_entry_base base;
};

typedef struct pt_solution pt_solution, *Ppt_solution;

typedef struct bitmap_head_def bitmap_head_def, *Pbitmap_head_def;

typedef struct bitmap_head_def * bitmap;

typedef struct bitmap_element_def bitmap_element_def, *Pbitmap_element_def;

typedef struct bitmap_element_def bitmap_element;

typedef struct bitmap_obstack bitmap_obstack, *Pbitmap_obstack;

typedef ulong BITMAP_WORD;

typedef struct obstack obstack, *Pobstack;

typedef struct _obstack_chunk _obstack_chunk, *P_obstack_chunk;

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

struct bitmap_obstack {
    struct bitmap_element_def * elements;
    struct bitmap_head_def * heads;
    struct obstack obstack;
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

typedef struct ao_ref_s ao_ref_s, *Pao_ref_s;

typedef struct ao_ref_s ao_ref;

typedef union tree_node tree_node, *Ptree_node;

typedef union tree_node * tree;

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

typedef struct double_int double_int, *Pdouble_int;

typedef struct real_value real_value, *Preal_value;

typedef struct fixed_value fixed_value, *Pfixed_value;

typedef struct ht_identifier ht_identifier, *Pht_identifier;

typedef uint source_location;

typedef source_location location_t;

typedef struct lang_decl lang_decl, *Plang_decl;

typedef struct rtx_def rtx_def, *Prtx_def;

typedef struct rtx_def * rtx;

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

typedef union u u, *Pu;

typedef struct eh_status eh_status, *Peh_status;

typedef struct control_flow_graph control_flow_graph, *Pcontrol_flow_graph;

typedef struct gimple_df gimple_df, *Pgimple_df;

typedef struct loops loops, *Ploops;

typedef struct htab htab, *Phtab;

typedef struct htab * htab_t;

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

typedef union rtunion_def rtunion_def, *Prtunion_def;

typedef union rtunion_def rtunion;

typedef struct block_symbol block_symbol, *Pblock_symbol;

typedef struct basic_block_def basic_block_def, *Pbasic_block_def;

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

typedef struct gimple_statement_with_ops_base gimple_statement_with_ops_base, *Pgimple_statement_with_ops_base;

typedef struct phi_arg_d phi_arg_d, *Pphi_arg_d;

typedef struct gimple_omp_for_iter gimple_omp_for_iter, *Pgimple_omp_for_iter;

typedef struct constructor_elt_d constructor_elt_d, *Pconstructor_elt_d;

typedef struct constructor_elt_d constructor_elt;

typedef struct rtvec_def rtvec_def, *Prtvec_def;

typedef struct rtvec_def * rtvec;

typedef struct addr_diff_vec_flags addr_diff_vec_flags, *Paddr_diff_vec_flags;

typedef struct cselib_val_struct cselib_val_struct, *Pcselib_val_struct;

typedef struct mem_attrs mem_attrs, *Pmem_attrs;

typedef struct reg_attrs reg_attrs, *Preg_attrs;

typedef struct constant_descriptor_rtx constant_descriptor_rtx, *Pconstant_descriptor_rtx;

typedef struct object_block object_block, *Pobject_block;

typedef struct VEC_edge_gc VEC_edge_gc, *PVEC_edge_gc;

typedef struct loop loop, *Ploop;

typedef struct et_node et_node, *Pet_node;

typedef union basic_block_il_dependent basic_block_il_dependent, *Pbasic_block_il_dependent;

typedef long gcov_type;

typedef struct VEC_basic_block_base VEC_basic_block_base, *PVEC_basic_block_base;

typedef struct VEC_gimple_base VEC_gimple_base, *PVEC_gimple_base;

typedef struct ssa_operand_memory_d ssa_operand_memory_d, *Pssa_operand_memory_d;

typedef struct def_optype_d def_optype_d, *Pdef_optype_d;

typedef struct use_optype_d use_optype_d, *Puse_optype_d;

typedef struct elt_loc_list elt_loc_list, *Pelt_loc_list;

typedef struct elt_list elt_list, *Pelt_list;

typedef union section section, *Psection;

typedef struct VEC_rtx_gc VEC_rtx_gc, *PVEC_rtx_gc;

typedef struct VEC_edge_base VEC_edge_base, *PVEC_edge_base;

typedef struct gimple_bb_info gimple_bb_info, *Pgimple_bb_info;

typedef struct rtl_bb_info rtl_bb_info, *Prtl_bb_info;

typedef struct cselib_val_struct cselib_val;

typedef struct section_common section_common, *Psection_common;

typedef struct named_section named_section, *Pnamed_section;

typedef struct unnamed_section unnamed_section, *Punnamed_section;

typedef struct noswitch_section noswitch_section, *Pnoswitch_section;

typedef struct VEC_rtx_base VEC_rtx_base, *PVEC_rtx_base;

typedef struct edge_def edge_def, *Pedge_def;

typedef struct edge_def * edge;

typedef void (* unnamed_section_callback)(void *);

typedef uchar (* noswitch_section_callback)(tree, char *, ulong, ulong);

typedef union edge_def_insns edge_def_insns, *Pedge_def_insns;

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
    struct pt_solution pt;
};

struct gimple_seq_node_d {
    gimple stmt;
    struct gimple_seq_node_d * prev;
    struct gimple_seq_node_d * next;
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

struct VEC_basic_block_base {
    uint num;
    uint alloc;
    basic_block vec[1];
};

struct gimple_bb_info {
    gimple_seq seq;
    gimple_seq phi_nodes;
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

struct elt_list {
    struct elt_list * next;
    cselib_val * elt;
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
    gimple_seq_node first;
    gimple_seq_node last;
    gimple_seq next_free;
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

struct def_optype_d {
    struct def_optype_d * next;
    tree * def_ptr;
};

struct ao_ref_s {
    tree ref;
    tree base;
    long offset;
    long size;
    long max_size;
    alias_set_type ref_alias_set;
    alias_set_type base_alias_set;
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
    uint hash;
    int uid;
    rtx val_rtx;
    struct elt_loc_list * locs;
    struct elt_list * addr_list;
    struct cselib_val_struct * next_containing_mem;
};

struct elt_loc_list {
    struct elt_loc_list * next;
    rtx loc;
    rtx setting_insn;
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

typedef struct cfg_hooks cfg_hooks, *Pcfg_hooks;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct edge_def * const_edge;

typedef struct basic_block_def * const_basic_block;

typedef struct simple_bitmap_def simple_bitmap_def, *Psimple_bitmap_def;

typedef struct simple_bitmap_def * sbitmap;

typedef struct VEC_edge_heap VEC_edge_heap, *PVEC_edge_heap;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef void _IO_lock_t;

typedef struct _IO_codecvt _IO_codecvt, *P_IO_codecvt;

typedef struct _IO_wide_data _IO_wide_data, *P_IO_wide_data;

struct simple_bitmap_def {
    uchar * popcount;
    uint n_bits;
    uint size;
    ulong elms[1];
};

struct _IO_wide_data {
};

struct _IO_codecvt {
};

struct VEC_edge_heap {
    struct VEC_edge_base base;
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

typedef enum graph_dump_types {
    no_graph=0,
    vcg=1
} graph_dump_types;

typedef enum excess_precision {
    EXCESS_PRECISION_DEFAULT=0,
    EXCESS_PRECISION_FAST=1,
    EXCESS_PRECISION_STANDARD=2
} excess_precision;

typedef enum ira_region {
    IRA_REGION_ONE=0,
    IRA_REGION_ALL=1,
    IRA_REGION_MIXED=2
} ira_region;

typedef enum ira_algorithm {
    IRA_ALGORITHM_CB=0,
    IRA_ALGORITHM_PRIORITY=1
} ira_algorithm;

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

typedef struct ht ht, *Pht;

typedef struct ht_identifier * hashnode;

typedef struct ht hash_table;

typedef struct cpp_reader cpp_reader, *Pcpp_reader;

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

struct cpp_reader {
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

typedef struct lang_hooks_for_decls lang_hooks_for_decls, *Plang_hooks_for_decls;

typedef union tree_node * const_tree;

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

typedef struct lang_hooks_for_tree_inlining lang_hooks_for_tree_inlining, *Plang_hooks_for_tree_inlining;

struct lang_hooks_for_tree_inlining {
    uchar (* var_mod_type_p)(tree, tree);
};

typedef struct lang_hooks lang_hooks, *Plang_hooks;

typedef struct diagnostic_context diagnostic_context, *Pdiagnostic_context;

typedef struct diagnostic_info diagnostic_info, *Pdiagnostic_info;

typedef void (* lang_print_tree_hook)(FILE *, tree, int);

typedef struct attribute_spec attribute_spec, *Pattribute_spec;

typedef struct lang_hooks_for_callgraph lang_hooks_for_callgraph, *Plang_hooks_for_callgraph;

typedef struct lang_hooks_for_tree_dump lang_hooks_for_tree_dump, *Plang_hooks_for_tree_dump;

typedef struct lang_hooks_for_types lang_hooks_for_types, *Plang_hooks_for_types;

typedef enum classify_record {
    RECORD_IS_STRUCT=0,
    RECORD_IS_CLASS=1,
    RECORD_IS_INTERFACE=2
} classify_record;

typedef struct gimplify_omp_ctx gimplify_omp_ctx, *Pgimplify_omp_ctx;

typedef struct array_descr_info array_descr_info, *Parray_descr_info;

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

struct diagnostic_info {
};

struct lang_hooks_for_lto {
    void (* begin_section)(char *);
    void (* append_data)(void *, size_t, void *);
    void (* end_section)(void);
};

struct lang_hooks_for_tree_dump {
    uchar (* dump_tree)(void *, tree);
    int (* type_quals)(const_tree);
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

struct diagnostic_context {
};

struct gimplify_omp_ctx {
};

struct array_descr_info {
};

typedef struct omp_region omp_region, *Pomp_region;

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

typedef uchar addr_space_t;

typedef union gimple_statement_d * const_gimple;

typedef struct rtx_def * const_rtx;

typedef enum tls_model {
    TLS_MODEL_NONE=0,
    TLS_MODEL_EMULATED=1,
    TLS_MODEL_GLOBAL_DYNAMIC=2,
    TLS_MODEL_REAL=2,
    TLS_MODEL_LOCAL_DYNAMIC=3,
    TLS_MODEL_INITIAL_EXEC=4,
    TLS_MODEL_LOCAL_EXEC=5
} tls_model;

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

typedef enum asm_dialect {
    ASM_ATT=0,
    ASM_INTEL=1
} asm_dialect;

typedef enum fpmath_unit {
    FPMATH_387=1,
    FPMATH_SSE=2
} fpmath_unit;

typedef struct stringop_strategy stringop_strategy, *Pstringop_strategy;

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

struct stringop_strategy {
    int max;
    enum stringop_alg alg;
};

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

typedef enum ix86_entity {
    I387_TRUNC=0,
    I387_FLOOR=1,
    I387_CEIL=2,
    I387_MASK_PM=3,
    MAX_386_ENTITIES=4
} ix86_entity;

typedef struct stringop_algs stringop_algs, *Pstringop_algs;

struct stringop_algs {
    enum stringop_alg unknown_size;
    struct stringop_strategy size[4];
};

typedef enum ix86_arch_indices {
    X86_ARCH_CMOVE=0,
    X86_ARCH_CMPXCHG=1,
    X86_ARCH_CMPXCHG8B=2,
    X86_ARCH_XADD=3,
    X86_ARCH_BSWAP=4,
    X86_ARCH_LAST=5
} ix86_arch_indices;

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

typedef struct VEC_ipa_opt_pass_heap VEC_ipa_opt_pass_heap, *PVEC_ipa_opt_pass_heap;

typedef struct VEC_ipa_opt_pass_base VEC_ipa_opt_pass_base, *PVEC_ipa_opt_pass_base;

typedef struct ipa_opt_pass_d ipa_opt_pass_d, *Pipa_opt_pass_d;

typedef struct cgraph_node_set_def cgraph_node_set_def, *Pcgraph_node_set_def;

typedef struct cgraph_node cgraph_node, *Pcgraph_node;

typedef struct varpool_node varpool_node, *Pvarpool_node;

typedef struct ipa_opt_pass_d * ipa_opt_pass;

typedef struct opt_pass opt_pass, *Popt_pass;

typedef struct VEC_cgraph_node_ptr_gc VEC_cgraph_node_ptr_gc, *PVEC_cgraph_node_ptr_gc;

typedef struct cgraph_edge cgraph_edge, *Pcgraph_edge;

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

typedef struct lto_file_decl_data lto_file_decl_data, *Plto_file_decl_data;

typedef struct inline_summary inline_summary, *Pinline_summary;

typedef struct VEC_ipa_replace_map_p_gc VEC_ipa_replace_map_p_gc, *PVEC_ipa_replace_map_p_gc;

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

typedef struct rtl_data rtl_data, *Prtl_data;

typedef struct expr_status expr_status, *Pexpr_status;

typedef struct varasm_status varasm_status, *Pvarasm_status;

typedef struct incoming_args incoming_args, *Pincoming_args;

typedef struct function_subsections function_subsections, *Pfunction_subsections;

typedef struct initial_value_struct initial_value_struct, *Pinitial_value_struct;

typedef struct rtx_constant_pool rtx_constant_pool, *Prtx_constant_pool;

struct initial_value_struct {
};

struct function_subsections {
    char * hot_section_label;
    char * cold_section_label;
    char * hot_section_end_label;
    char * cold_section_end_label;
    char * unlikely_text_section_name;
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

struct varasm_status {
    struct rtx_constant_pool * pool;
    uint deferred_constants;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
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

typedef struct cselib_set cselib_set, *Pcselib_set;

struct cselib_set {
    rtx src;
    rtx dest;
    cselib_val * src_elt;
    cselib_val * dest_addr_elt;
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

typedef struct rtl_hooks rtl_hooks, *Prtl_hooks;

struct rtl_hooks {
    rtx (* gen_lowpart)(enum machine_mode, rtx);
    rtx (* gen_lowpart_no_emit)(enum machine_mode, rtx);
    rtx (* reg_nonzero_bits)(const_rtx, enum machine_mode, const_rtx, enum machine_mode, ulong, ulong *);
    rtx (* reg_num_sign_bit_copies)(const_rtx, enum machine_mode, const_rtx, enum machine_mode, uint, uint *);
    uchar (* reg_truncated_to_mode)(enum machine_mode, const_rtx);
};

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

typedef int (* rtx_function)(rtx *, void *);

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

typedef struct stdarg_info stdarg_info, *Pstdarg_info;

struct stdarg_info {
};

typedef struct gcov_ctr_summary gcov_ctr_summary, *Pgcov_ctr_summary;

struct gcov_ctr_summary {
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

typedef void * (* line_map_realloc)(void *, size_t);

typedef struct line_maps line_maps, *Pline_maps;

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

typedef long ptrdiff_t;

typedef struct alloc_pool_def alloc_pool_def, *Palloc_pool_def;

typedef struct alloc_pool_def * alloc_pool;

typedef struct alloc_pool_list_def alloc_pool_list_def, *Palloc_pool_list_def;

typedef struct alloc_pool_list_def * alloc_pool_list;

struct alloc_pool_def {
    char * name;
    size_t elts_per_block;
    alloc_pool_list returned_free_list;
    char * virgin_free_list;
    size_t virgin_elts_remaining;
    size_t elts_allocated;
    size_t elts_free;
    size_t blocks_allocated;
    alloc_pool_list block_list;
    size_t block_size;
    size_t elt_size;
};

struct alloc_pool_list_def {
    struct alloc_pool_list_def * next;
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

typedef enum LTO_cgraph_tags {
    LTO_cgraph_avail_node=1,
    LTO_cgraph_overwritable_node=2,
    LTO_cgraph_unavail_node=3,
    LTO_cgraph_edge=4,
    LTO_cgraph_last_tag=5
} LTO_cgraph_tags;

typedef struct regstat_n_sets_and_refs_t regstat_n_sets_and_refs_t, *Pregstat_n_sets_and_refs_t;

struct regstat_n_sets_and_refs_t {
    int sets;
    int refs;
};

typedef ushort move_table[27];

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

typedef struct df df, *Pdf;

typedef struct dataflow dataflow, *Pdataflow;

typedef struct df_ref_info df_ref_info, *Pdf_ref_info;

typedef struct df_reg_info df_reg_info, *Pdf_reg_info;

typedef struct df_insn_info df_insn_info, *Pdf_insn_info;

typedef struct df_problem df_problem, *Pdf_problem;

typedef union df_ref_d df_ref_d, *Pdf_ref_d;

typedef union df_ref_d * df_ref;

typedef enum df_ref_order {
    DF_REF_ORDER_NO_TABLE=0,
    DF_REF_ORDER_UNORDERED=1,
    DF_REF_ORDER_UNORDERED_WITH_NOTES=2,
    DF_REF_ORDER_BY_REG=3,
    DF_REF_ORDER_BY_REG_WITH_NOTES=4,
    DF_REF_ORDER_BY_INSN=5,
    DF_REF_ORDER_BY_INSN_WITH_NOTES=6
} df_ref_order;

typedef struct df_mw_hardreg df_mw_hardreg, *Pdf_mw_hardreg;

typedef enum df_flow_dir {
    DF_NONE=0,
    DF_FORWARD=1,
    DF_BACKWARD=2
} df_flow_dir;

typedef void (* df_alloc_function)(bitmap);

typedef void (* df_reset_function)(bitmap);

typedef void (* df_free_bb_function)(basic_block, void *);

typedef void (* df_local_compute_function)(bitmap);

typedef void (* df_init_function)(bitmap);

typedef void (* df_dataflow_function)(struct dataflow *, bitmap, int *, int);

typedef void (* df_confluence_function_0)(basic_block);

typedef void (* df_confluence_function_n)(edge);

typedef uchar (* df_transfer_function)(int);

typedef void (* df_finalizer_function)(bitmap);

typedef void (* df_free_function)(void);

typedef void (* df_remove_problem_function)(void);

typedef void (* df_dump_problem_function)(FILE *);

typedef void (* df_dump_bb_problem_function)(basic_block, FILE *);

typedef void (* df_verify_solution_start)(void);

typedef void (* df_verify_solution_end)(void);

typedef struct df_base_ref df_base_ref, *Pdf_base_ref;

typedef struct df_regular_ref df_regular_ref, *Pdf_regular_ref;

typedef struct df_artificial_ref df_artificial_ref, *Pdf_artificial_ref;

typedef struct df_extract_ref df_extract_ref, *Pdf_extract_ref;

typedef struct df_link df_link, *Pdf_link;

struct df_base_ref {
    uint cl:8;
    uint type:8;
    int flags:16;
    undefined field3_0x4;
    undefined field4_0x5;
    undefined field5_0x6;
    undefined field6_0x7;
    rtx reg;
    struct df_link * chain;
    struct df_insn_info * insn_info;
    union df_ref_d * next_reg;
    union df_ref_d * prev_reg;
    uint regno;
    int id;
    uint ref_order;
    undefined field15_0x3c;
    undefined field16_0x3d;
    undefined field17_0x3e;
    undefined field18_0x3f;
};

struct df_regular_ref {
    struct df_base_ref base;
    rtx * loc;
};

struct df_ref_info {
    df_ref * refs;
    uint * begin;
    uint * count;
    uint refs_size;
    uint table_size;
    uint total_size;
    enum df_ref_order ref_order;
};

struct dataflow {
    struct df_problem * problem;
    void * * block_info;
    uint block_info_size;
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
    alloc_pool block_pool;
    bitmap out_of_date_transfer_functions;
    void * problem_data;
    uint local_flags;
    uchar computed;
    uchar solutions_dirty;
    uchar optional_p;
    undefined field14_0x37;
};

struct df_artificial_ref {
    struct df_base_ref base;
    basic_block bb;
};

struct df {
    struct dataflow * problems_in_order[8];
    struct dataflow * problems_by_index[8];
    bitmap blocks_to_analyze;
    struct df_ref_info def_info;
    struct df_ref_info use_info;
    struct df_reg_info * * def_regs;
    struct df_reg_info * * use_regs;
    struct df_reg_info * * eq_use_regs;
    uint regs_size;
    uint regs_inited;
    struct df_insn_info * * insns;
    uint insns_size;
    int num_problems_defined;
    bitmap hardware_regs_used;
    bitmap regular_block_artificial_uses;
    bitmap eh_block_artificial_uses;
    bitmap entry_block_defs;
    bitmap exit_block_uses;
    bitmap insns_to_delete;
    bitmap insns_to_rescan;
    bitmap insns_to_notes_rescan;
    int * postorder;
    int * postorder_inverted;
    int n_blocks;
    int n_blocks_inverted;
    uint * hard_regs_live_count;
    uint ref_order;
    int changeable_flags:8;
    uchar analyze_subset;
    uchar redo_entry_and_exit;
    undefined field30_0x16f;
};

struct df_reg_info {
    df_ref reg_chain;
    uint n_refs;
    undefined field2_0xc;
    undefined field3_0xd;
    undefined field4_0xe;
    undefined field5_0xf;
};

struct df_mw_hardreg {
    rtx mw_reg;
    uint type:16;
    int flags:16;
    uint start_regno;
    uint end_regno;
    uint mw_order;
};

struct df_problem {
    uint id;
    enum df_flow_dir dir;
    df_alloc_function alloc_fun;
    df_reset_function reset_fun;
    df_free_bb_function free_bb_fun;
    df_local_compute_function local_compute_fun;
    df_init_function init_fun;
    df_dataflow_function dataflow_fun;
    df_confluence_function_0 con_fun_0;
    df_confluence_function_n con_fun_n;
    df_transfer_function trans_fun;
    df_finalizer_function finalize_fun;
    df_free_function free_fun;
    df_remove_problem_function remove_problem_fun;
    df_dump_problem_function dump_start_fun;
    df_dump_bb_problem_function dump_top_fun;
    df_dump_bb_problem_function dump_bottom_fun;
    df_verify_solution_start verify_start_fun;
    df_verify_solution_end verify_end_fun;
    struct df_problem * dependent_problem;
    enum timevar_id_t tv_id;
    uchar free_blocks_on_set_blocks;
    undefined field22_0x9d;
    undefined field23_0x9e;
    undefined field24_0x9f;
};

struct df_insn_info {
    rtx insn;
    df_ref * defs;
    df_ref * uses;
    df_ref * eq_uses;
    struct df_mw_hardreg * * mw_hardregs;
    int luid;
    undefined field6_0x2c;
    undefined field7_0x2d;
    undefined field8_0x2e;
    undefined field9_0x2f;
};

struct df_extract_ref {
    struct df_regular_ref base;
    int width;
    int offset;
    enum machine_mode mode;
    undefined field4_0x54;
    undefined field5_0x55;
    undefined field6_0x56;
    undefined field7_0x57;
};

union df_ref_d {
    struct df_base_ref base;
    struct df_regular_ref regular_ref;
    struct df_artificial_ref artificial_ref;
    struct df_extract_ref extract_ref;
};

struct df_link {
    df_ref ref;
    struct df_link * next;
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

typedef struct gcc_target gcc_target, *Pgcc_target;

typedef struct asm_out asm_out, *Pasm_out;

typedef struct sched sched, *Psched;

typedef struct vectorize vectorize, *Pvectorize;

typedef struct calls calls, *Pcalls;

typedef struct c c, *Pc;

typedef struct cxx cxx, *Pcxx;

typedef struct emutls emutls, *Pemutls;

typedef struct target_option_hooks target_option_hooks, *Ptarget_option_hooks;

typedef struct asm_int_op asm_int_op, *Pasm_int_op;

typedef enum print_switch_type {
    SWITCH_TYPE_PASSED=0,
    SWITCH_TYPE_ENABLED=1,
    SWITCH_TYPE_DESCRIPTIVE=2,
    SWITCH_TYPE_LINE_START=3,
    SWITCH_TYPE_LINE_END=4
} print_switch_type;

typedef int (* print_switch_fn_type)(enum print_switch_type, char *);

struct asm_int_op {
    char * hi;
    char * si;
    char * di;
    char * ti;
};

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

struct c {
    machine_mode (* mode_for_suffix)(char);
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

typedef struct gcc_targetcm gcc_targetcm, *Pgcc_targetcm;

struct gcc_targetcm {
    uchar (* handle_c_option)(size_t, char *, int);
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




uint VEC_rtx_base_length(VEC_rtx_base *vec_)

{
  uint uVar1;
  
  if (vec_ == (VEC_rtx_base *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = vec_->num;
  }
  return uVar1;
}



rtx VEC_rtx_base_index(VEC_rtx_base *vec_,uint ix_)

{
  return vec_->vec[ix_];
}



int VEC_rtx_base_space(VEC_rtx_base *vec_,int alloc_)

{
  bool bVar1;
  
  if (vec_ == (VEC_rtx_base *)0x0) {
    bVar1 = alloc_ == 0;
  }
  else {
    bVar1 = (uint)alloc_ <= vec_->alloc - vec_->num;
  }
  return (uint)bVar1;
}



void VEC_rtx_base_truncate(VEC_rtx_base *vec_,uint size_)

{
  if (vec_ != (VEC_rtx_base *)0x0) {
    vec_->num = size_;
  }
  return;
}



rtx VEC_rtx_base_replace(VEC_rtx_base *vec_,uint ix_,rtx obj_)

{
  rtx prVar1;
  rtx old_obj_;
  
  prVar1 = vec_->vec[ix_];
  vec_->vec[ix_] = obj_;
  return prVar1;
}



rtx * VEC_rtx_base_address(VEC_rtx_base *vec_)

{
  rtx *pprVar1;
  
  if (vec_ == (VEC_rtx_base *)0x0) {
    pprVar1 = (rtx *)0x0;
  }
  else {
    pprVar1 = vec_->vec;
  }
  return pprVar1;
}



int VEC_rtx_gc_reserve_exact(VEC_rtx_gc **vec_,int alloc_)

{
  int iVar1;
  VEC_rtx_gc *pVVar2;
  VEC_rtx_base *vec__00;
  int extend;
  
  if (*vec_ == (VEC_rtx_gc *)0x0) {
    vec__00 = (VEC_rtx_base *)0x0;
  }
  else {
    vec__00 = (VEC_rtx_base *)*vec_;
  }
  iVar1 = VEC_rtx_base_space(vec__00,alloc_);
  if ((iVar1 == 0) != 0) {
    pVVar2 = (VEC_rtx_gc *)vec_gc_p_reserve_exact(*vec_,alloc_);
    *vec_ = pVVar2;
  }
  return (uint)(iVar1 == 0);
}



void VEC_rtx_gc_safe_grow(VEC_rtx_gc **vec_,int size_)

{
  VEC_rtx_base *vec__00;
  uint uVar1;
  VEC_rtx_gc *pVVar2;
  
  if (-1 < size_) {
    if (*vec_ == (VEC_rtx_gc *)0x0) {
      vec__00 = (VEC_rtx_base *)0x0;
    }
    else {
      vec__00 = (VEC_rtx_base *)*vec_;
    }
    VEC_rtx_base_length(vec__00);
  }
  if (*vec_ == (VEC_rtx_gc *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*vec_ == (VEC_rtx_gc *)0x0) {
      pVVar2 = (VEC_rtx_gc *)0x0;
    }
    else {
      pVVar2 = *vec_;
    }
    uVar1 = (pVVar2->base).num;
  }
  VEC_rtx_gc_reserve_exact(vec_,size_ - uVar1);
  if (*vec_ == (VEC_rtx_gc *)0x0) {
    pVVar2 = (VEC_rtx_gc *)0x0;
  }
  else {
    pVVar2 = *vec_;
  }
  (pVVar2->base).num = size_;
  return;
}



void VEC_rtx_gc_safe_grow_cleared(VEC_rtx_gc **vec_,int size_)

{
  uint uVar1;
  VEC_rtx_base *pVVar2;
  rtx *pprVar3;
  int oldsize;
  
  if (*vec_ == (VEC_rtx_gc *)0x0) {
    pVVar2 = (VEC_rtx_base *)0x0;
  }
  else {
    pVVar2 = (VEC_rtx_base *)*vec_;
  }
  uVar1 = VEC_rtx_base_length(pVVar2);
  VEC_rtx_gc_safe_grow(vec_,size_);
  if (*vec_ == (VEC_rtx_gc *)0x0) {
    pVVar2 = (VEC_rtx_base *)0x0;
  }
  else {
    pVVar2 = (VEC_rtx_base *)*vec_;
  }
  pprVar3 = VEC_rtx_base_address(pVVar2);
  memset(pprVar3 + (int)uVar1,0,(long)(int)(size_ - uVar1) * 8);
  return;
}



uint rhs_regno(const_rtx x)

{
  return *(uint *)&x->u;
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



uint VEC_alias_set_entry_base_length(VEC_alias_set_entry_base *vec_)

{
  uint uVar1;
  
  if (vec_ == (VEC_alias_set_entry_base *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = vec_->num;
  }
  return uVar1;
}



alias_set_entry VEC_alias_set_entry_base_index(VEC_alias_set_entry_base *vec_,uint ix_)

{
  return vec_->vec[ix_];
}



int VEC_alias_set_entry_base_space(VEC_alias_set_entry_base *vec_,int alloc_)

{
  bool bVar1;
  
  if (vec_ == (VEC_alias_set_entry_base *)0x0) {
    bVar1 = alloc_ == 0;
  }
  else {
    bVar1 = (uint)alloc_ <= vec_->alloc - vec_->num;
  }
  return (uint)bVar1;
}



alias_set_entry *
VEC_alias_set_entry_base_quick_push(VEC_alias_set_entry_base *vec_,alias_set_entry obj_)

{
  uint uVar1;
  alias_set_entry *slot_;
  
  uVar1 = vec_->num;
  vec_->num = uVar1 + 1;
  vec_->vec[uVar1] = obj_;
  return vec_->vec + uVar1;
}



alias_set_entry
VEC_alias_set_entry_base_replace(VEC_alias_set_entry_base *vec_,uint ix_,alias_set_entry obj_)

{
  alias_set_entry paVar1;
  alias_set_entry old_obj_;
  
  paVar1 = vec_->vec[ix_];
  vec_->vec[ix_] = obj_;
  return paVar1;
}



int VEC_alias_set_entry_gc_reserve(VEC_alias_set_entry_gc **vec_,int alloc_)

{
  int iVar1;
  VEC_alias_set_entry_gc *pVVar2;
  VEC_alias_set_entry_base *vec__00;
  int extend;
  
  if (*vec_ == (VEC_alias_set_entry_gc *)0x0) {
    vec__00 = (VEC_alias_set_entry_base *)0x0;
  }
  else {
    vec__00 = (VEC_alias_set_entry_base *)*vec_;
  }
  iVar1 = VEC_alias_set_entry_base_space(vec__00,alloc_);
  if ((iVar1 == 0) != 0) {
    pVVar2 = (VEC_alias_set_entry_gc *)vec_gc_p_reserve(*vec_,alloc_);
    *vec_ = pVVar2;
  }
  return (uint)(iVar1 == 0);
}



alias_set_entry *
VEC_alias_set_entry_gc_safe_push(VEC_alias_set_entry_gc **vec_,alias_set_entry obj_)

{
  alias_set_entry *ppaVar1;
  VEC_alias_set_entry_base *vec__00;
  
  VEC_alias_set_entry_gc_reserve(vec_,1);
  if (*vec_ == (VEC_alias_set_entry_gc *)0x0) {
    vec__00 = (VEC_alias_set_entry_base *)0x0;
  }
  else {
    vec__00 = (VEC_alias_set_entry_base *)*vec_;
  }
  ppaVar1 = VEC_alias_set_entry_base_quick_push(vec__00,obj_);
  return ppaVar1;
}



uchar ao_ref_from_mem(ao_ref *ref,const_rtx mem)

{
  bool bVar1;
  uchar uVar2;
  alias_set_type aVar3;
  int iVar4;
  tree ptVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  tree expr;
  tree base;
  void *namep;
  
  if (*(long *)&(mem->u).field_0x8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = **(long **)&(mem->u).field_0x8;
  }
  if (lVar8 == 0) {
    return '\0';
  }
  if ((*(long *)&(mem->u).field_0x8 == 0) || (*(long *)(*(long *)&(mem->u).field_0x8 + 8) == 0)) {
LAB_001005d1:
    uVar2 = '\0';
  }
  else {
    if (*(long *)&(mem->u).field_0x8 == 0) {
      if ((mem->field_0x2 == '\x01') ||
         (lVar7 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)mem->field_0x2]), lVar7 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) goto LAB_001005d1;
    }
    else if (*(long *)(*(long *)&(mem->u).field_0x8 + 0x10) == 0) goto LAB_001005d1;
    ao_ref_init(ref,lVar8);
    ptVar5 = (tree)ao_ref_base(ref);
    if (ptVar5 == (tree)0x0) {
      uVar2 = '\0';
    }
    else if ((((*(short *)ptVar5 == 0x2f) || (*(short *)ptVar5 == 0x30)) ||
             (*(short *)ptVar5 == 0x31)) && (**(short **)&ptVar5->field_0x28 != 0x8d)) {
      uVar2 = '\0';
    }
    else if ((*(short *)ptVar5 == 0x1d) || (*(short *)ptVar5 == 0x1e)) {
      uVar2 = '\0';
    }
    else {
      if (((*(short *)ptVar5 == 0x20) && ((ptVar5->field_0x3 & 4) == 0)) &&
         ((*(long *)(*(long *)(cfun + 0x18) + 0x40) != 0 &&
          (puVar6 = (undefined8 *)
                    pointer_map_contains(*(undefined8 *)(*(long *)(cfun + 0x18) + 0x40),ptVar5),
          puVar6 != (undefined8 *)0x0)))) {
        aVar3 = get_alias_set(ptVar5);
        ref->base_alias_set = aVar3;
        ptVar5 = (tree)build1_stat(0x2f,*(undefined8 *)&ptVar5->field_0x10,*puVar6);
        ref->base = ptVar5;
      }
      if (*(long *)&(mem->u).field_0x8 == 0) {
        aVar3 = 0;
      }
      else {
        aVar3 = *(alias_set_type *)(*(long *)&(mem->u).field_0x8 + 0x18);
      }
      ref->ref_alias_set = aVar3;
      if (*(long *)&(mem->u).field_0x8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(*(long *)&(mem->u).field_0x8 + 8);
      }
      if (*(long *)(lVar8 + 8) < 0) {
        if (*(long *)&(mem->u).field_0x8 == 0) {
          if (mem->field_0x2 == '\x01') {
            lVar8 = 0;
          }
          else {
            lVar8 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)mem->field_0x2]);
          }
        }
        else {
          lVar8 = *(long *)(*(long *)&(mem->u).field_0x8 + 0x10);
        }
        if (*(long *)&(mem->u).field_0x8 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(*(long *)&(mem->u).field_0x8 + 8);
        }
        if ((*(long *)(lVar7 + 8) + *(long *)(lVar8 + 8)) * 8 - ref->size == 0) {
          return '\x01';
        }
      }
      if (*(long *)&(mem->u).field_0x8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(*(long *)&(mem->u).field_0x8 + 8);
      }
      ref->offset = ref->offset + *(long *)(lVar8 + 8) * 8;
      if (*(long *)&(mem->u).field_0x8 == 0) {
        if (mem->field_0x2 == '\x01') {
          lVar8 = 0;
        }
        else {
          lVar8 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)mem->field_0x2]);
        }
      }
      else {
        lVar8 = *(long *)(*(long *)&(mem->u).field_0x8 + 0x10);
      }
      ref->size = *(long *)(lVar8 + 8) * 8;
      if ((ref->max_size != -1) && (ref->max_size < ref->size)) {
        ref->max_size = ref->size;
      }
      if (*(long *)&(mem->u).field_0x8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = **(long **)&(mem->u).field_0x8;
      }
      lVar7 = get_spill_slot_decl(0);
      if ((lVar8 == lVar7) ||
         ((-1 < ref->offset &&
          ((*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)ref->base * 4) != 3 ||
           ((iVar4 = host_integerp(*(undefined8 *)&ref->base->field_0x30,1), iVar4 != 0 &&
            ((ulong)(ref->size + ref->offset) <= *(ulong *)(*(long *)&ref->base->field_0x30 + 0x18))
            ))))))) {
        uVar2 = '\x01';
      }
      else {
        uVar2 = '\0';
      }
    }
  }
  return uVar2;
}



uchar rtx_refs_may_alias_p(const_rtx x,const_rtx mem,uchar tbaa_p)

{
  long lVar1;
  uchar uVar2;
  long in_FS_OFFSET;
  ao_ref ref1;
  ao_ref ref2;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ao_ref_from_mem(&ref1,x);
  if (uVar2 != '\0') {
    uVar2 = ao_ref_from_mem(&ref2,mem);
    if (uVar2 != '\0') {
      uVar2 = refs_may_alias_p_1(&ref1,&ref2,tbaa_p);
      goto LAB_00100a0f;
    }
  }
  uVar2 = '\x01';
LAB_00100a0f:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



alias_set_entry get_alias_set_entry(alias_set_type alias_set)

{
  alias_set_entry paVar1;
  VEC_alias_set_entry_base *vec_;
  
  vec_ = &alias_sets->base;
  if (alias_sets == (VEC_alias_set_entry_gc *)0x0) {
    vec_ = (VEC_alias_set_entry_base *)0x0;
  }
  paVar1 = VEC_alias_set_entry_base_index(vec_,alias_set);
  return paVar1;
}



int mems_in_disjoint_alias_sets_p(const_rtx mem1,const_rtx mem2)

{
  alias_set_type set1;
  int iVar1;
  alias_set_type set2;
  
  if ((flag_strict_aliasing == 0) &&
     (((*(long *)&(mem1->u).field_0x8 != 0 && (*(int *)(*(long *)&(mem1->u).field_0x8 + 0x18) != 0))
      || ((*(long *)&(mem2->u).field_0x8 != 0 &&
          (*(int *)(*(long *)&(mem2->u).field_0x8 + 0x18) != 0)))))) {
    fancy_abort("alias.c",0x17a,&DAT_00106480);
  }
  if (*(long *)&(mem2->u).field_0x8 == 0) {
    set2 = 0;
  }
  else {
    set2 = *(alias_set_type *)(*(long *)&(mem2->u).field_0x8 + 0x18);
  }
  if (*(long *)&(mem1->u).field_0x8 == 0) {
    set1 = 0;
  }
  else {
    set1 = *(alias_set_type *)(*(long *)&(mem1->u).field_0x8 + 0x18);
  }
  iVar1 = alias_sets_conflict_p(set1,set2);
  return (int)(iVar1 == 0);
}



int insert_subset_children(splay_tree_node node,void *data)

{
  splay_tree_insert(data,node->key,node->value);
  return 0;
}



uchar alias_set_subset_of(alias_set_type set1,alias_set_type set2)

{
  uchar uVar1;
  alias_set_entry paVar2;
  long lVar3;
  alias_set_entry ase;
  
  if (set2 != 0) {
    paVar2 = get_alias_set_entry(set2);
    if ((paVar2 == (alias_set_entry)0x0) ||
       (((paVar2->has_zero_child == 0 || (set1 != 0)) &&
        (lVar3 = splay_tree_lookup(paVar2->children,(long)set1), lVar3 == 0)))) {
      uVar1 = '\0';
    }
    else {
      uVar1 = '\x01';
    }
    return uVar1;
  }
  return '\x01';
}



int alias_sets_conflict_p(alias_set_type set1,alias_set_type set2)

{
  int iVar1;
  alias_set_entry paVar2;
  long lVar3;
  alias_set_entry ase;
  
  iVar1 = alias_sets_must_conflict_p(set1,set2);
  if (iVar1 != 0) {
    return 1;
  }
  paVar2 = get_alias_set_entry(set1);
  if ((paVar2 != (alias_set_entry)0x0) &&
     ((paVar2->has_zero_child != 0 ||
      (lVar3 = splay_tree_lookup(paVar2->children,(long)set2), lVar3 != 0)))) {
    return 1;
  }
  paVar2 = get_alias_set_entry(set2);
  if ((paVar2 == (alias_set_entry)0x0) ||
     ((paVar2->has_zero_child == 0 &&
      (lVar3 = splay_tree_lookup(paVar2->children,(long)set1), lVar3 == 0)))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



int walk_mems_2(rtx *x,rtx mem)

{
  alias_set_type set1;
  int iVar1;
  alias_set_type set2;
  
  if (*(short *)*x == 0x2b) {
    if (*(long *)&(mem->u).field_0x8 == 0) {
      set2 = 0;
    }
    else {
      set2 = *(alias_set_type *)(*(long *)&(mem->u).field_0x8 + 0x18);
    }
    if (*(long *)&((*x)->u).field_0x8 == 0) {
      set1 = 0;
    }
    else {
      set1 = *(alias_set_type *)(*(long *)&((*x)->u).field_0x8 + 0x18);
    }
    iVar1 = alias_sets_conflict_p(set1,set2);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int walk_mems_1(rtx *x,rtx *pat)

{
  int iVar1;
  
  if (*(short *)*x == 0x2b) {
    iVar1 = for_each_rtx(pat,walk_mems_2,*x);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



uchar insn_alias_sets_conflict_p(rtx insn1,rtx insn2)

{
  uchar uVar1;
  
  uVar1 = for_each_rtx(insn1 + 1,walk_mems_1,insn2 + 1);
  return uVar1;
}



int alias_sets_must_conflict_p(alias_set_type set1,alias_set_type set2)

{
  int iVar1;
  
  if (((set1 == 0) || (set2 == 0)) || (set1 == set2)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int objects_must_conflict_p(tree t1,tree t2)

{
  alias_set_type set1_00;
  alias_set_type set2_00;
  int iVar1;
  alias_set_type set1;
  alias_set_type set2;
  
  if ((t1 == (tree)0x0) && (t2 == (tree)0x0)) {
    iVar1 = 0;
  }
  else if ((t1 == t2) ||
          ((((t1 != (tree)0x0 && ((t1->field_0x2 & 8) != 0)) && (t2 != (tree)0x0)) &&
           ((t2->field_0x2 & 8) != 0)))) {
    iVar1 = 1;
  }
  else {
    if (t1 == (tree)0x0) {
      set1_00 = 0;
    }
    else {
      set1_00 = get_alias_set(t1);
    }
    if (t2 == (tree)0x0) {
      set2_00 = 0;
    }
    else {
      set2_00 = get_alias_set(t2);
    }
    iVar1 = alias_sets_must_conflict_p(set1_00,set2_00);
  }
  return iVar1;
}



uchar component_uses_parent_alias_set(const_tree t)

{
  uchar uVar1;
  uint uVar2;
  alias_set_type aVar3;
  const_tree local_10;
  
  local_10 = t;
  do {
    uVar1 = handled_component_p(local_10);
    if (uVar1 == '\0') {
      return '\0';
    }
    if (0x2e < *(ushort *)local_10) {
      return '\x01';
    }
    uVar2 = (uint)*(ushort *)local_10;
    if (uVar2 < 0x2d) {
      if (uVar2 == 0x29) {
        if ((*(byte *)(*(long *)&local_10->field_0x30 + 0x3b) & 4) != 0) {
          return '\x01';
        }
      }
      else {
        if (uVar2 < 0x29) {
          return '\x01';
        }
        if (1 < uVar2 - 0x2b) {
          return '\x01';
        }
      }
    }
    else if ((*(byte *)(*(long *)(*(long *)&local_10->field_0x28 + 0x10) + 0x3d) & 0x10) != 0) {
      return '\x01';
    }
    local_10 = *(const_tree *)&local_10->field_0x28;
    aVar3 = get_alias_set(*(tree *)&local_10->field_0x10);
    if (aVar3 == 0) {
      return '\x01';
    }
  } while( true );
}



alias_set_type get_deref_alias_set_1(tree t)

{
  alias_set_type aVar1;
  tree local_10;
  
  if (flag_strict_aliasing == 0) {
    aVar1 = 0;
  }
  else {
    local_10 = t;
    if (*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4) != 2) {
      local_10 = *(tree *)&t->field_0x10;
    }
    if ((**(short **)&local_10->field_0x10 == 0x13) || ((local_10->field_0x3 & 4) != 0)) {
      aVar1 = 0;
    }
    else {
      aVar1 = -1;
    }
  }
  return aVar1;
}



alias_set_type get_deref_alias_set(tree t)

{
  tree local_20;
  alias_set_type set;
  
  set = get_deref_alias_set_1(t);
  if (set == -1) {
    local_20 = t;
    if (*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4) != 2) {
      local_20 = *(tree *)&t->field_0x10;
    }
    set = get_alias_set(*(tree *)&local_20->field_0x10);
  }
  return set;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

alias_set_type get_alias_set(tree t)

{
  tree type;
  uchar uVar1;
  int iVar2;
  alias_set_type aVar3;
  short *psVar4;
  long lVar5;
  tree local_20;
  alias_set_type set;
  tree inner;
  
  if (((flag_strict_aliasing == 0) || (t == global_trees)) ||
     ((*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4) != 2 &&
      ((*(long *)&t->field_0x10 == 0 || (*(tree *)&t->field_0x10 == global_trees)))))) {
    return 0;
  }
  local_20 = t;
  if (*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)t * 4) != 2) {
    local_20 = (tree)tree_strip_nop_conversions(t);
    iVar2 = (*_gen_rtx_fmt_e_stat)(local_20);
    if (iVar2 != -1) {
      return iVar2;
    }
    if (*(short *)local_20 == 0x98) {
      local_20 = *(tree *)&local_20->field_0x50;
    }
    inner = local_20;
    while (uVar1 = handled_component_p(inner), uVar1 != '\0') {
      inner = (tree)tree_strip_nop_conversions(*(undefined8 *)&inner->field_0x28);
    }
    if ((((*(short *)inner == 0x2f) || (*(short *)inner == 0x30)) || (*(short *)inner == 0x31)) &&
       (aVar3 = get_deref_alias_set_1(*(tree *)&inner->field_0x28), aVar3 != -1)) {
      return aVar3;
    }
    while (uVar1 = component_uses_parent_alias_set(local_20), uVar1 != '\0') {
      local_20 = (tree)tree_strip_nop_conversions(*(undefined8 *)&local_20->field_0x28);
    }
    if (((*(short *)local_20 == 0x20) &&
        ((&DAT_001080cb)[(ulong)*(ushort *)local_20 * 0x40] != '\0')) &&
       (*(long *)&local_20->field_0x70 != 0)) {
      if (*(long *)&local_20->field_0x70 == 0) {
        make_decl_rtl(local_20);
        psVar4 = *(short **)&local_20->field_0x70;
      }
      else {
        psVar4 = *(short **)&local_20->field_0x70;
      }
      if (*psVar4 == 0x2b) {
        if (*(long *)&local_20->field_0x70 == 0) {
          make_decl_rtl(local_20);
          lVar5 = *(long *)&local_20->field_0x70;
        }
        else {
          lVar5 = *(long *)&local_20->field_0x70;
        }
        if (*(long *)(lVar5 + 0x10) != 0) {
          if (*(long *)&local_20->field_0x70 == 0) {
            make_decl_rtl(local_20);
            lVar5 = *(long *)&local_20->field_0x70;
          }
          else {
            lVar5 = *(long *)&local_20->field_0x70;
          }
          return *(alias_set_type *)(*(long *)(lVar5 + 0x10) + 0x18);
        }
        return 0;
      }
    }
    local_20 = *(tree *)&local_20->field_0x10;
  }
  lVar5 = *(long *)&local_20->field_0x80;
  if (*(long *)(lVar5 + 0x98) == 0) {
    set = (*_gen_rtx_fmt_e_stat)(lVar5);
    if (set == -1) {
      set = 0;
    }
  }
  else {
    type = *(tree *)(lVar5 + 0x98);
    if ((*(long *)&type->field_0x98 == 0) || (type != *(tree *)&type->field_0x98)) {
      fancy_abort("alias.c",0x2c6,&DAT_00106480);
    }
    if (*(int *)&type->field_0x44 == -1) {
      if (*(long *)&type->field_0x20 == 0) {
        if (*(short *)type == 0xf) {
          set = get_alias_set(*(tree *)&type->field_0x10);
        }
        else {
          set = 0;
        }
      }
      else {
        set = (*_gen_rtx_fmt_e_stat)(type);
        if (set == -1) {
          if ((*(short *)type == 0x14) || (*(short *)type == 0x15)) {
            set = 0;
          }
          else if (*(short *)type == 0xe) {
            set = get_alias_set(*(tree *)&type->field_0x10);
          }
          else if ((*(short *)type == 0xf) && ((type->field_0x3d & 0x10) == 0)) {
            set = get_alias_set(*(tree *)&type->field_0x10);
          }
          else {
            set = new_alias_set();
          }
          *(alias_set_type *)&type->field_0x44 = set;
          if ((((*(short *)type == 0xf) || (*(short *)type == 0x10)) || (*(short *)type == 0x11)) ||
             ((*(short *)type == 0x12 || (*(short *)type == 0xd)))) {
            record_component_aliases(type);
          }
        }
      }
    }
    else {
      set = *(alias_set_type *)&type->field_0x44;
    }
  }
  return set;
}



alias_set_type new_alias_set(void)

{
  uint uVar1;
  int iVar2;
  VEC_alias_set_entry_base *vec_;
  
  if (flag_strict_aliasing == 0) {
    iVar2 = 0;
  }
  else {
    if (alias_sets == (VEC_alias_set_entry_gc *)0x0) {
      VEC_alias_set_entry_gc_safe_push(&alias_sets,(alias_set_entry)0x0);
    }
    VEC_alias_set_entry_gc_safe_push(&alias_sets,(alias_set_entry)0x0);
    vec_ = &alias_sets->base;
    if (alias_sets == (VEC_alias_set_entry_gc *)0x0) {
      vec_ = (VEC_alias_set_entry_base *)0x0;
    }
    uVar1 = VEC_alias_set_entry_base_length(vec_);
    iVar2 = uVar1 - 1;
  }
  return iVar2;
}



void record_alias_subset(alias_set_type superset,alias_set_type subset)

{
  splay_tree psVar1;
  alias_set_entry paVar2;
  VEC_alias_set_entry_base *vec_;
  alias_set_entry superset_entry;
  alias_set_entry subset_entry;
  
  if (superset != subset) {
    if (superset == 0) {
      fancy_abort("alias.c",0x32d,&DAT_00106480);
    }
    superset_entry = get_alias_set_entry(superset);
    if (superset_entry == (alias_set_entry)0x0) {
      superset_entry = (alias_set_entry)ggc_alloc_stat(0x10);
      superset_entry->alias_set = superset;
      psVar1 = (splay_tree)
               splay_tree_new_with_allocator(0x6b5ae8c78948,0,0,0xbac18948,0x58b48c08949,0);
      superset_entry->children = psVar1;
      superset_entry->has_zero_child = 0;
      vec_ = &alias_sets->base;
      if (alias_sets == (VEC_alias_set_entry_gc *)0x0) {
        vec_ = (VEC_alias_set_entry_base *)0x0;
      }
      VEC_alias_set_entry_base_replace(vec_,superset,superset_entry);
    }
    if (subset == 0) {
      superset_entry->has_zero_child = 1;
    }
    else {
      paVar2 = get_alias_set_entry(subset);
      if (paVar2 != (alias_set_entry)0x0) {
        if (paVar2->has_zero_child != 0) {
          superset_entry->has_zero_child = 1;
        }
        splay_tree_foreach(paVar2->children,insert_subset_children,superset_entry->children);
      }
      splay_tree_insert(superset_entry->children,(long)subset,0);
    }
  }
  return;
}



void record_component_aliases(tree type)

{
  ushort uVar1;
  alias_set_type superset_00;
  int iVar2;
  alias_set_type aVar3;
  VEC_tree_base *vec_;
  long in_FS_OFFSET;
  int i;
  alias_set_type superset;
  tree base_binfo;
  tree field;
  tree binfo;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  superset_00 = get_alias_set(type);
  if (superset_00 != 0) {
    uVar1 = *(ushort *)type;
    if (uVar1 == 0xd) {
      aVar3 = get_alias_set(*(tree *)&type->field_0x10);
      record_alias_subset(superset_00,aVar3);
    }
    else if ((0xc < uVar1) && (uVar1 - 0x10 < 3)) {
      if (*(long *)&type->field_0x88 != 0) {
        binfo = *(tree *)&type->field_0x88;
        i = 0;
        while( true ) {
          if (binfo == (tree)0xffffffffffffffa8) {
            vec_ = (VEC_tree_base *)0x0;
          }
          else {
            vec_ = (VEC_tree_base *)&binfo->field_0x58;
          }
          iVar2 = VEC_tree_base_iterate(vec_,i,&base_binfo);
          if (iVar2 == 0) break;
          aVar3 = get_alias_set(*(tree *)&base_binfo->field_0x10);
          record_alias_subset(superset_00,aVar3);
          i = i + 1;
        }
      }
      for (field = *(tree *)&type->field_0x18; field != (tree)0x0;
          field = *(tree *)&field->field_0x8) {
        if ((*(short *)field == 0x1f) && ((field->field_0x3b & 4) == 0)) {
          aVar3 = get_alias_set(*(tree *)&field->field_0x10);
          record_alias_subset(superset_00,aVar3);
        }
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



alias_set_type get_varargs_alias_set(void)

{
  return 0;
}



alias_set_type get_frame_alias_set(void)

{
  if (frame_set == -1) {
    frame_set = new_alias_set();
  }
  return frame_set;
}



rtx find_base_value(rtx src)

{
  char cVar1;
  uint ix_;
  uint uVar2;
  VEC_rtx_base *pVVar3;
  rtx prVar4;
  const_rtx local_40;
  uint regno;
  rtx src_0;
  rtx src_1;
  rtx temp_1;
  rtx temp;
  
  local_40 = (const_rtx)ix86_find_base_term(src);
  switch(*(undefined2 *)local_40) {
  case 0x23:
    local_40 = *(const_rtx *)&local_40->u;
    if ((*(short *)local_40 != 0x31) && (*(short *)local_40 != 0x32)) goto LAB_00101d2c;
  case 0x31:
  case 0x32:
    src_0 = *(rtx *)&local_40->u;
    src_1 = *(rtx *)&(local_40->u).field_0x8;
    if ((*(short *)src_0 == 0x25) && ((src_0->field_0x3 & 0x40) != 0)) {
      local_40 = find_base_value(src_0);
    }
    else if ((*(short *)src_1 == 0x25) && ((src_1->field_0x3 & 0x40) != 0)) {
      local_40 = find_base_value(src_1);
    }
    else {
      if ((*(short *)src_0 == 0x25) && (prVar4 = find_base_value(src_0), prVar4 != (rtx)0x0)) {
        src_0 = prVar4;
      }
      if ((*(short *)src_1 == 0x25) && (prVar4 = find_base_value(src_1), prVar4 != (rtx)0x0)) {
        src_1 = prVar4;
      }
      if (((src_0 == (rtx)0x0) ||
          (((local_40 = src_0, *(short *)src_0 != 0x2d && (*(short *)src_0 != 0x2c)) &&
           ((*(short *)src_0 != 6 || (src_0->field_0x2 == '\0')))))) &&
         ((src_1 == (rtx)0x0 ||
          (((local_40 = src_1, *(short *)src_1 != 0x2d && (*(short *)src_1 != 0x2c)) &&
           ((*(short *)src_1 != 6 || (src_1->field_0x2 == '\0')))))))) {
        if ((*(short *)src_1 == 0x1e) ||
           (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)src_0 * 4) == 9)) {
          local_40 = find_base_value(src_0);
        }
        else if ((*(short *)src_0 == 0x1e) ||
                (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)src_1 * 4) == 9)) {
          local_40 = find_base_value(src_1);
        }
        else {
          local_40 = (rtx)0x0;
        }
      }
    }
    break;
  default:
    goto LAB_00101d2c;
  case 0x25:
    ix_ = rhs_regno(local_40);
    if ((ix_ < 0x35) && (copying_arguments != '\0')) {
      local_40 = new_reg_base_value[ix_];
    }
    else {
      if ((0x34 < ix_) || ((&fixed_regs)[ix_] != '\0')) {
        pVVar3 = &reg_base_value->base;
        if (reg_base_value == (VEC_rtx_gc *)0x0) {
          pVVar3 = (VEC_rtx_base *)0x0;
        }
        uVar2 = VEC_rtx_base_length(pVVar3);
        if (ix_ < uVar2) {
          if (((new_reg_base_value != (rtx *)0x0) && (new_reg_base_value[ix_] != (rtx)0x0)) &&
             (*(int *)(*(long *)(*(long *)(df + 0xd8) + (ulong)ix_ * 8) + 8) == 1)) {
            return new_reg_base_value[ix_];
          }
          pVVar3 = &reg_base_value->base;
          if (reg_base_value == (VEC_rtx_gc *)0x0) {
            pVVar3 = (VEC_rtx_base *)0x0;
          }
          prVar4 = VEC_rtx_base_index(pVVar3,ix_);
          if (prVar4 != (rtx)0x0) {
            pVVar3 = &reg_base_value->base;
            if (reg_base_value == (VEC_rtx_gc *)0x0) {
              pVVar3 = (VEC_rtx_base *)0x0;
            }
            prVar4 = VEC_rtx_base_index(pVVar3,ix_);
            return prVar4;
          }
        }
      }
      local_40 = (rtx)0x0;
    }
    break;
  case 0x2b:
    if ((copying_arguments == '\0') ||
       ((*(long *)&local_40->u != hard_regno_nregs &&
        ((**(short **)&local_40->u != 0x31 ||
         (*(long *)(*(long *)&local_40->u + 8) != hard_regno_nregs)))))) {
      local_40 = (rtx)0x0;
    }
    else {
      local_40 = (const_rtx)gen_rtx_fmt_e_stat(6,0,local_40);
    }
    break;
  case 0x2c:
  case 0x2d:
    break;
  case 0x3d:
    if ((**(short **)&(local_40->u).field_0x8 == 0x1e) &&
       (*(long *)(*(long *)&(local_40->u).field_0x8 + 8) != 0)) {
      local_40 = find_base_value(*(rtx *)&local_40->u);
    }
    else {
      local_40 = (rtx)0x0;
    }
    break;
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x79:
switchD_00101854_caseD_4a:
    local_40 = find_base_value(*(rtx *)&local_40->u);
    break;
  case 0x62:
  case 99:
    cVar1 = target_default_pointer_address_modes_p();
    if (cVar1 != '\0') {
      prVar4 = find_base_value(*(rtx *)&local_40->u);
      if (prVar4 == (rtx)0x0) {
        return (rtx)0x0;
      }
      if (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)prVar4 * 4) != 9) {
        return prVar4;
      }
      prVar4 = (rtx)convert_memory_address_addr_space(0x10,prVar4,0);
      return prVar4;
    }
    goto LAB_00101d2c;
  case 100:
    cVar1 = target_default_pointer_address_modes_p();
    if ((cVar1 != '\0') && ((byte)ao_ref_init <= (byte)(&mode_size)[(byte)local_40->field_0x2]))
    goto switchD_00101854_caseD_4a;
LAB_00101d2c:
    local_40 = (rtx)0x0;
    break;
  case 0x7a:
    local_40 = find_base_value(*(rtx *)&(local_40->u).field_0x8);
  }
  return local_40;
}



void record_set(rtx dest,const_rtx set,void *data)

{
  rtx *pprVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  VEC_rtx_base *vec_;
  long lVar5;
  undefined8 uVar6;
  rtx prVar7;
  rtx prVar8;
  int n;
  uint regno;
  rtx other;
  rtx src;
  
  if (*(short *)dest != 0x25) {
    return;
  }
  uVar3 = rhs_regno(dest);
  vec_ = &reg_base_value->base;
  if (reg_base_value == (VEC_rtx_gc *)0x0) {
    vec_ = (VEC_rtx_base *)0x0;
  }
  uVar4 = VEC_rtx_base_length(vec_);
  if (uVar4 <= uVar3) {
    fancy_abort("alias.c",0x46b,&DAT_00106480);
  }
  if (uVar3 < 0x35) {
    n = (int)*(byte *)((long)&hard_regno_nregs + (ulong)(byte)dest->field_0x2 + (ulong)uVar3 * 0x57)
    ;
  }
  else {
    n = 1;
  }
  if (n != 1) {
    while (n = n + -1, -1 < n) {
      reg_seen[uVar3 + n] = '\x01';
      new_reg_base_value[uVar3 + n] = (rtx)0x0;
    }
    return;
  }
  if (set == (const_rtx)0x0) {
    if (reg_seen[uVar3] != '\0') {
      new_reg_base_value[uVar3] = (rtx)0x0;
      return;
    }
    reg_seen[uVar3] = '\x01';
    lVar5 = (long)unique_id;
    unique_id = unique_id + 1;
    uVar6 = gen_rtx_CONST_INT(0,lVar5);
    pprVar1 = new_reg_base_value + uVar3;
    prVar8 = (rtx)gen_rtx_fmt_e_stat(6,0x10,uVar6);
    *pprVar1 = prVar8;
    return;
  }
  if (*(short *)set == 0x19) {
    new_reg_base_value[uVar3] = (rtx)0x0;
    return;
  }
  prVar8 = *(rtx *)&(set->u).field_0x8;
  if ((new_reg_base_value[uVar3] == (rtx)0x0) ||
     (prVar7 = find_base_value(prVar8), prVar7 == new_reg_base_value[uVar3])) {
    if (((0x34 < uVar3) || ((&fixed_regs)[uVar3] == '\0')) &&
       ((reg_seen[uVar3] == '\0' && (new_reg_base_value[uVar3] == (rtx)0x0)))) {
      pprVar1 = new_reg_base_value + uVar3;
      prVar8 = find_base_value(prVar8);
      *pprVar1 = prVar8;
    }
    goto LAB_001020ef;
  }
  uVar2 = *(ushort *)prVar8;
  if (uVar2 == 0x7a) {
LAB_00101f7c:
    if ((dest != *(rtx *)&prVar8->u) && (dest != *(rtx *)&(prVar8->u).field_0x8)) {
      new_reg_base_value[uVar3] = (rtx)0x0;
    }
  }
  else {
    if (uVar2 < 0x7b) {
      if (uVar2 == 0x3d) {
        if ((dest != *(rtx *)&prVar8->u) || (**(short **)&(prVar8->u).field_0x8 != 0x1e)) {
          new_reg_base_value[uVar3] = (rtx)0x0;
        }
        goto LAB_001020ef;
      }
      if (uVar2 < 0x3e) {
        if (uVar2 == 0x31) {
          other = (rtx)0x0;
          if (dest == *(rtx *)&prVar8->u) {
            other = *(rtx *)&(prVar8->u).field_0x8;
          }
          else if (dest == *(rtx *)&(prVar8->u).field_0x8) {
            other = *(rtx *)&prVar8->u;
          }
          if ((other == (rtx)0x0) || (prVar8 = find_base_value(other), prVar8 != (rtx)0x0)) {
            new_reg_base_value[uVar3] = (rtx)0x0;
          }
          goto LAB_001020ef;
        }
        if (uVar2 == 0x32) goto LAB_00101f7c;
      }
    }
    new_reg_base_value[uVar3] = (rtx)0x0;
  }
LAB_001020ef:
  reg_seen[uVar3] = '\x01';
  return;
}



rtx get_reg_known_value(uint regno)

{
  rtx prVar1;
  
  if ((regno < 0x35) || (reg_known_value_size <= regno - 0x35)) {
    prVar1 = (rtx)0x0;
  }
  else {
    prVar1 = reg_known_value[regno - 0x35];
  }
  return prVar1;
}



void set_reg_known_value(uint regno,rtx val)

{
  if ((0x34 < regno) && (regno - 0x35 < reg_known_value_size)) {
    reg_known_value[regno - 0x35] = val;
  }
  return;
}



uchar get_reg_known_equiv_p(uint regno)

{
  uchar uVar1;
  
  if ((regno < 0x35) || (reg_known_value_size <= regno - 0x35)) {
    uVar1 = '\0';
  }
  else {
    uVar1 = reg_known_equiv_p[regno - 0x35];
  }
  return uVar1;
}



void set_reg_known_equiv_p(uint regno,uchar val)

{
  if ((0x34 < regno) && (regno - 0x35 < reg_known_value_size)) {
    reg_known_equiv_p[regno - 0x35] = val;
  }
  return;
}



rtx canon_rtx(rtx x)

{
  uint uVar1;
  rtx prVar2;
  rtx prVar3;
  rtx t;
  rtx x0;
  rtx x1;
  
  if ((*(short *)x == 0x25) && (uVar1 = rhs_regno(x), 0x34 < uVar1)) {
    uVar1 = rhs_regno(x);
    prVar2 = get_reg_known_value(uVar1);
    if (prVar2 == x) {
      return x;
    }
    if (prVar2 != (rtx)0x0) {
      prVar2 = canon_rtx(prVar2);
      return prVar2;
    }
  }
  if (*(short *)x == 0x31) {
    prVar2 = canon_rtx(*(rtx *)&x->u);
    prVar3 = canon_rtx(*(rtx *)&(x->u).field_0x8);
    if ((prVar2 != *(rtx *)&x->u) || (prVar3 != *(rtx *)&(x->u).field_0x8)) {
      if (*(short *)prVar2 == 0x1e) {
        x = (rtx)plus_constant(prVar3,*(undefined8 *)&prVar2->u);
      }
      else if (*(short *)prVar3 == 0x1e) {
        x = (rtx)plus_constant(prVar2,*(undefined8 *)&prVar3->u);
      }
      else {
        x = (rtx)gen_rtx_fmt_ee_stat(0x31,x->field_0x2,prVar2,prVar3);
      }
    }
  }
  else if (*(short *)x == 0x2b) {
    prVar2 = canon_rtx(*(rtx *)&x->u);
    x = (rtx)replace_equiv_address_nv(x,prVar2);
  }
  return x;
}



int rtx_equal_for_memref_p(const_rtx x,const_rtx y)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  rtx prVar6;
  rtx prVar7;
  rtx y_00;
  rtx x_00;
  int i;
  int j;
  rtx_code code;
  char *fmt;
  rtx xop0;
  rtx yop0;
  rtx yop1;
  
  if ((x == (const_rtx)0x0) && (y == (const_rtx)0x0)) {
    return 1;
  }
  if ((x == (const_rtx)0x0) || (y == (const_rtx)0x0)) {
    return 0;
  }
  if (x == y) {
    return 1;
  }
  uVar3 = (uint)*(ushort *)x;
  if (uVar3 != *(ushort *)y) {
    return 0;
  }
  if (x->field_0x2 != y->field_0x2) {
    return 0;
  }
  switch(uVar3) {
  default:
    if (uVar3 == 0x31) {
      iVar5 = rtx_equal_for_memref_p(*(const_rtx *)&x->u,*(const_rtx *)&y->u);
      if (((iVar5 == 0) ||
          (iVar5 = rtx_equal_for_memref_p
                             (*(const_rtx *)&(x->u).field_0x8,*(const_rtx *)&(y->u).field_0x8),
          iVar5 == 0)) &&
         ((iVar5 = rtx_equal_for_memref_p(*(const_rtx *)&x->u,*(const_rtx *)&(y->u).field_0x8),
          iVar5 == 0 ||
          (iVar5 = rtx_equal_for_memref_p(*(const_rtx *)&(x->u).field_0x8,*(const_rtx *)&y->u),
          iVar5 == 0)))) {
        return 0;
      }
      return 1;
    }
    if ((*(uint *)((long)&rtx_class + (long)(int)(uint)*(ushort *)x * 4) & 0xfffffffd) != 1) {
      if ((*(uint *)((long)&rtx_class + (long)(int)(uint)*(ushort *)x * 4) & 0xfffffffd) == 0) {
        prVar6 = canon_rtx(*(rtx *)&y->u);
        prVar7 = canon_rtx(*(rtx *)&x->u);
        iVar5 = rtx_equal_for_memref_p(prVar7,prVar6);
        if (iVar5 != 0) {
          prVar6 = canon_rtx(*(rtx *)&(y->u).field_0x8);
          prVar7 = canon_rtx(*(rtx *)&(x->u).field_0x8);
          iVar5 = rtx_equal_for_memref_p(prVar7,prVar6);
          if (iVar5 != 0) {
            return 1;
          }
        }
        return 0;
      }
      if (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)x * 4) == 4) {
        prVar6 = canon_rtx(*(rtx *)&y->u);
        prVar7 = canon_rtx(*(rtx *)&x->u);
        iVar5 = rtx_equal_for_memref_p(prVar7,prVar6);
        return iVar5;
      }
      lVar2 = *(long *)(&rtx_format + (long)(int)uVar3 * 8);
      i = (int)(byte)(&rtx_length)[(int)uVar3];
LAB_0010293d:
      while( true ) {
        i = i - 1;
        if (i < 0) {
          return 1;
        }
        cVar1 = *(char *)(lVar2 + i);
        if (cVar1 != 's') break;
        iVar5 = strcmp(*(char **)(&(x->u).field_0x0 + (long)i * 8),
                       *(char **)(&(y->u).field_0x0 + (long)i * 8));
        if (iVar5 != 0) {
          return 0;
        }
      }
      if (cVar1 < 't') {
        if (cVar1 == 'i') {
          if (*(int *)(&(x->u).field_0x0 + (long)i * 8) != *(int *)(&(y->u).field_0x0 + (long)i * 8)
             ) {
            return 0;
          }
          goto LAB_0010293d;
        }
        if (cVar1 < 'j') {
          if (cVar1 == 'e') {
            prVar6 = canon_rtx(*(rtx *)(&(y->u).field_0x0 + (long)i * 8));
            prVar7 = canon_rtx(*(rtx *)(&(x->u).field_0x0 + (long)i * 8));
            iVar5 = rtx_equal_for_memref_p(prVar7,prVar6);
            if (iVar5 == 0) {
              return 0;
            }
            goto LAB_0010293d;
          }
          if ('e' < cVar1) goto LAB_00102915;
          if (cVar1 == '0') goto LAB_0010293d;
          if (cVar1 == 'E') {
            if (**(int **)(&(x->u).field_0x0 + (long)i * 8) !=
                **(int **)(&(y->u).field_0x0 + (long)i * 8)) {
              return 0;
            }
            for (j = 0; j < **(int **)(&(x->u).field_0x0 + (long)i * 8); j = j + 1) {
              prVar6 = canon_rtx(*(rtx *)(*(long *)(&(y->u).field_0x0 + (long)i * 8) + 8 +
                                         (long)j * 8));
              prVar7 = canon_rtx(*(rtx *)(*(long *)(&(x->u).field_0x0 + (long)i * 8) + 8 +
                                         (long)j * 8));
              iVar5 = rtx_equal_for_memref_p(prVar7,prVar6);
              if (iVar5 == 0) {
                return 0;
              }
            }
            goto LAB_0010293d;
          }
        }
      }
LAB_00102915:
      fancy_abort("alias.c",0x5b6,&DAT_00106480);
      goto LAB_0010293d;
    }
    prVar6 = canon_rtx(*(rtx *)&x->u);
    prVar7 = canon_rtx(*(rtx *)&y->u);
    y_00 = canon_rtx(*(rtx *)&(y->u).field_0x8);
    iVar5 = rtx_equal_for_memref_p(prVar6,prVar7);
    if (iVar5 == 0) {
LAB_001025de:
      iVar5 = rtx_equal_for_memref_p(prVar6,y_00);
      if (iVar5 != 0) {
        prVar6 = canon_rtx(*(rtx *)&(x->u).field_0x8);
        iVar5 = rtx_equal_for_memref_p(prVar6,prVar7);
        if (iVar5 != 0) goto LAB_0010261b;
      }
      uVar3 = 0;
    }
    else {
      x_00 = canon_rtx(*(rtx *)&(x->u).field_0x8);
      iVar5 = rtx_equal_for_memref_p(x_00,y_00);
      if (iVar5 == 0) goto LAB_001025de;
LAB_0010261b:
      uVar3 = 1;
    }
    break;
  case 1:
  case 0x1e:
  case 0x1f:
  case 0x20:
    uVar3 = 0;
    break;
  case 0x25:
    uVar3 = rhs_regno(x);
    uVar4 = rhs_regno(y);
    uVar3 = (uint)(uVar3 == uVar4);
    break;
  case 0x2c:
    uVar3 = (uint)(*(long *)&x->u == *(long *)&y->u);
    break;
  case 0x2d:
    uVar3 = (uint)(*(long *)&x->u == *(long *)&y->u);
  }
  return uVar3;
}



// WARNING: Type propagation algorithm not settling

rtx find_base_term(rtx x)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  VEC_rtx_base *pVVar5;
  rtx prVar6;
  rtx prVar7;
  rtx prVar8;
  const_rtx local_60;
  elt_loc_list *l;
  rtx temp;
  rtx tmp1;
  rtx tmp2;
  rtx base;
  rtx base_1;
  cselib_val *val;
  
  local_60 = (const_rtx)ix86_find_base_term(x);
  uVar1 = *(ushort *)local_60;
  if (uVar1 < 0x33) {
    switch(uVar1) {
    case 1:
      if (*(long *)&local_60->u == 0) {
        return (rtx)0x0;
      }
      l = *(elt_loc_list **)(*(long *)&local_60->u + 0x10);
      while( true ) {
        if (l == (elt_loc_list *)0x0) {
          return (rtx)0x0;
        }
        prVar6 = find_base_term(l->loc);
        if (prVar6 != (rtx)0x0) break;
        l = l->next;
      }
      return prVar6;
    case 0x23:
      local_60 = *(const_rtx *)&local_60->u;
      if ((*(short *)local_60 != 0x31) && (*(short *)local_60 != 0x32)) {
        return (rtx)0x0;
      }
    case 0x31:
    case 0x32:
      prVar6 = *(rtx *)&local_60->u;
      prVar8 = *(rtx *)&(local_60->u).field_0x8;
      if ((prVar6 == pic_offset_table_rtx) &&
         (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)prVar8 * 4) == 9)) {
        prVar6 = find_base_term(prVar8);
        return prVar6;
      }
      if (((*(short *)prVar6 == 0x25) && ((prVar6->field_0x3 & 0x40) != 0)) &&
         (prVar7 = find_base_term(prVar6), prVar7 != (rtx)0x0)) {
        return prVar7;
      }
      if (((*(short *)prVar8 == 0x25) && ((prVar8->field_0x3 & 0x40) != 0)) &&
         (prVar7 = find_base_term(prVar8), prVar7 != (rtx)0x0)) {
        return prVar7;
      }
      prVar6 = find_base_term(prVar6);
      prVar8 = find_base_term(prVar8);
      if (prVar6 != (rtx)0x0) {
        if (*(short *)prVar6 == 0x2d) {
          return prVar6;
        }
        if (*(short *)prVar6 == 0x2c) {
          return prVar6;
        }
        if ((*(short *)prVar6 == 6) && (prVar6->field_0x2 != '\0')) {
          return prVar6;
        }
      }
      if (prVar8 != (rtx)0x0) {
        if (*(short *)prVar8 == 0x2d) {
          return prVar8;
        }
        if (*(short *)prVar8 == 0x2c) {
          return prVar8;
        }
        if ((*(short *)prVar8 == 6) && (prVar8->field_0x2 != '\0')) {
          return prVar8;
        }
      }
      return (rtx)0x0;
    case 0x25:
      uVar3 = rhs_regno(local_60);
      pVVar5 = &reg_base_value->base;
      if (reg_base_value == (VEC_rtx_gc *)0x0) {
        pVVar5 = (VEC_rtx_base *)0x0;
      }
      uVar4 = VEC_rtx_base_length(pVVar5);
      if (uVar4 <= uVar3) {
        return (rtx)0x0;
      }
      uVar3 = rhs_regno(local_60);
      pVVar5 = &reg_base_value->base;
      if (reg_base_value == (VEC_rtx_gc *)0x0) {
        pVVar5 = (VEC_rtx_base *)0x0;
      }
      prVar6 = VEC_rtx_base_index(pVVar5,uVar3);
      return prVar6;
    case 0x2c:
    case 0x2d:
      return local_60;
    }
  }
  else if ((uVar1 < 0x7b) && (0x3c < uVar1)) {
    switch(uVar1) {
    case 0x3d:
      if ((**(short **)&(local_60->u).field_0x8 == 0x1e) &&
         (*(long *)(*(long *)&(local_60->u).field_0x8 + 8) != 0)) {
        prVar6 = find_base_term(*(rtx *)&local_60->u);
        return prVar6;
      }
      return (rtx)0x0;
    case 0x62:
    case 99:
      cVar2 = target_default_pointer_address_modes_p();
      if (cVar2 == '\0') {
        return (rtx)0x0;
      }
      prVar6 = find_base_term(*(rtx *)&local_60->u);
      if (prVar6 == (rtx)0x0) {
        return (rtx)0x0;
      }
      if (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)prVar6 * 4) != 9) {
        return prVar6;
      }
      prVar6 = (rtx)convert_memory_address_addr_space(0x10,prVar6,0);
      return prVar6;
    case 100:
      cVar2 = target_default_pointer_address_modes_p();
      if (cVar2 == '\0') {
        return (rtx)0x0;
      }
      if ((byte)(&mode_size)[(byte)local_60->field_0x2] < (byte)ao_ref_init) {
        return (rtx)0x0;
      }
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x79:
      prVar6 = find_base_term(*(rtx *)&local_60->u);
      return prVar6;
    case 0x7a:
      prVar6 = find_base_term(*(rtx *)&(local_60->u).field_0x8);
      return prVar6;
    }
  }
  return (rtx)0x0;
}



int base_alias_check(rtx x,rtx y,machine_mode x_mode,machine_mode y_mode)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  rtx prVar4;
  rtx x_base;
  rtx y_base;
  rtx x_c;
  rtx y_c;
  
  x_base = find_base_term(x);
  y_base = find_base_term(y);
  if (x_base == (rtx)0x0) {
    if ((flag_expensive_optimizations == 0) || (prVar4 = canon_rtx(x), prVar4 == x)) {
      return 1;
    }
    x_base = find_base_term(prVar4);
    if (x_base == (rtx)0x0) {
      return 1;
    }
  }
  if (y_base == (rtx)0x0) {
    if ((flag_expensive_optimizations == 0) || (prVar4 = canon_rtx(y), prVar4 == y)) {
      return 1;
    }
    y_base = find_base_term(prVar4);
    if (y_base == (rtx)0x0) {
      return 1;
    }
  }
  iVar3 = rtx_equal_p(x_base,y_base);
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(short *)x == 0x3d) && (*(short *)y == 0x3d)) {
    return 1;
  }
  if (*(short *)x == 0x3d) {
    if (**(short **)&(x->u).field_0x8 != 0x1e) {
      return 1;
    }
    if ((&mode_inner)[y_mode] == '\0') {
      bVar1 = (&mode_size)[y_mode];
    }
    else {
      bVar1 = (&mode_size)[(byte)(&mode_inner)[y_mode]];
    }
    lVar2 = *(long *)(*(long *)&(x->u).field_0x8 + 8);
    if (SBORROW8((ulong)bVar1,-lVar2) != (long)((ulong)bVar1 + lVar2) < 0) {
      return 1;
    }
  }
  if (*(short *)y == 0x3d) {
    if (**(short **)&(y->u).field_0x8 == 0x1e) {
      if ((&mode_inner)[x_mode] == '\0') {
        bVar1 = (&mode_size)[x_mode];
      }
      else {
        bVar1 = (&mode_size)[(byte)(&mode_inner)[x_mode]];
      }
      lVar2 = *(long *)(*(long *)&(y->u).field_0x8 + 8);
      if (SBORROW8((ulong)bVar1,-lVar2) == (long)((ulong)bVar1 + lVar2) < 0) goto LAB_00102fdf;
    }
    iVar3 = 1;
  }
  else {
LAB_00102fdf:
    if ((*(short *)x_base == 6) || (*(short *)y_base == 6)) {
      if (((*(short *)x_base == 6) && (x_base->field_0x2 == '\x10')) ||
         ((*(short *)y_base == 6 && (y_base->field_0x2 == '\x10')))) {
        iVar3 = 0;
      }
      else if (flag_argument_noalias == 0) {
        iVar3 = 1;
      }
      else if (flag_argument_noalias < 2) {
        if ((x_base->field_0x2 == '\0') && (y_base->field_0x2 == '\0')) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}



rtx get_addr(rtx x)

{
  long lVar1;
  elt_loc_list *l;
  cselib_val *v;
  
  if ((*(short *)x == 1) && (lVar1 = *(long *)&x->u, lVar1 != 0)) {
    for (l = *(elt_loc_list **)(lVar1 + 0x10); l != (elt_loc_list *)0x0; l = l->next) {
      if (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)l->loc * 4) == 9) {
        return l->loc;
      }
    }
    for (l = *(elt_loc_list **)(lVar1 + 0x10); l != (elt_loc_list *)0x0; l = l->next) {
      if ((*(short *)l->loc != 0x25) && (*(short *)l->loc != 0x2b)) {
        return l->loc;
      }
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      x = *(rtx *)(*(long *)(lVar1 + 0x10) + 8);
    }
  }
  return x;
}



rtx addr_side_effect_eval(rtx addr,int size,int n_refs)

{
  ushort uVar1;
  undefined8 uVar2;
  rtx prVar3;
  rtx local_20;
  int offset;
  
  uVar1 = *(ushort *)addr;
  if (uVar1 == 0x4d) {
    offset = n_refs * size;
  }
  else {
    if (0x4d < uVar1) {
      return addr;
    }
    if (uVar1 == 0x4c) {
      offset = size * -n_refs;
    }
    else {
      if (0x4c < uVar1) {
        return addr;
      }
      if (uVar1 == 0x4a) {
        offset = size * ~n_refs;
      }
      else {
        if (uVar1 != 0x4b) {
          return addr;
        }
        offset = size * (n_refs + 1);
      }
    }
  }
  if (offset == 0) {
    local_20 = *(rtx *)&addr->u;
  }
  else {
    uVar2 = gen_rtx_CONST_INT(0,(long)offset);
    local_20 = (rtx)gen_rtx_fmt_ee_stat(0x31,addr->field_0x2,*(undefined8 *)&addr->u,uVar2);
  }
  prVar3 = canon_rtx(local_20);
  return prVar3;
}



int memrefs_conflict_p(int xsize,rtx x,int ysize,rtx y,long c)

{
  const_rtx x_00;
  const_rtx x_01;
  const_rtx y_00;
  const_rtx y_01;
  short *psVar1;
  long lVar2;
  int iVar3;
  rtx prVar4;
  rtx prVar5;
  rtx y_02;
  const_rtx local_80;
  const_rtx local_78;
  int local_70;
  int local_6c;
  rtx y0_1;
  rtx y1_1;
  rtx x0;
  rtx x1;
  rtx y0;
  rtx y1;
  rtx x1_1;
  rtx y1_2;
  rtx x0_1;
  rtx y0_2;
  
  local_78 = x;
  if (*(short *)x == 1) {
    local_78 = get_addr(x);
  }
  local_80 = y;
  if (*(short *)y == 1) {
    local_80 = get_addr(y);
  }
  if (*(short *)local_78 == 0x79) {
    local_78 = *(const_rtx *)&local_78->u;
  }
  else if (*(short *)local_78 == 0x7a) {
    local_78 = *(const_rtx *)&(local_78->u).field_0x8;
  }
  else {
    local_78 = addr_side_effect_eval(local_78,xsize,0);
  }
  if (*(short *)local_80 == 0x79) {
    local_80 = *(const_rtx *)&local_80->u;
  }
  else if (*(short *)local_80 == 0x7a) {
    local_80 = *(const_rtx *)&(local_80->u).field_0x8;
  }
  else {
    local_80 = addr_side_effect_eval(local_80,ysize,0);
  }
  iVar3 = rtx_equal_for_memref_p(local_78,local_80);
  if (iVar3 != 0) {
    if ((xsize < 1) || (ysize < 1)) {
      return 1;
    }
    if ((-1 < c) && (c < xsize)) {
      return 1;
    }
    if ((c < 0) && (0 < c + ysize)) {
      return 1;
    }
    return 0;
  }
  if (*(short *)local_78 == 0x31) {
    x_00 = *(const_rtx *)&local_78->u;
    x_01 = *(const_rtx *)&(local_78->u).field_0x8;
    if (*(short *)local_80 == 0x31) {
      y_00 = *(const_rtx *)&local_80->u;
      y_01 = *(const_rtx *)&(local_80->u).field_0x8;
      iVar3 = rtx_equal_for_memref_p(x_01,y_01);
      if (iVar3 != 0) {
        iVar3 = memrefs_conflict_p(xsize,x_00,ysize,y_00,c);
        return iVar3;
      }
      iVar3 = rtx_equal_for_memref_p(x_00,y_00);
      if (iVar3 != 0) {
        iVar3 = memrefs_conflict_p(xsize,x_01,ysize,y_01,c);
        return iVar3;
      }
      if (*(short *)x_01 != 0x1e) {
        if (*(short *)y_01 == 0x1e) {
          iVar3 = memrefs_conflict_p(xsize,local_78,ysize,y_00,*(long *)&y_01->u + c);
          return iVar3;
        }
        return -1;
      }
      if (*(short *)y_01 == 0x1e) {
        iVar3 = memrefs_conflict_p(xsize,x_00,ysize,y_00,(c - *(long *)&x_01->u) + *(long *)&y_01->u
                                  );
        return iVar3;
      }
      iVar3 = memrefs_conflict_p(xsize,x_00,ysize,local_80,c - *(long *)&x_01->u);
      return iVar3;
    }
    if (*(short *)x_01 == 0x1e) {
      iVar3 = memrefs_conflict_p(xsize,x_00,ysize,local_80,c - *(long *)&x_01->u);
      return iVar3;
    }
  }
  else if (*(short *)local_80 == 0x31) {
    psVar1 = *(short **)&(local_80->u).field_0x8;
    if (*psVar1 == 0x1e) {
      iVar3 = memrefs_conflict_p(xsize,local_78,ysize,*(rtx *)&local_80->u,*(long *)(psVar1 + 4) + c
                                );
      return iVar3;
    }
    return -1;
  }
  if ((*(short *)local_78 == *(short *)local_80) && (*(short *)local_78 == 0x34)) {
    prVar4 = canon_rtx(*(rtx *)&(local_78->u).field_0x8);
    prVar5 = canon_rtx(*(rtx *)&(local_80->u).field_0x8);
    iVar3 = rtx_equal_for_memref_p(prVar4,prVar5);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      prVar5 = canon_rtx(*(rtx *)&local_78->u);
      y_02 = canon_rtx(*(rtx *)&local_80->u);
      iVar3 = rtx_equal_for_memref_p(prVar5,y_02);
      if (iVar3 == 0) {
        if (*(short *)prVar4 == 0x1e) {
          iVar3 = memrefs_conflict_p((int)((long)xsize / *(long *)&prVar4->u),prVar5,
                                     (int)((long)ysize / *(long *)&prVar4->u),y_02,
                                     c / *(long *)&prVar4->u);
        }
        else {
          iVar3 = -1;
        }
      }
      else if ((((xsize == 0) || (ysize == 0)) || ((-1 < c && (c < xsize)))) ||
              ((c < 0 && (0 < c + ysize)))) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
    }
  }
  else if ((*(short *)local_78 == 0x3d) && (**(short **)&(local_78->u).field_0x8 == 0x1e)) {
    if ((*(short *)local_80 == 0x3d) ||
       (lVar2 = *(long *)(*(long *)&(local_78->u).field_0x8 + 8), local_6c = xsize,
       SBORROW8((long)ysize,-lVar2) != ysize + lVar2 < 0)) {
      local_6c = -1;
    }
    prVar4 = canon_rtx(*(rtx *)&local_78->u);
    iVar3 = memrefs_conflict_p(local_6c,prVar4,ysize,local_80,c);
  }
  else if ((*(short *)local_80 == 0x3d) && (**(short **)&(local_80->u).field_0x8 == 0x1e)) {
    if ((*(short *)local_78 == 0x3d) ||
       (lVar2 = *(long *)(*(long *)&(local_80->u).field_0x8 + 8), local_70 = ysize,
       SBORROW8((long)xsize,-lVar2) != xsize + lVar2 < 0)) {
      local_70 = -1;
    }
    prVar4 = canon_rtx(*(rtx *)&local_80->u);
    iVar3 = memrefs_conflict_p(xsize,local_78,local_70,prVar4,c);
  }
  else if (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)local_78 * 4) == 9) {
    if ((*(short *)local_78 == 0x1e) && (*(short *)local_80 == 0x1e)) {
      lVar2 = c + (*(long *)&local_80->u - *(long *)&local_78->u);
      if (((xsize < 1) || (ysize < 1)) ||
         (((-1 < lVar2 && (lVar2 < xsize)) || ((lVar2 < 0 && (0 < lVar2 + ysize)))))) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
    }
    else if (*(short *)local_78 == 0x23) {
      if (*(short *)local_80 == 0x23) {
        prVar4 = canon_rtx(*(rtx *)&local_80->u);
        prVar5 = canon_rtx(*(rtx *)&local_78->u);
        iVar3 = memrefs_conflict_p(xsize,prVar5,ysize,prVar4,c);
      }
      else {
        prVar4 = canon_rtx(*(rtx *)&local_78->u);
        iVar3 = memrefs_conflict_p(xsize,prVar4,ysize,local_80,c);
      }
    }
    else if (*(short *)local_80 == 0x23) {
      prVar4 = canon_rtx(*(rtx *)&local_80->u);
      iVar3 = memrefs_conflict_p(xsize,local_78,ysize,prVar4,c);
    }
    else if (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)local_80 * 4) == 9) {
      if (((xsize < 1) || (ysize < 1)) ||
         ((iVar3 = rtx_equal_for_memref_p(local_78,local_80), iVar3 != 0 &&
          (((-1 < c && (c < xsize)) || ((c < 0 && (0 < c + ysize)))))))) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = -1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



int read_dependence(const_rtx mem,const_rtx x)

{
  int iVar1;
  
  if (((x->field_0x3 & 8) == 0) || ((mem->field_0x3 & 8) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



const_rtx fixed_scalar_and_varying_struct_p
                    (const_rtx mem1,const_rtx mem2,rtx mem1_addr,rtx mem2_addr,
                    anon_subr_uchar_const_rtx_uchar *varies_p)

{
  uchar uVar1;
  
  if (flag_strict_aliasing == 0) {
    mem1 = (const_rtx)0x0;
  }
  else if (((((*(long *)&(mem2->u).field_0x8 == 0) ||
             (*(int *)(*(long *)&(mem2->u).field_0x8 + 0x18) == 0)) ||
            ((mem1->field_0x3 & 0x80) == 0)) ||
           ((((mem2->field_0x3 & 0x10) == 0 ||
             (uVar1 = (*varies_p)(mem1_addr,'\x01'), uVar1 != '\0')) ||
            (uVar1 = (*varies_p)(mem2_addr,'\x01'), uVar1 == '\0')))) &&
          (((*(long *)&(mem1->u).field_0x8 == 0 ||
            (*(int *)(*(long *)&(mem1->u).field_0x8 + 0x18) == 0)) ||
           (((mem1->field_0x3 & 0x10) == 0 ||
            ((((mem2->field_0x3 & 0x80) == 0 ||
              (uVar1 = (*varies_p)(mem1_addr,'\x01'), uVar1 == '\0')) ||
             (uVar1 = (*varies_p)(mem2_addr,'\x01'), mem1 = mem2, uVar1 != '\0')))))))) {
    mem1 = (const_rtx)0x0;
  }
  return mem1;
}



int aliases_everything_p(const_rtx mem)

{
  return (int)(**(short **)&mem->u == 0x3d);
}



uchar nonoverlapping_component_refs_p(const_tree x,const_tree y)

{
  short *psVar1;
  const_tree ptVar2;
  const_tree local_48;
  const_tree local_40;
  const_tree orig_y;
  const_tree fieldx;
  const_tree typex;
  const_tree fieldy;
  const_tree typey;
  
  local_40 = x;
  local_48 = y;
  if (flag_strict_aliasing != 0) {
LAB_00103c20:
    do {
      ptVar2 = local_48;
      psVar1 = *(short **)(*(long *)(*(long *)&local_40->field_0x30 + 0x28) + 0x80);
      do {
        if (psVar1 == *(short **)(*(long *)(*(long *)&local_48->field_0x30 + 0x28) + 0x80)) {
          if ((*psVar1 == 0x10) &&
             (*(long *)&local_40->field_0x30 != *(long *)&local_48->field_0x30)) {
            return '\x01';
          }
          local_40 = *(const_tree *)&local_40->field_0x28;
          local_48 = *(const_tree *)&local_48->field_0x28;
          if ((((local_40 == (const_tree)0x0) || (local_48 == (const_tree)0x0)) ||
              (*(short *)local_40 != 0x29)) || (*(short *)local_48 != 0x29)) {
            return '\0';
          }
          goto LAB_00103c20;
        }
        local_48 = *(const_tree *)&local_48->field_0x28;
      } while ((local_48 != (const_tree)0x0) && (*(short *)local_48 == 0x29));
      local_40 = *(const_tree *)&local_40->field_0x28;
    } while ((local_40 != (const_tree)0x0) && (local_48 = ptVar2, *(short *)local_40 == 0x29));
  }
  return '\0';
}



tree decl_for_component_ref(tree x)

{
  tree local_10;
  
  local_10 = x;
  do {
    local_10 = *(tree *)&local_10->field_0x28;
    if (local_10 == (tree)0x0) break;
  } while (*(ushort *)local_10 == 0x29);
  if ((local_10 == (tree)0x0) ||
     (*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)local_10 * 4) != 3)) {
    local_10 = (tree)0x0;
  }
  return local_10;
}



rtx adjust_offset_for_component_ref(tree x,rtx offset_1)

{
  int iVar1;
  rtx prVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  tree local_40;
  long ioffset;
  tree offset;
  tree field;
  
  if (offset_1 == (rtx)0x0) {
    prVar2 = (rtx)0x0;
  }
  else {
    ioffset = *(long *)&offset_1->u;
    local_40 = x;
    do {
      uVar3 = component_ref_field_offset(local_40);
      lVar5 = *(long *)&local_40->field_0x30;
      iVar1 = host_integerp(uVar3,1);
      if (iVar1 == 0) {
        return (rtx)0x0;
      }
      lVar4 = tree_low_cst(uVar3,1);
      lVar5 = tree_low_cst(*(undefined8 *)(lVar5 + 0x88),1);
      if (lVar5 < 0) {
        lVar5 = lVar5 + 7;
      }
      ioffset = ioffset + (lVar5 >> 3) + lVar4;
      local_40 = *(tree *)&local_40->field_0x28;
    } while ((local_40 != (tree)0x0) && (*(short *)local_40 == 0x29));
    prVar2 = (rtx)gen_rtx_CONST_INT(0,ioffset);
  }
  return prVar2;
}



int nonoverlapping_memrefs_p(const_rtx x,const_rtx y)

{
  uchar uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  const_tree ptVar6;
  tree ptVar7;
  rtx prVar8;
  rtx prVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  tree exprx;
  tree expry;
  rtx basex;
  rtx basey;
  rtx moffsetx;
  rtx moffsety;
  long offsetx;
  long offsety;
  long sizex;
  long sizey;
  tree field;
  tree fieldcontext;
  tree t;
  tree field_1;
  tree fieldcontext_1;
  tree t_1;
  rtx rtlx;
  rtx rtly;
  long tem;
  
  if (*(long *)&(x->u).field_0x8 == 0) {
    exprx = (const_tree)0x0;
  }
  else {
    exprx = **(const_tree **)&(x->u).field_0x8;
  }
  if (*(long *)&(y->u).field_0x8 == 0) {
    expry = (tree)0x0;
  }
  else {
    expry = **(tree **)&(y->u).field_0x8;
  }
  offsetx = 0;
  offsety = 0;
  if ((exprx == (const_tree)0x0) || (expry == (tree)0x0)) {
    iVar4 = 0;
  }
  else {
    ptVar6 = (const_tree)get_spill_slot_decl(0);
    if (((exprx == ptVar6) &&
        ((*(long *)&(x->u).field_0x8 == 0 || (*(long *)(*(long *)&(x->u).field_0x8 + 8) == 0)))) ||
       ((ptVar7 = (tree)get_spill_slot_decl(0), expry == ptVar7 &&
        ((*(long *)&(y->u).field_0x8 == 0 || (*(long *)(*(long *)&(y->u).field_0x8 + 8) == 0)))))) {
      iVar4 = 0;
    }
    else if (((*(short *)exprx == 0x29) && (*(short *)expry == 0x29)) &&
            (uVar1 = nonoverlapping_component_refs_p(exprx,expry), uVar1 != '\0')) {
      iVar4 = 1;
    }
    else {
      if (*(long *)&(x->u).field_0x8 == 0) {
        moffsetx = (rtx)0x0;
      }
      else {
        moffsetx = *(rtx *)(*(long *)&(x->u).field_0x8 + 8);
      }
      if (*(short *)exprx == 0x29) {
        if ((*(short *)expry == 0x20) &&
           (((**(short **)&expry->field_0x10 == 10 || (**(short **)&expry->field_0x10 == 0xc)) &&
            (cVar2 = ipa_type_escape_field_does_not_clobber_p
                               (*(undefined8 *)(*(long *)&exprx->field_0x30 + 0x28),
                                *(undefined8 *)(*(long *)&exprx->field_0x30 + 0x10)), cVar2 != '\0')
            ))) {
          return 1;
        }
        ptVar7 = decl_for_component_ref(exprx);
        if (ptVar7 == (tree)0x0) {
          return 0;
        }
        moffsetx = adjust_offset_for_component_ref(exprx,moffsetx);
        exprx = ptVar7;
      }
      else if ((((*(short *)exprx == 0x2f) || (*(short *)exprx == 0x30)) ||
               (*(short *)exprx == 0x31)) &&
              ((exprx = *(tree *)&exprx->field_0x28, flag_argument_noalias < 2 ||
               (*(short *)exprx != 0x22)))) {
        return 0;
      }
      if (*(long *)&(y->u).field_0x8 == 0) {
        moffsety = (rtx)0x0;
      }
      else {
        moffsety = *(rtx *)(*(long *)&(y->u).field_0x8 + 8);
      }
      if (*(short *)expry == 0x29) {
        if ((*(short *)exprx == 0x20) &&
           (((**(short **)&exprx->field_0x10 == 10 || (**(short **)&exprx->field_0x10 == 0xc)) &&
            (cVar2 = ipa_type_escape_field_does_not_clobber_p
                               (*(undefined8 *)(*(long *)&expry->field_0x30 + 0x28),
                                *(undefined8 *)(*(long *)&expry->field_0x30 + 0x10)), cVar2 != '\0')
            ))) {
          return 1;
        }
        ptVar7 = decl_for_component_ref(expry);
        if (ptVar7 == (tree)0x0) {
          return 0;
        }
        moffsety = adjust_offset_for_component_ref(expry,moffsety);
        expry = ptVar7;
      }
      else if ((((*(short *)expry == 0x2f) || (*(short *)expry == 0x30)) ||
               (*(short *)expry == 0x31)) &&
              ((expry = *(tree *)&expry->field_0x28, flag_argument_noalias < 2 ||
               (*(short *)expry != 0x22)))) {
        return 0;
      }
      if ((*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)exprx * 4) == 3) &&
         (*(int *)(&tree_code_type + (long)(int)(uint)*(ushort *)expry * 4) == 3)) {
        if ((*(short *)exprx == 0x21) || (*(short *)expry == 0x21)) {
          iVar4 = 1;
        }
        else {
          if (*(long *)&exprx->field_0x70 == 0) {
            make_decl_rtl(exprx);
            prVar8 = *(rtx *)&exprx->field_0x70;
          }
          else {
            prVar8 = *(rtx *)&exprx->field_0x70;
          }
          if (*(long *)&expry->field_0x70 == 0) {
            make_decl_rtl(expry);
            prVar9 = *(rtx *)&expry->field_0x70;
          }
          else {
            prVar9 = *(rtx *)&expry->field_0x70;
          }
          if (((*(short *)prVar8 == 0x2b) && (*(short *)prVar9 == 0x2b)) ||
             (iVar4 = rtx_equal_p(prVar8,prVar9), iVar4 != 0)) {
            if ((*(short *)prVar8 == 0x2b) && (*(short *)prVar9 == 0x2b)) {
              if (*(long *)&(prVar8->u).field_0x8 == 0) {
                cVar2 = '\0';
              }
              else {
                cVar2 = *(char *)(*(long *)&(prVar8->u).field_0x8 + 0x20);
              }
              if (*(long *)&(prVar9->u).field_0x8 == 0) {
                cVar3 = '\0';
              }
              else {
                cVar3 = *(char *)(*(long *)&(prVar9->u).field_0x8 + 0x20);
              }
              if (cVar2 != cVar3) {
                return 0;
              }
            }
            basex = prVar8;
            if (*(short *)prVar8 == 0x2b) {
              basex = *(rtx *)&prVar8->u;
            }
            if ((*(short *)basex == 0x31) && (**(short **)&(basex->u).field_0x8 == 0x1e)) {
              offsetx = *(long *)(*(long *)&(basex->u).field_0x8 + 8);
              basex = *(rtx *)&basex->u;
            }
            basey = prVar9;
            if (*(short *)prVar9 == 0x2b) {
              basey = *(rtx *)&prVar9->u;
            }
            if ((*(short *)basey == 0x31) && (**(short **)&(basey->u).field_0x8 == 0x1e)) {
              offsety = *(long *)(*(long *)&(basey->u).field_0x8 + 8);
              basey = *(rtx *)&basey->u;
            }
            iVar4 = rtx_equal_p(basex,basey);
            if (iVar4 == 0) {
              if ((((*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)basex * 4) == 9) &&
                   (*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)basey * 4) == 9)) ||
                  (((*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)basex * 4) == 9 &&
                    (*(short *)basey == 0x25)) &&
                   (((((uVar5 = rhs_regno(basey), uVar5 == 7 ||
                       (uVar5 = rhs_regno(basey), uVar5 == 0x14)) ||
                      (uVar5 = rhs_regno(basey), uVar5 == 6)) ||
                     (uVar5 = rhs_regno(basey), uVar5 == 0x10)) ||
                    ((uVar5 = rhs_regno(basey), 0x34 < uVar5 &&
                     (uVar5 = rhs_regno(basey), uVar5 < 0x3a)))))))) ||
                 (((*(int *)((long)&rtx_class + (long)(int)(uint)*(ushort *)basey * 4) == 9 &&
                   (*(short *)basex == 0x25)) &&
                  ((((uVar5 = rhs_regno(basex), uVar5 == 7 ||
                     (uVar5 = rhs_regno(basex), uVar5 == 0x14)) ||
                    ((uVar5 = rhs_regno(basex), uVar5 == 6 ||
                     (uVar5 = rhs_regno(basex), uVar5 == 0x10)))) ||
                   ((uVar5 = rhs_regno(basex), 0x34 < uVar5 &&
                    (uVar5 = rhs_regno(basex), uVar5 < 0x3a)))))))) {
                iVar4 = 1;
              }
              else {
                iVar4 = 0;
              }
            }
            else {
              if (*(short *)prVar8 == 0x2b) {
                if (*(long *)&(prVar8->u).field_0x8 == 0) {
                  if ((prVar8->field_0x2 == '\x01') ||
                     (lVar10 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)prVar8->field_0x2]),
                     lVar10 == 0)) {
                    bVar12 = false;
                  }
                  else {
                    bVar12 = true;
                  }
                }
                else {
                  bVar12 = *(long *)(*(long *)&(prVar8->u).field_0x8 + 0x10) != 0;
                }
                if (bVar12) {
                  if (*(long *)&(prVar8->u).field_0x8 == 0) {
                    if (prVar8->field_0x2 == '\x01') {
                      lVar10 = 0;
                    }
                    else {
                      lVar10 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)prVar8->field_0x2]);
                    }
                  }
                  else {
                    lVar10 = *(long *)(*(long *)&(prVar8->u).field_0x8 + 0x10);
                  }
                  sizex = *(ulong *)(lVar10 + 8);
                }
                else {
                  sizex = 0xffffffffffffffff;
                }
              }
              else {
                sizex = (long)(byte)(&mode_size)[(byte)prVar8->field_0x2];
              }
              if (*(short *)prVar9 == 0x2b) {
                if (*(long *)&(prVar9->u).field_0x8 == 0) {
                  if ((prVar9->field_0x2 == '\x01') ||
                     (lVar10 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)prVar9->field_0x2]),
                     lVar10 == 0)) {
                    bVar12 = false;
                  }
                  else {
                    bVar12 = true;
                  }
                }
                else {
                  bVar12 = *(long *)(*(long *)&(prVar9->u).field_0x8 + 0x10) != 0;
                }
                if (bVar12) {
                  if (*(long *)&(prVar9->u).field_0x8 == 0) {
                    if (prVar9->field_0x2 == '\x01') {
                      lVar10 = 0;
                    }
                    else {
                      lVar10 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)prVar9->field_0x2]);
                    }
                  }
                  else {
                    lVar10 = *(long *)(*(long *)&(prVar9->u).field_0x8 + 0x10);
                  }
                  sizey = *(ulong *)(lVar10 + 8);
                }
                else {
                  sizey = 0xffffffffffffffff;
                }
              }
              else {
                sizey = (long)(byte)(&mode_size)[(byte)prVar9->field_0x2];
              }
              if (moffsetx != (rtx)0x0) {
                offsetx = offsetx + *(long *)&moffsetx->u;
                sizex = sizex - *(long *)&moffsetx->u;
              }
              lVar10 = offsetx;
              if (moffsety != (rtx)0x0) {
                offsety = offsety + *(long *)&moffsety->u;
                sizey = sizey - *(long *)&moffsety->u;
              }
              if (*(long *)&(x->u).field_0x8 == 0) {
                if ((x->field_0x2 == '\x01') ||
                   (lVar11 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)x->field_0x2]), lVar11 == 0)) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
              }
              else {
                bVar12 = *(long *)(*(long *)&(x->u).field_0x8 + 0x10) != 0;
              }
              if ((bVar12) && (moffsetx != (rtx)0x0)) {
                if (*(long *)&(x->u).field_0x8 == 0) {
                  if (x->field_0x2 == '\x01') {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)x->field_0x2]);
                  }
                }
                else {
                  lVar11 = *(long *)(*(long *)&(x->u).field_0x8 + 0x10);
                }
                sizex = *(long *)(lVar11 + 8);
              }
              if (*(long *)&(y->u).field_0x8 == 0) {
                if ((y->field_0x2 == '\x01') ||
                   (lVar11 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)y->field_0x2]), lVar11 == 0)) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
              }
              else {
                bVar12 = *(long *)(*(long *)&(y->u).field_0x8 + 0x10) != 0;
              }
              if ((bVar12) && (moffsety != (rtx)0x0)) {
                if (*(long *)&(y->u).field_0x8 == 0) {
                  if (y->field_0x2 == '\x01') {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = gen_rtx_CONST_INT(0,(&mode_size)[(byte)y->field_0x2]);
                  }
                }
                else {
                  lVar11 = *(long *)(*(long *)&(y->u).field_0x8 + 0x10);
                }
                sizey = *(long *)(lVar11 + 8);
              }
              if (offsety < offsetx) {
                offsetx = offsety;
                offsety = lVar10;
                sizex = sizey;
              }
              if ((sizex < 0) || (offsety < sizex + offsetx)) {
                iVar4 = 0;
              }
              else {
                iVar4 = 1;
              }
            }
          }
          else {
            iVar4 = 1;
          }
        }
      }
      else {
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}



int true_dependence(const_rtx mem,machine_mode mem_mode,const_rtx x,
                   anon_subr_uchar_const_rtx_uchar *varies)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  rtx prVar5;
  rtx prVar6;
  rtx prVar7;
  const_rtx prVar8;
  char cVar9;
  machine_mode local_34;
  int ret;
  rtx x_addr;
  rtx mem_addr;
  rtx base;
  
  if (((x->field_0x3 & 8) == 0) || ((mem->field_0x3 & 8) == 0)) {
    if ((x->field_0x2 == '\x01') && (**(short **)&x->u == 0x26)) {
      uVar4 = 1;
    }
    else if ((mem->field_0x2 == '\x01') && (**(short **)&mem->u == 0x26)) {
      uVar4 = 1;
    }
    else if (((*(long *)&(x->u).field_0x8 == 0) ||
             (*(int *)(*(long *)&(x->u).field_0x8 + 0x18) != -1)) &&
            ((*(long *)&(mem->u).field_0x8 == 0 ||
             (*(int *)(*(long *)&(mem->u).field_0x8 + 0x18) != -1)))) {
      if ((x->field_0x3 & 4) == 0) {
        if (*(long *)&(mem->u).field_0x8 == 0) {
          cVar9 = '\0';
        }
        else {
          cVar9 = *(char *)(*(long *)&(mem->u).field_0x8 + 0x20);
        }
        if (*(long *)&(x->u).field_0x8 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = *(char *)(*(long *)&(x->u).field_0x8 + 0x20);
        }
        if (cVar9 == cVar1) {
          local_34 = mem_mode;
          if (mem_mode == MAX_MODE_PARTIAL_INT) {
            local_34 = (machine_mode)(byte)mem->field_0x2;
          }
          prVar5 = get_addr(*(rtx *)&x->u);
          prVar6 = get_addr(*(rtx *)&mem->u);
          prVar7 = find_base_term(prVar5);
          if ((prVar7 == (rtx)0x0) ||
             ((*(short *)prVar7 != 0x2c &&
              ((*(short *)prVar7 != 0x2d || ((prVar7->field_0x3 & 4) == 0)))))) {
            iVar3 = base_alias_check(prVar5,prVar6,(uint)(byte)x->field_0x2,local_34);
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              prVar5 = canon_rtx(prVar5);
              prVar6 = canon_rtx(prVar6);
              uVar4 = memrefs_conflict_p((uint)(byte)(&mode_size)[local_34],prVar6,
                                         (uint)(byte)(&mode_size)[(byte)x->field_0x2],prVar5,0);
              if (uVar4 == 0xffffffff) {
                iVar3 = mems_in_disjoint_alias_sets_p(x,mem);
                if (iVar3 == 0) {
                  iVar3 = nonoverlapping_memrefs_p(mem,x);
                  if (iVar3 == 0) {
                    iVar3 = aliases_everything_p(x);
                    if (iVar3 == 0) {
                      if ((local_34 == MIN_MODE_INT) || (*(short *)prVar6 == 0x3d)) {
                        uVar4 = 1;
                      }
                      else if ((local_34 == BLKmode) || (x->field_0x2 == '\x01')) {
                        uVar4 = 1;
                      }
                      else {
                        prVar8 = fixed_scalar_and_varying_struct_p(mem,x,prVar6,prVar5,varies);
                        if (prVar8 == (const_rtx)0x0) {
                          bVar2 = rtx_refs_may_alias_p(x,mem,'\x01');
                          uVar4 = (uint)bVar2;
                        }
                        else {
                          uVar4 = 0;
                        }
                      }
                    }
                    else {
                      uVar4 = 1;
                    }
                  }
                  else {
                    uVar4 = 0;
                  }
                }
                else {
                  uVar4 = 0;
                }
              }
            }
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



int canon_true_dependence
              (const_rtx mem,machine_mode mem_mode,rtx mem_addr,const_rtx x,rtx x_addr,
              anon_subr_uchar_const_rtx_uchar *varies)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  rtx y;
  const_rtx prVar5;
  char cVar6;
  rtx local_40;
  int ret;
  
  if (((x->field_0x3 & 8) == 0) || ((mem->field_0x3 & 8) == 0)) {
    if ((x->field_0x2 == '\x01') && (**(short **)&x->u == 0x26)) {
      uVar4 = 1;
    }
    else if ((mem->field_0x2 == '\x01') && (**(short **)&mem->u == 0x26)) {
      uVar4 = 1;
    }
    else if (((*(long *)&(x->u).field_0x8 == 0) ||
             (*(int *)(*(long *)&(x->u).field_0x8 + 0x18) != -1)) &&
            ((*(long *)&(mem->u).field_0x8 == 0 ||
             (*(int *)(*(long *)&(mem->u).field_0x8 + 0x18) != -1)))) {
      if ((x->field_0x3 & 4) == 0) {
        if (*(long *)&(mem->u).field_0x8 == 0) {
          cVar6 = '\0';
        }
        else {
          cVar6 = *(char *)(*(long *)&(mem->u).field_0x8 + 0x20);
        }
        if (*(long *)&(x->u).field_0x8 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = *(char *)(*(long *)&(x->u).field_0x8 + 0x20);
        }
        if (cVar6 == cVar1) {
          local_40 = x_addr;
          if (x_addr == (rtx)0x0) {
            local_40 = get_addr(*(rtx *)&x->u);
          }
          iVar3 = base_alias_check(local_40,mem_addr,(uint)(byte)x->field_0x2,mem_mode);
          if (iVar3 == 0) {
            uVar4 = 0;
          }
          else {
            y = canon_rtx(local_40);
            uVar4 = memrefs_conflict_p((uint)(byte)(&mode_size)[mem_mode],mem_addr,
                                       (uint)(byte)(&mode_size)[(byte)x->field_0x2],y,0);
            if (uVar4 == 0xffffffff) {
              iVar3 = mems_in_disjoint_alias_sets_p(x,mem);
              if (iVar3 == 0) {
                iVar3 = nonoverlapping_memrefs_p(x,mem);
                if (iVar3 == 0) {
                  iVar3 = aliases_everything_p(x);
                  if (iVar3 == 0) {
                    if ((mem_mode == MIN_MODE_INT) || (*(short *)mem_addr == 0x3d)) {
                      uVar4 = 1;
                    }
                    else if ((mem_mode == BLKmode) || (x->field_0x2 == '\x01')) {
                      uVar4 = 1;
                    }
                    else {
                      prVar5 = fixed_scalar_and_varying_struct_p(mem,x,mem_addr,y,varies);
                      if (prVar5 == (const_rtx)0x0) {
                        bVar2 = rtx_refs_may_alias_p(x,mem,'\x01');
                        uVar4 = (uint)bVar2;
                      }
                      else {
                        uVar4 = 0;
                      }
                    }
                  }
                  else {
                    uVar4 = 1;
                  }
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = 0;
              }
            }
          }
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



int write_dependence_p(const_rtx mem,const_rtx x,int writep)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  rtx prVar5;
  rtx prVar6;
  rtx prVar7;
  const_rtx prVar8;
  char cVar9;
  int ret;
  rtx x_addr;
  rtx mem_addr;
  rtx base;
  const_rtx fixed_scalar;
  
  if (((x->field_0x3 & 8) == 0) || ((mem->field_0x3 & 8) == 0)) {
    if ((x->field_0x2 == '\x01') && (**(short **)&x->u == 0x26)) {
      uVar4 = 1;
    }
    else if ((mem->field_0x2 == '\x01') && (**(short **)&mem->u == 0x26)) {
      uVar4 = 1;
    }
    else if (((*(long *)&(x->u).field_0x8 == 0) ||
             (*(int *)(*(long *)&(x->u).field_0x8 + 0x18) != -1)) &&
            ((*(long *)&(mem->u).field_0x8 == 0 ||
             (*(int *)(*(long *)&(mem->u).field_0x8 + 0x18) != -1)))) {
      if ((writep == 0) && ((mem->field_0x3 & 4) != 0)) {
        uVar4 = 0;
      }
      else {
        if (*(long *)&(mem->u).field_0x8 == 0) {
          cVar9 = '\0';
        }
        else {
          cVar9 = *(char *)(*(long *)&(mem->u).field_0x8 + 0x20);
        }
        if (*(long *)&(x->u).field_0x8 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = *(char *)(*(long *)&(x->u).field_0x8 + 0x20);
        }
        if (cVar9 == cVar1) {
          prVar5 = get_addr(*(rtx *)&x->u);
          prVar6 = get_addr(*(rtx *)&mem->u);
          if (((writep == 0) && (prVar7 = find_base_term(prVar6), prVar7 != (rtx)0x0)) &&
             ((*(short *)prVar7 == 0x2c ||
              ((*(short *)prVar7 == 0x2d && ((prVar7->field_0x3 & 4) != 0)))))) {
            uVar4 = 0;
          }
          else {
            iVar3 = base_alias_check(prVar5,prVar6,(uint)(byte)x->field_0x2,
                                     (uint)(byte)mem->field_0x2);
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            else {
              prVar5 = canon_rtx(prVar5);
              prVar6 = canon_rtx(prVar6);
              uVar4 = memrefs_conflict_p((uint)(byte)(&mode_size)[(byte)mem->field_0x2],prVar6,
                                         (uint)(byte)(&mode_size)[(byte)x->field_0x2],prVar5,0);
              if (uVar4 == 0xffffffff) {
                iVar3 = nonoverlapping_memrefs_p(x,mem);
                if (iVar3 == 0) {
                  prVar8 = fixed_scalar_and_varying_struct_p
                                     (mem,x,prVar6,prVar5,
                                      (anon_subr_uchar_const_rtx_uchar *)0xa9e8c78948f88949);
                  if (((prVar8 == mem) && (iVar3 = aliases_everything_p(x), iVar3 == 0)) ||
                     ((prVar8 == x && (iVar3 = aliases_everything_p(mem), iVar3 == 0)))) {
                    uVar4 = 0;
                  }
                  else {
                    bVar2 = rtx_refs_may_alias_p(x,mem,'\0');
                    uVar4 = (uint)bVar2;
                  }
                }
                else {
                  uVar4 = 0;
                }
              }
            }
          }
        }
        else {
          uVar4 = 1;
        }
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



int anti_dependence(const_rtx mem,const_rtx x)

{
  int iVar1;
  
  iVar1 = write_dependence_p(mem,x,0);
  return iVar1;
}



int output_dependence(const_rtx mem,const_rtx x)

{
  int iVar1;
  
  iVar1 = write_dependence_p(mem,x,1);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void init_alias_target(void)

{
  char cVar1;
  undefined8 uVar2;
  rtx prVar3;
  int i;
  
  memset(static_reg_base_value,0,0x1a8);
  for (i = 0; i < 0x35; i = i + 1) {
    cVar1 = ix86_function_arg_regno_p(i);
    if (cVar1 != '\0') {
      cVar1 = ix86_hard_regno_mode_ok(i,0x10);
      if (cVar1 != '\0') {
        uVar2 = gen_rtx_REG(0x10,i);
        prVar3 = (rtx)gen_rtx_fmt_e_stat(6,0,uVar2);
        static_reg_base_value[i] = prVar3;
      }
    }
  }
  static_reg_base_value[7] = (rtx)gen_rtx_fmt_e_stat(6,0x10,rtx_class);
  static_reg_base_value[16] = (rtx)gen_rtx_fmt_e_stat(6,0x10,hard_regno_nregs);
  static_reg_base_value[20] =
       (rtx)gen_rtx_fmt_e_stat(6,0x10,_target_default_pointer_address_modes_p);
  static_reg_base_value[6] = (rtx)gen_rtx_fmt_e_stat(6,0x10,_convert_memory_address_addr_space);
  return;
}



void memory_modified_1(rtx x,const_rtx pat,void *data)

{
  int iVar1;
  
  if (*(short *)x == 0x2b) {
    iVar1 = anti_dependence(x,(const_rtx)data);
    if ((iVar1 == 0) && (iVar1 = output_dependence(x,(const_rtx)data), iVar1 == 0)) {
      return;
    }
    memory_modified = '\x01';
  }
  return;
}



uchar memory_modified_in_insn_p(const_rtx mem,const_rtx insn)

{
  uchar uVar1;
  
  if ((((*(short *)insn == 8) || (*(short *)insn == 7)) || (*(short *)insn == 9)) ||
     (*(short *)insn == 10)) {
    memory_modified = '\0';
    note_stores(*(undefined8 *)(insn + 1),memory_modified_1,mem);
    uVar1 = memory_modified;
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}



void init_alias_analysis(void)

{
  bool bVar1;
  char cVar2;
  uint size_;
  uint regno_00;
  uint uVar3;
  int iVar4;
  VEC_rtx_base *pVVar5;
  long lVar6;
  rtx prVar7;
  rtx prVar8;
  int changed;
  int pass;
  int i;
  uint ui;
  uint maxreg;
  uint regno;
  rtx insn;
  rtx note;
  rtx set;
  rtx src;
  rtx t;
  
  size_ = max_reg_num();
  if (timevar_enable != '\0') {
    timevar_push_1(0x26);
  }
  reg_known_value_size = size_ - 0x35;
  reg_known_value = (rtx *)ggc_alloc_cleared_stat((ulong)reg_known_value_size << 3);
  reg_known_equiv_p = (uchar *)xcalloc(reg_known_value_size);
  if (old_reg_base_value != (VEC_rtx_gc *)0x0) {
    reg_base_value = old_reg_base_value;
  }
  if (reg_base_value != (VEC_rtx_gc *)0x0) {
    pVVar5 = &reg_base_value->base;
    if (reg_base_value == (VEC_rtx_gc *)0x0) {
      pVVar5 = (VEC_rtx_base *)0x0;
    }
    VEC_rtx_base_truncate(pVVar5,0);
  }
  VEC_rtx_gc_safe_grow_cleared(&reg_base_value,size_);
  new_reg_base_value = (rtx *)xmalloc((ulong)size_ << 3);
  reg_seen = (char *)xmalloc(size_);
  pass = 0;
  do {
    bVar1 = false;
    unique_id = 0;
    copying_arguments = '\x01';
    memset(new_reg_base_value,0,(ulong)size_ * 8);
    memset(reg_seen,0,(ulong)size_);
    memcpy(new_reg_base_value,static_reg_base_value,0x1a8);
    for (insn = (rtx)get_insns(); insn != (rtx)0x0; insn = *(rtx *)&(insn->u).field_0x10) {
      if ((((*(short *)insn == 8) || (*(short *)insn == 7)) || (*(short *)insn == 9)) ||
         (*(short *)insn == 10)) {
        if ((reload_completed == 0) || (iVar4 = prologue_epilogue_contains(insn), iVar4 == 0)) {
          if ((**(short **)(insn + 1) == 0x17) &&
             ((*(long *)&insn[1].u.field_0x8 != 0 && (lVar6 = find_reg_note(insn,0xf,0), lVar6 != 0)
              ))) {
            record_set(*(rtx *)(*(long *)(insn + 1) + 8),(const_rtx)0x0,(void *)0x0);
          }
          else {
            note_stores(*(undefined8 *)(insn + 1),record_set,0);
          }
          if ((((*(short *)insn == 8) || (*(short *)insn == 7)) || (*(short *)insn == 9)) ||
             (*(short *)insn == 10)) {
            if (**(short **)(insn + 1) == 0x17) {
              lVar6 = *(long *)(insn + 1);
            }
            else {
              lVar6 = single_set_2(insn);
            }
          }
          else {
            lVar6 = 0;
          }
          if (((lVar6 != 0) && (**(short **)(lVar6 + 8) == 0x25)) &&
             (uVar3 = rhs_regno(*(const_rtx *)(lVar6 + 8)), 0x34 < uVar3)) {
            uVar3 = rhs_regno(*(const_rtx *)(lVar6 + 8));
            prVar7 = *(rtx *)(lVar6 + 0x10);
            note = (rtx)find_reg_equal_equiv_note(insn);
            if (((note != (rtx)0x0) && (note->field_0x2 == '\x04')) &&
               (*(int *)(*(long *)(*(long *)(df + 0xd8) + (ulong)uVar3 * 8) + 8) != 1)) {
              note = (rtx)0x0;
            }
            if ((((note == (rtx)0x0) || (**(short **)&note->u == 3)) ||
                (cVar2 = rtx_varies_p(*(undefined8 *)&note->u), cVar2 != '\0')) ||
               (iVar4 = reg_overlap_mentioned_p(), iVar4 != 0)) {
              if (((*(int *)(*(long *)(*(long *)(df + 0xd8) + (ulong)uVar3 * 8) + 8) == 1) &&
                  (*(short *)prVar7 == 0x31)) && (**(short **)&prVar7->u == 0x25)) {
                regno_00 = rhs_regno(*(const_rtx *)&prVar7->u);
                prVar8 = get_reg_known_value(regno_00);
                if ((prVar8 != (rtx)0x0) && (**(short **)&(prVar7->u).field_0x8 == 0x1e)) {
                  prVar7 = (rtx)plus_constant(prVar8,*(undefined8 *)
                                                      (*(long *)&(prVar7->u).field_0x8 + 8));
                  set_reg_known_value(uVar3,prVar7);
                  set_reg_known_equiv_p(uVar3,'\0');
                  goto LAB_00105bc7;
                }
              }
              if ((*(int *)(*(long *)(*(long *)(df + 0xd8) + (ulong)uVar3 * 8) + 8) == 1) &&
                 (cVar2 = rtx_varies_p(), cVar2 == '\0')) {
                set_reg_known_value(uVar3,prVar7);
                set_reg_known_equiv_p(uVar3,'\0');
              }
            }
            else {
              set_reg_known_value(uVar3,*(rtx *)&note->u);
              set_reg_known_equiv_p(uVar3,note->field_0x2 == '\x03');
            }
          }
        }
      }
      else if ((*(short *)insn == 0xd) && (*(int *)(insn + 1) == 4)) {
        copying_arguments = '\0';
      }
LAB_00105bc7:
    }
    uVar3 = max_reg_num();
    if (size_ != uVar3) {
      fancy_abort("alias.c",0xac8,&DAT_00106480);
    }
    for (ui = 0; ui < size_; ui = ui + 1) {
      if (new_reg_base_value[ui] != (rtx)0x0) {
        prVar7 = new_reg_base_value[ui];
        pVVar5 = &reg_base_value->base;
        if (reg_base_value == (VEC_rtx_gc *)0x0) {
          pVVar5 = (VEC_rtx_base *)0x0;
        }
        prVar8 = VEC_rtx_base_index(pVVar5,ui);
        if (prVar7 != prVar8) {
          pVVar5 = &reg_base_value->base;
          if (reg_base_value == (VEC_rtx_gc *)0x0) {
            pVVar5 = (VEC_rtx_base *)0x0;
          }
          VEC_rtx_base_index(pVVar5,ui);
          iVar4 = rtx_equal_p(new_reg_base_value[ui]);
          if (iVar4 == 0) {
            pVVar5 = &reg_base_value->base;
            if (reg_base_value == (VEC_rtx_gc *)0x0) {
              pVVar5 = (VEC_rtx_base *)0x0;
            }
            VEC_rtx_base_replace(pVVar5,ui,new_reg_base_value[ui]);
            bVar1 = true;
          }
        }
      }
    }
    if ((!bVar1) || (pass = pass + 1, 9 < pass)) {
      for (i = 0; i < (int)reg_known_value_size; i = i + 1) {
        if (reg_known_value[i] == (rtx)0x0) {
          reg_known_value[i] = *(rtx *)(regno_reg_rtx + ((long)i + 0x35) * 8);
        }
      }
      free(new_reg_base_value);
      new_reg_base_value = (rtx *)0x0;
      free(reg_seen);
      reg_seen = (char *)0x0;
      if (timevar_enable != '\0') {
        timevar_pop_1(0x26);
      }
      return;
    }
  } while( true );
}



void end_alias_analysis(void)

{
  old_reg_base_value = reg_base_value;
  ggc_free(reg_known_value);
  reg_known_value = (rtx *)0x0;
  reg_known_value_size = 0;
  free(reg_known_equiv_p);
  reg_known_equiv_p = (uchar *)0x0;
  return;
}



void gt_ggc_mx_VEC_alias_set_entry_gc(void *x_p)

{
  uint uVar1;
  int iVar2;
  size_t i0;
  VEC_alias_set_entry_gc *x;
  size_t l0;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar2 = ggc_set_mark(x_p);
    if (iVar2 == 0) {
                    // WARNING: Load size is inaccurate
      uVar1 = *x_p;
      for (i0 = 0; i0 != uVar1; i0 = i0 + 1) {
        if (*(long *)((long)x_p + i0 * 8 + 8) != 0) {
          gt_ggc_mx_alias_set_entry_d(*(void **)((long)x_p + i0 * 8 + 8));
        }
      }
    }
  }
  return;
}



void gt_ggc_mx_alias_set_entry_d(void *x_p)

{
  int iVar1;
  alias_set_entry_d *x;
  
  if ((x_p != (void *)0x0) && (x_p != (void *)0x1)) {
    iVar1 = ggc_set_mark(x_p);
    if (iVar1 == 0) {
      gt_ggc_m_II12splay_tree_s(*(undefined8 *)((long)x_p + 8));
    }
  }
  return;
}



void gt_pch_nx_VEC_alias_set_entry_gc(void *x_p)

{
  uint uVar1;
  int iVar2;
  size_t i0;
  VEC_alias_set_entry_gc *x;
  size_t l0;
  
  iVar2 = gt_pch_note_object(x_p,x_p,gt_pch_p_22VEC_alias_set_entry_gc,0x5d);
  if (iVar2 != 0) {
                    // WARNING: Load size is inaccurate
    uVar1 = *x_p;
    for (i0 = 0; i0 != uVar1; i0 = i0 + 1) {
      if (*(long *)((long)x_p + i0 * 8 + 8) != 0) {
        gt_pch_nx_alias_set_entry_d(*(void **)((long)x_p + i0 * 8 + 8));
      }
    }
  }
  return;
}



void gt_pch_nx_alias_set_entry_d(void *x_p)

{
  int iVar1;
  alias_set_entry_d *x;
  
  iVar1 = gt_pch_note_object(x_p,x_p,gt_pch_p_17alias_set_entry_d,0x5e);
  if (iVar1 != 0) {
    gt_pch_n_II12splay_tree_s(*(undefined8 *)((long)x_p + 8));
  }
  return;
}



void gt_pch_p_22VEC_alias_set_entry_gc(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  uint uVar1;
  size_t i0;
  VEC_alias_set_entry_gc *x;
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



void gt_pch_p_17alias_set_entry_d(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  alias_set_entry_d *x;
  
  if (x_p == this_obj) {
    (*op)((void *)((long)x_p + 8),cookie);
  }
  return;
}



void gt_ggc_ma_reg_known_value(void *x_p)

{
  size_t i0;
  void *a__;
  
  if (reg_known_value != (rtx *)0x0) {
    for (i0 = 0; i0 != reg_known_value_size; i0 = i0 + 1) {
      if (reg_known_value[i0] != (rtx)0x0) {
        gt_ggc_mx_rtx_def(reg_known_value[i0]);
      }
    }
    if ((reg_known_value != (rtx *)0x0) && (reg_known_value != (rtx *)0x1)) {
      ggc_set_mark(reg_known_value);
    }
  }
  return;
}



void gt_pch_pa_reg_known_value(void *this_obj,void *x_p,gt_pointer_operator op,void *cookie)

{
  size_t i0;
  
  if (reg_known_value != (rtx *)0x0) {
    for (i0 = 0; i0 != reg_known_value_size; i0 = i0 + 1) {
      if ((rtx *)this_obj == reg_known_value) {
        (*op)(reg_known_value + i0,cookie);
      }
    }
    if ((rtx **)this_obj == &reg_known_value) {
      (*op)(&reg_known_value,cookie);
    }
  }
  return;
}



void gt_pch_na_reg_known_value(void *x_p)

{
  size_t i1;
  
  if (reg_known_value != (rtx *)0x0) {
    for (i1 = 0; i1 != reg_known_value_size; i1 = i1 + 1) {
      if (reg_known_value[i1] != (rtx)0x0) {
        gt_pch_nx_rtx_def(reg_known_value[i1]);
      }
    }
    gt_pch_note_object(reg_known_value,&reg_known_value,gt_pch_pa_reg_known_value,0xd9);
  }
  return;
}


