#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x9 = 64U;
volatile int32_t x12 = INT32_MIN;
static int8_t x22 = INT8_MIN;
int16_t x24 = -1;
uint16_t x25 = 92U;
static uint64_t x27 = UINT64_MAX;
int64_t x30 = INT64_MAX;
int16_t x31 = 242;
int32_t t8 = -122762;
int32_t x45 = -123685;
volatile int16_t x49 = INT16_MIN;
static int64_t x51 = INT64_MIN;
int64_t x54 = INT64_MIN;
uint32_t x57 = 43438U;
volatile uint64_t x61 = UINT64_MAX;
int64_t x78 = INT64_MIN;
uint32_t x80 = UINT32_MAX;
int64_t t18 = 5892648895LL;
int64_t x97 = 245LL;
uint16_t x99 = 45U;
uint16_t x100 = 0U;
volatile int64_t x106 = INT64_MAX;
int8_t x111 = -1;
static uint16_t x112 = UINT16_MAX;
static volatile uint64_t t24 = 167702LLU;
static uint64_t x113 = 1294207599110LLU;
int8_t x123 = INT8_MIN;
static int32_t x128 = INT32_MIN;
uint16_t x138 = 306U;
static int64_t x146 = INT64_MAX;
int64_t t32 = -3469487745LL;
uint64_t t33 = 7795367586111LLU;
int16_t x157 = INT16_MIN;
volatile int16_t x166 = INT16_MAX;
uint8_t x172 = UINT8_MAX;
int8_t x174 = -7;
int32_t x178 = INT32_MIN;
uint32_t x181 = 9U;
volatile uint64_t t39 = 75880851872LLU;
int64_t x185 = -1LL;
int32_t x190 = 58321751;
int16_t x194 = INT16_MAX;
volatile uint32_t x199 = 2548U;
int32_t x201 = INT32_MAX;
uint64_t t45 = 231LLU;
static int16_t x216 = INT16_MIN;
int32_t t47 = 109045;
volatile uint64_t t48 = 544535511637203670LLU;
uint64_t x222 = UINT64_MAX;
uint64_t x243 = UINT64_MAX;
static int8_t x247 = 41;
int64_t x257 = 404433455871813LL;
uint64_t x261 = UINT64_MAX;
volatile uint64_t t57 = 288499341LLU;
uint64_t x267 = 11336LLU;
uint32_t x269 = UINT32_MAX;
int16_t x281 = INT16_MIN;
int32_t x282 = -157322663;
static int16_t x283 = -2;
static int32_t x284 = INT32_MIN;
int32_t t62 = INT32_MIN;
static volatile int8_t x290 = INT8_MAX;
int32_t t66 = -19;
int64_t x305 = 68LL;
int64_t x308 = -1479034443499238549LL;
static int16_t x309 = INT16_MIN;
int64_t x320 = INT64_MAX;
volatile uint8_t x324 = 36U;
volatile int32_t t72 = 10;
uint32_t x333 = 15U;
int32_t x334 = -1;
volatile uint64_t x338 = 14LLU;
int8_t x341 = INT8_MIN;
uint16_t x347 = 6569U;
int32_t x351 = -1;
int32_t x353 = INT32_MIN;
int64_t x354 = -264241287933484LL;
static uint16_t x355 = 31U;
volatile int32_t x356 = -1;
int16_t x361 = -1;
volatile int16_t x365 = -14662;
int32_t x366 = INT32_MAX;
volatile int32_t t83 = 231773650;
uint16_t x373 = UINT16_MAX;
static volatile int64_t t86 = 2333346450060610185LL;
int16_t x386 = INT16_MAX;
int64_t x388 = INT64_MIN;
static volatile int64_t t87 = INT64_MIN;
int32_t x392 = 1031788191;
uint32_t x403 = 4631124U;
volatile int16_t x404 = -20;
volatile uint64_t x409 = UINT64_MAX;
int8_t x420 = 0;
int32_t t94 = -498411574;
volatile uint64_t t95 = 5982131017759203239LLU;
volatile uint64_t x426 = 4227376557118490445LLU;
uint8_t x427 = 6U;
int64_t t98 = -146883061649206793LL;
uint64_t x442 = 396104921LLU;
int8_t x443 = INT8_MAX;
int64_t x444 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = 207922700814865LLU;
	volatile uint32_t x3 = 14640U;
	static volatile uint8_t x4 = 4U;
	static uint64_t t0 = 92006LLU;

	t0 = (((x1/x2)/x3)+x4);

	if (t0 != 10LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 2916490508109249618LLU;
	int64_t x6 = INT64_MAX;
	int64_t x7 = -1LL;
	int8_t x8 = 6;
	uint64_t t1 = 179819671568957264LLU;

	t1 = (((x5/x6)/x7)+x8);

	if (t1 != 6LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 152220;
	int16_t x11 = -87;
	uint32_t t2 = 3U;

	t2 = (((x9/x10)/x11)+x12);

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2296U;
	int64_t x14 = -1LL;
	static int64_t x15 = 33571LL;
	volatile int16_t x16 = 0;
	int64_t t3 = -29785742435657LL;

	t3 = (((x13/x14)/x15)+x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = 475777682185LLU;
	uint32_t x20 = 39006U;
	volatile uint64_t t4 = 22LLU;

	t4 = (((x17/x18)/x19)+x20);

	if (t4 != 39006LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	static volatile int32_t x23 = INT32_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = (((x21/x22)/x23)+x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x26 = 6816U;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (((x25/x26)/x27)+x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 9;
	uint32_t x32 = 21U;
	static volatile int64_t t7 = 8536204446482LL;

	t7 = (((x29/x30)/x31)+x32);

	if (t7 != 21LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MIN;
	volatile uint8_t x35 = 81U;
	static int16_t x36 = -1;

	t8 = (((x33/x34)/x35)+x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint32_t x38 = 490833661U;
	volatile int8_t x39 = 1;
	int32_t x40 = INT32_MIN;
	uint32_t t9 = 81783937U;

	t9 = (((x37/x38)/x39)+x40);

	if (t9 != 2147483656U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x46 = INT64_MAX;
	int8_t x47 = 1;
	static uint64_t x48 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (((x45/x46)/x47)+x48);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x50 = 7746LLU;
	volatile int64_t x52 = INT64_MAX;
	uint64_t t11 = 813334521784LLU;

	t11 = (((x49/x50)/x51)+x52);

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = INT16_MIN;
	int16_t x55 = -9;
	uint64_t x56 = UINT64_MAX;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = (((x53/x54)/x55)+x56);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = -90;
	uint64_t x59 = 472LLU;
	int16_t x60 = INT16_MIN;
	volatile uint64_t t13 = 977494443484LLU;

	t13 = (((x57/x58)/x59)+x60);

	if (t13 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = -3LL;
	uint16_t x63 = 178U;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t14 = 1867127741519LLU;

	t14 = (((x61/x62)/x63)+x64);

	if (t14 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	static uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	static volatile int64_t x68 = INT64_MAX;
	uint64_t t15 = 1490198337LLU;

	t15 = (((x65/x66)/x67)+x68);

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = INT32_MIN;
	uint32_t x70 = 3U;
	uint64_t x71 = UINT64_MAX;
	uint16_t x72 = 2U;
	uint64_t t16 = 274097520204657720LLU;

	t16 = (((x69/x70)/x71)+x72);

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	volatile int64_t t17 = 39289962136047937LL;

	t17 = (((x77/x78)/x79)+x80);

	if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	uint32_t x86 = 157155700U;
	int64_t x87 = -6254LL;
	volatile int16_t x88 = INT16_MIN;

	t18 = (((x85/x86)/x87)+x88);

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	volatile int32_t x90 = INT32_MIN;
	uint8_t x91 = 25U;
	int32_t x92 = 14;
	volatile int32_t t19 = -10103;

	t19 = (((x89/x90)/x91)+x92);

	if (t19 != 14) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	volatile uint32_t x94 = 178515652U;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 12U;
	volatile uint64_t t20 = 2599573456144966072LLU;

	t20 = (((x93/x94)/x95)+x96);

	if (t20 != 12LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x98 = 280824205U;
	volatile int64_t t21 = -912579370823LL;

	t21 = (((x97/x98)/x99)+x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = -7LL;
	uint64_t x102 = 43720700LLU;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = -36384;
	static volatile uint64_t t22 = 166021955625616LLU;

	t22 = (((x101/x102)/x103)+x104);

	if (t22 != 18446744073709515330LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MIN;
	static int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;
	int64_t t23 = INT64_MIN;

	t23 = (((x105/x106)/x107)+x108);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = 746547608756622LLU;
	int8_t x110 = -5;

	t24 = (((x109/x110)/x111)+x112);

	if (t24 != 65535LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x114 = -913544631027525LL;
	int8_t x115 = INT8_MIN;
	int32_t x116 = 422528367;
	static uint64_t t25 = 85984393LLU;

	t25 = (((x113/x114)/x115)+x116);

	if (t25 != 422528367LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x121 = -242317624LL;
	uint8_t x122 = 4U;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t26 = 337767795311LLU;

	t26 = (((x121/x122)/x123)+x124);

	if (t26 != 473275LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -61958LL;
	int32_t x126 = INT32_MIN;
	int64_t x127 = -20732LL;
	int64_t t27 = -259554742707740LL;

	t27 = (((x125/x126)/x127)+x128);

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	int8_t x130 = -1;
	uint16_t x131 = 59U;
	int16_t x132 = INT16_MIN;
	volatile int32_t t28 = 513;

	t28 = (((x129/x130)/x131)+x132);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MAX;
	uint32_t x134 = 118582322U;
	int16_t x135 = INT16_MIN;
	volatile int16_t x136 = -1;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (((x133/x134)/x135)+x136);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int64_t x139 = 2952086LL;
	int32_t x140 = -1;
	static uint64_t t30 = 32466LLU;

	t30 = (((x137/x138)/x139)+x140);

	if (t30 != 20420637258LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MAX;
	uint64_t x142 = 3086296412745LLU;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 123301280U;
	volatile uint64_t t31 = 17515819589510954LLU;

	t31 = (((x141/x142)/x143)+x144);

	if (t31 != 123301280LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 20817U;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = 15469U;

	t32 = (((x145/x146)/x147)+x148);

	if (t32 != 15469LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x153 = INT16_MIN;
	static uint32_t x154 = 1U;
	uint64_t x155 = 221219LLU;
	int8_t x156 = -1;

	t33 = (((x153/x154)/x155)+x156);

	if (t33 != 19413LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = -1;
	static uint32_t x159 = 4U;
	static int64_t x160 = -14LL;
	static volatile int64_t t34 = -1424147544603698001LL;

	t34 = (((x157/x158)/x159)+x160);

	if (t34 != 8178LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x165 = INT32_MIN;
	int64_t x167 = -1338158463LL;
	int64_t x168 = -1LL;
	int64_t t35 = -23015363745160LL;

	t35 = (((x165/x166)/x167)+x168);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = -1;
	uint32_t x170 = 1833398403U;
	uint16_t x171 = UINT16_MAX;
	volatile uint32_t t36 = 460U;

	t36 = (((x169/x170)/x171)+x172);

	if (t36 != 255U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x175 = -1;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t37 = -6090;

	t37 = (((x173/x174)/x175)+x176);

	if (t37 != -32786) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x177 = -336345842552044578LL;
	static uint8_t x179 = 4U;
	int8_t x180 = INT8_MIN;
	static int64_t t38 = -7765102876647LL;

	t38 = (((x177/x178)/x179)+x180);

	if (t38 != 39155681LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = -1LL;
	volatile int8_t x184 = -6;

	t39 = (((x181/x182)/x183)+x184);

	if (t39 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x186 = 8135250377106147LLU;
	int16_t x187 = INT16_MAX;
	volatile uint32_t x188 = UINT32_MAX;
	volatile uint64_t t40 = 73082454282928LLU;

	t40 = (((x185/x186)/x187)+x188);

	if (t40 != 4294967295LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MIN;
	uint32_t x191 = 125U;
	uint32_t x192 = 610663670U;
	uint32_t t41 = 45847585U;

	t41 = (((x189/x190)/x191)+x192);

	if (t41 != 610663670U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MAX;
	static int64_t x195 = -2462079627442198964LL;
	uint16_t x196 = 31U;
	volatile int64_t t42 = 37964200LL;

	t42 = (((x193/x194)/x195)+x196);

	if (t42 != 31LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = INT32_MIN;
	static uint16_t x198 = UINT16_MAX;
	int32_t x200 = INT32_MAX;
	static uint32_t t43 = 15541385U;

	t43 = (((x197/x198)/x199)+x200);

	if (t43 != 2149169257U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x202 = 626139248296359LLU;
	int64_t x203 = -1LL;
	uint16_t x204 = 573U;
	volatile uint64_t t44 = 4395156542293LLU;

	t44 = (((x201/x202)/x203)+x204);

	if (t44 != 573LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = -1;
	uint64_t x206 = 148576608LLU;
	static int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MIN;

	t45 = (((x205/x206)/x207)+x208);

	if (t45 != 9223372036858564877LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MAX;
	static int64_t x210 = INT64_MIN;
	volatile int8_t x211 = 1;
	int64_t x212 = 26564483775378LL;
	volatile int64_t t46 = 10LL;

	t46 = (((x209/x210)/x211)+x212);

	if (t46 != 26564483775378LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x213 = 301858288;
	uint8_t x214 = 12U;
	volatile int8_t x215 = -15;

	t47 = (((x213/x214)/x215)+x216);

	if (t47 != -1709758) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -24;
	volatile uint64_t x218 = UINT64_MAX;
	int32_t x219 = -2;
	volatile int16_t x220 = INT16_MIN;

	t48 = (((x217/x218)/x219)+x220);

	if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -1;
	int32_t x223 = -446;
	int64_t x224 = INT64_MIN;
	static volatile uint64_t t49 = 33123121888911LLU;

	t49 = (((x221/x222)/x223)+x224);

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = -25;
	static volatile int64_t x230 = INT64_MIN;
	int8_t x231 = -1;
	int64_t x232 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = (((x229/x230)/x231)+x232);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x233 = 7;
	uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	static int16_t x236 = -34;
	int32_t t51 = -6257530;

	t51 = (((x233/x234)/x235)+x236);

	if (t51 != -34) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = INT8_MAX;
	uint64_t x242 = 127867563248LLU;
	uint8_t x244 = 0U;
	static volatile uint64_t t52 = 2562196624948633LLU;

	t52 = (((x241/x242)/x243)+x244);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x245 = INT8_MIN;
	int32_t x246 = 207942;
	uint64_t x248 = 691017236LLU;
	volatile uint64_t t53 = 2632715195LLU;

	t53 = (((x245/x246)/x247)+x248);

	if (t53 != 691017236LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = -40;
	static uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = 16U;
	int32_t x252 = INT32_MAX;
	uint32_t t54 = 30307509U;

	t54 = (((x249/x250)/x251)+x252);

	if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = -456;
	int32_t x254 = INT32_MAX;
	static uint64_t x255 = 41485590785LLU;
	static int8_t x256 = 0;
	volatile uint64_t t55 = 124600874LLU;

	t55 = (((x253/x254)/x255)+x256);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x258 = -1;
	static volatile uint16_t x259 = 438U;
	int8_t x260 = -1;
	volatile int64_t t56 = -2096293602LL;

	t56 = (((x257/x258)/x259)+x260);

	if (t56 != -923364054502LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x262 = 12;
	static uint16_t x263 = 31234U;
	volatile uint16_t x264 = 9U;

	t57 = (((x261/x262)/x263)+x264);

	if (t57 != 49216516386290LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MIN;
	volatile int32_t x266 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	static volatile uint64_t t58 = 50379LLU;

	t58 = (((x265/x266)/x267)+x268);

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x270 = INT64_MAX;
	static volatile int32_t x271 = 29;
	int16_t x272 = INT16_MAX;
	static volatile int64_t t59 = 389201694748LL;

	t59 = (((x269/x270)/x271)+x272);

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = 452U;
	static int8_t x274 = INT8_MIN;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;
	static int32_t t60 = 0;

	t60 = (((x273/x274)/x275)+x276);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x277 = 0U;
	int8_t x278 = -1;
	int32_t x279 = INT32_MAX;
	volatile int16_t x280 = -12501;
	volatile int32_t t61 = -775375;

	t61 = (((x277/x278)/x279)+x280);

	if (t61 != -12501) { NG(); } else { ; }
	
}

void f62(void) {


	t62 = (((x281/x282)/x283)+x284);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = -6;
	uint64_t x287 = 7887LLU;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = (((x285/x286)/x287)+x288);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MIN;
	int64_t x291 = -1LL;
	int16_t x292 = -13942;
	volatile int64_t t64 = 19911208695LL;

	t64 = (((x289/x290)/x291)+x292);

	if (t64 != -13941LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MAX;
	uint16_t x295 = 7U;
	int8_t x296 = -2;
	volatile int64_t t65 = 92LL;

	t65 = (((x293/x294)/x295)+x296);

	if (t65 != -10374996666878265LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = 1;
	volatile int16_t x298 = -1;
	static volatile int8_t x299 = INT8_MAX;
	uint8_t x300 = UINT8_MAX;

	t66 = (((x297/x298)/x299)+x300);

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = 116;
	volatile int64_t x302 = INT64_MAX;
	int32_t x303 = -1;
	int64_t x304 = INT64_MIN;
	volatile int64_t t67 = INT64_MIN;

	t67 = (((x301/x302)/x303)+x304);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x306 = INT16_MAX;
	int32_t x307 = -1;
	int64_t t68 = -215LL;

	t68 = (((x305/x306)/x307)+x308);

	if (t68 != -1479034443499238549LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x310 = -1;
	int32_t x311 = -1;
	static int8_t x312 = -1;
	int32_t t69 = 443;

	t69 = (((x309/x310)/x311)+x312);

	if (t69 != -32769) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = 43365456590714791LL;
	static int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	volatile int64_t t70 = 15LL;

	t70 = (((x313/x314)/x315)+x316);

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x317 = -1;
	uint16_t x318 = 10442U;
	volatile int8_t x319 = -1;
	volatile int64_t t71 = INT64_MAX;

	t71 = (((x317/x318)/x319)+x320);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = -1;
	volatile int16_t x322 = -1;
	volatile int8_t x323 = INT8_MAX;

	t72 = (((x321/x322)/x323)+x324);

	if (t72 != 36) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = -25291LL;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MAX;
	int64_t t73 = 100LL;

	t73 = (((x325/x326)/x327)+x328);

	if (t73 != -2849139774414LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x329 = UINT8_MAX;
	volatile int32_t x330 = INT32_MIN;
	volatile int64_t x331 = INT64_MAX;
	int8_t x332 = INT8_MAX;
	volatile int64_t t74 = 118561924LL;

	t74 = (((x329/x330)/x331)+x332);

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MAX;
	static uint32_t t75 = 60761938U;

	t75 = (((x333/x334)/x335)+x336);

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = -1;
	int8_t x339 = INT8_MAX;
	uint8_t x340 = 63U;
	uint64_t t76 = 370293665391512LLU;

	t76 = (((x337/x338)/x339)+x340);

	if (t76 != 10374996666878326LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x342 = 7179U;
	int32_t x343 = -5772;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (((x341/x342)/x343)+x344);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x345 = INT16_MIN;
	uint16_t x346 = 127U;
	int64_t x348 = -24LL;
	int64_t t78 = 1015046839LL;

	t78 = (((x345/x346)/x347)+x348);

	if (t78 != -24LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = 32840U;
	int64_t x350 = -60383848LL;
	uint16_t x352 = 111U;
	volatile int64_t t79 = 25853675LL;

	t79 = (((x349/x350)/x351)+x352);

	if (t79 != 111LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t t80 = 44634105LL;

	t80 = (((x353/x354)/x355)+x356);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x357 = 4U;
	static int64_t x358 = 2304342557LL;
	static int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	static int64_t t81 = 676107573575167733LL;

	t81 = (((x357/x358)/x359)+x360);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = INT64_MAX;
	uint32_t x364 = UINT32_MAX;
	int64_t t82 = -14421772224LL;

	t82 = (((x361/x362)/x363)+x364);

	if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x367 = 255U;
	uint8_t x368 = 17U;

	t83 = (((x365/x366)/x367)+x368);

	if (t83 != 17) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x369 = -1;
	int64_t x370 = INT64_MIN;
	int8_t x371 = INT8_MIN;
	uint64_t x372 = 291592860952LLU;
	static volatile uint64_t t84 = 20LLU;

	t84 = (((x369/x370)/x371)+x372);

	if (t84 != 291592860952LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x374 = 5210609U;
	volatile int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;
	static int64_t t85 = INT64_MAX;

	t85 = (((x373/x374)/x375)+x376);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = -1LL;
	volatile int16_t x379 = INT16_MIN;
	static int32_t x380 = INT32_MIN;

	t86 = (((x377/x378)/x379)+x380);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = 1U;
	int32_t x387 = INT32_MAX;

	t87 = (((x385/x386)/x387)+x388);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int16_t x390 = -186;
	int32_t x391 = INT32_MAX;
	volatile uint64_t t88 = 191181981239440797LLU;

	t88 = (((x389/x390)/x391)+x392);

	if (t88 != 1031788191LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = -1LL;
	volatile int8_t x394 = -3;
	int64_t x395 = INT64_MIN;
	uint8_t x396 = UINT8_MAX;
	volatile int64_t t89 = 2686533767LL;

	t89 = (((x393/x394)/x395)+x396);

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = -9LL;
	volatile int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	int16_t x400 = -1;
	volatile int64_t t90 = -60444428178442LL;

	t90 = (((x397/x398)/x399)+x400);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = INT32_MIN;
	volatile int8_t x402 = INT8_MAX;
	uint32_t t91 = 88U;

	t91 = (((x401/x402)/x403)+x404);

	if (t91 != 903U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x410 = -1LL;
	int32_t x411 = INT32_MAX;
	static volatile int32_t x412 = INT32_MAX;
	volatile uint64_t t92 = 18852504LLU;

	t92 = (((x409/x410)/x411)+x412);

	if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = 1;
	volatile int8_t x414 = -39;
	static uint16_t x415 = 46U;
	volatile uint64_t x416 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (((x413/x414)/x415)+x416);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x417 = -13;
	uint8_t x418 = 3U;
	int16_t x419 = 110;

	t94 = (((x417/x418)/x419)+x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x421 = 14LLU;
	volatile int16_t x422 = -6307;
	static int64_t x423 = INT64_MAX;
	int64_t x424 = INT64_MIN;

	t95 = (((x421/x422)/x423)+x424);

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = INT64_MIN;
	int64_t x428 = 2487233968LL;
	volatile uint64_t t96 = 5LLU;

	t96 = (((x425/x426)/x427)+x428);

	if (t96 != 2487233968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 6U;
	volatile int32_t x430 = -55674771;
	int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t97 = -443701;

	t97 = (((x429/x430)/x431)+x432);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = 43967171865196LL;
	static uint8_t x438 = 11U;
	static int64_t x439 = INT64_MIN;
	volatile uint16_t x440 = UINT16_MAX;

	t98 = (((x437/x438)/x439)+x440);

	if (t98 != 65535LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = -1;
	uint64_t t99 = 330415285527263583LLU;

	t99 = (((x441/x442)/x443)+x444);

	if (t99 != 9223372037221471462LLU) { NG(); } else { ; }
	
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

