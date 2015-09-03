#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 50627388;
uint64_t x3 = 1098031287657930042LLU;
static int16_t x4 = INT16_MIN;
volatile int8_t x9 = -1;
uint64_t x12 = 1LLU;
volatile uint32_t x21 = UINT32_MAX;
static int32_t t6 = 0;
uint8_t x31 = UINT8_MAX;
int32_t x32 = INT32_MIN;
int32_t x41 = -1;
static int32_t x42 = INT32_MIN;
int8_t x46 = 5;
int32_t x47 = INT32_MIN;
volatile int32_t t13 = -1067346;
static uint16_t x61 = UINT16_MAX;
static int32_t x63 = INT32_MIN;
static int32_t x69 = -1;
uint64_t x70 = 32377LLU;
int8_t x71 = 1;
int32_t x73 = INT32_MIN;
int16_t x75 = INT16_MAX;
int8_t x78 = INT8_MAX;
int64_t x89 = INT64_MAX;
static uint32_t x90 = 26602696U;
volatile uint32_t x97 = 137U;
int64_t x101 = -1LL;
int32_t t24 = -16117822;
volatile int64_t x107 = INT64_MIN;
int32_t x108 = -1;
int16_t x113 = -5436;
static int32_t x119 = INT32_MIN;
int32_t t28 = 32054;
int64_t x121 = INT64_MIN;
uint32_t x122 = UINT32_MAX;
int16_t x125 = INT16_MAX;
static int32_t t30 = 0;
volatile uint16_t x133 = 374U;
static uint64_t x135 = 325482LLU;
int64_t x136 = -1LL;
int8_t x138 = 1;
int64_t x144 = 668551LL;
int8_t x145 = -2;
int64_t x148 = INT64_MIN;
static int32_t t35 = 7;
volatile uint32_t x151 = 42U;
uint64_t x153 = 13220LLU;
int8_t x154 = INT8_MAX;
int16_t x156 = -1;
uint32_t x158 = 108U;
static uint16_t x166 = 7511U;
uint32_t x170 = 2U;
static int16_t x171 = -1;
volatile uint8_t x172 = 107U;
volatile int32_t t42 = -386;
volatile uint16_t x179 = 2611U;
uint16_t x183 = 2U;
uint64_t x190 = UINT64_MAX;
uint64_t x193 = UINT64_MAX;
int8_t x196 = -1;
uint8_t x207 = 3U;
volatile int32_t t50 = 720;
static int64_t x221 = INT64_MIN;
int64_t x227 = INT64_MIN;
int16_t x228 = INT16_MIN;
uint64_t x231 = UINT64_MAX;
static volatile int16_t x235 = 70;
int32_t x238 = -18;
static int32_t t58 = 18637;
uint64_t x245 = UINT64_MAX;
static int64_t x246 = INT64_MAX;
volatile uint8_t x248 = 105U;
static volatile int32_t t59 = 416080;
static uint16_t x254 = UINT16_MAX;
volatile int32_t t60 = -3;
int16_t x261 = INT16_MIN;
int32_t x268 = INT32_MIN;
uint32_t x273 = 3U;
static int64_t x275 = INT64_MAX;
int32_t t66 = 92700042;
int64_t x284 = 583471663388092656LL;
int32_t t67 = -15;
int32_t x285 = -1;
uint8_t x288 = 8U;
static int16_t x291 = -1;
static int8_t x292 = 1;
int16_t x303 = INT16_MIN;
static volatile int32_t t72 = -1916;
static int32_t x305 = INT32_MIN;
int8_t x307 = INT8_MAX;
int32_t x323 = 459;
uint8_t x325 = 3U;
static uint32_t x328 = 222U;
volatile int16_t x332 = -3;
uint64_t x334 = 798050LLU;
static int8_t x335 = INT8_MIN;
int16_t x336 = INT16_MIN;
uint32_t x341 = 18U;
uint32_t x347 = 11428U;
uint64_t x353 = 4188623253309555LLU;
int32_t x362 = -1;
volatile int32_t t87 = -957;
volatile uint64_t x376 = UINT64_MAX;
volatile int32_t t89 = -1021963;
volatile int32_t t91 = 1;
volatile uint16_t x401 = UINT16_MAX;
int32_t x403 = INT32_MAX;
static volatile uint16_t x406 = 35U;
int32_t x410 = INT32_MIN;
uint8_t x413 = 0U;
uint16_t x414 = 65U;
int32_t t98 = 7305;
int16_t x418 = INT16_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t t0 = 191996421;

	t0 = ((x1/x2)<(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 27068519LLU;
	int8_t x6 = -2;
	volatile uint8_t x7 = UINT8_MAX;
	int32_t x8 = 56875312;
	volatile int32_t t1 = -32224;

	t1 = ((x5/x6)<(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 6402882234412LLU;
	int32_t x11 = INT32_MAX;
	volatile int32_t t2 = -21;

	t2 = ((x9/x10)<(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int64_t x14 = INT64_MAX;
	int16_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 10320558;

	t3 = ((x13/x14)<(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 0U;
	int16_t x18 = -1;
	uint8_t x19 = 0U;
	uint32_t x20 = 140991U;
	static volatile int32_t t4 = 2671198;

	t4 = ((x17/x18)<(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 25U;
	uint8_t x23 = UINT8_MAX;
	volatile int32_t x24 = INT32_MIN;
	int32_t t5 = 24877080;

	t5 = ((x21/x22)<(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -671;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	int32_t x28 = -1;

	t6 = ((x25/x26)<(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = 8558LL;
	int32_t t7 = -49227;

	t7 = ((x29/x30)<(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 1924U;
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = 237757340931LL;
	static uint64_t x36 = 28740067041927LLU;
	int32_t t8 = -1;

	t8 = ((x33/x34)<(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint32_t x38 = 2376258U;
	static int64_t x39 = -1LL;
	uint32_t x40 = 23997U;
	int32_t t9 = 9442;

	t9 = ((x37/x38)<(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x43 = -1;
	int32_t x44 = 40;
	volatile int32_t t10 = -13;

	t10 = ((x41/x42)<(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 4442U;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 66910076;

	t11 = ((x45/x46)<(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	static int16_t x54 = INT16_MIN;
	volatile int64_t x55 = 204570LL;
	static volatile int8_t x56 = 1;
	volatile int32_t t12 = 800;

	t12 = ((x53/x54)<(x55&x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 0;
	static int32_t x58 = -114;
	static volatile int32_t x59 = INT32_MIN;
	uint32_t x60 = 9256549U;

	t13 = ((x57/x58)<(x59&x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x62 = -1;
	static uint8_t x64 = UINT8_MAX;
	static volatile int32_t t14 = 0;

	t14 = ((x61/x62)<(x63&x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 687079740U;
	static int64_t x66 = INT64_MAX;
	int32_t x67 = 775273333;
	static int16_t x68 = 30;
	int32_t t15 = 30991574;

	t15 = ((x65/x66)<(x67&x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x72 = INT64_MAX;
	int32_t t16 = 1014886963;

	t16 = ((x69/x70)<(x71&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = INT8_MIN;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -4567045;

	t17 = ((x73/x74)<(x75&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int64_t x79 = -39377282LL;
	int32_t x80 = INT32_MIN;
	volatile int32_t t18 = 272;

	t18 = ((x77/x78)<(x79&x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x82 = UINT16_MAX;
	uint64_t x83 = 1921404564397238140LLU;
	volatile uint16_t x84 = UINT16_MAX;
	static int32_t t19 = 1044646;

	t19 = ((x81/x82)<(x83&x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -45;
	volatile int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	volatile int64_t x88 = 27700644120444110LL;
	int32_t t20 = -606;

	t20 = ((x85/x86)<(x87&x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x91 = INT16_MAX;
	uint64_t x92 = 38425970LLU;
	static volatile int32_t t21 = -1;

	t21 = ((x89/x90)<(x91&x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 9776778;
	int8_t x94 = 28;
	int32_t x95 = INT32_MAX;
	int8_t x96 = -1;
	volatile int32_t t22 = 106193;

	t22 = ((x93/x94)<(x95&x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MIN;
	static volatile int64_t x100 = 208920393098093777LL;
	static volatile int32_t t23 = -594837;

	t23 = ((x97/x98)<(x99&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = 14149531176LL;
	static int8_t x103 = INT8_MIN;
	int64_t x104 = -1LL;

	t24 = ((x101/x102)<(x103&x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	uint32_t x106 = UINT32_MAX;
	int32_t t25 = 509;

	t25 = ((x105/x106)<(x107&x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 105U;
	int8_t x110 = 2;
	static int32_t x111 = INT32_MIN;
	uint32_t x112 = 115199U;
	int32_t t26 = 13810086;

	t26 = ((x109/x110)<(x111&x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MIN;
	volatile int64_t x115 = 10LL;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t27 = -172162;

	t27 = ((x113/x114)<(x115&x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	int16_t x118 = INT16_MIN;
	volatile int16_t x120 = -1;

	t28 = ((x117/x118)<(x119&x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x123 = INT8_MAX;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t29 = 658;

	t29 = ((x121/x122)<(x123&x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x126 = 15;
	uint32_t x127 = 16607844U;
	int32_t x128 = INT32_MIN;

	t30 = ((x125/x126)<(x127&x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -1;
	uint16_t x130 = 10158U;
	uint32_t x131 = 74337U;
	uint8_t x132 = UINT8_MAX;
	int32_t t31 = 16508013;

	t31 = ((x129/x130)<(x131&x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x134 = 1446453492202496LLU;
	static volatile int32_t t32 = -9;

	t32 = ((x133/x134)<(x135&x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = 10;
	int8_t x139 = INT8_MIN;
	int8_t x140 = -1;
	static volatile int32_t t33 = 193071;

	t33 = ((x137/x138)<(x139&x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	uint16_t x143 = 316U;
	volatile int32_t t34 = 4244058;

	t34 = ((x141/x142)<(x143&x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x146 = 6;
	volatile uint32_t x147 = UINT32_MAX;

	t35 = ((x145/x146)<(x147&x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = -4;
	int16_t x150 = -763;
	static volatile int16_t x152 = INT16_MIN;
	volatile int32_t t36 = 177588114;

	t36 = ((x149/x150)<(x151&x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x155 = INT16_MIN;
	int32_t t37 = -12564;

	t37 = ((x153/x154)<(x155&x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	uint8_t x159 = 22U;
	int64_t x160 = -270672606932LL;
	static int32_t t38 = 0;

	t38 = ((x157/x158)<(x159&x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	static uint8_t x162 = UINT8_MAX;
	volatile int64_t x163 = -1LL;
	static int8_t x164 = 6;
	volatile int32_t t39 = 351634;

	t39 = ((x161/x162)<(x163&x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int64_t x167 = -1LL;
	static volatile uint16_t x168 = 8851U;
	static int32_t t40 = 3764862;

	t40 = ((x165/x166)<(x167&x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	int32_t t41 = -513835;

	t41 = ((x169/x170)<(x171&x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -1;
	volatile uint16_t x174 = 380U;
	int8_t x175 = INT8_MAX;
	uint32_t x176 = 282U;

	t42 = ((x173/x174)<(x175&x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = -621580211872819733LL;
	uint16_t x178 = 25881U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t43 = -2;

	t43 = ((x177/x178)<(x179&x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = -1;
	uint8_t x182 = UINT8_MAX;
	int8_t x184 = 6;
	int32_t t44 = -91167;

	t44 = ((x181/x182)<(x183&x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MAX;
	uint16_t x186 = 987U;
	static int64_t x187 = -1LL;
	uint8_t x188 = 11U;
	volatile int32_t t45 = 759879;

	t45 = ((x185/x186)<(x187&x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 0U;
	int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t46 = -429459;

	t46 = ((x189/x190)<(x191&x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x194 = INT64_MAX;
	volatile int32_t x195 = INT32_MIN;
	static int32_t t47 = 157697;

	t47 = ((x193/x194)<(x195&x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	static int64_t x198 = -16609747359030986LL;
	uint64_t x199 = UINT64_MAX;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t48 = 903053068;

	t48 = ((x197/x198)<(x199&x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = 1;
	static uint16_t x203 = 25103U;
	static int64_t x204 = -1LL;
	static int32_t t49 = 4258369;

	t49 = ((x201/x202)<(x203&x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MAX;
	volatile int8_t x206 = -24;
	int8_t x208 = INT8_MIN;

	t50 = ((x205/x206)<(x207&x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = INT32_MIN;
	uint16_t x214 = 1U;
	static int8_t x215 = INT8_MAX;
	int16_t x216 = 8;
	int32_t t51 = 1021564315;

	t51 = ((x213/x214)<(x215&x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x217 = UINT8_MAX;
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 531U;
	int8_t x220 = INT8_MIN;
	int32_t t52 = 10853;

	t52 = ((x217/x218)<(x219&x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x222 = 56805LLU;
	int16_t x223 = INT16_MIN;
	int8_t x224 = -1;
	volatile int32_t t53 = 4;

	t53 = ((x221/x222)<(x223&x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -145;
	int32_t x226 = INT32_MIN;
	volatile int32_t t54 = 0;

	t54 = ((x225/x226)<(x227&x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = INT64_MIN;
	static int32_t x230 = INT32_MIN;
	uint32_t x232 = 9978429U;
	volatile int32_t t55 = -15;

	t55 = ((x229/x230)<(x231&x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = -642213157431349751LL;
	int32_t x234 = INT32_MIN;
	int64_t x236 = INT64_MAX;
	volatile int32_t t56 = 2331;

	t56 = ((x233/x234)<(x235&x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = -29511987;
	volatile int32_t t57 = -5785;

	t57 = ((x237/x238)<(x239&x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = -1LL;
	uint32_t x242 = 26608U;
	int32_t x243 = -1;
	static int16_t x244 = -1;

	t58 = ((x241/x242)<(x243&x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x247 = 214496153496LLU;

	t59 = ((x245/x246)<(x247&x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -9813324;

	t60 = ((x253/x254)<(x255&x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 264684203LLU;
	uint8_t x258 = UINT8_MAX;
	volatile int64_t x259 = -1LL;
	uint8_t x260 = 1U;
	int32_t t61 = -7;

	t61 = ((x257/x258)<(x259&x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x262 = 39LLU;
	int64_t x263 = INT64_MIN;
	int8_t x264 = 2;
	volatile int32_t t62 = 3582;

	t62 = ((x261/x262)<(x263&x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = 0;
	uint32_t x266 = 15U;
	int64_t x267 = INT64_MIN;
	int32_t t63 = 300;

	t63 = ((x265/x266)<(x267&x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 3962U;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = -1;
	int64_t x272 = 3697991773LL;
	int32_t t64 = -47997038;

	t64 = ((x269/x270)<(x271&x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x274 = INT8_MIN;
	volatile uint64_t x276 = 26723393331733976LLU;
	static int32_t t65 = 1;

	t65 = ((x273/x274)<(x275&x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 77U;
	static volatile uint8_t x278 = 6U;
	uint8_t x279 = 0U;
	int32_t x280 = 597981869;

	t66 = ((x277/x278)<(x279&x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = 4U;
	uint32_t x282 = 667027U;
	int8_t x283 = -1;

	t67 = ((x281/x282)<(x283&x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x286 = INT32_MIN;
	volatile int64_t x287 = 135470LL;
	volatile int32_t t68 = 49804;

	t68 = ((x285/x286)<(x287&x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 0;
	uint32_t x290 = 6U;
	static volatile int32_t t69 = -38025987;

	t69 = ((x289/x290)<(x291&x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = UINT8_MAX;
	int64_t x294 = -4549LL;
	int16_t x295 = 3;
	uint16_t x296 = UINT16_MAX;
	int32_t t70 = -1400713;

	t70 = ((x293/x294)<(x295&x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = -1;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t71 = -848823866;

	t71 = ((x297/x298)<(x299&x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = UINT64_MAX;
	volatile uint32_t x302 = UINT32_MAX;
	static uint8_t x304 = 0U;

	t72 = ((x301/x302)<(x303&x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x306 = 824U;
	uint64_t x308 = 6757348LLU;
	volatile int32_t t73 = -2;

	t73 = ((x305/x306)<(x307&x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = -39LL;
	static int16_t x310 = INT16_MIN;
	volatile uint64_t x311 = 2146699742LLU;
	volatile int8_t x312 = -7;
	volatile int32_t t74 = -2;

	t74 = ((x309/x310)<(x311&x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x313 = 74U;
	volatile uint8_t x314 = UINT8_MAX;
	static volatile int8_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	int32_t t75 = 809670068;

	t75 = ((x313/x314)<(x315&x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x317 = INT32_MIN;
	int32_t x318 = 372;
	int16_t x319 = -1;
	uint32_t x320 = 62303974U;
	int32_t t76 = -767283935;

	t76 = ((x317/x318)<(x319&x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x321 = INT16_MAX;
	static uint64_t x322 = 51LLU;
	int8_t x324 = 62;
	int32_t t77 = 279256;

	t77 = ((x321/x322)<(x323&x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x326 = -1LL;
	volatile int64_t x327 = INT64_MAX;
	volatile int32_t t78 = -1499;

	t78 = ((x325/x326)<(x327&x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1;
	int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	volatile int32_t t79 = 2;

	t79 = ((x329/x330)<(x331&x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = UINT32_MAX;
	volatile int32_t t80 = -14;

	t80 = ((x333/x334)<(x335&x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = -4LL;
	uint16_t x338 = 351U;
	uint16_t x339 = 229U;
	static uint64_t x340 = 6002818002668986LLU;
	int32_t t81 = 1296;

	t81 = ((x337/x338)<(x339&x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = INT16_MAX;
	volatile int32_t t82 = 1;

	t82 = ((x341/x342)<(x343&x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = 11;
	int16_t x346 = INT16_MIN;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t83 = -121936;

	t83 = ((x345/x346)<(x347&x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MIN;
	static int8_t x352 = -1;
	int32_t t84 = 555274;

	t84 = ((x349/x350)<(x351&x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x354 = 11394U;
	uint8_t x355 = 8U;
	int64_t x356 = INT64_MIN;
	volatile int32_t t85 = -1;

	t85 = ((x353/x354)<(x355&x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = -2008893141089LL;
	int8_t x358 = -1;
	volatile int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t86 = 684295627;

	t86 = ((x357/x358)<(x359&x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x361 = -7214353;
	static uint16_t x363 = 321U;
	static int64_t x364 = 5136259330223LL;

	t87 = ((x361/x362)<(x363&x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x365 = 57U;
	int32_t x366 = 566156;
	volatile uint16_t x367 = 6495U;
	uint32_t x368 = 49874U;
	volatile int32_t t88 = -276638;

	t88 = ((x365/x366)<(x367&x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = -1LL;
	uint16_t x374 = 43U;
	uint64_t x375 = UINT64_MAX;

	t89 = ((x373/x374)<(x375&x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = INT16_MAX;
	volatile uint16_t x378 = UINT16_MAX;
	volatile int64_t x379 = -1LL;
	int16_t x380 = 2;
	volatile int32_t t90 = 489;

	t90 = ((x377/x378)<(x379&x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x381 = 1U;
	volatile int16_t x382 = -1;
	volatile uint16_t x383 = 1211U;
	uint16_t x384 = 3U;

	t91 = ((x381/x382)<(x383&x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	uint32_t x386 = 906061U;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	static int32_t t92 = -10082756;

	t92 = ((x385/x386)<(x387&x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x389 = INT8_MIN;
	static uint32_t x390 = 115261U;
	volatile int64_t x391 = INT64_MIN;
	uint32_t x392 = 921U;
	static int32_t t93 = 0;

	t93 = ((x389/x390)<(x391&x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = 33114782LL;
	int32_t x398 = -812228130;
	int8_t x399 = -1;
	static uint64_t x400 = 21267865693158424LLU;
	int32_t t94 = 16422;

	t94 = ((x397/x398)<(x399&x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x402 = -4937069988772LL;
	int8_t x404 = INT8_MIN;
	int32_t t95 = -4279691;

	t95 = ((x401/x402)<(x403&x404));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x405 = 1U;
	uint16_t x407 = 230U;
	int32_t x408 = INT32_MAX;
	int32_t t96 = -42;

	t96 = ((x405/x406)<(x407&x408));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x409 = INT16_MIN;
	int8_t x411 = 2;
	int8_t x412 = INT8_MAX;
	volatile int32_t t97 = 438;

	t97 = ((x409/x410)<(x411&x412));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x415 = -1;
	int32_t x416 = -1;

	t98 = ((x413/x414)<(x415&x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 2253U;
	static uint64_t x419 = 1LLU;
	int32_t x420 = INT32_MAX;
	int32_t t99 = 35670568;

	t99 = ((x417/x418)<(x419&x420));

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

