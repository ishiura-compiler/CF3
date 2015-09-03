#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MIN;
uint32_t x6 = UINT32_MAX;
int8_t x9 = INT8_MIN;
uint32_t x11 = 17356495U;
volatile int32_t t2 = -3;
int16_t x16 = INT16_MIN;
int32_t t3 = 1;
volatile int8_t x17 = -1;
uint16_t x41 = UINT16_MAX;
uint32_t x44 = 438U;
int64_t x45 = -238350071LL;
uint16_t x46 = UINT16_MAX;
int32_t x49 = INT32_MIN;
volatile int32_t t12 = 55288;
int32_t x55 = INT32_MAX;
volatile uint8_t x61 = 6U;
static int32_t x63 = INT32_MAX;
volatile int64_t x67 = 23912484437462366LL;
uint8_t x68 = 110U;
int16_t x69 = INT16_MAX;
static int8_t x71 = -1;
static int16_t x73 = 266;
uint64_t x95 = UINT64_MAX;
static volatile int32_t t22 = 12210;
int8_t x100 = INT8_MIN;
uint32_t x104 = 4621650U;
int32_t x107 = -3049045;
static volatile int32_t t25 = -81219;
int8_t x111 = INT8_MAX;
volatile int32_t x112 = INT32_MIN;
volatile int32_t t26 = -16564565;
int8_t x130 = -1;
int32_t t32 = -16;
int32_t x138 = INT32_MIN;
volatile int64_t x143 = INT64_MIN;
int64_t x144 = -246345388LL;
uint16_t x149 = 5U;
int32_t x151 = 0;
static uint16_t x152 = 505U;
int8_t x153 = INT8_MIN;
uint64_t x154 = 4151915362410327LLU;
volatile int64_t x163 = 340330LL;
int8_t x168 = INT8_MIN;
uint64_t x170 = UINT64_MAX;
uint64_t x172 = 54LLU;
int64_t x174 = INT64_MIN;
volatile int32_t t41 = 52812497;
volatile int64_t x179 = INT64_MIN;
uint32_t x181 = 25177U;
static int16_t x183 = -1;
int8_t x185 = -1;
int32_t x187 = INT32_MIN;
uint8_t x191 = 0U;
volatile int32_t t49 = -33945518;
volatile int16_t x209 = 8679;
int32_t x210 = 21;
uint32_t x214 = 2561U;
volatile uint32_t x216 = 30U;
static int32_t t51 = 3;
int16_t x220 = 609;
int8_t x221 = 0;
volatile uint64_t x223 = UINT64_MAX;
static int16_t x230 = -1;
int16_t x233 = -1;
uint8_t x243 = 0U;
int32_t t58 = -669412;
uint16_t x249 = UINT16_MAX;
int16_t x250 = INT16_MAX;
int32_t t60 = 2896;
uint16_t x253 = 0U;
int16_t x254 = -43;
int32_t t61 = 1376903;
uint32_t x259 = UINT32_MAX;
int32_t t62 = -10;
static int64_t x262 = -3032710773LL;
volatile int64_t x268 = INT64_MAX;
uint8_t x285 = 0U;
static volatile int32_t t69 = 39;
int32_t t70 = 3393841;
uint16_t x293 = 363U;
int32_t x296 = -1;
volatile int32_t x299 = INT32_MIN;
uint16_t x303 = 7U;
volatile int64_t x308 = INT64_MIN;
static uint32_t x315 = 18U;
volatile int32_t t76 = 443;
int16_t x326 = -2713;
volatile int32_t t80 = 7069777;
int32_t x333 = INT32_MAX;
int32_t x343 = 178;
volatile int8_t x349 = INT8_MAX;
int8_t x353 = -47;
int8_t x357 = INT8_MIN;
int32_t x361 = -1;
static uint8_t x364 = 3U;
int16_t x366 = INT16_MIN;
uint16_t x376 = 8U;
static int32_t x377 = 146433;
int64_t x378 = INT64_MIN;
uint8_t x382 = 1U;
volatile int8_t x387 = -1;
int8_t x388 = INT8_MAX;
uint32_t x406 = 8355682U;
int8_t x412 = INT8_MIN;
static int16_t x415 = INT16_MAX;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int8_t x3 = INT8_MIN;
	static int64_t x4 = 17122191LL;
	static int32_t t0 = 369;

	t0 = (x1<=(x2-(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -3387;
	int64_t x7 = INT64_MAX;
	volatile int64_t x8 = -5491605602LL;
	static volatile int32_t t1 = -21898;

	t1 = (x5<=(x6-(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = 10616;
	int8_t x12 = INT8_MIN;

	t2 = (x9<=(x10-(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 84493344222539LLU;
	int32_t x14 = 1;
	static int64_t x15 = INT64_MIN;

	t3 = (x13<=(x14-(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 3879;
	int16_t x19 = -1;
	static volatile int8_t x20 = 6;
	volatile int32_t t4 = 1747762;

	t4 = (x17<=(x18-(x19|x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = 29U;
	int8_t x23 = INT8_MIN;
	uint32_t x24 = 51U;
	volatile int32_t t5 = 1;

	t5 = (x21<=(x22-(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	int32_t x27 = INT32_MAX;
	int64_t x28 = INT64_MIN;
	static volatile int32_t t6 = -396;

	t6 = (x25<=(x26-(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 243U;
	static uint8_t x30 = UINT8_MAX;
	uint32_t x31 = UINT32_MAX;
	uint16_t x32 = 16044U;
	int32_t t7 = 577687;

	t7 = (x29<=(x30-(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 0;
	static int16_t x34 = INT16_MAX;
	static int16_t x35 = INT16_MIN;
	uint64_t x36 = 28519LLU;
	volatile int32_t t8 = 116;

	t8 = (x33<=(x34-(x35|x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 13U;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -1;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = -46655;

	t9 = (x37<=(x38-(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = 9;
	volatile int8_t x43 = -1;
	volatile int32_t t10 = 9731571;

	t10 = (x41<=(x42-(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x47 = 29716U;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -777081643;

	t11 = (x45<=(x46-(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 1823962916879272LLU;
	int64_t x51 = -1LL;
	int16_t x52 = 13;

	t12 = (x49<=(x50-(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = 678;
	volatile int16_t x54 = 49;
	int8_t x56 = 6;
	int32_t t13 = 909702;

	t13 = (x53<=(x54-(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = UINT16_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t14 = -5778;

	t14 = (x57<=(x58-(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = 3U;
	uint8_t x64 = 41U;
	volatile int32_t t15 = 56965;

	t15 = (x61<=(x62-(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 59692941716LL;
	volatile uint8_t x66 = 1U;
	static int32_t t16 = 31;

	t16 = (x65<=(x66-(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 17U;
	int32_t x72 = INT32_MAX;
	int32_t t17 = -121380;

	t17 = (x69<=(x70-(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -24;
	volatile int64_t x75 = -1LL;
	uint16_t x76 = 196U;
	int32_t t18 = 50855;

	t18 = (x73<=(x74-(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 0;
	int16_t x78 = INT16_MIN;
	volatile uint16_t x79 = 0U;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -5;

	t19 = (x77<=(x78-(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = -1LL;
	static uint32_t x82 = 240U;
	uint32_t x83 = 7U;
	static int64_t x84 = -691666008462745LL;
	static volatile int32_t t20 = 28140;

	t20 = (x81<=(x82-(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	static int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	int64_t x88 = -64662714LL;
	volatile int32_t t21 = 62;

	t21 = (x85<=(x86-(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x94 = 1U;
	volatile uint64_t x96 = 848LLU;

	t22 = (x93<=(x94-(x95|x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	static int64_t x98 = INT64_MIN;
	volatile int8_t x99 = INT8_MIN;
	volatile int32_t t23 = -8122;

	t23 = (x97<=(x98-(x99|x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 254906288U;
	static int32_t x102 = INT32_MIN;
	int8_t x103 = 1;
	int32_t t24 = -1685405;

	t24 = (x101<=(x102-(x103|x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	static int8_t x106 = INT8_MAX;
	int64_t x108 = INT64_MAX;

	t25 = (x105<=(x106-(x107|x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = -1;
	int64_t x110 = -1LL;

	t26 = (x109<=(x110-(x111|x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = INT32_MIN;
	uint16_t x115 = 155U;
	int8_t x116 = -6;
	int32_t t27 = 0;

	t27 = (x113<=(x114-(x115|x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x117 = 191U;
	int64_t x118 = 2542783698LL;
	static int16_t x119 = -1;
	static uint8_t x120 = 19U;
	int32_t t28 = -99862;

	t28 = (x117<=(x118-(x119|x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x121 = 2728199081202954758LLU;
	static int8_t x122 = 0;
	static int16_t x123 = INT16_MIN;
	volatile int64_t x124 = INT64_MAX;
	int32_t t29 = 238678;

	t29 = (x121<=(x122-(x123|x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	uint8_t x126 = 6U;
	uint8_t x127 = 19U;
	int32_t x128 = INT32_MIN;
	int32_t t30 = 144781072;

	t30 = (x125<=(x126-(x127|x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -484337064;
	static uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t31 = -112;

	t31 = (x129<=(x130-(x131|x132)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x133 = UINT64_MAX;
	volatile int64_t x134 = 10252907868644LL;
	static uint64_t x135 = 26635827LLU;
	static int32_t x136 = -1;

	t32 = (x133<=(x134-(x135|x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x137 = UINT32_MAX;
	volatile int32_t x139 = -10;
	int16_t x140 = INT16_MIN;
	int32_t t33 = -3;

	t33 = (x137<=(x138-(x139|x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 10;
	uint64_t x142 = 1149138747566LLU;
	volatile int32_t t34 = -456134;

	t34 = (x141<=(x142-(x143|x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	static int64_t x146 = -4081871741531LL;
	static volatile uint16_t x147 = 10U;
	volatile int8_t x148 = INT8_MIN;
	int32_t t35 = 963713947;

	t35 = (x145<=(x146-(x147|x148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x150 = UINT8_MAX;
	int32_t t36 = -3086;

	t36 = (x149<=(x150-(x151|x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x155 = 104U;
	static uint8_t x156 = UINT8_MAX;
	int32_t t37 = 8694331;

	t37 = (x153<=(x154-(x155|x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int16_t x162 = INT16_MIN;
	int16_t x164 = -3698;
	int32_t t38 = 45436;

	t38 = (x161<=(x162-(x163|x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	uint32_t x166 = 93741U;
	int16_t x167 = -8;
	int32_t t39 = -60566;

	t39 = (x165<=(x166-(x167|x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = -1;
	int64_t x171 = INT64_MAX;
	int32_t t40 = -52;

	t40 = (x169<=(x170-(x171|x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = 169U;
	uint8_t x175 = 14U;
	int8_t x176 = INT8_MIN;

	t41 = (x173<=(x174-(x175|x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MAX;
	uint64_t x180 = 230338180429042LLU;
	volatile int32_t t42 = 27134;

	t42 = (x177<=(x178-(x179|x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x182 = UINT8_MAX;
	int8_t x184 = -2;
	volatile int32_t t43 = 12;

	t43 = (x181<=(x182-(x183|x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x186 = INT32_MIN;
	static uint32_t x188 = 452638283U;
	volatile int32_t t44 = -23980;

	t44 = (x185<=(x186-(x187|x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	int8_t x190 = -2;
	uint16_t x192 = UINT16_MAX;
	int32_t t45 = 81614;

	t45 = (x189<=(x190-(x191|x192)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	uint64_t x194 = 77400924LLU;
	static uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;
	static int32_t t46 = -7536840;

	t46 = (x193<=(x194-(x195|x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 0U;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 3621U;
	int8_t x200 = -1;
	int32_t t47 = -601;

	t47 = (x197<=(x198-(x199|x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = 5;
	int64_t x202 = -6218552771469153LL;
	static uint16_t x203 = 25U;
	uint8_t x204 = 7U;
	int32_t t48 = -481708;

	t48 = (x201<=(x202-(x203|x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 30273U;
	int16_t x206 = INT16_MAX;
	int16_t x207 = -1;
	uint64_t x208 = 55153866088LLU;

	t49 = (x205<=(x206-(x207|x208)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x211 = UINT64_MAX;
	volatile int32_t x212 = INT32_MAX;
	volatile int32_t t50 = -5;

	t50 = (x209<=(x210-(x211|x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x213 = INT8_MAX;
	int16_t x215 = INT16_MIN;

	t51 = (x213<=(x214-(x215|x216)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x217 = 1395721235U;
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = -8;
	volatile int32_t t52 = -301310;

	t52 = (x217<=(x218-(x219|x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x222 = 50U;
	int16_t x224 = INT16_MAX;
	volatile int32_t t53 = -19816;

	t53 = (x221<=(x222-(x223|x224)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = INT64_MIN;
	uint64_t x227 = 844565951173597LLU;
	int32_t x228 = INT32_MAX;
	int32_t t54 = -807;

	t54 = (x225<=(x226-(x227|x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 1755U;
	volatile uint32_t x231 = 1U;
	int32_t x232 = INT32_MIN;
	int32_t t55 = 979772;

	t55 = (x229<=(x230-(x231|x232)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x234 = 13213U;
	static uint32_t x235 = 4703004U;
	int64_t x236 = INT64_MIN;
	volatile int32_t t56 = -60346;

	t56 = (x233<=(x234-(x235|x236)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -31588;
	static uint64_t x238 = UINT64_MAX;
	static int32_t x239 = INT32_MIN;
	int16_t x240 = 0;
	static volatile int32_t t57 = 45781871;

	t57 = (x237<=(x238-(x239|x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	volatile int64_t x242 = -1LL;
	static uint64_t x244 = UINT64_MAX;

	t58 = (x241<=(x242-(x243|x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = -1;
	uint16_t x246 = 0U;
	uint32_t x247 = 6264U;
	int64_t x248 = INT64_MIN;
	static int32_t t59 = -4;

	t59 = (x245<=(x246-(x247|x248)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x251 = UINT8_MAX;
	int32_t x252 = INT32_MAX;

	t60 = (x249<=(x250-(x251|x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = 1U;

	t61 = (x253<=(x254-(x255|x256)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -3;
	static int32_t x258 = INT32_MIN;
	static volatile uint8_t x260 = 106U;

	t62 = (x257<=(x258-(x259|x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x261 = 155;
	uint32_t x263 = 47807U;
	int8_t x264 = INT8_MIN;
	int32_t t63 = 4269;

	t63 = (x261<=(x262-(x263|x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	volatile int8_t x266 = -1;
	uint32_t x267 = 541431335U;
	volatile int32_t t64 = -21363931;

	t64 = (x265<=(x266-(x267|x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 17995348LLU;
	int8_t x270 = -1;
	volatile int16_t x271 = -1;
	int32_t x272 = INT32_MIN;
	int32_t t65 = -636;

	t65 = (x269<=(x270-(x271|x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MAX;
	volatile int64_t x274 = 1LL;
	int8_t x275 = INT8_MIN;
	volatile int64_t x276 = 0LL;
	int32_t t66 = -2;

	t66 = (x273<=(x274-(x275|x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = -1LL;
	int16_t x278 = -3;
	int32_t x279 = INT32_MIN;
	int32_t x280 = -1;
	volatile int32_t t67 = 1406;

	t67 = (x277<=(x278-(x279|x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MAX;
	uint64_t x282 = UINT64_MAX;
	static int8_t x283 = INT8_MIN;
	uint8_t x284 = 1U;
	int32_t t68 = -63;

	t68 = (x281<=(x282-(x283|x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x286 = 63U;
	static uint64_t x287 = 1978423507081LLU;
	int8_t x288 = 1;

	t69 = (x285<=(x286-(x287|x288)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = INT32_MAX;
	uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 7U;
	uint32_t x292 = 8023U;

	t70 = (x289<=(x290-(x291|x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 319594913262373302LLU;
	volatile int64_t x295 = INT64_MIN;
	volatile int32_t t71 = 744561;

	t71 = (x293<=(x294-(x295|x296)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = UINT64_MAX;
	int64_t x300 = -594227984059867522LL;
	int32_t t72 = 98234052;

	t72 = (x297<=(x298-(x299|x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	uint8_t x302 = UINT8_MAX;
	int32_t x304 = 0;
	int32_t t73 = -42234194;

	t73 = (x301<=(x302-(x303|x304)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x305 = UINT32_MAX;
	int64_t x306 = -1LL;
	int32_t x307 = 498;
	int32_t t74 = 48809;

	t74 = (x305<=(x306-(x307|x308)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x309 = 12;
	uint8_t x310 = 116U;
	int64_t x311 = 469LL;
	static uint64_t x312 = 58550078193594LLU;
	static int32_t t75 = 60;

	t75 = (x309<=(x310-(x311|x312)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = 5;
	int32_t x314 = INT32_MIN;
	int16_t x316 = -1;

	t76 = (x313<=(x314-(x315|x316)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -1;
	int64_t x318 = INT64_MIN;
	int32_t x319 = 2642;
	int32_t x320 = INT32_MIN;
	volatile int32_t t77 = 155266;

	t77 = (x317<=(x318-(x319|x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = 34;
	static uint32_t x322 = 1124U;
	int32_t x323 = -3221;
	volatile int16_t x324 = 7930;
	volatile int32_t t78 = -177474;

	t78 = (x321<=(x322-(x323|x324)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	int8_t x327 = 2;
	int32_t x328 = -1;
	int32_t t79 = 24;

	t79 = (x325<=(x326-(x327|x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = -9;
	int64_t x330 = -360506667LL;
	int8_t x331 = 14;
	int16_t x332 = INT16_MAX;

	t80 = (x329<=(x330-(x331|x332)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = 52576269LL;
	int16_t x335 = -1;
	uint8_t x336 = UINT8_MAX;
	static volatile int32_t t81 = 57359;

	t81 = (x333<=(x334-(x335|x336)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x341 = 324U;
	uint8_t x342 = 53U;
	int64_t x344 = INT64_MIN;
	volatile int32_t t82 = -29302;

	t82 = (x341<=(x342-(x343|x344)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MAX;
	int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 8000256750452049284LLU;
	static volatile int32_t t83 = 2121;

	t83 = (x345<=(x346-(x347|x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -17;
	volatile int32_t t84 = -780002355;

	t84 = (x349<=(x350-(x351|x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x354 = INT8_MIN;
	static int8_t x355 = -1;
	int8_t x356 = -16;
	static int32_t t85 = 57344;

	t85 = (x353<=(x354-(x355|x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x358 = UINT8_MAX;
	static uint32_t x359 = 19U;
	volatile int32_t x360 = 1;
	int32_t t86 = 52;

	t86 = (x357<=(x358-(x359|x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x362 = UINT8_MAX;
	volatile uint32_t x363 = 21U;
	static int32_t t87 = 1572312;

	t87 = (x361<=(x362-(x363|x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MAX;
	int32_t x367 = INT32_MIN;
	volatile int64_t x368 = -1LL;
	static int32_t t88 = 64;

	t88 = (x365<=(x366-(x367|x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MAX;
	static int32_t t89 = 3;

	t89 = (x369<=(x370-(x371|x372)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 31U;
	int32_t x374 = -2705;
	int8_t x375 = INT8_MIN;
	static int32_t t90 = 40;

	t90 = (x373<=(x374-(x375|x376)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x379 = INT32_MIN;
	volatile uint64_t x380 = 75000411640318191LLU;
	volatile int32_t t91 = 9621;

	t91 = (x377<=(x378-(x379|x380)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MIN;
	static int16_t x383 = INT16_MIN;
	volatile int32_t x384 = 1;
	volatile int32_t t92 = -118447;

	t92 = (x381<=(x382-(x383|x384)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x386 = 1U;
	volatile int32_t t93 = -351878341;

	t93 = (x385<=(x386-(x387|x388)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MAX;
	int64_t x394 = INT64_MIN;
	static volatile int16_t x395 = -1;
	int64_t x396 = INT64_MAX;
	volatile int32_t t94 = 39214;

	t94 = (x393<=(x394-(x395|x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = UINT8_MAX;
	static int32_t x398 = -1;
	static int16_t x399 = INT16_MAX;
	int8_t x400 = 30;
	volatile int32_t t95 = 14;

	t95 = (x397<=(x398-(x399|x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	int8_t x402 = INT8_MIN;
	int16_t x403 = -5;
	static volatile int32_t x404 = INT32_MAX;
	volatile int32_t t96 = -2;

	t96 = (x401<=(x402-(x403|x404)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x407 = 37;
	uint64_t x408 = UINT64_MAX;
	static int32_t t97 = -199752278;

	t97 = (x405<=(x406-(x407|x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x409 = 54;
	int8_t x410 = INT8_MAX;
	uint64_t x411 = UINT64_MAX;
	volatile int32_t t98 = 1665;

	t98 = (x409<=(x410-(x411|x412)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = INT64_MAX;
	uint32_t x414 = UINT32_MAX;
	volatile int8_t x416 = -1;
	int32_t t99 = 3;

	t99 = (x413<=(x414-(x415|x416)));

	if (t99 != 0) { NG(); } else { ; }
	
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

