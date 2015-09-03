#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = -1;
uint64_t t0 = 140155408062198736LLU;
int16_t x6 = -1;
volatile int8_t x7 = 11;
uint8_t x29 = 0U;
int64_t x30 = -109185464988588LL;
uint8_t x31 = 77U;
uint32_t x32 = UINT32_MAX;
uint32_t t3 = 37642U;
volatile uint64_t t4 = 0LLU;
int32_t x42 = INT32_MIN;
int64_t x44 = -1LL;
int16_t x48 = -1;
int8_t x52 = 3;
volatile uint32_t t7 = 0U;
int16_t x56 = INT16_MIN;
volatile uint32_t t8 = 1703U;
int8_t x60 = INT8_MIN;
static int32_t x61 = -262;
int64_t x63 = INT64_MIN;
uint32_t x65 = 1335205U;
uint16_t x73 = UINT16_MAX;
uint8_t x87 = UINT8_MAX;
int32_t t15 = 29;
uint64_t x91 = 237LLU;
uint64_t x95 = UINT64_MAX;
volatile int8_t x101 = 0;
static uint16_t x104 = 667U;
int32_t x107 = -1;
static int32_t x112 = 869;
int8_t x114 = 2;
int32_t x126 = INT32_MAX;
uint64_t x130 = UINT64_MAX;
int8_t x134 = -1;
static volatile int8_t x145 = -1;
volatile int64_t x153 = -1LL;
int16_t x156 = 10792;
static int64_t t31 = 2867341237LL;
uint8_t x161 = UINT8_MAX;
volatile uint64_t x174 = UINT64_MAX;
int8_t x176 = -1;
volatile int64_t x180 = -9592LL;
static volatile int16_t x181 = INT16_MIN;
uint8_t x184 = 13U;
volatile int16_t x196 = INT16_MIN;
int8_t x199 = 30;
static volatile uint64_t t38 = 235734338026651929LLU;
volatile int16_t x203 = -6;
int64_t x216 = INT64_MIN;
volatile uint64_t x218 = UINT64_MAX;
volatile int8_t x221 = 1;
volatile uint32_t t43 = 802512U;
int64_t x228 = INT64_MAX;
volatile int64_t t44 = -2502591051365140LL;
uint8_t x230 = UINT8_MAX;
static volatile uint16_t x231 = UINT16_MAX;
static volatile int64_t t45 = 2692048LL;
uint64_t x247 = UINT64_MAX;
static int8_t x248 = 1;
uint8_t x252 = 31U;
int16_t x256 = INT16_MIN;
int16_t x272 = 0;
volatile uint32_t t50 = 486591236U;
int64_t x288 = -1LL;
uint8_t x293 = 33U;
int64_t x295 = -14795644129LL;
volatile int8_t x304 = -2;
int32_t x315 = INT32_MIN;
static int16_t x321 = 11781;
static uint8_t x323 = 0U;
volatile int8_t x331 = INT8_MAX;
volatile int32_t t64 = 2259;
static uint32_t x346 = 650481108U;
uint8_t x359 = 24U;
uint64_t x361 = 4LLU;
uint8_t x368 = 101U;
int64_t x374 = INT64_MAX;
int32_t t71 = 5;
uint32_t t72 = 1116926702U;
int32_t x399 = INT32_MIN;
int32_t x401 = 106847617;
static volatile uint64_t t74 = 12LLU;
volatile uint8_t x405 = 33U;
static int64_t x418 = 798619922LL;
int16_t x420 = -1;
static uint16_t x422 = 42U;
volatile int64_t t79 = -47059108311524LL;
static int8_t x435 = INT8_MIN;
static int32_t x442 = -1;
int64_t t83 = -306464929LL;
volatile int16_t x455 = -1;
volatile uint64_t t85 = 49323598133554LLU;
uint64_t x463 = 152217249712663837LLU;
volatile uint32_t t86 = 6445953U;
uint8_t x468 = 0U;
static int8_t x476 = INT8_MIN;
uint64_t t90 = 182LLU;
int32_t t93 = -20;
static uint32_t x502 = 132U;
uint32_t x503 = UINT32_MAX;
volatile int16_t x504 = INT16_MIN;
static int32_t t94 = 746020;
int16_t x505 = INT16_MIN;
int32_t t95 = -382271;
int8_t x512 = -2;
int32_t t96 = -41;
int32_t x518 = INT32_MIN;
volatile uint32_t x519 = 6243U;
static int32_t x520 = -10;
int64_t x528 = INT64_MIN;
static int8_t x532 = INT8_MIN;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	int64_t x2 = -2285815LL;
	static int8_t x3 = -1;

	t0 = (x1*((x2<=x3)|x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 20U;
	uint64_t x8 = 91281LLU;
	uint64_t t1 = 730272LLU;

	t1 = (x5*((x6<=x7)|x8));

	if (t1 != 1825620LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 1U;
	static int64_t x14 = INT64_MAX;
	static int64_t x15 = 750LL;
	static int32_t x16 = -904842;
	int32_t t2 = 217581571;

	t2 = (x13*((x14<=x15)|x16));

	if (t2 != -904842) { NG(); } else { ; }
	
}

void f3(void) {


	t3 = (x29*((x30<=x31)|x32));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = 106145070U;
	volatile int32_t x38 = -9;
	static int32_t x39 = 0;
	volatile uint64_t x40 = 27238276503951LLU;

	t4 = (x37*((x38<=x39)|x40));

	if (t4 != 13516690692544119474LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = INT8_MIN;
	static volatile uint8_t x43 = 8U;
	volatile int64_t t5 = -2775385LL;

	t5 = (x41*((x42<=x43)|x44));

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 215U;
	static int32_t x46 = 198955;
	volatile int8_t x47 = INT8_MIN;
	int32_t t6 = 2323;

	t6 = (x45*((x46<=x47)|x48));

	if (t6 != -215) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x49 = 357584U;
	int16_t x50 = -1;
	int64_t x51 = 143429930269062803LL;

	t7 = (x49*((x50<=x51)|x52));

	if (t7 != 1072752U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int64_t x54 = -1LL;
	volatile int16_t x55 = -4;

	t8 = (x53*((x54<=x55)|x56));

	if (t8 != 32768U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = -1LL;
	volatile uint32_t x58 = 6U;
	int8_t x59 = INT8_MIN;
	volatile int64_t t9 = -418551191598LL;

	t9 = (x57*((x58<=x59)|x60));

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x62 = -1LL;
	int8_t x64 = INT8_MIN;
	volatile int32_t t10 = -425276;

	t10 = (x61*((x62<=x63)|x64));

	if (t10 != 33536) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int64_t x68 = -1LL;
	int64_t t11 = 40909LL;

	t11 = (x65*((x66<=x67)|x68));

	if (t11 != -1335205LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x69 = 3U;
	volatile int64_t x70 = INT64_MAX;
	static int32_t x71 = 19671917;
	volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t12 = 475278720;

	t12 = (x69*((x70<=x71)|x72));

	if (t12 != 196605) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	int64_t x76 = 142321LL;
	int64_t t13 = 795405LL;

	t13 = (x73*((x74<=x75)|x76));

	if (t13 != 9327006735LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 217173LLU;
	int32_t x78 = 0;
	volatile int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	uint64_t t14 = 33253715LLU;

	t14 = (x77*((x78<=x79)|x80));

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 10U;
	uint16_t x86 = 9U;
	int32_t x88 = 457866;

	t15 = (x85*((x86<=x87)|x88));

	if (t15 != 4578670) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x89 = -1LL;
	volatile int8_t x90 = -15;
	uint8_t x92 = UINT8_MAX;
	int64_t t16 = 0LL;

	t16 = (x89*((x90<=x91)|x92));

	if (t16 != -255LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x93 = INT64_MIN;
	static uint16_t x94 = UINT16_MAX;
	uint64_t x96 = UINT64_MAX;
	uint64_t t17 = 3210291377468LLU;

	t17 = (x93*((x94<=x95)|x96));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = -1;
	uint8_t x98 = 0U;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = 52;
	volatile int32_t t18 = -639;

	t18 = (x97*((x98<=x99)|x100));

	if (t18 != -53) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x102 = 53509LL;
	uint64_t x103 = 6LLU;
	static volatile int32_t t19 = -931;

	t19 = (x101*((x102<=x103)|x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 17423690093LLU;
	volatile uint8_t x108 = 1U;
	int64_t t20 = INT64_MIN;

	t20 = (x105*((x106<=x107)|x108));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x109 = 6593U;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MAX;
	volatile int32_t t21 = -979;

	t21 = (x109*((x110<=x111)|x112));

	if (t21 != 5729317) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = 6U;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 11623371U;
	uint32_t t22 = 50586U;

	t22 = (x113*((x114<=x115)|x116));

	if (t22 != 69740226U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = 1283933;
	volatile uint64_t x118 = UINT64_MAX;
	int16_t x119 = INT16_MIN;
	volatile int8_t x120 = INT8_MIN;
	int32_t t23 = 111;

	t23 = (x117*((x118<=x119)|x120));

	if (t23 != -164343424) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MAX;
	static int8_t x123 = INT8_MIN;
	uint32_t x124 = 48171U;
	static volatile uint32_t t24 = 6750466U;

	t24 = (x121*((x122<=x123)|x124));

	if (t24 != 2716499968U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x125 = -1;
	int64_t x127 = -1LL;
	int16_t x128 = -651;
	int32_t t25 = -111759;

	t25 = (x125*((x126<=x127)|x128));

	if (t25 != 651) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = -1;
	int32_t x131 = -14174;
	uint16_t x132 = 1U;
	int32_t t26 = 1;

	t26 = (x129*((x130<=x131)|x132));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x133 = 10208325U;
	static int8_t x135 = -1;
	static int32_t x136 = 95731475;
	uint32_t t27 = 291333U;

	t27 = (x133*((x134<=x135)|x136));

	if (t27 != 2625834015U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x141 = 5U;
	int64_t x142 = -1LL;
	int32_t x143 = INT32_MAX;
	int16_t x144 = 819;
	volatile int32_t t28 = -1956749;

	t28 = (x141*((x142<=x143)|x144));

	if (t28 != 4095) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = 3985810099780LL;
	uint8_t x148 = 87U;
	int32_t t29 = 21327;

	t29 = (x145*((x146<=x147)|x148));

	if (t29 != -87) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = 17895784LLU;
	uint64_t x150 = 1461LLU;
	volatile int64_t x151 = INT64_MAX;
	volatile uint8_t x152 = 41U;
	uint64_t t30 = 40871328232LLU;

	t30 = (x149*((x150<=x151)|x152));

	if (t30 != 733727144LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x154 = INT32_MIN;
	static volatile int64_t x155 = INT64_MIN;

	t31 = (x153*((x154<=x155)|x156));

	if (t31 != -10792LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x162 = 834U;
	uint16_t x163 = 2870U;
	uint64_t x164 = 0LLU;
	uint64_t t32 = 47LLU;

	t32 = (x161*((x162<=x163)|x164));

	if (t32 != 255LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x169 = INT64_MAX;
	volatile int64_t x170 = -1LL;
	uint8_t x171 = 7U;
	int8_t x172 = -1;
	int64_t t33 = 790244158LL;

	t33 = (x169*((x170<=x171)|x172));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x173 = INT16_MAX;
	static int8_t x175 = -1;
	volatile int32_t t34 = -104995741;

	t34 = (x173*((x174<=x175)|x176));

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MIN;
	static int64_t t35 = 1713051052761541LL;

	t35 = (x177*((x178<=x179)|x180));

	if (t35 != 20596515667968LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x182 = 85419602;
	uint16_t x183 = 154U;
	int32_t t36 = -4044509;

	t36 = (x181*((x182<=x183)|x184));

	if (t36 != -425984) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x193 = -1;
	int16_t x194 = 259;
	uint16_t x195 = 4654U;
	int32_t t37 = 44287517;

	t37 = (x193*((x194<=x195)|x196));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x197 = 1768780401678362348LLU;
	static int32_t x198 = INT32_MAX;
	static uint32_t x200 = UINT32_MAX;

	t38 = (x197*((x198<=x199)|x200));

	if (t38 != 5704423025043691796LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = -1;
	static int32_t x202 = INT32_MIN;
	volatile int64_t x204 = INT64_MAX;
	static int64_t t39 = 2678320566610LL;

	t39 = (x201*((x202<=x203)|x204));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = 429U;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = 15922051U;
	int16_t x208 = 93;
	int32_t t40 = -15337458;

	t40 = (x205*((x206<=x207)|x208));

	if (t40 != 39897) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = UINT64_MAX;
	static uint16_t x215 = UINT16_MAX;
	volatile uint64_t t41 = 14LLU;

	t41 = (x213*((x214<=x215)|x216));

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x217 = 198LLU;
	int64_t x219 = -1LL;
	int16_t x220 = -33;
	static uint64_t t42 = 1758995LLU;

	t42 = (x217*((x218<=x219)|x220));

	if (t42 != 18446744073709545082LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x222 = 6093U;
	volatile int64_t x223 = 1585391671746791364LL;
	uint32_t x224 = 25U;

	t43 = (x221*((x222<=x223)|x224));

	if (t43 != 25U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;

	t44 = (x225*((x226<=x227)|x228));

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x229 = -1LL;
	volatile uint8_t x232 = 1U;

	t45 = (x229*((x230<=x231)|x232));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x245 = -1LL;
	volatile int32_t x246 = 1;
	volatile int64_t t46 = 459489653LL;

	t46 = (x245*((x246<=x247)|x248));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	int8_t x251 = -25;
	volatile int32_t t47 = 1;

	t47 = (x249*((x250<=x251)|x252));

	if (t47 != -3968) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x253 = 1U;
	int16_t x254 = -1;
	static int32_t x255 = -1;
	volatile int32_t t48 = -56734500;

	t48 = (x253*((x254<=x255)|x256));

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 5U;
	static int8_t x264 = 0;
	volatile int32_t t49 = 3783378;

	t49 = (x261*((x262<=x263)|x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x269 = 774942U;
	volatile uint64_t x270 = UINT64_MAX;
	int64_t x271 = INT64_MIN;

	t50 = (x269*((x270<=x271)|x272));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = INT8_MAX;
	int8_t x274 = INT8_MAX;
	int64_t x275 = INT64_MIN;
	volatile int16_t x276 = -1;
	int32_t t51 = 79752;

	t51 = (x273*((x274<=x275)|x276));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x277 = -1LL;
	uint32_t x278 = UINT32_MAX;
	static int16_t x279 = -230;
	static uint32_t x280 = UINT32_MAX;
	volatile int64_t t52 = -5511966569LL;

	t52 = (x277*((x278<=x279)|x280));

	if (t52 != -4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x281 = INT32_MIN;
	uint8_t x282 = 19U;
	uint8_t x283 = 121U;
	volatile int64_t x284 = -438LL;
	volatile int64_t t53 = 1684427636133LL;

	t53 = (x281*((x282<=x283)|x284));

	if (t53 != 938450354176LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = 5792;
	static int64_t x286 = INT64_MAX;
	volatile int8_t x287 = -31;
	int64_t t54 = -68700917117LL;

	t54 = (x285*((x286<=x287)|x288));

	if (t54 != -5792LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x289 = -1;
	uint32_t x290 = 792411486U;
	uint32_t x291 = 132082305U;
	int32_t x292 = INT32_MAX;
	volatile int32_t t55 = 62242;

	t55 = (x289*((x290<=x291)|x292));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x294 = -14568;
	uint16_t x296 = 47U;
	static int32_t t56 = 476;

	t56 = (x293*((x294<=x295)|x296));

	if (t56 != 1551) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x301 = UINT64_MAX;
	int16_t x302 = INT16_MAX;
	static volatile int32_t x303 = -1;
	volatile uint64_t t57 = 1337753LLU;

	t57 = (x301*((x302<=x303)|x304));

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x305 = 0U;
	volatile int16_t x306 = INT16_MIN;
	volatile uint64_t x307 = 78394859700631916LLU;
	int8_t x308 = INT8_MIN;
	volatile int32_t t58 = -6;

	t58 = (x305*((x306<=x307)|x308));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x313 = -23884;
	int64_t x314 = INT64_MIN;
	int64_t x316 = -7028966LL;
	volatile int64_t t59 = 22736774253LL;

	t59 = (x313*((x314<=x315)|x316));

	if (t59 != 167879800060LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x317 = INT16_MAX;
	uint8_t x318 = 3U;
	int32_t x319 = INT32_MIN;
	int32_t x320 = -209;
	int32_t t60 = 0;

	t60 = (x317*((x318<=x319)|x320));

	if (t60 != -6848303) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x322 = 1;
	int32_t x324 = -9;
	int32_t t61 = -95328;

	t61 = (x321*((x322<=x323)|x324));

	if (t61 != -106029) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x326 = INT64_MAX;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = -1508;
	int32_t t62 = 530;

	t62 = (x325*((x326<=x327)|x328));

	if (t62 != 49381376) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x329 = -388;
	static int8_t x330 = INT8_MIN;
	static uint64_t x332 = 100892937163232875LLU;
	volatile uint64_t t63 = 255LLU;

	t63 = (x329*((x330<=x331)|x332));

	if (t63 != 16193772601794299348LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x333 = 121U;
	int8_t x334 = INT8_MIN;
	int8_t x335 = 0;
	static uint16_t x336 = UINT16_MAX;

	t64 = (x333*((x334<=x335)|x336));

	if (t64 != 7929735) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x345 = 2633604378528527172LLU;
	static int64_t x347 = INT64_MAX;
	uint32_t x348 = 1520221900U;
	static uint64_t t65 = 1646104629862LLU;

	t65 = (x345*((x346<=x347)|x348));

	if (t65 != 1774017123577005428LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x357 = 7U;
	int8_t x358 = -2;
	int8_t x360 = INT8_MAX;
	volatile uint32_t t66 = 3U;

	t66 = (x357*((x358<=x359)|x360));

	if (t66 != 889U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x362 = UINT16_MAX;
	static uint32_t x363 = 1U;
	int16_t x364 = INT16_MAX;
	volatile uint64_t t67 = 29237698684109459LLU;

	t67 = (x361*((x362<=x363)|x364));

	if (t67 != 131068LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x365 = UINT16_MAX;
	static int32_t x366 = -888;
	int32_t x367 = INT32_MIN;
	int32_t t68 = 9692;

	t68 = (x365*((x366<=x367)|x368));

	if (t68 != 6619035) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x373 = 1;
	int16_t x375 = INT16_MAX;
	int32_t x376 = 198544944;
	volatile int32_t t69 = 102629766;

	t69 = (x373*((x374<=x375)|x376));

	if (t69 != 198544944) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x377 = INT8_MIN;
	static int16_t x378 = INT16_MIN;
	volatile int64_t x379 = INT64_MAX;
	int16_t x380 = -1161;
	volatile int32_t t70 = -179;

	t70 = (x377*((x378<=x379)|x380));

	if (t70 != 148608) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x381 = -30;
	uint16_t x382 = 1267U;
	int32_t x383 = -1029226962;
	uint16_t x384 = 12704U;

	t71 = (x381*((x382<=x383)|x384));

	if (t71 != -381120) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x385 = 1538485U;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = -1;

	t72 = (x385*((x386<=x387)|x388));

	if (t72 != 4293428811U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x397 = -1495435446LL;
	int32_t x398 = INT32_MAX;
	int16_t x400 = INT16_MAX;
	int64_t t73 = 1376818388317LL;

	t73 = (x397*((x398<=x399)|x400));

	if (t73 != -49000933259082LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MAX;
	static uint64_t x404 = 166931135597237948LLU;

	t74 = (x401*((x402<=x403)|x404));

	if (t74 != 303310833756003901LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x406 = 127;
	int16_t x407 = INT16_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t75 = 1401;

	t75 = (x405*((x406<=x407)|x408));

	if (t75 != -4191) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x413 = UINT16_MAX;
	static int8_t x414 = -1;
	uint32_t x415 = 57590U;
	int64_t x416 = 9659635LL;
	static volatile int64_t t76 = -1695936LL;

	t76 = (x413*((x414<=x415)|x416));

	if (t76 != 633044179725LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x417 = UINT64_MAX;
	int32_t x419 = -1423;
	uint64_t t77 = 1LLU;

	t77 = (x417*((x418<=x419)|x420));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x421 = UINT32_MAX;
	uint64_t x423 = 948156870637835930LLU;
	volatile int16_t x424 = INT16_MIN;
	volatile uint32_t t78 = 60388133U;

	t78 = (x421*((x422<=x423)|x424));

	if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x425 = -128LL;
	volatile int8_t x426 = -1;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = -1;

	t79 = (x425*((x426<=x427)|x428));

	if (t79 != 128LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x433 = -12;
	int8_t x434 = INT8_MAX;
	volatile int16_t x436 = 3;
	volatile int32_t t80 = 5204;

	t80 = (x433*((x434<=x435)|x436));

	if (t80 != -36) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x437 = UINT64_MAX;
	int64_t x438 = INT64_MIN;
	uint32_t x439 = 259155U;
	uint8_t x440 = 34U;
	static uint64_t t81 = 186LLU;

	t81 = (x437*((x438<=x439)|x440));

	if (t81 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x441 = -60041;
	int64_t x443 = -1LL;
	int8_t x444 = INT8_MIN;
	int32_t t82 = -1870;

	t82 = (x441*((x442<=x443)|x444));

	if (t82 != 7625207) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x449 = INT64_MAX;
	int32_t x450 = -1;
	static uint64_t x451 = 2125623555822LLU;
	volatile int32_t x452 = -1;

	t83 = (x449*((x450<=x451)|x452));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x453 = INT16_MIN;
	int8_t x454 = INT8_MIN;
	uint32_t x456 = 1908371411U;
	uint32_t t84 = 1346176431U;

	t84 = (x453*((x454<=x455)|x456));

	if (t84 != 1209434112U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x457 = INT16_MAX;
	int64_t x458 = -1LL;
	static int8_t x459 = -5;
	uint64_t x460 = 2LLU;

	t85 = (x457*((x458<=x459)|x460));

	if (t85 != 65534LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x461 = UINT32_MAX;
	int8_t x462 = INT8_MAX;
	int16_t x464 = 15;

	t86 = (x461*((x462<=x463)|x464));

	if (t86 != 4294967281U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = INT16_MAX;
	int8_t x466 = 1;
	int64_t x467 = -1LL;
	volatile int32_t t87 = -271956;

	t87 = (x465*((x466<=x467)|x468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x469 = INT8_MIN;
	int64_t x470 = -635340616LL;
	static int64_t x471 = INT64_MIN;
	int32_t x472 = -1;
	int32_t t88 = -427402577;

	t88 = (x469*((x470<=x471)|x472));

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x473 = INT8_MAX;
	volatile int16_t x474 = -1;
	static uint64_t x475 = 530587790LLU;
	volatile int32_t t89 = 49660;

	t89 = (x473*((x474<=x475)|x476));

	if (t89 != -16256) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x477 = 31488773991LLU;
	int64_t x478 = INT64_MIN;
	static int16_t x479 = 80;
	uint32_t x480 = 1759U;

	t90 = (x477*((x478<=x479)|x480));

	if (t90 != 55388753450169LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x481 = 9U;
	static int8_t x482 = -1;
	uint16_t x483 = 445U;
	uint8_t x484 = 55U;
	static int32_t t91 = 18301;

	t91 = (x481*((x482<=x483)|x484));

	if (t91 != 495) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x493 = -1;
	volatile int32_t x494 = -1;
	int64_t x495 = INT64_MIN;
	int64_t x496 = INT64_MAX;
	int64_t t92 = 8143822758823LL;

	t92 = (x493*((x494<=x495)|x496));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x497 = -1;
	int32_t x498 = INT32_MAX;
	int32_t x499 = INT32_MIN;
	uint8_t x500 = UINT8_MAX;

	t93 = (x497*((x498<=x499)|x500));

	if (t93 != -255) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x501 = 154;

	t94 = (x501*((x502<=x503)|x504));

	if (t94 != -5046118) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x506 = -32907989LL;
	static int32_t x507 = INT32_MIN;
	uint8_t x508 = 48U;

	t95 = (x505*((x506<=x507)|x508));

	if (t95 != -1572864) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x509 = -1;
	uint64_t x510 = UINT64_MAX;
	uint16_t x511 = 122U;

	t96 = (x509*((x510<=x511)|x512));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x517 = UINT32_MAX;
	volatile uint32_t t97 = 4324U;

	t97 = (x517*((x518<=x519)|x520));

	if (t97 != 10U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x525 = 0;
	int64_t x526 = -1LL;
	int64_t x527 = 2539116295627516976LL;
	volatile int64_t t98 = 3709LL;

	t98 = (x525*((x526<=x527)|x528));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x529 = 5575442U;
	int16_t x530 = -1;
	int32_t x531 = INT32_MIN;
	static uint32_t t99 = 7681772U;

	t99 = (x529*((x530<=x531)|x532));

	if (t99 != 3581310720U) { NG(); } else { ; }
	
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

