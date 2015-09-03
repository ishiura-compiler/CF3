#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = -1LL;
int64_t x9 = INT64_MAX;
uint16_t x13 = UINT16_MAX;
static int8_t x14 = INT8_MIN;
int8_t x16 = -7;
volatile uint16_t x21 = 0U;
int16_t x28 = 31;
uint8_t x31 = UINT8_MAX;
int8_t x34 = 0;
volatile uint64_t t7 = 210LLU;
int64_t x37 = INT64_MIN;
uint16_t x41 = 115U;
static volatile int8_t x44 = 12;
uint64_t x56 = 17403LLU;
volatile int64_t t14 = 14400632929LL;
static int64_t x86 = -1LL;
int16_t x89 = INT16_MIN;
uint32_t x104 = 15U;
static uint64_t t22 = 319842494428817LLU;
volatile int64_t x112 = -1LL;
volatile int64_t t24 = 0LL;
int16_t x125 = -12405;
int64_t t26 = -14903176LL;
volatile int8_t x137 = INT8_MAX;
uint8_t x140 = UINT8_MAX;
int16_t x144 = INT16_MIN;
int8_t x149 = INT8_MIN;
static uint64_t t31 = 266634LLU;
uint16_t x158 = UINT16_MAX;
int64_t x162 = INT64_MAX;
static uint16_t x163 = UINT16_MAX;
volatile int8_t x169 = -35;
uint64_t x170 = 1813187430569817LLU;
static int64_t x171 = -1LL;
static volatile uint64_t t35 = 376307669388587LLU;
uint8_t x187 = 69U;
volatile uint16_t x193 = UINT16_MAX;
int64_t x195 = -311LL;
int8_t x196 = 3;
int16_t x197 = INT16_MIN;
int32_t x198 = INT32_MIN;
uint64_t x203 = UINT64_MAX;
volatile uint64_t t43 = 3LLU;
int8_t x209 = INT8_MAX;
volatile uint32_t t46 = 591445412U;
uint8_t x224 = 54U;
uint16_t x232 = 7278U;
int64_t x235 = 5LL;
static volatile int32_t t51 = 1147626;
static int64_t x241 = INT64_MIN;
static int64_t x244 = -1LL;
volatile uint64_t t53 = 2858LLU;
uint8_t x257 = 2U;
volatile uint64_t x258 = 6LLU;
static uint64_t x259 = 4LLU;
volatile uint64_t x263 = UINT64_MAX;
uint64_t t56 = 14228734966LLU;
static int8_t x274 = 8;
uint64_t x276 = 1567279141LLU;
int8_t x283 = INT8_MIN;
int32_t x284 = -1;
uint8_t x288 = 3U;
volatile int32_t t61 = 496241528;
static int64_t x289 = -8047100LL;
int32_t x290 = -475800980;
static int8_t x291 = -1;
volatile int64_t x292 = INT64_MAX;
volatile int8_t x293 = 10;
volatile uint16_t x304 = 11887U;
int16_t x307 = 659;
volatile uint8_t x310 = 7U;
uint32_t x311 = 1515072668U;
volatile uint64_t t67 = 1669234223LLU;
int32_t x346 = -1162295;
static int16_t x347 = INT16_MAX;
int64_t x350 = INT64_MIN;
volatile uint64_t x362 = UINT64_MAX;
int8_t x376 = INT8_MIN;
volatile int32_t t74 = -875;
static volatile uint16_t x377 = UINT16_MAX;
int16_t x380 = -1;
volatile int8_t x384 = 37;
int64_t x385 = 1030536030085491LL;
volatile uint8_t x388 = 9U;
volatile uint32_t t78 = 123133U;
int32_t x394 = INT32_MAX;
static uint64_t t79 = 771979325LLU;
static uint64_t t82 = 45535LLU;
volatile int32_t x423 = 752821288;
int32_t x424 = -1;
static uint16_t x436 = UINT16_MAX;
volatile uint8_t x447 = 120U;
volatile int8_t x448 = INT8_MIN;
static int16_t x450 = 46;
uint32_t x451 = 26U;
volatile int8_t x452 = 28;
int8_t x453 = INT8_MAX;
static int32_t x454 = -1;
int32_t x459 = INT32_MAX;
volatile int64_t x462 = -1LL;
static volatile int64_t t91 = 11627LL;
int64_t x474 = 1693LL;
int32_t x480 = 54221;
static int8_t x484 = 14;
volatile int32_t x486 = -291847;
int64_t x487 = -572929355577066LL;
uint8_t x488 = 13U;
int32_t x491 = -1;
static volatile int16_t x492 = 6556;
uint64_t x495 = 100489805LLU;
volatile uint64_t t98 = 20LLU;
uint32_t x500 = 3221U;
int64_t t99 = -3LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint16_t x2 = UINT16_MAX;
	int32_t x4 = INT32_MIN;
	int64_t t0 = 496508111976027LL;

	t0 = (x1/(x2^(x3*x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile uint8_t x6 = 22U;
	static volatile int8_t x7 = INT8_MAX;
	int8_t x8 = -1;
	static uint32_t t1 = 23U;

	t1 = (x5/(x6^(x7*x8)));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = 1;
	int8_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int64_t t2 = -1LL;

	t2 = (x9/(x10^(x11*x12)));

	if (t2 != 281466387038200LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 0;

	t3 = (x13/(x14^(x15*x16)));

	if (t3 != -63) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	volatile uint16_t x23 = 23U;
	static volatile int32_t x24 = -1;
	int32_t t4 = -3127;

	t4 = (x21/(x22^(x23*x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MIN;
	volatile int64_t x27 = 207830197LL;
	volatile int64_t t5 = -1293LL;

	t5 = (x25/(x26^(x27*x28)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 32U;
	int16_t x30 = INT16_MIN;
	uint8_t x32 = 105U;
	int32_t t6 = -3;

	t6 = (x29/(x30^(x31*x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = 9171698345573004LLU;

	t7 = (x33/(x34^(x35*x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = UINT16_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	static int8_t x40 = INT8_MIN;
	volatile int64_t t8 = -56532980251LL;

	t8 = (x37/(x38^(x39*x40)));

	if (t8 != 280371220380423LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = -1;
	int16_t x43 = INT16_MAX;
	int32_t t9 = -135652364;

	t9 = (x41/(x42^(x43*x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 16024;
	volatile int16_t x46 = -1;
	int8_t x47 = INT8_MIN;
	volatile int64_t x48 = 14116575142419949LL;
	static volatile int64_t t10 = 6074060913LL;

	t10 = (x45/(x46^(x47*x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	static uint16_t x55 = 287U;
	volatile uint64_t t11 = 197452678843358880LLU;

	t11 = (x53/(x54^(x55*x56)));

	if (t11 != 3693253322154LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -2921;
	volatile int16_t x58 = INT16_MAX;
	volatile int32_t x59 = INT32_MIN;
	static uint64_t x60 = 295068LLU;
	uint64_t t12 = 2589741264LLU;

	t12 = (x57/(x58^(x59*x60)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = -1;
	uint16_t x62 = UINT16_MAX;
	static uint32_t x63 = 5598U;
	int8_t x64 = 49;
	uint32_t t13 = 1686339U;

	t13 = (x61/(x62^(x63*x64)));

	if (t13 != 13612U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MIN;
	int16_t x67 = -119;
	uint16_t x68 = UINT16_MAX;

	t14 = (x65/(x66^(x67*x68)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -2;
	static uint64_t x74 = 615LLU;
	int32_t x75 = -1;
	volatile int16_t x76 = -1;
	volatile uint64_t t15 = 20113148435023LLU;

	t15 = (x73/(x74^(x75*x76)));

	if (t15 != 30043557123305458LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = UINT16_MAX;
	static int64_t x78 = INT64_MAX;
	uint16_t x79 = 237U;
	int64_t x80 = 1003LL;
	volatile int64_t t16 = 411138LL;

	t16 = (x77/(x78^(x79*x80)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 72U;
	volatile int32_t x82 = INT32_MIN;
	volatile int64_t x83 = INT64_MIN;
	uint16_t x84 = 0U;
	volatile int64_t t17 = 53888968343293LL;

	t17 = (x81/(x82^(x83*x84)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	volatile uint32_t x87 = 113U;
	static int8_t x88 = INT8_MIN;
	int64_t t18 = -15LL;

	t18 = (x85/(x86^(x87*x88)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = -1;
	static uint8_t x91 = UINT8_MAX;
	int64_t x92 = -1LL;
	int64_t t19 = 69LL;

	t19 = (x89/(x90^(x91*x92)));

	if (t19 != -129LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = 1;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MAX;
	static int16_t x96 = INT16_MIN;
	int32_t t20 = -225;

	t20 = (x93/(x94^(x95*x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = 525898375LL;
	volatile int32_t x103 = INT32_MIN;
	volatile int64_t t21 = -4388916896931LL;

	t21 = (x101/(x102^(x103*x104)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -1LL;
	volatile int8_t x107 = INT8_MAX;
	uint64_t x108 = 11202354LLU;

	t22 = (x105/(x106^(x107*x108)));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = 26;
	uint32_t x110 = 36571731U;
	int8_t x111 = -1;
	int64_t t23 = -15273877129976360LL;

	t23 = (x109/(x110^(x111*x112)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = -763011LL;
	int32_t x115 = 52662362;
	uint32_t x116 = 42828185U;

	t24 = (x113/(x114^(x115*x116)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MAX;
	static volatile int16_t x118 = INT16_MIN;
	uint64_t x119 = 334591413LLU;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t25 = 1013143443LLU;

	t25 = (x117/(x118^(x119*x120)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x126 = 506308903U;
	int64_t x127 = -4208LL;
	int8_t x128 = INT8_MIN;

	t26 = (x125/(x126^(x127*x128)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x138 = -1;
	static volatile int64_t x139 = 714LL;
	volatile int64_t t27 = 35850LL;

	t27 = (x137/(x138^(x139*x140)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x141 = -1LL;
	int32_t x142 = -1;
	int8_t x143 = -1;
	int64_t t28 = -33223356488LL;

	t28 = (x141/(x142^(x143*x144)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x145 = UINT8_MAX;
	static volatile uint64_t x146 = 3LLU;
	static volatile int64_t x147 = -1LL;
	int16_t x148 = -1;
	uint64_t t29 = 34702392LLU;

	t29 = (x145/(x146^(x147*x148)));

	if (t29 != 127LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x150 = UINT16_MAX;
	int32_t x151 = 31;
	uint16_t x152 = UINT16_MAX;
	int32_t t30 = -621977;

	t30 = (x149/(x150^(x151*x152)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = -62185579;
	int8_t x154 = INT8_MIN;
	static int64_t x155 = 655249205700296LL;
	uint64_t x156 = UINT64_MAX;

	t31 = (x153/(x154^(x155*x156)));

	if (t31 != 28152LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = INT64_MIN;
	int8_t x159 = INT8_MIN;
	volatile int16_t x160 = -7617;
	volatile int64_t t32 = -3533940LL;

	t32 = (x157/(x158^(x159*x160)));

	if (t32 != -9965104672978LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = -1;
	volatile uint64_t x164 = 65405837098868133LLU;
	uint64_t t33 = 93327313819739981LLU;

	t33 = (x161/(x162^(x163*x164)));

	if (t33 != 7LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x172 = -70652949LL;
	uint64_t t34 = 4076443115325LLU;

	t34 = (x169/(x170^(x171*x172)));

	if (t34 != 10173LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	static uint32_t x175 = 111438U;
	uint64_t x176 = 13628887369LLU;

	t35 = (x173/(x174^(x175*x176)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -569;
	int32_t x178 = INT32_MAX;
	volatile int16_t x179 = INT16_MAX;
	uint16_t x180 = 3U;
	volatile int32_t t36 = 8822031;

	t36 = (x177/(x178^(x179*x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x181 = INT64_MIN;
	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 2U;
	int16_t x184 = -711;
	int64_t t37 = 19472959900381879LL;

	t37 = (x181/(x182^(x183*x184)));

	if (t37 != 6611736227136040LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = -1LL;
	static int16_t x186 = INT16_MAX;
	uint16_t x188 = 18840U;
	volatile int64_t t38 = 3659138987328LL;

	t38 = (x185/(x186^(x187*x188)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = 2790U;
	int8_t x190 = -1;
	static int8_t x191 = INT8_MIN;
	int64_t x192 = 42610950449636LL;
	static volatile int64_t t39 = -4413619214571385LL;

	t39 = (x189/(x190^(x191*x192)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x194 = INT64_MIN;
	int64_t t40 = 86043618002842LL;

	t40 = (x193/(x194^(x195*x196)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x199 = 43558039421272LLU;
	int64_t x200 = -27LL;
	volatile uint64_t t41 = 8347711071811LLU;

	t41 = (x197/(x198^(x199*x200)));

	if (t41 != 15685LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x201 = -1;
	volatile uint8_t x202 = 7U;
	volatile int32_t x204 = -40265015;
	static volatile uint64_t t42 = 4891LLU;

	t42 = (x201/(x202^(x203*x204)));

	if (t42 != 458133376596LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = -20;
	int16_t x206 = -255;
	static int32_t x207 = 1740319;
	volatile uint64_t x208 = UINT64_MAX;

	t43 = (x205/(x206^(x207*x208)));

	if (t43 != 10598458427008LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MAX;
	static volatile uint32_t x212 = 220452590U;
	volatile uint32_t t44 = 5U;

	t44 = (x209/(x210^(x211*x212)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MAX;
	int8_t x214 = 1;
	volatile uint8_t x215 = 67U;
	int32_t x216 = -1;
	int64_t t45 = -8197LL;

	t45 = (x213/(x214^(x215*x216)));

	if (t45 != -135637824071393761LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x217 = 294997U;
	int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;

	t46 = (x217/(x218^(x219*x220)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x221 = -1LL;
	int16_t x222 = -1;
	int16_t x223 = INT16_MIN;
	int64_t t47 = 7LL;

	t47 = (x221/(x222^(x223*x224)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 2U;
	volatile int64_t x226 = INT64_MAX;
	int64_t x227 = 144773667LL;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t48 = -11983192LL;

	t48 = (x225/(x226^(x227*x228)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 1119;
	volatile int32_t t49 = 0;

	t49 = (x229/(x230^(x231*x232)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = 1;
	static int64_t x234 = -210958426061LL;
	int8_t x236 = INT8_MIN;
	volatile int64_t t50 = 742LL;

	t50 = (x233/(x234^(x235*x236)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x237 = -1;
	int32_t x238 = INT32_MAX;
	int16_t x239 = -1;
	int8_t x240 = INT8_MIN;

	t51 = (x237/(x238^(x239*x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x242 = 19U;
	volatile uint8_t x243 = UINT8_MAX;
	int64_t t52 = 210516273230LL;

	t52 = (x241/(x242^(x243*x244)));

	if (t52 != 38753664020398217LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = 1181584254549LLU;
	int16_t x246 = 2303;
	uint32_t x247 = UINT32_MAX;
	static int8_t x248 = INT8_MIN;

	t53 = (x245/(x246^(x247*x248)));

	if (t53 != 543257128LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = 10;
	int64_t x250 = -14720LL;
	static uint64_t x251 = UINT64_MAX;
	int32_t x252 = INT32_MAX;
	uint64_t t54 = 480LLU;

	t54 = (x249/(x250^(x251*x252)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x260 = INT32_MIN;
	volatile uint64_t t55 = 20845039015733431LLU;

	t55 = (x257/(x258^(x259*x260)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x261 = UINT32_MAX;
	static int8_t x262 = INT8_MAX;
	int64_t x264 = 15LL;

	t56 = (x261/(x262^(x263*x264)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x269 = INT16_MAX;
	static int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MIN;
	int8_t x272 = 0;
	volatile int32_t t57 = 7821;

	t57 = (x269/(x270^(x271*x272)));

	if (t57 != 258) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x273 = -1LL;
	uint16_t x275 = 1U;
	static volatile uint64_t t58 = 231628211608861LLU;

	t58 = (x273/(x274^(x275*x276)));

	if (t58 != 11769916090LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x277 = 16305U;
	int64_t x278 = INT64_MAX;
	uint64_t x279 = UINT64_MAX;
	static int8_t x280 = -1;
	uint64_t t59 = 174371LLU;

	t59 = (x277/(x278^(x279*x280)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x281 = UINT16_MAX;
	volatile int8_t x282 = INT8_MAX;
	volatile int32_t t60 = 183500;

	t60 = (x281/(x282^(x283*x284)));

	if (t60 != 257) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	int8_t x287 = 1;

	t61 = (x285/(x286^(x287*x288)));

	if (t61 != 8192) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t t62 = -426405291085723572LL;

	t62 = (x289/(x290^(x291*x292)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x294 = -3;
	static volatile int8_t x295 = -17;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t63 = -206987;

	t63 = (x293/(x294^(x295*x296)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = -2;
	int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile uint64_t t64 = 101662113670560LLU;

	t64 = (x301/(x302^(x303*x304)));

	if (t64 != 8589982140LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x305 = 581165LLU;
	static uint64_t x306 = 3477675807408017LLU;
	uint16_t x308 = 13932U;
	uint64_t t65 = 1783937977956LLU;

	t65 = (x305/(x306^(x307*x308)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x309 = -464;
	static int32_t x312 = INT32_MIN;
	volatile uint32_t t66 = 299340U;

	t66 = (x309/(x310^(x311*x312)));

	if (t66 != 613566690U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MIN;
	int64_t x327 = -26627LL;
	static int16_t x328 = -1;

	t67 = (x325/(x326^(x327*x328)));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x329 = -1;
	volatile int32_t x330 = 163;
	static int64_t x331 = -1LL;
	uint32_t x332 = 11U;
	static volatile int64_t t68 = -22411061256LL;

	t68 = (x329/(x330^(x331*x332)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = -1;
	static int32_t x348 = -1;
	int32_t t69 = 5;

	t69 = (x345/(x346^(x347*x348)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x349 = 116U;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = -1;
	volatile int64_t t70 = 410575823897LL;

	t70 = (x349/(x350^(x351*x352)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x353 = -1;
	static int16_t x354 = 127;
	static int32_t x355 = -26053;
	uint64_t x356 = 13666188540075LLU;
	static volatile uint64_t t71 = 3203036643103LLU;

	t71 = (x353/(x354^(x355*x356)));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x357 = UINT32_MAX;
	int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 15506U;
	int64_t t72 = 1LL;

	t72 = (x357/(x358^(x359*x360)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x361 = -43711;
	uint32_t x363 = 614U;
	volatile uint32_t x364 = 551U;
	volatile uint64_t t73 = 390939418274LLU;

	t73 = (x361/(x362^(x363*x364)));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x373 = 14521837;
	uint8_t x374 = 60U;
	int16_t x375 = -4;

	t74 = (x373/(x374^(x375*x376)));

	if (t74 != 25387) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x378 = -1256;
	int32_t x379 = -1;
	int32_t t75 = -6041;

	t75 = (x377/(x378^(x379*x380)));

	if (t75 != -52) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x381 = INT8_MIN;
	static volatile uint64_t x382 = 5833098646LLU;
	uint64_t x383 = 769328LLU;
	static volatile uint64_t t76 = 126094LLU;

	t76 = (x381/(x382^(x383*x384)));

	if (t76 != 3176763511LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	int64_t t77 = 59974LL;

	t77 = (x385/(x386^(x387*x388)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x389 = 30778U;
	static volatile int32_t x390 = 623157;
	int16_t x391 = -1;
	uint32_t x392 = 4U;

	t78 = (x389/(x390^(x391*x392)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x393 = -14116;
	uint64_t x395 = 43LLU;
	uint16_t x396 = UINT16_MAX;

	t79 = (x393/(x394^(x395*x396)));

	if (t79 != 8601221426LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x401 = INT32_MIN;
	int16_t x402 = 4;
	static int16_t x403 = 3173;
	uint64_t x404 = UINT64_MAX;
	uint64_t t80 = 382791LLU;

	t80 = (x401/(x402^(x403*x404)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x405 = INT64_MAX;
	int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MAX;
	static uint32_t x408 = UINT32_MAX;
	int64_t t81 = INT64_MAX;

	t81 = (x405/(x406^(x407*x408)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x409 = 2U;
	static volatile int8_t x410 = -3;
	uint64_t x411 = 7376978846373399LLU;
	int16_t x412 = INT16_MAX;

	t82 = (x409/(x410^(x411*x412)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x421 = INT64_MIN;
	int8_t x422 = -1;
	int64_t t83 = -191340015686627LL;

	t83 = (x421/(x422^(x423*x424)));

	if (t83 != -12251741809LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x429 = INT8_MIN;
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = 0;
	volatile uint16_t x432 = UINT16_MAX;
	int32_t t84 = -13;

	t84 = (x429/(x430^(x431*x432)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x433 = INT64_MIN;
	volatile int32_t x434 = 3797473;
	int64_t x435 = 79084165430695LL;
	volatile int64_t t85 = -38777595158LL;

	t85 = (x433/(x434^(x435*x436)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x441 = 3156675306657951808LLU;
	uint64_t x442 = 82055423LLU;
	volatile uint32_t x443 = 0U;
	static uint8_t x444 = UINT8_MAX;
	static uint64_t t86 = 1228947LLU;

	t86 = (x441/(x442^(x443*x444)));

	if (t86 != 38470038801LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x445 = -1;
	volatile int8_t x446 = INT8_MIN;
	int32_t t87 = -1;

	t87 = (x445/(x446^(x447*x448)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x449 = INT64_MIN;
	volatile int64_t t88 = -3186649LL;

	t88 = (x449/(x450^(x451*x452)));

	if (t88 != -12168036987935060LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x455 = 786473002U;
	static int8_t x456 = INT8_MIN;
	volatile uint32_t t89 = 2195591U;

	t89 = (x453/(x454^(x455*x456)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x457 = INT16_MIN;
	int64_t x458 = -106766415948LL;
	int64_t x460 = 248LL;
	int64_t t90 = 1952LL;

	t90 = (x457/(x458^(x459*x460)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = INT16_MAX;
	int16_t x463 = 6167;
	int32_t x464 = -2;

	t91 = (x461/(x462^(x463*x464)));

	if (t91 != 2LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x469 = 1380;
	uint16_t x470 = UINT16_MAX;
	uint8_t x471 = UINT8_MAX;
	int16_t x472 = 3035;
	int32_t t92 = 6;

	t92 = (x469/(x470^(x471*x472)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x473 = -16219029034LL;
	static int32_t x475 = -1;
	static int64_t x476 = -1LL;
	static volatile int64_t t93 = -11408LL;

	t93 = (x473/(x474^(x475*x476)));

	if (t93 != -9585714LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = INT8_MIN;
	uint32_t x478 = 2741703U;
	volatile int16_t x479 = INT16_MAX;
	volatile uint32_t t94 = 30882U;

	t94 = (x477/(x478^(x479*x480)));

	if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x481 = UINT16_MAX;
	static uint8_t x482 = 5U;
	uint16_t x483 = 26943U;
	int32_t t95 = -79972;

	t95 = (x481/(x482^(x483*x484)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x485 = UINT64_MAX;
	uint64_t t96 = 7210449466675222310LLU;

	t96 = (x485/(x486^(x487*x488)));

	if (t96 != 2476LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x489 = -1LL;
	uint16_t x490 = UINT16_MAX;
	volatile int64_t t97 = 20746668LL;

	t97 = (x489/(x490^(x491*x492)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x493 = UINT16_MAX;
	uint8_t x494 = 19U;
	int32_t x496 = INT32_MAX;

	t98 = (x493/(x494^(x495*x496)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x497 = INT32_MIN;
	static int64_t x498 = 218386820294LL;
	uint16_t x499 = 18U;

	t99 = (x497/(x498^(x499*x500)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

