#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
volatile int64_t x4 = INT64_MAX;
static int32_t x15 = -22;
static volatile uint32_t x28 = UINT32_MAX;
static int64_t x48 = INT64_MIN;
volatile uint16_t x69 = 1809U;
int8_t x71 = INT8_MIN;
uint32_t x73 = 285636U;
volatile int8_t x81 = -1;
int16_t x92 = 916;
uint16_t x93 = 3U;
int64_t x96 = 0LL;
int32_t t9 = -1008359;
uint16_t x98 = UINT16_MAX;
volatile uint32_t x99 = 1596895973U;
uint64_t x102 = 224276LLU;
static uint64_t x114 = 2LLU;
volatile uint64_t x115 = UINT64_MAX;
int64_t x129 = INT64_MAX;
uint32_t x149 = UINT32_MAX;
volatile int8_t x164 = 1;
uint64_t t16 = 5LLU;
uint8_t x173 = 2U;
int16_t x175 = INT16_MIN;
int32_t x176 = -578658289;
volatile int32_t t19 = 784;
int64_t x177 = 986008913LL;
static uint64_t x179 = 2750542391817LLU;
static int32_t t21 = -121;
static uint16_t x207 = 14U;
volatile int64_t t25 = -2457LL;
volatile uint64_t t26 = 107LLU;
int8_t x223 = -49;
uint16_t x224 = 55U;
volatile uint32_t x230 = 0U;
int64_t x241 = 14524922492LL;
volatile uint64_t x242 = 656685737LLU;
int32_t x245 = -1;
int64_t x246 = 2587804889338LL;
uint32_t t31 = 18894U;
static uint16_t x261 = UINT16_MAX;
int32_t x274 = 4079931;
static int32_t x296 = INT32_MIN;
int32_t x301 = INT32_MAX;
uint32_t x302 = 118951483U;
int8_t x303 = 15;
static int32_t x313 = INT32_MIN;
uint32_t t39 = 14041847U;
int16_t x323 = INT16_MIN;
volatile int64_t x327 = 106917409093140515LL;
int64_t x346 = 748110733407283LL;
int64_t x347 = -1LL;
int16_t x348 = -16;
volatile int64_t t44 = 7LL;
volatile int64_t t46 = 115LL;
uint16_t x386 = UINT16_MAX;
int16_t x387 = INT16_MIN;
int8_t x392 = INT8_MAX;
uint16_t x395 = 0U;
uint64_t x414 = 525886LLU;
int32_t x419 = 19757724;
int64_t x420 = -20LL;
volatile uint64_t x434 = UINT64_MAX;
int64_t x436 = 497660910020555LL;
int64_t x441 = INT64_MIN;
volatile uint32_t x443 = UINT32_MAX;
volatile uint16_t x449 = 50U;
int8_t x452 = -1;
volatile int64_t x457 = INT64_MAX;
int64_t x460 = -1LL;
volatile int64_t t60 = 90307LL;
static int64_t x467 = 5747801285408LL;
int32_t x475 = INT32_MAX;
volatile uint32_t t63 = 130924266U;
static uint32_t x485 = UINT32_MAX;
static volatile uint32_t x486 = 1938517U;
int32_t x490 = INT32_MAX;
static uint64_t x501 = 243881824348490042LLU;
volatile int64_t x504 = INT64_MIN;
static volatile uint32_t x505 = 28107U;
int32_t t71 = -7;
static int8_t x583 = INT8_MIN;
int32_t x590 = 4034;
uint32_t x600 = 75168U;
uint64_t x622 = 170003423733LLU;
int8_t x639 = INT8_MIN;
uint32_t x640 = UINT32_MAX;
uint8_t x641 = 20U;
volatile int8_t x653 = -1;
int32_t x655 = -1;
static int32_t x677 = -1;
volatile uint16_t x693 = UINT16_MAX;
int64_t x705 = -1LL;
static uint32_t x706 = 47010U;
volatile int64_t t90 = 209631880LL;
uint16_t x730 = 7790U;
volatile int32_t x732 = INT32_MAX;
volatile int32_t t92 = -24569;
int32_t x736 = INT32_MAX;
volatile uint64_t x738 = 157551223LLU;
volatile int64_t x747 = -1LL;
int32_t x754 = 1028722339;
volatile uint8_t x759 = 0U;
volatile int64_t t97 = -211005134LL;
int8_t x776 = -1;


void f0(void) {
	int8_t x1 = -4;
	int16_t x3 = -1;
	int32_t t0 = -8;

	t0 = (x1-(x2>>(x3==x4)));

	if (t0 != -259) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 6U;
	volatile uint16_t x14 = 2572U;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t1 = 12166418;

	t1 = (x13-(x14>>(x15==x16)));

	if (t1 != -2566) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x17 = -1;
	int32_t x18 = INT32_MAX;
	int8_t x19 = -17;
	static volatile uint16_t x20 = UINT16_MAX;
	volatile int32_t t2 = INT32_MIN;

	t2 = (x17-(x18>>(x19==x20)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = 1LL;
	int64_t t3 = 13417083LL;

	t3 = (x25-(x26>>(x27==x28)));

	if (t3 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x45 = 67724169U;
	static uint32_t x46 = 1876418U;
	volatile int8_t x47 = -1;
	uint32_t t4 = 281544084U;

	t4 = (x45-(x46>>(x47==x48)));

	if (t4 != 65847751U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x70 = INT64_MAX;
	volatile uint32_t x72 = 96416U;
	static volatile int64_t t5 = 126252497LL;

	t5 = (x69-(x70>>(x71==x72)));

	if (t5 != -9223372036854773998LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x74 = 1;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MAX;
	uint32_t t6 = 780U;

	t6 = (x73-(x74>>(x75==x76)));

	if (t6 != 285635U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x82 = 122248U;
	volatile int16_t x83 = INT16_MIN;
	int32_t x84 = 27433;
	uint32_t t7 = 125918U;

	t7 = (x81-(x82>>(x83==x84)));

	if (t7 != 4294845047U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x89 = 212889423U;
	int16_t x90 = INT16_MAX;
	int32_t x91 = 215460505;
	uint32_t t8 = 48865628U;

	t8 = (x89-(x90>>(x91==x92)));

	if (t8 != 212856656U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x94 = 30U;
	uint8_t x95 = 1U;

	t9 = (x93-(x94>>(x95==x96)));

	if (t9 != -27) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x97 = UINT32_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint32_t t10 = 36U;

	t10 = (x97-(x98>>(x99==x100)));

	if (t10 != 4294901760U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x101 = INT8_MIN;
	int32_t x103 = -1;
	int16_t x104 = -1;
	uint64_t t11 = 14310273124LLU;

	t11 = (x101-(x102>>(x103==x104)));

	if (t11 != 18446744073709439350LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x105 = UINT16_MAX;
	volatile int64_t x106 = INT64_MAX;
	static volatile uint16_t x107 = UINT16_MAX;
	volatile int8_t x108 = INT8_MAX;
	int64_t t12 = 4226271414793340120LL;

	t12 = (x105-(x106>>(x107==x108)));

	if (t12 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x113 = INT32_MIN;
	int64_t x116 = -1LL;
	uint64_t t13 = 15400856081LLU;

	t13 = (x113-(x114>>(x115==x116)));

	if (t13 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x130 = 41070LL;
	int64_t x131 = 1LL;
	int32_t x132 = -14;
	int64_t t14 = 946687991467660662LL;

	t14 = (x129-(x130>>(x131==x132)));

	if (t14 != 9223372036854734737LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x150 = 137986771LLU;
	static volatile uint64_t x151 = 341970852640362702LLU;
	volatile int64_t x152 = INT64_MIN;
	volatile uint64_t t15 = 298213346418639367LLU;

	t15 = (x149-(x150>>(x151==x152)));

	if (t15 != 4156980524LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x161 = UINT16_MAX;
	uint64_t x162 = 1015823632533275857LLU;
	int8_t x163 = INT8_MIN;

	t16 = (x161-(x162>>(x163==x164)));

	if (t16 != 17430920441176341294LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x165 = 3055208572682591838LL;
	int64_t x166 = INT64_MAX;
	uint32_t x167 = 940U;
	int16_t x168 = INT16_MAX;
	int64_t t17 = -68179294531972LL;

	t17 = (x165-(x166>>(x167==x168)));

	if (t17 != -6168163464172183969LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x169 = UINT8_MAX;
	static uint64_t x170 = UINT64_MAX;
	int16_t x171 = -101;
	uint32_t x172 = 10U;
	uint64_t t18 = 2168164LLU;

	t18 = (x169-(x170>>(x171==x172)));

	if (t18 != 256LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x174 = 4U;

	t19 = (x173-(x174>>(x175==x176)));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x178 = UINT32_MAX;
	volatile uint64_t x180 = 20LLU;
	static int64_t t20 = 6LL;

	t20 = (x177-(x178>>(x179==x180)));

	if (t20 != -3308958382LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x193 = 50;
	uint16_t x194 = UINT16_MAX;
	static int32_t x195 = -788644758;
	volatile int32_t x196 = INT32_MIN;

	t21 = (x193-(x194>>(x195==x196)));

	if (t21 != -65485) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x197 = 3;
	uint16_t x198 = 10424U;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -45;
	static int32_t t22 = -90258;

	t22 = (x197-(x198>>(x199==x200)));

	if (t22 != -10421) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x201 = INT8_MAX;
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = UINT32_MAX;
	static volatile int8_t x204 = -6;
	int32_t t23 = 23;

	t23 = (x201-(x202>>(x203==x204)));

	if (t23 != -65408) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x205 = -609LL;
	uint64_t x206 = 16440282754LLU;
	volatile uint32_t x208 = UINT32_MAX;
	volatile uint64_t t24 = 1523LLU;

	t24 = (x205-(x206>>(x207==x208)));

	if (t24 != 18446744057269268253LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x213 = -1LL;
	uint16_t x214 = 492U;
	uint32_t x215 = UINT32_MAX;
	volatile int8_t x216 = 1;

	t25 = (x213-(x214>>(x215==x216)));

	if (t25 != -493LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x217 = 1LLU;
	int32_t x218 = 22;
	int8_t x219 = 17;
	int8_t x220 = -1;

	t26 = (x217-(x218>>(x219==x220)));

	if (t26 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x221 = 3U;
	int32_t x222 = INT32_MAX;
	int32_t t27 = -154487;

	t27 = (x221-(x222>>(x223==x224)));

	if (t27 != -2147483644) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x229 = 863742LL;
	int32_t x231 = -1;
	int32_t x232 = INT32_MAX;
	static int64_t t28 = -301LL;

	t28 = (x229-(x230>>(x231==x232)));

	if (t28 != 863742LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x243 = -126489350LL;
	int16_t x244 = INT16_MIN;
	uint64_t t29 = 4855LLU;

	t29 = (x241-(x242>>(x243==x244)));

	if (t29 != 13868236755LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x247 = 41U;
	int16_t x248 = INT16_MIN;
	static volatile int64_t t30 = -466946056362757LL;

	t30 = (x245-(x246>>(x247==x248)));

	if (t30 != -2587804889339LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x249 = INT32_MIN;
	uint32_t x250 = 1125296539U;
	volatile int32_t x251 = 1117;
	int8_t x252 = INT8_MAX;

	t31 = (x249-(x250>>(x251==x252)));

	if (t31 != 1022187109U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = 0;
	int32_t x264 = INT32_MAX;
	volatile uint32_t t32 = 1022398U;

	t32 = (x261-(x262>>(x263==x264)));

	if (t32 != 65536U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x273 = 1U;
	int16_t x275 = -1;
	int8_t x276 = INT8_MAX;
	uint32_t t33 = 63322U;

	t33 = (x273-(x274>>(x275==x276)));

	if (t33 != 4290887366U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MAX;
	volatile int8_t x279 = -2;
	uint16_t x280 = 7U;
	volatile int32_t t34 = -6395166;

	t34 = (x277-(x278>>(x279==x280)));

	if (t34 != -32895) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x293 = -1;
	static uint64_t x294 = 829681023115080358LLU;
	volatile uint16_t x295 = 101U;
	static uint64_t t35 = 8008807574383713LLU;

	t35 = (x293-(x294>>(x295==x296)));

	if (t35 != 17617063050594471257LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x304 = -1;
	volatile uint32_t t36 = 997416U;

	t36 = (x301-(x302>>(x303==x304)));

	if (t36 != 2028532164U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x305 = INT32_MIN;
	static uint64_t x306 = UINT64_MAX;
	static int64_t x307 = INT64_MAX;
	uint32_t x308 = 15497151U;
	uint64_t t37 = 376352LLU;

	t37 = (x305-(x306>>(x307==x308)));

	if (t37 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x310 = 360214;
	volatile int64_t x311 = INT64_MIN;
	int8_t x312 = INT8_MIN;
	volatile uint32_t t38 = 25224757U;

	t38 = (x309-(x310>>(x311==x312)));

	if (t38 != 4294607081U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x314 = UINT32_MAX;
	static uint16_t x315 = UINT16_MAX;
	int32_t x316 = -2628142;

	t39 = (x313-(x314>>(x315==x316)));

	if (t39 != 2147483649U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x321 = 22328U;
	int8_t x322 = 2;
	uint8_t x324 = 118U;
	static uint32_t t40 = 106624U;

	t40 = (x321-(x322>>(x323==x324)));

	if (t40 != 22326U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x325 = 174145U;
	int32_t x326 = 39447;
	int16_t x328 = -1;
	static volatile uint32_t t41 = 11U;

	t41 = (x325-(x326>>(x327==x328)));

	if (t41 != 134698U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x329 = INT64_MIN;
	uint8_t x330 = 0U;
	int64_t x331 = INT64_MIN;
	static uint16_t x332 = 56U;
	int64_t t42 = INT64_MIN;

	t42 = (x329-(x330>>(x331==x332)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x337 = INT16_MIN;
	uint64_t x338 = UINT64_MAX;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MAX;
	uint64_t t43 = 4937080399360777896LLU;

	t43 = (x337-(x338>>(x339==x340)));

	if (t43 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x345 = INT8_MAX;

	t44 = (x345-(x346>>(x347==x348)));

	if (t44 != -748110733407156LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x353 = 75U;
	int32_t x354 = 188552350;
	int16_t x355 = INT16_MIN;
	static volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t45 = 5;

	t45 = (x353-(x354>>(x355==x356)));

	if (t45 != -188552275) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x357 = -4225840627531LL;
	uint8_t x358 = 1U;
	int16_t x359 = -21;
	int64_t x360 = INT64_MAX;

	t46 = (x357-(x358>>(x359==x360)));

	if (t46 != -4225840627532LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x361 = 1U;
	static int64_t x362 = 7054LL;
	static int16_t x363 = -92;
	int8_t x364 = INT8_MAX;
	volatile int64_t t47 = -453744259966LL;

	t47 = (x361-(x362>>(x363==x364)));

	if (t47 != -7053LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x369 = INT64_MAX;
	static int16_t x370 = 1803;
	int8_t x371 = 1;
	volatile int64_t x372 = INT64_MAX;
	static volatile int64_t t48 = -19LL;

	t48 = (x369-(x370>>(x371==x372)));

	if (t48 != 9223372036854774004LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x373 = UINT64_MAX;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = INT32_MAX;
	int32_t x376 = -188670298;
	static volatile uint64_t t49 = 4695LLU;

	t49 = (x373-(x374>>(x375==x376)));

	if (t49 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x385 = -397547LL;
	volatile uint32_t x388 = UINT32_MAX;
	static int64_t t50 = 36747623LL;

	t50 = (x385-(x386>>(x387==x388)));

	if (t50 != -463082LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x389 = 26LLU;
	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 27U;
	volatile uint64_t t51 = 93878220283121337LLU;

	t51 = (x389-(x390>>(x391==x392)));

	if (t51 != 27LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = 1U;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t52 = -27444;

	t52 = (x393-(x394>>(x395==x396)));

	if (t52 != -129) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x405 = UINT64_MAX;
	int8_t x406 = INT8_MAX;
	int64_t x407 = INT64_MIN;
	int64_t x408 = 17234LL;
	volatile uint64_t t53 = 1199461LLU;

	t53 = (x405-(x406>>(x407==x408)));

	if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x413 = 1LLU;
	static volatile int16_t x415 = INT16_MIN;
	static uint16_t x416 = 1560U;
	uint64_t t54 = 7834167LLU;

	t54 = (x413-(x414>>(x415==x416)));

	if (t54 != 18446744073709025731LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x417 = -1;
	uint8_t x418 = 0U;
	volatile int32_t t55 = 35039718;

	t55 = (x417-(x418>>(x419==x420)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x433 = -1;
	int32_t x435 = 0;
	volatile uint64_t t56 = 1183849LLU;

	t56 = (x433-(x434>>(x435==x436)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x442 = UINT64_MAX;
	static volatile int64_t x444 = 89LL;
	static uint64_t t57 = 4907095LLU;

	t57 = (x441-(x442>>(x443==x444)));

	if (t57 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x445 = -1LL;
	uint16_t x446 = 9U;
	int64_t x447 = INT64_MAX;
	static uint16_t x448 = UINT16_MAX;
	int64_t t58 = -4241163350LL;

	t58 = (x445-(x446>>(x447==x448)));

	if (t58 != -10LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x450 = INT64_MAX;
	int8_t x451 = INT8_MAX;
	volatile int64_t t59 = -70604LL;

	t59 = (x449-(x450>>(x451==x452)));

	if (t59 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x458 = 16U;
	int32_t x459 = INT32_MIN;

	t60 = (x457-(x458>>(x459==x460)));

	if (t60 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x461 = UINT16_MAX;
	volatile int32_t x462 = INT32_MAX;
	int64_t x463 = INT64_MIN;
	int16_t x464 = 5684;
	static int32_t t61 = -5402057;

	t61 = (x461-(x462>>(x463==x464)));

	if (t61 != -2147418112) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x465 = -1;
	int8_t x466 = 58;
	int8_t x468 = INT8_MAX;
	int32_t t62 = 114042;

	t62 = (x465-(x466>>(x467==x468)));

	if (t62 != -59) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x473 = UINT16_MAX;
	volatile uint32_t x474 = 2900U;
	static int32_t x476 = -1;

	t63 = (x473-(x474>>(x475==x476)));

	if (t63 != 62635U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x481 = INT8_MIN;
	volatile int8_t x482 = 0;
	int16_t x483 = INT16_MIN;
	int64_t x484 = INT64_MIN;
	static int32_t t64 = -56988450;

	t64 = (x481-(x482>>(x483==x484)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x487 = UINT8_MAX;
	uint16_t x488 = 24807U;
	volatile uint32_t t65 = 15U;

	t65 = (x485-(x486>>(x487==x488)));

	if (t65 != 4293028778U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x489 = 11U;
	static uint64_t x491 = 1712110655223983846LLU;
	int16_t x492 = INT16_MIN;
	int32_t t66 = 13447;

	t66 = (x489-(x490>>(x491==x492)));

	if (t66 != -2147483636) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x493 = INT16_MIN;
	static uint64_t x494 = 42695857679165014LLU;
	int8_t x495 = -1;
	uint8_t x496 = 40U;
	volatile uint64_t t67 = 5884341577LLU;

	t67 = (x493-(x494>>(x495==x496)));

	if (t67 != 18404048216030353834LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x502 = 68651306965371LL;
	static volatile int8_t x503 = -1;
	volatile uint64_t t68 = 29716054897074LLU;

	t68 = (x501-(x502>>(x503==x504)));

	if (t68 != 243813173041524671LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x506 = 7;
	volatile int64_t x507 = -67LL;
	uint64_t x508 = UINT64_MAX;
	static volatile uint32_t t69 = 896498729U;

	t69 = (x505-(x506>>(x507==x508)));

	if (t69 != 28100U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x513 = -4348539499915LL;
	volatile uint32_t x514 = 2703587U;
	static int32_t x515 = INT32_MIN;
	int8_t x516 = INT8_MIN;
	int64_t t70 = -144LL;

	t70 = (x513-(x514>>(x515==x516)));

	if (t70 != -4348542203502LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x537 = -1;
	uint8_t x538 = 3U;
	volatile uint8_t x539 = UINT8_MAX;
	uint8_t x540 = 1U;

	t71 = (x537-(x538>>(x539==x540)));

	if (t71 != -4) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x545 = 31U;
	volatile uint16_t x546 = 261U;
	uint32_t x547 = UINT32_MAX;
	volatile int32_t x548 = INT32_MIN;
	volatile int32_t t72 = -7594;

	t72 = (x545-(x546>>(x547==x548)));

	if (t72 != -230) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x553 = UINT16_MAX;
	int8_t x554 = INT8_MAX;
	int8_t x555 = INT8_MIN;
	uint8_t x556 = 33U;
	int32_t t73 = 52013930;

	t73 = (x553-(x554>>(x555==x556)));

	if (t73 != 65408) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x557 = -1;
	uint8_t x558 = 7U;
	int32_t x559 = INT32_MIN;
	int16_t x560 = -28;
	int32_t t74 = -20812104;

	t74 = (x557-(x558>>(x559==x560)));

	if (t74 != -8) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x581 = INT8_MIN;
	int32_t x582 = 1;
	int64_t x584 = INT64_MIN;
	volatile int32_t t75 = 116;

	t75 = (x581-(x582>>(x583==x584)));

	if (t75 != -129) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x589 = INT32_MAX;
	int8_t x591 = 51;
	uint32_t x592 = UINT32_MAX;
	int32_t t76 = -1;

	t76 = (x589-(x590>>(x591==x592)));

	if (t76 != 2147479613) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x597 = 12130U;
	uint16_t x598 = 2859U;
	static int16_t x599 = INT16_MIN;
	volatile int32_t t77 = 102;

	t77 = (x597-(x598>>(x599==x600)));

	if (t77 != 9271) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x601 = 2381961U;
	int16_t x602 = 4897;
	static volatile int8_t x603 = 5;
	int64_t x604 = -107219381LL;
	uint32_t t78 = 41655206U;

	t78 = (x601-(x602>>(x603==x604)));

	if (t78 != 2377064U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x617 = 106U;
	volatile uint64_t x618 = 960434039593LLU;
	int16_t x619 = -1;
	int16_t x620 = -1;
	volatile uint64_t t79 = 1013043LLU;

	t79 = (x617-(x618>>(x619==x620)));

	if (t79 != 18446743593492531926LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x621 = INT32_MAX;
	volatile uint32_t x623 = 73743U;
	static volatile uint16_t x624 = 26314U;
	static uint64_t t80 = 5885369271378LLU;

	t80 = (x621-(x622>>(x623==x624)));

	if (t80 != 18446743905853611530LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x637 = INT8_MAX;
	static volatile uint64_t x638 = UINT64_MAX;
	volatile uint64_t t81 = 0LLU;

	t81 = (x637-(x638>>(x639==x640)));

	if (t81 != 128LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x642 = UINT32_MAX;
	static int16_t x643 = INT16_MAX;
	volatile int16_t x644 = -1;
	volatile uint32_t t82 = 4U;

	t82 = (x641-(x642>>(x643==x644)));

	if (t82 != 21U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x654 = INT8_MAX;
	static int8_t x656 = INT8_MIN;
	int32_t t83 = -253;

	t83 = (x653-(x654>>(x655==x656)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x665 = -1;
	volatile int16_t x666 = INT16_MAX;
	uint32_t x667 = UINT32_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t84 = 3;

	t84 = (x665-(x666>>(x667==x668)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x673 = INT8_MIN;
	uint16_t x674 = 1012U;
	int16_t x675 = -1945;
	int16_t x676 = 18;
	int32_t t85 = -1934;

	t85 = (x673-(x674>>(x675==x676)));

	if (t85 != -1140) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x678 = 8244LL;
	uint32_t x679 = UINT32_MAX;
	int16_t x680 = -1;
	volatile int64_t t86 = -3625440LL;

	t86 = (x677-(x678>>(x679==x680)));

	if (t86 != -4123LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x681 = -1;
	uint32_t x682 = 1U;
	volatile int32_t x683 = -1;
	int16_t x684 = -1;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x681-(x682>>(x683==x684)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x694 = 108824140804483LLU;
	int8_t x695 = INT8_MIN;
	uint16_t x696 = UINT16_MAX;
	volatile uint64_t t88 = 3466491915538LLU;

	t88 = (x693-(x694>>(x695==x696)));

	if (t88 != 18446635249568812668LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x697 = INT64_MAX;
	int16_t x698 = 13;
	volatile int8_t x699 = INT8_MIN;
	static uint32_t x700 = 73150413U;
	volatile int64_t t89 = 8LL;

	t89 = (x697-(x698>>(x699==x700)));

	if (t89 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x707 = -22;
	static int64_t x708 = -1LL;

	t90 = (x705-(x706>>(x707==x708)));

	if (t90 != -47011LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x721 = UINT8_MAX;
	int64_t x722 = INT64_MAX;
	static uint16_t x723 = 161U;
	static uint8_t x724 = 108U;
	volatile int64_t t91 = 0LL;

	t91 = (x721-(x722>>(x723==x724)));

	if (t91 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x729 = -1;
	uint32_t x731 = 2345U;

	t92 = (x729-(x730>>(x731==x732)));

	if (t92 != -7791) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x733 = INT32_MAX;
	static uint64_t x734 = 650490108492906504LLU;
	int32_t x735 = INT32_MIN;
	uint64_t t93 = 7962314LLU;

	t93 = (x733-(x734>>(x735==x736)));

	if (t93 != 17796253967364128759LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x737 = 1;
	static volatile int8_t x739 = INT8_MAX;
	int32_t x740 = INT32_MIN;
	volatile uint64_t t94 = 24169934LLU;

	t94 = (x737-(x738>>(x739==x740)));

	if (t94 != 18446744073552000394LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x745 = 2826660784LLU;
	uint16_t x746 = UINT16_MAX;
	int64_t x748 = -1LL;
	uint64_t t95 = 1206082LLU;

	t95 = (x745-(x746>>(x747==x748)));

	if (t95 != 2826628017LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x753 = INT8_MAX;
	int8_t x755 = INT8_MIN;
	uint32_t x756 = UINT32_MAX;
	static int32_t t96 = -106306;

	t96 = (x753-(x754>>(x755==x756)));

	if (t96 != -1028722212) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x757 = INT64_MAX;
	volatile uint16_t x758 = 1U;
	int8_t x760 = -1;

	t97 = (x757-(x758>>(x759==x760)));

	if (t97 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x773 = INT64_MAX;
	static int8_t x774 = 5;
	int64_t x775 = INT64_MIN;
	int64_t t98 = 15274LL;

	t98 = (x773-(x774>>(x775==x776)));

	if (t98 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x789 = -1LL;
	uint32_t x790 = UINT32_MAX;
	int64_t x791 = INT64_MIN;
	uint64_t x792 = 4902170278172755638LLU;
	int64_t t99 = 272383374521513226LL;

	t99 = (x789-(x790>>(x791==x792)));

	if (t99 != -4294967296LL) { NG(); } else { ; }
	
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

