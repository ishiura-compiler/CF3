#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x37 = INT32_MIN;
static int32_t t3 = -20398;
int32_t x42 = 5;
int32_t x43 = -1;
int64_t x44 = -1LL;
uint32_t x46 = 497312407U;
static volatile int32_t x57 = -34;
int32_t x60 = INT32_MAX;
volatile uint32_t x65 = 527018289U;
int8_t x91 = 0;
int16_t x104 = -11;
static int32_t t12 = -1381;
int64_t x106 = 33LL;
volatile int32_t t13 = 3023047;
volatile int32_t t14 = 57739964;
int16_t x126 = INT16_MIN;
int8_t x127 = INT8_MIN;
int64_t x128 = -466652889035629LL;
volatile int32_t t16 = -162881;
int64_t x152 = INT64_MIN;
int8_t x181 = INT8_MIN;
int64_t x182 = 477512580LL;
static int16_t x184 = INT16_MAX;
uint16_t x190 = UINT16_MAX;
int32_t t25 = 0;
static volatile int32_t t26 = 15525570;
static uint64_t x211 = UINT64_MAX;
int32_t x216 = INT32_MIN;
volatile int32_t t29 = -25241819;
static int64_t x226 = INT64_MIN;
int64_t x229 = 10LL;
int16_t x231 = -2;
uint64_t x258 = 257882562925LLU;
uint16_t x259 = 707U;
int16_t x261 = INT16_MIN;
static volatile int64_t x270 = -1350568444213090411LL;
int16_t x272 = -129;
int32_t t37 = -8181;
static volatile int32_t x274 = INT32_MIN;
int32_t x275 = 70;
int16_t x287 = 28;
int64_t x290 = -218037918LL;
static uint8_t x293 = UINT8_MAX;
static int32_t x295 = -1;
int8_t x298 = 12;
volatile int32_t t44 = 119293039;
static int32_t x306 = 1394;
static int64_t x321 = -1045279LL;
uint32_t x322 = UINT32_MAX;
volatile int32_t x325 = INT32_MIN;
uint32_t x326 = UINT32_MAX;
volatile int32_t t50 = -3631;
static volatile int32_t t53 = -717;
static int8_t x351 = 12;
int32_t x359 = 687;
int16_t x360 = INT16_MAX;
int16_t x375 = INT16_MAX;
volatile int64_t x376 = -2025993360LL;
volatile int32_t t58 = 255;
int64_t x386 = 2574657LL;
static uint8_t x394 = 2U;
static int32_t x396 = INT32_MAX;
static volatile uint32_t x407 = 1822795U;
uint32_t x418 = UINT32_MAX;
volatile int32_t t65 = 1638329;
int8_t x440 = INT8_MIN;
uint8_t x441 = 1U;
uint64_t x443 = 230164112976777328LLU;
volatile int32_t t68 = -16022680;
uint64_t x454 = 28633654300956LLU;
int32_t x455 = -1;
int32_t t69 = 42888;
volatile int16_t x479 = -120;
uint32_t x482 = 1042724503U;
uint8_t x483 = UINT8_MAX;
int32_t x494 = INT32_MIN;
volatile int32_t t74 = 169409227;
int32_t t75 = -9724344;
uint32_t x503 = 46U;
volatile int8_t x504 = INT8_MAX;
volatile uint8_t x522 = 12U;
int8_t x525 = INT8_MIN;
volatile uint16_t x550 = 0U;
static uint8_t x551 = 2U;
volatile int8_t x556 = INT8_MIN;
volatile int32_t t82 = -14;
int32_t t83 = 2233;
uint32_t x579 = 154U;
int8_t x580 = -1;
volatile int32_t t85 = 308764;
static int8_t x591 = -1;
int32_t t88 = -747950;
int32_t x601 = INT32_MIN;
uint64_t x602 = 176500823992LLU;
int8_t x603 = INT8_MIN;
volatile int16_t x604 = 4661;
volatile int32_t t89 = -879784;
uint64_t x606 = 0LLU;
static int8_t x614 = INT8_MIN;
uint32_t x615 = 2U;
int16_t x616 = INT16_MIN;
static int64_t x628 = INT64_MIN;
int32_t t94 = 7372;
volatile uint64_t x650 = 2207991469301579487LLU;
volatile int32_t t98 = 0;


void f0(void) {
	static int32_t x9 = -1;
	int64_t x10 = 1LL;
	int8_t x11 = -3;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t0 = -4003358;

	t0 = ((x9<x10)<<(x11/x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MIN;
	int64_t x27 = -26277LL;
	static int64_t x28 = INT64_MIN;
	static int32_t t1 = -296287507;

	t1 = ((x25<x26)<<(x27/x28));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x30 = 65U;
	static volatile uint16_t x31 = UINT16_MAX;
	int32_t x32 = INT32_MAX;
	volatile int32_t t2 = 114;

	t2 = ((x29<x30)<<(x31/x32));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x38 = 8U;
	uint8_t x39 = 1U;
	static int32_t x40 = INT32_MIN;

	t3 = ((x37<x38)<<(x39/x40));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x41 = 18001LLU;
	static volatile int32_t t4 = 1;

	t4 = ((x41<x42)<<(x43/x44));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x45 = UINT64_MAX;
	static volatile int16_t x47 = 29;
	int32_t x48 = INT32_MIN;
	volatile int32_t t5 = -794;

	t5 = ((x45<x46)<<(x47/x48));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MAX;
	volatile int64_t x55 = -62965177515053628LL;
	static volatile uint64_t x56 = UINT64_MAX;
	volatile int32_t t6 = -782232;

	t6 = ((x53<x54)<<(x55/x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x58 = INT64_MIN;
	static int32_t x59 = -1;
	volatile int32_t t7 = 30321253;

	t7 = ((x57<x58)<<(x59/x60));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x66 = UINT32_MAX;
	int16_t x67 = INT16_MAX;
	int64_t x68 = 18957754123659762LL;
	volatile int32_t t8 = 93947286;

	t8 = ((x65<x66)<<(x67/x68));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x81 = INT8_MIN;
	volatile uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	volatile uint16_t x84 = UINT16_MAX;
	int32_t t9 = 281035286;

	t9 = ((x81<x82)<<(x83/x84));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x85 = INT64_MAX;
	int16_t x86 = INT16_MIN;
	uint32_t x87 = 59586U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t10 = 0;

	t10 = ((x85<x86)<<(x87/x88));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x89 = -1;
	int64_t x90 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t11 = 62988;

	t11 = ((x89<x90)<<(x91/x92));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x101 = 87;
	static int16_t x102 = 829;
	int8_t x103 = INT8_MIN;

	t12 = ((x101<x102)<<(x103/x104));

	if (t12 != 2048) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x105 = 42;
	int16_t x107 = 1;
	volatile int32_t x108 = INT32_MIN;

	t13 = ((x105<x106)<<(x107/x108));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x117 = 2027U;
	static volatile int8_t x118 = -1;
	int32_t x119 = -1;
	static int16_t x120 = INT16_MAX;

	t14 = ((x117<x118)<<(x119/x120));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x121 = -1LL;
	int16_t x122 = INT16_MIN;
	uint16_t x123 = 1U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t15 = 34418898;

	t15 = ((x121<x122)<<(x123/x124));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x125 = INT64_MAX;

	t16 = ((x125<x126)<<(x127/x128));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x133 = INT64_MIN;
	uint64_t x134 = 2403539594832775860LLU;
	int8_t x135 = -1;
	static int32_t x136 = -113405;
	int32_t t17 = -1255726;

	t17 = ((x133<x134)<<(x135/x136));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x145 = 2886U;
	int32_t x146 = -1;
	volatile int8_t x147 = -1;
	int64_t x148 = INT64_MIN;
	int32_t t18 = 3710;

	t18 = ((x145<x146)<<(x147/x148));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = -988096394LL;
	volatile int32_t t19 = -4;

	t19 = ((x149<x150)<<(x151/x152));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MIN;
	volatile uint64_t x155 = UINT64_MAX;
	int64_t x156 = -1LL;
	volatile int32_t t20 = 2;

	t20 = ((x153<x154)<<(x155/x156));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x161 = 1U;
	static int16_t x162 = INT16_MIN;
	static uint64_t x163 = UINT64_MAX;
	int8_t x164 = -11;
	static int32_t t21 = -219171;

	t21 = ((x161<x162)<<(x163/x164));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x165 = 1183662324LL;
	volatile int32_t x166 = INT32_MAX;
	uint16_t x167 = 232U;
	uint32_t x168 = 7262418U;
	volatile int32_t t22 = 5696277;

	t22 = ((x165<x166)<<(x167/x168));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x183 = -1;
	volatile int32_t t23 = -731554;

	t23 = ((x181<x182)<<(x183/x184));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x189 = INT32_MAX;
	volatile int8_t x191 = -1;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t24 = 2082059;

	t24 = ((x189<x190)<<(x191/x192));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x197 = 509U;
	int8_t x198 = 31;
	int8_t x199 = -29;
	int8_t x200 = -1;

	t25 = ((x197<x198)<<(x199/x200));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x201 = INT64_MAX;
	static uint8_t x202 = 2U;
	int16_t x203 = 1;
	int32_t x204 = -1492;

	t26 = ((x201<x202)<<(x203/x204));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x209 = INT32_MIN;
	uint16_t x210 = UINT16_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t27 = 21;

	t27 = ((x209<x210)<<(x211/x212));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x213 = 4;
	int16_t x214 = INT16_MIN;
	int8_t x215 = -14;
	int32_t t28 = -46;

	t28 = ((x213<x214)<<(x215/x216));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x217 = INT64_MAX;
	static volatile int64_t x218 = 1472975789586LL;
	volatile uint64_t x219 = UINT64_MAX;
	int64_t x220 = -1LL;

	t29 = ((x217<x218)<<(x219/x220));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x225 = 0U;
	int8_t x227 = -8;
	static int16_t x228 = INT16_MIN;
	volatile int32_t t30 = 507;

	t30 = ((x225<x226)<<(x227/x228));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x230 = 1332LL;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t31 = 768737026;

	t31 = ((x229<x230)<<(x231/x232));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x233 = 2983265321LLU;
	uint16_t x234 = UINT16_MAX;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = -5;
	volatile int32_t t32 = -3;

	t32 = ((x233<x234)<<(x235/x236));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x249 = -1;
	uint8_t x250 = 29U;
	static volatile int8_t x251 = INT8_MIN;
	volatile int32_t x252 = INT32_MIN;
	int32_t t33 = 1043055;

	t33 = ((x249<x250)<<(x251/x252));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x253 = -546894LL;
	int32_t x254 = -1;
	uint64_t x255 = 196209LLU;
	volatile int64_t x256 = INT64_MIN;
	static volatile int32_t t34 = 76;

	t34 = ((x253<x254)<<(x255/x256));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x257 = UINT16_MAX;
	static volatile int16_t x260 = INT16_MIN;
	static int32_t t35 = 18;

	t35 = ((x257<x258)<<(x259/x260));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x262 = INT32_MIN;
	uint16_t x263 = 6U;
	volatile int16_t x264 = INT16_MAX;
	volatile int32_t t36 = -670;

	t36 = ((x261<x262)<<(x263/x264));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x269 = 150567LL;
	static uint64_t x271 = 11521908693318LLU;

	t37 = ((x269<x270)<<(x271/x272));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x273 = 105U;
	int16_t x276 = INT16_MIN;
	volatile int32_t t38 = 11258403;

	t38 = ((x273<x274)<<(x275/x276));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x277 = -1;
	int64_t x278 = -840818LL;
	int8_t x279 = INT8_MAX;
	int64_t x280 = 45077LL;
	static volatile int32_t t39 = -4757;

	t39 = ((x277<x278)<<(x279/x280));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x281 = INT64_MAX;
	int32_t x282 = -3556;
	static volatile int16_t x283 = INT16_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t40 = -152001;

	t40 = ((x281<x282)<<(x283/x284));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	uint8_t x288 = 1U;
	volatile int32_t t41 = 2;

	t41 = ((x285<x286)<<(x287/x288));

	if (t41 != 268435456) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x289 = INT32_MAX;
	static uint16_t x291 = 7U;
	uint32_t x292 = UINT32_MAX;
	static volatile int32_t t42 = 157769;

	t42 = ((x289<x290)<<(x291/x292));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x294 = INT8_MIN;
	int64_t x296 = 108538495888LL;
	int32_t t43 = -6;

	t43 = ((x293<x294)<<(x295/x296));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x297 = -1;
	uint64_t x299 = UINT64_MAX;
	static int32_t x300 = INT32_MIN;

	t44 = ((x297<x298)<<(x299/x300));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x301 = -1;
	uint8_t x302 = 1U;
	volatile uint16_t x303 = 0U;
	uint8_t x304 = 3U;
	static volatile int32_t t45 = -4831904;

	t45 = ((x301<x302)<<(x303/x304));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x305 = -1;
	static int32_t x307 = 1422719;
	int64_t x308 = 7129805077544500LL;
	volatile int32_t t46 = 0;

	t46 = ((x305<x306)<<(x307/x308));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x323 = UINT8_MAX;
	volatile int16_t x324 = INT16_MAX;
	static int32_t t47 = -5;

	t47 = ((x321<x322)<<(x323/x324));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x327 = INT16_MAX;
	uint32_t x328 = 773209U;
	static volatile int32_t t48 = -876;

	t48 = ((x325<x326)<<(x327/x328));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x329 = -30;
	uint8_t x330 = 19U;
	int16_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile int32_t t49 = -2897042;

	t49 = ((x329<x330)<<(x331/x332));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = -1;
	static uint64_t x335 = 653182500992783113LLU;
	static int16_t x336 = INT16_MIN;

	t50 = ((x333<x334)<<(x335/x336));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = -1;
	int16_t x339 = -8;
	uint16_t x340 = 2615U;
	volatile int32_t t51 = 693517;

	t51 = ((x337<x338)<<(x339/x340));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MAX;
	volatile uint32_t x343 = 0U;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t52 = -29101050;

	t52 = ((x341<x342)<<(x343/x344));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x345 = 1U;
	int32_t x346 = INT32_MAX;
	uint64_t x347 = UINT64_MAX;
	static volatile int64_t x348 = INT64_MIN;

	t53 = ((x345<x346)<<(x347/x348));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x349 = -276429;
	uint32_t x350 = 166855U;
	uint32_t x352 = 47714736U;
	static volatile int32_t t54 = 174820;

	t54 = ((x349<x350)<<(x351/x352));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = 1898;
	int64_t x355 = INT64_MIN;
	static int64_t x356 = INT64_MIN;
	volatile int32_t t55 = -9054;

	t55 = ((x353<x354)<<(x355/x356));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x357 = 107U;
	uint32_t x358 = 125005U;
	int32_t t56 = -141;

	t56 = ((x357<x358)<<(x359/x360));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x365 = INT16_MAX;
	volatile uint8_t x366 = UINT8_MAX;
	volatile int8_t x367 = 50;
	uint32_t x368 = 3U;
	volatile int32_t t57 = -1012710076;

	t57 = ((x365<x366)<<(x367/x368));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x373 = -1;
	uint64_t x374 = 1292506350617139LLU;

	t58 = ((x373<x374)<<(x375/x376));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x385 = UINT8_MAX;
	static uint64_t x387 = 2312598LLU;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t59 = 102702;

	t59 = ((x385<x386)<<(x387/x388));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x393 = -1;
	uint8_t x395 = 0U;
	static volatile int32_t t60 = -198;

	t60 = ((x393<x394)<<(x395/x396));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x397 = INT64_MIN;
	static uint8_t x398 = 0U;
	volatile uint64_t x399 = 164878329769823103LLU;
	int16_t x400 = INT16_MIN;
	volatile int32_t t61 = -45130021;

	t61 = ((x397<x398)<<(x399/x400));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x405 = -822;
	static int64_t x406 = INT64_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t62 = 291478425;

	t62 = ((x405<x406)<<(x407/x408));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x413 = INT32_MIN;
	uint8_t x414 = 31U;
	uint8_t x415 = 28U;
	int16_t x416 = INT16_MIN;
	int32_t t63 = -22947;

	t63 = ((x413<x414)<<(x415/x416));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x417 = -3;
	volatile int16_t x419 = -1;
	int64_t x420 = -18423629510623624LL;
	int32_t t64 = 1799645;

	t64 = ((x417<x418)<<(x419/x420));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x429 = 4162283524LLU;
	int16_t x430 = -1;
	static uint16_t x431 = 10U;
	volatile int32_t x432 = INT32_MIN;

	t65 = ((x429<x430)<<(x431/x432));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x437 = 22;
	uint8_t x438 = UINT8_MAX;
	volatile int32_t x439 = -1;
	volatile int32_t t66 = 7151057;

	t66 = ((x437<x438)<<(x439/x440));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x442 = -1;
	int16_t x444 = INT16_MIN;
	volatile int32_t t67 = 236080;

	t67 = ((x441<x442)<<(x443/x444));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x449 = INT16_MIN;
	int64_t x450 = -4413177868LL;
	static volatile uint64_t x451 = UINT64_MAX;
	volatile int64_t x452 = -1LL;

	t68 = ((x449<x450)<<(x451/x452));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x453 = -1;
	volatile int16_t x456 = -2418;

	t69 = ((x453<x454)<<(x455/x456));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x465 = UINT8_MAX;
	static volatile int32_t x466 = INT32_MIN;
	int16_t x467 = 28;
	volatile uint32_t x468 = 84024U;
	int32_t t70 = 0;

	t70 = ((x465<x466)<<(x467/x468));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x469 = INT16_MIN;
	uint32_t x470 = 45454414U;
	volatile int16_t x471 = INT16_MIN;
	static int64_t x472 = INT64_MAX;
	volatile int32_t t71 = 2905;

	t71 = ((x469<x470)<<(x471/x472));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x477 = 6U;
	int64_t x478 = -2085899894521LL;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t72 = -15942511;

	t72 = ((x477<x478)<<(x479/x480));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x481 = 78U;
	int8_t x484 = 50;
	static volatile int32_t t73 = -168533856;

	t73 = ((x481<x482)<<(x483/x484));

	if (t73 != 32) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x493 = -1;
	int32_t x495 = -1;
	uint8_t x496 = 56U;

	t74 = ((x493<x494)<<(x495/x496));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x497 = 1U;
	int32_t x498 = INT32_MAX;
	volatile uint8_t x499 = 4U;
	int32_t x500 = INT32_MAX;

	t75 = ((x497<x498)<<(x499/x500));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x501 = UINT8_MAX;
	static uint8_t x502 = UINT8_MAX;
	int32_t t76 = 7;

	t76 = ((x501<x502)<<(x503/x504));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x517 = INT64_MIN;
	int8_t x518 = INT8_MIN;
	int64_t x519 = -1LL;
	int64_t x520 = INT64_MAX;
	static int32_t t77 = 5090;

	t77 = ((x517<x518)<<(x519/x520));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x521 = -307910337;
	uint8_t x523 = 19U;
	int32_t x524 = INT32_MIN;
	int32_t t78 = 15225;

	t78 = ((x521<x522)<<(x523/x524));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x526 = 14300U;
	static volatile uint32_t x527 = UINT32_MAX;
	static volatile int32_t x528 = INT32_MIN;
	volatile int32_t t79 = -1;

	t79 = ((x525<x526)<<(x527/x528));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x549 = -705021892;
	uint8_t x552 = UINT8_MAX;
	static int32_t t80 = -56;

	t80 = ((x549<x550)<<(x551/x552));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x553 = INT16_MAX;
	static volatile int32_t x554 = -57986577;
	int32_t x555 = -1323;
	volatile int32_t t81 = -10;

	t81 = ((x553<x554)<<(x555/x556));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x561 = 74943LL;
	int16_t x562 = INT16_MIN;
	int16_t x563 = INT16_MAX;
	volatile uint64_t x564 = 87754741219LLU;

	t82 = ((x561<x562)<<(x563/x564));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x569 = -200;
	int64_t x570 = INT64_MIN;
	int64_t x571 = 316941863614694LL;
	int64_t x572 = INT64_MIN;

	t83 = ((x569<x570)<<(x571/x572));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x573 = INT32_MAX;
	int8_t x574 = INT8_MIN;
	int16_t x575 = 76;
	volatile uint8_t x576 = UINT8_MAX;
	int32_t t84 = -186576;

	t84 = ((x573<x574)<<(x575/x576));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x577 = INT16_MIN;
	static int32_t x578 = -1;

	t85 = ((x577<x578)<<(x579/x580));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x581 = 10;
	volatile int16_t x582 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	volatile int32_t x584 = 535089877;
	volatile int32_t t86 = 6;

	t86 = ((x581<x582)<<(x583/x584));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x589 = INT8_MIN;
	uint8_t x590 = UINT8_MAX;
	volatile int16_t x592 = -1;
	static int32_t t87 = -23230495;

	t87 = ((x589<x590)<<(x591/x592));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x597 = 258634LLU;
	static int16_t x598 = 7408;
	static volatile int32_t x599 = INT32_MIN;
	uint64_t x600 = UINT64_MAX;

	t88 = ((x597<x598)<<(x599/x600));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {


	t89 = ((x601<x602)<<(x603/x604));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x605 = -1LL;
	int16_t x607 = -1;
	int32_t x608 = -1;
	static volatile int32_t t90 = 0;

	t90 = ((x605<x606)<<(x607/x608));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x613 = -1;
	volatile int32_t t91 = 3473263;

	t91 = ((x613<x614)<<(x615/x616));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x621 = -2;
	volatile int64_t x622 = INT64_MIN;
	static uint64_t x623 = UINT64_MAX;
	int64_t x624 = -12191830542732LL;
	static int32_t t92 = 1;

	t92 = ((x621<x622)<<(x623/x624));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x625 = -1;
	int8_t x626 = -3;
	int64_t x627 = -1LL;
	volatile int32_t t93 = 243039745;

	t93 = ((x625<x626)<<(x627/x628));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x633 = 3164903871083820LLU;
	int16_t x634 = 5;
	int8_t x635 = -1;
	volatile uint8_t x636 = 4U;

	t94 = ((x633<x634)<<(x635/x636));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x637 = -6579778;
	volatile int64_t x638 = -1LL;
	volatile uint8_t x639 = 12U;
	static int8_t x640 = INT8_MAX;
	int32_t t95 = 936;

	t95 = ((x637<x638)<<(x639/x640));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x641 = INT8_MAX;
	volatile uint16_t x642 = UINT16_MAX;
	static int16_t x643 = 0;
	static volatile uint8_t x644 = UINT8_MAX;
	int32_t t96 = -28421;

	t96 = ((x641<x642)<<(x643/x644));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x645 = INT64_MAX;
	int16_t x646 = 2261;
	uint8_t x647 = UINT8_MAX;
	uint64_t x648 = 10311729193139LLU;
	volatile int32_t t97 = -1650;

	t97 = ((x645<x646)<<(x647/x648));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x649 = 49;
	static int8_t x651 = -1;
	static volatile int16_t x652 = INT16_MIN;

	t98 = ((x649<x650)<<(x651/x652));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x653 = 150;
	int16_t x654 = -1;
	int16_t x655 = INT16_MIN;
	static int16_t x656 = INT16_MIN;
	static int32_t t99 = -23;

	t99 = ((x653<x654)<<(x655/x656));

	if (t99 != 0) { NG(); } else { ; }
	
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

