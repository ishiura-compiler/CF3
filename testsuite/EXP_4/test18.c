#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x19 = -7020;
static volatile int8_t x27 = -1;
uint64_t x34 = 6133858029133944646LLU;
static int8_t x36 = 1;
uint8_t x37 = 38U;
int16_t x38 = INT16_MIN;
int64_t x40 = -57LL;
static int32_t x48 = 7035;
uint64_t x49 = 6615864LLU;
static volatile uint64_t t8 = 1373763LLU;
uint16_t x55 = 7U;
volatile int8_t x56 = INT8_MIN;
int64_t t9 = 2125602599LL;
int8_t x65 = 7;
static uint64_t x78 = 22825LLU;
int64_t x83 = INT64_MIN;
int64_t x84 = 4421659453197279285LL;
static int8_t x88 = -1;
int64_t t14 = 193259923423136LL;
int32_t x104 = -1;
uint32_t x105 = UINT32_MAX;
int8_t x106 = INT8_MIN;
int64_t t19 = 64071LL;
volatile int32_t x124 = -992430350;
int16_t x134 = INT16_MIN;
int16_t x135 = INT16_MAX;
uint16_t x144 = 82U;
int64_t t24 = -2LL;
uint16_t x145 = 9U;
uint16_t x150 = 7U;
volatile int16_t x156 = INT16_MAX;
int64_t x157 = 129870483131724343LL;
int64_t t28 = 336803161071LL;
static uint32_t x161 = 1U;
uint32_t t29 = 178779095U;
int8_t x167 = 45;
uint8_t x176 = 7U;
int32_t x178 = -1;
int64_t t32 = 308LL;
volatile int32_t x182 = -1;
int16_t x190 = 8;
int32_t x192 = INT32_MIN;
uint8_t x193 = 2U;
int64_t x194 = INT64_MIN;
int64_t x195 = -1LL;
int8_t x197 = 1;
int64_t x199 = 968LL;
uint16_t x207 = 460U;
int32_t t40 = -895;
int16_t x217 = INT16_MIN;
int8_t x231 = INT8_MAX;
int32_t x232 = 5119262;
int16_t x237 = INT16_MIN;
volatile int64_t x239 = -5962LL;
int8_t x242 = INT8_MAX;
static int8_t x243 = INT8_MAX;
uint64_t x245 = UINT64_MAX;
volatile int32_t x247 = -1;
volatile uint64_t t48 = 4247506522LLU;
int16_t x261 = 192;
static uint8_t x264 = 20U;
volatile uint8_t x270 = UINT8_MAX;
int64_t x278 = INT64_MIN;
volatile uint64_t t54 = 217765448648520LLU;
static volatile uint8_t x290 = 90U;
int64_t t55 = -4281LL;
volatile int16_t x302 = INT16_MIN;
volatile uint64_t x304 = UINT64_MAX;
static int16_t x309 = -243;
int32_t x314 = INT32_MIN;
static int32_t t62 = 0;
uint64_t x339 = 79592LLU;
uint16_t x340 = 1U;
int8_t x349 = INT8_MIN;
int32_t t67 = 26909106;
int64_t x357 = INT64_MIN;
uint16_t x359 = UINT16_MAX;
volatile int64_t t69 = -1644669751641LL;
static int64_t t70 = 35LL;
static volatile uint32_t x371 = UINT32_MAX;
int32_t t72 = 2;
int32_t x379 = INT32_MAX;
volatile uint64_t t75 = 33524974742LLU;
volatile uint64_t x391 = UINT64_MAX;
int32_t x393 = INT32_MAX;
uint16_t x395 = 2U;
volatile int8_t x396 = INT8_MAX;
uint64_t x400 = 16103918071798LLU;
int16_t x411 = 908;
volatile uint64_t t82 = 50630653802501LLU;
uint64_t t83 = 3487028743600160LLU;
int64_t t84 = -30087372LL;
int8_t x435 = 1;
volatile uint64_t t87 = 10LLU;
int32_t t89 = -419;
int64_t t91 = -402067349292230LL;
int32_t x497 = -1;
static uint16_t x503 = 18U;
int16_t x505 = -4;
int64_t x508 = -3990037921LL;
int32_t x510 = 1672;


void f0(void) {
	int16_t x9 = 113;
	static uint16_t x10 = 20395U;
	int32_t x11 = INT32_MIN;
	int32_t x12 = 4180888;
	int32_t t0 = 0;

	t0 = (x9%(x10-(x11+x12)));

	if (t0 != 113) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = -1;
	int16_t x18 = INT16_MIN;
	uint8_t x20 = 124U;
	volatile int32_t t1 = 89151761;

	t1 = (x17%(x18-(x19+x20)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 18U;
	static volatile uint32_t x22 = 761968996U;
	static uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 1445030U;
	static volatile uint32_t t2 = 0U;

	t2 = (x21%(x22-(x23+x24)));

	if (t2 != 18U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	volatile uint8_t x28 = UINT8_MAX;
	volatile int32_t t3 = -449100;

	t3 = (x25%(x26-(x27+x28)));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x35 = 6220057U;
	static volatile uint64_t t4 = 1888LLU;

	t4 = (x33%(x34-(x35+x36)));

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x39 = 7313;
	int64_t t5 = -998485790986993LL;

	t5 = (x37%(x38-(x39+x40)));

	if (t5 != 38LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x41 = UINT32_MAX;
	static int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	static uint8_t x44 = 25U;
	static uint32_t t6 = 754126183U;

	t6 = (x41%(x42-(x43+x44)));

	if (t6 != 2703U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -446533LL;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = INT16_MIN;
	int64_t t7 = 254376LL;

	t7 = (x45%(x46-(x47+x48)));

	if (t7 != -4737LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x50 = INT8_MIN;
	int32_t x51 = 6573985;
	static int64_t x52 = 98011031LL;

	t8 = (x49%(x50-(x51+x52)));

	if (t8 != 6615864LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = INT64_MIN;

	t9 = (x53%(x54-(x55+x56)));

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 498084LLU;
	uint64_t x58 = 421074187858LLU;
	static volatile uint64_t x59 = 10286LLU;
	static int64_t x60 = 15395387LL;
	volatile uint64_t t10 = 805008LLU;

	t10 = (x57%(x58-(x59+x60)));

	if (t10 != 498084LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x66 = -1;
	static uint8_t x67 = UINT8_MAX;
	static int8_t x68 = -1;
	int32_t t11 = -20725;

	t11 = (x65%(x66-(x67+x68)));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x77 = 52237974;
	uint8_t x79 = UINT8_MAX;
	static int16_t x80 = -12955;
	volatile uint64_t t12 = 820LLU;

	t12 = (x77%(x78-(x79+x80)));

	if (t12 != 16224LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x81 = INT16_MIN;
	static uint32_t x82 = 1944465U;
	int64_t t13 = 50203145LL;

	t13 = (x81%(x82-(x83+x84)));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;

	t14 = (x85%(x86-(x87+x88)));

	if (t14 != -18310LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	uint8_t x92 = 7U;
	volatile uint64_t t15 = 106822359102338LLU;

	t15 = (x89%(x90-(x91+x92)));

	if (t15 != 72899LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = INT32_MIN;
	volatile int16_t x94 = -10;
	uint16_t x95 = 111U;
	int16_t x96 = 16;
	volatile int32_t t16 = -1044201;

	t16 = (x93%(x94-(x95+x96)));

	if (t16 != -17) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = 21463U;
	static volatile uint64_t x102 = 2629LLU;
	int16_t x103 = INT16_MIN;
	uint64_t t17 = 5663LLU;

	t17 = (x101%(x102-(x103+x104)));

	if (t17 != 21463LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x107 = 693732672U;
	int16_t x108 = INT16_MIN;
	volatile uint32_t t18 = 0U;

	t18 = (x105%(x106-(x107+x108)));

	if (t18 != 693700031U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x109 = -8615268;
	volatile int64_t x110 = INT64_MAX;
	uint8_t x111 = 1U;
	uint32_t x112 = 2725361U;

	t19 = (x109%(x110-(x111+x112)));

	if (t19 != -8615268LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = 857331;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = 263200908109LLU;
	volatile uint64_t t20 = 1201169098LLU;

	t20 = (x121%(x122-(x123+x124)));

	if (t20 != 857331LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MAX;
	static int8_t x127 = -1;
	int8_t x128 = 11;
	volatile int32_t t21 = -1;

	t21 = (x125%(x126-(x127+x128)));

	if (t21 != -11) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x136 = INT16_MAX;
	volatile int32_t t22 = -54464;

	t22 = (x133%(x134-(x135+x136)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = INT8_MIN;
	static int64_t x138 = -216222816955LL;
	uint8_t x139 = 2U;
	uint16_t x140 = 25763U;
	static volatile int64_t t23 = 2106523513839390LL;

	t23 = (x137%(x138-(x139+x140)));

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = INT8_MAX;
	static int64_t x142 = INT64_MAX;
	uint8_t x143 = 4U;

	t24 = (x141%(x142-(x143+x144)));

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x146 = -1;
	int64_t x147 = -1022296LL;
	static int16_t x148 = INT16_MIN;
	int64_t t25 = -91750060493916LL;

	t25 = (x145%(x146-(x147+x148)));

	if (t25 != 9LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = INT64_MIN;
	int8_t x151 = -1;
	int32_t x152 = -927;
	int64_t t26 = 30637052LL;

	t26 = (x149%(x150-(x151+x152)));

	if (t26 != -723LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x153 = -1;
	int64_t x154 = 11LL;
	int8_t x155 = -10;
	static int64_t t27 = 102343LL;

	t27 = (x153%(x154-(x155+x156)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x158 = INT16_MAX;
	volatile uint16_t x159 = 460U;
	uint32_t x160 = 1456980U;

	t28 = (x157%(x158-(x159+x160)));

	if (t28 != 2673644940LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x162 = 0;
	uint8_t x163 = 5U;
	int8_t x164 = INT8_MIN;

	t29 = (x161%(x162-(x163+x164)));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = -1;
	int8_t x166 = INT8_MIN;
	uint64_t x168 = 11LLU;
	static uint64_t t30 = 159404835214120644LLU;

	t30 = (x165%(x166-(x167+x168)));

	if (t30 != 183LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MAX;
	volatile int64_t x174 = 50059366153500532LL;
	int8_t x175 = INT8_MIN;
	volatile int64_t t31 = 10826746571357658LL;

	t31 = (x173%(x174-(x175+x176)));

	if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x177 = 2U;
	uint16_t x179 = 11U;
	static volatile int64_t x180 = 65615006436452314LL;

	t32 = (x177%(x178-(x179+x180)));

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = INT8_MIN;
	static volatile uint32_t x183 = 5U;
	uint32_t x184 = UINT32_MAX;
	uint32_t t33 = 1341474U;

	t33 = (x181%(x182-(x183+x184)));

	if (t33 != 4294967168U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x185 = INT64_MIN;
	int8_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = -12;
	static volatile int64_t t34 = 23133LL;

	t34 = (x185%(x186-(x187+x188)));

	if (t34 != -10368LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x189 = -1;
	int64_t x191 = INT64_MAX;
	volatile int64_t t35 = 2011732298480LL;

	t35 = (x189%(x190-(x191+x192)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x196 = -4;
	int64_t t36 = 278316891990LL;

	t36 = (x193%(x194-(x195+x196)));

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x198 = 3;
	static volatile int32_t x200 = INT32_MAX;
	static volatile int64_t t37 = 5454LL;

	t37 = (x197%(x198-(x199+x200)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = 1U;
	int64_t x202 = 1781LL;
	int16_t x203 = INT16_MIN;
	volatile uint8_t x204 = UINT8_MAX;
	volatile int64_t t38 = -4121775161LL;

	t38 = (x201%(x202-(x203+x204)));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x205 = INT32_MIN;
	int64_t x206 = -1024135LL;
	int64_t x208 = 92973LL;
	static int64_t t39 = 210575694888591498LL;

	t39 = (x205%(x206-(x207+x208)));

	if (t39 != -635520LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = INT8_MAX;
	static int32_t x211 = -1;
	int8_t x212 = INT8_MIN;

	t40 = (x209%(x210-(x211+x212)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = -1828158400427100277LL;
	int8_t x214 = -1;
	int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MAX;
	int64_t t41 = -1LL;

	t41 = (x213%(x214-(x215+x216)));

	if (t41 != -23062LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x218 = 1471851512LLU;
	static volatile int16_t x219 = 46;
	static uint8_t x220 = 7U;
	uint64_t t42 = 1594516437883LLU;

	t42 = (x217%(x218-(x219+x220)));

	if (t42 != 775641212LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x221 = -1;
	int64_t x222 = INT64_MIN;
	int32_t x223 = 9480;
	int16_t x224 = INT16_MIN;
	int64_t t43 = -543967420739186700LL;

	t43 = (x221%(x222-(x223+x224)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = UINT64_MAX;
	uint32_t x230 = 213U;
	uint64_t t44 = 6037785LLU;

	t44 = (x229%(x230-(x231+x232)));

	if (t44 != 3570602015LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x233 = -2286;
	int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = UINT16_MAX;
	static uint64_t x236 = UINT64_MAX;
	uint64_t t45 = 354194705968199LLU;

	t45 = (x233%(x234-(x235+x236)));

	if (t45 != 2147546896LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x238 = INT32_MAX;
	int8_t x240 = INT8_MIN;
	int64_t t46 = 85100421222761LL;

	t46 = (x237%(x238-(x239+x240)));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = 15LL;
	uint8_t x244 = UINT8_MAX;
	int64_t t47 = 20LL;

	t47 = (x241%(x242-(x243+x244)));

	if (t47 != 15LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x246 = INT16_MAX;
	int32_t x248 = -958;

	t48 = (x245%(x246-(x247+x248)));

	if (t48 != 19419LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = 0;
	uint32_t t49 = 12101U;

	t49 = (x261%(x262-(x263+x264)));

	if (t49 != 192U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int64_t x266 = -30775304146LL;
	int8_t x267 = -1;
	static int8_t x268 = -1;
	int64_t t50 = 0LL;

	t50 = (x265%(x266-(x267+x268)));

	if (t50 != 65535LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x269 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	int8_t x272 = 5;
	static volatile int32_t t51 = 978;

	t51 = (x269%(x270-(x271+x272)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x277 = -1LL;
	int32_t x279 = 8;
	static int8_t x280 = INT8_MIN;
	int64_t t52 = 181LL;

	t52 = (x277%(x278-(x279+x280)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = -82;
	uint8_t x282 = 5U;
	int32_t x283 = 0;
	static volatile int16_t x284 = INT16_MAX;
	static int32_t t53 = -329;

	t53 = (x281%(x282-(x283+x284)));

	if (t53 != -82) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x285 = 23;
	int64_t x286 = INT64_MAX;
	int16_t x287 = 2;
	static uint64_t x288 = UINT64_MAX;

	t54 = (x285%(x286-(x287+x288)));

	if (t54 != 23LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x289 = INT64_MIN;
	volatile int64_t x291 = 332382837LL;
	int64_t x292 = -1LL;

	t55 = (x289%(x290-(x291+x292)));

	if (t55 != -97425280LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x301 = 54U;
	static int8_t x303 = -1;
	static volatile uint64_t t56 = 113431120209241039LLU;

	t56 = (x301%(x302-(x303+x304)));

	if (t56 != 54LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x305 = -1;
	int32_t x306 = -2825141;
	int16_t x307 = INT16_MIN;
	int16_t x308 = 241;
	int32_t t57 = 23646503;

	t57 = (x305%(x306-(x307+x308)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x310 = UINT64_MAX;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = INT16_MAX;
	volatile uint64_t t58 = 33441166LLU;

	t58 = (x309%(x310-(x311+x312)));

	if (t58 != 32780LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x313 = -41;
	int8_t x315 = INT8_MIN;
	volatile int32_t x316 = -1;
	volatile int32_t t59 = 3663688;

	t59 = (x313%(x314-(x315+x316)));

	if (t59 != -41) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MIN;
	uint8_t x319 = 108U;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t60 = 6190041;

	t60 = (x317%(x318-(x319+x320)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x321 = 222340U;
	static int64_t x322 = INT64_MIN;
	volatile int64_t x323 = INT64_MIN;
	uint16_t x324 = 1U;
	static volatile int64_t t61 = -6273LL;

	t61 = (x321%(x322-(x323+x324)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = 1;
	uint16_t x326 = UINT16_MAX;
	int32_t x327 = -17693;
	volatile uint8_t x328 = 13U;

	t62 = (x325%(x326-(x327+x328)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x329 = 7630U;
	uint32_t x330 = 316843052U;
	static uint8_t x331 = 4U;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t63 = 34U;

	t63 = (x329%(x330-(x331+x332)));

	if (t63 != 7630U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x333 = INT32_MIN;
	volatile int64_t x334 = INT64_MIN;
	uint16_t x335 = 79U;
	int64_t x336 = INT64_MIN;
	int64_t t64 = -95LL;

	t64 = (x333%(x334-(x335+x336)));

	if (t64 != -25LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MAX;
	uint64_t t65 = 125662LLU;

	t65 = (x337%(x338-(x339+x340)));

	if (t65 != 65535LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x341 = -10551;
	int8_t x342 = 31;
	uint64_t x343 = 136950676465LLU;
	int16_t x344 = INT16_MAX;
	static volatile uint64_t t66 = 128626767960LLU;

	t66 = (x341%(x342-(x343+x344)));

	if (t66 != 136950698650LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x350 = 9U;
	uint16_t x351 = 0U;
	int16_t x352 = 949;

	t67 = (x349%(x350-(x351+x352)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x353 = 75U;
	static volatile uint32_t x354 = UINT32_MAX;
	static int32_t x355 = INT32_MAX;
	int64_t x356 = 9LL;
	volatile int64_t t68 = 1591716268LL;

	t68 = (x353%(x354-(x355+x356)));

	if (t68 != 75LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x358 = -1;
	volatile int8_t x360 = 11;

	t69 = (x357%(x358-(x359+x360)));

	if (t69 != -40094LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x365 = 1U;
	int16_t x366 = -189;
	int64_t x367 = -941646957035259770LL;
	uint8_t x368 = 1U;

	t70 = (x365%(x366-(x367+x368)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x369 = UINT32_MAX;
	static int32_t x370 = -81160392;
	int64_t x372 = INT64_MIN;
	volatile int64_t t71 = 1LL;

	t71 = (x369%(x370-(x371+x372)));

	if (t71 != 4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x373 = 8450U;
	static int32_t x374 = -1;
	static volatile uint16_t x375 = 13U;
	volatile int8_t x376 = -1;

	t72 = (x373%(x374-(x375+x376)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x377 = -1;
	uint16_t x378 = 6U;
	uint8_t x380 = 0U;
	volatile int32_t t73 = -178;

	t73 = (x377%(x378-(x379+x380)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x381 = 1591436LLU;
	int32_t x382 = -1;
	int16_t x383 = 0;
	int64_t x384 = INT64_MIN;
	uint64_t t74 = 58LLU;

	t74 = (x381%(x382-(x383+x384)));

	if (t74 != 1591436LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x385 = 15947279LLU;
	volatile int8_t x386 = 7;
	uint8_t x387 = 3U;
	uint16_t x388 = 16610U;

	t75 = (x385%(x386-(x387+x388)));

	if (t75 != 15947279LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x389 = 26244925170762LL;
	static int16_t x390 = -7;
	uint64_t x392 = 3118583LLU;
	uint64_t t76 = 4871LLU;

	t76 = (x389%(x390-(x391+x392)));

	if (t76 != 26244925170762LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x394 = -1;
	static volatile int32_t t77 = -2317;

	t77 = (x393%(x394-(x395+x396)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x397 = INT32_MIN;
	volatile uint8_t x398 = 23U;
	volatile int64_t x399 = INT64_MAX;
	static volatile uint64_t t78 = 310218946968569LLU;

	t78 = (x397%(x398-(x399+x400)));

	if (t78 != 32205688659900LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x401 = INT32_MIN;
	int32_t x402 = -3256;
	uint32_t x403 = 508U;
	volatile uint64_t x404 = UINT64_MAX;
	static volatile uint64_t t79 = 19LLU;

	t79 = (x401%(x402-(x403+x404)));

	if (t79 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x405 = INT64_MAX;
	volatile uint32_t x406 = 892U;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MAX;
	static int64_t t80 = -745859LL;

	t80 = (x405%(x406-(x407+x408)));

	if (t80 != 834LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x409 = UINT64_MAX;
	int16_t x410 = 744;
	int32_t x412 = INT32_MIN;
	static uint64_t t81 = 12137294763LLU;

	t81 = (x409%(x410-(x411+x412)));

	if (t81 != 107583LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x417 = UINT64_MAX;
	volatile uint64_t x418 = UINT64_MAX;
	static uint16_t x419 = UINT16_MAX;
	uint64_t x420 = UINT64_MAX;

	t82 = (x417%(x418-(x419+x420)));

	if (t82 != 65534LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x421 = -55;
	uint64_t x422 = UINT64_MAX;
	uint64_t x423 = UINT64_MAX;
	static int32_t x424 = INT32_MIN;

	t83 = (x421%(x422-(x423+x424)));

	if (t83 != 2147483593LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x429 = INT64_MAX;
	int8_t x430 = INT8_MIN;
	static uint16_t x431 = UINT16_MAX;
	int8_t x432 = INT8_MIN;

	t84 = (x429%(x430-(x431+x432)));

	if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x433 = INT32_MAX;
	uint64_t x434 = UINT64_MAX;
	static volatile uint16_t x436 = 0U;
	volatile uint64_t t85 = 22989496534682LLU;

	t85 = (x433%(x434-(x435+x436)));

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x437 = 9LLU;
	int16_t x438 = -1;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MIN;
	static volatile uint64_t t86 = 117505178LLU;

	t86 = (x437%(x438-(x439+x440)));

	if (t86 != 9LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x441 = 5LLU;
	static uint32_t x442 = 6374U;
	int8_t x443 = -3;
	int64_t x444 = INT64_MAX;

	t87 = (x441%(x442-(x443+x444)));

	if (t87 != 5LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x449 = UINT64_MAX;
	int16_t x450 = INT16_MIN;
	int32_t x451 = -1;
	int16_t x452 = -1;
	uint64_t t88 = 420LLU;

	t88 = (x449%(x450-(x451+x452)));

	if (t88 != 32765LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x461 = -24;
	uint16_t x462 = 12U;
	int8_t x463 = 53;
	int32_t x464 = -680;

	t89 = (x461%(x462-(x463+x464)));

	if (t89 != -24) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = 15299749U;
	uint64_t x466 = 470376LLU;
	uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MIN;
	volatile uint64_t t90 = 137188LLU;

	t90 = (x465%(x466-(x467+x468)));

	if (t90 != 213079LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x469 = 172U;
	int32_t x470 = INT32_MAX;
	volatile int16_t x471 = INT16_MIN;
	int64_t x472 = INT64_MAX;

	t91 = (x469%(x470-(x471+x472)));

	if (t91 != 172LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x473 = 709605U;
	volatile int32_t x474 = -258927;
	uint16_t x475 = 213U;
	volatile int64_t x476 = -1LL;
	volatile int64_t t92 = 973251707541368LL;

	t92 = (x473%(x474-(x475+x476)));

	if (t92 != 191327LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x477 = UINT64_MAX;
	volatile int64_t x478 = -1LL;
	static int64_t x479 = 8438182LL;
	int8_t x480 = INT8_MIN;
	uint64_t t93 = 14821809962669831LLU;

	t93 = (x477%(x478-(x479+x480)));

	if (t93 != 8438054LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x485 = INT64_MIN;
	int32_t x486 = 386106678;
	uint32_t x487 = 6149U;
	uint64_t x488 = UINT64_MAX;
	uint64_t t94 = 2243230541LLU;

	t94 = (x485%(x486-(x487+x488)));

	if (t94 != 77499648LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x489 = UINT8_MAX;
	volatile int16_t x490 = INT16_MAX;
	static int32_t x491 = INT32_MAX;
	uint64_t x492 = 11LLU;
	volatile uint64_t t95 = 554626463876407LLU;

	t95 = (x489%(x490-(x491+x492)));

	if (t95 != 255LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x498 = -1LL;
	int64_t x499 = -1LL;
	static uint8_t x500 = 7U;
	volatile int64_t t96 = -172172408153942LL;

	t96 = (x497%(x498-(x499+x500)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MIN;
	int8_t x504 = -5;
	volatile int32_t t97 = -2058;

	t97 = (x501%(x502-(x503+x504)));

	if (t97 != -68) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x506 = INT16_MIN;
	volatile uint64_t x507 = UINT64_MAX;
	static volatile uint64_t t98 = 62LLU;

	t98 = (x505%(x506-(x507+x508)));

	if (t98 != 3100095588LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x509 = 136863699U;
	uint64_t x511 = 1069465027786630114LLU;
	int8_t x512 = 4;
	static uint64_t t99 = 131LLU;

	t99 = (x509%(x510-(x511+x512)));

	if (t99 != 136863699LLU) { NG(); } else { ; }
	
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

