#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = 12LL;
int8_t x24 = -1;
uint16_t x34 = UINT16_MAX;
volatile int32_t t7 = 26;
volatile uint64_t x40 = 54LLU;
uint64_t x44 = UINT64_MAX;
int64_t x47 = -10639937692752663LL;
int64_t x48 = -1LL;
uint16_t x55 = 24U;
int32_t x57 = INT32_MAX;
volatile int64_t x58 = 1999017434093276147LL;
volatile uint64_t x85 = UINT64_MAX;
int32_t x87 = 14;
int16_t x88 = INT16_MAX;
volatile int32_t t16 = -3045514;
uint64_t x95 = 1469344871LLU;
static volatile int32_t x98 = 3608;
volatile int32_t t20 = 102968258;
int32_t x105 = INT32_MIN;
int32_t x113 = INT32_MIN;
int32_t x120 = 288;
volatile int32_t t23 = 206906;
uint32_t x127 = 191729U;
volatile int8_t x134 = INT8_MIN;
int8_t x136 = INT8_MAX;
volatile int32_t t25 = -7082789;
uint16_t x140 = UINT16_MAX;
uint8_t x145 = UINT8_MAX;
volatile int32_t t28 = 5;
static int16_t x168 = 219;
int32_t t29 = 0;
int8_t x173 = -1;
int32_t t31 = -256875;
static uint32_t x196 = 429172496U;
uint32_t x209 = 1U;
static uint64_t x213 = UINT64_MAX;
int8_t x220 = INT8_MIN;
uint8_t x223 = UINT8_MAX;
volatile uint8_t x233 = 66U;
static int8_t x258 = INT8_MIN;
int32_t x262 = INT32_MAX;
volatile int32_t t50 = 124;
volatile int16_t x268 = -1;
static int32_t x269 = INT32_MIN;
static volatile int64_t x271 = INT64_MIN;
static uint32_t x274 = 207966022U;
static uint16_t x277 = UINT16_MAX;
int32_t x278 = INT32_MIN;
uint16_t x279 = 11U;
int64_t x282 = INT64_MAX;
int8_t x284 = -1;
int32_t t56 = -5002;
int16_t x290 = -13661;
int16_t x299 = 358;
int32_t t58 = 59;
volatile int64_t x307 = INT64_MIN;
static uint64_t x313 = UINT64_MAX;
uint64_t x315 = 5868025848LLU;
uint8_t x321 = UINT8_MAX;
static int32_t x322 = -235927;
volatile uint32_t x333 = UINT32_MAX;
uint16_t x334 = UINT16_MAX;
uint64_t x340 = 113LLU;
volatile int8_t x343 = -2;
volatile int32_t t68 = -723;
int64_t x349 = INT64_MIN;
int64_t x350 = -142195101374114LL;
int64_t x370 = -1LL;
uint8_t x372 = UINT8_MAX;
int32_t t71 = 89170062;
int8_t x378 = INT8_MAX;
int16_t x399 = INT16_MIN;
uint16_t x404 = 31U;
volatile int32_t t76 = 16777089;
static int64_t x411 = INT64_MIN;
int64_t x414 = INT64_MAX;
int32_t t80 = -18475476;
int32_t x425 = INT32_MIN;
int8_t x434 = INT8_MIN;
volatile int32_t t82 = -301303428;
int64_t x459 = INT64_MAX;
int16_t x464 = INT16_MIN;
static int8_t x466 = INT8_MAX;
volatile int32_t t88 = -2155;
int16_t x475 = 7415;
static uint16_t x487 = 1068U;
volatile int32_t t93 = 231774;
volatile int8_t x510 = INT8_MIN;
volatile uint8_t x513 = 37U;
int16_t x516 = 2490;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int64_t x4 = -4017LL;
	int32_t t0 = -54;

	t0 = ((x1<x2)<(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static volatile int8_t x6 = -15;
	static volatile uint16_t x7 = UINT16_MAX;
	static int32_t t1 = -268;

	t1 = ((x5<x6)<(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 8LLU;
	int32_t x10 = -174;
	int32_t x11 = -1;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 100610;

	t2 = ((x9<x10)<(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	uint64_t x14 = 18117070494763LLU;
	static int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	static volatile int32_t t3 = -27422;

	t3 = ((x13<x14)<(x15*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 5548;
	uint8_t x18 = 0U;
	static int8_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	static volatile int32_t t4 = -1;

	t4 = ((x17<x18)<(x19*x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = INT16_MIN;
	static int32_t t5 = -7357;

	t5 = ((x21<x22)<(x23*x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 6039U;
	volatile int32_t x30 = 114705;
	int16_t x31 = -2991;
	volatile uint32_t x32 = 15930U;
	volatile int32_t t6 = 2850857;

	t6 = ((x29<x30)<(x31*x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MIN;

	t7 = ((x33<x34)<(x35*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 152182594566891530LL;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = 6116U;
	static int32_t t8 = 402014;

	t8 = ((x37<x38)<(x39*x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -14;
	uint64_t x42 = 23416285016896LLU;
	volatile uint32_t x43 = 0U;
	static volatile int32_t t9 = 245875869;

	t9 = ((x41<x42)<(x43*x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MIN;
	static int16_t x46 = INT16_MIN;
	int32_t t10 = 121327;

	t10 = ((x45<x46)<(x47*x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 11;
	int16_t x54 = INT16_MAX;
	volatile uint32_t x56 = 319254U;
	static int32_t t11 = -259814125;

	t11 = ((x53<x54)<(x55*x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x59 = INT16_MIN;
	int64_t x60 = -1LL;
	volatile int32_t t12 = 1;

	t12 = ((x57<x58)<(x59*x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = -1;
	static volatile int32_t x66 = INT32_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	int64_t x68 = -1LL;
	static int32_t t13 = 29;

	t13 = ((x65<x66)<(x67*x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = 578842620710722LL;
	volatile uint16_t x74 = 7116U;
	uint32_t x75 = 2467U;
	volatile uint64_t x76 = 15787800434LLU;
	int32_t t14 = -1031;

	t14 = ((x73<x74)<(x75*x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -1;
	int64_t x82 = 11184088099LL;
	uint32_t x83 = 1309U;
	int16_t x84 = -1;
	int32_t t15 = -1;

	t15 = ((x81<x82)<(x83*x84));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x86 = 23U;

	t16 = ((x85<x86)<(x87*x88));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x89 = INT16_MIN;
	static int16_t x90 = INT16_MIN;
	int64_t x91 = 45784448191LL;
	int8_t x92 = 29;
	int32_t t17 = -4075;

	t17 = ((x89<x90)<(x91*x92));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x93 = 0U;
	static volatile int16_t x94 = INT16_MIN;
	static uint16_t x96 = 41U;
	int32_t t18 = -96264;

	t18 = ((x93<x94)<(x95*x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = -1;
	static int64_t x99 = 1199773553LL;
	volatile uint64_t x100 = UINT64_MAX;
	int32_t t19 = -1347498;

	t19 = ((x97<x98)<(x99*x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x101 = 494U;
	int32_t x102 = INT32_MAX;
	int16_t x103 = 0;
	volatile uint64_t x104 = 241660350377687LLU;

	t20 = ((x101<x102)<(x103*x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x106 = INT16_MAX;
	uint32_t x107 = 266U;
	int32_t x108 = INT32_MIN;
	int32_t t21 = 479300473;

	t21 = ((x105<x106)<(x107*x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x114 = UINT8_MAX;
	uint8_t x115 = 1U;
	static volatile int8_t x116 = 1;
	static int32_t t22 = 515477920;

	t22 = ((x113<x114)<(x115*x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = -2910;
	int64_t x119 = -2LL;

	t23 = ((x117<x118)<(x119*x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x125 = INT16_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x128 = -1;
	volatile int32_t t24 = -77578818;

	t24 = ((x125<x126)<(x127*x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = 23;
	uint32_t x135 = 0U;

	t25 = ((x133<x134)<(x135*x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x137 = INT64_MIN;
	int16_t x138 = -1;
	int8_t x139 = INT8_MAX;
	volatile int32_t t26 = -768;

	t26 = ((x137<x138)<(x139*x140));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MAX;
	int16_t x148 = 0;
	int32_t t27 = -13466;

	t27 = ((x145<x146)<(x147*x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x161 = 443766LLU;
	int64_t x162 = -1LL;
	volatile uint16_t x163 = UINT16_MAX;
	int64_t x164 = -1LL;

	t28 = ((x161<x162)<(x163*x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = -3874;
	int16_t x166 = -26;
	int16_t x167 = INT16_MIN;

	t29 = ((x165<x166)<(x167*x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x169 = -1;
	int32_t x170 = -1;
	uint64_t x171 = 2432862273984215LLU;
	int32_t x172 = INT32_MIN;
	volatile int32_t t30 = -121;

	t30 = ((x169<x170)<(x171*x172));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x174 = -2;
	int8_t x175 = INT8_MIN;
	volatile int8_t x176 = 1;

	t31 = ((x173<x174)<(x175*x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x177 = -1727474352665923215LL;
	uint64_t x178 = UINT64_MAX;
	uint32_t x179 = 45555U;
	static int8_t x180 = INT8_MAX;
	int32_t t32 = -7557660;

	t32 = ((x177<x178)<(x179*x180));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x181 = 141298694728290749LLU;
	int64_t x182 = -1LL;
	int8_t x183 = 5;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t33 = 23074275;

	t33 = ((x181<x182)<(x183*x184));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = INT8_MAX;
	volatile int64_t x186 = -1LL;
	volatile uint64_t x187 = UINT64_MAX;
	static int8_t x188 = -1;
	int32_t t34 = 123068955;

	t34 = ((x185<x186)<(x187*x188));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -1LL;
	volatile uint8_t x190 = 4U;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = 191;
	volatile int32_t t35 = -769687;

	t35 = ((x189<x190)<(x191*x192));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = -103;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 393U;
	int32_t t36 = -206795588;

	t36 = ((x193<x194)<(x195*x196));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x201 = INT64_MAX;
	volatile uint16_t x202 = 12U;
	int8_t x203 = -1;
	int8_t x204 = INT8_MIN;
	int32_t t37 = -119773;

	t37 = ((x201<x202)<(x203*x204));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = 7;
	static uint32_t x206 = 13127689U;
	uint32_t x207 = 109575U;
	volatile int16_t x208 = -1;
	int32_t t38 = -163;

	t38 = ((x205<x206)<(x207*x208));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x210 = -35;
	uint8_t x211 = UINT8_MAX;
	uint32_t x212 = 695U;
	int32_t t39 = 215340836;

	t39 = ((x209<x210)<(x211*x212));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x214 = -961800795LL;
	int8_t x215 = -52;
	int32_t x216 = -7558185;
	volatile int32_t t40 = -93266529;

	t40 = ((x213<x214)<(x215*x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x217 = 124U;
	int32_t x218 = INT32_MAX;
	volatile int16_t x219 = INT16_MIN;
	volatile int32_t t41 = 28376;

	t41 = ((x217<x218)<(x219*x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x221 = -2041525519LL;
	static uint32_t x222 = 149454838U;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t42 = -8343;

	t42 = ((x221<x222)<(x223*x224));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = -295614670621LL;
	int32_t x230 = INT32_MIN;
	static int8_t x231 = 37;
	static uint64_t x232 = 45043LLU;
	int32_t t43 = -1703;

	t43 = ((x229<x230)<(x231*x232));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x234 = INT32_MAX;
	static int64_t x235 = -84332LL;
	int32_t x236 = 5;
	volatile int32_t t44 = 2312549;

	t44 = ((x233<x234)<(x235*x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	static uint16_t x239 = 134U;
	uint8_t x240 = 23U;
	int32_t t45 = 119410433;

	t45 = ((x237<x238)<(x239*x240));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MIN;
	static uint8_t x242 = 12U;
	int32_t x243 = -3047;
	int8_t x244 = -1;
	int32_t t46 = 21584;

	t46 = ((x241<x242)<(x243*x244));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x245 = 6714519;
	volatile uint32_t x246 = 15023U;
	volatile int64_t x247 = -1846LL;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t47 = -151949769;

	t47 = ((x245<x246)<(x247*x248));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x253 = INT16_MIN;
	uint32_t x254 = 12U;
	volatile uint8_t x255 = 7U;
	int16_t x256 = INT16_MIN;
	volatile int32_t t48 = 156003518;

	t48 = ((x253<x254)<(x255*x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x257 = 411U;
	int64_t x259 = 88600LL;
	volatile int8_t x260 = -1;
	int32_t t49 = 855;

	t49 = ((x257<x258)<(x259*x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x263 = 127LLU;
	int8_t x264 = 17;

	t50 = ((x261<x262)<(x263*x264));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x265 = INT32_MAX;
	volatile int32_t x266 = INT32_MIN;
	int8_t x267 = -1;
	volatile int32_t t51 = -13;

	t51 = ((x265<x266)<(x267*x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x270 = 2LLU;
	static int16_t x272 = 0;
	int32_t t52 = -77059;

	t52 = ((x269<x270)<(x271*x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = -76800LL;
	int16_t x275 = 1;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t53 = 6281900;

	t53 = ((x273<x274)<(x275*x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x280 = 679930103021460LL;
	static volatile int32_t t54 = -2;

	t54 = ((x277<x278)<(x279*x280));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x283 = 963LL;
	volatile int32_t t55 = 0;

	t55 = ((x281<x282)<(x283*x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x285 = 0U;
	int16_t x286 = INT16_MIN;
	volatile uint64_t x287 = 8414016553914688LLU;
	uint8_t x288 = 91U;

	t56 = ((x285<x286)<(x287*x288));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MIN;
	static int8_t x291 = -2;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t57 = -53;

	t57 = ((x289<x290)<(x291*x292));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = INT8_MIN;
	static volatile int64_t x298 = INT64_MAX;
	static uint32_t x300 = 3220U;

	t58 = ((x297<x298)<(x299*x300));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = 12U;
	int8_t x303 = -1;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t59 = -98529;

	t59 = ((x301<x302)<(x303*x304));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x305 = INT32_MIN;
	uint8_t x306 = 4U;
	int32_t x308 = 1;
	int32_t t60 = 199;

	t60 = ((x305<x306)<(x307*x308));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x309 = 28U;
	uint16_t x310 = UINT16_MAX;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = INT64_MIN;
	volatile int32_t t61 = 2;

	t61 = ((x309<x310)<(x311*x312));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x314 = UINT32_MAX;
	static int8_t x316 = -1;
	int32_t t62 = -15573;

	t62 = ((x313<x314)<(x315*x316));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x323 = -1;
	int16_t x324 = 7361;
	volatile int32_t t63 = -1180;

	t63 = ((x321<x322)<(x323*x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x329 = 0;
	int16_t x330 = INT16_MAX;
	int16_t x331 = INT16_MIN;
	int64_t x332 = 69235LL;
	volatile int32_t t64 = 253760;

	t64 = ((x329<x330)<(x331*x332));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x335 = 156U;
	uint8_t x336 = 62U;
	int32_t t65 = 1822691;

	t65 = ((x333<x334)<(x335*x336));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x337 = 96U;
	volatile int16_t x338 = INT16_MAX;
	static uint64_t x339 = UINT64_MAX;
	volatile int32_t t66 = 125983658;

	t66 = ((x337<x338)<(x339*x340));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x341 = 7722U;
	int32_t x342 = INT32_MAX;
	volatile int8_t x344 = 0;
	volatile int32_t t67 = 12;

	t67 = ((x341<x342)<(x343*x344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MAX;
	static uint8_t x347 = 1U;
	uint16_t x348 = 275U;

	t68 = ((x345<x346)<(x347*x348));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x351 = 391U;
	uint16_t x352 = 2U;
	int32_t t69 = -24998;

	t69 = ((x349<x350)<(x351*x352));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x365 = 468U;
	int8_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = -6;
	volatile int32_t t70 = 39245;

	t70 = ((x365<x366)<(x367*x368));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x369 = 119126505U;
	volatile int8_t x371 = 0;

	t71 = ((x369<x370)<(x371*x372));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x373 = 115051632891LL;
	uint64_t x374 = 17352LLU;
	volatile int16_t x375 = INT16_MAX;
	int16_t x376 = -1;
	volatile int32_t t72 = 456714587;

	t72 = ((x373<x374)<(x375*x376));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x377 = 1850U;
	uint64_t x379 = 11711LLU;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t73 = -137685415;

	t73 = ((x377<x378)<(x379*x380));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = 1;
	static int64_t x382 = 16876746852LL;
	volatile int16_t x383 = -1;
	int16_t x384 = -1821;
	static int32_t t74 = 36135;

	t74 = ((x381<x382)<(x383*x384));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x397 = 0;
	static volatile int8_t x398 = INT8_MIN;
	uint32_t x400 = UINT32_MAX;
	int32_t t75 = 1081;

	t75 = ((x397<x398)<(x399*x400));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x401 = -1;
	int8_t x402 = 2;
	volatile uint64_t x403 = 0LLU;

	t76 = ((x401<x402)<(x403*x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = -2589;
	static uint32_t x406 = 198U;
	int8_t x407 = -1;
	int16_t x408 = INT16_MIN;
	int32_t t77 = 740;

	t77 = ((x405<x406)<(x407*x408));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x409 = 1;
	uint8_t x410 = 56U;
	uint64_t x412 = 532906LLU;
	volatile int32_t t78 = 71;

	t78 = ((x409<x410)<(x411*x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x413 = INT8_MIN;
	uint8_t x415 = 3U;
	int32_t x416 = -1;
	volatile int32_t t79 = -2;

	t79 = ((x413<x414)<(x415*x416));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MAX;
	static int8_t x419 = -1;
	static uint8_t x420 = 41U;

	t80 = ((x417<x418)<(x419*x420));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x426 = UINT32_MAX;
	static volatile int8_t x427 = -1;
	volatile uint32_t x428 = 2710U;
	int32_t t81 = 42467943;

	t81 = ((x425<x426)<(x427*x428));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x433 = 6141LLU;
	static int8_t x435 = -1;
	uint16_t x436 = 94U;

	t82 = ((x433<x434)<(x435*x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x441 = 25U;
	static int8_t x442 = -1;
	int16_t x443 = 1839;
	int32_t x444 = -7;
	int32_t t83 = -1732432;

	t83 = ((x441<x442)<(x443*x444));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x445 = -1;
	int64_t x446 = INT64_MIN;
	volatile int32_t x447 = 3033;
	int64_t x448 = 253235983LL;
	volatile int32_t t84 = -1002383620;

	t84 = ((x445<x446)<(x447*x448));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x449 = INT8_MAX;
	static int16_t x450 = INT16_MAX;
	uint8_t x451 = 3U;
	static int32_t x452 = 0;
	volatile int32_t t85 = 4673;

	t85 = ((x449<x450)<(x451*x452));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x457 = INT32_MAX;
	uint8_t x458 = 49U;
	uint16_t x460 = 0U;
	static int32_t t86 = 1033;

	t86 = ((x457<x458)<(x459*x460));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x461 = 22119508266LLU;
	static int32_t x462 = -1;
	uint8_t x463 = 78U;
	volatile int32_t t87 = -276;

	t87 = ((x461<x462)<(x463*x464));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x465 = 538;
	int16_t x467 = INT16_MIN;
	static uint64_t x468 = 16358LLU;

	t88 = ((x465<x466)<(x467*x468));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x469 = -5LL;
	int8_t x470 = INT8_MIN;
	int8_t x471 = INT8_MAX;
	int8_t x472 = INT8_MIN;
	static int32_t t89 = -7126;

	t89 = ((x469<x470)<(x471*x472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x473 = 2U;
	int16_t x474 = INT16_MAX;
	int8_t x476 = -9;
	volatile int32_t t90 = -278575;

	t90 = ((x473<x474)<(x475*x476));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x477 = INT64_MAX;
	int16_t x478 = 3;
	int32_t x479 = -1;
	int8_t x480 = -1;
	static int32_t t91 = 6;

	t91 = ((x477<x478)<(x479*x480));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x481 = UINT8_MAX;
	int8_t x482 = INT8_MIN;
	uint64_t x483 = UINT64_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t92 = -56701356;

	t92 = ((x481<x482)<(x483*x484));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = -1;
	uint8_t x486 = 2U;
	uint32_t x488 = 32589U;

	t93 = ((x485<x486)<(x487*x488));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x489 = INT16_MIN;
	uint32_t x490 = 54225657U;
	uint32_t x491 = 88U;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t94 = -12349;

	t94 = ((x489<x490)<(x491*x492));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x497 = 4LLU;
	int32_t x498 = 15012;
	int16_t x499 = 4055;
	uint8_t x500 = 120U;
	volatile int32_t t95 = 6832292;

	t95 = ((x497<x498)<(x499*x500));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x505 = 1U;
	static int64_t x506 = INT64_MIN;
	int8_t x507 = -1;
	static uint16_t x508 = UINT16_MAX;
	volatile int32_t t96 = 3242;

	t96 = ((x505<x506)<(x507*x508));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x509 = INT8_MIN;
	uint64_t x511 = 1228274265269354830LLU;
	int64_t x512 = -399LL;
	static volatile int32_t t97 = -96908866;

	t97 = ((x509<x510)<(x511*x512));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x514 = UINT32_MAX;
	int32_t x515 = -1;
	int32_t t98 = -470288;

	t98 = ((x513<x514)<(x515*x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x517 = INT16_MAX;
	int8_t x518 = -1;
	int8_t x519 = -1;
	uint32_t x520 = UINT32_MAX;
	int32_t t99 = -45356;

	t99 = ((x517<x518)<(x519*x520));

	if (t99 != 1) { NG(); } else { ; }
	
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

