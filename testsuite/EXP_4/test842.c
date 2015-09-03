#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 36U;
static int8_t x6 = INT8_MIN;
uint32_t x8 = 10505U;
int32_t t1 = -2724264;
int32_t t2 = 12612920;
static int8_t x17 = 0;
int16_t x19 = -93;
static uint8_t x20 = UINT8_MAX;
uint32_t x21 = UINT32_MAX;
volatile int32_t x24 = -1;
int16_t x27 = -1;
int8_t x34 = -6;
int8_t x41 = INT8_MAX;
uint64_t x46 = 5212076702LLU;
volatile int32_t t11 = -19066840;
uint16_t x53 = 3060U;
int8_t x57 = 30;
int32_t t14 = 3862;
volatile int32_t t17 = 41;
uint32_t x73 = 489025U;
int8_t x76 = INT8_MIN;
int16_t x79 = -1;
volatile uint8_t x94 = 1U;
int32_t t23 = -10;
int64_t x100 = INT64_MAX;
int8_t x103 = INT8_MIN;
volatile int16_t x111 = INT16_MIN;
int32_t x118 = INT32_MIN;
int64_t x119 = INT64_MAX;
int16_t x123 = INT16_MIN;
static int8_t x125 = INT8_MIN;
uint64_t x126 = UINT64_MAX;
int8_t x127 = INT8_MIN;
static int16_t x131 = 16;
int32_t t32 = 222602114;
int16_t x135 = INT16_MAX;
uint8_t x139 = 0U;
uint64_t x140 = 3149489LLU;
uint8_t x147 = UINT8_MAX;
int8_t x149 = 19;
uint64_t x150 = UINT64_MAX;
volatile int32_t t37 = -158679210;
int32_t t38 = 40933;
volatile int32_t x157 = -372819;
static uint64_t x160 = 15990LLU;
int64_t x161 = -1LL;
int8_t x170 = 56;
uint32_t x171 = 1970029536U;
int32_t t42 = -1023919354;
int16_t x179 = INT16_MIN;
uint16_t x180 = 3U;
int64_t x181 = INT64_MIN;
uint16_t x189 = 5994U;
volatile uint32_t x195 = UINT32_MAX;
static uint8_t x197 = 4U;
int32_t t51 = -251183;
volatile int64_t x222 = -59497837721LL;
uint8_t x223 = 0U;
int32_t t53 = 5805;
uint32_t x226 = 1201536U;
static uint16_t x227 = 3U;
static volatile int32_t t54 = 250572;
static int32_t t55 = 363413227;
static int16_t x234 = -1;
int64_t x235 = INT64_MIN;
int32_t x238 = INT32_MIN;
int64_t x239 = -80906227747LL;
static uint8_t x241 = 0U;
int32_t x244 = -233;
int16_t x251 = INT16_MIN;
uint32_t x254 = 1U;
int64_t x256 = INT64_MIN;
int64_t x265 = INT64_MIN;
volatile int32_t t65 = 6;
int32_t x275 = INT32_MAX;
uint64_t x276 = 74700394546201LLU;
volatile int64_t x283 = INT64_MIN;
static uint32_t x286 = 129U;
static int64_t x304 = INT64_MIN;
volatile uint32_t x311 = 1U;
int32_t x314 = INT32_MAX;
static int32_t x326 = INT32_MIN;
int32_t x329 = INT32_MIN;
static uint16_t x349 = 1542U;
int16_t x350 = 27;
int32_t t83 = -73757936;
static volatile int64_t x353 = 5225225461473717LL;
volatile uint64_t x366 = UINT64_MAX;
int32_t t87 = -6;
int32_t t88 = -38375;
volatile int8_t x378 = -24;
static int32_t x379 = 221;
static int16_t x380 = INT16_MAX;
int32_t t91 = -3327269;
volatile int8_t x385 = 0;
int32_t x386 = INT32_MIN;
int64_t x387 = INT64_MIN;
int16_t x392 = INT16_MIN;
static uint8_t x394 = UINT8_MAX;
int32_t x395 = -1;
int32_t t96 = -73;
volatile int32_t t98 = 0;
static int8_t x415 = INT8_MIN;
volatile int32_t t99 = 1;


void f0(void) {
	static volatile uint8_t x1 = UINT8_MAX;
	volatile uint8_t x2 = 0U;
	int8_t x3 = -1;
	volatile int32_t t0 = -107;

	t0 = (x1<=(x2^(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1756;
	static uint8_t x7 = 65U;

	t1 = (x5<=(x6^(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static uint16_t x10 = 1098U;
	static int64_t x11 = INT64_MAX;
	uint16_t x12 = 479U;

	t2 = (x9<=(x10^(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static uint32_t x14 = 426U;
	static int8_t x15 = -5;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 393;

	t3 = (x13<=(x14^(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 1LLU;
	static volatile int32_t t4 = 1;

	t4 = (x17<=(x18^(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	static int32_t t5 = 5208041;

	t5 = (x21<=(x22^(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 8;
	int32_t x26 = -1;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = -2765;

	t6 = (x25<=(x26^(x27%x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -6;
	int32_t x30 = -1;
	volatile uint64_t x31 = UINT64_MAX;
	int32_t x32 = INT32_MIN;
	static int32_t t7 = -15;

	t7 = (x29<=(x30^(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile uint16_t x35 = UINT16_MAX;
	static int32_t x36 = -1;
	volatile int32_t t8 = -11463784;

	t8 = (x33<=(x34^(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	static uint64_t x39 = 1340385177002LLU;
	int32_t x40 = -28209;
	int32_t t9 = 2478;

	t9 = (x37<=(x38^(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = -25;
	int16_t x44 = INT16_MIN;
	static int32_t t10 = -5086;

	t10 = (x41<=(x42^(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	uint16_t x47 = UINT16_MAX;
	volatile uint32_t x48 = 8127U;

	t11 = (x45<=(x46^(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MIN;
	int32_t x51 = -3650;
	uint8_t x52 = 1U;
	int32_t t12 = 0;

	t12 = (x49<=(x50^(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 986;
	int64_t x55 = 167906LL;
	int64_t x56 = INT64_MAX;
	volatile int32_t t13 = 1;

	t13 = (x53<=(x54^(x55%x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 271054;
	uint16_t x59 = 33U;
	int8_t x60 = INT8_MIN;

	t14 = (x57<=(x58^(x59%x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint8_t x62 = 9U;
	int32_t x63 = INT32_MAX;
	uint32_t x64 = UINT32_MAX;
	int32_t t15 = -292532;

	t15 = (x61<=(x62^(x63%x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	uint16_t x66 = 4597U;
	volatile uint8_t x67 = 45U;
	uint8_t x68 = 28U;
	volatile int32_t t16 = -125;

	t16 = (x65<=(x66^(x67%x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int8_t x70 = -9;
	static int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MIN;

	t17 = (x69<=(x70^(x71%x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x74 = 47769U;
	uint32_t x75 = 205086U;
	static int32_t t18 = -2097;

	t18 = (x73<=(x74^(x75%x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 26789LLU;
	static int64_t x78 = INT64_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t19 = 53;

	t19 = (x77<=(x78^(x79%x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	static uint8_t x82 = 32U;
	int32_t x83 = -1;
	volatile int64_t x84 = -1LL;
	volatile int32_t t20 = -5;

	t20 = (x81<=(x82^(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 0U;
	int16_t x86 = -1;
	static volatile uint32_t x87 = 121U;
	volatile int16_t x88 = INT16_MIN;
	int32_t t21 = -4730203;

	t21 = (x85<=(x86^(x87%x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = 2100673451069918LL;
	int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 1U;
	volatile int32_t t22 = -59557;

	t22 = (x89<=(x90^(x91%x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint8_t x95 = UINT8_MAX;
	uint64_t x96 = 1LLU;

	t23 = (x93<=(x94^(x95%x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = -9060;
	int64_t x99 = -1LL;
	volatile int32_t t24 = -9908;

	t24 = (x97<=(x98^(x99%x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 775854U;
	int8_t x102 = 23;
	int32_t x104 = INT32_MAX;
	static volatile int32_t t25 = 62;

	t25 = (x101<=(x102^(x103%x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	volatile uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MIN;
	uint32_t x108 = UINT32_MAX;
	int32_t t26 = 9171;

	t26 = (x105<=(x106^(x107%x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = -1;
	volatile int64_t x112 = INT64_MIN;
	int32_t t27 = 26;

	t27 = (x109<=(x110^(x111%x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MIN;
	static int16_t x115 = INT16_MAX;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -1742;

	t28 = (x113<=(x114^(x115%x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t29 = 408501;

	t29 = (x117<=(x118^(x119%x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	volatile uint64_t x122 = 33211508025603LLU;
	int16_t x124 = -1;
	volatile int32_t t30 = -2979596;

	t30 = (x121<=(x122^(x123%x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x128 = 3647U;
	volatile int32_t t31 = -28;

	t31 = (x125<=(x126^(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	int32_t x130 = INT32_MIN;
	static int32_t x132 = INT32_MAX;

	t32 = (x129<=(x130^(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint64_t x134 = UINT64_MAX;
	static uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = -4;

	t33 = (x133<=(x134^(x135%x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int64_t x138 = 0LL;
	volatile int32_t t34 = 111;

	t34 = (x137<=(x138^(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 0U;
	static int32_t x142 = INT32_MIN;
	static volatile int64_t x143 = 66102198226695864LL;
	int16_t x144 = -1;
	int32_t t35 = -227386;

	t35 = (x141<=(x142^(x143%x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = 1293LL;
	uint64_t x148 = UINT64_MAX;
	int32_t t36 = -1;

	t36 = (x145<=(x146^(x147%x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x151 = INT64_MIN;
	volatile uint64_t x152 = UINT64_MAX;

	t37 = (x149<=(x150^(x151%x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	static uint8_t x154 = 100U;
	uint32_t x155 = 150U;
	static uint64_t x156 = 3172LLU;

	t38 = (x153<=(x154^(x155%x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = UINT32_MAX;
	static int16_t x159 = INT16_MIN;
	int32_t t39 = 1;

	t39 = (x157<=(x158^(x159%x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = 191049;
	int64_t x163 = -1LL;
	int32_t x164 = INT32_MAX;
	int32_t t40 = -4094;

	t40 = (x161<=(x162^(x163%x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 37200;
	uint8_t x166 = 0U;
	int16_t x167 = INT16_MIN;
	int64_t x168 = 27714917769LL;
	int32_t t41 = -757;

	t41 = (x165<=(x166^(x167%x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	uint16_t x172 = UINT16_MAX;

	t42 = (x169<=(x170^(x171%x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static int32_t x174 = -1;
	static uint8_t x175 = 1U;
	uint64_t x176 = UINT64_MAX;
	int32_t t43 = -39;

	t43 = (x173<=(x174^(x175%x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 418853854665LLU;
	int64_t x178 = INT64_MIN;
	int32_t t44 = -12;

	t44 = (x177<=(x178^(x179%x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = INT16_MAX;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = -1545234342169709LL;
	int32_t t45 = 105323;

	t45 = (x181<=(x182^(x183%x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1061596961;
	uint16_t x186 = UINT16_MAX;
	volatile int64_t x187 = INT64_MIN;
	int16_t x188 = -95;
	int32_t t46 = -1662645;

	t46 = (x185<=(x186^(x187%x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x190 = -678;
	int32_t x191 = -3;
	int8_t x192 = -1;
	int32_t t47 = -3319;

	t47 = (x189<=(x190^(x191%x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 2183531675428LLU;
	volatile uint16_t x194 = UINT16_MAX;
	uint64_t x196 = 921266LLU;
	static int32_t t48 = 852223759;

	t48 = (x193<=(x194^(x195%x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = 0;
	uint32_t x199 = UINT32_MAX;
	uint32_t x200 = 16U;
	volatile int32_t t49 = 504976;

	t49 = (x197<=(x198^(x199%x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x205 = -1;
	static volatile int32_t x206 = -1;
	int8_t x207 = INT8_MAX;
	uint16_t x208 = 8U;
	static int32_t t50 = -52903829;

	t50 = (x205<=(x206^(x207%x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MIN;
	volatile int64_t x214 = INT64_MAX;
	int16_t x215 = 15;
	int64_t x216 = -3291290LL;

	t51 = (x213<=(x214^(x215%x216)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = 2168;
	static int8_t x218 = INT8_MIN;
	uint16_t x219 = 977U;
	int64_t x220 = -91482LL;
	volatile int32_t t52 = -8306878;

	t52 = (x217<=(x218^(x219%x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -1;
	static volatile uint64_t x224 = 173355203890201LLU;

	t53 = (x221<=(x222^(x223%x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 2110997442U;
	uint8_t x228 = UINT8_MAX;

	t54 = (x225<=(x226^(x227%x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -1LL;
	int32_t x230 = -11107255;
	int16_t x231 = -71;
	int64_t x232 = INT64_MIN;

	t55 = (x229<=(x230^(x231%x232)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x233 = INT16_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t56 = 24230386;

	t56 = (x233<=(x234^(x235%x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	static int16_t x240 = INT16_MIN;
	volatile int32_t t57 = -55163708;

	t57 = (x237<=(x238^(x239%x240)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x242 = 108U;
	int8_t x243 = INT8_MIN;
	static int32_t t58 = -10856;

	t58 = (x241<=(x242^(x243%x244)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 0U;
	int64_t x246 = -4LL;
	uint8_t x247 = 7U;
	int16_t x248 = -599;
	static volatile int32_t t59 = -19;

	t59 = (x245<=(x246^(x247%x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = INT64_MIN;
	static int8_t x250 = -1;
	int8_t x252 = INT8_MIN;
	volatile int32_t t60 = -1;

	t60 = (x249<=(x250^(x251%x252)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 4LLU;
	static int16_t x255 = INT16_MIN;
	static volatile int32_t t61 = -5;

	t61 = (x253<=(x254^(x255%x256)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = 3825;
	int64_t x258 = 92104765051615328LL;
	int32_t x259 = INT32_MIN;
	static int8_t x260 = INT8_MIN;
	static volatile int32_t t62 = 20246;

	t62 = (x257<=(x258^(x259%x260)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = 35744621080LL;
	uint16_t x262 = 3U;
	int64_t x263 = -4418991LL;
	volatile uint8_t x264 = 51U;
	int32_t t63 = 3904;

	t63 = (x261<=(x262^(x263%x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x266 = 7U;
	static int8_t x267 = -1;
	int8_t x268 = INT8_MIN;
	volatile int32_t t64 = -308386967;

	t64 = (x265<=(x266^(x267%x268)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	static volatile int16_t x270 = 1;
	volatile int8_t x271 = 7;
	volatile int64_t x272 = -8321920074LL;

	t65 = (x269<=(x270^(x271%x272)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = 5087;
	volatile int32_t t66 = 35;

	t66 = (x273<=(x274^(x275%x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -1;
	uint16_t x278 = 76U;
	int8_t x279 = INT8_MIN;
	int64_t x280 = 687823287580LL;
	static volatile int32_t t67 = -607722;

	t67 = (x277<=(x278^(x279%x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	static int32_t x284 = -3282402;
	int32_t t68 = -2;

	t68 = (x281<=(x282^(x283%x284)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = INT8_MIN;
	int8_t x287 = -6;
	volatile int16_t x288 = -15238;
	static volatile int32_t t69 = 17640828;

	t69 = (x285<=(x286^(x287%x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x293 = -1;
	int16_t x294 = -1631;
	volatile int8_t x295 = -1;
	volatile int16_t x296 = INT16_MIN;
	int32_t t70 = 7785189;

	t70 = (x293<=(x294^(x295%x296)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MAX;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t71 = 56270;

	t71 = (x297<=(x298^(x299%x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 15134279U;
	int64_t x302 = INT64_MAX;
	static uint16_t x303 = 468U;
	volatile int32_t t72 = 38186;

	t72 = (x301<=(x302^(x303%x304)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x305 = INT32_MIN;
	int32_t x306 = 49;
	static uint32_t x307 = 42540208U;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t73 = -10716853;

	t73 = (x305<=(x306^(x307%x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = INT8_MAX;
	int8_t x310 = INT8_MIN;
	int16_t x312 = -1;
	volatile int32_t t74 = -3;

	t74 = (x309<=(x310^(x311%x312)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MAX;
	int32_t x315 = -1;
	uint8_t x316 = 1U;
	volatile int32_t t75 = 24040;

	t75 = (x313<=(x314^(x315%x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = -28079692310071LL;
	static int8_t x322 = -7;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t76 = -13;

	t76 = (x321<=(x322^(x323%x324)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -1;
	volatile uint8_t x327 = UINT8_MAX;
	int16_t x328 = -1;
	int32_t t77 = 742;

	t77 = (x325<=(x326^(x327%x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = -24585178;
	int16_t x332 = 1;
	volatile int32_t t78 = -405708958;

	t78 = (x329<=(x330^(x331%x332)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = 484LLU;
	static int32_t x335 = INT32_MIN;
	static volatile uint32_t x336 = 554U;
	int32_t t79 = 3364;

	t79 = (x333<=(x334^(x335%x336)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	static int64_t x339 = -1LL;
	volatile int64_t x340 = INT64_MAX;
	int32_t t80 = -2;

	t80 = (x337<=(x338^(x339%x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = -6;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	static volatile int32_t t81 = 1;

	t81 = (x341<=(x342^(x343%x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 257U;
	static uint64_t x346 = 4780LLU;
	int64_t x347 = INT64_MIN;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t82 = 31183411;

	t82 = (x345<=(x346^(x347%x348)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x351 = UINT16_MAX;
	static uint8_t x352 = 3U;

	t83 = (x349<=(x350^(x351%x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x354 = INT32_MIN;
	static volatile int32_t x355 = INT32_MIN;
	uint8_t x356 = 50U;
	volatile int32_t t84 = -1967;

	t84 = (x353<=(x354^(x355%x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	uint8_t x360 = 15U;
	volatile int32_t t85 = 256655988;

	t85 = (x357<=(x358^(x359%x360)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = 2025989503018363LL;
	static volatile uint16_t x362 = 12038U;
	static volatile uint64_t x363 = 3927386706189LLU;
	static volatile int64_t x364 = INT64_MIN;
	static volatile int32_t t86 = -701;

	t86 = (x361<=(x362^(x363%x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x365 = -1996905;
	volatile int32_t x367 = 5284667;
	int64_t x368 = 255464LL;

	t87 = (x365<=(x366^(x367%x368)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x369 = -1LL;
	uint32_t x370 = 40U;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;

	t88 = (x369<=(x370^(x371%x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x373 = INT16_MIN;
	int16_t x374 = 316;
	volatile uint32_t x375 = 31662476U;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t89 = -1;

	t89 = (x373<=(x374^(x375%x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -19;
	int32_t t90 = -225823320;

	t90 = (x377<=(x378^(x379%x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x381 = INT32_MIN;
	static uint64_t x382 = 1710362426279459LLU;
	uint16_t x383 = 2U;
	volatile uint8_t x384 = UINT8_MAX;

	t91 = (x381<=(x382^(x383%x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x388 = 12;
	static int32_t t92 = 436561861;

	t92 = (x385<=(x386^(x387%x388)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = UINT32_MAX;
	int64_t x390 = INT64_MIN;
	static uint16_t x391 = 3U;
	volatile int32_t t93 = 93;

	t93 = (x389<=(x390^(x391%x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x393 = INT8_MAX;
	int16_t x396 = -1;
	volatile int32_t t94 = -15;

	t94 = (x393<=(x394^(x395%x396)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -1;
	uint8_t x398 = 25U;
	uint32_t x399 = UINT32_MAX;
	static uint16_t x400 = UINT16_MAX;
	static int32_t t95 = -2;

	t95 = (x397<=(x398^(x399%x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	static int32_t x402 = -1;
	uint32_t x403 = UINT32_MAX;
	int8_t x404 = -1;

	t96 = (x401<=(x402^(x403%x404)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x405 = 6337510U;
	int32_t x406 = -1;
	static uint32_t x407 = 91036U;
	int64_t x408 = INT64_MIN;
	int32_t t97 = 214;

	t97 = (x405<=(x406^(x407%x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = -1;
	uint32_t x410 = 11317663U;
	static uint16_t x411 = 3714U;
	volatile int16_t x412 = -1;

	t98 = (x409<=(x410^(x411%x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = -1LL;
	int64_t x414 = INT64_MIN;
	int16_t x416 = 241;

	t99 = (x413<=(x414^(x415%x416)));

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

