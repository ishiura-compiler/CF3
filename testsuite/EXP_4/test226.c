#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x20 = UINT32_MAX;
int32_t x30 = INT32_MAX;
uint8_t x39 = 23U;
uint32_t x40 = UINT32_MAX;
int8_t x47 = INT8_MAX;
uint64_t x49 = 109682823777895963LLU;
uint8_t x63 = UINT8_MAX;
static volatile int16_t x68 = -29;
int64_t t14 = 855810239LL;
static uint64_t x70 = UINT64_MAX;
volatile uint8_t x76 = 46U;
volatile int64_t t17 = -884265781LL;
uint32_t x88 = UINT32_MAX;
uint8_t x89 = 107U;
uint16_t x94 = UINT16_MAX;
uint64_t x98 = 29683077554653LLU;
int32_t x100 = INT32_MIN;
int32_t x109 = 76165;
uint32_t x110 = 1727U;
static volatile int8_t x113 = -2;
int8_t x123 = INT8_MAX;
uint64_t x125 = 1262131969711959LLU;
int32_t x134 = INT32_MAX;
volatile uint64_t x135 = 45LLU;
static volatile int32_t x137 = 1331;
volatile uint16_t x142 = UINT16_MAX;
static int16_t x145 = -129;
uint32_t x146 = UINT32_MAX;
int8_t x148 = INT8_MIN;
volatile int64_t x162 = 139579358515587735LL;
int32_t x163 = INT32_MAX;
static int32_t x165 = INT32_MAX;
static volatile uint8_t x174 = 1U;
uint8_t x176 = UINT8_MAX;
volatile uint32_t x184 = 1U;
volatile int32_t x186 = 23;
int32_t x196 = INT32_MAX;
uint32_t t41 = 30752U;
int64_t t42 = 311565348436695LL;
volatile uint16_t x216 = 14296U;
volatile uint32_t t44 = 2140038813U;
volatile int32_t x222 = INT32_MIN;
uint64_t x224 = UINT64_MAX;
static uint64_t t45 = 2125222LLU;
static int8_t x225 = 6;
uint8_t x230 = UINT8_MAX;
uint32_t x231 = 1342865100U;
int16_t x232 = INT16_MIN;
int64_t x236 = -113069599LL;
static volatile int32_t x239 = INT32_MIN;
int8_t x244 = INT8_MAX;
int32_t x247 = 41;
static uint32_t x251 = 1382U;
volatile int32_t t53 = 1;
uint32_t x258 = 1747732U;
int64_t x259 = -330327LL;
int32_t x261 = INT32_MIN;
int64_t x264 = INT64_MIN;
static int8_t x265 = 6;
int32_t x267 = INT32_MIN;
static volatile int32_t t56 = 143527112;
int64_t x273 = -1LL;
uint8_t x276 = 6U;
volatile int16_t x278 = INT16_MIN;
int8_t x279 = INT8_MAX;
int8_t x280 = INT8_MIN;
int16_t x282 = -1;
volatile uint8_t x289 = 3U;
volatile int32_t t61 = -184832922;
int16_t x293 = -1;
uint8_t x303 = UINT8_MAX;
volatile uint64_t t64 = 113LLU;
uint8_t x306 = 24U;
volatile int8_t x311 = -1;
volatile int64_t x312 = INT64_MAX;
volatile int32_t t69 = -250110707;
uint64_t x335 = UINT64_MAX;
volatile uint64_t x343 = UINT64_MAX;
uint32_t x344 = 316U;
uint64_t t72 = 17674996LLU;
int64_t x353 = -1LL;
int32_t x369 = 42;
int32_t x373 = INT32_MIN;
uint64_t x376 = 462663LLU;
uint64_t t78 = 2246603966934699LLU;
volatile int64_t t79 = -894451915LL;
static uint8_t x383 = UINT8_MAX;
uint32_t x395 = 42187U;
int64_t t83 = -444690877883LL;
int64_t t86 = 3911767LL;
int16_t x417 = INT16_MAX;
volatile uint64_t t88 = 106901380006LLU;
static int32_t x440 = INT32_MAX;
volatile uint64_t t89 = 2424399137688744567LLU;
static int64_t t91 = -36839905335481LL;
volatile int64_t x453 = -1LL;
int32_t x460 = -1;
int16_t x472 = -1;
int64_t t97 = -1892914377LL;
int64_t t98 = 87LL;
uint64_t x477 = UINT64_MAX;
uint32_t x478 = 1U;


void f0(void) {
	uint32_t x1 = 14U;
	static volatile uint8_t x2 = 1U;
	static volatile int16_t x3 = INT16_MIN;
	int16_t x4 = -1;
	uint32_t t0 = 513U;

	t0 = (x1%(x2%(x3-x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	volatile int32_t x6 = INT32_MAX;
	static int16_t x7 = INT16_MAX;
	uint64_t x8 = 4LLU;
	uint64_t t1 = 1703LLU;

	t1 = (x5%(x6%(x7-x8)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 11858U;
	volatile int16_t x10 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	uint64_t x12 = 28806280LLU;
	volatile uint64_t t2 = 37380142LLU;

	t2 = (x9%(x10%(x11-x12)));

	if (t2 != 11858LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static uint64_t x14 = 8301831084733038LLU;
	uint8_t x15 = 27U;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 2329311LLU;

	t3 = (x13%(x14%(x15-x16)));

	if (t3 != 10921LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -7748145165LL;
	volatile int8_t x18 = 11;
	int32_t x19 = INT32_MAX;
	int64_t t4 = 149282158743586250LL;

	t4 = (x17%(x18%(x19-x20)));

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int32_t x22 = INT32_MIN;
	uint32_t x23 = UINT32_MAX;
	uint32_t x24 = 17533194U;
	uint32_t t5 = 20U;

	t5 = (x21%(x22%(x23-x24)));

	if (t5 != 255U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -220;
	int16_t x26 = INT16_MIN;
	static int64_t x27 = -1LL;
	uint16_t x28 = 3144U;
	volatile int64_t t6 = -54551751982LL;

	t6 = (x25%(x26%(x27-x28)));

	if (t6 != -220LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 7033214638789416LLU;
	uint64_t t7 = 24271LLU;

	t7 = (x29%(x30%(x31-x32)));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	volatile uint32_t t8 = 1863699U;

	t8 = (x37%(x38%(x39-x40)));

	if (t8 != 7U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int64_t x46 = -52LL;
	static uint64_t x48 = 1980327244435414198LLU;
	volatile uint64_t t9 = 1LLU;

	t9 = (x45%(x46%(x47-x48)));

	if (t9 != 623798873790825444LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x50 = 2U;
	int16_t x51 = -1;
	uint32_t x52 = 1188931U;
	uint64_t t10 = 2687555LLU;

	t10 = (x49%(x50%(x51-x52)));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = -1;
	uint32_t x54 = 10835U;
	static volatile int16_t x55 = INT16_MAX;
	uint8_t x56 = 2U;
	uint32_t t11 = 665U;

	t11 = (x53%(x54%(x55-x56)));

	if (t11 != 5800U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 0U;
	volatile uint16_t x58 = 1147U;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -1;
	int32_t t12 = 30517899;

	t12 = (x57%(x58%(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = INT16_MAX;
	int8_t x64 = -15;
	volatile int64_t t13 = -847LL;

	t13 = (x61%(x62%(x63-x64)));

	if (t13 != 78LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	int64_t x66 = INT64_MAX;
	static uint32_t x67 = 1070U;

	t14 = (x65%(x66%(x67-x68)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int8_t x71 = INT8_MIN;
	int16_t x72 = -1;
	uint64_t t15 = 2807233126854LLU;

	t15 = (x69%(x70%(x71-x72)));

	if (t15 != 15LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = UINT32_MAX;
	volatile uint64_t x74 = UINT64_MAX;
	int64_t x75 = -84161404796LL;
	uint64_t t16 = 2393LLU;

	t16 = (x73%(x74%(x75-x76)));

	if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x77 = 10536488U;
	int64_t x78 = -1LL;
	static int64_t x79 = INT64_MIN;
	int32_t x80 = -25;

	t17 = (x77%(x78%(x79-x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	uint64_t x87 = UINT64_MAX;
	volatile uint64_t t18 = 1142919926701721260LLU;

	t18 = (x85%(x86%(x87-x88)));

	if (t18 != 2147483648LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = 20;
	int32_t x91 = INT32_MIN;
	int64_t x92 = 1032001559LL;
	volatile int64_t t19 = -115437643458889059LL;

	t19 = (x89%(x90%(x91-x92)));

	if (t19 != 7LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = 528U;
	volatile uint32_t t20 = 2468249U;

	t20 = (x93%(x94%(x95-x96)));

	if (t20 != 32768U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x97 = -18;
	uint32_t x99 = 90U;
	uint64_t t21 = 256828LLU;

	t21 = (x97%(x98%(x99-x100)));

	if (t21 != 278279103LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int8_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	volatile int64_t x104 = -1LL;
	volatile uint64_t t22 = 4840397LLU;

	t22 = (x101%(x102%(x103-x104)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = -1;
	static int64_t x106 = -1LL;
	int64_t x107 = -1LL;
	int64_t x108 = INT64_MIN;
	volatile int64_t t23 = -8LL;

	t23 = (x105%(x106%(x107-x108)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x111 = INT8_MIN;
	int16_t x112 = 504;
	uint32_t t24 = 3U;

	t24 = (x109%(x110%(x111-x112)));

	if (t24 != 177U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = INT8_MAX;
	uint16_t x115 = 1U;
	int8_t x116 = INT8_MIN;
	volatile int32_t t25 = -1;

	t25 = (x113%(x114%(x115-x116)));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	static int16_t x118 = -1;
	volatile int32_t x119 = INT32_MAX;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t26 = 0;

	t26 = (x117%(x118%(x119-x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	static int16_t x122 = INT16_MIN;
	static int8_t x124 = INT8_MIN;
	static int32_t t27 = 31;

	t27 = (x121%(x122%(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 3034912U;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = 15U;
	uint64_t t28 = 17315LLU;

	t28 = (x125%(x126%(x127-x128)));

	if (t28 != 2452247LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -1LL;
	uint8_t x136 = 1U;
	static uint64_t t29 = 6669933671LLU;

	t29 = (x133%(x134%(x135-x136)));

	if (t29 != 5LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x138 = 17LL;
	static int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	static volatile int64_t t30 = 131684676533LL;

	t30 = (x137%(x138%(x139-x140)));

	if (t30 != 5LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = 0;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = UINT64_MAX;
	static uint64_t t31 = 99769901038442LLU;

	t31 = (x141%(x142%(x143-x144)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x147 = UINT16_MAX;
	uint32_t t32 = 23335376U;

	t32 = (x145%(x146%(x147-x148)));

	if (t32 != 127U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = 3988LL;
	uint32_t x158 = UINT32_MAX;
	static uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;
	volatile uint64_t t33 = 383962LLU;

	t33 = (x157%(x158%(x159-x160)));

	if (t33 != 3988LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = -3353;
	uint32_t x164 = 13U;
	volatile int64_t t34 = -1085863741396LL;

	t34 = (x161%(x162%(x163-x164)));

	if (t34 != -3353LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = -193521130LL;
	uint64_t x167 = 15LLU;
	static volatile int16_t x168 = INT16_MAX;
	volatile uint64_t t35 = 134733960963304599LLU;

	t35 = (x165%(x166%(x167-x168)));

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	int8_t x175 = INT8_MAX;
	volatile int32_t t36 = -1;

	t36 = (x173%(x174%(x175-x176)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MAX;
	static int64_t x179 = -1LL;
	int16_t x180 = -139;
	volatile int64_t t37 = -1401503241377476LL;

	t37 = (x177%(x178%(x179-x180)));

	if (t37 != -59LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 3025LLU;
	static int64_t x182 = 531539272296491LL;
	volatile uint32_t x183 = 276061U;
	uint64_t t38 = 118239263441255LLU;

	t38 = (x181%(x182%(x183-x184)));

	if (t38 != 3025LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x185 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = UINT64_MAX;
	uint64_t t39 = 1208327490LLU;

	t39 = (x185%(x186%(x187-x188)));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x193 = UINT8_MAX;
	int8_t x194 = -15;
	static uint16_t x195 = UINT16_MAX;
	int32_t t40 = 17822;

	t40 = (x193%(x194%(x195-x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x197 = -1;
	int8_t x198 = 4;
	static uint8_t x199 = 7U;
	volatile uint32_t x200 = 643429776U;

	t41 = (x197%(x198%(x199-x200)));

	if (t41 != 3U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = 14849710267240870LL;
	volatile int8_t x206 = INT8_MAX;
	int32_t x207 = -11;
	uint8_t x208 = 15U;

	t42 = (x205%(x206%(x207-x208)));

	if (t42 != 13LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x213 = 1171U;
	int16_t x214 = 2823;
	volatile int64_t x215 = INT64_MAX;
	int64_t t43 = -231476206266LL;

	t43 = (x213%(x214%(x215-x216)));

	if (t43 != 1171LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x217 = 11534570U;
	int16_t x218 = INT16_MIN;
	volatile uint32_t x219 = 50047U;
	int8_t x220 = INT8_MIN;

	t44 = (x217%(x218%(x219-x220)));

	if (t44 != 2814U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = -1;
	static volatile int32_t x223 = INT32_MIN;

	t45 = (x221%(x222%(x223-x224)));

	if (t45 != 2147483647LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MIN;
	int32_t x228 = 264160;
	static uint64_t t46 = 11474LLU;

	t46 = (x225%(x226%(x227-x228)));

	if (t46 != 6LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x229 = 3742768152743LLU;
	volatile uint64_t t47 = 4614609211192LLU;

	t47 = (x229%(x230%(x231-x232)));

	if (t47 != 158LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x233 = UINT64_MAX;
	static volatile int64_t x234 = INT64_MAX;
	static int16_t x235 = -1;
	uint64_t t48 = 959LLU;

	t48 = (x233%(x234%(x235-x236)));

	if (t48 != 2313440LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = -1;
	int16_t x240 = -1;
	int32_t t49 = -12593911;

	t49 = (x237%(x238%(x239-x240)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = INT64_MAX;
	uint16_t x243 = 8706U;
	int64_t t50 = -20825664663859LL;

	t50 = (x241%(x242%(x243-x244)));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = INT64_MAX;
	int8_t x246 = -1;
	static volatile uint32_t x248 = 2U;
	int64_t t51 = 6478099406531LL;

	t51 = (x245%(x246%(x247-x248)));

	if (t51 != 7LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MIN;
	volatile uint16_t x252 = 5U;
	volatile uint32_t t52 = 1081U;

	t52 = (x249%(x250%(x251-x252)));

	if (t52 != 492U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = INT16_MAX;
	static volatile uint16_t x254 = UINT16_MAX;
	static int16_t x255 = 26;
	volatile int8_t x256 = INT8_MIN;

	t53 = (x253%(x254%(x255-x256)));

	if (t53 != 42) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = INT8_MIN;
	uint64_t x260 = 234LLU;
	uint64_t t54 = 47069LLU;

	t54 = (x257%(x258%(x259-x260)));

	if (t54 != 477036LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x262 = -16358LL;
	int64_t x263 = -3533849866360295589LL;
	volatile int64_t t55 = -39151LL;

	t55 = (x261%(x262%(x263-x264)));

	if (t55 != -5408LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x266 = 4177;
	int32_t x268 = -102;

	t56 = (x265%(x266%(x267-x268)));

	if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 237795U;
	int64_t x271 = -143733487008319464LL;
	uint16_t x272 = 34U;
	volatile int64_t t57 = 66709LL;

	t57 = (x269%(x270%(x271-x272)));

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x274 = -9;
	uint16_t x275 = UINT16_MAX;
	volatile int64_t t58 = -3776446LL;

	t58 = (x273%(x274%(x275-x276)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 450U;
	volatile uint32_t t59 = 17U;

	t59 = (x277%(x278%(x279-x280)));

	if (t59 != 450U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = 1;
	static int8_t x283 = INT8_MIN;
	volatile int16_t x284 = -1;
	int32_t t60 = -49899648;

	t60 = (x281%(x282%(x283-x284)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x290 = INT32_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;

	t61 = (x289%(x290%(x291-x292)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x294 = -1;
	volatile int32_t x295 = -174318;
	uint8_t x296 = 0U;
	static int32_t t62 = 334231855;

	t62 = (x293%(x294%(x295-x296)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x297 = UINT64_MAX;
	volatile int8_t x298 = -58;
	int16_t x299 = INT16_MAX;
	static int16_t x300 = INT16_MIN;
	volatile uint64_t t63 = 2107125654655211LLU;

	t63 = (x297%(x298%(x299-x300)));

	if (t63 != 57LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x301 = INT64_MAX;
	int16_t x302 = INT16_MAX;
	volatile uint64_t x304 = 215129LLU;

	t64 = (x301%(x302%(x303-x304)));

	if (t64 != 7LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = 1;
	int32_t x307 = 1471;
	volatile uint8_t x308 = 3U;
	int32_t t65 = 5;

	t65 = (x305%(x306%(x307-x308)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = -62855LL;
	uint32_t x310 = 411110453U;
	volatile int64_t t66 = 4006894797LL;

	t66 = (x309%(x310%(x311-x312)));

	if (t66 != -62855LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = 667921289602153173LLU;
	uint64_t x318 = 60881624LLU;
	int8_t x319 = INT8_MAX;
	static int8_t x320 = INT8_MIN;
	static uint64_t t67 = 859040212489LLU;

	t67 = (x317%(x318%(x319-x320)));

	if (t67 != 34LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = -1;
	static uint32_t x322 = 48U;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MAX;
	static volatile uint32_t t68 = 13408569U;

	t68 = (x321%(x322%(x323-x324)));

	if (t68 != 15U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = 40;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = 141U;

	t69 = (x325%(x326%(x327-x328)));

	if (t69 != 40) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x329 = 14U;
	int8_t x330 = INT8_MAX;
	volatile int16_t x331 = -29;
	static volatile uint32_t x332 = UINT32_MAX;
	volatile uint32_t t70 = 64849U;

	t70 = (x329%(x330%(x331-x332)));

	if (t70 != 14U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = 11080U;
	int32_t x334 = -1;
	static volatile uint8_t x336 = UINT8_MAX;
	volatile uint64_t t71 = 107476986790352LLU;

	t71 = (x333%(x334%(x335-x336)));

	if (t71 != 115LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = 5034032759LLU;
	volatile int64_t x342 = 394LL;

	t72 = (x341%(x342%(x343-x344)));

	if (t72 != 351LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MAX;
	static int16_t x346 = INT16_MAX;
	volatile int32_t x347 = -11635;
	int16_t x348 = INT16_MIN;
	static int32_t t73 = -22755188;

	t73 = (x345%(x346%(x347-x348)));

	if (t73 != 9499) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x349 = INT32_MIN;
	uint16_t x350 = 7902U;
	int64_t x351 = -88LL;
	static int64_t x352 = INT64_MIN;
	int64_t t74 = -11003933LL;

	t74 = (x349%(x350%(x351-x352)));

	if (t74 != -4520LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x354 = -1;
	static int64_t x355 = INT64_MAX;
	volatile uint16_t x356 = 29717U;
	int64_t t75 = -2629LL;

	t75 = (x353%(x354%(x355-x356)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = -131334014;
	volatile uint32_t x362 = 3312U;
	volatile int32_t x363 = -2465;
	uint16_t x364 = 5515U;
	volatile uint32_t t76 = 1160437277U;

	t76 = (x361%(x362%(x363-x364)));

	if (t76 != 2162U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x370 = INT16_MAX;
	uint64_t x371 = UINT64_MAX;
	static int8_t x372 = -3;
	volatile uint64_t t77 = 1028568435620066LLU;

	t77 = (x369%(x370%(x371-x372)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x374 = INT32_MIN;
	static int16_t x375 = 2521;

	t78 = (x373%(x374%(x375-x376)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x377 = 900745606534LL;
	int64_t x378 = -1LL;
	int16_t x379 = -1;
	uint16_t x380 = 3581U;

	t79 = (x377%(x378%(x379-x380)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = 48945532425LLU;
	int32_t x382 = INT32_MIN;
	int16_t x384 = INT16_MAX;
	volatile uint64_t t80 = 6LLU;

	t80 = (x381%(x382%(x383-x384)));

	if (t80 != 48945532425LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x386 = -1;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int64_t t81 = -269829039LL;

	t81 = (x385%(x386%(x387-x388)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = INT16_MAX;
	static int64_t x390 = INT64_MAX;
	volatile int16_t x391 = 429;
	static int32_t x392 = 30;
	volatile int64_t t82 = -200483165440264355LL;

	t82 = (x389%(x390%(x391-x392)));

	if (t82 != 63LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = 234839969776LL;
	int64_t x394 = 49982LL;
	static int8_t x396 = -51;

	t83 = (x393%(x394%(x395-x396)));

	if (t83 != 2480LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x401 = 0U;
	int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MAX;
	static uint32_t x404 = 1103743358U;
	static volatile int64_t t84 = 1LL;

	t84 = (x401%(x402%(x403-x404)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x405 = 371441LL;
	int32_t x406 = -1;
	int8_t x407 = INT8_MAX;
	int32_t x408 = INT32_MAX;
	static int64_t t85 = -7120792686LL;

	t85 = (x405%(x406%(x407-x408)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x409 = 5958U;
	static int64_t x410 = -1LL;
	static volatile uint8_t x411 = 3U;
	int8_t x412 = INT8_MIN;

	t86 = (x409%(x410%(x411-x412)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x418 = 2023U;
	int32_t x419 = INT32_MAX;
	uint64_t x420 = 2124047627162LLU;
	uint64_t t87 = 368207345265795LLU;

	t87 = (x417%(x418%(x419-x420)));

	if (t87 != 399LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x429 = 16805U;
	uint64_t x430 = 109LLU;
	uint64_t x431 = 6LLU;
	uint16_t x432 = UINT16_MAX;

	t88 = (x429%(x430%(x431-x432)));

	if (t88 != 19LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x437 = 89LLU;
	int16_t x438 = INT16_MIN;
	int64_t x439 = INT64_MAX;

	t89 = (x437%(x438%(x439-x440)));

	if (t89 != 89LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = 2;
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = 494279469;
	volatile int8_t x444 = INT8_MIN;
	int32_t t90 = 1;

	t90 = (x441%(x442%(x443-x444)));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x445 = 5;
	volatile int8_t x446 = -1;
	int16_t x447 = -1;
	int64_t x448 = INT64_MAX;

	t91 = (x445%(x446%(x447-x448)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x449 = -1;
	int32_t x450 = INT32_MIN;
	uint32_t x451 = 62U;
	int32_t x452 = 1;
	static uint32_t t92 = 67830804U;

	t92 = (x449%(x450%(x451-x452)));

	if (t92 != 50U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x454 = 50LL;
	int64_t x455 = -162693157672LL;
	uint16_t x456 = 0U;
	volatile int64_t t93 = -134933501567102LL;

	t93 = (x453%(x454%(x455-x456)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = 3686;
	static int32_t x458 = INT32_MAX;
	static int8_t x459 = INT8_MIN;
	volatile int32_t t94 = 21326;

	t94 = (x457%(x458%(x459-x460)));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -1;
	int64_t x462 = INT64_MAX;
	volatile uint32_t x463 = 4U;
	static volatile uint16_t x464 = 118U;
	static int64_t t95 = 29LL;

	t95 = (x461%(x462%(x463-x464)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x465 = INT32_MIN;
	int32_t x466 = -490195;
	static uint32_t x467 = UINT32_MAX;
	int64_t x468 = 21582469LL;
	int64_t t96 = -2115382172LL;

	t96 = (x465%(x466%(x467-x468)));

	if (t96 != -429548LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = INT64_MIN;
	int8_t x470 = -12;
	volatile int8_t x471 = INT8_MIN;

	t97 = (x469%(x470%(x471-x472)));

	if (t97 != -8LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x473 = -219724;
	int64_t x474 = 1054535540126369006LL;
	int16_t x475 = -1;
	int32_t x476 = INT32_MIN;

	t98 = (x473%(x474%(x475-x476)));

	if (t98 != -219724LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x479 = INT8_MIN;
	volatile uint32_t x480 = 426720345U;
	uint64_t t99 = 214728107LLU;

	t99 = (x477%(x478%(x479-x480)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

