
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return prVar3;
}


/* WARNING: Removing unreachable block (ram,0x00100f87) */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)pprVar9 + -0x1b8) = 0x1026df;
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

tree std_build_builtin_va_list(void)

{
  return _emit_block_move;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

tree std_fn_abi_va_list(tree fndecl)

{
  return _last_call_insn;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  gimplify_expr(&rounded_size,pre_p,post_p,uRam0000000000109fbe,1);
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
          gimplify_expr(&valist,pre_p,post_p,uRam000000000010a3d4,1);
        }
        else {
          gimplify_expr(&valist,pre_p,post_p,uRam000000000010a3f7,2);
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return gVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

rtx expand_builtin_va_end(tree exp)

{
  tree valist;
  
  if (((*(tree *)&exp->field_0x40)->field_0x2 & 1) != 0) {
    expand_expr(*(tree *)&exp->field_0x40,_vector_type_mode,MAX_MODE_PARTIAL_INT,EXPAND_NORMAL);
  }
  return _vector_type_mode;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

rtx expand_builtin___clear_cache(tree exp)

{
  return _vector_type_mode;
}


rtx round_trampoline_addr(rtx tramp)

{
  return tramp;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar6;
}


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar7;
}


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar7;
}


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar7;
}


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Could not reconcile some variable overlaps */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar10;
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)pptVar6 + lVar1 + -8) = 0x116a31;
    __stack_chk_fail();
  }
  return ptVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar8 + lVar1 + -8) = 0x11b002;
    __stack_chk_fail();
  }
  return ptVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Control flow encountered bad instruction data */

void fancy_abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_expr_real(void)

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

void get_inner_reference(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void host_integerp(void)

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

void ix86_constant_alignment(void)

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

void tree_strip_nop_conversions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_int_cst_equal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void string_constant(void)

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

void size_diffop_loc(void)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

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

void immed_double_const(void)

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

void ix86_setup_frame_addresses(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void memory_address_addr_space(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_frame_mem(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void copy_to_reg(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void plus_constant(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtx_MEM(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void new_alias_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void convert_memory_address_addr_space(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void force_operand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void force_reg(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_mem_alias_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_move_insn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtx_fmt_u_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void validize_mem(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_stack_save(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_use(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_clobber(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_arg_pointer_save_area(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_builtin_setjmp_receiver(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_insn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_blockage(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_last_insn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtx_fmt_0_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_stack_restore(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_indirect_jump(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void add_reg_note(void)

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

void error(void)

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

void gen_prefetch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void side_effects_p(void)

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

void set_mem_attributes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void adjust_automodify_address_1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_mem_expr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtx_CONST_INT(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_mem_offset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_mem_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ix86_function_arg_regno_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_mode_alignment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ix86_function_value_regno_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtx_REG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void adjust_address_1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtx_fmt_ee_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtvec_v(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_rtx_fmt_E_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void assign_stack_local(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void copy_addr_to_reg(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void start_sequence(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_insns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void end_sequence(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void push_topmost_sequence(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_insn_before(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void entry_of_function(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pop_topmost_sequence(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_reg_rtx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void do_pending_stack_adjust(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void allocate_dynamic_stack_space(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_mem_align(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_block_move(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void use_reg(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void prepare_call_address(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_untyped_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_call_insn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void last_call_insn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void add_function_usage_to(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void push_to_sequence(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_naked_return(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_label_rtx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void do_compare_rtx_and_jump(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_label(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_callee_fndecl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_expr_nonnegative_p(void)

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

void expand_unop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_binop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_twoval_unop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void convert_to_mode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void maybe_emit_unop_insn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void delete_insns_since(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_fold_indirect_ref_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void assign_temp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void copy_to_mode_reg(void)

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

void make_tree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_call_nary(void)

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

void build_function_type_list(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_fn_decl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_real(void)

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

void build2_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_call_valist(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_sfix_optab(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_fix(void)

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

void expand_mult(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_to_integer(void)

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

void real_identical(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void optimize_insn_for_speed_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_arithmetic(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_simple_binop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_round(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_convert(void)

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

void optab_libfunc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_library_call_value(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_insn_after(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void convert_move(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void stringop_block_profile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void can_store_by_pieces(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void store_by_pieces(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_block_move_hints(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void can_move_by_pieces(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void move_by_pieces(void)

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

void tree_int_cst_lt(void)

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

void set_storage_via_setmem(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void clear_storage_hints(void)

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

void gen_cmpstrnsi(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_fold_addr_expr_with_type_loc(void)

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

void error_at(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void pass_by_reference(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ix86_function_arg_boundary(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_initialized_tmp_var(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gimplify_and_add(void)

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

void size_in_bytes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void round_up_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gimplify_expr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void mf_mark(void)

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

void build_fold_addr_expr_loc(void)

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

void gen_trap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void emit_barrier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void safe_from_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_abs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_copysign(void)

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

void build_qualified_type(void)

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

void build4_stat(void)

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

void emit_library_call(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_mem_attributes_minus_bitpos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void change_address(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void int_mode_for_mode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void operand_subword_force(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_shift(void)

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

void build_decl_stat(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void convert_modes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_sync_operation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_sync_fetch_operation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_bool_compare_and_swap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_val_compare_and_swap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void expand_sync_lock_test_and_set(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void gen_memory_barrier(void)

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

void real_inf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_nan(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_isinteger(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void strip_float_extensions(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_trunc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_isnan(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_floor(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_ceil(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_isfinite(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_to_integer2(void)

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

void build_int_cst_wide(void)

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

void real_onep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void omit_one_operand_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_powi(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_int_cst_type(void)

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

void get_ref_base_and_extent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_expr_size(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_pointer_type_for_mode(void)

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

void optimize_function_for_size_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void omit_two_operands_loc(void)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

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

void real_isneg(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_copysign(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fold_strip_sign_ops(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void fold_abs_const(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_zerop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_ldexp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_isinf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_value_truncate(void)

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

void get_max_float(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void real_from_string(void)

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

void fold_build3_stat_loc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void non_lvalue_loc(void)

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

void call_expr_arglist(void)

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

void build_call_array_loc(void)

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

void fold(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_base_address(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void decl_readonly_section(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strchr(char *__s,int __c)

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
/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_last(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void integer_all_onesp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void tree_nonartificial_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void build_int_cstu(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void compute_builtin_object_size(void)

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

void set_user_assembler_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void init_block_move_fn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void set_user_assembler_libfunc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void init_block_clear_fn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

