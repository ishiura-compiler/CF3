#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
int32_t x16 = -1;
uint16_t x17 = 43U;
volatile uint32_t t4 = 95982U;
uint32_t x22 = 831U;
volatile int32_t x26 = -1;
volatile int64_t x29 = INT64_MIN;
volatile uint64_t x38 = 67726797356808LLU;
static int32_t x39 = INT32_MIN;
uint64_t t9 = 170694728LLU;
uint64_t x41 = 24165567306434196LLU;
uint16_t x42 = UINT16_MAX;
static uint16_t x45 = 431U;
static uint32_t x54 = UINT32_MAX;
volatile int64_t t14 = -279LL;
int16_t x64 = -1;
int16_t x76 = INT16_MAX;
int64_t x80 = INT64_MIN;
uint8_t x82 = 2U;
int32_t x84 = INT32_MIN;
int8_t x86 = INT8_MIN;
uint64_t t21 = 163094LLU;
int32_t x91 = -56441734;
static volatile int8_t x111 = INT8_MIN;
volatile int32_t t27 = 23599;
int64_t x122 = 47LL;
volatile int64_t t29 = -93LL;
volatile uint8_t x137 = 27U;
int32_t x140 = -362;
volatile int32_t x144 = 2067;
uint32_t t34 = 11U;
int32_t x145 = -1;
volatile int16_t x147 = INT16_MAX;
int64_t x151 = 7303LL;
int8_t x152 = INT8_MAX;
int8_t x153 = INT8_MIN;
volatile uint16_t x162 = UINT16_MAX;
volatile int32_t x166 = INT32_MAX;
static int16_t x172 = INT16_MIN;
uint16_t x176 = UINT16_MAX;
volatile int8_t x183 = -1;
uint32_t x186 = 2348680U;
static int8_t x188 = INT8_MIN;
volatile int8_t x194 = 42;
volatile int32_t t47 = 30;
volatile int32_t x202 = 12803521;
static uint32_t t49 = 7099U;
int64_t t50 = -3774487LL;
int64_t x214 = 1LL;
uint8_t x215 = 0U;
uint8_t x219 = 54U;
int16_t x226 = INT16_MAX;
int8_t x236 = -1;
static int64_t t59 = 7118LL;
volatile int16_t x249 = 105;
static uint64_t t60 = 554235470553061687LLU;
int32_t x256 = INT32_MIN;
int16_t x280 = INT16_MIN;
int32_t t65 = 982;
int32_t x283 = INT32_MAX;
uint32_t x287 = 1U;
uint8_t x290 = UINT8_MAX;
uint8_t x291 = 2U;
int64_t x296 = INT64_MIN;
int64_t t69 = -676763228070LL;
volatile uint64_t t70 = 1093062425LLU;
volatile uint64_t t71 = 366162149000591337LLU;
static uint64_t x319 = UINT64_MAX;
int16_t x320 = -98;
uint8_t x325 = UINT8_MAX;
volatile uint64_t t75 = 1556LLU;
uint32_t x336 = 4534U;
volatile uint32_t t76 = 1913101808U;
int32_t x337 = -454;
volatile int64_t t79 = 406LL;
int8_t x358 = INT8_MAX;
static uint32_t x359 = 11869U;
static volatile int8_t x361 = INT8_MIN;
uint8_t x364 = 15U;
uint64_t x374 = UINT64_MAX;
volatile int16_t x375 = 2;
volatile uint64_t x379 = 7285569736976262499LLU;
int8_t x384 = INT8_MAX;
volatile int32_t t89 = -15;
uint8_t x396 = UINT8_MAX;
int8_t x398 = INT8_MIN;
int32_t x399 = 1;
int32_t x409 = -1;
uint16_t x411 = UINT16_MAX;
int16_t x412 = INT16_MAX;
uint8_t x415 = 5U;
int32_t x416 = -1;
uint8_t x417 = UINT8_MAX;
int64_t t98 = 3894088008859301LL;
static int32_t x431 = INT32_MIN;


void f0(void) {
	int32_t x1 = -1;
	volatile uint32_t x2 = 332871U;
	int16_t x3 = INT16_MIN;
	volatile uint32_t t0 = 26151U;

	t0 = (x1+(x2+(x3%x4)));

	if (t0 != 332869U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static volatile uint32_t x6 = 31U;
	volatile int8_t x7 = 0;
	int16_t x8 = INT16_MIN;
	volatile int64_t t1 = 12LL;

	t1 = (x5+(x6+(x7%x8)));

	if (t1 != 30LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	static int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MAX;
	volatile uint16_t x12 = 2U;
	static volatile int64_t t2 = 0LL;

	t2 = (x9+(x10+(x11%x12)));

	if (t2 != -4294967295LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x14 = 260264U;
	volatile int64_t x15 = INT64_MIN;
	int64_t t3 = -5338LL;

	t3 = (x13+(x14+(x15%x16)));

	if (t3 != -2147223384LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 79U;
	int32_t x19 = INT32_MAX;
	uint32_t x20 = 89651268U;

	t4 = (x17+(x18+(x19%x20)));

	if (t4 != 85504605U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 30006LLU;
	volatile uint32_t x23 = UINT32_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile uint64_t t5 = 9394114747572LLU;

	t5 = (x21+(x22+(x23%x24)));

	if (t5 != 30837LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	volatile int8_t x27 = INT8_MAX;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 62927916122LLU;

	t6 = (x25+(x26+(x27%x28)));

	if (t6 != 125LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = 9U;
	int8_t x31 = INT8_MAX;
	uint32_t x32 = 1532173U;
	int64_t t7 = -109686399468LL;

	t7 = (x29+(x30+(x31%x32)));

	if (t7 != -9223372036854775672LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static volatile int8_t x34 = INT8_MIN;
	volatile int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MAX;
	volatile int64_t t8 = -90078524117221LL;

	t8 = (x33+(x34+(x35%x36)));

	if (t8 != -2147483777LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 47879042043853763LLU;
	int8_t x40 = INT8_MIN;

	t9 = (x37+(x38+(x39%x40)));

	if (t9 != 47946768841210571LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = -1;
	uint8_t x44 = UINT8_MAX;
	static volatile uint64_t t10 = 865376LLU;

	t10 = (x41+(x42+(x43%x44)));

	if (t10 != 24165567306499730LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	static uint8_t x48 = 73U;
	int32_t t11 = 971306803;

	t11 = (x45+(x46+(x47%x48)));

	if (t11 != -2147483154) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	static volatile int8_t x50 = INT8_MIN;
	static uint16_t x51 = 0U;
	uint64_t x52 = 87094856632703LLU;
	uint64_t t12 = 12314LLU;

	t12 = (x49+(x50+(x51%x52)));

	if (t12 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 49U;
	volatile uint32_t x55 = 85775U;
	int32_t x56 = -3840719;
	uint32_t t13 = 390210775U;

	t13 = (x53+(x54+(x55%x56)));

	if (t13 != 85823U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	static int8_t x58 = -11;
	uint32_t x59 = UINT32_MAX;
	static int64_t x60 = -1LL;

	t14 = (x57+(x58+(x59%x60)));

	if (t14 != 32756LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	uint64_t x62 = 0LLU;
	uint64_t x63 = 1364LLU;
	uint64_t t15 = 179LLU;

	t15 = (x61+(x62+(x63%x64)));

	if (t15 != 18446744073709520212LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 80U;
	int32_t x66 = -40098;
	static volatile uint8_t x67 = 3U;
	volatile uint16_t x68 = 1984U;
	int32_t t16 = -2293;

	t16 = (x65+(x66+(x67%x68)));

	if (t16 != -40015) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 6896541LLU;
	uint32_t x70 = 850U;
	uint64_t x71 = 16322497LLU;
	static volatile int64_t x72 = -6LL;
	volatile uint64_t t17 = 47594741217617078LLU;

	t17 = (x69+(x70+(x71%x72)));

	if (t17 != 23219888LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 20U;
	int32_t x74 = 2;
	static int8_t x75 = INT8_MIN;
	uint32_t t18 = 4U;

	t18 = (x73+(x74+(x75%x76)));

	if (t18 != 4294967190U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 467;
	volatile uint32_t x78 = 5536U;
	uint64_t x79 = 3380085LLU;
	volatile uint64_t t19 = 14861915867864655LLU;

	t19 = (x77+(x78+(x79%x80)));

	if (t19 != 3386088LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 8U;
	static uint64_t x83 = 15859923LLU;
	volatile uint64_t t20 = 6000468848LLU;

	t20 = (x81+(x82+(x83%x84)));

	if (t20 != 15859933LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 3312444607LLU;
	static int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MIN;

	t21 = (x85+(x86+(x87%x88)));

	if (t21 != 3312444479LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -9;
	static int8_t x90 = INT8_MAX;
	int64_t x92 = INT64_MIN;
	static int64_t t22 = 141785537795847LL;

	t22 = (x89+(x90+(x91%x92)));

	if (t22 != -56441616LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 1U;
	static int64_t x94 = INT64_MIN;
	int64_t x95 = INT64_MIN;
	static int16_t x96 = INT16_MIN;
	int64_t t23 = 100036377358LL;

	t23 = (x93+(x94+(x95%x96)));

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	volatile int64_t x98 = 15624622611826558LL;
	uint8_t x99 = 19U;
	int8_t x100 = -1;
	static int64_t t24 = 7935643222LL;

	t24 = (x97+(x98+(x99%x100)));

	if (t24 != -9207747414242949250LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -811695478649LL;
	static int64_t x102 = INT64_MIN;
	volatile uint8_t x103 = 21U;
	uint64_t x104 = UINT64_MAX;
	static uint64_t t25 = 836128627669LLU;

	t25 = (x101+(x102+(x103%x104)));

	if (t25 != 9223371225159297180LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 39LL;
	static uint16_t x106 = 1U;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t26 = -122461146LL;

	t26 = (x105+(x106+(x107%x108)));

	if (t26 != -32728LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 55U;
	int8_t x110 = INT8_MIN;
	int8_t x112 = INT8_MAX;

	t27 = (x109+(x110+(x111%x112)));

	if (t27 != -74) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MIN;
	int8_t x119 = -14;
	uint32_t x120 = 100U;
	int64_t t28 = -444358642049305355LL;

	t28 = (x117+(x118+(x119%x120)));

	if (t28 != -9223372036854775599LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 960U;

	t29 = (x121+(x122+(x123%x124)));

	if (t29 != 174LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -48;
	int16_t x126 = INT16_MAX;
	uint16_t x127 = 6U;
	int16_t x128 = 2710;
	int32_t t30 = -1;

	t30 = (x125+(x126+(x127%x128)));

	if (t30 != 32725) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x129 = 14U;
	volatile int8_t x130 = INT8_MIN;
	volatile uint16_t x131 = 48U;
	int64_t x132 = INT64_MAX;
	static volatile int64_t t31 = -2694403729457750LL;

	t31 = (x129+(x130+(x131%x132)));

	if (t31 != -66LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -224;
	int64_t x134 = -4960635LL;
	static int64_t x135 = INT64_MIN;
	int16_t x136 = 14;
	volatile int64_t t32 = 649LL;

	t32 = (x133+(x134+(x135%x136)));

	if (t32 != -4960867LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x138 = 0U;
	volatile int16_t x139 = INT16_MIN;
	int32_t t33 = -30596894;

	t33 = (x137+(x138+(x139%x140)));

	if (t33 != -161) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = -11;
	static uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;

	t34 = (x141+(x142+(x143%x144)));

	if (t34 != 4294965521U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x146 = INT32_MAX;
	static int64_t x148 = 660984744571962449LL;
	static int64_t t35 = 274548034529525557LL;

	t35 = (x145+(x146+(x147%x148)));

	if (t35 != 2147516413LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = INT32_MIN;
	uint64_t x150 = 8027389184463287LLU;
	volatile uint64_t t36 = 6632277596981404LLU;

	t36 = (x149+(x150+(x151%x152)));

	if (t36 != 8027387036979703LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x154 = INT8_MAX;
	int32_t x155 = -1;
	static int8_t x156 = -13;
	int32_t t37 = 2778;

	t37 = (x153+(x154+(x155%x156)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	volatile uint8_t x158 = 7U;
	uint8_t x159 = 4U;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t38 = 71738090117LLU;

	t38 = (x157+(x158+(x159%x160)));

	if (t38 != 138LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = INT8_MIN;
	int8_t x163 = INT8_MAX;
	int16_t x164 = -19;
	static volatile int32_t t39 = 1;

	t39 = (x161+(x162+(x163%x164)));

	if (t39 != 65420) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 4;
	volatile uint32_t x167 = UINT32_MAX;
	static volatile int64_t x168 = -2077687318LL;
	static volatile int64_t t40 = 640198749LL;

	t40 = (x165+(x166+(x167%x168)));

	if (t40 != 2287076310LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = 159LLU;
	volatile int16_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	static uint64_t t41 = 51972617362LLU;

	t41 = (x169+(x170+(x171%x172)));

	if (t41 != 413LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	uint8_t x174 = 7U;
	static volatile int64_t x175 = INT64_MIN;
	int64_t t42 = 221701LL;

	t42 = (x173+(x174+(x175%x176)));

	if (t42 != -32762LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x177 = UINT16_MAX;
	int64_t x178 = 3208738347057LL;
	uint8_t x179 = UINT8_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t43 = 7039874LLU;

	t43 = (x177+(x178+(x179%x180)));

	if (t43 != 3208738412847LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MIN;
	uint16_t x182 = 3095U;
	int8_t x184 = 8;
	volatile int64_t t44 = -230LL;

	t44 = (x181+(x182+(x183%x184)));

	if (t44 != -9223372036854772714LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = -1LL;
	int64_t x187 = INT64_MIN;
	int64_t t45 = 5599690576307LL;

	t45 = (x185+(x186+(x187%x188)));

	if (t45 != 2348679LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = 1;
	static int64_t x190 = INT64_MAX;
	volatile int8_t x191 = -2;
	static uint64_t x192 = 20604399LLU;
	volatile uint64_t t46 = 832LLU;

	t46 = (x189+(x190+(x191%x192)));

	if (t46 != 9223372036866954523LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	uint8_t x195 = UINT8_MAX;
	uint16_t x196 = 1U;

	t47 = (x193+(x194+(x195%x196)));

	if (t47 != -2147483606) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = 22074649713LLU;
	int64_t x199 = -1LL;
	volatile int64_t x200 = -1LL;
	uint64_t t48 = 24176899851934LLU;

	t48 = (x197+(x198+(x199%x200)));

	if (t48 != 9223372058929425520LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 2935U;
	int8_t x203 = -1;
	uint8_t x204 = 1U;

	t49 = (x201+(x202+(x203%x204)));

	if (t49 != 12806456U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 2;
	volatile int64_t x206 = 5LL;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;

	t50 = (x205+(x206+(x207%x208)));

	if (t50 != -32761LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = 2;
	static int64_t x216 = -161524005469LL;
	volatile int64_t t51 = -3647LL;

	t51 = (x213+(x214+(x215%x216)));

	if (t51 != 3LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = -1;
	int64_t x220 = INT64_MIN;
	int64_t t52 = 2764053095388LL;

	t52 = (x217+(x218+(x219%x220)));

	if (t52 != -75LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x221 = 78545547881175LLU;
	volatile int64_t x222 = INT64_MAX;
	static int8_t x223 = INT8_MAX;
	volatile int8_t x224 = INT8_MAX;
	uint64_t t53 = 4213863757LLU;

	t53 = (x221+(x222+(x223%x224)));

	if (t53 != 9223450582402656982LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -454024369639468LL;
	static int32_t x227 = INT32_MAX;
	volatile uint16_t x228 = UINT16_MAX;
	static volatile int64_t t54 = 3461599229644LL;

	t54 = (x225+(x226+(x227%x228)));

	if (t54 != -454024369573934LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = INT32_MIN;
	static int16_t x230 = -1;
	uint8_t x231 = 1U;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t55 = INT32_MIN;

	t55 = (x229+(x230+(x231%x232)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = -1;
	static int64_t x235 = INT64_MAX;
	int64_t t56 = -1343601560LL;

	t56 = (x233+(x234+(x235%x236)));

	if (t56 != -129LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = INT64_MAX;
	int32_t x238 = -2;
	int16_t x239 = INT16_MIN;
	static volatile int64_t x240 = -1LL;
	static int64_t t57 = -3903899299LL;

	t57 = (x237+(x238+(x239%x240)));

	if (t57 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 1010055897LLU;
	static uint8_t x242 = 33U;
	static volatile int32_t x243 = INT32_MAX;
	static int64_t x244 = INT64_MIN;
	uint64_t t58 = 13756794815046LLU;

	t58 = (x241+(x242+(x243%x244)));

	if (t58 != 3157539577LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = -2;
	int16_t x246 = INT16_MIN;
	static int64_t x247 = INT64_MAX;
	static int16_t x248 = INT16_MIN;

	t59 = (x245+(x246+(x247%x248)));

	if (t59 != -3LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x250 = INT8_MAX;
	uint64_t x251 = 37665884268LLU;
	int32_t x252 = INT32_MAX;

	t60 = (x249+(x250+(x251%x252)));

	if (t60 != 1158662501LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -1;
	uint32_t x254 = 28U;
	int16_t x255 = INT16_MIN;
	static volatile uint32_t t61 = 4190399U;

	t61 = (x253+(x254+(x255%x256)));

	if (t61 != 4294934555U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = 55LL;
	static int16_t x262 = -436;
	uint16_t x263 = 7176U;
	int32_t x264 = INT32_MAX;
	int64_t t62 = -143678LL;

	t62 = (x261+(x262+(x263%x264)));

	if (t62 != 6795LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	volatile uint64_t x270 = 3045227102279009220LLU;
	int32_t x271 = 4158;
	uint64_t x272 = 276682594884417028LLU;
	volatile uint64_t t63 = 49351LLU;

	t63 = (x269+(x270+(x271%x272)));

	if (t63 != 12268599139133789186LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x273 = 1370058702U;
	static int8_t x274 = 0;
	uint32_t x275 = 0U;
	int64_t x276 = 14470LL;
	int64_t t64 = 1620843LL;

	t64 = (x273+(x274+(x275%x276)));

	if (t64 != 1370058702LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -6400;
	int8_t x278 = -34;
	int16_t x279 = 318;

	t65 = (x277+(x278+(x279%x280)));

	if (t65 != -6116) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = -1;
	volatile uint64_t x282 = UINT64_MAX;
	int8_t x284 = -1;
	uint64_t t66 = 120753700761LLU;

	t66 = (x281+(x282+(x283%x284)));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = -9;
	uint64_t x286 = UINT64_MAX;
	int16_t x288 = INT16_MIN;
	uint64_t t67 = 2607LLU;

	t67 = (x285+(x286+(x287%x288)));

	if (t67 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = -65356;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t68 = -868176075;

	t68 = (x289+(x290+(x291%x292)));

	if (t68 != -65099) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	volatile int32_t x295 = -1;

	t69 = (x293+(x294+(x295%x296)));

	if (t69 != -32770LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x301 = 0U;
	volatile int8_t x302 = INT8_MAX;
	volatile int8_t x303 = INT8_MIN;
	uint64_t x304 = 491LLU;

	t70 = (x301+(x302+(x303%x304)));

	if (t70 != 262LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 3080U;
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 118087405448LLU;
	volatile int8_t x308 = -1;

	t71 = (x305+(x306+(x307%x308)));

	if (t71 != 118087375760LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x309 = -104046LL;
	int32_t x310 = -1;
	int16_t x311 = 13213;
	volatile int64_t x312 = 84784540460194653LL;
	volatile int64_t t72 = -96858735773099LL;

	t72 = (x309+(x310+(x311%x312)));

	if (t72 != -90834LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = -1;
	static uint64_t x318 = 1280728LLU;
	volatile uint64_t t73 = 680322357519098291LLU;

	t73 = (x317+(x318+(x319%x320)));

	if (t73 != 1280824LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -55591368;
	int16_t x322 = -1005;
	volatile uint8_t x323 = 59U;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t74 = 34916195;

	t74 = (x321+(x322+(x323%x324)));

	if (t74 != -55592314) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x326 = UINT64_MAX;
	int64_t x327 = -1LL;
	volatile int64_t x328 = INT64_MIN;

	t75 = (x325+(x326+(x327%x328)));

	if (t75 != 253LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = 0;
	int8_t x335 = INT8_MIN;

	t76 = (x333+(x334+(x335%x336)));

	if (t76 != 4294938710U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x338 = UINT16_MAX;
	int16_t x339 = -1;
	int32_t x340 = -111;
	volatile int32_t t77 = 53705;

	t77 = (x337+(x338+(x339%x340)));

	if (t77 != 65080) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x341 = 11U;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t78 = -84993271;

	t78 = (x341+(x342+(x343%x344)));

	if (t78 != -2147483637) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x345 = INT64_MIN;
	static int64_t x346 = 264881232145897731LL;
	uint8_t x347 = 41U;
	static volatile int16_t x348 = INT16_MIN;

	t79 = (x345+(x346+(x347%x348)));

	if (t79 != -8958490804708878036LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x349 = 18;
	static uint16_t x350 = 5808U;
	int16_t x351 = INT16_MIN;
	static uint8_t x352 = 3U;
	volatile int32_t t80 = 33723420;

	t80 = (x349+(x350+(x351%x352)));

	if (t80 != 5824) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x353 = UINT8_MAX;
	int8_t x354 = INT8_MIN;
	int32_t x355 = 19984899;
	static int8_t x356 = INT8_MIN;
	static int32_t t81 = -12602137;

	t81 = (x353+(x354+(x355%x356)));

	if (t81 != 130) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x357 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;
	static int64_t t82 = -3LL;

	t82 = (x357+(x358+(x359%x360)));

	if (t82 != -9223372036854763812LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x362 = INT16_MIN;
	int32_t x363 = 1073184186;
	static int32_t t83 = 1;

	t83 = (x361+(x362+(x363%x364)));

	if (t83 != -32890) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = 5511454488515LLU;
	static volatile int8_t x366 = INT8_MAX;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = INT8_MIN;
	uint64_t t84 = 106480206095741868LLU;

	t84 = (x365+(x366+(x367%x368)));

	if (t84 != 5511454488642LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x369 = 10U;
	static volatile uint64_t x370 = UINT64_MAX;
	volatile uint32_t x371 = UINT32_MAX;
	static uint32_t x372 = UINT32_MAX;
	volatile uint64_t t85 = 437992757604184LLU;

	t85 = (x369+(x370+(x371%x372)));

	if (t85 != 9LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = INT64_MAX;
	int8_t x376 = INT8_MAX;
	static uint64_t t86 = 117500LLU;

	t86 = (x373+(x374+(x375%x376)));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x377 = INT8_MIN;
	uint32_t x378 = 376755U;
	static int16_t x380 = -29;
	uint64_t t87 = 174140875LLU;

	t87 = (x377+(x378+(x379%x380)));

	if (t87 != 7285569736976639126LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MIN;
	volatile uint8_t x382 = 4U;
	int8_t x383 = INT8_MIN;
	static volatile int64_t t88 = -1761713LL;

	t88 = (x381+(x382+(x383%x384)));

	if (t88 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x389 = INT8_MIN;
	static int32_t x390 = 28;
	volatile int16_t x391 = INT16_MIN;
	static uint16_t x392 = UINT16_MAX;

	t89 = (x389+(x390+(x391%x392)));

	if (t89 != -32868) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x393 = 94U;
	volatile int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	volatile int32_t t90 = -5;

	t90 = (x393+(x394+(x395%x396)));

	if (t90 != -32547) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = INT32_MIN;
	static volatile int64_t x400 = -1LL;
	int64_t t91 = -44112LL;

	t91 = (x397+(x398+(x399%x400)));

	if (t91 != -2147483776LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = -1;
	int8_t x402 = INT8_MAX;
	int16_t x403 = -1;
	int64_t x404 = INT64_MIN;
	static volatile int64_t t92 = 2475353229580LL;

	t92 = (x401+(x402+(x403%x404)));

	if (t92 != 125LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x405 = UINT64_MAX;
	uint64_t x406 = 264162LLU;
	int16_t x407 = INT16_MAX;
	volatile int16_t x408 = 1;
	uint64_t t93 = 65547LLU;

	t93 = (x405+(x406+(x407%x408)));

	if (t93 != 264161LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x410 = 94254512137424LLU;
	uint64_t t94 = 8105022LLU;

	t94 = (x409+(x410+(x411%x412)));

	if (t94 != 94254512137424LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = 4;
	uint64_t x414 = UINT64_MAX;
	uint64_t t95 = 1390073494LLU;

	t95 = (x413+(x414+(x415%x416)));

	if (t95 != 3LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x418 = 3848054508963248470LLU;
	int8_t x419 = INT8_MAX;
	int16_t x420 = -624;
	volatile uint64_t t96 = 79LLU;

	t96 = (x417+(x418+(x419%x420)));

	if (t96 != 3848054508963248852LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = -54708;
	static uint8_t x422 = UINT8_MAX;
	static volatile int16_t x423 = INT16_MAX;
	volatile int16_t x424 = -58;
	volatile int32_t t97 = -933553;

	t97 = (x421+(x422+(x423%x424)));

	if (t97 != -54398) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x425 = INT32_MAX;
	int8_t x426 = -1;
	int64_t x427 = -1LL;
	static uint8_t x428 = 15U;

	t98 = (x425+(x426+(x427%x428)));

	if (t98 != 2147483645LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = INT8_MIN;
	static int64_t x430 = 104384251LL;
	static uint16_t x432 = 6U;
	volatile int64_t t99 = -3956164755659972LL;

	t99 = (x429+(x430+(x431%x432)));

	if (t99 != 104384121LL) { NG(); } else { ; }
	
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

