#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -1;
volatile uint64_t t0 = 1426201307500696LLU;
int64_t x9 = INT64_MAX;
int16_t x10 = -1;
int64_t x12 = INT64_MIN;
int16_t x14 = INT16_MAX;
int32_t t2 = -121;
volatile int64_t x21 = INT64_MIN;
uint64_t x22 = UINT64_MAX;
volatile int64_t t4 = INT64_MIN;
static int8_t x27 = 10;
uint32_t x28 = 28229U;
volatile uint64_t x35 = 29201023167163LLU;
int64_t x41 = INT64_MAX;
volatile int8_t x42 = 2;
int32_t x43 = -432123;
int16_t x45 = INT16_MAX;
static int8_t x49 = 1;
int32_t x51 = INT32_MIN;
int32_t x58 = INT32_MIN;
int64_t x62 = 78328671602424261LL;
uint32_t x64 = 59002U;
int32_t x65 = INT32_MIN;
static uint16_t x70 = 1348U;
int32_t x71 = INT32_MIN;
static uint32_t x78 = 69027153U;
int32_t x79 = INT32_MAX;
uint16_t x80 = 0U;
int32_t t17 = 765626;
int16_t x90 = INT16_MIN;
int8_t x101 = INT8_MIN;
int64_t x102 = INT64_MIN;
uint8_t x107 = UINT8_MAX;
uint64_t x110 = 100025404LLU;
volatile uint32_t x125 = UINT32_MAX;
volatile uint32_t t24 = 50904U;
uint32_t x130 = UINT32_MAX;
static int32_t x135 = 24361243;
int64_t x138 = 102LL;
volatile int64_t x148 = INT64_MIN;
volatile int32_t t29 = -737834819;
uint64_t x166 = 2205040097671588682LLU;
int16_t x168 = 15;
int32_t t32 = 1001484;
static int64_t x186 = -119183830LL;
volatile int32_t t35 = -13120;
volatile int8_t x194 = INT8_MAX;
static uint32_t x199 = 206986149U;
volatile int32_t t37 = 23755348;
volatile int8_t x202 = 13;
volatile int8_t x203 = -1;
int32_t t39 = 132559506;
uint8_t x228 = 12U;
int8_t x233 = -1;
volatile int16_t x238 = 7610;
volatile uint64_t x241 = 293029LLU;
uint8_t x245 = UINT8_MAX;
int32_t x247 = 38;
uint64_t x256 = UINT64_MAX;
int16_t x262 = INT16_MAX;
static int64_t t53 = 124272657302675LL;
int8_t x267 = -23;
volatile int16_t x271 = INT16_MAX;
int64_t x282 = 4LL;
static int32_t t56 = 901082814;
static volatile int8_t x289 = INT8_MIN;
volatile int32_t t58 = -414890322;
volatile int16_t x295 = -1;
int32_t x302 = 243;
uint32_t x304 = 36511U;
static uint16_t x307 = 874U;
uint32_t x308 = UINT32_MAX;
int16_t x310 = INT16_MIN;
int16_t x312 = INT16_MAX;
volatile int32_t t62 = 170907538;
uint64_t x319 = 56965577LLU;
volatile uint32_t t64 = 1U;
int32_t x321 = 11754466;
int16_t x325 = -1;
int16_t x331 = 60;
static uint8_t x332 = 98U;
static uint64_t x343 = 1295375923LLU;
static uint64_t x347 = 744070LLU;
static int8_t x356 = 12;
static uint8_t x364 = UINT8_MAX;
volatile int16_t x365 = INT16_MIN;
uint32_t x368 = 490U;
int8_t x374 = INT8_MAX;
static uint16_t x383 = 14U;
uint64_t t78 = 152519551007588713LLU;
volatile int32_t x392 = -3655;
volatile int32_t t80 = 27;
static int16_t x393 = -1;
static uint32_t x407 = 108685027U;
int32_t t83 = -1325098;
static int32_t x419 = 0;
volatile int8_t x429 = -1;
int64_t x436 = INT64_MAX;
static int16_t x438 = -1;
uint64_t t90 = 139114851778822LLU;
int32_t x460 = INT32_MIN;
uint16_t x470 = 819U;
volatile uint8_t x471 = UINT8_MAX;
static volatile int32_t t95 = -15817605;
int16_t x477 = -1;
int8_t x488 = 24;
static volatile int16_t x490 = INT16_MAX;
static volatile int32_t x492 = INT32_MIN;
volatile int32_t t99 = -475048;


void f0(void) {
	static uint64_t x5 = 122999655386737LLU;
	int64_t x6 = INT64_MAX;
	volatile int32_t x8 = -31341;

	t0 = (x5-((x6+x7)<=x8));

	if (t0 != 122999655386737LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x11 = 328U;
	int64_t t1 = INT64_MAX;

	t1 = (x9-((x10+x11)<=x12));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -57;
	uint8_t x15 = 3U;
	uint8_t x16 = 29U;

	t2 = (x13-((x14+x15)<=x16));

	if (t2 != -57) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int8_t x18 = INT8_MAX;
	uint16_t x19 = 20U;
	volatile int64_t x20 = -1LL;
	static int64_t t3 = 940299388905LL;

	t3 = (x17-((x18+x19)<=x20));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x23 = INT32_MIN;
	static uint32_t x24 = UINT32_MAX;

	t4 = (x21-((x22+x23)<=x24));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MAX;
	static volatile int8_t x26 = -1;
	int64_t t5 = 27356LL;

	t5 = (x25-((x26+x27)<=x28));

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -869;
	int64_t x30 = -126528438897794LL;
	uint32_t x31 = 123324158U;
	int32_t x32 = INT32_MIN;
	volatile int32_t t6 = -756741356;

	t6 = (x29-((x30+x31)<=x32));

	if (t6 != -870) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x33 = 119U;
	int16_t x34 = 373;
	int32_t x36 = INT32_MAX;
	int32_t t7 = 1;

	t7 = (x33-((x34+x35)<=x36));

	if (t7 != 119) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = 0;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = INT64_MIN;
	volatile int32_t t8 = 0;

	t8 = (x37-((x38+x39)<=x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x44 = INT8_MIN;
	volatile int64_t t9 = 4509923LL;

	t9 = (x41-((x42+x43)<=x44));

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x46 = 49U;
	int16_t x47 = 0;
	uint16_t x48 = UINT16_MAX;
	int32_t t10 = -903;

	t10 = (x45-((x46+x47)<=x48));

	if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x50 = 133295942U;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 22868;

	t11 = (x49-((x50+x51)<=x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -1;
	volatile uint8_t x59 = UINT8_MAX;
	static uint64_t x60 = 89014243LLU;
	int32_t t12 = -114446404;

	t12 = (x57-((x58+x59)<=x60));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MAX;
	int64_t x63 = INT64_MIN;
	static int64_t t13 = -14909581318LL;

	t13 = (x61-((x62+x63)<=x64));

	if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = -330;
	uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 488U;
	static volatile int32_t t14 = INT32_MIN;

	t14 = (x65-((x66+x67)<=x68));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int32_t x72 = -500827267;
	static int32_t t15 = 19785803;

	t15 = (x69-((x70+x71)<=x72));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x77 = 63LL;
	int64_t t16 = 1020094LL;

	t16 = (x77-((x78+x79)<=x80));

	if (t16 != 63LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = UINT8_MAX;
	static volatile int64_t x82 = 2063789LL;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = -1;

	t17 = (x81-((x82+x83)<=x84));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MAX;
	int64_t x91 = -1LL;
	static uint8_t x92 = UINT8_MAX;
	static int64_t t18 = 1656558612642255LL;

	t18 = (x89-((x90+x91)<=x92));

	if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = 2144;
	static int32_t x94 = INT32_MAX;
	int64_t x95 = -882943382LL;
	static int8_t x96 = INT8_MIN;
	int32_t t19 = -1565;

	t19 = (x93-((x94+x95)<=x96));

	if (t19 != 2144) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t20 = -2;

	t20 = (x101-((x102+x103)<=x104));

	if (t20 != -129) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MAX;
	uint8_t x106 = 1U;
	int64_t x108 = -1LL;
	volatile int32_t t21 = 6;

	t21 = (x105-((x106+x107)<=x108));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	int32_t x111 = INT32_MIN;
	uint8_t x112 = UINT8_MAX;
	int32_t t22 = 11393652;

	t22 = (x109-((x110+x111)<=x112));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x117 = -1;
	volatile int8_t x118 = INT8_MIN;
	static int8_t x119 = INT8_MAX;
	uint16_t x120 = 523U;
	int32_t t23 = -644942290;

	t23 = (x117-((x118+x119)<=x120));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x126 = 2364188133729LLU;
	int32_t x127 = -1;
	int32_t x128 = -1;

	t24 = (x125-((x126+x127)<=x128));

	if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = 4;
	int64_t x131 = INT64_MIN;
	volatile int64_t x132 = INT64_MIN;
	int32_t t25 = -280;

	t25 = (x129-((x130+x131)<=x132));

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x133 = 16LLU;
	int8_t x134 = INT8_MIN;
	static int16_t x136 = -1;
	uint64_t t26 = 2179732483316362LLU;

	t26 = (x133-((x134+x135)<=x136));

	if (t26 != 16LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 20612578U;
	int32_t t27 = 11729807;

	t27 = (x137-((x138+x139)<=x140));

	if (t27 != -32769) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 206U;
	static int32_t x147 = -1;
	volatile int32_t t28 = 200530;

	t28 = (x145-((x146+x147)<=x148));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = -14;
	uint64_t x150 = UINT64_MAX;
	volatile int64_t x151 = INT64_MIN;
	int16_t x152 = 0;

	t29 = (x149-((x150+x151)<=x152));

	if (t29 != -14) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x161 = 2LLU;
	static volatile int32_t x162 = 2045614;
	uint32_t x163 = UINT32_MAX;
	static volatile int32_t x164 = -85352;
	volatile uint64_t t30 = 29857386303471LLU;

	t30 = (x161-((x162+x163)<=x164));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MIN;
	int64_t x167 = -1LL;
	int32_t t31 = 651;

	t31 = (x165-((x166+x167)<=x168));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MIN;

	t32 = (x177-((x178+x179)<=x180));

	if (t32 != -129) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x181 = UINT64_MAX;
	static volatile int8_t x182 = INT8_MIN;
	static int64_t x183 = -1LL;
	uint32_t x184 = 1U;
	static uint64_t t33 = 13403LLU;

	t33 = (x181-((x182+x183)<=x184));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x185 = 638U;
	int64_t x187 = -1LL;
	int64_t x188 = INT64_MIN;
	volatile int32_t t34 = -77;

	t34 = (x185-((x186+x187)<=x188));

	if (t34 != 638) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x189 = -1;
	int8_t x190 = 1;
	int32_t x191 = -18656240;
	int32_t x192 = 88;

	t35 = (x189-((x190+x191)<=x192));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x193 = -1;
	static int8_t x195 = 52;
	static uint16_t x196 = 0U;
	static volatile int32_t t36 = -1;

	t36 = (x193-((x194+x195)<=x196));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x197 = 9543U;
	int8_t x198 = 22;
	int8_t x200 = -7;

	t37 = (x197-((x198+x199)<=x200));

	if (t37 != 9542) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x201 = INT32_MIN;
	uint8_t x204 = 6U;
	volatile int32_t t38 = INT32_MIN;

	t38 = (x201-((x202+x203)<=x204));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = 4700U;
	uint8_t x208 = 2U;

	t39 = (x205-((x206+x207)<=x208));

	if (t39 != -129) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x209 = UINT64_MAX;
	volatile uint16_t x210 = 483U;
	int32_t x211 = 6236;
	static uint64_t x212 = 327962744791078579LLU;
	uint64_t t40 = 278110970LLU;

	t40 = (x209-((x210+x211)<=x212));

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x213 = INT16_MIN;
	static uint32_t x214 = UINT32_MAX;
	int64_t x215 = -489LL;
	int64_t x216 = 203812520LL;
	static int32_t t41 = 543;

	t41 = (x213-((x214+x215)<=x216));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x217 = INT16_MIN;
	volatile int8_t x218 = -7;
	volatile int16_t x219 = -1;
	volatile int64_t x220 = INT64_MIN;
	int32_t t42 = 1829;

	t42 = (x217-((x218+x219)<=x220));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x221 = INT8_MIN;
	volatile int64_t x222 = 112447194LL;
	uint16_t x223 = UINT16_MAX;
	static int16_t x224 = INT16_MAX;
	volatile int32_t t43 = 214351;

	t43 = (x221-((x222+x223)<=x224));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = -1LL;
	volatile int32_t x227 = INT32_MAX;
	int32_t t44 = -535788787;

	t44 = (x225-((x226+x227)<=x228));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x229 = INT64_MAX;
	int8_t x230 = -1;
	int8_t x231 = -1;
	int16_t x232 = 1;
	int64_t t45 = 701287009732237LL;

	t45 = (x229-((x230+x231)<=x232));

	if (t45 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x234 = INT16_MIN;
	uint16_t x235 = 1U;
	int8_t x236 = -22;
	static int32_t t46 = 3679931;

	t46 = (x233-((x234+x235)<=x236));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x237 = UINT8_MAX;
	int32_t x239 = -1;
	static uint64_t x240 = 9410LLU;
	int32_t t47 = 1;

	t47 = (x237-((x238+x239)<=x240));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MAX;
	int16_t x244 = -1;
	uint64_t t48 = 70410545027506991LLU;

	t48 = (x241-((x242+x243)<=x244));

	if (t48 != 293029LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x246 = INT32_MIN;
	static int64_t x248 = INT64_MIN;
	int32_t t49 = -320515;

	t49 = (x245-((x246+x247)<=x248));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = 5;
	static volatile int32_t x251 = INT32_MIN;
	static int16_t x252 = INT16_MAX;
	int32_t t50 = 44977117;

	t50 = (x249-((x250+x251)<=x252));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x253 = UINT64_MAX;
	uint16_t x254 = 1398U;
	volatile int32_t x255 = INT32_MIN;
	volatile uint64_t t51 = 85521291LLU;

	t51 = (x253-((x254+x255)<=x256));

	if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x257 = 5721U;
	uint64_t x258 = 24866LLU;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 21U;
	int32_t t52 = 95120;

	t52 = (x257-((x258+x259)<=x260));

	if (t52 != 5721) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = -1LL;
	int16_t x263 = 1;
	uint8_t x264 = 26U;

	t53 = (x261-((x262+x263)<=x264));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	volatile int16_t x268 = 6683;
	volatile int32_t t54 = 12690142;

	t54 = (x265-((x266+x267)<=x268));

	if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x269 = INT8_MAX;
	static volatile int16_t x270 = INT16_MIN;
	int8_t x272 = 0;
	volatile int32_t t55 = -782409632;

	t55 = (x269-((x270+x271)<=x272));

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x281 = INT16_MIN;
	int32_t x283 = -1;
	uint64_t x284 = UINT64_MAX;

	t56 = (x281-((x282+x283)<=x284));

	if (t56 != -32769) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x285 = 6939;
	static uint8_t x286 = 0U;
	volatile int16_t x287 = INT16_MAX;
	uint16_t x288 = 1U;
	volatile int32_t t57 = 318;

	t57 = (x285-((x286+x287)<=x288));

	if (t57 != 6939) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x290 = -1;
	int16_t x291 = 673;
	int8_t x292 = INT8_MIN;

	t58 = (x289-((x290+x291)<=x292));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = 49955;
	uint64_t x294 = UINT64_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t59 = -324061;

	t59 = (x293-((x294+x295)<=x296));

	if (t59 != 49955) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x301 = INT16_MIN;
	volatile uint32_t x303 = 973111182U;
	static volatile int32_t t60 = 25987642;

	t60 = (x301-((x302+x303)<=x304));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x305 = -1LL;
	uint64_t x306 = 4037666LLU;
	int64_t t61 = -132145454814LL;

	t61 = (x305-((x306+x307)<=x308));

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = -6;
	int8_t x311 = INT8_MIN;

	t62 = (x309-((x310+x311)<=x312));

	if (t62 != -7) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x313 = UINT16_MAX;
	int16_t x314 = INT16_MAX;
	static int64_t x315 = INT64_MIN;
	uint16_t x316 = 26U;
	volatile int32_t t63 = 9741;

	t63 = (x313-((x314+x315)<=x316));

	if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x317 = 1915922U;
	static volatile int8_t x318 = INT8_MAX;
	int8_t x320 = -7;

	t64 = (x317-((x318+x319)<=x320));

	if (t64 != 1915921U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x322 = 66270529U;
	uint16_t x323 = 8418U;
	static uint8_t x324 = 1U;
	volatile int32_t t65 = -80;

	t65 = (x321-((x322+x323)<=x324));

	if (t65 != 11754466) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x326 = 7297281932430739LLU;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = 59;
	int32_t t66 = -10;

	t66 = (x325-((x326+x327)<=x328));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = -1;
	static int16_t x330 = -5497;
	int32_t t67 = -330245;

	t67 = (x329-((x330+x331)<=x332));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = 0;
	int64_t x338 = INT64_MAX;
	int32_t x339 = -973653700;
	uint64_t x340 = UINT64_MAX;
	int32_t t68 = 900;

	t68 = (x337-((x338+x339)<=x340));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = 31;
	int8_t x342 = -1;
	int32_t x344 = 42342645;
	static int32_t t69 = -1973234;

	t69 = (x341-((x342+x343)<=x344));

	if (t69 != 31) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x345 = -1;
	volatile uint64_t x346 = 17877528842480245LLU;
	static uint8_t x348 = 56U;
	int32_t t70 = 61;

	t70 = (x345-((x346+x347)<=x348));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x349 = 83U;
	int32_t x350 = -21;
	uint16_t x351 = 932U;
	static volatile int16_t x352 = -1;
	volatile int32_t t71 = -3083692;

	t71 = (x349-((x350+x351)<=x352));

	if (t71 != 83) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	static uint64_t x355 = 29515496128LLU;
	volatile int32_t t72 = 1;

	t72 = (x353-((x354+x355)<=x356));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 14U;
	uint16_t x360 = 2755U;
	uint32_t t73 = 172349U;

	t73 = (x357-((x358+x359)<=x360));

	if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x361 = 43339LLU;
	uint16_t x362 = 178U;
	int32_t x363 = -1;
	static volatile uint64_t t74 = 745253470411LLU;

	t74 = (x361-((x362+x363)<=x364));

	if (t74 != 43338LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = -247054832;
	int32_t t75 = 52502;

	t75 = (x365-((x366+x367)<=x368));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x369 = -81LL;
	uint32_t x370 = UINT32_MAX;
	volatile int16_t x371 = -1;
	volatile uint64_t x372 = UINT64_MAX;
	static int64_t t76 = 9528567223327919LL;

	t76 = (x369-((x370+x371)<=x372));

	if (t76 != -82LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x373 = INT8_MIN;
	int8_t x375 = INT8_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t77 = 1426;

	t77 = (x373-((x374+x375)<=x376));

	if (t77 != -129) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = UINT8_MAX;
	uint16_t x384 = UINT16_MAX;

	t78 = (x381-((x382+x383)<=x384));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x385 = 10367LL;
	static volatile int64_t x386 = -1LL;
	int8_t x387 = INT8_MIN;
	volatile int16_t x388 = INT16_MIN;
	static int64_t t79 = -97100636113LL;

	t79 = (x385-((x386+x387)<=x388));

	if (t79 != 10367LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x389 = UINT16_MAX;
	static volatile int8_t x390 = -1;
	volatile uint32_t x391 = UINT32_MAX;

	t80 = (x389-((x390+x391)<=x392));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x394 = INT8_MIN;
	int16_t x395 = -17;
	uint16_t x396 = UINT16_MAX;
	int32_t t81 = 11891;

	t81 = (x393-((x394+x395)<=x396));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x397 = 3;
	volatile int8_t x398 = -4;
	static int8_t x399 = 1;
	uint32_t x400 = 447U;
	int32_t t82 = -1;

	t82 = (x397-((x398+x399)<=x400));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x405 = -7;
	int32_t x406 = -165580528;
	uint16_t x408 = 7U;

	t83 = (x405-((x406+x407)<=x408));

	if (t83 != -7) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x409 = 1LL;
	static int16_t x410 = INT16_MIN;
	static volatile int8_t x411 = 2;
	uint8_t x412 = 92U;
	volatile int64_t t84 = -10674045030LL;

	t84 = (x409-((x410+x411)<=x412));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = UINT16_MAX;
	static uint64_t x418 = UINT64_MAX;
	int16_t x420 = INT16_MIN;
	static int32_t t85 = 932722671;

	t85 = (x417-((x418+x419)<=x420));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x425 = -1LL;
	volatile uint8_t x426 = 0U;
	int32_t x427 = INT32_MIN;
	uint8_t x428 = 9U;
	volatile int64_t t86 = -399529656458287LL;

	t86 = (x425-((x426+x427)<=x428));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x430 = UINT64_MAX;
	static int16_t x431 = INT16_MIN;
	volatile int64_t x432 = -3459077400984LL;
	int32_t t87 = 1864;

	t87 = (x429-((x430+x431)<=x432));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x433 = INT8_MIN;
	uint16_t x434 = 2183U;
	int64_t x435 = 94577LL;
	int32_t t88 = -507;

	t88 = (x433-((x434+x435)<=x436));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x437 = 0LL;
	int16_t x439 = INT16_MIN;
	int8_t x440 = -44;
	static volatile int64_t t89 = 1LL;

	t89 = (x437-((x438+x439)<=x440));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x441 = UINT64_MAX;
	static int16_t x442 = -1;
	volatile int8_t x443 = 2;
	static int16_t x444 = 319;

	t90 = (x441-((x442+x443)<=x444));

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x445 = INT64_MIN;
	volatile uint64_t x446 = UINT64_MAX;
	static uint64_t x447 = UINT64_MAX;
	uint8_t x448 = 0U;
	int64_t t91 = INT64_MIN;

	t91 = (x445-((x446+x447)<=x448));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x457 = -3;
	volatile int64_t x458 = INT64_MAX;
	int32_t x459 = -1;
	int32_t t92 = 303114;

	t92 = (x457-((x458+x459)<=x460));

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x461 = 3460272;
	volatile int32_t x462 = INT32_MIN;
	volatile uint64_t x463 = 3485947LLU;
	volatile uint64_t x464 = 1LLU;
	int32_t t93 = 0;

	t93 = (x461-((x462+x463)<=x464));

	if (t93 != 3460272) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x469 = INT64_MIN;
	static volatile int16_t x472 = -1;
	int64_t t94 = INT64_MIN;

	t94 = (x469-((x470+x471)<=x472));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x473 = -1027912138;
	int32_t x474 = -1;
	static int32_t x475 = -1;
	static int16_t x476 = INT16_MAX;

	t95 = (x473-((x474+x475)<=x476));

	if (t95 != -1027912139) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x478 = 6U;
	uint8_t x479 = 1U;
	static uint8_t x480 = UINT8_MAX;
	int32_t t96 = 8214097;

	t96 = (x477-((x478+x479)<=x480));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x481 = 287U;
	uint64_t x482 = 9935954302LLU;
	static int8_t x483 = INT8_MIN;
	static int64_t x484 = -1LL;
	uint32_t t97 = 52U;

	t97 = (x481-((x482+x483)<=x484));

	if (t97 != 286U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x485 = INT16_MIN;
	volatile uint16_t x486 = 258U;
	volatile uint32_t x487 = 25U;
	static int32_t t98 = -70;

	t98 = (x485-((x486+x487)<=x488));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x489 = INT8_MIN;
	uint64_t x491 = 1916780054LLU;

	t99 = (x489-((x490+x491)<=x492));

	if (t99 != -129) { NG(); } else { ; }
	
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

