#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
int16_t x2 = INT16_MIN;
uint64_t x5 = 1150848LLU;
int32_t x7 = -3223;
static uint64_t x9 = 146756LLU;
uint64_t x16 = UINT64_MAX;
volatile uint64_t t3 = 7LLU;
uint16_t x17 = UINT16_MAX;
uint32_t x21 = 1U;
uint32_t x26 = 9U;
int16_t x33 = -1;
int64_t x37 = INT64_MAX;
int64_t x38 = INT64_MIN;
uint8_t x42 = 11U;
uint32_t x45 = 446U;
volatile uint32_t x46 = 162689242U;
uint16_t x47 = UINT16_MAX;
volatile uint64_t x48 = UINT64_MAX;
volatile int64_t x50 = INT64_MIN;
volatile int64_t t12 = 46868382944258972LL;
static int8_t x55 = -1;
static int16_t x56 = 1;
int32_t x58 = 13144;
uint8_t x63 = 58U;
static uint64_t x64 = 1248735LLU;
int16_t x69 = INT16_MAX;
int8_t x72 = -4;
volatile uint8_t x78 = 1U;
int32_t x79 = 522352;
uint8_t x83 = 1U;
uint8_t x84 = UINT8_MAX;
volatile int64_t x90 = -7773144822949118LL;
static uint16_t x91 = UINT16_MAX;
uint16_t x92 = UINT16_MAX;
uint32_t x93 = 4U;
volatile int32_t x95 = -296134;
uint8_t x96 = UINT8_MAX;
int8_t x101 = INT8_MIN;
uint8_t x110 = UINT8_MAX;
int64_t t27 = 52LL;
uint8_t x115 = 1U;
int16_t x116 = INT16_MIN;
static int64_t x133 = -3LL;
static volatile int64_t t34 = -442463699081360LL;
volatile uint64_t x142 = 1874262LLU;
static volatile int32_t x144 = 4150;
int64_t x150 = INT64_MIN;
int64_t x152 = -1LL;
int64_t t37 = 43533331406667LL;
uint16_t x153 = 50U;
uint8_t x161 = 7U;
static int64_t x162 = INT64_MAX;
volatile int8_t x177 = 7;
uint16_t x182 = UINT16_MAX;
static uint16_t x186 = 443U;
uint8_t x187 = 3U;
uint8_t x203 = UINT8_MAX;
int16_t x207 = INT16_MAX;
volatile int32_t t51 = 30014428;
int32_t x217 = INT32_MAX;
static uint64_t x220 = UINT64_MAX;
uint32_t x221 = UINT32_MAX;
uint64_t x226 = UINT64_MAX;
uint16_t x227 = 128U;
static int16_t x228 = INT16_MIN;
int32_t x230 = INT32_MAX;
int64_t t58 = 264LL;
static int16_t x238 = 3;
int32_t x239 = -88101495;
uint32_t x242 = UINT32_MAX;
volatile int16_t x243 = INT16_MIN;
static int8_t x248 = 1;
int16_t x249 = -122;
int32_t t64 = -2157;
static volatile int16_t x263 = -66;
volatile int64_t t66 = INT64_MIN;
volatile int32_t t67 = -6;
uint16_t x276 = 989U;
static int16_t x281 = INT16_MIN;
int64_t x300 = -1LL;
static int64_t x302 = INT64_MIN;
volatile uint64_t x307 = 13375754410602646LLU;
static int8_t x308 = INT8_MIN;
int8_t x317 = INT8_MAX;
int32_t x318 = INT32_MIN;
int16_t x322 = -1564;
static volatile uint16_t x324 = UINT16_MAX;
volatile uint64_t t80 = 410LLU;
int32_t x330 = INT32_MIN;
int32_t x333 = 2348;
int8_t x339 = -1;
volatile uint32_t t84 = 240U;
static uint8_t x361 = UINT8_MAX;
int8_t x368 = INT8_MIN;
int8_t x372 = INT8_MIN;
uint64_t t93 = 32439414LLU;
int8_t x379 = INT8_MIN;
int32_t t94 = -530179;
uint64_t x381 = UINT64_MAX;
int8_t x391 = INT8_MIN;
int8_t x396 = INT8_MIN;


void f0(void) {
	uint16_t x3 = 2321U;
	int16_t x4 = INT16_MIN;
	static volatile int64_t t0 = INT64_MIN;

	t0 = (x1&((x2^x3)&x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	uint32_t x8 = 32U;
	volatile uint64_t t1 = 5639730LLU;

	t1 = (x5&((x6^x7)&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int16_t x11 = INT16_MAX;
	volatile int32_t x12 = -1;
	volatile uint64_t t2 = 1692281713LLU;

	t2 = (x9&((x10^x11)&x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1156366U;
	uint8_t x14 = 35U;
	int8_t x15 = INT8_MAX;

	t3 = (x13&((x14^x15)&x16));

	if (t3 != 12LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = -1;
	int64_t x19 = -1LL;
	int16_t x20 = INT16_MIN;
	volatile int64_t t4 = 515917581123LL;

	t4 = (x17&((x18^x19)&x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	static int32_t x24 = -1;
	int64_t t5 = -5160126847307685LL;

	t5 = (x21&((x22^x23)&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint32_t x27 = 3U;
	int16_t x28 = INT16_MAX;
	volatile uint32_t t6 = 11U;

	t6 = (x25&((x26^x27)&x28));

	if (t6 != 10U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int16_t x30 = INT16_MIN;
	uint32_t x31 = 204507U;
	uint16_t x32 = 37U;
	int64_t t7 = 701352LL;

	t7 = (x29&((x30^x31)&x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = 28U;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -9353;
	volatile int32_t t8 = 631598;

	t8 = (x33&((x34^x35)&x36));

	if (t8 != 99) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MAX;
	static volatile int64_t t9 = 17013LL;

	t9 = (x37&((x38^x39)&x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 10197627U;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile uint32_t t10 = 364U;

	t10 = (x41&((x42^x43)&x44));

	if (t10 != 112U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t t11 = 15972982744652644LLU;

	t11 = (x45&((x46^x47)&x48));

	if (t11 != 292LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -76LL;
	int8_t x51 = -1;
	int32_t x52 = INT32_MIN;

	t12 = (x49&((x50^x51)&x52));

	if (t12 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 29U;
	static uint16_t x54 = 0U;
	volatile uint32_t t13 = 3U;

	t13 = (x53&((x54^x55)&x56));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 45U;
	uint32_t x59 = 296U;
	static uint8_t x60 = 5U;
	volatile uint32_t t14 = 517U;

	t14 = (x57&((x58^x59)&x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int32_t x62 = -1;
	uint64_t t15 = 57LLU;

	t15 = (x61&((x62^x63)&x64));

	if (t15 != 1248709LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = 1;
	int64_t x67 = 1741333LL;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t16 = 2117075801544LL;

	t16 = (x65&((x66^x67)&x68));

	if (t16 != 37376LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	int32_t t17 = 1;

	t17 = (x69&((x70^x71)&x72));

	if (t17 != 32512) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	volatile int64_t x74 = INT64_MAX;
	static uint16_t x75 = UINT16_MAX;
	int16_t x76 = -440;
	int64_t t18 = 77442498720LL;

	t18 = (x73&((x74^x75)&x76));

	if (t18 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 49680269250LLU;
	int32_t x80 = INT32_MIN;
	static uint64_t t19 = 34829389462867254LLU;

	t19 = (x77&((x78^x79)&x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MIN;
	volatile int64_t t20 = 30959488460LL;

	t20 = (x81&((x82^x83)&x84));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile uint16_t x86 = UINT16_MAX;
	uint8_t x87 = 14U;
	uint64_t x88 = 598991354346044LLU;
	uint64_t t21 = 528180667063LLU;

	t21 = (x85&((x86^x87)&x88));

	if (t21 != 14848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -1LL;
	int64_t t22 = 30432937LL;

	t22 = (x89&((x90^x91)&x92));

	if (t22 != 42237LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = UINT16_MAX;
	static uint32_t t23 = 14U;

	t23 = (x93&((x94^x95)&x96));

	if (t23 != 4U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	static int8_t x98 = -1;
	static uint32_t x99 = 8U;
	volatile int64_t x100 = -1LL;
	volatile int64_t t24 = 87815074371315386LL;

	t24 = (x97&((x98^x99)&x100));

	if (t24 != 4294934528LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -9839;
	uint16_t x103 = 416U;
	int64_t x104 = -3LL;
	volatile int64_t t25 = 390812LL;

	t25 = (x101&((x102^x103)&x104));

	if (t25 != -10240LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = 92584LLU;
	uint32_t x107 = 825524565U;
	static uint16_t x108 = 174U;
	uint64_t t26 = 473683LLU;

	t26 = (x105&((x106^x107)&x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 7U;
	static int64_t x111 = -2107LL;
	int8_t x112 = INT8_MIN;

	t27 = (x109&((x110^x111)&x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -63;
	int8_t x114 = INT8_MIN;
	int32_t t28 = -117;

	t28 = (x113&((x114^x115)&x116));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int32_t x118 = -14;
	volatile int64_t x119 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	int64_t t29 = 0LL;

	t29 = (x117&((x118^x119)&x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	uint64_t x122 = 2102830315147LLU;
	uint64_t x123 = 42397315549LLU;
	static int32_t x124 = 54275846;
	volatile uint64_t t30 = 25LLU;

	t30 = (x121&((x122^x123)&x124));

	if (t30 != 19138310LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	volatile int8_t x126 = INT8_MIN;
	int32_t x127 = 10;
	volatile int32_t x128 = INT32_MIN;
	static volatile int64_t t31 = 1421LL;

	t31 = (x125&((x126^x127)&x128));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MIN;
	volatile int8_t x131 = INT8_MAX;
	int8_t x132 = -1;
	volatile uint32_t t32 = 0U;

	t32 = (x129&((x130^x131)&x132));

	if (t32 != 2147483775U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x134 = INT32_MIN;
	static uint8_t x135 = 2U;
	int64_t x136 = 1LL;
	volatile int64_t t33 = 31885365LL;

	t33 = (x133&((x134^x135)&x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = 0;
	int64_t x139 = 0LL;
	int64_t x140 = INT64_MAX;

	t34 = (x137&((x138^x139)&x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -11;
	int8_t x143 = -16;
	uint64_t t35 = 12292542LLU;

	t35 = (x141&((x142^x143)&x144));

	if (t35 != 36LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 10;
	static volatile int16_t x146 = 0;
	static uint8_t x147 = 1U;
	static uint8_t x148 = UINT8_MAX;
	int32_t t36 = 0;

	t36 = (x145&((x146^x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	int32_t x151 = -58869182;

	t37 = (x149&((x150^x151)&x152));

	if (t37 != 47682LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = -1;
	int64_t x155 = -1LL;
	int16_t x156 = -957;
	int64_t t38 = 3173926240386085LL;

	t38 = (x153&((x154^x155)&x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -2;
	int32_t t39 = 23320;

	t39 = (x157&((x158^x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MAX;
	int64_t t40 = -319962LL;

	t40 = (x161&((x162^x163)&x164));

	if (t40 != 7LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 75;
	static int64_t x166 = -40558520704519885LL;
	volatile uint64_t x167 = 3LLU;
	int16_t x168 = -1;
	uint64_t t41 = 5975643543213699LLU;

	t41 = (x165&((x166^x167)&x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	uint32_t x170 = 0U;
	int64_t x171 = -1LL;
	static volatile int32_t x172 = INT32_MAX;
	volatile int64_t t42 = 76701540913419LL;

	t42 = (x169&((x170^x171)&x172));

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	uint8_t x174 = 22U;
	int64_t x175 = 509701980416547692LL;
	int64_t x176 = INT64_MIN;
	int64_t t43 = -3048272565LL;

	t43 = (x173&((x174^x175)&x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 0;

	t44 = (x177&((x178^x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	volatile int16_t x183 = INT16_MAX;
	volatile int64_t x184 = 667521746506LL;
	int64_t t45 = -34686055353140LL;

	t45 = (x181&((x182^x183)&x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 5463U;
	uint64_t x188 = 0LLU;
	static volatile uint64_t t46 = 4843260000307LLU;

	t46 = (x185&((x186^x187)&x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int16_t x190 = 93;
	uint32_t x191 = 13601548U;
	static int64_t x192 = -1LL;
	int64_t t47 = -102008742752862776LL;

	t47 = (x189&((x190^x191)&x192));

	if (t47 != 13601617LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -39;
	int16_t x194 = INT16_MAX;
	uint8_t x195 = 28U;
	uint64_t x196 = 13257131503761773LLU;
	volatile uint64_t t48 = 177769940635LLU;

	t48 = (x193&((x194^x195)&x196));

	if (t48 != 14657LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int32_t x198 = -1;
	int64_t x199 = INT64_MAX;
	int64_t x200 = INT64_MIN;
	static int64_t t49 = -15LL;

	t49 = (x197&((x198^x199)&x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MAX;
	int8_t x204 = INT8_MAX;
	static int32_t t50 = -1236380;

	t50 = (x201&((x202^x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	int32_t x206 = INT32_MAX;
	static uint8_t x208 = 29U;

	t51 = (x205&((x206^x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 1954450U;
	static int32_t x210 = INT32_MIN;
	volatile int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t52 = -50LL;

	t52 = (x209&((x210^x211)&x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = -1;
	volatile int32_t x214 = -18424;
	volatile int64_t x215 = -1LL;
	static uint8_t x216 = 11U;
	volatile int64_t t53 = 74478507096058LL;

	t53 = (x213&((x214^x215)&x216));

	if (t53 != 3LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x218 = UINT8_MAX;
	static volatile int64_t x219 = INT64_MIN;
	volatile uint64_t t54 = 4141583LLU;

	t54 = (x217&((x218^x219)&x220));

	if (t54 != 255LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = -1;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = UINT8_MAX;
	static volatile uint32_t t55 = 1133U;

	t55 = (x221&((x222^x223)&x224));

	if (t55 != 255U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint64_t t56 = 3276353LLU;

	t56 = (x225&((x226^x227)&x228));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -7;
	int32_t x231 = -1;
	volatile int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = INT32_MIN;

	t57 = (x229&((x230^x231)&x232));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 1U;
	int64_t x235 = INT64_MAX;
	volatile int32_t x236 = INT32_MIN;

	t58 = (x233&((x234^x235)&x236));

	if (t58 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 573740470861LLU;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t59 = 3293LLU;

	t59 = (x237&((x238^x239)&x240));

	if (t59 != 573656563712LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = -19789;
	uint16_t x244 = 91U;
	uint32_t t60 = 683U;

	t60 = (x241&((x242^x243)&x244));

	if (t60 != 19U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	static int8_t x246 = 0;
	int64_t x247 = -1LL;
	volatile int64_t t61 = 320232070LL;

	t61 = (x245&((x246^x247)&x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x250 = INT64_MIN;
	int32_t x251 = 496315;
	static int32_t x252 = -63238035;
	int64_t t62 = -1197LL;

	t62 = (x249&((x250^x251)&x252));

	if (t62 != -9223372036854575104LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 61843488785083LL;
	int16_t x254 = -1;
	int64_t x255 = -1LL;
	int64_t x256 = -1LL;
	volatile int64_t t63 = -1766646744818615LL;

	t63 = (x253&((x254^x255)&x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 41U;
	uint8_t x258 = 75U;
	uint8_t x259 = 11U;
	static int8_t x260 = 0;

	t64 = (x257&((x258^x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 0;
	uint16_t x262 = UINT16_MAX;
	uint8_t x264 = 13U;
	static int32_t t65 = 1;

	t65 = (x261&((x262^x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static int8_t x266 = -58;
	volatile uint16_t x267 = UINT16_MAX;
	int32_t x268 = -1;

	t66 = (x265&((x266^x267)&x268));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -15;
	volatile int16_t x270 = INT16_MIN;
	int8_t x271 = -19;
	int8_t x272 = -1;

	t67 = (x269&((x270^x271)&x272));

	if (t67 != 32737) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	uint64_t x274 = 32904LLU;
	uint8_t x275 = 51U;
	static uint64_t t68 = 5LLU;

	t68 = (x273&((x274^x275)&x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	static uint8_t x278 = UINT8_MAX;
	int16_t x279 = -1;
	int8_t x280 = INT8_MIN;
	int64_t t69 = -5552325710173LL;

	t69 = (x277&((x278^x279)&x280));

	if (t69 != -256LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = -1955;
	volatile uint16_t x284 = 0U;
	static int32_t t70 = 299572;

	t70 = (x281&((x282^x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = 23U;
	static uint16_t x286 = 10546U;
	uint8_t x287 = 45U;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = 891;

	t71 = (x285&((x286^x287)&x288));

	if (t71 != 23) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MAX;
	static volatile int32_t x291 = INT32_MAX;
	int32_t x292 = INT32_MIN;
	static int64_t t72 = 27472277194049479LL;

	t72 = (x289&((x290^x291)&x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -1;
	static int8_t x294 = 7;
	static int16_t x295 = INT16_MAX;
	int8_t x296 = -15;
	int32_t t73 = 231928;

	t73 = (x293&((x294^x295)&x296));

	if (t73 != 32752) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	static int32_t x298 = INT32_MIN;
	volatile uint64_t x299 = 467746985625LLU;
	uint64_t t74 = 12513573268104864LLU;

	t74 = (x297&((x298^x299)&x300));

	if (t74 != 18446743605558116352LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	int32_t x303 = -1;
	uint64_t x304 = 226143LLU;
	volatile uint64_t t75 = 20595536210016LLU;

	t75 = (x301&((x302^x303)&x304));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 375523;
	static volatile int8_t x306 = INT8_MIN;
	uint64_t t76 = 112970LLU;

	t76 = (x305&((x306^x307)&x308));

	if (t76 != 35328LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = 6322U;
	int64_t x312 = -1LL;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x309&((x310^x311)&x312));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = 28U;
	int64_t x314 = -1LL;
	int16_t x315 = -1;
	int32_t x316 = INT32_MIN;
	volatile int64_t t78 = 42671867585LL;

	t78 = (x313&((x314^x315)&x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x319 = -1517258;
	int32_t x320 = INT32_MIN;
	int32_t t79 = -2596;

	t79 = (x317&((x318^x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 1LLU;
	int8_t x323 = INT8_MIN;

	t80 = (x321&((x322^x323)&x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 0U;
	static uint32_t x326 = 49865392U;
	int32_t x327 = INT32_MIN;
	static int64_t x328 = INT64_MIN;
	int64_t t81 = -7005LL;

	t81 = (x325&((x326^x327)&x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -5LL;
	static volatile int64_t x331 = 4320999768638LL;
	volatile uint8_t x332 = 1U;
	int64_t t82 = 6409108046528933LL;

	t82 = (x329&((x330^x331)&x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MAX;
	static int8_t x335 = INT8_MAX;
	volatile int32_t x336 = INT32_MAX;
	int32_t t83 = -63397;

	t83 = (x333&((x334^x335)&x336));

	if (t83 != 2304) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 1437U;
	volatile uint32_t x338 = 446U;
	int16_t x340 = 12344;

	t84 = (x337&((x338^x339)&x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	int8_t x342 = 1;
	volatile int64_t x343 = -137LL;
	uint8_t x344 = UINT8_MAX;
	int64_t t85 = -169968211912LL;

	t85 = (x341&((x342^x343)&x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 114042U;
	volatile int8_t x346 = -3;
	static int16_t x347 = INT16_MIN;
	volatile int32_t x348 = INT32_MIN;
	volatile uint32_t t86 = 14U;

	t86 = (x345&((x346^x347)&x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x349 = INT8_MIN;
	int16_t x350 = 1;
	static int16_t x351 = INT16_MAX;
	static uint16_t x352 = UINT16_MAX;
	static volatile int32_t t87 = -923;

	t87 = (x349&((x350^x351)&x352));

	if (t87 != 32640) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	static int32_t x355 = -1;
	int64_t x356 = -32663462039016524LL;
	static volatile int64_t t88 = -11LL;

	t88 = (x353&((x354^x355)&x356));

	if (t88 != -32663462039016704LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 2651139;
	static int32_t x358 = -5;
	int16_t x359 = INT16_MAX;
	static int8_t x360 = 0;
	volatile int32_t t89 = 916428;

	t89 = (x357&((x358^x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = -21;
	uint64_t x363 = 21793208LLU;
	static volatile int64_t x364 = INT64_MAX;
	uint64_t t90 = 115524609794340197LLU;

	t90 = (x361&((x362^x363)&x364));

	if (t90 != 83LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	int8_t x367 = -29;
	static int32_t t91 = -2620;

	t91 = (x365&((x366^x367)&x368));

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static uint64_t x370 = 2LLU;
	int16_t x371 = -1;
	volatile uint64_t t92 = 132569365906541LLU;

	t92 = (x369&((x370^x371)&x372));

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 6;
	uint8_t x374 = 27U;
	uint64_t x375 = 4406836577208323LLU;
	uint32_t x376 = UINT32_MAX;

	t93 = (x373&((x374^x375)&x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 2U;
	int16_t x378 = -1;
	int16_t x380 = INT16_MIN;

	t94 = (x377&((x378^x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 2131U;
	static int32_t x383 = -1;
	static int32_t x384 = INT32_MAX;
	volatile uint64_t t95 = 550LLU;

	t95 = (x381&((x382^x383)&x384));

	if (t95 != 2147481516LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	uint16_t x386 = 1U;
	int8_t x387 = INT8_MIN;
	static int64_t x388 = INT64_MIN;
	int64_t t96 = 12488LL;

	t96 = (x385&((x386^x387)&x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MAX;
	int32_t x390 = 143;
	int32_t x392 = 54;
	int64_t t97 = -1035179592286176LL;

	t97 = (x389&((x390^x391)&x392));

	if (t97 != 6LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	volatile int32_t x394 = -96741995;
	uint32_t x395 = 2718881U;
	static volatile uint32_t t98 = 263217U;

	t98 = (x393&((x394^x395)&x396));

	if (t98 != 4195526912U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	uint16_t x398 = 20791U;
	int8_t x399 = INT8_MIN;
	static uint64_t x400 = 7816149806998331LLU;
	volatile uint64_t t99 = 485618LLU;

	t99 = (x397&((x398^x399)&x400));

	if (t99 != 7816149806981683LLU) { NG(); } else { ; }
	
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

