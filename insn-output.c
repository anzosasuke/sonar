
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


/* WARNING: Control flow encountered bad instruction data */

void output_fp_compare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_attr_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_attr_mode(void)

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

void legitimate_pic_operand_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void misaligned_operand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void output_387_reg_move(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void standard_80387_constant_opcode(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void get_attr_prefix_0f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void output_fix_trunc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void rtx_equal_p(void)

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

void optimize_function_for_size_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void constant_call_address_operand(void)

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

void output_set_got(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void output_387_binary_op(void)

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

void standard_sse_constant_opcode(void)

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

void avx_vpermilp_parallel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void avx_vperm2f128_parallel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

