#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint64_t t0 = 485928732038LLU;
volatile int8_t x5 = -1;
uint8_t x8 = 4U;
static int32_t x24 = 60217384;
int16_t x27 = 9517;
static uint16_t x43 = UINT16_MAX;
volatile uint32_t t8 = 1615U;
uint8_t x55 = 8U;
int16_t x65 = -52;
volatile uint32_t x94 = 16200187U;
volatile int8_t x96 = -1;
uint16_t x99 = UINT16_MAX;
int64_t x111 = -2877614718123204LL;
int16_t x114 = INT16_MIN;
volatile int32_t t19 = 6389;
int8_t x119 = INT8_MIN;
int64_t x120 = 3LL;
uint32_t x135 = 145U;
int32_t x142 = -397963;
int32_t x143 = 802;
int8_t x144 = INT8_MIN;
volatile int32_t x153 = INT32_MIN;
int8_t x155 = INT8_MAX;
static volatile int16_t x156 = -5831;
volatile int16_t x172 = INT16_MIN;
uint32_t x183 = UINT32_MAX;
static int16_t x184 = INT16_MAX;
uint32_t x191 = 26447131U;
int8_t x202 = 1;
static volatile uint8_t x204 = 1U;
volatile int32_t t32 = -31712966;
int8_t x210 = -1;
uint16_t x211 = 1U;
int64_t x213 = INT64_MAX;
int64_t x225 = -1LL;
int16_t x227 = INT16_MIN;
static volatile uint16_t x228 = UINT16_MAX;
volatile int64_t t37 = 4377696570984152LL;
int16_t x234 = -1;
static int8_t x238 = 1;
int32_t t39 = 1;
volatile uint64_t t40 = UINT64_MAX;
static volatile uint64_t t41 = 972LLU;
int16_t x249 = -7;
static int16_t x252 = -1;
volatile int16_t x258 = -23;
volatile int8_t x278 = INT8_MAX;
int16_t x287 = 1;
volatile int32_t t48 = -170;
volatile uint32_t x299 = UINT32_MAX;
volatile uint8_t x321 = 14U;
int8_t x322 = INT8_MIN;
uint16_t x333 = 7U;
static int8_t x339 = INT8_MIN;
uint8_t x348 = 57U;
static int32_t x350 = -17921;
uint32_t x351 = 4409835U;
uint32_t t56 = 529U;
uint64_t x355 = 5LLU;
int16_t x356 = -194;
volatile uint64_t t57 = 12LLU;
static uint8_t x357 = 54U;
static int64_t x359 = -280899112165785954LL;
uint32_t x368 = 4602943U;
uint64_t x371 = 8013LLU;
static volatile int64_t x381 = -1LL;
int32_t x387 = 10;
int64_t x389 = 260131717090894LL;
int16_t x392 = INT16_MIN;
volatile int64_t t63 = 4LL;
int32_t x394 = -1;
uint64_t x402 = 4834LLU;
uint64_t t66 = 2169063915427496486LLU;
static uint64_t t67 = 8252419967014LLU;
uint16_t x423 = 531U;
int64_t x429 = -866605730441889LL;
static int16_t x430 = INT16_MIN;
volatile uint64_t x433 = UINT64_MAX;
int8_t x441 = INT8_MIN;
static volatile uint64_t x452 = 10LLU;
static int16_t x459 = INT16_MAX;
int16_t x467 = INT16_MIN;
static uint8_t x517 = 1U;
int16_t x532 = INT16_MIN;
int16_t x538 = -16379;
uint32_t x547 = UINT32_MAX;
uint64_t x556 = UINT64_MAX;
static int64_t x557 = INT64_MAX;
static int16_t x569 = INT16_MIN;
volatile int32_t t92 = 968023;
uint8_t x577 = 23U;
uint16_t x578 = 1U;
static int16_t x581 = INT16_MAX;
volatile uint8_t x594 = 31U;
static uint16_t x599 = UINT16_MAX;


void f0(void) {
	volatile int16_t x1 = -1265;
	uint16_t x2 = 0U;
	uint64_t x4 = 2070283249LLU;

	t0 = (x1-(x2%(x3*x4)));

	if (t0 != 18446744073709550351LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 11200825541LLU;
	static int32_t x7 = -1;
	uint64_t t1 = 1178948LLU;

	t1 = (x5-(x6%(x7*x8)));

	if (t1 != 18446744062508726074LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 6U;
	int32_t x14 = 93175;
	int16_t x15 = INT16_MAX;
	int64_t x16 = -1LL;
	int64_t t2 = -2034LL;

	t2 = (x13-(x14%(x15*x16)));

	if (t2 != -27635LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x21 = 1936;
	static int32_t x22 = INT32_MIN;
	uint32_t x23 = UINT32_MAX;
	static volatile uint32_t t3 = 388U;

	t3 = (x21-(x22%(x23*x24)));

	if (t3 != 2147485584U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 1823365658145151568LLU;
	uint8_t x26 = 8U;
	int32_t x28 = -1;
	uint64_t t4 = 92819LLU;

	t4 = (x25-(x26%(x27*x28)));

	if (t4 != 1823365658145151560LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1322306618989799LL;
	volatile int32_t x30 = INT32_MAX;
	uint16_t x31 = UINT16_MAX;
	uint64_t x32 = 1LLU;
	volatile uint64_t t5 = 111179335LLU;

	t5 = (x29-(x30%(x31*x32)));

	if (t5 != 18445421767090529050LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 900191673LLU;
	uint64_t x38 = 171759LLU;
	int8_t x39 = 35;
	int8_t x40 = -1;
	volatile uint64_t t6 = 104585LLU;

	t6 = (x37-(x38%(x39*x40)));

	if (t6 != 900019914LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = 40450843622LL;
	static uint32_t x42 = 70U;
	int64_t x44 = -94527119857203LL;
	int64_t t7 = -393407152261807516LL;

	t7 = (x41-(x42%(x43*x44)));

	if (t7 != 40450843552LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MAX;
	volatile int32_t x50 = INT32_MIN;
	volatile uint32_t x51 = UINT32_MAX;
	volatile int32_t x52 = 144230;

	t8 = (x49-(x50%(x51*x52)));

	if (t8 != 2147483775U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x53 = UINT8_MAX;
	static volatile int32_t x54 = 47025;
	static int32_t x56 = 41368772;
	volatile int32_t t9 = -127;

	t9 = (x53-(x54%(x55*x56)));

	if (t9 != -46770) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MAX;
	volatile uint32_t x68 = 930502U;
	volatile uint32_t t10 = 18362873U;

	t10 = (x65-(x66%(x67*x68)));

	if (t10 != 4294966989U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = -1;
	volatile int32_t x74 = INT32_MIN;
	volatile int16_t x75 = -1855;
	uint64_t x76 = 7644782628739440024LLU;
	volatile uint64_t t11 = 41838330879LLU;

	t11 = (x73-(x74%(x75*x76)));

	if (t11 != 17897665486083276383LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x81 = 0U;
	uint32_t x82 = 643133474U;
	int16_t x83 = INT16_MIN;
	static int16_t x84 = INT16_MIN;
	volatile uint32_t t12 = 119804U;

	t12 = (x81-(x82%(x83*x84)));

	if (t12 != 3651833822U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x85 = 9632U;
	int64_t x86 = -1LL;
	int16_t x87 = INT16_MAX;
	static uint64_t x88 = 23789861745LLU;
	static volatile uint64_t t13 = 4772152003LLU;

	t13 = (x85-(x86%(x87*x88)));

	if (t13 != 18446618068829702193LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int64_t x90 = -1LL;
	int8_t x91 = -33;
	volatile int8_t x92 = -6;
	int64_t t14 = -75941014974LL;

	t14 = (x89-(x90%(x91*x92)));

	if (t14 != 4294967296LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x93 = -1;
	volatile int16_t x95 = -1;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (x93-(x94%(x95*x96)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = -12;
	volatile uint32_t x98 = 28858843U;
	static int8_t x100 = 14;
	static uint32_t t16 = 7U;

	t16 = (x97-(x98%(x99*x100)));

	if (t16 != 4294550631U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x105 = -89438457;
	int8_t x106 = -1;
	volatile uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MAX;
	volatile uint64_t t17 = 6069590042917LLU;

	t17 = (x105-(x106%(x107*x108)));

	if (t17 != 18446744073620080393LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x109 = 2141297875LLU;
	static int8_t x110 = -18;
	static int32_t x112 = -1;
	uint64_t t18 = 326791496LLU;

	t18 = (x109-(x110%(x111*x112)));

	if (t18 != 2141297893LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = INT16_MAX;
	uint16_t x115 = UINT16_MAX;
	static volatile int8_t x116 = 1;

	t19 = (x113-(x114%(x115*x116)));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x117 = INT8_MIN;
	int16_t x118 = -1;
	static volatile int64_t t20 = -237109024589015421LL;

	t20 = (x117-(x118%(x119*x120)));

	if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x121 = INT32_MIN;
	static volatile uint16_t x122 = 2U;
	volatile uint16_t x123 = UINT16_MAX;
	volatile int64_t x124 = -1LL;
	volatile int64_t t21 = -1705263LL;

	t21 = (x121-(x122%(x123*x124)));

	if (t21 != -2147483650LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x133 = -1;
	uint8_t x134 = 1U;
	static int32_t x136 = 436909484;
	uint32_t t22 = 63536U;

	t22 = (x133-(x134%(x135*x136)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x137 = INT16_MIN;
	int8_t x138 = -1;
	static uint64_t x139 = UINT64_MAX;
	volatile int32_t x140 = INT32_MIN;
	uint64_t t23 = 6LLU;

	t23 = (x137-(x138%(x139*x140)));

	if (t23 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = INT64_MIN;
	volatile int64_t t24 = -33LL;

	t24 = (x141-(x142%(x143*x144)));

	if (t24 != -9223372036854685813LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = 1722904;
	int16_t x150 = -1;
	static volatile int16_t x151 = -1;
	static uint16_t x152 = 25U;
	volatile int32_t t25 = 45449;

	t25 = (x149-(x150%(x151*x152)));

	if (t25 != 1722905) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x154 = INT32_MIN;
	volatile int32_t t26 = -7308;

	t26 = (x153-(x154%(x155*x156)));

	if (t26 != -2146816763) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x169 = 4134;
	int8_t x170 = INT8_MAX;
	uint32_t x171 = 108U;
	static uint32_t t27 = 169081U;

	t27 = (x169-(x170%(x171*x172)));

	if (t27 != 4007U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x181 = 90U;
	volatile uint16_t x182 = 719U;
	uint32_t t28 = 442U;

	t28 = (x181-(x182%(x183*x184)));

	if (t28 != 4294966667U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x189 = 71778587;
	static int16_t x190 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile uint32_t t29 = 1030313577U;

	t29 = (x189-(x190%(x191*x192)));

	if (t29 != 3710749467U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x193 = INT64_MIN;
	int16_t x194 = -1;
	int8_t x195 = 2;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int64_t t30 = 1LL;

	t30 = (x193-(x194%(x195*x196)));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x197 = 13U;
	int32_t x198 = INT32_MAX;
	int32_t x199 = 39;
	static volatile uint8_t x200 = 14U;
	int32_t t31 = -1258;

	t31 = (x197-(x198%(x199*x200)));

	if (t31 != -114) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x203 = INT16_MAX;

	t32 = (x201-(x202%(x203*x204)));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x209 = 0;
	int64_t x212 = 8424995903LL;
	int64_t t33 = 6337038278LL;

	t33 = (x209-(x210%(x211*x212)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x214 = 0;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = 2;
	static int64_t t34 = INT64_MAX;

	t34 = (x213-(x214%(x215*x216)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x221 = UINT16_MAX;
	volatile int16_t x222 = INT16_MIN;
	static uint64_t x223 = 755739810770185LLU;
	volatile uint16_t x224 = UINT16_MAX;
	static volatile uint64_t t35 = 7439LLU;

	t35 = (x221-(x222%(x223*x224)));

	if (t35 != 12633920351405069046LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x226 = -17;
	volatile int64_t t36 = -116272LL;

	t36 = (x225-(x226%(x227*x228)));

	if (t36 != 16LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x229 = 39U;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = UINT16_MAX;
	volatile uint32_t x232 = UINT32_MAX;

	t37 = (x229-(x230%(x231*x232)));

	if (t37 != 4294869032LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x233 = -1950395LL;
	int8_t x235 = -18;
	volatile uint64_t x236 = 24959LLU;
	volatile uint64_t t38 = 1523498049LLU;

	t38 = (x233-(x234%(x235*x236)));

	if (t38 != 18446744073707151960LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x237 = 10U;
	int8_t x239 = -1;
	volatile uint16_t x240 = 6U;

	t39 = (x237-(x238%(x239*x240)));

	if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x241 = -1;
	static uint64_t x242 = 1LLU;
	static int8_t x243 = -1;
	int32_t x244 = -1;

	t40 = (x241-(x242%(x243*x244)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x245 = INT16_MIN;
	volatile int64_t x246 = -2324153816LL;
	int32_t x247 = 3;
	volatile uint64_t x248 = 1151LLU;

	t41 = (x245-(x246%(x247*x248)));

	if (t41 != 18446744073709516011LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x250 = -1;
	int32_t x251 = -1;
	int32_t t42 = -94262238;

	t42 = (x249-(x250%(x251*x252)));

	if (t42 != -7) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x257 = 8U;
	int8_t x259 = INT8_MIN;
	static int16_t x260 = INT16_MIN;
	int32_t t43 = -1;

	t43 = (x257-(x258%(x259*x260)));

	if (t43 != 31) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x265 = 198U;
	volatile uint64_t x266 = 2196LLU;
	uint32_t x267 = 102U;
	int16_t x268 = INT16_MIN;
	uint64_t t44 = 14LLU;

	t44 = (x265-(x266%(x267*x268)));

	if (t44 != 18446744073709549618LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x277 = 2U;
	static volatile int8_t x279 = -1;
	volatile int16_t x280 = 9236;
	volatile int32_t t45 = 27766940;

	t45 = (x277-(x278%(x279*x280)));

	if (t45 != -125) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -922;
	static int32_t x283 = -4979;
	int16_t x284 = -1;
	static int32_t t46 = 0;

	t46 = (x281-(x282%(x283*x284)));

	if (t46 != -31846) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = -8;
	int8_t x286 = INT8_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t47 = -323;

	t47 = (x285-(x286%(x287*x288)));

	if (t47 != -135) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	volatile int8_t x291 = -1;
	int16_t x292 = -5;

	t48 = (x289-(x290%(x291*x292)));

	if (t48 != -32765) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = 9482U;
	int32_t x300 = -5;
	volatile uint32_t t49 = 276008U;

	t49 = (x297-(x298%(x299*x300)));

	if (t49 != 4294967166U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = 3U;
	uint16_t x315 = 4U;
	static uint16_t x316 = 3U;
	volatile uint32_t t50 = 11U;

	t50 = (x313-(x314%(x315*x316)));

	if (t50 != 4294967292U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x323 = 1;
	int32_t x324 = INT32_MAX;
	int32_t t51 = 44962;

	t51 = (x321-(x322%(x323*x324)));

	if (t51 != 142) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x325 = INT16_MAX;
	static int64_t x326 = -12545LL;
	static int64_t x327 = INT64_MAX;
	int64_t x328 = -1LL;
	int64_t t52 = 40LL;

	t52 = (x325-(x326%(x327*x328)));

	if (t52 != 45312LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x334 = 197811U;
	static int32_t x335 = -1;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t53 = 82249U;

	t53 = (x333-(x334%(x335*x336)));

	if (t53 != 4294967252U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x337 = UINT32_MAX;
	uint8_t x338 = 16U;
	volatile uint32_t x340 = 943U;
	static volatile uint32_t t54 = 566130924U;

	t54 = (x337-(x338%(x339*x340)));

	if (t54 != 4294967279U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x345 = -6095;
	int64_t x346 = INT64_MIN;
	volatile int8_t x347 = 4;
	static int64_t t55 = -888452LL;

	t55 = (x345-(x346%(x347*x348)));

	if (t55 != -6039LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x349 = INT16_MIN;
	static uint32_t x352 = 1424680974U;

	t56 = (x349-(x350%(x351*x352)));

	if (t56 != 2876819675U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MIN;

	t57 = (x353-(x354%(x355*x356)));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x358 = INT16_MAX;
	static int16_t x360 = -1;
	static volatile int64_t t58 = 1783LL;

	t58 = (x357-(x358%(x359*x360)));

	if (t58 != -32713LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x365 = -243850108045312879LL;
	int64_t x366 = -1LL;
	int16_t x367 = 6010;
	volatile int64_t t59 = 453629274LL;

	t59 = (x365-(x366%(x367*x368)));

	if (t59 != -243850108045312878LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x369 = INT64_MAX;
	int8_t x370 = INT8_MAX;
	static uint8_t x372 = 23U;
	static volatile uint64_t t60 = 0LLU;

	t60 = (x369-(x370%(x371*x372)));

	if (t60 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x382 = 34;
	static int16_t x383 = INT16_MAX;
	static int16_t x384 = -330;
	int64_t t61 = 1793725LL;

	t61 = (x381-(x382%(x383*x384)));

	if (t61 != -35LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x385 = -21883598;
	uint16_t x386 = UINT16_MAX;
	volatile int32_t x388 = 200597;
	static int32_t t62 = -19498;

	t62 = (x385-(x386%(x387*x388)));

	if (t62 != -21949133) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x390 = 58U;
	int16_t x391 = INT16_MAX;

	t63 = (x389-(x390%(x391*x392)));

	if (t63 != 260131717090836LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x393 = INT8_MAX;
	int64_t x395 = -1286550LL;
	static int8_t x396 = INT8_MIN;
	static int64_t t64 = -12329941055105710LL;

	t64 = (x393-(x394%(x395*x396)));

	if (t64 != 128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x397 = -1;
	volatile int32_t x398 = 877;
	int16_t x399 = INT16_MAX;
	static int16_t x400 = INT16_MIN;
	int32_t t65 = 3588;

	t65 = (x397-(x398%(x399*x400)));

	if (t65 != -878) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x401 = -1LL;
	volatile uint64_t x403 = 208201013LLU;
	uint32_t x404 = 2260154U;

	t66 = (x401-(x402%(x403*x404)));

	if (t66 != 18446744073709546781LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x405 = INT32_MIN;
	static uint16_t x406 = UINT16_MAX;
	int32_t x407 = 667806;
	uint64_t x408 = 20395774882768123LLU;

	t67 = (x405-(x406%(x407*x408)));

	if (t67 != 18446744071562002433LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x413 = -1;
	int8_t x414 = INT8_MIN;
	int32_t x415 = -1;
	static uint8_t x416 = 15U;
	int32_t t68 = -12441257;

	t68 = (x413-(x414%(x415*x416)));

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x417 = -1LL;
	uint32_t x418 = UINT32_MAX;
	volatile int8_t x419 = -3;
	uint16_t x420 = 14U;
	int64_t t69 = 317470LL;

	t69 = (x417-(x418%(x419*x420)));

	if (t69 != -42LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x421 = 24;
	volatile uint32_t x422 = UINT32_MAX;
	uint16_t x424 = 355U;
	volatile uint32_t t70 = 1380198849U;

	t70 = (x421-(x422%(x423*x424)));

	if (t70 != 4294897945U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x431 = 147429432U;
	int64_t x432 = -20LL;
	volatile int64_t t71 = 891664027399LL;

	t71 = (x429-(x430%(x431*x432)));

	if (t71 != -866605730409121LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x434 = 47U;
	volatile int8_t x435 = 1;
	volatile int8_t x436 = INT8_MIN;
	volatile uint64_t t72 = 1LLU;

	t72 = (x433-(x434%(x435*x436)));

	if (t72 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x437 = 11U;
	volatile uint64_t x438 = 107247831978008614LLU;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = INT32_MIN;
	volatile uint64_t t73 = 80LLU;

	t73 = (x437-(x438%(x439*x440)));

	if (t73 != 18446744072636145637LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x442 = 122U;
	uint64_t x443 = 5440290999771874568LLU;
	int32_t x444 = INT32_MAX;
	volatile uint64_t t74 = 92LLU;

	t74 = (x441-(x442%(x443*x444)));

	if (t74 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x445 = INT16_MIN;
	int64_t x446 = INT64_MIN;
	int8_t x447 = -1;
	uint8_t x448 = UINT8_MAX;
	volatile int64_t t75 = 1929LL;

	t75 = (x445-(x446%(x447*x448)));

	if (t75 != -32640LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x449 = INT64_MIN;
	uint16_t x450 = 1U;
	int32_t x451 = -1;
	static volatile uint64_t t76 = 503974192504926752LLU;

	t76 = (x449-(x450%(x451*x452)));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x457 = INT8_MIN;
	static volatile int32_t x458 = 19790;
	volatile int8_t x460 = -1;
	volatile int32_t t77 = -111970;

	t77 = (x457-(x458%(x459*x460)));

	if (t77 != -19918) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x465 = INT8_MIN;
	int32_t x466 = INT32_MAX;
	volatile int64_t x468 = 1LL;
	volatile int64_t t78 = -10149LL;

	t78 = (x465-(x466%(x467*x468)));

	if (t78 != -32895LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x477 = INT16_MIN;
	uint64_t x478 = UINT64_MAX;
	int64_t x479 = -1LL;
	int64_t x480 = 62680542776LL;
	uint64_t t79 = 211437225LLU;

	t79 = (x477-(x478%(x479*x480)));

	if (t79 != 18446744011028976073LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x509 = 232215484;
	volatile int64_t x510 = -1LL;
	int32_t x511 = -1;
	int16_t x512 = INT16_MIN;
	volatile int64_t t80 = -29LL;

	t80 = (x509-(x510%(x511*x512)));

	if (t80 != 232215485LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x513 = 3990783LL;
	volatile uint64_t x514 = 5109LLU;
	int8_t x515 = INT8_MIN;
	static volatile int8_t x516 = INT8_MAX;
	uint64_t t81 = 735151820224LLU;

	t81 = (x513-(x514%(x515*x516)));

	if (t81 != 3985674LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x518 = UINT8_MAX;
	uint8_t x519 = 1U;
	uint64_t x520 = 68118660625850LLU;
	static volatile uint64_t t82 = 243838LLU;

	t82 = (x517-(x518%(x519*x520)));

	if (t82 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x521 = -12998465253508015LL;
	volatile int32_t x522 = -1;
	uint64_t x523 = 16LLU;
	int8_t x524 = INT8_MAX;
	static uint64_t t83 = 103398265LLU;

	t83 = (x521-(x522%(x523*x524)));

	if (t83 != 18433745608456043346LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x529 = -1LL;
	uint8_t x530 = 15U;
	uint32_t x531 = 7556U;
	volatile int64_t t84 = -169LL;

	t84 = (x529-(x530%(x531*x532)));

	if (t84 != -16LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x537 = INT32_MAX;
	int8_t x539 = -1;
	volatile int16_t x540 = -1;
	int32_t t85 = INT32_MAX;

	t85 = (x537-(x538%(x539*x540)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x545 = INT64_MIN;
	uint64_t x546 = 18155151LLU;
	int32_t x548 = 35;
	static uint64_t t86 = 39781LLU;

	t86 = (x545-(x546%(x547*x548)));

	if (t86 != 9223372036836620657LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x549 = 364;
	volatile int16_t x550 = -1;
	volatile uint32_t x551 = 143276944U;
	volatile uint32_t x552 = UINT32_MAX;
	volatile uint32_t t87 = 0U;

	t87 = (x549-(x550%(x551*x552)));

	if (t87 != 4151690717U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x553 = -1;
	volatile int64_t x554 = -1LL;
	static int64_t x555 = INT64_MIN;
	static uint64_t t88 = 92987LLU;

	t88 = (x553-(x554%(x555*x556)));

	if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x558 = INT64_MAX;
	int8_t x559 = -3;
	static int8_t x560 = INT8_MAX;
	static int64_t t89 = 106467772564LL;

	t89 = (x557-(x558%(x559*x560)));

	if (t89 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x561 = 93;
	int16_t x562 = -1;
	uint8_t x563 = 91U;
	int8_t x564 = -1;
	volatile int32_t t90 = 47;

	t90 = (x561-(x562%(x563*x564)));

	if (t90 != 94) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x570 = INT8_MAX;
	static int8_t x571 = -3;
	uint32_t x572 = 32034U;
	static volatile uint32_t t91 = 451U;

	t91 = (x569-(x570%(x571*x572)));

	if (t91 != 4294934401U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x573 = UINT16_MAX;
	int32_t x574 = INT32_MIN;
	volatile int8_t x575 = INT8_MIN;
	uint8_t x576 = 3U;

	t92 = (x573-(x574%(x575*x576)));

	if (t92 != 65663) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x579 = -11;
	int32_t x580 = -1;
	static volatile int32_t t93 = -1;

	t93 = (x577-(x578%(x579*x580)));

	if (t93 != 22) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x582 = UINT16_MAX;
	static int32_t x583 = -1;
	int8_t x584 = -1;
	static int32_t t94 = -864;

	t94 = (x581-(x582%(x583*x584)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x585 = -583479491738LL;
	volatile int32_t x586 = -154056;
	int64_t x587 = INT64_MAX;
	int8_t x588 = 1;
	volatile int64_t t95 = -971282571983LL;

	t95 = (x585-(x586%(x587*x588)));

	if (t95 != -583479337682LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x589 = INT16_MIN;
	static int32_t x590 = INT32_MAX;
	uint8_t x591 = 3U;
	uint64_t x592 = 10138526412556LLU;
	volatile uint64_t t96 = 22010LLU;

	t96 = (x589-(x590%(x591*x592)));

	if (t96 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x593 = UINT16_MAX;
	static int8_t x595 = INT8_MAX;
	volatile int8_t x596 = INT8_MIN;
	static int32_t t97 = -2057857;

	t97 = (x593-(x594%(x595*x596)));

	if (t97 != 65504) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x597 = 1;
	volatile int16_t x598 = INT16_MIN;
	int64_t x600 = -1LL;
	int64_t t98 = 34794LL;

	t98 = (x597-(x598%(x599*x600)));

	if (t98 != 32769LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x605 = UINT64_MAX;
	int8_t x606 = -8;
	int16_t x607 = 11427;
	static int16_t x608 = INT16_MIN;
	uint64_t t99 = 61LLU;

	t99 = (x605-(x606%(x607*x608)));

	if (t99 != 7LLU) { NG(); } else { ; }
	
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

