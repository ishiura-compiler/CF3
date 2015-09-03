#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = 44943167;
static int64_t t0 = 562885211LL;
int16_t x13 = 164;
int8_t x22 = INT8_MIN;
int8_t x31 = INT8_MIN;
volatile uint8_t x32 = 29U;
uint8_t x33 = UINT8_MAX;
volatile int64_t t5 = 16109729LL;
int32_t x37 = -1;
volatile int32_t t6 = -813781021;
uint64_t t7 = 2LLU;
uint16_t x77 = 171U;
int32_t x84 = -7841535;
volatile int32_t x92 = 430826213;
volatile int32_t t15 = -7;
volatile uint64_t t16 = 159818688LLU;
int32_t x99 = INT32_MIN;
volatile int64_t t17 = -17139632LL;
volatile uint8_t x103 = 18U;
int8_t x112 = INT8_MAX;
volatile int8_t x120 = 1;
int64_t t23 = 29524101481LL;
int16_t x128 = INT16_MIN;
volatile int32_t t24 = 798125;
volatile uint64_t x132 = 384LLU;
volatile int64_t x133 = INT64_MIN;
static int64_t x134 = 1761335LL;
int32_t x136 = INT32_MAX;
static uint8_t x138 = 10U;
static uint16_t x141 = 1U;
volatile int16_t x143 = INT16_MIN;
int16_t x144 = -3455;
int32_t x152 = -1;
static uint32_t t29 = UINT32_MAX;
int16_t x153 = 2044;
int16_t x156 = INT16_MAX;
volatile int32_t x166 = -1;
uint32_t x170 = UINT32_MAX;
uint64_t t35 = 2641163012223810LLU;
int16_t x208 = INT16_MIN;
uint64_t x222 = 2822LLU;
int8_t x223 = -1;
uint64_t x224 = UINT64_MAX;
int8_t x230 = INT8_MAX;
int64_t x232 = -2801516LL;
int8_t x239 = INT8_MIN;
int64_t x242 = -3199LL;
static uint64_t x246 = 22180944949LLU;
volatile uint64_t t48 = 135164271278LLU;
int16_t x257 = 6189;
volatile int16_t x258 = 711;
uint8_t x262 = 2U;
int64_t x266 = -1LL;
uint32_t x267 = 6U;
uint64_t x268 = 6399456401822LLU;
uint64_t t51 = 1381008316139LLU;
volatile int8_t x275 = INT8_MIN;
static int16_t x276 = 130;
int64_t t53 = -21LL;
int64_t x289 = -1LL;
uint32_t x290 = 2430786U;
uint32_t x302 = UINT32_MAX;
volatile uint32_t t56 = 31453867U;
int32_t x306 = -1069843658;
volatile int64_t t58 = -20856348LL;
volatile uint64_t t60 = UINT64_MAX;
uint64_t x329 = UINT64_MAX;
static int8_t x330 = INT8_MIN;
volatile int16_t x332 = -1;
int16_t x342 = INT16_MAX;
int32_t x352 = 26937;
volatile int32_t t65 = -150196560;
int8_t x362 = 1;
volatile int32_t x364 = -1;
static uint64_t t67 = UINT64_MAX;
static uint8_t x365 = UINT8_MAX;
uint16_t x372 = 8U;
static volatile uint64_t t70 = UINT64_MAX;
int64_t x388 = -1LL;
volatile int32_t x391 = -491;
static uint64_t x399 = 352827864562LLU;
volatile uint16_t x400 = UINT16_MAX;
uint64_t x407 = 405752622942779LLU;
static uint32_t x412 = 2749905U;
volatile int64_t t77 = 119828993LL;
uint16_t x418 = 7U;
volatile uint64_t t80 = 671857976467479LLU;
uint32_t x432 = 149660098U;
int64_t t82 = -68246945LL;
uint32_t x446 = 5U;
uint32_t x448 = 0U;
int64_t x459 = INT64_MIN;
int64_t t88 = 131008334393974LL;
int8_t x464 = INT8_MIN;
static volatile int8_t x465 = INT8_MAX;
uint16_t x466 = 498U;
int8_t x471 = INT8_MIN;
uint64_t x472 = 235683510689797405LLU;
static uint64_t x487 = 530225842772LLU;
int64_t x491 = -1LL;
int8_t x494 = -3;
uint16_t x503 = 0U;
volatile int64_t t96 = 14629LL;
int8_t x512 = -1;


void f0(void) {
	uint32_t x1 = 9827U;
	volatile int64_t x2 = INT64_MIN;
	volatile int8_t x4 = INT8_MIN;

	t0 = (((x1&x2)*x3)|x4);

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = 1;
	uint8_t x7 = 40U;
	int8_t x8 = -1;
	int32_t t1 = 56;

	t1 = (((x5&x6)*x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = INT32_MIN;
	int8_t x15 = -1;
	volatile int16_t x16 = 703;
	static int32_t t2 = -83706878;

	t2 = (((x13&x14)*x15)|x16);

	if (t2 != 703) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x23 = -1;
	static int8_t x24 = -31;
	volatile int32_t t3 = 156;

	t3 = (((x21&x22)*x23)|x24);

	if (t3 != -31) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MAX;
	static uint16_t x30 = UINT16_MAX;
	static volatile int32_t t4 = -6644823;

	t4 = (((x29&x30)*x31)|x32);

	if (t4 != -4194147) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x34 = -9916LL;
	static int32_t x35 = INT32_MIN;
	uint8_t x36 = 1U;

	t5 = (((x33&x34)*x35)|x36);

	if (t5 != -146028888063LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MIN;

	t6 = (((x37&x38)*x39)|x40);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = -1;
	volatile uint64_t x54 = UINT64_MAX;
	uint16_t x55 = 426U;
	int16_t x56 = -2797;

	t7 = (((x53&x54)*x55)|x56);

	if (t7 != 18446744073709551447LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x61 = -1LL;
	int64_t x62 = -210083768689630503LL;
	int32_t x63 = -1;
	int32_t x64 = INT32_MIN;
	int64_t t8 = -5844236304780019LL;

	t8 = (((x61&x62)*x63)|x64);

	if (t8 != -1781392089LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x65 = 27283U;
	volatile int16_t x66 = 14;
	uint16_t x67 = 254U;
	uint16_t x68 = UINT16_MAX;
	static volatile uint32_t t9 = 13U;

	t9 = (((x65&x66)*x67)|x68);

	if (t9 != 65535U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = INT32_MAX;
	int16_t x70 = -1;
	uint64_t x71 = 201LLU;
	uint8_t x72 = UINT8_MAX;
	static uint64_t t10 = 98410651999451LLU;

	t10 = (((x69&x70)*x71)|x72);

	if (t10 != 431644213247LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x73 = 798LLU;
	int8_t x74 = INT8_MIN;
	static uint8_t x75 = UINT8_MAX;
	int32_t x76 = 1838433;
	static uint64_t t11 = 7957LLU;

	t11 = (((x73&x74)*x75)|x76);

	if (t11 != 2030945LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MIN;
	int16_t x80 = -401;
	volatile int32_t t12 = -20;

	t12 = (((x77&x78)*x79)|x80);

	if (t12 != -401) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	uint16_t x83 = 0U;
	int32_t t13 = -110;

	t13 = (((x81&x82)*x83)|x84);

	if (t13 != -7841535) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x85 = 31536497961LL;
	static int32_t x86 = 767840;
	int8_t x87 = INT8_MIN;
	volatile uint8_t x88 = 4U;
	volatile int64_t t14 = -77541280523068124LL;

	t14 = (((x85&x86)*x87)|x88);

	if (t14 != -71471100LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = -18;
	int8_t x90 = -1;
	int16_t x91 = -2;

	t15 = (((x89&x90)*x91)|x92);

	if (t15 != 430826213) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 332586159053LLU;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = 745141657U;
	int32_t x96 = INT32_MAX;

	t16 = (((x93&x94)*x95)|x96);

	if (t16 != 8016126443710840831LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = 1627805U;
	static int8_t x100 = 0;

	t17 = (((x97&x98)*x99)|x100);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x101 = UINT8_MAX;
	uint32_t x102 = 124554420U;
	int64_t x104 = INT64_MIN;
	int64_t t18 = -456586294794LL;

	t18 = (((x101&x102)*x103)|x104);

	if (t18 != -9223372036854772568LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x105 = 26U;
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = INT32_MIN;
	volatile uint64_t t19 = 126657379LLU;

	t19 = (((x105&x106)*x107)|x108);

	if (t19 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = UINT32_MAX;
	volatile uint32_t t20 = 1707U;

	t20 = (((x109&x110)*x111)|x112);

	if (t20 != 2147483775U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -111589;
	int8_t x114 = -1;
	int64_t x115 = -1LL;
	volatile int16_t x116 = INT16_MAX;
	volatile int64_t t21 = 431745349628LL;

	t21 = (((x113&x114)*x115)|x116);

	if (t21 != 131071LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x117 = 59U;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = 28U;
	volatile int32_t t22 = 193401927;

	t22 = (((x117&x118)*x119)|x120);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	static uint8_t x122 = 7U;
	static int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MIN;

	t23 = (((x121&x122)*x123)|x124);

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = 50;
	volatile int16_t x126 = 5;
	int8_t x127 = -1;

	t24 = (((x125&x126)*x127)|x128);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x129 = INT16_MAX;
	int8_t x130 = 1;
	int32_t x131 = INT32_MAX;
	uint64_t t25 = 162613980LLU;

	t25 = (((x129&x130)*x131)|x132);

	if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x135 = INT8_MAX;
	static int64_t t26 = 2673374476021540687LL;

	t26 = (((x133&x134)*x135)|x136);

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x137 = -1;
	uint64_t x139 = 34551223798LLU;
	int16_t x140 = -1;
	uint64_t t27 = UINT64_MAX;

	t27 = (((x137&x138)*x139)|x140);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x142 = 11;
	int32_t t28 = -932034497;

	t28 = (((x141&x142)*x143)|x144);

	if (t28 != -3455) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = 203425943U;

	t29 = (((x149&x150)*x151)|x152);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x154 = UINT64_MAX;
	int32_t x155 = 212082;
	static volatile uint64_t t30 = 31188813304138462LLU;

	t30 = (((x153&x154)*x155)|x156);

	if (t30 != 433520639LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x165 = 0U;
	volatile int8_t x167 = -31;
	int16_t x168 = -1015;
	volatile uint32_t t31 = 144950U;

	t31 = (((x165&x166)*x167)|x168);

	if (t31 != 4294966281U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = -1LL;
	volatile int16_t x171 = -30;
	uint64_t x172 = UINT64_MAX;
	uint64_t t32 = UINT64_MAX;

	t32 = (((x169&x170)*x171)|x172);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x173 = UINT32_MAX;
	uint32_t x174 = 8749967U;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = 6358U;
	uint32_t t33 = 53156U;

	t33 = (((x173&x174)*x175)|x176);

	if (t33 != 1043896534U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x182 = 11167166U;
	int8_t x183 = INT8_MAX;
	static volatile int64_t x184 = INT64_MAX;
	int64_t t34 = INT64_MAX;

	t34 = (((x181&x182)*x183)|x184);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = 1U;
	static volatile uint64_t x195 = 19589543424LLU;
	volatile int64_t x196 = INT64_MAX;

	t35 = (((x193&x194)*x195)|x196);

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x197 = INT32_MIN;
	uint8_t x198 = 33U;
	static int16_t x199 = INT16_MIN;
	int64_t x200 = -188806422LL;
	int64_t t36 = 194869119333LL;

	t36 = (((x197&x198)*x199)|x200);

	if (t36 != -188806422LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x201 = 403U;
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	uint16_t x204 = 19714U;
	static int32_t t37 = 363;

	t37 = (((x201&x202)*x203)|x204);

	if (t37 != 19714) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x205 = INT16_MIN;
	int8_t x206 = -8;
	volatile uint64_t x207 = 6059LLU;
	uint64_t t38 = 19001986825591037LLU;

	t38 = (((x205&x206)*x207)|x208);

	if (t38 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x209 = INT16_MIN;
	volatile int32_t x210 = 3;
	int32_t x211 = -1;
	int64_t x212 = INT64_MAX;
	static int64_t t39 = INT64_MAX;

	t39 = (((x209&x210)*x211)|x212);

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x213 = INT64_MIN;
	uint64_t x214 = 109LLU;
	uint16_t x215 = 34U;
	volatile uint64_t x216 = 1384983932312669025LLU;
	volatile uint64_t t40 = 146005682451LLU;

	t40 = (((x213&x214)*x215)|x216);

	if (t40 != 1384983932312669025LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x221 = UINT32_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = (((x221&x222)*x223)|x224);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MIN;
	static int64_t x231 = -3416363213585806LL;
	volatile int64_t t42 = 75572859115LL;

	t42 = (((x229&x230)*x231)|x232);

	if (t42 != -2801516LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 7455223678412555LLU;
	int64_t x235 = -48507469LL;
	int32_t x236 = 530758705;
	static uint64_t t43 = 12LLU;

	t43 = (((x233&x234)*x235)|x236);

	if (t43 != 18446741999772762033LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x237 = 51241;
	int32_t x238 = -45;
	uint64_t x240 = 166921188765LLU;
	uint64_t t44 = 10467LLU;

	t44 = (((x237&x238)*x239)|x240);

	if (t44 != 18446744073707454365LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x241 = 36715075;
	static volatile int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	volatile int64_t t45 = 3213456LL;

	t45 = (((x241&x242)*x243)|x244);

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x245 = UINT8_MAX;
	static int8_t x247 = INT8_MIN;
	static volatile uint64_t x248 = 14LLU;
	volatile uint64_t t46 = 3909779516170948LLU;

	t46 = (((x245&x246)*x247)|x248);

	if (t46 != 18446744073709544846LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = 162U;
	volatile int8_t x250 = INT8_MAX;
	static int16_t x251 = -6402;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (((x249&x250)*x251)|x252);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	int32_t x255 = -1;
	uint64_t x256 = 204LLU;

	t48 = (((x253&x254)*x255)|x256);

	if (t48 != 204LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t49 = 28865213;

	t49 = (((x257&x258)*x259)|x260);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x261 = 429332LLU;
	int64_t x263 = 30063070929LL;
	int8_t x264 = -45;
	static volatile uint64_t t50 = 149181446037LLU;

	t50 = (((x261&x262)*x263)|x264);

	if (t50 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x265 = -13LL;

	t51 = (((x265&x266)*x267)|x268);

	if (t51 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x273 = -30;
	static int8_t x274 = INT8_MIN;
	static volatile int32_t t52 = 80;

	t52 = (((x273&x274)*x275)|x276);

	if (t52 != 16514) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x277 = 666LL;
	uint8_t x278 = 41U;
	int32_t x279 = -1;
	static uint8_t x280 = 3U;

	t53 = (((x277&x278)*x279)|x280);

	if (t53 != -5LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x281 = INT64_MAX;
	uint64_t x282 = 11738942546LLU;
	int16_t x283 = 6550;
	volatile int64_t x284 = INT64_MAX;
	uint64_t t54 = 2138198539744730251LLU;

	t54 = (((x281&x282)*x283)|x284);

	if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MAX;
	int64_t t55 = -104842574876LL;

	t55 = (((x289&x290)*x291)|x292);

	if (t55 != 5220073184356607LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x301 = -1;
	int32_t x303 = 917419666;
	uint32_t x304 = 91U;

	t56 = (((x301&x302)*x303)|x304);

	if (t56 != 3377547647U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x305 = 3;
	uint16_t x307 = 369U;
	int64_t x308 = INT64_MIN;
	volatile int64_t t57 = -19602138738758LL;

	t57 = (((x305&x306)*x307)|x308);

	if (t57 != -9223372036854775070LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = -1LL;
	int8_t x310 = -1;
	int64_t x311 = INT64_MAX;
	int32_t x312 = -1;

	t58 = (((x309&x310)*x311)|x312);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MAX;
	volatile int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t59 = -6667;

	t59 = (((x313&x314)*x315)|x316);

	if (t59 != -4161536) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x317 = INT8_MIN;
	int32_t x318 = -1;
	static int16_t x319 = INT16_MAX;
	uint64_t x320 = UINT64_MAX;

	t60 = (((x317&x318)*x319)|x320);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x325 = UINT8_MAX;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile int32_t t61 = -730651476;

	t61 = (((x325&x326)*x327)|x328);

	if (t61 != -255) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x331 = -951LL;
	uint64_t t62 = UINT64_MAX;

	t62 = (((x329&x330)*x331)|x332);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x341 = 12322LLU;
	volatile int8_t x343 = -1;
	uint32_t x344 = 4802U;
	uint64_t t63 = 2718526286846LLU;

	t63 = (((x341&x342)*x343)|x344);

	if (t63 != 18446744073709543390LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x349 = UINT8_MAX;
	int32_t x350 = INT32_MIN;
	int16_t x351 = -35;
	int32_t t64 = -1;

	t64 = (((x349&x350)*x351)|x352);

	if (t64 != 26937) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x353 = 6;
	int16_t x354 = INT16_MIN;
	static volatile int32_t x355 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;

	t65 = (((x353&x354)*x355)|x356);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int64_t x358 = -14LL;
	uint32_t x359 = UINT32_MAX;
	static int32_t x360 = INT32_MAX;
	int64_t t66 = 76418386518351604LL;

	t66 = (((x357&x358)*x359)|x360);

	if (t66 != 281414847168511LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x361 = 48U;
	volatile uint64_t x363 = UINT64_MAX;

	t67 = (((x361&x362)*x363)|x364);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x366 = UINT16_MAX;
	static uint32_t x367 = 6U;
	uint32_t x368 = 368393768U;
	uint32_t t68 = 15397U;

	t68 = (((x365&x366)*x367)|x368);

	if (t68 != 368394234U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x369 = 0U;
	uint64_t x370 = 27LLU;
	int16_t x371 = INT16_MAX;
	uint64_t t69 = 3328285LLU;

	t69 = (((x369&x370)*x371)|x372);

	if (t69 != 8LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x381 = INT32_MIN;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = INT16_MIN;
	volatile uint64_t x384 = UINT64_MAX;

	t70 = (((x381&x382)*x383)|x384);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x385 = UINT64_MAX;
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = (((x385&x386)*x387)|x388);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	volatile uint8_t x392 = 39U;
	int64_t t72 = 2691038762828008LL;

	t72 = (((x389&x390)*x391)|x392);

	if (t72 != 39LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x393 = -30;
	int8_t x394 = -1;
	int16_t x395 = -1;
	static uint16_t x396 = 51U;
	volatile int32_t t73 = -171921729;

	t73 = (((x393&x394)*x395)|x396);

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x397 = 0;
	int16_t x398 = 12122;
	volatile uint64_t t74 = 17556956LLU;

	t74 = (((x397&x398)*x399)|x400);

	if (t74 != 65535LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x401 = INT32_MAX;
	uint8_t x402 = 4U;
	int16_t x403 = INT16_MAX;
	int64_t x404 = -1980887727502LL;
	volatile int64_t t75 = 21538738987LL;

	t75 = (((x401&x402)*x403)|x404);

	if (t75 != -1980887597058LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x405 = 1012U;
	int64_t x406 = INT64_MIN;
	int32_t x408 = -21141;
	volatile uint64_t t76 = 161LLU;

	t76 = (((x405&x406)*x407)|x408);

	if (t76 != 18446744073709530475LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x409 = -1LL;
	int8_t x410 = -11;
	uint16_t x411 = 18433U;

	t77 = (((x409&x410)*x411)|x412);

	if (t77 != -133131LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x413 = UINT16_MAX;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = INT16_MAX;
	static int64_t x416 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

	t78 = (((x413&x414)*x415)|x416);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x417 = INT64_MIN;
	static uint64_t x419 = 159964411922627540LLU;
	static int64_t x420 = INT64_MIN;
	uint64_t t79 = 10391LLU;

	t79 = (((x417&x418)*x419)|x420);

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x421 = -1LL;
	volatile int64_t x422 = INT64_MIN;
	uint64_t x423 = 1794079605LLU;
	int32_t x424 = INT32_MIN;

	t80 = (((x421&x422)*x423)|x424);

	if (t80 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x429 = INT64_MIN;
	uint32_t x430 = 15U;
	volatile uint64_t x431 = 13045LLU;
	volatile uint64_t t81 = 1803955078054LLU;

	t81 = (((x429&x430)*x431)|x432);

	if (t81 != 149660098LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x433 = INT64_MAX;
	uint16_t x434 = 8751U;
	uint16_t x435 = 1U;
	static int16_t x436 = -1;

	t82 = (((x433&x434)*x435)|x436);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x437 = 20874898505901343LL;
	int64_t x438 = INT64_MAX;
	int16_t x439 = -19;
	int32_t x440 = INT32_MAX;
	int64_t t83 = -104978089LL;

	t83 = (((x437&x438)*x439)|x440);

	if (t83 != -396623071391252481LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x441 = INT16_MAX;
	uint32_t x442 = UINT32_MAX;
	static int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MIN;
	volatile uint32_t t84 = 3U;

	t84 = (((x441&x442)*x443)|x444);

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x445 = 0U;
	int16_t x447 = INT16_MIN;
	volatile uint32_t t85 = 1U;

	t85 = (((x445&x446)*x447)|x448);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x449 = -1;
	int8_t x450 = INT8_MIN;
	volatile int32_t x451 = -1;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t86 = -66215076;

	t86 = (((x449&x450)*x451)|x452);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x453 = 198985922372686292LLU;
	uint64_t x454 = 76845LLU;
	int8_t x455 = -1;
	int64_t x456 = -1LL;
	static volatile uint64_t t87 = UINT64_MAX;

	t87 = (((x453&x454)*x455)|x456);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x457 = 0;
	int8_t x458 = INT8_MIN;
	static uint32_t x460 = UINT32_MAX;

	t88 = (((x457&x458)*x459)|x460);

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = INT32_MAX;
	uint64_t x462 = UINT64_MAX;
	int8_t x463 = INT8_MAX;
	volatile uint64_t t89 = 473615241LLU;

	t89 = (((x461&x462)*x463)|x464);

	if (t89 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x467 = -1LL;
	int16_t x468 = -1;
	int64_t t90 = -1007181791433398590LL;

	t90 = (((x465&x466)*x467)|x468);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x469 = -1;
	static int8_t x470 = 1;
	volatile uint64_t t91 = 43891LLU;

	t91 = (((x469&x470)*x471)|x472);

	if (t91 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x485 = 548128306U;
	int16_t x486 = -1;
	int64_t x488 = -1LL;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x485&x486)*x487)|x488);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x489 = UINT8_MAX;
	int16_t x490 = -1430;
	int32_t x492 = -1;
	volatile int64_t t93 = 0LL;

	t93 = (((x489&x490)*x491)|x492);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x493 = INT64_MIN;
	uint64_t x495 = 31608532365909LLU;
	volatile int64_t x496 = -1LL;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x493&x494)*x495)|x496);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = -5;
	volatile uint32_t x498 = 10092U;
	static int16_t x499 = 1;
	int8_t x500 = INT8_MIN;
	uint32_t t95 = 130764U;

	t95 = (((x497&x498)*x499)|x500);

	if (t95 != 4294967272U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x501 = 12U;
	static int8_t x502 = 1;
	int64_t x504 = -1LL;

	t96 = (((x501&x502)*x503)|x504);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = -1480;
	volatile int8_t x507 = INT8_MIN;
	int8_t x508 = INT8_MAX;
	static int32_t t97 = -31415815;

	t97 = (((x505&x506)*x507)|x508);

	if (t97 != 4194431) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = INT32_MIN;
	static int32_t x510 = INT32_MAX;
	volatile int64_t x511 = -1LL;
	int64_t t98 = -2407937714646563LL;

	t98 = (((x509&x510)*x511)|x512);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x513 = INT8_MIN;
	uint32_t x514 = 212204U;
	static uint8_t x515 = 7U;
	int64_t x516 = INT64_MIN;
	int64_t t99 = 84448859LL;

	t99 = (((x513&x514)*x515)|x516);

	if (t99 != -9223372036853291136LL) { NG(); } else { ; }
	
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

