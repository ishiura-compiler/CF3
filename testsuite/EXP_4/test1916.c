#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
uint32_t x5 = 720327170U;
uint64_t x18 = 27646449LLU;
int32_t x19 = INT32_MIN;
uint16_t x20 = 62U;
int8_t x22 = INT8_MIN;
volatile uint64_t t4 = 238831168627409477LLU;
volatile uint8_t x32 = UINT8_MAX;
int32_t t6 = 70162;
uint32_t x35 = 433790542U;
volatile uint8_t x55 = 4U;
volatile int16_t x80 = -232;
volatile int64_t t14 = 1662721651273432LL;
uint16_t x112 = 14U;
volatile uint8_t x115 = UINT8_MAX;
int8_t x117 = INT8_MIN;
int64_t x141 = 3825LL;
int32_t x143 = INT32_MIN;
uint8_t x152 = UINT8_MAX;
int64_t x153 = -48489805696LL;
int64_t x154 = INT64_MIN;
uint8_t x155 = UINT8_MAX;
int64_t x165 = INT64_MIN;
int64_t x167 = INT64_MIN;
int64_t t27 = -73274632LL;
static uint64_t t28 = 1LLU;
static int16_t x182 = -31;
uint64_t x183 = UINT64_MAX;
int64_t x184 = -1LL;
static uint64_t t32 = 14704989LLU;
uint8_t x220 = 8U;
volatile int64_t t37 = -111496566028871851LL;
int32_t t38 = 0;
volatile uint16_t x234 = 28241U;
int8_t x235 = 0;
volatile int64_t t39 = 0LL;
int16_t x242 = -73;
volatile int8_t x250 = -10;
static volatile int8_t x258 = -1;
uint32_t x260 = 62084398U;
uint8_t x270 = 5U;
uint8_t x280 = UINT8_MAX;
static uint16_t x283 = 504U;
static uint16_t x287 = 8145U;
int16_t x289 = -7;
volatile int64_t x295 = 489649LL;
uint64_t x296 = 1391862LLU;
volatile int16_t x300 = 1;
static uint8_t x308 = 46U;
volatile int32_t t52 = 193477;
static uint64_t t53 = 831154059790LLU;
static volatile int16_t x318 = INT16_MIN;
volatile uint32_t x321 = 354U;
uint8_t x322 = UINT8_MAX;
uint64_t t57 = 32060501LLU;
uint64_t x334 = 11790LLU;
volatile uint32_t t60 = 396U;
uint64_t x359 = 101674947368432883LLU;
static int16_t x367 = 8989;
int64_t x368 = INT64_MIN;
int64_t x380 = 15668983672246LL;
int8_t x382 = -1;
static uint8_t x384 = 15U;
uint16_t x399 = UINT16_MAX;
int8_t x400 = INT8_MAX;
int16_t x401 = 0;
int8_t x403 = INT8_MIN;
static int16_t x404 = 13;
int32_t x408 = -204820;
volatile int32_t t69 = 1735431;
int8_t x410 = -12;
int8_t x411 = INT8_MIN;
int16_t x428 = INT16_MAX;
volatile uint8_t x438 = 77U;
int8_t x456 = -3;
static int64_t t77 = 3450927LL;
int8_t x459 = INT8_MIN;
static uint64_t x460 = UINT64_MAX;
static uint64_t t78 = 34LLU;
static int32_t x468 = 1876;
int32_t t79 = 7860;
uint32_t x475 = 1U;
uint32_t t80 = 280926U;
int16_t x477 = -1;
volatile uint16_t x478 = 503U;
int8_t x494 = INT8_MIN;
int16_t x495 = INT16_MIN;
int64_t x504 = 68782784885377366LL;
static uint64_t x505 = UINT64_MAX;
int64_t x506 = -6169LL;
int8_t x509 = INT8_MIN;
static int32_t x511 = INT32_MAX;
int16_t x515 = INT16_MIN;
static volatile uint8_t x519 = 2U;
static int32_t t88 = -398;
static int32_t x522 = 397800073;
volatile int32_t t89 = 3;
static uint32_t x532 = 2188U;
uint32_t t90 = 81726044U;
static uint32_t x538 = 6U;
int8_t x541 = INT8_MIN;
int32_t x543 = -1;
uint64_t x547 = 211395LLU;
static volatile uint64_t t95 = 1LLU;
uint16_t x563 = 385U;
static volatile int32_t x566 = INT32_MAX;
int64_t x567 = 0LL;


void f0(void) {
	uint32_t x2 = 604854U;
	volatile int16_t x3 = INT16_MIN;
	int32_t x4 = 151;
	uint32_t t0 = 194126024U;

	t0 = (x1%(x2%(x3|x4)));

	if (t0 != 32767U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x6 = UINT32_MAX;
	volatile int32_t x7 = INT32_MAX;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -44LL;

	t1 = (x5%(x6%(x7|x8)));

	if (t1 != 720327170LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int16_t x10 = 885;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 13408008409LLU;
	static uint64_t t2 = 12LLU;

	t2 = (x9%(x10%(x11|x12)));

	if (t2 != 218LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	static uint64_t t3 = 2505112380LLU;

	t3 = (x17%(x18%(x19|x20)));

	if (t3 != 2193526LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	uint64_t x23 = 487483213002769LLU;
	int8_t x24 = INT8_MIN;

	t4 = (x21%(x22%(x23|x24)));

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = INT32_MIN;
	uint16_t x26 = UINT16_MAX;
	static int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = -14786297;

	t5 = (x25%(x26%(x27|x28)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MIN;

	t6 = (x29%(x30%(x31|x32)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = -752296LL;

	t7 = (x33%(x34%(x35|x36)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	uint64_t x42 = 137842477954508LLU;
	int16_t x43 = -1;
	volatile int16_t x44 = INT16_MIN;
	volatile uint64_t t8 = 257909627606LLU;

	t8 = (x41%(x42%(x43|x44)));

	if (t8 != 112303925472896LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 53U;
	int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MIN;
	uint64_t x48 = UINT64_MAX;
	uint64_t t9 = 115871231LLU;

	t9 = (x45%(x46%(x47|x48)));

	if (t9 != 53LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = 586681354271654LL;
	static uint16_t x56 = UINT16_MAX;
	volatile int64_t t10 = 22780184950821LL;

	t10 = (x53%(x54%(x55|x56)));

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = -1LL;
	int32_t x58 = -26318943;
	int16_t x59 = INT16_MIN;
	static uint8_t x60 = 81U;
	volatile int64_t t11 = 1315793LL;

	t11 = (x57%(x58%(x59|x60)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x77 = 4U;
	int8_t x78 = INT8_MIN;
	int32_t x79 = -849938019;
	int32_t t12 = 53;

	t12 = (x77%(x78%(x79|x80)));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x81 = 4798U;
	uint16_t x82 = 106U;
	uint8_t x83 = 1U;
	static volatile uint8_t x84 = 116U;
	volatile int32_t t13 = -47050596;

	t13 = (x81%(x82%(x83|x84)));

	if (t13 != 28) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x97 = -1LL;
	static uint8_t x98 = 17U;
	int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;

	t14 = (x97%(x98%(x99|x100)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = INT8_MIN;
	uint32_t x102 = 2U;
	int16_t x103 = INT16_MAX;
	static volatile uint32_t x104 = 34U;
	uint32_t t15 = 2848U;

	t15 = (x101%(x102%(x103|x104)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x105 = 15035U;
	uint16_t x106 = 19U;
	uint16_t x107 = 471U;
	int8_t x108 = 33;
	volatile int32_t t16 = -2818;

	t16 = (x105%(x106%(x107|x108)));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	int64_t t17 = 118LL;

	t17 = (x109%(x110%(x111|x112)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x113 = INT32_MAX;
	int32_t x114 = -846793875;
	uint16_t x116 = UINT16_MAX;
	static volatile int32_t t18 = -2299257;

	t18 = (x113%(x114%(x115|x116)));

	if (t18 != 8227) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x118 = 443889212U;
	int64_t x119 = 2827520676189934762LL;
	int8_t x120 = -17;
	volatile int64_t t19 = 17006610975LL;

	t19 = (x117%(x118%(x119|x120)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x133 = 338406245;
	int64_t x134 = INT64_MAX;
	int64_t x135 = INT64_MIN;
	int8_t x136 = -24;
	volatile int64_t t20 = -156828790078533LL;

	t20 = (x133%(x134%(x135|x136)));

	if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = 2;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 14U;
	uint32_t t21 = 111840U;

	t21 = (x137%(x138%(x139|x140)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x142 = INT32_MAX;
	int32_t x144 = -134047;
	static int64_t t22 = -2733LL;

	t22 = (x141%(x142%(x143|x144)));

	if (t22 != 3825LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = -5806811;
	int16_t x147 = INT16_MIN;
	static int64_t x148 = INT64_MIN;
	static volatile int64_t t23 = -413201LL;

	t23 = (x145%(x146%(x147|x148)));

	if (t23 != -1773LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x149 = 57575258032LLU;
	uint16_t x150 = 4056U;
	uint32_t x151 = 4497658U;
	uint64_t t24 = 954578LLU;

	t24 = (x149%(x150%(x151|x152)));

	if (t24 != 1384LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x156 = INT16_MIN;
	int64_t t25 = 14948866824588LL;

	t25 = (x153%(x154%(x155|x156)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x157 = UINT64_MAX;
	uint8_t x158 = 3U;
	volatile int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	static volatile uint64_t t26 = 218949LLU;

	t26 = (x157%(x158%(x159|x160)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x166 = -1;
	int16_t x168 = 34;

	t27 = (x165%(x166%(x167|x168)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x169 = UINT64_MAX;
	static int16_t x170 = 3712;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = UINT64_MAX;

	t28 = (x169%(x170%(x171|x172)));

	if (t28 != 255LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MIN;
	static uint32_t x175 = UINT32_MAX;
	volatile uint32_t x176 = 37976U;
	uint32_t t29 = 122055186U;

	t29 = (x173%(x174%(x175|x176)));

	if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x181 = INT8_MIN;
	uint64_t t30 = 7428330006523827015LLU;

	t30 = (x181%(x182%(x183|x184)));

	if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x185 = 0U;
	uint32_t x186 = 8U;
	int64_t x187 = INT64_MIN;
	static uint64_t x188 = 2580081LLU;
	volatile uint64_t t31 = 46112002078LLU;

	t31 = (x185%(x186%(x187|x188)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x189 = 1U;
	uint64_t x190 = UINT64_MAX;
	static int64_t x191 = -17343LL;
	volatile int8_t x192 = INT8_MIN;

	t32 = (x189%(x190%(x191|x192)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	static volatile uint64_t x199 = 7665562678677LLU;
	uint16_t x200 = 10391U;
	volatile uint64_t t33 = 19439LLU;

	t33 = (x197%(x198%(x199|x200)));

	if (t33 != 665154131129LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x201 = -1LL;
	int32_t x202 = -1;
	static uint8_t x203 = 3U;
	int8_t x204 = INT8_MIN;
	int64_t t34 = -1235441LL;

	t34 = (x201%(x202%(x203|x204)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x209 = -13303;
	static volatile int32_t x210 = INT32_MAX;
	int64_t x211 = 7LL;
	static volatile int16_t x212 = INT16_MIN;
	int64_t t35 = -121720769LL;

	t35 = (x209%(x210%(x211|x212)));

	if (t35 != -14LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x217 = UINT64_MAX;
	static uint8_t x218 = UINT8_MAX;
	int64_t x219 = INT64_MIN;
	volatile uint64_t t36 = 14881543903463959LLU;

	t36 = (x217%(x218%(x219|x220)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x222 = 3416U;
	uint8_t x223 = 3U;
	int32_t x224 = -1;

	t37 = (x221%(x222%(x223|x224)));

	if (t37 != -8LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x225 = 1;
	static int8_t x226 = INT8_MIN;
	int16_t x227 = 12256;
	static int32_t x228 = 9816920;

	t38 = (x225%(x226%(x227|x228)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x233 = INT8_MIN;
	static volatile int64_t x236 = INT64_MIN;

	t39 = (x233%(x234%(x235|x236)));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x241 = 58570675533772206LL;
	uint16_t x243 = 236U;
	int8_t x244 = 1;
	static volatile int64_t t40 = 189LL;

	t40 = (x241%(x242%(x243|x244)));

	if (t40 != 12LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x245 = INT32_MIN;
	static volatile uint32_t x246 = 1128527U;
	static int32_t x247 = INT32_MIN;
	static int32_t x248 = -1;
	static volatile uint32_t t41 = 64295408U;

	t41 = (x245%(x246%(x247|x248)));

	if (t41 != 1025294U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x249 = 3U;
	uint16_t x251 = 27912U;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t42 = -14272454;

	t42 = (x249%(x250%(x251|x252)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x259 = 21U;
	static uint32_t t43 = 88360584U;

	t43 = (x257%(x258%(x259|x260)));

	if (t43 != 8092928U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x269 = UINT64_MAX;
	static uint8_t x271 = 0U;
	static uint64_t x272 = 2949521641068LLU;
	volatile uint64_t t44 = 1003LLU;

	t44 = (x269%(x270%(x271|x272)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x273 = 86U;
	int16_t x274 = INT16_MAX;
	volatile int32_t x275 = INT32_MIN;
	int64_t x276 = 37598LL;
	static volatile int64_t t45 = 6LL;

	t45 = (x273%(x274%(x275|x276)));

	if (t45 != 86LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x277 = 21U;
	int16_t x278 = -1;
	int64_t x279 = INT64_MAX;
	int64_t t46 = 24116472558561913LL;

	t46 = (x277%(x278%(x279|x280)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x281 = INT64_MAX;
	int32_t x282 = -1;
	volatile uint32_t x284 = 131115761U;
	int64_t t47 = -1781225370LL;

	t47 = (x281%(x282%(x283|x284)));

	if (t47 != 82181867LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x285 = -1LL;
	volatile int32_t x286 = -1;
	uint64_t x288 = 75703811LLU;
	volatile uint64_t t48 = 2055205321404LLU;

	t48 = (x285%(x286%(x287|x288)));

	if (t48 != 14189085LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x290 = UINT16_MAX;
	volatile int64_t x291 = INT64_MAX;
	int16_t x292 = 0;
	volatile int64_t t49 = -7668585187700LL;

	t49 = (x289%(x290%(x291|x292)));

	if (t49 != -7LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x293 = 22613U;
	int64_t x294 = 1LL;
	uint64_t t50 = 1220542909789LLU;

	t50 = (x293%(x294%(x295|x296)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	static uint32_t x299 = UINT32_MAX;
	volatile uint32_t t51 = 9240387U;

	t51 = (x297%(x298%(x299|x300)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x305 = -1;
	int16_t x306 = -1;
	static volatile uint8_t x307 = 25U;

	t52 = (x305%(x306%(x307|x308)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x309 = 1304LLU;
	int8_t x310 = INT8_MIN;
	static int8_t x311 = INT8_MAX;
	volatile int64_t x312 = INT64_MIN;

	t53 = (x309%(x310%(x311|x312)));

	if (t53 != 1304LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x317 = -1;
	uint16_t x319 = 3U;
	uint8_t x320 = UINT8_MAX;
	static volatile int32_t t54 = -22;

	t54 = (x317%(x318%(x319|x320)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x323 = -5;
	uint64_t x324 = UINT64_MAX;
	uint64_t t55 = 13377191258653552LLU;

	t55 = (x321%(x322%(x323|x324)));

	if (t55 != 99LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x325 = 30636434285978868LLU;
	uint16_t x326 = UINT16_MAX;
	volatile int32_t x327 = 12233220;
	volatile int16_t x328 = INT16_MIN;
	volatile uint64_t t56 = 208650LLU;

	t56 = (x325%(x326%(x327|x328)));

	if (t56 != 14991LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x329 = 139310890543LL;
	static volatile uint16_t x330 = 18470U;
	int32_t x331 = -1;
	static volatile uint64_t x332 = 419851690374403LLU;

	t57 = (x329%(x330%(x331|x332)));

	if (t57 != 10513LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = -1;
	volatile int8_t x335 = -9;
	int64_t x336 = INT64_MIN;
	uint64_t t58 = 32LLU;

	t58 = (x333%(x334%(x335|x336)));

	if (t58 != 195LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x338 = 9495569LL;
	static uint32_t x339 = UINT32_MAX;
	int16_t x340 = 6220;
	uint64_t t59 = 2100030099373928492LLU;

	t59 = (x337%(x338%(x339|x340)));

	if (t59 != 6001559LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x341 = INT8_MAX;
	static uint16_t x342 = UINT16_MAX;
	static volatile uint32_t x343 = 11U;
	int16_t x344 = 31;

	t60 = (x341%(x342%(x343|x344)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x357 = INT32_MIN;
	volatile uint64_t x358 = 1098722246LLU;
	volatile int8_t x360 = -1;
	uint64_t t61 = 3591LLU;

	t61 = (x357%(x358%(x359|x360)));

	if (t61 != 928489362LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x365 = 12U;
	int64_t x366 = -1LL;
	volatile int64_t t62 = 15223345376348LL;

	t62 = (x365%(x366%(x367|x368)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x377 = INT16_MAX;
	int64_t x378 = 5911653567LL;
	uint64_t x379 = 7506219LLU;
	volatile uint64_t t63 = 710448355LLU;

	t63 = (x377%(x378%(x379|x380)));

	if (t63 != 32767LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x381 = -4;
	uint16_t x383 = 6U;
	int32_t t64 = 70382;

	t64 = (x381%(x382%(x383|x384)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x389 = 3U;
	int64_t x390 = INT64_MIN;
	static int8_t x391 = -24;
	volatile int16_t x392 = 0;
	volatile int64_t t65 = 597673832LL;

	t65 = (x389%(x390%(x391|x392)));

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x393 = -3;
	static int32_t x394 = -14;
	static int32_t x395 = INT32_MIN;
	uint8_t x396 = 37U;
	volatile int32_t t66 = 130571;

	t66 = (x393%(x394%(x395|x396)));

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x397 = 1;
	uint8_t x398 = 2U;
	int32_t t67 = 14122906;

	t67 = (x397%(x398%(x399|x400)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x402 = 95U;
	int32_t t68 = -941658;

	t68 = (x401%(x402%(x403|x404)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x405 = -1;
	volatile int8_t x406 = -9;
	volatile int16_t x407 = INT16_MIN;

	t69 = (x405%(x406%(x407|x408)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x409 = 42993LLU;
	int16_t x412 = -7;
	uint64_t t70 = 472798501680850936LLU;

	t70 = (x409%(x410%(x411|x412)));

	if (t70 != 42993LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x417 = UINT16_MAX;
	static volatile uint8_t x418 = 1U;
	int64_t x419 = INT64_MIN;
	int64_t x420 = -529LL;
	int64_t t71 = -15LL;

	t71 = (x417%(x418%(x419|x420)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x421 = 57354716;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = -7577;
	int64_t x424 = INT64_MIN;
	static uint64_t t72 = 247324595LLU;

	t72 = (x421%(x422%(x423|x424)));

	if (t72 != 4396LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x425 = 32274293U;
	static uint32_t x426 = 33923U;
	volatile int8_t x427 = INT8_MIN;
	static uint32_t t73 = 1989203122U;

	t73 = (x425%(x426%(x427|x428)));

	if (t73 != 13520U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x437 = 750928;
	uint64_t x439 = 1224704436981760137LLU;
	int32_t x440 = -1;
	volatile uint64_t t74 = 11268930605208LLU;

	t74 = (x437%(x438%(x439|x440)));

	if (t74 != 24LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x441 = INT64_MAX;
	uint32_t x442 = 1U;
	volatile uint32_t x443 = 9164363U;
	uint8_t x444 = 2U;
	int64_t t75 = -6721104271LL;

	t75 = (x441%(x442%(x443|x444)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x449 = 0;
	int8_t x450 = -1;
	volatile int8_t x451 = INT8_MIN;
	int64_t x452 = -623775LL;
	int64_t t76 = 483187738048132816LL;

	t76 = (x449%(x450%(x451|x452)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x453 = 0U;
	int64_t x454 = INT64_MIN;
	volatile int32_t x455 = INT32_MIN;

	t77 = (x453%(x454%(x455|x456)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x457 = -1LL;
	static uint16_t x458 = UINT16_MAX;

	t78 = (x457%(x458%(x459|x460)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x465 = -1;
	int32_t x466 = 103168;
	int8_t x467 = INT8_MAX;

	t79 = (x465%(x466%(x467|x468)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x473 = -1;
	static int32_t x474 = -1;
	uint32_t x476 = 1062078U;

	t80 = (x473%(x474%(x475|x476)));

	if (t80 != 145443U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x479 = INT8_MAX;
	int16_t x480 = INT16_MAX;
	volatile int32_t t81 = 140;

	t81 = (x477%(x478%(x479|x480)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x481 = 636U;
	int8_t x482 = -6;
	uint8_t x483 = UINT8_MAX;
	uint64_t x484 = 277560036514379997LLU;
	volatile uint64_t t82 = 7711603398563LLU;

	t82 = (x481%(x482%(x483|x484)));

	if (t82 != 636LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x493 = 336030172163914067LLU;
	volatile uint32_t x496 = 37729U;
	uint64_t t83 = 727539107385328LLU;

	t83 = (x493%(x494%(x495|x496)));

	if (t83 != 24087LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x501 = INT32_MIN;
	int16_t x502 = -1;
	uint16_t x503 = UINT16_MAX;
	int64_t t84 = -315733804068131510LL;

	t84 = (x501%(x502%(x503|x504)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x507 = INT64_MAX;
	static uint32_t x508 = UINT32_MAX;
	uint64_t t85 = 49LLU;

	t85 = (x505%(x506%(x507|x508)));

	if (t85 != 6168LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x510 = INT32_MAX;
	volatile int64_t x512 = INT64_MIN;
	volatile int64_t t86 = -696683LL;

	t86 = (x509%(x510%(x511|x512)));

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x513 = INT32_MIN;
	volatile int64_t x514 = 10600166402LL;
	int8_t x516 = 57;
	volatile int64_t t87 = -48009080733499LL;

	t87 = (x513%(x514%(x515|x516)));

	if (t87 != -2480LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x517 = 17081U;
	int8_t x518 = INT8_MIN;
	uint8_t x520 = 26U;

	t88 = (x517%(x518%(x519|x520)));

	if (t88 != 17) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x521 = UINT16_MAX;
	int8_t x523 = INT8_MAX;
	int16_t x524 = 80;

	t89 = (x521%(x522%(x523|x524)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x529 = 518;
	static int8_t x530 = INT8_MAX;
	static int16_t x531 = -7906;

	t90 = (x529%(x530%(x531|x532)));

	if (t90 != 10U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x533 = -1;
	static int16_t x534 = INT16_MIN;
	int64_t x535 = 52928LL;
	volatile uint8_t x536 = 4U;
	int64_t t91 = 18LL;

	t91 = (x533%(x534%(x535|x536)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x537 = 972037438826124LLU;
	static uint16_t x539 = 3592U;
	int16_t x540 = INT16_MIN;
	uint64_t t92 = 9LLU;

	t92 = (x537%(x538%(x539|x540)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x542 = 904047918520276913LLU;
	static int8_t x544 = INT8_MAX;
	volatile uint64_t t93 = 5813153009LLU;

	t93 = (x541%(x542%(x543|x544)));

	if (t93 != 365785703304013228LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x545 = UINT32_MAX;
	volatile int16_t x546 = INT16_MIN;
	static int32_t x548 = INT32_MIN;
	uint64_t t94 = 4455942706157514608LLU;

	t94 = (x545%(x546%(x547|x548)));

	if (t94 != 488325LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x549 = 4U;
	int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MAX;
	static uint64_t x552 = 9131673210LLU;

	t95 = (x549%(x550%(x551|x552)));

	if (t95 != 4LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x553 = INT64_MIN;
	int32_t x554 = 15;
	volatile uint32_t x555 = UINT32_MAX;
	int16_t x556 = -1;
	static volatile int64_t t96 = 216048060633611119LL;

	t96 = (x553%(x554%(x555|x556)));

	if (t96 != -8LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x557 = UINT16_MAX;
	static volatile int16_t x558 = -1014;
	volatile uint8_t x559 = 1U;
	volatile int8_t x560 = INT8_MIN;
	volatile int32_t t97 = 45;

	t97 = (x557%(x558%(x559|x560)));

	if (t97 != 35) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x561 = INT8_MAX;
	uint8_t x562 = 72U;
	static int16_t x564 = INT16_MIN;
	volatile int32_t t98 = 2;

	t98 = (x561%(x562%(x563|x564)));

	if (t98 != 55) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x565 = INT32_MIN;
	uint32_t x568 = UINT32_MAX;
	volatile int64_t t99 = -909570LL;

	t99 = (x565%(x566%(x567|x568)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

