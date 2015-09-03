#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x18 = -1;
int16_t x20 = -1;
int64_t t5 = 1945377054955743821LL;
static volatile uint32_t t6 = 235469991U;
uint16_t x31 = 0U;
uint16_t x32 = UINT16_MAX;
uint32_t x35 = 768359684U;
int32_t x36 = INT32_MAX;
int32_t x49 = INT32_MIN;
uint16_t x50 = 43U;
int8_t x51 = INT8_MIN;
int8_t x58 = INT8_MIN;
int32_t x59 = INT32_MIN;
volatile int64_t t14 = 2LL;
int64_t x62 = INT64_MAX;
int8_t x67 = INT8_MAX;
int8_t x72 = 26;
int32_t t17 = 472;
uint64_t x79 = UINT64_MAX;
volatile int64_t x88 = -22565362LL;
int8_t x96 = INT8_MAX;
int8_t x100 = 0;
int32_t x101 = -598;
uint32_t x102 = 21169U;
static int8_t x110 = -1;
int16_t x115 = -11;
int64_t t28 = 4067303289619795875LL;
uint16_t x122 = UINT16_MAX;
uint64_t x125 = 13541603800LLU;
static int32_t x130 = -1;
volatile int64_t t33 = -191947481LL;
int32_t x139 = INT32_MAX;
int64_t t35 = -143283749LL;
static int64_t x147 = INT64_MIN;
volatile uint8_t x149 = UINT8_MAX;
uint64_t t37 = 13LLU;
int8_t x153 = INT8_MIN;
volatile int8_t x154 = -1;
int16_t x155 = INT16_MIN;
static int64_t x159 = -1816322188293392LL;
volatile int64_t t39 = 2224933864483285442LL;
static uint8_t x161 = UINT8_MAX;
uint64_t t41 = 11971320423737911LLU;
volatile int8_t x171 = INT8_MIN;
int8_t x173 = INT8_MAX;
uint64_t x181 = 1LLU;
uint64_t x188 = UINT64_MAX;
uint32_t x192 = 15U;
volatile uint8_t x193 = 13U;
volatile int32_t x194 = INT32_MIN;
int64_t t48 = 1513LL;
int32_t x197 = -1589029;
uint32_t x199 = 86199304U;
uint8_t x210 = 8U;
volatile int8_t x212 = INT8_MIN;
int32_t x223 = INT32_MAX;
int8_t x227 = 13;
volatile int64_t t56 = 19724805LL;
volatile uint16_t x229 = UINT16_MAX;
int64_t x230 = INT64_MIN;
volatile uint16_t x234 = 2U;
uint32_t t58 = 99427342U;
int32_t x239 = INT32_MIN;
int8_t x240 = INT8_MIN;
static volatile int32_t t60 = -865865;
static int64_t x246 = -827LL;
int64_t x247 = -1LL;
int64_t x248 = -1LL;
int16_t x255 = INT16_MAX;
int8_t x258 = INT8_MAX;
int8_t x262 = -3;
volatile int64_t t68 = 3093193739480LL;
static volatile int32_t x282 = INT32_MIN;
int8_t x283 = -1;
int32_t x284 = INT32_MIN;
static int16_t x306 = -1;
int16_t x310 = -1;
int16_t x312 = INT16_MIN;
int16_t x331 = INT16_MAX;
int32_t x333 = -1;
volatile int64_t t85 = -2895887LL;
static int16_t x347 = INT16_MIN;
static uint8_t x348 = UINT8_MAX;
uint64_t x350 = 158LLU;
volatile int16_t x351 = 0;
static uint64_t x356 = 22842753147000778LLU;
static int8_t x368 = -1;
volatile int8_t x369 = INT8_MIN;
int64_t x383 = -1LL;
static int32_t x393 = 332706370;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint32_t x2 = 611925U;
	volatile int64_t x3 = -1LL;
	int8_t x4 = INT8_MIN;
	static int64_t t0 = -1061834196549LL;

	t0 = (x1%((x2|x3)|x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 28U;
	int64_t x6 = 45303LL;
	int16_t x7 = -41;
	uint16_t x8 = 31U;
	int64_t t1 = -3903882653274124766LL;

	t1 = (x5%((x6|x7)|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	int16_t x10 = INT16_MIN;
	uint16_t x11 = UINT16_MAX;
	uint32_t x12 = 0U;
	volatile uint32_t t2 = 22U;

	t2 = (x9%((x10|x11)|x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int16_t x14 = INT16_MIN;
	volatile uint32_t x15 = 2125206U;
	int8_t x16 = INT8_MIN;
	volatile uint32_t t3 = 4U;

	t3 = (x13%((x14|x15)|x16));

	if (t3 != 127U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 18LLU;
	int16_t x19 = INT16_MIN;
	volatile uint64_t t4 = 468572438096LLU;

	t4 = (x17%((x18|x19)|x20));

	if (t4 != 18LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint32_t x22 = 2652U;
	int64_t x23 = INT64_MAX;
	static int8_t x24 = INT8_MAX;

	t5 = (x21%((x22|x23)|x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 8U;
	static uint32_t x27 = 2757U;
	volatile int16_t x28 = 1769;

	t6 = (x25%((x26|x27)|x28));

	if (t6 != 255U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 653U;
	static int8_t x30 = INT8_MIN;
	volatile uint32_t t7 = 9765777U;

	t7 = (x29%((x30|x31)|x32));

	if (t7 != 653U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -6205628LL;
	volatile int16_t x34 = 10116;
	volatile int64_t t8 = -416670865126LL;

	t8 = (x33%((x34|x35)|x36));

	if (t8 != -6205628LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	int32_t x38 = -960;
	int64_t x39 = INT64_MAX;
	int32_t x40 = INT32_MAX;
	int64_t t9 = 158LL;

	t9 = (x37%((x38|x39)|x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static uint8_t x42 = 20U;
	volatile uint8_t x43 = 24U;
	int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -18719176314523LL;

	t10 = (x41%((x42|x43)|x44));

	if (t10 != 1567LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = UINT8_MAX;
	uint16_t x46 = 4207U;
	uint8_t x47 = 110U;
	int64_t x48 = INT64_MIN;
	static int64_t t11 = -1LL;

	t11 = (x45%((x46|x47)|x48));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x52 = -109660256LL;
	static int64_t t12 = -273LL;

	t12 = (x49%((x50|x51)|x52));

	if (t12 != -43LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = 1;
	int16_t x55 = INT16_MIN;
	static volatile int8_t x56 = INT8_MAX;
	int32_t t13 = -26798727;

	t13 = (x53%((x54|x55)|x56));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int64_t x60 = INT64_MIN;

	t14 = (x57%((x58|x59)|x60));

	if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -3;
	static uint64_t x63 = 1961714382560389119LLU;
	volatile uint8_t x64 = 26U;
	uint64_t t15 = 4040154845352LLU;

	t15 = (x61%((x62|x63)|x64));

	if (t15 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	uint16_t x66 = 3U;
	int8_t x68 = -1;
	int32_t t16 = 0;

	t16 = (x65%((x66|x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 4378U;
	int32_t x70 = INT32_MAX;
	volatile int16_t x71 = INT16_MIN;

	t17 = (x69%((x70|x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	volatile int32_t x74 = -1;
	volatile int8_t x75 = 4;
	int64_t x76 = -1LL;
	int64_t t18 = -2218112268046LL;

	t18 = (x73%((x74|x75)|x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -259740;
	int8_t x78 = -8;
	static volatile uint16_t x80 = UINT16_MAX;
	volatile uint64_t t19 = 684186888066347501LLU;

	t19 = (x77%((x78|x79)|x80));

	if (t19 != 18446744073709291876LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int32_t x82 = -72;
	static int8_t x83 = INT8_MIN;
	int64_t x84 = 351714279221193118LL;
	int64_t t20 = -7211304281LL;

	t20 = (x81%((x82|x83)|x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 2100U;
	int8_t x86 = 0;
	static uint16_t x87 = UINT16_MAX;
	int64_t t21 = 3416470327598369LL;

	t21 = (x85%((x86|x87)|x88));

	if (t21 != 2100LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -6;
	static int64_t x90 = 3768742237866110LL;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = 46U;
	int64_t t22 = -48803010LL;

	t22 = (x89%((x90|x91)|x92));

	if (t22 != -6LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = -1;
	int8_t x95 = -1;
	volatile int64_t t23 = -13406362360056LL;

	t23 = (x93%((x94|x95)|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -184;
	int8_t x98 = -6;
	int8_t x99 = INT8_MIN;
	volatile int32_t t24 = -1;

	t24 = (x97%((x98|x99)|x100));

	if (t24 != -4) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x103 = INT8_MAX;
	volatile int32_t x104 = -1;
	volatile uint32_t t25 = 0U;

	t25 = (x101%((x102|x103)|x104));

	if (t25 != 4294966698U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MAX;
	int8_t x107 = -1;
	int8_t x108 = 0;
	int32_t t26 = 19;

	t26 = (x105%((x106|x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -3541127124606642LL;
	int16_t x111 = 8;
	static uint8_t x112 = 2U;
	volatile int64_t t27 = 2761LL;

	t27 = (x109%((x110|x111)|x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 580;
	int64_t x114 = -1LL;
	int64_t x116 = -1LL;

	t28 = (x113%((x114|x115)|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile uint16_t x118 = UINT16_MAX;
	int32_t x119 = INT32_MIN;
	volatile int32_t x120 = -1;
	static volatile int32_t t29 = 7;

	t29 = (x117%((x118|x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	uint8_t x123 = 1U;
	int64_t x124 = 136456894784079901LL;
	int64_t t30 = -2560455LL;

	t30 = (x121%((x122|x123)|x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -42;
	static int8_t x127 = -1;
	int32_t x128 = INT32_MIN;
	uint64_t t31 = 1991LLU;

	t31 = (x125%((x126|x127)|x128));

	if (t31 != 13541603800LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -12952848;
	uint32_t x131 = UINT32_MAX;
	uint16_t x132 = UINT16_MAX;
	uint32_t t32 = 112U;

	t32 = (x129%((x130|x131)|x132));

	if (t32 != 4282014448U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static volatile int8_t x134 = -20;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MIN;

	t33 = (x133%((x134|x135)|x136));

	if (t33 != -8LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 22;
	int8_t x138 = INT8_MAX;
	int16_t x140 = -1;
	volatile int32_t t34 = -97941387;

	t34 = (x137%((x138|x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MAX;
	static int64_t x144 = -1054304798037456LL;

	t35 = (x141%((x142|x143)|x144));

	if (t35 != -349086473LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -17;
	uint16_t x146 = 7264U;
	uint16_t x148 = UINT16_MAX;
	volatile int64_t t36 = 279380211129LL;

	t36 = (x145%((x146|x147)|x148));

	if (t36 != -17LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x150 = 469151LLU;
	static volatile int16_t x151 = INT16_MAX;
	static int32_t x152 = -30023;

	t37 = (x149%((x150|x151)|x152));

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -3;

	t38 = (x153%((x154|x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = 2021LL;
	int16_t x160 = INT16_MIN;

	t39 = (x157%((x158|x159)|x160));

	if (t39 != -11957LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	int32_t x164 = -55;
	volatile int64_t t40 = 122212390227992LL;

	t40 = (x161%((x162|x163)|x164));

	if (t40 != 35LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	volatile int16_t x166 = -9333;
	static uint64_t x167 = 1490974LLU;
	int8_t x168 = 1;

	t41 = (x165%((x166|x167)|x168));

	if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = 11;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 0;

	t42 = (x169%((x170|x171)|x172));

	if (t42 != 10) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 19115U;
	static int32_t x175 = -23009;
	int64_t x176 = INT64_MIN;
	int64_t t43 = 832113653905050LL;

	t43 = (x173%((x174|x175)|x176));

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	volatile int16_t x179 = INT16_MIN;
	uint8_t x180 = 0U;
	uint32_t t44 = 202563694U;

	t44 = (x177%((x178|x179)|x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = INT32_MAX;
	static uint8_t x183 = UINT8_MAX;
	static volatile uint64_t x184 = 462360257594112135LLU;
	static volatile uint64_t t45 = 484LLU;

	t45 = (x181%((x182|x183)|x184));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = 1U;
	uint64_t t46 = 13LLU;

	t46 = (x185%((x186|x187)|x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 26U;
	int32_t x190 = -47454422;
	volatile int8_t x191 = -5;
	volatile uint32_t t47 = 24352U;

	t47 = (x189%((x190|x191)|x192));

	if (t47 != 26U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;

	t48 = (x193%((x194|x195)|x196));

	if (t48 != 13LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 2000U;
	uint64_t x200 = 400456106LLU;
	uint64_t t49 = 6LLU;

	t49 = (x197%((x198|x199)|x200));

	if (t49 != 38186317LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x201 = INT16_MIN;
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = 1037921U;
	int64_t x204 = -1LL;
	static int64_t t50 = -243659LL;

	t50 = (x201%((x202|x203)|x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -509426365974LL;
	volatile uint64_t x206 = UINT64_MAX;
	uint16_t x207 = UINT16_MAX;
	int64_t x208 = -1093727016692573175LL;
	volatile uint64_t t51 = 273163332028LLU;

	t51 = (x205%((x206|x207)|x208));

	if (t51 != 18446743564283185642LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -25LL;
	int8_t x211 = -1;
	volatile int64_t t52 = 11572965796LL;

	t52 = (x209%((x210|x211)|x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = 314;

	t53 = (x213%((x214|x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -1;
	volatile int32_t x218 = INT32_MIN;
	int32_t x219 = 218095913;
	uint16_t x220 = 27044U;
	static volatile int32_t t54 = 60569;

	t54 = (x217%((x218|x219)|x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 25U;
	static volatile uint16_t x222 = UINT16_MAX;
	uint64_t x224 = 323779923532LLU;
	static volatile uint64_t t55 = 22393030327LLU;

	t55 = (x221%((x222|x223)|x224));

	if (t55 != 25LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 238;
	volatile int64_t x226 = INT64_MIN;
	int16_t x228 = INT16_MAX;

	t56 = (x225%((x226|x227)|x228));

	if (t56 != 238LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x231 = -1;
	uint16_t x232 = 2U;
	static volatile int64_t t57 = 2851420LL;

	t57 = (x229%((x230|x231)|x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int16_t x235 = INT16_MAX;
	volatile uint32_t x236 = 2868714U;

	t58 = (x233%((x234|x235)|x236));

	if (t58 != 1312081U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = -14370;
	uint16_t x238 = UINT16_MAX;
	int32_t t59 = -4792685;

	t59 = (x237%((x238|x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int8_t x242 = INT8_MIN;
	int16_t x243 = -1;
	uint16_t x244 = 0U;

	t60 = (x241%((x242|x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	volatile int64_t t61 = -1058279971228LL;

	t61 = (x245%((x246|x247)|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MIN;
	static volatile uint8_t x250 = UINT8_MAX;
	uint64_t x251 = 246632969138145733LLU;
	int64_t x252 = -1LL;
	volatile uint64_t t62 = 48104550114559002LLU;

	t62 = (x249%((x250|x251)|x252));

	if (t62 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 1273;
	uint32_t x254 = 8033554U;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = 90971821075936LL;

	t63 = (x253%((x254|x255)|x256));

	if (t63 != 1273LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	uint32_t x259 = UINT32_MAX;
	static int8_t x260 = 5;
	volatile int64_t t64 = -63LL;

	t64 = (x257%((x258|x259)|x260));

	if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	static int32_t x263 = INT32_MIN;
	volatile int64_t x264 = INT64_MIN;
	int64_t t65 = 170513117LL;

	t65 = (x261%((x262|x263)|x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 18501LL;
	uint32_t x266 = 4010U;
	int64_t x267 = -249411397LL;
	static volatile int32_t x268 = -526;
	static volatile int64_t t66 = 24LL;

	t66 = (x265%((x266|x267)|x268));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	static int16_t x271 = INT16_MIN;
	volatile int32_t x272 = 125814;
	uint64_t t67 = 11547093088444LLU;

	t67 = (x269%((x270|x271)|x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	volatile uint32_t x274 = 5497792U;
	static int16_t x275 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;

	t68 = (x273%((x274|x275)|x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 2U;
	static uint32_t x278 = UINT32_MAX;
	volatile int8_t x279 = 6;
	int8_t x280 = INT8_MIN;
	volatile uint32_t t69 = 1960337466U;

	t69 = (x277%((x278|x279)|x280));

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int32_t t70 = -440475;

	t70 = (x281%((x282|x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MAX;
	int64_t x286 = 324012168367004LL;
	int16_t x287 = -1;
	static int32_t x288 = 12;
	static int64_t t71 = -6LL;

	t71 = (x285%((x286|x287)|x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 7U;
	uint8_t x290 = UINT8_MAX;
	uint16_t x291 = 116U;
	static int64_t x292 = INT64_MAX;
	volatile int64_t t72 = 93760LL;

	t72 = (x289%((x290|x291)|x292));

	if (t72 != 7LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int8_t x294 = INT8_MIN;
	int64_t x295 = 20376431LL;
	volatile uint32_t x296 = UINT32_MAX;
	int64_t t73 = 177LL;

	t73 = (x293%((x294|x295)|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = 10U;
	int16_t x298 = 25;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = 31U;
	uint32_t t74 = 13991U;

	t74 = (x297%((x298|x299)|x300));

	if (t74 != 10U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	volatile int64_t x303 = INT64_MAX;
	int32_t x304 = -1352556;
	volatile int64_t t75 = 0LL;

	t75 = (x301%((x302|x303)|x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int64_t x307 = 211332397248LL;
	uint8_t x308 = UINT8_MAX;
	static int64_t t76 = -11512748972956112LL;

	t76 = (x305%((x306|x307)|x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = 999;
	int64_t x311 = 2548169LL;
	volatile int64_t t77 = 261548LL;

	t77 = (x309%((x310|x311)|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = -1;
	int8_t x314 = 0;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = -1;
	volatile uint32_t t78 = 8226349U;

	t78 = (x313%((x314|x315)|x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -27494168675756151LL;
	uint8_t x318 = UINT8_MAX;
	static int32_t x319 = 376;
	int8_t x320 = 7;
	volatile int64_t t79 = -77251764546792LL;

	t79 = (x317%((x318|x319)|x320));

	if (t79 != -362LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = 16297;
	static uint8_t x322 = 19U;
	static int8_t x323 = -1;
	int8_t x324 = -1;
	int32_t t80 = -114844;

	t80 = (x321%((x322|x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	volatile uint16_t x326 = 400U;
	static int32_t x327 = -1;
	int16_t x328 = INT16_MIN;
	static int32_t t81 = -4545440;

	t81 = (x325%((x326|x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MIN;
	volatile int64_t x330 = INT64_MIN;
	uint8_t x332 = 62U;
	static int64_t t82 = 436625516407143991LL;

	t82 = (x329%((x330|x331)|x332));

	if (t82 != -32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 2U;
	int8_t x335 = 25;
	static int32_t x336 = -1;
	static int32_t t83 = -344;

	t83 = (x333%((x334|x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x337 = 4U;
	static volatile int64_t x338 = INT64_MAX;
	static int32_t x339 = INT32_MAX;
	int32_t x340 = 1017470;
	static int64_t t84 = 11127598624570297LL;

	t84 = (x337%((x338|x339)|x340));

	if (t84 != 4LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -1;
	static int64_t x342 = INT64_MIN;
	volatile int64_t x343 = INT64_MIN;
	uint8_t x344 = 38U;

	t85 = (x341%((x342|x343)|x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MAX;
	volatile int32_t t86 = -2261;

	t86 = (x345%((x346|x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 62U;
	int16_t x352 = 15250;
	volatile uint64_t t87 = 472749830LLU;

	t87 = (x349%((x350|x351)|x352));

	if (t87 != 62LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 27U;
	static uint16_t x354 = 1188U;
	int16_t x355 = -1;
	volatile uint64_t t88 = 648920158LLU;

	t88 = (x353%((x354|x355)|x356));

	if (t88 != 27LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	volatile int32_t x359 = INT32_MAX;
	volatile uint16_t x360 = 69U;
	volatile int64_t t89 = 2852890185932913LL;

	t89 = (x357%((x358|x359)|x360));

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MAX;
	uint32_t x362 = 0U;
	volatile uint16_t x363 = 2U;
	uint16_t x364 = 59U;
	volatile uint32_t t90 = 12677U;

	t90 = (x361%((x362|x363)|x364));

	if (t90 != 54U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 6386272U;
	static uint32_t x366 = 58176U;
	int64_t x367 = -1LL;
	volatile int64_t t91 = 6LL;

	t91 = (x365%((x366|x367)|x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x370 = 5U;
	uint32_t x371 = 121303U;
	int32_t x372 = INT32_MIN;
	volatile uint32_t t92 = 229946403U;

	t92 = (x369%((x370|x371)|x372));

	if (t92 != 2147362217U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 19U;
	uint8_t x374 = 54U;
	static int16_t x375 = INT16_MAX;
	static int64_t x376 = INT64_MAX;
	int64_t t93 = -8537914835LL;

	t93 = (x373%((x374|x375)|x376));

	if (t93 != 19LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 12128U;
	static volatile int32_t x378 = -1;
	int32_t x379 = -467680434;
	int64_t x380 = INT64_MIN;
	volatile int64_t t94 = 0LL;

	t94 = (x377%((x378|x379)|x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 0U;
	volatile uint32_t x382 = UINT32_MAX;
	static int64_t x384 = INT64_MAX;
	int64_t t95 = 366262842LL;

	t95 = (x381%((x382|x383)|x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -968729886;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -411293915;

	t96 = (x385%((x386|x387)|x388));

	if (t96 != -968729886) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 41U;
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = 50U;
	volatile int64_t t97 = -34005LL;

	t97 = (x389%((x390|x391)|x392));

	if (t97 != 41LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x394 = UINT8_MAX;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -1311624;

	t98 = (x393%((x394|x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile int64_t x398 = -1LL;
	int16_t x399 = 1347;
	int8_t x400 = INT8_MAX;
	int64_t t99 = 15976082LL;

	t99 = (x397%((x398|x399)|x400));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

