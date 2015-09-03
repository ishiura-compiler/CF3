#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -594328520;
uint64_t t0 = 8LLU;
int8_t x6 = -3;
int8_t x7 = INT8_MAX;
volatile int16_t x9 = 393;
int64_t x13 = -1LL;
int64_t x14 = -1LL;
uint64_t x24 = 37076LLU;
static uint8_t x27 = 59U;
int32_t x37 = 13;
uint64_t x39 = 6022LLU;
int16_t x47 = 1;
int64_t x49 = INT64_MIN;
static uint64_t t10 = 3205382LLU;
static volatile int64_t t11 = -19962LL;
static uint64_t x62 = UINT64_MAX;
volatile uint64_t t12 = 35494975010LLU;
uint16_t x66 = UINT16_MAX;
volatile int16_t x74 = INT16_MIN;
static int8_t x77 = -1;
int8_t x79 = INT8_MIN;
int16_t x80 = INT16_MIN;
volatile int32_t t16 = -61750;
uint32_t x82 = 67220353U;
uint32_t t17 = 9U;
volatile int64_t t19 = INT64_MIN;
int16_t x98 = INT16_MAX;
static int16_t x99 = -5;
uint16_t x103 = 15U;
volatile int16_t x107 = 1031;
int32_t t23 = -228;
volatile uint16_t x109 = 4U;
int32_t x116 = 4;
int32_t x119 = INT32_MAX;
int64_t x126 = INT64_MIN;
uint64_t x127 = 34961752438951680LLU;
uint32_t t31 = 4855837U;
volatile int64_t x141 = -488972436426224136LL;
volatile int32_t x145 = INT32_MAX;
uint8_t x153 = 22U;
uint64_t t36 = 3681802194338095483LLU;
uint8_t x186 = 62U;
int8_t x193 = -6;
volatile uint32_t x196 = 3898U;
uint64_t x200 = 111766532LLU;
volatile int8_t x213 = -1;
uint8_t x225 = UINT8_MAX;
volatile int32_t x227 = INT32_MIN;
volatile uint32_t t47 = 197823U;
volatile int16_t x230 = INT16_MIN;
int64_t x232 = INT64_MAX;
static uint8_t x234 = 22U;
int16_t x235 = INT16_MAX;
int16_t x246 = 11695;
int16_t x255 = 1;
static uint32_t t53 = 3U;
uint16_t x259 = 5588U;
int16_t x268 = INT16_MIN;
int64_t x271 = INT64_MIN;
int16_t x300 = INT16_MIN;
static volatile int32_t t64 = 0;
static volatile uint64_t t66 = 3591956170780LLU;
int64_t x316 = -1934906395294829585LL;
volatile uint16_t x333 = UINT16_MAX;
uint32_t x336 = UINT32_MAX;
int32_t x338 = INT32_MIN;
uint32_t x339 = UINT32_MAX;
volatile int64_t x348 = INT64_MAX;
int32_t t75 = 44094;
uint64_t x361 = 56970LLU;
static volatile int32_t x367 = -1;
uint64_t x368 = 1402996721LLU;
uint64_t x374 = UINT64_MAX;
static int32_t x375 = -222;
int16_t x376 = -1;
static volatile uint64_t t81 = 7080495568125LLU;
int64_t t82 = -499LL;
volatile int32_t x387 = INT32_MIN;
uint16_t x388 = 2U;
uint16_t x391 = 8U;
int64_t x396 = -1LL;
int32_t x400 = INT32_MIN;
uint32_t x401 = UINT32_MAX;
int64_t t88 = 2212290253890790359LL;
int32_t x407 = INT32_MIN;
int64_t x412 = INT64_MIN;
static volatile int64_t t91 = -104339LL;
static volatile int16_t x419 = INT16_MAX;
uint64_t x421 = 3232026014LLU;
static int64_t x424 = INT64_MAX;
volatile int16_t x435 = INT16_MIN;
int32_t x437 = INT32_MIN;
int32_t x439 = -438;
int64_t x446 = INT64_MAX;
int32_t x450 = 7313146;
int64_t x452 = -8147620823LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int64_t x3 = INT64_MIN;
	uint64_t x4 = 69LLU;

	t0 = (x1&(x2&(x3+x4)));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 15918;

	t1 = (x5&(x6&(x7+x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = -1306LL;
	uint32_t x11 = 1135681217U;
	int32_t x12 = 23494;
	volatile int64_t t2 = 17LL;

	t2 = (x9&(x10&(x11+x12)));

	if (t2 != 128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = -1007;
	static volatile int16_t x16 = 490;
	static int64_t t3 = -110451704427411LL;

	t3 = (x13&(x14&(x15+x16)));

	if (t3 != -517LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint32_t x18 = 266U;
	static volatile uint16_t x19 = UINT16_MAX;
	int8_t x20 = -33;
	static uint32_t t4 = 1274201U;

	t4 = (x17&(x18&(x19+x20)));

	if (t4 != 266U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 49;
	int64_t x22 = 777LL;
	int8_t x23 = INT8_MIN;
	volatile uint64_t t5 = 1642412743858728LLU;

	t5 = (x21&(x22&(x23+x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int32_t x26 = 3;
	volatile uint8_t x28 = 1U;
	int32_t t6 = 6233416;

	t6 = (x25&(x26&(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 0U;
	static uint32_t x34 = 2506614U;
	int32_t x35 = 521216449;
	uint8_t x36 = 61U;
	volatile uint32_t t7 = 99335U;

	t7 = (x33&(x34&(x35+x36)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = 10623943U;
	int16_t x40 = -1031;
	volatile uint64_t t8 = 775134588971LLU;

	t8 = (x37&(x38&(x39+x40)));

	if (t8 != 5LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	uint64_t x46 = 26677611356449844LLU;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t9 = 2009415LLU;

	t9 = (x45&(x46&(x47+x48)));

	if (t9 != 26677609538519040LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = UINT16_MAX;
	volatile uint16_t x51 = UINT16_MAX;
	volatile uint64_t x52 = 11LLU;

	t10 = (x49&(x50&(x51+x52)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = -1LL;
	uint16_t x58 = UINT16_MAX;
	uint32_t x59 = 421060U;
	static uint16_t x60 = 6351U;

	t11 = (x57&(x58&(x59+x60)));

	if (t11 != 34195LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	static int32_t x64 = 432248;

	t12 = (x61&(x62&(x63+x64)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 1U;
	volatile int64_t x67 = INT64_MAX;
	int8_t x68 = INT8_MIN;
	int64_t t13 = -1908077498694LL;

	t13 = (x65&(x66&(x67+x68)));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 477211U;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = 0U;
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t14 = -312LL;

	t14 = (x69&(x70&(x71+x72)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -7;
	volatile int16_t x75 = 0;
	static int64_t x76 = INT64_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (x73&(x74&(x75+x76)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x78 = -1;

	t16 = (x77&(x78&(x79+x80)));

	if (t16 != -32896) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -1;

	t17 = (x81&(x82&(x83+x84)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	uint16_t x86 = 21U;
	uint32_t x87 = 3420U;
	volatile uint8_t x88 = 1U;
	volatile int64_t t18 = -408432070540812LL;

	t18 = (x85&(x86&(x87+x88)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	int32_t x92 = -1;

	t19 = (x89&(x90&(x91+x92)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 1;
	int16_t x94 = -1;
	static int8_t x95 = INT8_MIN;
	uint8_t x96 = 115U;
	int32_t t20 = 1;

	t20 = (x93&(x94&(x95+x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = 39016;
	int8_t x100 = 1;
	volatile int32_t t21 = 741;

	t21 = (x97&(x98&(x99+x100)));

	if (t21 != 6248) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = -1;
	int32_t x102 = INT32_MAX;
	int16_t x104 = 3;
	static volatile int32_t t22 = -5;

	t22 = (x101&(x102&(x103+x104)));

	if (t22 != 18) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = INT32_MAX;
	int16_t x108 = INT16_MIN;

	t23 = (x105&(x106&(x107+x108)));

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x110 = 4U;
	int32_t x111 = 53134195;
	uint8_t x112 = 86U;
	volatile int32_t t24 = -101579;

	t24 = (x109&(x110&(x111+x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 8075017949352LLU;
	int64_t x114 = INT64_MIN;
	static int8_t x115 = INT8_MAX;
	uint64_t t25 = 123485882LLU;

	t25 = (x113&(x114&(x115+x116)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	static int8_t x118 = INT8_MIN;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t26 = 1;

	t26 = (x117&(x118&(x119+x120)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x121 = INT64_MAX;
	static uint16_t x122 = 9U;
	volatile int64_t x123 = 63325453164326LL;
	int64_t x124 = INT64_MIN;
	static int64_t t27 = 3661917LL;

	t27 = (x121&(x122&(x123+x124)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MIN;
	int8_t x128 = -1;
	uint64_t t28 = 19339029457LLU;

	t28 = (x125&(x126&(x127+x128)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 99U;
	uint8_t x130 = 23U;
	int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MAX;
	int64_t t29 = 9351385829178232LL;

	t29 = (x129&(x130&(x131+x132)));

	if (t29 != 3LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = INT64_MAX;
	int64_t x134 = INT64_MIN;
	static volatile int16_t x135 = INT16_MIN;
	int64_t x136 = -130645435326789LL;
	int64_t t30 = -61785746LL;

	t30 = (x133&(x134&(x135+x136)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = 252U;
	int8_t x138 = 1;
	volatile int16_t x139 = INT16_MAX;
	uint8_t x140 = 30U;

	t31 = (x137&(x138&(x139+x140)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x142 = 197LLU;
	int64_t x143 = -1LL;
	int32_t x144 = 893835949;
	uint64_t t32 = 111241274LLU;

	t32 = (x141&(x142&(x143+x144)));

	if (t32 != 128LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x146 = INT64_MAX;
	int16_t x147 = INT16_MIN;
	static int32_t x148 = -1;
	static volatile int64_t t33 = 1669046698LL;

	t33 = (x145&(x146&(x147+x148)));

	if (t33 != 2147450879LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x154 = -1;
	int32_t x155 = -305379986;
	static uint16_t x156 = 0U;
	int32_t t34 = 12;

	t34 = (x153&(x154&(x155+x156)));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 6583804LLU;
	int64_t x158 = INT64_MAX;
	uint8_t x159 = 82U;
	uint64_t x160 = 1970LLU;
	volatile uint64_t t35 = 4199733453903825LLU;

	t35 = (x157&(x158&(x159+x160)));

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x161 = UINT64_MAX;
	int8_t x162 = INT8_MIN;
	volatile int32_t x163 = -2;
	int8_t x164 = INT8_MAX;

	t36 = (x161&(x162&(x163+x164)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x169 = -271978;
	volatile int16_t x170 = -720;
	uint8_t x171 = UINT8_MAX;
	static int32_t x172 = -1;
	volatile int32_t t37 = -104624694;

	t37 = (x169&(x170&(x171+x172)));

	if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = -4236;
	int8_t x182 = INT8_MIN;
	static volatile int16_t x183 = INT16_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t38 = 30;

	t38 = (x181&(x182&(x183+x184)));

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x185 = -1LL;
	static uint16_t x187 = 15209U;
	static uint16_t x188 = 2U;
	int64_t t39 = -1870721773842104441LL;

	t39 = (x185&(x186&(x187+x188)));

	if (t39 != 42LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x189 = 3U;
	int16_t x190 = 2666;
	uint32_t x191 = 6729U;
	int8_t x192 = -1;
	uint32_t t40 = 121225080U;

	t40 = (x189&(x190&(x191+x192)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x194 = 1;
	volatile uint8_t x195 = 0U;
	uint32_t t41 = 5U;

	t41 = (x193&(x194&(x195+x196)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MAX;
	int32_t x198 = -1;
	static uint8_t x199 = 83U;
	static volatile uint64_t t42 = 15359LLU;

	t42 = (x197&(x198&(x199+x200)));

	if (t42 != 27735LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x202 = UINT64_MAX;
	int8_t x203 = -1;
	int64_t x204 = 1809929879LL;
	uint64_t t43 = 13912LLU;

	t43 = (x201&(x202&(x203+x204)));

	if (t43 != 1809929856LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x214 = -1;
	int8_t x215 = -5;
	volatile uint8_t x216 = 12U;
	volatile int32_t t44 = 973;

	t44 = (x213&(x214&(x215+x216)));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = -1LL;
	int32_t x218 = -1;
	uint64_t x219 = 4323997677648583887LLU;
	int16_t x220 = INT16_MAX;
	static volatile uint64_t t45 = 79215924LLU;

	t45 = (x217&(x218&(x219+x220)));

	if (t45 != 4323997677648616654LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x221 = 114U;
	int16_t x222 = INT16_MAX;
	uint64_t x223 = 122939819759137LLU;
	static int16_t x224 = INT16_MIN;
	uint64_t t46 = 5608602422244LLU;

	t46 = (x221&(x222&(x223+x224)));

	if (t46 != 32LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x226 = INT8_MAX;
	uint32_t x228 = UINT32_MAX;

	t47 = (x225&(x226&(x227+x228)));

	if (t47 != 127U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x229 = UINT16_MAX;
	volatile int16_t x231 = INT16_MIN;
	int64_t t48 = 799130688LL;

	t48 = (x229&(x230&(x231+x232)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	int64_t t49 = -3173962LL;

	t49 = (x233&(x234&(x235+x236)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = 1U;
	int32_t x238 = 22;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t50 = 463049781;

	t50 = (x237&(x238&(x239+x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x241 = INT64_MIN;
	static uint64_t x242 = 442LLU;
	int32_t x243 = 87498312;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t51 = 83817LLU;

	t51 = (x241&(x242&(x243+x244)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = INT16_MAX;
	volatile int8_t x247 = -53;
	int16_t x248 = INT16_MIN;
	volatile int32_t t52 = 0;

	t52 = (x245&(x246&(x247+x248)));

	if (t52 != 11659) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = 23642174U;
	volatile uint8_t x254 = UINT8_MAX;
	uint32_t x256 = UINT32_MAX;

	t53 = (x253&(x254&(x255+x256)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x257 = -1;
	int64_t x258 = INT64_MIN;
	volatile uint64_t x260 = UINT64_MAX;
	uint64_t t54 = 70918986926971LLU;

	t54 = (x257&(x258&(x259+x260)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = -1LL;
	int32_t x262 = -6834;
	int32_t x263 = 13;
	uint16_t x264 = 57U;
	int64_t t55 = 67829614315309167LL;

	t55 = (x261&(x262&(x263+x264)));

	if (t55 != 70LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MAX;
	volatile uint32_t x267 = UINT32_MAX;
	uint32_t t56 = 2708811U;

	t56 = (x265&(x266&(x267+x268)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x269 = -1;
	int8_t x270 = 1;
	int16_t x272 = INT16_MAX;
	int64_t t57 = -7788528435035LL;

	t57 = (x269&(x270&(x271+x272)));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x273 = 22154;
	uint16_t x274 = 19U;
	static int16_t x275 = INT16_MAX;
	int32_t x276 = -1;
	static volatile int32_t t58 = 67832035;

	t58 = (x273&(x274&(x275+x276)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = 8578953674126LL;
	static int32_t x278 = INT32_MIN;
	volatile int64_t x279 = INT64_MAX;
	int64_t x280 = INT64_MIN;
	static volatile int64_t t59 = -35806374164347186LL;

	t59 = (x277&(x278&(x279+x280)));

	if (t59 != 8577049690112LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MIN;
	volatile int32_t x283 = 2326;
	volatile int32_t x284 = INT32_MIN;
	volatile uint64_t t60 = 1451545465173990LLU;

	t60 = (x281&(x282&(x283+x284)));

	if (t60 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 73U;
	uint16_t x286 = 12495U;
	static uint64_t x287 = UINT64_MAX;
	int64_t x288 = 13247262252582LL;
	uint64_t t61 = 1955375LLU;

	t61 = (x285&(x286&(x287+x288)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x289 = 2U;
	int8_t x290 = -1;
	static int32_t x291 = 14384;
	uint16_t x292 = UINT16_MAX;
	static int32_t t62 = -72988634;

	t62 = (x289&(x290&(x291+x292)));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = -1;
	int32_t x295 = -15467915;
	uint64_t x296 = 145915370031LLU;
	uint64_t t63 = 994277LLU;

	t63 = (x293&(x294&(x295+x296)));

	if (t63 != 164LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = INT16_MAX;
	static volatile int32_t x299 = -1;

	t64 = (x297&(x298&(x299+x300)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x301 = INT16_MIN;
	volatile int8_t x302 = INT8_MIN;
	static uint16_t x303 = 14U;
	static uint32_t x304 = 113U;
	volatile uint32_t t65 = 1652U;

	t65 = (x301&(x302&(x303+x304)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	static uint64_t x306 = 1969112950LLU;
	static volatile int32_t x307 = -292269812;
	int32_t x308 = 4226566;

	t66 = (x305&(x306&(x307+x308)));

	if (t66 != 1683226624LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x313 = 12622U;
	uint64_t x314 = 130384020602LLU;
	int16_t x315 = INT16_MIN;
	uint64_t t67 = 52884286892310LLU;

	t67 = (x313&(x314&(x315+x316)));

	if (t67 != 74LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	uint64_t t68 = 15690788LLU;

	t68 = (x317&(x318&(x319+x320)));

	if (t68 != 127LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = -1;
	volatile int32_t x322 = INT32_MIN;
	uint8_t x323 = UINT8_MAX;
	uint16_t x324 = 40U;
	int32_t t69 = -31692;

	t69 = (x321&(x322&(x323+x324)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x326 = 121907303;
	static int8_t x327 = INT8_MAX;
	int32_t x328 = -1;
	int32_t t70 = -209;

	t70 = (x325&(x326&(x327+x328)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x329 = 5U;
	uint16_t x330 = UINT16_MAX;
	static uint32_t x331 = 13U;
	int8_t x332 = INT8_MIN;
	volatile uint32_t t71 = 605378U;

	t71 = (x329&(x330&(x331+x332)));

	if (t71 != 5U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x334 = -24733797868786LL;
	volatile uint32_t x335 = UINT32_MAX;
	int64_t t72 = 66867278LL;

	t72 = (x333&(x334&(x335+x336)));

	if (t72 != 39694LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x337 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	volatile uint32_t t73 = 3006U;

	t73 = (x337&(x338&(x339+x340)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x345 = 5552LLU;
	int64_t x346 = 17760670430378LL;
	int32_t x347 = -2097189;
	uint64_t t74 = 107244251607554944LLU;

	t74 = (x345&(x346&(x347+x348)));

	if (t74 != 5248LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x349 = UINT16_MAX;
	static int32_t x350 = -1;
	uint16_t x351 = 5788U;
	int32_t x352 = INT32_MIN;

	t75 = (x349&(x350&(x351+x352)));

	if (t75 != 5788) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x353 = 4056009U;
	static volatile int64_t x354 = 8301LL;
	int8_t x355 = -9;
	static int16_t x356 = -3;
	int64_t t76 = -2092735464901140LL;

	t76 = (x353&(x354&(x355+x356)));

	if (t76 != 8256LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x357 = 97848U;
	int32_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	uint64_t t77 = 10LLU;

	t77 = (x357&(x358&(x359+x360)));

	if (t77 != 97848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x362 = 31166;
	int32_t x363 = -1;
	int64_t x364 = INT64_MAX;
	uint64_t t78 = 13730206289364625LLU;

	t78 = (x361&(x362&(x363+x364)));

	if (t78 != 22666LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MAX;
	static volatile int64_t x366 = -1LL;
	static volatile uint64_t t79 = 805510563159LLU;

	t79 = (x365&(x366&(x367+x368)));

	if (t79 != 112LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x369 = 60U;
	int64_t x370 = INT64_MIN;
	uint16_t x371 = 9U;
	volatile int64_t x372 = 1LL;
	volatile int64_t t80 = 36LL;

	t80 = (x369&(x370&(x371+x372)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x373 = INT16_MAX;

	t81 = (x373&(x374&(x375+x376)));

	if (t81 != 32545LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 883U;
	static uint32_t x378 = UINT32_MAX;
	volatile uint8_t x379 = UINT8_MAX;
	int64_t x380 = -4089063312029LL;

	t82 = (x377&(x378&(x379+x380)));

	if (t82 != 610LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = 38254LLU;
	int32_t x384 = 329;
	static volatile uint64_t t83 = 396349773574LLU;

	t83 = (x381&(x382&(x383+x384)));

	if (t83 != 5815LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = INT64_MIN;
	volatile uint32_t x386 = 138U;
	int64_t t84 = 22LL;

	t84 = (x385&(x386&(x387+x388)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = 10;
	static int64_t x390 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	static int64_t t85 = -1565023415LL;

	t85 = (x389&(x390&(x391+x392)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x393 = 14200473;
	int16_t x394 = INT16_MIN;
	static int8_t x395 = 6;
	int64_t t86 = 35LL;

	t86 = (x393&(x394&(x395+x396)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x397 = 0U;
	volatile int16_t x398 = INT16_MAX;
	static uint16_t x399 = 7U;
	volatile int32_t t87 = 490;

	t87 = (x397&(x398&(x399+x400)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x402 = INT64_MIN;
	volatile int16_t x403 = INT16_MAX;
	int8_t x404 = -1;

	t88 = (x401&(x402&(x403+x404)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x405 = INT16_MIN;
	uint16_t x406 = UINT16_MAX;
	static uint8_t x408 = 1U;
	static int32_t t89 = 240195;

	t89 = (x405&(x406&(x407+x408)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = INT64_MIN;
	volatile uint8_t x411 = 0U;
	int64_t t90 = INT64_MIN;

	t90 = (x409&(x410&(x411+x412)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x413 = INT8_MIN;
	uint8_t x414 = 4U;
	volatile int64_t x415 = -1LL;
	uint16_t x416 = 30588U;

	t91 = (x413&(x414&(x415+x416)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MIN;
	int64_t x418 = 10587642140LL;
	uint64_t x420 = 9522617820870LLU;
	volatile uint64_t t92 = 53LLU;

	t92 = (x417&(x418&(x419+x420)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x422 = UINT32_MAX;
	static int32_t x423 = INT32_MIN;
	volatile uint64_t t93 = 88721782641013106LLU;

	t93 = (x421&(x422&(x423+x424)));

	if (t93 != 1084542366LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = INT32_MIN;
	static uint64_t x426 = UINT64_MAX;
	uint16_t x427 = UINT16_MAX;
	int8_t x428 = INT8_MIN;
	static volatile uint64_t t94 = 460575228LLU;

	t94 = (x425&(x426&(x427+x428)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x433 = UINT32_MAX;
	int16_t x434 = 270;
	uint64_t x436 = 441756218447727LLU;
	uint64_t t95 = 20LLU;

	t95 = (x433&(x434&(x435+x436)));

	if (t95 != 270LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x438 = UINT32_MAX;
	volatile int64_t x440 = 10LL;
	int64_t t96 = -1466810LL;

	t96 = (x437&(x438&(x439+x440)));

	if (t96 != 2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x441 = 735U;
	static int64_t x442 = INT64_MIN;
	volatile int8_t x443 = 0;
	int32_t x444 = INT32_MIN;
	static int64_t t97 = 269713LL;

	t97 = (x441&(x442&(x443+x444)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x445 = UINT8_MAX;
	int64_t x447 = INT64_MIN;
	int64_t x448 = 0LL;
	volatile int64_t t98 = 729LL;

	t98 = (x445&(x446&(x447+x448)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = INT64_MIN;
	volatile int8_t x451 = INT8_MIN;
	static volatile int64_t t99 = -282029445LL;

	t99 = (x449&(x450&(x451+x452)));

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

