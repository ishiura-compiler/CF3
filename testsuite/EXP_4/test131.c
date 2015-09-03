#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = INT16_MAX;
int64_t x20 = -23220060541252844LL;
static int64_t t2 = 2348510398LL;
int32_t t3 = 3019;
uint8_t x42 = UINT8_MAX;
static int32_t t4 = 1615575;
uint64_t x58 = 16353963110LLU;
volatile uint8_t x62 = 1U;
int16_t x66 = INT16_MIN;
uint32_t t10 = 10U;
uint8_t x70 = UINT8_MAX;
static uint32_t x95 = 21U;
volatile int32_t x96 = -7388;
volatile int16_t x98 = 1421;
static int64_t t15 = 11620136LL;
int32_t t16 = -75;
static uint64_t t17 = 1585973502398446860LLU;
static uint32_t x120 = 1U;
static int8_t x123 = 7;
volatile int16_t x129 = 0;
int16_t x140 = -1;
uint8_t x142 = UINT8_MAX;
uint64_t t27 = 53844528LLU;
int64_t x154 = 396LL;
volatile uint64_t x155 = UINT64_MAX;
uint16_t x172 = UINT16_MAX;
uint16_t x178 = 0U;
int32_t t34 = 43118371;
static int32_t x186 = -1;
int64_t x190 = -1LL;
uint64_t x194 = UINT64_MAX;
volatile uint64_t t37 = 38601532417124LLU;
int8_t x201 = 0;
int64_t x202 = 3055LL;
int16_t x205 = INT16_MAX;
int16_t x225 = -81;
volatile int64_t x233 = -15165508LL;
uint16_t x237 = UINT16_MAX;
uint64_t x240 = UINT64_MAX;
static int64_t x245 = -1LL;
volatile uint64_t x247 = 494184LLU;
uint8_t x269 = 28U;
uint8_t x272 = UINT8_MAX;
volatile int64_t t49 = 467213426307LL;
volatile uint64_t x277 = 12978797LLU;
static int8_t x279 = 16;
uint8_t x283 = 15U;
int16_t x285 = -2216;
int64_t t53 = 15993527610502258LL;
uint64_t t54 = 3060550176LLU;
uint16_t x294 = 2942U;
uint16_t x296 = 949U;
static uint16_t x301 = 9309U;
static volatile int16_t x303 = INT16_MIN;
uint64_t x330 = UINT64_MAX;
volatile uint8_t x331 = 53U;
volatile uint8_t x332 = UINT8_MAX;
volatile uint64_t x333 = 974549377881LLU;
uint64_t x334 = UINT64_MAX;
static volatile int8_t x336 = -1;
volatile uint64_t t62 = 499598587687717295LLU;
int32_t x349 = 40800;
int8_t x350 = INT8_MIN;
volatile int64_t t66 = -110530696864541621LL;
int16_t x355 = -5;
uint32_t x360 = 1748898U;
uint32_t x361 = 1105U;
int64_t x363 = -4993537325325579LL;
volatile int32_t x370 = INT32_MAX;
uint16_t x373 = 380U;
int64_t x395 = 0LL;
static volatile uint64_t t74 = 494272082985LLU;
uint32_t x397 = 7318610U;
int64_t t76 = -13021417407LL;
volatile int64_t t77 = 17255219049508482LL;
static uint32_t x412 = 278U;
static uint64_t t78 = 842660289049LLU;
uint64_t t79 = 31189164419490372LLU;
volatile int64_t t81 = 2475839078798844234LL;
int64_t t82 = -228725889672505273LL;
static int8_t x437 = -30;
uint32_t x448 = 1883U;
int64_t x449 = -8692446759438587LL;
static int16_t x456 = -1;
uint16_t x457 = UINT16_MAX;
static volatile int16_t x458 = -3624;
static volatile int16_t x462 = INT16_MAX;
int64_t t90 = 483253558274441LL;
int16_t x468 = -4;
volatile int16_t x471 = -6;
int64_t x473 = INT64_MIN;
int8_t x477 = INT8_MAX;
uint64_t x481 = 50175654266LLU;
uint32_t x482 = UINT32_MAX;


void f0(void) {
	int32_t x1 = 43;
	static int8_t x2 = -4;
	static int32_t x3 = INT32_MAX;
	uint64_t x4 = 8253031172900LLU;
	volatile uint64_t t0 = 12732145665244889LLU;

	t0 = (x1+(x2&(x3+x4)));

	if (t0 != 8255178656587LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x10 = -1;
	static int16_t x11 = INT16_MAX;
	int64_t x12 = -3119422LL;
	int64_t t1 = -111456653LL;

	t1 = (x9+(x10&(x11+x12)));

	if (t1 != -3053888LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x17 = INT32_MIN;
	uint32_t x18 = UINT32_MAX;
	volatile int64_t x19 = 5730605LL;

	t2 = (x17+(x18&(x19+x20)));

	if (t2 != -602014655LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MIN;
	uint16_t x34 = 51U;
	uint16_t x35 = 685U;
	static uint8_t x36 = UINT8_MAX;

	t3 = (x33+(x34&(x35+x36)));

	if (t3 != -32736) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x41 = INT8_MIN;
	static int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MAX;

	t4 = (x41+(x42&(x43+x44)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x45 = -1;
	int32_t x46 = 457;
	int32_t x47 = 367494113;
	static uint8_t x48 = UINT8_MAX;
	int32_t t5 = 1;

	t5 = (x45+(x46&(x47+x48)));

	if (t5 != 191) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = INT16_MIN;
	static int8_t x50 = -1;
	uint16_t x51 = 82U;
	uint32_t x52 = 8938U;
	volatile uint32_t t6 = 249U;

	t6 = (x49+(x50&(x51+x52)));

	if (t6 != 4294943548U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x53 = -1LL;
	static int64_t x54 = INT64_MIN;
	uint8_t x55 = 57U;
	uint16_t x56 = 2154U;
	volatile int64_t t7 = 594153821LL;

	t7 = (x53+(x54&(x55+x56)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x57 = 2U;
	int8_t x59 = 11;
	uint32_t x60 = 46966U;
	uint64_t t8 = 1441021LLU;

	t8 = (x57+(x58&(x59+x60)));

	if (t8 != 41986LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x61 = INT8_MAX;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MAX;
	volatile int32_t t9 = -4580;

	t9 = (x61+(x62&(x63+x64)));

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x65 = UINT16_MAX;
	uint32_t x67 = 13891469U;
	static int8_t x68 = -1;

	t10 = (x65+(x66&(x67+x68)));

	if (t10 != 13926399U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MIN;
	static uint16_t x71 = 21935U;
	int16_t x72 = INT16_MIN;
	static int32_t t11 = 0;

	t11 = (x69+(x70&(x71+x72)));

	if (t11 != -2147483473) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = -6LL;
	uint64_t x75 = UINT64_MAX;
	volatile int64_t x76 = -1LL;
	volatile uint64_t t12 = 146170106391750LLU;

	t12 = (x73+(x74&(x75+x76)));

	if (t12 != 18446744073709551482LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = INT64_MIN;
	uint64_t x78 = 5LLU;
	int8_t x79 = INT8_MAX;
	int16_t x80 = INT16_MAX;
	volatile uint64_t t13 = 1LLU;

	t13 = (x77+(x78&(x79+x80)));

	if (t13 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = 26216U;
	int64_t x94 = -229151062691LL;
	volatile int64_t t14 = 5LL;

	t14 = (x93+(x94&(x95+x96)));

	if (t14 != 2777196417LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x97 = 38U;
	static int64_t x99 = -42LL;
	uint32_t x100 = 30U;

	t15 = (x97+(x98&(x99+x100)));

	if (t15 != 1450LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = 8;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MAX;
	int16_t x104 = 0;

	t16 = (x101+(x102&(x103+x104)));

	if (t16 != 263) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = 67025166330LL;
	static int64_t x110 = -1LL;
	uint64_t x111 = 61334113224250LLU;
	static uint64_t x112 = 3459386276332LLU;

	t17 = (x109+(x110&(x111+x112)));

	if (t17 != 64860524666912LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x113 = 14U;
	int64_t x114 = INT64_MIN;
	int16_t x115 = -3;
	uint64_t x116 = 594638LLU;
	volatile uint64_t t18 = 158175215LLU;

	t18 = (x113+(x114&(x115+x116)));

	if (t18 != 14LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x117 = 62U;
	int8_t x118 = -11;
	volatile uint16_t x119 = UINT16_MAX;
	volatile uint32_t t19 = 4U;

	t19 = (x117+(x118&(x119+x120)));

	if (t19 != 65598U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x121 = INT16_MIN;
	volatile int16_t x122 = -1;
	volatile int64_t x124 = 31LL;
	int64_t t20 = -33LL;

	t20 = (x121+(x122&(x123+x124)));

	if (t20 != -32730LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x125 = -308;
	uint64_t x126 = 54076152672199LLU;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MAX;
	uint64_t t21 = 4272148159124242LLU;

	t21 = (x125+(x126&(x127+x128)));

	if (t21 != 54075785740051LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	static uint16_t x132 = 5U;
	int64_t t22 = INT64_MIN;

	t22 = (x129+(x130&(x131+x132)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;
	static uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MIN;
	volatile uint32_t t23 = 995256087U;

	t23 = (x133+(x134&(x135+x136)));

	if (t23 != 4294934526U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x137 = INT32_MAX;
	volatile uint32_t x138 = 364937180U;
	int8_t x139 = -1;
	volatile uint32_t t24 = 104U;

	t24 = (x137+(x138&(x139+x140)));

	if (t24 != 2512420827U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x141 = INT64_MIN;
	static int8_t x143 = INT8_MIN;
	uint32_t x144 = 4756U;
	int64_t t25 = -522799LL;

	t25 = (x141+(x142&(x143+x144)));

	if (t25 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = 6404700LL;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = 56U;
	static int64_t x148 = INT64_MIN;
	volatile int64_t t26 = 457189348136415LL;

	t26 = (x145+(x146&(x147+x148)));

	if (t26 != -9223372036848371108LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	int32_t x151 = 0;
	uint64_t x152 = 1754LLU;

	t27 = (x149+(x150&(x151+x152)));

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x153 = INT64_MIN;
	uint8_t x156 = UINT8_MAX;
	uint64_t t28 = 7645932532LLU;

	t28 = (x153+(x154&(x155+x156)));

	if (t28 != 9223372036854775948LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x157 = UINT8_MAX;
	volatile uint32_t x158 = 7U;
	static volatile int8_t x159 = -12;
	int64_t x160 = INT64_MAX;
	volatile int64_t t29 = 508147LL;

	t29 = (x157+(x158&(x159+x160)));

	if (t29 != 258LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x161 = 3U;
	uint32_t x162 = 38177U;
	static volatile uint32_t x163 = UINT32_MAX;
	int8_t x164 = -5;
	uint32_t t30 = 567575277U;

	t30 = (x161+(x162&(x163+x164)));

	if (t30 != 38179U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x169 = -6LL;
	int8_t x170 = 1;
	int16_t x171 = -1;
	volatile int64_t t31 = -9879LL;

	t31 = (x169+(x170&(x171+x172)));

	if (t31 != -6LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = 11237941;
	static volatile int16_t x175 = INT16_MIN;
	uint32_t x176 = 13879309U;
	uint32_t t32 = 617011U;

	t32 = (x173+(x174&(x175+x176)));

	if (t32 != 8570885U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t33 = 26;

	t33 = (x177+(x178&(x179+x180)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x181 = 10U;
	int16_t x182 = 197;
	static int32_t x183 = INT32_MAX;
	volatile int8_t x184 = INT8_MIN;

	t34 = (x181+(x182&(x183+x184)));

	if (t34 != 79) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = -41;
	uint16_t x187 = 14U;
	volatile uint8_t x188 = 3U;
	int32_t t35 = 1;

	t35 = (x185+(x186&(x187+x188)));

	if (t35 != -24) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x189 = INT8_MAX;
	int16_t x191 = -1;
	int32_t x192 = -1;
	volatile int64_t t36 = -9649262057095LL;

	t36 = (x189+(x190&(x191+x192)));

	if (t36 != 125LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x193 = 12U;
	static volatile int16_t x195 = 3;
	int32_t x196 = -1;

	t37 = (x193+(x194&(x195+x196)));

	if (t37 != 14LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x197 = 8U;
	uint32_t x198 = 307134552U;
	uint8_t x199 = 59U;
	uint32_t x200 = UINT32_MAX;
	uint32_t t38 = 0U;

	t38 = (x197+(x198&(x199+x200)));

	if (t38 != 32U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MAX;
	volatile int64_t t39 = -12407045074364805LL;

	t39 = (x201+(x202&(x203+x204)));

	if (t39 != 2927LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x206 = -1;
	uint8_t x207 = 0U;
	static int8_t x208 = INT8_MAX;
	static int32_t t40 = 403049185;

	t40 = (x205+(x206&(x207+x208)));

	if (t40 != 32894) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MAX;
	static int32_t x211 = 3863;
	uint64_t x212 = 120830LLU;
	volatile uint64_t t41 = 8094918464LLU;

	t41 = (x209+(x210&(x211+x212)));

	if (t41 != 18446744071562192661LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = 3124;
	int8_t x222 = -8;
	int8_t x223 = INT8_MIN;
	int64_t x224 = -1LL;
	static int64_t t42 = -1LL;

	t42 = (x221+(x222&(x223+x224)));

	if (t42 != 2988LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x226 = 8LLU;
	uint8_t x227 = UINT8_MAX;
	volatile int32_t x228 = -1;
	uint64_t t43 = 1772830124LLU;

	t43 = (x225+(x226&(x227+x228)));

	if (t43 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x234 = 407786989160549LL;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = 3U;
	int64_t t44 = -15311LL;

	t44 = (x233+(x234&(x235+x236)));

	if (t44 != -15165507LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x238 = INT64_MIN;
	uint16_t x239 = 1886U;
	volatile uint64_t t45 = 3LLU;

	t45 = (x237+(x238&(x239+x240)));

	if (t45 != 65535LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MIN;
	volatile int16_t x242 = INT16_MIN;
	int32_t x243 = -30306;
	int64_t x244 = -1LL;
	int64_t t46 = 91252863548722142LL;

	t46 = (x241+(x242&(x243+x244)));

	if (t46 != -32896LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x246 = 38251876;
	static uint64_t x248 = UINT64_MAX;
	uint64_t t47 = 712356LLU;

	t47 = (x245+(x246&(x247+x248)));

	if (t47 != 493667LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile int64_t x250 = INT64_MAX;
	int32_t x251 = 69812;
	int32_t x252 = -1;
	int64_t t48 = -685400LL;

	t48 = (x249+(x250&(x251+x252)));

	if (t48 != 69683LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x270 = 33U;
	int64_t x271 = INT64_MIN;

	t49 = (x269+(x270&(x271+x272)));

	if (t49 != 61LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = -1;
	int32_t x275 = INT32_MIN;
	static int64_t x276 = INT64_MAX;
	volatile int64_t t50 = 121142877LL;

	t50 = (x273+(x274&(x275+x276)));

	if (t50 != -2147483649LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x278 = -4275;
	volatile int8_t x280 = -1;
	static volatile uint64_t t51 = 842LLU;

	t51 = (x277+(x278&(x279+x280)));

	if (t51 != 12978810LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x281 = INT16_MAX;
	volatile uint64_t x282 = 55592278LLU;
	uint64_t x284 = 10226374552LLU;
	volatile uint64_t t52 = 212593LLU;

	t52 = (x281+(x282&(x283+x284)));

	if (t52 != 16811269LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x286 = 13U;
	int32_t x287 = INT32_MAX;
	int64_t x288 = INT64_MIN;

	t53 = (x285+(x286&(x287+x288)));

	if (t53 != -2203LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x289 = 15;
	uint8_t x290 = 39U;
	uint64_t x291 = UINT64_MAX;
	volatile int64_t x292 = -1LL;

	t54 = (x289+(x290&(x291+x292)));

	if (t54 != 53LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x295 = INT16_MIN;
	int32_t t55 = 45192385;

	t55 = (x293+(x294&(x295+x296)));

	if (t55 != 1075) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x297 = 223418079;
	static int16_t x298 = 1233;
	static int32_t x299 = -112712146;
	int16_t x300 = INT16_MIN;
	static int32_t t56 = -1890;

	t56 = (x297+(x298&(x299+x300)));

	if (t56 != 223419103) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x302 = -8136113502010095LL;
	uint16_t x304 = 3U;
	int64_t t57 = -27LL;

	t57 = (x301+(x302&(x303+x304)));

	if (t57 != -8136113502018466LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x317 = 6U;
	static int32_t x318 = INT32_MIN;
	int32_t x319 = 4413863;
	int16_t x320 = INT16_MIN;
	int32_t t58 = -99016301;

	t58 = (x317+(x318&(x319+x320)));

	if (t58 != 6) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x321 = INT64_MIN;
	static int8_t x322 = 1;
	uint8_t x323 = 1U;
	static volatile int32_t x324 = 22173237;
	static volatile int64_t t59 = INT64_MIN;

	t59 = (x321+(x322&(x323+x324)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x325 = INT64_MAX;
	static volatile int8_t x326 = INT8_MIN;
	volatile int16_t x327 = -2;
	uint64_t x328 = 9536657543067047LLU;
	uint64_t t60 = 30756478564328LLU;

	t60 = (x325+(x326&(x327+x328)));

	if (t60 != 9232908694397842815LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x329 = INT8_MAX;
	uint64_t t61 = 278210589150992988LLU;

	t61 = (x329+(x330&(x331+x332)));

	if (t61 != 435LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x335 = INT16_MIN;

	t62 = (x333+(x334&(x335+x336)));

	if (t62 != 974549345112LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x337 = 514U;
	static uint8_t x338 = 17U;
	volatile int16_t x339 = -1;
	int16_t x340 = -1;
	int32_t t63 = -106208069;

	t63 = (x337+(x338&(x339+x340)));

	if (t63 != 530) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x341 = INT32_MIN;
	static int8_t x342 = -1;
	int32_t x343 = -1;
	uint32_t x344 = 261082422U;
	uint32_t t64 = 950710U;

	t64 = (x341+(x342&(x343+x344)));

	if (t64 != 2408566069U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x345 = UINT16_MAX;
	int64_t x346 = INT64_MAX;
	int64_t x347 = 33128570696112029LL;
	static int64_t x348 = -1LL;
	volatile int64_t t65 = -26012396LL;

	t65 = (x345+(x346&(x347+x348)));

	if (t65 != 33128570696177563LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x351 = -1LL;
	volatile int8_t x352 = 10;

	t66 = (x349+(x350&(x351+x352)));

	if (t66 != 40800LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x353 = -1;
	uint16_t x354 = 4U;
	static uint8_t x356 = 4U;
	volatile int32_t t67 = -3063;

	t67 = (x353+(x354&(x355+x356)));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x357 = INT8_MIN;
	static uint32_t x358 = 1U;
	static uint8_t x359 = 7U;
	uint32_t t68 = 699516791U;

	t68 = (x357+(x358&(x359+x360)));

	if (t68 != 4294967169U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x362 = INT16_MAX;
	volatile int32_t x364 = INT32_MIN;
	volatile int64_t t69 = 124970LL;

	t69 = (x361+(x362&(x363+x364)));

	if (t69 != 10054LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x369 = 1U;
	static volatile int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int32_t t70 = 232408;

	t70 = (x369+(x370&(x371+x372)));

	if (t70 != 2147483520) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x374 = 25U;
	volatile int64_t x375 = -163428LL;
	uint16_t x376 = UINT16_MAX;
	volatile int64_t t71 = 94459LL;

	t71 = (x373+(x374&(x375+x376)));

	if (t71 != 405LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x377 = 111624LL;
	uint16_t x378 = 231U;
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	static int64_t t72 = 12572917LL;

	t72 = (x377+(x378&(x379+x380)));

	if (t72 != 111855LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x385 = 1741412404898LLU;
	volatile int8_t x386 = INT8_MAX;
	int16_t x387 = 3599;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t73 = 149261489734456LLU;

	t73 = (x385+(x386&(x387+x388)));

	if (t73 != 1741412404912LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x393 = -1;
	uint64_t x394 = 2915214719LLU;
	volatile int16_t x396 = INT16_MAX;

	t74 = (x393+(x394&(x395+x396)));

	if (t74 != 9598LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MAX;
	uint8_t x400 = 41U;
	uint64_t t75 = 676185709413817147LLU;

	t75 = (x397+(x398&(x399+x400)));

	if (t75 != 7351418LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x401 = 1199;
	int32_t x402 = -7289586;
	volatile int64_t x403 = 168LL;
	int16_t x404 = -1;

	t76 = (x401+(x402&(x403+x404)));

	if (t76 != 1205LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x405 = -1LL;
	static int32_t x406 = 132131;
	volatile uint16_t x407 = UINT16_MAX;
	int32_t x408 = -332439533;

	t77 = (x405+(x406&(x407+x408)));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MIN;

	t78 = (x409+(x410&(x411+x412)));

	if (t78 != 9223372041149710614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x417 = UINT64_MAX;
	uint64_t x418 = 2936978060380451400LLU;
	volatile int64_t x419 = 25445553544438LL;
	static int32_t x420 = -28134;

	t79 = (x417+(x418&(x419+x420)));

	if (t79 != 23244363375103LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MAX;
	volatile uint64_t x423 = 45313LLU;
	uint16_t x424 = UINT16_MAX;
	volatile uint64_t t80 = 51481372594290LLU;

	t80 = (x421+(x422&(x423+x424)));

	if (t80 != 9223372036854886656LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x425 = -1LL;
	uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 15U;
	volatile int8_t x428 = INT8_MIN;

	t81 = (x425+(x426&(x427+x428)));

	if (t81 != 4294967182LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x429 = -1;
	int64_t x430 = 243LL;
	volatile int32_t x431 = 149627644;
	uint32_t x432 = UINT32_MAX;

	t82 = (x429+(x430&(x431+x432)));

	if (t82 != 242LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x433 = -1;
	static int64_t x434 = -1LL;
	int16_t x435 = -1;
	int32_t x436 = -1014822;
	volatile int64_t t83 = -16790972258493658LL;

	t83 = (x433+(x434&(x435+x436)));

	if (t83 != -1014824LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x438 = -1;
	int64_t x439 = -113LL;
	volatile int8_t x440 = 1;
	static volatile int64_t t84 = 210199502460LL;

	t84 = (x437+(x438&(x439+x440)));

	if (t84 != -142LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x441 = INT32_MAX;
	volatile int16_t x442 = INT16_MIN;
	int32_t x443 = 5291;
	uint64_t x444 = 439619501LLU;
	uint64_t t85 = 4LLU;

	t85 = (x441+(x442&(x443+x444)));

	if (t85 != 2587099135LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x445 = 14930U;
	static int16_t x446 = INT16_MIN;
	static int16_t x447 = -408;
	static volatile uint32_t t86 = 60U;

	t86 = (x445+(x446&(x447+x448)));

	if (t86 != 14930U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x450 = 4927;
	uint16_t x451 = 9U;
	volatile uint32_t x452 = UINT32_MAX;
	volatile int64_t t87 = 53LL;

	t87 = (x449+(x450&(x451+x452)));

	if (t87 != -8692446759438579LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x453 = 1U;
	int64_t x454 = 29598353223939LL;
	static int16_t x455 = INT16_MIN;
	static volatile int64_t t88 = -1LL;

	t88 = (x453+(x454&(x455+x456)));

	if (t88 != 29598353223940LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x459 = INT32_MIN;
	int64_t x460 = 4125036084063174LL;
	int64_t t89 = -1987889078234735LL;

	t89 = (x457+(x458&(x459+x460)));

	if (t89 != 4125033936642495LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x461 = -1LL;
	uint8_t x463 = 9U;
	int8_t x464 = INT8_MIN;

	t90 = (x461+(x462&(x463+x464)));

	if (t90 != 32648LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x465 = 1U;
	static volatile int8_t x466 = INT8_MIN;
	int8_t x467 = 17;
	static volatile int32_t t91 = -21604973;

	t91 = (x465+(x466&(x467+x468)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x469 = -241624956965372LL;
	int32_t x470 = INT32_MIN;
	uint16_t x472 = 38U;
	volatile int64_t t92 = 4537906150411823208LL;

	t92 = (x469+(x470&(x471+x472)));

	if (t92 != -241624956965372LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x474 = UINT16_MAX;
	uint64_t x475 = UINT64_MAX;
	uint8_t x476 = 1U;
	volatile uint64_t t93 = 61598251LLU;

	t93 = (x473+(x474&(x475+x476)));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x478 = -2LL;
	volatile int16_t x479 = 644;
	int16_t x480 = INT16_MIN;
	int64_t t94 = 1075LL;

	t94 = (x477+(x478&(x479+x480)));

	if (t94 != -31997LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x483 = -12;
	uint64_t x484 = 15407855LLU;
	uint64_t t95 = 5422796090LLU;

	t95 = (x481+(x482&(x483+x484)));

	if (t95 != 50191062109LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x485 = INT32_MIN;
	int16_t x486 = INT16_MIN;
	uint64_t x487 = 508754372191LLU;
	volatile int16_t x488 = -1;
	uint64_t t96 = 3698586745LLU;

	t96 = (x485+(x486&(x487+x488)));

	if (t96 != 506606878720LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x497 = INT32_MIN;
	volatile int8_t x498 = INT8_MAX;
	int32_t x499 = 128187000;
	int8_t x500 = INT8_MAX;
	int32_t t97 = -16763384;

	t97 = (x497+(x498&(x499+x500)));

	if (t97 != -2147483529) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x501 = 7U;
	volatile uint16_t x502 = 28U;
	volatile int8_t x503 = INT8_MAX;
	uint16_t x504 = 1U;
	int32_t t98 = 428;

	t98 = (x501+(x502&(x503+x504)));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x505 = 2302;
	volatile int16_t x506 = INT16_MAX;
	int8_t x507 = 0;
	int16_t x508 = INT16_MIN;
	static int32_t t99 = 3955;

	t99 = (x505+(x506&(x507+x508)));

	if (t99 != 2302) { NG(); } else { ; }
	
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

