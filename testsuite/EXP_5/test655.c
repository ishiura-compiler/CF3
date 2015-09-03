#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 0U;
volatile int64_t t0 = 27LL;
uint32_t x5 = UINT32_MAX;
int8_t x10 = -31;
uint32_t x20 = 825U;
static uint32_t t4 = 44397U;
uint64_t t5 = 20796591LLU;
int32_t x35 = INT32_MIN;
int16_t x36 = -1;
uint64_t x42 = 3674518131381272603LLU;
int16_t x45 = -2037;
int64_t t10 = 3760423654689699LL;
uint8_t x53 = UINT8_MAX;
uint32_t t12 = 7608U;
uint16_t x68 = UINT16_MAX;
uint64_t t14 = 4423114LLU;
int8_t x79 = INT8_MIN;
int32_t x82 = INT32_MIN;
volatile int32_t x84 = 676;
int8_t x86 = INT8_MIN;
uint64_t x87 = 32348308LLU;
uint64_t t18 = 2628185LLU;
uint8_t x90 = 111U;
volatile uint8_t x95 = 103U;
uint16_t x100 = 2669U;
static int16_t x102 = -85;
volatile uint32_t x104 = 501489U;
int32_t x110 = -1;
uint64_t x113 = 66114308741966878LLU;
static int16_t x118 = -29;
uint16_t x120 = UINT16_MAX;
int16_t x121 = -1;
uint64_t x124 = UINT64_MAX;
static volatile uint64_t t27 = 9804LLU;
int32_t x126 = -37445;
int64_t x128 = -1LL;
static int64_t x130 = INT64_MAX;
uint64_t x131 = 1457106130017037302LLU;
volatile uint64_t t29 = 75728063LLU;
static int8_t x134 = 0;
int32_t x140 = INT32_MIN;
volatile int8_t x144 = 14;
volatile int64_t t35 = -245273490LL;
int32_t x159 = -1;
static int64_t t36 = -3LL;
uint8_t x167 = 36U;
int8_t x176 = -7;
static uint32_t x180 = 31U;
int64_t t41 = 62864063775LL;
static int64_t x192 = INT64_MIN;
volatile uint64_t x193 = 12919393LLU;
uint8_t x195 = UINT8_MAX;
uint64_t t44 = 178063342891287992LLU;
uint16_t x203 = UINT16_MAX;
volatile int64_t x215 = -388056789438516LL;
volatile uint16_t x216 = 1940U;
static volatile int64_t x225 = INT64_MIN;
int8_t x228 = INT8_MAX;
int16_t x229 = INT16_MIN;
volatile int16_t x235 = -6;
int8_t x239 = -1;
volatile int32_t t54 = 3;
int8_t x241 = -20;
volatile uint32_t t55 = 3799U;
uint8_t x245 = 12U;
int64_t x253 = -1LL;
static uint16_t x256 = 3U;
uint64_t t59 = 1980671026865327LLU;
int8_t x267 = -1;
uint16_t x273 = 1U;
uint16_t x274 = UINT16_MAX;
uint32_t x277 = UINT32_MAX;
int32_t x281 = INT32_MIN;
int64_t x285 = INT64_MAX;
volatile int8_t x287 = INT8_MIN;
static int32_t x288 = -1;
int64_t t65 = 299807862190587LL;
int64_t x289 = -2LL;
volatile uint64_t x290 = 1163110LLU;
int32_t x295 = INT32_MIN;
static int64_t x298 = INT64_MIN;
int64_t t70 = -21474881LL;
volatile uint64_t t71 = 11505185660485LLU;
static uint8_t x315 = 1U;
int64_t x316 = -44LL;
volatile int32_t x320 = INT32_MIN;
volatile int16_t x324 = INT16_MIN;
uint64_t t77 = 282745LLU;
uint64_t x341 = 189609571628930LLU;
int64_t x342 = 33146510LL;
volatile uint64_t t78 = 2LLU;
int8_t x345 = -1;
volatile uint32_t t83 = 19U;
static volatile uint16_t x368 = 1371U;
uint32_t x372 = 6U;
int64_t x374 = 53205656LL;
static int32_t x377 = 28197708;
static volatile uint64_t x387 = 89LLU;
static int64_t x389 = INT64_MAX;
int32_t x407 = INT32_MIN;
int16_t x408 = 1;
volatile int32_t x415 = INT32_MIN;
uint8_t x417 = UINT8_MAX;
volatile int16_t x418 = INT16_MIN;
volatile int64_t x426 = INT64_MIN;
int32_t x427 = -2758384;


void f0(void) {
	static int64_t x1 = -66654251940873764LL;
	int64_t x2 = 12739041082621684LL;
	volatile uint8_t x3 = UINT8_MAX;

	t0 = (x1%((x2/x3)|x4));

	if (t0 != -11582120414152LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 218125715LL;
	uint8_t x7 = 3U;
	int16_t x8 = INT16_MIN;
	int64_t t1 = 105620574LL;

	t1 = (x5%((x6/x7)|x8));

	if (t1 != 1428LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 399349LLU;
	int8_t x11 = INT8_MAX;
	int32_t x12 = -24383;
	static volatile uint64_t t2 = 31823990LLU;

	t2 = (x9%((x10/x11)|x12));

	if (t2 != 399349LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 1557524U;
	int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MIN;
	static int16_t x16 = -51;
	uint32_t t3 = 53U;

	t3 = (x13%((x14/x15)|x16));

	if (t3 != 1557524U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	volatile int16_t x19 = INT16_MIN;

	t4 = (x17%((x18/x19)|x20));

	if (t4 != 41688U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1294U;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = 14322;
	volatile int8_t x24 = INT8_MIN;

	t5 = (x21%((x22/x23)|x24));

	if (t5 != 1294LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MAX;
	uint16_t x30 = 5734U;
	static volatile uint8_t x31 = 5U;
	int16_t x32 = INT16_MAX;
	int32_t t6 = 2889;

	t6 = (x29%((x30/x31)|x32));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = -76;
	int64_t t7 = 808286LL;

	t7 = (x33%((x34/x35)|x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 117583200U;
	static int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	int64_t x40 = INT64_MIN;
	int64_t t8 = -28862446019884883LL;

	t8 = (x37%((x38/x39)|x40));

	if (t8 != 117583200LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	uint64_t x43 = 8707595158103936451LLU;
	int8_t x44 = -3;
	uint64_t t9 = 294989728877334LLU;

	t9 = (x41%((x42/x43)|x44));

	if (t9 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -28;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;

	t10 = (x45%((x46/x47)|x48));

	if (t10 != -2037LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = 49U;
	uint64_t x55 = UINT64_MAX;
	static volatile int8_t x56 = INT8_MIN;
	static volatile uint64_t t11 = 8677LLU;

	t11 = (x53%((x54/x55)|x56));

	if (t11 != 255LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 9912U;

	t12 = (x57%((x58/x59)|x60));

	if (t12 != 14447U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = INT64_MAX;
	static int32_t x66 = -1;
	volatile uint64_t x67 = UINT64_MAX;
	volatile uint64_t t13 = 19371287LLU;

	t13 = (x65%((x66/x67)|x68));

	if (t13 != 32767LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 92681718943LLU;
	uint64_t x70 = UINT64_MAX;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = INT64_MIN;

	t14 = (x69%((x70/x71)|x72));

	if (t14 != 92681718943LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	volatile int64_t x74 = 89130LL;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MAX;
	int64_t t15 = -2725726664LL;

	t15 = (x73%((x74/x75)|x76));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x78 = 0U;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t16 = -98728;

	t16 = (x77%((x78/x79)|x80));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = -1LL;
	int64_t x83 = -64700227949LL;
	int64_t t17 = -70569019113LL;

	t17 = (x81%((x82/x83)|x84));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	int32_t x88 = 1;

	t18 = (x85%((x86/x87)|x88));

	if (t18 != 29096068LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = INT8_MAX;
	uint16_t x91 = 26797U;
	volatile int64_t x92 = INT64_MAX;
	int64_t t19 = 18579495038199LL;

	t19 = (x89%((x90/x91)|x92));

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = -1;
	int64_t x96 = INT64_MIN;
	static volatile int64_t t20 = 23LL;

	t20 = (x93%((x94/x95)|x96));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1;
	volatile uint32_t x98 = 137U;
	uint64_t x99 = 9981632215169LLU;
	uint64_t t21 = 32014645408186LLU;

	t21 = (x97%((x98/x99)|x100));

	if (t21 != 170LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 1U;
	static uint16_t x103 = 1516U;
	uint32_t t22 = 904U;

	t22 = (x101%((x102/x103)|x104));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MAX;
	uint64_t x107 = UINT64_MAX;
	volatile int16_t x108 = INT16_MAX;
	uint64_t t23 = 574920283061744879LLU;

	t23 = (x105%((x106/x107)|x108));

	if (t23 != 7LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = 113550011;
	volatile uint16_t x111 = 64U;
	uint16_t x112 = 3376U;
	int32_t t24 = -3485439;

	t24 = (x109%((x110/x111)|x112));

	if (t24 != 1627) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x114 = 27035U;
	uint64_t x115 = 836395626LLU;
	static volatile int16_t x116 = INT16_MIN;
	uint64_t t25 = 1876263538795975LLU;

	t25 = (x113%((x114/x115)|x116));

	if (t25 != 66114308741966878LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x117 = INT32_MIN;
	volatile int64_t x119 = INT64_MIN;
	static volatile int64_t t26 = 136664509302762511LL;

	t26 = (x117%((x118/x119)|x120));

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MIN;

	t27 = (x121%((x122/x123)|x124));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = UINT64_MAX;
	static int32_t x127 = -1;
	volatile uint64_t t28 = 6965LLU;

	t28 = (x125%((x126/x127)|x128));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = INT64_MIN;
	int64_t x132 = INT64_MIN;

	t29 = (x129%((x130/x131)|x132));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x135 = 652044677332LL;
	int64_t x136 = INT64_MIN;
	int64_t t30 = -93333478LL;

	t30 = (x133%((x134/x135)|x136));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	int16_t x138 = 13521;
	int8_t x139 = -1;
	static volatile int64_t t31 = 20459807658618LL;

	t31 = (x137%((x138/x139)|x140));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 26632U;
	static int64_t x142 = INT64_MAX;
	int64_t x143 = INT64_MIN;
	static volatile int64_t t32 = 38354LL;

	t32 = (x141%((x142/x143)|x144));

	if (t32 != 4LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = UINT16_MAX;
	static uint32_t x146 = 1459427694U;
	int32_t x147 = 1;
	volatile int32_t x148 = INT32_MIN;
	volatile uint32_t t33 = 2095394077U;

	t33 = (x145%((x146/x147)|x148));

	if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MAX;
	uint8_t x151 = UINT8_MAX;
	static int16_t x152 = -1;
	static volatile int32_t t34 = 1117015;

	t34 = (x149%((x150/x151)|x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = INT32_MAX;
	int8_t x154 = INT8_MAX;
	static int64_t x155 = -1LL;
	static int16_t x156 = 1207;

	t35 = (x153%((x154/x155)|x156));

	if (t35 != 15LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x157 = 7318U;
	static int64_t x158 = INT64_MAX;
	int64_t x160 = INT64_MIN;

	t36 = (x157%((x158/x159)|x160));

	if (t36 != 7318LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	static int8_t x162 = -2;
	int8_t x163 = INT8_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t37 = 383U;

	t37 = (x161%((x162/x163)|x164));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 444828350057LLU;
	int16_t x166 = -3486;
	int32_t x168 = INT32_MIN;
	uint64_t t38 = 128265385501LLU;

	t38 = (x165%((x166/x167)|x168));

	if (t38 != 444828350057LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -1;
	int8_t x174 = INT8_MIN;
	volatile int64_t x175 = INT64_MIN;
	int64_t t39 = -1LL;

	t39 = (x173%((x174/x175)|x176));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x177 = 10LLU;
	volatile uint32_t x178 = UINT32_MAX;
	int32_t x179 = -1;
	static volatile uint64_t t40 = 1LLU;

	t40 = (x177%((x178/x179)|x180));

	if (t40 != 10LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 6U;
	volatile int64_t x182 = -242390852857LL;
	static int16_t x183 = INT16_MAX;
	static uint16_t x184 = 87U;

	t41 = (x181%((x182/x183)|x184));

	if (t41 != 6LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = 1295;
	int8_t x186 = -27;
	static int64_t x187 = -1853844026545894633LL;
	uint64_t x188 = 3517LLU;
	volatile uint64_t t42 = 27945594682374259LLU;

	t42 = (x185%((x186/x187)|x188));

	if (t42 != 1295LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = INT16_MIN;
	uint8_t x190 = 11U;
	static uint64_t x191 = 4853LLU;
	volatile uint64_t t43 = 38551376906LLU;

	t43 = (x189%((x190/x191)|x192));

	if (t43 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x194 = INT32_MIN;
	int16_t x196 = INT16_MIN;

	t44 = (x193%((x194/x195)|x196));

	if (t44 != 12919393LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = 1032543271LLU;
	volatile int16_t x198 = INT16_MIN;
	uint16_t x199 = 11079U;
	volatile int32_t x200 = INT32_MIN;
	volatile uint64_t t45 = 42LLU;

	t45 = (x197%((x198/x199)|x200));

	if (t45 != 1032543271LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -1;
	static int8_t x202 = -1;
	static int8_t x204 = -1;
	static volatile int32_t t46 = -10601636;

	t46 = (x201%((x202/x203)|x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int16_t x210 = 38;
	int64_t x211 = INT64_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t47 = 11750534LLU;

	t47 = (x209%((x210/x211)|x212));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MAX;
	int8_t x214 = -4;
	int64_t t48 = 9LL;

	t48 = (x213%((x214/x215)|x216));

	if (t48 != 1727LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MAX;
	static uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MAX;
	int32_t t49 = 4;

	t49 = (x217%((x218/x219)|x220));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x221 = INT16_MIN;
	volatile uint32_t x222 = 9593623U;
	int8_t x223 = 27;
	int32_t x224 = 1476;
	uint32_t t50 = 181601U;

	t50 = (x221%((x222/x223)|x224));

	if (t50 != 288692U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x226 = -1;
	volatile int64_t x227 = -1LL;
	volatile int64_t t51 = 24685851LL;

	t51 = (x225%((x226/x227)|x228));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x230 = INT64_MIN;
	static int8_t x231 = 1;
	int16_t x232 = INT16_MIN;
	volatile int64_t t52 = 13886933001LL;

	t52 = (x229%((x230/x231)|x232));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MAX;
	static uint8_t x236 = 0U;
	int32_t t53 = 0;

	t53 = (x233%((x234/x235)|x236));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = -1;
	int8_t x238 = INT8_MIN;
	uint8_t x240 = 3U;

	t54 = (x237%((x238/x239)|x240));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x242 = 2U;
	uint8_t x243 = 1U;
	static uint8_t x244 = 0U;

	t55 = (x241%((x242/x243)|x244));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x246 = UINT16_MAX;
	int32_t x247 = INT32_MIN;
	int32_t x248 = 15666;
	int32_t t56 = -5;

	t56 = (x245%((x246/x247)|x248));

	if (t56 != 12) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = -1LL;
	volatile int64_t t57 = -523754937692323243LL;

	t57 = (x253%((x254/x255)|x256));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x257 = 22U;
	int64_t x258 = -4LL;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MAX;
	volatile int64_t t58 = -1386534LL;

	t58 = (x257%((x258/x259)|x260));

	if (t58 != 22LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = UINT32_MAX;
	int32_t x262 = 7;
	uint8_t x263 = 10U;
	uint64_t x264 = 4157561LLU;

	t59 = (x261%((x262/x263)|x264));

	if (t59 != 206782LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x265 = 385328;
	static volatile int16_t x266 = -1;
	uint16_t x268 = 2U;
	volatile int32_t t60 = -65;

	t60 = (x265%((x266/x267)|x268));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -1;
	uint16_t x270 = 13894U;
	int16_t x271 = INT16_MIN;
	volatile uint32_t x272 = 65U;
	volatile uint32_t t61 = 1420U;

	t61 = (x269%((x270/x271)|x272));

	if (t61 != 60U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	volatile int64_t t62 = 910LL;

	t62 = (x273%((x274/x275)|x276));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x278 = 6U;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 464411U;
	static volatile int64_t t63 = 128580056323014LL;

	t63 = (x277%((x278/x279)|x280));

	if (t63 != 94367LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x282 = -14622;
	int32_t x283 = INT32_MIN;
	static int64_t x284 = INT64_MAX;
	volatile int64_t t64 = 25954061601691297LL;

	t64 = (x281%((x282/x283)|x284));

	if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x286 = 11;

	t65 = (x285%((x286/x287)|x288));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x291 = INT8_MIN;
	int64_t x292 = -1LL;
	uint64_t t66 = 84250876437LLU;

	t66 = (x289%((x290/x291)|x292));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = -16;
	uint8_t x294 = 0U;
	int16_t x296 = INT16_MIN;
	static int32_t t67 = 476630140;

	t67 = (x293%((x294/x295)|x296));

	if (t67 != -16) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x297 = INT32_MAX;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = -1LL;
	int64_t t68 = 0LL;

	t68 = (x297%((x298/x299)|x300));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -9;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 6U;
	uint16_t x304 = 235U;
	volatile int32_t t69 = 31;

	t69 = (x301%((x302/x303)|x304));

	if (t69 != -9) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = 33U;
	int64_t x308 = INT64_MAX;

	t70 = (x305%((x306/x307)|x308));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x309 = UINT64_MAX;
	int8_t x310 = INT8_MAX;
	int64_t x311 = INT64_MIN;
	uint64_t x312 = 586186LLU;

	t71 = (x309%((x310/x311)|x312));

	if (t71 != 585397LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = 259;
	static uint8_t x314 = 2U;
	int64_t t72 = -8147LL;

	t72 = (x313%((x314/x315)|x316));

	if (t72 != 7LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = 15083668806187LL;
	uint32_t x318 = UINT32_MAX;
	static uint8_t x319 = UINT8_MAX;
	int64_t t73 = 4463LL;

	t73 = (x317%((x318/x319)|x320));

	if (t73 != 476333554LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x322 = INT32_MAX;
	int8_t x323 = INT8_MIN;
	volatile int32_t t74 = -774;

	t74 = (x321%((x322/x323)|x324));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = UINT8_MAX;
	static uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 8U;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t75 = 59168LL;

	t75 = (x325%((x326/x327)|x328));

	if (t75 != 255LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	static volatile int32_t x334 = -11;
	uint8_t x335 = 9U;
	int16_t x336 = INT16_MIN;
	int32_t t76 = -33426;

	t76 = (x333%((x334/x335)|x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = INT64_MAX;
	uint16_t x338 = 383U;
	uint32_t x339 = UINT32_MAX;
	volatile uint64_t x340 = UINT64_MAX;

	t77 = (x337%((x338/x339)|x340));

	if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = 8554;

	t78 = (x341%((x342/x343)|x344));

	if (t78 != 7278LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x346 = 57652LL;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -1LL;
	volatile int64_t t79 = 3213LL;

	t79 = (x345%((x346/x347)|x348));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x349 = INT16_MIN;
	int8_t x350 = 0;
	volatile int32_t x351 = -1;
	int32_t x352 = -1;
	volatile int32_t t80 = -128806;

	t80 = (x349%((x350/x351)|x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	static volatile uint32_t x354 = 16237U;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	static int64_t t81 = 2867774433LL;

	t81 = (x353%((x354/x355)|x356));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x357 = 10606272LLU;
	volatile int64_t x358 = INT64_MAX;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	volatile uint64_t t82 = 285378LLU;

	t82 = (x357%((x358/x359)|x360));

	if (t82 != 10606272LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x361 = 13743553U;
	int32_t x362 = 14;
	int16_t x363 = -254;
	int8_t x364 = -1;

	t83 = (x361%((x362/x363)|x364));

	if (t83 != 13743553U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MAX;
	int16_t x366 = -1;
	uint8_t x367 = 54U;
	static int64_t t84 = -2599665963LL;

	t84 = (x365%((x366/x367)|x368));

	if (t84 != 1249LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = -62071582862005LL;
	int8_t x371 = INT8_MIN;
	int64_t t85 = -16647018102226294LL;

	t85 = (x369%((x370/x371)|x372));

	if (t85 != 4294967295LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x373 = INT16_MAX;
	static uint32_t x375 = 2U;
	static int16_t x376 = INT16_MIN;
	volatile int64_t t86 = 532978825964404001LL;

	t86 = (x373%((x374/x375)|x376));

	if (t86 != 4039LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x378 = INT64_MIN;
	volatile uint64_t x379 = 265548928LLU;
	int8_t x380 = INT8_MIN;
	uint64_t t87 = 43044LLU;

	t87 = (x377%((x378/x379)|x380));

	if (t87 != 28197708LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x381 = 1U;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = -1LL;
	int16_t x384 = -1;
	int64_t t88 = 228352523038LL;

	t88 = (x381%((x382/x383)|x384));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = 101769427672001391LL;
	static int16_t x386 = INT16_MAX;
	static int32_t x388 = -1;
	uint64_t t89 = 1563687556304732LLU;

	t89 = (x385%((x386/x387)|x388));

	if (t89 != 101769427672001391LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x390 = 170745227952962907LL;
	int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MIN;
	int64_t t90 = 123LL;

	t90 = (x389%((x390/x391)|x392));

	if (t90 != 1411LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = -1;
	int16_t x394 = -1;
	uint16_t x395 = 25U;
	int16_t x396 = INT16_MIN;
	static int32_t t91 = -300868241;

	t91 = (x393%((x394/x395)|x396));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x397 = -185808488598LL;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	int64_t x400 = -1LL;
	int64_t t92 = 53676530615275LL;

	t92 = (x397%((x398/x399)|x400));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = -18;
	static int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MAX;
	int64_t x404 = INT64_MIN;
	volatile int64_t t93 = -3977690LL;

	t93 = (x401%((x402/x403)|x404));

	if (t93 != -18LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MAX;
	int16_t x406 = 3733;
	static volatile int64_t t94 = -1478LL;

	t94 = (x405%((x406/x407)|x408));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = 0LL;
	static int16_t x410 = 2;
	volatile uint32_t x411 = UINT32_MAX;
	static uint16_t x412 = 1837U;
	volatile int64_t t95 = 11529688037980008LL;

	t95 = (x409%((x410/x411)|x412));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x413 = -1LL;
	volatile int16_t x414 = -1;
	static int8_t x416 = 1;
	volatile int64_t t96 = -10LL;

	t96 = (x413%((x414/x415)|x416));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x419 = -1;
	static int64_t x420 = -1LL;
	volatile int64_t t97 = -31390983405LL;

	t97 = (x417%((x418/x419)|x420));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x421 = -1;
	int8_t x422 = -18;
	int16_t x423 = -6;
	volatile uint8_t x424 = 6U;
	volatile int32_t t98 = -12890;

	t98 = (x421%((x422/x423)|x424));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = INT16_MAX;
	int32_t x428 = INT32_MIN;
	int64_t t99 = 1043LL;

	t99 = (x425%((x426/x427)|x428));

	if (t99 != 32767LL) { NG(); } else { ; }
	
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

