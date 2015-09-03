#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = -88;
uint32_t x24 = 49U;
volatile uint64_t t6 = 978LLU;
static volatile int8_t x38 = -1;
int32_t t7 = 9809;
int16_t x47 = INT16_MAX;
int16_t x49 = INT16_MIN;
int32_t t11 = -75;
static int8_t x74 = INT8_MIN;
volatile uint32_t x75 = 201913139U;
static int8_t x82 = INT8_MIN;
volatile int32_t t15 = -30879440;
int32_t x93 = INT32_MIN;
int8_t x94 = -1;
uint64_t x102 = UINT64_MAX;
int16_t x106 = 59;
int64_t x115 = 1845354LL;
uint32_t x116 = UINT32_MAX;
uint64_t t21 = 4071151265555366084LLU;
int8_t x118 = -1;
int8_t x119 = -1;
volatile int8_t x122 = INT8_MIN;
volatile int16_t x125 = -2;
int16_t x126 = INT16_MAX;
int8_t x133 = INT8_MAX;
uint32_t x137 = 1659864U;
int16_t x141 = 6529;
static int64_t x148 = -1862190384867LL;
uint64_t x155 = 37555045LLU;
uint64_t t32 = 324LLU;
volatile uint32_t x169 = UINT32_MAX;
int16_t x172 = INT16_MIN;
uint8_t x177 = 9U;
int64_t x195 = 377LL;
volatile uint8_t x196 = 6U;
int8_t x210 = INT8_MIN;
static int64_t x211 = INT64_MAX;
int64_t x212 = -1LL;
int8_t x217 = 1;
int64_t x218 = 2LL;
volatile uint64_t x224 = 2871403553940253558LLU;
volatile int64_t x231 = INT64_MIN;
int8_t x237 = -1;
volatile uint64_t t46 = 156962LLU;
int32_t x247 = -1798;
static volatile int32_t t47 = -101191528;
int32_t t48 = 9253;
int64_t x259 = INT64_MAX;
uint64_t x261 = 78LLU;
static volatile int32_t t53 = 2;
uint32_t x283 = 49U;
int8_t x286 = -1;
volatile uint32_t t59 = 81350U;
int8_t x305 = -1;
volatile int32_t x307 = -1;
int16_t x310 = INT16_MIN;
static volatile uint16_t x311 = UINT16_MAX;
uint32_t x319 = 149354045U;
uint64_t x324 = UINT64_MAX;
uint64_t t63 = 4716800385136698875LLU;
int64_t x326 = INT64_MIN;
static int32_t t66 = 15241;
static int32_t x349 = INT32_MIN;
volatile int16_t x350 = INT16_MIN;
uint32_t x364 = 2755U;
int16_t x365 = INT16_MIN;
uint8_t x373 = 32U;
static int8_t x377 = 0;
volatile uint8_t x396 = 10U;
volatile uint64_t t75 = 130880507LLU;
int8_t x405 = INT8_MIN;
static uint64_t x406 = UINT64_MAX;
int32_t x408 = INT32_MIN;
volatile int32_t x431 = INT32_MAX;
int16_t x432 = -1;
int8_t x433 = INT8_MIN;
uint64_t t83 = 131926970585LLU;
uint16_t x437 = 1U;
volatile uint64_t x438 = 8467203361LLU;
int64_t x444 = -1LL;
int64_t t85 = -125264LL;
uint32_t x448 = 13U;
int64_t x451 = INT64_MIN;
static int16_t x452 = INT16_MIN;
volatile int64_t t87 = -4533366LL;
static int64_t x457 = -1LL;
int16_t x464 = -1;
int16_t x483 = -1;
volatile int64_t t94 = 1055LL;
volatile int16_t x489 = INT16_MIN;
static uint16_t x491 = UINT16_MAX;
uint64_t x495 = 629516573022162776LLU;
int64_t x496 = INT64_MIN;
static int8_t x497 = INT8_MAX;
int16_t x499 = -1;
static int16_t x503 = INT16_MIN;
volatile uint8_t x506 = 27U;


void f0(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int64_t x6 = INT64_MIN;
	static volatile uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MAX;
	uint64_t t0 = 515596807192LLU;

	t0 = (x5*((x6/x7)+x8));

	if (t0 != 18446744072635842560LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MIN;
	int32_t x12 = -219447148;
	volatile uint64_t t1 = 445253693980353459LLU;

	t1 = (x9*((x10/x11)+x12));

	if (t1 != 219446776LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = 690LL;
	int8_t x16 = -1;
	int64_t t2 = 387LL;

	t2 = (x13*((x14/x15)+x16));

	if (t2 != -2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 0;
	int32_t x18 = INT32_MIN;
	int16_t x19 = -3;
	volatile int8_t x20 = INT8_MAX;
	volatile int32_t t3 = -5392;

	t3 = (x17*((x18/x19)+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = UINT8_MAX;
	static uint32_t t4 = 19122U;

	t4 = (x21*((x22/x23)+x24));

	if (t4 != 12750U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MAX;
	volatile uint16_t x30 = 0U;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = 45U;
	volatile int64_t t5 = 0LL;

	t5 = (x29*((x30/x31)+x32));

	if (t5 != 1474515LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = -2047179;
	int8_t x34 = INT8_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	int16_t x36 = 48;

	t6 = (x33*((x34/x35)+x36));

	if (t6 != 18446744073611287024LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 88179;
	volatile int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;

	t7 = (x37*((x38/x39)+x40));

	if (t7 != -11286912) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = 204U;
	int64_t x42 = INT64_MAX;
	uint32_t x43 = 4889U;
	uint16_t x44 = 0U;
	volatile int64_t t8 = 0LL;

	t8 = (x41*((x42/x43)+x44));

	if (t8 != 384857413687538064LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = -1591;
	volatile int16_t x46 = INT16_MIN;
	uint16_t x48 = UINT16_MAX;
	int32_t t9 = -408611224;

	t9 = (x45*((x46/x47)+x48));

	if (t9 != -104264594) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x50 = 98U;
	volatile uint64_t x51 = 43784837LLU;
	volatile int64_t x52 = 209431098425637971LL;
	static volatile uint64_t t10 = 104LLU;

	t10 = (x49*((x50/x51)+x52));

	if (t10 != 17997306282357719040LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	uint16_t x54 = 4U;
	volatile int32_t x55 = INT32_MIN;
	uint8_t x56 = 11U;

	t11 = (x53*((x54/x55)+x56));

	if (t11 != 720885) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = 275164755810358LLU;
	static uint32_t x70 = 1000U;
	static uint64_t x71 = 2585571360LLU;
	volatile int16_t x72 = INT16_MAX;
	uint64_t t12 = 676559703845LLU;

	t12 = (x69*((x70/x71)+x72));

	if (t12 != 9016323553638000586LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MIN;
	volatile int64_t x76 = -1LL;
	int64_t t13 = 1972665LL;

	t13 = (x73*((x74/x75)+x76));

	if (t13 != -2560LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = 0;
	uint16_t x83 = 47U;
	uint16_t x84 = 3306U;
	int32_t t14 = 33;

	t14 = (x81*((x82/x83)+x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x85 = 3;
	static volatile int16_t x86 = INT16_MAX;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MIN;

	t15 = (x85*((x86/x87)+x88));

	if (t15 != -97920) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = -7737915475476880LL;
	static volatile int8_t x91 = INT8_MAX;
	int32_t x92 = INT32_MIN;
	static int64_t t16 = -42714770882388349LL;

	t16 = (x89*((x90/x91)+x92));

	if (t16 != -1996513487738021063LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x95 = -15215611LL;
	int16_t x96 = -20;
	static volatile int64_t t17 = 2165356796610072186LL;

	t17 = (x93*((x94/x95)+x96));

	if (t17 != 42949672960LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = 12U;
	int16_t x103 = INT16_MIN;
	volatile int64_t x104 = -1LL;
	uint64_t t18 = 140836LLU;

	t18 = (x101*((x102/x103)+x104));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MAX;
	int16_t x107 = INT16_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t19 = -105951;

	t19 = (x105*((x106/x107)+x108));

	if (t19 != 8355585) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = 1045518U;
	static uint64_t x110 = 81997982825735468LLU;
	uint32_t x111 = 1U;
	uint64_t x112 = UINT64_MAX;
	uint64_t t20 = 31284898204033LLU;

	t20 = (x109*((x110/x111)+x112));

	if (t20 != 8347297469007627354LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = -1LL;
	uint64_t x114 = 81177431202022LLU;

	t21 = (x113*((x114/x115)+x116));

	if (t21 != 18446744069370594154LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = 16U;
	int16_t x120 = INT16_MIN;
	uint32_t t22 = 27609970U;

	t22 = (x117*((x118/x119)+x120));

	if (t22 != 4294443024U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x121 = 296U;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = 2700005953LLU;
	volatile uint64_t t23 = 2LLU;

	t23 = (x121*((x122/x123)+x124));

	if (t23 != 799201762088LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x127 = UINT8_MAX;
	int32_t x128 = -1;
	volatile int32_t t24 = -427898181;

	t24 = (x125*((x126/x127)+x128));

	if (t24 != -254) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MAX;
	static int64_t t25 = -7820293347557LL;

	t25 = (x129*((x130/x131)+x132));

	if (t25 != -1073741824LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x134 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = -1;
	volatile uint32_t t26 = 12U;

	t26 = (x133*((x134/x135)+x136));

	if (t26 != 4294967169U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x138 = 1260152998LLU;
	int8_t x139 = INT8_MAX;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t27 = 31092526LLU;

	t27 = (x137*((x138/x139)+x140));

	if (t27 != 16469940784896LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x142 = -58;
	static volatile int32_t x143 = 1;
	uint32_t x144 = 481983U;
	uint32_t t28 = 344U;

	t28 = (x141*((x142/x143)+x144));

	if (t28 != 3146488325U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = 5761150LL;
	volatile int64_t x147 = -1LL;
	int64_t t29 = -1012433918683LL;

	t29 = (x145*((x146/x147)+x148));

	if (t29 != 238361106690176LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = -1;
	uint16_t x156 = UINT16_MAX;
	uint64_t t30 = 107098255LLU;

	t30 = (x153*((x154/x155)+x156));

	if (t30 != 18446743582517315397LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MAX;
	uint64_t x158 = 971517818093359413LLU;
	int64_t x159 = INT64_MIN;
	int8_t x160 = 30;
	uint64_t t31 = 1LLU;

	t31 = (x157*((x158/x159)+x160));

	if (t31 != 983010LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MAX;
	uint64_t x164 = UINT64_MAX;

	t32 = (x161*((x162/x163)+x164));

	if (t32 != 4294967299LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x170 = -1;
	volatile uint16_t x171 = 441U;
	uint32_t t33 = 14559627U;

	t33 = (x169*((x170/x171)+x172));

	if (t33 != 32768U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x174 = -1LL;
	static volatile int16_t x175 = -1;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t34 = 42701509831LLU;

	t34 = (x173*((x174/x175)+x176));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x178 = INT8_MAX;
	volatile uint16_t x179 = UINT16_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t35 = 32;

	t35 = (x177*((x178/x179)+x180));

	if (t35 != 589815) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MAX;
	volatile int64_t t36 = -9192584LL;

	t36 = (x193*((x194/x195)+x196));

	if (t36 != -768LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MIN;
	int32_t x199 = -1540515;
	static int8_t x200 = INT8_MIN;
	int64_t t37 = 15LL;

	t37 = (x197*((x198/x199)+x200));

	if (t37 != -766361652234496LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x201 = UINT8_MAX;
	int8_t x202 = -1;
	int64_t x203 = -77837376798187LL;
	static uint32_t x204 = UINT32_MAX;
	volatile int64_t t38 = 0LL;

	t38 = (x201*((x202/x203)+x204));

	if (t38 != 1095216660225LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x205 = 308U;
	int64_t x206 = 34472761106595LL;
	int16_t x207 = INT16_MAX;
	int32_t x208 = -1;
	int64_t t39 = 1LL;

	t39 = (x205*((x206/x207)+x208));

	if (t39 != 324033643780LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x209 = 24190LLU;
	uint64_t t40 = 9519998719LLU;

	t40 = (x209*((x210/x211)+x212));

	if (t40 != 18446744073709527426LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x213 = 3761U;
	int16_t x214 = -994;
	uint32_t x215 = 53665U;
	int16_t x216 = INT16_MAX;
	volatile uint32_t t41 = 356446U;

	t41 = (x213*((x214/x215)+x216));

	if (t41 != 424237039U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x219 = INT32_MIN;
	uint8_t x220 = 50U;
	volatile int64_t t42 = 6700LL;

	t42 = (x217*((x218/x219)+x220));

	if (t42 != 50LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x221 = 639;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	static volatile uint64_t t43 = 169LLU;

	t43 = (x221*((x222/x223)+x224));

	if (t43 != 8599207670576414217LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x229 = -438048964;
	uint64_t x230 = 603174853LLU;
	uint64_t x232 = UINT64_MAX;
	uint64_t t44 = 9786337321LLU;

	t44 = (x229*((x230/x231)+x232));

	if (t44 != 438048964LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x238 = 8U;
	int8_t x239 = INT8_MAX;
	volatile int64_t x240 = 20108783615811886LL;
	volatile int64_t t45 = -6718276029LL;

	t45 = (x237*((x238/x239)+x240));

	if (t45 != -20108783615811886LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x241 = 7105;
	uint64_t x242 = 420541524629710LLU;
	int32_t x243 = INT32_MAX;
	static int8_t x244 = 1;

	t46 = (x241*((x242/x243)+x244));

	if (t46 != 1391372150LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x245 = 58U;
	uint8_t x246 = 3U;
	volatile int32_t x248 = -1;

	t47 = (x245*((x246/x247)+x248));

	if (t47 != -58) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x249 = 711U;
	volatile int8_t x250 = -1;
	static int32_t x251 = INT32_MIN;
	int8_t x252 = INT8_MIN;

	t48 = (x249*((x250/x251)+x252));

	if (t48 != -91008) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = INT64_MIN;
	volatile uint64_t x254 = UINT64_MAX;
	static int8_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;
	volatile uint64_t t49 = 15067LLU;

	t49 = (x253*((x254/x255)+x256));

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MAX;
	int32_t x260 = INT32_MIN;
	volatile int64_t t50 = 28LL;

	t50 = (x257*((x258/x259)+x260));

	if (t50 != -272730423296LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x262 = 91104816;
	uint64_t x263 = 11LLU;
	volatile int32_t x264 = 943634;
	static volatile uint64_t t51 = 27571LLU;

	t51 = (x261*((x262/x263)+x264));

	if (t51 != 719619420LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x265 = 3U;
	static volatile uint32_t x266 = 224U;
	int8_t x267 = INT8_MIN;
	volatile int32_t x268 = INT32_MIN;
	static uint32_t t52 = 648249973U;

	t52 = (x265*((x266/x267)+x268));

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x269 = -293807100;
	int32_t x270 = -1;
	int8_t x271 = -1;
	uint8_t x272 = 0U;

	t53 = (x269*((x270/x271)+x272));

	if (t53 != -293807100) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = 14;
	static int64_t x279 = INT64_MIN;
	int16_t x280 = -5734;
	int64_t t54 = 1044200461259LL;

	t54 = (x277*((x278/x279)+x280));

	if (t54 != 733952LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	static int32_t x284 = -126703;
	uint32_t t55 = 433715984U;

	t55 = (x281*((x282/x283)+x284));

	if (t55 != 4207441608U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x285 = INT64_MIN;
	static uint64_t x287 = UINT64_MAX;
	volatile uint16_t x288 = 973U;
	uint64_t t56 = 2305LLU;

	t56 = (x285*((x286/x287)+x288));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MIN;
	static volatile int16_t x290 = -5378;
	static uint32_t x291 = 18455981U;
	int8_t x292 = -19;
	uint32_t t57 = 1010386U;

	t57 = (x289*((x290/x291)+x292));

	if (t57 != 4294940032U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x293 = INT32_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	uint32_t x295 = UINT32_MAX;
	static volatile int64_t x296 = -1LL;
	int64_t t58 = 66768LL;

	t58 = (x293*((x294/x295)+x296));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x301 = INT16_MIN;
	static uint32_t x302 = 0U;
	uint16_t x303 = 28U;
	uint16_t x304 = 5U;

	t59 = (x301*((x302/x303)+x304));

	if (t59 != 4294803456U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x306 = 10251;
	int64_t x308 = -1LL;
	int64_t t60 = -13LL;

	t60 = (x305*((x306/x307)+x308));

	if (t60 != 10252LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = 0;
	uint16_t x312 = UINT16_MAX;
	static volatile int32_t t61 = 25173549;

	t61 = (x309*((x310/x311)+x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x317 = 2U;
	uint64_t x318 = UINT64_MAX;
	uint64_t x320 = 1LLU;
	volatile uint64_t t62 = 14102LLU;

	t62 = (x317*((x318/x319)+x320));

	if (t62 != 247020347842LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x321 = UINT16_MAX;
	static int16_t x322 = -10;
	int16_t x323 = -1;

	t63 = (x321*((x322/x323)+x324));

	if (t63 != 589815LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MAX;
	volatile uint64_t t64 = 16305270646LLU;

	t64 = (x325*((x326/x327)+x328));

	if (t64 != 18446462596585357313LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = -207058020139672LL;
	int64_t x335 = 218LL;
	static int16_t x336 = -1;
	volatile int64_t t65 = 17344426432866LL;

	t65 = (x333*((x334/x335)+x336));

	if (t65 != 121575351274752LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = INT16_MIN;
	static int8_t x338 = INT8_MAX;
	uint8_t x339 = UINT8_MAX;
	static uint8_t x340 = 22U;

	t66 = (x337*((x338/x339)+x340));

	if (t66 != -720896) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x351 = 3517427230LLU;
	volatile uint32_t x352 = UINT32_MAX;
	uint64_t t67 = 1652969LLU;

	t67 = (x349*((x350/x351)+x352));

	if (t67 != 16407884185894649856LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile int16_t x354 = INT16_MIN;
	static int64_t x355 = INT64_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	volatile int64_t t68 = 18556031805LL;

	t68 = (x353*((x354/x355)+x356));

	if (t68 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x361 = -347564LL;
	static int32_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int64_t t69 = 445917LL;

	t69 = (x361*((x362/x363)+x364));

	if (t69 != -957538820LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x366 = INT8_MAX;
	int64_t x367 = -24301137920020176LL;
	int32_t x368 = INT32_MAX;
	volatile int64_t t70 = -1268688LL;

	t70 = (x365*((x366/x367)+x368));

	if (t70 != -70368744144896LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x374 = 0;
	static uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MIN;
	uint64_t t71 = 61154614101LLU;

	t71 = (x373*((x374/x375)+x376));

	if (t71 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x378 = INT8_MIN;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = -14140;
	volatile uint32_t t72 = 7283199U;

	t72 = (x377*((x378/x379)+x380));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x385 = -1LL;
	static int32_t x386 = INT32_MAX;
	static int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	int64_t t73 = -1740698784307924693LL;

	t73 = (x385*((x386/x387)+x388));

	if (t73 != 98303LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x389 = 105213565102LLU;
	int16_t x390 = INT16_MIN;
	uint16_t x391 = 1920U;
	uint16_t x392 = 797U;
	uint64_t t74 = 15788817200LLU;

	t74 = (x389*((x390/x391)+x392));

	if (t74 != 82066580779560LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MIN;
	static int32_t x395 = INT32_MAX;

	t75 = (x393*((x394/x395)+x396));

	if (t75 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x397 = 38U;
	volatile int16_t x398 = -1;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = UINT16_MAX;
	static volatile int32_t t76 = 1000;

	t76 = (x397*((x398/x399)+x400));

	if (t76 != 2490330) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x401 = UINT16_MAX;
	int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = UINT32_MAX;
	volatile int64_t t77 = -151LL;

	t77 = (x401*((x402/x403)+x404));

	if (t77 != 281470681677825LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x407 = UINT64_MAX;
	volatile uint64_t t78 = 883028750000567LLU;

	t78 = (x405*((x406/x407)+x408));

	if (t78 != 274877906816LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = -1;
	static int32_t x414 = INT32_MIN;
	static uint8_t x415 = 28U;
	static volatile int32_t x416 = -8449;
	int32_t t79 = -1001248299;

	t79 = (x413*((x414/x415)+x416));

	if (t79 != 76704293) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x421 = UINT32_MAX;
	uint32_t x422 = 29626U;
	int64_t x423 = 28499559828190LL;
	static int32_t x424 = -1;
	volatile int64_t t80 = -997LL;

	t80 = (x421*((x422/x423)+x424));

	if (t80 != -4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x425 = UINT8_MAX;
	int64_t x426 = -18171LL;
	static int64_t x427 = INT64_MIN;
	uint64_t x428 = 20440663049LLU;
	uint64_t t81 = 5968LLU;

	t81 = (x425*((x426/x427)+x428));

	if (t81 != 5212369077495LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x429 = 16;
	volatile int64_t x430 = -1LL;
	volatile int64_t t82 = 1197147518371LL;

	t82 = (x429*((x430/x431)+x432));

	if (t82 != -16LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x434 = 15289;
	int16_t x435 = -1;
	volatile uint64_t x436 = UINT64_MAX;

	t83 = (x433*((x434/x435)+x436));

	if (t83 != 1957120LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x439 = 87937203164950LL;
	volatile int8_t x440 = -1;
	uint64_t t84 = UINT64_MAX;

	t84 = (x437*((x438/x439)+x440));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x441 = 42096U;
	int8_t x442 = INT8_MIN;
	int64_t x443 = -1030LL;

	t85 = (x441*((x442/x443)+x444));

	if (t85 != -42096LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x445 = INT32_MAX;
	static uint8_t x446 = 0U;
	int32_t x447 = -1;
	static volatile uint32_t t86 = 3061U;

	t86 = (x445*((x446/x447)+x448));

	if (t86 != 2147483635U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x449 = 7U;
	int16_t x450 = INT16_MAX;

	t87 = (x449*((x450/x451)+x452));

	if (t87 != -229376LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = INT8_MIN;
	static int8_t x454 = INT8_MIN;
	static volatile uint16_t x455 = 1528U;
	volatile uint16_t x456 = 1871U;
	volatile int32_t t88 = 31687409;

	t88 = (x453*((x454/x455)+x456));

	if (t88 != -239488) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x458 = 1U;
	int64_t x459 = INT64_MAX;
	static int64_t x460 = 14248LL;
	volatile int64_t t89 = 118170436306356805LL;

	t89 = (x457*((x458/x459)+x460));

	if (t89 != -14248LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x461 = 365U;
	uint32_t x462 = UINT32_MAX;
	int8_t x463 = 2;
	static volatile uint32_t t90 = 230629U;

	t90 = (x461*((x462/x463)+x464));

	if (t90 != 2147482918U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x469 = 6971971LL;
	volatile int16_t x470 = -1;
	static uint64_t x471 = 8815266874078588LLU;
	uint64_t x472 = UINT64_MAX;
	uint64_t t91 = 429147LLU;

	t91 = (x469*((x470/x471)+x472));

	if (t91 != 14578391361LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x473 = 0U;
	int16_t x474 = -1;
	int8_t x475 = -1;
	int32_t x476 = -1;
	volatile int32_t t92 = 0;

	t92 = (x473*((x474/x475)+x476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x481 = 15644LLU;
	int64_t x482 = 1LL;
	int8_t x484 = INT8_MIN;
	uint64_t t93 = 1721629724LLU;

	t93 = (x481*((x482/x483)+x484));

	if (t93 != 18446744073707533540LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x485 = 7U;
	int32_t x486 = 114033441;
	int64_t x487 = 15179298566054LL;
	volatile int8_t x488 = INT8_MIN;

	t94 = (x485*((x486/x487)+x488));

	if (t94 != -896LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x490 = UINT32_MAX;
	volatile int64_t x492 = -1LL;
	static volatile int64_t t95 = -1771829695268692566LL;

	t95 = (x489*((x490/x491)+x492));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x493 = UINT32_MAX;
	static int64_t x494 = INT64_MIN;
	volatile uint64_t t96 = 3370330252338LLU;

	t96 = (x493*((x494/x495)+x496));

	if (t96 != 9223372096984317938LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x498 = UINT8_MAX;
	volatile uint8_t x500 = 7U;
	static volatile int32_t t97 = -56089010;

	t97 = (x497*((x498/x499)+x500));

	if (t97 != -31496) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x501 = UINT8_MAX;
	uint8_t x502 = 110U;
	int32_t x504 = 5590;
	int32_t t98 = -49335143;

	t98 = (x501*((x502/x503)+x504));

	if (t98 != 1425450) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x505 = 81U;
	int16_t x507 = -5589;
	static int64_t x508 = -1LL;
	int64_t t99 = -1LL;

	t99 = (x505*((x506/x507)+x508));

	if (t99 != -81LL) { NG(); } else { ; }
	
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

