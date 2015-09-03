#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -7;
volatile uint32_t x6 = UINT32_MAX;
uint32_t x8 = 62U;
uint32_t x17 = 462617U;
volatile uint64_t x23 = 2328863201076837LLU;
int64_t x24 = -1LL;
static volatile uint64_t t4 = 345567LLU;
int64_t x26 = INT64_MIN;
uint64_t x29 = UINT64_MAX;
static volatile int16_t x34 = -1;
uint16_t x35 = 15177U;
int64_t x41 = INT64_MIN;
int16_t x54 = -10577;
volatile uint16_t x56 = UINT16_MAX;
static int64_t x69 = -1124442LL;
int8_t x71 = -1;
int64_t x72 = -433185094LL;
static volatile int64_t t15 = -1LL;
int8_t x88 = INT8_MAX;
uint32_t x96 = 710826U;
int32_t x98 = -31166269;
volatile int64_t t21 = -24213LL;
static uint16_t x104 = 5U;
static int8_t x110 = INT8_MIN;
static int64_t t24 = 866775LL;
int64_t x116 = INT64_MIN;
uint64_t x117 = 5947679109701415LLU;
static int64_t x122 = 620486248090842377LL;
int32_t t27 = 6688141;
uint16_t x126 = UINT16_MAX;
int32_t x127 = 7;
volatile int32_t t28 = 2;
uint16_t x132 = UINT16_MAX;
static volatile int64_t x147 = -1LL;
uint32_t x151 = UINT32_MAX;
volatile int8_t x165 = -8;
int16_t x167 = -1;
volatile uint64_t x170 = 8500936613822173871LLU;
int16_t x177 = -453;
int16_t x184 = -1;
int8_t x187 = INT8_MIN;
uint8_t x190 = 15U;
int32_t x200 = INT32_MIN;
uint32_t x204 = UINT32_MAX;
uint32_t x208 = 14147605U;
uint64_t x217 = UINT64_MAX;
int64_t x221 = INT64_MIN;
uint64_t x224 = 4164565116LLU;
volatile uint64_t t49 = 11430LLU;
int16_t x230 = -1;
int8_t x231 = INT8_MAX;
static int8_t x235 = INT8_MIN;
uint32_t x242 = 1071U;
int32_t x248 = -122;
static volatile int64_t t54 = -3168343890LL;
uint64_t x266 = 23LLU;
int8_t x271 = INT8_MIN;
int64_t x276 = INT64_MIN;
int64_t t58 = -32LL;
static uint8_t x279 = 2U;
int32_t x280 = -62;
int8_t x282 = INT8_MIN;
int32_t x285 = INT32_MIN;
volatile int32_t x289 = 53080;
volatile int32_t x290 = 0;
static int32_t t62 = -76375;
static int64_t t63 = 15LL;
static int64_t x305 = INT64_MAX;
int8_t x309 = 0;
static volatile uint16_t x321 = 40U;
uint32_t x334 = 1582U;
int16_t x347 = -1;
static uint32_t t76 = 2021U;
uint32_t x360 = 2545U;
volatile uint32_t t77 = 1U;
static volatile int32_t x365 = -1;
static volatile int32_t t78 = 298745;
volatile int64_t x369 = INT64_MAX;
uint8_t x383 = 3U;
static int16_t x388 = INT16_MIN;
volatile int32_t t83 = -5251057;
uint32_t x390 = 74407U;
static int32_t t85 = 0;
static int8_t x406 = -1;
static volatile int8_t x414 = INT8_MAX;
int64_t x418 = INT64_MIN;
uint32_t x419 = 1U;
static int32_t t91 = -59286;
volatile int32_t x428 = INT32_MIN;
int32_t x436 = -1;
int8_t x437 = INT8_MIN;
int16_t x442 = -4100;
uint16_t x444 = 29U;
int32_t x446 = -8;
int8_t x453 = 1;
volatile int64_t x456 = INT64_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = 785973;
	volatile int16_t x3 = INT16_MIN;
	volatile int32_t x4 = 45736;
	int32_t t0 = 2;

	t0 = (((x1<x2)*x3)*x4);

	if (t0 != -1498677248) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = -638;
	volatile uint32_t t1 = 10125U;

	t1 = (((x5<x6)*x7)*x8);

	if (t1 != 4294927740U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MAX;
	static volatile int64_t t2 = 765211036824426LL;

	t2 = (((x9<x10)*x11)*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = UINT8_MAX;
	volatile uint16_t x19 = 3293U;
	static int64_t x20 = INT64_MAX;
	int64_t t3 = 13588LL;

	t3 = (((x17<x18)*x19)*x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	static int8_t x22 = -1;

	t4 = (((x21<x22)*x23)*x24);

	if (t4 != 18444415210508474779LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -5;
	uint64_t x27 = 95100919939176LLU;
	volatile int32_t x28 = -242;
	volatile uint64_t t5 = 3161125471911538744LLU;

	t5 = (((x25<x26)*x27)*x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x30 = UINT32_MAX;
	uint32_t x31 = UINT32_MAX;
	uint8_t x32 = 4U;
	volatile uint32_t t6 = 29873932U;

	t6 = (((x29<x30)*x31)*x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 9151;
	int16_t x36 = 98;
	volatile int32_t t7 = 576;

	t7 = (((x33<x34)*x35)*x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	int32_t x38 = -1;
	uint16_t x39 = 3725U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t8 = -231661672;

	t8 = (((x37<x38)*x39)*x40);

	if (t8 != 244117875) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x42 = INT16_MIN;
	uint32_t x43 = 31U;
	uint64_t x44 = UINT64_MAX;
	uint64_t t9 = 6455534865424642LLU;

	t9 = (((x41<x42)*x43)*x44);

	if (t9 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = 5;
	uint32_t x47 = 265223288U;
	uint64_t x48 = UINT64_MAX;
	uint64_t t10 = 12073LLU;

	t10 = (((x45<x46)*x47)*x48);

	if (t10 != 18446744073444328328LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -670;
	volatile uint32_t x55 = 3982U;
	uint32_t t11 = 0U;

	t11 = (((x53<x54)*x55)*x56);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MIN;
	static volatile int16_t x58 = -1;
	static volatile uint8_t x59 = 114U;
	int32_t x60 = -17425093;
	int32_t t12 = 3302;

	t12 = (((x57<x58)*x59)*x60);

	if (t12 != -1986460602) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 7U;
	int32_t x62 = INT32_MIN;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = 61;
	static volatile int32_t t13 = 3716401;

	t13 = (((x61<x62)*x63)*x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = UINT32_MAX;
	int8_t x66 = -32;
	volatile uint16_t x67 = UINT16_MAX;
	uint32_t x68 = 4308302U;
	uint32_t t14 = 0U;

	t14 = (((x65<x66)*x67)*x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = INT8_MIN;

	t15 = (((x69<x70)*x71)*x72);

	if (t15 != 433185094LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 5U;
	int8_t x74 = -1;
	int8_t x75 = -1;
	uint8_t x76 = 3U;
	volatile int32_t t16 = -470258699;

	t16 = (((x73<x74)*x75)*x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	static volatile int8_t x78 = -1;
	volatile uint64_t x79 = 20343785LLU;
	static uint64_t x80 = UINT64_MAX;
	uint64_t t17 = 211877560LLU;

	t17 = (((x77<x78)*x79)*x80);

	if (t17 != 18446744073689207831LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	int8_t x86 = -5;
	uint64_t x87 = UINT64_MAX;
	static volatile uint64_t t18 = 1679504093049289LLU;

	t18 = (((x85<x86)*x87)*x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = 3130154LLU;
	int8_t x92 = -1;
	volatile uint64_t t19 = 185LLU;

	t19 = (((x89<x90)*x91)*x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	static uint8_t x94 = 28U;
	int8_t x95 = INT8_MIN;
	volatile uint32_t t20 = 14U;

	t20 = (((x93<x94)*x95)*x96);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = INT8_MIN;
	int64_t x99 = -1LL;
	int16_t x100 = INT16_MAX;

	t21 = (((x97<x98)*x99)*x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = -1;
	volatile int64_t x103 = 6406867766LL;
	volatile int64_t t22 = 13LL;

	t22 = (((x101<x102)*x103)*x104);

	if (t22 != 32034338830LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = -1LL;
	int8_t x106 = -4;
	int8_t x107 = 0;
	volatile uint64_t x108 = 5LLU;
	uint64_t t23 = 182625524238LLU;

	t23 = (((x105<x106)*x107)*x108);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	int64_t x111 = -2066772LL;
	static int64_t x112 = INT64_MAX;

	t24 = (((x109<x110)*x111)*x112);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x113 = INT16_MIN;
	int64_t x114 = 16640670LL;
	uint16_t x115 = 1U;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x113<x114)*x115)*x116);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = INT16_MIN;
	uint32_t x119 = 3758015U;
	volatile int32_t x120 = -1;
	volatile uint32_t t26 = 6150732U;

	t26 = (((x117<x118)*x119)*x120);

	if (t26 != 4291209281U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MAX;
	static int8_t x123 = -1;
	int8_t x124 = 1;

	t27 = (((x121<x122)*x123)*x124);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = INT16_MAX;
	static uint8_t x128 = 1U;

	t28 = (((x125<x126)*x127)*x128);

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = 1916;
	int8_t x131 = INT8_MAX;
	int32_t t29 = -1;

	t29 = (((x129<x130)*x131)*x132);

	if (t29 != 8322945) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x133 = 6885U;
	volatile int16_t x134 = INT16_MIN;
	volatile int16_t x135 = INT16_MAX;
	int32_t x136 = -1;
	static volatile int32_t t30 = 31381829;

	t30 = (((x133<x134)*x135)*x136);

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 3U;
	volatile int8_t x143 = 9;
	uint16_t x144 = UINT16_MAX;
	int32_t t31 = 21315;

	t31 = (((x141<x142)*x143)*x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MAX;
	uint64_t x146 = UINT64_MAX;
	volatile int8_t x148 = 0;
	volatile int64_t t32 = -117770804683LL;

	t32 = (((x145<x146)*x147)*x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MIN;
	static uint32_t x152 = 12U;
	uint32_t t33 = 64145973U;

	t33 = (((x149<x150)*x151)*x152);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 2U;
	static int32_t x158 = -1;
	uint32_t x159 = 1862386U;
	int16_t x160 = INT16_MIN;
	uint32_t t34 = 123U;

	t34 = (((x157<x158)*x159)*x160);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MAX;
	uint8_t x162 = 30U;
	volatile uint32_t x163 = UINT32_MAX;
	static int32_t x164 = INT32_MIN;
	static volatile uint32_t t35 = 128U;

	t35 = (((x161<x162)*x163)*x164);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = INT32_MIN;
	volatile int64_t x168 = -1LL;
	int64_t t36 = 373860047LL;

	t36 = (((x165<x166)*x167)*x168);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x169 = 29764U;
	int16_t x171 = -1;
	static uint8_t x172 = 34U;
	volatile int32_t t37 = -154314;

	t37 = (((x169<x170)*x171)*x172);

	if (t37 != -34) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x173 = 1LLU;
	volatile uint32_t x174 = 43288U;
	int8_t x175 = -1;
	uint16_t x176 = 377U;
	int32_t t38 = -239221836;

	t38 = (((x173<x174)*x175)*x176);

	if (t38 != -377) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x178 = -1;
	volatile int16_t x179 = INT16_MAX;
	uint64_t x180 = 2512204011453298LLU;
	uint64_t t39 = 8141413246820763681LLU;

	t39 = (((x177<x178)*x179)*x180);

	if (t39 != 8530412548452009102LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = INT8_MIN;
	volatile int32_t x182 = 3568643;
	uint32_t x183 = 214642U;
	uint32_t t40 = 11910U;

	t40 = (((x181<x182)*x183)*x184);

	if (t40 != 4294752654U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = UINT8_MAX;
	volatile int16_t x188 = 31;
	volatile int32_t t41 = 12913288;

	t41 = (((x185<x186)*x187)*x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MAX;
	int16_t x191 = 237;
	int16_t x192 = -1;
	static volatile int32_t t42 = 12507425;

	t42 = (((x189<x190)*x191)*x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MAX;
	int64_t x194 = 1LL;
	int64_t x195 = INT64_MIN;
	static uint16_t x196 = 6142U;
	static volatile int64_t t43 = -114186299765LL;

	t43 = (((x193<x194)*x195)*x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = 0U;
	int32_t x198 = -5;
	int64_t x199 = -119LL;
	volatile int64_t t44 = -56445184799993442LL;

	t44 = (((x197<x198)*x199)*x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = -3226;
	uint16_t x202 = 1U;
	int8_t x203 = 1;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (((x201<x202)*x203)*x204);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int32_t x206 = INT32_MAX;
	int64_t x207 = 113806364658LL;
	volatile int64_t t46 = 911885200LL;

	t46 = (((x205<x206)*x207)*x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x213 = 909702;
	volatile int8_t x214 = -1;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = 485U;
	static int64_t t47 = -1906567615768LL;

	t47 = (((x213<x214)*x215)*x216);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x218 = INT64_MAX;
	static volatile int32_t x219 = 161245245;
	int16_t x220 = -1078;
	static int32_t t48 = -13728630;

	t48 = (((x217<x218)*x219)*x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x222 = INT64_MIN;
	uint8_t x223 = UINT8_MAX;

	t49 = (((x221<x222)*x223)*x224);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = INT64_MIN;
	uint32_t x226 = 768U;
	static volatile int64_t x227 = -1LL;
	int32_t x228 = -2;
	static volatile int64_t t50 = -17239661359LL;

	t50 = (((x225<x226)*x227)*x228);

	if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 218721921942LLU;
	int16_t x232 = -1;
	int32_t t51 = -3;

	t51 = (((x229<x230)*x231)*x232);

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MIN;
	int64_t x234 = 53989LL;
	static int8_t x236 = 10;
	int32_t t52 = -32724;

	t52 = (((x233<x234)*x235)*x236);

	if (t52 != -1280) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = -1;
	int8_t x243 = 0;
	uint64_t x244 = 72363796977902LLU;
	static uint64_t t53 = 629362193268LLU;

	t53 = (((x241<x242)*x243)*x244);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x245 = 3;
	static int64_t x246 = -212LL;
	static volatile int64_t x247 = 0LL;

	t54 = (((x245<x246)*x247)*x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x254 = 13357LLU;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 18720710874088LLU;
	volatile uint64_t t55 = 723426568824LLU;

	t55 = (((x253<x254)*x255)*x256);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x265 = 11705370;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 546183U;
	volatile uint32_t t56 = 4132113U;

	t56 = (((x265<x266)*x267)*x268);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile int16_t x270 = 1;
	int16_t x272 = -3;
	int32_t t57 = 14;

	t57 = (((x269<x270)*x271)*x272);

	if (t57 != 384) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x273 = UINT32_MAX;
	int32_t x274 = INT32_MAX;
	volatile int64_t x275 = -888089LL;

	t58 = (((x273<x274)*x275)*x276);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MIN;
	uint32_t x278 = UINT32_MAX;
	int32_t t59 = 5349;

	t59 = (((x277<x278)*x279)*x280);

	if (t59 != -124) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = 30881747365610209LL;
	volatile int8_t x283 = -13;
	uint32_t x284 = 14U;
	uint32_t t60 = 854649U;

	t60 = (((x281<x282)*x283)*x284);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x286 = 1LLU;
	uint8_t x287 = 3U;
	int16_t x288 = INT16_MIN;
	int32_t t61 = 36538858;

	t61 = (((x285<x286)*x287)*x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x291 = INT32_MIN;
	static int32_t x292 = -586;

	t62 = (((x289<x290)*x291)*x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x297 = 6049U;
	volatile uint32_t x298 = 30787503U;
	int16_t x299 = -1;
	static int64_t x300 = 99705371210812LL;

	t63 = (((x297<x298)*x299)*x300);

	if (t63 != -99705371210812LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x301 = 1U;
	static int32_t x302 = INT32_MIN;
	volatile int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t64 = 1118;

	t64 = (((x301<x302)*x303)*x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x306 = -1266489;
	uint32_t x307 = 11U;
	int32_t x308 = INT32_MAX;
	static volatile uint32_t t65 = 33096290U;

	t65 = (((x305<x306)*x307)*x308);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x310 = -5009645;
	int64_t x311 = -1LL;
	volatile int32_t x312 = 151975;
	volatile int64_t t66 = 0LL;

	t66 = (((x309<x310)*x311)*x312);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = 10;
	int16_t x315 = 0;
	int32_t x316 = -1;
	volatile int32_t t67 = -1;

	t67 = (((x313<x314)*x315)*x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x322 = -1;
	int8_t x323 = 0;
	uint64_t x324 = 8164637067420102984LLU;
	uint64_t t68 = 6189355036920118LLU;

	t68 = (((x321<x322)*x323)*x324);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = INT64_MAX;
	int32_t x326 = -1;
	uint8_t x327 = 1U;
	int32_t x328 = 12;
	int32_t t69 = 6005;

	t69 = (((x325<x326)*x327)*x328);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x329 = INT32_MAX;
	uint16_t x330 = 2U;
	int32_t x331 = -1;
	uint32_t x332 = 291697U;
	volatile uint32_t t70 = 56442986U;

	t70 = (((x329<x330)*x331)*x332);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x333 = UINT32_MAX;
	uint32_t x335 = 109825934U;
	int16_t x336 = -6892;
	static volatile uint32_t t71 = 535U;

	t71 = (((x333<x334)*x335)*x336);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 2U;
	int16_t x338 = 1;
	int64_t x339 = INT64_MAX;
	static volatile int8_t x340 = INT8_MIN;
	static int64_t t72 = 128522344239584103LL;

	t72 = (((x337<x338)*x339)*x340);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 2U;
	int64_t x342 = INT64_MIN;
	static int8_t x343 = INT8_MIN;
	int32_t x344 = -623226808;
	static int32_t t73 = -244208;

	t73 = (((x341<x342)*x343)*x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = 17U;
	int32_t x346 = 5756;
	int16_t x348 = INT16_MIN;
	volatile int32_t t74 = -1009675930;

	t74 = (((x345<x346)*x347)*x348);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x349 = INT8_MIN;
	uint8_t x350 = 3U;
	uint8_t x351 = 60U;
	uint64_t x352 = 52985LLU;
	uint64_t t75 = 3707396562LLU;

	t75 = (((x349<x350)*x351)*x352);

	if (t75 != 3179100LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = 32664;
	uint32_t x354 = 383057572U;
	volatile int16_t x355 = -1;
	static uint32_t x356 = 307687483U;

	t76 = (((x353<x354)*x355)*x356);

	if (t76 != 3987279813U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x357 = 115U;
	static int8_t x358 = INT8_MAX;
	uint16_t x359 = 15U;

	t77 = (((x357<x358)*x359)*x360);

	if (t77 != 38175U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x366 = -1;
	int32_t x367 = -59;
	static int32_t x368 = -1;

	t78 = (((x365<x366)*x367)*x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x370 = 435U;
	static int32_t x371 = -1;
	int32_t x372 = INT32_MAX;
	int32_t t79 = 1451291;

	t79 = (((x369<x370)*x371)*x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = UINT64_MAX;
	uint64_t x375 = 226932667766450170LLU;
	volatile uint32_t x376 = 227U;
	volatile uint64_t t80 = 124421LLU;

	t80 = (((x373<x374)*x375)*x376);

	if (t80 != 14620227435565085358LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x377 = -1;
	int64_t x378 = INT64_MIN;
	int32_t x379 = 8209191;
	static int64_t x380 = -11LL;
	volatile int64_t t81 = 2LL;

	t81 = (((x377<x378)*x379)*x380);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = 285LL;
	int64_t x382 = -105759322LL;
	int64_t x384 = 10LL;
	static volatile int64_t t82 = 86981846LL;

	t82 = (((x381<x382)*x383)*x384);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x385 = 2U;
	uint8_t x386 = 0U;
	uint16_t x387 = UINT16_MAX;

	t83 = (((x385<x386)*x387)*x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x389 = 0;
	static uint32_t x391 = 2U;
	volatile uint8_t x392 = 73U;
	static uint32_t t84 = 1864U;

	t84 = (((x389<x390)*x391)*x392);

	if (t84 != 146U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MAX;
	int64_t x394 = 1328LL;
	int32_t x395 = 30;
	int8_t x396 = INT8_MIN;

	t85 = (((x393<x394)*x395)*x396);

	if (t85 != -3840) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -52102666327LL;
	int64_t x398 = INT64_MIN;
	static int16_t x399 = INT16_MAX;
	static uint64_t x400 = 29LLU;
	uint64_t t86 = 447308726231LLU;

	t86 = (((x397<x398)*x399)*x400);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = INT32_MIN;
	volatile uint32_t x407 = 8U;
	volatile int8_t x408 = 2;
	volatile uint32_t t87 = 1793006U;

	t87 = (((x405<x406)*x407)*x408);

	if (t87 != 16U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x409 = INT8_MAX;
	volatile int64_t x410 = INT64_MAX;
	volatile int16_t x411 = -6;
	uint16_t x412 = 16421U;
	static int32_t t88 = -15709798;

	t88 = (((x409<x410)*x411)*x412);

	if (t88 != -98526) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x413 = 442U;
	volatile int16_t x415 = -440;
	int16_t x416 = 270;
	int32_t t89 = -2;

	t89 = (((x413<x414)*x415)*x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x417 = 296588995111819LLU;
	volatile int16_t x420 = INT16_MAX;
	uint32_t t90 = 11299901U;

	t90 = (((x417<x418)*x419)*x420);

	if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MAX;
	volatile int8_t x423 = INT8_MIN;
	volatile uint8_t x424 = UINT8_MAX;

	t91 = (((x421<x422)*x423)*x424);

	if (t91 != -32640) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x425 = 4;
	int8_t x426 = INT8_MIN;
	static int8_t x427 = INT8_MIN;
	int32_t t92 = -202282;

	t92 = (((x425<x426)*x427)*x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x429 = 256190128LLU;
	volatile int32_t x430 = -4;
	int16_t x431 = 11;
	volatile int32_t x432 = -1;
	static volatile int32_t t93 = 237668;

	t93 = (((x429<x430)*x431)*x432);

	if (t93 != -11) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = INT16_MAX;
	int64_t x434 = -59872175567LL;
	uint64_t x435 = 5LLU;
	uint64_t t94 = 80510494LLU;

	t94 = (((x433<x434)*x435)*x436);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x438 = 25U;
	uint32_t x439 = UINT32_MAX;
	volatile int16_t x440 = INT16_MIN;
	static volatile uint32_t t95 = 31194U;

	t95 = (((x437<x438)*x439)*x440);

	if (t95 != 32768U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x441 = INT8_MAX;
	uint16_t x443 = 3U;
	volatile int32_t t96 = -21;

	t96 = (((x441<x442)*x443)*x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x445 = 63U;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = INT64_MAX;
	int64_t t97 = 752298205118LL;

	t97 = (((x445<x446)*x447)*x448);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x449 = 10U;
	static uint16_t x450 = 14U;
	volatile int16_t x451 = -1;
	uint8_t x452 = 2U;
	int32_t t98 = -3;

	t98 = (((x449<x450)*x451)*x452);

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x454 = INT8_MIN;
	int8_t x455 = -6;
	volatile int64_t t99 = -1105280190LL;

	t99 = (((x453<x454)*x455)*x456);

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

