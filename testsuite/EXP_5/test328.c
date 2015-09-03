#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static int32_t x4 = 7;
int64_t t1 = 792009057LL;
uint64_t t2 = 28771LLU;
static int64_t x21 = 16972628137881LL;
static int8_t x26 = -1;
volatile uint64_t t5 = 1266945632150212LLU;
uint16_t x42 = 125U;
int64_t x44 = 1132589787453LL;
int16_t x52 = -1;
volatile uint64_t t9 = 42LLU;
int16_t x64 = -1;
volatile int16_t x67 = INT16_MIN;
int8_t x68 = 56;
static int16_t x75 = -4;
uint64_t x76 = UINT64_MAX;
uint64_t x101 = 60481588LLU;
uint64_t t14 = 6693946262LLU;
int64_t x107 = -1LL;
volatile int16_t x109 = INT16_MIN;
int32_t x110 = -1;
int32_t t16 = 873004360;
int8_t x114 = INT8_MAX;
int16_t x116 = INT16_MIN;
uint8_t x117 = UINT8_MAX;
static uint64_t x120 = 7017470LLU;
volatile uint64_t t18 = 32873029LLU;
int16_t x122 = 225;
uint64_t x129 = 7937756269038LLU;
volatile uint8_t x150 = 81U;
uint32_t t23 = 1927446U;
uint32_t x179 = 161253U;
uint64_t t25 = 0LLU;
uint8_t x181 = 71U;
static int8_t x185 = INT8_MAX;
int32_t x188 = INT32_MAX;
uint16_t x202 = 0U;
uint64_t t29 = 33911083017807801LLU;
int32_t t32 = 1;
static int16_t x247 = INT16_MAX;
int8_t x248 = -1;
int32_t t34 = -435;
int16_t x249 = -1;
static int8_t x250 = INT8_MAX;
int8_t x251 = INT8_MAX;
volatile uint64_t t36 = 3178183LLU;
volatile uint64_t t37 = 110661354604LLU;
uint16_t x283 = 6U;
uint64_t x284 = UINT64_MAX;
uint64_t x288 = 1760867LLU;
uint64_t t39 = 597LLU;
static int16_t x293 = INT16_MIN;
int64_t x307 = -1LL;
static int8_t x309 = 22;
volatile uint32_t x311 = UINT32_MAX;
int32_t t44 = 104762;
static int16_t x317 = INT16_MIN;
volatile uint64_t t45 = 7334490465528890LLU;
int16_t x321 = INT16_MAX;
volatile int32_t x329 = INT32_MAX;
int32_t x331 = INT32_MAX;
int64_t x332 = -1LL;
volatile int8_t x353 = -1;
static int32_t x358 = -1;
uint64_t t51 = 1566417857765075437LLU;
int32_t x361 = INT32_MIN;
uint32_t x364 = 197U;
uint64_t x374 = UINT64_MAX;
static uint64_t x385 = 1324761848LLU;
uint32_t x397 = 154139509U;
volatile int8_t x398 = -1;
volatile int8_t x413 = INT8_MIN;
volatile int64_t t60 = -46LL;
static volatile int64_t x432 = -1LL;
static volatile uint64_t t64 = 3215170255LLU;
volatile uint8_t x442 = UINT8_MAX;
int16_t x444 = INT16_MIN;
static volatile int16_t x458 = -1;
int64_t x467 = -1LL;
int8_t x468 = INT8_MIN;
volatile int64_t t70 = 39232954629LL;
uint8_t x475 = 7U;
int64_t t74 = 553621129835514LL;
static uint8_t x489 = 0U;
uint64_t x493 = 2141910696624LLU;
static uint64_t t76 = 799198453398066840LLU;
volatile uint64_t t77 = 27609603442276LLU;
static uint64_t t78 = 70914417724374236LLU;
static volatile int8_t x514 = INT8_MIN;
uint32_t t80 = 52044U;
static int8_t x522 = INT8_MIN;
static uint64_t t82 = 2248562503LLU;
static int32_t x534 = INT32_MIN;
int16_t x541 = 0;
uint64_t x547 = 28468290LLU;
int16_t x553 = -1682;
static int16_t x554 = INT16_MIN;
uint16_t x560 = 12331U;
static int16_t x573 = -2756;
uint8_t x575 = 54U;
int8_t x577 = -1;
volatile uint8_t x581 = UINT8_MAX;
uint8_t x595 = 3U;
static volatile int32_t t97 = 4;
static uint8_t x603 = 39U;
int32_t t99 = -20814;


void f0(void) {
	uint32_t x2 = 17441U;
	int8_t x3 = 0;
	volatile uint32_t t0 = 38813U;

	t0 = (x1*((x2-x3)^x4));

	if (t0 != 3723296768U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -403;
	int64_t x10 = -1LL;
	int32_t x11 = INT32_MIN;
	uint8_t x12 = UINT8_MAX;

	t1 = (x9*((x10-x11)^x12));

	if (t1 != -865435806976LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -872;
	uint64_t x14 = 383LLU;
	volatile uint16_t x15 = 275U;
	volatile int64_t x16 = INT64_MIN;

	t2 = (x13*((x14-x15)^x16));

	if (t2 != 18446744073709457440LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = 0;
	int32_t x18 = -1;
	static volatile int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t3 = 19;

	t3 = (x17*((x18-x19)^x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = 111;
	static int8_t x23 = -1;
	int16_t x24 = 27;
	static int64_t t4 = 396681081LL;

	t4 = (x21*((x22-x23)^x24));

	if (t4 != 1816071210753267LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = UINT64_MAX;
	uint64_t x27 = 221935259LLU;
	volatile int16_t x28 = -1;

	t5 = (x25*((x26-x27)^x28));

	if (t5 != 18446744073487616357LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	static volatile uint64_t x30 = 2408534LLU;
	uint64_t x31 = 778LLU;
	static int8_t x32 = INT8_MAX;
	static uint64_t t6 = 613865943336931LLU;

	t6 = (x29*((x30-x31)^x32));

	if (t6 != 10341125900157645LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = -1954;
	int8_t x43 = -27;
	int64_t t7 = -47969991758673149LL;

	t7 = (x41*((x42-x43)^x44));

	if (t7 != -2213080444886378LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int64_t x46 = -3677523838LL;
	static int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	volatile int64_t t8 = 512633029409354095LL;

	t8 = (x45*((x46-x47)^x48));

	if (t8 != 937774944510LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 1865LLU;
	static volatile uint16_t x50 = UINT16_MAX;
	static uint64_t x51 = 4238617572833704LLU;

	t9 = (x49*((x50-x51)^x52));

	if (t9 != 7905021773212633320LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = 1835402;
	uint64_t x62 = 42529462753LLU;
	uint16_t x63 = 15670U;
	volatile uint64_t t10 = 89LLU;

	t10 = (x61*((x62-x63)^x64));

	if (t10 != 18368685441472683848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MIN;
	static uint32_t x66 = UINT32_MAX;
	static volatile uint32_t t11 = 495652U;

	t11 = (x65*((x66-x67)^x68));

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MAX;
	volatile uint64_t t12 = 719LLU;

	t12 = (x73*((x74-x75)^x76));

	if (t12 != 18446744071561838596LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = 68127281958351LL;
	uint8_t x82 = 24U;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = 0U;
	static int64_t t13 = -28211232334LL;

	t13 = (x81*((x82-x83)^x84));

	if (t13 != 2234029829978245992LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x102 = INT32_MAX;
	uint64_t x103 = 237973077978LLU;
	uint64_t x104 = UINT64_MAX;

	t14 = (x101*((x102-x103)^x104));

	if (t14 != 14263106436122196040LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = INT16_MIN;
	static uint64_t x106 = 26872749347165LLU;
	uint32_t x108 = 3745U;
	uint64_t t15 = 15164LLU;

	t15 = (x105*((x106-x107)^x108));

	if (t15 != 17566177822978899968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;

	t16 = (x109*((x110-x111)^x112));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x113 = UINT32_MAX;
	int16_t x115 = INT16_MIN;
	volatile uint32_t t17 = 429552619U;

	t17 = (x113*((x114-x115)^x116));

	if (t17 != 65409U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x118 = UINT32_MAX;
	volatile uint32_t x119 = 40139U;

	t18 = (x117*((x118-x119)^x120));

	if (t18 != 1093419161910LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x121 = 3606;
	static int32_t x123 = 1954;
	volatile int8_t x124 = INT8_MAX;
	static int32_t t19 = 467096;

	t19 = (x121*((x122-x123)^x124));

	if (t19 != -6231168) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x130 = -26;
	int32_t x131 = -13;
	uint16_t x132 = UINT16_MAX;
	uint64_t t20 = 12102LLU;

	t20 = (x129*((x130-x131)^x132));

	if (t20 != 17926630531937105704LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x145 = INT32_MIN;
	int64_t x146 = -1LL;
	uint16_t x147 = 4544U;
	int16_t x148 = -1;
	static int64_t t21 = -29318760658LL;

	t21 = (x145*((x146-x147)^x148));

	if (t21 != -9758165696512LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x149 = INT8_MIN;
	uint8_t x151 = 1U;
	uint16_t x152 = 460U;
	int32_t t22 = -32732161;

	t22 = (x149*((x150-x151)^x152));

	if (t22 != -52736) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x153 = UINT8_MAX;
	int16_t x154 = 0;
	uint32_t x155 = 127954143U;
	static int16_t x156 = INT16_MAX;

	t23 = (x153*((x154-x155)^x156));

	if (t23 != 1737290018U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x157 = 120U;
	int64_t x158 = INT64_MAX;
	uint64_t x159 = 1298420339410LLU;
	int64_t x160 = -1LL;
	uint64_t t24 = 120685LLU;

	t24 = (x157*((x158-x159)^x160));

	if (t24 != 155810440729200LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x177 = 1580623411LLU;
	int32_t x178 = INT32_MAX;
	static uint32_t x180 = 56578U;

	t25 = (x177*((x178-x179)^x180));

	if (t25 != 3394087407140465096LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x182 = 20;
	int16_t x183 = INT16_MIN;
	int16_t x184 = 14;
	volatile int32_t t26 = -22;

	t26 = (x181*((x182-x183)^x184));

	if (t26 != 2328374) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x186 = -12447651064897858LL;
	uint16_t x187 = 23571U;
	volatile int64_t t27 = 1055LL;

	t27 = (x185*((x186-x187)^x188));

	if (t27 != -1580851838601958228LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x193 = -1LL;
	volatile uint8_t x194 = 3U;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = 15834U;
	int64_t t28 = 233802310966439LL;

	t28 = (x193*((x194-x195)^x196));

	if (t28 != 9223372036854759970LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x201 = 2049289068LLU;
	int16_t x203 = INT16_MAX;
	int16_t x204 = 1;

	t29 = (x201*((x202-x203)^x204));

	if (t29 != 18446676922605371392LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x205 = 2U;
	int32_t x206 = -1;
	volatile int8_t x207 = INT8_MAX;
	static uint8_t x208 = 3U;
	int32_t t30 = 32262;

	t30 = (x205*((x206-x207)^x208));

	if (t30 != -250) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x217 = 10948581U;
	int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	static int16_t x220 = 96;
	uint32_t t31 = 392U;

	t31 = (x217*((x218-x219)^x220));

	if (t31 != 171665504U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x229 = -54;
	static int8_t x230 = -27;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = UINT16_MAX;

	t32 = (x229*((x230-x231)^x232));

	if (t32 != -3533436) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x233 = INT32_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	volatile int64_t x235 = INT64_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile uint64_t t33 = 836865LLU;

	t33 = (x233*((x234-x235)^x236));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;

	t34 = (x245*((x246-x247)^x248));

	if (t34 != -4210432) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x252 = 13U;
	volatile int32_t t35 = -307;

	t35 = (x249*((x250-x251)^x252));

	if (t35 != -13) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x253 = 1334842781U;
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	volatile int64_t x256 = -1LL;

	t36 = (x253*((x254-x255)^x256));

	if (t36 != 18446700333581303808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x257 = 0LL;
	uint16_t x258 = UINT16_MAX;
	volatile int8_t x259 = 6;
	uint64_t x260 = UINT64_MAX;

	t37 = (x257*((x258-x259)^x260));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x281 = 68U;
	int16_t x282 = -1;
	uint64_t t38 = 21080348777597LLU;

	t38 = (x281*((x282-x283)^x284));

	if (t38 != 408LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x285 = UINT8_MAX;
	int64_t x286 = INT64_MIN;
	static int32_t x287 = INT32_MIN;

	t39 = (x285*((x286-x287)^x288));

	if (t39 != 9223372584912127133LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = INT16_MIN;
	volatile int8_t x296 = -1;
	volatile uint64_t t40 = 20771525579LLU;

	t40 = (x293*((x294-x295)^x296));

	if (t40 != 1073741824LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x297 = -1;
	int32_t x298 = -1;
	uint8_t x299 = 19U;
	uint8_t x300 = 61U;
	static int32_t t41 = -335624404;

	t41 = (x297*((x298-x299)^x300));

	if (t41 != 47) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x305 = 0;
	uint16_t x306 = 11U;
	uint32_t x308 = 896U;
	volatile int64_t t42 = -7536406774525LL;

	t42 = (x305*((x306-x307)^x308));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x310 = -15652806;
	uint32_t x312 = UINT32_MAX;
	static uint32_t t43 = 12158U;

	t43 = (x309*((x310-x311)^x312));

	if (t43 != 344361688U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x313 = 9U;
	uint16_t x314 = 13U;
	int32_t x315 = -119;
	int8_t x316 = 2;

	t44 = (x313*((x314-x315)^x316));

	if (t44 != 1206) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x318 = 124308LLU;
	volatile uint32_t x319 = UINT32_MAX;
	int64_t x320 = -1LL;

	t45 = (x317*((x318-x319)^x320));

	if (t45 != 18446603340294586368LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x322 = UINT32_MAX;
	uint16_t x323 = UINT16_MAX;
	volatile int32_t x324 = INT32_MAX;
	volatile uint32_t t46 = 272024U;

	t46 = (x321*((x322-x323)^x324));

	if (t46 != 4294868993U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x330 = 184U;
	int64_t t47 = 321043LL;

	t47 = (x329*((x330-x331)^x332));

	if (t47 != -4611686415711862598LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x345 = 767LLU;
	int32_t x346 = -1;
	uint8_t x347 = 6U;
	volatile uint8_t x348 = 99U;
	volatile uint64_t t48 = 18LLU;

	t48 = (x345*((x346-x347)^x348));

	if (t48 != 18446744073709473382LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x349 = 1;
	int16_t x350 = -1;
	int16_t x351 = -725;
	static int16_t x352 = INT16_MIN;
	static volatile int32_t t49 = 56042;

	t49 = (x349*((x350-x351)^x352));

	if (t49 != -32044) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x354 = INT8_MIN;
	int16_t x355 = 18;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t50 = -43;

	t50 = (x353*((x354-x355)^x356));

	if (t50 != 65391) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x357 = UINT8_MAX;
	volatile uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 1448724037904120521LLU;

	t51 = (x357*((x358-x359)^x360));

	if (t51 != 17956995882340814391LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x362 = 23U;
	volatile int8_t x363 = -1;
	volatile uint32_t t52 = 2080417908U;

	t52 = (x361*((x362-x363)^x364));

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x365 = INT64_MIN;
	int8_t x366 = -40;
	uint8_t x367 = 4U;
	static int32_t x368 = -44;
	int64_t t53 = 187704892162LL;

	t53 = (x365*((x366-x367)^x368));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x373 = 69240481LLU;
	volatile int64_t x375 = -1LL;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t54 = 1171388547LLU;

	t54 = (x373*((x374-x375)^x376));

	if (t54 != 4537674922335LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x381 = -7160810;
	volatile uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	int32_t x384 = -1;
	volatile int32_t t55 = 60;

	t55 = (x381*((x382-x383)^x384));

	if (t55 != 1840328170) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x386 = 20225526LL;
	volatile int32_t x387 = INT32_MIN;
	uint16_t x388 = 3464U;
	static uint64_t t56 = 301335444661991LLU;

	t56 = (x385*((x386-x387)^x388));

	if (t56 != 2871693843495941648LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x399 = -284935;
	volatile int16_t x400 = -64;
	uint32_t t57 = 2253256U;

	t57 = (x397*((x398-x399)^x400));

	if (t57 != 1323391614U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x401 = UINT16_MAX;
	int64_t x402 = -10408601504LL;
	int8_t x403 = INT8_MIN;
	static int32_t x404 = INT32_MIN;
	volatile int64_t t58 = 126775LL;

	t58 = (x401*((x402-x403)^x404));

	if (t58 != 584490376668960LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x405 = 469551287052710LLU;
	static uint64_t x406 = UINT64_MAX;
	int32_t x407 = -377;
	uint16_t x408 = 2191U;
	uint64_t t59 = 2LLU;

	t59 = (x405*((x406-x407)^x408));

	if (t59 != 1197825333271463210LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x414 = INT16_MIN;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MAX;

	t60 = (x413*((x414-x415)^x416));

	if (t60 != -4194176LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x417 = -1;
	static int8_t x418 = -3;
	static volatile int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	static int32_t t61 = 876;

	t61 = (x417*((x418-x419)^x420));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x425 = -1LL;
	static uint16_t x426 = 1803U;
	int16_t x427 = -1;
	volatile uint64_t x428 = 8376469083LLU;
	volatile uint64_t t62 = 1582815LLU;

	t62 = (x425*((x426-x427)^x428));

	if (t62 != 18446744065333083817LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x429 = UINT8_MAX;
	static int16_t x430 = INT16_MIN;
	uint32_t x431 = UINT32_MAX;
	static int64_t t63 = 73LL;

	t63 = (x429*((x430-x431)^x432));

	if (t63 != -1095208305150LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x437 = 1207LLU;
	static uint32_t x438 = UINT32_MAX;
	int16_t x439 = -2147;
	int16_t x440 = 135;

	t64 = (x437*((x438-x439)^x440));

	if (t64 != 2748339LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x441 = -1;
	uint16_t x443 = 8069U;
	int32_t t65 = 9;

	t65 = (x441*((x442-x443)^x444));

	if (t65 != -24954) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x445 = INT32_MIN;
	static volatile uint16_t x446 = UINT16_MAX;
	uint64_t x447 = 49011150LLU;
	volatile int32_t x448 = -608617;
	static volatile uint64_t t66 = 9LLU;

	t66 = (x445*((x446-x447)^x448));

	if (t66 != 18342659548495478784LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x453 = INT8_MIN;
	static uint64_t x454 = UINT64_MAX;
	static int64_t x455 = -1LL;
	static uint32_t x456 = UINT32_MAX;
	volatile uint64_t t67 = 469239872891325499LLU;

	t67 = (x453*((x454-x455)^x456));

	if (t67 != 18446743523953737856LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x457 = 27409160060525LLU;
	uint16_t x459 = UINT16_MAX;
	uint32_t x460 = UINT32_MAX;
	uint64_t t68 = 262402651LLU;

	t68 = (x457*((x458-x459)^x460));

	if (t68 != 1796259304566505875LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x461 = -1;
	uint32_t x462 = UINT32_MAX;
	volatile uint16_t x463 = UINT16_MAX;
	uint16_t x464 = 7U;
	uint32_t t69 = 23U;

	t69 = (x461*((x462-x463)^x464));

	if (t69 != 65529U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x465 = 2259U;
	int8_t x466 = -22;

	t70 = (x465*((x466-x467)^x468));

	if (t70 != 241713LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x469 = -1;
	static int64_t x470 = 22802450725LL;
	int16_t x471 = -12;
	int16_t x472 = 4;
	volatile int64_t t71 = -61135368330482LL;

	t71 = (x469*((x470-x471)^x472));

	if (t71 != -22802450741LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x473 = 3488564822481969470LLU;
	int64_t x474 = INT64_MAX;
	volatile int64_t x476 = -323696LL;
	volatile uint64_t t72 = 458402215LLU;

	t72 = (x473*((x474-x475)^x476));

	if (t72 != 7578531487241183536LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x481 = -1LL;
	volatile int8_t x482 = -1;
	int8_t x483 = -1;
	uint32_t x484 = 82U;
	static volatile int64_t t73 = 10093645LL;

	t73 = (x481*((x482-x483)^x484));

	if (t73 != -82LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x485 = 339U;
	static volatile int64_t x486 = -1LL;
	volatile uint32_t x487 = 86092041U;
	int8_t x488 = INT8_MAX;

	t74 = (x485*((x486-x487)^x488));

	if (t74 != -29185239189LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x490 = INT32_MIN;
	static uint64_t x491 = 35777184461774471LLU;
	uint64_t x492 = 1230LLU;
	uint64_t t75 = 141954730LLU;

	t75 = (x489*((x490-x491)^x492));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x494 = INT64_MIN;
	static int16_t x495 = INT16_MIN;
	static volatile int16_t x496 = INT16_MIN;

	t76 = (x493*((x494-x495)^x496));

	if (t76 != 18306371814295601152LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x505 = INT8_MIN;
	int16_t x506 = -16;
	uint64_t x507 = 1775546LLU;
	int32_t x508 = INT32_MAX;

	t77 = (x505*((x506-x507)^x508));

	if (t77 != 274650635136LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x509 = 4278460491417380LLU;
	int16_t x510 = INT16_MIN;
	int16_t x511 = -1;
	static int32_t x512 = INT32_MIN;

	t78 = (x509*((x510-x511)^x512));

	if (t78 != 13930825429246330660LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x513 = INT32_MIN;
	volatile int64_t x515 = -1LL;
	int32_t x516 = -1;
	volatile int64_t t79 = -13555823LL;

	t79 = (x513*((x514-x515)^x516));

	if (t79 != -270582939648LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x517 = 0U;
	int8_t x518 = INT8_MIN;
	int32_t x519 = -56;
	int8_t x520 = 1;

	t80 = (x517*((x518-x519)^x520));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x521 = -1;
	uint16_t x523 = 1942U;
	uint64_t x524 = 2091494366075820615LLU;
	uint64_t t81 = 505417489705955697LLU;

	t81 = (x521*((x522-x523)^x524));

	if (t81 != 2091494366075818579LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x529 = UINT8_MAX;
	static volatile int16_t x530 = INT16_MIN;
	volatile uint64_t x531 = 3636LLU;
	static volatile uint64_t x532 = UINT64_MAX;

	t82 = (x529*((x530-x531)^x532));

	if (t82 != 9282765LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x533 = 16;
	int32_t x535 = -1;
	int64_t x536 = -1LL;
	volatile int64_t t83 = -605329062LL;

	t83 = (x533*((x534-x535)^x536));

	if (t83 != 34359738336LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x537 = 23U;
	int8_t x538 = 1;
	volatile uint32_t x539 = UINT32_MAX;
	uint16_t x540 = UINT16_MAX;
	uint32_t t84 = 1U;

	t84 = (x537*((x538-x539)^x540));

	if (t84 != 1507259U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x542 = INT8_MIN;
	uint32_t x543 = UINT32_MAX;
	int64_t x544 = -104LL;
	int64_t t85 = -13981747200690LL;

	t85 = (x541*((x542-x543)^x544));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x545 = INT16_MIN;
	int8_t x546 = -1;
	int32_t x548 = INT32_MIN;
	uint64_t t86 = 1603497943318LLU;

	t86 = (x545*((x546-x547)^x548));

	if (t86 != 18446674637814333440LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x549 = INT32_MIN;
	int64_t x550 = -12LL;
	uint16_t x551 = UINT16_MAX;
	int16_t x552 = -1;
	static int64_t t87 = -167825590LL;

	t87 = (x549*((x550-x551)^x552));

	if (t87 != -140758963191808LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x555 = 15019277844287418LLU;
	static int16_t x556 = -1;
	static uint64_t t88 = 31563634819867LLU;

	t88 = (x553*((x554-x555)^x556));

	if (t88 != 11631062813272552062LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x557 = 7U;
	static uint64_t x558 = UINT64_MAX;
	int64_t x559 = -635956160770LL;
	volatile uint64_t t89 = 541014195493LLU;

	t89 = (x557*((x558-x559)^x560));

	if (t89 != 4451693096998LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x561 = -1234663079LL;
	static volatile uint16_t x562 = 4199U;
	uint64_t x563 = UINT64_MAX;
	int32_t x564 = INT32_MIN;
	volatile uint64_t t90 = 27415686497LLU;

	t90 = (x561*((x562-x563)^x564));

	if (t90 != 2651413587356900392LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x565 = INT32_MIN;
	uint8_t x566 = 7U;
	uint8_t x567 = 115U;
	uint32_t x568 = 1903317810U;
	volatile uint32_t t91 = 6065182U;

	t91 = (x565*((x566-x567)^x568));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x569 = -1;
	static uint64_t x570 = 11977816390346184LLU;
	static uint32_t x571 = UINT32_MAX;
	int8_t x572 = -1;
	uint64_t t92 = 5459222379LLU;

	t92 = (x569*((x570-x571)^x572));

	if (t92 != 11977812095378890LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x574 = -1;
	uint16_t x576 = UINT16_MAX;
	int32_t t93 = -283377864;

	t93 = (x573*((x574-x575)^x576));

	if (t93 != 180468392) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x578 = INT32_MAX;
	volatile uint16_t x579 = 3065U;
	volatile int16_t x580 = -1;
	static volatile int32_t t94 = -604094;

	t94 = (x577*((x578-x579)^x580));

	if (t94 != 2147480583) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x582 = INT16_MIN;
	uint8_t x583 = 15U;
	int16_t x584 = INT16_MIN;
	volatile int32_t t95 = -104298;

	t95 = (x581*((x582-x583)^x584));

	if (t95 != 16707855) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x585 = -1;
	uint16_t x586 = 18U;
	uint8_t x587 = 0U;
	uint64_t x588 = 21880728LLU;
	uint64_t t96 = 1LLU;

	t96 = (x585*((x586-x587)^x588));

	if (t96 != 18446744073687670902LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x593 = -392580;
	int8_t x594 = INT8_MAX;
	int8_t x596 = INT8_MIN;

	t97 = (x593*((x594-x595)^x596));

	if (t97 != 1570320) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x597 = 10U;
	int64_t x598 = INT64_MIN;
	static int16_t x599 = -1;
	uint64_t x600 = 53718221973271LLU;
	uint64_t t98 = 4840751230LLU;

	t98 = (x597*((x598-x599)^x600));

	if (t98 != 537182219732700LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x601 = -10;
	int8_t x602 = INT8_MIN;
	uint16_t x604 = UINT16_MAX;

	t99 = (x601*((x602-x603)^x604));

	if (t99 != 653700) { NG(); } else { ; }
	
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

