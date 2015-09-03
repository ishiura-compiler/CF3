#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x7 = -1;
static volatile int64_t t1 = 185LL;
uint32_t x14 = 0U;
uint32_t x23 = 320220530U;
int64_t x27 = INT64_MIN;
volatile int64_t t5 = 1714724027212638837LL;
int32_t x29 = INT32_MIN;
int32_t t6 = -947;
int8_t x50 = 21;
uint64_t x51 = UINT64_MAX;
int16_t x53 = -16000;
int64_t x81 = -1LL;
int32_t x83 = -1;
uint32_t x86 = UINT32_MAX;
static volatile uint32_t t13 = 59218297U;
int16_t x93 = -848;
int16_t x94 = -1;
static uint32_t x95 = UINT32_MAX;
static volatile int8_t x96 = -1;
uint32_t x98 = UINT32_MAX;
static int8_t x103 = 24;
volatile int32_t t18 = -2702;
uint16_t x113 = 7U;
static int32_t x115 = INT32_MIN;
int32_t x117 = INT32_MIN;
uint32_t t20 = 2U;
int64_t x125 = -1LL;
uint64_t t23 = 3579LLU;
int32_t x143 = INT32_MAX;
int32_t t24 = -227135;
uint32_t x146 = 458U;
int8_t x156 = -1;
uint16_t x168 = 56U;
uint32_t x185 = UINT32_MAX;
int16_t x196 = INT16_MIN;
volatile int32_t t31 = 573009025;
int8_t x198 = 0;
volatile uint64_t t32 = 44LLU;
static int64_t x201 = INT64_MIN;
uint16_t x204 = 506U;
uint8_t x207 = 2U;
int64_t t34 = -56LL;
int8_t x214 = INT8_MAX;
int8_t x215 = 13;
volatile uint64_t t39 = 3487116887592LLU;
int8_t x251 = INT8_MIN;
uint64_t t40 = UINT64_MAX;
uint64_t x256 = 836LLU;
uint16_t x258 = 9U;
int8_t x264 = 15;
volatile uint8_t x282 = 31U;
volatile int32_t t45 = -434541926;
int16_t x288 = 1099;
int8_t x291 = -3;
uint64_t t47 = 1LLU;
static volatile uint16_t x296 = UINT16_MAX;
uint32_t x299 = 246U;
static int16_t x306 = 0;
int64_t x307 = INT64_MIN;
uint32_t x308 = UINT32_MAX;
int16_t x320 = INT16_MAX;
int32_t t54 = 244440;
int8_t x330 = -1;
volatile int32_t x332 = INT32_MAX;
static volatile uint32_t t57 = UINT32_MAX;
volatile uint64_t x347 = UINT64_MAX;
uint8_t x348 = 3U;
volatile uint64_t t60 = 28LLU;
int32_t x361 = INT32_MAX;
volatile uint64_t t62 = 8237496343329745175LLU;
static uint32_t x367 = UINT32_MAX;
static int16_t x368 = -896;
volatile uint32_t t63 = 0U;
int32_t x385 = -1;
uint8_t x406 = 84U;
uint64_t x412 = 292964036675155LLU;
uint32_t x416 = 698034427U;
int16_t x428 = INT16_MAX;
static volatile int32_t t73 = -30;
volatile int64_t t75 = 1LL;
static int8_t x449 = 0;
static int64_t x452 = INT64_MIN;
uint32_t x482 = 511569496U;
static volatile int8_t x485 = -1;
volatile int32_t x486 = -1;
uint64_t x489 = UINT64_MAX;
uint64_t x500 = UINT64_MAX;
volatile uint64_t t84 = UINT64_MAX;
volatile uint16_t x505 = 334U;
uint64_t x514 = UINT64_MAX;
uint64_t t89 = 988091LLU;
int64_t x522 = -1LL;
static volatile uint16_t x528 = 69U;
int16_t x530 = INT16_MAX;
uint64_t x533 = 26LLU;
int16_t x546 = 9;
static volatile int64_t t96 = 182LL;
uint8_t x558 = 3U;
uint64_t t97 = 2190037497379LLU;
int64_t x572 = INT64_MIN;
volatile uint64_t t99 = 0LLU;


void f0(void) {
	int8_t x1 = -1;
	int32_t x2 = -95607237;
	volatile int64_t x3 = INT64_MIN;
	uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2*(x3^x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	uint32_t x8 = 45U;

	t1 = (x5|(x6*(x7^x8)));

	if (t1 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = -19;
	uint16_t x15 = 18U;
	uint8_t x16 = UINT8_MAX;
	static uint32_t t2 = 8U;

	t2 = (x13|(x14*(x15^x16)));

	if (t2 != 4294967277U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 47;
	int8_t x18 = 33;
	static volatile int16_t x19 = -1930;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 3436201476LLU;

	t3 = (x17|(x18*(x19^x20)));

	if (t3 != 63663LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = 80246053U;
	int32_t x22 = INT32_MIN;
	int16_t x24 = INT16_MAX;
	uint32_t t4 = 649546U;

	t4 = (x21|(x22*(x23^x24)));

	if (t4 != 2227729701U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	uint8_t x26 = 1U;
	int32_t x28 = INT32_MIN;

	t5 = (x25|(x26*(x27^x28)));

	if (t5 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x30 = -37;
	volatile int8_t x31 = INT8_MIN;
	uint8_t x32 = 0U;

	t6 = (x29|(x30*(x31^x32)));

	if (t6 != -2147478912) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 0U;
	static uint8_t x34 = 7U;
	uint32_t x35 = 1291U;
	uint32_t x36 = 48255U;
	static volatile uint32_t t7 = 37627248U;

	t7 = (x33|(x34*(x35^x36)));

	if (t7 != 332332U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	int64_t x38 = 7750964LL;
	volatile int16_t x39 = 0;
	volatile int32_t x40 = 31016;
	int64_t t8 = INT64_MAX;

	t8 = (x37|(x38*(x39^x40)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t9 = 725771670376LLU;

	t9 = (x49|(x50*(x51^x52)));

	if (t9 != 32767LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x54 = INT8_MAX;
	static int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	static volatile int64_t t10 = 30997127601973LL;

	t10 = (x53|(x54*(x55^x56)));

	if (t10 != -16000LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = 1390;
	int8_t x78 = INT8_MIN;
	static int8_t x79 = INT8_MAX;
	uint16_t x80 = 1U;
	int32_t t11 = -11534;

	t11 = (x77|(x78*(x79^x80)));

	if (t11 != -14994) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x82 = 4440U;
	uint64_t x84 = UINT64_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = (x81|(x82*(x83^x84)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x85 = 1U;
	int8_t x87 = -1;
	uint8_t x88 = 7U;

	t13 = (x85|(x86*(x87^x88)));

	if (t13 != 9U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x89 = 36U;
	uint16_t x90 = 8U;
	int8_t x91 = -2;
	int16_t x92 = 92;
	int32_t t14 = -747826703;

	t14 = (x89|(x90*(x91^x92)));

	if (t14 != -716) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t t15 = 13276U;

	t15 = (x93|(x94*(x95^x96)));

	if (t15 != 4294966448U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = -1;
	uint8_t x99 = 83U;
	int32_t x100 = -391659;
	uint32_t t16 = UINT32_MAX;

	t16 = (x97|(x98*(x99^x100)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile uint16_t x102 = 10U;
	static int8_t x104 = INT8_MIN;
	static volatile int32_t t17 = -3899;

	t17 = (x101|(x102*(x103^x104)));

	if (t17 != -1040) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x105 = INT32_MIN;
	static int16_t x106 = 3;
	static int8_t x107 = INT8_MIN;
	volatile int8_t x108 = 0;

	t18 = (x105|(x106*(x107^x108)));

	if (t18 != -384) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x114 = 3441U;
	uint32_t x116 = 791262U;
	static uint32_t t19 = 5004580U;

	t19 = (x113|(x114*(x115^x116)));

	if (t19 != 575248895U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x118 = 578513U;
	volatile int32_t x119 = -1;
	static int32_t x120 = INT32_MIN;

	t20 = (x117|(x118*(x119^x120)));

	if (t20 != 4294388783U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x121 = 1074U;
	uint16_t x122 = 1U;
	volatile int64_t x123 = INT64_MAX;
	static int8_t x124 = INT8_MAX;
	static int64_t t21 = -1582146LL;

	t21 = (x121|(x122*(x123^x124)));

	if (t21 != 9223372036854775730LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x126 = INT64_MIN;
	volatile int32_t x127 = INT32_MAX;
	uint64_t x128 = 245151404148838LLU;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x125|(x126*(x127^x128)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x137 = 15U;
	int16_t x138 = INT16_MIN;
	static int16_t x139 = 14;
	uint64_t x140 = 3515512LLU;

	t23 = (x137|(x138*(x139^x140)));

	if (t23 != 18446743958513319951LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = 196742;
	static volatile int8_t x142 = -1;
	int8_t x144 = INT8_MIN;

	t24 = (x141|(x142*(x143^x144)));

	if (t24 != 2147483527) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = (x145|(x146*(x147^x148)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = -1;
	uint32_t x150 = 26064U;
	uint8_t x151 = UINT8_MAX;
	volatile int64_t x152 = -1LL;
	volatile int64_t t26 = -522371956525777LL;

	t26 = (x149|(x150*(x151^x152)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = -195902LL;
	uint32_t x154 = 0U;
	volatile uint8_t x155 = 5U;
	int64_t t27 = 1507913022315876828LL;

	t27 = (x153|(x154*(x155^x156)));

	if (t27 != -195902LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x165 = -1LL;
	static volatile int64_t x166 = -1LL;
	int8_t x167 = -7;
	int64_t t28 = -14440LL;

	t28 = (x165|(x166*(x167^x168)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x177 = -1;
	static int64_t x178 = INT64_MIN;
	uint32_t x179 = 9068537U;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x177|(x178*(x179^x180)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = INT32_MAX;
	static uint64_t x188 = UINT64_MAX;
	uint64_t t30 = 804325517534484735LLU;

	t30 = (x185|(x186*(x187^x188)));

	if (t30 != 18446603340516163583LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x193 = 17061;
	int16_t x194 = INT16_MIN;
	static uint8_t x195 = 80U;

	t31 = (x193|(x194*(x195^x196)));

	if (t31 != 1071137445) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = INT16_MIN;
	static uint64_t x199 = 41306807714112402LLU;
	volatile uint64_t x200 = 35275390887634294LLU;

	t32 = (x197|(x198*(x199^x200)));

	if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x202 = INT16_MIN;
	uint8_t x203 = 4U;
	volatile int64_t t33 = -355449LL;

	t33 = (x201|(x202*(x203^x204)));

	if (t33 != -16711680LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x205 = 1U;
	static volatile int32_t x206 = INT32_MIN;
	volatile int64_t x208 = -1LL;

	t34 = (x205|(x206*(x207^x208)));

	if (t34 != 6442450945LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x209 = UINT32_MAX;
	volatile uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	static volatile uint64_t x212 = 77LLU;
	static volatile uint64_t t35 = UINT64_MAX;

	t35 = (x209|(x210*(x211^x212)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x213 = -1;
	static uint32_t x216 = UINT32_MAX;
	uint32_t t36 = UINT32_MAX;

	t36 = (x213|(x214*(x215^x216)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = 48865LLU;
	volatile int16_t x228 = 106;
	volatile uint64_t t37 = 9375LLU;

	t37 = (x225|(x226*(x227^x228)));

	if (t37 != 18446744073703308031LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x237 = 109U;
	volatile int16_t x238 = INT16_MAX;
	static int32_t x239 = -1;
	volatile uint64_t x240 = 474LLU;
	static uint64_t t38 = 3381649198132591LLU;

	t38 = (x237|(x238*(x239^x240)));

	if (t38 != 18446744073693987327LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x245 = 22296554798479001LLU;
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = INT8_MAX;
	uint8_t x248 = 28U;

	t39 = (x245|(x246*(x247^x248)));

	if (t39 != 22296558213005213LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x249 = UINT64_MAX;
	static int32_t x250 = -1;
	uint32_t x252 = 1U;

	t40 = (x249|(x250*(x251^x252)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MAX;
	uint8_t x255 = 9U;
	static uint64_t t41 = 348539326362007LLU;

	t41 = (x253|(x254*(x255^x256)));

	if (t41 != 4294967295LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x257 = INT16_MAX;
	static uint64_t x259 = UINT64_MAX;
	static int8_t x260 = -1;
	static volatile uint64_t t42 = 3LLU;

	t42 = (x257|(x258*(x259^x260)));

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int16_t x262 = 949;
	int64_t x263 = -243245294LL;
	volatile int64_t t43 = -8LL;

	t43 = (x261|(x262*(x263^x264)));

	if (t43 != -230839773441LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x265 = -850;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int8_t x268 = -27;
	volatile int32_t t44 = -2190;

	t44 = (x265|(x266*(x267^x268)));

	if (t44 != -850) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x281 = INT16_MIN;
	int16_t x283 = 8;
	int8_t x284 = INT8_MIN;

	t45 = (x281|(x282*(x283^x284)));

	if (t45 != -3720) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x285 = 1;
	volatile uint64_t x286 = 51045723007LLU;
	uint64_t x287 = UINT64_MAX;
	uint64_t t46 = 94007931009054LLU;

	t46 = (x285|(x286*(x287^x288)));

	if (t46 != 18446687923414243917LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x289 = 1U;
	int32_t x290 = INT32_MAX;
	uint64_t x292 = 120807516LLU;

	t47 = (x289|(x290*(x291^x292)));

	if (t47 != 18187311902222409823LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x293 = 0;
	int16_t x294 = INT16_MIN;
	int64_t x295 = 29841LL;
	volatile int64_t t48 = -650893482046797777LL;

	t48 = (x293|(x294*(x295^x296)));

	if (t48 != -1169620992LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x297 = 7;
	int64_t x298 = 484343663493603LL;
	int8_t x300 = INT8_MAX;
	int64_t t49 = 2639902LL;

	t49 = (x297|(x298*(x299^x300)));

	if (t49 != 66355081898623615LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x301 = 2U;
	int8_t x302 = INT8_MAX;
	uint8_t x303 = 9U;
	uint8_t x304 = 4U;
	volatile int32_t t50 = 55;

	t50 = (x301|(x302*(x303^x304)));

	if (t50 != 1651) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x305 = 1LL;
	int64_t t51 = 761248572066507839LL;

	t51 = (x305|(x306*(x307^x308)));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = INT8_MAX;
	int32_t x310 = -68;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t52 = 0;

	t52 = (x309|(x310*(x311^x312)));

	if (t52 != -2228097) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x313 = -6932;
	uint8_t x314 = 6U;
	uint32_t x315 = UINT32_MAX;
	static int8_t x316 = 0;
	uint32_t t53 = 19409U;

	t53 = (x313|(x314*(x315^x316)));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x317 = INT8_MIN;
	static uint8_t x318 = UINT8_MAX;
	int8_t x319 = 0;

	t54 = (x317|(x318*(x319^x320)));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x321 = 11;
	int16_t x322 = -1;
	static int64_t x323 = -167345LL;
	int16_t x324 = -1;
	static int64_t t55 = -524215672LL;

	t55 = (x321|(x322*(x323^x324)));

	if (t55 != -167333LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x329 = -3;
	int8_t x331 = INT8_MIN;
	volatile int32_t t56 = 0;

	t56 = (x329|(x330*(x331^x332)));

	if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	uint8_t x336 = UINT8_MAX;

	t57 = (x333|(x334*(x335^x336)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x337 = 120843307485995LL;
	int16_t x338 = -13;
	int16_t x339 = INT16_MAX;
	volatile int16_t x340 = -3;
	volatile int64_t t58 = 362593428846LL;

	t58 = (x337|(x338*(x339^x340)));

	if (t58 != 120843307778031LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x341 = -1;
	uint64_t x342 = 31007369528928LLU;
	volatile int32_t x343 = INT32_MAX;
	uint32_t x344 = 74260U;
	static uint64_t t59 = UINT64_MAX;

	t59 = (x341|(x342*(x343^x344)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MAX;

	t60 = (x345|(x346*(x347^x348)));

	if (t60 != 4294967295LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x357 = 86U;
	int32_t x358 = 5;
	static int16_t x359 = -1;
	volatile int8_t x360 = -12;
	int32_t t61 = 26586;

	t61 = (x357|(x358*(x359^x360)));

	if (t61 != 119) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x362 = -1;
	int64_t x363 = -86933841777208LL;
	uint64_t x364 = 28579LLU;

	t62 = (x361|(x362*(x363^x364)));

	if (t62 != 86934433038335LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x365 = 123U;
	volatile int32_t x366 = -11987;

	t63 = (x365|(x366*(x367^x368)));

	if (t63 != 4284238971U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x377 = INT8_MAX;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -1;
	static uint64_t t64 = 363993LLU;

	t64 = (x377|(x378*(x379^x380)));

	if (t64 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x386 = INT8_MAX;
	uint64_t x387 = 801522971872LLU;
	static uint8_t x388 = 11U;
	uint64_t t65 = UINT64_MAX;

	t65 = (x385|(x386*(x387^x388)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x393 = -1;
	uint16_t x394 = UINT16_MAX;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x393|(x394*(x395^x396)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int32_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile uint32_t x400 = 59219022U;
	volatile uint32_t t67 = 1015U;

	t67 = (x397|(x398*(x399^x400)));

	if (t67 != 59237375U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x405 = 33400121U;
	static int64_t x407 = 4383515064111LL;
	uint64_t x408 = 54572010LLU;
	static volatile uint64_t t68 = 1009246435751577295LLU;

	t68 = (x405|(x406*(x407^x408)));

	if (t68 != 368216337397181LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x409 = 158411281U;
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = INT8_MAX;
	volatile uint64_t t69 = 30608277152106004LLU;

	t69 = (x409|(x410*(x411^x412)));

	if (t69 != 96119001557072853LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x413 = 4U;
	int32_t x414 = 1;
	int16_t x415 = INT16_MIN;
	volatile uint32_t t70 = 173215527U;

	t70 = (x413|(x414*(x415^x416)));

	if (t70 != 3596921087U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x421 = INT8_MIN;
	uint64_t x422 = 43342461LLU;
	uint8_t x423 = UINT8_MAX;
	static int32_t x424 = 1810791;
	volatile uint64_t t71 = 168729LLU;

	t71 = (x421|(x422*(x423^x424)));

	if (t71 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x425 = 37;
	int16_t x426 = INT16_MIN;
	int8_t x427 = -1;
	volatile int32_t t72 = -25709446;

	t72 = (x425|(x426*(x427^x428)));

	if (t72 != 1073741861) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x429 = -1;
	uint16_t x430 = 56U;
	int16_t x431 = 1;
	static int8_t x432 = INT8_MAX;

	t73 = (x429|(x430*(x431^x432)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x433 = 26U;
	uint64_t x434 = 186875894LLU;
	int16_t x435 = -1;
	int64_t x436 = -1LL;
	volatile uint64_t t74 = 60951LLU;

	t74 = (x433|(x434*(x435^x436)));

	if (t74 != 26LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x445 = 15U;
	int8_t x446 = INT8_MAX;
	int8_t x447 = -1;
	int64_t x448 = -1LL;

	t75 = (x445|(x446*(x447^x448)));

	if (t75 != 15LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x450 = 0;
	uint8_t x451 = 25U;
	volatile int64_t t76 = 11LL;

	t76 = (x449|(x450*(x451^x452)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x453 = 1;
	volatile uint8_t x454 = 52U;
	int16_t x455 = 4087;
	static int16_t x456 = 11131;
	int32_t t77 = 1996820;

	t77 = (x453|(x454*(x455^x456)));

	if (t77 != 486513) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x457 = -1LL;
	int16_t x458 = -1;
	int8_t x459 = -1;
	volatile int16_t x460 = 0;
	int64_t t78 = -1LL;

	t78 = (x457|(x458*(x459^x460)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x461 = -1LL;
	volatile int32_t x462 = INT32_MAX;
	static uint64_t x463 = 7395197591733196LLU;
	static uint8_t x464 = UINT8_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (x461|(x462*(x463^x464)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x477 = INT8_MAX;
	static int64_t x478 = 3190210277261LL;
	int64_t x479 = INT64_MIN;
	uint64_t x480 = 1779012834483156LLU;
	static volatile uint64_t t80 = 22LLU;

	t80 = (x477|(x478*(x479^x480)));

	if (t80 != 13908071443524943871LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x481 = INT32_MIN;
	static int16_t x483 = -1;
	static uint8_t x484 = 15U;
	volatile uint32_t t81 = 135159U;

	t81 = (x481|(x482*(x483^x484)));

	if (t81 != 2552306304U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x487 = UINT64_MAX;
	static uint16_t x488 = 20457U;
	static uint64_t t82 = UINT64_MAX;

	t82 = (x485|(x486*(x487^x488)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x490 = -1LL;
	volatile uint16_t x491 = UINT16_MAX;
	uint64_t x492 = 1345096731070805037LLU;
	uint64_t t83 = UINT64_MAX;

	t83 = (x489|(x490*(x491^x492)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x497 = -1LL;
	int64_t x498 = -1LL;
	volatile int16_t x499 = INT16_MAX;

	t84 = (x497|(x498*(x499^x500)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x501 = UINT32_MAX;
	int8_t x502 = -1;
	int32_t x503 = INT32_MIN;
	int16_t x504 = INT16_MAX;
	uint32_t t85 = UINT32_MAX;

	t85 = (x501|(x502*(x503^x504)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x506 = 0U;
	int8_t x507 = INT8_MIN;
	uint32_t x508 = UINT32_MAX;
	uint32_t t86 = 5758050U;

	t86 = (x505|(x506*(x507^x508)));

	if (t86 != 334U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x509 = INT8_MAX;
	volatile uint32_t x510 = 123475U;
	int8_t x511 = INT8_MIN;
	int16_t x512 = 559;
	volatile uint32_t t87 = 0U;

	t87 = (x509|(x510*(x511^x512)));

	if (t87 != 4221746687U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x513 = 14554143;
	static volatile uint32_t x515 = 1062456738U;
	static uint32_t x516 = 1597U;
	volatile uint64_t t88 = 7240921LLU;

	t88 = (x513|(x514*(x515^x516)));

	if (t88 != 18446744072652469375LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x517 = 1198028185392LLU;
	int32_t x518 = INT32_MIN;
	int32_t x519 = 81659810;
	uint64_t x520 = UINT64_MAX;

	t89 = (x517|(x518*(x519^x520)));

	if (t89 != 175363136470867760LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x521 = UINT32_MAX;
	int32_t x523 = -1;
	uint8_t x524 = 7U;
	volatile int64_t t90 = -624179LL;

	t90 = (x521|(x522*(x523^x524)));

	if (t90 != 4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x525 = INT8_MAX;
	static int32_t x526 = -1;
	int32_t x527 = -1;
	volatile int32_t t91 = 157637500;

	t91 = (x525|(x526*(x527^x528)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x529 = UINT16_MAX;
	static volatile uint64_t x531 = UINT64_MAX;
	uint16_t x532 = UINT16_MAX;
	volatile uint64_t t92 = 61942292833326LLU;

	t92 = (x529|(x530*(x531^x532)));

	if (t92 != 18446744071562199039LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x534 = -2989;
	int8_t x535 = -1;
	uint32_t x536 = 26151U;
	uint64_t t93 = 1LLU;

	t93 = (x533|(x534*(x535^x536)));

	if (t93 != 78168346LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x537 = 29;
	int8_t x538 = -1;
	static int64_t x539 = INT64_MAX;
	int64_t x540 = INT64_MIN;
	int64_t t94 = 215190796381805LL;

	t94 = (x537|(x538*(x539^x540)));

	if (t94 != 29LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x545 = 1U;
	static int16_t x547 = INT16_MIN;
	volatile int64_t x548 = 1391336LL;
	volatile int64_t t95 = -14236566706LL;

	t95 = (x545|(x546*(x547^x548)));

	if (t95 != -12545495LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x549 = 12;
	int64_t x550 = -1LL;
	int16_t x551 = -3;
	uint8_t x552 = 39U;

	t96 = (x549|(x550*(x551^x552)));

	if (t96 != 46LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x557 = INT8_MIN;
	volatile uint64_t x559 = 455222LLU;
	int32_t x560 = INT32_MIN;

	t97 = (x557|(x558*(x559^x560)));

	if (t97 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x565 = 13U;
	int16_t x566 = -1;
	uint32_t x567 = 483U;
	int32_t x568 = INT32_MIN;
	static uint32_t t98 = 310418176U;

	t98 = (x565|(x566*(x567^x568)));

	if (t98 != 2147483165U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x569 = 115U;
	uint64_t x570 = 11651664LLU;
	static uint32_t x571 = 3U;

	t99 = (x569|(x570*(x571^x572)));

	if (t99 != 34954995LLU) { NG(); } else { ; }
	
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

