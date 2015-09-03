#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x13 = 13634;
volatile uint8_t x16 = 9U;
int32_t x18 = -186583;
int32_t x32 = -1;
int8_t x40 = -1;
uint64_t x47 = 129LLU;
volatile uint64_t t7 = 44723275780LLU;
volatile uint64_t t8 = 3LLU;
volatile int8_t x61 = -1;
volatile uint32_t t10 = 120U;
int8_t x65 = 1;
volatile int64_t x66 = 1LL;
int16_t x74 = INT16_MIN;
volatile int32_t t13 = -105;
int8_t x84 = -1;
uint16_t x89 = 70U;
volatile int16_t x90 = -1;
uint32_t x97 = UINT32_MAX;
uint32_t x104 = 910U;
uint16_t x128 = 22U;
int32_t t20 = 0;
int8_t x130 = -1;
uint64_t t22 = 51117LLU;
volatile uint8_t x142 = 117U;
int32_t t23 = 4051;
int32_t t24 = -3514814;
static uint16_t x159 = UINT16_MAX;
volatile uint64_t t26 = 13667LLU;
uint32_t x169 = UINT32_MAX;
uint32_t x170 = 166993U;
uint64_t t28 = 31429975751LLU;
volatile int64_t t29 = -1921671154541555127LL;
uint64_t t30 = 2278215951323779592LLU;
volatile int32_t t31 = -17550521;
int64_t t33 = 214899198284215LL;
uint8_t x206 = 58U;
int32_t x230 = -227;
int16_t x232 = INT16_MAX;
int16_t x240 = INT16_MIN;
static volatile int8_t x253 = 11;
int8_t x256 = INT8_MAX;
uint16_t x261 = UINT16_MAX;
int8_t x263 = INT8_MIN;
static int16_t x266 = INT16_MAX;
volatile int64_t t41 = -29288LL;
uint8_t x285 = UINT8_MAX;
int64_t x311 = -69230LL;
static uint8_t x313 = 48U;
static int32_t x323 = INT32_MAX;
volatile uint32_t t50 = 1229135U;
volatile int8_t x325 = INT8_MIN;
static uint16_t x340 = 28993U;
static int16_t x345 = -1473;
volatile uint8_t x347 = 9U;
int32_t x348 = -135194;
volatile uint32_t t55 = 17U;
volatile int64_t t56 = 1285LL;
volatile uint8_t x361 = 0U;
static volatile uint8_t x373 = 46U;
uint8_t x376 = UINT8_MAX;
volatile uint64_t t60 = 76LLU;
int64_t x382 = -1LL;
int16_t x383 = -2679;
static int64_t t62 = 19LL;
volatile int8_t x385 = -1;
volatile int64_t t63 = -54962LL;
int32_t x398 = -1986;
uint64_t x409 = UINT64_MAX;
uint8_t x415 = UINT8_MAX;
int32_t x417 = INT32_MIN;
uint64_t x423 = 82LLU;
volatile int32_t x428 = -1;
int8_t x429 = -11;
int32_t t71 = 185;
int32_t x434 = -176956360;
int16_t x439 = INT16_MIN;
static int64_t x441 = INT64_MIN;
static int16_t x442 = -289;
int32_t x457 = -1;
static volatile uint32_t t76 = 47U;
int8_t x462 = -3;
int16_t x465 = INT16_MAX;
int8_t x468 = INT8_MIN;
int64_t x472 = INT64_MIN;
uint16_t x481 = 101U;
int64_t x485 = -535617427332775LL;
static volatile int8_t x486 = -1;
volatile int8_t x497 = INT8_MIN;
int64_t x509 = INT64_MIN;
int32_t x522 = 3;
static int16_t x523 = INT16_MAX;
static uint64_t x524 = 2894LLU;
static int64_t t89 = 525074214876465429LL;
volatile int16_t x548 = -1;
volatile int64_t t92 = 3942LL;
volatile int8_t x550 = -4;
uint64_t x551 = UINT64_MAX;
volatile int64_t t94 = 730LL;
volatile uint64_t x559 = 53128LLU;
static volatile uint64_t t95 = 84256LLU;
volatile int32_t x574 = 673;
int64_t x577 = -1LL;
int8_t x581 = INT8_MIN;
uint32_t x583 = 28046315U;
uint32_t x586 = 3361475U;


void f0(void) {
	uint32_t x14 = 41541192U;
	int32_t x15 = -5084;
	uint32_t t0 = 101527697U;

	t0 = ((x13&(x14*x15))+x16);

	if (t0 != 8201U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = INT8_MIN;
	int64_t x19 = -1LL;
	int16_t x20 = INT16_MIN;
	static int64_t t1 = -1536LL;

	t1 = ((x17&(x18*x19))+x20);

	if (t1 != 153728LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MAX;
	int16_t x23 = -1;
	uint32_t x24 = 1486031735U;
	int64_t t2 = 19582677075577LL;

	t2 = ((x21&(x22*x23))+x24);

	if (t2 != -9223372035368744073LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 14U;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MAX;
	int32_t t3 = 839;

	t3 = ((x29&(x30*x31))+x32);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = -1LL;
	int8_t x34 = INT8_MAX;
	int8_t x35 = INT8_MAX;
	uint16_t x36 = 7U;
	static volatile int64_t t4 = -1LL;

	t4 = ((x33&(x34*x35))+x36);

	if (t4 != 16136LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = -1;
	int32_t x38 = 42;
	volatile int16_t x39 = INT16_MIN;
	volatile int32_t t5 = -6172453;

	t5 = ((x37&(x38*x39))+x40);

	if (t5 != -1376257) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x41 = 30U;
	volatile uint16_t x42 = 98U;
	int16_t x43 = -1;
	int32_t x44 = -3272382;
	volatile int32_t t6 = 431;

	t6 = ((x41&(x42*x43))+x44);

	if (t6 != -3272352) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 2LLU;
	int8_t x46 = INT8_MIN;
	int64_t x48 = 49467LL;

	t7 = ((x45&(x46*x47))+x48);

	if (t7 != 49467LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 242948604834LLU;
	int16_t x54 = 8;
	int32_t x55 = -100196286;
	uint16_t x56 = UINT16_MAX;

	t8 = ((x53&(x54*x55))+x56);

	if (t8 != 242935792127LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x57 = 0U;
	uint8_t x58 = 64U;
	static volatile uint16_t x59 = UINT16_MAX;
	static int16_t x60 = 35;
	uint32_t t9 = 1U;

	t9 = ((x57&(x58*x59))+x60);

	if (t9 != 35U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x62 = 6159335U;
	static int32_t x63 = -1;
	static volatile uint8_t x64 = 18U;

	t10 = ((x61&(x62*x63))+x64);

	if (t10 != 4288807979U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x67 = 30819183U;
	int16_t x68 = INT16_MIN;
	volatile int64_t t11 = -26LL;

	t11 = ((x65&(x66*x67))+x68);

	if (t11 != -32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = 1;
	int32_t x70 = -1;
	volatile int32_t x71 = INT32_MAX;
	int32_t x72 = -1;
	volatile int32_t t12 = -886099;

	t12 = ((x69&(x70*x71))+x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x73 = UINT16_MAX;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 28U;

	t13 = ((x73&(x74*x75))+x76);

	if (t13 != 32796) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x81 = INT8_MAX;
	static int16_t x82 = -1;
	volatile uint32_t x83 = 39U;
	static volatile uint32_t t14 = 128858905U;

	t14 = ((x81&(x82*x83))+x84);

	if (t14 != 88U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = 30620282408604754LLU;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = -1LL;
	static int8_t x88 = 5;
	uint64_t t15 = 3347099842662497LLU;

	t15 = ((x85&(x86*x87))+x88);

	if (t15 != 30620282408604677LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x91 = -6;
	static int8_t x92 = INT8_MAX;
	int32_t t16 = 26186065;

	t16 = ((x89&(x90*x91))+x92);

	if (t16 != 133) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x98 = INT8_MIN;
	int8_t x99 = 34;
	int16_t x100 = 15;
	static uint32_t t17 = 10U;

	t17 = ((x97&(x98*x99))+x100);

	if (t17 != 4294962959U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x101 = 81;
	uint8_t x102 = 0U;
	int64_t x103 = INT64_MAX;
	volatile int64_t t18 = 29802LL;

	t18 = ((x101&(x102*x103))+x104);

	if (t18 != 910LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x121 = -1;
	volatile uint32_t x122 = UINT32_MAX;
	uint64_t x123 = 14370LLU;
	volatile int64_t x124 = INT64_MAX;
	volatile uint64_t t19 = 126LLU;

	t19 = ((x121&(x122*x123))+x124);

	if (t19 != 9223433755534804957LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x125 = -1;
	uint16_t x126 = 20U;
	static uint16_t x127 = UINT16_MAX;

	t20 = ((x125&(x126*x127))+x128);

	if (t20 != 1310722) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x131 = 45032U;
	uint8_t x132 = 0U;
	int64_t t21 = -2528069430150LL;

	t21 = ((x129&(x130*x131))+x132);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x134 = 53LLU;
	int8_t x135 = INT8_MAX;
	static uint16_t x136 = UINT16_MAX;

	t22 = ((x133&(x134*x135))+x136);

	if (t22 != 72191LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x141 = 78U;
	int8_t x143 = 1;
	int8_t x144 = INT8_MIN;

	t23 = ((x141&(x142*x143))+x144);

	if (t23 != -60) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = 0;
	int8_t x151 = INT8_MAX;
	volatile uint8_t x152 = 19U;

	t24 = ((x149&(x150*x151))+x152);

	if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x157 = INT8_MAX;
	volatile int32_t x158 = -1;
	int16_t x160 = INT16_MIN;
	volatile int32_t t25 = 6;

	t25 = ((x157&(x158*x159))+x160);

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x161 = 3135570073481LLU;
	static int32_t x162 = 0;
	volatile int32_t x163 = -1;
	int32_t x164 = INT32_MIN;

	t26 = ((x161&(x162*x163))+x164);

	if (t26 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x165 = INT16_MIN;
	int8_t x166 = -12;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = 19U;
	volatile int32_t t27 = 15;

	t27 = ((x165&(x166*x167))+x168);

	if (t27 != 393235) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x171 = 368997466116493028LLU;
	int16_t x172 = 13;

	t28 = ((x169&(x170*x171))+x172);

	if (t28 != 238937649LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x173 = -1LL;
	static uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MIN;

	t29 = ((x173&(x174*x175))+x176);

	if (t29 != -2147516288LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = -1;
	uint64_t x182 = 1372308575208LLU;
	static int8_t x183 = -1;
	int32_t x184 = -1;

	t30 = ((x181&(x182*x183))+x184);

	if (t30 != 18446742701400976407LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x185 = 4U;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = UINT16_MAX;
	uint8_t x188 = 9U;

	t31 = ((x185&(x186*x187))+x188);

	if (t31 != 9) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = INT16_MIN;
	static int16_t x190 = -5;
	volatile int8_t x191 = -1;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t32 = -80;

	t32 = ((x189&(x190*x191))+x192);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x201 = -1LL;
	volatile int16_t x202 = INT16_MIN;
	uint16_t x203 = UINT16_MAX;
	static volatile int32_t x204 = INT32_MAX;

	t33 = ((x201&(x202*x203))+x204);

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x205 = 69;
	int16_t x207 = -1;
	int16_t x208 = 3;
	volatile int32_t t34 = 14;

	t34 = ((x205&(x206*x207))+x208);

	if (t34 != 71) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x229 = INT32_MIN;
	int8_t x231 = -20;
	int32_t t35 = -21771;

	t35 = ((x229&(x230*x231))+x232);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x237 = 2364578070LLU;
	int16_t x238 = -1;
	int8_t x239 = INT8_MAX;
	volatile uint64_t t36 = 3727964247823LLU;

	t36 = ((x237&(x238*x239))+x240);

	if (t36 != 2364545280LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x245 = 6145361224249197LLU;
	int16_t x246 = 1;
	static volatile uint16_t x247 = 2U;
	int64_t x248 = -1LL;
	uint64_t t37 = UINT64_MAX;

	t37 = ((x245&(x246*x247))+x248);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x254 = UINT8_MAX;
	uint16_t x255 = 958U;
	static int32_t t38 = 1;

	t38 = ((x253&(x254*x255))+x256);

	if (t38 != 129) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x257 = 0;
	static uint32_t x258 = 1380104U;
	static int8_t x259 = -1;
	int16_t x260 = -1;
	static volatile uint32_t t39 = UINT32_MAX;

	t39 = ((x257&(x258*x259))+x260);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x262 = 214100U;
	int16_t x264 = INT16_MAX;
	static volatile uint32_t t40 = 15U;

	t40 = ((x261&(x262*x263))+x264);

	if (t40 != 87551U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x265 = INT16_MIN;
	uint8_t x267 = 2U;
	int64_t x268 = 544LL;

	t41 = ((x265&(x266*x267))+x268);

	if (t41 != 33312LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x277 = UINT16_MAX;
	volatile int16_t x278 = INT16_MIN;
	volatile int16_t x279 = 156;
	static int16_t x280 = -54;
	int32_t t42 = 158299227;

	t42 = ((x277&(x278*x279))+x280);

	if (t42 != -54) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x286 = 534210488058LLU;
	volatile uint32_t x287 = 0U;
	static int64_t x288 = INT64_MAX;
	uint64_t t43 = 550390858776745548LLU;

	t43 = ((x285&(x286*x287))+x288);

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x293 = -1;
	int16_t x294 = INT16_MAX;
	static int64_t x295 = 1803LL;
	uint64_t x296 = 81137537241485313LLU;
	volatile uint64_t t44 = 45LLU;

	t44 = ((x293&(x294*x295))+x296);

	if (t44 != 81137537300564214LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x297 = 42U;
	int16_t x298 = -1;
	volatile int64_t x299 = -1LL;
	volatile uint16_t x300 = UINT16_MAX;
	static volatile int64_t t45 = 2852522118896615152LL;

	t45 = ((x297&(x298*x299))+x300);

	if (t45 != 65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x306 = -1;
	static int32_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	uint64_t t46 = 1482023685580301LLU;

	t46 = ((x305&(x306*x307))+x308);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = -1;
	int16_t x312 = -4088;
	volatile int64_t t47 = -37541135414685LL;

	t47 = ((x309&(x310*x311))+x312);

	if (t47 != -3978LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x314 = -1LL;
	uint16_t x315 = 3U;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int64_t t48 = -67471980964383LL;

	t48 = ((x313&(x314*x315))+x316);

	if (t48 != 303LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x317 = 34814869LLU;
	static int16_t x318 = INT16_MIN;
	static volatile uint16_t x319 = UINT16_MAX;
	volatile int32_t x320 = INT32_MIN;
	uint64_t t49 = 16383224590711919LLU;

	t49 = ((x317&(x318*x319))+x320);

	if (t49 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x321 = 105365673U;
	uint32_t x322 = UINT32_MAX;
	int8_t x324 = INT8_MIN;

	t50 = ((x321&(x322*x323))+x324);

	if (t50 != 4294967169U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x326 = INT16_MIN;
	int32_t x327 = -34;
	int16_t x328 = INT16_MAX;
	volatile int32_t t51 = 662;

	t51 = ((x325&(x326*x327))+x328);

	if (t51 != 1146879) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x329 = UINT16_MAX;
	int64_t x330 = 172116585701LL;
	volatile int64_t x331 = -1LL;
	uint32_t x332 = UINT32_MAX;
	int64_t t52 = 1685493002571789LL;

	t52 = ((x329&(x330*x331))+x332);

	if (t52 != 4294988570LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MAX;
	volatile int8_t x335 = -1;
	volatile uint16_t x336 = 10U;
	int32_t t53 = 522;

	t53 = ((x333&(x334*x335))+x336);

	if (t53 != 32779) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x337 = 45U;
	static volatile int8_t x338 = 2;
	static volatile int8_t x339 = -1;
	int32_t t54 = -5000408;

	t54 = ((x337&(x338*x339))+x340);

	if (t54 != 29037) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x346 = 29220U;

	t55 = ((x345&(x346*x347))+x348);

	if (t55 != 127466U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x349 = 3;
	int64_t x350 = -744784250828LL;
	static volatile int16_t x351 = -1;
	uint16_t x352 = UINT16_MAX;

	t56 = ((x349&(x350*x351))+x352);

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x362 = 13;
	uint16_t x363 = 0U;
	volatile uint8_t x364 = UINT8_MAX;
	int32_t t57 = -28003352;

	t57 = ((x361&(x362*x363))+x364);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x365 = INT32_MIN;
	int32_t x366 = 5055;
	static volatile uint16_t x367 = 3149U;
	int8_t x368 = 0;
	int32_t t58 = 7;

	t58 = ((x365&(x366*x367))+x368);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x369 = INT32_MAX;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = 2690322073059LLU;
	uint32_t x372 = 9526691U;
	volatile uint64_t t59 = 60954591LLU;

	t59 = ((x369&(x370*x371))+x372);

	if (t59 != 2107628963LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x374 = INT32_MAX;
	uint64_t x375 = 221LLU;

	t60 = ((x373&(x374*x375))+x376);

	if (t60 != 289LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = UINT64_MAX;
	volatile int32_t x380 = INT32_MAX;
	uint64_t t61 = 7591LLU;

	t61 = ((x377&(x378*x379))+x380);

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x381 = INT64_MIN;
	static volatile uint8_t x384 = UINT8_MAX;

	t62 = ((x381&(x382*x383))+x384);

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = -106326284LL;
	volatile int32_t x388 = 140077;

	t63 = ((x385&(x386*x387))+x388);

	if (t63 != -27113062343LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x393 = INT64_MIN;
	uint8_t x394 = UINT8_MAX;
	uint64_t x395 = 217165LLU;
	int64_t x396 = 1552LL;
	uint64_t t64 = 6272815247LLU;

	t64 = ((x393&(x394*x395))+x396);

	if (t64 != 1552LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x397 = INT16_MAX;
	volatile int64_t x399 = -25827162LL;
	static int64_t x400 = INT64_MIN;
	int64_t t65 = -1793603170481743761LL;

	t65 = ((x397&(x398*x399))+x400);

	if (t65 != -9223372036854765516LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x410 = 425314LL;
	int32_t x411 = INT32_MIN;
	uint64_t x412 = 10919LLU;
	uint64_t t66 = 146537516166LLU;

	t66 = ((x409&(x410*x411))+x412);

	if (t66 != 18445830718849297063LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x413 = -49;
	static volatile int16_t x414 = -1;
	static int32_t x416 = 113415703;
	static int32_t t67 = -1;

	t67 = ((x413&(x414*x415))+x416);

	if (t67 != 113415448) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = INT16_MIN;
	static uint32_t x420 = UINT32_MAX;
	uint32_t t68 = 74226U;

	t68 = ((x417&(x418*x419))+x420);

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x421 = INT32_MIN;
	volatile uint8_t x422 = 107U;
	int8_t x424 = -4;
	volatile uint64_t t69 = 78153588LLU;

	t69 = ((x421&(x422*x423))+x424);

	if (t69 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x425 = INT16_MIN;
	uint16_t x426 = 157U;
	uint8_t x427 = UINT8_MAX;
	static volatile int32_t t70 = -84;

	t70 = ((x425&(x426*x427))+x428);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x430 = -9;
	int8_t x431 = -1;
	static int8_t x432 = INT8_MIN;

	t71 = ((x429&(x430*x431))+x432);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x433 = 382533729803LLU;
	int32_t x435 = -1;
	static uint32_t x436 = UINT32_MAX;
	volatile uint64_t t72 = 409473791156165521LLU;

	t72 = ((x433&(x434*x435))+x436);

	if (t72 != 4303888903LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x437 = INT16_MAX;
	int8_t x438 = INT8_MIN;
	static volatile int8_t x440 = -4;
	int32_t t73 = 50649317;

	t73 = ((x437&(x438*x439))+x440);

	if (t73 != -4) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x443 = 49463177362431LLU;
	static volatile uint32_t x444 = 3472U;
	volatile uint64_t t74 = 62683690626829877LLU;

	t74 = ((x441&(x442*x443))+x444);

	if (t74 != 9223372036854779280LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x445 = UINT16_MAX;
	int64_t x446 = INT64_MAX;
	int32_t x447 = -1;
	volatile uint8_t x448 = 104U;
	int64_t t75 = -31596LL;

	t75 = ((x445&(x446*x447))+x448);

	if (t75 != 105LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x458 = 519212487U;
	int32_t x459 = INT32_MIN;
	volatile int16_t x460 = -1;

	t76 = ((x457&(x458*x459))+x460);

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x461 = INT64_MIN;
	static int8_t x463 = -1;
	static int32_t x464 = 1;
	volatile int64_t t77 = -10640677190771LL;

	t77 = ((x461&(x462*x463))+x464);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x466 = 1U;
	static int64_t x467 = -50898933286LL;
	static int64_t t78 = 14316895LL;

	t78 = ((x465&(x466*x467))+x468);

	if (t78 != 26970LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x469 = INT16_MAX;
	volatile int16_t x470 = INT16_MIN;
	int32_t x471 = -1;
	int64_t t79 = INT64_MIN;

	t79 = ((x469&(x470*x471))+x472);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x477 = INT32_MAX;
	static int16_t x478 = 0;
	int32_t x479 = 374399;
	int16_t x480 = 0;
	volatile int32_t t80 = -188342367;

	t80 = ((x477&(x478*x479))+x480);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x482 = 21U;
	static volatile uint8_t x483 = 93U;
	int32_t x484 = -1;
	int32_t t81 = 82857;

	t81 = ((x481&(x482*x483))+x484);

	if (t81 != 32) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x487 = 1U;
	static uint8_t x488 = 10U;
	int64_t t82 = -72LL;

	t82 = ((x485&(x486*x487))+x488);

	if (t82 != -535617427332765LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x493 = INT8_MAX;
	uint8_t x494 = 65U;
	uint8_t x495 = 6U;
	uint32_t x496 = 1837553U;
	volatile uint32_t t83 = 167U;

	t83 = ((x493&(x494*x495))+x496);

	if (t83 != 1837559U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x498 = INT8_MAX;
	uint32_t x499 = 2054183U;
	int32_t x500 = 14602575;
	static uint32_t t84 = 3529345U;

	t84 = ((x497&(x498*x499))+x500);

	if (t84 != 275483727U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x501 = INT32_MIN;
	int16_t x502 = INT16_MIN;
	int8_t x503 = -1;
	int64_t x504 = -335LL;
	int64_t t85 = -11LL;

	t85 = ((x501&(x502*x503))+x504);

	if (t85 != -335LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x505 = INT8_MIN;
	static int16_t x506 = INT16_MIN;
	uint32_t x507 = 18U;
	uint64_t x508 = 1546LLU;
	uint64_t t86 = 2872968154025059LLU;

	t86 = ((x505&(x506*x507))+x508);

	if (t86 != 4294379018LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x510 = UINT64_MAX;
	int16_t x511 = 10714;
	int16_t x512 = -27;
	volatile uint64_t t87 = 6LLU;

	t87 = ((x509&(x510*x511))+x512);

	if (t87 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x521 = 1U;
	volatile uint64_t t88 = 24910002846278LLU;

	t88 = ((x521&(x522*x523))+x524);

	if (t88 != 2895LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x529 = 843889U;
	int32_t x530 = -1;
	int16_t x531 = INT16_MAX;
	int64_t x532 = 287139823627LL;

	t89 = ((x529&(x530*x531))+x532);

	if (t89 != 287140642828LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x533 = INT32_MIN;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = 0;
	static int16_t x536 = -12641;
	int32_t t90 = -879;

	t90 = ((x533&(x534*x535))+x536);

	if (t90 != -12641) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x541 = UINT32_MAX;
	volatile int8_t x542 = 1;
	int8_t x543 = INT8_MAX;
	static volatile int8_t x544 = INT8_MAX;
	volatile uint32_t t91 = 13U;

	t91 = ((x541&(x542*x543))+x544);

	if (t91 != 254U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x545 = INT64_MAX;
	int32_t x546 = INT32_MAX;
	int8_t x547 = 0;

	t92 = ((x545&(x546*x547))+x548);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x549 = 25970;
	uint64_t x552 = 1769499515647LLU;
	volatile uint64_t t93 = 1454LLU;

	t93 = ((x549&(x550*x551))+x552);

	if (t93 != 1769499515647LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x553 = INT32_MIN;
	int32_t x554 = -1;
	int64_t x555 = 232488955LL;
	int16_t x556 = -388;

	t94 = ((x553&(x554*x555))+x556);

	if (t94 != -2147484036LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x557 = -909;
	static int8_t x558 = INT8_MAX;
	uint8_t x560 = UINT8_MAX;

	t95 = ((x557&(x558*x559))+x560);

	if (t95 != 6747503LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x573 = -1226034028733792752LL;
	uint8_t x575 = UINT8_MAX;
	int32_t x576 = -308;
	int64_t t96 = -1771548378234410LL;

	t96 = ((x573&(x574*x575))+x576);

	if (t96 != 171228LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x578 = 244LLU;
	int32_t x579 = INT32_MAX;
	int32_t x580 = -1;
	volatile uint64_t t97 = 7068575LLU;

	t97 = ((x577&(x578*x579))+x580);

	if (t97 != 523986009867LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x582 = -1LL;
	volatile int8_t x584 = INT8_MAX;
	int64_t t98 = 8409LL;

	t98 = ((x581&(x582*x583))+x584);

	if (t98 != -28046209LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x585 = 15U;
	int64_t x587 = 2415392200LL;
	int16_t x588 = INT16_MIN;
	static volatile int64_t t99 = 2551239829LL;

	t99 = ((x585&(x586*x587))+x588);

	if (t99 != -32760LL) { NG(); } else { ; }
	
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

