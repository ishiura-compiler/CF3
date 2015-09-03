#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int8_t x4 = INT8_MIN;
int32_t t0 = 480423008;
int16_t x5 = INT16_MIN;
uint64_t x13 = UINT64_MAX;
volatile int16_t x35 = -2;
volatile int8_t x39 = -19;
int32_t x42 = INT32_MIN;
volatile int64_t t10 = INT64_MAX;
volatile int64_t x61 = -1LL;
int16_t x66 = INT16_MIN;
static uint32_t x67 = 88236327U;
uint8_t x69 = 2U;
static uint64_t x70 = 274005629382886LLU;
uint32_t t18 = UINT32_MAX;
static volatile int8_t x77 = 42;
static int16_t x78 = -1;
int8_t x82 = -1;
static int32_t t20 = 1465;
static volatile int16_t x92 = 3357;
static int32_t x93 = 382639448;
int8_t x95 = 7;
int32_t x102 = INT32_MIN;
uint16_t x103 = 2235U;
volatile int32_t x111 = -1;
int32_t t30 = 37;
int32_t x127 = INT32_MIN;
volatile int8_t x128 = 13;
int8_t x130 = -11;
static uint32_t x131 = 196U;
uint16_t x132 = 1366U;
volatile int32_t t32 = 13;
volatile int64_t t34 = INT64_MAX;
volatile int64_t x144 = -1LL;
static int64_t x150 = INT64_MIN;
volatile int32_t t37 = 1;
uint32_t x160 = 52915U;
int16_t x169 = -2346;
uint16_t x175 = 664U;
int64_t x178 = INT64_MIN;
int64_t t44 = INT64_MIN;
volatile uint64_t x181 = 344881563101LLU;
int64_t x183 = -1LL;
volatile uint64_t t46 = 73LLU;
volatile uint16_t x196 = 47U;
int64_t x208 = INT64_MIN;
int32_t t51 = 109;
int64_t x218 = INT64_MIN;
int8_t x224 = 13;
uint64_t x231 = 565413427930616LLU;
volatile uint32_t x235 = 10U;
int32_t x238 = INT32_MAX;
volatile int32_t t60 = -13;
volatile uint8_t x246 = UINT8_MAX;
uint16_t x252 = UINT16_MAX;
int32_t x256 = 92;
static uint8_t x264 = 26U;
volatile int64_t x268 = INT64_MIN;
int32_t x280 = INT32_MIN;
uint32_t x281 = 208U;
uint16_t x287 = 24502U;
int32_t x288 = 137010;
static uint64_t x294 = 53253LLU;
uint8_t x296 = 2U;
int32_t x308 = INT32_MAX;
int32_t t76 = 83678;
volatile int32_t x309 = INT32_MIN;
static uint64_t x314 = UINT64_MAX;
int64_t x320 = INT64_MAX;
volatile int16_t x325 = INT16_MIN;
int16_t x326 = INT16_MIN;
int32_t t81 = 178;
int8_t x330 = -1;
static uint16_t x336 = 5U;
int8_t x339 = INT8_MAX;
int32_t x343 = INT32_MAX;
int32_t t87 = -2989143;
int8_t x354 = -1;
int32_t t88 = 4;
uint32_t x357 = 72962U;
volatile int16_t x358 = 1;
int8_t x360 = INT8_MIN;
int64_t x364 = INT64_MIN;
uint8_t x370 = 4U;
static int16_t x380 = INT16_MAX;
int64_t x383 = -1LL;
volatile int32_t t97 = -169;
volatile int32_t x395 = INT32_MIN;
static volatile int32_t t98 = -6559;
int32_t x399 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint32_t x3 = 3156765U;

	t0 = (x1|((x2&x3)==x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = 4;
	int16_t x7 = INT16_MIN;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 28978;

	t1 = (x5|((x6&x7)==x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 46U;
	int8_t x11 = -1;
	int32_t x12 = INT32_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10&x11)==x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = UINT8_MAX;
	static volatile int16_t x15 = INT16_MIN;
	uint16_t x16 = 26983U;
	uint64_t t3 = UINT64_MAX;

	t3 = (x13|((x14&x15)==x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = INT32_MAX;
	static int8_t x19 = -1;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -243807;

	t4 = (x17|((x18&x19)==x20));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	int64_t x22 = 4761346332995135LL;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -1;
	int32_t t5 = -7782;

	t5 = (x21|((x22&x23)==x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 2;
	uint8_t x26 = 20U;
	uint64_t x27 = 1238488LLU;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 1;

	t6 = (x25|((x26&x27)==x28));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	volatile uint16_t x30 = 15U;
	static int32_t x31 = INT32_MAX;
	static int16_t x32 = INT16_MIN;
	int32_t t7 = INT32_MIN;

	t7 = (x29|((x30&x31)==x32));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	static uint8_t x34 = 18U;
	int64_t x36 = 835321949450441LL;
	uint64_t t8 = UINT64_MAX;

	t8 = (x33|((x34&x35)==x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = -184619;

	t9 = (x37|((x38&x39)==x40));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MAX;
	volatile int32_t x43 = -1;
	int16_t x44 = INT16_MAX;

	t10 = (x41|((x42&x43)==x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	int16_t x46 = 34;
	static int32_t x47 = 153511;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -125145227;

	t11 = (x45|((x46&x47)==x48));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 55741983;
	int32_t x50 = INT32_MAX;
	static uint16_t x51 = 6235U;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -34;

	t12 = (x49|((x50&x51)==x52));

	if (t12 != 55741983) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -30;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	int32_t t13 = -50350;

	t13 = (x53|((x54&x55)==x56));

	if (t13 != -30) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint32_t x58 = 25U;
	static int8_t x59 = INT8_MIN;
	volatile uint64_t x60 = 260664742913329LLU;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x57|((x58&x59)==x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	static volatile uint16_t x63 = 19U;
	int8_t x64 = -9;
	volatile int64_t t15 = -428LL;

	t15 = (x61|((x62&x63)==x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 11U;
	int64_t x68 = -1LL;
	volatile int32_t t16 = 0;

	t16 = (x65|((x66&x67)==x68));

	if (t16 != 11) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x71 = INT8_MIN;
	static int16_t x72 = -1;
	int32_t t17 = -144;

	t17 = (x69|((x70&x71)==x72));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int16_t x74 = 6015;
	uint64_t x75 = 22LLU;
	static int8_t x76 = INT8_MAX;

	t18 = (x73|((x74&x75)==x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x79 = 42U;
	static volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 6064;

	t19 = (x77|((x78&x79)==x80));

	if (t19 != 42) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	uint16_t x83 = 758U;
	int8_t x84 = INT8_MIN;

	t20 = (x81|((x82&x83)==x84));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	static int16_t x86 = -7;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 0LLU;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x85|((x86&x87)==x88));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -55112LL;
	static int64_t x90 = 472LL;
	volatile uint64_t x91 = 18325LLU;
	static volatile int64_t t22 = -3847674251426721LL;

	t22 = (x89|((x90&x91)==x92));

	if (t22 != -55112LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -1;

	t23 = (x93|((x94&x95)==x96));

	if (t23 != 382639448) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 8U;
	static int64_t x98 = -12LL;
	uint8_t x99 = UINT8_MAX;
	static volatile int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -155;

	t24 = (x97|((x98&x99)==x100));

	if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	int16_t x104 = INT16_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x101|((x102&x103)==x104));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = UINT64_MAX;
	static volatile int32_t x106 = -11;
	volatile uint64_t x107 = 801891448212188957LLU;
	uint16_t x108 = 49U;
	uint64_t t26 = UINT64_MAX;

	t26 = (x105|((x106&x107)==x108));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 172422LLU;
	int8_t x110 = INT8_MAX;
	int32_t x112 = 31;
	uint64_t t27 = 646LLU;

	t27 = (x109|((x110&x111)==x112));

	if (t27 != 172422LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -28;
	int16_t x114 = INT16_MAX;
	volatile uint16_t x115 = UINT16_MAX;
	int64_t x116 = INT64_MAX;
	int32_t t28 = 210662;

	t28 = (x113|((x114&x115)==x116));

	if (t28 != -28) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = 13LL;
	volatile int32_t x118 = 1249;
	uint8_t x119 = 7U;
	volatile int16_t x120 = INT16_MIN;
	int64_t t29 = -88LL;

	t29 = (x117|((x118&x119)==x120));

	if (t29 != 13LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 1031301589;
	static int8_t x122 = 3;
	static uint64_t x123 = UINT64_MAX;
	static int8_t x124 = INT8_MIN;

	t30 = (x121|((x122&x123)==x124));

	if (t30 != 1031301589) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 14450LL;
	volatile uint16_t x126 = 0U;
	int64_t t31 = -261362675217118LL;

	t31 = (x125|((x126&x127)==x128));

	if (t31 != 14450LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 6U;

	t32 = (x129|((x130&x131)==x132));

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 5719651974560LLU;
	volatile int64_t x134 = INT64_MIN;
	int64_t x135 = 16697731272010490LL;
	uint32_t x136 = UINT32_MAX;
	uint64_t t33 = 8605332902LLU;

	t33 = (x133|((x134&x135)==x136));

	if (t33 != 5719651974560LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MAX;
	static volatile uint64_t x138 = 210480981479140492LLU;
	int64_t x139 = 1040883905790541574LL;
	uint8_t x140 = 2U;

	t34 = (x137|((x138&x139)==x140));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -471892073;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 160510LLU;
	volatile int32_t t35 = 22600056;

	t35 = (x141|((x142&x143)==x144));

	if (t35 != -471892073) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 3903907U;
	uint8_t x148 = UINT8_MAX;
	static int32_t t36 = 2865;

	t36 = (x145|((x146&x147)==x148));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 0U;
	uint64_t x151 = 522LLU;
	int32_t x152 = 32440;

	t37 = (x149|((x150&x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	volatile uint32_t x154 = UINT32_MAX;
	int32_t x155 = -1;
	int8_t x156 = -15;
	static int32_t t38 = 39;

	t38 = (x153|((x154&x155)==x156));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 27LLU;
	volatile uint8_t x158 = UINT8_MAX;
	int8_t x159 = 1;
	static volatile uint64_t t39 = 1LLU;

	t39 = (x157|((x158&x159)==x160));

	if (t39 != 27LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	static int64_t x163 = -1LL;
	volatile uint8_t x164 = 0U;
	volatile int32_t t40 = 1;

	t40 = (x161|((x162&x163)==x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -46;
	volatile int64_t x166 = INT64_MIN;
	int16_t x167 = -45;
	uint32_t x168 = 212846U;
	static int32_t t41 = 11807;

	t41 = (x165|((x166&x167)==x168));

	if (t41 != -46) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x170 = INT64_MAX;
	volatile uint32_t x171 = 88915470U;
	uint32_t x172 = 33U;
	volatile int32_t t42 = -1;

	t42 = (x169|((x170&x171)==x172));

	if (t42 != -2346) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	static uint8_t x174 = UINT8_MAX;
	uint16_t x176 = 23051U;
	volatile int32_t t43 = 770673;

	t43 = (x173|((x174&x175)==x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	volatile uint64_t x179 = 3618679382011LLU;
	uint32_t x180 = 17U;

	t44 = (x177|((x178&x179)==x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 12624970U;
	uint64_t x184 = 76543269LLU;
	volatile uint64_t t45 = 24515611LLU;

	t45 = (x181|((x182&x183)==x184));

	if (t45 != 344881563101LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 79931LLU;
	int32_t x186 = 58704852;
	int32_t x187 = -1;
	volatile int16_t x188 = -19;

	t46 = (x185|((x186&x187)==x188));

	if (t46 != 79931LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 13U;
	volatile uint32_t x191 = 187238U;
	int64_t x192 = -1LL;
	int32_t t47 = 459;

	t47 = (x189|((x190&x191)==x192));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	volatile int64_t x194 = 154LL;
	int8_t x195 = -1;
	int32_t t48 = INT32_MIN;

	t48 = (x193|((x194&x195)==x196));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	static volatile uint16_t x198 = 3894U;
	int64_t x199 = -61157LL;
	uint8_t x200 = 3U;
	uint32_t t49 = UINT32_MAX;

	t49 = (x197|((x198&x199)==x200));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 647;
	int64_t x202 = 11LL;
	static volatile int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t50 = 1669490;

	t50 = (x201|((x202&x203)==x204));

	if (t50 != 647) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = 29;
	uint64_t x206 = 3113778622217LLU;
	static uint64_t x207 = 741120722439LLU;

	t51 = (x205|((x206&x207)==x208));

	if (t51 != 29) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 1907U;
	int16_t x210 = INT16_MIN;
	int64_t x211 = -1LL;
	uint8_t x212 = 38U;
	volatile uint32_t t52 = 125U;

	t52 = (x209|((x210&x211)==x212));

	if (t52 != 1907U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	uint16_t x214 = 18146U;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 19U;
	static volatile int32_t t53 = 530435;

	t53 = (x213|((x214&x215)==x216));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;
	int32_t t54 = 18;

	t54 = (x217|((x218&x219)==x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x221 = 7670U;
	int32_t x222 = INT32_MIN;
	int32_t x223 = -1;
	int32_t t55 = 315611;

	t55 = (x221|((x222&x223)==x224));

	if (t55 != 7670) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = 1;
	uint16_t x226 = 241U;
	uint8_t x227 = 12U;
	volatile uint32_t x228 = 376716329U;
	volatile int32_t t56 = -117377;

	t56 = (x225|((x226&x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	uint64_t x230 = UINT64_MAX;
	int16_t x232 = 13;
	int64_t t57 = 155LL;

	t57 = (x229|((x230&x231)==x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x236 = 336U;
	volatile int32_t t58 = -105570;

	t58 = (x233|((x234&x235)==x236));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int8_t x239 = 3;
	int16_t x240 = -702;
	int32_t t59 = INT32_MIN;

	t59 = (x237|((x238&x239)==x240));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	volatile int64_t x242 = INT64_MIN;
	int8_t x243 = 0;
	int8_t x244 = -1;

	t60 = (x241|((x242&x243)==x244));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	uint64_t x247 = 1522933181941945202LLU;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x245|((x246&x247)==x248));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -1LL;
	uint16_t x250 = 1988U;
	int64_t x251 = -1LL;
	static volatile int64_t t62 = 205274253219745LL;

	t62 = (x249|((x250&x251)==x252));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	int32_t x254 = INT32_MIN;
	int64_t x255 = -1960954LL;
	static volatile int32_t t63 = 395272569;

	t63 = (x253|((x254&x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = 1;
	int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MAX;
	uint8_t x260 = 0U;
	static volatile int32_t t64 = -1;

	t64 = (x257|((x258&x259)==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	static uint64_t x262 = 28LLU;
	volatile uint8_t x263 = UINT8_MAX;
	static int32_t t65 = -1;

	t65 = (x261|((x262&x263)==x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 229739U;
	int32_t x266 = -236544;
	int64_t x267 = -1LL;
	volatile uint32_t t66 = 26183U;

	t66 = (x265|((x266&x267)==x268));

	if (t66 != 229739U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 647906525431LLU;
	uint64_t x270 = 5673443645LLU;
	volatile uint16_t x271 = UINT16_MAX;
	static int8_t x272 = INT8_MIN;
	volatile uint64_t t67 = 1117263LLU;

	t67 = (x269|((x270&x271)==x272));

	if (t67 != 647906525431LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = -48825949724LL;
	int16_t x276 = -286;
	int64_t t68 = INT64_MIN;

	t68 = (x273|((x274&x275)==x276));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	static int8_t x278 = INT8_MIN;
	int16_t x279 = 421;
	volatile int32_t t69 = 178443;

	t69 = (x277|((x278&x279)==x280));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = INT64_MIN;
	static volatile uint16_t x283 = 8U;
	int16_t x284 = INT16_MAX;
	uint32_t t70 = 10454847U;

	t70 = (x281|((x282&x283)==x284));

	if (t70 != 208U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 895U;
	volatile uint16_t x286 = UINT16_MAX;
	volatile int32_t t71 = 1197423;

	t71 = (x285|((x286&x287)==x288));

	if (t71 != 895) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	uint32_t x290 = 1429U;
	static volatile uint16_t x291 = 61U;
	int32_t x292 = INT32_MAX;
	volatile int32_t t72 = -22467064;

	t72 = (x289|((x290&x291)==x292));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 1U;
	int16_t x295 = INT16_MIN;
	uint32_t t73 = 1266U;

	t73 = (x293|((x294&x295)==x296));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 26U;
	uint32_t x298 = 801725U;
	int64_t x299 = 1869165299LL;
	static int16_t x300 = -1;
	volatile int32_t t74 = -1;

	t74 = (x297|((x298&x299)==x300));

	if (t74 != 26) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	static uint8_t x302 = 59U;
	volatile uint16_t x303 = UINT16_MAX;
	volatile int64_t x304 = 316LL;
	int64_t t75 = 443769177116437LL;

	t75 = (x301|((x302&x303)==x304));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1244;
	static volatile int64_t x306 = -1LL;
	static uint64_t x307 = 189604835232407LLU;

	t76 = (x305|((x306&x307)==x308));

	if (t76 != -1244) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MAX;
	static int32_t x311 = 0;
	int64_t x312 = -1LL;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x309|((x310&x311)==x312));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -3;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = -1;
	volatile int32_t t78 = -460574;

	t78 = (x313|((x314&x315)==x316));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	int32_t x319 = -2085787;
	uint32_t t79 = UINT32_MAX;

	t79 = (x317|((x318&x319)==x320));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MAX;
	static uint32_t x323 = UINT32_MAX;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = 116;

	t80 = (x321|((x322&x323)==x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x327 = -2;
	volatile uint8_t x328 = 0U;

	t81 = (x325|((x326&x327)==x328));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 451322647U;
	int16_t x331 = -7;
	int32_t x332 = 0;
	static volatile uint32_t t82 = 2811U;

	t82 = (x329|((x330&x331)==x332));

	if (t82 != 451322647U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -8;
	int64_t x334 = 437LL;
	uint64_t x335 = UINT64_MAX;
	static volatile int32_t t83 = 1115;

	t83 = (x333|((x334&x335)==x336));

	if (t83 != -8) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -7862043;

	t84 = (x337|((x338&x339)==x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	volatile uint16_t x342 = 67U;
	int16_t x344 = INT16_MIN;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x341|((x342&x343)==x344));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MIN;
	static int32_t x346 = -32744;
	static volatile int16_t x347 = INT16_MAX;
	static int8_t x348 = INT8_MIN;
	int32_t t86 = INT32_MIN;

	t86 = (x345|((x346&x347)==x348));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -3824;
	uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MAX;
	volatile uint16_t x352 = UINT16_MAX;

	t87 = (x349|((x350&x351)==x352));

	if (t87 != -3823) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 359922;
	static volatile uint16_t x355 = 366U;
	volatile int32_t x356 = INT32_MIN;

	t88 = (x353|((x354&x355)==x356));

	if (t88 != 359922) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x359 = 5706U;
	uint32_t t89 = 245925475U;

	t89 = (x357|((x358&x359)==x360));

	if (t89 != 72962U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	static int8_t x363 = INT8_MIN;
	int32_t t90 = -109226;

	t90 = (x361|((x362&x363)==x364));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 6U;
	static volatile int64_t x366 = 191LL;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = 4957U;
	int32_t t91 = 28559865;

	t91 = (x365|((x366&x367)==x368));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int64_t x371 = -6LL;
	static uint32_t x372 = 239U;
	volatile int32_t t92 = -24751;

	t92 = (x369|((x370&x371)==x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 81803950LLU;
	int32_t x374 = -1;
	static int32_t x375 = -277141;
	volatile uint8_t x376 = 36U;
	uint64_t t93 = 151LLU;

	t93 = (x373|((x374&x375)==x376));

	if (t93 != 81803950LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 48U;
	static volatile int32_t x379 = -307;
	volatile int32_t t94 = -2102280;

	t94 = (x377|((x378&x379)==x380));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 637U;
	volatile int8_t x382 = INT8_MIN;
	uint64_t x384 = 0LLU;
	volatile int32_t t95 = -252736;

	t95 = (x381|((x382&x383)==x384));

	if (t95 != 637) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MAX;
	int64_t x386 = INT64_MIN;
	volatile int32_t x387 = 231;
	static uint16_t x388 = 30827U;
	int64_t t96 = INT64_MAX;

	t96 = (x385|((x386&x387)==x388));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 1;
	uint8_t x390 = 2U;
	static int64_t x391 = -1LL;
	int32_t x392 = -1;

	t97 = (x389|((x390&x391)==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 5U;
	uint32_t x394 = 250639639U;
	static volatile uint64_t x396 = UINT64_MAX;

	t98 = (x393|((x394&x395)==x396));

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	static int32_t x398 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -1;

	t99 = (x397|((x398&x399)==x400));

	if (t99 != 127) { NG(); } else { ; }
	
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

