#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -2;
static int8_t x2 = 3;
int64_t x10 = -1LL;
volatile int64_t t2 = -6156133502251098LL;
int8_t x16 = -1;
static volatile uint32_t t3 = 166271U;
int32_t x18 = -8;
uint16_t x21 = 2U;
int32_t x29 = INT32_MAX;
volatile int64_t x30 = -1LL;
volatile int16_t x33 = -1;
int32_t x41 = INT32_MIN;
static uint16_t x50 = 6882U;
int8_t x59 = -24;
uint16_t x60 = 0U;
int32_t x61 = INT32_MAX;
static int64_t x68 = 696139973LL;
int32_t x73 = 36;
int64_t x77 = -104210319578600470LL;
static uint64_t x89 = 55187759LLU;
int32_t x92 = INT32_MAX;
uint32_t x94 = 278573U;
uint32_t x96 = 61U;
uint16_t x105 = UINT16_MAX;
static int8_t x107 = INT8_MIN;
int32_t x108 = 572929;
uint64_t x116 = 497LLU;
int64_t x128 = -1LL;
volatile int64_t t31 = 46968LL;
int32_t t32 = 1970728;
int8_t x138 = INT8_MIN;
static volatile uint32_t x144 = 4142220U;
static int32_t t36 = 1620488;
volatile uint64_t x154 = 35707580354115620LLU;
uint32_t x156 = 2007987U;
uint32_t x157 = 11671544U;
static volatile int32_t x160 = -4789;
volatile int32_t x163 = -656943986;
int64_t x165 = 813432843432031410LL;
static uint64_t x166 = 782996468793LLU;
uint32_t x173 = 706445U;
uint64_t x174 = 23324655287373526LLU;
int64_t t43 = 32838270906LL;
int16_t x184 = -4;
int16_t x191 = 28;
int32_t t47 = 2;
static volatile int32_t t48 = 26313701;
int8_t x202 = INT8_MAX;
static int32_t t49 = -2010925;
uint64_t x205 = UINT64_MAX;
static uint32_t x215 = 65307U;
int8_t x221 = -1;
volatile uint16_t x223 = UINT16_MAX;
int32_t x227 = INT32_MIN;
volatile uint32_t t55 = 0U;
int32_t x229 = -3392;
int32_t t56 = -31;
static int8_t x240 = 27;
int64_t x250 = 6177924LL;
volatile uint64_t x251 = UINT64_MAX;
static int8_t x252 = -1;
static int16_t x256 = INT16_MIN;
int32_t x262 = INT32_MIN;
int16_t x271 = INT16_MIN;
static int16_t x273 = INT16_MIN;
int8_t x282 = INT8_MAX;
int16_t x283 = -254;
int64_t x287 = -1LL;
int32_t x291 = INT32_MIN;
volatile int16_t x292 = -2;
int16_t x294 = -3786;
static int8_t x296 = INT8_MAX;
uint8_t x297 = 0U;
uint32_t x300 = 439311U;
int64_t x302 = -1LL;
int64_t x303 = INT64_MIN;
int16_t x312 = -7912;
uint64_t x314 = 5064444838518LLU;
static int32_t x335 = INT32_MIN;
int64_t x346 = INT64_MAX;
static int64_t x348 = INT64_MAX;
volatile int16_t x353 = -1;
int64_t x356 = -1LL;
volatile uint32_t t86 = 24U;
int32_t x358 = INT32_MIN;
static volatile int16_t x365 = -1;
int32_t x366 = INT32_MIN;
int8_t x370 = INT8_MIN;
volatile int8_t x375 = INT8_MIN;
uint32_t x382 = 1058014U;
int16_t x384 = INT16_MIN;
int8_t x386 = INT8_MAX;
static int16_t x390 = INT16_MIN;
uint64_t t95 = 14LLU;
int32_t x397 = -1;
int8_t x398 = -8;
int16_t x400 = INT16_MIN;
static int32_t t96 = -9;
uint64_t x401 = 33992319701358300LLU;


void f0(void) {
	volatile uint64_t x3 = 105199929LLU;
	static volatile uint8_t x4 = UINT8_MAX;
	static int32_t t0 = 760;

	t0 = (x1/(x2|(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1960;
	int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	int32_t x8 = 501166087;
	volatile int64_t t1 = -53LL;

	t1 = (x5/(x6|(x7==x8)));

	if (t1 != -1960LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = 202937U;
	uint32_t x11 = 545895U;
	int32_t x12 = 3541144;

	t2 = (x9/(x10|(x11==x12)));

	if (t2 != -202937LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	uint32_t x14 = 355548392U;
	int8_t x15 = 11;

	t3 = (x13/(x14|(x15==x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -4005466369565LL;
	uint16_t x19 = UINT16_MAX;
	int32_t x20 = -1;
	volatile int64_t t4 = 5487137058910LL;

	t4 = (x17/(x18|(x19==x20)));

	if (t4 != 500683296195LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 32569992U;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = INT8_MAX;
	volatile uint32_t t5 = 101480U;

	t5 = (x21/(x22|(x23==x24)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 2075656211LLU;
	uint32_t x26 = 7175638U;
	static int8_t x27 = INT8_MAX;
	volatile int32_t x28 = INT32_MAX;
	volatile uint64_t t6 = 6LLU;

	t6 = (x25/(x26|(x27==x28)));

	if (t6 != 289LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = -1;
	static int8_t x32 = 24;
	volatile int64_t t7 = -37920LL;

	t7 = (x29/(x30|(x31==x32)));

	if (t7 != -2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 1740541014U;
	uint32_t x35 = UINT32_MAX;
	uint16_t x36 = UINT16_MAX;
	volatile uint32_t t8 = 16007U;

	t8 = (x33/(x34|(x35==x36)));

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MIN;
	int32_t x43 = 11293572;
	int32_t x44 = 288005388;
	int32_t t9 = -30;

	t9 = (x41/(x42|(x43==x44)));

	if (t9 != 16777216) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	uint64_t x46 = 6772717LLU;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MAX;
	volatile uint64_t t10 = 14100651LLU;

	t10 = (x45/(x46|(x47==x48)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int64_t x51 = 3160517879033261920LL;
	volatile int16_t x52 = INT16_MAX;
	int32_t t11 = -5589765;

	t11 = (x49/(x50|(x51==x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	static int8_t x54 = 8;
	int16_t x55 = INT16_MAX;
	int32_t x56 = -10643;
	int64_t t12 = -2331312138503142438LL;

	t12 = (x53/(x54|(x55==x56)));

	if (t12 != -1152921504606846976LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 7U;
	int8_t x58 = -1;
	volatile int32_t t13 = -25336381;

	t13 = (x57/(x58|(x59==x60)));

	if (t13 != -7) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x62 = 2641U;
	static int8_t x63 = INT8_MAX;
	volatile uint8_t x64 = 29U;
	static volatile int32_t t14 = 4;

	t14 = (x61/(x62|(x63==x64)));

	if (t14 != 813132) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	volatile int32_t x66 = 238257;
	static int64_t x67 = 339386874693LL;
	static volatile int32_t t15 = 4258;

	t15 = (x65/(x66|(x67==x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 1074086081519962872LLU;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 519405269315LLU;
	uint64_t t16 = 3544LLU;

	t16 = (x69/(x70|(x71==x72)));

	if (t16 != 16389503036849LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MAX;
	int64_t x75 = 964999341LL;
	uint8_t x76 = 19U;
	int64_t t17 = -49878728LL;

	t17 = (x73/(x74|(x75==x76)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MAX;
	volatile int64_t x79 = -1LL;
	int16_t x80 = 2;
	int64_t t18 = 0LL;

	t18 = (x77/(x78|(x79==x80)));

	if (t18 != -48526711LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = 19U;
	uint64_t x82 = UINT64_MAX;
	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = 1;
	volatile uint64_t t19 = 66172LLU;

	t19 = (x81/(x82|(x83==x84)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	static uint64_t x86 = UINT64_MAX;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;
	uint64_t t20 = 7872668302337443228LLU;

	t20 = (x85/(x86|(x87==x88)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	static volatile uint64_t t21 = 370LLU;

	t21 = (x89/(x90|(x91==x92)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x95 = 1U;
	static uint32_t t22 = 3690U;

	t22 = (x93/(x94|(x95==x96)));

	if (t22 != 15417U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MAX;
	uint16_t x99 = 177U;
	int16_t x100 = INT16_MIN;
	int32_t t23 = -7;

	t23 = (x97/(x98|(x99==x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	int64_t x102 = -179847600199532LL;
	int16_t x103 = -1;
	static int32_t x104 = -156876;
	volatile int64_t t24 = 60360781LL;

	t24 = (x101/(x102|(x103==x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = 15232076;
	volatile int32_t t25 = 14055435;

	t25 = (x105/(x106|(x107==x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 116U;
	uint8_t x110 = 84U;
	volatile int64_t x111 = 4069523624274955129LL;
	int8_t x112 = -1;
	int32_t t26 = 56503;

	t26 = (x109/(x110|(x111==x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = -1;
	int32_t x114 = 249638;
	int32_t x115 = INT32_MIN;
	int32_t t27 = 345503653;

	t27 = (x113/(x114|(x115==x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = 91;
	static uint16_t x118 = 2916U;
	int32_t x119 = 1;
	uint32_t x120 = 0U;
	volatile int32_t t28 = 1;

	t28 = (x117/(x118|(x119==x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = UINT32_MAX;
	int16_t x122 = -1;
	int8_t x123 = -1;
	int32_t x124 = 3;
	uint32_t t29 = 980518U;

	t29 = (x121/(x122|(x123==x124)));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	volatile int8_t x126 = INT8_MIN;
	static int8_t x127 = 29;
	volatile int32_t t30 = -197;

	t30 = (x125/(x126|(x127==x128)));

	if (t30 != 256) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -1LL;
	int32_t x130 = INT32_MAX;
	volatile int64_t x131 = INT64_MAX;
	static int32_t x132 = -234623959;

	t31 = (x129/(x130|(x131==x132)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 20U;
	uint16_t x134 = 602U;
	int8_t x135 = INT8_MIN;
	int16_t x136 = -1;

	t32 = (x133/(x134|(x135==x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -269168;
	int8_t x139 = -1;
	uint32_t x140 = UINT32_MAX;
	static volatile int32_t t33 = -359;

	t33 = (x137/(x138|(x139==x140)));

	if (t33 != 2119) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = 11174LL;
	int8_t x142 = -1;
	static uint64_t x143 = UINT64_MAX;
	int64_t t34 = 208114948149949213LL;

	t34 = (x141/(x142|(x143==x144)));

	if (t34 != -11174LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	uint16_t x146 = UINT16_MAX;
	volatile int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	static volatile int32_t t35 = -129925;

	t35 = (x145/(x146|(x147==x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = UINT16_MAX;
	volatile uint8_t x150 = 4U;
	int32_t x151 = INT32_MIN;
	int16_t x152 = INT16_MIN;

	t36 = (x149/(x150|(x151==x152)));

	if (t36 != 16383) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = INT8_MAX;
	int16_t x155 = INT16_MIN;
	static volatile uint64_t t37 = 3LLU;

	t37 = (x153/(x154|(x155==x156)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MAX;
	volatile uint32_t t38 = 6U;

	t38 = (x157/(x158|(x159==x160)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -1;
	static volatile int64_t x162 = 4101855676135LL;
	uint64_t x164 = 30063LLU;
	volatile int64_t t39 = 1005397901485039542LL;

	t39 = (x161/(x162|(x163==x164)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x167 = INT16_MAX;
	static volatile int8_t x168 = INT8_MIN;
	static volatile uint64_t t40 = 52LLU;

	t40 = (x165/(x166|(x167==x168)));

	if (t40 != 1038871LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 15777U;
	int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MIN;
	volatile int32_t x172 = -1;
	volatile int64_t t41 = -3205789788950042LL;

	t41 = (x169/(x170|(x171==x172)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x175 = 149252U;
	int16_t x176 = -38;
	uint64_t t42 = 43240LLU;

	t42 = (x173/(x174|(x175==x176)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	static volatile int64_t x178 = INT64_MAX;
	volatile int32_t x179 = INT32_MIN;
	int64_t x180 = 227827955512LL;

	t43 = (x177/(x178|(x179==x180)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = UINT64_MAX;
	static volatile int64_t x182 = INT64_MIN;
	uint16_t x183 = UINT16_MAX;
	volatile uint64_t t44 = 58422022791837991LLU;

	t44 = (x181/(x182|(x183==x184)));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -880LL;
	volatile uint32_t x186 = UINT32_MAX;
	int16_t x187 = -1;
	volatile int64_t x188 = INT64_MAX;
	volatile int64_t t45 = 58756LL;

	t45 = (x185/(x186|(x187==x188)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = -1LL;
	int8_t x190 = INT8_MIN;
	static int8_t x192 = INT8_MIN;
	static int64_t t46 = 12LL;

	t46 = (x189/(x190|(x191==x192)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	volatile uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MIN;
	volatile uint64_t x196 = UINT64_MAX;

	t47 = (x193/(x194|(x195==x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x197 = -1;
	int32_t x198 = INT32_MIN;
	int64_t x199 = 252751975955LL;
	int32_t x200 = -798381649;

	t48 = (x197/(x198|(x199==x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MAX;
	static int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;

	t49 = (x201/(x202|(x203==x204)));

	if (t49 != 16909320) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x206 = INT64_MAX;
	uint32_t x207 = 2U;
	int64_t x208 = INT64_MIN;
	uint64_t t50 = 178383377025889190LLU;

	t50 = (x205/(x206|(x207==x208)));

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x209 = 1829LLU;
	volatile int64_t x210 = INT64_MIN;
	volatile uint8_t x211 = 10U;
	int32_t x212 = -117519;
	static uint64_t t51 = 1179930LLU;

	t51 = (x209/(x210|(x211==x212)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 4U;
	static uint8_t x214 = UINT8_MAX;
	volatile uint8_t x216 = UINT8_MAX;
	volatile uint32_t t52 = 4313599U;

	t52 = (x213/(x214|(x215==x216)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x217 = 9U;
	int64_t x218 = INT64_MIN;
	uint32_t x219 = 216841U;
	int16_t x220 = 11403;
	int64_t t53 = -11520LL;

	t53 = (x217/(x218|(x219==x220)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x222 = INT32_MAX;
	uint16_t x224 = 116U;
	static int32_t t54 = 80;

	t54 = (x221/(x222|(x223==x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MAX;
	static uint32_t x226 = 101594710U;
	uint16_t x228 = 130U;

	t55 = (x225/(x226|(x227==x228)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = INT32_MIN;
	uint16_t x231 = UINT16_MAX;
	uint64_t x232 = UINT64_MAX;

	t56 = (x229/(x230|(x231==x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MAX;
	volatile uint16_t x234 = UINT16_MAX;
	int8_t x235 = 0;
	int64_t x236 = INT64_MIN;
	static int32_t t57 = 275096879;

	t57 = (x233/(x234|(x235==x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MIN;
	int8_t x239 = -1;
	volatile int64_t t58 = 1LL;

	t58 = (x237/(x238|(x239==x240)));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = INT64_MAX;
	uint64_t x242 = 4558456132544207823LLU;
	static int16_t x243 = INT16_MIN;
	int16_t x244 = 8589;
	volatile uint64_t t59 = 25983LLU;

	t59 = (x241/(x242|(x243==x244)));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -1;
	static int16_t x246 = INT16_MAX;
	int8_t x247 = INT8_MIN;
	static volatile int32_t x248 = INT32_MAX;
	static int32_t t60 = 7355114;

	t60 = (x245/(x246|(x247==x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	static int64_t t61 = 1014260020090LL;

	t61 = (x249/(x250|(x251==x252)));

	if (t61 != -1492956297924LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MAX;
	int16_t x254 = -1;
	int64_t x255 = -1LL;
	volatile int64_t t62 = 22315005838129LL;

	t62 = (x253/(x254|(x255==x256)));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x257 = 3U;
	uint16_t x258 = 14U;
	volatile int32_t x259 = -3;
	static uint64_t x260 = UINT64_MAX;
	int32_t t63 = 53398968;

	t63 = (x257/(x258|(x259==x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = INT32_MAX;
	uint32_t x263 = 11883U;
	static volatile int64_t x264 = 81LL;
	int32_t t64 = 937;

	t64 = (x261/(x262|(x263==x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x265 = -1308;
	int8_t x266 = 1;
	uint8_t x267 = 86U;
	int8_t x268 = INT8_MIN;
	volatile int32_t t65 = -1;

	t65 = (x265/(x266|(x267==x268)));

	if (t65 != -1308) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = -1LL;
	static int8_t x270 = 1;
	uint64_t x272 = UINT64_MAX;
	static int64_t t66 = 0LL;

	t66 = (x269/(x270|(x271==x272)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x274 = INT64_MIN;
	uint32_t x275 = 145U;
	static volatile int32_t x276 = INT32_MAX;
	volatile int64_t t67 = -2554LL;

	t67 = (x273/(x274|(x275==x276)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	volatile int16_t x279 = 10658;
	int32_t x280 = -30573;
	static int64_t t68 = 9033629022973133LL;

	t68 = (x277/(x278|(x279==x280)));

	if (t68 != 2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int32_t x284 = 3659089;
	int32_t t69 = -58;

	t69 = (x281/(x282|(x283==x284)));

	if (t69 != 516) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x285 = UINT8_MAX;
	int32_t x286 = -425412149;
	int8_t x288 = INT8_MAX;
	int32_t t70 = 0;

	t70 = (x285/(x286|(x287==x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 1871U;
	int64_t x290 = INT64_MAX;
	int64_t t71 = 4025512873843LL;

	t71 = (x289/(x290|(x291==x292)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = INT32_MIN;
	uint32_t x295 = 2129441U;
	volatile int32_t t72 = -760;

	t72 = (x293/(x294|(x295==x296)));

	if (t72 != 567217) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x298 = 10017U;
	static int16_t x299 = -1;
	uint32_t t73 = 2987U;

	t73 = (x297/(x298|(x299==x300)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = 1819477758LLU;
	volatile uint16_t x304 = UINT16_MAX;
	volatile uint64_t t74 = 6773067425LLU;

	t74 = (x301/(x302|(x303==x304)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x305 = INT32_MIN;
	static uint32_t x306 = 1660U;
	volatile int8_t x307 = INT8_MAX;
	int32_t x308 = -238;
	static uint32_t t75 = 108177295U;

	t75 = (x305/(x306|(x307==x308)));

	if (t75 != 1293664U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = -1;
	volatile int64_t x310 = -114809211634LL;
	int64_t x311 = -10053LL;
	int64_t t76 = 2448246551076LL;

	t76 = (x309/(x310|(x311==x312)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	volatile uint32_t x315 = 882807174U;
	static int32_t x316 = INT32_MIN;
	static uint64_t t77 = 18086486725589878LLU;

	t77 = (x313/(x314|(x315==x316)));

	if (t77 != 1821201LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 56U;
	int16_t x318 = 189;
	int8_t x319 = -1;
	int32_t x320 = -1;
	volatile int32_t t78 = -1871970;

	t78 = (x317/(x318|(x319==x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	int64_t x322 = -916LL;
	int32_t x323 = -1;
	uint32_t x324 = 22U;
	volatile int64_t t79 = 414938LL;

	t79 = (x321/(x322|(x323==x324)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MIN;
	int64_t x327 = 7843800LL;
	int16_t x328 = INT16_MIN;
	int32_t t80 = 2416858;

	t80 = (x325/(x326|(x327==x328)));

	if (t80 != -65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = 15U;
	uint32_t x330 = 720428U;
	uint16_t x331 = 178U;
	static int64_t x332 = INT64_MIN;
	volatile uint32_t t81 = 0U;

	t81 = (x329/(x330|(x331==x332)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x333 = 1193636871654LLU;
	int8_t x334 = -2;
	uint16_t x336 = 104U;
	volatile uint64_t t82 = 1047060439272LLU;

	t82 = (x333/(x334|(x335==x336)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = 3;
	int32_t x342 = INT32_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t83 = 1706271;

	t83 = (x341/(x342|(x343==x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x345 = -1716032848356019896LL;
	uint16_t x347 = 0U;
	static int64_t t84 = -7804809582LL;

	t84 = (x345/(x346|(x347==x348)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 5143293035797LLU;
	uint32_t x352 = 65025U;
	int64_t t85 = 22157729432LL;

	t85 = (x349/(x350|(x351==x352)));

	if (t85 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x354 = 637U;
	static int32_t x355 = INT32_MIN;

	t86 = (x353/(x354|(x355==x356)));

	if (t86 != 6742491U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MIN;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t87 = 854;

	t87 = (x357/(x358|(x359==x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MAX;
	volatile int32_t x364 = 46;
	volatile int32_t t88 = 6318;

	t88 = (x361/(x362|(x363==x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x367 = -282693947056185697LL;
	int8_t x368 = INT8_MIN;
	volatile int32_t t89 = -63;

	t89 = (x365/(x366|(x367==x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -528541510;
	int64_t x371 = INT64_MIN;
	int32_t x372 = -1957732;
	static volatile int32_t t90 = 61;

	t90 = (x369/(x370|(x371==x372)));

	if (t90 != 4129230) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 121U;
	static volatile int8_t x376 = -1;
	uint64_t t91 = 3171148958165011807LLU;

	t91 = (x373/(x374|(x375==x376)));

	if (t91 != 152452430361235963LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x381 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	volatile int64_t t92 = 1520670158678808133LL;

	t92 = (x381/(x382|(x383==x384)));

	if (t92 != -8717627589856LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = 3562;
	int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t93 = 7064;

	t93 = (x385/(x386|(x387==x388)));

	if (t93 != 28) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int16_t x391 = INT16_MIN;
	static volatile int32_t x392 = INT32_MIN;
	volatile uint32_t t94 = 64688573U;

	t94 = (x389/(x390|(x391==x392)));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = UINT64_MAX;
	uint64_t x394 = 1096196103544447428LLU;
	static int8_t x395 = -1;
	int64_t x396 = 3569136321710841LL;

	t95 = (x393/(x394|(x395==x396)));

	if (t95 != 16LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x399 = INT32_MAX;

	t96 = (x397/(x398|(x399==x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x402 = 1;
	int32_t x403 = INT32_MIN;
	int16_t x404 = 12;
	volatile uint64_t t97 = 12577207572932088LLU;

	t97 = (x401/(x402|(x403==x404)));

	if (t97 != 33992319701358300LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = 12U;
	uint64_t x406 = 19472812LLU;
	uint64_t x407 = 22313LLU;
	uint8_t x408 = UINT8_MAX;
	volatile uint64_t t98 = 0LLU;

	t98 = (x405/(x406|(x407==x408)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = 0U;
	volatile uint64_t x410 = UINT64_MAX;
	uint8_t x411 = 1U;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t99 = 3421LLU;

	t99 = (x409/(x410|(x411==x412)));

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

