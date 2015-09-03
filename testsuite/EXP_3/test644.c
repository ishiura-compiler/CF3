#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
uint64_t t0 = 29845653246436315LLU;
int16_t x18 = -1;
volatile uint8_t x41 = UINT8_MAX;
volatile int64_t x43 = -1LL;
uint32_t x73 = 1083216U;
int32_t x79 = 8;
volatile int32_t x82 = 153459029;
int32_t x107 = -1;
volatile uint32_t t7 = UINT32_MAX;
uint64_t x111 = 5LLU;
int16_t x149 = INT16_MAX;
int16_t x152 = -455;
volatile int16_t x160 = -1;
uint32_t x182 = UINT32_MAX;
uint8_t x191 = 90U;
int32_t t16 = -1;
int8_t x201 = INT8_MAX;
uint32_t x206 = 18542U;
volatile int8_t x207 = -1;
static int8_t x218 = INT8_MAX;
uint64_t x222 = 15657572103383LLU;
int16_t x224 = -16;
int64_t x226 = INT64_MIN;
uint16_t x242 = 16U;
uint8_t x243 = 1U;
volatile uint8_t x259 = 70U;
uint32_t t27 = 7024445U;
uint32_t x271 = 209U;
volatile uint64_t t28 = 0LLU;
int8_t x278 = 0;
uint8_t x279 = 2U;
static uint32_t x282 = 376U;
uint64_t x283 = UINT64_MAX;
uint8_t x289 = 37U;
volatile int8_t x291 = -1;
volatile uint64_t x292 = UINT64_MAX;
volatile int32_t t33 = 0;
uint16_t x315 = 6U;
int32_t x330 = INT32_MAX;
static int16_t x332 = -1;
uint16_t x337 = 1983U;
static int16_t x343 = -1;
volatile uint16_t x344 = 12021U;
int8_t x346 = INT8_MIN;
volatile int64_t t40 = 2132561327LL;
uint64_t x366 = UINT64_MAX;
volatile int32_t x375 = 0;
static volatile int16_t x378 = INT16_MIN;
static volatile int64_t x380 = 55159LL;
static int32_t x413 = -1;
uint16_t x416 = 598U;
uint64_t x421 = 592498443LLU;
volatile int8_t x424 = INT8_MAX;
int32_t x432 = INT32_MIN;
volatile int32_t x438 = INT32_MIN;
volatile uint8_t x465 = UINT8_MAX;
uint16_t x471 = 38U;
uint8_t x495 = 7U;
static volatile int16_t x496 = INT16_MAX;
volatile uint8_t x500 = 1U;
int8_t x503 = -1;
uint64_t x515 = UINT64_MAX;
volatile int32_t t61 = 113419044;
uint64_t x533 = 8630537269LLU;
static uint32_t x535 = UINT32_MAX;
int32_t x536 = INT32_MAX;
int16_t x537 = INT16_MAX;
int32_t x540 = -118464;
static volatile int32_t t65 = -46;
int32_t x541 = -1;
volatile uint32_t t66 = 5650354U;
uint16_t x550 = 4U;
int8_t x551 = INT8_MIN;
uint64_t x554 = 4255949216LLU;
volatile int32_t t69 = 134081397;
static int32_t x578 = -211294;
int32_t x579 = -1;
int16_t x593 = 30;
uint64_t x609 = 663318245733310LLU;
uint32_t x610 = 2U;
int64_t x633 = 5152064LL;
volatile int8_t x638 = INT8_MIN;
static int8_t x647 = -1;
uint64_t t77 = 46850LLU;
int64_t x649 = INT64_MAX;
int64_t x650 = INT64_MIN;
int32_t x660 = INT32_MIN;
int64_t x666 = -85256873988LL;
int16_t x671 = -1;
int32_t x682 = INT32_MAX;
volatile int32_t t84 = INT32_MAX;
uint64_t x716 = 76941769062119040LLU;
static volatile uint64_t t87 = 8540782334256722LLU;
static uint8_t x719 = 9U;
volatile uint64_t t88 = 761712LLU;
static volatile int64_t t91 = -15624741633LL;
static uint16_t x737 = UINT16_MAX;
int32_t x742 = -1;
static uint32_t x744 = 280495U;
int32_t t93 = 8899192;
static uint16_t x758 = UINT16_MAX;
static int8_t x761 = 26;
int16_t x763 = -1;
uint16_t x766 = UINT16_MAX;
static int32_t x771 = -3010961;
int8_t x773 = INT8_MIN;
int8_t x775 = 0;


void f0(void) {
	volatile uint32_t x5 = UINT32_MAX;
	uint64_t x6 = UINT64_MAX;
	int8_t x7 = INT8_MAX;

	t0 = ((x5&x6)>>(x7/x8));

	if (t0 != 4294967295LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = 279295232520LLU;
	int16_t x19 = INT16_MAX;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t1 = 239050380924829LLU;

	t1 = ((x17&x18)>>(x19/x20));

	if (t1 != 279295232520LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x42 = INT8_MIN;
	uint16_t x44 = 576U;
	int32_t t2 = -1;

	t2 = ((x41&x42)>>(x43/x44));

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x53 = -73336006800426LL;
	uint32_t x54 = 1000100U;
	volatile uint64_t x55 = 238252388LLU;
	uint64_t x56 = UINT64_MAX;
	volatile int64_t t3 = 465LL;

	t3 = ((x53&x54)>>(x55/x56));

	if (t3 != 852612LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x74 = UINT64_MAX;
	static int16_t x75 = 0;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t4 = 1946019716676070805LLU;

	t4 = ((x73&x74)>>(x75/x76));

	if (t4 != 1083216LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x77 = -979779362304681803LL;
	uint8_t x78 = 5U;
	static uint8_t x80 = 10U;
	volatile int64_t t5 = -469143964LL;

	t5 = ((x77&x78)>>(x79/x80));

	if (t5 != 5LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x81 = INT64_MIN;
	int16_t x83 = -8134;
	int64_t x84 = -5710399250517LL;
	volatile int64_t t6 = -2769664147LL;

	t6 = ((x81&x82)>>(x83/x84));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	int16_t x108 = 726;

	t7 = ((x105&x106)>>(x107/x108));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x109 = 871U;
	int8_t x110 = 7;
	uint8_t x112 = 13U;
	volatile int32_t t8 = -1;

	t8 = ((x109&x110)>>(x111/x112));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x113 = UINT32_MAX;
	volatile uint64_t x114 = 3247305LLU;
	volatile uint64_t x115 = 8639127175517LLU;
	int16_t x116 = -1;
	static uint64_t t9 = 66521539LLU;

	t9 = ((x113&x114)>>(x115/x116));

	if (t9 != 3247305LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x150 = -16272464966810LL;
	int64_t x151 = -1LL;
	volatile int64_t t10 = -19292966630253LL;

	t10 = ((x149&x150)>>(x151/x152));

	if (t10 != 2918LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x157 = INT32_MAX;
	static volatile int64_t x158 = -28451048178LL;
	int16_t x159 = -10;
	static volatile int64_t t11 = -3101354LL;

	t11 = ((x157&x158)>>(x159/x160));

	if (t11 != 1575901LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x161 = INT32_MAX;
	static uint8_t x162 = 46U;
	volatile int16_t x163 = 121;
	int32_t x164 = INT32_MAX;
	volatile int32_t t12 = -2;

	t12 = ((x161&x162)>>(x163/x164));

	if (t12 != 46) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x181 = UINT8_MAX;
	static uint32_t x183 = UINT32_MAX;
	uint64_t x184 = 8465976952852685LLU;
	uint32_t t13 = 383314719U;

	t13 = ((x181&x182)>>(x183/x184));

	if (t13 != 255U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x185 = 0U;
	static int16_t x186 = -7;
	volatile int16_t x187 = -1;
	static int64_t x188 = INT64_MIN;
	int32_t t14 = -1;

	t14 = ((x185&x186)>>(x187/x188));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x189 = 699LL;
	int8_t x190 = -1;
	int16_t x192 = INT16_MIN;
	volatile int64_t t15 = -302097262174LL;

	t15 = ((x189&x190)>>(x191/x192));

	if (t15 != 699LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x193 = 14U;
	int8_t x194 = 3;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = 8152280LL;

	t16 = ((x193&x194)>>(x195/x196));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x202 = INT8_MAX;
	int8_t x203 = -1;
	volatile int64_t x204 = -1LL;
	static int32_t t17 = -265492711;

	t17 = ((x201&x202)>>(x203/x204));

	if (t17 != 63) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x205 = 1;
	uint8_t x208 = 43U;
	volatile uint32_t t18 = 0U;

	t18 = ((x205&x206)>>(x207/x208));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int32_t x219 = -1;
	int64_t x220 = -14LL;
	static int32_t t19 = 221497;

	t19 = ((x217&x218)>>(x219/x220));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x221 = 50987576U;
	uint32_t x223 = 200473U;
	uint64_t t20 = 55237LLU;

	t20 = ((x221&x222)>>(x223/x224));

	if (t20 != 16LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x225 = 491145;
	static int64_t x227 = -1LL;
	volatile int16_t x228 = INT16_MIN;
	volatile int64_t t21 = -129913476LL;

	t21 = ((x225&x226)>>(x227/x228));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 100U;
	uint32_t x235 = 15U;
	int16_t x236 = INT16_MAX;
	volatile uint32_t t22 = 490941U;

	t22 = ((x233&x234)>>(x235/x236));

	if (t22 != 100U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x241 = UINT32_MAX;
	uint16_t x244 = 3241U;
	static uint32_t t23 = 92608U;

	t23 = ((x241&x242)>>(x243/x244));

	if (t23 != 16U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x249 = -1;
	uint32_t x250 = 181U;
	static int8_t x251 = 24;
	int8_t x252 = INT8_MAX;
	volatile uint32_t t24 = 9855426U;

	t24 = ((x249&x250)>>(x251/x252));

	if (t24 != 181U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x253 = 10641719508954LLU;
	int64_t x254 = INT64_MIN;
	int16_t x255 = -1;
	uint16_t x256 = 2U;
	volatile uint64_t t25 = 2LLU;

	t25 = ((x253&x254)>>(x255/x256));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x257 = 4U;
	int32_t x258 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	volatile int32_t t26 = -7811967;

	t26 = ((x257&x258)>>(x259/x260));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x265 = UINT32_MAX;
	uint16_t x266 = 5114U;
	int16_t x267 = INT16_MAX;
	int32_t x268 = -267738469;

	t27 = ((x265&x266)>>(x267/x268));

	if (t27 != 5114U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x269 = INT16_MIN;
	uint64_t x270 = 5LLU;
	static int16_t x272 = -3;

	t28 = ((x269&x270)>>(x271/x272));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x277 = 291095795U;
	uint8_t x280 = 3U;
	uint32_t t29 = 101922U;

	t29 = ((x277&x278)>>(x279/x280));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x281 = INT16_MIN;
	int8_t x284 = -1;
	volatile uint32_t t30 = 500919824U;

	t30 = ((x281&x282)>>(x283/x284));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x285 = 8683895735168LLU;
	volatile int16_t x286 = INT16_MIN;
	int8_t x287 = -1;
	int16_t x288 = -1;
	uint64_t t31 = 12406782848968773LLU;

	t31 = ((x285&x286)>>(x287/x288));

	if (t31 != 4341947858944LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x290 = 119U;
	int32_t t32 = 7103;

	t32 = ((x289&x290)>>(x291/x292));

	if (t32 != 18) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x301 = -1;
	static uint8_t x302 = 0U;
	int16_t x303 = -1;
	int8_t x304 = -1;

	t33 = ((x301&x302)>>(x303/x304));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x313 = 14;
	uint64_t x314 = UINT64_MAX;
	uint8_t x316 = 107U;
	uint64_t t34 = 82386494837705825LLU;

	t34 = ((x313&x314)>>(x315/x316));

	if (t34 != 14LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x321 = 1;
	int64_t x322 = INT64_MIN;
	int8_t x323 = -2;
	int32_t x324 = -4867844;
	int64_t t35 = -2806819858LL;

	t35 = ((x321&x322)>>(x323/x324));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x329 = 2480329U;
	int16_t x331 = -1;
	static volatile uint32_t t36 = 123081091U;

	t36 = ((x329&x330)>>(x331/x332));

	if (t36 != 1240164U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	volatile uint32_t x340 = UINT32_MAX;
	volatile int32_t t37 = 135986;

	t37 = ((x337&x338)>>(x339/x340));

	if (t37 != 960) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x341 = 31398546938434743LL;
	int16_t x342 = -15;
	volatile int64_t t38 = -62751603708LL;

	t38 = ((x341&x342)>>(x343/x344));

	if (t38 != 31398546938434737LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x345 = 121823LLU;
	int32_t x347 = -1;
	int64_t x348 = -237267354636LL;
	volatile uint64_t t39 = 51942LLU;

	t39 = ((x345&x346)>>(x347/x348));

	if (t39 != 121728LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = 1734155425184179099LLU;
	int8_t x364 = -1;

	t40 = ((x361&x362)>>(x363/x364));

	if (t40 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x365 = 13814169324044897LL;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = UINT16_MAX;
	uint64_t t41 = 5312623092LLU;

	t41 = ((x365&x366)>>(x367/x368));

	if (t41 != 13814169324044897LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	uint8_t x376 = UINT8_MAX;
	int32_t t42 = -8658622;

	t42 = ((x373&x374)>>(x375/x376));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x377 = 0;
	static uint8_t x379 = 3U;
	volatile int32_t t43 = -2610722;

	t43 = ((x377&x378)>>(x379/x380));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x389 = 95U;
	int16_t x390 = 250;
	uint32_t x391 = 283241322U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t44 = -518864982;

	t44 = ((x389&x390)>>(x391/x392));

	if (t44 != 90) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x397 = 697071094512329LLU;
	uint8_t x398 = 0U;
	int32_t x399 = -1;
	int64_t x400 = -4040322LL;
	uint64_t t45 = 121572396777691LLU;

	t45 = ((x397&x398)>>(x399/x400));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x401 = 8;
	uint16_t x402 = 42U;
	uint16_t x403 = 0U;
	int32_t x404 = 1544;
	int32_t t46 = 1743;

	t46 = ((x401&x402)>>(x403/x404));

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x409 = 94635013LLU;
	uint32_t x410 = 394U;
	int32_t x411 = INT32_MAX;
	int64_t x412 = 1538410722542341LL;
	uint64_t t47 = 132434414165221796LLU;

	t47 = ((x409&x410)>>(x411/x412));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x414 = INT16_MAX;
	static int16_t x415 = 451;
	volatile int32_t t48 = -20817259;

	t48 = ((x413&x414)>>(x415/x416));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x422 = -8634;
	uint8_t x423 = 6U;
	uint64_t t49 = 2823337500352981LLU;

	t49 = ((x421&x422)>>(x423/x424));

	if (t49 != 592498178LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x425 = INT8_MIN;
	static int32_t x426 = 109398082;
	int32_t x427 = 312351;
	int64_t x428 = 5236409LL;
	int32_t t50 = -729;

	t50 = ((x425&x426)>>(x427/x428));

	if (t50 != 109398016) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x429 = 14U;
	static int16_t x430 = INT16_MAX;
	volatile uint16_t x431 = 1444U;
	uint32_t t51 = 1362670089U;

	t51 = ((x429&x430)>>(x431/x432));

	if (t51 != 14U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x437 = 688118;
	static int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t52 = -131035;

	t52 = ((x437&x438)>>(x439/x440));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x445 = INT8_MIN;
	uint32_t x446 = 4555838U;
	static uint16_t x447 = 2989U;
	uint8_t x448 = UINT8_MAX;
	uint32_t t53 = 173U;

	t53 = ((x445&x446)>>(x447/x448));

	if (t53 != 2224U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x449 = 15428U;
	int64_t x450 = INT64_MAX;
	volatile uint32_t x451 = UINT32_MAX;
	static int16_t x452 = INT16_MIN;
	int64_t t54 = 16527913LL;

	t54 = ((x449&x450)>>(x451/x452));

	if (t54 != 7714LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x453 = INT8_MIN;
	uint64_t x454 = UINT64_MAX;
	volatile uint8_t x455 = 78U;
	volatile int8_t x456 = INT8_MIN;
	uint64_t t55 = 1058657LLU;

	t55 = ((x453&x454)>>(x455/x456));

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x466 = 68U;
	int64_t x467 = INT64_MAX;
	uint64_t x468 = UINT64_MAX;
	uint32_t t56 = 133840879U;

	t56 = ((x465&x466)>>(x467/x468));

	if (t56 != 68U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x469 = 0U;
	int64_t x470 = 98603786146LL;
	volatile int64_t x472 = 3930828054915943LL;
	volatile int64_t t57 = -110LL;

	t57 = ((x469&x470)>>(x471/x472));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x493 = 96011096557903LL;
	static int8_t x494 = INT8_MAX;
	static int64_t t58 = -2547999065LL;

	t58 = ((x493&x494)>>(x495/x496));

	if (t58 != 79LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x497 = 9994235U;
	uint16_t x498 = UINT16_MAX;
	static uint16_t x499 = 27U;
	uint32_t t59 = 10687U;

	t59 = ((x497&x498)>>(x499/x500));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x501 = INT16_MIN;
	static volatile uint64_t x502 = UINT64_MAX;
	volatile int8_t x504 = INT8_MIN;
	uint64_t t60 = 57392LLU;

	t60 = ((x501&x502)>>(x503/x504));

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x513 = INT32_MIN;
	uint16_t x514 = UINT16_MAX;
	uint64_t x516 = UINT64_MAX;

	t61 = ((x513&x514)>>(x515/x516));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x517 = UINT16_MAX;
	static uint64_t x518 = 797250581563842849LLU;
	static volatile int8_t x519 = INT8_MIN;
	int16_t x520 = INT16_MIN;
	static volatile uint64_t t62 = 492077290LLU;

	t62 = ((x517&x518)>>(x519/x520));

	if (t62 != 8481LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x521 = 7302U;
	volatile int16_t x522 = 9958;
	uint16_t x523 = 3U;
	int32_t x524 = 3008;
	uint32_t t63 = 1164745U;

	t63 = ((x521&x522)>>(x523/x524));

	if (t63 != 1158U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x534 = 0LLU;
	static uint64_t t64 = 60770413989186452LLU;

	t64 = ((x533&x534)>>(x535/x536));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x538 = INT32_MIN;
	int64_t x539 = -1LL;

	t65 = ((x537&x538)>>(x539/x540));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x542 = UINT32_MAX;
	volatile int32_t x543 = INT32_MIN;
	volatile uint32_t x544 = 115571275U;

	t66 = ((x541&x542)>>(x543/x544));

	if (t66 != 16383U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x549 = 8308;
	volatile int8_t x552 = INT8_MIN;
	volatile int32_t t67 = 208;

	t67 = ((x549&x550)>>(x551/x552));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x553 = -354;
	int8_t x555 = 16;
	uint16_t x556 = 605U;
	uint64_t t68 = 4207606758750756290LLU;

	t68 = ((x553&x554)>>(x555/x556));

	if (t68 != 4255948928LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x565 = 31;
	uint16_t x566 = 4783U;
	uint32_t x567 = 123U;
	static int16_t x568 = -4;

	t69 = ((x565&x566)>>(x567/x568));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x577 = 6285U;
	int64_t x580 = 3468LL;
	volatile uint32_t t70 = 60U;

	t70 = ((x577&x578)>>(x579/x580));

	if (t70 != 128U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x594 = INT64_MIN;
	int64_t x595 = -1LL;
	int16_t x596 = -1;
	int64_t t71 = -362LL;

	t71 = ((x593&x594)>>(x595/x596));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x605 = UINT32_MAX;
	volatile uint8_t x606 = 33U;
	static int16_t x607 = 3164;
	volatile uint64_t x608 = 16011LLU;
	static volatile uint32_t t72 = 32595U;

	t72 = ((x605&x606)>>(x607/x608));

	if (t72 != 33U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x611 = 62U;
	static uint32_t x612 = UINT32_MAX;
	volatile uint64_t t73 = 8487934055473LLU;

	t73 = ((x609&x610)>>(x611/x612));

	if (t73 != 2LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x634 = -1;
	int8_t x635 = INT8_MIN;
	volatile int64_t x636 = 2017353407LL;
	int64_t t74 = -52161729294LL;

	t74 = ((x633&x634)>>(x635/x636));

	if (t74 != 5152064LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x637 = 173;
	static int32_t x639 = -1;
	int16_t x640 = 54;
	volatile int32_t t75 = -47943747;

	t75 = ((x637&x638)>>(x639/x640));

	if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x641 = 83U;
	int32_t x642 = INT32_MAX;
	int8_t x643 = INT8_MIN;
	volatile int64_t x644 = INT64_MAX;
	volatile uint32_t t76 = 433236U;

	t76 = ((x641&x642)>>(x643/x644));

	if (t76 != 83U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x645 = 5776546865LLU;
	static volatile uint16_t x646 = 4120U;
	uint16_t x648 = UINT16_MAX;

	t77 = ((x645&x646)>>(x647/x648));

	if (t77 != 4112LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x651 = 3LLU;
	uint8_t x652 = UINT8_MAX;
	static volatile int64_t t78 = -2681753LL;

	t78 = ((x649&x650)>>(x651/x652));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x653 = 2U;
	int32_t x654 = -1;
	int32_t x655 = INT32_MAX;
	static int64_t x656 = 199210368987974LL;
	volatile int32_t t79 = -217175;

	t79 = ((x653&x654)>>(x655/x656));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x657 = INT8_MIN;
	static uint8_t x658 = 43U;
	static uint16_t x659 = 0U;
	static volatile int32_t t80 = -764555592;

	t80 = ((x657&x658)>>(x659/x660));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x665 = UINT16_MAX;
	int8_t x667 = INT8_MAX;
	static uint32_t x668 = 3U;
	volatile int64_t t81 = 74LL;

	t81 = ((x665&x666)>>(x667/x668));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x669 = -12;
	int64_t x670 = 2147275485236LL;
	int32_t x672 = -361057965;
	static int64_t t82 = -3789046107LL;

	t82 = ((x669&x670)>>(x671/x672));

	if (t82 != 2147275485236LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x673 = UINT64_MAX;
	int8_t x674 = INT8_MIN;
	int8_t x675 = 35;
	static int64_t x676 = INT64_MIN;
	static volatile uint64_t t83 = 986501LLU;

	t83 = ((x673&x674)>>(x675/x676));

	if (t83 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x681 = INT32_MAX;
	static int8_t x683 = 47;
	int8_t x684 = INT8_MAX;

	t84 = ((x681&x682)>>(x683/x684));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x701 = UINT64_MAX;
	int16_t x702 = 568;
	uint32_t x703 = 12U;
	volatile int64_t x704 = INT64_MIN;
	uint64_t t85 = 188868499807LLU;

	t85 = ((x701&x702)>>(x703/x704));

	if (t85 != 568LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x709 = UINT32_MAX;
	uint8_t x710 = 50U;
	int32_t x711 = -1;
	volatile uint8_t x712 = 2U;
	uint32_t t86 = 483U;

	t86 = ((x709&x710)>>(x711/x712));

	if (t86 != 50U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x713 = 188U;
	uint64_t x714 = 3854197200LLU;
	volatile int16_t x715 = INT16_MAX;

	t87 = ((x713&x714)>>(x715/x716));

	if (t87 != 144LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x717 = 26977544775LLU;
	int16_t x718 = INT16_MIN;
	static volatile int16_t x720 = -99;

	t88 = ((x717&x718)>>(x719/x720));

	if (t88 != 26977533952LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x725 = UINT32_MAX;
	int32_t x726 = -90525466;
	static int16_t x727 = INT16_MIN;
	uint32_t x728 = 208108767U;
	volatile uint32_t t89 = 155800027U;

	t89 = ((x725&x726)>>(x727/x728));

	if (t89 != 4009U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x729 = -14643728623481LL;
	uint16_t x730 = 0U;
	volatile int16_t x731 = -1;
	int8_t x732 = -1;
	volatile int64_t t90 = 119354533916LL;

	t90 = ((x729&x730)>>(x731/x732));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x733 = INT64_MAX;
	uint32_t x734 = UINT32_MAX;
	static int8_t x735 = INT8_MIN;
	int64_t x736 = INT64_MIN;

	t91 = ((x733&x734)>>(x735/x736));

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x738 = UINT16_MAX;
	volatile uint8_t x739 = 2U;
	static int16_t x740 = 1;
	volatile int32_t t92 = 1978;

	t92 = ((x737&x738)>>(x739/x740));

	if (t92 != 16383) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x741 = INT8_MAX;
	volatile uint32_t x743 = 13344U;

	t93 = ((x741&x742)>>(x743/x744));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x757 = 6U;
	volatile uint32_t x759 = 1048U;
	uint64_t x760 = UINT64_MAX;
	uint32_t t94 = 0U;

	t94 = ((x757&x758)>>(x759/x760));

	if (t94 != 6U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x762 = 6U;
	int64_t x764 = INT64_MIN;
	int32_t t95 = -13;

	t95 = ((x761&x762)>>(x763/x764));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x765 = UINT16_MAX;
	volatile uint64_t x767 = 5LLU;
	int8_t x768 = INT8_MIN;
	int32_t t96 = 0;

	t96 = ((x765&x766)>>(x767/x768));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x769 = 6240U;
	uint8_t x770 = 25U;
	int32_t x772 = INT32_MIN;
	uint32_t t97 = 5072829U;

	t97 = ((x769&x770)>>(x771/x772));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x774 = 4048U;
	int32_t x776 = -1;
	volatile int32_t t98 = 88;

	t98 = ((x773&x774)>>(x775/x776));

	if (t98 != 3968) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x785 = 3699511;
	int8_t x786 = INT8_MAX;
	uint8_t x787 = UINT8_MAX;
	volatile int64_t x788 = INT64_MAX;
	static volatile int32_t t99 = -345;

	t99 = ((x785&x786)>>(x787/x788));

	if (t99 != 55) { NG(); } else { ; }
	
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

