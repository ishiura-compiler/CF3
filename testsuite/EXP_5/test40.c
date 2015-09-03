#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t2 = 5U;
static volatile int64_t t3 = -782513LL;
int16_t x23 = INT16_MIN;
volatile uint16_t x28 = UINT16_MAX;
volatile uint32_t t5 = 6458U;
uint64_t x29 = 3246280LLU;
int64_t x32 = INT64_MIN;
int32_t x36 = -7270;
uint16_t x38 = 7U;
int8_t x48 = INT8_MAX;
uint64_t t10 = 30055LLU;
uint16_t x53 = 7728U;
static volatile int64_t t11 = 62525714341589257LL;
uint16_t x59 = 17847U;
int64_t x62 = 289LL;
int64_t t13 = 195429LL;
int16_t x76 = -707;
uint64_t x78 = 5LLU;
volatile int16_t x82 = INT16_MIN;
int8_t x84 = 15;
int16_t x90 = INT16_MAX;
uint64_t x98 = 1771489824LLU;
uint64_t t21 = 44752094LLU;
volatile uint8_t x101 = 13U;
int16_t x110 = 0;
int8_t x112 = 1;
uint8_t x130 = 1U;
static int8_t x131 = INT8_MIN;
static int32_t t27 = INT32_MAX;
int16_t x134 = INT16_MIN;
int8_t x146 = 5;
uint8_t x147 = 10U;
static volatile int32_t x153 = 14;
int64_t x156 = 1469522159LL;
int64_t x158 = 107562448002514LL;
int64_t x163 = -2857613725525732LL;
int8_t x167 = -1;
volatile uint64_t t34 = 1585488008770LLU;
static int8_t x177 = INT8_MIN;
int32_t x189 = -1;
uint16_t x193 = 387U;
int64_t x196 = 209728889134LL;
volatile uint32_t x212 = UINT32_MAX;
uint64_t x218 = UINT64_MAX;
int8_t x225 = -1;
static volatile int16_t x227 = -1;
int8_t x236 = INT8_MAX;
int64_t t47 = -108264354211568991LL;
int32_t x264 = 2157469;
volatile uint8_t x274 = 61U;
int8_t x284 = -1;
int64_t t58 = 5LL;
int64_t x300 = INT64_MAX;
uint64_t x304 = 29592LLU;
uint64_t t61 = 2827099LLU;
static uint64_t x310 = UINT64_MAX;
static uint32_t x311 = UINT32_MAX;
uint64_t t63 = 493LLU;
static volatile int8_t x313 = INT8_MIN;
int32_t t64 = -2507;
volatile int64_t x319 = 1720468310237092897LL;
uint64_t x322 = UINT64_MAX;
uint32_t x333 = 28U;
volatile int8_t x335 = -9;
static int16_t x336 = INT16_MAX;
static int16_t x339 = -6;
int64_t x342 = 204266576405LL;
int8_t x346 = INT8_MIN;
int8_t x347 = INT8_MIN;
static uint16_t x366 = 11606U;
uint64_t x387 = UINT64_MAX;
int64_t x389 = -45182LL;
int32_t x390 = 196931756;
int16_t x392 = 1;
uint8_t x394 = 0U;
static int16_t x395 = -1;
int16_t x404 = -1;
int32_t x416 = INT32_MAX;
static volatile uint64_t t86 = 190621094LLU;
int64_t x426 = -24349292103583LL;
uint8_t x441 = 5U;
static volatile int64_t t90 = -4975521LL;
int64_t x464 = 44LL;
uint32_t t93 = 65577917U;
volatile uint64_t t95 = 374392597LLU;
uint32_t x480 = UINT32_MAX;
volatile uint64_t x484 = 3410572336839LLU;
volatile uint64_t t97 = 1738809477987107LLU;
int64_t t98 = -105339833LL;
uint32_t x493 = UINT32_MAX;


void f0(void) {
	int16_t x1 = -1;
	volatile int64_t x2 = INT64_MIN;
	uint8_t x3 = 3U;
	volatile uint32_t x4 = 337442U;
	int64_t t0 = 3522884109544LL;

	t0 = (x1+((x2+x3)/x4));

	if (t0 != -27333207001070LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = -1;
	int32_t x10 = 2931;
	int32_t x11 = INT32_MIN;
	volatile int32_t x12 = INT32_MIN;
	int32_t t1 = 794;

	t1 = (x9+((x10+x11)/x12));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -25;
	uint32_t x14 = 66U;
	int8_t x15 = -48;
	static uint32_t x16 = UINT32_MAX;

	t2 = (x13+((x14+x15)/x16));

	if (t2 != 4294967271U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 694U;
	int64_t x18 = INT64_MIN;
	int16_t x19 = 15;
	volatile uint8_t x20 = 46U;

	t3 = (x17+((x18+x19)/x20));

	if (t3 != -200508087757711823LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 2447193744198832516LLU;
	volatile int16_t x22 = -1;
	uint32_t x24 = 14243U;
	uint64_t t4 = 0LLU;

	t4 = (x21+((x22+x23)/x24));

	if (t4 != 2447193744199134063LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 2U;
	volatile int16_t x26 = -18;
	int16_t x27 = -1;

	t5 = (x25+((x26+x27)/x28));

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x30 = 31U;
	int16_t x31 = 1;
	uint64_t t6 = 729992143498365855LLU;

	t6 = (x29+((x30+x31)/x32));

	if (t6 != 3246280LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 0U;
	uint64_t x34 = 756051LLU;
	static uint32_t x35 = UINT32_MAX;
	volatile uint64_t t7 = 18396999305LLU;

	t7 = (x33+((x34+x35)/x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	int16_t x39 = INT16_MIN;
	static int32_t x40 = -309743636;
	volatile int32_t t8 = 1243883;

	t8 = (x37+((x38+x39)/x40));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = 1;
	static int8_t x42 = INT8_MIN;
	static int64_t x43 = INT64_MAX;
	static volatile int8_t x44 = 1;
	volatile int64_t t9 = -6447198470LL;

	t9 = (x41+((x42+x43)/x44));

	if (t9 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	uint64_t x46 = 7653076098602087LLU;
	volatile int16_t x47 = 125;

	t10 = (x45+((x46+x47)/x48));

	if (t10 != 60258294237629LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = -1LL;
	static int16_t x55 = INT16_MIN;
	volatile int8_t x56 = -11;

	t11 = (x53+((x54+x55)/x56));

	if (t11 != 10707LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	int32_t x58 = -299893327;
	uint32_t x60 = UINT32_MAX;
	uint32_t t12 = UINT32_MAX;

	t12 = (x57+((x58+x59)/x60));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x61 = 1U;
	int8_t x63 = INT8_MAX;
	volatile uint16_t x64 = 3U;

	t13 = (x61+((x62+x63)/x64));

	if (t13 != 139LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = INT64_MIN;
	uint64_t x70 = 764LLU;
	static int16_t x71 = 1;
	volatile int16_t x72 = -1;
	static uint64_t t14 = 233466LLU;

	t14 = (x69+((x70+x71)/x72));

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = INT16_MAX;
	int32_t x74 = -1;
	static uint32_t x75 = 256125U;
	uint32_t t15 = 8248502U;

	t15 = (x73+((x74+x75)/x76));

	if (t15 != 32767U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	volatile uint64_t x79 = 3675958LLU;
	static int32_t x80 = -5007745;
	uint64_t t16 = 4566792677660LLU;

	t16 = (x77+((x78+x79)/x80));

	if (t16 != 65535LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = UINT16_MAX;
	int16_t x83 = INT16_MAX;
	volatile int32_t t17 = -436657;

	t17 = (x81+((x82+x83)/x84));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = INT32_MIN;
	volatile int8_t x86 = INT8_MIN;
	uint16_t x87 = 22U;
	int64_t x88 = -4181LL;
	volatile int64_t t18 = -1607141739LL;

	t18 = (x85+((x86+x87)/x88));

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 3;
	volatile int16_t x91 = 1;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t19 = -5;

	t19 = (x89+((x90+x91)/x92));

	if (t19 != -253) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x94 = INT16_MAX;
	static int32_t x95 = INT32_MIN;
	volatile int16_t x96 = -1;
	uint32_t t20 = 269580U;

	t20 = (x93+((x94+x95)/x96));

	if (t20 != 2147450880U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 23U;
	int8_t x99 = -1;
	int8_t x100 = INT8_MIN;

	t21 = (x97+((x98+x99)/x100));

	if (t21 != 23LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x102 = 4133071839341083114LLU;
	static uint32_t x103 = 643791933U;
	uint8_t x104 = 4U;
	uint64_t t22 = 80089LLU;

	t22 = (x101+((x102+x103)/x104));

	if (t22 != 1033267959996218774LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -31221633;
	volatile int8_t x111 = 1;
	int32_t t23 = -2;

	t23 = (x109+((x110+x111)/x112));

	if (t23 != -31221632) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x113 = 17U;
	uint8_t x114 = 0U;
	int16_t x115 = -1;
	int16_t x116 = 747;
	volatile uint32_t t24 = 113264515U;

	t24 = (x113+((x114+x115)/x116));

	if (t24 != 17U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = 15U;
	volatile int64_t t25 = -1896930066252809112LL;

	t25 = (x121+((x122+x123)/x124));

	if (t25 != -9223372036568444672LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int32_t x127 = 56879;
	uint64_t x128 = 17601327822LLU;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x125+((x126+x127)/x128));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = INT32_MAX;
	static int16_t x132 = INT16_MAX;

	t27 = (x129+((x130+x131)/x132));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 487U;
	int64_t x135 = INT64_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile int64_t t28 = -3678LL;

	t28 = (x133+((x134+x135)/x136));

	if (t28 != 140739635872230LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MIN;
	volatile int8_t x148 = INT8_MAX;
	static volatile int32_t t29 = INT32_MIN;

	t29 = (x145+((x146+x147)/x148));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x154 = INT32_MIN;
	static uint32_t x155 = 6570894U;
	int64_t t30 = -2LL;

	t30 = (x153+((x154+x155)/x156));

	if (t30 != 15LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x157 = 60U;
	static uint32_t x159 = 12274612U;
	int8_t x160 = -7;
	int64_t t31 = 121731141047012287LL;

	t31 = (x157+((x158+x159)/x160));

	if (t31 != -15366065753815LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x161 = 6099389613363365897LLU;
	int8_t x162 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	uint64_t t32 = 64569813LLU;

	t32 = (x161+((x162+x163)/x164));

	if (t32 != 6099411938470596567LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = 101872126648LL;
	uint64_t x168 = 35086595011467519LLU;
	uint64_t t33 = 26425177294263415LLU;

	t33 = (x165+((x166+x167)/x168));

	if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = 1388;
	uint64_t x171 = UINT64_MAX;
	static int32_t x172 = INT32_MIN;

	t34 = (x169+((x170+x171)/x172));

	if (t34 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = -1;
	volatile uint8_t x174 = 2U;
	int64_t x175 = -1LL;
	uint16_t x176 = 1003U;
	static volatile int64_t t35 = -764577518919274219LL;

	t35 = (x173+((x174+x175)/x176));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x178 = 491;
	int8_t x179 = INT8_MIN;
	int16_t x180 = -1;
	volatile int32_t t36 = -32785852;

	t36 = (x177+((x178+x179)/x180));

	if (t36 != -491) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x190 = 12LL;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = INT16_MIN;
	static volatile int64_t t37 = -78989604613LL;

	t37 = (x189+((x190+x191)/x192));

	if (t37 != -3LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x194 = UINT8_MAX;
	volatile int16_t x195 = -1;
	volatile int64_t t38 = 1056704964796817949LL;

	t38 = (x193+((x194+x195)/x196));

	if (t38 != 387LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = INT16_MAX;
	static uint16_t x198 = 3067U;
	int64_t x199 = -4114080LL;
	int16_t x200 = -1;
	int64_t t39 = 6863985176743LL;

	t39 = (x197+((x198+x199)/x200));

	if (t39 != 4143780LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x205 = 5U;
	static volatile int32_t x206 = INT32_MAX;
	int64_t x207 = -272389099051495392LL;
	uint64_t x208 = 124663543612675626LLU;
	static uint64_t t40 = 190207707754LLU;

	t40 = (x205+((x206+x207)/x208));

	if (t40 != 150LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = -1LL;
	volatile int32_t x210 = INT32_MIN;
	volatile int8_t x211 = INT8_MAX;
	static volatile int64_t t41 = 3399865791166360420LL;

	t41 = (x209+((x210+x211)/x212));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x213 = 181562908U;
	uint8_t x214 = 15U;
	int32_t x215 = INT32_MIN;
	static uint16_t x216 = 193U;
	static uint32_t t42 = 139U;

	t42 = (x213+((x214+x215)/x216));

	if (t42 != 170436050U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x219 = -12;
	volatile int8_t x220 = -1;
	static volatile uint64_t t43 = 3099625LLU;

	t43 = (x217+((x218+x219)/x220));

	if (t43 != 65535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = INT32_MIN;
	uint16_t x222 = UINT16_MAX;
	int32_t x223 = -18111;
	volatile uint16_t x224 = 8U;
	int32_t t44 = 1685;

	t44 = (x221+((x222+x223)/x224));

	if (t44 != -2147477720) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x226 = 1019U;
	uint32_t x228 = 2U;
	volatile uint32_t t45 = 22975167U;

	t45 = (x225+((x226+x227)/x228));

	if (t45 != 508U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x229 = 1345846LLU;
	uint8_t x230 = 8U;
	volatile uint8_t x231 = 5U;
	volatile int64_t x232 = 69513844914LL;
	uint64_t t46 = 13182994055058875LLU;

	t46 = (x229+((x230+x231)/x232));

	if (t46 != 1345846LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x233 = -1LL;
	volatile int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MAX;

	t47 = (x233+((x234+x235)/x236));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int16_t x238 = 233;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -700736;
	uint64_t t48 = UINT64_MAX;

	t48 = (x237+((x238+x239)/x240));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x241 = UINT16_MAX;
	uint16_t x242 = 182U;
	uint32_t x243 = 3171U;
	static volatile int32_t x244 = 48198;
	volatile uint32_t t49 = 1955382U;

	t49 = (x241+((x242+x243)/x244));

	if (t49 != 65535U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = -6;
	int64_t x250 = -1LL;
	int64_t x251 = -1LL;
	volatile uint8_t x252 = 29U;
	volatile int64_t t50 = 604735710LL;

	t50 = (x249+((x250+x251)/x252));

	if (t50 != -6LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = 260642368979LLU;
	volatile int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	volatile uint32_t x260 = UINT32_MAX;
	volatile uint64_t t51 = 54978538LLU;

	t51 = (x257+((x258+x259)/x260));

	if (t51 != 260642368979LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = -62;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MIN;
	volatile int32_t t52 = 800862;

	t52 = (x261+((x262+x263)/x264));

	if (t52 != -62) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = INT16_MAX;
	volatile int32_t x266 = 60178162;
	int8_t x267 = -24;
	static int64_t x268 = 1294036039LL;
	int64_t t53 = -485101594LL;

	t53 = (x265+((x266+x267)/x268));

	if (t53 != 32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x269 = 5U;
	volatile int32_t x270 = -1;
	volatile uint32_t x271 = 10U;
	int64_t x272 = -76648406LL;
	volatile int64_t t54 = 535221667LL;

	t54 = (x269+((x270+x271)/x272));

	if (t54 != 5LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x273 = INT32_MAX;
	int16_t x275 = 1;
	uint32_t x276 = 255170U;
	volatile uint32_t t55 = 63U;

	t55 = (x273+((x274+x275)/x276));

	if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x277 = UINT8_MAX;
	volatile int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t56 = 8;

	t56 = (x277+((x278+x279)/x280));

	if (t56 != 512) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = 14;
	uint32_t x282 = 2U;
	uint8_t x283 = UINT8_MAX;
	volatile uint32_t t57 = 334765U;

	t57 = (x281+((x282+x283)/x284));

	if (t57 != 14U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x285 = INT16_MIN;
	static uint32_t x286 = 476549977U;
	static volatile int64_t x287 = INT64_MIN;
	uint16_t x288 = 4889U;

	t58 = (x285+((x286+x287)/x288));

	if (t58 != -1886555949384010LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MAX;
	static volatile uint8_t x295 = UINT8_MAX;
	int64_t x296 = -12112LL;
	volatile int64_t t59 = 43875644LL;

	t59 = (x293+((x294+x295)/x296));

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = -25252402;
	int8_t x298 = INT8_MIN;
	uint64_t x299 = 234350079341925LLU;
	volatile uint64_t t60 = 2473892847LLU;

	t60 = (x297+((x298+x299)/x300));

	if (t60 != 18446744073684299214LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = -6866193;
	int64_t x303 = INT64_MAX;

	t61 = (x301+((x302+x303)/x304));

	if (t61 != 311682498260063LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = INT32_MAX;
	int32_t x306 = -203026;
	uint64_t x307 = 1340LLU;
	int64_t x308 = INT64_MIN;
	static volatile uint64_t t62 = 2996LLU;

	t62 = (x305+((x306+x307)/x308));

	if (t62 != 2147483648LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x309 = 3983975488539841LLU;
	uint64_t x312 = 13317524LLU;

	t63 = (x309+((x310+x311)/x312));

	if (t63 != 3983975488540163LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x314 = -1;
	static uint16_t x315 = 913U;
	uint16_t x316 = UINT16_MAX;

	t64 = (x313+((x314+x315)/x316));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x317 = -1;
	uint32_t x318 = UINT32_MAX;
	volatile uint32_t x320 = 27817U;
	volatile int64_t t65 = -132LL;

	t65 = (x317+((x318+x319)/x320));

	if (t65 != 61849527789913LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x321 = UINT16_MAX;
	uint8_t x323 = 2U;
	int64_t x324 = -1LL;
	static uint64_t t66 = 3331LLU;

	t66 = (x321+((x322+x323)/x324));

	if (t66 != 65535LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = INT8_MIN;
	volatile int64_t x326 = -1LL;
	int32_t x327 = INT32_MIN;
	int16_t x328 = -1;
	volatile int64_t t67 = -6023694068185600LL;

	t67 = (x325+((x326+x327)/x328));

	if (t67 != 2147483521LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x334 = 4346843434052LL;
	int64_t t68 = -4LL;

	t68 = (x333+((x334+x335)/x336));

	if (t68 != 132659210LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x337 = 0;
	int64_t x338 = 24LL;
	volatile int64_t x340 = -1LL;
	int64_t t69 = -56230LL;

	t69 = (x337+((x338+x339)/x340));

	if (t69 != -18LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x341 = INT8_MIN;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t70 = -193712403LL;

	t70 = (x341+((x342+x343)/x344));

	if (t70 != -80LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x345 = 68U;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t71 = 3LL;

	t71 = (x345+((x346+x347)/x348));

	if (t71 != 68LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile uint8_t x354 = 5U;
	int8_t x355 = 14;
	int32_t x356 = INT32_MIN;
	volatile int32_t t72 = 803730420;

	t72 = (x353+((x354+x355)/x356));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = 3;
	uint8_t x359 = UINT8_MAX;
	int64_t x360 = 230LL;
	volatile int64_t t73 = -1162LL;

	t73 = (x357+((x358+x359)/x360));

	if (t73 != 256LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x361 = 15641;
	int16_t x362 = INT16_MAX;
	static volatile int64_t x363 = INT64_MIN;
	int8_t x364 = 5;
	int64_t t74 = 5LL;

	t74 = (x361+((x362+x363)/x364));

	if (t74 != -1844674407370932967LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x365 = -1LL;
	uint16_t x367 = UINT16_MAX;
	int8_t x368 = INT8_MIN;
	volatile int64_t t75 = -11LL;

	t75 = (x365+((x366+x367)/x368));

	if (t75 != -603LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x369 = INT16_MIN;
	volatile int64_t x370 = INT64_MAX;
	static int16_t x371 = -1;
	static uint64_t x372 = 2926517251LLU;
	volatile uint64_t t76 = 30LLU;

	t76 = (x369+((x370+x371)/x372));

	if (t76 != 3151621996LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x381 = 1U;
	static volatile int64_t x382 = INT64_MAX;
	static volatile uint64_t x383 = 29950483LLU;
	int64_t x384 = -1LL;
	volatile uint64_t t77 = 197010LLU;

	t77 = (x381+((x382+x383)/x384));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = INT16_MAX;
	uint16_t x386 = 9281U;
	volatile uint64_t x388 = 48311217163960094LLU;
	uint64_t t78 = 26LLU;

	t78 = (x385+((x386+x387)/x388));

	if (t78 != 32767LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x391 = INT32_MIN;
	volatile int64_t t79 = 13292461034290LL;

	t79 = (x389+((x390+x391)/x392));

	if (t79 != -1950597074LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = INT32_MAX;
	static uint8_t x396 = 39U;
	int32_t t80 = INT32_MAX;

	t80 = (x393+((x394+x395)/x396));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x397 = -1;
	volatile int64_t x398 = INT64_MIN;
	volatile int32_t x399 = INT32_MAX;
	static int16_t x400 = -2;
	static int64_t t81 = -1LL;

	t81 = (x397+((x398+x399)/x400));

	if (t81 != 4611686017353646079LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x401 = INT8_MIN;
	uint64_t x402 = 4620LLU;
	int64_t x403 = 4529284841561822437LL;
	volatile uint64_t t82 = 1775991125LLU;

	t82 = (x401+((x402+x403)/x404));

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x405 = -1;
	int32_t x406 = -19;
	static int32_t x407 = 12640;
	int64_t x408 = INT64_MIN;
	static volatile int64_t t83 = 33574536513978006LL;

	t83 = (x405+((x406+x407)/x408));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x413 = -1;
	static int32_t x414 = 119714757;
	int8_t x415 = INT8_MIN;
	int32_t t84 = 47429;

	t84 = (x413+((x414+x415)/x416));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x417 = 570;
	uint32_t x418 = 7U;
	uint64_t x419 = 395979602567504484LLU;
	volatile int16_t x420 = INT16_MAX;
	uint64_t t85 = 250268780151LLU;

	t85 = (x417+((x418+x419)/x420));

	if (t85 != 12084707253827LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x421 = 43179LLU;
	int8_t x422 = -1;
	static volatile int16_t x423 = -1;
	uint64_t x424 = 1752993418202787LLU;

	t86 = (x421+((x422+x423)/x424));

	if (t86 != 53701LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x425 = 91066160644187752LLU;
	int16_t x427 = INT16_MAX;
	int32_t x428 = -33261052;
	uint64_t t87 = 34741443568534LLU;

	t87 = (x425+((x426+x427)/x428));

	if (t87 != 91066160644919818LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x442 = UINT64_MAX;
	static volatile int64_t x443 = -499479724LL;
	volatile int8_t x444 = INT8_MIN;
	volatile uint64_t t88 = 1LLU;

	t88 = (x441+((x442+x443)/x444));

	if (t88 != 5LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x445 = INT32_MAX;
	int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MIN;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t89 = 4437668U;

	t89 = (x445+((x446+x447)/x448));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x449 = -13522480;
	int8_t x450 = INT8_MIN;
	int32_t x451 = 483099;
	int64_t x452 = INT64_MIN;

	t90 = (x449+((x450+x451)/x452));

	if (t90 != -13522480LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x457 = -1;
	uint16_t x458 = 1196U;
	int16_t x459 = -1;
	int16_t x460 = 5231;
	int32_t t91 = -13;

	t91 = (x457+((x458+x459)/x460));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x461 = INT16_MIN;
	uint16_t x462 = 3U;
	uint32_t x463 = UINT32_MAX;
	static int64_t t92 = 111472146344384LL;

	t92 = (x461+((x462+x463)/x464));

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x465 = 3U;
	int32_t x466 = -1;
	uint32_t x467 = 4230247U;
	static int8_t x468 = INT8_MAX;

	t93 = (x465+((x466+x467)/x468));

	if (t93 != 33312U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x469 = INT16_MIN;
	static int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = UINT64_MAX;
	static int64_t x472 = 18LL;
	uint64_t t94 = 606274971382LLU;

	t94 = (x469+((x470+x471)/x472));

	if (t94 != 1024819115086748785LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int16_t x474 = INT16_MIN;
	volatile uint32_t x475 = 10U;
	static uint16_t x476 = UINT16_MAX;

	t95 = (x473+((x474+x475)/x476));

	if (t95 != 65535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x477 = -1LL;
	int16_t x478 = INT16_MIN;
	int64_t x479 = -5LL;
	int64_t t96 = 358484LL;

	t96 = (x477+((x478+x479)/x480));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x481 = 2018974;
	int32_t x482 = INT32_MIN;
	uint16_t x483 = 2U;

	t97 = (x481+((x482+x483)/x484));

	if (t97 != 7427668LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x489 = INT32_MIN;
	uint8_t x490 = UINT8_MAX;
	volatile int8_t x491 = INT8_MIN;
	int64_t x492 = -1LL;

	t98 = (x489+((x490+x491)/x492));

	if (t98 != -2147483775LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x494 = 32;
	static uint64_t x495 = UINT64_MAX;
	uint16_t x496 = UINT16_MAX;
	uint64_t t99 = 14054402474657LLU;

	t99 = (x493+((x494+x495)/x496));

	if (t99 != 4294967295LLU) { NG(); } else { ; }
	
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

