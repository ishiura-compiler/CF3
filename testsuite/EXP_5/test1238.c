#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -20275499869959197LL;
volatile int8_t x10 = -1;
uint64_t t2 = 545085577794743LLU;
uint8_t x13 = 1U;
int32_t x14 = -464628;
int32_t x17 = -7;
static uint16_t x21 = UINT16_MAX;
int64_t t5 = -1797766431066851LL;
int8_t x30 = INT8_MIN;
int32_t t9 = -40;
volatile uint64_t x45 = UINT64_MAX;
volatile uint64_t x49 = UINT64_MAX;
int32_t t14 = 0;
volatile int8_t x62 = 2;
uint16_t x64 = UINT16_MAX;
volatile int32_t t15 = -124777;
uint32_t t16 = 7U;
volatile int8_t x70 = 4;
uint32_t x74 = 105U;
int64_t x79 = 8170871229LL;
uint64_t x83 = 2798710LLU;
uint64_t t21 = 1LLU;
int16_t x102 = 1575;
uint32_t x105 = UINT32_MAX;
int8_t x111 = INT8_MIN;
int32_t t27 = 1943536;
int8_t x116 = -1;
int8_t x118 = INT8_MIN;
uint16_t x124 = 420U;
int64_t t30 = 6746764611685LL;
volatile uint32_t x126 = UINT32_MAX;
int64_t x127 = 581896467897LL;
int16_t x128 = INT16_MAX;
volatile int32_t t31 = 454;
uint8_t x136 = 3U;
volatile int32_t t33 = 6369800;
int32_t x141 = 400445049;
static int16_t x146 = INT16_MIN;
int64_t t36 = 1896903LL;
uint64_t x157 = 4029340085674222LLU;
static uint64_t x162 = 736966LLU;
volatile uint64_t t42 = 21791249129057209LLU;
uint16_t x174 = UINT16_MAX;
static int8_t x176 = INT8_MIN;
static volatile int32_t t43 = -3407;
uint32_t x179 = 37U;
int64_t x181 = INT64_MAX;
int64_t x183 = -1LL;
static int64_t x187 = INT64_MIN;
uint64_t t46 = 1389595LLU;
static int32_t x195 = -340343942;
static int8_t x196 = INT8_MIN;
static int32_t t50 = 1512977;
int16_t x209 = INT16_MIN;
int64_t x211 = 1434562911486799LL;
int64_t t53 = 8399768985192309LL;
uint64_t x220 = 5610LLU;
int32_t x224 = -1;
volatile int64_t t55 = 45399466171913LL;
int32_t t56 = -10623216;
uint64_t t59 = 14483641LLU;
static volatile int64_t x242 = INT64_MIN;
int8_t x244 = INT8_MIN;
uint8_t x246 = 15U;
static int32_t x247 = INT32_MAX;
volatile int8_t x248 = 3;
uint8_t x252 = 17U;
volatile int8_t x253 = -1;
int64_t x257 = INT64_MIN;
static int64_t x261 = 277390796252LL;
uint16_t x266 = 235U;
volatile int8_t x272 = 7;
uint8_t x283 = 27U;
int64_t x289 = INT64_MIN;
int16_t x291 = -1;
volatile uint64_t x292 = UINT64_MAX;
volatile int16_t x294 = INT16_MIN;
uint8_t x296 = 52U;
int8_t x299 = INT8_MIN;
volatile int8_t x302 = INT8_MAX;
int8_t x304 = -1;
int64_t t75 = -8552832944526785LL;
static uint64_t x314 = 4091390590422942LLU;
int64_t t78 = -518565LL;
uint16_t x319 = 55U;
volatile uint64_t t79 = 1658371854165753473LLU;
static int16_t x323 = 112;
uint64_t x328 = 664667557997279113LLU;
static int32_t x330 = INT32_MAX;
static uint64_t x336 = 7310238LLU;
int16_t x337 = INT16_MIN;
static int8_t x338 = -1;
static int16_t x340 = INT16_MIN;
int8_t x348 = -16;
volatile int64_t t87 = 239083201647593LL;
int8_t x354 = -4;
int32_t t89 = -15014535;
int32_t x363 = INT32_MIN;
volatile uint32_t x371 = 0U;
int16_t x372 = INT16_MIN;
uint32_t t92 = 2755166U;
volatile int16_t x376 = INT16_MAX;
uint16_t x379 = UINT16_MAX;
uint64_t t95 = 2755385LLU;
volatile uint16_t x389 = 1U;
int8_t x395 = -1;
volatile int32_t t98 = -279167;
int32_t x400 = INT32_MIN;


void f0(void) {
	volatile uint64_t x1 = 1872492991547465475LLU;
	int32_t x2 = -48235;
	uint16_t x3 = UINT16_MAX;
	static uint32_t x4 = 1383357613U;
	volatile uint64_t t0 = 128779050623LLU;

	t0 = (x1*((x2==x3)%x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 27406U;
	static int64_t x6 = -1LL;
	static volatile uint16_t x7 = UINT16_MAX;
	int64_t x8 = INT64_MAX;

	t1 = (x5*((x6==x7)%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 46230865LLU;
	int64_t x11 = -1LL;
	volatile int8_t x12 = INT8_MIN;

	t2 = (x9*((x10==x11)%x12));

	if (t2 != 46230865LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x15 = 878U;
	static int64_t x16 = -1LL;
	int64_t t3 = 26LL;

	t3 = (x13*((x14==x15)%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	static uint64_t x20 = 57526003719925LLU;
	uint64_t t4 = 1835915778LLU;

	t4 = (x17*((x18==x19)%x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 3116LLU;
	int8_t x23 = 13;
	int64_t x24 = INT64_MIN;

	t5 = (x21*((x22==x23)%x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 35935783067887210LLU;
	volatile int8_t x26 = 6;
	volatile int16_t x27 = INT16_MIN;
	static int32_t x28 = INT32_MIN;
	volatile uint64_t t6 = 385077350842LLU;

	t6 = (x25*((x26==x27)%x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 5910041601529769LLU;
	volatile int64_t x31 = -100266LL;
	uint8_t x32 = UINT8_MAX;
	volatile uint64_t t7 = 7930LLU;

	t7 = (x29*((x30==x31)%x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1587153774U;
	uint8_t x34 = UINT8_MAX;
	volatile int64_t x35 = -1LL;
	volatile int64_t x36 = 73930625882721635LL;
	int64_t t8 = -26LL;

	t8 = (x33*((x34==x35)%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 7;
	int8_t x38 = 7;
	int64_t x39 = -104067937628384453LL;
	int8_t x40 = -1;

	t9 = (x37*((x38==x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int16_t x42 = 110;
	volatile uint16_t x43 = 1U;
	int32_t x44 = INT32_MIN;
	volatile int64_t t10 = 5584LL;

	t10 = (x41*((x42==x43)%x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 29U;
	volatile uint64_t x47 = 6161LLU;
	uint16_t x48 = UINT16_MAX;
	volatile uint64_t t11 = 474332800711342LLU;

	t11 = (x45*((x46==x47)%x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	volatile int8_t x51 = -1;
	int64_t x52 = -474238856394LL;
	uint64_t t12 = UINT64_MAX;

	t12 = (x49*((x50==x51)%x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	static int16_t x54 = 1;
	static int32_t x55 = -429985;
	int8_t x56 = 1;
	volatile int64_t t13 = -882871LL;

	t13 = (x53*((x54==x55)%x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -2;
	int16_t x58 = INT16_MIN;
	static int8_t x59 = INT8_MAX;
	int32_t x60 = -484988;

	t14 = (x57*((x58==x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	int8_t x63 = INT8_MIN;

	t15 = (x61*((x62==x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = 5;
	int64_t x66 = INT64_MIN;
	volatile int32_t x67 = -1;
	uint32_t x68 = UINT32_MAX;

	t16 = (x65*((x66==x67)%x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	uint16_t x71 = 1U;
	uint32_t x72 = UINT32_MAX;
	uint32_t t17 = 96882U;

	t17 = (x69*((x70==x71)%x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	uint32_t x75 = UINT32_MAX;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 26623LLU;

	t18 = (x73*((x74==x75)%x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -5;
	uint64_t x78 = UINT64_MAX;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -270222;

	t19 = (x77*((x78==x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 796651281397LL;
	static volatile int32_t x82 = INT32_MIN;
	int64_t x84 = -10778899788LL;
	static int64_t t20 = 0LL;

	t20 = (x81*((x82==x83)%x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 526681448477701185LLU;
	uint16_t x86 = UINT16_MAX;
	static int64_t x87 = 571969991601161757LL;
	int8_t x88 = INT8_MIN;

	t21 = (x85*((x86==x87)%x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int64_t x90 = -1LL;
	uint8_t x91 = 97U;
	volatile int16_t x92 = INT16_MIN;
	volatile uint32_t t22 = 0U;

	t22 = (x89*((x90==x91)%x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	uint32_t x94 = 898339988U;
	uint32_t x95 = 22U;
	int8_t x96 = INT8_MIN;
	uint64_t t23 = 4413899584859956LLU;

	t23 = (x93*((x94==x95)%x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MIN;
	uint8_t x99 = 108U;
	volatile uint32_t x100 = 241U;
	uint32_t t24 = 1357486286U;

	t24 = (x97*((x98==x99)%x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	int64_t x104 = 5767320133703070LL;
	volatile int64_t t25 = 32LL;

	t25 = (x101*((x102==x103)%x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MIN;
	int8_t x107 = -1;
	volatile uint32_t x108 = 7872338U;
	static volatile uint32_t t26 = 56832132U;

	t26 = (x105*((x106==x107)%x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = 6U;
	uint8_t x112 = 1U;

	t27 = (x109*((x110==x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	uint16_t x114 = 0U;
	volatile uint16_t x115 = UINT16_MAX;
	int32_t t28 = -39;

	t28 = (x113*((x114==x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = 59614;
	volatile int16_t x119 = 83;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 4861214;

	t29 = (x117*((x118==x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static int32_t x122 = -7;
	uint16_t x123 = 142U;

	t30 = (x121*((x122==x123)%x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;

	t31 = (x125*((x126==x127)%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = 253975373453LL;
	int64_t x130 = INT64_MAX;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MAX;
	int64_t t32 = -35035485591583610LL;

	t32 = (x129*((x130==x131)%x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MIN;

	t33 = (x133*((x134==x135)%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x137 = 337267477LLU;
	uint32_t x138 = 29803907U;
	volatile int16_t x139 = INT16_MIN;
	volatile int32_t x140 = 2;
	uint64_t t34 = 6349815931990LLU;

	t34 = (x137*((x138==x139)%x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x142 = 6U;
	volatile int8_t x143 = INT8_MIN;
	volatile uint8_t x144 = UINT8_MAX;
	int32_t t35 = -258591;

	t35 = (x141*((x142==x143)%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 5LL;
	volatile int16_t x147 = INT16_MIN;
	int64_t x148 = 170961LL;

	t36 = (x145*((x146==x147)%x148));

	if (t36 != 5LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	uint64_t x150 = UINT64_MAX;
	static int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 7321837;

	t37 = (x149*((x150==x151)%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MAX;
	int8_t x156 = -4;
	volatile int32_t t38 = -879732804;

	t38 = (x153*((x154==x155)%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = INT16_MAX;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = -29;
	uint64_t t39 = 2LLU;

	t39 = (x157*((x158==x159)%x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	volatile int64_t x163 = INT64_MAX;
	int8_t x164 = -1;
	static uint32_t t40 = 5U;

	t40 = (x161*((x162==x163)%x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 9286736069LL;
	int32_t x166 = INT32_MAX;
	uint16_t x167 = UINT16_MAX;
	static int16_t x168 = INT16_MAX;
	volatile int64_t t41 = 106034487271LL;

	t41 = (x165*((x166==x167)%x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 5447672106218LLU;
	uint64_t x170 = 60006LLU;
	int8_t x171 = INT8_MIN;
	volatile int32_t x172 = INT32_MAX;

	t42 = (x169*((x170==x171)%x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = UINT16_MAX;
	uint64_t x175 = UINT64_MAX;

	t43 = (x173*((x174==x175)%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 594364U;
	volatile int8_t x178 = -1;
	uint8_t x180 = 2U;
	volatile uint32_t t44 = 52387U;

	t44 = (x177*((x178==x179)%x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x182 = 149712490726401LLU;
	int8_t x184 = INT8_MIN;
	int64_t t45 = 64338499945LL;

	t45 = (x181*((x182==x183)%x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = -1;
	uint64_t x188 = 518191276LLU;

	t46 = (x185*((x186==x187)%x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -34823LL;
	uint32_t x190 = 699736U;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = UINT16_MAX;
	static volatile int64_t t47 = -34521167LL;

	t47 = (x189*((x190==x191)%x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 3;
	int64_t x194 = INT64_MAX;
	volatile int32_t t48 = -2;

	t48 = (x193*((x194==x195)%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 13187458;
	static int16_t x198 = -1;
	static volatile int32_t x199 = 9782;
	uint64_t x200 = 7452362913LLU;
	volatile uint64_t t49 = 1048275519897LLU;

	t49 = (x197*((x198==x199)%x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MIN;
	int32_t x202 = -1;
	static volatile int16_t x203 = -1;
	static int16_t x204 = 7882;

	t50 = (x201*((x202==x203)%x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint16_t x206 = 167U;
	int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -1763;

	t51 = (x205*((x206==x207)%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -31;

	t52 = (x209*((x210==x211)%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	int64_t x215 = -22586212225LL;
	int64_t x216 = INT64_MIN;

	t53 = (x213*((x214==x215)%x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static uint32_t x218 = 50793U;
	static uint16_t x219 = UINT16_MAX;
	uint64_t t54 = 63471LLU;

	t54 = (x217*((x218==x219)%x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = -8;
	static int64_t x223 = INT64_MIN;

	t55 = (x221*((x222==x223)%x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = 15U;
	int16_t x227 = -1;
	int32_t x228 = -2595;

	t56 = (x225*((x226==x227)%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	volatile uint64_t x230 = UINT64_MAX;
	volatile int8_t x231 = INT8_MAX;
	int32_t x232 = -1;
	int32_t t57 = -881;

	t57 = (x229*((x230==x231)%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 8724166U;
	int16_t x234 = 11;
	int32_t x235 = INT32_MIN;
	volatile int32_t x236 = -1;
	uint32_t t58 = 559U;

	t58 = (x233*((x234==x235)%x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	uint16_t x238 = 8U;
	static int64_t x239 = -1LL;
	uint64_t x240 = 2052245171183LLU;

	t59 = (x237*((x238==x239)%x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 195850;
	uint32_t x243 = 0U;
	volatile int32_t t60 = -353;

	t60 = (x241*((x242==x243)%x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	volatile int64_t t61 = 0LL;

	t61 = (x245*((x246==x247)%x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -126;
	volatile int32_t t62 = 1;

	t62 = (x249*((x250==x251)%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x254 = 2U;
	uint64_t x255 = 32002448345509606LLU;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -598177322;

	t63 = (x253*((x254==x255)%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 1LLU;
	volatile uint8_t x259 = UINT8_MAX;
	static volatile uint16_t x260 = 55U;
	int64_t t64 = -3388613LL;

	t64 = (x257*((x258==x259)%x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = UINT8_MAX;
	int64_t x263 = INT64_MIN;
	volatile int64_t x264 = INT64_MAX;
	volatile int64_t t65 = 1LL;

	t65 = (x261*((x262==x263)%x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 0;
	uint64_t x267 = 12906972841839LLU;
	volatile int64_t x268 = -2007567LL;
	volatile int64_t t66 = 112LL;

	t66 = (x265*((x266==x267)%x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	volatile int64_t t67 = -19795812421748LL;

	t67 = (x269*((x270==x271)%x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 215165;
	int8_t x274 = INT8_MIN;
	static int64_t x275 = INT64_MIN;
	int8_t x276 = -1;
	volatile int32_t t68 = 12001;

	t68 = (x273*((x274==x275)%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = -1;
	volatile uint32_t x278 = 459U;
	int32_t x279 = INT32_MIN;
	static volatile int16_t x280 = INT16_MAX;
	static volatile int32_t t69 = -1;

	t69 = (x277*((x278==x279)%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = 80028U;
	uint64_t x282 = UINT64_MAX;
	int16_t x284 = -3783;
	uint32_t t70 = 0U;

	t70 = (x281*((x282==x283)%x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 0U;
	volatile int16_t x286 = INT16_MIN;
	static int8_t x287 = 4;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = -112870412;

	t71 = (x285*((x286==x287)%x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = UINT64_MAX;
	volatile uint64_t t72 = 283564232381685LLU;

	t72 = (x289*((x290==x291)%x292));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 829134181U;
	int16_t x295 = -86;
	uint32_t t73 = 45100U;

	t73 = (x293*((x294==x295)%x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int8_t x298 = INT8_MAX;
	int64_t x300 = -21LL;
	int64_t t74 = 147LL;

	t74 = (x297*((x298==x299)%x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MAX;
	uint64_t x303 = UINT64_MAX;

	t75 = (x301*((x302==x303)%x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;
	uint32_t x307 = 99837U;
	volatile uint16_t x308 = 3569U;
	volatile int64_t t76 = 15371118796000LL;

	t76 = (x305*((x306==x307)%x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x310 = 16875521031359431LL;
	uint16_t x311 = UINT16_MAX;
	volatile uint8_t x312 = 10U;
	static volatile uint32_t t77 = 0U;

	t77 = (x309*((x310==x311)%x312));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	int8_t x315 = 0;
	int64_t x316 = -1LL;

	t78 = (x313*((x314==x315)%x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MAX;
	int32_t x320 = -1;

	t79 = (x317*((x318==x319)%x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	static volatile int32_t x322 = INT32_MIN;
	volatile uint8_t x324 = UINT8_MAX;
	int32_t t80 = 24085573;

	t80 = (x321*((x322==x323)%x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	volatile int64_t x326 = 732LL;
	int64_t x327 = INT64_MIN;
	uint64_t t81 = 1017694506LLU;

	t81 = (x325*((x326==x327)%x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 56U;
	int32_t x331 = INT32_MIN;
	volatile uint64_t x332 = 5631125104LLU;
	uint64_t t82 = 52751LLU;

	t82 = (x329*((x330==x331)%x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	volatile uint64_t x334 = 8090856304323862LLU;
	static int64_t x335 = -2152574916019430735LL;
	volatile uint64_t t83 = 100622197909794LLU;

	t83 = (x333*((x334==x335)%x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x339 = INT8_MIN;
	static int32_t t84 = -282;

	t84 = (x337*((x338==x339)%x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	int8_t x344 = -1;
	static volatile int32_t t85 = 43;

	t85 = (x341*((x342==x343)%x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x345 = 304U;
	volatile int16_t x346 = INT16_MIN;
	uint32_t x347 = 18136U;
	int32_t t86 = -15;

	t86 = (x345*((x346==x347)%x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = INT64_MIN;
	int32_t x350 = INT32_MIN;
	int8_t x351 = -11;
	volatile int16_t x352 = INT16_MIN;

	t87 = (x349*((x350==x351)%x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x355 = 0U;
	static int32_t x356 = -180;
	int32_t t88 = 6117;

	t88 = (x353*((x354==x355)%x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int32_t x358 = INT32_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;

	t89 = (x357*((x358==x359)%x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = -112772621LL;
	int16_t x362 = INT16_MIN;
	int8_t x364 = INT8_MAX;
	volatile int64_t t90 = -12242306351137550LL;

	t90 = (x361*((x362==x363)%x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = -1;
	volatile int64_t x367 = 360LL;
	uint64_t x368 = UINT64_MAX;
	uint64_t t91 = 132363423LLU;

	t91 = (x365*((x366==x367)%x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 532223U;
	uint64_t x370 = 1981986330685LLU;

	t92 = (x369*((x370==x371)%x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	static int64_t x374 = -1LL;
	static int32_t x375 = -1;
	volatile int32_t t93 = -463773;

	t93 = (x373*((x374==x375)%x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 245U;
	uint32_t x378 = 18683U;
	volatile int8_t x380 = INT8_MIN;
	volatile uint32_t t94 = 37154677U;

	t94 = (x377*((x378==x379)%x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	int16_t x382 = 5;
	static volatile uint32_t x383 = UINT32_MAX;
	uint64_t x384 = 500LLU;

	t95 = (x381*((x382==x383)%x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static uint8_t x386 = 0U;
	uint8_t x387 = 0U;
	volatile uint64_t x388 = UINT64_MAX;
	volatile uint64_t t96 = 21666834LLU;

	t96 = (x385*((x386==x387)%x388));

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = 6;
	int8_t x391 = INT8_MIN;
	static int8_t x392 = INT8_MAX;
	int32_t t97 = 2068003;

	t97 = (x389*((x390==x391)%x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int8_t x394 = -1;
	uint8_t x396 = 20U;

	t98 = (x393*((x394==x395)%x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int32_t x399 = 3757;
	volatile int32_t t99 = 175;

	t99 = (x397*((x398==x399)%x400));

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

