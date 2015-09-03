#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = INT16_MIN;
int32_t x15 = -1;
static uint8_t x16 = 17U;
volatile uint32_t x23 = 13413U;
static int8_t x31 = 1;
int16_t x39 = -1;
uint16_t x50 = UINT16_MAX;
volatile int64_t t8 = 35660264526664LL;
int32_t t9 = 1012943;
uint16_t x67 = UINT16_MAX;
uint64_t x68 = 475187023105425407LLU;
int8_t x75 = 1;
int32_t t12 = 1053;
int16_t x84 = INT16_MIN;
int64_t x87 = INT64_MIN;
static int8_t x88 = 1;
static uint64_t x91 = UINT64_MAX;
static volatile uint64_t x92 = 165680274LLU;
volatile uint64_t t15 = 159457315LLU;
int32_t x95 = INT32_MIN;
volatile int32_t t18 = 159;
int8_t x110 = 13;
int32_t t19 = 1;
static volatile int32_t t20 = -1490560;
volatile int8_t x121 = -15;
volatile uint32_t x123 = 6430533U;
static uint16_t x131 = 6491U;
uint16_t x142 = UINT16_MAX;
uint64_t x145 = 203086578113274LLU;
uint8_t x161 = 2U;
static uint8_t x163 = 10U;
static int32_t t31 = -5543840;
int8_t x169 = INT8_MIN;
volatile uint16_t x180 = 2U;
uint32_t x187 = UINT32_MAX;
uint32_t t35 = 1961521820U;
volatile uint64_t x199 = UINT64_MAX;
int8_t x200 = -26;
int64_t x214 = INT64_MAX;
volatile uint8_t x215 = 28U;
static volatile int32_t x224 = -38493;
int32_t t42 = -2089021;
volatile int32_t t43 = -3;
static int64_t x237 = INT64_MAX;
uint64_t x239 = 3LLU;
static uint16_t x242 = 615U;
int16_t x246 = -1;
uint16_t x252 = 494U;
volatile int16_t x254 = INT16_MIN;
volatile int64_t t48 = 289LL;
int64_t x265 = INT64_MIN;
static volatile int16_t x267 = -195;
uint8_t x273 = UINT8_MAX;
int8_t x275 = INT8_MIN;
uint32_t t52 = 33U;
uint16_t x281 = 225U;
int32_t x299 = INT32_MIN;
volatile int32_t x302 = -1;
int32_t t58 = 1;
int8_t x309 = 1;
static int32_t t59 = -58;
uint32_t x315 = 44804U;
static int32_t x317 = 201;
uint32_t t62 = 6U;
int16_t x332 = 697;
static int32_t t65 = 7548747;
int64_t x344 = -1LL;
static volatile int32_t x346 = -15964454;
int32_t x347 = 1;
int16_t x348 = -1;
int64_t x353 = -1LL;
uint8_t x358 = 2U;
static volatile int16_t x361 = INT16_MIN;
uint32_t x363 = 1012125529U;
uint32_t t70 = 2296671U;
volatile int16_t x367 = INT16_MIN;
int32_t x372 = -1;
int32_t x376 = 6660;
volatile int16_t x387 = -36;
uint64_t x389 = UINT64_MAX;
int32_t x390 = INT32_MAX;
static uint8_t x391 = UINT8_MAX;
static uint64_t t77 = 1774630537665LLU;
static uint64_t x393 = 2517526965627201429LLU;
int32_t x415 = -6;
int16_t x423 = 0;
int8_t x434 = INT8_MIN;
int8_t x452 = INT8_MAX;
static volatile int64_t x464 = INT64_MIN;
uint16_t x467 = 363U;
int64_t x468 = 6940LL;
int64_t t91 = 395843249172354LL;
int32_t x470 = INT32_MAX;
int16_t x477 = -1;
int16_t x501 = -1;
uint32_t x504 = 13U;
static volatile uint32_t t98 = 25954U;


void f0(void) {
	uint32_t x1 = 1269U;
	volatile int8_t x2 = INT8_MIN;
	uint64_t x3 = 2LLU;
	uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = 7841933LLU;

	t0 = (((x1<=x2)+x3)*x4);

	if (t0 != 12884901885LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 123109U;
	int32_t t1 = -7;

	t1 = (((x13<=x14)+x15)*x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 52954764782LLU;
	volatile int32_t x22 = INT32_MAX;
	uint16_t x24 = 183U;
	volatile uint32_t t2 = 5157U;

	t2 = (((x21<=x22)+x23)*x24);

	if (t2 != 2454579U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x25 = INT64_MAX;
	int64_t x26 = 22004268LL;
	int8_t x27 = -1;
	volatile uint16_t x28 = 10219U;
	volatile int32_t t3 = 25178;

	t3 = (((x25<=x26)+x27)*x28);

	if (t3 != -10219) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -1LL;
	int64_t x30 = INT64_MIN;
	uint32_t x32 = 18681329U;
	uint32_t t4 = 865U;

	t4 = (((x29<=x30)+x31)*x32);

	if (t4 != 18681329U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x33 = INT16_MIN;
	static uint32_t x34 = 3082U;
	volatile int16_t x35 = -1;
	int8_t x36 = INT8_MIN;
	volatile int32_t t5 = 124696573;

	t5 = (((x33<=x34)+x35)*x36);

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x37 = 2813U;
	volatile int8_t x38 = -41;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t6 = 520804;

	t6 = (((x37<=x38)+x39)*x40);

	if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x41 = -1;
	int8_t x42 = INT8_MIN;
	uint64_t x43 = 802LLU;
	int8_t x44 = 0;
	static volatile uint64_t t7 = 0LLU;

	t7 = (((x41<=x42)+x43)*x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = INT64_MAX;
	int64_t x51 = -840628797LL;
	int32_t x52 = INT32_MIN;

	t8 = (((x49<=x50)+x51)*x52);

	if (t8 != 1805236595595411456LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	volatile int8_t x58 = INT8_MAX;
	volatile int16_t x59 = -1;
	int16_t x60 = INT16_MIN;

	t9 = (((x57<=x58)+x59)*x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = 412;
	uint32_t x66 = 12154191U;
	static volatile uint64_t t10 = 138988982788691LLU;

	t10 = (((x65<=x66)+x67)*x68);

	if (t10 != 3752749815436345344LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = INT64_MIN;
	volatile int8_t x70 = INT8_MAX;
	volatile int16_t x71 = INT16_MIN;
	uint8_t x72 = 9U;
	volatile int32_t t11 = -5043460;

	t11 = (((x69<=x70)+x71)*x72);

	if (t11 != -294903) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x73 = UINT64_MAX;
	static uint16_t x74 = UINT16_MAX;
	int16_t x76 = INT16_MIN;

	t12 = (((x73<=x74)+x75)*x76);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	static int16_t x83 = -1;
	int32_t t13 = -159176806;

	t13 = (((x81<=x82)+x83)*x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = 81550193;
	static int16_t x86 = INT16_MAX;
	int64_t t14 = INT64_MIN;

	t14 = (((x85<=x86)+x87)*x88);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x89 = UINT32_MAX;
	static int32_t x90 = INT32_MIN;

	t15 = (((x89<=x90)+x91)*x92);

	if (t15 != 18446744073543871342LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MIN;
	uint8_t x96 = 1U;
	int32_t t16 = INT32_MIN;

	t16 = (((x93<=x94)+x95)*x96);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -440197633258LL;
	static int32_t x98 = INT32_MIN;
	volatile uint16_t x99 = 212U;
	uint32_t x100 = UINT32_MAX;
	uint32_t t17 = 10568194U;

	t17 = (((x97<=x98)+x99)*x100);

	if (t17 != 4294967083U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 176994LLU;
	int32_t x102 = INT32_MAX;
	int32_t x103 = 58753301;
	static int8_t x104 = 18;

	t18 = (((x101<=x102)+x103)*x104);

	if (t18 != 1057559436) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = -1LL;
	int8_t x111 = INT8_MAX;
	volatile int8_t x112 = INT8_MIN;

	t19 = (((x109<=x110)+x111)*x112);

	if (t19 != -16384) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = UINT64_MAX;
	static volatile int64_t x118 = 246206050837237996LL;
	volatile uint8_t x119 = 2U;
	uint8_t x120 = 121U;

	t20 = (((x117<=x118)+x119)*x120);

	if (t20 != 242) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x122 = 284479U;
	int32_t x124 = -1;
	volatile uint32_t t21 = 2062365733U;

	t21 = (((x121<=x122)+x123)*x124);

	if (t21 != 4288536763U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x125 = 2363448LLU;
	static int8_t x126 = -1;
	volatile uint32_t x127 = 27U;
	volatile int32_t x128 = INT32_MAX;
	volatile uint32_t t22 = 327164U;

	t22 = (((x125<=x126)+x127)*x128);

	if (t22 != 4294967268U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x129 = -1;
	uint8_t x130 = UINT8_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t23 = 49425167;

	t23 = (((x129<=x130)+x131)*x132);

	if (t23 != 212723364) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	int8_t x135 = -3;
	uint8_t x136 = 0U;
	int32_t t24 = -6100;

	t24 = (((x133<=x134)+x135)*x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x137 = INT8_MIN;
	int8_t x138 = -41;
	static int16_t x139 = -9;
	uint16_t x140 = 20309U;
	int32_t t25 = -51496254;

	t25 = (((x137<=x138)+x139)*x140);

	if (t25 != -162472) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x141 = -1;
	static int8_t x143 = 1;
	uint64_t x144 = 23797260993550619LLU;
	volatile uint64_t t26 = 901754LLU;

	t26 = (((x141<=x142)+x143)*x144);

	if (t26 != 47594521987101238LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x146 = 14;
	int8_t x147 = -1;
	static volatile int16_t x148 = 443;
	int32_t t27 = -1;

	t27 = (((x145<=x146)+x147)*x148);

	if (t27 != -443) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = 137084LL;
	volatile int64_t x150 = INT64_MAX;
	int64_t x151 = 2944570069906LL;
	uint16_t x152 = UINT16_MAX;
	static int64_t t28 = -191950943873LL;

	t28 = (((x149<=x150)+x151)*x152);

	if (t28 != 192972399531355245LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	volatile uint64_t x155 = 8LLU;
	uint16_t x156 = UINT16_MAX;
	volatile uint64_t t29 = 9305433317639LLU;

	t29 = (((x153<=x154)+x155)*x156);

	if (t29 != 589815LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x162 = -1;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t30 = 743918330;

	t30 = (((x161<=x162)+x163)*x164);

	if (t30 != 2550) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = 16517912509859384LLU;
	int32_t x166 = 20955791;
	static int16_t x167 = 1;
	uint8_t x168 = 3U;

	t31 = (((x165<=x166)+x167)*x168);

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x170 = -14931746;
	volatile uint32_t x171 = 126025507U;
	uint16_t x172 = 1U;
	uint32_t t32 = 135121U;

	t32 = (((x169<=x170)+x171)*x172);

	if (t32 != 126025507U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = -1;
	static int16_t x178 = -93;
	int64_t x179 = -1LL;
	volatile int64_t t33 = -96151561844466709LL;

	t33 = (((x177<=x178)+x179)*x180);

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MAX;
	int64_t x182 = -125LL;
	int16_t x183 = INT16_MAX;
	volatile int8_t x184 = INT8_MIN;
	int32_t t34 = -33685;

	t34 = (((x181<=x182)+x183)*x184);

	if (t34 != -4194176) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = 563777510LL;
	volatile uint16_t x186 = 115U;
	int16_t x188 = INT16_MIN;

	t35 = (((x185<=x186)+x187)*x188);

	if (t35 != 32768U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x197 = 67588LLU;
	uint8_t x198 = 61U;
	uint64_t t36 = 587319899339524LLU;

	t36 = (((x197<=x198)+x199)*x200);

	if (t36 != 26LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MIN;
	static volatile int16_t x203 = INT16_MIN;
	static uint32_t x204 = 91U;
	static uint32_t t37 = 310395U;

	t37 = (((x201<=x202)+x203)*x204);

	if (t37 != 4291985408U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x205 = INT64_MIN;
	volatile int16_t x206 = 5;
	int16_t x207 = -18;
	volatile int8_t x208 = -1;
	int32_t t38 = 0;

	t38 = (((x205<=x206)+x207)*x208);

	if (t38 != 17) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = 94669374692LL;
	volatile uint8_t x210 = 3U;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	volatile int32_t t39 = 51115;

	t39 = (((x209<=x210)+x211)*x212);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = INT32_MIN;
	int32_t x216 = -1;
	int32_t t40 = 725549186;

	t40 = (((x213<=x214)+x215)*x216);

	if (t40 != -29) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = INT64_MAX;
	uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 118701U;
	uint32_t t41 = 3U;

	t41 = (((x221<=x222)+x223)*x224);

	if (t41 != 4020776999U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = -1;
	volatile uint16_t x230 = 13911U;
	int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MIN;

	t42 = (((x229<=x230)+x231)*x232);

	if (t42 != -1073741824) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x233 = -1;
	uint32_t x234 = 1336475U;
	int8_t x235 = 48;
	uint8_t x236 = 0U;

	t43 = (((x233<=x234)+x235)*x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x238 = INT8_MIN;
	int64_t x240 = INT64_MIN;
	volatile uint64_t t44 = 33500330LLU;

	t44 = (((x237<=x238)+x239)*x240);

	if (t44 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = 10;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = INT64_MIN;
	uint64_t t45 = 31LLU;

	t45 = (((x241<=x242)+x243)*x244);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x245 = INT64_MAX;
	int64_t x247 = -1LL;
	int64_t x248 = -5621744900103LL;
	volatile int64_t t46 = -193746810LL;

	t46 = (((x245<=x246)+x247)*x248);

	if (t46 != 5621744900103LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x249 = INT32_MIN;
	volatile int64_t x250 = 1LL;
	int64_t x251 = 3952607778480LL;
	volatile int64_t t47 = -521LL;

	t47 = (((x249<=x250)+x251)*x252);

	if (t47 != 1952588242569614LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x253 = INT64_MAX;
	int8_t x255 = -1;
	int64_t x256 = -1LL;

	t48 = (((x253<=x254)+x255)*x256);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x266 = 0;
	int8_t x268 = INT8_MAX;
	static volatile int32_t t49 = 3977;

	t49 = (((x265<=x266)+x267)*x268);

	if (t49 != -24638) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = -118;
	int32_t x270 = INT32_MIN;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = -1;
	uint64_t t50 = 125003571205318LLU;

	t50 = (((x269<=x270)+x271)*x272);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x274 = -1;
	static int8_t x276 = -7;
	int32_t t51 = 63903;

	t51 = (((x273<=x274)+x275)*x276);

	if (t51 != 896) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	static uint32_t x279 = 0U;
	int32_t x280 = 6986;

	t52 = (((x277<=x278)+x279)*x280);

	if (t52 != 6986U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x282 = 1419351143056844LL;
	int8_t x283 = -1;
	uint32_t x284 = 118696529U;
	static volatile uint32_t t53 = 1U;

	t53 = (((x281<=x282)+x283)*x284);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x285 = INT8_MAX;
	volatile int64_t x286 = -1LL;
	volatile uint32_t x287 = UINT32_MAX;
	int16_t x288 = INT16_MIN;
	volatile uint32_t t54 = 891U;

	t54 = (((x285<=x286)+x287)*x288);

	if (t54 != 32768U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MAX;
	uint8_t x291 = 28U;
	int64_t x292 = -1LL;
	int64_t t55 = -3683218267275688870LL;

	t55 = (((x289<=x290)+x291)*x292);

	if (t55 != -29LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x293 = -1;
	volatile int8_t x294 = 48;
	uint32_t x295 = 15U;
	uint8_t x296 = 2U;
	volatile uint32_t t56 = 10876U;

	t56 = (((x293<=x294)+x295)*x296);

	if (t56 != 32U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x297 = INT16_MIN;
	uint64_t x298 = 114939656512608567LLU;
	uint32_t x300 = 7620U;
	volatile uint32_t t57 = 249U;

	t57 = (((x297<=x298)+x299)*x300);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x301 = 18;
	int8_t x303 = INT8_MIN;
	static volatile int16_t x304 = 49;

	t58 = (((x301<=x302)+x303)*x304);

	if (t58 != -6272) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x310 = UINT16_MAX;
	uint16_t x311 = 39U;
	int8_t x312 = 1;

	t59 = (((x309<=x310)+x311)*x312);

	if (t59 != 40) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x313 = INT32_MAX;
	uint32_t x314 = 553362U;
	uint64_t x316 = UINT64_MAX;
	static volatile uint64_t t60 = 13LLU;

	t60 = (((x313<=x314)+x315)*x316);

	if (t60 != 18446744073709506812LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x318 = INT8_MAX;
	uint32_t x319 = 73U;
	static int32_t x320 = 61;
	volatile uint32_t t61 = 26204630U;

	t61 = (((x317<=x318)+x319)*x320);

	if (t61 != 4453U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	volatile uint32_t x323 = 753U;
	int16_t x324 = 2485;

	t62 = (((x321<=x322)+x323)*x324);

	if (t62 != 1871205U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x329 = 89;
	int32_t x330 = 2700156;
	uint64_t x331 = 5399785116LLU;
	volatile uint64_t t63 = 31562555308209884LLU;

	t63 = (((x329<=x330)+x331)*x332);

	if (t63 != 3763650226549LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x333 = 5;
	int8_t x334 = INT8_MAX;
	int8_t x335 = -1;
	int32_t x336 = INT32_MIN;
	volatile int32_t t64 = 5160;

	t64 = (((x333<=x334)+x335)*x336);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x337 = INT32_MIN;
	static uint32_t x338 = UINT32_MAX;
	static volatile int8_t x339 = INT8_MIN;
	volatile int32_t x340 = -1;

	t65 = (((x337<=x338)+x339)*x340);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = INT64_MAX;
	uint8_t x342 = 4U;
	static volatile uint64_t x343 = UINT64_MAX;
	uint64_t t66 = 22800348LLU;

	t66 = (((x341<=x342)+x343)*x344);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x345 = 47;
	volatile int32_t t67 = -7802;

	t67 = (((x345<=x346)+x347)*x348);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x354 = INT64_MIN;
	int8_t x355 = 1;
	int64_t x356 = -1LL;
	int64_t t68 = -2952280657276583LL;

	t68 = (((x353<=x354)+x355)*x356);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x357 = 280U;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = 100314367069905LLU;
	uint64_t t69 = 14397LLU;

	t69 = (((x357<=x358)+x359)*x360);

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x362 = INT32_MAX;
	static volatile int8_t x364 = INT8_MIN;

	t70 = (((x361<=x362)+x363)*x364);

	if (t70 != 3591918336U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x365 = 7974U;
	int16_t x366 = INT16_MIN;
	volatile uint8_t x368 = 126U;
	static volatile int32_t t71 = -202815270;

	t71 = (((x365<=x366)+x367)*x368);

	if (t71 != -4128768) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x369 = 12046LLU;
	int8_t x370 = 30;
	uint16_t x371 = 0U;
	volatile int32_t t72 = -2;

	t72 = (((x369<=x370)+x371)*x372);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x373 = 329010184U;
	uint16_t x374 = 25U;
	static volatile int8_t x375 = INT8_MIN;
	volatile int32_t t73 = 8649045;

	t73 = (((x373<=x374)+x375)*x376);

	if (t73 != -852480) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = INT64_MIN;
	static uint8_t x378 = UINT8_MAX;
	volatile uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MIN;
	static volatile uint32_t t74 = 2U;

	t74 = (((x377<=x378)+x379)*x380);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x381 = INT32_MAX;
	int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MIN;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t75 = -7;

	t75 = (((x381<=x382)+x383)*x384);

	if (t75 != 1073741824) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x385 = INT16_MIN;
	int64_t x386 = 5266883238LL;
	int16_t x388 = INT16_MIN;
	volatile int32_t t76 = -3;

	t76 = (((x385<=x386)+x387)*x388);

	if (t76 != 1146880) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x392 = UINT64_MAX;

	t77 = (((x389<=x390)+x391)*x392);

	if (t77 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x394 = INT64_MAX;
	uint64_t x395 = UINT64_MAX;
	int32_t x396 = -214629930;
	volatile uint64_t t78 = 15123087LLU;

	t78 = (((x393<=x394)+x395)*x396);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = INT16_MIN;
	uint16_t x406 = 27374U;
	int8_t x407 = INT8_MAX;
	volatile int8_t x408 = 54;
	volatile int32_t t79 = 976;

	t79 = (((x405<=x406)+x407)*x408);

	if (t79 != 6912) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x409 = UINT32_MAX;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = -1672;
	static int64_t x412 = 3024830LL;
	int64_t t80 = 301294267492949LL;

	t80 = (((x409<=x410)+x411)*x412);

	if (t80 != -5054490930LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = -1;
	static uint32_t x416 = UINT32_MAX;
	volatile uint32_t t81 = 819057973U;

	t81 = (((x413<=x414)+x415)*x416);

	if (t81 != 5U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x421 = INT8_MAX;
	volatile uint8_t x422 = UINT8_MAX;
	int16_t x424 = INT16_MAX;
	volatile int32_t t82 = -11119;

	t82 = (((x421<=x422)+x423)*x424);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x429 = -1261;
	uint8_t x430 = 0U;
	static int32_t x431 = INT32_MIN;
	uint64_t x432 = 71994923780320492LLU;
	uint64_t t83 = 18236LLU;

	t83 = (((x429<=x430)+x431)*x432);

	if (t83 != 14427405146194357484LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x433 = 2044624U;
	static volatile int64_t x435 = 8286604216LL;
	static int8_t x436 = INT8_MAX;
	int64_t t84 = -627LL;

	t84 = (((x433<=x434)+x435)*x436);

	if (t84 != 1052398735559LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x437 = INT64_MAX;
	int8_t x438 = INT8_MIN;
	int64_t x439 = -1LL;
	uint16_t x440 = 1876U;
	volatile int64_t t85 = -11794LL;

	t85 = (((x437<=x438)+x439)*x440);

	if (t85 != -1876LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x441 = INT32_MIN;
	int32_t x442 = INT32_MAX;
	static uint16_t x443 = 24U;
	int32_t x444 = -1;
	int32_t t86 = 268227832;

	t86 = (((x441<=x442)+x443)*x444);

	if (t86 != -25) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x449 = 29U;
	volatile uint16_t x450 = UINT16_MAX;
	int16_t x451 = INT16_MAX;
	volatile int32_t t87 = -982392909;

	t87 = (((x449<=x450)+x451)*x452);

	if (t87 != 4161536) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x453 = -1;
	int32_t x454 = INT32_MAX;
	uint16_t x455 = 632U;
	int64_t x456 = -86LL;
	volatile int64_t t88 = -33720LL;

	t88 = (((x453<=x454)+x455)*x456);

	if (t88 != -54438LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x457 = 4U;
	uint16_t x458 = UINT16_MAX;
	int16_t x459 = INT16_MIN;
	uint16_t x460 = 102U;
	int32_t t89 = 55680285;

	t89 = (((x457<=x458)+x459)*x460);

	if (t89 != -3342234) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x461 = 9;
	int8_t x462 = INT8_MAX;
	uint8_t x463 = 0U;
	volatile int64_t t90 = INT64_MIN;

	t90 = (((x461<=x462)+x463)*x464);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x465 = 12847;
	int8_t x466 = INT8_MAX;

	t91 = (((x465<=x466)+x467)*x468);

	if (t91 != 2519220LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x469 = 8556;
	int16_t x471 = -746;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t92 = -395541;

	t92 = (((x469<=x470)+x471)*x472);

	if (t92 != -48823575) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = -6749;
	static uint16_t x474 = UINT16_MAX;
	static uint8_t x475 = UINT8_MAX;
	static int16_t x476 = 228;
	volatile int32_t t93 = -177816110;

	t93 = (((x473<=x474)+x475)*x476);

	if (t93 != 58368) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x478 = INT64_MIN;
	static int32_t x479 = -1;
	int8_t x480 = 0;
	static volatile int32_t t94 = 123841639;

	t94 = (((x477<=x478)+x479)*x480);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x481 = 63U;
	static int64_t x482 = 1046172618019402347LL;
	int16_t x483 = -1;
	int64_t x484 = INT64_MIN;
	volatile int64_t t95 = -16578396958LL;

	t95 = (((x481<=x482)+x483)*x484);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x489 = UINT32_MAX;
	int8_t x490 = INT8_MAX;
	volatile uint16_t x491 = 15U;
	uint32_t x492 = UINT32_MAX;
	uint32_t t96 = 1U;

	t96 = (((x489<=x490)+x491)*x492);

	if (t96 != 4294967281U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x497 = -477644005993LL;
	int16_t x498 = -1;
	static volatile uint32_t x499 = 11571860U;
	int16_t x500 = INT16_MIN;
	static uint32_t t97 = 126079862U;

	t97 = (((x497<=x498)+x499)*x500);

	if (t97 != 3065348096U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x502 = INT64_MAX;
	static volatile int8_t x503 = INT8_MAX;

	t98 = (((x501<=x502)+x503)*x504);

	if (t98 != 1664U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x505 = UINT64_MAX;
	static int8_t x506 = INT8_MAX;
	int16_t x507 = -3244;
	static int32_t x508 = -1;
	volatile int32_t t99 = -1;

	t99 = (((x505<=x506)+x507)*x508);

	if (t99 != 3244) { NG(); } else { ; }
	
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

