#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 75U;
static volatile int64_t t1 = -159203716LL;
int8_t x16 = -1;
int8_t x21 = INT8_MIN;
uint16_t x25 = UINT16_MAX;
int32_t x26 = INT32_MIN;
volatile uint64_t t6 = 26087421037LLU;
volatile uint32_t t7 = 122888078U;
int32_t x36 = INT32_MIN;
int64_t x37 = -13090240LL;
int8_t x46 = -1;
int32_t x48 = -1;
static volatile uint64_t x50 = 322285446276647LLU;
static int32_t x58 = INT32_MAX;
uint64_t x63 = 2361999LLU;
static int16_t x64 = -4025;
int8_t x68 = -14;
volatile int64_t t16 = 1009747295LL;
uint32_t x71 = 342U;
static int64_t t18 = -110525270LL;
int16_t x78 = 3750;
uint8_t x84 = 87U;
int16_t x93 = 746;
volatile int16_t x96 = INT16_MIN;
static int64_t t25 = 7173LL;
volatile uint64_t t26 = UINT64_MAX;
int64_t t27 = 88291293831826979LL;
int8_t x113 = 17;
uint32_t x114 = 1405590296U;
int8_t x121 = INT8_MIN;
uint16_t x124 = 911U;
volatile int64_t x125 = 981236688734LL;
uint32_t x126 = 1U;
int8_t x128 = -5;
uint16_t x135 = 4363U;
int8_t x146 = INT8_MIN;
volatile int16_t x149 = INT16_MAX;
int64_t x155 = -1LL;
int64_t x157 = INT64_MAX;
int8_t x159 = INT8_MAX;
int64_t x170 = INT64_MIN;
int32_t x177 = INT32_MIN;
uint64_t x181 = UINT64_MAX;
uint64_t x183 = UINT64_MAX;
uint64_t x184 = 1LLU;
volatile uint64_t t45 = UINT64_MAX;
int8_t x188 = INT8_MAX;
volatile int32_t x190 = INT32_MIN;
volatile int8_t x195 = INT8_MIN;
volatile int8_t x198 = 1;
int64_t t51 = 3543450750183LL;
volatile int64_t x212 = 464929350181387LL;
uint8_t x214 = 14U;
uint16_t x215 = 40U;
int16_t x216 = INT16_MAX;
uint8_t x219 = 3U;
static volatile uint32_t x223 = 1U;
uint64_t t55 = 93103424552125693LLU;
uint32_t x228 = 30U;
static uint32_t t56 = 4U;
int32_t x231 = INT32_MAX;
int8_t x232 = INT8_MAX;
uint32_t x233 = 29291U;
int8_t x234 = INT8_MAX;
int32_t x235 = 62777279;
static uint32_t t58 = 12852362U;
int32_t x242 = 15859;
volatile uint32_t x247 = 12U;
int32_t x252 = INT32_MAX;
volatile uint64_t x253 = UINT64_MAX;
static volatile int16_t x263 = -1;
int32_t x266 = 358252948;
int16_t x279 = INT16_MIN;
static int8_t x280 = INT8_MIN;
int32_t x282 = INT32_MIN;
static uint64_t x286 = UINT64_MAX;
uint64_t t73 = 170700347732878365LLU;
int8_t x299 = INT8_MIN;
volatile uint32_t x304 = UINT32_MAX;
int64_t t75 = 10950068271815652LL;
volatile uint32_t t76 = 2881593U;
int64_t t77 = 177074475777845242LL;
int8_t x319 = INT8_MAX;
int8_t x320 = -1;
static volatile int8_t x324 = 1;
volatile int64_t x330 = 2053LL;
uint32_t x334 = 205762446U;
int16_t x337 = INT16_MAX;
int16_t x341 = INT16_MIN;
uint32_t x347 = UINT32_MAX;
int64_t t86 = 17072LL;
uint8_t x350 = UINT8_MAX;
int8_t x351 = 5;
uint32_t x354 = 169459U;
uint8_t x355 = 3U;
static volatile int8_t x361 = INT8_MIN;
int32_t x368 = -1;
int32_t t92 = -68056854;
int64_t t93 = 3898698266LL;
static uint16_t x382 = UINT16_MAX;
int32_t x384 = -50;
int32_t x394 = INT32_MAX;
int32_t x396 = INT32_MIN;
volatile int32_t t98 = -7431554;
uint64_t x400 = 68938108699929816LLU;


void f0(void) {
	int16_t x1 = 36;
	static volatile int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MAX;
	static int8_t x4 = INT8_MAX;
	static int32_t t0 = 20269026;

	t0 = (x1^((x2&x3)&x4));

	if (t0 != 36) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	uint16_t x7 = 5475U;
	volatile int64_t x8 = INT64_MAX;

	t1 = (x5^((x6&x7)&x8));

	if (t1 != 66LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 170353651491LLU;
	int8_t x10 = INT8_MIN;
	volatile uint32_t x11 = UINT32_MAX;
	volatile int32_t x12 = INT32_MIN;
	volatile uint64_t t2 = 128402450865995498LLU;

	t2 = (x9^((x10&x11)&x12));

	if (t2 != 168206167843LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6U;
	uint64_t x14 = 1517194047073LLU;
	int16_t x15 = 6275;
	uint64_t t3 = 20662128LLU;

	t3 = (x13^((x14&x15)&x16));

	if (t3 != 2055LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 60924U;

	t4 = (x17^((x18&x19)&x20));

	if (t4 != 2147450880U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 0U;
	int64_t x23 = -3375272LL;
	static int8_t x24 = 1;
	int64_t t5 = 203994324445LL;

	t5 = (x21^((x22&x23)&x24));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MAX;
	uint64_t x28 = UINT64_MAX;

	t6 = (x25^((x26&x27)&x28));

	if (t6 != 65535LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 65489560U;
	uint32_t x30 = 3640U;
	static int32_t x31 = 56;
	volatile int32_t x32 = INT32_MIN;

	t7 = (x29^((x30&x31)&x32));

	if (t7 != 65489560U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	static volatile int64_t x35 = 4467756765050241333LL;
	volatile int64_t t8 = -807851LL;

	t8 = (x33^((x34&x35)&x36));

	if (t8 != 4467756763780743423LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x38 = UINT8_MAX;
	static volatile int8_t x39 = INT8_MIN;
	volatile int64_t x40 = INT64_MIN;
	int64_t t9 = -61591LL;

	t9 = (x37^((x38&x39)&x40));

	if (t9 != -13090240LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 0LL;
	int8_t x42 = -1;
	int64_t x43 = -1LL;
	volatile int64_t x44 = INT64_MIN;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x41^((x42&x43)&x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int16_t x47 = INT16_MIN;
	volatile int32_t t11 = -17005034;

	t11 = (x45^((x46&x47)&x48));

	if (t11 != -2147450881) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 21LLU;
	int16_t x51 = INT16_MIN;
	int32_t x52 = 4015003;
	uint64_t t12 = 1022065262720LLU;

	t12 = (x49^((x50&x51)&x52));

	if (t12 != 524309LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 6717U;
	volatile int16_t x54 = 2104;
	int32_t x55 = 205;
	int64_t x56 = INT64_MAX;
	int64_t t13 = -2084002695LL;

	t13 = (x53^((x54&x55)&x56));

	if (t13 != 6709LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MAX;
	uint32_t t14 = 11104218U;

	t14 = (x57^((x58&x59)&x60));

	if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	static volatile uint64_t t15 = 2LLU;

	t15 = (x61^((x62&x63)&x64));

	if (t15 != 18446744071564427264LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static uint8_t x66 = 4U;
	uint32_t x67 = 1685212188U;

	t16 = (x65^((x66&x67)&x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int8_t x70 = INT8_MIN;
	int16_t x72 = 0;
	static int64_t t17 = INT64_MIN;

	t17 = (x69^((x70&x71)&x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 3U;
	int8_t x74 = -33;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;

	t18 = (x73^((x74&x75)&x76));

	if (t18 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x79 = 1U;
	int16_t x80 = INT16_MAX;
	int32_t t19 = INT32_MIN;

	t19 = (x77^((x78&x79)&x80));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int64_t x82 = -243LL;
	int64_t x83 = INT64_MIN;
	int64_t t20 = 483399403854031LL;

	t20 = (x81^((x82&x83)&x84));

	if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 6690148838589LLU;
	uint32_t x86 = 37085U;
	int8_t x87 = 3;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t21 = 1514208798682LLU;

	t21 = (x85^((x86&x87)&x88));

	if (t21 != 6690148838589LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = -1;
	int16_t x91 = INT16_MAX;
	int64_t x92 = -7964817683725LL;
	volatile int64_t t22 = 1632103206015786LL;

	t22 = (x89^((x90&x91)&x92));

	if (t22 != -29965LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = 56;
	int64_t x95 = INT64_MAX;
	volatile int64_t t23 = 199336787739334LL;

	t23 = (x93^((x94&x95)&x96));

	if (t23 != 746LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MAX;
	volatile int64_t x99 = -1LL;
	int16_t x100 = INT16_MIN;
	static int64_t t24 = -15880LL;

	t24 = (x97^((x98&x99)&x100));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 7U;
	static volatile int64_t x102 = INT64_MAX;
	int16_t x103 = -1214;
	uint8_t x104 = 3U;

	t25 = (x101^((x102&x103)&x104));

	if (t25 != 5LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MAX;
	uint8_t x108 = 58U;

	t26 = (x105^((x106&x107)&x108));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int16_t x110 = 4989;
	static int32_t x111 = -1;
	int64_t x112 = -1LL;

	t27 = (x109^((x110&x111)&x112));

	if (t27 != -4990LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x115 = INT32_MAX;
	static int8_t x116 = -2;
	uint32_t t28 = 39U;

	t28 = (x113^((x114&x115)&x116));

	if (t28 != 1405590281U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	volatile uint16_t x118 = UINT16_MAX;
	uint16_t x119 = 23U;
	uint64_t x120 = UINT64_MAX;
	static uint64_t t29 = 11331LLU;

	t29 = (x117^((x118&x119)&x120));

	if (t29 != 32744LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MAX;
	int16_t x123 = -62;
	int32_t t30 = 507;

	t30 = (x121^((x122&x123)&x124));

	if (t30 != -1022) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x127 = -1;
	int64_t t31 = 10165798007137LL;

	t31 = (x125^((x126&x127)&x128));

	if (t31 != 981236688735LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -1;
	int32_t x130 = -1;
	int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 6895;

	t32 = (x129^((x130&x131)&x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 165LL;
	static int16_t x134 = -1;
	int32_t x136 = INT32_MIN;
	volatile int64_t t33 = -201479051285LL;

	t33 = (x133^((x134&x135)&x136));

	if (t33 != 165LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1886446U;
	int8_t x138 = INT8_MIN;
	int16_t x139 = 3;
	volatile int32_t x140 = -1;
	static uint32_t t34 = 18974608U;

	t34 = (x137^((x138&x139)&x140));

	if (t34 != 1886446U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 166LLU;
	int8_t x142 = INT8_MIN;
	volatile uint16_t x143 = 98U;
	int32_t x144 = -994;
	uint64_t t35 = 518732256626LLU;

	t35 = (x141^((x142&x143)&x144));

	if (t35 != 166LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = -1LL;
	int32_t x147 = 31;
	int8_t x148 = -1;
	int64_t t36 = -15LL;

	t36 = (x145^((x146&x147)&x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = -26436;
	static uint32_t x151 = 88213U;
	static volatile int64_t x152 = -1LL;
	int64_t t37 = -682463613LL;

	t37 = (x149^((x150&x151)&x152));

	if (t37 != 92011LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 1383;
	volatile int32_t x154 = -1;
	static int32_t x156 = -1;
	int64_t t38 = 19592LL;

	t38 = (x153^((x154&x155)&x156));

	if (t38 != -1384LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	int32_t x160 = INT32_MAX;
	int64_t t39 = INT64_MAX;

	t39 = (x157^((x158&x159)&x160));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x162 = INT8_MAX;
	int64_t x163 = -1LL;
	volatile int16_t x164 = INT16_MAX;
	uint64_t t40 = 34221362765196315LLU;

	t40 = (x161^((x162&x163)&x164));

	if (t40 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	int8_t x166 = -1;
	uint16_t x167 = 256U;
	static int32_t x168 = -52693423;
	int64_t t41 = INT64_MIN;

	t41 = (x165^((x166&x167)&x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = 84U;
	int64_t t42 = 5LL;

	t42 = (x169^((x170&x171)&x172));

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int32_t x174 = -1;
	int64_t x175 = 762772742LL;
	int16_t x176 = 1;
	volatile int64_t t43 = -27475232852562522LL;

	t43 = (x173^((x174&x175)&x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 10U;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x177^((x178&x179)&x180));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;

	t45 = (x181^((x182&x183)&x184));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 46527;
	static int64_t x186 = INT64_MIN;
	uint64_t x187 = 3127041286121344914LLU;
	volatile uint64_t t46 = 82447627365984LLU;

	t46 = (x185^((x186&x187)&x188));

	if (t46 != 46527LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int64_t x191 = -1LL;
	int32_t x192 = INT32_MIN;
	static volatile int64_t t47 = -385808253007LL;

	t47 = (x189^((x190&x191)&x192));

	if (t47 != -2147483393LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MIN;
	uint16_t x194 = 367U;
	int32_t x196 = INT32_MAX;
	int32_t t48 = 7851244;

	t48 = (x193^((x194&x195)&x196));

	if (t48 != -384) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 30194137537537LLU;
	uint16_t x199 = 15570U;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t49 = 30LLU;

	t49 = (x197^((x198&x199)&x200));

	if (t49 != 30194137537537LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -12384;
	int8_t x202 = -3;
	int32_t x203 = 241083;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -4848394;

	t50 = (x201^((x202&x203)&x204));

	if (t50 != -12384) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	int64_t x206 = 2715796939159134LL;
	static int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;

	t51 = (x205^((x206&x207)&x208));

	if (t51 != -2715796939145217LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 1267U;
	int8_t x210 = INT8_MAX;
	static int16_t x211 = 0;
	volatile int64_t t52 = 14027173260446115LL;

	t52 = (x209^((x210&x211)&x212));

	if (t52 != 1267LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	static volatile int32_t t53 = -75;

	t53 = (x213^((x214&x215)&x216));

	if (t53 != 2147483639) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = -1LL;
	int16_t x218 = -1;
	static int16_t x220 = -1;
	int64_t t54 = 12406LL;

	t54 = (x217^((x218&x219)&x220));

	if (t54 != -4LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = 2LL;
	int8_t x222 = INT8_MAX;
	static volatile uint64_t x224 = UINT64_MAX;

	t55 = (x221^((x222&x223)&x224));

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	int8_t x226 = -1;
	int16_t x227 = INT16_MIN;

	t56 = (x225^((x226&x227)&x228));

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 1591545U;
	volatile uint8_t x230 = 62U;
	uint32_t t57 = 900U;

	t57 = (x229^((x230&x231)&x232));

	if (t57 != 1591495U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x236 = INT8_MAX;

	t58 = (x233^((x234&x235)&x236));

	if (t58 != 29268U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 100369117U;
	uint16_t x238 = 6U;
	int32_t x239 = INT32_MIN;
	volatile int32_t x240 = -8842045;
	uint32_t t59 = 415141U;

	t59 = (x237^((x238&x239)&x240));

	if (t59 != 100369117U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	uint16_t x243 = UINT16_MAX;
	static uint8_t x244 = 0U;
	int32_t t60 = 4;

	t60 = (x241^((x242&x243)&x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 9288114038247880LL;
	uint64_t x246 = 591LLU;
	static int32_t x248 = -1;
	static volatile uint64_t t61 = 49646909358746572LLU;

	t61 = (x245^((x246&x247)&x248));

	if (t61 != 9288114038247876LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MAX;
	uint64_t x250 = UINT64_MAX;
	int8_t x251 = INT8_MAX;
	static uint64_t t62 = 193LLU;

	t62 = (x249^((x250&x251)&x252));

	if (t62 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = 170797LLU;
	int64_t x255 = -384417352139LL;
	uint8_t x256 = 58U;
	uint64_t t63 = 627136853307614188LLU;

	t63 = (x253^((x254&x255)&x256));

	if (t63 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	volatile uint32_t x258 = 6039U;
	int16_t x259 = -948;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = -6086277508664685LL;

	t64 = (x257^((x258&x259)&x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	uint64_t x262 = 125516884LLU;
	volatile int32_t x264 = -1;
	volatile uint64_t t65 = 12260LLU;

	t65 = (x261^((x262&x263)&x264));

	if (t65 != 18446744071687584852LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MAX;
	volatile int32_t x267 = -1;
	uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t66 = 1723178662856808946LLU;

	t66 = (x265^((x266&x267)&x268));

	if (t66 != 358284907LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	uint8_t x270 = UINT8_MAX;
	volatile uint16_t x271 = 1U;
	volatile int16_t x272 = -1;
	volatile int32_t t67 = 23216466;

	t67 = (x269^((x270&x271)&x272));

	if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int64_t x274 = -664404532875LL;
	static int16_t x275 = INT16_MIN;
	int64_t x276 = 19557163260461LL;
	volatile int64_t t68 = -174416967825153LL;

	t68 = (x273^((x274&x275)&x276));

	if (t68 != -18970875002881LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = 59;
	uint64_t x278 = 5339770806921070022LLU;
	uint64_t t69 = 2111386LLU;

	t69 = (x277^((x278&x279)&x280));

	if (t69 != 5339770806921068603LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 288784534901168697LL;
	uint64_t x283 = 6844285LLU;
	int8_t x284 = -1;
	uint64_t t70 = 307629LLU;

	t70 = (x281^((x282&x283)&x284));

	if (t70 != 288784534901168697LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = UINT64_MAX;
	int8_t x287 = -1;
	int32_t x288 = -2;
	volatile uint64_t t71 = 5297764647LLU;

	t71 = (x285^((x286&x287)&x288));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = UINT32_MAX;
	uint64_t x290 = 222241LLU;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = -31462263619LL;
	uint64_t t72 = 5240LLU;

	t72 = (x289^((x290&x291)&x292));

	if (t72 != 4294941662LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	uint16_t x294 = 10U;
	uint64_t x295 = 3700818LLU;
	static int64_t x296 = INT64_MIN;

	t73 = (x293^((x294&x295)&x296));

	if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 1U;
	int16_t x298 = -600;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t74 = 610;

	t74 = (x297^((x298&x299)&x300));

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	static int8_t x302 = INT8_MIN;
	volatile uint8_t x303 = 45U;

	t75 = (x301^((x302&x303)&x304));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	int32_t x307 = -1;
	volatile uint32_t x308 = UINT32_MAX;

	t76 = (x305^((x306&x307)&x308));

	if (t76 != 32767U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 1U;
	static int32_t x310 = INT32_MIN;
	volatile int64_t x311 = 2912563794109LL;
	uint16_t x312 = 2U;

	t77 = (x309^((x310&x311)&x312));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = UINT8_MAX;
	volatile int16_t x314 = INT16_MIN;
	uint64_t x315 = 455685LLU;
	static int16_t x316 = 7541;
	static uint64_t t78 = 2003741487LLU;

	t78 = (x313^((x314&x315)&x316));

	if (t78 != 255LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MIN;
	volatile int32_t t79 = INT32_MIN;

	t79 = (x317^((x318&x319)&x320));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 62428389322LLU;
	static int16_t x322 = INT16_MIN;
	volatile int8_t x323 = INT8_MIN;
	static volatile uint64_t t80 = 12801898739857LLU;

	t80 = (x321^((x322&x323)&x324));

	if (t80 != 62428389322LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	uint16_t x326 = 0U;
	volatile int64_t x327 = INT64_MIN;
	int32_t x328 = 43;
	volatile int64_t t81 = 25830LL;

	t81 = (x325^((x326&x327)&x328));

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 3460165U;
	uint64_t x331 = 1409496297LLU;
	volatile uint8_t x332 = 5U;
	uint64_t t82 = 505757LLU;

	t82 = (x329^((x330&x331)&x332));

	if (t82 != 3460164LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	volatile uint32_t t83 = 12458U;

	t83 = (x333^((x334&x335)&x336));

	if (t83 != 4294967168U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x338 = -1;
	uint64_t x339 = 15606LLU;
	volatile int32_t x340 = INT32_MIN;
	static volatile uint64_t t84 = 280821079945405LLU;

	t84 = (x337^((x338&x339)&x340));

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = 1039070U;
	int32_t x343 = 210;
	int8_t x344 = INT8_MAX;
	static volatile uint32_t t85 = 283U;

	t85 = (x341^((x342&x343)&x344));

	if (t85 != 4294934610U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = 1LL;
	int16_t x346 = 51;
	volatile int32_t x348 = -65506957;

	t86 = (x345^((x346&x347)&x348));

	if (t86 != 50LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	static uint16_t x352 = UINT16_MAX;
	volatile uint32_t t87 = 15U;

	t87 = (x349^((x350&x351)&x352));

	if (t87 != 4294967290U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int16_t x356 = 2926;
	int64_t t88 = 6756835LL;

	t88 = (x353^((x354&x355)&x356));

	if (t88 != -3LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	int64_t x358 = 7927375215LL;
	int64_t x359 = INT64_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = 439657926119629LLU;

	t89 = (x357^((x358&x359)&x360));

	if (t89 != 18446744065782176400LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x362 = INT8_MIN;
	uint64_t x363 = 1507721824977577LLU;
	int16_t x364 = -1;
	static uint64_t t90 = 75127949247LLU;

	t90 = (x361^((x362&x363)&x364));

	if (t90 != 18445236351884573952LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	int8_t x366 = -2;
	int8_t x367 = -1;
	volatile uint32_t t91 = 192253363U;

	t91 = (x365^((x366&x367)&x368));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	int16_t x370 = 109;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = 192;

	t92 = (x369^((x370&x371)&x372));

	if (t92 != -64) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -2241550292029765932LL;
	volatile uint16_t x374 = 13U;
	int8_t x375 = -4;
	volatile int64_t x376 = INT64_MIN;

	t93 = (x373^((x374&x375)&x376));

	if (t93 != -2241550292029765932LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = 42;
	uint32_t x378 = 342U;
	int8_t x379 = INT8_MIN;
	volatile uint32_t x380 = 717408811U;
	volatile uint32_t t94 = 1640924U;

	t94 = (x377^((x378&x379)&x380));

	if (t94 != 42U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int16_t x383 = 5;
	int64_t t95 = -759913000LL;

	t95 = (x381^((x382&x383)&x384));

	if (t95 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = UINT64_MAX;
	static volatile uint8_t x388 = 2U;
	uint64_t t96 = 11327417398LLU;

	t96 = (x385^((x386&x387)&x388));

	if (t96 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -7822714;
	volatile int32_t x390 = INT32_MIN;
	int64_t x391 = 29157390LL;
	int16_t x392 = 1;
	int64_t t97 = -876197191967459963LL;

	t97 = (x389^((x390&x391)&x392));

	if (t97 != -7822714LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	int8_t x395 = -1;

	t98 = (x393^((x394&x395)&x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	volatile uint64_t t99 = 33109128265LLU;

	t99 = (x397^((x398&x399)&x400));

	if (t99 != 68938108950052863LLU) { NG(); } else { ; }
	
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

