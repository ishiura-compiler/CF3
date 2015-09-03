#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 268U;
volatile int64_t x2 = INT64_MAX;
int16_t x10 = INT16_MIN;
volatile int32_t t2 = -23942340;
static int8_t x21 = INT8_MIN;
int16_t x24 = INT16_MIN;
int8_t x29 = -1;
int32_t x34 = INT32_MIN;
volatile int16_t x35 = -1;
int16_t x38 = -1;
uint64_t x39 = 1523LLU;
int8_t x45 = -8;
static int64_t x46 = -254LL;
uint64_t x47 = 127550851LLU;
uint16_t x54 = 219U;
uint16_t x59 = UINT16_MAX;
static int8_t x62 = 0;
static uint64_t x66 = 4249LLU;
int16_t x73 = 0;
uint64_t x91 = 2313LLU;
static uint64_t x94 = 4831LLU;
volatile uint16_t x97 = 31U;
int64_t x99 = -46926552LL;
uint32_t t20 = 6585617U;
int16_t x117 = INT16_MIN;
int16_t x118 = INT16_MAX;
int16_t x134 = INT16_MAX;
uint8_t x138 = 54U;
int8_t x139 = -17;
int32_t x145 = -316457210;
uint32_t x151 = UINT32_MAX;
int64_t x152 = -123558228182228LL;
int8_t x166 = INT8_MAX;
static int64_t x176 = -3509LL;
int64_t x188 = INT64_MIN;
volatile uint64_t t37 = 128582235093065821LLU;
int64_t x201 = -1LL;
uint32_t x205 = UINT32_MAX;
int16_t x208 = INT16_MIN;
uint64_t t40 = 76877217290LLU;
int16_t x212 = INT16_MIN;
int16_t x217 = -1;
volatile int64_t t42 = 84268384838775LL;
int64_t x226 = INT64_MAX;
uint64_t t46 = 4LLU;
int16_t x243 = INT16_MIN;
uint64_t x250 = 5820056538555LLU;
volatile int8_t x251 = -1;
volatile uint64_t t51 = 27269LLU;
int64_t x269 = 56246LL;
volatile uint8_t x275 = UINT8_MAX;
uint32_t x278 = 188U;
static uint16_t x279 = 12U;
static volatile uint32_t t56 = 120U;
int32_t x283 = -1;
volatile int64_t t57 = -841095495LL;
static uint32_t x296 = UINT32_MAX;
uint64_t t58 = 282LLU;
static uint16_t x321 = 2U;
volatile int8_t x324 = INT8_MAX;
int8_t x333 = INT8_MIN;
uint16_t x336 = 246U;
uint16_t x341 = UINT16_MAX;
static int16_t x346 = INT16_MIN;
int32_t x348 = INT32_MIN;
int64_t t68 = 1948LL;
volatile int8_t x354 = -17;
int8_t x369 = INT8_MAX;
volatile int64_t t73 = 399012447828776LL;
volatile uint32_t x373 = 19729U;
volatile int64_t t74 = -812746787848396425LL;
uint16_t x377 = 49U;
static int32_t x379 = -887582421;
int8_t x382 = 5;
static volatile int32_t x394 = INT32_MIN;
int64_t t77 = 77LL;
int8_t x403 = -47;
int8_t x404 = 41;
volatile int16_t x406 = INT16_MIN;
static volatile uint16_t x416 = 11U;
uint16_t x419 = 10U;
volatile uint32_t t82 = 0U;
uint32_t x423 = 1727880U;
int64_t x424 = INT64_MIN;
int32_t x430 = INT32_MIN;
volatile uint32_t t85 = 279359U;
int8_t x438 = INT8_MIN;
int8_t x439 = 0;
int32_t t87 = -462895297;
volatile uint16_t x452 = UINT16_MAX;
uint16_t x473 = UINT16_MAX;
uint32_t x475 = 431900U;
volatile uint64_t t94 = 7349708LLU;
int64_t x488 = INT64_MIN;
volatile int64_t t95 = -5054024LL;
uint16_t x505 = UINT16_MAX;
static int64_t x511 = -1LL;


void f0(void) {
	uint64_t x3 = UINT64_MAX;
	uint32_t x4 = UINT32_MAX;
	static volatile uint64_t t0 = 66111293LLU;

	t0 = (x1/((x2-x3)%x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int8_t x6 = -17;
	uint64_t x7 = UINT64_MAX;
	int64_t x8 = 84683072698LL;
	static volatile uint64_t t1 = 2197029839195221LLU;

	t1 = (x5/((x6-x7)%x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x11 = -47;
	int16_t x12 = 6982;

	t2 = (x9/((x10-x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint8_t x14 = 3U;
	volatile uint16_t x15 = 231U;
	int16_t x16 = INT16_MIN;
	int64_t t3 = -542LL;

	t3 = (x13/((x14-x15)%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = -1;
	static volatile int64_t x23 = INT64_MIN;
	int64_t t4 = 12580698LL;

	t4 = (x21/((x22-x23)%x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x30 = 9999033205355LL;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	static uint64_t t5 = 103524076970032989LLU;

	t5 = (x29/((x30-x31)%x32));

	if (t5 != 1844852LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -6287;
	uint64_t x36 = 25LLU;
	uint64_t t6 = 17LLU;

	t6 = (x33/((x34-x35)%x36));

	if (t6 != 970881267037344491LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 4920;
	uint32_t x40 = UINT32_MAX;
	uint64_t t7 = 7427898LLU;

	t7 = (x37/((x38-x39)%x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x48 = INT64_MIN;
	uint64_t t8 = 26880122608115LLU;

	t8 = (x45/((x46-x47)%x48));

	if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = 5547;
	volatile int32_t x55 = 117981762;
	volatile uint32_t x56 = 137420U;
	volatile uint32_t t9 = 0U;

	t9 = (x53/((x54-x55)%x56));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x57 = -641444327749LL;
	uint32_t x58 = 86565U;
	static volatile int8_t x60 = -1;
	static int64_t t10 = 1LL;

	t10 = (x57/((x58-x59)%x60));

	if (t10 != -30501394LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x61 = 0U;
	volatile int32_t x63 = INT32_MAX;
	uint64_t x64 = UINT64_MAX;
	uint64_t t11 = 22132080LLU;

	t11 = (x61/((x62-x63)%x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 220U;
	int16_t x67 = -1;
	int8_t x68 = 4;
	volatile uint64_t t12 = 1546LLU;

	t12 = (x65/((x66-x67)%x68));

	if (t12 != 110LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = 15699386U;
	int8_t x71 = 3;
	uint16_t x72 = 12699U;
	uint32_t t13 = 1812408612U;

	t13 = (x69/((x70-x71)%x72));

	if (t13 != 1256196U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x74 = UINT16_MAX;
	uint32_t x75 = 123U;
	int16_t x76 = INT16_MIN;
	volatile uint32_t t14 = 27U;

	t14 = (x73/((x74-x75)%x76));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -118608;
	volatile int64_t x78 = 1LL;
	uint32_t x79 = 649354U;
	static volatile uint32_t x80 = UINT32_MAX;
	volatile int64_t t15 = -73417779906663413LL;

	t15 = (x77/((x78-x79)%x80));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x81 = INT32_MIN;
	int64_t x82 = -3798741239826605002LL;
	volatile uint32_t x83 = UINT32_MAX;
	volatile uint32_t x84 = 49U;
	volatile int64_t t16 = 521834260929601158LL;

	t16 = (x81/((x82-x83)%x84));

	if (t16 != 47721858LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MAX;
	uint16_t x90 = 1781U;
	int16_t x92 = INT16_MIN;
	uint64_t t17 = 5423690066285LLU;

	t17 = (x89/((x90-x91)%x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x95 = 1;
	uint64_t x96 = UINT64_MAX;
	uint64_t t18 = 11335444290598LLU;

	t18 = (x93/((x94-x95)%x96));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x98 = 16U;
	int32_t x100 = INT32_MIN;
	volatile int64_t t19 = -12306346LL;

	t19 = (x97/((x98-x99)%x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MAX;
	uint32_t x102 = 39633U;
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;

	t20 = (x101/((x102-x103)%x104));

	if (t20 != 312770U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x105 = 4763U;
	static volatile uint16_t x106 = 3694U;
	static int64_t x107 = INT64_MAX;
	static uint16_t x108 = UINT16_MAX;
	int64_t t21 = -81LL;

	t21 = (x105/((x106-x107)%x108));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 1U;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = 2052U;
	int64_t x112 = -6280LL;
	int64_t t22 = -63LL;

	t22 = (x109/((x110-x111)%x112));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = -1;
	int32_t x114 = -1;
	int8_t x115 = 0;
	static int32_t x116 = 366;
	volatile int32_t t23 = 12;

	t23 = (x113/((x114-x115)%x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t24 = -495670714;

	t24 = (x117/((x118-x119)%x120));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = 571383LL;
	int32_t x122 = 121;
	uint32_t x123 = 15U;
	int64_t x124 = 486494LL;
	volatile int64_t t25 = 5953LL;

	t25 = (x121/((x122-x123)%x124));

	if (t25 != 5390LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x129 = INT64_MIN;
	uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 24432LLU;
	uint16_t x132 = UINT16_MAX;
	volatile uint64_t t26 = 2LLU;

	t26 = (x129/((x130-x131)%x132));

	if (t26 != 224396565624279LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x133 = 2LLU;
	int32_t x135 = -173;
	volatile int32_t x136 = INT32_MAX;
	static volatile uint64_t t27 = 48922560LLU;

	t27 = (x133/((x134-x135)%x136));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MIN;
	volatile int64_t x140 = INT64_MAX;
	int64_t t28 = 217LL;

	t28 = (x137/((x138-x139)%x140));

	if (t28 != -461LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x141 = INT32_MAX;
	volatile int32_t x142 = INT32_MAX;
	int64_t x143 = -1LL;
	static int64_t x144 = 18LL;
	int64_t t29 = -18724698469LL;

	t29 = (x141/((x142-x143)%x144));

	if (t29 != 1073741823LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x146 = 587U;
	uint32_t x147 = UINT32_MAX;
	static int32_t x148 = INT32_MIN;
	volatile uint32_t t30 = 13357808U;

	t30 = (x145/((x146-x147)%x148));

	if (t30 != 6766173U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	int64_t t31 = 859591090963727LL;

	t31 = (x149/((x150-x151)%x152));

	if (t31 != -2147483711LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = -52;
	int32_t x158 = INT32_MIN;
	int16_t x159 = -1;
	uint16_t x160 = 376U;
	static int32_t t32 = -2573;

	t32 = (x157/((x158-x159)%x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x165 = 380448861U;
	int64_t x167 = -1LL;
	static int16_t x168 = INT16_MIN;
	int64_t t33 = 30LL;

	t33 = (x165/((x166-x167)%x168));

	if (t33 != 2972256LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = INT16_MAX;
	static uint32_t x174 = UINT32_MAX;
	int8_t x175 = INT8_MAX;
	volatile int64_t t34 = 410138324632570617LL;

	t34 = (x173/((x174-x175)%x176));

	if (t34 != 111LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	volatile uint64_t x178 = 2733LLU;
	static int16_t x179 = -956;
	int32_t x180 = INT32_MIN;
	uint64_t t35 = 1236122727LLU;

	t35 = (x177/((x178-x179)%x180));

	if (t35 != 5000472776825567LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MIN;
	static int64_t x182 = -1LL;
	int16_t x183 = -2;
	int8_t x184 = INT8_MIN;
	volatile int64_t t36 = -29LL;

	t36 = (x181/((x182-x183)%x184));

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = 0;
	uint64_t x187 = UINT64_MAX;

	t37 = (x185/((x186-x187)%x188));

	if (t37 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x189 = -8;
	int8_t x190 = INT8_MAX;
	volatile int64_t x191 = -1LL;
	int32_t x192 = INT32_MAX;
	volatile int64_t t38 = 34521658610425519LL;

	t38 = (x189/((x190-x191)%x192));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x202 = 37LL;
	volatile int32_t x203 = -70;
	int64_t x204 = INT64_MIN;
	static volatile int64_t t39 = -5234963615LL;

	t39 = (x201/((x202-x203)%x204));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x206 = INT16_MIN;
	static uint64_t x207 = UINT64_MAX;

	t40 = (x205/((x206-x207)%x208));

	if (t40 != 4294967295LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MAX;
	uint8_t x211 = 0U;
	int32_t t41 = 23410887;

	t41 = (x209/((x210-x211)%x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x218 = INT16_MIN;
	int64_t x219 = -1LL;
	static uint8_t x220 = 13U;

	t42 = (x217/((x218-x219)%x220));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MAX;
	static int16_t x223 = INT16_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t43 = 230441177;

	t43 = (x221/((x222-x223)%x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x225 = 1;
	static int32_t x227 = 10449;
	static uint64_t x228 = 2112864505LLU;
	volatile uint64_t t44 = 726811LLU;

	t44 = (x225/((x226-x227)%x228));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x229 = 2LLU;
	uint16_t x230 = UINT16_MAX;
	uint8_t x231 = 0U;
	int8_t x232 = INT8_MIN;
	uint64_t t45 = 8271701064474414433LLU;

	t45 = (x229/((x230-x231)%x232));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int16_t x234 = -1;
	int8_t x235 = INT8_MAX;
	static uint16_t x236 = 24413U;

	t46 = (x233/((x234-x235)%x236));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x237 = INT8_MIN;
	int8_t x238 = -17;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = -1;
	volatile uint32_t t47 = 25568095U;

	t47 = (x237/((x238-x239)%x240));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = INT64_MAX;
	int64_t x242 = -1LL;
	int32_t x244 = -167;
	volatile int64_t t48 = -1104907869LL;

	t48 = (x241/((x242-x243)%x244));

	if (t48 != 263524915338707880LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x245 = 29U;
	int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t49 = 219608715942LLU;

	t49 = (x245/((x246-x247)%x248));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MAX;
	volatile uint16_t x252 = UINT16_MAX;
	uint64_t t50 = 1LLU;

	t50 = (x249/((x250-x251)%x252));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = INT32_MAX;
	uint32_t x254 = 31U;
	static int32_t x255 = -507;
	uint64_t x256 = 66435754LLU;

	t51 = (x253/((x254-x255)%x256));

	if (t51 != 3991605LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x257 = UINT64_MAX;
	static int32_t x258 = INT32_MAX;
	volatile int8_t x259 = 1;
	static int8_t x260 = INT8_MIN;
	uint64_t t52 = 14150179593LLU;

	t52 = (x257/((x258-x259)%x260));

	if (t52 != 146402730743726600LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x261 = INT64_MIN;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = 206;
	uint16_t x264 = 24639U;
	int64_t t53 = -4003255003263850LL;

	t53 = (x261/((x262-x263)%x264));

	if (t53 != -188232082384791343LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x270 = INT8_MIN;
	static int32_t x271 = -1;
	uint32_t x272 = 4U;
	int64_t t54 = 140757920766595487LL;

	t54 = (x269/((x270-x271)%x272));

	if (t54 != 56246LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x273 = 350265389U;
	int8_t x274 = INT8_MIN;
	int32_t x276 = INT32_MIN;
	volatile uint32_t t55 = 1U;

	t55 = (x273/((x274-x275)%x276));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = -1;
	int16_t x280 = -1;

	t56 = (x277/((x278-x279)%x280));

	if (t56 != 24403223U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x281 = -1;
	static volatile int32_t x282 = INT32_MIN;
	int64_t x284 = INT64_MIN;

	t57 = (x281/((x282-x283)%x284));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x293 = -1;
	static volatile uint64_t x294 = UINT64_MAX;
	int64_t x295 = -681822641487LL;

	t58 = (x293/((x294-x295)%x296));

	if (t58 != 5732703458LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x301 = INT32_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t59 = -10172;

	t59 = (x301/((x302-x303)%x304));

	if (t59 != 65793) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = 15;
	static int64_t x310 = INT64_MAX;
	static uint64_t x311 = UINT64_MAX;
	int8_t x312 = -1;
	uint64_t t60 = 7942205LLU;

	t60 = (x309/((x310-x311)%x312));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x317 = -31498LL;
	uint32_t x318 = 65954U;
	volatile int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	static int64_t t61 = -1984751LL;

	t61 = (x317/((x318-x319)%x320));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x322 = INT16_MAX;
	volatile uint16_t x323 = 0U;
	volatile int32_t t62 = -11;

	t62 = (x321/((x322-x323)%x324));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x325 = 380202U;
	volatile int16_t x326 = INT16_MIN;
	volatile int64_t x327 = INT64_MIN;
	uint64_t x328 = 1362624LLU;
	uint64_t t63 = 15487616191529LLU;

	t63 = (x325/((x326-x327)%x328));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x329 = -1;
	static uint8_t x330 = 0U;
	static int8_t x331 = 1;
	uint32_t x332 = 34U;
	uint32_t t64 = 442501637U;

	t64 = (x329/((x330-x331)%x332));

	if (t64 != 252645135U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x334 = -1;
	uint8_t x335 = 118U;
	volatile int32_t t65 = -772;

	t65 = (x333/((x334-x335)%x336));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = INT8_MIN;
	static int32_t x338 = 776634956;
	int64_t x339 = -1853093151LL;
	static volatile int32_t x340 = 63219;
	int64_t t66 = -130443076283LL;

	t66 = (x337/((x338-x339)%x340));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = 0;
	uint8_t x344 = 27U;
	uint32_t t67 = 231U;

	t67 = (x341/((x342-x343)%x344));

	if (t67 != 3120U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x345 = INT32_MAX;
	int64_t x347 = INT64_MIN;

	t68 = (x345/((x346-x347)%x348));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = 15;
	int64_t x351 = -805LL;
	static uint8_t x352 = UINT8_MAX;
	int64_t t69 = 701223910LL;

	t69 = (x349/((x350-x351)%x352));

	if (t69 != -39045157LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = 8928214593446393854LLU;
	volatile uint64_t x355 = UINT64_MAX;
	int32_t x356 = INT32_MIN;
	uint64_t t70 = 21LLU;

	t70 = (x353/((x354-x355)%x356));

	if (t70 != 4157523931LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x357 = 3568904U;
	static int32_t x358 = -94;
	uint32_t x359 = 1340739U;
	int8_t x360 = INT8_MIN;
	volatile uint32_t t71 = 15U;

	t71 = (x357/((x358-x359)%x360));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x361 = 979994800527540LLU;
	uint64_t x362 = 493794486941LLU;
	static int32_t x363 = -854897890;
	volatile int16_t x364 = 38;
	uint64_t t72 = 336048LLU;

	t72 = (x361/((x362-x363)%x364));

	if (t72 != 51578673711975LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x370 = INT8_MIN;
	uint8_t x371 = 10U;
	volatile int64_t x372 = INT64_MAX;

	t73 = (x369/((x370-x371)%x372));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x374 = INT8_MIN;
	int64_t x375 = -153821440618237LL;
	uint16_t x376 = 3U;

	t74 = (x373/((x374-x375)%x376));

	if (t74 != 9864LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x378 = INT8_MIN;
	static int32_t x380 = INT32_MAX;
	int32_t t75 = -166344486;

	t75 = (x377/((x378-x379)%x380));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x383 = 146U;
	int64_t x384 = 59350365LL;
	uint64_t t76 = 40356456783742LLU;

	t76 = (x381/((x382-x383)%x384));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x393 = 12U;
	uint32_t x395 = 2879514U;
	static int64_t x396 = INT64_MAX;

	t77 = (x393/((x394-x395)%x396));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = 4;
	static int32_t x398 = INT32_MIN;
	volatile int64_t x399 = -1LL;
	static int8_t x400 = -56;
	volatile int64_t t78 = 534274723990LL;

	t78 = (x397/((x398-x399)%x400));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = INT64_MAX;
	static uint8_t x402 = UINT8_MAX;
	volatile int64_t t79 = -904565876388LL;

	t79 = (x401/((x402-x403)%x404));

	if (t79 != 614891469123651720LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x405 = UINT32_MAX;
	int8_t x407 = INT8_MAX;
	int8_t x408 = INT8_MAX;
	uint32_t t80 = 4U;

	t80 = (x405/((x406-x407)%x408));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x413 = INT8_MAX;
	int64_t x414 = -1LL;
	volatile int32_t x415 = INT32_MAX;
	volatile int64_t t81 = 962LL;

	t81 = (x413/((x414-x415)%x416));

	if (t81 != -63LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x417 = 15524;
	int16_t x418 = -1;
	uint32_t x420 = 126341U;

	t82 = (x417/((x418-x419)%x420));

	if (t82 != 3U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x421 = UINT16_MAX;
	uint8_t x422 = 26U;
	static volatile int64_t t83 = 2315721625174831LL;

	t83 = (x421/((x422-x423)%x424));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = 1U;
	static int16_t x426 = -7714;
	volatile uint32_t x427 = 11440U;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t84 = 16523357U;

	t84 = (x425/((x426-x427)%x428));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = -108;
	uint32_t x431 = 125252422U;
	static int32_t x432 = INT32_MAX;

	t85 = (x429/((x430-x431)%x432));

	if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x433 = INT8_MIN;
	static volatile int64_t x434 = INT64_MIN;
	int16_t x435 = -1;
	static int8_t x436 = INT8_MIN;
	volatile int64_t t86 = -16634118101LL;

	t86 = (x433/((x434-x435)%x436));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x437 = UINT8_MAX;
	int32_t x440 = -7623;

	t87 = (x437/((x438-x439)%x440));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x441 = INT64_MIN;
	uint16_t x442 = 24U;
	uint64_t x443 = 10141LLU;
	volatile uint32_t x444 = UINT32_MAX;
	volatile uint64_t t88 = 15153854538LLU;

	t88 = (x441/((x442-x443)%x444));

	if (t88 != 2147488706LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x449 = 13865;
	volatile uint64_t x450 = 3385981875416LLU;
	int16_t x451 = INT16_MIN;
	volatile uint64_t t89 = 954968550LLU;

	t89 = (x449/((x450-x451)%x452));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x453 = 1;
	volatile int32_t x454 = INT32_MAX;
	int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MAX;
	static volatile int32_t t90 = 3799974;

	t90 = (x453/((x454-x455)%x456));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x465 = -1;
	int8_t x466 = 1;
	static volatile uint16_t x467 = UINT16_MAX;
	uint16_t x468 = 5272U;
	static volatile int32_t t91 = 249679761;

	t91 = (x465/((x466-x467)%x468));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x469 = UINT8_MAX;
	static uint32_t x470 = UINT32_MAX;
	volatile uint8_t x471 = 1U;
	volatile int8_t x472 = INT8_MAX;
	uint32_t t92 = 869169605U;

	t92 = (x469/((x470-x471)%x472));

	if (t92 != 18U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x474 = UINT8_MAX;
	volatile int32_t x476 = -122198281;
	uint32_t t93 = 3U;

	t93 = (x473/((x474-x475)%x476));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x481 = INT64_MIN;
	static uint64_t x482 = 488999918LLU;
	int8_t x483 = INT8_MAX;
	int64_t x484 = INT64_MAX;

	t94 = (x481/((x482-x483)%x484));

	if (t94 != 18861709568LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x485 = -1;
	static int64_t x486 = 234LL;
	int16_t x487 = 30;

	t95 = (x485/((x486-x487)%x488));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x497 = -1;
	int64_t x498 = INT64_MIN;
	static int32_t x499 = INT32_MIN;
	volatile int32_t x500 = -120266;
	int64_t t96 = 73518430602LL;

	t96 = (x497/((x498-x499)%x500));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x501 = 86U;
	static int32_t x502 = -1;
	uint8_t x503 = 1U;
	int16_t x504 = -801;
	static volatile int32_t t97 = 3;

	t97 = (x501/((x502-x503)%x504));

	if (t97 != -43) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x506 = -1;
	int8_t x507 = INT8_MAX;
	volatile uint8_t x508 = UINT8_MAX;
	static int32_t t98 = 186;

	t98 = (x505/((x506-x507)%x508));

	if (t98 != -511) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x509 = -1;
	static uint8_t x510 = 5U;
	volatile uint16_t x512 = UINT16_MAX;
	int64_t t99 = 14297902LL;

	t99 = (x509/((x510-x511)%x512));

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

