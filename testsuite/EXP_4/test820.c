#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = 29;
uint64_t t0 = 275LLU;
int8_t x7 = 1;
uint32_t t1 = 210489804U;
int64_t x9 = -1LL;
volatile uint64_t x11 = 269711242123LLU;
volatile int64_t t3 = 32311915766214194LL;
uint64_t x18 = 7718166428698685LLU;
volatile uint64_t t4 = 2418433LLU;
int16_t x25 = -1;
static int32_t x35 = INT32_MAX;
int8_t x52 = 12;
volatile int32_t x54 = INT32_MIN;
static int8_t x55 = INT8_MIN;
int64_t x58 = INT64_MAX;
uint32_t x64 = UINT32_MAX;
volatile int16_t x89 = -1;
static int64_t t22 = 172LL;
int8_t x104 = 10;
static int32_t x107 = -1;
int64_t t24 = -1241593891654929386LL;
volatile uint16_t x111 = 2U;
uint8_t x115 = UINT8_MAX;
volatile int32_t x119 = INT32_MIN;
int64_t t27 = -550725940LL;
int32_t x122 = 1084477;
int32_t x123 = -138110814;
uint32_t x129 = 25132176U;
volatile int16_t x137 = INT16_MIN;
uint8_t x146 = UINT8_MAX;
uint8_t x147 = UINT8_MAX;
volatile int16_t x153 = INT16_MAX;
uint64_t x154 = UINT64_MAX;
int64_t x156 = INT64_MIN;
static volatile int8_t x159 = 63;
volatile uint64_t t35 = 179LLU;
int8_t x164 = -1;
int64_t t36 = 4146914195284684LL;
int64_t x166 = -1LL;
static int8_t x173 = -1;
volatile int32_t x175 = 3;
static int16_t x177 = -1;
static uint32_t x178 = 2U;
volatile int32_t x183 = -1;
uint64_t x184 = 437LLU;
int64_t x191 = INT64_MIN;
int64_t t42 = -2704005509986LL;
volatile int64_t t43 = 13LL;
static int64_t x197 = INT64_MIN;
uint64_t x198 = 438129LLU;
static uint64_t t44 = 40569308LLU;
uint16_t x204 = 2U;
uint32_t x207 = 61048547U;
int64_t x217 = -1205439192216LL;
uint64_t x222 = UINT64_MAX;
int16_t x233 = -1;
int8_t x244 = -1;
static int64_t x245 = -15338760509697651LL;
int8_t x255 = 0;
int8_t x258 = -1;
int64_t t57 = -691827665759939LL;
static volatile int32_t t61 = -465;
volatile int8_t x291 = INT8_MAX;
volatile int16_t x304 = 9233;
static int8_t x309 = INT8_MAX;
static uint8_t x310 = 23U;
int64_t x321 = 80571LL;
volatile uint32_t x323 = UINT32_MAX;
int64_t t70 = -3984LL;
uint16_t x326 = UINT16_MAX;
volatile int64_t t72 = -60280699045509489LL;
int32_t x335 = INT32_MAX;
static int16_t x337 = -14571;
static uint8_t x340 = 49U;
int32_t x347 = INT32_MAX;
static int32_t x355 = -530977899;
uint32_t x364 = UINT32_MAX;
static int16_t x365 = -37;
uint16_t x368 = 19U;
int8_t x369 = INT8_MIN;
volatile int32_t x372 = -419;
uint32_t t83 = 142543U;
int8_t x378 = -1;
int32_t x382 = 9;
volatile int32_t x383 = INT32_MAX;
int32_t x388 = INT32_MIN;
static volatile uint64_t t87 = 1059655394258LLU;
uint64_t x393 = 200338303735LLU;
int32_t x395 = INT32_MAX;
uint32_t x404 = UINT32_MAX;
static int16_t x407 = INT16_MIN;
int16_t x408 = -766;
static int32_t t91 = -1793;
static int16_t x414 = INT16_MIN;
int32_t x420 = -6173;
int64_t x421 = 132741LL;
static int32_t x423 = -1;
int8_t x432 = INT8_MIN;
int32_t t97 = 36674;
int8_t x441 = -1;
int16_t x442 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = UINT64_MAX;
	int16_t x4 = -1;

	t0 = (x1+(x2|(x3%x4)));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	volatile uint8_t x6 = 57U;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5+(x6|(x7%x8)));

	if (t1 != 56U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	volatile int64_t x12 = 74552087220447456LL;
	volatile uint64_t t2 = 176422LLU;

	t2 = (x9+(x10|(x11%x12)));

	if (t2 != 18446744073709548426LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 88U;
	int64_t x14 = -1LL;
	int32_t x15 = -1;
	volatile uint32_t x16 = UINT32_MAX;

	t3 = (x13+(x14|(x15%x16)));

	if (t3 != 87LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 8372;
	int32_t x19 = -1;
	int64_t x20 = 638898109425694181LL;

	t4 = (x17+(x18|(x19%x20)));

	if (t4 != 8371LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 55LLU;
	static int8_t x22 = INT8_MIN;
	int64_t x23 = -627266556795959LL;
	uint8_t x24 = 2U;
	volatile uint64_t t5 = 42417168030LLU;

	t5 = (x21+(x22|(x23%x24)));

	if (t5 != 54LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	static uint64_t x27 = 32512627LLU;
	volatile uint16_t x28 = UINT16_MAX;
	uint64_t t6 = 92263516887977247LLU;

	t6 = (x25+(x26|(x27%x28)));

	if (t6 != 9223372036854783074LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 240227775090LL;
	volatile int8_t x30 = -31;
	static int8_t x31 = INT8_MIN;
	volatile int8_t x32 = -13;
	volatile int64_t t7 = -34802LL;

	t7 = (x29+(x30|(x31%x32)));

	if (t7 != 240227775079LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	uint8_t x34 = 31U;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 2728;

	t8 = (x33+(x34|(x35%x36)));

	if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int32_t x42 = 1;
	int16_t x43 = INT16_MIN;
	static uint32_t x44 = UINT32_MAX;
	volatile uint32_t t9 = 26367U;

	t9 = (x41+(x42|(x43%x44)));

	if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int8_t x46 = 50;
	volatile uint32_t x47 = 209913535U;
	int32_t x48 = -1;
	uint32_t t10 = 145U;

	t10 = (x45+(x46|(x47%x48)));

	if (t10 != 209913534U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 8062543458416250LL;
	static uint8_t x50 = UINT8_MAX;
	int8_t x51 = -1;
	static volatile int64_t t11 = 1398657LL;

	t11 = (x49+(x50|(x51%x52)));

	if (t11 != 8062543458416249LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	static int16_t x56 = 21;
	int32_t t12 = 3800;

	t12 = (x53+(x54|(x55%x56)));

	if (t12 != -130) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	uint32_t x59 = 15858U;
	int32_t x60 = INT32_MIN;
	volatile int64_t t13 = 52446181902501LL;

	t13 = (x57+(x58|(x59%x60)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 91U;
	uint16_t x62 = UINT16_MAX;
	static int8_t x63 = 2;
	volatile uint32_t t14 = 340U;

	t14 = (x61+(x62|(x63%x64)));

	if (t14 != 65626U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	volatile int16_t x66 = INT16_MIN;
	static uint8_t x67 = UINT8_MAX;
	int64_t x68 = -3828934834083LL;
	volatile int64_t t15 = 185201506LL;

	t15 = (x65+(x66|(x67%x68)));

	if (t15 != -2147516161LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MIN;
	uint16_t x70 = 18259U;
	volatile uint32_t x71 = 49464702U;
	volatile int64_t x72 = 427875LL;
	volatile int64_t t16 = 5979019851LL;

	t16 = (x69+(x70|(x71%x72)));

	if (t16 != -2147223721LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	int16_t x74 = -1;
	static int64_t x75 = INT64_MIN;
	int8_t x76 = 49;
	int64_t t17 = 1363330818542LL;

	t17 = (x73+(x74|(x75%x76)));

	if (t17 != 2147483646LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	uint8_t x78 = 21U;
	int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MAX;
	int64_t t18 = 827591LL;

	t18 = (x77+(x78|(x79%x80)));

	if (t18 != 9223372036854743060LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = 184798608459588LL;
	volatile int16_t x82 = -112;
	int32_t x83 = -1;
	static int16_t x84 = INT16_MAX;
	int64_t t19 = 6051LL;

	t19 = (x81+(x82|(x83%x84)));

	if (t19 != 184798608459587LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 9357431904276LL;
	int8_t x86 = 4;
	uint8_t x87 = UINT8_MAX;
	static int16_t x88 = -800;
	int64_t t20 = 13LL;

	t20 = (x85+(x86|(x87%x88)));

	if (t20 != 9357431904531LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x90 = INT16_MIN;
	static uint32_t x91 = 3245U;
	int16_t x92 = INT16_MIN;
	uint32_t t21 = 259U;

	t21 = (x89+(x90|(x91%x92)));

	if (t21 != 4294937772U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MIN;
	int8_t x100 = -1;

	t22 = (x97+(x98|(x99%x100)));

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	int16_t x102 = INT16_MAX;
	static int32_t x103 = 34;
	static uint64_t t23 = 6668LLU;

	t23 = (x101+(x102|(x103%x104)));

	if (t23 != 32766LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 1U;
	int64_t x106 = INT64_MAX;
	uint16_t x108 = 12168U;

	t24 = (x105+(x106|(x107%x108)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	static uint8_t x110 = UINT8_MAX;
	static uint8_t x112 = 37U;
	volatile int32_t t25 = 5699;

	t25 = (x109+(x110|(x111%x112)));

	if (t25 != -32513) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 3193645904LLU;
	static uint16_t x114 = 0U;
	static uint64_t x116 = 160662558111370LLU;
	uint64_t t26 = 408484884904LLU;

	t26 = (x113+(x114|(x115%x116)));

	if (t26 != 3193646159LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = 11407;
	volatile int64_t x120 = INT64_MAX;

	t27 = (x117+(x118|(x119%x120)));

	if (t27 != -2147471986LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t28 = -127618794LL;

	t28 = (x121+(x122|(x123%x124)));

	if (t28 != -2284544833LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = INT8_MAX;
	static int64_t x131 = INT64_MIN;
	volatile int64_t x132 = 1LL;
	volatile int64_t t29 = -264168946486LL;

	t29 = (x129+(x130|(x131%x132)));

	if (t29 != 25132303LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x133 = INT8_MIN;
	uint8_t x134 = 118U;
	uint32_t x135 = UINT32_MAX;
	volatile int8_t x136 = INT8_MIN;
	uint32_t t30 = UINT32_MAX;

	t30 = (x133+(x134|(x135%x136)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x138 = -1;
	uint16_t x139 = 1U;
	static uint8_t x140 = UINT8_MAX;
	int32_t t31 = -676585504;

	t31 = (x137+(x138|(x139%x140)));

	if (t31 != -32769) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = UINT32_MAX;
	volatile int32_t x142 = 8;
	volatile int64_t x143 = -1LL;
	uint32_t x144 = 422504650U;
	volatile int64_t t32 = 122645578982LL;

	t32 = (x141+(x142|(x143%x144)));

	if (t32 != 4294967294LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	int64_t x148 = -33101795707LL;
	volatile int64_t t33 = -103289LL;

	t33 = (x145+(x146|(x147%x148)));

	if (t33 != 254LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x155 = 40208219916LLU;
	volatile uint64_t t34 = 3LLU;

	t34 = (x153+(x154|(x155%x156)));

	if (t34 != 32766LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = 3U;
	uint64_t x158 = UINT64_MAX;
	int32_t x160 = -1;

	t35 = (x157+(x158|(x159%x160)));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -1LL;
	uint8_t x162 = 82U;
	int64_t x163 = INT64_MIN;

	t36 = (x161+(x162|(x163%x164)));

	if (t36 != 81LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MAX;
	static int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MAX;
	int64_t t37 = 86340LL;

	t37 = (x165+(x166|(x167%x168)));

	if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = INT32_MIN;
	static volatile int8_t x170 = INT8_MAX;
	int32_t x171 = INT32_MIN;
	int64_t x172 = -31600831LL;
	volatile int64_t t38 = -25LL;

	t38 = (x169+(x170|(x171%x172)));

	if (t38 != -2177711617LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x174 = 18460733U;
	uint8_t x176 = 5U;
	volatile uint32_t t39 = 5U;

	t39 = (x173+(x174|(x175%x176)));

	if (t39 != 18460734U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x179 = -1;
	int32_t x180 = 6;
	static uint32_t t40 = 1710461U;

	t40 = (x177+(x178|(x179%x180)));

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = -949;
	uint64_t x182 = 9195324938132782646LLU;
	static volatile uint64_t t41 = 3816548855531LLU;

	t41 = (x181+(x182|(x183%x184)));

	if (t41 != 9195324938132782089LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	int16_t x192 = INT16_MAX;

	t42 = (x189+(x190|(x191%x192)));

	if (t42 != -32776LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = -681969497LL;
	uint16_t x195 = 15U;
	int32_t x196 = INT32_MIN;

	t43 = (x193+(x194|(x195%x196)));

	if (t43 != -682002257LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x199 = INT16_MIN;
	static int64_t x200 = -1LL;

	t44 = (x197+(x198|(x199%x200)));

	if (t44 != 9223372036855213937LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = UINT32_MAX;
	static uint64_t x202 = 100229LLU;
	volatile int64_t x203 = INT64_MIN;
	volatile uint64_t t45 = 110380940523LLU;

	t45 = (x201+(x202|(x203%x204)));

	if (t45 != 4295067524LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x205 = 3666U;
	uint32_t x206 = UINT32_MAX;
	volatile uint32_t x208 = UINT32_MAX;
	uint32_t t46 = 142442818U;

	t46 = (x205+(x206|(x207%x208)));

	if (t46 != 3665U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MAX;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 250LLU;
	volatile int16_t x212 = INT16_MAX;
	uint64_t t47 = 17451265LLU;

	t47 = (x209+(x210|(x211%x212)));

	if (t47 != 9223372036854776185LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MAX;
	volatile int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	static int64_t x216 = INT64_MIN;
	static int64_t t48 = 130267964558LL;

	t48 = (x213+(x214|(x215%x216)));

	if (t48 != -2147483521LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x218 = UINT16_MAX;
	int32_t x219 = INT32_MAX;
	static int64_t x220 = INT64_MAX;
	volatile int64_t t49 = 36461543009830LL;

	t49 = (x217+(x218|(x219%x220)));

	if (t49 != -1203291708569LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -1;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MIN;
	static uint64_t t50 = 505417534409904LLU;

	t50 = (x221+(x222|(x223%x224)));

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x225 = 2698969917LL;
	volatile int64_t x226 = -600858501716399400LL;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t51 = 34559LL;

	t51 = (x225+(x226|(x227%x228)));

	if (t51 != 2698969877LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	int32_t x231 = -1;
	static uint64_t x232 = 15309834717617303LLU;
	volatile uint64_t t52 = 91946070451739475LLU;

	t52 = (x229+(x230|(x231%x232)));

	if (t52 != 9237075108405610963LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x234 = -1;
	volatile int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t53 = 720303;

	t53 = (x233+(x234|(x235%x236)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = 3370019196770LL;
	volatile uint8_t x242 = 8U;
	int8_t x243 = INT8_MIN;
	int64_t t54 = -854063986727277LL;

	t54 = (x241+(x242|(x243%x244)));

	if (t54 != 3370019196778LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x246 = 3U;
	volatile uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MIN;
	static uint64_t t55 = 50LLU;

	t55 = (x245+(x246|(x247%x248)));

	if (t55 != 18431405315347337612LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MAX;
	static uint64_t x254 = UINT64_MAX;
	uint64_t x256 = 409366237LLU;
	static volatile uint64_t t56 = 2960240LLU;

	t56 = (x253+(x254|(x255%x256)));

	if (t56 != 2147483646LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = -29048378;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MIN;

	t57 = (x257+(x258|(x259%x260)));

	if (t57 != -29048379LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -1LL;
	int64_t x262 = INT64_MIN;
	uint64_t x263 = 9466475892621LLU;
	static uint64_t x264 = 64799547LLU;
	volatile uint64_t t58 = 3151759079LLU;

	t58 = (x261+(x262|(x263%x264)));

	if (t58 != 9223372036894446292LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x265 = 795442U;
	uint64_t x266 = 10059121130271LLU;
	int16_t x267 = 21;
	int16_t x268 = 20;
	volatile uint64_t t59 = 8359899237082030177LLU;

	t59 = (x265+(x266|(x267%x268)));

	if (t59 != 10059121925713LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t60 = 4U;

	t60 = (x273+(x274|(x275%x276)));

	if (t60 != 65534U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x277 = -1;
	int8_t x278 = INT8_MAX;
	uint8_t x279 = 6U;
	static uint16_t x280 = 10555U;

	t61 = (x277+(x278|(x279%x280)));

	if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = -1128418;
	int8_t x283 = -1;
	volatile int8_t x284 = -1;
	static volatile int32_t t62 = 115;

	t62 = (x281+(x282|(x283%x284)));

	if (t62 != -1128546) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x285 = -1;
	uint32_t x286 = 491U;
	int64_t x287 = INT64_MIN;
	int32_t x288 = -1;
	volatile int64_t t63 = -14972617139686LL;

	t63 = (x285+(x286|(x287%x288)));

	if (t63 != 490LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x289 = INT64_MIN;
	uint16_t x290 = 3U;
	volatile int8_t x292 = INT8_MIN;
	int64_t t64 = 20400960505197711LL;

	t64 = (x289+(x290|(x291%x292)));

	if (t64 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x293 = -248;
	int32_t x294 = INT32_MAX;
	int64_t x295 = -840032956LL;
	int32_t x296 = INT32_MIN;
	volatile int64_t t65 = -428408224940517LL;

	t65 = (x293+(x294|(x295%x296)));

	if (t65 != -249LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 108U;
	int8_t x303 = 9;
	static volatile uint64_t t66 = 24041LLU;

	t66 = (x301+(x302|(x303%x304)));

	if (t66 != 108LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = INT16_MAX;
	static int16_t x307 = 2;
	int8_t x308 = -1;
	int32_t t67 = 15;

	t67 = (x305+(x306|(x307%x308)));

	if (t67 != 33022) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x311 = INT8_MAX;
	volatile uint16_t x312 = 30141U;
	int32_t t68 = -59387495;

	t68 = (x309+(x310|(x311%x312)));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x313 = 11426932634LL;
	uint32_t x314 = UINT32_MAX;
	uint8_t x315 = UINT8_MAX;
	uint32_t x316 = 7680789U;
	volatile int64_t t69 = -501730LL;

	t69 = (x313+(x314|(x315%x316)));

	if (t69 != 15721899929LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x322 = -7458859;
	volatile int64_t x324 = INT64_MIN;

	t70 = (x321+(x322|(x323%x324)));

	if (t70 != 80570LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x325 = 2675664910937742LLU;
	int16_t x327 = INT16_MIN;
	volatile int8_t x328 = 42;
	static uint64_t t71 = 999276653575LLU;

	t71 = (x325+(x326|(x327%x328)));

	if (t71 != 2675664910937741LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -49683;
	int32_t x330 = INT32_MIN;
	int64_t x331 = 31598LL;
	int8_t x332 = -1;

	t72 = (x329+(x330|(x331%x332)));

	if (t72 != -2147533331LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = 0;
	int32_t x334 = INT32_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (x333+(x334|(x335%x336)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x338 = 0;
	int16_t x339 = -1;
	int32_t t74 = 6932272;

	t74 = (x337+(x338|(x339%x340)));

	if (t74 != -14572) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = -1;
	int16_t x342 = INT16_MAX;
	int64_t x343 = INT64_MIN;
	int8_t x344 = 2;
	volatile int64_t t75 = 1892575577524197424LL;

	t75 = (x341+(x342|(x343%x344)));

	if (t75 != 32766LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x346 = 1U;
	int16_t x348 = INT16_MAX;
	static volatile int32_t t76 = -3600375;

	t76 = (x345+(x346|(x347%x348)));

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x349 = -1;
	static uint16_t x350 = UINT16_MAX;
	static volatile int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t77 = 68585;

	t77 = (x349+(x350|(x351%x352)));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MIN;
	volatile uint64_t x354 = 343236LLU;
	static int16_t x356 = -1;
	volatile uint64_t t78 = 2157186090686860LLU;

	t78 = (x353+(x354|(x355%x356)));

	if (t78 != 310468LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x357 = -1;
	int8_t x358 = INT8_MAX;
	int32_t x359 = INT32_MAX;
	int8_t x360 = -1;
	int32_t t79 = -702658;

	t79 = (x357+(x358|(x359%x360)));

	if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = -1;
	static int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MIN;
	uint32_t t80 = 337111U;

	t80 = (x361+(x362|(x363%x364)));

	if (t80 != 4294967167U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x366 = INT16_MAX;
	volatile uint8_t x367 = UINT8_MAX;
	volatile int32_t t81 = -29;

	t81 = (x365+(x366|(x367%x368)));

	if (t81 != 32730) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x370 = UINT32_MAX;
	uint32_t x371 = UINT32_MAX;
	volatile uint32_t t82 = 846585362U;

	t82 = (x369+(x370|(x371%x372)));

	if (t82 != 4294967167U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x373 = UINT8_MAX;
	static uint16_t x374 = 13U;
	uint32_t x375 = 2221031U;
	uint8_t x376 = UINT8_MAX;

	t83 = (x373+(x374|(x375%x376)));

	if (t83 != 492U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x377 = UINT32_MAX;
	static int64_t x379 = 422LL;
	uint64_t x380 = 17930688LLU;
	static uint64_t t84 = 2LLU;

	t84 = (x377+(x378|(x379%x380)));

	if (t84 != 4294967294LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = INT64_MIN;
	volatile int64_t x384 = -1LL;
	int64_t t85 = 1379LL;

	t85 = (x381+(x382|(x383%x384)));

	if (t85 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x385 = -1;
	int64_t x386 = INT64_MAX;
	static int16_t x387 = INT16_MAX;
	int64_t t86 = 97415573LL;

	t86 = (x385+(x386|(x387%x388)));

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x389 = 7473U;
	volatile int32_t x390 = -1;
	volatile uint32_t x391 = 1U;
	volatile uint64_t x392 = UINT64_MAX;

	t87 = (x389+(x390|(x391%x392)));

	if (t87 != 7472LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x394 = INT8_MAX;
	volatile int8_t x396 = INT8_MAX;
	static volatile uint64_t t88 = 159746932LLU;

	t88 = (x393+(x394|(x395%x396)));

	if (t88 != 200338303862LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int8_t x398 = -4;
	int64_t x399 = INT64_MIN;
	static int8_t x400 = INT8_MIN;
	volatile uint64_t t89 = 2402884032LLU;

	t89 = (x397+(x398|(x399%x400)));

	if (t89 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = INT64_MAX;
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MIN;
	volatile int64_t t90 = -4820477205323782LL;

	t90 = (x401+(x402|(x403%x404)));

	if (t90 != 2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = 5;

	t91 = (x405+(x406|(x407%x408)));

	if (t91 != 32172) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = -14866339541LL;
	static int64_t x411 = -1427924488704159404LL;
	uint64_t x412 = 43323070020798361LLU;
	uint64_t t92 = 1279633555102015LLU;

	t92 = (x409+(x410|(x411%x412)));

	if (t92 != 18446744063977713327LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x413 = 224U;
	uint64_t x415 = UINT64_MAX;
	volatile int64_t x416 = 8060893345LL;
	volatile uint64_t t93 = 4135175175LLU;

	t93 = (x413+(x414|(x415%x416)));

	if (t93 != 18446744073709546148LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x417 = 225U;
	uint32_t x418 = 12U;
	int64_t x419 = -1LL;
	volatile int64_t t94 = -45232160LL;

	t94 = (x417+(x418|(x419%x420)));

	if (t94 != 224LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x422 = 25119976382757LLU;
	int16_t x424 = -1;
	volatile uint64_t t95 = 19LLU;

	t95 = (x421+(x422|(x423%x424)));

	if (t95 != 25119976515498LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x429 = INT16_MAX;
	int16_t x430 = 0;
	int8_t x431 = 7;
	static volatile int32_t t96 = 59;

	t96 = (x429+(x430|(x431%x432)));

	if (t96 != 32774) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MAX;
	int32_t x434 = INT32_MIN;
	int16_t x435 = -508;
	int8_t x436 = INT8_MIN;

	t97 = (x433+(x434|(x435%x436)));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = -4;
	int32_t x438 = INT32_MIN;
	volatile uint8_t x439 = UINT8_MAX;
	uint32_t x440 = 268U;
	uint32_t t98 = 3352701U;

	t98 = (x437+(x438|(x439%x440)));

	if (t98 != 2147483899U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x443 = UINT64_MAX;
	static uint32_t x444 = 139478209U;
	volatile uint64_t t99 = 8840608873113931LLU;

	t99 = (x441+(x442|(x443%x444)));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

