#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile uint32_t x5 = UINT32_MAX;
static volatile uint8_t x7 = 70U;
volatile int64_t t2 = INT64_MIN;
uint8_t x21 = 8U;
int32_t x25 = -1181;
uint32_t x31 = 993507U;
uint32_t x32 = 25965009U;
volatile int8_t x34 = INT8_MIN;
volatile int32_t t15 = 82893610;
volatile int32_t t17 = -878;
static uint64_t x81 = 5782752979907405489LLU;
volatile int16_t x82 = 30;
static int8_t x84 = -38;
volatile int32_t x88 = -5;
int64_t x89 = INT64_MAX;
int64_t x92 = INT64_MIN;
int16_t x94 = INT16_MIN;
int8_t x100 = INT8_MAX;
int64_t t23 = INT64_MIN;
uint8_t x103 = 79U;
int64_t t24 = 324LL;
volatile uint32_t t25 = 7U;
int8_t x110 = INT8_MAX;
uint16_t x117 = 1449U;
volatile int64_t x126 = INT64_MIN;
int8_t x137 = 1;
int32_t x146 = -1;
int64_t x156 = INT64_MIN;
static int8_t x167 = -13;
volatile int32_t t38 = 1820220;
static int64_t x172 = 20328185909496LL;
volatile int32_t x173 = 1656796;
volatile uint32_t x175 = 76U;
volatile int32_t t41 = 1;
uint32_t x183 = 115928U;
volatile int64_t t42 = INT64_MIN;
int32_t x185 = -1;
int32_t x187 = 13039;
int64_t x192 = INT64_MIN;
volatile int32_t t44 = -246;
int32_t t45 = INT32_MIN;
int32_t t46 = 106;
uint64_t x215 = 1663956574410344LLU;
volatile int64_t x226 = INT64_MIN;
static volatile int32_t t52 = -260758907;
int8_t x236 = -1;
volatile uint64_t t56 = UINT64_MAX;
int8_t x254 = INT8_MIN;
static volatile int32_t t60 = -1;
int8_t x263 = 1;
uint32_t x266 = 6548042U;
int64_t x269 = 3440640051491433233LL;
volatile int64_t t63 = 22534214LL;
static int64_t t64 = INT64_MIN;
static int16_t x277 = INT16_MIN;
int16_t x280 = 1168;
volatile int64_t x283 = INT64_MIN;
int64_t x290 = INT64_MIN;
volatile int32_t t68 = -1120;
int8_t x297 = 2;
int32_t x299 = INT32_MIN;
uint32_t x300 = 185366510U;
int16_t x304 = -1;
int16_t x306 = 1260;
int16_t x307 = INT16_MIN;
int32_t t77 = -6658309;
volatile int32_t t79 = 371909639;
int16_t x342 = -13821;
uint64_t x344 = UINT64_MAX;
int32_t x345 = -1;
uint16_t x351 = 1948U;
int8_t x355 = -6;
int64_t x364 = -16456765LL;
uint32_t t86 = 1U;
int32_t x365 = INT32_MIN;
int32_t x366 = INT32_MIN;
uint64_t x376 = 4LLU;
int64_t x377 = INT64_MIN;
int8_t x378 = -7;
int64_t x380 = INT64_MIN;
volatile uint64_t t91 = 41953420470LLU;
volatile uint64_t x395 = 45341525LLU;
uint32_t x398 = 310381866U;
int16_t x399 = INT16_MIN;
static volatile int32_t t95 = INT32_MIN;
int16_t x402 = INT16_MIN;
uint64_t x406 = 1682LLU;
int8_t x411 = 2;
int32_t t98 = INT32_MIN;
uint8_t x413 = 3U;
int32_t t99 = -11;


void f0(void) {
	int8_t x2 = 2;
	static uint16_t x3 = 4U;
	int32_t x4 = -3399640;
	volatile int32_t t0 = 7;

	t0 = (x1+(x2==(x3%x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 46106652047336LLU;
	int64_t x8 = -1LL;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5+(x6==(x7%x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = -1;
	int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MIN;

	t2 = (x9+(x10==(x11%x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	uint8_t x14 = UINT8_MAX;
	static uint8_t x15 = 9U;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -35;

	t3 = (x13+(x14==(x15%x16)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 2843U;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1203025LL;
	int64_t x20 = -4LL;
	uint32_t t4 = 4941168U;

	t4 = (x17+(x18==(x19%x20)));

	if (t4 != 2843U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -7;

	t5 = (x21+(x22==(x23%x24)));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	static int8_t x27 = INT8_MAX;
	static uint64_t x28 = 523971621271391LLU;
	static volatile int32_t t6 = 62;

	t6 = (x25+(x26==(x27%x28)));

	if (t6 != -1181) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 7807U;
	volatile int8_t x30 = INT8_MAX;
	static uint32_t t7 = 0U;

	t7 = (x29+(x30==(x31%x32)));

	if (t7 != 7807U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	static int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -421145029;

	t8 = (x33+(x34==(x35%x36)));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int8_t x38 = INT8_MIN;
	static int8_t x39 = INT8_MAX;
	int32_t x40 = -1;
	int32_t t9 = 23;

	t9 = (x37+(x38==(x39%x40)));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -6672040;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x41+(x42==(x43%x44)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 4;
	uint32_t x46 = 25U;
	static uint16_t x47 = UINT16_MAX;
	int8_t x48 = 11;
	int32_t t11 = -318882;

	t11 = (x45+(x46==(x47%x48)));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	uint32_t x50 = 103U;
	int32_t x51 = -23092;
	static uint16_t x52 = 108U;
	volatile int32_t t12 = -4822487;

	t12 = (x49+(x50==(x51%x52)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 118U;
	static uint64_t x54 = 28504655LLU;
	static int16_t x55 = 0;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 14;

	t13 = (x53+(x54==(x55%x56)));

	if (t13 != 118) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 2300LL;
	int16_t x58 = INT16_MAX;
	static int32_t x59 = INT32_MIN;
	int64_t x60 = -1LL;
	int64_t t14 = -3589897014705LL;

	t14 = (x57+(x58==(x59%x60)));

	if (t14 != 2300LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int64_t x62 = -1LL;
	static int16_t x63 = -1;
	static int32_t x64 = INT32_MAX;

	t15 = (x61+(x62==(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 128716LLU;
	uint8_t x66 = 0U;
	int16_t x67 = 147;
	static int64_t x68 = 234303227LL;
	static uint64_t t16 = 10914521387309880LLU;

	t16 = (x65+(x66==(x67%x68)));

	if (t16 != 128716LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -7;
	static uint16_t x74 = 752U;
	volatile uint16_t x75 = 344U;
	uint8_t x76 = 36U;

	t17 = (x73+(x74==(x75%x76)));

	if (t17 != -7) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	int64_t x78 = -1LL;
	volatile int16_t x79 = INT16_MIN;
	volatile int64_t x80 = 2087601730LL;
	volatile int64_t t18 = INT64_MIN;

	t18 = (x77+(x78==(x79%x80)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x83 = -18;
	uint64_t t19 = 4092LLU;

	t19 = (x81+(x82==(x83%x84)));

	if (t19 != 5782752979907405489LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x85 = 531;
	int32_t x86 = INT32_MIN;
	static uint16_t x87 = 1282U;
	int32_t t20 = 0;

	t20 = (x85+(x86==(x87%x88)));

	if (t20 != 531) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x90 = INT32_MAX;
	static int16_t x91 = INT16_MAX;
	volatile int64_t t21 = INT64_MAX;

	t21 = (x89+(x90==(x91%x92)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 42587U;
	static uint16_t x95 = UINT16_MAX;
	static int8_t x96 = -1;
	static volatile uint32_t t22 = 1938U;

	t22 = (x93+(x94==(x95%x96)));

	if (t22 != 42587U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MIN;
	volatile int16_t x98 = -80;
	static volatile int32_t x99 = INT32_MIN;

	t23 = (x97+(x98==(x99%x100)));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 3903971485LL;
	static uint16_t x102 = 3U;
	static int8_t x104 = INT8_MIN;

	t24 = (x101+(x102==(x103%x104)));

	if (t24 != 3903971485LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 4U;
	static volatile int16_t x106 = -1511;
	int64_t x107 = -441678LL;
	static int64_t x108 = INT64_MIN;

	t25 = (x105+(x106==(x107%x108)));

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 42U;
	static uint16_t x111 = 1909U;
	int64_t x112 = INT64_MIN;
	volatile uint32_t t26 = 3U;

	t26 = (x109+(x110==(x111%x112)));

	if (t26 != 42U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x118 = 1667U;
	volatile uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MIN;
	int32_t t27 = -293;

	t27 = (x117+(x118==(x119%x120)));

	if (t27 != 1449) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -1;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MAX;
	volatile int32_t x124 = INT32_MAX;
	static int32_t t28 = 31;

	t28 = (x121+(x122==(x123%x124)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	uint16_t x127 = 1U;
	volatile uint16_t x128 = 12U;
	int32_t t29 = -31;

	t29 = (x125+(x126==(x127%x128)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = INT64_MIN;
	volatile int16_t x130 = -58;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MAX;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x129+(x130==(x131%x132)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -370775;
	static volatile uint8_t x134 = UINT8_MAX;
	uint16_t x135 = 4U;
	int16_t x136 = -5;
	int32_t t31 = 156;

	t31 = (x133+(x134==(x135%x136)));

	if (t31 != -370775) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x138 = INT64_MAX;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t32 = -4;

	t32 = (x137+(x138==(x139%x140)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	static uint16_t x147 = 18409U;
	int16_t x148 = -1490;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (x145+(x146==(x147%x148)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = 331013704U;
	int8_t x150 = 58;
	static int16_t x151 = -1;
	static int16_t x152 = INT16_MIN;
	uint32_t t34 = 8479333U;

	t34 = (x149+(x150==(x151%x152)));

	if (t34 != 331013704U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MIN;
	int8_t x155 = -24;
	int64_t t35 = INT64_MIN;

	t35 = (x153+(x154==(x155%x156)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = INT8_MAX;
	uint8_t x159 = 54U;
	int64_t x160 = -1LL;
	int32_t t36 = -9;

	t36 = (x157+(x158==(x159%x160)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -3700LL;
	int8_t x162 = INT8_MIN;
	uint16_t x163 = UINT16_MAX;
	static int32_t x164 = 127;
	static int64_t t37 = 8LL;

	t37 = (x161+(x162==(x163%x164)));

	if (t37 != -3700LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x165 = -1;
	int32_t x166 = 13890698;
	int64_t x168 = INT64_MIN;

	t38 = (x165+(x166==(x167%x168)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x169 = INT8_MIN;
	volatile int64_t x170 = 1660LL;
	uint8_t x171 = 2U;
	int32_t t39 = 1306251;

	t39 = (x169+(x170==(x171%x172)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x174 = 0U;
	static volatile int32_t x176 = INT32_MAX;
	int32_t t40 = 61889021;

	t40 = (x173+(x174==(x175%x176)));

	if (t40 != 1656796) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = 1939;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 6985U;
	int64_t x180 = -1LL;

	t41 = (x177+(x178==(x179%x180)));

	if (t41 != 1939) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = -85;
	int16_t x184 = INT16_MIN;

	t42 = (x181+(x182==(x183%x184)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x186 = 57U;
	int64_t x188 = 21078LL;
	volatile int32_t t43 = 19755;

	t43 = (x185+(x186==(x187%x188)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 1681U;
	uint8_t x190 = 8U;
	int64_t x191 = INT64_MAX;

	t44 = (x189+(x190==(x191%x192)));

	if (t44 != 1681) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = -1;
	static uint16_t x199 = 85U;
	static int64_t x200 = INT64_MAX;

	t45 = (x197+(x198==(x199%x200)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MIN;
	static int16_t x203 = -1;
	uint32_t x204 = 82477U;

	t46 = (x201+(x202==(x203%x204)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = -2;
	int64_t x207 = INT64_MAX;
	volatile int16_t x208 = -1;
	int32_t t47 = -335109401;

	t47 = (x205+(x206==(x207%x208)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = INT8_MAX;
	int32_t x210 = 8010;
	volatile int32_t x211 = -7058;
	uint16_t x212 = 3U;
	int32_t t48 = 26033751;

	t48 = (x209+(x210==(x211%x212)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 436376120690143283LLU;
	volatile int16_t x214 = INT16_MAX;
	volatile uint64_t x216 = 362209877839355LLU;
	uint64_t t49 = 66767703043LLU;

	t49 = (x213+(x214==(x215%x216)));

	if (t49 != 436376120690143283LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = 241129410456352LLU;
	uint64_t x219 = UINT64_MAX;
	static uint16_t x220 = 7909U;
	int32_t t50 = -809239;

	t50 = (x217+(x218==(x219%x220)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MAX;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = 6458;
	int16_t x224 = -1;
	static volatile int64_t t51 = INT64_MAX;

	t51 = (x221+(x222==(x223%x224)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = 1;
	int64_t x227 = -1LL;
	int16_t x228 = -1;

	t52 = (x225+(x226==(x227%x228)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x229 = -1;
	uint32_t x230 = 1502399U;
	static int64_t x231 = -1LL;
	uint8_t x232 = 9U;
	volatile int32_t t53 = -5301;

	t53 = (x229+(x230==(x231%x232)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 19LLU;
	volatile int32_t x234 = 31043;
	int8_t x235 = INT8_MIN;
	uint64_t t54 = 38LLU;

	t54 = (x233+(x234==(x235%x236)));

	if (t54 != 19LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = -393;
	int8_t x238 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	int16_t x240 = -1;
	int32_t t55 = -988228;

	t55 = (x237+(x238==(x239%x240)));

	if (t55 != -393) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x241 = UINT64_MAX;
	uint64_t x242 = 13587253807796LLU;
	uint16_t x243 = 2068U;
	uint32_t x244 = 1U;

	t56 = (x241+(x242==(x243%x244)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = 0;
	int32_t x246 = -958;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	static volatile int32_t t57 = 0;

	t57 = (x245+(x246==(x247%x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x249 = 9185944U;
	int16_t x250 = INT16_MIN;
	static uint8_t x251 = 4U;
	static int32_t x252 = -2005;
	uint32_t t58 = 16089243U;

	t58 = (x249+(x250==(x251%x252)));

	if (t58 != 9185944U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = -945LL;
	int32_t x255 = -22;
	volatile uint32_t x256 = UINT32_MAX;
	static int64_t t59 = -30LL;

	t59 = (x253+(x254==(x255%x256)));

	if (t59 != -945LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = UINT16_MAX;
	uint8_t x258 = UINT8_MAX;
	volatile int64_t x259 = -1LL;
	int8_t x260 = -1;

	t60 = (x257+(x258==(x259%x260)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = 518928688996523159LLU;
	int8_t x264 = INT8_MIN;
	volatile int32_t t61 = 55;

	t61 = (x261+(x262==(x263%x264)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x265 = 1U;
	int32_t x267 = -307;
	uint16_t x268 = 251U;
	int32_t t62 = -426567529;

	t62 = (x265+(x266==(x267%x268)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x270 = INT16_MIN;
	int16_t x271 = -6;
	static int64_t x272 = 41463183276LL;

	t63 = (x269+(x270==(x271%x272)));

	if (t63 != 3440640051491433233LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	static volatile int64_t x274 = INT64_MIN;
	volatile uint8_t x275 = 1U;
	uint32_t x276 = UINT32_MAX;

	t64 = (x273+(x274==(x275%x276)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x278 = 95U;
	uint16_t x279 = 3U;
	int32_t t65 = -272834390;

	t65 = (x277+(x278==(x279%x280)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = 15105;
	int32_t x282 = INT32_MAX;
	uint8_t x284 = UINT8_MAX;
	int32_t t66 = 150466057;

	t66 = (x281+(x282==(x283%x284)));

	if (t66 != 15105) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	uint16_t x286 = 59U;
	uint64_t x287 = UINT64_MAX;
	volatile int64_t x288 = -17959662LL;
	volatile int64_t t67 = 17796333608185914LL;

	t67 = (x285+(x286==(x287%x288)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MAX;

	t68 = (x289+(x290==(x291%x292)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x293 = -840;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = 0;
	uint64_t x296 = UINT64_MAX;
	static int32_t t69 = -221;

	t69 = (x293+(x294==(x295%x296)));

	if (t69 != -840) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x298 = INT8_MAX;
	volatile int32_t t70 = -264;

	t70 = (x297+(x298==(x299%x300)));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = 3;
	static volatile int32_t x302 = -78132;
	static uint32_t x303 = 17814U;
	static volatile int32_t t71 = 1931;

	t71 = (x301+(x302==(x303%x304)));

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x305 = 22U;
	volatile int64_t x308 = INT64_MAX;
	static volatile int32_t t72 = 3161185;

	t72 = (x305+(x306==(x307%x308)));

	if (t72 != 22) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = -1;
	int32_t x311 = -1;
	static int32_t x312 = 590;
	int32_t t73 = -1003221080;

	t73 = (x309+(x310==(x311%x312)));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = UINT64_MAX;
	static volatile uint16_t x314 = 5994U;
	int32_t x315 = INT32_MAX;
	int16_t x316 = INT16_MIN;
	uint64_t t74 = UINT64_MAX;

	t74 = (x313+(x314==(x315%x316)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -1;
	int16_t x318 = -1;
	static volatile int8_t x319 = 0;
	int32_t x320 = -3361;
	volatile int32_t t75 = 492;

	t75 = (x317+(x318==(x319%x320)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = 731;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MAX;
	static uint32_t x324 = 10354878U;
	static volatile int32_t t76 = 32875528;

	t76 = (x321+(x322==(x323%x324)));

	if (t76 != 731) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = INT16_MIN;
	static uint16_t x327 = UINT16_MAX;
	volatile int64_t x328 = INT64_MIN;

	t77 = (x325+(x326==(x327%x328)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x329 = 19U;
	static int32_t x330 = INT32_MIN;
	static int32_t x331 = -1;
	int32_t x332 = -9;
	volatile int32_t t78 = 249;

	t78 = (x329+(x330==(x331%x332)));

	if (t78 != 19) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x333 = INT16_MAX;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MAX;
	volatile int32_t x336 = 6240350;

	t79 = (x333+(x334==(x335%x336)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 9U;
	static int16_t x338 = -101;
	volatile int64_t x339 = INT64_MIN;
	static uint16_t x340 = 52U;
	volatile int32_t t80 = -10417;

	t80 = (x337+(x338==(x339%x340)));

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 19834997369796LLU;
	volatile int32_t x343 = INT32_MIN;
	static volatile uint64_t t81 = 3828LLU;

	t81 = (x341+(x342==(x343%x344)));

	if (t81 != 19834997369796LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = -92073;
	static int16_t x347 = INT16_MAX;
	volatile int8_t x348 = -1;
	static int32_t t82 = 211610651;

	t82 = (x345+(x346==(x347%x348)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = UINT16_MAX;
	static int8_t x350 = INT8_MIN;
	uint64_t x352 = 215337821275968LLU;
	int32_t t83 = -4103;

	t83 = (x349+(x350==(x351%x352)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 6606384U;
	int64_t x354 = 2043859LL;
	int16_t x356 = -1;
	volatile uint32_t t84 = 28U;

	t84 = (x353+(x354==(x355%x356)));

	if (t84 != 6606384U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = UINT8_MAX;
	uint32_t x358 = 309005341U;
	static uint64_t x359 = 24330299343871159LLU;
	int8_t x360 = -9;
	int32_t t85 = 1;

	t85 = (x357+(x358==(x359%x360)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = 2804U;
	uint64_t x362 = 80801485LLU;
	uint16_t x363 = 4U;

	t86 = (x361+(x362==(x363%x364)));

	if (t86 != 2804U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x367 = 60U;
	uint32_t x368 = 75022U;
	int32_t t87 = INT32_MIN;

	t87 = (x365+(x366==(x367%x368)));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -1;
	static int8_t x370 = INT8_MIN;
	int64_t x371 = 463879473228067125LL;
	int8_t x372 = 53;
	int32_t t88 = 1;

	t88 = (x369+(x370==(x371%x372)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x373 = INT32_MIN;
	volatile uint8_t x374 = 122U;
	volatile uint16_t x375 = 60U;
	int32_t t89 = INT32_MIN;

	t89 = (x373+(x374==(x375%x376)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x379 = -1LL;
	static volatile int64_t t90 = INT64_MIN;

	t90 = (x377+(x378==(x379%x380)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = 23721LLU;
	static uint32_t x382 = UINT32_MAX;
	uint64_t x383 = UINT64_MAX;
	static uint16_t x384 = 309U;

	t91 = (x381+(x382==(x383%x384)));

	if (t91 != 23721LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = INT16_MIN;
	volatile int16_t x387 = -2019;
	int64_t x388 = -1LL;
	static int32_t t92 = 282;

	t92 = (x385+(x386==(x387%x388)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = 3813487590LLU;
	static int16_t x390 = -1;
	uint64_t x391 = 56058902LLU;
	uint32_t x392 = 7413U;
	uint64_t t93 = 148322849873884382LLU;

	t93 = (x389+(x390==(x391%x392)));

	if (t93 != 3813487590LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	uint8_t x394 = 82U;
	int16_t x396 = INT16_MAX;
	int32_t t94 = INT32_MIN;

	t94 = (x393+(x394==(x395%x396)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MIN;
	static int32_t x400 = -1;

	t95 = (x397+(x398==(x399%x400)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	int16_t x403 = -67;
	static int32_t x404 = -379;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x401+(x402==(x403%x404)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -1;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = 13LLU;
	int32_t t97 = -15;

	t97 = (x405+(x406==(x407%x408)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	uint16_t x410 = UINT16_MAX;
	volatile int16_t x412 = INT16_MAX;

	t98 = (x409+(x410==(x411%x412)));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x414 = 9U;
	volatile int8_t x415 = 6;
	uint32_t x416 = 691808189U;

	t99 = (x413+(x414==(x415%x416)));

	if (t99 != 3) { NG(); } else { ; }
	
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

