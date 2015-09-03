#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 18;
uint8_t x8 = UINT8_MAX;
static int32_t t1 = -595386503;
volatile int64_t x10 = 26LL;
int32_t x11 = INT32_MAX;
int16_t x12 = INT16_MIN;
int32_t x32 = -1;
static int8_t x39 = -1;
static int64_t x45 = INT64_MAX;
int64_t x50 = 2219306646193550LL;
int8_t x58 = -1;
int16_t x59 = INT16_MAX;
uint16_t x60 = UINT16_MAX;
uint16_t x66 = 6080U;
int64_t x76 = INT64_MIN;
int32_t t12 = -1006239587;
static int32_t t13 = 130035;
int8_t x90 = -1;
uint32_t x92 = 0U;
int8_t x99 = -1;
volatile int32_t t17 = -35;
volatile uint16_t x101 = UINT16_MAX;
uint32_t x103 = 29U;
uint64_t x105 = 134539663750719869LLU;
uint32_t x106 = UINT32_MAX;
int8_t x114 = -6;
static uint8_t x127 = 18U;
volatile int32_t x131 = -1;
int16_t x142 = INT16_MIN;
volatile int64_t x144 = INT64_MIN;
uint32_t x152 = 1838528U;
int32_t x155 = -1;
static int32_t x160 = INT32_MIN;
int32_t t30 = -7571;
int8_t x167 = INT8_MAX;
uint16_t x173 = 31016U;
int8_t x174 = INT8_MIN;
static int64_t x181 = 100973347595155LL;
uint32_t x187 = 377549U;
int64_t x191 = -1LL;
static int64_t x192 = INT64_MAX;
int32_t t37 = 2;
static uint32_t x197 = 90U;
int64_t x198 = 7220690LL;
static int32_t x206 = -1;
volatile int8_t x208 = -1;
int32_t t40 = -263349354;
int16_t x215 = INT16_MIN;
int8_t x218 = -1;
int32_t t42 = 371718987;
volatile uint64_t x235 = 29553170LLU;
static int16_t x239 = -20;
int32_t x240 = -353;
int32_t x244 = -1;
volatile int16_t x251 = -122;
volatile uint32_t x253 = 3099588U;
volatile int16_t x256 = INT16_MIN;
uint16_t x265 = UINT16_MAX;
int16_t x266 = INT16_MIN;
static volatile int32_t t50 = 779574682;
static int32_t x269 = INT32_MIN;
int16_t x271 = -17;
int64_t x276 = -28226016LL;
volatile int16_t x281 = INT16_MIN;
int64_t x282 = -17133101227LL;
volatile uint16_t x299 = UINT16_MAX;
int32_t x300 = -159;
volatile int32_t x302 = -1;
int16_t x308 = INT16_MIN;
static volatile int32_t t60 = -14964314;
volatile int8_t x323 = INT8_MAX;
int64_t x324 = INT64_MIN;
uint32_t x330 = UINT32_MAX;
volatile int8_t x332 = INT8_MAX;
int16_t x335 = INT16_MIN;
uint32_t x348 = UINT32_MAX;
volatile uint16_t x351 = UINT16_MAX;
static int8_t x352 = -1;
static int32_t t65 = 1;
int16_t x354 = INT16_MAX;
int8_t x358 = -55;
int16_t x359 = INT16_MIN;
int16_t x360 = INT16_MIN;
int32_t x363 = -1;
uint8_t x372 = UINT8_MAX;
int32_t x373 = 210;
volatile int8_t x386 = -3;
uint8_t x388 = UINT8_MAX;
volatile int32_t t73 = -4180;
int8_t x392 = 12;
static int16_t x403 = INT16_MAX;
int16_t x406 = INT16_MAX;
uint32_t x409 = 35216888U;
int8_t x410 = 2;
int32_t x417 = -1;
int64_t x427 = -1LL;
static int32_t t79 = -40386124;
static int8_t x429 = 2;
static int16_t x431 = INT16_MIN;
static volatile int32_t t80 = 172;
uint64_t x435 = 1450002906402954322LLU;
static int8_t x444 = 0;
int32_t x449 = 7766;
int64_t x451 = 2455501LL;
volatile int8_t x452 = INT8_MIN;
int8_t x453 = INT8_MAX;
volatile uint32_t x465 = 184U;
int16_t x471 = INT16_MIN;
int32_t t90 = -4497;
volatile int64_t x482 = INT64_MAX;
uint64_t x484 = UINT64_MAX;
int32_t x492 = INT32_MIN;
uint32_t x493 = UINT32_MAX;
uint64_t x501 = 30311706LLU;
int16_t x503 = -1;
volatile int32_t t96 = -589991;
int32_t x513 = -1;
int32_t t97 = -1138;
static volatile int32_t t98 = 6775777;


void f0(void) {
	int16_t x1 = -1;
	volatile uint16_t x2 = 12U;
	static volatile int32_t x3 = 43528201;
	int32_t t0 = 114890;

	t0 = ((x1^(x2*x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int8_t x6 = INT8_MAX;
	uint32_t x7 = 29U;

	t1 = ((x5^(x6*x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static volatile int32_t t2 = 42;

	t2 = ((x9^(x10*x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 202488761U;
	static int32_t x26 = 445173957;
	volatile int16_t x27 = -2;
	int32_t x28 = INT32_MAX;
	static volatile int32_t t3 = -1;

	t3 = ((x25^(x26*x27))<=x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x29 = -1;
	volatile uint16_t x30 = UINT16_MAX;
	int64_t x31 = -29LL;
	volatile int32_t t4 = 404422;

	t4 = ((x29^(x30*x31))<=x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = 772253504LL;
	int16_t x38 = INT16_MIN;
	uint64_t x40 = 419130594005708142LLU;
	static volatile int32_t t5 = 122;

	t5 = ((x37^(x38*x39))<=x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MAX;
	volatile uint8_t x42 = 1U;
	static int8_t x43 = INT8_MAX;
	static uint64_t x44 = 2644871317578347977LLU;
	int32_t t6 = 184354823;

	t6 = ((x41^(x42*x43))<=x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x46 = INT8_MAX;
	static volatile int16_t x47 = -1;
	static uint64_t x48 = 820865633LLU;
	static int32_t t7 = 14349;

	t7 = ((x45^(x46*x47))<=x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 2;
	uint32_t x51 = 0U;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t8 = 440716;

	t8 = ((x49^(x50*x51))<=x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MAX;
	int32_t t9 = -955322679;

	t9 = ((x57^(x58*x59))<=x60);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x61 = 26726U;
	volatile int32_t x62 = -89018;
	static volatile uint32_t x63 = 20U;
	int64_t x64 = INT64_MIN;
	int32_t t10 = -4130996;

	t10 = ((x61^(x62*x63))<=x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x65 = -1;
	int16_t x67 = INT16_MAX;
	uint32_t x68 = 19647U;
	int32_t t11 = -1255;

	t11 = ((x65^(x66*x67))<=x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = -1LL;
	int64_t x75 = INT64_MAX;

	t12 = ((x73^(x74*x75))<=x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x81 = 3969U;
	uint8_t x82 = 108U;
	volatile int8_t x83 = INT8_MIN;
	static int16_t x84 = -129;

	t13 = ((x81^(x82*x83))<=x84);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x85 = 1176;
	int8_t x86 = 7;
	uint64_t x87 = 2015942781LLU;
	uint64_t x88 = 13388394657247227LLU;
	int32_t t14 = -489;

	t14 = ((x85^(x86*x87))<=x88);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x91 = UINT32_MAX;
	int32_t t15 = 74;

	t15 = ((x89^(x90*x91))<=x92);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x93 = -1LL;
	volatile int64_t x94 = -1LL;
	volatile uint32_t x95 = 18232427U;
	int8_t x96 = -1;
	static int32_t t16 = 65;

	t16 = ((x93^(x94*x95))<=x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x97 = -1;
	int16_t x98 = -1;
	uint64_t x100 = 10604203499LLU;

	t17 = ((x97^(x98*x99))<=x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x102 = -756878514;
	uint64_t x104 = 440238177048869746LLU;
	volatile int32_t t18 = 43669;

	t18 = ((x101^(x102*x103))<=x104);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x107 = INT8_MIN;
	static int64_t x108 = -5LL;
	int32_t t19 = 3819890;

	t19 = ((x105^(x106*x107))<=x108);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = 1;
	uint32_t x115 = 63184U;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t20 = 25734;

	t20 = ((x113^(x114*x115))<=x116);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 26571204U;
	int64_t x118 = -1LL;
	int32_t x119 = 25901;
	int16_t x120 = INT16_MIN;
	int32_t t21 = -245;

	t21 = ((x117^(x118*x119))<=x120);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x121 = UINT64_MAX;
	uint8_t x122 = 1U;
	int8_t x123 = -1;
	int64_t x124 = INT64_MAX;
	volatile int32_t t22 = -1;

	t22 = ((x121^(x122*x123))<=x124);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x125 = 1U;
	volatile uint32_t x126 = 611U;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t23 = 50289726;

	t23 = ((x125^(x126*x127))<=x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MAX;
	int64_t x132 = INT64_MAX;
	int32_t t24 = 1594;

	t24 = ((x129^(x130*x131))<=x132);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = -294959001170850LL;
	static int8_t x134 = INT8_MIN;
	uint8_t x135 = UINT8_MAX;
	static volatile uint8_t x136 = 0U;
	static int32_t t25 = 1072;

	t25 = ((x133^(x134*x135))<=x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = -14;
	int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t26 = 0;

	t26 = ((x137^(x138*x139))<=x140);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = INT16_MIN;
	static uint64_t x143 = UINT64_MAX;
	volatile int32_t t27 = 515217846;

	t27 = ((x141^(x142*x143))<=x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 3U;
	static int8_t x150 = -11;
	static int16_t x151 = -89;
	volatile int32_t t28 = -84991059;

	t28 = ((x149^(x150*x151))<=x152);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t29 = 678893809;

	t29 = ((x153^(x154*x155))<=x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = INT64_MAX;
	volatile int8_t x158 = 0;
	volatile int32_t x159 = INT32_MIN;

	t30 = ((x157^(x158*x159))<=x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x165 = 1U;
	static int32_t x166 = -738285;
	uint8_t x168 = 5U;
	int32_t t31 = 25;

	t31 = ((x165^(x166*x167))<=x168);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = 945738LLU;
	int16_t x170 = INT16_MIN;
	volatile int32_t x171 = -1;
	static uint64_t x172 = UINT64_MAX;
	static volatile int32_t t32 = -8;

	t32 = ((x169^(x170*x171))<=x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x175 = UINT16_MAX;
	uint8_t x176 = 2U;
	volatile int32_t t33 = 7;

	t33 = ((x173^(x174*x175))<=x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x182 = 3U;
	volatile uint32_t x183 = 12182U;
	uint8_t x184 = UINT8_MAX;
	int32_t t34 = 725;

	t34 = ((x181^(x182*x183))<=x184);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x185 = INT32_MIN;
	uint64_t x186 = 98599465641LLU;
	uint16_t x188 = 7136U;
	volatile int32_t t35 = -1;

	t35 = ((x185^(x186*x187))<=x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 9528U;
	static uint16_t x190 = 0U;
	volatile int32_t t36 = -6935113;

	t36 = ((x189^(x190*x191))<=x192);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x193 = INT8_MAX;
	volatile uint16_t x194 = 20U;
	volatile int8_t x195 = INT8_MIN;
	int8_t x196 = -1;

	t37 = ((x193^(x194*x195))<=x196);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x199 = -1;
	int8_t x200 = INT8_MIN;
	static int32_t t38 = -1006105084;

	t38 = ((x197^(x198*x199))<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = UINT64_MAX;
	uint16_t x207 = 1U;
	volatile int32_t t39 = -216697;

	t39 = ((x205^(x206*x207))<=x208);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x209 = 437U;
	int16_t x210 = INT16_MIN;
	uint32_t x211 = 13937U;
	uint8_t x212 = 11U;

	t40 = ((x209^(x210*x211))<=x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x213 = 4073523945981LLU;
	static int16_t x214 = INT16_MIN;
	int16_t x216 = 104;
	int32_t t41 = 1;

	t41 = ((x213^(x214*x215))<=x216);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = INT64_MIN;
	static uint32_t x219 = 453U;
	int16_t x220 = INT16_MIN;

	t42 = ((x217^(x218*x219))<=x220);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x221 = 0U;
	volatile uint32_t x222 = 241815668U;
	static uint64_t x223 = UINT64_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t43 = 13876;

	t43 = ((x221^(x222*x223))<=x224);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x225 = 3LL;
	int32_t x226 = INT32_MAX;
	int64_t x227 = 64056877LL;
	volatile int32_t x228 = 57634223;
	int32_t t44 = -2996;

	t44 = ((x225^(x226*x227))<=x228);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x233 = INT64_MIN;
	volatile int16_t x234 = -1;
	uint32_t x236 = 12261022U;
	volatile int32_t t45 = 30362;

	t45 = ((x233^(x234*x235))<=x236);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x237 = -1;
	volatile int64_t x238 = 65517LL;
	int32_t t46 = 519735911;

	t46 = ((x237^(x238*x239))<=x240);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x241 = -1;
	static int64_t x242 = -1LL;
	int32_t x243 = INT32_MIN;
	int32_t t47 = 256527983;

	t47 = ((x241^(x242*x243))<=x244);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x249 = 6790LLU;
	int32_t x250 = 50400;
	static int64_t x252 = 432022257783296508LL;
	volatile int32_t t48 = 16;

	t48 = ((x249^(x250*x251))<=x252);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x254 = 1U;
	int8_t x255 = 36;
	volatile int32_t t49 = -9511;

	t49 = ((x253^(x254*x255))<=x256);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x267 = INT16_MIN;
	int8_t x268 = -8;

	t50 = ((x265^(x266*x267))<=x268);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x270 = UINT8_MAX;
	uint8_t x272 = 84U;
	volatile int32_t t51 = 2;

	t51 = ((x269^(x270*x271))<=x272);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x273 = 10U;
	volatile int16_t x274 = INT16_MIN;
	volatile int16_t x275 = INT16_MIN;
	int32_t t52 = -172;

	t52 = ((x273^(x274*x275))<=x276);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x277 = INT8_MAX;
	uint64_t x278 = 2LLU;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = 4191U;
	int32_t t53 = -1751;

	t53 = ((x277^(x278*x279))<=x280);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x283 = 108U;
	volatile int16_t x284 = -1528;
	static volatile int32_t t54 = 401;

	t54 = ((x281^(x282*x283))<=x284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x289 = 1511;
	int16_t x290 = -1;
	int16_t x291 = 50;
	int8_t x292 = INT8_MIN;
	int32_t t55 = -1389;

	t55 = ((x289^(x290*x291))<=x292);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x297 = 2767U;
	static int32_t x298 = 1004;
	volatile int32_t t56 = 3;

	t56 = ((x297^(x298*x299))<=x300);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x301 = 64U;
	int32_t x303 = INT32_MAX;
	uint16_t x304 = 1265U;
	volatile int32_t t57 = -5483;

	t57 = ((x301^(x302*x303))<=x304);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x305 = -2745900LL;
	uint32_t x306 = UINT32_MAX;
	volatile int64_t x307 = -1LL;
	volatile int32_t t58 = -6520042;

	t58 = ((x305^(x306*x307))<=x308);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x309 = 20U;
	static uint16_t x310 = 33U;
	uint64_t x311 = 1932260180956292LLU;
	int64_t x312 = INT64_MAX;
	volatile int32_t t59 = 631490;

	t59 = ((x309^(x310*x311))<=x312);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x317 = INT32_MIN;
	uint16_t x318 = UINT16_MAX;
	int64_t x319 = -5LL;
	int16_t x320 = INT16_MIN;

	t60 = ((x317^(x318*x319))<=x320);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x321 = INT8_MAX;
	uint8_t x322 = 4U;
	static volatile int32_t t61 = -134610;

	t61 = ((x321^(x322*x323))<=x324);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x329 = -7;
	int32_t x331 = INT32_MAX;
	int32_t t62 = -9;

	t62 = ((x329^(x330*x331))<=x332);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x333 = -4040;
	int64_t x334 = 664LL;
	volatile int16_t x336 = 350;
	volatile int32_t t63 = -19;

	t63 = ((x333^(x334*x335))<=x336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x345 = INT16_MIN;
	static uint64_t x346 = 11LLU;
	volatile uint32_t x347 = 4U;
	volatile int32_t t64 = 31517299;

	t64 = ((x345^(x346*x347))<=x348);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MIN;

	t65 = ((x349^(x350*x351))<=x352);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x353 = 164U;
	volatile uint64_t x355 = UINT64_MAX;
	volatile int64_t x356 = -169284758LL;
	int32_t t66 = -3;

	t66 = ((x353^(x354*x355))<=x356);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x357 = INT64_MIN;
	int32_t t67 = -16101283;

	t67 = ((x357^(x358*x359))<=x360);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x361 = INT64_MAX;
	int8_t x362 = INT8_MIN;
	volatile int16_t x364 = INT16_MIN;
	int32_t t68 = -11439;

	t68 = ((x361^(x362*x363))<=x364);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x365 = UINT32_MAX;
	volatile uint8_t x366 = 0U;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MAX;
	int32_t t69 = -618226589;

	t69 = ((x365^(x366*x367))<=x368);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = -1;
	volatile uint16_t x371 = UINT16_MAX;
	volatile int32_t t70 = 58;

	t70 = ((x369^(x370*x371))<=x372);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x374 = -1;
	int8_t x375 = 13;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t71 = 488;

	t71 = ((x373^(x374*x375))<=x376);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x381 = 43;
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = -32982;
	uint16_t x384 = 29309U;
	static volatile int32_t t72 = 25;

	t72 = ((x381^(x382*x383))<=x384);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x385 = 110U;
	uint64_t x387 = UINT64_MAX;

	t73 = ((x385^(x386*x387))<=x388);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x389 = -470395;
	volatile int8_t x390 = 1;
	static uint32_t x391 = UINT32_MAX;
	volatile int32_t t74 = 133938;

	t74 = ((x389^(x390*x391))<=x392);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x401 = 6U;
	uint8_t x402 = 79U;
	int32_t x404 = -6756056;
	volatile int32_t t75 = 27330;

	t75 = ((x401^(x402*x403))<=x404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = INT64_MIN;
	int8_t x407 = -1;
	int32_t x408 = 1908021;
	static volatile int32_t t76 = -41;

	t76 = ((x405^(x406*x407))<=x408);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x411 = INT8_MAX;
	int16_t x412 = -1;
	volatile int32_t t77 = -31854270;

	t77 = ((x409^(x410*x411))<=x412);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x418 = UINT16_MAX;
	volatile uint8_t x419 = UINT8_MAX;
	static int16_t x420 = 5966;
	volatile int32_t t78 = 20418;

	t78 = ((x417^(x418*x419))<=x420);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	int32_t x428 = -6991405;

	t79 = ((x425^(x426*x427))<=x428);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x430 = -2;
	uint16_t x432 = UINT16_MAX;

	t80 = ((x429^(x430*x431))<=x432);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x433 = 2U;
	static int16_t x434 = -1;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t81 = -54671;

	t81 = ((x433^(x434*x435))<=x436);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x437 = UINT16_MAX;
	static int16_t x438 = INT16_MIN;
	uint32_t x439 = 30U;
	int16_t x440 = INT16_MAX;
	static volatile int32_t t82 = -1637;

	t82 = ((x437^(x438*x439))<=x440);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x441 = 21U;
	static int64_t x442 = 28052665LL;
	int8_t x443 = INT8_MAX;
	volatile int32_t t83 = 8;

	t83 = ((x441^(x442*x443))<=x444);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = 2243342569550546491LL;
	uint16_t x446 = 1U;
	int32_t x447 = INT32_MAX;
	uint32_t x448 = 971U;
	volatile int32_t t84 = 0;

	t84 = ((x445^(x446*x447))<=x448);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x450 = -4;
	volatile int32_t t85 = 1327;

	t85 = ((x449^(x450*x451))<=x452);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x454 = 105;
	int64_t x455 = 1881659839LL;
	int16_t x456 = INT16_MIN;
	int32_t t86 = 14;

	t86 = ((x453^(x454*x455))<=x456);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x457 = INT8_MIN;
	uint64_t x458 = UINT64_MAX;
	static int64_t x459 = -1013702222LL;
	int32_t x460 = 45524;
	int32_t t87 = 43;

	t87 = ((x457^(x458*x459))<=x460);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x461 = 0;
	static uint32_t x462 = 17U;
	int32_t x463 = -325;
	uint64_t x464 = 983266242627132LLU;
	volatile int32_t t88 = 86;

	t88 = ((x461^(x462*x463))<=x464);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x466 = 6LLU;
	volatile int8_t x467 = 3;
	int16_t x468 = INT16_MAX;
	volatile int32_t t89 = 42;

	t89 = ((x465^(x466*x467))<=x468);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x469 = INT16_MAX;
	uint8_t x470 = 38U;
	static int32_t x472 = INT32_MIN;

	t90 = ((x469^(x470*x471))<=x472);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x481 = UINT64_MAX;
	int64_t x483 = -1LL;
	volatile int32_t t91 = 3;

	t91 = ((x481^(x482*x483))<=x484);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x489 = 16149067LLU;
	static volatile uint32_t x490 = 81783U;
	uint16_t x491 = 22U;
	volatile int32_t t92 = 7849975;

	t92 = ((x489^(x490*x491))<=x492);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x494 = -63;
	int64_t x495 = -98998310836706788LL;
	static int32_t x496 = INT32_MAX;
	static volatile int32_t t93 = 8434;

	t93 = ((x493^(x494*x495))<=x496);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x497 = UINT16_MAX;
	int64_t x498 = -27LL;
	uint16_t x499 = 5U;
	volatile int8_t x500 = 0;
	int32_t t94 = 1234535;

	t94 = ((x497^(x498*x499))<=x500);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x502 = UINT64_MAX;
	int32_t x504 = INT32_MIN;
	int32_t t95 = -608594;

	t95 = ((x501^(x502*x503))<=x504);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x505 = 30132844U;
	uint8_t x506 = 2U;
	volatile uint32_t x507 = UINT32_MAX;
	uint16_t x508 = 0U;

	t96 = ((x505^(x506*x507))<=x508);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x514 = UINT8_MAX;
	int8_t x515 = -1;
	uint64_t x516 = 61807LLU;

	t97 = ((x513^(x514*x515))<=x516);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x517 = -75046212008087733LL;
	int16_t x518 = 122;
	int8_t x519 = -27;
	uint16_t x520 = 15509U;

	t98 = ((x517^(x518*x519))<=x520);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = INT8_MIN;
	volatile int8_t x522 = 13;
	int16_t x523 = INT16_MIN;
	static uint32_t x524 = 0U;
	int32_t t99 = -21498;

	t99 = ((x521^(x522*x523))<=x524);

	if (t99 != 0) { NG(); } else { ; }
	
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

