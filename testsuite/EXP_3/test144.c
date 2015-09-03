#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 130984837U;
static volatile int8_t x5 = -1;
uint8_t x15 = UINT8_MAX;
static uint32_t x25 = UINT32_MAX;
int16_t x35 = -1627;
static int64_t x40 = INT64_MIN;
uint8_t x45 = 8U;
uint32_t x46 = UINT32_MAX;
volatile int64_t t9 = -828288LL;
static int8_t x63 = -25;
static volatile int32_t t12 = 34305005;
volatile int16_t x70 = 1;
volatile uint16_t x72 = 25U;
uint32_t x73 = 1242U;
int16_t x75 = INT16_MIN;
static int16_t x90 = INT16_MIN;
int16_t x91 = -1;
int64_t x98 = INT64_MIN;
static int64_t t18 = -882152087LL;
int64_t x104 = INT64_MAX;
int64_t x107 = -526525055996137LL;
int64_t t20 = -3004111996LL;
int16_t x112 = 1;
int8_t x122 = INT8_MIN;
static int16_t x123 = INT16_MIN;
int64_t x126 = -1014896951196857LL;
static uint64_t x128 = UINT64_MAX;
volatile int16_t x129 = -14499;
static int8_t x132 = -1;
uint64_t x133 = 1255LLU;
int8_t x141 = INT8_MIN;
volatile uint32_t t28 = 912523643U;
uint64_t x149 = 547422LLU;
volatile int8_t x152 = -1;
static volatile uint64_t t30 = 0LLU;
int8_t x156 = -1;
static volatile uint64_t t34 = 437954LLU;
int32_t x180 = INT32_MAX;
volatile uint8_t x183 = 1U;
volatile uint32_t x185 = 155859U;
uint8_t x192 = 14U;
int32_t t39 = -331888;
uint32_t x195 = 29U;
static int8_t x196 = -1;
volatile uint32_t t40 = 1U;
int32_t x203 = INT32_MIN;
uint32_t x211 = UINT32_MAX;
int64_t x212 = 1538706LL;
volatile int64_t t43 = -550044351326LL;
int8_t x217 = -1;
static volatile int32_t x219 = INT32_MIN;
volatile int64_t t45 = -4025487LL;
int16_t x222 = -1;
volatile int16_t x223 = INT16_MIN;
volatile uint16_t x224 = 16723U;
uint32_t x234 = 28965U;
int32_t x246 = INT32_MIN;
static volatile uint16_t x262 = 6U;
int64_t x264 = -3675520LL;
int8_t x265 = INT8_MIN;
int16_t x266 = -1;
static volatile int8_t x267 = INT8_MIN;
static int8_t x268 = -1;
volatile int32_t t54 = -1768;
static int64_t x269 = INT64_MIN;
int64_t x271 = 5LL;
int64_t x283 = -1LL;
volatile uint64_t t57 = 2053348083LLU;
uint32_t x294 = UINT32_MAX;
uint8_t x295 = 2U;
volatile uint8_t x319 = 4U;
uint16_t x325 = UINT16_MAX;
uint16_t x331 = UINT16_MAX;
int32_t x334 = 580898726;
volatile uint64_t t67 = 1366LLU;
int32_t x338 = INT32_MIN;
int16_t x351 = INT16_MAX;
uint16_t x358 = UINT16_MAX;
static int32_t x361 = 45;
volatile int32_t t73 = -91317;
int16_t x369 = 185;
int32_t x398 = INT32_MIN;
int32_t x405 = INT32_MIN;
uint32_t t81 = 7138068U;
static uint32_t x410 = 1016158U;
uint32_t t82 = 21136U;
uint8_t x420 = UINT8_MAX;
int16_t x423 = INT16_MIN;
static int16_t x440 = INT16_MAX;
volatile int32_t x443 = INT32_MAX;
volatile int64_t x444 = INT64_MIN;
volatile uint64_t t90 = 57760143LLU;
int64_t x466 = INT64_MIN;
int32_t t94 = 24;
uint64_t x486 = 29354154946383082LLU;
static int8_t x490 = 9;
volatile int32_t x492 = INT32_MIN;
int64_t x494 = INT64_MIN;


void f0(void) {
	int8_t x1 = -1;
	uint32_t x2 = 49129053U;
	int16_t x3 = 3;
	volatile uint16_t x4 = UINT16_MAX;

	t0 = ((x1|x2)+(x3+x4));

	if (t0 != 65537U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	static uint64_t x7 = 283LLU;
	uint16_t x8 = UINT16_MAX;
	static volatile uint64_t t1 = 304LLU;

	t1 = ((x5|x6)+(x7+x8));

	if (t1 != 65817LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = UINT8_MAX;
	uint16_t x14 = 25643U;
	volatile uint8_t x16 = 45U;
	int32_t t2 = 133242077;

	t2 = ((x13|x14)+(x15+x16));

	if (t2 != 26155) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x26 = 2077468U;
	int32_t x27 = INT32_MAX;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t3 = 20085527995LLU;

	t3 = ((x25|x26)+(x27+x28));

	if (t3 != 6442450941LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = 518U;
	static uint16_t x32 = UINT16_MAX;
	volatile int64_t t4 = 336LL;

	t4 = ((x29|x30)+(x31+x32));

	if (t4 != -9223372036854709628LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x34 = 199691194U;
	int16_t x36 = -1;
	uint32_t t5 = 941U;

	t5 = ((x33|x34)+(x35+x36));

	if (t5 != 4294965598U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 43216LL;
	static int32_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	volatile int64_t t6 = 7185099LL;

	t6 = ((x37|x38)+(x39+x40));

	if (t6 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x41 = 0LLU;
	static int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 1U;
	volatile uint64_t t7 = 14684LLU;

	t7 = ((x41|x42)+(x43+x44));

	if (t7 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x47 = 3U;
	int8_t x48 = 1;
	static uint32_t t8 = 0U;

	t8 = ((x45|x46)+(x47+x48));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MAX;
	volatile int64_t x50 = INT64_MIN;
	uint16_t x51 = 0U;
	int16_t x52 = 574;

	t9 = ((x49|x50)+(x51+x52));

	if (t9 != 573LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = -1;
	int8_t x55 = 3;
	int16_t x56 = INT16_MIN;
	volatile int32_t t10 = -55;

	t10 = ((x53|x54)+(x55+x56));

	if (t10 != -32766) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = INT64_MAX;
	uint32_t x62 = UINT32_MAX;
	int16_t x64 = -1;
	int64_t t11 = 1920798LL;

	t11 = ((x61|x62)+(x63+x64));

	if (t11 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MIN;
	int16_t x68 = -5613;

	t12 = ((x65|x66)+(x67+x68));

	if (t12 != -38382) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x71 = UINT64_MAX;
	volatile uint64_t t13 = 1967316743537LLU;

	t13 = ((x69|x70)+(x71+x72));

	if (t13 != 279LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x74 = 5194130U;
	int64_t x76 = 465889667LL;
	int64_t t14 = -1346688883740876096LL;

	t14 = ((x73|x74)+(x75+x76));

	if (t14 != 471052125LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	uint16_t x78 = 45U;
	int64_t x79 = -1LL;
	uint8_t x80 = UINT8_MAX;
	int64_t t15 = 19LL;

	t15 = ((x77|x78)+(x79+x80));

	if (t15 != 509LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -1;
	volatile int16_t x92 = INT16_MAX;
	static int32_t t16 = -1041155;

	t16 = ((x89|x90)+(x91+x92));

	if (t16 != 32765) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MIN;
	volatile int64_t x94 = INT64_MIN;
	uint64_t x95 = 55439230LLU;
	uint8_t x96 = 16U;
	static volatile uint64_t t17 = 133660264LLU;

	t17 = ((x93|x94)+(x95+x96));

	if (t17 != 18446744071617507214LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x97 = INT64_MAX;
	volatile int16_t x99 = 9;
	int8_t x100 = -54;

	t18 = ((x97|x98)+(x99+x100));

	if (t18 != -46LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x101 = INT64_MAX;
	int64_t x102 = 926168266772LL;
	volatile uint64_t x103 = UINT64_MAX;
	uint64_t t19 = 218294602LLU;

	t19 = ((x101|x102)+(x103+x104));

	if (t19 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x105 = -1;
	int8_t x106 = 2;
	uint32_t x108 = 47357U;

	t20 = ((x105|x106)+(x107+x108));

	if (t20 != -526525055948781LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x109 = INT64_MIN;
	static int8_t x110 = -1;
	volatile uint8_t x111 = 3U;
	volatile int64_t t21 = 1LL;

	t21 = ((x109|x110)+(x111+x112));

	if (t21 != 3LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	static volatile int8_t x114 = INT8_MAX;
	uint16_t x115 = 10U;
	uint64_t x116 = 58040980LLU;
	static volatile uint64_t t22 = 63LLU;

	t22 = ((x113|x114)+(x115+x116));

	if (t22 != 9223372036912816925LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x121 = INT8_MIN;
	int8_t x124 = 1;
	int32_t t23 = 12;

	t23 = ((x121|x122)+(x123+x124));

	if (t23 != -32895) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 1486327481816022890LLU;
	int8_t x127 = INT8_MAX;
	uint64_t t24 = 395249LLU;

	t24 = ((x125|x126)+(x127+x128));

	if (t24 != 18445757798487687149LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x130 = INT32_MIN;
	static uint8_t x131 = 96U;
	volatile int32_t t25 = -3;

	t25 = ((x129|x130)+(x131+x132));

	if (t25 != -14404) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x134 = INT16_MAX;
	static uint32_t x135 = 3249U;
	int8_t x136 = -1;
	volatile uint64_t t26 = 99046974LLU;

	t26 = ((x133|x134)+(x135+x136));

	if (t26 != 36015LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	volatile int32_t x139 = INT32_MAX;
	int32_t x140 = -8188669;
	static volatile int64_t t27 = -71595LL;

	t27 = ((x137|x138)+(x139+x140));

	if (t27 != 2139294977LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x142 = 1777U;
	volatile int16_t x143 = -12507;
	int16_t x144 = INT16_MAX;

	t28 = ((x141|x142)+(x143+x144));

	if (t28 != 20245U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x145 = INT16_MAX;
	volatile int16_t x146 = 1838;
	uint16_t x147 = 4U;
	int16_t x148 = INT16_MIN;
	static int32_t t29 = -5;

	t29 = ((x145|x146)+(x147+x148));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x150 = 435564868154340LLU;
	static int32_t x151 = 10535453;

	t30 = ((x149|x150)+(x151+x152));

	if (t30 != 435564878708250LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x153 = 18U;
	int8_t x154 = 15;
	int16_t x155 = INT16_MIN;
	volatile uint32_t t31 = 4058081U;

	t31 = ((x153|x154)+(x155+x156));

	if (t31 != 4294934558U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 1U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = 9;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t32 = -1055586;

	t32 = ((x157|x158)+(x159+x160));

	if (t32 != 32777) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x161 = 26;
	static int16_t x162 = -9;
	int16_t x163 = -1;
	volatile int32_t x164 = -114990;
	volatile int32_t t33 = -726996;

	t33 = ((x161|x162)+(x163+x164));

	if (t33 != -114992) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int32_t x166 = INT32_MAX;
	static uint16_t x167 = 32569U;
	int16_t x168 = INT16_MIN;

	t34 = ((x165|x166)+(x167+x168));

	if (t34 != 18446744073709551416LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 61688268U;
	volatile int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	static uint8_t x172 = 0U;
	volatile uint32_t t35 = 92904U;

	t35 = ((x169|x170)+(x171+x172));

	if (t35 != 2147483596U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 6364567U;
	int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	static volatile uint64_t t36 = 591LLU;

	t36 = ((x177|x178)+(x179+x180));

	if (t36 != 6442450941LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = 40U;
	uint64_t x182 = 0LLU;
	static int16_t x184 = -122;
	volatile uint64_t t37 = 142885556794372251LLU;

	t37 = ((x181|x182)+(x183+x184));

	if (t37 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x186 = UINT32_MAX;
	uint16_t x187 = 11U;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t38 = 1U;

	t38 = ((x185|x186)+(x187+x188));

	if (t38 != 9U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x189 = 25;
	int16_t x190 = INT16_MIN;
	int16_t x191 = 67;

	t39 = ((x189|x190)+(x191+x192));

	if (t39 != -32662) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = -1;
	int8_t x194 = INT8_MIN;

	t40 = ((x193|x194)+(x195+x196));

	if (t40 != 27U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x197 = 115U;
	int16_t x198 = -2026;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 14U;
	volatile int32_t t41 = 97;

	t41 = ((x197|x198)+(x199+x200));

	if (t41 != 30852) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 12LLU;
	volatile int32_t x202 = -1;
	uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t42 = 127894176LLU;

	t42 = ((x201|x202)+(x203+x204));

	if (t42 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x209 = 26U;
	int16_t x210 = INT16_MIN;

	t43 = ((x209|x210)+(x211+x212));

	if (t43 != 4296473259LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 214472660U;
	static int64_t x214 = 4514177454529LL;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	volatile int64_t t44 = 71164627LL;

	t44 = ((x213|x214)+(x215+x216));

	if (t44 != 4514245089364LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x218 = -1559027507938996LL;
	static uint16_t x220 = 0U;

	t45 = ((x217|x218)+(x219+x220));

	if (t45 != -2147483649LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = INT16_MIN;
	int32_t t46 = -6249332;

	t46 = ((x221|x222)+(x223+x224));

	if (t46 != -16046) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = -1;
	int64_t x226 = -1LL;
	int16_t x227 = INT16_MAX;
	static uint32_t x228 = UINT32_MAX;
	volatile int64_t t47 = -160568224919693LL;

	t47 = ((x225|x226)+(x227+x228));

	if (t47 != 32765LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = -1;
	int16_t x230 = 26;
	uint8_t x231 = UINT8_MAX;
	uint64_t x232 = 19154369476777138LLU;
	uint64_t t48 = 7563LLU;

	t48 = ((x229|x230)+(x231+x232));

	if (t48 != 19154369476777392LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x233 = INT8_MIN;
	int8_t x235 = 0;
	uint16_t x236 = UINT16_MAX;
	volatile uint32_t t49 = 2U;

	t49 = ((x233|x234)+(x235+x236));

	if (t49 != 65444U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = INT16_MAX;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t50 = 533549566LLU;

	t50 = ((x245|x246)+(x247+x248));

	if (t50 != 18446744069414617086LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	int16_t x255 = 20;
	volatile uint32_t x256 = 163570U;
	int64_t t51 = 485518043672129835LL;

	t51 = ((x253|x254)+(x255+x256));

	if (t51 != 163462LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = INT8_MIN;
	static volatile int64_t x258 = INT64_MAX;
	int16_t x259 = INT16_MAX;
	volatile uint32_t x260 = 5220014U;
	static volatile int64_t t52 = 2003LL;

	t52 = ((x257|x258)+(x259+x260));

	if (t52 != 5252780LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x261 = -1;
	int64_t x263 = -1205769353LL;
	volatile int64_t t53 = 11079622LL;

	t53 = ((x261|x262)+(x263+x264));

	if (t53 != -1209444874LL) { NG(); } else { ; }
	
}

void f54(void) {


	t54 = ((x265|x266)+(x267+x268));

	if (t54 != -130) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x270 = 574384U;
	int8_t x272 = -1;
	static volatile int64_t t55 = -7113739672LL;

	t55 = ((x269|x270)+(x271+x272));

	if (t55 != -9223372036854201420LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MIN;
	volatile int16_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MIN;
	volatile int64_t t56 = 16LL;

	t56 = ((x273|x274)+(x275+x276));

	if (t56 != -32897LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x282 = 44971U;
	volatile uint64_t x284 = 1895191643263LLU;

	t57 = ((x281|x282)+(x283+x284));

	if (t57 != 1897339171881LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x285 = 79358915096250332LLU;
	volatile int8_t x286 = -50;
	int64_t x287 = -157433608736397079LL;
	int16_t x288 = -1;
	uint64_t t58 = 1195418LLU;

	t58 = ((x285|x286)+(x287+x288));

	if (t58 != 18289310464973154502LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = 21299331860301567LL;
	volatile int64_t x290 = INT64_MAX;
	int16_t x291 = -1;
	volatile int32_t x292 = -18454;
	volatile int64_t t59 = 952LL;

	t59 = ((x289|x290)+(x291+x292));

	if (t59 != 9223372036854757352LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x293 = -11;
	int8_t x296 = INT8_MIN;
	uint32_t t60 = 27032304U;

	t60 = ((x293|x294)+(x295+x296));

	if (t60 != 4294967169U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x305 = INT8_MAX;
	volatile uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t61 = 3178U;

	t61 = ((x305|x306)+(x307+x308));

	if (t61 != 32766U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x309 = INT32_MAX;
	uint64_t x310 = 663889845639464LLU;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	volatile uint64_t t62 = 123830373433LLU;

	t62 = ((x309|x310)+(x311+x312));

	if (t62 != 663890274746367LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x317 = 1512151491927255084LLU;
	int64_t x318 = -5LL;
	uint16_t x320 = UINT16_MAX;
	volatile uint64_t t63 = 35037858693380946LLU;

	t63 = ((x317|x318)+(x319+x320));

	if (t63 != 65538LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = 566246453427LLU;
	int8_t x323 = INT8_MIN;
	static int8_t x324 = -1;
	static uint64_t t64 = 706251697LLU;

	t64 = ((x321|x322)+(x323+x324));

	if (t64 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	static int32_t t65 = -130754700;

	t65 = ((x325|x326)+(x327+x328));

	if (t65 != -32770) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = INT32_MIN;
	static uint32_t x330 = 5667U;
	static uint32_t x332 = 2U;
	uint32_t t66 = 3664U;

	t66 = ((x329|x330)+(x331+x332));

	if (t66 != 2147554852U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x333 = INT8_MAX;
	uint64_t x335 = 525747271420991LLU;
	int64_t x336 = -1LL;

	t67 = ((x333|x334)+(x335+x336));

	if (t67 != 525747852319805LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x337 = -17874071901415469LL;
	int32_t x339 = -1;
	int16_t x340 = 858;
	int64_t t68 = -26550LL;

	t68 = ((x337|x338)+(x339+x340));

	if (t68 != -710911188LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = 7009257034977LL;
	int32_t x350 = INT32_MAX;
	int32_t x352 = INT32_MIN;
	volatile int64_t t69 = -40511273LL;

	t69 = ((x349|x350)+(x351+x352));

	if (t69 != 7007239176190LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x353 = -1;
	static uint32_t x354 = UINT32_MAX;
	int8_t x355 = INT8_MIN;
	uint32_t x356 = 496413U;
	uint32_t t70 = 169978663U;

	t70 = ((x353|x354)+(x355+x356));

	if (t70 != 496284U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x357 = 1;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	static int32_t t71 = 0;

	t71 = ((x357|x358)+(x359+x360));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x362 = 78;
	static volatile int64_t x363 = -1LL;
	int16_t x364 = INT16_MAX;
	int64_t t72 = -98776195260LL;

	t72 = ((x361|x362)+(x363+x364));

	if (t72 != 32877LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x365 = INT16_MAX;
	int8_t x366 = INT8_MAX;
	static uint16_t x367 = 4U;
	int8_t x368 = -54;

	t73 = ((x365|x366)+(x367+x368));

	if (t73 != 32717) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x370 = 2631470843111LLU;
	uint64_t x371 = 62625282844998522LLU;
	uint16_t x372 = 16814U;
	uint64_t t74 = 154936331182530LLU;

	t74 = ((x369|x370)+(x371+x372));

	if (t74 != 62627914315858471LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x377 = -1;
	volatile int64_t x378 = INT64_MAX;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 3605640U;
	volatile int64_t t75 = -623LL;

	t75 = ((x377|x378)+(x379+x380));

	if (t75 != 2151089287LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x381 = INT16_MAX;
	int64_t x382 = INT64_MAX;
	uint64_t x383 = UINT64_MAX;
	uint32_t x384 = 299U;
	volatile uint64_t t76 = 1LLU;

	t76 = ((x381|x382)+(x383+x384));

	if (t76 != 9223372036854776105LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x386 = UINT64_MAX;
	static uint64_t x387 = 14LLU;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t77 = 2107656402LLU;

	t77 = ((x385|x386)+(x387+x388));

	if (t77 != 18446744073709518861LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x389 = -6;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = 0U;
	int64_t x392 = INT64_MAX;
	int64_t t78 = -14821LL;

	t78 = ((x389|x390)+(x391+x392));

	if (t78 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x393 = -1LL;
	static uint16_t x394 = 13019U;
	int32_t x395 = -1;
	int32_t x396 = INT32_MAX;
	static volatile int64_t t79 = -2206LL;

	t79 = ((x393|x394)+(x395+x396));

	if (t79 != 2147483645LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = INT8_MIN;
	uint64_t x399 = UINT64_MAX;
	static uint32_t x400 = 0U;
	uint64_t t80 = 1208727077786LLU;

	t80 = ((x397|x398)+(x399+x400));

	if (t80 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x406 = 16U;
	volatile int8_t x407 = -1;
	int8_t x408 = INT8_MAX;

	t81 = ((x405|x406)+(x407+x408));

	if (t81 != 2147483790U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x409 = INT8_MAX;
	uint32_t x411 = UINT32_MAX;
	int16_t x412 = -1;

	t82 = ((x409|x410)+(x411+x412));

	if (t82 != 1016189U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = INT64_MAX;
	static uint64_t x418 = UINT64_MAX;
	static uint64_t x419 = 2098712151408665LLU;
	static uint64_t t83 = 3194026175LLU;

	t83 = ((x417|x418)+(x419+x420));

	if (t83 != 2098712151408919LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x421 = 46629369156LLU;
	static uint64_t x422 = UINT64_MAX;
	static int16_t x424 = INT16_MIN;
	volatile uint64_t t84 = 248923LLU;

	t84 = ((x421|x422)+(x423+x424));

	if (t84 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x425 = INT64_MAX;
	static int8_t x426 = 0;
	int32_t x427 = 1660023;
	static int64_t x428 = INT64_MIN;
	volatile int64_t t85 = -11LL;

	t85 = ((x425|x426)+(x427+x428));

	if (t85 != 1660022LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x433 = 58930U;
	uint8_t x434 = 56U;
	int64_t x435 = -210LL;
	uint64_t x436 = 12335LLU;
	volatile uint64_t t86 = 30715393LLU;

	t86 = ((x433|x434)+(x435+x436));

	if (t86 != 71063LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = -1;
	int8_t x438 = INT8_MAX;
	uint16_t x439 = 1470U;
	int32_t t87 = -1020;

	t87 = ((x437|x438)+(x439+x440));

	if (t87 != 34236) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x441 = UINT32_MAX;
	volatile uint32_t x442 = UINT32_MAX;
	int64_t t88 = -791363292LL;

	t88 = ((x441|x442)+(x443+x444));

	if (t88 != -9223372030412324866LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x449 = 8U;
	int16_t x450 = 651;
	static uint16_t x451 = 12162U;
	static int8_t x452 = -1;
	volatile uint32_t t89 = 196563921U;

	t89 = ((x449|x450)+(x451+x452));

	if (t89 != 12812U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x453 = UINT64_MAX;
	static uint32_t x454 = 9U;
	int64_t x455 = -4023846LL;
	static uint32_t x456 = 180U;

	t90 = ((x453|x454)+(x455+x456));

	if (t90 != 18446744073705527949LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x457 = 3024;
	static uint8_t x458 = 1U;
	int16_t x459 = 111;
	int8_t x460 = INT8_MIN;
	int32_t t91 = 3;

	t91 = ((x457|x458)+(x459+x460));

	if (t91 != 3008) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x465 = -1LL;
	int32_t x467 = -1;
	int64_t x468 = -7830015930027LL;
	static volatile int64_t t92 = 48455523257371LL;

	t92 = ((x465|x466)+(x467+x468));

	if (t92 != -7830015930029LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x469 = UINT64_MAX;
	int16_t x470 = 2;
	uint8_t x471 = UINT8_MAX;
	volatile int16_t x472 = INT16_MAX;
	volatile uint64_t t93 = 19994086314617LLU;

	t93 = ((x469|x470)+(x471+x472));

	if (t93 != 33021LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x473 = INT16_MIN;
	uint8_t x474 = 64U;
	int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MIN;

	t94 = ((x473|x474)+(x475+x476));

	if (t94 != -65600) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = -1;
	volatile int64_t x478 = INT64_MIN;
	static uint16_t x479 = 68U;
	static int32_t x480 = -46157176;
	int64_t t95 = 1083596731799909888LL;

	t95 = ((x477|x478)+(x479+x480));

	if (t95 != -46157109LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x481 = 52U;
	volatile uint8_t x482 = 0U;
	static int32_t x483 = 49780;
	int64_t x484 = INT64_MIN;
	int64_t t96 = -3012296499446523199LL;

	t96 = ((x481|x482)+(x483+x484));

	if (t96 != -9223372036854725976LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x485 = 89785U;
	uint32_t x487 = UINT32_MAX;
	int8_t x488 = INT8_MAX;
	volatile uint64_t t97 = 1805132997LLU;

	t97 = ((x485|x486)+(x487+x488));

	if (t97 != 29354154946453369LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x489 = 124572503U;
	uint32_t x491 = UINT32_MAX;
	uint32_t t98 = 3U;

	t98 = ((x489|x490)+(x491+x492));

	if (t98 != 2272056158U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x493 = INT8_MIN;
	static int8_t x495 = -1;
	uint16_t x496 = UINT16_MAX;
	static int64_t t99 = 2625519194716440703LL;

	t99 = ((x493|x494)+(x495+x496));

	if (t99 != 65406LL) { NG(); } else { ; }
	
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

