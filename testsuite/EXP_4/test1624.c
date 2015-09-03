#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -56;
int32_t x16 = INT32_MIN;
uint8_t x22 = 5U;
int32_t x36 = INT32_MAX;
uint64_t t10 = UINT64_MAX;
uint64_t x48 = UINT64_MAX;
int16_t x53 = INT16_MIN;
int64_t t16 = INT64_MAX;
uint32_t x73 = 142341U;
uint32_t x78 = 19518049U;
int64_t x81 = INT64_MAX;
uint64_t x96 = 278475001327579912LLU;
uint64_t x100 = 16451171425483LLU;
int8_t x112 = -1;
int32_t t27 = -58;
int64_t x114 = -1LL;
int32_t x115 = INT32_MIN;
volatile uint16_t x119 = 22U;
static volatile int32_t t29 = 1;
static volatile int16_t x122 = INT16_MIN;
uint64_t t31 = 24229652010668LLU;
volatile int32_t t32 = 1;
int16_t x142 = INT16_MIN;
int8_t x148 = 1;
static uint32_t x157 = UINT32_MAX;
volatile int64_t x159 = -1LL;
volatile uint64_t x163 = UINT64_MAX;
static int64_t x168 = INT64_MIN;
static int16_t x169 = -2;
static int64_t x170 = -262827581LL;
int32_t x173 = INT32_MIN;
int8_t x174 = INT8_MIN;
int64_t x176 = 2LL;
int32_t t46 = -317;
int32_t x205 = -1;
int64_t x207 = -3505576941LL;
int8_t x214 = -17;
int8_t x219 = -1;
static volatile uint8_t x223 = 27U;
static int64_t t56 = 23LL;
int16_t x229 = INT16_MIN;
uint64_t x230 = UINT64_MAX;
int16_t x231 = INT16_MIN;
int16_t x238 = 0;
uint8_t x240 = 0U;
int8_t x244 = 17;
uint32_t t60 = UINT32_MAX;
uint32_t x248 = 83889831U;
static int64_t x252 = -901147684LL;
uint8_t x261 = 0U;
int64_t t67 = INT64_MIN;
int16_t x273 = -1;
uint32_t x277 = 3485337U;
int16_t x280 = -1;
uint32_t t69 = 615335U;
volatile int16_t x282 = INT16_MIN;
uint32_t x283 = UINT32_MAX;
int64_t x286 = -253396970554036412LL;
volatile int16_t x288 = 23;
static volatile int16_t x291 = -179;
uint16_t x295 = UINT16_MAX;
int32_t x309 = -1;
static int16_t x316 = INT16_MIN;
int8_t x321 = INT8_MIN;
static int32_t x323 = -203553;
int16_t x327 = 0;
static int64_t x330 = INT64_MIN;
static uint8_t x337 = 18U;
static uint32_t x338 = 67057U;
static uint16_t x345 = 43U;
volatile int32_t t86 = -26080594;
int8_t x350 = 3;
static int32_t x353 = -1;
uint64_t x355 = UINT64_MAX;
uint8_t x357 = 51U;
static volatile uint8_t x359 = UINT8_MAX;
static volatile int64_t t90 = 3125350847LL;
volatile int64_t x365 = -1LL;
uint16_t x368 = 18339U;
int64_t x373 = -1LL;
volatile uint64_t x374 = UINT64_MAX;
volatile int16_t x378 = INT16_MIN;
int16_t x380 = INT16_MIN;
volatile int32_t t94 = -74894;
uint16_t x381 = 638U;
int64_t x399 = INT64_MIN;
static int64_t x400 = -2965098545LL;
static volatile int32_t t99 = 16;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	volatile int8_t x2 = 0;
	uint32_t x3 = 59U;
	int8_t x4 = INT8_MAX;
	int32_t t0 = INT32_MAX;

	t0 = (x1|(x2==(x3<=x4)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1855876U;
	int32_t x6 = INT32_MAX;
	int32_t x7 = INT32_MAX;
	int16_t x8 = -7;
	volatile uint32_t t1 = 48272977U;

	t1 = (x5|(x6==(x7<=x8)));

	if (t1 != 1855876U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 71700743527589002LLU;
	volatile uint8_t x11 = 24U;
	static int64_t x12 = 1LL;
	int32_t t2 = -1541;

	t2 = (x9|(x10==(x11<=x12)));

	if (t2 != -56) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	volatile int8_t x15 = INT8_MAX;
	int32_t t3 = 1;

	t3 = (x13|(x14==(x15<=x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	int32_t x18 = -1;
	static volatile uint16_t x19 = 14902U;
	volatile int8_t x20 = -1;
	volatile int32_t t4 = 1;

	t4 = (x17|(x18==(x19<=x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -15;
	uint16_t x23 = 2U;
	static volatile int16_t x24 = INT16_MIN;
	int32_t t5 = 1;

	t5 = (x21|(x22==(x23<=x24)));

	if (t5 != -15) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = 1015562850U;
	volatile uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MAX;
	uint16_t x28 = 2625U;
	uint32_t t6 = 11903717U;

	t6 = (x25|(x26==(x27<=x28)));

	if (t6 != 1015562850U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 7861579420955458LLU;
	static int16_t x30 = 1669;
	uint64_t x31 = 428716LLU;
	static int16_t x32 = INT16_MIN;
	uint64_t t7 = 110406392LLU;

	t7 = (x29|(x30==(x31<=x32)));

	if (t7 != 7861579420955458LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MIN;
	volatile int32_t t8 = 10991116;

	t8 = (x33|(x34==(x35<=x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 114U;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 258125U;
	int16_t x40 = -1;
	static int32_t t9 = 305743;

	t9 = (x37|(x38==(x39<=x40)));

	if (t9 != 114) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	volatile int32_t x43 = -1;
	static uint64_t x44 = UINT64_MAX;

	t10 = (x41|(x42==(x43<=x44)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = UINT32_MAX;
	static int64_t x46 = -9126620459335067LL;
	static volatile int64_t x47 = -1LL;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x45|(x46==(x47<=x48)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 11U;
	volatile uint16_t x50 = 7599U;
	int32_t x51 = INT32_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = -353068540;

	t12 = (x49|(x50==(x51<=x52)));

	if (t12 != 11) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -1;

	t13 = (x53|(x54==(x55<=x56)));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -61900561LL;
	volatile int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -1;
	static int64_t t14 = -273188564646662532LL;

	t14 = (x57|(x58==(x59<=x60)));

	if (t14 != -61900561LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = INT8_MIN;
	static int16_t x64 = 870;
	int32_t t15 = -112998143;

	t15 = (x61|(x62==(x63<=x64)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MAX;
	volatile int64_t x66 = 1003908584953LL;
	uint64_t x67 = 9774LLU;
	int32_t x68 = 710994494;

	t16 = (x65|(x66==(x67<=x68)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	int64_t x71 = 1LL;
	static uint64_t x72 = UINT64_MAX;
	int32_t t17 = -245408053;

	t17 = (x69|(x70==(x71<=x72)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = 727883LL;
	uint64_t x75 = 36LLU;
	int32_t x76 = 0;
	volatile uint32_t t18 = 319U;

	t18 = (x73|(x74==(x75<=x76)));

	if (t18 != 142341U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -5116500;
	uint16_t x79 = UINT16_MAX;
	volatile uint32_t x80 = 327094U;
	volatile int32_t t19 = 24;

	t19 = (x77|(x78==(x79<=x80)));

	if (t19 != -5116500) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 31356U;
	static uint32_t x83 = 662238U;
	uint32_t x84 = 2518U;
	volatile int64_t t20 = INT64_MAX;

	t20 = (x81|(x82==(x83<=x84)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 52U;
	volatile int8_t x86 = -5;
	int32_t x87 = -133502;
	int32_t x88 = -1;
	volatile int32_t t21 = 15285;

	t21 = (x85|(x86==(x87<=x88)));

	if (t21 != 52) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	uint16_t x90 = 4U;
	volatile int64_t x91 = INT64_MAX;
	static volatile uint64_t x92 = UINT64_MAX;
	int32_t t22 = 26;

	t22 = (x89|(x90==(x91<=x92)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = 1494728486304855LLU;
	int16_t x95 = INT16_MAX;
	static int32_t t23 = -8;

	t23 = (x93|(x94==(x95<=x96)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = -1;
	int32_t x99 = -1;
	int32_t t24 = -11862;

	t24 = (x97|(x98==(x99<=x100)));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	static volatile uint64_t x102 = 998507366066092LLU;
	int32_t x103 = 0;
	int64_t x104 = -1LL;
	volatile int32_t t25 = -142506865;

	t25 = (x101|(x102==(x103<=x104)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MIN;
	volatile int32_t x108 = -1;
	volatile int64_t t26 = INT64_MIN;

	t26 = (x105|(x106==(x107<=x108)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	static uint32_t x110 = 5529305U;
	int64_t x111 = INT64_MAX;

	t27 = (x109|(x110==(x111<=x112)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 39;
	static uint16_t x116 = 1U;
	static volatile int32_t t28 = 111683852;

	t28 = (x113|(x114==(x115<=x116)));

	if (t28 != 39) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MIN;
	static uint16_t x120 = 38U;

	t29 = (x117|(x118==(x119<=x120)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	static uint8_t x123 = 15U;
	static volatile int32_t x124 = -971230466;
	int64_t t30 = 4863LL;

	t30 = (x121|(x122==(x123<=x124)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 15166868184LLU;
	int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;

	t31 = (x125|(x126==(x127<=x128)));

	if (t31 != 15166868184LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -1;
	volatile int32_t x130 = INT32_MIN;
	static int64_t x131 = 102LL;
	int16_t x132 = 0;

	t32 = (x129|(x130==(x131<=x132)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	volatile int8_t x134 = -1;
	int64_t x135 = INT64_MIN;
	volatile uint16_t x136 = 10390U;
	volatile int32_t t33 = -2;

	t33 = (x133|(x134==(x135<=x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = -3131;
	static volatile uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MIN;
	static volatile int64_t t34 = INT64_MIN;

	t34 = (x137|(x138==(x139<=x140)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	static uint16_t x143 = 9U;
	int64_t x144 = 72887476507LL;
	volatile int32_t t35 = 463430;

	t35 = (x141|(x142==(x143<=x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static int16_t x146 = INT16_MIN;
	uint8_t x147 = 0U;
	int32_t t36 = 1915;

	t36 = (x145|(x146==(x147<=x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -1294281;
	static uint64_t x150 = 10379005LLU;
	int8_t x151 = INT8_MAX;
	uint16_t x152 = 2111U;
	static volatile int32_t t37 = -39380313;

	t37 = (x149|(x150==(x151<=x152)));

	if (t37 != -1294281) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	static uint8_t x154 = 30U;
	volatile uint16_t x155 = 3003U;
	volatile int16_t x156 = INT16_MIN;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x153|(x154==(x155<=x156)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	int32_t x160 = INT32_MIN;
	uint32_t t39 = UINT32_MAX;

	t39 = (x157|(x158==(x159<=x160)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint8_t x162 = 36U;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = -14194703;

	t40 = (x161|(x162==(x163<=x164)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 1295170832LLU;
	volatile int32_t x166 = -1;
	static int16_t x167 = INT16_MAX;
	static volatile uint64_t t41 = 10815LLU;

	t41 = (x165|(x166==(x167<=x168)));

	if (t41 != 1295170832LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x171 = 39U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -381510;

	t42 = (x169|(x170==(x171<=x172)));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x175 = INT32_MAX;
	static int32_t t43 = INT32_MIN;

	t43 = (x173|(x174==(x175<=x176)));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = 11006LL;
	volatile int16_t x179 = 333;
	uint32_t x180 = 3998213U;
	volatile int32_t t44 = -106;

	t44 = (x177|(x178==(x179<=x180)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -1;
	int32_t x182 = -1;
	int16_t x183 = INT16_MAX;
	volatile uint64_t x184 = 3969441146652499LLU;
	int32_t t45 = -1;

	t45 = (x181|(x182==(x183<=x184)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 0U;
	int8_t x186 = -1;
	volatile uint16_t x187 = 989U;
	uint8_t x188 = UINT8_MAX;

	t46 = (x185|(x186==(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	volatile int8_t x190 = -3;
	uint8_t x191 = 2U;
	static volatile uint64_t x192 = UINT64_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x189|(x190==(x191<=x192)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	volatile int32_t x194 = -474;
	int64_t x195 = INT64_MAX;
	int8_t x196 = 1;
	int32_t t48 = INT32_MIN;

	t48 = (x193|(x194==(x195<=x196)));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int32_t x198 = -1;
	static volatile int8_t x199 = -1;
	int16_t x200 = INT16_MAX;
	volatile int32_t t49 = 56871;

	t49 = (x197|(x198==(x199<=x200)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MAX;
	static int32_t x202 = 1;
	int8_t x203 = 9;
	int16_t x204 = -26;
	volatile int32_t t50 = -208475232;

	t50 = (x201|(x202==(x203<=x204)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x206 = 202106107889367LL;
	int64_t x208 = INT64_MAX;
	static volatile int32_t t51 = -1;

	t51 = (x205|(x206==(x207<=x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint16_t x210 = 10190U;
	int32_t x211 = -14;
	uint32_t x212 = 92083U;
	int32_t t52 = INT32_MIN;

	t52 = (x209|(x210==(x211<=x212)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int16_t x215 = -1;
	uint32_t x216 = 3U;
	volatile int32_t t53 = -16447240;

	t53 = (x213|(x214==(x215<=x216)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	int32_t x218 = 3793876;
	uint64_t x220 = 7589864418505379493LLU;
	static int64_t t54 = INT64_MIN;

	t54 = (x217|(x218==(x219<=x220)));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	volatile int64_t x224 = 37683418869046706LL;
	int32_t t55 = -27;

	t55 = (x221|(x222==(x223<=x224)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -354701074LL;
	int16_t x226 = INT16_MIN;
	static int64_t x227 = INT64_MAX;
	uint32_t x228 = 881U;

	t56 = (x225|(x226==(x227<=x228)));

	if (t56 != -354701074LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x232 = 78919LLU;
	int32_t t57 = 17143293;

	t57 = (x229|(x230==(x231<=x232)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = 0;
	static uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	volatile uint32_t x236 = 944U;
	volatile int32_t t58 = -66937183;

	t58 = (x233|(x234==(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x237 = INT64_MIN;
	int8_t x239 = INT8_MIN;
	int64_t t59 = INT64_MIN;

	t59 = (x237|(x238==(x239<=x240)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;

	t60 = (x241|(x242==(x243<=x244)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	volatile int8_t x246 = 10;
	int64_t x247 = -23104217819253167LL;
	volatile int32_t t61 = 7614557;

	t61 = (x245|(x246==(x247<=x248)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 2435589721679LLU;
	int64_t x250 = -1LL;
	int8_t x251 = INT8_MAX;
	static uint64_t t62 = 210092216731LLU;

	t62 = (x249|(x250==(x251<=x252)));

	if (t62 != 2435589721679LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = UINT32_MAX;
	int64_t x254 = INT64_MAX;
	uint32_t x255 = UINT32_MAX;
	uint32_t x256 = 1519655549U;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x253|(x254==(x255<=x256)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x258 = INT64_MIN;
	int64_t x259 = -115010132592LL;
	uint8_t x260 = 22U;
	volatile int32_t t64 = -6265246;

	t64 = (x257|(x258==(x259<=x260)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MAX;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = 12LLU;
	int32_t t65 = -130854810;

	t65 = (x261|(x262==(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 1549U;
	static int32_t x266 = -1;
	uint8_t x267 = 0U;
	uint32_t x268 = 61508U;
	volatile int32_t t66 = 0;

	t66 = (x265|(x266==(x267<=x268)));

	if (t66 != 1549) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = 155;
	static volatile int8_t x271 = INT8_MIN;
	static uint8_t x272 = 7U;

	t67 = (x269|(x270==(x271<=x272)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x274 = UINT16_MAX;
	volatile uint32_t x275 = 194336622U;
	uint8_t x276 = 97U;
	int32_t t68 = 2212915;

	t68 = (x273|(x274==(x275<=x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = UINT64_MAX;
	uint32_t x279 = UINT32_MAX;

	t69 = (x277|(x278==(x279<=x280)));

	if (t69 != 3485337U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 41460079U;
	int16_t x284 = INT16_MIN;
	uint32_t t70 = 2U;

	t70 = (x281|(x282==(x283<=x284)));

	if (t70 != 41460079U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile int8_t x287 = INT8_MIN;
	int32_t t71 = INT32_MIN;

	t71 = (x285|(x286==(x287<=x288)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	uint32_t x290 = 125123U;
	int64_t x292 = -127LL;
	static int32_t t72 = 1541;

	t72 = (x289|(x290==(x291<=x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	static uint64_t x294 = UINT64_MAX;
	int8_t x296 = 1;
	int32_t t73 = -121546313;

	t73 = (x293|(x294==(x295<=x296)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	int32_t x298 = -578;
	uint16_t x299 = 253U;
	int32_t x300 = INT32_MIN;
	int32_t t74 = INT32_MIN;

	t74 = (x297|(x298==(x299<=x300)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	static int64_t t75 = INT64_MIN;

	t75 = (x301|(x302==(x303<=x304)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	int8_t x306 = -1;
	uint16_t x307 = 3082U;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = 182737;

	t76 = (x305|(x306==(x307<=x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -906;
	volatile int64_t x311 = INT64_MAX;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -141;

	t77 = (x309|(x310==(x311<=x312)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 107U;
	uint16_t x314 = 16655U;
	int16_t x315 = INT16_MAX;
	uint32_t t78 = 26218U;

	t78 = (x313|(x314==(x315<=x316)));

	if (t78 != 107U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = -66981183;
	uint32_t t79 = UINT32_MAX;

	t79 = (x317|(x318==(x319<=x320)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -1;
	volatile uint8_t x324 = 1U;
	int32_t t80 = 1;

	t80 = (x321|(x322==(x323<=x324)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = 224U;
	volatile int32_t x326 = INT32_MIN;
	int16_t x328 = -105;
	volatile uint32_t t81 = 4418U;

	t81 = (x325|(x326==(x327<=x328)));

	if (t81 != 224U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 226005783221805LLU;
	int16_t x331 = INT16_MAX;
	static int16_t x332 = INT16_MIN;
	volatile uint64_t t82 = 1416LLU;

	t82 = (x329|(x330==(x331<=x332)));

	if (t82 != 226005783221805LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 7682U;
	static uint8_t x334 = UINT8_MAX;
	uint8_t x335 = 12U;
	static int16_t x336 = INT16_MAX;
	uint32_t t83 = 81579U;

	t83 = (x333|(x334==(x335<=x336)));

	if (t83 != 7682U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x339 = -1;
	uint16_t x340 = 1U;
	int32_t t84 = 8059;

	t84 = (x337|(x338==(x339<=x340)));

	if (t84 != 18) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -3;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = -1;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = -428;

	t85 = (x341|(x342==(x343<=x344)));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MIN;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MIN;

	t86 = (x345|(x346==(x347<=x348)));

	if (t86 != 43) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 0U;
	static volatile uint64_t x351 = 410634LLU;
	uint64_t x352 = 31510936419785633LLU;
	volatile int32_t t87 = -1;

	t87 = (x349|(x350==(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 603466292U;
	int64_t x356 = INT64_MIN;
	int32_t t88 = 483;

	t88 = (x353|(x354==(x355<=x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -1LL;
	static volatile int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -281503;

	t89 = (x357|(x358==(x359<=x360)));

	if (t89 != 51) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = -1LL;
	int16_t x362 = INT16_MAX;
	static int32_t x363 = INT32_MIN;
	volatile uint8_t x364 = 83U;

	t90 = (x361|(x362==(x363<=x364)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = -1;
	uint64_t x367 = 1940872135390LLU;
	static volatile int64_t t91 = -59562753361180345LL;

	t91 = (x365|(x366==(x367<=x368)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MIN;
	static volatile int32_t t92 = 0;

	t92 = (x369|(x370==(x371<=x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x375 = 86165851LLU;
	uint8_t x376 = 4U;
	int64_t t93 = -30817031LL;

	t93 = (x373|(x374==(x375<=x376)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -172;
	uint8_t x379 = 1U;

	t94 = (x377|(x378==(x379<=x380)));

	if (t94 != -172) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -53;
	int8_t x383 = 3;
	static volatile uint64_t x384 = UINT64_MAX;
	static int32_t t95 = 606;

	t95 = (x381|(x382==(x383<=x384)));

	if (t95 != 638) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MAX;
	int16_t x388 = INT16_MIN;
	int64_t t96 = INT64_MIN;

	t96 = (x385|(x386==(x387<=x388)));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	volatile uint8_t x390 = 6U;
	volatile int32_t x391 = -435570;
	static int64_t x392 = 16562076485458975LL;
	volatile int32_t t97 = INT32_MIN;

	t97 = (x389|(x390==(x391<=x392)));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MIN;
	int64_t x394 = -50976187525LL;
	int16_t x395 = INT16_MIN;
	static volatile int8_t x396 = -1;
	int32_t t98 = INT32_MIN;

	t98 = (x393|(x394==(x395<=x396)));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 1;
	int16_t x398 = 3;

	t99 = (x397|(x398==(x399<=x400)));

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

