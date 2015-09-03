#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = 1;
int32_t x12 = -67025215;
int8_t x16 = -1;
uint32_t x22 = 2380U;
int32_t x28 = INT32_MIN;
int32_t t6 = 7566203;
volatile int64_t x51 = -196247657LL;
static int8_t x52 = -1;
int16_t x57 = -1;
uint16_t x58 = 3U;
int8_t x67 = -7;
volatile int32_t t10 = -1708;
int64_t x70 = -133047840LL;
volatile int16_t x74 = 10;
static uint64_t x75 = 20585347LLU;
uint32_t x88 = 3812990U;
volatile uint8_t x93 = 49U;
int32_t x94 = INT32_MIN;
volatile int16_t x99 = 2286;
int16_t x120 = INT16_MIN;
int32_t t19 = -527767292;
static int16_t x126 = 3995;
static uint64_t x147 = 8585594464904LLU;
volatile int64_t t25 = INT64_MIN;
int16_t x159 = -1;
volatile uint64_t x161 = 140504812045919LLU;
uint64_t x162 = UINT64_MAX;
static volatile uint32_t t28 = 580896U;
uint64_t x178 = UINT64_MAX;
uint32_t x181 = UINT32_MAX;
uint32_t x182 = 7344U;
uint64_t x183 = 4432230LLU;
int32_t x185 = INT32_MIN;
int8_t x186 = -7;
int8_t x194 = INT8_MAX;
static int32_t t35 = 106;
int8_t x217 = INT8_MAX;
int64_t t36 = INT64_MAX;
volatile int16_t x221 = INT16_MAX;
static int32_t x224 = INT32_MIN;
static int8_t x229 = INT8_MAX;
int8_t x231 = -1;
volatile int64_t x232 = 35585200518275LL;
static volatile uint16_t x258 = UINT16_MAX;
int8_t x269 = INT8_MIN;
uint32_t t45 = UINT32_MAX;
int16_t x276 = -1;
int16_t x280 = -1;
static uint16_t x287 = 7U;
int32_t x289 = -11;
int16_t x290 = -890;
int32_t t49 = 60;
uint32_t x296 = UINT32_MAX;
uint64_t x300 = UINT64_MAX;
int32_t x313 = -855061;
static uint32_t x319 = UINT32_MAX;
uint64_t x324 = UINT64_MAX;
volatile uint64_t t57 = 2016453226552377991LLU;
uint32_t x350 = UINT32_MAX;
int32_t t60 = 9079564;
int16_t x357 = -1;
static volatile int64_t x358 = 2821781896472LL;
uint64_t x361 = 623788635513LLU;
static uint64_t x362 = 10851057973013LLU;
int16_t x364 = INT16_MAX;
uint16_t x367 = 5U;
volatile int32_t t64 = -111;
int32_t t65 = -4;
volatile int32_t t66 = -283;
volatile int8_t x386 = INT8_MAX;
int32_t x387 = -1;
int32_t t68 = 809303;
volatile int16_t x398 = 222;
uint32_t x400 = 93U;
volatile int8_t x409 = 62;
int64_t x415 = 388437804781454LL;
int64_t x427 = INT64_MIN;
volatile int8_t x439 = -56;
static uint64_t x444 = 19LLU;
static int16_t x453 = INT16_MIN;
int64_t x461 = 8118LL;
int64_t x469 = -1LL;
int32_t t78 = 606736;
int64_t x480 = -909628776816220730LL;
int16_t x487 = -1;
int32_t x488 = 54;
int8_t x489 = -1;
volatile int32_t t82 = 0;
int32_t t84 = -32101;
uint8_t x504 = 14U;
volatile int32_t t85 = 11;
volatile int64_t x505 = -1LL;
volatile int64_t x509 = 3726LL;
int8_t x512 = -4;
uint64_t x535 = 3395LLU;
int32_t t89 = 8;
int8_t x539 = -1;
int32_t x545 = -1;
static int32_t x546 = -375;
int64_t x558 = 21LL;
uint32_t x565 = UINT32_MAX;
int64_t x573 = -49947265329323061LL;


void f0(void) {
	int8_t x5 = INT8_MAX;
	volatile int64_t x6 = INT64_MIN;
	uint8_t x8 = 4U;
	int32_t t0 = -7;

	t0 = ((x5<(x6*x7))|x8);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -854351167353LL;
	static uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = -1;
	volatile int32_t t1 = -4170420;

	t1 = ((x9<(x10*x11))|x12);

	if (t1 != -67025215) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = -1;
	int16_t x15 = -6;
	volatile int32_t t2 = 352863129;

	t2 = ((x13<(x14*x15))|x16);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1;
	int32_t x23 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t3 = -946099;

	t3 = ((x21<(x22*x23))|x24);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 1179LLU;
	volatile int64_t x26 = INT64_MAX;
	int32_t x27 = 0;
	static int32_t t4 = INT32_MIN;

	t4 = ((x25<(x26*x27))|x28);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = -21;
	static int16_t x35 = INT16_MIN;
	int16_t x36 = 209;
	volatile int32_t t5 = 481;

	t5 = ((x33<(x34*x35))|x36);

	if (t5 != 209) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x41 = 31U;
	volatile int16_t x42 = 199;
	int16_t x43 = -1;
	int32_t x44 = -1;

	t6 = ((x41<(x42*x43))|x44);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = -105;
	volatile uint64_t x50 = 17476275LLU;
	volatile int32_t t7 = -150807736;

	t7 = ((x49<(x50*x51))|x52);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x59 = 31942126U;
	uint64_t x60 = 197890039990327LLU;
	uint64_t t8 = 8079LLU;

	t8 = ((x57<(x58*x59))|x60);

	if (t8 != 197890039990327LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x61 = 2;
	int16_t x62 = INT16_MIN;
	int16_t x63 = -29;
	int64_t x64 = INT64_MIN;
	volatile int64_t t9 = -96187LL;

	t9 = ((x61<(x62*x63))|x64);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = -1;
	static uint64_t x66 = 3LLU;
	int16_t x68 = INT16_MIN;

	t10 = ((x65<(x66*x67))|x68);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x69 = 355;
	int32_t x71 = INT32_MIN;
	static int64_t x72 = -1LL;
	volatile int64_t t11 = 119666226625177497LL;

	t11 = ((x69<(x70*x71))|x72);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = INT32_MAX;
	static int32_t x76 = INT32_MAX;
	int32_t t12 = INT32_MAX;

	t12 = ((x73<(x74*x75))|x76);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x81 = -334523LL;
	static uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MIN;
	static int64_t t13 = -298594538LL;

	t13 = ((x81<(x82*x83))|x84);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = 0;
	uint16_t x86 = 25273U;
	volatile uint64_t x87 = UINT64_MAX;
	uint32_t t14 = 6U;

	t14 = ((x85<(x86*x87))|x88);

	if (t14 != 3812991U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	int64_t t15 = 401209626LL;

	t15 = ((x93<(x94*x95))|x96);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = 13;
	volatile int16_t x98 = INT16_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t16 = -5304;

	t16 = ((x97<(x98*x99))|x100);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = INT32_MIN;
	uint16_t x106 = 5U;
	uint64_t x107 = 49276995404986LLU;
	int16_t x108 = INT16_MIN;
	volatile int32_t t17 = -8241537;

	t17 = ((x105<(x106*x107))|x108);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x113 = 8U;
	volatile int8_t x114 = INT8_MIN;
	uint8_t x115 = 3U;
	uint16_t x116 = UINT16_MAX;
	int32_t t18 = -1095992;

	t18 = ((x113<(x114*x115))|x116);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = 7758;
	static uint16_t x119 = 64U;

	t19 = ((x117<(x118*x119))|x120);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x125 = -1LL;
	static uint64_t x127 = 14146711572417LLU;
	int64_t x128 = -306748548350313547LL;
	int64_t t20 = 0LL;

	t20 = ((x125<(x126*x127))|x128);

	if (t20 != -306748548350313547LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x129 = 14389;
	uint64_t x130 = UINT64_MAX;
	volatile uint16_t x131 = 493U;
	uint8_t x132 = 53U;
	volatile int32_t t21 = -17127;

	t21 = ((x129<(x130*x131))|x132);

	if (t21 != 53) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x133 = 281499U;
	int8_t x134 = INT8_MAX;
	static uint32_t x135 = 3568367U;
	uint32_t x136 = 1085U;
	volatile uint32_t t22 = 3464801U;

	t22 = ((x133<(x134*x135))|x136);

	if (t22 != 1085U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x137 = 0;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MIN;
	int32_t t23 = 4;

	t23 = ((x137<(x138*x139))|x140);

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = -1;
	uint16_t x142 = 9U;
	int8_t x143 = -1;
	static uint32_t x144 = UINT32_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = ((x141<(x142*x143))|x144);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = INT8_MIN;
	static int64_t x146 = INT64_MAX;
	int64_t x148 = INT64_MIN;

	t25 = ((x145<(x146*x147))|x148);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x157 = INT64_MIN;
	volatile uint8_t x158 = UINT8_MAX;
	uint8_t x160 = 9U;
	volatile int32_t t26 = 108998442;

	t26 = ((x157<(x158*x159))|x160);

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x163 = 2;
	int64_t x164 = -119987LL;
	int64_t t27 = 19810372019LL;

	t27 = ((x161<(x162*x163))|x164);

	if (t27 != -119987LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	volatile int8_t x171 = INT8_MAX;
	uint32_t x172 = 38741873U;

	t28 = ((x169<(x170*x171))|x172);

	if (t28 != 38741873U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = INT64_MAX;
	uint8_t x179 = 4U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t29 = 3720354;

	t29 = ((x177<(x178*x179))|x180);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x184 = UINT32_MAX;
	static volatile uint32_t t30 = UINT32_MAX;

	t30 = ((x181<(x182*x183))|x184);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x187 = -1;
	uint32_t x188 = 945U;
	uint32_t t31 = 0U;

	t31 = ((x185<(x186*x187))|x188);

	if (t31 != 945U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x189 = INT32_MIN;
	static int16_t x190 = INT16_MIN;
	uint8_t x191 = 3U;
	int32_t x192 = -7;
	volatile int32_t t32 = -232;

	t32 = ((x189<(x190*x191))|x192);

	if (t32 != -7) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = 37;
	uint32_t x195 = UINT32_MAX;
	volatile int32_t x196 = -1;
	int32_t t33 = -3672;

	t33 = ((x193<(x194*x195))|x196);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x205 = INT64_MIN;
	uint16_t x206 = 6089U;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = 995807535664LL;
	int64_t t34 = -56897LL;

	t34 = ((x205<(x206*x207))|x208);

	if (t34 != 995807535665LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	uint8_t x215 = 122U;
	static volatile uint8_t x216 = UINT8_MAX;

	t35 = ((x213<(x214*x215))|x216);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x218 = UINT16_MAX;
	volatile uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = INT64_MAX;

	t36 = ((x217<(x218*x219))|x220);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x222 = 0;
	static uint8_t x223 = 3U;
	int32_t t37 = INT32_MIN;

	t37 = ((x221<(x222*x223))|x224);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MAX;
	int16_t x227 = 768;
	static volatile int16_t x228 = -1;
	volatile int32_t t38 = 2031143;

	t38 = ((x225<(x226*x227))|x228);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x230 = INT16_MAX;
	volatile int64_t t39 = 3930567545432291LL;

	t39 = ((x229<(x230*x231))|x232);

	if (t39 != 35585200518275LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 122538U;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MAX;
	int32_t t40 = -851177761;

	t40 = ((x233<(x234*x235))|x236);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x241 = UINT8_MAX;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = -125252394806LL;
	int32_t x244 = INT32_MAX;
	volatile int32_t t41 = INT32_MAX;

	t41 = ((x241<(x242*x243))|x244);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x249 = -1;
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = 1U;
	uint64_t x252 = 1233270087152LLU;
	uint64_t t42 = 1039739LLU;

	t42 = ((x249<(x250*x251))|x252);

	if (t42 != 1233270087152LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x253 = UINT64_MAX;
	int16_t x254 = 14573;
	uint32_t x255 = 32863389U;
	uint8_t x256 = 0U;
	int32_t t43 = -557;

	t43 = ((x253<(x254*x255))|x256);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x257 = -39003;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t44 = INT32_MIN;

	t44 = ((x257<(x258*x259))|x260);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x270 = INT32_MIN;
	uint32_t x271 = 38906U;
	static uint32_t x272 = UINT32_MAX;

	t45 = ((x269<(x270*x271))|x272);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x273 = INT8_MIN;
	static int8_t x274 = INT8_MIN;
	int32_t x275 = -17646;
	int32_t t46 = 181420;

	t46 = ((x273<(x274*x275))|x276);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x277 = 3128102916LL;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 140125U;
	volatile int32_t t47 = -28122321;

	t47 = ((x277<(x278*x279))|x280);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x285 = 31U;
	int32_t x286 = -204386261;
	volatile int64_t x288 = -237LL;
	int64_t t48 = -465098474875771512LL;

	t48 = ((x285<(x286*x287))|x288);

	if (t48 != -237LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x291 = 23U;
	static int8_t x292 = 42;

	t49 = ((x289<(x290*x291))|x292);

	if (t49 != 42) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x293 = -1LL;
	int8_t x294 = -1;
	static int8_t x295 = 0;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = ((x293<(x294*x295))|x296);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x297 = 6982509LLU;
	volatile int16_t x298 = INT16_MIN;
	static int32_t x299 = -7;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x297<(x298*x299))|x300);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x309 = -6003906LL;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = -7380;
	int32_t x312 = 0;
	int32_t t52 = -266658720;

	t52 = ((x309<(x310*x311))|x312);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x314 = -307LL;
	uint32_t x315 = 161068307U;
	volatile int64_t x316 = INT64_MAX;
	volatile int64_t t53 = INT64_MAX;

	t53 = ((x313<(x314*x315))|x316);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x317 = INT8_MAX;
	int32_t x318 = 89942;
	uint32_t x320 = 1659269080U;
	volatile uint32_t t54 = 7U;

	t54 = ((x317<(x318*x319))|x320);

	if (t54 != 1659269081U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x321 = 257966253270LL;
	static int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x321<(x322*x323))|x324);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x329 = 26LL;
	int32_t x330 = -7;
	volatile int8_t x331 = -1;
	int16_t x332 = INT16_MIN;
	int32_t t56 = -12343;

	t56 = ((x329<(x330*x331))|x332);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x333 = -1;
	volatile int32_t x334 = 1795935;
	uint16_t x335 = 3U;
	volatile uint64_t x336 = 76698LLU;

	t57 = ((x333<(x334*x335))|x336);

	if (t57 != 76699LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -895693LL;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x341<(x342*x343))|x344);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x345 = 1080987680242LLU;
	int8_t x346 = -1;
	int64_t x347 = INT64_MAX;
	uint8_t x348 = 1U;
	int32_t t59 = 499963;

	t59 = ((x345<(x346*x347))|x348);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = INT8_MAX;
	int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MIN;

	t60 = ((x349<(x350*x351))|x352);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x359 = 27U;
	volatile int8_t x360 = -1;
	static volatile int32_t t61 = 63566011;

	t61 = ((x357<(x358*x359))|x360);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x363 = INT32_MIN;
	int32_t t62 = 42863665;

	t62 = ((x361<(x362*x363))|x364);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x365 = 28U;
	volatile int32_t x366 = -1;
	int64_t x368 = 4463LL;
	int64_t t63 = -7454935646473626LL;

	t63 = ((x365<(x366*x367))|x368);

	if (t63 != 4463LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x369 = INT64_MAX;
	uint64_t x370 = UINT64_MAX;
	static uint32_t x371 = 3364U;
	int16_t x372 = 0;

	t64 = ((x369<(x370*x371))|x372);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = -3550;
	uint64_t x374 = UINT64_MAX;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = UINT16_MAX;

	t65 = ((x373<(x374*x375))|x376);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x377 = 7772021U;
	uint32_t x378 = UINT32_MAX;
	int16_t x379 = 1;
	static int32_t x380 = -1;

	t66 = ((x377<(x378*x379))|x380);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x385 = 1;
	int8_t x388 = -1;
	volatile int32_t t67 = 16426531;

	t67 = ((x385<(x386*x387))|x388);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x393 = 3905U;
	static int8_t x394 = -63;
	volatile int8_t x395 = INT8_MAX;
	static int16_t x396 = INT16_MIN;

	t68 = ((x393<(x394*x395))|x396);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x397 = INT32_MIN;
	int64_t x399 = 4296818461828729LL;
	uint32_t t69 = 1592192U;

	t69 = ((x397<(x398*x399))|x400);

	if (t69 != 93U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x405 = -3;
	uint64_t x406 = 556168438831138517LLU;
	volatile uint64_t x407 = 8318202671674LLU;
	static int32_t x408 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = ((x405<(x406*x407))|x408);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x410 = -1;
	uint32_t x411 = UINT32_MAX;
	int16_t x412 = INT16_MAX;
	int32_t t71 = 969;

	t71 = ((x409<(x410*x411))|x412);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x413 = UINT16_MAX;
	int32_t x414 = -186;
	static uint16_t x416 = UINT16_MAX;
	static volatile int32_t t72 = 0;

	t72 = ((x413<(x414*x415))|x416);

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x425 = INT32_MIN;
	uint64_t x426 = UINT64_MAX;
	int64_t x428 = INT64_MIN;
	int64_t t73 = INT64_MIN;

	t73 = ((x425<(x426*x427))|x428);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x437 = 133956567U;
	int8_t x438 = 1;
	int32_t x440 = INT32_MIN;
	volatile int32_t t74 = 3840587;

	t74 = ((x437<(x438*x439))|x440);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x441 = 0U;
	uint16_t x442 = 222U;
	int64_t x443 = -1LL;
	volatile uint64_t t75 = 1045044007LLU;

	t75 = ((x441<(x442*x443))|x444);

	if (t75 != 19LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x454 = 342U;
	int8_t x455 = -1;
	int16_t x456 = INT16_MIN;
	int32_t t76 = -131160615;

	t76 = ((x453<(x454*x455))|x456);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x462 = -1;
	uint16_t x463 = 6U;
	static int64_t x464 = INT64_MAX;
	int64_t t77 = INT64_MAX;

	t77 = ((x461<(x462*x463))|x464);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x470 = UINT8_MAX;
	int32_t x471 = 11;
	int32_t x472 = INT32_MIN;

	t78 = ((x469<(x470*x471))|x472);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x473 = -1;
	volatile uint16_t x474 = UINT16_MAX;
	static uint32_t x475 = UINT32_MAX;
	int64_t x476 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = ((x473<(x474*x475))|x476);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x477 = INT16_MIN;
	int32_t x478 = -61582;
	static int64_t x479 = 9255LL;
	static volatile int64_t t80 = 39664418777LL;

	t80 = ((x477<(x478*x479))|x480);

	if (t80 != -909628776816220730LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x485 = INT16_MIN;
	int32_t x486 = INT32_MAX;
	int32_t t81 = -623781;

	t81 = ((x485<(x486*x487))|x488);

	if (t81 != 54) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x490 = -270;
	int32_t x491 = -3145;
	volatile int32_t x492 = 28101;

	t82 = ((x489<(x490*x491))|x492);

	if (t82 != 28101) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x493 = INT8_MAX;
	int8_t x494 = INT8_MIN;
	int32_t x495 = 1;
	int32_t x496 = -746;
	volatile int32_t t83 = -3338770;

	t83 = ((x493<(x494*x495))|x496);

	if (t83 != -746) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x497 = INT16_MAX;
	volatile int32_t x498 = -22;
	volatile uint8_t x499 = 3U;
	int16_t x500 = INT16_MIN;

	t84 = ((x497<(x498*x499))|x500);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x501 = INT32_MIN;
	int16_t x502 = 351;
	int64_t x503 = -1LL;

	t85 = ((x501<(x502*x503))|x504);

	if (t85 != 15) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x506 = INT8_MIN;
	int8_t x507 = INT8_MAX;
	int32_t x508 = 8775225;
	int32_t t86 = 4695;

	t86 = ((x505<(x506*x507))|x508);

	if (t86 != 8775225) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x510 = INT16_MAX;
	int16_t x511 = INT16_MIN;
	int32_t t87 = 12902;

	t87 = ((x509<(x510*x511))|x512);

	if (t87 != -4) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x521 = INT16_MIN;
	static int64_t x522 = -22628027LL;
	int16_t x523 = -1;
	int8_t x524 = INT8_MIN;
	volatile int32_t t88 = 21795;

	t88 = ((x521<(x522*x523))|x524);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x533 = 7U;
	int16_t x534 = INT16_MIN;
	int32_t x536 = INT32_MIN;

	t89 = ((x533<(x534*x535))|x536);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x537 = -1;
	static int32_t x538 = -1023;
	int16_t x540 = INT16_MIN;
	int32_t t90 = 19956;

	t90 = ((x537<(x538*x539))|x540);

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x547 = 7335;
	int64_t x548 = INT64_MAX;
	static int64_t t91 = INT64_MAX;

	t91 = ((x545<(x546*x547))|x548);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x549 = 1U;
	static uint64_t x550 = 247769217LLU;
	volatile uint16_t x551 = UINT16_MAX;
	int64_t x552 = 14LL;
	int64_t t92 = 30LL;

	t92 = ((x549<(x550*x551))|x552);

	if (t92 != 15LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x553 = -3LL;
	volatile uint32_t x554 = UINT32_MAX;
	volatile int8_t x555 = INT8_MAX;
	uint8_t x556 = 13U;
	int32_t t93 = 2261;

	t93 = ((x553<(x554*x555))|x556);

	if (t93 != 13) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x557 = INT32_MAX;
	int32_t x559 = -6411839;
	int16_t x560 = INT16_MIN;
	int32_t t94 = -6;

	t94 = ((x557<(x558*x559))|x560);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x561 = INT32_MIN;
	static uint16_t x562 = 471U;
	volatile uint32_t x563 = UINT32_MAX;
	static int32_t x564 = INT32_MIN;
	static int32_t t95 = -114217971;

	t95 = ((x561<(x562*x563))|x564);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x566 = -1;
	int8_t x567 = INT8_MIN;
	uint8_t x568 = 76U;
	volatile int32_t t96 = 3935022;

	t96 = ((x565<(x566*x567))|x568);

	if (t96 != 76) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x569 = 5U;
	uint8_t x570 = UINT8_MAX;
	int8_t x571 = INT8_MAX;
	int8_t x572 = -2;
	int32_t t97 = 0;

	t97 = ((x569<(x570*x571))|x572);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x574 = UINT64_MAX;
	static int8_t x575 = INT8_MIN;
	static int8_t x576 = -1;
	volatile int32_t t98 = -2864;

	t98 = ((x573<(x574*x575))|x576);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x577 = INT8_MIN;
	uint64_t x578 = 144151344789449177LLU;
	volatile int8_t x579 = -1;
	uint64_t x580 = 3141LLU;
	uint64_t t99 = 2435230496871LLU;

	t99 = ((x577<(x578*x579))|x580);

	if (t99 != 3141LLU) { NG(); } else { ; }
	
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

