#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
volatile int8_t x4 = -1;
int8_t x9 = INT8_MAX;
static uint32_t x14 = UINT32_MAX;
static uint64_t x17 = UINT64_MAX;
static uint32_t t5 = 4007U;
uint64_t x28 = 61197239172LLU;
int32_t x29 = INT32_MIN;
int16_t x30 = INT16_MIN;
int64_t t7 = 126042535063706LL;
uint32_t x33 = 14626U;
volatile int32_t x40 = -1;
int64_t t9 = -127257041427LL;
int32_t x41 = -157;
uint32_t t10 = UINT32_MAX;
int16_t x57 = INT16_MAX;
int64_t x58 = -109705636531883046LL;
uint64_t t14 = 0LLU;
uint8_t x66 = UINT8_MAX;
uint64_t t16 = 665682LLU;
volatile int8_t x70 = INT8_MAX;
volatile uint64_t t17 = 269LLU;
uint64_t x76 = 1435499LLU;
uint32_t x85 = 232881105U;
static volatile int64_t t21 = -853691414LL;
uint64_t x92 = 4131298229253211LLU;
int32_t x96 = 489;
static uint64_t t24 = 11489653487864LLU;
volatile int32_t x119 = -1;
int32_t x121 = INT32_MIN;
static volatile int16_t x123 = -1916;
int16_t x124 = -1;
int8_t x132 = INT8_MIN;
int32_t x139 = -1;
int32_t x140 = 1052;
volatile uint16_t x149 = 6602U;
uint32_t x157 = UINT32_MAX;
volatile uint64_t x158 = 8120349LLU;
volatile uint64_t t39 = 16333008038LLU;
volatile uint16_t x173 = 331U;
volatile int32_t t44 = -268;
static uint8_t x184 = 5U;
int64_t x190 = INT64_MIN;
uint16_t x203 = 28242U;
static int16_t x208 = -31;
static uint64_t x219 = 491468LLU;
static uint16_t x221 = 1977U;
int16_t x224 = 4942;
volatile int32_t t55 = 24;
int64_t x228 = 16892LL;
int8_t x242 = INT8_MAX;
uint8_t x246 = UINT8_MAX;
volatile int16_t x248 = -1;
int8_t x257 = INT8_MAX;
uint32_t x258 = 12U;
int64_t t64 = 1046LL;
int64_t x270 = -81854080LL;
uint64_t x271 = 8589331LLU;
int64_t x273 = INT64_MIN;
uint64_t t68 = 511442LLU;
uint64_t x277 = 566225515008061986LLU;
volatile uint32_t x290 = UINT32_MAX;
int8_t x296 = 7;
static int32_t x301 = INT32_MAX;
static uint32_t x302 = UINT32_MAX;
static uint32_t t75 = 588U;
int8_t x305 = 7;
static uint32_t x307 = 22673U;
uint32_t x309 = UINT32_MAX;
volatile int32_t t78 = -10150934;
int8_t x321 = INT8_MIN;
int8_t x325 = INT8_MIN;
volatile int64_t t81 = -951188568013116080LL;
volatile uint32_t x337 = UINT32_MAX;
int32_t x340 = INT32_MIN;
int64_t x348 = -1LL;
volatile int8_t x354 = INT8_MAX;
uint8_t x361 = UINT8_MAX;
int32_t x367 = -63101395;
volatile int64_t t93 = -366486959651480LL;
uint16_t x377 = 0U;
int64_t x381 = 4591071410778LL;
int32_t x382 = INT32_MIN;
int16_t x383 = -1;
volatile uint8_t x400 = UINT8_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x3 = INT8_MAX;
	int64_t t0 = -909806829244304LL;

	t0 = (x1|(x2&(x3|x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	volatile int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	static uint32_t x8 = 447114U;
	int64_t t1 = 3644200649036250LL;

	t1 = (x5|(x6&(x7|x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -650788881011LL;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	static int64_t t2 = -58999811958LL;

	t2 = (x9|(x10&(x11|x12)));

	if (t2 != -650788880897LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int16_t x15 = 11;
	int64_t x16 = -16035262194444LL;
	volatile int64_t t3 = 6331020LL;

	t3 = (x13|(x14&(x15|x16)));

	if (t3 != 2145714175LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = UINT32_MAX;
	volatile int16_t x19 = INT16_MIN;
	uint8_t x20 = 2U;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17|(x18&(x19|x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint32_t x22 = 24595925U;
	volatile uint32_t x23 = UINT32_MAX;
	volatile uint16_t x24 = UINT16_MAX;

	t5 = (x21|(x22&(x23|x24)));

	if (t5 != 24595967U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = -1LL;
	uint64_t t6 = 10141248609LLU;

	t6 = (x25|(x26&(x27|x28)));

	if (t6 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = INT64_MAX;
	volatile int16_t x32 = 1384;

	t7 = (x29|(x30&(x31|x32)));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 54U;
	static volatile int64_t x35 = INT64_MAX;
	int64_t x36 = -1LL;
	int64_t t8 = 17504201005478LL;

	t8 = (x33|(x34&(x35|x36)));

	if (t8 != 14646LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 33185435LL;
	int64_t x38 = 10205974LL;
	uint16_t x39 = 2041U;

	t9 = (x37|(x38&(x39|x40)));

	if (t9 != 33292191LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MAX;
	int8_t x44 = INT8_MIN;

	t10 = (x41|(x42&(x43|x44)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = -1;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = -62LL;
	volatile int64_t t11 = 86925171LL;

	t11 = (x45|(x46&(x47|x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = -114;
	int64_t x51 = 44LL;
	uint8_t x52 = UINT8_MAX;
	static int64_t t12 = 18752842LL;

	t12 = (x49|(x50&(x51|x52)));

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 21U;
	static int16_t x54 = INT16_MIN;
	volatile int64_t x55 = -11LL;
	int32_t x56 = 944;
	int64_t t13 = 473247411561287LL;

	t13 = (x53|(x54&(x55|x56)));

	if (t13 != -32747LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x59 = UINT64_MAX;
	int32_t x60 = -47;

	t14 = (x57|(x58&(x59|x60)));

	if (t14 != 18337038437177688063LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	int32_t x63 = 16005;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 822137;

	t15 = (x61|(x62&(x63|x64)));

	if (t15 != -32641) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static uint64_t x67 = 626988873002602LLU;
	int64_t x68 = 3126114704239532825LL;

	t16 = (x65|(x66&(x67|x68)));

	if (t16 != 18446744071562068091LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 3U;
	int8_t x71 = 1;
	static uint64_t x72 = 23729537087185LLU;

	t17 = (x69|(x70&(x71|x72)));

	if (t17 != 83LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MAX;
	int64_t x75 = -1LL;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x73|(x74&(x75|x76)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 3;
	static int16_t x78 = -1;
	static int64_t x79 = INT64_MIN;
	int16_t x80 = -460;
	volatile int64_t t19 = -1827390LL;

	t19 = (x77|(x78&(x79|x80)));

	if (t19 != -457LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	volatile int16_t x82 = -5124;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = INT64_MIN;
	static int64_t t20 = 126171LL;

	t20 = (x81|(x82&(x83|x84)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = 1LL;
	static int32_t x87 = INT32_MAX;
	int32_t x88 = -15;

	t21 = (x85|(x86&(x87|x88)));

	if (t21 != 232881105LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	static int16_t x90 = 236;
	int16_t x91 = INT16_MIN;
	uint64_t t22 = 2511700220509335539LLU;

	t22 = (x89|(x90&(x91|x92)));

	if (t22 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 1306363U;
	uint64_t x94 = 13391030622668794LLU;
	static int16_t x95 = -5638;
	uint64_t t23 = 205LLU;

	t23 = (x93|(x94&(x95|x96)));

	if (t23 != 13391030622875643LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 175U;
	volatile uint64_t x98 = 1888101467LLU;
	static volatile int32_t x99 = -471183591;
	volatile int16_t x100 = INT16_MIN;

	t24 = (x97|(x98&(x99|x100)));

	if (t24 != 1888093375LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	int32_t x103 = -7434314;
	int64_t x104 = 2084413297358LL;
	volatile int64_t t25 = 8416713625LL;

	t25 = (x101|(x102&(x103|x104)));

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	volatile int64_t t26 = 26195244139700832LL;

	t26 = (x105|(x106&(x107|x108)));

	if (t26 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	uint16_t x110 = UINT16_MAX;
	static int8_t x111 = INT8_MIN;
	int64_t x112 = 3508747306LL;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x109|(x110&(x111|x112)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MAX;
	uint16_t x114 = 28U;
	int64_t x115 = -1LL;
	int64_t x116 = 30347448150LL;
	static int64_t t28 = 211743LL;

	t28 = (x113|(x114&(x115|x116)));

	if (t28 != 127LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	int64_t x118 = -11417553LL;
	uint8_t x120 = 0U;
	volatile int64_t t29 = -94834LL;

	t29 = (x117|(x118&(x119|x120)));

	if (t29 != -11417553LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = 408LL;
	int64_t t30 = 117453274LL;

	t30 = (x121|(x122&(x123|x124)));

	if (t30 != -2147483240LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = -1;
	int16_t x127 = -1;
	int16_t x128 = 67;
	volatile int32_t t31 = -3495902;

	t31 = (x125|(x126&(x127|x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -21089;
	int16_t x130 = -6731;
	int8_t x131 = 1;
	volatile int32_t t32 = 942699;

	t32 = (x129|(x130&(x131|x132)));

	if (t32 != -4705) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static int8_t x134 = -1;
	int8_t x135 = 1;
	int32_t x136 = 265590828;
	int32_t t33 = -20;

	t33 = (x133|(x134&(x135|x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = UINT64_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = (x137|(x138&(x139|x140)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	static uint16_t x143 = 201U;
	static int32_t x144 = INT32_MIN;
	int32_t t35 = 188487294;

	t35 = (x141|(x142&(x143|x144)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 0;
	int32_t x146 = INT32_MAX;
	int16_t x147 = 3916;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -743;

	t36 = (x145|(x146&(x147|x148)));

	if (t36 != 4095) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	static int32_t x151 = INT32_MIN;
	volatile int8_t x152 = -1;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x149|(x150&(x151|x152)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = -1;
	uint32_t x155 = 844U;
	int16_t x156 = INT16_MIN;
	uint32_t t38 = UINT32_MAX;

	t38 = (x153|(x154&(x155|x156)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MIN;

	t39 = (x157|(x158&(x159|x160)));

	if (t39 != 4294967295LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static volatile uint64_t x162 = 3785701LLU;
	volatile int8_t x163 = -1;
	int8_t x164 = INT8_MIN;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x161|(x162&(x163|x164)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static uint8_t x166 = 4U;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = 0;
	uint32_t t41 = 1318669738U;

	t41 = (x165|(x166&(x167|x168)));

	if (t41 != 4294934532U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	static int64_t t42 = -4176664971529149LL;

	t42 = (x169|(x170&(x171|x172)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x174 = 1U;
	int16_t x175 = 14959;
	int64_t x176 = INT64_MAX;
	int64_t t43 = 8597LL;

	t43 = (x173|(x174&(x175|x176)));

	if (t43 != 331LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint8_t x178 = UINT8_MAX;
	static uint16_t x179 = 75U;
	static uint16_t x180 = 94U;

	t44 = (x177|(x178&(x179|x180)));

	if (t44 != -32673) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	uint64_t x183 = UINT64_MAX;
	volatile uint64_t t45 = 19780994280LLU;

	t45 = (x181|(x182&(x183|x184)));

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MIN;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = 12;

	t46 = (x185|(x186&(x187|x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -122923;
	int16_t x191 = INT16_MIN;
	int16_t x192 = -1;
	volatile int64_t t47 = -34411836458558LL;

	t47 = (x189|(x190&(x191|x192)));

	if (t47 != -122923LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile uint16_t x194 = UINT16_MAX;
	static int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = 84922305;

	t48 = (x193|(x194&(x195|x196)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MIN;
	int8_t x199 = -1;
	volatile int32_t x200 = 216487;
	uint32_t t49 = UINT32_MAX;

	t49 = (x197|(x198&(x199|x200)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MIN;
	int16_t x204 = 837;
	int64_t t50 = 22631007LL;

	t50 = (x201|(x202&(x203|x204)));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	volatile uint8_t x206 = 15U;
	static int16_t x207 = INT16_MIN;
	volatile int32_t t51 = 22848;

	t51 = (x205|(x206&(x207|x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MAX;
	int8_t x210 = 46;
	int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MIN;
	int64_t t52 = INT64_MAX;

	t52 = (x209|(x210&(x211|x212)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	volatile uint64_t x214 = 21196840479864789LLU;
	int32_t x215 = 12;
	static uint32_t x216 = 1304U;
	uint64_t t53 = 19LLU;

	t53 = (x213|(x214&(x215|x216)));

	if (t53 != 18446744071562069268LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MAX;
	uint32_t x218 = 52U;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t54 = 144LLU;

	t54 = (x217|(x218&(x219|x220)));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = 6;
	uint16_t x223 = 161U;

	t55 = (x221|(x222&(x223|x224)));

	if (t55 != 1983) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	uint16_t x226 = 1442U;
	int16_t x227 = 12;
	volatile int64_t t56 = 711LL;

	t56 = (x225|(x226&(x227|x228)));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	uint64_t x231 = 97LLU;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x229|(x230&(x231|x232)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int16_t x234 = 35;
	int8_t x235 = INT8_MIN;
	int8_t x236 = -1;
	volatile int64_t t58 = 139249453216372698LL;

	t58 = (x233|(x234&(x235|x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = 11948502LLU;
	uint32_t x238 = UINT32_MAX;
	static volatile int64_t x239 = INT64_MIN;
	volatile int8_t x240 = 21;
	volatile uint64_t t59 = 34768990831282647LLU;

	t59 = (x237|(x238&(x239|x240)));

	if (t59 != 11948503LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = 243LL;
	int64_t x243 = INT64_MAX;
	uint8_t x244 = 18U;
	volatile int64_t t60 = -15942602LL;

	t60 = (x241|(x242&(x243|x244)));

	if (t60 != 255LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int16_t x247 = 2;
	int32_t t61 = -1933;

	t61 = (x245|(x246&(x247|x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 1;
	int16_t x250 = INT16_MIN;
	volatile uint8_t x251 = 7U;
	int64_t x252 = INT64_MIN;
	volatile int64_t t62 = 186404LL;

	t62 = (x249|(x250&(x251|x252)));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x253 = 3;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 17032039402LLU;
	volatile uint64_t t63 = 3847897LLU;

	t63 = (x253|(x254&(x255|x256)));

	if (t63 != 4294953963LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x259 = -1LL;
	uint32_t x260 = 350028U;

	t64 = (x257|(x258&(x259|x260)));

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	uint64_t x262 = 439LLU;
	int32_t x263 = INT32_MIN;
	static uint16_t x264 = UINT16_MAX;
	volatile uint64_t t65 = 26LLU;

	t65 = (x261|(x262&(x263|x264)));

	if (t65 != 18446744071562068407LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 8833380U;
	volatile uint32_t x266 = 4060101U;
	int64_t x267 = 50795472LL;
	uint16_t x268 = 7U;
	static volatile int64_t t66 = 7LL;

	t66 = (x265|(x266&(x267|x268)));

	if (t66 != 8903653LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	uint64_t x272 = 3762LLU;
	uint64_t t67 = 112893211954921LLU;

	t67 = (x269|(x270&(x271|x272)));

	if (t67 != 4294967295LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 622262336671LLU;
	uint32_t x275 = 689U;
	uint16_t x276 = 7U;

	t68 = (x273|(x274&(x275|x276)));

	if (t68 != 9223372036854775959LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = -1;
	int8_t x280 = 6;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x277|(x278&(x279|x280)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	static int16_t x282 = -247;
	uint8_t x283 = 3U;
	int32_t x284 = -1;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x281|(x282&(x283|x284)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 2205U;
	uint16_t x286 = 2U;
	static uint16_t x287 = 0U;
	volatile int16_t x288 = 791;
	volatile uint32_t t71 = 94362018U;

	t71 = (x285|(x286&(x287|x288)));

	if (t71 != 2207U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x291 = 0U;
	static int16_t x292 = -1134;
	uint32_t t72 = 2694U;

	t72 = (x289|(x290&(x291|x292)));

	if (t72 != 4294966162U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MAX;
	static int8_t x294 = INT8_MIN;
	static int64_t x295 = 105759LL;
	volatile int64_t t73 = 3509175389947669108LL;

	t73 = (x293|(x294&(x295|x296)));

	if (t73 != 105855LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	static int64_t x298 = -1LL;
	int8_t x299 = 59;
	int64_t x300 = -138186700815524754LL;
	volatile int64_t t74 = 4127LL;

	t74 = (x297|(x298&(x299|x300)));

	if (t74 != -138186698688299009LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x303 = 49;
	int16_t x304 = 0;

	t75 = (x301|(x302&(x303|x304)));

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = 0LL;
	volatile uint16_t x308 = 1U;
	volatile int64_t t76 = -5LL;

	t76 = (x305|(x306&(x307|x308)));

	if (t76 != 7LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = UINT32_MAX;
	uint16_t x311 = 6956U;
	int32_t x312 = INT32_MIN;
	uint32_t t77 = UINT32_MAX;

	t77 = (x309|(x310&(x311|x312)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	static int16_t x314 = -101;
	int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MAX;

	t78 = (x313|(x314&(x315|x316)));

	if (t78 != -101) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MAX;
	static int8_t x318 = INT8_MIN;
	uint32_t x319 = UINT32_MAX;
	volatile int64_t x320 = -1LL;
	volatile int64_t t79 = 53651655065963LL;

	t79 = (x317|(x318&(x319|x320)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = 1U;
	static int32_t t80 = 331351483;

	t80 = (x321|(x322&(x323|x324)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x326 = INT64_MAX;
	int64_t x327 = -91LL;
	volatile int32_t x328 = 2386;

	t81 = (x325|(x326&(x327|x328)));

	if (t81 != -9LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = -2;
	int8_t x331 = 2;
	static int16_t x332 = INT16_MIN;
	int32_t t82 = 718035721;

	t82 = (x329|(x330&(x331|x332)));

	if (t82 != -32766) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 3722U;
	int32_t x334 = INT32_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile int16_t x336 = INT16_MIN;
	uint32_t t83 = 208U;

	t83 = (x333|(x334&(x335|x336)));

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = -1;
	uint32_t x339 = 461U;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x337|(x338&(x339|x340)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	static uint64_t x342 = 3814703310783LLU;
	uint8_t x343 = 21U;
	int32_t x344 = -757633413;
	uint64_t t85 = 1LLU;

	t85 = (x341|(x342&(x343|x344)));

	if (t85 != 3813964588671LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x345|(x346&(x347|x348)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 8U;
	uint16_t x350 = 1354U;
	uint16_t x351 = UINT16_MAX;
	static int16_t x352 = -1;
	volatile int32_t t87 = 138626;

	t87 = (x349|(x350&(x351|x352)));

	if (t87 != 1354) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 816U;
	static int16_t x355 = INT16_MIN;
	static volatile uint8_t x356 = 7U;
	volatile int32_t t88 = 1;

	t88 = (x353|(x354&(x355|x356)));

	if (t88 != 823) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = 0;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -485;
	uint64_t x360 = 1056103046076763415LLU;
	volatile uint64_t t89 = 226889579589LLU;

	t89 = (x357|(x358&(x359|x360)));

	if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;
	volatile int64_t t90 = 5260813195077LL;

	t90 = (x361|(x362&(x363|x364)));

	if (t90 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = 25LL;
	int16_t x366 = -6932;
	uint64_t x368 = 59977LLU;
	volatile uint64_t t91 = 1854471642LLU;

	t91 = (x365|(x366&(x367|x368)));

	if (t91 != 18446744073646498941LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = UINT16_MAX;
	uint8_t x370 = 7U;
	int8_t x371 = 1;
	int16_t x372 = 53;
	static volatile int32_t t92 = 861485430;

	t92 = (x369|(x370&(x371|x372)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = 4LL;
	int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MIN;
	volatile int32_t x376 = 2549383;

	t93 = (x373|(x374&(x375|x376)));

	if (t93 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x378 = UINT8_MAX;
	static int32_t x379 = -26073901;
	volatile int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 1030506;

	t94 = (x377|(x378&(x379|x380)));

	if (t94 != 211) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x384 = -1LL;
	volatile int64_t t95 = 103105744LL;

	t95 = (x381|(x382&(x383|x384)));

	if (t95 != -248628646LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int32_t x386 = -17537;
	int64_t x387 = -2413940LL;
	int8_t x388 = INT8_MIN;
	static int64_t t96 = 414006844092582LL;

	t96 = (x385|(x386&(x387|x388)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 126U;
	int64_t x390 = -1LL;
	static uint8_t x391 = UINT8_MAX;
	int8_t x392 = INT8_MIN;
	volatile int64_t t97 = 547386410894LL;

	t97 = (x389|(x390&(x391|x392)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	static int32_t x394 = -35;
	volatile int32_t x395 = INT32_MAX;
	uint8_t x396 = 0U;
	static volatile int32_t t98 = -11;

	t98 = (x393|(x394&(x395|x396)));

	if (t98 != -35) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 6175569926345LLU;
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MIN;
	uint64_t t99 = 61296LLU;

	t99 = (x397|(x398&(x399|x400)));

	if (t99 != 6175569936383LLU) { NG(); } else { ; }
	
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

