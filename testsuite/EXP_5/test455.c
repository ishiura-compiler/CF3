#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 178135587U;
int16_t x5 = INT16_MAX;
static volatile uint16_t x10 = UINT16_MAX;
int64_t x12 = INT64_MIN;
int32_t x13 = INT32_MIN;
static volatile int32_t x16 = INT32_MAX;
volatile int64_t x17 = INT64_MIN;
volatile int64_t x20 = INT64_MAX;
int8_t x24 = -1;
int64_t t5 = 360577LL;
volatile int8_t x38 = INT8_MAX;
static int16_t x40 = INT16_MIN;
int8_t x51 = INT8_MIN;
int32_t t13 = -5813590;
volatile int32_t x80 = INT32_MIN;
int32_t t16 = 7930962;
static int16_t x81 = INT16_MIN;
uint16_t x87 = 1934U;
uint32_t x96 = 64318886U;
int64_t x97 = -13873LL;
int16_t x99 = -1;
uint8_t x100 = 0U;
uint32_t x103 = 424U;
static int8_t x104 = INT8_MIN;
static uint32_t x105 = UINT32_MAX;
static int32_t x115 = 16;
uint32_t x116 = 924582U;
uint16_t x130 = 1U;
uint16_t x133 = 13031U;
volatile int32_t t27 = 7076;
volatile int32_t t29 = -302109;
static int32_t x148 = -1;
static volatile uint32_t x152 = 274799U;
uint8_t x153 = 93U;
volatile int8_t x156 = -1;
int32_t t32 = 1671;
static uint16_t x158 = 0U;
uint8_t x162 = UINT8_MAX;
volatile uint64_t x167 = 3742385406428LLU;
int8_t x177 = -1;
int16_t x178 = INT16_MIN;
static int64_t x187 = -1LL;
uint8_t x204 = 0U;
volatile int32_t t42 = -1404;
volatile int16_t x222 = -1;
int64_t x223 = INT64_MAX;
uint8_t x225 = 18U;
uint8_t x229 = 9U;
volatile int32_t t46 = -692;
int64_t x241 = INT64_MIN;
int8_t x244 = INT8_MIN;
static uint32_t x267 = UINT32_MAX;
volatile int64_t x276 = INT64_MAX;
volatile int32_t t53 = -25503;
int8_t x285 = INT8_MIN;
int64_t x288 = INT64_MAX;
volatile int16_t x289 = INT16_MIN;
static int16_t x302 = -1;
int64_t x309 = 2117733944974LL;
static int16_t x312 = -1;
volatile int32_t t63 = -37;
static volatile uint64_t x329 = 0LLU;
volatile int64_t t67 = 222047572354193115LL;
int32_t t68 = -373;
int16_t x351 = 4;
uint8_t x372 = 110U;
int8_t x376 = -5;
int8_t x378 = -1;
int8_t x390 = -12;
int32_t x392 = 1;
volatile int32_t t75 = INT32_MIN;
volatile uint64_t x393 = UINT64_MAX;
volatile uint64_t x396 = 1598377186354LLU;
static int16_t x401 = INT16_MIN;
static uint64_t x403 = UINT64_MAX;
int64_t x404 = 297LL;
uint64_t x405 = 396608LLU;
volatile uint16_t x406 = UINT16_MAX;
uint8_t x407 = UINT8_MAX;
static uint32_t x408 = 16262U;
volatile int64_t x410 = INT64_MAX;
uint64_t x411 = 3602521869601LLU;
static volatile int32_t t80 = INT32_MAX;
volatile int64_t t82 = -3757045956507122LL;
volatile uint16_t x421 = 0U;
uint8_t x428 = 10U;
int8_t x434 = INT8_MIN;
volatile int32_t t87 = 11458454;
static uint64_t x451 = UINT64_MAX;
int32_t x452 = -1;
uint8_t x466 = 2U;
static int8_t x468 = 2;
int64_t x472 = INT64_MAX;
int8_t x477 = INT8_MIN;
int64_t x480 = -1LL;
volatile uint64_t t95 = 8119892490148890952LLU;
static int8_t x488 = -14;


void f0(void) {
	volatile int16_t x1 = -1;
	volatile int16_t x3 = INT16_MAX;
	int8_t x4 = -1;
	static int32_t t0 = 175276438;

	t0 = (x1^((x2*x3)<x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -175;
	static uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 14222280U;
	int32_t t1 = 3081;

	t1 = (x5^((x6*x7)<x8));

	if (t1 != 32766) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	uint32_t x11 = UINT32_MAX;
	int32_t t2 = INT32_MIN;

	t2 = (x9^((x10*x11)<x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MAX;
	static uint64_t x15 = 4137492113LLU;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x13^((x14*x15)<x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 103429576192LLU;
	static volatile int64_t t4 = INT64_MIN;

	t4 = (x17^((x18*x19)<x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile uint16_t x22 = 16U;
	int16_t x23 = INT16_MAX;

	t5 = (x21^((x22*x23)<x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = UINT64_MAX;
	volatile int8_t x27 = -1;
	uint8_t x28 = 43U;
	static volatile int32_t t6 = 104229;

	t6 = (x25^((x26*x27)<x28));

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = -1;
	static uint64_t x32 = 381254820487112LLU;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x29^((x30*x31)<x32));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	int16_t x39 = INT16_MIN;
	static volatile int32_t t8 = -1760;

	t8 = (x37^((x38*x39)<x40));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -471439;
	uint32_t x43 = UINT32_MAX;
	static int32_t x44 = -1;
	volatile int32_t t9 = -34;

	t9 = (x41^((x42*x43)<x44));

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 29884958998LLU;
	uint32_t x50 = 107991U;
	int8_t x52 = -1;
	uint64_t t10 = 266873568LLU;

	t10 = (x49^((x50*x51)<x52));

	if (t10 != 29884958999LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -3;
	int16_t x54 = 1672;
	int64_t x55 = -12LL;
	uint8_t x56 = 43U;
	int32_t t11 = 7598714;

	t11 = (x53^((x54*x55)<x56));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = UINT32_MAX;
	static int16_t x59 = 173;
	int8_t x60 = 0;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x57^((x58*x59)<x60));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = 1754;
	volatile int16_t x62 = -1;
	static int32_t x63 = 30;
	volatile int64_t x64 = INT64_MAX;

	t13 = (x61^((x62*x63)<x64));

	if (t13 != 1755) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = -1;
	int8_t x66 = INT8_MAX;
	volatile int16_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t14 = 58260011;

	t14 = (x65^((x66*x67)<x68));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 19U;
	static int64_t x70 = -1LL;
	uint8_t x71 = 36U;
	int16_t x72 = 733;
	volatile int32_t t15 = -395500;

	t15 = (x69^((x70*x71)<x72));

	if (t15 != 18) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	static volatile int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;

	t16 = (x77^((x78*x79)<x80));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = -1LL;
	static int8_t x84 = -63;
	int32_t t17 = 21557155;

	t17 = (x81^((x82*x83)<x84));

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = 796U;
	uint32_t x86 = UINT32_MAX;
	int16_t x88 = -461;
	volatile uint32_t t18 = 3257860U;

	t18 = (x85^((x86*x87)<x88));

	if (t18 != 797U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = INT64_MAX;
	uint32_t x90 = 18259U;
	int8_t x91 = INT8_MAX;
	static volatile int16_t x92 = INT16_MIN;
	int64_t t19 = -10586919544636724LL;

	t19 = (x89^((x90*x91)<x92));

	if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 65U;
	int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	volatile int32_t t20 = 2668;

	t20 = (x93^((x94*x95)<x96));

	if (t20 != 64) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = INT16_MIN;
	volatile int64_t t21 = 52310LL;

	t21 = (x97^((x98*x99)<x100));

	if (t21 != -13873LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = 1;
	uint16_t x102 = 319U;
	volatile int32_t t22 = -52599276;

	t22 = (x101^((x102*x103)<x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x106 = 45362U;
	int32_t x107 = INT32_MIN;
	int64_t x108 = INT64_MAX;
	uint32_t t23 = 32U;

	t23 = (x105^((x106*x107)<x108));

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x113 = INT16_MIN;
	uint64_t x114 = UINT64_MAX;
	volatile int32_t t24 = 6416;

	t24 = (x113^((x114*x115)<x116));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	int8_t x118 = -1;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 20121U;
	volatile int32_t t25 = 225431;

	t25 = (x117^((x118*x119)<x120));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MIN;
	volatile int32_t t26 = 12;

	t26 = (x129^((x130*x131)<x132));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x134 = 3;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = 28;

	t27 = (x133^((x134*x135)<x136));

	if (t27 != 13031) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x137 = INT16_MIN;
	int16_t x138 = 5418;
	int8_t x139 = INT8_MIN;
	static int32_t x140 = -1;
	volatile int32_t t28 = 97;

	t28 = (x137^((x138*x139)<x140));

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x141 = -23;
	volatile uint32_t x142 = 5U;
	int16_t x143 = INT16_MIN;
	static int64_t x144 = -1LL;

	t29 = (x141^((x142*x143)<x144));

	if (t29 != -23) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 32723U;
	static uint32_t x146 = UINT32_MAX;
	uint8_t x147 = 107U;
	int32_t t30 = 10723932;

	t30 = (x145^((x146*x147)<x148));

	if (t30 != 32722) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 839339838U;
	volatile int32_t t31 = INT32_MAX;

	t31 = (x149^((x150*x151)<x152));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x154 = 15;
	int8_t x155 = INT8_MAX;

	t32 = (x153^((x154*x155)<x156));

	if (t32 != 93) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = 351289391;
	uint32_t x159 = 59855508U;
	static uint8_t x160 = 8U;
	static int32_t t33 = -6;

	t33 = (x157^((x158*x159)<x160));

	if (t33 != 351289390) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x163 = 8;
	int16_t x164 = 0;
	uint32_t t34 = UINT32_MAX;

	t34 = (x161^((x162*x163)<x164));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -1;
	volatile uint32_t x166 = 63188603U;
	int64_t x168 = INT64_MIN;
	volatile int32_t t35 = 1755844;

	t35 = (x165^((x166*x167)<x168));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = 21723980LL;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = INT8_MIN;
	uint16_t x176 = 1511U;
	volatile int64_t t36 = -1197203994934510LL;

	t36 = (x173^((x174*x175)<x176));

	if (t36 != 21723981LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x179 = 12300265LLU;
	volatile uint32_t x180 = UINT32_MAX;
	int32_t t37 = -2848784;

	t37 = (x177^((x178*x179)<x180));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x185 = 222716542131601LLU;
	volatile uint32_t x186 = UINT32_MAX;
	static int64_t x188 = 19356774LL;
	uint64_t t38 = 49464LLU;

	t38 = (x185^((x186*x187)<x188));

	if (t38 != 222716542131600LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	static int32_t x195 = 58;
	int16_t x196 = INT16_MIN;
	static volatile int64_t t39 = INT64_MIN;

	t39 = (x193^((x194*x195)<x196));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = -1;
	volatile int32_t x202 = -1;
	static uint32_t x203 = 775U;
	volatile int32_t t40 = 96;

	t40 = (x201^((x202*x203)<x204));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x205 = -1;
	volatile int32_t x206 = INT32_MAX;
	static uint8_t x207 = 0U;
	uint16_t x208 = 2931U;
	int32_t t41 = 40461883;

	t41 = (x205^((x206*x207)<x208));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = 63;
	volatile int32_t x214 = INT32_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = INT32_MAX;

	t42 = (x213^((x214*x215)<x216));

	if (t42 != 63) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x217 = 9U;
	uint8_t x218 = 0U;
	uint8_t x219 = 61U;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t43 = 8;

	t43 = (x217^((x218*x219)<x220));

	if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MIN;
	uint8_t x224 = 1U;
	volatile int32_t t44 = -14;

	t44 = (x221^((x222*x223)<x224));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x226 = 2U;
	volatile uint64_t x227 = 12996LLU;
	volatile int16_t x228 = 542;
	volatile int32_t t45 = 55;

	t45 = (x225^((x226*x227)<x228));

	if (t45 != 18) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x230 = 9;
	uint8_t x231 = 2U;
	static int64_t x232 = 1384381635450LL;

	t46 = (x229^((x230*x231)<x232));

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x237 = 9LLU;
	int8_t x238 = INT8_MIN;
	static int64_t x239 = 689615519LL;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t47 = 535418456LLU;

	t47 = (x237^((x238*x239)<x240));

	if (t47 != 8LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x242 = -1;
	int16_t x243 = -1;
	volatile int64_t t48 = INT64_MIN;

	t48 = (x241^((x242*x243)<x244));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x257 = 27U;
	int8_t x258 = INT8_MIN;
	volatile int64_t x259 = -1LL;
	static uint64_t x260 = 177974609373LLU;
	volatile int32_t t49 = 3;

	t49 = (x257^((x258*x259)<x260));

	if (t49 != 26) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x261 = -1LL;
	uint64_t x262 = 16964561856LLU;
	uint64_t x263 = 220971LLU;
	uint32_t x264 = 263U;
	int64_t t50 = 14LL;

	t50 = (x261^((x262*x263)<x264));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x265 = UINT64_MAX;
	static volatile int16_t x266 = INT16_MIN;
	static uint16_t x268 = 11U;
	uint64_t t51 = UINT64_MAX;

	t51 = (x265^((x266*x267)<x268));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x269 = INT16_MIN;
	int64_t x270 = 137534LL;
	volatile int32_t x271 = -4812;
	static volatile uint16_t x272 = UINT16_MAX;
	static int32_t t52 = -63;

	t52 = (x269^((x270*x271)<x272));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x273 = 0;
	int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = 1U;

	t53 = (x273^((x274*x275)<x276));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x277 = INT32_MAX;
	uint8_t x278 = 0U;
	int16_t x279 = INT16_MIN;
	static int64_t x280 = INT64_MIN;
	int32_t t54 = INT32_MAX;

	t54 = (x277^((x278*x279)<x280));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x286 = 103LL;
	int8_t x287 = 1;
	volatile int32_t t55 = -1;

	t55 = (x285^((x286*x287)<x288));

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x290 = 116079U;
	int32_t x291 = -1;
	int32_t x292 = -1;
	volatile int32_t t56 = -2471863;

	t56 = (x289^((x290*x291)<x292));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x293 = 40U;
	volatile uint64_t x294 = 2995276503901157789LLU;
	volatile int16_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	int32_t t57 = 24090;

	t57 = (x293^((x294*x295)<x296));

	if (t57 != 40) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = -1;
	uint64_t x303 = 4918184032832519LLU;
	uint16_t x304 = 485U;
	int32_t t58 = 6676739;

	t58 = (x301^((x302*x303)<x304));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x310 = -1;
	static uint16_t x311 = 6222U;
	volatile int64_t t59 = 483615756289910540LL;

	t59 = (x309^((x310*x311)<x312));

	if (t59 != 2117733944975LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x313 = 2U;
	int64_t x314 = -12711276LL;
	uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 12710340131971166LLU;
	static int32_t t60 = 109;

	t60 = (x313^((x314*x315)<x316));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = INT16_MIN;
	volatile int8_t x318 = INT8_MIN;
	uint16_t x319 = 382U;
	int16_t x320 = INT16_MIN;
	int32_t t61 = -452;

	t61 = (x317^((x318*x319)<x320));

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x321 = 10705;
	static int32_t x322 = -1;
	volatile int8_t x323 = INT8_MIN;
	static int16_t x324 = -1;
	static int32_t t62 = 29490;

	t62 = (x321^((x322*x323)<x324));

	if (t62 != 10705) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x325 = 3549U;
	int8_t x326 = INT8_MAX;
	int64_t x327 = 223139LL;
	int8_t x328 = 1;

	t63 = (x325^((x326*x327)<x328));

	if (t63 != 3549) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x330 = INT8_MIN;
	static int8_t x331 = INT8_MIN;
	volatile int32_t x332 = 248375;
	volatile uint64_t t64 = 9126747877593366LLU;

	t64 = (x329^((x330*x331)<x332));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = -1;
	uint32_t x334 = 2036093U;
	int64_t x335 = 1593770LL;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t65 = -1143059;

	t65 = (x333^((x334*x335)<x336));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x337 = -87708483312LL;
	static int16_t x338 = -1;
	int16_t x339 = -1;
	static uint64_t x340 = 22185LLU;
	volatile int64_t t66 = -1421LL;

	t66 = (x337^((x338*x339)<x340));

	if (t66 != -87708483311LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = INT64_MIN;
	static uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MIN;
	volatile int32_t x344 = INT32_MIN;

	t67 = (x341^((x342*x343)<x344));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 18698339394843962LLU;
	uint16_t x348 = 42U;

	t68 = (x345^((x346*x347)<x348));

	if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x349 = -304;
	static int8_t x350 = INT8_MIN;
	static volatile int64_t x352 = INT64_MIN;
	int32_t t69 = 1894520;

	t69 = (x349^((x350*x351)<x352));

	if (t69 != -304) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x361 = -77238;
	uint32_t x362 = UINT32_MAX;
	uint32_t x363 = 3U;
	uint8_t x364 = 114U;
	int32_t t70 = -199124;

	t70 = (x361^((x362*x363)<x364));

	if (t70 != -77238) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x369 = INT16_MIN;
	volatile uint32_t x370 = 11968497U;
	uint16_t x371 = UINT16_MAX;
	static int32_t t71 = -3278956;

	t71 = (x369^((x370*x371)<x372));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x373 = 149U;
	int8_t x374 = INT8_MIN;
	volatile uint64_t x375 = 5849102188732830579LLU;
	volatile uint32_t t72 = 63859U;

	t72 = (x373^((x374*x375)<x376));

	if (t72 != 148U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x377 = INT8_MIN;
	volatile int64_t x379 = INT64_MAX;
	int8_t x380 = 1;
	int32_t t73 = 3450;

	t73 = (x377^((x378*x379)<x380));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x381 = INT32_MIN;
	int16_t x382 = 446;
	static volatile int64_t x383 = -1LL;
	static int16_t x384 = INT16_MIN;
	int32_t t74 = INT32_MIN;

	t74 = (x381^((x382*x383)<x384));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x389 = INT32_MIN;
	int16_t x391 = INT16_MIN;

	t75 = (x389^((x390*x391)<x392));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = INT8_MIN;
	static uint64_t t76 = UINT64_MAX;

	t76 = (x393^((x394*x395)<x396));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x397 = INT8_MIN;
	uint16_t x398 = 2909U;
	int16_t x399 = 17;
	int8_t x400 = INT8_MAX;
	int32_t t77 = 5518;

	t77 = (x397^((x398*x399)<x400));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x402 = 7;
	volatile int32_t t78 = -329;

	t78 = (x401^((x402*x403)<x404));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t t79 = 93648746006LLU;

	t79 = (x405^((x406*x407)<x408));

	if (t79 != 396608LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x409 = INT32_MAX;
	volatile uint8_t x412 = 3U;

	t80 = (x409^((x410*x411)<x412));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x413 = 41;
	uint16_t x414 = 1405U;
	int64_t x415 = -1LL;
	int8_t x416 = INT8_MAX;
	volatile int32_t t81 = 49302;

	t81 = (x413^((x414*x415)<x416));

	if (t81 != 40) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x417 = INT64_MIN;
	int16_t x418 = -1;
	int16_t x419 = INT16_MAX;
	int8_t x420 = -1;

	t82 = (x417^((x418*x419)<x420));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x422 = UINT8_MAX;
	int8_t x423 = 1;
	int8_t x424 = INT8_MIN;
	volatile int32_t t83 = -2256663;

	t83 = (x421^((x422*x423)<x424));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x425 = -1;
	int8_t x426 = INT8_MIN;
	int16_t x427 = INT16_MIN;
	int32_t t84 = -388460;

	t84 = (x425^((x426*x427)<x428));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = -8;
	volatile int32_t x430 = 0;
	static int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;
	volatile int32_t t85 = 387;

	t85 = (x429^((x430*x431)<x432));

	if (t85 != -8) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x433 = INT16_MIN;
	uint8_t x435 = UINT8_MAX;
	volatile int64_t x436 = 286LL;
	static volatile int32_t t86 = -1;

	t86 = (x433^((x434*x435)<x436));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x437 = -1;
	int8_t x438 = -2;
	uint32_t x439 = UINT32_MAX;
	volatile uint32_t x440 = UINT32_MAX;

	t87 = (x437^((x438*x439)<x440));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x449 = INT8_MIN;
	volatile int64_t x450 = INT64_MAX;
	static volatile int32_t t88 = 0;

	t88 = (x449^((x450*x451)<x452));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x457 = INT8_MAX;
	int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	uint32_t x460 = UINT32_MAX;
	static volatile int32_t t89 = 189486426;

	t89 = (x457^((x458*x459)<x460));

	if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x461 = 20U;
	uint16_t x462 = 3U;
	volatile uint8_t x463 = UINT8_MAX;
	uint32_t x464 = 3919608U;
	static int32_t t90 = 280;

	t90 = (x461^((x462*x463)<x464));

	if (t90 != 21) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x465 = -5;
	static int32_t x467 = 4722;
	volatile int32_t t91 = -4;

	t91 = (x465^((x466*x467)<x468));

	if (t91 != -5) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x469 = UINT16_MAX;
	volatile int8_t x470 = -19;
	int8_t x471 = -15;
	volatile int32_t t92 = -14573074;

	t92 = (x469^((x470*x471)<x472));

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x473 = INT8_MIN;
	int8_t x474 = -1;
	int16_t x475 = -1;
	volatile int32_t x476 = 104419;
	int32_t t93 = 5345;

	t93 = (x473^((x474*x475)<x476));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x478 = 164610163LL;
	volatile uint8_t x479 = 47U;
	int32_t t94 = -214426135;

	t94 = (x477^((x478*x479)<x480));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x481 = 708699506944347LLU;
	static volatile int32_t x482 = INT32_MIN;
	volatile uint32_t x483 = UINT32_MAX;
	static int16_t x484 = 0;

	t95 = (x481^((x482*x483)<x484));

	if (t95 != 708699506944347LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x485 = 840415616;
	uint32_t x486 = UINT32_MAX;
	uint16_t x487 = 8U;
	volatile int32_t t96 = -1363;

	t96 = (x485^((x486*x487)<x488));

	if (t96 != 840415616) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x489 = INT32_MIN;
	int32_t x490 = -165087;
	uint64_t x491 = 818348179323LLU;
	int64_t x492 = -1385596259LL;
	int32_t t97 = 31;

	t97 = (x489^((x490*x491)<x492));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x493 = INT8_MIN;
	int16_t x494 = -266;
	uint32_t x495 = 127U;
	static int16_t x496 = -1;
	int32_t t98 = 800;

	t98 = (x493^((x494*x495)<x496));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x497 = -3;
	uint8_t x498 = 2U;
	uint8_t x499 = 0U;
	volatile int64_t x500 = INT64_MIN;
	volatile int32_t t99 = 56;

	t99 = (x497^((x498*x499)<x500));

	if (t99 != -3) { NG(); } else { ; }
	
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

