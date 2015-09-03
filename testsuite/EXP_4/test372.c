#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 10150963;
static int8_t x12 = INT8_MIN;
int16_t x17 = INT16_MIN;
uint16_t x18 = 55U;
int64_t x25 = INT64_MIN;
uint32_t x29 = 984U;
int16_t x32 = INT16_MIN;
int8_t x33 = INT8_MAX;
int8_t x34 = INT8_MAX;
uint16_t x36 = 112U;
int32_t x43 = INT32_MIN;
int32_t t7 = 101956;
int64_t x45 = 16LL;
int16_t x48 = INT16_MIN;
int64_t x49 = -1LL;
static volatile int16_t x58 = INT16_MIN;
int8_t x66 = -1;
static volatile int32_t t12 = 539215899;
uint64_t x72 = 125239419639LLU;
uint32_t x75 = 490U;
static uint32_t x77 = UINT32_MAX;
static volatile int16_t x79 = INT16_MAX;
volatile int32_t t15 = -5010;
int64_t x81 = INT64_MIN;
uint8_t x84 = 5U;
int16_t x93 = INT16_MAX;
static volatile int8_t x95 = 36;
int32_t t19 = -4007767;
volatile uint32_t x106 = UINT32_MAX;
volatile uint16_t x108 = UINT16_MAX;
volatile int32_t t21 = 118552278;
volatile int64_t x114 = INT64_MAX;
int32_t x116 = INT32_MIN;
int32_t x129 = -1;
uint64_t x150 = 8145692125928636LLU;
uint16_t x168 = UINT16_MAX;
static int32_t x173 = INT32_MAX;
volatile int8_t x177 = INT8_MIN;
volatile uint32_t x179 = 17U;
int16_t x180 = 0;
uint64_t x191 = UINT64_MAX;
volatile int16_t x201 = -1403;
int8_t x202 = 1;
int16_t x203 = INT16_MAX;
static volatile int8_t x207 = INT8_MIN;
volatile int32_t t36 = -115576179;
int16_t x223 = INT16_MAX;
volatile int16_t x224 = -1;
int8_t x227 = INT8_MIN;
int64_t x240 = -1437495712LL;
int16_t x245 = INT16_MIN;
static volatile int64_t x247 = INT64_MIN;
int8_t x258 = -1;
uint8_t x259 = UINT8_MAX;
int16_t x263 = 193;
int32_t t46 = 48179;
static volatile uint32_t x280 = UINT32_MAX;
uint8_t x281 = 7U;
static int64_t x295 = 1968LL;
volatile uint16_t x296 = UINT16_MAX;
volatile int32_t x310 = -2;
static int32_t t54 = 1;
uint32_t x332 = UINT32_MAX;
int64_t x333 = INT64_MIN;
int32_t t56 = -17;
uint8_t x359 = UINT8_MAX;
int32_t x362 = INT32_MIN;
int32_t t59 = -41914;
int8_t x366 = INT8_MAX;
volatile int32_t t60 = -4;
int64_t x398 = -12527032839915142LL;
uint32_t x404 = 972U;
volatile uint32_t x412 = UINT32_MAX;
volatile int8_t x414 = INT8_MIN;
uint32_t x415 = 784403U;
int32_t x416 = INT32_MIN;
int8_t x418 = INT8_MAX;
int32_t x426 = -53349015;
int64_t x428 = -1LL;
volatile int32_t t71 = 200369;
uint64_t x458 = 119671518691LLU;
int32_t x484 = INT32_MIN;
uint8_t x489 = 117U;
int16_t x496 = INT16_MIN;
static int32_t t77 = -225768949;
volatile int32_t t78 = -2;
uint32_t x545 = 0U;
int16_t x547 = INT16_MAX;
uint64_t x548 = 474447809LLU;
uint32_t x565 = 3193U;
static int16_t x567 = INT16_MAX;
int32_t t81 = 911;
int8_t x573 = INT8_MIN;
uint32_t x589 = 1098U;
int16_t x591 = INT16_MAX;
uint16_t x592 = 3U;
volatile int64_t x607 = -1LL;
static uint32_t x615 = UINT32_MAX;
static int32_t x616 = INT32_MAX;
int8_t x633 = -1;
int32_t t91 = 5;
int8_t x645 = -61;
int32_t x660 = 31;
int64_t x665 = -1LL;
int64_t x669 = INT64_MIN;
int32_t x670 = -1;
int8_t x672 = -7;
static uint16_t x692 = UINT16_MAX;
volatile int32_t t99 = -24275065;


void f0(void) {
	volatile int64_t x1 = -1LL;
	int8_t x2 = -1;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = -1;
	volatile int32_t t0 = -537;

	t0 = (x1==(x2*(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = 1;
	uint16_t x6 = 19295U;
	int8_t x7 = 23;
	volatile int8_t x8 = 0;

	t1 = (x5==(x6*(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = -2936678;
	int32_t t2 = -22;

	t2 = (x9==(x10*(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x19 = INT16_MAX;
	uint32_t x20 = 29U;
	int32_t t3 = -37;

	t3 = (x17==(x18*(x19*x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x26 = 5231711538070279LLU;
	uint64_t x27 = 2LLU;
	int64_t x28 = -1LL;
	int32_t t4 = 44;

	t4 = (x25==(x26*(x27*x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x30 = -56;
	int8_t x31 = INT8_MIN;
	volatile int32_t t5 = 227254635;

	t5 = (x29==(x30*(x31*x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x35 = 342346122284254LL;
	int32_t t6 = -532069344;

	t6 = (x33==(x34*(x35*x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -49196316067LL;
	static uint64_t x42 = UINT64_MAX;
	uint32_t x44 = 11U;

	t7 = (x41==(x42*(x43*x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x46 = 2856LLU;
	volatile int64_t x47 = -1LL;
	int32_t t8 = -55;

	t8 = (x45==(x46*(x47*x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x50 = INT16_MIN;
	int64_t x51 = -1LL;
	int16_t x52 = 21;
	int32_t t9 = -646283106;

	t9 = (x49==(x50*(x51*x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x57 = INT32_MIN;
	int16_t x59 = INT16_MAX;
	uint8_t x60 = 0U;
	int32_t t10 = 36020140;

	t10 = (x57==(x58*(x59*x60)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 0;
	volatile int8_t x64 = 2;
	volatile int32_t t11 = 160763;

	t11 = (x61==(x62*(x63*x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = INT64_MIN;
	uint64_t x67 = 9093906024193852378LLU;
	uint32_t x68 = 1458692U;

	t12 = (x65==(x66*(x67*x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = 1735U;
	static int64_t x70 = INT64_MIN;
	int8_t x71 = 0;
	int32_t t13 = -3439893;

	t13 = (x69==(x70*(x71*x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x73 = UINT32_MAX;
	volatile int8_t x74 = INT8_MIN;
	static volatile uint16_t x76 = 61U;
	int32_t t14 = -1787;

	t14 = (x73==(x74*(x75*x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x78 = INT8_MAX;
	int8_t x80 = INT8_MIN;

	t15 = (x77==(x78*(x79*x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x82 = 1U;
	uint64_t x83 = 890422958LLU;
	int32_t t16 = -3948906;

	t16 = (x81==(x82*(x83*x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = UINT32_MAX;
	int32_t x86 = -1;
	uint8_t x87 = 13U;
	volatile int64_t x88 = -1LL;
	int32_t t17 = -65;

	t17 = (x85==(x86*(x87*x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x94 = UINT64_MAX;
	volatile int8_t x96 = INT8_MIN;
	int32_t t18 = -66253;

	t18 = (x93==(x94*(x95*x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = -230918715;
	volatile int16_t x98 = -1;
	static uint64_t x99 = 4589700036563456973LLU;
	volatile int8_t x100 = INT8_MIN;

	t19 = (x97==(x98*(x99*x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x101 = INT32_MAX;
	volatile int8_t x102 = -1;
	static uint32_t x103 = 229217U;
	volatile int16_t x104 = INT16_MIN;
	static volatile int32_t t20 = 24;

	t20 = (x101==(x102*(x103*x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x107 = 40;

	t21 = (x105==(x106*(x107*x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = UINT16_MAX;
	uint32_t x115 = 4236956U;
	volatile int32_t t22 = 25;

	t22 = (x113==(x114*(x115*x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x117 = 469U;
	int32_t x118 = -79;
	uint8_t x119 = 4U;
	volatile uint32_t x120 = 3945U;
	int32_t t23 = -1829;

	t23 = (x117==(x118*(x119*x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = 0;
	volatile uint8_t x122 = 1U;
	volatile int8_t x123 = 7;
	uint32_t x124 = 86U;
	int32_t t24 = -54634;

	t24 = (x121==(x122*(x123*x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = 4864;
	static int16_t x132 = -449;
	int32_t t25 = 117690652;

	t25 = (x129==(x130*(x131*x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = -1;
	int8_t x138 = INT8_MAX;
	static uint8_t x139 = 38U;
	int8_t x140 = -17;
	volatile int32_t t26 = 1;

	t26 = (x137==(x138*(x139*x140)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = -15887LL;
	static volatile int8_t x142 = 5;
	static volatile int64_t x143 = 4502878068764377LL;
	static volatile uint64_t x144 = 433015123665242183LLU;
	int32_t t27 = -15004;

	t27 = (x141==(x142*(x143*x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x149 = UINT64_MAX;
	volatile uint8_t x151 = 0U;
	int64_t x152 = -2787194616889437LL;
	int32_t t28 = 143316;

	t28 = (x149==(x150*(x151*x152)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = INT64_MIN;
	volatile int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MAX;
	int32_t t29 = -372343;

	t29 = (x153==(x154*(x155*x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = -1;
	int64_t x162 = 393515381884LL;
	uint8_t x163 = UINT8_MAX;
	int16_t x164 = -1;
	volatile int32_t t30 = 52;

	t30 = (x161==(x162*(x163*x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = 3207888031350376LL;
	static volatile uint8_t x166 = 24U;
	int64_t x167 = -1LL;
	int32_t t31 = 2;

	t31 = (x165==(x166*(x167*x168)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x174 = 348622757523LLU;
	uint32_t x175 = UINT32_MAX;
	uint64_t x176 = 67633335642841116LLU;
	int32_t t32 = 7631;

	t32 = (x173==(x174*(x175*x176)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x178 = UINT32_MAX;
	int32_t t33 = -52;

	t33 = (x177==(x178*(x179*x180)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x189 = -1LL;
	int16_t x190 = INT16_MAX;
	uint32_t x192 = 1019919697U;
	volatile int32_t t34 = -62304;

	t34 = (x189==(x190*(x191*x192)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x204 = 22291U;
	volatile int32_t t35 = 168159666;

	t35 = (x201==(x202*(x203*x204)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x205 = 1854853437U;
	int32_t x206 = -1;
	static int8_t x208 = -2;

	t36 = (x205==(x206*(x207*x208)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x209 = INT32_MIN;
	uint16_t x210 = 2682U;
	volatile uint32_t x211 = 12254115U;
	volatile int32_t x212 = INT32_MIN;
	static int32_t t37 = 0;

	t37 = (x209==(x210*(x211*x212)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = -21442309208494LL;
	int32_t x214 = 1231;
	int32_t x215 = INT32_MAX;
	uint64_t x216 = 2857LLU;
	int32_t t38 = -188566;

	t38 = (x213==(x214*(x215*x216)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x221 = -5;
	uint32_t x222 = 7U;
	volatile int32_t t39 = -251;

	t39 = (x221==(x222*(x223*x224)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x225 = -1;
	int32_t x226 = 27;
	int16_t x228 = 259;
	int32_t t40 = 6490836;

	t40 = (x225==(x226*(x227*x228)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x233 = 1LLU;
	int32_t x234 = -2;
	static int16_t x235 = INT16_MIN;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t41 = -1566;

	t41 = (x233==(x234*(x235*x236)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	int8_t x239 = 0;
	static volatile int32_t t42 = -19625517;

	t42 = (x237==(x238*(x239*x240)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x246 = 5483251530LLU;
	uint64_t x248 = 134879823LLU;
	static volatile int32_t t43 = -901911;

	t43 = (x245==(x246*(x247*x248)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x257 = INT32_MIN;
	int32_t x260 = 28217;
	volatile int32_t t44 = 30506579;

	t44 = (x257==(x258*(x259*x260)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x261 = -118569783335866LL;
	volatile int32_t x262 = INT32_MIN;
	static int64_t x264 = -1LL;
	volatile int32_t t45 = 7444;

	t45 = (x261==(x262*(x263*x264)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x269 = 1LL;
	volatile int64_t x270 = -1LL;
	uint16_t x271 = 30U;
	static uint32_t x272 = 1U;

	t46 = (x269==(x270*(x271*x272)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = 0U;
	int32_t x279 = -1;
	int32_t t47 = 0;

	t47 = (x277==(x278*(x279*x280)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x282 = 3027482LLU;
	uint64_t x283 = 7697309574LLU;
	static int32_t x284 = INT32_MIN;
	int32_t t48 = 4636010;

	t48 = (x281==(x282*(x283*x284)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x285 = -12832;
	static int32_t x286 = INT32_MAX;
	static int32_t x287 = -1;
	uint32_t x288 = 3213897U;
	volatile int32_t t49 = 5;

	t49 = (x285==(x286*(x287*x288)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x289 = 9U;
	int64_t x290 = 556636378063LL;
	int16_t x291 = INT16_MIN;
	static volatile int8_t x292 = INT8_MIN;
	volatile int32_t t50 = -240551648;

	t50 = (x289==(x290*(x291*x292)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x293 = UINT32_MAX;
	uint16_t x294 = 52U;
	volatile int32_t t51 = 1;

	t51 = (x293==(x294*(x295*x296)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = INT8_MAX;
	volatile uint8_t x311 = 57U;
	static uint32_t x312 = 40733837U;
	int32_t t52 = -2;

	t52 = (x309==(x310*(x311*x312)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x313 = 247631U;
	static uint32_t x314 = 419641599U;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 2066038U;
	int32_t t53 = -994;

	t53 = (x313==(x314*(x315*x316)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x325 = UINT8_MAX;
	uint32_t x326 = UINT32_MAX;
	volatile int32_t x327 = -1;
	int16_t x328 = -13653;

	t54 = (x325==(x326*(x327*x328)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MAX;
	static volatile int32_t t55 = -8736984;

	t55 = (x329==(x330*(x331*x332)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x334 = UINT16_MAX;
	int8_t x335 = -1;
	volatile uint16_t x336 = 1U;

	t56 = (x333==(x334*(x335*x336)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x349 = INT64_MAX;
	uint8_t x350 = 1U;
	volatile int32_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	static int32_t t57 = 2035;

	t57 = (x349==(x350*(x351*x352)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x357 = INT8_MAX;
	volatile uint8_t x358 = 0U;
	volatile int16_t x360 = INT16_MIN;
	volatile int32_t t58 = -127660464;

	t58 = (x357==(x358*(x359*x360)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x361 = -1;
	uint8_t x363 = 17U;
	volatile int64_t x364 = -1LL;

	t59 = (x361==(x362*(x363*x364)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x365 = INT64_MAX;
	uint16_t x367 = UINT16_MAX;
	static volatile uint32_t x368 = 4U;

	t60 = (x365==(x366*(x367*x368)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = 0;
	static volatile int32_t x379 = -572960496;
	static uint32_t x380 = 137U;
	volatile int32_t t61 = 41639;

	t61 = (x377==(x378*(x379*x380)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x385 = 26809U;
	static uint32_t x386 = 22425U;
	static volatile uint8_t x387 = UINT8_MAX;
	int32_t x388 = -1;
	volatile int32_t t62 = 7883147;

	t62 = (x385==(x386*(x387*x388)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x397 = INT32_MIN;
	int8_t x399 = 1;
	static uint8_t x400 = 44U;
	static volatile int32_t t63 = 1819610;

	t63 = (x397==(x398*(x399*x400)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x401 = -123;
	static uint32_t x402 = 69297178U;
	volatile int8_t x403 = INT8_MAX;
	int32_t t64 = -15;

	t64 = (x401==(x402*(x403*x404)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x405 = -46583587131632LL;
	uint16_t x406 = 69U;
	volatile uint32_t x407 = 1294U;
	static int32_t x408 = -1;
	volatile int32_t t65 = -110639;

	t65 = (x405==(x406*(x407*x408)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x409 = -389;
	int16_t x410 = -73;
	uint8_t x411 = UINT8_MAX;
	static volatile int32_t t66 = -24;

	t66 = (x409==(x410*(x411*x412)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x413 = UINT16_MAX;
	int32_t t67 = 2662618;

	t67 = (x413==(x414*(x415*x416)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x417 = -1;
	static uint32_t x419 = UINT32_MAX;
	int32_t x420 = 1286;
	volatile int32_t t68 = -332704821;

	t68 = (x417==(x418*(x419*x420)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x421 = UINT32_MAX;
	volatile uint8_t x422 = UINT8_MAX;
	uint8_t x423 = 1U;
	int16_t x424 = INT16_MAX;
	volatile int32_t t69 = 5;

	t69 = (x421==(x422*(x423*x424)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x425 = 58838197;
	static uint64_t x427 = 425LLU;
	int32_t t70 = -14;

	t70 = (x425==(x426*(x427*x428)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x433 = 13U;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	uint32_t x436 = 2063306830U;

	t71 = (x433==(x434*(x435*x436)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x457 = 5625971486LLU;
	uint8_t x459 = 0U;
	static int8_t x460 = INT8_MIN;
	static int32_t t72 = -34497;

	t72 = (x457==(x458*(x459*x460)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x481 = -1;
	uint16_t x482 = 30U;
	int64_t x483 = -1LL;
	static int32_t t73 = 54;

	t73 = (x481==(x482*(x483*x484)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x490 = 78U;
	uint8_t x491 = 3U;
	uint16_t x492 = 484U;
	int32_t t74 = -4;

	t74 = (x489==(x490*(x491*x492)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x493 = 5005U;
	uint32_t x494 = 12057U;
	volatile uint32_t x495 = UINT32_MAX;
	int32_t t75 = 19165554;

	t75 = (x493==(x494*(x495*x496)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x497 = INT64_MIN;
	volatile int16_t x498 = -1;
	int8_t x499 = -8;
	volatile int16_t x500 = -1;
	static int32_t t76 = 211;

	t76 = (x497==(x498*(x499*x500)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x509 = INT32_MIN;
	int16_t x510 = -1;
	int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MIN;

	t77 = (x509==(x510*(x511*x512)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x517 = 109437LLU;
	int32_t x518 = INT32_MIN;
	uint8_t x519 = 0U;
	int32_t x520 = -1;

	t78 = (x517==(x518*(x519*x520)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x541 = INT8_MIN;
	static int8_t x542 = -1;
	int16_t x543 = INT16_MIN;
	int16_t x544 = INT16_MIN;
	int32_t t79 = -13696;

	t79 = (x541==(x542*(x543*x544)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x546 = 226U;
	int32_t t80 = -157;

	t80 = (x545==(x546*(x547*x548)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x566 = -1;
	static volatile int64_t x568 = 15LL;

	t81 = (x565==(x566*(x567*x568)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x569 = INT32_MAX;
	int16_t x570 = INT16_MIN;
	int8_t x571 = -1;
	volatile int32_t x572 = 1;
	volatile int32_t t82 = 174;

	t82 = (x569==(x570*(x571*x572)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x574 = INT16_MIN;
	int8_t x575 = -1;
	int8_t x576 = 0;
	volatile int32_t t83 = -2;

	t83 = (x573==(x574*(x575*x576)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x585 = 3350789U;
	uint8_t x586 = UINT8_MAX;
	static volatile int8_t x587 = INT8_MAX;
	uint32_t x588 = 11423473U;
	int32_t t84 = 3563661;

	t84 = (x585==(x586*(x587*x588)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x590 = -1;
	static int32_t t85 = 709;

	t85 = (x589==(x590*(x591*x592)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x593 = -1;
	int64_t x594 = -3207LL;
	int16_t x595 = -1;
	int16_t x596 = -105;
	static volatile int32_t t86 = -69121;

	t86 = (x593==(x594*(x595*x596)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x601 = -15;
	volatile int16_t x602 = 199;
	static volatile uint64_t x603 = UINT64_MAX;
	int32_t x604 = -1;
	int32_t t87 = -42076;

	t87 = (x601==(x602*(x603*x604)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x605 = INT8_MIN;
	uint64_t x606 = 21985161872LLU;
	uint64_t x608 = 1555317LLU;
	volatile int32_t t88 = 816;

	t88 = (x605==(x606*(x607*x608)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x609 = INT64_MIN;
	int8_t x610 = -1;
	int8_t x611 = -1;
	uint32_t x612 = 10841U;
	int32_t t89 = -3;

	t89 = (x609==(x610*(x611*x612)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x613 = INT8_MIN;
	volatile int8_t x614 = -1;
	volatile int32_t t90 = -36934;

	t90 = (x613==(x614*(x615*x616)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x634 = 2366;
	uint16_t x635 = 9338U;
	uint64_t x636 = 539934922399144LLU;

	t91 = (x633==(x634*(x635*x636)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x646 = -142;
	uint8_t x647 = UINT8_MAX;
	static uint16_t x648 = 9U;
	volatile int32_t t92 = 144741;

	t92 = (x645==(x646*(x647*x648)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x657 = -6;
	volatile int64_t x658 = -67318358961LL;
	uint64_t x659 = 176411LLU;
	volatile int32_t t93 = 565;

	t93 = (x657==(x658*(x659*x660)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x666 = 21998U;
	static int8_t x667 = -1;
	volatile uint16_t x668 = 35U;
	int32_t t94 = -86;

	t94 = (x665==(x666*(x667*x668)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x671 = 0;
	volatile int32_t t95 = -61;

	t95 = (x669==(x670*(x671*x672)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x673 = INT8_MIN;
	int64_t x674 = -1LL;
	volatile int16_t x675 = -1;
	int32_t x676 = INT32_MAX;
	volatile int32_t t96 = 57003;

	t96 = (x673==(x674*(x675*x676)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x685 = -1;
	static uint8_t x686 = 2U;
	volatile uint32_t x687 = 1010U;
	int8_t x688 = INT8_MIN;
	volatile int32_t t97 = 39;

	t97 = (x685==(x686*(x687*x688)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x689 = 4U;
	int32_t x690 = INT32_MIN;
	uint64_t x691 = UINT64_MAX;
	int32_t t98 = -1;

	t98 = (x689==(x690*(x691*x692)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x693 = 0U;
	volatile int8_t x694 = INT8_MIN;
	uint64_t x695 = 53069058378949929LLU;
	volatile int8_t x696 = INT8_MAX;

	t99 = (x693==(x694*(x695*x696)));

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

