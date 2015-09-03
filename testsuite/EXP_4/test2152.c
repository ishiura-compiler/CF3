#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = INT32_MAX;
static uint16_t x10 = 19078U;
volatile uint16_t x15 = 6U;
static int32_t t2 = -9;
volatile uint16_t x25 = UINT16_MAX;
volatile int32_t x26 = INT32_MIN;
uint16_t x28 = 7U;
int16_t x40 = INT16_MIN;
static uint32_t t7 = 54615346U;
int8_t x55 = INT8_MIN;
int32_t x62 = -1;
volatile int32_t x63 = -1;
int8_t x66 = 62;
volatile int32_t t11 = 4;
volatile uint8_t x81 = 12U;
volatile uint64_t t14 = 2113132262255958LLU;
int64_t x115 = -1LL;
static uint32_t x116 = 6342U;
static int32_t t17 = -372356;
uint64_t x135 = 4728662479498LLU;
uint32_t x141 = 0U;
int8_t x146 = INT8_MAX;
uint32_t x161 = UINT32_MAX;
volatile uint64_t x164 = 964579792899678044LLU;
static volatile uint32_t t21 = UINT32_MAX;
int16_t x174 = -1;
uint8_t x175 = UINT8_MAX;
volatile uint64_t x176 = 12881LLU;
int32_t x192 = -1;
uint8_t x197 = UINT8_MAX;
int8_t x208 = INT8_MIN;
int64_t t30 = -270LL;
static int8_t x220 = INT8_MAX;
int64_t x229 = INT64_MAX;
volatile int64_t x248 = 92288688LL;
uint16_t x249 = UINT16_MAX;
static uint16_t x250 = 2U;
int8_t x265 = 9;
int32_t t37 = 790980714;
int32_t t41 = 7;
uint64_t x289 = 433186LLU;
int16_t x295 = -3016;
uint32_t x296 = 485U;
int64_t x302 = INT64_MIN;
uint64_t x319 = 13448LLU;
static volatile int8_t x320 = 1;
static uint16_t x330 = UINT16_MAX;
static int32_t t47 = 3909737;
uint16_t x338 = 2U;
int64_t x340 = -1LL;
int8_t x355 = INT8_MAX;
uint32_t x366 = UINT32_MAX;
static int32_t t56 = 0;
volatile int32_t x401 = 60316990;
int64_t x402 = INT64_MIN;
int8_t x408 = 0;
static uint16_t x409 = UINT16_MAX;
int32_t t60 = 90;
static int64_t x432 = INT64_MIN;
volatile uint64_t x448 = 14930121224871LLU;
int32_t x450 = -10949880;
int32_t x454 = -5;
int16_t x455 = -1;
static int64_t t67 = INT64_MAX;
uint16_t x457 = 1U;
static volatile int32_t x459 = INT32_MIN;
int64_t x462 = INT64_MAX;
int32_t x464 = INT32_MIN;
int32_t t69 = 13041;
uint16_t x466 = 48U;
static uint64_t x477 = UINT64_MAX;
uint8_t x480 = 49U;
int32_t x481 = INT32_MAX;
int64_t x484 = 1064558040376LL;
int64_t x490 = INT64_MIN;
uint32_t x494 = UINT32_MAX;
uint16_t x505 = UINT16_MAX;
int64_t x512 = -3014293126292015231LL;
uint8_t x541 = UINT8_MAX;
int64_t x543 = INT64_MAX;
volatile uint8_t x559 = 91U;
static volatile int8_t x566 = INT8_MAX;
static int8_t x567 = INT8_MAX;
int32_t t84 = 169008027;
int16_t x570 = INT16_MIN;
static volatile int32_t x571 = 81;
volatile uint64_t x572 = 6712631533130423210LLU;
uint32_t x577 = UINT32_MAX;
static uint32_t t86 = 20033U;
int32_t x582 = 3408894;
int16_t x600 = INT16_MAX;
uint16_t x606 = UINT16_MAX;
uint64_t x608 = 0LLU;
static int32_t x611 = INT32_MAX;
int32_t x616 = INT32_MIN;
static volatile uint32_t t92 = 438064U;
int32_t x628 = -1;
int32_t t93 = -315712;
volatile uint16_t x637 = UINT16_MAX;
uint8_t x639 = 23U;
int32_t x659 = -227966;
volatile uint8_t x660 = UINT8_MAX;


void f0(void) {
	int32_t x5 = INT32_MAX;
	uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MIN;

	t0 = (x5>>(x6<=(x7^x8)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	static volatile uint32_t x11 = 1614U;
	int8_t x12 = -18;
	int32_t t1 = 57826952;

	t1 = (x9>>(x10<=(x11^x12)));

	if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 417U;
	int16_t x14 = -117;
	uint64_t x16 = UINT64_MAX;

	t2 = (x13>>(x14<=(x15^x16)));

	if (t2 != 208) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x27 = 7189LLU;
	int32_t t3 = -536;

	t3 = (x25>>(x26<=(x27^x28)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x29 = 20U;
	static int16_t x30 = 796;
	volatile int8_t x31 = 39;
	int16_t x32 = -1;
	uint32_t t4 = 7480416U;

	t4 = (x29>>(x30<=(x31^x32)));

	if (t4 != 20U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 123283274LL;
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MIN;
	int64_t t5 = -10686723245910LL;

	t5 = (x33>>(x34<=(x35^x36)));

	if (t5 != 61641637LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 1474U;
	static volatile uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	uint32_t t6 = 966U;

	t6 = (x37>>(x38<=(x39^x40)));

	if (t6 != 1474U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 110U;
	int16_t x42 = -14222;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = INT16_MIN;

	t7 = (x41>>(x42<=(x43^x44)));

	if (t7 != 110U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x45 = 2096882LLU;
	volatile uint64_t x46 = 15653918LLU;
	uint64_t x47 = 238269473LLU;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t8 = 422670173325256365LLU;

	t8 = (x45>>(x46<=(x47^x48)));

	if (t8 != 1048441LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 125U;
	int8_t x54 = -1;
	int8_t x56 = 1;
	static volatile uint32_t t9 = 5U;

	t9 = (x53>>(x54<=(x55^x56)));

	if (t9 != 125U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x61 = 15217U;
	int32_t x64 = -405352;
	static volatile int32_t t10 = 8304009;

	t10 = (x61>>(x62<=(x63^x64)));

	if (t10 != 7608) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = UINT8_MAX;
	static int64_t x67 = INT64_MIN;
	volatile int32_t x68 = -147332667;

	t11 = (x65>>(x66<=(x67^x68)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x73 = 80;
	int16_t x74 = INT16_MIN;
	static int64_t x75 = INT64_MIN;
	int64_t x76 = -1LL;
	int32_t t12 = 61701;

	t12 = (x73>>(x74<=(x75^x76)));

	if (t12 != 40) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x82 = 17792186U;
	static int64_t x83 = -13928533LL;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t13 = 0;

	t13 = (x81>>(x82<=(x83^x84)));

	if (t13 != 12) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = 20347433861LLU;
	volatile uint64_t x86 = UINT64_MAX;
	static int32_t x87 = 3322047;
	int32_t x88 = INT32_MAX;

	t14 = (x85>>(x86<=(x87^x88)));

	if (t14 != 20347433861LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x89 = UINT32_MAX;
	int16_t x90 = -1649;
	static int32_t x91 = INT32_MAX;
	int8_t x92 = 0;
	uint32_t t15 = 34867246U;

	t15 = (x89>>(x90<=(x91^x92)));

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x113 = 3U;
	volatile int8_t x114 = INT8_MIN;
	volatile int32_t t16 = -236268;

	t16 = (x113>>(x114<=(x115^x116)));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	static volatile uint8_t x124 = 1U;

	t17 = (x121>>(x122<=(x123^x124)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x133 = 23U;
	int64_t x134 = 0LL;
	volatile int32_t x136 = -4941684;
	uint32_t t18 = 43U;

	t18 = (x133>>(x134<=(x135^x136)));

	if (t18 != 11U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x142 = 66806U;
	static volatile int32_t x143 = -148220027;
	static int16_t x144 = INT16_MAX;
	volatile uint32_t t19 = 1U;

	t19 = (x141>>(x142<=(x143^x144)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x145 = INT16_MAX;
	static volatile int32_t x147 = -1;
	volatile uint8_t x148 = 122U;
	static int32_t t20 = 30;

	t20 = (x145>>(x146<=(x147^x148)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x162 = INT32_MIN;
	int64_t x163 = -1LL;

	t21 = (x161>>(x162<=(x163^x164)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x165 = 7770;
	volatile int64_t x166 = INT64_MIN;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = INT64_MIN;
	int32_t t22 = -14256074;

	t22 = (x165>>(x166<=(x167^x168)));

	if (t22 != 3885) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x173 = 402LLU;
	uint64_t t23 = 403LLU;

	t23 = (x173>>(x174<=(x175^x176)));

	if (t23 != 402LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x181 = 374121093699LLU;
	uint16_t x182 = 0U;
	volatile int8_t x183 = -23;
	uint16_t x184 = 992U;
	uint64_t t24 = 891796LLU;

	t24 = (x181>>(x182<=(x183^x184)));

	if (t24 != 374121093699LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x185 = 152746658627430LLU;
	volatile uint64_t x186 = 710127140306LLU;
	int64_t x187 = INT64_MAX;
	int64_t x188 = 695380LL;
	volatile uint64_t t25 = 20488909104728125LLU;

	t25 = (x185>>(x186<=(x187^x188)));

	if (t25 != 76373329313715LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x189 = 28969522U;
	int16_t x190 = 711;
	static int16_t x191 = INT16_MIN;
	volatile uint32_t t26 = 940U;

	t26 = (x189>>(x190<=(x191^x192)));

	if (t26 != 14484761U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x198 = INT64_MIN;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = 1304;
	int32_t t27 = -952641;

	t27 = (x197>>(x198<=(x199^x200)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x201 = INT8_MAX;
	static uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MIN;
	static uint16_t x204 = 31224U;
	volatile int32_t t28 = -102425991;

	t28 = (x201>>(x202<=(x203^x204)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MIN;
	volatile int32_t t29 = 802747;

	t29 = (x205>>(x206<=(x207^x208)));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = INT8_MIN;
	int16_t x211 = -1;
	int16_t x212 = -160;

	t30 = (x209>>(x210<=(x211^x212)));

	if (t30 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = 56;
	uint8_t x215 = UINT8_MAX;
	volatile uint16_t x216 = UINT16_MAX;
	static volatile int32_t t31 = -15;

	t31 = (x213>>(x214<=(x215^x216)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x217 = UINT8_MAX;
	int8_t x218 = 1;
	uint64_t x219 = 15060790725340LLU;
	int32_t t32 = 1040800977;

	t32 = (x217>>(x218<=(x219^x220)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x221 = UINT16_MAX;
	uint8_t x222 = 2U;
	volatile int16_t x223 = -1;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t33 = -333952102;

	t33 = (x221>>(x222<=(x223^x224)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x230 = INT16_MAX;
	int8_t x231 = -1;
	int64_t x232 = INT64_MAX;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x229>>(x230<=(x231^x232)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x245 = 4000783LL;
	volatile uint16_t x246 = 726U;
	int8_t x247 = INT8_MIN;
	static int64_t t35 = -2100600LL;

	t35 = (x245>>(x246<=(x247^x248)));

	if (t35 != 4000783LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x251 = 69U;
	static volatile int32_t x252 = -1;
	volatile int32_t t36 = 4155414;

	t36 = (x249>>(x250<=(x251^x252)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x266 = 409U;
	static volatile int64_t x267 = -1LL;
	int32_t x268 = INT32_MAX;

	t37 = (x265>>(x266<=(x267^x268)));

	if (t37 != 9) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x269 = 261670LLU;
	uint64_t x270 = UINT64_MAX;
	volatile int8_t x271 = -1;
	int64_t x272 = INT64_MAX;
	static volatile uint64_t t38 = 163561231LLU;

	t38 = (x269>>(x270<=(x271^x272)));

	if (t38 != 261670LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x273 = UINT8_MAX;
	uint32_t x274 = 21264138U;
	volatile int64_t x275 = 310153321377684695LL;
	static uint8_t x276 = UINT8_MAX;
	int32_t t39 = -579546402;

	t39 = (x273>>(x274<=(x275^x276)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x281 = 93U;
	int16_t x282 = 3;
	uint8_t x283 = 34U;
	int32_t x284 = -1;
	int32_t t40 = -988877;

	t40 = (x281>>(x282<=(x283^x284)));

	if (t40 != 93) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x285 = INT8_MAX;
	volatile uint64_t x286 = 3884LLU;
	uint64_t x287 = 77803649LLU;
	static int32_t x288 = INT32_MIN;

	t41 = (x285>>(x286<=(x287^x288)));

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x290 = -1;
	volatile int32_t x291 = INT32_MAX;
	volatile int16_t x292 = 414;
	volatile uint64_t t42 = 1633598909230889LLU;

	t42 = (x289>>(x290<=(x291^x292)));

	if (t42 != 216593LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x293 = 8138710U;
	int64_t x294 = -1LL;
	volatile uint32_t t43 = 119U;

	t43 = (x293>>(x294<=(x295^x296)));

	if (t43 != 4069355U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x301 = 94LLU;
	int64_t x303 = -1LL;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t44 = 11577377462181502LLU;

	t44 = (x301>>(x302<=(x303^x304)));

	if (t44 != 47LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x317 = 2U;
	int64_t x318 = INT64_MAX;
	uint32_t t45 = 2934U;

	t45 = (x317>>(x318<=(x319^x320)));

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x321 = UINT64_MAX;
	volatile uint32_t x322 = 455106648U;
	volatile int32_t x323 = INT32_MAX;
	static int16_t x324 = INT16_MIN;
	volatile uint64_t t46 = 3532914626618LLU;

	t46 = (x321>>(x322<=(x323^x324)));

	if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x329 = 3U;
	int16_t x331 = 16101;
	int64_t x332 = INT64_MIN;

	t47 = (x329>>(x330<=(x331^x332)));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x333 = 43468806U;
	static int32_t x334 = INT32_MAX;
	int16_t x335 = 65;
	uint8_t x336 = UINT8_MAX;
	volatile uint32_t t48 = 704182U;

	t48 = (x333>>(x334<=(x335^x336)));

	if (t48 != 43468806U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x337 = 398500U;
	int32_t x339 = INT32_MIN;
	static volatile uint32_t t49 = 61U;

	t49 = (x337>>(x338<=(x339^x340)));

	if (t49 != 199250U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x341 = 1;
	static int32_t x342 = INT32_MIN;
	static int16_t x343 = -1;
	static int32_t x344 = 0;
	volatile int32_t t50 = 0;

	t50 = (x341>>(x342<=(x343^x344)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x353 = 15;
	static volatile uint32_t x354 = 1334210U;
	int8_t x356 = INT8_MIN;
	int32_t t51 = -237056823;

	t51 = (x353>>(x354<=(x355^x356)));

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t52 = -78;

	t52 = (x357>>(x358<=(x359^x360)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x365 = 41U;
	int32_t x367 = INT32_MIN;
	int32_t x368 = -21794749;
	int32_t t53 = -30;

	t53 = (x365>>(x366<=(x367^x368)));

	if (t53 != 41) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x369 = 3U;
	static int32_t x370 = INT32_MIN;
	static int16_t x371 = INT16_MIN;
	volatile int8_t x372 = INT8_MIN;
	int32_t t54 = 37716;

	t54 = (x369>>(x370<=(x371^x372)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x381 = 4448559703144159920LLU;
	int32_t x382 = -1;
	uint16_t x383 = 5U;
	volatile int8_t x384 = INT8_MIN;
	static volatile uint64_t t55 = 121824621816439939LLU;

	t55 = (x381>>(x382<=(x383^x384)));

	if (t55 != 4448559703144159920LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x389 = UINT16_MAX;
	int8_t x390 = -39;
	int16_t x391 = INT16_MIN;
	static int16_t x392 = INT16_MIN;

	t56 = (x389>>(x390<=(x391^x392)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x397 = 23U;
	static uint32_t x398 = 7U;
	int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MIN;
	int32_t t57 = -865859610;

	t57 = (x397>>(x398<=(x399^x400)));

	if (t57 != 23) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x403 = 3515U;
	int16_t x404 = -1;
	static int32_t t58 = 29310409;

	t58 = (x401>>(x402<=(x403^x404)));

	if (t58 != 30158495) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x405 = 7U;
	volatile int32_t x406 = -1;
	volatile int64_t x407 = -1LL;
	volatile int32_t t59 = -1020533;

	t59 = (x405>>(x406<=(x407^x408)));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x410 = -2;
	int16_t x411 = -1007;
	static int16_t x412 = -62;

	t60 = (x409>>(x410<=(x411^x412)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x417 = INT8_MAX;
	volatile int16_t x418 = INT16_MIN;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = -1LL;
	int32_t t61 = 129419960;

	t61 = (x417>>(x418<=(x419^x420)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x425 = 1197021U;
	volatile int32_t x426 = -2315;
	volatile int16_t x427 = -1;
	int16_t x428 = -1855;
	volatile uint32_t t62 = 0U;

	t62 = (x425>>(x426<=(x427^x428)));

	if (t62 != 598510U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x429 = 14244700;
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	int32_t t63 = 181299484;

	t63 = (x429>>(x430<=(x431^x432)));

	if (t63 != 7122350) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x433 = 1866583758U;
	volatile int64_t x434 = -1LL;
	int8_t x435 = INT8_MIN;
	volatile int32_t x436 = INT32_MIN;
	volatile uint32_t t64 = 6292222U;

	t64 = (x433>>(x434<=(x435^x436)));

	if (t64 != 933291879U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x445 = 12U;
	volatile int64_t x446 = 3018837592839LL;
	uint8_t x447 = 14U;
	int32_t t65 = 665;

	t65 = (x445>>(x446<=(x447^x448)));

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x449 = 5U;
	int16_t x451 = -1;
	int8_t x452 = 2;
	volatile int32_t t66 = -19944068;

	t66 = (x449>>(x450<=(x451^x452)));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x453 = INT64_MAX;
	static uint16_t x456 = 7291U;

	t67 = (x453>>(x454<=(x455^x456)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x458 = -4;
	int32_t x460 = 119;
	volatile int32_t t68 = 21;

	t68 = (x457>>(x458<=(x459^x460)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x461 = 38U;
	volatile uint16_t x463 = 245U;

	t69 = (x461>>(x462<=(x463^x464)));

	if (t69 != 38) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x465 = UINT16_MAX;
	int16_t x467 = INT16_MAX;
	int64_t x468 = INT64_MIN;
	int32_t t70 = -407092594;

	t70 = (x465>>(x466<=(x467^x468)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x478 = INT32_MIN;
	int16_t x479 = -1;
	static volatile uint64_t t71 = 744191058907964928LLU;

	t71 = (x477>>(x478<=(x479^x480)));

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x482 = INT32_MIN;
	uint32_t x483 = 52541222U;
	int32_t t72 = -57576;

	t72 = (x481>>(x482<=(x483^x484)));

	if (t72 != 1073741823) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x489 = UINT8_MAX;
	int32_t x491 = INT32_MIN;
	uint8_t x492 = 77U;
	int32_t t73 = -22335;

	t73 = (x489>>(x490<=(x491^x492)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x493 = UINT8_MAX;
	int16_t x495 = -1;
	int16_t x496 = INT16_MIN;
	int32_t t74 = -20512;

	t74 = (x493>>(x494<=(x495^x496)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x497 = 0;
	static volatile int64_t x498 = -1LL;
	int16_t x499 = -1;
	static uint32_t x500 = UINT32_MAX;
	static volatile int32_t t75 = -59362209;

	t75 = (x497>>(x498<=(x499^x500)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x506 = 5951026051618LLU;
	static int8_t x507 = INT8_MAX;
	static uint8_t x508 = 123U;
	volatile int32_t t76 = 13761;

	t76 = (x505>>(x506<=(x507^x508)));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x509 = 5U;
	int16_t x510 = -1;
	int8_t x511 = INT8_MIN;
	volatile int32_t t77 = -1365;

	t77 = (x509>>(x510<=(x511^x512)));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x517 = 3;
	uint32_t x518 = 769595U;
	int32_t x519 = -2;
	int16_t x520 = -930;
	static int32_t t78 = 13730;

	t78 = (x517>>(x518<=(x519^x520)));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x525 = 0;
	static int64_t x526 = -1LL;
	uint32_t x527 = 1342996808U;
	int64_t x528 = 24774583452LL;
	int32_t t79 = -274935554;

	t79 = (x525>>(x526<=(x527^x528)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x529 = 123U;
	volatile int32_t x530 = -1;
	int32_t x531 = -2171511;
	int16_t x532 = INT16_MAX;
	volatile int32_t t80 = -1288046;

	t80 = (x529>>(x530<=(x531^x532)));

	if (t80 != 123) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x542 = -1LL;
	volatile int8_t x544 = INT8_MIN;
	int32_t t81 = 3128;

	t81 = (x541>>(x542<=(x543^x544)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x545 = 117981U;
	int64_t x546 = INT64_MIN;
	int16_t x547 = INT16_MAX;
	uint64_t x548 = 11LLU;
	volatile uint32_t t82 = 175231U;

	t82 = (x545>>(x546<=(x547^x548)));

	if (t82 != 117981U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x557 = 2U;
	static int32_t x558 = 1329391;
	volatile uint64_t x560 = 25328053LLU;
	volatile int32_t t83 = 2435779;

	t83 = (x557>>(x558<=(x559^x560)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x565 = 2U;
	int64_t x568 = INT64_MIN;

	t84 = (x565>>(x566<=(x567^x568)));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x569 = 2079907370U;
	static uint32_t t85 = 29U;

	t85 = (x569>>(x570<=(x571^x572)));

	if (t85 != 2079907370U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x578 = UINT32_MAX;
	volatile int64_t x579 = -4925836278674LL;
	static int16_t x580 = INT16_MIN;

	t86 = (x577>>(x578<=(x579^x580)));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x581 = 145;
	int16_t x583 = -1;
	int8_t x584 = INT8_MIN;
	volatile int32_t t87 = -5;

	t87 = (x581>>(x582<=(x583^x584)));

	if (t87 != 145) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x597 = INT16_MAX;
	int32_t x598 = -189;
	volatile int16_t x599 = -1;
	static volatile int32_t t88 = -323;

	t88 = (x597>>(x598<=(x599^x600)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x601 = 402;
	int8_t x602 = 49;
	int32_t x603 = INT32_MIN;
	int32_t x604 = -16;
	int32_t t89 = -1;

	t89 = (x601>>(x602<=(x603^x604)));

	if (t89 != 201) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x605 = UINT64_MAX;
	int64_t x607 = INT64_MIN;
	static volatile uint64_t t90 = 15114177794557LLU;

	t90 = (x605>>(x606<=(x607^x608)));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x609 = 27U;
	volatile int32_t x610 = INT32_MIN;
	volatile int16_t x612 = INT16_MAX;
	volatile int32_t t91 = 4639;

	t91 = (x609>>(x610<=(x611^x612)));

	if (t91 != 13) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x613 = 7432543U;
	int16_t x614 = -1;
	int64_t x615 = 9892571LL;

	t92 = (x613>>(x614<=(x615^x616)));

	if (t92 != 7432543U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x625 = 3;
	uint32_t x626 = UINT32_MAX;
	int16_t x627 = -480;

	t93 = (x625>>(x626<=(x627^x628)));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x633 = INT64_MAX;
	static int64_t x634 = INT64_MAX;
	static uint16_t x635 = 309U;
	int8_t x636 = INT8_MIN;
	int64_t t94 = INT64_MAX;

	t94 = (x633>>(x634<=(x635^x636)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x638 = UINT8_MAX;
	int32_t x640 = 25;
	int32_t t95 = -77;

	t95 = (x637>>(x638<=(x639^x640)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x657 = 0;
	uint64_t x658 = 2305135861LLU;
	int32_t t96 = 0;

	t96 = (x657>>(x658<=(x659^x660)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x661 = UINT64_MAX;
	int32_t x662 = 31451;
	int32_t x663 = -1798;
	uint64_t x664 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x661>>(x662<=(x663^x664)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x677 = UINT8_MAX;
	int32_t x678 = -1520114;
	uint32_t x679 = UINT32_MAX;
	int16_t x680 = 3;
	int32_t t98 = 3;

	t98 = (x677>>(x678<=(x679^x680)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x685 = INT64_MAX;
	int32_t x686 = -18492819;
	volatile uint8_t x687 = UINT8_MAX;
	volatile uint16_t x688 = UINT16_MAX;
	static int64_t t99 = -2LL;

	t99 = (x685>>(x686<=(x687^x688)));

	if (t99 != 4611686018427387903LL) { NG(); } else { ; }
	
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

