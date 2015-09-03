#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
static volatile int32_t t1 = 210657;
int64_t x10 = INT64_MIN;
int16_t x15 = -1;
static int64_t x16 = INT64_MIN;
int64_t t3 = 1LL;
int16_t x24 = INT16_MIN;
volatile int32_t x27 = -1;
volatile int64_t t8 = -8959619527LL;
static int32_t x46 = 6309;
uint32_t t11 = UINT32_MAX;
static uint32_t x52 = 253690580U;
uint8_t x58 = 0U;
static int64_t x59 = -1LL;
int8_t x60 = INT8_MAX;
int16_t x63 = INT16_MIN;
volatile int8_t x68 = 2;
int32_t t16 = -110;
int32_t x75 = 928007290;
int32_t t18 = 134285;
uint32_t t19 = UINT32_MAX;
volatile int32_t t21 = -53063;
int8_t x89 = -1;
static int32_t x94 = -1;
volatile uint32_t x95 = 50U;
int8_t x121 = -1;
int32_t x123 = 559;
uint32_t x125 = UINT32_MAX;
volatile uint64_t x132 = 2745824168273LLU;
int32_t t33 = -56454517;
int16_t x149 = -1;
int32_t x156 = -1322656;
static int8_t x161 = INT8_MIN;
int8_t x170 = INT8_MIN;
uint32_t t42 = UINT32_MAX;
int32_t x173 = 5526335;
uint16_t x175 = UINT16_MAX;
volatile uint64_t x179 = 1368038666LLU;
static volatile int32_t t46 = 3;
int64_t x191 = INT64_MIN;
int8_t x192 = 47;
volatile int32_t t47 = 0;
int32_t x196 = -7905866;
volatile uint32_t t48 = 3604U;
volatile uint8_t x201 = UINT8_MAX;
uint8_t x204 = 32U;
volatile uint32_t t52 = UINT32_MAX;
int8_t x222 = -1;
int32_t t55 = -445167239;
uint64_t x230 = 520LLU;
static uint32_t x231 = UINT32_MAX;
int32_t x233 = INT32_MIN;
volatile int32_t t59 = INT32_MIN;
uint32_t x245 = UINT32_MAX;
static int16_t x247 = -1;
int64_t x254 = INT64_MIN;
int8_t x264 = INT8_MAX;
uint32_t t66 = UINT32_MAX;
int16_t x275 = INT16_MIN;
static volatile int64_t x277 = 550505293LL;
int32_t x279 = INT32_MIN;
static int32_t x281 = -1;
static int64_t x284 = INT64_MIN;
volatile int32_t t71 = -229067;
static volatile int16_t x290 = INT16_MIN;
volatile int32_t t72 = -222590;
int32_t t73 = 1350231;
int8_t x304 = INT8_MAX;
int64_t t75 = -249295LL;
uint16_t x306 = 5U;
int64_t t79 = -40377063795321LL;
int8_t x322 = -1;
volatile int32_t t80 = -1;
uint16_t x330 = 12U;
uint32_t x332 = 1718924U;
int8_t x333 = INT8_MIN;
static int32_t x334 = INT32_MIN;
static int16_t x341 = -1;
int64_t x349 = INT64_MIN;
int64_t x350 = 199189LL;
int16_t x353 = 16115;
int16_t x356 = INT16_MIN;
uint16_t x360 = 23U;
volatile int64_t t89 = -1540857344792799LL;
volatile uint64_t t92 = 5225776051LLU;
int64_t x376 = -1LL;
int8_t x379 = INT8_MIN;
int8_t x380 = INT8_MAX;
volatile int64_t x386 = INT64_MIN;
int64_t t96 = 14919048LL;
uint16_t x395 = UINT16_MAX;
static volatile int64_t t99 = 30017036202690LL;


void f0(void) {
	int8_t x1 = 15;
	int16_t x3 = INT16_MIN;
	static int8_t x4 = -18;
	static volatile int64_t t0 = 1LL;

	t0 = (x1|(x2^(x3<=x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = 3563;
	uint64_t x7 = 12042LLU;
	int32_t x8 = -3982654;

	t1 = (x5|(x6^(x7<=x8)));

	if (t1 != -22) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 528695235648LLU;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = UINT8_MAX;
	volatile uint64_t t2 = 6367622752601365LLU;

	t2 = (x9|(x10^(x11<=x12)));

	if (t2 != 9223372565550011456LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint8_t x14 = 24U;

	t3 = (x13|(x14^(x15<=x16)));

	if (t3 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1591U;
	volatile int16_t x18 = 1605;
	int64_t x19 = 36732048471702LL;
	static uint64_t x20 = 93LLU;
	volatile int32_t t4 = -9;

	t4 = (x17|(x18^(x19<=x20)));

	if (t4 != 1655) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 2U;
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = 0;
	static int32_t t5 = 379081;

	t5 = (x21|(x22^(x23<=x24)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 113;
	static int8_t x26 = 2;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 269;

	t6 = (x25|(x26^(x27<=x28)));

	if (t6 != 115) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -921;
	static int8_t x30 = -1;
	int64_t x31 = INT64_MIN;
	int8_t x32 = -1;
	volatile int32_t t7 = 145;

	t7 = (x29|(x30^(x31<=x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	static int64_t x34 = INT64_MIN;
	uint64_t x35 = UINT64_MAX;
	static int32_t x36 = -1;

	t8 = (x33|(x34^(x35<=x36)));

	if (t8 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -9224;
	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 1U;
	int8_t x40 = -1;
	uint64_t t9 = 15617982476880LLU;

	t9 = (x37|(x38^(x39<=x40)));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MIN;
	static volatile int8_t x43 = -1;
	uint32_t x44 = 83376469U;
	int64_t t10 = -8LL;

	t10 = (x41|(x42^(x43<=x44)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x47 = -1;
	int64_t x48 = 316062141497594083LL;

	t11 = (x45|(x46^(x47<=x48)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -24;
	int64_t x50 = -1LL;
	int8_t x51 = -1;
	static int64_t t12 = 2808377323012482894LL;

	t12 = (x49|(x50^(x51<=x52)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	int16_t x54 = -1;
	uint32_t x55 = 282362U;
	int32_t x56 = -1262;
	int64_t t13 = -557830248757293LL;

	t13 = (x53|(x54^(x55<=x56)));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int64_t t14 = -59697595513LL;

	t14 = (x57|(x58^(x59<=x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	volatile int64_t x62 = -1LL;
	int32_t x64 = INT32_MIN;
	int64_t t15 = -144593238372822LL;

	t15 = (x61|(x62^(x63<=x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = 23;
	int16_t x66 = -1;
	int64_t x67 = -5557810556340LL;

	t16 = (x65|(x66^(x67<=x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -1LL;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 4912615172512630LLU;
	int8_t x72 = 3;
	volatile int64_t t17 = -1096216811721295721LL;

	t17 = (x69|(x70^(x71<=x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = 94U;
	static volatile uint8_t x74 = UINT8_MAX;
	uint8_t x76 = 58U;

	t18 = (x73|(x74^(x75<=x76)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MAX;
	static int32_t x79 = 844613409;
	static uint8_t x80 = UINT8_MAX;

	t19 = (x77|(x78^(x79<=x80)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	uint16_t x82 = 134U;
	volatile int64_t x83 = INT64_MIN;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -853;

	t20 = (x81|(x82^(x83<=x84)));

	if (t20 != -121) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile int16_t x86 = 11495;
	static volatile uint64_t x87 = 622488LLU;
	volatile int64_t x88 = -1LL;

	t21 = (x85|(x86^(x87<=x88)));

	if (t21 != -21274) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x90 = INT8_MIN;
	static volatile int16_t x91 = -33;
	uint64_t x92 = 206898101845491LLU;
	volatile int32_t t22 = 230;

	t22 = (x89|(x90^(x91<=x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 5986LLU;
	volatile uint64_t x96 = UINT64_MAX;
	static uint64_t t23 = 6721820LLU;

	t23 = (x93|(x94^(x95<=x96)));

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x98 = 25;
	volatile int32_t x99 = -5;
	int32_t x100 = -1;
	int32_t t24 = 58;

	t24 = (x97|(x98^(x99<=x100)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 237LLU;
	int16_t x102 = -6853;
	uint32_t x103 = 3922U;
	int64_t x104 = -21704LL;
	static uint64_t t25 = 30741618365LLU;

	t25 = (x101|(x102^(x103<=x104)));

	if (t25 != 18446744073709544959LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint64_t x106 = UINT64_MAX;
	uint8_t x107 = UINT8_MAX;
	static volatile int64_t x108 = -1LL;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x105|(x106^(x107<=x108)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MIN;
	int16_t x110 = -1;
	int64_t x111 = 51803298LL;
	int64_t x112 = 39338746676LL;
	int32_t t27 = -978;

	t27 = (x109|(x110^(x111<=x112)));

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -6689;
	int64_t x114 = 1531053LL;
	volatile int16_t x115 = INT16_MIN;
	static int8_t x116 = 0;
	int64_t t28 = 982287LL;

	t28 = (x113|(x114^(x115<=x116)));

	if (t28 != -513LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	static int16_t x119 = 9;
	int8_t x120 = INT8_MAX;
	int32_t t29 = -9271;

	t29 = (x117|(x118^(x119<=x120)));

	if (t29 != -32641) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = UINT8_MAX;
	int64_t x124 = 45LL;
	static volatile int32_t t30 = 4062767;

	t30 = (x121|(x122^(x123<=x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	int16_t x128 = 222;
	volatile int64_t t31 = -10794LL;

	t31 = (x125|(x126^(x127<=x128)));

	if (t31 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 105397;
	uint32_t x130 = 446U;
	static int64_t x131 = 51321023628551054LL;
	volatile uint32_t t32 = 898204900U;

	t32 = (x129|(x130^(x131<=x132)));

	if (t32 != 105407U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 1528;
	static int16_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = -93718509LL;

	t33 = (x133|(x134^(x135<=x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = INT16_MAX;
	int64_t x139 = INT64_MAX;
	volatile int32_t x140 = -220;
	volatile int32_t t34 = 0;

	t34 = (x137|(x138^(x139<=x140)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint32_t x142 = UINT32_MAX;
	static uint64_t x143 = 74LLU;
	static uint32_t x144 = UINT32_MAX;
	volatile int64_t t35 = 458057538114316LL;

	t35 = (x141|(x142^(x143<=x144)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	volatile int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MAX;
	int16_t x148 = -14;
	volatile int64_t t36 = 2026897104LL;

	t36 = (x145|(x146^(x147<=x148)));

	if (t36 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -1;
	int8_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int32_t t37 = 3;

	t37 = (x149|(x150^(x151<=x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MIN;
	volatile uint32_t x155 = UINT32_MAX;
	volatile int32_t t38 = -708;

	t38 = (x153|(x154^(x155<=x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 24038662U;
	int64_t x158 = -1LL;
	static volatile uint16_t x159 = 1234U;
	volatile uint64_t x160 = 2174853093614004876LLU;
	static volatile int64_t t39 = -1009392064070961LL;

	t39 = (x157|(x158^(x159<=x160)));

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = 89LL;
	uint32_t x163 = 2870U;
	int16_t x164 = INT16_MIN;
	volatile int64_t t40 = 12LL;

	t40 = (x161|(x162^(x163<=x164)));

	if (t40 != -40LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	uint16_t x166 = 24097U;
	int64_t x167 = -1LL;
	static uint64_t x168 = 11173281619137LLU;
	static int64_t t41 = 37LL;

	t41 = (x165|(x166^(x167<=x168)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	static int8_t x171 = -13;
	volatile int8_t x172 = -1;

	t42 = (x169|(x170^(x171<=x172)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = INT16_MAX;
	volatile int8_t x176 = -1;
	int32_t t43 = -3727941;

	t43 = (x173|(x174^(x175<=x176)));

	if (t43 != 5537791) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = 1264456LL;
	static int8_t x180 = INT8_MIN;
	volatile int64_t t44 = 687439407488372LL;

	t44 = (x177|(x178^(x179<=x180)));

	if (t44 != -9223372036853511351LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	static int8_t x183 = -1;
	static int16_t x184 = 672;
	int32_t t45 = -8752623;

	t45 = (x181|(x182^(x183<=x184)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int8_t x186 = -1;
	static uint64_t x187 = UINT64_MAX;
	volatile int16_t x188 = -7;

	t46 = (x185|(x186^(x187<=x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 2U;
	int8_t x190 = INT8_MIN;

	t47 = (x189|(x190^(x191<=x192)));

	if (t47 != -125) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 748061668U;
	static int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MIN;

	t48 = (x193|(x194^(x195<=x196)));

	if (t48 != 748093439U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	volatile uint64_t x198 = 25834563543LLU;
	int32_t x199 = INT32_MAX;
	int32_t x200 = -1;
	volatile uint64_t t49 = 1174055449641349373LLU;

	t49 = (x197|(x198^(x199<=x200)));

	if (t49 != 18446744071626827735LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x202 = -1;
	int8_t x203 = -1;
	int32_t t50 = 179074798;

	t50 = (x201|(x202^(x203<=x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	static volatile int64_t x206 = INT64_MAX;
	int64_t x207 = -19351198684LL;
	uint32_t x208 = UINT32_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = (x205|(x206^(x207<=x208)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = UINT32_MAX;
	uint8_t x210 = 13U;
	int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MIN;

	t52 = (x209|(x210^(x211<=x212)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = 0U;
	int64_t x214 = -1LL;
	int8_t x215 = 1;
	static int32_t x216 = -1;
	static int64_t t53 = 413420319046095778LL;

	t53 = (x213|(x214^(x215<=x216)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	int16_t x219 = 0;
	int64_t x220 = -491LL;
	int32_t t54 = -10112856;

	t54 = (x217|(x218^(x219<=x220)));

	if (t54 != -32641) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 0;
	static int16_t x223 = -1;
	uint8_t x224 = 7U;

	t55 = (x221|(x222^(x223<=x224)));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 127952321263LLU;
	uint64_t x226 = 14LLU;
	static int64_t x227 = INT64_MAX;
	int8_t x228 = 4;
	volatile uint64_t t56 = 8093748019551LLU;

	t56 = (x225|(x226^(x227<=x228)));

	if (t56 != 127952321263LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int16_t x232 = INT16_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (x229|(x230^(x231<=x232)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = 130;
	uint8_t x236 = 3U;
	uint32_t t58 = UINT32_MAX;

	t58 = (x233|(x234^(x235<=x236)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	volatile uint8_t x238 = 0U;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = INT8_MIN;

	t59 = (x237|(x238^(x239<=x240)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 709120173U;
	static int64_t x242 = -1LL;
	int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MAX;
	int64_t t60 = 1162LL;

	t60 = (x241|(x242^(x243<=x244)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = -1;
	uint16_t x248 = 37U;
	uint32_t t61 = UINT32_MAX;

	t61 = (x245|(x246^(x247<=x248)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MIN;
	uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = INT16_MIN;
	int32_t t62 = 4082601;

	t62 = (x249|(x250^(x251<=x252)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -1;
	volatile int32_t x255 = INT32_MIN;
	int8_t x256 = 0;
	int64_t t63 = 103156950500174855LL;

	t63 = (x253|(x254^(x255<=x256)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x257 = 21U;
	static int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MAX;
	int8_t x260 = -1;
	int32_t t64 = 225;

	t64 = (x257|(x258^(x259<=x260)));

	if (t64 != -107) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 40U;
	uint32_t x262 = 5691671U;
	int64_t x263 = INT64_MIN;
	volatile uint32_t t65 = 2259529U;

	t65 = (x261|(x262^(x263<=x264)));

	if (t65 != 5691710U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	uint16_t x266 = 107U;
	uint64_t x267 = 685901163832410891LLU;
	static int64_t x268 = INT64_MIN;

	t66 = (x265|(x266^(x267<=x268)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 11U;
	int8_t x270 = INT8_MIN;
	static int8_t x271 = 40;
	int8_t x272 = INT8_MAX;
	volatile uint32_t t67 = 7345955U;

	t67 = (x269|(x270^(x271<=x272)));

	if (t67 != 4294967179U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -20;
	uint8_t x274 = UINT8_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 4;

	t68 = (x273|(x274^(x275<=x276)));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 0U;
	int64_t x280 = 916823834034786231LL;
	int64_t t69 = -96392235419500LL;

	t69 = (x277|(x278^(x279<=x280)));

	if (t69 != 550505293LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = UINT8_MAX;
	uint8_t x283 = 25U;
	volatile int32_t t70 = -313;

	t70 = (x281|(x282^(x283<=x284)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int8_t x286 = -1;
	volatile uint64_t x287 = UINT64_MAX;
	uint32_t x288 = UINT32_MAX;

	t71 = (x285|(x286^(x287<=x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x291 = -1LL;
	int32_t x292 = INT32_MAX;

	t72 = (x289|(x290^(x291<=x292)));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	static uint16_t x294 = 3U;
	int64_t x295 = INT64_MIN;
	uint64_t x296 = 1812100LLU;

	t73 = (x293|(x294^(x295<=x296)));

	if (t73 != -125) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	uint8_t x298 = 1U;
	volatile int8_t x299 = 13;
	int16_t x300 = -3;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x297|(x298^(x299<=x300)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = 8839189529266747LL;
	int8_t x303 = INT8_MIN;

	t75 = (x301|(x302^(x303<=x304)));

	if (t75 != -30150LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	int16_t x307 = -7529;
	int8_t x308 = -47;
	int64_t t76 = INT64_MAX;

	t76 = (x305|(x306^(x307<=x308)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = 755053570;
	int8_t x310 = 49;
	uint64_t x311 = 0LLU;
	static uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -20538153;

	t77 = (x309|(x310^(x311<=x312)));

	if (t77 != 755053618) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	int8_t x315 = 25;
	uint8_t x316 = 2U;
	uint32_t t78 = UINT32_MAX;

	t78 = (x313|(x314^(x315<=x316)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -219;
	int64_t x318 = -1LL;
	volatile int8_t x319 = INT8_MAX;
	static int16_t x320 = 3;

	t79 = (x317|(x318^(x319<=x320)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MAX;
	static int8_t x323 = -44;
	static volatile int8_t x324 = -1;

	t80 = (x321|(x322^(x323<=x324)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = 34U;
	int32_t x327 = -5243435;
	int16_t x328 = 5;
	static volatile int32_t t81 = 1;

	t81 = (x325|(x326^(x327<=x328)));

	if (t81 != -32733) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = UINT64_MAX;
	volatile int16_t x331 = INT16_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x329|(x330^(x331<=x332)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x335 = INT32_MIN;
	volatile int16_t x336 = -1;
	static int32_t t83 = 19331;

	t83 = (x333|(x334^(x335<=x336)));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = -1LL;
	uint16_t x339 = UINT16_MAX;
	int32_t x340 = INT32_MAX;
	int64_t t84 = -566648LL;

	t84 = (x337|(x338^(x339<=x340)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x342 = 4944414882LLU;
	int32_t x343 = INT32_MIN;
	volatile uint8_t x344 = 0U;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x341|(x342^(x343<=x344)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	uint16_t x346 = 23U;
	int32_t x347 = 38;
	volatile uint64_t x348 = 6586856155692253223LLU;
	int32_t t86 = 2394;

	t86 = (x345|(x346^(x347<=x348)));

	if (t86 != -106) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x351 = 3U;
	uint8_t x352 = UINT8_MAX;
	int64_t t87 = 958808214173603LL;

	t87 = (x349|(x350^(x351<=x352)));

	if (t87 != -9223372036854576620LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -1;
	volatile int64_t x355 = -301160180028LL;
	static int32_t t88 = -204412459;

	t88 = (x353|(x354^(x355<=x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	static uint8_t x358 = 46U;
	uint16_t x359 = UINT16_MAX;

	t89 = (x357|(x358^(x359<=x360)));

	if (t89 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = 186565547586LL;
	uint64_t x362 = UINT64_MAX;
	volatile int16_t x363 = -62;
	uint16_t x364 = 232U;
	uint64_t t90 = 10164902130LLU;

	t90 = (x361|(x362^(x363<=x364)));

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	int16_t x366 = -1;
	uint32_t x367 = 257U;
	int64_t x368 = -1LL;
	static uint32_t t91 = UINT32_MAX;

	t91 = (x365|(x366^(x367<=x368)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 66U;
	volatile uint64_t x370 = 4903371372406LLU;
	uint32_t x371 = 0U;
	static uint64_t x372 = UINT64_MAX;

	t92 = (x369|(x370^(x371<=x372)));

	if (t92 != 4903371372407LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -3997187419387707LL;
	int64_t x374 = -12896043942103LL;
	static volatile uint16_t x375 = 22U;
	int64_t t93 = 1LL;

	t93 = (x373|(x374^(x375<=x376)));

	if (t93 != -3481475350547LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	int32_t t94 = 39764;

	t94 = (x377|(x378^(x379<=x380)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MAX;
	int32_t x382 = 16185;
	volatile int64_t x383 = INT64_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = -263896216;

	t95 = (x381|(x382^(x383<=x384)));

	if (t95 != 16255) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int64_t x387 = -1LL;
	int64_t x388 = -1LL;

	t96 = (x385|(x386^(x387<=x388)));

	if (t96 != -32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MAX;
	static volatile int32_t t97 = -1;

	t97 = (x389|(x390^(x391<=x392)));

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	static int64_t x394 = INT64_MIN;
	uint64_t x396 = 106661LLU;
	int64_t t98 = -13463535908643765LL;

	t98 = (x393|(x394^(x395<=x396)));

	if (t98 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	int64_t x398 = 193LL;
	volatile uint64_t x399 = UINT64_MAX;
	int64_t x400 = INT64_MIN;

	t99 = (x397|(x398^(x399<=x400)));

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

