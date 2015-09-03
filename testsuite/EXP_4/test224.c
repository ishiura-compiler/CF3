#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int16_t x2 = -1;
static int32_t t0 = 93718049;
int8_t x9 = INT8_MIN;
volatile int8_t x13 = INT8_MAX;
int64_t t4 = 9925407612564LL;
volatile int8_t x26 = -1;
int16_t x28 = 18;
uint32_t x29 = UINT32_MAX;
static int8_t x32 = -1;
int8_t x39 = INT8_MIN;
int64_t x43 = 2634320690028227LL;
volatile uint32_t t11 = 4U;
uint16_t x57 = UINT16_MAX;
int32_t x59 = -1;
uint8_t x61 = 10U;
int64_t x85 = -1LL;
int64_t t17 = -29LL;
static int32_t x98 = -1;
int32_t t19 = -218;
volatile uint64_t x102 = UINT64_MAX;
int8_t x106 = INT8_MAX;
int32_t x116 = 1780;
volatile uint16_t x121 = 19993U;
uint16_t x124 = UINT16_MAX;
static uint64_t t25 = 3593160LLU;
volatile uint32_t x129 = 19U;
static uint32_t t27 = 1930848110U;
static volatile uint8_t x139 = 4U;
volatile uint32_t x141 = 3U;
uint32_t x155 = UINT32_MAX;
volatile uint64_t t32 = 74027020939705708LLU;
volatile uint16_t x173 = 6620U;
volatile int64_t t34 = -545428LL;
int8_t x179 = INT8_MIN;
uint16_t x189 = 94U;
uint32_t x205 = UINT32_MAX;
uint16_t x208 = UINT16_MAX;
volatile int64_t x231 = INT64_MAX;
static int16_t x237 = 652;
static volatile int64_t x241 = -29090206771631419LL;
uint32_t x242 = 7078U;
int32_t x243 = INT32_MIN;
uint8_t x246 = 5U;
int32_t t48 = -2926898;
int32_t x250 = 55;
volatile uint32_t t51 = 106U;
static int16_t x270 = INT16_MAX;
int32_t x271 = INT32_MIN;
uint32_t x273 = 779U;
volatile uint8_t x274 = 1U;
static volatile int64_t x275 = -1LL;
int64_t x276 = INT64_MIN;
volatile uint64_t t54 = 39193120202529LLU;
int64_t x300 = 417875LL;
int64_t t57 = -646612456673LL;
uint16_t x310 = UINT16_MAX;
volatile int16_t x320 = INT16_MIN;
int32_t t60 = 1426151;
uint32_t x323 = UINT32_MAX;
uint64_t t61 = 687LLU;
static volatile int16_t x326 = 430;
int16_t x330 = INT16_MIN;
int16_t x338 = INT16_MAX;
uint32_t x339 = 2196U;
int64_t x340 = 812877LL;
static uint16_t x341 = 2U;
volatile int64_t t66 = 48755299901857713LL;
int32_t x352 = 435;
int32_t t67 = 94813238;
volatile int16_t x369 = 0;
int64_t x374 = -7234LL;
uint32_t x383 = 42U;
static int8_t x388 = INT8_MIN;
int64_t x390 = INT64_MIN;
int64_t t73 = 255295164LL;
static volatile int32_t x409 = INT32_MIN;
int16_t x410 = INT16_MAX;
int16_t x412 = INT16_MIN;
volatile int64_t x414 = -3757675041737722LL;
int8_t x424 = 2;
static int16_t x428 = INT16_MIN;
static int32_t t81 = -2053736;
static int64_t x433 = -1LL;
static uint64_t t82 = 51111198566988962LLU;
volatile int64_t t83 = -11203LL;
static uint32_t x441 = UINT32_MAX;
uint8_t x451 = 0U;
static int16_t x457 = INT16_MAX;
int8_t x458 = -1;
volatile uint64_t x461 = 10350962LLU;
int16_t x466 = 28;
int64_t x471 = -1LL;
uint8_t x472 = 25U;
uint64_t x474 = UINT64_MAX;
int32_t x481 = -794726;
static int8_t x486 = INT8_MIN;
uint32_t t93 = 19525U;
static int8_t x490 = INT8_MAX;
uint64_t x498 = UINT64_MAX;
volatile uint64_t t96 = 298920007392032LLU;
volatile int16_t x513 = -1;
int16_t x515 = -8180;
uint64_t x517 = UINT64_MAX;


void f0(void) {
	int8_t x3 = -12;
	int8_t x4 = 18;

	t0 = (x1*(x2%(x3-x4)));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -2LL;
	static uint32_t x6 = 184U;
	int32_t x7 = -973349286;
	int16_t x8 = 2030;
	volatile int64_t t1 = 63120150748168071LL;

	t1 = (x5*(x6%(x7-x8)));

	if (t1 != -368LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int16_t x11 = 747;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -8LL;

	t2 = (x9*(x10%(x11-x12)));

	if (t2 != -4194176LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	int64_t x15 = 289LL;
	int32_t x16 = INT32_MIN;
	int64_t t3 = -1928769742760LL;

	t3 = (x13*(x14%(x15-x16)));

	if (t3 != -127LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint16_t x18 = 22U;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -109220029729191LL;

	t4 = (x17*(x18%(x19-x20)));

	if (t4 != -720896LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 24314LLU;
	static uint64_t x27 = UINT64_MAX;
	uint64_t t5 = 104245161345814876LLU;

	t5 = (x25*(x26%(x27-x28)));

	if (t5 != 437652LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x30 = INT16_MIN;
	uint32_t x31 = 51U;
	volatile uint32_t t6 = 479480U;

	t6 = (x29*(x30%(x31-x32)));

	if (t6 != 4294967256U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 2U;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = 5420313861557240LLU;
	volatile uint64_t t7 = 8039207515LLU;

	t7 = (x33*(x34%(x35-x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = UINT64_MAX;
	uint32_t x38 = UINT32_MAX;
	int16_t x40 = -1;
	volatile uint64_t t8 = 355804681LLU;

	t8 = (x37*(x38%(x39-x40)));

	if (t8 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int64_t x42 = 28527742289563247LL;
	uint16_t x44 = 27U;
	int64_t t9 = 16121719163LL;

	t9 = (x41*(x42%(x43-x44)));

	if (t9 != -2184535389281247LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = 13521U;
	int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	uint32_t t10 = 63640125U;

	t10 = (x49*(x50%(x51-x52)));

	if (t10 != 4294859128U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 0U;
	uint32_t x54 = 459073421U;
	uint8_t x55 = UINT8_MAX;
	volatile int8_t x56 = INT8_MIN;

	t11 = (x53*(x54%(x55-x56)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = 99994716885278LLU;
	int64_t x60 = INT64_MAX;
	uint64_t t12 = 52LLU;

	t12 = (x57*(x58%(x59-x60)));

	if (t12 != 6553153771076693730LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x62 = -13;
	int16_t x63 = INT16_MAX;
	uint32_t x64 = UINT32_MAX;
	uint32_t t13 = 207U;

	t13 = (x61*(x62%(x63-x64)));

	if (t13 != 327550U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = INT32_MAX;
	uint8_t x66 = UINT8_MAX;
	int64_t x67 = 40487368LL;
	volatile int16_t x68 = INT16_MAX;
	static volatile int64_t t14 = 1267808678489977472LL;

	t14 = (x65*(x66%(x67-x68)));

	if (t14 != 547608329985LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MIN;
	static int8_t x74 = -1;
	int64_t x75 = -3469370692818LL;
	uint32_t x76 = UINT32_MAX;
	int64_t t15 = -474602105LL;

	t15 = (x73*(x74%(x75-x76)));

	if (t15 != 32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	static int16_t x82 = INT16_MIN;
	static int32_t x83 = INT32_MAX;
	volatile uint16_t x84 = 28U;
	static volatile int32_t t16 = -3913;

	t16 = (x81*(x82%(x83-x84)));

	if (t16 != 4194304) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = -1;
	volatile int32_t x87 = -1;
	int64_t x88 = INT64_MIN;

	t17 = (x85*(x86%(x87-x88)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x93 = 3U;
	uint32_t x94 = 57U;
	static int16_t x95 = INT16_MIN;
	static uint64_t x96 = 47521LLU;
	uint64_t t18 = 13901114LLU;

	t18 = (x93*(x94%(x95-x96)));

	if (t18 != 171LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = INT8_MIN;
	static int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MAX;

	t19 = (x97*(x98%(x99-x100)));

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x101 = UINT16_MAX;
	int16_t x103 = -25;
	volatile int16_t x104 = INT16_MAX;
	static uint64_t t20 = 40073487067180LLU;

	t20 = (x101*(x102%(x103-x104)));

	if (t20 != 2148958185LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x105 = 46LLU;
	int16_t x107 = 1;
	int16_t x108 = INT16_MIN;
	uint64_t t21 = 996706758851442LLU;

	t21 = (x105*(x106%(x107-x108)));

	if (t21 != 5842LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x113 = 191894941LLU;
	static uint32_t x114 = UINT32_MAX;
	volatile int32_t x115 = -1;
	uint64_t t22 = 1630954810164259272LLU;

	t22 = (x113*(x114%(x115-x116)));

	if (t22 != 341572994980LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x117 = 1U;
	int8_t x118 = -1;
	int64_t x119 = -4158LL;
	int16_t x120 = 1;
	int64_t t23 = 498LL;

	t23 = (x117*(x118%(x119-x120)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x122 = UINT16_MAX;
	uint8_t x123 = UINT8_MAX;
	static volatile int32_t t24 = -1142;

	t24 = (x121*(x122%(x123-x124)));

	if (t24 != 5098215) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x125 = 70U;
	uint64_t x126 = 25LLU;
	int16_t x127 = -27;
	static int8_t x128 = INT8_MAX;

	t25 = (x125*(x126%(x127-x128)));

	if (t25 != 1750LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x130 = 13485259;
	int8_t x131 = -4;
	int64_t x132 = INT64_MIN;
	int64_t t26 = -64LL;

	t26 = (x129*(x130%(x131-x132)));

	if (t26 != 256219921LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = 32U;
	volatile int32_t x135 = -1;
	uint16_t x136 = 14271U;

	t27 = (x133*(x134%(x135-x136)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	static int16_t x138 = INT16_MIN;
	int64_t x140 = INT64_MAX;
	volatile int64_t t28 = 4525506850346274LL;

	t28 = (x137*(x138%(x139-x140)));

	if (t28 != 70368744177664LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x142 = 59688;
	int16_t x143 = -3743;
	int8_t x144 = INT8_MIN;
	uint32_t t29 = 465U;

	t29 = (x141*(x142%(x143-x144)));

	if (t29 != 5544U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = INT8_MAX;
	volatile uint8_t x146 = 1U;
	static int8_t x147 = INT8_MIN;
	volatile uint64_t x148 = UINT64_MAX;
	volatile uint64_t t30 = 11624194416796LLU;

	t30 = (x145*(x146%(x147-x148)));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 0U;
	int8_t x150 = -1;
	int8_t x151 = -19;
	int64_t x152 = INT64_MIN;
	static int64_t t31 = 120585283LL;

	t31 = (x149*(x150%(x151-x152)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x153 = INT16_MAX;
	uint64_t x154 = 1281127752918683LLU;
	static int32_t x156 = 7;

	t32 = (x153*(x154%(x155-x156)));

	if (t32 != 112568328597501LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x169 = INT16_MAX;
	int16_t x170 = -12877;
	static int8_t x171 = INT8_MIN;
	volatile int8_t x172 = -9;
	int32_t t33 = -30406194;

	t33 = (x169*(x170%(x171-x172)));

	if (t33 != -819175) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x174 = 0;
	int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;

	t34 = (x173*(x174%(x175-x176)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = 0;
	int8_t x178 = 5;
	int64_t x180 = INT64_MIN;
	int64_t t35 = 511449490038LL;

	t35 = (x177*(x178%(x179-x180)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x181 = -1;
	static int64_t x182 = INT64_MIN;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	static uint64_t t36 = 209LLU;

	t36 = (x181*(x182%(x183-x184)));

	if (t36 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = INT16_MIN;
	static volatile int64_t x187 = 2447LL;
	static int16_t x188 = INT16_MIN;
	int64_t t37 = 698507664501LL;

	t37 = (x185*(x186%(x187-x188)));

	if (t37 != -140737488322560LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x190 = INT64_MIN;
	int16_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	int64_t t38 = 1968009438LL;

	t38 = (x189*(x190%(x191-x192)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = 43288;
	static int8_t x194 = -1;
	int16_t x195 = 36;
	static uint32_t x196 = 555U;
	static volatile uint32_t t39 = 11609279U;

	t39 = (x193*(x194%(x195-x196)));

	if (t39 != 22423184U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x206 = 0U;
	int32_t x207 = INT32_MAX;
	uint32_t t40 = 913242U;

	t40 = (x205*(x206%(x207-x208)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = 2;
	int64_t x210 = INT64_MAX;
	uint64_t x211 = 109620001325685LLU;
	volatile int32_t x212 = INT32_MAX;
	uint64_t t41 = 3732358454444401LLU;

	t41 = (x209*(x210%(x211-x212)));

	if (t41 != 32393463712898LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = INT16_MIN;
	volatile int32_t x214 = INT32_MAX;
	uint64_t x215 = 11448LLU;
	int8_t x216 = 1;
	static uint64_t t42 = 18927322LLU;

	t42 = (x213*(x214%(x215-x216)));

	if (t42 != 18446744073593126912LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = 115U;
	int64_t x218 = 3598533394LL;
	uint64_t x219 = 9309260333683LLU;
	int32_t x220 = -1;
	uint64_t t43 = 16868105LLU;

	t43 = (x217*(x218%(x219-x220)));

	if (t43 != 413831340310LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x229 = 3674U;
	volatile int64_t x230 = -1LL;
	volatile int64_t x232 = 127029188070LL;
	int64_t t44 = -1LL;

	t44 = (x229*(x230%(x231-x232)));

	if (t44 != -3674LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 80U;
	static int64_t x235 = INT64_MIN;
	volatile int64_t x236 = -1LL;
	volatile int64_t t45 = -126188LL;

	t45 = (x233*(x234%(x235-x236)));

	if (t45 != 343597383600LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x238 = 1LL;
	static volatile int32_t x239 = 26224;
	uint64_t x240 = 1540474387423340LLU;
	static uint64_t t46 = 28344373862786LLU;

	t46 = (x237*(x238%(x239-x240)));

	if (t46 != 652LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x244 = 34961412LLU;
	uint64_t t47 = 34797999185543957LLU;

	t47 = (x241*(x242%(x243-x244)));

	if (t47 != 15460445354907435710LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = INT8_MIN;
	volatile int32_t x247 = -1;
	int8_t x248 = INT8_MIN;

	t48 = (x245*(x246%(x247-x248)));

	if (t48 != -640) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = 250726;
	int16_t x251 = INT16_MAX;
	static uint16_t x252 = 1011U;
	volatile int32_t t49 = -217;

	t49 = (x249*(x250%(x251-x252)));

	if (t49 != 13789930) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x261 = 14643U;
	static uint8_t x262 = 9U;
	int64_t x263 = -3291856252LL;
	uint16_t x264 = 359U;
	volatile int64_t t50 = 266997503927289500LL;

	t50 = (x261*(x262%(x263-x264)));

	if (t50 != 131787LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x265 = 1884U;
	uint32_t x266 = 121557U;
	int8_t x267 = INT8_MAX;
	int8_t x268 = INT8_MIN;

	t51 = (x265*(x266%(x267-x268)));

	if (t51 != 333468U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x269 = 7538966LL;
	int64_t x272 = -1LL;
	volatile int64_t t52 = 60300876599222LL;

	t52 = (x269*(x270%(x271-x272)));

	if (t52 != 247029298922LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t t53 = 5154711418508LL;

	t53 = (x273*(x274%(x275-x276)));

	if (t53 != 779LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x282 = UINT32_MAX;
	uint64_t x283 = 44LLU;
	int64_t x284 = -251061LL;

	t54 = (x281*(x282%(x283-x284)));

	if (t54 != 18446599386998767616LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x285 = -336659202;
	static volatile uint32_t x286 = UINT32_MAX;
	volatile uint32_t x287 = 25U;
	int64_t x288 = -17174004179857LL;
	int64_t t55 = -7916LL;

	t55 = (x285*(x286%(x287-x288)));

	if (t55 != -1445940262150798590LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x289 = 71749485095606834LLU;
	int32_t x290 = 254;
	uint16_t x291 = 803U;
	int64_t x292 = INT64_MAX;
	static volatile uint64_t t56 = 238508LLU;

	t56 = (x289*(x290%(x291-x292)));

	if (t56 != 18224369214284135836LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x297 = INT16_MAX;
	int16_t x298 = -1;
	static uint8_t x299 = UINT8_MAX;

	t57 = (x297*(x298%(x299-x300)));

	if (t57 != -32767LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x301 = 1758360976989637LLU;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	uint64_t t58 = 26LLU;

	t58 = (x301*(x302%(x303-x304)));

	if (t58 != 4553722184758551099LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x309 = 311723U;
	int8_t x311 = INT8_MAX;
	int64_t x312 = 618233004674680032LL;
	int64_t t59 = 44409LL;

	t59 = (x309*(x310%(x311-x312)));

	if (t59 != 20428766805LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x317 = 506;
	uint8_t x318 = UINT8_MAX;
	static int32_t x319 = INT32_MIN;

	t60 = (x317*(x318%(x319-x320)));

	if (t60 != 129030) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x321 = UINT64_MAX;
	uint32_t x322 = 384U;
	volatile uint8_t x324 = 12U;

	t61 = (x321*(x322%(x323-x324)));

	if (t61 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = 5;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = -1LL;
	static volatile int64_t t62 = -17636LL;

	t62 = (x325*(x326%(x327-x328)));

	if (t62 != 2150LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x329 = 1U;
	static int16_t x331 = 390;
	uint8_t x332 = 91U;
	int32_t t63 = 1131;

	t63 = (x329*(x330%(x331-x332)));

	if (t63 != -177) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x337 = -1;
	int64_t t64 = -252LL;

	t64 = (x337*(x338%(x339-x340)));

	if (t64 != -32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	volatile int64_t x344 = 13941LL;
	int64_t t65 = 627993188271LL;

	t65 = (x341*(x342%(x343-x344)));

	if (t65 != -777405924LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = 6367075265LL;
	static int16_t x347 = INT16_MIN;
	static int16_t x348 = -1;

	t66 = (x345*(x346%(x347-x348)));

	if (t66 != 694463798LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x349 = -1;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;

	t67 = (x349*(x350%(x351-x352)));

	if (t67 != 13217) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x361 = 827U;
	int8_t x362 = INT8_MAX;
	int16_t x363 = -1;
	uint32_t x364 = 44152300U;
	uint32_t t68 = 557161261U;

	t68 = (x361*(x362%(x363-x364)));

	if (t68 != 105029U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x370 = -3009;
	uint16_t x371 = 174U;
	static uint64_t x372 = 406710653454527873LLU;
	volatile uint64_t t69 = 2721151387409748LLU;

	t69 = (x369*(x370%(x371-x372)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x373 = -1;
	static volatile int16_t x375 = INT16_MIN;
	uint8_t x376 = UINT8_MAX;
	static int64_t t70 = 1LL;

	t70 = (x373*(x374%(x375-x376)));

	if (t70 != 7234LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x381 = UINT16_MAX;
	static int8_t x382 = -1;
	volatile int16_t x384 = -1;
	uint32_t t71 = 770289214U;

	t71 = (x381*(x382%(x383-x384)));

	if (t71 != 983025U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	volatile int32_t x387 = -1;
	volatile int64_t t72 = -11828269052LL;

	t72 = (x385*(x386%(x387-x388)));

	if (t72 != -32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x389 = -6;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = 3U;

	t73 = (x389*(x390%(x391-x392)));

	if (t73 != 12884952978LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x393 = 2857768U;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	static volatile uint32_t t74 = 157072549U;

	t74 = (x393*(x394%(x395-x396)));

	if (t74 != 845938688U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x401 = INT8_MIN;
	uint16_t x402 = 3375U;
	static int8_t x403 = -36;
	int64_t x404 = -1LL;
	int64_t t75 = 6414275429223251LL;

	t75 = (x401*(x402%(x403-x404)));

	if (t75 != -1920LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = -382703826677LL;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	int8_t x408 = -1;
	volatile int64_t t76 = 0LL;

	t76 = (x405*(x406%(x407-x408)));

	if (t76 != 3061630613416LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x411 = -1;
	volatile int32_t t77 = 3;

	t77 = (x409*(x410%(x411-x412)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x413 = 6U;
	int32_t x415 = -650195;
	static volatile uint32_t x416 = 672U;
	int64_t t78 = 25LL;

	t78 = (x413*(x414%(x415-x416)));

	if (t78 != -12957624816LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x417 = INT16_MAX;
	int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MAX;
	uint8_t x420 = UINT8_MAX;
	int64_t t79 = -11411978LL;

	t79 = (x417*(x418%(x419-x420)));

	if (t79 != -4194176LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MIN;
	int64_t x423 = -1LL;
	volatile int64_t t80 = 21352981656LL;

	t80 = (x421*(x422%(x423-x424)));

	if (t80 != 4294967296LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x425 = 54;
	static uint16_t x426 = UINT16_MAX;
	int8_t x427 = INT8_MAX;

	t81 = (x425*(x426%(x427-x428)));

	if (t81 != 1762560) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x434 = -112;
	static uint64_t x435 = UINT64_MAX;
	int32_t x436 = -937;

	t82 = (x433*(x434%(x435-x436)));

	if (t82 != 18446744073709550776LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x437 = 7U;
	int8_t x438 = -1;
	static uint16_t x439 = 13U;
	int64_t x440 = INT64_MAX;

	t83 = (x437*(x438%(x439-x440)));

	if (t83 != -7LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = 2419LLU;
	static uint64_t t84 = 2LLU;

	t84 = (x441*(x442%(x443-x444)));

	if (t84 != 10389525886605LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x449 = 41U;
	int8_t x450 = 51;
	static uint16_t x452 = 22250U;
	volatile uint32_t t85 = 1U;

	t85 = (x449*(x450%(x451-x452)));

	if (t85 != 2091U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x453 = -6754558;
	int16_t x454 = -5;
	int32_t x455 = 15243;
	volatile uint32_t x456 = 17U;
	volatile uint32_t t86 = 86U;

	t86 = (x453*(x454%(x455-x456)));

	if (t86 != 3772071554U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x459 = 0U;
	uint8_t x460 = 16U;
	static volatile int32_t t87 = -1;

	t87 = (x457*(x458%(x459-x460)));

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x462 = 2;
	static int64_t x463 = INT64_MIN;
	volatile uint8_t x464 = 0U;
	volatile uint64_t t88 = 6314891013398LLU;

	t88 = (x461*(x462%(x463-x464)));

	if (t88 != 20701924LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x465 = -1;
	int8_t x467 = -1;
	static uint8_t x468 = 1U;
	static volatile int32_t t89 = -12496;

	t89 = (x465*(x466%(x467-x468)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x469 = UINT32_MAX;
	uint16_t x470 = UINT16_MAX;
	int64_t t90 = 33359794118448LL;

	t90 = (x469*(x470%(x471-x472)));

	if (t90 != 64424509425LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x473 = 1012U;
	int16_t x475 = 1;
	uint16_t x476 = 3U;
	uint64_t t91 = 33937828845643LLU;

	t91 = (x473*(x474%(x475-x476)));

	if (t91 != 1012LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x482 = 41881715LLU;
	uint32_t x483 = 272U;
	volatile int8_t x484 = 0;
	volatile uint64_t t92 = 1199175844392LLU;

	t92 = (x481*(x482%(x483-x484)));

	if (t92 != 18446744073516433198LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x485 = INT32_MIN;
	int16_t x487 = -6442;
	volatile uint32_t x488 = UINT32_MAX;

	t93 = (x485*(x486%(x487-x488)));

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = -1;
	int64_t x491 = 1211693LL;
	static volatile uint8_t x492 = 4U;
	volatile int64_t t94 = -20891931LL;

	t94 = (x489*(x490%(x491-x492)));

	if (t94 != -127LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x493 = -3;
	volatile int16_t x494 = INT16_MIN;
	uint32_t x495 = 2081U;
	uint64_t x496 = 0LLU;
	uint64_t t95 = 691613LLU;

	t95 = (x493*(x494%(x495-x496)));

	if (t95 != 18446744073709545823LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x497 = 3U;
	static uint32_t x499 = 368U;
	int32_t x500 = 9943;

	t96 = (x497*(x498%(x499-x500)));

	if (t96 != 275041872LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x505 = -1;
	uint8_t x506 = 0U;
	static volatile uint64_t x507 = 1003613070406163970LLU;
	static uint64_t x508 = 4144581945854142748LLU;
	static volatile uint64_t t97 = 88762871146717LLU;

	t97 = (x505*(x506%(x507-x508)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x514 = 15;
	static int64_t x516 = 25LL;
	volatile int64_t t98 = -30121LL;

	t98 = (x513*(x514%(x515-x516)));

	if (t98 != -15LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x518 = INT32_MAX;
	volatile int64_t x519 = -227778189519LL;
	static uint32_t x520 = 7582U;
	volatile uint64_t t99 = 6LLU;

	t99 = (x517*(x518%(x519-x520)));

	if (t99 != 18446744071562067969LLU) { NG(); } else { ; }
	
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

