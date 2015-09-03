#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 123188809250842LLU;
int64_t x5 = INT64_MIN;
int32_t x7 = INT32_MAX;
static int32_t x13 = -1;
static int32_t x14 = -1;
static int8_t x22 = -4;
int64_t t5 = 11321653LL;
uint64_t x29 = UINT64_MAX;
int8_t x39 = INT8_MAX;
uint32_t x40 = 35636U;
static volatile uint32_t t9 = 1309702033U;
volatile int64_t x47 = INT64_MAX;
uint8_t x57 = UINT8_MAX;
volatile uint32_t t13 = 11168U;
uint32_t t14 = 1300922U;
int32_t x66 = 145381;
uint32_t x68 = 372U;
volatile int32_t x72 = -1;
int64_t t16 = -889626119LL;
int8_t x77 = -1;
uint64_t x81 = UINT64_MAX;
uint64_t x82 = 29743LLU;
int16_t x84 = -888;
int16_t x86 = INT16_MIN;
volatile int64_t t23 = 1398349793391605LL;
int32_t x105 = INT32_MIN;
volatile int16_t x106 = INT16_MIN;
int8_t x113 = -1;
volatile int32_t t25 = -44;
int32_t x128 = -3;
static volatile uint64_t t29 = 271061LLU;
int32_t x137 = INT32_MIN;
volatile uint32_t x141 = 3837U;
volatile int16_t x143 = INT16_MIN;
int8_t x145 = INT8_MIN;
int32_t x160 = -103;
uint16_t x166 = 6U;
static int32_t x167 = INT32_MAX;
int8_t x171 = 4;
int16_t x175 = -1;
uint64_t t37 = 59517327167LLU;
uint64_t x187 = 170766LLU;
volatile int32_t x189 = INT32_MIN;
volatile int8_t x190 = -1;
int8_t x202 = INT8_MIN;
volatile int8_t x214 = 39;
int32_t x224 = INT32_MAX;
volatile int32_t t48 = 115;
static int32_t x230 = INT32_MIN;
int8_t x244 = -1;
static volatile uint32_t t52 = 0U;
int32_t x254 = -24606;
volatile int32_t t54 = 39;
int32_t t55 = -115667;
static uint64_t x281 = UINT64_MAX;
static volatile int64_t x286 = 201LL;
uint8_t x287 = 44U;
volatile int64_t t59 = 1289LL;
int32_t x291 = 1;
uint32_t t60 = 18303345U;
volatile uint8_t x300 = 15U;
volatile int32_t t64 = 22460475;
volatile int16_t x313 = INT16_MAX;
uint8_t x319 = 1U;
static int8_t x326 = INT8_MIN;
int64_t t70 = -609984122399863348LL;
static uint16_t x341 = 2U;
volatile int16_t x342 = INT16_MIN;
int16_t x348 = 112;
static int32_t t73 = 77055;
volatile uint64_t x351 = 3LLU;
volatile int8_t x352 = -1;
volatile int16_t x354 = INT16_MIN;
int32_t t75 = 25401300;
static int64_t x359 = 14282637LL;
int32_t x360 = INT32_MAX;
int64_t t76 = 659140860273488141LL;
static int32_t x363 = INT32_MAX;
uint64_t x369 = 1206LLU;
int16_t x378 = INT16_MIN;
static int64_t t81 = 688963515694159LL;
volatile int64_t t82 = -52671039151540LL;
uint64_t x387 = 228723LLU;
static volatile uint32_t x389 = UINT32_MAX;
int32_t x393 = INT32_MAX;
static int16_t x396 = -2;
static uint32_t x398 = 26U;
volatile int64_t t86 = 11436117LL;
int16_t x420 = -1;
volatile int32_t t90 = 60;
int8_t x424 = INT8_MAX;
int64_t t92 = -102446669LL;
int64_t x440 = INT64_MIN;
uint8_t x449 = UINT8_MAX;
volatile int16_t x452 = INT16_MAX;
int8_t x453 = INT8_MAX;
int64_t x456 = INT64_MAX;
int64_t t97 = -20242628592336LL;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 651448LLU;
	static uint16_t x3 = UINT16_MAX;
	volatile int16_t x4 = INT16_MAX;

	t0 = ((x1^(x2-x3))%x4);

	if (t0 != 28759LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	int64_t x8 = INT64_MAX;
	int64_t t1 = -37431LL;

	t1 = ((x5^(x6-x7))%x8);

	if (t1 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -29822864;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 47U;
	int64_t x12 = INT64_MIN;
	static int64_t t2 = 953468620LL;

	t2 = ((x9^(x10-x11))%x12);

	if (t2 != 29822753LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x15 = UINT32_MAX;
	static int16_t x16 = -1;
	volatile uint32_t t3 = 234462853U;

	t3 = ((x13^(x14-x15))%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	uint32_t x18 = UINT32_MAX;
	int32_t x19 = INT32_MIN;
	static volatile int64_t x20 = INT64_MIN;
	int64_t t4 = 2689010000LL;

	t4 = ((x17^(x18-x19))%x20);

	if (t4 != 2147483775LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	uint16_t x23 = 44U;
	static volatile int64_t x24 = -1LL;

	t5 = ((x21^(x22-x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static uint32_t x26 = UINT32_MAX;
	int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -268263052281488016LL;

	t6 = ((x25^(x26-x27))%x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	int64_t x31 = 291436338961LL;
	int64_t x32 = 29299117894320754LL;
	volatile uint64_t t7 = 909442754695775639LLU;

	t7 = ((x29^(x30-x31))%x32);

	if (t7 != 291436338961LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 65433LL;
	int8_t x34 = INT8_MIN;
	int64_t x35 = -101995137401178LL;
	static int64_t x36 = INT64_MIN;
	int64_t t8 = 316550568089167592LL;

	t8 = ((x33^(x34-x35))%x36);

	if (t8 != 101995137466179LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int16_t x38 = INT16_MIN;

	t9 = ((x37^(x38-x39))%x40);

	if (t9 != 32894U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 1778LLU;
	int32_t x42 = INT32_MAX;
	uint8_t x43 = UINT8_MAX;
	uint32_t x44 = 1398120627U;
	uint64_t t10 = 10540115519004LLU;

	t10 = ((x41^(x42-x43))%x44);

	if (t10 != 749361471LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int16_t x46 = -1;
	int8_t x48 = INT8_MIN;
	static int64_t t11 = 26880483LL;

	t11 = ((x45^(x46-x47))%x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = -1016LL;
	volatile uint32_t x51 = UINT32_MAX;
	int16_t x52 = INT16_MIN;
	static volatile int64_t t12 = 15497242903280101LL;

	t12 = ((x49^(x50-x51))%x52);

	if (t12 != 31753LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = -7;
	int16_t x59 = -14;
	uint32_t x60 = 1934U;

	t13 = ((x57^(x58-x59))%x60);

	if (t13 != 248U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MIN;
	static int16_t x63 = 124;
	uint32_t x64 = 4U;

	t14 = ((x61^(x62-x63))%x64);

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 56;
	int32_t x67 = -1;
	volatile uint32_t t15 = 4U;

	t15 = ((x65^(x66-x67))%x68);

	if (t15 != 294U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 25967;
	int64_t x70 = 228940259232LL;
	int32_t x71 = 304;

	t16 = ((x69^(x70-x71))%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -5;
	static int8_t x74 = INT8_MAX;
	int16_t x75 = INT16_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = 15595;

	t17 = ((x73^(x74-x75))%x76);

	if (t17 != 250) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = -1LL;
	int16_t x79 = INT16_MIN;
	uint8_t x80 = UINT8_MAX;
	static volatile int64_t t18 = 693717757062912059LL;

	t18 = ((x77^(x78-x79))%x80);

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x83 = INT8_MIN;
	static uint64_t t19 = 27109157LLU;

	t19 = ((x81^(x82-x83))%x84);

	if (t19 != 18446744073709521744LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	static int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	static volatile int32_t t20 = -4388;

	t20 = ((x85^(x86-x87))%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = INT64_MIN;
	static int64_t x90 = INT64_MIN;
	static uint64_t x91 = 79449LLU;
	volatile int64_t x92 = INT64_MAX;
	volatile uint64_t t21 = 14870215361077LLU;

	t21 = ((x89^(x90-x91))%x92);

	if (t21 != 9223372036854696360LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	volatile int64_t x94 = INT64_MIN;
	int32_t x95 = -1;
	int8_t x96 = 8;
	static volatile int64_t t22 = -11949906447791LL;

	t22 = ((x93^(x94-x95))%x96);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x97 = INT16_MIN;
	volatile int64_t x98 = 13LL;
	uint8_t x99 = 9U;
	int16_t x100 = INT16_MAX;

	t23 = ((x97^(x98-x99))%x100);

	if (t23 != -32764LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x107 = -1;
	int64_t x108 = INT64_MIN;
	int64_t t24 = 3708LL;

	t24 = ((x105^(x106-x107))%x108);

	if (t24 != 2147450881LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x114 = INT32_MAX;
	volatile uint8_t x115 = UINT8_MAX;
	int8_t x116 = 4;

	t25 = ((x113^(x114-x115))%x116);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = INT8_MAX;
	volatile int64_t x118 = INT64_MAX;
	uint8_t x119 = 15U;
	volatile int64_t x120 = -34307506040LL;
	volatile int64_t t26 = 137652572525271698LL;

	t26 = ((x117^(x118-x119))%x120);

	if (t26 != 11371158015LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = INT16_MIN;
	volatile int8_t x122 = INT8_MIN;
	static int8_t x123 = -1;
	int16_t x124 = -1;
	int32_t t27 = -1593449;

	t27 = ((x121^(x122-x123))%x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = -13;
	int16_t x126 = INT16_MIN;
	int16_t x127 = 227;
	static int32_t t28 = 908066037;

	t28 = ((x125^(x126-x127))%x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	volatile uint16_t x130 = 7530U;
	uint64_t x131 = 67202759551LLU;
	int16_t x132 = -1;

	t29 = ((x129^(x130-x131))%x132);

	if (t29 != 67202752107LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x138 = -1;
	int8_t x139 = -1;
	int32_t x140 = -1031962951;
	int32_t t30 = -24761784;

	t30 = ((x137^(x138-x139))%x140);

	if (t30 != -83557746) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = -12562471276795LL;
	int64_t x144 = INT64_MIN;
	volatile int64_t t31 = 111147928LL;

	t31 = ((x141^(x142-x143))%x144);

	if (t31 != -12562471247368LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x146 = -7176063LL;
	uint32_t x147 = 5444U;
	int32_t x148 = INT32_MAX;
	volatile int64_t t32 = 0LL;

	t32 = ((x145^(x146-x147))%x148);

	if (t32 != 7181501LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 2351LLU;
	int32_t x154 = -8156187;
	int32_t x155 = INT32_MIN;
	uint16_t x156 = UINT16_MAX;
	volatile uint64_t t33 = 8634LLU;

	t33 = ((x153^(x154-x155))%x156);

	if (t33 != 590LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = INT16_MAX;
	uint8_t x158 = 7U;
	volatile int32_t x159 = -14;
	int32_t t34 = 143693;

	t34 = ((x157^(x158-x159))%x160);

	if (t34 != 95) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = 0;
	int32_t x168 = INT32_MAX;
	int32_t t35 = -879;

	t35 = ((x165^(x166-x167))%x168);

	if (t35 != -2147483641) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x169 = 0U;
	int16_t x170 = INT16_MAX;
	static int8_t x172 = -1;
	volatile int32_t t36 = 6;

	t36 = ((x169^(x170-x171))%x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 4165462014642049728LLU;
	int8_t x174 = -1;
	int8_t x176 = 6;

	t37 = ((x173^(x174-x175))%x176);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x181 = -8909;
	int32_t x182 = -1;
	int32_t x183 = -1;
	static uint32_t x184 = 16U;
	static volatile uint32_t t38 = 398U;

	t38 = ((x181^(x182-x183))%x184);

	if (t38 != 3U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	int32_t x188 = 43661561;
	uint64_t t39 = 413LLU;

	t39 = ((x185^(x186-x187))%x188);

	if (t39 != 36707276LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x191 = INT64_MAX;
	int64_t x192 = INT64_MAX;
	int64_t t40 = 546417LL;

	t40 = ((x189^(x190-x191))%x192);

	if (t40 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -4;
	int64_t x198 = INT64_MAX;
	int8_t x199 = 13;
	volatile int32_t x200 = INT32_MIN;
	volatile int64_t t41 = -1637415498555264LL;

	t41 = ((x197^(x198-x199))%x200);

	if (t41 != -2147483634LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = 117347;
	static uint16_t x203 = 60U;
	uint16_t x204 = 265U;
	static int32_t t42 = 791596591;

	t42 = ((x201^(x202-x203))%x204);

	if (t42 != -70) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -1LL;
	int16_t x206 = -1;
	static volatile int64_t x207 = -1LL;
	int64_t x208 = INT64_MIN;
	static int64_t t43 = -205172657949LL;

	t43 = ((x205^(x206-x207))%x208);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = -1;
	static uint8_t x210 = 25U;
	int32_t x211 = -9376054;
	int32_t x212 = 1056044884;
	int32_t t44 = -3760;

	t44 = ((x209^(x210-x211))%x212);

	if (t44 != -9376080) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	volatile uint32_t x215 = UINT32_MAX;
	volatile int32_t x216 = INT32_MIN;
	static uint32_t t45 = 2010019347U;

	t45 = ((x213^(x214-x215))%x216);

	if (t45 != 2147483560U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MAX;
	uint32_t x219 = 18U;
	uint64_t x220 = 523670106632176LLU;
	volatile uint64_t t46 = 52213005LLU;

	t46 = ((x217^(x218-x219))%x220);

	if (t46 != 4294934637LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = 260058282321LLU;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MAX;
	uint64_t t47 = 8172506866822LLU;

	t47 = ((x221^(x222-x223))%x224);

	if (t47 != 1934752201LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = -1;
	volatile uint8_t x226 = 1U;
	static int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;

	t48 = ((x225^(x226-x227))%x228);

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x229 = 26633U;
	uint64_t x231 = 182291374292771815LLU;
	uint64_t x232 = 6LLU;
	volatile uint64_t t49 = 382661635619LLU;

	t49 = ((x229^(x230-x231))%x232);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x233 = 0;
	volatile int16_t x234 = -1;
	int16_t x235 = 1909;
	volatile uint8_t x236 = UINT8_MAX;
	int32_t t50 = -76813;

	t50 = ((x233^(x234-x235))%x236);

	if (t50 != -125) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x237 = INT32_MIN;
	volatile uint32_t x238 = 9U;
	static volatile uint32_t x239 = 29916U;
	int32_t x240 = INT32_MIN;
	static uint32_t t51 = 1315758U;

	t51 = ((x237^(x238-x239))%x240);

	if (t51 != 2147453741U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x241 = 13U;
	uint8_t x242 = UINT8_MAX;
	volatile uint8_t x243 = 27U;

	t52 = ((x241^(x242-x243))%x244);

	if (t52 != 233U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = -1;
	volatile uint8_t x250 = 3U;
	int8_t x251 = 23;
	int16_t x252 = -1;
	static volatile int32_t t53 = 7;

	t53 = ((x249^(x250-x251))%x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x253 = UINT8_MAX;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = -1;

	t54 = ((x253^(x254-x255))%x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x261 = 11059U;
	int8_t x262 = -5;
	int16_t x263 = 93;
	int16_t x264 = INT16_MIN;

	t55 = ((x261^(x262-x263))%x264);

	if (t55 != -11091) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x265 = 0LL;
	int32_t x266 = -1187;
	int16_t x267 = INT16_MIN;
	int8_t x268 = -35;
	volatile int64_t t56 = -795643791LL;

	t56 = ((x265^(x266-x267))%x268);

	if (t56 != 11LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x273 = -2;
	int64_t x274 = 335818LL;
	int8_t x275 = 1;
	int64_t x276 = INT64_MIN;
	int64_t t57 = -51475764320854203LL;

	t57 = ((x273^(x274-x275))%x276);

	if (t57 != -335817LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x282 = 48LLU;
	static uint64_t x283 = UINT64_MAX;
	static int32_t x284 = -1;
	volatile uint64_t t58 = 34299867404645459LLU;

	t58 = ((x281^(x282-x283))%x284);

	if (t58 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x285 = -1268054LL;
	int64_t x288 = 188646767LL;

	t59 = ((x285^(x286-x287))%x288);

	if (t59 != -1268169LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	volatile uint32_t x292 = UINT32_MAX;

	t60 = ((x289^(x290-x291))%x292);

	if (t60 != 4294967040U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = 887715788LLU;
	uint64_t x294 = 43554822LLU;
	uint8_t x295 = 30U;
	int64_t x296 = -4004384174LL;
	uint64_t t61 = 96115858LLU;

	t61 = ((x293^(x294-x295))%x296);

	if (t61 != 913432612LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	static int64_t x299 = INT64_MAX;
	volatile int64_t t62 = -658582244531LL;

	t62 = ((x297^(x298-x299))%x300);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x301 = INT32_MIN;
	static volatile int8_t x302 = INT8_MAX;
	int8_t x303 = -1;
	int8_t x304 = INT8_MIN;
	int32_t t63 = 45876294;

	t63 = ((x301^(x302-x303))%x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = -258466437;
	int16_t x307 = INT16_MAX;
	int32_t x308 = -4;

	t64 = ((x305^(x306-x307))%x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = -1991;
	int16_t x310 = -1;
	int8_t x311 = 1;
	int16_t x312 = INT16_MIN;
	int32_t t65 = 404021;

	t65 = ((x309^(x310-x311))%x312);

	if (t65 != 1991) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x314 = 7LLU;
	volatile int16_t x315 = INT16_MAX;
	volatile int16_t x316 = -1;
	uint64_t t66 = 383003819756926887LLU;

	t66 = ((x313^(x314-x315))%x316);

	if (t66 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = INT32_MIN;
	static uint16_t x318 = UINT16_MAX;
	int64_t x320 = -11LL;
	int64_t t67 = -66815067191724LL;

	t67 = ((x317^(x318-x319))%x320);

	if (t67 != -6LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x327 = -385494767786354688LL;
	int8_t x328 = INT8_MIN;
	volatile int64_t t68 = -2441429LL;

	t68 = ((x325^(x326-x327))%x328);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -1LL;
	volatile int64_t x330 = 87LL;
	int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	volatile int64_t t69 = 487192LL;

	t69 = ((x329^(x330-x331))%x332);

	if (t69 != -216LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x333 = INT64_MAX;
	static int16_t x334 = -1;
	static uint8_t x335 = 2U;
	uint32_t x336 = 990510U;

	t70 = ((x333^(x334-x335))%x336);

	if (t70 != -958206LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	static volatile int32_t x339 = INT32_MIN;
	volatile uint64_t x340 = 486645608798667LLU;
	static volatile uint64_t t71 = 726020384282319085LLU;

	t71 = ((x337^(x338-x339))%x340);

	if (t71 != 442272196078853LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x343 = INT64_MIN;
	uint32_t x344 = UINT32_MAX;
	int64_t t72 = -1LL;

	t72 = ((x341^(x342-x343))%x344);

	if (t72 != 2147450882LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MAX;
	volatile uint8_t x346 = 109U;
	uint16_t x347 = UINT16_MAX;

	t73 = ((x345^(x346-x347))%x348);

	if (t73 != -111) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MAX;
	static volatile uint64_t t74 = 202680630149120LLU;

	t74 = ((x349^(x350-x351))%x352);

	if (t74 != 4294934531LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x355 = INT8_MIN;
	int8_t x356 = 1;

	t75 = ((x353^(x354-x355))%x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = -1;

	t76 = ((x357^(x358-x359))%x360);

	if (t76 != 14258290LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = 117988;
	volatile uint16_t x364 = 21U;
	volatile int32_t t77 = 1466349;

	t77 = ((x361^(x362-x363))%x364);

	if (t77 != 11) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x365 = 2694U;
	volatile int64_t x366 = INT64_MIN;
	static int64_t x367 = -2935902730092625LL;
	static int32_t x368 = -3308;
	static volatile int64_t t78 = 212503822537638LL;

	t78 = ((x365^(x366-x367))%x368);

	if (t78 != -2357LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x370 = 5614411U;
	static uint16_t x371 = 999U;
	static uint8_t x372 = 11U;
	volatile uint64_t t79 = 4784099LLU;

	t79 = ((x369^(x370-x371))%x372);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 62689LLU;
	static uint64_t x374 = 11457727131LLU;
	int16_t x375 = INT16_MIN;
	uint8_t x376 = UINT8_MAX;
	volatile uint64_t t80 = 211603470842113894LLU;

	t80 = ((x373^(x374-x375))%x376);

	if (t80 != 149LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = -104;
	int64_t x379 = INT64_MIN;
	uint8_t x380 = 88U;

	t81 = ((x377^(x378-x379))%x380);

	if (t81 != -80LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x381 = -1LL;
	static int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	uint8_t x384 = 46U;

	t82 = ((x381^(x382-x383))%x384);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x385 = INT64_MIN;
	uint8_t x386 = UINT8_MAX;
	uint64_t x388 = 42412LLU;
	static volatile uint64_t t83 = 3066059736LLU;

	t83 = ((x385^(x386-x387))%x388);

	if (t83 != 16508LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x390 = 0U;
	uint16_t x391 = 11736U;
	int16_t x392 = INT16_MIN;
	uint32_t t84 = 66102653U;

	t84 = ((x389^(x390-x391))%x392);

	if (t84 != 11735U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x394 = 5552197516600046LLU;
	int64_t x395 = INT64_MIN;
	volatile uint64_t t85 = 1780LLU;

	t85 = ((x393^(x394-x395))%x396);

	if (t85 != 9228924234616331537LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x397 = 0;
	int32_t x399 = INT32_MAX;
	int64_t x400 = 119LL;

	t86 = ((x397^(x398-x399))%x400);

	if (t86 != 36LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = INT32_MIN;
	static int16_t x402 = INT16_MIN;
	static int64_t x403 = INT64_MIN;
	uint8_t x404 = UINT8_MAX;
	static volatile int64_t t87 = -708701970927LL;

	t87 = ((x401^(x402-x403))%x404);

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = -1421;
	volatile int8_t x406 = INT8_MIN;
	uint16_t x407 = 0U;
	uint16_t x408 = 1U;
	volatile int32_t t88 = -33209;

	t88 = ((x405^(x406-x407))%x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = INT64_MIN;
	uint32_t x410 = UINT32_MAX;
	uint64_t x411 = UINT64_MAX;
	static int8_t x412 = -3;
	uint64_t t89 = 1037834556LLU;

	t89 = ((x409^(x410-x411))%x412);

	if (t89 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x417 = INT8_MIN;
	volatile int8_t x418 = -41;
	int32_t x419 = 19815;

	t90 = ((x417^(x418-x419))%x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = -1LL;
	int8_t x422 = INT8_MAX;
	int32_t x423 = -16022788;
	int64_t t91 = 1972010LL;

	t91 = ((x421^(x422-x423))%x424);

	if (t91 != -88LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = 1;
	static volatile int64_t x430 = -1363104590960674LL;
	volatile int16_t x431 = -1;
	uint16_t x432 = UINT16_MAX;

	t92 = ((x429^(x430-x431))%x432);

	if (t92 != -62674LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = 400609;
	int32_t x438 = INT32_MIN;
	static volatile int16_t x439 = -1;
	int64_t t93 = 0LL;

	t93 = ((x437^(x438-x439))%x440);

	if (t93 != -2147083040LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = -1LL;
	uint32_t x442 = 88051U;
	uint32_t x443 = UINT32_MAX;
	uint16_t x444 = 32087U;
	volatile int64_t t94 = -314036377476558514LL;

	t94 = ((x441^(x442-x443))%x444);

	if (t94 != -23879LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x445 = INT32_MIN;
	int32_t x446 = INT32_MIN;
	static uint32_t x447 = 107019U;
	static volatile int32_t x448 = INT32_MIN;
	volatile uint32_t t95 = 149725108U;

	t95 = ((x445^(x446-x447))%x448);

	if (t95 != 2147376629U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MAX;
	volatile int32_t t96 = 878676280;

	t96 = ((x449^(x450-x451))%x452);

	if (t96 != -131) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x454 = -1;
	volatile uint32_t x455 = UINT32_MAX;

	t97 = ((x453^(x454-x455))%x456);

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x457 = UINT32_MAX;
	static int64_t x458 = INT64_MIN;
	static int64_t x459 = INT64_MIN;
	int32_t x460 = -53736;
	int64_t t98 = 15403LL;

	t98 = ((x457^(x458-x459))%x460);

	if (t98 != 10023LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x461 = INT8_MAX;
	int16_t x462 = INT16_MIN;
	uint32_t x463 = UINT32_MAX;
	int32_t x464 = -124798;
	volatile uint32_t t99 = 2091289U;

	t99 = ((x461^(x462-x463))%x464);

	if (t99 != 92156U) { NG(); } else { ; }
	
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

