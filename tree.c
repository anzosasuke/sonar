
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
                    /* WARNING: Subroutine does not return */
  htab_create_alloc(1000,type_hash_hash,type_hash_eq,0,uRam0000000000101628,uRam000000000010161e);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Could not reconcile some variable overlaps */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  _exact_log2 = uRam000000000010b308;
  _mode_size = uRam000000000010b316;
  _vector_type_mode = uRam000000000010b324;
  _htab_size = uRam000000000010b332;
  global_dc[0x1bb] = lRam000000000010b347;
  global_dc[0x1bc] = lRam000000000010b35c;
  *(undefined8 *)(*global_dc + 0x28) = uRam000000000010b374;
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
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return (int)(*va == *vb);
}


uint tree_map_base_hash(void *item)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*htab_hash_pointer)(*item);
  return uVar1;
}


int tree_map_base_marked_p(void *p)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Load size is inaccurate */
  if (*x == 0xba) {
    p = (char *)((long)x + 0x18);
    len = 0xb8;
  }
  else {
                    /* WARNING: Load size is inaccurate */
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
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*x == *y) {
                    /* WARNING: Load size is inaccurate */
    if (*x == 0xba) {
      xp = (char *)((long)x + 0x18);
      yp = (char *)((long)y + 0x18);
      len = 0xb8;
    }
    else {
                    /* WARNING: Load size is inaccurate */
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


/* WARNING: Control flow encountered bad instruction data */

void vec_gc_p_reserve_exact(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void vec_heap_p_reserve_exact(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void vec_heap_p_reserve(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void vec_gc_o_reserve_exact(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fancy_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_create_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_hash_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ggc_alloc_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fit_double_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_find_slot(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void vector_type_mode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_from_integer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fold_convert_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void exact_log2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void floor_log2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_compare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void bit_from_pos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void byte_from_pos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fold_build2_stat_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fold(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void call_expr_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fold_build3_stat_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fold_build1_stat_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void maybe_inline_call_in_expr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void useless_type_conversion_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void layout_decl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_identifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void linemap_lookup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void warning(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void iterative_hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cgraph_get_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pointer_set_contains(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gimple_has_body_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pointer_set_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pointer_set_insert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pointer_set_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void lookup_type_for_runtime(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gsi_start_phis(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_alias_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void mode_for_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void make_unsigned_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ggc_marked_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ggc_alloc_cleared_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_collisions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_elements(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_find_with_hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_find_slot_with_hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void layout_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void rshift_double(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_identical(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fixed_identical(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fixed_hash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fixup_unsigned_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fixup_signed_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void error(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void bitmap_bit_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_to_double_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void double_int_zext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void double_int_negative_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void double_int_ucmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void double_int_cmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void mpz_set_double_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void mpz_set_ui(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void double_int_mask(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void double_int_add(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void double_int_sext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_random_seed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void make_signed_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void make_fract_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void make_accum_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void initialize_sizetypes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void size_int_kind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void add_builtin_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void concat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_isnegzero(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void array_ref_low_bound(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void array_ref_up_bound(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void aggregate_value_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void operand_equal_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void types_compatible_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cl_optimization_save(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cl_target_option_save(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_personality_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ggc_set_mark(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_lang_tree_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_note_object(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_lang_tree_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

