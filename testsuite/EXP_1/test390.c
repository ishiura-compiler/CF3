#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
uint32_t x17 = 778424773U;
volatile uint32_t x20 = 44U;
volatile int8_t x34 = INT8_MAX;
int32_t x35 = -30;
int8_t x38 = -1;
int32_t t4 = -30;
int32_t x45 = INT32_MIN;
static uint32_t x46 = UINT32_MAX;
volatile uint32_t t5 = 4765125U;
volatile int64_t x51 = INT64_MIN;
int32_t x93 = -1304191;
int64_t x94 = -1LL;
volatile int32_t t12 = INT32_MIN;
int8_t x113 = INT8_MAX;
static volatile uint32_t x124 = 8160U;
static uint8_t x137 = UINT8_MAX;
int16_t x138 = INT16_MIN;
static volatile int16_t x153 = INT16_MAX;
int64_t x156 = -1LL;
uint64_t x164 = 39LLU;
static uint64_t t22 = 260373544342647390LLU;
volatile int8_t x165 = 6;
volatile uint64_t t23 = 34360818490116965LLU;
uint8_t x174 = UINT8_MAX;
uint8_t x175 = UINT8_MAX;
volatile uint64_t x177 = UINT64_MAX;
int32_t x204 = 956383216;
int16_t x206 = -1;
int16_t x213 = INT16_MAX;
static uint64_t t32 = 84042LLU;
int8_t x217 = INT8_MAX;
int64_t x219 = INT64_MAX;
volatile uint16_t x222 = 1U;
uint16_t x227 = 22769U;
int16_t x228 = -1;
int64_t x232 = -1LL;
volatile uint32_t t38 = 94509685U;
int16_t x242 = INT16_MAX;
static uint64_t x243 = UINT64_MAX;
uint64_t x259 = 200567111940999LLU;
uint64_t x266 = UINT64_MAX;
int32_t x267 = 1011876571;
int8_t x269 = -38;
static int8_t x271 = 7;
volatile int32_t t44 = 1622;
int8_t x279 = INT8_MIN;
uint32_t x281 = UINT32_MAX;
int16_t x283 = INT16_MIN;
int32_t x284 = INT32_MAX;
static uint32_t x287 = 1331607U;
static volatile uint8_t x288 = 1U;
static uint32_t t47 = 15U;
volatile int16_t x293 = INT16_MIN;
uint8_t x294 = UINT8_MAX;
uint8_t x297 = UINT8_MAX;
int64_t x299 = INT64_MIN;
int32_t x301 = -48891163;
int16_t x303 = INT16_MIN;
uint8_t x313 = 1U;
int16_t x315 = -95;
int64_t t52 = -729099LL;
volatile int8_t x327 = 1;
uint64_t x328 = UINT64_MAX;
uint64_t t53 = 198392491570626LLU;
static uint8_t x336 = 1U;
int64_t t54 = 147985LL;
volatile int8_t x342 = INT8_MIN;
static int64_t x344 = 1083321664981462LL;
int64_t t55 = 84590395293191849LL;
static int8_t x350 = INT8_MIN;
uint8_t x353 = 0U;
static int8_t x370 = INT8_MAX;
volatile uint16_t x372 = UINT16_MAX;
int16_t x373 = INT16_MIN;
volatile int64_t x375 = -104547447303LL;
int16_t x379 = INT16_MIN;
uint16_t x391 = 3514U;
int16_t x392 = 12;
int16_t x399 = -1;
int32_t x404 = -1;
int16_t x414 = 26;
uint16_t x417 = UINT16_MAX;
uint16_t x420 = 87U;
int16_t x427 = INT16_MIN;
int16_t x429 = INT16_MAX;
uint16_t x430 = 12253U;
uint32_t x434 = 4U;
static volatile int8_t x438 = 9;
int16_t x439 = -1;
int16_t x440 = 136;
int64_t x454 = 13435642LL;
static int8_t x480 = -18;
volatile int16_t x488 = INT16_MIN;
volatile int32_t t81 = -946360107;
uint32_t x490 = 65367U;
uint64_t x494 = 1322713478534490LLU;
int64_t x506 = -1333335447LL;
volatile uint64_t x508 = UINT64_MAX;
int8_t x509 = INT8_MIN;
int64_t x510 = -60228448LL;
static int32_t x518 = -1;
int16_t x528 = INT16_MIN;
uint16_t x529 = UINT16_MAX;
volatile int64_t x532 = INT64_MIN;
uint16_t x536 = UINT16_MAX;
uint64_t x554 = UINT64_MAX;
static uint64_t t93 = 33036182LLU;
int32_t x562 = -1;
uint64_t x564 = 7992364273718311LLU;
volatile int16_t x570 = INT16_MAX;
static uint32_t x571 = 17204138U;
int32_t x572 = INT32_MIN;
int16_t x581 = INT16_MIN;
uint16_t x582 = 1U;
int16_t x583 = 5885;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	volatile uint32_t x4 = UINT32_MAX;
	static int64_t t0 = -3124855686LL;

	t0 = (((x1*x2)/x3)^x4);

	if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x18 = 1LLU;
	uint32_t x19 = 23046369U;
	uint64_t t1 = 3162205LLU;

	t1 = (((x17*x18)/x19)^x20);

	if (t1 != 13LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x21 = 2958U;
	volatile uint8_t x22 = 31U;
	static uint16_t x23 = UINT16_MAX;
	static int8_t x24 = -1;
	int32_t t2 = 102;

	t2 = (((x21*x22)/x23)^x24);

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = INT8_MAX;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t3 = 8703;

	t3 = (((x33*x34)/x35)^x36);

	if (t3 != -2147483112) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 21U;
	int32_t x39 = 126627960;
	volatile int32_t x40 = 49589;

	t4 = (((x37*x38)/x39)^x40);

	if (t4 != 49589) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x47 = 995U;
	uint16_t x48 = UINT16_MAX;

	t5 = (((x45*x46)/x47)^x48);

	if (t5 != 2101564U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = 714836887112021605LLU;
	uint8_t x50 = UINT8_MAX;
	volatile int8_t x52 = -1;
	static uint64_t t6 = 4LLU;

	t6 = (((x49*x50)/x51)^x52);

	if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x53 = UINT32_MAX;
	uint16_t x54 = 745U;
	volatile int32_t x55 = -1;
	int8_t x56 = 0;
	volatile uint32_t t7 = 3U;

	t7 = (((x53*x54)/x55)^x56);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x65 = 41233684U;
	uint64_t x66 = 239347208LLU;
	int16_t x67 = INT16_MAX;
	volatile int32_t x68 = 337126604;
	uint64_t t8 = 15997LLU;

	t8 = (((x65*x66)/x67)^x68);

	if (t8 != 301527298291LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	volatile int32_t x75 = -1;
	uint16_t x76 = 441U;
	static uint32_t t9 = 15U;

	t9 = (((x73*x74)/x75)^x76);

	if (t9 != 441U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x89 = 16U;
	int16_t x90 = INT16_MAX;
	uint64_t x91 = 6LLU;
	int32_t x92 = 261912;
	uint64_t t10 = 951057071LLU;

	t10 = (((x89*x90)/x91)^x92);

	if (t10 != 174666LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MAX;
	volatile int64_t t11 = 265LL;

	t11 = (((x93*x94)/x95)^x96);

	if (t11 != -90LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x97 = -1;
	static uint8_t x98 = UINT8_MAX;
	int16_t x99 = 3377;
	int32_t x100 = INT32_MIN;

	t12 = (((x97*x98)/x99)^x100);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x109 = 3U;
	int16_t x110 = -1567;
	volatile uint64_t x111 = UINT64_MAX;
	uint64_t x112 = UINT64_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x109*x110)/x111)^x112);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x114 = -1LL;
	int16_t x115 = INT16_MAX;
	static int64_t x116 = -507568190352LL;
	int64_t t14 = -2955243LL;

	t14 = (((x113*x114)/x115)^x116);

	if (t14 != -507568190352LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int16_t x120 = -1;
	static volatile int32_t t15 = 2569096;

	t15 = (((x117*x118)/x119)^x120);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x121 = 1642247869676336LLU;
	int64_t x122 = INT64_MAX;
	uint8_t x123 = 1U;
	volatile uint64_t t16 = 95LLU;

	t16 = (((x121*x122)/x123)^x124);

	if (t16 != 18445101825839881008LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x125 = 227638U;
	int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;
	static uint32_t t17 = 1464860U;

	t17 = (((x125*x126)/x127)^x128);

	if (t17 != 65535U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x133 = UINT32_MAX;
	static uint64_t x134 = 326647LLU;
	int16_t x135 = -136;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t18 = 3641828213623368LLU;

	t18 = (((x133*x134)/x135)^x136);

	if (t18 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x139 = -1;
	static uint32_t x140 = UINT32_MAX;
	static uint32_t t19 = 1365U;

	t19 = (((x137*x138)/x139)^x140);

	if (t19 != 4286611455U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = -1;
	static int32_t x143 = 37;
	uint32_t x144 = UINT32_MAX;
	uint32_t t20 = 51379514U;

	t20 = (((x141*x142)/x143)^x144);

	if (t20 != 884U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x154 = -1;
	int32_t x155 = 200033686;
	int64_t t21 = -3229656351LL;

	t21 = (((x153*x154)/x155)^x156);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x161 = 6270U;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 11210031646LLU;

	t22 = (((x161*x162)/x163)^x164);

	if (t22 != 1645556863LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x166 = 53U;
	uint64_t x167 = 39132LLU;
	static int32_t x168 = -4025230;

	t23 = (((x165*x166)/x167)^x168);

	if (t23 != 18446744073705526386LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x169 = 91612012U;
	int8_t x170 = INT8_MAX;
	int64_t x171 = INT64_MIN;
	int32_t x172 = 545046;
	volatile int64_t t24 = -665LL;

	t24 = (((x169*x170)/x171)^x172);

	if (t24 != 545046LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x173 = 189;
	volatile int16_t x176 = INT16_MIN;
	int32_t t25 = -466880;

	t25 = (((x173*x174)/x175)^x176);

	if (t25 != -32579) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x178 = -103;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile uint64_t t26 = 1582018815991LLU;

	t26 = (((x177*x178)/x179)^x180);

	if (t26 != 255LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x181 = -1LL;
	int32_t x182 = -1;
	uint64_t x183 = 12137308689234LLU;
	int32_t x184 = -1;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (((x181*x182)/x183)^x184);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x197 = 1;
	uint64_t x198 = 151745468660182LLU;
	int8_t x199 = -30;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t28 = 342LLU;

	t28 = (((x197*x198)/x199)^x200);

	if (t28 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x201 = UINT64_MAX;
	uint8_t x202 = 7U;
	int8_t x203 = INT8_MIN;
	volatile uint64_t t29 = 727989397099LLU;

	t29 = (((x201*x202)/x203)^x204);

	if (t29 != 956383217LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x205 = INT64_MAX;
	static int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	volatile int64_t t30 = -134434153929LL;

	t30 = (((x205*x206)/x207)^x208);

	if (t30 != -4294967169LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x209 = 4;
	volatile int8_t x210 = -1;
	uint64_t x211 = 2274557636714LLU;
	int32_t x212 = 81357;
	static uint64_t t31 = 542336050309644398LLU;

	t31 = (((x209*x210)/x211)^x212);

	if (t31 != 8028702LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x214 = INT16_MIN;
	static int16_t x215 = INT16_MIN;
	uint64_t x216 = 3258388536LLU;

	t32 = (((x213*x214)/x215)^x216);

	if (t32 != 3258412999LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x218 = INT8_MAX;
	static uint16_t x220 = UINT16_MAX;
	volatile int64_t t33 = 32523770186LL;

	t33 = (((x217*x218)/x219)^x220);

	if (t33 != 65535LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x223 = 1576051526U;
	static uint64_t x224 = UINT64_MAX;
	volatile uint64_t t34 = 0LLU;

	t34 = (((x221*x222)/x223)^x224);

	if (t34 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x225 = -1;
	int8_t x226 = 1;
	volatile int32_t t35 = -1511007;

	t35 = (((x225*x226)/x227)^x228);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x229 = UINT16_MAX;
	uint8_t x230 = UINT8_MAX;
	uint64_t x231 = 936LLU;
	uint64_t t36 = 0LLU;

	t36 = (((x229*x230)/x231)^x232);

	if (t36 != 18446744073709533761LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x233 = 55U;
	volatile int8_t x234 = INT8_MAX;
	int64_t x235 = INT64_MAX;
	int32_t x236 = INT32_MIN;
	int64_t t37 = 20048564598436LL;

	t37 = (((x233*x234)/x235)^x236);

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x237 = INT32_MAX;
	uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = UINT8_MAX;

	t38 = (((x237*x238)/x239)^x240);

	if (t38 != 255U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = 2618493852700LL;
	uint32_t x244 = 418832U;
	volatile uint64_t t39 = 5147550409LLU;

	t39 = (((x241*x242)/x243)^x244);

	if (t39 != 418832LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x257 = INT16_MIN;
	static uint64_t x258 = 339714121805LLU;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t40 = 1979482374963581463LLU;

	t40 = (((x257*x258)/x259)^x260);

	if (t40 != 18446744073709459597LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x261 = 2601U;
	int8_t x262 = INT8_MIN;
	volatile uint64_t x263 = 9875771815351LLU;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t41 = 9053079872261595404LLU;

	t41 = (((x261*x262)/x263)^x264);

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x265 = 396567LL;
	int16_t x268 = -3;
	static uint64_t t42 = 6LLU;

	t42 = (((x265*x266)/x267)^x268);

	if (t42 != 18446744055479320182LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x270 = UINT64_MAX;
	int64_t x272 = INT64_MAX;
	uint64_t t43 = 1539166497967960729LLU;

	t43 = (((x269*x270)/x271)^x272);

	if (t43 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x273 = INT8_MIN;
	static volatile int16_t x274 = 0;
	static uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;

	t44 = (((x273*x274)/x275)^x276);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x277 = 118104894617565997LLU;
	int16_t x278 = INT16_MAX;
	int8_t x280 = -8;
	uint64_t t45 = 2338627357869920065LLU;

	t45 = (((x277*x278)/x279)^x280);

	if (t45 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x282 = INT32_MAX;
	volatile uint32_t t46 = 862829775U;

	t46 = (((x281*x282)/x283)^x284);

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = -1;
	int8_t x286 = -1;

	t47 = (((x285*x286)/x287)^x288);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x295 = -1;
	static int16_t x296 = INT16_MIN;
	static volatile int32_t t48 = -1;

	t48 = (((x293*x294)/x295)^x296);

	if (t48 != -8388608) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x298 = -1;
	static int8_t x300 = INT8_MIN;
	volatile int64_t t49 = -2082340522LL;

	t49 = (((x297*x298)/x299)^x300);

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x302 = 1444308LL;
	int16_t x304 = 6292;
	static int64_t t50 = 11541095392916427LL;

	t50 = (((x301*x302)/x303)^x304);

	if (t50 != 2154967052LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x309 = -1;
	int32_t x310 = -1;
	static int32_t x311 = -3345;
	static int32_t x312 = INT32_MIN;
	static int32_t t51 = INT32_MIN;

	t51 = (((x309*x310)/x311)^x312);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x314 = 1247LL;
	int8_t x316 = INT8_MIN;

	t52 = (((x313*x314)/x315)^x316);

	if (t52 != 115LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x325 = 1;
	int16_t x326 = -1;

	t53 = (((x325*x326)/x327)^x328);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x333 = 0LL;
	uint16_t x334 = 19643U;
	uint8_t x335 = 2U;

	t54 = (((x333*x334)/x335)^x336);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x341 = UINT16_MAX;
	int8_t x343 = INT8_MAX;

	t55 = (((x341*x342)/x343)^x344);

	if (t55 != -1083321665047509LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x349 = 84U;
	volatile int8_t x351 = INT8_MIN;
	volatile uint16_t x352 = 16U;
	int32_t t56 = 59234;

	t56 = (((x349*x350)/x351)^x352);

	if (t56 != 68) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x354 = 6043;
	volatile uint8_t x355 = UINT8_MAX;
	static int32_t x356 = INT32_MIN;
	static int32_t t57 = INT32_MIN;

	t57 = (((x353*x354)/x355)^x356);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	static int16_t x360 = INT16_MIN;
	static uint64_t t58 = 844679091682LLU;

	t58 = (((x357*x358)/x359)^x360);

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x369 = 1373633LL;
	int64_t x371 = INT64_MIN;
	static int64_t t59 = -26214553129025LL;

	t59 = (((x369*x370)/x371)^x372);

	if (t59 != 65535LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x374 = -1;
	uint64_t x376 = 476028918304336LLU;
	uint64_t t60 = 1464LLU;

	t60 = (((x373*x374)/x375)^x376);

	if (t60 != 476028918304336LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x377 = 1U;
	int16_t x378 = 1;
	int8_t x380 = 31;
	volatile int32_t t61 = 104834773;

	t61 = (((x377*x378)/x379)^x380);

	if (t61 != 31) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = -1LL;
	static uint32_t x383 = 31U;
	static volatile uint16_t x384 = 13920U;
	volatile int64_t t62 = -2499444LL;

	t62 = (((x381*x382)/x383)^x384);

	if (t62 != -138553060LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = 2;
	volatile int64_t x387 = 17495233LL;
	int8_t x388 = INT8_MIN;
	static uint64_t t63 = 7889023LLU;

	t63 = (((x385*x386)/x387)^x388);

	if (t63 != 18446743019322675251LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x389 = INT16_MAX;
	static int64_t x390 = -1LL;
	int64_t t64 = -224292LL;

	t64 = (((x389*x390)/x391)^x392);

	if (t64 != -5LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x393 = INT16_MIN;
	uint16_t x394 = 18U;
	volatile uint32_t x395 = 1303396U;
	static uint8_t x396 = UINT8_MAX;
	uint32_t t65 = 2719U;

	t65 = (((x393*x394)/x395)^x396);

	if (t65 != 3105U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x397 = -145;
	uint64_t x398 = 3LLU;
	volatile uint64_t x400 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = (((x397*x398)/x399)^x400);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x401 = -7139539LL;
	static int64_t x402 = -12777411LL;
	volatile int32_t x403 = 195552371;
	volatile int64_t t67 = -151090934644794LL;

	t67 = (((x401*x402)/x403)^x404);

	if (t67 != -466499LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x405 = 10711052LLU;
	uint8_t x406 = UINT8_MAX;
	static int32_t x407 = -1;
	int16_t x408 = -1;
	uint64_t t68 = UINT64_MAX;

	t68 = (((x405*x406)/x407)^x408);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x409 = INT32_MIN;
	uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 605545022476019752LLU;
	int8_t x412 = 3;
	volatile uint64_t t69 = 1LLU;

	t69 = (((x409*x410)/x411)^x412);

	if (t69 != 3LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x413 = 4588219586LLU;
	uint64_t x415 = UINT64_MAX;
	static int16_t x416 = -2;
	uint64_t t70 = 161735LLU;

	t70 = (((x413*x414)/x415)^x416);

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x418 = INT8_MAX;
	int32_t x419 = 17;
	int32_t t71 = 1;

	t71 = (((x417*x418)/x419)^x420);

	if (t71 != 489510) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x425 = UINT64_MAX;
	uint32_t x426 = 1U;
	int16_t x428 = -1;
	uint64_t t72 = 6LLU;

	t72 = (((x425*x426)/x427)^x428);

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x431 = 785978069243173129LLU;
	uint64_t x432 = UINT64_MAX;
	uint64_t t73 = UINT64_MAX;

	t73 = (((x429*x430)/x431)^x432);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x433 = -1;
	uint16_t x435 = 7580U;
	volatile int16_t x436 = -1430;
	uint32_t t74 = 611171867U;

	t74 = (((x433*x434)/x435)^x436);

	if (t74 != 4294401840U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x437 = 233U;
	int32_t t75 = 0;

	t75 = (((x437*x438)/x439)^x440);

	if (t75 != -2233) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x453 = INT8_MIN;
	int64_t x455 = -57LL;
	int32_t x456 = INT32_MIN;
	static volatile int64_t t76 = 2524563821739477123LL;

	t76 = (((x453*x454)/x455)^x456);

	if (t76 != -2117312382LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 3571041443LLU;
	static int8_t x467 = -1;
	int32_t x468 = -1;
	uint64_t t77 = UINT64_MAX;

	t77 = (((x465*x466)/x467)^x468);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x469 = -1;
	uint8_t x470 = 8U;
	volatile uint32_t x471 = UINT32_MAX;
	uint16_t x472 = UINT16_MAX;
	uint32_t t78 = 647U;

	t78 = (((x469*x470)/x471)^x472);

	if (t78 != 65535U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x477 = 735651896443LL;
	static uint8_t x478 = 1U;
	uint8_t x479 = 126U;
	volatile int64_t t79 = 9462708775LL;

	t79 = (((x477*x478)/x479)^x480);

	if (t79 != -5838507132LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x481 = INT8_MIN;
	int64_t x482 = 13852537477LL;
	volatile int32_t x483 = -1;
	static int32_t x484 = -872475545;
	volatile int64_t t80 = -13935LL;

	t80 = (((x481*x482)/x483)^x484);

	if (t80 != -1773326149913LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x485 = -1;
	static uint16_t x486 = UINT16_MAX;
	int32_t x487 = INT32_MAX;

	t81 = (((x485*x486)/x487)^x488);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x489 = INT32_MIN;
	static int8_t x491 = INT8_MIN;
	uint64_t x492 = UINT64_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (((x489*x490)/x491)^x492);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x493 = 56862U;
	int8_t x495 = INT8_MIN;
	static volatile int32_t x496 = INT32_MAX;
	uint64_t t83 = 3366263794053717LLU;

	t83 = (((x493*x494)/x495)^x496);

	if (t83 != 2147483647LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x505 = INT16_MAX;
	int64_t x507 = INT64_MIN;
	uint64_t t84 = UINT64_MAX;

	t84 = (((x505*x506)/x507)^x508);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x511 = UINT32_MAX;
	uint64_t x512 = 4217026680248141693LLU;
	volatile uint64_t t85 = 7057LLU;

	t85 = (((x509*x510)/x511)^x512);

	if (t85 != 4217026680248141692LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x517 = -57LL;
	int8_t x519 = INT8_MIN;
	static int8_t x520 = -1;
	volatile int64_t t86 = 145LL;

	t86 = (((x517*x518)/x519)^x520);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x521 = INT16_MIN;
	uint16_t x522 = UINT16_MAX;
	volatile int32_t x523 = -1;
	int8_t x524 = -1;
	int32_t t87 = -393476744;

	t87 = (((x521*x522)/x523)^x524);

	if (t87 != -2147450881) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x525 = -1LL;
	static int16_t x526 = INT16_MIN;
	int64_t x527 = 244494LL;
	int64_t t88 = -6079038595218183LL;

	t88 = (((x525*x526)/x527)^x528);

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x530 = INT8_MAX;
	int64_t x531 = 8LL;
	volatile int64_t t89 = -89805913378LL;

	t89 = (((x529*x530)/x531)^x532);

	if (t89 != -9223372036853735440LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x533 = 1;
	static int64_t x534 = -2408828663611428LL;
	static int64_t x535 = 589471730910637741LL;
	volatile int64_t t90 = 27514155420LL;

	t90 = (((x533*x534)/x535)^x536);

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x537 = -1LL;
	int64_t x538 = 76797LL;
	int32_t x539 = INT32_MIN;
	int32_t x540 = 12310;
	volatile int64_t t91 = -138506483440102639LL;

	t91 = (((x537*x538)/x539)^x540);

	if (t91 != 12310LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x549 = INT16_MIN;
	int8_t x550 = INT8_MIN;
	static uint64_t x551 = 83882866027744LLU;
	int16_t x552 = 1;
	volatile uint64_t t92 = 627536473620127LLU;

	t92 = (((x549*x550)/x551)^x552);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x553 = 41976350784LL;
	static int32_t x555 = INT32_MIN;
	int8_t x556 = -4;

	t93 = (((x553*x554)/x555)^x556);

	if (t93 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x561 = 6;
	int64_t x563 = -1LL;
	static uint64_t t94 = 3836282192618180623LLU;

	t94 = (((x561*x562)/x563)^x564);

	if (t94 != 7992364273718305LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = INT16_MIN;
	int32_t x566 = 2052;
	static int32_t x567 = -1;
	int64_t x568 = INT64_MIN;
	int64_t t95 = -146104LL;

	t95 = (((x565*x566)/x567)^x568);

	if (t95 != -9223372036787535872LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x569 = -1LL;
	int64_t t96 = -33291215295LL;

	t96 = (((x569*x570)/x571)^x572);

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x573 = INT8_MIN;
	volatile uint64_t x574 = 321605LLU;
	int8_t x575 = INT8_MIN;
	volatile uint16_t x576 = 4306U;
	uint64_t t97 = 1724LLU;

	t97 = (((x573*x574)/x575)^x576);

	if (t97 != 4306LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x577 = -1;
	int64_t x578 = -1373LL;
	uint32_t x579 = 10U;
	int32_t x580 = 119;
	volatile int64_t t98 = -1886714686378948LL;

	t98 = (((x577*x578)/x579)^x580);

	if (t98 != 254LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x584 = INT8_MIN;
	volatile int32_t t99 = 107325260;

	t99 = (((x581*x582)/x583)^x584);

	if (t99 != 123) { NG(); } else { ; }
	
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

