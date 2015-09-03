#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
volatile int8_t x6 = INT8_MIN;
static volatile int32_t x8 = INT32_MAX;
int64_t t1 = 279966201074133LL;
volatile int64_t x12 = INT64_MIN;
volatile uint64_t t2 = UINT64_MAX;
volatile int32_t x13 = INT32_MIN;
volatile uint32_t t3 = UINT32_MAX;
uint64_t x17 = 21079927LLU;
int16_t x19 = INT16_MIN;
int32_t x24 = -76;
volatile int32_t x28 = INT32_MAX;
int32_t x30 = INT32_MIN;
volatile int32_t t7 = -5142453;
static int32_t x42 = -18017;
int64_t x50 = INT64_MIN;
volatile int64_t x55 = 19740963681167LL;
static uint32_t x56 = 23U;
static volatile uint32_t t14 = UINT32_MAX;
static int64_t x61 = -1LL;
volatile int32_t x71 = INT32_MIN;
int8_t x76 = INT8_MAX;
volatile int64_t t20 = 365103LL;
int8_t x94 = INT8_MIN;
int8_t x97 = 13;
volatile uint32_t x99 = UINT32_MAX;
static int32_t t24 = 610;
uint32_t x101 = 1U;
volatile uint8_t x104 = 49U;
static uint32_t x105 = 8916934U;
volatile int16_t x106 = -1;
static int64_t x117 = -1989498LL;
int16_t x118 = INT16_MIN;
int8_t x120 = INT8_MAX;
int32_t x125 = INT32_MAX;
static volatile int64_t t31 = -1LL;
volatile int64_t t32 = 21LL;
int64_t x134 = -453321964987585LL;
int16_t x140 = -342;
int32_t t34 = -9373441;
uint64_t x148 = 0LLU;
uint32_t t36 = UINT32_MAX;
static int64_t x150 = INT64_MIN;
uint8_t x155 = UINT8_MAX;
static int16_t x158 = -2205;
int8_t x159 = INT8_MIN;
static int32_t t39 = 60979;
int64_t x161 = -1819219LL;
uint64_t x166 = 14509854LLU;
static int64_t x167 = INT64_MIN;
int64_t x170 = INT64_MIN;
int8_t x178 = -1;
volatile int32_t t44 = -29055255;
uint16_t x187 = 180U;
int32_t t46 = 2;
volatile int64_t x194 = -269280084LL;
int16_t x195 = -1;
int8_t x202 = -1;
int16_t x206 = -1;
volatile int16_t x212 = INT16_MAX;
int64_t x213 = INT64_MIN;
static int8_t x224 = -7;
volatile uint32_t x227 = UINT32_MAX;
int64_t x232 = 7828939LL;
volatile int16_t x238 = INT16_MIN;
volatile int16_t x241 = INT16_MIN;
volatile int8_t x243 = INT8_MAX;
volatile int32_t t60 = 67;
int32_t t61 = -1819;
int8_t x251 = INT8_MIN;
uint32_t x261 = UINT32_MAX;
static int8_t x284 = INT8_MAX;
uint16_t x285 = UINT16_MAX;
static int64_t x286 = 107480413LL;
static volatile uint64_t x296 = 2146604694907862LLU;
uint16_t x297 = UINT16_MAX;
int32_t x300 = -2;
uint32_t t75 = 784U;
int16_t x310 = INT16_MIN;
uint32_t x311 = UINT32_MAX;
volatile uint32_t t77 = 4U;
int32_t x313 = INT32_MAX;
volatile uint32_t x328 = 1U;
int64_t x331 = INT64_MAX;
int16_t x332 = 59;
volatile int64_t t84 = 109214675365LL;
uint16_t x345 = UINT16_MAX;
int8_t x349 = INT8_MIN;
int8_t x350 = INT8_MIN;
int8_t x351 = 15;
uint64_t x352 = 586337LLU;
int16_t x353 = INT16_MAX;
uint16_t x357 = 3948U;
int16_t x363 = INT16_MAX;
int16_t x365 = 125;
volatile int16_t x366 = -1;
volatile int32_t x372 = -1;
int8_t x373 = -1;
int32_t x379 = -140;
volatile int32_t t94 = -96033;
int8_t x387 = 2;
int64_t x389 = 13773LL;
uint8_t x393 = 6U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x3 = -1;
	static int8_t x4 = -1;
	static int64_t t0 = -1102LL;

	t0 = (x1|(x2-(x3==x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x7 = -1;

	t1 = (x5|(x6-(x7==x8)));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint64_t x10 = UINT64_MAX;
	static int64_t x11 = INT64_MAX;

	t2 = (x9|(x10-(x11==x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = UINT32_MAX;
	int8_t x15 = -1;
	uint32_t x16 = 1002150U;

	t3 = (x13|(x14-(x15==x16)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -1LL;
	static uint64_t x20 = 3895LLU;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17|(x18-(x19==x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int32_t x22 = 1;
	static int32_t x23 = INT32_MIN;
	uint32_t t5 = UINT32_MAX;

	t5 = (x21|(x22-(x23==x24)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint16_t x26 = 32670U;
	int8_t x27 = INT8_MAX;
	volatile int32_t t6 = 8167380;

	t6 = (x25|(x26-(x27==x28)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int8_t x31 = 31;
	volatile int8_t x32 = -1;

	t7 = (x29|(x30-(x31==x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = 841U;
	volatile uint8_t x36 = 13U;
	volatile int64_t t8 = 47739329LL;

	t8 = (x33|(x34-(x35==x36)));

	if (t8 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x38 = 124U;
	int16_t x39 = INT16_MIN;
	int8_t x40 = -10;
	static int32_t t9 = -3889;

	t9 = (x37|(x38-(x39==x40)));

	if (t9 != -2147483524) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = -25238LL;

	t10 = (x41|(x42-(x43==x44)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint64_t x46 = UINT64_MAX;
	static volatile int64_t x47 = INT64_MAX;
	volatile uint16_t x48 = UINT16_MAX;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x45|(x46-(x47==x48)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	volatile int64_t t12 = -16735355956139LL;

	t12 = (x49|(x50-(x51==x52)));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 6904249802LLU;
	static int8_t x54 = INT8_MAX;
	static uint64_t t13 = 86619208367LLU;

	t13 = (x53|(x54-(x55==x56)));

	if (t13 != 6904249855LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static uint32_t x58 = UINT32_MAX;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;

	t14 = (x57|(x58-(x59==x60)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 0;
	static int16_t x63 = 5;
	static volatile uint64_t x64 = UINT64_MAX;
	int64_t t15 = -5922688133296177LL;

	t15 = (x61|(x62-(x63==x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x65 = 6U;
	volatile uint32_t x66 = 1028950455U;
	uint8_t x67 = 0U;
	volatile int8_t x68 = INT8_MAX;
	static uint32_t t16 = 322452U;

	t16 = (x65|(x66-(x67==x68)));

	if (t16 != 1028950455U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int64_t x70 = INT64_MAX;
	static volatile int8_t x72 = 6;
	volatile int64_t t17 = -1889840935795206LL;

	t17 = (x69|(x70-(x71==x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static uint8_t x74 = UINT8_MAX;
	int32_t x75 = INT32_MIN;
	int64_t t18 = 1628154513098LL;

	t18 = (x73|(x74-(x75==x76)));

	if (t18 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 16;
	static volatile int16_t x78 = INT16_MIN;
	int32_t x79 = INT32_MIN;
	static int32_t x80 = -1;
	int32_t t19 = -97;

	t19 = (x77|(x78-(x79==x80)));

	if (t19 != -32752) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MIN;
	uint32_t x83 = UINT32_MAX;
	static int8_t x84 = INT8_MIN;

	t20 = (x81|(x82-(x83==x84)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -1;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = 3U;
	int16_t x88 = -11532;
	static int64_t t21 = -70783713941343584LL;

	t21 = (x85|(x86-(x87==x88)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 11;
	int8_t x90 = INT8_MIN;
	static uint32_t x91 = 0U;
	int32_t x92 = INT32_MAX;
	int32_t t22 = -9345347;

	t22 = (x89|(x90-(x91==x92)));

	if (t22 != -117) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	static int64_t x95 = -1LL;
	static int16_t x96 = 31;
	volatile int32_t t23 = 428325826;

	t23 = (x93|(x94-(x95==x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = 13382;
	int8_t x100 = INT8_MIN;

	t24 = (x97|(x98-(x99==x100)));

	if (t24 != 13391) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = INT16_MAX;
	int32_t x103 = 5;
	volatile uint32_t t25 = 108633816U;

	t25 = (x101|(x102-(x103==x104)));

	if (t25 != 32767U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x107 = 2437U;
	int64_t x108 = INT64_MAX;
	static volatile uint32_t t26 = UINT32_MAX;

	t26 = (x105|(x106-(x107==x108)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 460108U;
	volatile uint32_t x110 = UINT32_MAX;
	volatile int16_t x111 = INT16_MIN;
	volatile uint8_t x112 = 0U;
	uint32_t t27 = UINT32_MAX;

	t27 = (x109|(x110-(x111==x112)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static volatile uint32_t x114 = 255U;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	uint32_t t28 = 75U;

	t28 = (x113|(x114-(x115==x116)));

	if (t28 != 4294934782U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x119 = 3;
	int64_t t29 = 123245978663LL;

	t29 = (x117|(x118-(x119==x120)));

	if (t29 != -23418LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MAX;
	int8_t x122 = 3;
	uint64_t x123 = UINT64_MAX;
	uint16_t x124 = 0U;
	int32_t t30 = 4;

	t30 = (x121|(x122-(x123==x124)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x126 = -467853LL;
	uint32_t x127 = 826001087U;
	uint64_t x128 = 1LLU;

	t31 = (x125|(x126-(x127==x128)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 40U;
	int64_t x130 = -1LL;
	volatile int64_t x131 = 54LL;
	int8_t x132 = INT8_MIN;

	t32 = (x129|(x130-(x131==x132)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = UINT32_MAX;
	static int16_t x135 = INT16_MAX;
	volatile int16_t x136 = 4;
	volatile int64_t t33 = -53926LL;

	t33 = (x133|(x134-(x135==x136)));

	if (t33 != -453320913190913LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 39U;
	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = INT32_MAX;

	t34 = (x137|(x138-(x139==x140)));

	if (t34 != -89) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int16_t x142 = 1739;
	int8_t x143 = INT8_MAX;
	static uint32_t x144 = 63946U;
	int32_t t35 = 0;

	t35 = (x141|(x142-(x143==x144)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	volatile uint32_t x146 = UINT32_MAX;
	int8_t x147 = INT8_MAX;

	t36 = (x145|(x146-(x147==x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	static uint32_t x151 = 253U;
	int64_t x152 = 907879868054791795LL;
	volatile int64_t t37 = 414627236346890LL;

	t37 = (x149|(x150-(x151==x152)));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 5U;
	int64_t x154 = INT64_MIN;
	volatile uint32_t x156 = 532U;
	static volatile int64_t t38 = 2267302865897281LL;

	t38 = (x153|(x154-(x155==x156)));

	if (t38 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 17721;
	static int8_t x160 = INT8_MIN;

	t39 = (x157|(x158-(x159==x160)));

	if (t39 != -2181) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = 548;
	int8_t x163 = -1;
	uint8_t x164 = UINT8_MAX;
	static int64_t t40 = -23472LL;

	t40 = (x161|(x162-(x163==x164)));

	if (t40 != -1818707LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 1U;
	int64_t x168 = 0LL;
	static volatile uint64_t t41 = 848666LLU;

	t41 = (x165|(x166-(x167==x168)));

	if (t41 != 14509855LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -7189;
	int64_t x171 = -441207206LL;
	static int8_t x172 = -1;
	int64_t t42 = 63335886660380LL;

	t42 = (x169|(x170-(x171==x172)));

	if (t42 != -7189LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -94098153;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = -1;
	static volatile int32_t t43 = -339115;

	t43 = (x173|(x174-(x175==x176)));

	if (t43 != -94044161) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = UINT16_MAX;
	uint64_t x179 = 5079725100347928008LLU;
	volatile int8_t x180 = INT8_MIN;

	t44 = (x177|(x178-(x179==x180)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 6110U;
	uint32_t x182 = 133317U;
	volatile uint16_t x183 = UINT16_MAX;
	uint32_t x184 = 118255U;
	volatile uint32_t t45 = 9U;

	t45 = (x181|(x182-(x183==x184)));

	if (t45 != 139231U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int8_t x186 = -1;
	static int64_t x188 = -1LL;

	t46 = (x185|(x186-(x187==x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MIN;
	volatile int64_t x190 = 20473LL;
	static uint64_t x191 = 4595020202006LLU;
	static int8_t x192 = -13;
	int64_t t47 = -218822403426LL;

	t47 = (x189|(x190-(x191==x192)));

	if (t47 != -7LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -13298LL;
	volatile int16_t x196 = INT16_MAX;
	int64_t t48 = -1494LL;

	t48 = (x193|(x194-(x195==x196)));

	if (t48 != -9042LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 144LL;
	int64_t x198 = INT64_MAX;
	int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	int64_t t49 = INT64_MAX;

	t49 = (x197|(x198-(x199==x200)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 120U;
	volatile uint8_t x203 = UINT8_MAX;
	int8_t x204 = 14;
	int32_t t50 = 7337;

	t50 = (x201|(x202-(x203==x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 28LL;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MAX;
	volatile int64_t t51 = -5190393LL;

	t51 = (x205|(x206-(x207==x208)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	int32_t x211 = INT32_MIN;
	volatile int32_t t52 = 1527232;

	t52 = (x209|(x210-(x211==x212)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	int32_t x215 = 1;
	int32_t x216 = -1;
	static volatile int64_t t53 = INT64_MIN;

	t53 = (x213|(x214-(x215==x216)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -68435652971LL;
	volatile int64_t x218 = -2047693LL;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 6431U;
	static int64_t t54 = -3342LL;

	t54 = (x217|(x218-(x219==x220)));

	if (t54 != -1388617LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int32_t x222 = 6771;
	int8_t x223 = -2;
	static int32_t t55 = 346893307;

	t55 = (x221|(x222-(x223==x224)));

	if (t55 != -25997) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = 1;
	static int16_t x226 = -1;
	uint16_t x228 = 232U;
	volatile int32_t t56 = -2774504;

	t56 = (x225|(x226-(x227==x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	volatile int64_t x230 = -1LL;
	volatile int16_t x231 = -1;
	uint64_t t57 = UINT64_MAX;

	t57 = (x229|(x230-(x231==x232)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	static int8_t x234 = -12;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 170;

	t58 = (x233|(x234-(x235==x236)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x237 = INT8_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	static uint16_t x240 = 327U;
	int32_t t59 = -18832;

	t59 = (x237|(x238-(x239==x240)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x242 = 0;
	static uint16_t x244 = 1238U;

	t60 = (x241|(x242-(x243==x244)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	static volatile uint16_t x246 = 254U;
	static int64_t x247 = INT64_MAX;
	uint64_t x248 = 127355884LLU;

	t61 = (x245|(x246-(x247==x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	volatile int32_t x250 = 456444734;
	uint16_t x252 = 1U;
	int32_t t62 = -40;

	t62 = (x249|(x250-(x251==x252)));

	if (t62 != -13506) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 0;
	volatile int16_t x254 = INT16_MIN;
	uint8_t x255 = 35U;
	int64_t x256 = 15867113773548132LL;
	volatile int32_t t63 = -164;

	t63 = (x253|(x254-(x255==x256)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	uint64_t x258 = UINT64_MAX;
	volatile int64_t x259 = -1LL;
	static uint32_t x260 = UINT32_MAX;
	static uint64_t t64 = UINT64_MAX;

	t64 = (x257|(x258-(x259==x260)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x262 = INT64_MIN;
	static int8_t x263 = -30;
	volatile int16_t x264 = INT16_MAX;
	static volatile int64_t t65 = 17351973903183LL;

	t65 = (x261|(x262-(x263==x264)));

	if (t65 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MIN;
	uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t66 = 249940119;

	t66 = (x265|(x266-(x267==x268)));

	if (t66 != -2147483393) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	static int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MAX;
	uint8_t x272 = UINT8_MAX;
	volatile int64_t t67 = 2152888104LL;

	t67 = (x269|(x270-(x271==x272)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	int32_t t68 = -279370;

	t68 = (x273|(x274-(x275==x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 56U;
	static int8_t x278 = 0;
	int16_t x279 = -1;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t69 = -764625975;

	t69 = (x277|(x278-(x279==x280)));

	if (t69 != 56) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x282 = INT8_MIN;
	int16_t x283 = 169;
	volatile int32_t t70 = 1847;

	t70 = (x281|(x282-(x283==x284)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x287 = -7454;
	uint64_t x288 = UINT64_MAX;
	int64_t t71 = 5220323861759LL;

	t71 = (x285|(x286-(x287==x288)));

	if (t71 != 107544575LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	int64_t x290 = -1LL;
	static int64_t x291 = 22LL;
	int32_t x292 = INT32_MIN;
	static int64_t t72 = 17176848187LL;

	t72 = (x289|(x290-(x291==x292)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -4928522;
	volatile int16_t x294 = INT16_MAX;
	int16_t x295 = INT16_MIN;
	int32_t t73 = -1;

	t73 = (x293|(x294-(x295==x296)));

	if (t73 != -4915201) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x298 = INT32_MAX;
	int8_t x299 = -5;
	volatile int32_t t74 = INT32_MAX;

	t74 = (x297|(x298-(x299==x300)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -2;
	uint32_t x302 = 0U;
	volatile int16_t x303 = -52;
	int32_t x304 = 26159;

	t75 = (x301|(x302-(x303==x304)));

	if (t75 != 4294967294U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	volatile int16_t x306 = 107;
	int64_t x307 = -1LL;
	uint32_t x308 = 64841128U;
	volatile int32_t t76 = 643980471;

	t76 = (x305|(x306-(x307==x308)));

	if (t76 != -21) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1701690840U;
	volatile uint64_t x312 = 1093935953866387591LLU;

	t77 = (x309|(x310-(x311==x312)));

	if (t77 != 4294950360U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	uint64_t x316 = 95277079662011064LLU;
	volatile int32_t t78 = -12653534;

	t78 = (x313|(x314-(x315==x316)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 1598801U;
	static int8_t x318 = 5;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = -1;
	volatile uint32_t t79 = 425913994U;

	t79 = (x317|(x318-(x319==x320)));

	if (t79 != 1598805U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MIN;
	volatile int16_t x323 = INT16_MAX;
	int8_t x324 = -1;
	int64_t t80 = -87927247379LL;

	t80 = (x321|(x322-(x323==x324)));

	if (t80 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	int16_t x326 = INT16_MAX;
	volatile int16_t x327 = INT16_MIN;
	static int64_t t81 = 44443218LL;

	t81 = (x325|(x326-(x327==x328)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint32_t x330 = UINT32_MAX;
	int64_t t82 = 124LL;

	t82 = (x329|(x330-(x331==x332)));

	if (t82 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -16408990LL;
	uint64_t x334 = UINT64_MAX;
	static volatile int64_t x335 = -5177800675511LL;
	uint8_t x336 = UINT8_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (x333|(x334-(x335==x336)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;
	int64_t x340 = -1LL;

	t84 = (x337|(x338-(x339==x340)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 5879LLU;
	int16_t x342 = INT16_MIN;
	static uint16_t x343 = 222U;
	int64_t x344 = 103892965197472809LL;
	volatile uint64_t t85 = 5133026584650LLU;

	t85 = (x341|(x342-(x343==x344)));

	if (t85 != 18446744073709524727LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x346 = UINT8_MAX;
	int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	int32_t t86 = -13926894;

	t86 = (x345|(x346-(x347==x348)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t t87 = -254010761;

	t87 = (x349|(x350-(x351==x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x354 = 4U;
	int16_t x355 = -13550;
	int16_t x356 = 1268;
	int32_t t88 = -431;

	t88 = (x353|(x354-(x355==x356)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 118908U;
	volatile uint8_t x359 = UINT8_MAX;
	volatile int8_t x360 = INT8_MIN;
	static volatile uint32_t t89 = 60351U;

	t89 = (x357|(x358-(x359==x360)));

	if (t89 != 122748U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 1296U;
	volatile int32_t x362 = INT32_MIN;
	int16_t x364 = 2;
	uint32_t t90 = 2906U;

	t90 = (x361|(x362-(x363==x364)));

	if (t90 != 2147484944U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x367 = 0U;
	int8_t x368 = -1;
	int32_t t91 = 763;

	t91 = (x365|(x366-(x367==x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = -1;
	volatile uint32_t x371 = 2981521U;
	int32_t t92 = 363284650;

	t92 = (x369|(x370-(x371==x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = 7577LL;
	int8_t x375 = -1;
	int16_t x376 = -1;
	volatile int64_t t93 = -23707LL;

	t93 = (x373|(x374-(x375==x376)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 3;
	int16_t x378 = INT16_MAX;
	int64_t x380 = INT64_MIN;

	t94 = (x377|(x378-(x379==x380)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 226;
	int64_t x382 = INT64_MIN;
	static uint32_t x383 = 7126U;
	uint8_t x384 = UINT8_MAX;
	volatile int64_t t95 = -906909LL;

	t95 = (x381|(x382-(x383==x384)));

	if (t95 != -9223372036854775582LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int16_t x386 = INT16_MIN;
	static int64_t x388 = -1LL;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (x385|(x386-(x387==x388)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	static uint16_t x392 = 11U;
	int64_t t97 = 62LL;

	t97 = (x389|(x390-(x391==x392)));

	if (t97 != -51LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x394 = 1U;
	volatile int64_t x395 = -1LL;
	volatile uint8_t x396 = UINT8_MAX;
	int32_t t98 = 106616;

	t98 = (x393|(x394-(x395==x396)));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x401 = 44U;
	int8_t x402 = 7;
	int8_t x403 = INT8_MIN;
	volatile uint32_t x404 = 75011U;
	volatile uint32_t t99 = 43U;

	t99 = (x401|(x402-(x403==x404)));

	if (t99 != 47U) { NG(); } else { ; }
	
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

