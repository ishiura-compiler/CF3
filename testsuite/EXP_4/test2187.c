#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
int64_t x9 = -1LL;
int8_t x10 = INT8_MAX;
uint64_t x26 = 10063876026LLU;
int8_t x38 = INT8_MAX;
volatile int16_t x39 = INT16_MAX;
int64_t x47 = INT64_MAX;
volatile int16_t x56 = INT16_MAX;
volatile uint64_t t9 = 2068861LLU;
volatile int8_t x73 = 42;
static volatile uint32_t x76 = 37U;
static volatile int32_t t13 = -3108115;
static int32_t x83 = -1;
uint64_t x86 = UINT64_MAX;
int16_t x93 = 1282;
int32_t x98 = 2;
uint64_t x103 = 13900627400LLU;
int8_t x118 = -1;
uint64_t x119 = 3400859LLU;
uint8_t x123 = UINT8_MAX;
static uint16_t x126 = 51U;
int8_t x131 = INT8_MIN;
static int8_t x132 = INT8_MIN;
static uint32_t t25 = 71589U;
int32_t x133 = -1;
int16_t x142 = 0;
int8_t x158 = -1;
volatile uint64_t x160 = 1LLU;
uint64_t x164 = UINT64_MAX;
volatile int16_t x165 = INT16_MAX;
int16_t x180 = INT16_MIN;
int64_t t32 = -789269797156995LL;
uint64_t t33 = 150108LLU;
static int64_t x200 = INT64_MAX;
int64_t x215 = -1LL;
uint8_t x216 = 2U;
uint8_t x226 = 0U;
int8_t x229 = 0;
static volatile int8_t x230 = -1;
uint16_t x231 = 28032U;
uint64_t t40 = 3LLU;
int16_t x245 = INT16_MIN;
static int8_t x246 = INT8_MIN;
int64_t x247 = -44816829LL;
static volatile int8_t x248 = INT8_MIN;
volatile int64_t t42 = 0LL;
volatile uint64_t t45 = 7498256502461022LLU;
static uint16_t x276 = 0U;
volatile int8_t x290 = INT8_MAX;
static int8_t x292 = INT8_MAX;
uint64_t t52 = 7LLU;
uint16_t x306 = UINT16_MAX;
int16_t x311 = 842;
static uint8_t x313 = UINT8_MAX;
volatile uint64_t x314 = 48763440839400LLU;
uint64_t t55 = 168913714072854LLU;
uint8_t x325 = UINT8_MAX;
uint8_t x326 = UINT8_MAX;
static int64_t x329 = -679508811LL;
int8_t x330 = INT8_MIN;
uint32_t x335 = 851U;
volatile int16_t x355 = 306;
uint16_t x357 = 23473U;
int32_t x358 = 894531782;
static int32_t x364 = -1;
volatile int64_t t64 = -663498858598LL;
int8_t x369 = 0;
static uint32_t t66 = 56289U;
static uint16_t x381 = UINT16_MAX;
int8_t x385 = INT8_MIN;
static int32_t x395 = -1;
int8_t x400 = INT8_MIN;
int32_t x409 = INT32_MAX;
uint32_t x411 = UINT32_MAX;
uint64_t x418 = 34364892935319LLU;
int64_t x432 = INT64_MIN;
uint32_t x434 = 0U;
volatile int64_t t83 = -8105512580LL;
static int64_t x455 = -375LL;
int16_t x456 = -1;
volatile int64_t t84 = 735604946263389265LL;
uint32_t x457 = 2846U;
uint16_t x469 = 8258U;
uint32_t x475 = 602377U;
static uint32_t t88 = 2075653899U;
static volatile int8_t x477 = INT8_MIN;
int8_t x480 = INT8_MIN;
uint32_t x482 = UINT32_MAX;
int16_t x483 = INT16_MIN;
int64_t t92 = 4079629LL;
volatile int64_t t93 = -131909592079LL;
static uint64_t t94 = 291150LLU;
int16_t x510 = INT16_MIN;
int64_t x512 = 130300395LL;
volatile uint8_t x516 = UINT8_MAX;
static int16_t x526 = INT16_MIN;
static uint64_t t97 = 483357883364751LLU;
uint16_t x529 = 0U;
volatile int16_t x533 = INT16_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x2 = INT8_MAX;
	int16_t x3 = -1;
	volatile int64_t t0 = 662872LL;

	t0 = (x1*(x2^(x3^x4)));

	if (t0 != -127LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x11 = INT32_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile int64_t t1 = 34934233927411296LL;

	t1 = (x9*(x10^(x11^x12)));

	if (t1 != 2147418240LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = -1;
	volatile uint32_t x14 = 0U;
	int16_t x15 = INT16_MAX;
	int16_t x16 = 56;
	volatile uint32_t t2 = 2548702U;

	t2 = (x13*(x14^(x15^x16)));

	if (t2 != 4294934585U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = -2198508217589865LL;
	volatile int64_t x27 = INT64_MAX;
	static int64_t x28 = INT64_MAX;
	uint64_t t3 = 677939679276785LLU;

	t3 = (x25*(x26^(x27^x28)));

	if (t3 != 8760130592492047542LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 88U;
	volatile uint32_t x40 = 40132U;
	uint32_t t4 = 112400U;

	t4 = (x37*(x38^(x39^x40)));

	if (t4 != 5119840U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x41 = 14;
	int32_t x42 = INT32_MIN;
	volatile uint32_t x43 = 4U;
	uint32_t x44 = 917U;
	static uint32_t t5 = 4530132U;

	t5 = (x41*(x42^(x43^x44)));

	if (t5 != 12782U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 3066311785LLU;
	int64_t x46 = 1709722861547LL;
	int8_t x48 = INT8_MAX;
	uint64_t t6 = 231181313LLU;

	t6 = (x45*(x46^(x47^x48)));

	if (t6 != 5555329788580816867LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x49 = 215U;
	int32_t x50 = 0;
	static uint32_t x51 = UINT32_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	volatile uint64_t t7 = 1483472042440966LLU;

	t7 = (x49*(x50^(x51^x52)));

	if (t7 != 18446743150291582976LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	volatile uint16_t x54 = UINT16_MAX;
	int8_t x55 = 18;
	static int32_t t8 = -1;

	t8 = (x53*(x54^(x55^x56)));

	if (t8 != -32786) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = -31;
	static uint64_t x58 = 118914522013LLU;
	static int8_t x59 = 0;
	int8_t x60 = 2;

	t9 = (x57*(x58^(x59^x60)));

	if (t9 != 18446740387359369151LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x65 = 88114LLU;
	volatile int8_t x66 = INT8_MAX;
	int16_t x67 = -11504;
	volatile uint16_t x68 = 29U;
	uint64_t t10 = 46LLU;

	t10 = (x65*(x66^(x67^x68)));

	if (t10 != 18446744072704523332LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = -1;
	int8_t x70 = INT8_MAX;
	uint32_t x71 = 1546922346U;
	volatile uint16_t x72 = UINT16_MAX;
	uint32_t t11 = 964267U;

	t11 = (x69*(x70^(x71^x72)));

	if (t11 != 2748000534U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x74 = 70U;
	static volatile uint64_t x75 = 962LLU;
	uint64_t t12 = 10483887037589LLU;

	t12 = (x73*(x74^(x75^x76)));

	if (t12 != 39018LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 6U;
	uint8_t x78 = 12U;
	static int32_t x79 = 557;
	volatile uint8_t x80 = 93U;

	t13 = (x77*(x78^(x79^x80)));

	if (t13 != 3816) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = INT16_MIN;
	uint32_t x82 = 1281U;
	int8_t x84 = INT8_MIN;
	volatile uint32_t t14 = 1992770980U;

	t14 = (x81*(x82^(x83^x84)));

	if (t14 != 4248895488U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = UINT16_MAX;
	static int8_t x87 = INT8_MIN;
	uint16_t x88 = 30237U;
	uint64_t t15 = 15769478334196LLU;

	t15 = (x85*(x86^(x87^x88)));

	if (t15 != 1986103710LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = 14LL;
	uint16_t x90 = 10433U;
	static int8_t x91 = -14;
	static int32_t x92 = INT32_MIN;
	volatile int64_t t16 = -459096883LL;

	t16 = (x89*(x90^(x91^x92)));

	if (t16 != 30064624842LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MIN;
	static volatile int64_t t17 = -202498879LL;

	t17 = (x93*(x94^(x95^x96)));

	if (t17 != -2753074036736LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MIN;
	volatile int16_t x99 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t18 = 3182010LLU;

	t18 = (x97*(x98^(x99^x100)));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 8U;
	uint16_t x102 = 99U;
	int32_t x104 = -1;
	uint64_t t19 = 10083LLU;

	t19 = (x101*(x102^(x103^x104)));

	if (t19 != 18446743962504532640LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x110 = 24LLU;
	volatile int32_t x111 = INT32_MAX;
	int32_t x112 = INT32_MAX;
	volatile uint64_t t20 = 305LLU;

	t20 = (x109*(x110^(x111^x112)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = UINT64_MAX;
	uint8_t x114 = 3U;
	int32_t x115 = -416167712;
	static volatile int64_t x116 = -132055742885LL;
	uint64_t t21 = 6379590956045294LLU;

	t21 = (x113*(x114^(x115^x116)));

	if (t21 != 18446743942043234632LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = UINT16_MAX;
	static volatile int8_t x120 = INT8_MIN;
	volatile uint64_t t22 = 1520309626LLU;

	t22 = (x117*(x118^(x119^x120)));

	if (t22 != 222880078620LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = INT16_MIN;
	static int8_t x122 = 47;
	static uint8_t x124 = UINT8_MAX;
	int32_t t23 = 42897684;

	t23 = (x121*(x122^(x123^x124)));

	if (t23 != -1540096) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x125 = 152508261786LLU;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = INT8_MAX;
	volatile uint64_t t24 = 1517947176205844LLU;

	t24 = (x125*(x126^(x127^x128)));

	if (t24 != 18446736143279938744LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = 7726U;
	int16_t x130 = INT16_MIN;

	t25 = (x129*(x130^(x131^x132)));

	if (t25 != 4041801728U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x134 = 38704865460797354LLU;
	int16_t x135 = 0;
	int16_t x136 = INT16_MAX;
	uint64_t t26 = 451LLU;

	t26 = (x133*(x134^(x135^x136)));

	if (t26 != 18408039208248754091LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x141 = UINT8_MAX;
	uint64_t x143 = 126578LLU;
	int8_t x144 = -1;
	static volatile uint64_t t27 = 478126844594LLU;

	t27 = (x141*(x142^(x143^x144)));

	if (t27 != 18446744073677273971LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x157 = 28455U;
	volatile int8_t x159 = -1;
	uint64_t t28 = 66LLU;

	t28 = (x157*(x158^(x159^x160)));

	if (t28 != 28455LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	uint64_t x163 = 19503813LLU;
	volatile uint64_t t29 = 1956LLU;

	t29 = (x161*(x162^(x163^x164)));

	if (t29 != 18404859954218401792LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x166 = 45U;
	static int16_t x167 = INT16_MAX;
	int32_t x168 = -225;
	volatile uint32_t t30 = 293U;

	t30 = (x165*(x166^(x167^x168)));

	if (t30 != 3227975475U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	volatile uint32_t x171 = UINT32_MAX;
	static int64_t x172 = -1LL;
	int64_t t31 = -2134475504674399284LL;

	t31 = (x169*(x170^(x171^x172)));

	if (t31 != 4294901761LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = -1;
	int8_t x178 = 0;
	volatile int64_t x179 = -19844669LL;

	t32 = (x177*(x178^(x179^x180)));

	if (t32 != -19837379LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = -1;
	uint64_t x186 = 32985LLU;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MAX;

	t33 = (x185*(x186^(x187^x188)));

	if (t33 != 2147418330LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x193 = 5991259872893LLU;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 5LLU;
	static int64_t x196 = 7142394734017LL;
	uint64_t t34 = 87321342239LLU;

	t34 = (x193*(x194^(x195^x196)));

	if (t34 != 2198681274262907060LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = UINT64_MAX;
	uint8_t x199 = UINT8_MAX;
	volatile uint64_t t35 = 1357664928721LLU;

	t35 = (x197*(x198^(x199^x200)));

	if (t35 != 9223373132071436033LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	volatile uint64_t x207 = UINT64_MAX;
	uint8_t x208 = 3U;
	uint64_t t36 = 1486LLU;

	t36 = (x205*(x206^(x207^x208)));

	if (t36 != 70362301726720LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = INT8_MIN;
	int64_t t37 = 29LL;

	t37 = (x213*(x214^(x215^x216)));

	if (t37 != 268435455875LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x225 = -2177430LL;
	int8_t x227 = -1;
	static uint32_t x228 = 1U;
	volatile int64_t t38 = 3384159LL;

	t38 = (x225*(x226^(x227^x228)));

	if (t38 != -9351990634974420LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x232 = 0U;
	int32_t t39 = -1;

	t39 = (x229*(x230^(x231^x232)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x237 = 45U;
	volatile uint8_t x238 = 0U;
	volatile uint64_t x239 = 44LLU;
	uint8_t x240 = 6U;

	t40 = (x237*(x238^(x239^x240)));

	if (t40 != 1890LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x241 = -4042;
	uint16_t x242 = 393U;
	uint8_t x243 = 9U;
	volatile uint64_t x244 = UINT64_MAX;
	uint64_t t41 = 8261480LLU;

	t41 = (x241*(x242^(x243^x244)));

	if (t41 != 1556170LLU) { NG(); } else { ; }
	
}

void f42(void) {


	t42 = (x245*(x246^(x247^x248)));

	if (t42 != 1468557852672LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x253 = 114U;
	volatile int8_t x254 = -1;
	int32_t x255 = -205762;
	uint16_t x256 = 40U;
	static int32_t t43 = 384870;

	t43 = (x253*(x254^(x255^x256)));

	if (t43 != 23461314) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x257 = 31646922197942992LLU;
	int32_t x258 = INT32_MIN;
	int8_t x259 = 29;
	uint16_t x260 = UINT16_MAX;
	uint64_t t44 = 3507LLU;

	t44 = (x257*(x258^(x259^x260)));

	if (t44 != 13807026220267154336LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x265 = 3923605400196LLU;
	int16_t x266 = INT16_MAX;
	volatile uint8_t x267 = 0U;
	int16_t x268 = 0;

	t45 = (x265*(x266^(x267^x268)));

	if (t45 != 128564778148222332LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = -1;
	volatile uint64_t x271 = 82LLU;
	static volatile uint32_t x272 = UINT32_MAX;
	uint64_t t46 = 26990016081153LLU;

	t46 = (x269*(x270^(x271^x272)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x273 = 7;
	int8_t x274 = INT8_MIN;
	int16_t x275 = -1;
	int32_t t47 = -1046;

	t47 = (x273*(x274^(x275^x276)));

	if (t47 != 889) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x277 = 0;
	volatile uint64_t x278 = 69679832320085LLU;
	int32_t x279 = INT32_MIN;
	uint32_t x280 = 558U;
	volatile uint64_t t48 = 49835530LLU;

	t48 = (x277*(x278^(x279^x280)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x281 = 1194;
	int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	static volatile int8_t x284 = -1;
	static volatile int32_t t49 = 1;

	t49 = (x281*(x282^(x283^x284)));

	if (t49 != -39124992) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x289 = UINT32_MAX;
	uint16_t x291 = 63U;
	volatile uint32_t t50 = 1174U;

	t50 = (x289*(x290^(x291^x292)));

	if (t50 != 4294967233U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MAX;
	int64_t x295 = INT64_MIN;
	volatile uint8_t x296 = 52U;
	static int64_t t51 = 1LL;

	t51 = (x293*(x294^(x295^x296)));

	if (t51 != -1736651LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x301 = 14540U;
	volatile int16_t x302 = -1;
	uint64_t x303 = 919LLU;
	uint32_t x304 = 223419204U;

	t52 = (x301*(x302^(x303^x304)));

	if (t52 != 18446740825203398416LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x305 = -1LL;
	int32_t x307 = INT32_MAX;
	int8_t x308 = 1;
	static volatile int64_t t53 = -154981473540746510LL;

	t53 = (x305*(x306^(x307^x308)));

	if (t53 != -2147418113LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int32_t x310 = 0;
	volatile uint8_t x312 = 9U;
	static uint32_t t54 = 829279515U;

	t54 = (x309*(x310^(x311^x312)));

	if (t54 != 4294966461U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x315 = 4LLU;
	volatile uint32_t x316 = 2U;

	t55 = (x313*(x314^(x315^x316)));

	if (t55 != 12434677414048530LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x321 = INT32_MAX;
	static uint64_t x322 = 273654608896698LLU;
	volatile int16_t x323 = INT16_MIN;
	int8_t x324 = -7;
	volatile uint64_t t56 = 17469129249850LLU;

	t56 = (x321*(x322^(x323^x324)));

	if (t56 != 10871607854523916989LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x327 = 80818U;
	uint8_t x328 = UINT8_MAX;
	uint32_t t57 = 29467U;

	t57 = (x325*(x326^(x327^x328)));

	if (t57 != 20608590U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x331 = 1U;
	static uint16_t x332 = 172U;
	int64_t t58 = 2128555535431645LL;

	t58 = (x329*(x330^(x331^x332)));

	if (t58 != -2918467977212485935LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x333 = -1;
	static volatile uint8_t x334 = 1U;
	int8_t x336 = INT8_MAX;
	volatile uint32_t t59 = 2176U;

	t59 = (x333*(x334^(x335^x336)));

	if (t59 != 4294966483U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x337 = 27;
	static uint8_t x338 = 5U;
	uint32_t x339 = 12532729U;
	int32_t x340 = INT32_MIN;
	static uint32_t t60 = 24568554U;

	t60 = (x337*(x338^(x339^x340)));

	if (t60 != 2485867412U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x353 = INT8_MIN;
	int16_t x354 = -622;
	volatile uint16_t x356 = UINT16_MAX;
	int32_t t61 = -4516362;

	t61 = (x353*(x354^(x355^x356)));

	if (t61 != 8278144) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x359 = -1;
	volatile uint32_t x360 = 508675U;
	volatile uint32_t t62 = 42304516U;

	t62 = (x357*(x358^(x359^x360)));

	if (t62 != 1246284314U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x361 = 15281U;
	volatile uint8_t x362 = 56U;
	int8_t x363 = INT8_MIN;
	static volatile int32_t t63 = 49679;

	t63 = (x361*(x362^(x363^x364)));

	if (t63 != 1084951) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x365 = -81119689;
	int32_t x366 = 213130527;
	uint8_t x367 = 4U;
	static int64_t x368 = -1LL;

	t64 = (x365*(x366^(x367^x368)));

	if (t64 != 17289081823287036LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x370 = 9313U;
	volatile int32_t x371 = -1;
	int16_t x372 = 1;
	volatile uint32_t t65 = 861U;

	t65 = (x369*(x370^(x371^x372)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x373 = INT32_MAX;
	uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MAX;
	int8_t x376 = INT8_MIN;

	t66 = (x373*(x374^(x375^x376)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	volatile int16_t x379 = -405;
	static volatile int8_t x380 = INT8_MIN;
	int32_t t67 = -8316888;

	t67 = (x377*(x378^(x379^x380)));

	if (t67 != 405) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x382 = 3872539552735LLU;
	int32_t x383 = INT32_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile uint64_t t68 = 218777546LLU;

	t68 = (x381*(x382^(x383^x384)));

	if (t68 != 253845492112806945LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x386 = INT64_MIN;
	int8_t x387 = -3;
	static int64_t x388 = INT64_MIN;
	volatile int64_t t69 = -429806LL;

	t69 = (x385*(x386^(x387^x388)));

	if (t69 != 384LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x393 = UINT64_MAX;
	static uint32_t x394 = 41031U;
	int64_t x396 = INT64_MAX;
	uint64_t t70 = 4687831LLU;

	t70 = (x393*(x394^(x395^x396)));

	if (t70 != 9223372036854734777LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int8_t x398 = INT8_MIN;
	static volatile int16_t x399 = INT16_MIN;
	static int32_t t71 = 289288694;

	t71 = (x397*(x398^(x399^x400)));

	if (t71 != -2147450880) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x401 = INT32_MIN;
	int64_t x402 = -1307LL;
	int32_t x403 = -1;
	int16_t x404 = INT16_MIN;
	volatile int64_t t72 = 11005606493783210LL;

	t72 = (x401*(x402^(x403^x404)));

	if (t72 != 67564130533376LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	uint64_t x407 = 88814212LLU;
	volatile uint64_t x408 = UINT64_MAX;
	uint64_t t73 = 465963LLU;

	t73 = (x405*(x406^(x407^x408)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x410 = INT8_MIN;
	static uint16_t x412 = 3556U;
	uint32_t t74 = 57268454U;

	t74 = (x409*(x410^(x411^x412)));

	if (t74 != 2147480165U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x417 = 2828U;
	static int8_t x419 = -7;
	int8_t x420 = INT8_MAX;
	uint64_t t75 = 0LLU;

	t75 = (x417*(x418^(x419^x420)));

	if (t75 != 18349560156488220620LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = INT8_MIN;
	uint32_t x422 = 474U;
	uint8_t x423 = 1U;
	int64_t x424 = 473190864962LL;
	int64_t t76 = -9836931491LL;

	t76 = (x421*(x422^(x423^x424)));

	if (t76 != -60568430759040LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x425 = -1;
	int8_t x426 = -17;
	static volatile uint32_t x427 = 6U;
	int16_t x428 = INT16_MIN;
	volatile uint32_t t77 = 64780789U;

	t77 = (x425*(x426^(x427^x428)));

	if (t77 != 4294934551U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x429 = 13U;
	uint64_t x430 = UINT64_MAX;
	static volatile int64_t x431 = -10292586323LL;
	uint64_t t78 = 3463LLU;

	t78 = (x429*(x430^(x431^x432)));

	if (t78 != 9223372170658397994LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x433 = 0;
	static uint32_t x435 = UINT32_MAX;
	uint32_t x436 = 1438U;
	volatile uint32_t t79 = 1619817U;

	t79 = (x433*(x434^(x435^x436)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x437 = -1LL;
	static int16_t x438 = INT16_MIN;
	uint32_t x439 = 97039U;
	volatile uint32_t x440 = 2284U;
	volatile int64_t t80 = -8970LL;

	t80 = (x437*(x438^(x439^x440)));

	if (t80 != -4294898659LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x441 = 475923199993035810LLU;
	static int16_t x442 = -79;
	int64_t x443 = INT64_MIN;
	static uint16_t x444 = 4382U;
	static uint64_t t81 = 42934LLU;

	t81 = (x441*(x442^(x443^x444)));

	if (t81 != 11608022907470690110LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	int64_t x447 = -15LL;
	int8_t x448 = INT8_MAX;
	int64_t t82 = -1196LL;

	t82 = (x445*(x446^(x447^x448)));

	if (t82 != -4179712LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = INT16_MAX;
	int64_t x450 = -7899501853LL;
	static int64_t x451 = -1LL;
	int16_t x452 = INT16_MIN;

	t83 = (x449*(x450^(x451^x452)));

	if (t83 != -258842623038748LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x453 = -1;
	int32_t x454 = INT32_MIN;

	t84 = (x453*(x454^(x455^x456)));

	if (t84 != 2147483274LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x458 = 320185446806370010LL;
	uint64_t x459 = 547517615507566063LLU;
	int32_t x460 = -25220846;
	uint64_t t85 = 19969884072LLU;

	t85 = (x457*(x458^(x459^x460)));

	if (t85 != 10044918013805661586LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MIN;
	int16_t x463 = -1;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t86 = 7440534LLU;

	t86 = (x461*(x462^(x463^x464)));

	if (t86 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x470 = 153236LL;
	int64_t x471 = -1LL;
	int16_t x472 = 1593;
	volatile int64_t t87 = -310188870431LL;

	t87 = (x469*(x470^(x471^x472)));

	if (t87 != -1252953308LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x473 = -1;
	int32_t x474 = -1;
	int16_t x476 = 818;

	t88 = (x473*(x474^(x475^x476)));

	if (t88 != 602684U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x478 = INT8_MIN;
	int16_t x479 = INT16_MIN;
	volatile int32_t t89 = -15812881;

	t89 = (x477*(x478^(x479^x480)));

	if (t89 != 4194304) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x481 = 10671967LLU;
	uint8_t x484 = 33U;
	static volatile uint64_t t90 = 33926713825LLU;

	t90 = (x481*(x482^(x483^x484)));

	if (t90 != 349336167778LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x489 = 11U;
	static int8_t x490 = -26;
	volatile int8_t x491 = INT8_MIN;
	volatile int16_t x492 = -2062;
	static uint32_t t91 = 1014978652U;

	t91 = (x489*(x490^(x491^x492)));

	if (t91 != 4294943580U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = INT16_MIN;
	int64_t x494 = -1LL;
	uint16_t x495 = 2969U;
	static uint8_t x496 = 0U;

	t92 = (x493*(x494^(x495^x496)));

	if (t92 != 97320960LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MIN;
	static uint16_t x499 = UINT16_MAX;
	volatile int64_t x500 = -1LL;

	t93 = (x497*(x498^(x499^x500)));

	if (t93 != -70368744177664LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x501 = 99942483089LLU;
	int16_t x502 = -29;
	int32_t x503 = -1;
	int8_t x504 = INT8_MAX;

	t94 = (x501*(x502^(x503^x504)));

	if (t94 != 9894305825811LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x509 = INT16_MIN;
	volatile int8_t x511 = -1;
	static int64_t t95 = 57255201208LL;

	t95 = (x509*(x510^(x511^x512)));

	if (t95 != -4269785350144LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x513 = 1;
	uint8_t x514 = 0U;
	int8_t x515 = -1;
	volatile int32_t t96 = 163069;

	t96 = (x513*(x514^(x515^x516)));

	if (t96 != -256) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x525 = INT16_MIN;
	static uint64_t x527 = 224261611LLU;
	volatile int16_t x528 = -5;

	t97 = (x525*(x526^(x527^x528)));

	if (t97 != 18446736726009839616LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x530 = INT16_MAX;
	volatile uint8_t x531 = 123U;
	uint32_t x532 = 649196U;
	static volatile uint32_t t98 = 6U;

	t98 = (x529*(x530^(x531^x532)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x534 = -1;
	uint32_t x535 = UINT32_MAX;
	int16_t x536 = 3;
	uint32_t t99 = 369039676U;

	t99 = (x533*(x534^(x535^x536)));

	if (t99 != 98301U) { NG(); } else { ; }
	
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

