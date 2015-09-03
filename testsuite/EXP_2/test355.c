#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t x8 = INT32_MAX;
uint32_t t1 = 2038567U;
static int64_t x12 = INT64_MIN;
static int64_t t2 = -3280LL;
volatile int8_t x29 = -1;
volatile int32_t x30 = 23;
int8_t x32 = INT8_MAX;
static int64_t x48 = -1LL;
uint16_t x64 = 1U;
int8_t x69 = -1;
static uint32_t x71 = 60U;
uint16_t x72 = 1U;
static int32_t t11 = 408780595;
volatile int32_t x84 = INT32_MAX;
uint32_t x86 = UINT32_MAX;
static int32_t x97 = INT32_MIN;
static int8_t x98 = INT8_MAX;
static volatile uint16_t x109 = UINT16_MAX;
uint16_t x110 = 1U;
uint16_t x118 = UINT16_MAX;
uint32_t x120 = UINT32_MAX;
int32_t x130 = -183303;
uint16_t x131 = 39U;
volatile int64_t x137 = INT64_MIN;
uint64_t x141 = 8LLU;
int16_t x158 = INT16_MAX;
int8_t x161 = INT8_MIN;
static uint64_t t28 = 10038087LLU;
volatile uint8_t x171 = 1U;
static int32_t t29 = 67790265;
int8_t x187 = 0;
uint8_t x198 = 11U;
static volatile uint8_t x202 = 12U;
volatile uint64_t x211 = 1LLU;
uint64_t t35 = 91453LLU;
int8_t x217 = INT8_MIN;
static int8_t x219 = -1;
static uint64_t x220 = UINT64_MAX;
int16_t x222 = 2853;
int16_t x224 = -9;
uint16_t x225 = UINT16_MAX;
uint16_t x244 = UINT16_MAX;
int64_t x249 = -12923188499LL;
int32_t x251 = 9560;
volatile int64_t t41 = 10581326LL;
int16_t x264 = 1;
int64_t t44 = 20025062LL;
volatile int32_t x283 = -14443640;
static int32_t x284 = -1;
int64_t x290 = -166LL;
int8_t x306 = INT8_MIN;
int64_t t52 = -3240507749180712LL;
int16_t x314 = INT16_MIN;
volatile int64_t t61 = 7469641286733LL;
volatile int32_t x350 = -1;
volatile int64_t t63 = -530560432253LL;
volatile int64_t t66 = 1LL;
int8_t x371 = -1;
int16_t x373 = INT16_MAX;
volatile uint32_t x374 = 1U;
volatile int16_t x379 = INT16_MAX;
volatile int32_t t69 = -6653334;
volatile int16_t x382 = INT16_MIN;
volatile uint16_t x383 = 7516U;
volatile uint64_t t70 = 16LLU;
static int8_t x386 = 1;
static volatile int32_t t71 = 25024565;
int64_t x389 = INT64_MIN;
int8_t x390 = INT8_MIN;
int64_t t72 = 68099187777LL;
static uint64_t x407 = 7716220LLU;
uint32_t x414 = 1904264U;
int32_t x418 = 219629;
int8_t x424 = -1;
volatile int64_t t78 = 555147041509LL;
static int8_t x442 = INT8_MAX;
static int64_t t80 = -316207LL;
int8_t x450 = -61;
int64_t x452 = INT64_MIN;
int64_t x470 = -1LL;
int8_t x472 = 20;
int64_t x473 = -60LL;
int64_t t84 = 960LL;
uint8_t x478 = 2U;
volatile int8_t x485 = -1;
int16_t x497 = INT16_MAX;
int8_t x498 = INT8_MIN;
int8_t x501 = -1;
uint8_t x510 = 41U;
int64_t x513 = INT64_MAX;
int8_t x524 = 3;
int32_t x526 = -1;
int64_t x529 = -15721817868LL;
int64_t t93 = -2940477069611LL;
int32_t x536 = 794;
int64_t x540 = -1LL;
volatile int32_t t96 = 185;
int32_t t97 = 11154619;
int32_t x552 = INT32_MIN;


void f0(void) {
	static int16_t x2 = 21;
	uint32_t x3 = 83U;
	int16_t x4 = 6;
	volatile uint32_t t0 = 10U;

	t0 = ((x1-(x2*x3))/x4);

	if (t0 != 715822130U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static uint32_t x6 = UINT32_MAX;
	static uint32_t x7 = 14943382U;

	t1 = ((x5-(x6*x7))/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = -65731455;
	uint16_t x11 = 5U;

	t2 = ((x9-(x10*x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -29LL;
	volatile int8_t x18 = 14;
	uint8_t x19 = 84U;
	static int32_t x20 = INT32_MAX;
	volatile int64_t t3 = -275119756241193LL;

	t3 = ((x17-(x18*x19))/x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x31 = -1LL;
	volatile int64_t t4 = -127420361083638996LL;

	t4 = ((x29-(x30*x31))/x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = 92;
	int8_t x35 = INT8_MAX;
	int8_t x36 = -1;
	volatile int32_t t5 = 3863;

	t5 = ((x33-(x34*x35))/x36);

	if (t5 != 11812) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 105U;
	int8_t x42 = -1;
	static int64_t x43 = -30546455768783LL;
	uint16_t x44 = 7827U;
	int64_t t6 = 5180442LL;

	t6 = ((x41-(x42*x43))/x44);

	if (t6 != -3902702921LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -533435776677186319LL;
	static int64_t x46 = -11816121LL;
	int16_t x47 = -6235;
	static volatile int64_t t7 = -626496885550560LL;

	t7 = ((x45-(x46*x47))/x48);

	if (t7 != 533435850350700754LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = 246281745750LLU;
	static int16_t x55 = INT16_MIN;
	static volatile int64_t x56 = -1LL;
	uint64_t t8 = 1716229598LLU;

	t8 = ((x53-(x54*x55))/x56);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = -1;
	int64_t x62 = 478LL;
	int32_t x63 = -1;
	static int64_t t9 = -46554LL;

	t9 = ((x61-(x62*x63))/x64);

	if (t9 != 477LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x70 = INT16_MIN;
	uint32_t t10 = 23317584U;

	t10 = ((x69-(x70*x71))/x72);

	if (t10 != 1966079U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = 10;
	int16_t x78 = -1;
	int8_t x79 = INT8_MAX;
	int8_t x80 = INT8_MIN;

	t11 = ((x77-(x78*x79))/x80);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MAX;
	uint8_t x83 = 90U;
	int32_t t12 = 7045658;

	t12 = ((x81-(x82*x83))/x84);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x85 = -1;
	volatile int8_t x87 = INT8_MAX;
	int32_t x88 = INT32_MIN;
	uint32_t t13 = 24890U;

	t13 = ((x85-(x86*x87))/x88);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = INT8_MAX;
	volatile int32_t x94 = -40233;
	uint8_t x95 = UINT8_MAX;
	int64_t x96 = -1LL;
	volatile int64_t t14 = 29912727LL;

	t14 = ((x93-(x94*x95))/x96);

	if (t14 != -10259542LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x99 = -1;
	int16_t x100 = -1;
	int32_t t15 = 13949851;

	t15 = ((x97-(x98*x99))/x100);

	if (t15 != 2147483521) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = -176;
	volatile uint8_t x102 = UINT8_MAX;
	int64_t x103 = -1LL;
	int8_t x104 = -1;
	int64_t t16 = 113989900855821LL;

	t16 = ((x101-(x102*x103))/x104);

	if (t16 != -79LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x105 = -1;
	volatile int64_t x106 = 2839LL;
	int16_t x107 = INT16_MIN;
	static int16_t x108 = INT16_MIN;
	int64_t t17 = -18641735021LL;

	t17 = ((x105-(x106*x107))/x108);

	if (t17 != -2838LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = 2;
	uint32_t t18 = 8U;

	t18 = ((x109-(x110*x111))/x112);

	if (t18 != 32768U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x117 = UINT16_MAX;
	int64_t x119 = -1404166LL;
	int64_t t19 = 358LL;

	t19 = ((x117-(x118*x119))/x120);

	if (t19 != 21LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = 4;
	static uint8_t x126 = 4U;
	uint32_t x127 = 1432770U;
	static int64_t x128 = -129471468001LL;
	int64_t t20 = -11975449277330461LL;

	t20 = ((x125-(x126*x127))/x128);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = 1;
	static uint16_t x132 = 1228U;
	int32_t t21 = -111248985;

	t21 = ((x129-(x130*x131))/x132);

	if (t21 != 5821) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x138 = -5LL;
	static uint64_t x139 = 47373085129LLU;
	int16_t x140 = 12180;
	static volatile uint64_t t22 = 2880243554LLU;

	t22 = ((x137-(x138*x139))/x140);

	if (t22 != 757255523293941LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x142 = INT32_MIN;
	volatile uint64_t x143 = 20528LLU;
	int32_t x144 = -55901;
	volatile uint64_t t23 = 96LLU;

	t23 = ((x141-(x142*x143))/x144);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x149 = 6716U;
	int16_t x150 = -1;
	static int8_t x151 = -17;
	uint64_t x152 = 87693246496LLU;
	uint64_t t24 = 394203721392LLU;

	t24 = ((x149-(x150*x151))/x152);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x153 = 6U;
	uint8_t x154 = UINT8_MAX;
	uint16_t x155 = 130U;
	volatile int16_t x156 = 6;
	volatile int32_t t25 = -25510855;

	t25 = ((x153-(x154*x155))/x156);

	if (t25 != -5524) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x157 = 54U;
	uint16_t x159 = 363U;
	int16_t x160 = -83;
	volatile int32_t t26 = 1;

	t26 = ((x157-(x158*x159))/x160);

	if (t26 != 143305) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x162 = -4;
	int8_t x163 = INT8_MAX;
	uint32_t x164 = 850426U;
	static volatile uint32_t t27 = 18731U;

	t27 = ((x161-(x162*x163))/x164);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x165 = 2LLU;
	uint64_t x166 = 989139752798154948LLU;
	uint16_t x167 = 16231U;
	int16_t x168 = 8;

	t28 = ((x165-(x166*x167))/x168);

	if (t28 != 1548345066770812068LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x169 = INT32_MAX;
	uint16_t x170 = 151U;
	int32_t x172 = INT32_MIN;

	t29 = ((x169-(x170*x171))/x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x185 = 447800LLU;
	int8_t x186 = 6;
	static int16_t x188 = -1;
	volatile uint64_t t30 = 1307LLU;

	t30 = ((x185-(x186*x187))/x188);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x189 = 7;
	int16_t x190 = -31;
	uint8_t x191 = 3U;
	int64_t x192 = INT64_MIN;
	int64_t t31 = 48LL;

	t31 = ((x189-(x190*x191))/x192);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x197 = 1U;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = -6LL;
	volatile uint64_t t32 = 10692LLU;

	t32 = ((x197-(x198*x199))/x200);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x201 = INT16_MIN;
	int16_t x203 = -1;
	volatile uint16_t x204 = 2U;
	volatile int32_t t33 = 0;

	t33 = ((x201-(x202*x203))/x204);

	if (t33 != -16378) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x205 = 474;
	static int8_t x206 = INT8_MAX;
	volatile uint16_t x207 = 45U;
	uint32_t x208 = UINT32_MAX;
	uint32_t t34 = 603U;

	t34 = ((x205-(x206*x207))/x208);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = INT16_MAX;
	int64_t x210 = -1LL;
	int8_t x212 = INT8_MIN;

	t35 = ((x209-(x210*x211))/x212);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = INT16_MIN;
	volatile uint64_t x214 = 746LLU;
	static int64_t x215 = INT64_MIN;
	static uint16_t x216 = 28U;
	volatile uint64_t t36 = 2840127006043700LLU;

	t36 = ((x213-(x214*x215))/x216);

	if (t36 != 658812288346768530LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x218 = 27U;
	uint64_t t37 = 59675904435531716LLU;

	t37 = ((x217-(x218*x219))/x220);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x221 = UINT64_MAX;
	uint16_t x223 = UINT16_MAX;
	volatile uint64_t t38 = 4170480801052585LLU;

	t38 = ((x221-(x222*x223))/x224);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x226 = UINT32_MAX;
	int64_t x227 = 41898LL;
	volatile int16_t x228 = 2986;
	int64_t t39 = -1838907870005134LL;

	t39 = ((x225-(x226*x227))/x228);

	if (t39 != -60264748714LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x241 = 33LLU;
	static int32_t x242 = INT32_MAX;
	volatile uint64_t x243 = 440990705856157217LLU;
	volatile uint64_t t40 = 30542649LLU;

	t40 = ((x241-(x242*x243))/x244);

	if (t40 != 22229674697643LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x250 = -1;
	int64_t x252 = INT64_MAX;

	t41 = ((x249-(x250*x251))/x252);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x253 = -5789;
	static int8_t x254 = INT8_MAX;
	int32_t x255 = 2;
	static int32_t x256 = -1;
	int32_t t42 = -956830708;

	t42 = ((x253-(x254*x255))/x256);

	if (t42 != 6043) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	int16_t x263 = INT16_MIN;
	int32_t t43 = -2849008;

	t43 = ((x261-(x262*x263))/x264);

	if (t43 != 8355839) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x269 = INT64_MIN;
	volatile int16_t x270 = INT16_MAX;
	int32_t x271 = -15030;
	int32_t x272 = -1;

	t44 = ((x269-(x270*x271))/x272);

	if (t44 != 9223372036362287798LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x273 = 1U;
	static int16_t x274 = 5441;
	int8_t x275 = INT8_MAX;
	volatile int16_t x276 = 864;
	static volatile int32_t t45 = 954742265;

	t45 = ((x273-(x274*x275))/x276);

	if (t45 != -799) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x277 = 7892676;
	uint8_t x278 = 4U;
	int32_t x279 = -1;
	static uint8_t x280 = UINT8_MAX;
	static volatile int32_t t46 = -543;

	t46 = ((x277-(x278*x279))/x280);

	if (t46 != 30951) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x281 = -1;
	uint64_t x282 = 1214LLU;
	volatile uint64_t t47 = 103LLU;

	t47 = ((x281-(x282*x283))/x284);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x285 = -3;
	uint64_t x286 = 7413290195LLU;
	int16_t x287 = -1;
	volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t48 = 8521237885LLU;

	t48 = ((x285-(x286*x287))/x288);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x289 = -7;
	static uint64_t x291 = UINT64_MAX;
	uint32_t x292 = 340U;
	static uint64_t t49 = 33LLU;

	t49 = ((x289-(x290*x291))/x292);

	if (t49 != 54255129628557504LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x293 = -6;
	int32_t x294 = -1;
	static int32_t x295 = -1;
	int16_t x296 = INT16_MAX;
	int32_t t50 = -335159;

	t50 = ((x293-(x294*x295))/x296);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x301 = INT32_MIN;
	volatile uint64_t x302 = 649183121582970178LLU;
	int64_t x303 = INT64_MIN;
	volatile int32_t x304 = INT32_MIN;
	static volatile uint64_t t51 = 27040LLU;

	t51 = ((x301-(x302*x303))/x304);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x305 = INT8_MIN;
	int64_t x307 = -1LL;
	static int16_t x308 = INT16_MAX;

	t52 = ((x305-(x306*x307))/x308);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x309 = -210377898;
	static int8_t x310 = INT8_MIN;
	volatile uint32_t x311 = 601953457U;
	volatile int32_t x312 = INT32_MIN;
	volatile uint32_t t53 = 2U;

	t53 = ((x309-(x310*x311))/x312);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x313 = -165714805667777644LL;
	static uint64_t x315 = 7152103058525118LLU;
	static volatile int32_t x316 = -1;
	volatile uint64_t t54 = 2172464656164221685LLU;

	t54 = ((x313-(x314*x315))/x316);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MAX;
	volatile int8_t x319 = 1;
	volatile int16_t x320 = INT16_MIN;
	int32_t t55 = -174055963;

	t55 = ((x317-(x318*x319))/x320);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x321 = -1;
	static int16_t x322 = INT16_MIN;
	int64_t x323 = 367224882927LL;
	int32_t x324 = -1;
	static volatile int64_t t56 = -8542832582722906LL;

	t56 = ((x321-(x322*x323))/x324);

	if (t56 != -12033224963751935LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x329 = -1;
	int8_t x330 = INT8_MIN;
	static int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	int32_t t57 = -2487;

	t57 = ((x329-(x330*x331))/x332);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x333 = 436U;
	int8_t x334 = -30;
	uint64_t x335 = 16577LLU;
	int64_t x336 = INT64_MIN;
	uint64_t t58 = 33422461874798552LLU;

	t58 = ((x333-(x334*x335))/x336);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = -6;
	uint16_t x338 = UINT16_MAX;
	static uint32_t x339 = 1184U;
	int32_t x340 = -1;
	uint32_t t59 = 3U;

	t59 = ((x337-(x338*x339))/x340);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x341 = UINT16_MAX;
	int16_t x342 = -196;
	static uint16_t x343 = 27U;
	int8_t x344 = INT8_MIN;
	int32_t t60 = -965694;

	t60 = ((x341-(x342*x343))/x344);

	if (t60 != -553) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x345 = 336603860LL;
	uint16_t x346 = 0U;
	int64_t x347 = 0LL;
	uint32_t x348 = UINT32_MAX;

	t61 = ((x345-(x346*x347))/x348);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x351 = -1LL;
	volatile uint32_t x352 = 45450672U;
	volatile int64_t t62 = 19LL;

	t62 = ((x349-(x350*x351))/x352);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x353 = 1962LL;
	int8_t x354 = 1;
	uint16_t x355 = UINT16_MAX;
	int8_t x356 = 16;

	t63 = ((x353-(x354*x355))/x356);

	if (t63 != -3973LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x357 = INT16_MIN;
	static volatile int8_t x358 = INT8_MAX;
	int32_t x359 = -1;
	uint64_t x360 = 8594140190228539LLU;
	static volatile uint64_t t64 = 14703LLU;

	t64 = ((x357-(x358*x359))/x360);

	if (t64 != 2146LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x361 = INT64_MIN;
	static int16_t x362 = INT16_MAX;
	int32_t x363 = -1;
	uint8_t x364 = 72U;
	volatile int64_t t65 = 1513532206048LL;

	t65 = ((x361-(x362*x363))/x364);

	if (t65 != -128102389400760320LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x365 = 2LL;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;
	uint16_t x368 = UINT16_MAX;

	t66 = ((x365-(x366*x367))/x368);

	if (t66 != -254LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	volatile int8_t x372 = -1;
	uint64_t t67 = 66LLU;

	t67 = ((x369-(x370*x371))/x372);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	volatile uint32_t t68 = 652723132U;

	t68 = ((x373-(x374*x375))/x376);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	int32_t x380 = -5;

	t69 = ((x377-(x378*x379))/x380);

	if (t69 != -838835) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;

	t70 = ((x381-(x382*x383))/x384);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x385 = -1;
	static int32_t x387 = -9;
	int32_t x388 = -1;

	t71 = ((x385-(x386*x387))/x388);

	if (t71 != -8) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x391 = 113U;
	uint8_t x392 = UINT8_MAX;

	t72 = ((x389-(x390*x391))/x392);

	if (t72 != -36170086419038279LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x401 = 1;
	static uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	static int32_t t73 = 16378320;

	t73 = ((x401-(x402*x403))/x404);

	if (t73 != -65280) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x405 = INT8_MIN;
	uint32_t x406 = 514056485U;
	static volatile uint16_t x408 = 23940U;
	uint64_t t74 = 590990LLU;

	t74 = ((x405-(x406*x407))/x408);

	if (t74 != 770375000032534LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x409 = 38U;
	int64_t x410 = -1LL;
	volatile int64_t x411 = -1LL;
	int8_t x412 = INT8_MIN;
	int64_t t75 = -1LL;

	t75 = ((x409-(x410*x411))/x412);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x413 = INT8_MAX;
	int16_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile uint32_t t76 = 2955811U;

	t76 = ((x413-(x414*x415))/x416);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x417 = INT16_MIN;
	int32_t x419 = -1;
	volatile uint8_t x420 = 8U;
	int32_t t77 = 1;

	t77 = ((x417-(x418*x419))/x420);

	if (t77 != 23357) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x421 = -1LL;
	uint8_t x422 = 6U;
	volatile int64_t x423 = 1749977261430196LL;

	t78 = ((x421-(x422*x423))/x424);

	if (t78 != 10499863568581177LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x441 = -1;
	int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MIN;
	int32_t t79 = -5668779;

	t79 = ((x441-(x442*x443))/x444);

	if (t79 != -126) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x445 = -9966881;
	volatile uint8_t x446 = UINT8_MAX;
	int64_t x447 = -1LL;
	int64_t x448 = -820084LL;

	t80 = ((x445-(x446*x447))/x448);

	if (t80 != 12LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x449 = 8U;
	uint32_t x451 = 6297U;
	static int64_t t81 = 263690440LL;

	t81 = ((x449-(x450*x451))/x452);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x457 = -1;
	int32_t x458 = 188683;
	int64_t x459 = -1LL;
	uint64_t x460 = 108394614354386LLU;
	volatile uint64_t t82 = 1670720273348501LLU;

	t82 = ((x457-(x458*x459))/x460);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x469 = -1;
	static uint16_t x471 = UINT16_MAX;
	static volatile int64_t t83 = -6469785640393LL;

	t83 = ((x469-(x470*x471))/x472);

	if (t83 != 3276LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x474 = -1;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = -3;

	t84 = ((x473-(x474*x475))/x476);

	if (t84 != -21825LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x477 = UINT8_MAX;
	volatile uint32_t x479 = 6670U;
	uint8_t x480 = 89U;
	static uint32_t t85 = 7U;

	t85 = ((x477-(x478*x479))/x480);

	if (t85 != 48257912U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x486 = -3251163431LL;
	int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MAX;
	static volatile int64_t t86 = 0LL;

	t86 = ((x485-(x486*x487))/x488);

	if (t86 != 12601024LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x499 = 205LL;
	int32_t x500 = -1;
	volatile int64_t t87 = -25422734LL;

	t87 = ((x497-(x498*x499))/x500);

	if (t87 != -59007LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x502 = -7291261174421LL;
	static uint64_t x503 = 171097376773LLU;
	int32_t x504 = INT32_MAX;
	volatile uint64_t t88 = 126372054477521716LLU;

	t88 = ((x501-(x502*x503))/x504);

	if (t88 != 8241663458LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x509 = INT8_MIN;
	int8_t x511 = INT8_MIN;
	static uint16_t x512 = 3U;
	volatile int32_t t89 = -25390861;

	t89 = ((x509-(x510*x511))/x512);

	if (t89 != 1706) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x514 = UINT64_MAX;
	volatile int32_t x515 = -1;
	static uint32_t x516 = UINT32_MAX;
	uint64_t t90 = 123LLU;

	t90 = ((x513-(x514*x515))/x516);

	if (t90 != 2147483648LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x521 = UINT8_MAX;
	volatile int64_t x522 = -1LL;
	volatile uint8_t x523 = UINT8_MAX;
	volatile int64_t t91 = 438940896052358713LL;

	t91 = ((x521-(x522*x523))/x524);

	if (t91 != 170LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x525 = -11;
	static int8_t x527 = INT8_MIN;
	uint64_t x528 = 62244575903964122LLU;
	uint64_t t92 = 2103120809913631LLU;

	t92 = ((x525-(x526*x527))/x528);

	if (t92 != 296LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x530 = 33U;
	volatile int64_t x531 = 309545906560444LL;
	int64_t x532 = 107710818903LL;

	t93 = ((x529-(x530*x531))/x532);

	if (t93 != -94837LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x533 = INT16_MIN;
	static int16_t x534 = 424;
	int16_t x535 = INT16_MAX;
	int32_t t94 = 7;

	t94 = ((x533-(x534*x535))/x536);

	if (t94 != -17539) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x537 = -1;
	static uint32_t x538 = 2790U;
	uint8_t x539 = 19U;
	int64_t t95 = -11089734LL;

	t95 = ((x537-(x538*x539))/x540);

	if (t95 != -4294914285LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x541 = 10820U;
	int16_t x542 = INT16_MIN;
	static uint8_t x543 = UINT8_MAX;
	uint8_t x544 = UINT8_MAX;

	t96 = ((x541-(x542*x543))/x544);

	if (t96 != 32810) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x545 = -1;
	uint16_t x546 = 48U;
	uint16_t x547 = UINT16_MAX;
	int8_t x548 = INT8_MAX;

	t97 = ((x545-(x546*x547))/x548);

	if (t97 != -24769) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x549 = -1;
	volatile int16_t x550 = -1;
	static int8_t x551 = INT8_MAX;
	volatile int32_t t98 = 341000947;

	t98 = ((x549-(x550*x551))/x552);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x557 = 6;
	uint64_t x558 = 1LLU;
	uint64_t x559 = UINT64_MAX;
	int64_t x560 = INT64_MIN;
	volatile uint64_t t99 = 1211573237197LLU;

	t99 = ((x557-(x558*x559))/x560);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

