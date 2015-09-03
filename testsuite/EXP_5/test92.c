#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
volatile int32_t x8 = 107532;
static int32_t t1 = -116154808;
int32_t x16 = INT32_MAX;
static volatile int32_t x19 = 5912678;
volatile uint32_t t3 = 1959710661U;
int32_t t5 = -291;
static uint16_t x37 = 145U;
volatile int8_t x42 = INT8_MIN;
uint64_t x50 = 201030040938LLU;
uint16_t x57 = 447U;
uint16_t x66 = 3U;
uint16_t x67 = UINT16_MAX;
int16_t x69 = 12053;
int16_t x74 = INT16_MIN;
uint16_t x75 = UINT16_MAX;
volatile int32_t t16 = INT32_MAX;
uint64_t x92 = 30109282331LLU;
int32_t x97 = -1;
uint32_t x99 = 291128U;
static volatile int32_t t20 = 7409467;
volatile int32_t t21 = INT32_MAX;
uint32_t x113 = UINT32_MAX;
uint32_t x118 = UINT32_MAX;
int16_t x121 = -5;
int16_t x123 = INT16_MIN;
static uint64_t x124 = 13701LLU;
volatile uint16_t x125 = 6852U;
int8_t x126 = INT8_MAX;
volatile int64_t t26 = INT64_MAX;
uint8_t x133 = 4U;
int32_t x134 = -1;
static volatile uint8_t x145 = UINT8_MAX;
uint16_t x146 = 2006U;
static int64_t x150 = -4800134LL;
int32_t x152 = -1;
int64_t x155 = 151LL;
volatile int8_t x159 = INT8_MIN;
static int32_t t32 = -147731;
static volatile int32_t t33 = -2;
uint32_t x169 = 277755366U;
static volatile int16_t x171 = INT16_MIN;
uint32_t x174 = 237U;
int16_t x180 = -2301;
volatile int64_t x185 = 367985LL;
static int8_t x189 = INT8_MAX;
volatile int64_t x196 = 51LL;
volatile int32_t t41 = 114820;
int16_t x200 = -1;
static uint32_t t43 = 1184701U;
int8_t x207 = -1;
uint64_t x212 = UINT64_MAX;
int64_t t45 = -4415894577LL;
static int8_t x217 = INT8_MAX;
uint32_t x226 = UINT32_MAX;
static uint16_t x227 = UINT16_MAX;
volatile int32_t t49 = INT32_MIN;
static int64_t x229 = INT64_MAX;
volatile int32_t t51 = 0;
int32_t t54 = 2;
int64_t x259 = 416846LL;
uint32_t x260 = 315563U;
volatile int32_t t57 = INT32_MAX;
volatile uint16_t x270 = 1006U;
volatile int32_t t58 = -9;
int16_t x276 = -1;
int8_t x295 = -1;
uint8_t x297 = 50U;
static volatile int64_t x299 = 3693215638LL;
static uint32_t t65 = 0U;
uint32_t x315 = UINT32_MAX;
uint64_t x320 = UINT64_MAX;
volatile uint32_t x322 = 98740009U;
int8_t x323 = -1;
int32_t x328 = 3327174;
uint8_t x335 = UINT8_MAX;
volatile uint8_t x352 = 0U;
int8_t x355 = 59;
int8_t x361 = INT8_MAX;
int16_t x365 = INT16_MIN;
static int16_t x368 = 22;
static int16_t x370 = -1;
int32_t x371 = -2154;
int32_t x373 = INT32_MIN;
static uint8_t x374 = 1U;
volatile int32_t t80 = INT32_MIN;
volatile uint64_t x378 = UINT64_MAX;
int8_t x379 = 0;
int8_t x386 = 1;
int8_t x394 = -1;
int32_t x395 = -1;
int16_t x396 = INT16_MAX;
volatile int32_t t84 = -21;
volatile int32_t x397 = -396200;
int32_t t85 = 108;
int8_t x402 = INT8_MIN;
volatile int8_t x404 = INT8_MAX;
int64_t x406 = INT64_MAX;
int64_t x426 = -1LL;
int8_t x444 = 33;
static uint64_t x446 = 6853313427548938155LLU;
int16_t x448 = 1;
volatile int64_t x454 = INT64_MIN;
int32_t x467 = 1801;
static int32_t t99 = 32044;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x2 = 367492U;
	uint16_t x3 = 237U;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x1+((x2+x3)==x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int8_t x7 = -28;

	t1 = (x5+((x6+x7)==x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MIN;
	uint32_t x15 = 1U;
	uint64_t t2 = UINT64_MAX;

	t2 = (x13+((x14+x15)==x16));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 1039632U;
	volatile int32_t x18 = -1;
	int64_t x20 = -1LL;

	t3 = (x17+((x18+x19)==x20));

	if (t3 != 1039632U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = 9336322U;
	int64_t x26 = -1LL;
	int16_t x27 = -1;
	int16_t x28 = INT16_MAX;
	volatile uint32_t t4 = 5058794U;

	t4 = (x25+((x26+x27)==x28));

	if (t4 != 9336322U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	static uint16_t x30 = UINT16_MAX;
	int16_t x31 = INT16_MIN;
	static uint64_t x32 = 584345168312LLU;

	t5 = (x29+((x30+x31)==x32));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = -1;
	static uint32_t x35 = 51U;
	static uint16_t x36 = 10U;
	int32_t t6 = -510597989;

	t6 = (x33+((x34+x35)==x36));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x38 = 18229LL;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t7 = -854532;

	t7 = (x37+((x38+x39)==x40));

	if (t7 != 145) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	int32_t x43 = 334;
	static uint16_t x44 = 171U;
	int32_t t8 = 1350593;

	t8 = (x41+((x42+x43)==x44));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x45 = 313846309971632047LLU;
	static int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MAX;
	uint32_t x48 = UINT32_MAX;
	uint64_t t9 = 2LLU;

	t9 = (x45+((x46+x47)==x48));

	if (t9 != 313846309971632047LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 2736555;
	int32_t x51 = -447694;
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = -54519427;

	t10 = (x49+((x50+x51)==x52));

	if (t10 != 2736555) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = -8027LL;
	static int64_t x54 = 1307896459989370LL;
	int8_t x55 = INT8_MIN;
	volatile int64_t x56 = INT64_MAX;
	volatile int64_t t11 = 43377097098LL;

	t11 = (x53+((x54+x55)==x56));

	if (t11 != -8027LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x58 = UINT16_MAX;
	volatile int64_t x59 = -3151296344227LL;
	uint64_t x60 = UINT64_MAX;
	static int32_t t12 = 129087847;

	t12 = (x57+((x58+x59)==x60));

	if (t12 != 447) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x65 = UINT32_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x65+((x66+x67)==x68));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x70 = INT64_MAX;
	volatile int64_t x71 = INT64_MIN;
	static uint32_t x72 = UINT32_MAX;
	volatile int32_t t14 = 5;

	t14 = (x69+((x70+x71)==x72));

	if (t14 != 12053) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x76 = 8438205651LLU;
	int32_t t15 = INT32_MIN;

	t15 = (x73+((x74+x75)==x76));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	static int32_t x79 = -1;
	int64_t x80 = INT64_MIN;

	t16 = (x77+((x78+x79)==x80));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MAX;
	volatile int16_t x86 = 6;
	int16_t x87 = INT16_MIN;
	uint64_t x88 = 3LLU;
	volatile int32_t t17 = 95;

	t17 = (x85+((x86+x87)==x88));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MAX;
	static volatile uint8_t x90 = 0U;
	uint16_t x91 = 102U;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x89+((x90+x91)==x92));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x98 = UINT64_MAX;
	static uint16_t x100 = 7460U;
	volatile int32_t t19 = -915;

	t19 = (x97+((x98+x99)==x100));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	uint8_t x108 = 6U;

	t20 = (x105+((x106+x107)==x108));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MAX;
	uint16_t x110 = 194U;
	int8_t x111 = -1;
	static int16_t x112 = 2371;

	t21 = (x109+((x110+x111)==x112));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x114 = 3;
	static uint16_t x115 = UINT16_MAX;
	int16_t x116 = 0;
	uint32_t t22 = UINT32_MAX;

	t22 = (x113+((x114+x115)==x116));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x117 = INT16_MAX;
	uint8_t x119 = UINT8_MAX;
	volatile int64_t x120 = 999584284048LL;
	volatile int32_t t23 = -101108;

	t23 = (x117+((x118+x119)==x120));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x122 = 58U;
	int32_t t24 = -2;

	t24 = (x121+((x122+x123)==x124));

	if (t24 != -5) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;
	int32_t t25 = -1;

	t25 = (x125+((x126+x127)==x128));

	if (t25 != 6852) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = INT64_MAX;
	int16_t x130 = -1;
	int64_t x131 = INT64_MAX;
	volatile int32_t x132 = 3;

	t26 = (x129+((x130+x131)==x132));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x135 = 113983U;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t27 = 723873640;

	t27 = (x133+((x134+x135)==x136));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = 3651U;
	static int32_t x138 = INT32_MIN;
	volatile uint32_t x139 = 9968370U;
	volatile int16_t x140 = 1;
	int32_t t28 = -14025;

	t28 = (x137+((x138+x139)==x140));

	if (t28 != 3651) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x147 = 21;
	int64_t x148 = -1LL;
	int32_t t29 = 66;

	t29 = (x145+((x146+x147)==x148));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	int32_t t30 = -675;

	t30 = (x149+((x150+x151)==x152));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = 1565755279LL;
	uint8_t x154 = 3U;
	int64_t x156 = INT64_MIN;
	int64_t t31 = 39104LL;

	t31 = (x153+((x154+x155)==x156));

	if (t31 != 1565755279LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -14853;
	int8_t x158 = INT8_MIN;
	int16_t x160 = -1;

	t32 = (x157+((x158+x159)==x160));

	if (t32 != -14853) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = 134U;
	int32_t x162 = INT32_MAX;
	int64_t x163 = -11910956582533LL;
	static int64_t x164 = -617424294835LL;

	t33 = (x161+((x162+x163)==x164));

	if (t33 != 134) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = INT32_MAX;
	static uint32_t x167 = UINT32_MAX;
	int16_t x168 = -1;
	volatile int32_t t34 = 13004019;

	t34 = (x165+((x166+x167)==x168));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x170 = 70427139LLU;
	static int8_t x172 = 0;
	uint32_t t35 = 14398811U;

	t35 = (x169+((x170+x171)==x172));

	if (t35 != 277755366U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 6U;
	static uint32_t x175 = 95U;
	static int64_t x176 = INT64_MAX;
	static volatile int32_t t36 = 115389;

	t36 = (x173+((x174+x175)==x176));

	if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = 33;
	static int8_t x178 = INT8_MAX;
	static volatile int8_t x179 = -1;
	static int32_t t37 = 153218462;

	t37 = (x177+((x178+x179)==x180));

	if (t37 != 33) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = -1;
	volatile uint8_t x182 = UINT8_MAX;
	static int8_t x183 = -1;
	int16_t x184 = INT16_MIN;
	volatile int32_t t38 = 62;

	t38 = (x181+((x182+x183)==x184));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x186 = -1;
	int64_t x187 = INT64_MAX;
	int8_t x188 = -12;
	int64_t t39 = 245423605175015109LL;

	t39 = (x185+((x186+x187)==x188));

	if (t39 != 367985LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x190 = INT16_MIN;
	uint16_t x191 = 38U;
	static int8_t x192 = 0;
	int32_t t40 = -18052064;

	t40 = (x189+((x190+x191)==x192));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x193 = -1;
	static uint64_t x194 = UINT64_MAX;
	int16_t x195 = 0;

	t41 = (x193+((x194+x195)==x196));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x197 = 248354LLU;
	int16_t x198 = INT16_MAX;
	int8_t x199 = -1;
	uint64_t t42 = 8LLU;

	t42 = (x197+((x198+x199)==x200));

	if (t42 != 248354LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 30298736U;
	int8_t x202 = -1;
	int32_t x203 = INT32_MAX;
	uint64_t x204 = 1568813186621LLU;

	t43 = (x201+((x202+x203)==x204));

	if (t43 != 30298736U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -1;
	static uint64_t x206 = 8347963LLU;
	int8_t x208 = INT8_MIN;
	volatile int32_t t44 = 27725351;

	t44 = (x205+((x206+x207)==x208));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x209 = -1LL;
	static int64_t x210 = INT64_MIN;
	uint64_t x211 = UINT64_MAX;

	t45 = (x209+((x210+x211)==x212));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = 9401U;
	int64_t x215 = 1010699396511745LL;
	int16_t x216 = 5;
	int32_t t46 = 0;

	t46 = (x213+((x214+x215)==x216));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x218 = INT64_MIN;
	uint16_t x219 = UINT16_MAX;
	static uint32_t x220 = 1U;
	int32_t t47 = 104820;

	t47 = (x217+((x218+x219)==x220));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x221 = -6645;
	volatile int32_t x222 = INT32_MAX;
	uint64_t x223 = 41595427307240901LLU;
	int32_t x224 = -44362;
	static volatile int32_t t48 = -46640;

	t48 = (x221+((x222+x223)==x224));

	if (t48 != -6645) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = INT32_MIN;
	int8_t x228 = 1;

	t49 = (x225+((x226+x227)==x228));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x230 = -1;
	int64_t x231 = -2LL;
	int64_t x232 = INT64_MIN;
	int64_t t50 = INT64_MAX;

	t50 = (x229+((x230+x231)==x232));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = 998625;
	int16_t x234 = INT16_MAX;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = 516378489U;

	t51 = (x233+((x234+x235)==x236));

	if (t51 != 998625) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = 1U;
	uint64_t x238 = 44472627144282LLU;
	int16_t x239 = -1;
	int32_t x240 = INT32_MAX;
	static volatile int32_t t52 = 2630;

	t52 = (x237+((x238+x239)==x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x241 = 1U;
	uint32_t x242 = 908308495U;
	int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MIN;
	uint32_t t53 = 3U;

	t53 = (x241+((x242+x243)==x244));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = INT16_MAX;
	static int64_t x250 = INT64_MIN;
	uint32_t x251 = 2866958U;
	int16_t x252 = INT16_MAX;

	t54 = (x249+((x250+x251)==x252));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MIN;
	int64_t x255 = -1LL;
	static uint8_t x256 = 34U;
	volatile int32_t t55 = 5;

	t55 = (x253+((x254+x255)==x256));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	int64_t t56 = INT64_MIN;

	t56 = (x257+((x258+x259)==x260));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MAX;
	static int8_t x263 = 1;
	int32_t x264 = -1024298;

	t57 = (x261+((x262+x263)==x264));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static volatile uint32_t x271 = UINT32_MAX;
	static uint64_t x272 = 434390017743264654LLU;

	t58 = (x269+((x270+x271)==x272));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = -19;
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = INT64_MIN;
	static int32_t t59 = 10977;

	t59 = (x273+((x274+x275)==x276));

	if (t59 != -19) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = 1043LL;
	static int64_t x278 = -45396522460114LL;
	int16_t x279 = -1;
	int32_t x280 = INT32_MIN;
	int64_t t60 = -5LL;

	t60 = (x277+((x278+x279)==x280));

	if (t60 != 1043LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MIN;
	volatile uint64_t x287 = 3LLU;
	int32_t x288 = INT32_MIN;
	uint32_t t61 = UINT32_MAX;

	t61 = (x285+((x286+x287)==x288));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x289 = 92U;
	uint32_t x290 = 50U;
	static int32_t x291 = -1;
	uint64_t x292 = 1269384LLU;
	static int32_t t62 = 11423559;

	t62 = (x289+((x290+x291)==x292));

	if (t62 != 92) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x293 = UINT16_MAX;
	uint16_t x294 = 165U;
	static int16_t x296 = -7656;
	int32_t t63 = -128952060;

	t63 = (x293+((x294+x295)==x296));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x298 = INT32_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t64 = -3419178;

	t64 = (x297+((x298+x299)==x300));

	if (t64 != 50) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = 968708U;
	uint32_t x302 = 3524055U;
	static volatile uint8_t x303 = 18U;
	int16_t x304 = INT16_MIN;

	t65 = (x301+((x302+x303)==x304));

	if (t65 != 968708U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = INT8_MAX;
	static int16_t x314 = -1;
	volatile uint64_t x316 = 1129464LLU;
	int32_t t66 = -73628;

	t66 = (x313+((x314+x315)==x316));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = 7LLU;
	volatile uint32_t x318 = 678396U;
	int8_t x319 = INT8_MIN;
	static uint64_t t67 = 12644064011093LLU;

	t67 = (x317+((x318+x319)==x320));

	if (t67 != 7LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x321 = -748358;
	uint8_t x324 = 7U;
	int32_t t68 = 73171;

	t68 = (x321+((x322+x323)==x324));

	if (t68 != -748358) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x325 = -155;
	static int8_t x326 = INT8_MIN;
	static volatile int32_t x327 = 5;
	volatile int32_t t69 = -465211725;

	t69 = (x325+((x326+x327)==x328));

	if (t69 != -155) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x329 = INT16_MIN;
	int32_t x330 = -230;
	int8_t x331 = INT8_MIN;
	static volatile uint32_t x332 = 1244593373U;
	int32_t t70 = -852703;

	t70 = (x329+((x330+x331)==x332));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = 58;
	static volatile int8_t x334 = -15;
	int16_t x336 = INT16_MIN;
	int32_t t71 = -6783432;

	t71 = (x333+((x334+x335)==x336));

	if (t71 != 58) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = -1;
	int16_t x338 = -1;
	uint8_t x339 = 54U;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t72 = 65880343;

	t72 = (x337+((x338+x339)==x340));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MAX;
	int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t73 = 1;

	t73 = (x345+((x346+x347)==x348));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x349 = 30878U;
	uint8_t x350 = 6U;
	int64_t x351 = -1LL;
	volatile uint32_t t74 = 32045U;

	t74 = (x349+((x350+x351)==x352));

	if (t74 != 30878U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = 3261038943676988LL;
	int8_t x356 = INT8_MIN;
	volatile int64_t t75 = INT64_MIN;

	t75 = (x353+((x354+x355)==x356));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = -1LL;
	static int8_t x358 = INT8_MAX;
	uint16_t x359 = 10U;
	int16_t x360 = INT16_MAX;
	volatile int64_t t76 = 1525367LL;

	t76 = (x357+((x358+x359)==x360));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x362 = 0U;
	static uint32_t x363 = 2U;
	static int32_t x364 = INT32_MIN;
	int32_t t77 = 309;

	t77 = (x361+((x362+x363)==x364));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x366 = -355929016011366312LL;
	int16_t x367 = 174;
	volatile int32_t t78 = -1738;

	t78 = (x365+((x366+x367)==x368));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = INT32_MIN;
	static int32_t x372 = -317;
	static volatile int32_t t79 = INT32_MIN;

	t79 = (x369+((x370+x371)==x372));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x375 = -1;
	static int16_t x376 = -1;

	t80 = (x373+((x374+x375)==x376));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = -1LL;
	int64_t x380 = INT64_MIN;
	volatile int64_t t81 = -18LL;

	t81 = (x377+((x378+x379)==x380));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = -1;
	int32_t x387 = INT32_MIN;
	static uint32_t x388 = 1579899119U;
	volatile int32_t t82 = -681;

	t82 = (x385+((x386+x387)==x388));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x389 = 231204459653487016LLU;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = 0U;
	int16_t x392 = INT16_MIN;
	uint64_t t83 = 2374598758677537LLU;

	t83 = (x389+((x390+x391)==x392));

	if (t83 != 231204459653487016LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = -1;

	t84 = (x393+((x394+x395)==x396));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	uint32_t x400 = 923848755U;

	t85 = (x397+((x398+x399)==x400));

	if (t85 != -396200) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = -88610250645324LL;
	static uint16_t x403 = UINT16_MAX;
	int64_t t86 = 71842623LL;

	t86 = (x401+((x402+x403)==x404));

	if (t86 != -88610250645324LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x405 = 0U;
	int32_t x407 = INT32_MIN;
	int32_t x408 = 28;
	volatile int32_t t87 = -1;

	t87 = (x405+((x406+x407)==x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x417 = 18053U;
	int16_t x418 = 816;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;
	static uint32_t t88 = 1907U;

	t88 = (x417+((x418+x419)==x420));

	if (t88 != 18053U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	volatile int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MAX;
	int32_t t89 = -2;

	t89 = (x421+((x422+x423)==x424));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x425 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	uint8_t x428 = 101U;
	static volatile int32_t t90 = INT32_MIN;

	t90 = (x425+((x426+x427)==x428));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x429 = INT64_MAX;
	int64_t x430 = INT64_MAX;
	int8_t x431 = -2;
	uint16_t x432 = UINT16_MAX;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x429+((x430+x431)==x432));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x433 = 5715U;
	int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = 357407U;
	static volatile int32_t t92 = 3124;

	t92 = (x433+((x434+x435)==x436));

	if (t92 != 5715) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x437 = -1;
	int8_t x438 = -9;
	uint16_t x439 = 233U;
	static volatile int32_t x440 = INT32_MIN;
	int32_t t93 = 1;

	t93 = (x437+((x438+x439)==x440));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x441 = INT16_MAX;
	int8_t x442 = INT8_MAX;
	static int32_t x443 = 0;
	volatile int32_t t94 = 4631;

	t94 = (x441+((x442+x443)==x444));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x445 = 792;
	volatile uint64_t x447 = 0LLU;
	int32_t t95 = 40;

	t95 = (x445+((x446+x447)==x448));

	if (t95 != 792) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = UINT8_MAX;
	volatile int64_t x455 = 227236141636068LL;
	volatile uint32_t x456 = 35318748U;
	volatile int32_t t96 = -933038292;

	t96 = (x453+((x454+x455)==x456));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x457 = INT64_MIN;
	volatile uint64_t x458 = UINT64_MAX;
	int16_t x459 = INT16_MIN;
	uint32_t x460 = 13983U;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x457+((x458+x459)==x460));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x461 = INT8_MIN;
	int32_t x462 = INT32_MAX;
	volatile uint32_t x463 = UINT32_MAX;
	uint64_t x464 = 46268163470158LLU;
	int32_t t98 = 33258;

	t98 = (x461+((x462+x463)==x464));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x465 = -1;
	uint64_t x466 = 69LLU;
	int8_t x468 = -1;

	t99 = (x465+((x466+x467)==x468));

	if (t99 != -1) { NG(); } else { ; }
	
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

