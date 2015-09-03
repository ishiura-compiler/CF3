#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
volatile int16_t x4 = INT16_MIN;
uint32_t x6 = UINT32_MAX;
int64_t x7 = -458LL;
volatile int64_t x20 = INT64_MIN;
uint64_t x21 = 1064777LLU;
volatile uint64_t t5 = 1713924LLU;
static volatile int32_t x25 = -589165;
int32_t x28 = INT32_MAX;
volatile int8_t x31 = INT8_MIN;
volatile int8_t x35 = INT8_MAX;
static volatile int32_t t8 = -9326127;
int16_t x37 = INT16_MIN;
int32_t t9 = -299647;
int32_t x43 = INT32_MIN;
int8_t x46 = INT8_MIN;
int64_t x52 = INT64_MIN;
volatile uint32_t t12 = 2158U;
volatile int32_t t13 = -374462;
uint8_t x57 = 1U;
int32_t x58 = INT32_MIN;
int32_t x59 = INT32_MAX;
volatile uint16_t x60 = UINT16_MAX;
int8_t x62 = -1;
static uint8_t x63 = 6U;
uint64_t x67 = 17LLU;
int16_t x70 = INT16_MIN;
static volatile int8_t x74 = INT8_MIN;
static int32_t t19 = 32517;
int16_t x90 = INT16_MIN;
static int64_t x103 = INT64_MIN;
int16_t x111 = INT16_MIN;
uint32_t x113 = 5523824U;
volatile int64_t t28 = -48LL;
static uint64_t x119 = UINT64_MAX;
int32_t x120 = -1;
static volatile int64_t x123 = -1LL;
volatile int16_t x127 = -1;
volatile int8_t x129 = INT8_MAX;
uint32_t x132 = 2520042U;
uint32_t x134 = UINT32_MAX;
int32_t x135 = -421;
int64_t t33 = -110885628160LL;
volatile int32_t t34 = 3;
int16_t x142 = INT16_MIN;
volatile int64_t t37 = -13LL;
static int32_t x154 = INT32_MIN;
uint64_t x157 = 65874171LLU;
int32_t x165 = INT32_MAX;
uint16_t x169 = UINT16_MAX;
uint64_t x170 = 1481857LLU;
int16_t x171 = -1999;
volatile uint64_t t42 = 34073045244649934LLU;
static volatile int16_t x176 = INT16_MAX;
int32_t x179 = INT32_MIN;
int32_t t44 = -35;
int32_t x186 = INT32_MIN;
static volatile uint64_t t46 = 1510896972LLU;
volatile int32_t t47 = 123061975;
static volatile uint64_t t48 = 927833682604LLU;
static int8_t x198 = INT8_MIN;
int32_t x199 = INT32_MIN;
volatile uint16_t x206 = UINT16_MAX;
int64_t t51 = -5309987806286108LL;
uint32_t x211 = UINT32_MAX;
int32_t t52 = -104963573;
static int16_t x215 = 12897;
volatile uint64_t t53 = 4157461647591LLU;
static int32_t x219 = INT32_MIN;
uint8_t x222 = UINT8_MAX;
uint16_t x237 = 4328U;
static uint64_t x241 = 61063477322138282LLU;
volatile uint64_t t60 = 731185275273LLU;
uint64_t x245 = 32313129798208610LLU;
int8_t x246 = INT8_MAX;
static int64_t x248 = 122271324544015769LL;
volatile uint32_t x253 = UINT32_MAX;
int64_t x259 = -1LL;
int8_t x268 = 3;
int32_t t66 = 362;
uint64_t x281 = 14863182891133LLU;
uint8_t x284 = UINT8_MAX;
int8_t x285 = INT8_MAX;
int32_t x287 = INT32_MIN;
int64_t x290 = -1LL;
int64_t x291 = INT64_MIN;
int64_t x292 = -163119362756236710LL;
int8_t x295 = INT8_MIN;
int32_t x298 = INT32_MAX;
uint32_t x299 = 362U;
static uint32_t x303 = 52U;
volatile int8_t x304 = INT8_MAX;
int64_t x305 = -154861492098369LL;
static uint32_t x316 = 3410246U;
volatile uint64_t t78 = 5735910159LLU;
int64_t x320 = -1LL;
static int64_t x321 = INT64_MIN;
static int64_t x322 = -44435328530267572LL;
int32_t x323 = INT32_MAX;
uint16_t x326 = UINT16_MAX;
int16_t x330 = -1;
static uint64_t x334 = UINT64_MAX;
int16_t x341 = INT16_MIN;
uint8_t x343 = UINT8_MAX;
volatile int32_t t85 = -3094;
static int8_t x350 = -6;
int16_t x353 = 0;
static volatile int32_t t88 = 597802497;
int32_t x367 = INT32_MAX;
uint64_t x371 = UINT64_MAX;
int32_t x386 = -1;
int64_t x388 = 1417039074289962LL;
volatile int64_t x389 = 405326773074LL;


void f0(void) {
	int8_t x1 = -1;
	volatile int32_t x2 = INT32_MIN;
	static int32_t t0 = 505571;

	t0 = (x1*(x2&(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int64_t x8 = -113LL;
	static volatile uint32_t t1 = 3263U;

	t1 = (x5*(x6&(x7==x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 59058U;
	int8_t x10 = INT8_MIN;
	int64_t x11 = 54968LL;
	int64_t x12 = INT64_MIN;
	uint32_t t2 = 16232U;

	t2 = (x9*(x10&(x11==x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 2U;
	volatile int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	int32_t x16 = 27818946;
	static int64_t t3 = 8983711152273013LL;

	t3 = (x13*(x14&(x15==x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 126499959274432LLU;
	volatile int32_t x18 = 292325;
	static int8_t x19 = INT8_MAX;
	static uint64_t t4 = 65LLU;

	t4 = (x17*(x18&(x19==x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = -879323302;
	int64_t x23 = INT64_MIN;
	uint8_t x24 = 2U;

	t5 = (x21*(x22&(x23==x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x26 = 1335073U;
	uint8_t x27 = 1U;
	uint32_t t6 = 55607U;

	t6 = (x25*(x26&(x27==x28)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int64_t x30 = -1LL;
	int32_t x32 = INT32_MIN;
	int64_t t7 = -229540631LL;

	t7 = (x29*(x30&(x31==x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 4U;
	static uint8_t x34 = 1U;
	static int16_t x36 = INT16_MAX;

	t8 = (x33*(x34&(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	volatile int16_t x39 = -4;
	volatile int32_t x40 = INT32_MAX;

	t9 = (x37*(x38&(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	static uint32_t x42 = 10203149U;
	int16_t x44 = INT16_MIN;
	volatile uint32_t t10 = 4502U;

	t10 = (x41*(x42&(x43==x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 2U;
	static uint64_t x47 = UINT64_MAX;
	int64_t x48 = -1LL;
	static int32_t t11 = -69261;

	t11 = (x45*(x46&(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = 2U;
	volatile int32_t x51 = INT32_MIN;

	t12 = (x49*(x50&(x51==x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	static uint16_t x54 = 233U;
	int16_t x55 = -30;
	int16_t x56 = INT16_MIN;

	t13 = (x53*(x54&(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t t14 = -81196;

	t14 = (x57*(x58&(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint32_t x64 = 14900U;
	volatile int32_t t15 = 125;

	t15 = (x61*(x62&(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	int32_t x66 = -4;
	int8_t x68 = INT8_MAX;
	volatile int64_t t16 = 2737898LL;

	t16 = (x65*(x66&(x67==x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	volatile uint8_t x71 = UINT8_MAX;
	static uint16_t x72 = 85U;
	volatile uint64_t t17 = 1373339777LLU;

	t17 = (x69*(x70&(x71==x72)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	uint16_t x75 = 26U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 8035349;

	t18 = (x73*(x74&(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -35;
	static volatile int8_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	uint8_t x80 = 20U;

	t19 = (x77*(x78&(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	int32_t x82 = -294;
	static volatile int64_t x83 = 3905397377381494LL;
	volatile uint64_t x84 = 3328002220549877392LLU;
	static int32_t t20 = 346207285;

	t20 = (x81*(x82&(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	static int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	int32_t t21 = 412;

	t21 = (x85*(x86&(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = 6;
	int64_t t22 = -647LL;

	t22 = (x89*(x90&(x91==x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	int8_t x94 = INT8_MIN;
	volatile uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MAX;
	static volatile int32_t t23 = 6844;

	t23 = (x93*(x94&(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 148397LL;
	int16_t x98 = -1;
	int8_t x99 = -31;
	static int64_t x100 = INT64_MIN;
	int64_t t24 = 27832215119757246LL;

	t24 = (x97*(x98&(x99==x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint16_t x102 = UINT16_MAX;
	int8_t x104 = 29;
	static int32_t t25 = -17761;

	t25 = (x101*(x102&(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = -1;
	int16_t x107 = 1400;
	static volatile uint32_t x108 = UINT32_MAX;
	int32_t t26 = 57;

	t26 = (x105*(x106&(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint64_t x110 = 1870435499049871292LLU;
	uint8_t x112 = 4U;
	static volatile uint64_t t27 = 8241002LLU;

	t27 = (x109*(x110&(x111==x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x114 = INT64_MIN;
	volatile uint64_t x115 = 183231934580582LLU;
	uint32_t x116 = 19975203U;

	t28 = (x113*(x114&(x115==x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -1;
	uint32_t x118 = 507830055U;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x117*(x118&(x119==x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static int16_t x122 = INT16_MIN;
	uint64_t x124 = 1053LLU;
	volatile int32_t t30 = -86;

	t30 = (x121*(x122&(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	uint8_t x126 = 71U;
	uint8_t x128 = 7U;
	volatile int64_t t31 = 475632066LL;

	t31 = (x125*(x126&(x127==x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MAX;
	int64_t x131 = -1701304431LL;
	int32_t t32 = 6356672;

	t32 = (x129*(x130&(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 827445LL;
	uint16_t x136 = 6659U;

	t33 = (x133*(x134&(x135==x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	volatile int32_t x138 = -1;
	volatile uint16_t x139 = 2715U;
	static volatile uint8_t x140 = 29U;

	t34 = (x137*(x138&(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -57788171426186084LL;
	uint8_t x143 = 6U;
	int8_t x144 = 0;
	int64_t t35 = -934027601580LL;

	t35 = (x141*(x142&(x143==x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MAX;
	static uint8_t x147 = 40U;
	volatile int64_t x148 = INT64_MAX;
	int32_t t36 = -1;

	t36 = (x145*(x146&(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = 620LL;
	uint32_t x150 = 71020U;
	static int16_t x151 = INT16_MIN;
	uint64_t x152 = UINT64_MAX;

	t37 = (x149*(x150&(x151==x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	volatile uint8_t x155 = 0U;
	int16_t x156 = INT16_MIN;
	static int64_t t38 = -218LL;

	t38 = (x153*(x154&(x155==x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MAX;
	static int64_t x159 = -1LL;
	int16_t x160 = INT16_MIN;
	static volatile uint64_t t39 = 2702183334339683873LLU;

	t39 = (x157*(x158&(x159==x160)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = UINT16_MAX;
	volatile int8_t x162 = 5;
	static int8_t x163 = INT8_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = -464;

	t40 = (x161*(x162&(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = -1;
	static int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = INT32_MAX;

	t41 = (x165*(x166&(x167==x168)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x172 = INT8_MIN;

	t42 = (x169*(x170&(x171==x172)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 1;
	uint32_t x174 = 1597807U;
	uint64_t x175 = 463590LLU;
	static volatile uint32_t t43 = 0U;

	t43 = (x173*(x174&(x175==x176)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	static uint8_t x178 = 3U;
	int16_t x180 = -10;

	t44 = (x177*(x178&(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = 68789LL;
	int64_t x183 = INT64_MAX;
	static uint8_t x184 = UINT8_MAX;
	volatile int64_t t45 = -346012482525676LL;

	t45 = (x181*(x182&(x183==x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x187 = -1;
	int16_t x188 = INT16_MIN;

	t46 = (x185*(x186&(x187==x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	uint8_t x190 = 0U;
	volatile uint32_t x191 = 323413890U;
	uint16_t x192 = 20026U;

	t47 = (x189*(x190&(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	static uint64_t x194 = 8LLU;
	volatile uint64_t x195 = 2054547LLU;
	int16_t x196 = INT16_MAX;

	t48 = (x193*(x194&(x195==x196)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int8_t x200 = 20;
	int32_t t49 = 3778139;

	t49 = (x197*(x198&(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int8_t x202 = INT8_MAX;
	static int64_t x203 = -16518443LL;
	volatile int64_t x204 = INT64_MAX;
	static volatile int32_t t50 = 16024201;

	t50 = (x201*(x202&(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x207 = INT16_MAX;
	int32_t x208 = INT32_MIN;

	t51 = (x205*(x206&(x207==x208)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 69U;
	int32_t x210 = INT32_MIN;
	int8_t x212 = 0;

	t52 = (x209*(x210&(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 225131LLU;
	int16_t x214 = -13489;
	int8_t x216 = -50;

	t53 = (x213*(x214&(x215==x216)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 3U;
	int32_t x218 = 0;
	int64_t x220 = -1LL;
	int32_t t54 = 11;

	t54 = (x217*(x218&(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 14U;
	uint8_t x223 = 1U;
	int64_t x224 = INT64_MIN;
	int32_t t55 = 998;

	t55 = (x221*(x222&(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -198;
	volatile int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	volatile uint8_t x228 = UINT8_MAX;
	int32_t t56 = 31139;

	t56 = (x225*(x226&(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 11624187197781LLU;
	volatile int64_t x230 = -1LL;
	int32_t x231 = 2;
	volatile int16_t x232 = INT16_MIN;
	volatile uint64_t t57 = 105874882471976299LLU;

	t57 = (x229*(x230&(x231==x232)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	uint32_t x234 = 38779468U;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 5U;
	volatile uint32_t t58 = 562375677U;

	t58 = (x233*(x234&(x235==x236)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x238 = INT8_MAX;
	uint16_t x239 = 10U;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -24273370;

	t59 = (x237*(x238&(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	static int32_t x244 = -1;

	t60 = (x241*(x242&(x243==x244)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x247 = INT8_MAX;
	uint64_t t61 = 85874LLU;

	t61 = (x245*(x246&(x247==x248)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static int32_t x250 = 383900;
	static volatile uint32_t x251 = 22526462U;
	int32_t x252 = -74;
	static int32_t t62 = -1718;

	t62 = (x249*(x250&(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MIN;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MAX;
	volatile int64_t t63 = -22LL;

	t63 = (x253*(x254&(x255==x256)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MAX;
	static int32_t x258 = -1;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = -56596;

	t64 = (x257*(x258&(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MAX;
	uint32_t x262 = 14398U;
	uint32_t x263 = 559U;
	static volatile int16_t x264 = INT16_MAX;
	volatile uint32_t t65 = 2U;

	t65 = (x261*(x262&(x263==x264)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	uint16_t x267 = UINT16_MAX;

	t66 = (x265*(x266&(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 15835U;
	int8_t x270 = 1;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = 88516471;
	volatile int32_t t67 = 28215;

	t67 = (x269*(x270&(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 181521906460578707LLU;
	int8_t x274 = INT8_MIN;
	volatile int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MIN;
	uint64_t t68 = 1009LLU;

	t68 = (x273*(x274&(x275==x276)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x277 = -1;
	int8_t x278 = 47;
	volatile uint64_t x279 = 57LLU;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = -4;

	t69 = (x277*(x278&(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = 17;
	volatile uint16_t x283 = 239U;
	uint64_t t70 = 1239LLU;

	t70 = (x281*(x282&(x283==x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = -174;
	uint64_t x288 = 636106692851LLU;
	int32_t t71 = 731666944;

	t71 = (x285*(x286&(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 1836551374U;
	int64_t t72 = 10863456973997151LL;

	t72 = (x289*(x290&(x291==x292)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 0;
	uint64_t x294 = 321398360420LLU;
	volatile int32_t x296 = 50;
	volatile uint64_t t73 = 658310896240LLU;

	t73 = (x293*(x294&(x295==x296)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	int16_t x300 = INT16_MIN;
	uint64_t t74 = 58LLU;

	t74 = (x297*(x298&(x299==x300)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	uint16_t x302 = UINT16_MAX;
	static uint32_t t75 = 38U;

	t75 = (x301*(x302&(x303==x304)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = -26;
	int32_t x307 = INT32_MIN;
	static uint16_t x308 = 1566U;
	volatile int64_t t76 = 95110289380LL;

	t76 = (x305*(x306&(x307==x308)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -49486037244LL;
	int32_t x310 = 134689;
	int8_t x311 = -1;
	int32_t x312 = INT32_MIN;
	volatile int64_t t77 = -4547784LL;

	t77 = (x309*(x310&(x311==x312)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	static uint64_t x314 = UINT64_MAX;
	int32_t x315 = -24;

	t78 = (x313*(x314&(x315==x316)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int16_t x318 = INT16_MAX;
	static int64_t x319 = 28982LL;
	volatile int32_t t79 = 846864586;

	t79 = (x317*(x318&(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x324 = INT32_MIN;
	int64_t t80 = -3810015136090949302LL;

	t80 = (x321*(x322&(x323==x324)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	volatile uint8_t x327 = 25U;
	int32_t x328 = 119790581;
	static volatile int32_t t81 = -13084465;

	t81 = (x325*(x326&(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int64_t x331 = INT64_MIN;
	int8_t x332 = 1;
	int32_t t82 = 5777088;

	t82 = (x329*(x330&(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -2238790464544LL;
	static int64_t x335 = -1LL;
	static int32_t x336 = -1;
	static uint64_t t83 = 100225080567141346LLU;

	t83 = (x333*(x334&(x335==x336)));

	if (t83 != 18446741834919087072LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = UINT32_MAX;
	static int32_t x338 = INT32_MAX;
	int32_t x339 = INT32_MIN;
	volatile int8_t x340 = INT8_MAX;
	static volatile uint32_t t84 = 16367U;

	t84 = (x337*(x338&(x339==x340)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = INT8_MIN;
	static volatile int32_t x344 = -133292;

	t85 = (x341*(x342&(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 149;
	int32_t x346 = INT32_MAX;
	int8_t x347 = 3;
	static int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = 4;

	t86 = (x345*(x346&(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 177LLU;
	static int64_t x351 = INT64_MAX;
	uint8_t x352 = 50U;
	volatile uint64_t t87 = 6LLU;

	t87 = (x349*(x350&(x351==x352)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x354 = UINT8_MAX;
	int64_t x355 = -1LL;
	static int64_t x356 = 1338537304929449844LL;

	t88 = (x353*(x354&(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = -1;
	uint64_t x359 = 2481LLU;
	volatile int64_t x360 = 37353LL;
	static volatile int32_t t89 = 3;

	t89 = (x357*(x358&(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int64_t x362 = 15234688098301149LL;
	int32_t x363 = INT32_MIN;
	int64_t x364 = 6703355031385244LL;
	int64_t t90 = 74767339179LL;

	t90 = (x361*(x362&(x363==x364)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1U;
	volatile int64_t x366 = 83598815608906LL;
	volatile uint64_t x368 = UINT64_MAX;
	int64_t t91 = 63LL;

	t91 = (x365*(x366&(x367==x368)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MIN;
	uint16_t x370 = UINT16_MAX;
	static volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -581;

	t92 = (x369*(x370&(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 39486LL;
	static int16_t x374 = INT16_MAX;
	volatile int32_t x375 = INT32_MAX;
	volatile uint8_t x376 = 1U;
	int64_t t93 = 10923751084986LL;

	t93 = (x373*(x374&(x375==x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 62U;
	static uint32_t x378 = 579U;
	int64_t x379 = 43LL;
	int32_t x380 = 989609;
	static volatile uint32_t t94 = 2050U;

	t94 = (x377*(x378&(x379==x380)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -7317;
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = UINT32_MAX;
	int32_t t95 = 281582;

	t95 = (x381*(x382&(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -2781;
	int64_t x387 = INT64_MIN;
	static int32_t t96 = 122;

	t96 = (x385*(x386&(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile int64_t t97 = -1LL;

	t97 = (x389*(x390&(x391==x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -19715;
	volatile int8_t x394 = 1;
	int16_t x395 = -273;
	volatile uint32_t x396 = UINT32_MAX;
	int32_t t98 = -57008427;

	t98 = (x393*(x394&(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 806833LLU;
	uint8_t x398 = 13U;
	volatile int8_t x399 = INT8_MIN;
	uint16_t x400 = 10666U;
	volatile uint64_t t99 = 861LLU;

	t99 = (x397*(x398&(x399==x400)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

