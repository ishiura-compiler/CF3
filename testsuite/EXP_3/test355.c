#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MAX;
static uint16_t x4 = 887U;
int16_t x20 = 4629;
int32_t t2 = 100751132;
int8_t x30 = INT8_MAX;
volatile int32_t t8 = 29491;
static uint32_t x103 = 12404U;
uint64_t x105 = 5122960875332297687LLU;
uint8_t x106 = 1U;
uint8_t x139 = UINT8_MAX;
static uint16_t x155 = 4U;
uint64_t t16 = 1368104LLU;
static uint32_t t18 = 2U;
int64_t x173 = INT64_MIN;
int8_t x175 = INT8_MIN;
volatile int32_t t23 = -8;
int16_t x199 = INT16_MIN;
static int64_t x203 = -1LL;
int32_t x215 = -3278453;
int64_t t27 = -2LL;
static uint16_t x221 = UINT16_MAX;
int64_t x230 = 124368LL;
int64_t t30 = -65179LL;
uint32_t x239 = UINT32_MAX;
volatile int8_t x240 = 1;
int64_t x265 = -1LL;
int8_t x269 = INT8_MIN;
uint32_t x275 = UINT32_MAX;
int64_t x276 = 6078376LL;
int32_t x282 = 2;
int32_t x284 = -121;
static int32_t t36 = -29289;
static uint64_t t37 = 176651616LLU;
int16_t x291 = 95;
uint8_t x292 = 1U;
uint64_t t40 = 562586975201530424LLU;
int64_t x333 = -1LL;
int32_t t43 = 294937668;
uint8_t x376 = 30U;
int8_t x382 = INT8_MAX;
uint16_t x383 = 31073U;
int32_t x384 = 3;
static uint16_t x413 = 272U;
int64_t t51 = -139LL;
uint64_t x429 = UINT64_MAX;
uint32_t x434 = 1947094U;
static int8_t x439 = -1;
int32_t x454 = -1;
volatile uint8_t x468 = 14U;
static uint32_t x469 = 15U;
int8_t x480 = -6;
uint32_t x487 = 33413764U;
int64_t x509 = 235597252746246LL;
int32_t x530 = -1;
int64_t t68 = 940457LL;
volatile uint32_t x546 = 2582U;
int16_t x548 = INT16_MIN;
int8_t x561 = -2;
volatile int32_t x562 = INT32_MIN;
volatile int16_t x570 = INT16_MAX;
uint16_t x572 = 1503U;
uint32_t x578 = 817U;
uint32_t x583 = 246207U;
volatile int8_t x609 = -4;
int16_t x621 = -1;
static uint32_t t83 = 15489271U;
uint64_t x661 = UINT64_MAX;
volatile uint64_t t84 = 3208386105347742492LLU;
static volatile uint64_t t89 = 48LLU;
static uint16_t x685 = 8245U;
uint32_t x717 = 17843U;
volatile int32_t x719 = -1;
static uint64_t t97 = 906569877LLU;
int16_t x761 = -97;
uint16_t x763 = 1U;


void f0(void) {
	int64_t x2 = -30394921LL;
	int8_t x3 = -62;
	volatile int64_t t0 = 202937218LL;

	t0 = ((x1-x2)/(x3*x4));

	if (t0 != -39602LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MIN;
	static uint32_t x11 = 128U;
	int16_t x12 = INT16_MIN;
	uint32_t t1 = 4497417U;

	t1 = ((x9-x10)/(x11*x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x17 = INT16_MIN;
	static int16_t x18 = -3262;
	static uint16_t x19 = UINT16_MAX;

	t2 = ((x17-x18)/(x19*x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -442561520207LL;
	int8_t x22 = INT8_MIN;
	int16_t x23 = -1;
	static int64_t x24 = -1LL;
	volatile int64_t t3 = -282945918867694LL;

	t3 = ((x21-x22)/(x23*x24));

	if (t3 != -442561520079LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x29 = INT8_MIN;
	uint32_t x31 = 175U;
	volatile int32_t x32 = INT32_MIN;
	volatile uint32_t t4 = 626984930U;

	t4 = ((x29-x30)/(x31*x32));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MIN;
	volatile uint8_t x39 = UINT8_MAX;
	uint16_t x40 = 31835U;
	uint64_t t5 = 100594080573114LLU;

	t5 = ((x37-x38)/(x39*x40));

	if (t5 != 264LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x53 = -27;
	int64_t x54 = INT64_MIN;
	volatile uint16_t x55 = 1829U;
	static int16_t x56 = -1;
	int64_t t6 = 60LL;

	t6 = ((x53-x54)/(x55*x56));

	if (t6 != -5042849664764776LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x61 = 3126U;
	static int16_t x62 = -6;
	static int8_t x63 = INT8_MIN;
	uint16_t x64 = 7U;
	int32_t t7 = -111766295;

	t7 = ((x61-x62)/(x63*x64));

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x85 = 8001U;
	static int32_t x86 = -1;
	uint16_t x87 = 30U;
	volatile int8_t x88 = INT8_MIN;

	t8 = ((x85-x86)/(x87*x88));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = 1253067LLU;
	int64_t x95 = -1LL;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t9 = 1491731732684844040LLU;

	t9 = ((x93-x94)/(x95*x96));

	if (t9 != 8589934591LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x101 = 137U;
	int32_t x102 = -1;
	int16_t x104 = -1;
	uint32_t t10 = 0U;

	t10 = ((x101-x102)/(x103*x104));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = -1;
	uint64_t t11 = 2938608508LLU;

	t11 = ((x105-x106)/(x107*x108));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x109 = INT16_MAX;
	volatile uint32_t x110 = 17963574U;
	uint8_t x111 = 6U;
	int16_t x112 = INT16_MAX;
	volatile uint32_t t12 = 13528525U;

	t12 = ((x109-x110)/(x111*x112));

	if (t12 != 21754U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x117 = 46519LLU;
	static int16_t x118 = -1;
	uint16_t x119 = 6022U;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t13 = 2398720694902LLU;

	t13 = ((x117-x118)/(x119*x120));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x137 = INT16_MAX;
	volatile uint8_t x138 = 11U;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t14 = -7208584;

	t14 = ((x137-x138)/(x139*x140));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x141 = -6784063512LL;
	volatile int16_t x142 = INT16_MAX;
	int16_t x143 = -1;
	uint32_t x144 = UINT32_MAX;
	int64_t t15 = 32451149767027LL;

	t15 = ((x141-x142)/(x143*x144));

	if (t15 != -6784096279LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x153 = INT16_MAX;
	volatile int32_t x154 = INT32_MAX;
	volatile uint64_t x156 = 737897321LLU;

	t16 = ((x153-x154)/(x155*x156));

	if (t16 != 6249766582LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x157 = INT16_MIN;
	static int16_t x158 = 152;
	int16_t x159 = -1;
	volatile int32_t x160 = -1;
	int32_t t17 = 23;

	t17 = ((x157-x158)/(x159*x160));

	if (t17 != -32920) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x165 = UINT32_MAX;
	static int8_t x166 = -1;
	static volatile int16_t x167 = -4;
	int32_t x168 = -264509;

	t18 = ((x165-x166)/(x167*x168));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	static int16_t x171 = -1;
	int64_t x172 = 24LL;
	volatile int64_t t19 = -4LL;

	t19 = ((x169-x170)/(x171*x172));

	if (t19 != 384307168112803840LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x174 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;
	int64_t t20 = -285764826143LL;

	t20 = ((x173-x174)/(x175*x176));

	if (t20 != 282578800148737LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = UINT32_MAX;
	uint16_t x179 = 32437U;
	volatile int8_t x180 = -1;
	uint32_t t21 = 29U;

	t21 = ((x177-x178)/(x179*x180));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x181 = UINT64_MAX;
	int16_t x182 = -2;
	uint32_t x183 = UINT32_MAX;
	static volatile int8_t x184 = INT8_MIN;
	static volatile uint64_t t22 = 2862954LLU;

	t22 = ((x181-x182)/(x183*x184));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x185 = -11;
	int16_t x186 = 0;
	int16_t x187 = -151;
	volatile int32_t x188 = -8612270;

	t23 = ((x185-x186)/(x187*x188));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x197 = 1189;
	volatile uint16_t x198 = 2U;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t24 = -187;

	t24 = ((x197-x198)/(x199*x200));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x201 = 23862423578546LL;
	volatile uint8_t x202 = UINT8_MAX;
	int16_t x204 = -1;
	int64_t t25 = 52506063559187LL;

	t25 = ((x201-x202)/(x203*x204));

	if (t25 != 23862423578291LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x205 = -964;
	int8_t x206 = -1;
	static int32_t x207 = -1;
	int8_t x208 = INT8_MAX;
	int32_t t26 = 188971;

	t26 = ((x205-x206)/(x207*x208));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x213 = -1;
	int64_t x214 = INT64_MIN;
	int8_t x216 = INT8_MAX;

	t27 = ((x213-x214)/(x215*x216));

	if (t27 != -22152209187LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x222 = 107613U;
	int32_t x223 = INT32_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	volatile uint32_t t28 = 5272450U;

	t28 = ((x221-x222)/(x223*x224));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x225 = 1457420LLU;
	int32_t x226 = 1;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MIN;
	uint64_t t29 = 92627611675LLU;

	t29 = ((x225-x226)/(x227*x228));

	if (t29 != 11386LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x229 = 6133U;
	int32_t x231 = -1;
	int16_t x232 = INT16_MIN;

	t30 = ((x229-x230)/(x231*x232));

	if (t30 != -3LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x237 = -1LL;
	int64_t x238 = INT64_MAX;
	static volatile int64_t t31 = -2773640117203LL;

	t31 = ((x237-x238)/(x239*x240));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = 11721U;
	volatile uint64_t x243 = 4589266501299079LLU;
	int64_t x244 = 381291393248LL;
	uint64_t t32 = 50409LLU;

	t32 = ((x241-x242)/(x243*x244));

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x266 = INT64_MIN;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = -1;
	volatile int64_t t33 = 24317678LL;

	t33 = ((x265-x266)/(x267*x268));

	if (t33 != -140739635871744LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x270 = -68184LL;
	uint8_t x271 = UINT8_MAX;
	static int64_t x272 = -1LL;
	int64_t t34 = -956LL;

	t34 = ((x269-x270)/(x271*x272));

	if (t34 != -266LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x273 = -1;
	int16_t x274 = 2558;
	static volatile int64_t t35 = -1LL;

	t35 = ((x273-x274)/(x275*x276));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x281 = 10459;
	int32_t x283 = -1;

	t36 = ((x281-x282)/(x283*x284));

	if (t36 != 86) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x285 = 10U;
	static uint64_t x286 = 266155791700152LLU;
	uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MAX;

	t37 = ((x285-x286)/(x287*x288));

	if (t37 != 4294905453LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x289 = 2000U;
	static uint64_t x290 = 186947116781989916LLU;
	uint64_t t38 = 10826673252551643LLU;

	t38 = ((x289-x290)/(x291*x292));

	if (t38 != 192208389020290144LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x293 = 4978765692579046LL;
	int16_t x294 = 12;
	static uint64_t x295 = 766620LLU;
	uint8_t x296 = 61U;
	volatile uint64_t t39 = 8674927809772566LLU;

	t39 = ((x293-x294)/(x295*x296));

	if (t39 != 106466188LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x305 = 503866137372730LLU;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = 56320U;
	int32_t x308 = 1;

	t40 = ((x305-x306)/(x307*x308));

	if (t40 != 8946486814LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int16_t x326 = INT16_MAX;
	uint64_t x327 = 3365LLU;
	static uint16_t x328 = UINT16_MAX;
	static volatile uint64_t t41 = 2804212348093509530LLU;

	t41 = ((x325-x326)/(x327*x328));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x334 = 3373181U;
	int8_t x335 = INT8_MAX;
	int32_t x336 = -1;
	volatile int64_t t42 = 958479467001203221LL;

	t42 = ((x333-x334)/(x335*x336));

	if (t42 != 26560LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x337 = INT16_MAX;
	static volatile uint16_t x338 = UINT16_MAX;
	uint8_t x339 = 2U;
	uint8_t x340 = UINT8_MAX;

	t43 = ((x337-x338)/(x339*x340));

	if (t43 != -64) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x361 = 2380867443321LL;
	uint64_t x362 = UINT64_MAX;
	static int64_t x363 = 177130878139546LL;
	int64_t x364 = -1LL;
	uint64_t t44 = 1942LLU;

	t44 = ((x361-x362)/(x363*x364));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	uint8_t x372 = 70U;
	static volatile int32_t t45 = 11679;

	t45 = ((x369-x370)/(x371*x372));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MIN;
	int32_t t46 = -1;

	t46 = ((x373-x374)/(x375*x376));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x381 = -952603395343LL;
	static volatile int64_t t47 = 1741LL;

	t47 = ((x381-x382)/(x383*x384));

	if (t47 != -10218983LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x401 = -9;
	volatile uint16_t x402 = UINT16_MAX;
	int32_t x403 = -1;
	int16_t x404 = INT16_MIN;
	volatile int32_t t48 = -1818;

	t48 = ((x401-x402)/(x403*x404));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x409 = 1387165126LL;
	int64_t x410 = 122401871981123LL;
	static uint8_t x411 = 54U;
	int64_t x412 = 19276LL;
	int64_t t49 = 1631LL;

	t49 = ((x409-x410)/(x411*x412));

	if (t49 != -117590560LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x414 = 870167527;
	uint32_t x415 = 356243U;
	int16_t x416 = -456;
	volatile uint32_t t50 = 1907465U;

	t50 = ((x413-x414)/(x415*x416));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x421 = 1;
	int64_t x422 = INT64_MAX;
	uint16_t x423 = 2U;
	volatile uint32_t x424 = UINT32_MAX;

	t51 = ((x421-x422)/(x423*x424));

	if (t51 != -2147483649LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x430 = 0;
	uint16_t x431 = UINT16_MAX;
	static uint16_t x432 = 212U;
	volatile uint64_t t52 = 14LLU;

	t52 = ((x429-x430)/(x431*x432));

	if (t52 != 1327732413884LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x433 = -1;
	int32_t x435 = 1;
	static int16_t x436 = 61;
	uint32_t t53 = 9914251U;

	t53 = ((x433-x434)/(x435*x436));

	if (t53 != 70377380U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x437 = INT8_MAX;
	uint32_t x438 = 24864582U;
	int8_t x440 = -1;
	volatile uint32_t t54 = 175U;

	t54 = ((x437-x438)/(x439*x440));

	if (t54 != 4270102841U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x453 = INT16_MIN;
	uint64_t x455 = 4544037LLU;
	uint64_t x456 = 18685204310LLU;
	volatile uint64_t t55 = 522494797949593LLU;

	t55 = ((x453-x454)/(x455*x456));

	if (t55 != 217LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x457 = 1U;
	uint32_t x458 = UINT32_MAX;
	static int16_t x459 = -3;
	uint32_t x460 = UINT32_MAX;
	static volatile uint32_t t56 = 13630U;

	t56 = ((x457-x458)/(x459*x460));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x461 = UINT64_MAX;
	int8_t x462 = INT8_MIN;
	volatile uint64_t x463 = 593LLU;
	int32_t x464 = INT32_MIN;
	uint64_t t57 = 0LLU;

	t57 = ((x461-x462)/(x463*x464));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x465 = INT8_MIN;
	static int8_t x466 = -17;
	static int32_t x467 = -49;
	volatile int32_t t58 = -1019825556;

	t58 = ((x465-x466)/(x467*x468));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x470 = 15271445371778438LL;
	static int8_t x471 = -1;
	int32_t x472 = 3311;
	int64_t t59 = -154093LL;

	t59 = ((x469-x470)/(x471*x472));

	if (t59 != 4612336264505LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x477 = 52;
	int32_t x478 = -90;
	int32_t x479 = -1;
	int32_t t60 = 1;

	t60 = ((x477-x478)/(x479*x480));

	if (t60 != 23) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x485 = 6667U;
	uint16_t x486 = UINT16_MAX;
	static uint64_t x488 = 3579076201549405LLU;
	static volatile uint64_t t61 = 78300661100264LLU;

	t61 = ((x485-x486)/(x487*x488));

	if (t61 != 111LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MIN;
	int32_t x491 = -193171859;
	volatile int32_t x492 = -1;
	volatile int32_t t62 = -15186447;

	t62 = ((x489-x490)/(x491*x492));

	if (t62 != -11) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x505 = INT16_MIN;
	int8_t x506 = INT8_MAX;
	uint16_t x507 = UINT16_MAX;
	int16_t x508 = -2;
	volatile int32_t t63 = -27744411;

	t63 = ((x505-x506)/(x507*x508));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x510 = 813U;
	volatile int32_t x511 = 62824894;
	int64_t x512 = -1LL;
	volatile int64_t t64 = -26500LL;

	t64 = ((x509-x510)/(x511*x512));

	if (t64 != -3750062LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x513 = 17264929319LLU;
	volatile int32_t x514 = -365;
	int16_t x515 = -1898;
	uint16_t x516 = 1U;
	volatile uint64_t t65 = 285598LLU;

	t65 = ((x513-x514)/(x515*x516));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x517 = UINT16_MAX;
	uint32_t x518 = UINT32_MAX;
	static uint8_t x519 = 121U;
	int32_t x520 = -1;
	static volatile uint32_t t66 = 88588781U;

	t66 = ((x517-x518)/(x519*x520));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x529 = 893142U;
	int64_t x531 = 3955818LL;
	uint16_t x532 = 60U;
	int64_t t67 = -334945161234LL;

	t67 = ((x529-x530)/(x531*x532));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x537 = 21U;
	int16_t x538 = INT16_MIN;
	uint8_t x539 = 1U;
	int64_t x540 = -1LL;

	t68 = ((x537-x538)/(x539*x540));

	if (t68 != -32789LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x545 = 52U;
	volatile uint32_t x547 = UINT32_MAX;
	volatile uint32_t t69 = 86U;

	t69 = ((x545-x546)/(x547*x548));

	if (t69 != 131071U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x549 = UINT16_MAX;
	uint8_t x550 = UINT8_MAX;
	int64_t x551 = -1LL;
	uint32_t x552 = UINT32_MAX;
	int64_t t70 = 10734836685LL;

	t70 = ((x549-x550)/(x551*x552));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x563 = INT16_MAX;
	int32_t x564 = 2;
	volatile int32_t t71 = -7654341;

	t71 = ((x561-x562)/(x563*x564));

	if (t71 != 32769) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x569 = 7;
	int8_t x571 = INT8_MIN;
	int32_t t72 = -983;

	t72 = ((x569-x570)/(x571*x572));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x577 = INT8_MAX;
	int16_t x579 = INT16_MAX;
	int64_t x580 = 38951129LL;
	volatile int64_t t73 = -1141548LL;

	t73 = ((x577-x578)/(x579*x580));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x581 = 519U;
	int32_t x582 = INT32_MAX;
	int32_t x584 = 1;
	uint32_t t74 = 1622U;

	t74 = ((x581-x582)/(x583*x584));

	if (t74 != 8722U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x601 = 829325LLU;
	int16_t x602 = INT16_MIN;
	int64_t x603 = 1562044LL;
	static int8_t x604 = -1;
	static volatile uint64_t t75 = 70152882374127LLU;

	t75 = ((x601-x602)/(x603*x604));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x605 = 659;
	int16_t x606 = -1;
	uint16_t x607 = 904U;
	volatile uint32_t x608 = UINT32_MAX;
	volatile uint32_t t76 = 8942153U;

	t76 = ((x605-x606)/(x607*x608));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x610 = -1;
	static int16_t x611 = INT16_MAX;
	uint32_t x612 = 28U;
	uint32_t t77 = 144381U;

	t77 = ((x609-x610)/(x611*x612));

	if (t77 != 4681U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x613 = UINT8_MAX;
	int8_t x614 = INT8_MIN;
	uint8_t x615 = 3U;
	int8_t x616 = -1;
	volatile int32_t t78 = -3332398;

	t78 = ((x613-x614)/(x615*x616));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x622 = -1;
	uint32_t x623 = UINT32_MAX;
	volatile uint64_t x624 = 73633LLU;
	volatile uint64_t t79 = 31LLU;

	t79 = ((x621-x622)/(x623*x624));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x633 = INT8_MAX;
	int16_t x634 = INT16_MIN;
	static uint64_t x635 = 15750LLU;
	uint64_t x636 = 32026481LLU;
	volatile uint64_t t80 = 1843820865279710LLU;

	t80 = ((x633-x634)/(x635*x636));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x641 = INT32_MAX;
	uint16_t x642 = 3U;
	int8_t x643 = -1;
	static int16_t x644 = INT16_MIN;
	int32_t t81 = -23103;

	t81 = ((x641-x642)/(x643*x644));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x649 = UINT16_MAX;
	uint16_t x650 = 95U;
	int8_t x651 = INT8_MIN;
	static int16_t x652 = INT16_MAX;
	int32_t t82 = 12;

	t82 = ((x649-x650)/(x651*x652));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x657 = 116U;
	uint32_t x658 = 5116780U;
	int8_t x659 = -12;
	uint16_t x660 = UINT16_MAX;

	t83 = ((x657-x658)/(x659*x660));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x662 = 54963U;
	int8_t x663 = INT8_MAX;
	volatile int16_t x664 = -14;

	t84 = ((x661-x662)/(x663*x664));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x665 = 56LL;
	volatile int16_t x666 = -1;
	volatile int32_t x667 = INT32_MAX;
	static int8_t x668 = -1;
	static volatile int64_t t85 = -841722568914790928LL;

	t85 = ((x665-x666)/(x667*x668));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x669 = 7391LLU;
	volatile uint16_t x670 = UINT16_MAX;
	int32_t x671 = 1;
	int16_t x672 = -1;
	volatile uint64_t t86 = 2746LLU;

	t86 = ((x669-x670)/(x671*x672));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x673 = 162U;
	static volatile int32_t x674 = INT32_MAX;
	uint16_t x675 = UINT16_MAX;
	volatile int16_t x676 = -229;
	uint32_t t87 = 14587U;

	t87 = ((x673-x674)/(x675*x676));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x677 = 3;
	uint32_t x678 = UINT32_MAX;
	uint64_t x679 = 151156989978375LLU;
	int32_t x680 = INT32_MIN;
	volatile uint64_t t88 = 5LLU;

	t88 = ((x677-x678)/(x679*x680));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x681 = 35;
	static volatile uint64_t x682 = 977968222410484LLU;
	uint64_t x683 = 63LLU;
	int8_t x684 = 6;

	t89 = ((x681-x682)/(x683*x684));

	if (t89 != 48798323030389262LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x686 = 759U;
	static int16_t x687 = INT16_MIN;
	uint32_t x688 = 3811689U;
	uint32_t t90 = 54187U;

	t90 = ((x685-x686)/(x687*x688));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x689 = INT64_MIN;
	int8_t x690 = -60;
	static uint32_t x691 = 100U;
	static uint32_t x692 = 39U;
	volatile int64_t t91 = -134099470003051LL;

	t91 = ((x689-x690)/(x691*x692));

	if (t91 != -2364967188937121LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x701 = UINT32_MAX;
	uint16_t x702 = 18U;
	static int32_t x703 = INT32_MIN;
	int64_t x704 = -1LL;
	int64_t t92 = -7LL;

	t92 = ((x701-x702)/(x703*x704));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x718 = 66491138200227LLU;
	int8_t x720 = INT8_MAX;
	volatile uint64_t t93 = 922LLU;

	t93 = ((x717-x718)/(x719*x720));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x721 = -1;
	static uint32_t x722 = 1135U;
	uint32_t x723 = UINT32_MAX;
	int32_t x724 = INT32_MIN;
	volatile uint32_t t94 = 4168U;

	t94 = ((x721-x722)/(x723*x724));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x729 = 15LLU;
	static int32_t x730 = -1;
	volatile int8_t x731 = INT8_MIN;
	int8_t x732 = 1;
	uint64_t t95 = 8945835596422332907LLU;

	t95 = ((x729-x730)/(x731*x732));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x737 = UINT32_MAX;
	static int32_t x738 = -1;
	int64_t x739 = INT64_MIN;
	volatile uint64_t x740 = 1731349699555151LLU;
	static uint64_t t96 = 3795299854731LLU;

	t96 = ((x737-x738)/(x739*x740));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x741 = INT32_MIN;
	static uint32_t x742 = 1U;
	volatile uint64_t x743 = UINT64_MAX;
	int64_t x744 = 93183426774LL;

	t97 = ((x741-x742)/(x743*x744));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x745 = INT32_MAX;
	uint64_t x746 = 483786LLU;
	volatile uint8_t x747 = 2U;
	int32_t x748 = 55;
	uint64_t t98 = 2059342294806017515LLU;

	t98 = ((x745-x746)/(x747*x748));

	if (t98 != 19518180LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x762 = UINT64_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile uint64_t t99 = 1692492683194143LLU;

	t99 = ((x761-x762)/(x763*x764));

	if (t99 != 4294967296LLU) { NG(); } else { ; }
	
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

