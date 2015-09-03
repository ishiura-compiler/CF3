#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 387U;
int64_t x5 = -1LL;
static int8_t x8 = -60;
volatile int64_t t1 = -14485230744LL;
int8_t x11 = INT8_MAX;
uint8_t x15 = UINT8_MAX;
int8_t x16 = INT8_MAX;
volatile uint64_t x18 = 3476055556488019LLU;
int32_t x30 = -11144143;
int8_t x31 = -54;
int8_t x40 = -10;
uint64_t x41 = UINT64_MAX;
int64_t x46 = -237LL;
uint16_t x54 = 3969U;
int32_t t13 = 90;
volatile int8_t x59 = -1;
uint32_t x61 = 10063487U;
int16_t x69 = INT16_MIN;
volatile uint32_t t18 = 106068U;
int32_t x83 = -117;
int8_t x86 = -1;
int32_t x87 = -1;
uint32_t x96 = UINT32_MAX;
int32_t x97 = 0;
int32_t t24 = -58284344;
int16_t x106 = 14443;
int64_t x110 = -19344659157912LL;
volatile uint32_t x111 = 13U;
int8_t x112 = INT8_MAX;
int8_t x116 = -1;
int8_t x118 = INT8_MAX;
int64_t x121 = INT64_MAX;
volatile int16_t x124 = INT16_MIN;
volatile int64_t t30 = -1LL;
int16_t x127 = INT16_MAX;
int16_t x129 = INT16_MIN;
int32_t x130 = INT32_MIN;
int8_t x132 = INT8_MIN;
int64_t x133 = -351992401493LL;
volatile int64_t x136 = INT64_MIN;
int16_t x141 = INT16_MIN;
int64_t x142 = INT64_MAX;
int16_t x145 = -1;
int32_t x151 = 7;
static int8_t x153 = INT8_MIN;
volatile uint64_t x156 = 479LLU;
uint64_t x160 = UINT64_MAX;
int32_t x170 = INT32_MIN;
uint32_t x177 = UINT32_MAX;
int8_t x180 = -1;
static int32_t x190 = INT32_MAX;
uint64_t x192 = 12995LLU;
int8_t x194 = -1;
int64_t t48 = -28857835LL;
uint64_t x199 = 12LLU;
static int16_t x214 = INT16_MIN;
static int16_t x218 = INT16_MIN;
volatile int8_t x222 = INT8_MAX;
int16_t x225 = -118;
uint32_t x228 = 29787089U;
int8_t x230 = INT8_MIN;
volatile uint64_t t57 = 46646599862LLU;
int16_t x240 = 0;
int64_t t60 = 926050581379LL;
static int8_t x248 = INT8_MAX;
static volatile uint16_t x260 = 0U;
static int8_t x262 = INT8_MAX;
int32_t x266 = INT32_MIN;
uint32_t t66 = 1337317U;
int16_t x270 = INT16_MIN;
uint32_t x272 = UINT32_MAX;
int32_t x275 = 0;
int16_t x283 = INT16_MIN;
static int16_t x285 = -1;
static int32_t x286 = 10526;
int32_t x287 = 7118835;
int32_t x289 = 20189;
int8_t x303 = 1;
static volatile uint32_t x304 = 15522950U;
int16_t x306 = INT16_MIN;
volatile int32_t t76 = 0;
uint32_t x318 = 335358U;
static volatile uint8_t x327 = 3U;
static volatile int64_t t81 = -99695212269LL;
static uint64_t x329 = 51995412296275570LLU;
volatile uint8_t x330 = 123U;
int8_t x332 = -11;
volatile uint64_t x333 = 195203LLU;
uint64_t t83 = 106979065246548LLU;
int16_t x346 = INT16_MIN;
int64_t x348 = 46133084177179LL;
static int64_t x354 = INT64_MIN;
static int16_t x357 = 360;
uint64_t x370 = UINT64_MAX;
int8_t x375 = INT8_MAX;
volatile uint8_t x377 = 6U;
uint8_t x385 = 1U;
static int64_t x390 = -13615377LL;
volatile uint64_t x394 = 2409853378LLU;
volatile uint64_t t98 = 14111LLU;
uint64_t x399 = 2769924533589040700LLU;
int16_t x400 = -18;


void f0(void) {
	int32_t x2 = INT32_MAX;
	static volatile int32_t x3 = 168;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 660;

	t0 = (x1&((x2<=x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int8_t x7 = INT8_MIN;

	t1 = (x5&((x6<=x7)^x8));

	if (t1 != -60LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 289141984;
	volatile uint16_t x10 = UINT16_MAX;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 30985;

	t2 = (x9&((x10<=x11)^x12));

	if (t2 != 96) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	volatile int64_t x14 = -1LL;
	static volatile int64_t t3 = 48LL;

	t3 = (x13&((x14<=x15)^x16));

	if (t3 != 126LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 25861U;
	volatile int64_t x19 = INT64_MIN;
	static volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -296;

	t4 = (x17&((x18<=x19)^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint32_t x22 = 1758211343U;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 3123465;

	t5 = (x21&((x22<=x23)^x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MIN;
	volatile int64_t x27 = INT64_MAX;
	volatile int64_t x28 = 4LL;
	volatile int64_t t6 = -5018078LL;

	t6 = (x25&((x26<=x27)^x28));

	if (t6 != 5LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 3622854168780679LLU;

	t7 = (x29&((x30<=x31)^x32));

	if (t7 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	static int8_t x34 = INT8_MIN;
	uint8_t x35 = 75U;
	volatile int8_t x36 = 0;
	int32_t t8 = -68732;

	t8 = (x33&((x34<=x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = 1;
	int8_t x38 = INT8_MIN;
	int32_t x39 = -64325788;
	static volatile int32_t t9 = -18471838;

	t9 = (x37&((x38<=x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	uint16_t x43 = 8102U;
	volatile uint64_t x44 = 4756122443466947LLU;
	uint64_t t10 = 118394LLU;

	t10 = (x41&((x42<=x43)^x44));

	if (t10 != 4756122443466946LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 111U;
	static int32_t x47 = INT32_MIN;
	static uint16_t x48 = 4U;
	volatile int32_t t11 = 5896;

	t11 = (x45&((x46<=x47)^x48));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MIN;
	static uint8_t x52 = 124U;
	static int32_t t12 = 43;

	t12 = (x49&((x50<=x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	static int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MIN;

	t13 = (x53&((x54<=x55)^x56));

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 2U;
	static int32_t x58 = INT32_MIN;
	int16_t x60 = 48;
	volatile uint32_t t14 = 54U;

	t14 = (x57&((x58<=x59)^x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = UINT16_MAX;
	int16_t x63 = INT16_MAX;
	static volatile int16_t x64 = 50;
	volatile uint32_t t15 = 90688U;

	t15 = (x61&((x62<=x63)^x64));

	if (t15 != 50U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static uint16_t x66 = 140U;
	int16_t x67 = 1;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 1643U;

	t16 = (x65&((x66<=x67)^x68));

	if (t16 != 4294967168U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MAX;
	int64_t x71 = INT64_MAX;
	static uint8_t x72 = 0U;
	int32_t t17 = 0;

	t17 = (x69&((x70<=x71)^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 13U;
	uint8_t x75 = 4U;
	int16_t x76 = INT16_MIN;

	t18 = (x73&((x74<=x75)^x76));

	if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 124U;
	static int8_t x78 = -2;
	uint32_t x79 = 747681U;
	int32_t x80 = -1;
	int32_t t19 = 115;

	t19 = (x77&((x78<=x79)^x80));

	if (t19 != 124) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 2438642;
	int8_t x82 = -1;
	int64_t x84 = -1LL;
	volatile int64_t t20 = 7293356LL;

	t20 = (x81&((x82<=x83)^x84));

	if (t20 != 2438642LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -30427563LL;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = 9601LLU;

	t21 = (x85&((x86<=x87)^x88));

	if (t21 != 18446744073679124052LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	static int8_t x91 = 2;
	int32_t x92 = -1;
	static int64_t t22 = INT64_MIN;

	t22 = (x89&((x90<=x91)^x92));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x94 = 0U;
	int16_t x95 = -87;
	volatile int64_t t23 = -2630651LL;

	t23 = (x93&((x94<=x95)^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x98 = 0LLU;
	int32_t x99 = INT32_MIN;
	int8_t x100 = 1;

	t24 = (x97&((x98<=x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	volatile int64_t x104 = 121356LL;
	volatile int64_t t25 = -17LL;

	t25 = (x101&((x102<=x103)^x104));

	if (t25 != 13LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 40229U;
	static volatile uint16_t x107 = 8U;
	static int16_t x108 = -1;
	static uint32_t t26 = 524334U;

	t26 = (x105&((x106<=x107)^x108));

	if (t26 != 40229U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = 479;
	int32_t t27 = -174817;

	t27 = (x109&((x110<=x111)^x112));

	if (t27 != 94) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 17U;
	volatile int8_t x114 = INT8_MIN;
	uint8_t x115 = UINT8_MAX;
	volatile int32_t t28 = -167154008;

	t28 = (x113&((x114<=x115)^x116));

	if (t28 != 16) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -1;
	int32_t t29 = -62289058;

	t29 = (x117&((x118<=x119)^x120));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -338;
	volatile int8_t x123 = 1;

	t30 = (x121&((x122<=x123)^x124));

	if (t30 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MIN;
	int64_t x128 = 869929969886864LL;
	volatile int64_t t31 = 1876673LL;

	t31 = (x125&((x126<=x127)^x128));

	if (t31 != 1523951249LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x131 = INT32_MIN;
	int32_t t32 = 238;

	t32 = (x129&((x130<=x131)^x132));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = -1;
	uint8_t x135 = 6U;
	int64_t t33 = 685675015835128455LL;

	t33 = (x133&((x134<=x135)^x136));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = 30785060LL;
	static int16_t x139 = INT16_MAX;
	static volatile int32_t x140 = 1;
	volatile int32_t t34 = -1347319;

	t34 = (x137&((x138<=x139)^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x143 = 45480061U;
	volatile uint32_t x144 = 1261U;
	uint32_t t35 = 12958U;

	t35 = (x141&((x142<=x143)^x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x146 = INT16_MAX;
	static uint64_t x147 = UINT64_MAX;
	int64_t x148 = INT64_MIN;
	int64_t t36 = 133163366515846184LL;

	t36 = (x145&((x146<=x147)^x148));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	uint32_t x150 = UINT32_MAX;
	int64_t x152 = INT64_MAX;
	int64_t t37 = INT64_MAX;

	t37 = (x149&((x150<=x151)^x152));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 556U;
	uint32_t x155 = 12188363U;
	uint64_t t38 = 165419472898482051LLU;

	t38 = (x153&((x154<=x155)^x156));

	if (t38 != 384LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MIN;
	uint64_t t39 = 8634625422LLU;

	t39 = (x157&((x158<=x159)^x160));

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 64288U;
	volatile uint16_t x162 = 27005U;
	int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MAX;
	volatile int64_t t40 = -1738083647758914LL;

	t40 = (x161&((x162<=x163)^x164));

	if (t40 != 64288LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MAX;
	static volatile int32_t x166 = 15;
	int64_t x167 = INT64_MAX;
	int16_t x168 = INT16_MAX;
	int32_t t41 = -23;

	t41 = (x165&((x166<=x167)^x168));

	if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 7566U;
	static int32_t x171 = INT32_MIN;
	int64_t x172 = -508696584518303672LL;
	static int64_t t42 = 9056740LL;

	t42 = (x169&((x170<=x171)^x172));

	if (t42 != 8LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -7011482;
	int8_t x174 = INT8_MAX;
	int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MAX;
	int32_t t43 = 16602;

	t43 = (x173&((x174<=x175)^x176));

	if (t43 != 102) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = 2;
	int64_t x179 = 1449127LL;
	volatile uint32_t t44 = 1U;

	t44 = (x177&((x178<=x179)^x180));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = UINT64_MAX;
	volatile uint32_t x182 = 2U;
	static int16_t x183 = 1232;
	int64_t x184 = INT64_MIN;
	static uint64_t t45 = 31988589LLU;

	t45 = (x181&((x182<=x183)^x184));

	if (t45 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -169;
	uint8_t x186 = 104U;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = 1;
	int32_t t46 = 1;

	t46 = (x185&((x186<=x187)^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x191 = 5292349U;
	volatile uint64_t t47 = 8005339847LLU;

	t47 = (x189&((x190<=x191)^x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static int32_t x195 = INT32_MAX;
	volatile int32_t x196 = INT32_MAX;

	t48 = (x193&((x194<=x195)^x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	int64_t x200 = INT64_MIN;
	static int64_t t49 = INT64_MIN;

	t49 = (x197&((x198<=x199)^x200));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = 2798;
	int64_t x202 = 1357467889165744LL;
	int32_t x203 = INT32_MIN;
	int8_t x204 = 13;
	static int32_t t50 = 7964;

	t50 = (x201&((x202<=x203)^x204));

	if (t50 != 12) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 22;
	int8_t x206 = INT8_MAX;
	int16_t x207 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 853529;

	t51 = (x205&((x206<=x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 1LLU;
	static volatile uint32_t x210 = 54965U;
	uint32_t x211 = 225U;
	int64_t x212 = INT64_MAX;
	uint64_t t52 = 556392536172822655LLU;

	t52 = (x209&((x210<=x211)^x212));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MIN;
	int16_t x215 = -24;
	static int8_t x216 = INT8_MIN;
	int32_t t53 = INT32_MIN;

	t53 = (x213&((x214<=x215)^x216));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = -1;
	static int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MIN;
	int64_t t54 = 851645262973LL;

	t54 = (x217&((x218<=x219)^x220));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 8;
	int32_t x223 = 190;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -4066348;

	t55 = (x221&((x222<=x223)^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = UINT32_MAX;
	int8_t x227 = 2;
	volatile uint32_t t56 = 21876U;

	t56 = (x225&((x226<=x227)^x228));

	if (t56 != 29787008U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = 5LLU;

	t57 = (x229&((x230<=x231)^x232));

	if (t57 != 5LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MIN;
	int16_t x235 = -3168;
	int16_t x236 = INT16_MAX;
	int32_t t58 = -1;

	t58 = (x233&((x234<=x235)^x236));

	if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 918743LLU;
	int16_t x238 = INT16_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	uint64_t t59 = 18994297LLU;

	t59 = (x237&((x238<=x239)^x240));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = 0;
	volatile int8_t x242 = -1;
	uint32_t x243 = 6094683U;
	int64_t x244 = -1LL;

	t60 = (x241&((x242<=x243)^x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	static int64_t x246 = -1LL;
	int32_t x247 = -1;
	static int32_t t61 = -84890;

	t61 = (x245&((x246<=x247)^x248));

	if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 18582U;
	volatile int32_t x250 = -8336740;
	static int8_t x251 = INT8_MAX;
	volatile uint16_t x252 = 0U;
	volatile int32_t t62 = -399205;

	t62 = (x249&((x250<=x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 4222008414511953398LLU;
	int16_t x254 = INT16_MIN;
	static int16_t x255 = INT16_MIN;
	volatile uint16_t x256 = UINT16_MAX;
	uint64_t t63 = 60857226861233560LLU;

	t63 = (x253&((x254<=x255)^x256));

	if (t63 != 62966LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 8U;
	int8_t x258 = INT8_MIN;
	int32_t x259 = -100;
	uint32_t t64 = 1585647793U;

	t64 = (x257&((x258<=x259)^x260));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 6LLU;
	int8_t x263 = -6;
	int64_t x264 = INT64_MAX;
	static volatile uint64_t t65 = 7576292LLU;

	t65 = (x261&((x262<=x263)^x264));

	if (t65 != 6LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	static uint8_t x267 = 3U;
	uint8_t x268 = 86U;

	t66 = (x265&((x266<=x267)^x268));

	if (t66 != 87U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 7838178616307117LL;
	volatile int32_t x271 = -3;
	int64_t t67 = -2169901816187LL;

	t67 = (x269&((x270<=x271)^x272));

	if (t67 != 740060588LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = 9U;
	static int16_t x276 = INT16_MAX;
	volatile int32_t t68 = -44;

	t68 = (x273&((x274<=x275)^x276));

	if (t68 != 32640) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MAX;
	int32_t x278 = 1;
	int32_t x279 = INT32_MIN;
	static volatile int8_t x280 = INT8_MIN;
	int32_t t69 = -429047;

	t69 = (x277&((x278<=x279)^x280));

	if (t69 != 2147483520) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 3218938U;
	volatile int16_t x282 = INT16_MAX;
	static int8_t x284 = 1;
	volatile uint32_t t70 = 196849689U;

	t70 = (x281&((x282<=x283)^x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x288 = 40U;
	volatile uint32_t t71 = 5840458U;

	t71 = (x285&((x286<=x287)^x288));

	if (t71 != 41U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = -1LL;
	volatile uint64_t x291 = 283836948581425LLU;
	int64_t x292 = -1383LL;
	volatile int64_t t72 = -15273866LL;

	t72 = (x289&((x290<=x291)^x292));

	if (t72 != 19097LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MAX;
	static int16_t x296 = 4;
	int32_t t73 = -368492;

	t73 = (x293&((x294<=x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static uint64_t x298 = 17656081LLU;
	uint8_t x299 = 7U;
	static int16_t x300 = INT16_MAX;
	volatile int64_t t74 = -984426246540250LL;

	t74 = (x297&((x298<=x299)^x300));

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	volatile uint8_t x302 = UINT8_MAX;
	volatile int64_t t75 = 1497064213LL;

	t75 = (x301&((x302<=x303)^x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	static uint64_t x307 = 1595900LLU;
	volatile int32_t x308 = 125681245;

	t76 = (x305&((x306<=x307)^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1439U;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;
	volatile uint32_t t77 = 544262U;

	t77 = (x309&((x310<=x311)^x312));

	if (t77 != 1409U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	uint32_t x314 = 2U;
	uint16_t x315 = 1U;
	int16_t x316 = -1;
	volatile int32_t t78 = -250;

	t78 = (x313&((x314<=x315)^x316));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	uint16_t x319 = 1U;
	uint64_t x320 = 236074LLU;
	static volatile uint64_t t79 = 1853385313LLU;

	t79 = (x317&((x318<=x319)^x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	volatile uint32_t x322 = 197U;
	uint32_t x323 = 3U;
	static volatile uint32_t x324 = UINT32_MAX;
	volatile int64_t t80 = 30589082LL;

	t80 = (x321&((x322<=x323)^x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = -1LL;
	uint8_t x328 = 1U;

	t81 = (x325&((x326<=x327)^x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = INT32_MAX;
	uint64_t t82 = 72906536537307LLU;

	t82 = (x329&((x330<=x331)^x332));

	if (t82 != 51995412296275568LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x334 = 25U;
	static volatile uint32_t x335 = UINT32_MAX;
	static int16_t x336 = INT16_MIN;

	t83 = (x333&((x334<=x335)^x336));

	if (t83 != 163841LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = 39;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = 9132U;
	volatile int32_t t84 = 195;

	t84 = (x337&((x338<=x339)^x340));

	if (t84 != 9133) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 1141003925507964LLU;
	static volatile int64_t x342 = -12LL;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;
	uint64_t t85 = 3427LLU;

	t85 = (x341&((x342<=x343)^x344));

	if (t85 != 1141003925507840LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 888073849876LL;
	uint64_t x347 = 518574004655379264LLU;
	static volatile int64_t t86 = -2LL;

	t86 = (x345&((x346<=x347)^x348));

	if (t86 != 841814638608LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	static int32_t x350 = INT32_MIN;
	uint8_t x351 = 79U;
	static volatile int64_t x352 = 188LL;
	int64_t t87 = 1137933LL;

	t87 = (x349&((x350<=x351)^x352));

	if (t87 != 189LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 362657097LLU;
	volatile int32_t x355 = INT32_MIN;
	uint32_t x356 = 1021U;
	static uint64_t t88 = 3789851711971LLU;

	t88 = (x353&((x354<=x355)^x356));

	if (t88 != 328LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -6;
	static int8_t x359 = -1;
	int64_t x360 = INT64_MIN;
	static volatile int64_t t89 = -237765LL;

	t89 = (x357&((x358<=x359)^x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 78442LLU;
	volatile uint32_t x362 = 231900071U;
	int16_t x363 = 3863;
	volatile uint64_t x364 = 63043421989829571LLU;
	volatile uint64_t t90 = 407379512LLU;

	t90 = (x361&((x362<=x363)^x364));

	if (t90 != 12866LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 426790675LL;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = -47206;
	int8_t x368 = -1;
	volatile int64_t t91 = -1LL;

	t91 = (x365&((x366<=x367)^x368));

	if (t91 != 426790675LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 1;
	volatile int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MAX;
	int32_t t92 = 906369088;

	t92 = (x369&((x370<=x371)^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	static int16_t x374 = 9;
	int64_t x376 = 2LL;
	int64_t t93 = -32709471661LL;

	t93 = (x373&((x374<=x375)^x376));

	if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 60U;
	volatile int32_t x379 = INT32_MIN;
	static int32_t x380 = INT32_MAX;
	int32_t t94 = -1888023;

	t94 = (x377&((x378<=x379)^x380));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int16_t x382 = INT16_MIN;
	static volatile int64_t x383 = INT64_MAX;
	static uint8_t x384 = 2U;
	volatile int64_t t95 = -279515LL;

	t95 = (x381&((x382<=x383)^x384));

	if (t95 != 3LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = -43;
	volatile int8_t x387 = 0;
	uint16_t x388 = 421U;
	volatile int32_t t96 = -113960;

	t96 = (x385&((x386<=x387)^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1534;
	uint16_t x391 = 1U;
	uint32_t x392 = 122966U;
	uint32_t t97 = 1840284U;

	t97 = (x389&((x390<=x391)^x392));

	if (t97 != 122882U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = 29U;
	static uint32_t x395 = 472737887U;
	uint64_t x396 = UINT64_MAX;

	t98 = (x393&((x394<=x395)^x396));

	if (t98 != 29LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 11U;
	uint32_t x398 = 16318313U;
	static volatile int32_t t99 = 15;

	t99 = (x397&((x398<=x399)^x400));

	if (t99 != 11) { NG(); } else { ; }
	
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

