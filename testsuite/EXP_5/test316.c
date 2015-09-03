#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
volatile int64_t t2 = 2143LL;
int64_t x14 = 4560274098LL;
int16_t x20 = -1;
int16_t x23 = 62;
uint16_t x25 = 3U;
int16_t x37 = 58;
int32_t x42 = INT32_MIN;
int64_t t10 = 59916265813LL;
int16_t x53 = -1;
static int32_t x54 = INT32_MAX;
uint64_t x55 = UINT64_MAX;
static uint64_t t11 = 760739446655892959LLU;
int16_t x61 = 4;
int8_t x71 = -7;
uint64_t x78 = UINT64_MAX;
int32_t x80 = INT32_MIN;
uint64_t t15 = 50167923628782LLU;
uint32_t x84 = 4876830U;
int8_t x87 = INT8_MAX;
int32_t x88 = INT32_MIN;
uint8_t x95 = 2U;
volatile int64_t x97 = INT64_MIN;
int32_t t21 = 115;
uint8_t x119 = 84U;
int64_t x122 = -1LL;
int32_t x128 = 413991364;
static int16_t x136 = INT16_MIN;
static volatile int8_t x142 = 3;
int64_t x146 = -1LL;
volatile uint64_t t29 = 4390721782397567946LLU;
uint64_t x150 = UINT64_MAX;
static int64_t t31 = -738LL;
int8_t x158 = INT8_MAX;
volatile int16_t x169 = -123;
static int8_t x172 = -3;
uint8_t x174 = 14U;
uint64_t x178 = UINT64_MAX;
uint64_t t36 = 6285LLU;
uint8_t x191 = 1U;
int32_t x196 = 130862;
int16_t x197 = -57;
int8_t x200 = INT8_MIN;
int16_t x201 = -389;
int32_t x207 = INT32_MAX;
int16_t x209 = -1;
static uint16_t x210 = 26U;
static uint16_t x211 = 0U;
uint64_t t44 = 36408739790479LLU;
uint16_t x235 = 1012U;
int16_t x245 = INT16_MIN;
volatile uint64_t t51 = 8714001434LLU;
int8_t x254 = INT8_MAX;
int8_t x256 = 0;
int16_t x268 = -1;
uint32_t x273 = 1507460U;
uint16_t x276 = 28U;
uint16_t x277 = UINT16_MAX;
static volatile int32_t t58 = -17608253;
static int32_t x281 = INT32_MIN;
volatile uint32_t x289 = UINT32_MAX;
int8_t x298 = 3;
uint16_t x312 = 177U;
volatile uint64_t x316 = UINT64_MAX;
int16_t x322 = INT16_MIN;
uint32_t x324 = 15U;
volatile int8_t x330 = INT8_MIN;
static uint8_t x339 = 43U;
static volatile uint64_t t72 = 3917395281092LLU;
uint8_t x342 = UINT8_MAX;
uint64_t x345 = UINT64_MAX;
uint32_t x359 = UINT32_MAX;
int16_t x362 = INT16_MIN;
uint64_t t82 = 140212LLU;
int32_t x388 = 948;
static volatile int64_t t83 = -25189553LL;
static uint8_t x392 = 4U;
uint64_t t85 = 7058040846357736148LLU;
int16_t x397 = 2034;
int8_t x402 = -23;
int64_t x417 = INT64_MIN;
int16_t x419 = INT16_MIN;
uint16_t x421 = UINT16_MAX;
static volatile int16_t x423 = INT16_MIN;
int8_t x428 = -1;
volatile uint16_t x432 = 379U;
uint16_t x434 = UINT16_MAX;
uint64_t x439 = UINT64_MAX;
volatile uint64_t t97 = 4186527638687671399LLU;
static int64_t x449 = INT64_MAX;
int32_t x451 = INT32_MIN;
int64_t t98 = 166325LL;
uint32_t x454 = 103U;


void f0(void) {
	int16_t x1 = 51;
	uint32_t x2 = 60179060U;
	static int32_t x3 = INT32_MAX;
	int8_t x4 = INT8_MIN;
	static uint32_t t0 = 4538U;

	t0 = (x1/((x2-x3)|x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -8503319;
	uint8_t x6 = UINT8_MAX;
	static int32_t x7 = INT32_MAX;
	uint8_t x8 = 34U;
	volatile int32_t t1 = 228816;

	t1 = (x5/((x6-x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	uint32_t x10 = 11471597U;
	int64_t x12 = -4396416461746359LL;

	t2 = (x9/((x10-x11)|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 124U;
	uint64_t x15 = 145387LLU;
	uint64_t x16 = 27900372LLU;
	static volatile uint64_t t3 = 87532200935LLU;

	t3 = (x13/((x14-x15)|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MAX;
	volatile uint64_t t4 = 27855732949516952LLU;

	t4 = (x17/((x18-x19)|x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 2840009U;
	static int8_t x22 = -27;
	uint8_t x24 = 3U;
	static volatile uint32_t t5 = 0U;

	t5 = (x21/((x22-x23)|x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 5751256;
	volatile int16_t x27 = -41;
	uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 16225U;

	t6 = (x25/((x26-x27)|x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = UINT32_MAX;
	static int16_t x34 = INT16_MAX;
	int32_t x35 = INT32_MAX;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t7 = 2U;

	t7 = (x33/((x34-x35)|x36));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -27LL;
	int32_t x39 = INT32_MIN;
	int64_t x40 = 1940164489457247LL;
	static int64_t t8 = 550511979443398LL;

	t8 = (x37/((x38-x39)|x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = 818745239182631454LLU;
	static int8_t x43 = -1;
	int64_t x44 = -1LL;
	uint64_t t9 = 263743272LLU;

	t9 = (x41/((x42-x43)|x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MAX;
	static uint32_t x50 = 89324821U;
	static int16_t x51 = -1;
	static int8_t x52 = 1;

	t10 = (x49/((x50-x51)|x52));

	if (t10 != 103256538631LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x56 = 5405354244734175LLU;

	t11 = (x53/((x54-x55)|x56));

	if (t11 != 3412LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x62 = 101U;
	static uint16_t x63 = 2885U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t12 = 1;

	t12 = (x61/((x62-x63)|x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x65 = UINT16_MAX;
	static int32_t x66 = 118363187;
	int16_t x67 = 0;
	int8_t x68 = -1;
	int32_t t13 = -2252139;

	t13 = (x65/((x66-x67)|x68));

	if (t13 != -65535) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = -3605351512188541607LL;
	static int8_t x70 = INT8_MAX;
	uint32_t x72 = UINT32_MAX;
	int64_t t14 = 1744112LL;

	t14 = (x69/((x70-x71)|x72));

	if (t14 != -839436313LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 0U;
	uint32_t x79 = UINT32_MAX;

	t15 = (x77/((x78-x79)|x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = 47668794816718221LL;
	volatile int8_t x82 = INT8_MIN;
	uint64_t x83 = 24923565104998759LLU;
	uint64_t t16 = 1LLU;

	t16 = (x81/((x82-x83)|x84));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 27U;
	int8_t x86 = INT8_MIN;
	volatile int32_t t17 = -713;

	t17 = (x85/((x86-x87)|x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x89 = 106215878U;
	uint8_t x90 = 114U;
	uint64_t x91 = UINT64_MAX;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t18 = 1217771672724873LLU;

	t18 = (x89/((x90-x91)|x92));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x93 = 2680521U;
	uint16_t x94 = 26U;
	uint8_t x96 = UINT8_MAX;
	uint32_t t19 = 3U;

	t19 = (x93/((x94-x95)|x96));

	if (t19 != 10511U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x98 = 997571LLU;
	int8_t x99 = -1;
	uint16_t x100 = UINT16_MAX;
	volatile uint64_t t20 = 6556189476344480LLU;

	t20 = (x97/((x98-x99)|x100));

	if (t20 != 8796101410824LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x101 = INT32_MIN;
	static int16_t x102 = INT16_MIN;
	int32_t x103 = -1;
	volatile uint16_t x104 = 947U;

	t21 = (x101/((x102-x103)|x104));

	if (t21 != 67486) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x117 = INT16_MIN;
	int32_t x118 = -1;
	volatile uint8_t x120 = 2U;
	int32_t t22 = -247;

	t22 = (x117/((x118-x119)|x120));

	if (t22 != 385) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x121 = 51U;
	int32_t x123 = INT32_MIN;
	int32_t x124 = -11623933;
	volatile int64_t t23 = -3338155LL;

	t23 = (x121/((x122-x123)|x124));

	if (t23 != -51LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 251LLU;
	static int16_t x126 = INT16_MIN;
	volatile int16_t x127 = -1;
	volatile uint64_t t24 = 14193857833821535LLU;

	t24 = (x125/((x126-x127)|x128));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x129 = INT16_MAX;
	int16_t x130 = -256;
	int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t25 = -50564;

	t25 = (x129/((x130-x131)|x132));

	if (t25 != -255) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = 229448;
	volatile int64_t t26 = 2LL;

	t26 = (x133/((x134-x135)|x136));

	if (t26 != -2147483684LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = -5491;
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = -1;
	uint64_t t27 = 21LLU;

	t27 = (x137/((x138-x139)|x140));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x141 = UINT16_MAX;
	uint8_t x143 = 103U;
	int64_t x144 = INT64_MIN;
	volatile int64_t t28 = -1826899364991542839LL;

	t28 = (x141/((x142-x143)|x144));

	if (t28 != -655LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x145 = 4653LLU;
	static int64_t x147 = 2864404227LL;
	static int64_t x148 = 12138973256LL;

	t29 = (x145/((x146-x147)|x148));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x149 = 3890;
	int16_t x151 = INT16_MIN;
	volatile int16_t x152 = INT16_MIN;
	uint64_t t30 = 126477LLU;

	t30 = (x149/((x150-x151)|x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = INT16_MIN;
	static volatile int64_t x154 = -1LL;
	static uint16_t x155 = UINT16_MAX;
	static int16_t x156 = 30;

	t31 = (x153/((x154-x155)|x156));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = 1;
	int8_t x159 = INT8_MIN;
	volatile uint8_t x160 = UINT8_MAX;
	static volatile int32_t t32 = -6450055;

	t32 = (x157/((x158-x159)|x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x165 = INT64_MIN;
	static int8_t x166 = -21;
	uint64_t x167 = 234251591628499LLU;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t33 = 1107169378753113LLU;

	t33 = (x165/((x166-x167)|x168));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x170 = INT8_MIN;
	volatile int16_t x171 = 15;
	volatile int32_t t34 = -986;

	t34 = (x169/((x170-x171)|x172));

	if (t34 != 41) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = INT8_MAX;
	int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MAX;
	volatile int64_t t35 = 2304353455429500196LL;

	t35 = (x173/((x174-x175)|x176));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = 1030208352237LL;
	int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MAX;

	t36 = (x177/((x178-x179)|x180));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x181 = 32189648713448LLU;
	volatile int64_t x182 = -375129232954864394LL;
	static int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t37 = 206LLU;

	t37 = (x181/((x182-x183)|x184));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x185 = 60U;
	int16_t x186 = -1;
	volatile uint8_t x187 = 1U;
	static int64_t x188 = -2431842415289412516LL;
	volatile int64_t t38 = 88342361493592LL;

	t38 = (x185/((x186-x187)|x188));

	if (t38 != -30LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	int8_t x192 = -28;
	volatile int32_t t39 = -7685;

	t39 = (x189/((x190-x191)|x192));

	if (t39 != 64) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = -1;
	static int8_t x194 = -1;
	uint32_t x195 = 1364147U;
	volatile uint32_t t40 = 383U;

	t40 = (x193/((x194-x195)|x196));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x198 = 1U;
	int16_t x199 = INT16_MAX;
	int32_t t41 = 1;

	t41 = (x197/((x198-x199)|x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x202 = INT8_MIN;
	uint32_t x203 = 107U;
	static uint16_t x204 = UINT16_MAX;
	static volatile uint32_t t42 = 3512U;

	t42 = (x201/((x202-x203)|x204));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MIN;
	uint64_t x206 = 381697533764LLU;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t43 = 241760121276010784LLU;

	t43 = (x205/((x206-x207)|x208));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x212 = 49551LLU;

	t44 = (x209/((x210-x211)|x212));

	if (t44 != 372157767742844LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x217 = INT8_MAX;
	int16_t x218 = -6;
	uint64_t x219 = 0LLU;
	int16_t x220 = 418;
	volatile uint64_t t45 = 2046LLU;

	t45 = (x217/((x218-x219)|x220));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x225 = 34U;
	static int64_t x226 = 598101971305842LL;
	uint16_t x227 = 13045U;
	static int64_t x228 = INT64_MAX;
	int64_t t46 = 158934127524LL;

	t46 = (x225/((x226-x227)|x228));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = -1;
	volatile uint32_t x230 = 587U;
	int64_t x231 = -1LL;
	volatile int64_t x232 = INT64_MIN;
	volatile int64_t t47 = 39LL;

	t47 = (x229/((x230-x231)|x232));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = -1;
	int8_t x234 = INT8_MIN;
	static int32_t x236 = 0;
	static int32_t t48 = 32619058;

	t48 = (x233/((x234-x235)|x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = -1LL;
	static volatile int16_t x238 = -1;
	int64_t x239 = INT64_MIN;
	int8_t x240 = 12;
	volatile int64_t t49 = -1779333798897LL;

	t49 = (x237/((x238-x239)|x240));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x246 = UINT32_MAX;
	volatile uint8_t x247 = 4U;
	volatile uint64_t x248 = UINT64_MAX;
	uint64_t t50 = 2630LLU;

	t50 = (x245/((x246-x247)|x248));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int8_t x250 = -1;
	volatile uint64_t x251 = 13842LLU;
	int16_t x252 = -423;

	t51 = (x249/((x250-x251)|x252));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int32_t x255 = INT32_MAX;
	static uint64_t t52 = 20LLU;

	t52 = (x253/((x254-x255)|x256));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 5LLU;
	uint64_t x258 = 58332851933612316LLU;
	uint16_t x259 = 266U;
	static int8_t x260 = 14;
	volatile uint64_t t53 = 2283LLU;

	t53 = (x257/((x258-x259)|x260));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -1LL;
	uint32_t x262 = 873U;
	uint32_t x263 = UINT32_MAX;
	static int8_t x264 = INT8_MAX;
	volatile int64_t t54 = 0LL;

	t54 = (x261/((x262-x263)|x264));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x265 = 6;
	int64_t x266 = -1LL;
	volatile int16_t x267 = 9;
	int64_t t55 = -887LL;

	t55 = (x265/((x266-x267)|x268));

	if (t55 != -6LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = 1664;
	volatile int64_t x270 = INT64_MIN;
	int16_t x271 = -765;
	int32_t x272 = INT32_MIN;
	volatile int64_t t56 = 14LL;

	t56 = (x269/((x270-x271)|x272));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x274 = -1;
	int64_t x275 = -1LL;
	int64_t t57 = -830074899LL;

	t57 = (x273/((x274-x275)|x276));

	if (t57 != 53837LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x278 = 65569754;
	int16_t x279 = INT16_MIN;
	static int8_t x280 = INT8_MIN;

	t58 = (x277/((x278-x279)|x280));

	if (t58 != -1724) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x282 = INT32_MIN;
	uint64_t x283 = 2154779246649767554LLU;
	uint16_t x284 = 80U;
	uint64_t t59 = 2215624LLU;

	t59 = (x281/((x282-x283)|x284));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = UINT64_MAX;
	static int8_t x286 = 15;
	static int8_t x287 = -23;
	static int8_t x288 = -8;
	uint64_t t60 = 1508055857488LLU;

	t60 = (x285/((x286-x287)|x288));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x290 = -264;
	static volatile uint32_t x291 = UINT32_MAX;
	volatile uint32_t x292 = 337U;
	static volatile uint32_t t61 = 933U;

	t61 = (x289/((x290-x291)|x292));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = -1LL;
	uint64_t x294 = UINT64_MAX;
	static int16_t x295 = INT16_MIN;
	int16_t x296 = 36;
	static volatile uint64_t t62 = 114189245058893628LLU;

	t62 = (x293/((x294-x295)|x296));

	if (t62 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x297 = 354427444U;
	uint32_t x299 = 614365804U;
	int64_t x300 = INT64_MAX;
	volatile int64_t t63 = 40LL;

	t63 = (x297/((x298-x299)|x300));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x305 = 2368821U;
	static volatile uint16_t x306 = 613U;
	int8_t x307 = 54;
	static uint16_t x308 = UINT16_MAX;
	volatile uint32_t t64 = 176U;

	t64 = (x305/((x306-x307)|x308));

	if (t64 != 36U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	volatile int32_t x311 = INT32_MIN;
	int64_t t65 = -3109923235111344LL;

	t65 = (x309/((x310-x311)|x312));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = INT8_MIN;
	static int32_t x314 = INT32_MIN;
	uint32_t x315 = 75U;
	volatile uint64_t t66 = 26853239762LLU;

	t66 = (x313/((x314-x315)|x316));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x317 = -1166922LL;
	int16_t x318 = INT16_MAX;
	volatile int8_t x319 = -3;
	int16_t x320 = -1;
	int64_t t67 = 9858819395325756LL;

	t67 = (x317/((x318-x319)|x320));

	if (t67 != 1166922LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x321 = 3091U;
	volatile int16_t x323 = 0;
	uint32_t t68 = 1904987106U;

	t68 = (x321/((x322-x323)|x324));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x325 = UINT16_MAX;
	volatile int8_t x326 = -33;
	static int16_t x327 = INT16_MAX;
	uint8_t x328 = 9U;
	int32_t t69 = -243664183;

	t69 = (x325/((x326-x327)|x328));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x329 = 444626LLU;
	int8_t x331 = -1;
	uint16_t x332 = UINT16_MAX;
	uint64_t t70 = 93930310558157689LLU;

	t70 = (x329/((x330-x331)|x332));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = 10516U;
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MIN;
	uint8_t x336 = UINT8_MAX;
	int32_t t71 = -157845;

	t71 = (x333/((x334-x335)|x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = 35U;
	static int32_t x338 = INT32_MAX;
	volatile uint64_t x340 = 75LLU;

	t72 = (x337/((x338-x339)|x340));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = -1LL;
	static int8_t x343 = INT8_MIN;
	static int64_t x344 = -1LL;
	volatile int64_t t73 = -63189876667331935LL;

	t73 = (x341/((x342-x343)|x344));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x346 = -5267;
	int16_t x347 = 1;
	int8_t x348 = INT8_MAX;
	static volatile uint64_t t74 = 1580787025350LLU;

	t74 = (x345/((x346-x347)|x348));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = -13;
	int32_t x350 = -5;
	int64_t x351 = -1LL;
	static int64_t x352 = INT64_MAX;
	int64_t t75 = 1535030472663607LL;

	t75 = (x349/((x350-x351)|x352));

	if (t75 != 13LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -1LL;
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = -1;
	static int32_t x356 = 3;
	volatile int64_t t76 = -1728467360LL;

	t76 = (x353/((x354-x355)|x356));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	int16_t x360 = 1;
	static volatile int64_t t77 = -8610877LL;

	t77 = (x357/((x358-x359)|x360));

	if (t77 != -2147500031LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = 13U;
	int16_t x363 = INT16_MIN;
	uint8_t x364 = 30U;
	static int32_t t78 = -966697;

	t78 = (x361/((x362-x363)|x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x365 = UINT8_MAX;
	static int8_t x366 = INT8_MIN;
	static volatile int16_t x367 = 6;
	int8_t x368 = INT8_MAX;
	volatile int32_t t79 = -618819653;

	t79 = (x365/((x366-x367)|x368));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int8_t x370 = 21;
	int32_t x371 = INT32_MAX;
	static uint32_t x372 = 66320722U;
	static volatile uint32_t t80 = 266742656U;

	t80 = (x369/((x370-x371)|x372));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = INT64_MAX;
	static int8_t x378 = 5;
	uint32_t x379 = 2871565U;
	static int8_t x380 = 23;
	int64_t t81 = -224110551950130LL;

	t81 = (x377/((x378-x379)|x380));

	if (t81 != 2148920385LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = 188;
	volatile int32_t x382 = INT32_MIN;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = -10611;

	t82 = (x381/((x382-x383)|x384));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MAX;
	int64_t x387 = INT64_MAX;

	t83 = (x385/((x386-x387)|x388));

	if (t83 != -34LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x389 = -1;
	volatile int16_t x390 = INT16_MIN;
	static uint16_t x391 = 4U;
	int32_t t84 = -42;

	t84 = (x389/((x390-x391)|x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x393 = 332426808645053LLU;
	volatile int16_t x394 = INT16_MAX;
	uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 154105679161LLU;

	t85 = (x393/((x394-x395)|x396));

	if (t85 != 2157LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x398 = 3847833468LLU;
	int8_t x399 = -1;
	static volatile uint16_t x400 = 370U;
	volatile uint64_t t86 = 3500LLU;

	t86 = (x397/((x398-x399)|x400));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = INT64_MIN;
	uint64_t x403 = 1522981083700LLU;
	int32_t x404 = INT32_MIN;
	uint64_t t87 = 0LLU;

	t87 = (x401/((x402-x403)|x404));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = -67389317895254798LL;
	uint32_t x406 = 27U;
	int64_t x407 = -48608447LL;
	uint16_t x408 = UINT16_MAX;
	int64_t t88 = -28702LL;

	t88 = (x405/((x406-x407)|x408));

	if (t88 != -1385821304LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = INT16_MAX;
	int16_t x410 = INT16_MAX;
	volatile uint32_t x411 = UINT32_MAX;
	static int32_t x412 = -1;
	uint32_t t89 = 1791459U;

	t89 = (x409/((x410-x411)|x412));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = 1400;
	uint8_t x415 = 1U;
	volatile uint8_t x416 = 1U;
	volatile int32_t t90 = 389725;

	t90 = (x413/((x414-x415)|x416));

	if (t90 != -23) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x418 = UINT64_MAX;
	int64_t x420 = -1LL;
	volatile uint64_t t91 = 200811946962361264LLU;

	t91 = (x417/((x418-x419)|x420));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x422 = INT8_MAX;
	volatile int32_t x424 = -1;
	volatile int32_t t92 = -138;

	t92 = (x421/((x422-x423)|x424));

	if (t92 != -65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = UINT64_MAX;
	uint64_t x426 = 1301621538057019LLU;
	static int32_t x427 = -2489;
	uint64_t t93 = 85416014LLU;

	t93 = (x425/((x426-x427)|x428));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x429 = 79474991U;
	uint8_t x430 = UINT8_MAX;
	volatile int8_t x431 = 1;
	uint32_t t94 = 442978502U;

	t94 = (x429/((x430-x431)|x432));

	if (t94 != 155528U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x433 = 226534306063245LLU;
	int16_t x435 = INT16_MIN;
	static int32_t x436 = INT32_MAX;
	uint64_t t95 = 27359LLU;

	t95 = (x433/((x434-x435)|x436));

	if (t95 != 105488LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MIN;
	int64_t x440 = -128111863LL;
	static volatile uint64_t t96 = 24211180428293826LLU;

	t96 = (x437/((x438-x439)|x440));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x441 = 13352179139710129LL;
	static int8_t x442 = INT8_MIN;
	int32_t x443 = -28175716;
	volatile uint64_t x444 = 14370LLU;

	t97 = (x441/((x442-x443)|x444));

	if (t97 != 473822850LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x450 = 29870668U;
	int16_t x452 = INT16_MIN;

	t98 = (x449/((x450-x451)|x452));

	if (t98 != 2147490522LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x453 = 1U;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = UINT8_MAX;
	uint32_t t99 = 1U;

	t99 = (x453/((x454-x455)|x456));

	if (t99 != 0U) { NG(); } else { ; }
	
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

