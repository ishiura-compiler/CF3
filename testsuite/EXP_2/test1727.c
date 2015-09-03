#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 0U;
int16_t x2 = INT16_MIN;
static uint8_t x4 = 0U;
volatile int16_t x5 = INT16_MAX;
uint8_t x6 = UINT8_MAX;
int32_t t1 = 25859726;
int64_t x10 = -10454403465LL;
volatile int64_t x14 = -1LL;
volatile uint32_t x15 = 20644U;
uint64_t t4 = 12059LLU;
volatile uint64_t x32 = 15LLU;
volatile int32_t t10 = -13870;
int16_t x50 = INT16_MAX;
volatile uint16_t x61 = 6U;
int32_t x62 = -1;
volatile int8_t x64 = INT8_MIN;
int16_t x67 = INT16_MIN;
int8_t x69 = INT8_MIN;
volatile int32_t x70 = -26;
uint8_t x74 = 28U;
static int32_t x76 = 528602883;
volatile uint64_t t18 = 0LLU;
uint32_t x83 = UINT32_MAX;
uint64_t t19 = 94066LLU;
volatile uint64_t t21 = 1412682501865193859LLU;
static int64_t x95 = 0LL;
int8_t x100 = -1;
uint32_t x104 = UINT32_MAX;
int32_t x108 = INT32_MAX;
static volatile uint32_t x109 = 670831665U;
uint32_t x131 = 2U;
volatile int32_t x138 = 0;
uint16_t x145 = 4404U;
int64_t x154 = INT64_MIN;
uint32_t x169 = 27U;
volatile int16_t x177 = INT16_MIN;
static int8_t x196 = INT8_MIN;
int32_t x197 = INT32_MIN;
static int8_t x210 = 60;
static volatile int8_t x226 = INT8_MIN;
int32_t t51 = 296;
int64_t x241 = INT64_MIN;
uint8_t x242 = 1U;
uint64_t t55 = 1550190799652834LLU;
static int8_t x249 = INT8_MIN;
int32_t x250 = -467046;
int64_t x252 = -1LL;
int64_t t56 = -4190083005435508792LL;
volatile int32_t t60 = 13;
uint64_t x273 = UINT64_MAX;
static uint64_t t62 = 517730701897319300LLU;
static int16_t x286 = INT16_MIN;
volatile int16_t x288 = -4064;
int16_t x290 = INT16_MIN;
int16_t x297 = INT16_MAX;
int32_t x300 = 12;
volatile int32_t t66 = -125815;
static uint8_t x305 = UINT8_MAX;
volatile uint32_t t68 = 8063156U;
uint64_t x311 = 20425LLU;
uint64_t x319 = 403LLU;
int64_t x324 = INT64_MIN;
uint64_t t73 = 5323348066LLU;
int16_t x329 = -1;
int64_t x334 = -1LL;
int32_t x336 = INT32_MIN;
volatile int64_t t75 = 115018399030334670LL;
uint64_t x342 = UINT64_MAX;
volatile uint64_t x347 = UINT64_MAX;
uint32_t x361 = 2048295793U;
static int64_t x363 = 3594709005447149LL;
static int64_t t81 = 306664194944952801LL;
int64_t x367 = -1LL;
int32_t x379 = 21663;
int32_t x380 = -1;
int16_t x382 = -1;
int16_t x385 = INT16_MAX;
int16_t x412 = -1;
uint64_t x415 = UINT64_MAX;
uint64_t t90 = 30LLU;
int16_t x418 = INT16_MIN;
int16_t x420 = 114;
volatile int8_t x426 = INT8_MIN;
int64_t x431 = -1LL;
uint16_t x433 = 3U;
static volatile int32_t t95 = 1;
static int8_t x440 = -15;
static uint32_t t97 = 40697U;
uint32_t t98 = 2U;
int32_t x467 = -9783;


void f0(void) {
	int32_t x3 = 0;
	static int32_t t0 = -864;

	t0 = ((x1*(x2&x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = 1;
	static uint16_t x8 = UINT16_MAX;

	t1 = ((x5*(x6&x7))&x8);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 1199319398LLU;
	int32_t x11 = INT32_MAX;
	int16_t x12 = INT16_MIN;
	volatile uint64_t t2 = 49310LLU;

	t2 = ((x9*(x10&x11))&x12);

	if (t2 != 339425109578088448LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 5863157U;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 9LL;

	t3 = ((x13*(x14&x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MAX;
	uint64_t x19 = UINT64_MAX;
	uint8_t x20 = 12U;

	t4 = ((x17*(x18&x19))&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static uint64_t x22 = UINT64_MAX;
	int16_t x23 = -1122;
	uint16_t x24 = 742U;
	volatile uint64_t t5 = 0LLU;

	t5 = ((x21*(x22&x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 25688U;
	int32_t x26 = 1578638;
	int32_t x27 = 1;
	static int8_t x28 = -1;
	int32_t t6 = 15428;

	t6 = ((x25*(x26&x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	static int16_t x30 = INT16_MAX;
	static uint8_t x31 = 1U;
	uint64_t t7 = 21123724793185833LLU;

	t7 = ((x29*(x30&x31))&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile int32_t x34 = INT32_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	static int64_t x36 = INT64_MIN;
	int64_t t8 = 165914127725905LL;

	t8 = ((x33*(x34&x35))&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1030U;
	volatile uint32_t x38 = 3U;
	volatile uint64_t x39 = 243513412215243298LLU;
	int32_t x40 = -1;
	volatile uint64_t t9 = 303405LLU;

	t9 = ((x37*(x38&x39))&x40);

	if (t9 != 2060LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -2272;
	uint8_t x42 = 107U;
	uint8_t x43 = 50U;
	int32_t x44 = INT32_MAX;

	t10 = ((x41*(x42&x43))&x44);

	if (t10 != 2147406400) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -58862167;
	uint8_t x46 = 9U;
	int16_t x47 = -12;
	static volatile int16_t x48 = INT16_MAX;
	int32_t t11 = -23;

	t11 = ((x45*(x46&x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MAX;
	int64_t t12 = 0LL;

	t12 = ((x49*(x50&x51))&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 935LLU;
	int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	volatile uint64_t x56 = UINT64_MAX;
	uint64_t t13 = 803LLU;

	t13 = ((x53*(x54&x55))&x56);

	if (t13 != 18446744073678913536LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x63 = 739U;
	static int32_t t14 = 876329;

	t14 = ((x61*(x62&x63))&x64);

	if (t14 != 4352) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	uint64_t x66 = 33102093961438892LLU;
	uint16_t x68 = 15U;
	static uint64_t t15 = 594506LLU;

	t15 = ((x65*(x66&x67))&x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x71 = INT16_MIN;
	static uint32_t x72 = 88972U;
	volatile uint32_t t16 = 1U;

	t16 = ((x69*(x70&x71))&x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 4257700475648LLU;
	uint16_t x75 = 15290U;
	uint64_t t17 = 25LLU;

	t17 = ((x73*(x74&x75))&x76);

	if (t17 != 16826368LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = 15U;
	int8_t x78 = INT8_MIN;
	uint64_t x79 = 23237359741765LLU;
	volatile int8_t x80 = -25;

	t18 = ((x77*(x78&x79))&x80);

	if (t18 != 348560396125440LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 2468146552007676LLU;
	int64_t x82 = INT64_MAX;
	static volatile int8_t x84 = INT8_MIN;

	t19 = ((x81*(x82&x83))&x84);

	if (t19 != 2770742054077305856LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -27;
	uint8_t x86 = 4U;
	uint64_t x87 = 2990LLU;
	int16_t x88 = -1;
	volatile uint64_t t20 = 8562617LLU;

	t20 = ((x85*(x86&x87))&x88);

	if (t20 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	volatile uint64_t x91 = UINT64_MAX;
	static int32_t x92 = -1;

	t21 = ((x89*(x90&x91))&x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	int8_t x94 = 15;
	int64_t x96 = -1LL;
	int64_t t22 = 152075171691586944LL;

	t22 = ((x93*(x94&x95))&x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -1;
	uint64_t x98 = 504796400163667166LLU;
	int64_t x99 = -1LL;
	uint64_t t23 = 805352217249989LLU;

	t23 = ((x97*(x98&x99))&x100);

	if (t23 != 17941947673545884450LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -1;
	static int32_t x102 = 3055;
	volatile int64_t x103 = -208845252LL;
	volatile int64_t t24 = 1410517LL;

	t24 = ((x101*(x102&x103))&x104);

	if (t24 != 4294966740LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x105 = 37;
	static int32_t x106 = INT32_MIN;
	int8_t x107 = INT8_MAX;
	static volatile int32_t t25 = -395528;

	t25 = ((x105*(x106&x107))&x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MIN;
	volatile uint16_t x111 = 484U;
	uint16_t x112 = 8727U;
	volatile uint32_t t26 = 614995U;

	t26 = ((x109*(x110&x111))&x112);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = -365317;
	int8_t x115 = 0;
	int32_t x116 = -1;
	int32_t t27 = 1;

	t27 = ((x113*(x114&x115))&x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x117 = INT16_MIN;
	static int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	uint8_t x120 = UINT8_MAX;
	int32_t t28 = 340507092;

	t28 = ((x117*(x118&x119))&x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = 148208U;
	volatile uint64_t x123 = 1877LLU;
	uint32_t x124 = 182173260U;
	volatile uint64_t t29 = 628425916221067LLU;

	t29 = ((x121*(x122&x123))&x124);

	if (t29 != 181927936LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -10;
	int8_t x126 = INT8_MIN;
	static uint64_t x127 = 80539LLU;
	static uint16_t x128 = 1U;
	volatile uint64_t t30 = 114868739243LLU;

	t30 = ((x125*(x126&x127))&x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x129 = 1316040104U;
	int64_t x130 = INT64_MAX;
	static uint8_t x132 = 29U;
	int64_t t31 = 1987936156859LL;

	t31 = ((x129*(x130&x131))&x132);

	if (t31 != 16LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 8U;
	volatile int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MAX;
	int64_t x136 = -1LL;
	volatile int64_t t32 = -612475627329LL;

	t32 = ((x133*(x134&x135))&x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 127964LLU;
	int64_t x139 = 52612841874948LL;
	int32_t x140 = INT32_MIN;
	static volatile uint64_t t33 = 13758969165648LLU;

	t33 = ((x137*(x138&x139))&x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = INT32_MAX;
	static int8_t x142 = 61;
	int64_t x143 = -1LL;
	static uint32_t x144 = UINT32_MAX;
	static volatile int64_t t34 = -31219LL;

	t34 = ((x141*(x142&x143))&x144);

	if (t34 != 2147483587LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = 1;
	uint64_t x147 = UINT64_MAX;
	static uint64_t x148 = UINT64_MAX;
	uint64_t t35 = 15938816539064LLU;

	t35 = ((x145*(x146&x147))&x148);

	if (t35 != 4404LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = 9;
	int64_t x150 = -1LL;
	static volatile uint8_t x151 = 3U;
	int16_t x152 = -160;
	volatile int64_t t36 = -92634LL;

	t36 = ((x149*(x150&x151))&x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x155 = 712627U;
	int32_t x156 = INT32_MIN;
	int64_t t37 = 1113807268914LL;

	t37 = ((x153*(x154&x155))&x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = -1;
	uint64_t x162 = 6620320282070893080LLU;
	int32_t x163 = INT32_MAX;
	int32_t x164 = -2;
	uint64_t t38 = 28182536023141LLU;

	t38 = ((x161*(x162&x163))&x164);

	if (t38 != 18446744071693778408LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x170 = -3158510356344935385LL;
	volatile int32_t x171 = INT32_MAX;
	static int16_t x172 = -9140;
	int64_t t39 = 22LL;

	t39 = ((x169*(x170&x171))&x172);

	if (t39 != 28387493900LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -1;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = -1;
	uint8_t x176 = UINT8_MAX;
	static int32_t t40 = 556363725;

	t40 = ((x173*(x174&x175))&x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = -1LL;
	static int16_t x179 = 0;
	uint64_t x180 = 3568957LLU;
	static volatile uint64_t t41 = 102672902541908LLU;

	t41 = ((x177*(x178&x179))&x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = -1667;
	static uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t42 = -3687749;

	t42 = ((x181*(x182&x183))&x184);

	if (t42 != -4096000) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = 0LL;
	int16_t x186 = 285;
	static int64_t x187 = 581178567311LL;
	uint16_t x188 = 20U;
	int64_t t43 = -3595465274575LL;

	t43 = ((x185*(x186&x187))&x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x189 = 12671U;
	uint8_t x190 = 15U;
	int64_t x191 = -1LL;
	volatile int32_t x192 = 3603;
	int64_t t44 = 354471119077LL;

	t44 = ((x189*(x190&x191))&x192);

	if (t44 != 1553LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1LL;
	int16_t x194 = -1;
	int16_t x195 = INT16_MAX;
	int64_t t45 = 118630441149373LL;

	t45 = ((x193*(x194&x195))&x196);

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = INT8_MIN;
	static int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t46 = -1022;

	t46 = ((x197*(x198&x199))&x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = INT32_MAX;
	uint32_t x202 = 881U;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile uint32_t t47 = 1329782080U;

	t47 = ((x201*(x202&x203))&x204);

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	int32_t x207 = 1741;
	int32_t x208 = INT32_MAX;
	int32_t t48 = -55282531;

	t48 = ((x205*(x206&x207))&x208);

	if (t48 != 2147270656) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 1U;
	volatile int16_t x211 = INT16_MAX;
	volatile uint64_t x212 = UINT64_MAX;
	static volatile uint64_t t49 = 5410731LLU;

	t49 = ((x209*(x210&x211))&x212);

	if (t49 != 60LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = 1;
	uint16_t x218 = 2588U;
	volatile int8_t x219 = -12;
	volatile uint32_t x220 = UINT32_MAX;
	uint32_t t50 = 3177U;

	t50 = ((x217*(x218&x219))&x220);

	if (t50 != 2580U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = 9;
	int8_t x227 = -44;
	uint8_t x228 = 1U;

	t51 = ((x225*(x226&x227))&x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x229 = 654LLU;
	int8_t x230 = INT8_MIN;
	volatile uint16_t x231 = 110U;
	volatile int64_t x232 = 4745LL;
	volatile uint64_t t52 = 58089422LLU;

	t52 = ((x229*(x230&x231))&x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x237 = -65;
	int16_t x238 = -4815;
	static uint16_t x239 = UINT16_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t53 = -6438655;

	t53 = ((x237*(x238&x239))&x240);

	if (t53 != -3964928) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x243 = -25;
	int8_t x244 = -1;
	volatile int64_t t54 = INT64_MIN;

	t54 = ((x241*(x242&x243))&x244);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x245 = UINT64_MAX;
	static int64_t x246 = 408621LL;
	static int8_t x247 = INT8_MIN;
	int16_t x248 = -1;

	t55 = ((x245*(x246&x247))&x248);

	if (t55 != 18446744073709143040LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x251 = INT16_MIN;

	t56 = ((x249*(x250&x251))&x252);

	if (t56 != 62914560LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = -1LL;
	int32_t x254 = -182267;
	uint32_t x255 = 3U;
	int64_t x256 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

	t57 = ((x253*(x254&x255))&x256);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -456009206668390LL;
	int8_t x258 = -1;
	int8_t x259 = -1;
	int16_t x260 = INT16_MAX;
	volatile int64_t t58 = 3331665988862660254LL;

	t58 = ((x257*(x258&x259))&x260);

	if (t58 != 7270LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x261 = 783U;
	uint8_t x262 = 109U;
	int8_t x263 = -1;
	int8_t x264 = INT8_MIN;
	int32_t t59 = 675117;

	t59 = ((x261*(x262&x263))&x264);

	if (t59 != 85248) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MAX;
	uint16_t x266 = 546U;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = INT32_MIN;

	t60 = ((x265*(x266&x267))&x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	static uint8_t x270 = 23U;
	volatile int8_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t61 = 31837777111LLU;

	t61 = ((x269*(x270&x271))&x272);

	if (t61 != 18446744073708797952LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x274 = UINT16_MAX;
	static int32_t x275 = -4;
	volatile int8_t x276 = INT8_MIN;

	t62 = ((x273*(x274&x275))&x276);

	if (t62 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = 1783;
	static int32_t x283 = INT32_MIN;
	volatile uint32_t x284 = UINT32_MAX;
	uint64_t t63 = 50112762505916LLU;

	t63 = ((x281*(x282&x283))&x284);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -54;
	volatile int8_t x287 = INT8_MIN;
	static int32_t t64 = 37186343;

	t64 = ((x285*(x286&x287))&x288);

	if (t64 != 1769472) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x289 = 482529194933892205LLU;
	int16_t x291 = -1;
	static int64_t x292 = 581117003502112LL;
	volatile uint64_t t65 = 38916508725510469LLU;

	t65 = ((x289*(x290&x291))&x292);

	if (t65 != 17595415724032LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x298 = UINT8_MAX;
	int16_t x299 = 3;

	t66 = ((x297*(x298&x299))&x300);

	if (t66 != 12) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = 290545786U;
	int16_t x302 = INT16_MIN;
	uint64_t x303 = 454579897LLU;
	int64_t x304 = 6408760499099LL;
	volatile uint64_t t67 = 1420387712LLU;

	t67 = ((x301*(x302&x303))&x304);

	if (t67 != 5240420040704LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x306 = UINT32_MAX;
	int32_t x307 = 163013;
	static int16_t x308 = INT16_MIN;

	t68 = ((x305*(x306&x307))&x308);

	if (t68 != 41549824U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	uint16_t x312 = 907U;
	static uint64_t t69 = 576355738056775254LLU;

	t69 = ((x309*(x310&x311))&x312);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = UINT16_MAX;
	uint8_t x314 = 33U;
	int64_t x315 = INT64_MAX;
	int16_t x316 = INT16_MAX;
	volatile int64_t t70 = -14208664LL;

	t70 = ((x313*(x314&x315))&x316);

	if (t70 != 32735LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = 3404297989827LLU;
	uint32_t x320 = 1852618U;
	uint64_t t71 = 62LLU;

	t71 = ((x317*(x318&x319))&x320);

	if (t71 != 17480LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x321 = 41U;
	uint16_t x322 = 56U;
	uint8_t x323 = 5U;
	int64_t t72 = -11LL;

	t72 = ((x321*(x322&x323))&x324);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x325 = INT64_MAX;
	uint64_t x326 = 12902914549244510LLU;
	static int64_t x327 = INT64_MIN;
	static int8_t x328 = -3;

	t73 = ((x325*(x326&x327))&x328);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x330 = 3;
	volatile int8_t x331 = 1;
	static int8_t x332 = INT8_MIN;
	int32_t t74 = 101080;

	t74 = ((x329*(x330&x331))&x332);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x333 = 0U;
	volatile int32_t x335 = 737128679;

	t75 = ((x333*(x334&x335))&x336);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x337 = INT32_MIN;
	volatile int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;
	int16_t x340 = 52;
	volatile int32_t t76 = 12248;

	t76 = ((x337*(x338&x339))&x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x341 = INT16_MAX;
	static int64_t x343 = INT64_MIN;
	volatile uint16_t x344 = UINT16_MAX;
	volatile uint64_t t77 = 3242247434425855464LLU;

	t77 = ((x341*(x342&x343))&x344);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x345 = INT16_MAX;
	int16_t x346 = 0;
	static uint64_t x348 = 7463747047342542LLU;
	static volatile uint64_t t78 = 2LLU;

	t78 = ((x345*(x346&x347))&x348);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MIN;
	static int32_t x356 = INT32_MAX;
	volatile int32_t t79 = 545929578;

	t79 = ((x353*(x354&x355))&x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = 37597LLU;
	uint16_t x358 = 1U;
	uint16_t x359 = 402U;
	volatile uint16_t x360 = 5969U;
	volatile uint64_t t80 = 105462521078LLU;

	t80 = ((x357*(x358&x359))&x360);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x362 = UINT16_MAX;
	static uint16_t x364 = 3U;

	t81 = ((x361*(x362&x363))&x364);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = -1;
	int16_t x366 = -9563;
	int8_t x368 = -25;
	static int64_t t82 = -4008402839LL;

	t82 = ((x365*(x366&x367))&x368);

	if (t82 != 9539LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = INT32_MAX;
	int64_t x378 = 268006773788473289LL;
	int64_t t83 = -112LL;

	t83 = ((x377*(x378&x379))&x380);

	if (t83 != 46473693604727LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x381 = -1059346;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = 6136LL;
	volatile int64_t t84 = 247098412LL;

	t84 = ((x381*(x382&x383))&x384);

	if (t84 != 256LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = 2087136;
	volatile int32_t t85 = 6356284;

	t85 = ((x385*(x386&x387))&x388);

	if (t85 != 1998848) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MIN;
	uint16_t x390 = 1017U;
	volatile uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t86 = INT64_MIN;

	t86 = ((x389*(x390&x391))&x392);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x393 = INT16_MIN;
	uint64_t x394 = 1423389207763LLU;
	int64_t x395 = 94320275LL;
	int32_t x396 = -1;
	volatile uint64_t t87 = 30955864384LLU;

	t87 = ((x393*(x394&x395))&x396);

	if (t87 != 18446743740542779392LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = INT64_MIN;
	volatile int16_t x402 = 4;
	static int16_t x403 = 12785;
	static uint8_t x404 = 3U;
	volatile int64_t t88 = -6196674LL;

	t88 = ((x401*(x402&x403))&x404);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x409 = INT8_MIN;
	static volatile int64_t x410 = INT64_MIN;
	static uint32_t x411 = 1406022U;
	int64_t t89 = 163013915207136436LL;

	t89 = ((x409*(x410&x411))&x412);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x413 = INT32_MIN;
	int64_t x414 = -1LL;
	static int16_t x416 = -1;

	t90 = ((x413*(x414&x415))&x416);

	if (t90 != 2147483648LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = -1;
	uint8_t x419 = UINT8_MAX;
	volatile int32_t t91 = 752533859;

	t91 = ((x417*(x418&x419))&x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MAX;
	uint64_t x423 = 11170475363177063LLU;
	uint64_t x424 = 1051LLU;
	static volatile uint64_t t92 = 9342850150LLU;

	t92 = ((x421*(x422&x423))&x424);

	if (t92 != 1024LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x425 = 8;
	uint64_t x427 = 147483065084LLU;
	static int32_t x428 = INT32_MIN;
	volatile uint64_t t93 = 1811799793296LLU;

	t93 = ((x425*(x426&x427))&x428);

	if (t93 != 1178968522752LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x429 = 84U;
	uint8_t x430 = 0U;
	volatile int16_t x432 = INT16_MIN;
	int64_t t94 = 41LL;

	t94 = ((x429*(x430&x431))&x432);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x434 = 28U;
	int8_t x435 = INT8_MIN;
	static int32_t x436 = INT32_MAX;

	t95 = ((x433*(x434&x435))&x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x437 = 443475U;
	uint16_t x438 = 345U;
	int64_t x439 = INT64_MAX;
	int64_t t96 = -215657LL;

	t96 = ((x437*(x438&x439))&x440);

	if (t96 != 152998865LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x445 = 22194U;
	int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = UINT32_MAX;

	t97 = ((x445*(x446&x447))&x448);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x457 = 9963315;
	uint32_t x458 = 1U;
	int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;

	t98 = ((x457*(x458&x459))&x460);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x465 = 3U;
	volatile int8_t x466 = INT8_MIN;
	uint64_t x468 = 518691LLU;
	volatile uint64_t t99 = 26LLU;

	t99 = ((x465*(x466&x467))&x468);

	if (t99 != 493568LLU) { NG(); } else { ; }
	
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

