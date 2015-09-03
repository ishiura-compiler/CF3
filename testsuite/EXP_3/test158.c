#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 15665063848204852LLU;
volatile int16_t x7 = -1;
volatile int32_t x9 = 9586679;
static volatile int8_t x29 = INT8_MAX;
int8_t x32 = INT8_MAX;
int8_t x36 = INT8_MAX;
volatile uint32_t t7 = 897U;
static int32_t x41 = -20413;
static volatile uint32_t x48 = UINT32_MAX;
uint8_t x50 = UINT8_MAX;
int32_t x61 = -130315282;
volatile int64_t t14 = 4366125233081095484LL;
uint32_t x65 = UINT32_MAX;
uint16_t x67 = 509U;
int8_t x68 = INT8_MAX;
static uint8_t x73 = 7U;
volatile uint64_t t17 = 864048358753227592LLU;
volatile int8_t x78 = -3;
volatile uint64_t x79 = 28573LLU;
uint8_t x91 = UINT8_MAX;
int8_t x92 = INT8_MAX;
volatile int64_t t22 = 859827LL;
int16_t x109 = INT16_MAX;
volatile uint32_t t26 = 1396293U;
volatile int16_t x129 = INT16_MAX;
volatile uint32_t x131 = 453060699U;
volatile int32_t x138 = -1;
volatile int64_t x147 = -20717LL;
volatile int64_t t33 = 120LL;
uint16_t x151 = 2671U;
int16_t x152 = -1;
uint16_t x157 = UINT16_MAX;
int16_t x160 = INT16_MAX;
uint64_t x167 = 2087294LLU;
uint32_t x174 = 1267709U;
int64_t x181 = INT64_MAX;
volatile int32_t x187 = 7;
static int32_t t43 = 58184;
int16_t x200 = INT16_MIN;
int8_t x205 = INT8_MIN;
volatile uint16_t x219 = 2659U;
uint32_t x250 = UINT32_MAX;
static volatile uint32_t t51 = 715U;
static uint64_t x254 = 12140436891LLU;
int32_t x259 = -1;
int64_t t54 = 826252LL;
volatile int8_t x269 = INT8_MIN;
volatile int16_t x270 = INT16_MAX;
volatile int64_t x275 = 560439869845LL;
int32_t x301 = INT32_MIN;
int32_t x302 = -1;
static uint16_t x309 = UINT16_MAX;
static volatile int32_t x310 = INT32_MAX;
int64_t x311 = 2384LL;
volatile int8_t x321 = INT8_MAX;
int32_t t65 = 11123;
int32_t x325 = -1;
int16_t x334 = -1;
volatile int8_t x340 = 0;
volatile uint8_t x342 = UINT8_MAX;
uint32_t x344 = 472U;
int8_t x346 = INT8_MAX;
static uint32_t x348 = 26864U;
int64_t x349 = INT64_MIN;
uint64_t x350 = UINT64_MAX;
uint64_t x351 = 118130099921801087LLU;
uint64_t x361 = UINT64_MAX;
uint32_t x362 = 4158594U;
volatile int32_t x365 = INT32_MIN;
static int32_t x366 = INT32_MIN;
uint8_t x398 = UINT8_MAX;
uint8_t x399 = UINT8_MAX;
static int16_t x404 = -1276;
uint16_t x411 = 2U;
static volatile int32_t t83 = 4319406;
static uint8_t x426 = 0U;
volatile int32_t x429 = -1;
int64_t x436 = INT64_MIN;
int8_t x450 = INT8_MIN;
int64_t x453 = -1LL;
int16_t x477 = INT16_MIN;
uint32_t x481 = UINT32_MAX;
volatile uint8_t x482 = UINT8_MAX;
volatile int32_t t99 = -387910;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int16_t x3 = 1;
	int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = 11808886LLU;

	t0 = ((x1^x2)-(x3+x4));

	if (t0 != 18431079009861346612LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 556570209429076LLU;
	int64_t x6 = -1LL;
	uint16_t x8 = 737U;
	static uint64_t t1 = 65187054174LLU;

	t1 = ((x5^x6)-(x7+x8));

	if (t1 != 18446187503500121803LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	int8_t x11 = INT8_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = -33;

	t2 = ((x9^x10)-(x11+x12));

	if (t2 != 2137896842) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	int8_t x18 = -1;
	static int64_t x19 = -1LL;
	int16_t x20 = INT16_MIN;
	static volatile int64_t t3 = 22588428LL;

	t3 = ((x17^x18)-(x19+x20));

	if (t3 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 761981LLU;
	int16_t x22 = -1;
	uint16_t x23 = 1U;
	int64_t x24 = 6LL;
	volatile uint64_t t4 = 609321LLU;

	t4 = ((x21^x22)-(x23+x24));

	if (t4 != 18446744073708789627LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 0U;
	int64_t x26 = -2LL;
	uint16_t x27 = 667U;
	volatile int64_t x28 = INT64_MIN;
	volatile int64_t t5 = -13622137LL;

	t5 = ((x25^x26)-(x27+x28));

	if (t5 != 9223372036854775139LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = 221346827LLU;
	uint16_t x31 = 13U;
	volatile uint64_t t6 = 1157851782981477263LLU;

	t6 = ((x29^x30)-(x31+x32));

	if (t6 != 221346792LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 3U;
	uint32_t x34 = UINT32_MAX;
	static int32_t x35 = INT32_MIN;

	t7 = ((x33^x34)-(x35+x36));

	if (t7 != 2147483517U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	int8_t x38 = 5;
	static uint64_t x39 = 2172330397134LLU;
	static uint32_t x40 = 5U;
	uint64_t t8 = 15561292LLU;

	t8 = ((x37^x38)-(x39+x40));

	if (t8 != 9223369864524378674LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x42 = 181573LL;
	volatile int16_t x43 = 0;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t9 = 55437645LLU;

	t9 = ((x41^x42)-(x43+x44));

	if (t9 != 18446744073709384967LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 35010611U;
	static int64_t x46 = INT64_MAX;
	volatile int16_t x47 = INT16_MIN;
	int64_t t10 = 31889849629497LL;

	t10 = ((x45^x46)-(x47+x48));

	if (t10 != 9223372032524830669LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	volatile int32_t x51 = INT32_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t11 = 1U;

	t11 = ((x49^x50)-(x51+x52));

	if (t11 != 2147451137U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static uint64_t x54 = UINT64_MAX;
	uint64_t x55 = 451648659485LLU;
	int8_t x56 = INT8_MIN;
	volatile uint64_t t12 = 183LLU;

	t12 = ((x53^x54)-(x55+x56));

	if (t12 != 18446743622060892259LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	static int16_t x58 = 6069;
	volatile int8_t x59 = -1;
	int16_t x60 = 171;
	int32_t t13 = -906832;

	t13 = ((x57^x58)-(x59+x60));

	if (t13 != -26869) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = -1LL;
	uint8_t x63 = UINT8_MAX;
	static int8_t x64 = -1;

	t14 = ((x61^x62)-(x63+x64));

	if (t14 != 130315027LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x66 = -1;
	static volatile uint32_t t15 = 1668275753U;

	t15 = ((x65^x66)-(x67+x68));

	if (t15 != 4294966660U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = -44714649430749358LL;
	int8_t x70 = 1;
	int32_t x71 = -1;
	uint32_t x72 = 118U;
	volatile int64_t t16 = -471014716LL;

	t16 = ((x69^x70)-(x71+x72));

	if (t16 != -44714649430749474LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x74 = 1113231254537743237LL;
	int64_t x75 = INT64_MAX;
	static volatile uint64_t x76 = 18LLU;

	t17 = ((x73^x74)-(x75+x76));

	if (t17 != 10336603291392519025LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint8_t x80 = UINT8_MAX;
	uint64_t t18 = 215317529379636923LLU;

	t18 = ((x77^x78)-(x79+x80));

	if (t18 != 18446744073709522790LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x81 = INT8_MIN;
	uint64_t x82 = 89369LLU;
	volatile uint64_t x83 = 4LLU;
	volatile int8_t x84 = INT8_MIN;
	volatile uint64_t t19 = 7764490925LLU;

	t19 = ((x81^x82)-(x83+x84));

	if (t19 != 18446744073709462293LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 7;
	static int64_t x86 = INT64_MAX;
	uint16_t x87 = 2U;
	uint32_t x88 = UINT32_MAX;
	int64_t t20 = -5069LL;

	t20 = ((x85^x86)-(x87+x88));

	if (t20 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = 1;
	int32_t t21 = -30;

	t21 = ((x89^x90)-(x91+x92));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = 63;
	uint16_t x99 = 61U;
	int32_t x100 = -19634;

	t22 = ((x97^x98)-(x99+x100));

	if (t22 != -9223372036854756172LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -13905083724086955LL;
	volatile uint8_t x102 = UINT8_MAX;
	static uint8_t x103 = 61U;
	volatile uint8_t x104 = 2U;
	volatile int64_t t23 = -3971914471156472LL;

	t23 = ((x101^x102)-(x103+x104));

	if (t23 != -13905083724086933LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = 0;
	uint16_t x106 = UINT16_MAX;
	int8_t x107 = 61;
	static int16_t x108 = INT16_MIN;
	int32_t t24 = 479518;

	t24 = ((x105^x106)-(x107+x108));

	if (t24 != 98242) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x110 = -1;
	static int32_t x111 = INT32_MIN;
	uint16_t x112 = 4U;
	int32_t t25 = 15;

	t25 = ((x109^x110)-(x111+x112));

	if (t25 != 2147450876) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MAX;
	static int32_t x114 = 16151;
	static uint8_t x115 = UINT8_MAX;
	uint32_t x116 = UINT32_MAX;

	t26 = ((x113^x114)-(x115+x116));

	if (t26 != 2147467242U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 1U;
	volatile uint8_t x118 = 55U;
	uint16_t x119 = 1U;
	int32_t x120 = -13;
	int32_t t27 = 63;

	t27 = ((x117^x118)-(x119+x120));

	if (t27 != 66) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 3213U;
	int16_t x126 = -1;
	int64_t x127 = -1LL;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t28 = 3319590983LL;

	t28 = ((x125^x126)-(x127+x128));

	if (t28 != -3212LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x130 = 5U;
	uint64_t x132 = 106292066045058LLU;
	uint64_t t29 = 4079432153LLU;

	t29 = ((x129^x130)-(x131+x132));

	if (t29 != 18446637781190478621LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = 1030545LL;
	int64_t x134 = INT64_MAX;
	uint64_t x135 = 470293119LLU;
	static uint16_t x136 = UINT16_MAX;
	static volatile uint64_t t30 = 8LLU;

	t30 = ((x133^x134)-(x135+x136));

	if (t30 != 9223372036383386608LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	int16_t x139 = -1;
	uint16_t x140 = UINT16_MAX;
	volatile int64_t t31 = 44087377623154LL;

	t31 = ((x137^x138)-(x139+x140));

	if (t31 != -65534LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 49800788U;
	uint16_t x142 = 3907U;
	uint32_t x143 = 10320U;
	int32_t x144 = -47;
	uint32_t t32 = 956507435U;

	t32 = ((x141^x142)-(x143+x144));

	if (t32 != 49791222U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MIN;
	int32_t x148 = 180515606;

	t33 = ((x145^x146)-(x147+x148));

	if (t33 != 9223372036674248151LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	uint32_t x150 = 9U;
	uint64_t t34 = 108LLU;

	t34 = ((x149^x150)-(x151+x152));

	if (t34 != 18446744073709548936LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = -1;
	static uint64_t x159 = 111LLU;
	uint64_t t35 = 121LLU;

	t35 = ((x157^x158)-(x159+x160));

	if (t35 != 18446744073709453202LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = -43LL;
	int64_t x162 = INT64_MIN;
	int32_t x163 = -1;
	static volatile uint64_t x164 = 7517853118LLU;
	volatile uint64_t t36 = 1646000LLU;

	t36 = ((x161^x162)-(x163+x164));

	if (t36 != 9223372029336922648LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 7408U;
	int32_t x166 = INT32_MAX;
	static uint32_t x168 = 1015U;
	volatile uint64_t t37 = 1304054511673236LLU;

	t37 = ((x165^x166)-(x167+x168));

	if (t37 != 2145387930LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = -3;
	int64_t x171 = -4048886LL;
	volatile int64_t x172 = -1LL;
	static int64_t t38 = 41805LL;

	t38 = ((x169^x170)-(x171+x172));

	if (t38 != -9223372036850726919LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MAX;
	int64_t t39 = 122022166LL;

	t39 = ((x173^x174)-(x175+x176));

	if (t39 != -9223372036853454845LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -1023459701978LL;
	uint64_t x178 = 25839LLU;
	volatile uint8_t x179 = UINT8_MAX;
	volatile int8_t x180 = 6;
	static uint64_t t40 = 136085238LLU;

	t40 = ((x177^x178)-(x179+x180));

	if (t40 != 18446743050249842372LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x182 = INT64_MIN;
	volatile uint16_t x183 = 19818U;
	volatile int64_t x184 = -64LL;
	static volatile int64_t t41 = 308783933246160LL;

	t41 = ((x181^x182)-(x183+x184));

	if (t41 != -19755LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x185 = -2071231690LL;
	int32_t x186 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	int64_t t42 = -5401108LL;

	t42 = ((x185^x186)-(x187+x188));

	if (t42 != 9223372036778523842LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x189 = INT8_MAX;
	static uint16_t x190 = 2U;
	static uint8_t x191 = UINT8_MAX;
	static int8_t x192 = -11;

	t43 = ((x189^x190)-(x191+x192));

	if (t43 != -119) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 40;
	static int32_t x198 = -28212149;
	uint64_t x199 = UINT64_MAX;
	uint64_t t44 = 118339314LLU;

	t44 = ((x197^x198)-(x199+x200));

	if (t44 != 18446744073681372260LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x206 = INT8_MIN;
	int8_t x207 = 5;
	static int16_t x208 = INT16_MAX;
	int32_t t45 = 24548;

	t45 = ((x205^x206)-(x207+x208));

	if (t45 != -32772) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	int8_t x210 = 2;
	uint16_t x211 = 51U;
	int64_t x212 = -1LL;
	static int64_t t46 = -1962304017669LL;

	t46 = ((x209^x210)-(x211+x212));

	if (t46 != -53LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x217 = 61U;
	volatile int64_t x218 = INT64_MAX;
	static int16_t x220 = INT16_MAX;
	int64_t t47 = 3180LL;

	t47 = ((x217^x218)-(x219+x220));

	if (t47 != 9223372036854740320LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 42U;
	int8_t x223 = 0;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t48 = -4555;

	t48 = ((x221^x222)-(x223+x224));

	if (t48 != -32598) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -1;
	static int32_t x230 = 934185895;
	static uint8_t x231 = 26U;
	uint32_t x232 = 0U;
	volatile uint32_t t49 = 1203347U;

	t49 = ((x229^x230)-(x231+x232));

	if (t49 != 3360781374U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x241 = -6;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = -111;
	uint8_t x244 = UINT8_MAX;
	int32_t t50 = -1;

	t50 = ((x241^x242)-(x243+x244));

	if (t50 != -65675) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x249 = 105U;
	int16_t x251 = -1;
	int8_t x252 = INT8_MIN;

	t51 = ((x249^x250)-(x251+x252));

	if (t51 != 23U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x253 = UINT8_MAX;
	static volatile int8_t x255 = INT8_MAX;
	int16_t x256 = -13;
	uint64_t t52 = 5306529LLU;

	t52 = ((x253^x254)-(x255+x256));

	if (t52 != 12140436722LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 8861449LLU;
	volatile int16_t x258 = INT16_MIN;
	volatile int32_t x260 = -151343;
	static uint64_t t53 = 12236543065LLU;

	t53 = ((x257^x258)-(x259+x260));

	if (t53 != 18446744073700836921LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = -48505;
	int64_t x262 = 127368662338291988LL;
	int16_t x263 = 1;
	static int32_t x264 = -1;

	t54 = ((x261^x262)-(x263+x264));

	if (t54 != -127368662338270317LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x271 = INT8_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	uint64_t t55 = 6965LLU;

	t55 = ((x269^x270)-(x271+x272));

	if (t55 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x273 = 8237225U;
	volatile uint32_t x274 = 6256U;
	static int64_t x276 = 5115375LL;
	int64_t t56 = -3987021705648LL;

	t56 = ((x273^x274)-(x275+x276));

	if (t56 != -560436749995LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x278 = 6586U;
	uint32_t x279 = 3830U;
	uint32_t x280 = 886U;
	volatile uint32_t t57 = 51905U;

	t57 = ((x277^x278)-(x279+x280));

	if (t57 != 21465U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x281 = 951U;
	int16_t x282 = -1;
	int8_t x283 = 2;
	uint64_t x284 = UINT64_MAX;
	uint64_t t58 = 29240LLU;

	t58 = ((x281^x282)-(x283+x284));

	if (t58 != 4294966343LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = -1;
	uint8_t x286 = 91U;
	volatile uint16_t x287 = 9U;
	int8_t x288 = -1;
	int32_t t59 = 1;

	t59 = ((x285^x286)-(x287+x288));

	if (t59 != -100) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = -1LL;
	int8_t x300 = 1;
	volatile int64_t t60 = 21719015584192780LL;

	t60 = ((x297^x298)-(x299+x300));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x303 = 20600U;
	int8_t x304 = -1;
	volatile uint32_t t61 = 3U;

	t61 = ((x301^x302)-(x303+x304));

	if (t61 != 2147463048U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x312 = 3U;
	int64_t t62 = -1668875990LL;

	t62 = ((x309^x310)-(x311+x312));

	if (t62 != 2147415725LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MIN;
	static volatile uint64_t x315 = 726LLU;
	int32_t x316 = INT32_MIN;
	volatile uint64_t t63 = 53952117352518948LLU;

	t63 = ((x313^x314)-(x315+x316));

	if (t63 != 2147482922LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MIN;
	uint32_t x320 = 536145929U;
	volatile uint64_t t64 = 32452917LLU;

	t64 = ((x317^x318)-(x319+x320));

	if (t64 != 18446744071025922166LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x322 = INT16_MIN;
	uint8_t x323 = UINT8_MAX;
	static int8_t x324 = INT8_MAX;

	t65 = ((x321^x322)-(x323+x324));

	if (t65 != -33023) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x326 = 121U;
	volatile uint64_t x327 = 0LLU;
	int8_t x328 = -1;
	volatile uint64_t t66 = 242799401713221LLU;

	t66 = ((x325^x326)-(x327+x328));

	if (t66 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	static uint32_t x331 = 15601035U;
	volatile int64_t x332 = -1493095379073LL;
	int64_t t67 = -14844025813750LL;

	t67 = ((x329^x330)-(x331+x332));

	if (t67 != 1495227228918LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x333 = INT16_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	int16_t x336 = 39;
	volatile int32_t t68 = -976047981;

	t68 = ((x333^x334)-(x335+x336));

	if (t68 != -33062) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = 9;
	uint32_t x338 = 2U;
	int64_t x339 = 987698690255506122LL;
	int64_t t69 = -13809057805LL;

	t69 = ((x337^x338)-(x339+x340));

	if (t69 != -987698690255506111LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x341 = 1854;
	int16_t x343 = INT16_MIN;
	volatile uint32_t t70 = 1848U;

	t70 = ((x341^x342)-(x343+x344));

	if (t70 != 34281U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = -1;
	int64_t x347 = INT64_MIN;
	volatile int64_t t71 = 58055004714674LL;

	t71 = ((x345^x346)-(x347+x348));

	if (t71 != 9223372036854748816LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x352 = -1;
	uint64_t t72 = 18205LLU;

	t72 = ((x349^x350)-(x351+x352));

	if (t72 != 9105241936932974721LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x353 = UINT16_MAX;
	static int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t73 = -3256;

	t73 = ((x353^x354)-(x355+x356));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = -1654848990112839284LL;
	int64_t x358 = INT64_MIN;
	static uint16_t x359 = UINT16_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t74 = 753743936960021899LLU;

	t74 = ((x357^x358)-(x359+x360));

	if (t74 != 7568523046741870990LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x363 = INT16_MIN;
	volatile int32_t x364 = 8793861;
	uint64_t t75 = 864351247957088030LLU;

	t75 = ((x361^x362)-(x363+x364));

	if (t75 != 18446744073696631928LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x367 = 448723009LLU;
	int32_t x368 = -10545257;
	static uint64_t t76 = 579675815621LLU;

	t76 = ((x365^x366)-(x367+x368));

	if (t76 != 18446744073271373864LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = -3883899;
	uint8_t x386 = 1U;
	int16_t x387 = -1;
	volatile uint16_t x388 = 206U;
	int32_t t77 = 24149417;

	t77 = ((x385^x386)-(x387+x388));

	if (t77 != -3884105) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 48U;
	uint16_t x392 = UINT16_MAX;
	uint64_t t78 = 17600140447448LLU;

	t78 = ((x389^x390)-(x391+x392));

	if (t78 != 18446744071562002385LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x393 = INT8_MIN;
	int32_t x394 = INT32_MIN;
	uint16_t x395 = 6U;
	static int8_t x396 = 1;
	int32_t t79 = -14945;

	t79 = ((x393^x394)-(x395+x396));

	if (t79 != 2147483513) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x397 = INT8_MIN;
	int8_t x400 = -43;
	volatile int32_t t80 = 14;

	t80 = ((x397^x398)-(x399+x400));

	if (t80 != -341) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x401 = 30U;
	int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MIN;
	int32_t t81 = 32291;

	t81 = ((x401^x402)-(x403+x404));

	if (t81 != -2147449574) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x405 = 129U;
	uint32_t x406 = UINT32_MAX;
	int8_t x407 = -1;
	static int16_t x408 = INT16_MAX;
	volatile uint32_t t82 = 3943960U;

	t82 = ((x405^x406)-(x407+x408));

	if (t82 != 4294934400U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x409 = 15664U;
	int16_t x410 = INT16_MAX;
	int8_t x412 = INT8_MIN;

	t83 = ((x409^x410)-(x411+x412));

	if (t83 != 17229) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x413 = 0U;
	volatile uint16_t x414 = 778U;
	uint32_t x415 = 537U;
	int16_t x416 = INT16_MAX;
	volatile uint32_t t84 = 8U;

	t84 = ((x413^x414)-(x415+x416));

	if (t84 != 4294934770U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x425 = 4892;
	static int32_t x427 = -60;
	static volatile int8_t x428 = -8;
	volatile int32_t t85 = 0;

	t85 = ((x425^x426)-(x427+x428));

	if (t85 != 4960) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x430 = 546U;
	uint8_t x431 = 25U;
	volatile uint8_t x432 = 26U;
	volatile int32_t t86 = -24513;

	t86 = ((x429^x430)-(x431+x432));

	if (t86 != -598) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x433 = UINT16_MAX;
	volatile int8_t x434 = INT8_MIN;
	static int64_t x435 = INT64_MAX;
	int64_t t87 = 445260513LL;

	t87 = ((x433^x434)-(x435+x436));

	if (t87 != -65408LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x437 = 14U;
	uint16_t x438 = 613U;
	static uint32_t x439 = 11U;
	volatile int32_t x440 = INT32_MIN;
	volatile uint32_t t88 = 9886U;

	t88 = ((x437^x438)-(x439+x440));

	if (t88 != 2147484256U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x441 = -1;
	int32_t x442 = 3;
	static uint64_t x443 = 1133158530473012687LLU;
	static int32_t x444 = INT32_MIN;
	static uint64_t t89 = 34768646LLU;

	t89 = ((x441^x442)-(x443+x444));

	if (t89 != 17313585545384022573LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = -12;
	int64_t x447 = INT64_MIN;
	int64_t x448 = 26478294485747788LL;
	static int64_t t90 = 800717524250LL;

	t90 = ((x445^x446)-(x447+x448));

	if (t90 != 9196893742369028136LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x449 = -14;
	static int16_t x451 = INT16_MIN;
	volatile int64_t x452 = -50169629LL;
	static int64_t t91 = 109LL;

	t91 = ((x449^x450)-(x451+x452));

	if (t91 != 50202511LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x454 = -1;
	int64_t x455 = 5232409LL;
	int32_t x456 = INT32_MAX;
	static int64_t t92 = -42260LL;

	t92 = ((x453^x454)-(x455+x456));

	if (t92 != -2152716056LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x461 = 43;
	volatile int8_t x462 = INT8_MIN;
	int16_t x463 = -5620;
	static int16_t x464 = INT16_MIN;
	int32_t t93 = -6140107;

	t93 = ((x461^x462)-(x463+x464));

	if (t93 != 38303) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x465 = INT64_MIN;
	uint64_t x466 = UINT64_MAX;
	uint32_t x467 = 31351U;
	volatile int32_t x468 = 192;
	static uint64_t t94 = 8900484LLU;

	t94 = ((x465^x466)-(x467+x468));

	if (t94 != 9223372036854744264LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x469 = 5980U;
	uint8_t x470 = UINT8_MAX;
	static int64_t x471 = -1LL;
	int8_t x472 = -52;
	int64_t t95 = 16316433207LL;

	t95 = ((x469^x470)-(x471+x472));

	if (t95 != 6104LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MAX;
	int8_t x476 = 49;
	int32_t t96 = -1533;

	t96 = ((x473^x474)-(x475+x476));

	if (t96 != -32816) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x478 = -2229;
	int32_t x479 = -1;
	uint16_t x480 = 2247U;
	volatile int32_t t97 = 6129;

	t97 = ((x477^x478)-(x479+x480));

	if (t97 != 28293) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x483 = INT16_MIN;
	int8_t x484 = -3;
	uint32_t t98 = 6066459U;

	t98 = ((x481^x482)-(x483+x484));

	if (t98 != 32515U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x485 = INT32_MIN;
	int16_t x486 = INT16_MAX;
	int8_t x487 = 0;
	static uint8_t x488 = 87U;

	t99 = ((x485^x486)-(x487+x488));

	if (t99 != -2147450968) { NG(); } else { ; }
	
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

