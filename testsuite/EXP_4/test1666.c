#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int8_t x4 = -1;
volatile int32_t t3 = -861749;
static volatile uint64_t t4 = 6881370092LLU;
int8_t x37 = INT8_MIN;
volatile int64_t t7 = 13588121093LL;
volatile int32_t x50 = -693846739;
uint64_t x57 = UINT64_MAX;
static volatile uint64_t t10 = 15768424052120LLU;
volatile int32_t x66 = -3260090;
int64_t x68 = 5075778868785LL;
uint64_t x79 = UINT64_MAX;
uint8_t x80 = 31U;
int32_t x86 = -2125853;
volatile uint8_t x88 = UINT8_MAX;
volatile int32_t t16 = -22542660;
int16_t x93 = -371;
int32_t t20 = 493302;
int32_t x111 = INT32_MIN;
int16_t x129 = -1;
volatile int64_t t25 = 3620201522LL;
volatile uint64_t x133 = 154229032854807LLU;
static int8_t x135 = -15;
int32_t x136 = INT32_MIN;
int16_t x138 = 4;
int64_t x143 = 334586LL;
int16_t x155 = INT16_MIN;
uint64_t x156 = 6LLU;
int8_t x158 = INT8_MIN;
uint8_t x160 = 65U;
int32_t x179 = INT32_MIN;
int64_t x183 = -1592396LL;
uint64_t x197 = UINT64_MAX;
int32_t x208 = -1;
uint8_t x210 = 82U;
volatile int32_t x220 = INT32_MIN;
static int64_t t43 = 345770625LL;
uint64_t x225 = UINT64_MAX;
static int8_t x226 = INT8_MIN;
int16_t x229 = INT16_MAX;
int8_t x246 = INT8_MIN;
uint8_t x255 = 1U;
volatile int64_t t50 = -33693967970058437LL;
int8_t x257 = INT8_MAX;
int8_t x259 = -3;
uint64_t x260 = UINT64_MAX;
int8_t x262 = INT8_MAX;
int64_t x263 = INT64_MAX;
int16_t x265 = 8998;
static volatile int8_t x272 = INT8_MIN;
static volatile int64_t t54 = 65940074LL;
int8_t x277 = INT8_MIN;
static uint64_t x283 = 4520258061278935LLU;
volatile int64_t t56 = -220907655170674718LL;
int64_t x292 = INT64_MAX;
volatile int16_t x302 = INT16_MIN;
volatile uint64_t t62 = 36765321LLU;
int16_t x309 = INT16_MIN;
uint16_t x312 = 23U;
static uint64_t x316 = UINT64_MAX;
int64_t x323 = INT64_MAX;
volatile uint8_t x326 = 33U;
int16_t x333 = INT16_MIN;
volatile uint32_t x346 = UINT32_MAX;
uint32_t t70 = 114U;
int8_t x350 = INT8_MIN;
int64_t t71 = -1LL;
uint8_t x353 = 1U;
uint32_t x357 = 4764U;
volatile int8_t x361 = -23;
static int8_t x366 = -1;
int32_t x369 = INT32_MIN;
int64_t t76 = -883102399336720LL;
volatile int64_t x373 = INT64_MAX;
volatile int16_t x375 = INT16_MIN;
int64_t t77 = 76LL;
uint32_t x379 = UINT32_MAX;
int64_t x393 = INT64_MIN;
uint16_t x395 = UINT16_MAX;
volatile int16_t x399 = -1383;
int8_t x400 = INT8_MIN;
uint64_t x411 = UINT64_MAX;
static int8_t x414 = INT8_MAX;
uint64_t x420 = 4523840LLU;
int64_t x421 = INT64_MIN;
int64_t x422 = -1LL;
volatile int64_t x423 = -240239579LL;
static int8_t x424 = INT8_MIN;
static uint32_t x425 = UINT32_MAX;
uint8_t x429 = 101U;
volatile uint32_t x432 = 521U;
int64_t x439 = -129995568LL;
int64_t x452 = -1850LL;
volatile int32_t t95 = -5;
int8_t x459 = INT8_MIN;
volatile int64_t t97 = INT64_MIN;
static uint8_t x467 = 109U;
int64_t x471 = -212740928634313606LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint16_t x3 = 68U;
	uint64_t t0 = 20056573LLU;

	t0 = (x1-(x2|(x3<=x4)));

	if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	uint32_t x6 = 1U;
	uint64_t x7 = UINT64_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 4U;

	t1 = (x5-(x6|(x7<=x8)));

	if (t1 != 32766U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 0LLU;
	uint8_t x18 = 109U;
	uint16_t x19 = 25U;
	int16_t x20 = INT16_MAX;
	static uint64_t t2 = 7468251657734LLU;

	t2 = (x17-(x18|(x19<=x20)));

	if (t2 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 29U;
	volatile uint8_t x22 = UINT8_MAX;
	int8_t x23 = INT8_MIN;
	volatile int64_t x24 = 0LL;

	t3 = (x21-(x22|(x23<=x24)));

	if (t3 != -226) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	volatile int16_t x28 = INT16_MAX;

	t4 = (x25-(x26|(x27<=x28)));

	if (t4 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x38 = 26165U;
	int16_t x39 = -15161;
	int32_t x40 = INT32_MAX;
	static volatile int32_t t5 = 36;

	t5 = (x37-(x38|(x39<=x40)));

	if (t5 != -26293) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 3684041U;
	static int8_t x42 = INT8_MAX;
	static int32_t x43 = INT32_MIN;
	uint8_t x44 = UINT8_MAX;
	volatile uint32_t t6 = 56492U;

	t6 = (x41-(x42|(x43<=x44)));

	if (t6 != 3683914U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MIN;
	volatile int8_t x46 = -1;
	static int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MAX;

	t7 = (x45-(x46|(x47<=x48)));

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = INT8_MIN;
	int64_t x51 = -1LL;
	static uint16_t x52 = 9893U;
	volatile int32_t t8 = 39;

	t8 = (x49-(x50|(x51<=x52)));

	if (t8 != 693846611) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x53 = -1;
	int16_t x54 = 1;
	int64_t x55 = INT64_MIN;
	volatile uint16_t x56 = 31116U;
	static volatile int32_t t9 = 744;

	t9 = (x53-(x54|(x55<=x56)));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x58 = 19U;
	int16_t x59 = -94;
	uint32_t x60 = UINT32_MAX;

	t10 = (x57-(x58|(x59<=x60)));

	if (t10 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -89260;
	int64_t x62 = -1LL;
	volatile uint16_t x63 = UINT16_MAX;
	volatile int32_t x64 = 698060655;
	volatile int64_t t11 = -56350347LL;

	t11 = (x61-(x62|(x63<=x64)));

	if (t11 != -89259LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MIN;
	int16_t x67 = 57;
	volatile int32_t t12 = -913;

	t12 = (x65-(x66|(x67<=x68)));

	if (t12 != 3227321) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x77 = 114U;
	int16_t x78 = INT16_MIN;
	volatile int32_t t13 = -150;

	t13 = (x77-(x78|(x79<=x80)));

	if (t13 != 32882) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = -1;
	int32_t x82 = INT32_MAX;
	uint8_t x83 = 29U;
	uint16_t x84 = 84U;
	volatile int32_t t14 = INT32_MIN;

	t14 = (x81-(x82|(x83<=x84)));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 5173U;
	uint16_t x87 = 5U;
	volatile int32_t t15 = -542;

	t15 = (x85-(x86|(x87<=x88)));

	if (t15 != 2131026) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 10U;
	volatile int8_t x90 = 3;
	volatile int32_t x91 = -1;
	volatile int8_t x92 = INT8_MAX;

	t16 = (x89-(x90|(x91<=x92)));

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 7U;
	static int16_t x96 = -1;
	volatile int32_t t17 = 0;

	t17 = (x93-(x94|(x95<=x96)));

	if (t17 != 32397) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	static volatile uint64_t x100 = UINT64_MAX;
	static int64_t t18 = 246207507057LL;

	t18 = (x97-(x98|(x99<=x100)));

	if (t18 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x102 = 26U;
	uint32_t x103 = 1119U;
	static uint8_t x104 = 12U;
	int32_t t19 = 405;

	t19 = (x101-(x102|(x103<=x104)));

	if (t19 != -154) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x105 = UINT16_MAX;
	static volatile int16_t x106 = INT16_MIN;
	volatile uint16_t x107 = UINT16_MAX;
	static int16_t x108 = INT16_MAX;

	t20 = (x105-(x106|(x107<=x108)));

	if (t20 != 98303) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MIN;
	volatile int8_t x110 = -1;
	int64_t x112 = INT64_MIN;
	volatile int32_t t21 = 2379300;

	t21 = (x109-(x110|(x111<=x112)));

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = -1;
	uint32_t x116 = 160283956U;
	volatile int32_t t22 = -54;

	t22 = (x113-(x114|(x115<=x116)));

	if (t22 != -256) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = 127LLU;
	int32_t x118 = INT32_MIN;
	uint64_t x119 = 543534858LLU;
	volatile int8_t x120 = -1;
	static uint64_t t23 = 46829996LLU;

	t23 = (x117-(x118|(x119<=x120)));

	if (t23 != 2147483774LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = -1;
	int32_t x126 = 3742;
	static uint16_t x127 = 9U;
	uint64_t x128 = UINT64_MAX;
	static int32_t t24 = 62642480;

	t24 = (x125-(x126|(x127<=x128)));

	if (t24 != -3744) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x130 = -1LL;
	volatile int32_t x131 = INT32_MAX;
	static uint8_t x132 = 1U;

	t25 = (x129-(x130|(x131<=x132)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x134 = 6U;
	uint64_t t26 = 1032LLU;

	t26 = (x133-(x134|(x135<=x136)));

	if (t26 != 154229032854801LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = 0U;
	static int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;
	volatile uint32_t t27 = 118717916U;

	t27 = (x137-(x138|(x139<=x140)));

	if (t27 != 4294967291U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	int16_t x142 = INT16_MAX;
	int64_t x144 = INT64_MIN;
	volatile int32_t t28 = 5436;

	t28 = (x141-(x142|(x143<=x144)));

	if (t28 != -32512) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = UINT64_MAX;
	int8_t x150 = 6;
	volatile uint16_t x151 = 1257U;
	volatile uint16_t x152 = UINT16_MAX;
	uint64_t t29 = 1372802549LLU;

	t29 = (x149-(x150|(x151<=x152)));

	if (t29 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MIN;
	static uint8_t x154 = 77U;
	volatile int32_t t30 = 1204;

	t30 = (x153-(x154|(x155<=x156)));

	if (t30 != -32845) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = 1277U;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t t31 = -6753760;

	t31 = (x157-(x158|(x159<=x160)));

	if (t31 != 1404) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x161 = 19074U;
	volatile int8_t x162 = -1;
	volatile int32_t x163 = -1;
	int64_t x164 = INT64_MIN;
	uint32_t t32 = 521985123U;

	t32 = (x161-(x162|(x163<=x164)));

	if (t32 != 19075U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x173 = INT64_MIN;
	uint64_t x174 = 7LLU;
	static int64_t x175 = 1999371501LL;
	static int32_t x176 = 483;
	volatile uint64_t t33 = 233724835044866889LLU;

	t33 = (x173-(x174|(x175<=x176)));

	if (t33 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x177 = 16276U;
	volatile uint64_t x178 = 3681982015LLU;
	int8_t x180 = -17;
	uint64_t t34 = 814608684373593627LLU;

	t34 = (x177-(x178|(x179<=x180)));

	if (t34 != 18446744070027585877LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x181 = 32U;
	static int8_t x182 = INT8_MIN;
	volatile uint32_t x184 = 7U;
	int32_t t35 = 1;

	t35 = (x181-(x182|(x183<=x184)));

	if (t35 != 159) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x189 = -1;
	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	static int8_t x192 = -3;
	int32_t t36 = 88;

	t36 = (x189-(x190|(x191<=x192)));

	if (t36 != 32766) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = 18342682013230803LL;
	volatile int16_t x194 = 7898;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = 0;
	int64_t t37 = 9LL;

	t37 = (x193-(x194|(x195<=x196)));

	if (t37 != 18342682013222905LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x198 = UINT16_MAX;
	uint64_t x199 = 28456266841LLU;
	int8_t x200 = INT8_MAX;
	static uint64_t t38 = 22270454457613917LLU;

	t38 = (x197-(x198|(x199<=x200)));

	if (t38 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x201 = 2836351LL;
	int32_t x202 = INT32_MAX;
	int16_t x203 = 13852;
	static int8_t x204 = INT8_MIN;
	int64_t t39 = 4LL;

	t39 = (x201-(x202|(x203<=x204)));

	if (t39 != -2144647296LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = INT32_MIN;
	volatile int32_t x206 = -13934;
	uint32_t x207 = UINT32_MAX;
	static int32_t t40 = 6;

	t40 = (x205-(x206|(x207<=x208)));

	if (t40 != -2147469715) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x209 = -1;
	uint64_t x211 = 130437335626LLU;
	static uint8_t x212 = 2U;
	int32_t t41 = -19757;

	t41 = (x209-(x210|(x211<=x212)));

	if (t41 != -83) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x217 = -1;
	volatile int32_t x218 = 502207;
	volatile int8_t x219 = -61;
	static volatile int32_t t42 = -3383719;

	t42 = (x217-(x218|(x219<=x220)));

	if (t42 != -502208) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x221 = INT8_MIN;
	int64_t x222 = INT64_MIN;
	uint16_t x223 = UINT16_MAX;
	static volatile int64_t x224 = INT64_MIN;

	t43 = (x221-(x222|(x223<=x224)));

	if (t43 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x227 = INT32_MAX;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t44 = 5270340109106848LLU;

	t44 = (x225-(x226|(x227<=x228)));

	if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MAX;
	volatile int64_t x232 = -52877539263969356LL;
	volatile uint32_t t45 = 8097U;

	t45 = (x229-(x230|(x231<=x232)));

	if (t45 != 32768U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x237 = 25U;
	uint16_t x238 = 126U;
	uint8_t x239 = 67U;
	int16_t x240 = INT16_MAX;
	uint32_t t46 = 25863U;

	t46 = (x237-(x238|(x239<=x240)));

	if (t46 != 4294967194U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x241 = 1U;
	int8_t x242 = -21;
	int8_t x243 = INT8_MIN;
	volatile uint16_t x244 = 5060U;
	int32_t t47 = 258;

	t47 = (x241-(x242|(x243<=x244)));

	if (t47 != 22) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = 40946702;
	static int8_t x247 = -1;
	volatile int32_t x248 = INT32_MIN;
	static int32_t t48 = -9641436;

	t48 = (x245-(x246|(x247<=x248)));

	if (t48 != 40946830) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x249 = 4U;
	uint64_t x250 = 92LLU;
	static uint64_t x251 = UINT64_MAX;
	int16_t x252 = -4;
	static volatile uint64_t t49 = 266627712046043976LLU;

	t49 = (x249-(x250|(x251<=x252)));

	if (t49 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x253 = INT16_MAX;
	volatile int64_t x254 = 1290787471LL;
	int8_t x256 = -1;

	t50 = (x253-(x254|(x255<=x256)));

	if (t50 != -1290754704LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x258 = -2;
	int32_t t51 = 2053529;

	t51 = (x257-(x258|(x259<=x260)));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x261 = INT8_MAX;
	int64_t x264 = -1LL;
	static volatile int32_t t52 = -155309;

	t52 = (x261-(x262|(x263<=x264)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x266 = 2U;
	uint16_t x267 = UINT16_MAX;
	int32_t x268 = -1;
	volatile int32_t t53 = -47840;

	t53 = (x265-(x266|(x267<=x268)));

	if (t53 != 8996) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = -1;
	volatile int32_t x271 = INT32_MAX;

	t54 = (x269-(x270|(x271<=x272)));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x278 = 0U;
	volatile int32_t x279 = INT32_MIN;
	static volatile uint64_t x280 = 0LLU;
	volatile int32_t t55 = 268324;

	t55 = (x277-(x278|(x279<=x280)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x281 = 23U;
	int64_t x282 = 1LL;
	int32_t x284 = -1;

	t56 = (x281-(x282|(x283<=x284)));

	if (t56 != 22LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = -225;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = 966;
	int16_t x288 = INT16_MAX;
	int32_t t57 = 2763;

	t57 = (x285-(x286|(x287<=x288)));

	if (t57 != -65760) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = 0U;
	static uint32_t x290 = 3419091U;
	int8_t x291 = INT8_MIN;
	volatile uint32_t t58 = 246U;

	t58 = (x289-(x290|(x291<=x292)));

	if (t58 != 4291548205U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x293 = -1LL;
	static int16_t x294 = INT16_MAX;
	static uint32_t x295 = 4U;
	volatile int64_t x296 = -1LL;
	volatile int64_t t59 = -327LL;

	t59 = (x293-(x294|(x295<=x296)));

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x297 = INT16_MAX;
	int16_t x298 = -10;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MAX;
	volatile int32_t t60 = 58775045;

	t60 = (x297-(x298|(x299<=x300)));

	if (t60 != 32776) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = 4146532441LL;
	int64_t x303 = INT64_MIN;
	uint8_t x304 = UINT8_MAX;
	static int64_t t61 = 12590372483112LL;

	t61 = (x301-(x302|(x303<=x304)));

	if (t61 != 4146565208LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x305 = 1656350LLU;
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = 1;
	int64_t x308 = INT64_MIN;

	t62 = (x305-(x306|(x307<=x308)));

	if (t62 != 1656351LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x310 = UINT8_MAX;
	uint16_t x311 = 5207U;
	volatile int32_t t63 = 21612910;

	t63 = (x309-(x310|(x311<=x312)));

	if (t63 != -33023) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x313 = -1LL;
	uint16_t x314 = 0U;
	static uint32_t x315 = UINT32_MAX;
	static int64_t t64 = -3021724003LL;

	t64 = (x313-(x314|(x315<=x316)));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = 520057953795150LL;
	static int64_t x318 = -1LL;
	static volatile uint8_t x319 = UINT8_MAX;
	volatile int16_t x320 = INT16_MIN;
	static int64_t t65 = -3LL;

	t65 = (x317-(x318|(x319<=x320)));

	if (t65 != 520057953795151LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x321 = 19183U;
	int32_t x322 = -1;
	uint8_t x324 = 33U;
	uint32_t t66 = 933U;

	t66 = (x321-(x322|(x323<=x324)));

	if (t66 != 19184U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = -1;
	int32_t x327 = 1;
	int64_t x328 = INT64_MAX;
	int32_t t67 = -104;

	t67 = (x325-(x326|(x327<=x328)));

	if (t67 != -34) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x334 = INT16_MIN;
	static int16_t x335 = INT16_MIN;
	uint32_t x336 = UINT32_MAX;
	static int32_t t68 = -1;

	t68 = (x333-(x334|(x335<=x336)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x337 = INT32_MIN;
	uint32_t x338 = UINT32_MAX;
	static int8_t x339 = -1;
	uint64_t x340 = 22102176LLU;
	volatile uint32_t t69 = 7829U;

	t69 = (x337-(x338|(x339<=x340)));

	if (t69 != 2147483649U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MAX;

	t70 = (x345-(x346|(x347<=x348)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x349 = INT64_MIN;
	static volatile int64_t x351 = INT64_MAX;
	uint64_t x352 = 959219571684341174LLU;

	t71 = (x349-(x350|(x351<=x352)));

	if (t71 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x354 = 104U;
	uint32_t x355 = 1U;
	static uint32_t x356 = 4750U;
	volatile int32_t t72 = -1;

	t72 = (x353-(x354|(x355<=x356)));

	if (t72 != -104) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x358 = INT8_MIN;
	uint8_t x359 = 1U;
	int8_t x360 = INT8_MIN;
	static volatile uint32_t t73 = 6U;

	t73 = (x357-(x358|(x359<=x360)));

	if (t73 != 4892U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x362 = UINT16_MAX;
	volatile int32_t x363 = -1;
	uint8_t x364 = 0U;
	static volatile int32_t t74 = -57047;

	t74 = (x361-(x362|(x363<=x364)));

	if (t74 != -65558) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x365 = -1;
	int8_t x367 = -46;
	int8_t x368 = -1;
	int32_t t75 = 11;

	t75 = (x365-(x366|(x367<=x368)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x370 = -1LL;
	int64_t x371 = INT64_MAX;
	static int32_t x372 = INT32_MIN;

	t76 = (x369-(x370|(x371<=x372)));

	if (t76 != -2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x374 = 1;
	uint64_t x376 = 14297261308597795LLU;

	t77 = (x373-(x374|(x375<=x376)));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x377 = -1;
	volatile int32_t x378 = 206672219;
	static volatile uint64_t x380 = 8647520257603LLU;
	volatile int32_t t78 = -7561;

	t78 = (x377-(x378|(x379<=x380)));

	if (t78 != -206672220) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x381 = INT16_MIN;
	volatile uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MAX;
	volatile uint64_t x384 = 118436206988117LLU;
	volatile int32_t t79 = 234;

	t79 = (x381-(x382|(x383<=x384)));

	if (t79 != -98303) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	static int32_t x387 = 1598355;
	static int8_t x388 = INT8_MAX;
	volatile uint64_t t80 = 7232779617LLU;

	t80 = (x385-(x386|(x387<=x388)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x389 = 3U;
	int8_t x390 = INT8_MIN;
	volatile uint16_t x391 = 42U;
	static int64_t x392 = INT64_MIN;
	int32_t t81 = 175014139;

	t81 = (x389-(x390|(x391<=x392)));

	if (t81 != 131) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x394 = INT16_MIN;
	uint64_t x396 = 3020254LLU;
	int64_t t82 = 6404LL;

	t82 = (x393-(x394|(x395<=x396)));

	if (t82 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x397 = 6007648U;
	volatile uint32_t x398 = 13731346U;
	uint32_t t83 = 175U;

	t83 = (x397-(x398|(x399<=x400)));

	if (t83 != 4287243597U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x401 = 5;
	int8_t x402 = INT8_MAX;
	static int64_t x403 = -1LL;
	int32_t x404 = INT32_MAX;
	int32_t t84 = -119;

	t84 = (x401-(x402|(x403<=x404)));

	if (t84 != -122) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = UINT16_MAX;
	int16_t x410 = INT16_MIN;
	int8_t x412 = INT8_MAX;
	volatile int32_t t85 = 171209;

	t85 = (x409-(x410|(x411<=x412)));

	if (t85 != 98303) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x413 = 1859U;
	int64_t x415 = -1LL;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t86 = -38160651;

	t86 = (x413-(x414|(x415<=x416)));

	if (t86 != 1732) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x417 = UINT64_MAX;
	volatile int64_t x418 = INT64_MIN;
	int8_t x419 = 38;
	uint64_t t87 = 6631172422885761479LLU;

	t87 = (x417-(x418|(x419<=x420)));

	if (t87 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t t88 = -3LL;

	t88 = (x421-(x422|(x423<=x424)));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x426 = 2U;
	static int64_t x427 = INT64_MAX;
	volatile uint8_t x428 = 1U;
	uint32_t t89 = 7U;

	t89 = (x425-(x426|(x427<=x428)));

	if (t89 != 4294967293U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x430 = 40825750220970155LLU;
	static volatile int16_t x431 = 1;
	uint64_t t90 = 19296509117999713LLU;

	t90 = (x429-(x430|(x431<=x432)));

	if (t90 != 18405918323488581562LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x433 = INT64_MIN;
	int16_t x434 = -1;
	static volatile int16_t x435 = -1;
	static uint16_t x436 = 152U;
	volatile int64_t t91 = -262395815848LL;

	t91 = (x433-(x434|(x435<=x436)));

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = -48;
	static uint64_t x438 = 151267579623LLU;
	int32_t x440 = INT32_MAX;
	uint64_t t92 = 48028664807952LLU;

	t92 = (x437-(x438|(x439<=x440)));

	if (t92 != 18446743922441971945LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x441 = 3207;
	int32_t x442 = 0;
	int32_t x443 = -258131273;
	uint16_t x444 = UINT16_MAX;
	int32_t t93 = 29777;

	t93 = (x441-(x442|(x443<=x444)));

	if (t93 != 3206) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x445 = 0;
	int16_t x446 = INT16_MIN;
	static volatile int8_t x447 = 5;
	int32_t x448 = INT32_MIN;
	volatile int32_t t94 = -162;

	t94 = (x445-(x446|(x447<=x448)));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x449 = 553;
	int8_t x450 = -1;
	int64_t x451 = INT64_MIN;

	t95 = (x449-(x450|(x451<=x452)));

	if (t95 != 554) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x457 = 3645U;
	volatile int8_t x458 = -1;
	int32_t x460 = INT32_MAX;
	volatile int32_t t96 = -42;

	t96 = (x457-(x458|(x459<=x460)));

	if (t96 != 3646) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x461 = -1LL;
	int64_t x462 = INT64_MAX;
	static int64_t x463 = INT64_MIN;
	static int16_t x464 = INT16_MIN;

	t97 = (x461-(x462|(x463<=x464)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 44378179243698476LLU;
	uint8_t x468 = UINT8_MAX;
	volatile uint64_t t98 = 14379908451LLU;

	t98 = (x465-(x466|(x467<=x468)));

	if (t98 != 18402365894465853394LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x469 = -1;
	int16_t x470 = INT16_MIN;
	static uint8_t x472 = 17U;
	volatile int32_t t99 = 19094;

	t99 = (x469-(x470|(x471<=x472)));

	if (t99 != 32766) { NG(); } else { ; }
	
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

