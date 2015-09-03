#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x18 = -1;
uint16_t x20 = UINT16_MAX;
int16_t x23 = INT16_MIN;
volatile int8_t x24 = -1;
static volatile uint64_t x26 = UINT64_MAX;
volatile int32_t t7 = 93122;
int32_t x49 = INT32_MAX;
static int16_t x51 = -1;
uint64_t x57 = 124243663LLU;
int16_t x58 = -1;
int8_t x65 = INT8_MIN;
volatile int32_t x75 = INT32_MIN;
uint32_t x80 = 30003012U;
volatile int8_t x87 = INT8_MAX;
volatile int32_t t17 = -246518;
uint64_t x89 = 37065455LLU;
uint8_t x93 = UINT8_MAX;
volatile uint32_t x106 = UINT32_MAX;
uint64_t x108 = UINT64_MAX;
volatile uint64_t t21 = 865862019162LLU;
volatile int64_t t22 = -21223708LL;
uint64_t t25 = 25586276LLU;
int16_t x130 = INT16_MIN;
volatile int64_t t27 = -888980060LL;
int16_t x137 = INT16_MIN;
volatile int64_t x146 = 227275649678212080LL;
uint8_t x158 = UINT8_MAX;
int64_t x159 = INT64_MAX;
static uint64_t x162 = UINT64_MAX;
int64_t x171 = INT64_MIN;
int32_t x176 = 3;
int32_t x181 = -344574;
uint32_t t40 = 503378281U;
uint8_t x190 = 4U;
uint8_t x191 = UINT8_MAX;
int32_t x196 = -1;
int8_t x200 = INT8_MAX;
int16_t x211 = INT16_MAX;
static volatile int64_t t46 = -4479331LL;
volatile int64_t t48 = 14743924610132977LL;
static int16_t x229 = -3650;
static int32_t x236 = -1;
volatile int32_t x243 = -1;
int64_t x244 = 831LL;
static uint64_t x245 = UINT64_MAX;
volatile int32_t x248 = INT32_MIN;
uint8_t x255 = 15U;
volatile int64_t x260 = -14LL;
uint64_t x267 = 163445LLU;
int64_t t58 = -3910301723458LL;
int32_t x278 = -1;
int8_t x282 = -7;
volatile int32_t t62 = -6335;
static int32_t t63 = -7814;
uint8_t x291 = 1U;
uint8_t x294 = 1U;
static uint64_t x296 = UINT64_MAX;
int64_t t68 = -8090701321836LL;
volatile int32_t t69 = -1812;
int32_t x327 = -1;
uint8_t x328 = 51U;
volatile int32_t t73 = -18;
uint64_t x338 = UINT64_MAX;
int32_t x340 = INT32_MIN;
volatile int32_t t75 = -14860631;
int32_t x350 = INT32_MAX;
volatile uint32_t x355 = 1255065U;
uint64_t x356 = 5578559401LLU;
volatile uint64_t t77 = 418103177LLU;
int64_t x373 = -1LL;
int16_t x374 = -132;
uint16_t x376 = UINT16_MAX;
int64_t x380 = 452205938108LL;
uint16_t x386 = 36U;
static uint16_t x390 = 9U;
static int16_t x395 = 9097;
int32_t t85 = 1;
static uint8_t x399 = 102U;
volatile int64_t t86 = 4LL;
static uint64_t x413 = UINT64_MAX;
int16_t x420 = INT16_MAX;
int64_t x422 = INT64_MIN;
static int64_t t92 = 0LL;
int16_t x437 = INT16_MAX;
int16_t x439 = -6;
static volatile int64_t t95 = 627332718847LL;
uint16_t x452 = 1U;
int16_t x456 = INT16_MIN;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	int64_t x2 = -4047836801LL;
	static uint8_t x3 = 86U;
	int32_t x4 = -100;
	static int32_t t0 = -6;

	t0 = ((x1==(x2-x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 15U;
	volatile int64_t x6 = 93949347326LL;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 62683684;

	t1 = ((x5==(x6-x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = 0LL;
	int32_t x11 = INT32_MIN;
	static int64_t x12 = INT64_MIN;
	static volatile int64_t t2 = -7LL;

	t2 = ((x9==(x10-x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = -1LL;
	int8_t x15 = -56;
	uint16_t x16 = 200U;
	int32_t t3 = 1;

	t3 = ((x13==(x14-x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x19 = 0;
	int32_t t4 = -19;

	t4 = ((x17==(x18-x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile uint8_t x22 = 0U;
	static volatile int32_t t5 = -331526;

	t5 = ((x21==(x22-x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 10;
	uint16_t x27 = UINT16_MAX;
	static int32_t x28 = -1;
	volatile int32_t t6 = 2;

	t6 = ((x25==(x26-x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint64_t x30 = 3320462078878850170LLU;
	static int8_t x31 = -1;
	int8_t x32 = -1;

	t7 = ((x29==(x30-x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 6U;
	volatile int16_t x34 = INT16_MIN;
	static int16_t x35 = -45;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 6507777686157LLU;

	t8 = ((x33==(x34-x35))&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = INT64_MIN;
	volatile int16_t x46 = -1;
	int32_t x47 = INT32_MAX;
	static int64_t x48 = INT64_MIN;
	int64_t t9 = -231693797240LL;

	t9 = ((x45==(x46-x47))&x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x50 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t10 = 6627857;

	t10 = ((x49==(x50-x51))&x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x59 = UINT32_MAX;
	int8_t x60 = INT8_MAX;
	volatile int32_t t11 = 0;

	t11 = ((x57==(x58-x59))&x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = -31;
	static int16_t x62 = INT16_MIN;
	int8_t x63 = -2;
	int8_t x64 = INT8_MIN;
	volatile int32_t t12 = -4579;

	t12 = ((x61==(x62-x63))&x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = UINT32_MAX;
	static int64_t x67 = -1LL;
	int64_t x68 = 46LL;
	static volatile int64_t t13 = 216LL;

	t13 = ((x65==(x66-x67))&x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MAX;
	int64_t x74 = -1LL;
	volatile int16_t x76 = INT16_MIN;
	static volatile int32_t t14 = -720928494;

	t14 = ((x73==(x74-x75))&x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x77 = INT16_MAX;
	int32_t x78 = -1;
	uint32_t x79 = 3671U;
	volatile uint32_t t15 = 27309858U;

	t15 = ((x77==(x78-x79))&x80);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = -1;
	int32_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	uint64_t t16 = 0LLU;

	t16 = ((x81==(x82-x83))&x84);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	volatile int8_t x88 = -32;

	t17 = ((x85==(x86-x87))&x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x90 = INT8_MIN;
	static uint32_t x91 = 7588968U;
	int64_t x92 = INT64_MIN;
	int64_t t18 = -6938271LL;

	t18 = ((x89==(x90-x91))&x92);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x94 = 48U;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = 644732;
	volatile int32_t t19 = -22257;

	t19 = ((x93==(x94-x95))&x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 10U;
	static volatile int16_t x98 = -1;
	static int64_t x99 = INT64_MIN;
	uint32_t x100 = 10331828U;
	uint32_t t20 = 15071135U;

	t20 = ((x97==(x98-x99))&x100);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MAX;
	int16_t x107 = INT16_MIN;

	t21 = ((x105==(x106-x107))&x108);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x113 = INT32_MAX;
	static int16_t x114 = -1;
	int32_t x115 = -1;
	int64_t x116 = INT64_MAX;

	t22 = ((x113==(x114-x115))&x116);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	volatile int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	int32_t x120 = -1;
	volatile int32_t t23 = 428;

	t23 = ((x117==(x118-x119))&x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = -114;
	volatile uint32_t x122 = 1131852989U;
	uint8_t x123 = 6U;
	int64_t x124 = INT64_MAX;
	volatile int64_t t24 = -514863876482760765LL;

	t24 = ((x121==(x122-x123))&x124);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = -27;
	int64_t x126 = INT64_MAX;
	int32_t x127 = 495796458;
	volatile uint64_t x128 = UINT64_MAX;

	t25 = ((x125==(x126-x127))&x128);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x129 = INT32_MIN;
	static volatile int64_t x131 = -215514987806328LL;
	uint64_t x132 = 107758615565LLU;
	uint64_t t26 = 3585340028LLU;

	t26 = ((x129==(x130-x131))&x132);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x133 = INT64_MAX;
	uint16_t x134 = UINT16_MAX;
	int16_t x135 = -1;
	static int64_t x136 = -1LL;

	t27 = ((x133==(x134-x135))&x136);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x138 = INT16_MIN;
	static uint64_t x139 = 906245581628863LLU;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t28 = -35;

	t28 = ((x137==(x138-x139))&x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = 0;
	volatile int16_t x143 = -1;
	int32_t x144 = INT32_MIN;
	static int32_t t29 = -309637;

	t29 = ((x141==(x142-x143))&x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x145 = INT8_MIN;
	volatile int32_t x147 = INT32_MIN;
	uint16_t x148 = 80U;
	int32_t t30 = -486529;

	t30 = ((x145==(x146-x147))&x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 1099251408U;
	static int32_t x150 = -15;
	int32_t x151 = 110553947;
	int32_t x152 = 380310;
	volatile int32_t t31 = 16315903;

	t31 = ((x149==(x150-x151))&x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x153 = -245;
	int64_t x154 = -1LL;
	int16_t x155 = 343;
	volatile int8_t x156 = INT8_MIN;
	int32_t t32 = 72047;

	t32 = ((x153==(x154-x155))&x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = 297513335350LL;
	static int32_t x160 = INT32_MAX;
	int32_t t33 = 27651;

	t33 = ((x157==(x158-x159))&x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = 3LL;
	volatile uint32_t x163 = 1787797U;
	static volatile uint32_t x164 = UINT32_MAX;
	uint32_t t34 = 30415383U;

	t34 = ((x161==(x162-x163))&x164);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -1;
	int16_t x166 = -863;
	int16_t x167 = -11;
	int64_t x168 = -55LL;
	int64_t t35 = -3828819LL;

	t35 = ((x165==(x166-x167))&x168);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	int64_t x172 = -385496774866LL;
	volatile int64_t t36 = -124147773898LL;

	t36 = ((x169==(x170-x171))&x172);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -1LL;
	static int8_t x174 = INT8_MIN;
	uint64_t x175 = 3223791163998548566LLU;
	int32_t t37 = -3832;

	t37 = ((x173==(x174-x175))&x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = -5;
	uint16_t x178 = 22239U;
	volatile int32_t x179 = -14045;
	int16_t x180 = -1;
	int32_t t38 = 5466554;

	t38 = ((x177==(x178-x179))&x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x182 = -1;
	static uint8_t x183 = 1U;
	int8_t x184 = INT8_MIN;
	int32_t t39 = 0;

	t39 = ((x181==(x182-x183))&x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x185 = 187210538U;
	uint32_t x186 = UINT32_MAX;
	static uint32_t x187 = UINT32_MAX;
	static uint32_t x188 = 1616U;

	t40 = ((x185==(x186-x187))&x188);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x189 = INT16_MIN;
	uint64_t x192 = 49074898443302LLU;
	volatile uint64_t t41 = 63660638623LLU;

	t41 = ((x189==(x190-x191))&x192);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x193 = INT32_MIN;
	uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MAX;
	static volatile int32_t t42 = -496720772;

	t42 = ((x193==(x194-x195))&x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = 21285139U;
	int16_t x198 = -1387;
	int8_t x199 = -1;
	int32_t t43 = -7672853;

	t43 = ((x197==(x198-x199))&x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = 0LL;
	uint32_t x202 = 1506926957U;
	static int32_t x203 = INT32_MAX;
	int32_t x204 = 9211175;
	static volatile int32_t t44 = 64223287;

	t44 = ((x201==(x202-x203))&x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = -6451312594LL;
	int32_t x212 = INT32_MIN;
	static int32_t t45 = 0;

	t45 = ((x209==(x210-x211))&x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -1LL;
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = UINT64_MAX;
	int64_t x220 = -1LL;

	t46 = ((x217==(x218-x219))&x220);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x221 = 879726044LLU;
	int16_t x222 = -5422;
	int32_t x223 = INT32_MIN;
	volatile int32_t x224 = -1;
	int32_t t47 = -108;

	t47 = ((x221==(x222-x223))&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = -3;
	uint8_t x227 = 106U;
	volatile int64_t x228 = -11375LL;

	t48 = ((x225==(x226-x227))&x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t49 = 2257821310919757LLU;

	t49 = ((x229==(x230-x231))&x232);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x233 = -1LL;
	static volatile uint16_t x234 = 0U;
	volatile int16_t x235 = -1;
	int32_t t50 = 66081891;

	t50 = ((x233==(x234-x235))&x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x237 = 740633318LL;
	int8_t x238 = INT8_MAX;
	int16_t x239 = -1;
	static int16_t x240 = -1;
	volatile int32_t t51 = 84;

	t51 = ((x237==(x238-x239))&x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = -45;
	int16_t x242 = INT16_MIN;
	int64_t t52 = 1020080728517573LL;

	t52 = ((x241==(x242-x243))&x244);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x246 = 1290U;
	int32_t x247 = INT32_MAX;
	int32_t t53 = 23056925;

	t53 = ((x245==(x246-x247))&x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MAX;
	volatile uint32_t x251 = 4U;
	volatile int16_t x252 = INT16_MAX;
	static int32_t t54 = -483632739;

	t54 = ((x249==(x250-x251))&x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x253 = 0;
	uint32_t x254 = UINT32_MAX;
	uint8_t x256 = 1U;
	static volatile int32_t t55 = 32369002;

	t55 = ((x253==(x254-x255))&x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = -1LL;
	static uint8_t x259 = UINT8_MAX;
	int64_t t56 = -3362LL;

	t56 = ((x257==(x258-x259))&x260);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x261 = UINT8_MAX;
	int8_t x262 = -1;
	static volatile int8_t x263 = INT8_MAX;
	volatile uint64_t x264 = 17231144606LLU;
	uint64_t t57 = 85768208561157401LLU;

	t57 = ((x261==(x262-x263))&x264);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MIN;
	int64_t x266 = -490648LL;
	static int64_t x268 = -7312208183668LL;

	t58 = ((x265==(x266-x267))&x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x269 = 5889166U;
	int16_t x270 = 8073;
	uint32_t x271 = 1U;
	uint64_t x272 = 3057420230973LLU;
	uint64_t t59 = 206LLU;

	t59 = ((x269==(x270-x271))&x272);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = 1688;
	int32_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	static volatile uint8_t x276 = 125U;
	volatile int32_t t60 = 1754;

	t60 = ((x273==(x274-x275))&x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x277 = INT32_MAX;
	int32_t x279 = 67;
	volatile uint64_t x280 = 474LLU;
	uint64_t t61 = 1026146924283145930LLU;

	t61 = ((x277==(x278-x279))&x280);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x281 = 401873592948816LL;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 34U;

	t62 = ((x281==(x282-x283))&x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x285 = -3;
	int8_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	int8_t x288 = INT8_MIN;

	t63 = ((x285==(x286-x287))&x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x289 = INT16_MIN;
	int64_t x290 = -65639502LL;
	uint8_t x292 = 0U;
	static int32_t t64 = 1808;

	t64 = ((x289==(x290-x291))&x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = -10151095;
	static uint16_t x295 = UINT16_MAX;
	static volatile uint64_t t65 = 7LLU;

	t65 = ((x293==(x294-x295))&x296);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 13U;
	int8_t x302 = INT8_MIN;
	static uint8_t x303 = 10U;
	int8_t x304 = -3;
	int32_t t66 = -76;

	t66 = ((x301==(x302-x303))&x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = -1;
	int64_t x306 = 5280995485471LL;
	uint16_t x307 = 110U;
	uint64_t x308 = 12LLU;
	uint64_t t67 = 15683LLU;

	t67 = ((x305==(x306-x307))&x308);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = -28;
	uint32_t x311 = 31709000U;
	int64_t x312 = -1LL;

	t68 = ((x309==(x310-x311))&x312);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = -1;
	uint32_t x315 = 40053U;
	int8_t x316 = -6;

	t69 = ((x313==(x314-x315))&x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	static volatile int32_t x318 = 6782;
	uint8_t x319 = UINT8_MAX;
	int32_t x320 = INT32_MAX;
	volatile int32_t t70 = 11955;

	t70 = ((x317==(x318-x319))&x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = 2U;
	int64_t x322 = -8LL;
	int16_t x323 = INT16_MIN;
	volatile int32_t x324 = 7195;
	int32_t t71 = -8757502;

	t71 = ((x321==(x322-x323))&x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = INT16_MIN;
	volatile int64_t x326 = INT64_MIN;
	volatile int32_t t72 = -561;

	t72 = ((x325==(x326-x327))&x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = UINT32_MAX;
	static int8_t x331 = INT8_MAX;
	int8_t x332 = INT8_MIN;

	t73 = ((x329==(x330-x331))&x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x333 = 0U;
	uint64_t x334 = 18085938102334580LLU;
	static int64_t x335 = -1LL;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t74 = 0;

	t74 = ((x333==(x334-x335))&x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x337 = 19258U;
	volatile uint64_t x339 = UINT64_MAX;

	t75 = ((x337==(x338-x339))&x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x349 = INT64_MIN;
	volatile int8_t x351 = INT8_MAX;
	uint32_t x352 = 6326962U;
	volatile uint32_t t76 = 856524U;

	t76 = ((x349==(x350-x351))&x352);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x354 = 2U;

	t77 = ((x353==(x354-x355))&x356);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = -1;
	uint32_t x362 = 666U;
	int32_t x363 = INT32_MIN;
	int8_t x364 = 2;
	volatile int32_t t78 = 3;

	t78 = ((x361==(x362-x363))&x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = 248809687U;
	int16_t x366 = 1;
	int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t79 = -1;

	t79 = ((x365==(x366-x367))&x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x375 = 0U;
	static volatile int32_t t80 = -167838;

	t80 = ((x373==(x374-x375))&x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	volatile int64_t t81 = 326282068LL;

	t81 = ((x377==(x378-x379))&x380);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MIN;
	static volatile int16_t x382 = -14417;
	static uint32_t x383 = UINT32_MAX;
	uint8_t x384 = 7U;
	static volatile int32_t t82 = -5;

	t82 = ((x381==(x382-x383))&x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x385 = 23630690LLU;
	volatile uint64_t x387 = UINT64_MAX;
	int64_t x388 = 0LL;
	static int64_t t83 = -42211521LL;

	t83 = ((x385==(x386-x387))&x388);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = -73;
	volatile uint16_t x391 = UINT16_MAX;
	int16_t x392 = -2;
	int32_t t84 = 1;

	t84 = ((x389==(x390-x391))&x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = -1;
	int16_t x396 = -449;

	t85 = ((x393==(x394-x395))&x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -1LL;
	static int64_t x398 = 322928478295606951LL;
	int64_t x400 = -1LL;

	t86 = ((x397==(x398-x399))&x400);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = 63828LLU;
	int16_t x406 = INT16_MAX;
	volatile int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	volatile int32_t t87 = -60354986;

	t87 = ((x405==(x406-x407))&x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = 1;
	int64_t x410 = 256373542LL;
	static int8_t x411 = INT8_MIN;
	uint32_t x412 = UINT32_MAX;
	uint32_t t88 = 3U;

	t88 = ((x409==(x410-x411))&x412);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x414 = -1;
	int64_t x415 = INT64_MAX;
	int16_t x416 = 8333;
	int32_t t89 = -5077744;

	t89 = ((x413==(x414-x415))&x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x417 = 4U;
	int32_t x418 = -1;
	int8_t x419 = INT8_MIN;
	static int32_t t90 = -5670;

	t90 = ((x417==(x418-x419))&x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x421 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	int8_t x424 = -1;
	int32_t t91 = -1;

	t91 = ((x421==(x422-x423))&x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x425 = 63U;
	static uint16_t x426 = UINT16_MAX;
	volatile int8_t x427 = -5;
	int64_t x428 = -1LL;

	t92 = ((x425==(x426-x427))&x428);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = UINT64_MAX;
	uint16_t x430 = UINT16_MAX;
	int32_t x431 = -41715771;
	int64_t x432 = -15130LL;
	int64_t t93 = -492170991LL;

	t93 = ((x429==(x430-x431))&x432);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = INT64_MIN;
	volatile uint64_t x434 = 9141524749292124713LLU;
	int32_t x435 = INT32_MIN;
	volatile uint32_t x436 = 249U;
	uint32_t t94 = 105432827U;

	t94 = ((x433==(x434-x435))&x436);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x438 = INT64_MIN;
	int64_t x440 = INT64_MAX;

	t95 = ((x437==(x438-x439))&x440);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x441 = -321;
	static int64_t x442 = -1LL;
	int16_t x443 = 706;
	int16_t x444 = INT16_MAX;
	int32_t t96 = 7;

	t96 = ((x441==(x442-x443))&x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = 1877;
	uint32_t x446 = 399230243U;
	volatile int16_t x447 = -786;
	int64_t x448 = INT64_MAX;
	volatile int64_t t97 = -376580179342192083LL;

	t97 = ((x445==(x446-x447))&x448);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x449 = UINT16_MAX;
	int8_t x450 = 1;
	volatile int16_t x451 = INT16_MIN;
	static int32_t t98 = 533895;

	t98 = ((x449==(x450-x451))&x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = INT32_MIN;
	int32_t x454 = INT32_MIN;
	uint64_t x455 = 2497595017065772LLU;
	int32_t t99 = -44688;

	t99 = ((x453==(x454-x455))&x456);

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

