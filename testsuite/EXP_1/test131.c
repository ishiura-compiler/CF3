#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x6 = INT32_MIN;
static volatile int64_t t3 = 2LL;
int32_t x27 = 183;
static volatile uint64_t t4 = 3174481363LLU;
int8_t x35 = INT8_MIN;
int8_t x45 = INT8_MIN;
uint16_t x46 = 5124U;
int16_t x48 = INT16_MAX;
uint64_t x54 = 165710381975275178LLU;
int16_t x61 = -1;
static volatile uint16_t x63 = UINT16_MAX;
int16_t x64 = INT16_MAX;
uint8_t x69 = 0U;
uint16_t x71 = 5U;
uint8_t x77 = 26U;
volatile uint32_t t15 = 468034591U;
uint16_t x83 = 2515U;
uint8_t x85 = UINT8_MAX;
volatile int8_t x88 = 4;
int16_t x93 = -1;
uint32_t x96 = 10272447U;
uint32_t t20 = 214U;
volatile int16_t x101 = -6;
int16_t x102 = -1;
static volatile int32_t x114 = INT32_MAX;
uint32_t x115 = UINT32_MAX;
static int16_t x118 = INT16_MIN;
uint8_t x119 = UINT8_MAX;
int64_t x122 = 227LL;
uint8_t x126 = UINT8_MAX;
int64_t t28 = -68462649466875LL;
uint32_t x135 = 335U;
int8_t x137 = INT8_MIN;
uint16_t x140 = UINT16_MAX;
uint32_t x154 = 199503U;
static uint32_t x163 = 25947U;
static volatile int32_t x171 = INT32_MIN;
uint64_t x180 = 264363933938851LLU;
uint64_t t37 = 2335818518LLU;
static volatile int16_t x182 = 1;
uint64_t x183 = UINT64_MAX;
uint64_t t38 = 32458LLU;
volatile int8_t x185 = INT8_MAX;
uint8_t x188 = 95U;
volatile int32_t t40 = 7458;
volatile int64_t t41 = -188672273110002LL;
static int64_t x204 = INT64_MAX;
volatile int8_t x219 = 0;
static volatile int8_t x222 = -5;
volatile int64_t t46 = 1014572378522682LL;
volatile uint64_t t47 = 10665LLU;
int32_t x229 = INT32_MAX;
volatile int64_t t48 = -4784LL;
int16_t x240 = INT16_MIN;
int32_t x241 = INT32_MAX;
int64_t x243 = 3413236LL;
uint64_t t51 = 263183434164198872LLU;
static uint64_t t53 = 347247LLU;
int32_t x257 = INT32_MAX;
uint8_t x261 = UINT8_MAX;
static int16_t x264 = -1;
static volatile uint16_t x266 = 1626U;
uint8_t x268 = 10U;
uint32_t x273 = UINT32_MAX;
int64_t x292 = 9LL;
volatile uint64_t t60 = 32637364280LLU;
volatile int64_t x295 = INT64_MIN;
int32_t x302 = -310;
int64_t x303 = -1LL;
uint16_t x307 = UINT16_MAX;
volatile uint64_t t65 = 9155047752523913388LLU;
int8_t x313 = INT8_MIN;
int64_t x315 = -31971544LL;
int64_t t66 = 84814LL;
volatile uint64_t t67 = 7767637940921113263LLU;
volatile int32_t x327 = -5307769;
volatile uint16_t x333 = UINT16_MAX;
uint8_t x335 = 42U;
int8_t x336 = INT8_MIN;
volatile int64_t t72 = -110260670LL;
volatile uint32_t x346 = 29U;
uint32_t x351 = UINT32_MAX;
static volatile uint16_t x352 = UINT16_MAX;
int32_t x353 = -1;
static volatile int32_t x355 = INT32_MIN;
volatile int64_t t76 = 1873195531925688949LL;
int16_t x372 = INT16_MIN;
static volatile uint64_t t81 = 734859668697128955LLU;
static uint32_t x388 = 1377260U;
int8_t x389 = INT8_MAX;
int64_t t85 = -255527LL;
uint8_t x401 = 66U;
static int16_t x406 = -3;
volatile int64_t t88 = 22939LL;
uint32_t x423 = UINT32_MAX;
static int16_t x424 = -1;
volatile int64_t x428 = -1LL;
uint32_t x431 = 0U;
int64_t x436 = 1501414197LL;
int8_t x440 = INT8_MIN;
int64_t t93 = 1LL;
volatile uint64_t t95 = 124820223LLU;
int32_t x451 = 36266186;
int16_t x466 = -28;
volatile int32_t t99 = 805;


void f0(void) {
	static uint8_t x1 = 25U;
	volatile int64_t x2 = INT64_MIN;
	int16_t x3 = 2630;
	volatile uint8_t x4 = 31U;
	int64_t t0 = -117943889848067LL;

	t0 = (((x1+x2)&x3)+x4);

	if (t0 != 31LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 60;
	uint8_t x7 = 0U;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -12;

	t1 = (((x5+x6)&x7)+x8);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MAX;
	int16_t x14 = INT16_MAX;
	int64_t x15 = -1LL;
	uint32_t x16 = 66U;
	static int64_t t2 = -2160LL;

	t2 = (((x13+x14)&x15)+x16);

	if (t2 != 32960LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int64_t x18 = -4737696085577240LL;
	volatile int32_t x19 = INT32_MIN;
	uint8_t x20 = 0U;

	t3 = (((x17+x18)&x19)+x20);

	if (t3 != -4737696819838976LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 7554U;
	volatile int64_t x26 = -1821863201831098238LL;
	uint64_t x28 = 194LLU;

	t4 = (((x25+x26)&x27)+x28);

	if (t4 != 198LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x33 = INT16_MAX;
	static int16_t x34 = INT16_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t5 = 1;

	t5 = (((x33+x34)&x35)+x36);

	if (t5 != 65280) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = -1LL;
	uint8_t x38 = 47U;
	int16_t x39 = 1;
	uint32_t x40 = 10798U;
	volatile int64_t t6 = -2032371875LL;

	t6 = (((x37+x38)&x39)+x40);

	if (t6 != 10798LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 1U;
	static volatile uint8_t x42 = UINT8_MAX;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = 504971594;
	uint32_t t7 = 650774994U;

	t7 = (((x41+x42)&x43)+x44);

	if (t7 != 504971850U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x47 = 77U;
	volatile int32_t t8 = -7375205;

	t8 = (((x45+x46)&x47)+x48);

	if (t8 != 32771) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = 0;
	volatile uint16_t x50 = UINT16_MAX;
	static int64_t x51 = INT64_MIN;
	static uint32_t x52 = 93U;
	int64_t t9 = -1656750778106693LL;

	t9 = (((x49+x50)&x51)+x52);

	if (t9 != 93LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MIN;
	volatile uint16_t x55 = 111U;
	uint8_t x56 = 6U;
	volatile uint64_t t10 = 1920061LLU;

	t10 = (((x53+x54)&x55)+x56);

	if (t10 != 48LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -1LL;
	int16_t x58 = -1;
	static int8_t x59 = -1;
	static int64_t x60 = -42081518570496005LL;
	static volatile int64_t t11 = 11741368961664LL;

	t11 = (((x57+x58)&x59)+x60);

	if (t11 != -42081518570496007LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x62 = 43U;
	volatile int32_t t12 = 14443907;

	t12 = (((x61+x62)&x63)+x64);

	if (t12 != 32809) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -44LL;
	int64_t x66 = -1344792370958082157LL;
	int32_t x67 = INT32_MIN;
	static uint8_t x68 = 72U;
	volatile int64_t t13 = -10476246215015LL;

	t13 = (((x65+x66)&x67)+x68);

	if (t13 != -1344792371769900984LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = -11063114399403169LL;
	int16_t x72 = 1;
	int64_t t14 = 3730054724LL;

	t14 = (((x69+x70)&x71)+x72);

	if (t14 != 6LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x78 = 28982139U;
	int8_t x79 = -4;
	int16_t x80 = -1;

	t15 = (((x77+x78)&x79)+x80);

	if (t15 != 28982163U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = 1776;
	int8_t x82 = 3;
	static uint64_t x84 = UINT64_MAX;
	volatile uint64_t t16 = 1036266024LLU;

	t16 = (((x81+x82)&x83)+x84);

	if (t16 != 210LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x86 = 135;
	int32_t x87 = 53;
	volatile int32_t t17 = 318419702;

	t17 = (((x85+x86)&x87)+x88);

	if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 106616977680LLU;
	volatile int16_t x90 = INT16_MIN;
	int8_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	static uint64_t t18 = 15LLU;

	t18 = (((x89+x90)&x91)+x92);

	if (t18 != 106616945167LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x94 = 16U;
	volatile int16_t x95 = -1;
	static volatile uint32_t t19 = 200U;

	t19 = (((x93+x94)&x95)+x96);

	if (t19 != 10272462U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 5U;
	int16_t x98 = INT16_MIN;
	volatile int16_t x99 = INT16_MAX;
	volatile uint32_t x100 = 1716694441U;

	t20 = (((x97+x98)&x99)+x100);

	if (t20 != 1716694446U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x103 = 3U;
	uint64_t x104 = 46LLU;
	uint64_t t21 = 13299914430381LLU;

	t21 = (((x101+x102)&x103)+x104);

	if (t21 != 47LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 3376U;
	volatile int16_t x106 = 1;
	int32_t x107 = -458062;
	int8_t x108 = INT8_MIN;
	int32_t t22 = 7688329;

	t22 = (((x105+x106)&x107)+x108);

	if (t22 != -80) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MAX;
	static uint32_t x110 = 5U;
	static int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MAX;
	int64_t t23 = INT64_MAX;

	t23 = (((x109+x110)&x111)+x112);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x116 = 16U;
	volatile uint32_t t24 = 3142402U;

	t24 = (((x113+x114)&x115)+x116);

	if (t24 != 2147483535U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	int8_t x120 = INT8_MAX;
	volatile int32_t t25 = 0;

	t25 = (((x117+x118)&x119)+x120);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = 1199LL;
	int8_t x123 = 17;
	int16_t x124 = -2273;
	static volatile int64_t t26 = 528458256710LL;

	t26 = (((x121+x122)&x123)+x124);

	if (t26 != -2257LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int64_t x127 = -1LL;
	volatile int16_t x128 = INT16_MIN;
	volatile int64_t t27 = -703812215305LL;

	t27 = (((x125+x126)&x127)+x128);

	if (t27 != -32514LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MAX;
	int64_t x131 = -1LL;
	uint8_t x132 = 0U;

	t28 = (((x129+x130)&x131)+x132);

	if (t28 != 33022LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = 500253360764LL;
	static volatile uint8_t x134 = 2U;
	int64_t x136 = INT64_MIN;
	volatile int64_t t29 = -28158265101792LL;

	t29 = (((x133+x134)&x135)+x136);

	if (t29 != -9223372036854775730LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	static volatile int32_t t30 = -163938;

	t30 = (((x137+x138)&x139)+x140);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MAX;
	static int8_t x142 = INT8_MIN;
	uint32_t x143 = UINT32_MAX;
	uint16_t x144 = UINT16_MAX;
	volatile uint32_t t31 = 73571U;

	t31 = (((x141+x142)&x143)+x144);

	if (t31 != 2147549054U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x150 = 10673;
	uint32_t x151 = 106U;
	int64_t x152 = -1LL;
	int64_t t32 = -148760100800LL;

	t32 = (((x149+x150)&x151)+x152);

	if (t32 != 31LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x153 = -51;
	uint16_t x155 = UINT16_MAX;
	static uint32_t x156 = 1U;
	uint32_t t33 = 407891259U;

	t33 = (((x153+x154)&x155)+x156);

	if (t33 != 2845U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x161 = 879324794714LLU;
	volatile int64_t x162 = INT64_MIN;
	volatile uint32_t x164 = 4103U;
	uint64_t t34 = 33510115458LLU;

	t34 = (((x161+x162)&x163)+x164);

	if (t34 != 5473LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MIN;
	uint16_t x170 = 12607U;
	static int32_t x172 = INT32_MAX;
	int32_t t35 = INT32_MAX;

	t35 = (((x169+x170)&x171)+x172);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 152865U;
	volatile int8_t x174 = INT8_MIN;
	static int32_t x175 = INT32_MAX;
	int32_t x176 = -1;
	uint32_t t36 = 180U;

	t36 = (((x173+x174)&x175)+x176);

	if (t36 != 152736U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = INT64_MIN;
	uint8_t x178 = UINT8_MAX;
	int8_t x179 = -21;

	t37 = (((x177+x178)&x179)+x180);

	if (t37 != 9223636400788714894LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -1LL;
	int16_t x184 = 28;

	t38 = (((x181+x182)&x183)+x184);

	if (t38 != 28LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x186 = 16U;
	int8_t x187 = INT8_MAX;
	int32_t t39 = 143717;

	t39 = (((x185+x186)&x187)+x188);

	if (t39 != 110) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = UINT16_MAX;
	int32_t x194 = 2842437;
	int32_t x195 = 49586;
	static volatile int16_t x196 = INT16_MAX;

	t40 = (((x193+x194)&x195)+x196);

	if (t40 != 49407) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = -1;
	static int8_t x198 = INT8_MIN;
	int64_t x199 = -89535140478052787LL;
	int16_t x200 = -1;

	t41 = (((x197+x198)&x199)+x200);

	if (t41 != -89535140478052788LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = INT32_MIN;
	static uint16_t x202 = 0U;
	int32_t x203 = 0;
	volatile int64_t t42 = INT64_MAX;

	t42 = (((x201+x202)&x203)+x204);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x209 = 116005071U;
	static int16_t x210 = INT16_MIN;
	volatile int8_t x211 = -1;
	int8_t x212 = INT8_MIN;
	static uint32_t t43 = 31U;

	t43 = (((x209+x210)&x211)+x212);

	if (t43 != 115972175U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = 0;
	static int16_t x214 = 1;
	int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	volatile int64_t t44 = -807918018585LL;

	t44 = (((x213+x214)&x215)+x216);

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x217 = 76U;
	uint32_t x218 = UINT32_MAX;
	uint16_t x220 = 4U;
	static volatile uint32_t t45 = 90U;

	t45 = (((x217+x218)&x219)+x220);

	if (t45 != 4U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x221 = 1;
	int64_t x223 = INT64_MIN;
	static uint32_t x224 = 1440U;

	t46 = (((x221+x222)&x223)+x224);

	if (t46 != -9223372036854774368LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = 194LLU;
	int64_t x226 = -1LL;
	int32_t x227 = INT32_MAX;
	int64_t x228 = 3079190LL;

	t47 = (((x225+x226)&x227)+x228);

	if (t47 != 3079383LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x230 = 1769640218371682606LL;
	int32_t x231 = -324551;
	int16_t x232 = INT16_MIN;

	t48 = (((x229+x230)&x231)+x232);

	if (t48 != 1769640220519071785LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = -1;
	int8_t x234 = INT8_MIN;
	static int32_t x235 = 58;
	int64_t x236 = -1LL;
	volatile int64_t t49 = 43831969783027092LL;

	t49 = (((x233+x234)&x235)+x236);

	if (t49 != 57LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MIN;
	static int8_t x239 = INT8_MIN;
	int32_t t50 = 10870822;

	t50 = (((x237+x238)&x239)+x240);

	if (t50 != -32896) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x242 = 6831766083LLU;
	volatile uint64_t x244 = 7LLU;

	t51 = (((x241+x242)&x243)+x244);

	if (t51 != 3412039LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = -1;
	int8_t x246 = INT8_MIN;
	uint32_t x247 = 29786303U;
	int32_t x248 = 0;
	static volatile uint32_t t52 = 7759897U;

	t52 = (((x245+x246)&x247)+x248);

	if (t52 != 29786175U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x249 = 7566012858334LLU;
	int8_t x250 = -1;
	static uint16_t x251 = 8U;
	int16_t x252 = INT16_MAX;

	t53 = (((x249+x250)&x251)+x252);

	if (t53 != 32775LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x253 = -50;
	int8_t x254 = -1;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t54 = 110497835436LLU;

	t54 = (((x253+x254)&x255)+x256);

	if (t54 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x258 = -5665;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = 12208;
	uint64_t t55 = 556LLU;

	t55 = (((x257+x258)&x259)+x260);

	if (t55 != 2147490190LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x262 = -1LL;
	int16_t x263 = INT16_MIN;
	volatile int64_t t56 = 7641LL;

	t56 = (((x261+x262)&x263)+x264);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	volatile int32_t t57 = 140529328;

	t57 = (((x265+x266)&x267)+x268);

	if (t57 != 1508) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x274 = 5260302730959216263LLU;
	int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MIN;
	volatile uint64_t t58 = 148594082430LLU;

	t58 = (((x273+x274)&x275)+x276);

	if (t58 != 9223372037556756102LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 45U;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MIN;
	static int8_t x280 = -1;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (((x277+x278)&x279)+x280);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = UINT32_MAX;
	uint64_t x290 = 1870965220118942LLU;
	uint32_t x291 = 16878U;

	t60 = (((x289+x290)&x291)+x292);

	if (t60 != 405LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = 173274630082657382LLU;
	int32_t x294 = -1;
	static int64_t x296 = INT64_MIN;
	volatile uint64_t t61 = 691397LLU;

	t61 = (((x293+x294)&x295)+x296);

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x297 = 1U;
	int32_t x298 = -1;
	int16_t x299 = -18;
	int32_t x300 = INT32_MAX;
	volatile int32_t t62 = INT32_MAX;

	t62 = (((x297+x298)&x299)+x300);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x304 = 104292636U;
	static volatile int64_t t63 = -4502170475533747780LL;

	t63 = (((x301+x302)&x303)+x304);

	if (t63 != 104292198LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = -12;
	static volatile int32_t x306 = -4;
	static int64_t x308 = -1LL;
	volatile int64_t t64 = 6144286861LL;

	t64 = (((x305+x306)&x307)+x308);

	if (t64 != 65519LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x309 = 33LLU;
	int64_t x310 = -19451LL;
	int64_t x311 = -632LL;
	volatile int32_t x312 = INT32_MIN;

	t65 = (((x309+x310)&x311)+x312);

	if (t65 != 18446744071562048512LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x314 = INT8_MAX;
	uint8_t x316 = UINT8_MAX;

	t66 = (((x313+x314)&x315)+x316);

	if (t66 != -31971289LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x317 = 734749394737LLU;
	static uint8_t x318 = 119U;
	uint64_t x319 = UINT64_MAX;
	static int32_t x320 = INT32_MIN;

	t67 = (((x317+x318)&x319)+x320);

	if (t67 != 732601911208LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = 8785;
	uint32_t x322 = 24958U;
	int64_t x323 = INT64_MAX;
	volatile int8_t x324 = -31;
	int64_t t68 = 3LL;

	t68 = (((x321+x322)&x323)+x324);

	if (t68 != 33712LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = -5545;
	uint32_t x326 = 8U;
	volatile uint8_t x328 = UINT8_MAX;
	volatile uint32_t t69 = 183U;

	t69 = (((x325+x326)&x327)+x328);

	if (t69 != 4289659654U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = INT64_MIN;
	uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MAX;
	int64_t x332 = -1LL;
	volatile int64_t t70 = 804502484LL;

	t70 = (((x329+x330)&x331)+x332);

	if (t70 != 4294967294LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x334 = INT32_MIN;
	int32_t t71 = 107213504;

	t71 = (((x333+x334)&x335)+x336);

	if (t71 != -86) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = INT64_MAX;
	int8_t x338 = INT8_MIN;
	volatile int16_t x339 = -64;
	static int8_t x340 = INT8_MAX;

	t72 = (((x337+x338)&x339)+x340);

	if (t72 != 9223372036854775743LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x347 = 3;
	int8_t x348 = -58;
	volatile uint32_t t73 = 1268866581U;

	t73 = (((x345+x346)&x347)+x348);

	if (t73 != 4294967238U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = -259528691LL;
	uint64_t x350 = 7613159LLU;
	volatile uint64_t t74 = 61885249466LLU;

	t74 = (((x349+x350)&x351)+x352);

	if (t74 != 4043117299LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x354 = -19;
	static volatile int64_t x356 = -1LL;
	int64_t t75 = 1740831299292343567LL;

	t75 = (((x353+x354)&x355)+x356);

	if (t75 != -2147483649LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x357 = INT16_MAX;
	int64_t x358 = -150022842622844LL;
	static uint32_t x359 = 55005001U;
	int16_t x360 = 95;

	t76 = (((x357+x358)&x359)+x360);

	if (t76 != 21122144LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x361 = 257381;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	int64_t x364 = 11162022259603225LL;
	static int64_t t77 = -408495624LL;

	t77 = (((x361+x362)&x363)+x364);

	if (t77 != 11162020112376857LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int64_t x366 = 15300182537626LL;
	static volatile int32_t x367 = -1970;
	int32_t x368 = INT32_MAX;
	int64_t t78 = -353693177LL;

	t78 = (((x365+x366)&x367)+x368);

	if (t78 != 15302330085383LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = -1;
	volatile int64_t x370 = -1LL;
	static int32_t x371 = -1;
	volatile int64_t t79 = -94993826583LL;

	t79 = (((x369+x370)&x371)+x372);

	if (t79 != -32770LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = INT8_MIN;
	static uint8_t x378 = 32U;
	static uint8_t x379 = 2U;
	volatile int8_t x380 = INT8_MIN;
	volatile int32_t t80 = -1;

	t80 = (((x377+x378)&x379)+x380);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MIN;
	volatile int16_t x383 = -1;
	volatile uint8_t x384 = 0U;

	t81 = (((x381+x382)&x383)+x384);

	if (t81 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x385 = 9U;
	volatile uint64_t x386 = 5133820318LLU;
	uint8_t x387 = UINT8_MAX;
	uint64_t t82 = 3133896LLU;

	t82 = (((x385+x386)&x387)+x388);

	if (t82 != 1377427LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x390 = -1;
	volatile int8_t x391 = INT8_MAX;
	uint64_t x392 = UINT64_MAX;
	static volatile uint64_t t83 = 582824LLU;

	t83 = (((x389+x390)&x391)+x392);

	if (t83 != 125LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = INT8_MIN;
	uint8_t x394 = 7U;
	int64_t x395 = 901029288371681898LL;
	volatile uint16_t x396 = 1800U;
	volatile int64_t t84 = -27LL;

	t84 = (((x393+x394)&x395)+x396);

	if (t84 != 901029288371683594LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = -422;
	volatile uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 11U;
	int64_t x400 = INT64_MIN;

	t85 = (((x397+x398)&x399)+x400);

	if (t85 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x402 = 2694876378LLU;
	int32_t x403 = INT32_MIN;
	static int32_t x404 = -1;
	volatile uint64_t t86 = 4329LLU;

	t86 = (((x401+x402)&x403)+x404);

	if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x405 = 8116748789LL;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = -8165;
	volatile int64_t t87 = -430639720338LL;

	t87 = (((x405+x406)&x407)+x408);

	if (t87 != 41485LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = -1080LL;
	static volatile uint16_t x411 = UINT16_MAX;
	uint8_t x412 = 7U;

	t88 = (((x409+x410)&x411)+x412);

	if (t88 != 31695LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x421 = UINT8_MAX;
	int8_t x422 = -10;
	volatile uint32_t t89 = 426905028U;

	t89 = (((x421+x422)&x423)+x424);

	if (t89 != 244U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = -5826;
	int16_t x426 = INT16_MAX;
	uint64_t x427 = UINT64_MAX;
	static uint64_t t90 = 93018108674LLU;

	t90 = (((x425+x426)&x427)+x428);

	if (t90 != 26940LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = 2610LLU;
	int8_t x430 = -2;
	int8_t x432 = -58;
	static volatile uint64_t t91 = 424307888933979840LLU;

	t91 = (((x429+x430)&x431)+x432);

	if (t91 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x433 = INT32_MAX;
	static int64_t x434 = INT64_MIN;
	int16_t x435 = 0;
	static volatile int64_t t92 = 294942219625724148LL;

	t92 = (((x433+x434)&x435)+x436);

	if (t92 != 1501414197LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x437 = INT16_MAX;
	int64_t x438 = -1LL;
	int8_t x439 = INT8_MIN;

	t93 = (((x437+x438)&x439)+x440);

	if (t93 != 32512LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x441 = 80U;
	uint64_t x442 = 1926077626065477LLU;
	volatile int8_t x443 = 1;
	volatile uint32_t x444 = 194U;
	static uint64_t t94 = 8967720723897545LLU;

	t94 = (((x441+x442)&x443)+x444);

	if (t94 != 195LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = INT64_MIN;
	static volatile uint64_t x446 = 4069452669047211327LLU;
	static int16_t x447 = -4638;
	volatile int64_t x448 = -1LL;

	t95 = (((x445+x446)&x447)+x448);

	if (t95 != 13292824705901987105LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x449 = -1LL;
	int32_t x450 = INT32_MIN;
	static volatile uint64_t x452 = 15182LLU;
	uint64_t t96 = 0LLU;

	t96 = (((x449+x450)&x451)+x452);

	if (t96 != 36281368LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x457 = INT8_MAX;
	uint32_t x458 = 32468094U;
	uint32_t x459 = UINT32_MAX;
	int16_t x460 = INT16_MIN;
	uint32_t t97 = 962282536U;

	t97 = (((x457+x458)&x459)+x460);

	if (t97 != 32435453U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MAX;
	static uint32_t x462 = 68102267U;
	uint64_t x463 = 22842260LLU;
	int8_t x464 = INT8_MAX;
	volatile uint64_t t98 = 0LLU;

	t98 = (((x461+x462)&x463)+x464);

	if (t98 != 788623LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = INT16_MIN;
	volatile int16_t x467 = -5;
	uint16_t x468 = 17051U;

	t99 = (((x465+x466)&x467)+x468);

	if (t99 != -15749) { NG(); } else { ; }
	
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

