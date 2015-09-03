#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = -1;
int32_t x10 = -10717223;
static int16_t x22 = INT16_MIN;
static int16_t x24 = INT16_MIN;
uint8_t x29 = 4U;
int16_t x34 = INT16_MIN;
int16_t x35 = INT16_MIN;
static int32_t t7 = -382969;
static int16_t x39 = -186;
volatile int32_t x42 = INT32_MAX;
uint8_t x47 = UINT8_MAX;
volatile int32_t t10 = 58;
volatile int64_t x50 = INT64_MAX;
static int32_t x54 = INT32_MIN;
int32_t t14 = 6082647;
static volatile int32_t t15 = -11982;
static uint32_t x72 = 603136U;
uint16_t x76 = 26U;
uint32_t x79 = UINT32_MAX;
volatile int16_t x84 = 326;
static int16_t x89 = INT16_MIN;
static int32_t x90 = -1;
int64_t x95 = -1LL;
volatile int32_t t22 = 1;
int8_t x113 = INT8_MAX;
int32_t t26 = -144;
int16_t x126 = INT16_MAX;
volatile int16_t x132 = 326;
int32_t t34 = 11;
volatile int64_t x150 = 343LL;
static uint8_t x158 = 1U;
uint64_t x161 = UINT64_MAX;
volatile int16_t x167 = INT16_MAX;
volatile int32_t t39 = -9077;
static int16_t x172 = -1;
int32_t t42 = 22;
static uint32_t x186 = UINT32_MAX;
int8_t x188 = INT8_MIN;
int16_t x189 = -1;
volatile int64_t x195 = -1LL;
volatile int32_t t47 = 467638608;
static uint16_t x214 = UINT16_MAX;
static int8_t x217 = -1;
int64_t x218 = -1LL;
int32_t x219 = INT32_MIN;
uint8_t x222 = 0U;
int32_t t53 = 327194330;
uint32_t x230 = UINT32_MAX;
uint32_t x231 = 644765854U;
volatile int32_t x234 = -1;
volatile int8_t x237 = -1;
uint32_t x248 = 140289771U;
int16_t x255 = -1;
int32_t t60 = 4123;
uint64_t x263 = 49464058593LLU;
static uint64_t x264 = UINT64_MAX;
volatile int32_t t62 = 965;
uint64_t x266 = 279447541906374955LLU;
volatile int32_t t63 = 856552691;
volatile uint32_t x271 = UINT32_MAX;
int32_t t64 = -942825;
volatile int32_t t65 = 973630;
uint32_t x279 = UINT32_MAX;
int32_t t68 = -46262;
volatile int16_t x290 = INT16_MAX;
uint8_t x295 = UINT8_MAX;
volatile uint8_t x302 = 64U;
int64_t x311 = -17261451029482770LL;
static int16_t x313 = INT16_MAX;
int8_t x316 = INT8_MIN;
volatile int32_t t78 = 1;
int16_t x347 = -1;
int32_t x349 = INT32_MIN;
uint32_t x351 = 28001269U;
static int32_t t83 = -498371331;
uint32_t x355 = UINT32_MAX;
volatile int32_t x361 = -1012211029;
volatile int8_t x371 = -5;
int8_t x372 = INT8_MAX;
uint32_t x382 = 107U;
static int16_t x392 = INT16_MIN;
int32_t t93 = 378;
int8_t x394 = 1;
volatile int8_t x395 = INT8_MIN;
volatile int32_t t97 = -1;
int64_t x411 = -53821LL;
volatile int32_t t98 = 21;
int64_t x413 = INT64_MIN;
static int16_t x414 = -1610;


void f0(void) {
	int8_t x1 = 3;
	int32_t x2 = -10458397;
	volatile int32_t x3 = INT32_MIN;
	uint64_t x4 = 180699LLU;
	volatile int32_t t0 = 116;

	t0 = (x1==(x2==(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int32_t x6 = 70155;
	static int32_t x7 = -26412;
	int32_t t1 = -1820;

	t1 = (x5==(x6==(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -117537;
	int32_t t2 = -118;

	t2 = (x9==(x10==(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MIN;
	static volatile uint8_t x15 = 24U;
	int32_t x16 = 52;
	int32_t t3 = 94025;

	t3 = (x13==(x14==(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 3U;
	static uint64_t x18 = 55819442531LLU;
	volatile int16_t x19 = -1;
	uint32_t x20 = 4842U;
	int32_t t4 = -12469380;

	t4 = (x17==(x18==(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -61;
	int32_t x23 = -1;
	int32_t t5 = 590671;

	t5 = (x21==(x22==(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = INT32_MIN;
	int8_t x31 = 0;
	volatile uint64_t x32 = 10238330725LLU;
	int32_t t6 = 484831;

	t6 = (x29==(x30==(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	static int8_t x36 = -1;

	t7 = (x33==(x34==(x35%x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t8 = 107865;

	t8 = (x37==(x38==(x39%x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -222LL;
	int16_t x43 = INT16_MIN;
	volatile uint32_t x44 = UINT32_MAX;
	int32_t t9 = 10332463;

	t9 = (x41==(x42==(x43%x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 335760075;
	static int8_t x46 = INT8_MIN;
	int32_t x48 = 10017822;

	t10 = (x45==(x46==(x47%x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = -1694LL;
	uint32_t x51 = 68873931U;
	int64_t x52 = INT64_MIN;
	int32_t t11 = -1;

	t11 = (x49==(x50==(x51%x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 1443031023622488LL;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = UINT16_MAX;
	int32_t t12 = -404364033;

	t12 = (x53==(x54==(x55%x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 10766U;
	int32_t x60 = -24610;
	int32_t t13 = -7939;

	t13 = (x57==(x58==(x59%x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 53371U;
	static int8_t x62 = INT8_MIN;
	uint8_t x63 = UINT8_MAX;
	volatile uint8_t x64 = UINT8_MAX;

	t14 = (x61==(x62==(x63%x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = -45;
	int32_t x66 = -495594722;
	volatile int8_t x67 = INT8_MIN;
	int64_t x68 = INT64_MAX;

	t15 = (x65==(x66==(x67%x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 12U;
	static volatile uint8_t x70 = 3U;
	volatile uint32_t x71 = 28759031U;
	volatile int32_t t16 = 3;

	t16 = (x69==(x70==(x71%x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	int8_t x74 = INT8_MIN;
	static int64_t x75 = -6LL;
	volatile int32_t t17 = -50412187;

	t17 = (x73==(x74==(x75%x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = -1;
	uint32_t x78 = 46888666U;
	volatile int64_t x80 = -1LL;
	volatile int32_t t18 = 1358;

	t18 = (x77==(x78==(x79%x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -1LL;
	uint8_t x82 = 13U;
	int32_t x83 = 255541487;
	volatile int32_t t19 = -1340;

	t19 = (x81==(x82==(x83%x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x91 = -706059323;
	static int8_t x92 = 33;
	int32_t t20 = 2;

	t20 = (x89==(x90==(x91%x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t21 = 2099;

	t21 = (x93==(x94==(x95%x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = 2857U;
	int32_t x99 = INT32_MIN;
	static volatile int32_t x100 = 1804353;

	t22 = (x97==(x98==(x99%x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = INT16_MAX;
	int32_t x102 = -1;
	uint16_t x103 = 30U;
	static uint32_t x104 = 599089U;
	int32_t t23 = -4682;

	t23 = (x101==(x102==(x103%x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	volatile uint8_t x106 = 32U;
	uint32_t x107 = 132441906U;
	static volatile int16_t x108 = -1;
	int32_t t24 = -37868;

	t24 = (x105==(x106==(x107%x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -3410498LL;
	volatile int32_t x110 = -1;
	volatile uint16_t x111 = 21U;
	int64_t x112 = 122025365844006LL;
	volatile int32_t t25 = 26;

	t25 = (x109==(x110==(x111%x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x114 = 63U;
	int64_t x115 = INT64_MIN;
	int16_t x116 = -5306;

	t26 = (x113==(x114==(x115%x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	int8_t x118 = -1;
	int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = 1U;
	static int32_t t27 = -70;

	t27 = (x117==(x118==(x119%x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 4U;
	volatile uint32_t x122 = 6747U;
	uint32_t x123 = 57U;
	volatile uint16_t x124 = 3798U;
	volatile int32_t t28 = -1192135;

	t28 = (x121==(x122==(x123%x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x127 = 1009U;
	int64_t x128 = INT64_MIN;
	static int32_t t29 = 924;

	t29 = (x125==(x126==(x127%x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 11451374961596650LLU;
	static uint64_t x130 = 13575414882LLU;
	static int8_t x131 = INT8_MAX;
	volatile int32_t t30 = -745;

	t30 = (x129==(x130==(x131%x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = -24;
	static volatile int32_t x134 = 1814888;
	int64_t x135 = -1LL;
	int8_t x136 = INT8_MAX;
	int32_t t31 = -2;

	t31 = (x133==(x134==(x135%x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 1;
	static int8_t x138 = -1;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	int32_t t32 = 234536287;

	t32 = (x137==(x138==(x139%x140)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	int16_t x142 = -1;
	uint8_t x143 = 23U;
	int32_t x144 = -22951049;
	volatile int32_t t33 = -3574;

	t33 = (x141==(x142==(x143%x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x145 = 14U;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	int64_t x148 = INT64_MIN;

	t34 = (x145==(x146==(x147%x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	int64_t x152 = -1289835709521565LL;
	int32_t t35 = 20;

	t35 = (x149==(x150==(x151%x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = INT64_MAX;
	static uint64_t x154 = 33382364260LLU;
	uint8_t x155 = UINT8_MAX;
	static int32_t x156 = 254388945;
	volatile int32_t t36 = -369800;

	t36 = (x153==(x154==(x155%x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MIN;
	int64_t x159 = INT64_MAX;
	int16_t x160 = INT16_MIN;
	volatile int32_t t37 = 0;

	t37 = (x157==(x158==(x159%x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = INT64_MAX;
	int32_t x163 = INT32_MAX;
	uint32_t x164 = 3222U;
	volatile int32_t t38 = 9028;

	t38 = (x161==(x162==(x163%x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int64_t x166 = -656733713962155LL;
	uint8_t x168 = 6U;

	t39 = (x165==(x166==(x167%x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = 7656LL;
	static int32_t x170 = INT32_MIN;
	uint64_t x171 = UINT64_MAX;
	int32_t t40 = -8045356;

	t40 = (x169==(x170==(x171%x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MAX;
	static uint32_t x174 = UINT32_MAX;
	int8_t x175 = 51;
	static int8_t x176 = -1;
	int32_t t41 = 34;

	t41 = (x173==(x174==(x175%x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 194U;
	uint64_t x178 = UINT64_MAX;
	static volatile uint32_t x179 = 256305046U;
	static uint64_t x180 = 12356LLU;

	t42 = (x177==(x178==(x179%x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	static int16_t x182 = INT16_MIN;
	int32_t x183 = -758538;
	uint16_t x184 = UINT16_MAX;
	int32_t t43 = 485783;

	t43 = (x181==(x182==(x183%x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	int32_t t44 = -1;

	t44 = (x185==(x186==(x187%x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x190 = 2169987362876971385LLU;
	uint32_t x191 = 225867U;
	int32_t x192 = -1;
	volatile int32_t t45 = 47034722;

	t45 = (x189==(x190==(x191%x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = 234U;
	volatile int64_t x196 = INT64_MIN;
	volatile int32_t t46 = -243242;

	t46 = (x193==(x194==(x195%x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = 48081981630067LL;
	volatile uint32_t x198 = UINT32_MAX;
	int32_t x199 = 737;
	static volatile uint16_t x200 = 77U;

	t47 = (x197==(x198==(x199%x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 0U;
	int8_t x202 = INT8_MIN;
	int64_t x203 = 4011449473LL;
	volatile uint64_t x204 = UINT64_MAX;
	int32_t t48 = -42053;

	t48 = (x201==(x202==(x203%x204)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	volatile uint64_t x210 = 88930257381LLU;
	static uint32_t x211 = UINT32_MAX;
	int32_t x212 = 101;
	int32_t t49 = 12;

	t49 = (x209==(x210==(x211%x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x213 = INT64_MIN;
	int32_t x215 = INT32_MAX;
	static volatile int64_t x216 = INT64_MAX;
	int32_t t50 = 0;

	t50 = (x213==(x214==(x215%x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x220 = INT32_MAX;
	int32_t t51 = 1;

	t51 = (x217==(x218==(x219%x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MAX;
	uint32_t x223 = 89253925U;
	volatile int8_t x224 = -1;
	int32_t t52 = 5276;

	t52 = (x221==(x222==(x223%x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int64_t x226 = INT64_MIN;
	int16_t x227 = 101;
	uint16_t x228 = 9U;

	t53 = (x225==(x226==(x227%x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = 4405871LL;
	int64_t x232 = -1LL;
	int32_t t54 = 27;

	t54 = (x229==(x230==(x231%x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x233 = INT16_MAX;
	volatile uint64_t x235 = 3640405466LLU;
	int32_t x236 = -1;
	int32_t t55 = 30;

	t55 = (x233==(x234==(x235%x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x238 = 772U;
	int8_t x239 = 2;
	uint32_t x240 = 1304U;
	volatile int32_t t56 = 336840914;

	t56 = (x237==(x238==(x239%x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x241 = INT8_MAX;
	int16_t x242 = 3;
	volatile uint8_t x243 = UINT8_MAX;
	uint32_t x244 = 160054U;
	volatile int32_t t57 = -122;

	t57 = (x241==(x242==(x243%x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x245 = INT64_MIN;
	volatile int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	static int32_t t58 = -96729937;

	t58 = (x245==(x246==(x247%x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = 7U;
	int8_t x250 = INT8_MAX;
	uint64_t x251 = 562217LLU;
	volatile uint64_t x252 = 369227826240694LLU;
	volatile int32_t t59 = 277180353;

	t59 = (x249==(x250==(x251%x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	volatile uint16_t x254 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;

	t60 = (x253==(x254==(x255%x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = -1;
	static volatile int16_t x258 = INT16_MAX;
	static uint8_t x259 = 74U;
	volatile uint32_t x260 = 135449581U;
	int32_t t61 = 22;

	t61 = (x257==(x258==(x259%x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x261 = UINT64_MAX;
	static int8_t x262 = INT8_MIN;

	t62 = (x261==(x262==(x263%x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int32_t x267 = 3409874;
	volatile int16_t x268 = 3;

	t63 = (x265==(x266==(x267%x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x269 = 1;
	static volatile int64_t x270 = INT64_MIN;
	int16_t x272 = INT16_MIN;

	t64 = (x269==(x270==(x271%x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 40980999455280LLU;
	uint8_t x274 = 0U;
	volatile int64_t x275 = -1LL;
	int32_t x276 = INT32_MAX;

	t65 = (x273==(x274==(x275%x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 430340219255977574LLU;
	volatile uint8_t x278 = 16U;
	int64_t x280 = -12966883714090LL;
	int32_t t66 = 161070;

	t66 = (x277==(x278==(x279%x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MAX;
	int64_t x283 = INT64_MIN;
	static int64_t x284 = INT64_MIN;
	static volatile int32_t t67 = 647945;

	t67 = (x281==(x282==(x283%x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x285 = 14244U;
	int8_t x286 = -1;
	int32_t x287 = -1;
	int32_t x288 = INT32_MIN;

	t68 = (x285==(x286==(x287%x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = -38;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = -4133563260LL;
	volatile int32_t t69 = 193;

	t69 = (x289==(x290==(x291%x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = UINT16_MAX;
	volatile int8_t x294 = -2;
	int16_t x296 = 63;
	int32_t t70 = 924119;

	t70 = (x293==(x294==(x295%x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 1U;
	uint64_t x298 = 4191148LLU;
	int16_t x299 = INT16_MIN;
	volatile uint64_t x300 = 20335538164057843LLU;
	static volatile int32_t t71 = -4689463;

	t71 = (x297==(x298==(x299%x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	volatile int64_t x304 = -10992LL;
	volatile int32_t t72 = -29;

	t72 = (x301==(x302==(x303%x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	static int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t73 = -268113;

	t73 = (x305==(x306==(x307%x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = -1;
	static int8_t x310 = 0;
	int32_t x312 = INT32_MIN;
	int32_t t74 = 1;

	t74 = (x309==(x310==(x311%x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x314 = 5U;
	volatile int32_t x315 = INT32_MAX;
	static int32_t t75 = -366;

	t75 = (x313==(x314==(x315%x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x317 = INT16_MIN;
	volatile int64_t x318 = -1LL;
	int16_t x319 = 0;
	int16_t x320 = 4;
	volatile int32_t t76 = 5;

	t76 = (x317==(x318==(x319%x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -3;
	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t77 = 211703894;

	t77 = (x321==(x322==(x323%x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	static int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MAX;
	int32_t x328 = -24;

	t78 = (x325==(x326==(x327%x328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x329 = 3567;
	uint16_t x330 = 7901U;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = 1110580LLU;
	int32_t t79 = -1;

	t79 = (x329==(x330==(x331%x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	static int32_t x338 = 1151;
	int32_t x339 = 111932;
	int16_t x340 = -11721;
	static volatile int32_t t80 = -976;

	t80 = (x337==(x338==(x339%x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x341 = -333995570;
	uint8_t x342 = 88U;
	int16_t x343 = INT16_MIN;
	int8_t x344 = -1;
	int32_t t81 = -220263;

	t81 = (x341==(x342==(x343%x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MIN;
	uint16_t x346 = 511U;
	int16_t x348 = -1;
	int32_t t82 = 36063573;

	t82 = (x345==(x346==(x347%x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x350 = 1U;
	int16_t x352 = INT16_MAX;

	t83 = (x349==(x350==(x351%x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MIN;
	static int64_t x354 = 1LL;
	static int64_t x356 = -1LL;
	int32_t t84 = 3366;

	t84 = (x353==(x354==(x355%x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = -279019816;
	uint16_t x358 = 9216U;
	static uint64_t x359 = 186210922055LLU;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t85 = -72286443;

	t85 = (x357==(x358==(x359%x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x362 = 69;
	static uint16_t x363 = UINT16_MAX;
	int64_t x364 = 223921977437365961LL;
	static int32_t t86 = 35889;

	t86 = (x361==(x362==(x363%x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	static int16_t x366 = -1;
	int64_t x367 = -13671925988895LL;
	volatile uint32_t x368 = 669207U;
	static int32_t t87 = -1;

	t87 = (x365==(x366==(x367%x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x369 = 922U;
	uint8_t x370 = 12U;
	volatile int32_t t88 = -1;

	t88 = (x369==(x370==(x371%x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x373 = 30911893LLU;
	volatile uint8_t x374 = 103U;
	volatile int8_t x375 = -24;
	uint16_t x376 = 846U;
	volatile int32_t t89 = -640949527;

	t89 = (x373==(x374==(x375%x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x377 = UINT64_MAX;
	int8_t x378 = -1;
	uint32_t x379 = 173115U;
	int8_t x380 = -7;
	volatile int32_t t90 = 108944;

	t90 = (x377==(x378==(x379%x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x381 = INT64_MIN;
	int32_t x383 = 17;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t91 = 56;

	t91 = (x381==(x382==(x383%x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = -1;
	static volatile int8_t x386 = INT8_MAX;
	int16_t x387 = 1368;
	static int16_t x388 = INT16_MAX;
	volatile int32_t t92 = -4;

	t92 = (x385==(x386==(x387%x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = -1017;
	int16_t x390 = -1;
	static int16_t x391 = -3787;

	t93 = (x389==(x390==(x391%x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x393 = INT8_MIN;
	static int8_t x396 = -17;
	volatile int32_t t94 = 1;

	t94 = (x393==(x394==(x395%x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 90453U;
	volatile int32_t x398 = INT32_MIN;
	volatile int64_t x399 = -1LL;
	uint8_t x400 = 1U;
	int32_t t95 = 44476;

	t95 = (x397==(x398==(x399%x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = 2180036LLU;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	uint16_t x404 = 57U;
	int32_t t96 = 13373138;

	t96 = (x401==(x402==(x403%x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = INT8_MAX;
	uint16_t x406 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	int32_t x408 = -1;

	t97 = (x405==(x406==(x407%x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = 118U;
	uint32_t x410 = 2315U;
	int64_t x412 = INT64_MAX;

	t98 = (x409==(x410==(x411%x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x415 = 1U;
	int8_t x416 = INT8_MAX;
	int32_t t99 = -2143435;

	t99 = (x413==(x414==(x415%x416)));

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

