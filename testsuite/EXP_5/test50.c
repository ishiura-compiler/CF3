#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = INT32_MIN;
int64_t x14 = -1LL;
static uint32_t x17 = UINT32_MAX;
int8_t x21 = INT8_MIN;
static volatile uint16_t x22 = 1U;
uint16_t x23 = 1106U;
static volatile int64_t t4 = 517231192807385461LL;
volatile int32_t t5 = 4452;
volatile int8_t x35 = INT8_MIN;
static int8_t x40 = INT8_MIN;
uint32_t x42 = 16U;
uint32_t t8 = 40760U;
volatile int16_t x62 = INT16_MAX;
uint16_t x68 = 96U;
static int32_t x75 = INT32_MAX;
int16_t x79 = INT16_MAX;
int64_t t17 = -157476440LL;
int8_t x84 = INT8_MIN;
int32_t x91 = INT32_MIN;
uint32_t x96 = 1U;
int8_t x103 = INT8_MIN;
int32_t x104 = INT32_MIN;
int64_t x109 = -1LL;
int64_t x125 = INT64_MIN;
int64_t x128 = INT64_MIN;
static int32_t x130 = -1;
uint64_t t29 = 13248251LLU;
uint16_t x146 = 7U;
volatile int32_t x147 = 80190738;
volatile uint32_t t33 = 5953U;
uint32_t x162 = 495681U;
uint32_t x164 = 331U;
int16_t x174 = -1;
int8_t x178 = -1;
volatile int64_t t39 = -386211984LL;
int16_t x182 = 10;
volatile int8_t x190 = INT8_MIN;
uint8_t x197 = UINT8_MAX;
static volatile uint64_t x200 = 88LLU;
int8_t x219 = -1;
int64_t t48 = -1LL;
static uint64_t t49 = 824LLU;
volatile uint16_t x230 = 4U;
int16_t x231 = INT16_MAX;
int16_t x240 = -1;
uint16_t x241 = 3369U;
uint16_t x245 = 268U;
volatile int32_t x246 = INT32_MIN;
static int16_t x247 = 30;
volatile int64_t x252 = INT64_MIN;
int64_t t55 = 782378178LL;
static int16_t x256 = -159;
int16_t x263 = -1;
int16_t x264 = INT16_MIN;
int32_t x266 = INT32_MIN;
volatile uint64_t x267 = UINT64_MAX;
uint8_t x275 = 0U;
volatile int32_t t60 = 8200825;
uint8_t x277 = 6U;
volatile int64_t x287 = -1LL;
uint32_t x288 = 2859U;
uint32_t x290 = 577394U;
uint32_t x296 = 5U;
volatile int64_t t64 = 16933240LL;
static int8_t x297 = 2;
int32_t x303 = INT32_MIN;
volatile int64_t t66 = 2756971397033LL;
int16_t x314 = -1644;
volatile uint64_t x319 = UINT64_MAX;
volatile int16_t x321 = INT16_MIN;
static uint32_t x324 = 108577U;
int16_t x327 = INT16_MAX;
uint16_t x341 = UINT16_MAX;
int16_t x342 = -2;
int16_t x345 = -1;
volatile uint64_t x347 = 49LLU;
static volatile uint16_t x351 = UINT16_MAX;
uint16_t x353 = 2382U;
int64_t x354 = -3521446LL;
int64_t x355 = INT64_MAX;
int8_t x364 = INT8_MIN;
int16_t x365 = -1;
uint8_t x385 = 2U;
int32_t x389 = INT32_MAX;
uint8_t x391 = 0U;
static int32_t t81 = 30;
int64_t x393 = INT64_MIN;
uint64_t x394 = UINT64_MAX;
int8_t x399 = INT8_MIN;
volatile int32_t t83 = 0;
int32_t x409 = -1;
static volatile uint16_t x417 = 751U;
int8_t x418 = INT8_MIN;
static int64_t x419 = -1LL;
uint64_t t87 = 45485080LLU;
int16_t x438 = -1;
int32_t t91 = 107;
int16_t x453 = 5559;
static uint8_t x455 = UINT8_MAX;
int32_t t93 = 14314;
static int16_t x467 = 33;
uint8_t x468 = 12U;
volatile uint32_t x469 = 65057805U;
uint64_t t95 = 16429038LLU;
int8_t x474 = INT8_MIN;
uint32_t t96 = 18365340U;
int64_t x479 = -1LL;
volatile int64_t x480 = -1LL;
static uint64_t x482 = UINT64_MAX;
uint16_t x483 = 8756U;
int32_t x488 = INT32_MIN;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	uint8_t x2 = 9U;
	static uint32_t x3 = 1U;
	int32_t x4 = 2;
	volatile uint32_t t0 = 90992123U;

	t0 = (x1&((x2+x3)/x4));

	if (t0 != 5U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x10 = 8U;
	uint8_t x11 = 10U;
	int64_t x12 = -1LL;
	volatile int64_t t1 = 28LL;

	t1 = (x9&((x10+x11)/x12));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	static volatile int8_t x15 = -7;
	int8_t x16 = INT8_MAX;
	int64_t t2 = -542943LL;

	t2 = (x13&((x14+x15)/x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	uint8_t x19 = 1U;
	static uint8_t x20 = 5U;
	volatile uint32_t t3 = 68184573U;

	t3 = (x17&((x18+x19)/x20));

	if (t3 != 3865470567U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x24 = INT64_MAX;

	t4 = (x21&((x22+x23)/x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 13U;
	volatile uint8_t x26 = 105U;
	static int8_t x27 = INT8_MIN;
	static int8_t x28 = INT8_MIN;

	t5 = (x25&((x26+x27)/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = 21;
	static int64_t x36 = INT64_MIN;
	int64_t t6 = 662792739LL;

	t6 = (x33&((x34+x35)/x36));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	uint32_t t7 = 347159U;

	t7 = (x37&((x38+x39)/x40));

	if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = 84U;
	volatile int16_t x43 = 205;
	uint16_t x44 = 22U;

	t8 = (x41&((x42+x43)/x44));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = INT64_MAX;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	int32_t x48 = 1;
	int64_t t9 = -21LL;

	t9 = (x45&((x46+x47)/x48));

	if (t9 != 65407LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = 1;
	volatile int16_t x50 = INT16_MIN;
	static int32_t x51 = -41261301;
	uint8_t x52 = 21U;
	static volatile int32_t t10 = -15;

	t10 = (x49&((x50+x51)/x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = -224086846780565LL;
	int8_t x55 = -1;
	static uint16_t x56 = 127U;
	volatile int64_t t11 = -1864428102947756989LL;

	t11 = (x53&((x54+x55)/x56));

	if (t11 != 36LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = -1;
	volatile uint32_t x58 = 6009304U;
	uint8_t x59 = 112U;
	int8_t x60 = INT8_MAX;
	volatile uint32_t t12 = 41730706U;

	t12 = (x57&((x58+x59)/x60));

	if (t12 != 47318U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = 48805789U;
	int8_t x63 = 19;
	static uint64_t x64 = 1LLU;
	uint64_t t13 = 417247753685651805LLU;

	t13 = (x61&((x62+x63)/x64));

	if (t13 != 32784LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 44;
	static int8_t x66 = INT8_MIN;
	static uint32_t x67 = 20U;
	uint32_t t14 = 1733978678U;

	t14 = (x65&((x66+x67)/x68));

	if (t14 != 40U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MIN;
	static volatile uint32_t x71 = 15777586U;
	static int8_t x72 = INT8_MIN;
	static uint32_t t15 = 192495606U;

	t15 = (x69&((x70+x71)/x72));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 30762LLU;
	int8_t x74 = -1;
	int8_t x76 = 2;
	volatile uint64_t t16 = 24444LLU;

	t16 = (x73&((x74+x75)/x76));

	if (t16 != 30762LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x77 = INT32_MAX;
	static int64_t x78 = INT64_MIN;
	volatile int16_t x80 = INT16_MIN;

	t17 = (x77&((x78+x79)/x80));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = 885761;
	int8_t x82 = INT8_MIN;
	static volatile int16_t x83 = -1;
	static volatile int32_t t18 = 0;

	t18 = (x81&((x82+x83)/x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = -13622;
	int8_t x90 = 6;
	int64_t x92 = -1LL;
	static int64_t t19 = 20LL;

	t19 = (x89&((x90+x91)/x92));

	if (t19 != 2147470026LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MIN;
	int64_t t20 = 91004267LL;

	t20 = (x93&((x94+x95)/x96));

	if (t20 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = INT8_MAX;
	uint32_t x102 = 1824109U;
	uint32_t t21 = 2854U;

	t21 = (x101&((x102+x103)/x104));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = INT64_MIN;
	int16_t x106 = 248;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -15;
	volatile uint64_t t22 = 43LLU;

	t22 = (x105&((x106+x107)/x108));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x110 = 18U;
	uint8_t x111 = 106U;
	int64_t x112 = INT64_MIN;
	int64_t t23 = 55LL;

	t23 = (x109&((x110+x111)/x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MIN;
	int8_t x114 = -14;
	int8_t x115 = INT8_MIN;
	int8_t x116 = -45;
	volatile int32_t t24 = -101300;

	t24 = (x113&((x114+x115)/x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x117 = 1563422565LLU;
	int16_t x118 = 5554;
	uint8_t x119 = 0U;
	static int8_t x120 = -11;
	static volatile uint64_t t25 = 4072033143LLU;

	t25 = (x117&((x118+x119)/x120));

	if (t25 != 1563422208LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x121 = UINT8_MAX;
	static int64_t x122 = -91185726911178375LL;
	static volatile int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MAX;
	volatile int64_t t26 = 707682886789LL;

	t26 = (x121&((x122+x123)/x124));

	if (t26 != 228LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = INT32_MIN;
	static volatile int32_t x127 = 39;
	volatile int64_t t27 = -466177565605660LL;

	t27 = (x125&((x126+x127)/x128));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x129 = INT16_MIN;
	static int16_t x131 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t28 = 11844654LLU;

	t28 = (x129&((x130+x131)/x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = INT64_MAX;
	volatile uint16_t x134 = 0U;
	volatile uint64_t x135 = 26LLU;
	int16_t x136 = 31;

	t29 = (x133&((x134+x135)/x136));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -6258706;
	uint64_t x138 = 0LLU;
	int8_t x139 = -1;
	int16_t x140 = INT16_MAX;
	uint64_t t30 = 70LLU;

	t30 = (x137&((x138+x139)/x140));

	if (t30 != 562967133290496LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x141 = 0U;
	static volatile uint8_t x142 = 0U;
	volatile uint64_t x143 = UINT64_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile uint64_t t31 = 609586265LLU;

	t31 = (x141&((x142+x143)/x144));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = -718105015807356LL;
	int16_t x148 = INT16_MIN;
	int64_t t32 = 29893351609664LL;

	t32 = (x145&((x146+x147)/x148));

	if (t32 != -718105015807488LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = UINT32_MAX;
	volatile uint8_t x150 = 1U;
	uint8_t x151 = UINT8_MAX;
	static int16_t x152 = INT16_MIN;

	t33 = (x149&((x150+x151)/x152));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x153 = 0U;
	static volatile int64_t x154 = INT64_MAX;
	int32_t x155 = INT32_MIN;
	uint32_t x156 = 14353U;
	int64_t t34 = 424458LL;

	t34 = (x153&((x154+x155)/x156));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -1;
	int8_t x158 = -1;
	static int32_t x159 = -1;
	int32_t x160 = -1190;
	volatile int32_t t35 = 1;

	t35 = (x157&((x158+x159)/x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MAX;
	int32_t x163 = -1;
	volatile int64_t t36 = 64LL;

	t36 = (x161&((x162+x163)/x164));

	if (t36 != 1497LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MIN;
	int64_t x172 = -1LL;
	int64_t t37 = 28197356836LL;

	t37 = (x169&((x170+x171)/x172));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 4740U;
	volatile int32_t x175 = INT32_MAX;
	static volatile int16_t x176 = -4;
	volatile int32_t t38 = 0;

	t38 = (x173&((x174+x175)/x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = UINT32_MAX;
	static uint32_t x179 = 475684U;
	static int64_t x180 = INT64_MIN;

	t39 = (x177&((x178+x179)/x180));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x181 = 342U;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MAX;
	volatile int32_t t40 = -31447535;

	t40 = (x181&((x182+x183)/x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	volatile int64_t x186 = INT64_MIN;
	static int16_t x187 = INT16_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t41 = 3LLU;

	t41 = (x185&((x186+x187)/x188));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x189 = -1;
	volatile int32_t x191 = -1;
	static int8_t x192 = -1;
	volatile int32_t t42 = -1;

	t42 = (x189&((x190+x191)/x192));

	if (t42 != 129) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x193 = -1LL;
	static int8_t x194 = INT8_MAX;
	uint8_t x195 = 1U;
	int32_t x196 = INT32_MIN;
	int64_t t43 = -10477505712669LL;

	t43 = (x193&((x194+x195)/x196));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x198 = 4220;
	uint16_t x199 = 46U;
	uint64_t t44 = 1695LLU;

	t44 = (x197&((x198+x199)/x200));

	if (t44 != 48LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x201 = 1U;
	int16_t x202 = 210;
	volatile int16_t x203 = -1;
	uint8_t x204 = 68U;
	static int32_t t45 = 1;

	t45 = (x201&((x202+x203)/x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = 2007743361400108LLU;
	int32_t x211 = INT32_MAX;
	int16_t x212 = INT16_MAX;
	volatile uint64_t t46 = 526621497278103LLU;

	t46 = (x209&((x210+x211)/x212));

	if (t46 != 18LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	uint16_t x220 = 33U;
	int32_t t47 = -33372;

	t47 = (x217&((x218+x219)/x220));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x221 = 28U;
	int32_t x222 = -1;
	int64_t x223 = INT64_MAX;
	int32_t x224 = INT32_MIN;

	t48 = (x221&((x222+x223)/x224));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x225 = INT8_MIN;
	uint64_t x226 = 15249808622LLU;
	volatile int8_t x227 = -3;
	volatile int8_t x228 = INT8_MIN;

	t49 = (x225&((x226+x227)/x228));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = INT64_MIN;
	int8_t x232 = 1;
	static int64_t t50 = 21LL;

	t50 = (x229&((x230+x231)/x232));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x233 = -1;
	int32_t x234 = -10864932;
	static int8_t x235 = -1;
	static int8_t x236 = -1;
	volatile int32_t t51 = -2072;

	t51 = (x233&((x234+x235)/x236));

	if (t51 != 10864933) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = -1;
	int16_t x239 = 15641;
	int32_t t52 = -61621;

	t52 = (x237&((x238+x239)/x240));

	if (t52 != -15744) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x242 = INT16_MAX;
	volatile int8_t x243 = INT8_MIN;
	static uint32_t x244 = 86383U;
	uint32_t t53 = 3771198U;

	t53 = (x241&((x242+x243)/x244));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x248 = 2671238748980LLU;
	uint64_t t54 = 2LLU;

	t54 = (x245&((x246+x247)/x248));

	if (t54 != 264LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int32_t x250 = -36;
	int8_t x251 = 6;

	t55 = (x249&((x250+x251)/x252));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = UINT64_MAX;
	volatile uint64_t t56 = 7284LLU;

	t56 = (x253&((x254+x255)/x256));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -644;
	int16_t x258 = INT16_MIN;
	static int16_t x259 = INT16_MIN;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t57 = 5644962U;

	t57 = (x257&((x258+x259)/x260));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x261 = INT16_MIN;
	static int32_t x262 = 61;
	int32_t t58 = 13473;

	t58 = (x261&((x262+x263)/x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x265 = 61;
	volatile int8_t x268 = -40;
	uint64_t t59 = 972LLU;

	t59 = (x265&((x266+x267)/x268));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = -1;
	int16_t x276 = INT16_MIN;

	t60 = (x273&((x274+x275)/x276));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x278 = INT32_MAX;
	int8_t x279 = -1;
	static uint64_t x280 = 271085722006234LLU;
	volatile uint64_t t61 = 43270070LLU;

	t61 = (x277&((x278+x279)/x280));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x285 = INT8_MIN;
	static int64_t x286 = -668989LL;
	volatile int64_t t62 = 7258618932023538LL;

	t62 = (x285&((x286+x287)/x288));

	if (t62 != -256LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x289 = INT8_MAX;
	static int8_t x291 = -1;
	int64_t x292 = INT64_MIN;
	volatile int64_t t63 = 18025532215LL;

	t63 = (x289&((x290+x291)/x292));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x293 = INT64_MIN;
	static int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MAX;

	t64 = (x293&((x294+x295)/x296));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x298 = 0U;
	uint32_t x299 = 1693592U;
	uint16_t x300 = 3549U;
	volatile uint32_t t65 = 6U;

	t65 = (x297&((x298+x299)/x300));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	uint8_t x302 = 55U;
	volatile int64_t x304 = -1LL;

	t66 = (x301&((x302+x303)/x304));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 105913108842388687LLU;
	static int8_t x308 = 1;
	uint64_t t67 = 103LLU;

	t67 = (x305&((x306+x307)/x308));

	if (t67 != 79LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x313 = 11832127U;
	uint16_t x315 = 33U;
	uint32_t x316 = UINT32_MAX;
	uint32_t t68 = 26U;

	t68 = (x313&((x314+x315)/x316));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = 1764LLU;
	int16_t x320 = -2;
	uint64_t t69 = 459971145890145914LLU;

	t69 = (x317&((x318+x319)/x320));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x322 = 4U;
	static uint64_t x323 = 119161LLU;
	static uint64_t t70 = 1996992149LLU;

	t70 = (x321&((x322+x323)/x324));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x325 = 2359LLU;
	int8_t x326 = INT8_MAX;
	uint16_t x328 = 1U;
	volatile uint64_t t71 = 753863LLU;

	t71 = (x325&((x326+x327)/x328));

	if (t71 != 54LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = INT8_MIN;
	uint16_t x330 = UINT16_MAX;
	static volatile int16_t x331 = -1;
	static volatile int32_t x332 = INT32_MIN;
	volatile int32_t t72 = 1841;

	t72 = (x329&((x330+x331)/x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t73 = -1814;

	t73 = (x341&((x342+x343)/x344));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x346 = INT16_MIN;
	int8_t x348 = -61;
	uint64_t t74 = 823362735180269LLU;

	t74 = (x345&((x346+x347)/x348));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = -1;
	static int32_t x350 = 12;
	static int8_t x352 = -14;
	static int32_t t75 = -8126;

	t75 = (x349&((x350+x351)/x352));

	if (t75 != -4681) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x356 = INT64_MAX;
	volatile int64_t t76 = -461811632492LL;

	t76 = (x353&((x354+x355)/x356));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	int16_t x363 = 3;
	volatile int64_t t77 = 757766555542430LL;

	t77 = (x361&((x362+x363)/x364));

	if (t77 != 72057591890444288LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x366 = -43183;
	static int16_t x367 = INT16_MAX;
	int64_t x368 = 8014248625845063LL;
	volatile int64_t t78 = 181021875558282150LL;

	t78 = (x365&((x366+x367)/x368));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 3U;
	int32_t x375 = INT32_MIN;
	int8_t x376 = -3;
	volatile int32_t t79 = -674;

	t79 = (x373&((x374+x375)/x376));

	if (t79 != 43689) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x386 = INT16_MIN;
	int16_t x387 = 101;
	int64_t x388 = INT64_MIN;
	int64_t t80 = 3277494795828663161LL;

	t80 = (x385&((x386+x387)/x388));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x390 = UINT16_MAX;
	int16_t x392 = -1;

	t81 = (x389&((x390+x391)/x392));

	if (t81 != 2147418113) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x395 = INT32_MIN;
	uint64_t x396 = 803895535799380LLU;
	uint64_t t82 = 28658651306027LLU;

	t82 = (x393&((x394+x395)/x396));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x397 = 1;
	static uint8_t x398 = 36U;
	int16_t x400 = -2;

	t83 = (x397&((x398+x399)/x400));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x410 = INT16_MAX;
	static uint32_t x411 = 257600U;
	uint16_t x412 = UINT16_MAX;
	uint32_t t84 = 153968973U;

	t84 = (x409&((x410+x411)/x412));

	if (t84 != 4U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = INT16_MAX;
	uint32_t x414 = UINT32_MAX;
	static volatile int32_t x415 = INT32_MIN;
	static int64_t x416 = -7677182LL;
	int64_t t85 = -13LL;

	t85 = (x413&((x414+x415)/x416));

	if (t85 != 32489LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x420 = -1;
	int64_t t86 = -8693235357079LL;

	t86 = (x417&((x418+x419)/x420));

	if (t86 != 129LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	static int64_t x427 = -1LL;
	static uint64_t x428 = 336614846750LLU;

	t87 = (x425&((x426+x427)/x428));

	if (t87 != 54800640LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = 7;
	int8_t x431 = 2;
	int16_t x432 = -1;
	volatile int32_t t88 = 11717;

	t88 = (x429&((x430+x431)/x432));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = 1;
	volatile int16_t x434 = -1;
	int64_t x435 = 3060354779964LL;
	static uint32_t x436 = 2014950U;
	volatile int64_t t89 = -231LL;

	t89 = (x433&((x434+x435)/x436));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x437 = -1;
	static int32_t x439 = 14181652;
	static uint32_t x440 = 6U;
	uint32_t t90 = 0U;

	t90 = (x437&((x438+x439)/x440));

	if (t90 != 2363608U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x441 = 12162;
	volatile uint16_t x442 = 4U;
	int8_t x443 = -1;
	volatile uint8_t x444 = 23U;

	t91 = (x441&((x442+x443)/x444));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x454 = -1;
	static int64_t x456 = -2967128478920LL;
	volatile int64_t t92 = -783228223411815140LL;

	t92 = (x453&((x454+x455)/x456));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x461 = INT16_MIN;
	uint8_t x462 = UINT8_MAX;
	int8_t x463 = INT8_MIN;
	int16_t x464 = -1;

	t93 = (x461&((x462+x463)/x464));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x465 = -1LL;
	int64_t x466 = INT64_MIN;
	volatile int64_t t94 = -1000886804LL;

	t94 = (x465&((x466+x467)/x468));

	if (t94 != -768614336404564647LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x470 = UINT64_MAX;
	int64_t x471 = INT64_MIN;
	uint8_t x472 = 4U;

	t95 = (x469&((x470+x471)/x472));

	if (t95 != 65057805LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x473 = 0U;
	uint32_t x475 = UINT32_MAX;
	uint8_t x476 = 36U;

	t96 = (x473&((x474+x475)/x476));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x477 = 0U;
	int16_t x478 = INT16_MAX;
	int64_t t97 = 14995424510512021LL;

	t97 = (x477&((x478+x479)/x480));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x481 = -17;
	volatile int8_t x484 = INT8_MIN;
	uint64_t t98 = 49LLU;

	t98 = (x481&((x482+x483)/x484));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x485 = 0U;
	int8_t x486 = -28;
	int64_t x487 = 203690407LL;
	int64_t t99 = -23511387LL;

	t99 = (x485&((x486+x487)/x488));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

