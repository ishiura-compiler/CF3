#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 108801;
static int16_t x11 = -1;
int32_t x15 = 40785057;
volatile uint32_t x16 = UINT32_MAX;
uint64_t x20 = 1397393924LLU;
volatile uint8_t x21 = UINT8_MAX;
int64_t x32 = INT64_MIN;
int64_t x35 = INT64_MIN;
volatile int64_t t7 = 260082164370LL;
uint16_t x37 = 1U;
uint32_t x46 = 492U;
int8_t x47 = INT8_MIN;
int16_t x50 = -1;
static int32_t x55 = 162;
uint64_t t11 = 5557012774948LLU;
volatile uint64_t t12 = 2891837951848620LLU;
uint64_t x61 = 60029LLU;
static int32_t x66 = INT32_MIN;
int32_t x72 = 325;
uint16_t x77 = 1U;
uint64_t x78 = 28519497525742986LLU;
uint64_t t17 = 8625866618857832384LLU;
uint16_t x83 = 2336U;
static int8_t x84 = INT8_MIN;
volatile int32_t t18 = 63567;
int16_t x92 = INT16_MAX;
int32_t x102 = 11073549;
int32_t x104 = -1;
uint16_t x106 = UINT16_MAX;
int32_t x116 = INT32_MIN;
volatile int32_t x117 = -1;
static uint8_t x120 = UINT8_MAX;
int8_t x121 = INT8_MAX;
int64_t t26 = 53713090530070823LL;
volatile int8_t x128 = 1;
uint32_t x131 = UINT32_MAX;
uint32_t x135 = 17699U;
volatile uint64_t t29 = 770777743LLU;
int8_t x163 = INT8_MIN;
int64_t t34 = -8125484941151710LL;
static uint64_t t35 = 83LLU;
int64_t x169 = -14083746667863LL;
volatile int16_t x177 = INT16_MIN;
int8_t x183 = 1;
int64_t x184 = 9908238LL;
int16_t x188 = INT16_MAX;
volatile int64_t x193 = INT64_MAX;
uint16_t x194 = UINT16_MAX;
int32_t x196 = -12;
int64_t t43 = -535290759LL;
volatile int16_t x214 = INT16_MIN;
int8_t x219 = INT8_MIN;
volatile uint8_t x220 = 49U;
int32_t x224 = INT32_MIN;
int64_t t48 = 2555848696111LL;
volatile int16_t x231 = 156;
uint16_t x232 = UINT16_MAX;
int16_t x241 = INT16_MIN;
int32_t x242 = INT32_MIN;
static int8_t x243 = -7;
uint8_t x252 = 6U;
volatile int64_t t53 = 145LL;
uint8_t x257 = 3U;
static volatile uint64_t t54 = 26860578LLU;
volatile int16_t x261 = INT16_MIN;
int32_t x263 = INT32_MAX;
volatile int8_t x264 = -1;
volatile int32_t t55 = -371687;
int32_t x267 = -593331875;
volatile int64_t t57 = 43992599630252LL;
static volatile int64_t x282 = 29065230147360188LL;
int32_t x285 = -5821;
int16_t x292 = -939;
int32_t t62 = -54;
static int32_t x297 = INT32_MIN;
volatile int16_t x300 = INT16_MIN;
int16_t x304 = -1;
volatile uint64_t t65 = 40190649731020506LLU;
volatile uint64_t t66 = 0LLU;
uint64_t x332 = UINT64_MAX;
uint64_t t68 = 1976447LLU;
int64_t x339 = INT64_MAX;
volatile uint64_t t70 = 22773LLU;
int64_t x347 = INT64_MIN;
int32_t x350 = INT32_MIN;
uint16_t x351 = 8547U;
int16_t x352 = INT16_MIN;
int32_t x355 = -1;
int8_t x361 = -13;
uint64_t t75 = UINT64_MAX;
volatile uint8_t x365 = 17U;
volatile int32_t t76 = 390;
volatile int16_t x375 = INT16_MAX;
int16_t x383 = -2162;
uint8_t x389 = 1U;
int64_t x392 = -66986377171700LL;
int8_t x407 = INT8_MAX;
int64_t x412 = -1LL;
static volatile int64_t t85 = 281268235337LL;
int16_t x413 = -1;
static int32_t x414 = INT32_MIN;
volatile uint32_t x419 = 6994798U;
static int16_t x420 = INT16_MIN;
int8_t x421 = -7;
int32_t t88 = 198840160;
int16_t x429 = -533;
uint8_t x432 = 21U;
static int64_t x436 = -1LL;
volatile int64_t t93 = 2211228582128112LL;
volatile int32_t x460 = INT32_MIN;
int32_t t94 = 141072625;
int32_t x461 = 13;
uint32_t x465 = UINT32_MAX;
int32_t x467 = INT32_MAX;
int64_t x475 = -10078543LL;
static int16_t x478 = INT16_MIN;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	static volatile int8_t x6 = -58;
	int8_t x7 = -5;
	int16_t x8 = INT16_MIN;

	t0 = (((x5-x6)%x7)^x8);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	uint16_t x12 = 1U;
	static uint64_t t1 = 25447029LLU;

	t1 = (((x9-x10)%x11)^x12);

	if (t1 != 2147483646LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -8662097;
	uint16_t x14 = 1U;
	static volatile uint32_t t2 = 22184U;

	t2 = (((x13-x14)%x15)^x16);

	if (t2 != 8662097U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -23;
	int16_t x18 = INT16_MIN;
	volatile int8_t x19 = -11;
	uint64_t t3 = 1777758624022LLU;

	t3 = (((x17-x18)%x19)^x20);

	if (t3 != 1397393933LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = -1;
	int16_t x23 = 5;
	uint8_t x24 = 6U;
	volatile int32_t t4 = 142459;

	t4 = (((x21-x22)%x23)^x24);

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	static int16_t x27 = -1;
	volatile int32_t x28 = INT32_MIN;
	int64_t t5 = -7LL;

	t5 = (((x25-x26)%x27)^x28);

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -7080;
	int8_t x30 = INT8_MAX;
	uint64_t x31 = 8335LLU;
	uint64_t t6 = 10559LLU;

	t6 = (((x29-x30)%x31)^x32);

	if (t6 != 9223372036854780147LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x33 = INT64_MAX;
	static int16_t x34 = INT16_MAX;
	int32_t x36 = 178;

	t7 = (((x33-x34)%x35)^x36);

	if (t7 != 9223372036854743218LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = -1;
	static int64_t x39 = -1LL;
	volatile uint64_t x40 = 12956589LLU;
	uint64_t t8 = 4765325865LLU;

	t8 = (((x37-x38)%x39)^x40);

	if (t8 != 12956589LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	int64_t x48 = INT64_MAX;
	volatile int64_t t9 = 1954484042908LL;

	t9 = (((x45-x46)%x47)^x48);

	if (t9 != 9223372032559809004LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	volatile uint64_t x51 = UINT64_MAX;
	uint8_t x52 = 1U;
	volatile uint64_t t10 = 3344723342391134021LLU;

	t10 = (((x49-x50)%x51)^x52);

	if (t10 != 65537LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = 1;
	static int64_t x56 = INT64_MAX;

	t11 = (((x53-x54)%x55)^x56);

	if (t11 != 9223372036854775757LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 229395021444656LLU;
	volatile int16_t x58 = 9;
	int16_t x59 = INT16_MIN;
	static int64_t x60 = INT64_MIN;

	t12 = (((x57-x58)%x59)^x60);

	if (t12 != 9223601431876220455LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x62 = 47809812U;
	int8_t x63 = -1;
	uint64_t x64 = 8367010965LLU;
	uint64_t t13 = 39594LLU;

	t13 = (((x61-x62)%x63)^x64);

	if (t13 != 18446744065380782588LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = -414;
	int32_t x67 = INT32_MIN;
	static uint8_t x68 = UINT8_MAX;
	volatile int32_t t14 = -11;

	t14 = (((x65-x66)%x67)^x68);

	if (t14 != 2147483293) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 6U;
	static volatile uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MIN;
	volatile uint32_t t15 = 0U;

	t15 = (((x69-x70)%x71)^x72);

	if (t15 != 322U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	volatile int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MAX;
	int8_t x76 = 1;
	static int32_t t16 = -16304555;

	t16 = (((x73-x74)%x75)^x76);

	if (t16 != 32641) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x79 = 28881594449554595LLU;
	static int16_t x80 = -1;

	t17 = (((x77-x78)%x79)^x80);

	if (t17 != 18426095161892019999LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	static volatile int32_t x82 = 1;

	t18 = (((x81-x82)%x83)^x84);

	if (t18 != -66) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = -4009;
	uint16_t x90 = 15U;
	uint16_t x91 = UINT16_MAX;
	static volatile int32_t t19 = -1360;

	t19 = (((x89-x90)%x91)^x92);

	if (t19 != -28745) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = 3914;
	uint8_t x98 = 24U;
	volatile int64_t x99 = INT64_MIN;
	int32_t x100 = -12912183;
	volatile int64_t t20 = -30459LL;

	t20 = (((x97-x98)%x99)^x100);

	if (t20 != -12912901LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	static int64_t x103 = 7242LL;
	int64_t t21 = -242959LL;

	t21 = (((x101-x102)%x103)^x104);

	if (t21 != 3973LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x105 = UINT8_MAX;
	int16_t x107 = -1;
	int32_t x108 = 1900;
	int32_t t22 = -1;

	t22 = (((x105-x106)%x107)^x108);

	if (t22 != 1900) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	int64_t x112 = -1LL;
	int64_t t23 = -3906087LL;

	t23 = (((x109-x110)%x111)^x112);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 638569877016LLU;
	uint32_t x114 = UINT32_MAX;
	uint16_t x115 = UINT16_MAX;
	uint64_t t24 = 34403LLU;

	t24 = (((x113-x114)%x115)^x116);

	if (t24 != 18446744071562116199LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x118 = INT64_MIN;
	int64_t x119 = -1LL;
	volatile int64_t t25 = -2599370670644073579LL;

	t25 = (((x117-x118)%x119)^x120);

	if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x122 = 20319LL;
	int8_t x123 = INT8_MAX;
	volatile int32_t x124 = -813;

	t26 = (((x121-x122)%x123)^x124);

	if (t26 != 849LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	int8_t x126 = INT8_MIN;
	static int64_t x127 = INT64_MIN;
	int64_t t27 = -343988474LL;

	t27 = (((x125-x126)%x127)^x128);

	if (t27 != 126LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MIN;
	uint32_t x132 = 151532U;
	volatile uint64_t t28 = 545229240602854LLU;

	t28 = (((x129-x130)%x131)^x132);

	if (t28 != 2147332115LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = -215646386820366LL;
	uint16_t x134 = 356U;
	static uint64_t x136 = 14556043313LLU;

	t29 = (((x133-x134)%x135)^x136);

	if (t29 != 18446744059153508027LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int8_t x138 = -29;
	uint16_t x139 = 34U;
	int32_t x140 = INT32_MIN;
	uint64_t t30 = 1755950958072321LLU;

	t30 = (((x137-x138)%x139)^x140);

	if (t30 != 18446744071562067996LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x145 = 35U;
	uint8_t x146 = 0U;
	volatile int8_t x147 = INT8_MAX;
	int16_t x148 = 7;
	int32_t t31 = -903778;

	t31 = (((x145-x146)%x147)^x148);

	if (t31 != 36) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 333329LLU;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MAX;
	int32_t x156 = 225152;
	volatile uint64_t t32 = 11434477111569LLU;

	t32 = (((x153-x154)%x155)^x156);

	if (t32 != 227611LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x157 = -572305563237LL;
	uint64_t x158 = 143LLU;
	uint8_t x159 = 3U;
	uint16_t x160 = UINT16_MAX;
	volatile uint64_t t33 = 141LLU;

	t33 = (((x157-x158)%x159)^x160);

	if (t33 != 65533LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x161 = INT8_MIN;
	int8_t x162 = 0;
	int64_t x164 = 66214039150341LL;

	t34 = (((x161-x162)%x163)^x164);

	if (t34 != 66214039150341LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x165 = INT32_MAX;
	uint32_t x166 = 95562U;
	uint64_t x167 = 18232057870659LLU;
	static int8_t x168 = INT8_MIN;

	t35 = (((x165-x166)%x167)^x168);

	if (t35 != 18446744071562163509LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x170 = 2U;
	int16_t x171 = INT16_MIN;
	uint16_t x172 = 36U;
	static volatile int64_t t36 = -4374048797LL;

	t36 = (((x169-x170)%x171)^x172);

	if (t36 != -7549LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = INT16_MAX;
	int64_t x174 = -1LL;
	static volatile int64_t x175 = -383903LL;
	uint16_t x176 = 0U;
	volatile int64_t t37 = 1410LL;

	t37 = (((x173-x174)%x175)^x176);

	if (t37 != 32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x178 = INT32_MIN;
	int8_t x179 = -5;
	int32_t x180 = INT32_MIN;
	int32_t t38 = INT32_MIN;

	t38 = (((x177-x178)%x179)^x180);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = 3527038LLU;
	volatile uint64_t x182 = UINT64_MAX;
	static volatile uint64_t t39 = 1270740589753LLU;

	t39 = (((x181-x182)%x183)^x184);

	if (t39 != 9908238LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = 126U;
	int32_t t40 = -3;

	t40 = (((x185-x186)%x187)^x188);

	if (t40 != -32754) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x195 = INT32_MIN;
	int64_t t41 = -5519LL;

	t41 = (((x193-x194)%x195)^x196);

	if (t41 != -2147418124LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x197 = INT32_MIN;
	static volatile int16_t x198 = INT16_MIN;
	static volatile uint8_t x199 = 1U;
	uint16_t x200 = UINT16_MAX;
	static volatile int32_t t42 = 606070044;

	t42 = (((x197-x198)%x199)^x200);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	static int8_t x202 = -15;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = -1LL;

	t43 = (((x201-x202)%x203)^x204);

	if (t43 != 112LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = INT16_MIN;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;
	volatile int64_t t44 = -5168671418391269LL;

	t44 = (((x205-x206)%x207)^x208);

	if (t44 != -2147450882LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = -1;
	uint32_t x210 = UINT32_MAX;
	static int32_t x211 = -1;
	static volatile int32_t x212 = INT32_MAX;
	volatile uint32_t t45 = 7U;

	t45 = (((x209-x210)%x211)^x212);

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = 109666729280838LLU;
	static int16_t x215 = INT16_MIN;
	int8_t x216 = 29;
	uint64_t t46 = 42081948LLU;

	t46 = (((x213-x214)%x215)^x216);

	if (t46 != 109666729313627LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = INT64_MIN;
	int64_t t47 = 4367084810858297LL;

	t47 = (((x217-x218)%x219)^x220);

	if (t47 != 49LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MAX;

	t48 = (((x221-x222)%x223)^x224);

	if (t48 != 2147483528LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x229 = INT8_MIN;
	int8_t x230 = 1;
	int32_t t49 = -747292;

	t49 = (((x229-x230)%x231)^x232);

	if (t49 != -65408) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x244 = 1U;
	static volatile int32_t t50 = -46408588;

	t50 = (((x241-x242)%x243)^x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MAX;
	volatile int64_t x246 = 301887223894LL;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = -1;
	int64_t t51 = -189618292LL;

	t51 = (((x245-x246)%x247)^x248);

	if (t51 != 1239513046LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = INT32_MIN;
	uint32_t x250 = UINT32_MAX;
	int8_t x251 = -1;
	uint32_t t52 = 13492U;

	t52 = (((x249-x250)%x251)^x252);

	if (t52 != 2147483655U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = -4759LL;
	uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = INT64_MIN;
	volatile int8_t x256 = INT8_MAX;

	t53 = (((x253-x254)%x255)^x256);

	if (t53 != -4294972139LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x258 = INT8_MIN;
	uint64_t x259 = 10495LLU;
	int8_t x260 = INT8_MIN;

	t54 = (((x257-x258)%x259)^x260);

	if (t54 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x262 = 1871U;

	t55 = (((x261-x262)%x263)^x264);

	if (t55 != 34638) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = 6;
	int8_t x266 = -1;
	static int16_t x268 = -1;
	static int32_t t56 = 1592;

	t56 = (((x265-x266)%x267)^x268);

	if (t56 != -8) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x269 = 3;
	static volatile uint8_t x270 = 124U;
	int64_t x271 = INT64_MIN;
	static int64_t x272 = -1LL;

	t57 = (((x269-x270)%x271)^x272);

	if (t57 != 120LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x273 = 732075360820LLU;
	int32_t x274 = 15247;
	int16_t x275 = INT16_MIN;
	int16_t x276 = -1;
	static uint64_t t58 = 4339689967498676082LLU;

	t58 = (((x273-x274)%x275)^x276);

	if (t58 != 18446743341634206042LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 86U;
	uint16_t x278 = 3915U;
	static uint32_t x279 = UINT32_MAX;
	volatile int16_t x280 = INT16_MIN;
	static uint32_t t59 = 1U;

	t59 = (((x277-x278)%x279)^x280);

	if (t59 != 28939U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x281 = 44131U;
	int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MAX;
	int64_t t60 = -5320492888LL;

	t60 = (((x281-x282)%x283)^x284);

	if (t60 != -9223372035810465448LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x286 = 25570U;
	volatile uint8_t x287 = UINT8_MAX;
	static int64_t x288 = 65618960279432LL;
	volatile int64_t t61 = 3629147265538LL;

	t61 = (((x285-x286)%x287)^x288);

	if (t61 != -65618960279442LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x289 = 4;
	int16_t x290 = INT16_MIN;
	int16_t x291 = -369;

	t62 = (((x289-x290)%x291)^x292);

	if (t62 != -647) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = 920886007971108072LL;
	uint8_t x294 = 116U;
	static int16_t x295 = INT16_MIN;
	uint8_t x296 = 11U;
	int64_t t63 = 97531963LL;

	t63 = (((x293-x294)%x295)^x296);

	if (t63 != 21631LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x298 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	volatile int32_t t64 = 1;

	t64 = (((x297-x298)%x299)^x300);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x301 = UINT8_MAX;
	uint64_t x302 = UINT64_MAX;
	static int64_t x303 = INT64_MIN;

	t65 = (((x301-x302)%x303)^x304);

	if (t65 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = 36247LL;
	uint64_t x306 = 3LLU;
	static int64_t x307 = INT64_MIN;
	uint16_t x308 = UINT16_MAX;

	t66 = (((x305-x306)%x307)^x308);

	if (t66 != 29291LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x313 = 3742;
	int64_t x314 = INT64_MAX;
	static uint64_t x315 = 47500905896LLU;
	uint8_t x316 = 1U;
	volatile uint64_t t67 = 10674050849109LLU;

	t67 = (((x313-x314)%x315)^x316);

	if (t67 != 11718424750LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x329 = 0;
	static volatile int16_t x330 = INT16_MIN;
	static int32_t x331 = -830747;

	t68 = (((x329-x330)%x331)^x332);

	if (t68 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x337 = -1LL;
	int32_t x338 = -3574;
	volatile int8_t x340 = INT8_MAX;
	static volatile int64_t t69 = -444184214548LL;

	t69 = (((x337-x338)%x339)^x340);

	if (t69 != 3466LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x341 = 3U;
	static int8_t x342 = -1;
	uint64_t x343 = 60900268090453LLU;
	int64_t x344 = 1095LL;

	t70 = (((x341-x342)%x343)^x344);

	if (t70 != 1091LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x345 = -10;
	uint16_t x346 = 0U;
	int64_t x348 = INT64_MIN;
	int64_t t71 = -127304LL;

	t71 = (((x345-x346)%x347)^x348);

	if (t71 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x349 = 11LL;
	static volatile int64_t t72 = 3673590LL;

	t72 = (((x349-x350)%x351)^x352);

	if (t72 != -25594LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x353 = UINT16_MAX;
	static uint64_t x354 = UINT64_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	static volatile uint64_t t73 = 1782548994LLU;

	t73 = (((x353-x354)%x355)^x356);

	if (t73 != 131071LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = 118162549548342100LL;
	static volatile int8_t x358 = 61;
	static volatile int64_t x359 = INT64_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile int64_t t74 = 8763534136LL;

	t74 = (((x357-x358)%x359)^x360);

	if (t74 != -118162549548342121LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x362 = INT16_MAX;
	int16_t x363 = -1;
	static uint64_t x364 = UINT64_MAX;

	t75 = (((x361-x362)%x363)^x364);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x366 = -1;
	uint16_t x367 = 954U;
	static int16_t x368 = INT16_MIN;

	t76 = (((x365-x366)%x367)^x368);

	if (t76 != -32750) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x369 = -1;
	int64_t x370 = -3339282137801LL;
	int16_t x371 = INT16_MAX;
	uint64_t x372 = 658417108854LLU;
	uint64_t t77 = 278349701968393375LLU;

	t77 = (((x369-x370)%x371)^x372);

	if (t77 != 658417094423LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = -815168300;
	uint8_t x374 = UINT8_MAX;
	int64_t x376 = INT64_MAX;
	volatile int64_t t78 = -4017154LL;

	t78 = (((x373-x374)%x375)^x376);

	if (t78 != -9223372036854751913LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x377 = 6U;
	volatile int64_t x378 = -1LL;
	static volatile int64_t x379 = INT64_MIN;
	uint32_t x380 = 2U;
	volatile int64_t t79 = -4332398539969654928LL;

	t79 = (((x377-x378)%x379)^x380);

	if (t79 != 5LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x381 = INT64_MIN;
	int8_t x382 = -3;
	int8_t x384 = INT8_MIN;
	volatile int64_t t80 = 94636560LL;

	t80 = (((x381-x382)%x383)^x384);

	if (t80 != 1731LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x385 = 10;
	int64_t x386 = -1LL;
	int16_t x387 = 1;
	volatile int64_t x388 = INT64_MIN;
	int64_t t81 = INT64_MIN;

	t81 = (((x385-x386)%x387)^x388);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x390 = 1831U;
	int32_t x391 = 20341;
	int64_t t82 = -873LL;

	t82 = (((x389-x390)%x391)^x392);

	if (t82 != -66986377174382LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x401 = -1;
	volatile int8_t x402 = INT8_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	int32_t x404 = INT32_MIN;
	volatile int32_t t83 = 55;

	t83 = (((x401-x402)%x403)^x404);

	if (t83 != 2147483520) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = -74210282531531418LL;
	volatile int8_t x406 = INT8_MIN;
	static volatile int64_t x408 = -1LL;
	int64_t t84 = -60672206579530546LL;

	t84 = (((x405-x406)%x407)^x408);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = INT64_MAX;
	volatile int32_t x410 = INT32_MAX;
	int64_t x411 = 756LL;

	t85 = (((x409-x410)%x411)^x412);

	if (t85 != -637LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x415 = INT8_MIN;
	uint64_t x416 = 7688607095048LLU;
	volatile uint64_t t86 = 7414748615LLU;

	t86 = (((x413-x414)%x415)^x416);

	if (t86 != 7688607095159LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x417 = INT32_MAX;
	int64_t x418 = 31118LL;
	int64_t t87 = -12945540365920LL;

	t87 = (((x417-x418)%x419)^x420);

	if (t87 != -48761LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x422 = UINT8_MAX;
	static int16_t x423 = INT16_MIN;
	uint8_t x424 = 23U;

	t88 = (((x421-x422)%x423)^x424);

	if (t88 != -275) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = 6;
	uint8_t x426 = 0U;
	int16_t x427 = INT16_MIN;
	static volatile int64_t x428 = -1LL;
	volatile int64_t t89 = 1LL;

	t89 = (((x425-x426)%x427)^x428);

	if (t89 != -7LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x430 = -1;
	int8_t x431 = INT8_MIN;
	volatile int32_t t90 = -1505712;

	t90 = (((x429-x430)%x431)^x432);

	if (t90 != -7) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x433 = -1LL;
	volatile int64_t x434 = INT64_MAX;
	int16_t x435 = INT16_MIN;
	volatile int64_t t91 = -7107070385490LL;

	t91 = (((x433-x434)%x435)^x436);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = -337037618;
	int8_t x442 = INT8_MAX;
	int64_t x443 = -151845157541589644LL;
	static int32_t x444 = INT32_MIN;
	int64_t t92 = 4417289386LL;

	t92 = (((x441-x442)%x443)^x444);

	if (t92 != 1810445903LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x445 = 489U;
	int64_t x446 = -3502LL;
	int32_t x447 = INT32_MIN;
	volatile uint8_t x448 = 0U;

	t93 = (((x445-x446)%x447)^x448);

	if (t93 != 3991LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = 37585;
	volatile int16_t x458 = INT16_MIN;
	volatile int16_t x459 = -15;

	t94 = (((x457-x458)%x459)^x460);

	if (t94 != -2147483645) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x462 = 10107437133588448LLU;
	uint64_t x463 = 463LLU;
	static int32_t x464 = -1;
	uint64_t t95 = 33780LLU;

	t95 = (((x461-x462)%x463)^x464);

	if (t95 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x466 = -1;
	int64_t x468 = -34391044049815960LL;
	volatile int64_t t96 = 16156398518852908LL;

	t96 = (((x465-x466)%x467)^x468);

	if (t96 != -34391044049815960LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x469 = -1117;
	uint8_t x470 = UINT8_MAX;
	int8_t x471 = INT8_MAX;
	uint32_t x472 = 5096187U;
	static uint32_t t97 = 323346873U;

	t97 = (((x469-x470)%x471)^x472);

	if (t97 != 4289871201U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x473 = 3897283581924287LLU;
	static uint64_t x474 = 123008522862432LLU;
	uint32_t x476 = 258456U;
	uint64_t t98 = 11814783126409957LLU;

	t98 = (((x473-x474)%x475)^x476);

	if (t98 != 3774275059049927LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x477 = UINT8_MAX;
	static uint8_t x479 = 8U;
	int16_t x480 = INT16_MAX;
	volatile int32_t t99 = -106590;

	t99 = (((x477-x478)%x479)^x480);

	if (t99 != 32760) { NG(); } else { ; }
	
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

