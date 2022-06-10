
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
                    /* WARNING: Could not recover jumptable at 0x0010054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x00102564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x0010457b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001065b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x0015c3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Could not recover jumptable at 0x001c4a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      aVar2 = (*(code *)(&DAT_001df880 + *(int *)(&DAT_001df880 + (ulong)(iVar1 + 1U) * 4)))();
      return aVar2;
    }
  }
  else if (iVar1 - 0x70cU < 0x1b) {
    return IMM_DISP_UNKNOWN;
  }
  return IMM_DISP_FALSE;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Could not recover jumptable at 0x001c6c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

attr_memory get_attr_memory(rtx insn)

{
  int iVar1;
  attr_memory aVar2;
  
  iVar1 = recog_memoized(insn);
  if (iVar1 + 1U < 0x728) {
                    /* WARNING: Could not recover jumptable at 0x001c8a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001cb598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001ccd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001ce89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001cfa37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001d04e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    aVar2 = (*(code *)(&DAT_001ece90 + *(int *)(&DAT_001ece90 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return PREFIX_ORIG;
}


/* WARNING: Type propagation algorithm not settling */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Could not recover jumptable at 0x001d21be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001d2ef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
                    /* WARNING: Could not recover jumptable at 0x001d4fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    aVar2 = (*(code *)(&DAT_001f5150 + *(int *)(&DAT_001f5150 + (ulong)(iVar1 + 1U) * 4)))();
    return aVar2;
  }
  return UNIT_SSE;
}


/* WARNING: Control flow encountered bad instruction data */

void recog(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void extract_insn_cached(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void insn_current_reference_address(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void asm_noperands(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void _fatal_insn_not_found(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void extract_constrain_insn_cached(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ix86_attr_length_address_default(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void memory_operand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void register_operand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void aligned_operand(void)

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

void ix86_attr_length_vex_default(void)

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

void memory_address_length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ext_QIreg_operand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void ext_QIreg_nomode_operand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* WARNING: Control flow encountered bad instruction data */

void x86_extended_reg_mentioned_p(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

