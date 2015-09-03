#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -3263484834223LL;
int32_t x3 = 541199;
volatile int64_t t0 = -3663104765176692873LL;
int64_t x6 = INT64_MAX;
static uint64_t x7 = 56540136LLU;
volatile int32_t x11 = INT32_MIN;
static uint8_t x17 = 27U;
int32_t x19 = INT32_MIN;
uint32_t t3 = 44U;
uint16_t x23 = 209U;
uint8_t x25 = UINT8_MAX;
uint8_t x34 = UINT8_MAX;
static int8_t x35 = INT8_MIN;
int16_t x41 = -1;
static int64_t x51 = -1LL;
static int32_t x58 = -1;
volatile int8_t x59 = INT8_MIN;
volatile int32_t t11 = -5;
static int8_t x64 = -3;
uint32_t t13 = 3458U;
uint16_t x86 = UINT16_MAX;
int64_t t16 = -1LL;
volatile uint16_t x92 = UINT16_MAX;
volatile int32_t t18 = -63944;
int8_t x114 = -2;
static int64_t x117 = INT64_MIN;
static volatile int64_t t21 = -535707780823LL;
int32_t t22 = 1397737;
uint64_t x133 = 87LLU;
int64_t x141 = INT64_MIN;
volatile int64_t x155 = 5LL;
volatile int64_t t27 = 6133537645LL;
int8_t x169 = INT8_MIN;
int32_t x170 = 1;
uint64_t t29 = 146LLU;
int8_t x182 = INT8_MIN;
volatile int16_t x183 = -1;
volatile uint32_t t31 = 4158758U;
static int16_t x198 = -1;
volatile uint64_t x199 = UINT64_MAX;
static uint16_t x201 = 4316U;
int64_t t34 = -45LL;
static int32_t x205 = -1;
static volatile int16_t x209 = 1;
volatile int32_t x212 = INT32_MAX;
int16_t x218 = 1;
volatile uint16_t x220 = 2852U;
uint64_t x224 = UINT64_MAX;
uint64_t t39 = 14905118572LLU;
int16_t x227 = INT16_MIN;
static int16_t x229 = INT16_MIN;
uint64_t x230 = 33237625356378596LLU;
int8_t x253 = INT8_MAX;
volatile uint64_t x267 = 11361LLU;
volatile uint64_t t47 = 115015343575LLU;
int8_t x271 = INT8_MIN;
uint64_t t48 = 257702095LLU;
static volatile int32_t t49 = -76119176;
static int32_t x278 = 1264115;
int64_t t50 = -182500LL;
int64_t x291 = -1LL;
volatile uint64_t t52 = 194033904LLU;
volatile int16_t x296 = INT16_MIN;
int8_t x334 = 15;
uint8_t x335 = 2U;
static uint8_t x336 = 24U;
uint8_t x338 = UINT8_MAX;
static int32_t x345 = INT32_MAX;
volatile int32_t x348 = INT32_MIN;
int32_t t60 = -57;
volatile int32_t x362 = 50;
int8_t x363 = INT8_MIN;
static volatile int32_t x389 = -5837578;
static int32_t x406 = INT32_MIN;
volatile uint32_t x409 = UINT32_MAX;
volatile int8_t x412 = INT8_MIN;
volatile uint64_t t70 = 4LLU;
int16_t x421 = 23;
int8_t x423 = INT8_MIN;
static uint16_t x430 = UINT16_MAX;
int64_t x452 = -1LL;
uint8_t x464 = 2U;
int64_t t77 = 17868LL;
int8_t x477 = 0;
uint32_t t81 = 19369202U;
int64_t x485 = INT64_MIN;
int64_t x502 = 830183008LL;
volatile int64_t t85 = -29101LL;
int16_t x507 = -2085;
volatile uint64_t x518 = 4800LLU;
int64_t x521 = -1LL;
uint32_t x526 = 461065572U;
int16_t x527 = INT16_MAX;
volatile uint64_t t90 = 2842LLU;
int8_t x531 = INT8_MIN;
uint64_t t91 = 301190640LLU;
static int8_t x547 = INT8_MIN;
volatile int8_t x549 = -1;
static uint64_t x556 = 9752091724812LLU;


void f0(void) {
	int8_t x2 = 0;
	uint8_t x4 = 1U;

	t0 = (x1&((x2*x3)/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 6;
	int64_t x8 = INT64_MAX;
	volatile uint64_t t1 = 2055762228106LLU;

	t1 = (x5&((x6*x7)/x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = 767LLU;
	int8_t x12 = INT8_MIN;
	uint64_t t2 = 149LLU;

	t2 = (x9&((x10*x11)/x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 695U;
	int16_t x20 = INT16_MIN;

	t3 = (x17&((x18*x19)/x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile uint8_t x22 = UINT8_MAX;
	static int64_t x24 = -1176362LL;
	volatile int64_t t4 = 217882119111LL;

	t4 = (x21&((x22*x23)/x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x26 = 1U;
	static int64_t x27 = -1166345367LL;
	static volatile int8_t x28 = -1;
	volatile int64_t t5 = -107066016521300LL;

	t5 = (x25&((x26*x27)/x28));

	if (t5 != 151LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = UINT32_MAX;
	static int32_t x36 = INT32_MIN;
	uint32_t t6 = 18767419U;

	t6 = (x33&((x34*x35)/x36));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = 1947;
	int8_t x43 = -1;
	volatile uint16_t x44 = 3U;
	volatile int32_t t7 = 7946;

	t7 = (x41&((x42*x43)/x44));

	if (t7 != -649) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MAX;
	static int64_t x47 = -1LL;
	static int16_t x48 = -3789;
	int64_t t8 = -529666562335808LL;

	t8 = (x45&((x46*x47)/x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	uint64_t x52 = 573598346855885415LLU;
	uint64_t t9 = 67758LLU;

	t9 = (x49&((x50*x51)/x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = -1;
	int8_t x54 = 45;
	int16_t x55 = -1;
	volatile uint16_t x56 = UINT16_MAX;
	int32_t t10 = 0;

	t10 = (x53&((x54*x55)/x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x57 = INT8_MIN;
	int32_t x60 = -2186;

	t11 = (x57&((x58*x59)/x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	volatile int8_t x62 = INT8_MIN;
	static int8_t x63 = -1;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x61&((x62*x63)/x64));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	uint32_t x66 = UINT32_MAX;
	static int8_t x67 = INT8_MAX;
	static uint16_t x68 = UINT16_MAX;

	t13 = (x65&((x66*x67)/x68));

	if (t13 != 65536U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = -1;
	static int32_t x79 = 6970336;
	int8_t x80 = INT8_MIN;
	volatile int64_t t14 = 2LL;

	t14 = (x77&((x78*x79)/x80));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x81 = -1LL;
	int8_t x82 = INT8_MIN;
	static int8_t x83 = 9;
	static int64_t x84 = -1LL;
	volatile int64_t t15 = -209582525090213LL;

	t15 = (x81&((x82*x83)/x84));

	if (t15 != 1152LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -1LL;
	int16_t x87 = 2155;
	int16_t x88 = -615;

	t16 = (x85&((x86*x87)/x88));

	if (t16 != -229638LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = 43450U;
	uint16_t x91 = UINT16_MAX;
	volatile uint32_t t17 = 1U;

	t17 = (x89&((x90*x91)/x92));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	static volatile int8_t x94 = 3;
	static int16_t x95 = INT16_MIN;
	volatile int8_t x96 = INT8_MAX;

	t18 = (x93&((x94*x95)/x96));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = 0;
	static int32_t x106 = -1;
	int32_t x107 = -1;
	static int32_t x108 = -1;
	int32_t t19 = 0;

	t19 = (x105&((x106*x107)/x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = -1;
	static int16_t x115 = -1;
	volatile int64_t x116 = INT64_MIN;
	int64_t t20 = 4LL;

	t20 = (x113&((x114*x115)/x116));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x118 = 0U;
	int8_t x119 = -4;
	int64_t x120 = -1LL;

	t21 = (x117&((x118*x119)/x120));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = INT8_MIN;
	static uint8_t x122 = 5U;
	int8_t x123 = 1;
	uint8_t x124 = 82U;

	t22 = (x121&((x122*x123)/x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = -1;
	int16_t x126 = -254;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = INT64_MAX;
	static uint64_t t23 = 11797781LLU;

	t23 = (x125&((x126*x127)/x128));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x134 = 396932;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MAX;
	volatile uint64_t t24 = 464262605LLU;

	t24 = (x133&((x134*x135)/x136));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x142 = INT16_MAX;
	static volatile int8_t x143 = 2;
	volatile uint32_t x144 = 841476U;
	static int64_t t25 = -471093230LL;

	t25 = (x141&((x142*x143)/x144));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x149 = 57983U;
	static volatile uint8_t x150 = UINT8_MAX;
	static uint8_t x151 = UINT8_MAX;
	int16_t x152 = -1656;
	static volatile uint32_t t26 = 27U;

	t26 = (x149&((x150*x151)/x152));

	if (t26 != 57945U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x153 = UINT32_MAX;
	uint16_t x154 = 1U;
	int64_t x156 = INT64_MAX;

	t27 = (x153&((x154*x155)/x156));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = -4;
	uint16_t x159 = UINT16_MAX;
	uint32_t x160 = 2U;
	uint32_t t28 = 231555490U;

	t28 = (x157&((x158*x159)/x160));

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MAX;

	t29 = (x169&((x170*x171)/x172));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x174 = -1;
	int8_t x175 = -1;
	volatile int64_t x176 = -13212063LL;
	volatile uint64_t t30 = 3079LLU;

	t30 = (x173&((x174*x175)/x176));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x181 = -411264309;
	uint32_t x184 = 381943055U;

	t31 = (x181&((x182*x183)/x184));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x193 = 8453858871251526LLU;
	static int64_t x194 = -73567879819179863LL;
	int32_t x195 = -1;
	int32_t x196 = -14535960;
	uint64_t t32 = 22LLU;

	t32 = (x193&((x194*x195)/x196));

	if (t32 != 8453853955526656LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x197 = 23475407U;
	static uint32_t x200 = 1026U;
	volatile uint64_t t33 = 2468198056241LLU;

	t33 = (x197&((x198*x199)/x200));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x202 = 4U;
	uint8_t x203 = 3U;
	volatile int64_t x204 = 191LL;

	t34 = (x201&((x202*x203)/x204));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x206 = 7358788939476140LLU;
	uint32_t x207 = UINT32_MAX;
	volatile int8_t x208 = 1;
	static uint64_t t35 = 1066781761LLU;

	t35 = (x205&((x206*x207)/x208));

	if (t35 != 10420423421762016084LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x210 = 5749963U;
	uint8_t x211 = 4U;
	volatile uint32_t t36 = 340U;

	t36 = (x209&((x210*x211)/x212));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x213 = -3787;
	int8_t x214 = -1;
	int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t37 = -2138477;

	t37 = (x213&((x214*x215)/x216));

	if (t37 != -3840) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x217 = -908558243281024305LL;
	uint16_t x219 = 419U;
	int64_t t38 = 238155LL;

	t38 = (x217&((x218*x219)/x220));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MIN;
	int64_t x223 = -1LL;

	t39 = (x221&((x222*x223)/x224));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = INT16_MIN;
	static uint64_t x226 = UINT64_MAX;
	static uint32_t x228 = 667922590U;
	volatile uint64_t t40 = 145LLU;

	t40 = (x225&((x226*x227)/x228));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x231 = INT32_MIN;
	int32_t x232 = 246900551;
	volatile uint64_t t41 = 374398LLU;

	t41 = (x229&((x230*x231)/x232));

	if (t41 != 11010768896LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x233 = INT32_MIN;
	volatile int8_t x234 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	volatile uint8_t x236 = UINT8_MAX;
	int32_t t42 = INT32_MIN;

	t42 = (x233&((x234*x235)/x236));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x241 = 117;
	uint64_t x242 = UINT64_MAX;
	uint8_t x243 = 0U;
	int64_t x244 = -514862988689LL;
	uint64_t t43 = 228011452LLU;

	t43 = (x241&((x242*x243)/x244));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x245 = INT32_MIN;
	uint64_t x246 = 48618LLU;
	volatile int64_t x247 = INT64_MIN;
	int32_t x248 = 2;
	volatile uint64_t t44 = 60LLU;

	t44 = (x245&((x246*x247)/x248));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x254 = 0LLU;
	int16_t x255 = 2395;
	int64_t x256 = INT64_MIN;
	uint64_t t45 = 81716768601LLU;

	t45 = (x253&((x254*x255)/x256));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x257 = -19;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = INT16_MAX;
	int32_t t46 = 0;

	t46 = (x257&((x258*x259)/x260));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x265 = 9;
	int32_t x266 = 1;
	volatile int16_t x268 = -1;

	t47 = (x265&((x266*x267)/x268));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x269 = UINT16_MAX;
	int32_t x270 = -1;
	volatile uint64_t x272 = 114546LLU;

	t48 = (x269&((x270*x271)/x272));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x273 = INT16_MIN;
	uint8_t x274 = 113U;
	int16_t x275 = -1;
	static int16_t x276 = INT16_MIN;

	t49 = (x273&((x274*x275)/x276));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x277 = -1;
	int64_t x279 = -1LL;
	static int64_t x280 = INT64_MAX;

	t50 = (x277&((x278*x279)/x280));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x285 = 82186U;
	int64_t x286 = -5498219LL;
	int32_t x287 = INT32_MAX;
	static int64_t x288 = -1LL;
	int64_t t51 = -2748445751706325LL;

	t51 = (x285&((x286*x287)/x288));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x289 = -1;
	int16_t x290 = -1;
	uint64_t x292 = UINT64_MAX;

	t52 = (x289&((x290*x291)/x292));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x293 = UINT8_MAX;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = 457187;
	uint32_t t53 = 21484U;

	t53 = (x293&((x294*x295)/x296));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x297 = INT64_MIN;
	static int32_t x298 = 0;
	volatile int64_t x299 = INT64_MIN;
	static uint8_t x300 = 8U;
	volatile int64_t t54 = -4144933996215490LL;

	t54 = (x297&((x298*x299)/x300));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = -1;
	int16_t x302 = -1;
	int64_t x303 = -1LL;
	int8_t x304 = 7;
	int64_t t55 = 1LL;

	t55 = (x301&((x302*x303)/x304));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x313 = 7359814LLU;
	static int16_t x314 = -1;
	int16_t x315 = INT16_MAX;
	volatile int8_t x316 = -27;
	volatile uint64_t t56 = 40718698987LLU;

	t56 = (x313&((x314*x315)/x316));

	if (t56 != 1028LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x325 = UINT32_MAX;
	volatile int64_t x326 = 8LL;
	int64_t x327 = -1LL;
	static volatile int16_t x328 = 774;
	volatile int64_t t57 = -123976LL;

	t57 = (x325&((x326*x327)/x328));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x333 = INT8_MIN;
	volatile int32_t t58 = -17;

	t58 = (x333&((x334*x335)/x336));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x337 = 4504U;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t x340 = INT32_MIN;
	volatile uint32_t t59 = 3U;

	t59 = (x337&((x338*x339)/x340));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x346 = 0U;
	uint8_t x347 = UINT8_MAX;

	t60 = (x345&((x346*x347)/x348));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x349 = 1242223482509551LLU;
	uint16_t x350 = 1U;
	uint16_t x351 = 5492U;
	uint32_t x352 = 351641U;
	static volatile uint64_t t61 = 10482530814421051LLU;

	t61 = (x349&((x350*x351)/x352));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x357 = -1;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 287634513645LLU;
	static int32_t x360 = -1;
	static volatile uint64_t t62 = 59855903272853LLU;

	t62 = (x357&((x358*x359)/x360));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x364 = 6416U;
	int32_t t63 = 59698;

	t63 = (x361&((x362*x363)/x364));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x377 = 562073;
	int8_t x378 = INT8_MIN;
	int16_t x379 = -1;
	uint16_t x380 = 4U;
	volatile int32_t t64 = -1009500768;

	t64 = (x377&((x378*x379)/x380));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = -3;
	uint64_t x387 = 506LLU;
	uint8_t x388 = 30U;
	volatile uint64_t t65 = 7005473409LLU;

	t65 = (x385&((x386*x387)/x388));

	if (t65 != 2290649173LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x390 = INT16_MAX;
	int16_t x391 = 1;
	static uint32_t x392 = 2975946U;
	volatile uint32_t t66 = 2U;

	t66 = (x389&((x390*x391)/x392));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x405 = -1078;
	uint32_t x407 = 136948U;
	static int16_t x408 = -1;
	uint32_t t67 = 14364U;

	t67 = (x405&((x406*x407)/x408));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x410 = 2U;
	uint16_t x411 = 213U;
	volatile uint32_t t68 = 27U;

	t68 = (x409&((x410*x411)/x412));

	if (t68 != 4294967293U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x413 = INT64_MIN;
	int32_t x414 = -1;
	uint64_t x415 = 106701LLU;
	uint16_t x416 = 13454U;
	uint64_t t69 = 2291LLU;

	t69 = (x413&((x414*x415)/x416));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x417 = UINT64_MAX;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = -1;
	static int32_t x420 = -1;

	t70 = (x417&((x418*x419)/x420));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x422 = 3LLU;
	static int64_t x424 = 60LL;
	volatile uint64_t t71 = 367786341LLU;

	t71 = (x421&((x422*x423)/x424));

	if (t71 != 21LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x429 = -1;
	volatile int8_t x431 = INT8_MAX;
	static uint16_t x432 = 4209U;
	volatile int32_t t72 = -3428194;

	t72 = (x429&((x430*x431)/x432));

	if (t72 != 1977) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x433 = 695U;
	int32_t x434 = -957686227;
	static uint64_t x435 = UINT64_MAX;
	int64_t x436 = 909256331980LL;
	static volatile uint64_t t73 = 1232LLU;

	t73 = (x433&((x434*x435)/x436));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x449 = -124LL;
	volatile uint8_t x450 = 2U;
	volatile uint64_t x451 = 3379265LLU;
	volatile uint64_t t74 = 780452031708224571LLU;

	t74 = (x449&((x450*x451)/x452));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x453 = -1;
	uint64_t x454 = 25559698156LLU;
	volatile int32_t x455 = INT32_MAX;
	int16_t x456 = INT16_MAX;
	volatile uint64_t t75 = 10824239409LLU;

	t75 = (x453&((x454*x455)/x456));

	if (t75 != 549197230898371LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x457 = INT64_MIN;
	int8_t x458 = INT8_MIN;
	volatile int8_t x459 = INT8_MAX;
	uint16_t x460 = 2U;
	static volatile int64_t t76 = INT64_MIN;

	t76 = (x457&((x458*x459)/x460));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x461 = -38374855724548881LL;
	volatile uint16_t x462 = 0U;
	int8_t x463 = 0;

	t77 = (x461&((x462*x463)/x464));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x469 = INT16_MIN;
	static int32_t x470 = -1;
	uint64_t x471 = UINT64_MAX;
	volatile int32_t x472 = -1;
	uint64_t t78 = 671821LLU;

	t78 = (x469&((x470*x471)/x472));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x473 = -94860542;
	uint16_t x474 = UINT16_MAX;
	int8_t x475 = 13;
	uint32_t x476 = UINT32_MAX;
	static volatile uint32_t t79 = 220829155U;

	t79 = (x473&((x474*x475)/x476));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x478 = 13107135U;
	int32_t x479 = INT32_MIN;
	volatile int16_t x480 = INT16_MAX;
	uint32_t t80 = 203779901U;

	t80 = (x477&((x478*x479)/x480));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x481 = INT8_MAX;
	int32_t x482 = INT32_MIN;
	uint32_t x483 = UINT32_MAX;
	static uint16_t x484 = 15298U;

	t81 = (x481&((x482*x483)/x484));

	if (t81 != 88U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x486 = 5048485U;
	uint16_t x487 = 7U;
	int32_t x488 = -1597489;
	static int64_t t82 = -13841173796LL;

	t82 = (x485&((x486*x487)/x488));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x489 = -1;
	static volatile int16_t x490 = INT16_MIN;
	volatile int8_t x491 = 8;
	static uint32_t x492 = UINT32_MAX;
	uint32_t t83 = 59121815U;

	t83 = (x489&((x490*x491)/x492));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x497 = 1U;
	static uint8_t x498 = 15U;
	int16_t x499 = -1;
	int8_t x500 = 56;
	int32_t t84 = -1853870;

	t84 = (x497&((x498*x499)/x500));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x501 = 0;
	volatile uint16_t x503 = 0U;
	uint32_t x504 = UINT32_MAX;

	t85 = (x501&((x502*x503)/x504));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x505 = UINT16_MAX;
	volatile uint8_t x506 = 2U;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t86 = 1044997;

	t86 = (x505&((x506*x507)/x508));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x513 = INT8_MIN;
	uint16_t x514 = 4147U;
	int64_t x515 = 78405536252LL;
	int32_t x516 = -78244;
	static int64_t t87 = 122616594601513LL;

	t87 = (x513&((x514*x515)/x516));

	if (t87 != -4155561600LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x517 = INT64_MIN;
	int32_t x519 = 953460;
	volatile uint64_t x520 = UINT64_MAX;
	uint64_t t88 = 1488LLU;

	t88 = (x517&((x518*x519)/x520));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x522 = -97;
	volatile uint64_t x523 = 8738419916585LLU;
	static uint32_t x524 = UINT32_MAX;
	volatile uint64_t t89 = 47LLU;

	t89 = (x521&((x522*x523)/x524));

	if (t89 != 4294769943LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x525 = 1U;
	static uint64_t x528 = 11955211799943LLU;

	t90 = (x525&((x526*x527)/x528));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x529 = 168U;
	static uint64_t x530 = UINT64_MAX;
	int16_t x532 = INT16_MAX;

	t91 = (x529&((x530*x531)/x532));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x533 = INT16_MIN;
	uint16_t x534 = 1228U;
	uint16_t x535 = 3U;
	uint16_t x536 = 448U;
	volatile int32_t t92 = -2;

	t92 = (x533&((x534*x535)/x536));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x537 = -1;
	int8_t x538 = INT8_MIN;
	int16_t x539 = INT16_MIN;
	static volatile int8_t x540 = INT8_MIN;
	static volatile int32_t t93 = -593226062;

	t93 = (x537&((x538*x539)/x540));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x541 = -1;
	int16_t x542 = INT16_MIN;
	volatile int16_t x543 = -97;
	int64_t x544 = 3LL;
	int64_t t94 = 3662792968LL;

	t94 = (x541&((x542*x543)/x544));

	if (t94 != 1059498LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MAX;
	uint32_t x548 = 1410U;
	volatile uint32_t t95 = 3068U;

	t95 = (x545&((x546*x547)/x548));

	if (t95 != 3043072U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x550 = -1;
	static volatile uint32_t x551 = 39003907U;
	int8_t x552 = INT8_MIN;
	volatile uint32_t t96 = 0U;

	t96 = (x549&((x550*x551)/x552));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x553 = 961815244554LLU;
	uint64_t x554 = 3211106280LLU;
	uint64_t x555 = 32989738LLU;
	volatile uint64_t t97 = 0LLU;

	t97 = (x553&((x554*x555)/x556));

	if (t97 != 10762LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x561 = INT16_MAX;
	uint16_t x562 = 7U;
	volatile uint8_t x563 = 15U;
	uint32_t x564 = UINT32_MAX;
	static uint32_t t98 = 189U;

	t98 = (x561&((x562*x563)/x564));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x565 = 57U;
	int64_t x566 = -1LL;
	int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MIN;
	int64_t t99 = -93LL;

	t99 = (x565&((x566*x567)/x568));

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

