#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 4020U;
int64_t x7 = 2LL;
volatile uint16_t x8 = 20U;
int64_t t2 = 16LL;
volatile uint64_t x15 = 349481390528LLU;
volatile uint64_t t3 = 231212037254435131LLU;
uint16_t x17 = 3U;
int64_t x20 = -1LL;
int16_t x25 = 55;
int64_t x27 = 1963321475703LL;
volatile uint64_t t7 = 3768422142LLU;
static uint16_t x33 = UINT16_MAX;
static uint8_t x38 = UINT8_MAX;
int64_t x45 = INT64_MIN;
static uint64_t x49 = 26044306886LLU;
volatile int16_t x55 = -1;
volatile int16_t x56 = -1;
volatile int32_t t15 = 1206990;
static int8_t x70 = -1;
volatile int8_t x71 = INT8_MIN;
uint32_t x75 = UINT32_MAX;
static volatile uint32_t x76 = 1U;
int16_t x82 = INT16_MIN;
static uint64_t x92 = 131LLU;
uint64_t t21 = 10503286LLU;
volatile int8_t x97 = 1;
volatile int8_t x105 = INT8_MAX;
uint64_t t25 = 4226485658LLU;
volatile int64_t x113 = -178363981LL;
int16_t x114 = -212;
int64_t x117 = INT64_MIN;
static int32_t x132 = -43;
uint64_t x135 = 22024879345430004LLU;
uint64_t x136 = 31560430LLU;
static int16_t x142 = INT16_MIN;
uint16_t x143 = UINT16_MAX;
int64_t t32 = 3093951611684LL;
static uint64_t t33 = 228LLU;
uint8_t x158 = 27U;
int32_t x159 = INT32_MIN;
volatile int64_t t34 = 5LL;
uint16_t x164 = 7U;
int8_t x172 = -1;
static volatile uint64_t t38 = 195033724911489LLU;
uint16_t x177 = UINT16_MAX;
int64_t x178 = -73LL;
int32_t x187 = -1;
volatile int8_t x190 = -3;
static uint32_t t42 = 323631U;
int64_t x211 = INT64_MAX;
volatile uint32_t x213 = 3U;
uint16_t x215 = 14564U;
uint16_t x219 = UINT16_MAX;
static int32_t x224 = INT32_MIN;
int64_t t46 = 610279151366LL;
static uint32_t x233 = UINT32_MAX;
static int8_t x238 = -1;
volatile int32_t t48 = 111;
int32_t x246 = -2;
uint64_t t50 = 1277582795296677195LLU;
uint8_t x258 = UINT8_MAX;
int64_t x260 = -1LL;
volatile uint64_t t53 = 4LLU;
volatile int32_t x265 = 0;
volatile int16_t x269 = INT16_MIN;
uint32_t x277 = UINT32_MAX;
int16_t x279 = -1;
int32_t x283 = INT32_MAX;
uint64_t x285 = 454450022803808201LLU;
static int32_t x296 = -1;
uint64_t x311 = 2LLU;
int32_t x316 = -1;
int8_t x317 = -7;
uint64_t x324 = UINT64_MAX;
int8_t x336 = INT8_MAX;
int32_t t70 = 123;
int8_t x341 = INT8_MIN;
uint64_t x345 = 76800LLU;
uint32_t x353 = UINT32_MAX;
int64_t x358 = -1LL;
volatile int64_t t74 = 28549287164LL;
static int32_t x366 = -1;
int64_t x367 = INT64_MIN;
uint16_t x373 = 1U;
static int64_t t77 = 160491862418871147LL;
int64_t t78 = 102LL;
volatile int64_t t82 = 23373563877LL;
uint16_t x412 = UINT16_MAX;
int64_t x420 = 35LL;
int8_t x422 = -7;
volatile int64_t t88 = 323930497897LL;
int8_t x445 = 0;
volatile uint64_t t93 = 253257240576LLU;
int32_t t94 = -41841303;
volatile uint8_t x457 = 23U;
int64_t x460 = INT64_MAX;
uint32_t x471 = UINT32_MAX;
volatile int64_t t99 = -121LL;


void f0(void) {
	uint64_t x1 = 48355910LLU;
	int8_t x2 = -12;
	uint64_t x3 = 295527066LLU;
	int32_t x4 = INT32_MIN;
	static uint64_t t0 = 865014318235450LLU;

	t0 = (((x1+x2)&x3)&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int64_t t1 = -3861152224862LL;

	t1 = (((x5+x6)&x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static uint32_t x10 = UINT32_MAX;
	int16_t x11 = INT16_MIN;
	static int64_t x12 = -7LL;

	t2 = (((x9+x10)&x11)&x12);

	if (t2 != 4294934528LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 19400692327776LL;
	volatile int32_t x14 = INT32_MIN;
	int8_t x16 = -1;

	t3 = (((x13+x14)&x15)&x16);

	if (t3 != 303481152LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 1U;
	int8_t x19 = -1;
	static int64_t t4 = -4051837268LL;

	t4 = (((x17+x18)&x19)&x20);

	if (t4 != 4LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 54U;
	uint16_t x22 = 13990U;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = 1;
	volatile int32_t t5 = 23;

	t5 = (((x21+x22)&x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 22651U;
	int8_t x28 = 1;
	volatile int64_t t6 = 762197493591430809LL;

	t6 = (((x25+x26)&x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 5184517303LLU;
	uint32_t x30 = 17177U;
	volatile int64_t x31 = INT64_MAX;
	uint16_t x32 = 13U;

	t7 = (((x29+x30)&x31)&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x34 = 22834U;
	volatile int64_t x35 = INT64_MIN;
	int16_t x36 = 10881;
	int64_t t8 = -2724668635LL;

	t8 = (((x33+x34)&x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 2130U;
	int16_t x39 = INT16_MIN;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -272935826;

	t9 = (((x37+x38)&x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 16U;
	uint8_t x42 = UINT8_MAX;
	volatile int16_t x43 = 9;
	static int8_t x44 = -1;
	volatile int32_t t10 = -2317;

	t10 = (((x41+x42)&x43)&x44);

	if (t10 != 9) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x46 = 5755451;
	int8_t x47 = INT8_MIN;
	static uint64_t x48 = 694727827663LLU;
	volatile uint64_t t11 = 0LLU;

	t11 = (((x45+x46)&x47)&x48);

	if (t11 != 81920LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	uint32_t x51 = 6U;
	static int64_t x52 = INT64_MAX;
	volatile uint64_t t12 = 51445615884LLU;

	t12 = (((x49+x50)&x51)&x52);

	if (t12 != 6LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static uint32_t x54 = UINT32_MAX;
	uint32_t t13 = 265206289U;

	t13 = (((x53+x54)&x55)&x56);

	if (t13 != 32766U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = 1;
	static uint32_t x58 = 1027054836U;
	uint8_t x59 = 20U;
	static int32_t x60 = -1;
	static volatile uint32_t t14 = 4428U;

	t14 = (((x57+x58)&x59)&x60);

	if (t14 != 20U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static int32_t x62 = 42;
	int16_t x63 = INT16_MIN;
	int16_t x64 = -14246;

	t15 = (((x61+x62)&x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 3489387958060054590LLU;
	static volatile uint64_t x72 = 9245025299LLU;
	static volatile uint64_t t16 = 48823323998457LLU;

	t16 = (((x69+x70)&x71)&x72);

	if (t16 != 587325440LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -313118LL;
	uint64_t x74 = UINT64_MAX;
	uint64_t t17 = 36757863LLU;

	t17 = (((x73+x74)&x75)&x76);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = -444;
	int32_t x78 = 88155320;
	int32_t x79 = INT32_MAX;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t18 = -3808;

	t18 = (((x77+x78)&x79)&x80);

	if (t18 != 252) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = 341U;
	volatile int32_t x83 = INT32_MIN;
	int32_t x84 = -1;
	volatile int32_t t19 = INT32_MIN;

	t19 = (((x81+x82)&x83)&x84);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -1;
	int16_t x86 = -1;
	volatile int8_t x87 = INT8_MAX;
	static uint16_t x88 = 17495U;
	int32_t t20 = 25;

	t20 = (((x85+x86)&x87)&x88);

	if (t20 != 86) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	volatile int16_t x91 = INT16_MIN;

	t21 = (((x89+x90)&x91)&x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = UINT32_MAX;
	int32_t x95 = INT32_MIN;
	volatile uint64_t x96 = UINT64_MAX;
	uint64_t t22 = 707657LLU;

	t22 = (((x93+x94)&x95)&x96);

	if (t22 != 2147483648LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	static int64_t x100 = 723326889LL;
	static volatile int64_t t23 = 100697LL;

	t23 = (((x97+x98)&x99)&x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = -7940590436826LL;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = 3U;
	volatile int64_t t24 = 2770094LL;

	t24 = (((x105+x106)&x107)&x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -1;
	int16_t x110 = INT16_MAX;
	volatile uint8_t x111 = 4U;
	static uint64_t x112 = 5196176506999LLU;

	t25 = (((x109+x110)&x111)&x112);

	if (t25 != 4LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x115 = -1LL;
	int16_t x116 = 6944;
	static int64_t t26 = 59501044LL;

	t26 = (((x113+x114)&x115)&x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x118 = 13U;
	uint32_t x119 = 144U;
	static int16_t x120 = -6661;
	volatile int64_t t27 = 441LL;

	t27 = (((x117+x118)&x119)&x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = UINT16_MAX;
	static int64_t x130 = INT64_MIN;
	uint16_t x131 = 244U;
	int64_t t28 = -648604744692125LL;

	t28 = (((x129+x130)&x131)&x132);

	if (t28 != 212LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -10873;
	int8_t x134 = 0;
	static uint64_t t29 = 1682636733000780336LLU;

	t29 = (((x133+x134)&x135)&x136);

	if (t29 != 25198724LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	volatile int16_t x139 = INT16_MIN;
	uint64_t x140 = 4336973322728120579LLU;
	static uint64_t t30 = 52LLU;

	t30 = (((x137+x138)&x139)&x140);

	if (t30 != 4336973322728112128LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -5023074LL;
	static int64_t x144 = -157996557181LL;
	static int64_t t31 = -26060LL;

	t31 = (((x141+x142)&x143)&x144);

	if (t31 != 55426LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x149 = -1LL;
	volatile int16_t x150 = INT16_MAX;
	int32_t x151 = -1;
	int8_t x152 = 0;

	t32 = (((x149+x150)&x151)&x152);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x153 = INT32_MIN;
	uint16_t x154 = 27U;
	uint64_t x155 = 24980109569365LLU;
	uint8_t x156 = 1U;

	t33 = (((x153+x154)&x155)&x156);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	int64_t x160 = INT64_MAX;

	t34 = (((x157+x158)&x159)&x160);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = 2U;
	uint64_t x162 = UINT64_MAX;
	volatile int16_t x163 = INT16_MAX;
	volatile uint64_t t35 = 2789638279858736105LLU;

	t35 = (((x161+x162)&x163)&x164);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 60U;
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MIN;
	volatile int8_t x168 = INT8_MAX;
	int64_t t36 = -181293357832141713LL;

	t36 = (((x165+x166)&x167)&x168);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = INT8_MIN;
	static int8_t x170 = INT8_MAX;
	volatile uint16_t x171 = UINT16_MAX;
	int32_t t37 = 1450960;

	t37 = (((x169+x170)&x171)&x172);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MAX;
	volatile uint64_t x174 = 135LLU;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = 5U;

	t38 = (((x173+x174)&x175)&x176);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x179 = -1;
	static int16_t x180 = INT16_MIN;
	volatile int64_t t39 = 103035LL;

	t39 = (((x177+x178)&x179)&x180);

	if (t39 != 32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x181 = INT8_MIN;
	static int16_t x182 = INT16_MIN;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = -9;
	volatile uint64_t t40 = 30094346605880LLU;

	t40 = (((x181+x182)&x183)&x184);

	if (t40 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x185 = UINT32_MAX;
	int64_t x186 = -1LL;
	int8_t x188 = INT8_MIN;
	int64_t t41 = 20756502280493339LL;

	t41 = (((x185+x186)&x187)&x188);

	if (t41 != 4294967168LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x189 = UINT32_MAX;
	int16_t x191 = INT16_MIN;
	volatile int32_t x192 = INT32_MAX;

	t42 = (((x189+x190)&x191)&x192);

	if (t42 != 2147450880U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MAX;
	int32_t x210 = -1;
	volatile int32_t x212 = -1;
	volatile int64_t t43 = 376262713077LL;

	t43 = (((x209+x210)&x211)&x212);

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x214 = -6;
	static int32_t x216 = -51;
	uint32_t t44 = 206886U;

	t44 = (((x213+x214)&x215)&x216);

	if (t44 != 14532U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	int32_t x220 = 173;
	uint32_t t45 = 86551U;

	t45 = (((x217+x218)&x219)&x220);

	if (t45 != 172U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x221 = 62903;
	static int64_t x222 = -1LL;
	static uint32_t x223 = 157U;

	t46 = (((x221+x222)&x223)&x224);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x234 = 13LLU;
	int16_t x235 = -1;
	int8_t x236 = -1;
	volatile uint64_t t47 = 157LLU;

	t47 = (((x233+x234)&x235)&x236);

	if (t47 != 4294967308LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x237 = UINT8_MAX;
	uint8_t x239 = 2U;
	static int8_t x240 = INT8_MIN;

	t48 = (((x237+x238)&x239)&x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = 1732434578782577020LLU;
	uint64_t x242 = 201658266LLU;
	static int16_t x243 = INT16_MAX;
	volatile int32_t x244 = INT32_MAX;
	volatile uint64_t t49 = 12719315LLU;

	t49 = (((x241+x242)&x243)&x244);

	if (t49 != 28950LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = -1LL;
	static uint64_t x247 = 477LLU;
	volatile int64_t x248 = INT64_MIN;

	t50 = (((x245+x246)&x247)&x248);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x253 = 1U;
	int32_t x254 = 167483335;
	int8_t x255 = INT8_MAX;
	int8_t x256 = INT8_MAX;
	volatile int32_t t51 = 109990;

	t51 = (((x253+x254)&x255)&x256);

	if (t51 != 72) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x257 = -1;
	uint32_t x259 = 5U;
	int64_t t52 = -6910983655664566LL;

	t52 = (((x257+x258)&x259)&x260);

	if (t52 != 4LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x261 = 9868059LLU;
	static int8_t x262 = -2;
	int64_t x263 = -31873294LL;
	uint32_t x264 = UINT32_MAX;

	t53 = (((x261+x262)&x263)&x264);

	if (t53 != 1081872LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x266 = 986U;
	volatile int16_t x267 = 156;
	uint8_t x268 = 5U;
	volatile int32_t t54 = 1390682;

	t54 = (((x265+x266)&x267)&x268);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x270 = -236LL;
	uint32_t x271 = 1354811U;
	int8_t x272 = -40;
	volatile int64_t t55 = -2019253776918930LL;

	t55 = (((x269+x270)&x271)&x272);

	if (t55 != 1322000LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = 22;
	uint16_t x274 = UINT16_MAX;
	int8_t x275 = 10;
	uint64_t x276 = UINT64_MAX;
	uint64_t t56 = 15139366472LLU;

	t56 = (((x273+x274)&x275)&x276);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x278 = -1;
	int32_t x280 = INT32_MIN;
	uint32_t t57 = 57055U;

	t57 = (((x277+x278)&x279)&x280);

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x281 = 2910881LLU;
	volatile int8_t x282 = INT8_MIN;
	uint16_t x284 = 14U;
	uint64_t t58 = 22457927429LLU;

	t58 = (((x281+x282)&x283)&x284);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x286 = 5098995U;
	volatile int8_t x287 = -57;
	int8_t x288 = INT8_MIN;
	volatile uint64_t t59 = 102745LLU;

	t59 = (((x285+x286)&x287)&x288);

	if (t59 != 454450022808907136LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x293 = INT16_MAX;
	int16_t x294 = -275;
	int8_t x295 = -5;
	static volatile int32_t t60 = -159941055;

	t60 = (((x293+x294)&x295)&x296);

	if (t60 != 32488) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x297 = INT16_MIN;
	static int64_t x298 = -1LL;
	volatile int64_t x299 = -1LL;
	int64_t x300 = 5274099973LL;
	volatile int64_t t61 = 23613694LL;

	t61 = (((x297+x298)&x299)&x300);

	if (t61 != 5274099973LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = 2;
	volatile uint16_t x302 = UINT16_MAX;
	int32_t x303 = -82638;
	int64_t x304 = -1LL;
	int64_t t62 = -378246257028LL;

	t62 = (((x301+x302)&x303)&x304);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int16_t x306 = INT16_MAX;
	uint32_t x307 = UINT32_MAX;
	uint8_t x308 = 0U;
	volatile uint64_t t63 = 1060LLU;

	t63 = (((x305+x306)&x307)&x308);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = -2;
	uint64_t x310 = 534038LLU;
	static uint64_t x312 = 1521109955971371LLU;
	static uint64_t t64 = 25572270252117523LLU;

	t64 = (((x309+x310)&x311)&x312);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = 0;
	int64_t x314 = INT64_MIN;
	static volatile int64_t x315 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = (((x313+x314)&x315)&x316);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x318 = UINT8_MAX;
	uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 7U;
	volatile int32_t t66 = 1;

	t66 = (((x317+x318)&x319)&x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = INT64_MIN;
	static int8_t x322 = 44;
	static uint8_t x323 = UINT8_MAX;
	uint64_t t67 = 65609707077LLU;

	t67 = (((x321+x322)&x323)&x324);

	if (t67 != 44LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x325 = -1;
	int16_t x326 = 0;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = INT32_MIN;
	uint64_t t68 = 5925175LLU;

	t68 = (((x325+x326)&x327)&x328);

	if (t68 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x333 = 0U;
	static int64_t x334 = INT64_MAX;
	int64_t x335 = INT64_MIN;
	volatile int64_t t69 = 34568787939140252LL;

	t69 = (((x333+x334)&x335)&x336);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;

	t70 = (((x337+x338)&x339)&x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x342 = INT8_MAX;
	int8_t x343 = -53;
	int32_t x344 = 76849930;
	volatile int32_t t71 = -572;

	t71 = (((x341+x342)&x343)&x344);

	if (t71 != 76849930) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x346 = -2;
	int8_t x347 = -1;
	int64_t x348 = -1LL;
	uint64_t t72 = 122985LLU;

	t72 = (((x345+x346)&x347)&x348);

	if (t72 != 76798LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x354 = -1;
	int16_t x355 = -1;
	static uint8_t x356 = 0U;
	volatile uint32_t t73 = 17511803U;

	t73 = (((x353+x354)&x355)&x356);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x357 = -1;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 7U;

	t74 = (((x357+x358)&x359)&x360);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = 31;
	uint8_t x362 = UINT8_MAX;
	volatile int8_t x363 = 37;
	int32_t x364 = -1651;
	int32_t t75 = 239227268;

	t75 = (((x361+x362)&x363)&x364);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x365 = 3U;
	static volatile int32_t x368 = -1;
	int64_t t76 = -189055546313089LL;

	t76 = (((x365+x366)&x367)&x368);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x374 = 31U;
	volatile uint8_t x375 = 34U;
	int64_t x376 = -1LL;

	t77 = (((x373+x374)&x375)&x376);

	if (t77 != 32LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x377 = -1916;
	int32_t x378 = -1;
	int32_t x379 = INT32_MAX;
	static int64_t x380 = 59940557LL;

	t78 = (((x377+x378)&x379)&x380);

	if (t78 != 59938945LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = 0;
	int32_t x383 = INT32_MAX;
	uint8_t x384 = UINT8_MAX;
	int32_t t79 = -6106617;

	t79 = (((x381+x382)&x383)&x384);

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x385 = 14;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	uint64_t x388 = 3531LLU;
	volatile uint64_t t80 = 212440986124LLU;

	t80 = (((x385+x386)&x387)&x388);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MAX;
	uint8_t x391 = UINT8_MAX;
	static int8_t x392 = 0;
	int64_t t81 = -122600497523809LL;

	t81 = (((x389+x390)&x391)&x392);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x393 = 3254U;
	int32_t x394 = -1;
	static int64_t x395 = -1LL;
	int8_t x396 = INT8_MAX;

	t82 = (((x393+x394)&x395)&x396);

	if (t82 != 53LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x397 = INT16_MAX;
	uint8_t x398 = UINT8_MAX;
	int8_t x399 = INT8_MIN;
	volatile int64_t x400 = -675LL;
	static volatile int64_t t83 = -316LL;

	t83 = (((x397+x398)&x399)&x400);

	if (t83 != 32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x405 = 3352410U;
	uint64_t x406 = 2103725582LLU;
	static uint64_t x407 = UINT64_MAX;
	static uint8_t x408 = UINT8_MAX;
	uint64_t t84 = 203793598326731LLU;

	t84 = (((x405+x406)&x407)&x408);

	if (t84 != 104LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = INT8_MAX;
	static volatile uint32_t x410 = 23967U;
	int32_t x411 = INT32_MAX;
	uint32_t t85 = 2572320U;

	t85 = (((x409+x410)&x411)&x412);

	if (t85 != 24094U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = -1LL;
	static int64_t x414 = -34433649559274980LL;
	int64_t x415 = -694532255867LL;
	int16_t x416 = INT16_MIN;
	volatile int64_t t86 = -10775600999LL;

	t86 = (((x413+x414)&x415)&x416);

	if (t86 != -34434204500328448LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x417 = 216646146LLU;
	volatile int8_t x418 = -1;
	int64_t x419 = INT64_MIN;
	volatile uint64_t t87 = 40958148904LLU;

	t87 = (((x417+x418)&x419)&x420);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = INT32_MAX;
	int32_t x423 = INT32_MIN;
	static int64_t x424 = INT64_MIN;

	t88 = (((x421+x422)&x423)&x424);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x429 = 395871819U;
	int8_t x430 = INT8_MAX;
	int32_t x431 = -2140548;
	uint8_t x432 = 95U;
	uint32_t t89 = 14435380U;

	t89 = (((x429+x430)&x431)&x432);

	if (t89 != 72U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = -1;
	static uint8_t x434 = 100U;
	static int32_t x435 = INT32_MIN;
	uint8_t x436 = 13U;
	int32_t t90 = 4946270;

	t90 = (((x433+x434)&x435)&x436);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x437 = INT32_MIN;
	int64_t x438 = -1LL;
	int32_t x439 = -83;
	uint64_t x440 = 508195347740LLU;
	uint64_t t91 = 10074367568724420LLU;

	t91 = (((x437+x438)&x439)&x440);

	if (t91 != 508195347724LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x441 = INT8_MAX;
	int32_t x442 = INT32_MIN;
	static volatile int16_t x443 = -223;
	uint8_t x444 = 3U;
	static int32_t t92 = 1209;

	t92 = (((x441+x442)&x443)&x444);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x446 = INT16_MIN;
	static uint64_t x447 = 513595675LLU;
	int8_t x448 = INT8_MAX;

	t93 = (((x445+x446)&x447)&x448);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x453 = INT8_MIN;
	uint16_t x454 = 321U;
	uint8_t x455 = UINT8_MAX;
	static int8_t x456 = INT8_MIN;

	t94 = (((x453+x454)&x455)&x456);

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x458 = -2;
	int16_t x459 = -1;
	int64_t t95 = 990LL;

	t95 = (((x457+x458)&x459)&x460);

	if (t95 != 21LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x461 = INT32_MAX;
	static volatile int64_t x462 = INT64_MIN;
	uint8_t x463 = UINT8_MAX;
	volatile uint16_t x464 = 2U;
	volatile int64_t t96 = -39941630432056004LL;

	t96 = (((x461+x462)&x463)&x464);

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x465 = 1;
	int64_t x466 = 111423976527916572LL;
	uint64_t x467 = 49740390568LLU;
	int64_t x468 = 79448500191028LL;
	volatile uint64_t t97 = 472828688348633LLU;

	t97 = (((x465+x466)&x467)&x468);

	if (t97 != 8192LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x469 = 2U;
	int64_t x470 = INT64_MIN;
	int16_t x472 = INT16_MIN;
	volatile int64_t t98 = 17664897953950814LL;

	t98 = (((x469+x470)&x471)&x472);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x473 = INT64_MIN;
	int16_t x474 = 1;
	volatile int32_t x475 = 1;
	static uint16_t x476 = UINT16_MAX;

	t99 = (((x473+x474)&x475)&x476);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

