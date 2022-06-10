
uint rhs_regno(const_rtx x)

{
  return *(uint *)&x->u;
}


uchar satisfies_constraint_K(rtx op)

{
  uchar uVar1;
  long ival;
  
  ival = 0;
  if (*(short *)op == 0x1e) {
    ival = *(long *)&op->u;
  }
  if ((*(short *)op == 0x1e) && (ival + 0x80U < 0x100)) {
    uVar1 = '\x01';
  }
  else {
    uVar1 = '\0';
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_1(rtx x0,rtx insn,int *pnum_clobbers)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  rtx prVar4;
  short *psVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  rtx prVar8;
  char cVar9;
  int iVar10;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x4;
  
  x1 = *(rtx *)&x0->u;
  if (*(short *)x1 == 0x25) {
    if (*(int *)&x1->u == 0x13) {
      psVar5 = *(short **)&(x0->u).field_0x8;
      if ((((*(char *)(psVar5 + 1) == '\x0f') && (*psVar5 == 0x12)) && (**(int **)(psVar5 + 4) == 1)
          ) && (*(int *)(psVar5 + 8) == 0x23)) {
        prVar4 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
        iVar10 = memory_operand(prVar4,0xf);
        if (iVar10 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          if ((target_flags & 2) != 0) {
            recog_data = prVar4;
            return 0x89;
          }
          x1 = *(rtx *)&x0->u;
          recog_data = prVar4;
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
  }
  else if (*(short *)x1 == 0x2b) {
    iVar10 = push_operand(x1,0xf);
    if (iVar10 != 0) {
      uVar7 = *(undefined8 *)&(x0->u).field_0x8;
      recog_data = x1;
      iVar10 = nonmemory_no_elim_operand(uVar7,0xf);
      if (iVar10 != 0) {
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        return 0x2e;
      }
      x1 = *(rtx *)&x0->u;
    }
    goto L21791;
  }
  iVar10 = register_operand(x1,0xf);
  if (iVar10 != 0) {
    recog_data = x1;
    puVar3 = *(ushort **)&(x0->u).field_0x8;
    if (*(char *)(puVar3 + 1) == '\x0f') {
      uVar2 = *puVar3;
      if (uVar2 == 0x77) {
        prVar4 = *(rtx *)(puVar3 + 4);
        iVar10 = ext_register_operand(prVar4,0);
        if (iVar10 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          if (*(long *)(puVar3 + 8) == _flags_reg_operand) {
            if (*(long *)(puVar3 + 0xc) == _flags_reg_operand) {
              return 0x3b;
            }
            x1 = *(rtx *)&x0->u;
          }
          else {
            x1 = *(rtx *)&x0->u;
          }
        }
      }
      else {
        if (uVar2 < 0x78) {
          if (uVar2 == 99) {
            prVar4 = *(rtx *)(puVar3 + 4);
            iVar10 = nonimmediate_operand(prVar4,0xe);
            if (iVar10 == 0) {
              x1 = *(rtx *)&x0->u;
            }
            else {
              _GLOBAL_OFFSET_TABLE_ = prVar4;
              if (((DAT_001cb052 != '\0') &&
                  (cVar9 = optimize_function_for_speed_p
                                     (CONCAT44(cfun._4_4_,
                                               CONCAT13(cfun._3_1_,
                                                        CONCAT12(cfun._2_1_,
                                                                 CONCAT11(cfun._1_1_,(undefined)cfun
                                                                         ))))), cVar9 != '\0')) &&
                 (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x56;
              }
              if (((DAT_001cb052 == '\0') ||
                  (cVar9 = optimize_function_for_size_p
                                     (CONCAT44(cfun._4_4_,
                                               CONCAT13(cfun._3_1_,
                                                        CONCAT12(cfun._2_1_,
                                                                 CONCAT11(cfun._1_1_,(undefined)cfun
                                                                         ))))), cVar9 != '\0')) &&
                 (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x57;
              }
              if (((DAT_001cb052 == '\0') ||
                  (cVar9 = optimize_function_for_size_p
                                     (CONCAT44(cfun._4_4_,
                                               CONCAT13(cfun._3_1_,
                                                        CONCAT12(cfun._2_1_,
                                                                 CONCAT11(cfun._1_1_,(undefined)cfun
                                                                         ))))), cVar9 != '\0')) &&
                 (reload_completed != 0)) {
                return 0x58;
              }
              x1 = *(rtx *)&x0->u;
            }
            goto L21791;
          }
          if (uVar2 < 100) {
            if (uVar2 == 0x62) {
              uVar7 = *(undefined8 *)(puVar3 + 4);
              iVar10 = nonimmediate_operand(uVar7,0xe);
              if (iVar10 != 0) {
                _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
                return 0x5f;
              }
              x1 = *(rtx *)&x0->u;
              goto L21791;
            }
            if (uVar2 < 99) {
              if (uVar2 == 0x12) {
                if ((**(int **)(puVar3 + 4) == 1) && (*(int *)(puVar3 + 8) == 0x1f)) {
                  x2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                  if (x2->field_0x2 == '\v') {
                    if (*(short *)x2 == 0x25) {
                      if ((*(int *)&x2->u == 0x12) && ((target_flags & 2) != 0)) {
                        return 0x1e;
                      }
                      x1 = *(rtx *)&x0->u;
                    }
                    else if (*(short *)x2 == 0x30) {
                      x3 = *(rtx *)&x2->u;
                      bVar1 = x3->field_0x2;
                      if (bVar1 == 0x28) {
                        iVar10 = register_operand(x3,0x28);
                        if (iVar10 != 0) {
                          prVar4 = *(rtx *)&(x2->u).field_0x8;
                          _GLOBAL_OFFSET_TABLE_ = x3;
                          iVar10 = register_operand(prVar4,0x28);
                          if (iVar10 == 0) {
                            x3 = *(rtx *)&x2->u;
                          }
                          else {
                            if ((target_flags & 2) != 0) {
                              _register_operand = prVar4;
                              return 0x12;
                            }
                            x2 = *(rtx *)(*(long *)(*(long *)&(x0->u).field_0x8 + 8) + 8);
                            x3 = *(rtx *)&x2->u;
                            _register_operand = prVar4;
                          }
                        }
                      }
                      else if (bVar1 < 0x29) {
                        if (bVar1 == 0x26) {
                          iVar10 = register_operand(x3,0x26);
                          if (iVar10 != 0) {
                            prVar4 = *(rtx *)&(x2->u).field_0x8;
                            _GLOBAL_OFFSET_TABLE_ = x3;
                            iVar10 = nonimmediate_operand(prVar4,0x26);
                            if (iVar10 == 0) {
                              x3 = *(rtx *)&x2->u;
                            }
                            else {
                              if ((target_flags & 2) != 0) {
                                _register_operand = prVar4;
                                return 0x14;
                              }
                              x2 = *(rtx *)(*(long *)(*(long *)&(x0->u).field_0x8 + 8) + 8);
                              x3 = *(rtx *)&x2->u;
                              _register_operand = prVar4;
                            }
                          }
                        }
                        else if ((bVar1 == 0x27) &&
                                (iVar10 = register_operand(x3,0x27), iVar10 != 0)) {
                          prVar4 = *(rtx *)&(x2->u).field_0x8;
                          _GLOBAL_OFFSET_TABLE_ = x3;
                          iVar10 = nonimmediate_operand(prVar4,0x27);
                          if (iVar10 == 0) {
                            x3 = *(rtx *)&x2->u;
                          }
                          else {
                            if ((target_flags & 2) != 0) {
                              _register_operand = prVar4;
                              return 0x15;
                            }
                            x2 = *(rtx *)(*(long *)(*(long *)&(x0->u).field_0x8 + 8) + 8);
                            x3 = *(rtx *)&x2->u;
                            _register_operand = prVar4;
                          }
                        }
                      }
                      iVar10 = register_operand(x3,0);
                      if (iVar10 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        _GLOBAL_OFFSET_TABLE_ = x3;
                        prVar4 = *(rtx *)&(x2->u).field_0x8;
                        iVar10 = float_operator(prVar4,0);
                        if (iVar10 == 0) {
                          iVar10 = const0_operand(prVar4,0);
                          if (iVar10 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if (((target_flags & 2) != 0) &&
                               ((((_GLOBAL_OFFSET_TABLE_->field_0x2 == '&' ||
                                  (_GLOBAL_OFFSET_TABLE_->field_0x2 == '\'')) ||
                                 (_GLOBAL_OFFSET_TABLE_->field_0x2 == '(')) &&
                                (_GLOBAL_OFFSET_TABLE_->field_0x2 == prVar4->field_0x2)))) {
                              _register_operand = prVar4;
                              return 0x10;
                            }
                            x1 = *(rtx *)&x0->u;
                            _register_operand = prVar4;
                          }
                        }
                        else {
                          prVar8 = *(rtx *)&prVar4->u;
                          _nonimmediate_operand = prVar4;
                          if (prVar8->field_0x2 == '\x0f') {
                            iVar10 = memory_operand(prVar8,0xf);
                            if (iVar10 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              _register_operand = prVar8;
                              if ((((target_flags & 2) != 0) &&
                                  ((((_GLOBAL_OFFSET_TABLE_->field_0x2 == '&' ||
                                     (_GLOBAL_OFFSET_TABLE_->field_0x2 == '\'')) ||
                                    (_GLOBAL_OFFSET_TABLE_->field_0x2 == '(')) &&
                                   ((cfun._3_1_ != '\0' ||
                                    (cVar9 = optimize_function_for_size_p
                                                       (CONCAT44(cfun._4_4_,
                                                                 (uint)CONCAT12(cfun._2_1_,
                                                                                CONCAT11(cfun._1_1_,
                                                                                         (undefined)
                                                                                         cfun)))),
                                    cVar9 != '\0')))))) &&
                                 (_nonimmediate_operand->field_0x2 ==
                                  _GLOBAL_OFFSET_TABLE_->field_0x2)) {
                                return 0x1a;
                              }
                              x1 = *(rtx *)&x0->u;
                            }
                          }
                          else if (prVar8->field_0x2 == '\x10') {
                            iVar10 = memory_operand(prVar8,0x10);
                            if (iVar10 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              _register_operand = prVar8;
                              if (((((target_flags & 2) != 0) &&
                                   (((_GLOBAL_OFFSET_TABLE_->field_0x2 == '&' ||
                                     (_GLOBAL_OFFSET_TABLE_->field_0x2 == '\'')) ||
                                    (_GLOBAL_OFFSET_TABLE_->field_0x2 == '(')))) &&
                                  (((char)cfun._4_4_ != '\0' ||
                                   (cVar9 = optimize_function_for_size_p
                                                      (CONCAT44(cfun._4_4_,
                                                                CONCAT13(cfun._3_1_,
                                                                         CONCAT12(cfun._2_1_,
                                                                                  CONCAT11(cfun.
                                                  _1_1_,(undefined)cfun))))), cVar9 != '\0')))) &&
                                 (_nonimmediate_operand->field_0x2 ==
                                  _GLOBAL_OFFSET_TABLE_->field_0x2)) {
                                return 0x1b;
                              }
                              x1 = *(rtx *)&x0->u;
                            }
                          }
                          else {
                            x1 = *(rtx *)&x0->u;
                          }
                        }
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                  }
                  else if (x2->field_0x2 == '\f') {
                    if (*(short *)x2 == 0x30) {
                      prVar4 = *(rtx *)&x2->u;
                      iVar10 = register_operand(prVar4,0);
                      if (iVar10 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        prVar8 = *(rtx *)&(x2->u).field_0x8;
                        _GLOBAL_OFFSET_TABLE_ = prVar4;
                        iVar10 = register_operand(prVar8,0);
                        if (iVar10 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          if ((((target_flags & 2) != 0) &&
                              (((_GLOBAL_OFFSET_TABLE_->field_0x2 == '&' ||
                                (_GLOBAL_OFFSET_TABLE_->field_0x2 == '\'')) ||
                               (_GLOBAL_OFFSET_TABLE_->field_0x2 == '(')))) &&
                             (_GLOBAL_OFFSET_TABLE_->field_0x2 == prVar8->field_0x2)) {
                            _register_operand = prVar8;
                            return 0x18;
                          }
                          x1 = *(rtx *)&x0->u;
                          _register_operand = prVar8;
                        }
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
                goto L21791;
              }
              if (uVar2 == 0x34) {
                prVar4 = *(rtx *)(puVar3 + 4);
                if (prVar4->field_0x2 == '\x0f') {
                  uVar2 = *(ushort *)prVar4;
                  if (uVar2 == 99) {
                    prVar4 = *(rtx *)&prVar4->u;
                    iVar10 = nonimmediate_operand(prVar4,0xe);
                    if (iVar10 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      psVar5 = *(short **)(puVar3 + 8);
                      _GLOBAL_OFFSET_TABLE_ = prVar4;
                      if ((*(char *)(psVar5 + 1) == '\x0f') && (*psVar5 == 99)) {
                        prVar4 = *(rtx *)(psVar5 + 4);
                        iVar10 = nonimmediate_operand(prVar4,0xe);
                        if (iVar10 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          _register_operand = prVar4;
                          if ((DAT_001cb066 != '\0') &&
                             (((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b ||
                               (*(short *)prVar4 != 0x2b)) && (pnum_clobbers != (int *)0x0)))) {
                            *pnum_clobbers = 1;
                            return 0x10c;
                          }
                          x1 = *(rtx *)&x0->u;
                        }
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                  }
                  else {
                    if (uVar2 < 100) {
                      if (uVar2 == 0x62) {
                        prVar4 = *(rtx *)&prVar4->u;
                        iVar10 = nonimmediate_operand(prVar4,0xe);
                        if (iVar10 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          psVar5 = *(short **)(puVar3 + 8);
                          _GLOBAL_OFFSET_TABLE_ = prVar4;
                          if ((*(char *)(psVar5 + 1) == '\x0f') && (*psVar5 == 0x62)) {
                            prVar4 = *(rtx *)(psVar5 + 4);
                            iVar10 = nonimmediate_operand(prVar4,0xe);
                            if (iVar10 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              _register_operand = prVar4;
                              if (((DAT_001cb066 != '\0') &&
                                  ((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b ||
                                   (*(short *)prVar4 != 0x2b)))) && (pnum_clobbers != (int *)0x0)) {
                                *pnum_clobbers = 1;
                                return 0x10b;
                              }
                              x1 = *(rtx *)&x0->u;
                            }
                          }
                          else {
                            x1 = *(rtx *)&x0->u;
                          }
                        }
                        goto L21791;
                      }
                      if ((uVar2 < 99) &&
                         ((uVar2 == 0x2b || ((uVar2 < 0x2c && ((uVar2 == 0x25 || (uVar2 == 0x27)))))
                          ))) {
                        iVar10 = nonimmediate_operand(prVar4,0xf);
                        if (iVar10 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          prVar8 = *(rtx *)(puVar3 + 8);
                          _GLOBAL_OFFSET_TABLE_ = prVar4;
                          iVar10 = general_operand(prVar8,0xf);
                          if (iVar10 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            _register_operand = prVar8;
                            if ((DAT_001cb067 != '\0') &&
                               (((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b ||
                                 (*(short *)prVar8 != 0x2b)) && (pnum_clobbers != (int *)0x0)))) {
                              *pnum_clobbers = 1;
                              return 0x107;
                            }
                            x1 = *(rtx *)&x0->u;
                          }
                        }
                        goto L21791;
                      }
                    }
                    x1 = *(rtx *)&x0->u;
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
                goto L21791;
              }
            }
          }
        }
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
L21791:
  iVar10 = nonimmediate_operand(x1,0xf);
  if (iVar10 != 0) {
    recog_data = x1;
    prVar4 = *(rtx *)&(x0->u).field_0x8;
    if ((prVar4->field_0x2 == '\x0f') && (*(ushort *)prVar4 == 0x68)) {
      prVar4 = *(rtx *)&prVar4->u;
      iVar10 = register_operand(prVar4,0);
      if (iVar10 == 0) {
        x1 = *(rtx *)&x0->u;
      }
      else {
        if (((((target_flags & 2) != 0) &&
             ((((prVar4->field_0x2 == '&' || (prVar4->field_0x2 == '\'')) ||
               (prVar4->field_0x2 == '(')) &&
              (((ix86_isa_flags & 0x40000) != 0 && ((target_flags & 2) != 0)))))) &&
            (((((ix86_isa_flags & 0x10000) == 0 || (prVar4->field_0x2 != '&')) &&
              (((ix86_isa_flags & 0x20000) == 0 || (prVar4->field_0x2 != '\'')))) ||
             ((ix86_fpmath & 2) == 0)))) && ((reload_in_progress == 0 && (reload_completed == 0))))
        {
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          return 0x76;
        }
        x1 = *(rtx *)&x0->u;
        _GLOBAL_OFFSET_TABLE_ = prVar4;
      }
    }
    else {
      iVar10 = general_operand(prVar4,0xf);
      if (iVar10 == 0) {
        x1 = *(rtx *)&x0->u;
      }
      else {
        if ((*(short *)recog_data != 0x2b) || (*(ushort *)prVar4 != 0x2b)) {
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          return 0x2f;
        }
        x1 = *(rtx *)&x0->u;
        _GLOBAL_OFFSET_TABLE_ = prVar4;
      }
    }
  }
  iVar10 = memory_operand(x1,0xf);
  if (iVar10 != 0) {
    recog_data = x1;
    psVar5 = *(short **)&(x0->u).field_0x8;
    if (*(char *)(psVar5 + 1) == '\x0f') {
      if (*psVar5 == 0x12) {
        if ((**(int **)(psVar5 + 4) == 1) && (*(int *)(psVar5 + 8) == 0x21)) {
          psVar5 = *(short **)(*(long *)(psVar5 + 4) + 8);
          if ((((*(char *)(psVar5 + 1) == '\x0f') && (*psVar5 == 0x25)) &&
              (*(int *)(psVar5 + 4) == 0x13)) && ((target_flags & 2) != 0)) {
            return 0x88;
          }
          x1 = *(rtx *)&x0->u;
        }
        else {
          x1 = *(rtx *)&x0->u;
        }
      }
      else if (*psVar5 == 0x68) {
        prVar4 = *(rtx *)(psVar5 + 4);
        iVar10 = register_operand(prVar4,0);
        if (iVar10 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          if ((((((target_flags & 2) != 0) &&
                (((prVar4->field_0x2 == '&' || (prVar4->field_0x2 == '\'')) ||
                 (prVar4->field_0x2 == '(')))) &&
               (((ix86_isa_flags & 0x40000) != 0 && ((target_flags & 2) != 0)))) &&
              (((((ix86_isa_flags & 0x10000) == 0 || (prVar4->field_0x2 != '&')) &&
                (((ix86_isa_flags & 0x20000) == 0 || (prVar4->field_0x2 != '\'')))) ||
               ((ix86_fpmath & 2) == 0)))) && (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x79;
          }
          x1 = *(rtx *)&x0->u;
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
  iVar10 = nonimmediate_operand(x1,0xf);
  if (iVar10 != 0) {
    recog_data = x1;
    puVar6 = *(undefined2 **)&(x0->u).field_0x8;
    if (*(char *)(puVar6 + 1) == '\x0f') {
      switch(*puVar6) {
      case 0x31:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          prVar8 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          if ((prVar8->field_0x2 == '\x0f') && (*(short *)prVar8 == 0x31)) {
            prVar4 = *(rtx *)&prVar8->u;
            iVar10 = ix86_carry_flag_operator(prVar4,0);
            if (((iVar10 != 0) && (_nonimmediate_operand = prVar4, **(short **)&prVar4->u == 0x25))
               && ((*(int *)(*(short **)&prVar4->u + 4) == 0x11 &&
                   (*(long *)&(prVar4->u).field_0x8 == _q_regs_operand)))) {
              prVar4 = *(rtx *)&(prVar8->u).field_0x8;
              iVar10 = general_operand(prVar4,0xf);
              if (((iVar10 != 0) &&
                  (_register_operand = prVar4,
                  iVar10 = ix86_binary_operator_ok(0x31,0xf,&recog_data), iVar10 != 0)) &&
                 (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0xf1;
              }
            }
          }
          else {
            iVar10 = general_operand(prVar8,0xf);
            if (iVar10 != 0) {
              _register_operand = prVar8;
              if (((cfun._1_1_ != '\0') &&
                  (iVar10 = ix86_binary_operator_ok(0x31,0xf,&recog_data), iVar10 != 0)) &&
                 (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 199;
              }
              if (((cfun._1_1_ == '\0') &&
                  (iVar10 = ix86_binary_operator_ok(0x31,0xf,&recog_data), iVar10 != 0)) &&
                 (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 200;
              }
            }
          }
        }
        break;
      case 0x32:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          prVar8 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          if ((prVar8->field_0x2 == '\x0f') && (*(short *)prVar8 == 0x31)) {
            prVar4 = *(rtx *)&prVar8->u;
            iVar10 = ix86_carry_flag_operator(prVar4,0);
            if ((((iVar10 != 0) && (_nonimmediate_operand = prVar4, **(short **)&prVar4->u == 0x25))
                && (*(int *)(*(short **)&prVar4->u + 4) == 0x11)) &&
               (*(long *)&(prVar4->u).field_0x8 == _q_regs_operand)) {
              prVar4 = *(rtx *)&(prVar8->u).field_0x8;
              iVar10 = general_operand(prVar4,0xf);
              if (((iVar10 != 0) &&
                  (_register_operand = prVar4,
                  iVar10 = ix86_binary_operator_ok(0x31,0xf,&recog_data), iVar10 != 0)) &&
                 (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0xf2;
              }
            }
          }
          else {
            iVar10 = general_operand(prVar8,0xf);
            if ((iVar10 != 0) &&
               ((_register_operand = prVar8, iVar10 = ix86_binary_operator_ok(0x32,0xf,&recog_data),
                iVar10 != 0 && (pnum_clobbers != (int *)0x0)))) {
              *pnum_clobbers = 1;
              return 0xe3;
            }
          }
        }
        break;
      case 0x33:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (((iVar10 != 0) &&
            (_GLOBAL_OFFSET_TABLE_ = prVar4, iVar10 = ix86_unary_operator_ok(0x33,0xf,&recog_data),
            iVar10 != 0)) && (pnum_clobbers != (int *)0x0)) {
          *pnum_clobbers = 1;
          return 0x154;
        }
        break;
      case 0x3d:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          prVar8 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = general_operand(prVar8,0xf);
          if (((iVar10 != 0) &&
              (_register_operand = prVar8, iVar10 = ix86_binary_operator_ok(0x3d,0xf,&recog_data),
              iVar10 != 0)) && (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x122;
          }
        }
        break;
      case 0x3e:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          prVar8 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = general_operand(prVar8,0xf);
          if (((iVar10 != 0) &&
              (_register_operand = prVar8, iVar10 = ix86_binary_operator_ok(0x3e,0xf,&recog_data),
              iVar10 != 0)) && (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x12e;
          }
        }
        break;
      case 0x3f:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          prVar8 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = general_operand(prVar8,0xf);
          if (((iVar10 != 0) &&
              (_register_operand = prVar8, iVar10 = ix86_binary_operator_ok(0x3f,0xf,&recog_data),
              iVar10 != 0)) && (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x12f;
          }
        }
        break;
      case 0x40:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if ((iVar10 != 0) &&
           (_GLOBAL_OFFSET_TABLE_ = prVar4, iVar10 = ix86_unary_operator_ok(0x40,0xf,&recog_data),
           iVar10 != 0)) {
          return 0x175;
        }
        break;
      case 0x41:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          prVar8 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = nonmemory_operand(prVar8,0xe);
          if (iVar10 != 0) {
            _register_operand = prVar8;
            if (((cfun._1_1_ == '\0') &&
                (iVar10 = ix86_binary_operator_ok(0x41,0xf,&recog_data), iVar10 != 0)) &&
               (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x182;
            }
            if (((cfun._1_1_ != '\0') &&
                (iVar10 = ix86_binary_operator_ok(0x41,0xf,&recog_data), iVar10 != 0)) &&
               (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x183;
            }
          }
        }
        break;
      case 0x42:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          x2 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = const1_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            if ((((optimize_function_for_speed_p != (code)0x0) ||
                 (cVar9 = optimize_function_for_size_p
                                    (CONCAT44(cfun._4_4_,
                                              CONCAT13(cfun._3_1_,
                                                       CONCAT12(cfun._2_1_,
                                                                CONCAT11(cfun._1_1_,(undefined)cfun)
                                                               )))), cVar9 != '\0')) &&
                (iVar10 = ix86_binary_operator_ok(0x42,0xf,&recog_data), iVar10 != 0)) &&
               (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x1b9;
            }
            x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
          }
          iVar10 = nonmemory_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            iVar10 = ix86_binary_operator_ok(0x42,0xf,&recog_data);
            if ((iVar10 != 0) && (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x1ba;
            }
          }
        }
        break;
      case 0x43:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          x2 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = const1_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            if (((optimize_function_for_speed_p != (code)0x0) ||
                (cVar9 = optimize_function_for_size_p
                                   (CONCAT44(cfun._4_4_,
                                             CONCAT13(cfun._3_1_,
                                                      CONCAT12(cfun._2_1_,
                                                               CONCAT11(cfun._1_1_,(undefined)cfun))
                                                     ))), cVar9 != '\0')) &&
               ((iVar10 = ix86_binary_operator_ok(0x43,0xf,&recog_data), iVar10 != 0 &&
                (pnum_clobbers != (int *)0x0)))) {
              *pnum_clobbers = 1;
              return 0x193;
            }
            x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
          }
          iVar10 = nonmemory_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            iVar10 = ix86_binary_operator_ok(0x43,0xf,&recog_data);
            if ((iVar10 != 0) && (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x194;
            }
          }
        }
        break;
      case 0x44:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          x2 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = const1_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            if ((((optimize_function_for_speed_p != (code)0x0) ||
                 (cVar9 = optimize_function_for_size_p
                                    (CONCAT44(cfun._4_4_,
                                              CONCAT13(cfun._3_1_,
                                                       CONCAT12(cfun._2_1_,
                                                                CONCAT11(cfun._1_1_,(undefined)cfun)
                                                               )))), cVar9 != '\0')) &&
                (iVar10 = ix86_binary_operator_ok(0x44,0xf,&recog_data), iVar10 != 0)) &&
               (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x1a8;
            }
            x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
          }
          iVar10 = nonmemory_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            iVar10 = ix86_binary_operator_ok(0x44,0xf,&recog_data);
            if ((iVar10 != 0) && (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x1a9;
            }
          }
        }
        break;
      case 0x45:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = nonimmediate_operand(prVar4,0xf);
        if (iVar10 != 0) {
          x2 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar10 = const1_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            if (((optimize_function_for_speed_p != (code)0x0) ||
                (cVar9 = optimize_function_for_size_p
                                   (CONCAT44(cfun._4_4_,
                                             CONCAT13(cfun._3_1_,
                                                      CONCAT12(cfun._2_1_,
                                                               CONCAT11(cfun._1_1_,(undefined)cfun))
                                                     ))), cVar9 != '\0')) &&
               ((iVar10 = ix86_binary_operator_ok(0x45,0xf,&recog_data), iVar10 != 0 &&
                (pnum_clobbers != (int *)0x0)))) {
              *pnum_clobbers = 1;
              return 0x1c2;
            }
            x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
          }
          iVar10 = nonmemory_operand(x2,0xe);
          if (iVar10 != 0) {
            _register_operand = x2;
            iVar10 = ix86_binary_operator_ok(0x45,0xf,&recog_data);
            if ((iVar10 != 0) && (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x1c3;
            }
          }
        }
        break;
      case 0x68:
        prVar4 = *(rtx *)(puVar6 + 4);
        iVar10 = register_operand(prVar4,0);
        if ((((((iVar10 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar4, (target_flags & 2) != 0)) &&
              ((prVar4->field_0x2 == '&' ||
               ((prVar4->field_0x2 == '\'' || (prVar4->field_0x2 == '(')))))) &&
             (((ix86_isa_flags & 0x40000) == 0 || ((target_flags & 2) == 0)))) &&
            ((((ix86_isa_flags & 0x10000) == 0 || (prVar4->field_0x2 != '&')) &&
             (((ix86_isa_flags & 0x20000) == 0 || (prVar4->field_0x2 != '\'')))))) &&
           (((reload_in_progress == 0 && (reload_completed == 0)) && (pnum_clobbers != (int *)0x0)))
           ) {
          *pnum_clobbers = 1;
          return 0x7f;
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_2(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  long lVar6;
  short *psVar7;
  short *psVar8;
  rtx prVar9;
  char cVar10;
  int iVar11;
  rtx x1;
  rtx x2;
  rtx *operands;
  rtx x3;
  rtx x4;
  rtx x5;
  
  prVar2 = *(rtx *)&x0->u;
  uVar1 = *(ushort *)prVar2;
  if (uVar1 == 0x78) {
    prVar9 = *(rtx *)&prVar2->u;
    iVar11 = ext_register_operand(prVar9,0);
    if (((iVar11 != 0) &&
        (recog_data = prVar9, *(long *)&(prVar2->u).field_0x8 == _flags_reg_operand)) &&
       (*(long *)&(prVar2->u).field_0x10 == _flags_reg_operand)) {
      x1 = *(rtx *)&(x0->u).field_0x8;
      if (x1->field_0x2 == '\x10') {
        switch(*(undefined2 *)x1) {
        case 0x31:
          psVar3 = *(short **)&x1->u;
          if ((*(char *)(psVar3 + 1) == '\x10') && (*psVar3 == 0x78)) {
            prVar2 = *(rtx *)(psVar3 + 4);
            iVar11 = ext_register_operand(prVar2,0);
            if ((iVar11 != 0) &&
               ((_GLOBAL_OFFSET_TABLE_ = prVar2, *(long *)(psVar3 + 8) == _flags_reg_operand &&
                (*(long *)(psVar3 + 0xc) == _flags_reg_operand)))) {
              prVar2 = *(rtx *)&(x1->u).field_0x8;
              if ((prVar2->field_0x2 == '\x10') && (*(short *)prVar2 == 0x78)) {
                prVar9 = *(rtx *)&prVar2->u;
                iVar11 = ext_register_operand(prVar9,0);
                if ((((iVar11 != 0) &&
                     (_register_operand = prVar9,
                     *(long *)&(prVar2->u).field_0x8 == _flags_reg_operand)) &&
                    (*(long *)&(prVar2->u).field_0x10 == _flags_reg_operand)) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0xdc;
                }
              }
              else {
                iVar11 = general_operand(prVar2,0xe);
                if (iVar11 != 0) {
                  _register_operand = prVar2;
                  if (pnum_clobbers != (int *)0x0) {
                    *pnum_clobbers = 1;
                    return 0xdb;
                  }
                  x1 = *(rtx *)&(x0->u).field_0x8;
                }
              }
            }
          }
          break;
        case 0x3d:
          psVar3 = *(short **)&x1->u;
          if ((*(char *)(psVar3 + 1) == '\x10') && (*psVar3 == 0x78)) {
            prVar2 = *(rtx *)(psVar3 + 4);
            iVar11 = ext_register_operand(prVar2,0);
            if ((iVar11 != 0) &&
               ((_GLOBAL_OFFSET_TABLE_ = prVar2, *(long *)(psVar3 + 8) == _flags_reg_operand &&
                (*(long *)(psVar3 + 0xc) == _flags_reg_operand)))) {
              x2 = *(rtx *)&(x1->u).field_0x8;
              if (x2->field_0x2 == '\x10') {
                if (*(short *)x2 == 99) {
                  prVar2 = *(rtx *)&x2->u;
                  iVar11 = general_operand(prVar2,0xe);
                  if (iVar11 != 0) {
                    _register_operand = prVar2;
                    if (pnum_clobbers != (int *)0x0) {
                      *pnum_clobbers = 1;
                      return 300;
                    }
                    x1 = *(rtx *)&(x0->u).field_0x8;
                    x2 = *(rtx *)&(x1->u).field_0x8;
                  }
                }
                else if (*(short *)x2 == 0x78) {
                  prVar2 = *(rtx *)&x2->u;
                  iVar11 = ext_register_operand(prVar2,0);
                  if ((((iVar11 != 0) &&
                       (_register_operand = prVar2,
                       *(long *)&(x2->u).field_0x8 == _flags_reg_operand)) &&
                      (*(long *)&(x2->u).field_0x10 == _flags_reg_operand)) &&
                     (pnum_clobbers != (int *)0x0)) {
                    *pnum_clobbers = 1;
                    return 0x12d;
                  }
                }
              }
              iVar11 = const_int_operand(x2,0);
              if (iVar11 != 0) {
                _register_operand = x2;
                if (pnum_clobbers != (int *)0x0) {
                  *pnum_clobbers = 1;
                  return 0x12a;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
              }
            }
          }
          break;
        case 0x3e:
          psVar3 = *(short **)&x1->u;
          if ((*(char *)(psVar3 + 1) == '\x10') && (*psVar3 == 0x78)) {
            prVar2 = *(rtx *)(psVar3 + 4);
            iVar11 = ext_register_operand(prVar2,0);
            if ((iVar11 != 0) &&
               ((_GLOBAL_OFFSET_TABLE_ = prVar2, *(long *)(psVar3 + 8) == _flags_reg_operand &&
                (*(long *)(psVar3 + 0xc) == _flags_reg_operand)))) {
              x2 = *(rtx *)&(x1->u).field_0x8;
              if (x2->field_0x2 == '\x10') {
                if (*(short *)x2 == 99) {
                  prVar2 = *(rtx *)&x2->u;
                  iVar11 = general_operand(prVar2,0xe);
                  if (iVar11 != 0) {
                    _register_operand = prVar2;
                    if (((cfun._1_1_ == '\0') ||
                        (cVar10 = optimize_function_for_size_p
                                            (CONCAT17(cfun._7_1_,
                                                      CONCAT16(cfun._6_1_,
                                                               CONCAT42(cfun._2_4_,
                                                                        CONCAT11(cfun._1_1_,
                                                                                 (byte)cfun))))),
                        cVar10 != '\0')) && (pnum_clobbers != (int *)0x0)) {
                      *pnum_clobbers = 1;
                      return 0x14c;
                    }
                    x1 = *(rtx *)&(x0->u).field_0x8;
                    x2 = *(rtx *)&(x1->u).field_0x8;
                  }
                }
                else if (*(short *)x2 == 0x78) {
                  prVar2 = *(rtx *)&x2->u;
                  iVar11 = ext_register_operand(prVar2,0);
                  if ((((iVar11 != 0) &&
                       (_register_operand = prVar2,
                       *(long *)&(x2->u).field_0x8 == _flags_reg_operand)) &&
                      ((*(long *)&(x2->u).field_0x10 == _flags_reg_operand &&
                       ((cfun._1_1_ == '\0' ||
                        (cVar10 = optimize_function_for_size_p
                                            (CONCAT17(cfun._7_1_,
                                                      CONCAT16(cfun._6_1_,
                                                               CONCAT42(cfun._2_4_,
                                                                        CONCAT11(cfun._1_1_,
                                                                                 (byte)cfun))))),
                        cVar10 != '\0')))))) && (pnum_clobbers != (int *)0x0)) {
                    *pnum_clobbers = 1;
                    return 0x14e;
                  }
                }
              }
              iVar11 = const_int_operand(x2,0);
              if (iVar11 != 0) {
                _register_operand = x2;
                if (((cfun._1_1_ == '\0') ||
                    (cVar10 = optimize_function_for_size_p
                                        (CONCAT17(cfun._7_1_,
                                                  CONCAT16(cfun._6_1_,
                                                           CONCAT42(cfun._2_4_,
                                                                    CONCAT11(cfun._1_1_,(byte)cfun))
                                                          ))), cVar10 != '\0')) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x14a;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
              }
            }
          }
          break;
        case 0x3f:
          psVar3 = *(short **)&x1->u;
          if ((*(char *)(psVar3 + 1) == '\x10') && (*psVar3 == 0x78)) {
            prVar2 = *(rtx *)(psVar3 + 4);
            iVar11 = ext_register_operand(prVar2,0);
            if ((iVar11 != 0) &&
               ((_GLOBAL_OFFSET_TABLE_ = prVar2, *(long *)(psVar3 + 8) == _flags_reg_operand &&
                (*(long *)(psVar3 + 0xc) == _flags_reg_operand)))) {
              x2 = *(rtx *)&(x1->u).field_0x8;
              if (x2->field_0x2 == '\x10') {
                if (*(short *)x2 == 99) {
                  prVar2 = *(rtx *)&x2->u;
                  iVar11 = general_operand(prVar2,0xe);
                  if (iVar11 != 0) {
                    _register_operand = prVar2;
                    if (((cfun._1_1_ == '\0') ||
                        (cVar10 = optimize_function_for_size_p
                                            (CONCAT17(cfun._7_1_,
                                                      CONCAT16(cfun._6_1_,
                                                               CONCAT42(cfun._2_4_,
                                                                        CONCAT11(cfun._1_1_,
                                                                                 (byte)cfun))))),
                        cVar10 != '\0')) && (pnum_clobbers != (int *)0x0)) {
                      *pnum_clobbers = 1;
                      return 0x14d;
                    }
                    x1 = *(rtx *)&(x0->u).field_0x8;
                    x2 = *(rtx *)&(x1->u).field_0x8;
                  }
                }
                else if (*(short *)x2 == 0x78) {
                  prVar2 = *(rtx *)&x2->u;
                  iVar11 = ext_register_operand(prVar2,0);
                  if ((((iVar11 != 0) &&
                       (_register_operand = prVar2,
                       *(long *)&(x2->u).field_0x8 == _flags_reg_operand)) &&
                      ((*(long *)&(x2->u).field_0x10 == _flags_reg_operand &&
                       ((cfun._1_1_ == '\0' ||
                        (cVar10 = optimize_function_for_size_p
                                            (CONCAT17(cfun._7_1_,
                                                      CONCAT16(cfun._6_1_,
                                                               CONCAT42(cfun._2_4_,
                                                                        CONCAT11(cfun._1_1_,
                                                                                 (byte)cfun))))),
                        cVar10 != '\0')))))) && (pnum_clobbers != (int *)0x0)) {
                    *pnum_clobbers = 1;
                    return 0x14f;
                  }
                }
              }
              iVar11 = const_int_operand(x2,0);
              if (iVar11 != 0) {
                _register_operand = x2;
                if (((cfun._1_1_ == '\0') ||
                    (cVar10 = optimize_function_for_size_p
                                        (CONCAT17(cfun._7_1_,
                                                  CONCAT16(cfun._6_1_,
                                                           CONCAT42(cfun._2_4_,
                                                                    CONCAT11(cfun._1_1_,(byte)cfun))
                                                          ))), cVar10 != '\0')) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x14b;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
              }
            }
          }
          break;
        case 0x44:
          prVar2 = *(rtx *)&x1->u;
          iVar11 = register_operand(prVar2,0x10);
          if ((iVar11 != 0) &&
             (_GLOBAL_OFFSET_TABLE_ = prVar2, *(long *)&(x1->u).field_0x8 == _flags_reg_operand)) {
            return 0x40;
          }
        }
      }
      iVar11 = general_operand(x1,0x10);
      if (iVar11 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x1;
        return 0x3f;
      }
    }
  }
  else {
    x1 = prVar2;
    if (uVar1 < 0x79) {
      if (uVar1 == 0x2b) {
        iVar11 = push_operand(prVar2,0x10);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)&(x0->u).field_0x8;
          recog_data = prVar2;
          iVar11 = general_no_elim_operand(uVar5,0x10);
          if (iVar11 != 0) {
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
            return 0x26;
          }
          x1 = *(rtx *)&x0->u;
        }
      }
      else if (((uVar1 < 0x2c) && ((uVar1 == 0x25 || (uVar1 == 0x27)))) &&
              (iVar11 = register_operand(prVar2,0x10), iVar11 != 0)) {
        x1 = *(rtx *)&(x0->u).field_0x8;
        recog_data = prVar2;
        if (x1->field_0x2 == '\x10') {
          switch(*(undefined2 *)x1) {
          case 0x62:
            lVar6 = *(long *)&x1->u;
            if (*(char *)(lVar6 + 2) == '\x0e') {
              iVar11 = nonimmediate_operand(lVar6,0xe);
              if (iVar11 != 0) {
                _GLOBAL_OFFSET_TABLE_ = (rtx)lVar6;
                return 0x60;
              }
            }
            else if ((*(char *)(lVar6 + 2) == '\x0f') &&
                    (iVar11 = nonimmediate_operand(lVar6,0xf), iVar11 != 0)) {
              _GLOBAL_OFFSET_TABLE_ = (rtx)lVar6;
              return 0x5e;
            }
            break;
          case 99:
            x2 = *(rtx *)&x1->u;
            if (x2->field_0x2 == '\x0e') {
              iVar11 = nonimmediate_operand(x2,0xe);
              if (iVar11 != 0) {
                _GLOBAL_OFFSET_TABLE_ = x2;
                if (((DAT_001cb052 != '\0') &&
                    (cVar10 = optimize_function_for_speed_p
                                        (CONCAT17(cfun._7_1_,
                                                  CONCAT16(cfun._6_1_,
                                                           CONCAT42(cfun._2_4_,
                                                                    CONCAT11(cfun._1_1_,(byte)cfun))
                                                          ))), cVar10 != '\0')) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x59;
                }
                if (((DAT_001cb052 == '\0') ||
                    (cVar10 = optimize_function_for_size_p
                                        (CONCAT17(cfun._7_1_,
                                                  CONCAT16(cfun._6_1_,
                                                           CONCAT42(cfun._2_4_,
                                                                    CONCAT11(cfun._1_1_,(byte)cfun))
                                                          ))), cVar10 != '\0')) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x5a;
                }
                if (((DAT_001cb052 == '\0') ||
                    (cVar10 = optimize_function_for_size_p
                                        (CONCAT17(cfun._7_1_,
                                                  CONCAT16(cfun._6_1_,
                                                           CONCAT42(cfun._2_4_,
                                                                    CONCAT11(cfun._1_1_,(byte)cfun))
                                                          ))), cVar10 != '\0')) &&
                   (reload_completed != 0)) {
                  return 0x5b;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
              }
            }
            else if (x2->field_0x2 == '\x0f') {
              iVar11 = register_operand(x2,0xf);
              if (iVar11 != 0) {
                _GLOBAL_OFFSET_TABLE_ = x2;
                if (((DAT_001cb052 != '\0') &&
                    (cVar10 = optimize_function_for_speed_p
                                        (CONCAT17(cfun._7_1_,
                                                  CONCAT16(cfun._6_1_,
                                                           CONCAT42(cfun._2_4_,
                                                                    CONCAT11(cfun._1_1_,(byte)cfun))
                                                          ))), cVar10 != '\0')) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x54;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
                x2 = *(rtx *)&x1->u;
              }
              iVar11 = nonimmediate_operand(x2,0xf);
              if (iVar11 != 0) {
                _GLOBAL_OFFSET_TABLE_ = x2;
                if ((DAT_001cb052 == '\0') ||
                   (cVar10 = optimize_function_for_size_p
                                       (CONCAT17(cfun._7_1_,
                                                 CONCAT16(cfun._6_1_,
                                                          CONCAT42(cfun._2_4_,
                                                                   CONCAT11(cfun._1_1_,(byte)cfun)))
                                                )), cVar10 != '\0')) {
                  return 0x55;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
              }
            }
            break;
          case 0x68:
            prVar9 = *(rtx *)&x1->u;
            if (prVar9->field_0x2 == '&') {
              iVar11 = nonimmediate_operand(prVar9,0x26);
              if (iVar11 != 0) {
                if (((ix86_isa_flags & 0x10000) != 0) &&
                   ((((ix86_isa_flags & 0x40000) == 0 || ((target_flags & 2) == 0)) ||
                    ((ix86_fpmath & 2) != 0)))) {
                  _GLOBAL_OFFSET_TABLE_ = prVar9;
                  return 0x74;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
                _GLOBAL_OFFSET_TABLE_ = prVar9;
              }
            }
            else if ((prVar9->field_0x2 == '\'') &&
                    (iVar11 = nonimmediate_operand(prVar9,0x27), iVar11 != 0)) {
              if (((ix86_isa_flags & 0x20000) != 0) &&
                 ((((ix86_isa_flags & 0x40000) == 0 || ((target_flags & 2) == 0)) ||
                  ((ix86_fpmath & 2) != 0)))) {
                _GLOBAL_OFFSET_TABLE_ = prVar9;
                return 0x75;
              }
              x1 = *(rtx *)&(x0->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar9;
            }
            break;
          case 0x77:
            prVar9 = *(rtx *)&x1->u;
            iVar11 = ext_register_operand(prVar9,0);
            if (((iVar11 != 0) &&
                (_GLOBAL_OFFSET_TABLE_ = prVar9, *(long *)&(x1->u).field_0x8 == _flags_reg_operand))
               && (*(long *)&(x1->u).field_0x10 == _flags_reg_operand)) {
              return 0x3a;
            }
            break;
          case 0x78:
            prVar9 = *(rtx *)&x1->u;
            iVar11 = ext_register_operand(prVar9,0);
            if (((iVar11 != 0) &&
                (_GLOBAL_OFFSET_TABLE_ = prVar9, *(long *)&(x1->u).field_0x8 == _flags_reg_operand))
               && (*(long *)&(x1->u).field_0x10 == _flags_reg_operand)) {
              return 0x3d;
            }
          }
        }
        iVar11 = const0_operand(x1,0x10);
        if (iVar11 != 0) {
          _GLOBAL_OFFSET_TABLE_ = x1;
          if ((reload_completed != 0) && (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x2a;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
        }
        iVar11 = immediate_operand(x1,0x10);
        if (iVar11 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          _GLOBAL_OFFSET_TABLE_ = x1;
          if (((reload_completed != 0) && (x1 == flag_trapping_math)) &&
             (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x2b;
          }
          x1 = *(rtx *)&x0->u;
        }
      }
    }
    iVar11 = nonimmediate_operand(x1,0x10);
    if (iVar11 != 0) {
      recog_data = x1;
      prVar2 = *(rtx *)&(x0->u).field_0x8;
      if ((prVar2->field_0x2 == '\x10') && (*(short *)prVar2 == 0x68)) {
        prVar2 = *(rtx *)&prVar2->u;
        iVar11 = register_operand(prVar2,0);
        if (iVar11 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          if ((((target_flags & 2) != 0) &&
              ((((prVar2->field_0x2 == '&' || (prVar2->field_0x2 == '\'')) ||
                (prVar2->field_0x2 == '(')) &&
               (((ix86_isa_flags & 0x40000) != 0 && ((target_flags & 2) != 0)))))) &&
             ((((((ix86_isa_flags & 0x10000) == 0 || (prVar2->field_0x2 != '&')) &&
                (((ix86_isa_flags & 0x20000) == 0 || (prVar2->field_0x2 != '\'')))) ||
               ((ix86_fpmath & 2) == 0)) && ((reload_in_progress == 0 && (reload_completed == 0)))))
             ) {
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            return 0x77;
          }
          x1 = *(rtx *)&x0->u;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
        }
      }
      else {
        iVar11 = general_operand(prVar2,0x10);
        if (iVar11 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          if ((*(ushort *)recog_data != 0x2b) || (*(short *)prVar2 != 0x2b)) {
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            return 0x2c;
          }
          x1 = *(rtx *)&x0->u;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
        }
      }
    }
    iVar11 = memory_operand(x1,0x10);
    if (iVar11 != 0) {
      recog_data = x1;
      psVar3 = *(short **)&(x0->u).field_0x8;
      if ((*(char *)(psVar3 + 1) == '\x10') && (*psVar3 == 0x68)) {
        prVar2 = *(rtx *)(psVar3 + 4);
        iVar11 = register_operand(prVar2,0);
        if (iVar11 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          if ((((((target_flags & 2) != 0) &&
                (((prVar2->field_0x2 == '&' || (prVar2->field_0x2 == '\'')) ||
                 (prVar2->field_0x2 == '(')))) &&
               (((ix86_isa_flags & 0x40000) != 0 && ((target_flags & 2) != 0)))) &&
              (((((ix86_isa_flags & 0x10000) == 0 || (prVar2->field_0x2 != '&')) &&
                (((ix86_isa_flags & 0x20000) == 0 || (prVar2->field_0x2 != '\'')))) ||
               ((ix86_fpmath & 2) == 0)))) && (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x7a;
          }
          x1 = *(rtx *)&x0->u;
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
    iVar11 = nonimmediate_operand(x1,0x10);
    if (iVar11 != 0) {
      recog_data = x1;
      psVar3 = *(short **)&(x0->u).field_0x8;
      if ((*(char *)(psVar3 + 1) == '\x10') && (*psVar3 == 0x68)) {
        prVar2 = *(rtx *)(psVar3 + 4);
        iVar11 = register_operand(prVar2,0);
        if (iVar11 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          if (((((target_flags & 2) != 0) &&
               (((prVar2->field_0x2 == '&' || (prVar2->field_0x2 == '\'')) ||
                (prVar2->field_0x2 == '(')))) &&
              ((((ix86_isa_flags & 0x40000) == 0 || ((target_flags & 2) == 0)) &&
               (((ix86_isa_flags & 0x10000) == 0 || (prVar2->field_0x2 != '&')))))) &&
             ((((ix86_isa_flags & 0x20000) == 0 || (prVar2->field_0x2 != '\'')) &&
              ((reload_in_progress == 0 &&
               ((reload_completed == 0 && (pnum_clobbers != (int *)0x0)))))))) {
            *pnum_clobbers = 1;
            return 0x80;
          }
          x1 = *(rtx *)&x0->u;
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
    iVar11 = register_operand(x1,0x10);
    if (iVar11 != 0) {
      recog_data = x1;
      prVar2 = *(rtx *)&(x0->u).field_0x8;
      if (prVar2->field_0x2 == '\x10') {
        if (*(short *)prVar2 == 100) {
          psVar3 = *(short **)&prVar2->u;
          if ((((*(char *)(psVar3 + 1) == '\x11') && (*psVar3 == 0x44)) &&
              (psVar7 = *(short **)(psVar3 + 4), *(char *)(psVar7 + 1) == '\x11')) &&
             ((*psVar7 == 0x34 &&
              (psVar8 = *(short **)(psVar7 + 4), *(char *)(psVar8 + 1) == '\x11')))) {
            if (*psVar8 == 0x62) {
              prVar9 = *(rtx *)(psVar8 + 4);
              iVar11 = nonimmediate_operand(prVar9,0x10);
              if (((iVar11 != 0) &&
                  (psVar7 = *(short **)(psVar7 + 8), _GLOBAL_OFFSET_TABLE_ = prVar9,
                  *(char *)(psVar7 + 1) == '\x11')) && (*psVar7 == 0x62)) {
                prVar9 = *(rtx *)(psVar7 + 4);
                iVar11 = nonimmediate_operand(prVar9,0x10);
                if ((((iVar11 != 0) &&
                     (_register_operand = prVar9, *(long *)(psVar3 + 8) == _gen_split_1851)) &&
                    ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*(short *)prVar9 != 0x2b)))) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 2;
                  return 0x10d;
                }
              }
            }
            else if (*psVar8 == 99) {
              prVar9 = *(rtx *)(psVar8 + 4);
              iVar11 = nonimmediate_operand(prVar9,0x10);
              if (((iVar11 != 0) &&
                  (psVar7 = *(short **)(psVar7 + 8), _GLOBAL_OFFSET_TABLE_ = prVar9,
                  *(char *)(psVar7 + 1) == '\x11')) && (*psVar7 == 99)) {
                prVar9 = *(rtx *)(psVar7 + 4);
                iVar11 = nonimmediate_operand(prVar9,0x10);
                if ((((iVar11 != 0) &&
                     (_register_operand = prVar9, *(long *)(psVar3 + 8) == _gen_split_1851)) &&
                    ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*(short *)prVar9 != 0x2b)))) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 2;
                  return 0x10e;
                }
              }
            }
          }
        }
        else {
          iVar11 = ix86_comparison_operator(prVar2,0x10);
          if (((iVar11 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, **(short **)&prVar2->u == 0x25)) &&
             ((*(int *)(*(short **)&prVar2->u + 4) == 0x11 &&
              ((psVar3 = *(short **)&(prVar2->u).field_0x8, *psVar3 == 0x1e &&
               (*(long *)(psVar3 + 4) == 0)))))) {
            if ((cfun._1_1_ == '\0') &&
               (((DAT_001cb052 != '\0' &&
                 (cVar10 = optimize_function_for_speed_p
                                     (CONCAT17(cfun._7_1_,
                                               CONCAT16(cfun._6_1_,
                                                        CONCAT42(cfun._2_4_,(ushort)(byte)cfun)))),
                 cVar10 != '\0')) && (pnum_clobbers != (int *)0x0)))) {
              *pnum_clobbers = 1;
              return 0x1c9;
            }
            if ((cfun._1_1_ == '\0') &&
               ((DAT_001cb052 == '\0' ||
                (cVar10 = optimize_function_for_size_p
                                    (CONCAT17(cfun._7_1_,
                                              CONCAT16(cfun._6_1_,
                                                       CONCAT42(cfun._2_4_,(ushort)(byte)cfun)))),
                cVar10 != '\0')))) {
              return 0x1ca;
            }
          }
        }
      }
      iVar11 = no_seg_address_operand(prVar2,0x10);
      if (iVar11 != 0) {
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        return 0xc4;
      }
      if ((prVar2->field_0x2 == '\x10') && (*(short *)prVar2 == 0x34)) {
        prVar9 = *(rtx *)&prVar2->u;
        iVar11 = nonimmediate_operand(prVar9,0x10);
        if (iVar11 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          prVar2 = *(rtx *)&(prVar2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar9;
          iVar11 = general_operand(prVar2,0x10);
          if (iVar11 == 0) {
            x1 = *(rtx *)&x0->u;
          }
          else {
            _register_operand = prVar2;
            if (((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b) || (*(short *)prVar2 != 0x2b)) &&
               (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x106;
            }
            x1 = *(rtx *)&x0->u;
          }
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
    iVar11 = nonimmediate_operand(x1,0x10);
    if (iVar11 != 0) {
      recog_data = x1;
      puVar4 = *(undefined2 **)&(x0->u).field_0x8;
      if (*(char *)(puVar4 + 1) == '\x10') {
        switch(*puVar4) {
        case 0x31:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            prVar9 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            if ((prVar9->field_0x2 == '\x10') && (*(short *)prVar9 == 0x31)) {
              lVar6 = *(long *)&prVar9->u;
              iVar11 = ix86_carry_flag_operator(lVar6,0);
              if ((((iVar11 != 0) &&
                   (_nonimmediate_operand = lVar6, **(short **)(lVar6 + 8) == 0x25)) &&
                  (*(int *)(*(short **)(lVar6 + 8) + 4) == 0x11)) &&
                 (*(long *)(lVar6 + 0x10) == _q_regs_operand)) {
                prVar2 = *(rtx *)&(prVar9->u).field_0x8;
                iVar11 = general_operand(prVar2,0x10);
                if (((iVar11 != 0) &&
                    (_register_operand = prVar2,
                    iVar11 = ix86_binary_operator_ok(0x31,0x10,&recog_data), iVar11 != 0)) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0xf3;
                }
              }
            }
            else {
              iVar11 = general_operand(prVar9,0x10);
              if ((iVar11 != 0) &&
                 ((_register_operand = prVar9,
                  iVar11 = ix86_binary_operator_ok(0x31,0x10,&recog_data), iVar11 != 0 &&
                  (pnum_clobbers != (int *)0x0)))) {
                *pnum_clobbers = 1;
                return 0xc5;
              }
            }
          }
          break;
        case 0x32:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            prVar9 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            if ((prVar9->field_0x2 == '\x10') && (*(short *)prVar9 == 0x31)) {
              lVar6 = *(long *)&prVar9->u;
              iVar11 = ix86_carry_flag_operator(lVar6,0);
              if ((((iVar11 != 0) &&
                   (_nonimmediate_operand = lVar6, **(short **)(lVar6 + 8) == 0x25)) &&
                  (*(int *)(*(short **)(lVar6 + 8) + 4) == 0x11)) &&
                 (*(long *)(lVar6 + 0x10) == _q_regs_operand)) {
                prVar2 = *(rtx *)&(prVar9->u).field_0x8;
                iVar11 = general_operand(prVar2,0x10);
                if (((iVar11 != 0) &&
                    (_register_operand = prVar2,
                    iVar11 = ix86_binary_operator_ok(0x31,0x10,&recog_data), iVar11 != 0)) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0xf4;
                }
              }
            }
            else {
              iVar11 = general_operand(prVar9,0x10);
              if ((iVar11 != 0) &&
                 ((_register_operand = prVar9,
                  iVar11 = ix86_binary_operator_ok(0x32,0x10,&recog_data), iVar11 != 0 &&
                  (pnum_clobbers != (int *)0x0)))) {
                *pnum_clobbers = 1;
                return 0xe4;
              }
            }
          }
          break;
        case 0x33:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (((iVar11 != 0) &&
              (_GLOBAL_OFFSET_TABLE_ = prVar2,
              iVar11 = ix86_unary_operator_ok(0x33,0x10,&recog_data), iVar11 != 0)) &&
             (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x155;
          }
          break;
        case 0x3d:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            prVar9 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar11 = general_operand(prVar9,0x10);
            if (((iVar11 != 0) &&
                (_register_operand = prVar9, iVar11 = ix86_binary_operator_ok(0x3d,0x10,&recog_data)
                , iVar11 != 0)) && (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x121;
            }
          }
          break;
        case 0x3e:
          prVar2 = *(rtx *)(puVar4 + 4);
          if (prVar2->field_0x2 == '\x10') {
            switch(*(short *)prVar2) {
            case 0x25:
            case 0x27:
            case 0x2b:
              iVar11 = nonimmediate_operand(prVar2,0x10);
              if (iVar11 != 0) {
                prVar9 = *(rtx *)(puVar4 + 8);
                _GLOBAL_OFFSET_TABLE_ = prVar2;
                iVar11 = general_operand(prVar9,0x10);
                if (((iVar11 != 0) &&
                    (_register_operand = prVar9,
                    iVar11 = ix86_binary_operator_ok(0x3e,0x10,&recog_data), iVar11 != 0)) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x130;
                }
              }
              break;
            case 0x41:
              iVar11 = rtx_equal_p(*(undefined8 *)&prVar2->u,x1);
              if (iVar11 != 0) {
                prVar2 = *(rtx *)&(prVar2->u).field_0x8;
                iVar11 = nonmemory_operand(prVar2,0xe);
                if (((iVar11 != 0) &&
                    (psVar3 = *(short **)(puVar4 + 8), _register_operand = prVar2,
                    *(char *)(psVar3 + 1) == '\x10')) && (*psVar3 == 0x44)) {
                  prVar2 = *(rtx *)(psVar3 + 4);
                  iVar11 = register_operand(prVar2,0x10);
                  if (((iVar11 != 0) &&
                      (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar2,
                      *(char *)(psVar3 + 1) == '\x0e')) &&
                     (((*psVar3 == 0x32 &&
                       ((*(long *)(psVar3 + 4) == _gen_split_1851 &&
                        (iVar11 = rtx_equal_p(*(undefined8 *)(psVar3 + 8),_register_operand),
                        iVar11 != 0)))) && (pnum_clobbers != (int *)0x0)))) {
                    *pnum_clobbers = 1;
                    return 0x17e;
                  }
                }
              }
              break;
            case 0x43:
              iVar11 = rtx_equal_p(*(undefined8 *)&prVar2->u,x1);
              if (iVar11 != 0) {
                prVar2 = *(rtx *)&(prVar2->u).field_0x8;
                iVar11 = nonmemory_operand(prVar2,0xe);
                if (((iVar11 != 0) &&
                    (psVar3 = *(short **)(puVar4 + 8), _register_operand = prVar2,
                    *(char *)(psVar3 + 1) == '\x10')) && (*psVar3 == 0x41)) {
                  prVar2 = *(rtx *)(psVar3 + 4);
                  iVar11 = register_operand(prVar2,0x10);
                  if ((((iVar11 != 0) &&
                       (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar2,
                       *(char *)(psVar3 + 1) == '\x0e')) &&
                      ((*psVar3 == 0x32 &&
                       ((*(long *)(psVar3 + 4) == _gen_split_1851 &&
                        (iVar11 = rtx_equal_p(*(undefined8 *)(psVar3 + 8),_register_operand),
                        iVar11 != 0)))))) && (pnum_clobbers != (int *)0x0)) {
                    *pnum_clobbers = 1;
                    return 0x18b;
                  }
                }
              }
            }
          }
          break;
        case 0x3f:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            prVar9 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar11 = general_operand(prVar9,0x10);
            if (((iVar11 != 0) &&
                (_register_operand = prVar9, iVar11 = ix86_binary_operator_ok(0x3f,0x10,&recog_data)
                , iVar11 != 0)) && (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x131;
            }
          }
          break;
        case 0x40:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if ((iVar11 != 0) &&
             (_GLOBAL_OFFSET_TABLE_ = prVar2, iVar11 = ix86_unary_operator_ok(0x40,0x10,&recog_data)
             , iVar11 != 0)) {
            return 0x176;
          }
          break;
        case 0x41:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            prVar9 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar11 = nonmemory_operand(prVar9,0xe);
            if (((iVar11 != 0) &&
                (_register_operand = prVar9, iVar11 = ix86_binary_operator_ok(0x41,0x10,&recog_data)
                , iVar11 != 0)) && (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x17f;
            }
          }
          break;
        case 0x42:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            x2 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar11 = const1_operand(x2,0xe);
            if (iVar11 != 0) {
              _register_operand = x2;
              if (((optimize_function_for_speed_p != (code)0x0) ||
                  (cVar10 = optimize_function_for_size_p
                                      (CONCAT17(cfun._7_1_,
                                                CONCAT16(cfun._6_1_,
                                                         CONCAT42(cfun._2_4_,
                                                                  CONCAT11(cfun._1_1_,(byte)cfun))))
                                      ), cVar10 != '\0')) &&
                 ((iVar11 = ix86_binary_operator_ok(0x42,0x10,&recog_data), iVar11 != 0 &&
                  (pnum_clobbers != (int *)0x0)))) {
                *pnum_clobbers = 1;
                return 0x1b7;
              }
              x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
            }
            iVar11 = nonmemory_operand(x2,0xe);
            if (iVar11 != 0) {
              _register_operand = x2;
              iVar11 = ix86_binary_operator_ok(0x42,0x10,&recog_data);
              if ((iVar11 != 0) && (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x1b8;
              }
            }
          }
          break;
        case 0x43:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            x2 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            if (*(short *)x2 == 0x1e) {
              iVar11 = const_int_operand(x2,0x10);
              if (iVar11 != 0) {
                _register_operand = x2;
                if ((((*(long *)&x2->u == 0x1f) &&
                     ((cfun._6_1_ != '\0' ||
                      (cVar10 = optimize_function_for_size_p
                                          (CONCAT17(cfun._7_1_,
                                                    (uint7)CONCAT42(cfun._2_4_,
                                                                    CONCAT11(cfun._1_1_,(byte)cfun))
                                                   )), cVar10 != '\0')))) &&
                    (iVar11 = ix86_binary_operator_ok(0x43,0x10,&recog_data), iVar11 != 0)) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x18c;
                }
                x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
              }
              iVar11 = const1_operand(x2,0xe);
              if (iVar11 != 0) {
                _register_operand = x2;
                if ((((optimize_function_for_speed_p != (code)0x0) ||
                     (cVar10 = optimize_function_for_size_p
                                         (CONCAT17(cfun._7_1_,
                                                   CONCAT16(cfun._6_1_,
                                                            CONCAT42(cfun._2_4_,
                                                                     CONCAT11(cfun._1_1_,(byte)cfun)
                                                                    )))), cVar10 != '\0')) &&
                    (iVar11 = ix86_binary_operator_ok(0x43,0x10,&recog_data), iVar11 != 0)) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x18d;
                }
                x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
              }
            }
            iVar11 = nonmemory_operand(x2,0xe);
            if (iVar11 != 0) {
              _register_operand = x2;
              iVar11 = ix86_binary_operator_ok(0x43,0x10,&recog_data);
              if ((iVar11 != 0) && (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x18e;
              }
            }
          }
          break;
        case 0x44:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            x2 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar11 = const1_operand(x2,0xe);
            if (iVar11 != 0) {
              _register_operand = x2;
              if ((((optimize_function_for_speed_p != (code)0x0) ||
                   (cVar10 = optimize_function_for_size_p
                                       (CONCAT17(cfun._7_1_,
                                                 CONCAT16(cfun._6_1_,
                                                          CONCAT42(cfun._2_4_,
                                                                   CONCAT11(cfun._1_1_,(byte)cfun)))
                                                )), cVar10 != '\0')) &&
                  (iVar11 = ix86_binary_operator_ok(0x44,0xf,&recog_data), iVar11 != 0)) &&
                 (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x1a2;
              }
              x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
            }
            iVar11 = nonmemory_operand(x2,0xe);
            if (iVar11 != 0) {
              _register_operand = x2;
              iVar11 = ix86_binary_operator_ok(0x44,0xf,&recog_data);
              if ((iVar11 != 0) && (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x1a3;
              }
            }
          }
          break;
        case 0x45:
          prVar2 = *(rtx *)(puVar4 + 4);
          iVar11 = nonimmediate_operand(prVar2,0x10);
          if (iVar11 != 0) {
            x2 = *(rtx *)(puVar4 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar11 = const1_operand(x2,0xe);
            if (iVar11 != 0) {
              _register_operand = x2;
              if (((optimize_function_for_speed_p != (code)0x0) ||
                  (cVar10 = optimize_function_for_size_p
                                      (CONCAT17(cfun._7_1_,
                                                CONCAT16(cfun._6_1_,
                                                         CONCAT42(cfun._2_4_,
                                                                  CONCAT11(cfun._1_1_,(byte)cfun))))
                                      ), cVar10 != '\0')) &&
                 ((iVar11 = ix86_binary_operator_ok(0x45,0x10,&recog_data), iVar11 != 0 &&
                  (pnum_clobbers != (int *)0x0)))) {
                *pnum_clobbers = 1;
                return 0x1c0;
              }
              x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
            }
            iVar11 = nonmemory_operand(x2,0xe);
            if (iVar11 != 0) {
              _register_operand = x2;
              iVar11 = ix86_binary_operator_ok(0x45,0x10,&recog_data);
              if ((iVar11 != 0) && (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x1c1;
              }
            }
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_3(rtx x0,rtx insn,int *pnum_clobbers)

{
  byte bVar1;
  short *psVar2;
  long lVar3;
  short *psVar4;
  long lVar5;
  undefined8 uVar6;
  rtx prVar7;
  rtx prVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x4;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  x2 = *(rtx *)&x1->u;
  bVar1 = x2->field_0x2;
  if (bVar1 == 0x11) {
    switch(*(short *)x2) {
    case 0x25:
    case 0x27:
    case 0x2b:
      iVar10 = nonimmediate_operand(x2,0x11);
      if (iVar10 != 0) {
        prVar8 = *(rtx *)&(x1->u).field_0x8;
        recog_data = x2;
        iVar10 = const0_operand(prVar8,0x11);
        x2 = prVar8;
        if (iVar10 != 0) {
          _GLOBAL_OFFSET_TABLE_ = prVar8;
          ix86_match_ccmode(insn,5);
          x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
        }
        iVar10 = x86_64_general_operand(x2,0x11);
        if (iVar10 != 0) {
          _GLOBAL_OFFSET_TABLE_ = x2;
          ix86_match_ccmode(insn,2);
        }
      }
      break;
    case 0x31:
      prVar8 = *(rtx *)&x2->u;
      iVar10 = nonimmediate_operand(prVar8,0x11);
      if (iVar10 != 0) {
        prVar7 = *(rtx *)&(x2->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar8;
        iVar10 = x86_64_general_operand(prVar7,0x11);
        if ((((iVar10 != 0) &&
             (_register_operand = prVar7, *(long *)&(x1->u).field_0x8 == _q_regs_operand)) &&
            (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)) &&
           ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*(short *)_register_operand != 0x2b)))) {
          pic_symbolic_operand(_register_operand,0);
        }
      }
      break;
    case 0x32:
      prVar8 = *(rtx *)&x2->u;
      iVar10 = nonimmediate_operand(prVar8,0x11);
      if (iVar10 != 0) {
        prVar7 = *(rtx *)&(x2->u).field_0x8;
        recog_data = prVar8;
        iVar10 = x86_64_general_operand(prVar7,0x11);
        if ((iVar10 != 0) &&
           (_GLOBAL_OFFSET_TABLE_ = prVar7, *(long *)&(x1->u).field_0x8 == _q_regs_operand)) {
          ix86_match_ccmode(insn,4);
        }
      }
      break;
    case 0x33:
      prVar8 = *(rtx *)&x2->u;
      iVar10 = x86_64_general_operand(prVar8,0x11);
      if (iVar10 != 0) {
        prVar7 = *(rtx *)&(x1->u).field_0x8;
        _register_operand = prVar8;
        iVar10 = nonimmediate_operand(prVar7,0x11);
        if (((iVar10 != 0) &&
            (_GLOBAL_OFFSET_TABLE_ = prVar7, iVar10 = ix86_match_ccmode(insn,10), iVar10 != 0)) &&
           ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*(short *)_register_operand != 0x2b)))) {
          pic_symbolic_operand(_register_operand,0);
        }
      }
      break;
    case 0x3e:
      prVar8 = *(rtx *)&x2->u;
      iVar10 = nonimmediate_operand(prVar8,0x11);
      if (iVar10 != 0) {
        prVar7 = *(rtx *)&(x2->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar8;
        iVar10 = x86_64_general_operand(prVar7,0x11);
        if (((iVar10 != 0) &&
            (_register_operand = prVar7, *(long *)&(x1->u).field_0x8 == _q_regs_operand)) &&
           (iVar10 = ix86_match_ccmode(insn,5), iVar10 != 0)) {
          ix86_binary_operator_ok(0x3e,0x11,&recog_data);
        }
      }
      break;
    case 0x3f:
      prVar8 = *(rtx *)&x2->u;
      iVar10 = nonimmediate_operand(prVar8,0x11);
      if (iVar10 != 0) {
        prVar7 = *(rtx *)&(x2->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar8;
        iVar10 = x86_64_general_operand(prVar7,0x11);
        if (((iVar10 != 0) &&
            (_register_operand = prVar7, *(long *)&(x1->u).field_0x8 == _q_regs_operand)) &&
           (iVar10 = ix86_match_ccmode(insn,5), iVar10 != 0)) {
          ix86_binary_operator_ok(0x3f,0x11,&recog_data);
        }
      }
    }
  }
  else {
    if (bVar1 < 0x12) {
      if (bVar1 == 0x10) {
        switch(*(short *)x2) {
        case 0x25:
        case 0x27:
        case 0x2b:
          iVar10 = nonimmediate_operand(x2,0x10);
          if (iVar10 != 0) {
            prVar8 = *(rtx *)&(x1->u).field_0x8;
            recog_data = x2;
            iVar10 = const0_operand(prVar8,0x10);
            x2 = prVar8;
            if (iVar10 != 0) {
              _GLOBAL_OFFSET_TABLE_ = prVar8;
              iVar10 = ix86_match_ccmode(insn,5);
              if (iVar10 != 0) {
                return 2;
              }
              x1 = *(rtx *)&(x0->u).field_0x8;
              x2 = *(rtx *)&(x1->u).field_0x8;
            }
            iVar10 = general_operand(x2,0x10);
            if (iVar10 == 0) {
              x2 = *(rtx *)&x1->u;
            }
            else {
              _GLOBAL_OFFSET_TABLE_ = x2;
              iVar10 = ix86_match_ccmode(insn,2);
              if (iVar10 != 0) {
                return 6;
              }
              x1 = *(rtx *)&(x0->u).field_0x8;
              x2 = *(rtx *)&x1->u;
            }
          }
        default:
          iVar10 = nonimmediate_operand(x2,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          _GLOBAL_OFFSET_TABLE_ = x2;
          lVar3 = *(long *)&(x1->u).field_0x8;
          iVar10 = const_int_operand(lVar3,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          _register_operand = (rtx)lVar3;
          iVar10 = ix86_match_ccmode(insn,3);
          if (iVar10 == 0) {
            return -1;
          }
          if ((*(ulong *)((long)_register_operand + 8) & 0xffffffff) == 0x80000000) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0xd4;
        case 0x31:
          psVar2 = *(short **)&x2->u;
          iVar10 = nonimmediate_operand(psVar2,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          psVar4 = *(short **)&(x2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = (rtx)psVar2;
          iVar10 = general_operand(psVar4,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            _register_operand = (rtx)psVar4;
            return -1;
          }
          _register_operand = (rtx)psVar4;
          iVar10 = ix86_match_ccmode(insn,4);
          if (iVar10 == 0) {
            return -1;
          }
          if ((*(short *)_GLOBAL_OFFSET_TABLE_ == 0x2b) && (*(short *)_register_operand == 0x2b)) {
            return -1;
          }
          iVar10 = pic_symbolic_operand(_register_operand,0);
          if (iVar10 != 0) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0xd7;
        case 0x32:
          uVar11 = *(undefined8 *)&x2->u;
          iVar10 = nonimmediate_operand(uVar11,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)&(x2->u).field_0x8;
          recog_data = (rtx)uVar11;
          iVar10 = general_operand(uVar6,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar6;
            return -1;
          }
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar6;
          iVar10 = ix86_match_ccmode(insn,4);
          if (iVar10 == 0) {
            return -1;
          }
          return 10;
        case 0x33:
          psVar2 = *(short **)&x2->u;
          iVar10 = general_operand(psVar2,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          psVar4 = *(short **)&(x1->u).field_0x8;
          _register_operand = (rtx)psVar2;
          iVar10 = nonimmediate_operand(psVar4,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          _GLOBAL_OFFSET_TABLE_ = (rtx)psVar4;
          iVar10 = ix86_match_ccmode(insn,10);
          if (iVar10 == 0) {
            return -1;
          }
          if ((*(short *)_GLOBAL_OFFSET_TABLE_ == 0x2b) && (*(short *)_register_operand == 0x2b)) {
            return -1;
          }
          iVar10 = pic_symbolic_operand(_register_operand,0);
          if (iVar10 != 0) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0xd0;
        case 0x3d:
          goto code_r0x0010741f;
        case 0x3e:
          uVar11 = *(undefined8 *)&x2->u;
          iVar10 = nonimmediate_operand(uVar11,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)&(x2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
          iVar10 = general_operand(uVar6,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            _register_operand = (rtx)uVar6;
            return -1;
          }
          _register_operand = (rtx)uVar6;
          iVar10 = ix86_match_ccmode(insn,5);
          if (iVar10 == 0) {
            return -1;
          }
          iVar10 = ix86_binary_operator_ok(0x3e,0x10,&recog_data);
          if (iVar10 == 0) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0x146;
        case 0x3f:
          uVar11 = *(undefined8 *)&x2->u;
          iVar10 = nonimmediate_operand(uVar11,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)&(x2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
          iVar10 = general_operand(uVar6,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            _register_operand = (rtx)uVar6;
            return -1;
          }
          _register_operand = (rtx)uVar6;
          iVar10 = ix86_match_ccmode(insn,5);
          if (iVar10 == 0) {
            return -1;
          }
          iVar10 = ix86_binary_operator_ok(0x3f,0x10,&recog_data);
          if (iVar10 == 0) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0x147;
        case 0x41:
          uVar11 = *(undefined8 *)&x2->u;
          iVar10 = nonimmediate_operand(uVar11,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          prVar8 = *(rtx *)&(x2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
          iVar10 = const_1_to_31_operand(prVar8,0xe);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            _register_operand = prVar8;
            return -1;
          }
          _register_operand = prVar8;
          cVar9 = optimize_function_for_size_p
                            (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)));
          if ((cVar9 == '\0') && (cfun._2_1_ != '\0')) {
            if (_register_operand != _bt_comparison_operator) {
              return -1;
            }
            if ((optimize_function_for_speed_p == (code)0x0) && (DAT_001cb056 == '\0')) {
              return -1;
            }
          }
          iVar10 = ix86_match_ccmode(insn,4);
          if (iVar10 == 0) {
            return -1;
          }
          iVar10 = ix86_binary_operator_ok(0x41,0x10,&recog_data);
          if (iVar10 == 0) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0x181;
        case 0x43:
          uVar11 = *(undefined8 *)&x2->u;
          iVar10 = nonimmediate_operand(uVar11,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          x3 = *(rtx *)&(x2->u).field_0x8;
          if (*(short *)x3 != 0x1e) {
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
            return -1;
          }
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
          iVar10 = const1_operand(x3,0xe);
          if (iVar10 != 0) {
            _register_operand = x3;
            if (((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                (((optimize_function_for_speed_p != (code)0x0 ||
                  (cVar9 = optimize_function_for_size_p
                                     (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun))),
                  cVar9 != '\0')) && (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)))) &&
               ((iVar10 = ix86_binary_operator_ok(0x43,0x10,&recog_data), iVar10 != 0 &&
                (pnum_clobbers != (int *)0x0)))) {
              *pnum_clobbers = 1;
              return 400;
            }
            x3 = *(rtx *)(*(long *)&x1->u + 0x10);
          }
          iVar10 = const_1_to_31_operand(x3,0xe);
          if (iVar10 == 0) {
            return -1;
          }
          _register_operand = x3;
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            return -1;
          }
          cVar9 = optimize_function_for_size_p
                            (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)));
          if ((cVar9 == '\0') && (cfun._2_1_ != '\0')) {
            return -1;
          }
          iVar10 = ix86_match_ccmode(insn,4);
          if (iVar10 == 0) {
            return -1;
          }
          iVar10 = ix86_binary_operator_ok(0x43,0x10,&recog_data);
          if (iVar10 == 0) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0x192;
        case 0x44:
          uVar11 = *(undefined8 *)&x2->u;
          iVar10 = nonimmediate_operand(uVar11,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          x3 = *(rtx *)&(x2->u).field_0x8;
          if (*(short *)x3 != 0x1e) {
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
            return -1;
          }
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
          iVar10 = const1_operand(x3,0xe);
          if (iVar10 != 0) {
            _register_operand = x3;
            if ((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
               ((((optimize_function_for_speed_p != (code)0x0 ||
                  (cVar9 = optimize_function_for_size_p
                                     (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun))),
                  cVar9 != '\0')) && (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)) &&
                ((iVar10 = ix86_binary_operator_ok(0x44,0xf,&recog_data), iVar10 != 0 &&
                 (pnum_clobbers != (int *)0x0)))))) {
              *pnum_clobbers = 1;
              return 0x1a5;
            }
            x3 = *(rtx *)(*(long *)&x1->u + 0x10);
          }
          iVar10 = const_1_to_31_operand(x3,0xe);
          if (iVar10 == 0) {
            return -1;
          }
          _register_operand = x3;
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            return -1;
          }
          cVar9 = optimize_function_for_size_p
                            (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)));
          if ((cVar9 == '\0') && (cfun._2_1_ != '\0')) {
            return -1;
          }
          iVar10 = ix86_match_ccmode(insn,4);
          if (iVar10 == 0) {
            return -1;
          }
          iVar10 = ix86_binary_operator_ok(0x44,0xf,&recog_data);
          if (iVar10 == 0) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0x1a7;
        case 0x78:
          lVar3 = *(long *)&x2->u;
          iVar10 = nonimmediate_operand(lVar3,0);
          if (iVar10 == 0) {
            return -1;
          }
          lVar5 = *(long *)&(x2->u).field_0x8;
          recog_data = (rtx)lVar3;
          iVar10 = const_int_operand(lVar5,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          lVar3 = *(long *)&(x2->u).field_0x10;
          _GLOBAL_OFFSET_TABLE_ = (rtx)lVar5;
          iVar10 = const_int_operand(lVar3,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
            _register_operand = (rtx)lVar3;
            return -1;
          }
          _register_operand = (rtx)lVar3;
          iVar10 = ix86_match_ccmode(insn,5);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)((long)_GLOBAL_OFFSET_TABLE_ + 8) < 1) {
            return -1;
          }
          if (*(long *)((long)_register_operand + 8) < 0) {
            return -1;
          }
          if (0x20 < *(long *)((long)_register_operand + 8) +
                     *(long *)((long)_GLOBAL_OFFSET_TABLE_ + 8)) {
            return -1;
          }
          if (((*(char *)((long)recog_data + 2) != '\x10') &&
              (*(char *)((long)recog_data + 2) != '\x0f')) &&
             (*(char *)((long)recog_data + 2) != '\x0e')) {
            return -1;
          }
          return 0x120;
        }
      }
      if (bVar1 < 0x11) {
        if (bVar1 == 0xe) {
          switch(*(short *)x2) {
          case 0x25:
          case 0x27:
          case 0x2b:
            iVar10 = nonimmediate_operand(x2,0xe);
            if (iVar10 != 0) {
              prVar8 = *(rtx *)&(x1->u).field_0x8;
              recog_data = x2;
              iVar10 = const0_operand(prVar8,0xe);
              x2 = prVar8;
              if (iVar10 != 0) {
                _GLOBAL_OFFSET_TABLE_ = prVar8;
                iVar10 = ix86_match_ccmode(insn,5);
                if (iVar10 != 0) {
                  return 0;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
                x2 = *(rtx *)&(x1->u).field_0x8;
              }
              iVar10 = general_operand(x2,0xe);
              if (iVar10 == 0) {
                x2 = *(rtx *)&x1->u;
              }
              else {
                _GLOBAL_OFFSET_TABLE_ = x2;
                iVar10 = ix86_match_ccmode(insn,2);
                if (iVar10 != 0) {
                  return 4;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
                x2 = *(rtx *)&x1->u;
              }
            }
          default:
            if ((((*(short *)x2 == 0x27) && (*(int *)&(x2->u).field_0x8 == 0)) &&
                (psVar2 = *(short **)&x2->u, *(char *)(psVar2 + 1) == '\x10')) && (*psVar2 == 0x78))
            {
              prVar8 = *(rtx *)(psVar2 + 4);
              iVar10 = ext_register_operand(prVar8,0);
              if (((iVar10 != 0) &&
                  (recog_data = prVar8, *(long *)(psVar2 + 8) == _flags_reg_operand)) &&
                 (*(long *)(psVar2 + 0xc) == _flags_reg_operand)) {
                prVar8 = *(rtx *)&(x1->u).field_0x8;
                iVar10 = const0_operand(prVar8,0xe);
                if (iVar10 == 0) {
                  x2 = *(rtx *)&x1->u;
                }
                else {
                  _GLOBAL_OFFSET_TABLE_ = prVar8;
                  iVar10 = ix86_match_ccmode(insn,5);
                  if (iVar10 != 0) {
                    return 0xd;
                  }
                  x1 = *(rtx *)&(x0->u).field_0x8;
                  x2 = *(rtx *)&x1->u;
                }
              }
            }
            break;
          case 0x31:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if (iVar10 != 0) {
              prVar7 = *(rtx *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar8;
              iVar10 = general_operand(prVar7,0xe);
              if (iVar10 != 0) {
                _register_operand = prVar7;
                if ((((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                     (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)) &&
                    ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b ||
                     (*(short *)_register_operand != 0x2b)))) && (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0xda;
                }
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x32:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if (iVar10 != 0) {
              prVar7 = *(rtx *)&(x2->u).field_0x8;
              recog_data = prVar8;
              iVar10 = general_operand(prVar7,0xe);
              if (iVar10 != 0) {
                _GLOBAL_OFFSET_TABLE_ = prVar7;
                if ((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                   (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)) {
                  return 8;
                }
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x33:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = general_operand(prVar8,0xe);
            if (iVar10 != 0) {
              prVar7 = *(rtx *)&(x1->u).field_0x8;
              _register_operand = prVar8;
              iVar10 = nonimmediate_operand(prVar7,0xe);
              if (iVar10 == 0) {
                x2 = *(rtx *)&x1->u;
              }
              else {
                _GLOBAL_OFFSET_TABLE_ = prVar7;
                iVar10 = ix86_match_ccmode(insn,10);
                if ((iVar10 != 0) &&
                   (((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b ||
                     (*(short *)_register_operand != 0x2b)) && (pnum_clobbers != (int *)0x0)))) {
                  *pnum_clobbers = 1;
                  return 0xd3;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x3d:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if (iVar10 != 0) {
              prVar7 = *(rtx *)&(x2->u).field_0x8;
              recog_data = prVar8;
              iVar10 = general_operand(prVar7,0xe);
              if (iVar10 != 0) {
                psVar2 = *(short **)&(x1->u).field_0x8;
                _GLOBAL_OFFSET_TABLE_ = prVar7;
                if (*psVar2 == 0x1e) {
                  if (*(long *)(psVar2 + 4) == 0) {
                    if ((*(short *)recog_data != 0x2b) || (*(short *)prVar7 != 0x2b)) {
                      if ((*(short *)prVar7 == 0x1e) && (-1 < *(long *)&prVar7->u)) {
                        uVar11 = 5;
                      }
                      else {
                        uVar11 = 10;
                      }
                      iVar10 = ix86_match_ccmode(insn,uVar11);
                      if (iVar10 != 0) {
                        return 0x119;
                      }
                    }
                    iVar10 = ix86_match_ccmode(insn,5);
                    if ((iVar10 != 0) &&
                       ((*(short *)recog_data != 0x2b || (*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b)))
                       ) {
                      return 0x11a;
                    }
                    x2 = *(rtx *)&x1->u;
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                  }
                }
                else {
                  x2 = *(rtx *)&x1->u;
                }
              }
            }
            break;
          case 0x3e:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if (iVar10 != 0) {
              prVar7 = *(rtx *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar8;
              iVar10 = general_operand(prVar7,0xe);
              if (iVar10 != 0) {
                _register_operand = prVar7;
                if (((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                    (iVar10 = ix86_match_ccmode(insn,5), iVar10 != 0)) &&
                   ((iVar10 = ix86_binary_operator_ok(0x3e,0xe,&recog_data), iVar10 != 0 &&
                    (pnum_clobbers != (int *)0x0)))) {
                  *pnum_clobbers = 1;
                  return 0x142;
                }
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x3f:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if (iVar10 != 0) {
              prVar7 = *(rtx *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar8;
              iVar10 = general_operand(prVar7,0xe);
              if (iVar10 != 0) {
                _register_operand = prVar7;
                if ((((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                     (iVar10 = ix86_match_ccmode(insn,5), iVar10 != 0)) &&
                    (iVar10 = ix86_binary_operator_ok(0x3f,0xe,&recog_data), iVar10 != 0)) &&
                   (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x143;
                }
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x41:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if (iVar10 != 0) {
              prVar7 = *(rtx *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar8;
              iVar10 = const_1_to_31_operand(prVar7,0xe);
              if (iVar10 != 0) {
                _register_operand = prVar7;
                if (((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                    ((((cVar9 = optimize_function_for_size_p
                                          (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)
                                                   )), cVar9 != '\0' || (cfun._2_1_ == '\0')) ||
                      ((_register_operand == _bt_comparison_operator &&
                       ((optimize_function_for_speed_p != (code)0x0 || (DAT_001cb056 != '\0'))))))
                     && (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)))) &&
                   ((iVar10 = ix86_binary_operator_ok(0x41,0xe,&recog_data), iVar10 != 0 &&
                    (pnum_clobbers != (int *)0x0)))) {
                  *pnum_clobbers = 1;
                  return 0x189;
                }
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x43:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if ((iVar10 != 0) &&
               (x3 = *(rtx *)&(x2->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar8,
               *(short *)x3 == 0x1e)) {
              iVar10 = const1_operand(x3,0xe);
              if (iVar10 != 0) {
                _register_operand = x3;
                if ((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                   ((((optimize_function_for_speed_p != (code)0x0 ||
                      (cVar9 = optimize_function_for_size_p
                                         (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun))
                                         ), cVar9 != '\0')) &&
                     (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)) &&
                    ((iVar10 = ix86_binary_operator_ok(0x43,0xe,&recog_data), iVar10 != 0 &&
                     (pnum_clobbers != (int *)0x0)))))) {
                  *pnum_clobbers = 1;
                  return 0x19e;
                }
                x2 = *(rtx *)&x1->u;
                x3 = *(rtx *)&(x2->u).field_0x8;
              }
              iVar10 = const_1_to_31_operand(x3,0xe);
              if (iVar10 != 0) {
                _register_operand = x3;
                if ((((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                     ((cVar9 = optimize_function_for_size_p
                                         (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun))
                                         ), cVar9 != '\0' || (cfun._2_1_ == '\0')))) &&
                    (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)) &&
                   ((iVar10 = ix86_binary_operator_ok(0x43,0xe,&recog_data), iVar10 != 0 &&
                    (pnum_clobbers != (int *)0x0)))) {
                  *pnum_clobbers = 1;
                  return 0x1a0;
                }
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x44:
            prVar8 = *(rtx *)&x2->u;
            iVar10 = nonimmediate_operand(prVar8,0xe);
            if ((iVar10 != 0) &&
               (x3 = *(rtx *)&(x2->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar8,
               *(short *)x3 == 0x1e)) {
              iVar10 = const1_operand(x3,0xe);
              if (iVar10 != 0) {
                _register_operand = x3;
                if (((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                    (((optimize_function_for_speed_p != (code)0x0 ||
                      (cVar9 = optimize_function_for_size_p
                                         (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun))
                                         ), cVar9 != '\0')) &&
                     (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)))) &&
                   ((iVar10 = ix86_binary_operator_ok(0x44,0xe,&recog_data), iVar10 != 0 &&
                    (pnum_clobbers != (int *)0x0)))) {
                  *pnum_clobbers = 1;
                  return 0x1b3;
                }
                x2 = *(rtx *)&x1->u;
                x3 = *(rtx *)&(x2->u).field_0x8;
              }
              iVar10 = const_1_to_31_operand(x3,0xe);
              if (iVar10 != 0) {
                _register_operand = x3;
                if (((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                    ((cVar9 = optimize_function_for_size_p
                                        (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)))
                     , cVar9 != '\0' || (cfun._2_1_ == '\0')))) &&
                   ((iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0 &&
                    ((iVar10 = ix86_binary_operator_ok(0x44,0xe,&recog_data), iVar10 != 0 &&
                     (pnum_clobbers != (int *)0x0)))))) {
                  *pnum_clobbers = 1;
                  return 0x1b5;
                }
                x2 = *(rtx *)&x1->u;
              }
            }
          }
        }
        else if (bVar1 == 0xf) {
          switch(*(short *)x2) {
          case 0x25:
          case 0x27:
          case 0x2b:
            iVar10 = nonimmediate_operand(x2,0xf);
            if (iVar10 != 0) {
              prVar8 = *(rtx *)&(x1->u).field_0x8;
              recog_data = x2;
              iVar10 = const0_operand(prVar8,0xf);
              x2 = prVar8;
              if (iVar10 != 0) {
                _GLOBAL_OFFSET_TABLE_ = prVar8;
                iVar10 = ix86_match_ccmode(insn,5);
                if (iVar10 != 0) {
                  return 1;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
                x2 = *(rtx *)&(x1->u).field_0x8;
              }
              iVar10 = general_operand(x2,0xf);
              if (iVar10 == 0) {
                x2 = *(rtx *)&x1->u;
              }
              else {
                _GLOBAL_OFFSET_TABLE_ = x2;
                iVar10 = ix86_match_ccmode(insn,2);
                if (iVar10 != 0) {
                  return 5;
                }
                x1 = *(rtx *)&(x0->u).field_0x8;
                x2 = *(rtx *)&x1->u;
              }
            }
            break;
          case 0x31:
            psVar2 = *(short **)&x2->u;
            iVar10 = nonimmediate_operand(psVar2,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            psVar4 = *(short **)&(x2->u).field_0x8;
            _GLOBAL_OFFSET_TABLE_ = (rtx)psVar2;
            iVar10 = general_operand(psVar4,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              _register_operand = (rtx)psVar4;
              return -1;
            }
            _register_operand = (rtx)psVar4;
            iVar10 = ix86_match_ccmode(insn,4);
            if (iVar10 == 0) {
              return -1;
            }
            if ((*(short *)_GLOBAL_OFFSET_TABLE_ == 0x2b) && (*(short *)_register_operand == 0x2b))
            {
              return -1;
            }
            if (pnum_clobbers == (int *)0x0) {
              return -1;
            }
            *pnum_clobbers = 1;
            return 0xd9;
          case 0x32:
            uVar11 = *(undefined8 *)&x2->u;
            iVar10 = nonimmediate_operand(uVar11,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            uVar6 = *(undefined8 *)&(x2->u).field_0x8;
            recog_data = (rtx)uVar11;
            iVar10 = general_operand(uVar6,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              _GLOBAL_OFFSET_TABLE_ = (rtx)uVar6;
              return -1;
            }
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar6;
            iVar10 = ix86_match_ccmode(insn,4);
            if (iVar10 == 0) {
              return -1;
            }
            return 9;
          case 0x33:
            psVar2 = *(short **)&x2->u;
            iVar10 = general_operand(psVar2,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            psVar4 = *(short **)&(x1->u).field_0x8;
            _register_operand = (rtx)psVar2;
            iVar10 = nonimmediate_operand(psVar4,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            _GLOBAL_OFFSET_TABLE_ = (rtx)psVar4;
            iVar10 = ix86_match_ccmode(insn,10);
            if (iVar10 == 0) {
              return -1;
            }
            if ((*(short *)_GLOBAL_OFFSET_TABLE_ == 0x2b) && (*(short *)_register_operand == 0x2b))
            {
              return -1;
            }
            if (pnum_clobbers == (int *)0x0) {
              return -1;
            }
            *pnum_clobbers = 1;
            return 0xd2;
          case 0x3d:
            psVar2 = *(short **)&x2->u;
            iVar10 = nonimmediate_operand(psVar2,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            psVar4 = *(short **)&(x2->u).field_0x8;
            recog_data = (rtx)psVar2;
            iVar10 = general_operand(psVar4,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              _GLOBAL_OFFSET_TABLE_ = (rtx)psVar4;
              return -1;
            }
            _GLOBAL_OFFSET_TABLE_ = (rtx)psVar4;
            iVar10 = ix86_match_ccmode(insn,5);
            if (iVar10 == 0) {
              return -1;
            }
            if ((*(short *)recog_data == 0x2b) && (*(short *)_GLOBAL_OFFSET_TABLE_ == 0x2b)) {
              return -1;
            }
            return 0x11b;
          case 0x3e:
            uVar11 = *(undefined8 *)&x2->u;
            iVar10 = nonimmediate_operand(uVar11,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            uVar6 = *(undefined8 *)&(x2->u).field_0x8;
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
            iVar10 = general_operand(uVar6,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              _register_operand = (rtx)uVar6;
              return -1;
            }
            _register_operand = (rtx)uVar6;
            iVar10 = ix86_match_ccmode(insn,5);
            if (iVar10 == 0) {
              return -1;
            }
            iVar10 = ix86_binary_operator_ok(0x3e,0xf,&recog_data);
            if (iVar10 == 0) {
              return -1;
            }
            if (pnum_clobbers == (int *)0x0) {
              return -1;
            }
            *pnum_clobbers = 1;
            return 0x144;
          case 0x3f:
            uVar11 = *(undefined8 *)&x2->u;
            iVar10 = nonimmediate_operand(uVar11,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            uVar6 = *(undefined8 *)&(x2->u).field_0x8;
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
            iVar10 = general_operand(uVar6,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              _register_operand = (rtx)uVar6;
              return -1;
            }
            _register_operand = (rtx)uVar6;
            iVar10 = ix86_match_ccmode(insn,5);
            if (iVar10 == 0) {
              return -1;
            }
            iVar10 = ix86_binary_operator_ok(0x3f,0xf,&recog_data);
            if (iVar10 == 0) {
              return -1;
            }
            if (pnum_clobbers == (int *)0x0) {
              return -1;
            }
            *pnum_clobbers = 1;
            return 0x145;
          case 0x41:
            uVar11 = *(undefined8 *)&x2->u;
            iVar10 = nonimmediate_operand(uVar11,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            prVar8 = *(rtx *)&(x2->u).field_0x8;
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
            iVar10 = const_1_to_31_operand(prVar8,0xe);
            if (iVar10 == 0) {
              return -1;
            }
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              _register_operand = prVar8;
              return -1;
            }
            _register_operand = prVar8;
            cVar9 = optimize_function_for_size_p
                              (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)));
            if ((cVar9 == '\0') && (cfun._2_1_ != '\0')) {
              if (_register_operand != _bt_comparison_operator) {
                return -1;
              }
              if ((optimize_function_for_speed_p == (code)0x0) && (DAT_001cb056 == '\0')) {
                return -1;
              }
            }
            iVar10 = ix86_match_ccmode(insn,4);
            if (iVar10 == 0) {
              return -1;
            }
            iVar10 = ix86_binary_operator_ok(0x41,0xf,&recog_data);
            if (iVar10 == 0) {
              return -1;
            }
            if (pnum_clobbers == (int *)0x0) {
              return -1;
            }
            *pnum_clobbers = 1;
            return 0x185;
          case 0x43:
            uVar11 = *(undefined8 *)&x2->u;
            iVar10 = nonimmediate_operand(uVar11,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            x3 = *(rtx *)&(x2->u).field_0x8;
            if (*(short *)x3 != 0x1e) {
              _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
              return -1;
            }
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
            iVar10 = const1_operand(x3,0xe);
            if (iVar10 != 0) {
              _register_operand = x3;
              if (((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                  (((optimize_function_for_speed_p != (code)0x0 ||
                    (cVar9 = optimize_function_for_size_p
                                       (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun))),
                    cVar9 != '\0')) && (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)))) &&
                 ((iVar10 = ix86_binary_operator_ok(0x43,0xf,&recog_data), iVar10 != 0 &&
                  (pnum_clobbers != (int *)0x0)))) {
                *pnum_clobbers = 1;
                return 0x196;
              }
              x3 = *(rtx *)(*(long *)&x1->u + 0x10);
            }
            iVar10 = const_1_to_31_operand(x3,0xe);
            if (iVar10 == 0) {
              return -1;
            }
            _register_operand = x3;
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              return -1;
            }
            cVar9 = optimize_function_for_size_p
                              (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)));
            if ((cVar9 == '\0') && (cfun._2_1_ != '\0')) {
              return -1;
            }
            iVar10 = ix86_match_ccmode(insn,4);
            if (iVar10 == 0) {
              return -1;
            }
            iVar10 = ix86_binary_operator_ok(0x43,0xf,&recog_data);
            if (iVar10 == 0) {
              return -1;
            }
            if (pnum_clobbers == (int *)0x0) {
              return -1;
            }
            *pnum_clobbers = 1;
            return 0x198;
          case 0x44:
            uVar11 = *(undefined8 *)&x2->u;
            iVar10 = nonimmediate_operand(uVar11,0xf);
            if (iVar10 == 0) {
              return -1;
            }
            x3 = *(rtx *)&(x2->u).field_0x8;
            if (*(short *)x3 != 0x1e) {
              _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
              return -1;
            }
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar11;
            iVar10 = const1_operand(x3,0xe);
            if (iVar10 != 0) {
              _register_operand = x3;
              if ((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
                 ((((optimize_function_for_speed_p != (code)0x0 ||
                    (cVar9 = optimize_function_for_size_p
                                       (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun))),
                    cVar9 != '\0')) && (iVar10 = ix86_match_ccmode(insn,4), iVar10 != 0)) &&
                  ((iVar10 = ix86_binary_operator_ok(0x44,0xf,&recog_data), iVar10 != 0 &&
                   (pnum_clobbers != (int *)0x0)))))) {
                *pnum_clobbers = 1;
                return 0x1ab;
              }
              x3 = *(rtx *)(*(long *)&x1->u + 0x10);
            }
            iVar10 = const_1_to_31_operand(x3,0xe);
            if (iVar10 == 0) {
              return -1;
            }
            _register_operand = x3;
            if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
              return -1;
            }
            cVar9 = optimize_function_for_size_p
                              (CONCAT53(cfun._3_5_,CONCAT12(cfun._2_1_,(undefined2)cfun)));
            if ((cVar9 == '\0') && (cfun._2_1_ != '\0')) {
              return -1;
            }
            iVar10 = ix86_match_ccmode(insn,4);
            if (iVar10 == 0) {
              return -1;
            }
            iVar10 = ix86_binary_operator_ok(0x44,0xf,&recog_data);
            if (iVar10 == 0) {
              return -1;
            }
            if (pnum_clobbers == (int *)0x0) {
              return -1;
            }
            *pnum_clobbers = 1;
            return 0x1ad;
          }
          iVar10 = nonimmediate_operand(x2,0xf);
          if (iVar10 == 0) {
            return -1;
          }
          _GLOBAL_OFFSET_TABLE_ = x2;
          lVar3 = *(long *)&(x1->u).field_0x8;
          iVar10 = const_int_operand(lVar3,0xf);
          if (iVar10 == 0) {
            return -1;
          }
          _register_operand = (rtx)lVar3;
          iVar10 = ix86_match_ccmode(insn,3);
          if (iVar10 == 0) {
            return -1;
          }
          if ((*(ulong *)((long)_register_operand + 8) & 0xffff) == 0x8000) {
            return -1;
          }
          if (pnum_clobbers == (int *)0x0) {
            return -1;
          }
          *pnum_clobbers = 1;
          return 0xd5;
        }
      }
    }
    iVar10 = general_operand(x2,0xe);
    if (iVar10 != 0) {
      recog_data = x2;
      psVar2 = *(short **)&(x1->u).field_0x8;
      if (((*(char *)(psVar2 + 1) == '\x0e') && (*psVar2 == 0x27)) && (*(int *)(psVar2 + 8) == 0)) {
        psVar2 = *(short **)(psVar2 + 4);
        if ((*(char *)(psVar2 + 1) == '\x10') && (*psVar2 == 0x78)) {
          prVar8 = *(rtx *)(psVar2 + 4);
          iVar10 = ext_register_operand(prVar8,0);
          if (iVar10 == 0) {
            x2 = *(rtx *)&x1->u;
          }
          else {
            _GLOBAL_OFFSET_TABLE_ = prVar8;
            if (*(long *)(psVar2 + 8) == _flags_reg_operand) {
              if ((*(long *)(psVar2 + 0xc) == _flags_reg_operand) &&
                 (iVar10 = ix86_match_ccmode(insn,2), iVar10 != 0)) {
                return 0xc;
              }
              x2 = *(rtx *)&x1->u;
            }
            else {
              x2 = *(rtx *)&x1->u;
            }
          }
        }
        else {
          x2 = *(rtx *)&x1->u;
        }
      }
      else {
        x2 = *(rtx *)&x1->u;
      }
    }
    if (x2->field_0x2 == '\x0e') {
      if ((((*(short *)x2 == 0x27) && (*(int *)&(x2->u).field_0x8 == 0)) &&
          (psVar2 = *(short **)&x2->u, *(char *)(psVar2 + 1) == '\x10')) && (*psVar2 == 0x78)) {
        prVar8 = *(rtx *)(psVar2 + 4);
        iVar10 = ext_register_operand(prVar8,0);
        if (((iVar10 != 0) && (recog_data = prVar8, *(long *)(psVar2 + 8) == _flags_reg_operand)) &&
           (*(long *)(psVar2 + 0xc) == _flags_reg_operand)) {
          x2 = *(rtx *)&(x1->u).field_0x8;
          iVar10 = general_operand(x2,0xe);
          if (iVar10 != 0) {
            _GLOBAL_OFFSET_TABLE_ = x2;
            iVar10 = ix86_match_ccmode(insn,2);
            if (iVar10 != 0) {
              return 0xe;
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&(x1->u).field_0x8;
          }
          if (((x2->field_0x2 == '\x0e') && (*(short *)x2 == 0x27)) &&
             (*(int *)&(x2->u).field_0x8 == 0)) {
            psVar2 = *(short **)&x2->u;
            if ((*(char *)(psVar2 + 1) == '\x10') && (*psVar2 == 0x78)) {
              prVar8 = *(rtx *)(psVar2 + 4);
              iVar10 = ext_register_operand(prVar8,0);
              if (iVar10 == 0) {
                x2 = *(rtx *)&x1->u;
              }
              else {
                _GLOBAL_OFFSET_TABLE_ = prVar8;
                if (*(long *)(psVar2 + 8) == _flags_reg_operand) {
                  if ((*(long *)(psVar2 + 0xc) == _flags_reg_operand) &&
                     (iVar10 = ix86_match_ccmode(insn,2), iVar10 != 0)) {
                    return 0xf;
                  }
                  x2 = *(rtx *)&x1->u;
                }
                else {
                  x2 = *(rtx *)&x1->u;
                }
              }
            }
            else {
              x2 = *(rtx *)&x1->u;
            }
          }
          else {
            x2 = *(rtx *)&x1->u;
          }
        }
      }
      iVar10 = nonimmediate_operand(x2,0xe);
      if (iVar10 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        prVar8 = *(rtx *)&(x1->u).field_0x8;
        iVar10 = const_int_operand(prVar8,0xe);
        if ((((iVar10 != 0) &&
             (_register_operand = prVar8, iVar10 = ix86_match_ccmode(insn,3), iVar10 != 0)) &&
            ((*(ulong *)&_register_operand->u & 0xff) != 0x80)) && (pnum_clobbers != (int *)0x0)) {
          *pnum_clobbers = 1;
          return 0xd6;
        }
      }
    }
  }
  return -1;
code_r0x0010741f:
  psVar2 = *(short **)&x2->u;
  if (*(char *)(psVar2 + 1) != '\x10') {
    return -1;
  }
  if (*psVar2 == 0x78) {
    uVar11 = *(undefined8 *)(psVar2 + 4);
    iVar10 = ext_register_operand(uVar11,0);
    if (iVar10 == 0) {
      return -1;
    }
    if (*(long *)(psVar2 + 8) != _flags_reg_operand) {
      recog_data = (rtx)uVar11;
      return -1;
    }
    if (*(long *)(psVar2 + 0xc) != _flags_reg_operand) {
      recog_data = (rtx)uVar11;
      return -1;
    }
    x3 = *(rtx *)&(x2->u).field_0x8;
    recog_data = (rtx)uVar11;
    if (x3->field_0x2 == '\x10') {
      if (*(short *)x3 == 99) {
        prVar8 = *(rtx *)&x3->u;
        iVar10 = general_operand(prVar8,0xe);
        if (iVar10 != 0) {
          _GLOBAL_OFFSET_TABLE_ = prVar8;
          if ((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
             (iVar10 = ix86_match_ccmode(insn,5), iVar10 != 0)) {
            return 0x11e;
          }
          x3 = *(rtx *)(*(long *)&x1->u + 0x10);
        }
      }
      else if (*(short *)x3 == 0x78) {
        prVar8 = *(rtx *)&x3->u;
        iVar10 = ext_register_operand(prVar8,0);
        if (((iVar10 != 0) &&
            (_GLOBAL_OFFSET_TABLE_ = prVar8, *(long *)&(x3->u).field_0x8 == _flags_reg_operand)) &&
           (*(long *)&(x3->u).field_0x10 == _flags_reg_operand)) {
          if ((*(long *)&(x1->u).field_0x8 == _q_regs_operand) &&
             (iVar10 = ix86_match_ccmode(insn,5), iVar10 != 0)) {
            return 0x11f;
          }
          x3 = *(rtx *)(*(long *)&x1->u + 0x10);
        }
      }
    }
    iVar10 = const_int_operand(x3,0);
    if (iVar10 == 0) {
      return -1;
    }
    _GLOBAL_OFFSET_TABLE_ = x3;
    if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
      return -1;
    }
    iVar10 = ix86_match_ccmode(insn,5);
    if (iVar10 == 0) {
      return -1;
    }
    return 0x11d;
  }
  iVar10 = nonimmediate_operand(psVar2,0x10);
  if (iVar10 == 0) {
    return -1;
  }
  psVar4 = *(short **)&(x2->u).field_0x8;
  recog_data = (rtx)psVar2;
  iVar10 = general_operand(psVar4,0x10);
  if (iVar10 == 0) {
    return -1;
  }
  if (*(long *)&(x1->u).field_0x8 != _q_regs_operand) {
    _GLOBAL_OFFSET_TABLE_ = (rtx)psVar4;
    return -1;
  }
  _GLOBAL_OFFSET_TABLE_ = (rtx)psVar4;
  iVar10 = ix86_match_ccmode(insn,5);
  if (iVar10 == 0) {
    return -1;
  }
  if ((*(short *)recog_data == 0x2b) && (*(short *)_GLOBAL_OFFSET_TABLE_ == 0x2b)) {
    return -1;
  }
  return 0x11c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_4(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  ushort *puVar3;
  short *psVar4;
  rtx prVar5;
  short *psVar6;
  int iVar7;
  rtx x1;
  rtx x2;
  rtx *operands;
  rtx x3;
  rtx x4;
  
  prVar2 = *(rtx *)&x0->u;
  iVar7 = register_operand(prVar2,0x10);
  x1 = prVar2;
  if (iVar7 != 0) {
    puVar3 = *(ushort **)&(x0->u).field_0x8;
    recog_data = prVar2;
    if (*(char *)(puVar3 + 1) == '\x10') {
      uVar1 = *puVar3;
      if (uVar1 == 0x75) {
        prVar2 = *(rtx *)(puVar3 + 4);
        iVar7 = nonimmediate_operand(prVar2,0x10);
        if (iVar7 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          if (((ix86_isa_flags & 0x4000) != 0) && (pnum_clobbers != (int *)0x0)) {
            *pnum_clobbers = 1;
            return 0x1fb;
          }
          x1 = *(rtx *)&x0->u;
        }
      }
      else if (uVar1 < 0x76) {
        if (uVar1 == 0x74) {
          prVar2 = *(rtx *)(puVar3 + 4);
          iVar7 = nonimmediate_operand(prVar2,0x10);
          if (iVar7 == 0) {
            x1 = *(rtx *)&x0->u;
          }
          else {
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            if (pnum_clobbers != (int *)0x0) {
              *pnum_clobbers = 1;
              return 0x1f7;
            }
            x1 = *(rtx *)&x0->u;
          }
        }
        else {
          if (0x74 < uVar1) goto code_r0x00108e5f;
          if (uVar1 == 0x73) {
            prVar2 = *(rtx *)(puVar3 + 4);
            iVar7 = nonimmediate_operand(prVar2,0x10);
            if (iVar7 == 0) {
              x1 = *(rtx *)&x0->u;
            }
            else {
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              if (((ix86_isa_flags & 8) != 0) && (pnum_clobbers != (int *)0x0)) {
                *pnum_clobbers = 1;
                return 0x1f8;
              }
              x1 = *(rtx *)&x0->u;
            }
          }
          else {
            if (0x73 < uVar1) goto code_r0x00108e5f;
            if (uVar1 == 0x72) {
              prVar2 = *(rtx *)(puVar3 + 4);
              iVar7 = nonimmediate_operand(prVar2,0x10);
              if (iVar7 == 0) {
                x1 = *(rtx *)&x0->u;
              }
              else {
                _GLOBAL_OFFSET_TABLE_ = prVar2;
                if ((ix86_arch_features == '\0') && (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 2;
                  return 0x1f5;
                }
                x1 = *(rtx *)&x0->u;
              }
            }
            else {
              if (0x72 < uVar1) goto code_r0x00108e5f;
              if (uVar1 == 0x12) {
                if ((**(int **)(puVar3 + 4) == 1) && (*(int *)(puVar3 + 8) == 0xc)) {
                  psVar4 = *(short **)(*(long *)(puVar3 + 4) + 8);
                  if (*psVar4 == 0x1e) {
                    if ((*(long *)(psVar4 + 4) == 0) && (pnum_clobbers != (int *)0x0)) {
                      *pnum_clobbers = 1;
                      return 0x1f1;
                    }
                    x1 = *(rtx *)&x0->u;
                  }
                  else if (*psVar4 == 0x2c) {
                    _GLOBAL_OFFSET_TABLE_ = *(rtx *)(psVar4 + 4);
                    if (pnum_clobbers != (int *)0x0) {
                      *pnum_clobbers = 1;
                      return 0x1f2;
                    }
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
              }
              else {
                if (uVar1 != 0x32) goto code_r0x00108e5f;
                if (*(long *)(puVar3 + 4) == _gen_split_1850) {
                  psVar4 = *(short **)(puVar3 + 8);
                  if ((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x73)) {
                    prVar2 = *(rtx *)(psVar4 + 4);
                    iVar7 = nonimmediate_operand(prVar2,0x10);
                    if (iVar7 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      _GLOBAL_OFFSET_TABLE_ = prVar2;
                      if (pnum_clobbers != (int *)0x0) {
                        *pnum_clobbers = 1;
                        return 0x1f9;
                      }
                      x1 = *(rtx *)&x0->u;
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
              }
            }
          }
        }
      }
      else {
code_r0x00108e5f:
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
  iVar7 = nonimmediate_operand(x1,0x10);
  if (iVar7 != 0) {
    recog_data = x1;
    psVar4 = *(short **)&(x0->u).field_0x8;
    if (*(char *)(psVar4 + 1) == '\x10') {
      if (*psVar4 == 0x12) {
        if (**(int **)(psVar4 + 4) == 1) {
          if (*(int *)(psVar4 + 8) == 0x4a) {
            prVar2 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
            iVar7 = register_operand(prVar2,0x28);
            if (iVar7 == 0) {
              x1 = *(rtx *)&x0->u;
            }
            else {
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              if (((((target_flags & 0x1000) == 0) && (flag_unsafe_math_optimizations != 0)) &&
                  (reload_in_progress == 0)) &&
                 ((reload_completed == 0 && (pnum_clobbers != (int *)0x0)))) {
                *pnum_clobbers = 1;
                return 0x270;
              }
              x1 = *(rtx *)&x0->u;
            }
          }
          else if (*(int *)(psVar4 + 8) == 0x4b) {
            prVar2 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
            iVar7 = register_operand(prVar2,0x28);
            if (iVar7 == 0) {
              x1 = *(rtx *)&x0->u;
            }
            else {
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              if ((((target_flags & 0x1000) == 0) && (flag_unsafe_math_optimizations != 0)) &&
                 ((reload_in_progress == 0 &&
                  ((reload_completed == 0 && (pnum_clobbers != (int *)0x0)))))) {
                *pnum_clobbers = 1;
                return 0x27b;
              }
              x1 = *(rtx *)&x0->u;
            }
          }
          else {
            x1 = *(rtx *)&x0->u;
          }
        }
        else {
          x1 = *(rtx *)&x0->u;
        }
      }
      else if (*psVar4 == 0x71) {
        prVar2 = *(rtx *)(psVar4 + 4);
        iVar7 = nonimmediate_operand(prVar2,0x10);
        if (iVar7 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          if (((ix86_isa_flags & 0x1000) != 0) &&
             ((*(short *)recog_data != 0x2b || (*(short *)prVar2 != 0x2b)))) {
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            return 0x1ff;
          }
          x1 = *(rtx *)&x0->u;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
  iVar7 = register_operand(x1,0x10);
  if (iVar7 != 0) {
    recog_data = x1;
    puVar3 = *(ushort **)&(x0->u).field_0x8;
    if (*(char *)(puVar3 + 1) == '\x10') {
      uVar1 = *puVar3;
      if (uVar1 == 0x77) {
        prVar2 = *(rtx *)(puVar3 + 4);
        iVar7 = ix86_carry_flag_operator(prVar2,0);
        if (iVar7 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          if ((**(short **)&prVar2->u == 0x25) && (*(int *)(*(short **)&prVar2->u + 4) == 0x11)) {
            if (*(long *)&(prVar2->u).field_0x8 == _q_regs_operand) {
              if (*(long *)(puVar3 + 8) == _bt_comparison_operator) {
                if ((*(long *)(puVar3 + 0xc) == _q_regs_operand) && (pnum_clobbers != (int *)0x0)) {
                  *pnum_clobbers = 1;
                  return 0x29b;
                }
                x1 = *(rtx *)&x0->u;
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
            }
            else {
              x1 = *(rtx *)&x0->u;
            }
          }
          else {
            x1 = *(rtx *)&x0->u;
          }
        }
      }
      else {
        if (uVar1 < 0x78) {
          if (uVar1 == 0x71) {
            prVar2 = *(rtx *)(puVar3 + 4);
            iVar7 = register_operand(prVar2,0x10);
            if (iVar7 == 0) {
              x1 = *(rtx *)&x0->u;
            }
            else {
              if (DAT_001cb124 != '\0') {
                _GLOBAL_OFFSET_TABLE_ = prVar2;
                return 0x200;
              }
              x1 = *(rtx *)&x0->u;
              _GLOBAL_OFFSET_TABLE_ = prVar2;
            }
            goto L21839;
          }
          if (uVar1 < 0x72) {
            if (uVar1 == 0x33) {
              prVar2 = *(rtx *)(puVar3 + 4);
              iVar7 = ix86_carry_flag_operator(prVar2,0);
              if (iVar7 == 0) {
                x1 = *(rtx *)&x0->u;
              }
              else {
                _GLOBAL_OFFSET_TABLE_ = prVar2;
                if ((**(short **)&prVar2->u == 0x25) &&
                   (*(int *)(*(short **)&prVar2->u + 4) == 0x11)) {
                  if (*(long *)&(prVar2->u).field_0x8 == _q_regs_operand) {
                    return 0x29c;
                  }
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
              }
              goto L21839;
            }
            if (uVar1 < 0x34) {
              if (uVar1 == 0x31) {
                prVar2 = *(rtx *)(puVar3 + 4);
                if (prVar2->field_0x2 == '\x10') {
                  if (*(short *)prVar2 == 0x12) {
                    iVar7 = **(int **)&prVar2->u;
                    if (iVar7 == 4) {
                      if (*(int *)&(prVar2->u).field_0x8 == 0x17) {
                        psVar4 = *(short **)(*(long *)&prVar2->u + 8);
                        iVar7 = tls_modbase_operand(psVar4,0x10);
                        if (iVar7 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          _memory_operand = *(undefined8 *)(*(long *)&prVar2->u + 0x10);
                          psVar6 = *(short **)(*(long *)&prVar2->u + 0x18);
                          _nonimmediate_operand = psVar4;
                          iVar7 = register_operand(psVar6,0x10);
                          if (iVar7 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            psVar4 = *(short **)(*(long *)&prVar2->u + 0x20);
                            _register_operand = psVar6;
                            if (((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x25)) &&
                               (*(int *)(psVar4 + 4) == 7)) {
                              psVar4 = *(short **)(puVar3 + 8);
                              if ((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x23)) {
                                psVar4 = *(short **)(psVar4 + 4);
                                if (((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x12)) &&
                                   ((**(int **)(psVar4 + 4) == 1 && (*(int *)(psVar4 + 8) == 6)))) {
                                  prVar2 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
                                  iVar7 = tls_symbolic_operand(prVar2,0x10);
                                  if (iVar7 == 0) {
                                    x1 = *(rtx *)&x0->u;
                                  }
                                  else {
                                    _GLOBAL_OFFSET_TABLE_ = prVar2;
                                    if ((ix86_tls_dialect == 1) && (pnum_clobbers != (int *)0x0)) {
                                      *pnum_clobbers = 1;
                                      return 0x210;
                                    }
                                    x1 = *(rtx *)&x0->u;
                                  }
                                }
                                else {
                                  x1 = *(rtx *)&x0->u;
                                }
                              }
                              else {
                                x1 = *(rtx *)&x0->u;
                              }
                            }
                            else {
                              x1 = *(rtx *)&x0->u;
                            }
                          }
                        }
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                    else {
                      if (iVar7 < 5) {
                        if (iVar7 == 1) {
                          if (*(int *)&(prVar2->u).field_0x8 == 0x14) {
                            if (*(long *)(*(long *)&prVar2->u + 8) == _q_regs_operand) {
                              prVar2 = *(rtx *)(puVar3 + 8);
                              iVar7 = register_operand(prVar2,0x10);
                              if (iVar7 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                _GLOBAL_OFFSET_TABLE_ = prVar2;
                                if (pnum_clobbers != (int *)0x0) {
                                  *pnum_clobbers = 1;
                                  return 0x20d;
                                }
                                x1 = *(rtx *)&x0->u;
                              }
                            }
                            else {
                              x1 = *(rtx *)&x0->u;
                            }
                          }
                          else {
                            x1 = *(rtx *)&x0->u;
                          }
                          goto L21839;
                        }
                        if (iVar7 == 2) {
                          if (*(int *)&(prVar2->u).field_0x8 == 0x16) {
                            prVar5 = *(rtx *)(*(long *)&prVar2->u + 8);
                            iVar7 = register_operand(prVar5,0x10);
                            if (iVar7 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              psVar4 = *(short **)(*(long *)&prVar2->u + 0x10);
                              _GLOBAL_OFFSET_TABLE_ = prVar5;
                              iVar7 = call_insn_operand(psVar4,0x10);
                              if (iVar7 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                psVar6 = *(short **)(puVar3 + 8);
                                _register_operand = psVar4;
                                if ((*(char *)(psVar6 + 1) == '\x10') && (*psVar6 == 0x23)) {
                                  psVar4 = *(short **)(psVar6 + 4);
                                  if ((((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x12)) &&
                                      (**(int **)(psVar4 + 4) == 1)) && (*(int *)(psVar4 + 8) == 6))
                                  {
                                    psVar4 = *(short **)(*(long *)(psVar4 + 4) + 8);
                                    iVar7 = tls_symbolic_operand(psVar4,0x10);
                                    if (iVar7 == 0) {
                                      x1 = *(rtx *)&x0->u;
                                    }
                                    else {
                                      _nonimmediate_operand = psVar4;
                                      if (pnum_clobbers != (int *)0x0) {
                                        *pnum_clobbers = 3;
                                        return 0x20b;
                                      }
                                      x1 = *(rtx *)&x0->u;
                                    }
                                  }
                                  else {
                                    x1 = *(rtx *)&x0->u;
                                  }
                                }
                                else {
                                  x1 = *(rtx *)&x0->u;
                                }
                              }
                            }
                          }
                          else {
                            x1 = *(rtx *)&x0->u;
                          }
                          goto L21839;
                        }
                      }
                      x1 = *(rtx *)&x0->u;
                    }
                  }
                  else {
                    iVar7 = register_operand(prVar2,0x10);
                    if (iVar7 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      psVar4 = *(short **)(puVar3 + 8);
                      _GLOBAL_OFFSET_TABLE_ = prVar2;
                      if ((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x23)) {
                        psVar4 = *(short **)(psVar4 + 4);
                        if (((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x12)) &&
                           ((**(int **)(psVar4 + 4) == 1 && (*(int *)(psVar4 + 8) == 0x17)))) {
                          psVar4 = *(short **)(*(long *)(psVar4 + 4) + 8);
                          iVar7 = tls_symbolic_operand(psVar4,0x10);
                          if (iVar7 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if (ix86_tls_dialect == 1) {
                              _register_operand = psVar4;
                              return 0x20e;
                            }
                            x1 = *(rtx *)&x0->u;
                            _register_operand = psVar4;
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
                goto L21839;
              }
              if (uVar1 < 0x32) {
                if (uVar1 == 0x12) {
                  iVar7 = **(int **)(puVar3 + 4);
                  if (iVar7 == 4) {
                    if (*(int *)(puVar3 + 8) == 0x17) {
                      prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                      iVar7 = tls_symbolic_operand(prVar2,0x10);
                      if (iVar7 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        psVar4 = *(short **)(*(long *)(puVar3 + 4) + 0x10);
                        _GLOBAL_OFFSET_TABLE_ = prVar2;
                        iVar7 = register_operand(psVar4,0x10);
                        if (iVar7 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          psVar6 = *(short **)(*(long *)(puVar3 + 4) + 0x18);
                          _register_operand = psVar4;
                          iVar7 = register_operand(psVar6,0x10);
                          if (iVar7 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            psVar4 = *(short **)(*(long *)(puVar3 + 4) + 0x20);
                            _nonimmediate_operand = psVar6;
                            if ((((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x25)) &&
                                (*(int *)(psVar4 + 4) == 7)) &&
                               ((ix86_tls_dialect == 1 && (pnum_clobbers != (int *)0x0)))) {
                              *pnum_clobbers = 1;
                              return 0x20f;
                            }
                            x1 = *(rtx *)&x0->u;
                          }
                        }
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                    goto L21839;
                  }
                  if (iVar7 < 5) {
                    if (iVar7 == 3) {
                      if (*(int *)(puVar3 + 8) == 0x15) {
                        prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                        iVar7 = register_operand(prVar2,0x10);
                        if (iVar7 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          psVar4 = *(short **)(*(long *)(puVar3 + 4) + 0x10);
                          _GLOBAL_OFFSET_TABLE_ = prVar2;
                          iVar7 = tls_symbolic_operand(psVar4,0x10);
                          if (iVar7 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            psVar6 = *(short **)(*(long *)(puVar3 + 4) + 0x18);
                            _register_operand = psVar4;
                            iVar7 = call_insn_operand(psVar6,0x10);
                            if (iVar7 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              _nonimmediate_operand = psVar6;
                              if ((ix86_tls_dialect == 0) && (pnum_clobbers != (int *)0x0)) {
                                *pnum_clobbers = 3;
                                return 0x209;
                              }
                              x1 = *(rtx *)&x0->u;
                            }
                          }
                        }
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                      goto L21839;
                    }
                    if (iVar7 < 4) {
                      if (iVar7 == 1) {
                        if (*(int *)(puVar3 + 8) == 0x14) {
                          if (*(long *)(*(long *)(puVar3 + 4) + 8) == _q_regs_operand) {
                            return 0x20c;
                          }
                          x1 = *(rtx *)&x0->u;
                        }
                        else if (*(int *)(puVar3 + 8) == 0x42) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar7 = register_operand(prVar2,0x28);
                          if (iVar7 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if ((((target_flags & 0x1000) == 0) && (reload_in_progress == 0)) &&
                               (reload_completed == 0)) {
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              return 0x268;
                            }
                            x1 = *(rtx *)&x0->u;
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                        goto L21839;
                      }
                      if (iVar7 == 2) {
                        if (*(int *)(puVar3 + 8) == 0x16) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar7 = register_operand(prVar2,0x10);
                          if (iVar7 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            psVar4 = *(short **)(*(long *)(puVar3 + 4) + 0x10);
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                            iVar7 = call_insn_operand(psVar4,0x10);
                            if (iVar7 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              _register_operand = psVar4;
                              if ((ix86_tls_dialect == 0) && (pnum_clobbers != (int *)0x0)) {
                                *pnum_clobbers = 3;
                                return 0x20a;
                              }
                              x1 = *(rtx *)&x0->u;
                            }
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                        goto L21839;
                      }
                    }
                  }
                  x1 = *(rtx *)&x0->u;
                  goto L21839;
                }
                if (uVar1 == 0x2f) {
                  prVar2 = *(rtx *)(puVar3 + 4);
                  iVar7 = ix86_carry_flag_operator(prVar2,0);
                  x2 = prVar2;
                  if (((iVar7 != 0) &&
                      (_GLOBAL_OFFSET_TABLE_ = prVar2, **(short **)&prVar2->u == 0x25)) &&
                     ((*(int *)(*(short **)&prVar2->u + 4) == 0x11 &&
                      (*(long *)&(prVar2->u).field_0x8 == _q_regs_operand)))) {
                    if (*(long *)(puVar3 + 8) == flag_trapping_math) {
                      if ((*(long *)(puVar3 + 0xc) == _q_regs_operand) &&
                         (pnum_clobbers != (int *)0x0)) {
                        *pnum_clobbers = 1;
                        return 0x29a;
                      }
                      x2 = *(rtx *)(puVar3 + 4);
                    }
                    else {
                      x2 = *(rtx *)(puVar3 + 4);
                    }
                  }
                  iVar7 = ix86_comparison_operator(x2,0);
                  if (iVar7 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    _GLOBAL_OFFSET_TABLE_ = x2;
                    if ((**(short **)&x2->u == 0x25) && (*(int *)(*(short **)&x2->u + 4) == 0x11)) {
                      if (*(long *)&(x2->u).field_0x8 == _q_regs_operand) {
                        psVar4 = *(short **)(puVar3 + 8);
                        iVar7 = nonimmediate_operand(psVar4,0x10);
                        if (iVar7 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          psVar6 = *(short **)(puVar3 + 0xc);
                          _register_operand = psVar4;
                          iVar7 = nonimmediate_operand(psVar6,0x10);
                          if (iVar7 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if ((ix86_arch_features != '\0') &&
                               ((*_register_operand != 0x2b || (*psVar6 != 0x2b)))) {
                              _nonimmediate_operand = psVar6;
                              return 0x29e;
                            }
                            x1 = *(rtx *)&x0->u;
                            _nonimmediate_operand = psVar6;
                          }
                        }
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                  }
                  goto L21839;
                }
              }
            }
          }
        }
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
L21839:
  iVar7 = memory_operand(x1,0x10);
  if (iVar7 != 0) {
    recog_data = x1;
    psVar4 = *(short **)&(x0->u).field_0x8;
    if ((((*(char *)(psVar4 + 1) == '\x10') && (*psVar4 == 0x12)) && (**(int **)(psVar4 + 4) == 1))
       && (*(int *)(psVar4 + 8) == 0x42)) {
      prVar2 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
      iVar7 = register_operand(prVar2,0x28);
      if ((iVar7 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) {
        return 0x26a;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_5(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  ushort *puVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  rtx x1;
  rtx x3;
  rtx *operands;
  rtx x2;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  uVar1 = *(ushort *)x1;
  if (uVar1 < 0x38) {
    if (0x11 < uVar1) {
      switch(uVar1) {
      case 0x12:
        if (**(int **)&x1->u == 1) {
          switch(*(undefined4 *)&(x1->u).field_0x8) {
          case 0x3c:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            if (prVar2->field_0x2 == '(') {
              if (*(ushort *)prVar2 == 0x65) {
                prVar2 = *(rtx *)&prVar2->u;
                if (prVar2->field_0x2 == '&') {
                  iVar6 = register_operand(prVar2,0x26);
                  if ((((iVar6 != 0) &&
                       (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
                      (((ix86_isa_flags & 0x10000) == 0 ||
                       (((ix86_fpmath & 2) == 0 || ((ix86_fpmath & 3) == 3)))))) &&
                     (flag_unsafe_math_optimizations != 0)) {
                    return 0x248;
                  }
                }
                else if (((((prVar2->field_0x2 == '\'') &&
                           (iVar6 = register_operand(prVar2,0x27), iVar6 != 0)) &&
                          (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
                         ((((ix86_isa_flags & 0x20000) == 0 || ((ix86_fpmath & 2) == 0)) ||
                          ((ix86_fpmath & 3) == 3)))) && (flag_unsafe_math_optimizations != 0)) {
                  return 0x249;
                }
              }
              else {
                iVar6 = register_operand(prVar2,0x28);
                if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0))
                   && (flag_unsafe_math_optimizations != 0)) {
                  return 0x247;
                }
              }
            }
            break;
          case 0x3d:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            if (prVar2->field_0x2 == '(') {
              if (*(ushort *)prVar2 == 0x65) {
                prVar2 = *(rtx *)&prVar2->u;
                if (prVar2->field_0x2 == '&') {
                  iVar6 = register_operand(prVar2,0x26);
                  if (((iVar6 != 0) &&
                      (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
                     ((((ix86_isa_flags & 0x10000) == 0 ||
                       (((ix86_fpmath & 2) == 0 || ((ix86_fpmath & 3) == 3)))) &&
                      (flag_unsafe_math_optimizations != 0)))) {
                    return 0x24b;
                  }
                }
                else if (((((prVar2->field_0x2 == '\'') &&
                           (iVar6 = register_operand(prVar2,0x27), iVar6 != 0)) &&
                          (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
                         ((((ix86_isa_flags & 0x20000) == 0 || ((ix86_fpmath & 2) == 0)) ||
                          ((ix86_fpmath & 3) == 3)))) && (flag_unsafe_math_optimizations != 0)) {
                  return 0x24c;
                }
              }
              else {
                iVar6 = register_operand(prVar2,0x28);
                if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0))
                   && (flag_unsafe_math_optimizations != 0)) {
                  return 0x24a;
                }
              }
            }
            break;
          case 0x41:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            iVar6 = register_operand(prVar2,0x28);
            if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
               (flag_unsafe_math_optimizations != 0)) {
              return 0x263;
            }
            break;
          case 0x43:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            iVar6 = register_operand(prVar2,0x28);
            if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
               (flag_unsafe_math_optimizations != 0)) {
              return 0x25f;
            }
            break;
          case 0x46:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            iVar6 = register_operand(prVar2,0x28);
            if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
               ((flag_unsafe_math_optimizations != 0 &&
                (((reload_in_progress == 0 && (reload_completed == 0)) &&
                 (pnum_clobbers != (int *)0x0)))))) {
              *pnum_clobbers = 1;
              return 0x26d;
            }
            break;
          case 0x47:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            iVar6 = register_operand(prVar2,0x28);
            if (((((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0))
                 && (flag_unsafe_math_optimizations != 0)) &&
                ((reload_in_progress == 0 && (reload_completed == 0)))) &&
               (pnum_clobbers != (int *)0x0)) {
              *pnum_clobbers = 1;
              return 0x278;
            }
            break;
          case 0x48:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            iVar6 = register_operand(prVar2,0x28);
            if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
               (((flag_unsafe_math_optimizations != 0 &&
                 ((reload_in_progress == 0 && (reload_completed == 0)))) &&
                (pnum_clobbers != (int *)0x0)))) {
              *pnum_clobbers = 1;
              return 0x283;
            }
            break;
          case 0x49:
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            iVar6 = register_operand(prVar2,0x28);
            if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) &&
               ((flag_unsafe_math_optimizations != 0 &&
                (((reload_in_progress == 0 && (reload_completed == 0)) &&
                 (pnum_clobbers != (int *)0x0)))))) {
              *pnum_clobbers = 1;
              return 0x285;
            }
          }
        }
        else if (**(int **)&x1->u == 2) {
          iVar6 = *(int *)&(x1->u).field_0x8;
          if (iVar6 == 0x40) {
            prVar2 = *(rtx *)(*(long *)&x1->u + 8);
            if (prVar2->field_0x2 == '(') {
              if (*(ushort *)prVar2 == 0x65) {
                prVar2 = *(rtx *)&prVar2->u;
                if (prVar2->field_0x2 == '&') {
                  iVar6 = register_operand(prVar2,0x26);
                  if (iVar6 != 0) {
                    puVar3 = *(ushort **)(*(long *)&x1->u + 0x10);
                    _GLOBAL_OFFSET_TABLE_ = prVar2;
                    iVar6 = register_operand(puVar3,0x28);
                    if ((((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 0x1000) == 0)
                         ) && (((ix86_isa_flags & 0x10000) == 0 ||
                               (((ix86_fpmath & 2) == 0 || ((ix86_fpmath & 3) == 3)))))) &&
                       ((flag_unsafe_math_optimizations != 0 && (pnum_clobbers != (int *)0x0)))) {
                      *pnum_clobbers = 1;
                      return 0x25a;
                    }
                  }
                }
                else if ((prVar2->field_0x2 == '\'') &&
                        (iVar6 = register_operand(prVar2,0x27), iVar6 != 0)) {
                  puVar3 = *(ushort **)(*(long *)&x1->u + 0x10);
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  iVar6 = register_operand(puVar3,0x28);
                  if (((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 0x1000) == 0))
                     && (((((ix86_isa_flags & 0x20000) == 0 || ((ix86_fpmath & 2) == 0)) ||
                          ((ix86_fpmath & 3) == 3)) &&
                         ((flag_unsafe_math_optimizations != 0 && (pnum_clobbers != (int *)0x0))))))
                  {
                    *pnum_clobbers = 1;
                    return 0x25b;
                  }
                }
              }
              else {
                iVar6 = register_operand(prVar2,0x28);
                if (iVar6 != 0) {
                  puVar3 = *(ushort **)(*(long *)&x1->u + 0x10);
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  iVar6 = register_operand(puVar3,0x28);
                  if (((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 0x1000) == 0))
                     && ((flag_unsafe_math_optimizations != 0 && (pnum_clobbers != (int *)0x0)))) {
                    *pnum_clobbers = 1;
                    return 0x259;
                  }
                }
              }
            }
          }
          else if (iVar6 < 0x41) {
            if (iVar6 == 0x3e) {
              prVar2 = *(rtx *)(*(long *)&x1->u + 8);
              if (prVar2->field_0x2 == '(') {
                if (*(ushort *)prVar2 == 0x65) {
                  prVar2 = *(rtx *)&prVar2->u;
                  if (prVar2->field_0x2 == '&') {
                    iVar6 = register_operand(prVar2,0x26);
                    if (((iVar6 != 0) &&
                        (psVar4 = *(short **)(*(long *)&x1->u + 0x10),
                        _GLOBAL_OFFSET_TABLE_ = prVar2, *(char *)(psVar4 + 1) == '(')) &&
                       (*psVar4 == 0x65)) {
                      puVar3 = *(ushort **)(psVar4 + 4);
                      iVar6 = register_operand(puVar3,0x26);
                      if ((((iVar6 != 0) &&
                           (_register_operand = puVar3, (target_flags & 0x1000) == 0)) &&
                          (((ix86_isa_flags & 0x10000) == 0 ||
                           (((ix86_fpmath & 2) == 0 || ((ix86_fpmath & 3) == 3)))))) &&
                         ((flag_unsafe_math_optimizations != 0 && (pnum_clobbers != (int *)0x0)))) {
                        *pnum_clobbers = 1;
                        return 0x254;
                      }
                    }
                  }
                  else if ((((prVar2->field_0x2 == '\'') &&
                            (iVar6 = register_operand(prVar2,0x27), iVar6 != 0)) &&
                           (psVar4 = *(short **)(*(long *)&x1->u + 0x10),
                           _GLOBAL_OFFSET_TABLE_ = prVar2, *(char *)(psVar4 + 1) == '(')) &&
                          (*psVar4 == 0x65)) {
                    puVar3 = *(ushort **)(psVar4 + 4);
                    iVar6 = register_operand(puVar3,0x27);
                    if (((((iVar6 != 0) &&
                          (_register_operand = puVar3, (target_flags & 0x1000) == 0)) &&
                         (((ix86_isa_flags & 0x20000) == 0 ||
                          (((ix86_fpmath & 2) == 0 || ((ix86_fpmath & 3) == 3)))))) &&
                        (flag_unsafe_math_optimizations != 0)) && (pnum_clobbers != (int *)0x0)) {
                      *pnum_clobbers = 1;
                      return 0x255;
                    }
                  }
                }
                else {
                  iVar6 = register_operand(prVar2,0x28);
                  if (iVar6 != 0) {
                    puVar3 = *(ushort **)(*(long *)&x1->u + 0x10);
                    _GLOBAL_OFFSET_TABLE_ = prVar2;
                    iVar6 = register_operand(puVar3,0x28);
                    if ((((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 0x1000) == 0)
                         ) && (flag_unsafe_math_optimizations != 0)) &&
                       (pnum_clobbers != (int *)0x0)) {
                      *pnum_clobbers = 1;
                      return 0x253;
                    }
                  }
                }
              }
            }
            else if ((iVar6 == 0x3f) &&
                    (prVar2 = *(rtx *)(*(long *)&x1->u + 8), prVar2->field_0x2 == '(')) {
              if (*(ushort *)prVar2 == 0x65) {
                prVar2 = *(rtx *)&prVar2->u;
                if (prVar2->field_0x2 == '&') {
                  iVar6 = register_operand(prVar2,0x26);
                  if (iVar6 != 0) {
                    puVar3 = *(ushort **)(*(long *)&x1->u + 0x10);
                    _GLOBAL_OFFSET_TABLE_ = prVar2;
                    iVar6 = register_operand(puVar3,0x28);
                    if ((((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 0x1000) == 0)
                         ) && (((ix86_isa_flags & 0x10000) == 0 ||
                               (((ix86_fpmath & 2) == 0 || ((ix86_fpmath & 3) == 3)))))) &&
                       ((flag_unsafe_math_optimizations != 0 && (pnum_clobbers != (int *)0x0)))) {
                      *pnum_clobbers = 1;
                      return 599;
                    }
                  }
                }
                else if ((prVar2->field_0x2 == '\'') &&
                        (iVar6 = register_operand(prVar2,0x27), iVar6 != 0)) {
                  puVar3 = *(ushort **)(*(long *)&x1->u + 0x10);
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  iVar6 = register_operand(puVar3,0x28);
                  if (((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 0x1000) == 0))
                     && (((((ix86_isa_flags & 0x20000) == 0 || ((ix86_fpmath & 2) == 0)) ||
                          ((ix86_fpmath & 3) == 3)) &&
                         ((flag_unsafe_math_optimizations != 0 && (pnum_clobbers != (int *)0x0))))))
                  {
                    *pnum_clobbers = 1;
                    return 600;
                  }
                }
              }
              else {
                iVar6 = register_operand(prVar2,0x28);
                if (iVar6 != 0) {
                  puVar3 = *(ushort **)(*(long *)&x1->u + 0x10);
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  iVar6 = register_operand(puVar3,0x28);
                  if (((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 0x1000) == 0))
                     && ((flag_unsafe_math_optimizations != 0 && (pnum_clobbers != (int *)0x0)))) {
                    *pnum_clobbers = 1;
                    return 0x256;
                  }
                }
              }
            }
          }
        }
        break;
      case 0x2f:
        prVar2 = *(rtx *)&x1->u;
        iVar6 = fcmov_comparison_operator(prVar2,0);
        if ((((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, **(short **)&prVar2->u == 0x25)) &&
            (*(int *)(*(short **)&prVar2->u + 4) == 0x11)) &&
           (*(long *)&(prVar2->u).field_0x8 == _q_regs_operand)) {
          puVar3 = *(ushort **)&(x1->u).field_0x8;
          iVar6 = register_operand(puVar3,0x28);
          if (iVar6 != 0) {
            prVar2 = *(rtx *)&(x1->u).field_0x10;
            _register_operand = puVar3;
            iVar6 = register_operand(prVar2,0x28);
            if (((iVar6 != 0) && (_nonimmediate_operand = prVar2, (target_flags & 2) != 0)) &&
               (ix86_arch_features != '\0')) {
              return 0x2a2;
            }
          }
        }
        break;
      case 0x31:
      case 0x32:
      case 0x34:
      case 0x37:
        iVar6 = binary_fp_operator(x1,0x28);
        if ((iVar6 != 0) &&
           (prVar2 = *(rtx *)&x1->u, _nonimmediate_operand = x1, prVar2->field_0x2 == '(')) {
          uVar1 = *(ushort *)prVar2;
          _nonimmediate_operand = x1;
          if (uVar1 == 0x67) {
            prVar2 = *(rtx *)&prVar2->u;
            if (prVar2->field_0x2 == '\x0f') {
              iVar6 = nonimmediate_operand(prVar2,0xf);
              if (iVar6 != 0) {
                puVar3 = *(ushort **)&(x1->u).field_0x8;
                _GLOBAL_OFFSET_TABLE_ = prVar2;
                iVar6 = register_operand(puVar3,0x28);
                if (((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 2) != 0)) &&
                   (((char)((uint)(undefined4)cfun >> 0x18) != '\0' ||
                    (cVar5 = optimize_function_for_size_p(CONCAT44(cfun._4_4_,(undefined4)cfun)),
                    cVar5 != '\0')))) {
                  return 0x233;
                }
              }
            }
            else if ((prVar2->field_0x2 == '\x10') &&
                    (iVar6 = nonimmediate_operand(prVar2,0x10), iVar6 != 0)) {
              puVar3 = *(ushort **)&(x1->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              iVar6 = register_operand(puVar3,0x28);
              if (((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 2) != 0)) &&
                 (((char)cfun._4_4_ != '\0' ||
                  (cVar5 = optimize_function_for_size_p(CONCAT44(cfun._4_4_,(undefined4)cfun)),
                  cVar5 != '\0')))) {
                return 0x234;
              }
            }
          }
          else if (uVar1 < 0x68) {
            if (uVar1 == 0x65) {
              x3 = *(rtx *)&prVar2->u;
              if (x3->field_0x2 == '&') {
                iVar6 = nonimmediate_operand(x3,0x26);
                if (iVar6 != 0) {
                  puVar3 = *(ushort **)&(x1->u).field_0x8;
                  _GLOBAL_OFFSET_TABLE_ = x3;
                  iVar6 = register_operand(puVar3,0x28);
                  if (iVar6 == 0) {
                    x3 = *(rtx *)(*(long *)&x1->u + 8);
                  }
                  else {
                    if ((target_flags & 2) != 0) {
                      _register_operand = puVar3;
                      return 0x237;
                    }
                    x1 = *(rtx *)&(x0->u).field_0x8;
                    x3 = *(rtx *)(*(long *)&x1->u + 8);
                    _register_operand = puVar3;
                  }
                }
                iVar6 = register_operand(x3,0x26);
                if (iVar6 != 0) {
                  _GLOBAL_OFFSET_TABLE_ = x3;
                  psVar4 = *(short **)&(x1->u).field_0x8;
                  if ((*(char *)(psVar4 + 1) == '(') && (*psVar4 == 0x65)) {
                    puVar3 = *(ushort **)(psVar4 + 4);
                    iVar6 = nonimmediate_operand(puVar3,0x26);
                    if ((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 2) != 0)) {
                      return 0x23b;
                    }
                  }
                }
              }
              else if (x3->field_0x2 == '\'') {
                iVar6 = nonimmediate_operand(x3,0x27);
                if (iVar6 != 0) {
                  puVar3 = *(ushort **)&(x1->u).field_0x8;
                  _GLOBAL_OFFSET_TABLE_ = x3;
                  iVar6 = register_operand(puVar3,0x28);
                  if (iVar6 == 0) {
                    x3 = *(rtx *)(*(long *)&x1->u + 8);
                  }
                  else {
                    if ((target_flags & 2) != 0) {
                      _register_operand = puVar3;
                      return 0x238;
                    }
                    x1 = *(rtx *)&(x0->u).field_0x8;
                    x3 = *(rtx *)(*(long *)&x1->u + 8);
                    _register_operand = puVar3;
                  }
                }
                iVar6 = register_operand(x3,0x27);
                if (iVar6 != 0) {
                  _GLOBAL_OFFSET_TABLE_ = x3;
                  psVar4 = *(short **)&(x1->u).field_0x8;
                  if ((*(char *)(psVar4 + 1) == '(') && (*psVar4 == 0x65)) {
                    puVar3 = *(ushort **)(psVar4 + 4);
                    iVar6 = nonimmediate_operand(puVar3,0x27);
                    if ((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 2) != 0)) {
                      return 0x23c;
                    }
                  }
                }
              }
            }
            else if ((uVar1 < 0x66) &&
                    ((((uVar1 == 0x25 || (uVar1 == 0x27)) &&
                      (iVar6 = register_operand(prVar2,0x28), iVar6 != 0)) &&
                     (puVar3 = *(ushort **)&(x1->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar2,
                     *(char *)(puVar3 + 1) == '(')))) {
              uVar1 = *puVar3;
              if (uVar1 == 0x67) {
                puVar3 = *(ushort **)(puVar3 + 4);
                if (*(char *)(puVar3 + 1) == '\x0f') {
                  iVar6 = nonimmediate_operand(puVar3,0xf);
                  if (((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 2) != 0)) &&
                     (((char)((uint)(undefined4)cfun >> 0x18) != '\0' ||
                      (cVar5 = optimize_function_for_size_p(CONCAT44(cfun._4_4_,(undefined4)cfun)),
                      cVar5 != '\0')))) {
                    return 0x235;
                  }
                }
                else if (((*(char *)(puVar3 + 1) == '\x10') &&
                         (iVar6 = nonimmediate_operand(puVar3,0x10), iVar6 != 0)) &&
                        ((_register_operand = puVar3, (target_flags & 2) != 0 &&
                         (((char)cfun._4_4_ != '\0' ||
                          (cVar5 = optimize_function_for_size_p
                                             (CONCAT44(cfun._4_4_,(undefined4)cfun)), cVar5 != '\0')
                          ))))) {
                  return 0x236;
                }
              }
              else if (uVar1 < 0x68) {
                if (uVar1 == 0x65) {
                  puVar3 = *(ushort **)(puVar3 + 4);
                  if (*(char *)(puVar3 + 1) == '&') {
                    iVar6 = nonimmediate_operand(puVar3,0x26);
                    if ((iVar6 != 0) && (_register_operand = puVar3, (target_flags & 2) != 0)) {
                      return 0x239;
                    }
                  }
                  else if (((*(char *)(puVar3 + 1) == '\'') &&
                           (iVar6 = nonimmediate_operand(puVar3,0x27), iVar6 != 0)) &&
                          (_register_operand = puVar3, (target_flags & 2) != 0)) {
                    return 0x23a;
                  }
                }
                else if (((uVar1 < 0x66) && ((uVar1 == 0x25 || (uVar1 == 0x27)))) &&
                        (iVar6 = register_operand(puVar3,0x28), iVar6 != 0)) {
                  if (((target_flags & 2) != 0) &&
                     (*(int *)(&rtx_class + (long)(int)(uint)*(ushort *)_nonimmediate_operand * 4)
                      == 3)) {
                    _register_operand = puVar3;
                    return 0x231;
                  }
                  _register_operand = puVar3;
                  if (((target_flags & 2) != 0) &&
                     (*(int *)(&rtx_class + (long)(int)(uint)*(ushort *)_nonimmediate_operand * 4)
                      != 3)) {
                    return 0x232;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if ((uVar1 == 0x70) && (prVar2 = *(rtx *)&x1->u, prVar2->field_0x2 == '(')) {
    if (*(ushort *)prVar2 == 0x65) {
      prVar2 = *(rtx *)&prVar2->u;
      if (prVar2->field_0x2 == '&') {
        iVar6 = register_operand(prVar2,0x26);
        if ((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) {
          return 0x240;
        }
      }
      else if (((prVar2->field_0x2 == '\'') && (iVar6 = register_operand(prVar2,0x27), iVar6 != 0))
              && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) {
        return 0x241;
      }
    }
    else {
      iVar6 = register_operand(prVar2,0x28);
      if ((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (target_flags & 0x1000) == 0)) {
        return 0x23f;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_6(rtx x0,rtx insn,int *pnum_clobbers)

{
  byte bVar1;
  ushort uVar2;
  rtx prVar3;
  ushort *puVar4;
  short *psVar5;
  short *psVar6;
  undefined8 uVar7;
  int iVar8;
  rtx x1;
  rtx x3;
  rtx *operands;
  rtx x2;
  rtx x4;
  
  prVar3 = *(rtx *)&x0->u;
  iVar8 = register_operand(prVar3,0x10);
  x1 = prVar3;
  if (iVar8 != 0) {
    puVar4 = *(ushort **)&(x0->u).field_0x8;
    recog_data = prVar3;
    if (*(char *)(puVar4 + 1) == '\x10') {
      uVar2 = *puVar4;
      if (uVar2 == 0x68) {
        psVar5 = *(short **)(puVar4 + 4);
        if (*(char *)(psVar5 + 1) == '&') {
          if (*psVar5 == 0x7c) {
            psVar6 = *(short **)(psVar5 + 4);
            iVar8 = nonimmediate_operand(psVar6,0x4f);
            if (iVar8 == 0) {
              x1 = *(rtx *)&x0->u;
            }
            else {
              psVar5 = *(short **)(psVar5 + 8);
              _GLOBAL_OFFSET_TABLE_ = psVar6;
              if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
                if ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand) &&
                   ((ix86_isa_flags & 0x10000) != 0)) {
                  return 0x470;
                }
                x1 = *(rtx *)&x0->u;
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
            }
          }
          else {
            x1 = *(rtx *)&x0->u;
          }
        }
        else if (*(char *)(psVar5 + 1) == '\'') {
          if (*psVar5 == 0x7c) {
            psVar6 = *(short **)(psVar5 + 4);
            iVar8 = nonimmediate_operand(psVar6,0x50);
            if (iVar8 == 0) {
              x1 = *(rtx *)&x0->u;
            }
            else {
              psVar5 = *(short **)(psVar5 + 8);
              _GLOBAL_OFFSET_TABLE_ = psVar6;
              if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
                if ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand) &&
                   ((ix86_isa_flags & 0x20000) != 0)) {
                  return 0x481;
                }
                x1 = *(rtx *)&x0->u;
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
            }
          }
          else {
            x1 = *(rtx *)&x0->u;
          }
        }
        else {
          x1 = *(rtx *)&x0->u;
        }
      }
      else if (uVar2 < 0x69) {
        if (uVar2 == 99) {
          psVar5 = *(short **)(puVar4 + 4);
          if (*(char *)(psVar5 + 1) == '\x0e') {
            if (*psVar5 == 0x7c) {
              psVar6 = *(short **)(psVar5 + 4);
              iVar8 = register_operand(psVar6,0x3f);
              if (iVar8 == 0) {
                x1 = *(rtx *)&x0->u;
              }
              else {
                psVar5 = *(short **)(psVar5 + 8);
                _GLOBAL_OFFSET_TABLE_ = psVar6;
                if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
                  prVar3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
                  iVar8 = const_0_to_15_operand(prVar3,0x10);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    if ((ix86_isa_flags & 0x80000) != 0) {
                      _register_operand = prVar3;
                      return 0x5b8;
                    }
                    x1 = *(rtx *)&x0->u;
                    _register_operand = prVar3;
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
              }
            }
            else {
              x1 = *(rtx *)&x0->u;
            }
          }
          else if (*(char *)(psVar5 + 1) == '\x0f') {
            if (*psVar5 == 0x7c) {
              psVar6 = *(short **)(psVar5 + 4);
              if (*(char *)(psVar6 + 1) == '<') {
                iVar8 = register_operand(psVar6,0x3c);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  psVar5 = *(short **)(psVar5 + 8);
                  if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
                    prVar3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
                    _GLOBAL_OFFSET_TABLE_ = psVar6;
                    iVar8 = const_0_to_3_operand(prVar3,0x10);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      if (((ix86_isa_flags & 0x10000) != 0) || ((ix86_isa_flags & 2) != 0)) {
                        _register_operand = prVar3;
                        return 0x332;
                      }
                      x1 = *(rtx *)&x0->u;
                      _register_operand = prVar3;
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                    _GLOBAL_OFFSET_TABLE_ = psVar6;
                  }
                }
              }
              else if (*(char *)(psVar6 + 1) == '@') {
                iVar8 = register_operand(psVar6,0x40);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  psVar5 = *(short **)(psVar5 + 8);
                  if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
                    prVar3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
                    _GLOBAL_OFFSET_TABLE_ = psVar6;
                    iVar8 = const_0_to_7_operand(prVar3,0x10);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      if ((ix86_isa_flags & 0x20000) != 0) {
                        _register_operand = prVar3;
                        return 0x5ba;
                      }
                      x1 = *(rtx *)&x0->u;
                      _register_operand = prVar3;
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                    _GLOBAL_OFFSET_TABLE_ = psVar6;
                  }
                }
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
            }
            else {
              x1 = *(rtx *)&x0->u;
            }
          }
          else {
            x1 = *(rtx *)&x0->u;
          }
        }
        else {
          if (99 < uVar2) goto code_r0x0010c58a;
          if (uVar2 == 0x12) {
            if (**(int **)(puVar4 + 4) == 1) {
              if (*(int *)(puVar4 + 8) == 0x28) {
                psVar5 = *(short **)(*(long *)(puVar4 + 4) + 8);
                if (*(char *)(psVar5 + 1) == '&') {
                  if (*psVar5 == 0x7c) {
                    psVar6 = *(short **)(psVar5 + 4);
                    iVar8 = nonimmediate_operand(psVar6,0x4f);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      psVar5 = *(short **)(psVar5 + 8);
                      _GLOBAL_OFFSET_TABLE_ = psVar6;
                      if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
                        if ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand) &&
                           ((ix86_isa_flags & 0x10000) != 0)) {
                          return 0x46e;
                        }
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                  }
                  else {
                    iVar8 = nonimmediate_operand(psVar5,0x26);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      if ((ix86_isa_flags & 0x10000) != 0) {
                        _GLOBAL_OFFSET_TABLE_ = psVar5;
                        return 0x46f;
                      }
                      x1 = *(rtx *)&x0->u;
                      _GLOBAL_OFFSET_TABLE_ = psVar5;
                    }
                  }
                }
                else if (*(char *)(psVar5 + 1) == '\'') {
                  if (*psVar5 == 0x7c) {
                    psVar6 = *(short **)(psVar5 + 4);
                    iVar8 = nonimmediate_operand(psVar6,0x50);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      psVar5 = *(short **)(psVar5 + 8);
                      _GLOBAL_OFFSET_TABLE_ = psVar6;
                      if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
                        if ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand) &&
                           ((ix86_isa_flags & 0x20000) != 0)) {
                          return 0x47f;
                        }
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                  }
                  else {
                    iVar8 = nonimmediate_operand(psVar5,0x27);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      if ((ix86_isa_flags & 0x20000) != 0) {
                        _GLOBAL_OFFSET_TABLE_ = psVar5;
                        return 0x480;
                      }
                      x1 = *(rtx *)&x0->u;
                      _GLOBAL_OFFSET_TABLE_ = psVar5;
                    }
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
              }
              else if (*(int *)(puVar4 + 8) == 0x2a) {
                psVar5 = *(short **)(*(long *)(puVar4 + 4) + 8);
                iVar8 = register_operand(psVar5,0x3b);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  if (((ix86_isa_flags & 0x10000) != 0) || ((ix86_isa_flags & 2) != 0)) {
                    _GLOBAL_OFFSET_TABLE_ = psVar5;
                    return 0x33d;
                  }
                  x1 = *(rtx *)&x0->u;
                  _GLOBAL_OFFSET_TABLE_ = psVar5;
                }
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
            }
            else if (**(int **)(puVar4 + 4) == 2) {
              if (*(int *)(puVar4 + 8) == 0x8f) {
                psVar5 = *(short **)(*(long *)(puVar4 + 4) + 8);
                iVar8 = register_operand(psVar5,0x10);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  prVar3 = *(rtx *)(*(long *)(puVar4 + 4) + 0x10);
                  bVar1 = prVar3->field_0x2;
                  _GLOBAL_OFFSET_TABLE_ = psVar5;
                  if (bVar1 == 0x10) {
                    iVar8 = nonimmediate_operand(prVar3,0x10);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      if (((ix86_isa_flags & 0x100000) != 0) || ((ix86_isa_flags & 0x40) != 0)) {
                        _register_operand = prVar3;
                        return 0x2c6;
                      }
                      x1 = *(rtx *)&x0->u;
                      _register_operand = prVar3;
                    }
                  }
                  else if (bVar1 < 0x11) {
                    if (bVar1 == 0xe) {
                      iVar8 = nonimmediate_operand(prVar3,0xe);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        if (((ix86_isa_flags & 0x100000) != 0) || ((ix86_isa_flags & 0x40) != 0)) {
                          _register_operand = prVar3;
                          return 0x2c4;
                        }
                        x1 = *(rtx *)&x0->u;
                        _register_operand = prVar3;
                      }
                    }
                    else {
                      if (bVar1 != 0xf) goto code_r0x0010c677;
                      iVar8 = nonimmediate_operand(prVar3,0xf);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        if (((ix86_isa_flags & 0x100000) != 0) || ((ix86_isa_flags & 0x40) != 0)) {
                          _register_operand = prVar3;
                          return 0x2c5;
                        }
                        x1 = *(rtx *)&x0->u;
                        _register_operand = prVar3;
                      }
                    }
                  }
                  else {
code_r0x0010c677:
                    x1 = *(rtx *)&x0->u;
                  }
                }
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
            }
            else {
              x1 = *(rtx *)&x0->u;
            }
          }
          else {
            if (uVar2 != 0x13) goto code_r0x0010c58a;
            if ((**(int **)(puVar4 + 4) == 1) && (*(int *)(puVar4 + 8) == 0x17)) {
              if ((*(long *)(*(long *)(puVar4 + 4) + 8) == _q_regs_operand) &&
                 ((ix86_isa_flags & 0x400) != 0)) {
                return 0x2cb;
              }
              x1 = *(rtx *)&x0->u;
            }
            else {
              x1 = *(rtx *)&x0->u;
            }
          }
        }
      }
      else {
code_r0x0010c58a:
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
  iVar8 = nonimmediate_operand(x1,0x10);
  if (iVar8 != 0) {
    recog_data = x1;
    psVar5 = *(short **)&(x0->u).field_0x8;
    if ((*(char *)(psVar5 + 1) == '\x10') && (*psVar5 == 0x7c)) {
      psVar6 = *(short **)(psVar5 + 4);
      if (*(char *)(psVar6 + 1) == '=') {
        iVar8 = nonimmediate_operand(psVar6,0x3d);
        if (iVar8 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          psVar5 = *(short **)(psVar5 + 8);
          if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
            psVar5 = *(short **)(*(long *)(psVar5 + 4) + 8);
            if (*psVar5 == 0x1e) {
              if ((long)(int)*(undefined8 *)(psVar5 + 4) == *(long *)(psVar5 + 4)) {
                if ((int)*(undefined8 *)(psVar5 + 4) == 0) {
                  if (((ix86_isa_flags & 0x800) != 0) &&
                     ((*(short *)recog_data != 0x2b || (*psVar6 != 0x2b)))) {
                    _GLOBAL_OFFSET_TABLE_ = psVar6;
                    return 0x338;
                  }
                  x1 = *(rtx *)&x0->u;
                  _GLOBAL_OFFSET_TABLE_ = psVar6;
                  goto L21881;
                }
                if ((int)*(undefined8 *)(psVar5 + 4) == 1) {
                  if (((ix86_isa_flags & 0x800) != 0) &&
                     ((*(short *)recog_data != 0x2b || (*psVar6 != 0x2b)))) {
                    _GLOBAL_OFFSET_TABLE_ = psVar6;
                    return 0x339;
                  }
                  x1 = *(rtx *)&x0->u;
                  _GLOBAL_OFFSET_TABLE_ = psVar6;
                  goto L21881;
                }
              }
              x1 = *(rtx *)&x0->u;
              _GLOBAL_OFFSET_TABLE_ = psVar6;
            }
            else {
              x1 = *(rtx *)&x0->u;
              _GLOBAL_OFFSET_TABLE_ = psVar6;
            }
          }
          else {
            x1 = *(rtx *)&x0->u;
            _GLOBAL_OFFSET_TABLE_ = psVar6;
          }
        }
      }
      else if (*(char *)(psVar6 + 1) == 'A') {
        iVar8 = register_operand(psVar6,0x41);
        if (iVar8 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          psVar5 = *(short **)(psVar5 + 8);
          if ((*psVar5 == 0xf) && (**(int **)(psVar5 + 4) == 1)) {
            prVar3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
            if (*(short *)prVar3 == 0x1e) {
              _GLOBAL_OFFSET_TABLE_ = psVar6;
              iVar8 = const_0_to_3_operand(prVar3,0x10);
              x3 = prVar3;
              if (iVar8 != 0) {
                if ((ix86_isa_flags & 0x80000) != 0) {
                  _register_operand = prVar3;
                  return 0x5bc;
                }
                x3 = *(rtx *)(*(long *)(*(long *)(*(long *)&(x0->u).field_0x8 + 0x10) + 8) + 8);
                _register_operand = prVar3;
              }
              if ((*(long *)&x3->u == 0) && ((ix86_isa_flags & 0x10000) != 0)) {
                return 0x5c2;
              }
              x1 = *(rtx *)&x0->u;
            }
            else {
              x1 = *(rtx *)&x0->u;
              _GLOBAL_OFFSET_TABLE_ = psVar6;
            }
          }
          else {
            x1 = *(rtx *)&x0->u;
            _GLOBAL_OFFSET_TABLE_ = psVar6;
          }
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
L21881:
  iVar8 = memory_operand(x1,0x10);
  if (iVar8 != 0) {
    recog_data = x1;
    psVar5 = *(short **)&(x0->u).field_0x8;
    if (*(char *)(psVar5 + 1) == '\x10') {
      if (*psVar5 == 0x12) {
        if ((**(int **)(psVar5 + 4) == 1) && (*(int *)(psVar5 + 8) == 0x2b)) {
          psVar5 = *(short **)(*(long *)(psVar5 + 4) + 8);
          iVar8 = register_operand(psVar5,0x10);
          if (iVar8 == 0) {
            x1 = *(rtx *)&x0->u;
          }
          else {
            if ((ix86_isa_flags & 0x20000) != 0) {
              _GLOBAL_OFFSET_TABLE_ = psVar5;
              return 0x369;
            }
            x1 = *(rtx *)&x0->u;
            _GLOBAL_OFFSET_TABLE_ = psVar5;
          }
        }
        else {
          x1 = *(rtx *)&x0->u;
        }
      }
      else if (*psVar5 == 0x13) {
        if ((**(int **)(psVar5 + 4) == 1) && (*(int *)(psVar5 + 8) == 4)) {
          if ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand) &&
             ((ix86_isa_flags & 0x10000) != 0)) {
            return 0x5e2;
          }
          x1 = *(rtx *)&x0->u;
        }
        else {
          x1 = *(rtx *)&x0->u;
        }
      }
      else {
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
  iVar8 = register_operand(x1,0x10);
  if (iVar8 != 0) {
    recog_data = x1;
    psVar5 = *(short **)&(x0->u).field_0x8;
    if (*(char *)(psVar5 + 1) == '\x10') {
      if (*psVar5 == 0x12) {
        if ((**(int **)(psVar5 + 4) == 1) && (*(int *)(psVar5 + 8) == 0x2a)) {
          psVar5 = *(short **)(*(long *)(psVar5 + 4) + 8);
          switch(*(undefined *)(psVar5 + 1)) {
          case 0x3f:
            iVar8 = register_operand(psVar5,0x3f);
            if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = psVar5, (ix86_isa_flags & 0x20000) != 0)) {
              return 0x5df;
            }
            break;
          case 0x4f:
            iVar8 = register_operand(psVar5,0x4f);
            if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = psVar5, (ix86_isa_flags & 0x10000) != 0)) {
              return 0x5dd;
            }
            break;
          case 0x50:
            iVar8 = register_operand(psVar5,0x50);
            if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = psVar5, (ix86_isa_flags & 0x20000) != 0)) {
              return 0x5de;
            }
            break;
          case 0x51:
            iVar8 = register_operand(psVar5,0x51);
            if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = psVar5, (ix86_isa_flags & 0x20) != 0)) {
              return 0x5db;
            }
            break;
          case 0x52:
            iVar8 = register_operand(psVar5,0x52);
            if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = psVar5, (ix86_isa_flags & 0x20) != 0)) {
              return 0x5dc;
            }
          }
        }
      }
      else if (*psVar5 == 0x7c) {
        psVar6 = *(short **)(psVar5 + 4);
        iVar8 = memory_operand(psVar6,0x41);
        if (((iVar8 != 0) &&
            (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = psVar6, *psVar5 == 0xf)) &&
           (**(int **)(psVar5 + 4) == 1)) {
          uVar7 = *(undefined8 *)(*(long *)(psVar5 + 4) + 8);
          iVar8 = const_0_to_3_operand(uVar7,0);
          if (iVar8 != 0) {
            _register_operand = (rtx)uVar7;
            return 0x5c3;
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_7(rtx x0,rtx insn,int *pnum_clobbers)

{
  undefined2 *puVar1;
  short *psVar2;
  undefined8 uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  
  puVar1 = *(undefined2 **)&(x0->u).field_0x8;
  switch(*puVar1) {
  case 0x31:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x31,0x3b,&recog_data), iVar7 != 0)) {
        return 0x2f4;
      }
    }
    break;
  case 0x32:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x32,0x3b,&recog_data), iVar7 != 0)) {
        return 0x2f5;
      }
    }
    break;
  case 0x3d:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == ';') {
      if (*psVar2 == 0x40) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar7 = register_operand(psVar2,0x3b);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar7 = nonimmediate_operand(uVar3,0x3b);
          if ((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
            return 0x31c;
          }
        }
      }
      else {
        iVar7 = nonimmediate_operand(psVar2,0x3b);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar7 = nonimmediate_operand(uVar3,0x3b);
          if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
             (iVar7 = ix86_binary_operator_ok(0x3d,0x3b,&recog_data), iVar7 != 0)) {
            return 799;
          }
        }
      }
    }
    break;
  case 0x3e:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x3e,0x3b,&recog_data), iVar7 != 0)) {
        return 800;
      }
    }
    break;
  case 0x3f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x3f,0x3b,&recog_data), iVar7 != 0)) {
        return 0x321;
      }
    }
    break;
  case 0x48:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) &&
          ((_register_operand = uVar3, (ix86_isa_flags & 0x10000) != 0 ||
           ((ix86_isa_flags & 2) != 0)))) &&
         (iVar7 = ix86_binary_operator_ok(0x48,0x3b,&recog_data), iVar7 != 0)) {
        return 0x30d;
      }
    }
    break;
  case 0x49:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) &&
          ((_register_operand = uVar3, (ix86_isa_flags & 0x10000) != 0 ||
           ((ix86_isa_flags & 2) != 0)))) &&
         (iVar7 = ix86_binary_operator_ok(0x49,0x3b,&recog_data), iVar7 != 0)) {
        return 0x30c;
      }
    }
    break;
  case 0x51:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x51,0x3b,&recog_data), iVar7 != 0)) {
        return 0x316;
      }
    }
    break;
  case 0x53:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = register_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if ((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
        return 0x319;
      }
    }
    break;
  case 100:
    psVar2 = *(short **)(puVar1 + 4);
    if (((*(char *)(psVar2 + 1) == '@') && (*psVar2 == 0x44)) &&
       ((psVar4 = *(short **)(psVar2 + 4), *(char *)(psVar4 + 1) == '@' &&
        ((((*psVar4 == 0x31 && (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '@')) &&
          (*psVar5 == 0x31)) &&
         ((psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == '@' && (*psVar6 == 99))))))))
    {
      psVar6 = *(short **)(psVar6 + 4);
      iVar7 = nonimmediate_operand(psVar6,0x3b);
      if ((iVar7 != 0) &&
         ((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = psVar6,
          *(char *)(psVar5 + 1) == '@' && (*psVar5 == 99)))) {
        uVar3 = *(undefined8 *)(psVar5 + 4);
        iVar7 = nonimmediate_operand(uVar3,0x3b);
        if (((((((iVar7 != 0) &&
                (((psVar4 = *(short **)(psVar4 + 8), _register_operand = uVar3,
                  *(char *)(psVar4 + 1) == '@' && (*psVar4 == 0x21)) &&
                 (**(int **)(psVar4 + 4) == 8)))) &&
               (((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                 (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _bt_comparison_operator)) &&
                (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _bt_comparison_operator)))) &&
              ((*(long *)(*(long *)(psVar4 + 4) + 0x20) == _bt_comparison_operator &&
               (*(long *)(*(long *)(psVar4 + 4) + 0x28) == _bt_comparison_operator)))) &&
             ((*(long *)(*(long *)(psVar4 + 4) + 0x30) == _bt_comparison_operator &&
              (((*(long *)(*(long *)(psVar4 + 4) + 0x38) == _bt_comparison_operator &&
                (*(long *)(*(long *)(psVar4 + 4) + 0x40) == _bt_comparison_operator)) &&
               (*(long *)(psVar2 + 8) == _bt_comparison_operator)))))) &&
            (((ix86_isa_flags & 0x10000) != 0 || ((ix86_isa_flags & 1) != 0)))) &&
           (iVar7 = ix86_binary_operator_ok(0x31,0x3b,&recog_data), iVar7 != 0)) {
          return 0x33a;
        }
      }
    }
    break;
  case 0x7c:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == '?') && (*psVar2 == 0x7d)) {
      psVar4 = *(short **)(psVar2 + 4);
      iVar7 = register_operand(psVar4,0x3b);
      if (iVar7 != 0) {
        uVar3 = *(undefined8 *)(psVar2 + 8);
        _GLOBAL_OFFSET_TABLE_ = psVar4;
        iVar7 = nonimmediate_operand(uVar3,0x3b);
        if ((((iVar7 != 0) &&
             (psVar2 = *(short **)(puVar1 + 8), _register_operand = uVar3, *psVar2 == 0xf)) &&
            (**(int **)(psVar2 + 4) == 8)) &&
           ((psVar4 = *(short **)(*(long *)(psVar2 + 4) + 8), *psVar4 == 0x1e &&
            ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4))))) {
          if ((int)*(undefined8 *)(psVar4 + 4) == 0) {
            if ((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _flags_reg_operand) &&
                 (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _bt_comparison_operator)) &&
                ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _constant_call_address_operand &&
                 (((*(long *)(*(long *)(psVar2 + 4) + 0x28) == _ix86_fp_comparison_operator &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _sibcall_insn_operand)) &&
                  (*(long *)(*(long *)(psVar2 + 4) + 0x38) == _swap_condition)))))) &&
               ((*(long *)(*(long *)(psVar2 + 4) + 0x40) == _nonimmediate_or_sse_const_operand &&
                ((ix86_isa_flags & 0x800) != 0)))) {
              return 0x32c;
            }
          }
          else if (((((int)*(undefined8 *)(psVar4 + 4) == 4) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _const_0_to_255_mul_8_operand)) &&
                   ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode &&
                    (((*(long *)(*(long *)(psVar2 + 4) + 0x20) ==
                       _ix86_vec_interleave_v2df_operator_ok &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _index_register_operand)) &&
                     (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _reg_not_xmm0_operand)))))) &&
                  (((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _const248_operand &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _nonimm_not_xmm0_operand)) &&
                   ((ix86_isa_flags & 0x800) != 0)))) {
            return 0x32b;
          }
        }
      }
    }
    break;
  case 0x7d:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == '8') {
      if (*psVar2 == 0x88) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar7 = register_operand(psVar2,0x3c);
        if (((iVar7 != 0) &&
            (psVar4 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2,
            *(char *)(psVar4 + 1) == '8')) && (*psVar4 == 0x88)) {
          uVar3 = *(undefined8 *)(psVar4 + 4);
          iVar7 = nonimmediate_operand(uVar3,0x3c);
          if ((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
            return 0x328;
          }
        }
      }
      else if (*psVar2 == 0x89) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar7 = register_operand(psVar2,0x3c);
        if (((iVar7 != 0) &&
            (psVar4 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2,
            *(char *)(psVar4 + 1) == '8')) && (*psVar4 == 0x89)) {
          uVar3 = *(undefined8 *)(psVar4 + 4);
          iVar7 = nonimmediate_operand(uVar3,0x3c);
          if ((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
            return 0x32a;
          }
        }
      }
    }
    break;
  case 0x7f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x7f,0x3b,&recog_data), iVar7 != 0)) {
        return 0x2fc;
      }
    }
    break;
  case 0x80:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x80,0x3b,&recog_data), iVar7 != 0)) {
        return 0x2fd;
      }
    }
    break;
  case 0x81:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x81,0x3b,&recog_data), iVar7 != 0)) {
        return 0x2fe;
      }
    }
    break;
  case 0x87:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3b);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3b);
      if (((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar7 = ix86_binary_operator_ok(0x87,0x3b,&recog_data), iVar7 != 0)) {
        return 0x2ff;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_8(rtx x0,rtx insn,int *pnum_clobbers)

{
  undefined2 *puVar1;
  short *psVar2;
  undefined8 uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  undefined8 uVar7;
  int iVar8;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  
  puVar1 = *(undefined2 **)&(x0->u).field_0x8;
  switch(*puVar1) {
  case 0x31:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x31,0x3c,&recog_data), iVar8 != 0)) {
        return 0x2f6;
      }
    }
    break;
  case 0x32:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x32,0x3c,&recog_data), iVar8 != 0)) {
        return 0x2f7;
      }
    }
    break;
  case 0x34:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x34,0x3c,&recog_data), iVar8 != 0)) {
        return 0x304;
      }
    }
    break;
  case 0x3d:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == '<') {
      if (*psVar2 == 0x40) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar8 = register_operand(psVar2,0x3c);
        if (iVar8 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar8 = nonimmediate_operand(uVar3,0x3c);
          if ((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
            return 0x31d;
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(psVar2,0x3c);
        if (iVar8 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar8 = nonimmediate_operand(uVar3,0x3c);
          if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
             (iVar8 = ix86_binary_operator_ok(0x3d,0x3c,&recog_data), iVar8 != 0)) {
            return 0x322;
          }
        }
      }
    }
    break;
  case 0x3e:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x3e,0x3c,&recog_data), iVar8 != 0)) {
        return 0x323;
      }
    }
    break;
  case 0x3f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x3f,0x3c,&recog_data), iVar8 != 0)) {
        return 0x324;
      }
    }
    break;
  case 0x41:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = register_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonmemory_operand(uVar3,0x10);
      if ((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
        return 0x313;
      }
    }
    break;
  case 0x43:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = register_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonmemory_operand(uVar3,0x10);
      if ((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
        return 0x30e;
      }
    }
    break;
  case 0x44:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = register_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonmemory_operand(uVar3,0x10);
      if ((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
        return 0x310;
      }
    }
    break;
  case 0x46:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) &&
          ((_register_operand = uVar3, (ix86_isa_flags & 0x10000) != 0 ||
           ((ix86_isa_flags & 2) != 0)))) &&
         (iVar8 = ix86_binary_operator_ok(0x46,0x3c,&recog_data), iVar8 != 0)) {
        return 0x30b;
      }
    }
    break;
  case 0x47:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) &&
          ((_register_operand = uVar3, (ix86_isa_flags & 0x10000) != 0 ||
           ((ix86_isa_flags & 2) != 0)))) &&
         (iVar8 = ix86_binary_operator_ok(0x47,0x3c,&recog_data), iVar8 != 0)) {
        return 0x30a;
      }
    }
    break;
  case 0x51:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x51,0x3c,&recog_data), iVar8 != 0)) {
        return 0x317;
      }
    }
    break;
  case 0x53:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = register_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if ((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
        return 0x31a;
      }
    }
    break;
  case 100:
    psVar2 = *(short **)(puVar1 + 4);
    if (((*(char *)(psVar2 + 1) == 'A') && (*psVar2 == 0x44)) &&
       (psVar6 = *(short **)(psVar2 + 4), *(char *)(psVar6 + 1) == 'A')) {
      if (*psVar6 == 0x31) {
        psVar4 = *(short **)(psVar6 + 4);
        if (*(char *)(psVar4 + 1) == 'A') {
          if (*psVar4 == 0x31) {
            psVar5 = *(short **)(psVar4 + 4);
            if ((*(char *)(psVar5 + 1) == 'A') && (*psVar5 == 99)) {
              psVar5 = *(short **)(psVar5 + 4);
              iVar8 = nonimmediate_operand(psVar5,0x3c);
              if ((iVar8 != 0) &&
                 ((psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = psVar5,
                  *(char *)(psVar4 + 1) == 'A' && (*psVar4 == 99)))) {
                uVar3 = *(undefined8 *)(psVar4 + 4);
                iVar8 = nonimmediate_operand(uVar3,0x3c);
                if ((iVar8 != 0) &&
                   (((((((psVar6 = *(short **)(psVar6 + 8), _register_operand = uVar3,
                         *(char *)(psVar6 + 1) == 'A' && (*psVar6 == 0x21)) &&
                        (**(int **)(psVar6 + 4) == 4)) &&
                       ((*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator &&
                        (*(long *)(*(long *)(psVar6 + 4) + 0x10) == _bt_comparison_operator)))) &&
                      (*(long *)(*(long *)(psVar6 + 4) + 0x18) == _bt_comparison_operator)) &&
                     (((*(long *)(*(long *)(psVar6 + 4) + 0x20) == _bt_comparison_operator &&
                       (*(long *)(psVar2 + 8) == _bt_comparison_operator)) &&
                      (((ix86_isa_flags & 0x10000) != 0 || ((ix86_isa_flags & 2) != 0)))))) &&
                    (iVar8 = ix86_binary_operator_ok(0x31,0x3c,&recog_data), iVar8 != 0)))) {
                  return 0x33b;
                }
              }
            }
          }
          else if (((*psVar4 == 0x34) &&
                   (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'A')) &&
                  (*psVar5 == 0x62)) {
            psVar5 = *(short **)(psVar5 + 4);
            iVar8 = nonimmediate_operand(psVar5,0x3c);
            if (((iVar8 != 0) &&
                (psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = psVar5,
                *(char *)(psVar4 + 1) == 'A')) && (*psVar4 == 0x62)) {
              uVar3 = *(undefined8 *)(psVar4 + 4);
              iVar8 = nonimmediate_operand(uVar3,0x3c);
              if (((((iVar8 != 0) &&
                    (psVar6 = *(short **)(psVar6 + 8), _register_operand = uVar3,
                    *(char *)(psVar6 + 1) == 'A')) &&
                   ((*psVar6 == 0x21 &&
                    (((**(int **)(psVar6 + 4) == 4 &&
                      (**(short **)(*(long *)(psVar6 + 4) + 8) == 0x1e)) &&
                     (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 8) + 4) == 0x8000)))))) &&
                  ((**(short **)(*(long *)(psVar6 + 4) + 0x10) == 0x1e &&
                   (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 0x10) + 4) == 0x8000)))) &&
                 ((**(short **)(*(long *)(psVar6 + 4) + 0x18) == 0x1e &&
                  (((*(long *)(*(short **)(*(long *)(psVar6 + 4) + 0x18) + 4) == 0x8000 &&
                    (**(short **)(*(long *)(psVar6 + 4) + 0x20) == 0x1e)) &&
                   ((*(long *)(*(short **)(*(long *)(psVar6 + 4) + 0x20) + 4) == 0x8000 &&
                    (((*(long *)(psVar2 + 8) == _avx_vpermilp_v4sf_operand &&
                      ((ix86_isa_flags & 1) != 0)) &&
                     (iVar8 = ix86_binary_operator_ok(0x34,0x3c,&recog_data), iVar8 != 0)))))))))) {
                return 0x308;
              }
            }
          }
        }
      }
      else if ((*psVar6 == 0x34) && (psVar4 = *(short **)(psVar6 + 4), *(char *)(psVar4 + 1) == 'A')
              ) {
        if (*psVar4 == 0x62) {
          psVar4 = *(short **)(psVar4 + 4);
          iVar8 = nonimmediate_operand(psVar4,0x3c);
          if (((iVar8 != 0) &&
              (psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = psVar4,
              *(char *)(psVar6 + 1) == 'A')) && (*psVar6 == 0x62)) {
            uVar3 = *(undefined8 *)(psVar6 + 4);
            iVar8 = nonimmediate_operand(uVar3,0x3c);
            if ((((iVar8 != 0) &&
                 (_register_operand = uVar3, *(long *)(psVar2 + 8) == _avx_vpermilp_v4sf_operand))
                && ((ix86_isa_flags & 0x800) != 0)) &&
               (iVar8 = ix86_binary_operator_ok(0x34,0x3c,&recog_data), iVar8 != 0)) {
              return 0x305;
            }
          }
        }
        else if (*psVar4 == 99) {
          psVar4 = *(short **)(psVar4 + 4);
          iVar8 = nonimmediate_operand(psVar4,0x3c);
          if (((iVar8 != 0) &&
              (psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = psVar4,
              *(char *)(psVar6 + 1) == 'A')) && (*psVar6 == 99)) {
            uVar3 = *(undefined8 *)(psVar6 + 4);
            iVar8 = nonimmediate_operand(uVar3,0x3c);
            if (((iVar8 != 0) &&
                (_register_operand = uVar3, *(long *)(psVar2 + 8) == _avx_vpermilp_v4sf_operand)) &&
               ((((ix86_isa_flags & 0x10000) != 0 || ((ix86_isa_flags & 2) != 0)) &&
                (iVar8 = ix86_binary_operator_ok(0x34,0x3c,&recog_data), iVar8 != 0)))) {
              return 0x306;
            }
          }
        }
      }
    }
    break;
  case 0x7b:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == '<') && (*psVar2 == 0x7e)) {
      uVar3 = *(undefined8 *)(psVar2 + 4);
      iVar8 = nonimmediate_operand(uVar3,0xf);
      if (iVar8 != 0) {
        psVar2 = *(short **)(puVar1 + 8);
        _register_operand = uVar3;
        iVar8 = register_operand(psVar2,0x3c);
        if (iVar8 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 0xc);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar8 = const_pow2_1_to_8_operand(uVar3,0x10);
          if ((iVar8 != 0) &&
             (((ix86_isa_flags & 0x10000) != 0 ||
              (_nonimmediate_operand = uVar3, (ix86_isa_flags & 2) != 0)))) {
            _nonimmediate_operand = uVar3;
            return 0x331;
          }
        }
      }
    }
    break;
  case 0x7c:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == '<') {
      iVar8 = nonimmediate_operand(psVar2,0x3c);
      if (((iVar8 != 0) &&
          (psVar6 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2, *psVar6 == 0xf)) &&
         (**(int **)(psVar6 + 4) == 4)) {
        uVar3 = *(undefined8 *)(*(long *)(psVar6 + 4) + 8);
        iVar8 = const_0_to_3_operand(uVar3,0);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x10);
          _register_operand = uVar3;
          iVar8 = const_0_to_3_operand(uVar7,0);
          if (iVar8 != 0) {
            uVar3 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x18);
            _nonimmediate_operand = uVar7;
            iVar8 = const_0_to_3_operand(uVar3,0);
            if (iVar8 != 0) {
              uVar7 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x20);
              _memory_operand = uVar3;
              iVar8 = const_0_to_3_operand(uVar7,0);
              if ((iVar8 != 0) &&
                 (((ix86_isa_flags & 0x10000) != 0 ||
                  (_push_operand = uVar7, (ix86_isa_flags & 2) != 0)))) {
                _push_operand = uVar7;
                return 0x333;
              }
            }
          }
        }
      }
    }
    else if ((*(char *)(psVar2 + 1) == '@') && (*psVar2 == 0x7d)) {
      psVar6 = *(short **)(psVar2 + 4);
      iVar8 = register_operand(psVar6,0x3c);
      if (iVar8 != 0) {
        uVar3 = *(undefined8 *)(psVar2 + 8);
        _GLOBAL_OFFSET_TABLE_ = psVar6;
        iVar8 = nonimmediate_operand(uVar3,0x3c);
        if ((((iVar8 != 0) &&
             (psVar2 = *(short **)(puVar1 + 8), _register_operand = uVar3, *psVar2 == 0xf)) &&
            (**(int **)(psVar2 + 4) == 4)) &&
           ((psVar6 = *(short **)(*(long *)(psVar2 + 4) + 8), *psVar6 == 0x1e &&
            ((long)(int)*(undefined8 *)(psVar6 + 4) == *(long *)(psVar6 + 4))))) {
          if ((int)*(undefined8 *)(psVar6 + 4) == 0) {
            if (((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_compare_mode) &&
                (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _bt_comparison_operator)) &&
               ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _ix86_cc_mode &&
                ((ix86_isa_flags & 0x800) != 0)))) {
              return 0x32e;
            }
          }
          else if (((((int)*(undefined8 *)(psVar6 + 4) == 2) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _index_register_operand)) &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _swap_condition)) &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand &&
                   ((ix86_isa_flags & 0x800) != 0)))) {
            return 0x32d;
          }
        }
      }
    }
    break;
  case 0x7d:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == '9') && (*psVar2 == 0x88)) {
      psVar2 = *(short **)(psVar2 + 4);
      iVar8 = register_operand(psVar2,0x3d);
      if ((iVar8 != 0) &&
         ((psVar6 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2,
          *(char *)(psVar6 + 1) == '9' && (*psVar6 == 0x88)))) {
        uVar3 = *(undefined8 *)(psVar6 + 4);
        iVar8 = nonimmediate_operand(uVar3,0x3d);
        if ((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) {
          return 0x329;
        }
      }
    }
    break;
  case 0x7e:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == '\x0f') && (*psVar2 == 100)) {
      psVar2 = *(short **)(psVar2 + 4);
      iVar8 = register_operand(psVar2,0x10);
      if ((iVar8 != 0) &&
         (((ix86_isa_flags & 0x10000) != 0 ||
          (_GLOBAL_OFFSET_TABLE_ = psVar2, (ix86_isa_flags & 2) != 0)))) {
        _GLOBAL_OFFSET_TABLE_ = psVar2;
        return 0x335;
      }
    }
    break;
  case 0x7f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x7f,0x3c,&recog_data), iVar8 != 0)) {
        return 0x300;
      }
    }
    break;
  case 0x80:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x80,0x3c,&recog_data), iVar8 != 0)) {
        return 0x301;
      }
    }
    break;
  case 0x81:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x81,0x3c,&recog_data), iVar8 != 0)) {
        return 0x302;
      }
    }
    break;
  case 0x87:
    psVar2 = *(short **)(puVar1 + 4);
    iVar8 = nonimmediate_operand(psVar2,0x3c);
    if (iVar8 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar8 = nonimmediate_operand(uVar3,0x3c);
      if (((iVar8 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x87,0x3c,&recog_data), iVar8 != 0)) {
        return 0x303;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_9(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  short *psVar4;
  short *psVar5;
  ushort *puVar6;
  rtx prVar7;
  int iVar8;
  rtx x2;
  rtx *operands;
  rtx x1;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  
  puVar2 = *(undefined2 **)&(x0->u).field_0x8;
  switch(*puVar2) {
  case 0x12:
    if ((**(int **)(puVar2 + 4) == 1) && (*(int *)(puVar2 + 8) == 0x28)) {
      puVar6 = *(ushort **)(*(long *)(puVar2 + 4) + 8);
      iVar8 = nonimmediate_operand(puVar6,0x50);
      if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = puVar6, (ix86_isa_flags & 0x20000) != 0)) {
        return 0x47b;
      }
    }
    break;
  case 0x31:
    puVar6 = *(ushort **)(puVar2 + 4);
    if (*(char *)(puVar6 + 1) == '=') {
      if (*puVar6 == 0x34) {
        psVar5 = *(short **)(puVar6 + 4);
        if (((*(char *)(psVar5 + 1) == '=') && (*psVar5 == 0x62)) &&
           ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '9' && (*psVar5 == 0x7c))))
        {
          puVar3 = *(ushort **)(psVar5 + 4);
          iVar8 = nonimmediate_operand(puVar3,0x3c);
          if ((((((iVar8 != 0) &&
                 (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = puVar3, *psVar5 == 0xf))
                && (**(int **)(psVar5 + 4) == 2)) &&
               ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
                (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator)))) &&
              (psVar5 = *(short **)(puVar6 + 8), *(char *)(psVar5 + 1) == '=')) &&
             (((*psVar5 == 0x62 && (psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '9'))
              && (*psVar5 == 0x7c)))) {
            prVar7 = *(rtx *)(psVar5 + 4);
            iVar8 = nonimmediate_operand(prVar7,0x3c);
            if ((((((iVar8 != 0) &&
                   (psVar5 = *(short **)(psVar5 + 8), _register_operand = prVar7, *psVar5 == 0xf))
                  && (**(int **)(psVar5 + 4) == 2)) &&
                 (((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
                   (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator)) &&
                  ((psVar5 = *(short **)(puVar2 + 8), *(char *)(psVar5 + 1) == '=' &&
                   ((*psVar5 == 0x34 &&
                    (psVar4 = *(short **)(psVar5 + 4), *(char *)(psVar4 + 1) == '=')))))))) &&
                (*psVar4 == 0x62)) &&
               ((((((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '9' &&
                    (*psVar4 == 0x7c)) &&
                   (iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar8 != 0)) &&
                  ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                   (**(int **)(psVar4 + 4) == 2)))) &&
                 ((((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                    ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _swap_condition &&
                     (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '=')))) &&
                   (*psVar5 == 0x62)) &&
                  ((((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '9' &&
                     (*psVar5 == 0x7c)) &&
                    (iVar8 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar8 != 0)
                    ) && ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                          (**(int **)(psVar5 + 4) == 2)))))))) &&
                (((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                  ((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _swap_condition &&
                   ((ix86_isa_flags & 0x800) != 0)))) &&
                 (iVar8 = ix86_binary_operator_ok(0x34,0x3c,&recog_data), iVar8 != 0)))))) {
              return 0x307;
            }
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(puVar6,0x3d);
        if (iVar8 != 0) {
          prVar7 = *(rtx *)(puVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = puVar6;
          iVar8 = nonimmediate_operand(prVar7,0x3d);
          if (((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) &&
             (iVar8 = ix86_binary_operator_ok(0x31,0x3d,&recog_data), iVar8 != 0)) {
            return 0x2f8;
          }
        }
      }
    }
    break;
  case 0x32:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = nonimmediate_operand(puVar6,0x3d);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonimmediate_operand(prVar7,0x3d);
      if (((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x32,0x3d,&recog_data), iVar8 != 0)) {
        return 0x2f9;
      }
    }
    break;
  case 0x3d:
    puVar6 = *(ushort **)(puVar2 + 4);
    if (*(char *)(puVar6 + 1) == '=') {
      if (*puVar6 == 0x40) {
        puVar6 = *(ushort **)(puVar6 + 4);
        iVar8 = register_operand(puVar6,0x3d);
        if (iVar8 != 0) {
          prVar7 = *(rtx *)(puVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = puVar6;
          iVar8 = nonimmediate_operand(prVar7,0x3d);
          if ((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) {
            return 0x31e;
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(puVar6,0x3d);
        if (iVar8 != 0) {
          prVar7 = *(rtx *)(puVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = puVar6;
          iVar8 = nonimmediate_operand(prVar7,0x3d);
          if (((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) &&
             (iVar8 = ix86_binary_operator_ok(0x3d,0x3d,&recog_data), iVar8 != 0)) {
            return 0x325;
          }
        }
      }
    }
    break;
  case 0x3e:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = nonimmediate_operand(puVar6,0x3d);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonimmediate_operand(prVar7,0x3d);
      if (((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x3e,0x3d,&recog_data), iVar8 != 0)) {
        return 0x326;
      }
    }
    break;
  case 0x3f:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = nonimmediate_operand(puVar6,0x3d);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonimmediate_operand(prVar7,0x3d);
      if (((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) &&
         (iVar8 = ix86_binary_operator_ok(0x3f,0x3d,&recog_data), iVar8 != 0)) {
        return 0x327;
      }
    }
    break;
  case 0x41:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = register_operand(puVar6,0x3d);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonmemory_operand(prVar7,0x10);
      if ((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) {
        return 0x314;
      }
    }
    break;
  case 0x43:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = register_operand(puVar6,0x3d);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonmemory_operand(prVar7,0x10);
      if ((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) {
        return 0x30f;
      }
    }
    break;
  case 0x44:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = register_operand(puVar6,0x3d);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonmemory_operand(prVar7,0x10);
      if ((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) {
        return 0x311;
      }
    }
    break;
  case 0x51:
    puVar6 = *(ushort **)(puVar2 + 4);
    if (*(char *)(puVar6 + 1) == '=') {
      iVar8 = nonimmediate_operand(puVar6,0x3d);
      if (iVar8 != 0) {
        prVar7 = *(rtx *)(puVar2 + 8);
        _GLOBAL_OFFSET_TABLE_ = puVar6;
        iVar8 = nonimmediate_operand(prVar7,0x3d);
        if (((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) &&
           (iVar8 = ix86_binary_operator_ok(0x51,0x3d,&recog_data), iVar8 != 0)) {
          return 0x318;
        }
      }
    }
    else if ((*(char *)(puVar6 + 1) == 'N') &&
            (iVar8 = nonimmediate_operand(puVar6,0x4e), iVar8 != 0)) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonimmediate_operand(prVar7,0x4e);
      if ((iVar8 != 0) &&
         ((_register_operand = prVar7, (ix86_isa_flags & 1) != 0 &&
          (iVar8 = ix86_binary_operator_ok(0x51,0x4e,&recog_data), iVar8 != 0)))) {
        return 0x2e8;
      }
    }
    break;
  case 0x52:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = register_operand(puVar6,0x4e);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonimmediate_operand(prVar7,0x4e);
      if ((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 1) != 0)) {
        return 0x2ea;
      }
    }
    break;
  case 0x53:
    puVar6 = *(ushort **)(puVar2 + 4);
    if (*(char *)(puVar6 + 1) == '=') {
      iVar8 = register_operand(puVar6,0x3d);
      if (iVar8 != 0) {
        prVar7 = *(rtx *)(puVar2 + 8);
        _GLOBAL_OFFSET_TABLE_ = puVar6;
        iVar8 = nonimmediate_operand(prVar7,0x3d);
        if ((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 0x800) != 0)) {
          return 0x31b;
        }
      }
    }
    else if ((*(char *)(puVar6 + 1) == 'N') && (iVar8 = register_operand(puVar6,0x4e), iVar8 != 0))
    {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = nonimmediate_operand(prVar7,0x4e);
      if ((iVar8 != 0) && (_register_operand = prVar7, (ix86_isa_flags & 1) != 0)) {
        return 0x2e9;
      }
    }
    break;
  case 0x62:
    psVar5 = *(short **)(puVar2 + 4);
    if (((*(char *)(psVar5 + 1) == '9') && (*psVar5 == 0x88)) &&
       ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '=' && (*psVar5 == 0x68)))) {
      puVar6 = *(ushort **)(psVar5 + 4);
      iVar8 = nonimmediate_operand(puVar6,0x4e);
      if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = puVar6, (ix86_isa_flags & 2) != 0)) {
        return 0x2ec;
      }
    }
    break;
  case 0x68:
    puVar6 = *(ushort **)(puVar2 + 4);
    if (*(char *)(puVar6 + 1) == 'N') {
      iVar8 = nonimmediate_operand(puVar6,0x4e);
      if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = puVar6, (ix86_isa_flags & 1) != 0)) {
        return 0x2eb;
      }
    }
    else if (((*(char *)(puVar6 + 1) == 'P') &&
             (iVar8 = nonimmediate_operand(puVar6,0x50), iVar8 != 0)) &&
            (_GLOBAL_OFFSET_TABLE_ = puVar6, (ix86_isa_flags & 0x20000) != 0)) {
      return 0x47c;
    }
    break;
  case 0x7c:
    puVar6 = *(ushort **)(puVar2 + 4);
    if (*(char *)(puVar6 + 1) == '=') {
      iVar8 = nonimmediate_operand(puVar6,0x3d);
      if ((((iVar8 != 0) &&
           (psVar5 = *(short **)(puVar2 + 8), _GLOBAL_OFFSET_TABLE_ = puVar6, *psVar5 == 0xf)) &&
          (**(int **)(psVar5 + 4) == 2)) &&
         (((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
           (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _q_regs_operand)) &&
          ((ix86_isa_flags & 2) != 0)))) {
        return 0x334;
      }
    }
    else if (*(char *)(puVar6 + 1) == 'A') {
      uVar1 = *puVar6;
      if (uVar1 == 0x7d) {
        puVar3 = *(ushort **)(puVar6 + 4);
        iVar8 = register_operand(puVar3,0x3d);
        if (iVar8 != 0) {
          prVar7 = *(rtx *)(puVar6 + 8);
          _GLOBAL_OFFSET_TABLE_ = puVar3;
          iVar8 = nonimmediate_operand(prVar7,0x3d);
          if (((iVar8 != 0) &&
              (psVar5 = *(short **)(puVar2 + 8), _register_operand = prVar7, *psVar5 == 0xf)) &&
             ((**(int **)(psVar5 + 4) == 2 &&
              ((psVar4 = *(short **)(*(long *)(psVar5 + 4) + 8), *psVar4 == 0x1e &&
               ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4))))))) {
            if ((int)*(undefined8 *)(psVar4 + 4) == 0) {
              if ((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator) &&
                 ((ix86_isa_flags & 0x800) != 0)) {
                return 0x330;
              }
            }
            else if ((((int)*(undefined8 *)(psVar4 + 4) == 1) &&
                     (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _swap_condition)) &&
                    ((ix86_isa_flags & 0x800) != 0)) {
              return 0x32f;
            }
          }
        }
      }
      else if (uVar1 < 0x7e) {
        if (uVar1 == 0x12) {
          if ((**(int **)(puVar6 + 4) == 1) && (*(int *)(puVar6 + 8) == 0x28)) {
            puVar6 = *(ushort **)(*(long *)(puVar6 + 4) + 8);
            iVar8 = nonimmediate_operand(puVar6,0x4f);
            if ((((iVar8 != 0) &&
                 ((psVar5 = *(short **)(puVar2 + 8), _GLOBAL_OFFSET_TABLE_ = puVar6, *psVar5 == 0xf
                  && (**(int **)(psVar5 + 4) == 2)))) &&
                (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
               ((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _bt_comparison_operator &&
                ((ix86_isa_flags & 0x10000) != 0)))) {
              return 0x46a;
            }
          }
        }
        else if (uVar1 == 0x68) {
          puVar6 = *(ushort **)(puVar6 + 4);
          iVar8 = nonimmediate_operand(puVar6,0x4f);
          if (((((iVar8 != 0) &&
                (psVar5 = *(short **)(puVar2 + 8), _GLOBAL_OFFSET_TABLE_ = puVar6, *psVar5 == 0xf))
               && (**(int **)(psVar5 + 4) == 2)) &&
              ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _bt_comparison_operator)))) &&
             ((ix86_isa_flags & 0x10000) != 0)) {
            return 0x46b;
          }
        }
      }
    }
    break;
  case 0x7d:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = nonimmediate_operand(puVar6,0x10);
    if (iVar8 != 0) {
      prVar7 = *(rtx *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = puVar6;
      iVar8 = vector_move_operand(prVar7,0x10);
      x2 = prVar7;
      if (iVar8 != 0) {
        if (((ix86_isa_flags & 0x800) != 0) && ((ix86_isa_flags & 0x10000) == 0)) {
          _register_operand = prVar7;
          return 0x337;
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = prVar7;
          return 0x5cd;
        }
        if ((ix86_isa_flags & 0x80000) != 0) {
          _register_operand = prVar7;
          return 0x5ce;
        }
        x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
        _register_operand = prVar7;
      }
      iVar8 = reg_or_0_operand(x2,0x10);
      if (iVar8 != 0) {
        _register_operand = x2;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x5cf;
        }
        if ((ix86_isa_flags & 0x10000) != 0) {
          _register_operand = x2;
          return 0x5d0;
        }
      }
    }
    break;
  case 0x7e:
    puVar6 = *(ushort **)(puVar2 + 4);
    iVar8 = register_operand(puVar6,0x10);
    if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = puVar6, (ix86_isa_flags & 0x800) != 0)) {
      return 0x336;
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_10(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  rtx prVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  rtx x1;
  rtx x2;
  rtx *operands;
  rtx x3;
  rtx x4;
  rtx x5;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  uVar1 = *(ushort *)x1;
  if (uVar1 == 0x12) {
    if (**(int **)&x1->u == 1) {
      iVar6 = *(int *)&(x1->u).field_0x8;
      if (iVar6 == 0x2a) {
        prVar2 = *(rtx *)(*(long *)&x1->u + 8);
        iVar6 = nonimmediate_operand(prVar2,0x4e);
        if ((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 1) != 0)) {
          return 0x2e3;
        }
      }
      else if (iVar6 == 0x31) {
        prVar2 = *(rtx *)(*(long *)&x1->u + 8);
        iVar6 = nonimmediate_operand(prVar2,0x4e);
        if ((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 1) != 0)) {
          return 0x2e0;
        }
      }
    }
    else if (**(int **)&x1->u == 2) {
      iVar6 = *(int *)&(x1->u).field_0x8;
      if (iVar6 == 0x2b) {
        prVar2 = *(rtx *)(*(long *)&x1->u + 8);
        iVar6 = register_operand(prVar2,0x4e);
        if (iVar6 != 0) {
          prVar3 = *(rtx *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar6 = nonimmediate_operand(prVar3,0x4e);
          if ((iVar6 != 0) && (_register_operand = prVar3, (ix86_isa_flags & 1) != 0)) {
            return 0x2e4;
          }
        }
      }
      else if (iVar6 < 0x2c) {
        if (iVar6 == 0x28) {
          prVar2 = *(rtx *)(*(long *)&x1->u + 8);
          iVar6 = register_operand(prVar2,0x4e);
          if (iVar6 != 0) {
            prVar3 = *(rtx *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar6 = nonimmediate_operand(prVar3,0x4e);
            if ((iVar6 != 0) && (_register_operand = prVar3, (ix86_isa_flags & 1) != 0)) {
              return 0x2e1;
            }
          }
        }
        else if (iVar6 == 0x29) {
          prVar2 = *(rtx *)(*(long *)&x1->u + 8);
          iVar6 = register_operand(prVar2,0x4e);
          if (iVar6 != 0) {
            prVar3 = *(rtx *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar6 = nonimmediate_operand(prVar3,0x4e);
            if ((iVar6 != 0) && (_register_operand = prVar3, (ix86_isa_flags & 1) != 0)) {
              return 0x2e2;
            }
          }
        }
      }
    }
  }
  else if (((0x11 < uVar1) && (uVar1 < 0x7f)) && (0x30 < uVar1)) {
    switch(uVar1) {
    case 0x31:
      prVar2 = *(rtx *)&x1->u;
      iVar6 = nonimmediate_operand(prVar2,0x4e);
      if (iVar6 != 0) {
        prVar3 = *(rtx *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar6 = nonimmediate_operand(prVar3,0x4e);
        if (((iVar6 != 0) && (_register_operand = prVar3, (ix86_isa_flags & 1) != 0)) &&
           (iVar6 = ix86_binary_operator_ok(0x31,0x4e,&recog_data), iVar6 != 0)) {
          return 0x2d9;
        }
      }
      break;
    case 0x32:
      prVar2 = *(rtx *)&x1->u;
      iVar6 = nonimmediate_operand(prVar2,0x4e);
      if (iVar6 != 0) {
        prVar3 = *(rtx *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar6 = nonimmediate_operand(prVar3,0x4e);
        if (((iVar6 != 0) && (_register_operand = prVar3, (ix86_isa_flags & 1) != 0)) &&
           ((*recog_data != 0x2b || (*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b)))) {
          return 0x2da;
        }
      }
      break;
    case 0x34:
      prVar2 = *(rtx *)&x1->u;
      iVar6 = nonimmediate_operand(prVar2,0x4e);
      if (iVar6 != 0) {
        prVar3 = *(rtx *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar6 = nonimmediate_operand(prVar3,0x4e);
        if (((iVar6 != 0) && (_register_operand = prVar3, (ix86_isa_flags & 1) != 0)) &&
           (iVar6 = ix86_binary_operator_ok(0x34,0x4e,&recog_data), iVar6 != 0)) {
          return 0x2db;
        }
      }
      break;
    case 0x46:
      x2 = *(rtx *)&x1->u;
      if (x2->field_0x2 == 'N') {
        iVar6 = nonimmediate_operand(x2,0x4e);
        if (iVar6 != 0) {
          prVar2 = *(rtx *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x2;
          iVar6 = nonimmediate_operand(prVar2,0x4e);
          if (iVar6 == 0) {
            x2 = *(rtx *)&x1->u;
          }
          else {
            _register_operand = prVar2;
            if ((((ix86_isa_flags & 1) != 0) && (flag_finite_math_only != 0)) &&
               (iVar6 = ix86_binary_operator_ok(0x46,0x4e,&recog_data), iVar6 != 0)) {
              return 0x2dd;
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&x1->u;
          }
        }
        iVar6 = register_operand(x2,0x4e);
        if (iVar6 != 0) {
          _GLOBAL_OFFSET_TABLE_ = x2;
          prVar2 = *(rtx *)&(x1->u).field_0x8;
          iVar6 = nonimmediate_operand(prVar2,0x4e);
          if ((iVar6 != 0) && (_register_operand = prVar2, (ix86_isa_flags & 1) != 0)) {
            return 0x2df;
          }
        }
      }
      break;
    case 0x47:
      x2 = *(rtx *)&x1->u;
      if (x2->field_0x2 == 'N') {
        iVar6 = nonimmediate_operand(x2,0x4e);
        if (iVar6 != 0) {
          prVar2 = *(rtx *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x2;
          iVar6 = nonimmediate_operand(prVar2,0x4e);
          if (iVar6 == 0) {
            x2 = *(rtx *)&x1->u;
          }
          else {
            _register_operand = prVar2;
            if ((((ix86_isa_flags & 1) != 0) && (flag_finite_math_only != 0)) &&
               (iVar6 = ix86_binary_operator_ok(0x47,0x4e,&recog_data), iVar6 != 0)) {
              return 0x2dc;
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&x1->u;
          }
        }
        iVar6 = register_operand(x2,0x4e);
        if (iVar6 != 0) {
          _GLOBAL_OFFSET_TABLE_ = x2;
          prVar2 = *(rtx *)&(x1->u).field_0x8;
          iVar6 = nonimmediate_operand(prVar2,0x4e);
          if ((iVar6 != 0) && (_register_operand = prVar2, (ix86_isa_flags & 1) != 0)) {
            return 0x2de;
          }
        }
      }
      break;
    case 0x67:
      prVar2 = *(rtx *)&x1->u;
      if (prVar2->field_0x2 == '=') {
        if (*(short *)prVar2 == 0x62) {
          psVar5 = *(short **)&prVar2->u;
          if ((*(char *)(psVar5 + 1) == '9') && (*psVar5 == 100)) {
            prVar2 = *(rtx *)(psVar5 + 4);
            iVar6 = nonimmediate_operand(prVar2,0x3d);
            if ((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 2) != 0)) {
              return 0x2ed;
            }
          }
        }
        else {
          iVar6 = nonimmediate_operand(prVar2,0x3d);
          if ((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 1) != 0)) {
            return 0x2ee;
          }
        }
      }
      break;
    case 0x7b:
      psVar5 = *(short **)&x1->u;
      if ((*(char *)(psVar5 + 1) == 'N') && (*psVar5 == 0x31)) {
        prVar2 = *(rtx *)(psVar5 + 4);
        iVar6 = register_operand(prVar2,0x4e);
        if (iVar6 != 0) {
          prVar3 = *(rtx *)(psVar5 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar6 = nonimmediate_operand(prVar3,0x4e);
          if ((((iVar6 != 0) &&
               (psVar5 = *(short **)&(x1->u).field_0x8, _register_operand = prVar3,
               *(char *)(psVar5 + 1) == 'N')) && (*psVar5 == 0x32)) &&
             (((iVar6 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar6 != 0
               && (iVar6 = rtx_equal_p(*(undefined8 *)(psVar5 + 8),_register_operand), iVar6 != 0))
              && ((*(long *)&(x1->u).field_0x10 == _bt_comparison_operator &&
                  ((ix86_isa_flags & 2) != 0)))))) {
            return 0x2e7;
          }
        }
      }
      break;
    case 0x7c:
      prVar2 = *(rtx *)&x1->u;
      iVar6 = nonimmediate_operand(prVar2,0x4e);
      if (((((iVar6 != 0) &&
            (psVar5 = *(short **)&(x1->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar2, *psVar5 == 0xf)
            ) && (**(int **)(psVar5 + 4) == 2)) &&
          ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
           (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _q_regs_operand)))) &&
         ((ix86_isa_flags & 2) != 0)) {
        return 0x2ef;
      }
      break;
    case 0x7d:
      prVar2 = *(rtx *)&x1->u;
      if (prVar2->field_0x2 == '&') {
        switch(*(short *)prVar2) {
        case 0x25:
        case 0x27:
        case 0x2b:
          iVar6 = nonimmediate_operand(prVar2,0x26);
          if (iVar6 != 0) {
            prVar3 = *(rtx *)&(x1->u).field_0x8;
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar6 = vector_move_operand(prVar3,0x26);
            x2 = prVar3;
            if (iVar6 != 0) {
              if (((ix86_isa_flags & 0x800) != 0) && ((ix86_isa_flags & 0x10000) == 0)) {
                _register_operand = prVar3;
                return 0x2f1;
              }
              if ((ix86_isa_flags & 0x20) != 0) {
                _register_operand = prVar3;
                return 0x4ae;
              }
              if ((ix86_isa_flags & 0x80000) != 0) {
                _register_operand = prVar3;
                return 0x4af;
              }
              x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
              _register_operand = prVar3;
            }
            iVar6 = reg_or_0_operand(x2,0x26);
            if ((iVar6 != 0) && (_register_operand = x2, (ix86_isa_flags & 0x10000) != 0)) {
              _register_operand = x2;
              return 0x4b0;
            }
          }
          break;
        case 0x31:
          psVar5 = *(short **)&prVar2->u;
          if ((*(char *)(psVar5 + 1) == '&') && (*psVar5 == 0x7c)) {
            prVar3 = *(rtx *)(psVar5 + 4);
            iVar6 = register_operand(prVar3,0x4e);
            if ((((iVar6 != 0) &&
                 ((((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3,
                    *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1)) &&
                   (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                  ((psVar5 = *(short **)&(prVar2->u).field_0x8, *(char *)(psVar5 + 1) == '&' &&
                   (*psVar5 == 0x7c)))))) &&
                ((iVar6 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar3), iVar6 != 0 &&
                 (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                   (**(int **)(psVar5 + 4) == 1)) &&
                  ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar5 = *(short **)&(x1->u).field_0x8, *(char *)(psVar5 + 1) == '&' &&
                     (*psVar5 == 0x31)) &&
                    (psVar4 = *(short **)(psVar5 + 4), *(char *)(psVar4 + 1) == '&')))))))))) &&
               (*psVar4 == 0x7c)) {
              prVar2 = *(rtx *)(psVar4 + 4);
              iVar6 = nonimmediate_operand(prVar2,0x4e);
              if ((((iVar6 != 0) &&
                   (psVar4 = *(short **)(psVar4 + 8), _register_operand = prVar2, *psVar4 == 0xf))
                  && ((((**(int **)(psVar4 + 4) == 1 &&
                        ((*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand &&
                         (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&')))) &&
                       (*psVar5 == 0x7c)) &&
                      (((iVar6 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar2), iVar6 != 0 &&
                        (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                       (**(int **)(psVar5 + 4) == 1)))))) &&
                 ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                  ((ix86_isa_flags & 1) != 0)))) {
                return 0x2e5;
              }
            }
          }
          break;
        case 0x32:
          psVar5 = *(short **)&prVar2->u;
          if ((*(char *)(psVar5 + 1) == '&') && (*psVar5 == 0x7c)) {
            prVar3 = *(rtx *)(psVar5 + 4);
            iVar6 = register_operand(prVar3,0x4e);
            if ((((iVar6 != 0) &&
                 ((((((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3,
                      *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1)) &&
                     (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                    ((psVar5 = *(short **)&(prVar2->u).field_0x8, *(char *)(psVar5 + 1) == '&' &&
                     (*psVar5 == 0x7c)))) &&
                   (iVar6 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar3), iVar6 != 0)) &&
                  ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                   (**(int **)(psVar5 + 4) == 1)))))) &&
                ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                 (((psVar5 = *(short **)&(x1->u).field_0x8, *(char *)(psVar5 + 1) == '&' &&
                   (*psVar5 == 0x32)) &&
                  (psVar4 = *(short **)(psVar5 + 4), *(char *)(psVar4 + 1) == '&')))))) &&
               (*psVar4 == 0x7c)) {
              prVar2 = *(rtx *)(psVar4 + 4);
              iVar6 = nonimmediate_operand(prVar2,0x4e);
              if (((((iVar6 != 0) &&
                    (psVar4 = *(short **)(psVar4 + 8), _register_operand = prVar2, *psVar4 == 0xf))
                   && ((**(int **)(psVar4 + 4) == 1 &&
                       ((*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand &&
                        (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&')))))) &&
                  (*psVar5 == 0x7c)) &&
                 ((((iVar6 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar2), iVar6 != 0 &&
                    (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                   (**(int **)(psVar5 + 4) == 1)) &&
                  ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                   ((ix86_isa_flags & 2) != 0)))))) {
                return 0x2e6;
              }
            }
          }
        }
      }
      break;
    case 0x7e:
      prVar2 = *(rtx *)&x1->u;
      iVar6 = register_operand(prVar2,0x26);
      if ((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 0x800) != 0)) {
        return 0x2f0;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_11(rtx x0,rtx insn,int *pnum_clobbers)

{
  undefined2 *puVar1;
  short *psVar2;
  undefined8 uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  
  puVar1 = *(undefined2 **)&(x0->u).field_0x8;
  switch(*puVar1) {
  case 0x12:
    if ((**(int **)(puVar1 + 4) == 1) && (*(int *)(puVar1 + 8) == 0x2f)) {
      psVar2 = *(short **)(*(long *)(puVar1 + 4) + 8);
      iVar7 = memory_operand(psVar2,0x3f);
      if (iVar7 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          return 0x36b;
        }
        _GLOBAL_OFFSET_TABLE_ = psVar2;
        if ((ix86_isa_flags & 0x40000) != 0) {
          return 0x36c;
        }
      }
    }
    break;
  case 0x31:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x31,0x3f,&recog_data), iVar7 != 0)) {
          return 0x4ef;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x31,0x3f,&recog_data), iVar7 != 0)) {
          return 0x4f7;
        }
      }
    }
    break;
  case 0x32:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x32,0x3f,&recog_data), iVar7 != 0)) {
          return 0x4f0;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x32,0x3f,&recog_data), iVar7 != 0)) {
          return 0x4f8;
        }
      }
    }
    break;
  case 0x34:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = register_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = register_operand(uVar3,0x3f);
      if ((((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x20000) != 0)) &&
          (reload_in_progress == 0)) && (reload_completed == 0)) {
        return 0x50f;
      }
    }
    break;
  case 0x3d:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == '?') {
      if (*psVar2 == 0x40) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar7 = register_operand(psVar2,0x3f);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar7 = nonimmediate_operand(uVar3,0x3f);
          if (iVar7 != 0) {
            if (((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) {
              _register_operand = uVar3;
              return 0x560;
            }
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar3;
              return 0x564;
            }
            _register_operand = uVar3;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x568;
            }
          }
        }
      }
      else {
        iVar7 = nonimmediate_operand(psVar2,0x3f);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar7 = nonimmediate_operand(uVar3,0x3f);
          if (iVar7 != 0) {
            _register_operand = uVar3;
            if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
               (iVar7 = ix86_binary_operator_ok(0x3d,0x3f,&recog_data), iVar7 != 0)) {
              return 0x579;
            }
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar7 = ix86_binary_operator_ok(0x3d,0x3f,&recog_data), iVar7 != 0)) {
              return 0x585;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar7 = ix86_binary_operator_ok(0x3d,0x3f,&recog_data), iVar7 != 0)) {
              return 0x591;
            }
          }
        }
      }
    }
    break;
  case 0x3e:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar7 = ix86_binary_operator_ok(0x3e,0x3f,&recog_data), iVar7 != 0)) {
          return 0x57a;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3e,0x3f,&recog_data), iVar7 != 0)) {
          return 0x586;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3e,0x3f,&recog_data), iVar7 != 0)) {
          return 0x592;
        }
      }
    }
    break;
  case 0x3f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar7 = ix86_binary_operator_ok(0x3f,0x3f,&recog_data), iVar7 != 0)) {
          return 0x57b;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3f,0x3f,&recog_data), iVar7 != 0)) {
          return 0x587;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3f,0x3f,&recog_data), iVar7 != 0)) {
          return 0x593;
        }
      }
    }
    break;
  case 0x46:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x46,0x3f,&recog_data), iVar7 != 0)) {
          return 0x535;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x46,0x3f,&recog_data), iVar7 != 0)) {
          return 0x545;
        }
      }
    }
    break;
  case 0x47:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x47,0x3f,&recog_data), iVar7 != 0)) {
          return 0x534;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x47,0x3f,&recog_data), iVar7 != 0)) {
          return 0x544;
        }
      }
    }
    break;
  case 0x48:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x48,0x3f,&recog_data), iVar7 != 0)) {
          return 0x537;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x48,0x3f,&recog_data), iVar7 != 0)) {
          return 0x541;
        }
      }
    }
    break;
  case 0x49:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x49,0x3f,&recog_data), iVar7 != 0)) {
          return 0x536;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x49,0x3f,&recog_data), iVar7 != 0)) {
          return 0x540;
        }
      }
    }
    break;
  case 0x51:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x51,0x3f,&recog_data), iVar7 != 0)) {
          return 0x54c;
        }
        if ((((ix86_isa_flags & 0x20000) != 0) && ((ix86_isa_flags & 0x800000) == 0)) &&
           (iVar7 = ix86_binary_operator_ok(0x51,0x3f,&recog_data), iVar7 != 0)) {
          return 0x550;
        }
      }
    }
    break;
  case 0x53:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = register_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar3;
          return 0x554;
        }
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20000) != 0) && ((ix86_isa_flags & 0x800000) == 0)) {
          return 0x558;
        }
      }
    }
    break;
  case 100:
    psVar2 = *(short **)(puVar1 + 4);
    if ((((*(char *)(psVar2 + 1) == 'E') && (*psVar2 == 0x44)) &&
        (psVar4 = *(short **)(psVar2 + 4), *(char *)(psVar4 + 1) == 'E')) &&
       (((*psVar4 == 0x31 && (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'E')) &&
        ((*psVar5 == 0x31 &&
         ((psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == 'E' && (*psVar6 == 99))))))))
    {
      psVar6 = *(short **)(psVar6 + 4);
      iVar7 = nonimmediate_operand(psVar6,0x3f);
      if ((iVar7 != 0) &&
         ((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = psVar6,
          *(char *)(psVar5 + 1) == 'E' && (*psVar5 == 99)))) {
        uVar3 = *(undefined8 *)(psVar5 + 4);
        iVar7 = nonimmediate_operand(uVar3,0x3f);
        if (((((iVar7 != 0) &&
              (((psVar4 = *(short **)(psVar4 + 8), _register_operand = uVar3,
                *(char *)(psVar4 + 1) == '?' && (*psVar4 == 0x21)) &&
               (**(int **)(psVar4 + 4) == 0x10)))) &&
             ((((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _bt_comparison_operator)) &&
               (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _bt_comparison_operator)) &&
              ((*(long *)(*(long *)(psVar4 + 4) + 0x20) == _bt_comparison_operator &&
               (*(long *)(*(long *)(psVar4 + 4) + 0x28) == _bt_comparison_operator)))))) &&
            (((*(long *)(*(long *)(psVar4 + 4) + 0x30) == _bt_comparison_operator &&
              (((((*(long *)(*(long *)(psVar4 + 4) + 0x38) == _bt_comparison_operator &&
                  (*(long *)(*(long *)(psVar4 + 4) + 0x40) == _bt_comparison_operator)) &&
                 (*(long *)(*(long *)(psVar4 + 4) + 0x48) == _bt_comparison_operator)) &&
                ((*(long *)(*(long *)(psVar4 + 4) + 0x50) == _bt_comparison_operator &&
                 (*(long *)(*(long *)(psVar4 + 4) + 0x58) == _bt_comparison_operator)))) &&
               (*(long *)(*(long *)(psVar4 + 4) + 0x60) == _bt_comparison_operator)))) &&
             (((*(long *)(*(long *)(psVar4 + 4) + 0x68) == _bt_comparison_operator &&
               (*(long *)(*(long *)(psVar4 + 4) + 0x70) == _bt_comparison_operator)) &&
              (*(long *)(*(long *)(psVar4 + 4) + 0x78) == _bt_comparison_operator)))))) &&
           (((*(long *)(*(long *)(psVar4 + 4) + 0x80) == _bt_comparison_operator &&
             (**(short **)(psVar2 + 8) == 0x1e)) && (*(long *)(*(short **)(psVar2 + 8) + 4) == 1))))
        {
          if (((ix86_isa_flags & 0x20) != 0) &&
             (iVar7 = ix86_binary_operator_ok(0x31,0x3f,&recog_data), iVar7 != 0)) {
            return 0x5d5;
          }
          if (((ix86_isa_flags & 0x20000) != 0) &&
             (iVar7 = ix86_binary_operator_ok(0x31,0x3f,&recog_data), iVar7 != 0)) {
            return 0x5d6;
          }
        }
      }
    }
    break;
  case 0x7b:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == '?') && (*psVar2 == 0x7e)) {
      uVar3 = *(undefined8 *)(psVar2 + 4);
      iVar7 = nonimmediate_operand(uVar3,0xe);
      if (iVar7 != 0) {
        psVar2 = *(short **)(puVar1 + 8);
        _register_operand = uVar3;
        iVar7 = register_operand(psVar2,0x3f);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar1 + 0xc);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar7 = const_pow2_1_to_32768_operand(uVar3,0x10);
          if (iVar7 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _nonimmediate_operand = uVar3;
              return 0x5b2;
            }
            _nonimmediate_operand = uVar3;
            if ((ix86_isa_flags & 0x80000) != 0) {
              return 0x5b5;
            }
          }
        }
      }
    }
    break;
  case 0x7c:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == 'D') && (*psVar2 == 0x7d)) {
      psVar4 = *(short **)(psVar2 + 4);
      iVar7 = register_operand(psVar4,0x3f);
      if (iVar7 != 0) {
        uVar3 = *(undefined8 *)(psVar2 + 8);
        _GLOBAL_OFFSET_TABLE_ = psVar4;
        iVar7 = nonimmediate_operand(uVar3,0x3f);
        if ((((iVar7 != 0) &&
             (psVar2 = *(short **)(puVar1 + 8), _register_operand = uVar3, *psVar2 == 0xf)) &&
            (**(int **)(psVar2 + 4) == 0x10)) &&
           ((psVar4 = *(short **)(*(long *)(psVar2 + 4) + 8), *psVar4 == 0x1e &&
            ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4))))) {
          if ((int)*(undefined8 *)(psVar4 + 4) == 0) {
            if ((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _avx_vpermilp_v4sf_operand) &&
                 (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _bt_comparison_operator)) &&
                (((((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _avx_vpermilp_v2df_operand &&
                    (((*(long *)(*(long *)(psVar2 + 4) + 0x28) == _ix86_fp_comparison_operator &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _avx_vperm2f128_v8si_operand)) &&
                     (*(long *)(*(long *)(psVar2 + 4) + 0x38) == _swap_condition)))) &&
                   (((*(long *)(*(long *)(psVar2 + 4) + 0x40) == _scratch_operand &&
                     (*(long *)(*(long *)(psVar2 + 4) + 0x48) == _ix86_fp_compare_mode)) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x50) == _fp_register_operand)))) &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x58) == _ix86_cc_mode &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x60) == const_double_operand)))) &&
                 ((*(long *)(*(long *)(psVar2 + 4) + 0x68) == _index_register_operand &&
                  (((*(long *)(*(long *)(psVar2 + 4) + 0x70) == _absneg_operator &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x78) == _const248_operand)) &&
                   (**(short **)(*(long *)(psVar2 + 4) + 0x80) == 0x1e)))))))) &&
               (*(long *)(*(short **)(*(long *)(psVar2 + 4) + 0x80) + 4) == 0x17)) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x5a8;
              }
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x5a9;
              }
            }
          }
          else if (((((int)*(undefined8 *)(psVar4 + 4) == 8) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x10) == flag_pic)) &&
                   (((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _constant_call_address_operand &&
                     ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _emms_operation &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _sibcall_insn_operand)))) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _vzeroall_operation)))) &&
                  ((((((*(long *)(*(long *)(psVar2 + 4) + 0x38) ==
                        _nonimmediate_or_sse_const_operand &&
                       (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _vzeroupper_operation)) &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x48) == _const_0_to_255_mul_8_operand)) &&
                     ((*(long *)(*(long *)(psVar2 + 4) + 0x50) == _address_operand &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x58) ==
                       _ix86_vec_interleave_v2df_operator_ok)))) &&
                    ((*(long *)(*(long *)(psVar2 + 4) + 0x60) == _x86_prefetch_sse &&
                     ((*(long *)(*(long *)(psVar2 + 4) + 0x68) == _reg_not_xmm0_operand &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x70) == _gen_split_1849)))))) &&
                   ((*(long *)(*(long *)(psVar2 + 4) + 0x78) == _nonimm_not_xmm0_operand &&
                    ((**(short **)(*(long *)(psVar2 + 4) + 0x80) == 0x1e &&
                     (*(long *)(*(short **)(*(long *)(psVar2 + 4) + 0x80) + 4) == 0x1f)))))))) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x5a6;
            }
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x5a7;
            }
          }
        }
      }
    }
    break;
  case 0x7d:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == ';') {
      if (*psVar2 == 0x88) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar7 = register_operand(psVar2,0x40);
        if (((iVar7 != 0) &&
            (psVar4 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2,
            *(char *)(psVar4 + 1) == ';')) && (*psVar4 == 0x88)) {
          uVar3 = *(undefined8 *)(psVar4 + 4);
          iVar7 = nonimmediate_operand(uVar3,0x40);
          if (iVar7 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar3;
              return 0x5a0;
            }
            _register_operand = uVar3;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x5a1;
            }
          }
        }
      }
      else if (*psVar2 == 0x89) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar7 = register_operand(psVar2,0x40);
        if (((iVar7 != 0) &&
            (psVar4 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2,
            *(char *)(psVar4 + 1) == ';')) && (*psVar4 == 0x89)) {
          uVar3 = *(undefined8 *)(psVar4 + 4);
          iVar7 = nonimmediate_operand(uVar3,0x40);
          if (iVar7 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar3;
              return 0x5a4;
            }
            _register_operand = uVar3;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x5a5;
            }
          }
        }
      }
    }
    break;
  case 0x7f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x7f,0x3f,&recog_data), iVar7 != 0)) {
          return 0x4ff;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x7f,0x3f,&recog_data), iVar7 != 0)) {
          return 0x507;
        }
      }
    }
    break;
  case 0x80:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x80,0x3f,&recog_data), iVar7 != 0)) {
          return 0x500;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x80,0x3f,&recog_data), iVar7 != 0)) {
          return 0x508;
        }
      }
    }
    break;
  case 0x81:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x81,0x3f,&recog_data), iVar7 != 0)) {
          return 0x501;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x81,0x3f,&recog_data), iVar7 != 0)) {
          return 0x509;
        }
      }
    }
    break;
  case 0x87:
    psVar2 = *(short **)(puVar1 + 4);
    iVar7 = nonimmediate_operand(psVar2,0x3f);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar7 = nonimmediate_operand(uVar3,0x3f);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x87,0x3f,&recog_data), iVar7 != 0)) {
          return 0x502;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x87,0x3f,&recog_data), iVar7 != 0)) {
          return 0x50a;
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_12(rtx x0,rtx insn,int *pnum_clobbers)

{
  undefined2 *puVar1;
  short *psVar2;
  rtx prVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  rtx x3;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x4;
  rtx x5;
  rtx x6;
  
  puVar1 = *(undefined2 **)&(x0->u).field_0x8;
  switch(*puVar1) {
  case 0x31:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x31,0x40,&recog_data), iVar9 != 0)) {
          return 0x4f1;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x31,0x40,&recog_data), iVar9 != 0)) {
          return 0x4f9;
        }
      }
    }
    break;
  case 0x32:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x32,0x40,&recog_data), iVar9 != 0)) {
          return 0x4f2;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x32,0x40,&recog_data), iVar9 != 0)) {
          return 0x4fa;
        }
      }
    }
    break;
  case 0x34:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
          return 0x510;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
          return 0x511;
        }
      }
    }
    break;
  case 0x3d:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == '@') {
      if (*psVar2 == 0x40) {
        psVar2 = *(short **)(psVar2 + 4);
        iVar9 = register_operand(psVar2,0x40);
        if (iVar9 != 0) {
          prVar3 = *(rtx *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar9 = nonimmediate_operand(prVar3,0x40);
          if (iVar9 != 0) {
            if (((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) {
              _register_operand = prVar3;
              return 0x561;
            }
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = prVar3;
              return 0x565;
            }
            _register_operand = prVar3;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x569;
            }
          }
        }
      }
      else {
        iVar9 = nonimmediate_operand(psVar2,0x40);
        if (iVar9 != 0) {
          prVar3 = *(rtx *)(puVar1 + 8);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar9 = nonimmediate_operand(prVar3,0x40);
          if (iVar9 != 0) {
            _register_operand = prVar3;
            if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
               (iVar9 = ix86_binary_operator_ok(0x3d,0x40,&recog_data), iVar9 != 0)) {
              return 0x57c;
            }
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar9 = ix86_binary_operator_ok(0x3d,0x40,&recog_data), iVar9 != 0)) {
              return 0x588;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar9 = ix86_binary_operator_ok(0x3d,0x40,&recog_data), iVar9 != 0)) {
              return 0x594;
            }
          }
        }
      }
    }
    break;
  case 0x3e:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar9 = ix86_binary_operator_ok(0x3e,0x40,&recog_data), iVar9 != 0)) {
          return 0x57d;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x3e,0x40,&recog_data), iVar9 != 0)) {
          return 0x589;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x3e,0x40,&recog_data), iVar9 != 0)) {
          return 0x595;
        }
      }
    }
    break;
  case 0x3f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar9 = ix86_binary_operator_ok(0x3f,0x40,&recog_data), iVar9 != 0)) {
          return 0x57e;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x3f,0x40,&recog_data), iVar9 != 0)) {
          return 0x58a;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x3f,0x40,&recog_data), iVar9 != 0)) {
          return 0x596;
        }
      }
    }
    break;
  case 0x41:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = register_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonmemory_operand(prVar3,0x10);
      if (iVar9 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = prVar3;
          return 0x52d;
        }
        _register_operand = prVar3;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x531;
        }
      }
    }
    break;
  case 0x43:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = register_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonmemory_operand(prVar3,0x10);
      if (iVar9 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = prVar3;
          return 0x520;
        }
        _register_operand = prVar3;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x522;
        }
      }
    }
    break;
  case 0x44:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = register_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonmemory_operand(prVar3,0x10);
      if (iVar9 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = prVar3;
          return 0x525;
        }
        _register_operand = prVar3;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x529;
        }
      }
    }
    break;
  case 0x46:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x46,0x40,&recog_data), iVar9 != 0)) {
          return 0x539;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x46,0x40,&recog_data), iVar9 != 0)) {
          return 0x543;
        }
      }
    }
    break;
  case 0x47:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x47,0x40,&recog_data), iVar9 != 0)) {
          return 0x538;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x47,0x40,&recog_data), iVar9 != 0)) {
          return 0x542;
        }
      }
    }
    break;
  case 0x48:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x48,0x40,&recog_data), iVar9 != 0)) {
          return 0x53b;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x48,0x40,&recog_data), iVar9 != 0)) {
          return 0x549;
        }
      }
    }
    break;
  case 0x49:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x49,0x40,&recog_data), iVar9 != 0)) {
          return 0x53a;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x49,0x40,&recog_data), iVar9 != 0)) {
          return 0x548;
        }
      }
    }
    break;
  case 0x51:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x51,0x40,&recog_data), iVar9 != 0)) {
          return 0x54d;
        }
        if ((((ix86_isa_flags & 0x20000) != 0) && ((ix86_isa_flags & 0x800000) == 0)) &&
           (iVar9 = ix86_binary_operator_ok(0x51,0x40,&recog_data), iVar9 != 0)) {
          return 0x551;
        }
      }
    }
    break;
  case 0x53:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = register_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = prVar3;
          return 0x555;
        }
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20000) != 0) && ((ix86_isa_flags & 0x800000) == 0)) {
          return 0x559;
        }
      }
    }
    break;
  case 100:
    psVar2 = *(short **)(puVar1 + 4);
    if (((*(char *)(psVar2 + 1) == 'F') && (*psVar2 == 0x44)) &&
       (psVar6 = *(short **)(psVar2 + 4), *(char *)(psVar6 + 1) == 'F')) {
      if (*psVar6 == 0x31) {
        psVar4 = *(short **)(psVar6 + 4);
        if (((*(char *)(psVar4 + 1) == 'F') && (*psVar4 == 0x31)) &&
           ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'F' && (*psVar5 == 99)))) {
          psVar5 = *(short **)(psVar5 + 4);
          iVar9 = nonimmediate_operand(psVar5,0x40);
          if (((iVar9 != 0) &&
              (psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = psVar5,
              *(char *)(psVar4 + 1) == 'F')) && (*psVar4 == 99)) {
            prVar3 = *(rtx *)(psVar4 + 4);
            iVar9 = nonimmediate_operand(prVar3,0x40);
            if ((((iVar9 != 0) &&
                 (psVar6 = *(short **)(psVar6 + 8), _register_operand = prVar3,
                 *(char *)(psVar6 + 1) == '@')) && (*psVar6 == 0x21)) &&
               (((((**(int **)(psVar6 + 4) == 8 &&
                   (*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator)) &&
                  ((*(long *)(*(long *)(psVar6 + 4) + 0x10) == _bt_comparison_operator &&
                   ((*(long *)(*(long *)(psVar6 + 4) + 0x18) == _bt_comparison_operator &&
                    (*(long *)(*(long *)(psVar6 + 4) + 0x20) == _bt_comparison_operator)))))) &&
                 (*(long *)(*(long *)(psVar6 + 4) + 0x28) == _bt_comparison_operator)) &&
                ((((*(long *)(*(long *)(psVar6 + 4) + 0x30) == _bt_comparison_operator &&
                   (*(long *)(*(long *)(psVar6 + 4) + 0x38) == _bt_comparison_operator)) &&
                  (*(long *)(*(long *)(psVar6 + 4) + 0x40) == _bt_comparison_operator)) &&
                 ((**(short **)(psVar2 + 8) == 0x1e && (*(long *)(*(short **)(psVar2 + 8) + 4) == 1)
                  ))))))) {
              if (((ix86_isa_flags & 0x20) != 0) &&
                 (iVar9 = ix86_binary_operator_ok(0x31,0x40,&recog_data), iVar9 != 0)) {
                return 0x5d7;
              }
              if (((ix86_isa_flags & 0x20000) != 0) &&
                 (iVar9 = ix86_binary_operator_ok(0x31,0x40,&recog_data), iVar9 != 0)) {
                return 0x5d8;
              }
            }
          }
        }
      }
      else if ((*psVar6 == 0x34) && (psVar4 = *(short **)(psVar6 + 4), *(char *)(psVar4 + 1) == 'F')
              ) {
        if (*psVar4 == 0x62) {
          psVar4 = *(short **)(psVar4 + 4);
          iVar9 = nonimmediate_operand(psVar4,0x40);
          if (((iVar9 != 0) &&
              (psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = psVar4,
              *(char *)(psVar6 + 1) == 'F')) && (*psVar6 == 0x62)) {
            prVar3 = *(rtx *)(psVar6 + 4);
            iVar9 = nonimmediate_operand(prVar3,0x40);
            if (((iVar9 != 0) && (_register_operand = prVar3, **(short **)(psVar2 + 8) == 0x1e)) &&
               (*(long *)(*(short **)(psVar2 + 8) + 4) == 0x10)) {
              if (((ix86_isa_flags & 0x20) != 0) &&
                 (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
                return 0x512;
              }
              if (((ix86_isa_flags & 0x20000) != 0) &&
                 (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
                return 0x513;
              }
            }
          }
        }
        else if (*psVar4 == 99) {
          psVar4 = *(short **)(psVar4 + 4);
          iVar9 = nonimmediate_operand(psVar4,0x40);
          if (((iVar9 != 0) &&
              (psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = psVar4,
              *(char *)(psVar6 + 1) == 'F')) && (*psVar6 == 99)) {
            prVar3 = *(rtx *)(psVar6 + 4);
            iVar9 = nonimmediate_operand(prVar3,0x40);
            if (((iVar9 != 0) && (_register_operand = prVar3, **(short **)(psVar2 + 8) == 0x1e)) &&
               (*(long *)(*(short **)(psVar2 + 8) + 4) == 0x10)) {
              if (((ix86_isa_flags & 0x20) != 0) &&
                 (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
                return 0x514;
              }
              if (((ix86_isa_flags & 0x20000) != 0) &&
                 (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
                return 0x515;
              }
            }
          }
        }
      }
    }
    break;
  case 0x7b:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == '@') && (*psVar2 == 0x7e)) {
      prVar3 = *(rtx *)(psVar2 + 4);
      iVar9 = nonimmediate_operand(prVar3,0xf);
      if (iVar9 != 0) {
        psVar2 = *(short **)(puVar1 + 8);
        _register_operand = prVar3;
        iVar9 = register_operand(psVar2,0x40);
        if (iVar9 != 0) {
          uVar7 = *(undefined8 *)(puVar1 + 0xc);
          _GLOBAL_OFFSET_TABLE_ = psVar2;
          iVar9 = const_pow2_1_to_128_operand(uVar7,0x10);
          if (iVar9 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _nonimmediate_operand = uVar7;
              return 0x5b3;
            }
            _nonimmediate_operand = uVar7;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x5b6;
            }
          }
        }
      }
    }
    break;
  case 0x7c:
    psVar2 = *(short **)(puVar1 + 4);
    if (*(char *)(psVar2 + 1) == '@') {
      iVar9 = nonimmediate_operand(psVar2,0x40);
      if ((((iVar9 != 0) &&
           (psVar6 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2, *psVar6 == 0xf)) &&
          (**(int **)(psVar6 + 4) == 8)) &&
         (x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8), *(short *)x3 == 0x1e)) {
        iVar9 = const_0_to_3_operand(x3,0);
        if (iVar9 != 0) {
          uVar7 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x10);
          _register_operand = x3;
          iVar9 = const_0_to_3_operand(uVar7,0);
          if (iVar9 == 0) {
            x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
          }
          else {
            uVar8 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x18);
            _nonimmediate_operand = uVar7;
            iVar9 = const_0_to_3_operand(uVar8,0);
            if (iVar9 == 0) {
              x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
            }
            else {
              uVar7 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x20);
              _memory_operand = uVar8;
              iVar9 = const_0_to_3_operand(uVar7,0);
              if (iVar9 == 0) {
                x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
              }
              else {
                _push_operand = uVar7;
                if (*(long *)(*(long *)(psVar6 + 4) + 0x28) == _ix86_fp_compare_mode) {
                  if (*(long *)(*(long *)(psVar6 + 4) + 0x30) == _ix86_cc_mode) {
                    if (*(long *)(*(long *)(psVar6 + 4) + 0x38) == _index_register_operand) {
                      if ((*(long *)(*(long *)(psVar6 + 4) + 0x40) == _const248_operand) &&
                         ((ix86_isa_flags & 0x20000) != 0)) {
                        return 0x5be;
                      }
                      x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
                    }
                    else {
                      x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
                    }
                  }
                  else {
                    x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
                  }
                }
                else {
                  x3 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
                }
              }
            }
          }
        }
        if (((*(long *)&x3->u == 0) &&
            (*(long *)(*(long *)(psVar6 + 4) + 0x10) == _bt_comparison_operator)) &&
           ((*(long *)(*(long *)(psVar6 + 4) + 0x18) == _ix86_fp_comparison_operator &&
            (*(long *)(*(long *)(psVar6 + 4) + 0x20) == _swap_condition)))) {
          prVar3 = *(rtx *)(*(long *)(psVar6 + 4) + 0x28);
          iVar9 = const_4_to_7_operand(prVar3,0);
          if (iVar9 != 0) {
            uVar7 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x30);
            _register_operand = prVar3;
            iVar9 = const_4_to_7_operand(uVar7,0);
            if (iVar9 != 0) {
              uVar8 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x38);
              _nonimmediate_operand = uVar7;
              iVar9 = const_4_to_7_operand(uVar8,0);
              if (iVar9 != 0) {
                uVar7 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x40);
                _memory_operand = uVar8;
                iVar9 = const_4_to_7_operand(uVar7,0);
                if ((iVar9 != 0) && (_push_operand = uVar7, (ix86_isa_flags & 0x20000) != 0)) {
                  return 0x5bf;
                }
              }
            }
          }
        }
      }
    }
    else if ((*(char *)(psVar2 + 1) == 'E') && (*psVar2 == 0x7d)) {
      psVar6 = *(short **)(psVar2 + 4);
      iVar9 = register_operand(psVar6,0x40);
      if (iVar9 != 0) {
        prVar3 = *(rtx *)(psVar2 + 8);
        _GLOBAL_OFFSET_TABLE_ = psVar6;
        iVar9 = nonimmediate_operand(prVar3,0x40);
        if ((((iVar9 != 0) &&
             (psVar2 = *(short **)(puVar1 + 8), _register_operand = prVar3, *psVar2 == 0xf)) &&
            (**(int **)(psVar2 + 4) == 8)) &&
           ((psVar6 = *(short **)(*(long *)(psVar2 + 4) + 8), *psVar6 == 0x1e &&
            ((long)(int)*(undefined8 *)(psVar6 + 4) == *(long *)(psVar6 + 4))))) {
          if ((int)*(undefined8 *)(psVar6 + 4) == 0) {
            if ((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _flags_reg_operand) &&
                 (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _bt_comparison_operator)) &&
                ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _constant_call_address_operand &&
                 (((*(long *)(*(long *)(psVar2 + 4) + 0x28) == _ix86_fp_comparison_operator &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _sibcall_insn_operand)) &&
                  (*(long *)(*(long *)(psVar2 + 4) + 0x38) == _swap_condition)))))) &&
               ((**(short **)(*(long *)(psVar2 + 4) + 0x40) == 0x1e &&
                (*(long *)(*(short **)(*(long *)(psVar2 + 4) + 0x40) + 4) == 0xb)))) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x5ac;
              }
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x5ad;
              }
            }
          }
          else if ((((int)*(undefined8 *)(psVar6 + 4) == 4) &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _const_0_to_255_mul_8_operand)) &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode &&
                   (((((*(long *)(*(long *)(psVar2 + 4) + 0x20) ==
                        _ix86_vec_interleave_v2df_operator_ok &&
                       (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _index_register_operand)) &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _reg_not_xmm0_operand)) &&
                     ((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _const248_operand &&
                      (**(short **)(*(long *)(psVar2 + 4) + 0x40) == 0x1e)))) &&
                    (*(long *)(*(short **)(*(long *)(psVar2 + 4) + 0x40) + 4) == 0xf)))))) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x5aa;
            }
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x5ab;
            }
          }
        }
      }
    }
    break;
  case 0x7d:
    psVar2 = *(short **)(puVar1 + 4);
    if ((*(char *)(psVar2 + 1) == '<') && (*psVar2 == 0x88)) {
      psVar2 = *(short **)(psVar2 + 4);
      iVar9 = register_operand(psVar2,0x41);
      if ((iVar9 != 0) &&
         ((psVar6 = *(short **)(puVar1 + 8), _GLOBAL_OFFSET_TABLE_ = psVar2,
          *(char *)(psVar6 + 1) == '<' && (*psVar6 == 0x88)))) {
        prVar3 = *(rtx *)(psVar6 + 4);
        iVar9 = nonimmediate_operand(prVar3,0x41);
        if (iVar9 != 0) {
          if ((ix86_isa_flags & 0x20) != 0) {
            _register_operand = prVar3;
            return 0x5a2;
          }
          _register_operand = prVar3;
          if ((ix86_isa_flags & 0x20000) != 0) {
            return 0x5a3;
          }
        }
      }
    }
    break;
  case 0x7f:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x7f,0x40,&recog_data), iVar9 != 0)) {
          return 0x503;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x7f,0x40,&recog_data), iVar9 != 0)) {
          return 0x50b;
        }
      }
    }
    break;
  case 0x80:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x80,0x40,&recog_data), iVar9 != 0)) {
          return 0x504;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x80,0x40,&recog_data), iVar9 != 0)) {
          return 0x50c;
        }
      }
    }
    break;
  case 0x81:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x81,0x40,&recog_data), iVar9 != 0)) {
          return 0x505;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x81,0x40,&recog_data), iVar9 != 0)) {
          return 0x50d;
        }
      }
    }
    break;
  case 0x87:
    psVar2 = *(short **)(puVar1 + 4);
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)(puVar1 + 8);
      _GLOBAL_OFFSET_TABLE_ = psVar2;
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (iVar9 != 0) {
        _register_operand = prVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x87,0x40,&recog_data), iVar9 != 0)) {
          return 0x506;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar9 = ix86_binary_operator_ok(0x87,0x40,&recog_data), iVar9 != 0)) {
          return 0x50e;
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_13(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  rtx prVar4;
  short *psVar5;
  short *psVar6;
  rtx prVar7;
  int iVar8;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x4;
  rtx x5;
  rtx x6;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  switch(*(undefined2 *)x1) {
  case 0x12:
    if ((**(int **)&x1->u == 1) && (*(int *)&(x1->u).field_0x8 == 0x28)) {
      prVar7 = *(rtx *)(*(long *)&x1->u + 8);
      if (prVar7->field_0x2 == 'O') {
        iVar8 = nonimmediate_operand(prVar7,0x4f);
        if (iVar8 != 0) {
          if ((ix86_isa_flags & 0x20) != 0) {
            _GLOBAL_OFFSET_TABLE_ = prVar7;
            return 0x474;
          }
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          if ((ix86_isa_flags & 0x20000) != 0) {
            return 0x476;
          }
        }
      }
      else if (((prVar7->field_0x2 == 'R') &&
               (iVar8 = nonimmediate_operand(prVar7,0x52), iVar8 != 0)) &&
              (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
        return 0x484;
      }
    }
    break;
  case 0x27:
    if (*(int *)&(x1->u).field_0x8 == 0) {
      prVar7 = *(rtx *)&x1->u;
      iVar8 = nonimmediate_operand(prVar7,0x11);
      if ((((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20000) != 0)) &&
          (DAT_001cb07a != '\0')) && (pnum_clobbers != (int *)0x0)) {
        *pnum_clobbers = 1;
        return 0x355;
      }
    }
    break;
  case 0x31:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'A') {
      if (*(ushort *)prVar7 == 0x34) {
        psVar5 = *(short **)&prVar7->u;
        if ((((*(char *)(psVar5 + 1) == 'A') && (*psVar5 == 0x62)) &&
            (psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '<')) && (*psVar5 == 0x7c))
        {
          prVar4 = *(rtx *)(psVar5 + 4);
          iVar8 = nonimmediate_operand(prVar4,0x40);
          if (((((iVar8 != 0) &&
                (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar4, *psVar5 == 0xf))
               && ((**(int **)(psVar5 + 4) == 4 &&
                   ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
                    (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator))))))
              && ((*(long *)(*(long *)(psVar5 + 4) + 0x18) == _ix86_fp_compare_mode &&
                  (((*(long *)(*(long *)(psVar5 + 4) + 0x20) == _index_register_operand &&
                    (psVar5 = *(short **)&(prVar7->u).field_0x8, *(char *)(psVar5 + 1) == 'A')) &&
                   (*psVar5 == 0x62)))))) &&
             ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '<' && (*psVar5 == 0x7c)))
             ) {
            uVar2 = *(undefined8 *)(psVar5 + 4);
            iVar8 = nonimmediate_operand(uVar2,0x40);
            if ((((((iVar8 != 0) &&
                   ((psVar5 = *(short **)(psVar5 + 8), _register_operand = uVar2, *psVar5 == 0xf &&
                    (**(int **)(psVar5 + 4) == 4)))) &&
                  (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                 (((((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                     (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
                    (*(long *)(*(long *)(psVar5 + 4) + 0x20) == _index_register_operand)) &&
                   ((psVar5 = *(short **)&(x1->u).field_0x8, *(char *)(psVar5 + 1) == 'A' &&
                    (*psVar5 == 0x34)))) &&
                  (psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == 'A')))) &&
                (((((*psVar6 == 0x62 &&
                    (psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '<')) &&
                   ((*psVar6 == 0x7c &&
                    (((iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar8 != 0 && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)) &&
                     (**(int **)(psVar6 + 4) == 4)))))) &&
                  ((*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator &&
                   (*(long *)(*(long *)(psVar6 + 4) + 0x10) == _swap_condition)))) &&
                 (*(long *)(*(long *)(psVar6 + 4) + 0x18) == _ix86_cc_mode)))) &&
               ((((*(long *)(*(long *)(psVar6 + 4) + 0x20) == _const248_operand &&
                  (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == 'A')) &&
                 ((*psVar5 == 0x62 &&
                  (((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '<' &&
                    (*psVar5 == 0x7c)) &&
                   (iVar8 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar8 != 0))
                  )))) && (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                            (**(int **)(psVar5 + 4) == 4)) &&
                           ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                            (((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _swap_condition &&
                              (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _ix86_cc_mode)) &&
                             ((**(short **)(*(long *)(psVar5 + 4) + 0x20) == 0x1e &&
                              (*(long *)(*(short **)(*(long *)(psVar5 + 4) + 0x20) + 4) == 7))))))))
                          )))) {
              if (((ix86_isa_flags & 0x20) != 0) &&
                 (iVar8 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar8 != 0)) {
                return 0x51a;
              }
              if (((ix86_isa_flags & 0x20000) != 0) &&
                 (iVar8 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar8 != 0)) {
                return 0x51b;
              }
            }
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(prVar7,0x41);
        if (iVar8 != 0) {
          uVar2 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar8 = nonimmediate_operand(uVar2,0x41);
          if (iVar8 != 0) {
            _register_operand = uVar2;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x31,0x41,&recog_data), iVar8 != 0)) {
              return 0x4f3;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x31,0x41,&recog_data), iVar8 != 0)) {
              return 0x4fb;
            }
          }
        }
      }
    }
    break;
  case 0x32:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x32,0x41,&recog_data), iVar8 != 0)) {
          return 0x4f4;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x32,0x41,&recog_data), iVar8 != 0)) {
          return 0x4fc;
        }
      }
    }
    break;
  case 0x34:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'A') {
      iVar8 = nonimmediate_operand(x2,0x41);
      if (iVar8 != 0) {
        uVar2 = *(undefined8 *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = x2;
        iVar8 = nonimmediate_operand(uVar2,0x41);
        if (iVar8 == 0) {
          x2 = *(rtx *)&x1->u;
        }
        else {
          _register_operand = uVar2;
          if (((ix86_isa_flags & 0x20) != 0) &&
             (iVar8 = ix86_binary_operator_ok(0x34,0x41,&recog_data), iVar8 != 0)) {
            return 0x51c;
          }
          if (((ix86_isa_flags & 0x80000) != 0) &&
             (iVar8 = ix86_binary_operator_ok(0x34,0x41,&recog_data), iVar8 != 0)) {
            return 0x51d;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          x2 = *(rtx *)&x1->u;
        }
      }
      iVar8 = register_operand(x2,0x41);
      if (iVar8 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        uVar2 = *(undefined8 *)&(x1->u).field_0x8;
        iVar8 = register_operand(uVar2,0x41);
        if (((((iVar8 != 0) && (_register_operand = uVar2, (ix86_isa_flags & 0x20000) != 0)) &&
             ((ix86_isa_flags & 0x80000) == 0)) &&
            (((ix86_isa_flags & 0x20) == 0 && (reload_in_progress == 0)))) &&
           (reload_completed == 0)) {
          return 0x51e;
        }
      }
    }
    break;
  case 0x3d:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'A') {
      if (*(ushort *)prVar7 == 0x40) {
        prVar7 = *(rtx *)&prVar7->u;
        iVar8 = register_operand(prVar7,0x41);
        if (iVar8 != 0) {
          uVar2 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar8 = nonimmediate_operand(uVar2,0x41);
          if (iVar8 != 0) {
            if (((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) {
              _register_operand = uVar2;
              return 0x562;
            }
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar2;
              return 0x566;
            }
            _register_operand = uVar2;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x56a;
            }
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(prVar7,0x41);
        if (iVar8 != 0) {
          uVar2 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar8 = nonimmediate_operand(uVar2,0x41);
          if (iVar8 != 0) {
            _register_operand = uVar2;
            if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
               (iVar8 = ix86_binary_operator_ok(0x3d,0x41,&recog_data), iVar8 != 0)) {
              return 0x57f;
            }
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x3d,0x41,&recog_data), iVar8 != 0)) {
              return 0x58b;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x3d,0x41,&recog_data), iVar8 != 0)) {
              return 0x597;
            }
          }
        }
      }
    }
    break;
  case 0x3e:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar8 = ix86_binary_operator_ok(0x3e,0x41,&recog_data), iVar8 != 0)) {
          return 0x580;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3e,0x41,&recog_data), iVar8 != 0)) {
          return 0x58c;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3e,0x41,&recog_data), iVar8 != 0)) {
          return 0x598;
        }
      }
    }
    break;
  case 0x3f:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar8 = ix86_binary_operator_ok(0x3f,0x41,&recog_data), iVar8 != 0)) {
          return 0x581;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3f,0x41,&recog_data), iVar8 != 0)) {
          return 0x58d;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3f,0x41,&recog_data), iVar8 != 0)) {
          return 0x599;
        }
      }
    }
    break;
  case 0x41:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = register_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonmemory_operand(uVar2,0x10);
      if (iVar8 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar2;
          return 0x52e;
        }
        _register_operand = uVar2;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x532;
        }
      }
    }
    break;
  case 0x43:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = register_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonmemory_operand(uVar2,0x10);
      if (iVar8 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar2;
          return 0x521;
        }
        _register_operand = uVar2;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x523;
        }
      }
    }
    break;
  case 0x44:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = register_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonmemory_operand(uVar2,0x10);
      if (iVar8 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar2;
          return 0x526;
        }
        _register_operand = uVar2;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x52a;
        }
      }
    }
    break;
  case 0x46:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x46,0x41,&recog_data), iVar8 != 0)) {
          return 0x53d;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x46,0x41,&recog_data), iVar8 != 0)) {
          return 0x547;
        }
      }
    }
    break;
  case 0x47:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x47,0x41,&recog_data), iVar8 != 0)) {
          return 0x53c;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x47,0x41,&recog_data), iVar8 != 0)) {
          return 0x546;
        }
      }
    }
    break;
  case 0x48:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x48,0x41,&recog_data), iVar8 != 0)) {
          return 0x53f;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x48,0x41,&recog_data), iVar8 != 0)) {
          return 0x54b;
        }
      }
    }
    break;
  case 0x49:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x49,0x41,&recog_data), iVar8 != 0)) {
          return 0x53e;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x49,0x41,&recog_data), iVar8 != 0)) {
          return 0x54a;
        }
      }
    }
    break;
  case 0x51:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        _register_operand = uVar2;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x51,0x41,&recog_data), iVar8 != 0)) {
          return 0x54e;
        }
        if ((((ix86_isa_flags & 0x20000) != 0) && ((ix86_isa_flags & 0x800000) == 0)) &&
           (iVar8 = ix86_binary_operator_ok(0x51,0x41,&recog_data), iVar8 != 0)) {
          return 0x552;
        }
      }
    }
    break;
  case 0x53:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = register_operand(prVar7,0x41);
    if (iVar8 != 0) {
      uVar2 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar8 = nonimmediate_operand(uVar2,0x41);
      if (iVar8 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar2;
          return 0x556;
        }
        _register_operand = uVar2;
        if (((ix86_isa_flags & 0x20000) != 0) && ((ix86_isa_flags & 0x800000) == 0)) {
          return 0x55a;
        }
      }
    }
    break;
  case 0x68:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'O') {
      iVar8 = nonimmediate_operand(prVar7,0x4f);
      if (iVar8 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          return 0x477;
        }
        _GLOBAL_OFFSET_TABLE_ = prVar7;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x479;
        }
      }
    }
    else if (((prVar7->field_0x2 == 'R') && (iVar8 = nonimmediate_operand(prVar7,0x52), iVar8 != 0))
            && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
      return 0x486;
    }
    break;
  case 0x7b:
    psVar5 = *(short **)&x1->u;
    if ((*(char *)(psVar5 + 1) == 'A') && (*psVar5 == 0x7e)) {
      uVar2 = *(undefined8 *)(psVar5 + 4);
      iVar8 = nonimmediate_operand(uVar2,0x10);
      if (iVar8 != 0) {
        x2 = *(rtx *)&(x1->u).field_0x8;
        _register_operand = uVar2;
        iVar8 = register_operand(x2,0x41);
        if (iVar8 != 0) {
          prVar7 = *(rtx *)&(x1->u).field_0x10;
          _GLOBAL_OFFSET_TABLE_ = x2;
          iVar8 = const_pow2_1_to_8_operand(prVar7,0x10);
          if (iVar8 == 0) {
            x2 = *(rtx *)&(x1->u).field_0x8;
          }
          else {
            if ((ix86_isa_flags & 0x20) != 0) {
              _nonimmediate_operand = prVar7;
              return 0x5b4;
            }
            if ((ix86_isa_flags & 0x80000) != 0) {
              _nonimmediate_operand = prVar7;
              return 0x5b7;
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&(x1->u).field_0x8;
            _nonimmediate_operand = prVar7;
          }
        }
        iVar8 = reg_or_0_operand(x2,0x41);
        if (iVar8 != 0) {
          _GLOBAL_OFFSET_TABLE_ = x2;
          psVar5 = *(short **)&(x1->u).field_0x10;
          if ((*psVar5 == 0x1e) && (*(long *)(psVar5 + 4) == 1)) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _GLOBAL_OFFSET_TABLE_ = x2;
              return 0x5c0;
            }
            if ((ix86_isa_flags & 0x10000) != 0) {
              _GLOBAL_OFFSET_TABLE_ = x2;
              return 0x5c1;
            }
          }
        }
      }
    }
    break;
  case 0x7c:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'A') {
      iVar8 = nonimmediate_operand(prVar7,0x41);
      if (((iVar8 != 0) &&
          (psVar5 = *(short **)&(x1->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar5 == 0xf))
         && (**(int **)(psVar5 + 4) == 4)) {
        uVar2 = *(undefined8 *)(*(long *)(psVar5 + 4) + 8);
        iVar8 = const_0_to_3_operand(uVar2,0);
        if (iVar8 != 0) {
          prVar7 = *(rtx *)(*(long *)(psVar5 + 4) + 0x10);
          _register_operand = uVar2;
          iVar8 = const_0_to_3_operand(prVar7,0);
          if (iVar8 != 0) {
            uVar2 = *(undefined8 *)(*(long *)(psVar5 + 4) + 0x18);
            _nonimmediate_operand = prVar7;
            iVar8 = const_0_to_3_operand(uVar2,0);
            if (iVar8 != 0) {
              uVar3 = *(undefined8 *)(*(long *)(psVar5 + 4) + 0x20);
              _memory_operand = uVar2;
              iVar8 = const_0_to_3_operand(uVar3,0);
              if ((iVar8 != 0) && (_push_operand = uVar3, (ix86_isa_flags & 0x20000) != 0)) {
                return 0x5bd;
              }
            }
          }
        }
      }
    }
    else if ((prVar7->field_0x2 == 'F') && (*(ushort *)prVar7 == 0x7d)) {
      prVar4 = *(rtx *)&prVar7->u;
      iVar8 = register_operand(prVar4,0x41);
      if (iVar8 != 0) {
        uVar2 = *(undefined8 *)&(prVar7->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar4;
        iVar8 = nonimmediate_operand(uVar2,0x41);
        if ((((iVar8 != 0) &&
             (x2 = *(rtx *)&(x1->u).field_0x8, _register_operand = uVar2, *(short *)x2 == 0xf)) &&
            (**(int **)&x2->u == 4)) && (x3 = *(rtx *)(*(long *)&x2->u + 8), *(short *)x3 == 0x1e))
        {
          iVar8 = const_0_to_3_operand(x3,0);
          if (iVar8 != 0) {
            uVar2 = *(undefined8 *)(*(long *)&x2->u + 0x10);
            _nonimmediate_operand = x3;
            iVar8 = const_0_to_3_operand(uVar2,0);
            if (iVar8 == 0) {
              x3 = *(rtx *)(*(long *)&x2->u + 8);
            }
            else {
              uVar3 = *(undefined8 *)(*(long *)&x2->u + 0x18);
              _memory_operand = uVar2;
              iVar8 = const_4_to_7_operand(uVar3,0);
              if (iVar8 == 0) {
                x3 = *(rtx *)(*(long *)&x2->u + 8);
              }
              else {
                uVar2 = *(undefined8 *)(*(long *)&x2->u + 0x20);
                _push_operand = uVar3;
                iVar8 = const_4_to_7_operand(uVar2,0);
                if (iVar8 == 0) {
                  x3 = *(rtx *)(*(long *)&x2->u + 8);
                }
                else {
                  if ((ix86_isa_flags & 0x20) != 0) {
                    _nonmemory_no_elim_operand = uVar2;
                    return 0x4a0;
                  }
                  if ((ix86_isa_flags & 0x10000) != 0) {
                    _nonmemory_no_elim_operand = uVar2;
                    return 0x4a2;
                  }
                  x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
                  x3 = *(rtx *)(*(long *)&x2->u + 8);
                  _nonmemory_no_elim_operand = uVar2;
                }
              }
            }
          }
          if ((long)(int)*(undefined8 *)&x3->u == *(long *)&x3->u) {
            iVar8 = (int)*(undefined8 *)&x3->u;
            if (iVar8 == 0) {
              if (((*(long *)(*(long *)&x2->u + 0x10) == _ix86_fp_compare_mode) &&
                  (*(long *)(*(long *)&x2->u + 0x18) == _bt_comparison_operator)) &&
                 ((psVar5 = *(short **)(*(long *)&x2->u + 0x20), *psVar5 == 0x1e &&
                  (*(long *)(psVar5 + 4) == 5)))) {
                if ((ix86_isa_flags & 0x20) != 0) {
                  return 0x5b0;
                }
                if ((ix86_isa_flags & 0x20000) != 0) {
                  return 0x5b1;
                }
              }
            }
            else if (((iVar8 == 2) && (*(long *)(*(long *)&x2->u + 0x10) == _index_register_operand)
                     ) && ((*(long *)(*(long *)&x2->u + 0x18) == _swap_condition &&
                           ((psVar5 = *(short **)(*(long *)&x2->u + 0x20), *psVar5 == 0x1e &&
                            (*(long *)(psVar5 + 4) == 7)))))) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x5ae;
              }
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x5af;
              }
            }
          }
        }
      }
    }
    break;
  case 0x7d:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == '=') {
      uVar1 = *(ushort *)prVar7;
      if (uVar1 == 0x68) {
        prVar7 = *(rtx *)&prVar7->u;
        iVar8 = nonimmediate_operand(prVar7,0x50);
        if (iVar8 != 0) {
          uVar2 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar8 = const0_operand(uVar2,0x3d);
          if ((iVar8 != 0) && (_register_operand = uVar2, (ix86_isa_flags & 0x20000) != 0)) {
            return 0x487;
          }
        }
      }
      else if (uVar1 < 0x69) {
        if (uVar1 != 0x27) {
          if (0x27 < uVar1) {
            return -1;
          }
          if (uVar1 == 0x12) {
            if (**(int **)&prVar7->u != 1) {
              return -1;
            }
            if (*(int *)&(prVar7->u).field_0x8 != 0x28) {
              return -1;
            }
            uVar2 = *(undefined8 *)(*(long *)&prVar7->u + 8);
            iVar8 = nonimmediate_operand(uVar2,0x50);
            if (iVar8 == 0) {
              return -1;
            }
            uVar3 = *(undefined8 *)&(x1->u).field_0x8;
            _GLOBAL_OFFSET_TABLE_ = (rtx)uVar2;
            iVar8 = const0_operand(uVar3,0x3d);
            if (iVar8 == 0) {
              return -1;
            }
            if ((ix86_isa_flags & 0x20000) == 0) {
              _register_operand = uVar3;
              return -1;
            }
            _register_operand = uVar3;
            return 0x485;
          }
          if (uVar1 != 0x25) {
            return -1;
          }
        }
        iVar8 = register_operand(prVar7,0x3d);
        if (iVar8 != 0) {
          uVar2 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar8 = nonimmediate_operand(uVar2,0x3d);
          if (iVar8 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar2;
              return 0x5d1;
            }
            _register_operand = uVar2;
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x5d2;
            }
          }
        }
      }
    }
    break;
  case 0x7e:
    prVar7 = *(rtx *)&x1->u;
    iVar8 = register_operand(prVar7,0x10);
    if (iVar8 != 0) {
      if ((ix86_isa_flags & 0x20) != 0) {
        _GLOBAL_OFFSET_TABLE_ = prVar7;
        return 0x5c8;
      }
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      if ((ix86_isa_flags & 0x10000) != 0) {
        return 0x5c9;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_14(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  rtx prVar4;
  short *psVar5;
  rtx prVar6;
  int iVar7;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x1;
  rtx x4;
  rtx x5;
  
  puVar2 = *(undefined2 **)&(x0->u).field_0x8;
  switch(*puVar2) {
  case 0x12:
    if ((**(int **)(puVar2 + 4) == 2) && (*(int *)(puVar2 + 8) == 0x2e)) {
      prVar6 = *(rtx *)(*(long *)(puVar2 + 4) + 8);
      iVar7 = register_operand(prVar6,0x3f);
      if (iVar7 != 0) {
        uVar3 = *(undefined8 *)(*(long *)(puVar2 + 4) + 0x10);
        _GLOBAL_OFFSET_TABLE_ = prVar6;
        iVar7 = nonimmediate_operand(uVar3,0x3f);
        if (iVar7 != 0) {
          if ((ix86_isa_flags & 0x20) != 0) {
            _register_operand = uVar3;
            return 0x5d9;
          }
          _register_operand = uVar3;
          if ((ix86_isa_flags & 0x20000) != 0) {
            return 0x5da;
          }
        }
      }
    }
    break;
  case 0x31:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = nonimmediate_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonimmediate_operand(uVar3,0x42);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x31,0x42,&recog_data), iVar7 != 0)) {
          return 0x4f5;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x31,0x42,&recog_data), iVar7 != 0)) {
          return 0x4fd;
        }
      }
    }
    break;
  case 0x32:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = nonimmediate_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonimmediate_operand(uVar3,0x42);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x32,0x42,&recog_data), iVar7 != 0)) {
          return 0x4f6;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x32,0x42,&recog_data), iVar7 != 0)) {
          return 0x4fe;
        }
      }
    }
    break;
  case 0x34:
    prVar6 = *(rtx *)(puVar2 + 4);
    if (prVar6->field_0x2 == 'B') {
      uVar1 = *(ushort *)prVar6;
      if (uVar1 == 99) {
        psVar5 = *(short **)&prVar6->u;
        if ((*(char *)(psVar5 + 1) == '=') && (*psVar5 == 0x7c)) {
          prVar6 = *(rtx *)(psVar5 + 4);
          iVar7 = nonimmediate_operand(prVar6,0x41);
          if (((iVar7 != 0) &&
              (((((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar6, *psVar5 == 0xf
                  && (**(int **)(psVar5 + 4) == 2)) &&
                 (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                ((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                 (psVar5 = *(short **)(puVar2 + 8), *(char *)(psVar5 + 1) == 'B')))) &&
               (*psVar5 == 99)))) &&
             ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '=' && (*psVar5 == 0x7c)))
             ) {
            uVar3 = *(undefined8 *)(psVar5 + 4);
            iVar7 = nonimmediate_operand(uVar3,0x41);
            if ((iVar7 != 0) &&
               ((((psVar5 = *(short **)(psVar5 + 8), _register_operand = uVar3, *psVar5 == 0xf &&
                  (**(int **)(psVar5 + 4) == 2)) &&
                 (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                ((**(short **)(*(long *)(psVar5 + 4) + 0x10) == 0x1e &&
                 (*(long *)(*(short **)(*(long *)(psVar5 + 4) + 0x10) + 4) == 2)))))) {
              if (((ix86_isa_flags & 0x20) != 0) &&
                 (iVar7 = ix86_binary_operator_ok(0x34,0x41,&recog_data), iVar7 != 0)) {
                return 0x516;
              }
              if (((ix86_isa_flags & 0x20000) != 0) &&
                 (iVar7 = ix86_binary_operator_ok(0x34,0x41,&recog_data), iVar7 != 0)) {
                return 0x517;
              }
            }
          }
        }
      }
      else if (uVar1 < 100) {
        if (uVar1 == 0x62) {
          psVar5 = *(short **)&prVar6->u;
          if ((*(char *)(psVar5 + 1) == '=') && (*psVar5 == 0x7c)) {
            prVar6 = *(rtx *)(psVar5 + 4);
            iVar7 = nonimmediate_operand(prVar6,0x41);
            if ((((iVar7 != 0) &&
                 (((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar6, *psVar5 == 0xf
                   && (**(int **)(psVar5 + 4) == 2)) &&
                  (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)))) &&
                (((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                  (psVar5 = *(short **)(puVar2 + 8), *(char *)(psVar5 + 1) == 'B')) &&
                 (*psVar5 == 0x62)))) &&
               ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '=' && (*psVar5 == 0x7c)
                ))) {
              uVar3 = *(undefined8 *)(psVar5 + 4);
              iVar7 = nonimmediate_operand(uVar3,0x41);
              if ((iVar7 != 0) &&
                 ((((psVar5 = *(short **)(psVar5 + 8), _register_operand = uVar3, *psVar5 == 0xf &&
                    (**(int **)(psVar5 + 4) == 2)) &&
                   (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                  ((**(short **)(*(long *)(psVar5 + 4) + 0x10) == 0x1e &&
                   (*(long *)(*(short **)(*(long *)(psVar5 + 4) + 0x10) + 4) == 2)))))) {
                if (((ix86_isa_flags & 0x20) != 0) &&
                   (iVar7 = ix86_binary_operator_ok(0x34,0x41,&recog_data), iVar7 != 0)) {
                  return 0x518;
                }
                if (((ix86_isa_flags & 0x80000) != 0) &&
                   (iVar7 = ix86_binary_operator_ok(0x34,0x41,&recog_data), iVar7 != 0)) {
                  return 0x519;
                }
              }
            }
          }
        }
        else if ((uVar1 < 99) &&
                (((uVar1 == 0x25 || (uVar1 == 0x27)) &&
                 (iVar7 = register_operand(prVar6,0x42), iVar7 != 0)))) {
          uVar3 = *(undefined8 *)(puVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar6;
          iVar7 = register_operand(uVar3,0x42);
          if ((((iVar7 != 0) && (_register_operand = uVar3, (ix86_isa_flags & 0x20000) != 0)) &&
              (reload_in_progress == 0)) && (reload_completed == 0)) {
            return 0x51f;
          }
        }
      }
    }
    break;
  case 0x3d:
    prVar6 = *(rtx *)(puVar2 + 4);
    if (prVar6->field_0x2 == 'B') {
      if (*(ushort *)prVar6 == 0x40) {
        prVar6 = *(rtx *)&prVar6->u;
        iVar7 = register_operand(prVar6,0x42);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar6;
          iVar7 = nonimmediate_operand(uVar3,0x42);
          if (iVar7 != 0) {
            if (((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) {
              _register_operand = uVar3;
              return 0x563;
            }
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar3;
              return 0x567;
            }
            _register_operand = uVar3;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x56b;
            }
          }
        }
      }
      else {
        iVar7 = nonimmediate_operand(prVar6,0x42);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar6;
          iVar7 = nonimmediate_operand(uVar3,0x42);
          if (iVar7 != 0) {
            _register_operand = uVar3;
            if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
               (iVar7 = ix86_binary_operator_ok(0x3d,0x42,&recog_data), iVar7 != 0)) {
              return 0x582;
            }
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar7 = ix86_binary_operator_ok(0x3d,0x42,&recog_data), iVar7 != 0)) {
              return 0x58e;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar7 = ix86_binary_operator_ok(0x3d,0x42,&recog_data), iVar7 != 0)) {
              return 0x59a;
            }
          }
        }
      }
    }
    break;
  case 0x3e:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = nonimmediate_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonimmediate_operand(uVar3,0x42);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar7 = ix86_binary_operator_ok(0x3e,0x42,&recog_data), iVar7 != 0)) {
          return 0x583;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3e,0x42,&recog_data), iVar7 != 0)) {
          return 0x58f;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3e,0x42,&recog_data), iVar7 != 0)) {
          return 0x59b;
        }
      }
    }
    break;
  case 0x3f:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = nonimmediate_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonimmediate_operand(uVar3,0x42);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if ((((ix86_isa_flags & 0x10000) != 0) && ((ix86_isa_flags & 0x20000) == 0)) &&
           (iVar7 = ix86_binary_operator_ok(0x3f,0x42,&recog_data), iVar7 != 0)) {
          return 0x584;
        }
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3f,0x42,&recog_data), iVar7 != 0)) {
          return 0x590;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x3f,0x42,&recog_data), iVar7 != 0)) {
          return 0x59c;
        }
      }
    }
    break;
  case 0x41:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = register_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonmemory_operand(uVar3,0x10);
      if (iVar7 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar3;
          return 0x52f;
        }
        _register_operand = uVar3;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x533;
        }
      }
    }
    break;
  case 0x44:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = register_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonmemory_operand(uVar3,0x10);
      if (iVar7 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar3;
          return 0x527;
        }
        _register_operand = uVar3;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x52b;
        }
      }
    }
    break;
  case 0x51:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = nonimmediate_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonimmediate_operand(uVar3,0x42);
      if (iVar7 != 0) {
        _register_operand = uVar3;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x51,0x42,&recog_data), iVar7 != 0)) {
          return 0x54f;
        }
        if (((ix86_isa_flags & 0x80000) != 0) &&
           (iVar7 = ix86_binary_operator_ok(0x51,0x42,&recog_data), iVar7 != 0)) {
          return 0x553;
        }
      }
    }
    break;
  case 0x53:
    prVar6 = *(rtx *)(puVar2 + 4);
    iVar7 = register_operand(prVar6,0x42);
    if (iVar7 != 0) {
      uVar3 = *(undefined8 *)(puVar2 + 8);
      _GLOBAL_OFFSET_TABLE_ = prVar6;
      iVar7 = nonimmediate_operand(uVar3,0x42);
      if (iVar7 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar3;
          return 0x557;
        }
        _register_operand = uVar3;
        if ((ix86_isa_flags & 0x100000) != 0) {
          return 0x55b;
        }
      }
    }
    break;
  case 0x7c:
    psVar5 = *(short **)(puVar2 + 4);
    if ((*(char *)(psVar5 + 1) == 'G') && (*psVar5 == 0x7d)) {
      prVar6 = *(rtx *)(psVar5 + 4);
      iVar7 = register_operand(prVar6,0x42);
      if (iVar7 != 0) {
        uVar3 = *(undefined8 *)(psVar5 + 8);
        _GLOBAL_OFFSET_TABLE_ = prVar6;
        iVar7 = nonimmediate_operand(uVar3,0x42);
        if ((((iVar7 != 0) &&
             (psVar5 = *(short **)(puVar2 + 8), _register_operand = uVar3, *psVar5 == 0xf)) &&
            (**(int **)(psVar5 + 4) == 2)) &&
           (x3 = *(rtx *)(*(long *)(psVar5 + 4) + 8), *(short *)x3 == 0x1e)) {
          if ((long)(int)*(undefined8 *)&x3->u == *(long *)&x3->u) {
            iVar7 = (int)*(undefined8 *)&x3->u;
            if (iVar7 == 0) {
              if (**(short **)(*(long *)(psVar5 + 4) + 0x10) == 0x1e) {
                if (*(long *)(*(short **)(*(long *)(psVar5 + 4) + 0x10) + 4) == 2) {
                  if ((ix86_isa_flags & 0x20) != 0) {
                    return 0x4d9;
                  }
                  if ((ix86_isa_flags & 0x20000) != 0) {
                    return 0x4da;
                  }
                  x3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
                }
                else {
                  x3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
                }
              }
              else {
                x3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
              }
            }
            else if (iVar7 == 1) {
              if (**(short **)(*(long *)(psVar5 + 4) + 0x10) == 0x1e) {
                if (*(long *)(*(short **)(*(long *)(psVar5 + 4) + 0x10) + 4) == 3) {
                  if ((ix86_isa_flags & 0x20) != 0) {
                    return 0x4d7;
                  }
                  if ((ix86_isa_flags & 0x20000) != 0) {
                    return 0x4d8;
                  }
                  x3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
                }
                else {
                  x3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
                }
              }
              else {
                x3 = *(rtx *)(*(long *)(psVar5 + 4) + 8);
              }
            }
          }
          iVar7 = const_0_to_1_operand(x3,0);
          if (iVar7 != 0) {
            _nonimmediate_operand = x3;
            uVar3 = *(undefined8 *)(*(long *)(psVar5 + 4) + 0x10);
            iVar7 = const_2_to_3_operand(uVar3,0);
            if (iVar7 != 0) {
              if ((ix86_isa_flags & 0x20) != 0) {
                _memory_operand = uVar3;
                return 0x4dc;
              }
              _memory_operand = uVar3;
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x4de;
              }
            }
          }
        }
      }
    }
    break;
  case 0x7d:
    prVar6 = *(rtx *)(puVar2 + 4);
    if (prVar6->field_0x2 == '\x11') {
      if (*(ushort *)prVar6 == 0x7c) {
        prVar4 = *(rtx *)&prVar6->u;
        iVar7 = nonimmediate_operand(prVar4,0x42);
        if (((((iVar7 != 0) &&
              (psVar5 = *(short **)&(prVar6->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar4,
              *psVar5 == 0xf)) && (**(int **)(psVar5 + 4) == 1)) &&
            ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
             (*(long *)(puVar2 + 8) == _q_regs_operand)))) && ((ix86_isa_flags & 0x20000) != 0)) {
          return 0x35a;
        }
      }
      else {
        iVar7 = nonimmediate_operand(prVar6,0x11);
        if (iVar7 != 0) {
          uVar3 = *(undefined8 *)(puVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar6;
          iVar7 = vector_move_operand(uVar3,0x11);
          if (iVar7 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar3;
              return 0x5d3;
            }
            _register_operand = uVar3;
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x5d4;
            }
          }
        }
      }
    }
    break;
  case 0x7e:
    prVar6 = *(rtx *)(puVar2 + 4);
    if (prVar6->field_0x2 == '\x11') {
      iVar7 = nonimmediate_operand(prVar6,0x11);
      x2 = prVar6;
      if (iVar7 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _GLOBAL_OFFSET_TABLE_ = prVar6;
          return 0x5ca;
        }
        if ((ix86_isa_flags & 0x40000) != 0) {
          _GLOBAL_OFFSET_TABLE_ = prVar6;
          return 0x5cb;
        }
        x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 8);
        _GLOBAL_OFFSET_TABLE_ = prVar6;
      }
      iVar7 = register_operand(x2,0x11);
      if ((iVar7 != 0) && (_GLOBAL_OFFSET_TABLE_ = x2, (ix86_isa_flags & 0x10000) != 0)) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        return 0x5cc;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_15(rtx x0,rtx insn,int *pnum_clobbers)

{
  long lVar1;
  undefined8 uVar2;
  short *psVar3;
  rtx prVar4;
  rtx prVar5;
  undefined8 uVar6;
  int iVar7;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x1;
  rtx x4;
  rtx x5;
  
  lVar1 = *(long *)&(x0->u).field_0x8;
  x2 = *(rtx *)(lVar1 + 8);
  switch(*(short *)x2) {
  case 0x12:
    if (**(int **)&x2->u == 1) {
      iVar7 = *(int *)&(x2->u).field_0x8;
      if (iVar7 == 0x2d) {
        prVar4 = *(rtx *)(*(long *)&x2->u + 8);
        iVar7 = nonimmediate_operand(prVar4,0x4f);
        if (iVar7 != 0) {
          prVar5 = *(rtx *)(lVar1 + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar7 = register_operand(prVar5,0x4f);
          if (((iVar7 != 0) && (_register_operand = prVar5, **(short **)(lVar1 + 0x18) == 0x1e)) &&
             (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x399;
            }
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x39a;
            }
          }
        }
      }
      else if (iVar7 == 0x2e) {
        prVar4 = *(rtx *)(*(long *)&x2->u + 8);
        iVar7 = nonimmediate_operand(prVar4,0x4f);
        if (iVar7 != 0) {
          prVar5 = *(rtx *)(lVar1 + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar4;
          iVar7 = register_operand(prVar5,0x4f);
          if (((iVar7 != 0) && (_register_operand = prVar5, **(short **)(lVar1 + 0x18) == 0x1e)) &&
             (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x3a5;
            }
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x3a6;
            }
          }
        }
      }
    }
    else if ((**(int **)&x2->u == 3) && (*(int *)&(x2->u).field_0x8 == 0xa6)) {
      prVar4 = *(rtx *)(*(long *)&x2->u + 8);
      iVar7 = register_operand(prVar4,0x4f);
      if (iVar7 != 0) {
        prVar5 = *(rtx *)(*(long *)&x2->u + 0x10);
        _GLOBAL_OFFSET_TABLE_ = prVar4;
        iVar7 = nonimmediate_operand(prVar5,0x4f);
        if (iVar7 != 0) {
          prVar4 = *(rtx *)(*(long *)&x2->u + 0x18);
          _register_operand = prVar5;
          iVar7 = const_0_to_31_operand(prVar4,0x10);
          if (((iVar7 != 0) &&
              (_nonimmediate_operand = prVar4,
              iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar7 != 0))
             && ((*(long *)(lVar1 + 0x18) == _bt_comparison_operator &&
                 ((ix86_isa_flags & 0x20) != 0)))) {
            return 0x3e9;
          }
        }
      }
    }
    break;
  case 0x25:
  case 0x27:
    goto L22975;
  case 0x31:
    psVar3 = *(short **)&x2->u;
    if (*(char *)(psVar3 + 1) != 'O') {
      return -1;
    }
    if (*psVar3 != 0x34) {
      iVar7 = register_operand(psVar3,0x4f);
      if (iVar7 == 0) {
        return -1;
      }
      uVar2 = *(undefined8 *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = (rtx)psVar3;
      iVar7 = nonimmediate_operand(uVar2,0x4f);
      if (iVar7 == 0) {
        return -1;
      }
      x2 = *(rtx *)(lVar1 + 0x10);
      _register_operand = (rtx)uVar2;
      if (((x2->field_0x2 == 'O') && (*(short *)x2 == 0x32)) &&
         ((iVar7 = rtx_equal_p(*(undefined8 *)&x2->u,_GLOBAL_OFFSET_TABLE_), iVar7 != 0 &&
          (iVar7 = rtx_equal_p(*(undefined8 *)&(x2->u).field_0x8,_register_operand), iVar7 != 0))))
      {
        if (**(short **)(lVar1 + 0x18) == 0x1e) {
          if (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 10) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x3d5;
            }
            if ((ix86_isa_flags & 0x40000) != 0) {
              return 0x3d6;
            }
            x2 = *(rtx *)(lVar1 + 0x10);
          }
          else {
            x2 = *(rtx *)(lVar1 + 0x10);
          }
        }
        else {
          x2 = *(rtx *)(lVar1 + 0x10);
        }
      }
      iVar7 = rtx_equal_p(x2,_GLOBAL_OFFSET_TABLE_);
      if (iVar7 == 0) {
        return -1;
      }
      if (**(short **)(lVar1 + 0x18) != 0x1e) {
        return -1;
      }
      if (*(long *)(*(short **)(lVar1 + 0x18) + 4) != 1) {
        return -1;
      }
      if ((ix86_isa_flags & 0x20) == 0) {
        if ((ix86_isa_flags & 0x10000) == 0) {
          return -1;
        }
        return 0x37d;
      }
      return 0x379;
    }
    prVar4 = *(rtx *)(psVar3 + 4);
    iVar7 = nonimmediate_operand(prVar4,0x4f);
    if (iVar7 == 0) {
      return -1;
    }
    prVar5 = *(rtx *)(psVar3 + 8);
    _GLOBAL_OFFSET_TABLE_ = prVar4;
    iVar7 = nonimmediate_operand(prVar5,0x4f);
    if (iVar7 == 0) {
      return -1;
    }
    prVar4 = *(rtx *)&(x2->u).field_0x8;
    _register_operand = prVar5;
    iVar7 = nonimmediate_operand(prVar4,0x4f);
    if (iVar7 == 0) {
      return -1;
    }
    x2 = *(rtx *)(lVar1 + 0x10);
    _nonimmediate_operand = prVar4;
    if ((((((x2->field_0x2 == 'O') && (*(short *)x2 == 0x32)) &&
          (psVar3 = *(short **)&x2->u, *(char *)(psVar3 + 1) == 'O')) &&
         ((*psVar3 == 0x34 &&
          (iVar7 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_GLOBAL_OFFSET_TABLE_), iVar7 != 0)))) &&
        (iVar7 = rtx_equal_p(*(undefined8 *)(psVar3 + 8),_register_operand), iVar7 != 0)) &&
       (iVar7 = rtx_equal_p(*(undefined8 *)&(x2->u).field_0x8,_nonimmediate_operand), iVar7 != 0)) {
      psVar3 = *(short **)(lVar1 + 0x18);
      if (*psVar3 == 0x1e) {
        if ((long)(int)*(undefined8 *)(psVar3 + 4) == *(long *)(psVar3 + 4)) {
          if ((int)*(undefined8 *)(psVar3 + 4) == 5) {
            if (((ix86_isa_flags & 0x200) != 0) && ((target_flags & 0x40) != 0)) {
              return 0x45f;
            }
            x2 = *(rtx *)(lVar1 + 0x10);
          }
          else {
            if ((int)*(undefined8 *)(psVar3 + 4) != 10) goto LAB_0011c50e;
            if (((ix86_isa_flags & 0x200) != 0) && ((target_flags & 0x40) != 0)) {
              return 0x45b;
            }
            x2 = *(rtx *)(lVar1 + 0x10);
          }
        }
        else {
LAB_0011c50e:
          x2 = *(rtx *)(lVar1 + 0x10);
        }
      }
      else {
        x2 = *(rtx *)(lVar1 + 0x10);
      }
    }
    iVar7 = rtx_equal_p(x2,recog_data);
    if ((((iVar7 != 0) && (*(long *)(lVar1 + 0x18) == _bt_comparison_operator)) &&
        ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)) {
      return 0x42d;
    }
    break;
  case 0x32:
    x3 = *(rtx *)&x2->u;
    if (x3->field_0x2 == 'O') {
      if (*(short *)x3 == 0x34) {
        prVar4 = *(rtx *)&x3->u;
        if (prVar4->field_0x2 == 'O') {
          if (*(short *)prVar4 == 0x33) {
            prVar4 = *(rtx *)&prVar4->u;
            iVar7 = nonimmediate_operand(prVar4,0x4f);
            if (iVar7 != 0) {
              prVar5 = *(rtx *)&(x3->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar4;
              iVar7 = nonimmediate_operand(prVar5,0x4f);
              if (iVar7 != 0) {
                prVar4 = *(rtx *)&(x2->u).field_0x8;
                _register_operand = prVar5;
                iVar7 = nonimmediate_operand(prVar4,0x4f);
                if (((iVar7 != 0) &&
                    (_nonimmediate_operand = prVar4,
                    iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),recog_data), iVar7 != 0)) &&
                   ((*(long *)(lVar1 + 0x18) == _bt_comparison_operator &&
                    (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))))) {
                  return 0x43f;
                }
              }
            }
          }
          else {
            iVar7 = nonimmediate_operand(prVar4,0x4f);
            if (iVar7 != 0) {
              prVar5 = *(rtx *)&(x3->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar4;
              iVar7 = nonimmediate_operand(prVar5,0x4f);
              if (iVar7 != 0) {
                prVar4 = *(rtx *)&(x2->u).field_0x8;
                _register_operand = prVar5;
                iVar7 = nonimmediate_operand(prVar4,0x4f);
                if ((((iVar7 != 0) &&
                     (_nonimmediate_operand = prVar4,
                     iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),recog_data), iVar7 != 0)) &&
                    (*(long *)(lVar1 + 0x18) == _bt_comparison_operator)) &&
                   (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))) {
                  return 0x433;
                }
              }
            }
          }
        }
      }
      else {
        iVar7 = register_operand(x3,0x4f);
        if (iVar7 != 0) {
          prVar4 = *(rtx *)&(x2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x3;
          iVar7 = nonimmediate_operand(prVar4,0x4f);
          if (iVar7 == 0) {
            x3 = *(rtx *)&x2->u;
          }
          else {
            _register_operand = prVar4;
            iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_);
            if (iVar7 == 0) {
              x2 = *(rtx *)(lVar1 + 8);
              x3 = *(rtx *)&x2->u;
            }
            else if (**(short **)(lVar1 + 0x18) == 0x1e) {
              if (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1) {
                if ((ix86_isa_flags & 0x20) != 0) {
                  return 0x37a;
                }
                if ((ix86_isa_flags & 0x10000) != 0) {
                  return 0x37e;
                }
                x2 = *(rtx *)(lVar1 + 8);
                x3 = *(rtx *)&x2->u;
              }
              else {
                x2 = *(rtx *)(lVar1 + 8);
                x3 = *(rtx *)&x2->u;
              }
            }
            else {
              x2 = *(rtx *)(lVar1 + 8);
              x3 = *(rtx *)&x2->u;
            }
          }
        }
        iVar7 = nonimmediate_operand(x3,0x4f);
        if (iVar7 != 0) {
          _nonimmediate_operand = x3;
          psVar3 = *(short **)&(x2->u).field_0x8;
          if ((*(char *)(psVar3 + 1) == 'O') && (*psVar3 == 0x34)) {
            prVar4 = *(rtx *)(psVar3 + 4);
            iVar7 = nonimmediate_operand(prVar4,0x4f);
            if (iVar7 != 0) {
              prVar5 = *(rtx *)(psVar3 + 8);
              _GLOBAL_OFFSET_TABLE_ = prVar4;
              iVar7 = nonimmediate_operand(prVar5,0x4f);
              if ((((iVar7 != 0) &&
                   (_register_operand = prVar5,
                   iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),recog_data), iVar7 != 0)) &&
                  (*(long *)(lVar1 + 0x18) == _bt_comparison_operator)) &&
                 (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))) {
                return 0x439;
              }
            }
          }
        }
      }
    }
    break;
  case 0x34:
    prVar4 = *(rtx *)&x2->u;
    iVar7 = register_operand(prVar4,0x4f);
    if (iVar7 != 0) {
      prVar5 = *(rtx *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar4;
      iVar7 = nonimmediate_operand(prVar5,0x4f);
      if (((iVar7 != 0) &&
          (_register_operand = prVar5,
          iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar7 != 0)) &&
         ((**(short **)(lVar1 + 0x18) == 0x1e && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x387;
        }
        if ((ix86_isa_flags & 0x10000) != 0) {
          return 0x389;
        }
      }
    }
    break;
  case 0x37:
    prVar4 = *(rtx *)&x2->u;
    iVar7 = register_operand(prVar4,0x4f);
    if (iVar7 != 0) {
      prVar5 = *(rtx *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar4;
      iVar7 = nonimmediate_operand(prVar5,0x4f);
      if ((((iVar7 != 0) &&
           (_register_operand = prVar5,
           iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar7 != 0)) &&
          (**(short **)(lVar1 + 0x18) == 0x1e)) && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x393;
        }
        if ((ix86_isa_flags & 0x10000) != 0) {
          return 0x395;
        }
      }
    }
    break;
  case 0x46:
    prVar4 = *(rtx *)&x2->u;
    iVar7 = register_operand(prVar4,0x4f);
    if (iVar7 != 0) {
      prVar5 = *(rtx *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar4;
      iVar7 = nonimmediate_operand(prVar5,0x4f);
      if (((iVar7 != 0) &&
          (_register_operand = prVar5,
          iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar7 != 0)) &&
         ((**(short **)(lVar1 + 0x18) == 0x1e && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x3c0;
        }
        if ((ix86_isa_flags & 0x10000) != 0) {
          return 0x3c4;
        }
      }
    }
    break;
  case 0x47:
    prVar4 = *(rtx *)&x2->u;
    iVar7 = register_operand(prVar4,0x4f);
    if (iVar7 != 0) {
      prVar5 = *(rtx *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar4;
      iVar7 = nonimmediate_operand(prVar5,0x4f);
      if (((iVar7 != 0) &&
          (_register_operand = prVar5,
          iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar7 != 0)) &&
         ((**(short **)(lVar1 + 0x18) == 0x1e && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x3bf;
        }
        if ((ix86_isa_flags & 0x10000) != 0) {
          return 0x3c3;
        }
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x54:
  case 0x55:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
    iVar7 = sse_comparison_operator(x2,0x4f);
    if (iVar7 != 0) {
      uVar2 = *(undefined8 *)&x2->u;
      _nonimmediate_operand = x2;
      iVar7 = register_operand(uVar2,0x4f);
      if (iVar7 == 0) {
        return -1;
      }
      uVar6 = *(undefined8 *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar2;
      iVar7 = nonimmediate_operand(uVar6,0x4f);
      if (iVar7 == 0) {
        return -1;
      }
      _register_operand = (rtx)uVar6;
      iVar7 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_);
      if (iVar7 == 0) {
        return -1;
      }
      if (*(long *)(lVar1 + 0x18) != _bt_comparison_operator) {
        return -1;
      }
      if ((ix86_isa_flags & 0x10000) == 0) {
        return -1;
      }
      return 0x3f3;
    }
L22975:
    iVar7 = register_operand(x2,0x4f);
    if (iVar7 != 0) {
      prVar4 = *(rtx *)(lVar1 + 0x10);
      _register_operand = x2;
      iVar7 = register_operand(prVar4,0x4f);
      if (((iVar7 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar4, **(short **)(lVar1 + 0x18) == 0x1e)) &&
         (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x4aa;
        }
        if ((ix86_isa_flags & 0x10000) != 0) {
          return 0x4ab;
        }
      }
    }
    break;
  case 0x70:
    prVar4 = *(rtx *)&x2->u;
    iVar7 = nonimmediate_operand(prVar4,0x4f);
    if (iVar7 != 0) {
      prVar5 = *(rtx *)(lVar1 + 0x10);
      _GLOBAL_OFFSET_TABLE_ = prVar4;
      iVar7 = register_operand(prVar5,0x4f);
      if (((iVar7 != 0) && (_register_operand = prVar5, **(short **)(lVar1 + 0x18) == 0x1e)) &&
         (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x39f;
        }
        if ((ix86_isa_flags & 0x10000) != 0) {
          return 0x3a1;
        }
      }
    }
    break;
  case 0x7e:
    prVar4 = *(rtx *)&x2->u;
    if (prVar4->field_0x2 == '&') {
      if (*(short *)prVar4 == 0x67) {
        prVar4 = *(rtx *)&prVar4->u;
        iVar7 = nonimmediate_operand(prVar4,0x10);
        if (iVar7 != 0) {
          prVar5 = *(rtx *)(lVar1 + 0x10);
          _register_operand = prVar4;
          iVar7 = register_operand(prVar5,0x4f);
          if (((iVar7 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar5, **(short **)(lVar1 + 0x18) == 0x1e))
             && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x46c;
            }
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x46d;
            }
          }
        }
      }
      else {
        iVar7 = nonimmediate_operand(prVar4,0x26);
        if (iVar7 != 0) {
          prVar5 = *(rtx *)(lVar1 + 0x10);
          _register_operand = prVar4;
          iVar7 = register_operand(prVar5,0x4f);
          if (iVar7 != 0) {
            prVar4 = *(rtx *)(lVar1 + 0x18);
            _GLOBAL_OFFSET_TABLE_ = prVar5;
            iVar7 = const_pow2_1_to_8_operand(prVar4,0x10);
            if (iVar7 != 0) {
              if ((ix86_isa_flags & 0x20) != 0) {
                _nonimmediate_operand = prVar4;
                return 0x4bb;
              }
              _nonimmediate_operand = prVar4;
              if ((ix86_isa_flags & 0x80000) != 0) {
                return 0x4bc;
              }
            }
          }
        }
      }
    }
    else if (prVar4->field_0x2 == 'N') {
      if (*(short *)prVar4 == 0x66) {
        prVar4 = *(rtx *)&prVar4->u;
        iVar7 = nonimmediate_operand(prVar4,0x50);
        if (iVar7 != 0) {
          prVar5 = *(rtx *)(lVar1 + 0x10);
          _register_operand = prVar4;
          iVar7 = register_operand(prVar5,0x4f);
          if (((iVar7 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar5, **(short **)(lVar1 + 0x18) == 0x1e))
             && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x488;
            }
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x489;
            }
          }
        }
      }
      else if (*(short *)prVar4 == 0x67) {
        prVar4 = *(rtx *)&prVar4->u;
        iVar7 = nonimmediate_operand(prVar4,0x3d);
        if (iVar7 != 0) {
          prVar5 = *(rtx *)(lVar1 + 0x10);
          _register_operand = prVar4;
          iVar7 = register_operand(prVar5,0x4f);
          if (((iVar7 != 0) &&
              (_GLOBAL_OFFSET_TABLE_ = prVar5, *(long *)(lVar1 + 0x18) == _swap_condition)) &&
             ((ix86_isa_flags & 0x10000) != 0)) {
            return 0x469;
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_16(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  ushort *puVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  rtx prVar9;
  int iVar10;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x4;
  rtx x5;
  rtx x6;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  switch(*(undefined2 *)x1) {
  case 0x12:
    iVar10 = **(int **)&x1->u;
    if (iVar10 == 3) {
      iVar10 = *(int *)&(x1->u).field_0x8;
      if (iVar10 == 0x87) {
        x2 = *(rtx *)(*(long *)&x1->u + 8);
        if (x2->field_0x2 != 'O') {
          return -1;
        }
        iVar10 = nonimmediate_operand(x2,0x4f);
        if (iVar10 != 0) {
          prVar2 = *(rtx *)(*(long *)&x1->u + 0x10);
          _register_operand = x2;
          iVar10 = register_operand(prVar2,0x4f);
          if (iVar10 == 0) {
            x2 = *(rtx *)(*(long *)&x1->u + 8);
          }
          else {
            prVar9 = *(rtx *)(*(long *)&x1->u + 0x18);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar10 = const_0_to_255_operand(prVar9,0x10);
            if (iVar10 == 0) {
              x2 = *(rtx *)(*(long *)&x1->u + 8);
            }
            else {
              if ((ix86_isa_flags & 0x20) != 0) {
                _nonimmediate_operand = prVar9;
                return 0x4bd;
              }
              x1 = *(rtx *)&(x0->u).field_0x8;
              x2 = *(rtx *)(*(long *)&x1->u + 8);
              _nonimmediate_operand = prVar9;
            }
          }
        }
        iVar10 = register_operand(x2,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        _register_operand = x2;
        uVar7 = *(undefined8 *)(*(long *)&x1->u + 0x10);
        iVar10 = register_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar8 = *(undefined8 *)(*(long *)&x1->u + 0x18);
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        iVar10 = const_0_to_255_operand(uVar8,0x10);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x80000) == 0) {
          _nonimmediate_operand = (rtx)uVar8;
          return -1;
        }
        _nonimmediate_operand = (rtx)uVar8;
        return 0x4be;
      }
      if (iVar10 != 0xa6) {
        return -1;
      }
      uVar7 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar10 = register_operand(uVar7,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      uVar8 = *(undefined8 *)(*(long *)&x1->u + 0x10);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
      iVar10 = nonimmediate_operand(uVar8,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      uVar7 = *(undefined8 *)(*(long *)&x1->u + 0x18);
      _register_operand = (rtx)uVar8;
      iVar10 = const_0_to_31_operand(uVar7,0x10);
      if (iVar10 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x20) == 0) {
        _nonimmediate_operand = (rtx)uVar7;
        return -1;
      }
      _nonimmediate_operand = (rtx)uVar7;
      return 0x3e5;
    }
    if (3 < iVar10) {
      return -1;
    }
    if (iVar10 != 1) {
      if (iVar10 != 2) {
        return -1;
      }
      iVar10 = *(int *)&(x1->u).field_0x8;
      if (iVar10 == 0x33) {
        uVar7 = *(undefined8 *)(*(long *)&x1->u + 8);
        iVar10 = register_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar8 = *(undefined8 *)(*(long *)&x1->u + 0x10);
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        iVar10 = nonimmediate_operand(uVar8,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = (rtx)uVar8;
          return 0x3c7;
        }
        if ((ix86_isa_flags & 0x10000) == 0) {
          _register_operand = (rtx)uVar8;
          return -1;
        }
        _register_operand = (rtx)uVar8;
        return 0x3cf;
      }
      if (iVar10 != 0x34) {
        return -1;
      }
      uVar7 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar10 = register_operand(uVar7,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      uVar8 = *(undefined8 *)(*(long *)&x1->u + 0x10);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
      iVar10 = nonimmediate_operand(uVar8,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x20) == 0) {
        if ((ix86_isa_flags & 0x10000) == 0) {
          _register_operand = (rtx)uVar8;
          return -1;
        }
        _register_operand = (rtx)uVar8;
        return 0x3d1;
      }
      _register_operand = (rtx)uVar8;
      return 0x3cb;
    }
    iVar10 = *(int *)&(x1->u).field_0x8;
    if (iVar10 != 0x96) {
      if (0x96 < iVar10) {
        return -1;
      }
      if (iVar10 == 0x2d) {
        uVar7 = *(undefined8 *)(*(long *)&x1->u + 8);
        iVar10 = nonimmediate_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x10000) == 0) {
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
          return -1;
        }
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        return 0x398;
      }
      if (iVar10 != 0x2e) {
        return -1;
      }
      uVar7 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar10 = nonimmediate_operand(uVar7,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x10000) == 0) {
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        return -1;
      }
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
      return 0x3a4;
    }
    puVar3 = *(ushort **)(*(long *)&x1->u + 8);
    if (*(char *)(puVar3 + 1) != 'O') {
      return -1;
    }
    uVar1 = *puVar3;
    if (uVar1 != 0x7b) {
      if (0x7b < uVar1) {
        return -1;
      }
      if (uVar1 == 0x31) {
        psVar4 = *(short **)(puVar3 + 4);
        if (*(char *)(psVar4 + 1) != 'O') {
          return -1;
        }
        if (*psVar4 != 0x34) {
          return -1;
        }
        uVar7 = *(undefined8 *)(psVar4 + 4);
        iVar10 = nonimmediate_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar8 = *(undefined8 *)(psVar4 + 8);
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        iVar10 = nonimmediate_operand(uVar8,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar7 = *(undefined8 *)(puVar3 + 8);
        _register_operand = (rtx)uVar8;
        iVar10 = nonimmediate_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x200) == 0) {
          _nonimmediate_operand = (rtx)uVar7;
          return -1;
        }
        if ((target_flags & 0x40) == 0) {
          _nonimmediate_operand = (rtx)uVar7;
          return -1;
        }
        _nonimmediate_operand = (rtx)uVar7;
        return 0x449;
      }
      if (uVar1 != 0x32) {
        return -1;
      }
      psVar4 = *(short **)(puVar3 + 4);
      if (*(char *)(psVar4 + 1) != 'O') {
        return -1;
      }
      if (*psVar4 != 0x34) {
        iVar10 = nonimmediate_operand(psVar4,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        psVar5 = *(short **)(puVar3 + 8);
        if (*(char *)(psVar5 + 1) != 'O') {
          _nonimmediate_operand = (rtx)psVar4;
          return -1;
        }
        if (*psVar5 != 0x34) {
          _nonimmediate_operand = (rtx)psVar4;
          return -1;
        }
        uVar7 = *(undefined8 *)(psVar5 + 4);
        _nonimmediate_operand = (rtx)psVar4;
        iVar10 = nonimmediate_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar8 = *(undefined8 *)(psVar5 + 8);
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        iVar10 = nonimmediate_operand(uVar8,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x200) == 0) {
          _register_operand = (rtx)uVar8;
          return -1;
        }
        if ((target_flags & 0x40) == 0) {
          _register_operand = (rtx)uVar8;
          return -1;
        }
        _register_operand = (rtx)uVar8;
        return 0x44d;
      }
      psVar5 = *(short **)(psVar4 + 4);
      if (*(char *)(psVar5 + 1) != 'O') {
        return -1;
      }
      if (*psVar5 == 0x33) {
        uVar7 = *(undefined8 *)(psVar5 + 4);
        iVar10 = nonimmediate_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar8 = *(undefined8 *)(psVar4 + 8);
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
        iVar10 = nonimmediate_operand(uVar8,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar7 = *(undefined8 *)(puVar3 + 8);
        _register_operand = (rtx)uVar8;
        iVar10 = nonimmediate_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x200) == 0) {
          _nonimmediate_operand = (rtx)uVar7;
          return -1;
        }
        if ((target_flags & 0x40) == 0) {
          _nonimmediate_operand = (rtx)uVar7;
          return -1;
        }
        _nonimmediate_operand = (rtx)uVar7;
        return 0x44f;
      }
      iVar10 = nonimmediate_operand(psVar5,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      uVar7 = *(undefined8 *)(psVar4 + 8);
      _GLOBAL_OFFSET_TABLE_ = (rtx)psVar5;
      iVar10 = nonimmediate_operand(uVar7,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      uVar8 = *(undefined8 *)(puVar3 + 8);
      _register_operand = (rtx)uVar7;
      iVar10 = nonimmediate_operand(uVar8,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x200) == 0) {
        _nonimmediate_operand = (rtx)uVar8;
        return -1;
      }
      if ((target_flags & 0x40) == 0) {
        _nonimmediate_operand = (rtx)uVar8;
        return -1;
      }
      _nonimmediate_operand = (rtx)uVar8;
      return 1099;
    }
    psVar4 = *(short **)(puVar3 + 4);
    if (*(char *)(psVar4 + 1) != 'O') {
      return -1;
    }
    if (*psVar4 != 0x31) {
      if (*psVar4 != 0x32) {
        return -1;
      }
      psVar5 = *(short **)(psVar4 + 4);
      if (*(char *)(psVar5 + 1) != 'O') {
        return -1;
      }
      if (*psVar5 == 0x34) {
        psVar6 = *(short **)(psVar5 + 4);
        if (*(char *)(psVar6 + 1) != 'O') {
          return -1;
        }
        if (*psVar6 == 0x33) {
          uVar7 = *(undefined8 *)(psVar6 + 4);
          iVar10 = nonimmediate_operand(uVar7,0x4f);
          if (iVar10 == 0) {
            return -1;
          }
          uVar8 = *(undefined8 *)(psVar5 + 8);
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
          iVar10 = nonimmediate_operand(uVar8,0x4f);
          if (iVar10 == 0) {
            return -1;
          }
          uVar7 = *(undefined8 *)(psVar4 + 8);
          _register_operand = (rtx)uVar8;
          iVar10 = nonimmediate_operand(uVar7,0x4f);
          if (iVar10 == 0) {
            return -1;
          }
          _nonimmediate_operand = (rtx)uVar7;
          iVar10 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),recog_data);
          if (iVar10 == 0) {
            return -1;
          }
          if (*(long *)(puVar3 + 0xc) != _bt_comparison_operator) {
            return -1;
          }
          if ((ix86_isa_flags & 0x200) == 0) {
            return -1;
          }
          if ((target_flags & 0x40) == 0) {
            return -1;
          }
          return 0x457;
        }
        iVar10 = nonimmediate_operand(psVar6,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar7 = *(undefined8 *)(psVar5 + 8);
        _GLOBAL_OFFSET_TABLE_ = (rtx)psVar6;
        iVar10 = nonimmediate_operand(uVar7,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        uVar8 = *(undefined8 *)(psVar4 + 8);
        _register_operand = (rtx)uVar7;
        iVar10 = nonimmediate_operand(uVar8,0x4f);
        if (iVar10 == 0) {
          return -1;
        }
        _nonimmediate_operand = (rtx)uVar8;
        iVar10 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),recog_data);
        if (iVar10 == 0) {
          return -1;
        }
        if (*(long *)(puVar3 + 0xc) != _bt_comparison_operator) {
          return -1;
        }
        if ((ix86_isa_flags & 0x200) == 0) {
          return -1;
        }
        if ((target_flags & 0x40) == 0) {
          return -1;
        }
        return 0x453;
      }
      iVar10 = nonimmediate_operand(psVar5,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      psVar4 = *(short **)(psVar4 + 8);
      if (*(char *)(psVar4 + 1) != 'O') {
        _nonimmediate_operand = (rtx)psVar5;
        return -1;
      }
      if (*psVar4 != 0x34) {
        _nonimmediate_operand = (rtx)psVar5;
        return -1;
      }
      uVar7 = *(undefined8 *)(psVar4 + 4);
      _nonimmediate_operand = (rtx)psVar5;
      iVar10 = nonimmediate_operand(uVar7,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      uVar8 = *(undefined8 *)(psVar4 + 8);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar7;
      iVar10 = nonimmediate_operand(uVar8,0x4f);
      if (iVar10 == 0) {
        return -1;
      }
      _register_operand = (rtx)uVar8;
      iVar10 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),recog_data);
      if (iVar10 == 0) {
        return -1;
      }
      if (*(long *)(puVar3 + 0xc) != _bt_comparison_operator) {
        return -1;
      }
      if ((ix86_isa_flags & 0x200) == 0) {
        return -1;
      }
      if ((target_flags & 0x40) == 0) {
        return -1;
      }
      return 0x455;
    }
    psVar5 = *(short **)(psVar4 + 4);
    if (*(char *)(psVar5 + 1) != 'O') {
      return -1;
    }
    if (*psVar5 != 0x34) {
      return -1;
    }
    prVar2 = *(rtx *)(psVar5 + 4);
    iVar10 = nonimmediate_operand(prVar2,0x4f);
    if (iVar10 == 0) {
      return -1;
    }
    prVar9 = *(rtx *)(psVar5 + 8);
    _GLOBAL_OFFSET_TABLE_ = prVar2;
    iVar10 = nonimmediate_operand(prVar9,0x4f);
    if (iVar10 == 0) {
      return -1;
    }
    prVar2 = *(rtx *)(psVar4 + 8);
    _register_operand = prVar9;
    iVar10 = nonimmediate_operand(prVar2,0x4f);
    if (iVar10 == 0) {
      return -1;
    }
    x3 = *(rtx *)(puVar3 + 8);
    _nonimmediate_operand = prVar2;
    if (((((x3->field_0x2 == 'O') && (*(short *)x3 == 0x32)) &&
         ((psVar4 = *(short **)&x3->u, *(char *)(psVar4 + 1) == 'O' &&
          ((*psVar4 == 0x34 &&
           (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_), iVar10 != 0))))
         )) && (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 8),_register_operand), iVar10 != 0))
       && (iVar10 = rtx_equal_p(*(undefined8 *)&(x3->u).field_0x8,_nonimmediate_operand),
          iVar10 != 0)) {
      psVar4 = *(short **)(puVar3 + 0xc);
      if (*psVar4 == 0x1e) {
        if ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4)) {
          if ((int)*(undefined8 *)(psVar4 + 4) == 5) {
            if (((ix86_isa_flags & 0x200) != 0) && ((target_flags & 0x40) != 0)) {
              return 0x467;
            }
            x3 = *(rtx *)(puVar3 + 8);
          }
          else {
            if ((int)*(undefined8 *)(psVar4 + 4) != 10) goto LAB_0011ee3b;
            if (((ix86_isa_flags & 0x200) != 0) && ((target_flags & 0x40) != 0)) {
              return 0x463;
            }
            x3 = *(rtx *)(puVar3 + 8);
          }
        }
        else {
LAB_0011ee3b:
          x3 = *(rtx *)(puVar3 + 8);
        }
      }
      else {
        x3 = *(rtx *)(puVar3 + 8);
      }
    }
    iVar10 = rtx_equal_p(x3,recog_data);
    if ((((iVar10 != 0) && (*(long *)(puVar3 + 0xc) == _bt_comparison_operator)) &&
        ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)) {
      return 0x451;
    }
    break;
  case 0x31:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == 'O') {
      if (*(ushort *)prVar2 == 0x34) {
        prVar9 = *(rtx *)&prVar2->u;
        iVar10 = nonimmediate_operand(prVar9,0x4f);
        if (iVar10 != 0) {
          prVar2 = *(rtx *)&(prVar2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar9;
          iVar10 = nonimmediate_operand(prVar2,0x4f);
          if (iVar10 != 0) {
            prVar9 = *(rtx *)&(x1->u).field_0x8;
            _register_operand = prVar2;
            iVar10 = nonimmediate_operand(prVar9,0x4f);
            if (((iVar10 != 0) && (_nonimmediate_operand = prVar9, (ix86_isa_flags & 0x200) != 0))
               && ((target_flags & 0x40) != 0)) {
              return 0x42b;
            }
          }
        }
      }
      else {
        iVar10 = nonimmediate_operand(prVar2,0x4f);
        if (iVar10 != 0) {
          prVar9 = *(rtx *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar10 = nonimmediate_operand(prVar9,0x4f);
          if (iVar10 != 0) {
            _register_operand = prVar9;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar10 = ix86_binary_operator_ok(0x31,0x4f,&recog_data), iVar10 != 0)) {
              return 0x36d;
            }
            if (((ix86_isa_flags & 0x10000) != 0) &&
               (iVar10 = ix86_binary_operator_ok(0x31,0x4f,&recog_data), iVar10 != 0)) {
              return 0x375;
            }
          }
        }
      }
    }
    break;
  case 0x32:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'O') {
      if (*(ushort *)x2 == 0x34) {
        prVar2 = *(rtx *)&x2->u;
        if (prVar2->field_0x2 == 'O') {
          if (*(ushort *)prVar2 == 0x33) {
            prVar2 = *(rtx *)&prVar2->u;
            iVar10 = nonimmediate_operand(prVar2,0x4f);
            if (iVar10 != 0) {
              prVar9 = *(rtx *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              iVar10 = nonimmediate_operand(prVar9,0x4f);
              if (iVar10 != 0) {
                prVar2 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = prVar9;
                iVar10 = nonimmediate_operand(prVar2,0x4f);
                if (((iVar10 != 0) &&
                    (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)) &&
                   ((target_flags & 0x40) != 0)) {
                  return 0x43d;
                }
              }
            }
          }
          else {
            iVar10 = nonimmediate_operand(prVar2,0x4f);
            if (iVar10 != 0) {
              prVar9 = *(rtx *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              iVar10 = nonimmediate_operand(prVar9,0x4f);
              if (iVar10 != 0) {
                prVar2 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = prVar9;
                iVar10 = nonimmediate_operand(prVar2,0x4f);
                if (((iVar10 != 0) &&
                    (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)) &&
                   ((target_flags & 0x40) != 0)) {
                  return 0x431;
                }
              }
            }
          }
        }
      }
      else {
        iVar10 = nonimmediate_operand(x2,0x4f);
        if (iVar10 != 0) {
          prVar2 = *(rtx *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x2;
          iVar10 = nonimmediate_operand(prVar2,0x4f);
          if (iVar10 == 0) {
            x2 = *(rtx *)&x1->u;
          }
          else {
            _register_operand = prVar2;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar10 = ix86_binary_operator_ok(0x32,0x4f,&recog_data), iVar10 != 0)) {
              return 0x36e;
            }
            if (((ix86_isa_flags & 0x10000) != 0) &&
               (iVar10 = ix86_binary_operator_ok(0x32,0x4f,&recog_data), iVar10 != 0)) {
              return 0x376;
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&x1->u;
          }
        }
        iVar10 = nonimmediate_operand(x2,0x4f);
        if (iVar10 != 0) {
          _nonimmediate_operand = x2;
          psVar4 = *(short **)&(x1->u).field_0x8;
          if ((*(char *)(psVar4 + 1) == 'O') && (*psVar4 == 0x34)) {
            prVar2 = *(rtx *)(psVar4 + 4);
            iVar10 = nonimmediate_operand(prVar2,0x4f);
            if (iVar10 != 0) {
              prVar9 = *(rtx *)(psVar4 + 8);
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              iVar10 = nonimmediate_operand(prVar9,0x4f);
              if (((iVar10 != 0) && (_register_operand = prVar9, (ix86_isa_flags & 0x200) != 0)) &&
                 ((target_flags & 0x40) != 0)) {
                return 0x437;
              }
            }
          }
        }
      }
    }
    break;
  case 0x34:
    prVar2 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar2,0x4f);
    if (iVar10 != 0) {
      prVar9 = *(rtx *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar10 = nonimmediate_operand(prVar9,0x4f);
      if (iVar10 != 0) {
        _register_operand = prVar9;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar10 = ix86_binary_operator_ok(0x34,0x4f,&recog_data), iVar10 != 0)) {
          return 0x381;
        }
        if (((ix86_isa_flags & 0x10000) != 0) &&
           (iVar10 = ix86_binary_operator_ok(0x34,0x4f,&recog_data), iVar10 != 0)) {
          return 0x385;
        }
      }
    }
    break;
  case 0x37:
    prVar2 = *(rtx *)&x1->u;
    iVar10 = register_operand(prVar2,0x4f);
    if (iVar10 != 0) {
      prVar9 = *(rtx *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar10 = nonimmediate_operand(prVar9,0x4f);
      if (iVar10 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = prVar9;
          return 0x38b;
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = prVar9;
          return 0x38f;
        }
        _register_operand = prVar9;
        if ((ix86_isa_flags & 0x10000) != 0) {
          return 0x391;
        }
      }
    }
    break;
  case 0x3d:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == 'O') {
      if (*(ushort *)prVar2 == 0x40) {
        prVar2 = *(rtx *)&prVar2->u;
        iVar10 = register_operand(prVar2,0x4f);
        if (iVar10 != 0) {
          prVar9 = *(rtx *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar10 = nonimmediate_operand(prVar9,0x4f);
          if (iVar10 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = prVar9;
              return 0x3f9;
            }
            _register_operand = prVar9;
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x3fd;
            }
          }
        }
      }
      else {
        iVar10 = nonimmediate_operand(prVar2,0x4f);
        if (iVar10 != 0) {
          prVar9 = *(rtx *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar10 = nonimmediate_operand(prVar9,0x4f);
          if (iVar10 != 0) {
            _register_operand = prVar9;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar10 = ix86_binary_operator_ok(0x3d,0x4f,&recog_data), iVar10 != 0)) {
              return 0x3ff;
            }
            if (((ix86_isa_flags & 0x10000) != 0) &&
               (iVar10 = ix86_binary_operator_ok(0x3d,0x4f,&recog_data), iVar10 != 0)) {
              return 0x40b;
            }
          }
        }
      }
    }
    break;
  case 0x3e:
    prVar2 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar2,0x4f);
    if (iVar10 != 0) {
      prVar9 = *(rtx *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar10 = nonimmediate_operand(prVar9,0x4f);
      if (iVar10 != 0) {
        _register_operand = prVar9;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar10 = ix86_binary_operator_ok(0x3e,0x4f,&recog_data), iVar10 != 0)) {
          return 0x400;
        }
        if (((ix86_isa_flags & 0x10000) != 0) &&
           (iVar10 = ix86_binary_operator_ok(0x3e,0x4f,&recog_data), iVar10 != 0)) {
          return 0x40c;
        }
      }
    }
    break;
  case 0x3f:
    prVar2 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar2,0x4f);
    if (iVar10 != 0) {
      prVar9 = *(rtx *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar10 = nonimmediate_operand(prVar9,0x4f);
      if (iVar10 != 0) {
        _register_operand = prVar9;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar10 = ix86_binary_operator_ok(0x3f,0x4f,&recog_data), iVar10 != 0)) {
          return 0x401;
        }
        if (((ix86_isa_flags & 0x10000) != 0) &&
           (iVar10 = ix86_binary_operator_ok(0x3f,0x4f,&recog_data), iVar10 != 0)) {
          return 0x40d;
        }
      }
    }
    break;
  case 0x46:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'O') {
      iVar10 = nonimmediate_operand(x2,0x4f);
      if (iVar10 != 0) {
        prVar2 = *(rtx *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = x2;
        iVar10 = nonimmediate_operand(prVar2,0x4f);
        if (iVar10 == 0) {
          x2 = *(rtx *)&x1->u;
        }
        else {
          _register_operand = prVar2;
          if ((((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) &&
             (iVar10 = ix86_binary_operator_ok(0x46,0x4f,&recog_data), iVar10 != 0)) {
            return 0x3a8;
          }
          if ((((ix86_isa_flags & 0x10000) != 0) && (flag_finite_math_only != 0)) &&
             (iVar10 = ix86_binary_operator_ok(0x46,0x4f,&recog_data), iVar10 != 0)) {
            return 0x3b0;
          }
          if ((ix86_isa_flags & 0x20) != 0) {
            return 0x3b4;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          x2 = *(rtx *)&x1->u;
        }
      }
      iVar10 = register_operand(x2,0x4f);
      if (iVar10 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        prVar2 = *(rtx *)&(x1->u).field_0x8;
        iVar10 = nonimmediate_operand(prVar2,0x4f);
        if ((iVar10 != 0) && (_register_operand = prVar2, (ix86_isa_flags & 0x10000) != 0)) {
          return 0x3bc;
        }
      }
    }
    break;
  case 0x47:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'O') {
      iVar10 = nonimmediate_operand(x2,0x4f);
      if (iVar10 != 0) {
        prVar2 = *(rtx *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = x2;
        iVar10 = nonimmediate_operand(prVar2,0x4f);
        if (iVar10 == 0) {
          x2 = *(rtx *)&x1->u;
        }
        else {
          _register_operand = prVar2;
          if ((((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) &&
             (iVar10 = ix86_binary_operator_ok(0x47,0x4f,&recog_data), iVar10 != 0)) {
            return 0x3a7;
          }
          if ((((ix86_isa_flags & 0x10000) != 0) && (flag_finite_math_only != 0)) &&
             (iVar10 = ix86_binary_operator_ok(0x47,0x4f,&recog_data), iVar10 != 0)) {
            return 0x3af;
          }
          if ((ix86_isa_flags & 0x20) != 0) {
            return 0x3b3;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          x2 = *(rtx *)&x1->u;
        }
      }
      iVar10 = register_operand(x2,0x4f);
      if (iVar10 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        prVar2 = *(rtx *)&(x1->u).field_0x8;
        iVar10 = nonimmediate_operand(prVar2,0x4f);
        if ((iVar10 != 0) && (_register_operand = prVar2, (ix86_isa_flags & 0x10000) != 0)) {
          return 0x3bb;
        }
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    iVar10 = avx_comparison_float_operator(x1,0x4f);
    if (iVar10 != 0) {
      prVar2 = *(rtx *)&x1->u;
      _nonimmediate_operand = x1;
      iVar10 = register_operand(prVar2,0x4f);
      if (iVar10 != 0) {
        prVar9 = *(rtx *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar10 = nonimmediate_operand(prVar9,0x4f);
        if (iVar10 != 0) {
          if ((ix86_isa_flags & 0x20) != 0) {
            _register_operand = prVar9;
            return 0x3eb;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          _register_operand = prVar9;
        }
      }
    }
  default:
    iVar10 = sse_comparison_operator(x1,0x4f);
    if (iVar10 != 0) {
      _nonimmediate_operand = x1;
      prVar2 = *(rtx *)&x1->u;
      iVar10 = register_operand(prVar2,0x4f);
      if (iVar10 != 0) {
        prVar9 = *(rtx *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar10 = nonimmediate_operand(prVar9,0x4f);
        if (((iVar10 != 0) && (_register_operand = prVar9, (ix86_isa_flags & 0x800000) == 0)) &&
           ((ix86_isa_flags & 0x10000) != 0)) {
          return 0x3f1;
        }
      }
    }
    break;
  case 0x66:
    prVar2 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar2,0x52);
    if ((iVar10 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 0x20) != 0)) {
      return 0x48c;
    }
    break;
  case 0x67:
    prVar2 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar2,0x41);
    if (iVar10 != 0) {
      if ((ix86_isa_flags & 0x20) != 0) {
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        return 0x471;
      }
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      if ((ix86_isa_flags & 0x20000) != 0) {
        return 0x473;
      }
    }
    break;
  case 0x70:
    prVar2 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar2,0x4f);
    if ((iVar10 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 0x10000) != 0)) {
      return 0x39c;
    }
    break;
  case 0x7b:
    if (*(char *)(*(long *)&x1->u + 2) == 'O') {
      iVar10 = recog_15(x0,insn,pnum_clobbers);
      return iVar10;
    }
    break;
  case 0x7c:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 != 'Q') {
      return -1;
    }
    if (*(short *)x2 != 0x7d) {
      return -1;
    }
    x3 = *(rtx *)&x2->u;
    if (x3->field_0x2 != 'O') {
      return -1;
    }
    iVar10 = register_operand(x3,0x4f);
    if (iVar10 != 0) {
      prVar2 = *(rtx *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = x3;
      iVar10 = nonimmediate_operand(prVar2,0x4f);
      if (iVar10 == 0) {
        x3 = *(rtx *)&x2->u;
      }
      else {
        psVar4 = *(short **)&(x1->u).field_0x8;
        _register_operand = prVar2;
        if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 4)) {
          psVar5 = *(short **)(*(long *)(psVar4 + 4) + 8);
          if (*psVar5 == 0x1e) {
            if ((long)(int)*(undefined8 *)(psVar5 + 4) == *(long *)(psVar5 + 4)) {
              if ((int)*(undefined8 *)(psVar5 + 4) == 0) {
                if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_compare_mode) {
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _bt_comparison_operator) {
                    if (**(short **)(*(long *)(psVar4 + 4) + 0x20) == 0x1e) {
                      if (*(long *)(*(short **)(*(long *)(psVar4 + 4) + 0x20) + 4) == 5) {
                        if ((ix86_isa_flags & 0x20) != 0) {
                          return 0x498;
                        }
                        if ((ix86_isa_flags & 0x10000) != 0) {
                          return 0x499;
                        }
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                      else {
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                    }
                    else {
                      x2 = *(rtx *)&x1->u;
                      x3 = *(rtx *)&x2->u;
                    }
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
                else {
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
              }
              else {
                if ((int)*(undefined8 *)(psVar5 + 4) != 2) goto LAB_00121277;
                if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _index_register_operand) {
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _swap_condition) {
                    if (**(short **)(*(long *)(psVar4 + 4) + 0x20) == 0x1e) {
                      if (*(long *)(*(short **)(*(long *)(psVar4 + 4) + 0x20) + 4) == 7) {
                        if ((ix86_isa_flags & 0x20) != 0) {
                          return 0x495;
                        }
                        if ((ix86_isa_flags & 0x10000) != 0) {
                          return 0x496;
                        }
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                      else {
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                    }
                    else {
                      x2 = *(rtx *)&x1->u;
                      x3 = *(rtx *)&x2->u;
                    }
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
                else {
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
              }
            }
            else {
LAB_00121277:
              x2 = *(rtx *)&x1->u;
              x3 = *(rtx *)&x2->u;
            }
          }
          else {
            x2 = *(rtx *)&x1->u;
            x3 = *(rtx *)&x2->u;
          }
        }
        else {
          x2 = *(rtx *)&x1->u;
          x3 = *(rtx *)&x2->u;
        }
      }
    }
    iVar10 = nonimmediate_operand(x3,0x4f);
    if (iVar10 != 0) {
      _GLOBAL_OFFSET_TABLE_ = x3;
      iVar10 = rtx_equal_p(*(undefined8 *)&(x2->u).field_0x8,x3);
      if (iVar10 == 0) {
        x3 = *(rtx *)&x2->u;
      }
      else {
        psVar4 = *(short **)&(x1->u).field_0x8;
        if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 4)) {
          psVar5 = *(short **)(*(long *)(psVar4 + 4) + 8);
          if (*psVar5 == 0x1e) {
            if ((long)(int)*(undefined8 *)(psVar5 + 4) == *(long *)(psVar5 + 4)) {
              if ((int)*(undefined8 *)(psVar5 + 4) == 0) {
                if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _q_regs_operand) {
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _index_register_operand) {
                    if ((*(long *)(*(long *)(psVar4 + 4) + 0x20) == _index_register_operand) &&
                       ((ix86_isa_flags & 0x40000) != 0)) {
                      return 0x49d;
                    }
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
                else {
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
              }
              else {
                if ((int)*(undefined8 *)(psVar5 + 4) != 1) goto LAB_001215ea;
                if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _bt_comparison_operator) {
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _const248_operand) {
                    if ((*(long *)(*(long *)(psVar4 + 4) + 0x20) == _const248_operand) &&
                       ((ix86_isa_flags & 0x40000) != 0)) {
                      return 0x49b;
                    }
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
                else {
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
              }
            }
            else {
LAB_001215ea:
              x2 = *(rtx *)&x1->u;
              x3 = *(rtx *)&x2->u;
            }
          }
          else {
            x2 = *(rtx *)&x1->u;
            x3 = *(rtx *)&x2->u;
          }
        }
        else {
          x2 = *(rtx *)&x1->u;
          x3 = *(rtx *)&x2->u;
        }
      }
    }
    iVar10 = register_operand(x3,0x4f);
    if (iVar10 != 0) {
      _GLOBAL_OFFSET_TABLE_ = x3;
      prVar2 = *(rtx *)&(x2->u).field_0x8;
      iVar10 = nonimmediate_operand(prVar2,0x4f);
      if (((iVar10 != 0) &&
          (psVar4 = *(short **)&(x1->u).field_0x8, _register_operand = prVar2, *psVar4 == 0xf)) &&
         (**(int **)(psVar4 + 4) == 4)) {
        prVar2 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
        iVar10 = const_0_to_3_operand(prVar2,0);
        if (iVar10 != 0) {
          uVar7 = *(undefined8 *)(*(long *)(psVar4 + 4) + 0x10);
          _nonimmediate_operand = prVar2;
          iVar10 = const_0_to_3_operand(uVar7,0);
          if (iVar10 != 0) {
            uVar8 = *(undefined8 *)(*(long *)(psVar4 + 4) + 0x18);
            _memory_operand = uVar7;
            iVar10 = const_4_to_7_operand(uVar8,0);
            if (iVar10 != 0) {
              uVar7 = *(undefined8 *)(*(long *)(psVar4 + 4) + 0x20);
              _push_operand = uVar8;
              iVar10 = const_4_to_7_operand(uVar7,0);
              if (iVar10 != 0) {
                if ((ix86_isa_flags & 0x20) != 0) {
                  _nonmemory_no_elim_operand = uVar7;
                  return 0x49f;
                }
                _nonmemory_no_elim_operand = uVar7;
                if ((ix86_isa_flags & 0x10000) != 0) {
                  return 0x4a1;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x7d:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == 'N') {
      uVar1 = *(ushort *)prVar2;
      if (uVar1 == 0x7d) {
        psVar4 = *(short **)&prVar2->u;
        if (*(char *)(psVar4 + 1) == '&') {
          if (*psVar4 == 0x31) {
            psVar5 = *(short **)(psVar4 + 4);
            if ((*(char *)(psVar5 + 1) == '&') && (*psVar5 == 0x7c)) {
              prVar9 = *(rtx *)(psVar5 + 4);
              iVar10 = register_operand(prVar9,0x4f);
              if (((((((iVar10 != 0) &&
                      (((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar9,
                        *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1)) &&
                       (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)))) &&
                     (((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                       (*psVar4 == 0x7c)) &&
                      (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),prVar9), iVar10 != 0)))) &&
                    ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                     (**(int **)(psVar4 + 4) == 1)))) &&
                   ((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                    (((psVar4 = *(short **)&(prVar2->u).field_0x8, *(char *)(psVar4 + 1) == '&' &&
                      (*psVar4 == 0x31)) &&
                     (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')))))) &&
                  (((*psVar5 == 0x7c &&
                    (iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                    iVar10 != 0)) &&
                   ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                    (((((**(int **)(psVar5 + 4) == 1 &&
                        (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                       ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                        ((((*psVar4 == 0x7c &&
                           (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                           iVar10 != 0)) && (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)) &&
                         ((**(int **)(psVar4 + 4) == 1 &&
                          (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)))))))) &&
                      (psVar4 = *(short **)&(x1->u).field_0x8, *(char *)(psVar4 + 1) == 'N')) &&
                     ((*psVar4 == 0x7d &&
                      (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')))))))))) &&
                 ((*psVar5 == 0x31 &&
                  ((psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == '&' &&
                   (*psVar6 == 0x7c)))))) {
                prVar2 = *(rtx *)(psVar6 + 4);
                iVar10 = nonimmediate_operand(prVar2,0x4f);
                if (((iVar10 != 0) &&
                    ((((((psVar6 = *(short **)(psVar6 + 8), _register_operand = prVar2,
                         *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1)) &&
                        (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)) &&
                       (((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&' &&
                         (*psVar5 == 0x7c)) &&
                        ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar2), iVar10 != 0 &&
                         ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                          (**(int **)(psVar5 + 4) == 1)))))))) &&
                      ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                       (((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                         (*psVar4 == 0x31)) &&
                        (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')))))) &&
                     ((*psVar5 == 0x7c &&
                      (iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand),
                      iVar10 != 0)))))) &&
                   ((((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                      ((**(int **)(psVar5 + 4) == 1 &&
                       (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
                     (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&')) &&
                    (((((*psVar4 == 0x7c &&
                        (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand),
                        iVar10 != 0)) && (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)) &&
                      ((**(int **)(psVar4 + 4) == 1 &&
                       (**(short **)(*(long *)(psVar4 + 4) + 8) == 0x1e)))) &&
                     (*(long *)(*(short **)(*(long *)(psVar4 + 4) + 8) + 4) == 3)))))) {
                  if ((ix86_isa_flags & 0x20) != 0) {
                    return 0x3dd;
                  }
                  if ((ix86_isa_flags & 0x40000) != 0) {
                    return 0x3df;
                  }
                }
              }
            }
          }
          else if (((*psVar4 == 0x32) &&
                   (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')) &&
                  (*psVar5 == 0x7c)) {
            prVar9 = *(rtx *)(psVar5 + 4);
            iVar10 = register_operand(prVar9,0x4f);
            if (((((iVar10 != 0) &&
                  (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar9, *psVar5 == 0xf)
                  ) && (**(int **)(psVar5 + 4) == 1)) &&
                ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
                 (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&')))) &&
               (((((*psVar4 == 0x7c &&
                   ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),prVar9), iVar10 != 0 &&
                    (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)))) &&
                  ((**(int **)(psVar4 + 4) == 1 &&
                   (((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                     (psVar4 = *(short **)&(prVar2->u).field_0x8, *(char *)(psVar4 + 1) == '&')) &&
                    (*psVar4 == 0x32)))))) &&
                 ((((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&' &&
                    (*psVar5 == 0x7c)) &&
                   ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                    iVar10 != 0 &&
                    ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                     (**(int **)(psVar5 + 4) == 1)))))) &&
                  (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
                (((((((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                      (*psVar4 == 0x7c)) &&
                     (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                     iVar10 != 0)) &&
                    ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                     (**(int **)(psVar4 + 4) == 1)))) &&
                   (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)) &&
                  ((psVar4 = *(short **)&(x1->u).field_0x8, *(char *)(psVar4 + 1) == 'N' &&
                   (*psVar4 == 0x7d)))) &&
                 ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&' &&
                  (((*psVar5 == 0x32 &&
                    (psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == '&')) &&
                   (*psVar6 == 0x7c)))))))))) {
              prVar2 = *(rtx *)(psVar6 + 4);
              iVar10 = nonimmediate_operand(prVar2,0x4f);
              if (((((((iVar10 != 0) &&
                      (psVar6 = *(short **)(psVar6 + 8), _register_operand = prVar2, *psVar6 == 0xf)
                      ) && (**(int **)(psVar6 + 4) == 1)) &&
                    ((*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand &&
                     (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&')))) &&
                   (((*psVar5 == 0x7c &&
                     (((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar2), iVar10 != 0 &&
                       (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                      (**(int **)(psVar5 + 4) == 1)))) &&
                    ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                     (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&')))))) &&
                  ((*psVar4 == 0x32 &&
                   ((((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&' &&
                      (*psVar5 == 0x7c)) &&
                     ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand),
                      iVar10 != 0 &&
                      ((((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                         (**(int **)(psVar5 + 4) == 1)) &&
                        (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                       ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                        (*psVar4 == 0x7c)))))))) &&
                    (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand),
                    iVar10 != 0)))))) &&
                 (((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                   (**(int **)(psVar4 + 4) == 1)) &&
                  ((**(short **)(*(long *)(psVar4 + 4) + 8) == 0x1e &&
                   (*(long *)(*(short **)(*(long *)(psVar4 + 4) + 8) + 4) == 3)))))) {
                if ((ix86_isa_flags & 0x20) != 0) {
                  return 0x3de;
                }
                if ((ix86_isa_flags & 0x40000) != 0) {
                  return 0x3e0;
                }
              }
            }
          }
        }
      }
      else if (uVar1 < 0x7e) {
        if (uVar1 == 0x66) {
          prVar2 = *(rtx *)&prVar2->u;
          iVar10 = nonimmediate_operand(prVar2,0x50);
          if (iVar10 != 0) {
            prVar9 = *(rtx *)&(x1->u).field_0x8;
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar10 = const0_operand(prVar9,0x4e);
            if ((iVar10 != 0) && (_register_operand = prVar9, (ix86_isa_flags & 0x20000) != 0)) {
              return 0x48d;
            }
          }
        }
        else if ((uVar1 < 0x67) &&
                (((uVar1 == 0x25 || (uVar1 == 0x27)) &&
                 (iVar10 = register_operand(prVar2,0x4e), iVar10 != 0)))) {
          prVar9 = *(rtx *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar10 = nonimmediate_operand(prVar9,0x4e);
          if (iVar10 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = prVar9;
              return 0x4b1;
            }
            _register_operand = prVar9;
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x4b2;
            }
          }
        }
      }
    }
    break;
  case 0x7e:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == '&') {
      iVar10 = nonimmediate_operand(prVar2,0x26);
      x2 = prVar2;
      if (iVar10 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          return 0x4ac;
        }
        x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 8);
        _GLOBAL_OFFSET_TABLE_ = prVar2;
      }
      iVar10 = register_operand(x2,0x26);
      if ((iVar10 != 0) && (_GLOBAL_OFFSET_TABLE_ = x2, (ix86_isa_flags & 0x10000) != 0)) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        return 0x4ad;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_17(rtx x0,rtx insn,int *pnum_clobbers)

{
  long lVar1;
  rtx prVar2;
  short *psVar3;
  undefined8 uVar4;
  rtx prVar5;
  int iVar6;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x1;
  rtx x4;
  rtx x5;
  
  lVar1 = *(long *)&(x0->u).field_0x8;
  x2 = *(rtx *)(lVar1 + 8);
  switch(*(undefined2 *)x2) {
  case 0x12:
    if ((**(int **)&x2->u == 3) && (*(int *)&(x2->u).field_0x8 == 0xa6)) {
      prVar5 = *(rtx *)(*(long *)&x2->u + 8);
      iVar6 = register_operand(prVar5,0x50);
      if (iVar6 != 0) {
        uVar4 = *(undefined8 *)(*(long *)&x2->u + 0x10);
        _GLOBAL_OFFSET_TABLE_ = prVar5;
        iVar6 = nonimmediate_operand(uVar4,0x50);
        if (iVar6 != 0) {
          prVar5 = *(rtx *)(*(long *)&x2->u + 0x18);
          _register_operand = uVar4;
          iVar6 = const_0_to_31_operand(prVar5,0x10);
          if ((((iVar6 != 0) &&
               (_nonimmediate_operand = prVar5,
               iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar6 != 0)
               ) && (*(long *)(lVar1 + 0x18) == _bt_comparison_operator)) &&
             ((ix86_isa_flags & 0x20) != 0)) {
            return 0x3ea;
          }
        }
      }
    }
    break;
  case 0x31:
    prVar5 = *(rtx *)&x2->u;
    if (prVar5->field_0x2 == 'P') {
      if (*(short *)prVar5 == 0x34) {
        prVar2 = *(rtx *)&prVar5->u;
        iVar6 = nonimmediate_operand(prVar2,0x50);
        if (iVar6 != 0) {
          uVar4 = *(undefined8 *)&(prVar5->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar6 = nonimmediate_operand(uVar4,0x50);
          if (iVar6 != 0) {
            prVar5 = *(rtx *)&(x2->u).field_0x8;
            _register_operand = uVar4;
            iVar6 = nonimmediate_operand(prVar5,0x50);
            if (iVar6 != 0) {
              x2 = *(rtx *)(lVar1 + 0x10);
              _nonimmediate_operand = prVar5;
              if ((((x2->field_0x2 == 'P') && (*(short *)x2 == 0x32)) &&
                  ((psVar3 = *(short **)&x2->u, *(char *)(psVar3 + 1) == 'P' &&
                   (((*psVar3 == 0x34 &&
                     (iVar6 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_GLOBAL_OFFSET_TABLE_),
                     iVar6 != 0)) &&
                    (iVar6 = rtx_equal_p(*(undefined8 *)(psVar3 + 8),_register_operand), iVar6 != 0)
                    ))))) &&
                 (iVar6 = rtx_equal_p(*(undefined8 *)&(x2->u).field_0x8,_nonimmediate_operand),
                 iVar6 != 0)) {
                if (((*(long *)(lVar1 + 0x18) == _ix86_fp_comparison_operator) &&
                    ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)) {
                  return 0x45c;
                }
                x2 = *(rtx *)(lVar1 + 0x10);
              }
              iVar6 = rtx_equal_p(x2,recog_data);
              if (iVar6 != 0) {
                if (((*(long *)(lVar1 + 0x18) == _bt_comparison_operator) &&
                    ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)) {
                  return 0x42e;
                }
                x2 = *(rtx *)(lVar1 + 0x10);
              }
              if ((((x2->field_0x2 == 'P') && (*(short *)x2 == 0x32)) &&
                  (psVar3 = *(short **)&x2->u, *(char *)(psVar3 + 1) == 'P')) &&
                 (((*psVar3 == 0x34 &&
                   (iVar6 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar6 != 0)) &&
                  ((((iVar6 = rtx_equal_p(*(undefined8 *)(psVar3 + 8),_register_operand), iVar6 != 0
                     && ((iVar6 = rtx_equal_p(*(undefined8 *)&(x2->u).field_0x8,
                                              _nonimmediate_operand), iVar6 != 0 &&
                         (*(long *)(lVar1 + 0x18) == _bt_comparison_operator)))) &&
                    ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)))))) {
                return 0x460;
              }
            }
          }
        }
      }
      else {
        iVar6 = register_operand(prVar5,0x50);
        if (iVar6 != 0) {
          uVar4 = *(undefined8 *)&(x2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar5;
          iVar6 = nonimmediate_operand(uVar4,0x50);
          if (iVar6 != 0) {
            x2 = *(rtx *)(lVar1 + 0x10);
            _register_operand = uVar4;
            if ((((x2->field_0x2 == 'P') && (*(short *)x2 == 0x32)) &&
                (iVar6 = rtx_equal_p(*(undefined8 *)&x2->u,_GLOBAL_OFFSET_TABLE_), iVar6 != 0)) &&
               (iVar6 = rtx_equal_p(*(undefined8 *)&(x2->u).field_0x8,_register_operand), iVar6 != 0
               )) {
              if (**(short **)(lVar1 + 0x18) == 0x1e) {
                if (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 2) {
                  if ((ix86_isa_flags & 0x20) != 0) {
                    return 0x3d7;
                  }
                  if ((ix86_isa_flags & 0x40000) != 0) {
                    return 0x3d8;
                  }
                  x2 = *(rtx *)(lVar1 + 0x10);
                }
                else {
                  x2 = *(rtx *)(lVar1 + 0x10);
                }
              }
              else {
                x2 = *(rtx *)(lVar1 + 0x10);
              }
            }
            iVar6 = rtx_equal_p(x2,_GLOBAL_OFFSET_TABLE_);
            if (((iVar6 != 0) && (**(short **)(lVar1 + 0x18) == 0x1e)) &&
               (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x37b;
              }
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x37f;
              }
            }
          }
        }
      }
    }
    break;
  case 0x32:
    x3 = *(rtx *)&x2->u;
    if (x3->field_0x2 == 'P') {
      if (*(short *)x3 == 0x34) {
        prVar5 = *(rtx *)&x3->u;
        if (prVar5->field_0x2 == 'P') {
          if (*(short *)prVar5 == 0x33) {
            prVar5 = *(rtx *)&prVar5->u;
            iVar6 = nonimmediate_operand(prVar5,0x50);
            if (iVar6 != 0) {
              uVar4 = *(undefined8 *)&(x3->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar5;
              iVar6 = nonimmediate_operand(uVar4,0x50);
              if (iVar6 != 0) {
                prVar5 = *(rtx *)&(x2->u).field_0x8;
                _register_operand = uVar4;
                iVar6 = nonimmediate_operand(prVar5,0x50);
                if (((iVar6 != 0) &&
                    (_nonimmediate_operand = prVar5,
                    iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),recog_data), iVar6 != 0)) &&
                   ((*(long *)(lVar1 + 0x18) == _bt_comparison_operator &&
                    (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))))) {
                  return 0x440;
                }
              }
            }
          }
          else {
            iVar6 = nonimmediate_operand(prVar5,0x50);
            if (iVar6 != 0) {
              uVar4 = *(undefined8 *)&(x3->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar5;
              iVar6 = nonimmediate_operand(uVar4,0x50);
              if (iVar6 != 0) {
                prVar5 = *(rtx *)&(x2->u).field_0x8;
                _register_operand = uVar4;
                iVar6 = nonimmediate_operand(prVar5,0x50);
                if ((((iVar6 != 0) &&
                     (_nonimmediate_operand = prVar5,
                     iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),recog_data), iVar6 != 0)) &&
                    (*(long *)(lVar1 + 0x18) == _bt_comparison_operator)) &&
                   (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))) {
                  return 0x434;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = register_operand(x3,0x50);
        if (iVar6 != 0) {
          uVar4 = *(undefined8 *)&(x2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x3;
          iVar6 = nonimmediate_operand(uVar4,0x50);
          if (iVar6 == 0) {
            x3 = *(rtx *)&x2->u;
          }
          else {
            _register_operand = uVar4;
            iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_);
            if (iVar6 == 0) {
              x2 = *(rtx *)(lVar1 + 8);
              x3 = *(rtx *)&x2->u;
            }
            else if (**(short **)(lVar1 + 0x18) == 0x1e) {
              if (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1) {
                if ((ix86_isa_flags & 0x20) != 0) {
                  return 0x37c;
                }
                if ((ix86_isa_flags & 0x20000) != 0) {
                  return 0x380;
                }
                x2 = *(rtx *)(lVar1 + 8);
                x3 = *(rtx *)&x2->u;
              }
              else {
                x2 = *(rtx *)(lVar1 + 8);
                x3 = *(rtx *)&x2->u;
              }
            }
            else {
              x2 = *(rtx *)(lVar1 + 8);
              x3 = *(rtx *)&x2->u;
            }
          }
        }
        iVar6 = nonimmediate_operand(x3,0x50);
        if (iVar6 != 0) {
          _nonimmediate_operand = x3;
          psVar3 = *(short **)&(x2->u).field_0x8;
          if ((*(char *)(psVar3 + 1) == 'P') && (*psVar3 == 0x34)) {
            prVar5 = *(rtx *)(psVar3 + 4);
            iVar6 = nonimmediate_operand(prVar5,0x50);
            if (iVar6 != 0) {
              uVar4 = *(undefined8 *)(psVar3 + 8);
              _GLOBAL_OFFSET_TABLE_ = prVar5;
              iVar6 = nonimmediate_operand(uVar4,0x50);
              if ((((iVar6 != 0) &&
                   (_register_operand = uVar4,
                   iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),recog_data), iVar6 != 0)) &&
                  (*(long *)(lVar1 + 0x18) == _bt_comparison_operator)) &&
                 (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))) {
                return 0x43a;
              }
            }
          }
        }
      }
    }
    break;
  case 0x34:
    prVar5 = *(rtx *)&x2->u;
    iVar6 = register_operand(prVar5,0x50);
    if (iVar6 != 0) {
      uVar4 = *(undefined8 *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar5;
      iVar6 = nonimmediate_operand(uVar4,0x50);
      if ((((iVar6 != 0) &&
           (_register_operand = uVar4,
           iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar6 != 0)) &&
          (**(short **)(lVar1 + 0x18) == 0x1e)) && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x388;
        }
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x38a;
        }
      }
    }
    break;
  case 0x37:
    prVar5 = *(rtx *)&x2->u;
    iVar6 = register_operand(prVar5,0x50);
    if (iVar6 != 0) {
      uVar4 = *(undefined8 *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar5;
      iVar6 = nonimmediate_operand(uVar4,0x50);
      if (((iVar6 != 0) &&
          (_register_operand = uVar4,
          iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar6 != 0)) &&
         ((**(short **)(lVar1 + 0x18) == 0x1e && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x394;
        }
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x396;
        }
      }
    }
    break;
  case 0x46:
    prVar5 = *(rtx *)&x2->u;
    iVar6 = register_operand(prVar5,0x50);
    if (iVar6 != 0) {
      uVar4 = *(undefined8 *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar5;
      iVar6 = nonimmediate_operand(uVar4,0x50);
      if (((iVar6 != 0) &&
          (_register_operand = uVar4,
          iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar6 != 0)) &&
         ((**(short **)(lVar1 + 0x18) == 0x1e && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x3c2;
        }
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x3c6;
        }
      }
    }
    break;
  case 0x47:
    prVar5 = *(rtx *)&x2->u;
    iVar6 = register_operand(prVar5,0x50);
    if (iVar6 != 0) {
      uVar4 = *(undefined8 *)&(x2->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar5;
      iVar6 = nonimmediate_operand(uVar4,0x50);
      if ((((iVar6 != 0) &&
           (_register_operand = uVar4,
           iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar6 != 0)) &&
          (**(short **)(lVar1 + 0x18) == 0x1e)) && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1))
      {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x3c1;
        }
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x3c5;
        }
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x54:
  case 0x55:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
    iVar6 = sse_comparison_operator(x2,0x50);
    if (iVar6 != 0) {
      prVar5 = *(rtx *)&x2->u;
      _nonimmediate_operand = x2;
      iVar6 = register_operand(prVar5,0x50);
      if (iVar6 != 0) {
        uVar4 = *(undefined8 *)&(x2->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar5;
        iVar6 = nonimmediate_operand(uVar4,0x50);
        if (((iVar6 != 0) &&
            (_register_operand = uVar4,
            iVar6 = rtx_equal_p(*(undefined8 *)(lVar1 + 0x10),_GLOBAL_OFFSET_TABLE_), iVar6 != 0))
           && ((*(long *)(lVar1 + 0x18) == _bt_comparison_operator &&
               ((ix86_isa_flags & 0x20000) != 0)))) {
          return 0x3f4;
        }
      }
    }
    break;
  case 0x65:
    psVar3 = *(short **)&x2->u;
    if ((*(char *)(psVar3 + 1) == 'N') && (*psVar3 == 0x7c)) {
      uVar4 = *(undefined8 *)(psVar3 + 4);
      iVar6 = nonimmediate_operand(uVar4,0x4f);
      if (((iVar6 != 0) &&
          (((psVar3 = *(short **)(psVar3 + 8), _register_operand = uVar4, *psVar3 == 0xf &&
            (**(int **)(psVar3 + 4) == 2)) &&
           (*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand)))) &&
         (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)) {
        prVar5 = *(rtx *)(lVar1 + 0x10);
        iVar6 = register_operand(prVar5,0x50);
        if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar5, **(short **)(lVar1 + 0x18) == 0x1e))
           && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
          if ((ix86_isa_flags & 0x20) != 0) {
            return 0x48a;
          }
          if ((ix86_isa_flags & 0x20000) != 0) {
            return 0x48b;
          }
        }
      }
    }
    break;
  case 0x70:
    prVar5 = *(rtx *)&x2->u;
    iVar6 = nonimmediate_operand(prVar5,0x50);
    if (iVar6 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      _GLOBAL_OFFSET_TABLE_ = prVar5;
      iVar6 = register_operand(uVar4,0x50);
      if (((iVar6 != 0) && (_register_operand = uVar4, **(short **)(lVar1 + 0x18) == 0x1e)) &&
         (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x3a0;
        }
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x3a2;
        }
      }
    }
    break;
  case 0x7e:
    psVar3 = *(short **)&x2->u;
    if ((*(char *)(psVar3 + 1) == '\'') && (*psVar3 == 0x67)) {
      uVar4 = *(undefined8 *)(psVar3 + 4);
      iVar6 = nonimmediate_operand(uVar4,0x10);
      if (iVar6 != 0) {
        prVar5 = *(rtx *)(lVar1 + 0x10);
        _register_operand = uVar4;
        iVar6 = register_operand(prVar5,0x50);
        if (((iVar6 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar5, **(short **)(lVar1 + 0x18) == 0x1e))
           && (*(long *)(*(short **)(lVar1 + 0x18) + 4) == 1)) {
          if ((ix86_isa_flags & 0x20) != 0) {
            return 0x47d;
          }
          if ((ix86_isa_flags & 0x20000) != 0) {
            return 0x47e;
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_18(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  ushort *puVar3;
  short *psVar4;
  rtx prVar5;
  short *psVar6;
  undefined8 uVar7;
  int iVar8;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x4;
  rtx x5;
  rtx x6;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  switch(*(short *)x1) {
  case 0x12:
    iVar8 = **(int **)&x1->u;
    if (iVar8 == 3) {
      if (*(int *)&(x1->u).field_0x8 == 0xa6) {
        prVar2 = *(rtx *)(*(long *)&x1->u + 8);
        iVar8 = register_operand(prVar2,0x50);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar8 = nonimmediate_operand(uVar7,0x50);
          if (iVar8 != 0) {
            prVar2 = *(rtx *)(*(long *)&x1->u + 0x18);
            _register_operand = uVar7;
            iVar8 = const_0_to_31_operand(prVar2,0x10);
            if ((iVar8 != 0) && (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x20) != 0)) {
              return 0x3e6;
            }
          }
        }
      }
    }
    else if (iVar8 < 4) {
      if (iVar8 == 1) {
        if ((*(int *)&(x1->u).field_0x8 == 0x96) &&
           (puVar3 = *(ushort **)(*(long *)&x1->u + 8), *(char *)(puVar3 + 1) == 'P')) {
          uVar1 = *puVar3;
          if (uVar1 == 0x7b) {
            psVar6 = *(short **)(puVar3 + 4);
            if (*(char *)(psVar6 + 1) == 'P') {
              if (*psVar6 == 0x31) {
                psVar4 = *(short **)(psVar6 + 4);
                if ((*(char *)(psVar4 + 1) == 'P') && (*psVar4 == 0x34)) {
                  prVar2 = *(rtx *)(psVar4 + 4);
                  iVar8 = nonimmediate_operand(prVar2,0x50);
                  if (iVar8 != 0) {
                    uVar7 = *(undefined8 *)(psVar4 + 8);
                    _GLOBAL_OFFSET_TABLE_ = prVar2;
                    iVar8 = nonimmediate_operand(uVar7,0x50);
                    if (iVar8 != 0) {
                      prVar2 = *(rtx *)(psVar6 + 8);
                      _register_operand = uVar7;
                      iVar8 = nonimmediate_operand(prVar2,0x50);
                      if (iVar8 != 0) {
                        x3 = *(rtx *)(puVar3 + 8);
                        _nonimmediate_operand = prVar2;
                        if ((((((x3->field_0x2 == 'P') && (*(short *)x3 == 0x32)) &&
                              (psVar6 = *(short **)&x3->u, *(char *)(psVar6 + 1) == 'P')) &&
                             ((*psVar6 == 0x34 &&
                              (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_
                                                  ), iVar8 != 0)))) &&
                            (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 8),_register_operand),
                            iVar8 != 0)) &&
                           (iVar8 = rtx_equal_p(*(undefined8 *)&(x3->u).field_0x8,
                                                _nonimmediate_operand), iVar8 != 0)) {
                          if (((*(long *)(puVar3 + 0xc) == _ix86_fp_comparison_operator) &&
                              ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)) {
                            return 0x464;
                          }
                          x3 = *(rtx *)(puVar3 + 8);
                        }
                        iVar8 = rtx_equal_p(x3,recog_data);
                        if (iVar8 != 0) {
                          if (((*(long *)(puVar3 + 0xc) == _bt_comparison_operator) &&
                              ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)) {
                            return 0x452;
                          }
                          x3 = *(rtx *)(puVar3 + 8);
                        }
                        if ((((x3->field_0x2 == 'P') && (*(short *)x3 == 0x32)) &&
                            (((psVar6 = *(short **)&x3->u, *(char *)(psVar6 + 1) == 'P' &&
                              ((*psVar6 == 0x34 &&
                               (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),
                                                    _GLOBAL_OFFSET_TABLE_), iVar8 != 0)))) &&
                             (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 8),_register_operand),
                             iVar8 != 0)))) &&
                           ((((iVar8 = rtx_equal_p(*(undefined8 *)&(x3->u).field_0x8,
                                                   _nonimmediate_operand), iVar8 != 0 &&
                              (*(long *)(puVar3 + 0xc) == _bt_comparison_operator)) &&
                             ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)))) {
                          return 0x468;
                        }
                      }
                    }
                  }
                }
              }
              else if ((*psVar6 == 0x32) &&
                      (prVar2 = *(rtx *)(psVar6 + 4), prVar2->field_0x2 == 'P')) {
                if (*(short *)prVar2 == 0x34) {
                  prVar5 = *(rtx *)&prVar2->u;
                  if (prVar5->field_0x2 == 'P') {
                    if (*(short *)prVar5 == 0x33) {
                      prVar5 = *(rtx *)&prVar5->u;
                      iVar8 = nonimmediate_operand(prVar5,0x50);
                      if (iVar8 != 0) {
                        uVar7 = *(undefined8 *)&(prVar2->u).field_0x8;
                        _GLOBAL_OFFSET_TABLE_ = prVar5;
                        iVar8 = nonimmediate_operand(uVar7,0x50);
                        if (iVar8 != 0) {
                          prVar2 = *(rtx *)(psVar6 + 8);
                          _register_operand = uVar7;
                          iVar8 = nonimmediate_operand(prVar2,0x50);
                          if (((iVar8 != 0) &&
                              (_nonimmediate_operand = prVar2,
                              iVar8 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),recog_data),
                              iVar8 != 0)) &&
                             ((*(long *)(puVar3 + 0xc) == _bt_comparison_operator &&
                              (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))))) {
                            return 0x458;
                          }
                        }
                      }
                    }
                    else {
                      iVar8 = nonimmediate_operand(prVar5,0x50);
                      if (iVar8 != 0) {
                        uVar7 = *(undefined8 *)&(prVar2->u).field_0x8;
                        _GLOBAL_OFFSET_TABLE_ = prVar5;
                        iVar8 = nonimmediate_operand(uVar7,0x50);
                        if (iVar8 != 0) {
                          prVar2 = *(rtx *)(psVar6 + 8);
                          _register_operand = uVar7;
                          iVar8 = nonimmediate_operand(prVar2,0x50);
                          if ((((iVar8 != 0) &&
                               (_nonimmediate_operand = prVar2,
                               iVar8 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),recog_data),
                               iVar8 != 0)) && (*(long *)(puVar3 + 0xc) == _bt_comparison_operator))
                             && (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))) {
                            return 0x454;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  iVar8 = nonimmediate_operand(prVar2,0x50);
                  if (((iVar8 != 0) &&
                      (psVar6 = *(short **)(psVar6 + 8), _nonimmediate_operand = prVar2,
                      *(char *)(psVar6 + 1) == 'P')) && (*psVar6 == 0x34)) {
                    prVar2 = *(rtx *)(psVar6 + 4);
                    iVar8 = nonimmediate_operand(prVar2,0x50);
                    if (iVar8 != 0) {
                      uVar7 = *(undefined8 *)(psVar6 + 8);
                      _GLOBAL_OFFSET_TABLE_ = prVar2;
                      iVar8 = nonimmediate_operand(uVar7,0x50);
                      if ((((iVar8 != 0) &&
                           (_register_operand = uVar7,
                           iVar8 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),recog_data), iVar8 != 0))
                          && (*(long *)(puVar3 + 0xc) == _bt_comparison_operator)) &&
                         (((ix86_isa_flags & 0x200) != 0 && ((target_flags & 0x40) != 0)))) {
                        return 0x456;
                      }
                    }
                  }
                }
              }
            }
          }
          else if (uVar1 < 0x7c) {
            if (uVar1 == 0x31) {
              psVar6 = *(short **)(puVar3 + 4);
              if ((*(char *)(psVar6 + 1) == 'P') && (*psVar6 == 0x34)) {
                prVar2 = *(rtx *)(psVar6 + 4);
                iVar8 = nonimmediate_operand(prVar2,0x50);
                if (iVar8 != 0) {
                  uVar7 = *(undefined8 *)(psVar6 + 8);
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  iVar8 = nonimmediate_operand(uVar7,0x50);
                  if (iVar8 != 0) {
                    prVar2 = *(rtx *)(puVar3 + 8);
                    _register_operand = uVar7;
                    iVar8 = nonimmediate_operand(prVar2,0x50);
                    if (((iVar8 != 0) &&
                        (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)) &&
                       ((target_flags & 0x40) != 0)) {
                      return 0x44a;
                    }
                  }
                }
              }
            }
            else if ((uVar1 == 0x32) && (prVar2 = *(rtx *)(puVar3 + 4), prVar2->field_0x2 == 'P')) {
              if (*(short *)prVar2 == 0x34) {
                prVar5 = *(rtx *)&prVar2->u;
                if (prVar5->field_0x2 == 'P') {
                  if (*(short *)prVar5 == 0x33) {
                    prVar5 = *(rtx *)&prVar5->u;
                    iVar8 = nonimmediate_operand(prVar5,0x50);
                    if (iVar8 != 0) {
                      uVar7 = *(undefined8 *)&(prVar2->u).field_0x8;
                      _GLOBAL_OFFSET_TABLE_ = prVar5;
                      iVar8 = nonimmediate_operand(uVar7,0x50);
                      if (iVar8 != 0) {
                        prVar2 = *(rtx *)(puVar3 + 8);
                        _register_operand = uVar7;
                        iVar8 = nonimmediate_operand(prVar2,0x50);
                        if (((iVar8 != 0) &&
                            (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)) &&
                           ((target_flags & 0x40) != 0)) {
                          return 0x450;
                        }
                      }
                    }
                  }
                  else {
                    iVar8 = nonimmediate_operand(prVar5,0x50);
                    if (iVar8 != 0) {
                      uVar7 = *(undefined8 *)&(prVar2->u).field_0x8;
                      _GLOBAL_OFFSET_TABLE_ = prVar5;
                      iVar8 = nonimmediate_operand(uVar7,0x50);
                      if (iVar8 != 0) {
                        prVar2 = *(rtx *)(puVar3 + 8);
                        _register_operand = uVar7;
                        iVar8 = nonimmediate_operand(prVar2,0x50);
                        if (((iVar8 != 0) &&
                            (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)) &&
                           ((target_flags & 0x40) != 0)) {
                          return 0x44c;
                        }
                      }
                    }
                  }
                }
              }
              else {
                iVar8 = nonimmediate_operand(prVar2,0x50);
                if (((iVar8 != 0) &&
                    (psVar6 = *(short **)(puVar3 + 8), _nonimmediate_operand = prVar2,
                    *(char *)(psVar6 + 1) == 'P')) && (*psVar6 == 0x34)) {
                  prVar2 = *(rtx *)(psVar6 + 4);
                  iVar8 = nonimmediate_operand(prVar2,0x50);
                  if (iVar8 != 0) {
                    uVar7 = *(undefined8 *)(psVar6 + 8);
                    _GLOBAL_OFFSET_TABLE_ = prVar2;
                    iVar8 = nonimmediate_operand(uVar7,0x50);
                    if (((iVar8 != 0) && (_register_operand = uVar7, (ix86_isa_flags & 0x200) != 0))
                       && ((target_flags & 0x40) != 0)) {
                      return 0x44e;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (iVar8 == 2) {
        iVar8 = *(int *)&(x1->u).field_0x8;
        if (iVar8 == 0x33) {
          prVar2 = *(rtx *)(*(long *)&x1->u + 8);
          iVar8 = register_operand(prVar2,0x50);
          if (iVar8 != 0) {
            uVar7 = *(undefined8 *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar8 = nonimmediate_operand(uVar7,0x50);
            if (iVar8 != 0) {
              if ((ix86_isa_flags & 0x20) != 0) {
                _register_operand = uVar7;
                return 0x3c8;
              }
              _register_operand = uVar7;
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x3d0;
              }
            }
          }
        }
        else if (iVar8 == 0x34) {
          prVar2 = *(rtx *)(*(long *)&x1->u + 8);
          iVar8 = register_operand(prVar2,0x50);
          if (iVar8 != 0) {
            uVar7 = *(undefined8 *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            iVar8 = nonimmediate_operand(uVar7,0x50);
            if (iVar8 != 0) {
              if ((ix86_isa_flags & 0x20) != 0) {
                _register_operand = uVar7;
                return 0x3cc;
              }
              _register_operand = uVar7;
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x3d2;
              }
            }
          }
        }
      }
    }
    break;
  case 0x31:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == 'P') {
      if (*(short *)prVar2 == 0x34) {
        prVar5 = *(rtx *)&prVar2->u;
        iVar8 = nonimmediate_operand(prVar5,0x50);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)&(prVar2->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar5;
          iVar8 = nonimmediate_operand(uVar7,0x50);
          if (iVar8 != 0) {
            prVar2 = *(rtx *)&(x1->u).field_0x8;
            _register_operand = uVar7;
            iVar8 = nonimmediate_operand(prVar2,0x50);
            if (((iVar8 != 0) && (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)) &&
               ((target_flags & 0x40) != 0)) {
              return 0x42c;
            }
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(prVar2,0x50);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar8 = nonimmediate_operand(uVar7,0x50);
          if (iVar8 != 0) {
            _register_operand = uVar7;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x31,0x50,&recog_data), iVar8 != 0)) {
              return 0x36f;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x31,0x50,&recog_data), iVar8 != 0)) {
              return 0x377;
            }
          }
        }
      }
    }
    break;
  case 0x32:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'P') {
      if (*(short *)x2 == 0x34) {
        prVar2 = *(rtx *)&x2->u;
        if (prVar2->field_0x2 == 'P') {
          if (*(short *)prVar2 == 0x33) {
            prVar2 = *(rtx *)&prVar2->u;
            iVar8 = nonimmediate_operand(prVar2,0x50);
            if (iVar8 != 0) {
              uVar7 = *(undefined8 *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              iVar8 = nonimmediate_operand(uVar7,0x50);
              if (iVar8 != 0) {
                prVar2 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = uVar7;
                iVar8 = nonimmediate_operand(prVar2,0x50);
                if (((iVar8 != 0) && (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)
                    ) && ((target_flags & 0x40) != 0)) {
                  return 0x43e;
                }
              }
            }
          }
          else {
            iVar8 = nonimmediate_operand(prVar2,0x50);
            if (iVar8 != 0) {
              uVar7 = *(undefined8 *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              iVar8 = nonimmediate_operand(uVar7,0x50);
              if (iVar8 != 0) {
                prVar2 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = uVar7;
                iVar8 = nonimmediate_operand(prVar2,0x50);
                if (((iVar8 != 0) && (_nonimmediate_operand = prVar2, (ix86_isa_flags & 0x200) != 0)
                    ) && ((target_flags & 0x40) != 0)) {
                  return 0x432;
                }
              }
            }
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(x2,0x50);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x2;
          iVar8 = nonimmediate_operand(uVar7,0x50);
          if (iVar8 == 0) {
            x2 = *(rtx *)&x1->u;
          }
          else {
            _register_operand = uVar7;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x32,0x50,&recog_data), iVar8 != 0)) {
              return 0x370;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x32,0x50,&recog_data), iVar8 != 0)) {
              return 0x378;
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&x1->u;
          }
        }
        iVar8 = nonimmediate_operand(x2,0x50);
        if (iVar8 != 0) {
          _nonimmediate_operand = x2;
          psVar6 = *(short **)&(x1->u).field_0x8;
          if ((*(char *)(psVar6 + 1) == 'P') && (*psVar6 == 0x34)) {
            prVar2 = *(rtx *)(psVar6 + 4);
            iVar8 = nonimmediate_operand(prVar2,0x50);
            if (iVar8 != 0) {
              uVar7 = *(undefined8 *)(psVar6 + 8);
              _GLOBAL_OFFSET_TABLE_ = prVar2;
              iVar8 = nonimmediate_operand(uVar7,0x50);
              if (((iVar8 != 0) && (_register_operand = uVar7, (ix86_isa_flags & 0x200) != 0)) &&
                 ((target_flags & 0x40) != 0)) {
                return 0x438;
              }
            }
          }
        }
      }
    }
    break;
  case 0x34:
    prVar2 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar2,0x50);
    if (iVar8 != 0) {
      uVar7 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar8 = nonimmediate_operand(uVar7,0x50);
      if (iVar8 != 0) {
        _register_operand = uVar7;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x34,0x50,&recog_data), iVar8 != 0)) {
          return 0x382;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x34,0x50,&recog_data), iVar8 != 0)) {
          return 0x386;
        }
      }
    }
    break;
  case 0x37:
    prVar2 = *(rtx *)&x1->u;
    iVar8 = register_operand(prVar2,0x50);
    if (iVar8 != 0) {
      uVar7 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar8 = nonimmediate_operand(uVar7,0x50);
      if (iVar8 != 0) {
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar7;
          return 0x38c;
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          _register_operand = uVar7;
          return 0x390;
        }
        _register_operand = uVar7;
        if ((ix86_isa_flags & 0x20000) != 0) {
          return 0x392;
        }
      }
    }
    break;
  case 0x3d:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == 'P') {
      if (*(short *)prVar2 == 0x40) {
        prVar2 = *(rtx *)&prVar2->u;
        iVar8 = register_operand(prVar2,0x50);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar8 = nonimmediate_operand(uVar7,0x50);
          if (iVar8 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar7;
              return 0x3fa;
            }
            _register_operand = uVar7;
            if ((ix86_isa_flags & 0x20000) != 0) {
              return 0x3fe;
            }
          }
        }
      }
      else {
        iVar8 = nonimmediate_operand(prVar2,0x50);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar8 = nonimmediate_operand(uVar7,0x50);
          if (iVar8 != 0) {
            _register_operand = uVar7;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x3d,0x50,&recog_data), iVar8 != 0)) {
              return 0x402;
            }
            if (((ix86_isa_flags & 0x20000) != 0) &&
               (iVar8 = ix86_binary_operator_ok(0x3d,0x50,&recog_data), iVar8 != 0)) {
              return 0x40e;
            }
          }
        }
      }
    }
    break;
  case 0x3e:
    prVar2 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar2,0x50);
    if (iVar8 != 0) {
      uVar7 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar8 = nonimmediate_operand(uVar7,0x50);
      if (iVar8 != 0) {
        _register_operand = uVar7;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3e,0x50,&recog_data), iVar8 != 0)) {
          return 0x403;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3e,0x50,&recog_data), iVar8 != 0)) {
          return 0x40f;
        }
      }
    }
    break;
  case 0x3f:
    prVar2 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar2,0x50);
    if (iVar8 != 0) {
      uVar7 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar2;
      iVar8 = nonimmediate_operand(uVar7,0x50);
      if (iVar8 != 0) {
        _register_operand = uVar7;
        if (((ix86_isa_flags & 0x20) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3f,0x50,&recog_data), iVar8 != 0)) {
          return 0x404;
        }
        if (((ix86_isa_flags & 0x20000) != 0) &&
           (iVar8 = ix86_binary_operator_ok(0x3f,0x50,&recog_data), iVar8 != 0)) {
          return 0x410;
        }
      }
    }
    break;
  case 0x46:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'P') {
      iVar8 = nonimmediate_operand(x2,0x50);
      if (iVar8 != 0) {
        uVar7 = *(undefined8 *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = x2;
        iVar8 = nonimmediate_operand(uVar7,0x50);
        if (iVar8 == 0) {
          x2 = *(rtx *)&x1->u;
        }
        else {
          _register_operand = uVar7;
          if ((((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) &&
             (iVar8 = ix86_binary_operator_ok(0x46,0x50,&recog_data), iVar8 != 0)) {
            return 0x3aa;
          }
          if ((((ix86_isa_flags & 0x20000) != 0) && (flag_finite_math_only != 0)) &&
             (iVar8 = ix86_binary_operator_ok(0x46,0x50,&recog_data), iVar8 != 0)) {
            return 0x3b2;
          }
          if ((ix86_isa_flags & 0x20) != 0) {
            return 0x3b6;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          x2 = *(rtx *)&x1->u;
        }
      }
      iVar8 = register_operand(x2,0x50);
      if (iVar8 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        uVar7 = *(undefined8 *)&(x1->u).field_0x8;
        iVar8 = nonimmediate_operand(uVar7,0x50);
        if ((iVar8 != 0) && (_register_operand = uVar7, (ix86_isa_flags & 0x20000) != 0)) {
          return 0x3be;
        }
      }
    }
    break;
  case 0x47:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'P') {
      iVar8 = nonimmediate_operand(x2,0x50);
      if (iVar8 != 0) {
        uVar7 = *(undefined8 *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = x2;
        iVar8 = nonimmediate_operand(uVar7,0x50);
        if (iVar8 == 0) {
          x2 = *(rtx *)&x1->u;
        }
        else {
          _register_operand = uVar7;
          if ((((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) &&
             (iVar8 = ix86_binary_operator_ok(0x47,0x50,&recog_data), iVar8 != 0)) {
            return 0x3a9;
          }
          if ((((ix86_isa_flags & 0x20000) != 0) && (flag_finite_math_only != 0)) &&
             (iVar8 = ix86_binary_operator_ok(0x47,0x50,&recog_data), iVar8 != 0)) {
            return 0x3b1;
          }
          if ((ix86_isa_flags & 0x20) != 0) {
            return 0x3b5;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          x2 = *(rtx *)&x1->u;
        }
      }
      iVar8 = register_operand(x2,0x50);
      if (iVar8 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        uVar7 = *(undefined8 *)&(x1->u).field_0x8;
        iVar8 = nonimmediate_operand(uVar7,0x50);
        if ((iVar8 != 0) && (_register_operand = uVar7, (ix86_isa_flags & 0x20000) != 0)) {
          return 0x3bd;
        }
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    iVar8 = avx_comparison_float_operator(x1,0x50);
    if (iVar8 != 0) {
      prVar2 = *(rtx *)&x1->u;
      _nonimmediate_operand = x1;
      iVar8 = register_operand(prVar2,0x50);
      if (iVar8 != 0) {
        uVar7 = *(undefined8 *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar8 = nonimmediate_operand(uVar7,0x50);
        if (iVar8 != 0) {
          if ((ix86_isa_flags & 0x20) != 0) {
            _register_operand = uVar7;
            return 0x3ec;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          _register_operand = uVar7;
        }
      }
    }
  default:
    iVar8 = sse_comparison_operator(x1,0x50);
    if (iVar8 != 0) {
      _nonimmediate_operand = x1;
      prVar2 = *(rtx *)&x1->u;
      iVar8 = register_operand(prVar2,0x50);
      if (iVar8 != 0) {
        uVar7 = *(undefined8 *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar8 = nonimmediate_operand(uVar7,0x50);
        if (((iVar8 != 0) && (_register_operand = uVar7, (ix86_isa_flags & 0x800000) == 0)) &&
           ((ix86_isa_flags & 0x20000) != 0)) {
          return 0x3f2;
        }
      }
    }
    break;
  case 0x65:
    psVar6 = *(short **)&x1->u;
    if ((*(char *)(psVar6 + 1) == 'N') && (*psVar6 == 0x7c)) {
      prVar2 = *(rtx *)(psVar6 + 4);
      iVar8 = nonimmediate_operand(prVar2,0x4f);
      if ((iVar8 != 0) &&
         ((((psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = prVar2, *psVar6 == 0xf &&
            (**(int **)(psVar6 + 4) == 2)) &&
           (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)) &&
          ((*(long *)(*(long *)(psVar6 + 4) + 0x10) == _bt_comparison_operator &&
           ((ix86_isa_flags & 0x20000) != 0)))))) {
        return 0x48f;
      }
    }
    break;
  case 0x67:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == '=') {
      if (*(short *)prVar2 == 0x7c) {
        prVar5 = *(rtx *)&prVar2->u;
        iVar8 = nonimmediate_operand(prVar5,0x41);
        if (((iVar8 != 0) &&
            (psVar6 = *(short **)&(prVar2->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar5,
            *psVar6 == 0xf)) &&
           ((**(int **)(psVar6 + 4) == 2 &&
            (((*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand &&
              (*(long *)(*(long *)(psVar6 + 4) + 0x10) == _bt_comparison_operator)) &&
             ((ix86_isa_flags & 0x20000) != 0)))))) {
          return 0x483;
        }
      }
      else {
        iVar8 = nonimmediate_operand(prVar2,0x3d);
        if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 0x20000) != 0)) {
          return 0x47a;
        }
      }
    }
    break;
  case 0x70:
    prVar2 = *(rtx *)&x1->u;
    iVar8 = nonimmediate_operand(prVar2,0x50);
    if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar2, (ix86_isa_flags & 0x20000) != 0)) {
      return 0x39e;
    }
    break;
  case 0x7b:
    if (*(char *)(*(long *)&x1->u + 2) == 'P') {
      iVar8 = recog_17(x0,insn,pnum_clobbers);
      return iVar8;
    }
    break;
  case 0x7c:
    psVar6 = *(short **)&x1->u;
    if ((*(char *)(psVar6 + 1) == 'R') && (*psVar6 == 0x7d)) {
      prVar2 = *(rtx *)(psVar6 + 4);
      iVar8 = register_operand(prVar2,0x50);
      if (iVar8 != 0) {
        uVar7 = *(undefined8 *)(psVar6 + 8);
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar8 = nonimmediate_operand(uVar7,0x50);
        if (((iVar8 != 0) &&
            (psVar6 = *(short **)&(x1->u).field_0x8, _register_operand = uVar7, *psVar6 == 0xf)) &&
           (**(int **)(psVar6 + 4) == 2)) {
          prVar2 = *(rtx *)(*(long *)(psVar6 + 4) + 8);
          iVar8 = const_0_to_1_operand(prVar2,0);
          if (iVar8 != 0) {
            uVar7 = *(undefined8 *)(*(long *)(psVar6 + 4) + 0x10);
            _nonimmediate_operand = prVar2;
            iVar8 = const_2_to_3_operand(uVar7,0);
            if (iVar8 != 0) {
              if ((ix86_isa_flags & 0x20) != 0) {
                _memory_operand = uVar7;
                return 0x4db;
              }
              _memory_operand = uVar7;
              if ((ix86_isa_flags & 0x20000) != 0) {
                return 0x4dd;
              }
            }
          }
        }
      }
    }
    break;
  case 0x7d:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == '\'') {
      switch(*(short *)prVar2) {
      case 0x25:
      case 0x27:
      case 0x2b:
        iVar8 = nonimmediate_operand(prVar2,0x27);
        if (iVar8 != 0) {
          uVar7 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          iVar8 = rtx_equal_p(uVar7,prVar2);
          if ((iVar8 != 0) && ((ix86_isa_flags & 0x40000) != 0)) {
            return 0x4ec;
          }
          iVar8 = vector_move_operand(uVar7,0x27);
          if (iVar8 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = uVar7;
              return 0x4ed;
            }
            _register_operand = uVar7;
            if ((ix86_isa_flags & 0x10000) != 0) {
              return 0x4ee;
            }
          }
        }
        break;
      case 0x31:
        psVar6 = *(short **)&prVar2->u;
        if ((*(char *)(psVar6 + 1) == '\'') && (*psVar6 == 0x7c)) {
          prVar5 = *(rtx *)(psVar6 + 4);
          iVar8 = register_operand(prVar5,0x50);
          if ((((iVar8 != 0) &&
               ((((psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = prVar5, *psVar6 == 0xf
                  && (**(int **)(psVar6 + 4) == 1)) &&
                 (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)) &&
                ((psVar6 = *(short **)&(prVar2->u).field_0x8, *(char *)(psVar6 + 1) == '\'' &&
                 (*psVar6 == 0x7c)))))) &&
              (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),prVar5), iVar8 != 0)) &&
             ((((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1))
               && ((*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar6 = *(short **)&(x1->u).field_0x8, *(char *)(psVar6 + 1) == '\'' &&
                     (*psVar6 == 0x31)) &&
                    (psVar4 = *(short **)(psVar6 + 4), *(char *)(psVar4 + 1) == '\'')))))) &&
              (*psVar4 == 0x7c)))) {
            uVar7 = *(undefined8 *)(psVar4 + 4);
            iVar8 = nonimmediate_operand(uVar7,0x50);
            if (((((iVar8 != 0) &&
                  (psVar4 = *(short **)(psVar4 + 8), _register_operand = uVar7, *psVar4 == 0xf)) &&
                 ((**(int **)(psVar4 + 4) == 1 &&
                  ((*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand &&
                   (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\'')))))) &&
                ((*psVar6 == 0x7c &&
                 (((iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),uVar7), iVar8 != 0 &&
                   (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)) &&
                  (**(int **)(psVar6 + 4) == 1)))))) &&
               ((**(short **)(*(long *)(psVar6 + 4) + 8) == 0x1e &&
                (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 8) + 4) == 1)))) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x3e1;
              }
              if ((ix86_isa_flags & 0x40000) != 0) {
                return 0x3e3;
              }
            }
          }
        }
        break;
      case 0x32:
        psVar6 = *(short **)&prVar2->u;
        if ((*(char *)(psVar6 + 1) == '\'') && (*psVar6 == 0x7c)) {
          prVar5 = *(rtx *)(psVar6 + 4);
          iVar8 = register_operand(prVar5,0x50);
          if ((((iVar8 != 0) &&
               (((((psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = prVar5, *psVar6 == 0xf
                   && (**(int **)(psVar6 + 4) == 1)) &&
                  (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)) &&
                 ((psVar6 = *(short **)&(prVar2->u).field_0x8, *(char *)(psVar6 + 1) == '\'' &&
                  (*psVar6 == 0x7c)))) &&
                (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),prVar5), iVar8 != 0)))) &&
              (((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1))
               && (*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator)))) &&
             ((((psVar6 = *(short **)&(x1->u).field_0x8, *(char *)(psVar6 + 1) == '\'' &&
                (*psVar6 == 0x32)) &&
               (psVar4 = *(short **)(psVar6 + 4), *(char *)(psVar4 + 1) == '\'')) &&
              (*psVar4 == 0x7c)))) {
            uVar7 = *(undefined8 *)(psVar4 + 4);
            iVar8 = nonimmediate_operand(uVar7,0x50);
            if ((((iVar8 != 0) &&
                 (psVar4 = *(short **)(psVar4 + 8), _register_operand = uVar7, *psVar4 == 0xf)) &&
                ((**(int **)(psVar4 + 4) == 1 &&
                 ((*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand &&
                  (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\'')))))) &&
               (((*psVar6 == 0x7c &&
                 (((iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),uVar7), iVar8 != 0 &&
                   (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)) &&
                  (**(int **)(psVar6 + 4) == 1)))) &&
                ((**(short **)(*(long *)(psVar6 + 4) + 8) == 0x1e &&
                 (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 8) + 4) == 1)))))) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x3e2;
              }
              if ((ix86_isa_flags & 0x40000) != 0) {
                return 0x3e4;
              }
            }
          }
        }
      }
    }
    break;
  case 0x7e:
    prVar2 = *(rtx *)&x1->u;
    if (prVar2->field_0x2 == '\'') {
      iVar8 = nonimmediate_operand(prVar2,0x27);
      x2 = prVar2;
      if (iVar8 != 0) {
        if ((ix86_isa_flags & 0x40000) != 0) {
          _GLOBAL_OFFSET_TABLE_ = prVar2;
          return 0x4ea;
        }
        x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 8);
        _GLOBAL_OFFSET_TABLE_ = prVar2;
      }
      iVar8 = register_operand(x2,0x27);
      if ((iVar8 != 0) && (_GLOBAL_OFFSET_TABLE_ = x2, (ix86_isa_flags & 0x20000) != 0)) {
        _GLOBAL_OFFSET_TABLE_ = x2;
        return 0x4eb;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_19(rtx x0,rtx insn,int *pnum_clobbers)

{
  long lVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  short *psVar5;
  undefined8 uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  rtx x7;
  
  lVar1 = *(long *)&(x0->u).field_0x8;
  lVar2 = *(long *)(lVar1 + 8);
  lVar3 = *(long *)(lVar2 + 8);
  psVar4 = *(short **)(lVar3 + 8);
  if (*psVar4 == 0x31) {
    psVar5 = *(short **)(psVar4 + 4);
    if ((*(char *)(psVar5 + 1) == '&') && (*psVar5 == 0x7c)) {
      uVar6 = *(undefined8 *)(psVar5 + 4);
      iVar9 = register_operand(uVar6,0x51);
      if ((((((iVar9 != 0) &&
             ((((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf &&
                (**(int **)(psVar5 + 4) == 1)) &&
               (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
              ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' && (*psVar4 == 0x7c))
              )))) && (iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar6), iVar9 != 0)) &&
           (((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf && (**(int **)(psVar4 + 4) == 1)) &&
            ((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
             (((psVar4 = *(short **)(lVar3 + 0x10), *(char *)(psVar4 + 1) == '&' &&
               (*psVar4 == 0x31)) &&
              (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')))))))) &&
          ((((*psVar5 == 0x7c &&
             (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0))
            && ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                (((**(int **)(psVar5 + 4) == 1 &&
                  (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                 ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                  (((*psVar4 == 0x7c &&
                    (iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                    iVar9 != 0)) && (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)))))))))) &&
           ((**(int **)(psVar4 + 4) == 1 &&
            (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)))))) &&
         ((psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'N' &&
          (((*psVar4 == 0x7d && (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')) &&
           ((*psVar5 == 0x31 &&
            ((psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&' && (*psVar7 == 0x7c))))
           )))))) {
        uVar6 = *(undefined8 *)(psVar7 + 4);
        iVar9 = nonimmediate_operand(uVar6,0x51);
        if ((((((iVar9 != 0) &&
               (((((psVar7 = *(short **)(psVar7 + 8), _register_operand = uVar6, *psVar7 == 0xf &&
                   (**(int **)(psVar7 + 4) == 1)) &&
                  (*(long *)(*(long *)(psVar7 + 4) + 8) == _q_regs_operand)) &&
                 ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&' &&
                  (*psVar5 == 0x7c)))) &&
                (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar9 != 0)))) &&
              (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1))
               && ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                     (*psVar4 == 0x31)) &&
                    (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')))))))) &&
             ((((((*psVar5 == 0x7c &&
                  (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar9 != 0))
                 && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                ((**(int **)(psVar5 + 4) == 1 &&
                 (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
               ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                (((*psVar4 == 0x7c &&
                  (iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand), iVar9 != 0))
                 && (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)))))) &&
              (((**(int **)(psVar4 + 4) == 1 &&
                (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)) &&
               (psVar4 = *(short **)(lVar1 + 0x10), *(char *)(psVar4 + 1) == 'O')))))) &&
            (((((*psVar4 == 0x7d && (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'N')
                ) && ((*psVar5 == 0x7d &&
                      ((((psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&' &&
                         (*psVar7 == 0x31)) &&
                        (psVar8 = *(short **)(psVar7 + 4), *(char *)(psVar8 + 1) == '&')) &&
                       ((*psVar8 == 0x7c &&
                        (iVar9 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                        iVar9 != 0)))))))) &&
              ((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
               ((**(int **)(psVar8 + 4) == 1 &&
                (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_fp_compare_mode)))))) &&
             ((((psVar7 = *(short **)(psVar7 + 8), *(char *)(psVar7 + 1) == '&' &&
                (((*psVar7 == 0x7c &&
                  (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar9 != 0)) && (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)))) &&
               (((**(int **)(psVar7 + 4) == 1 &&
                 (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_cc_mode)) &&
                (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&')))) &&
              ((*psVar5 == 0x31 && (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&'))
              )))))) &&
           ((((((((((*psVar7 == 0x7c &&
                    (((iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar9 != 0 && (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)) &&
                     (**(int **)(psVar7 + 4) == 1)))) &&
                   (((*(long *)(*(long *)(psVar7 + 4) + 8) == _index_register_operand &&
                     (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&')) &&
                    (*psVar5 == 0x7c)))) &&
                  (((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                    iVar9 != 0 && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                   ((**(int **)(psVar5 + 4) == 1 &&
                    ((((*(long *)(*(long *)(psVar5 + 4) + 8) == _const248_operand &&
                       (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'N')) &&
                      (*psVar4 == 0x7d)) &&
                     ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&' &&
                      (*psVar5 == 0x31)))))))))) &&
                 ((psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&' &&
                  ((*psVar7 == 0x7c &&
                   (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_register_operand), iVar9 != 0))
                  )))) && (((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                            (((**(int **)(psVar7 + 4) == 1 &&
                              (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_compare_mode)) &&
                             (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&')))) &&
                           (((*psVar5 == 0x7c &&
                             (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand),
                             iVar9 != 0)) && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf))))))
               && ((**(int **)(psVar5 + 4) == 1 &&
                   (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_cc_mode)))) &&
              ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
               (((*psVar4 == 0x31 &&
                 (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')) &&
                (*psVar5 == 0x7c)))))) &&
             ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar9 != 0 &&
              (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))) &&
            ((**(int **)(psVar5 + 4) == 1 &&
             (((*(long *)(*(long *)(psVar5 + 4) + 8) == _index_register_operand &&
               (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&')) &&
              ((*psVar4 == 0x7c &&
               ((((iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand), iVar9 != 0 &&
                  (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)) &&
                 (**(int **)(psVar4 + 4) == 1)) &&
                ((*(long *)(*(long *)(psVar4 + 4) + 8) == _const248_operand &&
                 ((ix86_isa_flags & 0x20) != 0)))))))))))))) {
          return 0x3db;
        }
      }
    }
  }
  else if (((*psVar4 == 0x32) && (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&'))
          && (*psVar5 == 0x7c)) {
    uVar6 = *(undefined8 *)(psVar5 + 4);
    iVar9 = register_operand(uVar6,0x51);
    if ((((((iVar9 != 0) &&
           (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf)) &&
          (**(int **)(psVar5 + 4) == 1)) &&
         (((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
           (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&')) &&
          ((*psVar4 == 0x7c &&
           ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar6), iVar9 != 0 &&
            (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)))))))) &&
        (((**(int **)(psVar4 + 4) == 1 &&
          (((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
            (psVar4 = *(short **)(lVar3 + 0x10), *(char *)(psVar4 + 1) == '&')) && (*psVar4 == 0x32)
           ))) && ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&' &&
                   (*psVar5 == 0x7c)))))) &&
       ((((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0 &&
          ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1)))) &&
         (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)) &&
        ((((((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' && (*psVar4 == 0x7c))
            && (iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0))
           && ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf && (**(int **)(psVar4 + 4) == 1))))
          && (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)) &&
         (((psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'N' && (*psVar4 == 0x7d))
          && ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&' &&
              (((*psVar5 == 0x32 && (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&')
                ) && (*psVar7 == 0x7c)))))))))))) {
      uVar6 = *(undefined8 *)(psVar7 + 4);
      iVar9 = nonimmediate_operand(uVar6,0x51);
      if ((((((iVar9 != 0) &&
             (psVar7 = *(short **)(psVar7 + 8), _register_operand = uVar6, *psVar7 == 0xf)) &&
            ((**(int **)(psVar7 + 4) == 1 &&
             ((((*(long *)(*(long *)(psVar7 + 4) + 8) == _q_regs_operand &&
                (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&')) &&
               ((*psVar5 == 0x7c &&
                (((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar9 != 0 &&
                  (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                 (**(int **)(psVar5 + 4) == 1)))))) &&
              ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
               (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&')))))))) &&
           ((*psVar4 == 0x32 &&
            (((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&' && (*psVar5 == 0x7c))
             && ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar9 != 0 &&
                 ((((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                    (**(int **)(psVar5 + 4) == 1)) &&
                   (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                  ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                   (*psVar4 == 0x7c)))))))))))) &&
          ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand), iVar9 != 0 &&
           (((((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf && (**(int **)(psVar4 + 4) == 1))
              && ((*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition &&
                  (((psVar4 = *(short **)(lVar1 + 0x10), *(char *)(psVar4 + 1) == 'O' &&
                    (*psVar4 == 0x7d)) &&
                   (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'N')))))) &&
             ((((*psVar5 == 0x7d && (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&')
                ) && (*psVar7 == 0x32)) &&
              ((psVar8 = *(short **)(psVar7 + 4), *(char *)(psVar8 + 1) == '&' && (*psVar8 == 0x7c))
              )))) && ((((iVar9 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                         iVar9 != 0 &&
                         (((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                           (**(int **)(psVar8 + 4) == 1)) &&
                          (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_fp_compare_mode)))) &&
                        (((psVar7 = *(short **)(psVar7 + 8), *(char *)(psVar7 + 1) == '&' &&
                          (*psVar7 == 0x7c)) &&
                         ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                          iVar9 != 0 &&
                          (((((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                              (**(int **)(psVar7 + 4) == 1)) &&
                             ((*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_cc_mode &&
                              ((((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&' &&
                                 (*psVar5 == 0x32)) &&
                                (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&')) &&
                               ((*psVar7 == 0x7c &&
                                (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),
                                                     _GLOBAL_OFFSET_TABLE_), iVar9 != 0)))))))) &&
                            (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)) &&
                           ((**(int **)(psVar7 + 4) == 1 &&
                            (*(long *)(*(long *)(psVar7 + 4) + 8) == _index_register_operand))))))))
                        )) && (((((((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&'
                                    && (((*psVar5 == 0x7c &&
                                         (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),
                                                              _GLOBAL_OFFSET_TABLE_), iVar9 != 0))
                                        && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))) &&
                                   (((**(int **)(psVar5 + 4) == 1 &&
                                     (*(long *)(*(long *)(psVar5 + 4) + 8) == _const248_operand)) &&
                                    (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'N')
                                    ))) && ((*psVar4 == 0x7d &&
                                            (psVar5 = *(short **)(psVar4 + 4),
                                            *(char *)(psVar5 + 1) == '&')))) &&
                                 ((*psVar5 == 0x32 &&
                                  (((psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '&'
                                    && (*psVar7 == 0x7c)) &&
                                   (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),
                                                        _register_operand), iVar9 != 0)))))) &&
                                ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                                 (**(int **)(psVar7 + 4) == 1)))) &&
                               (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_compare_mode)))))))
           ))) && ((((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '&' &&
                     (*psVar5 == 0x7c)) &&
                    ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar9 != 0
                     && ((((((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                             (**(int **)(psVar5 + 4) == 1)) &&
                            (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_cc_mode)) &&
                           ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&' &&
                            (*psVar4 == 0x32)))) &&
                          (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '&')) &&
                         ((*psVar5 == 0x7c &&
                          (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand),
                          iVar9 != 0)))))))) &&
                   ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                    (((((**(int **)(psVar5 + 4) == 1 &&
                        (*(long *)(*(long *)(psVar5 + 4) + 8) == _index_register_operand)) &&
                       (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '&')) &&
                      ((*psVar4 == 0x7c &&
                       (iVar9 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand),
                       iVar9 != 0)))) &&
                     (((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                       ((**(int **)(psVar4 + 4) == 1 &&
                        (*(long *)(*(long *)(psVar4 + 4) + 8) == _const248_operand)))) &&
                      ((ix86_isa_flags & 0x20) != 0)))))))))) {
        return 0x3dc;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_20(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  ushort *puVar2;
  rtx prVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  rtx prVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x4;
  rtx x5;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  switch(*(short *)x1) {
  case 0x12:
    iVar11 = **(int **)&x1->u;
    if (iVar11 == 3) {
      if (*(int *)&(x1->u).field_0x8 == 0xa6) {
        prVar7 = *(rtx *)(*(long *)&x1->u + 8);
        iVar11 = register_operand(prVar7,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if (iVar11 != 0) {
            prVar7 = *(rtx *)(*(long *)&x1->u + 0x18);
            _register_operand = uVar5;
            iVar11 = const_0_to_31_operand(prVar7,0x10);
            if ((iVar11 != 0) && (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x20) != 0)) {
              iVar11 = 999;
              goto LAB_0012b6e4;
            }
          }
        }
      }
    }
    else if (iVar11 < 4) {
      if (iVar11 == 1) {
        iVar11 = *(int *)&(x1->u).field_0x8;
        if (iVar11 == 0x96) {
          puVar2 = *(ushort **)(*(long *)&x1->u + 8);
          if (*(char *)(puVar2 + 1) == 'Q') {
            uVar1 = *puVar2;
            if (uVar1 == 0x7b) {
              psVar4 = *(short **)(puVar2 + 4);
              if ((((*(char *)(psVar4 + 1) == 'Q') && (*psVar4 == 0x31)) &&
                  (psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'Q')) &&
                 (*psVar6 == 0x34)) {
                prVar7 = *(rtx *)(psVar6 + 4);
                iVar11 = nonimmediate_operand(prVar7,0x51);
                if (iVar11 != 0) {
                  uVar5 = *(undefined8 *)(psVar6 + 8);
                  _GLOBAL_OFFSET_TABLE_ = prVar7;
                  iVar11 = nonimmediate_operand(uVar5,0x51);
                  if (iVar11 != 0) {
                    prVar7 = *(rtx *)(psVar4 + 8);
                    _register_operand = uVar5;
                    iVar11 = nonimmediate_operand(prVar7,0x51);
                    if (((iVar11 != 0) &&
                        (psVar4 = *(short **)(puVar2 + 8), _nonimmediate_operand = prVar7,
                        *(char *)(psVar4 + 1) == 'Q')) &&
                       ((*psVar4 == 0x32 &&
                        ((psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'Q' &&
                         (*psVar6 == 0x34)))))) {
                      iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_);
                      if (iVar11 != 0) {
                        iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 8),_register_operand);
                        if (iVar11 != 0) {
                          iVar11 = rtx_equal_p(*(undefined8 *)(psVar4 + 8),_nonimmediate_operand);
                          if (((iVar11 != 0) &&
                              (psVar4 = *(short **)(puVar2 + 0xc), *psVar4 == 0x1e)) &&
                             ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4))) {
                            if ((int)*(undefined8 *)(psVar4 + 4) == 0x55) {
                              if (((ix86_isa_flags & 0x200) != 0) && ((_target_flags & 0x40) != 0))
                              {
                                iVar11 = 0x465;
                                goto LAB_0012b6e4;
                              }
                            }
                            else if ((((int)*(undefined8 *)(psVar4 + 4) == 0xaa) &&
                                     ((ix86_isa_flags & 0x200) != 0)) &&
                                    ((_target_flags & 0x40) != 0)) {
                              iVar11 = 0x461;
                              goto LAB_0012b6e4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (uVar1 < 0x7c) {
              if (uVar1 == 0x31) {
                psVar4 = *(short **)(puVar2 + 4);
                if ((*(char *)(psVar4 + 1) == 'Q') && (*psVar4 == 0x34)) {
                  prVar7 = *(rtx *)(psVar4 + 4);
                  iVar11 = nonimmediate_operand(prVar7,0x51);
                  if (iVar11 != 0) {
                    uVar5 = *(undefined8 *)(psVar4 + 8);
                    _GLOBAL_OFFSET_TABLE_ = prVar7;
                    iVar11 = nonimmediate_operand(uVar5,0x51);
                    if (iVar11 != 0) {
                      prVar7 = *(rtx *)(puVar2 + 8);
                      _register_operand = uVar5;
                      iVar11 = nonimmediate_operand(prVar7,0x51);
                      if (((iVar11 != 0) &&
                          (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                         ((_target_flags & 0x40) != 0)) {
                        iVar11 = 0x441;
                        goto LAB_0012b6e4;
                      }
                    }
                  }
                }
              }
              else if ((uVar1 == 0x32) && (prVar7 = *(rtx *)(puVar2 + 4), prVar7->field_0x2 == 'Q'))
              {
                if (*(short *)prVar7 == 0x34) {
                  prVar3 = *(rtx *)&prVar7->u;
                  if (prVar3->field_0x2 == 'Q') {
                    if (*(short *)prVar3 == 0x33) {
                      prVar3 = *(rtx *)&prVar3->u;
                      iVar11 = nonimmediate_operand(prVar3,0x51);
                      if (iVar11 != 0) {
                        uVar5 = *(undefined8 *)&(prVar7->u).field_0x8;
                        _GLOBAL_OFFSET_TABLE_ = prVar3;
                        iVar11 = nonimmediate_operand(uVar5,0x51);
                        if (iVar11 != 0) {
                          prVar7 = *(rtx *)(puVar2 + 8);
                          _register_operand = uVar5;
                          iVar11 = nonimmediate_operand(prVar7,0x51);
                          if (((iVar11 != 0) &&
                              (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                             ((_target_flags & 0x40) != 0)) {
                            iVar11 = 0x447;
                            goto LAB_0012b6e4;
                          }
                        }
                      }
                    }
                    else {
                      iVar11 = nonimmediate_operand(prVar3,0x51);
                      if (iVar11 != 0) {
                        uVar5 = *(undefined8 *)&(prVar7->u).field_0x8;
                        _GLOBAL_OFFSET_TABLE_ = prVar3;
                        iVar11 = nonimmediate_operand(uVar5,0x51);
                        if (iVar11 != 0) {
                          prVar7 = *(rtx *)(puVar2 + 8);
                          _register_operand = uVar5;
                          iVar11 = nonimmediate_operand(prVar7,0x51);
                          if (((iVar11 != 0) &&
                              (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                             ((_target_flags & 0x40) != 0)) {
                            iVar11 = 0x443;
                            goto LAB_0012b6e4;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  iVar11 = nonimmediate_operand(prVar7,0x51);
                  if (((iVar11 != 0) &&
                      (psVar4 = *(short **)(puVar2 + 8), _nonimmediate_operand = prVar7,
                      *(char *)(psVar4 + 1) == 'Q')) && (*psVar4 == 0x34)) {
                    prVar7 = *(rtx *)(psVar4 + 4);
                    iVar11 = nonimmediate_operand(prVar7,0x51);
                    if (iVar11 != 0) {
                      uVar5 = *(undefined8 *)(psVar4 + 8);
                      _GLOBAL_OFFSET_TABLE_ = prVar7;
                      iVar11 = nonimmediate_operand(uVar5,0x51);
                      if (((iVar11 != 0) &&
                          (_register_operand = uVar5, (ix86_isa_flags & 0x200) != 0)) &&
                         ((_target_flags & 0x40) != 0)) {
                        iVar11 = 0x445;
                        goto LAB_0012b6e4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if (iVar11 < 0x97) {
          if (iVar11 == 0x2d) {
            prVar7 = *(rtx *)(*(long *)&x1->u + 8);
            iVar11 = nonimmediate_operand(prVar7,0x51);
            if ((iVar11 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
              iVar11 = 0x397;
              goto LAB_0012b6e4;
            }
          }
          else if (iVar11 == 0x2e) {
            prVar7 = *(rtx *)(*(long *)&x1->u + 8);
            iVar11 = nonimmediate_operand(prVar7,0x51);
            if ((iVar11 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
              iVar11 = 0x3a3;
              goto LAB_0012b6e4;
            }
          }
        }
      }
      else if (iVar11 == 2) {
        iVar11 = *(int *)&(x1->u).field_0x8;
        if (iVar11 == 0x33) {
          prVar7 = *(rtx *)(*(long *)&x1->u + 8);
          iVar11 = register_operand(prVar7,0x51);
          if (iVar11 != 0) {
            uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar7;
            iVar11 = nonimmediate_operand(uVar5,0x51);
            if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
              iVar11 = 0x3c9;
              goto LAB_0012b6e4;
            }
          }
        }
        else if (iVar11 == 0x34) {
          prVar7 = *(rtx *)(*(long *)&x1->u + 8);
          iVar11 = register_operand(prVar7,0x51);
          if (iVar11 != 0) {
            uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar7;
            iVar11 = nonimmediate_operand(uVar5,0x51);
            if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
              iVar11 = 0x3cd;
              goto LAB_0012b6e4;
            }
          }
        }
      }
    }
    break;
  case 0x31:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'Q') {
      if (*(short *)prVar7 == 0x34) {
        prVar3 = *(rtx *)&prVar7->u;
        iVar11 = nonimmediate_operand(prVar3,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)&(prVar7->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar3;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if (iVar11 != 0) {
            prVar7 = *(rtx *)&(x1->u).field_0x8;
            _register_operand = uVar5;
            iVar11 = nonimmediate_operand(prVar7,0x51);
            if (((iVar11 != 0) && (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0))
               && ((_target_flags & 0x40) != 0)) {
              iVar11 = 0x421;
              goto LAB_0012b6e4;
            }
          }
        }
      }
      else {
        iVar11 = nonimmediate_operand(prVar7,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
            iVar11 = ix86_binary_operator_ok(0x31,0x51,&recog_data);
            if (iVar11 != 0) {
              iVar11 = 0x371;
              goto LAB_0012b6e4;
            }
          }
        }
      }
    }
    break;
  case 0x32:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'Q') {
      if (*(short *)x2 == 0x34) {
        prVar7 = *(rtx *)&x2->u;
        if (prVar7->field_0x2 == 'Q') {
          if (*(short *)prVar7 == 0x33) {
            prVar7 = *(rtx *)&prVar7->u;
            iVar11 = nonimmediate_operand(prVar7,0x51);
            if (iVar11 != 0) {
              uVar5 = *(undefined8 *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar7;
              iVar11 = nonimmediate_operand(uVar5,0x51);
              if (iVar11 != 0) {
                prVar7 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = uVar5;
                iVar11 = nonimmediate_operand(prVar7,0x51);
                if (((iVar11 != 0) &&
                    (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                   ((_target_flags & 0x40) != 0)) {
                  iVar11 = 0x427;
                  goto LAB_0012b6e4;
                }
              }
            }
          }
          else {
            iVar11 = nonimmediate_operand(prVar7,0x51);
            if (iVar11 != 0) {
              uVar5 = *(undefined8 *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar7;
              iVar11 = nonimmediate_operand(uVar5,0x51);
              if (iVar11 != 0) {
                prVar7 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = uVar5;
                iVar11 = nonimmediate_operand(prVar7,0x51);
                if (((iVar11 != 0) &&
                    (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                   ((_target_flags & 0x40) != 0)) {
                  iVar11 = 0x423;
                  goto LAB_0012b6e4;
                }
              }
            }
          }
        }
      }
      else {
        iVar11 = nonimmediate_operand(x2,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x2;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if (iVar11 == 0) {
            x2 = *(rtx *)&x1->u;
          }
          else {
            _register_operand = uVar5;
            if ((ix86_isa_flags & 0x20) != 0) {
              iVar11 = ix86_binary_operator_ok(0x32,0x51,&recog_data);
              if (iVar11 != 0) {
                iVar11 = 0x372;
                goto LAB_0012b6e4;
              }
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&x1->u;
          }
        }
        iVar11 = nonimmediate_operand(x2,0x51);
        if (iVar11 != 0) {
          _nonimmediate_operand = x2;
          psVar4 = *(short **)&(x1->u).field_0x8;
          if ((*(char *)(psVar4 + 1) == 'Q') && (*psVar4 == 0x34)) {
            prVar7 = *(rtx *)(psVar4 + 4);
            iVar11 = nonimmediate_operand(prVar7,0x51);
            if (iVar11 != 0) {
              uVar5 = *(undefined8 *)(psVar4 + 8);
              _GLOBAL_OFFSET_TABLE_ = prVar7;
              iVar11 = nonimmediate_operand(uVar5,0x51);
              if (((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x200) != 0)) &&
                 ((_target_flags & 0x40) != 0)) {
                iVar11 = 0x425;
                goto LAB_0012b6e4;
              }
            }
          }
        }
      }
    }
    break;
  case 0x34:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar7,0x51);
    if (iVar11 != 0) {
      uVar5 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar11 = nonimmediate_operand(uVar5,0x51);
      if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
        iVar11 = ix86_binary_operator_ok(0x34,0x51,&recog_data);
        if (iVar11 != 0) {
          iVar11 = 899;
          goto LAB_0012b6e4;
        }
      }
    }
    break;
  case 0x37:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = register_operand(prVar7,0x51);
    if (iVar11 != 0) {
      uVar5 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar11 = nonimmediate_operand(uVar5,0x51);
      if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
        iVar11 = 0x38d;
        goto LAB_0012b6e4;
      }
    }
    break;
  case 0x3d:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'Q') {
      if (*(short *)prVar7 == 0x40) {
        prVar7 = *(rtx *)&prVar7->u;
        iVar11 = register_operand(prVar7,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
            iVar11 = 0x3fb;
            goto LAB_0012b6e4;
          }
        }
      }
      else {
        iVar11 = nonimmediate_operand(prVar7,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
            iVar11 = ix86_binary_operator_ok(0x3d,0x51,&recog_data);
            if (iVar11 != 0) {
              iVar11 = 0x405;
              goto LAB_0012b6e4;
            }
          }
        }
      }
    }
    break;
  case 0x3e:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar7,0x51);
    if (iVar11 != 0) {
      uVar5 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar11 = nonimmediate_operand(uVar5,0x51);
      if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
        iVar11 = ix86_binary_operator_ok(0x3e,0x51,&recog_data);
        if (iVar11 != 0) {
          iVar11 = 0x406;
          goto LAB_0012b6e4;
        }
      }
    }
    break;
  case 0x3f:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar7,0x51);
    if (iVar11 != 0) {
      uVar5 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar11 = nonimmediate_operand(uVar5,0x51);
      if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
        iVar11 = ix86_binary_operator_ok(0x3f,0x51,&recog_data);
        if (iVar11 != 0) {
          iVar11 = 0x407;
          goto LAB_0012b6e4;
        }
      }
    }
    break;
  case 0x46:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar7,0x51);
    if (iVar11 != 0) {
      uVar5 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar11 = nonimmediate_operand(uVar5,0x51);
      if (iVar11 != 0) {
        _register_operand = uVar5;
        if (((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) {
          iVar11 = ix86_binary_operator_ok(0x46,0x51,&recog_data);
          if (iVar11 != 0) {
            iVar11 = 0x3ac;
            goto LAB_0012b6e4;
          }
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          iVar11 = 0x3b8;
          goto LAB_0012b6e4;
        }
      }
    }
    break;
  case 0x47:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar7,0x51);
    if (iVar11 != 0) {
      uVar5 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar11 = nonimmediate_operand(uVar5,0x51);
      if (iVar11 != 0) {
        _register_operand = uVar5;
        if (((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) {
          iVar11 = ix86_binary_operator_ok(0x47,0x51,&recog_data);
          if (iVar11 != 0) {
            iVar11 = 0x3ab;
            goto LAB_0012b6e4;
          }
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          iVar11 = 0x3b7;
          goto LAB_0012b6e4;
        }
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    iVar11 = avx_comparison_float_operator(x1,0x51);
    if (iVar11 != 0) {
      prVar7 = *(rtx *)&x1->u;
      _nonimmediate_operand = x1;
      iVar11 = register_operand(prVar7,0x51);
      if (iVar11 != 0) {
        uVar5 = *(undefined8 *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar7;
        iVar11 = nonimmediate_operand(uVar5,0x51);
        if ((iVar11 != 0) && (_register_operand = uVar5, (ix86_isa_flags & 0x20) != 0)) {
          iVar11 = 0x3ed;
          goto LAB_0012b6e4;
        }
      }
    }
    break;
  case 0x67:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar7,0x46);
    if ((iVar11 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
      iVar11 = 0x472;
      goto LAB_0012b6e4;
    }
    break;
  case 0x70:
    prVar7 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar7,0x51);
    if ((iVar11 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
      iVar11 = 0x39b;
      goto LAB_0012b6e4;
    }
    break;
  case 0x7b:
    psVar4 = *(short **)&x1->u;
    if (((*(char *)(psVar4 + 1) == 'Q') && (*psVar4 == 0x31)) &&
       (prVar7 = *(rtx *)(psVar4 + 4), prVar7->field_0x2 == 'Q')) {
      if (*(short *)prVar7 == 0x34) {
        prVar3 = *(rtx *)&prVar7->u;
        iVar11 = nonimmediate_operand(prVar3,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)&(prVar7->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar3;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if (iVar11 != 0) {
            prVar7 = *(rtx *)(psVar4 + 8);
            _register_operand = uVar5;
            iVar11 = nonimmediate_operand(prVar7,0x51);
            if (((iVar11 != 0) &&
                (psVar4 = *(short **)&(x1->u).field_0x8, _nonimmediate_operand = prVar7,
                *(char *)(psVar4 + 1) == 'Q')) &&
               ((*psVar4 == 0x32 &&
                ((psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'Q' &&
                 (*psVar6 == 0x34)))))) {
              iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_);
              if (iVar11 != 0) {
                iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 8),_register_operand);
                if (iVar11 != 0) {
                  iVar11 = rtx_equal_p(*(undefined8 *)(psVar4 + 8),_nonimmediate_operand);
                  if (((iVar11 != 0) && (psVar4 = *(short **)&(x1->u).field_0x10, *psVar4 == 0x1e))
                     && ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4))) {
                    if ((int)*(undefined8 *)(psVar4 + 4) == 0x55) {
                      if (((ix86_isa_flags & 0x200) != 0) && ((_target_flags & 0x40) != 0)) {
                        iVar11 = 0x45d;
                        goto LAB_0012b6e4;
                      }
                    }
                    else if ((((int)*(undefined8 *)(psVar4 + 4) == 0xaa) &&
                             ((ix86_isa_flags & 0x200) != 0)) && ((_target_flags & 0x40) != 0)) {
                      iVar11 = 0x459;
                      goto LAB_0012b6e4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        iVar11 = register_operand(prVar7,0x51);
        if (iVar11 != 0) {
          uVar5 = *(undefined8 *)(psVar4 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar11 = nonimmediate_operand(uVar5,0x51);
          if (((iVar11 != 0) &&
              (psVar4 = *(short **)&(x1->u).field_0x8, _register_operand = uVar5,
              *(char *)(psVar4 + 1) == 'Q')) && (*psVar4 == 0x32)) {
            iVar11 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_);
            if (iVar11 != 0) {
              iVar11 = rtx_equal_p(*(undefined8 *)(psVar4 + 8),_register_operand);
              if (((iVar11 != 0) && (psVar4 = *(short **)&(x1->u).field_0x10, *psVar4 == 0x1e)) &&
                 ((*(long *)(psVar4 + 4) == 0xaa && ((ix86_isa_flags & 0x20) != 0)))) {
                iVar11 = 0x3d3;
                goto LAB_0012b6e4;
              }
            }
          }
        }
      }
    }
    break;
  case 0x7c:
    x2 = *(rtx *)&x1->u;
    if (((x2->field_0x2 == 'T') && (*(short *)x2 == 0x7d)) &&
       (x3 = *(rtx *)&x2->u, x3->field_0x2 == 'Q')) {
      iVar11 = register_operand(x3,0x51);
      if (iVar11 != 0) {
        uVar5 = *(undefined8 *)&(x2->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = x3;
        iVar11 = nonimmediate_operand(uVar5,0x51);
        if (iVar11 == 0) {
          x3 = *(rtx *)&x2->u;
        }
        else {
          psVar4 = *(short **)&(x1->u).field_0x8;
          _register_operand = uVar5;
          if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 8)) {
            psVar6 = *(short **)(*(long *)(psVar4 + 4) + 8);
            if (*psVar6 == 0x1e) {
              if ((long)(int)*(undefined8 *)(psVar6 + 4) == *(long *)(psVar6 + 4)) {
                if ((int)*(undefined8 *)(psVar6 + 4) == 0) {
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _flags_reg_operand) {
                    if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _bt_comparison_operator) {
                      if (*(long *)(*(long *)(psVar4 + 4) + 0x20) == _constant_call_address_operand)
                      {
                        if (*(long *)(*(long *)(psVar4 + 4) + 0x28) == _ix86_fp_compare_mode) {
                          if (*(long *)(*(long *)(psVar4 + 4) + 0x30) ==
                              _const_0_to_255_mul_8_operand) {
                            if (*(long *)(*(long *)(psVar4 + 4) + 0x38) == _ix86_cc_mode) {
                              if ((*(long *)(*(long *)(psVar4 + 4) + 0x40) ==
                                   _ix86_vec_interleave_v2df_operator_ok) &&
                                 ((ix86_isa_flags & 0x20) != 0)) {
                                iVar11 = 0x497;
                                goto LAB_0012b6e4;
                              }
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                            else {
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                          }
                          else {
                            x2 = *(rtx *)&x1->u;
                            x3 = *(rtx *)&x2->u;
                          }
                        }
                        else {
                          x2 = *(rtx *)&x1->u;
                          x3 = *(rtx *)&x2->u;
                        }
                      }
                      else {
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                    }
                    else {
                      x2 = *(rtx *)&x1->u;
                      x3 = *(rtx *)&x2->u;
                    }
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
                else {
                  if ((int)*(undefined8 *)(psVar6 + 4) != 2) goto LAB_0012a85d;
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _sibcall_insn_operand) {
                    if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _swap_condition) {
                      if (*(long *)(*(long *)(psVar4 + 4) + 0x20) ==
                          _nonimmediate_or_sse_const_operand) {
                        if (*(long *)(*(long *)(psVar4 + 4) + 0x28) == _index_register_operand) {
                          if (*(long *)(*(long *)(psVar4 + 4) + 0x30) == _reg_not_xmm0_operand) {
                            if (*(long *)(*(long *)(psVar4 + 4) + 0x38) == _const248_operand) {
                              if ((*(long *)(*(long *)(psVar4 + 4) + 0x40) ==
                                   _nonimm_not_xmm0_operand) && ((ix86_isa_flags & 0x20) != 0)) {
                                iVar11 = 0x494;
                                goto LAB_0012b6e4;
                              }
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                            else {
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                          }
                          else {
                            x2 = *(rtx *)&x1->u;
                            x3 = *(rtx *)&x2->u;
                          }
                        }
                        else {
                          x2 = *(rtx *)&x1->u;
                          x3 = *(rtx *)&x2->u;
                        }
                      }
                      else {
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                    }
                    else {
                      x2 = *(rtx *)&x1->u;
                      x3 = *(rtx *)&x2->u;
                    }
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
              }
              else {
LAB_0012a85d:
                x2 = *(rtx *)&x1->u;
                x3 = *(rtx *)&x2->u;
              }
            }
            else {
              x2 = *(rtx *)&x1->u;
              x3 = *(rtx *)&x2->u;
            }
          }
          else {
            x2 = *(rtx *)&x1->u;
            x3 = *(rtx *)&x2->u;
          }
        }
      }
      iVar11 = nonimmediate_operand(x3,0x51);
      if (iVar11 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x3;
        iVar11 = rtx_equal_p(*(undefined8 *)&(x2->u).field_0x8,x3);
        if (iVar11 == 0) {
          x3 = *(rtx *)&x2->u;
        }
        else {
          psVar4 = *(short **)&(x1->u).field_0x8;
          if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 8)) {
            psVar6 = *(short **)(*(long *)(psVar4 + 4) + 8);
            if (*psVar6 == 0x1e) {
              if ((long)(int)*(undefined8 *)(psVar6 + 4) == *(long *)(psVar6 + 4)) {
                if ((int)*(undefined8 *)(psVar6 + 4) == 0) {
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _q_regs_operand) {
                    if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _ix86_fp_comparison_operator) {
                      if (*(long *)(*(long *)(psVar4 + 4) + 0x20) == _ix86_fp_comparison_operator) {
                        if (*(long *)(*(long *)(psVar4 + 4) + 0x28) == _ix86_fp_compare_mode) {
                          if (*(long *)(*(long *)(psVar4 + 4) + 0x30) == _ix86_fp_compare_mode) {
                            if (*(long *)(*(long *)(psVar4 + 4) + 0x38) == _index_register_operand)
                            {
                              if ((*(long *)(*(long *)(psVar4 + 4) + 0x40) ==
                                   _index_register_operand) && ((ix86_isa_flags & 0x20) != 0)) {
                                iVar11 = 0x49c;
                                goto LAB_0012b6e4;
                              }
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                            else {
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                          }
                          else {
                            x2 = *(rtx *)&x1->u;
                            x3 = *(rtx *)&x2->u;
                          }
                        }
                        else {
                          x2 = *(rtx *)&x1->u;
                          x3 = *(rtx *)&x2->u;
                        }
                      }
                      else {
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                    }
                    else {
                      x2 = *(rtx *)&x1->u;
                      x3 = *(rtx *)&x2->u;
                    }
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
                else {
                  if ((int)*(undefined8 *)(psVar6 + 4) != 1) goto LAB_0012ace8;
                  if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _bt_comparison_operator) {
                    if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _swap_condition) {
                      if (*(long *)(*(long *)(psVar4 + 4) + 0x20) == _swap_condition) {
                        if (*(long *)(*(long *)(psVar4 + 4) + 0x28) == _ix86_cc_mode) {
                          if (*(long *)(*(long *)(psVar4 + 4) + 0x30) == _ix86_cc_mode) {
                            if (*(long *)(*(long *)(psVar4 + 4) + 0x38) == _const248_operand) {
                              if ((*(long *)(*(long *)(psVar4 + 4) + 0x40) == _const248_operand) &&
                                 ((ix86_isa_flags & 0x20) != 0)) {
                                iVar11 = 0x49a;
                                goto LAB_0012b6e4;
                              }
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                            else {
                              x2 = *(rtx *)&x1->u;
                              x3 = *(rtx *)&x2->u;
                            }
                          }
                          else {
                            x2 = *(rtx *)&x1->u;
                            x3 = *(rtx *)&x2->u;
                          }
                        }
                        else {
                          x2 = *(rtx *)&x1->u;
                          x3 = *(rtx *)&x2->u;
                        }
                      }
                      else {
                        x2 = *(rtx *)&x1->u;
                        x3 = *(rtx *)&x2->u;
                      }
                    }
                    else {
                      x2 = *(rtx *)&x1->u;
                      x3 = *(rtx *)&x2->u;
                    }
                  }
                  else {
                    x2 = *(rtx *)&x1->u;
                    x3 = *(rtx *)&x2->u;
                  }
                }
              }
              else {
LAB_0012ace8:
                x2 = *(rtx *)&x1->u;
                x3 = *(rtx *)&x2->u;
              }
            }
            else {
              x2 = *(rtx *)&x1->u;
              x3 = *(rtx *)&x2->u;
            }
          }
          else {
            x2 = *(rtx *)&x1->u;
            x3 = *(rtx *)&x2->u;
          }
        }
      }
      iVar11 = register_operand(x3,0x51);
      if (iVar11 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x3;
        uVar5 = *(undefined8 *)&(x2->u).field_0x8;
        iVar11 = nonimmediate_operand(uVar5,0x51);
        if (((iVar11 != 0) &&
            (psVar4 = *(short **)&(x1->u).field_0x8, _register_operand = uVar5, *psVar4 == 0xf)) &&
           (**(int **)(psVar4 + 4) == 8)) {
          prVar7 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
          iVar11 = const_0_to_3_operand(prVar7,0);
          if (iVar11 != 0) {
            lVar8 = *(long *)(*(long *)(psVar4 + 4) + 0x10);
            _nonimmediate_operand = prVar7;
            iVar11 = const_0_to_3_operand(lVar8,0);
            if (iVar11 != 0) {
              lVar9 = *(long *)(*(long *)(psVar4 + 4) + 0x18);
              _memory_operand = lVar8;
              iVar11 = const_8_to_11_operand(lVar9,0);
              if (iVar11 != 0) {
                lVar8 = *(long *)(*(long *)(psVar4 + 4) + 0x20);
                _push_operand = lVar9;
                iVar11 = const_8_to_11_operand(lVar8,0);
                if (iVar11 != 0) {
                  uVar10 = *(ulong *)(*(long *)(psVar4 + 4) + 0x28);
                  _nonmemory_no_elim_operand = lVar8;
                  iVar11 = const_4_to_7_operand(uVar10,0);
                  if (iVar11 != 0) {
                    lVar8 = *(long *)(*(long *)(psVar4 + 4) + 0x30);
                    _target_flags = uVar10;
                    iVar11 = const_4_to_7_operand(lVar8,0);
                    if (iVar11 != 0) {
                      lVar9 = *(long *)(*(long *)(psVar4 + 4) + 0x38);
                      _float_operator = lVar8;
                      iVar11 = const_12_to_15_operand(lVar9,0);
                      if (iVar11 != 0) {
                        lVar8 = *(long *)(*(long *)(psVar4 + 4) + 0x40);
                        _const0_operand = lVar9;
                        iVar11 = const_12_to_15_operand(lVar8,0);
                        if ((((iVar11 != 0) &&
                             (_ix86_tune_features = lVar8, (ix86_isa_flags & 0x20) != 0)) &&
                            ((*(long *)&_nonimmediate_operand->u ==
                              *(long *)(_target_flags + 8) + -4 &&
                             ((*(long *)(_memory_operand + 8) == *(long *)(_float_operator + 8) + -4
                              && (*(long *)(_push_operand + 8) ==
                                  *(long *)(_const0_operand + 8) + -4)))))) &&
                           (*(long *)(_nonmemory_no_elim_operand + 8) == *(long *)(lVar8 + 8) + -4))
                        {
                          iVar11 = 0x49e;
                          goto LAB_0012b6e4;
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
    }
    break;
  case 0x7d:
    psVar4 = *(short **)&x1->u;
    if ((((*(char *)(psVar4 + 1) == 'O') && (*psVar4 == 0x7d)) &&
        (psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == 'N')) &&
       ((*psVar4 == 0x7d && (*(char *)(*(long *)(psVar4 + 4) + 2) == '&')))) {
      iVar11 = recog_19(x0,insn,pnum_clobbers);
      goto LAB_0012b6e4;
    }
  }
  iVar11 = -1;
LAB_0012b6e4:
  return iVar11;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_21(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  ushort *puVar2;
  rtx prVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  rtx prVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx *operands;
  rtx x4;
  rtx x5;
  rtx x6;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  switch(*(short *)x1) {
  case 0x12:
    iVar10 = **(int **)&x1->u;
    if (iVar10 == 3) {
      if (*(int *)&(x1->u).field_0x8 == 0xa6) {
        prVar7 = *(rtx *)(*(long *)&x1->u + 8);
        iVar10 = register_operand(prVar7,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if (iVar10 != 0) {
            prVar7 = *(rtx *)(*(long *)&x1->u + 0x18);
            _register_operand = uVar8;
            iVar10 = const_0_to_31_operand(prVar7,0x10);
            if ((iVar10 != 0) && (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x20) != 0)) {
              return 1000;
            }
          }
        }
      }
    }
    else if (iVar10 < 4) {
      if (iVar10 == 1) {
        if ((*(int *)&(x1->u).field_0x8 == 0x96) &&
           (puVar2 = *(ushort **)(*(long *)&x1->u + 8), *(char *)(puVar2 + 1) == 'R')) {
          uVar1 = *puVar2;
          if (uVar1 == 0x7b) {
            psVar4 = *(short **)(puVar2 + 4);
            if ((((*(char *)(psVar4 + 1) == 'R') && (*psVar4 == 0x31)) &&
                (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'R')) &&
               (*psVar5 == 0x34)) {
              prVar7 = *(rtx *)(psVar5 + 4);
              iVar10 = nonimmediate_operand(prVar7,0x52);
              if (iVar10 != 0) {
                uVar8 = *(undefined8 *)(psVar5 + 8);
                _GLOBAL_OFFSET_TABLE_ = prVar7;
                iVar10 = nonimmediate_operand(uVar8,0x52);
                if (iVar10 != 0) {
                  prVar7 = *(rtx *)(psVar4 + 8);
                  _register_operand = uVar8;
                  iVar10 = nonimmediate_operand(prVar7,0x52);
                  if (((((iVar10 != 0) &&
                        (psVar4 = *(short **)(puVar2 + 8), _nonimmediate_operand = prVar7,
                        *(char *)(psVar4 + 1) == 'R')) &&
                       ((*psVar4 == 0x32 &&
                        ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'R' &&
                         (*psVar5 == 0x34)))))) &&
                      (iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar10 != 0)) &&
                     ((((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 8),_register_operand),
                        iVar10 != 0 &&
                        (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 8),_nonimmediate_operand),
                        iVar10 != 0)) && (psVar4 = *(short **)(puVar2 + 0xc), *psVar4 == 0x1e)) &&
                      ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4))))) {
                    if ((int)*(undefined8 *)(psVar4 + 4) == 5) {
                      if (((ix86_isa_flags & 0x200) != 0) && ((target_flags & 0x40) != 0)) {
                        return 0x466;
                      }
                    }
                    else if ((((int)*(undefined8 *)(psVar4 + 4) == 10) &&
                             ((ix86_isa_flags & 0x200) != 0)) && ((target_flags & 0x40) != 0)) {
                      return 0x462;
                    }
                  }
                }
              }
            }
          }
          else if (uVar1 < 0x7c) {
            if (uVar1 == 0x31) {
              psVar4 = *(short **)(puVar2 + 4);
              if ((*(char *)(psVar4 + 1) == 'R') && (*psVar4 == 0x34)) {
                prVar7 = *(rtx *)(psVar4 + 4);
                iVar10 = nonimmediate_operand(prVar7,0x52);
                if (iVar10 != 0) {
                  uVar8 = *(undefined8 *)(psVar4 + 8);
                  _GLOBAL_OFFSET_TABLE_ = prVar7;
                  iVar10 = nonimmediate_operand(uVar8,0x52);
                  if (iVar10 != 0) {
                    prVar7 = *(rtx *)(puVar2 + 8);
                    _register_operand = uVar8;
                    iVar10 = nonimmediate_operand(prVar7,0x52);
                    if (((iVar10 != 0) &&
                        (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                       ((target_flags & 0x40) != 0)) {
                      return 0x442;
                    }
                  }
                }
              }
            }
            else if ((uVar1 == 0x32) && (prVar7 = *(rtx *)(puVar2 + 4), prVar7->field_0x2 == 'R')) {
              if (*(short *)prVar7 == 0x34) {
                prVar3 = *(rtx *)&prVar7->u;
                if (prVar3->field_0x2 == 'R') {
                  if (*(short *)prVar3 == 0x33) {
                    prVar3 = *(rtx *)&prVar3->u;
                    iVar10 = nonimmediate_operand(prVar3,0x52);
                    if (iVar10 != 0) {
                      uVar8 = *(undefined8 *)&(prVar7->u).field_0x8;
                      _GLOBAL_OFFSET_TABLE_ = prVar3;
                      iVar10 = nonimmediate_operand(uVar8,0x52);
                      if (iVar10 != 0) {
                        prVar7 = *(rtx *)(puVar2 + 8);
                        _register_operand = uVar8;
                        iVar10 = nonimmediate_operand(prVar7,0x52);
                        if (((iVar10 != 0) &&
                            (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                           ((target_flags & 0x40) != 0)) {
                          return 0x448;
                        }
                      }
                    }
                  }
                  else {
                    iVar10 = nonimmediate_operand(prVar3,0x52);
                    if (iVar10 != 0) {
                      uVar8 = *(undefined8 *)&(prVar7->u).field_0x8;
                      _GLOBAL_OFFSET_TABLE_ = prVar3;
                      iVar10 = nonimmediate_operand(uVar8,0x52);
                      if (iVar10 != 0) {
                        prVar7 = *(rtx *)(puVar2 + 8);
                        _register_operand = uVar8;
                        iVar10 = nonimmediate_operand(prVar7,0x52);
                        if (((iVar10 != 0) &&
                            (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                           ((target_flags & 0x40) != 0)) {
                          return 0x444;
                        }
                      }
                    }
                  }
                }
              }
              else {
                iVar10 = nonimmediate_operand(prVar7,0x52);
                if (((iVar10 != 0) &&
                    (psVar4 = *(short **)(puVar2 + 8), _nonimmediate_operand = prVar7,
                    *(char *)(psVar4 + 1) == 'R')) && (*psVar4 == 0x34)) {
                  prVar7 = *(rtx *)(psVar4 + 4);
                  iVar10 = nonimmediate_operand(prVar7,0x52);
                  if (iVar10 != 0) {
                    uVar8 = *(undefined8 *)(psVar4 + 8);
                    _GLOBAL_OFFSET_TABLE_ = prVar7;
                    iVar10 = nonimmediate_operand(uVar8,0x52);
                    if (((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x200) != 0)
                        ) && ((target_flags & 0x40) != 0)) {
                      return 0x446;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (iVar10 == 2) {
        iVar10 = *(int *)&(x1->u).field_0x8;
        if (iVar10 == 0x33) {
          prVar7 = *(rtx *)(*(long *)&x1->u + 8);
          iVar10 = register_operand(prVar7,0x52);
          if (iVar10 != 0) {
            uVar8 = *(undefined8 *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar7;
            iVar10 = nonimmediate_operand(uVar8,0x52);
            if ((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) {
              return 0x3ca;
            }
          }
        }
        else if (iVar10 == 0x34) {
          prVar7 = *(rtx *)(*(long *)&x1->u + 8);
          iVar10 = register_operand(prVar7,0x52);
          if (iVar10 != 0) {
            uVar8 = *(undefined8 *)(*(long *)&x1->u + 0x10);
            _GLOBAL_OFFSET_TABLE_ = prVar7;
            iVar10 = nonimmediate_operand(uVar8,0x52);
            if ((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) {
              return 0x3ce;
            }
          }
        }
      }
    }
    break;
  case 0x31:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'R') {
      if (*(short *)prVar7 == 0x34) {
        prVar3 = *(rtx *)&prVar7->u;
        iVar10 = nonimmediate_operand(prVar3,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)&(prVar7->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar3;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if (iVar10 != 0) {
            prVar7 = *(rtx *)&(x1->u).field_0x8;
            _register_operand = uVar8;
            iVar10 = nonimmediate_operand(prVar7,0x52);
            if (((iVar10 != 0) && (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0))
               && ((target_flags & 0x40) != 0)) {
              return 0x422;
            }
          }
        }
      }
      else {
        iVar10 = nonimmediate_operand(prVar7,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if (((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) &&
             (iVar10 = ix86_binary_operator_ok(0x31,0x52,&recog_data), iVar10 != 0)) {
            return 0x373;
          }
        }
      }
    }
    break;
  case 0x32:
    x2 = *(rtx *)&x1->u;
    if (x2->field_0x2 == 'R') {
      if (*(short *)x2 == 0x34) {
        prVar7 = *(rtx *)&x2->u;
        if (prVar7->field_0x2 == 'R') {
          if (*(short *)prVar7 == 0x33) {
            prVar7 = *(rtx *)&prVar7->u;
            iVar10 = nonimmediate_operand(prVar7,0x52);
            if (iVar10 != 0) {
              uVar8 = *(undefined8 *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar7;
              iVar10 = nonimmediate_operand(uVar8,0x52);
              if (iVar10 != 0) {
                prVar7 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = uVar8;
                iVar10 = nonimmediate_operand(prVar7,0x52);
                if (((iVar10 != 0) &&
                    (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                   ((target_flags & 0x40) != 0)) {
                  return 0x428;
                }
              }
            }
          }
          else {
            iVar10 = nonimmediate_operand(prVar7,0x52);
            if (iVar10 != 0) {
              uVar8 = *(undefined8 *)&(x2->u).field_0x8;
              _GLOBAL_OFFSET_TABLE_ = prVar7;
              iVar10 = nonimmediate_operand(uVar8,0x52);
              if (iVar10 != 0) {
                prVar7 = *(rtx *)&(x1->u).field_0x8;
                _register_operand = uVar8;
                iVar10 = nonimmediate_operand(prVar7,0x52);
                if (((iVar10 != 0) &&
                    (_nonimmediate_operand = prVar7, (ix86_isa_flags & 0x200) != 0)) &&
                   ((target_flags & 0x40) != 0)) {
                  return 0x424;
                }
              }
            }
          }
        }
      }
      else {
        iVar10 = nonimmediate_operand(x2,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = x2;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if (iVar10 == 0) {
            x2 = *(rtx *)&x1->u;
          }
          else {
            _register_operand = uVar8;
            if (((ix86_isa_flags & 0x20) != 0) &&
               (iVar10 = ix86_binary_operator_ok(0x32,0x52,&recog_data), iVar10 != 0)) {
              return 0x374;
            }
            x1 = *(rtx *)&(x0->u).field_0x8;
            x2 = *(rtx *)&x1->u;
          }
        }
        iVar10 = nonimmediate_operand(x2,0x52);
        if (iVar10 != 0) {
          _nonimmediate_operand = x2;
          psVar4 = *(short **)&(x1->u).field_0x8;
          if ((*(char *)(psVar4 + 1) == 'R') && (*psVar4 == 0x34)) {
            prVar7 = *(rtx *)(psVar4 + 4);
            iVar10 = nonimmediate_operand(prVar7,0x52);
            if (iVar10 != 0) {
              uVar8 = *(undefined8 *)(psVar4 + 8);
              _GLOBAL_OFFSET_TABLE_ = prVar7;
              iVar10 = nonimmediate_operand(uVar8,0x52);
              if (((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x200) != 0)) &&
                 ((target_flags & 0x40) != 0)) {
                return 0x426;
              }
            }
          }
        }
      }
    }
    break;
  case 0x34:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x52);
    if (iVar10 != 0) {
      uVar8 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = nonimmediate_operand(uVar8,0x52);
      if (((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) &&
         (iVar10 = ix86_binary_operator_ok(0x34,0x52,&recog_data), iVar10 != 0)) {
        return 900;
      }
    }
    break;
  case 0x37:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = register_operand(prVar7,0x52);
    if (iVar10 != 0) {
      uVar8 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = nonimmediate_operand(uVar8,0x52);
      if ((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) {
        return 0x38e;
      }
    }
    break;
  case 0x3d:
    prVar7 = *(rtx *)&x1->u;
    if (prVar7->field_0x2 == 'R') {
      if (*(short *)prVar7 == 0x40) {
        prVar7 = *(rtx *)&prVar7->u;
        iVar10 = register_operand(prVar7,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if ((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) {
            return 0x3fc;
          }
        }
      }
      else {
        iVar10 = nonimmediate_operand(prVar7,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)&(x1->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if (((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) &&
             (iVar10 = ix86_binary_operator_ok(0x3d,0x52,&recog_data), iVar10 != 0)) {
            return 0x408;
          }
        }
      }
    }
    break;
  case 0x3e:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x52);
    if (iVar10 != 0) {
      uVar8 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = nonimmediate_operand(uVar8,0x52);
      if (((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) &&
         (iVar10 = ix86_binary_operator_ok(0x3e,0x52,&recog_data), iVar10 != 0)) {
        return 0x409;
      }
    }
    break;
  case 0x3f:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x52);
    if (iVar10 != 0) {
      uVar8 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = nonimmediate_operand(uVar8,0x52);
      if (((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) &&
         (iVar10 = ix86_binary_operator_ok(0x3f,0x52,&recog_data), iVar10 != 0)) {
        return 0x40a;
      }
    }
    break;
  case 0x46:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x52);
    if (iVar10 != 0) {
      uVar8 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = nonimmediate_operand(uVar8,0x52);
      if (iVar10 != 0) {
        _register_operand = uVar8;
        if ((((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) &&
           (iVar10 = ix86_binary_operator_ok(0x46,0x52,&recog_data), iVar10 != 0)) {
          return 0x3ae;
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x3ba;
        }
      }
    }
    break;
  case 0x47:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x52);
    if (iVar10 != 0) {
      uVar8 = *(undefined8 *)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = nonimmediate_operand(uVar8,0x52);
      if (iVar10 != 0) {
        _register_operand = uVar8;
        if ((((ix86_isa_flags & 0x20) != 0) && (flag_finite_math_only != 0)) &&
           (iVar10 = ix86_binary_operator_ok(0x47,0x52,&recog_data), iVar10 != 0)) {
          return 0x3ad;
        }
        if ((ix86_isa_flags & 0x20) != 0) {
          return 0x3b9;
        }
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
    iVar10 = avx_comparison_float_operator(x1,0x52);
    if (iVar10 != 0) {
      prVar7 = *(rtx *)&x1->u;
      _nonimmediate_operand = x1;
      iVar10 = register_operand(prVar7,0x52);
      if (iVar10 != 0) {
        uVar8 = *(undefined8 *)&(x1->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = prVar7;
        iVar10 = nonimmediate_operand(uVar8,0x52);
        if ((iVar10 != 0) && (_register_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) {
          return 0x3ee;
        }
      }
    }
    break;
  case 0x65:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x4f);
    if ((iVar10 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
      return 0x48e;
    }
    break;
  case 0x67:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x41);
    if ((iVar10 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
      return 0x482;
    }
    break;
  case 0x70:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x52);
    if ((iVar10 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar7, (ix86_isa_flags & 0x20) != 0)) {
      return 0x39d;
    }
    break;
  case 0x7b:
    psVar4 = *(short **)&x1->u;
    if (((*(char *)(psVar4 + 1) == 'R') && (*psVar4 == 0x31)) &&
       (prVar7 = *(rtx *)(psVar4 + 4), prVar7->field_0x2 == 'R')) {
      if (*(short *)prVar7 == 0x34) {
        prVar3 = *(rtx *)&prVar7->u;
        iVar10 = nonimmediate_operand(prVar3,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)&(prVar7->u).field_0x8;
          _GLOBAL_OFFSET_TABLE_ = prVar3;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if (iVar10 != 0) {
            prVar7 = *(rtx *)(psVar4 + 8);
            _register_operand = uVar8;
            iVar10 = nonimmediate_operand(prVar7,0x52);
            if ((((((iVar10 != 0) &&
                   (psVar4 = *(short **)&(x1->u).field_0x8, _nonimmediate_operand = prVar7,
                   *(char *)(psVar4 + 1) == 'R')) && (*psVar4 == 0x32)) &&
                 ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'R' &&
                  (*psVar5 == 0x34)))) &&
                (((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar10 != 0 &&
                  ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 8),_register_operand), iVar10 != 0
                   && (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 8),_nonimmediate_operand),
                      iVar10 != 0)))) && (psVar4 = *(short **)&(x1->u).field_0x10, *psVar4 == 0x1e))
                )) && ((long)(int)*(undefined8 *)(psVar4 + 4) == *(long *)(psVar4 + 4))) {
              if ((int)*(undefined8 *)(psVar4 + 4) == 5) {
                if (((ix86_isa_flags & 0x200) != 0) && ((target_flags & 0x40) != 0)) {
                  return 0x45e;
                }
              }
              else if ((((int)*(undefined8 *)(psVar4 + 4) == 10) && ((ix86_isa_flags & 0x200) != 0))
                      && ((target_flags & 0x40) != 0)) {
                return 0x45a;
              }
            }
          }
        }
      }
      else {
        iVar10 = register_operand(prVar7,0x52);
        if (iVar10 != 0) {
          uVar8 = *(undefined8 *)(psVar4 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar7;
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if ((((iVar10 != 0) &&
               (psVar4 = *(short **)&(x1->u).field_0x8, _register_operand = uVar8,
               *(char *)(psVar4 + 1) == 'R')) &&
              ((*psVar4 == 0x32 &&
               ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                iVar10 != 0 &&
                (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 8),_register_operand), iVar10 != 0)))
               ))) && ((*(long *)&(x1->u).field_0x10 == _sibcall_insn_operand &&
                       ((ix86_isa_flags & 0x20) != 0)))) {
            return 0x3d4;
          }
        }
      }
    }
    break;
  case 0x7c:
    x2 = *(rtx *)&x1->u;
    if (((x2->field_0x2 == 'U') && (*(short *)x2 == 0x7d)) &&
       (x3 = *(rtx *)&x2->u, x3->field_0x2 == 'R')) {
      iVar10 = register_operand(x3,0x52);
      if (iVar10 != 0) {
        uVar8 = *(undefined8 *)&(x2->u).field_0x8;
        _GLOBAL_OFFSET_TABLE_ = x3;
        iVar10 = nonimmediate_operand(uVar8,0x52);
        if (iVar10 == 0) {
          x3 = *(rtx *)&x2->u;
        }
        else {
          psVar4 = *(short **)&(x1->u).field_0x8;
          _register_operand = uVar8;
          if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 4)) {
            if (*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator) {
              if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_cc_mode) {
                if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _swap_condition) {
                  if ((*(long *)(*(long *)(psVar4 + 4) + 0x20) == _const248_operand) &&
                     ((ix86_isa_flags & 0x20) != 0)) {
                    return 0x4ce;
                  }
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
                else {
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
              }
              else {
                x2 = *(rtx *)&x1->u;
                x3 = *(rtx *)&x2->u;
              }
            }
            else {
              x2 = *(rtx *)&x1->u;
              x3 = *(rtx *)&x2->u;
            }
          }
          else {
            x2 = *(rtx *)&x1->u;
            x3 = *(rtx *)&x2->u;
          }
        }
      }
      iVar10 = nonimmediate_operand(x3,0x52);
      if (iVar10 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x3;
        uVar8 = *(undefined8 *)&(x2->u).field_0x8;
        iVar10 = nonimmediate_operand(uVar8,0x52);
        if (iVar10 == 0) {
          x3 = *(rtx *)&x2->u;
        }
        else {
          psVar4 = *(short **)&(x1->u).field_0x8;
          _register_operand = uVar8;
          if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 4)) {
            if (*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand) {
              if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_compare_mode) {
                if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _ix86_fp_comparison_operator) {
                  if (((*(long *)(*(long *)(psVar4 + 4) + 0x20) == _index_register_operand) &&
                      ((ix86_isa_flags & 0x20) != 0)) &&
                     ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b ||
                      (iVar10 = rtx_equal_p(_GLOBAL_OFFSET_TABLE_,uVar8), iVar10 != 0)))) {
                    return 0x4d2;
                  }
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
                else {
                  x2 = *(rtx *)&x1->u;
                  x3 = *(rtx *)&x2->u;
                }
              }
              else {
                x2 = *(rtx *)&x1->u;
                x3 = *(rtx *)&x2->u;
              }
            }
            else {
              x2 = *(rtx *)&x1->u;
              x3 = *(rtx *)&x2->u;
            }
          }
          else {
            x2 = *(rtx *)&x1->u;
            x3 = *(rtx *)&x2->u;
          }
        }
      }
      iVar10 = register_operand(x3,0x52);
      if (iVar10 != 0) {
        _GLOBAL_OFFSET_TABLE_ = x3;
        uVar8 = *(undefined8 *)&(x2->u).field_0x8;
        iVar10 = nonimmediate_operand(uVar8,0x52);
        if (((iVar10 != 0) &&
            (psVar4 = *(short **)&(x1->u).field_0x8, _register_operand = uVar8, *psVar4 == 0xf)) &&
           (**(int **)(psVar4 + 4) == 4)) {
          prVar7 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
          iVar10 = const_0_to_1_operand(prVar7,0);
          if (iVar10 != 0) {
            uVar8 = *(undefined8 *)(*(long *)(psVar4 + 4) + 0x10);
            _nonimmediate_operand = prVar7;
            iVar10 = const_4_to_5_operand(uVar8,0);
            if (iVar10 != 0) {
              uVar9 = *(undefined8 *)(*(long *)(psVar4 + 4) + 0x18);
              _memory_operand = uVar8;
              iVar10 = const_2_to_3_operand(uVar9,0);
              if (iVar10 != 0) {
                uVar8 = *(undefined8 *)(*(long *)(psVar4 + 4) + 0x20);
                _push_operand = uVar9;
                iVar10 = const_6_to_7_operand(uVar8,0);
                if ((iVar10 != 0) &&
                   (_nonmemory_no_elim_operand = uVar8, (ix86_isa_flags & 0x20) != 0)) {
                  return 0x4d6;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x7d:
    psVar4 = *(short **)&x1->u;
    if (((*(char *)(psVar4 + 1) == 'P') && (*psVar4 == 0x7d)) &&
       (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '\'')) {
      if (*psVar5 == 0x31) {
        psVar6 = *(short **)(psVar5 + 4);
        if ((*(char *)(psVar6 + 1) == '\'') && (*psVar6 == 0x7c)) {
          prVar7 = *(rtx *)(psVar6 + 4);
          iVar10 = register_operand(prVar7,0x52);
          if ((((iVar10 != 0) &&
               ((psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar6 == 0xf &&
                (**(int **)(psVar6 + 4) == 1)))) &&
              ((*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand &&
               ((((((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\'' &&
                    (*psVar5 == 0x7c)) &&
                   (iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar7), iVar10 != 0)) &&
                  ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                   (**(int **)(psVar5 + 4) == 1)))) &&
                 (*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator)) &&
                ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'' &&
                 (*psVar4 == 0x31)))))))) &&
             ((((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '\'' &&
                (((*psVar5 == 0x7c &&
                  (iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar10 != 0)) && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))) &&
               (((**(int **)(psVar5 + 4) == 1 &&
                 (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'')))) &&
              ((((((*psVar4 == 0x7c &&
                   (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar10 != 0)) &&
                  ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                   (((**(int **)(psVar4 + 4) == 1 &&
                     (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)) &&
                    (psVar4 = *(short **)&(x1->u).field_0x8, *(char *)(psVar4 + 1) == 'P')))))) &&
                 ((*psVar4 == 0x7d &&
                  (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '\'')))) &&
                (*psVar5 == 0x31)) &&
               ((psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == '\'' &&
                (*psVar6 == 0x7c)))))))) {
            uVar8 = *(undefined8 *)(psVar6 + 4);
            iVar10 = nonimmediate_operand(uVar8,0x52);
            if ((((((iVar10 != 0) &&
                   ((((psVar6 = *(short **)(psVar6 + 8), _register_operand = uVar8, *psVar6 == 0xf
                      && (**(int **)(psVar6 + 4) == 1)) &&
                     (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)) &&
                    ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\'' &&
                     (*psVar5 == 0x7c)))))) &&
                  (iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar8), iVar10 != 0)) &&
                 (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                   (**(int **)(psVar5 + 4) == 1)) &&
                  ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'' &&
                     (*psVar4 == 0x31)) &&
                    (psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '\'')))))))) &&
                ((*psVar5 == 0x7c &&
                 (iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar10 != 0))
                )) && (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                        ((((**(int **)(psVar5 + 4) == 1 &&
                           (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator))
                          && ((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'' &&
                              (((*psVar4 == 0x7c &&
                                (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand)
                                , iVar10 != 0)) &&
                               (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)))))) &&
                         ((**(int **)(psVar4 + 4) == 1 &&
                          (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)))))) &&
                       ((ix86_isa_flags & 0x20) != 0)))) {
              return 0x3d9;
            }
          }
        }
      }
      else if (((*psVar5 == 0x32) &&
               (psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == '\'')) &&
              (*psVar6 == 0x7c)) {
        prVar7 = *(rtx *)(psVar6 + 4);
        iVar10 = register_operand(prVar7,0x52);
        if (((((((iVar10 != 0) &&
                (psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar6 == 0xf))
               && (**(int **)(psVar6 + 4) == 1)) &&
              ((*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand &&
               (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\'')))) &&
             ((*psVar5 == 0x7c &&
              ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),prVar7), iVar10 != 0 &&
               (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))))) &&
            ((**(int **)(psVar5 + 4) == 1 &&
             (((((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                 (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'')) &&
                (*psVar4 == 0x32)) &&
               ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '\'' &&
                (*psVar5 == 0x7c)))) &&
              ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar10 != 0
               && ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                   (**(int **)(psVar5 + 4) == 1)))))))))) &&
           ((*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator &&
            (((((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'' &&
                (*psVar4 == 0x7c)) &&
               (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_), iVar10 != 0
               )) && (((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                       (**(int **)(psVar4 + 4) == 1)) &&
                      ((*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition &&
                       ((psVar4 = *(short **)&(x1->u).field_0x8, *(char *)(psVar4 + 1) == 'P' &&
                        (*psVar4 == 0x7d)))))))) &&
             ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '\'' &&
              (((*psVar5 == 0x32 &&
                (psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == '\'')) &&
               (*psVar6 == 0x7c)))))))))) {
          uVar8 = *(undefined8 *)(psVar6 + 4);
          iVar10 = nonimmediate_operand(uVar8,0x52);
          if ((((((iVar10 != 0) &&
                 (psVar6 = *(short **)(psVar6 + 8), _register_operand = uVar8, *psVar6 == 0xf)) &&
                ((**(int **)(psVar6 + 4) == 1 &&
                 ((*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand &&
                  (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\'')))))) &&
               (*psVar5 == 0x7c)) &&
              ((((((((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar8), iVar10 != 0 &&
                     (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                    (**(int **)(psVar5 + 4) == 1)) &&
                   ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                    (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'')))) &&
                  (*psVar4 == 0x32)) &&
                 ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == '\'' &&
                  (*psVar5 == 0x7c)))) &&
                (((iVar10 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar10 != 0
                  && (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                       (**(int **)(psVar5 + 4) == 1)) &&
                      (*(long *)(*(long *)(psVar5 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
                 (((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == '\'' &&
                   (*psVar4 == 0x7c)) &&
                  (iVar10 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_register_operand), iVar10 != 0)
                  ))))) &&
               ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf && (**(int **)(psVar4 + 4) == 1)))
               ))) && ((*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition &&
                       ((ix86_isa_flags & 0x20) != 0)))) {
            return 0x3da;
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_22(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  short *psVar6;
  undefined8 uVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  int iVar11;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  rtx x7;
  
  lVar2 = *(long *)&(x0->u).field_0x8;
  lVar3 = *(long *)(lVar2 + 8);
  lVar4 = *(long *)(lVar3 + 8);
  puVar5 = *(ushort **)(lVar4 + 8);
  uVar1 = *puVar5;
  if (uVar1 == 0x81) {
    psVar6 = *(short **)(puVar5 + 4);
    if ((*(char *)(psVar6 + 1) == '\x0f') && (*psVar6 == 0x7c)) {
      uVar7 = *(undefined8 *)(psVar6 + 4);
      iVar11 = register_operand(uVar7,0x40);
      if ((((((iVar11 != 0) &&
             ((((psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = uVar7, *psVar6 == 0xf &&
                (**(int **)(psVar6 + 4) == 1)) &&
               (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)) &&
              ((psVar6 = *(short **)(puVar5 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
               (*psVar6 == 0x7c)))))) &&
            ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),uVar7), iVar11 != 0 &&
             ((((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1))
               && ((*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar6 = *(short **)(lVar4 + 0x10), *(char *)(psVar6 + 1) == '\x0f' &&
                     (*psVar6 == 0x81)) &&
                    (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f')))))) &&
              ((*psVar8 == 0x7c &&
               (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_), iVar11 != 0
               )))))))) && (psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf)) &&
          (((((**(int **)(psVar8 + 4) == 1 &&
              (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_fp_comparison_operator)) &&
             ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
              (((*psVar6 == 0x7c &&
                (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                iVar11 != 0)) && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)))))) &&
            (((**(int **)(psVar6 + 4) == 1 &&
              (*(long *)(*(long *)(psVar6 + 4) + 8) == _swap_condition)) &&
             ((psVar6 = *(short **)(lVar3 + 0x10), *(char *)(psVar6 + 1) == '9' &&
              (((*psVar6 == 0x7d &&
                (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f')) &&
               ((*psVar8 == 0x81 &&
                ((((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                   (*psVar9 == 0x7c)) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar11 != 0)) &&
                 ((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf && (**(int **)(psVar9 + 4) == 1)
                  ))))))))))))) &&
           ((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode &&
            ((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' && (*psVar8 == 0x7c)
             ))))))) &&
         (((((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_), iVar11 != 0
             && (((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf && (**(int **)(psVar8 + 4) == 1)
                  ) && (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode)))) &&
            (((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
              (*psVar6 == 0x81)) &&
             (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f')))) &&
           ((*psVar8 == 0x7c &&
            (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_), iVar11 != 0)))
           ) && (((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                  (((**(int **)(psVar8 + 4) == 1 &&
                    (*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand)) &&
                   (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f')))) &&
                 (((*psVar6 == 0x7c &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar11 != 0)) &&
                  ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                   ((((**(int **)(psVar6 + 4) == 1 &&
                      (*(long *)(*(long *)(psVar6 + 4) + 8) == _const248_operand)) &&
                     ((psVar6 = *(short **)(lVar2 + 0x10), *(char *)(psVar6 + 1) == '<' &&
                      (((((*psVar6 == 0x7d &&
                          (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '9')) &&
                         (*psVar8 == 0x7d)) &&
                        ((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                         (*psVar9 == 0x81)))) &&
                       (psVar10 = *(short **)(psVar9 + 4), *(char *)(psVar10 + 1) == '\x0f')))))) &&
                    (*psVar10 == 0x7c)))))))))))) {
        uVar7 = *(undefined8 *)(psVar10 + 4);
        iVar11 = nonimmediate_operand(uVar7,0x40);
        if (((((iVar11 != 0) &&
              (psVar10 = *(short **)(psVar10 + 8), _register_operand = uVar7, *psVar10 == 0xf)) &&
             (((((**(int **)(psVar10 + 4) == 1 &&
                 (((*(long *)(*(long *)(psVar10 + 4) + 8) == _q_regs_operand &&
                   (psVar9 = *(short **)(psVar9 + 8), *(char *)(psVar9 + 1) == '\x0f')) &&
                  (*psVar9 == 0x7c)))) &&
                (((iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),uVar7), iVar11 != 0 &&
                  (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)) &&
                 (**(int **)(psVar9 + 4) == 1)))) &&
               (((*(long *)(*(long *)(psVar9 + 4) + 8) == _bt_comparison_operator &&
                 (psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f')) &&
                ((*psVar8 == 0x81 &&
                 (((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                   (*psVar9 == 0x7c)) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand), iVar11 != 0)
                  ))))))) &&
              ((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf && (**(int **)(psVar9 + 4) == 1))))
             )) && ((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_comparison_operator &&
                    (((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                      (*psVar8 == 0x7c)) &&
                     ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand),
                      iVar11 != 0 &&
                      ((((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                         (**(int **)(psVar8 + 4) == 1)) &&
                        (*(long *)(*(long *)(psVar8 + 4) + 8) == _swap_condition)) &&
                       ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '9' &&
                        (*psVar6 == 0x7d)))))))))))) &&
           ((((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
              ((*psVar8 == 0x81 &&
               (psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f')))) &&
             ((((*psVar9 == 0x7c &&
                (((iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand), iVar11 != 0
                  && (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)) &&
                 (**(int **)(psVar9 + 4) == 1)))) &&
               (((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode &&
                 (psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f')) &&
                (*psVar8 == 0x7c)))) &&
              ((((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand), iVar11 != 0
                 && (psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf)) &&
                ((**(int **)(psVar8 + 4) == 1 &&
                 (((*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode &&
                   (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f')) &&
                  (*psVar6 == 0x81)))))) &&
               ((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                (*psVar8 == 0x7c)))))))) &&
            ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand), iVar11 != 0 &&
             ((((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf && (**(int **)(psVar8 + 4) == 1))
               && ((*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand &&
                   ((((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                      (*psVar6 == 0x7c)) &&
                     (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_register_operand),
                     iVar11 != 0)) &&
                    ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                     (**(int **)(psVar6 + 4) == 1)))))))) &&
              ((**(short **)(*(long *)(psVar6 + 4) + 8) == 0x1e &&
               (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 8) + 4) == 7)))))))))) {
          if ((ix86_isa_flags & 0x20) != 0) {
            return 0x5f8;
          }
          if ((ix86_isa_flags & 0x400000) != 0) {
            return 0x5f9;
          }
        }
      }
    }
  }
  else if (uVar1 < 0x82) {
    if (uVar1 == 0x7f) {
      psVar6 = *(short **)(puVar5 + 4);
      if ((*(char *)(psVar6 + 1) == '\x0f') && (*psVar6 == 0x7c)) {
        uVar7 = *(undefined8 *)(psVar6 + 4);
        iVar11 = register_operand(uVar7,0x40);
        if ((((((((((iVar11 != 0) &&
                   (((psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = uVar7,
                     *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1)) &&
                    (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)))) &&
                  (((psVar6 = *(short **)(puVar5 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                    (*psVar6 == 0x7c)) &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),uVar7), iVar11 != 0)))) &&
                 ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1)
                  ))) && ((*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator &&
                          (((psVar6 = *(short **)(lVar4 + 0x10), *(char *)(psVar6 + 1) == '\x0f' &&
                            (*psVar6 == 0x7f)) &&
                           (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f'))))))
               && ((*psVar8 == 0x7c &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar11 != 0)))) &&
              (((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                ((((((**(int **)(psVar8 + 4) == 1 &&
                     (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                    ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                     (((((*psVar6 == 0x7c &&
                         (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                         iVar11 != 0)) && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)) &&
                       ((**(int **)(psVar6 + 4) == 1 &&
                        (*(long *)(*(long *)(psVar6 + 4) + 8) == _swap_condition)))) &&
                      (psVar6 = *(short **)(lVar3 + 0x10), *(char *)(psVar6 + 1) == '9')))))) &&
                   ((*psVar6 == 0x7d &&
                    (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f')))) &&
                  (*psVar8 == 0x7f)) &&
                 (((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                   (*psVar9 == 0x7c)) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar11 != 0)))))) &&
               (((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf && (**(int **)(psVar9 + 4) == 1))
                && ((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode &&
                    ((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                     (*psVar8 == 0x7c)))))))))) &&
             (((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_), iVar11 != 0
               && (((((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                      (**(int **)(psVar8 + 4) == 1)) &&
                     (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode)) &&
                    ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                     (*psVar6 == 0x7f)))) &&
                   (((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                     ((*psVar8 == 0x7c &&
                      (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar11 != 0)))) && (psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf)))))) &&
              ((((**(int **)(psVar8 + 4) == 1 &&
                 (*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand)) &&
                (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f')) &&
               ((*psVar6 == 0x7c &&
                (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                iVar11 != 0)))))))) &&
            (((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
              ((**(int **)(psVar6 + 4) == 1 &&
               (*(long *)(*(long *)(psVar6 + 4) + 8) == _const248_operand)))) &&
             ((psVar6 = *(short **)(lVar2 + 0x10), *(char *)(psVar6 + 1) == '<' &&
              (((*psVar6 == 0x7d && (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '9')
                ) && (*psVar8 == 0x7d)))))))) &&
           (((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' && (*psVar9 == 0x7f)
             ) && ((psVar10 = *(short **)(psVar9 + 4), *(char *)(psVar10 + 1) == '\x0f' &&
                   (*psVar10 == 0x7c)))))) {
          uVar7 = *(undefined8 *)(psVar10 + 4);
          iVar11 = nonimmediate_operand(uVar7,0x40);
          if (((((iVar11 != 0) &&
                (psVar10 = *(short **)(psVar10 + 8), _register_operand = uVar7, *psVar10 == 0xf)) &&
               (**(int **)(psVar10 + 4) == 1)) &&
              ((((*(long *)(*(long *)(psVar10 + 4) + 8) == _q_regs_operand &&
                 (psVar9 = *(short **)(psVar9 + 8), *(char *)(psVar9 + 1) == '\x0f')) &&
                (*psVar9 == 0x7c)) &&
               ((((iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),uVar7), iVar11 != 0 &&
                  (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)) &&
                 ((**(int **)(psVar9 + 4) == 1 &&
                  ((*(long *)(*(long *)(psVar9 + 4) + 8) == _bt_comparison_operator &&
                   (psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f')))))) &&
                (*psVar8 == 0x7f)))))) &&
             ((((((((((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                      (*psVar9 == 0x7c)) &&
                     (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand),
                     iVar11 != 0)) &&
                    ((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf &&
                     (**(int **)(psVar9 + 4) == 1)))) &&
                   ((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_comparison_operator &&
                    ((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                     (*psVar8 == 0x7c)))))) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand), iVar11 != 0)
                  ) && ((((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                          (**(int **)(psVar8 + 4) == 1)) &&
                         (*(long *)(*(long *)(psVar8 + 4) + 8) == _swap_condition)) &&
                        ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '9' &&
                         (*psVar6 == 0x7d)))))) &&
                ((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                 ((*psVar8 == 0x7f &&
                  (psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f')))))) &&
               (((*psVar9 == 0x7c &&
                 (((iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand), iVar11 != 0
                   && (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)) &&
                  (**(int **)(psVar9 + 4) == 1)))) &&
                ((((((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode &&
                     (psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f')) &&
                    ((*psVar8 == 0x7c &&
                     ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand),
                      iVar11 != 0 && (psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf)))))) &&
                   (**(int **)(psVar8 + 4) == 1)) &&
                  (((((((*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode &&
                        (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f')) &&
                       (*psVar6 == 0x7f)) &&
                      ((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                       (*psVar8 == 0x7c)))) &&
                     (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand),
                     iVar11 != 0)) &&
                    ((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                     (**(int **)(psVar8 + 4) == 1)))) &&
                   ((*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand &&
                    (((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                      (*psVar6 == 0x7c)) &&
                     (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_register_operand),
                     iVar11 != 0)))))))) &&
                 ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1)
                  ))))))) &&
              ((**(short **)(*(long *)(psVar6 + 4) + 8) == 0x1e &&
               (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 8) + 4) == 7)))))) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x5ef;
            }
            if ((ix86_isa_flags & 0x400000) != 0) {
              return 0x5f0;
            }
          }
        }
      }
    }
    else if (uVar1 < 0x80) {
      if (uVar1 == 0x31) {
        psVar6 = *(short **)(puVar5 + 4);
        if ((*(char *)(psVar6 + 1) == '\x0f') && (*psVar6 == 0x7c)) {
          uVar7 = *(undefined8 *)(psVar6 + 4);
          iVar11 = register_operand(uVar7,0x40);
          if (((((((iVar11 != 0) &&
                  (((psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = uVar7, *psVar6 == 0xf
                    && (**(int **)(psVar6 + 4) == 1)) &&
                   (*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand)))) &&
                 (((psVar6 = *(short **)(puVar5 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                   (*psVar6 == 0x7c)) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),uVar7), iVar11 != 0)))) &&
                (((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf && (**(int **)(psVar6 + 4) == 1)
                  ) && ((*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator &&
                        ((((psVar6 = *(short **)(lVar4 + 0x10), *(char *)(psVar6 + 1) == '\x0f' &&
                           (*psVar6 == 0x31)) &&
                          (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f')) &&
                         ((*psVar8 == 0x7c &&
                          (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                          iVar11 != 0)))))))))) &&
               ((((((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                    ((**(int **)(psVar8 + 4) == 1 &&
                     (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
                   ((((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                      (((*psVar6 == 0x7c &&
                        (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                        iVar11 != 0)) && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)))) &&
                     (((**(int **)(psVar6 + 4) == 1 &&
                       (*(long *)(*(long *)(psVar6 + 4) + 8) == _swap_condition)) &&
                      (psVar6 = *(short **)(lVar3 + 0x10), *(char *)(psVar6 + 1) == '9')))) &&
                    ((*psVar6 == 0x7d &&
                     (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f')))))) &&
                  (((*psVar8 == 0x31 &&
                    (((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                      (*psVar9 == 0x7c)) &&
                     (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_GLOBAL_OFFSET_TABLE_),
                     iVar11 != 0)))) &&
                   ((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf &&
                    (**(int **)(psVar9 + 4) == 1)))))) &&
                 (*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode)) &&
                (((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                  (*psVar8 == 0x7c)) &&
                 ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar11 != 0 &&
                  ((((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                     (**(int **)(psVar8 + 4) == 1)) &&
                    (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode)) &&
                   ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                    (*psVar6 == 0x31)))))))))))) &&
              ((((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                 ((*psVar8 == 0x7c &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar11 != 0)))) &&
                (((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                  (((**(int **)(psVar8 + 4) == 1 &&
                    (*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand)) &&
                   (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f')))) &&
                 (((*psVar6 == 0x7c &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar11 != 0)) && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)))))) &&
               (((**(int **)(psVar6 + 4) == 1 &&
                 (*(long *)(*(long *)(psVar6 + 4) + 8) == _const248_operand)) &&
                ((psVar6 = *(short **)(lVar2 + 0x10), *(char *)(psVar6 + 1) == '<' &&
                 (((*psVar6 == 0x7d &&
                   (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '9')) &&
                  (*psVar8 == 0x7d)))))))))) &&
             (((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
               (*psVar9 == 0x31)) &&
              ((psVar10 = *(short **)(psVar9 + 4), *(char *)(psVar10 + 1) == '\x0f' &&
               (*psVar10 == 0x7c)))))) {
            uVar7 = *(undefined8 *)(psVar10 + 4);
            iVar11 = nonimmediate_operand(uVar7,0x40);
            if (((((((iVar11 != 0) &&
                    (psVar10 = *(short **)(psVar10 + 8), _register_operand = uVar7, *psVar10 == 0xf)
                    ) && ((**(int **)(psVar10 + 4) == 1 &&
                          (((((*(long *)(*(long *)(psVar10 + 4) + 8) == _q_regs_operand &&
                              (psVar9 = *(short **)(psVar9 + 8), *(char *)(psVar9 + 1) == '\x0f'))
                             && (*psVar9 == 0x7c)) &&
                            ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),uVar7), iVar11 != 0
                             && (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)))) &&
                           (**(int **)(psVar9 + 4) == 1)))))) &&
                  ((*(long *)(*(long *)(psVar9 + 4) + 8) == _bt_comparison_operator &&
                   (psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f')))) &&
                 ((*psVar8 == 0x31 &&
                  (((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                    (*psVar9 == 0x7c)) &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand), iVar11 != 0
                   )))))) &&
                (((((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf &&
                    (**(int **)(psVar9 + 4) == 1)) &&
                   ((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_comparison_operator &&
                    ((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                     (*psVar8 == 0x7c)))))) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand), iVar11 != 0)
                  ) && ((((((((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                              (**(int **)(psVar8 + 4) == 1)) &&
                             (*(long *)(*(long *)(psVar8 + 4) + 8) == _swap_condition)) &&
                            ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '9' &&
                             (*psVar6 == 0x7d)))) &&
                           (((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                             ((*psVar8 == 0x31 &&
                              (psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f'))))
                            && (*psVar9 == 0x7c)))) &&
                          ((((iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand),
                             iVar11 != 0 && (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)) &&
                            (**(int **)(psVar9 + 4) == 1)) &&
                           ((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode &&
                            (psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f'))))))
                         && ((*psVar8 == 0x7c &&
                             ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand),
                              iVar11 != 0 && (psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf))))))
                        && (((**(int **)(psVar8 + 4) == 1 &&
                             (((*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode &&
                               (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f'))
                              && (*psVar6 == 0x31)))) &&
                            ((((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                               (*psVar8 == 0x7c)) &&
                              ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand),
                               iVar11 != 0 &&
                               ((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                                (**(int **)(psVar8 + 4) == 1)))))) &&
                             (*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand)))))))
                 ))) && ((((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                           (*psVar6 == 0x7c)) &&
                          (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_register_operand),
                          iVar11 != 0)) &&
                         (((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                           (**(int **)(psVar6 + 4) == 1)) &&
                          ((**(short **)(*(long *)(psVar6 + 4) + 8) == 0x1e &&
                           (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 8) + 4) == 7)))))))) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x5e9;
              }
              if ((ix86_isa_flags & 0x400000) != 0) {
                return 0x5ea;
              }
            }
          }
        }
      }
      else if (((uVar1 == 0x32) &&
               (psVar6 = *(short **)(puVar5 + 4), *(char *)(psVar6 + 1) == '\x0f')) &&
              (*psVar6 == 0x7c)) {
        uVar7 = *(undefined8 *)(psVar6 + 4);
        iVar11 = register_operand(uVar7,0x40);
        if ((((((((iVar11 != 0) &&
                 (psVar6 = *(short **)(psVar6 + 8), _GLOBAL_OFFSET_TABLE_ = uVar7, *psVar6 == 0xf))
                && (**(int **)(psVar6 + 4) == 1)) &&
               ((*(long *)(*(long *)(psVar6 + 4) + 8) == _q_regs_operand &&
                (psVar6 = *(short **)(puVar5 + 8), *(char *)(psVar6 + 1) == '\x0f')))) &&
              ((*psVar6 == 0x7c &&
               ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),uVar7), iVar11 != 0 &&
                (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)))))) &&
             ((**(int **)(psVar6 + 4) == 1 &&
              ((((*(long *)(*(long *)(psVar6 + 4) + 8) == _bt_comparison_operator &&
                 (psVar6 = *(short **)(lVar4 + 0x10), *(char *)(psVar6 + 1) == '\x0f')) &&
                (*psVar6 == 0x32)) &&
               ((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                (*psVar8 == 0x7c)))))))) &&
            ((((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_), iVar11 != 0
               && ((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                   (**(int **)(psVar8 + 4) == 1)))) &&
              (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_fp_comparison_operator)) &&
             ((((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                (*psVar6 == 0x7c)) &&
               (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_), iVar11 != 0
               )) && ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                      (**(int **)(psVar6 + 4) == 1)))))))) &&
           ((((*(long *)(*(long *)(psVar6 + 4) + 8) == _swap_condition &&
              ((psVar6 = *(short **)(lVar3 + 0x10), *(char *)(psVar6 + 1) == '9' &&
               (*psVar6 == 0x7d)))) &&
             ((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
              (((((*psVar8 == 0x32 &&
                  (psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f')) &&
                 (*psVar9 == 0x7c)) &&
                ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_GLOBAL_OFFSET_TABLE_),
                 iVar11 != 0 && (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)))) &&
               (**(int **)(psVar9 + 4) == 1)))))) &&
            ((((((*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode &&
                 (psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f')) &&
                ((*psVar8 == 0x7c &&
                 (((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar11 != 0 && (psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf)) &&
                  (**(int **)(psVar8 + 4) == 1)))))) &&
               ((*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode &&
                (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f')))) &&
              (*psVar6 == 0x32)) &&
             ((((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                (*psVar8 == 0x7c)) &&
               ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                iVar11 != 0 &&
                (((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf && (**(int **)(psVar8 + 4) == 1)
                  ) && (*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand)))))) &&
              (((((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                  (*psVar6 == 0x7c)) &&
                 ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar11 != 0 &&
                  (((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                    (**(int **)(psVar6 + 4) == 1)) &&
                   ((*(long *)(*(long *)(psVar6 + 4) + 8) == _const248_operand &&
                    ((((psVar6 = *(short **)(lVar2 + 0x10), *(char *)(psVar6 + 1) == '<' &&
                       (*psVar6 == 0x7d)) &&
                      (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '9')) &&
                     ((*psVar8 == 0x7d &&
                      (psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f'))))))))))))
                && (*psVar9 == 0x32)) &&
               ((psVar10 = *(short **)(psVar9 + 4), *(char *)(psVar10 + 1) == '\x0f' &&
                (*psVar10 == 0x7c)))))))))))) {
          uVar7 = *(undefined8 *)(psVar10 + 4);
          iVar11 = nonimmediate_operand(uVar7,0x40);
          if ((((((iVar11 != 0) &&
                 (((psVar10 = *(short **)(psVar10 + 8), _register_operand = uVar7, *psVar10 == 0xf
                   && (**(int **)(psVar10 + 4) == 1)) &&
                  (*(long *)(*(long *)(psVar10 + 4) + 8) == _q_regs_operand)))) &&
                ((((psVar9 = *(short **)(psVar9 + 8), *(char *)(psVar9 + 1) == '\x0f' &&
                   (*psVar9 == 0x7c)) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),uVar7), iVar11 != 0)) &&
                 ((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf && (**(int **)(psVar9 + 4) == 1)
                  ))))) &&
               (((((*(long *)(*(long *)(psVar9 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                     (*psVar8 == 0x32)) &&
                    (psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f')))) &&
                  ((*psVar9 == 0x7c &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand), iVar11 != 0
                   )))) && (psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf)) &&
                ((((**(int **)(psVar9 + 4) == 1 &&
                   (*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                  ((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                   ((((*psVar8 == 0x7c &&
                      (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand),
                      iVar11 != 0)) && (psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf)) &&
                    ((**(int **)(psVar8 + 4) == 1 &&
                     (*(long *)(*(long *)(psVar8 + 4) + 8) == _swap_condition)))))))) &&
                 ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '9' &&
                  ((*psVar6 == 0x7d &&
                   (psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f')))))))))) &&
              (((*psVar8 == 0x32 &&
                (((psVar9 = *(short **)(psVar8 + 4), *(char *)(psVar9 + 1) == '\x0f' &&
                  (*psVar9 == 0x7c)) &&
                 (iVar11 = rtx_equal_p(*(undefined8 *)(psVar9 + 4),_register_operand), iVar11 != 0))
                )) && (((psVar9 = *(short **)(psVar9 + 8), *psVar9 == 0xf &&
                        (**(int **)(psVar9 + 4) == 1)) &&
                       (*(long *)(*(long *)(psVar9 + 4) + 8) == _ix86_fp_compare_mode)))))) &&
             (((((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '\x0f' &&
                 (*psVar8 == 0x7c)) &&
                ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand), iVar11 != 0
                 && (((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                      (**(int **)(psVar8 + 4) == 1)) &&
                     (*(long *)(*(long *)(psVar8 + 4) + 8) == _ix86_cc_mode)))))) &&
               ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f' &&
                (*psVar6 == 0x32)))) &&
              ((psVar8 = *(short **)(psVar6 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
               ((((*psVar8 == 0x7c &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_register_operand), iVar11 != 0)
                  ) && ((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                        ((((((**(int **)(psVar8 + 4) == 1 &&
                             (*(long *)(*(long *)(psVar8 + 4) + 8) == _index_register_operand)) &&
                            (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == '\x0f')) &&
                           ((*psVar6 == 0x7c &&
                            (iVar11 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_register_operand),
                            iVar11 != 0)))) && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf))
                         && ((**(int **)(psVar6 + 4) == 1 &&
                             (**(short **)(*(long *)(psVar6 + 4) + 8) == 0x1e)))))))) &&
                (*(long *)(*(short **)(*(long *)(psVar6 + 4) + 8) + 4) == 7)))))))) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x5f2;
            }
            if ((ix86_isa_flags & 0x400000) != 0) {
              return 0x5f3;
            }
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_23(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  short *psVar2;
  rtx prVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  rtx x1;
  rtx *operands;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  rtx x7;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  switch(*(short *)x1) {
  case 0x12:
    iVar9 = **(int **)&x1->u;
    if (iVar9 == 3) {
      if (*(int *)&(x1->u).field_0x8 == 0x98) {
        prVar3 = *(rtx *)(*(long *)&x1->u + 8);
        iVar9 = register_operand(prVar3,0x40);
        if (iVar9 != 0) {
          psVar2 = *(short **)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar3;
          iVar9 = nonimmediate_operand(psVar2,0x40);
          if (iVar9 != 0) {
            psVar8 = *(short **)(*(long *)&x1->u + 0x18);
            _register_operand = psVar2;
            iVar9 = const_int_operand(psVar8,0x10);
            if ((iVar9 != 0) && (_nonimmediate_operand = psVar8, (ix86_isa_flags & 0x800000) != 0))
            {
              return 0x6bc;
            }
          }
        }
      }
    }
    else if (iVar9 < 4) {
      if (iVar9 == 1) {
        iVar9 = *(int *)&(x1->u).field_0x8;
        if (iVar9 == 0x8b) {
          prVar3 = *(rtx *)(*(long *)&x1->u + 8);
          iVar9 = nonimmediate_operand(prVar3,0x40);
          if ((iVar9 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar3, (ix86_isa_flags & 0x80000) != 0)) {
            return 0x639;
          }
        }
        else if (iVar9 == 0x97) {
          prVar3 = *(rtx *)(*(long *)&x1->u + 8);
          iVar9 = ix86_comparison_uns_operator(prVar3,0x40);
          if (iVar9 != 0) {
            psVar2 = *(short **)&prVar3->u;
            _GLOBAL_OFFSET_TABLE_ = prVar3;
            iVar9 = register_operand(psVar2,0x40);
            if (iVar9 != 0) {
              psVar8 = *(short **)&(prVar3->u).field_0x8;
              _register_operand = psVar2;
              iVar9 = nonimmediate_operand(psVar8,0x40);
              if ((iVar9 != 0) && (_nonimmediate_operand = psVar8, (ix86_isa_flags & 0x800000) != 0)
                 ) {
                return 0x6b8;
              }
            }
          }
        }
      }
      else if ((iVar9 == 2) && (*(int *)&(x1->u).field_0x8 == 0x79)) {
        prVar3 = *(rtx *)(*(long *)&x1->u + 8);
        iVar9 = register_operand(prVar3,0x40);
        if (iVar9 != 0) {
          psVar2 = *(short **)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = prVar3;
          iVar9 = nonimmediate_operand(psVar2,0x40);
          if (iVar9 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = psVar2;
              return 0x605;
            }
            _register_operand = psVar2;
            if ((ix86_isa_flags & 0x400000) != 0) {
              return 0x608;
            }
          }
        }
      }
    }
    break;
  case 0x2f:
    psVar2 = *(short **)&x1->u;
    if (*(char *)(psVar2 + 1) == '@') {
      if (*psVar2 == 0x52) {
        psVar8 = *(short **)(psVar2 + 4);
        iVar9 = nonimmediate_operand(psVar8,0x40);
        if (((iVar9 != 0) && (_register_operand = psVar8, *(long *)(psVar2 + 8) == _q_regs_operand))
           && (psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == '@')) {
          if (*psVar2 == 0x41) {
            prVar3 = *(rtx *)(psVar2 + 4);
            iVar9 = nonimmediate_operand(prVar3,0x40);
            if (((iVar9 != 0) &&
                (_GLOBAL_OFFSET_TABLE_ = prVar3,
                iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 8),_register_operand), iVar9 != 0)) &&
               (psVar2 = *(short **)&(x1->u).field_0x10, *(char *)(psVar2 + 1) == '@')) {
              if (*psVar2 == 0x43) {
                iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_);
                if (((((iVar9 != 0) &&
                      (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '@')) &&
                     (*psVar2 == 0x33)) &&
                    ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand), iVar9 != 0
                     && ((ix86_isa_flags & 0x800000) != 0)))) &&
                   ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b)))) {
                  return 0x6a2;
                }
              }
              else if (((*psVar2 == 0x44) &&
                       (iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_),
                       iVar9 != 0)) &&
                      (((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '@' &&
                        (((*psVar2 == 0x33 &&
                          (iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand),
                          iVar9 != 0)) && ((ix86_isa_flags & 0x800000) != 0)))) &&
                       ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b)))))
                      ) {
                return 0x6a6;
              }
            }
          }
          else if (*psVar2 == 0x42) {
            prVar3 = *(rtx *)(psVar2 + 4);
            iVar9 = nonimmediate_operand(prVar3,0x40);
            if (((((iVar9 != 0) &&
                  (_GLOBAL_OFFSET_TABLE_ = prVar3,
                  iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 8),_register_operand), iVar9 != 0))
                 && ((psVar2 = *(short **)&(x1->u).field_0x10, *(char *)(psVar2 + 1) == '@' &&
                     (((*psVar2 == 0x45 &&
                       (iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_),
                       iVar9 != 0)) &&
                      (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '@')))))) &&
                ((*psVar2 == 0x33 &&
                 (iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand), iVar9 != 0))))
               && (((ix86_isa_flags & 0x800000) != 0 &&
                   ((*(short *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b)))))) {
              return 0x69e;
            }
          }
        }
      }
      else {
        iVar9 = nonimmediate_operand(psVar2,0x40);
        if (iVar9 != 0) {
          prVar3 = *(rtx *)&(x1->u).field_0x8;
          _nonimmediate_operand = psVar2;
          iVar9 = vector_move_operand(prVar3,0x40);
          if (iVar9 != 0) {
            psVar2 = *(short **)&(x1->u).field_0x10;
            _GLOBAL_OFFSET_TABLE_ = prVar3;
            iVar9 = vector_move_operand(psVar2,0x40);
            if ((iVar9 != 0) && (_register_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
              return 0x677;
            }
          }
        }
      }
    }
    break;
  case 0x31:
    puVar7 = *(ushort **)&x1->u;
    if (*(char *)(puVar7 + 1) == '@') {
      uVar1 = *puVar7;
      if (uVar1 == 99) {
        psVar2 = *(short **)(puVar7 + 4);
        if ((*(char *)(psVar2 + 1) == ';') && (*psVar2 == 0x7c)) {
          prVar3 = *(rtx *)(psVar2 + 4);
          iVar9 = nonimmediate_operand(prVar3,0x3f);
          if (((((iVar9 != 0) &&
                ((psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar2 == 0xf
                 && (**(int **)(psVar2 + 4) == 8)))) &&
               (*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand)) &&
              (((((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _index_register_operand)) &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x28) == _flags_reg_operand &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _sibcall_insn_operand)))) &&
                 (*(long *)(*(long *)(psVar2 + 4) + 0x38) == _const_0_to_255_mul_8_operand)) &&
                (((*(long *)(*(long *)(psVar2 + 4) + 0x40) == _reg_not_xmm0_operand &&
                  (psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == '@')) &&
                 ((*psVar2 == 99 &&
                  (((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == ';' &&
                    (*psVar2 == 0x7c)) &&
                   (iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),prVar3), iVar9 != 0)))))))) &&
               ((psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf && (**(int **)(psVar2 + 4) == 8)))
               ))) && (((*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator &&
                        (((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition &&
                          (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode)) &&
                         ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand &&
                          (((*(long *)(*(long *)(psVar2 + 4) + 0x28) ==
                             _constant_call_address_operand &&
                            (*(long *)(*(long *)(psVar2 + 4) + 0x30) ==
                             _nonimmediate_or_sse_const_operand)) &&
                           (*(long *)(*(long *)(psVar2 + 4) + 0x38) ==
                            _ix86_vec_interleave_v2df_operator_ok)))))))) &&
                       ((*(long *)(*(long *)(psVar2 + 4) + 0x40) == _nonimm_not_xmm0_operand &&
                        ((ix86_isa_flags & 0x800000) != 0)))))) {
            return 0x688;
          }
        }
      }
      else if (uVar1 < 100) {
        if (uVar1 == 0x34) {
          prVar3 = *(rtx *)(puVar7 + 4);
          iVar9 = nonimmediate_operand(prVar3,0x40);
          if (iVar9 != 0) {
            psVar2 = *(short **)(puVar7 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar3;
            iVar9 = nonimmediate_operand(psVar2,0x40);
            if (iVar9 != 0) {
              psVar8 = *(short **)&(x1->u).field_0x8;
              _register_operand = psVar2;
              iVar9 = nonimmediate_operand(psVar8,0x40);
              if ((iVar9 != 0) && (_nonimmediate_operand = psVar8, (ix86_isa_flags & 0x800000) != 0)
                 ) {
                return 0x668;
              }
            }
          }
        }
        else if (((uVar1 == 0x62) &&
                 (psVar2 = *(short **)(puVar7 + 4), *(char *)(psVar2 + 1) == ';')) &&
                (*psVar2 == 0x7c)) {
          prVar3 = *(rtx *)(psVar2 + 4);
          iVar9 = nonimmediate_operand(prVar3,0x3f);
          if (((((iVar9 != 0) &&
                (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar2 == 0xf))
               && ((**(int **)(psVar2 + 4) == 8 &&
                   ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_comparison_operator))))))
              && ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_compare_mode &&
                  ((((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _index_register_operand &&
                     (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _flags_reg_operand)) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _sibcall_insn_operand)) &&
                   ((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _const_0_to_255_mul_8_operand &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _reg_not_xmm0_operand)))))))) &&
             (((psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == '@' &&
               ((*psVar2 == 0x62 && (psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == ';')
                ))) && ((*psVar2 == 0x7c &&
                        (((((((iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),prVar3), iVar9 != 0
                              && (psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf)) &&
                             (**(int **)(psVar2 + 4) == 8)) &&
                            ((*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator &&
                             (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition)))) &&
                           ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode &&
                            ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand &&
                             (*(long *)(*(long *)(psVar2 + 4) + 0x28) ==
                              _constant_call_address_operand)))))) &&
                          (*(long *)(*(long *)(psVar2 + 4) + 0x30) ==
                           _nonimmediate_or_sse_const_operand)) &&
                         (((*(long *)(*(long *)(psVar2 + 4) + 0x38) ==
                            _ix86_vec_interleave_v2df_operator_ok &&
                           (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _nonimm_not_xmm0_operand)) &&
                          ((ix86_isa_flags & 0x800000) != 0)))))))))) {
            return 0x682;
          }
        }
      }
    }
    break;
  case 0x32:
    psVar2 = *(short **)&x1->u;
    if ((((*(char *)(psVar2 + 1) == '@') && (*psVar2 == 0x62)) &&
        (psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == ';')) && (*psVar2 == 0x7c)) {
      prVar3 = *(rtx *)(psVar2 + 4);
      iVar9 = nonimmediate_operand(prVar3,0x3f);
      if (((((((iVar9 != 0) &&
              (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar2 == 0xf)) &&
             ((**(int **)(psVar2 + 4) == 8 &&
              ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_comparison_operator)))))) &&
            (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
           ((((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _index_register_operand &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _flags_reg_operand)) &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _sibcall_insn_operand)) &&
            ((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _const_0_to_255_mul_8_operand &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _reg_not_xmm0_operand)))))) &&
          ((((psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == '@' &&
             ((*psVar2 == 0x62 && (psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == ';')))
             ) && ((*psVar2 == 0x7c &&
                   (((iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),prVar3), iVar9 != 0 &&
                     (psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf)) &&
                    (**(int **)(psVar2 + 4) == 8)))))) &&
           ((((*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition)) &&
             ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode &&
              ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _constant_call_address_operand)))))) &&
            (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _nonimmediate_or_sse_const_operand)))))) &&
         (((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _ix86_vec_interleave_v2df_operator_ok &&
           (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _nonimm_not_xmm0_operand)) &&
          ((ix86_isa_flags & 0x800000) != 0)))) {
        return 0x68e;
      }
    }
    break;
  case 0x42:
    prVar3 = *(rtx *)&x1->u;
    iVar9 = nonimmediate_operand(prVar3,0x40);
    if (iVar9 != 0) {
      psVar2 = *(short **)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar3;
      iVar9 = const_0_to_15_operand(psVar2,0x10);
      if ((iVar9 != 0) && (_register_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
        return 0x696;
      }
    }
    break;
  case 0x45:
    prVar3 = *(rtx *)&x1->u;
    iVar9 = nonimmediate_operand(prVar3,0x40);
    if (iVar9 != 0) {
      psVar2 = *(short **)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar3;
      iVar9 = const_0_to_15_operand(psVar2,0x10);
      if ((iVar9 != 0) && (_register_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
        return 0x69a;
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
    iVar9 = ix86_comparison_int_operator(x1,0x40);
    if (iVar9 != 0) {
      psVar2 = *(short **)&x1->u;
      _GLOBAL_OFFSET_TABLE_ = x1;
      iVar9 = register_operand(psVar2,0x40);
      if (iVar9 != 0) {
        psVar8 = *(short **)&(x1->u).field_0x8;
        _register_operand = psVar2;
        iVar9 = nonimmediate_operand(psVar8,0x40);
        if (iVar9 != 0) {
          if ((ix86_isa_flags & 0x800000) != 0) {
            _nonimmediate_operand = psVar8;
            return 0x6b0;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          _nonimmediate_operand = psVar8;
        }
      }
    }
  default:
    iVar9 = ix86_comparison_uns_operator(x1,0x40);
    if (iVar9 != 0) {
      _GLOBAL_OFFSET_TABLE_ = x1;
      psVar2 = *(short **)&x1->u;
      iVar9 = register_operand(psVar2,0x40);
      if (iVar9 != 0) {
        psVar8 = *(short **)&(x1->u).field_0x8;
        _register_operand = psVar2;
        iVar9 = nonimmediate_operand(psVar8,0x40);
        if ((iVar9 != 0) && (_nonimmediate_operand = psVar8, (ix86_isa_flags & 0x800000) != 0)) {
          return 0x6b4;
        }
      }
    }
    break;
  case 0x62:
    psVar2 = *(short **)&x1->u;
    if (((*(char *)(psVar2 + 1) == ';') && (*psVar2 == 0x7c)) &&
       (prVar3 = *(rtx *)(psVar2 + 4), prVar3->field_0x2 == '?')) {
      if (*(short *)prVar3 == 0x7e) {
        prVar3 = *(rtx *)&prVar3->u;
        iVar9 = nonimmediate_operand(prVar3,0x3b);
        if ((((iVar9 != 0) &&
             (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar2 == 0xf)) &&
            (((**(int **)(psVar2 + 4) == 8 &&
              ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)))) &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator)))) &&
           (((((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _ix86_fp_compare_mode)) &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _ix86_cc_mode)) &&
             ((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _index_register_operand &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _const248_operand)))) &&
            ((ix86_isa_flags & 0x80000) != 0)))) {
          return 0x63b;
        }
      }
      else {
        iVar9 = register_operand(prVar3,0x3f);
        if ((((iVar9 != 0) &&
             (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar2 == 0xf)) &&
            ((**(int **)(psVar2 + 4) == 8 &&
             (((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)) &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator)))))) &&
           (((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _ix86_fp_compare_mode)) &&
            ((*(long *)(*(long *)(psVar2 + 4) + 0x30) == _ix86_cc_mode &&
             (((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _index_register_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _const248_operand)) &&
              ((ix86_isa_flags & 0x80000) != 0)))))))) {
          return 0x63a;
        }
      }
    }
    break;
  case 99:
    psVar2 = *(short **)&x1->u;
    if (((*(char *)(psVar2 + 1) == ';') && (*psVar2 == 0x7c)) &&
       (prVar3 = *(rtx *)(psVar2 + 4), prVar3->field_0x2 == '?')) {
      if (*(short *)prVar3 == 0x7e) {
        prVar3 = *(rtx *)&prVar3->u;
        iVar9 = nonimmediate_operand(prVar3,0x3b);
        if (((((iVar9 != 0) &&
              (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar2 == 0xf)) &&
             ((**(int **)(psVar2 + 4) == 8 &&
              ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)))))) &&
            (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator)) &&
           (((((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _ix86_fp_compare_mode)) &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _ix86_cc_mode)) &&
             ((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _index_register_operand &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _const248_operand)))) &&
            ((ix86_isa_flags & 0x80000) != 0)))) {
          return 0x647;
        }
      }
      else {
        iVar9 = register_operand(prVar3,0x3f);
        if (((((iVar9 != 0) &&
              (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar2 == 0xf)) &&
             ((**(int **)(psVar2 + 4) == 8 &&
              (((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
                (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)) &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator)))))) &&
            ((((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _ix86_fp_compare_mode)) &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _ix86_cc_mode)) &&
             ((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _index_register_operand &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x40) == _const248_operand)))))) &&
           ((ix86_isa_flags & 0x80000) != 0)) {
          return 0x646;
        }
      }
    }
    break;
  case 100:
    psVar2 = *(short **)&x1->u;
    if (((((*(char *)(psVar2 + 1) == 'F') && (*psVar2 == 0x44)) &&
         (psVar8 = *(short **)(psVar2 + 4), *(char *)(psVar8 + 1) == 'F')) &&
        ((*psVar8 == 0x31 && (psVar4 = *(short **)(psVar8 + 4), *(char *)(psVar4 + 1) == 'F')))) &&
       ((((*psVar4 == 0x44 &&
          ((psVar5 = *(short **)(psVar4 + 4), *(char *)(psVar5 + 1) == 'F' && (*psVar5 == 0x34))))
         && (psVar6 = *(short **)(psVar5 + 4), *(char *)(psVar6 + 1) == 'F')) && (*psVar6 == 0x62)))
       ) {
      prVar3 = *(rtx *)(psVar6 + 4);
      iVar9 = nonimmediate_operand(prVar3,0x40);
      if (((iVar9 != 0) &&
          (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3,
          *(char *)(psVar5 + 1) == 'F')) && (*psVar5 == 0x62)) {
        psVar5 = *(short **)(psVar5 + 4);
        iVar9 = nonimmediate_operand(psVar5,0x40);
        if ((((iVar9 != 0) &&
             (_register_operand = psVar5, *(long *)(psVar4 + 8) == _reg_not_xmm0_operand)) &&
            ((psVar8 = *(short **)(psVar8 + 8), *(char *)(psVar8 + 1) == '@' &&
             ((*psVar8 == 0x21 && (**(int **)(psVar8 + 4) == 8)))))) &&
           (((*(long *)(*(long *)(psVar8 + 4) + 8) == _bt_comparison_operator &&
             ((((*(long *)(*(long *)(psVar8 + 4) + 0x10) == _bt_comparison_operator &&
                (*(long *)(*(long *)(psVar8 + 4) + 0x18) == _bt_comparison_operator)) &&
               (*(long *)(*(long *)(psVar8 + 4) + 0x20) == _bt_comparison_operator)) &&
              (((*(long *)(*(long *)(psVar8 + 4) + 0x28) == _bt_comparison_operator &&
                (*(long *)(*(long *)(psVar8 + 4) + 0x30) == _bt_comparison_operator)) &&
               ((*(long *)(*(long *)(psVar8 + 4) + 0x38) == _bt_comparison_operator &&
                ((*(long *)(*(long *)(psVar8 + 4) + 0x40) == _bt_comparison_operator &&
                 (**(short **)(psVar2 + 8) == 0x1e)))))))))) &&
            (*(long *)(*(short **)(psVar2 + 8) + 4) == 1)))) {
          if (((ix86_isa_flags & 0x20) != 0) &&
             (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
            return 0x5fe;
          }
          if (((ix86_isa_flags & 0x400000) != 0) &&
             (iVar9 = ix86_binary_operator_ok(0x34,0x40,&recog_data), iVar9 != 0)) {
            return 0x5ff;
          }
        }
      }
    }
    break;
  case 0x6f:
    prVar3 = *(rtx *)&x1->u;
    iVar9 = nonimmediate_operand(prVar3,0x40);
    if ((iVar9 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar3, (ix86_isa_flags & 0x400000) != 0)) {
      return 0x611;
    }
    break;
  case 0x7b:
    psVar2 = *(short **)&x1->u;
    iVar9 = nonimmediate_operand(psVar2,0x40);
    if (iVar9 != 0) {
      prVar3 = *(rtx *)&(x1->u).field_0x8;
      _register_operand = psVar2;
      iVar9 = register_operand(prVar3,0x40);
      if (iVar9 != 0) {
        psVar2 = *(short **)&(x1->u).field_0x10;
        _GLOBAL_OFFSET_TABLE_ = prVar3;
        iVar9 = const_0_to_255_operand(psVar2,0x10);
        if (iVar9 != 0) {
          if ((ix86_isa_flags & 0x20) != 0) {
            _nonimmediate_operand = psVar2;
            return 0x637;
          }
          _nonimmediate_operand = psVar2;
          if ((ix86_isa_flags & 0x80000) != 0) {
            return 0x638;
          }
        }
      }
    }
    break;
  case 0x7d:
    psVar2 = *(short **)&x1->u;
    if (*(char *)(psVar2 + 1) == '<') {
      if (*psVar2 == 0x7d) {
        psVar2 = *(short **)(psVar2 + 4);
        if (((*(char *)(psVar2 + 1) == '9') && (*psVar2 == 0x7d)) &&
           (*(char *)(*(long *)(psVar2 + 4) + 2) == '\x0f')) {
          iVar9 = recog_22(x0,insn,pnum_clobbers);
          return iVar9;
        }
      }
      else if (*psVar2 == 0x89) {
        prVar3 = *(rtx *)(psVar2 + 4);
        iVar9 = register_operand(prVar3,0x41);
        if (((iVar9 != 0) &&
            (psVar2 = *(short **)&(x1->u).field_0x8, _GLOBAL_OFFSET_TABLE_ = prVar3,
            *(char *)(psVar2 + 1) == '<')) && (*psVar2 == 0x89)) {
          psVar2 = *(short **)(psVar2 + 4);
          iVar9 = nonimmediate_operand(psVar2,0x41);
          if (iVar9 != 0) {
            if ((ix86_isa_flags & 0x20) != 0) {
              _register_operand = psVar2;
              return 0x633;
            }
            _register_operand = psVar2;
            if ((ix86_isa_flags & 0x80000) != 0) {
              return 0x634;
            }
          }
        }
      }
    }
    break;
  case 0x7f:
    psVar2 = *(short **)&x1->u;
    if (((*(char *)(psVar2 + 1) == '@') && (*psVar2 == 0x34)) &&
       (prVar3 = *(rtx *)(psVar2 + 4), prVar3->field_0x2 == '@')) {
      if (*(short *)prVar3 == 99) {
        psVar8 = *(short **)&prVar3->u;
        if ((*(char *)(psVar8 + 1) == '8') && (*psVar8 == 0x7c)) {
          prVar3 = *(rtx *)(psVar8 + 4);
          iVar9 = register_operand(prVar3,0x3f);
          if ((((iVar9 != 0) &&
               ((psVar8 = *(short **)(psVar8 + 8), _GLOBAL_OFFSET_TABLE_ = prVar3, *psVar8 == 0xf &&
                (**(int **)(psVar8 + 4) == 8)))) &&
              (*(long *)(*(long *)(psVar8 + 4) + 8) == _q_regs_operand)) &&
             ((((((((*(long *)(*(long *)(psVar8 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                    (*(long *)(*(long *)(psVar8 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
                   (*(long *)(*(long *)(psVar8 + 4) + 0x20) == _index_register_operand)) &&
                  ((*(long *)(*(long *)(psVar8 + 4) + 0x28) == _flags_reg_operand &&
                   (*(long *)(*(long *)(psVar8 + 4) + 0x30) == _sibcall_insn_operand)))) &&
                 (*(long *)(*(long *)(psVar8 + 4) + 0x38) == _const_0_to_255_mul_8_operand)) &&
                ((*(long *)(*(long *)(psVar8 + 4) + 0x40) == _reg_not_xmm0_operand &&
                 (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '@')))) &&
               (*psVar2 == 0x62)) &&
              ((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == ';' && (*psVar2 == 0x7c))
              )))) {
            psVar8 = *(short **)(psVar2 + 4);
            iVar9 = nonimmediate_operand(psVar8,0x3f);
            if ((((iVar9 != 0) &&
                 (((psVar2 = *(short **)(psVar2 + 8), _register_operand = psVar8, *psVar2 == 0xf &&
                   (**(int **)(psVar2 + 4) == 8)) &&
                  (*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand)))) &&
                ((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
                  (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _index_register_operand)) &&
                 (((*(long *)(*(long *)(psVar2 + 4) + 0x28) == _flags_reg_operand &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x30) == _sibcall_insn_operand)) &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x38) == _const_0_to_255_mul_8_operand &&
                   (((*(long *)(*(long *)(psVar2 + 4) + 0x40) == _reg_not_xmm0_operand &&
                     (psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == '@')) &&
                    (*psVar2 == 0x34)))))))))) &&
               ((((psVar8 = *(short **)(psVar2 + 4), *(char *)(psVar8 + 1) == '@' && (*psVar8 == 99)
                  ) && (((psVar8 = *(short **)(psVar8 + 4), *(char *)(psVar8 + 1) == '?' &&
                         (((*psVar8 == 0x7c &&
                           (iVar9 = rtx_equal_p(*(undefined8 *)(psVar8 + 4),_GLOBAL_OFFSET_TABLE_),
                           iVar9 != 0)) &&
                          ((psVar8 = *(short **)(psVar8 + 8), *psVar8 == 0xf &&
                           ((((**(int **)(psVar8 + 4) == 8 &&
                              (*(long *)(*(long *)(psVar8 + 4) + 8) == _bt_comparison_operator)) &&
                             (*(long *)(*(long *)(psVar8 + 4) + 0x10) == _swap_condition)) &&
                            ((*(long *)(*(long *)(psVar8 + 4) + 0x18) == _ix86_cc_mode &&
                             (*(long *)(*(long *)(psVar8 + 4) + 0x20) == _const248_operand))))))))))
                        && (*(long *)(*(long *)(psVar8 + 4) + 0x28) ==
                            _constant_call_address_operand)))) &&
                ((((((*(long *)(*(long *)(psVar8 + 4) + 0x30) == _nonimmediate_or_sse_const_operand
                     && (*(long *)(*(long *)(psVar8 + 4) + 0x38) ==
                         _ix86_vec_interleave_v2df_operator_ok)) &&
                    (((*(long *)(*(long *)(psVar8 + 4) + 0x40) == _nonimm_not_xmm0_operand &&
                      (((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '@' &&
                        (*psVar2 == 0x62)) &&
                       (psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '?')))) &&
                     (((*psVar2 == 0x7c &&
                       (iVar9 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand),
                       iVar9 != 0)) && (psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf)))))) &&
                   ((**(int **)(psVar2 + 4) == 8 &&
                    (*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator)))) &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition &&
                   (((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode &&
                     (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x28) == _constant_call_address_operand))))))
                 && (((*(long *)(*(long *)(psVar2 + 4) + 0x30) == _nonimmediate_or_sse_const_operand
                      && (*(long *)(*(long *)(psVar2 + 4) + 0x38) ==
                          _ix86_vec_interleave_v2df_operator_ok)) &&
                     ((**(short **)(*(long *)(psVar2 + 4) + 0x40) == 0x1e &&
                      (*(long *)(*(short **)(*(long *)(psVar2 + 4) + 0x40) + 4) == 0xf)))))))))) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x5fb;
              }
              if ((ix86_isa_flags & 0x400000) != 0) {
                return 0x5fc;
              }
            }
          }
        }
      }
      else {
        iVar9 = nonimmediate_operand(prVar3,0x40);
        if (iVar9 != 0) {
          psVar2 = *(short **)(psVar2 + 8);
          _GLOBAL_OFFSET_TABLE_ = prVar3;
          iVar9 = nonimmediate_operand(psVar2,0x40);
          if (iVar9 != 0) {
            psVar8 = *(short **)&(x1->u).field_0x8;
            _register_operand = psVar2;
            iVar9 = nonimmediate_operand(psVar8,0x40);
            if ((iVar9 != 0) && (_nonimmediate_operand = psVar8, (ix86_isa_flags & 0x800000) != 0))
            {
              return 0x669;
            }
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_24(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  short *psVar5;
  undefined8 uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  
  lVar2 = *(long *)&(x0->u).field_0x8;
  lVar3 = *(long *)(lVar2 + 8);
  puVar4 = *(ushort **)(lVar3 + 8);
  uVar1 = *puVar4;
  if (uVar1 == 0x81) {
    psVar5 = *(short **)(puVar4 + 4);
    if ((*(char *)(psVar5 + 1) == '\x0f') && (*psVar5 == 0x7c)) {
      uVar6 = *(undefined8 *)(psVar5 + 4);
      iVar9 = register_operand(uVar6,0x3c);
      if (((((iVar9 != 0) &&
            ((((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf &&
               (**(int **)(psVar5 + 4) == 1)) &&
              (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
             ((psVar5 = *(short **)(puVar4 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
              (*psVar5 == 0x7c)))))) &&
           ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar9 != 0 &&
            ((((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1))
              && ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                  (((psVar5 = *(short **)(lVar3 + 0x10), *(char *)(psVar5 + 1) == '\x0f' &&
                    (*psVar5 == 0x81)) &&
                   (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')))))) &&
             ((*psVar7 == 0x7c &&
              (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0)))
             ))))) &&
          ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
           (((**(int **)(psVar7 + 4) == 1 &&
             (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator)) &&
            ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
             (((*psVar5 == 0x7c &&
               (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0))
              && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))))))))) &&
         (((**(int **)(psVar5 + 4) == 1 && (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)
           ) && ((psVar5 = *(short **)(lVar2 + 0x10), *(char *)(psVar5 + 1) == '9' &&
                 (((*psVar5 == 0x7d &&
                   (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')) &&
                  ((*psVar7 == 0x81 &&
                   ((psVar8 = *(short **)(psVar7 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
                    (*psVar8 == 0x7c)))))))))))) {
        uVar6 = *(undefined8 *)(psVar8 + 4);
        iVar9 = nonimmediate_operand(uVar6,0x3c);
        if (((iVar9 != 0) &&
            (((((((((psVar8 = *(short **)(psVar8 + 8), _register_operand = uVar6, *psVar8 == 0xf &&
                    (**(int **)(psVar8 + 4) == 1)) &&
                   (*(long *)(*(long *)(psVar8 + 4) + 8) == _q_regs_operand)) &&
                  ((psVar7 = *(short **)(psVar7 + 8), *(char *)(psVar7 + 1) == '\x0f' &&
                   (*psVar7 == 0x7c)))) &&
                 (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),uVar6), iVar9 != 0)) &&
                ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf && (**(int **)(psVar7 + 4) == 1))
                )) && (((*(long *)(*(long *)(psVar7 + 4) + 8) == _bt_comparison_operator &&
                        (((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                          (*psVar5 == 0x81)) &&
                         (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')))) &&
                       (((*psVar7 == 0x7c &&
                         (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_register_operand),
                         iVar9 != 0)) && (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)))))) &&
              ((**(int **)(psVar7 + 4) == 1 &&
               (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
             ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
              (((*psVar5 == 0x7c &&
                (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar9 != 0)) &&
               (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))))))) &&
           (((**(int **)(psVar5 + 4) == 1 &&
             (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)) &&
            ((ix86_isa_flags & 0x400000) != 0)))) {
          return 0x5fa;
        }
      }
    }
  }
  else if (uVar1 < 0x82) {
    if (uVar1 == 0x7f) {
      psVar5 = *(short **)(puVar4 + 4);
      if ((*(char *)(psVar5 + 1) == '\x0f') && (*psVar5 == 0x7c)) {
        uVar6 = *(undefined8 *)(psVar5 + 4);
        iVar9 = register_operand(uVar6,0x3c);
        if ((((((iVar9 != 0) &&
               ((((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf
                  && (**(int **)(psVar5 + 4) == 1)) &&
                 (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                ((psVar5 = *(short **)(puVar4 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                 (*psVar5 == 0x7c)))))) &&
              (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar9 != 0)) &&
             ((((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1))
               && ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar5 = *(short **)(lVar3 + 0x10), *(char *)(psVar5 + 1) == '\x0f' &&
                     (*psVar5 == 0x7f)) &&
                    (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')))))) &&
              ((*psVar7 == 0x7c &&
               (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0))
              )))) && ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                       (((**(int **)(psVar7 + 4) == 1 &&
                         (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                        ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                         (((*psVar5 == 0x7c &&
                           (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                           iVar9 != 0)) && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf))))))))
                      )) &&
           ((((**(int **)(psVar5 + 4) == 1 &&
              (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)) &&
             (psVar5 = *(short **)(lVar2 + 0x10), *(char *)(psVar5 + 1) == '9')) &&
            (((*psVar5 == 0x7d &&
              (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')) &&
             ((*psVar7 == 0x7f &&
              ((psVar8 = *(short **)(psVar7 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
               (*psVar8 == 0x7c)))))))))) {
          uVar6 = *(undefined8 *)(psVar8 + 4);
          iVar9 = nonimmediate_operand(uVar6,0x3c);
          if ((((((iVar9 != 0) &&
                 (((((psVar8 = *(short **)(psVar8 + 8), _register_operand = uVar6, *psVar8 == 0xf &&
                     (**(int **)(psVar8 + 4) == 1)) &&
                    (*(long *)(*(long *)(psVar8 + 4) + 8) == _q_regs_operand)) &&
                   ((psVar7 = *(short **)(psVar7 + 8), *(char *)(psVar7 + 1) == '\x0f' &&
                    (*psVar7 == 0x7c)))) &&
                  ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),uVar6), iVar9 != 0 &&
                   ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                    (**(int **)(psVar7 + 4) == 1)))))))) &&
                (*(long *)(*(long *)(psVar7 + 4) + 8) == _bt_comparison_operator)) &&
               (((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                 (*psVar5 == 0x7f)) &&
                (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')))) &&
              ((*psVar7 == 0x7c &&
               (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_register_operand), iVar9 != 0))))
             && (((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                  ((**(int **)(psVar7 + 4) == 1 &&
                   (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
                 ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                  ((((*psVar5 == 0x7c &&
                     (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar9 != 0
                     )) && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                   (((**(int **)(psVar5 + 4) == 1 &&
                     (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)) &&
                    ((ix86_isa_flags & 0x400000) != 0)))))))))) {
            return 0x5f1;
          }
        }
      }
    }
    else if (uVar1 < 0x80) {
      if (uVar1 == 0x31) {
        psVar5 = *(short **)(puVar4 + 4);
        if ((*(char *)(psVar5 + 1) == '\x0f') && (*psVar5 == 0x7c)) {
          uVar6 = *(undefined8 *)(psVar5 + 4);
          iVar9 = register_operand(uVar6,0x3c);
          if ((((iVar9 != 0) &&
               (((((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf
                   && (**(int **)(psVar5 + 4) == 1)) &&
                  (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)) &&
                 ((psVar5 = *(short **)(puVar4 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                  (*psVar5 == 0x7c)))) &&
                (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar9 != 0)))) &&
              (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1))
               && ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                   (((psVar5 = *(short **)(lVar3 + 0x10), *(char *)(psVar5 + 1) == '\x0f' &&
                     (*psVar5 == 0x31)) &&
                    (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')))))))) &&
             ((((((*psVar7 == 0x7c &&
                  (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar9 != 0)) &&
                 ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                  ((**(int **)(psVar7 + 4) == 1 &&
                   (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator)))))) &&
                (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f')) &&
               (((((*psVar5 == 0x7c &&
                   (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar9 != 0)) && (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                 ((**(int **)(psVar5 + 4) == 1 &&
                  (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)))) &&
                (((psVar5 = *(short **)(lVar2 + 0x10), *(char *)(psVar5 + 1) == '9' &&
                  ((*psVar5 == 0x7d &&
                   (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')))) &&
                 (*psVar7 == 0x31)))))) &&
              ((psVar8 = *(short **)(psVar7 + 4), *(char *)(psVar8 + 1) == '\x0f' &&
               (*psVar8 == 0x7c)))))) {
            uVar6 = *(undefined8 *)(psVar8 + 4);
            iVar9 = nonimmediate_operand(uVar6,0x3c);
            if (((iVar9 != 0) &&
                ((((psVar8 = *(short **)(psVar8 + 8), _register_operand = uVar6, *psVar8 == 0xf &&
                   (**(int **)(psVar8 + 4) == 1)) &&
                  (*(long *)(*(long *)(psVar8 + 4) + 8) == _q_regs_operand)) &&
                 ((psVar7 = *(short **)(psVar7 + 8), *(char *)(psVar7 + 1) == '\x0f' &&
                  (*psVar7 == 0x7c)))))) &&
               (((iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),uVar6), iVar9 != 0 &&
                 ((((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                    (**(int **)(psVar7 + 4) == 1)) &&
                   ((*(long *)(*(long *)(psVar7 + 4) + 8) == _bt_comparison_operator &&
                    (((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                      (*psVar5 == 0x31)) &&
                     (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')))))) &&
                  (((*psVar7 == 0x7c &&
                    (iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_register_operand), iVar9 != 0)
                    ) && ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                          (((**(int **)(psVar7 + 4) == 1 &&
                            (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator))
                           && ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                               (((*psVar5 == 0x7c &&
                                 (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand)
                                 , iVar9 != 0)) &&
                                (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))))))))))))) &&
                (((**(int **)(psVar5 + 4) == 1 &&
                  (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)) &&
                 ((ix86_isa_flags & 0x400000) != 0)))))) {
              return 0x5eb;
            }
          }
        }
      }
      else if (((uVar1 == 0x32) &&
               (psVar5 = *(short **)(puVar4 + 4), *(char *)(psVar5 + 1) == '\x0f')) &&
              (*psVar5 == 0x7c)) {
        uVar6 = *(undefined8 *)(psVar5 + 4);
        iVar9 = register_operand(uVar6,0x3c);
        if ((((((((iVar9 != 0) &&
                 (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf))
                && (**(int **)(psVar5 + 4) == 1)) &&
               ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
                (psVar5 = *(short **)(puVar4 + 8), *(char *)(psVar5 + 1) == '\x0f')))) &&
              ((*psVar5 == 0x7c &&
               ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar9 != 0 &&
                (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)))))) &&
             ((**(int **)(psVar5 + 4) == 1 &&
              (((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                (psVar5 = *(short **)(lVar3 + 0x10), *(char *)(psVar5 + 1) == '\x0f')) &&
               (*psVar5 == 0x32)))))) &&
            ((((psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f' &&
               (*psVar7 == 0x7c)) &&
              ((((iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0
                 && ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                     (**(int **)(psVar7 + 4) == 1)))) &&
                (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator)) &&
               (((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                 (*psVar5 == 0x7c)) &&
                (iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar9 != 0)
                ))))) &&
             ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1)))))
            ) && ((((*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition &&
                    ((psVar5 = *(short **)(lVar2 + 0x10), *(char *)(psVar5 + 1) == '9' &&
                     (*psVar5 == 0x7d)))) &&
                   (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f')) &&
                  (((*psVar7 == 0x32 &&
                    (psVar8 = *(short **)(psVar7 + 4), *(char *)(psVar8 + 1) == '\x0f')) &&
                   (*psVar8 == 0x7c)))))) {
          uVar6 = *(undefined8 *)(psVar8 + 4);
          iVar9 = nonimmediate_operand(uVar6,0x3c);
          if ((((((iVar9 != 0) &&
                 (psVar8 = *(short **)(psVar8 + 8), _register_operand = uVar6, *psVar8 == 0xf)) &&
                ((**(int **)(psVar8 + 4) == 1 &&
                 ((*(long *)(*(long *)(psVar8 + 4) + 8) == _q_regs_operand &&
                  (psVar7 = *(short **)(psVar7 + 8), *(char *)(psVar7 + 1) == '\x0f')))))) &&
               (*psVar7 == 0x7c)) &&
              ((((((iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),uVar6), iVar9 != 0 &&
                   (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)) &&
                  (**(int **)(psVar7 + 4) == 1)) &&
                 ((*(long *)(*(long *)(psVar7 + 4) + 8) == _bt_comparison_operator &&
                  (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f')))) &&
                (*psVar5 == 0x32)) &&
               ((psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == '\x0f' &&
                (*psVar7 == 0x7c)))))) &&
             (((iVar9 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_register_operand), iVar9 != 0 &&
               (((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf && (**(int **)(psVar7 + 4) == 1))
                && (*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
              (((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == '\x0f' &&
                (*psVar5 == 0x7c)) &&
               ((iVar9 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar9 != 0 &&
                (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 1)
                  ) && ((*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition &&
                        ((ix86_isa_flags & 0x400000) != 0)))))))))))) {
            return 0x5f4;
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_25(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  short *psVar5;
  undefined8 uVar6;
  short *psVar7;
  int iVar8;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  rtx x7;
  
  lVar2 = *(long *)&(x0->u).field_0x8;
  lVar3 = *(long *)(lVar2 + 8);
  puVar4 = *(ushort **)(lVar3 + 8);
  uVar1 = *puVar4;
  if (uVar1 == 99) {
    psVar5 = *(short **)(puVar4 + 4);
    if ((*(char *)(psVar5 + 1) == '8') && (*psVar5 == 0x7c)) {
      uVar6 = *(undefined8 *)(psVar5 + 4);
      iVar8 = nonimmediate_operand(uVar6,0x3f);
      if (((((((iVar8 != 0) &&
              (((psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf &&
                (**(int **)(psVar5 + 4) == 4)) &&
               (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)))) &&
             (((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_compare_mode &&
               (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _flags_reg_operand)) &&
              (*(long *)(*(long *)(psVar5 + 4) + 0x20) == _const_0_to_255_mul_8_operand)))) &&
            (((psVar5 = *(short **)(lVar3 + 0x10), *(char *)(psVar5 + 1) == 'A' && (*psVar5 == 99))
             && ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '8' &&
                 ((((*psVar5 == 0x7c &&
                    (iVar8 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar8 != 0)) &&
                   (psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf)) &&
                  ((**(int **)(psVar5 + 4) == 4 &&
                   (*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator)))))))))) &&
           (((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_cc_mode &&
             ((*(long *)(*(long *)(psVar5 + 4) + 0x18) == _constant_call_address_operand &&
              (*(long *)(*(long *)(psVar5 + 4) + 0x20) == _ix86_vec_interleave_v2df_operator_ok))))
            && ((((psVar5 = *(short **)(lVar2 + 0x10), *(char *)(psVar5 + 1) == 'A' &&
                  (((*psVar5 == 0x31 &&
                    (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == 'A')) &&
                   (*psVar7 == 99)))) &&
                 (((psVar7 = *(short **)(psVar7 + 4), *(char *)(psVar7 + 1) == '8' &&
                   (*psVar7 == 0x7c)) &&
                  (iVar8 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar8 != 0)))) &&
                ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf && (**(int **)(psVar7 + 4) == 4))
                )))))) &&
          (((*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator &&
            (((*(long *)(*(long *)(psVar7 + 4) + 0x10) == _index_register_operand &&
              (*(long *)(*(long *)(psVar7 + 4) + 0x18) == _sibcall_insn_operand)) &&
             (*(long *)(*(long *)(psVar7 + 4) + 0x20) == _reg_not_xmm0_operand)))) &&
           ((psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == 'A' && (*psVar5 == 99))))))
         && ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '8' &&
             (((*psVar5 == 0x7c &&
               (iVar8 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar8 != 0))
              && ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                  (((((**(int **)(psVar5 + 4) == 4 &&
                      (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)) &&
                     (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _const248_operand)) &&
                    ((*(long *)(*(long *)(psVar5 + 4) + 0x18) == _nonimmediate_or_sse_const_operand
                     && (*(long *)(*(long *)(psVar5 + 4) + 0x20) == _nonimm_not_xmm0_operand)))) &&
                   ((ix86_isa_flags & 0x800000) != 0)))))))))) {
        return 0x689;
      }
    }
  }
  else if (uVar1 < 100) {
    if (uVar1 == 0x34) {
      psVar5 = *(short **)(puVar4 + 4);
      if (((*(char *)(psVar5 + 1) == 'A') && (*psVar5 == 0x62)) &&
         ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '<' && (*psVar5 == 0x7c)))) {
        uVar6 = *(undefined8 *)(psVar5 + 4);
        iVar8 = nonimmediate_operand(uVar6,0x40);
        if ((((((iVar8 != 0) &&
               (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf)) &&
              (**(int **)(psVar5 + 4) == 4)) &&
             (((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator)) &&
              (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _ix86_fp_compare_mode)))) &&
            ((*(long *)(*(long *)(psVar5 + 4) + 0x20) == _index_register_operand &&
             (psVar5 = *(short **)(puVar4 + 8), *(char *)(psVar5 + 1) == 'A')))) &&
           ((*psVar5 == 0x62 &&
            ((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '<' && (*psVar5 == 0x7c))))
           )) {
          uVar6 = *(undefined8 *)(psVar5 + 4);
          iVar8 = nonimmediate_operand(uVar6,0x40);
          if (((((iVar8 != 0) &&
                (((psVar5 = *(short **)(psVar5 + 8), _register_operand = uVar6, *psVar5 == 0xf &&
                  (**(int **)(psVar5 + 4) == 4)) &&
                 (*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand)))) &&
               (((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                 (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
                (((*(long *)(*(long *)(psVar5 + 4) + 0x20) == _index_register_operand &&
                  ((psVar5 = *(short **)(lVar3 + 0x10), *(char *)(psVar5 + 1) == 'A' &&
                   (*psVar5 == 0x34)))) &&
                 (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == 'A')))))) &&
              ((((((*psVar7 == 0x62 &&
                   (psVar7 = *(short **)(psVar7 + 4), *(char *)(psVar7 + 1) == '<')) &&
                  (*psVar7 == 0x7c)) &&
                 ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar8 != 0 && (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)))) &&
                ((**(int **)(psVar7 + 4) == 4 &&
                 ((*(long *)(*(long *)(psVar7 + 4) + 8) == _bt_comparison_operator &&
                  (*(long *)(*(long *)(psVar7 + 4) + 0x10) == _swap_condition)))))) &&
               ((*(long *)(*(long *)(psVar7 + 4) + 0x18) == _ix86_cc_mode &&
                ((((*(long *)(*(long *)(psVar7 + 4) + 0x20) == _const248_operand &&
                   (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == 'A')) &&
                  (*psVar5 == 0x62)) &&
                 (((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '<' &&
                   (*psVar5 == 0x7c)) &&
                  ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_register_operand), iVar8 != 0
                   && ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                       (**(int **)(psVar5 + 4) == 4)))))))))))))) &&
             ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
              (((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _swap_condition &&
                (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _ix86_cc_mode)) &&
               (*(long *)(*(long *)(psVar5 + 4) + 0x20) == _const248_operand)))))) {
            uVar6 = *(undefined8 *)(lVar2 + 0x10);
            iVar8 = nonimmediate_operand(uVar6,0x41);
            if ((iVar8 != 0) && (_nonimmediate_operand = uVar6, (ix86_isa_flags & 0x800000) != 0)) {
              return 0x675;
            }
          }
        }
      }
    }
    else if (((uVar1 == 0x62) && (psVar5 = *(short **)(puVar4 + 4), *(char *)(psVar5 + 1) == '8'))
            && (*psVar5 == 0x7c)) {
      uVar6 = *(undefined8 *)(psVar5 + 4);
      iVar8 = nonimmediate_operand(uVar6,0x3f);
      if (((((((iVar8 != 0) &&
              (psVar5 = *(short **)(psVar5 + 8), _GLOBAL_OFFSET_TABLE_ = uVar6, *psVar5 == 0xf)) &&
             (**(int **)(psVar5 + 4) == 4)) &&
            ((*(long *)(*(long *)(psVar5 + 4) + 8) == _q_regs_operand &&
             (*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_fp_compare_mode)))) &&
           ((*(long *)(*(long *)(psVar5 + 4) + 0x18) == _flags_reg_operand &&
            ((*(long *)(*(long *)(psVar5 + 4) + 0x20) == _const_0_to_255_mul_8_operand &&
             (psVar5 = *(short **)(lVar3 + 0x10), *(char *)(psVar5 + 1) == 'A')))))) &&
          (((((*psVar5 == 0x62 &&
              (((((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '8' &&
                  (*psVar5 == 0x7c)) &&
                 (iVar8 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),uVar6), iVar8 != 0)) &&
                ((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf && (**(int **)(psVar5 + 4) == 4))
                )) && ((*(long *)(*(long *)(psVar5 + 4) + 8) == _bt_comparison_operator &&
                       ((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _ix86_cc_mode &&
                        (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _constant_call_address_operand))
                       )))))) &&
             (*(long *)(*(long *)(psVar5 + 4) + 0x20) == _ix86_vec_interleave_v2df_operator_ok)) &&
            (((psVar5 = *(short **)(lVar2 + 0x10), *(char *)(psVar5 + 1) == 'A' && (*psVar5 == 0x31)
              ) && (psVar7 = *(short **)(psVar5 + 4), *(char *)(psVar7 + 1) == 'A')))) &&
           ((((*psVar7 == 0x62 && (psVar7 = *(short **)(psVar7 + 4), *(char *)(psVar7 + 1) == '8'))
             && (((*psVar7 == 0x7c &&
                  ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                   iVar8 != 0 && (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)))) &&
                 (**(int **)(psVar7 + 4) == 4)))) &&
            (((((*(long *)(*(long *)(psVar7 + 4) + 8) == _ix86_fp_comparison_operator &&
                (*(long *)(*(long *)(psVar7 + 4) + 0x10) == _index_register_operand)) &&
               (*(long *)(*(long *)(psVar7 + 4) + 0x18) == _sibcall_insn_operand)) &&
              ((*(long *)(*(long *)(psVar7 + 4) + 0x20) == _reg_not_xmm0_operand &&
               (psVar5 = *(short **)(psVar5 + 8), *(char *)(psVar5 + 1) == 'A')))) &&
             (*psVar5 == 0x62)))))))) &&
         ((((((psVar5 = *(short **)(psVar5 + 4), *(char *)(psVar5 + 1) == '8' && (*psVar5 == 0x7c))
             && ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar5 + 4),_GLOBAL_OFFSET_TABLE_), iVar8 != 0
                 && (((psVar5 = *(short **)(psVar5 + 8), *psVar5 == 0xf &&
                      (**(int **)(psVar5 + 4) == 4)) &&
                     (*(long *)(*(long *)(psVar5 + 4) + 8) == _swap_condition)))))) &&
            ((*(long *)(*(long *)(psVar5 + 4) + 0x10) == _const248_operand &&
             (*(long *)(*(long *)(psVar5 + 4) + 0x18) == _nonimmediate_or_sse_const_operand)))) &&
           (*(long *)(*(long *)(psVar5 + 4) + 0x20) == _nonimm_not_xmm0_operand)) &&
          ((ix86_isa_flags & 0x800000) != 0)))) {
        return 0x683;
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_26(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  short *psVar2;
  short *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort *puVar7;
  rtx prVar8;
  short *psVar9;
  short *psVar10;
  int iVar11;
  rtx x1;
  rtx *operands;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  rtx x7;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  uVar1 = *(ushort *)x1;
  if (uVar1 == 0x12) {
    iVar11 = **(int **)&x1->u;
    if (iVar11 == 3) {
      if (*(int *)&(x1->u).field_0x8 != 0x98) {
        return -1;
      }
      uVar4 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar11 = register_operand(uVar4,0x41);
      if (iVar11 == 0) {
        return -1;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x10);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar4;
      iVar11 = nonimmediate_operand(uVar5,0x41);
      if (iVar11 == 0) {
        return -1;
      }
      uVar4 = *(undefined8 *)(*(long *)&x1->u + 0x18);
      _register_operand = (short *)uVar5;
      iVar11 = const_int_operand(uVar4,0x10);
      if (iVar11 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x800000) == 0) {
        _nonimmediate_operand = (short *)uVar4;
        return -1;
      }
      _nonimmediate_operand = (short *)uVar4;
      return 0x6bd;
    }
    if (3 < iVar11) {
      return -1;
    }
    if (iVar11 != 1) {
      if (iVar11 != 2) {
        return -1;
      }
      if (*(int *)&(x1->u).field_0x8 != 0x79) {
        return -1;
      }
      uVar4 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar11 = register_operand(uVar4,0x41);
      if (iVar11 == 0) {
        return -1;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x10);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar4;
      iVar11 = nonimmediate_operand(uVar5,0x41);
      if (iVar11 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x20) != 0) {
        _register_operand = (short *)uVar5;
        return 0x606;
      }
      if ((ix86_isa_flags & 0x400000) == 0) {
        _register_operand = (short *)uVar5;
        return -1;
      }
      _register_operand = (short *)uVar5;
      return 0x609;
    }
    iVar11 = *(int *)&(x1->u).field_0x8;
    if (iVar11 != 0x97) {
      if (iVar11 != 0xac) {
        return -1;
      }
      uVar4 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar11 = nonimmediate_operand(uVar4,0x46);
      if (iVar11 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x20) == 0) {
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar4;
        return -1;
      }
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar4;
      return 0x703;
    }
    lVar6 = *(long *)(*(long *)&x1->u + 8);
    iVar11 = ix86_comparison_uns_operator(lVar6,0x41);
    if (iVar11 == 0) {
      return -1;
    }
    uVar4 = *(undefined8 *)(lVar6 + 8);
    _GLOBAL_OFFSET_TABLE_ = (rtx)lVar6;
    iVar11 = register_operand(uVar4,0x41);
    if (iVar11 == 0) {
      return -1;
    }
    uVar5 = *(undefined8 *)(lVar6 + 0x10);
    _register_operand = (short *)uVar4;
    iVar11 = nonimmediate_operand(uVar5,0x41);
    if (iVar11 == 0) {
      return -1;
    }
    if ((ix86_isa_flags & 0x800000) == 0) {
      _nonimmediate_operand = (short *)uVar5;
      return -1;
    }
    _nonimmediate_operand = (short *)uVar5;
    return 0x6b9;
  }
  if (((uVar1 < 0x12) || (0x7f < uVar1)) || (uVar1 < 0x2f)) goto L23559;
  switch(uVar1) {
  case 0x2f:
    psVar2 = *(short **)&x1->u;
    if (*(char *)(psVar2 + 1) == 'A') {
      if (*psVar2 == 0x52) {
        psVar10 = *(short **)(psVar2 + 4);
        iVar11 = nonimmediate_operand(psVar10,0x41);
        if (((iVar11 != 0) &&
            (_register_operand = psVar10, *(long *)(psVar2 + 8) == _q_regs_operand)) &&
           (psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == 'A')) {
          if (*psVar2 == 0x41) {
            prVar8 = *(rtx *)(psVar2 + 4);
            iVar11 = nonimmediate_operand(prVar8,0x41);
            if (((iVar11 != 0) &&
                (_GLOBAL_OFFSET_TABLE_ = prVar8,
                iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 8),_register_operand), iVar11 != 0))
               && (psVar2 = *(short **)&(x1->u).field_0x10, *(char *)(psVar2 + 1) == 'A')) {
              if (*psVar2 == 0x43) {
                iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_);
                if ((((iVar11 != 0) &&
                     (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == 'A')) &&
                    ((*psVar2 == 0x33 &&
                     ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand),
                      iVar11 != 0 && ((ix86_isa_flags & 0x800000) != 0)))))) &&
                   ((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b)))) {
                  return 0x6a3;
                }
              }
              else if (((((*psVar2 == 0x44) &&
                         (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_),
                         iVar11 != 0)) &&
                        (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == 'A')) &&
                       ((*psVar2 == 0x33 &&
                        (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand),
                        iVar11 != 0)))) &&
                      (((ix86_isa_flags & 0x800000) != 0 &&
                       ((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b))))
                      )) {
                return 0x6a7;
              }
            }
          }
          else if (*psVar2 == 0x42) {
            prVar8 = *(rtx *)(psVar2 + 4);
            iVar11 = nonimmediate_operand(prVar8,0x41);
            if (((((iVar11 != 0) &&
                  (_GLOBAL_OFFSET_TABLE_ = prVar8,
                  iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 8),_register_operand), iVar11 != 0))
                 && (psVar2 = *(short **)&(x1->u).field_0x10, *(char *)(psVar2 + 1) == 'A')) &&
                ((*psVar2 == 0x45 &&
                 (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_),
                 iVar11 != 0)))) &&
               ((((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == 'A' &&
                  ((*psVar2 == 0x33 &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand), iVar11 != 0
                   )))) && ((ix86_isa_flags & 0x800000) != 0)) &&
                ((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b)))))) {
              return 0x69f;
            }
          }
        }
      }
      else {
        iVar11 = nonimmediate_operand(psVar2,0x41);
        if (iVar11 != 0) {
          prVar8 = *(rtx *)&(x1->u).field_0x8;
          _nonimmediate_operand = psVar2;
          iVar11 = vector_move_operand(prVar8,0x41);
          if (iVar11 != 0) {
            psVar2 = *(short **)&(x1->u).field_0x10;
            _GLOBAL_OFFSET_TABLE_ = prVar8;
            iVar11 = vector_move_operand(psVar2,0x41);
            if ((iVar11 != 0) && (_register_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
              return 0x678;
            }
          }
        }
      }
    }
    break;
  case 0x31:
    puVar7 = *(ushort **)&x1->u;
    if (*(char *)(puVar7 + 1) == 'A') {
      uVar1 = *puVar7;
      if (uVar1 == 99) {
        psVar2 = *(short **)(puVar7 + 4);
        if ((*(char *)(psVar2 + 1) == '<') && (*psVar2 == 0x7c)) {
          prVar8 = *(rtx *)(psVar2 + 4);
          iVar11 = nonimmediate_operand(prVar8,0x40);
          if ((((iVar11 != 0) &&
               ((psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf &&
                (**(int **)(psVar2 + 4) == 4)))) &&
              (*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand)) &&
             ((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _index_register_operand)) &&
              ((((psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == 'A' &&
                 (*psVar2 == 99)) &&
                ((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '<' &&
                 ((*psVar2 == 0x7c &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),prVar8), iVar11 != 0)))))) &&
               ((psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf &&
                (((((**(int **)(psVar2 + 4) == 4 &&
                    (*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator)) &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition)) &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)))) &&
                 ((ix86_isa_flags & 0x800000) != 0)))))))))) {
            return 0x68b;
          }
        }
      }
      else if (uVar1 < 100) {
        if (uVar1 == 0x62) {
          psVar2 = *(short **)(puVar7 + 4);
          if ((*(char *)(psVar2 + 1) == '<') && (*psVar2 == 0x7c)) {
            prVar8 = *(rtx *)(psVar2 + 4);
            iVar11 = nonimmediate_operand(prVar8,0x40);
            if (((((iVar11 != 0) &&
                  ((((((psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8,
                       *psVar2 == 0xf && (**(int **)(psVar2 + 4) == 4)) &&
                      (*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand)) &&
                     ((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_compare_mode)))) &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _index_register_operand)) &&
                   ((psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == 'A' &&
                    (*psVar2 == 0x62)))))) &&
                 ((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '<' &&
                  (((*psVar2 == 0x7c &&
                    (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),prVar8), iVar11 != 0)) &&
                   (psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf)))))) &&
                (((**(int **)(psVar2 + 4) == 4 &&
                  (*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator)) &&
                 ((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition &&
                  ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)))))))) &&
               ((ix86_isa_flags & 0x800000) != 0)) {
              return 0x685;
            }
          }
        }
        else if (uVar1 < 99) {
          if (uVar1 == 0x31) {
            if (*(char *)(*(long *)(puVar7 + 4) + 2) == 'A') {
              iVar11 = recog_25(x0,insn,pnum_clobbers);
              return iVar11;
            }
          }
          else if ((uVar1 == 0x34) && (prVar8 = *(rtx *)(puVar7 + 4), prVar8->field_0x2 == 'A')) {
            if (*(ushort *)prVar8 == 0x62) {
              psVar2 = *(short **)&prVar8->u;
              if ((*(char *)(psVar2 + 1) == '<') && (*psVar2 == 0x7c)) {
                prVar8 = *(rtx *)(psVar2 + 4);
                iVar11 = nonimmediate_operand(prVar8,0x40);
                if (((iVar11 != 0) &&
                    (((psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8,
                      *psVar2 == 0xf && (**(int **)(psVar2 + 4) == 4)) &&
                     (*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator)))) &&
                   (((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition &&
                       (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode)) &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)) &&
                     ((psVar2 = *(short **)(puVar7 + 8), *(char *)(psVar2 + 1) == 'A' &&
                      (*psVar2 == 0x62)))) &&
                    ((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '<' &&
                     (*psVar2 == 0x7c)))))) {
                  psVar10 = *(short **)(psVar2 + 4);
                  iVar11 = nonimmediate_operand(psVar10,0x40);
                  if ((((((iVar11 != 0) &&
                         (psVar2 = *(short **)(psVar2 + 8), _register_operand = psVar10,
                         *psVar2 == 0xf)) && (**(int **)(psVar2 + 4) == 4)) &&
                       ((*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator &&
                        (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition)))) &&
                      (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode)) &&
                     (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)) {
                    psVar2 = *(short **)&(x1->u).field_0x8;
                    iVar11 = nonimmediate_operand(psVar2,0x41);
                    if ((iVar11 != 0) &&
                       (_nonimmediate_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
                      return 0x673;
                    }
                  }
                }
              }
            }
            else {
              iVar11 = nonimmediate_operand(prVar8,0x41);
              if (iVar11 != 0) {
                psVar2 = *(short **)(puVar7 + 8);
                _GLOBAL_OFFSET_TABLE_ = prVar8;
                iVar11 = nonimmediate_operand(psVar2,0x41);
                if (iVar11 != 0) {
                  psVar10 = *(short **)&(x1->u).field_0x8;
                  _register_operand = psVar2;
                  iVar11 = nonimmediate_operand(psVar10,0x41);
                  if ((iVar11 != 0) &&
                     (_nonimmediate_operand = psVar10, (ix86_isa_flags & 0x800000) != 0)) {
                    return 0x66a;
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 0x32:
    psVar2 = *(short **)&x1->u;
    if ((((*(char *)(psVar2 + 1) == 'A') && (*psVar2 == 0x62)) &&
        (psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '<')) && (*psVar2 == 0x7c)) {
      prVar8 = *(rtx *)(psVar2 + 4);
      iVar11 = nonimmediate_operand(prVar8,0x40);
      if ((((((iVar11 != 0) &&
             (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf)) &&
            ((**(int **)(psVar2 + 4) == 4 &&
             ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _ix86_fp_comparison_operator)))))) &&
           (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
          ((((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _index_register_operand &&
             (psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == 'A')) &&
            (*psVar2 == 0x62)) &&
           (((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '<' && (*psVar2 == 0x7c))
            && ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),prVar8), iVar11 != 0 &&
                ((psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf && (**(int **)(psVar2 + 4) == 4))
                )))))))) &&
         ((*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator &&
          ((((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode)) &&
            (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)) &&
           ((ix86_isa_flags & 0x800000) != 0)))))) {
        return 0x68f;
      }
    }
    break;
  case 0x42:
    prVar8 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar8,0x41);
    if (iVar11 != 0) {
      psVar2 = *(short **)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar8;
      iVar11 = const_0_to_31_operand(psVar2,0x10);
      if ((iVar11 != 0) && (_register_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
        return 0x697;
      }
    }
    break;
  case 0x45:
    prVar8 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar8,0x41);
    if (iVar11 != 0) {
      psVar2 = *(short **)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar8;
      iVar11 = const_0_to_31_operand(psVar2,0x10);
      if ((iVar11 != 0) && (_register_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
        return 0x69b;
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
    iVar11 = ix86_comparison_int_operator(x1,0x41);
    if (iVar11 != 0) {
      psVar2 = *(short **)&x1->u;
      _GLOBAL_OFFSET_TABLE_ = x1;
      iVar11 = register_operand(psVar2,0x41);
      if (iVar11 != 0) {
        psVar10 = *(short **)&(x1->u).field_0x8;
        _register_operand = psVar2;
        iVar11 = nonimmediate_operand(psVar10,0x41);
        if (iVar11 != 0) {
          if ((ix86_isa_flags & 0x800000) != 0) {
            _nonimmediate_operand = psVar10;
            return 0x6b1;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          _nonimmediate_operand = psVar10;
        }
      }
    }
  default:
L23559:
    iVar11 = ix86_comparison_uns_operator(x1,0x41);
    if (iVar11 != 0) {
      _GLOBAL_OFFSET_TABLE_ = x1;
      psVar2 = *(short **)&x1->u;
      iVar11 = register_operand(psVar2,0x41);
      if (iVar11 != 0) {
        psVar10 = *(short **)&(x1->u).field_0x8;
        _register_operand = psVar2;
        iVar11 = nonimmediate_operand(psVar10,0x41);
        if ((iVar11 != 0) && (_nonimmediate_operand = psVar10, (ix86_isa_flags & 0x800000) != 0)) {
          return 0x6b5;
        }
      }
    }
    break;
  case 0x62:
    psVar2 = *(short **)&x1->u;
    if (*(char *)(psVar2 + 1) == '8') {
      if ((*psVar2 == 0x7c) && (prVar8 = *(rtx *)(psVar2 + 4), prVar8->field_0x2 == '?')) {
        if (*(ushort *)prVar8 == 0x7e) {
          prVar8 = *(rtx *)&prVar8->u;
          iVar11 = nonimmediate_operand(prVar8,0x38);
          if ((((((iVar11 != 0) &&
                 (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf))
                && (**(int **)(psVar2 + 4) == 4)) &&
               ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
                (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)))) &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator)) &&
             ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
              ((ix86_isa_flags & 0x80000) != 0)))) {
            return 0x63d;
          }
        }
        else {
          iVar11 = register_operand(prVar8,0x3f);
          if ((((iVar11 != 0) &&
               (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf))
              && (**(int **)(psVar2 + 4) == 4)) &&
             (((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)) &&
              ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator &&
               ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
                ((ix86_isa_flags & 0x80000) != 0)))))))) {
            return 0x63c;
          }
        }
      }
    }
    else if (((*(char *)(psVar2 + 1) == '<') && (*psVar2 == 0x7c)) &&
            (prVar8 = *(rtx *)(psVar2 + 4), prVar8->field_0x2 == '@')) {
      if (*(ushort *)prVar8 == 0x7e) {
        prVar8 = *(rtx *)&prVar8->u;
        iVar11 = nonimmediate_operand(prVar8,0x39);
        if ((((iVar11 != 0) &&
             (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf)) &&
            ((**(int **)(psVar2 + 4) == 4 &&
             ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
              (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)))))) &&
           ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator &&
            ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
             ((ix86_isa_flags & 0x80000) != 0)))))) {
          return 0x641;
        }
      }
      else {
        iVar11 = register_operand(prVar8,0x40);
        if (((((iVar11 != 0) &&
              (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf)) &&
             (**(int **)(psVar2 + 4) == 4)) &&
            ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)))) &&
           ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator &&
            ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
             ((ix86_isa_flags & 0x80000) != 0)))))) {
          return 0x640;
        }
      }
    }
    break;
  case 99:
    psVar2 = *(short **)&x1->u;
    if (*(char *)(psVar2 + 1) == '8') {
      if ((*psVar2 == 0x7c) && (prVar8 = *(rtx *)(psVar2 + 4), prVar8->field_0x2 == '?')) {
        if (*(ushort *)prVar8 == 0x7e) {
          prVar8 = *(rtx *)&prVar8->u;
          iVar11 = nonimmediate_operand(prVar8,0x38);
          if ((((iVar11 != 0) &&
               (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf))
              && (**(int **)(psVar2 + 4) == 4)) &&
             (((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)) &&
              ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator &&
               ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
                ((ix86_isa_flags & 0x80000) != 0)))))))) {
            return 0x649;
          }
        }
        else {
          iVar11 = register_operand(prVar8,0x3f);
          if (((((iVar11 != 0) &&
                (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf))
               && (**(int **)(psVar2 + 4) == 4)) &&
              ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)))) &&
             ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator &&
              ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
               ((ix86_isa_flags & 0x80000) != 0)))))) {
            return 0x648;
          }
        }
      }
    }
    else if (((*(char *)(psVar2 + 1) == '<') && (*psVar2 == 0x7c)) &&
            (prVar8 = *(rtx *)(psVar2 + 4), prVar8->field_0x2 == '@')) {
      if (*(ushort *)prVar8 == 0x7e) {
        prVar8 = *(rtx *)&prVar8->u;
        iVar11 = nonimmediate_operand(prVar8,0x3c);
        if ((((iVar11 != 0) &&
             (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf)) &&
            (((**(int **)(psVar2 + 4) == 4 &&
              ((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)))) &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator)))) &&
           ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
            ((ix86_isa_flags & 0x80000) != 0)))) {
          return 0x64d;
        }
      }
      else {
        iVar11 = register_operand(prVar8,0x40);
        if ((((iVar11 != 0) &&
             (psVar2 = *(short **)(psVar2 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar2 == 0xf)) &&
            (**(int **)(psVar2 + 4) == 4)) &&
           (((*(long *)(*(long *)(psVar2 + 4) + 8) == _q_regs_operand &&
             (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _bt_comparison_operator)) &&
            ((*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_fp_comparison_operator &&
             ((*(long *)(*(long *)(psVar2 + 4) + 0x20) == _swap_condition &&
              ((ix86_isa_flags & 0x80000) != 0)))))))) {
          return 0x64c;
        }
      }
    }
    break;
  case 0x6f:
    prVar8 = *(rtx *)&x1->u;
    iVar11 = nonimmediate_operand(prVar8,0x41);
    if ((iVar11 != 0) && (_GLOBAL_OFFSET_TABLE_ = prVar8, (ix86_isa_flags & 0x400000) != 0)) {
      return 0x612;
    }
    break;
  case 0x7d:
    psVar2 = *(short **)&x1->u;
    if (((*(char *)(psVar2 + 1) == '=') && (*psVar2 == 0x7d)) &&
       (psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == '\x10')) {
      if (*psVar10 == 0x31) {
        psVar9 = *(short **)(psVar10 + 4);
        if ((*(char *)(psVar9 + 1) == '\x10') && (*psVar9 == 0x7c)) {
          prVar8 = *(rtx *)(psVar9 + 4);
          iVar11 = register_operand(prVar8,0x41);
          if (((((iVar11 != 0) &&
                ((psVar9 = *(short **)(psVar9 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar9 == 0xf
                 && (**(int **)(psVar9 + 4) == 1)))) &&
               (*(long *)(*(long *)(psVar9 + 4) + 8) == _q_regs_operand)) &&
              ((((((psVar10 = *(short **)(psVar10 + 8), *(char *)(psVar10 + 1) == '\x10' &&
                   (*psVar10 == 0x7c)) &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),prVar8), iVar11 != 0)) &&
                 (((psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf &&
                   (**(int **)(psVar10 + 4) == 1)) &&
                  ((*(long *)(*(long *)(psVar10 + 4) + 8) == _bt_comparison_operator &&
                   ((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10' &&
                    (*psVar2 == 0x31)))))))) &&
                ((psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == '\x10' &&
                 ((((*psVar10 == 0x7c &&
                    (iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),_GLOBAL_OFFSET_TABLE_),
                    iVar11 != 0)) && (psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf)) &&
                  ((**(int **)(psVar10 + 4) == 1 &&
                   (*(long *)(*(long *)(psVar10 + 4) + 8) == _ix86_fp_comparison_operator)))))))) &&
               (((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10' &&
                 ((*psVar2 == 0x7c &&
                  (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar11 != 0)))) && (psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf)))))) &&
             ((((**(int **)(psVar2 + 4) == 1 &&
                (*(long *)(*(long *)(psVar2 + 4) + 8) == _swap_condition)) &&
               (psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == '=')) &&
              (((*psVar2 == 0x7d &&
                (psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == '\x10')) &&
               ((*psVar10 == 0x31 &&
                ((psVar9 = *(short **)(psVar10 + 4), *(char *)(psVar9 + 1) == '\x10' &&
                 (*psVar9 == 0x7c)))))))))) {
            psVar3 = *(short **)(psVar9 + 4);
            iVar11 = nonimmediate_operand(psVar3,0x41);
            if ((((iVar11 != 0) &&
                 (((((psVar9 = *(short **)(psVar9 + 8), _register_operand = psVar3, *psVar9 == 0xf
                     && (**(int **)(psVar9 + 4) == 1)) &&
                    (*(long *)(*(long *)(psVar9 + 4) + 8) == _q_regs_operand)) &&
                   (((psVar10 = *(short **)(psVar10 + 8), *(char *)(psVar10 + 1) == '\x10' &&
                     (*psVar10 == 0x7c)) &&
                    ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),psVar3), iVar11 != 0 &&
                     ((psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf &&
                      (**(int **)(psVar10 + 4) == 1)))))))) &&
                  (*(long *)(*(long *)(psVar10 + 4) + 8) == _bt_comparison_operator)))) &&
                ((((((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10' &&
                     (*psVar2 == 0x31)) &&
                    (psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == '\x10')) &&
                   ((*psVar10 == 0x7c &&
                    (iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),_register_operand),
                    iVar11 != 0)))) &&
                  ((psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf &&
                   ((**(int **)(psVar10 + 4) == 1 &&
                    (*(long *)(*(long *)(psVar10 + 4) + 8) == _ix86_fp_comparison_operator)))))) &&
                 ((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10' &&
                  (((*psVar2 == 0x7c &&
                    (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand),
                    iVar11 != 0)) && (psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf)))))))) &&
               (((**(int **)(psVar2 + 4) == 1 && (**(short **)(*(long *)(psVar2 + 4) + 8) == 0x1e))
                && (*(long *)(*(short **)(*(long *)(psVar2 + 4) + 8) + 4) == 3)))) {
              if ((ix86_isa_flags & 0x20) != 0) {
                return 0x5ec;
              }
              if ((ix86_isa_flags & 0x400000) != 0) {
                return 0x5ed;
              }
            }
          }
        }
      }
      else if (((*psVar10 == 0x32) &&
               (psVar9 = *(short **)(psVar10 + 4), *(char *)(psVar9 + 1) == '\x10')) &&
              (*psVar9 == 0x7c)) {
        prVar8 = *(rtx *)(psVar9 + 4);
        iVar11 = register_operand(prVar8,0x41);
        if ((((((iVar11 != 0) &&
               (psVar9 = *(short **)(psVar9 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar9 == 0xf))
              && (**(int **)(psVar9 + 4) == 1)) &&
             ((*(long *)(*(long *)(psVar9 + 4) + 8) == _q_regs_operand &&
              (psVar10 = *(short **)(psVar10 + 8), *(char *)(psVar10 + 1) == '\x10')))) &&
            (((((*psVar10 == 0x7c &&
                ((iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),prVar8), iVar11 != 0 &&
                 (psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf)))) &&
               (**(int **)(psVar10 + 4) == 1)) &&
              (((((*(long *)(*(long *)(psVar10 + 4) + 8) == _bt_comparison_operator &&
                  (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10')) &&
                 (*psVar2 == 0x32)) &&
                ((psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == '\x10' &&
                 (*psVar10 == 0x7c)))) &&
               (iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),_GLOBAL_OFFSET_TABLE_),
               iVar11 != 0)))) &&
             ((((psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf &&
                (**(int **)(psVar10 + 4) == 1)) &&
               ((*(long *)(*(long *)(psVar10 + 4) + 8) == _ix86_fp_comparison_operator &&
                (((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10' &&
                  (*psVar2 == 0x7c)) &&
                 (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_GLOBAL_OFFSET_TABLE_),
                 iVar11 != 0)))))) &&
              ((((psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf && (**(int **)(psVar2 + 4) == 1))
                && (*(long *)(*(long *)(psVar2 + 4) + 8) == _swap_condition)) &&
               ((psVar2 = *(short **)&(x1->u).field_0x8, *(char *)(psVar2 + 1) == '=' &&
                (*psVar2 == 0x7d)))))))))) &&
           ((psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == '\x10' &&
            (((*psVar10 == 0x32 &&
              (psVar9 = *(short **)(psVar10 + 4), *(char *)(psVar9 + 1) == '\x10')) &&
             (*psVar9 == 0x7c)))))) {
          psVar3 = *(short **)(psVar9 + 4);
          iVar11 = nonimmediate_operand(psVar3,0x41);
          if ((((iVar11 != 0) &&
               (psVar9 = *(short **)(psVar9 + 8), _register_operand = psVar3, *psVar9 == 0xf)) &&
              ((**(int **)(psVar9 + 4) == 1 &&
               (((*(long *)(*(long *)(psVar9 + 4) + 8) == _q_regs_operand &&
                 (psVar10 = *(short **)(psVar10 + 8), *(char *)(psVar10 + 1) == '\x10')) &&
                ((*psVar10 == 0x7c &&
                 ((((iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),psVar3), iVar11 != 0 &&
                    (psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf)) &&
                   (**(int **)(psVar10 + 4) == 1)) &&
                  ((*(long *)(*(long *)(psVar10 + 4) + 8) == _bt_comparison_operator &&
                   (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10')))))))))))) &&
             (((*psVar2 == 0x32 &&
               (((psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == '\x10' &&
                 (*psVar10 == 0x7c)) &&
                ((((iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),_register_operand),
                   iVar11 != 0 &&
                   (((psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf &&
                     (**(int **)(psVar10 + 4) == 1)) &&
                    (*(long *)(*(long *)(psVar10 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
                  (((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == '\x10' &&
                    (*psVar2 == 0x7c)) &&
                   (iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand), iVar11 != 0
                   )))) && ((psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf &&
                            (**(int **)(psVar2 + 4) == 1)))))))) &&
              ((**(short **)(*(long *)(psVar2 + 4) + 8) == 0x1e &&
               (*(long *)(*(short **)(*(long *)(psVar2 + 4) + 8) + 4) == 3)))))) {
            if ((ix86_isa_flags & 0x20) != 0) {
              return 0x5f5;
            }
            if ((ix86_isa_flags & 0x400000) != 0) {
              return 0x5f6;
            }
          }
        }
      }
    }
    break;
  case 0x7f:
    psVar2 = *(short **)&x1->u;
    if (*(char *)(psVar2 + 1) == 'A') {
      if (*psVar2 == 0x31) {
        psVar10 = *(short **)(psVar2 + 4);
        if ((((*(char *)(psVar10 + 1) == 'A') && (*psVar10 == 0x34)) &&
            ((psVar9 = *(short **)(psVar10 + 4), *(char *)(psVar9 + 1) == 'A' &&
             ((*psVar9 == 0x62 && (psVar9 = *(short **)(psVar9 + 4), *(char *)(psVar9 + 1) == '<')))
             ))) && (*psVar9 == 0x7c)) {
          prVar8 = *(rtx *)(psVar9 + 4);
          iVar11 = nonimmediate_operand(prVar8,0x40);
          if ((((((iVar11 != 0) &&
                 (psVar9 = *(short **)(psVar9 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8, *psVar9 == 0xf))
                && (**(int **)(psVar9 + 4) == 4)) &&
               ((*(long *)(*(long *)(psVar9 + 4) + 8) == _q_regs_operand &&
                (*(long *)(*(long *)(psVar9 + 4) + 0x10) == _ix86_fp_comparison_operator)))) &&
              ((*(long *)(*(long *)(psVar9 + 4) + 0x18) == _ix86_fp_compare_mode &&
               ((*(long *)(*(long *)(psVar9 + 4) + 0x20) == _index_register_operand &&
                (psVar10 = *(short **)(psVar10 + 8), *(char *)(psVar10 + 1) == 'A')))))) &&
             ((*psVar10 == 0x62 &&
              ((psVar10 = *(short **)(psVar10 + 4), *(char *)(psVar10 + 1) == '<' &&
               (*psVar10 == 0x7c)))))) {
            psVar9 = *(short **)(psVar10 + 4);
            iVar11 = nonimmediate_operand(psVar9,0x40);
            if ((((((iVar11 != 0) &&
                   (((psVar10 = *(short **)(psVar10 + 8), _register_operand = psVar9,
                     *psVar10 == 0xf && (**(int **)(psVar10 + 4) == 4)) &&
                    (*(long *)(*(long *)(psVar10 + 4) + 8) == _q_regs_operand)))) &&
                  (((*(long *)(*(long *)(psVar10 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                    (*(long *)(*(long *)(psVar10 + 4) + 0x18) == _ix86_fp_compare_mode)) &&
                   (*(long *)(*(long *)(psVar10 + 4) + 0x20) == _index_register_operand)))) &&
                 (((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == 'A' &&
                   (*psVar2 == 0x34)) &&
                  ((psVar10 = *(short **)(psVar2 + 4), *(char *)(psVar10 + 1) == 'A' &&
                   (((*psVar10 == 0x62 &&
                     (psVar10 = *(short **)(psVar10 + 4), *(char *)(psVar10 + 1) == '<')) &&
                    (*psVar10 == 0x7c)))))))) &&
                (((iVar11 = rtx_equal_p(*(undefined8 *)(psVar10 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar11 != 0 && (psVar10 = *(short **)(psVar10 + 8), *psVar10 == 0xf)) &&
                 ((**(int **)(psVar10 + 4) == 4 &&
                  (((*(long *)(*(long *)(psVar10 + 4) + 8) == _bt_comparison_operator &&
                    (*(long *)(*(long *)(psVar10 + 4) + 0x10) == _swap_condition)) &&
                   ((*(long *)(*(long *)(psVar10 + 4) + 0x18) == _ix86_cc_mode &&
                    ((((*(long *)(*(long *)(psVar10 + 4) + 0x20) == _const248_operand &&
                       (psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == 'A')) &&
                      (*psVar2 == 0x62)) &&
                     ((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '<' &&
                      (*psVar2 == 0x7c)))))))))))))) &&
               (((iVar11 = rtx_equal_p(*(undefined8 *)(psVar2 + 4),_register_operand), iVar11 != 0
                 && ((psVar2 = *(short **)(psVar2 + 8), *psVar2 == 0xf &&
                     (**(int **)(psVar2 + 4) == 4)))) &&
                ((*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator &&
                 (((*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition &&
                   (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode)) &&
                  (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)))))))) {
              psVar2 = *(short **)&(x1->u).field_0x8;
              iVar11 = nonimmediate_operand(psVar2,0x41);
              if ((iVar11 != 0) &&
                 (_nonimmediate_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
                return 0x674;
              }
            }
          }
        }
      }
      else if ((*psVar2 == 0x34) && (prVar8 = *(rtx *)(psVar2 + 4), prVar8->field_0x2 == 'A')) {
        if (*(ushort *)prVar8 == 0x62) {
          psVar10 = *(short **)&prVar8->u;
          if ((*(char *)(psVar10 + 1) == '<') && (*psVar10 == 0x7c)) {
            prVar8 = *(rtx *)(psVar10 + 4);
            iVar11 = nonimmediate_operand(prVar8,0x40);
            if (((((iVar11 != 0) &&
                  (((psVar10 = *(short **)(psVar10 + 8), _GLOBAL_OFFSET_TABLE_ = prVar8,
                    *psVar10 == 0xf && (**(int **)(psVar10 + 4) == 4)) &&
                   (*(long *)(*(long *)(psVar10 + 4) + 8) == _bt_comparison_operator)))) &&
                 (((*(long *)(*(long *)(psVar10 + 4) + 0x10) == _swap_condition &&
                   (*(long *)(*(long *)(psVar10 + 4) + 0x18) == _ix86_cc_mode)) &&
                  (*(long *)(*(long *)(psVar10 + 4) + 0x20) == _const248_operand)))) &&
                ((psVar2 = *(short **)(psVar2 + 8), *(char *)(psVar2 + 1) == 'A' &&
                 (*psVar2 == 0x62)))) &&
               ((psVar2 = *(short **)(psVar2 + 4), *(char *)(psVar2 + 1) == '<' && (*psVar2 == 0x7c)
                ))) {
              psVar10 = *(short **)(psVar2 + 4);
              iVar11 = nonimmediate_operand(psVar10,0x40);
              if ((((((iVar11 != 0) &&
                     (psVar2 = *(short **)(psVar2 + 8), _register_operand = psVar10, *psVar2 == 0xf)
                     ) && (**(int **)(psVar2 + 4) == 4)) &&
                   ((*(long *)(*(long *)(psVar2 + 4) + 8) == _bt_comparison_operator &&
                    (*(long *)(*(long *)(psVar2 + 4) + 0x10) == _swap_condition)))) &&
                  (*(long *)(*(long *)(psVar2 + 4) + 0x18) == _ix86_cc_mode)) &&
                 (*(long *)(*(long *)(psVar2 + 4) + 0x20) == _const248_operand)) {
                psVar2 = *(short **)&(x1->u).field_0x8;
                iVar11 = nonimmediate_operand(psVar2,0x41);
                if ((iVar11 != 0) &&
                   (_nonimmediate_operand = psVar2, (ix86_isa_flags & 0x800000) != 0)) {
                  return 0x672;
                }
              }
            }
          }
        }
        else {
          iVar11 = nonimmediate_operand(prVar8,0x41);
          if (iVar11 != 0) {
            psVar2 = *(short **)(psVar2 + 8);
            _GLOBAL_OFFSET_TABLE_ = prVar8;
            iVar11 = nonimmediate_operand(psVar2,0x41);
            if (iVar11 != 0) {
              psVar10 = *(short **)&(x1->u).field_0x8;
              _register_operand = psVar2;
              iVar11 = nonimmediate_operand(psVar10,0x41);
              if ((iVar11 != 0) &&
                 (_nonimmediate_operand = psVar10, (ix86_isa_flags & 0x800000) != 0)) {
                return 0x66b;
              }
            }
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_27(rtx x0,rtx insn,int *pnum_clobbers)

{
  long lVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  rtx x7;
  
  lVar1 = *(long *)&(x0->u).field_0x8;
  lVar2 = *(long *)(lVar1 + 8);
  lVar3 = *(long *)(lVar2 + 8);
  psVar4 = *(short **)(lVar3 + 8);
  if (*psVar4 == 0x62) {
    psVar4 = *(short **)(psVar4 + 4);
    if ((*(char *)(psVar4 + 1) == '7') && (*psVar4 == 0x7c)) {
      uVar5 = *(undefined8 *)(psVar4 + 4);
      iVar8 = nonimmediate_operand(uVar5,0x3f);
      if ((((((iVar8 != 0) &&
             ((((psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = uVar5, *psVar4 == 0xf &&
                (**(int **)(psVar4 + 4) == 2)) &&
               (*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand)) &&
              ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_compare_mode &&
               (psVar4 = *(short **)(lVar3 + 0x10), *(char *)(psVar4 + 1) == 'B')))))) &&
            (*psVar4 == 0x62)) &&
           (((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '7' && (*psVar4 == 0x7c))
            && ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar5), iVar8 != 0 &&
                (((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf && (**(int **)(psVar4 + 4) == 2)
                  ) && (*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator)))))))) &&
          ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_cc_mode &&
           (psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'B')))) &&
         ((((((*psVar4 == 0x31 &&
              (((psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B' && (*psVar6 == 0x62)
                ) && ((psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '7' &&
                      (((*psVar6 == 0x7c &&
                        (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                        iVar8 != 0)) && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)))))))) &&
             (((**(int **)(psVar6 + 4) == 2 &&
               (*(long *)(*(long *)(psVar6 + 4) + 8) == _ix86_fp_comparison_operator)) &&
              (*(long *)(*(long *)(psVar6 + 4) + 0x10) == _index_register_operand)))) &&
            (((((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B' && (*psVar4 == 0x62)
                ) && ((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '7' &&
                      (((((*psVar4 == 0x7c &&
                          (iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                          iVar8 != 0)) && (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)) &&
                        ((**(int **)(psVar4 + 4) == 2 &&
                         (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)))) &&
                       (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _const248_operand)))))) &&
              ((psVar4 = *(short **)(lVar1 + 0x10), *(char *)(psVar4 + 1) == 'B' &&
               (*psVar4 == 0x31)))) &&
             (psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B')))) &&
           ((((((*psVar6 == 0x31 && (psVar7 = *(short **)(psVar6 + 4), *(char *)(psVar7 + 1) == 'B')
                ) && (*psVar7 == 0x62)) &&
              (((psVar7 = *(short **)(psVar7 + 4), *(char *)(psVar7 + 1) == '7' && (*psVar7 == 0x7c)
                ) && ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar8 != 0 &&
                      ((psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf &&
                       (**(int **)(psVar7 + 4) == 2)))))))) &&
             ((*(long *)(*(long *)(psVar7 + 4) + 8) == _flags_reg_operand &&
              (((*(long *)(*(long *)(psVar7 + 4) + 0x10) == _const_0_to_255_mul_8_operand &&
                (psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == 'B')) &&
               (*psVar6 == 0x62)))))) &&
            ((((psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '7' && (*psVar6 == 0x7c))
              && ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar8 != 0 &&
                  ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                   (**(int **)(psVar6 + 4) == 2)))))) &&
             ((*(long *)(*(long *)(psVar6 + 4) + 8) == _constant_call_address_operand &&
              ((((((*(long *)(*(long *)(psVar6 + 4) + 0x10) == _ix86_vec_interleave_v2df_operator_ok
                   && (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B')) &&
                  (*psVar4 == 0x31)) &&
                 ((psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B' &&
                  (*psVar6 == 0x62)))) &&
                ((psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '7' &&
                 ((*psVar6 == 0x7c &&
                  (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar8 != 0)))))) &&
               ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                (((((**(int **)(psVar6 + 4) == 2 &&
                    (*(long *)(*(long *)(psVar6 + 4) + 8) == _sibcall_insn_operand)) &&
                   (*(long *)(*(long *)(psVar6 + 4) + 0x10) == _reg_not_xmm0_operand)) &&
                  (((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B' &&
                    (*psVar4 == 0x62)) &&
                   ((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '7' &&
                    ((*psVar4 == 0x7c &&
                     (iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                     iVar8 != 0)))))))) && (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf))))))))
             )))))) &&
          ((((**(int **)(psVar4 + 4) == 2 &&
             (*(long *)(*(long *)(psVar4 + 4) + 8) == _nonimmediate_or_sse_const_operand)) &&
            (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _nonimm_not_xmm0_operand)) &&
           ((ix86_isa_flags & 0x800000) != 0)))))) {
        return 0x684;
      }
    }
  }
  else if (((*psVar4 == 99) && (psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '7')) &&
          (*psVar4 == 0x7c)) {
    uVar5 = *(undefined8 *)(psVar4 + 4);
    iVar8 = nonimmediate_operand(uVar5,0x3f);
    if ((((iVar8 != 0) &&
         (psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = uVar5, *psVar4 == 0xf)) &&
        ((**(int **)(psVar4 + 4) == 2 &&
         ((((*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand &&
            (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_compare_mode)) &&
           (psVar4 = *(short **)(lVar3 + 0x10), *(char *)(psVar4 + 1) == 'B')) &&
          ((*psVar4 == 0x62 && (psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '7'))))))
        )) && (((((*psVar4 == 0x7c &&
                  ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar5), iVar8 != 0 &&
                   (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)))) &&
                 (((**(int **)(psVar4 + 4) == 2 &&
                   (((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                     (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_cc_mode)) &&
                    (psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'B')))) &&
                  (((*psVar4 == 0x31 &&
                    (psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B')) &&
                   (*psVar6 == 99)))))) &&
                (((((psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '7' &&
                    (*psVar6 == 0x7c)) &&
                   (((iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                     iVar8 != 0 &&
                     (((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                       (**(int **)(psVar6 + 4) == 2)) &&
                      (*(long *)(*(long *)(psVar6 + 4) + 8) == _ix86_fp_comparison_operator)))) &&
                    ((*(long *)(*(long *)(psVar6 + 4) + 0x10) == _index_register_operand &&
                     (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B')))))) &&
                  (*psVar4 == 99)) &&
                 ((((((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '7' &&
                      (*psVar4 == 0x7c)) &&
                     ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar8 != 0 &&
                      ((((((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                           (**(int **)(psVar4 + 4) == 2)) &&
                          (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)) &&
                         ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _const248_operand &&
                          (psVar4 = *(short **)(lVar1 + 0x10), *(char *)(psVar4 + 1) == 'B')))) &&
                        (*psVar4 == 0x31)) &&
                       ((psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B' &&
                        (*psVar6 == 0x31)))))))) &&
                    (psVar7 = *(short **)(psVar6 + 4), *(char *)(psVar7 + 1) == 'B')) &&
                   ((((*psVar7 == 99 &&
                      (psVar7 = *(short **)(psVar7 + 4), *(char *)(psVar7 + 1) == '7')) &&
                     (*psVar7 == 0x7c)) &&
                    ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar7 + 4),_GLOBAL_OFFSET_TABLE_),
                     iVar8 != 0 && (psVar7 = *(short **)(psVar7 + 8), *psVar7 == 0xf)))))) &&
                  (((**(int **)(psVar7 + 4) == 2 &&
                    ((*(long *)(*(long *)(psVar7 + 4) + 8) == _flags_reg_operand &&
                     (*(long *)(*(long *)(psVar7 + 4) + 0x10) == _const_0_to_255_mul_8_operand))))
                   && ((psVar6 = *(short **)(psVar6 + 8), *(char *)(psVar6 + 1) == 'B' &&
                       (((*psVar6 == 0x62 &&
                         (psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '7')) &&
                        (*psVar6 == 0x7c)))))))))))) &&
               ((((((((iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar8 != 0 && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)) &&
                     ((**(int **)(psVar6 + 4) == 2 &&
                      ((*(long *)(*(long *)(psVar6 + 4) + 8) == _constant_call_address_operand &&
                       (*(long *)(*(long *)(psVar6 + 4) + 0x10) ==
                        _ix86_vec_interleave_v2df_operator_ok)))))) &&
                    (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B')) &&
                   ((((*psVar4 == 0x31 &&
                      (psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B')) &&
                     (*psVar6 == 99)) &&
                    ((psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '7' &&
                     (*psVar6 == 0x7c)))))) &&
                  (((iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                    iVar8 != 0 &&
                    ((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                     (**(int **)(psVar6 + 4) == 2)))) &&
                   ((*(long *)(*(long *)(psVar6 + 4) + 8) == _sibcall_insn_operand &&
                    (((*(long *)(*(long *)(psVar6 + 4) + 0x10) == _reg_not_xmm0_operand &&
                      (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B')) &&
                     (*psVar4 == 99)))))))) &&
                 (((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '7' &&
                   (*psVar4 == 0x7c)) &&
                  (((iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                    iVar8 != 0 &&
                    ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                     (**(int **)(psVar4 + 4) == 2)))) &&
                   (*(long *)(*(long *)(psVar4 + 4) + 8) == _nonimmediate_or_sse_const_operand))))))
                && ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _nonimm_not_xmm0_operand &&
                    ((ix86_isa_flags & 0x800000) != 0)))))))) {
      return 0x68a;
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_28(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  short *psVar4;
  undefined8 uVar5;
  short *psVar6;
  ushort *puVar7;
  int iVar8;
  rtx *operands;
  rtx x1;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  
  lVar2 = *(long *)&(x0->u).field_0x8;
  puVar3 = *(ushort **)(lVar2 + 8);
  uVar1 = *puVar3;
  if (uVar1 == 99) {
    psVar4 = *(short **)(puVar3 + 4);
    if ((*(char *)(psVar4 + 1) == '=') && (*psVar4 == 0x7c)) {
      uVar5 = *(undefined8 *)(psVar4 + 4);
      iVar8 = nonimmediate_operand(uVar5,0x41);
      if (((iVar8 != 0) &&
          (((((psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = uVar5, *psVar4 == 0xf &&
              (**(int **)(psVar4 + 4) == 2)) &&
             (*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand)) &&
            ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_comparison_operator &&
             (psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'B')))) &&
           (*psVar4 == 99)))) &&
         (((((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '=' && (*psVar4 == 0x7c))
            && (iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar5), iVar8 != 0)) &&
           (((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf && (**(int **)(psVar4 + 4) == 2)) &&
            (*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator)))) &&
          ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _swap_condition &&
           ((ix86_isa_flags & 0x800000) != 0)))))) {
        return 0x68d;
      }
    }
  }
  else if (uVar1 < 100) {
    if (uVar1 == 0x62) {
      psVar4 = *(short **)(puVar3 + 4);
      if ((*(char *)(psVar4 + 1) == '=') && (*psVar4 == 0x7c)) {
        uVar5 = *(undefined8 *)(psVar4 + 4);
        iVar8 = nonimmediate_operand(uVar5,0x41);
        if ((((iVar8 != 0) &&
             (((psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = uVar5, *psVar4 == 0xf &&
               (**(int **)(psVar4 + 4) == 2)) &&
              (*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand)))) &&
            (((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_comparison_operator &&
              (psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'B')) &&
             (*psVar4 == 0x62)))) &&
           (((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '=' && (*psVar4 == 0x7c))
            && ((iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar5), iVar8 != 0 &&
                ((((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                   (**(int **)(psVar4 + 4) == 2)) &&
                  (*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator)) &&
                 ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _swap_condition &&
                  ((ix86_isa_flags & 0x800000) != 0)))))))))) {
          return 0x687;
        }
      }
    }
    else if (uVar1 < 99) {
      if (uVar1 == 0x31) {
        puVar7 = *(ushort **)(puVar3 + 4);
        if (*(char *)(puVar7 + 1) == 'B') {
          uVar1 = *puVar7;
          if (uVar1 == 99) {
            psVar4 = *(short **)(puVar7 + 4);
            if ((*(char *)(psVar4 + 1) == '9') && (*psVar4 == 0x7c)) {
              uVar5 = *(undefined8 *)(psVar4 + 4);
              iVar8 = nonimmediate_operand(uVar5,0x40);
              if ((((((iVar8 != 0) &&
                     (((psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = uVar5,
                       *psVar4 == 0xf && (**(int **)(psVar4 + 4) == 2)) &&
                      (*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand)))) &&
                    (((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_compare_mode &&
                      (psVar4 = *(short **)(puVar3 + 8), *(char *)(psVar4 + 1) == 'B')) &&
                     (*psVar4 == 99)))) &&
                   ((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '9' &&
                    (*psVar4 == 0x7c)))) &&
                  (((iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar5), iVar8 != 0 &&
                    (((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                      (**(int **)(psVar4 + 4) == 2)) &&
                     (*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator)))) &&
                   (((((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_cc_mode &&
                       (psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'B')) &&
                      ((*psVar4 == 0x31 &&
                       (((psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B' &&
                         (*psVar6 == 99)) &&
                        ((psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '9' &&
                         ((((*psVar6 == 0x7c &&
                            (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                            iVar8 != 0)) && (psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf)) &&
                          ((**(int **)(psVar6 + 4) == 2 &&
                           (*(long *)(*(long *)(psVar6 + 4) + 8) == _ix86_fp_comparison_operator))))
                         )))))))) &&
                     (*(long *)(*(long *)(psVar6 + 4) + 0x10) == _index_register_operand)) &&
                    (((psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B' &&
                      (*psVar4 == 99)) &&
                     (((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '9' &&
                       (((*psVar4 == 0x7c &&
                         (iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                         iVar8 != 0)) && (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)))) &&
                      (((**(int **)(psVar4 + 4) == 2 &&
                        (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)) &&
                       (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _const248_operand)))))))))))) &&
                 ((ix86_isa_flags & 0x800000) != 0)) {
                return 0x68c;
              }
            }
          }
          else if (uVar1 < 100) {
            if (uVar1 == 0x31) {
              if (*(char *)(*(long *)(puVar7 + 4) + 2) == 'B') {
                iVar8 = recog_27(x0,insn,pnum_clobbers);
                return iVar8;
              }
            }
            else if (((uVar1 == 0x62) &&
                     (psVar4 = *(short **)(puVar7 + 4), *(char *)(psVar4 + 1) == '9')) &&
                    (*psVar4 == 0x7c)) {
              uVar5 = *(undefined8 *)(psVar4 + 4);
              iVar8 = nonimmediate_operand(uVar5,0x40);
              if (((((((iVar8 != 0) &&
                      (psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = uVar5,
                      *psVar4 == 0xf)) && (**(int **)(psVar4 + 4) == 2)) &&
                    ((*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand &&
                     (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_compare_mode)))) &&
                   ((psVar4 = *(short **)(puVar3 + 8), *(char *)(psVar4 + 1) == 'B' &&
                    ((*psVar4 == 0x62 &&
                     (psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '9')))))) &&
                  (((*psVar4 == 0x7c &&
                    (((((((iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),uVar5), iVar8 != 0 &&
                          (psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf)) &&
                         (**(int **)(psVar4 + 4) == 2)) &&
                        ((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                         (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_cc_mode)))) &&
                       (psVar4 = *(short **)(lVar2 + 0x10), *(char *)(psVar4 + 1) == 'B')) &&
                      ((*psVar4 == 0x31 &&
                       (psVar6 = *(short **)(psVar4 + 4), *(char *)(psVar6 + 1) == 'B')))) &&
                     ((*psVar6 == 0x62 &&
                      (((psVar6 = *(short **)(psVar6 + 4), *(char *)(psVar6 + 1) == '9' &&
                        (*psVar6 == 0x7c)) &&
                       (iVar8 = rtx_equal_p(*(undefined8 *)(psVar6 + 4),_GLOBAL_OFFSET_TABLE_),
                       iVar8 != 0)))))))) &&
                   ((((psVar6 = *(short **)(psVar6 + 8), *psVar6 == 0xf &&
                      (**(int **)(psVar6 + 4) == 2)) &&
                     (*(long *)(*(long *)(psVar6 + 4) + 8) == _ix86_fp_comparison_operator)) &&
                    ((*(long *)(*(long *)(psVar6 + 4) + 0x10) == _index_register_operand &&
                     (psVar4 = *(short **)(psVar4 + 8), *(char *)(psVar4 + 1) == 'B')))))))) &&
                 (((((*psVar4 == 0x62 &&
                     (((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '9' &&
                       (*psVar4 == 0x7c)) &&
                      (iVar8 = rtx_equal_p(*(undefined8 *)(psVar4 + 4),_GLOBAL_OFFSET_TABLE_),
                      iVar8 != 0)))) &&
                    ((psVar4 = *(short **)(psVar4 + 8), *psVar4 == 0xf &&
                     (**(int **)(psVar4 + 4) == 2)))) &&
                   (*(long *)(*(long *)(psVar4 + 4) + 8) == _swap_condition)) &&
                  ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _const248_operand &&
                   ((ix86_isa_flags & 0x800000) != 0)))))) {
                return 0x686;
              }
            }
          }
        }
      }
      else if ((((uVar1 == 0x34) && (psVar4 = *(short **)(puVar3 + 4), *(char *)(psVar4 + 1) == 'B')
                ) && (*psVar4 == 0x62)) &&
              ((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '=' && (*psVar4 == 0x7c))
              )) {
        uVar5 = *(undefined8 *)(psVar4 + 4);
        iVar8 = nonimmediate_operand(uVar5,0x41);
        if (((iVar8 != 0) &&
            ((psVar4 = *(short **)(psVar4 + 8), _GLOBAL_OFFSET_TABLE_ = uVar5, *psVar4 == 0xf &&
             (**(int **)(psVar4 + 4) == 2)))) &&
           ((psVar6 = *(short **)(*(long *)(psVar4 + 4) + 8), *psVar6 == 0x1e &&
            ((long)(int)*(undefined8 *)(psVar6 + 4) == *(long *)(psVar6 + 4))))) {
          if ((int)*(undefined8 *)(psVar6 + 4) == 0) {
            if ((((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_comparison_operator) &&
                 (psVar4 = *(short **)(puVar3 + 8), *(char *)(psVar4 + 1) == 'B')) &&
                (*psVar4 == 0x62)) &&
               ((psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '=' && (*psVar4 == 0x7c)
                ))) {
              uVar5 = *(undefined8 *)(psVar4 + 4);
              iVar8 = nonimmediate_operand(uVar5,0x41);
              if (((iVar8 != 0) &&
                  ((psVar4 = *(short **)(psVar4 + 8), _register_operand = uVar5, *psVar4 == 0xf &&
                   (**(int **)(psVar4 + 4) == 2)))) &&
                 ((*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand &&
                  (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_fp_comparison_operator)))) {
                uVar5 = *(undefined8 *)(lVar2 + 0x10);
                iVar8 = nonimmediate_operand(uVar5,0x42);
                if ((iVar8 != 0) &&
                   (_nonimmediate_operand = uVar5, (ix86_isa_flags & 0x800000) != 0)) {
                  return 0x670;
                }
              }
            }
          }
          else if (((((int)*(undefined8 *)(psVar6 + 4) == 1) &&
                    (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _swap_condition)) &&
                   (psVar4 = *(short **)(puVar3 + 8), *(char *)(psVar4 + 1) == 'B')) &&
                  (((*psVar4 == 0x62 &&
                    (psVar4 = *(short **)(psVar4 + 4), *(char *)(psVar4 + 1) == '=')) &&
                   (*psVar4 == 0x7c)))) {
            uVar5 = *(undefined8 *)(psVar4 + 4);
            iVar8 = nonimmediate_operand(uVar5,0x41);
            if (((iVar8 != 0) &&
                (psVar4 = *(short **)(psVar4 + 8), _register_operand = uVar5, *psVar4 == 0xf)) &&
               ((**(int **)(psVar4 + 4) == 2 &&
                ((*(long *)(*(long *)(psVar4 + 4) + 8) == _bt_comparison_operator &&
                 (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _swap_condition)))))) {
              uVar5 = *(undefined8 *)(lVar2 + 0x10);
              iVar8 = nonimmediate_operand(uVar5,0x42);
              if ((iVar8 != 0) && (_nonimmediate_operand = uVar5, (ix86_isa_flags & 0x800000) != 0))
              {
                return 0x66e;
              }
            }
          }
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_29(rtx x0,rtx insn,int *pnum_clobbers)

{
  byte bVar1;
  ushort uVar2;
  short *psVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  rtx prVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  rtx x1;
  rtx *operands;
  rtx x2;
  rtx x3;
  rtx x4;
  rtx x5;
  rtx x6;
  
  x1 = *(rtx *)&(x0->u).field_0x8;
  uVar2 = *(ushort *)x1;
  if (uVar2 == 0x12) {
    iVar10 = **(int **)&x1->u;
    if (iVar10 == 4) {
      if (*(int *)&(x1->u).field_0x8 != 0x84) {
        return -1;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar10 = register_operand(uVar5,0x42);
      if (iVar10 == 0) {
        return -1;
      }
      uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
      iVar10 = register_operand(uVar6,0x42);
      if (iVar10 == 0) {
        return -1;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x18);
      _register_operand = (short *)uVar6;
      iVar10 = const_int_operand(uVar5,0);
      if (iVar10 == 0) {
        return -1;
      }
      uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x20);
      _nonimmediate_operand = (short *)uVar5;
      iVar10 = const_int_operand(uVar6,0);
      if (iVar10 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x200000) == 0) {
        _memory_operand = uVar6;
        return -1;
      }
      _memory_operand = uVar6;
      return 0x61c;
    }
    if (4 < iVar10) {
      return -1;
    }
    if (iVar10 != 3) {
      if (3 < iVar10) {
        return -1;
      }
      if (iVar10 != 1) {
        if (iVar10 != 2) {
          return -1;
        }
        switch(*(undefined4 *)&(x1->u).field_0x8) {
        case 0x83:
          goto code_r0x001407fe;
        default:
          return -1;
        case 0x85:
          uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
          iVar10 = register_operand(uVar5,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
          iVar10 = register_operand(uVar6,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          if ((ix86_isa_flags & 0x200000) == 0) {
            _register_operand = (short *)uVar6;
            return -1;
          }
          _register_operand = (short *)uVar6;
          return 0x61d;
        case 0x9f:
          uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
          iVar10 = register_operand(uVar5,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
          iVar10 = nonimmediate_operand(uVar6,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          if (((ix86_isa_flags & 0x10) != 0) && ((ix86_isa_flags & 0x20) != 0)) {
            _register_operand = (short *)uVar6;
            return 0x6c3;
          }
          if ((ix86_isa_flags & 0x10) == 0) {
            _register_operand = (short *)uVar6;
            return -1;
          }
          _register_operand = (short *)uVar6;
          return 0x6c4;
        case 0xa0:
          uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
          iVar10 = register_operand(uVar5,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
          iVar10 = nonimmediate_operand(uVar6,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          if (((ix86_isa_flags & 0x10) != 0) && ((ix86_isa_flags & 0x20) != 0)) {
            _register_operand = (short *)uVar6;
            return 0x6c5;
          }
          if ((ix86_isa_flags & 0x10) == 0) {
            _register_operand = (short *)uVar6;
            return -1;
          }
          _register_operand = (short *)uVar6;
          return 0x6c6;
        case 0xa1:
          uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
          iVar10 = register_operand(uVar5,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
          iVar10 = nonimmediate_operand(uVar6,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          if (((ix86_isa_flags & 0x10) != 0) && ((ix86_isa_flags & 0x20) != 0)) {
            _register_operand = (short *)uVar6;
            return 0x6c7;
          }
          if ((ix86_isa_flags & 0x10) == 0) {
            _register_operand = (short *)uVar6;
            return -1;
          }
          _register_operand = (short *)uVar6;
          return 0x6c8;
        case 0xa2:
          uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
          iVar10 = register_operand(uVar5,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
          iVar10 = nonimmediate_operand(uVar6,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          if (((ix86_isa_flags & 0x10) != 0) && ((ix86_isa_flags & 0x20) != 0)) {
            _register_operand = (short *)uVar6;
            return 0x6c9;
          }
          if ((ix86_isa_flags & 0x10) == 0) {
            _register_operand = (short *)uVar6;
            return -1;
          }
          _register_operand = (short *)uVar6;
          return 0x6ca;
        case 0xa4:
          uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
          iVar10 = nonimmediate_operand(uVar5,0x42);
          if (iVar10 == 0) {
            return -1;
          }
          uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
          iVar10 = const_0_to_255_operand(uVar6,0x10);
          if (iVar10 == 0) {
            return -1;
          }
          if ((ix86_isa_flags & 0x10) == 0) {
            _register_operand = (short *)uVar6;
            return -1;
          }
          _register_operand = (short *)uVar6;
          return 0x6cc;
        }
      }
      iVar10 = *(int *)&(x1->u).field_0x8;
      if (iVar10 == 0xa3) {
        uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
        iVar10 = nonimmediate_operand(uVar5,0x42);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x10) == 0) {
          _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
          return -1;
        }
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
        return 0x6cb;
      }
      if (0xa3 < iVar10) {
        return -1;
      }
      if (iVar10 != 0x89) {
        if (iVar10 != 0x97) {
          return -1;
        }
        lVar4 = *(long *)(*(long *)&x1->u + 8);
        iVar10 = ix86_comparison_uns_operator(lVar4,0x42);
        if (iVar10 == 0) {
          return -1;
        }
        uVar5 = *(undefined8 *)(lVar4 + 8);
        _GLOBAL_OFFSET_TABLE_ = (rtx)lVar4;
        iVar10 = register_operand(uVar5,0x42);
        if (iVar10 == 0) {
          return -1;
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
        _register_operand = (short *)uVar5;
        iVar10 = nonimmediate_operand(uVar6,0x42);
        if (iVar10 == 0) {
          return -1;
        }
        if ((ix86_isa_flags & 0x800000) == 0) {
          _nonimmediate_operand = (short *)uVar6;
          return -1;
        }
        _nonimmediate_operand = (short *)uVar6;
        return 0x6ba;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar10 = memory_operand(uVar5,0x42);
      if (iVar10 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x80000) == 0) {
        _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
        return -1;
      }
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
      return 0x630;
    }
    iVar10 = *(int *)&(x1->u).field_0x8;
    if (iVar10 == 0xa5) {
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar10 = register_operand(uVar5,0x42);
      if (iVar10 == 0) {
        return -1;
      }
      uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
      iVar10 = nonimmediate_operand(uVar6,0x42);
      if (iVar10 == 0) {
        return -1;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x18);
      _register_operand = (short *)uVar6;
      iVar10 = const_0_to_255_operand(uVar5,0x10);
      if (iVar10 == 0) {
        return -1;
      }
      if (((ix86_isa_flags & 0x2000) != 0) && ((ix86_isa_flags & 0x20) != 0)) {
        _nonimmediate_operand = (short *)uVar5;
        return 0x6cd;
      }
      if ((ix86_isa_flags & 0x2000) == 0) {
        _nonimmediate_operand = (short *)uVar5;
        return -1;
      }
      _nonimmediate_operand = (short *)uVar5;
      return 0x6ce;
    }
    if (0xa5 < iVar10) {
      return -1;
    }
    if (iVar10 != 0x82) {
      if (iVar10 != 0x98) {
        return -1;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
      iVar10 = register_operand(uVar5,0x42);
      if (iVar10 == 0) {
        return -1;
      }
      uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
      _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
      iVar10 = nonimmediate_operand(uVar6,0x42);
      if (iVar10 == 0) {
        return -1;
      }
      uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x18);
      _register_operand = (short *)uVar6;
      iVar10 = const_int_operand(uVar5,0x10);
      if (iVar10 == 0) {
        return -1;
      }
      if ((ix86_isa_flags & 0x800000) == 0) {
        _nonimmediate_operand = (short *)uVar5;
        return -1;
      }
      _nonimmediate_operand = (short *)uVar5;
      return 0x6be;
    }
    uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
    iVar10 = register_operand(uVar5,0x42);
    if (iVar10 == 0) {
      return -1;
    }
    uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
    _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
    iVar10 = const_int_operand(uVar6,0);
    if (iVar10 == 0) {
      return -1;
    }
    uVar5 = *(undefined8 *)(*(long *)&x1->u + 0x18);
    _register_operand = (short *)uVar6;
    iVar10 = const_int_operand(uVar5,0);
    if (iVar10 == 0) {
      return -1;
    }
    if ((ix86_isa_flags & 0x200000) == 0) {
      _nonimmediate_operand = (short *)uVar5;
      return -1;
    }
    _nonimmediate_operand = (short *)uVar5;
    return 0x61a;
  }
  if (((uVar2 < 0x12) || (0x7f < uVar2)) || (uVar2 < 0x2f)) goto L23677;
  switch(uVar2) {
  case 0x2f:
    psVar3 = *(short **)&x1->u;
    if (*(char *)(psVar3 + 1) == 'B') {
      if (*psVar3 == 0x52) {
        psVar9 = *(short **)(psVar3 + 4);
        iVar10 = nonimmediate_operand(psVar9,0x42);
        if (((iVar10 != 0) && (_register_operand = psVar9, *(long *)(psVar3 + 8) == _q_regs_operand)
            ) && (psVar3 = *(short **)&(x1->u).field_0x8, *(char *)(psVar3 + 1) == 'B')) {
          if (*psVar3 == 0x41) {
            prVar7 = *(rtx *)(psVar3 + 4);
            iVar10 = nonimmediate_operand(prVar7,0x42);
            if (((iVar10 != 0) &&
                (_GLOBAL_OFFSET_TABLE_ = prVar7,
                iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 8),_register_operand), iVar10 != 0))
               && (psVar3 = *(short **)&(x1->u).field_0x10, *(char *)(psVar3 + 1) == 'B')) {
              if (*psVar3 == 0x43) {
                iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_GLOBAL_OFFSET_TABLE_);
                if ((((iVar10 != 0) &&
                     (psVar3 = *(short **)(psVar3 + 8), *(char *)(psVar3 + 1) == 'B')) &&
                    ((*psVar3 == 0x33 &&
                     ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_register_operand),
                      iVar10 != 0 && ((ix86_isa_flags & 0x800000) != 0)))))) &&
                   ((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b)))) {
                  return 0x6a4;
                }
              }
              else if (((((*psVar3 == 0x44) &&
                         (iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_GLOBAL_OFFSET_TABLE_),
                         iVar10 != 0)) &&
                        (psVar3 = *(short **)(psVar3 + 8), *(char *)(psVar3 + 1) == 'B')) &&
                       ((*psVar3 == 0x33 &&
                        (iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_register_operand),
                        iVar10 != 0)))) &&
                      (((ix86_isa_flags & 0x800000) != 0 &&
                       ((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b))))
                      )) {
                return 0x6a8;
              }
            }
          }
          else if (*psVar3 == 0x42) {
            prVar7 = *(rtx *)(psVar3 + 4);
            iVar10 = nonimmediate_operand(prVar7,0x42);
            if ((((((iVar10 != 0) &&
                   (_GLOBAL_OFFSET_TABLE_ = prVar7,
                   iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 8),_register_operand), iVar10 != 0)
                   ) && (psVar3 = *(short **)&(x1->u).field_0x10, *(char *)(psVar3 + 1) == 'B')) &&
                 ((*psVar3 == 0x45 &&
                  (iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_GLOBAL_OFFSET_TABLE_),
                  iVar10 != 0)))) &&
                (((psVar3 = *(short **)(psVar3 + 8), *(char *)(psVar3 + 1) == 'B' &&
                  ((*psVar3 == 0x33 &&
                   (iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),_register_operand), iVar10 != 0
                   )))) && ((ix86_isa_flags & 0x800000) != 0)))) &&
               ((*(ushort *)_GLOBAL_OFFSET_TABLE_ != 0x2b || (*_register_operand != 0x2b)))) {
              return 0x6a0;
            }
          }
        }
      }
      else {
        iVar10 = nonimmediate_operand(psVar3,0x42);
        if (iVar10 != 0) {
          prVar7 = *(rtx *)&(x1->u).field_0x8;
          _nonimmediate_operand = psVar3;
          iVar10 = vector_move_operand(prVar7,0x42);
          if (iVar10 != 0) {
            psVar3 = *(short **)&(x1->u).field_0x10;
            _GLOBAL_OFFSET_TABLE_ = prVar7;
            iVar10 = vector_move_operand(psVar3,0x42);
            if ((iVar10 != 0) && (_register_operand = psVar3, (ix86_isa_flags & 0x800000) != 0)) {
              return 0x679;
            }
          }
        }
      }
    }
    break;
  case 0x31:
    if (*(char *)(*(long *)&x1->u + 2) == 'B') {
      iVar10 = recog_28(x0,insn,pnum_clobbers);
      return iVar10;
    }
    break;
  case 0x32:
    psVar3 = *(short **)&x1->u;
    if (((*(char *)(psVar3 + 1) == 'B') && (*psVar3 == 0x62)) &&
       ((psVar3 = *(short **)(psVar3 + 4), *(char *)(psVar3 + 1) == '=' && (*psVar3 == 0x7c)))) {
      prVar7 = *(rtx *)(psVar3 + 4);
      iVar10 = nonimmediate_operand(prVar7,0x41);
      if ((((((iVar10 != 0) &&
             (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf)) &&
            (**(int **)(psVar3 + 4) == 2)) &&
           (((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
             (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _ix86_fp_comparison_operator)) &&
            (psVar3 = *(short **)&(x1->u).field_0x8, *(char *)(psVar3 + 1) == 'B')))) &&
          ((*psVar3 == 0x62 && (psVar3 = *(short **)(psVar3 + 4), *(char *)(psVar3 + 1) == '='))))
         && (((*psVar3 == 0x7c &&
              ((iVar10 = rtx_equal_p(*(undefined8 *)(psVar3 + 4),prVar7), iVar10 != 0 &&
               (psVar3 = *(short **)(psVar3 + 8), *psVar3 == 0xf)))) &&
             ((**(int **)(psVar3 + 4) == 2 &&
              (((*(long *)(*(long *)(psVar3 + 4) + 8) == _bt_comparison_operator &&
                (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _swap_condition)) &&
               ((ix86_isa_flags & 0x800000) != 0)))))))) {
        return 0x690;
      }
    }
    break;
  case 0x34:
    psVar3 = *(short **)&x1->u;
    if ((((*(char *)(psVar3 + 1) == 'B') && (*psVar3 == 0x62)) &&
        (psVar3 = *(short **)(psVar3 + 4), *(char *)(psVar3 + 1) == '=')) && (*psVar3 == 0x7c)) {
      prVar7 = *(rtx *)(psVar3 + 4);
      iVar10 = register_operand(prVar7,0x41);
      if (((iVar10 != 0) &&
          (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf)) &&
         ((**(int **)(psVar3 + 4) == 2 &&
          ((psVar9 = *(short **)(*(long *)(psVar3 + 4) + 8), *psVar9 == 0x1e &&
           ((long)(int)*(undefined8 *)(psVar9 + 4) == *(long *)(psVar9 + 4))))))) {
        if ((int)*(undefined8 *)(psVar9 + 4) == 0) {
          if ((((*(long *)(*(long *)(psVar3 + 4) + 0x10) == _ix86_fp_comparison_operator) &&
               (psVar3 = *(short **)&(x1->u).field_0x8, *(char *)(psVar3 + 1) == 'B')) &&
              (*psVar3 == 0x62)) &&
             ((psVar3 = *(short **)(psVar3 + 4), *(char *)(psVar3 + 1) == '=' && (*psVar3 == 0x7c)))
             ) {
            psVar9 = *(short **)(psVar3 + 4);
            iVar10 = nonimmediate_operand(psVar9,0x41);
            if ((((iVar10 != 0) &&
                 ((psVar3 = *(short **)(psVar3 + 8), _register_operand = psVar9, *psVar3 == 0xf &&
                  (**(int **)(psVar3 + 4) == 2)))) &&
                (*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand)) &&
               ((*(long *)(*(long *)(psVar3 + 4) + 0x10) == _ix86_fp_comparison_operator &&
                ((ix86_isa_flags & 0x800000) != 0)))) {
              return 0x671;
            }
          }
        }
        else if ((((((int)*(undefined8 *)(psVar9 + 4) == 1) &&
                   (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _swap_condition)) &&
                  (psVar3 = *(short **)&(x1->u).field_0x8, *(char *)(psVar3 + 1) == 'B')) &&
                 ((*psVar3 == 0x62 &&
                  (psVar3 = *(short **)(psVar3 + 4), *(char *)(psVar3 + 1) == '=')))) &&
                (*psVar3 == 0x7c)) {
          psVar9 = *(short **)(psVar3 + 4);
          iVar10 = nonimmediate_operand(psVar9,0x41);
          if (((iVar10 != 0) &&
              (psVar3 = *(short **)(psVar3 + 8), _register_operand = psVar9, *psVar3 == 0xf)) &&
             ((**(int **)(psVar3 + 4) == 2 &&
              (((*(long *)(*(long *)(psVar3 + 4) + 8) == _bt_comparison_operator &&
                (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _swap_condition)) &&
               ((ix86_isa_flags & 0x800000) != 0)))))) {
            return 0x66f;
          }
        }
      }
    }
    break;
  case 0x42:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x42);
    if (iVar10 != 0) {
      psVar3 = *(short **)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = const_0_to_63_operand(psVar3,0x10);
      if ((iVar10 != 0) && (_register_operand = psVar3, (ix86_isa_flags & 0x800000) != 0)) {
        return 0x698;
      }
    }
    break;
  case 0x45:
    prVar7 = *(rtx *)&x1->u;
    iVar10 = nonimmediate_operand(prVar7,0x42);
    if (iVar10 != 0) {
      psVar3 = *(short **)&(x1->u).field_0x8;
      _GLOBAL_OFFSET_TABLE_ = prVar7;
      iVar10 = const_0_to_63_operand(psVar3,0x10);
      if ((iVar10 != 0) && (_register_operand = psVar3, (ix86_isa_flags & 0x800000) != 0)) {
        return 0x69c;
      }
    }
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
    iVar10 = ix86_comparison_int_operator(x1,0x42);
    if (iVar10 != 0) {
      psVar3 = *(short **)&x1->u;
      _GLOBAL_OFFSET_TABLE_ = x1;
      iVar10 = register_operand(psVar3,0x42);
      if (iVar10 != 0) {
        psVar9 = *(short **)&(x1->u).field_0x8;
        _register_operand = psVar3;
        iVar10 = nonimmediate_operand(psVar9,0x42);
        if (iVar10 != 0) {
          if ((ix86_isa_flags & 0x800000) != 0) {
            _nonimmediate_operand = psVar9;
            return 0x6b2;
          }
          x1 = *(rtx *)&(x0->u).field_0x8;
          _nonimmediate_operand = psVar9;
        }
      }
    }
  default:
L23677:
    iVar10 = ix86_comparison_uns_operator(x1,0x42);
    if (iVar10 != 0) {
      _GLOBAL_OFFSET_TABLE_ = x1;
      psVar3 = *(short **)&x1->u;
      iVar10 = register_operand(psVar3,0x42);
      if (iVar10 != 0) {
        psVar9 = *(short **)&(x1->u).field_0x8;
        _register_operand = psVar3;
        iVar10 = nonimmediate_operand(psVar9,0x42);
        if ((iVar10 != 0) && (_nonimmediate_operand = psVar9, (ix86_isa_flags & 0x800000) != 0)) {
          return 0x6b6;
        }
      }
    }
    break;
  case 0x62:
    psVar3 = *(short **)&x1->u;
    bVar1 = *(byte *)(psVar3 + 1);
    if (bVar1 == 0x3d) {
      if ((*psVar3 == 0x7c) && (prVar7 = *(rtx *)(psVar3 + 4), prVar7->field_0x2 == 'A')) {
        if (*(ushort *)prVar7 == 0x7e) {
          prVar7 = *(rtx *)&prVar7->u;
          iVar10 = nonimmediate_operand(prVar7,0x3d);
          if ((((iVar10 != 0) &&
               (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
              && (**(int **)(psVar3 + 4) == 2)) &&
             (((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)) &&
              ((ix86_isa_flags & 0x80000) != 0)))) {
            return 0x645;
          }
        }
        else {
          iVar10 = register_operand(prVar7,0x41);
          if (((iVar10 != 0) &&
              (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf)) &&
             ((**(int **)(psVar3 + 4) == 2 &&
              (((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)) &&
               ((ix86_isa_flags & 0x80000) != 0)))))) {
            return 0x644;
          }
        }
      }
    }
    else if (bVar1 < 0x3e) {
      if (bVar1 == 0x37) {
        if ((*psVar3 == 0x7c) && (prVar7 = *(rtx *)(psVar3 + 4), prVar7->field_0x2 == '?')) {
          if (*(ushort *)prVar7 == 0x7e) {
            prVar7 = *(rtx *)&prVar7->u;
            iVar10 = nonimmediate_operand(prVar7,0x37);
            if (((iVar10 != 0) &&
                (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
               && ((**(int **)(psVar3 + 4) == 2 &&
                   (((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                     (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)) &&
                    ((ix86_isa_flags & 0x80000) != 0)))))) {
              return 0x63f;
            }
          }
          else {
            iVar10 = register_operand(prVar7,0x3f);
            if ((((iVar10 != 0) &&
                 (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
                && ((**(int **)(psVar3 + 4) == 2 &&
                    ((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                     (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)))))) &&
               ((ix86_isa_flags & 0x80000) != 0)) {
              return 0x63e;
            }
          }
        }
      }
      else if (((bVar1 == 0x39) && (*psVar3 == 0x7c)) &&
              (prVar7 = *(rtx *)(psVar3 + 4), prVar7->field_0x2 == '@')) {
        if (*(ushort *)prVar7 == 0x7e) {
          prVar7 = *(rtx *)&prVar7->u;
          iVar10 = nonimmediate_operand(prVar7,0x40);
          if ((((iVar10 != 0) &&
               (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
              && ((**(int **)(psVar3 + 4) == 2 &&
                  ((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                   (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)))))) &&
             ((ix86_isa_flags & 0x80000) != 0)) {
            return 0x643;
          }
        }
        else {
          iVar10 = register_operand(prVar7,0x40);
          if (((((iVar10 != 0) &&
                (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
               && (**(int **)(psVar3 + 4) == 2)) &&
              ((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)))) &&
             ((ix86_isa_flags & 0x80000) != 0)) {
            return 0x642;
          }
        }
      }
    }
    break;
  case 99:
    psVar3 = *(short **)&x1->u;
    bVar1 = *(byte *)(psVar3 + 1);
    if (bVar1 == 0x3d) {
      if ((*psVar3 == 0x7c) && (prVar7 = *(rtx *)(psVar3 + 4), prVar7->field_0x2 == 'A')) {
        if (*(ushort *)prVar7 == 0x7e) {
          prVar7 = *(rtx *)&prVar7->u;
          iVar10 = nonimmediate_operand(prVar7,0x3d);
          if (((((iVar10 != 0) &&
                (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
               && (**(int **)(psVar3 + 4) == 2)) &&
              ((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)))) &&
             ((ix86_isa_flags & 0x80000) != 0)) {
            return 0x651;
          }
        }
        else {
          iVar10 = register_operand(prVar7,0x41);
          if (((iVar10 != 0) &&
              (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf)) &&
             ((**(int **)(psVar3 + 4) == 2 &&
              (((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)) &&
               ((ix86_isa_flags & 0x80000) != 0)))))) {
            return 0x650;
          }
        }
      }
    }
    else if (bVar1 < 0x3e) {
      if (bVar1 == 0x37) {
        if ((*psVar3 == 0x7c) && (prVar7 = *(rtx *)(psVar3 + 4), prVar7->field_0x2 == '?')) {
          if (*(ushort *)prVar7 == 0x7e) {
            prVar7 = *(rtx *)&prVar7->u;
            iVar10 = nonimmediate_operand(prVar7,0x37);
            if (((iVar10 != 0) &&
                (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
               && ((**(int **)(psVar3 + 4) == 2 &&
                   (((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                     (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)) &&
                    ((ix86_isa_flags & 0x80000) != 0)))))) {
              return 0x64b;
            }
          }
          else {
            iVar10 = register_operand(prVar7,0x3f);
            if (((iVar10 != 0) &&
                (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
               && (((**(int **)(psVar3 + 4) == 2 &&
                    ((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                     (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)))) &&
                   ((ix86_isa_flags & 0x80000) != 0)))) {
              return 0x64a;
            }
          }
        }
      }
      else if (((bVar1 == 0x39) && (*psVar3 == 0x7c)) &&
              (prVar7 = *(rtx *)(psVar3 + 4), prVar7->field_0x2 == '@')) {
        if (*(ushort *)prVar7 == 0x7e) {
          prVar7 = *(rtx *)&prVar7->u;
          iVar10 = nonimmediate_operand(prVar7,0x39);
          if ((((iVar10 != 0) &&
               (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
              && ((**(int **)(psVar3 + 4) == 2 &&
                  ((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
                   (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)))))) &&
             ((ix86_isa_flags & 0x80000) != 0)) {
            return 0x64f;
          }
        }
        else {
          iVar10 = register_operand(prVar7,0x40);
          if (((((iVar10 != 0) &&
                (psVar3 = *(short **)(psVar3 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar3 == 0xf))
               && (**(int **)(psVar3 + 4) == 2)) &&
              ((*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand &&
               (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _bt_comparison_operator)))) &&
             ((ix86_isa_flags & 0x80000) != 0)) {
            return 0x64e;
          }
        }
      }
    }
    break;
  case 0x7f:
    psVar3 = *(short **)&x1->u;
    if ((((*(char *)(psVar3 + 1) == 'B') && (*psVar3 == 0x34)) &&
        ((psVar9 = *(short **)(psVar3 + 4), *(char *)(psVar9 + 1) == 'B' &&
         ((*psVar9 == 0x62 && (psVar9 = *(short **)(psVar9 + 4), *(char *)(psVar9 + 1) == '='))))))
       && (*psVar9 == 0x7c)) {
      prVar7 = *(rtx *)(psVar9 + 4);
      iVar10 = nonimmediate_operand(prVar7,0x41);
      if ((((iVar10 != 0) &&
           (psVar9 = *(short **)(psVar9 + 8), _GLOBAL_OFFSET_TABLE_ = prVar7, *psVar9 == 0xf)) &&
          (**(int **)(psVar9 + 4) == 2)) &&
         ((psVar8 = *(short **)(*(long *)(psVar9 + 4) + 8), *psVar8 == 0x1e &&
          ((long)(int)*(undefined8 *)(psVar8 + 4) == *(long *)(psVar8 + 4))))) {
        if ((int)*(undefined8 *)(psVar8 + 4) == 0) {
          if (((*(long *)(*(long *)(psVar9 + 4) + 0x10) == _ix86_fp_comparison_operator) &&
              (psVar3 = *(short **)(psVar3 + 8), *(char *)(psVar3 + 1) == 'B')) &&
             ((*psVar3 == 0x62 &&
              ((psVar3 = *(short **)(psVar3 + 4), *(char *)(psVar3 + 1) == '=' && (*psVar3 == 0x7c))
              )))) {
            psVar9 = *(short **)(psVar3 + 4);
            iVar10 = nonimmediate_operand(psVar9,0x41);
            if ((iVar10 != 0) &&
               ((((psVar3 = *(short **)(psVar3 + 8), _register_operand = psVar9, *psVar3 == 0xf &&
                  (**(int **)(psVar3 + 4) == 2)) &&
                 (*(long *)(*(long *)(psVar3 + 4) + 8) == _q_regs_operand)) &&
                (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _ix86_fp_comparison_operator)))) {
              psVar3 = *(short **)&(x1->u).field_0x8;
              iVar10 = nonimmediate_operand(psVar3,0x42);
              if ((iVar10 != 0) &&
                 (_nonimmediate_operand = psVar3, (ix86_isa_flags & 0x800000) != 0)) {
                return 0x66d;
              }
            }
          }
        }
        else if ((((int)*(undefined8 *)(psVar8 + 4) == 1) &&
                 (*(long *)(*(long *)(psVar9 + 4) + 0x10) == _swap_condition)) &&
                ((psVar3 = *(short **)(psVar3 + 8), *(char *)(psVar3 + 1) == '=' &&
                 (*psVar3 == 0x7c)))) {
          psVar9 = *(short **)(psVar3 + 4);
          iVar10 = nonimmediate_operand(psVar9,0x41);
          if ((((iVar10 != 0) &&
               (psVar3 = *(short **)(psVar3 + 8), _register_operand = psVar9, *psVar3 == 0xf)) &&
              (**(int **)(psVar3 + 4) == 2)) &&
             ((*(long *)(*(long *)(psVar3 + 4) + 8) == _bt_comparison_operator &&
              (*(long *)(*(long *)(psVar3 + 4) + 0x10) == _swap_condition)))) {
            psVar3 = *(short **)&(x1->u).field_0x8;
            iVar10 = nonimmediate_operand(psVar3,0x42);
            if ((iVar10 != 0) && (_nonimmediate_operand = psVar3, (ix86_isa_flags & 0x800000) != 0))
            {
              return 0x66c;
            }
          }
        }
      }
    }
  }
  return -1;
code_r0x001407fe:
  uVar5 = *(undefined8 *)(*(long *)&x1->u + 8);
  iVar10 = register_operand(uVar5,0x42);
  if (iVar10 == 0) {
    return -1;
  }
  uVar6 = *(undefined8 *)(*(long *)&x1->u + 0x10);
  _GLOBAL_OFFSET_TABLE_ = (rtx)uVar5;
  iVar10 = register_operand(uVar6,0x3f);
  if (iVar10 == 0) {
    return -1;
  }
  if ((ix86_isa_flags & 0x200000) == 0) {
    _register_operand = (short *)uVar6;
    return -1;
  }
  _register_operand = (short *)uVar6;
  return 0x61b;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_30(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  ushort *puVar3;
  short *psVar4;
  undefined8 uVar5;
  long lVar6;
  rtx prVar7;
  int iVar8;
  rtx x1;
  rtx x2;
  rtx *operands;
  rtx x3;
  rtx x4;
  
  prVar2 = *(rtx *)&x0->u;
  iVar8 = register_operand(prVar2,0x51);
  x1 = prVar2;
  if (iVar8 != 0) {
    puVar3 = *(ushort **)&(x0->u).field_0x8;
    recog_data = prVar2;
    if (*(char *)(puVar3 + 1) == 'Q') {
      uVar1 = *puVar3;
      if (uVar1 == 0x7e) {
        prVar2 = *(rtx *)(puVar3 + 4);
        iVar8 = nonimmediate_operand(prVar2,0x26);
        if (iVar8 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          if ((ix86_isa_flags & 0x20) != 0) {
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            return 0x6d2;
          }
          x1 = *(rtx *)&x0->u;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
        }
      }
      else {
        if (uVar1 < 0x7f) {
          if (uVar1 == 0x7d) {
            x2 = *(rtx *)(puVar3 + 4);
            if (x2->field_0x2 == 'O') {
              if (*(short *)x2 == 0x7c) {
                prVar2 = *(rtx *)&x2->u;
                iVar8 = register_operand(prVar2,0x51);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  psVar4 = *(short **)&(x2->u).field_0x8;
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 4)) {
                    if (*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand) {
                      if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _bt_comparison_operator) {
                        if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _ix86_fp_comparison_operator)
                        {
                          if (*(long *)(*(long *)(psVar4 + 4) + 0x20) == _swap_condition) {
                            prVar2 = *(rtx *)(puVar3 + 8);
                            iVar8 = nonimmediate_operand(prVar2,0x4f);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              if ((ix86_isa_flags & 0x20) != 0) {
                                _register_operand = prVar2;
                                return 0x6f3;
                              }
                              x1 = *(rtx *)&x0->u;
                              _register_operand = prVar2;
                            }
                          }
                          else {
                            x1 = *(rtx *)&x0->u;
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                  }
                }
              }
              else {
                iVar8 = nonimmediate_operand(x2,0x4f);
                if (iVar8 != 0) {
                  _GLOBAL_OFFSET_TABLE_ = x2;
                  iVar8 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),x2);
                  if ((iVar8 != 0) && ((ix86_isa_flags & 0x20) != 0)) {
                    return 0x6d9;
                  }
                  x2 = *(rtx *)(puVar3 + 4);
                }
                iVar8 = nonimmediate_operand(x2,0x4f);
                if (iVar8 != 0) {
                  _register_operand = x2;
                  psVar4 = *(short **)(puVar3 + 8);
                  if ((*(char *)(psVar4 + 1) == 'O') && (*psVar4 == 0x7c)) {
                    prVar2 = *(rtx *)(psVar4 + 4);
                    iVar8 = register_operand(prVar2,0x51);
                    if (iVar8 == 0) {
                      x2 = *(rtx *)(puVar3 + 4);
                    }
                    else {
                      psVar4 = *(short **)(psVar4 + 8);
                      _GLOBAL_OFFSET_TABLE_ = prVar2;
                      if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 4)) {
                        if (*(long *)(*(long *)(psVar4 + 4) + 8) == _ix86_fp_compare_mode) {
                          if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _ix86_cc_mode) {
                            if (*(long *)(*(long *)(psVar4 + 4) + 0x18) == _index_register_operand)
                            {
                              if ((*(long *)(*(long *)(psVar4 + 4) + 0x20) == _const248_operand) &&
                                 ((ix86_isa_flags & 0x20) != 0)) {
                                return 0x6f1;
                              }
                              x2 = *(rtx *)(puVar3 + 4);
                            }
                            else {
                              x2 = *(rtx *)(puVar3 + 4);
                            }
                          }
                          else {
                            x2 = *(rtx *)(puVar3 + 4);
                          }
                        }
                        else {
                          x2 = *(rtx *)(puVar3 + 4);
                        }
                      }
                      else {
                        x2 = *(rtx *)(puVar3 + 4);
                      }
                    }
                  }
                  else {
                    x2 = *(rtx *)(puVar3 + 4);
                  }
                }
                iVar8 = register_operand(x2,0x4f);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  _GLOBAL_OFFSET_TABLE_ = x2;
                  prVar2 = *(rtx *)(puVar3 + 8);
                  iVar8 = vector_move_operand(prVar2,0x4f);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    if ((ix86_isa_flags & 0x20) != 0) {
                      _register_operand = prVar2;
                      return 0x70a;
                    }
                    x1 = *(rtx *)&x0->u;
                    _register_operand = prVar2;
                  }
                }
              }
            }
            else {
              x1 = *(rtx *)&x0->u;
            }
            goto L21929;
          }
          if (uVar1 < 0x7e) {
            if (uVar1 == 0x7c) {
              prVar2 = *(rtx *)(puVar3 + 4);
              if (prVar2->field_0x2 == 'Q') {
                iVar8 = nonimmediate_operand(prVar2,0x51);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  x2 = *(rtx *)(puVar3 + 8);
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  if (*(short *)x2 == 0xf) {
                    if ((0 < **(int **)&x2->u) && (iVar8 = avx_vbroadcast_operand(x2,0), iVar8 != 0)
                       ) {
                      lVar6 = *(long *)(*(long *)&x2->u + 8);
                      _register_operand = x2;
                      iVar8 = const_int_operand(lVar6,0);
                      if (iVar8 != 0) {
                        if ((ix86_isa_flags & 0x20) != 0) {
                          _nonimmediate_operand = lVar6;
                          return 0x6dc;
                        }
                        x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
                        _nonimmediate_operand = lVar6;
                      }
                    }
                    if ((**(int **)&x2->u < 1) ||
                       (iVar8 = avx_vpermilp_v8sf_operand(x2,0), iVar8 == 0)) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      _register_operand = x2;
                      lVar6 = *(long *)(*(long *)&x2->u + 8);
                      iVar8 = const_int_operand(lVar6,0);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        if ((ix86_isa_flags & 0x20) != 0) {
                          _nonimmediate_operand = lVar6;
                          return 0x6e0;
                        }
                        x1 = *(rtx *)&x0->u;
                        _nonimmediate_operand = lVar6;
                      }
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                  }
                }
              }
              else if (prVar2->field_0x2 == 'T') {
                if (*(short *)prVar2 == 0x7d) {
                  prVar7 = *(rtx *)&prVar2->u;
                  iVar8 = register_operand(prVar7,0x51);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    prVar2 = *(rtx *)&(prVar2->u).field_0x8;
                    _GLOBAL_OFFSET_TABLE_ = prVar7;
                    iVar8 = nonimmediate_operand(prVar2,0x51);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      lVar6 = *(long *)(puVar3 + 8);
                      _register_operand = prVar2;
                      if ((**(int **)(lVar6 + 8) < 1) ||
                         (iVar8 = avx_vperm2f128_v8sf_operand(lVar6,0), iVar8 == 0)) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 8) + 8);
                        _nonimmediate_operand = lVar6;
                        iVar8 = const_int_operand(uVar5,0);
                        if (iVar8 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          if ((ix86_isa_flags & 0x20) != 0) {
                            _memory_operand = uVar5;
                            return 0x6ea;
                          }
                          x1 = *(rtx *)&x0->u;
                          _memory_operand = uVar5;
                        }
                      }
                    }
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
              goto L21929;
            }
            if (uVar1 < 0x7d) {
              if (uVar1 == 0x7b) {
                prVar2 = *(rtx *)(puVar3 + 4);
                iVar8 = nonimmediate_operand(prVar2,0x51);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  prVar7 = *(rtx *)(puVar3 + 8);
                  _register_operand = prVar2;
                  iVar8 = register_operand(prVar7,0x51);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    lVar6 = *(long *)(puVar3 + 0xc);
                    _GLOBAL_OFFSET_TABLE_ = prVar7;
                    iVar8 = const_0_to_255_operand(lVar6,0x10);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      if ((ix86_isa_flags & 0x20) != 0) {
                        _nonimmediate_operand = lVar6;
                        return 0x620;
                      }
                      x1 = *(rtx *)&x0->u;
                      _nonimmediate_operand = lVar6;
                    }
                  }
                }
                goto L21929;
              }
              if (uVar1 < 0x7c) {
                if (uVar1 == 0x12) {
                  iVar8 = **(int **)(puVar3 + 4);
                  if (iVar8 == 4) {
                    if (*(int *)(puVar3 + 8) == 0xa8) {
                      prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                      iVar8 = register_operand(prVar2,0x51);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                        _GLOBAL_OFFSET_TABLE_ = prVar2;
                        iVar8 = nonimmediate_operand(prVar7,0x51);
                        if (iVar8 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                          _register_operand = prVar7;
                          iVar8 = nonimmediate_operand(lVar6,0x46);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            uVar5 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x20);
                            _nonimmediate_operand = lVar6;
                            iVar8 = const_0_to_3_operand(uVar5,0x10);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              if ((ix86_isa_flags & 0x800000) != 0) {
                                _memory_operand = uVar5;
                                return 0x6c1;
                              }
                              x1 = *(rtx *)&x0->u;
                              _memory_operand = uVar5;
                            }
                          }
                        }
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                    goto L21929;
                  }
                  if (iVar8 < 5) {
                    if (iVar8 == 3) {
                      iVar8 = *(int *)(puVar3 + 8);
                      if (iVar8 == 0xaa) {
                        prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                        iVar8 = memory_operand(prVar2,0x51);
                        if (iVar8 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                          _GLOBAL_OFFSET_TABLE_ = prVar2;
                          iVar8 = register_operand(prVar7,0x51);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            _register_operand = prVar7;
                            iVar8 = rtx_equal_p(*(undefined8 *)(*(long *)(puVar3 + 4) + 0x18),
                                                recog_data);
                            if ((iVar8 != 0) && ((ix86_isa_flags & 0x20) != 0)) {
                              return 0x6fa;
                            }
                            x1 = *(rtx *)&x0->u;
                          }
                        }
                        goto L21929;
                      }
                      if (iVar8 < 0xab) {
                        if (iVar8 == 0xa9) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = register_operand(prVar2,0x51);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                            iVar8 = nonimmediate_operand(prVar7,0x51);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                              _register_operand = prVar7;
                              iVar8 = const_0_to_255_operand(lVar6,0x10);
                              if (iVar8 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                if ((ix86_isa_flags & 0x20) != 0) {
                                  _nonimmediate_operand = lVar6;
                                  return 0x6e7;
                                }
                                x1 = *(rtx *)&x0->u;
                                _nonimmediate_operand = lVar6;
                              }
                            }
                          }
                          goto L21929;
                        }
                        if (iVar8 < 0xaa) {
                          if (iVar8 == 0x86) {
                            prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                            iVar8 = register_operand(prVar2,0x51);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              iVar8 = nonimmediate_operand(prVar7,0x51);
                              if (iVar8 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                                _register_operand = prVar7;
                                iVar8 = register_operand(lVar6,0x51);
                                if (iVar8 == 0) {
                                  x1 = *(rtx *)&x0->u;
                                }
                                else {
                                  if ((ix86_isa_flags & 0x20) != 0) {
                                    _nonimmediate_operand = lVar6;
                                    return 0x624;
                                  }
                                  x1 = *(rtx *)&x0->u;
                                  _nonimmediate_operand = lVar6;
                                }
                              }
                            }
                            goto L21929;
                          }
                          if (iVar8 == 0x88) {
                            prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                            iVar8 = nonimmediate_operand(prVar2,0x51);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              iVar8 = nonimmediate_operand(prVar7,0x51);
                              if (iVar8 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                                _register_operand = prVar7;
                                iVar8 = const_0_to_255_operand(lVar6,0x10);
                                if (iVar8 == 0) {
                                  x1 = *(rtx *)&x0->u;
                                }
                                else {
                                  if ((ix86_isa_flags & 0x20) != 0) {
                                    _nonimmediate_operand = lVar6;
                                    return 0x62c;
                                  }
                                  x1 = *(rtx *)&x0->u;
                                  _nonimmediate_operand = lVar6;
                                }
                              }
                            }
                            goto L21929;
                          }
                        }
                      }
                      x1 = *(rtx *)&x0->u;
                      goto L21929;
                    }
                    if (iVar8 < 4) {
                      if (iVar8 == 1) {
                        if (*(int *)(puVar3 + 8) == 0x9a) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = nonimmediate_operand(prVar2,0x51);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if ((ix86_isa_flags & 0x800000) != 0) {
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              return 0x6ad;
                            }
                            x1 = *(rtx *)&x0->u;
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                          }
                        }
                        else if (*(int *)(puVar3 + 8) == 0xac) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = nonimmediate_operand(prVar2,0x4f);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if ((ix86_isa_flags & 0x20) != 0) {
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              return 0x701;
                            }
                            x1 = *(rtx *)&x0->u;
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                        goto L21929;
                      }
                      if (iVar8 == 2) {
                        if (*(int *)(puVar3 + 8) == 0x8d) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = nonimmediate_operand(prVar2,0x51);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                            iVar8 = const_0_to_15_operand(prVar7,0x10);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              if ((ix86_isa_flags & 0x20) != 0) {
                                _register_operand = prVar7;
                                return 0x658;
                              }
                              x1 = *(rtx *)&x0->u;
                              _register_operand = prVar7;
                            }
                          }
                        }
                        else if (*(int *)(puVar3 + 8) == 0xa7) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = register_operand(prVar2,0x51);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                            iVar8 = nonimmediate_operand(prVar7,0x46);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              if ((ix86_isa_flags & 0x20) != 0) {
                                _register_operand = prVar7;
                                return 0x6e4;
                              }
                              x1 = *(rtx *)&x0->u;
                              _register_operand = prVar7;
                            }
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                        goto L21929;
                      }
                    }
                  }
                  x1 = *(rtx *)&x0->u;
                  goto L21929;
                }
                if (uVar1 == 0x2f) {
                  lVar6 = *(long *)(puVar3 + 4);
                  iVar8 = nonimmediate_operand(lVar6,0x51);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    prVar2 = *(rtx *)(puVar3 + 8);
                    _nonimmediate_operand = lVar6;
                    iVar8 = vector_move_operand(prVar2,0x51);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      prVar7 = *(rtx *)(puVar3 + 0xc);
                      _GLOBAL_OFFSET_TABLE_ = prVar2;
                      iVar8 = vector_move_operand(prVar7,0x51);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        if ((ix86_isa_flags & 0x800000) != 0) {
                          _register_operand = prVar7;
                          return 0x680;
                        }
                        x1 = *(rtx *)&x0->u;
                        _register_operand = prVar7;
                      }
                    }
                  }
                  goto L21929;
                }
              }
            }
          }
        }
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
L21929:
  iVar8 = memory_operand(x1,0x51);
  if (iVar8 != 0) {
    recog_data = x1;
    psVar4 = *(short **)&(x0->u).field_0x8;
    if ((((*(char *)(psVar4 + 1) == 'Q') && (*psVar4 == 0x12)) && (**(int **)(psVar4 + 4) == 3)) &&
       (*(int *)(psVar4 + 8) == 0xab)) {
      prVar2 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
      iVar8 = register_operand(prVar2,0x51);
      if (iVar8 != 0) {
        prVar7 = *(rtx *)(*(long *)(psVar4 + 4) + 0x10);
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar8 = register_operand(prVar7,0x51);
        if (((iVar8 != 0) &&
            (_register_operand = prVar7,
            iVar8 = rtx_equal_p(*(undefined8 *)(*(long *)(psVar4 + 4) + 0x18),recog_data),
            iVar8 != 0)) && ((ix86_isa_flags & 0x20) != 0)) {
          return 0x6fe;
        }
      }
    }
  }
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recog_31(rtx x0,rtx insn,int *pnum_clobbers)

{
  ushort uVar1;
  rtx prVar2;
  ushort *puVar3;
  short *psVar4;
  undefined8 uVar5;
  long lVar6;
  rtx prVar7;
  int iVar8;
  rtx x1;
  rtx x2;
  rtx *operands;
  rtx x3;
  rtx x4;
  
  prVar2 = *(rtx *)&x0->u;
  iVar8 = register_operand(prVar2,0x52);
  x1 = prVar2;
  if (iVar8 != 0) {
    puVar3 = *(ushort **)&(x0->u).field_0x8;
    recog_data = prVar2;
    if (*(char *)(puVar3 + 1) == 'R') {
      uVar1 = *puVar3;
      if (uVar1 == 0x7e) {
        prVar2 = *(rtx *)(puVar3 + 4);
        iVar8 = nonimmediate_operand(prVar2,0x27);
        if (iVar8 == 0) {
          x1 = *(rtx *)&x0->u;
        }
        else {
          if ((ix86_isa_flags & 0x20) != 0) {
            _GLOBAL_OFFSET_TABLE_ = prVar2;
            return 0x6d4;
          }
          x1 = *(rtx *)&x0->u;
          _GLOBAL_OFFSET_TABLE_ = prVar2;
        }
      }
      else {
        if (uVar1 < 0x7f) {
          if (uVar1 == 0x7d) {
            x2 = *(rtx *)(puVar3 + 4);
            if (x2->field_0x2 == 'P') {
              if (*(short *)x2 == 0x7c) {
                prVar2 = *(rtx *)&x2->u;
                iVar8 = register_operand(prVar2,0x52);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  psVar4 = *(short **)&(x2->u).field_0x8;
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 2)) {
                    if (*(long *)(*(long *)(psVar4 + 4) + 8) == _q_regs_operand) {
                      if (*(long *)(*(long *)(psVar4 + 4) + 0x10) == _bt_comparison_operator) {
                        prVar2 = *(rtx *)(puVar3 + 8);
                        iVar8 = nonimmediate_operand(prVar2,0x50);
                        if (iVar8 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          if ((ix86_isa_flags & 0x20) != 0) {
                            _register_operand = prVar2;
                            return 0x6ef;
                          }
                          x1 = *(rtx *)&x0->u;
                          _register_operand = prVar2;
                        }
                      }
                      else {
                        x1 = *(rtx *)&x0->u;
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                  }
                }
              }
              else {
                iVar8 = nonimmediate_operand(x2,0x50);
                if (iVar8 != 0) {
                  _GLOBAL_OFFSET_TABLE_ = x2;
                  iVar8 = rtx_equal_p(*(undefined8 *)(puVar3 + 8),x2);
                  if ((iVar8 != 0) && ((ix86_isa_flags & 0x20) != 0)) {
                    return 0x6da;
                  }
                  x2 = *(rtx *)(puVar3 + 4);
                }
                iVar8 = nonimmediate_operand(x2,0x50);
                if (iVar8 != 0) {
                  _register_operand = x2;
                  psVar4 = *(short **)(puVar3 + 8);
                  if ((*(char *)(psVar4 + 1) == 'P') && (*psVar4 == 0x7c)) {
                    prVar2 = *(rtx *)(psVar4 + 4);
                    iVar8 = register_operand(prVar2,0x52);
                    if (iVar8 == 0) {
                      x2 = *(rtx *)(puVar3 + 4);
                    }
                    else {
                      psVar4 = *(short **)(psVar4 + 8);
                      _GLOBAL_OFFSET_TABLE_ = prVar2;
                      if ((*psVar4 == 0xf) && (**(int **)(psVar4 + 4) == 2)) {
                        if (*(long *)(*(long *)(psVar4 + 4) + 8) == _ix86_fp_comparison_operator) {
                          if ((*(long *)(*(long *)(psVar4 + 4) + 0x10) == _swap_condition) &&
                             ((ix86_isa_flags & 0x20) != 0)) {
                            return 0x6ed;
                          }
                          x2 = *(rtx *)(puVar3 + 4);
                        }
                        else {
                          x2 = *(rtx *)(puVar3 + 4);
                        }
                      }
                      else {
                        x2 = *(rtx *)(puVar3 + 4);
                      }
                    }
                  }
                  else {
                    x2 = *(rtx *)(puVar3 + 4);
                  }
                }
                iVar8 = register_operand(x2,0x50);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  _GLOBAL_OFFSET_TABLE_ = x2;
                  prVar2 = *(rtx *)(puVar3 + 8);
                  iVar8 = vector_move_operand(prVar2,0x50);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    if ((ix86_isa_flags & 0x20) != 0) {
                      _register_operand = prVar2;
                      return 0x70b;
                    }
                    x1 = *(rtx *)&x0->u;
                    _register_operand = prVar2;
                  }
                }
              }
            }
            else {
              x1 = *(rtx *)&x0->u;
            }
            goto L21930;
          }
          if (uVar1 < 0x7e) {
            if (uVar1 == 0x7c) {
              prVar2 = *(rtx *)(puVar3 + 4);
              if (prVar2->field_0x2 == 'R') {
                iVar8 = nonimmediate_operand(prVar2,0x52);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  x2 = *(rtx *)(puVar3 + 8);
                  _GLOBAL_OFFSET_TABLE_ = prVar2;
                  if (*(short *)x2 == 0xf) {
                    if ((0 < **(int **)&x2->u) && (iVar8 = avx_vbroadcast_operand(x2,0), iVar8 != 0)
                       ) {
                      lVar6 = *(long *)(*(long *)&x2->u + 8);
                      _register_operand = x2;
                      iVar8 = const_int_operand(lVar6,0);
                      if (iVar8 != 0) {
                        if ((ix86_isa_flags & 0x20) != 0) {
                          _nonimmediate_operand = lVar6;
                          return 0x6dd;
                        }
                        x2 = *(rtx *)(*(long *)&(x0->u).field_0x8 + 0x10);
                        _nonimmediate_operand = lVar6;
                      }
                    }
                    if ((**(int **)&x2->u < 1) ||
                       (iVar8 = avx_vpermilp_v4df_operand(x2,0), iVar8 == 0)) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      _register_operand = x2;
                      lVar6 = *(long *)(*(long *)&x2->u + 8);
                      iVar8 = const_int_operand(lVar6,0);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        if ((ix86_isa_flags & 0x20) != 0) {
                          _nonimmediate_operand = lVar6;
                          return 0x6e1;
                        }
                        x1 = *(rtx *)&x0->u;
                        _nonimmediate_operand = lVar6;
                      }
                    }
                  }
                  else {
                    x1 = *(rtx *)&x0->u;
                  }
                }
              }
              else if (prVar2->field_0x2 == 'U') {
                if (*(short *)prVar2 == 0x7d) {
                  prVar7 = *(rtx *)&prVar2->u;
                  iVar8 = register_operand(prVar7,0x52);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    prVar2 = *(rtx *)&(prVar2->u).field_0x8;
                    _GLOBAL_OFFSET_TABLE_ = prVar7;
                    iVar8 = nonimmediate_operand(prVar2,0x52);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      lVar6 = *(long *)(puVar3 + 8);
                      _register_operand = prVar2;
                      if ((**(int **)(lVar6 + 8) < 1) ||
                         (iVar8 = avx_vperm2f128_v4df_operand(lVar6,0), iVar8 == 0)) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 8) + 8);
                        _nonimmediate_operand = lVar6;
                        iVar8 = const_int_operand(uVar5,0);
                        if (iVar8 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          if ((ix86_isa_flags & 0x20) != 0) {
                            _memory_operand = uVar5;
                            return 0x6eb;
                          }
                          x1 = *(rtx *)&x0->u;
                          _memory_operand = uVar5;
                        }
                      }
                    }
                  }
                }
                else {
                  x1 = *(rtx *)&x0->u;
                }
              }
              else {
                x1 = *(rtx *)&x0->u;
              }
              goto L21930;
            }
            if (uVar1 < 0x7d) {
              if (uVar1 == 0x7b) {
                prVar2 = *(rtx *)(puVar3 + 4);
                iVar8 = nonimmediate_operand(prVar2,0x52);
                if (iVar8 == 0) {
                  x1 = *(rtx *)&x0->u;
                }
                else {
                  prVar7 = *(rtx *)(puVar3 + 8);
                  _register_operand = prVar2;
                  iVar8 = register_operand(prVar7,0x52);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    lVar6 = *(long *)(puVar3 + 0xc);
                    _GLOBAL_OFFSET_TABLE_ = prVar7;
                    iVar8 = const_0_to_15_operand(lVar6,0x10);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      if ((ix86_isa_flags & 0x20) != 0) {
                        _nonimmediate_operand = lVar6;
                        return 0x621;
                      }
                      x1 = *(rtx *)&x0->u;
                      _nonimmediate_operand = lVar6;
                    }
                  }
                }
                goto L21930;
              }
              if (uVar1 < 0x7c) {
                if (uVar1 == 0x12) {
                  iVar8 = **(int **)(puVar3 + 4);
                  if (iVar8 == 4) {
                    if (*(int *)(puVar3 + 8) == 0xa8) {
                      prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                      iVar8 = register_operand(prVar2,0x52);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                        _GLOBAL_OFFSET_TABLE_ = prVar2;
                        iVar8 = nonimmediate_operand(prVar7,0x52);
                        if (iVar8 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                          _register_operand = prVar7;
                          iVar8 = nonimmediate_operand(lVar6,0x47);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            uVar5 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x20);
                            _nonimmediate_operand = lVar6;
                            iVar8 = const_0_to_3_operand(uVar5,0x10);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              if ((ix86_isa_flags & 0x800000) != 0) {
                                _memory_operand = uVar5;
                                return 0x6c2;
                              }
                              x1 = *(rtx *)&x0->u;
                              _memory_operand = uVar5;
                            }
                          }
                        }
                      }
                    }
                    else {
                      x1 = *(rtx *)&x0->u;
                    }
                    goto L21930;
                  }
                  if (iVar8 < 5) {
                    if (iVar8 == 3) {
                      iVar8 = *(int *)(puVar3 + 8);
                      if (iVar8 == 0xaa) {
                        prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                        iVar8 = memory_operand(prVar2,0x52);
                        if (iVar8 == 0) {
                          x1 = *(rtx *)&x0->u;
                        }
                        else {
                          prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                          _GLOBAL_OFFSET_TABLE_ = prVar2;
                          iVar8 = register_operand(prVar7,0x52);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            _register_operand = prVar7;
                            iVar8 = rtx_equal_p(*(undefined8 *)(*(long *)(puVar3 + 4) + 0x18),
                                                recog_data);
                            if ((iVar8 != 0) && ((ix86_isa_flags & 0x20) != 0)) {
                              return 0x6fb;
                            }
                            x1 = *(rtx *)&x0->u;
                          }
                        }
                        goto L21930;
                      }
                      if (iVar8 < 0xab) {
                        if (iVar8 == 0xa9) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = register_operand(prVar2,0x52);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                            iVar8 = nonimmediate_operand(prVar7,0x52);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                              _register_operand = prVar7;
                              iVar8 = const_0_to_255_operand(lVar6,0x10);
                              if (iVar8 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                if ((ix86_isa_flags & 0x20) != 0) {
                                  _nonimmediate_operand = lVar6;
                                  return 0x6e8;
                                }
                                x1 = *(rtx *)&x0->u;
                                _nonimmediate_operand = lVar6;
                              }
                            }
                          }
                          goto L21930;
                        }
                        if (iVar8 < 0xaa) {
                          if (iVar8 == 0x86) {
                            prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                            iVar8 = register_operand(prVar2,0x52);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              iVar8 = nonimmediate_operand(prVar7,0x52);
                              if (iVar8 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                                _register_operand = prVar7;
                                iVar8 = register_operand(lVar6,0x52);
                                if (iVar8 == 0) {
                                  x1 = *(rtx *)&x0->u;
                                }
                                else {
                                  if ((ix86_isa_flags & 0x20) != 0) {
                                    _nonimmediate_operand = lVar6;
                                    return 0x625;
                                  }
                                  x1 = *(rtx *)&x0->u;
                                  _nonimmediate_operand = lVar6;
                                }
                              }
                            }
                            goto L21930;
                          }
                          if (iVar8 == 0x88) {
                            prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                            iVar8 = nonimmediate_operand(prVar2,0x52);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              iVar8 = nonimmediate_operand(prVar7,0x52);
                              if (iVar8 == 0) {
                                x1 = *(rtx *)&x0->u;
                              }
                              else {
                                lVar6 = *(long *)(*(long *)(puVar3 + 4) + 0x18);
                                _register_operand = prVar7;
                                iVar8 = const_0_to_255_operand(lVar6,0x10);
                                if (iVar8 == 0) {
                                  x1 = *(rtx *)&x0->u;
                                }
                                else {
                                  if ((ix86_isa_flags & 0x20) != 0) {
                                    _nonimmediate_operand = lVar6;
                                    return 0x62d;
                                  }
                                  x1 = *(rtx *)&x0->u;
                                  _nonimmediate_operand = lVar6;
                                }
                              }
                            }
                            goto L21930;
                          }
                        }
                      }
                      x1 = *(rtx *)&x0->u;
                      goto L21930;
                    }
                    if (iVar8 < 4) {
                      if (iVar8 == 1) {
                        if (*(int *)(puVar3 + 8) == 0x9a) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = nonimmediate_operand(prVar2,0x52);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if ((ix86_isa_flags & 0x800000) != 0) {
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              return 0x6ae;
                            }
                            x1 = *(rtx *)&x0->u;
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                          }
                        }
                        else if (*(int *)(puVar3 + 8) == 0xac) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = nonimmediate_operand(prVar2,0x50);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            if ((ix86_isa_flags & 0x20) != 0) {
                              _GLOBAL_OFFSET_TABLE_ = prVar2;
                              return 0x702;
                            }
                            x1 = *(rtx *)&x0->u;
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                        goto L21930;
                      }
                      if (iVar8 == 2) {
                        if (*(int *)(puVar3 + 8) == 0x8d) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = nonimmediate_operand(prVar2,0x52);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                            iVar8 = const_0_to_15_operand(prVar7,0x10);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              if ((ix86_isa_flags & 0x20) != 0) {
                                _register_operand = prVar7;
                                return 0x659;
                              }
                              x1 = *(rtx *)&x0->u;
                              _register_operand = prVar7;
                            }
                          }
                        }
                        else if (*(int *)(puVar3 + 8) == 0xa7) {
                          prVar2 = *(rtx *)(*(long *)(puVar3 + 4) + 8);
                          iVar8 = register_operand(prVar2,0x52);
                          if (iVar8 == 0) {
                            x1 = *(rtx *)&x0->u;
                          }
                          else {
                            prVar7 = *(rtx *)(*(long *)(puVar3 + 4) + 0x10);
                            _GLOBAL_OFFSET_TABLE_ = prVar2;
                            iVar8 = nonimmediate_operand(prVar7,0x47);
                            if (iVar8 == 0) {
                              x1 = *(rtx *)&x0->u;
                            }
                            else {
                              if ((ix86_isa_flags & 0x20) != 0) {
                                _register_operand = prVar7;
                                return 0x6e5;
                              }
                              x1 = *(rtx *)&x0->u;
                              _register_operand = prVar7;
                            }
                          }
                        }
                        else {
                          x1 = *(rtx *)&x0->u;
                        }
                        goto L21930;
                      }
                    }
                  }
                  x1 = *(rtx *)&x0->u;
                  goto L21930;
                }
                if (uVar1 == 0x2f) {
                  lVar6 = *(long *)(puVar3 + 4);
                  iVar8 = nonimmediate_operand(lVar6,0x52);
                  if (iVar8 == 0) {
                    x1 = *(rtx *)&x0->u;
                  }
                  else {
                    prVar2 = *(rtx *)(puVar3 + 8);
                    _nonimmediate_operand = lVar6;
                    iVar8 = vector_move_operand(prVar2,0x52);
                    if (iVar8 == 0) {
                      x1 = *(rtx *)&x0->u;
                    }
                    else {
                      prVar7 = *(rtx *)(puVar3 + 0xc);
                      _GLOBAL_OFFSET_TABLE_ = prVar2;
                      iVar8 = vector_move_operand(prVar7,0x52);
                      if (iVar8 == 0) {
                        x1 = *(rtx *)&x0->u;
                      }
                      else {
                        if ((ix86_isa_flags & 0x800000) != 0) {
                          _register_operand = prVar7;
                          return 0x681;
                        }
                        x1 = *(rtx *)&x0->u;
                        _register_operand = prVar7;
                      }
                    }
                  }
                  goto L21930;
                }
              }
            }
          }
        }
        x1 = *(rtx *)&x0->u;
      }
    }
    else {
      x1 = *(rtx *)&x0->u;
    }
  }
L21930:
  iVar8 = memory_operand(x1,0x52);
  if (iVar8 != 0) {
    recog_data = x1;
    psVar4 = *(short **)&(x0->u).field_0x8;
    if ((((*(char *)(psVar4 + 1) == 'R') && (*psVar4 == 0x12)) && (**(int **)(psVar4 + 4) == 3)) &&
       (*(int *)(psVar4 + 8) == 0xab)) {
      prVar2 = *(rtx *)(*(long *)(psVar4 + 4) + 8);
      iVar8 = register_operand(prVar2,0x52);
      if (iVar8 != 0) {
        prVar7 = *(rtx *)(*(long *)(psVar4 + 4) + 0x10);
        _GLOBAL_OFFSET_TABLE_ = prVar2;
        iVar8 = register_operand(prVar7,0x52);
        if (((iVar8 != 0) &&
            (_register_operand = prVar7,
            iVar8 = rtx_equal_p(*(undefined8 *)(*(long *)(psVar4 + 4) + 0x18),recog_data),
            iVar8 != 0)) && ((ix86_isa_flags & 0x20) != 0)) {
          return 0x6ff;
        }
      }
    }
  }
  return -1;
}

