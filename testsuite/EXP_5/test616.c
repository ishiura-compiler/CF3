#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t1 = 5232944LLU;
int32_t x44 = INT32_MAX;
static volatile int32_t t3 = -88754;
int16_t x46 = 13171;
static int8_t x60 = 0;
volatile uint8_t x62 = UINT8_MAX;
int16_t x63 = 12329;
uint64_t x68 = 136696148LLU;
int32_t t7 = -421330;
static int64_t x69 = 5004LL;
int64_t x93 = -6LL;
int32_t x113 = -1;
uint8_t x114 = 1U;
int32_t x115 = INT32_MAX;
uint64_t x116 = 31113350857LLU;
static int16_t x126 = 268;
uint32_t x127 = UINT32_MAX;
static int16_t x135 = INT16_MAX;
uint64_t x140 = UINT64_MAX;
uint16_t x157 = 11U;
int64_t x163 = INT64_MAX;
volatile int8_t x166 = -1;
volatile uint64_t t21 = 10265187LLU;
int64_t x173 = INT64_MAX;
uint16_t x178 = UINT16_MAX;
static int8_t x195 = -50;
uint32_t t26 = 144635855U;
uint64_t x211 = 30897LLU;
static volatile uint64_t x212 = 108LLU;
volatile int16_t x217 = INT16_MAX;
uint64_t x221 = 17LLU;
volatile int32_t t33 = 3909685;
static volatile int64_t x269 = INT64_MIN;
uint16_t x271 = 7U;
volatile int64_t t34 = 14324082401197LL;
uint32_t t35 = 128986U;
volatile int64_t t37 = -34LL;
uint32_t x294 = 921980257U;
int32_t t39 = 106128;
uint8_t x297 = 20U;
volatile int32_t t40 = -62563;
int8_t x305 = -1;
int16_t x309 = -1;
int32_t t45 = 43054;
uint32_t x329 = UINT32_MAX;
uint16_t x337 = UINT16_MAX;
int32_t x344 = INT32_MAX;
volatile int32_t t49 = 8;
int32_t x346 = 2030;
int64_t x348 = 3012337883557372LL;
int32_t x353 = 2;
uint16_t x355 = 507U;
uint64_t x366 = 119472LLU;
uint16_t x368 = UINT16_MAX;
volatile int32_t t52 = 2479;
volatile int32_t t53 = -1017382;
static uint32_t x392 = UINT32_MAX;
volatile uint32_t x397 = 2485U;
uint64_t x400 = UINT64_MAX;
static volatile uint16_t x411 = 25U;
volatile int32_t t57 = -923395849;
int8_t x422 = INT8_MIN;
int32_t x424 = INT32_MAX;
int64_t t58 = 5363LL;
int16_t x428 = INT16_MAX;
static volatile int32_t t59 = -98854;
uint32_t x440 = 1028545590U;
int8_t x449 = 0;
int64_t x459 = INT64_MIN;
volatile int32_t t64 = -54;
int64_t x463 = 18295337543074LL;
uint64_t t65 = 29298057LLU;
volatile uint64_t x467 = UINT64_MAX;
volatile uint64_t t66 = 1859934LLU;
uint64_t x481 = 240082917875257LLU;
int64_t x484 = INT64_MAX;
uint8_t x493 = UINT8_MAX;
int32_t t72 = 0;
int64_t x509 = INT64_MAX;
static volatile int64_t t73 = 626610407040032601LL;
static int32_t x521 = 3;
volatile int32_t x524 = INT32_MIN;
static int32_t x526 = 86;
static uint64_t t77 = 2756054842186450577LLU;
static volatile int32_t t78 = -14238884;
static int8_t x549 = -15;
int64_t x551 = INT64_MAX;
volatile int64_t x562 = INT64_MAX;
int32_t x572 = -973757;
volatile int16_t x573 = -1;
int8_t x602 = INT8_MIN;
volatile int32_t t88 = -68010498;
int8_t x637 = INT8_MIN;
volatile int16_t x645 = -1;
int16_t x646 = INT16_MIN;
volatile int32_t t93 = 1174;
int8_t x664 = INT8_MIN;
int32_t t96 = 1;
static int16_t x679 = -64;
volatile int64_t t97 = -77647LL;
int8_t x687 = 62;
volatile uint32_t x689 = 0U;


void f0(void) {
	volatile uint32_t x17 = 90190U;
	int32_t x18 = -1;
	volatile int8_t x19 = INT8_MIN;
	volatile uint16_t x20 = UINT16_MAX;
	volatile uint32_t t0 = 1677U;

	t0 = (x17%((x18/x19)<x20));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x25 = UINT64_MAX;
	uint64_t x26 = 1757095686278023886LLU;
	int64_t x27 = -503979966860796834LL;
	static int16_t x28 = INT16_MIN;

	t1 = (x25%((x26/x27)<x28));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x37 = 114LLU;
	int16_t x38 = -2365;
	volatile uint8_t x39 = UINT8_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile uint64_t t2 = 1873663637910180LLU;

	t2 = (x37%((x38/x39)<x40));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MAX;

	t3 = (x41%((x42/x43)<x44));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x45 = 1;
	static volatile uint32_t x47 = 267263254U;
	volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t4 = 229;

	t4 = (x45%((x46/x47)<x48));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x57 = -84LL;
	int32_t x58 = 3468464;
	int16_t x59 = -1;
	volatile int64_t t5 = -964703759174447387LL;

	t5 = (x57%((x58/x59)<x60));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x61 = 50;
	int8_t x64 = 1;
	int32_t t6 = -7288168;

	t6 = (x61%((x62/x63)<x64));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x65 = INT32_MAX;
	int16_t x66 = -34;
	static int32_t x67 = INT32_MIN;

	t7 = (x65%((x66/x67)<x68));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x70 = 274292876409LLU;
	int32_t x71 = -1;
	volatile int32_t x72 = -62591930;
	int64_t t8 = -5898LL;

	t8 = (x69%((x70/x71)<x72));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x81 = INT8_MAX;
	volatile int8_t x82 = -59;
	int16_t x83 = INT16_MIN;
	static volatile int8_t x84 = 63;
	volatile int32_t t9 = -4;

	t9 = (x81%((x82/x83)<x84));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x94 = UINT8_MAX;
	volatile int32_t x95 = -195519862;
	uint16_t x96 = 462U;
	volatile int64_t t10 = 8283679LL;

	t10 = (x93%((x94/x95)<x96));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x97 = -1;
	uint64_t x98 = 137108016748LLU;
	static uint32_t x99 = UINT32_MAX;
	volatile int64_t x100 = -1LL;
	volatile int32_t t11 = 12990;

	t11 = (x97%((x98/x99)<x100));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = 1U;
	uint32_t x103 = 100589506U;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t12 = -15580995;

	t12 = (x101%((x102/x103)<x104));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	static uint64_t x107 = 5269193296366LLU;
	volatile int32_t x108 = INT32_MIN;
	int32_t t13 = -13020961;

	t13 = (x105%((x106/x107)<x108));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t t14 = 7;

	t14 = (x113%((x114/x115)<x116));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x125 = -1;
	int64_t x128 = INT64_MAX;
	volatile int32_t t15 = 0;

	t15 = (x125%((x126/x127)<x128));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x129 = 596840070989LLU;
	int32_t x130 = 201222;
	uint32_t x131 = 953U;
	int32_t x132 = -1;
	uint64_t t16 = 6446476797LLU;

	t16 = (x129%((x130/x131)<x132));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MIN;
	static uint16_t x136 = 26340U;
	volatile int32_t t17 = 0;

	t17 = (x133%((x134/x135)<x136));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x137 = 4975U;
	int8_t x138 = INT8_MIN;
	static volatile int16_t x139 = -1;
	int32_t t18 = 267271;

	t18 = (x137%((x138/x139)<x140));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x158 = UINT32_MAX;
	static int8_t x159 = 7;
	static volatile int32_t x160 = INT32_MAX;
	static int32_t t19 = -330;

	t19 = (x157%((x158/x159)<x160));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x161 = -1;
	uint64_t x162 = 49652LLU;
	volatile int64_t x164 = -1LL;
	volatile int32_t t20 = 0;

	t20 = (x161%((x162/x163)<x164));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x165 = UINT64_MAX;
	int64_t x167 = INT64_MAX;
	int32_t x168 = INT32_MAX;

	t21 = (x165%((x166/x167)<x168));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x174 = UINT16_MAX;
	static uint32_t x175 = 632U;
	int32_t x176 = INT32_MIN;
	int64_t t22 = 3516439LL;

	t22 = (x173%((x174/x175)<x176));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x177 = -1;
	volatile uint8_t x179 = 80U;
	uint16_t x180 = 7132U;
	static int32_t t23 = 314155656;

	t23 = (x177%((x178/x179)<x180));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x193 = UINT8_MAX;
	volatile int64_t x194 = 89144LL;
	int32_t x196 = INT32_MAX;
	int32_t t24 = 37447;

	t24 = (x193%((x194/x195)<x196));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x201 = 498;
	volatile int8_t x202 = INT8_MIN;
	volatile int32_t x203 = -1;
	uint16_t x204 = 12021U;
	volatile int32_t t25 = -3867085;

	t25 = (x201%((x202/x203)<x204));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x205 = UINT32_MAX;
	int64_t x206 = 67223114256682LL;
	int16_t x207 = -1;
	int8_t x208 = -1;

	t26 = (x205%((x206/x207)<x208));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x209 = INT16_MIN;
	static uint16_t x210 = UINT16_MAX;
	volatile int32_t t27 = -22520;

	t27 = (x209%((x210/x211)<x212));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x213 = 6U;
	int16_t x214 = -1;
	volatile int16_t x215 = INT16_MIN;
	volatile int64_t x216 = INT64_MAX;
	int32_t t28 = -27;

	t28 = (x213%((x214/x215)<x216));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x218 = -1;
	volatile int8_t x219 = INT8_MIN;
	static volatile uint16_t x220 = UINT16_MAX;
	int32_t t29 = 31547428;

	t29 = (x217%((x218/x219)<x220));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x222 = 126;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = 53U;
	uint64_t t30 = 1420194934756LLU;

	t30 = (x221%((x222/x223)<x224));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x241 = -1;
	int32_t x242 = 26;
	int32_t x243 = INT32_MAX;
	int64_t x244 = 3403820872215968743LL;
	static int32_t t31 = -1564;

	t31 = (x241%((x242/x243)<x244));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	static int16_t x247 = -1;
	static uint16_t x248 = UINT16_MAX;
	volatile int32_t t32 = 773670;

	t32 = (x245%((x246/x247)<x248));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x261 = -127;
	uint8_t x262 = UINT8_MAX;
	volatile int16_t x263 = -4905;
	volatile int16_t x264 = 6112;

	t33 = (x261%((x262/x263)<x264));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x270 = INT32_MAX;
	int64_t x272 = INT64_MAX;

	t34 = (x269%((x270/x271)<x272));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x273 = 3U;
	static int64_t x274 = 17002LL;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;

	t35 = (x273%((x274/x275)<x276));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x281 = INT32_MAX;
	int8_t x282 = -16;
	uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 147U;
	volatile int32_t t36 = -118;

	t36 = (x281%((x282/x283)<x284));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x285 = INT64_MAX;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = -1;
	int64_t x288 = INT64_MAX;

	t37 = (x285%((x286/x287)<x288));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x289 = -1;
	static int64_t x290 = INT64_MIN;
	int16_t x291 = INT16_MAX;
	int8_t x292 = INT8_MIN;
	volatile int32_t t38 = -28;

	t38 = (x289%((x290/x291)<x292));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x295 = 8995LL;
	uint64_t x296 = UINT64_MAX;

	t39 = (x293%((x294/x295)<x296));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x298 = 17477U;
	uint64_t x299 = 1157794962739LLU;
	volatile uint32_t x300 = 920U;

	t40 = (x297%((x298/x299)<x300));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x301 = 0U;
	int32_t x302 = 5146651;
	uint16_t x303 = 56U;
	int32_t x304 = INT32_MAX;
	volatile int32_t t41 = -1476543;

	t41 = (x301%((x302/x303)<x304));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x306 = -1;
	static int16_t x307 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	int32_t t42 = 2;

	t42 = (x305%((x306/x307)<x308));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x310 = -1;
	int8_t x311 = -1;
	int8_t x312 = 2;
	int32_t t43 = 40631637;

	t43 = (x309%((x310/x311)<x312));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = -1LL;
	static uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	int64_t t44 = 22201400606165357LL;

	t44 = (x317%((x318/x319)<x320));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x325 = -4;
	int64_t x326 = 16317163411LL;
	int8_t x327 = -1;
	int64_t x328 = -1LL;

	t45 = (x325%((x326/x327)<x328));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x330 = -1LL;
	static volatile int32_t x331 = 43;
	static volatile int8_t x332 = 1;
	uint32_t t46 = 18911171U;

	t46 = (x329%((x330/x331)<x332));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x333 = 3U;
	volatile uint64_t x334 = 1LLU;
	static volatile uint64_t x335 = 14843037LLU;
	uint16_t x336 = 16492U;
	volatile int32_t t47 = 13746449;

	t47 = (x333%((x334/x335)<x336));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x338 = 6631;
	uint32_t x339 = 33U;
	int32_t x340 = -1;
	int32_t t48 = 823910717;

	t48 = (x337%((x338/x339)<x340));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x341 = 1;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = UINT64_MAX;

	t49 = (x341%((x342/x343)<x344));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x345 = -6047;
	int8_t x347 = -1;
	int32_t t50 = 19;

	t50 = (x345%((x346/x347)<x348));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x354 = 42306626607026248LLU;
	int64_t x356 = INT64_MIN;
	volatile int32_t t51 = 6426;

	t51 = (x353%((x354/x355)<x356));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x365 = 35U;
	int8_t x367 = INT8_MAX;

	t52 = (x365%((x366/x367)<x368));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x385 = -11611;
	int8_t x386 = -1;
	int64_t x387 = 120LL;
	volatile int16_t x388 = 53;

	t53 = (x385%((x386/x387)<x388));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = -1;
	int16_t x391 = INT16_MIN;
	volatile int32_t t54 = 450023;

	t54 = (x389%((x390/x391)<x392));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x398 = 2340;
	volatile int32_t x399 = 364338862;
	uint32_t t55 = 6347U;

	t55 = (x397%((x398/x399)<x400));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x409 = 437;
	volatile int64_t x410 = -2805771809LL;
	static volatile int16_t x412 = -2;
	static int32_t t56 = 0;

	t56 = (x409%((x410/x411)<x412));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x413 = UINT16_MAX;
	uint32_t x414 = 279050946U;
	int16_t x415 = INT16_MIN;
	static volatile int8_t x416 = INT8_MIN;

	t57 = (x413%((x414/x415)<x416));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x421 = INT64_MIN;
	volatile uint32_t x423 = 1072U;

	t58 = (x421%((x422/x423)<x424));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x425 = -1;
	int64_t x426 = -1LL;
	int64_t x427 = INT64_MIN;

	t59 = (x425%((x426/x427)<x428));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x433 = 1362U;
	static int64_t x434 = -1LL;
	static int16_t x435 = INT16_MIN;
	volatile uint8_t x436 = UINT8_MAX;
	volatile uint32_t t60 = 22044756U;

	t60 = (x433%((x434/x435)<x436));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x437 = 358;
	static int8_t x438 = 0;
	uint64_t x439 = UINT64_MAX;
	static int32_t t61 = 559;

	t61 = (x437%((x438/x439)<x440));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x441 = 3;
	int16_t x442 = -1;
	int16_t x443 = -1;
	uint8_t x444 = 2U;
	volatile int32_t t62 = 0;

	t62 = (x441%((x442/x443)<x444));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x450 = 13113230602966LLU;
	int16_t x451 = -58;
	int64_t x452 = -1LL;
	volatile int32_t t63 = -30795919;

	t63 = (x449%((x450/x451)<x452));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x457 = INT32_MIN;
	static uint16_t x458 = UINT16_MAX;
	static uint8_t x460 = 1U;

	t64 = (x457%((x458/x459)<x460));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x461 = 57561048197153LLU;
	uint64_t x462 = 49302955LLU;
	static int16_t x464 = INT16_MAX;

	t65 = (x461%((x462/x463)<x464));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x465 = UINT64_MAX;
	uint8_t x466 = 23U;
	int64_t x468 = -15120927173384LL;

	t66 = (x465%((x466/x467)<x468));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x473 = UINT32_MAX;
	uint32_t x474 = 426U;
	volatile int32_t x475 = -36758058;
	int16_t x476 = -1;
	volatile uint32_t t67 = 115U;

	t67 = (x473%((x474/x475)<x476));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x477 = -1LL;
	static int32_t x478 = INT32_MAX;
	int32_t x479 = -1164405;
	volatile int8_t x480 = INT8_MAX;
	int64_t t68 = -24916440861LL;

	t68 = (x477%((x478/x479)<x480));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x482 = -23;
	volatile int16_t x483 = INT16_MIN;
	uint64_t t69 = 4724571971581LLU;

	t69 = (x481%((x482/x483)<x484));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x494 = -1;
	static uint8_t x495 = UINT8_MAX;
	uint64_t x496 = 290139988991882993LLU;
	volatile int32_t t70 = -70;

	t70 = (x493%((x494/x495)<x496));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x501 = 127U;
	int8_t x502 = INT8_MIN;
	int16_t x503 = INT16_MAX;
	static volatile int32_t x504 = 1045;
	static volatile int32_t t71 = -21;

	t71 = (x501%((x502/x503)<x504));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x505 = 57U;
	uint64_t x506 = 898618711889LLU;
	static int8_t x507 = -1;
	int16_t x508 = INT16_MAX;

	t72 = (x505%((x506/x507)<x508));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x510 = INT8_MIN;
	int16_t x511 = -1;
	uint64_t x512 = 106945LLU;

	t73 = (x509%((x510/x511)<x512));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x513 = UINT64_MAX;
	int16_t x514 = INT16_MAX;
	volatile int64_t x515 = INT64_MAX;
	uint64_t x516 = 16383905052631109LLU;
	uint64_t t74 = 6LLU;

	t74 = (x513%((x514/x515)<x516));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x522 = INT64_MAX;
	static int32_t x523 = -658789709;
	volatile int32_t t75 = 2083;

	t75 = (x521%((x522/x523)<x524));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x525 = UINT8_MAX;
	volatile int64_t x527 = INT64_MAX;
	static volatile int32_t x528 = 1360;
	int32_t t76 = -76;

	t76 = (x525%((x526/x527)<x528));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x529 = UINT64_MAX;
	volatile int16_t x530 = INT16_MIN;
	int16_t x531 = 100;
	volatile int64_t x532 = INT64_MAX;

	t77 = (x529%((x530/x531)<x532));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x537 = UINT16_MAX;
	int32_t x538 = INT32_MIN;
	int32_t x539 = -159862;
	uint64_t x540 = 22093388026213217LLU;

	t78 = (x537%((x538/x539)<x540));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x550 = -947393485666329LL;
	static uint32_t x552 = 1U;
	volatile int32_t t79 = 121231;

	t79 = (x549%((x550/x551)<x552));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x553 = INT16_MAX;
	static uint32_t x554 = UINT32_MAX;
	volatile int32_t x555 = 893;
	uint64_t x556 = UINT64_MAX;
	volatile int32_t t80 = 0;

	t80 = (x553%((x554/x555)<x556));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x561 = 6338;
	int64_t x563 = -2539036LL;
	volatile int16_t x564 = INT16_MIN;
	int32_t t81 = -3;

	t81 = (x561%((x562/x563)<x564));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x565 = INT64_MAX;
	uint32_t x566 = 56830U;
	static volatile int32_t x567 = -634841726;
	uint8_t x568 = UINT8_MAX;
	volatile int64_t t82 = 0LL;

	t82 = (x565%((x566/x567)<x568));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x569 = UINT16_MAX;
	uint16_t x570 = 6U;
	uint32_t x571 = 6U;
	static int32_t t83 = -243;

	t83 = (x569%((x570/x571)<x572));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x574 = -1;
	volatile int64_t x575 = 178941784130076LL;
	uint64_t x576 = UINT64_MAX;
	static int32_t t84 = 530724331;

	t84 = (x573%((x574/x575)<x576));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x601 = 52U;
	int64_t x603 = INT64_MIN;
	uint16_t x604 = UINT16_MAX;
	static volatile int32_t t85 = -14694689;

	t85 = (x601%((x602/x603)<x604));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x605 = -1;
	uint32_t x606 = 518317U;
	int8_t x607 = -1;
	static int8_t x608 = -1;
	static int32_t t86 = -67055970;

	t86 = (x605%((x606/x607)<x608));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x609 = INT16_MIN;
	uint32_t x610 = UINT32_MAX;
	uint16_t x611 = 6055U;
	int8_t x612 = -1;
	int32_t t87 = 22771;

	t87 = (x609%((x610/x611)<x612));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x617 = INT16_MIN;
	int16_t x618 = 1;
	static uint64_t x619 = UINT64_MAX;
	int32_t x620 = INT32_MIN;

	t88 = (x617%((x618/x619)<x620));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x638 = 86U;
	int64_t x639 = -1LL;
	int16_t x640 = INT16_MAX;
	int32_t t89 = 3034982;

	t89 = (x637%((x638/x639)<x640));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x641 = UINT64_MAX;
	int16_t x642 = -1;
	int8_t x643 = INT8_MIN;
	uint8_t x644 = 111U;
	volatile uint64_t t90 = 3219329631515LLU;

	t90 = (x641%((x642/x643)<x644));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x647 = -1;
	uint64_t x648 = 41603891105LLU;
	int32_t t91 = 47995;

	t91 = (x645%((x646/x647)<x648));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x649 = -1LL;
	static uint64_t x650 = UINT64_MAX;
	uint64_t x651 = UINT64_MAX;
	int32_t x652 = 5;
	volatile int64_t t92 = -8870495LL;

	t92 = (x649%((x650/x651)<x652));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x653 = 9;
	uint16_t x654 = UINT16_MAX;
	int64_t x655 = -1LL;
	int32_t x656 = -4792;

	t93 = (x653%((x654/x655)<x656));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x661 = INT64_MIN;
	int64_t x662 = INT64_MAX;
	static uint64_t x663 = 75LLU;
	volatile int64_t t94 = -1590352966987003LL;

	t94 = (x661%((x662/x663)<x664));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x665 = UINT8_MAX;
	uint32_t x666 = 246443355U;
	static uint8_t x667 = 5U;
	int16_t x668 = INT16_MIN;
	static int32_t t95 = -7998430;

	t95 = (x665%((x666/x667)<x668));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x669 = -209517;
	int32_t x670 = INT32_MAX;
	volatile uint16_t x671 = 16U;
	volatile int64_t x672 = INT64_MAX;

	t96 = (x669%((x670/x671)<x672));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x677 = 718852487472LL;
	volatile int32_t x678 = 334236996;
	int16_t x680 = INT16_MIN;

	t97 = (x677%((x678/x679)<x680));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x685 = -22887736;
	uint16_t x686 = 3U;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t98 = 655;

	t98 = (x685%((x686/x687)<x688));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x690 = 1;
	static int64_t x691 = -2886LL;
	volatile uint32_t x692 = UINT32_MAX;
	uint32_t t99 = 1U;

	t99 = (x689%((x690/x691)<x692));

	if (t99 != 0U) { NG(); } else { ; }
	
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

