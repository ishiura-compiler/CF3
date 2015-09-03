#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
int8_t x5 = INT8_MIN;
uint16_t x6 = UINT16_MAX;
int8_t x8 = INT8_MAX;
int64_t x9 = INT64_MIN;
volatile int32_t t4 = 101;
int8_t x25 = -1;
uint32_t x26 = 14U;
int16_t x29 = INT16_MAX;
uint16_t x33 = 57U;
int32_t t7 = 18;
int64_t x40 = -1LL;
int8_t x51 = INT8_MIN;
volatile int32_t x55 = INT32_MIN;
volatile int32_t t10 = -191;
uint32_t x57 = UINT32_MAX;
int16_t x62 = INT16_MAX;
int32_t t12 = 446;
volatile int8_t x70 = 1;
volatile int8_t x83 = -1;
int8_t x86 = INT8_MAX;
volatile uint16_t x89 = UINT16_MAX;
volatile int32_t x104 = INT32_MIN;
uint64_t x107 = 75418899815LLU;
uint32_t x115 = UINT32_MAX;
int16_t x116 = INT16_MIN;
static int64_t x118 = 1649LL;
int32_t t25 = -9252;
int64_t x126 = -58LL;
int16_t x128 = INT16_MIN;
int32_t t27 = 2642;
int16_t x139 = INT16_MIN;
volatile int32_t t28 = 61730041;
int16_t x142 = -1;
uint64_t x145 = UINT64_MAX;
volatile int32_t t30 = -10;
int32_t x150 = INT32_MIN;
uint64_t x151 = 1332907940842LLU;
static uint8_t x158 = UINT8_MAX;
int64_t x159 = INT64_MIN;
static uint32_t x162 = UINT32_MAX;
uint16_t x165 = UINT16_MAX;
int8_t x166 = INT8_MAX;
uint32_t x167 = UINT32_MAX;
volatile int16_t x169 = INT16_MAX;
int64_t x170 = INT64_MIN;
volatile uint8_t x174 = 3U;
volatile uint16_t x186 = 1U;
int16_t x192 = INT16_MIN;
static int8_t x194 = INT8_MIN;
uint8_t x198 = UINT8_MAX;
volatile int32_t t43 = -119255674;
int32_t x207 = -1;
uint32_t x208 = 60607U;
uint8_t x213 = UINT8_MAX;
int64_t x217 = INT64_MIN;
uint8_t x226 = 6U;
int16_t x232 = INT16_MIN;
volatile int32_t t51 = 713;
int16_t x237 = 0;
int32_t x238 = -1;
int64_t x240 = INT64_MIN;
static int64_t x242 = -1LL;
volatile int32_t t54 = -40965;
int32_t t55 = 0;
int16_t x253 = -1;
int32_t t56 = 1457399;
int8_t x258 = 15;
int16_t x259 = 1791;
int32_t t59 = -116154668;
volatile uint64_t x269 = 9976030544979LLU;
volatile int16_t x276 = -28;
int32_t x280 = -1;
static volatile int32_t t62 = 23;
int64_t x281 = 18LL;
int8_t x285 = INT8_MIN;
int32_t t65 = -1;
static uint32_t x294 = 215U;
static int8_t x298 = INT8_MIN;
int32_t x299 = -1;
volatile int32_t x301 = INT32_MIN;
int8_t x303 = INT8_MIN;
int32_t x307 = 92;
int32_t x308 = 4763512;
volatile int32_t t70 = 33998;
volatile uint16_t x317 = 19824U;
volatile int8_t x319 = INT8_MIN;
uint8_t x324 = UINT8_MAX;
static volatile int32_t t74 = 6183790;
uint16_t x330 = 5859U;
uint16_t x341 = UINT16_MAX;
int8_t x342 = INT8_MIN;
uint64_t x344 = 161518LLU;
int32_t x350 = INT32_MIN;
int16_t x353 = -22;
static int16_t x354 = INT16_MAX;
int32_t x358 = INT32_MIN;
int16_t x361 = 0;
uint16_t x367 = 29U;
uint16_t x368 = 270U;
volatile int32_t x377 = -13;
static int64_t x381 = INT64_MAX;
uint16_t x387 = UINT16_MAX;
uint32_t x388 = UINT32_MAX;
int8_t x405 = INT8_MIN;
uint64_t x406 = 23LLU;
int16_t x408 = -1;
int8_t x410 = -1;
static int16_t x411 = 0;
volatile int32_t t89 = 188401187;
static volatile int32_t x417 = INT32_MAX;
volatile uint64_t x419 = UINT64_MAX;
volatile int8_t x423 = -6;
int16_t x425 = -1484;
static volatile uint8_t x432 = 0U;
int64_t x433 = INT64_MIN;
uint32_t x434 = 39553713U;
uint16_t x436 = 163U;
int8_t x440 = INT8_MIN;
uint64_t x442 = 546778763353840909LLU;
volatile int32_t t97 = 87202454;
uint64_t x445 = 1198LLU;
volatile int8_t x451 = -1;


void f0(void) {
	uint16_t x2 = 32U;
	static uint8_t x3 = UINT8_MAX;
	volatile int8_t x4 = -1;
	static int32_t t0 = -684;

	t0 = (x1<=(x2==(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x7 = 929684U;
	static int32_t t1 = -3235122;

	t1 = (x5<=(x6==(x7+x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -1;
	uint8_t x11 = 1U;
	uint32_t x12 = 6012287U;
	int32_t t2 = 4;

	t2 = (x9<=(x10==(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MIN;
	uint64_t x15 = 13929332LLU;
	uint64_t x16 = 177LLU;
	int32_t t3 = -93;

	t3 = (x13<=(x14==(x15+x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	int8_t x18 = -10;
	int8_t x19 = 0;
	uint16_t x20 = 2124U;

	t4 = (x17<=(x18==(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x27 = 198009527U;
	volatile uint64_t x28 = 4093LLU;
	int32_t t5 = 1;

	t5 = (x25<=(x26==(x27+x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MAX;
	static int64_t x31 = INT64_MAX;
	static uint64_t x32 = 17272352116157668LLU;
	int32_t t6 = -1;

	t6 = (x29<=(x30==(x31+x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 6952210LLU;
	int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MIN;

	t7 = (x33<=(x34==(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -56;
	static volatile uint8_t x38 = UINT8_MAX;
	static int8_t x39 = INT8_MIN;
	static volatile int32_t t8 = 599477;

	t8 = (x37<=(x38==(x39+x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = INT32_MAX;
	static int16_t x50 = -1;
	int8_t x52 = INT8_MAX;
	volatile int32_t t9 = -64062;

	t9 = (x49<=(x50==(x51+x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 618U;
	uint16_t x54 = UINT16_MAX;
	volatile uint8_t x56 = UINT8_MAX;

	t10 = (x53<=(x54==(x55+x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x58 = -3;
	volatile int64_t x59 = INT64_MAX;
	int32_t x60 = -180015;
	volatile int32_t t11 = -37676;

	t11 = (x57<=(x58==(x59+x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	uint32_t x63 = UINT32_MAX;
	volatile int16_t x64 = 26;

	t12 = (x61<=(x62==(x63+x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -1;
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	int8_t x68 = INT8_MAX;
	int32_t t13 = -117493;

	t13 = (x65<=(x66==(x67+x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = INT16_MIN;
	static int16_t x71 = INT16_MIN;
	static uint8_t x72 = UINT8_MAX;
	int32_t t14 = -1;

	t14 = (x69<=(x70==(x71+x72)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MAX;
	uint64_t x75 = UINT64_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t15 = -478;

	t15 = (x73<=(x74==(x75+x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = 6483;
	int8_t x82 = 5;
	static uint32_t x84 = UINT32_MAX;
	int32_t t16 = -260763785;

	t16 = (x81<=(x82==(x83+x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MIN;
	static int64_t x87 = 123310588LL;
	uint32_t x88 = 612938U;
	int32_t t17 = 10162;

	t17 = (x85<=(x86==(x87+x88)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 28417987U;
	static uint64_t x92 = 1692788LLU;
	int32_t t18 = -1;

	t18 = (x89<=(x90==(x91+x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 87U;
	static uint32_t x98 = UINT32_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	static int8_t x100 = 0;
	int32_t t19 = 53924;

	t19 = (x97<=(x98==(x99+x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x102 = 27;
	int64_t x103 = -1LL;
	static int32_t t20 = 915;

	t20 = (x101<=(x102==(x103+x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = -284;
	int32_t x106 = -10;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t21 = -1;

	t21 = (x105<=(x106==(x107+x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 367U;
	volatile int32_t t22 = 113646470;

	t22 = (x109<=(x110==(x111+x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = 1;
	int16_t x114 = INT16_MIN;
	static volatile int32_t t23 = 244187040;

	t23 = (x113<=(x114==(x115+x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = 5503919820570203LL;
	int16_t x119 = -678;
	int64_t x120 = INT64_MAX;
	volatile int32_t t24 = -2200813;

	t24 = (x117<=(x118==(x119+x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x122 = UINT32_MAX;
	volatile int8_t x123 = -1;
	volatile int64_t x124 = INT64_MAX;

	t25 = (x121<=(x122==(x123+x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = -1;
	static volatile uint16_t x127 = UINT16_MAX;
	volatile int32_t t26 = -37698123;

	t26 = (x125<=(x126==(x127+x128)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	uint64_t x130 = 11350094980916039LLU;
	static int64_t x131 = -999405615LL;
	volatile int8_t x132 = INT8_MAX;

	t27 = (x129<=(x130==(x131+x132)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x137 = 363U;
	int8_t x138 = 2;
	int16_t x140 = -1;

	t28 = (x137<=(x138==(x139+x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x141 = 6;
	int8_t x143 = INT8_MIN;
	static int32_t x144 = 41;
	int32_t t29 = -1;

	t29 = (x141<=(x142==(x143+x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x146 = 37;
	int8_t x147 = -1;
	volatile int8_t x148 = INT8_MIN;

	t30 = (x145<=(x146==(x147+x148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	static volatile int16_t x152 = INT16_MIN;
	int32_t t31 = 524524;

	t31 = (x149<=(x150==(x151+x152)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	static int8_t x154 = INT8_MIN;
	static int8_t x155 = 1;
	static uint32_t x156 = 19420U;
	volatile int32_t t32 = 63034;

	t32 = (x153<=(x154==(x155+x156)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x157 = 10U;
	uint8_t x160 = 51U;
	static int32_t t33 = 175842102;

	t33 = (x157<=(x158==(x159+x160)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MAX;
	uint8_t x163 = 124U;
	uint8_t x164 = 21U;
	volatile int32_t t34 = 1;

	t34 = (x161<=(x162==(x163+x164)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x168 = -1;
	int32_t t35 = -13669;

	t35 = (x165<=(x166==(x167+x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x171 = INT32_MAX;
	static int16_t x172 = INT16_MIN;
	int32_t t36 = -1270005;

	t36 = (x169<=(x170==(x171+x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = INT8_MIN;
	static volatile int64_t x175 = -1LL;
	static uint64_t x176 = 48643801390691442LLU;
	volatile int32_t t37 = -284;

	t37 = (x173<=(x174==(x175+x176)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = UINT16_MAX;
	int32_t x178 = -1;
	int8_t x179 = -4;
	int32_t x180 = 13;
	volatile int32_t t38 = -8;

	t38 = (x177<=(x178==(x179+x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x181 = -1;
	static uint64_t x182 = 8741158538645LLU;
	int32_t x183 = -1;
	uint64_t x184 = 978836LLU;
	int32_t t39 = 25694657;

	t39 = (x181<=(x182==(x183+x184)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = 6;
	uint32_t x187 = 125U;
	static int8_t x188 = INT8_MIN;
	int32_t t40 = -17;

	t40 = (x185<=(x186==(x187+x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = 57U;
	uint64_t x190 = 58015262804681720LLU;
	uint32_t x191 = 3672U;
	int32_t t41 = -3565292;

	t41 = (x189<=(x190==(x191+x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 9296649U;
	int16_t x195 = -1425;
	int8_t x196 = INT8_MAX;
	int32_t t42 = -214070;

	t42 = (x193<=(x194==(x195+x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = -1;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -1;

	t43 = (x197<=(x198==(x199+x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = 259433052LL;
	int8_t x202 = -12;
	static volatile uint32_t x203 = 690U;
	volatile uint8_t x204 = 16U;
	volatile int32_t t44 = 15673;

	t44 = (x201<=(x202==(x203+x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x205 = 10U;
	uint16_t x206 = UINT16_MAX;
	int32_t t45 = -528053619;

	t45 = (x205<=(x206==(x207+x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	int32_t x210 = INT32_MIN;
	volatile int32_t x211 = INT32_MIN;
	uint8_t x212 = UINT8_MAX;
	static volatile int32_t t46 = 16282;

	t46 = (x209<=(x210==(x211+x212)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MAX;
	uint64_t x216 = 72890642853262LLU;
	static int32_t t47 = 541;

	t47 = (x213<=(x214==(x215+x216)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x218 = 49U;
	int8_t x219 = -62;
	static volatile uint16_t x220 = 238U;
	volatile int32_t t48 = 51632588;

	t48 = (x217<=(x218==(x219+x220)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = 2088317685051302LL;
	uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 184U;
	volatile int32_t t49 = -1;

	t49 = (x225<=(x226==(x227+x228)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x229 = 2U;
	uint64_t x230 = UINT64_MAX;
	int64_t x231 = -193LL;
	volatile int32_t t50 = -26325;

	t50 = (x229<=(x230==(x231+x232)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x233 = INT32_MIN;
	uint8_t x234 = 26U;
	static int16_t x235 = -2;
	static int32_t x236 = -1;

	t51 = (x233<=(x234==(x235+x236)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x239 = 203785LLU;
	static volatile int32_t t52 = 972451;

	t52 = (x237<=(x238==(x239+x240)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x241 = 53;
	int16_t x243 = INT16_MAX;
	uint8_t x244 = 102U;
	static volatile int32_t t53 = -392575904;

	t53 = (x241<=(x242==(x243+x244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -1;
	uint16_t x246 = 1584U;
	static int32_t x247 = INT32_MIN;
	volatile uint64_t x248 = 32272361LLU;

	t54 = (x245<=(x246==(x247+x248)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MIN;
	int16_t x251 = -1;
	int8_t x252 = 38;

	t55 = (x249<=(x250==(x251+x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x254 = 3U;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;

	t56 = (x253<=(x254==(x255+x256)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x257 = 1691586U;
	uint8_t x260 = 122U;
	int32_t t57 = -32815904;

	t57 = (x257<=(x258==(x259+x260)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = INT32_MAX;
	uint32_t x262 = 1348997167U;
	int64_t x263 = -1LL;
	uint16_t x264 = 10090U;
	int32_t t58 = -97;

	t58 = (x261<=(x262==(x263+x264)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x265 = 52768418632058548LLU;
	volatile int16_t x266 = -1;
	int16_t x267 = INT16_MAX;
	static int16_t x268 = INT16_MIN;

	t59 = (x265<=(x266==(x267+x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x270 = 1856U;
	int16_t x271 = INT16_MAX;
	int8_t x272 = 0;
	volatile int32_t t60 = -5931;

	t60 = (x269<=(x270==(x271+x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = -1;
	uint16_t x274 = 3U;
	static uint32_t x275 = UINT32_MAX;
	volatile int32_t t61 = 1;

	t61 = (x273<=(x274==(x275+x276)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MAX;
	static volatile int64_t x278 = INT64_MAX;
	uint32_t x279 = UINT32_MAX;

	t62 = (x277<=(x278==(x279+x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x282 = UINT32_MAX;
	int32_t x283 = 199189;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t63 = 8;

	t63 = (x281<=(x282==(x283+x284)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x286 = 952809U;
	int32_t x287 = INT32_MIN;
	static int16_t x288 = INT16_MAX;
	volatile int32_t t64 = -1644139;

	t64 = (x285<=(x286==(x287+x288)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x289 = UINT16_MAX;
	int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	int32_t x292 = 1;

	t65 = (x289<=(x290==(x291+x292)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x293 = 2653481;
	uint32_t x295 = 942494U;
	uint32_t x296 = UINT32_MAX;
	static volatile int32_t t66 = -9378;

	t66 = (x293<=(x294==(x295+x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x297 = 36051U;
	static int32_t x300 = INT32_MAX;
	int32_t t67 = 508250;

	t67 = (x297<=(x298==(x299+x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x302 = UINT16_MAX;
	uint64_t x304 = 422407194LLU;
	volatile int32_t t68 = -334819;

	t68 = (x301<=(x302==(x303+x304)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MIN;
	volatile int32_t t69 = 1;

	t69 = (x305<=(x306==(x307+x308)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x309 = -1;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = 2076844637U;
	volatile int32_t x312 = 57368777;

	t70 = (x309<=(x310==(x311+x312)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = -6432681LL;
	int64_t x314 = -1LL;
	uint8_t x315 = 1U;
	static int64_t x316 = 22003LL;
	volatile int32_t t71 = 21371;

	t71 = (x313<=(x314==(x315+x316)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x318 = 30666U;
	int32_t x320 = -8;
	volatile int32_t t72 = 113125;

	t72 = (x317<=(x318==(x319+x320)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = -1;
	volatile uint8_t x322 = 3U;
	int64_t x323 = 1LL;
	volatile int32_t t73 = -336840517;

	t73 = (x321<=(x322==(x323+x324)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	static int8_t x327 = INT8_MIN;
	uint16_t x328 = 3765U;

	t74 = (x325<=(x326==(x327+x328)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x331 = 0U;
	uint64_t x332 = 200865305987767LLU;
	int32_t t75 = -8;

	t75 = (x329<=(x330==(x331+x332)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile uint16_t x338 = 47U;
	int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t76 = -16582551;

	t76 = (x337<=(x338==(x339+x340)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x343 = 743031181U;
	volatile int32_t t77 = -24;

	t77 = (x341<=(x342==(x343+x344)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = INT8_MAX;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MIN;
	int32_t t78 = 0;

	t78 = (x349<=(x350==(x351+x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x355 = INT16_MAX;
	uint8_t x356 = UINT8_MAX;
	int32_t t79 = -1612945;

	t79 = (x353<=(x354==(x355+x356)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x357 = 0U;
	volatile uint8_t x359 = 4U;
	static int64_t x360 = INT64_MIN;
	volatile int32_t t80 = -60467525;

	t80 = (x357<=(x358==(x359+x360)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x362 = INT64_MAX;
	uint16_t x363 = 12073U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t81 = 903098528;

	t81 = (x361<=(x362==(x363+x364)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = -89;
	static volatile int32_t t82 = 5535875;

	t82 = (x365<=(x366==(x367+x368)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x374 = INT16_MIN;
	volatile uint8_t x375 = 4U;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t83 = 1417;

	t83 = (x373<=(x374==(x375+x376)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x378 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;
	static int32_t t84 = 121243;

	t84 = (x377<=(x378==(x379+x380)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x382 = 6303U;
	uint32_t x383 = 160U;
	volatile int8_t x384 = -1;
	int32_t t85 = 52;

	t85 = (x381<=(x382==(x383+x384)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x385 = INT16_MIN;
	uint16_t x386 = 1719U;
	int32_t t86 = -10451893;

	t86 = (x385<=(x386==(x387+x388)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = INT64_MAX;
	int64_t x402 = -1LL;
	uint32_t x403 = UINT32_MAX;
	volatile uint8_t x404 = UINT8_MAX;
	volatile int32_t t87 = 7;

	t87 = (x401<=(x402==(x403+x404)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x407 = 27998744U;
	int32_t t88 = 9;

	t88 = (x405<=(x406==(x407+x408)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x409 = 8145985LLU;
	volatile uint32_t x412 = 3U;

	t89 = (x409<=(x410==(x411+x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MAX;
	int64_t x414 = -1LL;
	int8_t x415 = 1;
	int32_t x416 = -6;
	volatile int32_t t90 = -126680615;

	t90 = (x413<=(x414==(x415+x416)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x418 = INT16_MIN;
	static int32_t x420 = 10;
	int32_t t91 = -165910984;

	t91 = (x417<=(x418==(x419+x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x421 = 1U;
	uint64_t x422 = UINT64_MAX;
	uint8_t x424 = 0U;
	static int32_t t92 = -829848848;

	t92 = (x421<=(x422==(x423+x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x426 = -1;
	int64_t x427 = -1LL;
	uint64_t x428 = 194220856LLU;
	static int32_t t93 = -80975491;

	t93 = (x425<=(x426==(x427+x428)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = INT32_MIN;
	int16_t x430 = -1;
	int16_t x431 = INT16_MIN;
	volatile int32_t t94 = 13;

	t94 = (x429<=(x430==(x431+x432)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x435 = -1LL;
	volatile int32_t t95 = -5048803;

	t95 = (x433<=(x434==(x435+x436)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = -1LL;
	static int32_t x438 = INT32_MIN;
	volatile int32_t x439 = -7575;
	volatile int32_t t96 = -1853;

	t96 = (x437<=(x438==(x439+x440)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x441 = 14473;
	int32_t x443 = -12543978;
	int16_t x444 = 6;

	t97 = (x441<=(x442==(x443+x444)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x446 = 8U;
	int32_t x447 = INT32_MAX;
	volatile int64_t x448 = -1LL;
	volatile int32_t t98 = -810321;

	t98 = (x445<=(x446==(x447+x448)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x449 = UINT64_MAX;
	static int8_t x450 = INT8_MIN;
	int64_t x452 = INT64_MAX;
	static int32_t t99 = -346285889;

	t99 = (x449<=(x450==(x451+x452)));

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

