#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int8_t x3 = INT8_MAX;
int16_t x15 = 874;
int8_t x25 = INT8_MAX;
static int8_t x35 = INT8_MIN;
int16_t x36 = INT16_MAX;
uint64_t t7 = 0LLU;
int32_t x38 = -1;
volatile uint16_t x47 = UINT16_MAX;
volatile int32_t x48 = 908;
int32_t t10 = -2;
uint64_t t11 = 21LLU;
volatile int32_t x60 = -399;
int16_t x64 = 0;
volatile int32_t t13 = 15;
uint16_t x65 = UINT16_MAX;
int64_t t14 = -1LL;
uint32_t x70 = 53976U;
volatile int8_t x78 = INT8_MIN;
volatile uint64_t t17 = 25479473021289LLU;
volatile int64_t x88 = -1LL;
uint16_t x89 = 1940U;
int32_t t19 = -3;
static int64_t x96 = -1LL;
volatile int16_t x97 = -1;
int8_t x123 = INT8_MIN;
static int32_t x129 = -1681288;
volatile uint16_t x136 = 113U;
static int16_t x138 = 25;
volatile uint32_t x139 = 2470U;
int16_t x142 = -2712;
static int32_t x154 = INT32_MIN;
volatile int32_t t31 = -5240873;
int64_t x166 = -145385531732770340LL;
int32_t x170 = -1;
int32_t t34 = 29;
int32_t x184 = INT32_MAX;
volatile int64_t x186 = -1LL;
int64_t x187 = INT64_MIN;
static int64_t x202 = INT64_MIN;
uint32_t x203 = 10U;
int64_t x207 = 7391648LL;
int64_t x211 = INT64_MIN;
int32_t x214 = INT32_MIN;
int16_t x215 = INT16_MAX;
uint32_t x217 = 2607450U;
static uint8_t x223 = UINT8_MAX;
volatile int16_t x227 = INT16_MIN;
volatile int64_t t46 = 5LL;
volatile int32_t x234 = INT32_MIN;
int64_t x235 = INT64_MIN;
uint8_t x236 = 4U;
uint8_t x238 = 12U;
volatile uint16_t x261 = 512U;
volatile int16_t x262 = INT16_MIN;
int32_t x266 = 271;
volatile int32_t x275 = INT32_MAX;
int32_t t57 = 60;
uint16_t x281 = UINT16_MAX;
uint8_t x289 = UINT8_MAX;
uint16_t x295 = UINT16_MAX;
int64_t t62 = -2528376954LL;
int32_t x297 = -1;
static int8_t x312 = 14;
static int64_t x319 = INT64_MIN;
int16_t x322 = INT16_MIN;
static volatile uint32_t x329 = UINT32_MAX;
volatile int32_t x334 = INT32_MIN;
int32_t t70 = -12;
uint16_t x339 = UINT16_MAX;
volatile int32_t t71 = -10115;
int8_t x341 = -1;
uint64_t x343 = UINT64_MAX;
uint64_t t72 = 7555LLU;
int64_t t73 = -6147LL;
static int16_t x352 = INT16_MIN;
int64_t x357 = 521921281711LL;
uint64_t x359 = 119LLU;
int32_t x369 = -45;
int32_t x370 = -14;
int32_t x371 = INT32_MAX;
int8_t x384 = -7;
volatile int64_t t80 = -40274640LL;
volatile uint64_t x388 = 13896592LLU;
int64_t x393 = -929892393910193323LL;
uint8_t x394 = 0U;
static int64_t x396 = -1LL;
volatile uint64_t x404 = 398132748LLU;
static uint64_t t85 = 2007376066593674LLU;
volatile int64_t x406 = INT64_MAX;
static volatile int32_t t87 = 13849910;
static int16_t x413 = INT16_MIN;
static volatile uint64_t x415 = 2252573168LLU;
int8_t x419 = 1;
uint64_t x421 = 1LLU;
volatile int8_t x422 = 1;
volatile uint64_t x424 = 25910866052847LLU;
volatile int32_t t91 = 461506767;
int64_t x430 = INT64_MAX;
int32_t x438 = INT32_MIN;
volatile int32_t t94 = -86443778;
uint32_t x443 = UINT32_MAX;
static int32_t x447 = INT32_MIN;
volatile int8_t x449 = INT8_MAX;
int64_t x452 = -57343410331LL;
int8_t x454 = -4;
volatile int8_t x456 = INT8_MAX;
volatile int64_t x459 = -1LL;
static volatile int64_t x460 = -1LL;


void f0(void) {
	int16_t x2 = -13;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -5;

	t0 = ((x1+(x2%x3))+x4);

	if (t0 != -32909) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static int64_t x6 = INT64_MIN;
	int64_t x7 = -28238LL;
	int16_t x8 = INT16_MAX;
	int64_t t1 = -5240697LL;

	t1 = ((x5+(x6%x7))+x8);

	if (t1 != 58792LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 13U;
	volatile int16_t x14 = INT16_MIN;
	uint16_t x16 = 1U;
	volatile int32_t t2 = -137;

	t2 = ((x13+(x14%x15))+x16);

	if (t2 != -416) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 25208404U;
	static int32_t x20 = INT32_MIN;
	volatile uint64_t t3 = 30044821564LLU;

	t3 = ((x17+(x18%x19))+x20);

	if (t3 != 18446744071562068222LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = -1965993732297095509LL;
	int8_t x23 = INT8_MIN;
	volatile int32_t x24 = 13103136;
	volatile int64_t t4 = 2235194660958LL;

	t4 = ((x21+(x22%x23))+x24);

	if (t4 != 13070283LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -16241119764LL;
	int16_t x27 = INT16_MAX;
	int8_t x28 = 55;
	volatile int64_t t5 = -711428272692LL;

	t5 = ((x25+(x26%x27))+x28);

	if (t5 != -24964LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 0U;
	static int8_t x30 = -1;
	volatile int64_t x31 = INT64_MIN;
	uint8_t x32 = UINT8_MAX;
	volatile int64_t t6 = 1LL;

	t6 = ((x29+(x30%x31))+x32);

	if (t6 != 254LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 36773010319LLU;
	int16_t x34 = -1;

	t7 = ((x33+(x34%x35))+x36);

	if (t7 != 36773043085LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 50U;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 4U;
	static volatile uint32_t t8 = 30175U;

	t8 = ((x37+(x38%x39))+x40);

	if (t8 != 53U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = -9097;
	static int16_t x42 = INT16_MAX;
	static volatile int32_t x43 = -1;
	uint8_t x44 = 1U;
	static volatile int32_t t9 = 0;

	t9 = ((x41+(x42%x43))+x44);

	if (t9 != -9096) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = -1;
	int8_t x46 = -1;

	t10 = ((x45+(x46%x47))+x48);

	if (t10 != 906) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	static uint64_t x50 = UINT64_MAX;
	int64_t x51 = -1LL;
	uint64_t x52 = 534976107189464LLU;

	t11 = ((x49+(x50%x51))+x52);

	if (t11 != 534978254673111LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	volatile int32_t x58 = INT32_MIN;
	uint32_t x59 = UINT32_MAX;
	static int64_t t12 = -162934149LL;

	t12 = ((x57+(x58%x59))+x60);

	if (t12 != 2147483248LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1034679998;
	volatile int8_t x62 = 0;
	int8_t x63 = INT8_MIN;

	t13 = ((x61+(x62%x63))+x64);

	if (t13 != -1034679998) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MIN;
	int64_t x68 = INT64_MIN;

	t14 = ((x65+(x66%x67))+x68);

	if (t14 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	int16_t x71 = 1787;
	static uint32_t x72 = 2U;
	uint32_t t15 = 9725138U;

	t15 = ((x69+(x70%x71))+x72);

	if (t15 != 495U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = -13;
	volatile int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t16 = 1022249;

	t16 = ((x77+(x78%x79))+x80);

	if (t16 != -269) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MAX;
	int8_t x82 = 0;
	uint64_t x83 = 11468342358687679LLU;
	uint32_t x84 = UINT32_MAX;

	t17 = ((x81+(x82%x83))+x84);

	if (t17 != 4295000062LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = 3;
	volatile uint32_t x86 = UINT32_MAX;
	int16_t x87 = -216;
	volatile int64_t t18 = -1211831053LL;

	t18 = ((x85+(x86%x87))+x88);

	if (t18 != 217LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = INT8_MAX;
	static uint8_t x91 = 7U;
	uint8_t x92 = 0U;

	t19 = ((x89+(x90%x91))+x92);

	if (t19 != 1941) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 1;
	volatile int64_t x94 = INT64_MIN;
	int64_t x95 = 33179814836257LL;
	int64_t t20 = 108316LL;

	t20 = ((x93+(x94%x95))+x96);

	if (t20 != -13928857218691LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MAX;
	int8_t x100 = INT8_MIN;
	int64_t t21 = 3986469LL;

	t21 = ((x97+(x98%x99))+x100);

	if (t21 != -130LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x101 = 43U;
	int16_t x102 = INT16_MIN;
	static uint16_t x103 = 3567U;
	int16_t x104 = INT16_MIN;
	int32_t t22 = 566990697;

	t22 = ((x101+(x102%x103))+x104);

	if (t22 != -33390) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MAX;
	volatile int64_t x106 = -123LL;
	uint64_t x107 = UINT64_MAX;
	uint64_t x108 = 62582958749076LLU;
	uint64_t t23 = 870320955LLU;

	t23 = ((x105+(x106%x107))+x108);

	if (t23 != 62582958781720LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = 1372U;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MAX;
	volatile int32_t t24 = -7644;

	t24 = ((x109+(x110%x111))+x112);

	if (t24 != 1371) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MIN;
	static uint8_t x119 = UINT8_MAX;
	int32_t x120 = INT32_MIN;
	volatile int64_t t25 = 10207LL;

	t25 = ((x117+(x118%x119))+x120);

	if (t25 != -2147451009LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = -1059;
	static int64_t x122 = INT64_MAX;
	int8_t x124 = INT8_MIN;
	int64_t t26 = -3344050668768044LL;

	t26 = ((x121+(x122%x123))+x124);

	if (t26 != -1060LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x130 = -1;
	static uint16_t x131 = 5371U;
	volatile int8_t x132 = -57;
	volatile int32_t t27 = 2379028;

	t27 = ((x129+(x130%x131))+x132);

	if (t27 != -1681346) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 124961U;
	uint32_t x134 = UINT32_MAX;
	static int32_t x135 = INT32_MIN;
	volatile uint32_t t28 = 44054612U;

	t28 = ((x133+(x134%x135))+x136);

	if (t28 != 2147608721U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MAX;
	int64_t x140 = 47252772193780087LL;
	int64_t t29 = -14494LL;

	t29 = ((x137+(x138%x139))+x140);

	if (t29 != 47252772193780239LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x143 = 3U;
	int32_t x144 = INT32_MIN;
	static int64_t t30 = 2208LL;

	t30 = ((x141+(x142%x143))+x144);

	if (t30 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x153 = INT8_MIN;
	static int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;

	t31 = ((x153+(x154%x155))+x156);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = INT64_MAX;
	int8_t x158 = 3;
	uint64_t x159 = 87622LLU;
	volatile int32_t x160 = INT32_MIN;
	uint64_t t32 = 17LLU;

	t32 = ((x157+(x158%x159))+x160);

	if (t32 != 9223372034707292162LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x165 = INT8_MIN;
	volatile uint8_t x167 = UINT8_MAX;
	static uint32_t x168 = 28165U;
	int64_t t33 = 3577236723098126958LL;

	t33 = ((x165+(x166%x167))+x168);

	if (t33 != 28002LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MAX;
	volatile int16_t x171 = INT16_MIN;
	static volatile int32_t x172 = -2;

	t34 = ((x169+(x170%x171))+x172);

	if (t34 != 2147483644) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x177 = -1;
	int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int8_t x180 = -1;
	static volatile int32_t t35 = 48;

	t35 = ((x177+(x178%x179))+x180);

	if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x181 = 0LLU;
	int8_t x182 = -1;
	static int16_t x183 = -292;
	uint64_t t36 = 27790260009983LLU;

	t36 = ((x181+(x182%x183))+x184);

	if (t36 != 2147483646LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = -2;
	uint16_t x188 = 673U;
	int64_t t37 = 9672174612444LL;

	t37 = ((x185+(x186%x187))+x188);

	if (t37 != 670LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x193 = 1973LLU;
	volatile int16_t x194 = -1;
	uint8_t x195 = 2U;
	volatile int64_t x196 = INT64_MIN;
	volatile uint64_t t38 = 748532752LLU;

	t38 = ((x193+(x194%x195))+x196);

	if (t38 != 9223372036854777780LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x201 = 13255629U;
	uint8_t x204 = 0U;
	int64_t t39 = 6376538803007322LL;

	t39 = ((x201+(x202%x203))+x204);

	if (t39 != 13255621LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = 0;
	int32_t x206 = 1;
	int64_t x208 = INT64_MIN;
	int64_t t40 = -105LL;

	t40 = ((x205+(x206%x207))+x208);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = -665;
	volatile int64_t x212 = -40628LL;
	static int64_t t41 = 1LL;

	t41 = ((x209+(x210%x211))+x212);

	if (t41 != -74061LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = 13U;
	int64_t x216 = 20LL;
	volatile int64_t t42 = 13619LL;

	t42 = ((x213+(x214%x215))+x216);

	if (t42 != 31LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x218 = INT16_MIN;
	uint64_t x219 = 115988892870787LLU;
	uint8_t x220 = 1U;
	volatile uint64_t t43 = 5066104386820LLU;

	t43 = ((x217+(x218%x219))+x220);

	if (t43 != 102529327903393LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MAX;
	static int64_t x224 = 14370370337588LL;
	volatile int64_t t44 = -15LL;

	t44 = ((x221+(x222%x223))+x224);

	if (t44 != 14368222854067LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	int8_t x228 = -1;
	volatile uint64_t t45 = 578150479576641043LLU;

	t45 = ((x225+(x226%x227))+x228);

	if (t45 != 32638LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x229 = 3U;
	static volatile int8_t x230 = INT8_MIN;
	uint16_t x231 = UINT16_MAX;
	int64_t x232 = -188422335LL;

	t46 = ((x229+(x230%x231))+x232);

	if (t46 != -188422460LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x233 = -1;
	int64_t t47 = 484695469690524006LL;

	t47 = ((x233+(x234%x235))+x236);

	if (t47 != -2147483645LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x237 = INT8_MIN;
	volatile int32_t x239 = INT32_MIN;
	static uint64_t x240 = 132135271207896LLU;
	volatile uint64_t t48 = 99LLU;

	t48 = ((x237+(x238%x239))+x240);

	if (t48 != 132135271207780LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x241 = -2;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = -1;
	volatile int32_t x244 = -5881;
	volatile uint32_t t49 = 163900U;

	t49 = ((x241+(x242%x243))+x244);

	if (t49 != 4294961413U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x245 = -5268LL;
	uint64_t x246 = 74480804640567993LLU;
	int32_t x247 = 40767372;
	volatile int32_t x248 = INT32_MIN;
	volatile uint64_t t50 = 90908112711LLU;

	t50 = ((x245+(x246%x247))+x248);

	if (t50 != 18446744071565415689LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = -1871;
	volatile int64_t t51 = -592885375914LL;

	t51 = ((x249+(x250%x251))+x252);

	if (t51 != -1872LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 25006U;
	static int64_t x254 = -1LL;
	volatile int8_t x255 = INT8_MAX;
	int8_t x256 = -8;
	static int64_t t52 = -34805630758077949LL;

	t52 = ((x253+(x254%x255))+x256);

	if (t52 != 24997LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MIN;
	static int8_t x258 = -8;
	volatile int16_t x259 = INT16_MIN;
	static uint64_t x260 = UINT64_MAX;
	volatile uint64_t t53 = 956495552732368216LLU;

	t53 = ((x257+(x258%x259))+x260);

	if (t53 != 18446744073709518839LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x263 = 32U;
	int32_t x264 = INT32_MIN;
	int32_t t54 = -61320;

	t54 = ((x261+(x262%x263))+x264);

	if (t54 != -2147483136) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x265 = 1;
	int16_t x267 = -1;
	int16_t x268 = 7400;
	volatile int32_t t55 = 30624838;

	t55 = ((x265+(x266%x267))+x268);

	if (t55 != 7401) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MAX;
	uint8_t x270 = UINT8_MAX;
	uint64_t x271 = 13432666537LLU;
	int64_t x272 = -84513660077LL;
	uint64_t t56 = 5387836249561337LLU;

	t56 = ((x269+(x270%x271))+x272);

	if (t56 != 9223371952341115985LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x273 = 533177448;
	int16_t x274 = INT16_MIN;
	int32_t x276 = INT32_MIN;

	t57 = ((x273+(x274%x275))+x276);

	if (t57 != -1614338968) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x277 = UINT8_MAX;
	uint8_t x278 = 58U;
	volatile int64_t x279 = -369LL;
	volatile int16_t x280 = INT16_MIN;
	volatile int64_t t58 = 8996502223832360LL;

	t58 = ((x277+(x278%x279))+x280);

	if (t58 != -32455LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x282 = INT8_MIN;
	static volatile uint8_t x283 = UINT8_MAX;
	uint8_t x284 = 28U;
	static int32_t t59 = -1;

	t59 = ((x281+(x282%x283))+x284);

	if (t59 != 65435) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = 1086953850LLU;
	int16_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	int32_t x288 = 101;
	volatile uint64_t t60 = 13LLU;

	t60 = ((x285+(x286%x287))+x288);

	if (t60 != 1086953950LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x290 = INT32_MIN;
	volatile int8_t x291 = INT8_MIN;
	uint32_t x292 = 1350U;
	uint32_t t61 = 2U;

	t61 = ((x289+(x290%x291))+x292);

	if (t61 != 1605U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = -1;
	static int32_t x294 = INT32_MAX;
	int64_t x296 = INT64_MIN;

	t62 = ((x293+(x294%x295))+x296);

	if (t62 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x298 = INT32_MIN;
	static int8_t x299 = INT8_MAX;
	uint64_t x300 = UINT64_MAX;
	uint64_t t63 = 196LLU;

	t63 = ((x297+(x298%x299))+x300);

	if (t63 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 446LLU;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MIN;
	uint64_t t64 = 1135260LLU;

	t64 = ((x305+(x306%x307))+x308);

	if (t64 != 2147484093LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MAX;
	int64_t t65 = 161331309009586LL;

	t65 = ((x309+(x310%x311))+x312);

	if (t65 != -2147483762LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = -1;
	int16_t x314 = -4177;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = UINT64_MAX;
	static volatile uint64_t t66 = 1312290726180748LLU;

	t66 = ((x313+(x314%x315))+x316);

	if (t66 != 18446744073709547437LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = 1;
	static int32_t x318 = 5046569;
	static int8_t x320 = INT8_MIN;
	volatile int64_t t67 = 3144LL;

	t67 = ((x317+(x318%x319))+x320);

	if (t67 != 5046442LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x321 = 5613;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = 0U;
	volatile int32_t t68 = 61761219;

	t68 = ((x321+(x322%x323))+x324);

	if (t68 != 5613) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x330 = INT64_MIN;
	int64_t x331 = -5139210083431723LL;
	uint32_t x332 = 376462538U;
	volatile int64_t t69 = -25636421LL;

	t69 = ((x329+(x330%x331))+x332);

	if (t69 != -3629142506834913LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x333 = INT8_MIN;
	int16_t x335 = -1013;
	static int16_t x336 = -1;

	t70 = ((x333+(x334%x335))+x336);

	if (t70 != -765) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x337 = INT16_MAX;
	uint16_t x338 = UINT16_MAX;
	static int32_t x340 = -59236282;

	t71 = ((x337+(x338%x339))+x340);

	if (t71 != -59203515) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x342 = -136466345777606228LL;
	uint64_t x344 = UINT64_MAX;

	t72 = ((x341+(x342%x343))+x344);

	if (t72 != 18310277727931945386LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = UINT16_MAX;
	static int64_t x347 = -1LL;
	int8_t x348 = -1;

	t73 = ((x345+(x346%x347))+x348);

	if (t73 != -32769LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -2055819429029979LL;
	int64_t t74 = 43496626908113930LL;

	t74 = ((x349+(x350%x351))+x352);

	if (t74 != -98304LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x353 = -1;
	int32_t x354 = -395;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = -24852373LL;
	int64_t t75 = -3522860573774LL;

	t75 = ((x353+(x354%x355))+x356);

	if (t75 != -24852769LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x358 = 3LLU;
	int32_t x360 = INT32_MAX;
	uint64_t t76 = 17898987583821380LLU;

	t76 = ((x357+(x358%x359))+x360);

	if (t76 != 524068765361LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x372 = 13U;
	int32_t t77 = -219019;

	t77 = ((x369+(x370%x371))+x372);

	if (t77 != -46) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x373 = 2195U;
	uint32_t x374 = UINT32_MAX;
	static uint64_t x375 = 6905713420417490LLU;
	int64_t x376 = INT64_MIN;
	uint64_t t78 = 94LLU;

	t78 = ((x373+(x374%x375))+x376);

	if (t78 != 9223372041149745298LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x377 = -1;
	uint64_t x378 = 5627007251465377706LLU;
	static volatile int32_t x379 = INT32_MIN;
	volatile int32_t x380 = -1;
	static volatile uint64_t t79 = 544018114232LLU;

	t79 = ((x377+(x378%x379))+x380);

	if (t79 != 5627007251465377704LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x381 = 43U;
	int8_t x382 = INT8_MIN;
	int64_t x383 = 223164390045571LL;

	t80 = ((x381+(x382%x383))+x384);

	if (t80 != -92LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	volatile int8_t x387 = -10;
	volatile uint64_t t81 = 239547071252261LLU;

	t81 = ((x385+(x386%x387))+x388);

	if (t81 != 13896583LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x389 = INT16_MAX;
	uint8_t x390 = 0U;
	volatile int16_t x391 = -1;
	int16_t x392 = INT16_MAX;
	volatile int32_t t82 = 2618260;

	t82 = ((x389+(x390%x391))+x392);

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x395 = 555973724591LL;
	volatile int64_t t83 = 362LL;

	t83 = ((x393+(x394%x395))+x396);

	if (t83 != -929892393910193324LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x397 = 1;
	volatile int32_t x398 = INT32_MAX;
	static int8_t x399 = -1;
	static uint32_t x400 = 1371469U;
	uint32_t t84 = 6U;

	t84 = ((x397+(x398%x399))+x400);

	if (t84 != 1371470U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int64_t x402 = 128404620598013025LL;
	uint32_t x403 = 6514U;

	t85 = ((x401+(x402%x403))+x404);

	if (t85 != 398202026LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = INT16_MIN;
	int8_t x407 = INT8_MAX;
	static int8_t x408 = INT8_MAX;
	int64_t t86 = 3675LL;

	t86 = ((x405+(x406%x407))+x408);

	if (t86 != -32641LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = 328;
	volatile int16_t x410 = 23;
	int16_t x411 = -8;
	int8_t x412 = INT8_MAX;

	t87 = ((x409+(x410%x411))+x412);

	if (t87 != 462) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x414 = -74764;
	volatile uint64_t x416 = 27671551075656193LLU;
	volatile uint64_t t88 = 5095484179241043LLU;

	t88 = ((x413+(x414%x415))+x416);

	if (t88 != 27671551765210085LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = -32381;
	uint16_t x420 = 27696U;
	volatile int64_t t89 = 3647746447898622LL;

	t89 = ((x417+(x418%x419))+x420);

	if (t89 != -9223372036854748112LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x423 = UINT64_MAX;
	volatile uint64_t t90 = 4LLU;

	t90 = ((x421+(x422%x423))+x424);

	if (t90 != 25910866052849LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x425 = -43;
	int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MIN;
	int32_t x428 = 84;

	t91 = ((x425+(x426%x427))+x428);

	if (t91 != -87) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = 34182782U;
	int64_t x431 = INT64_MAX;
	int16_t x432 = -1;
	int64_t t92 = -122927167752045782LL;

	t92 = ((x429+(x430%x431))+x432);

	if (t92 != 34182781LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x433 = -63082;
	int16_t x434 = -1;
	static uint64_t x435 = 20072LLU;
	static int32_t x436 = -1;
	static uint64_t t93 = 1691489270124LLU;

	t93 = ((x433+(x434%x435))+x436);

	if (t93 != 18446744073709500196LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x437 = INT8_MIN;
	int32_t x439 = INT32_MAX;
	int8_t x440 = INT8_MAX;

	t94 = ((x437+(x438%x439))+x440);

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = -1;
	int16_t x442 = INT16_MAX;
	static volatile int8_t x444 = 52;
	static uint32_t t95 = 1805557U;

	t95 = ((x441+(x442%x443))+x444);

	if (t95 != 32818U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MAX;
	int8_t x448 = INT8_MIN;
	volatile int64_t t96 = 217LL;

	t96 = ((x445+(x446%x447))+x448);

	if (t96 != -129LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x450 = INT16_MAX;
	volatile uint8_t x451 = UINT8_MAX;
	static volatile int64_t t97 = 7479345LL;

	t97 = ((x449+(x450%x451))+x452);

	if (t97 != -57343410077LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = INT16_MIN;
	int16_t x455 = -1;
	int32_t t98 = -27;

	t98 = ((x453+(x454%x455))+x456);

	if (t98 != -32641) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x457 = 2723LLU;
	int64_t x458 = INT64_MIN;
	volatile uint64_t t99 = 138470003755815082LLU;

	t99 = ((x457+(x458%x459))+x460);

	if (t99 != 2722LLU) { NG(); } else { ; }
	
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

