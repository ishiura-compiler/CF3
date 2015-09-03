#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = -6;
volatile int32_t t0 = 50;
volatile int32_t x9 = -1;
int32_t x19 = INT32_MIN;
int64_t x25 = INT64_MIN;
int8_t x36 = INT8_MAX;
volatile uint64_t t5 = 46464559LLU;
int8_t x48 = 0;
int64_t x49 = -1LL;
static int8_t x51 = INT8_MIN;
int32_t x57 = INT32_MAX;
volatile int16_t x64 = INT16_MAX;
volatile int32_t t12 = 344543;
int32_t t14 = -47775658;
int32_t t16 = -2745674;
static int8_t x121 = -1;
uint32_t x123 = 23U;
uint64_t x138 = UINT64_MAX;
static volatile uint64_t x139 = 2LLU;
uint32_t x140 = UINT32_MAX;
volatile uint64_t t20 = 65339869394577736LLU;
static int32_t x145 = -3;
uint32_t x146 = 8373U;
volatile int16_t x147 = INT16_MAX;
volatile uint32_t t21 = 3U;
int32_t x162 = INT32_MAX;
int32_t t28 = 1680536;
uint64_t x188 = 36466327615766LLU;
int64_t x195 = INT64_MIN;
int64_t x207 = 600551LL;
int32_t t32 = 1;
uint64_t x209 = 54LLU;
static uint16_t x213 = 252U;
uint64_t x247 = 55363767548LLU;
uint16_t x267 = 22U;
volatile uint32_t t39 = 301U;
static volatile int64_t x342 = INT64_MAX;
int64_t x343 = -1LL;
int16_t x347 = -1;
uint32_t t45 = 9U;
uint16_t x368 = 11U;
uint32_t x370 = 3U;
volatile int8_t x374 = INT8_MAX;
uint8_t x378 = UINT8_MAX;
int8_t x379 = INT8_MIN;
static uint32_t t51 = 779U;
volatile uint16_t x418 = 2555U;
uint16_t x422 = 7331U;
uint64_t x424 = UINT64_MAX;
volatile int64_t t54 = 1LL;
int64_t x442 = 62917762LL;
int32_t x443 = 28;
volatile int64_t t56 = -13987663375110LL;
uint8_t x446 = 1U;
volatile uint32_t t58 = 249475864U;
uint64_t x458 = 594007395575LLU;
volatile int16_t x459 = -8067;
volatile int32_t t62 = 276836;
static volatile uint8_t x470 = 108U;
static int32_t t63 = -7;
int16_t x489 = INT16_MIN;
uint8_t x492 = UINT8_MAX;
volatile uint64_t t64 = 27LLU;
static int32_t x505 = -95;
int32_t t66 = -37382;
int32_t x509 = -1;
static volatile int8_t x515 = INT8_MIN;
int64_t x525 = -767LL;
int16_t x551 = INT16_MIN;
int64_t t72 = -7908190379110740LL;
uint32_t x553 = UINT32_MAX;
uint16_t x555 = UINT16_MAX;
static volatile int32_t x560 = INT32_MAX;
uint32_t t74 = 146U;
static uint8_t x561 = 14U;
int8_t x563 = -63;
static int32_t t75 = 30257;
volatile int32_t x591 = 63975624;
int8_t x597 = INT8_MAX;
static uint16_t x615 = UINT16_MAX;
int8_t x619 = INT8_MIN;
int32_t x625 = INT32_MIN;
uint64_t x638 = UINT64_MAX;
volatile int32_t t88 = 24777;
static int32_t x674 = INT32_MAX;
int64_t x681 = INT64_MIN;
uint32_t x683 = 72U;
uint16_t x699 = UINT16_MAX;
int64_t t93 = 115130452LL;
int64_t x709 = -158975620LL;
uint8_t x717 = 4U;
int8_t x719 = INT8_MIN;
uint8_t x736 = 115U;


void f0(void) {
	int16_t x6 = INT16_MAX;
	uint64_t x7 = 49084030LLU;
	uint64_t x8 = 2273983LLU;

	t0 = (x5%(x6<<(x7<=x8)));

	if (t0 != -6) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x10 = 1458712U;
	static uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 33U;
	static volatile uint32_t t1 = 209463323U;

	t1 = (x9%(x10<<(x11<=x12)));

	if (t1 != 519167U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 289104408U;
	volatile int8_t x18 = 55;
	int16_t x20 = -1;
	uint32_t t2 = 1791661U;

	t2 = (x17%(x18<<(x19<=x20)));

	if (t2 != 98U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x26 = 16U;
	static uint32_t x27 = 3180U;
	int32_t x28 = INT32_MIN;
	volatile int64_t t3 = 213115056196288LL;

	t3 = (x25%(x26<<(x27<=x28)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = 1;
	uint8_t x32 = UINT8_MAX;
	uint64_t t4 = 13810LLU;

	t4 = (x29%(x30<<(x31<=x32)));

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -3794275;
	static uint64_t x34 = 35006694033LLU;
	volatile uint16_t x35 = UINT16_MAX;

	t5 = (x33%(x34<<(x35<=x36)));

	if (t5 != 14395820790LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = 2740;
	uint64_t x39 = 5LLU;
	int16_t x40 = INT16_MAX;
	uint64_t t6 = 70153764940729949LLU;

	t6 = (x37%(x38<<(x39<=x40)));

	if (t6 != 3895LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	static volatile int64_t x42 = INT64_MAX;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = 2;
	static int64_t t7 = -10LL;

	t7 = (x41%(x42<<(x43<=x44)));

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint16_t x46 = 11843U;
	volatile int32_t x47 = INT32_MIN;
	uint64_t t8 = 82427460737167129LLU;

	t8 = (x45%(x46<<(x47<=x48)));

	if (t8 != 23025LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x50 = 10346176188158298LLU;
	int32_t x52 = -2005;
	static volatile uint64_t t9 = 757249585948001662LLU;

	t9 = (x49%(x50<<(x51<=x52)));

	if (t9 != 9858106411464579LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x53 = 1347U;
	int32_t x54 = INT32_MAX;
	static volatile int32_t x55 = 319336326;
	volatile int16_t x56 = INT16_MIN;
	int32_t t10 = 30543;

	t10 = (x53%(x54<<(x55<=x56)));

	if (t10 != 1347) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x58 = 9592561214553006LLU;
	static int8_t x59 = INT8_MAX;
	static uint8_t x60 = 0U;
	uint64_t t11 = 411928144LLU;

	t11 = (x57%(x58<<(x59<=x60)));

	if (t11 != 2147483647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = -1;
	uint8_t x62 = 3U;
	int32_t x63 = -251283;

	t12 = (x61%(x62<<(x63<=x64)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MAX;
	int8_t x67 = -2;
	static int64_t x68 = 33200990484172LL;
	int32_t t13 = -4098;

	t13 = (x65%(x66<<(x67<=x68)));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	static uint16_t x75 = 9U;
	volatile uint64_t x76 = UINT64_MAX;

	t14 = (x73%(x74<<(x75<=x76)));

	if (t14 != -8) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 315902U;
	uint64_t x82 = 1585612416761633LLU;
	static volatile int64_t x83 = INT64_MIN;
	uint32_t x84 = 9442082U;
	uint64_t t15 = 151801LLU;

	t15 = (x81%(x82<<(x83<=x84)));

	if (t15 != 315902LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x117 = -1;
	uint16_t x118 = 2815U;
	static int16_t x119 = INT16_MIN;
	int64_t x120 = -1LL;

	t16 = (x117%(x118<<(x119<=x120)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x122 = INT32_MAX;
	static uint8_t x124 = 6U;
	volatile int32_t t17 = -2;

	t17 = (x121%(x122<<(x123<=x124)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x125 = 858593LLU;
	uint16_t x126 = 55U;
	int16_t x127 = 0;
	static int8_t x128 = INT8_MIN;
	uint64_t t18 = 4192633170408687LLU;

	t18 = (x125%(x126<<(x127<=x128)));

	if (t18 != 43LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x137 = 3U;
	volatile uint64_t t19 = 0LLU;

	t19 = (x137%(x138<<(x139<=x140)));

	if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x141 = 12738;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = 1;
	uint32_t x144 = 14939818U;

	t20 = (x141%(x142<<(x143<=x144)));

	if (t20 != 12738LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x148 = 891;

	t21 = (x145%(x146<<(x147<=x148)));

	if (t21 != 3451U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x149 = UINT8_MAX;
	volatile int8_t x150 = 2;
	volatile int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t22 = -12;

	t22 = (x149%(x150<<(x151<=x152)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x153 = INT64_MIN;
	uint32_t x154 = 38823411U;
	volatile int8_t x155 = -15;
	int32_t x156 = INT32_MAX;
	int64_t t23 = 5481207178982895LL;

	t23 = (x153%(x154<<(x155<=x156)));

	if (t23 != -58229894LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x157 = 2138344665272LL;
	int8_t x158 = INT8_MAX;
	int32_t x159 = INT32_MIN;
	volatile uint64_t x160 = UINT64_MAX;
	static int64_t t24 = -1197632712882062LL;

	t24 = (x157%(x158<<(x159<=x160)));

	if (t24 != 136LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x161 = 341652LLU;
	volatile int32_t x163 = -17767238;
	static int32_t x164 = INT32_MIN;
	static volatile uint64_t t25 = 14LLU;

	t25 = (x161%(x162<<(x163<=x164)));

	if (t25 != 341652LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = -21712944LL;
	volatile uint16_t x166 = 4218U;
	volatile uint8_t x167 = 3U;
	int8_t x168 = INT8_MAX;
	int64_t t26 = 846973357052622LL;

	t26 = (x165%(x166<<(x167<=x168)));

	if (t26 != -7116LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x170 = INT16_MAX;
	int32_t x171 = -1762;
	uint8_t x172 = 40U;
	int32_t t27 = -13730061;

	t27 = (x169%(x170<<(x171<=x172)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x181 = 121U;
	uint8_t x182 = 7U;
	uint16_t x183 = 1821U;
	volatile int8_t x184 = -1;

	t28 = (x181%(x182<<(x183<=x184)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x185 = -1LL;
	uint32_t x186 = UINT32_MAX;
	uint64_t x187 = 74LLU;
	static volatile int64_t t29 = 709048444233LL;

	t29 = (x185%(x186<<(x187<=x188)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x193 = 516658;
	int16_t x194 = 6912;
	int16_t x196 = INT16_MAX;
	volatile int32_t t30 = 421457;

	t30 = (x193%(x194<<(x195<=x196)));

	if (t30 != 5170) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = 1LL;
	int16_t x203 = INT16_MAX;
	static volatile uint16_t x204 = UINT16_MAX;
	volatile int64_t t31 = 5090246506LL;

	t31 = (x201%(x202<<(x203<=x204)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x205 = -14;
	uint8_t x206 = 97U;
	int64_t x208 = INT64_MIN;

	t32 = (x205%(x206<<(x207<=x208)));

	if (t32 != -14) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x210 = 622U;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = -1;
	uint64_t t33 = 1LLU;

	t33 = (x209%(x210<<(x211<=x212)));

	if (t33 != 54LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x214 = 1U;
	uint16_t x215 = UINT16_MAX;
	static int8_t x216 = -1;
	int32_t t34 = -100804412;

	t34 = (x213%(x214<<(x215<=x216)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int64_t x242 = INT64_MAX;
	int64_t x243 = INT64_MAX;
	static volatile int64_t x244 = 12627910853500LL;
	volatile uint64_t t35 = 1512889390LLU;

	t35 = (x241%(x242<<(x243<=x244)));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x245 = INT64_MAX;
	static uint16_t x246 = 159U;
	int16_t x248 = 1;
	volatile int64_t t36 = 291666117LL;

	t36 = (x245%(x246<<(x247<=x248)));

	if (t36 != 139LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile uint32_t x266 = 5875U;
	int8_t x268 = -1;
	uint32_t t37 = 1U;

	t37 = (x265%(x266<<(x267<=x268)));

	if (t37 != 4028U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x269 = -987068860562164LL;
	uint64_t x270 = 1498LLU;
	static int8_t x271 = INT8_MIN;
	int32_t x272 = -1;
	uint64_t t38 = 13839LLU;

	t38 = (x269%(x270<<(x271<=x272)));

	if (t38 != 1344LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x273 = 0U;
	static uint32_t x274 = 726U;
	uint32_t x275 = 507U;
	volatile int32_t x276 = -387;

	t39 = (x273%(x274<<(x275<=x276)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x325 = 3055U;
	int32_t x326 = 835366;
	int8_t x327 = INT8_MIN;
	uint8_t x328 = 2U;
	int32_t t40 = 452;

	t40 = (x325%(x326<<(x327<=x328)));

	if (t40 != 3055) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x333 = -854374683;
	uint32_t x334 = UINT32_MAX;
	static uint64_t x335 = 29506280320LLU;
	volatile int64_t x336 = INT64_MIN;
	volatile uint32_t t41 = 9657161U;

	t41 = (x333%(x334<<(x335<=x336)));

	if (t41 != 3440592613U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x341 = 783;
	int64_t x344 = INT64_MIN;
	volatile int64_t t42 = 1086166LL;

	t42 = (x341%(x342<<(x343<=x344)));

	if (t42 != 783LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x345 = 16U;
	uint8_t x346 = 5U;
	static int32_t x348 = -1;
	uint32_t t43 = 19720366U;

	t43 = (x345%(x346<<(x347<=x348)));

	if (t43 != 6U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x357 = INT64_MIN;
	volatile uint16_t x358 = 4440U;
	uint16_t x359 = UINT16_MAX;
	static int64_t x360 = INT64_MAX;
	volatile int64_t t44 = 16292104LL;

	t44 = (x357%(x358<<(x359<=x360)));

	if (t44 != -5408LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x361 = 6556U;
	volatile uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MAX;

	t45 = (x361%(x362<<(x363<=x364)));

	if (t45 != 6556U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = 3010;
	volatile uint32_t x367 = UINT32_MAX;
	int32_t t46 = 2415685;

	t46 = (x365%(x366<<(x367<=x368)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x369 = 2;
	int32_t x371 = 8701;
	int8_t x372 = INT8_MAX;
	volatile uint32_t t47 = 8214971U;

	t47 = (x369%(x370<<(x371<=x372)));

	if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x373 = INT16_MAX;
	volatile int32_t x375 = -3524;
	volatile int8_t x376 = INT8_MAX;
	volatile int32_t t48 = 184259499;

	t48 = (x373%(x374<<(x375<=x376)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x377 = -453;
	volatile int16_t x380 = -1;
	volatile int32_t t49 = 22634751;

	t49 = (x377%(x378<<(x379<=x380)));

	if (t49 != -453) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x389 = INT32_MAX;
	static uint64_t x390 = 6024947312524822238LLU;
	uint32_t x391 = 347U;
	volatile int64_t x392 = -60388LL;
	volatile uint64_t t50 = 28376459699LLU;

	t50 = (x389%(x390<<(x391<=x392)));

	if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x401 = INT32_MIN;
	static uint32_t x402 = 3561050U;
	static uint32_t x403 = 435564975U;
	volatile int8_t x404 = -1;

	t51 = (x401%(x402<<(x403<=x404)));

	if (t51 != 3731548U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x417 = INT64_MIN;
	static int8_t x419 = INT8_MIN;
	volatile int16_t x420 = -1;
	volatile int64_t t52 = -590711818124435LL;

	t52 = (x417%(x418<<(x419<=x420)));

	if (t52 != -3578LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x421 = -1719LL;
	uint8_t x423 = UINT8_MAX;
	static volatile int64_t t53 = -7LL;

	t53 = (x421%(x422<<(x423<=x424)));

	if (t53 != -1719LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MAX;
	uint32_t x431 = UINT32_MAX;
	uint64_t x432 = 5781LLU;

	t54 = (x429%(x430<<(x431<=x432)));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x433 = INT64_MIN;
	uint8_t x434 = 3U;
	int64_t x435 = INT64_MAX;
	int8_t x436 = INT8_MIN;
	int64_t t55 = -327364158320266651LL;

	t55 = (x433%(x434<<(x435<=x436)));

	if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x441 = -1139965872629LL;
	int32_t x444 = INT32_MIN;

	t56 = (x441%(x442<<(x443<=x444)));

	if (t56 != -21860713LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x445 = UINT32_MAX;
	int8_t x447 = INT8_MAX;
	int8_t x448 = 4;
	uint32_t t57 = 0U;

	t57 = (x445%(x446<<(x447<=x448)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x449 = INT16_MIN;
	static uint32_t x450 = UINT32_MAX;
	volatile int32_t x451 = INT32_MAX;
	volatile int32_t x452 = 786310089;

	t58 = (x449%(x450<<(x451<=x452)));

	if (t58 != 4294934528U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x453 = 55497927124LLU;
	int32_t x454 = 48;
	volatile int32_t x455 = 27;
	static volatile int16_t x456 = -1;
	volatile uint64_t t59 = 92155918248LLU;

	t59 = (x453%(x454<<(x455<=x456)));

	if (t59 != 4LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x457 = INT32_MIN;
	int32_t x460 = INT32_MAX;
	volatile uint64_t t60 = 28632264811LLU;

	t60 = (x457%(x458<<(x459<=x460)));

	if (t60 != 31918083618LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x461 = 467;
	int8_t x462 = INT8_MAX;
	int64_t x463 = INT64_MIN;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t61 = 2056240;

	t61 = (x461%(x462<<(x463<=x464)));

	if (t61 != 213) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x465 = INT32_MIN;
	volatile uint8_t x466 = UINT8_MAX;
	int8_t x467 = INT8_MIN;
	int16_t x468 = -1;

	t62 = (x465%(x466<<(x467<=x468)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x469 = -1;
	static uint16_t x471 = 1U;
	int64_t x472 = 3257831458926589LL;

	t63 = (x469%(x470<<(x471<=x472)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x490 = UINT64_MAX;
	int32_t x491 = INT32_MIN;

	t64 = (x489%(x490<<(x491<=x492)));

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x501 = 18;
	volatile int64_t x502 = 30619014023766171LL;
	int64_t x503 = -1LL;
	int8_t x504 = -1;
	volatile int64_t t65 = 8001167723916711LL;

	t65 = (x501%(x502<<(x503<=x504)));

	if (t65 != 18LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x506 = 1U;
	static volatile int64_t x507 = 51783LL;
	uint16_t x508 = 456U;

	t66 = (x505%(x506<<(x507<=x508)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x510 = 1U;
	static volatile int8_t x511 = -1;
	volatile int8_t x512 = INT8_MIN;
	volatile int32_t t67 = 0;

	t67 = (x509%(x510<<(x511<=x512)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x513 = -1;
	int16_t x514 = 1490;
	int8_t x516 = INT8_MIN;
	int32_t t68 = -4197;

	t68 = (x513%(x514<<(x515<=x516)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x526 = 221U;
	int16_t x527 = INT16_MIN;
	int8_t x528 = INT8_MAX;
	volatile int64_t t69 = -931LL;

	t69 = (x525%(x526<<(x527<=x528)));

	if (t69 != -325LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x537 = INT16_MAX;
	uint32_t x538 = UINT32_MAX;
	int8_t x539 = INT8_MAX;
	int8_t x540 = INT8_MIN;
	volatile uint32_t t70 = 29977759U;

	t70 = (x537%(x538<<(x539<=x540)));

	if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x545 = 43U;
	int64_t x546 = 32837779809LL;
	static uint32_t x547 = UINT32_MAX;
	int32_t x548 = -4726;
	int64_t t71 = -207LL;

	t71 = (x545%(x546<<(x547<=x548)));

	if (t71 != 43LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x549 = INT64_MIN;
	static int16_t x550 = 38;
	uint16_t x552 = 1467U;

	t72 = (x549%(x550<<(x551<=x552)));

	if (t72 != -56LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x554 = 65U;
	int64_t x556 = INT64_MAX;
	volatile uint32_t t73 = 33U;

	t73 = (x553%(x554<<(x555<=x556)));

	if (t73 != 125U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x557 = -1;
	uint32_t x558 = UINT32_MAX;
	uint16_t x559 = UINT16_MAX;

	t74 = (x557%(x558<<(x559<=x560)));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x562 = 51U;
	uint64_t x564 = 89346283LLU;

	t75 = (x561%(x562<<(x563<=x564)));

	if (t75 != 14) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x565 = 0;
	volatile uint8_t x566 = 3U;
	uint16_t x567 = 15297U;
	static uint8_t x568 = 1U;
	volatile int32_t t76 = 458;

	t76 = (x565%(x566<<(x567<=x568)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x569 = 41340815867104LL;
	int16_t x570 = INT16_MAX;
	static int32_t x571 = 4;
	uint64_t x572 = UINT64_MAX;
	int64_t t77 = -17LL;

	t77 = (x569%(x570<<(x571<=x572)));

	if (t77 != 25744LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x581 = -21629LL;
	static uint64_t x582 = 10823LLU;
	static int16_t x583 = INT16_MIN;
	volatile int16_t x584 = 6;
	uint64_t t78 = 13115118LLU;

	t78 = (x581%(x582<<(x583<=x584)));

	if (t78 != 14051LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x585 = 677731180LL;
	int16_t x586 = 53;
	volatile int32_t x587 = INT32_MIN;
	int8_t x588 = 0;
	int64_t t79 = -10LL;

	t79 = (x585%(x586<<(x587<=x588)));

	if (t79 != 40LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x589 = 234124266LLU;
	static int64_t x590 = 9023471541742360LL;
	int8_t x592 = INT8_MIN;
	volatile uint64_t t80 = 34154LLU;

	t80 = (x589%(x590<<(x591<=x592)));

	if (t80 != 234124266LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x598 = 9U;
	static int32_t x599 = INT32_MAX;
	static uint8_t x600 = 11U;
	int32_t t81 = 98;

	t81 = (x597%(x598<<(x599<=x600)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x605 = INT64_MAX;
	int8_t x606 = INT8_MAX;
	static uint64_t x607 = 5432890029313LLU;
	volatile int32_t x608 = INT32_MAX;
	int64_t t82 = -500878100601158LL;

	t82 = (x605%(x606<<(x607<=x608)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x613 = INT8_MIN;
	uint64_t x614 = 229902740843416LLU;
	static int32_t x616 = INT32_MIN;
	uint64_t t83 = 61884374759411LLU;

	t83 = (x613%(x614<<(x615<=x616)));

	if (t83 != 37856656381896LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x617 = INT8_MIN;
	int16_t x618 = INT16_MAX;
	int32_t x620 = 16341;
	volatile int32_t t84 = 2037691;

	t84 = (x617%(x618<<(x619<=x620)));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x626 = 5186007U;
	int16_t x627 = -141;
	static uint64_t x628 = UINT64_MAX;
	static volatile uint32_t t85 = 42612230U;

	t85 = (x625%(x626<<(x627<=x628)));

	if (t85 != 476750U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x633 = -8358271LL;
	uint16_t x634 = 6U;
	volatile int8_t x635 = 0;
	static uint32_t x636 = 288544U;
	int64_t t86 = 122LL;

	t86 = (x633%(x634<<(x635<=x636)));

	if (t86 != -7LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x637 = -1;
	int32_t x639 = -1;
	static int16_t x640 = 32;
	static volatile uint64_t t87 = 6801LLU;

	t87 = (x637%(x638<<(x639<=x640)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x645 = -1;
	uint8_t x646 = 76U;
	int16_t x647 = INT16_MIN;
	static volatile int64_t x648 = 1327681948LL;

	t88 = (x645%(x646<<(x647<=x648)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x653 = 733667;
	volatile uint16_t x654 = 1U;
	volatile int64_t x655 = 21117058435594LL;
	uint64_t x656 = 111LLU;
	static volatile int32_t t89 = -6727;

	t89 = (x653%(x654<<(x655<=x656)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x657 = INT32_MIN;
	uint64_t x658 = UINT64_MAX;
	volatile int16_t x659 = -413;
	int8_t x660 = INT8_MIN;
	static uint64_t t90 = 35879437428823LLU;

	t90 = (x657%(x658<<(x659<=x660)));

	if (t90 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x673 = INT8_MAX;
	static volatile int8_t x675 = INT8_MAX;
	int8_t x676 = INT8_MIN;
	volatile int32_t t91 = 19738;

	t91 = (x673%(x674<<(x675<=x676)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x682 = 286563742063324423LLU;
	uint16_t x684 = 2294U;
	volatile uint64_t t92 = 53593LLU;

	t92 = (x681%(x682<<(x683<=x684)));

	if (t92 != 53332290828394272LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x697 = 0;
	int64_t x698 = 5832631808511859LL;
	int64_t x700 = INT64_MIN;

	t93 = (x697%(x698<<(x699<=x700)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x701 = 2LL;
	int32_t x702 = 40271;
	int32_t x703 = -34356;
	uint16_t x704 = 28975U;
	static volatile int64_t t94 = -1LL;

	t94 = (x701%(x702<<(x703<=x704)));

	if (t94 != 2LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x710 = INT8_MAX;
	int8_t x711 = -1;
	int8_t x712 = INT8_MIN;
	int64_t t95 = 522154LL;

	t95 = (x709%(x710<<(x711<=x712)));

	if (t95 != -68LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x713 = 778LLU;
	int8_t x714 = 1;
	uint16_t x715 = 13817U;
	int16_t x716 = 1;
	volatile uint64_t t96 = 10094061111LLU;

	t96 = (x713%(x714<<(x715<=x716)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x718 = 506010913953122LL;
	static volatile int32_t x720 = -1;
	int64_t t97 = 2398000LL;

	t97 = (x717%(x718<<(x719<=x720)));

	if (t97 != 4LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x721 = INT64_MIN;
	uint64_t x722 = 2061661LLU;
	int64_t x723 = INT64_MAX;
	volatile int64_t x724 = -7LL;
	uint64_t t98 = 29152855430049547LLU;

	t98 = (x721%(x722<<(x723<=x724)));

	if (t98 != 1794549LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x733 = INT64_MAX;
	static uint64_t x734 = UINT64_MAX;
	int8_t x735 = INT8_MIN;
	static uint64_t t99 = 782317LLU;

	t99 = (x733%(x734<<(x735<=x736)));

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

