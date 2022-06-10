
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  _obstack_begin(&parser_obstack,0,0,uRam0000000000106e72,uRam0000000000106e68);
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return type;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return enumtype;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
      if (*x_p != 0) {
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
      if (*x_p != 0) {
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
      if (*x_p != 0) {
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
    if (*x_p != 0) {
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
    if (*x_p != 0) {
                    /* WARNING: Load size is inaccurate */
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
                    /* WARNING: Load size is inaccurate */
    if (*x_p != 0) {
                    /* WARNING: Load size is inaccurate */
      gt_pch_nx_sorted_fields_type(*x_p);
    }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    gt_pch_note_reorder(*x_p,*x_p,uRam0000000000119a2e);
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
  
                    /* WARNING: Load size is inaccurate */
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
  
                    /* WARNING: Load size is inaccurate */
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


/* WARNING: Control flow encountered bad instruction data */

void vec_gc_p_reserve_exact(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ggc_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void vec_gc_p_reserve(void)

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

void append_to_statement_list_force(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void print_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void indent_to(void)

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

void ggc_alloc_stat(void)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void warning_at(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void complete_array_type(void)

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

void pedwarn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void variably_modified_type_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void objc_volatilize_decl(void)

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

void sorry(void)

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

void make_node_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_decl_stat(void)

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

void warn_for_unused_label(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void release_tree_vector(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_location(void)

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

void copy_node_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void start_fname_decls(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void finish_fname_decls(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_common_write_pch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void maybe_apply_pending_pragma_weaks(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void inform(void)

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

void build_function_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_type_attribute_variant(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void comptypes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_type_promotes_to(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_addr_space_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void lookup_attribute(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void same_translation_unit_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void error_at(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void composite_type(void)

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

void decl_assembler_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void merge_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gimple_body(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gimple_set_body(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void copy_list(void)

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

void tree_code_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void make_decl_rtl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cgraph_mark_if_needed(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void integer_zerop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_underlying_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_cons_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void maybe_apply_renaming_pragma(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_user_assembler_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void rest_of_decl_compilation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_aux_info_record(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void decl_attributes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void make_tree_vector(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void xmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_parse_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void _obstack_begin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_common_tree_nodes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_common_nodes_and_builtins(void)

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

void fname_as_string(void)

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

void size_int_kind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_index_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_array_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_build_qualified_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void _obstack_newchunk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void size_binop_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void record_types_used_by_current_var_decl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void store_init_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void objc_check_decl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void constant_expression_warning(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_builtin_user_assembler_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void maybe_apply_pragma_weak(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_determine_visibility(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build3_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void push_stmt_list(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_stmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_pending_sizes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_unary_op(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_function_call_vec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void push_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build1_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_compound_literal_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build2_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void identifier_to_locale(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_fully_fold(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_int_cst_sgn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void compare_tree_int(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_int_cst(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_low_cst(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_int_cst_min_precision(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void save_expr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void skip_simple_arithmetic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void put_pending_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void warn_deprecated_use(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pedwarn_c99(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void unsigned_type_for(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void strip_array_types(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void chainon(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_common_signed_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_range_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void convert(void)

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

void build_qualified_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_distinct_type_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void put_pending_sizes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_pointer_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_decl_attribute_variant(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void decl_default_tls_model(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_apply_type_quals_to_decl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_mark_addressable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void htab_create(void)

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

void htab_delete(void)

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

void pointer_set_contains(void)

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

void c_build_bitfield_integer_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void list_length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void spec_qsort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_decl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void rest_of_type_compilation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_int_cst_lt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_common_type_for_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void default_conversion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void int_fits_type_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_binary_op(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void announce_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void check_main_parameter_types(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_variant_type_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void allocate_struct_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void nreverse(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_finish_return(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pop_stmt_list(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void decl_function_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void invoke_plugin_callbacks(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void c_genericize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cgraph_add_new_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cgraph_finalize_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cgraph_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_cfun(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void push_function_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pop_function_context(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_tree_list_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pedwarn_c90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_complex_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void wrapup_global_declaration_1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void wrapup_global_declaration_2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void check_global_declaration_1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void dump_begin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void dump_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void dump_end(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void cgraph_finalize_compilation_unit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void timevar_push_1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void timevar_pop_1(void)

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

void gt_ggc_mx_VEC_tree_gc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_node_structure(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_real_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_fixed_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_m_S(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_rtx_def(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_var_ann_d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_die_struct(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_gimple_statement_d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_ptr_info_def(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_tree_statement_list_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_VEC_constructor_elt_gc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_gimple_seq_d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_cpp_macro(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_answer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_ggc_mx_sorted_fields_type(void)

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

void gt_pch_nx_VEC_tree_gc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_real_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_fixed_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_n_S(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_rtx_def(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_var_ann_d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_die_struct(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_gimple_statement_d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_ptr_info_def(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_tree_statement_list_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_VEC_constructor_elt_gc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_gimple_seq_d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_cpp_macro(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_answer(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_nx_sorted_fields_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gt_pch_note_reorder(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

