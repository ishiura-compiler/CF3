#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 479490951U;
int8_t x5 = INT8_MAX;
int64_t x6 = 210505LL;
volatile int32_t t2 = 20;
volatile int32_t x22 = -1810;
uint64_t x23 = UINT64_MAX;
int32_t t5 = -149106582;
int32_t x38 = INT32_MIN;
static volatile int32_t t6 = -7875;
static int8_t x46 = INT8_MIN;
static int64_t x49 = -1LL;
volatile uint64_t x50 = UINT64_MAX;
volatile int32_t t8 = 11753502;
static int32_t t9 = 10;
int8_t x69 = -1;
uint32_t x70 = 86902U;
uint8_t x74 = 11U;
static int32_t t14 = -1619;
int64_t x83 = -1LL;
int16_t x84 = INT16_MAX;
int32_t t16 = 200520;
static uint8_t x96 = UINT8_MAX;
static volatile int64_t x103 = 799620149LL;
int32_t t19 = 104176;
uint32_t x106 = 7357U;
uint32_t x108 = 8222U;
uint16_t x117 = 16U;
int32_t t23 = 0;
uint16_t x125 = 17359U;
static volatile int16_t x127 = -6;
int8_t x128 = 0;
static volatile int32_t t25 = -1072;
int32_t x129 = -1;
volatile int32_t x140 = 1391687;
uint64_t x141 = 1LLU;
static int32_t x143 = INT32_MAX;
volatile int32_t t28 = 15615474;
int16_t x150 = -1;
int32_t x151 = -16364;
int32_t x159 = 11210917;
volatile uint16_t x166 = UINT16_MAX;
uint8_t x172 = UINT8_MAX;
static int8_t x184 = INT8_MAX;
int32_t x198 = INT32_MIN;
volatile int32_t x199 = INT32_MIN;
int16_t x203 = 1;
static int8_t x221 = INT8_MIN;
int64_t x222 = 533975442724616648LL;
int32_t t45 = -1;
volatile int32_t t46 = 63781601;
int16_t x235 = INT16_MIN;
static volatile int32_t t49 = -536;
volatile int16_t x251 = INT16_MAX;
int32_t x252 = -183023;
int32_t t51 = 428;
volatile int32_t t52 = -14620617;
int8_t x260 = -6;
static volatile int32_t x273 = -3989943;
int8_t x283 = 11;
uint8_t x284 = UINT8_MAX;
int32_t t58 = -98322641;
uint32_t x298 = UINT32_MAX;
static volatile int32_t t61 = 8;
uint64_t x301 = 8247LLU;
static int8_t x306 = INT8_MIN;
int64_t x314 = INT64_MAX;
volatile int8_t x323 = INT8_MIN;
int8_t x326 = 27;
static int64_t x327 = -2692LL;
static uint64_t x335 = UINT64_MAX;
int8_t x342 = 2;
int64_t x359 = 72LL;
uint8_t x364 = 54U;
volatile uint64_t x374 = UINT64_MAX;
volatile int32_t t78 = 5364052;
uint16_t x380 = UINT16_MAX;
int64_t x384 = -1LL;
int32_t t80 = 1078;
volatile uint16_t x388 = UINT16_MAX;
volatile int32_t t81 = -919755;
uint16_t x391 = 11U;
volatile int32_t t82 = -1;
int32_t t83 = 0;
int16_t x400 = -1;
uint64_t x402 = 8128749LLU;
int16_t x406 = -1;
static int16_t x413 = -1;
uint16_t x415 = 0U;
int32_t t88 = 26247;
int64_t x418 = 5LL;
uint8_t x419 = 2U;
static uint8_t x423 = 14U;
volatile int64_t x429 = INT64_MAX;
int8_t x436 = INT8_MIN;
int8_t x437 = INT8_MIN;
volatile uint8_t x444 = UINT8_MAX;
volatile int8_t x448 = -1;
int32_t x451 = INT32_MIN;
int32_t t97 = -751;
int64_t x453 = 0LL;
int32_t x456 = -1;
uint32_t x459 = 718756223U;
volatile int64_t x460 = INT64_MIN;


void f0(void) {
	int32_t x1 = -29613324;
	int64_t x2 = INT64_MIN;
	static int32_t x3 = -1;
	int32_t t0 = 34213;

	t0 = (((x1^x2)+x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = -1;
	volatile int8_t x8 = 0;
	int32_t t1 = 2810;

	t1 = (((x5^x6)+x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 3U;
	volatile uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MIN;
	static volatile int64_t x16 = INT64_MIN;

	t2 = (((x13^x14)+x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	static volatile uint64_t x18 = 6342828LLU;
	int64_t x19 = INT64_MIN;
	int16_t x20 = 4;
	int32_t t3 = 3320;

	t3 = (((x17^x18)+x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x21 = INT64_MAX;
	static uint8_t x24 = 8U;
	int32_t t4 = 7829798;

	t4 = (((x21^x22)+x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 181LL;
	uint16_t x26 = 232U;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 3U;

	t5 = (((x25^x26)+x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 3955LL;
	volatile int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MAX;

	t6 = (((x37^x38)+x39)<=x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = INT16_MAX;
	int64_t x47 = -1LL;
	volatile int8_t x48 = -1;
	int32_t t7 = 473;

	t7 = (((x45^x46)+x47)<=x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x51 = -1;
	int32_t x52 = 9;

	t8 = (((x49^x50)+x51)<=x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x53 = 7U;
	static int16_t x54 = INT16_MIN;
	uint16_t x55 = 397U;
	uint64_t x56 = UINT64_MAX;

	t9 = (((x53^x54)+x55)<=x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x57 = INT32_MAX;
	int16_t x58 = -128;
	uint32_t x59 = 14152U;
	static int16_t x60 = INT16_MAX;
	volatile int32_t t10 = 127;

	t10 = (((x57^x58)+x59)<=x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x61 = -1;
	uint16_t x62 = 1696U;
	static volatile int64_t x63 = -23850741983LL;
	int16_t x64 = INT16_MAX;
	static int32_t t11 = -3;

	t11 = (((x61^x62)+x63)<=x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MIN;
	volatile int32_t t12 = -150202;

	t12 = (((x69^x70)+x71)<=x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	volatile uint8_t x75 = 7U;
	int32_t x76 = -1309;
	int32_t t13 = 214566423;

	t13 = (((x73^x74)+x75)<=x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -1LL;
	uint64_t x78 = UINT64_MAX;
	volatile uint32_t x79 = 1499661932U;
	volatile uint16_t x80 = 9703U;

	t14 = (((x77^x78)+x79)<=x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MAX;
	uint64_t x82 = 29937743893980LLU;
	static int32_t t15 = 109;

	t15 = (((x81^x82)+x83)<=x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = -3;
	uint16_t x86 = UINT16_MAX;
	volatile uint8_t x87 = 0U;
	volatile int64_t x88 = INT64_MIN;

	t16 = (((x85^x86)+x87)<=x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x93 = 1971319LLU;
	static int64_t x94 = -520941295667024572LL;
	uint32_t x95 = 24938091U;
	static int32_t t17 = -9;

	t17 = (((x93^x94)+x95)<=x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MIN;
	static volatile int16_t x98 = 0;
	volatile uint16_t x99 = 6705U;
	volatile int8_t x100 = 17;
	volatile int32_t t18 = 2;

	t18 = (((x97^x98)+x99)<=x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = -1;
	int8_t x102 = -1;
	volatile uint8_t x104 = UINT8_MAX;

	t19 = (((x101^x102)+x103)<=x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MAX;
	int64_t x107 = INT64_MIN;
	int32_t t20 = 3069;

	t20 = (((x105^x106)+x107)<=x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x109 = UINT8_MAX;
	static uint32_t x110 = 4U;
	int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t21 = -2;

	t21 = (((x109^x110)+x111)<=x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -1;
	static volatile uint8_t x114 = 0U;
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = 2161;
	static int32_t t22 = -1;

	t22 = (((x113^x114)+x115)<=x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x118 = UINT32_MAX;
	int64_t x119 = -29182224405206875LL;
	uint32_t x120 = 1064578269U;

	t23 = (((x117^x118)+x119)<=x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = 3136;
	uint32_t x122 = UINT32_MAX;
	uint64_t x123 = UINT64_MAX;
	static int8_t x124 = -11;
	volatile int32_t t24 = -62834;

	t24 = (((x121^x122)+x123)<=x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x126 = INT64_MIN;

	t25 = (((x125^x126)+x127)<=x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x130 = 25U;
	static int16_t x131 = INT16_MIN;
	int32_t x132 = -256976979;
	int32_t t26 = 130490790;

	t26 = (((x129^x130)+x131)<=x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = 2279281LLU;
	static int64_t x138 = -15467LL;
	static uint8_t x139 = 13U;
	static volatile int32_t t27 = 1272125;

	t27 = (((x137^x138)+x139)<=x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x142 = -29535449;
	int32_t x144 = INT32_MIN;

	t28 = (((x141^x142)+x143)<=x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x145 = 428676977U;
	volatile uint8_t x146 = 80U;
	volatile uint64_t x147 = 1323693607721170172LLU;
	int8_t x148 = 18;
	static int32_t t29 = -117285429;

	t29 = (((x145^x146)+x147)<=x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -1LL;
	int64_t x152 = -5884256590LL;
	volatile int32_t t30 = 882198;

	t30 = (((x149^x150)+x151)<=x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = -1;
	uint64_t x154 = 126273LLU;
	int8_t x155 = INT8_MIN;
	uint64_t x156 = 109212082639764LLU;
	volatile int32_t t31 = 771150;

	t31 = (((x153^x154)+x155)<=x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = 502LL;
	volatile uint32_t x158 = 2U;
	int8_t x160 = -1;
	int32_t t32 = 0;

	t32 = (((x157^x158)+x159)<=x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x161 = 307421798LLU;
	int64_t x162 = INT64_MAX;
	int32_t x163 = -396399508;
	volatile int32_t x164 = 0;
	volatile int32_t t33 = 3850823;

	t33 = (((x161^x162)+x163)<=x164);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x165 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	int64_t x168 = 3327302119335LL;
	int32_t t34 = -61;

	t34 = (((x165^x166)+x167)<=x168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = INT64_MAX;
	uint32_t x170 = 14040U;
	int32_t x171 = -1;
	volatile int32_t t35 = 502;

	t35 = (((x169^x170)+x171)<=x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 444790U;
	uint64_t x178 = 178105159921LLU;
	int16_t x179 = 0;
	int8_t x180 = -1;
	volatile int32_t t36 = -24364812;

	t36 = (((x177^x178)+x179)<=x180);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = INT32_MIN;
	volatile int32_t x182 = INT32_MIN;
	int16_t x183 = -670;
	volatile int32_t t37 = 1;

	t37 = (((x181^x182)+x183)<=x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x185 = UINT64_MAX;
	int64_t x186 = 467LL;
	uint32_t x187 = 387U;
	int8_t x188 = INT8_MAX;
	volatile int32_t t38 = 5;

	t38 = (((x185^x186)+x187)<=x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = -1LL;
	static volatile int16_t x190 = -1;
	uint32_t x191 = 84343U;
	static int64_t x192 = 2287432273670873564LL;
	int32_t t39 = 16790;

	t39 = (((x189^x190)+x191)<=x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = -1;
	static volatile uint64_t x194 = 518LLU;
	int32_t x195 = -7;
	volatile int16_t x196 = 1450;
	volatile int32_t t40 = 50657;

	t40 = (((x193^x194)+x195)<=x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 120423893919217LLU;
	int16_t x200 = -1526;
	int32_t t41 = 95055;

	t41 = (((x197^x198)+x199)<=x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x201 = 1U;
	static uint64_t x202 = 2120710126LLU;
	volatile int16_t x204 = INT16_MAX;
	int32_t t42 = -701;

	t42 = (((x201^x202)+x203)<=x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = -1;
	int64_t x210 = 8263025378755320LL;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MAX;
	int32_t t43 = 14151;

	t43 = (((x209^x210)+x211)<=x212);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	int64_t x215 = INT64_MAX;
	int64_t x216 = -44LL;
	volatile int32_t t44 = 108011030;

	t44 = (((x213^x214)+x215)<=x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x223 = 692LLU;
	int64_t x224 = INT64_MAX;

	t45 = (((x221^x222)+x223)<=x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x225 = 3U;
	int8_t x226 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	int32_t x228 = 0;

	t46 = (((x225^x226)+x227)<=x228);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MAX;
	int8_t x232 = -1;
	int32_t t47 = 169964208;

	t47 = (((x229^x230)+x231)<=x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x233 = 67U;
	int8_t x234 = INT8_MIN;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t48 = -1974971;

	t48 = (((x233^x234)+x235)<=x236);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = -1LL;
	int32_t x238 = INT32_MIN;
	static uint16_t x239 = 753U;
	int32_t x240 = INT32_MAX;

	t49 = (((x237^x238)+x239)<=x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x241 = 4867403070729LLU;
	int32_t x242 = -1;
	int32_t x243 = 197682550;
	static int32_t x244 = -1031560040;
	int32_t t50 = -524473113;

	t50 = (((x241^x242)+x243)<=x244);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x249 = UINT32_MAX;
	static int32_t x250 = -11884;

	t51 = (((x249^x250)+x251)<=x252);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x253 = 1470LLU;
	uint8_t x254 = UINT8_MAX;
	int32_t x255 = INT32_MAX;
	int64_t x256 = -1LL;

	t52 = (((x253^x254)+x255)<=x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	volatile int16_t x259 = 3285;
	int32_t t53 = -1034536;

	t53 = (((x257^x258)+x259)<=x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x261 = -259;
	int32_t x262 = INT32_MIN;
	int8_t x263 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t54 = 170934;

	t54 = (((x261^x262)+x263)<=x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = -1377256LL;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	int32_t t55 = -97342605;

	t55 = (((x269^x270)+x271)<=x272);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x274 = 58480LLU;
	volatile int64_t x275 = -63716526392563537LL;
	static int64_t x276 = -55025708880347LL;
	int32_t t56 = -3271678;

	t56 = (((x273^x274)+x275)<=x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x281 = UINT8_MAX;
	int16_t x282 = INT16_MIN;
	int32_t t57 = 1;

	t57 = (((x281^x282)+x283)<=x284);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x285 = UINT64_MAX;
	int8_t x286 = INT8_MAX;
	uint32_t x287 = UINT32_MAX;
	int32_t x288 = INT32_MAX;

	t58 = (((x285^x286)+x287)<=x288);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = INT64_MIN;
	static int8_t x290 = -1;
	int64_t x291 = INT64_MIN;
	int64_t x292 = 2454503611LL;
	static int32_t t59 = -4134;

	t59 = (((x289^x290)+x291)<=x292);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x293 = 0U;
	static uint64_t x294 = 127158271393LLU;
	int8_t x295 = -1;
	int8_t x296 = INT8_MAX;
	volatile int32_t t60 = 3882434;

	t60 = (((x293^x294)+x295)<=x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = 42398699426254LLU;
	int16_t x299 = INT16_MAX;
	static volatile int8_t x300 = INT8_MAX;

	t61 = (((x297^x298)+x299)<=x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x302 = -7;
	uint64_t x303 = 22985281450LLU;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t62 = -1;

	t62 = (((x301^x302)+x303)<=x304);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = 0;
	int16_t x307 = 51;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t63 = -3596;

	t63 = (((x305^x306)+x307)<=x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x309 = INT32_MAX;
	uint64_t x310 = 115453LLU;
	volatile uint32_t x311 = 741U;
	int16_t x312 = 2;
	volatile int32_t t64 = 19937391;

	t64 = (((x309^x310)+x311)<=x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x313 = INT64_MIN;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = -1LL;
	volatile int32_t t65 = 14;

	t65 = (((x313^x314)+x315)<=x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = 1574248601LL;
	int32_t x318 = INT32_MAX;
	uint32_t x319 = 3U;
	int64_t x320 = INT64_MIN;
	int32_t t66 = -42;

	t66 = (((x317^x318)+x319)<=x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x321 = -1LL;
	static uint64_t x322 = UINT64_MAX;
	uint64_t x324 = 1311069LLU;
	volatile int32_t t67 = 28018;

	t67 = (((x321^x322)+x323)<=x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = -14121;
	uint32_t x328 = 10U;
	volatile int32_t t68 = -174645513;

	t68 = (((x325^x326)+x327)<=x328);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x329 = UINT32_MAX;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t69 = 180179;

	t69 = (((x329^x330)+x331)<=x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x333 = 252144U;
	static int16_t x334 = 0;
	int64_t x336 = 146LL;
	int32_t t70 = -1078668;

	t70 = (((x333^x334)+x335)<=x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = -1LL;
	static int16_t x343 = INT16_MIN;
	int16_t x344 = -1;
	volatile int32_t t71 = 0;

	t71 = (((x341^x342)+x343)<=x344);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x345 = INT16_MIN;
	volatile int8_t x346 = INT8_MAX;
	int32_t x347 = -12738435;
	volatile int32_t x348 = INT32_MIN;
	static volatile int32_t t72 = 970974132;

	t72 = (((x345^x346)+x347)<=x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = -1LL;
	int8_t x354 = 17;
	int16_t x355 = INT16_MIN;
	volatile int64_t x356 = INT64_MIN;
	static volatile int32_t t73 = 10;

	t73 = (((x353^x354)+x355)<=x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = -1LL;
	volatile int16_t x358 = INT16_MIN;
	volatile int32_t x360 = INT32_MIN;
	static int32_t t74 = 1804;

	t74 = (((x357^x358)+x359)<=x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = -1;
	int64_t x363 = -1LL;
	volatile int32_t t75 = -69796;

	t75 = (((x361^x362)+x363)<=x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x365 = 0U;
	uint16_t x366 = 7892U;
	int64_t x367 = -258149463890704896LL;
	uint8_t x368 = 96U;
	volatile int32_t t76 = 12;

	t76 = (((x365^x366)+x367)<=x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x370 = INT8_MAX;
	uint32_t x371 = 1046452U;
	static int32_t x372 = 25;
	int32_t t77 = 112130;

	t77 = (((x369^x370)+x371)<=x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x373 = INT64_MIN;
	volatile uint32_t x375 = UINT32_MAX;
	static int8_t x376 = -1;

	t78 = (((x373^x374)+x375)<=x376);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x377 = INT32_MIN;
	volatile int8_t x378 = -2;
	int8_t x379 = -33;
	static int32_t t79 = 102326;

	t79 = (((x377^x378)+x379)<=x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = -1;
	uint32_t x383 = UINT32_MAX;

	t80 = (((x381^x382)+x383)<=x384);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x385 = 11867;
	int16_t x386 = 382;
	int64_t x387 = INT64_MIN;

	t81 = (((x385^x386)+x387)<=x388);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x389 = 3674U;
	int32_t x390 = -8069192;
	uint16_t x392 = UINT16_MAX;

	t82 = (((x389^x390)+x391)<=x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = 224834LLU;
	volatile uint64_t x395 = UINT64_MAX;
	static int8_t x396 = INT8_MIN;

	t83 = (((x393^x394)+x395)<=x396);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x397 = INT32_MAX;
	static uint32_t x398 = UINT32_MAX;
	static uint64_t x399 = 3405469446LLU;
	volatile int32_t t84 = 50752606;

	t84 = (((x397^x398)+x399)<=x400);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = 956192240LL;
	volatile int16_t x403 = INT16_MAX;
	static int16_t x404 = -9594;
	int32_t t85 = -27887315;

	t85 = (((x401^x402)+x403)<=x404);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x405 = 91U;
	int8_t x407 = INT8_MIN;
	volatile int8_t x408 = INT8_MIN;
	int32_t t86 = 260849625;

	t86 = (((x405^x406)+x407)<=x408);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = UINT32_MAX;
	uint16_t x410 = UINT16_MAX;
	static int64_t x411 = -6516LL;
	static int16_t x412 = INT16_MIN;
	int32_t t87 = -3305;

	t87 = (((x409^x410)+x411)<=x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x414 = INT16_MIN;
	int8_t x416 = 5;

	t88 = (((x413^x414)+x415)<=x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = -1LL;
	static uint64_t x420 = 927333443563042090LLU;
	volatile int32_t t89 = -180350771;

	t89 = (((x417^x418)+x419)<=x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = INT16_MIN;
	int16_t x422 = 10785;
	static int64_t x424 = INT64_MIN;
	volatile int32_t t90 = 10026;

	t90 = (((x421^x422)+x423)<=x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = UINT64_MAX;
	int32_t x428 = -768451;
	int32_t t91 = 1;

	t91 = (((x425^x426)+x427)<=x428);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x430 = INT32_MIN;
	static volatile int64_t x431 = 31063369781491719LL;
	int32_t x432 = -4145542;
	volatile int32_t t92 = -38;

	t92 = (((x429^x430)+x431)<=x432);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x433 = 116967079LLU;
	static int8_t x434 = INT8_MIN;
	uint16_t x435 = 57U;
	int32_t t93 = 100328716;

	t93 = (((x433^x434)+x435)<=x436);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x438 = INT16_MIN;
	uint16_t x439 = 22416U;
	uint64_t x440 = 24366LLU;
	int32_t t94 = 1;

	t94 = (((x437^x438)+x439)<=x440);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = 0;
	int32_t x442 = INT32_MIN;
	volatile uint8_t x443 = 0U;
	int32_t t95 = -583024;

	t95 = (((x441^x442)+x443)<=x444);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x445 = UINT8_MAX;
	int32_t x446 = INT32_MAX;
	uint32_t x447 = 0U;
	static int32_t t96 = 19;

	t96 = (((x445^x446)+x447)<=x448);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x449 = INT32_MIN;
	int32_t x450 = -667051515;
	volatile uint32_t x452 = UINT32_MAX;

	t97 = (((x449^x450)+x451)<=x452);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x454 = 8631U;
	uint8_t x455 = 4U;
	int32_t t98 = 8550749;

	t98 = (((x453^x454)+x455)<=x456);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x457 = 67600U;
	int16_t x458 = 9;
	int32_t t99 = 18130440;

	t99 = (((x457^x458)+x459)<=x460);

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

