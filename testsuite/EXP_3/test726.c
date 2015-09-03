#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = INT64_MAX;
uint16_t x13 = 869U;
int16_t x15 = -1;
int32_t x18 = -1;
static int16_t x25 = 597;
int32_t x26 = -464342;
uint16_t x27 = UINT16_MAX;
uint8_t x29 = 0U;
int8_t x33 = 30;
int64_t x34 = INT64_MIN;
volatile uint32_t x35 = 1U;
int64_t x36 = INT64_MAX;
static uint8_t x39 = 81U;
static volatile int16_t x45 = 95;
volatile int64_t x53 = INT64_MAX;
static volatile int64_t x54 = INT64_MAX;
int16_t x64 = INT16_MIN;
uint64_t x66 = 173937731278LLU;
volatile uint64_t t15 = 12020430LLU;
volatile uint32_t t18 = 215131U;
static int16_t x93 = INT16_MIN;
static uint64_t x96 = 159268221273718LLU;
static int16_t x98 = INT16_MIN;
int16_t x106 = INT16_MAX;
int32_t x107 = -50771;
int64_t x109 = 2995LL;
volatile uint32_t x117 = 1912U;
int32_t x126 = 13;
uint32_t x127 = UINT32_MAX;
uint8_t x139 = 6U;
volatile int32_t t32 = -1487777;
int64_t x152 = 7732LL;
int8_t x153 = INT8_MIN;
int32_t x158 = -1932241;
int32_t x159 = INT32_MIN;
uint64_t x164 = 3LLU;
volatile uint64_t t37 = 5LLU;
int8_t x168 = INT8_MIN;
int8_t x173 = INT8_MAX;
volatile int64_t x187 = -1LL;
int8_t x193 = 1;
int32_t t45 = -268;
int8_t x198 = INT8_MIN;
int8_t x202 = 6;
int16_t x204 = INT16_MAX;
int32_t x212 = INT32_MIN;
int8_t x213 = INT8_MIN;
uint32_t x214 = 258U;
int64_t x218 = INT64_MIN;
int16_t x219 = -1;
int32_t x221 = -1;
int16_t x223 = INT16_MIN;
volatile int32_t x227 = INT32_MIN;
static uint64_t t53 = 3245758172056186LLU;
uint64_t t54 = 6LLU;
uint64_t x236 = 116LLU;
static int64_t x243 = INT64_MIN;
int64_t x247 = 5208LL;
int16_t x250 = INT16_MIN;
static int32_t x255 = 18815;
uint8_t x259 = 5U;
volatile int16_t x261 = INT16_MAX;
int16_t x265 = -1;
int8_t x268 = INT8_MIN;
static uint16_t x269 = 232U;
volatile int32_t x270 = INT32_MIN;
volatile uint64_t t66 = 129388814LLU;
uint16_t x281 = 8U;
int64_t t70 = 25339045112089521LL;
static volatile int16_t x305 = INT16_MAX;
uint8_t x308 = UINT8_MAX;
static int8_t x309 = 0;
uint32_t x310 = 141811204U;
int32_t x312 = INT32_MAX;
volatile uint32_t t74 = 508543U;
static uint8_t x316 = 1U;
int64_t x318 = 17LL;
int64_t x322 = -10408099LL;
int64_t x323 = INT64_MIN;
int64_t t78 = -19698077LL;
static int8_t x329 = 3;
volatile int32_t x335 = INT32_MIN;
uint32_t x343 = 1039243U;
volatile int8_t x347 = INT8_MAX;
int64_t x348 = INT64_MIN;
int16_t x357 = INT16_MIN;
static int64_t x368 = INT64_MIN;
int16_t x369 = 1017;
uint8_t x374 = UINT8_MAX;
volatile uint32_t t90 = 0U;
volatile uint64_t x386 = 7183799154726983LLU;
int16_t x390 = -1;
uint32_t x391 = 704251U;
uint32_t x395 = UINT32_MAX;
volatile int32_t t94 = 391967033;
uint8_t x406 = 10U;
volatile int64_t x411 = 113LL;
int64_t t96 = 49LL;
uint32_t x424 = 20703U;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	int16_t x7 = -142;
	int8_t x8 = INT8_MIN;
	static int64_t t0 = -1LL;

	t0 = ((x5/x6)&(x7%x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -956;
	volatile int8_t x10 = 1;
	uint16_t x11 = 1U;
	uint32_t x12 = 40199U;
	static volatile uint32_t t1 = 206U;

	t1 = ((x9/x10)&(x11%x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x14 = UINT64_MAX;
	uint8_t x16 = 21U;
	volatile uint64_t t2 = 22378926LLU;

	t2 = ((x13/x14)&(x15%x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 10290134523100LLU;
	volatile uint32_t x19 = 69294164U;
	int64_t x20 = INT64_MAX;
	uint64_t t3 = 1111658932066374821LLU;

	t3 = ((x17/x18)&(x19%x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = 432597752U;
	int32_t x22 = INT32_MIN;
	uint64_t x23 = UINT64_MAX;
	uint32_t x24 = 2U;
	static volatile uint64_t t4 = 1053LLU;

	t4 = ((x21/x22)&(x23%x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x28 = INT32_MAX;
	volatile int32_t t5 = 94;

	t5 = ((x25/x26)&(x27%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x30 = 14U;
	int8_t x31 = INT8_MAX;
	int32_t x32 = 17681;
	volatile int32_t t6 = -9839;

	t6 = ((x29/x30)&(x31%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t t7 = 1985205505312690182LL;

	t7 = ((x33/x34)&(x35%x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -827691897;
	volatile uint64_t x38 = 1273397782475613LLU;
	static volatile int16_t x40 = -1;
	uint64_t t8 = 4136767390LLU;

	t8 = ((x37/x38)&(x39%x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	static int16_t x42 = INT16_MIN;
	volatile uint16_t x43 = 1980U;
	int32_t x44 = INT32_MAX;
	static int32_t t9 = 83575;

	t9 = ((x41/x42)&(x43%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = INT16_MIN;
	volatile int64_t x47 = INT64_MAX;
	int32_t x48 = INT32_MAX;
	int64_t t10 = -15680149015755951LL;

	t10 = ((x45/x46)&(x47%x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	uint32_t x50 = 1718277393U;
	static int16_t x51 = -1;
	uint64_t x52 = 376800629LLU;
	uint64_t t11 = 12054316393237729LLU;

	t11 = ((x49/x50)&(x51%x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x55 = 419U;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 144386399683LLU;

	t12 = ((x53/x54)&(x55%x56));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 158492LLU;
	int32_t x58 = INT32_MIN;
	int64_t x59 = 15547306280LL;
	volatile uint8_t x60 = 1U;
	volatile uint64_t t13 = 40781430146593LLU;

	t13 = ((x57/x58)&(x59%x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -236227283226LL;
	volatile uint8_t x62 = 1U;
	uint64_t x63 = 5529887LLU;
	uint64_t t14 = 2019996934040070533LLU;

	t14 = ((x61/x62)&(x63%x64));

	if (t14 != 4202502LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x67 = 60U;
	static uint64_t x68 = UINT64_MAX;

	t15 = ((x65/x66)&(x67%x68));

	if (t15 != 44LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 3328;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -59245979767927925LL;
	int16_t x72 = 246;
	int64_t t16 = 1346978293776519LL;

	t16 = ((x69/x70)&(x71%x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = -1;
	int16_t x74 = INT16_MIN;
	uint64_t x75 = 15516227454636LLU;
	int8_t x76 = INT8_MAX;
	volatile uint64_t t17 = 3209LLU;

	t17 = ((x73/x74)&(x75%x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = -10518036;
	static int8_t x78 = INT8_MAX;
	static int16_t x79 = 5668;
	volatile uint32_t x80 = 105890536U;

	t18 = ((x77/x78)&(x79%x80));

	if (t18 != 5156U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	static uint16_t x82 = UINT16_MAX;
	static int64_t x83 = INT64_MAX;
	uint32_t x84 = 28218382U;
	volatile int64_t t19 = 2635396540LL;

	t19 = ((x81/x82)&(x83%x84));

	if (t19 != 65537LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = -50249368LL;
	uint16_t x86 = 1U;
	uint64_t x87 = 11794LLU;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t20 = 528270093LLU;

	t20 = ((x85/x86)&(x87%x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = 3383655427495305LL;
	int16_t x90 = -30;
	int32_t x91 = 92446;
	uint64_t x92 = UINT64_MAX;
	uint64_t t21 = 122690LLU;

	t21 = ((x89/x90)&(x91%x92));

	if (t21 != 24844LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = INT64_MIN;
	uint32_t x95 = UINT32_MAX;
	uint64_t t22 = 809229845139388LLU;

	t22 = ((x93/x94)&(x95%x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x97 = 4466U;
	static int32_t x99 = INT32_MAX;
	int32_t x100 = INT32_MIN;
	uint32_t t23 = 858657U;

	t23 = ((x97/x98)&(x99%x100));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	static int8_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	static uint64_t t24 = 2359LLU;

	t24 = ((x101/x102)&(x103%x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	int8_t x108 = -1;
	volatile int64_t t25 = 3LL;

	t25 = ((x105/x106)&(x107%x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x110 = 195266946U;
	int16_t x111 = INT16_MAX;
	uint32_t x112 = 69U;
	volatile int64_t t26 = 1312371LL;

	t26 = ((x109/x110)&(x111%x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = 7470639LL;
	int32_t x114 = 1850043;
	volatile int32_t x115 = INT32_MIN;
	volatile int64_t x116 = -1LL;
	int64_t t27 = -129089416825372304LL;

	t27 = ((x113/x114)&(x115%x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x118 = 477583921LL;
	static uint64_t x119 = 6LLU;
	uint16_t x120 = 326U;
	static volatile uint64_t t28 = 99LLU;

	t28 = ((x117/x118)&(x119%x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 12382058550735LLU;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t29 = 59LLU;

	t29 = ((x125/x126)&(x127%x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 0;
	uint32_t x130 = 3188542U;
	int16_t x131 = INT16_MIN;
	int8_t x132 = -1;
	volatile uint32_t t30 = 12U;

	t30 = ((x129/x130)&(x131%x132));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 1;
	int32_t x134 = -2361280;
	static int64_t x135 = INT64_MIN;
	int32_t x136 = INT32_MAX;
	int64_t t31 = -2569LL;

	t31 = ((x133/x134)&(x135%x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = -8159;
	volatile int16_t x138 = INT16_MIN;
	volatile int32_t x140 = INT32_MAX;

	t32 = ((x137/x138)&(x139%x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	volatile int64_t x142 = -1LL;
	uint16_t x143 = UINT16_MAX;
	uint64_t x144 = UINT64_MAX;
	uint64_t t33 = 1954LLU;

	t33 = ((x141/x142)&(x143%x144));

	if (t33 != 32768LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MIN;
	volatile uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MAX;
	static int64_t t34 = 63LL;

	t34 = ((x149/x150)&(x151%x152));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x154 = UINT32_MAX;
	uint32_t x155 = 2883U;
	uint64_t x156 = 510787666069LLU;
	volatile uint64_t t35 = 180908656693874980LLU;

	t35 = ((x153/x154)&(x155%x156));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 7427;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t36 = 84330581;

	t36 = ((x157/x158)&(x159%x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MAX;
	int64_t x162 = -1117705LL;
	static int32_t x163 = 7730;

	t37 = ((x161/x162)&(x163%x164));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x165 = INT16_MAX;
	uint8_t x166 = 80U;
	volatile int8_t x167 = -31;
	int32_t t38 = 97;

	t38 = ((x165/x166)&(x167%x168));

	if (t38 != 385) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -1548LL;
	static volatile int32_t x170 = INT32_MIN;
	uint8_t x171 = 17U;
	int8_t x172 = INT8_MIN;
	volatile int64_t t39 = 496876765154611LL;

	t39 = ((x169/x170)&(x171%x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x174 = 4158318503102120LLU;
	int64_t x175 = INT64_MAX;
	int64_t x176 = -952666437278988LL;
	static volatile uint64_t t40 = 39384010176172LLU;

	t40 = ((x173/x174)&(x175%x176));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = -2LL;
	uint32_t x178 = 2942U;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	static int64_t t41 = 1LL;

	t41 = ((x177/x178)&(x179%x180));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MAX;
	int64_t x183 = INT64_MIN;
	int32_t x184 = -519757636;
	volatile int64_t t42 = -6603946562LL;

	t42 = ((x181/x182)&(x183%x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	uint64_t x188 = 507LLU;
	static volatile uint64_t t43 = 16430783626LLU;

	t43 = ((x185/x186)&(x187%x188));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = UINT64_MAX;
	volatile uint32_t x190 = 104U;
	uint64_t x191 = 121921133873095949LLU;
	int8_t x192 = -15;
	static uint64_t t44 = 4521503104592502LLU;

	t44 = ((x189/x190)&(x191%x192));

	if (t44 != 13552718065328132LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x194 = -1;
	volatile uint8_t x195 = UINT8_MAX;
	uint16_t x196 = UINT16_MAX;

	t45 = ((x193/x194)&(x195%x196));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = 30581U;
	volatile int16_t x199 = -8;
	uint8_t x200 = 14U;
	volatile int32_t t46 = -343479083;

	t46 = ((x197/x198)&(x199%x200));

	if (t46 != -240) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 495998894U;
	int16_t x203 = INT16_MAX;
	volatile uint32_t t47 = 69846515U;

	t47 = ((x201/x202)&(x203%x204));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 564U;
	static int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	static volatile uint64_t x208 = UINT64_MAX;
	uint64_t t48 = 785072636293LLU;

	t48 = ((x205/x206)&(x207%x208));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int8_t x210 = INT8_MIN;
	int8_t x211 = -7;
	volatile int32_t t49 = -8525;

	t49 = ((x209/x210)&(x211%x212));

	if (t49 != -7) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x215 = INT16_MIN;
	int8_t x216 = 12;
	static volatile uint32_t t50 = 175U;

	t50 = ((x213/x214)&(x215%x216));

	if (t50 != 16647152U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x217 = INT8_MIN;
	int32_t x220 = 4298081;
	volatile int64_t t51 = -3649LL;

	t51 = ((x217/x218)&(x219%x220));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x222 = UINT32_MAX;
	uint8_t x224 = 4U;
	uint32_t t52 = 84964852U;

	t52 = ((x221/x222)&(x223%x224));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	uint64_t x228 = UINT64_MAX;

	t53 = ((x225/x226)&(x227%x228));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = 106863LLU;
	int8_t x230 = INT8_MAX;
	uint32_t x231 = 27217U;
	uint64_t x232 = UINT64_MAX;

	t54 = ((x229/x230)&(x231%x232));

	if (t54 != 577LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x234 = 23833LL;
	uint64_t x235 = UINT64_MAX;
	volatile uint64_t t55 = 20469114LLU;

	t55 = ((x233/x234)&(x235%x236));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -1;
	int32_t x238 = INT32_MIN;
	volatile int32_t x239 = INT32_MIN;
	int32_t x240 = 1150644;
	int32_t t56 = 7358154;

	t56 = ((x237/x238)&(x239%x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = 10242;
	uint16_t x242 = 14U;
	int32_t x244 = -1;
	int64_t t57 = 185530LL;

	t57 = ((x241/x242)&(x243%x244));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x245 = -15463;
	int8_t x246 = -13;
	volatile uint16_t x248 = 126U;
	int64_t t58 = 1LL;

	t58 = ((x245/x246)&(x247%x248));

	if (t58 != 32LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = 51;
	int16_t x251 = INT16_MAX;
	volatile int16_t x252 = INT16_MIN;
	volatile int32_t t59 = -19089414;

	t59 = ((x249/x250)&(x251%x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int64_t x254 = INT64_MIN;
	int64_t x256 = INT64_MAX;
	volatile int64_t t60 = 31502916318LL;

	t60 = ((x253/x254)&(x255%x256));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	volatile uint16_t x258 = 1377U;
	static int8_t x260 = -1;
	volatile int32_t t61 = -1831;

	t61 = ((x257/x258)&(x259%x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = INT8_MAX;
	int8_t x263 = INT8_MAX;
	int64_t x264 = 1LL;
	volatile int64_t t62 = -5132260088LL;

	t62 = ((x261/x262)&(x263%x264));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MIN;
	static volatile uint32_t t63 = 130466790U;

	t63 = ((x265/x266)&(x267%x268));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x271 = INT8_MAX;
	static int64_t x272 = INT64_MIN;
	volatile int64_t t64 = 35895578925LL;

	t64 = ((x269/x270)&(x271%x272));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 4293964U;
	static volatile int16_t x274 = INT16_MIN;
	int64_t x275 = 10LL;
	int16_t x276 = 1;
	volatile int64_t t65 = -135925257229978LL;

	t65 = ((x273/x274)&(x275%x276));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x277 = 39U;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = 14507;
	int32_t x280 = 19;

	t66 = ((x277/x278)&(x279%x280));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x282 = INT64_MIN;
	int64_t x283 = 38873951957LL;
	volatile uint32_t x284 = 681348827U;
	int64_t t67 = 4037638904706486LL;

	t67 = ((x281/x282)&(x283%x284));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x285 = 321U;
	int16_t x286 = 7703;
	static volatile int64_t x287 = 126558764292LL;
	uint64_t x288 = UINT64_MAX;
	uint64_t t68 = 410254262851607144LLU;

	t68 = ((x285/x286)&(x287%x288));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 236026455413575953LLU;
	volatile uint16_t x290 = 6U;
	int8_t x291 = INT8_MAX;
	volatile int16_t x292 = INT16_MIN;
	static uint64_t t69 = 1834392385LLU;

	t69 = ((x289/x290)&(x291%x292));

	if (t69 != 45LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = -1LL;
	int16_t x294 = -1;
	uint32_t x295 = 238U;
	volatile int16_t x296 = INT16_MIN;

	t70 = ((x293/x294)&(x295%x296));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x297 = INT64_MIN;
	static uint32_t x298 = UINT32_MAX;
	int16_t x299 = INT16_MIN;
	int32_t x300 = -1;
	static int64_t t71 = -167773183605135LL;

	t71 = ((x297/x298)&(x299%x300));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MAX;
	volatile int64_t x303 = -1LL;
	volatile uint64_t x304 = 298488017009066558LLU;
	uint64_t t72 = 27371380916447634LLU;

	t72 = ((x301/x302)&(x303%x304));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x306 = -27457403164483LL;
	int64_t x307 = INT64_MAX;
	volatile int64_t t73 = 3545405LL;

	t73 = ((x305/x306)&(x307%x308));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x311 = 10665826U;

	t74 = ((x309/x310)&(x311%x312));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x313 = 2LLU;
	int8_t x314 = INT8_MIN;
	static int16_t x315 = -1;
	volatile uint64_t t75 = 447386LLU;

	t75 = ((x313/x314)&(x315%x316));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x317 = 780;
	int32_t x319 = INT32_MIN;
	volatile uint64_t x320 = 297527LLU;
	uint64_t t76 = 1LLU;

	t76 = ((x317/x318)&(x319%x320));

	if (t76 != 8LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = 31LLU;
	int32_t x324 = INT32_MAX;
	static volatile uint64_t t77 = 2LLU;

	t77 = ((x321/x322)&(x323%x324));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x325 = 122U;
	volatile int16_t x326 = 4585;
	int32_t x327 = 44813;
	int64_t x328 = INT64_MAX;

	t78 = ((x325/x326)&(x327%x328));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x330 = 44181603U;
	int8_t x331 = INT8_MAX;
	int32_t x332 = 47019;
	volatile uint32_t t79 = 0U;

	t79 = ((x329/x330)&(x331%x332));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x333 = -1;
	uint16_t x334 = 6U;
	int16_t x336 = INT16_MIN;
	static int32_t t80 = 3800;

	t80 = ((x333/x334)&(x335%x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x337 = INT8_MAX;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = -1;
	int8_t x340 = -2;
	volatile int32_t t81 = -1;

	t81 = ((x337/x338)&(x339%x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x341 = -27;
	volatile int64_t x342 = -1LL;
	int64_t x344 = INT64_MAX;
	int64_t t82 = 661962833LL;

	t82 = ((x341/x342)&(x343%x344));

	if (t82 != 11LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = UINT16_MAX;
	volatile int32_t x346 = -509461206;
	volatile int64_t t83 = 1123434568LL;

	t83 = ((x345/x346)&(x347%x348));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x358 = 127724309U;
	uint16_t x359 = UINT16_MAX;
	static uint64_t x360 = 3069LLU;
	volatile uint64_t t84 = 395389877031LLU;

	t84 = ((x357/x358)&(x359%x360));

	if (t84 != 32LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = 2119;
	int64_t x363 = 663210020955LL;
	static uint8_t x364 = 11U;
	int64_t t85 = -632568744833377659LL;

	t85 = ((x361/x362)&(x363%x364));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MAX;
	uint8_t x367 = 3U;
	static int64_t t86 = -31852LL;

	t86 = ((x365/x366)&(x367%x368));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x370 = -5085388;
	int16_t x371 = -1;
	int32_t x372 = INT32_MAX;
	volatile int32_t t87 = 37054019;

	t87 = ((x369/x370)&(x371%x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = -996485758951937910LL;
	uint8_t x375 = 3U;
	uint64_t x376 = 790916LLU;
	volatile uint64_t t88 = 9566256329649847LLU;

	t88 = ((x373/x374)&(x375%x376));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -1;
	uint8_t x378 = 1U;
	static int64_t x379 = INT64_MIN;
	volatile uint16_t x380 = 1137U;
	volatile int64_t t89 = -28848991182554LL;

	t89 = ((x377/x378)&(x379%x380));

	if (t89 != -707LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MAX;
	static int16_t x383 = 2;
	int32_t x384 = -1;

	t90 = ((x381/x382)&(x383%x384));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = 0;
	int8_t x387 = -1;
	uint8_t x388 = 37U;
	static uint64_t t91 = 15643LLU;

	t91 = ((x385/x386)&(x387%x388));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x389 = 30;
	int8_t x392 = -1;
	static volatile uint32_t t92 = 17495538U;

	t92 = ((x389/x390)&(x391%x392));

	if (t92 != 704226U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = 1568U;
	uint16_t x394 = UINT16_MAX;
	uint8_t x396 = 4U;
	volatile uint32_t t93 = 1U;

	t93 = ((x393/x394)&(x395%x396));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = 14;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MAX;
	int16_t x400 = INT16_MAX;

	t94 = ((x397/x398)&(x399%x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x405 = 68618395LLU;
	int32_t x407 = -20930;
	int16_t x408 = INT16_MAX;
	static uint64_t t95 = 2051343LLU;

	t95 = ((x405/x406)&(x407%x408));

	if (t95 != 6857742LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = 978;
	volatile uint32_t x412 = 3880U;

	t96 = ((x409/x410)&(x411%x412));

	if (t96 != 49LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = 121U;
	uint8_t x414 = 1U;
	int64_t x415 = 4LL;
	volatile int16_t x416 = -1;
	int64_t t97 = -1075421LL;

	t97 = ((x413/x414)&(x415%x416));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x417 = INT64_MAX;
	volatile int32_t x418 = INT32_MIN;
	int32_t x419 = -1;
	static int8_t x420 = INT8_MIN;
	static int64_t t98 = 0LL;

	t98 = ((x417/x418)&(x419%x420));

	if (t98 != -4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = 2U;
	int32_t x422 = -1;
	int32_t x423 = INT32_MIN;
	uint32_t t99 = 33U;

	t99 = ((x421/x422)&(x423%x424));

	if (t99 != 2864U) { NG(); } else { ; }
	
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

