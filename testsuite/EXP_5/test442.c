#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -13289609LL;
int8_t x6 = INT8_MIN;
uint32_t x23 = UINT32_MAX;
uint64_t x25 = UINT64_MAX;
uint64_t x31 = 12354329708LLU;
int16_t x40 = -1;
volatile int32_t t9 = 193121;
int32_t x65 = -3;
volatile uint16_t x66 = 13983U;
volatile int64_t x69 = INT64_MAX;
int64_t t13 = INT64_MAX;
volatile int32_t x76 = -1;
volatile uint64_t x77 = 2676LLU;
int16_t x78 = INT16_MAX;
int64_t x92 = 1LL;
int64_t x99 = -1LL;
uint16_t x103 = 49U;
volatile uint32_t t20 = UINT32_MAX;
uint32_t x106 = 3712776U;
int64_t x109 = 2469651547742911LL;
int64_t x116 = INT64_MAX;
int8_t x139 = INT8_MIN;
int32_t x140 = INT32_MIN;
static volatile int32_t x145 = INT32_MAX;
uint64_t x152 = 386LLU;
uint64_t t29 = 1503886843LLU;
int64_t t30 = INT64_MIN;
static uint8_t x162 = UINT8_MAX;
static uint32_t x164 = 2848U;
static volatile int16_t x169 = INT16_MIN;
volatile int16_t x171 = INT16_MAX;
int64_t x173 = 274929LL;
int32_t x174 = -1;
int64_t x176 = INT64_MAX;
int64_t x189 = INT64_MIN;
static int64_t x192 = -83343829804565685LL;
static volatile int32_t t37 = 369;
int32_t x198 = -3261;
int16_t x216 = INT16_MIN;
static uint64_t x217 = 73004561447LLU;
volatile uint64_t t42 = 2109315773159LLU;
int16_t x222 = 29;
int64_t x224 = INT64_MIN;
int8_t x243 = 1;
int32_t x250 = 18765;
volatile int32_t t48 = -240;
static volatile uint8_t x265 = 0U;
int8_t x268 = INT8_MIN;
int32_t t50 = -1715814;
int16_t x270 = INT16_MIN;
int16_t x272 = 14;
int8_t x283 = 1;
int64_t x285 = -1LL;
int8_t x291 = 48;
volatile int32_t t55 = -117;
uint64_t x293 = 163238LLU;
volatile int32_t t57 = 1773421;
int64_t t58 = 14067881785727474LL;
int16_t x320 = INT16_MIN;
volatile int16_t x321 = INT16_MIN;
int16_t x323 = INT16_MAX;
volatile int32_t t62 = 1208;
int64_t x326 = INT64_MIN;
uint64_t x327 = 31508191820LLU;
uint8_t x330 = 2U;
uint16_t x332 = UINT16_MAX;
volatile int8_t x335 = INT8_MIN;
static int64_t x336 = -68646327533346LL;
int64_t x338 = -16449495LL;
volatile uint16_t x357 = 2886U;
static int8_t x362 = -1;
int8_t x364 = INT8_MIN;
static volatile int64_t t72 = INT64_MIN;
static int32_t x385 = INT32_MIN;
uint32_t x394 = 27563U;
int8_t x396 = -7;
int8_t x413 = INT8_MAX;
int32_t t79 = -19998838;
int32_t x419 = -1;
uint16_t x428 = 879U;
volatile int16_t x429 = INT16_MIN;
volatile int8_t x435 = INT8_MIN;
int8_t x440 = INT8_MIN;
uint16_t x441 = 1343U;
int8_t x446 = INT8_MIN;
static uint8_t x447 = 34U;
int64_t x454 = INT64_MAX;
int16_t x456 = INT16_MIN;
int64_t x461 = INT64_MIN;
volatile int64_t x466 = INT64_MAX;
static int8_t x469 = INT8_MIN;
int32_t x481 = INT32_MAX;
int16_t x482 = -1;
int64_t x487 = -1LL;
volatile int32_t x494 = -62278954;
int16_t x496 = INT16_MAX;
uint64_t x498 = 829LLU;
static uint64_t x503 = UINT64_MAX;
static int32_t t98 = -10768;
volatile int8_t x506 = -4;
int32_t t99 = -367;


void f0(void) {
	uint32_t x2 = 2078842361U;
	int16_t x3 = INT16_MAX;
	volatile uint16_t x4 = UINT16_MAX;
	int64_t t0 = -249575088LL;

	t0 = (x1^((x2*x3)==x4));

	if (t0 != -13289609LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	static uint64_t x7 = 19963288LLU;
	volatile uint8_t x8 = 4U;
	volatile int32_t t1 = 200;

	t1 = (x5^((x6*x7)==x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	uint64_t x18 = 4986132558LLU;
	volatile int64_t x19 = 219976LL;
	uint32_t x20 = 233076U;
	int32_t t2 = 45;

	t2 = (x17^((x18*x19)==x20));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -4;
	int32_t x22 = -1;
	int8_t x24 = -1;
	int32_t t3 = -6045828;

	t3 = (x21^((x22*x23)==x24));

	if (t3 != -4) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x26 = UINT64_MAX;
	int16_t x27 = -18;
	int16_t x28 = 1;
	static volatile uint64_t t4 = UINT64_MAX;

	t4 = (x25^((x26*x27)==x28));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 97U;
	int8_t x30 = 1;
	int32_t x32 = -1;
	int32_t t5 = -6971197;

	t5 = (x29^((x30*x31)==x32));

	if (t5 != 97) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 9U;
	uint16_t x34 = 59U;
	int16_t x35 = INT16_MIN;
	int8_t x36 = -1;
	volatile int32_t t6 = -402;

	t6 = (x33^((x34*x35)==x36));

	if (t6 != 9) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	uint64_t x38 = 91567360LLU;
	int32_t x39 = 3262;
	volatile int32_t t7 = INT32_MIN;

	t7 = (x37^((x38*x39)==x40));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	int32_t x42 = -1;
	int32_t x43 = INT32_MAX;
	volatile uint32_t x44 = 98U;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x41^((x42*x43)==x44));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 3U;
	uint8_t x46 = UINT8_MAX;
	uint32_t x47 = UINT32_MAX;
	volatile int64_t x48 = INT64_MIN;

	t9 = (x45^((x46*x47)==x48));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	static int64_t x51 = -1LL;
	static int64_t x52 = INT64_MIN;
	volatile int32_t t10 = 793449;

	t10 = (x49^((x50*x51)==x52));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	static volatile int16_t x58 = -1;
	uint32_t x59 = 1112392227U;
	int16_t x60 = -31;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x57^((x58*x59)==x60));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x67 = UINT8_MAX;
	uint16_t x68 = 2874U;
	static volatile int32_t t12 = 35;

	t12 = (x65^((x66*x67)==x68));

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x70 = 42U;
	int32_t x71 = 19;
	int64_t x72 = INT64_MIN;

	t13 = (x69^((x70*x71)==x72));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x73 = 4012223890940467LL;
	uint64_t x74 = UINT64_MAX;
	uint64_t x75 = 724866084LLU;
	int64_t t14 = -741907LL;

	t14 = (x73^((x74*x75)==x76));

	if (t14 != 4012223890940467LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x79 = 749;
	int8_t x80 = -1;
	volatile uint64_t t15 = 130LLU;

	t15 = (x77^((x78*x79)==x80));

	if (t15 != 2676LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -12;
	int32_t x82 = INT32_MAX;
	int64_t x83 = -1LL;
	int16_t x84 = -1;
	static volatile int32_t t16 = -58;

	t16 = (x81^((x82*x83)==x84));

	if (t16 != -12) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = 7;
	int8_t x90 = INT8_MAX;
	uint16_t x91 = 290U;
	static int32_t t17 = 255668323;

	t17 = (x89^((x90*x91)==x92));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 1449562098504710590LLU;
	uint8_t x94 = 22U;
	uint16_t x95 = 1731U;
	uint16_t x96 = 484U;
	volatile uint64_t t18 = 189150495852239464LLU;

	t18 = (x93^((x94*x95)==x96));

	if (t18 != 1449562098504710590LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	static volatile int64_t x100 = INT64_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x97^((x98*x99)==x100));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 58578214293LLU;
	uint8_t x104 = 36U;

	t20 = (x101^((x102*x103)==x104));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = INT16_MIN;
	uint32_t x107 = 12119248U;
	int32_t x108 = 152;
	int32_t t21 = -3;

	t21 = (x105^((x106*x107)==x108));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x110 = -6;
	volatile int8_t x111 = INT8_MIN;
	uint64_t x112 = 1306016666590LLU;
	int64_t t22 = -4527219428LL;

	t22 = (x109^((x110*x111)==x112));

	if (t22 != 2469651547742911LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int8_t x114 = INT8_MAX;
	volatile uint32_t x115 = 91055U;
	uint32_t t23 = UINT32_MAX;

	t23 = (x113^((x114*x115)==x116));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = -1;
	int8_t x122 = 0;
	volatile int64_t x123 = 269075738352563LL;
	volatile int64_t x124 = -1LL;
	int32_t t24 = 18;

	t24 = (x121^((x122*x123)==x124));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	static int32_t x131 = -1;
	int64_t x132 = INT64_MIN;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x129^((x130*x131)==x132));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x133 = INT64_MIN;
	volatile uint16_t x134 = 249U;
	static int16_t x135 = 148;
	int32_t x136 = INT32_MIN;
	int64_t t26 = INT64_MIN;

	t26 = (x133^((x134*x135)==x136));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = -1;
	int64_t x138 = 1793770142LL;
	static int32_t t27 = -244;

	t27 = (x137^((x138*x139)==x140));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x146 = 1314104945U;
	uint16_t x147 = UINT16_MAX;
	static volatile int16_t x148 = 2;
	volatile int32_t t28 = INT32_MAX;

	t28 = (x145^((x146*x147)==x148));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = 139LLU;
	uint8_t x150 = 36U;
	uint32_t x151 = 4799691U;

	t29 = (x149^((x150*x151)==x152));

	if (t29 != 139LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = INT64_MIN;
	static uint32_t x154 = UINT32_MAX;
	volatile int8_t x155 = -1;
	uint64_t x156 = UINT64_MAX;

	t30 = (x153^((x154*x155)==x156));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MIN;
	static volatile uint16_t x163 = UINT16_MAX;
	static int64_t t31 = INT64_MIN;

	t31 = (x161^((x162*x163)==x164));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = -1;
	static int32_t x166 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -224;
	volatile int32_t t32 = 0;

	t32 = (x165^((x166*x167)==x168));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x170 = 1;
	int64_t x172 = INT64_MIN;
	int32_t t33 = 100302;

	t33 = (x169^((x170*x171)==x172));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x175 = -12;
	int64_t t34 = 10442744476420LL;

	t34 = (x173^((x174*x175)==x176));

	if (t34 != 274929LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = -1;
	int16_t x178 = -1;
	int32_t x179 = 34062;
	volatile int64_t x180 = 156813889045178LL;
	volatile int32_t t35 = 9;

	t35 = (x177^((x178*x179)==x180));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x190 = 20U;
	volatile int32_t x191 = INT32_MIN;
	static volatile int64_t t36 = INT64_MIN;

	t36 = (x189^((x190*x191)==x192));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x194 = -1LL;
	volatile int8_t x195 = 8;
	int8_t x196 = -1;

	t37 = (x193^((x194*x195)==x196));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x197 = INT8_MIN;
	int8_t x199 = 13;
	int8_t x200 = INT8_MAX;
	volatile int32_t t38 = 201946;

	t38 = (x197^((x198*x199)==x200));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x201 = 59U;
	int16_t x202 = 0;
	static int32_t x203 = INT32_MAX;
	static int8_t x204 = -1;
	volatile int32_t t39 = 60;

	t39 = (x201^((x202*x203)==x204));

	if (t39 != 59) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = UINT16_MAX;
	static uint16_t x210 = UINT16_MAX;
	int8_t x211 = -7;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t40 = -113451340;

	t40 = (x209^((x210*x211)==x212));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x213 = 5LL;
	static uint32_t x214 = 7778U;
	uint32_t x215 = 419743246U;
	volatile int64_t t41 = -60153474480LL;

	t41 = (x213^((x214*x215)==x216));

	if (t41 != 5LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x218 = INT8_MIN;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = -1;

	t42 = (x217^((x218*x219)==x220));

	if (t42 != 73004561447LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = INT8_MIN;
	volatile uint32_t x223 = 4297533U;
	int32_t t43 = 3;

	t43 = (x221^((x222*x223)==x224));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x225 = -1LL;
	int8_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MIN;
	int64_t t44 = -839751007579995LL;

	t44 = (x225^((x226*x227)==x228));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x229 = INT8_MIN;
	int64_t x230 = 508956079LL;
	int8_t x231 = 0;
	uint64_t x232 = 27873816198148LLU;
	int32_t t45 = 13;

	t45 = (x229^((x230*x231)==x232));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = 686792489001LL;
	uint8_t x242 = UINT8_MAX;
	static int8_t x244 = INT8_MAX;
	volatile int64_t t46 = -1841023283048943394LL;

	t46 = (x241^((x242*x243)==x244));

	if (t46 != 686792489001LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x245 = 89004;
	int32_t x246 = INT32_MIN;
	volatile uint64_t x247 = 4806926720052LLU;
	int16_t x248 = INT16_MAX;
	static int32_t t47 = 270061;

	t47 = (x245^((x246*x247)==x248));

	if (t47 != 89004) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = INT16_MAX;
	static int16_t x251 = INT16_MIN;
	int64_t x252 = 10496014893881LL;

	t48 = (x249^((x250*x251)==x252));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = -3;
	uint8_t x254 = 84U;
	int8_t x255 = INT8_MIN;
	int16_t x256 = 0;
	volatile int32_t t49 = 422995;

	t49 = (x253^((x254*x255)==x256));

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x266 = UINT64_MAX;
	int16_t x267 = -57;

	t50 = (x265^((x266*x267)==x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = 651;
	static int8_t x271 = -29;
	int32_t t51 = -4501980;

	t51 = (x269^((x270*x271)==x272));

	if (t51 != 651) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x277 = 425;
	int8_t x278 = INT8_MIN;
	int8_t x279 = 1;
	volatile int64_t x280 = INT64_MAX;
	static int32_t t52 = -312058403;

	t52 = (x277^((x278*x279)==x280));

	if (t52 != 425) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x281 = 130U;
	static uint32_t x282 = 2499U;
	uint16_t x284 = UINT16_MAX;
	int32_t t53 = 1024;

	t53 = (x281^((x282*x283)==x284));

	if (t53 != 130) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MAX;
	int64_t x288 = INT64_MAX;
	volatile int64_t t54 = -15033864289986LL;

	t54 = (x285^((x286*x287)==x288));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	uint16_t x292 = UINT16_MAX;

	t55 = (x289^((x290*x291)==x292));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x294 = INT8_MIN;
	int32_t x295 = -89;
	static volatile int64_t x296 = INT64_MAX;
	uint64_t t56 = 32046304405904LLU;

	t56 = (x293^((x294*x295)==x296));

	if (t56 != 163238LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x297 = -3;
	volatile uint16_t x298 = 58U;
	volatile int16_t x299 = -1;
	int8_t x300 = INT8_MAX;

	t57 = (x297^((x298*x299)==x300));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x301 = -1LL;
	uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 14709LLU;
	static int8_t x304 = INT8_MIN;

	t58 = (x301^((x302*x303)==x304));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = 552LLU;
	int8_t x306 = -1;
	volatile int8_t x307 = -1;
	uint16_t x308 = UINT16_MAX;
	uint64_t t59 = 198LLU;

	t59 = (x305^((x306*x307)==x308));

	if (t59 != 552LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x309 = UINT16_MAX;
	uint64_t x310 = 15306LLU;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = 23U;
	volatile int32_t t60 = 841859;

	t60 = (x309^((x310*x311)==x312));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x317 = 995LL;
	volatile int16_t x318 = -1;
	volatile int16_t x319 = INT16_MIN;
	static int64_t t61 = 255902LL;

	t61 = (x317^((x318*x319)==x320));

	if (t61 != 995LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x322 = 69U;
	int32_t x324 = INT32_MIN;

	t62 = (x321^((x322*x323)==x324));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x325 = INT32_MAX;
	static uint64_t x328 = 2383415237258813602LLU;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x325^((x326*x327)==x328));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x329 = 24U;
	uint8_t x331 = 59U;
	int32_t t64 = -862748635;

	t64 = (x329^((x330*x331)==x332));

	if (t64 != 24) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x333 = INT32_MAX;
	volatile int16_t x334 = INT16_MIN;
	int32_t t65 = INT32_MAX;

	t65 = (x333^((x334*x335)==x336));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x337 = INT64_MIN;
	volatile int8_t x339 = INT8_MAX;
	int64_t x340 = -10156LL;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x337^((x338*x339)==x340));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x358 = 185U;
	uint32_t x359 = 191580795U;
	int64_t x360 = 55941LL;
	int32_t t67 = -283286;

	t67 = (x357^((x358*x359)==x360));

	if (t67 != 2886) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x361 = -1LL;
	int64_t x363 = INT64_MAX;
	volatile int64_t t68 = 825708092892169LL;

	t68 = (x361^((x362*x363)==x364));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x369 = 10U;
	int8_t x370 = -1;
	int32_t x371 = -1;
	static volatile int8_t x372 = INT8_MAX;
	volatile int32_t t69 = 72869;

	t69 = (x369^((x370*x371)==x372));

	if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile uint32_t x374 = UINT32_MAX;
	uint64_t x375 = 919549666564430LLU;
	uint32_t x376 = 400836025U;
	int64_t t70 = INT64_MIN;

	t70 = (x373^((x374*x375)==x376));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int8_t x378 = INT8_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 76590914962089LLU;
	int32_t t71 = 8748376;

	t71 = (x377^((x378*x379)==x380));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x381 = INT64_MIN;
	uint16_t x382 = 17486U;
	int16_t x383 = -1;
	uint16_t x384 = 2108U;

	t72 = (x381^((x382*x383)==x384));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x386 = 7U;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;
	volatile int32_t t73 = INT32_MIN;

	t73 = (x385^((x386*x387)==x388));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x389 = INT8_MAX;
	static int8_t x390 = -3;
	int64_t x391 = -1LL;
	volatile int64_t x392 = INT64_MIN;
	volatile int32_t t74 = 3;

	t74 = (x389^((x390*x391)==x392));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x393 = -28203LL;
	uint32_t x395 = 37951U;
	static volatile int64_t t75 = 389185236423518603LL;

	t75 = (x393^((x394*x395)==x396));

	if (t75 != -28203LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = -1753;
	volatile int32_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	int32_t t76 = INT32_MIN;

	t76 = (x397^((x398*x399)==x400));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x405 = 188U;
	uint64_t x406 = UINT64_MAX;
	static volatile uint8_t x407 = 4U;
	int32_t x408 = -48;
	int32_t t77 = 241;

	t77 = (x405^((x406*x407)==x408));

	if (t77 != 188) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x409 = -1022753395;
	int32_t x410 = -1;
	static uint8_t x411 = 3U;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t78 = 547990;

	t78 = (x409^((x410*x411)==x412));

	if (t78 != -1022753395) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x414 = -1LL;
	static volatile uint8_t x415 = 1U;
	int32_t x416 = INT32_MAX;

	t79 = (x413^((x414*x415)==x416));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x417 = 15847LLU;
	static volatile int16_t x418 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	uint64_t t80 = 208419LLU;

	t80 = (x417^((x418*x419)==x420));

	if (t80 != 15847LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x421 = INT16_MIN;
	volatile int16_t x422 = INT16_MIN;
	uint8_t x423 = 45U;
	volatile int16_t x424 = -7;
	volatile int32_t t81 = 1188;

	t81 = (x421^((x422*x423)==x424));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x425 = -1;
	int64_t x426 = -1LL;
	int16_t x427 = INT16_MIN;
	int32_t t82 = -1511140;

	t82 = (x425^((x426*x427)==x428));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x430 = -1;
	int64_t x431 = -868LL;
	volatile uint64_t x432 = 13086784531989LLU;
	int32_t t83 = 2;

	t83 = (x429^((x430*x431)==x432));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x433 = INT32_MAX;
	int8_t x434 = 1;
	int8_t x436 = INT8_MIN;
	int32_t t84 = -1;

	t84 = (x433^((x434*x435)==x436));

	if (t84 != 2147483646) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x437 = INT32_MIN;
	static int16_t x438 = -1;
	uint16_t x439 = 30205U;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x437^((x438*x439)==x440));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x442 = -1;
	static volatile int16_t x443 = -10137;
	static int32_t x444 = -1;
	static volatile int32_t t86 = 47;

	t86 = (x441^((x442*x443)==x444));

	if (t86 != 1343) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x445 = 53702358LLU;
	uint8_t x448 = 2U;
	volatile uint64_t t87 = 66652LLU;

	t87 = (x445^((x446*x447)==x448));

	if (t87 != 53702358LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = -6;
	int16_t x455 = -1;
	int32_t t88 = -242033075;

	t88 = (x453^((x454*x455)==x456));

	if (t88 != -6) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x462 = INT16_MIN;
	int16_t x463 = INT16_MIN;
	int8_t x464 = -61;
	int64_t t89 = INT64_MIN;

	t89 = (x461^((x462*x463)==x464));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x465 = INT16_MIN;
	uint16_t x467 = 1U;
	uint16_t x468 = 1U;
	volatile int32_t t90 = -12031541;

	t90 = (x465^((x466*x467)==x468));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x470 = 1;
	int64_t x471 = INT64_MIN;
	static volatile int16_t x472 = 844;
	volatile int32_t t91 = 15788;

	t91 = (x469^((x470*x471)==x472));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x477 = -1;
	int8_t x478 = -1;
	int16_t x479 = 1;
	int64_t x480 = -1LL;
	int32_t t92 = 110913433;

	t92 = (x477^((x478*x479)==x480));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x483 = 124620U;
	uint64_t x484 = 4LLU;
	static volatile int32_t t93 = INT32_MAX;

	t93 = (x481^((x482*x483)==x484));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x485 = -1;
	static volatile uint8_t x486 = UINT8_MAX;
	uint64_t x488 = 1773961196510916LLU;
	static int32_t t94 = -21882463;

	t94 = (x485^((x486*x487)==x488));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x489 = INT16_MIN;
	int16_t x490 = 1;
	uint8_t x491 = UINT8_MAX;
	volatile uint64_t x492 = 24LLU;
	int32_t t95 = 1061254;

	t95 = (x489^((x490*x491)==x492));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x493 = INT32_MIN;
	static uint8_t x495 = 4U;
	int32_t t96 = INT32_MIN;

	t96 = (x493^((x494*x495)==x496));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x497 = INT64_MAX;
	int16_t x499 = INT16_MAX;
	volatile uint8_t x500 = 60U;
	int64_t t97 = INT64_MAX;

	t97 = (x497^((x498*x499)==x500));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x501 = 7U;
	volatile int16_t x502 = -1;
	int16_t x504 = INT16_MIN;

	t98 = (x501^((x502*x503)==x504));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x505 = 9U;
	static int8_t x507 = INT8_MIN;
	static uint8_t x508 = UINT8_MAX;

	t99 = (x505^((x506*x507)==x508));

	if (t99 != 9) { NG(); } else { ; }
	
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

