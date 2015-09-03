#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int32_t t0 = -11420;
volatile uint16_t x5 = 3U;
volatile int8_t x7 = -11;
volatile int8_t x13 = INT8_MIN;
volatile int32_t t3 = 877838;
int32_t x23 = INT32_MIN;
uint16_t x27 = 27U;
int64_t x31 = INT64_MIN;
uint16_t x38 = 1U;
volatile uint8_t x41 = UINT8_MAX;
uint32_t x46 = 145401U;
volatile int32_t t11 = 386;
volatile int8_t x50 = INT8_MIN;
volatile int32_t x53 = -1062996341;
static int16_t x57 = INT16_MAX;
int8_t x58 = -3;
int64_t x60 = INT64_MAX;
int32_t t14 = 1;
volatile int64_t x61 = INT64_MIN;
int64_t x62 = INT64_MIN;
int64_t x65 = INT64_MIN;
uint32_t x71 = UINT32_MAX;
int64_t x72 = INT64_MIN;
static int32_t x76 = INT32_MIN;
int32_t t18 = -2;
uint16_t x79 = UINT16_MAX;
volatile int32_t t20 = -37488;
static int64_t x87 = -745375454055LL;
int32_t x89 = INT32_MIN;
int32_t x91 = INT32_MIN;
int8_t x94 = INT8_MIN;
static volatile int32_t x96 = INT32_MAX;
int32_t t23 = -282;
int16_t x97 = 6;
uint16_t x102 = UINT16_MAX;
int64_t x103 = INT64_MAX;
int16_t x108 = -5;
uint8_t x112 = UINT8_MAX;
static volatile int32_t t27 = -1014;
volatile int64_t x115 = -172931980772096246LL;
uint8_t x133 = UINT8_MAX;
static int8_t x137 = -3;
int8_t x142 = -3;
volatile int32_t t35 = 6161;
volatile int16_t x153 = 263;
uint16_t x157 = 3058U;
static int64_t x162 = INT64_MIN;
volatile int8_t x166 = 2;
int16_t x173 = -1;
uint64_t x185 = 14293LLU;
int32_t x190 = -21;
static uint16_t x198 = 721U;
int64_t x199 = INT64_MIN;
uint16_t x205 = 137U;
int32_t x208 = -1;
volatile int64_t x211 = 1657351438935LL;
int16_t x213 = INT16_MAX;
int16_t x214 = INT16_MIN;
int32_t x218 = INT32_MIN;
uint64_t x220 = 63778544987LLU;
static uint8_t x231 = 2U;
volatile int64_t x234 = -1LL;
volatile int64_t x235 = -1LL;
uint16_t x241 = 1371U;
uint32_t x245 = 262992U;
volatile int8_t x247 = 12;
volatile int16_t x249 = INT16_MIN;
int64_t x251 = INT64_MIN;
uint64_t x253 = UINT64_MAX;
int8_t x258 = INT8_MIN;
int16_t x259 = INT16_MAX;
static uint16_t x261 = UINT16_MAX;
uint8_t x266 = 10U;
int8_t x268 = -1;
int32_t t64 = 0;
int32_t t65 = 456446327;
int64_t x285 = INT64_MAX;
volatile int16_t x286 = -1;
uint32_t x288 = 6U;
int32_t t67 = -8956682;
int16_t x294 = -174;
int8_t x305 = INT8_MIN;
static volatile uint16_t x307 = 282U;
uint16_t x330 = UINT16_MAX;
int32_t x331 = -11392374;
uint32_t x335 = 428027098U;
static uint32_t x341 = 999937U;
volatile uint16_t x346 = 12281U;
int16_t x355 = -1;
volatile int32_t t84 = -566118665;
volatile uint8_t x359 = 1U;
static volatile int8_t x360 = INT8_MIN;
volatile int32_t t87 = 63325;
volatile int32_t x377 = -1;
uint8_t x378 = 16U;
static int32_t t90 = -3;
int16_t x386 = 1603;
int64_t x387 = 2936217874071409864LL;
int32_t t92 = 427;
uint8_t x390 = 104U;
uint32_t x397 = UINT32_MAX;
int64_t x404 = INT64_MIN;
int32_t t96 = -57122;
int8_t x411 = -1;
static volatile int32_t t99 = 20468;


void f0(void) {
	uint16_t x1 = 848U;
	volatile uint16_t x2 = UINT16_MAX;
	uint16_t x4 = 2U;

	t0 = ((x1/x2)<=(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 663733140235843LLU;
	uint16_t x8 = 13U;
	static int32_t t1 = 24;

	t1 = ((x5/x6)<=(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x10 = 3786U;
	int32_t x11 = 39;
	int16_t x12 = -1;
	int32_t t2 = -29;

	t2 = ((x9/x10)<=(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x14 = INT8_MAX;
	volatile int8_t x15 = INT8_MIN;
	volatile uint16_t x16 = 371U;

	t3 = ((x13/x14)<=(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	int8_t x18 = INT8_MIN;
	static int16_t x19 = 2301;
	int16_t x20 = -7;
	int32_t t4 = 43297817;

	t4 = ((x17/x18)<=(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 439196U;
	uint32_t x22 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -119204876;

	t5 = ((x21/x22)<=(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int16_t x26 = 1248;
	static volatile uint32_t x28 = 201740064U;
	volatile int32_t t6 = 37;

	t6 = ((x25/x26)<=(x27&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = -6;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 492180621;

	t7 = ((x29/x30)<=(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int16_t x34 = 845;
	int64_t x35 = 12311LL;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 795677009;

	t8 = ((x33/x34)<=(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int64_t x39 = -1LL;
	volatile int32_t x40 = INT32_MIN;
	int32_t t9 = -15949265;

	t9 = ((x37/x38)<=(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x42 = UINT32_MAX;
	int64_t x43 = 8590725019302LL;
	static uint16_t x44 = UINT16_MAX;
	static int32_t t10 = -85591;

	t10 = ((x41/x42)<=(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	static int64_t x47 = 1LL;
	static int64_t x48 = -1LL;

	t11 = ((x45/x46)<=(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int64_t x51 = INT64_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = 1;

	t12 = ((x49/x50)<=(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	uint32_t x55 = 312904940U;
	int8_t x56 = -6;
	int32_t t13 = -11;

	t13 = ((x53/x54)<=(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = 54;

	t14 = ((x57/x58)<=(x59&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = -1;
	volatile int32_t t15 = 0;

	t15 = ((x61/x62)<=(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MAX;
	int32_t x67 = -1;
	static int32_t x68 = 377178;
	static volatile int32_t t16 = -24070;

	t16 = ((x65/x66)<=(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 14273868468LLU;
	uint8_t x70 = 91U;
	int32_t t17 = 389165405;

	t17 = ((x69/x70)<=(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MAX;

	t18 = ((x73/x74)<=(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -34;
	uint64_t x78 = UINT64_MAX;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 15;

	t19 = ((x77/x78)<=(x79&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = -1LL;
	int16_t x82 = -1;
	static int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MIN;

	t20 = ((x81/x82)<=(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 222965834U;
	volatile int64_t x86 = INT64_MIN;
	uint8_t x88 = 4U;
	static int32_t t21 = -12085;

	t21 = ((x85/x86)<=(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = 356;
	uint16_t x92 = 11U;
	int32_t t22 = -373;

	t22 = ((x89/x90)<=(x91&x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int8_t x95 = -1;

	t23 = ((x93/x94)<=(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	static int64_t x99 = INT64_MIN;
	int8_t x100 = 5;
	int32_t t24 = 1;

	t24 = ((x97/x98)<=(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	int16_t x104 = 2;
	int32_t t25 = -663376;

	t25 = ((x101/x102)<=(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 72U;
	volatile uint16_t x106 = UINT16_MAX;
	int64_t x107 = -81313LL;
	int32_t t26 = -195202922;

	t26 = ((x105/x106)<=(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	int16_t x110 = INT16_MIN;
	uint64_t x111 = 12LLU;

	t27 = ((x109/x110)<=(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int64_t x114 = -1LL;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -55;

	t28 = ((x113/x114)<=(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	static uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -1017791916;

	t29 = ((x117/x118)<=(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	volatile uint64_t x122 = 94351LLU;
	int64_t x123 = 64542111LL;
	int32_t x124 = -1;
	volatile int32_t t30 = 901;

	t30 = ((x121/x122)<=(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = INT64_MIN;
	static int8_t x127 = -1;
	int64_t x128 = -2813048981318420LL;
	volatile int32_t t31 = -977593331;

	t31 = ((x125/x126)<=(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x129 = INT16_MIN;
	volatile int8_t x130 = 18;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t32 = -380386;

	t32 = ((x129/x130)<=(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 7305U;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	int32_t t33 = -5322;

	t33 = ((x133/x134)<=(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = UINT16_MAX;
	uint64_t x139 = 254871855354612LLU;
	int64_t x140 = -1LL;
	volatile int32_t t34 = 3;

	t34 = ((x137/x138)<=(x139&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -1LL;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = -1;

	t35 = ((x141/x142)<=(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = 190;
	int16_t x146 = 3880;
	static uint16_t x147 = 110U;
	static volatile int8_t x148 = -1;
	static volatile int32_t t36 = 242088195;

	t36 = ((x145/x146)<=(x147&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	uint16_t x150 = 230U;
	static int32_t x151 = INT32_MIN;
	uint8_t x152 = 5U;
	int32_t t37 = -2994;

	t37 = ((x149/x150)<=(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -1300554461869736LL;
	int64_t x155 = -1LL;
	int8_t x156 = 0;
	static volatile int32_t t38 = 6097;

	t38 = ((x153/x154)<=(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 199107U;
	static int32_t x159 = INT32_MIN;
	volatile int64_t x160 = INT64_MIN;
	static int32_t t39 = 108350555;

	t39 = ((x157/x158)<=(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 798244;
	uint8_t x163 = 1U;
	volatile int32_t x164 = -4908087;
	int32_t t40 = 9963697;

	t40 = ((x161/x162)<=(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x167 = -14518;
	uint16_t x168 = UINT16_MAX;
	static volatile int32_t t41 = 1;

	t41 = ((x165/x166)<=(x167&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 1;

	t42 = ((x169/x170)<=(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MAX;
	static uint16_t x176 = 1U;
	int32_t t43 = -16592963;

	t43 = ((x173/x174)<=(x175&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	static int32_t x182 = INT32_MIN;
	int16_t x183 = -6;
	int8_t x184 = INT8_MAX;
	volatile int32_t t44 = -1904953;

	t44 = ((x181/x182)<=(x183&x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x186 = -2017;
	uint64_t x187 = UINT64_MAX;
	uint64_t x188 = UINT64_MAX;
	int32_t t45 = 246294;

	t45 = ((x185/x186)<=(x187&x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = 28U;
	int64_t x191 = INT64_MIN;
	int8_t x192 = -1;
	int32_t t46 = -30;

	t46 = ((x189/x190)<=(x191&x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	int32_t x200 = -475172;
	static int32_t t47 = -56978;

	t47 = ((x197/x198)<=(x199&x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x206 = INT32_MIN;
	static int32_t x207 = INT32_MAX;
	int32_t t48 = 5061943;

	t48 = ((x205/x206)<=(x207&x208));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x209 = 2145;
	uint64_t x210 = UINT64_MAX;
	int8_t x212 = INT8_MAX;
	volatile int32_t t49 = -943347;

	t49 = ((x209/x210)<=(x211&x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x215 = 230U;
	int32_t x216 = -109851029;
	volatile int32_t t50 = 14;

	t50 = ((x213/x214)<=(x215&x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x217 = 2U;
	static int64_t x219 = INT64_MAX;
	static int32_t t51 = -20;

	t51 = ((x217/x218)<=(x219&x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 79442409U;
	static uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 29536968646493LLU;
	int32_t x224 = 0;
	int32_t t52 = 766838220;

	t52 = ((x221/x222)<=(x223&x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = INT16_MIN;
	static uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	volatile int32_t t53 = -14301;

	t53 = ((x225/x226)<=(x227&x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	uint64_t x230 = 38LLU;
	int8_t x232 = 1;
	static int32_t t54 = -774324573;

	t54 = ((x229/x230)<=(x231&x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 3390U;
	int16_t x236 = INT16_MAX;
	int32_t t55 = 14110409;

	t55 = ((x233/x234)<=(x235&x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = 27U;
	static int16_t x238 = INT16_MIN;
	static volatile int64_t x239 = INT64_MIN;
	volatile int32_t x240 = INT32_MIN;
	static volatile int32_t t56 = -769;

	t56 = ((x237/x238)<=(x239&x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x242 = 5301LLU;
	volatile int8_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	volatile int32_t t57 = 207417338;

	t57 = ((x241/x242)<=(x243&x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x246 = 10882;
	int16_t x248 = 1697;
	int32_t t58 = -37397;

	t58 = ((x245/x246)<=(x247&x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x250 = INT8_MIN;
	uint64_t x252 = 27466583697341LLU;
	static volatile int32_t t59 = 2585;

	t59 = ((x249/x250)<=(x251&x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x254 = 1U;
	int8_t x255 = 62;
	uint8_t x256 = UINT8_MAX;
	int32_t t60 = 100334743;

	t60 = ((x253/x254)<=(x255&x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MAX;
	static int16_t x260 = -705;
	int32_t t61 = -22040684;

	t61 = ((x257/x258)<=(x259&x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = -1;
	static uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t62 = -1;

	t62 = ((x261/x262)<=(x263&x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 69086412466717LLU;
	int64_t x267 = 994751LL;
	volatile int32_t t63 = 30;

	t63 = ((x265/x266)<=(x267&x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x269 = INT8_MAX;
	int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	uint32_t x272 = 66U;

	t64 = ((x269/x270)<=(x271&x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x277 = 32788930042627LLU;
	int64_t x278 = -1LL;
	int16_t x279 = -1;
	uint8_t x280 = 126U;

	t65 = ((x277/x278)<=(x279&x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x281 = -1;
	static int8_t x282 = INT8_MAX;
	static volatile uint64_t x283 = 1287476188714170LLU;
	int16_t x284 = -1;
	volatile int32_t t66 = 0;

	t66 = ((x281/x282)<=(x283&x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x287 = INT8_MIN;

	t67 = ((x285/x286)<=(x287&x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MIN;
	static int32_t x290 = INT32_MIN;
	volatile uint8_t x291 = 29U;
	static volatile int32_t x292 = INT32_MIN;
	volatile int32_t t68 = -46092341;

	t68 = ((x289/x290)<=(x291&x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x293 = 3U;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;
	volatile int32_t t69 = -1573116;

	t69 = ((x293/x294)<=(x295&x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x297 = -1;
	volatile int32_t x298 = -4;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	volatile int32_t t70 = -69;

	t70 = ((x297/x298)<=(x299&x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = 17LLU;
	uint32_t x302 = 123U;
	uint16_t x303 = 657U;
	int16_t x304 = INT16_MIN;
	int32_t t71 = -31;

	t71 = ((x301/x302)<=(x303&x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x306 = 238;
	uint32_t x308 = UINT32_MAX;
	volatile int32_t t72 = 21118359;

	t72 = ((x305/x306)<=(x307&x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 0U;
	uint8_t x310 = 58U;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;
	int32_t t73 = -3;

	t73 = ((x309/x310)<=(x311&x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x313 = 5674564U;
	volatile int32_t x314 = 314802975;
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t74 = -79360;

	t74 = ((x313/x314)<=(x315&x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x317 = 45604388990009LLU;
	static int8_t x318 = 35;
	static int32_t x319 = INT32_MIN;
	static int16_t x320 = -1;
	volatile int32_t t75 = 87910387;

	t75 = ((x317/x318)<=(x319&x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 161025323018799LLU;
	volatile int32_t x322 = -7828941;
	int32_t x323 = INT32_MIN;
	int8_t x324 = -1;
	int32_t t76 = -254801786;

	t76 = ((x321/x322)<=(x323&x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	int16_t x328 = 30;
	int32_t t77 = -50875;

	t77 = ((x325/x326)<=(x327&x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x329 = 448456212U;
	int64_t x332 = INT64_MAX;
	int32_t t78 = -6378;

	t78 = ((x329/x330)<=(x331&x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x333 = INT64_MAX;
	uint64_t x334 = 66796593LLU;
	volatile int32_t x336 = INT32_MIN;
	volatile int32_t t79 = -898442191;

	t79 = ((x333/x334)<=(x335&x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 13057U;
	uint32_t x338 = UINT32_MAX;
	volatile int32_t x339 = INT32_MAX;
	volatile uint64_t x340 = 543018038227LLU;
	static int32_t t80 = 198;

	t80 = ((x337/x338)<=(x339&x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x342 = INT16_MIN;
	int8_t x343 = 3;
	uint64_t x344 = 2568762669120055LLU;
	volatile int32_t t81 = 620835887;

	t81 = ((x341/x342)<=(x343&x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = 2;
	int16_t x347 = INT16_MAX;
	volatile int16_t x348 = 933;
	static int32_t t82 = -3187110;

	t82 = ((x345/x346)<=(x347&x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x349 = INT8_MIN;
	volatile int64_t x350 = -100LL;
	static uint8_t x351 = 0U;
	static volatile uint16_t x352 = UINT16_MAX;
	volatile int32_t t83 = 1352821;

	t83 = ((x349/x350)<=(x351&x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x353 = UINT8_MAX;
	static uint64_t x354 = 1944662172035345624LLU;
	volatile int32_t x356 = INT32_MAX;

	t84 = ((x353/x354)<=(x355&x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int16_t x358 = -486;
	volatile int32_t t85 = 42;

	t85 = ((x357/x358)<=(x359&x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MAX;
	uint32_t x362 = UINT32_MAX;
	volatile uint32_t x363 = 850U;
	static uint64_t x364 = 2019310066222831655LLU;
	volatile int32_t t86 = -68239;

	t86 = ((x361/x362)<=(x363&x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = 0;
	static volatile uint16_t x366 = UINT16_MAX;
	int16_t x367 = -1;
	static volatile uint32_t x368 = UINT32_MAX;

	t87 = ((x365/x366)<=(x367&x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = 630;
	static int8_t x372 = INT8_MAX;
	static volatile int32_t t88 = -11302;

	t88 = ((x369/x370)<=(x371&x372));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	static uint64_t x374 = 6LLU;
	int16_t x375 = INT16_MIN;
	int64_t x376 = 113050013LL;
	int32_t t89 = 2095302;

	t89 = ((x373/x374)<=(x375&x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x379 = 56493342512871093LLU;
	uint8_t x380 = 10U;

	t90 = ((x377/x378)<=(x379&x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = INT32_MAX;
	int16_t x382 = 1;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = -1;
	volatile int32_t t91 = -277927;

	t91 = ((x381/x382)<=(x383&x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = 5008U;
	int16_t x388 = INT16_MAX;

	t92 = ((x385/x386)<=(x387&x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x389 = INT64_MAX;
	uint64_t x391 = 7LLU;
	volatile int32_t x392 = 59290916;
	int32_t t93 = -19417;

	t93 = ((x389/x390)<=(x391&x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int64_t x394 = -519276107932LL;
	volatile int16_t x395 = INT16_MAX;
	uint32_t x396 = UINT32_MAX;
	int32_t t94 = 1;

	t94 = ((x393/x394)<=(x395&x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x398 = -1;
	int8_t x399 = 29;
	int16_t x400 = 382;
	volatile int32_t t95 = 19;

	t95 = ((x397/x398)<=(x399&x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = -1509;
	int8_t x402 = INT8_MIN;
	uint16_t x403 = UINT16_MAX;

	t96 = ((x401/x402)<=(x403&x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x405 = 26LLU;
	int8_t x406 = 4;
	uint8_t x407 = 10U;
	static int16_t x408 = 0;
	int32_t t97 = -2;

	t97 = ((x405/x406)<=(x407&x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x409 = UINT64_MAX;
	static uint8_t x410 = 17U;
	int8_t x412 = INT8_MAX;
	volatile int32_t t98 = -32232;

	t98 = ((x409/x410)<=(x411&x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = 36;
	static int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MIN;
	static int16_t x416 = -22;

	t99 = ((x413/x414)<=(x415&x416));

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

