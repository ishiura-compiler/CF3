#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 52U;
uint32_t t0 = 0U;
volatile int32_t t1 = -2055;
int8_t x20 = INT8_MIN;
uint16_t x26 = 1600U;
uint16_t x41 = 0U;
static int64_t x42 = INT64_MIN;
volatile int8_t x51 = 3;
int16_t x56 = 7631;
int16_t x76 = -109;
int8_t x82 = 0;
static int32_t x88 = -1;
volatile uint32_t t14 = UINT32_MAX;
static volatile int8_t x93 = INT8_MAX;
uint64_t x114 = UINT64_MAX;
static int64_t x115 = 1987793737805LL;
int8_t x118 = -21;
volatile int64_t x119 = 17676959010958882LL;
int32_t x120 = INT32_MIN;
int16_t x124 = -1;
int8_t x126 = -7;
int16_t x128 = -1;
volatile int32_t t20 = -742857040;
uint64_t x135 = UINT64_MAX;
int8_t x136 = INT8_MAX;
volatile uint32_t t21 = 0U;
uint64_t x139 = 3LLU;
int32_t x142 = INT32_MIN;
int32_t x153 = 10348;
static volatile uint8_t x157 = UINT8_MAX;
uint32_t x163 = 3636U;
int64_t t26 = 2029LL;
int8_t x166 = INT8_MIN;
static volatile int32_t x167 = 3;
static volatile uint16_t x168 = 11U;
uint16_t x175 = 12U;
static uint64_t x177 = UINT64_MAX;
static uint32_t x179 = 2047379728U;
volatile uint64_t x183 = UINT64_MAX;
static int8_t x187 = -6;
static volatile int8_t x192 = INT8_MAX;
uint64_t t32 = UINT64_MAX;
uint8_t x205 = 0U;
int8_t x206 = -1;
volatile int16_t x211 = INT16_MIN;
volatile uint64_t t36 = 226646278LLU;
int32_t x221 = 193;
static int64_t x238 = -1LL;
volatile int16_t x239 = -1;
uint32_t x262 = 131882539U;
int64_t x264 = INT64_MIN;
volatile int64_t t43 = -417866181LL;
static uint8_t x268 = UINT8_MAX;
int8_t x280 = INT8_MAX;
volatile uint32_t x284 = 1331219933U;
int8_t x294 = INT8_MIN;
volatile uint64_t x299 = 166750702711610421LLU;
uint64_t x301 = 35897273421769329LLU;
int64_t x304 = INT64_MIN;
uint64_t t50 = 6541197234106637LLU;
volatile int8_t x317 = INT8_MAX;
static volatile uint8_t x318 = UINT8_MAX;
uint8_t x330 = UINT8_MAX;
uint64_t x337 = UINT64_MAX;
volatile int64_t x349 = 2030060882LL;
uint32_t x351 = 9009U;
uint64_t t58 = UINT64_MAX;
volatile uint32_t x359 = 3940502U;
volatile uint32_t x364 = 241980U;
uint32_t x365 = UINT32_MAX;
int64_t x372 = INT64_MIN;
int64_t x374 = 4910912LL;
volatile int64_t x378 = INT64_MIN;
static int8_t x381 = INT8_MAX;
static uint32_t x382 = 8364304U;
volatile uint8_t x384 = UINT8_MAX;
volatile int32_t t65 = 48931;
uint8_t x386 = 0U;
int32_t t66 = 41;
static volatile int64_t x391 = -26265794861255577LL;
volatile int32_t t67 = -86;
static int32_t x411 = INT32_MIN;
uint8_t x414 = UINT8_MAX;
uint16_t x422 = 5U;
static volatile int8_t x423 = INT8_MIN;
uint16_t x424 = UINT16_MAX;
int8_t x434 = INT8_MAX;
uint32_t x436 = 15179803U;
uint16_t x439 = UINT16_MAX;
uint64_t x445 = UINT64_MAX;
int8_t x447 = -1;
int16_t x454 = -3918;
int16_t x455 = -1;
uint16_t x461 = 0U;
static int64_t x471 = -1LL;
int16_t x481 = INT16_MAX;
volatile int32_t t82 = 1069919;
volatile uint16_t x493 = UINT16_MAX;
uint8_t x498 = 32U;
static int8_t x506 = -1;
int16_t x508 = INT16_MIN;
int16_t x534 = 287;
static int8_t x541 = INT8_MAX;
uint16_t x545 = 39U;
static volatile int8_t x568 = -7;
uint64_t x581 = UINT64_MAX;
volatile int16_t x584 = -1;
volatile uint64_t t94 = UINT64_MAX;
uint8_t x590 = UINT8_MAX;
int8_t x596 = INT8_MIN;
static int64_t x639 = INT64_MAX;
static int64_t x641 = INT64_MAX;


void f0(void) {
	uint32_t x1 = 187170057U;
	volatile int16_t x2 = INT16_MIN;
	int16_t x3 = 1;

	t0 = ((x1>>(x2==x3))|x4);

	if (t0 != 187170109U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 3U;
	static int8_t x10 = INT8_MAX;
	volatile uint32_t x11 = 5296474U;
	uint16_t x12 = 7U;

	t1 = ((x9>>(x10==x11))|x12);

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	uint64_t x18 = 50865026LLU;
	int16_t x19 = -1;
	int32_t t2 = 740779;

	t2 = ((x17>>(x18==x19))|x20);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x21 = UINT8_MAX;
	uint8_t x22 = UINT8_MAX;
	uint64_t x23 = 2147039457945464LLU;
	int16_t x24 = -63;
	volatile int32_t t3 = 13715000;

	t3 = ((x21>>(x22==x23))|x24);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 1301U;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = 52U;
	static volatile int32_t t4 = -3348;

	t4 = ((x25>>(x26==x27))|x28);

	if (t4 != 1333) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x37 = 65535306177LLU;
	static uint8_t x38 = UINT8_MAX;
	int64_t x39 = -1LL;
	int8_t x40 = INT8_MAX;
	static uint64_t t5 = 3679610224LLU;

	t5 = ((x37>>(x38==x39))|x40);

	if (t5 != 65535306239LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x43 = UINT16_MAX;
	static int8_t x44 = -1;
	int32_t t6 = 447688298;

	t6 = ((x41>>(x42==x43))|x44);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = INT32_MAX;
	volatile int64_t x50 = INT64_MAX;
	int8_t x52 = INT8_MIN;
	static int32_t t7 = -279829472;

	t7 = ((x49>>(x50==x51))|x52);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = 74556030;
	volatile int8_t x54 = INT8_MIN;
	static int32_t x55 = -1;
	int32_t t8 = -700949;

	t8 = ((x53>>(x54==x55))|x56);

	if (t8 != 74563583) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = 1370;
	volatile uint32_t x58 = UINT32_MAX;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = -1;
	volatile int32_t t9 = 5340;

	t9 = ((x57>>(x58==x59))|x60);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = INT32_MAX;
	volatile uint32_t x70 = 60619U;
	volatile int16_t x71 = -63;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t10 = INT32_MAX;

	t10 = ((x69>>(x70==x71))|x72);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x73 = INT64_MAX;
	uint8_t x74 = 1U;
	int8_t x75 = -1;
	int64_t t11 = -133191LL;

	t11 = ((x73>>(x74==x75))|x76);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = UINT64_MAX;
	uint8_t x83 = 58U;
	volatile int16_t x84 = -1;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x81>>(x82==x83))|x84);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = 36962;
	static uint16_t x86 = 50U;
	int16_t x87 = -56;
	int32_t t13 = 227795329;

	t13 = ((x85>>(x86==x87))|x88);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x89 = 1547U;
	int32_t x90 = INT32_MIN;
	static uint8_t x91 = 6U;
	uint32_t x92 = UINT32_MAX;

	t14 = ((x89>>(x90==x91))|x92);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x94 = 56LLU;
	int8_t x95 = INT8_MIN;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t15 = 12;

	t15 = ((x93>>(x94==x95))|x96);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = -12;
	uint16_t x111 = 3649U;
	volatile int64_t x112 = INT64_MIN;
	static int64_t t16 = -3076341320165648591LL;

	t16 = ((x109>>(x110==x111))|x112);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int16_t x116 = 0;
	static volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x113>>(x114==x115))|x116);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x117 = 77U;
	int32_t t18 = -2007109;

	t18 = ((x117>>(x118==x119))|x120);

	if (t18 != -2147483571) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = 253279;
	int8_t x122 = -63;
	int8_t x123 = INT8_MIN;
	volatile int32_t t19 = 1;

	t19 = ((x121>>(x122==x123))|x124);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x125 = 6838U;
	uint64_t x127 = 533407153237LLU;

	t20 = ((x125>>(x126==x127))|x128);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x133 = 10U;
	static int16_t x134 = -1;

	t21 = ((x133>>(x134==x135))|x136);

	if (t21 != 127U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x137 = INT16_MAX;
	int8_t x138 = -1;
	volatile int32_t x140 = -1;
	volatile int32_t t22 = 3797;

	t22 = ((x137>>(x138==x139))|x140);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = INT8_MAX;
	volatile int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MIN;
	static int32_t t23 = 71;

	t23 = ((x141>>(x142==x143))|x144);

	if (t23 != -32641) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x154 = 161815282LLU;
	uint32_t x155 = 3689U;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t24 = -240201166;

	t24 = ((x153>>(x154==x155))|x156);

	if (t24 != -20) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x158 = INT64_MIN;
	uint16_t x159 = UINT16_MAX;
	static int8_t x160 = INT8_MAX;
	volatile int32_t t25 = 975;

	t25 = ((x157>>(x158==x159))|x160);

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = -1;
	int64_t x164 = 671288746749406197LL;

	t26 = ((x161>>(x162==x163))|x164);

	if (t26 != 671288746821287935LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int32_t t27 = 465507177;

	t27 = ((x165>>(x166==x167))|x168);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = -61676;
	static int8_t x176 = INT8_MIN;
	static volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x173>>(x174==x175))|x176);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x178 = 4U;
	uint64_t x180 = 132708LLU;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x177>>(x178==x179))|x180);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int16_t x182 = 1;
	int64_t x184 = INT64_MIN;
	volatile int64_t t30 = -18730602036LL;

	t30 = ((x181>>(x182==x183))|x184);

	if (t30 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x185 = 17293085240LLU;
	uint64_t x186 = 2065271LLU;
	int64_t x188 = -2321305033075591891LL;
	volatile uint64_t t31 = 8563223550898292LLU;

	t31 = ((x185>>(x186==x187))|x188);

	if (t31 != 16125439040743800637LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x189 = UINT64_MAX;
	static int64_t x190 = INT64_MIN;
	volatile int8_t x191 = INT8_MAX;

	t32 = ((x189>>(x190==x191))|x192);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = 5330;
	volatile uint16_t x202 = UINT16_MAX;
	static int64_t x203 = 891301267657LL;
	uint32_t x204 = 80U;
	uint32_t t33 = 296722U;

	t33 = ((x201>>(x202==x203))|x204);

	if (t33 != 5330U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x207 = 10U;
	int16_t x208 = 46;
	int32_t t34 = 174913;

	t34 = ((x205>>(x206==x207))|x208);

	if (t34 != 46) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x209 = INT64_MAX;
	uint64_t x210 = 4863919108LLU;
	static volatile int32_t x212 = INT32_MAX;
	static volatile int64_t t35 = INT64_MAX;

	t35 = ((x209>>(x210==x211))|x212);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x213 = 0U;
	uint64_t x214 = 2432004877951992931LLU;
	uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 438201465LLU;

	t36 = ((x213>>(x214==x215))|x216);

	if (t36 != 438201465LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x217 = 1899U;
	volatile uint64_t x218 = 21659LLU;
	int16_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile uint32_t t37 = 29825614U;

	t37 = ((x217>>(x218==x219))|x220);

	if (t37 != 2147485547U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MAX;
	uint16_t x224 = UINT16_MAX;
	int32_t t38 = 1685270;

	t38 = ((x221>>(x222==x223))|x224);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x225 = 2U;
	volatile int16_t x226 = -1;
	int8_t x227 = 8;
	int8_t x228 = -1;
	volatile int32_t t39 = -357431091;

	t39 = ((x225>>(x226==x227))|x228);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x229 = 30U;
	static int16_t x230 = -1;
	volatile int8_t x231 = -1;
	int32_t x232 = -1;
	volatile int32_t t40 = 353354184;

	t40 = ((x229>>(x230==x231))|x232);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x237 = INT8_MAX;
	volatile uint8_t x240 = 19U;
	static int32_t t41 = -85197831;

	t41 = ((x237>>(x238==x239))|x240);

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x245 = 46U;
	static int8_t x246 = INT8_MIN;
	uint64_t x247 = 0LLU;
	static uint8_t x248 = 16U;
	int32_t t42 = 67549192;

	t42 = ((x245>>(x246==x247))|x248);

	if (t42 != 62) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = 34;
	static volatile uint64_t x263 = UINT64_MAX;

	t43 = ((x261>>(x262==x263))|x264);

	if (t43 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x265 = 34U;
	int32_t x266 = INT32_MIN;
	volatile int16_t x267 = -705;
	int32_t t44 = -3008;

	t44 = ((x265>>(x266==x267))|x268);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x277 = 26U;
	volatile int64_t x278 = INT64_MAX;
	volatile uint32_t x279 = UINT32_MAX;
	volatile int32_t t45 = -515861923;

	t45 = ((x277>>(x278==x279))|x280);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x281 = 20624U;
	int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MIN;
	static uint32_t t46 = 1299881948U;

	t46 = ((x281>>(x282==x283))|x284);

	if (t46 != 1331224029U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x293 = 12025U;
	volatile int64_t x295 = 68320427LL;
	uint64_t x296 = 2939382696LLU;
	volatile uint64_t t47 = 6002023415LLU;

	t47 = ((x293>>(x294==x295))|x296);

	if (t47 != 2939383801LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x297 = INT16_MAX;
	uint64_t x298 = 31LLU;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t48 = 342083310;

	t48 = ((x297>>(x298==x299))|x300);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x302 = 53407108;
	uint8_t x303 = 2U;
	static uint64_t t49 = 56LLU;

	t49 = ((x301>>(x302==x303))|x304);

	if (t49 != 9259269310276545137LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x313 = 174102LLU;
	int16_t x314 = INT16_MIN;
	static int64_t x315 = INT64_MAX;
	int8_t x316 = -14;

	t50 = ((x313>>(x314==x315))|x316);

	if (t50 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t51 = -1;

	t51 = ((x317>>(x318==x319))|x320);

	if (t51 != -32641) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x321 = 0LL;
	static uint16_t x322 = 49U;
	uint64_t x323 = 4599957231LLU;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x321>>(x322==x323))|x324);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x325 = UINT8_MAX;
	static volatile int64_t x326 = INT64_MIN;
	int32_t x327 = -470131;
	volatile int32_t x328 = -562;
	volatile int32_t t53 = -659575;

	t53 = ((x325>>(x326==x327))|x328);

	if (t53 != -513) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x329 = UINT16_MAX;
	static volatile uint64_t x331 = UINT64_MAX;
	static volatile uint64_t x332 = 114LLU;
	volatile uint64_t t54 = 967647223044646932LLU;

	t54 = ((x329>>(x330==x331))|x332);

	if (t54 != 65535LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x338 = UINT16_MAX;
	int64_t x339 = INT64_MIN;
	static int32_t x340 = -1;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x337>>(x338==x339))|x340);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x341 = 799013LL;
	volatile uint8_t x342 = 3U;
	int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MIN;
	int64_t t56 = -122425604594LL;

	t56 = ((x341>>(x342==x343))|x344);

	if (t56 != -9223372036853976795LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x350 = -1432219463515LL;
	volatile int16_t x352 = 364;
	volatile int64_t t57 = -5967046321180LL;

	t57 = ((x349>>(x350==x351))|x352);

	if (t57 != 2030060926LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x353 = UINT64_MAX;
	uint64_t x354 = 4478787385454699842LLU;
	int16_t x355 = -1;
	int16_t x356 = -1;

	t58 = ((x353>>(x354==x355))|x356);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x357 = 8U;
	static uint64_t x358 = 354973165770789438LLU;
	static int64_t x360 = INT64_MIN;
	int64_t t59 = -64529177731795LL;

	t59 = ((x357>>(x358==x359))|x360);

	if (t59 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x361 = 2U;
	static int16_t x362 = 389;
	int8_t x363 = -42;
	static volatile uint32_t t60 = 6U;

	t60 = ((x361>>(x362==x363))|x364);

	if (t60 != 241982U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x366 = -5860219;
	uint16_t x367 = UINT16_MAX;
	static volatile uint32_t x368 = 63U;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x365>>(x366==x367))|x368);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x369 = 16245976004684LLU;
	volatile int32_t x370 = INT32_MIN;
	volatile uint32_t x371 = 150182U;
	volatile uint64_t t62 = 423LLU;

	t62 = ((x369>>(x370==x371))|x372);

	if (t62 != 9223388282830780492LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x373 = INT8_MAX;
	volatile uint32_t x375 = 122148U;
	uint32_t x376 = 14047U;
	uint32_t t63 = 322U;

	t63 = ((x373>>(x374==x375))|x376);

	if (t63 != 14079U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x377 = 58450LL;
	int8_t x379 = -1;
	uint32_t x380 = UINT32_MAX;
	volatile int64_t t64 = 1838LL;

	t64 = ((x377>>(x378==x379))|x380);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x383 = 2U;

	t65 = ((x381>>(x382==x383))|x384);

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x385 = 5;
	int32_t x387 = INT32_MIN;
	volatile int32_t x388 = -505883;

	t66 = ((x385>>(x386==x387))|x388);

	if (t66 != -505883) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x389 = INT16_MAX;
	static int64_t x390 = INT64_MAX;
	uint16_t x392 = 228U;

	t67 = ((x389>>(x390==x391))|x392);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x409 = INT8_MAX;
	static int8_t x410 = -1;
	int32_t x412 = INT32_MIN;
	volatile int32_t t68 = 109128;

	t68 = ((x409>>(x410==x411))|x412);

	if (t68 != -2147483521) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x413 = 55890337205LLU;
	static int8_t x415 = -1;
	int8_t x416 = INT8_MAX;
	volatile uint64_t t69 = 102505944101601LLU;

	t69 = ((x413>>(x414==x415))|x416);

	if (t69 != 55890337279LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x421 = 3118476429691LL;
	int64_t t70 = 1LL;

	t70 = ((x421>>(x422==x423))|x424);

	if (t70 != 3118476492799LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x433 = 0;
	int8_t x435 = INT8_MIN;
	static volatile uint32_t t71 = 13718U;

	t71 = ((x433>>(x434==x435))|x436);

	if (t71 != 15179803U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x437 = 12U;
	uint8_t x438 = 0U;
	static int32_t x440 = INT32_MIN;
	int32_t t72 = -191;

	t72 = ((x437>>(x438==x439))|x440);

	if (t72 != -2147483636) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x441 = 0U;
	int64_t x442 = -1LL;
	int16_t x443 = 9051;
	uint32_t x444 = 208151U;
	volatile uint32_t t73 = 5627127U;

	t73 = ((x441>>(x442==x443))|x444);

	if (t73 != 208151U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x446 = -1;
	volatile int64_t x448 = INT64_MIN;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x445>>(x446==x447))|x448);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x449 = 3500;
	uint32_t x450 = 1U;
	int32_t x451 = INT32_MIN;
	int8_t x452 = INT8_MAX;
	volatile int32_t t75 = -1402;

	t75 = ((x449>>(x450==x451))|x452);

	if (t75 != 3583) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x453 = 0;
	int64_t x456 = -1LL;
	volatile int64_t t76 = 3329228900168605LL;

	t76 = ((x453>>(x454==x455))|x456);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x457 = 31971214537516LLU;
	int8_t x458 = 5;
	static int8_t x459 = INT8_MIN;
	uint32_t x460 = 20U;
	static uint64_t t77 = 9770624769704LLU;

	t77 = ((x457>>(x458==x459))|x460);

	if (t77 != 31971214537532LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x462 = 12U;
	static uint64_t x463 = 5639LLU;
	int8_t x464 = -56;
	int32_t t78 = -132279733;

	t78 = ((x461>>(x462==x463))|x464);

	if (t78 != -56) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x469 = UINT8_MAX;
	int8_t x470 = -17;
	uint16_t x472 = 7U;
	volatile int32_t t79 = 363588253;

	t79 = ((x469>>(x470==x471))|x472);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x473 = 1494LLU;
	uint64_t x474 = 324263226510314LLU;
	int32_t x475 = -663;
	uint8_t x476 = UINT8_MAX;
	uint64_t t80 = 25885LLU;

	t80 = ((x473>>(x474==x475))|x476);

	if (t80 != 1535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x482 = 1U;
	volatile int16_t x483 = -28;
	uint32_t x484 = UINT32_MAX;
	uint32_t t81 = UINT32_MAX;

	t81 = ((x481>>(x482==x483))|x484);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x485 = INT8_MAX;
	volatile int32_t x486 = INT32_MIN;
	static uint16_t x487 = UINT16_MAX;
	volatile int8_t x488 = -1;

	t82 = ((x485>>(x486==x487))|x488);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x494 = 13560038070121LLU;
	static int8_t x495 = -61;
	static uint64_t x496 = UINT64_MAX;
	static volatile uint64_t t83 = UINT64_MAX;

	t83 = ((x493>>(x494==x495))|x496);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x497 = 784U;
	uint8_t x499 = UINT8_MAX;
	int64_t x500 = -31019LL;
	static volatile int64_t t84 = 6LL;

	t84 = ((x497>>(x498==x499))|x500);

	if (t84 != -30763LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x501 = UINT8_MAX;
	int32_t x502 = INT32_MAX;
	int64_t x503 = -190LL;
	volatile int32_t x504 = -366;
	volatile int32_t t85 = 327553154;

	t85 = ((x501>>(x502==x503))|x504);

	if (t85 != -257) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x505 = 10;
	int16_t x507 = INT16_MIN;
	int32_t t86 = 906261648;

	t86 = ((x505>>(x506==x507))|x508);

	if (t86 != -32758) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x509 = 70;
	int8_t x510 = INT8_MAX;
	int32_t x511 = -3170;
	volatile int64_t x512 = -326458009028730LL;
	int64_t t87 = 41755749585LL;

	t87 = ((x509>>(x510==x511))|x512);

	if (t87 != -326458009028666LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x525 = UINT64_MAX;
	int32_t x526 = -1;
	uint8_t x527 = 6U;
	int8_t x528 = INT8_MIN;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = ((x525>>(x526==x527))|x528);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x529 = 13598357;
	int8_t x530 = 0;
	static int64_t x531 = 654588513511LL;
	static volatile int16_t x532 = INT16_MIN;
	int32_t t89 = 1409;

	t89 = ((x529>>(x530==x531))|x532);

	if (t89 != -363) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x533 = UINT64_MAX;
	int16_t x535 = INT16_MIN;
	volatile int64_t x536 = -6041236230463563LL;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x533>>(x534==x535))|x536);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x542 = 1U;
	uint16_t x543 = UINT16_MAX;
	volatile uint8_t x544 = 3U;
	int32_t t91 = -12050242;

	t91 = ((x541>>(x542==x543))|x544);

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x546 = INT16_MIN;
	volatile int16_t x547 = INT16_MAX;
	static int64_t x548 = INT64_MIN;
	int64_t t92 = 121328916923099135LL;

	t92 = ((x545>>(x546==x547))|x548);

	if (t92 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x565 = 30037923095738400LLU;
	int8_t x566 = INT8_MIN;
	int32_t x567 = 11214670;
	volatile uint64_t t93 = 3809LLU;

	t93 = ((x565>>(x566==x567))|x568);

	if (t93 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x582 = 19;
	volatile int16_t x583 = INT16_MAX;

	t94 = ((x581>>(x582==x583))|x584);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x589 = UINT8_MAX;
	uint16_t x591 = 4476U;
	int32_t x592 = 98937;
	int32_t t95 = 6;

	t95 = ((x589>>(x590==x591))|x592);

	if (t95 != 99071) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x593 = INT64_MAX;
	volatile uint8_t x594 = 22U;
	volatile int64_t x595 = INT64_MAX;
	int64_t t96 = -2LL;

	t96 = ((x593>>(x594==x595))|x596);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x597 = INT8_MAX;
	int64_t x598 = INT64_MAX;
	static int16_t x599 = INT16_MIN;
	static uint8_t x600 = UINT8_MAX;
	static volatile int32_t t97 = 1053862;

	t97 = ((x597>>(x598==x599))|x600);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x637 = INT32_MAX;
	int8_t x638 = -6;
	int8_t x640 = INT8_MIN;
	int32_t t98 = 8009567;

	t98 = ((x637>>(x638==x639))|x640);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x642 = INT64_MIN;
	int64_t x643 = 4LL;
	int16_t x644 = INT16_MIN;
	int64_t t99 = 14LL;

	t99 = ((x641>>(x642==x643))|x644);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

