#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x36 = INT32_MAX;
volatile uint32_t t4 = 83176U;
int8_t x40 = -1;
int16_t x45 = -1;
int16_t x46 = INT16_MIN;
int16_t x50 = INT16_MAX;
uint16_t x58 = 56U;
uint16_t x60 = UINT16_MAX;
volatile uint64_t t11 = 599900418484LLU;
uint8_t x77 = 0U;
volatile uint64_t t12 = 32423261LLU;
volatile int64_t x82 = INT64_MIN;
int16_t x84 = INT16_MIN;
static int16_t x96 = 4210;
int16_t x101 = INT16_MAX;
uint8_t x102 = 14U;
int64_t x122 = -1LL;
static int64_t x123 = -327577393955074LL;
static volatile int64_t t18 = 883263LL;
int64_t x131 = -16646LL;
int64_t x132 = -1LL;
int64_t t20 = 2619LL;
static volatile uint64_t t22 = 48180332752LLU;
uint64_t x173 = 4231911868406222330LLU;
int64_t x177 = -3LL;
volatile uint16_t x179 = UINT16_MAX;
volatile uint64_t t27 = 13700492797435638LLU;
uint64_t x181 = 848862LLU;
int8_t x186 = INT8_MIN;
static int16_t x187 = -1;
uint64_t x190 = 10LLU;
uint16_t x192 = 1755U;
uint32_t x194 = UINT32_MAX;
int64_t x199 = -1LL;
uint64_t x214 = 7092146803435480LLU;
static uint32_t x216 = 26962933U;
volatile uint64_t x224 = UINT64_MAX;
volatile uint16_t x228 = 7917U;
static int64_t x233 = -1LL;
volatile uint32_t x236 = UINT32_MAX;
int64_t x240 = INT64_MAX;
volatile uint64_t t41 = 21349860929LLU;
uint8_t x250 = 29U;
uint16_t x262 = 1U;
static volatile int8_t x315 = -1;
volatile uint64_t t48 = 109250536196880LLU;
int32_t x323 = -1;
int16_t x335 = INT16_MAX;
int16_t x340 = -1;
int32_t x351 = INT32_MIN;
uint16_t x373 = 1324U;
volatile uint32_t t58 = 424867U;
uint64_t x420 = 225422LLU;
static uint64_t x423 = 347037883761874LLU;
static int8_t x433 = INT8_MIN;
static volatile int64_t x445 = INT64_MIN;
int32_t x448 = -1;
uint16_t x450 = UINT16_MAX;
int32_t x466 = INT32_MIN;
volatile uint16_t x467 = 0U;
int64_t t66 = -372318107746188LL;
int16_t x472 = INT16_MAX;
int16_t x473 = -1;
volatile int64_t x477 = INT64_MAX;
uint64_t x478 = 735LLU;
uint16_t x484 = UINT16_MAX;
static uint64_t t70 = 2504931905999LLU;
uint16_t x506 = 3515U;
volatile int8_t x518 = 0;
static uint32_t x522 = 819951386U;
int64_t x524 = 63009LL;
static int64_t x529 = INT64_MIN;
uint64_t x541 = UINT64_MAX;
static int8_t x545 = -1;
static volatile int32_t x548 = INT32_MAX;
int64_t x554 = INT64_MIN;
uint16_t x556 = UINT16_MAX;
volatile int64_t t79 = 601601LL;
volatile int32_t t80 = 417910;
uint8_t x588 = 17U;
volatile uint8_t x601 = 96U;
volatile int8_t x602 = -1;
int8_t x604 = -1;
static int16_t x617 = INT16_MIN;
volatile int16_t x625 = -887;
static uint64_t x627 = 1373168404649159LLU;
uint64_t x628 = 15288938310214LLU;
int16_t x637 = INT16_MAX;
static volatile uint64_t x646 = 1690656132020011300LLU;
int8_t x647 = -1;
static int32_t x662 = -1;
int16_t x663 = -99;
static volatile uint8_t x670 = 1U;
static uint32_t x672 = 160070239U;
uint32_t x674 = UINT32_MAX;
volatile int64_t t95 = -4526007538595LL;
int32_t x716 = -1;


void f0(void) {
	volatile int64_t x1 = -1LL;
	int64_t x2 = -442LL;
	int8_t x3 = -1;
	uint64_t x4 = 17492062453731510LLU;
	volatile uint64_t t0 = 3908749LLU;

	t0 = ((x1^(x2*x3))*x4);

	if (t0 != 10697760406706492686LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = 59;
	static uint8_t x18 = 12U;
	uint8_t x19 = UINT8_MAX;
	volatile int32_t x20 = -1;
	int32_t t1 = 577769316;

	t1 = ((x17^(x18*x19))*x20);

	if (t1 != -3023) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x25 = 4767LLU;
	static int32_t x26 = 2327138;
	int16_t x27 = -1;
	int64_t x28 = 611847312LL;
	volatile uint64_t t2 = 7036215975903672LLU;

	t2 = ((x25^(x26*x27))*x28);

	if (t2 != 18445317931658804368LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 0U;
	int32_t x30 = -1;
	static volatile int32_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	int32_t t3 = -243;

	t3 = ((x29^(x30*x31))*x32);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x33 = 3U;
	static uint16_t x34 = 873U;
	uint32_t x35 = 19U;

	t4 = ((x33^(x34*x35))*x36);

	if (t4 != 4294950712U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -1;
	uint64_t x38 = 26797703LLU;
	static uint64_t x39 = 57159LLU;
	volatile uint64_t t5 = 3091389971304LLU;

	t5 = ((x37^(x38*x39))*x40);

	if (t5 != 1531729905778LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x47 = UINT32_MAX;
	int16_t x48 = INT16_MAX;
	static volatile uint32_t t6 = 1021U;

	t6 = ((x45^(x46*x47))*x48);

	if (t6 != 3221225473U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x49 = -1;
	int8_t x51 = -1;
	int32_t x52 = -1;
	int32_t t7 = 7652;

	t7 = ((x49^(x50*x51))*x52);

	if (t7 != -32766) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x57 = 880495700U;
	int64_t x59 = -1LL;
	int64_t t8 = -164625395135646LL;

	t8 = ((x57^(x58*x59))*x60);

	if (t8 != -57703286748060LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x65 = INT32_MIN;
	static uint8_t x66 = UINT8_MAX;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = -1;
	volatile int32_t t9 = -475040114;

	t9 = ((x65^(x66*x67))*x68);

	if (t9 != 2147418623) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = -1;
	static uint64_t x70 = 1691LLU;
	static volatile uint16_t x71 = UINT16_MAX;
	static int8_t x72 = INT8_MAX;
	volatile uint64_t t10 = 497815833LLU;

	t10 = ((x69^(x70*x71))*x72);

	if (t10 != 18446744059635451494LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = INT64_MIN;
	uint32_t x76 = UINT32_MAX;

	t11 = ((x73^(x74*x75))*x76);

	if (t11 != 2147483648LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x78 = 4;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = 4548580707356439114LLU;

	t12 = ((x77^(x78*x79))*x80);

	if (t12 != 13863175194616228864LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x83 = UINT64_MAX;
	uint64_t t13 = 123352755147336184LLU;

	t13 = ((x81^(x82*x83))*x84);

	if (t13 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = -9158;
	static int64_t x86 = -11813LL;
	static int32_t x87 = INT32_MIN;
	static uint8_t x88 = 54U;
	volatile int64_t t14 = -37788LL;

	t14 = ((x85^(x86*x87))*x88);

	if (t14 != -1369884114521028LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x93 = INT64_MAX;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = -1;
	volatile uint64_t t15 = 11LLU;

	t15 = ((x93^(x94*x95))*x96);

	if (t15 != 18446744073709543196LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = INT8_MIN;
	uint64_t t16 = 22LLU;

	t16 = ((x101^(x102*x103))*x104);

	if (t16 != 4192640LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x117 = -7215;
	int32_t x118 = -1;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 1083838588985251118LLU;
	uint64_t t17 = 14813537462733047LLU;

	t17 = ((x117^(x118*x119))*x120);

	if (t17 != 14730269820150846606LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x121 = 22527U;
	int16_t x124 = 3;

	t18 = ((x121^(x122*x123))*x124);

	if (t18 != 982732181931255LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x125 = -1;
	uint8_t x126 = 124U;
	int16_t x127 = 61;
	int8_t x128 = -5;
	static volatile int32_t t19 = 4142371;

	t19 = ((x125^(x126*x127))*x128);

	if (t19 != 37825) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x129 = UINT16_MAX;
	volatile int32_t x130 = INT32_MIN;

	t20 = ((x129^(x130*x131))*x132);

	if (t20 != -35747012870143LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x133 = INT8_MAX;
	uint64_t x134 = 90964803630LLU;
	int64_t x135 = 0LL;
	static int32_t x136 = INT32_MIN;
	volatile uint64_t t21 = 885LLU;

	t21 = ((x133^(x134*x135))*x136);

	if (t21 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x141 = 8030U;
	int16_t x142 = 16;
	volatile uint64_t x143 = UINT64_MAX;
	int16_t x144 = INT16_MAX;

	t22 = ((x141^(x142*x143))*x144);

	if (t22 != 18446744073446825810LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x149 = -29;
	int8_t x150 = -2;
	static uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MAX;
	uint64_t t23 = 13LLU;

	t23 = ((x149^(x150*x151))*x152);

	if (t23 != 18446744073709547679LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x157 = -332;
	int8_t x158 = 30;
	static volatile int16_t x159 = INT16_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t24 = 0U;

	t24 = ((x157^(x158*x159))*x160);

	if (t24 != 982698U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x161 = 25;
	int8_t x162 = -5;
	static uint8_t x163 = 62U;
	static int32_t x164 = -1;
	int32_t t25 = 183932;

	t25 = ((x161^(x162*x163))*x164);

	if (t25 != 301) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x174 = 1;
	int8_t x175 = -1;
	int32_t x176 = -3618959;
	volatile uint64_t t26 = 15302848748151LLU;

	t26 = ((x173^(x174*x175))*x176);

	if (t26 != 1424083338084415285LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x178 = 1635003LLU;
	volatile int32_t x180 = 54137679;

	t27 = ((x177^(x178*x179))*x180);

	if (t27 != 12645896012820483784LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x182 = 10;
	static int32_t x183 = 7329;
	int16_t x184 = -382;
	uint64_t t28 = 4885757LLU;

	t28 = ((x181^(x182*x183))*x184);

	if (t28 != 18446744073360866600LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x185 = 31U;
	volatile int16_t x188 = 15;
	int32_t t29 = 334400008;

	t29 = ((x185^(x186*x187))*x188);

	if (t29 != 2385) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x189 = INT64_MIN;
	uint64_t x191 = 3108942LLU;
	uint64_t t30 = 668235342730149905LLU;

	t30 = ((x189^(x190*x191))*x192);

	if (t30 != 9223372091416707908LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x193 = INT32_MIN;
	int16_t x195 = -14098;
	int64_t x196 = -2492981LL;
	int64_t t31 = -6000825LL;

	t31 = ((x193^(x194*x195))*x196);

	if (t31 != -5353671078320826LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = INT16_MIN;
	static int32_t x198 = 308618206;
	int32_t x200 = -158;
	int64_t t32 = 19324064853254895LL;

	t32 = ((x197^(x198*x199))*x200);

	if (t32 != -48763952380LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = -1;
	int16_t x202 = INT16_MIN;
	volatile uint32_t x203 = 25U;
	int16_t x204 = INT16_MIN;
	volatile uint32_t t33 = 1857204850U;

	t33 = ((x201^(x202*x203))*x204);

	if (t33 != 3221258240U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x205 = -1LL;
	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 33U;
	uint32_t x208 = 7U;
	volatile int64_t t34 = -18LL;

	t34 = ((x205^(x206*x207))*x208);

	if (t34 != -30064770848LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x209 = UINT16_MAX;
	volatile int8_t x210 = 14;
	static uint64_t x211 = 404135669726LLU;
	static uint32_t x212 = 199922426U;
	uint64_t t35 = 10453958LLU;

	t35 = ((x209^(x210*x211))*x212);

	if (t35 != 5889590867024115166LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = -3940;
	volatile int16_t x215 = INT16_MIN;
	static uint64_t t36 = 14988445278074157LLU;

	t36 = ((x213^(x214*x215))*x216);

	if (t36 != 1870364577071528268LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 596LLU;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MAX;
	uint64_t t37 = 6625LLU;

	t37 = ((x217^(x218*x219))*x220);

	if (t37 != 2480275329LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x221 = 7701492841LL;
	static int8_t x222 = INT8_MIN;
	int8_t x223 = -1;
	uint64_t t38 = 43284026005351838LLU;

	t38 = ((x221^(x222*x223))*x224);

	if (t38 != 18446744066008058647LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x225 = -4;
	uint32_t x226 = 625969076U;
	int8_t x227 = INT8_MIN;
	volatile uint32_t t39 = 13U;

	t39 = ((x225^(x226*x227))*x228);

	if (t39 != 1138513484U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x234 = INT16_MIN;
	uint16_t x235 = 26978U;
	int64_t t40 = -496678803940840LL;

	t40 = ((x233^(x234*x235))*x236);

	if (t40 != 3796815955671056385LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x237 = 6873826681LLU;
	int8_t x238 = INT8_MIN;
	int16_t x239 = 52;

	t41 = ((x237^(x238*x239))*x240);

	if (t41 != 9223372043728608391LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x245 = INT8_MIN;
	static int16_t x246 = 14324;
	static int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	static int32_t t42 = -189629356;

	t42 = ((x245^(x246*x247))*x248);

	if (t42 != 232864256) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x249 = 2952943U;
	static volatile uint32_t x251 = UINT32_MAX;
	uint16_t x252 = UINT16_MAX;
	static uint32_t t43 = 21240U;

	t43 = ((x249^(x250*x251))*x252);

	if (t43 != 4047048436U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x261 = UINT64_MAX;
	uint32_t x263 = 4988122U;
	volatile uint16_t x264 = UINT16_MAX;
	static uint64_t t44 = 1498LLU;

	t44 = ((x261^(x262*x263))*x264);

	if (t44 != 18446743746812910811LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x297 = -1;
	int64_t x298 = 593LL;
	int64_t x299 = 4646965125LL;
	int32_t x300 = -3952;
	volatile int64_t t45 = 198485599LL;

	t45 = ((x297^(x298*x299))*x300);

	if (t45 != 10890330061185952LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x301 = -1LL;
	static uint32_t x302 = 76U;
	int64_t x303 = 803LL;
	int8_t x304 = INT8_MIN;
	int64_t t46 = 432LL;

	t46 = ((x301^(x302*x303))*x304);

	if (t46 != 7811712LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x313 = INT32_MIN;
	uint64_t x314 = UINT64_MAX;
	int32_t x316 = 63;
	static volatile uint64_t t47 = 16800284312LLU;

	t47 = ((x313^(x314*x315))*x316);

	if (t47 != 18446743938418081855LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	static uint64_t x319 = UINT64_MAX;
	int32_t x320 = INT32_MAX;

	t48 = ((x317^(x318*x319))*x320);

	if (t48 != 18446673430087499904LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x321 = -1LL;
	uint64_t x322 = UINT64_MAX;
	uint16_t x324 = UINT16_MAX;
	uint64_t t49 = 2484678002597LLU;

	t49 = ((x321^(x322*x323))*x324);

	if (t49 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x325 = 11892;
	int64_t x326 = -1LL;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = 485U;
	int64_t t50 = 86405LL;

	t50 = ((x325^(x326*x327))*x328);

	if (t50 != -2083053370455LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x333 = -1LL;
	int16_t x334 = -1;
	uint32_t x336 = 13470U;
	static int64_t t51 = 474870784325247655LL;

	t51 = ((x333^(x334*x335))*x336);

	if (t51 != 441358020LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x337 = 27U;
	uint32_t x338 = 179U;
	uint8_t x339 = 18U;
	static volatile uint32_t t52 = 293543554U;

	t52 = ((x337^(x338*x339))*x340);

	if (t52 != 4294964083U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x345 = 13252283462LL;
	int32_t x346 = -161;
	uint16_t x347 = 16493U;
	uint8_t x348 = 1U;
	static volatile int64_t t53 = -11908019180572217LL;

	t53 = ((x345^(x346*x347))*x348);

	if (t53 != -13250676939LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x349 = 1U;
	uint32_t x350 = 6445861U;
	int16_t x352 = 2105;
	volatile uint32_t t54 = 165U;

	t54 = ((x349^(x350*x351))*x352);

	if (t54 != 2147485753U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x365 = 2583799;
	uint32_t x366 = 25042865U;
	uint64_t x367 = 53955515011LLU;
	int64_t x368 = INT64_MAX;
	volatile uint64_t t55 = 8168631677311812904LLU;

	t55 = ((x365^(x366*x367))*x368);

	if (t55 != 17095543395281074844LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x374 = 6;
	static volatile int16_t x375 = INT16_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t56 = 1504476508LL;

	t56 = ((x373^(x374*x375))*x376);

	if (t56 != 195284LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x377 = 120967524137025LLU;
	uint16_t x378 = UINT16_MAX;
	volatile uint8_t x379 = 32U;
	uint16_t x380 = 1487U;
	uint64_t t57 = 1LLU;

	t57 = ((x377^(x378*x379))*x380);

	if (t57 != 179878708738691119LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x389 = 7377857U;
	int8_t x390 = -1;
	static uint16_t x391 = UINT16_MAX;
	uint32_t x392 = 14188U;

	t58 = ((x389^(x390*x391))*x392);

	if (t58 != 2840630528U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x417 = UINT16_MAX;
	uint16_t x418 = 708U;
	int16_t x419 = -1;
	static uint64_t t59 = 6108068001LLU;

	t59 = ((x417^(x418*x419))*x420);

	if (t59 != 18446744059095668778LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x421 = -63485304265861LL;
	uint64_t x422 = UINT64_MAX;
	uint16_t x424 = 217U;
	volatile uint64_t t60 = 247558969367954313LLU;

	t60 = ((x421^(x422*x423))*x424);

	if (t60 != 61583699327442957LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x434 = 2278167LL;
	uint32_t x435 = 2819U;
	static int32_t x436 = -3584;
	volatile int64_t t61 = -27604682LL;

	t61 = ((x433^(x434*x435))*x436);

	if (t61 != 23016995502592LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x437 = 0U;
	int8_t x438 = INT8_MIN;
	static int8_t x439 = -1;
	int8_t x440 = INT8_MIN;
	static int32_t t62 = -21991795;

	t62 = ((x437^(x438*x439))*x440);

	if (t62 != -16384) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x446 = -77;
	int16_t x447 = 2;
	volatile int64_t t63 = 52528LL;

	t63 = ((x445^(x446*x447))*x448);

	if (t63 != -9223372036854775654LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x449 = 12903461507106440LL;
	volatile int16_t x451 = 2;
	int32_t x452 = -9;
	volatile int64_t t64 = 1327068LL;

	t64 = ((x449^(x450*x451))*x452);

	if (t64 != -116131153563927846LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x457 = INT16_MIN;
	static uint8_t x458 = 1U;
	volatile uint16_t x459 = 2U;
	int16_t x460 = 9;
	volatile int32_t t65 = 451;

	t65 = ((x457^(x458*x459))*x460);

	if (t65 != -294894) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x465 = 3074U;
	int64_t x468 = 2012126212189962LL;

	t66 = ((x465^(x466*x467))*x468);

	if (t66 != 6185275976271943188LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x469 = 0U;
	static volatile uint64_t x470 = 164376065695415377LLU;
	uint32_t x471 = 407237U;
	volatile uint64_t t67 = 13762974572LLU;

	t67 = ((x469^(x470*x471))*x472);

	if (t67 != 3447610321966743467LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x474 = -1LL;
	volatile uint32_t x475 = UINT32_MAX;
	int16_t x476 = -989;
	static int64_t t68 = 4339910373LL;

	t68 = ((x473^(x474*x475))*x476);

	if (t68 != -4247722653766LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x479 = -9;
	volatile int16_t x480 = -1;
	volatile uint64_t t69 = 775LLU;

	t69 = ((x477^(x478*x479))*x480);

	if (t69 != 9223372036854769194LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x481 = 15711777412802195LLU;
	static uint32_t x482 = 713090U;
	uint16_t x483 = 0U;

	t70 = ((x481^(x482*x483))*x484);

	if (t70 != 15100408693966510445LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x489 = -1;
	static volatile uint32_t x490 = 15339U;
	uint8_t x491 = 19U;
	int64_t x492 = 3356119LL;
	volatile int64_t t71 = -20904430LL;

	t71 = ((x489^(x490*x491))*x492);

	if (t71 != 14413443232450626LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x493 = -1;
	int64_t x494 = -62LL;
	volatile int32_t x495 = INT32_MIN;
	int16_t x496 = 1539;
	static volatile int64_t t72 = -63LL;

	t72 = ((x493^(x494*x495))*x496);

	if (t72 != -204908594726403LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x505 = INT8_MIN;
	static uint64_t x507 = 1LLU;
	int8_t x508 = -1;
	volatile uint64_t t73 = 0LLU;

	t73 = ((x505^(x506*x507))*x508);

	if (t73 != 3525LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x517 = -316875023;
	static volatile uint64_t x519 = UINT64_MAX;
	int64_t x520 = INT64_MIN;
	uint64_t t74 = 1411273418687546LLU;

	t74 = ((x517^(x518*x519))*x520);

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x521 = INT8_MAX;
	static uint32_t x523 = 5U;
	volatile int64_t t75 = 788960595018LL;

	t75 = ((x521^(x522*x523))*x524);

	if (t75 != 258321592152477LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x530 = -1;
	uint8_t x531 = 16U;
	static uint8_t x532 = 0U;
	int64_t t76 = 7503088738LL;

	t76 = ((x529^(x530*x531))*x532);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x542 = INT8_MIN;
	volatile int8_t x543 = 44;
	static volatile uint8_t x544 = UINT8_MAX;
	volatile uint64_t t77 = 4548104396715334289LLU;

	t77 = ((x541^(x542*x543))*x544);

	if (t77 != 1435905LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x546 = INT16_MIN;
	volatile int64_t x547 = 64128LL;
	int64_t t78 = 399131LL;

	t78 = ((x545^(x546*x547))*x548);

	if (t78 != 4512606822376407041LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x553 = -1;
	uint8_t x555 = 0U;

	t79 = ((x553^(x554*x555))*x556);

	if (t79 != -65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x573 = -1;
	uint8_t x574 = UINT8_MAX;
	volatile int8_t x575 = -1;
	int16_t x576 = -1;

	t80 = ((x573^(x574*x575))*x576);

	if (t80 != -254) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x585 = -1;
	volatile int16_t x586 = INT16_MIN;
	int8_t x587 = INT8_MIN;
	int32_t t81 = -80780;

	t81 = ((x585^(x586*x587))*x588);

	if (t81 != -71303185) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x603 = 11314U;
	int32_t t82 = 5;

	t82 = ((x601^(x602*x603))*x604);

	if (t82 != 11346) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x609 = 911U;
	int64_t x610 = 1117138LL;
	uint16_t x611 = 27798U;
	uint8_t x612 = UINT8_MAX;
	volatile int64_t t83 = 329LL;

	t83 = ((x609^(x610*x611))*x612);

	if (t83 != 7918821637245LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x613 = 271697638LLU;
	static volatile int32_t x614 = -3826628;
	volatile uint32_t x615 = 1360U;
	int16_t x616 = INT16_MAX;
	volatile uint64_t t84 = 6712979810734902723LLU;

	t84 = ((x613^(x614*x615))*x616);

	if (t84 != 119834991314906LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x618 = -1;
	uint32_t x619 = 154114355U;
	uint64_t x620 = UINT64_MAX;
	uint64_t t85 = 583077446LLU;

	t85 = ((x617^(x618*x619))*x620);

	if (t85 != 18446744073555417395LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x621 = INT32_MIN;
	uint64_t x622 = 7711772561LLU;
	static uint32_t x623 = 233983033U;
	int64_t x624 = 7077986350786827LL;
	volatile uint64_t t86 = 137799993805333LLU;

	t86 = ((x621^(x622*x623))*x624);

	if (t86 != 14765559735197685027LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x626 = INT64_MIN;
	static volatile uint64_t t87 = 811672LLU;

	t87 = ((x625^(x626*x627))*x628);

	if (t87 != 18433182785428391798LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x638 = 13U;
	int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MIN;
	static int32_t t88 = -27;

	t88 = ((x637^(x638*x639))*x640);

	if (t88 != 3981440) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x645 = INT8_MIN;
	int16_t x648 = 10;
	volatile uint64_t t89 = 415796765LLU;

	t89 = ((x645^(x646*x647))*x648);

	if (t89 != 16906561320200113560LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x661 = -1LL;
	uint8_t x664 = UINT8_MAX;
	int64_t t90 = -13949437098351550LL;

	t90 = ((x661^(x662*x663))*x664);

	if (t90 != -25500LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x669 = -1;
	uint16_t x671 = 3U;
	volatile uint32_t t91 = 21U;

	t91 = ((x669^(x670*x671))*x672);

	if (t91 != 3654686340U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x673 = UINT32_MAX;
	uint16_t x675 = 126U;
	static int8_t x676 = -1;
	uint32_t t92 = 1U;

	t92 = ((x673^(x674*x675))*x676);

	if (t92 != 4294967171U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x685 = 2893U;
	static int8_t x686 = 3;
	volatile uint64_t x687 = UINT64_MAX;
	static volatile int64_t x688 = -2485113107212LL;
	volatile uint64_t t93 = 3179243043037805LLU;

	t93 = ((x685^(x686*x687))*x688);

	if (t93 != 7196887558485952LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x697 = -1;
	int8_t x698 = -5;
	int64_t x699 = -1410670565LL;
	volatile uint8_t x700 = 33U;
	static volatile int64_t t94 = 21570868LL;

	t94 = ((x697^(x698*x699))*x700);

	if (t94 != -232760643258LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x701 = -115920LL;
	volatile int8_t x702 = INT8_MIN;
	uint16_t x703 = 809U;
	static int32_t x704 = -1;

	t95 = ((x701^(x702*x703))*x704);

	if (t95 != -20656LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x709 = 3054;
	static int32_t x710 = INT32_MIN;
	uint64_t x711 = 51453887920515210LLU;
	static int32_t x712 = INT32_MIN;
	volatile uint64_t t96 = 233442152LLU;

	t96 = ((x709^(x710*x711))*x712);

	if (t96 != 9223365478439714816LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x713 = UINT8_MAX;
	int32_t x714 = -1;
	static uint16_t x715 = UINT16_MAX;
	static int32_t t97 = 63456;

	t97 = ((x713^(x714*x715))*x716);

	if (t97 != 65282) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x717 = 52375U;
	int8_t x718 = -1;
	static int32_t x719 = -3;
	int16_t x720 = 1;
	uint32_t t98 = 1U;

	t98 = ((x717^(x718*x719))*x720);

	if (t98 != 52372U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x733 = 735157205253LLU;
	static int8_t x734 = -1;
	volatile int8_t x735 = -1;
	uint32_t x736 = UINT32_MAX;
	static volatile uint64_t t99 = 913250135LLU;

	t99 = ((x733^(x734*x735))*x736);

	if (t99 != 3082916636608907004LLU) { NG(); } else { ; }
	
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

