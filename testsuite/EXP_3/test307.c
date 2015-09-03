#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
uint8_t x5 = UINT8_MAX;
int32_t x6 = 82;
int32_t t1 = -1;
volatile int32_t t4 = -1204781;
int64_t x23 = -6686LL;
int32_t x25 = 38722;
int64_t x45 = 15406892650LL;
static int64_t x47 = -1LL;
int32_t x50 = INT32_MIN;
uint32_t x64 = 1045009U;
volatile int32_t x66 = 29;
volatile uint16_t x68 = 2775U;
uint32_t x71 = 4409U;
int64_t x83 = INT64_MIN;
int32_t t19 = -12346130;
int16_t x87 = INT16_MIN;
int16_t x93 = INT16_MIN;
int16_t x94 = INT16_MIN;
int32_t x95 = -1;
static int32_t x108 = -1;
int16_t x110 = INT16_MAX;
int8_t x111 = INT8_MIN;
static uint64_t x112 = 836301206LLU;
int32_t x123 = -887988885;
static volatile uint64_t x126 = 198388LLU;
static uint8_t x128 = 5U;
static volatile int32_t t28 = -376137940;
volatile uint8_t x129 = UINT8_MAX;
volatile int32_t t30 = 260;
volatile int64_t x144 = INT64_MIN;
volatile int16_t x147 = -599;
static int16_t x148 = -99;
int8_t x151 = -2;
volatile int32_t x154 = INT32_MIN;
static volatile uint64_t x155 = 55164385531LLU;
int64_t x164 = -6040338046444301LL;
uint8_t x180 = 36U;
static int64_t x186 = -1LL;
int16_t x190 = -1;
int32_t t43 = -110;
uint8_t x205 = 11U;
int8_t x215 = INT8_MIN;
int64_t x216 = -2191053568485206495LL;
uint8_t x220 = 2U;
uint8_t x221 = UINT8_MAX;
volatile uint16_t x224 = 243U;
int64_t x227 = -25512113LL;
int64_t x231 = -22520873439LL;
int32_t x246 = INT32_MAX;
static int32_t x250 = 3;
int16_t x251 = -1;
int32_t t58 = 197571010;
int32_t t59 = -668484;
int8_t x258 = INT8_MIN;
volatile int64_t x259 = INT64_MAX;
volatile int32_t x265 = 0;
volatile uint8_t x269 = 43U;
int16_t x282 = INT16_MIN;
static int32_t t65 = 126792515;
static int64_t x285 = INT64_MIN;
uint32_t x290 = 41808U;
static int8_t x294 = -1;
volatile uint16_t x297 = 3594U;
int16_t x300 = INT16_MIN;
uint16_t x301 = UINT16_MAX;
int16_t x303 = 0;
volatile uint32_t x306 = 51148728U;
volatile int32_t t72 = 34;
uint64_t x336 = 4462591465048349834LLU;
int8_t x350 = -1;
uint32_t x351 = UINT32_MAX;
int8_t x353 = INT8_MIN;
uint16_t x365 = UINT16_MAX;
static int16_t x366 = 7786;
volatile int32_t t85 = 27;
int64_t x385 = 4712LL;
uint8_t x388 = UINT8_MAX;
int32_t t89 = -446024748;
volatile uint8_t x395 = UINT8_MAX;
volatile int8_t x396 = -1;
volatile int8_t x397 = 3;
int32_t x398 = 196;
int16_t x399 = INT16_MIN;
int32_t x400 = INT32_MIN;
uint64_t x402 = 419191383748438LLU;
int8_t x403 = -1;
uint16_t x408 = UINT16_MAX;
volatile uint64_t x413 = UINT64_MAX;
volatile uint64_t x415 = 102LLU;
volatile uint32_t x419 = 2386U;
volatile int32_t t97 = 876932;
int16_t x427 = INT16_MIN;
uint16_t x428 = UINT16_MAX;
volatile int64_t x429 = 47182LL;
volatile int32_t t99 = 448842;


void f0(void) {
	uint32_t x1 = 8219592U;
	static int32_t x2 = 1;
	uint64_t x3 = UINT64_MAX;
	volatile int32_t t0 = 8744;

	t0 = ((x1&x2)==(x3-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x7 = 20471U;
	uint16_t x8 = UINT16_MAX;

	t1 = ((x5&x6)==(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int32_t x10 = INT32_MIN;
	static volatile int8_t x11 = -1;
	int8_t x12 = 2;
	int32_t t2 = -10990993;

	t2 = ((x9&x10)==(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 23LL;
	static int64_t x14 = INT64_MIN;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 4;

	t3 = ((x13&x14)==(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int32_t x18 = INT32_MIN;
	static uint32_t x19 = 1U;
	static int32_t x20 = -957067872;

	t4 = ((x17&x18)==(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static int16_t x22 = 116;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = 8120673;

	t5 = ((x21&x22)==(x23-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x26 = INT8_MAX;
	uint64_t x27 = 15LLU;
	int32_t x28 = INT32_MAX;
	int32_t t6 = -1;

	t6 = ((x25&x26)==(x27-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = 32785482792LLU;
	int8_t x31 = -1;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = 257;

	t7 = ((x29&x30)==(x31-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -6727331LL;
	uint64_t x34 = 13837931LLU;
	uint64_t x35 = 119LLU;
	int8_t x36 = 1;
	volatile int32_t t8 = -983260069;

	t8 = ((x33&x34)==(x35-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 55238789152374LL;
	static int16_t x38 = 33;
	uint8_t x39 = 37U;
	uint8_t x40 = 25U;
	volatile int32_t t9 = 6121;

	t9 = ((x37&x38)==(x39-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 157336759703462092LLU;
	int16_t x42 = 196;
	static int8_t x43 = -1;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -55388950;

	t10 = ((x41&x42)==(x43-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 298U;
	uint16_t x48 = 0U;
	int32_t t11 = -2757943;

	t11 = ((x45&x46)==(x47-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int64_t x51 = 40944737078191317LL;
	volatile int32_t x52 = 41073;
	static volatile int32_t t12 = 9762;

	t12 = ((x49&x50)==(x51-x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	volatile uint8_t x54 = 1U;
	volatile uint32_t x55 = 4010878U;
	uint32_t x56 = 2U;
	int32_t t13 = 601481389;

	t13 = ((x53&x54)==(x55-x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 30879LLU;
	int16_t x58 = -435;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = -1;
	volatile int32_t t14 = -131638177;

	t14 = ((x57&x58)==(x59-x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -3;
	int64_t x62 = -1654929325424LL;
	static volatile int16_t x63 = -1;
	static int32_t t15 = 233356;

	t15 = ((x61&x62)==(x63-x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -4;
	uint16_t x67 = UINT16_MAX;
	volatile int32_t t16 = -18930155;

	t16 = ((x65&x66)==(x67-x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 938U;
	int8_t x70 = -2;
	static volatile uint64_t x72 = UINT64_MAX;
	int32_t t17 = 511702557;

	t17 = ((x69&x70)==(x71-x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 1247U;
	static uint64_t x78 = 1244907LLU;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = -958199;

	t18 = ((x77&x78)==(x79-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	int8_t x82 = 1;
	static int8_t x84 = -1;

	t19 = ((x81&x82)==(x83-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	uint32_t x86 = 166760U;
	volatile uint32_t x88 = 907U;
	int32_t t20 = -147463;

	t20 = ((x85&x86)==(x87-x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x96 = INT16_MAX;
	volatile int32_t t21 = 23218801;

	t21 = ((x93&x94)==(x95-x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	static int32_t x98 = INT32_MIN;
	static int8_t x99 = INT8_MAX;
	int32_t x100 = -1;
	volatile int32_t t22 = 25581;

	t22 = ((x97&x98)==(x99-x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	int8_t x106 = -1;
	int16_t x107 = INT16_MIN;
	volatile int32_t t23 = -387646048;

	t23 = ((x105&x106)==(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -87637;
	volatile int32_t t24 = -108567178;

	t24 = ((x109&x110)==(x111-x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	volatile uint64_t x115 = UINT64_MAX;
	volatile uint32_t x116 = 1627269U;
	int32_t t25 = 218;

	t25 = ((x113&x114)==(x115-x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = 0U;
	uint8_t x119 = 4U;
	int16_t x120 = -1;
	volatile int32_t t26 = 5;

	t26 = ((x117&x118)==(x119-x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 15U;
	int32_t x122 = -1;
	int16_t x124 = INT16_MIN;
	volatile int32_t t27 = -7793602;

	t27 = ((x121&x122)==(x123-x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MAX;
	static int32_t x127 = 681851;

	t28 = ((x125&x126)==(x127-x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x130 = UINT8_MAX;
	volatile int64_t x131 = INT64_MIN;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t29 = 592;

	t29 = ((x129&x130)==(x131-x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 7U;
	uint32_t x134 = 2087U;
	int16_t x135 = 14224;
	uint64_t x136 = 1LLU;

	t30 = ((x133&x134)==(x135-x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 66U;
	uint8_t x138 = 14U;
	uint8_t x139 = 21U;
	volatile int32_t x140 = -1;
	volatile int32_t t31 = -74311;

	t31 = ((x137&x138)==(x139-x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 27U;
	uint64_t x142 = 419091LLU;
	int16_t x143 = INT16_MIN;
	static volatile int32_t t32 = 395462845;

	t32 = ((x141&x142)==(x143-x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	int64_t x146 = INT64_MIN;
	int32_t t33 = -1;

	t33 = ((x145&x146)==(x147-x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	volatile uint64_t x150 = UINT64_MAX;
	int64_t x152 = -1LL;
	volatile int32_t t34 = -227733164;

	t34 = ((x149&x150)==(x151-x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x153 = 71U;
	int16_t x156 = -1;
	static int32_t t35 = 63549;

	t35 = ((x153&x154)==(x155-x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = -287367LL;
	uint32_t x158 = 484417405U;
	uint64_t x159 = 26LLU;
	uint64_t x160 = 163LLU;
	static int32_t t36 = -1197;

	t36 = ((x157&x158)==(x159-x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = INT16_MIN;
	volatile int32_t t37 = 233;

	t37 = ((x161&x162)==(x163-x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = 3LL;
	volatile uint64_t x170 = 63387LLU;
	static int8_t x171 = -1;
	int32_t x172 = -1;
	static volatile int32_t t38 = -8180004;

	t38 = ((x169&x170)==(x171-x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 1145455LLU;
	volatile int32_t x174 = -1;
	int16_t x175 = INT16_MIN;
	int64_t x176 = -570938116903LL;
	int32_t t39 = -987;

	t39 = ((x173&x174)==(x175-x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = UINT32_MAX;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t t40 = 7;

	t40 = ((x177&x178)==(x179-x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MIN;
	int32_t x183 = -253695046;
	uint8_t x184 = 11U;
	static volatile int32_t t41 = -182064809;

	t41 = ((x181&x182)==(x183-x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -22;
	int16_t x187 = 462;
	volatile uint16_t x188 = 23812U;
	volatile int32_t t42 = -59485888;

	t42 = ((x185&x186)==(x187-x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = -1514675298501006519LL;
	volatile uint8_t x191 = 0U;
	int8_t x192 = -1;

	t43 = ((x189&x190)==(x191-x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x193 = -1;
	int32_t x194 = INT32_MIN;
	static int8_t x195 = -1;
	int8_t x196 = INT8_MIN;
	int32_t t44 = -125200;

	t44 = ((x193&x194)==(x195-x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = 7;
	int8_t x198 = INT8_MAX;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 8U;
	int32_t t45 = -58;

	t45 = ((x197&x198)==(x199-x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MAX;
	volatile int64_t x204 = -1LL;
	int32_t t46 = -6;

	t46 = ((x201&x202)==(x203-x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x206 = INT32_MAX;
	static int64_t x207 = 7777647094272LL;
	int32_t x208 = -1;
	volatile int32_t t47 = 560750;

	t47 = ((x205&x206)==(x207-x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x209 = INT32_MIN;
	uint64_t x210 = 0LLU;
	int32_t x211 = INT32_MIN;
	static int64_t x212 = -21419114189630768LL;
	static int32_t t48 = 92710712;

	t48 = ((x209&x210)==(x211-x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MAX;
	static int8_t x214 = 47;
	int32_t t49 = 27;

	t49 = ((x213&x214)==(x215-x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MAX;
	static uint16_t x219 = 22081U;
	volatile int32_t t50 = 1006;

	t50 = ((x217&x218)==(x219-x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x222 = 25U;
	volatile uint16_t x223 = UINT16_MAX;
	int32_t t51 = -14748;

	t51 = ((x221&x222)==(x223-x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = INT32_MIN;
	static int8_t x226 = -1;
	volatile int64_t x228 = INT64_MIN;
	int32_t t52 = 136861;

	t52 = ((x225&x226)==(x227-x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x229 = INT16_MAX;
	volatile int16_t x230 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	static volatile int32_t t53 = -220048;

	t53 = ((x229&x230)==(x231-x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x233 = 6377214U;
	int32_t x234 = -711611;
	int32_t x235 = INT32_MIN;
	int8_t x236 = -18;
	volatile int32_t t54 = 3;

	t54 = ((x233&x234)==(x235-x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = -1;
	volatile int16_t x239 = -14;
	uint32_t x240 = UINT32_MAX;
	int32_t t55 = 203430442;

	t55 = ((x237&x238)==(x239-x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x241 = 983LL;
	volatile int8_t x242 = -22;
	volatile uint32_t x243 = 353356U;
	uint32_t x244 = UINT32_MAX;
	int32_t t56 = -9;

	t56 = ((x241&x242)==(x243-x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	int32_t x248 = -944072640;
	int32_t t57 = -14765;

	t57 = ((x245&x246)==(x247-x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 15104LLU;
	int64_t x252 = -1LL;

	t58 = ((x249&x250)==(x251-x252));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = -3143LL;
	int32_t x254 = -1453688;
	static uint16_t x255 = UINT16_MAX;
	volatile uint8_t x256 = 0U;

	t59 = ((x253&x254)==(x255-x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = UINT32_MAX;
	static uint16_t x260 = 1658U;
	static int32_t t60 = -2294;

	t60 = ((x257&x258)==(x259-x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x266 = INT16_MIN;
	uint64_t x267 = 2871491580246LLU;
	int16_t x268 = INT16_MIN;
	int32_t t61 = 18285;

	t61 = ((x265&x266)==(x267-x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x270 = INT64_MAX;
	static uint32_t x271 = UINT32_MAX;
	uint16_t x272 = 2U;
	volatile int32_t t62 = 16755573;

	t62 = ((x269&x270)==(x271-x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = -1LL;
	uint8_t x274 = 14U;
	static uint32_t x275 = 16961191U;
	int16_t x276 = -1;
	int32_t t63 = -4984857;

	t63 = ((x273&x274)==(x275-x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = 43900LLU;
	int16_t x278 = -1;
	int8_t x279 = INT8_MIN;
	volatile int64_t x280 = INT64_MIN;
	int32_t t64 = 69806177;

	t64 = ((x277&x278)==(x279-x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = INT64_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile uint16_t x284 = 215U;

	t65 = ((x281&x282)==(x283-x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x286 = -5;
	volatile int16_t x287 = 4;
	int16_t x288 = INT16_MAX;
	volatile int32_t t66 = 8436752;

	t66 = ((x285&x286)==(x287-x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x291 = 55U;
	uint32_t x292 = 2194U;
	volatile int32_t t67 = 4527523;

	t67 = ((x289&x290)==(x291-x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = 9U;
	volatile int32_t x295 = INT32_MAX;
	uint8_t x296 = 25U;
	int32_t t68 = 550064069;

	t68 = ((x293&x294)==(x295-x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = -1;
	volatile uint8_t x299 = UINT8_MAX;
	volatile int32_t t69 = -60960;

	t69 = ((x297&x298)==(x299-x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x302 = 1;
	int16_t x304 = 260;
	int32_t t70 = 5;

	t70 = ((x301&x302)==(x303-x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 458U;
	int16_t x307 = INT16_MIN;
	volatile int16_t x308 = -37;
	volatile int32_t t71 = -1;

	t71 = ((x305&x306)==(x307-x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = 0U;
	volatile uint8_t x310 = UINT8_MAX;
	uint64_t x311 = 14263270LLU;
	uint64_t x312 = 3789347588357545365LLU;

	t72 = ((x309&x310)==(x311-x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MIN;
	uint64_t x314 = 8874168382596504615LLU;
	int8_t x315 = INT8_MIN;
	uint8_t x316 = 4U;
	volatile int32_t t73 = -756993513;

	t73 = ((x313&x314)==(x315-x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = 898043U;
	uint64_t x319 = 172412905043460155LLU;
	volatile int16_t x320 = 3;
	int32_t t74 = -66931650;

	t74 = ((x317&x318)==(x319-x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 1281U;
	uint16_t x322 = 527U;
	uint16_t x323 = UINT16_MAX;
	volatile uint8_t x324 = 4U;
	int32_t t75 = 158;

	t75 = ((x321&x322)==(x323-x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -1;
	int16_t x326 = -1;
	static volatile int16_t x327 = INT16_MIN;
	int16_t x328 = -7558;
	int32_t t76 = 27060738;

	t76 = ((x325&x326)==(x327-x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = 6347;
	uint64_t x330 = 3033365650700345LLU;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MAX;
	int32_t t77 = 3355;

	t77 = ((x329&x330)==(x331-x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x333 = 5645U;
	int8_t x334 = INT8_MIN;
	int16_t x335 = 47;
	int32_t t78 = 7858;

	t78 = ((x333&x334)==(x335-x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = INT8_MAX;
	volatile int16_t x342 = -1;
	volatile uint64_t x343 = UINT64_MAX;
	int64_t x344 = INT64_MAX;
	static int32_t t79 = -9130;

	t79 = ((x341&x342)==(x343-x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = -1LL;
	uint16_t x346 = UINT16_MAX;
	uint64_t x347 = 1944305LLU;
	uint64_t x348 = UINT64_MAX;
	int32_t t80 = -30748;

	t80 = ((x345&x346)==(x347-x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = -3595;
	int8_t x352 = 2;
	int32_t t81 = -4;

	t81 = ((x349&x350)==(x351-x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x354 = 276639153975735630LL;
	static int8_t x355 = INT8_MIN;
	static uint64_t x356 = 4LLU;
	int32_t t82 = 221072223;

	t82 = ((x353&x354)==(x355-x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x361 = 809U;
	uint16_t x362 = 40U;
	static int16_t x363 = -12;
	volatile int32_t x364 = -2;
	volatile int32_t t83 = 774;

	t83 = ((x361&x362)==(x363-x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x367 = 0;
	static int8_t x368 = -20;
	static volatile int32_t t84 = -4;

	t84 = ((x365&x366)==(x367-x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -3;
	int64_t x370 = -297250860265764534LL;
	int64_t x371 = -1LL;
	int8_t x372 = 14;

	t85 = ((x369&x370)==(x371-x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x373 = UINT64_MAX;
	uint8_t x374 = UINT8_MAX;
	volatile int64_t x375 = INT64_MAX;
	int16_t x376 = 248;
	int32_t t86 = -1;

	t86 = ((x373&x374)==(x375-x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x377 = 1488778LL;
	uint16_t x378 = 295U;
	static int32_t x379 = -1;
	int8_t x380 = INT8_MIN;
	int32_t t87 = -615;

	t87 = ((x377&x378)==(x379-x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x381 = 23U;
	volatile uint32_t x382 = 11154753U;
	volatile int16_t x383 = -32;
	int8_t x384 = 0;
	volatile int32_t t88 = 317951123;

	t88 = ((x381&x382)==(x383-x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x386 = -32540737;
	int16_t x387 = INT16_MIN;

	t89 = ((x385&x386)==(x387-x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = -8;
	uint64_t x390 = 664484451608LLU;
	int64_t x391 = -233LL;
	static int8_t x392 = -4;
	int32_t t90 = -1;

	t90 = ((x389&x390)==(x391-x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	volatile int32_t t91 = 443;

	t91 = ((x393&x394)==(x395-x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t t92 = 8;

	t92 = ((x397&x398)==(x399-x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = INT32_MIN;
	static int64_t x404 = -1LL;
	static int32_t t93 = 1;

	t93 = ((x401&x402)==(x403-x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MIN;
	uint64_t x406 = 2820131357205901029LLU;
	uint8_t x407 = 1U;
	volatile int32_t t94 = -1;

	t94 = ((x405&x406)==(x407-x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x414 = INT16_MIN;
	static int16_t x416 = -1;
	volatile int32_t t95 = 1478506;

	t95 = ((x413&x414)==(x415-x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = INT64_MIN;
	uint64_t x418 = UINT64_MAX;
	uint32_t x420 = UINT32_MAX;
	int32_t t96 = 887555;

	t96 = ((x417&x418)==(x419-x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = -1;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = 932U;
	int8_t x424 = INT8_MAX;

	t97 = ((x421&x422)==(x423-x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x425 = INT16_MIN;
	volatile int8_t x426 = -16;
	volatile int32_t t98 = 572;

	t98 = ((x425&x426)==(x427-x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x430 = 183289472218LLU;
	int16_t x431 = INT16_MIN;
	int32_t x432 = INT32_MIN;

	t99 = ((x429&x430)==(x431-x432));

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

