#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -3298772LL;
volatile int8_t x5 = -3;
uint8_t x7 = 6U;
int32_t x9 = INT32_MAX;
int32_t x17 = -1;
volatile int8_t x29 = -9;
int8_t x35 = -1;
int16_t x38 = INT16_MIN;
uint32_t x46 = 168800097U;
int16_t x49 = 9;
static volatile int32_t t11 = 371090;
int8_t x54 = INT8_MIN;
int8_t x61 = -1;
volatile uint64_t x63 = UINT64_MAX;
static volatile int8_t x67 = -13;
static int8_t x69 = INT8_MIN;
static int32_t x73 = INT32_MIN;
int8_t x78 = 6;
uint64_t x79 = 120LLU;
int32_t t19 = 130356;
uint8_t x96 = UINT8_MAX;
static int64_t x99 = 6835457LL;
volatile int16_t x101 = 658;
int64_t x103 = -2437512763470814LL;
uint32_t x114 = UINT32_MAX;
uint8_t x125 = 11U;
int32_t x129 = INT32_MIN;
int32_t x133 = -1;
static uint8_t x135 = UINT8_MAX;
volatile int64_t x137 = 1734489906293LL;
int32_t x140 = INT32_MIN;
int8_t x148 = -1;
volatile int32_t t31 = 21;
uint16_t x151 = UINT16_MAX;
static int8_t x154 = -1;
int32_t x156 = -1;
int32_t t34 = -4;
uint16_t x163 = 31817U;
int32_t x164 = 2;
int64_t x165 = INT64_MIN;
int32_t x173 = INT32_MAX;
int8_t x177 = -1;
uint8_t x191 = 7U;
int16_t x199 = 978;
int32_t x203 = -201047262;
int64_t x205 = INT64_MIN;
static int64_t x207 = INT64_MIN;
static uint8_t x214 = UINT8_MAX;
int8_t x223 = INT8_MIN;
uint8_t x224 = 88U;
static uint8_t x227 = UINT8_MAX;
int8_t x240 = 25;
volatile int32_t t52 = -376;
static int8_t x242 = INT8_MAX;
int16_t x244 = -1;
uint64_t x270 = 19LLU;
volatile uint8_t x277 = 1U;
uint16_t x278 = 1803U;
static int32_t t62 = 1656;
int16_t x301 = INT16_MIN;
static int64_t x316 = 51455648027874LL;
uint16_t x320 = 487U;
int64_t x323 = -1LL;
volatile int32_t t70 = -356622559;
uint16_t x326 = 628U;
int32_t x328 = INT32_MAX;
volatile int16_t x344 = -1204;
int8_t x346 = INT8_MAX;
volatile int32_t t76 = -12274018;
volatile int32_t t77 = -1;
int64_t x358 = INT64_MAX;
volatile int32_t t80 = 1981052;
int32_t x373 = INT32_MAX;
int8_t x376 = 1;
volatile int32_t x377 = -62;
uint32_t x386 = UINT32_MAX;
int32_t t86 = 0;
uint16_t x404 = 30195U;
volatile int32_t t89 = 200024978;
static uint16_t x421 = 14U;
static int32_t x425 = -1;
int16_t x431 = INT16_MIN;
volatile int32_t t93 = -517041310;
int16_t x439 = -1;
int64_t x440 = INT64_MIN;
int32_t x441 = 0;
int32_t t96 = -280048024;
volatile int8_t x449 = 0;
int8_t x451 = 37;
int64_t x455 = 112633677221LL;


void f0(void) {
	int64_t x2 = -1LL;
	int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -129;

	t0 = (x1<(x2*(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = UINT64_MAX;
	int64_t x8 = 189035241LL;
	int32_t t1 = 2562387;

	t1 = (x5<(x6*(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static volatile uint8_t x11 = 0U;
	static uint16_t x12 = UINT16_MAX;
	int32_t t2 = -179438322;

	t2 = (x9<(x10*(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int64_t x15 = -1LL;
	int16_t x16 = -1;
	int32_t t3 = -22;

	t3 = (x13<(x14*(x15/x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 101;
	int16_t x19 = INT16_MIN;
	static int64_t x20 = -1LL;
	int32_t t4 = 1;

	t4 = (x17<(x18*(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = 3613041333962LL;
	int16_t x26 = -1;
	int8_t x27 = -1;
	static uint32_t x28 = 316U;
	volatile int32_t t5 = 1301323;

	t5 = (x25<(x26*(x27/x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -1;
	static volatile uint16_t x31 = 0U;
	static int64_t x32 = -139591835130LL;
	int32_t t6 = 5339855;

	t6 = (x29<(x30*(x31/x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 0U;
	int16_t x34 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t7 = -19578;

	t7 = (x33<(x34*(x35/x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 1LL;
	uint16_t x39 = 1426U;
	static volatile int32_t x40 = -1;
	volatile int32_t t8 = -5133910;

	t8 = (x37<(x38*(x39/x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	int16_t x42 = INT16_MAX;
	volatile int16_t x43 = -1;
	int16_t x44 = -877;
	volatile int32_t t9 = 936846;

	t9 = (x41<(x42*(x43/x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 30063U;
	int16_t x47 = INT16_MIN;
	static uint32_t x48 = 91011913U;
	volatile int32_t t10 = -1;

	t10 = (x45<(x46*(x47/x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x50 = 2283U;
	static int8_t x51 = INT8_MIN;
	uint16_t x52 = 128U;

	t11 = (x49<(x50*(x51/x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	static int8_t x55 = INT8_MIN;
	int64_t x56 = -269684173LL;
	static volatile int32_t t12 = 159947212;

	t12 = (x53<(x54*(x55/x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = INT64_MAX;
	int32_t x64 = -1;
	volatile int32_t t13 = 1617;

	t13 = (x61<(x62*(x63/x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t14 = 5685906;

	t14 = (x65<(x66*(x67/x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x70 = INT16_MIN;
	int8_t x71 = 1;
	int32_t x72 = INT32_MAX;
	volatile int32_t t15 = -2101447;

	t15 = (x69<(x70*(x71/x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MAX;
	static int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MAX;
	volatile int32_t t16 = 2127;

	t16 = (x73<(x74*(x75/x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static int16_t x80 = INT16_MAX;
	static int32_t t17 = 12096;

	t17 = (x77<(x78*(x79/x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 3099LLU;
	uint8_t x86 = 7U;
	static volatile int8_t x87 = 8;
	static int64_t x88 = 1039047016LL;
	int32_t t18 = -88933;

	t18 = (x85<(x86*(x87/x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = 2269767U;
	int64_t x91 = -1LL;
	static uint32_t x92 = UINT32_MAX;

	t19 = (x89<(x90*(x91/x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1176341;
	static int64_t x94 = 287648LL;
	volatile uint32_t x95 = 56288U;
	volatile int32_t t20 = 34505963;

	t20 = (x93<(x94*(x95/x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MAX;
	int64_t x100 = INT64_MAX;
	static volatile int32_t t21 = 41838706;

	t21 = (x97<(x98*(x99/x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x102 = 0;
	volatile int8_t x104 = -43;
	int32_t t22 = 1750955;

	t22 = (x101<(x102*(x103/x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 0U;
	int64_t x107 = INT64_MAX;
	static volatile int8_t x108 = INT8_MAX;
	int32_t t23 = 0;

	t23 = (x105<(x106*(x107/x108)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 374;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	int32_t t24 = 774;

	t24 = (x113<(x114*(x115/x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 382U;
	static int16_t x122 = -9;
	volatile int64_t x123 = 1LL;
	int16_t x124 = INT16_MAX;
	static int32_t t25 = 1;

	t25 = (x121<(x122*(x123/x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x126 = UINT64_MAX;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = -65668LL;
	static int32_t t26 = 232;

	t26 = (x125<(x126*(x127/x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x130 = INT32_MIN;
	static uint64_t x131 = 3473095426068LLU;
	volatile int16_t x132 = INT16_MAX;
	static volatile int32_t t27 = -18594;

	t27 = (x129<(x130*(x131/x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x134 = 49;
	static int64_t x136 = -1LL;
	int32_t t28 = -32489;

	t28 = (x133<(x134*(x135/x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x138 = -1LL;
	int8_t x139 = -31;
	volatile int32_t t29 = 0;

	t29 = (x137<(x138*(x139/x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -1LL;
	uint32_t x142 = 1U;
	static int16_t x143 = -1;
	int64_t x144 = 477570158485574LL;
	volatile int32_t t30 = 61714;

	t30 = (x141<(x142*(x143/x144)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x145 = 1;
	static uint32_t x146 = 1U;
	int32_t x147 = 29618675;

	t31 = (x145<(x146*(x147/x148)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -1;
	int8_t x150 = INT8_MIN;
	volatile uint16_t x152 = 2663U;
	int32_t t32 = 3802248;

	t32 = (x149<(x150*(x151/x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 205276456775862LLU;
	uint8_t x155 = UINT8_MAX;
	int32_t t33 = -63;

	t33 = (x153<(x154*(x155/x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x157 = 2U;
	volatile int16_t x158 = INT16_MIN;
	volatile int8_t x159 = INT8_MIN;
	uint32_t x160 = 59889U;

	t34 = (x157<(x158*(x159/x160)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = UINT32_MAX;
	volatile int32_t t35 = 0;

	t35 = (x161<(x162*(x163/x164)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x166 = 0U;
	int32_t x167 = 3515953;
	int8_t x168 = INT8_MIN;
	int32_t t36 = -169063003;

	t36 = (x165<(x166*(x167/x168)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x169 = -41;
	volatile int8_t x170 = -1;
	static int64_t x171 = INT64_MIN;
	int16_t x172 = 10038;
	volatile int32_t t37 = -12722;

	t37 = (x169<(x170*(x171/x172)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = 19;
	uint8_t x175 = 57U;
	int64_t x176 = INT64_MIN;
	static int32_t t38 = -1529942;

	t38 = (x173<(x174*(x175/x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = INT8_MIN;
	volatile int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t39 = -103894536;

	t39 = (x177<(x178*(x179/x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MAX;
	uint32_t x182 = 3842527U;
	volatile int16_t x183 = INT16_MIN;
	volatile uint32_t x184 = UINT32_MAX;
	volatile int32_t t40 = 3434069;

	t40 = (x181<(x182*(x183/x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = -1;
	int64_t x190 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t41 = 2419;

	t41 = (x189<(x190*(x191/x192)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = UINT64_MAX;
	uint64_t x194 = 2LLU;
	int16_t x195 = INT16_MAX;
	uint16_t x196 = 70U;
	volatile int32_t t42 = -1767345;

	t42 = (x193<(x194*(x195/x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	uint64_t x200 = 3493762736789683LLU;
	int32_t t43 = -203187853;

	t43 = (x197<(x198*(x199/x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = 0;
	uint8_t x202 = 22U;
	int8_t x204 = -3;
	int32_t t44 = -7;

	t44 = (x201<(x202*(x203/x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x206 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t45 = 518103;

	t45 = (x205<(x206*(x207/x208)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MAX;
	int8_t x211 = 0;
	int32_t x212 = -1;
	volatile int32_t t46 = 3;

	t46 = (x209<(x210*(x211/x212)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x213 = INT8_MIN;
	uint64_t x215 = 60787035420123442LLU;
	uint8_t x216 = 1U;
	int32_t t47 = -14685327;

	t47 = (x213<(x214*(x215/x216)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = -35;
	int8_t x218 = 1;
	uint16_t x219 = UINT16_MAX;
	static int64_t x220 = -26363035075LL;
	static int32_t t48 = 1924;

	t48 = (x217<(x218*(x219/x220)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x221 = -415999153635620LL;
	int32_t x222 = INT32_MAX;
	int32_t t49 = -3;

	t49 = (x221<(x222*(x223/x224)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x225 = 0U;
	int64_t x226 = -1LL;
	int16_t x228 = INT16_MIN;
	volatile int32_t t50 = -317;

	t50 = (x225<(x226*(x227/x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = 813511856736LL;
	volatile int8_t x234 = INT8_MIN;
	int16_t x235 = -1;
	int8_t x236 = -1;
	static int32_t t51 = 1191624;

	t51 = (x233<(x234*(x235/x236)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = INT64_MIN;
	volatile uint16_t x238 = UINT16_MAX;
	uint32_t x239 = 25U;

	t52 = (x237<(x238*(x239/x240)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = -1908;
	int8_t x243 = 0;
	int32_t t53 = -86;

	t53 = (x241<(x242*(x243/x244)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MAX;
	int16_t x246 = -1;
	volatile uint64_t x247 = UINT64_MAX;
	static volatile int32_t x248 = INT32_MIN;
	int32_t t54 = 117237348;

	t54 = (x245<(x246*(x247/x248)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x249 = UINT32_MAX;
	uint64_t x250 = UINT64_MAX;
	static int16_t x251 = INT16_MIN;
	volatile int32_t x252 = INT32_MAX;
	int32_t t55 = 532353689;

	t55 = (x249<(x250*(x251/x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x257 = -1;
	volatile uint8_t x258 = UINT8_MAX;
	static int16_t x259 = -3605;
	int64_t x260 = INT64_MAX;
	volatile int32_t t56 = 0;

	t56 = (x257<(x258*(x259/x260)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x261 = UINT64_MAX;
	volatile uint16_t x262 = UINT16_MAX;
	uint32_t x263 = 22030339U;
	static volatile int32_t x264 = INT32_MAX;
	int32_t t57 = 2325;

	t57 = (x261<(x262*(x263/x264)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = 5864LL;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 15U;
	static volatile int32_t t58 = 15;

	t58 = (x265<(x266*(x267/x268)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = -185198751;
	int16_t x271 = -1;
	volatile uint32_t x272 = 71401U;
	volatile int32_t t59 = 223779;

	t59 = (x269<(x270*(x271/x272)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int64_t x274 = INT64_MIN;
	volatile int64_t x275 = -181LL;
	static volatile int16_t x276 = INT16_MIN;
	int32_t t60 = 0;

	t60 = (x273<(x274*(x275/x276)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x279 = -1;
	int32_t x280 = INT32_MIN;
	volatile int32_t t61 = -13;

	t61 = (x277<(x278*(x279/x280)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x281 = -1;
	volatile int64_t x282 = 11LL;
	int32_t x283 = 5;
	uint8_t x284 = UINT8_MAX;

	t62 = (x281<(x282*(x283/x284)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = INT64_MIN;
	volatile int32_t x286 = INT32_MAX;
	static volatile int8_t x287 = INT8_MIN;
	volatile uint16_t x288 = 2360U;
	static int32_t t63 = -3223;

	t63 = (x285<(x286*(x287/x288)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x289 = UINT64_MAX;
	uint32_t x290 = UINT32_MAX;
	uint16_t x291 = 2U;
	int16_t x292 = INT16_MAX;
	int32_t t64 = -14945236;

	t64 = (x289<(x290*(x291/x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = INT8_MIN;
	uint32_t x294 = 495U;
	static int32_t x295 = -1;
	static int16_t x296 = INT16_MAX;
	volatile int32_t t65 = -309;

	t65 = (x293<(x294*(x295/x296)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x302 = 2843457625LLU;
	uint32_t x303 = UINT32_MAX;
	uint64_t x304 = 111554476015426567LLU;
	static int32_t t66 = 17579;

	t66 = (x301<(x302*(x303/x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = INT32_MAX;
	static int8_t x306 = INT8_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	int8_t x308 = -3;
	int32_t t67 = -3;

	t67 = (x305<(x306*(x307/x308)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x313 = INT64_MAX;
	int64_t x314 = -3029647413420LL;
	int64_t x315 = 255935175792570790LL;
	static int32_t t68 = -36574427;

	t68 = (x313<(x314*(x315/x316)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 0U;
	int16_t x318 = INT16_MIN;
	int64_t x319 = 2750938281091064LL;
	volatile int32_t t69 = -91071;

	t69 = (x317<(x318*(x319/x320)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = 5U;
	volatile int8_t x322 = 0;
	int64_t x324 = INT64_MIN;

	t70 = (x321<(x322*(x323/x324)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = INT32_MIN;
	int32_t x327 = -53950;
	int32_t t71 = -1443;

	t71 = (x325<(x326*(x327/x328)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x329 = -3;
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MAX;
	static int16_t x332 = INT16_MIN;
	int32_t t72 = 184416;

	t72 = (x329<(x330*(x331/x332)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = 1;
	static int32_t x338 = INT32_MIN;
	int16_t x339 = 0;
	volatile int64_t x340 = INT64_MAX;
	volatile int32_t t73 = -211906492;

	t73 = (x337<(x338*(x339/x340)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = 5366LL;
	static volatile int8_t x342 = -1;
	volatile int64_t x343 = INT64_MIN;
	int32_t t74 = 1242;

	t74 = (x341<(x342*(x343/x344)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x345 = 0U;
	int16_t x347 = INT16_MIN;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t75 = -31827349;

	t75 = (x345<(x346*(x347/x348)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x349 = 101U;
	static volatile uint32_t x350 = 279U;
	volatile int16_t x351 = INT16_MAX;
	uint64_t x352 = 107LLU;

	t76 = (x349<(x350*(x351/x352)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x353 = 9109108580LLU;
	uint32_t x354 = 0U;
	volatile int8_t x355 = 12;
	int64_t x356 = -1LL;

	t77 = (x353<(x354*(x355/x356)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = UINT64_MAX;
	uint8_t x359 = UINT8_MAX;
	static int32_t x360 = INT32_MAX;
	volatile int32_t t78 = -795;

	t78 = (x357<(x358*(x359/x360)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = 103169;
	volatile int32_t x362 = -1922998;
	uint16_t x363 = 0U;
	int64_t x364 = -1LL;
	int32_t t79 = -127597306;

	t79 = (x361<(x362*(x363/x364)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x365 = -16;
	volatile int64_t x366 = -3647352355839609431LL;
	uint8_t x367 = UINT8_MAX;
	int32_t x368 = INT32_MAX;

	t80 = (x365<(x366*(x367/x368)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x369 = 48;
	volatile int8_t x370 = INT8_MIN;
	uint64_t x371 = 80LLU;
	int8_t x372 = INT8_MIN;
	volatile int32_t t81 = -980898;

	t81 = (x369<(x370*(x371/x372)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x374 = UINT32_MAX;
	volatile int8_t x375 = INT8_MAX;
	static int32_t t82 = 6571;

	t82 = (x373<(x374*(x375/x376)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x378 = -508;
	static int32_t x379 = 8260094;
	static uint16_t x380 = UINT16_MAX;
	volatile int32_t t83 = -1200717;

	t83 = (x377<(x378*(x379/x380)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 1U;
	uint8_t x382 = 12U;
	int16_t x383 = -3;
	static int8_t x384 = -1;
	int32_t t84 = 987;

	t84 = (x381<(x382*(x383/x384)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = INT32_MIN;
	int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t85 = 74;

	t85 = (x385<(x386*(x387/x388)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x389 = INT32_MAX;
	int8_t x390 = INT8_MIN;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = -38398;

	t86 = (x389<(x390*(x391/x392)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MIN;
	static uint64_t x395 = 544199618298693LLU;
	static uint8_t x396 = 8U;
	int32_t t87 = -49;

	t87 = (x393<(x394*(x395/x396)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x397 = INT8_MIN;
	static uint32_t x398 = UINT32_MAX;
	int8_t x399 = INT8_MAX;
	static int8_t x400 = INT8_MIN;
	int32_t t88 = -1372479;

	t88 = (x397<(x398*(x399/x400)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MIN;
	int8_t x403 = 2;

	t89 = (x401<(x402*(x403/x404)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x413 = 712054U;
	uint64_t x414 = UINT64_MAX;
	volatile uint16_t x415 = 20U;
	volatile int64_t x416 = 194358379807000LL;
	int32_t t90 = 86497;

	t90 = (x413<(x414*(x415/x416)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x422 = UINT16_MAX;
	uint32_t x423 = 0U;
	static volatile int16_t x424 = INT16_MIN;
	volatile int32_t t91 = 1249;

	t91 = (x421<(x422*(x423/x424)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x426 = INT64_MIN;
	uint32_t x427 = 2816U;
	volatile uint32_t x428 = 3324879U;
	volatile int32_t t92 = -495;

	t92 = (x425<(x426*(x427/x428)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MIN;
	uint8_t x432 = UINT8_MAX;

	t93 = (x429<(x430*(x431/x432)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MIN;
	uint64_t x434 = 701LLU;
	volatile uint16_t x435 = 111U;
	uint64_t x436 = UINT64_MAX;
	int32_t t94 = 3677384;

	t94 = (x433<(x434*(x435/x436)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x437 = 105257889U;
	int8_t x438 = -1;
	int32_t t95 = 1960;

	t95 = (x437<(x438*(x439/x440)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x442 = -2734244;
	static int8_t x443 = INT8_MIN;
	int8_t x444 = -11;

	t96 = (x441<(x442*(x443/x444)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x445 = -1;
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = -29068215315970LL;
	int64_t x448 = INT64_MIN;
	int32_t t97 = -546001292;

	t97 = (x445<(x446*(x447/x448)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x450 = 1U;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t98 = 62040547;

	t98 = (x449<(x450*(x451/x452)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = INT32_MIN;
	int8_t x454 = -9;
	static int8_t x456 = INT8_MIN;
	int32_t t99 = -50737;

	t99 = (x453<(x454*(x455/x456)));

	if (t99 != 1) { NG(); } else { ; }
	
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

