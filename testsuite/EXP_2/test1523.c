#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 578638758LL;
static int32_t t1 = -917518;
volatile int32_t x23 = 1329;
int16_t x28 = INT16_MAX;
static uint32_t t7 = 129548U;
static uint16_t x37 = UINT16_MAX;
int64_t x39 = INT64_MIN;
uint64_t t8 = 21542137LLU;
volatile int8_t x43 = 2;
uint8_t x50 = UINT8_MAX;
static int16_t x61 = -1;
volatile uint8_t x66 = 3U;
volatile int8_t x72 = INT8_MIN;
int32_t x74 = -4;
static int32_t t15 = -30862290;
uint64_t x84 = 148106001916489LLU;
int32_t x92 = INT32_MIN;
uint8_t x101 = 42U;
int64_t x108 = INT64_MAX;
int64_t x111 = INT64_MIN;
int16_t x120 = INT16_MIN;
int32_t t25 = INT32_MAX;
volatile uint64_t x125 = 3207150803837527236LLU;
static int64_t x129 = INT64_MAX;
uint8_t x132 = 1U;
int16_t x138 = INT16_MAX;
volatile int64_t t29 = 0LL;
static uint64_t t30 = 111LLU;
volatile int32_t x146 = -1;
int8_t x148 = INT8_MIN;
volatile int32_t t31 = -120;
static int64_t x149 = -1LL;
int16_t x160 = INT16_MAX;
static volatile uint8_t x163 = 5U;
static int32_t x165 = INT32_MIN;
volatile int8_t x173 = INT8_MAX;
static int16_t x174 = -1;
static int32_t x176 = -1;
int8_t x185 = INT8_MAX;
volatile int32_t t39 = -179230785;
volatile int32_t t41 = -13;
int8_t x205 = INT8_MAX;
volatile int8_t x211 = -20;
int64_t x218 = 103857789633844000LL;
volatile uint32_t x222 = 335U;
volatile int32_t x227 = INT32_MIN;
static int64_t x232 = -954405725964042LL;
volatile uint8_t x234 = UINT8_MAX;
volatile int64_t t49 = -2638698111LL;
static uint32_t x243 = 2013676U;
volatile int32_t x244 = INT32_MIN;
volatile uint32_t x247 = 109277U;
uint16_t x249 = 6904U;
static int8_t x253 = -1;
int16_t x262 = INT16_MIN;
int64_t t56 = 69635925LL;
int64_t x277 = -1LL;
volatile int16_t x280 = INT16_MIN;
int8_t x298 = 39;
static volatile uint64_t t64 = 3925031738750LLU;
static int32_t x306 = -448426;
int16_t x307 = INT16_MAX;
uint32_t t66 = 1558U;
int64_t x309 = INT64_MIN;
static int16_t x313 = INT16_MAX;
uint16_t x321 = 24U;
int8_t x324 = 39;
volatile uint64_t x335 = 1020017603LLU;
uint32_t t74 = 14U;
int16_t x344 = 452;
int32_t t75 = -1051;
static volatile uint8_t x351 = 0U;
int64_t t78 = 99310561421LL;
static int32_t x362 = INT32_MIN;
int8_t x366 = INT8_MIN;
int32_t x368 = INT32_MAX;
uint16_t x388 = 3U;
int8_t x396 = 5;
uint16_t x397 = UINT16_MAX;
int64_t x410 = -55222LL;
int32_t x412 = -30903320;
int8_t x421 = INT8_MIN;
static uint32_t x425 = 477031U;
static volatile uint16_t x426 = 6U;
static int8_t x428 = -1;
uint32_t t94 = 471428238U;
int16_t x430 = -3;
int8_t x435 = INT8_MIN;
uint8_t x438 = 8U;
static int32_t t98 = -57712;
uint16_t x452 = UINT16_MAX;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	static uint16_t x2 = UINT16_MAX;
	uint8_t x3 = 12U;
	uint8_t x4 = 52U;
	static volatile int32_t t0 = 2492402;

	t0 = ((x1+(x2<=x3))-x4);

	if (t0 != 203) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x7 = -62;
	uint16_t x8 = UINT16_MAX;

	t1 = ((x5+(x6<=x7))-x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -3359;
	int8_t x10 = INT8_MIN;
	int8_t x11 = 1;
	volatile int8_t x12 = 2;
	volatile int32_t t2 = -45715;

	t2 = ((x9+(x10<=x11))-x12);

	if (t2 != -3360) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int32_t x14 = -1;
	int32_t x15 = INT32_MAX;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 299093;

	t3 = ((x13+(x14<=x15))-x16);

	if (t3 != 32896) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MAX;
	static int8_t x24 = -41;
	int32_t t4 = 5216;

	t4 = ((x21+(x22<=x23))-x24);

	if (t4 != -87) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	static int16_t x26 = INT16_MAX;
	int64_t x27 = INT64_MIN;
	int32_t t5 = -2;

	t5 = ((x25+(x26<=x27))-x28);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	static int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t6 = 1031;

	t6 = ((x29+(x30<=x31))-x32);

	if (t6 != -2147450880) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 2758477U;
	uint32_t x34 = UINT32_MAX;
	volatile uint32_t x35 = 169U;
	volatile int32_t x36 = -1;

	t7 = ((x33+(x34<=x35))-x36);

	if (t7 != 2758478U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = INT16_MAX;
	uint64_t x40 = 59432009243124LLU;

	t8 = ((x37+(x38<=x39))-x40);

	if (t8 != 18446684641700374027LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -77541;
	static volatile int8_t x42 = 0;
	int8_t x44 = -1;
	int32_t t9 = 32;

	t9 = ((x41+(x42<=x43))-x44);

	if (t9 != -77539) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 4U;
	volatile int8_t x51 = INT8_MAX;
	int8_t x52 = -1;
	int32_t t10 = -11690218;

	t10 = ((x49+(x50<=x51))-x52);

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x53 = 4365633078906LLU;
	static int32_t x54 = -293;
	volatile int64_t x55 = INT64_MIN;
	int8_t x56 = -41;
	volatile uint64_t t11 = 10305LLU;

	t11 = ((x53+(x54<=x55))-x56);

	if (t11 != 4365633078947LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x62 = INT8_MAX;
	static int32_t x63 = INT32_MAX;
	volatile int16_t x64 = -1;
	volatile int32_t t12 = -129726;

	t12 = ((x61+(x62<=x63))-x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = 3911230;
	int8_t x67 = -1;
	int16_t x68 = -1;
	int32_t t13 = 0;

	t13 = ((x65+(x66<=x67))-x68);

	if (t13 != 3911231) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MAX;
	int16_t x71 = INT16_MIN;
	static volatile int32_t t14 = -6;

	t14 = ((x69+(x70<=x71))-x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 5U;
	volatile int16_t x75 = -1;
	uint8_t x76 = 31U;

	t15 = ((x73+(x74<=x75))-x76);

	if (t15 != -25) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 4LLU;
	static int8_t x78 = INT8_MIN;
	uint8_t x79 = 15U;
	int64_t x80 = -1LL;
	volatile uint64_t t16 = 553626334130639LLU;

	t16 = ((x77+(x78<=x79))-x80);

	if (t16 != 6LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int16_t x82 = 8270;
	int16_t x83 = 7926;
	volatile uint64_t t17 = 1152878971829884538LLU;

	t17 = ((x81+(x82<=x83))-x84);

	if (t17 != 18446595967707635126LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	static int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t18 = -31651;

	t18 = ((x85+(x86<=x87))-x88);

	if (t18 != -32639) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = -63737517551968890LL;
	int32_t x90 = INT32_MIN;
	int8_t x91 = 1;
	static volatile int64_t t19 = -45087139897LL;

	t19 = ((x89+(x90<=x91))-x92);

	if (t19 != -63737515404485241LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 24893U;
	static volatile int16_t x104 = 5;
	int32_t t20 = -1211068;

	t20 = ((x101+(x102<=x103))-x104);

	if (t20 != 38) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x105 = UINT32_MAX;
	uint32_t x106 = 741600U;
	int16_t x107 = INT16_MAX;
	volatile int64_t t21 = -36830507118258LL;

	t21 = ((x105+(x106<=x107))-x108);

	if (t21 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x109 = UINT16_MAX;
	static int64_t x110 = 247LL;
	volatile uint16_t x112 = 3662U;
	volatile int32_t t22 = -125174986;

	t22 = ((x109+(x110<=x111))-x112);

	if (t22 != 61873) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MIN;
	volatile int16_t x115 = 11372;
	int32_t x116 = -1;
	static volatile int32_t t23 = -5596714;

	t23 = ((x113+(x114<=x115))-x116);

	if (t23 != -2147483646) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x117 = -1;
	int32_t x118 = -1;
	int32_t x119 = 3;
	volatile int32_t t24 = 60;

	t24 = ((x117+(x118<=x119))-x120);

	if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -1;
	int8_t x122 = INT8_MIN;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;

	t25 = ((x121+(x122<=x123))-x124);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t26 = 17000028365LLU;

	t26 = ((x125+(x126<=x127))-x128);

	if (t26 != 3207150801690043590LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x130 = -1;
	uint64_t x131 = 40100LLU;
	int64_t t27 = 623316658050822910LL;

	t27 = ((x129+(x130<=x131))-x132);

	if (t27 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = 9810;
	int8_t x135 = 12;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t28 = -55410714;

	t28 = ((x133+(x134<=x135))-x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = INT64_MIN;
	static volatile int64_t x139 = INT64_MIN;
	int32_t x140 = -1;

	t29 = ((x137+(x138<=x139))-x140);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = 12LLU;
	volatile int64_t x142 = INT64_MAX;
	volatile uint64_t x143 = 1669080313710015604LLU;
	int64_t x144 = 16014711092214LL;

	t30 = ((x141+(x142<=x143))-x144);

	if (t30 != 18446728058998459414LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	static int32_t x147 = -6937;

	t31 = ((x145+(x146<=x147))-x148);

	if (t31 != -32640) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x150 = INT16_MAX;
	uint32_t x151 = 9971052U;
	static uint8_t x152 = 6U;
	int64_t t32 = 3905465968LL;

	t32 = ((x149+(x150<=x151))-x152);

	if (t32 != -6LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = -1476143529644LL;
	int8_t x158 = 2;
	volatile int8_t x159 = INT8_MIN;
	static int64_t t33 = 3317720543LL;

	t33 = ((x157+(x158<=x159))-x160);

	if (t33 != -1476143562411LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = 8642046843623120446LLU;
	int16_t x162 = INT16_MAX;
	volatile uint8_t x164 = 0U;
	volatile uint64_t t34 = 12173157LLU;

	t34 = ((x161+(x162<=x163))-x164);

	if (t34 != 8642046843623120446LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x166 = INT16_MAX;
	uint64_t x167 = UINT64_MAX;
	volatile int16_t x168 = -1;
	int32_t t35 = -269;

	t35 = ((x165+(x166<=x167))-x168);

	if (t35 != -2147483646) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x175 = -13;
	static int32_t t36 = 60026;

	t36 = ((x173+(x174<=x175))-x176);

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x181 = 1;
	static int16_t x182 = -337;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = -91357;
	int32_t t37 = 12858975;

	t37 = ((x181+(x182<=x183))-x184);

	if (t37 != 91359) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x186 = 501532U;
	volatile uint64_t x187 = 3LLU;
	int16_t x188 = 26;
	int32_t t38 = 0;

	t38 = ((x185+(x186<=x187))-x188);

	if (t38 != 101) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = 3;
	int64_t x194 = INT64_MAX;
	static int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;

	t39 = ((x193+(x194<=x195))-x196);

	if (t39 != 131) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	uint32_t x199 = 189U;
	volatile int16_t x200 = -1;
	static volatile int64_t t40 = -264276082336LL;

	t40 = ((x197+(x198<=x199))-x200);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = -1;
	int8_t x202 = -29;
	int32_t x203 = 126;
	static int8_t x204 = 0;

	t41 = ((x201+(x202<=x203))-x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x206 = -1;
	volatile uint8_t x207 = UINT8_MAX;
	int64_t x208 = -1LL;
	int64_t t42 = -1718462223490436LL;

	t42 = ((x205+(x206<=x207))-x208);

	if (t42 != 129LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x209 = 80;
	int16_t x210 = 19;
	int8_t x212 = INT8_MIN;
	volatile int32_t t43 = -11;

	t43 = ((x209+(x210<=x211))-x212);

	if (t43 != 208) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = UINT16_MAX;
	static uint64_t x214 = 437621275053518797LLU;
	uint8_t x215 = 5U;
	int16_t x216 = 179;
	int32_t t44 = -987111;

	t44 = ((x213+(x214<=x215))-x216);

	if (t44 != 65356) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x217 = 27183U;
	int64_t x219 = INT64_MIN;
	static int32_t x220 = -1;
	static uint32_t t45 = 11111U;

	t45 = ((x217+(x218<=x219))-x220);

	if (t45 != 27184U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = UINT64_MAX;
	static uint16_t x223 = 14U;
	int8_t x224 = 55;
	static uint64_t t46 = 1658627046984106LLU;

	t46 = ((x221+(x222<=x223))-x224);

	if (t46 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x225 = 33;
	int32_t x226 = INT32_MIN;
	uint64_t x228 = 1060688LLU;
	volatile uint64_t t47 = 22LLU;

	t47 = ((x225+(x226<=x227))-x228);

	if (t47 != 18446744073708490962LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MAX;
	int64_t t48 = -32LL;

	t48 = ((x229+(x230<=x231))-x232);

	if (t48 != 954405725964297LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x233 = INT64_MIN;
	int64_t x235 = -1LL;
	int64_t x236 = -234257531962LL;

	t49 = ((x233+(x234<=x235))-x236);

	if (t49 != -9223371802597243846LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MAX;
	uint16_t x239 = 30962U;
	int8_t x240 = INT8_MIN;
	int64_t t50 = 55071135LL;

	t50 = ((x237+(x238<=x239))-x240);

	if (t50 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = -1;
	int32_t x242 = -28;
	int32_t t51 = INT32_MAX;

	t51 = ((x241+(x242<=x243))-x244);

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = 2;
	int16_t x246 = INT16_MIN;
	uint64_t x248 = 57040621584158713LLU;
	volatile uint64_t t52 = 3LLU;

	t52 = ((x245+(x246<=x247))-x248);

	if (t52 != 18389703452125392905LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x250 = UINT8_MAX;
	volatile int8_t x251 = -6;
	uint64_t x252 = 21215776014280LLU;
	volatile uint64_t t53 = 1053812030092653917LLU;

	t53 = ((x249+(x250<=x251))-x252);

	if (t53 != 18446722857933544240LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x254 = -1;
	static uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	volatile int32_t t54 = -542;

	t54 = ((x253+(x254<=x255))-x256);

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = 0U;
	uint16_t x263 = 15886U;
	uint32_t x264 = UINT32_MAX;
	static uint32_t t55 = 2041U;

	t55 = ((x261+(x262<=x263))-x264);

	if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x265 = -1;
	int8_t x266 = -14;
	int8_t x267 = -1;
	static int64_t x268 = -3776405654739LL;

	t56 = ((x265+(x266<=x267))-x268);

	if (t56 != 3776405654739LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x269 = 13010U;
	int16_t x270 = -1171;
	int8_t x271 = -2;
	uint16_t x272 = UINT16_MAX;
	volatile uint32_t t57 = 5019U;

	t57 = ((x269+(x270<=x271))-x272);

	if (t57 != 4294914772U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x273 = 1U;
	int8_t x274 = -1;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -1;
	volatile int32_t t58 = 483;

	t58 = ((x273+(x274<=x275))-x276);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x278 = INT8_MAX;
	uint32_t x279 = 9556041U;
	static int64_t t59 = -1633454367202741773LL;

	t59 = ((x277+(x278<=x279))-x280);

	if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = 2163;
	static int16_t x282 = 389;
	uint8_t x283 = 0U;
	int16_t x284 = INT16_MIN;
	static int32_t t60 = 2;

	t60 = ((x281+(x282<=x283))-x284);

	if (t60 != 34931) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = INT8_MAX;
	uint64_t x286 = UINT64_MAX;
	volatile int64_t x287 = 2940188LL;
	uint64_t x288 = 11356426LLU;
	volatile uint64_t t61 = 481461571LLU;

	t61 = ((x285+(x286<=x287))-x288);

	if (t61 != 18446744073698195317LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x289 = INT8_MAX;
	static volatile int16_t x290 = INT16_MIN;
	uint64_t x291 = 118470912448412664LLU;
	static uint64_t x292 = 168987LLU;
	volatile uint64_t t62 = 59077790156936LLU;

	t62 = ((x289+(x290<=x291))-x292);

	if (t62 != 18446744073709382756LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = INT8_MAX;
	int32_t t63 = -93789;

	t63 = ((x293+(x294<=x295))-x296);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x297 = 501093LLU;
	volatile uint8_t x299 = 37U;
	volatile int16_t x300 = INT16_MIN;

	t64 = ((x297+(x298<=x299))-x300);

	if (t64 != 533861LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x301 = 552U;
	static volatile int16_t x302 = INT16_MIN;
	int32_t x303 = -1199009;
	uint32_t x304 = 2678065U;
	uint32_t t65 = 28U;

	t65 = ((x301+(x302<=x303))-x304);

	if (t65 != 4292289783U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = UINT32_MAX;
	static int32_t x308 = 7206546;

	t66 = ((x305+(x306<=x307))-x308);

	if (t66 != 4287760750U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = -1;
	uint64_t x312 = UINT64_MAX;
	static uint64_t t67 = 271LLU;

	t67 = ((x309+(x310<=x311))-x312);

	if (t67 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x314 = -15523;
	int32_t x315 = -1;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t68 = -1;

	t68 = ((x313+(x314<=x315))-x316);

	if (t68 != 32896) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = 30093285984LL;
	volatile int64_t x318 = -28033247712759836LL;
	static volatile uint16_t x319 = UINT16_MAX;
	int64_t x320 = INT64_MAX;
	int64_t t69 = -350186LL;

	t69 = ((x317+(x318<=x319))-x320);

	if (t69 != -9223372006761489822LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x322 = 2U;
	int32_t x323 = -8339;
	volatile int32_t t70 = -3251;

	t70 = ((x321+(x322<=x323))-x324);

	if (t70 != -15) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 3U;
	static volatile int8_t x326 = 7;
	int64_t x327 = INT64_MIN;
	int8_t x328 = -1;
	int32_t t71 = -14;

	t71 = ((x325+(x326<=x327))-x328);

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x329 = INT64_MAX;
	int8_t x330 = -30;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;
	static volatile int64_t t72 = 9357928LL;

	t72 = ((x329+(x330<=x331))-x332);

	if (t72 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = 543837225814LL;
	uint64_t x334 = UINT64_MAX;
	uint16_t x336 = 22U;
	volatile int64_t t73 = -4103199543789362LL;

	t73 = ((x333+(x334<=x335))-x336);

	if (t73 != 543837225792LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x338 = UINT16_MAX;
	int64_t x339 = INT64_MAX;
	uint16_t x340 = 9974U;

	t74 = ((x337+(x338<=x339))-x340);

	if (t74 != 4294957322U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x341 = 63389;
	int8_t x342 = INT8_MAX;
	int64_t x343 = -17329954949177LL;

	t75 = ((x341+(x342<=x343))-x344);

	if (t75 != 62937) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -6;
	volatile int64_t x346 = 2LL;
	int64_t x347 = INT64_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t76 = -2;

	t76 = ((x345+(x346<=x347))-x348);

	if (t76 != 123) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x349 = UINT64_MAX;
	int16_t x350 = 200;
	volatile uint32_t x352 = UINT32_MAX;
	static volatile uint64_t t77 = 48537LLU;

	t77 = ((x349+(x350<=x351))-x352);

	if (t77 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x353 = 123515739;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MAX;

	t78 = ((x353+(x354<=x355))-x356);

	if (t78 != -9223372036731260068LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = 27U;
	uint32_t x358 = 2U;
	int16_t x359 = INT16_MIN;
	int16_t x360 = -908;
	uint32_t t79 = 6U;

	t79 = ((x357+(x358<=x359))-x360);

	if (t79 != 936U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = -1;
	static int64_t x363 = 734LL;
	int32_t x364 = INT32_MAX;
	int32_t t80 = -3;

	t80 = ((x361+(x362<=x363))-x364);

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x365 = 194322966LLU;
	int32_t x367 = INT32_MIN;
	uint64_t t81 = 34576304339592352LLU;

	t81 = ((x365+(x366<=x367))-x368);

	if (t81 != 18446744071756390935LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = 1;
	uint64_t x371 = UINT64_MAX;
	static volatile int8_t x372 = INT8_MIN;
	volatile int32_t t82 = 198;

	t82 = ((x369+(x370<=x371))-x372);

	if (t82 != -2147483519) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = -127;
	static uint32_t x374 = 427962076U;
	volatile int64_t x375 = 915571742400547620LL;
	int8_t x376 = INT8_MIN;
	volatile int32_t t83 = 218793;

	t83 = ((x373+(x374<=x375))-x376);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = -1LL;
	volatile int32_t x378 = 1;
	static uint8_t x379 = 4U;
	int16_t x380 = INT16_MAX;
	volatile int64_t t84 = 11111527423397642LL;

	t84 = ((x377+(x378<=x379))-x380);

	if (t84 != -32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int32_t x386 = INT32_MIN;
	int16_t x387 = -1;
	static volatile uint32_t t85 = 15122U;

	t85 = ((x385+(x386<=x387))-x388);

	if (t85 != 4294967293U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MIN;
	volatile int32_t x394 = INT32_MIN;
	uint16_t x395 = 7080U;
	volatile int32_t t86 = 3;

	t86 = ((x393+(x394<=x395))-x396);

	if (t86 != -132) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x398 = INT8_MAX;
	int64_t x399 = INT64_MIN;
	int32_t x400 = 20585478;
	volatile int32_t t87 = 64;

	t87 = ((x397+(x398<=x399))-x400);

	if (t87 != -20519943) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = 3;
	int64_t x402 = INT64_MIN;
	int8_t x403 = -1;
	volatile int16_t x404 = -1;
	int32_t t88 = -34;

	t88 = ((x401+(x402<=x403))-x404);

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = INT8_MIN;
	uint16_t x406 = 1171U;
	uint32_t x407 = 0U;
	static int8_t x408 = -1;
	int32_t t89 = 7;

	t89 = ((x405+(x406<=x407))-x408);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x409 = -1;
	int16_t x411 = INT16_MAX;
	int32_t t90 = 5;

	t90 = ((x409+(x410<=x411))-x412);

	if (t90 != 30903320) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x413 = 1U;
	uint16_t x414 = 1878U;
	static int16_t x415 = 1;
	uint64_t x416 = UINT64_MAX;
	static uint64_t t91 = 482202LLU;

	t91 = ((x413+(x414<=x415))-x416);

	if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x417 = 31730958U;
	uint8_t x418 = 18U;
	int16_t x419 = -1;
	int64_t x420 = INT64_MAX;
	volatile int64_t t92 = -333127409843917LL;

	t92 = ((x417+(x418<=x419))-x420);

	if (t92 != -9223372036823044849LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x422 = INT32_MAX;
	uint16_t x423 = 6U;
	static uint32_t x424 = UINT32_MAX;
	volatile uint32_t t93 = 1654639993U;

	t93 = ((x421+(x422<=x423))-x424);

	if (t93 != 4294967169U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x427 = -249LL;

	t94 = ((x425+(x426<=x427))-x428);

	if (t94 != 477032U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x429 = UINT8_MAX;
	static volatile int16_t x431 = INT16_MIN;
	static volatile int32_t x432 = -122;
	volatile int32_t t95 = 274578;

	t95 = ((x429+(x430<=x431))-x432);

	if (t95 != 377) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x433 = -1LL;
	volatile int8_t x434 = -1;
	int8_t x436 = -1;
	int64_t t96 = 454109LL;

	t96 = ((x433+(x434<=x435))-x436);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x437 = 1;
	int8_t x439 = INT8_MAX;
	volatile int16_t x440 = -1;
	static volatile int32_t t97 = 26;

	t97 = ((x437+(x438<=x439))-x440);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = INT32_MIN;
	int8_t x442 = 21;
	int64_t x443 = INT64_MIN;
	volatile int32_t x444 = -25;

	t98 = ((x441+(x442<=x443))-x444);

	if (t98 != -2147483623) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x449 = -1;
	uint16_t x450 = 2162U;
	static volatile uint16_t x451 = UINT16_MAX;
	int32_t t99 = -1;

	t99 = ((x449+(x450<=x451))-x452);

	if (t99 != -65535) { NG(); } else { ; }
	
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

