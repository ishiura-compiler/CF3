#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x5 = 163350305215289LLU;
uint16_t x8 = UINT16_MAX;
volatile uint64_t t1 = 1726436547501LLU;
uint32_t x9 = UINT32_MAX;
volatile uint16_t x10 = 26U;
int32_t x11 = INT32_MAX;
volatile int16_t x15 = INT16_MAX;
uint16_t x16 = 191U;
int32_t x17 = 126991933;
int8_t x21 = -1;
int8_t x22 = INT8_MAX;
int16_t x23 = -2340;
int64_t x24 = -1298191148603871LL;
int32_t t6 = 21;
volatile int8_t x33 = 1;
volatile int32_t x42 = INT32_MAX;
int8_t x57 = 1;
volatile int32_t x66 = INT32_MIN;
uint16_t x67 = UINT16_MAX;
static uint64_t x69 = 404947680485588LLU;
uint64_t t16 = 2LLU;
volatile uint16_t x74 = 1352U;
int32_t t18 = 102;
uint8_t x81 = UINT8_MAX;
volatile uint16_t x82 = 7U;
uint8_t x106 = 53U;
int64_t x108 = -13757608042LL;
int8_t x113 = 63;
int8_t x116 = 2;
int8_t x123 = INT8_MAX;
volatile int32_t t28 = 170;
volatile int8_t x127 = 20;
int8_t x130 = 31;
uint32_t x133 = UINT32_MAX;
static uint8_t x134 = UINT8_MAX;
uint8_t x137 = 1U;
static int16_t x140 = -1107;
int16_t x142 = -1;
uint8_t x143 = 123U;
static volatile int64_t t33 = INT64_MIN;
int64_t x158 = -1LL;
int8_t x160 = INT8_MIN;
volatile int64_t x163 = -1LL;
volatile uint16_t x169 = 2775U;
volatile int8_t x171 = -22;
int8_t x174 = -24;
int32_t x175 = -1;
int32_t t41 = -248598987;
int8_t x185 = INT8_MIN;
static int16_t x187 = INT16_MAX;
int32_t x192 = 3;
int32_t t47 = -2806405;
volatile int32_t t48 = 1252237;
uint8_t x214 = UINT8_MAX;
static volatile int32_t t50 = 1236;
volatile int32_t t51 = 13388;
volatile int32_t x228 = -1;
volatile uint16_t x231 = 3036U;
volatile int32_t t54 = 1;
int32_t x238 = INT32_MIN;
volatile int32_t t58 = -1;
uint64_t x251 = 225529297572869LLU;
int32_t x254 = INT32_MAX;
int32_t x262 = 1;
int32_t x266 = INT32_MIN;
int64_t x273 = INT64_MIN;
int64_t t65 = INT64_MIN;
volatile int16_t x277 = INT16_MIN;
volatile int16_t x289 = INT16_MAX;
int64_t x292 = 1377500740495795169LL;
volatile int32_t t69 = 20;
volatile int8_t x303 = -1;
static int32_t x306 = INT32_MIN;
int16_t x308 = INT16_MIN;
static int32_t x310 = INT32_MIN;
volatile int32_t t73 = -67;
int64_t x333 = -700LL;
int16_t x336 = INT16_MAX;
uint64_t x344 = UINT64_MAX;
int8_t x346 = 38;
uint16_t x350 = 27U;
static volatile int32_t x352 = INT32_MIN;
int8_t x357 = INT8_MAX;
volatile int16_t x364 = INT16_MAX;
int8_t x365 = 0;
int32_t t86 = 8835;
uint64_t x371 = UINT64_MAX;
volatile int8_t x374 = INT8_MIN;
int32_t x378 = -1;
uint64_t x384 = 122863304943LLU;
volatile int64_t x388 = -1LL;
static volatile int32_t t91 = 6837;
uint32_t x392 = UINT32_MAX;
volatile uint16_t x399 = 1482U;
static uint8_t x415 = 4U;
uint8_t x416 = 16U;


void f0(void) {
	uint64_t x1 = 1817471624002269LLU;
	static int8_t x2 = -1;
	int8_t x3 = INT8_MIN;
	int16_t x4 = -1;
	volatile uint64_t t0 = 8196539LLU;

	t0 = (x1+((x2|x3)<=x4));

	if (t0 != 1817471624002270LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MAX;

	t1 = (x5+((x6|x7)<=x8));

	if (t1 != 163350305215290LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x12 = -1;
	static uint32_t t2 = UINT32_MAX;

	t2 = (x9+((x10|x11)<=x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static int16_t x14 = -1;
	int32_t t3 = 180389;

	t3 = (x13+((x14|x15)<=x16));

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	int8_t x19 = 46;
	int64_t x20 = -118737795556652457LL;
	static volatile int32_t t4 = 1604;

	t4 = (x17+((x18|x19)<=x20));

	if (t4 != 126991933) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t t5 = 4266434;

	t5 = (x21+((x22|x23)<=x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -6910;
	volatile int16_t x26 = INT16_MIN;
	static int64_t x27 = -24985200074LL;
	int8_t x28 = INT8_MIN;

	t6 = (x25+((x26|x27)<=x28));

	if (t6 != -6909) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1U;
	int16_t x30 = 250;
	volatile int32_t x31 = 1;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -1019139;

	t7 = (x29+((x30|x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 0U;
	int32_t x35 = INT32_MIN;
	static int16_t x36 = 930;
	volatile int32_t t8 = -5;

	t8 = (x33+((x34|x35)<=x36));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 9U;
	volatile int8_t x38 = INT8_MAX;
	int8_t x39 = -13;
	int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -222658400;

	t9 = (x37+((x38|x39)<=x40));

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int16_t x43 = 0;
	int32_t x44 = -1;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x41+((x42|x43)<=x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 12221248766090LLU;
	uint8_t x46 = 0U;
	uint8_t x47 = 68U;
	int16_t x48 = -10;
	uint64_t t11 = 21304LLU;

	t11 = (x45+((x46|x47)<=x48));

	if (t11 != 12221248766090LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 47;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = -1;
	int64_t x52 = INT64_MAX;
	int32_t t12 = 4027;

	t12 = (x49+((x50|x51)<=x52));

	if (t12 != 48) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -8681;
	static int64_t x54 = 1527LL;
	static uint64_t x55 = 16LLU;
	int8_t x56 = 2;
	int32_t t13 = 0;

	t13 = (x53+((x54|x55)<=x56));

	if (t13 != -8681) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x58 = INT32_MIN;
	int64_t x59 = 1LL;
	static int32_t x60 = -1;
	static volatile int32_t t14 = 490;

	t14 = (x57+((x58|x59)<=x60));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	volatile uint32_t x68 = UINT32_MAX;
	volatile int32_t t15 = -54277896;

	t15 = (x65+((x66|x67)<=x68));

	if (t15 != 65536) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x70 = 46U;
	int32_t x71 = INT32_MAX;
	int32_t x72 = INT32_MIN;

	t16 = (x69+((x70|x71)<=x72));

	if (t16 != 404947680485588LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int16_t x75 = -1538;
	int16_t x76 = INT16_MIN;
	volatile int32_t t17 = -86323;

	t17 = (x73+((x74|x75)<=x76));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 1U;
	uint16_t x78 = 3142U;
	volatile int16_t x79 = -52;
	volatile uint16_t x80 = UINT16_MAX;

	t18 = (x77+((x78|x79)<=x80));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x83 = INT16_MAX;
	static uint16_t x84 = 7U;
	int32_t t19 = -11;

	t19 = (x81+((x82|x83)<=x84));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = -41954997877LL;
	int8_t x86 = 3;
	uint8_t x87 = UINT8_MAX;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t20 = 4472818100966169LL;

	t20 = (x85+((x86|x87)<=x88));

	if (t20 != -41954997877LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = INT8_MIN;
	uint32_t x94 = UINT32_MAX;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = 14;

	t21 = (x93+((x94|x95)<=x96));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	static volatile uint16_t x98 = 23U;
	static int16_t x99 = -8;
	uint64_t x100 = 7876822331354LLU;
	static volatile int32_t t22 = -257012;

	t22 = (x97+((x98|x99)<=x100));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = 57766856994LL;
	int16_t x103 = -7068;
	volatile int64_t x104 = -3564507260LL;
	volatile int32_t t23 = -915;

	t23 = (x101+((x102|x103)<=x104));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -31404583LL;
	volatile int32_t x107 = -1;
	volatile int64_t t24 = 400630848LL;

	t24 = (x105+((x106|x107)<=x108));

	if (t24 != -31404583LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = UINT32_MAX;
	int16_t x110 = INT16_MAX;
	uint32_t x111 = UINT32_MAX;
	uint16_t x112 = 0U;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x109+((x110|x111)<=x112));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x114 = 4296419U;
	volatile int64_t x115 = -1LL;
	int32_t t26 = 0;

	t26 = (x113+((x114|x115)<=x116));

	if (t26 != 64) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -27;
	int8_t x118 = INT8_MIN;
	int16_t x119 = 0;
	static volatile int16_t x120 = INT16_MIN;
	volatile int32_t t27 = -3754;

	t27 = (x117+((x118|x119)<=x120));

	if (t27 != -27) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -1;
	int64_t x124 = 1143463LL;

	t28 = (x121+((x122|x123)<=x124));

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile uint16_t x126 = 2U;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x125+((x126|x127)<=x128));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x131 = 1U;
	int8_t x132 = INT8_MAX;
	volatile int64_t t30 = -245307688060761652LL;

	t30 = (x129+((x130|x131)<=x132));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x135 = -1;
	int8_t x136 = INT8_MIN;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (x133+((x134|x135)<=x136));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x138 = 13U;
	int16_t x139 = 3;
	static int32_t t32 = 3643;

	t32 = (x137+((x138|x139)<=x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x141 = INT64_MIN;
	int32_t x144 = INT32_MIN;

	t33 = (x141+((x142|x143)<=x144));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x145 = UINT64_MAX;
	int64_t x146 = 1LL;
	int64_t x147 = INT64_MAX;
	static int32_t x148 = INT32_MAX;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x145+((x146|x147)<=x148));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MAX;
	volatile uint16_t x151 = 1279U;
	int16_t x152 = 236;
	int32_t t35 = 0;

	t35 = (x149+((x150|x151)<=x152));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x159 = UINT16_MAX;
	static volatile int64_t t36 = INT64_MIN;

	t36 = (x157+((x158|x159)<=x160));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x161 = -1;
	volatile int16_t x162 = 1440;
	int32_t x164 = 80;
	int32_t t37 = -196448722;

	t37 = (x161+((x162|x163)<=x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 1138U;
	uint16_t x166 = 1564U;
	uint16_t x167 = UINT16_MAX;
	static int64_t x168 = INT64_MIN;
	static volatile int32_t t38 = 46;

	t38 = (x165+((x166|x167)<=x168));

	if (t38 != 1138) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x170 = 408786570021801654LLU;
	int32_t x172 = INT32_MIN;
	int32_t t39 = -4401489;

	t39 = (x169+((x170|x171)<=x172));

	if (t39 != 2775) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 15933U;
	uint16_t x176 = 9U;
	int32_t t40 = -954529;

	t40 = (x173+((x174|x175)<=x176));

	if (t40 != 15934) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	int32_t x178 = -1;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;

	t41 = (x177+((x178|x179)<=x180));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -676;
	static volatile int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t42 = 932282069;

	t42 = (x181+((x182|x183)<=x184));

	if (t42 != -675) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x186 = 3874231327LLU;
	volatile int32_t x188 = 147;
	static int32_t t43 = 908122;

	t43 = (x185+((x186|x187)<=x188));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = -352993348657805552LL;
	int8_t x190 = INT8_MIN;
	uint64_t x191 = UINT64_MAX;
	int64_t t44 = -1336871430930120151LL;

	t44 = (x189+((x190|x191)<=x192));

	if (t44 != -352993348657805552LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = 2589;
	static volatile int64_t x194 = 8389267645243LL;
	int32_t x195 = 704780;
	static volatile uint64_t x196 = 16675506199472LLU;
	volatile int32_t t45 = 41200;

	t45 = (x193+((x194|x195)<=x196));

	if (t45 != 2590) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	int16_t x198 = -7171;
	int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t46 = -1;

	t46 = (x197+((x198|x199)<=x200));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = -239;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = UINT16_MAX;
	volatile uint32_t x204 = 37835236U;

	t47 = (x201+((x202|x203)<=x204));

	if (t47 != -239) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 1U;
	static int64_t x206 = -35810684115LL;
	volatile int8_t x207 = INT8_MAX;
	int16_t x208 = 1434;

	t48 = (x205+((x206|x207)<=x208));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x209 = -17164706599233LL;
	static volatile uint32_t x210 = 31U;
	int8_t x211 = INT8_MIN;
	volatile int16_t x212 = -1;
	int64_t t49 = -462776139811LL;

	t49 = (x209+((x210|x211)<=x212));

	if (t49 != -17164706599232LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	int32_t x215 = INT32_MAX;
	volatile int16_t x216 = INT16_MIN;

	t50 = (x213+((x214|x215)<=x216));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x217 = INT16_MIN;
	uint16_t x218 = 20U;
	static volatile uint8_t x219 = UINT8_MAX;
	uint32_t x220 = 2U;

	t51 = (x217+((x218|x219)<=x220));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = -1;
	int16_t x222 = INT16_MIN;
	uint8_t x223 = 1U;
	int64_t x224 = 17959959LL;
	int32_t t52 = -25;

	t52 = (x221+((x222|x223)<=x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = -6LL;
	int32_t x227 = INT32_MAX;
	static volatile int64_t t53 = 3995LL;

	t53 = (x225+((x226|x227)<=x228));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 4U;
	int16_t x230 = -3901;
	int64_t x232 = -25577255117511LL;

	t54 = (x229+((x230|x231)<=x232));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t55 = -7;

	t55 = (x233+((x234|x235)<=x236));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -1;
	int32_t x239 = INT32_MIN;
	static int8_t x240 = -1;
	volatile int32_t t56 = -137081338;

	t56 = (x237+((x238|x239)<=x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x241 = 1U;
	uint64_t x242 = 6705LLU;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t57 = -489332;

	t57 = (x241+((x242|x243)<=x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x245 = INT16_MIN;
	uint32_t x246 = 6802U;
	uint32_t x247 = 4U;
	uint16_t x248 = 116U;

	t58 = (x245+((x246|x247)<=x248));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 2U;
	int16_t x250 = 4500;
	static uint64_t x252 = UINT64_MAX;
	volatile int32_t t59 = -18739332;

	t59 = (x249+((x250|x251)<=x252));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 6703021U;
	static int16_t x255 = 43;
	uint64_t x256 = UINT64_MAX;
	uint32_t t60 = 1163075474U;

	t60 = (x253+((x254|x255)<=x256));

	if (t60 != 6703022U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = INT64_MIN;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	volatile int64_t x260 = INT64_MAX;
	volatile int64_t t61 = 0LL;

	t61 = (x257+((x258|x259)<=x260));

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = 2U;
	static int32_t x263 = INT32_MAX;
	int8_t x264 = -6;
	uint32_t t62 = 9U;

	t62 = (x261+((x262|x263)<=x264));

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MAX;
	uint8_t x267 = 3U;
	uint16_t x268 = 420U;
	int32_t t63 = 2;

	t63 = (x265+((x266|x267)<=x268));

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 852U;
	volatile int8_t x270 = 1;
	int64_t x271 = -1LL;
	int64_t x272 = -19435779LL;
	static int32_t t64 = -253958946;

	t64 = (x269+((x270|x271)<=x272));

	if (t64 != 852) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x274 = 7088600727558260756LLU;
	int16_t x275 = INT16_MIN;
	int16_t x276 = 0;

	t65 = (x273+((x274|x275)<=x276));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x278 = 17;
	static volatile int64_t x279 = -12LL;
	volatile int32_t x280 = -46196;
	volatile int32_t t66 = 1;

	t66 = (x277+((x278|x279)<=x280));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = 29U;
	int16_t x286 = 44;
	volatile int64_t x287 = 41LL;
	static int8_t x288 = 16;
	volatile int32_t t67 = 2414245;

	t67 = (x285+((x286|x287)<=x288));

	if (t67 != 29) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x290 = 0U;
	static int64_t x291 = INT64_MAX;
	static volatile int32_t t68 = -306;

	t68 = (x289+((x290|x291)<=x292));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = 503;
	int16_t x294 = -855;
	int16_t x295 = 1;
	uint64_t x296 = 13756633080113LLU;

	t69 = (x293+((x294|x295)<=x296));

	if (t69 != 503) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = 9660380572LLU;
	uint64_t x299 = 2713625LLU;
	int16_t x300 = -431;
	volatile int32_t t70 = 14;

	t70 = (x297+((x298|x299)<=x300));

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x301 = UINT16_MAX;
	volatile uint16_t x302 = UINT16_MAX;
	int64_t x304 = -1LL;
	int32_t t71 = -51;

	t71 = (x301+((x302|x303)<=x304));

	if (t71 != 65536) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -1;
	uint32_t x307 = 562U;
	static int32_t t72 = -3874646;

	t72 = (x305+((x306|x307)<=x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x309 = 2U;
	int64_t x311 = -1LL;
	int32_t x312 = INT32_MIN;

	t73 = (x309+((x310|x311)<=x312));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = INT32_MIN;
	uint8_t x314 = UINT8_MAX;
	static volatile int64_t x315 = -1LL;
	uint32_t x316 = UINT32_MAX;
	static int32_t t74 = -1;

	t74 = (x313+((x314|x315)<=x316));

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 549102542177215LLU;
	uint16_t x318 = UINT16_MAX;
	uint8_t x319 = 0U;
	int32_t x320 = 267353;
	uint64_t t75 = 85067LLU;

	t75 = (x317+((x318|x319)<=x320));

	if (t75 != 549102542177216LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = -1;
	int64_t x322 = INT64_MAX;
	int32_t x323 = INT32_MIN;
	static volatile int16_t x324 = -12;
	int32_t t76 = 70;

	t76 = (x321+((x322|x323)<=x324));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = -1;
	uint8_t x330 = 1U;
	uint8_t x331 = 3U;
	uint32_t x332 = 198689180U;
	int32_t t77 = -12;

	t77 = (x329+((x330|x331)<=x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x334 = INT32_MIN;
	volatile int8_t x335 = -1;
	volatile int64_t t78 = -1713930199795817LL;

	t78 = (x333+((x334|x335)<=x336));

	if (t78 != -699LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x337 = INT64_MIN;
	uint32_t x338 = 10990445U;
	uint64_t x339 = 8816LLU;
	uint8_t x340 = UINT8_MAX;
	int64_t t79 = INT64_MIN;

	t79 = (x337+((x338|x339)<=x340));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x341 = 27559453U;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = 1629LLU;
	uint32_t t80 = 189U;

	t80 = (x341+((x342|x343)<=x344));

	if (t80 != 27559454U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x345 = 814914U;
	int16_t x347 = INT16_MAX;
	volatile int16_t x348 = -2;
	volatile uint32_t t81 = 967889833U;

	t81 = (x345+((x346|x347)<=x348));

	if (t81 != 814914U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	volatile int64_t x351 = INT64_MIN;
	static int32_t t82 = 12688;

	t82 = (x349+((x350|x351)<=x352));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = INT8_MIN;
	static int32_t x355 = -1;
	int8_t x356 = INT8_MAX;
	int32_t t83 = -75136;

	t83 = (x353+((x354|x355)<=x356));

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x358 = 1U;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = -1;
	int32_t t84 = 1598;

	t84 = (x357+((x358|x359)<=x360));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x361 = -1;
	uint64_t x362 = 6439412520731LLU;
	static uint64_t x363 = UINT64_MAX;
	int32_t t85 = -1;

	t85 = (x361+((x362|x363)<=x364));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x366 = INT16_MIN;
	uint8_t x367 = UINT8_MAX;
	static int64_t x368 = INT64_MAX;

	t86 = (x365+((x366|x367)<=x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x369 = 134LLU;
	int64_t x370 = INT64_MIN;
	volatile uint64_t x372 = 729596947286023LLU;
	static uint64_t t87 = 250687956LLU;

	t87 = (x369+((x370|x371)<=x372));

	if (t87 != 134LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = -10;
	int64_t x375 = -1LL;
	uint64_t x376 = 48LLU;
	volatile int32_t t88 = 74587;

	t88 = (x373+((x374|x375)<=x376));

	if (t88 != -10) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MIN;
	int32_t x379 = -1;
	static volatile int16_t x380 = -1;
	static int32_t t89 = -63989502;

	t89 = (x377+((x378|x379)<=x380));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x381 = -1;
	int64_t x382 = 3451987651LL;
	int8_t x383 = INT8_MIN;
	static volatile int32_t t90 = -1;

	t90 = (x381+((x382|x383)<=x384));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x385 = 1;
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MIN;

	t91 = (x385+((x386|x387)<=x388));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = 1;
	int32_t x390 = INT32_MAX;
	int8_t x391 = -5;
	int32_t t92 = -154137;

	t92 = (x389+((x390|x391)<=x392));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MIN;
	volatile int8_t x395 = INT8_MAX;
	uint16_t x396 = 4351U;
	int64_t t93 = -414367529208087LL;

	t93 = (x393+((x394|x395)<=x396));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x397 = 12773137;
	volatile int8_t x398 = INT8_MAX;
	int32_t x400 = -1;
	int32_t t94 = 76355;

	t94 = (x397+((x398|x399)<=x400));

	if (t94 != 12773137) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x401 = 8402629705842LLU;
	int16_t x402 = -1;
	static uint32_t x403 = 294282166U;
	int64_t x404 = -9851854977984LL;
	static volatile uint64_t t95 = 3217873497577423LLU;

	t95 = (x401+((x402|x403)<=x404));

	if (t95 != 8402629705842LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 89U;
	int16_t x406 = 5;
	uint32_t x407 = 15501U;
	volatile int32_t x408 = -1;
	uint32_t t96 = 9U;

	t96 = (x405+((x406|x407)<=x408));

	if (t96 != 90U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 3U;
	static uint8_t x410 = UINT8_MAX;
	uint64_t x411 = 514348673850LLU;
	static int8_t x412 = -33;
	volatile int32_t t97 = 8;

	t97 = (x409+((x410|x411)<=x412));

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 43U;
	static volatile int8_t x414 = 3;
	static volatile int32_t t98 = -6017;

	t98 = (x413+((x414|x415)<=x416));

	if (t98 != 44) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x417 = UINT8_MAX;
	volatile uint64_t x418 = 226076292479740546LLU;
	int16_t x419 = -150;
	int64_t x420 = -1LL;
	int32_t t99 = -1497752;

	t99 = (x417+((x418|x419)<=x420));

	if (t99 != 256) { NG(); } else { ; }
	
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

