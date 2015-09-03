#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 62772551LLU;
static volatile int16_t x7 = INT16_MIN;
volatile uint32_t t1 = 21U;
volatile uint64_t t3 = UINT64_MAX;
int32_t x26 = INT32_MIN;
int8_t x33 = INT8_MIN;
uint8_t x41 = 57U;
static int8_t x43 = INT8_MAX;
static int32_t x53 = 5218;
volatile int64_t x55 = INT64_MIN;
uint32_t x65 = 113308U;
uint32_t x66 = 196U;
uint16_t x70 = UINT16_MAX;
int16_t x76 = INT16_MIN;
int32_t t15 = -434342;
volatile uint64_t t16 = 22LLU;
int16_t x90 = -1;
int16_t x100 = 2971;
uint64_t t19 = 297948856029692099LLU;
int8_t x103 = INT8_MIN;
static int8_t x110 = 1;
int32_t x119 = -1;
int32_t x121 = 955;
uint8_t x122 = UINT8_MAX;
int32_t t25 = -47;
volatile uint64_t t26 = 431905434612987LLU;
static int8_t x136 = INT8_MAX;
volatile int64_t t27 = -1718956775855089664LL;
int64_t t28 = 140919256565772LL;
int64_t x145 = 3175371832909731576LL;
volatile uint64_t t31 = 2053LLU;
volatile uint8_t x158 = 3U;
volatile uint64_t t34 = 14693842709901LLU;
uint64_t t35 = 7LLU;
volatile uint8_t x189 = 122U;
uint64_t t39 = 509891470LLU;
volatile uint64_t t40 = 221488426323890LLU;
uint8_t x220 = 1U;
int64_t x222 = -1LL;
uint32_t x224 = 7346307U;
int64_t t42 = -337LL;
uint64_t x231 = UINT64_MAX;
int64_t x237 = -229176228622LL;
volatile uint64_t t44 = 29LLU;
int64_t x251 = -1LL;
int64_t x253 = -1LL;
int64_t x255 = INT64_MIN;
int64_t x258 = INT64_MIN;
uint32_t x265 = 744009U;
volatile uint32_t x277 = 1184U;
static uint32_t x280 = 1028811U;
uint32_t x281 = 34297746U;
uint32_t t52 = 1149U;
int8_t x286 = INT8_MIN;
uint64_t t53 = 4007866LLU;
int16_t x294 = 28;
uint32_t t55 = 50371084U;
volatile int32_t x298 = INT32_MAX;
volatile uint32_t t61 = 4U;
int32_t x349 = INT32_MAX;
static volatile uint64_t x353 = UINT64_MAX;
uint8_t x355 = 20U;
volatile uint16_t x362 = 1U;
int16_t x363 = -1;
int64_t t66 = -33413512840804LL;
int8_t x374 = -41;
int32_t x383 = INT32_MIN;
uint16_t x389 = 26U;
volatile uint64_t t69 = 4076288752536099506LLU;
int16_t x397 = -1;
static int32_t x403 = -1;
static volatile int8_t x422 = -1;
int16_t x426 = INT16_MIN;
int32_t x439 = INT32_MIN;
int16_t x440 = INT16_MIN;
static int8_t x446 = INT8_MIN;
int64_t x448 = 10473703025LL;
volatile int16_t x451 = -1;
uint64_t x462 = 133209291654053LLU;
static volatile uint32_t x465 = 31U;
uint32_t x485 = 1660U;
int16_t x486 = INT16_MIN;
int32_t x497 = INT32_MAX;
int8_t x501 = 0;
int64_t x517 = -157654818LL;
uint8_t x518 = 1U;
static int16_t x539 = INT16_MIN;
static volatile uint8_t x540 = UINT8_MAX;
uint64_t x548 = 1413LLU;
uint64_t x550 = UINT64_MAX;
volatile uint64_t t99 = 3528097370722280562LLU;


void f0(void) {
	volatile int16_t x1 = 396;
	static int8_t x2 = INT8_MAX;
	uint64_t x3 = 3130583599805LLU;
	volatile int64_t x4 = INT64_MIN;

	t0 = ((x1-(x2|x3))*x4);

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = -799;
	uint32_t x8 = 3591496U;

	t1 = ((x5-(x6|x7))*x8);

	if (t1 != 293070448U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 9;
	uint8_t x10 = 3U;
	volatile int16_t x11 = INT16_MAX;
	int32_t x12 = 26;
	volatile int32_t t2 = -70520096;

	t2 = ((x9-(x10|x11))*x12);

	if (t2 != -851708) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 0U;
	int16_t x14 = -1;
	uint64_t x15 = 236717555LLU;
	int32_t x16 = -1;

	t3 = ((x13-(x14|x15))*x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int16_t x18 = 0;
	static int8_t x19 = 1;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 1254;

	t4 = ((x17-(x18|x19))*x20);

	if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 23049461617LLU;
	static int64_t x27 = INT64_MIN;
	uint64_t x28 = UINT64_MAX;
	uint64_t t5 = 1403066984688142LLU;

	t5 = ((x25-(x26|x27))*x28);

	if (t5 != 18446744048512606351LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = -227884416;
	int16_t x35 = INT16_MIN;
	static uint32_t x36 = 20085U;
	uint32_t t6 = 1739608280U;

	t6 = ((x33-(x34|x35))*x36);

	if (t6 != 313647360U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = UINT64_MAX;
	int8_t x38 = INT8_MAX;
	int8_t x39 = -7;
	volatile uint64_t x40 = 152358592300810LLU;
	static uint64_t t7 = 3LLU;

	t7 = ((x37-(x38|x39))*x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x42 = 123446;
	volatile uint8_t x44 = 17U;
	static int32_t t8 = 103280;

	t8 = ((x41-(x42|x43))*x44);

	if (t8 != -2098854) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	static uint8_t x46 = 15U;
	volatile int16_t x47 = INT16_MIN;
	uint8_t x48 = 127U;
	volatile int32_t t9 = -6;

	t9 = ((x45-(x46|x47))*x48);

	if (t9 != -1905) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x54 = -246649466120662LL;
	int32_t x56 = 1567;
	int64_t t10 = -17055LL;

	t10 = ((x53-(x54|x55))*x56);

	if (t10 != 386499713419253960LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -50;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MIN;
	volatile uint16_t x60 = 19U;
	static volatile int32_t t11 = 4529138;

	t11 = ((x57-(x58|x59))*x60);

	if (t11 != -931) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x61 = INT16_MIN;
	static volatile int16_t x62 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = -1LL;
	volatile uint64_t t12 = 125273684447879LLU;

	t12 = ((x61-(x62|x63))*x64);

	if (t12 != 32767LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x67 = 42U;
	static uint32_t x68 = 4503122U;
	volatile uint32_t t13 = 3222U;

	t13 = ((x65-(x66|x67))*x68);

	if (t13 != 2361863612U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MAX;
	int8_t x71 = 0;
	int8_t x72 = INT8_MIN;
	int32_t t14 = 5;

	t14 = ((x69-(x70|x71))*x72);

	if (t14 != 4194304) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = 32;
	static int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MIN;

	t15 = ((x73-(x74|x75))*x76);

	if (t15 != -5242880) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x81 = UINT8_MAX;
	static int32_t x82 = 6;
	int16_t x83 = -223;
	uint64_t x84 = 3990111502232590869LLU;

	t16 = ((x81-(x82|x83))*x84);

	if (t16 != 1764733535408625336LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = -1;
	int32_t x86 = -55;
	volatile int64_t x87 = -3LL;
	int8_t x88 = 0;
	int64_t t17 = 230LL;

	t17 = ((x85-(x86|x87))*x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 766354U;
	static uint64_t x91 = 268113364996716LLU;
	static int64_t x92 = INT64_MAX;
	volatile uint64_t t18 = 4182685290LLU;

	t18 = ((x89-(x90|x91))*x92);

	if (t18 != 9223372036854009453LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = -1;
	volatile int8_t x98 = INT8_MIN;
	uint64_t x99 = 67325720474548LLU;

	t19 = ((x97-(x98|x99))*x100);

	if (t19 != 222825LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int8_t x102 = INT8_MIN;
	uint8_t x104 = 2U;
	volatile int32_t t20 = -772499;

	t20 = ((x101-(x102|x103))*x104);

	if (t20 != 766) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = INT64_MAX;
	static volatile uint8_t x106 = 92U;
	int64_t x107 = INT64_MAX;
	uint64_t x108 = 145469505834514LLU;
	volatile uint64_t t21 = 2083271195521723LLU;

	t21 = ((x105-(x106|x107))*x108);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	static volatile int8_t x111 = -24;
	int64_t x112 = 3LL;
	uint64_t t22 = 39LLU;

	t22 = ((x109-(x110|x111))*x112);

	if (t22 != 66LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x117 = 0;
	volatile uint32_t x118 = UINT32_MAX;
	static uint8_t x120 = 96U;
	uint32_t t23 = 20060753U;

	t23 = ((x117-(x118|x119))*x120);

	if (t23 != 96U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x123 = 77;
	static volatile uint16_t x124 = 27U;
	int32_t t24 = 7663260;

	t24 = ((x121-(x122|x123))*x124);

	if (t24 != 18900) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x125 = 1;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MAX;
	volatile int8_t x128 = -1;

	t25 = ((x125-(x126|x127))*x128);

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x129 = 58403LLU;
	uint8_t x130 = UINT8_MAX;
	static uint32_t x131 = 1928833U;
	uint16_t x132 = 2139U;

	t26 = ((x129-(x130|x131))*x132);

	if (t26 != 18446744069708432332LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = 41509534957510LL;
	int8_t x134 = -1;
	uint32_t x135 = 437U;

	t27 = ((x133-(x134|x135))*x136);

	if (t27 != 5271165478757305LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = -1LL;
	static volatile int8_t x138 = 6;
	uint16_t x139 = 3U;
	volatile int32_t x140 = INT32_MAX;

	t28 = ((x137-(x138|x139))*x140);

	if (t28 != -17179869176LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x146 = UINT64_MAX;
	uint16_t x147 = 31142U;
	int16_t x148 = -1;
	uint64_t t29 = 3743870471454635343LLU;

	t29 = ((x145-(x146|x147))*x148);

	if (t29 != 15271372240799820039LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 36U;
	int16_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	uint16_t x152 = 9U;
	uint64_t t30 = 14287099912085116LLU;

	t30 = ((x149-(x150|x151))*x152);

	if (t30 != 333LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = -1;
	uint64_t x154 = 1428170932LLU;
	int8_t x155 = -1;
	static uint8_t x156 = UINT8_MAX;

	t31 = ((x153-(x154|x155))*x156);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x157 = 89613;
	uint16_t x159 = 6U;
	int16_t x160 = -1;
	int32_t t32 = 112647;

	t32 = ((x157-(x158|x159))*x160);

	if (t32 != -89606) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = INT8_MIN;
	volatile int64_t x166 = 156LL;
	uint16_t x167 = 259U;
	static int8_t x168 = INT8_MIN;
	volatile int64_t t33 = 100445586LL;

	t33 = ((x165-(x166|x167))*x168);

	if (t33 != 69504LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x169 = 26400LLU;
	volatile int32_t x170 = INT32_MAX;
	static int16_t x171 = 87;
	int8_t x172 = INT8_MAX;

	t34 = ((x169-(x170|x171))*x172);

	if (t34 != 18446743800982481247LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x181 = UINT64_MAX;
	int16_t x182 = -1;
	uint64_t x183 = 7373LLU;
	uint32_t x184 = 1244006U;

	t35 = ((x181-(x182|x183))*x184);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = 1732;
	int64_t x186 = INT64_MAX;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 6476U;
	static int64_t t36 = -8128052355315LL;

	t36 = ((x185-(x186|x187))*x188);

	if (t36 != 11222908LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x190 = 12U;
	uint64_t x191 = 3885107679845LLU;
	int64_t x192 = 37844935LL;
	uint64_t t37 = 29788434LLU;

	t37 = ((x189-(x190|x191))*x192);

	if (t37 != 542304982255900443LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x194 = 128408647333237LLU;
	static int16_t x195 = 225;
	volatile int64_t x196 = INT64_MIN;
	static uint64_t t38 = 2749242273411800LLU;

	t38 = ((x193-(x194|x195))*x196);

	if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x197 = INT16_MAX;
	volatile uint64_t x198 = 13365937009LLU;
	uint32_t x199 = 15U;
	volatile int32_t x200 = -287278;

	t39 = ((x197-(x198|x199))*x200);

	if (t39 != 3839730242855168LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int64_t x202 = -21698301535LL;
	int16_t x203 = -199;
	static uint64_t x204 = UINT64_MAX;

	t40 = ((x201-(x202|x203))*x204);

	if (t40 != 18446744069414584250LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x217 = 1;
	int32_t x218 = INT32_MAX;
	int32_t x219 = INT32_MIN;
	volatile int32_t t41 = 62587586;

	t41 = ((x217-(x218|x219))*x220);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MIN;
	static uint8_t x223 = UINT8_MAX;

	t42 = ((x221-(x222|x223))*x224);

	if (t42 != -932980989LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x229 = 144U;
	static int8_t x230 = INT8_MIN;
	volatile int64_t x232 = 28166997LL;
	uint64_t t43 = 87907LLU;

	t43 = ((x229-(x230|x231))*x232);

	if (t43 != 4084214565LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x238 = -1;
	uint64_t x239 = 1025LLU;
	static int64_t x240 = INT64_MIN;

	t44 = ((x237-(x238|x239))*x240);

	if (t44 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = -1;
	int32_t x252 = INT32_MIN;
	volatile int64_t t45 = 29252LL;

	t45 = ((x249-(x250|x251))*x252);

	if (t45 != 70366596694016LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x254 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	int64_t t46 = 6894078690885803LL;

	t46 = ((x253-(x254|x255))*x256);

	if (t46 != -70366596694016LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MIN;
	volatile uint8_t x259 = 34U;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t47 = 375661021917LLU;

	t47 = ((x257-(x258|x259))*x260);

	if (t47 != 9223372036854808610LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 111U;
	static int32_t x262 = INT32_MIN;
	int64_t x263 = -7LL;
	int16_t x264 = -1;
	static int64_t t48 = 755675955036LL;

	t48 = ((x261-(x262|x263))*x264);

	if (t48 != -118LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x266 = -1;
	volatile uint16_t x267 = 567U;
	volatile uint8_t x268 = 1U;
	uint32_t t49 = 48U;

	t49 = ((x265-(x266|x267))*x268);

	if (t49 != 744010U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x273 = -1;
	int32_t x274 = INT32_MAX;
	int8_t x275 = INT8_MIN;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t50 = 25940573;

	t50 = ((x273-(x274|x275))*x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 254U;
	uint32_t t51 = 1028U;

	t51 = ((x277-(x278|x279))*x280);

	if (t51 != 309134710U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MAX;
	int8_t x284 = 1;

	t52 = ((x281-(x282|x283))*x284);

	if (t52 != 34297747U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x287 = -14;
	int64_t x288 = INT64_MAX;

	t53 = ((x285-(x286|x287))*x288);

	if (t53 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x289 = 30U;
	int32_t x290 = -1;
	volatile int8_t x291 = -15;
	int8_t x292 = 1;
	int32_t t54 = -826081;

	t54 = ((x289-(x290|x291))*x292);

	if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x293 = INT32_MIN;
	uint32_t x295 = 361U;
	static uint32_t x296 = UINT32_MAX;

	t55 = ((x293-(x294|x295))*x296);

	if (t55 != 2147484029U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x297 = -1;
	uint64_t x299 = 56105LLU;
	static uint16_t x300 = 538U;
	static uint64_t t56 = 1313373978907LLU;

	t56 = ((x297-(x298|x299))*x300);

	if (t56 != 18446742918363348992LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x309 = INT16_MAX;
	uint8_t x310 = UINT8_MAX;
	volatile uint16_t x311 = UINT16_MAX;
	static int16_t x312 = -61;
	int32_t t57 = 0;

	t57 = ((x309-(x310|x311))*x312);

	if (t57 != 1998848) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = INT64_MAX;
	volatile int16_t x326 = -2;
	static volatile uint64_t x327 = 32604340974667639LLU;
	static uint32_t x328 = UINT32_MAX;
	volatile uint64_t t58 = 2691165283LLU;

	t58 = ((x325-(x326|x327))*x328);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = -1;
	static uint16_t x330 = 4703U;
	static int64_t x331 = -1LL;
	int8_t x332 = INT8_MAX;
	volatile int64_t t59 = -67066718998411LL;

	t59 = ((x329-(x330|x331))*x332);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x337 = 29U;
	static int8_t x338 = 0;
	int8_t x339 = -1;
	uint64_t x340 = 48052446622712LLU;
	uint64_t t60 = 186777372387LLU;

	t60 = ((x337-(x338|x339))*x340);

	if (t60 != 1441573398681360LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x341 = 16517164U;
	int8_t x342 = 20;
	volatile int16_t x343 = INT16_MAX;
	int16_t x344 = INT16_MIN;

	t61 = ((x341-(x342|x343))*x344);

	if (t61 != 1005158400U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x345 = 24LLU;
	int64_t x346 = INT64_MAX;
	volatile int16_t x347 = -1;
	static int64_t x348 = -413127LL;
	static volatile uint64_t t62 = 1590183063361LLU;

	t62 = ((x345-(x346|x347))*x348);

	if (t62 != 18446744073699223441LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x350 = -1LL;
	int32_t x351 = 101629;
	int16_t x352 = -29;
	static int64_t t63 = -382449450LL;

	t63 = ((x349-(x350|x351))*x352);

	if (t63 != -62277025792LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x354 = INT32_MAX;
	int32_t x356 = -1;
	static volatile uint64_t t64 = 64408472244LLU;

	t64 = ((x353-(x354|x355))*x356);

	if (t64 != 2147483648LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x361 = -1501720;
	uint16_t x364 = 1151U;
	int32_t t65 = -47666282;

	t65 = ((x361-(x362|x363))*x364);

	if (t65 != -1728478569) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = -1LL;
	static int32_t x370 = INT32_MIN;
	volatile int16_t x371 = 17;
	static int32_t x372 = 12058;

	t66 = ((x369-(x370|x371))*x372);

	if (t66 != 25894357610540LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x373 = 26U;
	static int32_t x375 = -9161;
	int16_t x376 = INT16_MIN;
	volatile int32_t t67 = 1524470;

	t67 = ((x373-(x374|x375))*x376);

	if (t67 != -1146880) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x381 = 26;
	int16_t x382 = 2794;
	int64_t x384 = -1LL;
	volatile int64_t t68 = 513326LL;

	t68 = ((x381-(x382|x383))*x384);

	if (t68 != -2147480880LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x390 = INT64_MAX;
	volatile int16_t x391 = INT16_MIN;
	volatile uint64_t x392 = 49869LLU;

	t69 = ((x389-(x390|x391))*x392);

	if (t69 != 1346463LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x393 = 9U;
	int64_t x394 = 121340122LL;
	int16_t x395 = -22;
	static int16_t x396 = INT16_MIN;
	volatile int64_t t70 = 64632001523LL;

	t70 = ((x393-(x394|x395))*x396);

	if (t70 != -491520LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x398 = -1;
	static int64_t x399 = -172832LL;
	int64_t x400 = INT64_MIN;
	volatile int64_t t71 = 19422743202910LL;

	t71 = ((x397-(x398|x399))*x400);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x401 = 0;
	int16_t x402 = INT16_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t72 = 14244;

	t72 = ((x401-(x402|x403))*x404);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x405 = 1U;
	int64_t x406 = INT64_MIN;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = INT16_MIN;
	static volatile uint64_t t73 = 9677LLU;

	t73 = ((x405-(x406|x407))*x408);

	if (t73 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x409 = -1;
	uint16_t x410 = 152U;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MAX;
	volatile uint32_t t74 = 833U;

	t74 = ((x409-(x410|x411))*x412);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x421 = 2097443529LLU;
	uint16_t x423 = UINT16_MAX;
	volatile int8_t x424 = -6;
	uint64_t t75 = 97547547498585878LLU;

	t75 = ((x421-(x422|x423))*x424);

	if (t75 != 18446744061124890436LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x425 = 0;
	uint64_t x427 = UINT64_MAX;
	static volatile int8_t x428 = -1;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x425-(x426|x427))*x428);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MIN;
	static volatile int32_t t77 = -2533578;

	t77 = ((x437-(x438|x439))*x440);

	if (t77 != 1069547520) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x441 = -1LL;
	static volatile int16_t x442 = INT16_MAX;
	static volatile int8_t x443 = -5;
	uint32_t x444 = 55896281U;
	int64_t t78 = -1LL;

	t78 = ((x441-(x442|x443))*x444);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x445 = 78U;
	static int16_t x447 = INT16_MIN;
	volatile int64_t t79 = -34544388741LL;

	t79 = ((x445-(x446|x447))*x448);

	if (t79 != 2157582823150LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x449 = -19LL;
	int8_t x450 = INT8_MIN;
	int8_t x452 = -3;
	static volatile int64_t t80 = -1129624LL;

	t80 = ((x449-(x450|x451))*x452);

	if (t80 != 54LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x457 = INT8_MIN;
	static volatile uint8_t x458 = 2U;
	volatile int8_t x459 = INT8_MIN;
	uint64_t x460 = 9582626136LLU;
	volatile uint64_t t81 = 15147LLU;

	t81 = ((x457-(x458|x459))*x460);

	if (t81 != 18446744054544299344LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x461 = -10;
	uint64_t x463 = UINT64_MAX;
	int64_t x464 = INT64_MIN;
	uint64_t t82 = 246088733929LLU;

	t82 = ((x461-(x462|x463))*x464);

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x466 = 3LL;
	static int32_t x467 = -1;
	int16_t x468 = -1;
	volatile int64_t t83 = 3643580096LL;

	t83 = ((x465-(x466|x467))*x468);

	if (t83 != -32LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x487 = INT8_MIN;
	volatile int8_t x488 = -1;
	uint32_t t84 = 13168831U;

	t84 = ((x485-(x486|x487))*x488);

	if (t84 != 4294965508U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x489 = 22673505LLU;
	int64_t x490 = INT64_MAX;
	int8_t x491 = INT8_MAX;
	int64_t x492 = INT64_MIN;
	volatile uint64_t t85 = 0LLU;

	t85 = ((x489-(x490|x491))*x492);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x493 = 0;
	int16_t x494 = -12505;
	int8_t x495 = INT8_MIN;
	static uint64_t x496 = 1583695041165011LLU;
	uint64_t t86 = 249368399LLU;

	t86 = ((x493-(x494|x495))*x496);

	if (t86 != 140948858663685979LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x498 = INT32_MIN;
	static int64_t x499 = -1LL;
	int32_t x500 = INT32_MIN;
	volatile int64_t t87 = -122963370811LL;

	t87 = ((x497-(x498|x499))*x500);

	if (t87 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x502 = INT16_MIN;
	uint16_t x503 = 2U;
	static volatile int16_t x504 = INT16_MIN;
	volatile int32_t t88 = -1023;

	t88 = ((x501-(x502|x503))*x504);

	if (t88 != -1073676288) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x505 = INT16_MAX;
	volatile int64_t x506 = -22481685LL;
	uint64_t x507 = 543LLU;
	volatile uint32_t x508 = UINT32_MAX;
	static uint64_t t89 = 1009269LLU;

	t89 = ((x505-(x506|x507))*x508);

	if (t89 != 96696550082246400LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x509 = 7007LLU;
	volatile int32_t x510 = INT32_MAX;
	static int64_t x511 = -5569481729346LL;
	volatile int8_t x512 = -2;
	uint64_t t90 = 43404LLU;

	t90 = ((x509-(x510|x511))*x512);

	if (t90 != 18446732936859339072LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x519 = UINT16_MAX;
	uint32_t x520 = 694156U;
	int64_t t91 = 9LL;

	t91 = ((x517-(x518|x519))*x520);

	if (t91 != -109482529357068LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x529 = INT8_MIN;
	int64_t x530 = INT64_MIN;
	volatile int32_t x531 = INT32_MIN;
	uint16_t x532 = 0U;
	volatile int64_t t92 = -118578LL;

	t92 = ((x529-(x530|x531))*x532);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x533 = INT16_MAX;
	int16_t x534 = 97;
	int32_t x535 = -2350;
	int32_t x536 = -1;
	static volatile int32_t t93 = 85;

	t93 = ((x533-(x534|x535))*x536);

	if (t93 != -35084) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x537 = 84U;
	int64_t x538 = -4554LL;
	int64_t t94 = -950588973516748524LL;

	t94 = ((x537-(x538|x539))*x540);

	if (t94 != 1182690LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x545 = UINT16_MAX;
	static int64_t x546 = -1LL;
	static uint64_t x547 = 214502LLU;
	uint64_t t95 = 25LLU;

	t95 = ((x545-(x546|x547))*x548);

	if (t95 != 92602368LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x549 = 302116936LL;
	volatile int8_t x551 = -1;
	uint64_t x552 = 11914212551852LLU;
	static uint64_t t96 = 485319666023291LLU;

	t96 = ((x549-(x550|x551))*x552);

	if (t96 != 2370308559117352204LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x553 = UINT64_MAX;
	volatile int16_t x554 = INT16_MIN;
	volatile uint8_t x555 = UINT8_MAX;
	uint32_t x556 = 11456192U;
	uint64_t t97 = 407739710LLU;

	t97 = ((x553-(x554|x555))*x556);

	if (t97 != 372463714304LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x557 = INT8_MAX;
	static uint32_t x558 = 271487013U;
	static uint32_t x559 = 133U;
	volatile int8_t x560 = INT8_MIN;
	uint32_t t98 = 3535576U;

	t98 = ((x557-(x558|x559))*x560);

	if (t98 != 390599424U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x561 = -53181LL;
	int64_t x562 = 147111443LL;
	uint64_t x563 = 9LLU;
	int64_t x564 = INT64_MIN;

	t99 = ((x561-(x562|x563))*x564);

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

