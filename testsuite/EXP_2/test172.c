#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
int8_t x14 = 1;
volatile uint64_t x29 = 2731LLU;
int16_t x33 = INT16_MAX;
int8_t x35 = 13;
uint64_t t6 = 1678700101828091LLU;
int16_t x43 = -1;
uint64_t t7 = 940254LLU;
static volatile int64_t x51 = -4172617LL;
int32_t x68 = -1;
int32_t x72 = 102609;
int64_t x73 = -1LL;
int8_t x76 = INT8_MIN;
static uint64_t x82 = 2609784726553404LLU;
static int8_t x83 = -4;
int32_t x84 = 6;
uint64_t x88 = UINT64_MAX;
uint16_t x90 = 0U;
volatile int32_t x91 = INT32_MAX;
uint64_t x117 = 1141LLU;
int8_t x119 = INT8_MIN;
int16_t x120 = INT16_MIN;
int64_t x124 = 103388LL;
static volatile uint8_t x133 = 50U;
int64_t t22 = 5474906131806220LL;
volatile int16_t x138 = INT16_MIN;
uint16_t x139 = 14U;
uint32_t x142 = UINT32_MAX;
uint32_t t24 = 315U;
static uint32_t x163 = 165017U;
volatile int8_t x167 = -5;
static int8_t x168 = 1;
static volatile uint32_t x175 = UINT32_MAX;
uint32_t t31 = 27810056U;
uint32_t t32 = 1144U;
uint32_t x186 = 12657U;
uint32_t t33 = 280U;
uint16_t x198 = 2U;
static uint16_t x200 = 17839U;
volatile uint64_t t35 = 1LLU;
int64_t x205 = -1LL;
static int64_t t36 = -8754LL;
static int8_t x213 = INT8_MIN;
uint64_t x216 = UINT64_MAX;
static int32_t x231 = -1;
static uint32_t x237 = 79136737U;
int32_t x247 = INT32_MAX;
static int8_t x265 = INT8_MIN;
int8_t x267 = 0;
uint64_t x274 = 14017362634LLU;
volatile uint64_t t45 = 26699LLU;
int16_t x280 = INT16_MAX;
static int64_t x282 = INT64_MAX;
volatile int64_t x283 = INT64_MAX;
uint64_t t47 = 17356318319LLU;
static uint64_t t50 = 523273264915746LLU;
volatile uint64_t t51 = 154315LLU;
uint16_t x307 = UINT16_MAX;
uint64_t x316 = UINT64_MAX;
int32_t x331 = -1072944989;
volatile int16_t x337 = INT16_MIN;
int32_t x343 = INT32_MIN;
int32_t x345 = 1799;
uint64_t x351 = 2LLU;
volatile int32_t x356 = INT32_MAX;
uint32_t t65 = 121091912U;
int16_t x369 = INT16_MIN;
int8_t x370 = INT8_MIN;
static volatile int32_t x374 = -501265;
int8_t x375 = INT8_MIN;
static volatile uint64_t t69 = 60040383766145LLU;
int16_t x398 = INT16_MAX;
int16_t x399 = -1;
static int32_t t70 = 5;
uint16_t x415 = 155U;
volatile int32_t t71 = 357519623;
static int32_t x420 = INT32_MIN;
volatile int64_t x428 = -5LL;
volatile int64_t t73 = 110911917626LL;
int16_t x431 = -1;
static uint64_t x435 = UINT64_MAX;
int8_t x454 = INT8_MAX;
uint64_t x463 = 795LLU;
uint64_t t79 = 155313640LLU;
static uint32_t x476 = 887176675U;
volatile int16_t x484 = -1;
int8_t x496 = INT8_MAX;
static uint8_t x504 = 2U;
int64_t x510 = -1LL;
int32_t x511 = -29237;
int8_t x512 = -1;
static volatile int64_t t85 = 7716838678537845LL;
int8_t x522 = 1;
uint16_t x545 = 113U;
int8_t x565 = -1;
uint16_t x596 = 18U;
static uint32_t x597 = 5528964U;


void f0(void) {
	static int8_t x1 = 0;
	volatile int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	volatile uint8_t x4 = 1U;
	int32_t t0 = 29042161;

	t0 = ((x1+(x2-x3))*x4);

	if (t0 != -32640) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint32_t x6 = UINT32_MAX;
	volatile int16_t x7 = 9095;
	volatile uint32_t t1 = 1809314370U;

	t1 = ((x5+(x6-x7))*x8);

	if (t1 != 3690472456U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = 413;
	static volatile int16_t x15 = INT16_MAX;
	uint16_t x16 = 6293U;
	int32_t t2 = 0;

	t2 = ((x13+(x14-x15))*x16);

	if (t2 != -203597429) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 173808047LLU;
	int8_t x22 = 1;
	static uint64_t x23 = 4490LLU;
	int64_t x24 = -1LL;
	uint64_t t3 = 197LLU;

	t3 = ((x21+(x22-x23))*x24);

	if (t3 != 18446744073535748058LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x30 = 1U;
	int32_t x31 = -1;
	volatile uint16_t x32 = 118U;
	volatile uint64_t t4 = 1LLU;

	t4 = ((x29+(x30-x31))*x32);

	if (t4 != 322494LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x34 = -1LL;
	int16_t x36 = INT16_MIN;
	int64_t t5 = -8037918LL;

	t5 = ((x33+(x34-x35))*x36);

	if (t5 != -1073250304LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -15;
	uint64_t x38 = 88482LLU;
	uint16_t x39 = UINT16_MAX;
	static uint8_t x40 = 7U;

	t6 = ((x37+(x38-x39))*x40);

	if (t6 != 160524LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = UINT64_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	int32_t x44 = 68;

	t7 = ((x41+(x42-x43))*x44);

	if (t7 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = -1;
	int8_t x52 = 0;
	volatile int64_t t8 = -106470LL;

	t8 = ((x49+(x50-x51))*x52);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x65 = 109U;
	uint64_t x66 = 439LLU;
	volatile uint8_t x67 = 3U;
	uint64_t t9 = 4521596LLU;

	t9 = ((x65+(x66-x67))*x68);

	if (t9 != 18446744073709551071LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x69 = UINT64_MAX;
	int32_t x70 = -31452848;
	uint16_t x71 = UINT16_MAX;
	volatile uint64_t t10 = 1043469932LLU;

	t10 = ((x69+(x70-x71))*x72);

	if (t10 != 18446740839639687760LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x74 = 1177032;
	uint8_t x75 = 0U;
	volatile int64_t t11 = -41787713854668LL;

	t11 = ((x73+(x74-x75))*x76);

	if (t11 != -150659968LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x81 = UINT8_MAX;
	volatile uint64_t t12 = 440LLU;

	t12 = ((x81+(x82-x83))*x84);

	if (t12 != 15658708359321978LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = -1;
	uint8_t x86 = 3U;
	volatile int8_t x87 = INT8_MIN;
	volatile uint64_t t13 = 20LLU;

	t13 = ((x85+(x86-x87))*x88);

	if (t13 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = 6375U;
	uint8_t x92 = 17U;
	uint32_t t14 = 137460506U;

	t14 = ((x89+(x90-x91))*x92);

	if (t14 != 2147592040U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x97 = INT16_MAX;
	volatile uint64_t x98 = UINT64_MAX;
	volatile int16_t x99 = 0;
	volatile int64_t x100 = 309099123845956629LL;
	volatile uint64_t t15 = 1289710311956693993LLU;

	t15 = ((x97+(x98-x99))*x100);

	if (t15 != 679395470071068630LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x101 = 247450493085320117LLU;
	static uint16_t x102 = 75U;
	uint64_t x103 = 63337575LLU;
	int8_t x104 = INT8_MAX;
	static volatile uint64_t t16 = 566522475159LLU;

	t16 = ((x101+(x102-x103))*x104);

	if (t16 != 12979468540082240743LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x105 = -231568879074118409LL;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = INT64_MIN;
	volatile uint64_t t17 = 53LLU;

	t17 = ((x105+(x106-x107))*x108);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x109 = INT16_MAX;
	uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 11435947U;
	volatile int16_t x112 = INT16_MIN;
	volatile uint32_t t18 = 21U;

	t18 = ((x109+(x110-x111))*x112);

	if (t18 != 2144763904U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x118 = INT64_MIN;
	volatile uint64_t t19 = 3723386664505LLU;

	t19 = ((x117+(x118-x119))*x120);

	if (t19 != 18446744073667969024LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x121 = 44167LLU;
	int64_t x122 = -1LL;
	static uint64_t x123 = 57074LLU;
	static volatile uint64_t t20 = 36001334708226676LLU;

	t20 = ((x121+(x122-x123))*x124);

	if (t20 != 18446744072375019312LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x129 = 14799LL;
	volatile int16_t x130 = INT16_MAX;
	uint32_t x131 = UINT32_MAX;
	uint64_t x132 = 42294741159LLU;
	static volatile uint64_t t21 = 2609827034110LLU;

	t21 = ((x129+(x130-x131))*x132);

	if (t21 != 2011833952710153LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x134 = INT32_MAX;
	int64_t x135 = -67974996070354734LL;
	int16_t x136 = -1;

	t22 = ((x133+(x134-x135))*x136);

	if (t22 != -67974998217838431LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x137 = -58649567808910LL;
	uint64_t x140 = 155014445922LLU;
	uint64_t t23 = 14372494435948LLU;

	t23 = ((x137+(x138-x139))*x140);

	if (t23 != 2894415338851620424LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = INT32_MAX;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;

	t24 = ((x141+(x142-x143))*x144);

	if (t24 != 65536U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x145 = -1;
	uint64_t x146 = 2876225890376LLU;
	uint8_t x147 = 1U;
	int64_t x148 = INT64_MAX;
	volatile uint64_t t25 = 60309846266477212LLU;

	t25 = ((x145+(x146-x147))*x148);

	if (t25 != 18446741197483661242LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = -2;
	int32_t x150 = -846;
	uint32_t x151 = 0U;
	volatile int64_t x152 = 213815937LL;
	volatile int64_t t26 = 3771915604959LL;

	t26 = ((x149+(x150-x151))*x152);

	if (t26 != 918332275462681776LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	static int64_t x155 = INT64_MIN;
	int32_t x156 = -1;
	static volatile int64_t t27 = -396635016054LL;

	t27 = ((x153+(x154-x155))*x156);

	if (t27 != -9223372034707292415LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x157 = UINT64_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	uint64_t t28 = 43616LLU;

	t28 = ((x157+(x158-x159))*x160);

	if (t28 != 128LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x161 = 208U;
	uint8_t x162 = 28U;
	int8_t x164 = 6;
	uint32_t t29 = 406568981U;

	t29 = ((x161+(x162-x163))*x164);

	if (t29 != 4293978610U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x165 = INT8_MIN;
	int32_t x166 = -751951;
	volatile int32_t t30 = -1;

	t30 = ((x165+(x166-x167))*x168);

	if (t30 != -752074) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = 872;
	uint32_t x176 = UINT32_MAX;

	t31 = ((x173+(x174-x175))*x176);

	if (t31 != 2147482776U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x182 = 1116446106U;
	static uint8_t x183 = 12U;
	int16_t x184 = -1260;

	t32 = ((x181+(x182-x183))*x184);

	if (t32 != 2026873348U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x185 = 12073U;
	uint16_t x187 = 5U;
	int16_t x188 = -1;

	t33 = ((x185+(x186-x187))*x188);

	if (t33 != 4294942571U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x197 = INT32_MAX;
	uint64_t x199 = 4946208LLU;
	volatile uint64_t t34 = 45493178357857469LLU;

	t34 = ((x197+(x198-x199))*x200);

	if (t34 != 38220725409999LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = 51LLU;
	int8_t x202 = -1;
	volatile uint16_t x203 = 62U;
	int32_t x204 = INT32_MIN;

	t35 = ((x201+(x202-x203))*x204);

	if (t35 != 25769803776LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x206 = 5056932U;
	int32_t x207 = INT32_MIN;
	static int16_t x208 = 6;

	t36 = ((x205+(x206-x207))*x208);

	if (t36 != 12915243474LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x214 = 291LLU;
	int32_t x215 = INT32_MIN;
	volatile uint64_t t37 = 1556LLU;

	t37 = ((x213+(x214-x215))*x216);

	if (t37 != 18446744071562067805LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x229 = INT32_MIN;
	static uint64_t x230 = UINT64_MAX;
	uint8_t x232 = 43U;
	uint64_t t38 = 56713270595LLU;

	t38 = ((x229+(x230-x231))*x232);

	if (t38 != 18446743981367754752LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x238 = 6432U;
	static int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;
	uint32_t t39 = 1577780350U;

	t39 = ((x237+(x238-x239))*x240);

	if (t39 != 2630442623U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	int64_t x243 = -1LL;
	uint32_t x244 = UINT32_MAX;
	int64_t t40 = -1017212LL;

	t40 = ((x241+(x242-x243))*x244);

	if (t40 != 281470681677825LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x245 = 128483425U;
	int32_t x246 = INT32_MAX;
	int8_t x248 = INT8_MIN;
	volatile uint32_t t41 = 1749071U;

	t41 = ((x245+(x246-x247))*x248);

	if (t41 != 733990784U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x257 = UINT64_MAX;
	static int16_t x258 = INT16_MIN;
	uint32_t x259 = 1440098U;
	static int8_t x260 = -25;
	uint64_t t42 = 311612022633629746LLU;

	t42 = ((x257+(x258-x259))*x260);

	if (t42 != 18446743966372190891LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int16_t x262 = INT16_MAX;
	volatile int8_t x263 = -56;
	static int8_t x264 = INT8_MIN;
	uint32_t t43 = 459U;

	t43 = ((x261+(x262-x263))*x264);

	if (t43 != 4290766080U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x266 = -1;
	int16_t x268 = INT16_MIN;
	int32_t t44 = 22;

	t44 = ((x265+(x266-x267))*x268);

	if (t44 != 4227072) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x273 = 1713242;
	int8_t x275 = INT8_MAX;
	uint64_t x276 = 2656158254101LLU;

	t45 = ((x273+(x274-x275))*x276);

	if (t45 != 11354224827633735561LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x277 = INT8_MIN;
	volatile int32_t x278 = -1;
	int8_t x279 = -1;
	int32_t t46 = -54359086;

	t46 = ((x277+(x278-x279))*x280);

	if (t46 != -4194176) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x281 = 2872494860107418LLU;
	uint16_t x284 = 429U;

	t47 = ((x281+(x282-x283))*x284);

	if (t47 != 1232300294986082322LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x285 = UINT16_MAX;
	volatile int64_t x286 = -1LL;
	int16_t x287 = -6;
	uint64_t x288 = 3LLU;
	volatile uint64_t t48 = 11202LLU;

	t48 = ((x285+(x286-x287))*x288);

	if (t48 != 196620LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x293 = 4474575236337110LL;
	int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	static int64_t x296 = INT64_MIN;
	uint64_t t49 = 39709892628805LLU;

	t49 = ((x293+(x294-x295))*x296);

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x297 = INT64_MIN;
	volatile int16_t x298 = -1;
	static uint64_t x299 = 719588LLU;
	volatile int64_t x300 = INT64_MAX;

	t50 = ((x297+(x298-x299))*x300);

	if (t50 != 719589LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x301 = INT32_MIN;
	int16_t x302 = -1;
	static int8_t x303 = INT8_MIN;
	volatile uint64_t x304 = UINT64_MAX;

	t51 = ((x301+(x302-x303))*x304);

	if (t51 != 2147483521LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x305 = 14U;
	volatile uint16_t x306 = UINT16_MAX;
	uint32_t x308 = 9U;
	volatile uint32_t t52 = 85U;

	t52 = ((x305+(x306-x307))*x308);

	if (t52 != 126U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x309 = 0;
	static uint8_t x310 = UINT8_MAX;
	uint32_t x311 = 140296U;
	int32_t x312 = 5123;
	uint32_t t53 = 53637891U;

	t53 = ((x309+(x310-x311))*x312);

	if (t53 != 3577537253U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x313 = 1144510775155LLU;
	int8_t x314 = -14;
	int16_t x315 = 1;
	uint64_t t54 = 9583230325LLU;

	t54 = ((x313+(x314-x315))*x316);

	if (t54 != 18446742929198776476LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = INT64_MIN;
	uint64_t x318 = 12356LLU;
	uint64_t x319 = 66549150LLU;
	static int32_t x320 = INT32_MIN;
	volatile uint64_t t55 = 594948763152LLU;

	t55 = ((x317+(x318-x319))*x320);

	if (t55 != 142886677105344512LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x321 = -21;
	int8_t x322 = -1;
	static uint16_t x323 = UINT16_MAX;
	static uint16_t x324 = 178U;
	int32_t t56 = 97449;

	t56 = ((x321+(x322-x323))*x324);

	if (t56 != -11669146) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x325 = -1LL;
	uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MAX;
	int32_t x328 = 76398854;
	int64_t t57 = 41LL;

	t57 = ((x325+(x326-x327))*x328);

	if (t57 != 9702654458LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x329 = 1185U;
	uint32_t x330 = 0U;
	static int8_t x332 = INT8_MIN;
	volatile uint32_t t58 = 1997U;

	t58 = ((x329+(x330-x331))*x332);

	if (t58 != 101843200U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 200107448126LLU;
	volatile int32_t x340 = INT32_MIN;
	volatile uint64_t t59 = 2932565619LLU;

	t59 = ((x337+(x338-x339))*x340);

	if (t59 != 5452288631676862464LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x341 = INT8_MIN;
	uint32_t x342 = 11932U;
	uint8_t x344 = UINT8_MAX;
	uint32_t t60 = 46U;

	t60 = ((x341+(x342-x343))*x344);

	if (t60 != 2150493668U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x346 = 13746722317585LLU;
	static int32_t x347 = -1;
	uint64_t x348 = 62648LLU;
	volatile uint64_t t61 = 11691445632645246LLU;

	t61 = ((x345+(x346-x347))*x348);

	if (t61 != 861204659864831480LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x349 = INT16_MAX;
	volatile int8_t x350 = -30;
	int32_t x352 = INT32_MAX;
	static volatile uint64_t t62 = 427584975LLU;

	t62 = ((x349+(x350-x351))*x352);

	if (t62 != 70297877184545LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x353 = 772U;
	uint8_t x354 = 0U;
	int64_t x355 = -1LL;
	volatile int64_t t63 = -12LL;

	t63 = ((x353+(x354-x355))*x356);

	if (t63 != 1660004859131LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x357 = -15597LL;
	uint8_t x358 = 4U;
	uint8_t x359 = 115U;
	int8_t x360 = INT8_MIN;
	volatile int64_t t64 = 12310856568036LL;

	t64 = ((x357+(x358-x359))*x360);

	if (t64 != 2010624LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x365 = INT8_MIN;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	uint32_t x368 = 19793U;

	t65 = ((x365+(x366-x367))*x368);

	if (t65 != 5047215U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x371 = -1LL;
	int64_t x372 = 2514LL;
	int64_t t66 = 189352562397264767LL;

	t66 = ((x369+(x370-x371))*x372);

	if (t66 != -82698030LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x373 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;
	uint64_t t67 = 359086896405347549LLU;

	t67 = ((x373+(x374-x375))*x376);

	if (t67 != 501010LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x381 = 182196146756360192LLU;
	volatile uint32_t x382 = 66267247U;
	int8_t x383 = -1;
	uint32_t x384 = 84951829U;
	uint64_t t68 = 54719170204036061LLU;

	t68 = ((x381+(x382-x383))*x384);

	if (t68 != 7720336150653770032LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x389 = UINT16_MAX;
	uint64_t x390 = 29568119336149006LLU;
	int8_t x391 = -47;
	volatile uint64_t x392 = 38766420LLU;

	t69 = ((x389+(x390-x391))*x392);

	if (t69 != 6349545651810219952LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x397 = INT8_MIN;
	int16_t x400 = -491;

	t70 = ((x397+(x398-x399))*x400);

	if (t70 != -16026240) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x413 = INT8_MIN;
	int8_t x414 = -1;
	int16_t x416 = INT16_MIN;

	t71 = ((x413+(x414-x415))*x416);

	if (t71 != 9306112) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x417 = UINT8_MAX;
	int8_t x418 = INT8_MIN;
	static int8_t x419 = INT8_MAX;
	static volatile int32_t t72 = -149483;

	t72 = ((x417+(x418-x419))*x420);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x425 = -1;
	volatile int16_t x426 = INT16_MAX;
	uint8_t x427 = UINT8_MAX;

	t73 = ((x425+(x426-x427))*x428);

	if (t73 != -162555LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = -1;
	uint8_t x432 = 0U;
	volatile int64_t t74 = 708LL;

	t74 = ((x429+(x430-x431))*x432);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x433 = -1;
	static int8_t x434 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	static uint64_t t75 = 5834080LLU;

	t75 = ((x433+(x434-x435))*x436);

	if (t75 != 4194304LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x437 = -14;
	int32_t x438 = -188773830;
	uint8_t x439 = 13U;
	int8_t x440 = 0;
	static int32_t t76 = 1;

	t76 = ((x437+(x438-x439))*x440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x449 = 905635161143LLU;
	int16_t x450 = INT16_MAX;
	int16_t x451 = INT16_MIN;
	static int16_t x452 = INT16_MIN;
	volatile uint64_t t77 = 384895228331285255LLU;

	t77 = ((x449+(x450-x451))*x452);

	if (t77 != 18417068218601766912LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x453 = 1914U;
	int8_t x455 = -1;
	int32_t x456 = 1316601;
	volatile uint32_t t78 = 45U;

	t78 = ((x453+(x454-x455))*x456);

	if (t78 != 2688499242U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x461 = 8084336992901LL;
	uint8_t x462 = 1U;
	static uint64_t x464 = 61320093315126LLU;

	t79 = ((x461+(x462-x463))*x464);

	if (t79 != 14086533833953259666LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x473 = INT64_MIN;
	uint64_t x474 = UINT64_MAX;
	volatile int8_t x475 = INT8_MIN;
	volatile uint64_t t80 = 1LLU;

	t80 = ((x473+(x474-x475))*x476);

	if (t80 != 9223372149526213533LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x481 = 600792206U;
	uint8_t x482 = 45U;
	volatile uint8_t x483 = UINT8_MAX;
	uint32_t t81 = 418564389U;

	t81 = ((x481+(x482-x483))*x484);

	if (t81 != 3694175300U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x493 = 9744;
	volatile int64_t x494 = -1LL;
	int32_t x495 = -1;
	int64_t t82 = -2LL;

	t82 = ((x493+(x494-x495))*x496);

	if (t82 != 1237488LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x497 = -1;
	volatile uint64_t x498 = UINT64_MAX;
	static int16_t x499 = -14;
	volatile int8_t x500 = -6;
	volatile uint64_t t83 = 61LLU;

	t83 = ((x497+(x498-x499))*x500);

	if (t83 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x501 = 704;
	int8_t x502 = INT8_MAX;
	uint16_t x503 = UINT16_MAX;
	volatile int32_t t84 = 35;

	t84 = ((x501+(x502-x503))*x504);

	if (t84 != -129408) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x509 = UINT8_MAX;

	t85 = ((x509+(x510-x511))*x512);

	if (t85 != -29491LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x513 = -1;
	volatile int32_t x514 = INT32_MIN;
	int32_t x515 = INT32_MIN;
	volatile uint8_t x516 = 21U;
	volatile int32_t t86 = 59576;

	t86 = ((x513+(x514-x515))*x516);

	if (t86 != -21) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x517 = 110654561958944097LLU;
	volatile uint64_t x518 = UINT64_MAX;
	int8_t x519 = 2;
	uint8_t x520 = 1U;
	volatile uint64_t t87 = 3669LLU;

	t87 = ((x517+(x518-x519))*x520);

	if (t87 != 110654561958944094LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x521 = -1;
	int16_t x523 = INT16_MIN;
	static int16_t x524 = 110;
	static int32_t t88 = -25883222;

	t88 = ((x521+(x522-x523))*x524);

	if (t88 != 3604480) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x529 = 58870LLU;
	int8_t x530 = INT8_MAX;
	int8_t x531 = -1;
	static int16_t x532 = 6630;
	uint64_t t89 = 81316LLU;

	t89 = ((x529+(x530-x531))*x532);

	if (t89 != 391156740LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x537 = INT16_MIN;
	int64_t x538 = -936375966850816LL;
	volatile int16_t x539 = 42;
	int8_t x540 = INT8_MIN;
	volatile int64_t t90 = 32189LL;

	t90 = ((x537+(x538-x539))*x540);

	if (t90 != 119856123761104128LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x541 = 5017;
	int32_t x542 = INT32_MIN;
	int8_t x543 = -1;
	volatile int64_t x544 = -1LL;
	int64_t t91 = 232640670972710LL;

	t91 = ((x541+(x542-x543))*x544);

	if (t91 != 2147478630LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x546 = 8U;
	int16_t x547 = INT16_MIN;
	int64_t x548 = 18330099372LL;
	volatile int64_t t92 = -2780677637472LL;

	t92 = ((x545+(x546-x547))*x548);

	if (t92 != 602858638245708LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x549 = UINT64_MAX;
	int32_t x550 = 35195;
	volatile uint8_t x551 = UINT8_MAX;
	uint32_t x552 = UINT32_MAX;
	volatile uint64_t t93 = 3LLU;

	t93 = ((x549+(x550-x551))*x552);

	if (t93 != 150061862320005LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x553 = INT16_MIN;
	uint16_t x554 = 1017U;
	int32_t x555 = -24568;
	uint64_t x556 = 39979758525LLU;
	volatile uint64_t t94 = 89LLU;

	t94 = ((x553+(x554-x555))*x556);

	if (t94 != 18446456899104066541LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x566 = -5163;
	static int64_t x567 = -1LL;
	static int16_t x568 = 1;
	int64_t t95 = -135948735292824509LL;

	t95 = ((x565+(x566-x567))*x568);

	if (t95 != -5163LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x581 = INT16_MAX;
	static uint8_t x582 = UINT8_MAX;
	int32_t x583 = INT32_MAX;
	static uint64_t x584 = 58189941539541130LLU;
	volatile uint64_t t96 = 4080725512776540598LLU;

	t96 = ((x581+(x582-x583))*x584);

	if (t96 != 7361682590641584502LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x589 = INT32_MIN;
	uint64_t x590 = UINT64_MAX;
	int8_t x591 = -1;
	uint64_t x592 = UINT64_MAX;
	uint64_t t97 = 258511496203LLU;

	t97 = ((x589+(x590-x591))*x592);

	if (t97 != 2147483648LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x593 = -1LL;
	uint8_t x594 = 15U;
	int32_t x595 = INT32_MAX;
	static int64_t t98 = 7382055LL;

	t98 = ((x593+(x594-x595))*x596);

	if (t98 != -38654705394LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x598 = 27U;
	int64_t x599 = -2962287258LL;
	int16_t x600 = INT16_MIN;
	static volatile int64_t t99 = 7053373LL;

	t99 = ((x597+(x598-x599))*x600);

	if (t99 != -97249402847232LL) { NG(); } else { ; }
	
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

