#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x33 = 0U;
uint8_t x34 = UINT8_MAX;
uint32_t x35 = 354395980U;
uint64_t t4 = 3031768310083815773LLU;
volatile uint64_t x46 = 1394883625LLU;
volatile uint64_t t6 = 968132504LLU;
uint32_t x63 = 91364U;
uint32_t t7 = 7440824U;
uint32_t x79 = UINT32_MAX;
int32_t x80 = INT32_MAX;
uint64_t x87 = UINT64_MAX;
uint64_t t10 = 8202370884885229870LLU;
uint32_t x104 = 122808U;
static volatile int32_t t16 = -935;
int16_t x146 = INT16_MIN;
volatile int16_t x151 = INT16_MAX;
uint8_t x152 = 1U;
int16_t x158 = INT16_MIN;
volatile int8_t x160 = INT8_MIN;
uint64_t x167 = 7282887561LLU;
int32_t x170 = INT32_MIN;
int32_t x172 = INT32_MIN;
int64_t x181 = INT64_MIN;
int64_t x182 = INT64_MIN;
int32_t x183 = -578;
static volatile int64_t t27 = 511695551419408LL;
static volatile uint64_t x202 = UINT64_MAX;
uint32_t x205 = 20U;
static volatile int16_t x208 = INT16_MIN;
int8_t x210 = INT8_MIN;
int32_t x227 = 1;
uint32_t x228 = 3U;
int16_t x232 = INT16_MIN;
uint64_t x248 = UINT64_MAX;
volatile int16_t x264 = INT16_MAX;
int64_t x268 = INT64_MAX;
uint64_t x269 = 16069492LLU;
int64_t x280 = 1571030283LL;
int64_t x287 = 124553017LL;
int32_t x288 = INT32_MAX;
volatile uint8_t x291 = UINT8_MAX;
int32_t x299 = INT32_MAX;
int32_t t42 = 0;
int64_t x303 = INT64_MIN;
int64_t t43 = -176733LL;
static int16_t x305 = INT16_MIN;
int16_t x308 = 224;
volatile int64_t t44 = 15136419398801LL;
volatile uint64_t x309 = UINT64_MAX;
int32_t x310 = -51461;
uint64_t t45 = 893LLU;
int8_t x350 = INT8_MAX;
uint16_t x352 = UINT16_MAX;
int64_t x353 = INT64_MIN;
int16_t x357 = INT16_MIN;
uint16_t x380 = UINT16_MAX;
volatile int32_t x389 = -1;
volatile int64_t t56 = 410273736331192LL;
uint8_t x407 = 51U;
int8_t x424 = -28;
int8_t x428 = INT8_MIN;
int32_t t63 = 4094782;
volatile int64_t t64 = -111321320831664LL;
int8_t x450 = -4;
int64_t x453 = INT64_MAX;
static volatile uint8_t x457 = 13U;
int16_t x459 = INT16_MAX;
volatile uint64_t t67 = 57922442836LLU;
uint8_t x461 = 11U;
uint8_t x486 = UINT8_MAX;
volatile int64_t t71 = 120389613154162LL;
int64_t x506 = INT64_MIN;
uint64_t t73 = 5100LLU;
int64_t x515 = 217021240962516146LL;
uint16_t x518 = 11U;
int8_t x524 = INT8_MIN;
int32_t t77 = -355151403;
volatile int8_t x534 = INT8_MIN;
uint32_t t79 = 783U;
volatile int32_t x538 = -6564;
uint32_t x542 = UINT32_MAX;
uint64_t x546 = 980583718723LLU;
uint8_t x550 = 4U;
volatile int8_t x552 = -1;
volatile int16_t x554 = INT16_MAX;
int64_t x559 = INT64_MAX;
static int16_t x560 = INT16_MAX;
static uint32_t x578 = 530U;
uint16_t x605 = 5U;
int8_t x608 = INT8_MIN;
static int8_t x616 = 1;
uint64_t t93 = 380927LLU;
static int16_t x623 = INT16_MAX;
int16_t x624 = -1;
uint64_t x628 = 22840716911LLU;
volatile uint64_t t96 = 2910296599511LLU;
int32_t x641 = -463886257;
uint8_t x644 = 3U;


void f0(void) {
	uint16_t x1 = 3136U;
	uint8_t x2 = 27U;
	uint16_t x3 = UINT16_MAX;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 84753;

	t0 = (x1/((x2-x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x21 = -10;
	int64_t x22 = -6241274LL;
	static volatile uint8_t x23 = 7U;
	volatile int64_t x24 = -1LL;
	int64_t t1 = -1LL;

	t1 = (x21/((x22-x23)&x24));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x29 = 2798U;
	static volatile int16_t x30 = -5;
	int16_t x31 = INT16_MAX;
	uint16_t x32 = 879U;
	static uint32_t t2 = 337U;

	t2 = (x29/((x30-x31)&x32));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x36 = 1;
	static uint32_t t3 = 131436966U;

	t3 = (x33/((x34-x35)&x36));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x41 = INT64_MIN;
	uint64_t x42 = 110974LLU;
	volatile int32_t x43 = 11307902;
	int32_t x44 = INT32_MIN;

	t4 = (x41/((x42-x43)&x44));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x45 = 101U;
	volatile int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MAX;
	uint64_t t5 = 15778947162185595LLU;

	t5 = (x45/((x46-x47)&x48));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x53 = -58;
	static volatile uint64_t x54 = 66358032032LLU;
	volatile int64_t x55 = INT64_MIN;
	int8_t x56 = -1;

	t6 = (x53/((x54-x55)&x56));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = 1908U;
	uint32_t x62 = 0U;
	static volatile uint16_t x64 = 1213U;

	t7 = (x61/((x62-x63)&x64));

	if (t7 != 68U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x77 = -1;
	int16_t x78 = INT16_MIN;
	uint32_t t8 = 279972U;

	t8 = (x77/((x78-x79)&x80));

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MAX;
	int16_t x84 = -1;
	static volatile int32_t t9 = 3070352;

	t9 = (x81/((x82-x83)&x84));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x85 = INT16_MIN;
	int32_t x86 = 671222;
	static int64_t x88 = -1LL;

	t10 = (x85/((x86-x87)&x88));

	if (t10 != 27482288410423LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x89 = INT8_MIN;
	static uint16_t x90 = 2038U;
	int64_t x91 = INT64_MAX;
	uint16_t x92 = UINT16_MAX;
	static int64_t t11 = -902404289206869891LL;

	t11 = (x89/((x90-x91)&x92));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = -314106;
	static int8_t x95 = -1;
	volatile uint64_t x96 = 207575LLU;
	volatile uint64_t t12 = 21327512782858LLU;

	t12 = (x93/((x94-x95)&x96));

	if (t12 != 90068914020075LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x97 = 103031404U;
	uint64_t x98 = 1551348843873285520LLU;
	int64_t x99 = 68104011526280LL;
	uint64_t x100 = 752529326360130LLU;
	uint64_t t13 = 310LLU;

	t13 = (x97/((x98-x99)&x100));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MIN;
	int64_t x103 = INT64_MIN;
	volatile int64_t t14 = -166933106866LL;

	t14 = (x101/((x102-x103)&x104));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x117 = INT8_MIN;
	uint16_t x118 = UINT16_MAX;
	int64_t x119 = -449783901036256403LL;
	int8_t x120 = -1;
	volatile int64_t t15 = 35LL;

	t15 = (x117/((x118-x119)&x120));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x125 = 19;
	static int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -1;

	t16 = (x125/((x126-x127)&x128));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x141 = 13446LLU;
	int8_t x142 = 0;
	static int32_t x143 = -46787;
	int32_t x144 = 3915587;
	volatile uint64_t t17 = 120670852564LLU;

	t17 = (x141/((x142-x143)&x144));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x145 = -359717404;
	volatile int64_t x147 = INT64_MIN;
	int64_t x148 = -34468746786415LL;
	volatile int64_t t18 = -389078100LL;

	t18 = (x145/((x146-x147)&x148));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x149 = 9U;
	volatile int16_t x150 = -2;
	int32_t t19 = 30;

	t19 = (x149/((x150-x151)&x152));

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	static volatile int64_t t20 = -116880LL;

	t20 = (x153/((x154-x155)&x156));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x157 = UINT16_MAX;
	volatile int16_t x159 = 1;
	int32_t t21 = 139955;

	t21 = (x157/((x158-x159)&x160));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x161 = INT32_MAX;
	volatile uint16_t x162 = 27U;
	int32_t x163 = 1333;
	int32_t x164 = INT32_MAX;
	static volatile int32_t t22 = -2556;

	t22 = (x161/((x162-x163)&x164));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	int32_t x168 = INT32_MAX;
	uint64_t t23 = 4747875193LLU;

	t23 = (x165/((x166-x167)&x168));

	if (t23 != 14113299248LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x169 = INT64_MIN;
	volatile uint64_t x171 = 1367139444753124831LLU;
	volatile uint64_t t24 = 26596LLU;

	t24 = (x169/((x170-x171)&x172));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x174 = 241U;
	int32_t x175 = -1;
	volatile int64_t x176 = INT64_MAX;
	int64_t t25 = 24645LL;

	t25 = (x173/((x174-x175)&x176));

	if (t25 != -8873899LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x184 = UINT32_MAX;
	volatile int64_t t26 = -4LL;

	t26 = (x181/((x182-x183)&x184));

	if (t26 != -15957391067222795LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x197 = INT64_MAX;
	int32_t x198 = -296;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = -1;

	t27 = (x197/((x198-x199)&x200));

	if (t27 != 284040774724525LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x201 = -1;
	int64_t x203 = 10LL;
	int32_t x204 = INT32_MIN;
	static volatile uint64_t t28 = 2008308506LLU;

	t28 = (x201/((x202-x203)&x204));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x206 = 61811076663014263LL;
	volatile uint16_t x207 = 1479U;
	static volatile int64_t t29 = 398LL;

	t29 = (x205/((x206-x207)&x208));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x209 = -13003;
	static int16_t x211 = 8804;
	uint16_t x212 = UINT16_MAX;
	int32_t t30 = -4835;

	t30 = (x209/((x210-x211)&x212));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x225 = 445U;
	static uint8_t x226 = UINT8_MAX;
	uint32_t t31 = 28022992U;

	t31 = (x225/((x226-x227)&x228));

	if (t31 != 222U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x229 = 6;
	uint16_t x230 = UINT16_MAX;
	uint16_t x231 = 31027U;
	int32_t t32 = -114616;

	t32 = (x229/((x230-x231)&x232));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x245 = 13;
	uint8_t x246 = 38U;
	int16_t x247 = 1;
	volatile uint64_t t33 = 322949963125830LLU;

	t33 = (x245/((x246-x247)&x248));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x257 = 1560696348U;
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -47521930LL;
	volatile int64_t t34 = 766423406185511LL;

	t34 = (x257/((x258-x259)&x260));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x261 = 20U;
	volatile int16_t x262 = INT16_MIN;
	static int16_t x263 = -1802;
	int32_t t35 = -1012;

	t35 = (x261/((x262-x263)&x264));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x265 = 4;
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	int64_t t36 = 192947818076279577LL;

	t36 = (x265/((x266-x267)&x268));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x270 = INT16_MAX;
	int32_t x271 = -21084;
	uint32_t x272 = UINT32_MAX;
	uint64_t t37 = 21133567848408987LLU;

	t37 = (x269/((x270-x271)&x272));

	if (t37 != 298LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x273 = -1;
	int32_t x274 = -834854;
	static uint8_t x275 = 1U;
	int16_t x276 = INT16_MAX;
	int32_t t38 = 103707852;

	t38 = (x273/((x274-x275)&x276));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x277 = -1;
	static uint16_t x278 = 354U;
	static int64_t x279 = -6399064131955LL;
	int64_t t39 = -865757LL;

	t39 = (x277/((x278-x279)&x280));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x285 = -1LL;
	int16_t x286 = 1569;
	volatile int64_t t40 = -380505580199598061LL;

	t40 = (x285/((x286-x287)&x288));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x289 = UINT16_MAX;
	uint64_t x290 = 40896LLU;
	uint32_t x292 = UINT32_MAX;
	static uint64_t t41 = 3640389090769LLU;

	t41 = (x289/((x290-x291)&x292));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = INT8_MAX;
	int32_t x300 = -47123044;

	t42 = (x297/((x298-x299)&x300));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	uint32_t x304 = 1680543U;

	t43 = (x301/((x302-x303)&x304));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x306 = 36U;
	int64_t x307 = 32486LL;

	t44 = (x305/((x306-x307)&x308));

	if (t44 != -1024LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x311 = 64U;
	int64_t x312 = -1LL;

	t45 = (x309/((x310-x311)&x312));

	if (t45 != 4295018821LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x313 = -1;
	volatile uint64_t x314 = 268399081768365LLU;
	volatile uint16_t x315 = 15681U;
	static uint16_t x316 = UINT16_MAX;
	uint64_t t46 = 7786888LLU;

	t46 = (x313/((x314-x315)&x316));

	if (t46 != 8556003744763242LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x321 = 6094LLU;
	int64_t x322 = 503LL;
	int32_t x323 = INT32_MIN;
	uint16_t x324 = 22U;
	volatile uint64_t t47 = 15649104LLU;

	t47 = (x321/((x322-x323)&x324));

	if (t47 != 277LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x325 = 3U;
	int8_t x326 = INT8_MIN;
	static uint64_t x327 = UINT64_MAX;
	int8_t x328 = -1;
	uint64_t t48 = 121056320LLU;

	t48 = (x325/((x326-x327)&x328));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x349 = INT8_MIN;
	static int16_t x351 = INT16_MIN;
	int32_t t49 = 10682569;

	t49 = (x349/((x350-x351)&x352));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x354 = 1749896087918LL;
	int8_t x355 = -51;
	static int16_t x356 = 766;
	int64_t t50 = -2100078LL;

	t50 = (x353/((x354-x355)&x356));

	if (t50 != -57646075230342348LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x358 = 1459968584931LLU;
	int64_t x359 = -31LL;
	int32_t x360 = 6;
	volatile uint64_t t51 = 522995052752868LLU;

	t51 = (x357/((x358-x359)&x360));

	if (t51 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x365 = INT64_MIN;
	static uint16_t x366 = 11U;
	volatile int64_t x367 = INT64_MAX;
	int8_t x368 = 5;
	static int64_t t52 = -103034934716633127LL;

	t52 = (x365/((x366-x367)&x368));

	if (t52 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x377 = INT8_MAX;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = -2541;
	int32_t t53 = 90715498;

	t53 = (x377/((x378-x379)&x380));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x390 = 99016LL;
	volatile uint32_t x391 = 3500U;
	static int32_t x392 = INT32_MAX;
	static int64_t t54 = -4930030LL;

	t54 = (x389/((x390-x391)&x392));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x393 = INT64_MAX;
	static uint16_t x394 = 2U;
	uint8_t x395 = 79U;
	int16_t x396 = -1;
	int64_t t55 = 53429LL;

	t55 = (x393/((x394-x395)&x396));

	if (t55 != -119784052426685400LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x401 = 27885229787LL;
	volatile int8_t x402 = INT8_MAX;
	int16_t x403 = INT16_MIN;
	volatile int16_t x404 = 13208;

	t56 = (x401/((x402-x403)&x404));

	if (t56 != 1161884574LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x405 = INT32_MIN;
	uint64_t x406 = 458658013409614650LLU;
	volatile int32_t x408 = -1;
	uint64_t t57 = 1034009LLU;

	t57 = (x405/((x406-x407)&x408));

	if (t57 != 40LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x413 = 11208LL;
	volatile uint16_t x414 = 107U;
	uint32_t x415 = 1U;
	static int16_t x416 = INT16_MAX;
	int64_t t58 = 2490876LL;

	t58 = (x413/((x414-x415)&x416));

	if (t58 != 105LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x417 = -1LL;
	volatile int64_t x418 = INT64_MIN;
	uint64_t x419 = 996227336483882481LLU;
	volatile uint16_t x420 = 1U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x417/((x418-x419)&x420));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x421 = -1;
	volatile int8_t x422 = 0;
	uint8_t x423 = UINT8_MAX;
	volatile int32_t t60 = 104771;

	t60 = (x421/((x422-x423)&x424));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x425 = INT8_MAX;
	uint16_t x426 = UINT16_MAX;
	uint8_t x427 = 18U;
	static int32_t t61 = -1;

	t61 = (x425/((x426-x427)&x428));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x433 = 3;
	uint64_t x434 = 63577460732LLU;
	static int64_t x435 = INT64_MIN;
	int64_t x436 = INT64_MAX;
	uint64_t t62 = 1646814LLU;

	t62 = (x433/((x434-x435)&x436));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x437 = INT16_MIN;
	volatile int8_t x438 = INT8_MIN;
	int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MAX;

	t63 = (x437/((x438-x439)&x440));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x445 = 13527926LL;
	uint16_t x446 = 10232U;
	int16_t x447 = INT16_MIN;
	int64_t x448 = 29121395403LL;

	t64 = (x445/((x446-x447)&x448));

	if (t64 != 1519LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x449 = 1723951398520LL;
	static volatile int16_t x451 = 78;
	static int16_t x452 = -1;
	volatile int64_t t65 = -21791158092494LL;

	t65 = (x449/((x450-x451)&x452));

	if (t65 != -21023797542LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x454 = -1LL;
	volatile int32_t x455 = INT32_MAX;
	int64_t x456 = INT64_MAX;
	volatile int64_t t66 = 4485396LL;

	t66 = (x453/((x454-x455)&x456));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x458 = UINT64_MAX;
	uint32_t x460 = 17319544U;

	t67 = (x457/((x458-x459)&x460));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x462 = UINT8_MAX;
	int8_t x463 = INT8_MIN;
	int16_t x464 = 47;
	int32_t t68 = -598344;

	t68 = (x461/((x462-x463)&x464));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x477 = 426U;
	int8_t x478 = 0;
	uint8_t x479 = UINT8_MAX;
	int8_t x480 = INT8_MIN;
	volatile uint32_t t69 = 1650277808U;

	t69 = (x477/((x478-x479)&x480));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x485 = INT64_MIN;
	uint64_t x487 = 8890664322LLU;
	int8_t x488 = INT8_MIN;
	static uint64_t t70 = 172LLU;

	t70 = (x485/((x486-x487)&x488));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x493 = INT16_MIN;
	volatile int32_t x494 = INT32_MIN;
	int8_t x495 = -6;
	int64_t x496 = -2833032LL;

	t71 = (x493/((x494-x495)&x496));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x497 = -1;
	volatile int16_t x498 = -3530;
	int64_t x499 = INT64_MIN;
	int64_t x500 = -2372LL;
	int64_t t72 = -283113LL;

	t72 = (x497/((x498-x499)&x500));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x505 = INT8_MIN;
	static uint64_t x507 = 43636199991LLU;
	int16_t x508 = INT16_MIN;

	t73 = (x505/((x506-x507)&x508));

	if (t73 != 2LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x513 = INT16_MIN;
	static int32_t x514 = INT32_MIN;
	static volatile int32_t x516 = INT32_MIN;
	volatile int64_t t74 = 16892LL;

	t74 = (x513/((x514-x515)&x516));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x517 = UINT8_MAX;
	int64_t x519 = 142403687823756LL;
	uint16_t x520 = 25U;
	int64_t t75 = 1421711LL;

	t75 = (x517/((x518-x519)&x520));

	if (t75 != 10LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x521 = 631698LLU;
	uint64_t x522 = 56639255220LLU;
	uint8_t x523 = 1U;
	uint64_t t76 = 481826536867LLU;

	t76 = (x521/((x522-x523)&x524));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x525 = INT32_MIN;
	volatile int32_t x526 = 49903;
	int32_t x527 = -1;
	uint8_t x528 = 40U;

	t77 = (x525/((x526-x527)&x528));

	if (t77 != -67108864) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x529 = -4;
	uint64_t x530 = UINT64_MAX;
	int16_t x531 = 45;
	uint16_t x532 = 10484U;
	volatile uint64_t t78 = 7679238490076LLU;

	t78 = (x529/((x530-x531)&x532));

	if (t78 != 1765576576733303LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x533 = -21;
	uint32_t x535 = UINT32_MAX;
	static int8_t x536 = INT8_MAX;

	t79 = (x533/((x534-x535)&x536));

	if (t79 != 4294967275U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x537 = -3377857LL;
	int16_t x539 = INT16_MIN;
	int8_t x540 = -1;
	volatile int64_t t80 = 235298LL;

	t80 = (x537/((x538-x539)&x540));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x541 = UINT64_MAX;
	volatile uint16_t x543 = UINT16_MAX;
	static volatile int8_t x544 = -2;
	static uint64_t t81 = 610066898146914442LLU;

	t81 = (x541/((x542-x543)&x544));

	if (t81 != 4295032833LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x545 = INT32_MAX;
	int64_t x547 = -339181511LL;
	uint8_t x548 = 27U;
	uint64_t t82 = 66765795185770656LLU;

	t82 = (x545/((x546-x547)&x548));

	if (t82 != 214748364LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x549 = 14U;
	static volatile uint8_t x551 = UINT8_MAX;
	volatile int32_t t83 = 10;

	t83 = (x549/((x550-x551)&x552));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x553 = UINT64_MAX;
	volatile int8_t x555 = INT8_MIN;
	int16_t x556 = INT16_MAX;
	static uint64_t t84 = 247974710354655LLU;

	t84 = (x553/((x554-x555)&x556));

	if (t84 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x557 = 59U;
	volatile uint8_t x558 = 46U;
	volatile int64_t t85 = -93LL;

	t85 = (x557/((x558-x559)&x560));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x561 = 3006U;
	int64_t x562 = INT64_MIN;
	static int32_t x563 = INT32_MIN;
	volatile int64_t x564 = 331565722229773959LL;
	int64_t t86 = -144LL;

	t86 = (x561/((x562-x563)&x564));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x565 = INT32_MIN;
	int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MIN;
	int16_t x568 = INT16_MIN;
	volatile int64_t t87 = 1202204667LL;

	t87 = (x565/((x566-x567)&x568));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x577 = 11167U;
	int64_t x579 = -1LL;
	int16_t x580 = -126;
	int64_t t88 = 144LL;

	t88 = (x577/((x578-x579)&x580));

	if (t88 != 21LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x589 = 115;
	int8_t x590 = 1;
	uint8_t x591 = UINT8_MAX;
	uint16_t x592 = UINT16_MAX;
	int32_t t89 = 44539226;

	t89 = (x589/((x590-x591)&x592));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x593 = -61946953026LL;
	int64_t x594 = -1LL;
	int8_t x595 = INT8_MIN;
	uint64_t x596 = 535710248120187LLU;
	static volatile uint64_t t90 = 837876874LLU;

	t90 = (x593/((x594-x595)&x596));

	if (t90 != 149973528550915435LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x597 = INT8_MAX;
	int8_t x598 = -10;
	static uint16_t x599 = UINT16_MAX;
	uint64_t x600 = 4828736LLU;
	static volatile uint64_t t91 = 15292LLU;

	t91 = (x597/((x598-x599)&x600));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x606 = 434680589262252990LL;
	static volatile uint8_t x607 = UINT8_MAX;
	static volatile int64_t t92 = 17775587314018921LL;

	t92 = (x605/((x606-x607)&x608));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x613 = 995LLU;
	int64_t x614 = 8113358LL;
	int8_t x615 = INT8_MAX;

	t93 = (x613/((x614-x615)&x616));

	if (t93 != 995LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x617 = -116249523;
	uint32_t x618 = 157531U;
	int16_t x619 = -1;
	int16_t x620 = INT16_MAX;
	uint32_t t94 = 1586636737U;

	t94 = (x617/((x618-x619)&x620));

	if (t94 != 157925U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x621 = 0LL;
	int64_t x622 = -8991578664713988LL;
	volatile int64_t t95 = 3444LL;

	t95 = (x621/((x622-x623)&x624));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x625 = 24;
	volatile int64_t x626 = -17404899808682136LL;
	static int8_t x627 = -11;

	t96 = (x625/((x626-x627)&x628));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x629 = 69U;
	volatile int32_t x630 = INT32_MIN;
	static uint32_t x631 = 8326825U;
	static volatile uint64_t x632 = 35920550717271160LLU;
	volatile uint64_t t97 = 176LLU;

	t97 = (x629/((x630-x631)&x632));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x642 = INT16_MIN;
	static uint8_t x643 = 51U;
	int32_t t98 = -1;

	t98 = (x641/((x642-x643)&x644));

	if (t98 != -463886257) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x649 = INT32_MIN;
	int32_t x650 = 53794;
	static int16_t x651 = -12512;
	uint16_t x652 = UINT16_MAX;
	int32_t t99 = 171207336;

	t99 = (x649/((x650-x651)&x652));

	if (t99 != -2788939) { NG(); } else { ; }
	
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

