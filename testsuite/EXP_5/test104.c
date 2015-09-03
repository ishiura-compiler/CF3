#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
int32_t x9 = -1;
volatile int32_t t2 = 220;
uint8_t x15 = 5U;
uint64_t x20 = UINT64_MAX;
static int32_t x25 = -3203063;
uint64_t x26 = UINT64_MAX;
static int32_t x27 = INT32_MAX;
uint8_t x39 = 1U;
int16_t x41 = -13975;
uint16_t x45 = 1045U;
volatile int8_t x52 = 0;
int16_t x68 = INT16_MAX;
uint32_t x72 = UINT32_MAX;
volatile int8_t x81 = 7;
static int64_t x84 = INT64_MIN;
int64_t x87 = 107357676749LL;
int32_t t18 = 14;
volatile uint64_t x90 = UINT64_MAX;
static int32_t x91 = -1;
int64_t t19 = -255029200LL;
volatile int32_t t20 = 146;
volatile uint32_t x104 = 1039556U;
int16_t x108 = INT16_MIN;
int8_t x109 = -60;
volatile int32_t t24 = -1402677;
int64_t x117 = INT64_MAX;
volatile int32_t x118 = -1;
int8_t x119 = 1;
int64_t x121 = INT64_MAX;
volatile int8_t x122 = -1;
int64_t x129 = -1LL;
uint32_t x130 = 474U;
int16_t x131 = -44;
static int64_t x138 = INT64_MIN;
uint64_t t30 = 11550083890834587LLU;
int8_t x145 = INT8_MIN;
int32_t x146 = 53716000;
int8_t x152 = INT8_MIN;
uint8_t x153 = UINT8_MAX;
volatile int64_t x155 = INT64_MIN;
int32_t x156 = 21326;
static volatile int32_t x163 = -1;
int16_t x172 = INT16_MAX;
int64_t t37 = INT64_MIN;
uint8_t x174 = 0U;
volatile uint32_t x180 = 10712U;
volatile int64_t x189 = INT64_MAX;
static int16_t x210 = -1;
int8_t x213 = -1;
uint32_t x226 = UINT32_MAX;
int32_t x228 = -1;
int32_t t48 = 24476285;
volatile int16_t x229 = -8164;
int16_t x235 = INT16_MAX;
int32_t t50 = 127280;
volatile int64_t x239 = INT64_MAX;
int32_t t52 = 391166;
volatile int32_t x245 = -324052763;
volatile uint8_t x247 = 8U;
volatile int32_t x252 = 373;
uint64_t x260 = UINT64_MAX;
int32_t x269 = INT32_MIN;
volatile uint8_t x276 = 2U;
int32_t t61 = 0;
volatile int64_t x281 = -26LL;
uint32_t x282 = 63U;
int32_t t63 = 3764298;
uint16_t x297 = UINT16_MAX;
int32_t t65 = 1434993;
int16_t x302 = -1;
uint8_t x304 = 2U;
int32_t x307 = -13;
static int16_t x312 = -5;
static uint32_t x320 = 0U;
uint32_t x332 = UINT32_MAX;
uint16_t x333 = 403U;
int32_t x340 = -1581;
int16_t x341 = INT16_MAX;
uint64_t x342 = 8557847574060603LLU;
volatile uint32_t x348 = UINT32_MAX;
int32_t x350 = 22594982;
int8_t x351 = INT8_MIN;
int64_t x353 = -1LL;
int16_t x354 = INT16_MIN;
uint16_t x355 = 12U;
int64_t t78 = -15851196LL;
int8_t x358 = 3;
int16_t x364 = INT16_MAX;
volatile int32_t x367 = -1;
int8_t x370 = -3;
int8_t x372 = INT8_MAX;
static int16_t x392 = 0;
uint8_t x410 = UINT8_MAX;
uint64_t x413 = 54607822082523LLU;
uint64_t t91 = 2001LLU;
static volatile uint64_t t92 = UINT64_MAX;
static int32_t x428 = -6;
static volatile int32_t t93 = -189019132;
uint64_t x434 = UINT64_MAX;
int64_t t95 = -690837951LL;
uint64_t x444 = 848619509410105412LLU;
int32_t t96 = 294;
static volatile uint32_t x446 = 1U;
uint32_t x453 = 0U;
int16_t x454 = -1;
int16_t x458 = 860;
int8_t x460 = INT8_MIN;


void f0(void) {
	uint64_t x1 = 1752320482731539158LLU;
	volatile uint8_t x2 = 7U;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = -1066192LL;
	uint64_t t0 = 47888276093LLU;

	t0 = (x1^((x2+x3)==x4));

	if (t0 != 1752320482731539158LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 60853895254675422LLU;
	int32_t t1 = 257;

	t1 = (x5^((x6+x7)==x8));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 33U;
	uint64_t x11 = UINT64_MAX;
	uint8_t x12 = 56U;

	t2 = (x9^((x10+x11)==x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	uint64_t x14 = UINT64_MAX;
	uint32_t x16 = 116902788U;
	volatile int32_t t3 = -373;

	t3 = (x13^((x14+x15)==x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 132450;
	uint64_t x18 = 5668134LLU;
	volatile int8_t x19 = 26;
	volatile int32_t t4 = 1894926;

	t4 = (x17^((x18+x19)==x20));

	if (t4 != 132450) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x28 = INT16_MIN;
	int32_t t5 = 62941065;

	t5 = (x25^((x26+x27)==x28));

	if (t5 != -3203063) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = 2;
	int8_t x34 = -1;
	volatile int8_t x35 = -1;
	static uint16_t x36 = 28U;
	volatile int32_t t6 = 546;

	t6 = (x33^((x34+x35)==x36));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	static volatile int8_t x38 = INT8_MIN;
	int8_t x40 = -18;
	int32_t t7 = INT32_MIN;

	t7 = (x37^((x38+x39)==x40));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x42 = -1;
	static int32_t x43 = -1;
	int16_t x44 = 13;
	volatile int32_t t8 = 2279;

	t8 = (x41^((x42+x43)==x44));

	if (t8 != -13975) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = -1;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = -747;
	static int32_t t9 = 102;

	t9 = (x45^((x46+x47)==x48));

	if (t9 != 1045) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = -108797949819LL;
	volatile uint64_t x51 = UINT64_MAX;
	int32_t t10 = INT32_MAX;

	t10 = (x49^((x50+x51)==x52));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x53 = 3LLU;
	static int8_t x54 = INT8_MIN;
	static uint16_t x55 = UINT16_MAX;
	int16_t x56 = 8956;
	volatile uint64_t t11 = 3306240LLU;

	t11 = (x53^((x54+x55)==x56));

	if (t11 != 3LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MAX;
	int64_t x62 = 8149917LL;
	static volatile int16_t x63 = 188;
	int16_t x64 = INT16_MIN;
	int32_t t12 = 35;

	t12 = (x61^((x62+x63)==x64));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x65 = 4137LLU;
	int64_t x66 = INT64_MAX;
	static int32_t x67 = -488;
	uint64_t t13 = 1801491213068LLU;

	t13 = (x65^((x66+x67)==x68));

	if (t13 != 4137LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = -4;
	static uint64_t x71 = 0LLU;
	volatile int32_t t14 = 1;

	t14 = (x69^((x70+x71)==x72));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -121;
	volatile uint16_t x74 = UINT16_MAX;
	static volatile int32_t x75 = INT32_MIN;
	volatile int16_t x76 = INT16_MAX;
	static volatile int32_t t15 = -2769307;

	t15 = (x73^((x74+x75)==x76));

	if (t15 != -121) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = INT32_MAX;
	static uint16_t x78 = 7490U;
	volatile int8_t x79 = INT8_MIN;
	volatile int8_t x80 = -1;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x77^((x78+x79)==x80));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x82 = 0;
	int16_t x83 = INT16_MIN;
	int32_t t17 = 166142539;

	t17 = (x81^((x82+x83)==x84));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -44;
	volatile int16_t x86 = -6;
	volatile uint16_t x88 = UINT16_MAX;

	t18 = (x85^((x86+x87)==x88));

	if (t18 != -44) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 109LL;
	volatile uint64_t x92 = 11845495456LLU;

	t19 = (x89^((x90+x91)==x92));

	if (t19 != 109LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 0;
	volatile int64_t x94 = -1LL;
	int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MAX;

	t20 = (x93^((x94+x95)==x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = 39789803833LL;
	static uint64_t x98 = 51LLU;
	int8_t x99 = 1;
	int32_t x100 = INT32_MIN;
	volatile int64_t t21 = 1427082775734466LL;

	t21 = (x97^((x98+x99)==x100));

	if (t21 != 39789803833LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 1555242359740LLU;
	int64_t x102 = 5LL;
	int64_t x103 = -1LL;
	uint64_t t22 = 492LLU;

	t22 = (x101^((x102+x103)==x104));

	if (t22 != 1555242359740LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = -1;
	int8_t x107 = INT8_MIN;
	int32_t t23 = -31362;

	t23 = (x105^((x106+x107)==x108));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x110 = INT64_MAX;
	int8_t x111 = -1;
	volatile uint8_t x112 = 6U;

	t24 = (x109^((x110+x111)==x112));

	if (t24 != -60) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = 306U;
	int16_t x114 = -1;
	uint16_t x115 = 1U;
	int8_t x116 = 12;
	int32_t t25 = -1;

	t25 = (x113^((x114+x115)==x116));

	if (t25 != 306) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x120 = INT32_MAX;
	int64_t t26 = INT64_MAX;

	t26 = (x117^((x118+x119)==x120));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x123 = -1;
	uint32_t x124 = 1516717U;
	int64_t t27 = INT64_MAX;

	t27 = (x121^((x122+x123)==x124));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -31;
	int16_t x126 = INT16_MIN;
	volatile uint16_t x127 = UINT16_MAX;
	volatile int16_t x128 = 9;
	volatile int32_t t28 = -1904;

	t28 = (x125^((x126+x127)==x128));

	if (t28 != -31) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x132 = 1209307638LL;
	volatile int64_t t29 = -22350679702LL;

	t29 = (x129^((x130+x131)==x132));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x137 = 15115302934575LLU;
	uint16_t x139 = 769U;
	static uint32_t x140 = 301U;

	t30 = (x137^((x138+x139)==x140));

	if (t30 != 15115302934575LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x147 = INT16_MAX;
	int32_t x148 = -1;
	static volatile int32_t t31 = -12227;

	t31 = (x145^((x146+x147)==x148));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = 1344424;
	volatile int32_t x151 = -1;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x149^((x150+x151)==x152));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x154 = INT8_MAX;
	int32_t t33 = 98123;

	t33 = (x153^((x154+x155)==x156));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = 710010U;
	uint8_t x158 = 0U;
	static volatile int32_t x159 = INT32_MAX;
	uint8_t x160 = UINT8_MAX;
	uint32_t t34 = 64396835U;

	t34 = (x157^((x158+x159)==x160));

	if (t34 != 710010U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = UINT32_MAX;
	int8_t x162 = INT8_MIN;
	int64_t x164 = -1LL;
	uint32_t t35 = UINT32_MAX;

	t35 = (x161^((x162+x163)==x164));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = 2525;
	uint8_t x167 = 1U;
	int16_t x168 = INT16_MIN;
	volatile int32_t t36 = 3305440;

	t36 = (x165^((x166+x167)==x168));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MIN;
	static uint64_t x170 = 30126153119LLU;
	uint8_t x171 = UINT8_MAX;

	t37 = (x169^((x170+x171)==x172));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -1;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = 18U;
	int32_t t38 = 110;

	t38 = (x173^((x174+x175)==x176));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 102U;
	int16_t x178 = -16;
	int32_t x179 = -25;
	int32_t t39 = -28265585;

	t39 = (x177^((x178+x179)==x180));

	if (t39 != 102) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MAX;
	volatile int64_t x186 = -1LL;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = 14839498U;
	volatile int32_t t40 = -369986578;

	t40 = (x185^((x186+x187)==x188));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x190 = 26U;
	int8_t x191 = INT8_MAX;
	int64_t x192 = -132499754969743024LL;
	int64_t t41 = INT64_MAX;

	t41 = (x189^((x190+x191)==x192));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = -1;
	static int8_t x194 = INT8_MAX;
	static int16_t x195 = -1;
	uint64_t x196 = 987720345235764LLU;
	static int32_t t42 = -1;

	t42 = (x193^((x194+x195)==x196));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = 5630835LL;
	volatile uint64_t x206 = 221379050LLU;
	int64_t x207 = -143343924LL;
	static int8_t x208 = INT8_MIN;
	static volatile int64_t t43 = -747932LL;

	t43 = (x205^((x206+x207)==x208));

	if (t43 != 5630835LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x209 = -1;
	uint8_t x211 = 13U;
	volatile int8_t x212 = -50;
	static int32_t t44 = 13;

	t44 = (x209^((x210+x211)==x212));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x214 = 15274U;
	int16_t x215 = INT16_MAX;
	volatile uint64_t x216 = UINT64_MAX;
	int32_t t45 = 1534;

	t45 = (x213^((x214+x215)==x216));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x217 = INT64_MIN;
	static int64_t x218 = INT64_MIN;
	int64_t x219 = INT64_MAX;
	int64_t x220 = 258089477396LL;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x217^((x218+x219)==x220));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x221 = INT32_MIN;
	static int16_t x222 = -1;
	volatile uint64_t x223 = UINT64_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t47 = INT32_MIN;

	t47 = (x221^((x222+x223)==x224));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = -1;
	uint8_t x227 = 3U;

	t48 = (x225^((x226+x227)==x228));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x230 = 210;
	uint64_t x231 = 189216538586022LLU;
	volatile uint8_t x232 = UINT8_MAX;
	volatile int32_t t49 = -123980;

	t49 = (x229^((x230+x231)==x232));

	if (t49 != -8164) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x233 = INT16_MIN;
	static uint16_t x234 = UINT16_MAX;
	uint8_t x236 = UINT8_MAX;

	t50 = (x233^((x234+x235)==x236));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x237 = 1U;
	int32_t x238 = -1;
	int8_t x240 = -1;
	int32_t t51 = 212;

	t51 = (x237^((x238+x239)==x240));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x241 = 37U;
	static uint64_t x242 = 103142LLU;
	int64_t x243 = 865080LL;
	int64_t x244 = -64667599149606LL;

	t52 = (x241^((x242+x243)==x244));

	if (t52 != 37) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x246 = UINT8_MAX;
	int32_t x248 = 424885337;
	volatile int32_t t53 = 3;

	t53 = (x245^((x246+x247)==x248));

	if (t53 != -324052763) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x249 = 1U;
	volatile int64_t x250 = -14LL;
	static volatile uint8_t x251 = 17U;
	static int32_t t54 = 1922972;

	t54 = (x249^((x250+x251)==x252));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -7202671518712978LL;
	volatile int8_t x254 = -1;
	uint32_t x255 = 11743148U;
	int32_t x256 = INT32_MIN;
	static volatile int64_t t55 = 55773227LL;

	t55 = (x253^((x254+x255)==x256));

	if (t55 != -7202671518712978LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	int16_t x259 = -1;
	volatile int32_t t56 = -108801;

	t56 = (x257^((x258+x259)==x260));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MAX;
	static volatile int8_t x264 = INT8_MIN;
	volatile int32_t t57 = 130980;

	t57 = (x261^((x262+x263)==x264));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t58 = 3476;

	t58 = (x265^((x266+x267)==x268));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x270 = 2LL;
	static uint64_t x271 = 498085937599765325LLU;
	int8_t x272 = 0;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x269^((x270+x271)==x272));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = 79U;
	static volatile int8_t x274 = INT8_MAX;
	uint8_t x275 = 81U;
	volatile int32_t t60 = -1;

	t60 = (x273^((x274+x275)==x276));

	if (t60 != 79) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = -1;
	int8_t x278 = -1;
	int64_t x279 = -1LL;
	int32_t x280 = INT32_MIN;

	t61 = (x277^((x278+x279)==x280));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x283 = INT16_MAX;
	uint64_t x284 = UINT64_MAX;
	int64_t t62 = 860166LL;

	t62 = (x281^((x282+x283)==x284));

	if (t62 != -26LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = -378;
	volatile uint64_t x291 = UINT64_MAX;
	int64_t x292 = -199LL;

	t63 = (x289^((x290+x291)==x292));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x293 = UINT16_MAX;
	static uint16_t x294 = UINT16_MAX;
	int8_t x295 = INT8_MIN;
	int8_t x296 = 4;
	int32_t t64 = 104;

	t64 = (x293^((x294+x295)==x296));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x298 = -1;
	static volatile uint8_t x299 = 21U;
	int64_t x300 = INT64_MIN;

	t65 = (x297^((x298+x299)==x300));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x301 = 260189244LLU;
	int8_t x303 = INT8_MIN;
	volatile uint64_t t66 = 22833454LLU;

	t66 = (x301^((x302+x303)==x304));

	if (t66 != 260189244LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = INT64_MAX;
	volatile uint16_t x306 = 1U;
	static uint32_t x308 = 451U;
	int64_t t67 = INT64_MAX;

	t67 = (x305^((x306+x307)==x308));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -1;
	volatile uint8_t x310 = 0U;
	volatile int32_t x311 = INT32_MAX;
	volatile int32_t t68 = 152092;

	t68 = (x309^((x310+x311)==x312));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = 2948;
	volatile uint16_t x315 = 840U;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x313^((x314+x315)==x316));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x317 = INT8_MIN;
	static int32_t x318 = -1;
	volatile int16_t x319 = INT16_MAX;
	int32_t t70 = 3;

	t70 = (x317^((x318+x319)==x320));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = INT16_MAX;
	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int64_t x324 = -1LL;
	int32_t t71 = 792206544;

	t71 = (x321^((x322+x323)==x324));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = INT32_MAX;
	static uint16_t x330 = UINT16_MAX;
	uint64_t x331 = 56LLU;
	static int32_t t72 = INT32_MAX;

	t72 = (x329^((x330+x331)==x332));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x334 = INT8_MAX;
	int8_t x335 = -1;
	int64_t x336 = -12357955794463926LL;
	volatile int32_t t73 = -91126808;

	t73 = (x333^((x334+x335)==x336));

	if (t73 != 403) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 42U;
	uint32_t x338 = 11783U;
	volatile int8_t x339 = 29;
	volatile int32_t t74 = 288670;

	t74 = (x337^((x338+x339)==x340));

	if (t74 != 42) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x343 = -1;
	volatile int8_t x344 = INT8_MIN;
	volatile int32_t t75 = 3;

	t75 = (x341^((x342+x343)==x344));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x345 = 908;
	static int64_t x346 = 23292820828701170LL;
	static uint8_t x347 = UINT8_MAX;
	int32_t t76 = -3299801;

	t76 = (x345^((x346+x347)==x348));

	if (t76 != 908) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x349 = 31U;
	int8_t x352 = 6;
	int32_t t77 = 126611497;

	t77 = (x349^((x350+x351)==x352));

	if (t77 != 31) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x356 = 137305;

	t78 = (x353^((x354+x355)==x356));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = -1;
	int8_t x359 = INT8_MIN;
	int16_t x360 = 0;
	volatile int32_t t79 = 1;

	t79 = (x357^((x358+x359)==x360));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = -63;
	int64_t x362 = -884008451732271LL;
	uint8_t x363 = 21U;
	static int32_t t80 = 32591;

	t80 = (x361^((x362+x363)==x364));

	if (t80 != -63) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = 61;
	int16_t x368 = INT16_MIN;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x365^((x366+x367)==x368));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -1;
	static uint8_t x371 = 43U;
	int32_t t82 = 2;

	t82 = (x369^((x370+x371)==x372));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = -1063973610446154LL;
	static uint8_t x375 = 110U;
	volatile int32_t x376 = 485753737;
	int64_t t83 = INT64_MIN;

	t83 = (x373^((x374+x375)==x376));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x377 = -1;
	int16_t x378 = INT16_MAX;
	static int8_t x379 = INT8_MIN;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t84 = -2194902;

	t84 = (x377^((x378+x379)==x380));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x381 = 6787996U;
	static volatile int8_t x382 = 57;
	uint32_t x383 = 57984U;
	static volatile uint32_t x384 = 50290U;
	volatile uint32_t t85 = 226553733U;

	t85 = (x381^((x382+x383)==x384));

	if (t85 != 6787996U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x389 = INT8_MIN;
	static volatile int16_t x390 = INT16_MAX;
	int64_t x391 = INT64_MIN;
	volatile int32_t t86 = 6;

	t86 = (x389^((x390+x391)==x392));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = 669;
	int64_t x394 = -1LL;
	static int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t87 = 1072;

	t87 = (x393^((x394+x395)==x396));

	if (t87 != 669) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = INT8_MAX;
	static volatile int64_t x398 = -1LL;
	static volatile uint16_t x399 = 500U;
	volatile uint64_t x400 = UINT64_MAX;
	static int32_t t88 = 7723769;

	t88 = (x397^((x398+x399)==x400));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x405 = 1603663LLU;
	int8_t x406 = INT8_MIN;
	static int16_t x407 = INT16_MIN;
	int32_t x408 = -817724623;
	uint64_t t89 = 0LLU;

	t89 = (x405^((x406+x407)==x408));

	if (t89 != 1603663LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = 6U;
	uint8_t x411 = 1U;
	int16_t x412 = INT16_MIN;
	volatile int32_t t90 = 0;

	t90 = (x409^((x410+x411)==x412));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x414 = 122724047984370LLU;
	uint64_t x415 = 238LLU;
	int64_t x416 = INT64_MIN;

	t91 = (x413^((x414+x415)==x416));

	if (t91 != 54607822082523LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x421 = UINT64_MAX;
	int8_t x422 = 5;
	int16_t x423 = 723;
	volatile int8_t x424 = -1;

	t92 = (x421^((x422+x423)==x424));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = 14;
	int8_t x426 = INT8_MIN;
	uint16_t x427 = 22U;

	t93 = (x425^((x426+x427)==x428));

	if (t93 != 14) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MIN;
	int32_t x435 = -1;
	int8_t x436 = INT8_MAX;
	volatile int32_t t94 = -209510131;

	t94 = (x433^((x434+x435)==x436));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = 1LL;
	uint8_t x438 = 121U;
	static volatile int8_t x439 = INT8_MIN;
	volatile uint16_t x440 = UINT16_MAX;

	t95 = (x437^((x438+x439)==x440));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = -1;
	int16_t x442 = INT16_MAX;
	int32_t x443 = INT32_MIN;

	t96 = (x441^((x442+x443)==x444));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = -5LL;
	static int32_t x447 = -2;
	int64_t x448 = INT64_MAX;
	int64_t t97 = -2727255197511LL;

	t97 = (x445^((x446+x447)==x448));

	if (t97 != -5LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x455 = -1LL;
	uint32_t x456 = 11339198U;
	volatile uint32_t t98 = 96198840U;

	t98 = (x453^((x454+x455)==x456));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = INT32_MAX;
	int64_t x459 = INT64_MIN;
	volatile int32_t t99 = INT32_MAX;

	t99 = (x457^((x458+x459)==x460));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

