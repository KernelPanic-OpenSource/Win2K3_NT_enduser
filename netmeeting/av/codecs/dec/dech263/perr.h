extern unsigned int sv_H263PError16x16_S(unsigned char *framep1, unsigned char *framep2, unsigned int w1, unsigned int w2, unsigned int error_limit);
extern unsigned int sv_H263PError8x8_S(unsigned char *framep1, unsigned char *framep2, unsigned int w1, unsigned int w2, unsigned int error_limit);
extern unsigned int sv_H263PEr8_init_S(unsigned char *framep1, unsigned char *framep2, unsigned int w1, unsigned int w2);
extern unsigned int sv_H263MyError4_S(unsigned char *framep1, unsigned char *framep2, unsigned int w1, unsigned int error_limit);
extern void sv_H263Clp_S(short *fm, unsigned int count);
extern unsigned int sv_H263HalfPerr16_S(unsigned char *framep1, unsigned char *framep2, unsigned int w1, unsigned int w2, unsigned int error_limit);
extern void sv_H263HalfPerr4_S(unsigned char *framep1, unsigned char *framep2, unsigned int w1, unsigned int w2, unsigned int *error);
extern unsigned int sv_H263BError16x16_S(unsigned char *fb, unsigned char *ref1, unsigned char *ref2, unsigned int w);
extern void sv_H263ItoC16A_S(short *fm1, unsigned char *fm2, unsigned int pels);
extern void sv_H263ItoC8B_S(short *fm1, unsigned char *fm2, short *fm3, unsigned char *fm4, unsigned int halfpels);
extern void sv_H263Intrpolt_S(unsigned char *fm1, unsigned char *fm2, unsigned char *pt1, unsigned char *pt2, unsigned int width);
extern void sv_H263FilLumBlk_S(unsigned char *fma, short *fmb, int pels);
extern void sv_H263FilChmBlk_S(unsigned char *fma, short *fmb, unsigned char *fmc, short *fmd, int cpels);
extern unsigned int sv_H263Ierr16_S(short *fm1, short *fm2, unsigned int hi, unsigned int error_limiover_limit, unsigned int over_limit);
extern void sv_H263CtoI16_S(unsigned char *fm1, short *fm2, unsigned int pels);
extern unsigned short sv_H263VAR_S(unsigned char *fm1, unsigned int pels, unsigned int min_SAD);
extern void sv_H263Intpix16_S(unsigned char *fm1, short *fm2, unsigned int w1, unsigned int w2);
extern void sv_H263Add16Skp_S(unsigned char *fm1, short *fm2, unsigned int lx2);
extern void sv_H263Sub256_S(short *fm1, short *fm2, short *fm3, unsigned int count);
extern void sv_H263Sub16_S(unsigned char *fm1, short *fm2, short *fm3, unsigned int pels);
extern void sv_H263Sub8_S(unsigned char *fm1, short *fm2, short *fm3, unsigned int cpels);
extern void sv_H263FillX0_S(short *stream, short X0);
extern void sv_H263Subsamp8_S(unsigned char *fm1, unsigned char *fm2, unsigned int count, unsigned int lx);
extern unsigned int sv_H263HalfPerr8_S(unsigned char *framep1, unsigned char *framep2, unsigned int w1, unsigned int w2, unsigned int error_limit);
extern void sv_H263Add_S(unsigned char *fm1, short *fm2, unsigned char *fm3, short *fm4, unsigned int lx);
extern void sv_H263Avg4Add_S(unsigned char *fm1, unsigned char *fm2, unsigned char *fm3, unsigned char *fm4, short *fm5, unsigned int lx);
extern void sv_H263Avg2Add_S(unsigned char *fm1, unsigned char *fm2, short *fm3, unsigned char *fm4, unsigned char *fm5, short *fm6, unsigned int lx);
extern void sv_H263Cpy_S(unsigned char *fm1, short *fm2, unsigned char *fm3, short *fm4, unsigned int lx);
extern void sv_H263Avg4Cpy_S(unsigned char *fm1, unsigned char *fm2, unsigned char *fm3, unsigned char *fm4, short *fm5, unsigned int lx);
extern void sv_H263SubCpy_S(unsigned char *fm1, unsigned char *fm2, short *fm3, unsigned int cpels, unsigned int lx);
extern void sv_H263Sub2Cpy_S(unsigned char *fm1, unsigned char *fm2, unsigned char *fm3, short *fm4, unsigned int cpels, unsigned int lx);
extern void sv_H263Sub4Cpy_S(unsigned char *fm1, unsigned char *fm2, unsigned char *fm3, unsigned char *fm4, unsigned char *fm5, short *fm6, unsigned int cpels, unsigned int lx);
extern void sv_H263Add256_S(short *fm1, short *fm2);
