#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -427;
volatile uint32_t t1 = 104951U;
int8_t x21 = 27;
uint64_t t3 = 6075712009820943157LLU;
uint8_t x40 = 4U;
volatile uint32_t t4 = 3972146U;
volatile int32_t t5 = 28990536;
static int64_t x56 = -1LL;
volatile uint16_t x61 = 14221U;
volatile int16_t x63 = INT16_MIN;
uint32_t x64 = UINT32_MAX;
int32_t x72 = INT32_MAX;
int16_t x108 = INT16_MIN;
volatile uint32_t t16 = 12U;
int32_t x122 = 147;
volatile uint32_t t21 = 1U;
volatile uint32_t x151 = 39800U;
int16_t x152 = INT16_MIN;
volatile uint64_t x154 = 49284171192460LLU;
int8_t x155 = INT8_MIN;
static volatile uint64_t x159 = 371882LLU;
uint64_t t24 = 416187638744LLU;
uint8_t x164 = 50U;
uint8_t x174 = 1U;
int8_t x191 = -1;
volatile uint16_t x209 = 4396U;
int64_t x211 = -70952055422752LL;
int64_t x212 = -1LL;
uint64_t x215 = UINT64_MAX;
int8_t x221 = -50;
static volatile uint8_t x222 = 3U;
int32_t t32 = -11;
int64_t x238 = INT64_MAX;
volatile int8_t x240 = INT8_MIN;
volatile uint64_t x253 = 50855LLU;
int8_t x280 = INT8_MAX;
static volatile int32_t x284 = -1;
uint32_t x292 = UINT32_MAX;
uint8_t x293 = 1U;
static volatile int8_t x294 = 0;
int8_t x295 = -1;
int32_t x297 = INT32_MAX;
volatile int8_t x303 = -1;
uint16_t x312 = 51U;
int64_t x317 = -1LL;
static int8_t x323 = -1;
int32_t x330 = 89322;
uint16_t x335 = 6855U;
int32_t x336 = INT32_MIN;
static int32_t x341 = -1;
static volatile int8_t x342 = -1;
int32_t x356 = INT32_MIN;
static uint16_t x375 = 26U;
int8_t x388 = INT8_MAX;
volatile uint32_t t56 = 263675032U;
volatile uint8_t x396 = 107U;
int64_t x397 = -1LL;
int64_t x418 = INT64_MIN;
uint64_t t61 = 392176958960LLU;
int8_t x430 = -8;
volatile uint32_t x436 = 688471U;
static uint64_t x440 = UINT64_MAX;
uint32_t x450 = UINT32_MAX;
volatile uint32_t t65 = 523201U;
int8_t x466 = INT8_MIN;
int16_t x475 = 0;
static int8_t x478 = INT8_MAX;
volatile int32_t x480 = INT32_MIN;
volatile uint32_t t68 = 11U;
uint32_t x483 = 123612438U;
int8_t x497 = 60;
int32_t t72 = -120;
uint64_t x507 = 1607527006732LLU;
int64_t t74 = 20LL;
int32_t t75 = -7148856;
int16_t x523 = -47;
uint8_t x534 = 76U;
volatile int16_t x539 = -1;
int32_t t81 = 3;
volatile int64_t t82 = -42184LL;
uint8_t x549 = UINT8_MAX;
uint64_t x550 = 3939773LLU;
int8_t x552 = INT8_MIN;
int8_t x554 = 10;
volatile uint64_t x562 = 88920LLU;
static volatile uint64_t t87 = 54LLU;
static int8_t x593 = -1;
volatile uint32_t x603 = 63419730U;
int8_t x604 = -1;
int8_t x612 = -12;
uint64_t x614 = 33LLU;
volatile int32_t x615 = 1172;
volatile uint64_t t93 = 35972653971642715LLU;
uint32_t t94 = 86600375U;
static uint32_t t95 = 2U;
volatile uint16_t x644 = 1728U;
int32_t x648 = INT32_MAX;
volatile int64_t x650 = 2533700315LL;
int16_t x651 = INT16_MAX;
volatile int64_t t98 = 213448392LL;
uint16_t x657 = 1U;
static int32_t x659 = -3085;


void f0(void) {
	int16_t x6 = -1;
	volatile uint16_t x7 = 6U;
	int8_t x8 = -31;
	int32_t t0 = 55;

	t0 = (((x5*x6)|x7)*x8);

	if (t0 != -13361) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x13 = 1153U;
	int8_t x14 = 3;
	int8_t x15 = INT8_MAX;
	int32_t x16 = INT32_MIN;

	t1 = (((x13*x14)|x15)*x16);

	if (t1 != 2147483648U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x22 = 2852616751LL;
	static int8_t x23 = -19;
	uint64_t x24 = 5LLU;
	static volatile uint64_t t2 = 48162820943LLU;

	t2 = (((x21*x22)|x23)*x24);

	if (t2 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = INT8_MIN;
	static int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;

	t3 = (((x33*x34)|x35)*x36);

	if (t3 != 1069547520LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x37 = UINT8_MAX;
	static int8_t x38 = -3;
	uint32_t x39 = 18U;

	t4 = (((x37*x38)|x39)*x40);

	if (t4 != 4294964300U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = -6;
	uint16_t x42 = 17U;
	volatile uint16_t x43 = UINT16_MAX;
	volatile int32_t x44 = 184285428;

	t5 = (((x41*x42)|x43)*x44);

	if (t5 != -184285428) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = 9269;
	uint32_t x51 = 26U;
	int16_t x52 = -1;
	volatile uint32_t t6 = 1667643242U;

	t6 = (((x49*x50)|x51)*x52);

	if (t6 != 4292603685U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x53 = 1U;
	uint8_t x54 = UINT8_MAX;
	uint8_t x55 = 5U;
	static int64_t t7 = 235194612703LL;

	t7 = (((x53*x54)|x55)*x56);

	if (t7 != -255LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x62 = -1;
	volatile uint32_t t8 = 752229U;

	t8 = (((x61*x62)|x63)*x64);

	if (t8 != 14221U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = -27;
	int16_t x66 = -84;
	volatile int64_t x67 = INT64_MIN;
	static volatile int16_t x68 = 1;
	int64_t t9 = -1LL;

	t9 = (((x65*x66)|x67)*x68);

	if (t9 != -9223372036854773540LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x69 = 10519LLU;
	int16_t x70 = INT16_MAX;
	static int8_t x71 = -9;
	static uint64_t t10 = 496761267024872LLU;

	t10 = (((x69*x70)|x71)*x72);

	if (t10 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x81 = 8260109441232635LL;
	int16_t x82 = -1;
	volatile uint16_t x83 = 7U;
	static uint16_t x84 = 1U;
	int64_t t11 = 251493501010LL;

	t11 = (((x81*x82)|x83)*x84);

	if (t11 != -8260109441232633LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x85 = 1447835930U;
	int32_t x86 = -1;
	uint16_t x87 = 16643U;
	uint32_t x88 = UINT32_MAX;
	uint32_t t12 = 2412416U;

	t12 = (((x85*x86)|x87)*x88);

	if (t12 != 1447835673U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x93 = UINT64_MAX;
	uint8_t x94 = 14U;
	volatile int32_t x95 = INT32_MAX;
	int8_t x96 = 1;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (((x93*x94)|x95)*x96);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x101 = -1;
	static int8_t x102 = 2;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MAX;
	volatile uint64_t t14 = 566LLU;

	t14 = (((x101*x102)|x103)*x104);

	if (t14 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x105 = 17726U;
	uint64_t x106 = 3314162LLU;
	uint32_t x107 = 2U;
	volatile uint64_t t15 = 4588750878LLU;

	t15 = (((x105*x106)|x107)*x108);

	if (t15 != 18444819057400152064LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x113 = 195494146U;
	static volatile int32_t x114 = INT32_MAX;
	int16_t x115 = 1;
	uint16_t x116 = UINT16_MAX;

	t16 = (((x113*x114)|x115)*x116);

	if (t16 != 178651393U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x121 = -1;
	volatile uint16_t x123 = 18U;
	int32_t x124 = -1;
	int32_t t17 = -88818;

	t17 = (((x121*x122)|x123)*x124);

	if (t17 != 129) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int32_t x126 = INT32_MAX;
	uint64_t x127 = 41174179799LLU;
	int16_t x128 = 369;
	uint64_t t18 = 1151LLU;

	t18 = (((x125*x126)|x127)*x128);

	if (t18 != 18446743418552575207LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x129 = -84;
	volatile int16_t x130 = INT16_MAX;
	int8_t x131 = INT8_MIN;
	static uint8_t x132 = 68U;
	int32_t t19 = -666;

	t19 = (((x129*x130)|x131)*x132);

	if (t19 != -2992) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x133 = 4047U;
	uint64_t x134 = UINT64_MAX;
	uint64_t x135 = 14764838LLU;
	int64_t x136 = INT64_MAX;
	static uint64_t t20 = 114804LLU;

	t20 = (((x133*x134)|x135)*x136);

	if (t20 != 9223372036854777033LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x137 = 227520U;
	static uint32_t x138 = 3762145U;
	int8_t x139 = INT8_MIN;
	int8_t x140 = -1;

	t21 = (((x137*x138)|x139)*x140);

	if (t21 != 64U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	static uint32_t t22 = 1424884336U;

	t22 = (((x149*x150)|x151)*x152);

	if (t22 != 2990800896U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x153 = UINT16_MAX;
	static volatile int16_t x156 = 1394;
	uint64_t t23 = 7512949939090LLU;

	t23 = (((x153*x154)|x155)*x156);

	if (t23 != 18446744073709534888LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 29U;
	int64_t x160 = INT64_MAX;

	t24 = (((x157*x158)|x159)*x160);

	if (t24 != 9223372036854775829LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x161 = 43U;
	uint16_t x162 = UINT16_MAX;
	int64_t x163 = 1739695525935883LL;
	int64_t t25 = 22759632LL;

	t25 = (((x161*x162)|x163)*x164);

	if (t25 != 86984776430385550LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x165 = 25511890321LLU;
	uint32_t x166 = 9U;
	volatile int8_t x167 = -56;
	int64_t x168 = INT64_MAX;
	uint64_t t26 = 710482835136171LLU;

	t26 = (((x165*x166)|x167)*x168);

	if (t26 != 9223372036854775847LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x173 = 1;
	int8_t x175 = -15;
	uint8_t x176 = UINT8_MAX;
	static int32_t t27 = -1;

	t27 = (((x173*x174)|x175)*x176);

	if (t27 != -3825) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x189 = -20;
	static uint16_t x190 = 3U;
	int64_t x192 = 3571330706416LL;
	volatile int64_t t28 = -20LL;

	t28 = (((x189*x190)|x191)*x192);

	if (t28 != -3571330706416LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x205 = 0;
	int16_t x206 = -1;
	int64_t x207 = -1LL;
	static int16_t x208 = -5890;
	volatile int64_t t29 = -96989496030427688LL;

	t29 = (((x205*x206)|x207)*x208);

	if (t29 != 5890LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x210 = 1914LLU;
	uint64_t t30 = 10109789091LLU;

	t30 = (((x209*x210)|x211)*x212);

	if (t30 != 70952055414024LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x213 = 152273502618LLU;
	volatile uint64_t x214 = 603285837744LLU;
	volatile int8_t x216 = INT8_MIN;
	uint64_t t31 = 3289416LLU;

	t31 = (((x213*x214)|x215)*x216);

	if (t31 != 128LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x223 = INT8_MIN;
	int8_t x224 = 0;

	t32 = (((x221*x222)|x223)*x224);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x225 = -110794119681LL;
	int8_t x226 = 21;
	uint64_t x227 = 1032860560833904LLU;
	uint16_t x228 = UINT16_MAX;
	volatile uint64_t t33 = 412507569389107766LLU;

	t33 = (((x225*x226)|x227)*x228);

	if (t33 != 18438818734406959621LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x237 = 130746435LLU;
	volatile uint32_t x239 = 15U;
	volatile uint64_t t34 = 24187LLU;

	t34 = (((x237*x238)|x239)*x240);

	if (t34 != 16735543424LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x254 = INT64_MAX;
	volatile int8_t x255 = 14;
	int16_t x256 = INT16_MIN;
	static uint64_t t35 = 17465075883LLU;

	t35 = (((x253*x254)|x255)*x256);

	if (t35 != 1666220032LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x261 = UINT8_MAX;
	int32_t x262 = -93;
	int8_t x263 = INT8_MIN;
	volatile int8_t x264 = INT8_MAX;
	int32_t t36 = 41020834;

	t36 = (((x261*x262)|x263)*x264);

	if (t36 != -4445) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x273 = 9;
	volatile uint32_t x274 = 150967624U;
	volatile int16_t x275 = 19;
	int32_t x276 = 504197361;
	volatile uint32_t t37 = 50U;

	t37 = (((x273*x274)|x275)*x276);

	if (t37 != 4264210667U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x277 = 5102;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -1;
	volatile int32_t t38 = 4217391;

	t38 = (((x277*x278)|x279)*x280);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x281 = 13;
	int32_t x282 = -1;
	uint64_t x283 = 425787453077LLU;
	volatile uint64_t t39 = 58253332069241LLU;

	t39 = (((x281*x282)|x283)*x284);

	if (t39 != 9LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x289 = INT8_MIN;
	static uint16_t x290 = 92U;
	uint8_t x291 = 10U;
	uint32_t t40 = 12563U;

	t40 = (((x289*x290)|x291)*x292);

	if (t40 != 11766U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x296 = 90882732U;
	volatile uint32_t t41 = 26358306U;

	t41 = (((x293*x294)|x295)*x296);

	if (t41 != 4204084564U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x298 = -1;
	int8_t x299 = -25;
	static int64_t x300 = 3256136519886LL;
	static volatile int64_t t42 = 147690LL;

	t42 = (((x297*x298)|x299)*x300);

	if (t42 != -81403412997150LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x301 = 112U;
	static uint32_t x302 = 7374U;
	static uint32_t x304 = 12717517U;
	volatile uint32_t t43 = 385U;

	t43 = (((x301*x302)|x303)*x304);

	if (t43 != 4282249779U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x309 = 0LLU;
	uint16_t x310 = 13U;
	int64_t x311 = INT64_MIN;
	uint64_t t44 = 35587616LLU;

	t44 = (((x309*x310)|x311)*x312);

	if (t44 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int8_t x314 = INT8_MIN;
	volatile int64_t x315 = -22712330905276749LL;
	int16_t x316 = 4207;
	static volatile uint64_t t45 = 162436796LLU;

	t45 = (((x313*x314)|x315)*x316);

	if (t45 != 15129688323758026653LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x318 = -1LL;
	static int32_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	volatile int64_t t46 = -9448467072635LL;

	t46 = (((x317*x318)|x319)*x320);

	if (t46 != -65535LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x321 = 60;
	int8_t x322 = INT8_MIN;
	int16_t x324 = 4627;
	int32_t t47 = -62766;

	t47 = (((x321*x322)|x323)*x324);

	if (t47 != -4627) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x329 = 5U;
	volatile int8_t x331 = -1;
	int32_t x332 = -206;
	static volatile int32_t t48 = 1971862;

	t48 = (((x329*x330)|x331)*x332);

	if (t48 != 206) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x333 = 1U;
	uint32_t x334 = 5U;
	volatile uint32_t t49 = 1260U;

	t49 = (((x333*x334)|x335)*x336);

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;
	static int32_t t50 = 519383559;

	t50 = (((x341*x342)|x343)*x344);

	if (t50 != -32640) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x345 = 386U;
	int64_t x346 = -28879LL;
	volatile int64_t x347 = INT64_MIN;
	volatile uint8_t x348 = UINT8_MAX;
	int64_t t51 = 14925847002903231LL;

	t51 = (((x345*x346)|x347)*x348);

	if (t51 != -2842559970LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x353 = -85LL;
	int64_t x354 = -62487LL;
	int64_t x355 = -1LL;
	volatile int64_t t52 = 23471407014LL;

	t52 = (((x353*x354)|x355)*x356);

	if (t52 != 2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x361 = 4U;
	volatile int8_t x362 = 1;
	int8_t x363 = -1;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t53 = -3333432;

	t53 = (((x361*x362)|x363)*x364);

	if (t53 != -65535) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x373 = 5746;
	uint8_t x374 = 2U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t54 = -592439904;

	t54 = (((x373*x374)|x375)*x376);

	if (t54 != -1474304) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x381 = -8078;
	int8_t x382 = -1;
	int16_t x383 = 735;
	static uint64_t x384 = 33384196611474738LLU;
	volatile uint64_t t55 = 178LLU;

	t55 = (((x381*x382)|x383)*x384);

	if (t55 != 14127243121088664718LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x385 = UINT8_MAX;
	static volatile uint8_t x386 = 36U;
	uint32_t x387 = 503U;

	t56 = (((x385*x386)|x387)*x388);

	if (t56 != 1170305U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x393 = UINT8_MAX;
	uint32_t x394 = UINT32_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	static volatile uint32_t t57 = 3084697U;

	t57 = (((x393*x394)|x395)*x396);

	if (t57 != 4294967189U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x398 = INT32_MAX;
	volatile int8_t x399 = INT8_MAX;
	uint16_t x400 = 0U;
	volatile int64_t t58 = -4670097772993313LL;

	t58 = (((x397*x398)|x399)*x400);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x401 = INT8_MAX;
	static int64_t x402 = -1LL;
	volatile int64_t x403 = INT64_MIN;
	static uint32_t x404 = 13U;
	static volatile int64_t t59 = 125500504844LL;

	t59 = (((x401*x402)|x403)*x404);

	if (t59 != -1651LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x405 = INT8_MIN;
	uint32_t x406 = UINT32_MAX;
	volatile int8_t x407 = -37;
	uint8_t x408 = 120U;
	static uint32_t t60 = 2052U;

	t60 = (((x405*x406)|x407)*x408);

	if (t60 != 4294962856U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int8_t x419 = 0;
	volatile int8_t x420 = 0;

	t61 = (((x417*x418)|x419)*x420);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x429 = 91U;
	volatile uint16_t x431 = UINT16_MAX;
	int8_t x432 = INT8_MAX;
	int32_t t62 = -206509;

	t62 = (((x429*x430)|x431)*x432);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x433 = -1337795;
	static volatile uint8_t x434 = 0U;
	uint32_t x435 = 30092157U;
	volatile uint32_t t63 = 27U;

	t63 = (((x433*x434)|x435)*x436);

	if (t63 != 2950153339U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x437 = INT16_MIN;
	volatile int64_t x438 = -1LL;
	uint8_t x439 = UINT8_MAX;
	static volatile uint64_t t64 = 32394005231334LLU;

	t64 = (((x437*x438)|x439)*x440);

	if (t64 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x449 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	static int32_t x452 = INT32_MIN;

	t65 = (((x449*x450)|x451)*x452);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x465 = UINT64_MAX;
	int64_t x467 = INT64_MIN;
	static int16_t x468 = INT16_MIN;
	uint64_t t66 = 48780029140454187LLU;

	t66 = (((x465*x466)|x467)*x468);

	if (t66 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x473 = UINT8_MAX;
	int8_t x474 = INT8_MAX;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t67 = 2;

	t67 = (((x473*x474)|x475)*x476);

	if (t67 != -4145280) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x477 = 66453751U;
	int16_t x479 = 13;

	t68 = (((x477*x478)|x479)*x480);

	if (t68 != 2147483648U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x481 = -1;
	uint16_t x482 = 61U;
	int32_t x484 = INT32_MIN;
	static uint32_t t69 = 5186U;

	t69 = (((x481*x482)|x483)*x484);

	if (t69 != 2147483648U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x485 = UINT32_MAX;
	static uint64_t x486 = UINT64_MAX;
	int64_t x487 = -1LL;
	static uint64_t x488 = UINT64_MAX;
	static volatile uint64_t t70 = 1097022308630798LLU;

	t70 = (((x485*x486)|x487)*x488);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x489 = 1;
	static volatile int8_t x490 = -1;
	static volatile int32_t x491 = -1;
	static int16_t x492 = INT16_MIN;
	volatile int32_t t71 = 1;

	t71 = (((x489*x490)|x491)*x492);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x498 = UINT16_MAX;
	int8_t x499 = INT8_MIN;
	int32_t x500 = 0;

	t72 = (((x497*x498)|x499)*x500);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x505 = INT16_MIN;
	volatile uint32_t x506 = 55330296U;
	volatile uint8_t x508 = 114U;
	static volatile uint64_t t73 = 655748068622525LLU;

	t73 = (((x505*x506)|x507)*x508);

	if (t73 != 183543086442840LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x509 = 11071471017459LL;
	int32_t x510 = -11;
	volatile int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MIN;

	t74 = (((x509*x510)|x511)*x512);

	if (t74 != 506871254779691008LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x513 = UINT8_MAX;
	int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MIN;
	static volatile int8_t x516 = INT8_MIN;

	t75 = (((x513*x514)|x515)*x516);

	if (t75 != 4194304) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x517 = 2660LLU;
	int8_t x518 = INT8_MIN;
	int64_t x519 = -1LL;
	int16_t x520 = -2400;
	volatile uint64_t t76 = 295194924395420LLU;

	t76 = (((x517*x518)|x519)*x520);

	if (t76 != 2400LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x521 = -5;
	int16_t x522 = INT16_MIN;
	static uint64_t x524 = 7550585927LLU;
	volatile uint64_t t77 = 1759477114439LLU;

	t77 = (((x521*x522)|x523)*x524);

	if (t77 != 18446743718832013047LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x525 = UINT16_MAX;
	int16_t x526 = -1;
	volatile int16_t x527 = INT16_MIN;
	uint32_t x528 = 12944768U;
	static volatile uint32_t t78 = 38U;

	t78 = (((x525*x526)|x527)*x528);

	if (t78 != 1040549248U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x533 = UINT16_MAX;
	uint8_t x535 = 51U;
	volatile int8_t x536 = INT8_MAX;
	volatile int32_t t79 = 36;

	t79 = (((x533*x534)|x535)*x536);

	if (t79 != 632544201) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x537 = INT16_MAX;
	int8_t x538 = INT8_MIN;
	uint64_t x540 = 35343163928343LLU;
	uint64_t t80 = 206848037273LLU;

	t80 = (((x537*x538)|x539)*x540);

	if (t80 != 18446708730545623273LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x541 = INT32_MAX;
	int8_t x542 = -1;
	static int16_t x543 = INT16_MIN;
	int8_t x544 = -3;

	t81 = (((x541*x542)|x543)*x544);

	if (t81 != 98301) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x545 = INT16_MIN;
	volatile uint8_t x546 = UINT8_MAX;
	volatile int8_t x547 = INT8_MIN;
	int64_t x548 = 199426905454LL;

	t82 = (((x545*x546)|x547)*x548);

	if (t82 != -25526643898112LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x551 = -52;
	volatile uint64_t t83 = 74702386LLU;

	t83 = (((x549*x550)|x551)*x552);

	if (t83 != 6272LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x553 = 323U;
	volatile int16_t x555 = 0;
	int16_t x556 = -1623;
	volatile uint32_t t84 = 497U;

	t84 = (((x553*x554)|x555)*x556);

	if (t84 != 4289725006U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x561 = INT64_MIN;
	int32_t x563 = INT32_MIN;
	uint64_t x564 = 6268LLU;
	volatile uint64_t t85 = 13LLU;

	t85 = (((x561*x562)|x563)*x564);

	if (t85 != 18446730613282045952LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x565 = -1LL;
	static uint16_t x566 = 3076U;
	uint32_t x567 = UINT32_MAX;
	int16_t x568 = -1;
	static int64_t t86 = 5539903LL;

	t86 = (((x565*x566)|x567)*x568);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x585 = INT64_MIN;
	static uint64_t x586 = UINT64_MAX;
	int64_t x587 = INT64_MIN;
	uint8_t x588 = 8U;

	t87 = (((x585*x586)|x587)*x588);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x594 = -1;
	int32_t x595 = -1124;
	int64_t x596 = -1LL;
	int64_t t88 = 22162599LL;

	t88 = (((x593*x594)|x595)*x596);

	if (t88 != 1123LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x597 = UINT32_MAX;
	int32_t x598 = -1;
	static volatile uint64_t x599 = 106093LLU;
	volatile int32_t x600 = INT32_MIN;
	uint64_t t89 = 95516531777915464LLU;

	t89 = (((x597*x598)|x599)*x600);

	if (t89 != 18446516240726884352LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x601 = INT16_MAX;
	uint8_t x602 = 1U;
	static uint32_t t90 = 35994U;

	t90 = (((x601*x602)|x603)*x604);

	if (t90 != 4231528449U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x609 = -19;
	uint8_t x610 = 25U;
	uint16_t x611 = UINT16_MAX;
	int32_t t91 = -7781;

	t91 = (((x609*x610)|x611)*x612);

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x613 = 149719254LL;
	static volatile int16_t x616 = INT16_MIN;
	static uint64_t t92 = 7976560105105LLU;

	t92 = (((x613*x614)|x615)*x616);

	if (t92 != 18446582175658999808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x617 = -46;
	static int8_t x618 = 0;
	uint64_t x619 = 417623732LLU;
	volatile int16_t x620 = INT16_MIN;

	t93 = (((x617*x618)|x619)*x620);

	if (t93 != 18446730389015101440LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x621 = INT32_MIN;
	static uint32_t x622 = 2461U;
	int8_t x623 = INT8_MIN;
	volatile int8_t x624 = 1;

	t94 = (((x621*x622)|x623)*x624);

	if (t94 != 4294967168U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x629 = 1676U;
	uint32_t x630 = UINT32_MAX;
	int8_t x631 = -1;
	static int32_t x632 = -1;

	t95 = (((x629*x630)|x631)*x632);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x641 = INT16_MIN;
	uint8_t x642 = 2U;
	int32_t x643 = -125;
	static volatile int32_t t96 = -86874153;

	t96 = (((x641*x642)|x643)*x644);

	if (t96 != -216000) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x645 = INT16_MIN;
	uint64_t x646 = UINT64_MAX;
	uint64_t x647 = 1909862LLU;
	volatile uint64_t t97 = 49LLU;

	t97 = (((x645*x646)|x647)*x648);

	if (t97 != 4171766157171610LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x649 = 0;
	static uint16_t x652 = 9U;

	t98 = (((x649*x650)|x651)*x652);

	if (t98 != 294903LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x658 = UINT16_MAX;
	volatile int64_t x660 = -1LL;
	int64_t t99 = 41249155043581234LL;

	t99 = (((x657*x658)|x659)*x660);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

