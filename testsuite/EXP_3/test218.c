#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1254151;
int16_t x14 = INT16_MIN;
int32_t t1 = -1;
volatile int64_t x23 = -573011189874390LL;
static uint32_t x26 = 4U;
uint64_t x27 = UINT64_MAX;
int16_t x29 = -1;
int32_t x30 = 697;
int32_t t6 = -2772;
int16_t x40 = INT16_MIN;
int32_t x49 = -5520106;
static uint32_t x61 = 515971U;
volatile int32_t t13 = 2;
uint64_t x70 = 20192318860LLU;
int32_t t14 = 14;
int32_t t15 = -850;
volatile uint16_t x82 = 1175U;
int32_t x83 = 3911;
uint64_t x85 = 1847080492LLU;
volatile int32_t t18 = -5;
int8_t x96 = -1;
uint16_t x103 = 510U;
int16_t x107 = -141;
uint64_t x109 = UINT64_MAX;
int16_t x111 = -53;
int16_t x114 = INT16_MAX;
int64_t x121 = -3026553529LL;
int32_t x126 = -722049435;
int32_t t27 = 6555;
static volatile uint64_t x131 = 253724589976LLU;
int16_t x134 = INT16_MIN;
int16_t x135 = -1;
int32_t x136 = 239625504;
volatile int32_t t29 = 75;
uint16_t x139 = 32373U;
int16_t x140 = -1;
uint32_t x150 = UINT32_MAX;
static int32_t t33 = -99232;
static volatile int32_t t34 = 60622380;
int64_t x163 = 177690LL;
uint64_t x164 = 25LLU;
static int32_t t35 = -1;
int32_t x167 = -281303;
uint32_t x168 = 430185601U;
int32_t t36 = -28227;
int64_t x170 = INT64_MIN;
static volatile int32_t t42 = -4;
volatile int16_t x196 = INT16_MIN;
static int64_t x206 = INT64_MIN;
int16_t x207 = INT16_MAX;
volatile int32_t t46 = 34687315;
int8_t x216 = -3;
int32_t x232 = 15724;
uint64_t x237 = 207800944841051469LLU;
uint64_t x247 = 30000530186655LLU;
uint16_t x254 = 1199U;
int32_t x269 = INT32_MIN;
int32_t x273 = INT32_MIN;
volatile int64_t x274 = 372421727LL;
int16_t x277 = -1;
volatile int16_t x285 = -1;
uint64_t x287 = UINT64_MAX;
uint32_t x291 = UINT32_MAX;
static uint32_t x294 = 347164702U;
int16_t x295 = -39;
int16_t x297 = -7;
int32_t x298 = -1;
int16_t x303 = 1579;
uint16_t x313 = UINT16_MAX;
static int32_t x316 = INT32_MAX;
uint64_t x321 = UINT64_MAX;
volatile int32_t t74 = -1;
int64_t x332 = INT64_MAX;
int8_t x335 = INT8_MIN;
volatile int32_t t76 = -17773;
int16_t x337 = INT16_MIN;
volatile uint64_t x339 = 8027865850151150081LLU;
volatile int8_t x340 = INT8_MAX;
volatile int32_t t77 = 3132;
int16_t x346 = -1;
volatile int64_t x347 = INT64_MIN;
uint8_t x352 = UINT8_MAX;
static uint32_t x357 = UINT32_MAX;
uint32_t x358 = 104U;
int16_t x366 = INT16_MIN;
volatile int32_t x377 = -1;
volatile int32_t t85 = 1;
uint16_t x388 = 9U;
volatile int32_t t87 = -1;
static uint8_t x394 = 2U;
int16_t x404 = INT16_MIN;
int64_t x405 = INT64_MAX;
int64_t x408 = INT64_MIN;
volatile int32_t t91 = 188332958;


void f0(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x10 = INT32_MAX;
	volatile uint16_t x11 = 22U;
	volatile int16_t x12 = INT16_MIN;

	t0 = ((x9/x10)<=(x11-x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 1587680099118101LLU;
	int8_t x15 = INT8_MAX;
	uint64_t x16 = 1107029LLU;

	t1 = ((x13/x14)<=(x15-x16));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	static volatile int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	static int64_t x20 = -1LL;
	static volatile int32_t t2 = -53918436;

	t2 = ((x17/x18)<=(x19-x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1;
	volatile int32_t x22 = 54999;
	static int32_t x24 = -1;
	volatile int32_t t3 = -9;

	t3 = ((x21/x22)<=(x23-x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	static volatile int64_t x28 = -1LL;
	volatile int32_t t4 = 254;

	t4 = ((x25/x26)<=(x27-x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x31 = INT8_MAX;
	static int32_t x32 = -1;
	int32_t t5 = -48856884;

	t5 = ((x29/x30)<=(x31-x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 21U;

	t6 = ((x33/x34)<=(x35-x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = INT32_MIN;
	uint8_t x38 = 4U;
	uint8_t x39 = UINT8_MAX;
	volatile int32_t t7 = -15045;

	t7 = ((x37/x38)<=(x39-x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	int64_t x42 = 125200000LL;
	int64_t x43 = -1LL;
	int64_t x44 = INT64_MAX;
	int32_t t8 = -50748;

	t8 = ((x41/x42)<=(x43-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	static volatile int8_t x47 = INT8_MIN;
	int16_t x48 = 9988;
	volatile int32_t t9 = 4;

	t9 = ((x45/x46)<=(x47-x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = -227;
	static int16_t x51 = 14550;
	uint32_t x52 = UINT32_MAX;
	static volatile int32_t t10 = 1;

	t10 = ((x49/x50)<=(x51-x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MIN;
	static int16_t x54 = INT16_MIN;
	uint8_t x55 = UINT8_MAX;
	int64_t x56 = 282968212354041019LL;
	int32_t t11 = 2;

	t11 = ((x53/x54)<=(x55-x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = INT64_MAX;
	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t12 = 7001;

	t12 = ((x61/x62)<=(x63-x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -1;
	uint8_t x66 = 2U;
	int64_t x67 = INT64_MAX;
	volatile uint16_t x68 = 2U;

	t13 = ((x65/x66)<=(x67-x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x69 = 24217010U;
	int8_t x71 = INT8_MIN;
	uint16_t x72 = 98U;

	t14 = ((x69/x70)<=(x71-x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	uint8_t x74 = 6U;
	int16_t x75 = 0;
	uint32_t x76 = 249755U;

	t15 = ((x73/x74)<=(x75-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = 777967;
	static uint64_t x78 = 12LLU;
	int8_t x79 = -1;
	uint8_t x80 = 51U;
	volatile int32_t t16 = 2073465;

	t16 = ((x77/x78)<=(x79-x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MAX;
	volatile int64_t x84 = INT64_MAX;
	volatile int32_t t17 = -248047;

	t17 = ((x81/x82)<=(x83-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = 1;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MAX;

	t18 = ((x85/x86)<=(x87-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = 37;
	static volatile uint32_t x90 = 48087796U;
	static volatile uint64_t x91 = 327LLU;
	uint32_t x92 = 260118U;
	static int32_t t19 = 166626;

	t19 = ((x89/x90)<=(x91-x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -2;
	int8_t x94 = INT8_MIN;
	uint8_t x95 = UINT8_MAX;
	static volatile int32_t t20 = 61987655;

	t20 = ((x93/x94)<=(x95-x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 34;
	static int8_t x98 = -1;
	volatile uint16_t x99 = UINT16_MAX;
	uint32_t x100 = 1134820406U;
	static volatile int32_t t21 = -229;

	t21 = ((x97/x98)<=(x99-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x101 = 10U;
	static volatile uint32_t x102 = 17U;
	int8_t x104 = INT8_MIN;
	volatile int32_t t22 = 2;

	t22 = ((x101/x102)<=(x103-x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	uint8_t x108 = 0U;
	volatile int32_t t23 = 523670;

	t23 = ((x105/x106)<=(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = INT32_MIN;
	static int32_t x112 = 57497147;
	volatile int32_t t24 = -359329;

	t24 = ((x109/x110)<=(x111-x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x113 = INT32_MIN;
	static uint32_t x115 = 4868U;
	int32_t x116 = INT32_MIN;
	static int32_t t25 = -913832;

	t25 = ((x113/x114)<=(x115-x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x122 = 120U;
	static uint16_t x123 = 64U;
	int16_t x124 = INT16_MIN;
	int32_t t26 = 491585877;

	t26 = ((x121/x122)<=(x123-x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 2459330LLU;
	int64_t x127 = -3540609840154LL;
	int64_t x128 = INT64_MIN;

	t27 = ((x125/x126)<=(x127-x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 0U;
	int8_t x130 = -1;
	volatile uint64_t x132 = 283229262072LLU;
	volatile int32_t t28 = 5415986;

	t28 = ((x129/x130)<=(x131-x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = INT16_MIN;

	t29 = ((x133/x134)<=(x135-x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x137 = INT64_MIN;
	static uint16_t x138 = 5923U;
	int32_t t30 = -15;

	t30 = ((x137/x138)<=(x139-x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	int64_t x142 = INT64_MAX;
	volatile int16_t x143 = -42;
	uint8_t x144 = 25U;
	int32_t t31 = 51663;

	t31 = ((x141/x142)<=(x143-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	uint8_t x151 = 0U;
	int16_t x152 = -10091;
	int32_t t32 = 1124916;

	t32 = ((x149/x150)<=(x151-x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 2U;
	int8_t x154 = INT8_MAX;
	static int32_t x155 = -1;
	int16_t x156 = INT16_MAX;

	t33 = ((x153/x154)<=(x155-x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = 14;
	static int64_t x159 = -1LL;
	int8_t x160 = INT8_MIN;

	t34 = ((x157/x158)<=(x159-x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 1U;
	int8_t x162 = INT8_MAX;

	t35 = ((x161/x162)<=(x163-x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = 4;

	t36 = ((x165/x166)<=(x167-x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int32_t x171 = -235640;
	int16_t x172 = INT16_MAX;
	int32_t t37 = -901770240;

	t37 = ((x169/x170)<=(x171-x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	int16_t x175 = -214;
	static int32_t x176 = 4;
	int32_t t38 = -285622;

	t38 = ((x173/x174)<=(x175-x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1LL;
	static int64_t x178 = INT64_MAX;
	int64_t x179 = -31842466554614LL;
	volatile uint32_t x180 = 1220307978U;
	static volatile int32_t t39 = -24;

	t39 = ((x177/x178)<=(x179-x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 27353803;
	int64_t x182 = -1LL;
	int8_t x183 = -11;
	volatile uint16_t x184 = 109U;
	int32_t t40 = -58086;

	t40 = ((x181/x182)<=(x183-x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MAX;
	int16_t x186 = INT16_MIN;
	volatile int8_t x187 = INT8_MIN;
	int64_t x188 = 2LL;
	volatile int32_t t41 = 233;

	t41 = ((x185/x186)<=(x187-x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 40350026574LLU;
	int32_t x190 = INT32_MAX;
	int64_t x191 = INT64_MIN;
	static volatile uint64_t x192 = 2436776518LLU;

	t42 = ((x189/x190)<=(x191-x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MAX;
	static volatile int64_t x195 = 496LL;
	static volatile int32_t t43 = -1;

	t43 = ((x193/x194)<=(x195-x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -848752795LL;
	int32_t x198 = -1;
	int16_t x199 = -95;
	volatile int16_t x200 = INT16_MAX;
	int32_t t44 = 53063655;

	t44 = ((x197/x198)<=(x199-x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = INT16_MIN;
	static int32_t x202 = -24182;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = -1;
	int32_t t45 = 538;

	t45 = ((x201/x202)<=(x203-x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = -1;
	int64_t x208 = -1LL;

	t46 = ((x205/x206)<=(x207-x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	uint16_t x210 = UINT16_MAX;
	uint32_t x211 = 12822U;
	volatile int8_t x212 = -1;
	int32_t t47 = -1;

	t47 = ((x209/x210)<=(x211-x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x213 = 2U;
	int16_t x214 = INT16_MIN;
	int64_t x215 = -28400962LL;
	volatile int32_t t48 = 20;

	t48 = ((x213/x214)<=(x215-x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	int16_t x218 = INT16_MIN;
	static volatile uint8_t x219 = 2U;
	uint8_t x220 = 1U;
	int32_t t49 = 268862019;

	t49 = ((x217/x218)<=(x219-x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = INT8_MIN;
	volatile uint64_t x224 = 1LLU;
	static volatile int32_t t50 = 13176;

	t50 = ((x221/x222)<=(x223-x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 2U;
	static uint64_t x226 = 7840913LLU;
	int64_t x227 = -1LL;
	static int8_t x228 = 9;
	static int32_t t51 = 0;

	t51 = ((x225/x226)<=(x227-x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int16_t x230 = 9959;
	uint32_t x231 = 1U;
	int32_t t52 = 119;

	t52 = ((x229/x230)<=(x231-x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = 5;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MAX;
	static volatile int32_t t53 = 27919669;

	t53 = ((x233/x234)<=(x235-x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x238 = 4U;
	int16_t x239 = -1;
	static uint32_t x240 = 276786U;
	static int32_t t54 = -9232;

	t54 = ((x237/x238)<=(x239-x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 28748283U;
	int64_t x246 = -4LL;
	int64_t x248 = INT64_MIN;
	static int32_t t55 = 0;

	t55 = ((x245/x246)<=(x247-x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x249 = 1;
	int64_t x250 = -1LL;
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = -2116835;
	int32_t t56 = 25969;

	t56 = ((x249/x250)<=(x251-x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = UINT32_MAX;
	uint32_t x255 = 1689U;
	int32_t x256 = 387;
	volatile int32_t t57 = 3351425;

	t57 = ((x253/x254)<=(x255-x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -1LL;
	uint16_t x258 = 3148U;
	int64_t x259 = -8LL;
	int64_t x260 = INT64_MIN;
	volatile int32_t t58 = -7612139;

	t58 = ((x257/x258)<=(x259-x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 17990U;
	static int64_t x262 = -908398194313591847LL;
	int8_t x263 = INT8_MIN;
	static int8_t x264 = INT8_MIN;
	static int32_t t59 = -941197775;

	t59 = ((x261/x262)<=(x263-x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x265 = -1;
	int16_t x266 = 61;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	int32_t t60 = -1;

	t60 = ((x265/x266)<=(x267-x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x270 = INT16_MIN;
	int32_t x271 = 19741777;
	static int64_t x272 = 0LL;
	int32_t t61 = 503371632;

	t61 = ((x269/x270)<=(x271-x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x275 = -1LL;
	int16_t x276 = INT16_MIN;
	volatile int32_t t62 = -402329097;

	t62 = ((x273/x274)<=(x275-x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x278 = -2263;
	int16_t x279 = -1;
	volatile uint8_t x280 = 121U;
	int32_t t63 = -12796;

	t63 = ((x277/x278)<=(x279-x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x281 = 10847575871364LLU;
	int64_t x282 = -1LL;
	static uint32_t x283 = 34404U;
	volatile uint8_t x284 = 10U;
	static volatile int32_t t64 = -2;

	t64 = ((x281/x282)<=(x283-x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x286 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t65 = 57328813;

	t65 = ((x285/x286)<=(x287-x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x289 = 413527U;
	uint64_t x290 = 54LLU;
	uint8_t x292 = 95U;
	int32_t t66 = 532656091;

	t66 = ((x289/x290)<=(x291-x292));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = 50173068836604118LLU;
	uint8_t x296 = 11U;
	int32_t t67 = -61390024;

	t67 = ((x293/x294)<=(x295-x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x299 = UINT32_MAX;
	int32_t x300 = INT32_MAX;
	int32_t t68 = 227;

	t68 = ((x297/x298)<=(x299-x300));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x301 = UINT64_MAX;
	int32_t x302 = -1;
	int32_t x304 = -25153;
	static volatile int32_t t69 = 3156;

	t69 = ((x301/x302)<=(x303-x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MIN;
	volatile int64_t x306 = -1LL;
	uint64_t x307 = 8293909LLU;
	int8_t x308 = -1;
	volatile int32_t t70 = 253100;

	t70 = ((x305/x306)<=(x307-x308));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x314 = -1;
	int64_t x315 = -1LL;
	volatile int32_t t71 = 0;

	t71 = ((x313/x314)<=(x315-x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x317 = 1LLU;
	uint16_t x318 = 1U;
	int64_t x319 = -1LL;
	int8_t x320 = INT8_MIN;
	int32_t t72 = 5072;

	t72 = ((x317/x318)<=(x319-x320));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x322 = -205551;
	volatile uint64_t x323 = 258444562LLU;
	static int16_t x324 = INT16_MIN;
	int32_t t73 = 1;

	t73 = ((x321/x322)<=(x323-x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = 31;
	static int8_t x326 = 24;
	volatile uint32_t x327 = UINT32_MAX;
	int16_t x328 = 4;

	t74 = ((x325/x326)<=(x327-x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = 128944116LLU;
	uint64_t x330 = 79694238055348455LLU;
	int16_t x331 = 5;
	int32_t t75 = -718695;

	t75 = ((x329/x330)<=(x331-x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = 29;
	volatile uint8_t x336 = UINT8_MAX;

	t76 = ((x333/x334)<=(x335-x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x338 = -1;

	t77 = ((x337/x338)<=(x339-x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x345 = 15U;
	volatile uint64_t x348 = UINT64_MAX;
	volatile int32_t t78 = -17723;

	t78 = ((x345/x346)<=(x347-x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x350 = 6U;
	volatile int8_t x351 = -43;
	volatile int32_t t79 = -1812902;

	t79 = ((x349/x350)<=(x351-x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x359 = 11204190U;
	int8_t x360 = -1;
	static volatile int32_t t80 = -31076955;

	t80 = ((x357/x358)<=(x359-x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = -1;
	int64_t x362 = -52443270729LL;
	static volatile int64_t x363 = INT64_MAX;
	uint64_t x364 = UINT64_MAX;
	int32_t t81 = -1972027;

	t81 = ((x361/x362)<=(x363-x364));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = 22262U;
	static uint32_t x367 = UINT32_MAX;
	static int16_t x368 = -9294;
	int32_t t82 = 122;

	t82 = ((x365/x366)<=(x367-x368));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x369 = 59857374351LLU;
	static int64_t x370 = -11451331402255174LL;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t83 = -1412;

	t83 = ((x369/x370)<=(x371-x372));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x378 = INT16_MIN;
	uint16_t x379 = 1U;
	int8_t x380 = -1;
	int32_t t84 = -411426;

	t84 = ((x377/x378)<=(x379-x380));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x381 = 30474LLU;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	uint16_t x384 = 8U;

	t85 = ((x381/x382)<=(x383-x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MAX;
	static int32_t t86 = 2635938;

	t86 = ((x385/x386)<=(x387-x388));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x389 = 3233U;
	int64_t x390 = INT64_MIN;
	uint16_t x391 = 40U;
	volatile int16_t x392 = 1;

	t87 = ((x389/x390)<=(x391-x392));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = UINT8_MAX;
	int32_t x395 = -1;
	int8_t x396 = INT8_MAX;
	volatile int32_t t88 = -114351112;

	t88 = ((x393/x394)<=(x395-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x397 = -1LL;
	static volatile uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MAX;
	uint16_t x400 = UINT16_MAX;
	int32_t t89 = -45;

	t89 = ((x397/x398)<=(x399-x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x401 = UINT8_MAX;
	int64_t x402 = -3907303443836LL;
	int32_t x403 = INT32_MIN;
	volatile int32_t t90 = -63;

	t90 = ((x401/x402)<=(x403-x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x406 = 13647LLU;
	static int64_t x407 = -1827680LL;

	t91 = ((x405/x406)<=(x407-x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 5540902U;
	static int16_t x412 = INT16_MAX;
	int32_t t92 = -369368758;

	t92 = ((x409/x410)<=(x411-x412));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = INT32_MAX;
	volatile int16_t x414 = 269;
	int32_t x415 = INT32_MIN;
	uint64_t x416 = 964689691584651990LLU;
	static volatile int32_t t93 = 167951646;

	t93 = ((x413/x414)<=(x415-x416));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = -5022066861LL;
	static volatile uint32_t x418 = UINT32_MAX;
	static int8_t x419 = -1;
	int32_t x420 = 3;
	int32_t t94 = -3907833;

	t94 = ((x417/x418)<=(x419-x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MIN;
	static int32_t x422 = INT32_MIN;
	int32_t x423 = 23362268;
	volatile uint32_t x424 = 22423U;
	volatile int32_t t95 = -113201311;

	t95 = ((x421/x422)<=(x423-x424));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x425 = UINT64_MAX;
	volatile int16_t x426 = 339;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = 1U;
	static volatile int32_t t96 = -91;

	t96 = ((x425/x426)<=(x427-x428));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MAX;
	static uint64_t x435 = UINT64_MAX;
	volatile int32_t x436 = 322319103;
	static volatile int32_t t97 = 5234;

	t97 = ((x433/x434)<=(x435-x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = -3535405001690LL;
	int8_t x438 = INT8_MIN;
	static int32_t x439 = -1;
	volatile int16_t x440 = -1;
	volatile int32_t t98 = 3;

	t98 = ((x437/x438)<=(x439-x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = 1U;
	int8_t x442 = 12;
	int64_t x443 = -1LL;
	static int16_t x444 = INT16_MAX;
	int32_t t99 = 836;

	t99 = ((x441/x442)<=(x443-x444));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

