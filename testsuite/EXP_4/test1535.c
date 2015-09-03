#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x8 = -1;
volatile int64_t x11 = INT64_MIN;
volatile uint16_t x20 = 8218U;
int8_t x28 = 1;
volatile int32_t t4 = 1;
static uint8_t x31 = 80U;
int8_t x33 = INT8_MIN;
int8_t x34 = 0;
int32_t x43 = -140037310;
static int64_t x49 = -69LL;
int32_t x51 = INT32_MIN;
int32_t x52 = -1;
static int64_t x55 = -63214157LL;
volatile uint32_t t9 = 5343U;
uint64_t x60 = 996959044840628LLU;
uint16_t x69 = UINT16_MAX;
volatile int8_t x73 = -2;
int8_t x75 = INT8_MIN;
static uint32_t x77 = 257415035U;
static int8_t x80 = -1;
uint64_t x89 = 3LLU;
int16_t x95 = -11546;
volatile int32_t t19 = 1881842;
volatile int16_t x103 = 7;
volatile uint8_t x104 = 11U;
int16_t x109 = INT16_MAX;
volatile int8_t x110 = -1;
volatile int32_t t22 = 1386;
volatile int64_t x120 = INT64_MAX;
int8_t x121 = INT8_MIN;
int16_t x129 = INT16_MAX;
int32_t x130 = INT32_MIN;
volatile int64_t x143 = -81066563990100989LL;
uint8_t x157 = UINT8_MAX;
volatile uint32_t x166 = 245338U;
static int16_t x176 = -6;
int16_t x182 = -1;
uint64_t x195 = UINT64_MAX;
int8_t x198 = INT8_MAX;
static int64_t x205 = 180891LL;
volatile int64_t x210 = 3662931LL;
uint16_t x215 = 13U;
uint8_t x218 = 25U;
int16_t x227 = -6;
int8_t x232 = INT8_MIN;
static uint16_t x236 = 14U;
volatile int32_t t48 = 1;
uint32_t x238 = 3558U;
int16_t x239 = INT16_MIN;
volatile uint32_t t49 = 10099U;
volatile int32_t x244 = INT32_MIN;
volatile int8_t x250 = 1;
uint8_t x253 = 126U;
static volatile int8_t x256 = INT8_MIN;
static volatile uint8_t x269 = 1U;
int8_t x272 = INT8_MAX;
static uint64_t t56 = 0LLU;
int64_t x285 = -1LL;
static int16_t x305 = INT16_MIN;
static volatile uint32_t x333 = 142745477U;
static volatile int64_t x336 = -3834085063LL;
int16_t x338 = -1;
volatile int16_t x348 = INT16_MIN;
volatile int64_t x355 = -18468473310LL;
int64_t x359 = INT64_MIN;
int16_t x362 = -1;
volatile int8_t x364 = -1;
int32_t t72 = 15109;
int32_t x368 = INT32_MIN;
volatile int32_t t73 = 2253265;
int64_t x376 = -422028329827190605LL;
int64_t x378 = INT64_MAX;
int32_t x381 = INT32_MAX;
int16_t x385 = INT16_MAX;
int64_t x387 = INT64_MAX;
volatile int8_t x389 = INT8_MAX;
int8_t x390 = INT8_MIN;
int64_t x392 = INT64_MIN;
uint32_t x396 = UINT32_MAX;
volatile int64_t t79 = 1323142LL;
static int8_t x399 = INT8_MAX;
int32_t t80 = 42761127;
int64_t x402 = -1LL;
volatile int64_t x408 = INT64_MAX;
int16_t x409 = -1;
int16_t x410 = INT16_MAX;
static volatile int32_t t86 = 109078;
static int32_t x437 = -1;
int64_t x457 = -217848138LL;
volatile uint32_t x459 = 2809U;
int8_t x461 = INT8_MIN;
int64_t x462 = -554632539625LL;
int8_t x466 = -60;
static volatile int8_t x467 = -13;
static int64_t x468 = INT64_MIN;
int64_t t95 = -298LL;
int16_t x481 = -1;
volatile uint32_t t99 = 954U;


void f0(void) {
	static int16_t x5 = -439;
	static int16_t x6 = -3;
	int8_t x7 = 53;
	int32_t t0 = 98376930;

	t0 = (x5+(x6-(x7<=x8)));

	if (t0 != -442) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -5500;
	int64_t x10 = 2192900354639129LL;
	static uint32_t x12 = 1U;
	volatile int64_t t1 = -1316183986LL;

	t1 = (x9+(x10-(x11<=x12)));

	if (t1 != 2192900354633628LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = -9640;
	int64_t x19 = -1LL;
	static volatile int32_t t2 = 1538220;

	t2 = (x17+(x18-(x19<=x20)));

	if (t2 != -9769) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = UINT16_MAX;
	volatile int32_t x22 = INT32_MIN;
	static uint32_t x23 = 402016U;
	int16_t x24 = 4;
	static volatile int32_t t3 = -11;

	t3 = (x21+(x22-(x23<=x24)));

	if (t3 != -2147418113) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 75;
	volatile int16_t x26 = INT16_MAX;
	uint16_t x27 = 6038U;

	t4 = (x25+(x26-(x27<=x28)));

	if (t4 != 32842) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -105358080LL;
	int8_t x30 = -1;
	int8_t x32 = INT8_MIN;
	volatile int64_t t5 = 37482097380427392LL;

	t5 = (x29+(x30-(x31<=x32)));

	if (t5 != -105358081LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x35 = 17U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = -11839534;

	t6 = (x33+(x34-(x35<=x36)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = 724720029017LLU;
	uint32_t x42 = UINT32_MAX;
	int16_t x44 = 1;
	static volatile uint64_t t7 = 118LLU;

	t7 = (x41+(x42-(x43<=x44)));

	if (t7 != 729014996311LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x50 = INT8_MIN;
	int64_t t8 = 314985013614LL;

	t8 = (x49+(x50-(x51<=x52)));

	if (t8 != -198LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = UINT32_MAX;
	int8_t x56 = INT8_MIN;

	t9 = (x53+(x54-(x55<=x56)));

	if (t9 != 4294967293U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 0U;
	uint16_t x58 = 193U;
	int32_t x59 = -501;
	static int32_t t10 = 236981588;

	t10 = (x57+(x58-(x59<=x60)));

	if (t10 != 193) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x65 = UINT64_MAX;
	static volatile int64_t x66 = INT64_MIN;
	volatile int32_t x67 = INT32_MAX;
	volatile int64_t x68 = -1LL;
	uint64_t t11 = 70369543981LLU;

	t11 = (x65+(x66-(x67<=x68)));

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x70 = INT16_MIN;
	static int16_t x71 = INT16_MIN;
	int32_t x72 = 1881;
	int32_t t12 = -122017;

	t12 = (x69+(x70-(x71<=x72)));

	if (t12 != 32766) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x74 = 624705LLU;
	int32_t x76 = INT32_MIN;
	uint64_t t13 = 0LLU;

	t13 = (x73+(x74-(x75<=x76)));

	if (t13 != 624703LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x78 = 3;
	int32_t x79 = -1;
	volatile uint32_t t14 = 2824064U;

	t14 = (x77+(x78-(x79<=x80)));

	if (t14 != 257415037U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	volatile int64_t x83 = INT64_MIN;
	volatile int8_t x84 = -1;
	static volatile int32_t t15 = 15;

	t15 = (x81+(x82-(x83<=x84)));

	if (t15 != 32766) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 994583045U;
	static int32_t x86 = -1;
	volatile int64_t x87 = -1LL;
	volatile uint32_t x88 = 201050U;
	uint32_t t16 = 958590U;

	t16 = (x85+(x86-(x87<=x88)));

	if (t16 != 994583043U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x90 = 4U;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MAX;
	static uint64_t t17 = 852094LLU;

	t17 = (x89+(x90-(x91<=x92)));

	if (t17 != 7LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = -1;
	uint16_t x94 = 1U;
	int32_t x96 = -1;
	static volatile int32_t t18 = 49296;

	t18 = (x93+(x94-(x95<=x96)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x97 = -195;
	static int8_t x98 = INT8_MIN;
	uint16_t x99 = 25276U;
	int32_t x100 = INT32_MIN;

	t19 = (x97+(x98-(x99<=x100)));

	if (t19 != -323) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = 11LLU;
	volatile int16_t x102 = -434;
	uint64_t t20 = 29483055344690LLU;

	t20 = (x101+(x102-(x103<=x104)));

	if (t20 != 18446744073709551192LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x105 = 1561340;
	int16_t x106 = 1;
	static int32_t x107 = 574870;
	volatile int16_t x108 = -121;
	volatile int32_t t21 = 7;

	t21 = (x105+(x106-(x107<=x108)));

	if (t21 != 1561341) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x111 = -1LL;
	int64_t x112 = -7787LL;

	t22 = (x109+(x110-(x111<=x112)));

	if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int32_t x114 = 1;
	int64_t x115 = INT64_MAX;
	int64_t x116 = 54037791LL;
	volatile uint32_t t23 = 38U;

	t23 = (x113+(x114-(x115<=x116)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x117 = INT32_MAX;
	int64_t x118 = -1LL;
	int64_t x119 = -1LL;
	volatile int64_t t24 = -394175LL;

	t24 = (x117+(x118-(x119<=x120)));

	if (t24 != 2147483645LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	static int32_t x124 = -3982894;
	static volatile int32_t t25 = 16772681;

	t25 = (x121+(x122-(x123<=x124)));

	if (t25 != -32896) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x131 = UINT32_MAX;
	static uint8_t x132 = 2U;
	static int32_t t26 = -1;

	t26 = (x129+(x130-(x131<=x132)));

	if (t26 != -2147450881) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x133 = INT8_MIN;
	static uint32_t x134 = UINT32_MAX;
	static uint8_t x135 = UINT8_MAX;
	int16_t x136 = -109;
	uint32_t t27 = 93363284U;

	t27 = (x133+(x134-(x135<=x136)));

	if (t27 != 4294967167U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x141 = 1379771737029LL;
	static volatile int32_t x142 = 0;
	static int16_t x144 = INT16_MIN;
	volatile int64_t t28 = -3594353LL;

	t28 = (x141+(x142-(x143<=x144)));

	if (t28 != 1379771737028LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x149 = UINT16_MAX;
	volatile int8_t x150 = INT8_MAX;
	int16_t x151 = -297;
	int32_t x152 = INT32_MAX;
	volatile int32_t t29 = -699908;

	t29 = (x149+(x150-(x151<=x152)));

	if (t29 != 65661) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x158 = INT16_MIN;
	int32_t x159 = -764701583;
	int64_t x160 = -5061048499LL;
	volatile int32_t t30 = 223926;

	t30 = (x157+(x158-(x159<=x160)));

	if (t30 != -32513) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x161 = 25177635LLU;
	static uint8_t x162 = 2U;
	int32_t x163 = 754653;
	int32_t x164 = -1;
	static volatile uint64_t t31 = 7635599741704096463LLU;

	t31 = (x161+(x162-(x163<=x164)));

	if (t31 != 25177637LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = 235;
	int32_t x167 = INT32_MAX;
	int64_t x168 = -1LL;
	static volatile uint32_t t32 = 434U;

	t32 = (x165+(x166-(x167<=x168)));

	if (t32 != 245573U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x173 = -260512881;
	int32_t x174 = 7679;
	uint16_t x175 = 2U;
	int32_t t33 = -62550994;

	t33 = (x173+(x174-(x175<=x176)));

	if (t33 != -260505202) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	static uint32_t x178 = UINT32_MAX;
	static volatile uint8_t x179 = 1U;
	volatile int16_t x180 = INT16_MIN;
	volatile uint32_t t34 = 814U;

	t34 = (x177+(x178-(x179<=x180)));

	if (t34 != 4294934527U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x181 = 7454U;
	volatile uint16_t x183 = 28284U;
	int32_t x184 = INT32_MIN;
	int32_t t35 = -161377;

	t35 = (x181+(x182-(x183<=x184)));

	if (t35 != 7453) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = -438380;
	uint64_t x187 = 21987095788952LLU;
	static uint8_t x188 = UINT8_MAX;
	int32_t t36 = -61027540;

	t36 = (x185+(x186-(x187<=x188)));

	if (t36 != -471148) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x189 = 729U;
	int16_t x190 = -22;
	static int8_t x191 = -1;
	uint32_t x192 = 0U;
	volatile uint32_t t37 = 63U;

	t37 = (x189+(x190-(x191<=x192)));

	if (t37 != 707U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x193 = 1U;
	volatile int32_t x194 = -1;
	int16_t x196 = -504;
	volatile int32_t t38 = -22573559;

	t38 = (x193+(x194-(x195<=x196)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = 30;
	int16_t x199 = INT16_MAX;
	uint16_t x200 = 0U;
	volatile int32_t t39 = -6;

	t39 = (x197+(x198-(x199<=x200)));

	if (t39 != 157) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = -1;
	volatile int16_t x202 = INT16_MAX;
	uint16_t x203 = 0U;
	volatile uint64_t x204 = UINT64_MAX;
	volatile int32_t t40 = 47223443;

	t40 = (x201+(x202-(x203<=x204)));

	if (t40 != 32765) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x206 = 889219961U;
	int32_t x207 = -803;
	int64_t x208 = INT64_MAX;
	int64_t t41 = 7781470454891470LL;

	t41 = (x205+(x206-(x207<=x208)));

	if (t41 != 889400851LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = -1;
	static int16_t x211 = -284;
	uint8_t x212 = 43U;
	int64_t t42 = 789847792589019691LL;

	t42 = (x209+(x210-(x211<=x212)));

	if (t42 != 3662929LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = 48U;
	int16_t x214 = -1;
	int16_t x216 = INT16_MAX;
	volatile int32_t t43 = -1070;

	t43 = (x213+(x214-(x215<=x216)));

	if (t43 != 46) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = 3;
	volatile uint64_t x219 = 28LLU;
	static int16_t x220 = -107;
	volatile int32_t t44 = 5143601;

	t44 = (x217+(x218-(x219<=x220)));

	if (t44 != 27) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MAX;
	static int32_t x223 = 60514;
	volatile int64_t x224 = INT64_MIN;
	volatile int32_t t45 = 3003304;

	t45 = (x221+(x222-(x223<=x224)));

	if (t45 != 2147483519) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x225 = UINT16_MAX;
	static int16_t x226 = 754;
	int32_t x228 = 3;
	int32_t t46 = -348679464;

	t46 = (x225+(x226-(x227<=x228)));

	if (t46 != 66288) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x229 = INT32_MAX;
	volatile uint32_t x230 = 5U;
	static int16_t x231 = -586;
	volatile uint32_t t47 = 1034700U;

	t47 = (x229+(x230-(x231<=x232)));

	if (t47 != 2147483651U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MAX;
	int8_t x235 = INT8_MAX;

	t48 = (x233+(x234-(x235<=x236)));

	if (t48 != -2147483521) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = 4;
	int8_t x240 = INT8_MIN;

	t49 = (x237+(x238-(x239<=x240)));

	if (t49 != 3561U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = INT16_MAX;
	static volatile int32_t x242 = -1;
	volatile uint32_t x243 = 8498U;
	volatile int32_t t50 = 332176941;

	t50 = (x241+(x242-(x243<=x244)));

	if (t50 != 32765) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x249 = 1;
	static volatile uint64_t x251 = 941213LLU;
	volatile int16_t x252 = INT16_MIN;
	volatile int32_t t51 = -28270241;

	t51 = (x249+(x250-(x251<=x252)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x254 = INT64_MIN;
	int8_t x255 = -1;
	volatile int64_t t52 = -2LL;

	t52 = (x253+(x254-(x255<=x256)));

	if (t52 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x257 = 0U;
	uint64_t x258 = 55580966LLU;
	static int32_t x259 = -17;
	static int8_t x260 = -35;
	uint64_t t53 = 25812531695916LLU;

	t53 = (x257+(x258-(x259<=x260)));

	if (t53 != 55580966LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = -300957LL;
	int16_t x266 = 250;
	int16_t x267 = 1179;
	int32_t x268 = INT32_MAX;
	int64_t t54 = -2329291593616888LL;

	t54 = (x265+(x266-(x267<=x268)));

	if (t54 != -300708LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x270 = -1;
	static int32_t x271 = 49125;
	int32_t t55 = 2;

	t55 = (x269+(x270-(x271<=x272)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x281 = -1;
	volatile uint64_t x282 = 28259461LLU;
	static uint32_t x283 = 63092186U;
	int32_t x284 = -112;

	t56 = (x281+(x282-(x283<=x284)));

	if (t56 != 28259459LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	int64_t t57 = -383227460LL;

	t57 = (x285+(x286-(x287<=x288)));

	if (t57 != -130LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MAX;
	static int16_t x291 = -1;
	uint16_t x292 = 950U;
	volatile int32_t t58 = 1;

	t58 = (x289+(x290-(x291<=x292)));

	if (t58 != 32638) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x293 = 78635969458LLU;
	int16_t x294 = 819;
	int32_t x295 = -1;
	int16_t x296 = INT16_MIN;
	uint64_t t59 = 8144174LLU;

	t59 = (x293+(x294-(x295<=x296)));

	if (t59 != 78635970277LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = INT16_MAX;
	uint8_t x298 = 7U;
	static uint32_t x299 = 433249U;
	int16_t x300 = -1;
	volatile int32_t t60 = -9002737;

	t60 = (x297+(x298-(x299<=x300)));

	if (t60 != 32773) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x301 = UINT8_MAX;
	static volatile uint8_t x302 = 106U;
	static int16_t x303 = INT16_MIN;
	volatile uint16_t x304 = UINT16_MAX;
	static int32_t t61 = 1;

	t61 = (x301+(x302-(x303<=x304)));

	if (t61 != 360) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x306 = 862LLU;
	int16_t x307 = INT16_MAX;
	int64_t x308 = INT64_MAX;
	uint64_t t62 = 130LLU;

	t62 = (x305+(x306-(x307<=x308)));

	if (t62 != 18446744073709519709LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x313 = -1;
	int8_t x314 = INT8_MAX;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t63 = -1084;

	t63 = (x313+(x314-(x315<=x316)));

	if (t63 != 126) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x321 = -27;
	uint64_t x322 = UINT64_MAX;
	uint16_t x323 = 0U;
	int8_t x324 = INT8_MIN;
	uint64_t t64 = 475576794289139861LLU;

	t64 = (x321+(x322-(x323<=x324)));

	if (t64 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = INT8_MIN;
	static uint64_t x330 = 36747969743LLU;
	int16_t x331 = 4;
	int64_t x332 = 6610190855072398LL;
	volatile uint64_t t65 = 54230844LLU;

	t65 = (x329+(x330-(x331<=x332)));

	if (t65 != 36747969614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x334 = INT8_MAX;
	volatile int16_t x335 = -1;
	volatile uint32_t t66 = 71941U;

	t66 = (x333+(x334-(x335<=x336)));

	if (t66 != 142745604U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x337 = 10U;
	uint8_t x339 = 0U;
	int16_t x340 = 45;
	int32_t t67 = 1605968;

	t67 = (x337+(x338-(x339<=x340)));

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x345 = -1;
	static volatile uint32_t x346 = 25U;
	int64_t x347 = -1LL;
	static uint32_t t68 = 3U;

	t68 = (x345+(x346-(x347<=x348)));

	if (t68 != 24U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x349 = 7U;
	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 54703LLU;
	static volatile int32_t t69 = -97106408;

	t69 = (x349+(x350-(x351<=x352)));

	if (t69 != -32761) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = 7;
	volatile uint16_t x356 = UINT16_MAX;
	int64_t t70 = 100LL;

	t70 = (x353+(x354-(x355<=x356)));

	if (t70 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x357 = 6175U;
	volatile uint16_t x358 = UINT16_MAX;
	uint16_t x360 = 393U;
	static int32_t t71 = 104;

	t71 = (x357+(x358-(x359<=x360)));

	if (t71 != 71709) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x361 = 121U;
	int64_t x363 = INT64_MIN;

	t72 = (x361+(x362-(x363<=x364)));

	if (t72 != 119) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x365 = 7687U;
	uint8_t x366 = 5U;
	static int64_t x367 = INT64_MAX;

	t73 = (x365+(x366-(x367<=x368)));

	if (t73 != 7692) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = -4057;
	int16_t x374 = 7;
	volatile uint32_t x375 = UINT32_MAX;
	int32_t t74 = -9199;

	t74 = (x373+(x374-(x375<=x376)));

	if (t74 != -4050) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x377 = 299094LLU;
	int16_t x379 = INT16_MIN;
	int64_t x380 = 15LL;
	static uint64_t t75 = 6LLU;

	t75 = (x377+(x378-(x379<=x380)));

	if (t75 != 9223372036855074900LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x382 = -1LL;
	static volatile uint8_t x383 = 5U;
	int16_t x384 = INT16_MIN;
	int64_t t76 = 746538908625LL;

	t76 = (x381+(x382-(x383<=x384)));

	if (t76 != 2147483646LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x386 = 6379911U;
	uint64_t x388 = 2616052LLU;
	uint32_t t77 = 20U;

	t77 = (x385+(x386-(x387<=x388)));

	if (t77 != 6412678U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x391 = -1;
	static int32_t t78 = -1196929;

	t78 = (x389+(x390-(x391<=x392)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = 423LL;
	uint32_t x395 = UINT32_MAX;

	t79 = (x393+(x394-(x395<=x396)));

	if (t79 != 65957LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x397 = -1;
	int8_t x398 = INT8_MIN;
	static int32_t x400 = -371;

	t80 = (x397+(x398-(x399<=x400)));

	if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x401 = INT8_MIN;
	uint16_t x403 = UINT16_MAX;
	int32_t x404 = -1;
	int64_t t81 = 826LL;

	t81 = (x401+(x402-(x403<=x404)));

	if (t81 != -129LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x405 = INT32_MIN;
	static uint64_t x406 = 1941350803LLU;
	int16_t x407 = INT16_MIN;
	static uint64_t t82 = 54614LLU;

	t82 = (x405+(x406-(x407<=x408)));

	if (t82 != 18446744073503418770LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x411 = INT8_MAX;
	int16_t x412 = -526;
	volatile int32_t t83 = 21;

	t83 = (x409+(x410-(x411<=x412)));

	if (t83 != 32766) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x413 = INT8_MIN;
	uint8_t x414 = 14U;
	volatile int16_t x415 = -1;
	static volatile uint8_t x416 = 2U;
	static int32_t t84 = 987947;

	t84 = (x413+(x414-(x415<=x416)));

	if (t84 != -115) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x421 = 9536U;
	int8_t x422 = INT8_MIN;
	int64_t x423 = INT64_MIN;
	static uint32_t x424 = UINT32_MAX;
	volatile int32_t t85 = -578;

	t85 = (x421+(x422-(x423<=x424)));

	if (t85 != 9407) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x425 = 83U;
	int8_t x426 = INT8_MAX;
	volatile uint16_t x427 = 670U;
	int8_t x428 = -1;

	t86 = (x425+(x426-(x427<=x428)));

	if (t86 != 210) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x429 = 248U;
	static int8_t x430 = INT8_MAX;
	int8_t x431 = 15;
	int16_t x432 = -26;
	static int32_t t87 = 134039;

	t87 = (x429+(x430-(x431<=x432)));

	if (t87 != 375) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x433 = 36103031010LL;
	int64_t x434 = 1LL;
	uint64_t x435 = 365LLU;
	int8_t x436 = 1;
	static volatile int64_t t88 = 252889LL;

	t88 = (x433+(x434-(x435<=x436)));

	if (t88 != 36103031011LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x438 = INT64_MAX;
	int8_t x439 = INT8_MIN;
	volatile int8_t x440 = 5;
	volatile int64_t t89 = -86325156LL;

	t89 = (x437+(x438-(x439<=x440)));

	if (t89 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x445 = INT8_MAX;
	int32_t x446 = INT32_MIN;
	volatile int32_t x447 = INT32_MAX;
	volatile int8_t x448 = INT8_MIN;
	int32_t t90 = 215218370;

	t90 = (x445+(x446-(x447<=x448)));

	if (t90 != -2147483521) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x449 = 25U;
	volatile int64_t x450 = INT64_MIN;
	static int32_t x451 = INT32_MIN;
	volatile uint32_t x452 = 6U;
	volatile int64_t t91 = 412392120LL;

	t91 = (x449+(x450-(x451<=x452)));

	if (t91 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x453 = INT8_MAX;
	static uint32_t x454 = 1U;
	uint32_t x455 = 23508U;
	static int64_t x456 = -16120843502437049LL;
	uint32_t t92 = 643697701U;

	t92 = (x453+(x454-(x455<=x456)));

	if (t92 != 128U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x458 = INT16_MAX;
	int8_t x460 = -1;
	volatile int64_t t93 = -27LL;

	t93 = (x457+(x458-(x459<=x460)));

	if (t93 != -217815372LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x463 = 3U;
	volatile int16_t x464 = INT16_MAX;
	int64_t t94 = -2685369LL;

	t94 = (x461+(x462-(x463<=x464)));

	if (t94 != -554632539754LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x465 = 8210921LL;

	t95 = (x465+(x466-(x467<=x468)));

	if (t95 != 8210861LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x469 = 1273289567184273LLU;
	int16_t x470 = -1;
	int64_t x471 = INT64_MAX;
	static uint16_t x472 = 55U;
	static uint64_t t96 = 20074963816528LLU;

	t96 = (x469+(x470-(x471<=x472)));

	if (t96 != 1273289567184272LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MAX;
	uint32_t x479 = 3965U;
	volatile uint32_t x480 = UINT32_MAX;
	volatile int64_t t97 = 462069724513274914LL;

	t97 = (x477+(x478-(x479<=x480)));

	if (t97 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x482 = -265988730583537589LL;
	int64_t x483 = 200027098893981LL;
	uint8_t x484 = 14U;
	volatile int64_t t98 = -22030LL;

	t98 = (x481+(x482-(x483<=x484)));

	if (t98 != -265988730583537590LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x485 = UINT32_MAX;
	int8_t x486 = -1;
	int64_t x487 = INT64_MIN;
	int64_t x488 = INT64_MAX;

	t99 = (x485+(x486-(x487<=x488)));

	if (t99 != 4294967293U) { NG(); } else { ; }
	
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

